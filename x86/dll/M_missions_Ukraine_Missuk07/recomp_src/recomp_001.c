#include "recomp.h"

/* FUN_100085f0 @ 0x126685f0 (490 bytes, 165 insns) */
void f_126685f0(void) {
  FTRACE(0x126685f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126685f0 push ebp */
  push32((uint32_t)(EBP));
  /* 126685f1 mov ebp, esp */
  EBP = (ESP);
  /* 126685f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 126685f6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126685fa jne 0x1266860d */
  if (!C.zf) goto L_1266860d;
  /* 126685fc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 126685ff push eax */
  push32((uint32_t)(EAX));
  /* 12668600 call 0x12668440 */
  push32(0x12668605u); f_12668440();
  /* 12668605 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12668608 jmp 0x126687d6 */
  goto L_126687d6;
L_1266860d:;
  /* 1266860d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12668611 jne 0x12668626 */
  if (!C.zf) goto L_12668626;
  /* 12668613 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12668616 push ecx */
  push32((uint32_t)(ECX));
  /* 12668617 call 0x126687e0 */
  push32(0x1266861cu); f_126687e0();
  /* 1266861c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266861f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12668621 jmp 0x126687d6 */
  goto L_126687d6;
L_12668626:;
  /* 12668626 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1266862d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12668631 ja 0x126687a9 */
  if ((!C.cf&&!C.zf)) goto L_126687a9;
  /* 12668637 push 9 */
  push32((uint32_t)(0x9u));
  /* 12668639 call 0x12668070 */
  push32(0x1266863eu); f_12668070();
  /* 1266863e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12668641 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12668644 push edx */
  push32((uint32_t)(EDX));
  /* 12668645 call 0x12668970 */
  push32(0x1266864au); f_12668970();
  /* 1266864a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266864d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12668650 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12668654 je 0x1266876c */
  if (C.zf) goto L_1266876c;
  /* 1266865a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266865d cmp eax, dword ptr [0x1268ec94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1268ec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12668663 ja 0x126686e0 */
  if ((!C.cf&&!C.zf)) goto L_126686e0;
  /* 12668665 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12668668 push ecx */
  push32((uint32_t)(ECX));
  /* 12668669 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266866c push edx */
  push32((uint32_t)(EDX));
  /* 1266866d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12668670 push eax */
  push32((uint32_t)(EAX));
  /* 12668671 call 0x12669840 */
  push32(0x12668676u); f_12669840();
  /* 12668676 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12668679 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266867b je 0x12668685 */
  if (C.zf) goto L_12668685;
  /* 1266867d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12668680 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12668683 jmp 0x126686e0 */
  goto L_126686e0;
L_12668685:;
  /* 12668685 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12668688 push edx */
  push32((uint32_t)(EDX));
  /* 12668689 call 0x12669000 */
  push32(0x1266868eu); f_12669000();
  /* 1266868e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12668691 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12668694 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12668698 je 0x126686e0 */
  if (C.zf) goto L_126686e0;
  /* 1266869a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266869d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 126686a0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126686a3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 126686a6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 126686a9 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126686ac jae 0x126686b6 */
  if (!C.cf) goto L_126686b6;
  /* 126686ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126686b1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 126686b4 jmp 0x126686bc */
  goto L_126686bc;
L_126686b6:;
  /* 126686b6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 126686b9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_126686bc:;
  /* 126686bc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 126686bf push edx */
  push32((uint32_t)(EDX));
  /* 126686c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126686c3 push eax */
  push32((uint32_t)(EAX));
  /* 126686c4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 126686c7 push ecx */
  push32((uint32_t)(ECX));
  /* 126686c8 call 0x1266af50 */
  push32(0x126686cdu); f_1266af50();
  /* 126686cd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126686d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 126686d3 push edx */
  push32((uint32_t)(EDX));
  /* 126686d4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 126686d7 push eax */
  push32((uint32_t)(EAX));
  /* 126686d8 call 0x12668a30 */
  push32(0x126686ddu); f_12668a30();
  /* 126686dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_126686e0:;
  /* 126686e0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126686e4 jne 0x12668760 */
  if (!C.zf) goto L_12668760;
  /* 126686e6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126686ea jne 0x126686f3 */
  if (!C.zf) goto L_126686f3;
  /* 126686ec mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_126686f3:;
  /* 126686f3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 126686f6 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126686f9 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 126686fc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 126686ff mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12668702 push edx */
  push32((uint32_t)(EDX));
  /* 12668703 push 0 */
  push32((uint32_t)(0x0u));
  /* 12668705 mov eax, dword ptr [0x12691f4c] */
  EAX = (r32((uint32_t)(0x12691f4c)));
  /* 1266870a push eax */
  push32((uint32_t)(EAX));
  /* 1266870b call dword ptr [0x12693304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693304))), 0x12668711u);
  /* 12668711 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12668714 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12668718 je 0x12668760 */
  if (C.zf) goto L_12668760;
  /* 1266871a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266871d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12668720 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12668723 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12668726 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12668729 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266872c jae 0x12668736 */
  if (!C.cf) goto L_12668736;
  /* 1266872e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12668731 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12668734 jmp 0x1266873c */
  goto L_1266873c;
L_12668736:;
  /* 12668736 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12668739 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_1266873c:;
  /* 1266873c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1266873f push eax */
  push32((uint32_t)(EAX));
  /* 12668740 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12668743 push ecx */
  push32((uint32_t)(ECX));
  /* 12668744 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12668747 push edx */
  push32((uint32_t)(EDX));
  /* 12668748 call 0x1266af50 */
  push32(0x1266874du); f_1266af50();
  /* 1266874d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12668750 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12668753 push eax */
  push32((uint32_t)(EAX));
  /* 12668754 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12668757 push ecx */
  push32((uint32_t)(ECX));
  /* 12668758 call 0x12668a30 */
  push32(0x1266875du); f_12668a30();
  /* 1266875d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12668760:;
  /* 12668760 push 9 */
  push32((uint32_t)(0x9u));
  /* 12668762 call 0x12668110 */
  push32(0x12668767u); f_12668110();
  /* 12668767 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266876a jmp 0x126687a9 */
  goto L_126687a9;
L_1266876c:;
  /* 1266876c push 9 */
  push32((uint32_t)(0x9u));
  /* 1266876e call 0x12668110 */
  push32(0x12668773u); f_12668110();
  /* 12668773 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12668776 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266877a jne 0x12668783 */
  if (!C.zf) goto L_12668783;
  /* 1266877c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12668783:;
  /* 12668783 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12668786 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12668789 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1266878c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1266878f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12668792 push eax */
  push32((uint32_t)(EAX));
  /* 12668793 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12668796 push ecx */
  push32((uint32_t)(ECX));
  /* 12668797 push 0 */
  push32((uint32_t)(0x0u));
  /* 12668799 mov edx, dword ptr [0x12691f4c] */
  EDX = (r32((uint32_t)(0x12691f4c)));
  /* 1266879f push edx */
  push32((uint32_t)(EDX));
  /* 126687a0 call dword ptr [0x1269330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269330c))), 0x126687a6u);
  /* 126687a6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_126687a9:;
  /* 126687a9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126687ad jne 0x126687b8 */
  if (!C.zf) goto L_126687b8;
  /* 126687af cmp dword ptr [0x12690790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12690790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126687b6 jne 0x126687bd */
  if (!C.zf) goto L_126687bd;
L_126687b8:;
  /* 126687b8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 126687bb jmp 0x126687d6 */
  goto L_126687d6;
L_126687bd:;
  /* 126687bd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 126687c0 push eax */
  push32((uint32_t)(EAX));
  /* 126687c1 call 0x126683b0 */
  push32(0x126687c6u); f_126683b0();
  /* 126687c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126687c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126687cb jne 0x126687d1 */
  if (!C.zf) goto L_126687d1;
  /* 126687cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126687cf jmp 0x126687d6 */
  goto L_126687d6;
L_126687d1:;
  /* 126687d1 jmp 0x12668626 */
  goto L_12668626;
L_126687d6:;
  /* 126687d6 mov esp, ebp */
  ESP = (EBP);
  /* 126687d8 pop ebp */
  EBP = (pop32());
  /* 126687d9 ret  */
  ESPCHK(0x126685f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100087e0 @ 0x126687e0 (104 bytes, 38 insns) */
void f_126687e0(void) {
  FTRACE(0x126687e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126687e0 push ebp */
  push32((uint32_t)(EBP));
  /* 126687e1 mov ebp, esp */
  EBP = (ESP);
  /* 126687e3 push ecx */
  push32((uint32_t)(ECX));
  /* 126687e4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126687e8 jne 0x126687ec */
  if (!C.zf) goto L_126687ec;
  /* 126687ea jmp 0x12668844 */
  goto L_12668844;
L_126687ec:;
  /* 126687ec push 9 */
  push32((uint32_t)(0x9u));
  /* 126687ee call 0x12668070 */
  push32(0x126687f3u); f_12668070();
  /* 126687f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126687f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126687f9 push eax */
  push32((uint32_t)(EAX));
  /* 126687fa call 0x12668970 */
  push32(0x126687ffu); f_12668970();
  /* 126687ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12668802 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12668805 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12668809 je 0x12668827 */
  if (C.zf) goto L_12668827;
  /* 1266880b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266880e push ecx */
  push32((uint32_t)(ECX));
  /* 1266880f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12668812 push edx */
  push32((uint32_t)(EDX));
  /* 12668813 call 0x12668a30 */
  push32(0x12668818u); f_12668a30();
  /* 12668818 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266881b push 9 */
  push32((uint32_t)(0x9u));
  /* 1266881d call 0x12668110 */
  push32(0x12668822u); f_12668110();
  /* 12668822 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12668825 jmp 0x12668844 */
  goto L_12668844;
L_12668827:;
  /* 12668827 push 9 */
  push32((uint32_t)(0x9u));
  /* 12668829 call 0x12668110 */
  push32(0x1266882eu); f_12668110();
  /* 1266882e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12668831 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12668834 push eax */
  push32((uint32_t)(EAX));
  /* 12668835 push 0 */
  push32((uint32_t)(0x0u));
  /* 12668837 mov ecx, dword ptr [0x12691f4c] */
  ECX = (r32((uint32_t)(0x12691f4c)));
  /* 1266883d push ecx */
  push32((uint32_t)(ECX));
  /* 1266883e call dword ptr [0x126933b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126933b0))), 0x12668844u);
L_12668844:;
  /* 12668844 mov esp, ebp */
  ESP = (EBP);
  /* 12668846 pop ebp */
  EBP = (pop32());
  /* 12668847 ret  */
  ESPCHK(0x126687e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008850 @ 0x12668850 (116 bytes, 34 insns) */
void f_12668850(void) {
  FTRACE(0x12668850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12668850 push ebp */
  push32((uint32_t)(EBP));
  /* 12668851 mov ebp, esp */
  EBP = (ESP);
  /* 12668853 push ecx */
  push32((uint32_t)(ECX));
  /* 12668854 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 1266885b push 9 */
  push32((uint32_t)(0x9u));
  /* 1266885d call 0x12668070 */
  push32(0x12668862u); f_12668070();
  /* 12668862 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12668865 call 0x12669f60 */
  push32(0x1266886au); f_12669f60();
  /* 1266886a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266886c jge 0x12668875 */
  if ((C.sf==C.of)) goto L_12668875;
  /* 1266886e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_12668875:;
  /* 12668875 push 9 */
  push32((uint32_t)(0x9u));
  /* 12668877 call 0x12668110 */
  push32(0x1266887cu); f_12668110();
  /* 1266887c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266887f push 0 */
  push32((uint32_t)(0x0u));
  /* 12668881 push 0 */
  push32((uint32_t)(0x0u));
  /* 12668883 mov eax, dword ptr [0x12691f4c] */
  EAX = (r32((uint32_t)(0x12691f4c)));
  /* 12668888 push eax */
  push32((uint32_t)(EAX));
  /* 12668889 call dword ptr [0x12693390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693390))), 0x1266888fu);
  /* 1266888f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12668891 jne 0x126688bd */
  if (!C.zf) goto L_126688bd;
  /* 12668893 call dword ptr [0x12693370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693370))), 0x12668899u);
  /* 12668899 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266889c jne 0x126688b6 */
  if (!C.zf) goto L_126688b6;
  /* 1266889e call 0x1266c550 */
  push32(0x126688a3u); f_1266c550();
  /* 126688a3 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 126688a9 call 0x1266c540 */
  push32(0x126688aeu); f_1266c540();
  /* 126688ae mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 126688b4 jmp 0x126688bd */
  goto L_126688bd;
L_126688b6:;
  /* 126688b6 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_126688bd:;
  /* 126688bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126688c0 mov esp, ebp */
  ESP = (EBP);
  /* 126688c2 pop ebp */
  EBP = (pop32());
  /* 126688c3 ret  */
  ESPCHK(0x12668850u, _esp0);
  ESP += 4; return;
}

/* FUN_100088d0 @ 0x126688d0 (10 bytes, 5 insns) */
void f_126688d0(void) {
  FTRACE(0x126688d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126688d0 push ebp */
  push32((uint32_t)(EBP));
  /* 126688d1 mov ebp, esp */
  EBP = (ESP);
  /* 126688d3 call 0x12668850 */
  push32(0x126688d8u); f_12668850();
  /* 126688d8 pop ebp */
  EBP = (pop32());
  /* 126688d9 ret  */
  ESPCHK(0x126688d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100088e0 @ 0x126688e0 (10 bytes, 5 insns) */
void f_126688e0(void) {
  FTRACE(0x126688e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126688e0 push ebp */
  push32((uint32_t)(EBP));
  /* 126688e1 mov ebp, esp */
  EBP = (ESP);
  /* 126688e3 mov eax, dword ptr [0x1268ec94] */
  EAX = (r32((uint32_t)(0x1268ec94)));
  /* 126688e8 pop ebp */
  EBP = (pop32());
  /* 126688e9 ret  */
  ESPCHK(0x126688e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100088f0 @ 0x126688f0 (31 bytes, 11 insns) */
void f_126688f0(void) {
  FTRACE(0x126688f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126688f0 push ebp */
  push32((uint32_t)(EBP));
  /* 126688f1 mov ebp, esp */
  EBP = (ESP);
  /* 126688f3 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126688fa jbe 0x12668900 */
  if ((C.cf||C.zf)) goto L_12668900;
  /* 126688fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126688fe jmp 0x1266890d */
  goto L_1266890d;
L_12668900:;
  /* 12668900 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12668903 mov dword ptr [0x1268ec94], eax */
  w32((uint32_t)(0x1268ec94), (EAX));
  /* 12668908 mov eax, 1 */
  EAX = (0x1u);
L_1266890d:;
  /* 1266890d pop ebp */
  EBP = (pop32());
  /* 1266890e ret  */
  ESPCHK(0x126688f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008910 @ 0x12668910 (89 bytes, 20 insns) */
void f_12668910(void) {
  FTRACE(0x12668910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12668910 push ebp */
  push32((uint32_t)(EBP));
  /* 12668911 mov ebp, esp */
  EBP = (ESP);
  /* 12668913 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 12668918 push 0 */
  push32((uint32_t)(0x0u));
  /* 1266891a mov eax, dword ptr [0x12691f4c] */
  EAX = (r32((uint32_t)(0x12691f4c)));
  /* 1266891f push eax */
  push32((uint32_t)(EAX));
  /* 12668920 call dword ptr [0x12693304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693304))), 0x12668926u);
  /* 12668926 mov dword ptr [0x12691f48], eax */
  w32((uint32_t)(0x12691f48), (EAX));
  /* 1266892b cmp dword ptr [0x12691f48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12691f48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12668932 jne 0x12668938 */
  if (!C.zf) goto L_12668938;
  /* 12668934 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12668936 jmp 0x12668967 */
  goto L_12668967;
L_12668938:;
  /* 12668938 mov ecx, dword ptr [0x12691f48] */
  ECX = (r32((uint32_t)(0x12691f48)));
  /* 1266893e mov dword ptr [0x12691f3c], ecx */
  w32((uint32_t)(0x12691f3c), (ECX));
  /* 12668944 mov dword ptr [0x12691f40], 0 */
  w32((uint32_t)(0x12691f40), (0x0u));
  /* 1266894e mov dword ptr [0x12691f44], 0 */
  w32((uint32_t)(0x12691f44), (0x0u));
  /* 12668958 mov dword ptr [0x12691f28], 0x10 */
  w32((uint32_t)(0x12691f28), (0x10u));
  /* 12668962 mov eax, 1 */
  EAX = (0x1u);
L_12668967:;
  /* 12668967 pop ebp */
  EBP = (pop32());
  /* 12668968 ret  */
  ESPCHK(0x12668910u, _esp0);
  ESP += 4; return;
}

/* FUN_10008970 @ 0x12668970 (85 bytes, 29 insns) */
void f_12668970(void) {
  FTRACE(0x12668970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12668970 push ebp */
  push32((uint32_t)(EBP));
  /* 12668971 mov ebp, esp */
  EBP = (ESP);
  /* 12668973 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12668976 mov eax, dword ptr [0x12691f44] */
  EAX = (r32((uint32_t)(0x12691f44)));
  /* 1266897b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1266897e mov ecx, dword ptr [0x12691f48] */
  ECX = (r32((uint32_t)(0x12691f48)));
  /* 12668984 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12668986 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12668989 mov edx, dword ptr [0x12691f48] */
  EDX = (r32((uint32_t)(0x12691f48)));
  /* 1266898f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12668992:;
  /* 12668992 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12668995 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12668998 jae 0x126689bf */
  if (!C.cf) goto L_126689bf;
  /* 1266899a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266899d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 126689a0 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126689a3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 126689a6 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126689ad jae 0x126689b4 */
  if (!C.cf) goto L_126689b4;
  /* 126689af mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 126689b2 jmp 0x126689c1 */
  goto L_126689c1;
L_126689b4:;
  /* 126689b4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 126689b7 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126689ba mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 126689bd jmp 0x12668992 */
  goto L_12668992;
L_126689bf:;
  /* 126689bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_126689c1:;
  /* 126689c1 mov esp, ebp */
  ESP = (EBP);
  /* 126689c3 pop ebp */
  EBP = (pop32());
  /* 126689c4 ret  */
  ESPCHK(0x12668970u, _esp0);
  ESP += 4; return;
}

/* FUN_100089d0 @ 0x126689d0 (95 bytes, 33 insns) */
void f_126689d0(void) {
  FTRACE(0x126689d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126689d0 push ebp */
  push32((uint32_t)(EBP));
  /* 126689d1 mov ebp, esp */
  EBP = (ESP);
  /* 126689d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 126689d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126689d9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 126689dc sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126689df mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 126689e2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 126689e5 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 126689e8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 126689eb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 126689f0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126689f3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 126689f5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126689f8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 126689fb and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 126689fd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 126689ff jne 0x12668a21 */
  if (!C.zf) goto L_12668a21;
  /* 12668a01 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12668a04 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 12668a07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12668a09 jne 0x12668a21 */
  if (!C.zf) goto L_12668a21;
  /* 12668a0b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12668a0e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 12668a14 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12668a16 je 0x12668a21 */
  if (C.zf) goto L_12668a21;
  /* 12668a18 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 12668a1f jmp 0x12668a28 */
  goto L_12668a28;
L_12668a21:;
  /* 12668a21 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12668a28:;
  /* 12668a28 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12668a2b mov esp, ebp */
  ESP = (EBP);
  /* 12668a2d pop ebp */
  EBP = (pop32());
  /* 12668a2e ret  */
  ESPCHK(0x126689d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a30 @ 0x12668a30 (1485 bytes, 453 insns) */
void f_12668a30(void) {
  FTRACE(0x12668a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12668a30 push ebp */
  push32((uint32_t)(EBP));
  /* 12668a31 mov ebp, esp */
  EBP = (ESP);
  /* 12668a33 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12668a36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12668a39 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12668a3c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 12668a3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12668a42 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12668a45 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12668a48 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12668a4b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12668a4e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 12668a51 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12668a54 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12668a57 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12668a5d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12668a60 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 12668a67 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12668a6a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12668a6d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12668a70 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12668a73 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12668a76 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12668a78 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12668a7b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12668a7e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12668a81 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12668a84 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 12668a87 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12668a8a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12668a8c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12668a8f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12668a92 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 12668a95 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12668a98 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12668a9b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12668a9e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12668aa0 jne 0x12668bc8 */
  if (!C.zf) goto L_12668bc8;
  /* 12668aa6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12668aa9 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12668aac sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12668aaf mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12668ab2 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12668ab6 jbe 0x12668abf */
  if ((C.cf||C.zf)) goto L_12668abf;
  /* 12668ab8 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12668abf:;
  /* 12668abf mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12668ac2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12668ac5 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12668ac8 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12668acb jne 0x12668ba1 */
  if (!C.zf) goto L_12668ba1;
  /* 12668ad1 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12668ad5 jae 0x12668b36 */
  if (!C.cf) goto L_12668b36;
  /* 12668ad7 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12668adc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12668adf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12668ae1 not eax */
  EAX = (~(EAX));
  /* 12668ae3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12668ae6 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12668ae9 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12668aed and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12668aef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12668af2 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12668af5 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12668af9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12668afc add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12668aff mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12668b02 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12668b05 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12668b08 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12668b0b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12668b0e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12668b11 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12668b14 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12668b18 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12668b1a jne 0x12668b34 */
  if (!C.zf) goto L_12668b34;
  /* 12668b1c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12668b21 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12668b24 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12668b26 not eax */
  EAX = (~(EAX));
  /* 12668b28 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12668b2b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12668b2d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12668b2f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12668b32 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12668b34:;
  /* 12668b34 jmp 0x12668ba1 */
  goto L_12668ba1;
L_12668b36:;
  /* 12668b36 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12668b39 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12668b3c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12668b41 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12668b43 not edx */
  EDX = (~(EDX));
  /* 12668b45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12668b48 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12668b4b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12668b52 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12668b54 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12668b57 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12668b5a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 12668b61 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12668b64 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12668b67 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12668b6a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12668b6d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12668b70 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12668b73 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12668b76 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12668b79 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12668b7c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12668b80 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12668b82 jne 0x12668ba1 */
  if (!C.zf) goto L_12668ba1;
  /* 12668b84 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12668b87 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12668b8a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12668b8f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12668b91 not edx */
  EDX = (~(EDX));
  /* 12668b93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12668b96 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12668b99 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12668b9b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12668b9e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12668ba1:;
  /* 12668ba1 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12668ba4 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12668ba7 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12668baa mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12668bad mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12668bb0 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12668bb3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12668bb6 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12668bb9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12668bbc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12668bbf mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12668bc2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12668bc5 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_12668bc8:;
  /* 12668bc8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12668bcb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12668bce sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12668bd1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12668bd4 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12668bd8 jbe 0x12668be1 */
  if ((C.cf||C.zf)) goto L_12668be1;
  /* 12668bda mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_12668be1:;
  /* 12668be1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12668be4 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12668be7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12668be9 jne 0x12668d45 */
  if (!C.zf) goto L_12668d45;
  /* 12668bef mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12668bf2 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12668bf5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 12668bf8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12668bfb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12668bfe sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12668c01 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12668c04 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12668c08 jbe 0x12668c11 */
  if ((C.cf||C.zf)) goto L_12668c11;
  /* 12668c0a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_12668c11:;
  /* 12668c11 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12668c14 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12668c17 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12668c1a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12668c1d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12668c20 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12668c23 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12668c26 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12668c2a jbe 0x12668c33 */
  if ((C.cf||C.zf)) goto L_12668c33;
  /* 12668c2c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_12668c33:;
  /* 12668c33 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12668c36 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12668c39 je 0x12668d3f */
  if (C.zf) goto L_12668d3f;
  /* 12668c3f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12668c42 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12668c45 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12668c48 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12668c4b jne 0x12668d21 */
  if (!C.zf) goto L_12668d21;
  /* 12668c51 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12668c55 jae 0x12668cb6 */
  if (!C.cf) goto L_12668cb6;
  /* 12668c57 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12668c5c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12668c5f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12668c61 not edx */
  EDX = (~(EDX));
  /* 12668c63 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12668c66 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12668c69 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12668c6d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12668c6f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12668c72 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12668c75 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12668c79 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12668c7c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12668c7f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12668c82 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12668c85 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12668c88 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12668c8b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12668c8e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12668c91 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12668c94 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12668c98 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12668c9a jne 0x12668cb4 */
  if (!C.zf) goto L_12668cb4;
  /* 12668c9c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12668ca1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12668ca4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12668ca6 not edx */
  EDX = (~(EDX));
  /* 12668ca8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12668cab mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12668cad and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12668caf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12668cb2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12668cb4:;
  /* 12668cb4 jmp 0x12668d21 */
  goto L_12668d21;
L_12668cb6:;
  /* 12668cb6 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12668cb9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12668cbc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12668cc1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12668cc3 not eax */
  EAX = (~(EAX));
  /* 12668cc5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12668cc8 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12668ccb mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12668cd2 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12668cd4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12668cd7 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12668cda mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12668ce1 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12668ce4 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12668ce7 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12668cea sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12668ced mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12668cf0 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12668cf3 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12668cf6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12668cf9 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12668cfc movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12668d00 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12668d02 jne 0x12668d21 */
  if (!C.zf) goto L_12668d21;
  /* 12668d04 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12668d07 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12668d0a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12668d0f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12668d11 not eax */
  EAX = (~(EAX));
  /* 12668d13 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12668d16 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12668d19 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12668d1b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12668d1e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12668d21:;
  /* 12668d21 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12668d24 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12668d27 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12668d2a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12668d2d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12668d30 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12668d33 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12668d36 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12668d39 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12668d3c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_12668d3f:;
  /* 12668d3f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12668d42 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_12668d45:;
  /* 12668d45 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12668d48 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12668d4b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12668d4d jne 0x12668d5b */
  if (!C.zf) goto L_12668d5b;
  /* 12668d4f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12668d52 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12668d55 je 0x12668e6b */
  if (C.zf) goto L_12668e6b;
L_12668d5b:;
  /* 12668d5b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12668d5e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12668d61 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 12668d64 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12668d67 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12668d6a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12668d6d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12668d70 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12668d73 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12668d76 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12668d79 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12668d7c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12668d7f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12668d82 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12668d85 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12668d88 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12668d8b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12668d8e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12668d91 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12668d94 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12668d97 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12668d9a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12668d9d jne 0x12668e6b */
  if (!C.zf) goto L_12668e6b;
  /* 12668da3 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12668da7 jae 0x12668e04 */
  if (!C.cf) goto L_12668e04;
  /* 12668da9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12668dac add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12668daf movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12668db3 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12668db6 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12668db9 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12668dbc add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12668dbf mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12668dc2 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12668dc5 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12668dc8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12668dca jne 0x12668de2 */
  if (!C.zf) goto L_12668de2;
  /* 12668dcc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12668dd1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12668dd4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12668dd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12668dd9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12668ddb or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12668ddd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12668de0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12668de2:;
  /* 12668de2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12668de7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12668dea shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12668dec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12668def mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12668df2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12668df6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12668df8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12668dfb mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12668dfe mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12668e02 jmp 0x12668e6b */
  goto L_12668e6b;
L_12668e04:;
  /* 12668e04 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12668e07 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12668e0a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12668e0e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12668e11 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12668e14 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12668e17 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12668e1a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12668e1d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12668e20 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12668e23 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12668e25 jne 0x12668e42 */
  if (!C.zf) goto L_12668e42;
  /* 12668e27 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12668e2a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12668e2d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12668e32 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12668e34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12668e37 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12668e3a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12668e3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12668e3f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12668e42:;
  /* 12668e42 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12668e45 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12668e48 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12668e4d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12668e4f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12668e52 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12668e55 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12668e5c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12668e5e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12668e61 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12668e64 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_12668e6b:;
  /* 12668e6b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12668e6e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12668e71 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12668e73 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12668e76 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12668e79 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12668e7c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 12668e7f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12668e82 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12668e84 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12668e87 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12668e8a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12668e8c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12668e8f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12668e92 jne 0x12668ff9 */
  if (!C.zf) goto L_12668ff9;
  /* 12668e98 cmp dword ptr [0x12691f40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12691f40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12668e9f je 0x12668fe8 */
  if (C.zf) goto L_12668fe8;
  /* 12668ea5 mov eax, dword ptr [0x12691f38] */
  EAX = (r32((uint32_t)(0x12691f38)));
  /* 12668eaa shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 12668ead mov ecx, dword ptr [0x12691f40] */
  ECX = (r32((uint32_t)(0x12691f40)));
  /* 12668eb3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12668eb6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12668eb8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12668ebb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12668ec0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12668ec5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12668ec8 push eax */
  push32((uint32_t)(EAX));
  /* 12668ec9 call dword ptr [0x12693368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693368))), 0x12668ecfu);
  /* 12668ecf mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12668ed4 mov ecx, dword ptr [0x12691f38] */
  ECX = (r32((uint32_t)(0x12691f38)));
  /* 12668eda shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12668edc mov eax, dword ptr [0x12691f40] */
  EAX = (r32((uint32_t)(0x12691f40)));
  /* 12668ee1 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12668ee4 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12668ee6 mov edx, dword ptr [0x12691f40] */
  EDX = (r32((uint32_t)(0x12691f40)));
  /* 12668eec mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12668eef mov eax, dword ptr [0x12691f40] */
  EAX = (r32((uint32_t)(0x12691f40)));
  /* 12668ef4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12668ef7 mov edx, dword ptr [0x12691f38] */
  EDX = (r32((uint32_t)(0x12691f38)));
  /* 12668efd mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 12668f08 mov eax, dword ptr [0x12691f40] */
  EAX = (r32((uint32_t)(0x12691f40)));
  /* 12668f0d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12668f10 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 12668f13 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12668f16 mov eax, dword ptr [0x12691f40] */
  EAX = (r32((uint32_t)(0x12691f40)));
  /* 12668f1b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12668f1e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 12668f21 mov edx, dword ptr [0x12691f40] */
  EDX = (r32((uint32_t)(0x12691f40)));
  /* 12668f27 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12668f2a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 12668f2e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12668f30 jne 0x12668f46 */
  if (!C.zf) goto L_12668f46;
  /* 12668f32 mov edx, dword ptr [0x12691f40] */
  EDX = (r32((uint32_t)(0x12691f40)));
  /* 12668f38 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12668f3b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 12668f3d mov ecx, dword ptr [0x12691f40] */
  ECX = (r32((uint32_t)(0x12691f40)));
  /* 12668f43 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_12668f46:;
  /* 12668f46 mov edx, dword ptr [0x12691f40] */
  EDX = (r32((uint32_t)(0x12691f40)));
  /* 12668f4c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12668f50 jne 0x12668fe8 */
  if (!C.zf) goto L_12668fe8;
  /* 12668f56 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12668f5b push 0 */
  push32((uint32_t)(0x0u));
  /* 12668f5d mov eax, dword ptr [0x12691f40] */
  EAX = (r32((uint32_t)(0x12691f40)));
  /* 12668f62 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12668f65 push ecx */
  push32((uint32_t)(ECX));
  /* 12668f66 call dword ptr [0x12693368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693368))), 0x12668f6cu);
  /* 12668f6c mov edx, dword ptr [0x12691f40] */
  EDX = (r32((uint32_t)(0x12691f40)));
  /* 12668f72 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12668f75 push eax */
  push32((uint32_t)(EAX));
  /* 12668f76 push 0 */
  push32((uint32_t)(0x0u));
  /* 12668f78 mov ecx, dword ptr [0x12691f4c] */
  ECX = (r32((uint32_t)(0x12691f4c)));
  /* 12668f7e push ecx */
  push32((uint32_t)(ECX));
  /* 12668f7f call dword ptr [0x126933b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126933b0))), 0x12668f85u);
  /* 12668f85 mov edx, dword ptr [0x12691f44] */
  EDX = (r32((uint32_t)(0x12691f44)));
  /* 12668f8b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12668f8e mov eax, dword ptr [0x12691f48] */
  EAX = (r32((uint32_t)(0x12691f48)));
  /* 12668f93 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12668f95 mov ecx, dword ptr [0x12691f40] */
  ECX = (r32((uint32_t)(0x12691f40)));
  /* 12668f9b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12668f9e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12668fa0 push eax */
  push32((uint32_t)(EAX));
  /* 12668fa1 mov edx, dword ptr [0x12691f40] */
  EDX = (r32((uint32_t)(0x12691f40)));
  /* 12668fa7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12668faa push edx */
  push32((uint32_t)(EDX));
  /* 12668fab mov eax, dword ptr [0x12691f40] */
  EAX = (r32((uint32_t)(0x12691f40)));
  /* 12668fb0 push eax */
  push32((uint32_t)(EAX));
  /* 12668fb1 call 0x1266c560 */
  push32(0x12668fb6u); f_1266c560();
  /* 12668fb6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12668fb9 mov ecx, dword ptr [0x12691f44] */
  ECX = (r32((uint32_t)(0x12691f44)));
  /* 12668fbf sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12668fc2 mov dword ptr [0x12691f44], ecx */
  w32((uint32_t)(0x12691f44), (ECX));
  /* 12668fc8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12668fcb cmp edx, dword ptr [0x12691f40] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12691f40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12668fd1 jbe 0x12668fdc */
  if ((C.cf||C.zf)) goto L_12668fdc;
  /* 12668fd3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12668fd6 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12668fd9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12668fdc:;
  /* 12668fdc mov ecx, dword ptr [0x12691f48] */
  ECX = (r32((uint32_t)(0x12691f48)));
  /* 12668fe2 mov dword ptr [0x12691f3c], ecx */
  w32((uint32_t)(0x12691f3c), (ECX));
L_12668fe8:;
  /* 12668fe8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12668feb mov dword ptr [0x12691f40], edx */
  w32((uint32_t)(0x12691f40), (EDX));
  /* 12668ff1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12668ff4 mov dword ptr [0x12691f38], eax */
  w32((uint32_t)(0x12691f38), (EAX));
L_12668ff9:;
  /* 12668ff9 mov esp, ebp */
  ESP = (EBP);
  /* 12668ffb pop ebp */
  EBP = (pop32());
  /* 12668ffc ret  */
  ESPCHK(0x12668a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10009000 @ 0x12669000 (1334 bytes, 427 insns) */
void f_12669000(void) {
  FTRACE(0x12669000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12669000 push ebp */
  push32((uint32_t)(EBP));
  /* 12669001 mov ebp, esp */
  EBP = (ESP);
  /* 12669003 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12669006 push esi */
  push32((uint32_t)(ESI));
  /* 12669007 mov eax, dword ptr [0x12691f44] */
  EAX = (r32((uint32_t)(0x12691f44)));
  /* 1266900c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1266900f mov ecx, dword ptr [0x12691f48] */
  ECX = (r32((uint32_t)(0x12691f48)));
  /* 12669015 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12669017 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1266901a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266901d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12669020 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12669023 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12669026 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12669029 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1266902c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266902f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12669032 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12669036 jge 0x1266904c */
  if ((C.sf==C.of)) goto L_1266904c;
  /* 12669038 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1266903b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1266903e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12669040 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12669043 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 1266904a jmp 0x12669061 */
  goto L_12669061;
L_1266904c:;
  /* 1266904c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12669053 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12669056 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12669059 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1266905c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1266905e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_12669061:;
  /* 12669061 mov ecx, dword ptr [0x12691f3c] */
  ECX = (r32((uint32_t)(0x12691f3c)));
  /* 12669067 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1266906a:;
  /* 1266906a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1266906d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12669070 jae 0x12669096 */
  if (!C.cf) goto L_12669096;
  /* 12669072 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12669075 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12669078 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 1266907a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1266907d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12669080 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 12669083 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12669085 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12669087 je 0x1266908b */
  if (C.zf) goto L_1266908b;
  /* 12669089 jmp 0x12669096 */
  goto L_12669096;
L_1266908b:;
  /* 1266908b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1266908e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12669091 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12669094 jmp 0x1266906a */
  goto L_1266906a;
L_12669096:;
  /* 12669096 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12669099 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266909c jne 0x1266917d */
  if (!C.zf) goto L_1266917d;
  /* 126690a2 mov eax, dword ptr [0x12691f48] */
  EAX = (r32((uint32_t)(0x12691f48)));
  /* 126690a7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_126690aa:;
  /* 126690aa mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 126690ad cmp ecx, dword ptr [0x12691f3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12691f3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126690b3 jae 0x126690d9 */
  if (!C.cf) goto L_126690d9;
  /* 126690b5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 126690b8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 126690bb and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 126690bd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 126690c0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 126690c3 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 126690c6 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 126690c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126690ca je 0x126690ce */
  if (C.zf) goto L_126690ce;
  /* 126690cc jmp 0x126690d9 */
  goto L_126690d9;
L_126690ce:;
  /* 126690ce mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 126690d1 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126690d4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 126690d7 jmp 0x126690aa */
  goto L_126690aa;
L_126690d9:;
  /* 126690d9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 126690dc cmp ecx, dword ptr [0x12691f3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12691f3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126690e2 jne 0x1266917d */
  if (!C.zf) goto L_1266917d;
L_126690e8:;
  /* 126690e8 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 126690eb cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126690ee jae 0x12669106 */
  if (!C.cf) goto L_12669106;
  /* 126690f0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 126690f3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126690f7 je 0x126690fb */
  if (C.zf) goto L_126690fb;
  /* 126690f9 jmp 0x12669106 */
  goto L_12669106;
L_126690fb:;
  /* 126690fb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 126690fe add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12669101 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12669104 jmp 0x126690e8 */
  goto L_126690e8;
L_12669106:;
  /* 12669106 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12669109 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266910c jne 0x12669157 */
  if (!C.zf) goto L_12669157;
  /* 1266910e mov eax, dword ptr [0x12691f48] */
  EAX = (r32((uint32_t)(0x12691f48)));
  /* 12669113 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12669116:;
  /* 12669116 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12669119 cmp ecx, dword ptr [0x12691f3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12691f3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266911f jae 0x12669137 */
  if (!C.cf) goto L_12669137;
  /* 12669121 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12669124 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12669128 je 0x1266912c */
  if (C.zf) goto L_1266912c;
  /* 1266912a jmp 0x12669137 */
  goto L_12669137;
L_1266912c:;
  /* 1266912c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1266912f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12669132 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12669135 jmp 0x12669116 */
  goto L_12669116;
L_12669137:;
  /* 12669137 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1266913a cmp ecx, dword ptr [0x12691f3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12691f3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12669140 jne 0x12669157 */
  if (!C.zf) goto L_12669157;
  /* 12669142 call 0x12669540 */
  push32(0x12669147u); f_12669540();
  /* 12669147 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1266914a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266914e jne 0x12669157 */
  if (!C.zf) goto L_12669157;
  /* 12669150 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12669152 jmp 0x12669531 */
  goto L_12669531;
L_12669157:;
  /* 12669157 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1266915a push edx */
  push32((uint32_t)(EDX));
  /* 1266915b call 0x12669650 */
  push32(0x12669160u); f_12669650();
  /* 12669160 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12669163 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12669166 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12669169 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1266916b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1266916e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12669171 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12669174 jne 0x1266917d */
  if (!C.zf) goto L_1266917d;
  /* 12669176 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12669178 jmp 0x12669531 */
  goto L_12669531;
L_1266917d:;
  /* 1266917d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12669180 mov dword ptr [0x12691f3c], edx */
  w32((uint32_t)(0x12691f3c), (EDX));
  /* 12669186 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12669189 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1266918c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 1266918f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12669192 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12669194 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12669197 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266919b je 0x126691c0 */
  if (C.zf) goto L_126691c0;
  /* 1266919d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 126691a0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 126691a3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 126691a6 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 126691aa mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 126691ad mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 126691b0 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 126691b3 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 126691ba or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 126691bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126691be jne 0x126691f5 */
  if (!C.zf) goto L_126691f5;
L_126691c0:;
  /* 126691c0 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_126691c7:;
  /* 126691c7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 126691ca mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 126691cd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 126691d0 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 126691d4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 126691d7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 126691da mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 126691dd and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 126691e4 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 126691e6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 126691e8 jne 0x126691f5 */
  if (!C.zf) goto L_126691f5;
  /* 126691ea mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 126691ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126691f0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 126691f3 jmp 0x126691c7 */
  goto L_126691c7;
L_126691f5:;
  /* 126691f5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 126691f8 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 126691fe mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12669201 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12669208 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1266920b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12669212 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12669215 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12669218 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1266921b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1266921f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12669222 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12669226 jne 0x12669242 */
  if (!C.zf) goto L_12669242;
  /* 12669228 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 1266922f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12669232 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12669235 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12669238 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 1266923f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_12669242:;
  /* 12669242 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12669246 jl 0x1266925b */
  if ((C.sf!=C.of)) goto L_1266925b;
  /* 12669248 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1266924b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1266924d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12669250 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12669253 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12669256 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12669259 jmp 0x12669242 */
  goto L_12669242;
L_1266925b:;
  /* 1266925b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1266925e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12669261 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 12669265 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12669268 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1266926b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1266926d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12669270 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12669273 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12669276 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12669279 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266927c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1266927f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12669283 jle 0x1266928c */
  if ((C.zf||C.sf!=C.of)) goto L_1266928c;
  /* 12669285 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_1266928c:;
  /* 1266928c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1266928f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12669292 je 0x126694b0 */
  if (C.zf) goto L_126694b0;
  /* 12669298 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1266929b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1266929e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 126692a1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126692a4 jne 0x1266937a */
  if (!C.zf) goto L_1266937a;
  /* 126692aa cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126692ae jge 0x1266930f */
  if ((C.sf==C.of)) goto L_1266930f;
  /* 126692b0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 126692b5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 126692b8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 126692ba not eax */
  EAX = (~(EAX));
  /* 126692bc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 126692bf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 126692c2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 126692c6 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 126692c8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 126692cb mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 126692ce mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 126692d2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 126692d5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126692d8 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 126692db sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 126692de mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 126692e1 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126692e4 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 126692e7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 126692ea add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126692ed movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 126692f1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 126692f3 jne 0x1266930d */
  if (!C.zf) goto L_1266930d;
  /* 126692f5 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 126692fa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 126692fd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 126692ff not eax */
  EAX = (~(EAX));
  /* 12669301 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12669304 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12669306 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12669308 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1266930b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1266930d:;
  /* 1266930d jmp 0x1266937a */
  goto L_1266937a;
L_1266930f:;
  /* 1266930f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12669312 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12669315 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1266931a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1266931c not edx */
  EDX = (~(EDX));
  /* 1266931e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12669321 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12669324 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1266932b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1266932d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12669330 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12669333 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1266933a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1266933d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12669340 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12669343 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12669346 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12669349 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266934c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1266934f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12669352 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12669355 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12669359 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1266935b jne 0x1266937a */
  if (!C.zf) goto L_1266937a;
  /* 1266935d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12669360 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12669363 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12669368 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1266936a not edx */
  EDX = (~(EDX));
  /* 1266936c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1266936f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12669372 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12669374 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12669377 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1266937a:;
  /* 1266937a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1266937d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12669380 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12669383 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12669386 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12669389 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1266938c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1266938f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12669392 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12669395 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12669398 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266939c je 0x126694b0 */
  if (C.zf) goto L_126694b0;
  /* 126693a2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 126693a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126693a8 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 126693ab mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 126693ae mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 126693b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 126693b4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 126693b7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 126693ba mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 126693bd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 126693c0 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 126693c3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 126693c6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 126693c9 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 126693cc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 126693cf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 126693d2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 126693d5 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 126693d8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 126693db mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 126693de mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 126693e1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126693e4 jne 0x126694b0 */
  if (!C.zf) goto L_126694b0;
  /* 126693ea cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126693ee jge 0x1266944a */
  if ((C.sf==C.of)) goto L_1266944a;
  /* 126693f0 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 126693f3 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126693f6 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 126693fa mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 126693fd add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12669400 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12669403 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12669405 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12669408 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266940b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1266940e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12669410 jne 0x12669428 */
  if (!C.zf) goto L_12669428;
  /* 12669412 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12669417 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1266941a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1266941c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1266941f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12669421 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12669423 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12669426 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12669428:;
  /* 12669428 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1266942d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12669430 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12669432 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12669435 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12669438 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1266943c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1266943e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12669441 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12669444 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12669448 jmp 0x126694b0 */
  goto L_126694b0;
L_1266944a:;
  /* 1266944a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1266944d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12669450 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12669454 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12669457 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266945a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1266945d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1266945f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12669462 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12669465 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12669468 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1266946a jne 0x12669487 */
  if (!C.zf) goto L_12669487;
  /* 1266946c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1266946f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12669472 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12669477 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12669479 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1266947c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1266947f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12669481 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12669484 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12669487:;
  /* 12669487 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1266948a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266948d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12669492 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12669494 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12669497 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1266949a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 126694a1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 126694a3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 126694a6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 126694a9 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_126694b0:;
  /* 126694b0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126694b4 je 0x126694ca */
  if (C.zf) goto L_126694ca;
  /* 126694b6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 126694b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 126694bc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 126694be mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 126694c1 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126694c4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 126694c7 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_126694ca:;
  /* 126694ca mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 126694cd add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126694d0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 126694d3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 126694d6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126694d9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 126694dc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 126694de mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 126694e1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126694e4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 126694e7 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126694ea mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 126694ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126694f0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 126694f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 126694f5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 126694f7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126694fa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 126694fd mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 126694ff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12669501 jne 0x12669523 */
  if (!C.zf) goto L_12669523;
  /* 12669503 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12669506 cmp eax, dword ptr [0x12691f40] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12691f40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266950c jne 0x12669523 */
  if (!C.zf) goto L_12669523;
  /* 1266950e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12669511 cmp ecx, dword ptr [0x12691f38] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12691f38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12669517 jne 0x12669523 */
  if (!C.zf) goto L_12669523;
  /* 12669519 mov dword ptr [0x12691f40], 0 */
  w32((uint32_t)(0x12691f40), (0x0u));
L_12669523:;
  /* 12669523 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12669526 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12669529 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1266952b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1266952e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12669531:;
  /* 12669531 pop esi */
  ESI = (pop32());
  /* 12669532 mov esp, ebp */
  ESP = (EBP);
  /* 12669534 pop ebp */
  EBP = (pop32());
  /* 12669535 ret  */
  ESPCHK(0x12669000u, _esp0);
  ESP += 4; return;
}

/* FUN_10009540 @ 0x12669540 (271 bytes, 78 insns) */
void f_12669540(void) {
  FTRACE(0x12669540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12669540 push ebp */
  push32((uint32_t)(EBP));
  /* 12669541 mov ebp, esp */
  EBP = (ESP);
  /* 12669543 push ecx */
  push32((uint32_t)(ECX));
  /* 12669544 mov eax, dword ptr [0x12691f44] */
  EAX = (r32((uint32_t)(0x12691f44)));
  /* 12669549 cmp eax, dword ptr [0x12691f28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12691f28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266954f jne 0x1266959b */
  if (!C.zf) goto L_1266959b;
  /* 12669551 mov ecx, dword ptr [0x12691f28] */
  ECX = (r32((uint32_t)(0x12691f28)));
  /* 12669557 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266955a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1266955d push ecx */
  push32((uint32_t)(ECX));
  /* 1266955e mov edx, dword ptr [0x12691f48] */
  EDX = (r32((uint32_t)(0x12691f48)));
  /* 12669564 push edx */
  push32((uint32_t)(EDX));
  /* 12669565 push 0 */
  push32((uint32_t)(0x0u));
  /* 12669567 mov eax, dword ptr [0x12691f4c] */
  EAX = (r32((uint32_t)(0x12691f4c)));
  /* 1266956c push eax */
  push32((uint32_t)(EAX));
  /* 1266956d call dword ptr [0x1269330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269330c))), 0x12669573u);
  /* 12669573 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12669576 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266957a jne 0x12669583 */
  if (!C.zf) goto L_12669583;
  /* 1266957c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266957e jmp 0x1266964b */
  goto L_1266964b;
L_12669583:;
  /* 12669583 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12669586 mov dword ptr [0x12691f48], ecx */
  w32((uint32_t)(0x12691f48), (ECX));
  /* 1266958c mov edx, dword ptr [0x12691f28] */
  EDX = (r32((uint32_t)(0x12691f28)));
  /* 12669592 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12669595 mov dword ptr [0x12691f28], edx */
  w32((uint32_t)(0x12691f28), (EDX));
L_1266959b:;
  /* 1266959b mov eax, dword ptr [0x12691f44] */
  EAX = (r32((uint32_t)(0x12691f44)));
  /* 126695a0 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 126695a3 mov ecx, dword ptr [0x12691f48] */
  ECX = (r32((uint32_t)(0x12691f48)));
  /* 126695a9 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126695ab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 126695ae push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 126695b3 push 8 */
  push32((uint32_t)(0x8u));
  /* 126695b5 mov edx, dword ptr [0x12691f4c] */
  EDX = (r32((uint32_t)(0x12691f4c)));
  /* 126695bb push edx */
  push32((uint32_t)(EDX));
  /* 126695bc call dword ptr [0x12693304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693304))), 0x126695c2u);
  /* 126695c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126695c5 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 126695c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 126695cb cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126695cf jne 0x126695d5 */
  if (!C.zf) goto L_126695d5;
  /* 126695d1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126695d3 jmp 0x1266964b */
  goto L_1266964b;
L_126695d5:;
  /* 126695d5 push 4 */
  push32((uint32_t)(0x4u));
  /* 126695d7 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 126695dc push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 126695e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 126695e3 call dword ptr [0x126932fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932fc))), 0x126695e9u);
  /* 126695e9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126695ec mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 126695ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 126695f2 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126695f6 jne 0x12669612 */
  if (!C.zf) goto L_12669612;
  /* 126695f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126695fb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 126695fe push ecx */
  push32((uint32_t)(ECX));
  /* 126695ff push 0 */
  push32((uint32_t)(0x0u));
  /* 12669601 mov edx, dword ptr [0x12691f4c] */
  EDX = (r32((uint32_t)(0x12691f4c)));
  /* 12669607 push edx */
  push32((uint32_t)(EDX));
  /* 12669608 call dword ptr [0x126933b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126933b0))), 0x1266960eu);
  /* 1266960e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12669610 jmp 0x1266964b */
  goto L_1266964b;
L_12669612:;
  /* 12669612 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12669615 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1266961b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266961e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12669625 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12669628 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 1266962f mov eax, dword ptr [0x12691f44] */
  EAX = (r32((uint32_t)(0x12691f44)));
  /* 12669634 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12669637 mov dword ptr [0x12691f44], eax */
  w32((uint32_t)(0x12691f44), (EAX));
  /* 1266963c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266963f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12669642 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 12669648 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1266964b:;
  /* 1266964b mov esp, ebp */
  ESP = (EBP);
  /* 1266964d pop ebp */
  EBP = (pop32());
  /* 1266964e ret  */
  ESPCHK(0x12669540u, _esp0);
  ESP += 4; return;
}

/* FUN_10009650 @ 0x12669650 (494 bytes, 149 insns) */
void f_12669650(void) {
  FTRACE(0x12669650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12669650 push ebp */
  push32((uint32_t)(EBP));
  /* 12669651 mov ebp, esp */
  EBP = (ESP);
  /* 12669653 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12669656 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12669659 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1266965c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1266965f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12669662 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12669665 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12669668 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_1266966f:;
  /* 1266966f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12669673 jl 0x12669688 */
  if ((C.sf!=C.of)) goto L_12669688;
  /* 12669675 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12669678 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1266967a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1266967d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12669680 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12669683 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12669686 jmp 0x1266966f */
  goto L_1266966f;
L_12669688:;
  /* 12669688 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1266968b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12669691 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12669694 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1266969b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1266969e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 126696a5 jmp 0x126696b0 */
  goto L_126696b0;
L_126696a7:;
  /* 126696a7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 126696aa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126696ad mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_126696b0:;
  /* 126696b0 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126696b4 jge 0x126696d6 */
  if ((C.sf==C.of)) goto L_126696d6;
  /* 126696b6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 126696b9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 126696bc lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 126696bf mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 126696c2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 126696c5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 126696c8 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 126696cb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 126696ce mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 126696d1 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 126696d4 jmp 0x126696a7 */
  goto L_126696a7;
L_126696d6:;
  /* 126696d6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 126696d9 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 126696dc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126696df mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 126696e2 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126696e4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 126696e7 push 4 */
  push32((uint32_t)(0x4u));
  /* 126696e9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 126696ee push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 126696f3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 126696f6 push edx */
  push32((uint32_t)(EDX));
  /* 126696f7 call dword ptr [0x126932fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932fc))), 0x126696fdu);
  /* 126696fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126696ff jne 0x12669709 */
  if (!C.zf) goto L_12669709;
  /* 12669701 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12669704 jmp 0x1266983a */
  goto L_1266983a;
L_12669709:;
  /* 12669709 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1266970c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12669711 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12669714 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12669717 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1266971a jmp 0x12669728 */
  goto L_12669728;
L_1266971c:;
  /* 1266971c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266971f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12669725 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12669728:;
  /* 12669728 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266972b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266972e ja 0x1266978d */
  if ((!C.cf&&!C.zf)) goto L_1266978d;
  /* 12669730 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12669733 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 1266973a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266973d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 12669747 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266974a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266974d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12669750 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12669753 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 12669759 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1266975c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12669762 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12669765 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12669768 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1266976b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12669771 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12669774 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12669777 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1266977a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266977f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12669782 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12669785 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1266978b jmp 0x1266971c */
  goto L_1266971c;
L_1266978d:;
  /* 1266978d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12669790 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12669796 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12669799 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1266979c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266979f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 126697a2 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 126697a5 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 126697a8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 126697ab mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 126697ae mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 126697b1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 126697b4 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 126697b7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 126697ba add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126697bd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 126697c0 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 126697c3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 126697c6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 126697c9 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 126697cc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 126697cf mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 126697d2 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 126697d5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 126697d8 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 126697db mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 126697e3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 126697e6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 126697e9 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 126697f4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 126697f7 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 126697fb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 126697fe mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 12669801 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12669804 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12669807 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 1266980a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1266980c jne 0x1266981d */
  if (!C.zf) goto L_1266981d;
  /* 1266980e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12669811 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12669814 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12669817 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266981a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1266981d:;
  /* 1266981d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12669822 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12669825 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12669827 not edx */
  EDX = (~(EDX));
  /* 12669829 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266982c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1266982f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12669831 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12669834 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12669837 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_1266983a:;
  /* 1266983a mov esp, ebp */
  ESP = (EBP);
  /* 1266983c pop ebp */
  EBP = (pop32());
  /* 1266983d ret  */
  ESPCHK(0x12669650u, _esp0);
  ESP += 4; return;
}

/* FUN_10009840 @ 0x12669840 (1515 bytes, 489 insns) */
void f_12669840(void) {
  FTRACE(0x12669840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12669840 push ebp */
  push32((uint32_t)(EBP));
  /* 12669841 mov ebp, esp */
  EBP = (ESP);
  /* 12669843 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12669846 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12669849 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266984c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1266984e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12669851 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12669854 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12669857 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1266985a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266985d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12669860 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12669863 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12669866 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12669869 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1266986c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1266986f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12669872 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12669878 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1266987b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12669882 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12669885 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12669888 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266988b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1266988e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12669891 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12669893 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12669896 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12669899 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1266989c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266989f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 126698a2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 126698a5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 126698a7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 126698aa mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 126698ad cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126698b0 jle 0x12669b66 */
  if ((C.zf||C.sf!=C.of)) goto L_12669b66;
  /* 126698b6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 126698b9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 126698bc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 126698be jne 0x126698cb */
  if (!C.zf) goto L_126698cb;
  /* 126698c0 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 126698c3 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126698c6 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126698c9 jle 0x126698d2 */
  if ((C.zf||C.sf!=C.of)) goto L_126698d2;
L_126698cb:;
  /* 126698cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126698cd jmp 0x12669e27 */
  goto L_12669e27;
L_126698d2:;
  /* 126698d2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 126698d5 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 126698d8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126698db mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 126698de cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126698e2 jbe 0x126698eb */
  if ((C.cf||C.zf)) goto L_126698eb;
  /* 126698e4 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_126698eb:;
  /* 126698eb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 126698ee mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 126698f1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 126698f4 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126698f7 jne 0x126699cd */
  if (!C.zf) goto L_126699cd;
  /* 126698fd cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12669901 jae 0x12669962 */
  if (!C.cf) goto L_12669962;
  /* 12669903 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12669908 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1266990b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1266990d not edx */
  EDX = (~(EDX));
  /* 1266990f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12669912 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12669915 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12669919 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1266991b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266991e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12669921 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12669925 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12669928 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266992b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1266992e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12669931 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12669934 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12669937 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1266993a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1266993d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12669940 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12669944 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12669946 jne 0x12669960 */
  if (!C.zf) goto L_12669960;
  /* 12669948 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1266994d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12669950 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12669952 not edx */
  EDX = (~(EDX));
  /* 12669954 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12669957 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12669959 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1266995b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266995e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12669960:;
  /* 12669960 jmp 0x126699cd */
  goto L_126699cd;
L_12669962:;
  /* 12669962 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12669965 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12669968 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1266996d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1266996f not eax */
  EAX = (~(EAX));
  /* 12669971 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12669974 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12669977 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1266997e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12669980 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12669983 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12669986 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1266998d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12669990 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12669993 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12669996 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12669999 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1266999c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266999f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 126699a2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 126699a5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126699a8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 126699ac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 126699ae jne 0x126699cd */
  if (!C.zf) goto L_126699cd;
  /* 126699b0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 126699b3 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126699b6 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 126699bb shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 126699bd not eax */
  EAX = (~(EAX));
  /* 126699bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126699c2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 126699c5 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 126699c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126699ca mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_126699cd:;
  /* 126699cd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 126699d0 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 126699d3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 126699d6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 126699d9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 126699dc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 126699df mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 126699e2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 126699e5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 126699e8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 126699eb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 126699ee add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126699f1 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126699f4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 126699f7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126699fb jle 0x12669b47 */
  if ((C.zf||C.sf!=C.of)) goto L_12669b47;
  /* 12669a01 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12669a04 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12669a07 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12669a0a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12669a0d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12669a10 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12669a13 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12669a16 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12669a1a jbe 0x12669a23 */
  if ((C.cf||C.zf)) goto L_12669a23;
  /* 12669a1c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12669a23:;
  /* 12669a23 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12669a26 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12669a29 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 12669a2c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12669a2f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12669a32 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12669a35 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12669a38 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12669a3b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12669a3e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12669a41 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12669a44 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12669a47 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12669a4a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12669a4d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12669a50 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12669a53 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12669a56 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12669a59 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12669a5c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12669a5f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12669a62 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12669a65 jne 0x12669b33 */
  if (!C.zf) goto L_12669b33;
  /* 12669a6b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12669a6f jae 0x12669acc */
  if (!C.cf) goto L_12669acc;
  /* 12669a71 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12669a74 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12669a77 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12669a7b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12669a7e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12669a81 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12669a84 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12669a87 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12669a8a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12669a8d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12669a90 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12669a92 jne 0x12669aaa */
  if (!C.zf) goto L_12669aaa;
  /* 12669a94 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12669a99 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12669a9c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12669a9e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12669aa1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12669aa3 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12669aa5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12669aa8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12669aaa:;
  /* 12669aaa mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12669aaf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12669ab2 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12669ab4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12669ab7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12669aba mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12669abe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12669ac0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12669ac3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12669ac6 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12669aca jmp 0x12669b33 */
  goto L_12669b33;
L_12669acc:;
  /* 12669acc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12669acf add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12669ad2 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12669ad6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12669ad9 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12669adc mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12669adf add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12669ae2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12669ae5 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12669ae8 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12669aeb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12669aed jne 0x12669b0a */
  if (!C.zf) goto L_12669b0a;
  /* 12669aef mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12669af2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12669af5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12669afa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12669afc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12669aff mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12669b02 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12669b04 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12669b07 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12669b0a:;
  /* 12669b0a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12669b0d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12669b10 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12669b15 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12669b17 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12669b1a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12669b1d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12669b24 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12669b26 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12669b29 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12669b2c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_12669b33:;
  /* 12669b33 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12669b36 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12669b39 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12669b3b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12669b3e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12669b41 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12669b44 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_12669b47:;
  /* 12669b47 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12669b4a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12669b4d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12669b50 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12669b52 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12669b55 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12669b58 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12669b5b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12669b5e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 12669b61 jmp 0x12669e22 */
  goto L_12669e22;
L_12669b66:;
  /* 12669b66 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12669b69 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12669b6c jge 0x12669e22 */
  if ((C.sf==C.of)) goto L_12669e22;
  /* 12669b72 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12669b75 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12669b78 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12669b7b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12669b7d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12669b80 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12669b83 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12669b86 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12669b89 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 12669b8c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12669b8f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12669b92 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12669b95 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12669b98 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12669b9b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12669b9e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12669ba1 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12669ba4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12669ba7 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12669baa cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12669bae jbe 0x12669bb7 */
  if ((C.cf||C.zf)) goto L_12669bb7;
  /* 12669bb0 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12669bb7:;
  /* 12669bb7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12669bba and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12669bbd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12669bbf jne 0x12669d00 */
  if (!C.zf) goto L_12669d00;
  /* 12669bc5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12669bc8 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12669bcb sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12669bce mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12669bd1 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12669bd5 jbe 0x12669bde */
  if ((C.cf||C.zf)) goto L_12669bde;
  /* 12669bd7 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12669bde:;
  /* 12669bde mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12669be1 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12669be4 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12669be7 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12669bea jne 0x12669cc0 */
  if (!C.zf) goto L_12669cc0;
  /* 12669bf0 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12669bf4 jae 0x12669c55 */
  if (!C.cf) goto L_12669c55;
  /* 12669bf6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12669bfb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12669bfe shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12669c00 not edx */
  EDX = (~(EDX));
  /* 12669c02 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12669c05 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12669c08 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12669c0c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12669c0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12669c11 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12669c14 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12669c18 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12669c1b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12669c1e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12669c21 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12669c24 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12669c27 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12669c2a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12669c2d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12669c30 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12669c33 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12669c37 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12669c39 jne 0x12669c53 */
  if (!C.zf) goto L_12669c53;
  /* 12669c3b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12669c40 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12669c43 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12669c45 not edx */
  EDX = (~(EDX));
  /* 12669c47 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12669c4a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12669c4c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12669c4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12669c51 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12669c53:;
  /* 12669c53 jmp 0x12669cc0 */
  goto L_12669cc0;
L_12669c55:;
  /* 12669c55 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12669c58 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12669c5b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12669c60 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12669c62 not eax */
  EAX = (~(EAX));
  /* 12669c64 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12669c67 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12669c6a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12669c71 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12669c73 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12669c76 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12669c79 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12669c80 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12669c83 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12669c86 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12669c89 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12669c8c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12669c8f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12669c92 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12669c95 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12669c98 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12669c9b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12669c9f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12669ca1 jne 0x12669cc0 */
  if (!C.zf) goto L_12669cc0;
  /* 12669ca3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12669ca6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12669ca9 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12669cae shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12669cb0 not eax */
  EAX = (~(EAX));
  /* 12669cb2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12669cb5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12669cb8 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12669cba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12669cbd mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12669cc0:;
  /* 12669cc0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12669cc3 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12669cc6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12669cc9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12669ccc mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12669ccf mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12669cd2 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12669cd5 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12669cd8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12669cdb mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12669cde mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12669ce1 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12669ce4 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12669ce7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12669cea sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12669ced sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12669cf0 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12669cf3 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12669cf7 jbe 0x12669d00 */
  if ((C.cf||C.zf)) goto L_12669d00;
  /* 12669cf9 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12669d00:;
  /* 12669d00 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12669d03 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12669d06 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 12669d09 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12669d0c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12669d0f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12669d12 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12669d15 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12669d18 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12669d1b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12669d1e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12669d21 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12669d24 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12669d27 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12669d2a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12669d2d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12669d30 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12669d33 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12669d36 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12669d39 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12669d3c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12669d3f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12669d42 jne 0x12669e0e */
  if (!C.zf) goto L_12669e0e;
  /* 12669d48 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12669d4c jae 0x12669da8 */
  if (!C.cf) goto L_12669da8;
  /* 12669d4e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12669d51 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12669d54 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12669d58 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12669d5b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12669d5e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12669d61 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12669d63 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12669d66 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12669d69 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12669d6c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12669d6e jne 0x12669d86 */
  if (!C.zf) goto L_12669d86;
  /* 12669d70 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12669d75 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12669d78 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12669d7a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12669d7d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12669d7f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12669d81 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12669d84 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12669d86:;
  /* 12669d86 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12669d8b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12669d8e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12669d90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12669d93 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12669d96 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12669d9a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12669d9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12669d9f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12669da2 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12669da6 jmp 0x12669e0e */
  goto L_12669e0e;
L_12669da8:;
  /* 12669da8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12669dab add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12669dae movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12669db2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12669db5 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12669db8 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12669dbb add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12669dbd mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12669dc0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12669dc3 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12669dc6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12669dc8 jne 0x12669de5 */
  if (!C.zf) goto L_12669de5;
  /* 12669dca mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12669dcd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12669dd0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12669dd5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12669dd7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12669dda mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12669ddd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12669ddf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12669de2 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12669de5:;
  /* 12669de5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12669de8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12669deb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12669df0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12669df2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12669df5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12669df8 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12669dff or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12669e01 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12669e04 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12669e07 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_12669e0e:;
  /* 12669e0e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12669e11 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12669e14 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12669e16 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12669e19 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12669e1c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12669e1f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_12669e22:;
  /* 12669e22 mov eax, 1 */
  EAX = (0x1u);
L_12669e27:;
  /* 12669e27 mov esp, ebp */
  ESP = (EBP);
  /* 12669e29 pop ebp */
  EBP = (pop32());
  /* 12669e2a ret  */
  ESPCHK(0x12669840u, _esp0);
  ESP += 4; return;
}

/* FUN_10009e30 @ 0x12669e30 (304 bytes, 79 insns) */
void f_12669e30(void) {
  FTRACE(0x12669e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12669e30 push ebp */
  push32((uint32_t)(EBP));
  /* 12669e31 mov ebp, esp */
  EBP = (ESP);
  /* 12669e33 push ecx */
  push32((uint32_t)(ECX));
  /* 12669e34 cmp dword ptr [0x12691f40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12691f40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12669e3b je 0x12669f5c */
  if (C.zf) goto L_12669f5c;
  /* 12669e41 mov eax, dword ptr [0x12691f38] */
  EAX = (r32((uint32_t)(0x12691f38)));
  /* 12669e46 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 12669e49 mov ecx, dword ptr [0x12691f40] */
  ECX = (r32((uint32_t)(0x12691f40)));
  /* 12669e4f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12669e52 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12669e54 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12669e57 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12669e5c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12669e61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12669e64 push eax */
  push32((uint32_t)(EAX));
  /* 12669e65 call dword ptr [0x12693368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693368))), 0x12669e6bu);
  /* 12669e6b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12669e70 mov ecx, dword ptr [0x12691f38] */
  ECX = (r32((uint32_t)(0x12691f38)));
  /* 12669e76 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12669e78 mov eax, dword ptr [0x12691f40] */
  EAX = (r32((uint32_t)(0x12691f40)));
  /* 12669e7d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12669e80 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12669e82 mov edx, dword ptr [0x12691f40] */
  EDX = (r32((uint32_t)(0x12691f40)));
  /* 12669e88 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12669e8b mov eax, dword ptr [0x12691f40] */
  EAX = (r32((uint32_t)(0x12691f40)));
  /* 12669e90 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12669e93 mov edx, dword ptr [0x12691f38] */
  EDX = (r32((uint32_t)(0x12691f38)));
  /* 12669e99 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 12669ea4 mov eax, dword ptr [0x12691f40] */
  EAX = (r32((uint32_t)(0x12691f40)));
  /* 12669ea9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12669eac mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 12669eaf sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12669eb2 mov eax, dword ptr [0x12691f40] */
  EAX = (r32((uint32_t)(0x12691f40)));
  /* 12669eb7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12669eba mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 12669ebd mov edx, dword ptr [0x12691f40] */
  EDX = (r32((uint32_t)(0x12691f40)));
  /* 12669ec3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12669ec6 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 12669eca test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12669ecc jne 0x12669ee2 */
  if (!C.zf) goto L_12669ee2;
  /* 12669ece mov edx, dword ptr [0x12691f40] */
  EDX = (r32((uint32_t)(0x12691f40)));
  /* 12669ed4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12669ed7 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 12669ed9 mov ecx, dword ptr [0x12691f40] */
  ECX = (r32((uint32_t)(0x12691f40)));
  /* 12669edf mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_12669ee2:;
  /* 12669ee2 mov edx, dword ptr [0x12691f40] */
  EDX = (r32((uint32_t)(0x12691f40)));
  /* 12669ee8 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12669eec jne 0x12669f52 */
  if (!C.zf) goto L_12669f52;
  /* 12669eee cmp dword ptr [0x12691f44], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12691f44))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12669ef5 jle 0x12669f52 */
  if ((C.zf||C.sf!=C.of)) goto L_12669f52;
  /* 12669ef7 mov eax, dword ptr [0x12691f40] */
  EAX = (r32((uint32_t)(0x12691f40)));
  /* 12669efc mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12669eff push ecx */
  push32((uint32_t)(ECX));
  /* 12669f00 push 0 */
  push32((uint32_t)(0x0u));
  /* 12669f02 mov edx, dword ptr [0x12691f4c] */
  EDX = (r32((uint32_t)(0x12691f4c)));
  /* 12669f08 push edx */
  push32((uint32_t)(EDX));
  /* 12669f09 call dword ptr [0x126933b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126933b0))), 0x12669f0fu);
  /* 12669f0f mov eax, dword ptr [0x12691f44] */
  EAX = (r32((uint32_t)(0x12691f44)));
  /* 12669f14 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12669f17 mov ecx, dword ptr [0x12691f48] */
  ECX = (r32((uint32_t)(0x12691f48)));
  /* 12669f1d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12669f1f mov edx, dword ptr [0x12691f40] */
  EDX = (r32((uint32_t)(0x12691f40)));
  /* 12669f25 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12669f28 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12669f2a push ecx */
  push32((uint32_t)(ECX));
  /* 12669f2b mov eax, dword ptr [0x12691f40] */
  EAX = (r32((uint32_t)(0x12691f40)));
  /* 12669f30 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12669f33 push eax */
  push32((uint32_t)(EAX));
  /* 12669f34 mov ecx, dword ptr [0x12691f40] */
  ECX = (r32((uint32_t)(0x12691f40)));
  /* 12669f3a push ecx */
  push32((uint32_t)(ECX));
  /* 12669f3b call 0x1266c560 */
  push32(0x12669f40u); f_1266c560();
  /* 12669f40 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12669f43 mov edx, dword ptr [0x12691f44] */
  EDX = (r32((uint32_t)(0x12691f44)));
  /* 12669f49 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12669f4c mov dword ptr [0x12691f44], edx */
  w32((uint32_t)(0x12691f44), (EDX));
L_12669f52:;
  /* 12669f52 mov dword ptr [0x12691f40], 0 */
  w32((uint32_t)(0x12691f40), (0x0u));
L_12669f5c:;
  /* 12669f5c mov esp, ebp */
  ESP = (EBP);
  /* 12669f5e pop ebp */
  EBP = (pop32());
  /* 12669f5f ret  */
  ESPCHK(0x12669e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f60 @ 0x12669f60 (1565 bytes, 343 insns) */
void f_12669f60(void) {
  FTRACE(0x12669f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12669f60 push ebp */
  push32((uint32_t)(EBP));
  /* 12669f61 mov ebp, esp */
  EBP = (ESP);
  /* 12669f63 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12669f69 mov eax, dword ptr [0x12691f44] */
  EAX = (r32((uint32_t)(0x12691f44)));
  /* 12669f6e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12669f71 push eax */
  push32((uint32_t)(EAX));
  /* 12669f72 mov ecx, dword ptr [0x12691f48] */
  ECX = (r32((uint32_t)(0x12691f48)));
  /* 12669f78 push ecx */
  push32((uint32_t)(ECX));
  /* 12669f79 call dword ptr [0x12693388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693388))), 0x12669f7fu);
  /* 12669f7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12669f81 je 0x12669f8b */
  if (C.zf) goto L_12669f8b;
  /* 12669f83 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12669f86 jmp 0x1266a579 */
  goto L_1266a579;
L_12669f8b:;
  /* 12669f8b mov edx, dword ptr [0x12691f48] */
  EDX = (r32((uint32_t)(0x12691f48)));
  /* 12669f91 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 12669f97 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 12669fa1 jmp 0x12669fb2 */
  goto L_12669fb2;
L_12669fa3:;
  /* 12669fa3 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 12669fa9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12669fac mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_12669fb2:;
  /* 12669fb2 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 12669fb8 cmp ecx, dword ptr [0x12691f44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12691f44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12669fbe jge 0x1266a577 */
  if ((C.sf==C.of)) goto L_1266a577;
  /* 12669fc4 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12669fca mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12669fcd mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 12669fd3 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 12669fd8 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 12669fde push ecx */
  push32((uint32_t)(ECX));
  /* 12669fdf call dword ptr [0x12693388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693388))), 0x12669fe5u);
  /* 12669fe5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12669fe7 je 0x12669ff3 */
  if (C.zf) goto L_12669ff3;
  /* 12669fe9 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 12669fee jmp 0x1266a579 */
  goto L_1266a579;
L_12669ff3:;
  /* 12669ff3 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12669ff9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12669ffc mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 1266a002 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1266a008 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266a00e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1266a011 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1266a017 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1266a01a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1266a01d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 1266a027 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 1266a031 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1266a038 jmp 0x1266a043 */
  goto L_1266a043;
L_1266a03a:;
  /* 1266a03a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266a03d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266a040 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1266a043:;
  /* 1266a043 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266a047 jge 0x1266a53b */
  if ((C.sf==C.of)) goto L_1266a53b;
  /* 1266a04d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 1266a057 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 1266a061 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 1266a06b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 1266a075 jmp 0x1266a086 */
  goto L_1266a086;
L_1266a077:;
  /* 1266a077 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1266a07d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266a080 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_1266a086:;
  /* 1266a086 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266a08d jge 0x1266a0a2 */
  if ((C.sf==C.of)) goto L_1266a0a2;
  /* 1266a08f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1266a095 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 1266a0a0 jmp 0x1266a077 */
  goto L_1266a077;
L_1266a0a2:;
  /* 1266a0a2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266a0a6 jl 0x1266a4dd */
  if ((C.sf!=C.of)) goto L_1266a4dd;
  /* 1266a0ac push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1266a0b1 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 1266a0b7 push ecx */
  push32((uint32_t)(ECX));
  /* 1266a0b8 call dword ptr [0x12693388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693388))), 0x1266a0beu);
  /* 1266a0be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266a0c0 je 0x1266a0cc */
  if (C.zf) goto L_1266a0cc;
  /* 1266a0c2 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 1266a0c7 jmp 0x1266a579 */
  goto L_1266a579;
L_1266a0cc:;
  /* 1266a0cc mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1266a0d2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1266a0d5 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 1266a0df jmp 0x1266a0f0 */
  goto L_1266a0f0;
L_1266a0e1:;
  /* 1266a0e1 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 1266a0e7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266a0ea mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_1266a0f0:;
  /* 1266a0f0 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266a0f7 jge 0x1266a274 */
  if ((C.sf==C.of)) goto L_1266a274;
  /* 1266a0fd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266a100 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266a103 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 1266a109 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1266a10f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266a115 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 1266a11b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1266a121 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266a125 jne 0x1266a132 */
  if (!C.zf) goto L_1266a132;
  /* 1266a127 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 1266a12d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266a130 je 0x1266a13c */
  if (C.zf) goto L_1266a13c;
L_1266a132:;
  /* 1266a132 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 1266a137 jmp 0x1266a579 */
  goto L_1266a579;
L_1266a13c:;
  /* 1266a13c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1266a142 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1266a144 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1266a14a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 1266a150 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 1266a156 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 1266a15c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1266a15f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1266a161 je 0x1266a199 */
  if (C.zf) goto L_1266a199;
  /* 1266a163 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1266a169 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266a16c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1266a172 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266a17c jle 0x1266a188 */
  if ((C.zf||C.sf!=C.of)) goto L_1266a188;
  /* 1266a17e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 1266a183 jmp 0x1266a579 */
  goto L_1266a579;
L_1266a188:;
  /* 1266a188 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 1266a18e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266a191 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 1266a197 jmp 0x1266a1db */
  goto L_1266a1db;
L_1266a199:;
  /* 1266a199 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 1266a19f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1266a1a2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266a1a5 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1266a1ab cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266a1b2 jle 0x1266a1be */
  if ((C.zf||C.sf!=C.of)) goto L_1266a1be;
  /* 1266a1b4 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1266a1be:;
  /* 1266a1be mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1266a1c4 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 1266a1cb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266a1ce mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1266a1d4 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_1266a1db:;
  /* 1266a1db cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266a1e2 jl 0x1266a1fd */
  if ((C.sf!=C.of)) goto L_1266a1fd;
  /* 1266a1e4 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1266a1ea and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1266a1ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266a1ef jne 0x1266a1fd */
  if (!C.zf) goto L_1266a1fd;
  /* 1266a1f1 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266a1fb jle 0x1266a207 */
  if ((C.zf||C.sf!=C.of)) goto L_1266a207;
L_1266a1fd:;
  /* 1266a1fd mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 1266a202 jmp 0x1266a579 */
  goto L_1266a579;
L_1266a207:;
  /* 1266a207 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1266a20d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266a213 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1266a216 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266a21c je 0x1266a228 */
  if (C.zf) goto L_1266a228;
  /* 1266a21e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1266a223 jmp 0x1266a579 */
  goto L_1266a579;
L_1266a228:;
  /* 1266a228 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1266a22e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266a234 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1266a23a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1266a240 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266a246 jb 0x1266a13c */
  if (C.cf) goto L_1266a13c;
  /* 1266a24c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1266a252 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266a258 je 0x1266a264 */
  if (C.zf) goto L_1266a264;
  /* 1266a25a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1266a25f jmp 0x1266a579 */
  goto L_1266a579;
L_1266a264:;
  /* 1266a264 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266a267 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266a26c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1266a26f jmp 0x1266a0e1 */
  goto L_1266a0e1;
L_1266a274:;
  /* 1266a274 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1266a277 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1266a279 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266a27f je 0x1266a28b */
  if (C.zf) goto L_1266a28b;
  /* 1266a281 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 1266a286 jmp 0x1266a579 */
  goto L_1266a579;
L_1266a28b:;
  /* 1266a28b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1266a28e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 1266a294 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1266a29b jmp 0x1266a2a6 */
  goto L_1266a2a6;
L_1266a29d:;
  /* 1266a29d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1266a2a0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266a2a3 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1266a2a6:;
  /* 1266a2a6 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266a2aa jge 0x1266a4dd */
  if ((C.sf==C.of)) goto L_1266a4dd;
  /* 1266a2b0 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 1266a2ba mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1266a2c0 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_1266a2c6:;
  /* 1266a2c6 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1266a2cc mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1266a2cf mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 1266a2d5 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1266a2db cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266a2e1 je 0x1266a40a */
  if (C.zf) goto L_1266a40a;
  /* 1266a2e7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1266a2ea mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1266a2f0 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266a2f7 je 0x1266a40a */
  if (C.zf) goto L_1266a40a;
  /* 1266a2fd mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1266a303 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266a309 jb 0x1266a31e */
  if (C.cf) goto L_1266a31e;
  /* 1266a30b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 1266a311 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266a316 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266a31c jb 0x1266a328 */
  if (C.cf) goto L_1266a328;
L_1266a31e:;
  /* 1266a31e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 1266a323 jmp 0x1266a579 */
  goto L_1266a579;
L_1266a328:;
  /* 1266a328 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1266a32e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 1266a334 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 1266a33a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 1266a340 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266a343 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1266a346 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1266a349 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266a34e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_1266a354:;
  /* 1266a354 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1266a357 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266a35d je 0x1266a37e */
  if (C.zf) goto L_1266a37e;
  /* 1266a35f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1266a362 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266a368 jne 0x1266a36c */
  if (!C.zf) goto L_1266a36c;
  /* 1266a36a jmp 0x1266a37e */
  goto L_1266a37e;
L_1266a36c:;
  /* 1266a36c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1266a36f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1266a371 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 1266a374 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1266a377 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266a379 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1266a37c jmp 0x1266a354 */
  goto L_1266a354;
L_1266a37e:;
  /* 1266a37e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1266a381 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266a387 jne 0x1266a393 */
  if (!C.zf) goto L_1266a393;
  /* 1266a389 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 1266a38e jmp 0x1266a579 */
  goto L_1266a579;
L_1266a393:;
  /* 1266a393 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1266a399 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1266a39b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1266a39e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266a3a1 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1266a3a7 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266a3ae jle 0x1266a3ba */
  if ((C.zf||C.sf!=C.of)) goto L_1266a3ba;
  /* 1266a3b0 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1266a3ba:;
  /* 1266a3ba mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1266a3c0 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266a3c3 je 0x1266a3cf */
  if (C.zf) goto L_1266a3cf;
  /* 1266a3c5 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 1266a3ca jmp 0x1266a579 */
  goto L_1266a579;
L_1266a3cf:;
  /* 1266a3cf mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1266a3d5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1266a3d8 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266a3de je 0x1266a3ea */
  if (C.zf) goto L_1266a3ea;
  /* 1266a3e0 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 1266a3e5 jmp 0x1266a579 */
  goto L_1266a579;
L_1266a3ea:;
  /* 1266a3ea mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1266a3f0 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1266a3f6 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1266a3fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266a3ff mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 1266a405 jmp 0x1266a2c6 */
  goto L_1266a2c6;
L_1266a40a:;
  /* 1266a40a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266a411 je 0x1266a481 */
  if (C.zf) goto L_1266a481;
  /* 1266a413 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266a417 jge 0x1266a44b */
  if ((C.sf==C.of)) goto L_1266a44b;
  /* 1266a419 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1266a41e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1266a421 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1266a423 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1266a429 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1266a42b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 1266a431 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1266a436 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1266a439 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1266a43b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1266a441 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1266a443 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 1266a449 jmp 0x1266a481 */
  goto L_1266a481;
L_1266a44b:;
  /* 1266a44b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1266a44e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266a451 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1266a456 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1266a458 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 1266a45e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1266a460 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 1266a466 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1266a469 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266a46c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1266a471 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1266a473 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 1266a479 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1266a47b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_1266a481:;
  /* 1266a481 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1266a487 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1266a48a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266a490 jne 0x1266a4a4 */
  if (!C.zf) goto L_1266a4a4;
  /* 1266a492 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1266a495 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1266a49b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266a4a2 je 0x1266a4ae */
  if (C.zf) goto L_1266a4ae;
L_1266a4a4:;
  /* 1266a4a4 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 1266a4a9 jmp 0x1266a579 */
  goto L_1266a579;
L_1266a4ae:;
  /* 1266a4ae mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1266a4b4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1266a4b7 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266a4bd je 0x1266a4c9 */
  if (C.zf) goto L_1266a4c9;
  /* 1266a4bf mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 1266a4c4 jmp 0x1266a579 */
  goto L_1266a579;
L_1266a4c9:;
  /* 1266a4c9 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 1266a4cf add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266a4d2 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 1266a4d8 jmp 0x1266a29d */
  goto L_1266a29d;
L_1266a4dd:;
  /* 1266a4dd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266a4e0 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1266a4e6 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1266a4ec cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266a4f0 jne 0x1266a50a */
  if (!C.zf) goto L_1266a50a;
  /* 1266a4f2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266a4f5 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1266a4fb mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 1266a501 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266a508 je 0x1266a511 */
  if (C.zf) goto L_1266a511;
L_1266a50a:;
  /* 1266a50a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 1266a50f jmp 0x1266a579 */
  goto L_1266a579;
L_1266a511:;
  /* 1266a511 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1266a517 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266a51d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 1266a523 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1266a526 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266a52b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1266a52e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266a531 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1266a533 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1266a536 jmp 0x1266a03a */
  goto L_1266a03a;
L_1266a53b:;
  /* 1266a53b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1266a541 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1266a547 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266a549 jne 0x1266a55c */
  if (!C.zf) goto L_1266a55c;
  /* 1266a54b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1266a551 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 1266a557 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266a55a je 0x1266a563 */
  if (C.zf) goto L_1266a563;
L_1266a55c:;
  /* 1266a55c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 1266a561 jmp 0x1266a579 */
  goto L_1266a579;
L_1266a563:;
  /* 1266a563 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1266a569 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266a56c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 1266a572 jmp 0x12669fa3 */
  goto L_12669fa3;
L_1266a577:;
  /* 1266a577 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1266a579:;
  /* 1266a579 mov esp, ebp */
  ESP = (EBP);
  /* 1266a57b pop ebp */
  EBP = (pop32());
  /* 1266a57c ret  */
  ESPCHK(0x12669f60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a580 @ 0x1266a580 (250 bytes, 92 insns) */
void f_1266a580(void) {
  FTRACE(0x1266a580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266a580 push ebp */
  push32((uint32_t)(EBP));
  /* 1266a581 mov ebp, esp */
  EBP = (ESP);
  /* 1266a583 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266a586 push ebx */
  push32((uint32_t)(EBX));
  /* 1266a587 push esi */
  push32((uint32_t)(ESI));
  /* 1266a588 push edi */
  push32((uint32_t)(EDI));
  /* 1266a589 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1266a58c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1266a58f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1266a592 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_1266a595:;
  /* 1266a595 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266a599 jne 0x1266a5b9 */
  if (!C.zf) goto L_1266a5b9;
  /* 1266a59b push 0x1268c054 */
  push32((uint32_t)(0x1268c054u));
  /* 1266a5a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1266a5a2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 1266a5a4 push 0x1268c048 */
  push32((uint32_t)(0x1268c048u));
  /* 1266a5a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266a5ab call 0x12663730 */
  push32(0x1266a5b0u); f_12663730();
  /* 1266a5b0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266a5b3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266a5b6 jne 0x1266a5b9 */
  if (!C.zf) goto L_1266a5b9;
  /* 1266a5b8 int3  */
  x86_unimpl("int3 @ 0x1266a5b8");
L_1266a5b9:;
  /* 1266a5b9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1266a5bb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1266a5bd jne 0x1266a595 */
  if (!C.zf) goto L_1266a595;
L_1266a5bf:;
  /* 1266a5bf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266a5c3 jne 0x1266a5e3 */
  if (!C.zf) goto L_1266a5e3;
  /* 1266a5c5 push 0x1268c038 */
  push32((uint32_t)(0x1268c038u));
  /* 1266a5ca push 0 */
  push32((uint32_t)(0x0u));
  /* 1266a5cc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1266a5ce push 0x1268c048 */
  push32((uint32_t)(0x1268c048u));
  /* 1266a5d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266a5d5 call 0x12663730 */
  push32(0x1266a5dau); f_12663730();
  /* 1266a5da add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266a5dd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266a5e0 jne 0x1266a5e3 */
  if (!C.zf) goto L_1266a5e3;
  /* 1266a5e2 int3  */
  x86_unimpl("int3 @ 0x1266a5e2");
L_1266a5e3:;
  /* 1266a5e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266a5e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266a5e7 jne 0x1266a5bf */
  if (!C.zf) goto L_1266a5bf;
  /* 1266a5e9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1266a5ec mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 1266a5f3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1266a5f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266a5f9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1266a5fc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1266a5ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266a602 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1266a604 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1266a607 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 1266a60e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1266a611 push ecx */
  push32((uint32_t)(ECX));
  /* 1266a612 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266a615 push edx */
  push32((uint32_t)(EDX));
  /* 1266a616 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1266a619 push eax */
  push32((uint32_t)(EAX));
  /* 1266a61a call 0x1266b600 */
  push32(0x1266a61fu); f_1266b600();
  /* 1266a61f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266a622 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1266a625 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1266a628 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1266a62b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266a62e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1266a631 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1266a634 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1266a637 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266a63b jl 0x1266a65f */
  if ((C.sf!=C.of)) goto L_1266a65f;
  /* 1266a63d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1266a640 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1266a642 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1266a645 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1266a647 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1266a64d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1266a650 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1266a653 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1266a655 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266a658 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1266a65b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1266a65d jmp 0x1266a670 */
  goto L_1266a670;
L_1266a65f:;
  /* 1266a65f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1266a662 push edx */
  push32((uint32_t)(EDX));
  /* 1266a663 push 0 */
  push32((uint32_t)(0x0u));
  /* 1266a665 call 0x1266b380 */
  push32(0x1266a66au); f_1266b380();
  /* 1266a66a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266a66d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1266a670:;
  /* 1266a670 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1266a673 pop edi */
  EDI = (pop32());
  /* 1266a674 pop esi */
  ESI = (pop32());
  /* 1266a675 pop ebx */
  EBX = (pop32());
  /* 1266a676 mov esp, ebp */
  ESP = (EBP);
  /* 1266a678 pop ebp */
  EBP = (pop32());
  /* 1266a679 ret  */
  ESPCHK(0x1266a580u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a680 @ 0x1266a680 (183 bytes, 58 insns) */
void f_1266a680(void) {
  FTRACE(0x1266a680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266a680 push ebp */
  push32((uint32_t)(EBP));
  /* 1266a681 mov ebp, esp */
  EBP = (ESP);
  /* 1266a683 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266a686 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266a689 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266a68c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266a691 ja 0x1266a6aa */
  if ((!C.cf&&!C.zf)) goto L_1266a6aa;
  /* 1266a693 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266a696 mov edx, dword ptr [0x1268ec98] */
  EDX = (r32((uint32_t)(0x1268ec98)));
  /* 1266a69c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266a69e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1266a6a2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1266a6a5 jmp 0x1266a733 */
  goto L_1266a733;
L_1266a6aa:;
  /* 1266a6aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266a6ad sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1266a6b0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1266a6b6 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1266a6bc mov edx, dword ptr [0x1268ec98] */
  EDX = (r32((uint32_t)(0x1268ec98)));
  /* 1266a6c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266a6c4 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1266a6c8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1266a6cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266a6cf je 0x1266a6f3 */
  if (C.zf) goto L_1266a6f3;
  /* 1266a6d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266a6d4 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1266a6d7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1266a6dd mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1266a6e0 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 1266a6e3 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 1266a6e6 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 1266a6ea mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 1266a6f1 jmp 0x1266a704 */
  goto L_1266a704;
L_1266a6f3:;
  /* 1266a6f3 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1266a6f6 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1266a6f9 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 1266a6fd mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_1266a704:;
  /* 1266a704 push 1 */
  push32((uint32_t)(0x1u));
  /* 1266a706 push 0 */
  push32((uint32_t)(0x0u));
  /* 1266a708 push 0 */
  push32((uint32_t)(0x0u));
  /* 1266a70a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1266a70d push ecx */
  push32((uint32_t)(ECX));
  /* 1266a70e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266a711 push edx */
  push32((uint32_t)(EDX));
  /* 1266a712 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1266a715 push eax */
  push32((uint32_t)(EAX));
  /* 1266a716 push 1 */
  push32((uint32_t)(0x1u));
  /* 1266a718 call 0x1266c8a0 */
  push32(0x1266a71du); f_1266c8a0();
  /* 1266a71d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266a720 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266a722 jne 0x1266a728 */
  if (!C.zf) goto L_1266a728;
  /* 1266a724 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266a726 jmp 0x1266a733 */
  goto L_1266a733;
L_1266a728:;
  /* 1266a728 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266a72b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1266a730 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_1266a733:;
  /* 1266a733 mov esp, ebp */
  ESP = (EBP);
  /* 1266a735 pop ebp */
  EBP = (pop32());
  /* 1266a736 ret  */
  ESPCHK(0x1266a680u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a740 @ 0x1266a740 (836 bytes, 238 insns) */
void f_1266a740(void) {
  FTRACE(0x1266a740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266a740 push ebp */
  push32((uint32_t)(EBP));
  /* 1266a741 mov ebp, esp */
  EBP = (ESP);
  /* 1266a743 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266a746 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1266a748 call 0x12668070 */
  push32(0x1266a74du); f_12668070();
  /* 1266a74d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266a750 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266a753 push eax */
  push32((uint32_t)(EAX));
  /* 1266a754 call 0x1266aa90 */
  push32(0x1266a759u); f_1266aa90();
  /* 1266a759 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266a75c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1266a75f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266a762 cmp ecx, dword ptr [0x12691c84] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12691c84))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266a768 jne 0x1266a77b */
  if (!C.zf) goto L_1266a77b;
  /* 1266a76a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1266a76c call 0x12668110 */
  push32(0x1266a771u); f_12668110();
  /* 1266a771 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266a774 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266a776 jmp 0x1266aa80 */
  goto L_1266aa80;
L_1266a77b:;
  /* 1266a77b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266a77f jne 0x1266a79c */
  if (!C.zf) goto L_1266a79c;
  /* 1266a781 call 0x1266ab70 */
  push32(0x1266a786u); f_1266ab70();
  /* 1266a786 call 0x1266abf0 */
  push32(0x1266a78bu); f_1266abf0();
  /* 1266a78b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1266a78d call 0x12668110 */
  push32(0x1266a792u); f_12668110();
  /* 1266a792 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266a795 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266a797 jmp 0x1266aa80 */
  goto L_1266aa80;
L_1266a79c:;
  /* 1266a79c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1266a7a3 jmp 0x1266a7ae */
  goto L_1266a7ae;
L_1266a7a5:;
  /* 1266a7a5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266a7a8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266a7ab mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1266a7ae:;
  /* 1266a7ae cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266a7b2 jae 0x1266a8ff */
  if (!C.cf) goto L_1266a8ff;
  /* 1266a7b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266a7bb imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1266a7be mov ecx, dword ptr [eax + 0x1268eeb8] */
  ECX = (r32((uint32_t)(EAX + 0x1268eeb8)));
  /* 1266a7c4 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266a7c7 jne 0x1266a8fa */
  if (!C.zf) goto L_1266a8fa;
  /* 1266a7cd mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1266a7d4 jmp 0x1266a7df */
  goto L_1266a7df;
L_1266a7d6:;
  /* 1266a7d6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1266a7d9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266a7dc mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1266a7df:;
  /* 1266a7df cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266a7e6 jae 0x1266a7f4 */
  if (!C.cf) goto L_1266a7f4;
  /* 1266a7e8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1266a7eb mov byte ptr [eax + 0x12691e20], 0 */
  w8((uint32_t)(EAX + 0x12691e20), (0x0u));
  /* 1266a7f2 jmp 0x1266a7d6 */
  goto L_1266a7d6;
L_1266a7f4:;
  /* 1266a7f4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1266a7fb jmp 0x1266a806 */
  goto L_1266a806;
L_1266a7fd:;
  /* 1266a7fd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266a800 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266a803 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1266a806:;
  /* 1266a806 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266a80a jae 0x1266a887 */
  if (!C.cf) goto L_1266a887;
  /* 1266a80c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266a80f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1266a812 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266a815 lea ecx, [edx + eax*8 + 0x1268eec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x1268eec8));
  /* 1266a81c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1266a81f jmp 0x1266a82a */
  goto L_1266a82a;
L_1266a821:;
  /* 1266a821 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266a824 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266a827 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1266a82a:;
  /* 1266a82a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266a82d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1266a82f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1266a831 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1266a833 je 0x1266a882 */
  if (C.zf) goto L_1266a882;
  /* 1266a835 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266a838 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266a83a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1266a83d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266a83f je 0x1266a882 */
  if (C.zf) goto L_1266a882;
  /* 1266a841 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266a844 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1266a846 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1266a848 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1266a84b jmp 0x1266a856 */
  goto L_1266a856;
L_1266a84d:;
  /* 1266a84d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1266a850 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266a853 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1266a856:;
  /* 1266a856 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266a859 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1266a85b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1266a85e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266a861 ja 0x1266a880 */
  if ((!C.cf&&!C.zf)) goto L_1266a880;
  /* 1266a863 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1266a866 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266a869 mov dl, byte ptr [eax + 0x12691e21] */
  DL = (r8((uint32_t)(EAX + 0x12691e21)));
  /* 1266a86f or dl, byte ptr [ecx + 0x1268eeb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x1268eeb0))); DL = (_r); fl_logic(_r,8); }
  /* 1266a875 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1266a878 mov byte ptr [eax + 0x12691e21], dl */
  w8((uint32_t)(EAX + 0x12691e21), (DL));
  /* 1266a87e jmp 0x1266a84d */
  goto L_1266a84d;
L_1266a880:;
  /* 1266a880 jmp 0x1266a821 */
  goto L_1266a821;
L_1266a882:;
  /* 1266a882 jmp 0x1266a7fd */
  goto L_1266a7fd;
L_1266a887:;
  /* 1266a887 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266a88a mov dword ptr [0x12691c84], ecx */
  w32((uint32_t)(0x12691c84), (ECX));
  /* 1266a890 mov dword ptr [0x12691d0c], 1 */
  w32((uint32_t)(0x12691d0c), (0x1u));
  /* 1266a89a mov edx, dword ptr [0x12691c84] */
  EDX = (r32((uint32_t)(0x12691c84)));
  /* 1266a8a0 push edx */
  push32((uint32_t)(EDX));
  /* 1266a8a1 call 0x1266aaf0 */
  push32(0x1266a8a6u); f_1266aaf0();
  /* 1266a8a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266a8a9 mov dword ptr [0x12691f24], eax */
  w32((uint32_t)(0x12691f24), (EAX));
  /* 1266a8ae mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1266a8b5 jmp 0x1266a8c0 */
  goto L_1266a8c0;
L_1266a8b7:;
  /* 1266a8b7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266a8ba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266a8bd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1266a8c0:;
  /* 1266a8c0 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266a8c4 jae 0x1266a8e4 */
  if (!C.cf) goto L_1266a8e4;
  /* 1266a8c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266a8c9 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1266a8cc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266a8cf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266a8d2 mov cx, word ptr [ecx + eax*2 + 0x1268eebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x1268eebc)));
  /* 1266a8da mov word ptr [edx*2 + 0x12691d00], cx */
  w16((uint32_t)(EDX*2 + 0x12691d00), (CX));
  /* 1266a8e2 jmp 0x1266a8b7 */
  goto L_1266a8b7;
L_1266a8e4:;
  /* 1266a8e4 call 0x1266abf0 */
  push32(0x1266a8e9u); f_1266abf0();
  /* 1266a8e9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1266a8eb call 0x12668110 */
  push32(0x1266a8f0u); f_12668110();
  /* 1266a8f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266a8f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266a8f5 jmp 0x1266aa80 */
  goto L_1266aa80;
L_1266a8fa:;
  /* 1266a8fa jmp 0x1266a7a5 */
  goto L_1266a7a5;
L_1266a8ff:;
  /* 1266a8ff lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 1266a902 push edx */
  push32((uint32_t)(EDX));
  /* 1266a903 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266a906 push eax */
  push32((uint32_t)(EAX));
  /* 1266a907 call dword ptr [0x126932f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932f8))), 0x1266a90du);
  /* 1266a90d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266a910 jne 0x1266aa52 */
  if (!C.zf) goto L_1266aa52;
  /* 1266a916 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1266a91d jmp 0x1266a928 */
  goto L_1266a928;
L_1266a91f:;
  /* 1266a91f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1266a922 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266a925 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1266a928:;
  /* 1266a928 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266a92f jae 0x1266a93d */
  if (!C.cf) goto L_1266a93d;
  /* 1266a931 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1266a934 mov byte ptr [edx + 0x12691e20], 0 */
  w8((uint32_t)(EDX + 0x12691e20), (0x0u));
  /* 1266a93b jmp 0x1266a91f */
  goto L_1266a91f;
L_1266a93d:;
  /* 1266a93d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266a940 mov dword ptr [0x12691c84], eax */
  w32((uint32_t)(0x12691c84), (EAX));
  /* 1266a945 mov dword ptr [0x12691f24], 0 */
  w32((uint32_t)(0x12691f24), (0x0u));
  /* 1266a94f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266a953 jbe 0x1266aa0e */
  if ((C.cf||C.zf)) goto L_1266aa0e;
  /* 1266a959 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 1266a95c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 1266a95f jmp 0x1266a96a */
  goto L_1266a96a;
L_1266a961:;
  /* 1266a961 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1266a964 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266a967 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_1266a96a:;
  /* 1266a96a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1266a96d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1266a96f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1266a971 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1266a973 je 0x1266a9bc */
  if (C.zf) goto L_1266a9bc;
  /* 1266a975 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1266a978 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266a97a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1266a97d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266a97f je 0x1266a9bc */
  if (C.zf) goto L_1266a9bc;
  /* 1266a981 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1266a984 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1266a986 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1266a988 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1266a98b jmp 0x1266a996 */
  goto L_1266a996;
L_1266a98d:;
  /* 1266a98d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1266a990 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266a993 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1266a996:;
  /* 1266a996 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1266a999 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1266a99b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1266a99e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266a9a1 ja 0x1266a9ba */
  if ((!C.cf&&!C.zf)) goto L_1266a9ba;
  /* 1266a9a3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1266a9a6 mov cl, byte ptr [eax + 0x12691e21] */
  CL = (r8((uint32_t)(EAX + 0x12691e21)));
  /* 1266a9ac or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 1266a9af mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1266a9b2 mov byte ptr [edx + 0x12691e21], cl */
  w8((uint32_t)(EDX + 0x12691e21), (CL));
  /* 1266a9b8 jmp 0x1266a98d */
  goto L_1266a98d;
L_1266a9ba:;
  /* 1266a9ba jmp 0x1266a961 */
  goto L_1266a961;
L_1266a9bc:;
  /* 1266a9bc mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 1266a9c3 jmp 0x1266a9ce */
  goto L_1266a9ce;
L_1266a9c5:;
  /* 1266a9c5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1266a9c8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266a9cb mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1266a9ce:;
  /* 1266a9ce cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266a9d5 jae 0x1266a9ee */
  if (!C.cf) goto L_1266a9ee;
  /* 1266a9d7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1266a9da mov dl, byte ptr [ecx + 0x12691e21] */
  DL = (r8((uint32_t)(ECX + 0x12691e21)));
  /* 1266a9e0 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1266a9e3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1266a9e6 mov byte ptr [eax + 0x12691e21], dl */
  w8((uint32_t)(EAX + 0x12691e21), (DL));
  /* 1266a9ec jmp 0x1266a9c5 */
  goto L_1266a9c5;
L_1266a9ee:;
  /* 1266a9ee mov ecx, dword ptr [0x12691c84] */
  ECX = (r32((uint32_t)(0x12691c84)));
  /* 1266a9f4 push ecx */
  push32((uint32_t)(ECX));
  /* 1266a9f5 call 0x1266aaf0 */
  push32(0x1266a9fau); f_1266aaf0();
  /* 1266a9fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266a9fd mov dword ptr [0x12691f24], eax */
  w32((uint32_t)(0x12691f24), (EAX));
  /* 1266aa02 mov dword ptr [0x12691d0c], 1 */
  w32((uint32_t)(0x12691d0c), (0x1u));
  /* 1266aa0c jmp 0x1266aa18 */
  goto L_1266aa18;
L_1266aa0e:;
  /* 1266aa0e mov dword ptr [0x12691d0c], 0 */
  w32((uint32_t)(0x12691d0c), (0x0u));
L_1266aa18:;
  /* 1266aa18 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1266aa1f jmp 0x1266aa2a */
  goto L_1266aa2a;
L_1266aa21:;
  /* 1266aa21 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266aa24 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266aa27 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1266aa2a:;
  /* 1266aa2a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266aa2e jae 0x1266aa3f */
  if (!C.cf) goto L_1266aa3f;
  /* 1266aa30 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266aa33 mov word ptr [eax*2 + 0x12691d00], 0 */
  w16((uint32_t)(EAX*2 + 0x12691d00), (0x0u));
  /* 1266aa3d jmp 0x1266aa21 */
  goto L_1266aa21;
L_1266aa3f:;
  /* 1266aa3f call 0x1266abf0 */
  push32(0x1266aa44u); f_1266abf0();
  /* 1266aa44 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1266aa46 call 0x12668110 */
  push32(0x1266aa4bu); f_12668110();
  /* 1266aa4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266aa4e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266aa50 jmp 0x1266aa80 */
  goto L_1266aa80;
L_1266aa52:;
  /* 1266aa52 cmp dword ptr [0x12690798], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12690798))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266aa59 je 0x1266aa73 */
  if (C.zf) goto L_1266aa73;
  /* 1266aa5b call 0x1266ab70 */
  push32(0x1266aa60u); f_1266ab70();
  /* 1266aa60 call 0x1266abf0 */
  push32(0x1266aa65u); f_1266abf0();
  /* 1266aa65 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1266aa67 call 0x12668110 */
  push32(0x1266aa6cu); f_12668110();
  /* 1266aa6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266aa6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266aa71 jmp 0x1266aa80 */
  goto L_1266aa80;
L_1266aa73:;
  /* 1266aa73 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1266aa75 call 0x12668110 */
  push32(0x1266aa7au); f_12668110();
  /* 1266aa7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266aa7d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1266aa80:;
  /* 1266aa80 mov esp, ebp */
  ESP = (EBP);
  /* 1266aa82 pop ebp */
  EBP = (pop32());
  /* 1266aa83 ret  */
  ESPCHK(0x1266a740u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x1266aa90 (89 bytes, 21 insns) */
void f_1266aa90(void) {
  FTRACE(0x1266aa90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266aa90 push ebp */
  push32((uint32_t)(EBP));
  /* 1266aa91 mov ebp, esp */
  EBP = (ESP);
  /* 1266aa93 mov dword ptr [0x12690798], 0 */
  w32((uint32_t)(0x12690798), (0x0u));
  /* 1266aa9d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266aaa1 jne 0x1266aab5 */
  if (!C.zf) goto L_1266aab5;
  /* 1266aaa3 mov dword ptr [0x12690798], 1 */
  w32((uint32_t)(0x12690798), (0x1u));
  /* 1266aaad call dword ptr [0x126932f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932f0))), 0x1266aab3u);
  /* 1266aab3 jmp 0x1266aae7 */
  goto L_1266aae7;
L_1266aab5:;
  /* 1266aab5 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266aab9 jne 0x1266aacd */
  if (!C.zf) goto L_1266aacd;
  /* 1266aabb mov dword ptr [0x12690798], 1 */
  w32((uint32_t)(0x12690798), (0x1u));
  /* 1266aac5 call dword ptr [0x12693300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693300))), 0x1266aacbu);
  /* 1266aacb jmp 0x1266aae7 */
  goto L_1266aae7;
L_1266aacd:;
  /* 1266aacd cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266aad1 jne 0x1266aae4 */
  if (!C.zf) goto L_1266aae4;
  /* 1266aad3 mov dword ptr [0x12690798], 1 */
  w32((uint32_t)(0x12690798), (0x1u));
  /* 1266aadd mov eax, dword ptr [0x126907b8] */
  EAX = (r32((uint32_t)(0x126907b8)));
  /* 1266aae2 jmp 0x1266aae7 */
  goto L_1266aae7;
L_1266aae4:;
  /* 1266aae4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1266aae7:;
  /* 1266aae7 pop ebp */
  EBP = (pop32());
  /* 1266aae8 ret  */
  ESPCHK(0x1266aa90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aaf0 @ 0x1266aaf0 (80 bytes, 26 insns) [1 switch table(s)] */
void f_1266aaf0(void) {
  FTRACE(0x1266aaf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266aaf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1266aaf1 mov ebp, esp */
  EBP = (ESP);
  /* 1266aaf3 push ecx */
  push32((uint32_t)(ECX));
  /* 1266aaf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266aaf7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1266aafa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266aafd sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266ab03 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1266ab06 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266ab0a ja 0x1266ab3a */
  if ((!C.cf&&!C.zf)) goto L_1266ab3a;
  /* 1266ab0c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266ab0f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1266ab11 mov dl, byte ptr [eax + 0x1266ab54] */
  DL = (r8((uint32_t)(EAX + 0x1266ab54)));
  /* 1266ab17 jmp dword ptr [edx*4 + 0x1266ab40] */
  switch (EDX) {
    case 0: goto L_1266ab1e;
    case 1: goto L_1266ab25;
    case 2: goto L_1266ab2c;
    case 3: goto L_1266ab33;
    case 4: goto L_1266ab3a;
    default: x86_unimpl("switch@0x1266ab17 out of table"); return;
  }
L_1266ab1e:;
  /* 1266ab1e mov eax, 0x411 */
  EAX = (0x411u);
  /* 1266ab23 jmp 0x1266ab3c */
  goto L_1266ab3c;
L_1266ab25:;
  /* 1266ab25 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1266ab2a jmp 0x1266ab3c */
  goto L_1266ab3c;
L_1266ab2c:;
  /* 1266ab2c mov eax, 0x412 */
  EAX = (0x412u);
  /* 1266ab31 jmp 0x1266ab3c */
  goto L_1266ab3c;
L_1266ab33:;
  /* 1266ab33 mov eax, 0x404 */
  EAX = (0x404u);
  /* 1266ab38 jmp 0x1266ab3c */
  goto L_1266ab3c;
L_1266ab3a:;
  /* 1266ab3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1266ab3c:;
  /* 1266ab3c mov esp, ebp */
  ESP = (EBP);
  /* 1266ab3e pop ebp */
  EBP = (pop32());
  /* 1266ab3f ret  */
  ESPCHK(0x1266aaf0u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x1266ab70 (116 bytes, 29 insns) */
void f_1266ab70(void) {
  FTRACE(0x1266ab70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266ab70 push ebp */
  push32((uint32_t)(EBP));
  /* 1266ab71 mov ebp, esp */
  EBP = (ESP);
  /* 1266ab73 push ecx */
  push32((uint32_t)(ECX));
  /* 1266ab74 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1266ab7b jmp 0x1266ab86 */
  goto L_1266ab86;
L_1266ab7d:;
  /* 1266ab7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266ab80 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266ab83 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1266ab86:;
  /* 1266ab86 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266ab8d jge 0x1266ab9b */
  if ((C.sf==C.of)) goto L_1266ab9b;
  /* 1266ab8f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266ab92 mov byte ptr [ecx + 0x12691e20], 0 */
  w8((uint32_t)(ECX + 0x12691e20), (0x0u));
  /* 1266ab99 jmp 0x1266ab7d */
  goto L_1266ab7d;
L_1266ab9b:;
  /* 1266ab9b mov dword ptr [0x12691c84], 0 */
  w32((uint32_t)(0x12691c84), (0x0u));
  /* 1266aba5 mov dword ptr [0x12691d0c], 0 */
  w32((uint32_t)(0x12691d0c), (0x0u));
  /* 1266abaf mov dword ptr [0x12691f24], 0 */
  w32((uint32_t)(0x12691f24), (0x0u));
  /* 1266abb9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1266abc0 jmp 0x1266abcb */
  goto L_1266abcb;
L_1266abc2:;
  /* 1266abc2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266abc5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266abc8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1266abcb:;
  /* 1266abcb cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266abcf jge 0x1266abe0 */
  if ((C.sf==C.of)) goto L_1266abe0;
  /* 1266abd1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266abd4 mov word ptr [eax*2 + 0x12691d00], 0 */
  w16((uint32_t)(EAX*2 + 0x12691d00), (0x0u));
  /* 1266abde jmp 0x1266abc2 */
  goto L_1266abc2;
L_1266abe0:;
  /* 1266abe0 mov esp, ebp */
  ESP = (EBP);
  /* 1266abe2 pop ebp */
  EBP = (pop32());
  /* 1266abe3 ret  */
  ESPCHK(0x1266ab70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000abf0 @ 0x1266abf0 (770 bytes, 175 insns) */
void f_1266abf0(void) {
  FTRACE(0x1266abf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266abf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1266abf1 mov ebp, esp */
  EBP = (ESP);
  /* 1266abf3 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266abf9 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 1266abff push eax */
  push32((uint32_t)(EAX));
  /* 1266ac00 mov ecx, dword ptr [0x12691c84] */
  ECX = (r32((uint32_t)(0x12691c84)));
  /* 1266ac06 push ecx */
  push32((uint32_t)(ECX));
  /* 1266ac07 call dword ptr [0x126932f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932f8))), 0x1266ac0du);
  /* 1266ac0d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266ac10 jne 0x1266ae29 */
  if (!C.zf) goto L_1266ae29;
  /* 1266ac16 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1266ac20 jmp 0x1266ac31 */
  goto L_1266ac31;
L_1266ac22:;
  /* 1266ac22 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1266ac28 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266ac2b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1266ac31:;
  /* 1266ac31 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266ac3b jae 0x1266ac52 */
  if (!C.cf) goto L_1266ac52;
  /* 1266ac3d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1266ac43 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 1266ac49 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 1266ac50 jmp 0x1266ac22 */
  goto L_1266ac22;
L_1266ac52:;
  /* 1266ac52 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 1266ac59 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 1266ac5f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1266ac62 jmp 0x1266ac6d */
  goto L_1266ac6d;
L_1266ac64:;
  /* 1266ac64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266ac67 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266ac6a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1266ac6d:;
  /* 1266ac6d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266ac70 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1266ac72 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1266ac74 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1266ac76 je 0x1266acb8 */
  if (C.zf) goto L_1266acb8;
  /* 1266ac78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266ac7b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1266ac7d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1266ac7f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 1266ac85 jmp 0x1266ac96 */
  goto L_1266ac96;
L_1266ac87:;
  /* 1266ac87 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1266ac8d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266ac90 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1266ac96:;
  /* 1266ac96 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266ac99 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1266ac9b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1266ac9e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266aca4 ja 0x1266acb6 */
  if ((!C.cf&&!C.zf)) goto L_1266acb6;
  /* 1266aca6 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1266acac mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 1266acb4 jmp 0x1266ac87 */
  goto L_1266ac87;
L_1266acb6:;
  /* 1266acb6 jmp 0x1266ac64 */
  goto L_1266ac64;
L_1266acb8:;
  /* 1266acb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1266acba mov eax, dword ptr [0x12691f24] */
  EAX = (r32((uint32_t)(0x12691f24)));
  /* 1266acbf push eax */
  push32((uint32_t)(EAX));
  /* 1266acc0 mov ecx, dword ptr [0x12691c84] */
  ECX = (r32((uint32_t)(0x12691c84)));
  /* 1266acc6 push ecx */
  push32((uint32_t)(ECX));
  /* 1266acc7 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 1266accd push edx */
  push32((uint32_t)(EDX));
  /* 1266acce push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1266acd3 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1266acd9 push eax */
  push32((uint32_t)(EAX));
  /* 1266acda push 1 */
  push32((uint32_t)(0x1u));
  /* 1266acdc call 0x1266c8a0 */
  push32(0x1266ace1u); f_1266c8a0();
  /* 1266ace1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266ace4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1266ace6 mov ecx, dword ptr [0x12691c84] */
  ECX = (r32((uint32_t)(0x12691c84)));
  /* 1266acec push ecx */
  push32((uint32_t)(ECX));
  /* 1266aced push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1266acf2 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1266acf8 push edx */
  push32((uint32_t)(EDX));
  /* 1266acf9 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1266acfe lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1266ad04 push eax */
  push32((uint32_t)(EAX));
  /* 1266ad05 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1266ad0a mov ecx, dword ptr [0x12691f24] */
  ECX = (r32((uint32_t)(0x12691f24)));
  /* 1266ad10 push ecx */
  push32((uint32_t)(ECX));
  /* 1266ad11 call 0x1266ca60 */
  push32(0x1266ad16u); f_1266ca60();
  /* 1266ad16 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266ad19 push 0 */
  push32((uint32_t)(0x0u));
  /* 1266ad1b mov edx, dword ptr [0x12691c84] */
  EDX = (r32((uint32_t)(0x12691c84)));
  /* 1266ad21 push edx */
  push32((uint32_t)(EDX));
  /* 1266ad22 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1266ad27 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 1266ad2d push eax */
  push32((uint32_t)(EAX));
  /* 1266ad2e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1266ad33 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 1266ad39 push ecx */
  push32((uint32_t)(ECX));
  /* 1266ad3a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1266ad3f mov edx, dword ptr [0x12691f24] */
  EDX = (r32((uint32_t)(0x12691f24)));
  /* 1266ad45 push edx */
  push32((uint32_t)(EDX));
  /* 1266ad46 call 0x1266ca60 */
  push32(0x1266ad4bu); f_1266ca60();
  /* 1266ad4b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266ad4e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1266ad58 jmp 0x1266ad69 */
  goto L_1266ad69;
L_1266ad5a:;
  /* 1266ad5a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1266ad60 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266ad63 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1266ad69:;
  /* 1266ad69 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266ad73 jae 0x1266ae24 */
  if (!C.cf) goto L_1266ae24;
  /* 1266ad79 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1266ad7f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1266ad81 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 1266ad89 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1266ad8c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1266ad8e je 0x1266adc6 */
  if (C.zf) goto L_1266adc6;
  /* 1266ad90 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1266ad96 mov cl, byte ptr [eax + 0x12691e21] */
  CL = (r8((uint32_t)(EAX + 0x12691e21)));
  /* 1266ad9c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 1266ad9f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1266ada5 mov byte ptr [edx + 0x12691e21], cl */
  w8((uint32_t)(EDX + 0x12691e21), (CL));
  /* 1266adab mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1266adb1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1266adb7 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 1266adbe mov byte ptr [eax + 0x12691d20], dl */
  w8((uint32_t)(EAX + 0x12691d20), (DL));
  /* 1266adc4 jmp 0x1266ae1f */
  goto L_1266ae1f;
L_1266adc6:;
  /* 1266adc6 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1266adcc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1266adce mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 1266add6 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1266add9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1266addb je 0x1266ae12 */
  if (C.zf) goto L_1266ae12;
  /* 1266addd mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1266ade3 mov al, byte ptr [edx + 0x12691e21] */
  AL = (r8((uint32_t)(EDX + 0x12691e21)));
  /* 1266ade9 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1266adeb mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1266adf1 mov byte ptr [ecx + 0x12691e21], al */
  w8((uint32_t)(ECX + 0x12691e21), (AL));
  /* 1266adf7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1266adfd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1266ae03 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 1266ae0a mov byte ptr [edx + 0x12691d20], cl */
  w8((uint32_t)(EDX + 0x12691d20), (CL));
  /* 1266ae10 jmp 0x1266ae1f */
  goto L_1266ae1f;
L_1266ae12:;
  /* 1266ae12 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1266ae18 mov byte ptr [edx + 0x12691d20], 0 */
  w8((uint32_t)(EDX + 0x12691d20), (0x0u));
L_1266ae1f:;
  /* 1266ae1f jmp 0x1266ad5a */
  goto L_1266ad5a;
L_1266ae24:;
  /* 1266ae24 jmp 0x1266aeee */
  goto L_1266aeee;
L_1266ae29:;
  /* 1266ae29 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1266ae33 jmp 0x1266ae44 */
  goto L_1266ae44;
L_1266ae35:;
  /* 1266ae35 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1266ae3b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266ae3e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1266ae44:;
  /* 1266ae44 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266ae4e jae 0x1266aeee */
  if (!C.cf) goto L_1266aeee;
  /* 1266ae54 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266ae5b jb 0x1266ae98 */
  if (C.cf) goto L_1266ae98;
  /* 1266ae5d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266ae64 ja 0x1266ae98 */
  if ((!C.cf&&!C.zf)) goto L_1266ae98;
  /* 1266ae66 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1266ae6c mov dl, byte ptr [ecx + 0x12691e21] */
  DL = (r8((uint32_t)(ECX + 0x12691e21)));
  /* 1266ae72 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1266ae75 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1266ae7b mov byte ptr [eax + 0x12691e21], dl */
  w8((uint32_t)(EAX + 0x12691e21), (DL));
  /* 1266ae81 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1266ae87 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266ae8a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1266ae90 mov byte ptr [edx + 0x12691d20], cl */
  w8((uint32_t)(EDX + 0x12691d20), (CL));
  /* 1266ae96 jmp 0x1266aee9 */
  goto L_1266aee9;
L_1266ae98:;
  /* 1266ae98 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266ae9f jb 0x1266aedc */
  if (C.cf) goto L_1266aedc;
  /* 1266aea1 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266aea8 ja 0x1266aedc */
  if ((!C.cf&&!C.zf)) goto L_1266aedc;
  /* 1266aeaa mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1266aeb0 mov cl, byte ptr [eax + 0x12691e21] */
  CL = (r8((uint32_t)(EAX + 0x12691e21)));
  /* 1266aeb6 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1266aeb9 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1266aebf mov byte ptr [edx + 0x12691e21], cl */
  w8((uint32_t)(EDX + 0x12691e21), (CL));
  /* 1266aec5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1266aecb sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266aece mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1266aed4 mov byte ptr [ecx + 0x12691d20], al */
  w8((uint32_t)(ECX + 0x12691d20), (AL));
  /* 1266aeda jmp 0x1266aee9 */
  goto L_1266aee9;
L_1266aedc:;
  /* 1266aedc mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1266aee2 mov byte ptr [edx + 0x12691d20], 0 */
  w8((uint32_t)(EDX + 0x12691d20), (0x0u));
L_1266aee9:;
  /* 1266aee9 jmp 0x1266ae35 */
  goto L_1266ae35;
L_1266aeee:;
  /* 1266aeee mov esp, ebp */
  ESP = (EBP);
  /* 1266aef0 pop ebp */
  EBP = (pop32());
  /* 1266aef1 ret  */
  ESPCHK(0x1266abf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af00 @ 0x1266af00 (23 bytes, 9 insns) */
void f_1266af00(void) {
  FTRACE(0x1266af00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266af00 push ebp */
  push32((uint32_t)(EBP));
  /* 1266af01 mov ebp, esp */
  EBP = (ESP);
  /* 1266af03 cmp dword ptr [0x12691d0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12691d0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266af0a je 0x1266af13 */
  if (C.zf) goto L_1266af13;
  /* 1266af0c mov eax, dword ptr [0x12691c84] */
  EAX = (r32((uint32_t)(0x12691c84)));
  /* 1266af11 jmp 0x1266af15 */
  goto L_1266af15;
L_1266af13:;
  /* 1266af13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1266af15:;
  /* 1266af15 pop ebp */
  EBP = (pop32());
  /* 1266af16 ret  */
  ESPCHK(0x1266af00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af20 @ 0x1266af20 (34 bytes, 10 insns) */
void f_1266af20(void) {
  FTRACE(0x1266af20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266af20 push ebp */
  push32((uint32_t)(EBP));
  /* 1266af21 mov ebp, esp */
  EBP = (ESP);
  /* 1266af23 cmp dword ptr [0x126920d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x126920d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266af2a jne 0x1266af40 */
  if (!C.zf) goto L_1266af40;
  /* 1266af2c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1266af2e call 0x1266a740 */
  push32(0x1266af33u); f_1266a740();
  /* 1266af33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266af36 mov dword ptr [0x126920d0], 1 */
  w32((uint32_t)(0x126920d0), (0x1u));
L_1266af40:;
  /* 1266af40 pop ebp */
  EBP = (pop32());
  /* 1266af41 ret  */
  ESPCHK(0x1266af20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af50 @ 0x1266af50 (664 bytes, 261 insns) [15 switch table(s)] */
void f_1266af50(void) {
  FTRACE(0x1266af50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266af50 push ebp */
  push32((uint32_t)(EBP));
  /* 1266af51 mov ebp, esp */
  EBP = (ESP);
  /* 1266af53 push edi */
  push32((uint32_t)(EDI));
  /* 1266af54 push esi */
  push32((uint32_t)(ESI));
  /* 1266af55 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1266af58 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1266af5b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1266af5e mov eax, ecx */
  EAX = (ECX);
  /* 1266af60 mov edx, ecx */
  EDX = (ECX);
  /* 1266af62 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266af64 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266af66 jbe 0x1266af70 */
  if ((C.cf||C.zf)) goto L_1266af70;
  /* 1266af68 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266af6a jb 0x1266b0e8 */
  if (C.cf) goto L_1266b0e8;
L_1266af70:;
  /* 1266af70 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1266af76 jne 0x1266af8c */
  if (!C.zf) goto L_1266af8c;
  /* 1266af78 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1266af7b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1266af7e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266af81 jb 0x1266afac */
  if (C.cf) goto L_1266afac;
  /* 1266af83 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1266af85 jmp dword ptr [edx*4 + 0x1266b098] */
  switch (EDX) {
    case 0: goto L_1266b0a8;
    case 1: goto L_1266b0b0;
    case 2: goto L_1266b0bc;
    case 3: goto L_1266b0d0;
    default: x86_unimpl("switch@0x1266af85 out of table"); return;
  }
L_1266af8c:;
  /* 1266af8c mov eax, edi */
  EAX = (EDI);
  /* 1266af8e mov edx, 3 */
  EDX = (0x3u);
  /* 1266af93 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266af96 jb 0x1266afa4 */
  if (C.cf) goto L_1266afa4;
  /* 1266af98 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1266af9b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266af9d jmp dword ptr [eax*4 + 0x1266afb0] */
  switch (EAX) {
    case 1: goto L_1266afc0;
    case 2: goto L_1266afec;
    case 3: goto L_1266b010;
    default: x86_unimpl("switch@0x1266af9d out of table"); return;
  }
L_1266afa4:;
  /* 1266afa4 jmp dword ptr [ecx*4 + 0x1266b0a8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1266b0a8)))); return;
  /* 1266afab nop  */
  /* nop */
L_1266afac:;
  /* 1266afac jmp dword ptr [ecx*4 + 0x1266b02c] */
  switch (ECX) {
    case 0: goto L_1266b08f;
    case 1: goto L_1266b07c;
    case 2: goto L_1266b074;
    case 3: goto L_1266b06c;
    case 4: goto L_1266b064;
    case 5: goto L_1266b05c;
    case 6: goto L_1266b054;
    case 7: goto L_1266b04c;
    default: x86_unimpl("switch@0x1266afac out of table"); return;
  }
  /* 1266afb3 nop  */
  /* nop */
L_1266afc0:;
  /* 1266afc0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1266afc2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1266afc4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1266afc6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1266afc9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1266afcc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1266afcf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1266afd2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1266afd5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1266afd8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1266afdb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266afde jb 0x1266afac */
  if (C.cf) goto L_1266afac;
  /* 1266afe0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1266afe2 jmp dword ptr [edx*4 + 0x1266b098] */
  switch (EDX) {
    case 0: goto L_1266b0a8;
    case 1: goto L_1266b0b0;
    case 2: goto L_1266b0bc;
    case 3: goto L_1266b0d0;
    default: x86_unimpl("switch@0x1266afe2 out of table"); return;
  }
  /* 1266afe9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1266afec:;
  /* 1266afec and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1266afee mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1266aff0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1266aff2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1266aff5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1266aff8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1266affb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1266affe add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1266b001 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266b004 jb 0x1266afac */
  if (C.cf) goto L_1266afac;
  /* 1266b006 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1266b008 jmp dword ptr [edx*4 + 0x1266b098] */
  switch (EDX) {
    case 0: goto L_1266b0a8;
    case 1: goto L_1266b0b0;
    case 2: goto L_1266b0bc;
    case 3: goto L_1266b0d0;
    default: x86_unimpl("switch@0x1266b008 out of table"); return;
  }
  /* 1266b00f nop  */
  /* nop */
L_1266b010:;
  /* 1266b010 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1266b012 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1266b014 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1266b016 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1266b017 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1266b01a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1266b01b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266b01e jb 0x1266afac */
  if (C.cf) goto L_1266afac;
  /* 1266b020 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1266b022 jmp dword ptr [edx*4 + 0x1266b098] */
  switch (EDX) {
    case 0: goto L_1266b0a8;
    case 1: goto L_1266b0b0;
    case 2: goto L_1266b0bc;
    case 3: goto L_1266b0d0;
    default: x86_unimpl("switch@0x1266b022 out of table"); return;
  }
  /* 1266b029 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1266b04c:;
  /* 1266b04c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1266b050 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1266b054:;
  /* 1266b054 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1266b058 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1266b05c:;
  /* 1266b05c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1266b060 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1266b064:;
  /* 1266b064 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1266b068 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1266b06c:;
  /* 1266b06c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1266b070 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1266b074:;
  /* 1266b074 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1266b078 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1266b07c:;
  /* 1266b07c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1266b080 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1266b084 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1266b08b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1266b08d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1266b08f:;
  /* 1266b08f jmp dword ptr [edx*4 + 0x1266b098] */
  switch (EDX) {
    case 0: goto L_1266b0a8;
    case 1: goto L_1266b0b0;
    case 2: goto L_1266b0bc;
    case 3: goto L_1266b0d0;
    default: x86_unimpl("switch@0x1266b08f out of table"); return;
  }
  /* 1266b096 mov edi, edi */
  EDI = (EDI);
L_1266b0a8:;
  /* 1266b0a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266b0ab pop esi */
  ESI = (pop32());
  /* 1266b0ac pop edi */
  EDI = (pop32());
  /* 1266b0ad leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1266b0ae ret  */
  ESPCHK(0x1266af50u, _esp0);
  ESP += 4; return;
  /* 1266b0af nop  */
  /* nop */
L_1266b0b0:;
  /* 1266b0b0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1266b0b2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1266b0b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266b0b7 pop esi */
  ESI = (pop32());
  /* 1266b0b8 pop edi */
  EDI = (pop32());
  /* 1266b0b9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1266b0ba ret  */
  ESPCHK(0x1266af50u, _esp0);
  ESP += 4; return;
  /* 1266b0bb nop  */
  /* nop */
L_1266b0bc:;
  /* 1266b0bc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1266b0be mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1266b0c0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1266b0c3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1266b0c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266b0c9 pop esi */
  ESI = (pop32());
  /* 1266b0ca pop edi */
  EDI = (pop32());
  /* 1266b0cb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1266b0cc ret  */
  ESPCHK(0x1266af50u, _esp0);
  ESP += 4; return;
  /* 1266b0cd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1266b0d0:;
  /* 1266b0d0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1266b0d2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1266b0d4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1266b0d7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1266b0da mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1266b0dd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1266b0e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266b0e3 pop esi */
  ESI = (pop32());
  /* 1266b0e4 pop edi */
  EDI = (pop32());
  /* 1266b0e5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1266b0e6 ret  */
  ESPCHK(0x1266af50u, _esp0);
  ESP += 4; return;
  /* 1266b0e7 nop  */
  /* nop */
L_1266b0e8:;
  /* 1266b0e8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1266b0ec lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1266b0f0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1266b0f6 jne 0x1266b11c */
  if (!C.zf) goto L_1266b11c;
  /* 1266b0f8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1266b0fb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1266b0fe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266b101 jb 0x1266b110 */
  if (C.cf) goto L_1266b110;
  /* 1266b103 std  */
  C.df=1;
  /* 1266b104 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1266b106 cld  */
  C.df=0;
  /* 1266b107 jmp dword ptr [edx*4 + 0x1266b230] */
  switch (EDX) {
    case 0: goto L_1266b240;
    case 1: goto L_1266b248;
    case 2: goto L_1266b258;
    case 3: goto L_1266b26c;
    default: x86_unimpl("switch@0x1266b107 out of table"); return;
  }
  /* 1266b10e mov edi, edi */
  EDI = (EDI);
L_1266b110:;
  /* 1266b110 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1266b112 jmp dword ptr [ecx*4 + 0x1266b1e0] */
  switch (ECX) {
    case 0: goto L_1266b227;
    default: x86_unimpl("switch@0x1266b112 out of table"); return;
  }
  /* 1266b119 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1266b11c:;
  /* 1266b11c mov eax, edi */
  EAX = (EDI);
  /* 1266b11e mov edx, 3 */
  EDX = (0x3u);
  /* 1266b123 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266b126 jb 0x1266b134 */
  if (C.cf) goto L_1266b134;
  /* 1266b128 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1266b12b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266b12d jmp dword ptr [eax*4 + 0x1266b138] */
  switch (EAX) {
    case 1: goto L_1266b148;
    case 2: goto L_1266b168;
    case 3: goto L_1266b190;
    default: x86_unimpl("switch@0x1266b12d out of table"); return;
  }
L_1266b134:;
  /* 1266b134 jmp dword ptr [ecx*4 + 0x1266b230] */
  switch (ECX) {
    case 0: goto L_1266b240;
    case 1: goto L_1266b248;
    case 2: goto L_1266b258;
    case 3: goto L_1266b26c;
    default: x86_unimpl("switch@0x1266b134 out of table"); return;
  }
  /* 1266b13b nop  */
  /* nop */
L_1266b148:;
  /* 1266b148 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1266b14b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1266b14d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1266b150 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1266b151 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1266b154 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1266b155 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266b158 jb 0x1266b110 */
  if (C.cf) goto L_1266b110;
  /* 1266b15a std  */
  C.df=1;
  /* 1266b15b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1266b15d cld  */
  C.df=0;
  /* 1266b15e jmp dword ptr [edx*4 + 0x1266b230] */
  switch (EDX) {
    case 0: goto L_1266b240;
    case 1: goto L_1266b248;
    case 2: goto L_1266b258;
    case 3: goto L_1266b26c;
    default: x86_unimpl("switch@0x1266b15e out of table"); return;
  }
  /* 1266b165 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1266b168:;
  /* 1266b168 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1266b16b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1266b16d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1266b170 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1266b173 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1266b176 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1266b179 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266b17c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266b17f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266b182 jb 0x1266b110 */
  if (C.cf) goto L_1266b110;
  /* 1266b184 std  */
  C.df=1;
  /* 1266b185 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1266b187 cld  */
  C.df=0;
  /* 1266b188 jmp dword ptr [edx*4 + 0x1266b230] */
  switch (EDX) {
    case 0: goto L_1266b240;
    case 1: goto L_1266b248;
    case 2: goto L_1266b258;
    case 3: goto L_1266b26c;
    default: x86_unimpl("switch@0x1266b188 out of table"); return;
  }
  /* 1266b18f nop  */
  /* nop */
L_1266b190:;
  /* 1266b190 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1266b193 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1266b195 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1266b198 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1266b19b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1266b19e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1266b1a1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1266b1a4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1266b1a7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266b1aa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266b1ad cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266b1b0 jb 0x1266b110 */
  if (C.cf) goto L_1266b110;
  /* 1266b1b6 std  */
  C.df=1;
  /* 1266b1b7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1266b1b9 cld  */
  C.df=0;
  /* 1266b1ba jmp dword ptr [edx*4 + 0x1266b230] */
  switch (EDX) {
    case 0: goto L_1266b240;
    case 1: goto L_1266b248;
    case 2: goto L_1266b258;
    case 3: goto L_1266b26c;
    default: x86_unimpl("switch@0x1266b1ba out of table"); return;
  }
  /* 1266b1c1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1266b1c4 in al, 0xb1 */
  x86_unimpl("in @ 0x1266b1c4");
  /* 1266b1c6 adc ch, ah */
  { uint32_t _a=(C.c.b.h),_b=(AH),_r=_a+_b+C.cf; C.c.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 1266b1c9 mov cl, 0x66 */
  CL = (0x66u);
  /* 1266b1cb adc dh, ah */
  { uint32_t _a=(C.d.b.h),_b=(AH),_r=_a+_b+C.cf; C.d.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 1266b1cd mov cl, 0x66 */
  CL = (0x66u);
  /* 1266b1cf adc bh, ah */
  { uint32_t _a=(C.b.b.h),_b=(AH),_r=_a+_b+C.cf; C.b.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 1266b1d1 mov cl, 0x66 */
  CL = (0x66u);
  /* 1266b1d3 adc al, byte ptr [edx + esi*4] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDX + ESI*4))),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1266b1d6 adc cl, byte ptr [edx + esi*4] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EDX + ESI*4))),_r=_a+_b+C.cf; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1266b1da adc dl, byte ptr [edx + esi*4] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EDX + ESI*4))),_r=_a+_b+C.cf; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1266b1e4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1266b1e8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1266b1ec mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1266b1f0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1266b1f4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1266b1f8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1266b1fc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1266b200 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1266b204 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1266b208 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1266b20c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1266b210 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1266b214 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1266b218 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1266b21c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1266b223 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1266b225 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1266b227:;
  /* 1266b227 jmp dword ptr [edx*4 + 0x1266b230] */
  switch (EDX) {
    case 0: goto L_1266b240;
    case 1: goto L_1266b248;
    case 2: goto L_1266b258;
    case 3: goto L_1266b26c;
    default: x86_unimpl("switch@0x1266b227 out of table"); return;
  }
  /* 1266b22e mov edi, edi */
  EDI = (EDI);
L_1266b240:;
  /* 1266b240 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266b243 pop esi */
  ESI = (pop32());
  /* 1266b244 pop edi */
  EDI = (pop32());
  /* 1266b245 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1266b246 ret  */
  ESPCHK(0x1266af50u, _esp0);
  ESP += 4; return;
  /* 1266b247 nop  */
  /* nop */
L_1266b248:;
  /* 1266b248 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1266b24b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1266b24e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266b251 pop esi */
  ESI = (pop32());
  /* 1266b252 pop edi */
  EDI = (pop32());
  /* 1266b253 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1266b254 ret  */
  ESPCHK(0x1266af50u, _esp0);
  ESP += 4; return;
  /* 1266b255 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1266b258:;
  /* 1266b258 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1266b25b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1266b25e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1266b261 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1266b264 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266b267 pop esi */
  ESI = (pop32());
  /* 1266b268 pop edi */
  EDI = (pop32());
  /* 1266b269 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1266b26a ret  */
  ESPCHK(0x1266af50u, _esp0);
  ESP += 4; return;
  /* 1266b26b nop  */
  /* nop */
L_1266b26c:;
  /* 1266b26c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1266b26f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1266b272 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1266b275 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1266b278 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1266b27b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1266b27e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266b281 pop esi */
  ESI = (pop32());
  /* 1266b282 pop edi */
  EDI = (pop32());
  /* 1266b283 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1266b284 ret  */
  ESPCHK(0x1266af50u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x1266b290 (104 bytes, 43 insns) */
void f_1266b290(void) {
  FTRACE(0x1266b290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266b290 push ebx */
  push32((uint32_t)(EBX));
  /* 1266b291 push esi */
  push32((uint32_t)(ESI));
  /* 1266b292 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 1266b296 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266b298 jne 0x1266b2b2 */
  if (!C.zf) goto L_1266b2b2;
  /* 1266b29a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1266b29e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1266b2a2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1266b2a4 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1266b2a6 mov ebx, eax */
  EBX = (EAX);
  /* 1266b2a8 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1266b2ac div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1266b2ae mov edx, ebx */
  EDX = (EBX);
  /* 1266b2b0 jmp 0x1266b2f3 */
  goto L_1266b2f3;
L_1266b2b2:;
  /* 1266b2b2 mov ecx, eax */
  ECX = (EAX);
  /* 1266b2b4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 1266b2b8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1266b2bc mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_1266b2c0:;
  /* 1266b2c0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1266b2c2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1266b2c4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1266b2c6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1266b2c8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1266b2ca jne 0x1266b2c0 */
  if (!C.zf) goto L_1266b2c0;
  /* 1266b2cc div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1266b2ce mov esi, eax */
  ESI = (EAX);
  /* 1266b2d0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1266b2d4 mov ecx, eax */
  ECX = (EAX);
  /* 1266b2d6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1266b2da mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1266b2dc add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266b2de jb 0x1266b2ee */
  if (C.cf) goto L_1266b2ee;
  /* 1266b2e0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266b2e4 ja 0x1266b2ee */
  if ((!C.cf&&!C.zf)) goto L_1266b2ee;
  /* 1266b2e6 jb 0x1266b2ef */
  if (C.cf) goto L_1266b2ef;
  /* 1266b2e8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266b2ec jbe 0x1266b2ef */
  if ((C.cf||C.zf)) goto L_1266b2ef;
L_1266b2ee:;
  /* 1266b2ee dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1266b2ef:;
  /* 1266b2ef xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1266b2f1 mov eax, esi */
  EAX = (ESI);
L_1266b2f3:;
  /* 1266b2f3 pop esi */
  ESI = (pop32());
  /* 1266b2f4 pop ebx */
  EBX = (pop32());
  /* 1266b2f5 ret 0x10 */
  ESPCHK(0x1266b290u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x1266b300 (117 bytes, 44 insns) */
void f_1266b300(void) {
  FTRACE(0x1266b300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266b300 push ebx */
  push32((uint32_t)(EBX));
  /* 1266b301 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1266b305 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266b307 jne 0x1266b321 */
  if (!C.zf) goto L_1266b321;
  /* 1266b309 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1266b30d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1266b311 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1266b313 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1266b315 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1266b319 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1266b31b mov eax, edx */
  EAX = (EDX);
  /* 1266b31d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1266b31f jmp 0x1266b371 */
  goto L_1266b371;
L_1266b321:;
  /* 1266b321 mov ecx, eax */
  ECX = (EAX);
  /* 1266b323 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 1266b327 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1266b32b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1266b32f:;
  /* 1266b32f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1266b331 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1266b333 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1266b335 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1266b337 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1266b339 jne 0x1266b32f */
  if (!C.zf) goto L_1266b32f;
  /* 1266b33b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1266b33d mov ecx, eax */
  ECX = (EAX);
  /* 1266b33f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1266b343 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 1266b344 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1266b348 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266b34a jb 0x1266b35a */
  if (C.cf) goto L_1266b35a;
  /* 1266b34c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266b350 ja 0x1266b35a */
  if ((!C.cf&&!C.zf)) goto L_1266b35a;
  /* 1266b352 jb 0x1266b362 */
  if (C.cf) goto L_1266b362;
  /* 1266b354 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266b358 jbe 0x1266b362 */
  if ((C.cf||C.zf)) goto L_1266b362;
L_1266b35a:;
  /* 1266b35a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266b35e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1266b362:;
  /* 1266b362 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266b366 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266b36a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1266b36c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1266b36e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1266b371:;
  /* 1266b371 pop ebx */
  EBX = (pop32());
  /* 1266b372 ret 0x10 */
  ESPCHK(0x1266b300u, _esp0);
  ESP += 20; return;
}

/* FUN_1000b380 @ 0x1266b380 (628 bytes, 214 insns) */
void f_1266b380(void) {
  FTRACE(0x1266b380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266b380 push ebp */
  push32((uint32_t)(EBP));
  /* 1266b381 mov ebp, esp */
  EBP = (ESP);
  /* 1266b383 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266b386 push ebx */
  push32((uint32_t)(EBX));
  /* 1266b387 push esi */
  push32((uint32_t)(ESI));
  /* 1266b388 push edi */
  push32((uint32_t)(EDI));
L_1266b389:;
  /* 1266b389 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266b38d jne 0x1266b3ad */
  if (!C.zf) goto L_1266b3ad;
  /* 1266b38f push 0x1268c100 */
  push32((uint32_t)(0x1268c100u));
  /* 1266b394 push 0 */
  push32((uint32_t)(0x0u));
  /* 1266b396 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 1266b398 push 0x1268c0f4 */
  push32((uint32_t)(0x1268c0f4u));
  /* 1266b39d push 2 */
  push32((uint32_t)(0x2u));
  /* 1266b39f call 0x12663730 */
  push32(0x1266b3a4u); f_12663730();
  /* 1266b3a4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266b3a7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266b3aa jne 0x1266b3ad */
  if (!C.zf) goto L_1266b3ad;
  /* 1266b3ac int3  */
  x86_unimpl("int3 @ 0x1266b3ac");
L_1266b3ad:;
  /* 1266b3ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266b3af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266b3b1 jne 0x1266b389 */
  if (!C.zf) goto L_1266b389;
  /* 1266b3b3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266b3b6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1266b3b9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266b3bc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1266b3bf mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1266b3c2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266b3c5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1266b3c8 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 1266b3ce test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1266b3d0 je 0x1266b3df */
  if (C.zf) goto L_1266b3df;
  /* 1266b3d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266b3d5 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1266b3d8 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1266b3db test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1266b3dd je 0x1266b3f5 */
  if (C.zf) goto L_1266b3f5;
L_1266b3df:;
  /* 1266b3df mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266b3e2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1266b3e5 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1266b3e7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266b3ea mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1266b3ed or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1266b3f0 jmp 0x1266b5ed */
  goto L_1266b5ed;
L_1266b3f5:;
  /* 1266b3f5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266b3f8 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1266b3fb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1266b3fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266b400 je 0x1266b44c */
  if (C.zf) goto L_1266b44c;
  /* 1266b402 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266b405 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1266b40c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266b40f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1266b412 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1266b415 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266b417 je 0x1266b435 */
  if (C.zf) goto L_1266b435;
  /* 1266b419 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266b41c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266b41f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1266b422 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1266b424 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266b427 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1266b42a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 1266b42d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266b430 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1266b433 jmp 0x1266b44c */
  goto L_1266b44c;
L_1266b435:;
  /* 1266b435 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266b438 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1266b43b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1266b43e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266b441 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1266b444 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1266b447 jmp 0x1266b5ed */
  goto L_1266b5ed;
L_1266b44c:;
  /* 1266b44c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266b44f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1266b452 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1266b455 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266b458 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1266b45b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266b45e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1266b461 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 1266b464 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266b467 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1266b46a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266b46d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1266b474 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1266b47b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266b47e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1266b481 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266b484 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1266b487 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 1266b48d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1266b48f jne 0x1266b4bf */
  if (!C.zf) goto L_1266b4bf;
  /* 1266b491 cmp dword ptr [ebp - 8], 0x1268f140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1268f140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266b498 je 0x1266b4a3 */
  if (C.zf) goto L_1266b4a3;
  /* 1266b49a cmp dword ptr [ebp - 8], 0x1268f160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1268f160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266b4a1 jne 0x1266b4b3 */
  if (!C.zf) goto L_1266b4b3;
L_1266b4a3:;
  /* 1266b4a3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1266b4a6 push edx */
  push32((uint32_t)(EDX));
  /* 1266b4a7 call 0x1266d2f0 */
  push32(0x1266b4acu); f_1266d2f0();
  /* 1266b4ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266b4af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266b4b1 jne 0x1266b4bf */
  if (!C.zf) goto L_1266b4bf;
L_1266b4b3:;
  /* 1266b4b3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266b4b6 push eax */
  push32((uint32_t)(EAX));
  /* 1266b4b7 call 0x1266d220 */
  push32(0x1266b4bcu); f_1266d220();
  /* 1266b4bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1266b4bf:;
  /* 1266b4bf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266b4c2 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1266b4c5 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 1266b4cb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1266b4cd je 0x1266b5ab */
  if (C.zf) goto L_1266b5ab;
L_1266b4d3:;
  /* 1266b4d3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266b4d6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266b4d9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1266b4db sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266b4de test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1266b4e0 jge 0x1266b503 */
  if ((C.sf==C.of)) goto L_1266b503;
  /* 1266b4e2 push 0x1268c0b4 */
  push32((uint32_t)(0x1268c0b4u));
  /* 1266b4e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1266b4e9 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1266b4ee push 0x1268c0f4 */
  push32((uint32_t)(0x1268c0f4u));
  /* 1266b4f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266b4f5 call 0x12663730 */
  push32(0x1266b4fau); f_12663730();
  /* 1266b4fa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266b4fd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266b500 jne 0x1266b503 */
  if (!C.zf) goto L_1266b503;
  /* 1266b502 int3  */
  x86_unimpl("int3 @ 0x1266b502");
L_1266b503:;
  /* 1266b503 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266b505 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266b507 jne 0x1266b4d3 */
  if (!C.zf) goto L_1266b4d3;
  /* 1266b509 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266b50c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266b50f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1266b511 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266b514 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1266b517 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266b51a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1266b51d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266b520 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266b523 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1266b525 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266b528 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1266b52b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266b52e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266b531 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1266b534 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266b538 jle 0x1266b556 */
  if ((C.zf||C.sf!=C.of)) goto L_1266b556;
  /* 1266b53a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266b53d push ecx */
  push32((uint32_t)(ECX));
  /* 1266b53e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266b541 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1266b544 push eax */
  push32((uint32_t)(EAX));
  /* 1266b545 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1266b548 push ecx */
  push32((uint32_t)(ECX));
  /* 1266b549 call 0x1266cf10 */
  push32(0x1266b54eu); f_1266cf10();
  /* 1266b54e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266b551 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1266b554 jmp 0x1266b59e */
  goto L_1266b59e;
L_1266b556:;
  /* 1266b556 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266b55a je 0x1266b579 */
  if (C.zf) goto L_1266b579;
  /* 1266b55c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1266b55f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1266b562 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1266b565 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1266b568 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1266b56b mov ecx, dword ptr [edx*4 + 0x12691f80] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12691f80)));
  /* 1266b572 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266b574 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1266b577 jmp 0x1266b580 */
  goto L_1266b580;
L_1266b579:;
  /* 1266b579 mov dword ptr [ebp - 0x14], 0x1268ea60 */
  w32((uint32_t)(EBP + -0x14), (0x1268ea60u));
L_1266b580:;
  /* 1266b580 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1266b583 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 1266b587 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1266b58a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266b58c je 0x1266b59e */
  if (C.zf) goto L_1266b59e;
  /* 1266b58e push 2 */
  push32((uint32_t)(0x2u));
  /* 1266b590 push 0 */
  push32((uint32_t)(0x0u));
  /* 1266b592 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1266b595 push ecx */
  push32((uint32_t)(ECX));
  /* 1266b596 call 0x1266cdc0 */
  push32(0x1266b59bu); f_1266cdc0();
  /* 1266b59b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1266b59e:;
  /* 1266b59e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266b5a1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1266b5a4 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1266b5a7 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1266b5a9 jmp 0x1266b5c9 */
  goto L_1266b5c9;
L_1266b5ab:;
  /* 1266b5ab mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1266b5b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266b5b5 push edx */
  push32((uint32_t)(EDX));
  /* 1266b5b6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1266b5b9 push eax */
  push32((uint32_t)(EAX));
  /* 1266b5ba mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1266b5bd push ecx */
  push32((uint32_t)(ECX));
  /* 1266b5be call 0x1266cf10 */
  push32(0x1266b5c3u); f_1266cf10();
  /* 1266b5c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266b5c6 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1266b5c9:;
  /* 1266b5c9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266b5cc cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266b5cf je 0x1266b5e5 */
  if (C.zf) goto L_1266b5e5;
  /* 1266b5d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266b5d4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1266b5d7 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1266b5da mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266b5dd mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1266b5e0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1266b5e3 jmp 0x1266b5ed */
  goto L_1266b5ed;
L_1266b5e5:;
  /* 1266b5e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266b5e8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_1266b5ed:;
  /* 1266b5ed pop edi */
  EDI = (pop32());
  /* 1266b5ee pop esi */
  ESI = (pop32());
  /* 1266b5ef pop ebx */
  EBX = (pop32());
  /* 1266b5f0 mov esp, ebp */
  ESP = (EBP);
  /* 1266b5f2 pop ebp */
  EBP = (pop32());
  /* 1266b5f3 ret  */
  ESPCHK(0x1266b380u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b600 @ 0x1266b600 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_1266b600(void) {
  FTRACE(0x1266b600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266b600 push ebp */
  push32((uint32_t)(EBP));
  /* 1266b601 mov ebp, esp */
  EBP = (ESP);
  /* 1266b603 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266b609 push ebx */
  push32((uint32_t)(EBX));
  /* 1266b60a push esi */
  push32((uint32_t)(ESI));
  /* 1266b60b push edi */
  push32((uint32_t)(EDI));
  /* 1266b60c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1266b613 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 1266b61d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1266b624:;
  /* 1266b624 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266b627 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1266b629 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 1266b62c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1266b630 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266b633 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266b636 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1266b639 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1266b63b je 0x1266c217 */
  if (C.zf) goto L_1266c217;
  /* 1266b641 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266b648 jl 0x1266c217 */
  if ((C.sf!=C.of)) goto L_1266c217;
  /* 1266b64e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1266b652 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266b655 jl 0x1266b676 */
  if ((C.sf!=C.of)) goto L_1266b676;
  /* 1266b657 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1266b65b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266b65e jg 0x1266b676 */
  if ((!C.zf&&C.sf==C.of)) goto L_1266b676;
  /* 1266b660 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1266b664 movsx ecx, byte ptr [eax + 0x1268c0ec] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x1268c0ec))));
  /* 1266b66b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 1266b66e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 1266b674 jmp 0x1266b680 */
  goto L_1266b680;
L_1266b676:;
  /* 1266b676 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_1266b680:;
  /* 1266b680 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 1266b686 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1266b689 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266b68c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1266b68f movsx edx, byte ptr [ecx + eax*8 + 0x1268c10c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x1268c10c))));
  /* 1266b697 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1266b69a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1266b69d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1266b6a0 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 1266b6a6 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266b6ad ja 0x1266c212 */
  if ((!C.cf&&!C.zf)) goto L_1266c212;
  /* 1266b6b3 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 1266b6b9 jmp dword ptr [ecx*4 + 0x1266c224] */
  switch (ECX) {
    case 0: goto L_1266b6c0;
    case 1: goto L_1266b75a;
    case 2: goto L_1266b79c;
    case 3: goto L_1266b80b;
    case 4: goto L_1266b863;
    case 5: goto L_1266b872;
    case 6: goto L_1266b8be;
    case 7: goto L_1266b951;
    case 8: goto L_1266b7e8;
    case 9: goto L_1266b7f3;
    case 10: goto L_1266b7de;
    case 11: goto L_1266b7d3;
    case 12: goto L_1266b7fe;
    case 13: goto L_1266b806;
    default: x86_unimpl("switch@0x1266b6b9 out of table"); return;
  }
L_1266b6c0:;
  /* 1266b6c0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1266b6c7 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1266b6ca and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1266b6d0 mov eax, dword ptr [0x1268ec98] */
  EAX = (r32((uint32_t)(0x1268ec98)));
  /* 1266b6d5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1266b6d7 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1266b6db and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1266b6e1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1266b6e3 je 0x1266b73d */
  if (C.zf) goto L_1266b73d;
  /* 1266b6e5 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 1266b6eb push edx */
  push32((uint32_t)(EDX));
  /* 1266b6ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266b6ef push eax */
  push32((uint32_t)(EAX));
  /* 1266b6f0 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1266b6f4 push ecx */
  push32((uint32_t)(ECX));
  /* 1266b6f5 call 0x1266c330 */
  push32(0x1266b6fau); f_1266c330();
  /* 1266b6fa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266b6fd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266b700 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1266b702 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 1266b705 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266b708 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266b70b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1266b70e:;
  /* 1266b70e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1266b712 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1266b714 jne 0x1266b737 */
  if (!C.zf) goto L_1266b737;
  /* 1266b716 push 0x1268c18c */
  push32((uint32_t)(0x1268c18cu));
  /* 1266b71b push 0 */
  push32((uint32_t)(0x0u));
  /* 1266b71d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 1266b722 push 0x1268c180 */
  push32((uint32_t)(0x1268c180u));
  /* 1266b727 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266b729 call 0x12663730 */
  push32(0x1266b72eu); f_12663730();
  /* 1266b72e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266b731 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266b734 jne 0x1266b737 */
  if (!C.zf) goto L_1266b737;
  /* 1266b736 int3  */
  x86_unimpl("int3 @ 0x1266b736");
L_1266b737:;
  /* 1266b737 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266b739 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266b73b jne 0x1266b70e */
  if (!C.zf) goto L_1266b70e;
L_1266b73d:;
  /* 1266b73d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1266b743 push ecx */
  push32((uint32_t)(ECX));
  /* 1266b744 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266b747 push edx */
  push32((uint32_t)(EDX));
  /* 1266b748 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1266b74c push eax */
  push32((uint32_t)(EAX));
  /* 1266b74d call 0x1266c330 */
  push32(0x1266b752u); f_1266c330();
  /* 1266b752 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266b755 jmp 0x1266c212 */
  goto L_1266c212;
L_1266b75a:;
  /* 1266b75a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1266b761 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266b764 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 1266b76a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 1266b770 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 1266b776 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 1266b77c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1266b77f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1266b786 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 1266b790 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1266b797 jmp 0x1266c212 */
  goto L_1266c212;
L_1266b79c:;
  /* 1266b79c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1266b7a0 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 1266b7a6 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 1266b7ac sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266b7af mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 1266b7b5 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266b7bc ja 0x1266b806 */
  if ((!C.cf&&!C.zf)) goto L_1266b806;
  /* 1266b7be mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 1266b7c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266b7c6 mov al, byte ptr [ecx + 0x1266c25c] */
  AL = (r8((uint32_t)(ECX + 0x1266c25c)));
  /* 1266b7cc jmp dword ptr [eax*4 + 0x1266c244] */
  switch (EAX) {
    case 0: goto L_1266b7e8;
    case 1: goto L_1266b7f3;
    case 2: goto L_1266b7de;
    case 3: goto L_1266b7d3;
    case 4: goto L_1266b7fe;
    case 5: goto L_1266b806;
    default: x86_unimpl("switch@0x1266b7cc out of table"); return;
  }
L_1266b7d3:;
  /* 1266b7d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266b7d6 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1266b7d9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1266b7dc jmp 0x1266b806 */
  goto L_1266b806;
L_1266b7de:;
  /* 1266b7de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266b7e1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1266b7e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1266b7e6 jmp 0x1266b806 */
  goto L_1266b806;
L_1266b7e8:;
  /* 1266b7e8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266b7eb or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1266b7ee mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1266b7f1 jmp 0x1266b806 */
  goto L_1266b806;
L_1266b7f3:;
  /* 1266b7f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266b7f6 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 1266b7f9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1266b7fc jmp 0x1266b806 */
  goto L_1266b806;
L_1266b7fe:;
  /* 1266b7fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266b801 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 1266b803 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1266b806:;
  /* 1266b806 jmp 0x1266c212 */
  goto L_1266c212;
L_1266b80b:;
  /* 1266b80b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1266b80f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266b812 jne 0x1266b847 */
  if (!C.zf) goto L_1266b847;
  /* 1266b814 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1266b817 push edx */
  push32((uint32_t)(EDX));
  /* 1266b818 call 0x1266c440 */
  push32(0x1266b81du); f_1266c440();
  /* 1266b81d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266b820 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 1266b826 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266b82d jge 0x1266b845 */
  if ((C.sf==C.of)) goto L_1266b845;
  /* 1266b82f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266b832 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1266b834 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1266b837 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1266b83d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1266b83f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1266b845:;
  /* 1266b845 jmp 0x1266b85e */
  goto L_1266b85e;
L_1266b847:;
  /* 1266b847 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 1266b84d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1266b850 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1266b854 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 1266b858 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1266b85e:;
  /* 1266b85e jmp 0x1266c212 */
  goto L_1266c212;
L_1266b863:;
  /* 1266b863 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 1266b86d jmp 0x1266c212 */
  goto L_1266c212;
L_1266b872:;
  /* 1266b872 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1266b876 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266b879 jne 0x1266b8a2 */
  if (!C.zf) goto L_1266b8a2;
  /* 1266b87b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1266b87e push eax */
  push32((uint32_t)(EAX));
  /* 1266b87f call 0x1266c440 */
  push32(0x1266b884u); f_1266c440();
  /* 1266b884 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266b887 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1266b88d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266b894 jge 0x1266b8a0 */
  if ((C.sf==C.of)) goto L_1266b8a0;
  /* 1266b896 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_1266b8a0:;
  /* 1266b8a0 jmp 0x1266b8b9 */
  goto L_1266b8b9;
L_1266b8a2:;
  /* 1266b8a2 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 1266b8a8 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1266b8ab movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1266b8af lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1266b8b3 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_1266b8b9:;
  /* 1266b8b9 jmp 0x1266c212 */
  goto L_1266c212;
L_1266b8be:;
  /* 1266b8be movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1266b8c2 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 1266b8c8 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1266b8ce sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266b8d1 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 1266b8d7 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266b8de ja 0x1266b94c */
  if ((!C.cf&&!C.zf)) goto L_1266b94c;
  /* 1266b8e0 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1266b8e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266b8e8 mov al, byte ptr [ecx + 0x1266c281] */
  AL = (r8((uint32_t)(ECX + 0x1266c281)));
  /* 1266b8ee jmp dword ptr [eax*4 + 0x1266c26d] */
  switch (EAX) {
    case 0: goto L_1266b900;
    case 1: goto L_1266b939;
    case 2: goto L_1266b8f5;
    case 3: goto L_1266b943;
    case 4: goto L_1266b94c;
    default: x86_unimpl("switch@0x1266b8ee out of table"); return;
  }
L_1266b8f5:;
  /* 1266b8f5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266b8f8 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 1266b8fb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1266b8fe jmp 0x1266b94c */
  goto L_1266b94c;
L_1266b900:;
  /* 1266b900 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266b903 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1266b906 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266b909 jne 0x1266b92b */
  if (!C.zf) goto L_1266b92b;
  /* 1266b90b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266b90e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1266b912 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266b915 jne 0x1266b92b */
  if (!C.zf) goto L_1266b92b;
  /* 1266b917 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266b91a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266b91d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1266b920 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266b923 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1266b926 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1266b929 jmp 0x1266b937 */
  goto L_1266b937;
L_1266b92b:;
  /* 1266b92b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 1266b932 jmp 0x1266b6c0 */
  goto L_1266b6c0;
L_1266b937:;
  /* 1266b937 jmp 0x1266b94c */
  goto L_1266b94c;
L_1266b939:;
  /* 1266b939 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266b93c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1266b93e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1266b941 jmp 0x1266b94c */
  goto L_1266b94c;
L_1266b943:;
  /* 1266b943 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266b946 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1266b949 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1266b94c:;
  /* 1266b94c jmp 0x1266c212 */
  goto L_1266c212;
L_1266b951:;
  /* 1266b951 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1266b955 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 1266b95b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1266b961 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266b964 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 1266b96a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266b971 ja 0x1266c037 */
  if ((!C.cf&&!C.zf)) goto L_1266c037;
  /* 1266b977 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1266b97d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1266b97f mov cl, byte ptr [edx + 0x1266c2ec] */
  CL = (r8((uint32_t)(EDX + 0x1266c2ec)));
  /* 1266b985 jmp dword ptr [ecx*4 + 0x1266c2b0] */
  switch (ECX) {
    case 0: goto L_1266b98c;
    case 1: goto L_1266bc20;
    case 2: goto L_1266bab0;
    case 3: goto L_1266bd59;
    case 4: goto L_1266ba1b;
    case 5: goto L_1266b9a1;
    case 6: goto L_1266bd2b;
    case 7: goto L_1266bc30;
    case 8: goto L_1266bbd5;
    case 9: goto L_1266bda5;
    case 10: goto L_1266bd4f;
    case 11: goto L_1266bac6;
    case 12: goto L_1266bd43;
    case 13: goto L_1266bd65;
    case 14: goto L_1266c037;
    default: x86_unimpl("switch@0x1266b985 out of table"); return;
  }
L_1266b98c:;
  /* 1266b98c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266b98f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 1266b994 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266b996 jne 0x1266b9a1 */
  if (!C.zf) goto L_1266b9a1;
  /* 1266b998 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266b99b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1266b99e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1266b9a1:;
  /* 1266b9a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266b9a4 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 1266b9aa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1266b9ac je 0x1266b9e7 */
  if (C.zf) goto L_1266b9e7;
  /* 1266b9ae lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1266b9b1 push eax */
  push32((uint32_t)(EAX));
  /* 1266b9b2 call 0x1266c480 */
  push32(0x1266b9b7u); f_1266c480();
  /* 1266b9b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266b9ba mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 1266b9be mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 1266b9c2 push ecx */
  push32((uint32_t)(ECX));
  /* 1266b9c3 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1266b9c9 push edx */
  push32((uint32_t)(EDX));
  /* 1266b9ca call 0x1266d560 */
  push32(0x1266b9cfu); f_1266d560();
  /* 1266b9cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266b9d2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1266b9d5 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266b9d9 jge 0x1266b9e5 */
  if ((C.sf==C.of)) goto L_1266b9e5;
  /* 1266b9db mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_1266b9e5:;
  /* 1266b9e5 jmp 0x1266ba0d */
  goto L_1266ba0d;
L_1266b9e7:;
  /* 1266b9e7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1266b9ea push eax */
  push32((uint32_t)(EAX));
  /* 1266b9eb call 0x1266c440 */
  push32(0x1266b9f0u); f_1266c440();
  /* 1266b9f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266b9f3 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 1266b9fa mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 1266ba00 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 1266ba06 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_1266ba0d:;
  /* 1266ba0d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1266ba13 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1266ba16 jmp 0x1266c037 */
  goto L_1266c037;
L_1266ba1b:;
  /* 1266ba1b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1266ba1e push eax */
  push32((uint32_t)(EAX));
  /* 1266ba1f call 0x1266c440 */
  push32(0x1266ba24u); f_1266c440();
  /* 1266ba24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266ba27 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 1266ba2d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266ba34 je 0x1266ba42 */
  if (C.zf) goto L_1266ba42;
  /* 1266ba36 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1266ba3c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266ba40 jne 0x1266ba5c */
  if (!C.zf) goto L_1266ba5c;
L_1266ba42:;
  /* 1266ba42 mov edx, dword ptr [0x1268efb0] */
  EDX = (r32((uint32_t)(0x1268efb0)));
  /* 1266ba48 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1266ba4b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1266ba4e push eax */
  push32((uint32_t)(EAX));
  /* 1266ba4f call 0x126674a0 */
  push32(0x1266ba54u); f_126674a0();
  /* 1266ba54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266ba57 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1266ba5a jmp 0x1266baab */
  goto L_1266baab;
L_1266ba5c:;
  /* 1266ba5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266ba5f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 1266ba65 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1266ba67 je 0x1266ba8c */
  if (C.zf) goto L_1266ba8c;
  /* 1266ba69 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1266ba6f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1266ba72 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1266ba75 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1266ba7b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 1266ba7e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1266ba80 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1266ba83 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1266ba8a jmp 0x1266baab */
  goto L_1266baab;
L_1266ba8c:;
  /* 1266ba8c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1266ba93 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1266ba99 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1266ba9c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1266ba9f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1266baa5 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 1266baa8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1266baab:;
  /* 1266baab jmp 0x1266c037 */
  goto L_1266c037;
L_1266bab0:;
  /* 1266bab0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266bab3 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 1266bab9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1266babb jne 0x1266bac6 */
  if (!C.zf) goto L_1266bac6;
  /* 1266babd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266bac0 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1266bac3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1266bac6:;
  /* 1266bac6 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266bacd jne 0x1266badb */
  if (!C.zf) goto L_1266badb;
  /* 1266bacf mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 1266bad9 jmp 0x1266bae7 */
  goto L_1266bae7;
L_1266badb:;
  /* 1266badb mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1266bae1 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_1266bae7:;
  /* 1266bae7 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 1266baed mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1266baf3 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1266baf6 push edx */
  push32((uint32_t)(EDX));
  /* 1266baf7 call 0x1266c440 */
  push32(0x1266bafcu); f_1266c440();
  /* 1266bafc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266baff mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1266bb02 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266bb05 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 1266bb0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266bb0c je 0x1266bb76 */
  if (C.zf) goto L_1266bb76;
  /* 1266bb0e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266bb12 jne 0x1266bb1d */
  if (!C.zf) goto L_1266bb1d;
  /* 1266bb14 mov ecx, dword ptr [0x1268efb4] */
  ECX = (r32((uint32_t)(0x1268efb4)));
  /* 1266bb1a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1266bb1d:;
  /* 1266bb1d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1266bb24 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1266bb27 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_1266bb2d:;
  /* 1266bb2d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1266bb33 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 1266bb39 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266bb3c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1266bb42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266bb44 je 0x1266bb66 */
  if (C.zf) goto L_1266bb66;
  /* 1266bb46 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1266bb4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266bb4e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1266bb51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266bb53 je 0x1266bb66 */
  if (C.zf) goto L_1266bb66;
  /* 1266bb55 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 1266bb5b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266bb5e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 1266bb64 jmp 0x1266bb2d */
  goto L_1266bb2d;
L_1266bb66:;
  /* 1266bb66 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1266bb6c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266bb6f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1266bb71 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1266bb74 jmp 0x1266bbd0 */
  goto L_1266bbd0;
L_1266bb76:;
  /* 1266bb76 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266bb7a jne 0x1266bb84 */
  if (!C.zf) goto L_1266bb84;
  /* 1266bb7c mov eax, dword ptr [0x1268efb0] */
  EAX = (r32((uint32_t)(0x1268efb0)));
  /* 1266bb81 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1266bb84:;
  /* 1266bb84 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1266bb87 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_1266bb8d:;
  /* 1266bb8d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 1266bb93 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1266bb99 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266bb9c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 1266bba2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1266bba4 je 0x1266bbc4 */
  if (C.zf) goto L_1266bbc4;
  /* 1266bba6 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1266bbac movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1266bbaf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1266bbb1 je 0x1266bbc4 */
  if (C.zf) goto L_1266bbc4;
  /* 1266bbb3 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 1266bbb9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266bbbc mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 1266bbc2 jmp 0x1266bb8d */
  goto L_1266bb8d;
L_1266bbc4:;
  /* 1266bbc4 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1266bbca sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266bbcd mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1266bbd0:;
  /* 1266bbd0 jmp 0x1266c037 */
  goto L_1266c037;
L_1266bbd5:;
  /* 1266bbd5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1266bbd8 push edx */
  push32((uint32_t)(EDX));
  /* 1266bbd9 call 0x1266c440 */
  push32(0x1266bbdeu); f_1266c440();
  /* 1266bbde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266bbe1 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 1266bbe7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266bbea and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1266bbed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266bbef je 0x1266bc03 */
  if (C.zf) goto L_1266bc03;
  /* 1266bbf1 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1266bbf7 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 1266bbfe mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1266bc01 jmp 0x1266bc11 */
  goto L_1266bc11;
L_1266bc03:;
  /* 1266bc03 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1266bc09 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1266bc0f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_1266bc11:;
  /* 1266bc11 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 1266bc1b jmp 0x1266c037 */
  goto L_1266c037;
L_1266bc20:;
  /* 1266bc20 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1266bc27 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 1266bc2a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1266bc2d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_1266bc30:;
  /* 1266bc30 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266bc33 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 1266bc35 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1266bc38 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 1266bc3e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1266bc41 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266bc48 jge 0x1266bc56 */
  if ((C.sf==C.of)) goto L_1266bc56;
  /* 1266bc4a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 1266bc54 jmp 0x1266bc72 */
  goto L_1266bc72;
L_1266bc56:;
  /* 1266bc56 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266bc5d jne 0x1266bc72 */
  if (!C.zf) goto L_1266bc72;
  /* 1266bc5f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1266bc63 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266bc66 jne 0x1266bc72 */
  if (!C.zf) goto L_1266bc72;
  /* 1266bc68 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_1266bc72:;
  /* 1266bc72 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1266bc75 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266bc78 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1266bc7b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1266bc7e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266bc81 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1266bc83 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1266bc86 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 1266bc8c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 1266bc92 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266bc95 push ecx */
  push32((uint32_t)(ECX));
  /* 1266bc96 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1266bc9c push edx */
  push32((uint32_t)(EDX));
  /* 1266bc9d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1266bca1 push eax */
  push32((uint32_t)(EAX));
  /* 1266bca2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1266bca5 push ecx */
  push32((uint32_t)(ECX));
  /* 1266bca6 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 1266bcac push edx */
  push32((uint32_t)(EDX));
  /* 1266bcad call dword ptr [0x1268f3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1268f3a0))), 0x1266bcb3u);
  /* 1266bcb3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266bcb6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266bcb9 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1266bcbe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266bcc0 je 0x1266bcd8 */
  if (C.zf) goto L_1266bcd8;
  /* 1266bcc2 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266bcc9 jne 0x1266bcd8 */
  if (!C.zf) goto L_1266bcd8;
  /* 1266bccb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1266bcce push ecx */
  push32((uint32_t)(ECX));
  /* 1266bccf call dword ptr [0x1268f3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1268f3ac))), 0x1266bcd5u);
  /* 1266bcd5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1266bcd8:;
  /* 1266bcd8 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1266bcdc cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266bcdf jne 0x1266bcfa */
  if (!C.zf) goto L_1266bcfa;
  /* 1266bce1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266bce4 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1266bce9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266bceb jne 0x1266bcfa */
  if (!C.zf) goto L_1266bcfa;
  /* 1266bced mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1266bcf0 push ecx */
  push32((uint32_t)(ECX));
  /* 1266bcf1 call dword ptr [0x1268f3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1268f3a4))), 0x1266bcf7u);
  /* 1266bcf7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1266bcfa:;
  /* 1266bcfa mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1266bcfd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1266bd00 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266bd03 jne 0x1266bd17 */
  if (!C.zf) goto L_1266bd17;
  /* 1266bd05 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266bd08 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1266bd0b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1266bd0e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1266bd11 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266bd14 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1266bd17:;
  /* 1266bd17 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1266bd1a push eax */
  push32((uint32_t)(EAX));
  /* 1266bd1b call 0x126674a0 */
  push32(0x1266bd20u); f_126674a0();
  /* 1266bd20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266bd23 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1266bd26 jmp 0x1266c037 */
  goto L_1266c037;
L_1266bd2b:;
  /* 1266bd2b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266bd2e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1266bd31 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1266bd34 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1266bd3e jmp 0x1266bdc5 */
  goto L_1266bdc5;
L_1266bd43:;
  /* 1266bd43 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1266bd4d jmp 0x1266bdc5 */
  goto L_1266bdc5;
L_1266bd4f:;
  /* 1266bd4f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_1266bd59:;
  /* 1266bd59 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 1266bd63 jmp 0x1266bd6f */
  goto L_1266bd6f;
L_1266bd65:;
  /* 1266bd65 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_1266bd6f:;
  /* 1266bd6f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 1266bd79 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266bd7c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1266bd82 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1266bd84 je 0x1266bda3 */
  if (C.zf) goto L_1266bda3;
  /* 1266bd86 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 1266bd8d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 1266bd93 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266bd96 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 1266bd9c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_1266bda3:;
  /* 1266bda3 jmp 0x1266bdc5 */
  goto L_1266bdc5;
L_1266bda5:;
  /* 1266bda5 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 1266bdaf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266bdb2 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1266bdb8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1266bdba je 0x1266bdc5 */
  if (C.zf) goto L_1266bdc5;
  /* 1266bdbc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266bdbf or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1266bdc2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1266bdc5:;
  /* 1266bdc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266bdc8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1266bdcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266bdcf je 0x1266bdee */
  if (C.zf) goto L_1266bdee;
  /* 1266bdd1 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1266bdd4 push ecx */
  push32((uint32_t)(ECX));
  /* 1266bdd5 call 0x1266c460 */
  push32(0x1266bddau); f_1266c460();
  /* 1266bdda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266bddd mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1266bde3 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1266bde9 jmp 0x1266be7f */
  goto L_1266be7f;
L_1266bdee:;
  /* 1266bdee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266bdf1 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1266bdf4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1266bdf6 je 0x1266be40 */
  if (C.zf) goto L_1266be40;
  /* 1266bdf8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266bdfb and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1266bdfe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266be00 je 0x1266be20 */
  if (C.zf) goto L_1266be20;
  /* 1266be02 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1266be05 push ecx */
  push32((uint32_t)(ECX));
  /* 1266be06 call 0x1266c440 */
  push32(0x1266be0bu); f_1266c440();
  /* 1266be0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266be0e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 1266be11 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1266be12 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1266be18 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1266be1e jmp 0x1266be3e */
  goto L_1266be3e;
L_1266be20:;
  /* 1266be20 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1266be23 push edx */
  push32((uint32_t)(EDX));
  /* 1266be24 call 0x1266c440 */
  push32(0x1266be29u); f_1266c440();
  /* 1266be29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266be2c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1266be31 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1266be32 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1266be38 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_1266be3e:;
  /* 1266be3e jmp 0x1266be7f */
  goto L_1266be7f;
L_1266be40:;
  /* 1266be40 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266be43 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1266be46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266be48 je 0x1266be65 */
  if (C.zf) goto L_1266be65;
  /* 1266be4a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1266be4d push ecx */
  push32((uint32_t)(ECX));
  /* 1266be4e call 0x1266c440 */
  push32(0x1266be53u); f_1266c440();
  /* 1266be53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266be56 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1266be57 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1266be5d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1266be63 jmp 0x1266be7f */
  goto L_1266be7f;
L_1266be65:;
  /* 1266be65 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1266be68 push edx */
  push32((uint32_t)(EDX));
  /* 1266be69 call 0x1266c440 */
  push32(0x1266be6eu); f_1266c440();
  /* 1266be6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266be71 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1266be73 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1266be79 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_1266be7f:;
  /* 1266be7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266be82 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1266be85 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1266be87 je 0x1266bec7 */
  if (C.zf) goto L_1266bec7;
  /* 1266be89 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266be90 jg 0x1266bec7 */
  if ((!C.zf&&C.sf==C.of)) goto L_1266bec7;
  /* 1266be92 jl 0x1266be9d */
  if ((C.sf!=C.of)) goto L_1266be9d;
  /* 1266be94 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266be9b jae 0x1266bec7 */
  if (!C.cf) goto L_1266bec7;
L_1266be9d:;
  /* 1266be9d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1266bea3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1266bea5 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1266beab adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266beae neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1266beb0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1266beb6 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 1266bebc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266bebf or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1266bec2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1266bec5 jmp 0x1266bedf */
  goto L_1266bedf;
L_1266bec7:;
  /* 1266bec7 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1266becd mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1266bed3 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1266bed9 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1266bedf:;
  /* 1266bedf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266bee2 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1266bee8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1266beea jne 0x1266bf07 */
  if (!C.zf) goto L_1266bf07;
  /* 1266beec mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1266bef2 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1266bef8 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 1266befb mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1266bf01 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1266bf07:;
  /* 1266bf07 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266bf0e jge 0x1266bf1c */
  if ((C.sf==C.of)) goto L_1266bf1c;
  /* 1266bf10 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 1266bf1a jmp 0x1266bf25 */
  goto L_1266bf25;
L_1266bf1c:;
  /* 1266bf1c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266bf1f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 1266bf22 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1266bf25:;
  /* 1266bf25 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1266bf2b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 1266bf31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266bf33 jne 0x1266bf3c */
  if (!C.zf) goto L_1266bf3c;
  /* 1266bf35 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1266bf3c:;
  /* 1266bf3c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1266bf3f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1266bf42:;
  /* 1266bf42 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1266bf48 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1266bf4e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266bf51 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1266bf57 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1266bf59 jg 0x1266bf6f */
  if ((!C.zf&&C.sf==C.of)) goto L_1266bf6f;
  /* 1266bf5b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1266bf61 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 1266bf67 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1266bf69 je 0x1266bff0 */
  if (C.zf) goto L_1266bff0;
L_1266bf6f:;
  /* 1266bf6f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1266bf75 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1266bf76 push edx */
  push32((uint32_t)(EDX));
  /* 1266bf77 push eax */
  push32((uint32_t)(EAX));
  /* 1266bf78 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 1266bf7e push edx */
  push32((uint32_t)(EDX));
  /* 1266bf7f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1266bf85 push eax */
  push32((uint32_t)(EAX));
  /* 1266bf86 call 0x1266b300 */
  push32(0x1266bf8bu); f_1266b300();
  /* 1266bf8b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266bf8e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 1266bf94 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1266bf9a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1266bf9b push edx */
  push32((uint32_t)(EDX));
  /* 1266bf9c push eax */
  push32((uint32_t)(EAX));
  /* 1266bf9d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1266bfa3 push ecx */
  push32((uint32_t)(ECX));
  /* 1266bfa4 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1266bfaa push edx */
  push32((uint32_t)(EDX));
  /* 1266bfab call 0x1266b290 */
  push32(0x1266bfb0u); f_1266b290();
  /* 1266bfb0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1266bfb6 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 1266bfbc cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266bfc3 jle 0x1266bfd7 */
  if ((C.zf||C.sf!=C.of)) goto L_1266bfd7;
  /* 1266bfc5 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 1266bfcb add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266bfd1 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_1266bfd7:;
  /* 1266bfd7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1266bfda mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 1266bfe0 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1266bfe2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1266bfe5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266bfe8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1266bfeb jmp 0x1266bf42 */
  goto L_1266bf42;
L_1266bff0:;
  /* 1266bff0 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1266bff3 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266bff6 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1266bff9 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1266bffc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266bfff mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1266c002 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266c005 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 1266c00a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266c00c je 0x1266c037 */
  if (C.zf) goto L_1266c037;
  /* 1266c00e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1266c011 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1266c014 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266c017 jne 0x1266c01f */
  if (!C.zf) goto L_1266c01f;
  /* 1266c019 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266c01d jne 0x1266c037 */
  if (!C.zf) goto L_1266c037;
L_1266c01f:;
  /* 1266c01f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1266c022 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266c025 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1266c028 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1266c02b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 1266c02e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1266c031 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266c034 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1266c037:;
  /* 1266c037 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266c03e jne 0x1266c212 */
  if (!C.zf) goto L_1266c212;
  /* 1266c044 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266c047 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1266c04a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266c04c je 0x1266c09d */
  if (C.zf) goto L_1266c09d;
  /* 1266c04e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266c051 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1266c057 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1266c059 je 0x1266c06b */
  if (C.zf) goto L_1266c06b;
  /* 1266c05b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 1266c062 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1266c069 jmp 0x1266c09d */
  goto L_1266c09d;
L_1266c06b:;
  /* 1266c06b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266c06e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1266c071 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1266c073 je 0x1266c085 */
  if (C.zf) goto L_1266c085;
  /* 1266c075 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 1266c07c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1266c083 jmp 0x1266c09d */
  goto L_1266c09d;
L_1266c085:;
  /* 1266c085 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266c088 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1266c08b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266c08d je 0x1266c09d */
  if (C.zf) goto L_1266c09d;
  /* 1266c08f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 1266c096 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1266c09d:;
  /* 1266c09d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1266c0a3 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266c0a6 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266c0a9 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 1266c0af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266c0b2 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 1266c0b5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1266c0b7 jne 0x1266c0d5 */
  if (!C.zf) goto L_1266c0d5;
  /* 1266c0b9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1266c0bf push eax */
  push32((uint32_t)(EAX));
  /* 1266c0c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266c0c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1266c0c4 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1266c0ca push edx */
  push32((uint32_t)(EDX));
  /* 1266c0cb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1266c0cd call 0x1266c3b0 */
  push32(0x1266c0d2u); f_1266c3b0();
  /* 1266c0d2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1266c0d5:;
  /* 1266c0d5 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1266c0db push eax */
  push32((uint32_t)(EAX));
  /* 1266c0dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266c0df push ecx */
  push32((uint32_t)(ECX));
  /* 1266c0e0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1266c0e3 push edx */
  push32((uint32_t)(EDX));
  /* 1266c0e4 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 1266c0ea push eax */
  push32((uint32_t)(EAX));
  /* 1266c0eb call 0x1266c3f0 */
  push32(0x1266c0f0u); f_1266c3f0();
  /* 1266c0f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266c0f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266c0f6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1266c0f9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1266c0fb je 0x1266c123 */
  if (C.zf) goto L_1266c123;
  /* 1266c0fd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266c100 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1266c103 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1266c105 jne 0x1266c123 */
  if (!C.zf) goto L_1266c123;
  /* 1266c107 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1266c10d push eax */
  push32((uint32_t)(EAX));
  /* 1266c10e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266c111 push ecx */
  push32((uint32_t)(ECX));
  /* 1266c112 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1266c118 push edx */
  push32((uint32_t)(EDX));
  /* 1266c119 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1266c11b call 0x1266c3b0 */
  push32(0x1266c120u); f_1266c3b0();
  /* 1266c120 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1266c123:;
  /* 1266c123 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266c127 je 0x1266c1d1 */
  if (C.zf) goto L_1266c1d1;
  /* 1266c12d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266c131 jle 0x1266c1d1 */
  if ((C.zf||C.sf!=C.of)) goto L_1266c1d1;
  /* 1266c137 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1266c13a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 1266c140 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1266c143 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_1266c149:;
  /* 1266c149 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 1266c14f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 1266c155 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266c158 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 1266c15e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1266c160 je 0x1266c1cf */
  if (C.zf) goto L_1266c1cf;
  /* 1266c162 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 1266c168 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1266c16b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 1266c172 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 1266c179 push eax */
  push32((uint32_t)(EAX));
  /* 1266c17a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 1266c180 push ecx */
  push32((uint32_t)(ECX));
  /* 1266c181 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 1266c187 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266c18a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 1266c190 call 0x1266d560 */
  push32(0x1266c195u); f_1266d560();
  /* 1266c195 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266c198 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 1266c19e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266c1a5 jg 0x1266c1a9 */
  if ((!C.zf&&C.sf==C.of)) goto L_1266c1a9;
  /* 1266c1a7 jmp 0x1266c1cf */
  goto L_1266c1cf;
L_1266c1a9:;
  /* 1266c1a9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1266c1af push eax */
  push32((uint32_t)(EAX));
  /* 1266c1b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266c1b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1266c1b4 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 1266c1ba push edx */
  push32((uint32_t)(EDX));
  /* 1266c1bb lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 1266c1c1 push eax */
  push32((uint32_t)(EAX));
  /* 1266c1c2 call 0x1266c3f0 */
  push32(0x1266c1c7u); f_1266c3f0();
  /* 1266c1c7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266c1ca jmp 0x1266c149 */
  goto L_1266c149;
L_1266c1cf:;
  /* 1266c1cf jmp 0x1266c1ec */
  goto L_1266c1ec;
L_1266c1d1:;
  /* 1266c1d1 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1266c1d7 push ecx */
  push32((uint32_t)(ECX));
  /* 1266c1d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266c1db push edx */
  push32((uint32_t)(EDX));
  /* 1266c1dc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1266c1df push eax */
  push32((uint32_t)(EAX));
  /* 1266c1e0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1266c1e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1266c1e4 call 0x1266c3f0 */
  push32(0x1266c1e9u); f_1266c3f0();
  /* 1266c1e9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1266c1ec:;
  /* 1266c1ec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266c1ef and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1266c1f2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1266c1f4 je 0x1266c212 */
  if (C.zf) goto L_1266c212;
  /* 1266c1f6 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1266c1fc push eax */
  push32((uint32_t)(EAX));
  /* 1266c1fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266c200 push ecx */
  push32((uint32_t)(ECX));
  /* 1266c201 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1266c207 push edx */
  push32((uint32_t)(EDX));
  /* 1266c208 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1266c20a call 0x1266c3b0 */
  push32(0x1266c20fu); f_1266c3b0();
  /* 1266c20f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1266c212:;
  /* 1266c212 jmp 0x1266b624 */
  goto L_1266b624;
L_1266c217:;
  /* 1266c217 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1266c21d pop edi */
  EDI = (pop32());
  /* 1266c21e pop esi */
  ESI = (pop32());
  /* 1266c21f pop ebx */
  EBX = (pop32());
  /* 1266c220 mov esp, ebp */
  ESP = (EBP);
  /* 1266c222 pop ebp */
  EBP = (pop32());
  /* 1266c223 ret  */
  ESPCHK(0x1266b600u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c330 @ 0x1266c330 (119 bytes, 44 insns) */
void f_1266c330(void) {
  FTRACE(0x1266c330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266c330 push ebp */
  push32((uint32_t)(EBP));
  /* 1266c331 mov ebp, esp */
  EBP = (ESP);
  /* 1266c333 push ecx */
  push32((uint32_t)(ECX));
  /* 1266c334 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266c337 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1266c33a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266c33d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266c340 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1266c343 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266c346 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266c34a jl 0x1266c372 */
  if ((C.sf!=C.of)) goto L_1266c372;
  /* 1266c34c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266c34f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1266c351 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1266c354 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1266c356 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1266c35a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1266c360 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1266c363 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266c366 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1266c368 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266c36b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266c36e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1266c370 jmp 0x1266c385 */
  goto L_1266c385;
L_1266c372:;
  /* 1266c372 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266c375 push edx */
  push32((uint32_t)(EDX));
  /* 1266c376 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266c379 push eax */
  push32((uint32_t)(EAX));
  /* 1266c37a call 0x1266b380 */
  push32(0x1266c37fu); f_1266b380();
  /* 1266c37f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266c382 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1266c385:;
  /* 1266c385 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266c389 jne 0x1266c396 */
  if (!C.zf) goto L_1266c396;
  /* 1266c38b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1266c38e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1266c394 jmp 0x1266c3a3 */
  goto L_1266c3a3;
L_1266c396:;
  /* 1266c396 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1266c399 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1266c39b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266c39e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1266c3a1 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1266c3a3:;
  /* 1266c3a3 mov esp, ebp */
  ESP = (EBP);
  /* 1266c3a5 pop ebp */
  EBP = (pop32());
  /* 1266c3a6 ret  */
  ESPCHK(0x1266c330u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c3b0 @ 0x1266c3b0 (53 bytes, 23 insns) */
void f_1266c3b0(void) {
  FTRACE(0x1266c3b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266c3b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1266c3b1 mov ebp, esp */
  EBP = (ESP);
L_1266c3b3:;
  /* 1266c3b3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266c3b6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266c3b9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266c3bc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1266c3bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266c3c1 jle 0x1266c3e3 */
  if ((C.zf||C.sf!=C.of)) goto L_1266c3e3;
  /* 1266c3c3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1266c3c6 push edx */
  push32((uint32_t)(EDX));
  /* 1266c3c7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1266c3ca push eax */
  push32((uint32_t)(EAX));
  /* 1266c3cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266c3ce push ecx */
  push32((uint32_t)(ECX));
  /* 1266c3cf call 0x1266c330 */
  push32(0x1266c3d4u); f_1266c330();
  /* 1266c3d4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266c3d7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1266c3da cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266c3dd jne 0x1266c3e1 */
  if (!C.zf) goto L_1266c3e1;
  /* 1266c3df jmp 0x1266c3e3 */
  goto L_1266c3e3;
L_1266c3e1:;
  /* 1266c3e1 jmp 0x1266c3b3 */
  goto L_1266c3b3;
L_1266c3e3:;
  /* 1266c3e3 pop ebp */
  EBP = (pop32());
  /* 1266c3e4 ret  */
  ESPCHK(0x1266c3b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c3f0 @ 0x1266c3f0 (74 bytes, 31 insns) */
void f_1266c3f0(void) {
  FTRACE(0x1266c3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266c3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1266c3f1 mov ebp, esp */
  EBP = (ESP);
  /* 1266c3f3 push ecx */
  push32((uint32_t)(ECX));
L_1266c3f4:;
  /* 1266c3f4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266c3f7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266c3fa sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266c3fd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1266c400 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266c402 jle 0x1266c436 */
  if ((C.zf||C.sf!=C.of)) goto L_1266c436;
  /* 1266c404 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1266c407 push edx */
  push32((uint32_t)(EDX));
  /* 1266c408 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1266c40b push eax */
  push32((uint32_t)(EAX));
  /* 1266c40c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266c40f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1266c412 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1266c415 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266c418 push eax */
  push32((uint32_t)(EAX));
  /* 1266c419 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266c41c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266c41f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1266c422 call 0x1266c330 */
  push32(0x1266c427u); f_1266c330();
  /* 1266c427 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266c42a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1266c42d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266c430 jne 0x1266c434 */
  if (!C.zf) goto L_1266c434;
  /* 1266c432 jmp 0x1266c436 */
  goto L_1266c436;
L_1266c434:;
  /* 1266c434 jmp 0x1266c3f4 */
  goto L_1266c3f4;
L_1266c436:;
  /* 1266c436 mov esp, ebp */
  ESP = (EBP);
  /* 1266c438 pop ebp */
  EBP = (pop32());
  /* 1266c439 ret  */
  ESPCHK(0x1266c3f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c440 @ 0x1266c440 (26 bytes, 12 insns) */
void f_1266c440(void) {
  FTRACE(0x1266c440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266c440 push ebp */
  push32((uint32_t)(EBP));
  /* 1266c441 mov ebp, esp */
  EBP = (ESP);
  /* 1266c443 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266c446 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1266c448 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266c44b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266c44e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1266c450 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266c453 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1266c455 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1266c458 pop ebp */
  EBP = (pop32());
  /* 1266c459 ret  */
  ESPCHK(0x1266c440u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c460 @ 0x1266c460 (31 bytes, 14 insns) */
void f_1266c460(void) {
  FTRACE(0x1266c460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266c460 push ebp */
  push32((uint32_t)(EBP));
  /* 1266c461 mov ebp, esp */
  EBP = (ESP);
  /* 1266c463 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266c466 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1266c468 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266c46b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266c46e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1266c470 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266c473 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1266c475 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266c478 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1266c47a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1266c47d pop ebp */
  EBP = (pop32());
  /* 1266c47e ret  */
  ESPCHK(0x1266c460u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c480 @ 0x1266c480 (27 bytes, 12 insns) */
void f_1266c480(void) {
  FTRACE(0x1266c480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266c480 push ebp */
  push32((uint32_t)(EBP));
  /* 1266c481 mov ebp, esp */
  EBP = (ESP);
  /* 1266c483 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266c486 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1266c488 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266c48b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266c48e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1266c490 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266c493 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1266c495 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 1266c499 pop ebp */
  EBP = (pop32());
  /* 1266c49a ret  */
  ESPCHK(0x1266c480u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x1266c4a0 (145 bytes, 42 insns) */
void f_1266c4a0(void) {
  FTRACE(0x1266c4a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266c4a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1266c4a1 mov ebp, esp */
  EBP = (ESP);
  /* 1266c4a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1266c4a4 call 0x1266c550 */
  push32(0x1266c4a9u); f_1266c550();
  /* 1266c4a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266c4ac mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1266c4ae mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1266c4b5 jmp 0x1266c4c0 */
  goto L_1266c4c0;
L_1266c4b7:;
  /* 1266c4b7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266c4ba add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266c4bd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1266c4c0:;
  /* 1266c4c0 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266c4c4 jae 0x1266c4ea */
  if (!C.cf) goto L_1266c4ea;
  /* 1266c4c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266c4c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266c4cc cmp ecx, dword ptr [eax*8 + 0x1268efb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1268efb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266c4d3 jne 0x1266c4e8 */
  if (!C.zf) goto L_1266c4e8;
  /* 1266c4d5 call 0x1266c540 */
  push32(0x1266c4dau); f_1266c540();
  /* 1266c4da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266c4dd mov ecx, dword ptr [edx*8 + 0x1268efbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x1268efbc)));
  /* 1266c4e4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1266c4e6 jmp 0x1266c52d */
  goto L_1266c52d;
L_1266c4e8:;
  /* 1266c4e8 jmp 0x1266c4b7 */
  goto L_1266c4b7;
L_1266c4ea:;
  /* 1266c4ea cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266c4ee jb 0x1266c503 */
  if (C.cf) goto L_1266c503;
  /* 1266c4f0 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266c4f4 ja 0x1266c503 */
  if ((!C.cf&&!C.zf)) goto L_1266c503;
  /* 1266c4f6 call 0x1266c540 */
  push32(0x1266c4fbu); f_1266c540();
  /* 1266c4fb mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1266c501 jmp 0x1266c52d */
  goto L_1266c52d;
L_1266c503:;
  /* 1266c503 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266c50a jb 0x1266c522 */
  if (C.cf) goto L_1266c522;
  /* 1266c50c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266c513 ja 0x1266c522 */
  if ((!C.cf&&!C.zf)) goto L_1266c522;
  /* 1266c515 call 0x1266c540 */
  push32(0x1266c51au); f_1266c540();
  /* 1266c51a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1266c520 jmp 0x1266c52d */
  goto L_1266c52d;
L_1266c522:;
  /* 1266c522 call 0x1266c540 */
  push32(0x1266c527u); f_1266c540();
  /* 1266c527 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_1266c52d:;
  /* 1266c52d mov esp, ebp */
  ESP = (EBP);
  /* 1266c52f pop ebp */
  EBP = (pop32());
  /* 1266c530 ret  */
  ESPCHK(0x1266c4a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c540 @ 0x1266c540 (13 bytes, 6 insns) */
void f_1266c540(void) {
  FTRACE(0x1266c540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266c540 push ebp */
  push32((uint32_t)(EBP));
  /* 1266c541 mov ebp, esp */
  EBP = (ESP);
  /* 1266c543 call 0x126640b0 */
  push32(0x1266c548u); f_126640b0();
  /* 1266c548 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266c54b pop ebp */
  EBP = (pop32());
  /* 1266c54c ret  */
  ESPCHK(0x1266c540u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c550 @ 0x1266c550 (13 bytes, 6 insns) */
void f_1266c550(void) {
  FTRACE(0x1266c550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266c550 push ebp */
  push32((uint32_t)(EBP));
  /* 1266c551 mov ebp, esp */
  EBP = (ESP);
  /* 1266c553 call 0x126640b0 */
  push32(0x1266c558u); f_126640b0();
  /* 1266c558 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266c55b pop ebp */
  EBP = (pop32());
  /* 1266c55c ret  */
  ESPCHK(0x1266c550u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c560 @ 0x1266c560 (664 bytes, 258 insns) [15 switch table(s)] */
void f_1266c560(void) {
  FTRACE(0x1266c560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266c560 push ebp */
  push32((uint32_t)(EBP));
  /* 1266c561 mov ebp, esp */
  EBP = (ESP);
  /* 1266c563 push edi */
  push32((uint32_t)(EDI));
  /* 1266c564 push esi */
  push32((uint32_t)(ESI));
  /* 1266c565 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1266c568 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1266c56b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1266c56e mov eax, ecx */
  EAX = (ECX);
  /* 1266c570 mov edx, ecx */
  EDX = (ECX);
  /* 1266c572 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266c574 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266c576 jbe 0x1266c580 */
  if ((C.cf||C.zf)) goto L_1266c580;
  /* 1266c578 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266c57a jb 0x1266c6f8 */
  if (C.cf) goto L_1266c6f8;
L_1266c580:;
  /* 1266c580 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1266c586 jne 0x1266c59c */
  if (!C.zf) goto L_1266c59c;
  /* 1266c588 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1266c58b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1266c58e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266c591 jb 0x1266c5bc */
  if (C.cf) goto L_1266c5bc;
  /* 1266c593 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1266c595 jmp dword ptr [edx*4 + 0x1266c6a8] */
  switch (EDX) {
    case 0: goto L_1266c6b8;
    case 1: goto L_1266c6c0;
    case 2: goto L_1266c6cc;
    case 3: goto L_1266c6e0;
    default: x86_unimpl("switch@0x1266c595 out of table"); return;
  }
L_1266c59c:;
  /* 1266c59c mov eax, edi */
  EAX = (EDI);
  /* 1266c59e mov edx, 3 */
  EDX = (0x3u);
  /* 1266c5a3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266c5a6 jb 0x1266c5b4 */
  if (C.cf) goto L_1266c5b4;
  /* 1266c5a8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1266c5ab add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266c5ad jmp dword ptr [eax*4 + 0x1266c5c0] */
  switch (EAX) {
    case 1: goto L_1266c5d0;
    case 2: goto L_1266c5fc;
    case 3: goto L_1266c620;
    default: x86_unimpl("switch@0x1266c5ad out of table"); return;
  }
L_1266c5b4:;
  /* 1266c5b4 jmp dword ptr [ecx*4 + 0x1266c6b8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1266c6b8)))); return;
  /* 1266c5bb nop  */
  /* nop */
L_1266c5bc:;
  /* 1266c5bc jmp dword ptr [ecx*4 + 0x1266c63c] */
  switch (ECX) {
    case 0: goto L_1266c69f;
    case 1: goto L_1266c68c;
    case 2: goto L_1266c684;
    case 3: goto L_1266c67c;
    case 4: goto L_1266c674;
    case 5: goto L_1266c66c;
    case 6: goto L_1266c664;
    case 7: goto L_1266c65c;
    default: x86_unimpl("switch@0x1266c5bc out of table"); return;
  }
  /* 1266c5c3 nop  */
  /* nop */
L_1266c5d0:;
  /* 1266c5d0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1266c5d2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1266c5d4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1266c5d6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1266c5d9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1266c5dc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1266c5df shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1266c5e2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1266c5e5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1266c5e8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1266c5eb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266c5ee jb 0x1266c5bc */
  if (C.cf) goto L_1266c5bc;
  /* 1266c5f0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1266c5f2 jmp dword ptr [edx*4 + 0x1266c6a8] */
  switch (EDX) {
    case 0: goto L_1266c6b8;
    case 1: goto L_1266c6c0;
    case 2: goto L_1266c6cc;
    case 3: goto L_1266c6e0;
    default: x86_unimpl("switch@0x1266c5f2 out of table"); return;
  }
  /* 1266c5f9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1266c5fc:;
  /* 1266c5fc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1266c5fe mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1266c600 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1266c602 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1266c605 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1266c608 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1266c60b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1266c60e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1266c611 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266c614 jb 0x1266c5bc */
  if (C.cf) goto L_1266c5bc;
  /* 1266c616 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1266c618 jmp dword ptr [edx*4 + 0x1266c6a8] */
  switch (EDX) {
    case 0: goto L_1266c6b8;
    case 1: goto L_1266c6c0;
    case 2: goto L_1266c6cc;
    case 3: goto L_1266c6e0;
    default: x86_unimpl("switch@0x1266c618 out of table"); return;
  }
  /* 1266c61f nop  */
  /* nop */
L_1266c620:;
  /* 1266c620 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1266c622 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1266c624 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1266c626 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1266c627 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1266c62a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1266c62b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266c62e jb 0x1266c5bc */
  if (C.cf) goto L_1266c5bc;
  /* 1266c630 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1266c632 jmp dword ptr [edx*4 + 0x1266c6a8] */
  switch (EDX) {
    case 0: goto L_1266c6b8;
    case 1: goto L_1266c6c0;
    case 2: goto L_1266c6cc;
    case 3: goto L_1266c6e0;
    default: x86_unimpl("switch@0x1266c632 out of table"); return;
  }
  /* 1266c639 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1266c65c:;
  /* 1266c65c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1266c660 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1266c664:;
  /* 1266c664 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1266c668 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1266c66c:;
  /* 1266c66c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1266c670 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1266c674:;
  /* 1266c674 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1266c678 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1266c67c:;
  /* 1266c67c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1266c680 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1266c684:;
  /* 1266c684 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1266c688 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1266c68c:;
  /* 1266c68c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1266c690 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1266c694 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1266c69b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1266c69d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1266c69f:;
  /* 1266c69f jmp dword ptr [edx*4 + 0x1266c6a8] */
  switch (EDX) {
    case 0: goto L_1266c6b8;
    case 1: goto L_1266c6c0;
    case 2: goto L_1266c6cc;
    case 3: goto L_1266c6e0;
    default: x86_unimpl("switch@0x1266c69f out of table"); return;
  }
  /* 1266c6a6 mov edi, edi */
  EDI = (EDI);
L_1266c6b8:;
  /* 1266c6b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266c6bb pop esi */
  ESI = (pop32());
  /* 1266c6bc pop edi */
  EDI = (pop32());
  /* 1266c6bd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1266c6be ret  */
  ESPCHK(0x1266c560u, _esp0);
  ESP += 4; return;
  /* 1266c6bf nop  */
  /* nop */
L_1266c6c0:;
  /* 1266c6c0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1266c6c2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1266c6c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266c6c7 pop esi */
  ESI = (pop32());
  /* 1266c6c8 pop edi */
  EDI = (pop32());
  /* 1266c6c9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1266c6ca ret  */
  ESPCHK(0x1266c560u, _esp0);
  ESP += 4; return;
  /* 1266c6cb nop  */
  /* nop */
L_1266c6cc:;
  /* 1266c6cc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1266c6ce mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1266c6d0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1266c6d3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1266c6d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266c6d9 pop esi */
  ESI = (pop32());
  /* 1266c6da pop edi */
  EDI = (pop32());
  /* 1266c6db leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1266c6dc ret  */
  ESPCHK(0x1266c560u, _esp0);
  ESP += 4; return;
  /* 1266c6dd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1266c6e0:;
  /* 1266c6e0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1266c6e2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1266c6e4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1266c6e7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1266c6ea mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1266c6ed mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1266c6f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266c6f3 pop esi */
  ESI = (pop32());
  /* 1266c6f4 pop edi */
  EDI = (pop32());
  /* 1266c6f5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1266c6f6 ret  */
  ESPCHK(0x1266c560u, _esp0);
  ESP += 4; return;
  /* 1266c6f7 nop  */
  /* nop */
L_1266c6f8:;
  /* 1266c6f8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1266c6fc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1266c700 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1266c706 jne 0x1266c72c */
  if (!C.zf) goto L_1266c72c;
  /* 1266c708 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1266c70b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1266c70e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266c711 jb 0x1266c720 */
  if (C.cf) goto L_1266c720;
  /* 1266c713 std  */
  C.df=1;
  /* 1266c714 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1266c716 cld  */
  C.df=0;
  /* 1266c717 jmp dword ptr [edx*4 + 0x1266c840] */
  switch (EDX) {
    case 0: goto L_1266c850;
    case 1: goto L_1266c858;
    case 2: goto L_1266c868;
    case 3: goto L_1266c87c;
    default: x86_unimpl("switch@0x1266c717 out of table"); return;
  }
  /* 1266c71e mov edi, edi */
  EDI = (EDI);
L_1266c720:;
  /* 1266c720 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1266c722 jmp dword ptr [ecx*4 + 0x1266c7f0] */
  switch (ECX) {
    case 0: goto L_1266c837;
    default: x86_unimpl("switch@0x1266c722 out of table"); return;
  }
  /* 1266c729 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1266c72c:;
  /* 1266c72c mov eax, edi */
  EAX = (EDI);
  /* 1266c72e mov edx, 3 */
  EDX = (0x3u);
  /* 1266c733 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266c736 jb 0x1266c744 */
  if (C.cf) goto L_1266c744;
  /* 1266c738 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1266c73b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266c73d jmp dword ptr [eax*4 + 0x1266c748] */
  switch (EAX) {
    case 1: goto L_1266c758;
    case 2: goto L_1266c778;
    case 3: goto L_1266c7a0;
    default: x86_unimpl("switch@0x1266c73d out of table"); return;
  }
L_1266c744:;
  /* 1266c744 jmp dword ptr [ecx*4 + 0x1266c840] */
  switch (ECX) {
    case 0: goto L_1266c850;
    case 1: goto L_1266c858;
    case 2: goto L_1266c868;
    case 3: goto L_1266c87c;
    default: x86_unimpl("switch@0x1266c744 out of table"); return;
  }
  /* 1266c74b nop  */
  /* nop */
L_1266c758:;
  /* 1266c758 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1266c75b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1266c75d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1266c760 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1266c761 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1266c764 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1266c765 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266c768 jb 0x1266c720 */
  if (C.cf) goto L_1266c720;
  /* 1266c76a std  */
  C.df=1;
  /* 1266c76b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1266c76d cld  */
  C.df=0;
  /* 1266c76e jmp dword ptr [edx*4 + 0x1266c840] */
  switch (EDX) {
    case 0: goto L_1266c850;
    case 1: goto L_1266c858;
    case 2: goto L_1266c868;
    case 3: goto L_1266c87c;
    default: x86_unimpl("switch@0x1266c76e out of table"); return;
  }
  /* 1266c775 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1266c778:;
  /* 1266c778 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1266c77b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1266c77d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1266c780 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1266c783 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1266c786 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1266c789 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266c78c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266c78f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266c792 jb 0x1266c720 */
  if (C.cf) goto L_1266c720;
  /* 1266c794 std  */
  C.df=1;
  /* 1266c795 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1266c797 cld  */
  C.df=0;
  /* 1266c798 jmp dword ptr [edx*4 + 0x1266c840] */
  switch (EDX) {
    case 0: goto L_1266c850;
    case 1: goto L_1266c858;
    case 2: goto L_1266c868;
    case 3: goto L_1266c87c;
    default: x86_unimpl("switch@0x1266c798 out of table"); return;
  }
  /* 1266c79f nop  */
  /* nop */
L_1266c7a0:;
  /* 1266c7a0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1266c7a3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1266c7a5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1266c7a8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1266c7ab mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1266c7ae mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1266c7b1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1266c7b4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1266c7b7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266c7ba sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266c7bd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266c7c0 jb 0x1266c720 */
  if (C.cf) goto L_1266c720;
  /* 1266c7c6 std  */
  C.df=1;
  /* 1266c7c7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1266c7c9 cld  */
  C.df=0;
  /* 1266c7ca jmp dword ptr [edx*4 + 0x1266c840] */
  switch (EDX) {
    case 0: goto L_1266c850;
    case 1: goto L_1266c858;
    case 2: goto L_1266c868;
    case 3: goto L_1266c87c;
    default: x86_unimpl("switch@0x1266c7ca out of table"); return;
  }
  /* 1266c7d1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1266c7d4 hlt  */
  x86_unimpl("hlt @ 0x1266c7d4");
  /* 1266c7d6 adc bh, ah */
  { uint32_t _a=(C.b.b.h),_b=(AH),_r=_a+_b+C.cf; C.b.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 1266c7da adc al, byte ptr [eax + ecx*8] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EAX + ECX*8))),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1266c7de adc cl, byte ptr [eax + ecx*8] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EAX + ECX*8))),_r=_a+_b+C.cf; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1266c7e2 adc dl, byte ptr [eax + ecx*8] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EAX + ECX*8))),_r=_a+_b+C.cf; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1266c7e6 adc bl, byte ptr [eax + ecx*8] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(EAX + ECX*8))),_r=_a+_b+C.cf; BL = (_r); fl_add(_a,_b,_r,8); }
  /* 1266c7ea adc ah, byte ptr [eax + ecx*8] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(EAX + ECX*8))),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 1266c7f4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1266c7f8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1266c7fc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1266c800 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1266c804 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1266c808 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1266c80c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1266c810 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1266c814 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1266c818 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1266c81c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1266c820 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1266c824 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1266c828 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1266c82c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1266c833 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1266c835 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1266c837:;
  /* 1266c837 jmp dword ptr [edx*4 + 0x1266c840] */
  switch (EDX) {
    case 0: goto L_1266c850;
    case 1: goto L_1266c858;
    case 2: goto L_1266c868;
    case 3: goto L_1266c87c;
    default: x86_unimpl("switch@0x1266c837 out of table"); return;
  }
  /* 1266c83e mov edi, edi */
  EDI = (EDI);
L_1266c850:;
  /* 1266c850 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266c853 pop esi */
  ESI = (pop32());
  /* 1266c854 pop edi */
  EDI = (pop32());
  /* 1266c855 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1266c856 ret  */
  ESPCHK(0x1266c560u, _esp0);
  ESP += 4; return;
  /* 1266c857 nop  */
  /* nop */
L_1266c858:;
  /* 1266c858 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1266c85b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1266c85e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266c861 pop esi */
  ESI = (pop32());
  /* 1266c862 pop edi */
  EDI = (pop32());
  /* 1266c863 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1266c864 ret  */
  ESPCHK(0x1266c560u, _esp0);
  ESP += 4; return;
  /* 1266c865 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1266c868:;
  /* 1266c868 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1266c86b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1266c86e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1266c871 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1266c874 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266c877 pop esi */
  ESI = (pop32());
  /* 1266c878 pop edi */
  EDI = (pop32());
  /* 1266c879 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1266c87a ret  */
  ESPCHK(0x1266c560u, _esp0);
  ESP += 4; return;
  /* 1266c87b nop  */
  /* nop */
L_1266c87c:;
  /* 1266c87c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1266c87f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1266c882 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1266c885 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1266c888 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1266c88b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1266c88e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266c891 pop esi */
  ESI = (pop32());
  /* 1266c892 pop edi */
  EDI = (pop32());
  /* 1266c893 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1266c894 ret  */
  ESPCHK(0x1266c560u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c8a0 @ 0x1266c8a0 (421 bytes, 148 insns) */
void f_1266c8a0(void) {
  FTRACE(0x1266c8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266c8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1266c8a1 mov ebp, esp */
  EBP = (ESP);
  /* 1266c8a3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1266c8a5 push 0x1268c1a8 */
  push32((uint32_t)(0x1268c1a8u));
  /* 1266c8aa push 0x1266d778 */
  push32((uint32_t)(0x1266d778u));
  /* 1266c8af mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1266c8b5 push eax */
  push32((uint32_t)(EAX));
  /* 1266c8b6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1266c8bd add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266c8c0 push ebx */
  push32((uint32_t)(EBX));
  /* 1266c8c1 push esi */
  push32((uint32_t)(ESI));
  /* 1266c8c2 push edi */
  push32((uint32_t)(EDI));
  /* 1266c8c3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1266c8c6 cmp dword ptr [0x1269079c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1269079c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266c8cd jne 0x1266c91e */
  if (!C.zf) goto L_1266c91e;
  /* 1266c8cf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1266c8d2 push eax */
  push32((uint32_t)(EAX));
  /* 1266c8d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1266c8d5 push 0x1268c1a0 */
  push32((uint32_t)(0x1268c1a0u));
  /* 1266c8da push 1 */
  push32((uint32_t)(0x1u));
  /* 1266c8dc call dword ptr [0x126932e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932e4))), 0x1266c8e2u);
  /* 1266c8e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266c8e4 je 0x1266c8f2 */
  if (C.zf) goto L_1266c8f2;
  /* 1266c8e6 mov dword ptr [0x1269079c], 1 */
  w32((uint32_t)(0x1269079c), (0x1u));
  /* 1266c8f0 jmp 0x1266c91e */
  goto L_1266c91e;
L_1266c8f2:;
  /* 1266c8f2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 1266c8f5 push ecx */
  push32((uint32_t)(ECX));
  /* 1266c8f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1266c8f8 push 0x1268c19c */
  push32((uint32_t)(0x1268c19cu));
  /* 1266c8fd push 1 */
  push32((uint32_t)(0x1u));
  /* 1266c8ff push 0 */
  push32((uint32_t)(0x0u));
  /* 1266c901 call dword ptr [0x126932f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932f4))), 0x1266c907u);
  /* 1266c907 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266c909 je 0x1266c917 */
  if (C.zf) goto L_1266c917;
  /* 1266c90b mov dword ptr [0x1269079c], 2 */
  w32((uint32_t)(0x1269079c), (0x2u));
  /* 1266c915 jmp 0x1266c91e */
  goto L_1266c91e;
L_1266c917:;
  /* 1266c917 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266c919 jmp 0x1266ca48 */
  goto L_1266ca48;
L_1266c91e:;
  /* 1266c91e cmp dword ptr [0x1269079c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1269079c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266c925 jne 0x1266c955 */
  if (!C.zf) goto L_1266c955;
  /* 1266c927 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266c92b jne 0x1266c936 */
  if (!C.zf) goto L_1266c936;
  /* 1266c92d mov edx, dword ptr [0x126907a8] */
  EDX = (r32((uint32_t)(0x126907a8)));
  /* 1266c933 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_1266c936:;
  /* 1266c936 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1266c939 push eax */
  push32((uint32_t)(EAX));
  /* 1266c93a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1266c93d push ecx */
  push32((uint32_t)(ECX));
  /* 1266c93e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266c941 push edx */
  push32((uint32_t)(EDX));
  /* 1266c942 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266c945 push eax */
  push32((uint32_t)(EAX));
  /* 1266c946 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1266c949 push ecx */
  push32((uint32_t)(ECX));
  /* 1266c94a call dword ptr [0x126932f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932f4))), 0x1266c950u);
  /* 1266c950 jmp 0x1266ca48 */
  goto L_1266ca48;
L_1266c955:;
  /* 1266c955 cmp dword ptr [0x1269079c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1269079c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266c95c jne 0x1266ca46 */
  if (!C.zf) goto L_1266ca46;
  /* 1266c962 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266c966 jne 0x1266c971 */
  if (!C.zf) goto L_1266c971;
  /* 1266c968 mov edx, dword ptr [0x126907b8] */
  EDX = (r32((uint32_t)(0x126907b8)));
  /* 1266c96e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1266c971:;
  /* 1266c971 push 0 */
  push32((uint32_t)(0x0u));
  /* 1266c973 push 0 */
  push32((uint32_t)(0x0u));
  /* 1266c975 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1266c978 push eax */
  push32((uint32_t)(EAX));
  /* 1266c979 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266c97c push ecx */
  push32((uint32_t)(ECX));
  /* 1266c97d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1266c980 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1266c982 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266c984 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1266c987 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266c98a push edx */
  push32((uint32_t)(EDX));
  /* 1266c98b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1266c98e push eax */
  push32((uint32_t)(EAX));
  /* 1266c98f call dword ptr [0x126932ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932ec))), 0x1266c995u);
  /* 1266c995 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1266c998 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266c99c jne 0x1266c9a5 */
  if (!C.zf) goto L_1266c9a5;
  /* 1266c99e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266c9a0 jmp 0x1266ca48 */
  goto L_1266ca48;
L_1266c9a5:;
  /* 1266c9a5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1266c9ac mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1266c9af shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1266c9b1 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266c9b4 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1266c9b6 call 0x12667810 */
  push32(0x1266c9bbu); f_12667810();
  /* 1266c9bb mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 1266c9be mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1266c9c1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1266c9c4 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1266c9c7 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1266c9ca shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1266c9cc push edx */
  push32((uint32_t)(EDX));
  /* 1266c9cd push 0 */
  push32((uint32_t)(0x0u));
  /* 1266c9cf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1266c9d2 push eax */
  push32((uint32_t)(EAX));
  /* 1266c9d3 call 0x126683e0 */
  push32(0x1266c9d8u); f_126683e0();
  /* 1266c9d8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266c9db mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1266c9e2 jmp 0x1266c9fb */
  goto L_1266c9fb;
  /* 1266c9e4 mov eax, 1 */
  EAX = (0x1u);
  /* 1266c9e9 ret  */
  ESPCHK(0x1266c8a0u, _esp0);
  ESP += 4; return;
  /* 1266c9ea mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1266c9ed mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1266c9f4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1266c9fb:;
  /* 1266c9fb cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266c9ff jne 0x1266ca05 */
  if (!C.zf) goto L_1266ca05;
  /* 1266ca01 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266ca03 jmp 0x1266ca48 */
  goto L_1266ca48;
L_1266ca05:;
  /* 1266ca05 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1266ca08 push ecx */
  push32((uint32_t)(ECX));
  /* 1266ca09 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1266ca0c push edx */
  push32((uint32_t)(EDX));
  /* 1266ca0d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1266ca10 push eax */
  push32((uint32_t)(EAX));
  /* 1266ca11 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266ca14 push ecx */
  push32((uint32_t)(ECX));
  /* 1266ca15 push 1 */
  push32((uint32_t)(0x1u));
  /* 1266ca17 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1266ca1a push edx */
  push32((uint32_t)(EDX));
  /* 1266ca1b call dword ptr [0x126932ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932ec))), 0x1266ca21u);
  /* 1266ca21 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1266ca24 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266ca28 jne 0x1266ca2e */
  if (!C.zf) goto L_1266ca2e;
  /* 1266ca2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266ca2c jmp 0x1266ca48 */
  goto L_1266ca48;
L_1266ca2e:;
  /* 1266ca2e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1266ca31 push eax */
  push32((uint32_t)(EAX));
  /* 1266ca32 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1266ca35 push ecx */
  push32((uint32_t)(ECX));
  /* 1266ca36 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1266ca39 push edx */
  push32((uint32_t)(EDX));
  /* 1266ca3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266ca3d push eax */
  push32((uint32_t)(EAX));
  /* 1266ca3e call dword ptr [0x126932e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932e4))), 0x1266ca44u);
  /* 1266ca44 jmp 0x1266ca48 */
  goto L_1266ca48;
L_1266ca46:;
  /* 1266ca46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1266ca48:;
  /* 1266ca48 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1266ca4b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1266ca4e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1266ca55 pop edi */
  EDI = (pop32());
  /* 1266ca56 pop esi */
  ESI = (pop32());
  /* 1266ca57 pop ebx */
  EBX = (pop32());
  /* 1266ca58 mov esp, ebp */
  ESP = (EBP);
  /* 1266ca5a pop ebp */
  EBP = (pop32());
  /* 1266ca5b ret  */
  ESPCHK(0x1266c8a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca60 @ 0x1266ca60 (727 bytes, 263 insns) */
void f_1266ca60(void) {
  FTRACE(0x1266ca60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266ca60 push ebp */
  push32((uint32_t)(EBP));
  /* 1266ca61 mov ebp, esp */
  EBP = (ESP);
  /* 1266ca63 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1266ca65 push 0x1268c1b8 */
  push32((uint32_t)(0x1268c1b8u));
  /* 1266ca6a push 0x1266d778 */
  push32((uint32_t)(0x1266d778u));
  /* 1266ca6f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1266ca75 push eax */
  push32((uint32_t)(EAX));
  /* 1266ca76 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1266ca7d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266ca80 push ebx */
  push32((uint32_t)(EBX));
  /* 1266ca81 push esi */
  push32((uint32_t)(ESI));
  /* 1266ca82 push edi */
  push32((uint32_t)(EDI));
  /* 1266ca83 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1266ca86 cmp dword ptr [0x126907c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x126907c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266ca8d jne 0x1266cae6 */
  if (!C.zf) goto L_1266cae6;
  /* 1266ca8f push 0 */
  push32((uint32_t)(0x0u));
  /* 1266ca91 push 0 */
  push32((uint32_t)(0x0u));
  /* 1266ca93 push 1 */
  push32((uint32_t)(0x1u));
  /* 1266ca95 push 0x1268c1a0 */
  push32((uint32_t)(0x1268c1a0u));
  /* 1266ca9a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1266ca9f push 0 */
  push32((uint32_t)(0x0u));
  /* 1266caa1 call dword ptr [0x126932e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932e8))), 0x1266caa7u);
  /* 1266caa7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266caa9 je 0x1266cab7 */
  if (C.zf) goto L_1266cab7;
  /* 1266caab mov dword ptr [0x126907c0], 1 */
  w32((uint32_t)(0x126907c0), (0x1u));
  /* 1266cab5 jmp 0x1266cae6 */
  goto L_1266cae6;
L_1266cab7:;
  /* 1266cab7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1266cab9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1266cabb push 1 */
  push32((uint32_t)(0x1u));
  /* 1266cabd push 0x1268c19c */
  push32((uint32_t)(0x1268c19cu));
  /* 1266cac2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1266cac7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1266cac9 call dword ptr [0x126932e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932e0))), 0x1266cacfu);
  /* 1266cacf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266cad1 je 0x1266cadf */
  if (C.zf) goto L_1266cadf;
  /* 1266cad3 mov dword ptr [0x126907c0], 2 */
  w32((uint32_t)(0x126907c0), (0x2u));
  /* 1266cadd jmp 0x1266cae6 */
  goto L_1266cae6;
L_1266cadf:;
  /* 1266cadf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266cae1 jmp 0x1266cd51 */
  goto L_1266cd51;
L_1266cae6:;
  /* 1266cae6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266caea jle 0x1266caff */
  if ((C.zf||C.sf!=C.of)) goto L_1266caff;
  /* 1266caec mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1266caef push eax */
  push32((uint32_t)(EAX));
  /* 1266caf0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1266caf3 push ecx */
  push32((uint32_t)(ECX));
  /* 1266caf4 call 0x1266cd70 */
  push32(0x1266caf9u); f_1266cd70();
  /* 1266caf9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266cafc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1266caff:;
  /* 1266caff cmp dword ptr [0x126907c0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x126907c0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266cb06 jne 0x1266cb2b */
  if (!C.zf) goto L_1266cb2b;
  /* 1266cb08 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1266cb0b push edx */
  push32((uint32_t)(EDX));
  /* 1266cb0c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1266cb0f push eax */
  push32((uint32_t)(EAX));
  /* 1266cb10 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1266cb13 push ecx */
  push32((uint32_t)(ECX));
  /* 1266cb14 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1266cb17 push edx */
  push32((uint32_t)(EDX));
  /* 1266cb18 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266cb1b push eax */
  push32((uint32_t)(EAX));
  /* 1266cb1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266cb1f push ecx */
  push32((uint32_t)(ECX));
  /* 1266cb20 call dword ptr [0x126932e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932e0))), 0x1266cb26u);
  /* 1266cb26 jmp 0x1266cd51 */
  goto L_1266cd51;
L_1266cb2b:;
  /* 1266cb2b cmp dword ptr [0x126907c0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x126907c0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266cb32 jne 0x1266cd4f */
  if (!C.zf) goto L_1266cd4f;
  /* 1266cb38 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266cb3c jne 0x1266cb47 */
  if (!C.zf) goto L_1266cb47;
  /* 1266cb3e mov edx, dword ptr [0x126907b8] */
  EDX = (r32((uint32_t)(0x126907b8)));
  /* 1266cb44 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_1266cb47:;
  /* 1266cb47 push 0 */
  push32((uint32_t)(0x0u));
  /* 1266cb49 push 0 */
  push32((uint32_t)(0x0u));
  /* 1266cb4b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1266cb4e push eax */
  push32((uint32_t)(EAX));
  /* 1266cb4f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1266cb52 push ecx */
  push32((uint32_t)(ECX));
  /* 1266cb53 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 1266cb56 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1266cb58 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266cb5a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1266cb5d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266cb60 push edx */
  push32((uint32_t)(EDX));
  /* 1266cb61 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1266cb64 push eax */
  push32((uint32_t)(EAX));
  /* 1266cb65 call dword ptr [0x126932ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932ec))), 0x1266cb6bu);
  /* 1266cb6b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1266cb6e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266cb72 jne 0x1266cb7b */
  if (!C.zf) goto L_1266cb7b;
  /* 1266cb74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266cb76 jmp 0x1266cd51 */
  goto L_1266cd51;
L_1266cb7b:;
  /* 1266cb7b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1266cb82 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1266cb85 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1266cb87 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266cb8a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1266cb8c call 0x12667810 */
  push32(0x1266cb91u); f_12667810();
  /* 1266cb91 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 1266cb94 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1266cb97 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1266cb9a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1266cb9d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1266cba4 jmp 0x1266cbbd */
  goto L_1266cbbd;
  /* 1266cba6 mov eax, 1 */
  EAX = (0x1u);
  /* 1266cbab ret  */
  ESPCHK(0x1266ca60u, _esp0);
  ESP += 4; return;
  /* 1266cbac mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1266cbaf mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1266cbb6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1266cbbd:;
  /* 1266cbbd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266cbc1 jne 0x1266cbca */
  if (!C.zf) goto L_1266cbca;
  /* 1266cbc3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266cbc5 jmp 0x1266cd51 */
  goto L_1266cd51;
L_1266cbca:;
  /* 1266cbca mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1266cbcd push edx */
  push32((uint32_t)(EDX));
  /* 1266cbce mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1266cbd1 push eax */
  push32((uint32_t)(EAX));
  /* 1266cbd2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1266cbd5 push ecx */
  push32((uint32_t)(ECX));
  /* 1266cbd6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1266cbd9 push edx */
  push32((uint32_t)(EDX));
  /* 1266cbda push 1 */
  push32((uint32_t)(0x1u));
  /* 1266cbdc mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1266cbdf push eax */
  push32((uint32_t)(EAX));
  /* 1266cbe0 call dword ptr [0x126932ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932ec))), 0x1266cbe6u);
  /* 1266cbe6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266cbe8 jne 0x1266cbf1 */
  if (!C.zf) goto L_1266cbf1;
  /* 1266cbea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266cbec jmp 0x1266cd51 */
  goto L_1266cd51;
L_1266cbf1:;
  /* 1266cbf1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1266cbf3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1266cbf5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1266cbf8 push ecx */
  push32((uint32_t)(ECX));
  /* 1266cbf9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1266cbfc push edx */
  push32((uint32_t)(EDX));
  /* 1266cbfd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266cc00 push eax */
  push32((uint32_t)(EAX));
  /* 1266cc01 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266cc04 push ecx */
  push32((uint32_t)(ECX));
  /* 1266cc05 call dword ptr [0x126932e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932e8))), 0x1266cc0bu);
  /* 1266cc0b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1266cc0e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266cc12 jne 0x1266cc1b */
  if (!C.zf) goto L_1266cc1b;
  /* 1266cc14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266cc16 jmp 0x1266cd51 */
  goto L_1266cd51;
L_1266cc1b:;
  /* 1266cc1b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266cc1e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 1266cc24 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1266cc26 je 0x1266cc6b */
  if (C.zf) goto L_1266cc6b;
  /* 1266cc28 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266cc2c je 0x1266cc66 */
  if (C.zf) goto L_1266cc66;
  /* 1266cc2e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1266cc31 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266cc34 jle 0x1266cc3d */
  if ((C.zf||C.sf!=C.of)) goto L_1266cc3d;
  /* 1266cc36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266cc38 jmp 0x1266cd51 */
  goto L_1266cd51;
L_1266cc3d:;
  /* 1266cc3d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1266cc40 push ecx */
  push32((uint32_t)(ECX));
  /* 1266cc41 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1266cc44 push edx */
  push32((uint32_t)(EDX));
  /* 1266cc45 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1266cc48 push eax */
  push32((uint32_t)(EAX));
  /* 1266cc49 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1266cc4c push ecx */
  push32((uint32_t)(ECX));
  /* 1266cc4d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266cc50 push edx */
  push32((uint32_t)(EDX));
  /* 1266cc51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266cc54 push eax */
  push32((uint32_t)(EAX));
  /* 1266cc55 call dword ptr [0x126932e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932e8))), 0x1266cc5bu);
  /* 1266cc5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266cc5d jne 0x1266cc66 */
  if (!C.zf) goto L_1266cc66;
  /* 1266cc5f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266cc61 jmp 0x1266cd51 */
  goto L_1266cd51;
L_1266cc66:;
  /* 1266cc66 jmp 0x1266cd4a */
  goto L_1266cd4a;
L_1266cc6b:;
  /* 1266cc6b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1266cc6e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1266cc71 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1266cc78 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1266cc7b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1266cc7d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266cc80 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1266cc82 call 0x12667810 */
  push32(0x1266cc87u); f_12667810();
  /* 1266cc87 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 1266cc8a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1266cc8d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1266cc90 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1266cc93 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1266cc9a jmp 0x1266ccb3 */
  goto L_1266ccb3;
  /* 1266cc9c mov eax, 1 */
  EAX = (0x1u);
  /* 1266cca1 ret  */
  ESPCHK(0x1266ca60u, _esp0);
  ESP += 4; return;
  /* 1266cca2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1266cca5 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1266ccac mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1266ccb3:;
  /* 1266ccb3 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266ccb7 jne 0x1266ccc0 */
  if (!C.zf) goto L_1266ccc0;
  /* 1266ccb9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266ccbb jmp 0x1266cd51 */
  goto L_1266cd51;
L_1266ccc0:;
  /* 1266ccc0 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1266ccc3 push eax */
  push32((uint32_t)(EAX));
  /* 1266ccc4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1266ccc7 push ecx */
  push32((uint32_t)(ECX));
  /* 1266ccc8 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1266cccb push edx */
  push32((uint32_t)(EDX));
  /* 1266cccc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1266cccf push eax */
  push32((uint32_t)(EAX));
  /* 1266ccd0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266ccd3 push ecx */
  push32((uint32_t)(ECX));
  /* 1266ccd4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266ccd7 push edx */
  push32((uint32_t)(EDX));
  /* 1266ccd8 call dword ptr [0x126932e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932e8))), 0x1266ccdeu);
  /* 1266ccde test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266cce0 jne 0x1266cce6 */
  if (!C.zf) goto L_1266cce6;
  /* 1266cce2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266cce4 jmp 0x1266cd51 */
  goto L_1266cd51;
L_1266cce6:;
  /* 1266cce6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266ccea jne 0x1266cd1a */
  if (!C.zf) goto L_1266cd1a;
  /* 1266ccec push 0 */
  push32((uint32_t)(0x0u));
  /* 1266ccee push 0 */
  push32((uint32_t)(0x0u));
  /* 1266ccf0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1266ccf2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1266ccf4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1266ccf7 push eax */
  push32((uint32_t)(EAX));
  /* 1266ccf8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1266ccfb push ecx */
  push32((uint32_t)(ECX));
  /* 1266ccfc push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1266cd01 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1266cd04 push edx */
  push32((uint32_t)(EDX));
  /* 1266cd05 call dword ptr [0x1269339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269339c))), 0x1266cd0bu);
  /* 1266cd0b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1266cd0e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266cd12 jne 0x1266cd18 */
  if (!C.zf) goto L_1266cd18;
  /* 1266cd14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266cd16 jmp 0x1266cd51 */
  goto L_1266cd51;
L_1266cd18:;
  /* 1266cd18 jmp 0x1266cd4a */
  goto L_1266cd4a;
L_1266cd1a:;
  /* 1266cd1a push 0 */
  push32((uint32_t)(0x0u));
  /* 1266cd1c push 0 */
  push32((uint32_t)(0x0u));
  /* 1266cd1e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1266cd21 push eax */
  push32((uint32_t)(EAX));
  /* 1266cd22 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1266cd25 push ecx */
  push32((uint32_t)(ECX));
  /* 1266cd26 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1266cd29 push edx */
  push32((uint32_t)(EDX));
  /* 1266cd2a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1266cd2d push eax */
  push32((uint32_t)(EAX));
  /* 1266cd2e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1266cd33 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1266cd36 push ecx */
  push32((uint32_t)(ECX));
  /* 1266cd37 call dword ptr [0x1269339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269339c))), 0x1266cd3du);
  /* 1266cd3d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1266cd40 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266cd44 jne 0x1266cd4a */
  if (!C.zf) goto L_1266cd4a;
  /* 1266cd46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266cd48 jmp 0x1266cd51 */
  goto L_1266cd51;
L_1266cd4a:;
  /* 1266cd4a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1266cd4d jmp 0x1266cd51 */
  goto L_1266cd51;
L_1266cd4f:;
  /* 1266cd4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1266cd51:;
  /* 1266cd51 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1266cd54 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1266cd57 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1266cd5e pop edi */
  EDI = (pop32());
  /* 1266cd5f pop esi */
  ESI = (pop32());
  /* 1266cd60 pop ebx */
  EBX = (pop32());
  /* 1266cd61 mov esp, ebp */
  ESP = (EBP);
  /* 1266cd63 pop ebp */
  EBP = (pop32());
  /* 1266cd64 ret  */
  ESPCHK(0x1266ca60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd70 @ 0x1266cd70 (80 bytes, 32 insns) */
void f_1266cd70(void) {
  FTRACE(0x1266cd70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266cd70 push ebp */
  push32((uint32_t)(EBP));
  /* 1266cd71 mov ebp, esp */
  EBP = (ESP);
  /* 1266cd73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266cd76 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266cd79 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1266cd7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266cd7f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1266cd82:;
  /* 1266cd82 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266cd85 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266cd88 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266cd8b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1266cd8e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1266cd90 je 0x1266cda7 */
  if (C.zf) goto L_1266cda7;
  /* 1266cd92 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266cd95 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1266cd98 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1266cd9a je 0x1266cda7 */
  if (C.zf) goto L_1266cda7;
  /* 1266cd9c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266cd9f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266cda2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1266cda5 jmp 0x1266cd82 */
  goto L_1266cd82;
L_1266cda7:;
  /* 1266cda7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266cdaa movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1266cdad test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1266cdaf jne 0x1266cdb9 */
  if (!C.zf) goto L_1266cdb9;
  /* 1266cdb1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266cdb4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266cdb7 jmp 0x1266cdbc */
  goto L_1266cdbc;
L_1266cdb9:;
  /* 1266cdb9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1266cdbc:;
  /* 1266cdbc mov esp, ebp */
  ESP = (EBP);
  /* 1266cdbe pop ebp */
  EBP = (pop32());
  /* 1266cdbf ret  */
  ESPCHK(0x1266cd70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cdc0 @ 0x1266cdc0 (130 bytes, 43 insns) */
void f_1266cdc0(void) {
  FTRACE(0x1266cdc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266cdc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1266cdc1 mov ebp, esp */
  EBP = (ESP);
  /* 1266cdc3 push ecx */
  push32((uint32_t)(ECX));
  /* 1266cdc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266cdc7 cmp eax, dword ptr [0x126920bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x126920bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266cdcd jae 0x1266cdf1 */
  if (!C.cf) goto L_1266cdf1;
  /* 1266cdcf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266cdd2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1266cdd5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266cdd8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1266cddb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1266cdde mov eax, dword ptr [ecx*4 + 0x12691f80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12691f80)));
  /* 1266cde5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1266cdea and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1266cded test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1266cdef jne 0x1266ce0c */
  if (!C.zf) goto L_1266ce0c;
L_1266cdf1:;
  /* 1266cdf1 call 0x1266c540 */
  push32(0x1266cdf6u); f_1266c540();
  /* 1266cdf6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1266cdfc call 0x1266c550 */
  push32(0x1266ce01u); f_1266c550();
  /* 1266ce01 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1266ce07 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1266ce0a jmp 0x1266ce3e */
  goto L_1266ce3e;
L_1266ce0c:;
  /* 1266ce0c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266ce0f push edx */
  push32((uint32_t)(EDX));
  /* 1266ce10 call 0x1266dd60 */
  push32(0x1266ce15u); f_1266dd60();
  /* 1266ce15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266ce18 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1266ce1b push eax */
  push32((uint32_t)(EAX));
  /* 1266ce1c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266ce1f push ecx */
  push32((uint32_t)(ECX));
  /* 1266ce20 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266ce23 push edx */
  push32((uint32_t)(EDX));
  /* 1266ce24 call 0x1266ce50 */
  push32(0x1266ce29u); f_1266ce50();
  /* 1266ce29 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266ce2c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1266ce2f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266ce32 push eax */
  push32((uint32_t)(EAX));
  /* 1266ce33 call 0x1266ddf0 */
  push32(0x1266ce38u); f_1266ddf0();
  /* 1266ce38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266ce3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1266ce3e:;
  /* 1266ce3e mov esp, ebp */
  ESP = (EBP);
  /* 1266ce40 pop ebp */
  EBP = (pop32());
  /* 1266ce41 ret  */
  ESPCHK(0x1266cdc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce50 @ 0x1266ce50 (178 bytes, 56 insns) */
void f_1266ce50(void) {
  FTRACE(0x1266ce50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266ce50 push ebp */
  push32((uint32_t)(EBP));
  /* 1266ce51 mov ebp, esp */
  EBP = (ESP);
  /* 1266ce53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266ce56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266ce59 push eax */
  push32((uint32_t)(EAX));
  /* 1266ce5a call 0x1266dbe0 */
  push32(0x1266ce5fu); f_1266dbe0();
  /* 1266ce5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266ce62 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1266ce65 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266ce69 jne 0x1266ce7e */
  if (!C.zf) goto L_1266ce7e;
  /* 1266ce6b call 0x1266c540 */
  push32(0x1266ce70u); f_1266c540();
  /* 1266ce70 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1266ce76 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1266ce79 jmp 0x1266cefe */
  goto L_1266cefe;
L_1266ce7e:;
  /* 1266ce7e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1266ce81 push ecx */
  push32((uint32_t)(ECX));
  /* 1266ce82 push 0 */
  push32((uint32_t)(0x0u));
  /* 1266ce84 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266ce87 push edx */
  push32((uint32_t)(EDX));
  /* 1266ce88 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266ce8b push eax */
  push32((uint32_t)(EAX));
  /* 1266ce8c call dword ptr [0x126932d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932d8))), 0x1266ce92u);
  /* 1266ce92 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1266ce95 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266ce99 jne 0x1266cea6 */
  if (!C.zf) goto L_1266cea6;
  /* 1266ce9b call dword ptr [0x12693370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693370))), 0x1266cea1u);
  /* 1266cea1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1266cea4 jmp 0x1266cead */
  goto L_1266cead;
L_1266cea6:;
  /* 1266cea6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1266cead:;
  /* 1266cead cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266ceb1 je 0x1266cec4 */
  if (C.zf) goto L_1266cec4;
  /* 1266ceb3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266ceb6 push ecx */
  push32((uint32_t)(ECX));
  /* 1266ceb7 call 0x1266c4a0 */
  push32(0x1266cebcu); f_1266c4a0();
  /* 1266cebc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266cebf or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1266cec2 jmp 0x1266cefe */
  goto L_1266cefe;
L_1266cec4:;
  /* 1266cec4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266cec7 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1266ceca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266cecd and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1266ced0 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1266ced3 mov ecx, dword ptr [edx*4 + 0x12691f80] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12691f80)));
  /* 1266ceda mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 1266cede and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 1266cee1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266cee4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1266cee7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266ceea and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1266ceed imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1266cef0 mov eax, dword ptr [eax*4 + 0x12691f80] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12691f80)));
  /* 1266cef7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 1266cefb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1266cefe:;
  /* 1266cefe mov esp, ebp */
  ESP = (EBP);
  /* 1266cf00 pop ebp */
  EBP = (pop32());
  /* 1266cf01 ret  */
  ESPCHK(0x1266ce50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf10 @ 0x1266cf10 (130 bytes, 43 insns) */
void f_1266cf10(void) {
  FTRACE(0x1266cf10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266cf10 push ebp */
  push32((uint32_t)(EBP));
  /* 1266cf11 mov ebp, esp */
  EBP = (ESP);
  /* 1266cf13 push ecx */
  push32((uint32_t)(ECX));
  /* 1266cf14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266cf17 cmp eax, dword ptr [0x126920bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x126920bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266cf1d jae 0x1266cf41 */
  if (!C.cf) goto L_1266cf41;
  /* 1266cf1f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266cf22 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1266cf25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266cf28 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1266cf2b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1266cf2e mov eax, dword ptr [ecx*4 + 0x12691f80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12691f80)));
  /* 1266cf35 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1266cf3a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1266cf3d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1266cf3f jne 0x1266cf5c */
  if (!C.zf) goto L_1266cf5c;
L_1266cf41:;
  /* 1266cf41 call 0x1266c540 */
  push32(0x1266cf46u); f_1266c540();
  /* 1266cf46 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1266cf4c call 0x1266c550 */
  push32(0x1266cf51u); f_1266c550();
  /* 1266cf51 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1266cf57 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1266cf5a jmp 0x1266cf8e */
  goto L_1266cf8e;
L_1266cf5c:;
  /* 1266cf5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266cf5f push edx */
  push32((uint32_t)(EDX));
  /* 1266cf60 call 0x1266dd60 */
  push32(0x1266cf65u); f_1266dd60();
  /* 1266cf65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266cf68 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1266cf6b push eax */
  push32((uint32_t)(EAX));
  /* 1266cf6c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266cf6f push ecx */
  push32((uint32_t)(ECX));
  /* 1266cf70 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266cf73 push edx */
  push32((uint32_t)(EDX));
  /* 1266cf74 call 0x1266cfa0 */
  push32(0x1266cf79u); f_1266cfa0();
  /* 1266cf79 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266cf7c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1266cf7f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266cf82 push eax */
  push32((uint32_t)(EAX));
  /* 1266cf83 call 0x1266ddf0 */
  push32(0x1266cf88u); f_1266ddf0();
  /* 1266cf88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266cf8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1266cf8e:;
  /* 1266cf8e mov esp, ebp */
  ESP = (EBP);
  /* 1266cf90 pop ebp */
  EBP = (pop32());
  /* 1266cf91 ret  */
  ESPCHK(0x1266cf10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cfa0 @ 0x1266cfa0 (627 bytes, 182 insns) */
void f_1266cfa0(void) {
  FTRACE(0x1266cfa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266cfa0 push ebp */
  push32((uint32_t)(EBP));
  /* 1266cfa1 mov ebp, esp */
  EBP = (ESP);
  /* 1266cfa3 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266cfa9 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1266cfb0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1266cfb3 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 1266cfb9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266cfbd jne 0x1266cfc6 */
  if (!C.zf) goto L_1266cfc6;
  /* 1266cfbf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266cfc1 jmp 0x1266d20f */
  goto L_1266d20f;
L_1266cfc6:;
  /* 1266cfc6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266cfc9 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1266cfcc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266cfcf and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1266cfd2 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1266cfd5 mov eax, dword ptr [ecx*4 + 0x12691f80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12691f80)));
  /* 1266cfdc movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1266cfe1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1266cfe4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1266cfe6 je 0x1266cff8 */
  if (C.zf) goto L_1266cff8;
  /* 1266cfe8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266cfea push 0 */
  push32((uint32_t)(0x0u));
  /* 1266cfec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266cfef push edx */
  push32((uint32_t)(EDX));
  /* 1266cff0 call 0x1266ce50 */
  push32(0x1266cff5u); f_1266ce50();
  /* 1266cff5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1266cff8:;
  /* 1266cff8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266cffb sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1266cffe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266d001 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1266d004 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1266d007 mov edx, dword ptr [eax*4 + 0x12691f80] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12691f80)));
  /* 1266d00e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1266d013 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1266d018 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266d01a je 0x1266d12c */
  if (C.zf) goto L_1266d12c;
  /* 1266d020 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266d023 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1266d026 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1266d02d:;
  /* 1266d02d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266d030 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266d033 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266d036 jae 0x1266d12a */
  if (!C.cf) goto L_1266d12a;
  /* 1266d03c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1266d042 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1266d045:;
  /* 1266d045 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266d048 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1266d04e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266d050 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266d056 jge 0x1266d0b7 */
  if ((C.sf==C.of)) goto L_1266d0b7;
  /* 1266d058 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266d05b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266d05e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266d061 jae 0x1266d0b7 */
  if (!C.cf) goto L_1266d0b7;
  /* 1266d063 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266d066 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1266d068 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 1266d06e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266d071 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266d074 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1266d077 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 1266d07e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266d081 jne 0x1266d0a1 */
  if (!C.zf) goto L_1266d0a1;
  /* 1266d083 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 1266d089 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266d08c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 1266d092 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266d095 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 1266d098 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266d09b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266d09e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1266d0a1:;
  /* 1266d0a1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266d0a4 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 1266d0aa mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1266d0ac mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266d0af add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266d0b2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1266d0b5 jmp 0x1266d045 */
  goto L_1266d045;
L_1266d0b7:;
  /* 1266d0b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1266d0b9 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1266d0bf push edx */
  push32((uint32_t)(EDX));
  /* 1266d0c0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266d0c3 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 1266d0c9 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266d0cb push eax */
  push32((uint32_t)(EAX));
  /* 1266d0cc lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1266d0d2 push edx */
  push32((uint32_t)(EDX));
  /* 1266d0d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266d0d6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1266d0d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266d0dc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1266d0df imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1266d0e2 mov edx, dword ptr [eax*4 + 0x12691f80] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12691f80)));
  /* 1266d0e9 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 1266d0ec push eax */
  push32((uint32_t)(EAX));
  /* 1266d0ed call dword ptr [0x12693330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693330))), 0x1266d0f3u);
  /* 1266d0f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266d0f5 je 0x1266d11a */
  if (C.zf) goto L_1266d11a;
  /* 1266d0f7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1266d0fa add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266d100 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1266d103 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266d106 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1266d10c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266d10e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266d114 jge 0x1266d118 */
  if ((C.sf==C.of)) goto L_1266d118;
  /* 1266d116 jmp 0x1266d12a */
  goto L_1266d12a;
L_1266d118:;
  /* 1266d118 jmp 0x1266d125 */
  goto L_1266d125;
L_1266d11a:;
  /* 1266d11a call dword ptr [0x12693370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693370))), 0x1266d120u);
  /* 1266d120 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1266d123 jmp 0x1266d12a */
  goto L_1266d12a;
L_1266d125:;
  /* 1266d125 jmp 0x1266d02d */
  goto L_1266d02d;
L_1266d12a:;
  /* 1266d12a jmp 0x1266d17c */
  goto L_1266d17c;
L_1266d12c:;
  /* 1266d12c push 0 */
  push32((uint32_t)(0x0u));
  /* 1266d12e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 1266d134 push ecx */
  push32((uint32_t)(ECX));
  /* 1266d135 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1266d138 push edx */
  push32((uint32_t)(EDX));
  /* 1266d139 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266d13c push eax */
  push32((uint32_t)(EAX));
  /* 1266d13d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266d140 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1266d143 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266d146 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1266d149 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1266d14c mov eax, dword ptr [ecx*4 + 0x12691f80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12691f80)));
  /* 1266d153 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 1266d156 push ecx */
  push32((uint32_t)(ECX));
  /* 1266d157 call dword ptr [0x12693330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693330))), 0x1266d15du);
  /* 1266d15d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266d15f je 0x1266d173 */
  if (C.zf) goto L_1266d173;
  /* 1266d161 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1266d168 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 1266d16e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1266d171 jmp 0x1266d17c */
  goto L_1266d17c;
L_1266d173:;
  /* 1266d173 call dword ptr [0x12693370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693370))), 0x1266d179u);
  /* 1266d179 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1266d17c:;
  /* 1266d17c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266d180 jne 0x1266d206 */
  if (!C.zf) goto L_1266d206;
  /* 1266d186 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266d18a je 0x1266d1ba */
  if (C.zf) goto L_1266d1ba;
  /* 1266d18c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266d190 jne 0x1266d1a9 */
  if (!C.zf) goto L_1266d1a9;
  /* 1266d192 call 0x1266c540 */
  push32(0x1266d197u); f_1266c540();
  /* 1266d197 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1266d19d call 0x1266c550 */
  push32(0x1266d1a2u); f_1266c550();
  /* 1266d1a2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266d1a5 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1266d1a7 jmp 0x1266d1b5 */
  goto L_1266d1b5;
L_1266d1a9:;
  /* 1266d1a9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266d1ac push edx */
  push32((uint32_t)(EDX));
  /* 1266d1ad call 0x1266c4a0 */
  push32(0x1266d1b2u); f_1266c4a0();
  /* 1266d1b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1266d1b5:;
  /* 1266d1b5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1266d1b8 jmp 0x1266d20f */
  goto L_1266d20f;
L_1266d1ba:;
  /* 1266d1ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266d1bd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1266d1c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266d1c3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1266d1c6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1266d1c9 mov edx, dword ptr [eax*4 + 0x12691f80] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12691f80)));
  /* 1266d1d0 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1266d1d5 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1266d1d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266d1da je 0x1266d1eb */
  if (C.zf) goto L_1266d1eb;
  /* 1266d1dc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266d1df movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1266d1e2 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266d1e5 jne 0x1266d1eb */
  if (!C.zf) goto L_1266d1eb;
  /* 1266d1e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266d1e9 jmp 0x1266d20f */
  goto L_1266d20f;
L_1266d1eb:;
  /* 1266d1eb call 0x1266c540 */
  push32(0x1266d1f0u); f_1266c540();
  /* 1266d1f0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 1266d1f6 call 0x1266c550 */
  push32(0x1266d1fbu); f_1266c550();
  /* 1266d1fb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1266d201 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1266d204 jmp 0x1266d20f */
  goto L_1266d20f;
L_1266d206:;
  /* 1266d206 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1266d209 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1266d20f:;
  /* 1266d20f mov esp, ebp */
  ESP = (EBP);
  /* 1266d211 pop ebp */
  EBP = (pop32());
  /* 1266d212 ret  */
  ESPCHK(0x1266cfa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d220 @ 0x1266d220 (199 bytes, 68 insns) */
void f_1266d220(void) {
  FTRACE(0x1266d220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266d220 push ebp */
  push32((uint32_t)(EBP));
  /* 1266d221 mov ebp, esp */
  EBP = (ESP);
  /* 1266d223 push ecx */
  push32((uint32_t)(ECX));
  /* 1266d224 push ebx */
  push32((uint32_t)(EBX));
  /* 1266d225 push esi */
  push32((uint32_t)(ESI));
  /* 1266d226 push edi */
  push32((uint32_t)(EDI));
L_1266d227:;
  /* 1266d227 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266d22b jne 0x1266d24b */
  if (!C.zf) goto L_1266d24b;
  /* 1266d22d push 0x1268c100 */
  push32((uint32_t)(0x1268c100u));
  /* 1266d232 push 0 */
  push32((uint32_t)(0x0u));
  /* 1266d234 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1266d236 push 0x1268c1d0 */
  push32((uint32_t)(0x1268c1d0u));
  /* 1266d23b push 2 */
  push32((uint32_t)(0x2u));
  /* 1266d23d call 0x12663730 */
  push32(0x1266d242u); f_12663730();
  /* 1266d242 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266d245 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266d248 jne 0x1266d24b */
  if (!C.zf) goto L_1266d24b;
  /* 1266d24a int3  */
  x86_unimpl("int3 @ 0x1266d24a");
L_1266d24b:;
  /* 1266d24b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266d24d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266d24f jne 0x1266d227 */
  if (!C.zf) goto L_1266d227;
  /* 1266d251 mov ecx, dword ptr [0x126907c4] */
  ECX = (r32((uint32_t)(0x126907c4)));
  /* 1266d257 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266d25a mov dword ptr [0x126907c4], ecx */
  w32((uint32_t)(0x126907c4), (ECX));
  /* 1266d260 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266d263 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1266d266 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1266d268 push 0x1268c1d0 */
  push32((uint32_t)(0x1268c1d0u));
  /* 1266d26d push 2 */
  push32((uint32_t)(0x2u));
  /* 1266d26f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1266d274 call 0x12664670 */
  push32(0x1266d279u); f_12664670();
  /* 1266d279 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266d27c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266d27f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1266d282 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266d285 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266d289 je 0x1266d2a6 */
  if (C.zf) goto L_1266d2a6;
  /* 1266d28b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266d28e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1266d291 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1266d294 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266d297 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1266d29a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266d29d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 1266d2a4 jmp 0x1266d2cb */
  goto L_1266d2cb;
L_1266d2a6:;
  /* 1266d2a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266d2a9 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1266d2ac or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1266d2af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266d2b2 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1266d2b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266d2b8 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266d2bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266d2be mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1266d2c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266d2c4 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_1266d2cb:;
  /* 1266d2cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266d2ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266d2d1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1266d2d4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1266d2d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266d2d9 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1266d2e0 pop edi */
  EDI = (pop32());
  /* 1266d2e1 pop esi */
  ESI = (pop32());
  /* 1266d2e2 pop ebx */
  EBX = (pop32());
  /* 1266d2e3 mov esp, ebp */
  ESP = (EBP);
  /* 1266d2e5 pop ebp */
  EBP = (pop32());
  /* 1266d2e6 ret  */
  ESPCHK(0x1266d220u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x1266d2f0 (50 bytes, 17 insns) */
void f_1266d2f0(void) {
  FTRACE(0x1266d2f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266d2f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1266d2f1 mov ebp, esp */
  EBP = (ESP);
  /* 1266d2f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266d2f6 cmp eax, dword ptr [0x126920bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x126920bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266d2fc jb 0x1266d302 */
  if (C.cf) goto L_1266d302;
  /* 1266d2fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266d300 jmp 0x1266d320 */
  goto L_1266d320;
L_1266d302:;
  /* 1266d302 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266d305 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1266d308 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266d30b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1266d30e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1266d311 mov eax, dword ptr [ecx*4 + 0x12691f80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12691f80)));
  /* 1266d318 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1266d31d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_1266d320:;
  /* 1266d320 pop ebp */
  EBP = (pop32());
  /* 1266d321 ret  */
  ESPCHK(0x1266d2f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d330 @ 0x1266d330 (300 bytes, 80 insns) */
void f_1266d330(void) {
  FTRACE(0x1266d330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266d330 push ebp */
  push32((uint32_t)(EBP));
  /* 1266d331 mov ebp, esp */
  EBP = (ESP);
  /* 1266d333 push ecx */
  push32((uint32_t)(ECX));
  /* 1266d334 cmp dword ptr [0x12691c80], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12691c80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266d33b jne 0x1266d349 */
  if (!C.zf) goto L_1266d349;
  /* 1266d33d mov dword ptr [0x12691c80], 0x200 */
  w32((uint32_t)(0x12691c80), (0x200u));
  /* 1266d347 jmp 0x1266d35c */
  goto L_1266d35c;
L_1266d349:;
  /* 1266d349 cmp dword ptr [0x12691c80], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x12691c80))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266d350 jge 0x1266d35c */
  if ((C.sf==C.of)) goto L_1266d35c;
  /* 1266d352 mov dword ptr [0x12691c80], 0x14 */
  w32((uint32_t)(0x12691c80), (0x14u));
L_1266d35c:;
  /* 1266d35c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 1266d361 push 0x1268c1dc */
  push32((uint32_t)(0x1268c1dcu));
  /* 1266d366 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266d368 push 4 */
  push32((uint32_t)(0x4u));
  /* 1266d36a mov eax, dword ptr [0x12691c80] */
  EAX = (r32((uint32_t)(0x12691c80)));
  /* 1266d36f push eax */
  push32((uint32_t)(EAX));
  /* 1266d370 call 0x12664a80 */
  push32(0x1266d375u); f_12664a80();
  /* 1266d375 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266d378 mov dword ptr [0x12690938], eax */
  w32((uint32_t)(0x12690938), (EAX));
  /* 1266d37d cmp dword ptr [0x12690938], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12690938))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266d384 jne 0x1266d3c5 */
  if (!C.zf) goto L_1266d3c5;
  /* 1266d386 mov dword ptr [0x12691c80], 0x14 */
  w32((uint32_t)(0x12691c80), (0x14u));
  /* 1266d390 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 1266d395 push 0x1268c1dc */
  push32((uint32_t)(0x1268c1dcu));
  /* 1266d39a push 2 */
  push32((uint32_t)(0x2u));
  /* 1266d39c push 4 */
  push32((uint32_t)(0x4u));
  /* 1266d39e mov ecx, dword ptr [0x12691c80] */
  ECX = (r32((uint32_t)(0x12691c80)));
  /* 1266d3a4 push ecx */
  push32((uint32_t)(ECX));
  /* 1266d3a5 call 0x12664a80 */
  push32(0x1266d3aau); f_12664a80();
  /* 1266d3aa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266d3ad mov dword ptr [0x12690938], eax */
  w32((uint32_t)(0x12690938), (EAX));
  /* 1266d3b2 cmp dword ptr [0x12690938], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12690938))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266d3b9 jne 0x1266d3c5 */
  if (!C.zf) goto L_1266d3c5;
  /* 1266d3bb push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1266d3bd call 0x126635e0 */
  push32(0x1266d3c2u); f_126635e0();
  /* 1266d3c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1266d3c5:;
  /* 1266d3c5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1266d3cc jmp 0x1266d3d7 */
  goto L_1266d3d7;
L_1266d3ce:;
  /* 1266d3ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266d3d1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266d3d4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1266d3d7:;
  /* 1266d3d7 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266d3db jge 0x1266d3f6 */
  if ((C.sf==C.of)) goto L_1266d3f6;
  /* 1266d3dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266d3e0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1266d3e3 add eax, 0x1268f120 */
  { uint32_t _a=(EAX),_b=(0x1268f120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266d3e8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266d3eb mov edx, dword ptr [0x12690938] */
  EDX = (r32((uint32_t)(0x12690938)));
  /* 1266d3f1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 1266d3f4 jmp 0x1266d3ce */
  goto L_1266d3ce;
L_1266d3f6:;
  /* 1266d3f6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1266d3fd jmp 0x1266d408 */
  goto L_1266d408;
L_1266d3ff:;
  /* 1266d3ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266d402 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266d405 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1266d408:;
  /* 1266d408 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266d40c jge 0x1266d458 */
  if ((C.sf==C.of)) goto L_1266d458;
  /* 1266d40e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266d411 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1266d414 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266d417 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1266d41a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1266d41d mov eax, dword ptr [ecx*4 + 0x12691f80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12691f80)));
  /* 1266d424 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266d428 je 0x1266d446 */
  if (C.zf) goto L_1266d446;
  /* 1266d42a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266d42d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1266d430 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266d433 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1266d436 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1266d439 mov eax, dword ptr [ecx*4 + 0x12691f80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12691f80)));
  /* 1266d440 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266d444 jne 0x1266d456 */
  if (!C.zf) goto L_1266d456;
L_1266d446:;
  /* 1266d446 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266d449 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1266d44c mov dword ptr [ecx + 0x1268f130], 0xffffffff */
  w32((uint32_t)(ECX + 0x1268f130), (0xffffffffu));
L_1266d456:;
  /* 1266d456 jmp 0x1266d3ff */
  goto L_1266d3ff;
L_1266d458:;
  /* 1266d458 mov esp, ebp */
  ESP = (EBP);
  /* 1266d45a pop ebp */
  EBP = (pop32());
  /* 1266d45b ret  */
  ESPCHK(0x1266d330u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d460 @ 0x1266d460 (26 bytes, 9 insns) */
void f_1266d460(void) {
  FTRACE(0x1266d460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266d460 push ebp */
  push32((uint32_t)(EBP));
  /* 1266d461 mov ebp, esp */
  EBP = (ESP);
  /* 1266d463 call 0x1266e060 */
  push32(0x1266d468u); f_1266e060();
  /* 1266d468 movsx eax, byte ptr [0x126905dc] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x126905dc))));
  /* 1266d46f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266d471 je 0x1266d478 */
  if (C.zf) goto L_1266d478;
  /* 1266d473 call 0x1266de20 */
  push32(0x1266d478u); f_1266de20();
L_1266d478:;
  /* 1266d478 pop ebp */
  EBP = (pop32());
  /* 1266d479 ret  */
  ESPCHK(0x1266d460u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d480 @ 0x1266d480 (61 bytes, 20 insns) */
void f_1266d480(void) {
  FTRACE(0x1266d480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266d480 push ebp */
  push32((uint32_t)(EBP));
  /* 1266d481 mov ebp, esp */
  EBP = (ESP);
  /* 1266d483 cmp dword ptr [ebp + 8], 0x1268f120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1268f120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266d48a jb 0x1266d4ae */
  if (C.cf) goto L_1266d4ae;
  /* 1266d48c cmp dword ptr [ebp + 8], 0x1268f380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1268f380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266d493 ja 0x1266d4ae */
  if ((!C.cf&&!C.zf)) goto L_1266d4ae;
  /* 1266d495 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266d498 sub eax, 0x1268f120 */
  { uint32_t _a=(EAX),_b=(0x1268f120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266d49d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1266d4a0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266d4a3 push eax */
  push32((uint32_t)(EAX));
  /* 1266d4a4 call 0x12668070 */
  push32(0x1266d4a9u); f_12668070();
  /* 1266d4a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266d4ac jmp 0x1266d4bb */
  goto L_1266d4bb;
L_1266d4ae:;
  /* 1266d4ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266d4b1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266d4b4 push ecx */
  push32((uint32_t)(ECX));
  /* 1266d4b5 call dword ptr [0x12693314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693314))), 0x1266d4bbu);
L_1266d4bb:;
  /* 1266d4bb pop ebp */
  EBP = (pop32());
  /* 1266d4bc ret  */
  ESPCHK(0x1266d480u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d4c0 @ 0x1266d4c0 (41 bytes, 16 insns) */
void f_1266d4c0(void) {
  FTRACE(0x1266d4c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266d4c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1266d4c1 mov ebp, esp */
  EBP = (ESP);
  /* 1266d4c3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266d4c7 jge 0x1266d4da */
  if ((C.sf==C.of)) goto L_1266d4da;
  /* 1266d4c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266d4cc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266d4cf push eax */
  push32((uint32_t)(EAX));
  /* 1266d4d0 call 0x12668070 */
  push32(0x1266d4d5u); f_12668070();
  /* 1266d4d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266d4d8 jmp 0x1266d4e7 */
  goto L_1266d4e7;
L_1266d4da:;
  /* 1266d4da mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266d4dd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266d4e0 push ecx */
  push32((uint32_t)(ECX));
  /* 1266d4e1 call dword ptr [0x12693314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693314))), 0x1266d4e7u);
L_1266d4e7:;
  /* 1266d4e7 pop ebp */
  EBP = (pop32());
  /* 1266d4e8 ret  */
  ESPCHK(0x1266d4c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d4f0 @ 0x1266d4f0 (61 bytes, 20 insns) */
void f_1266d4f0(void) {
  FTRACE(0x1266d4f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266d4f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1266d4f1 mov ebp, esp */
  EBP = (ESP);
  /* 1266d4f3 cmp dword ptr [ebp + 8], 0x1268f120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1268f120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266d4fa jb 0x1266d51e */
  if (C.cf) goto L_1266d51e;
  /* 1266d4fc cmp dword ptr [ebp + 8], 0x1268f380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1268f380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266d503 ja 0x1266d51e */
  if ((!C.cf&&!C.zf)) goto L_1266d51e;
  /* 1266d505 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266d508 sub eax, 0x1268f120 */
  { uint32_t _a=(EAX),_b=(0x1268f120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266d50d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1266d510 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266d513 push eax */
  push32((uint32_t)(EAX));
  /* 1266d514 call 0x12668110 */
  push32(0x1266d519u); f_12668110();
  /* 1266d519 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266d51c jmp 0x1266d52b */
  goto L_1266d52b;
L_1266d51e:;
  /* 1266d51e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266d521 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266d524 push ecx */
  push32((uint32_t)(ECX));
  /* 1266d525 call dword ptr [0x12693310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693310))), 0x1266d52bu);
L_1266d52b:;
  /* 1266d52b pop ebp */
  EBP = (pop32());
  /* 1266d52c ret  */
  ESPCHK(0x1266d4f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d530 @ 0x1266d530 (41 bytes, 16 insns) */
void f_1266d530(void) {
  FTRACE(0x1266d530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266d530 push ebp */
  push32((uint32_t)(EBP));
  /* 1266d531 mov ebp, esp */
  EBP = (ESP);
  /* 1266d533 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266d537 jge 0x1266d54a */
  if ((C.sf==C.of)) goto L_1266d54a;
  /* 1266d539 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266d53c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266d53f push eax */
  push32((uint32_t)(EAX));
  /* 1266d540 call 0x12668110 */
  push32(0x1266d545u); f_12668110();
  /* 1266d545 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266d548 jmp 0x1266d557 */
  goto L_1266d557;
L_1266d54a:;
  /* 1266d54a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266d54d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266d550 push ecx */
  push32((uint32_t)(ECX));
  /* 1266d551 call dword ptr [0x12693310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693310))), 0x1266d557u);
L_1266d557:;
  /* 1266d557 pop ebp */
  EBP = (pop32());
  /* 1266d558 ret  */
  ESPCHK(0x1266d530u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d560 @ 0x1266d560 (119 bytes, 34 insns) */
void f_1266d560(void) {
  FTRACE(0x1266d560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266d560 push ebp */
  push32((uint32_t)(EBP));
  /* 1266d561 mov ebp, esp */
  EBP = (ESP);
  /* 1266d563 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266d566 push 0x12690934 */
  push32((uint32_t)(0x12690934u));
  /* 1266d56b call dword ptr [0x12693344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693344))), 0x1266d571u);
  /* 1266d571 cmp dword ptr [0x12690924], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12690924))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266d578 je 0x1266d598 */
  if (C.zf) goto L_1266d598;
  /* 1266d57a push 0x12690934 */
  push32((uint32_t)(0x12690934u));
  /* 1266d57f call dword ptr [0x12693334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693334))), 0x1266d585u);
  /* 1266d585 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1266d587 call 0x12668070 */
  push32(0x1266d58cu); f_12668070();
  /* 1266d58c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266d58f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1266d596 jmp 0x1266d59f */
  goto L_1266d59f;
L_1266d598:;
  /* 1266d598 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1266d59f:;
  /* 1266d59f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 1266d5a3 push eax */
  push32((uint32_t)(EAX));
  /* 1266d5a4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266d5a7 push ecx */
  push32((uint32_t)(ECX));
  /* 1266d5a8 call 0x1266d5e0 */
  push32(0x1266d5adu); f_1266d5e0();
  /* 1266d5ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266d5b0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1266d5b3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266d5b7 je 0x1266d5c5 */
  if (C.zf) goto L_1266d5c5;
  /* 1266d5b9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1266d5bb call 0x12668110 */
  push32(0x1266d5c0u); f_12668110();
  /* 1266d5c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266d5c3 jmp 0x1266d5d0 */
  goto L_1266d5d0;
L_1266d5c5:;
  /* 1266d5c5 push 0x12690934 */
  push32((uint32_t)(0x12690934u));
  /* 1266d5ca call dword ptr [0x12693334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693334))), 0x1266d5d0u);
L_1266d5d0:;
  /* 1266d5d0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266d5d3 mov esp, ebp */
  ESP = (EBP);
  /* 1266d5d5 pop ebp */
  EBP = (pop32());
  /* 1266d5d6 ret  */
  ESPCHK(0x1266d560u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d5e0 @ 0x1266d5e0 (160 bytes, 50 insns) */
void f_1266d5e0(void) {
  FTRACE(0x1266d5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266d5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1266d5e1 mov ebp, esp */
  EBP = (ESP);
  /* 1266d5e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266d5e6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266d5ea jne 0x1266d5f3 */
  if (!C.zf) goto L_1266d5f3;
  /* 1266d5ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266d5ee jmp 0x1266d67c */
  goto L_1266d67c;
L_1266d5f3:;
  /* 1266d5f3 cmp dword ptr [0x126907a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x126907a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266d5fa jne 0x1266d62a */
  if (!C.zf) goto L_1266d62a;
  /* 1266d5fc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266d5ff and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1266d604 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266d609 jle 0x1266d61b */
  if ((C.zf||C.sf!=C.of)) goto L_1266d61b;
  /* 1266d60b call 0x1266c540 */
  push32(0x1266d610u); f_1266c540();
  /* 1266d610 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1266d616 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1266d619 jmp 0x1266d67c */
  goto L_1266d67c;
L_1266d61b:;
  /* 1266d61b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266d61e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 1266d621 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1266d623 mov eax, 1 */
  EAX = (0x1u);
  /* 1266d628 jmp 0x1266d67c */
  goto L_1266d67c;
L_1266d62a:;
  /* 1266d62a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1266d631 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1266d634 push eax */
  push32((uint32_t)(EAX));
  /* 1266d635 push 0 */
  push32((uint32_t)(0x0u));
  /* 1266d637 mov ecx, dword ptr [0x1268eea4] */
  ECX = (r32((uint32_t)(0x1268eea4)));
  /* 1266d63d push ecx */
  push32((uint32_t)(ECX));
  /* 1266d63e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266d641 push edx */
  push32((uint32_t)(EDX));
  /* 1266d642 push 1 */
  push32((uint32_t)(0x1u));
  /* 1266d644 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1266d647 push eax */
  push32((uint32_t)(EAX));
  /* 1266d648 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1266d64d mov ecx, dword ptr [0x126907b8] */
  ECX = (r32((uint32_t)(0x126907b8)));
  /* 1266d653 push ecx */
  push32((uint32_t)(ECX));
  /* 1266d654 call dword ptr [0x1269339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269339c))), 0x1266d65au);
  /* 1266d65a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1266d65d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266d661 je 0x1266d669 */
  if (C.zf) goto L_1266d669;
  /* 1266d663 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266d667 je 0x1266d679 */
  if (C.zf) goto L_1266d679;
L_1266d669:;
  /* 1266d669 call 0x1266c540 */
  push32(0x1266d66eu); f_1266c540();
  /* 1266d66e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1266d674 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1266d677 jmp 0x1266d67c */
  goto L_1266d67c;
L_1266d679:;
  /* 1266d679 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1266d67c:;
  /* 1266d67c mov esp, ebp */
  ESP = (EBP);
  /* 1266d67e pop ebp */
  EBP = (pop32());
  /* 1266d67f ret  */
  ESPCHK(0x1266d5e0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x1266d680 (32 bytes, 18 insns) */
void f_1266d680(void) {
  FTRACE(0x1266d680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266d680 push ebp */
  push32((uint32_t)(EBP));
  /* 1266d681 mov ebp, esp */
  EBP = (ESP);
  /* 1266d683 push ebx */
  push32((uint32_t)(EBX));
  /* 1266d684 push esi */
  push32((uint32_t)(ESI));
  /* 1266d685 push edi */
  push32((uint32_t)(EDI));
  /* 1266d686 push ebp */
  push32((uint32_t)(EBP));
  /* 1266d687 push 0 */
  push32((uint32_t)(0x0u));
  /* 1266d689 push 0 */
  push32((uint32_t)(0x0u));
  /* 1266d68b push 0x1266d698 */
  push32((uint32_t)(0x1266d698u));
  /* 1266d690 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1266d693 call 0x12674dcc */
  push32(0x1266d698u); f_12674dcc();
  /* 1266d698 pop ebp */
  EBP = (pop32());
  /* 1266d699 pop edi */
  EDI = (pop32());
  /* 1266d69a pop esi */
  ESI = (pop32());
  /* 1266d69b pop ebx */
  EBX = (pop32());
  /* 1266d69c mov esp, ebp */
  ESP = (EBP);
  /* 1266d69e pop ebp */
  EBP = (pop32());
  /* 1266d69f ret  */
  ESPCHK(0x1266d680u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1266d6c2 (104 bytes, 33 insns) */
void f_1266d6c2(void) {
  FTRACE(0x1266d6c2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266d6c2 push ebx */
  push32((uint32_t)(EBX));
  /* 1266d6c3 push esi */
  push32((uint32_t)(ESI));
  /* 1266d6c4 push edi */
  push32((uint32_t)(EDI));
  /* 1266d6c5 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1266d6c9 push eax */
  push32((uint32_t)(EAX));
  /* 1266d6ca push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1266d6cc push 0x1266d6a0 */
  push32((uint32_t)(0x1266d6a0u));
  /* 1266d6d1 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 1266d6d8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1266d6df:;
  /* 1266d6df mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1266d6e3 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1266d6e6 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 1266d6e9 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266d6ec je 0x1266d71c */
  if (C.zf) goto L_1266d71c;
  /* 1266d6ee cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266d6f2 je 0x1266d71c */
  if (C.zf) goto L_1266d71c;
  /* 1266d6f4 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1266d6f7 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1266d6fa mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1266d6fe mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 1266d701 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266d706 jne 0x1266d71a */
  if (!C.zf) goto L_1266d71a;
  /* 1266d708 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1266d70d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 1266d711 call 0x1266d756 */
  push32(0x1266d716u); f_1266d756();
  /* 1266d716 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1266d71au);
L_1266d71a:;
  /* 1266d71a jmp 0x1266d6df */
  goto L_1266d6df;
L_1266d71c:;
  /* 1266d71c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1266d723 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266d726 pop edi */
  EDI = (pop32());
  /* 1266d727 pop esi */
  ESI = (pop32());
  /* 1266d728 pop ebx */
  EBX = (pop32());
  /* 1266d729 ret  */
  ESPCHK(0x1266d6c2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d756 @ 0x1266d756 (24 bytes, 10 insns) */
void f_1266d756(void) {
  FTRACE(0x1266d756u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266d756 push ebx */
  push32((uint32_t)(EBX));
  /* 1266d757 push ecx */
  push32((uint32_t)(ECX));
  /* 1266d758 mov ebx, 0x1268f3b8 */
  EBX = (0x1268f3b8u);
  /* 1266d75d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266d760 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1266d763 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1266d766 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 1266d769 pop ecx */
  ECX = (pop32());
  /* 1266d76a pop ebx */
  EBX = (pop32());
  /* 1266d76b ret 4 */
  ESPCHK(0x1266d756u, _esp0);
  ESP += 8; return;
}

/* FUN_1000d835 @ 0x1266d835 (27 bytes, 11 insns) */
void f_1266d835(void) {
  FTRACE(0x1266d835u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266d835 push ebp */
  push32((uint32_t)(EBP));
  /* 1266d836 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1266d83a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 1266d83c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1266d83f push eax */
  push32((uint32_t)(EAX));
  /* 1266d840 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1266d843 push eax */
  push32((uint32_t)(EAX));
  /* 1266d844 call 0x1266d6c2 */
  push32(0x1266d849u); f_1266d6c2();
  /* 1266d849 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266d84c pop ebp */
  EBP = (pop32());
  /* 1266d84d ret 4 */
  ESPCHK(0x1266d835u, _esp0);
  ESP += 8; return;
}

/* FUN_1000d850 @ 0x1266d850 (482 bytes, 138 insns) */
void f_1266d850(void) {
  FTRACE(0x1266d850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266d850 push ebp */
  push32((uint32_t)(EBP));
  /* 1266d851 mov ebp, esp */
  EBP = (ESP);
  /* 1266d853 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266d856 push esi */
  push32((uint32_t)(ESI));
  /* 1266d857 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 1266d85e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1266d860 call 0x12668070 */
  push32(0x1266d865u); f_12668070();
  /* 1266d865 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266d868 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1266d86f jmp 0x1266d87a */
  goto L_1266d87a;
L_1266d871:;
  /* 1266d871 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266d874 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266d877 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1266d87a:;
  /* 1266d87a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266d87e jge 0x1266da20 */
  if ((C.sf==C.of)) goto L_1266da20;
  /* 1266d884 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266d887 cmp dword ptr [ecx*4 + 0x12691f80], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12691f80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266d88f je 0x1266d986 */
  if (C.zf) goto L_1266d986;
  /* 1266d895 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266d898 mov eax, dword ptr [edx*4 + 0x12691f80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12691f80)));
  /* 1266d89f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1266d8a2 jmp 0x1266d8ad */
  goto L_1266d8ad;
L_1266d8a4:;
  /* 1266d8a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266d8a7 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266d8aa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1266d8ad:;
  /* 1266d8ad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266d8b0 mov eax, dword ptr [edx*4 + 0x12691f80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12691f80)));
  /* 1266d8b7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266d8bc cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266d8bf jae 0x1266d976 */
  if (!C.cf) goto L_1266d976;
  /* 1266d8c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266d8c8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1266d8cc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1266d8cf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1266d8d1 jne 0x1266d971 */
  if (!C.zf) goto L_1266d971;
  /* 1266d8d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266d8da cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266d8de jne 0x1266d919 */
  if (!C.zf) goto L_1266d919;
  /* 1266d8e0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1266d8e2 call 0x12668070 */
  push32(0x1266d8e7u); f_12668070();
  /* 1266d8e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266d8ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266d8ed cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266d8f1 jne 0x1266d90f */
  if (!C.zf) goto L_1266d90f;
  /* 1266d8f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266d8f6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266d8f9 push edx */
  push32((uint32_t)(EDX));
  /* 1266d8fa call dword ptr [0x1269336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269336c))), 0x1266d900u);
  /* 1266d900 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266d903 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1266d906 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266d909 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266d90c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1266d90f:;
  /* 1266d90f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1266d911 call 0x12668110 */
  push32(0x1266d916u); f_12668110();
  /* 1266d916 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1266d919:;
  /* 1266d919 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266d91c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266d91f push eax */
  push32((uint32_t)(EAX));
  /* 1266d920 call dword ptr [0x12693314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693314))), 0x1266d926u);
  /* 1266d926 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266d929 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1266d92d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1266d930 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1266d932 je 0x1266d946 */
  if (C.zf) goto L_1266d946;
  /* 1266d934 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266d937 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266d93a push eax */
  push32((uint32_t)(EAX));
  /* 1266d93b call dword ptr [0x12693310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693310))), 0x1266d941u);
  /* 1266d941 jmp 0x1266d8a4 */
  goto L_1266d8a4;
L_1266d946:;
  /* 1266d946 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266d949 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1266d94f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266d952 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1266d955 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266d958 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266d95b sub eax, dword ptr [edx*4 + 0x12691f80] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x12691f80))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266d962 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1266d963 mov esi, 0x24 */
  ESI = (0x24u);
  /* 1266d968 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1266d96a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266d96c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1266d96f jmp 0x1266d976 */
  goto L_1266d976;
L_1266d971:;
  /* 1266d971 jmp 0x1266d8a4 */
  goto L_1266d8a4;
L_1266d976:;
  /* 1266d976 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266d97a je 0x1266d981 */
  if (C.zf) goto L_1266d981;
  /* 1266d97c jmp 0x1266da20 */
  goto L_1266da20;
L_1266d981:;
  /* 1266d981 jmp 0x1266da1b */
  goto L_1266da1b;
L_1266d986:;
  /* 1266d986 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 1266d988 push 0x1268c1e4 */
  push32((uint32_t)(0x1268c1e4u));
  /* 1266d98d push 2 */
  push32((uint32_t)(0x2u));
  /* 1266d98f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1266d994 call 0x12664670 */
  push32(0x1266d999u); f_12664670();
  /* 1266d999 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266d99c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1266d99f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266d9a3 je 0x1266da19 */
  if (C.zf) goto L_1266da19;
  /* 1266d9a5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266d9a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266d9ab mov dword ptr [eax*4 + 0x12691f80], ecx */
  w32((uint32_t)(EAX*4 + 0x12691f80), (ECX));
  /* 1266d9b2 mov edx, dword ptr [0x126920bc] */
  EDX = (r32((uint32_t)(0x126920bc)));
  /* 1266d9b8 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266d9bb mov dword ptr [0x126920bc], edx */
  w32((uint32_t)(0x126920bc), (EDX));
  /* 1266d9c1 jmp 0x1266d9cc */
  goto L_1266d9cc;
L_1266d9c3:;
  /* 1266d9c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266d9c6 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266d9c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1266d9cc:;
  /* 1266d9cc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266d9cf mov edx, dword ptr [ecx*4 + 0x12691f80] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12691f80)));
  /* 1266d9d6 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266d9dc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266d9df jae 0x1266da04 */
  if (!C.cf) goto L_1266da04;
  /* 1266d9e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266d9e4 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 1266d9e8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266d9eb mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1266d9f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266d9f4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 1266d9f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266d9fb mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1266da02 jmp 0x1266d9c3 */
  goto L_1266d9c3;
L_1266da04:;
  /* 1266da04 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266da07 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1266da0a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1266da0d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266da10 push edx */
  push32((uint32_t)(EDX));
  /* 1266da11 call 0x1266dd60 */
  push32(0x1266da16u); f_1266dd60();
  /* 1266da16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1266da19:;
  /* 1266da19 jmp 0x1266da20 */
  goto L_1266da20;
L_1266da1b:;
  /* 1266da1b jmp 0x1266d871 */
  goto L_1266d871;
L_1266da20:;
  /* 1266da20 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1266da22 call 0x12668110 */
  push32(0x1266da27u); f_12668110();
  /* 1266da27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266da2a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266da2d pop esi */
  ESI = (pop32());
  /* 1266da2e mov esp, ebp */
  ESP = (EBP);
  /* 1266da30 pop ebp */
  EBP = (pop32());
  /* 1266da31 ret  */
  ESPCHK(0x1266d850u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x1266da40 (183 bytes, 57 insns) */
void f_1266da40(void) {
  FTRACE(0x1266da40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266da40 push ebp */
  push32((uint32_t)(EBP));
  /* 1266da41 mov ebp, esp */
  EBP = (ESP);
  /* 1266da43 push ecx */
  push32((uint32_t)(ECX));
  /* 1266da44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266da47 cmp eax, dword ptr [0x126920bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x126920bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266da4d jae 0x1266dada */
  if (!C.cf) goto L_1266dada;
  /* 1266da53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266da56 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1266da59 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266da5c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1266da5f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1266da62 mov eax, dword ptr [ecx*4 + 0x12691f80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12691f80)));
  /* 1266da69 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266da6d jne 0x1266dada */
  if (!C.zf) goto L_1266dada;
  /* 1266da6f cmp dword ptr [0x1269059c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1269059c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266da76 jne 0x1266daba */
  if (!C.zf) goto L_1266daba;
  /* 1266da78 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266da7b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1266da7e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266da82 je 0x1266da92 */
  if (C.zf) goto L_1266da92;
  /* 1266da84 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266da88 je 0x1266daa0 */
  if (C.zf) goto L_1266daa0;
  /* 1266da8a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266da8e je 0x1266daae */
  if (C.zf) goto L_1266daae;
  /* 1266da90 jmp 0x1266daba */
  goto L_1266daba;
L_1266da92:;
  /* 1266da92 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266da95 push edx */
  push32((uint32_t)(EDX));
  /* 1266da96 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1266da98 call dword ptr [0x126932dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932dc))), 0x1266da9eu);
  /* 1266da9e jmp 0x1266daba */
  goto L_1266daba;
L_1266daa0:;
  /* 1266daa0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266daa3 push eax */
  push32((uint32_t)(EAX));
  /* 1266daa4 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1266daa6 call dword ptr [0x126932dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932dc))), 0x1266daacu);
  /* 1266daac jmp 0x1266daba */
  goto L_1266daba;
L_1266daae:;
  /* 1266daae mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266dab1 push ecx */
  push32((uint32_t)(ECX));
  /* 1266dab2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1266dab4 call dword ptr [0x126932dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932dc))), 0x1266dabau);
L_1266daba:;
  /* 1266daba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266dabd sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1266dac0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266dac3 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1266dac6 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1266dac9 mov ecx, dword ptr [edx*4 + 0x12691f80] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12691f80)));
  /* 1266dad0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266dad3 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 1266dad6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266dad8 jmp 0x1266daf3 */
  goto L_1266daf3;
L_1266dada:;
  /* 1266dada call 0x1266c540 */
  push32(0x1266dadfu); f_1266c540();
  /* 1266dadf mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1266dae5 call 0x1266c550 */
  push32(0x1266daeau); f_1266c550();
  /* 1266daea mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1266daf0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1266daf3:;
  /* 1266daf3 mov esp, ebp */
  ESP = (EBP);
  /* 1266daf5 pop ebp */
  EBP = (pop32());
  /* 1266daf6 ret  */
  ESPCHK(0x1266da40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db00 @ 0x1266db00 (216 bytes, 63 insns) */
void f_1266db00(void) {
  FTRACE(0x1266db00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266db00 push ebp */
  push32((uint32_t)(EBP));
  /* 1266db01 mov ebp, esp */
  EBP = (ESP);
  /* 1266db03 push ecx */
  push32((uint32_t)(ECX));
  /* 1266db04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266db07 cmp eax, dword ptr [0x126920bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x126920bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266db0d jae 0x1266dbbb */
  if (!C.cf) goto L_1266dbbb;
  /* 1266db13 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266db16 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1266db19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266db1c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1266db1f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1266db22 mov eax, dword ptr [ecx*4 + 0x12691f80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12691f80)));
  /* 1266db29 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1266db2e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1266db31 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1266db33 je 0x1266dbbb */
  if (C.zf) goto L_1266dbbb;
  /* 1266db39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266db3c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1266db3f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266db42 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1266db45 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1266db48 mov ecx, dword ptr [edx*4 + 0x12691f80] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12691f80)));
  /* 1266db4f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266db53 je 0x1266dbbb */
  if (C.zf) goto L_1266dbbb;
  /* 1266db55 cmp dword ptr [0x1269059c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1269059c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266db5c jne 0x1266db9a */
  if (!C.zf) goto L_1266db9a;
  /* 1266db5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266db61 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1266db64 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266db68 je 0x1266db78 */
  if (C.zf) goto L_1266db78;
  /* 1266db6a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266db6e je 0x1266db84 */
  if (C.zf) goto L_1266db84;
  /* 1266db70 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266db74 je 0x1266db90 */
  if (C.zf) goto L_1266db90;
  /* 1266db76 jmp 0x1266db9a */
  goto L_1266db9a;
L_1266db78:;
  /* 1266db78 push 0 */
  push32((uint32_t)(0x0u));
  /* 1266db7a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1266db7c call dword ptr [0x126932dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932dc))), 0x1266db82u);
  /* 1266db82 jmp 0x1266db9a */
  goto L_1266db9a;
L_1266db84:;
  /* 1266db84 push 0 */
  push32((uint32_t)(0x0u));
  /* 1266db86 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1266db88 call dword ptr [0x126932dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932dc))), 0x1266db8eu);
  /* 1266db8e jmp 0x1266db9a */
  goto L_1266db9a;
L_1266db90:;
  /* 1266db90 push 0 */
  push32((uint32_t)(0x0u));
  /* 1266db92 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1266db94 call dword ptr [0x126932dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932dc))), 0x1266db9au);
L_1266db9a:;
  /* 1266db9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266db9d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1266dba0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266dba3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1266dba6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1266dba9 mov edx, dword ptr [eax*4 + 0x12691f80] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12691f80)));
  /* 1266dbb0 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 1266dbb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266dbb9 jmp 0x1266dbd4 */
  goto L_1266dbd4;
L_1266dbbb:;
  /* 1266dbbb call 0x1266c540 */
  push32(0x1266dbc0u); f_1266c540();
  /* 1266dbc0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1266dbc6 call 0x1266c550 */
  push32(0x1266dbcbu); f_1266c550();
  /* 1266dbcb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1266dbd1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1266dbd4:;
  /* 1266dbd4 mov esp, ebp */
  ESP = (EBP);
  /* 1266dbd6 pop ebp */
  EBP = (pop32());
  /* 1266dbd7 ret  */
  ESPCHK(0x1266db00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dbe0 @ 0x1266dbe0 (102 bytes, 30 insns) */
void f_1266dbe0(void) {
  FTRACE(0x1266dbe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266dbe0 push ebp */
  push32((uint32_t)(EBP));
  /* 1266dbe1 mov ebp, esp */
  EBP = (ESP);
  /* 1266dbe3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266dbe6 cmp eax, dword ptr [0x126920bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x126920bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266dbec jae 0x1266dc2b */
  if (!C.cf) goto L_1266dc2b;
  /* 1266dbee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266dbf1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1266dbf4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266dbf7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1266dbfa imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1266dbfd mov eax, dword ptr [ecx*4 + 0x12691f80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12691f80)));
  /* 1266dc04 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1266dc09 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1266dc0c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1266dc0e je 0x1266dc2b */
  if (C.zf) goto L_1266dc2b;
  /* 1266dc10 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266dc13 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1266dc16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266dc19 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1266dc1c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1266dc1f mov ecx, dword ptr [edx*4 + 0x12691f80] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12691f80)));
  /* 1266dc26 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 1266dc29 jmp 0x1266dc44 */
  goto L_1266dc44;
L_1266dc2b:;
  /* 1266dc2b call 0x1266c540 */
  push32(0x1266dc30u); f_1266c540();
  /* 1266dc30 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1266dc36 call 0x1266c550 */
  push32(0x1266dc3bu); f_1266c550();
  /* 1266dc3b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1266dc41 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1266dc44:;
  /* 1266dc44 pop ebp */
  EBP = (pop32());
  /* 1266dc45 ret  */
  ESPCHK(0x1266dbe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc50 @ 0x1266dc50 (260 bytes, 83 insns) */
void f_1266dc50(void) {
  FTRACE(0x1266dc50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266dc50 push ebp */
  push32((uint32_t)(EBP));
  /* 1266dc51 mov ebp, esp */
  EBP = (ESP);
  /* 1266dc53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266dc56 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 1266dc5a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266dc5d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1266dc60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266dc62 je 0x1266dc6d */
  if (C.zf) goto L_1266dc6d;
  /* 1266dc64 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1266dc67 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1266dc6a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_1266dc6d:;
  /* 1266dc6d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266dc70 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1266dc76 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1266dc78 je 0x1266dc82 */
  if (C.zf) goto L_1266dc82;
  /* 1266dc7a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1266dc7d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 1266dc7f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_1266dc82:;
  /* 1266dc82 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266dc85 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1266dc8b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1266dc8d je 0x1266dc98 */
  if (C.zf) goto L_1266dc98;
  /* 1266dc8f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1266dc92 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1266dc95 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1266dc98:;
  /* 1266dc98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266dc9b push eax */
  push32((uint32_t)(EAX));
  /* 1266dc9c call dword ptr [0x1269337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269337c))), 0x1266dca2u);
  /* 1266dca2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1266dca5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266dca9 jne 0x1266dcc2 */
  if (!C.zf) goto L_1266dcc2;
  /* 1266dcab call dword ptr [0x12693370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693370))), 0x1266dcb1u);
  /* 1266dcb1 push eax */
  push32((uint32_t)(EAX));
  /* 1266dcb2 call 0x1266c4a0 */
  push32(0x1266dcb7u); f_1266c4a0();
  /* 1266dcb7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266dcba or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1266dcbd jmp 0x1266dd50 */
  goto L_1266dd50;
L_1266dcc2:;
  /* 1266dcc2 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266dcc6 jne 0x1266dcd3 */
  if (!C.zf) goto L_1266dcd3;
  /* 1266dcc8 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1266dccb or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 1266dcce mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1266dcd1 jmp 0x1266dce2 */
  goto L_1266dce2;
L_1266dcd3:;
  /* 1266dcd3 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266dcd7 jne 0x1266dce2 */
  if (!C.zf) goto L_1266dce2;
  /* 1266dcd9 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1266dcdc or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1266dcdf mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1266dce2:;
  /* 1266dce2 call 0x1266d850 */
  push32(0x1266dce7u); f_1266d850();
  /* 1266dce7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1266dcea cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266dcee jne 0x1266dd0b */
  if (!C.zf) goto L_1266dd0b;
  /* 1266dcf0 call 0x1266c540 */
  push32(0x1266dcf5u); f_1266c540();
  /* 1266dcf5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 1266dcfb call 0x1266c550 */
  push32(0x1266dd00u); f_1266c550();
  /* 1266dd00 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1266dd06 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1266dd09 jmp 0x1266dd50 */
  goto L_1266dd50;
L_1266dd0b:;
  /* 1266dd0b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266dd0e push eax */
  push32((uint32_t)(EAX));
  /* 1266dd0f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266dd12 push ecx */
  push32((uint32_t)(ECX));
  /* 1266dd13 call 0x1266da40 */
  push32(0x1266dd18u); f_1266da40();
  /* 1266dd18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266dd1b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1266dd1e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 1266dd21 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1266dd24 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266dd27 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1266dd2a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266dd2d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1266dd30 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1266dd33 mov edx, dword ptr [eax*4 + 0x12691f80] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12691f80)));
  /* 1266dd3a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1266dd3d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 1266dd41 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266dd44 push ecx */
  push32((uint32_t)(ECX));
  /* 1266dd45 call 0x1266ddf0 */
  push32(0x1266dd4au); f_1266ddf0();
  /* 1266dd4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266dd4d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1266dd50:;
  /* 1266dd50 mov esp, ebp */
  ESP = (EBP);
  /* 1266dd52 pop ebp */
  EBP = (pop32());
  /* 1266dd53 ret  */
  ESPCHK(0x1266dc50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dd60 @ 0x1266dd60 (134 bytes, 44 insns) */
void f_1266dd60(void) {
  FTRACE(0x1266dd60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266dd60 push ebp */
  push32((uint32_t)(EBP));
  /* 1266dd61 mov ebp, esp */
  EBP = (ESP);
  /* 1266dd63 push ecx */
  push32((uint32_t)(ECX));
  /* 1266dd64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266dd67 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1266dd6a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266dd6d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1266dd70 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1266dd73 mov edx, dword ptr [eax*4 + 0x12691f80] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12691f80)));
  /* 1266dd7a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266dd7c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1266dd7f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266dd82 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266dd86 jne 0x1266ddc1 */
  if (!C.zf) goto L_1266ddc1;
  /* 1266dd88 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1266dd8a call 0x12668070 */
  push32(0x1266dd8fu); f_12668070();
  /* 1266dd8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266dd92 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266dd95 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266dd99 jne 0x1266ddb7 */
  if (!C.zf) goto L_1266ddb7;
  /* 1266dd9b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266dd9e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266dda1 push edx */
  push32((uint32_t)(EDX));
  /* 1266dda2 call dword ptr [0x1269336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1269336c))), 0x1266dda8u);
  /* 1266dda8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266ddab mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1266ddae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266ddb1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266ddb4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1266ddb7:;
  /* 1266ddb7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1266ddb9 call 0x12668110 */
  push32(0x1266ddbeu); f_12668110();
  /* 1266ddbe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1266ddc1:;
  /* 1266ddc1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266ddc4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1266ddc7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266ddca and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1266ddcd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1266ddd0 mov edx, dword ptr [eax*4 + 0x12691f80] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12691f80)));
  /* 1266ddd7 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1266dddb push eax */
  push32((uint32_t)(EAX));
  /* 1266dddc call dword ptr [0x12693314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693314))), 0x1266dde2u);
  /* 1266dde2 mov esp, ebp */
  ESP = (EBP);
  /* 1266dde4 pop ebp */
  EBP = (pop32());
  /* 1266dde5 ret  */
  ESPCHK(0x1266dd60u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x1266ddf0 (38 bytes, 13 insns) */
void f_1266ddf0(void) {
  FTRACE(0x1266ddf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266ddf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1266ddf1 mov ebp, esp */
  EBP = (ESP);
  /* 1266ddf3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266ddf6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1266ddf9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266ddfc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1266ddff imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1266de02 mov edx, dword ptr [eax*4 + 0x12691f80] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12691f80)));
  /* 1266de09 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1266de0d push eax */
  push32((uint32_t)(EAX));
  /* 1266de0e call dword ptr [0x12693310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693310))), 0x1266de14u);
  /* 1266de14 pop ebp */
  EBP = (pop32());
  /* 1266de15 ret  */
  ESPCHK(0x1266ddf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de20 @ 0x1266de20 (218 bytes, 63 insns) */
void f_1266de20(void) {
  FTRACE(0x1266de20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266de20 push ebp */
  push32((uint32_t)(EBP));
  /* 1266de21 mov ebp, esp */
  EBP = (ESP);
  /* 1266de23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266de26 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1266de2d push 2 */
  push32((uint32_t)(0x2u));
  /* 1266de2f call 0x12668070 */
  push32(0x1266de34u); f_12668070();
  /* 1266de34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266de37 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 1266de3e jmp 0x1266de49 */
  goto L_1266de49;
L_1266de40:;
  /* 1266de40 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266de43 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266de46 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1266de49:;
  /* 1266de49 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266de4c cmp ecx, dword ptr [0x12691c80] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12691c80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266de52 jge 0x1266dee9 */
  if ((C.sf==C.of)) goto L_1266dee9;
  /* 1266de58 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266de5b mov eax, dword ptr [0x12690938] */
  EAX = (r32((uint32_t)(0x12690938)));
  /* 1266de60 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266de64 je 0x1266dee4 */
  if (C.zf) goto L_1266dee4;
  /* 1266de66 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266de69 mov edx, dword ptr [0x12690938] */
  EDX = (r32((uint32_t)(0x12690938)));
  /* 1266de6f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1266de72 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1266de75 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1266de7b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1266de7d je 0x1266dea1 */
  if (C.zf) goto L_1266dea1;
  /* 1266de7f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266de82 mov eax, dword ptr [0x12690938] */
  EAX = (r32((uint32_t)(0x12690938)));
  /* 1266de87 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1266de8a push ecx */
  push32((uint32_t)(ECX));
  /* 1266de8b call 0x1266ec10 */
  push32(0x1266de90u); f_1266ec10();
  /* 1266de90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266de93 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266de96 je 0x1266dea1 */
  if (C.zf) goto L_1266dea1;
  /* 1266de98 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266de9b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266de9e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1266dea1:;
  /* 1266dea1 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266dea5 jl 0x1266dee4 */
  if ((C.sf!=C.of)) goto L_1266dee4;
  /* 1266dea7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266deaa mov ecx, dword ptr [0x12690938] */
  ECX = (r32((uint32_t)(0x12690938)));
  /* 1266deb0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1266deb3 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266deb6 push edx */
  push32((uint32_t)(EDX));
  /* 1266deb7 call dword ptr [0x12693384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693384))), 0x1266debdu);
  /* 1266debd push 2 */
  push32((uint32_t)(0x2u));
  /* 1266debf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266dec2 mov ecx, dword ptr [0x12690938] */
  ECX = (r32((uint32_t)(0x12690938)));
  /* 1266dec8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1266decb push edx */
  push32((uint32_t)(EDX));
  /* 1266decc call 0x12665100 */
  push32(0x1266ded1u); f_12665100();
  /* 1266ded1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266ded4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266ded7 mov ecx, dword ptr [0x12690938] */
  ECX = (r32((uint32_t)(0x12690938)));
  /* 1266dedd mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_1266dee4:;
  /* 1266dee4 jmp 0x1266de40 */
  goto L_1266de40;
L_1266dee9:;
  /* 1266dee9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266deeb call 0x12668110 */
  push32(0x1266def0u); f_12668110();
  /* 1266def0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266def3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266def6 mov esp, ebp */
  ESP = (EBP);
  /* 1266def8 pop ebp */
  EBP = (pop32());
  /* 1266def9 ret  */
  ESPCHK(0x1266de20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df00 @ 0x1266df00 (68 bytes, 26 insns) */
void f_1266df00(void) {
  FTRACE(0x1266df00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266df00 push ebp */
  push32((uint32_t)(EBP));
  /* 1266df01 mov ebp, esp */
  EBP = (ESP);
  /* 1266df03 push ecx */
  push32((uint32_t)(ECX));
  /* 1266df04 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266df08 jne 0x1266df16 */
  if (!C.zf) goto L_1266df16;
  /* 1266df0a push 0 */
  push32((uint32_t)(0x0u));
  /* 1266df0c call 0x1266e070 */
  push32(0x1266df11u); f_1266e070();
  /* 1266df11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266df14 jmp 0x1266df40 */
  goto L_1266df40;
L_1266df16:;
  /* 1266df16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266df19 push eax */
  push32((uint32_t)(EAX));
  /* 1266df1a call 0x1266d480 */
  push32(0x1266df1fu); f_1266d480();
  /* 1266df1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266df22 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266df25 push ecx */
  push32((uint32_t)(ECX));
  /* 1266df26 call 0x1266df50 */
  push32(0x1266df2bu); f_1266df50();
  /* 1266df2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266df2e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1266df31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266df34 push edx */
  push32((uint32_t)(EDX));
  /* 1266df35 call 0x1266d4f0 */
  push32(0x1266df3au); f_1266d4f0();
  /* 1266df3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266df3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1266df40:;
  /* 1266df40 mov esp, ebp */
  ESP = (EBP);
  /* 1266df42 pop ebp */
  EBP = (pop32());
  /* 1266df43 ret  */
  ESPCHK(0x1266df00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df50 @ 0x1266df50 (65 bytes, 26 insns) */
void f_1266df50(void) {
  FTRACE(0x1266df50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266df50 push ebp */
  push32((uint32_t)(EBP));
  /* 1266df51 mov ebp, esp */
  EBP = (ESP);
  /* 1266df53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266df56 push eax */
  push32((uint32_t)(EAX));
  /* 1266df57 call 0x1266dfa0 */
  push32(0x1266df5cu); f_1266dfa0();
  /* 1266df5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266df5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266df61 je 0x1266df68 */
  if (C.zf) goto L_1266df68;
  /* 1266df63 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1266df66 jmp 0x1266df8f */
  goto L_1266df8f;
L_1266df68:;
  /* 1266df68 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266df6b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1266df6e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1266df74 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1266df76 je 0x1266df8d */
  if (C.zf) goto L_1266df8d;
  /* 1266df78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266df7b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1266df7e push ecx */
  push32((uint32_t)(ECX));
  /* 1266df7f call 0x1266ed60 */
  push32(0x1266df84u); f_1266ed60();
  /* 1266df84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266df87 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1266df89 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266df8b jmp 0x1266df8f */
  goto L_1266df8f;
L_1266df8d:;
  /* 1266df8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1266df8f:;
  /* 1266df8f pop ebp */
  EBP = (pop32());
  /* 1266df90 ret  */
  ESPCHK(0x1266df50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dfa0 @ 0x1266dfa0 (183 bytes, 62 insns) */
void f_1266dfa0(void) {
  FTRACE(0x1266dfa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266dfa0 push ebp */
  push32((uint32_t)(EBP));
  /* 1266dfa1 mov ebp, esp */
  EBP = (ESP);
  /* 1266dfa3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266dfa6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1266dfad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266dfb0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1266dfb3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266dfb6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1266dfb9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1266dfbc cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266dfbf jne 0x1266e03b */
  if (!C.zf) goto L_1266e03b;
  /* 1266dfc1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266dfc4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1266dfc7 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 1266dfcd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1266dfcf je 0x1266e03b */
  if (C.zf) goto L_1266e03b;
  /* 1266dfd1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266dfd4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266dfd7 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1266dfd9 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266dfdc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1266dfdf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266dfe3 jle 0x1266e03b */
  if ((C.zf||C.sf!=C.of)) goto L_1266e03b;
  /* 1266dfe5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266dfe8 push edx */
  push32((uint32_t)(EDX));
  /* 1266dfe9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266dfec mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1266dfef push ecx */
  push32((uint32_t)(ECX));
  /* 1266dff0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266dff3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1266dff6 push eax */
  push32((uint32_t)(EAX));
  /* 1266dff7 call 0x1266cf10 */
  push32(0x1266dffcu); f_1266cf10();
  /* 1266dffc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266dfff cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266e002 jne 0x1266e025 */
  if (!C.zf) goto L_1266e025;
  /* 1266e004 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266e007 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1266e00a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1266e010 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1266e012 je 0x1266e023 */
  if (C.zf) goto L_1266e023;
  /* 1266e014 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266e017 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1266e01a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 1266e01d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266e020 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_1266e023:;
  /* 1266e023 jmp 0x1266e03b */
  goto L_1266e03b;
L_1266e025:;
  /* 1266e025 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266e028 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1266e02b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1266e02e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266e031 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1266e034 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1266e03b:;
  /* 1266e03b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266e03e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266e041 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1266e044 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1266e046 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266e049 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1266e050 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266e053 mov esp, ebp */
  ESP = (EBP);
  /* 1266e055 pop ebp */
  EBP = (pop32());
  /* 1266e056 ret  */
  ESPCHK(0x1266dfa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e060 @ 0x1266e060 (15 bytes, 7 insns) */
void f_1266e060(void) {
  FTRACE(0x1266e060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266e060 push ebp */
  push32((uint32_t)(EBP));
  /* 1266e061 mov ebp, esp */
  EBP = (ESP);
  /* 1266e063 push 1 */
  push32((uint32_t)(0x1u));
  /* 1266e065 call 0x1266e070 */
  push32(0x1266e06au); f_1266e070();
  /* 1266e06a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e06d pop ebp */
  EBP = (pop32());
  /* 1266e06e ret  */
  ESPCHK(0x1266e060u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e070 @ 0x1266e070 (319 bytes, 94 insns) */
void f_1266e070(void) {
  FTRACE(0x1266e070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266e070 push ebp */
  push32((uint32_t)(EBP));
  /* 1266e071 mov ebp, esp */
  EBP = (ESP);
  /* 1266e073 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266e076 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1266e07d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1266e084 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266e086 call 0x12668070 */
  push32(0x1266e08bu); f_12668070();
  /* 1266e08b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e08e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1266e095 jmp 0x1266e0a0 */
  goto L_1266e0a0;
L_1266e097:;
  /* 1266e097 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266e09a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e09d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1266e0a0:;
  /* 1266e0a0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266e0a3 cmp ecx, dword ptr [0x12691c80] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12691c80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266e0a9 jge 0x1266e193 */
  if ((C.sf==C.of)) goto L_1266e193;
  /* 1266e0af mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266e0b2 mov eax, dword ptr [0x12690938] */
  EAX = (r32((uint32_t)(0x12690938)));
  /* 1266e0b7 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266e0bb je 0x1266e18e */
  if (C.zf) goto L_1266e18e;
  /* 1266e0c1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266e0c4 mov edx, dword ptr [0x12690938] */
  EDX = (r32((uint32_t)(0x12690938)));
  /* 1266e0ca mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1266e0cd mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1266e0d0 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1266e0d6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1266e0d8 je 0x1266e18e */
  if (C.zf) goto L_1266e18e;
  /* 1266e0de mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266e0e1 mov eax, dword ptr [0x12690938] */
  EAX = (r32((uint32_t)(0x12690938)));
  /* 1266e0e6 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1266e0e9 push ecx */
  push32((uint32_t)(ECX));
  /* 1266e0ea mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266e0ed push edx */
  push32((uint32_t)(EDX));
  /* 1266e0ee call 0x1266d4c0 */
  push32(0x1266e0f3u); f_1266d4c0();
  /* 1266e0f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e0f6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266e0f9 mov ecx, dword ptr [0x12690938] */
  ECX = (r32((uint32_t)(0x12690938)));
  /* 1266e0ff mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1266e102 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1266e105 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1266e10a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266e10c je 0x1266e175 */
  if (C.zf) goto L_1266e175;
  /* 1266e10e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266e112 jne 0x1266e139 */
  if (!C.zf) goto L_1266e139;
  /* 1266e114 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266e117 mov edx, dword ptr [0x12690938] */
  EDX = (r32((uint32_t)(0x12690938)));
  /* 1266e11d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1266e120 push eax */
  push32((uint32_t)(EAX));
  /* 1266e121 call 0x1266df50 */
  push32(0x1266e126u); f_1266df50();
  /* 1266e126 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e129 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266e12c je 0x1266e137 */
  if (C.zf) goto L_1266e137;
  /* 1266e12e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266e131 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e134 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1266e137:;
  /* 1266e137 jmp 0x1266e175 */
  goto L_1266e175;
L_1266e139:;
  /* 1266e139 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266e13d jne 0x1266e175 */
  if (!C.zf) goto L_1266e175;
  /* 1266e13f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266e142 mov eax, dword ptr [0x12690938] */
  EAX = (r32((uint32_t)(0x12690938)));
  /* 1266e147 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1266e14a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1266e14d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1266e150 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1266e152 je 0x1266e175 */
  if (C.zf) goto L_1266e175;
  /* 1266e154 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266e157 mov ecx, dword ptr [0x12690938] */
  ECX = (r32((uint32_t)(0x12690938)));
  /* 1266e15d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1266e160 push edx */
  push32((uint32_t)(EDX));
  /* 1266e161 call 0x1266df50 */
  push32(0x1266e166u); f_1266df50();
  /* 1266e166 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e169 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266e16c jne 0x1266e175 */
  if (!C.zf) goto L_1266e175;
  /* 1266e16e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_1266e175:;
  /* 1266e175 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266e178 mov ecx, dword ptr [0x12690938] */
  ECX = (r32((uint32_t)(0x12690938)));
  /* 1266e17e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1266e181 push edx */
  push32((uint32_t)(EDX));
  /* 1266e182 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266e185 push eax */
  push32((uint32_t)(EAX));
  /* 1266e186 call 0x1266d530 */
  push32(0x1266e18bu); f_1266d530();
  /* 1266e18b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1266e18e:;
  /* 1266e18e jmp 0x1266e097 */
  goto L_1266e097;
L_1266e193:;
  /* 1266e193 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266e195 call 0x12668110 */
  push32(0x1266e19au); f_12668110();
  /* 1266e19a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e19d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266e1a1 jne 0x1266e1a8 */
  if (!C.zf) goto L_1266e1a8;
  /* 1266e1a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266e1a6 jmp 0x1266e1ab */
  goto L_1266e1ab;
L_1266e1a8:;
  /* 1266e1a8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1266e1ab:;
  /* 1266e1ab mov esp, ebp */
  ESP = (EBP);
  /* 1266e1ad pop ebp */
  EBP = (pop32());
  /* 1266e1ae ret  */
  ESPCHK(0x1266e070u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x1266e1b0 (15 bytes, 7 insns) */
void f_1266e1b0(void) {
  FTRACE(0x1266e1b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266e1b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1266e1b1 mov ebp, esp */
  EBP = (ESP);
  /* 1266e1b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266e1b5 call 0x126635e0 */
  push32(0x1266e1bau); f_126635e0();
  /* 1266e1ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e1bd pop ebp */
  EBP = (pop32());
  /* 1266e1be ret  */
  ESPCHK(0x1266e1b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e1c0 @ 0x1266e1c0 (1007 bytes, 269 insns) */
void f_1266e1c0(void) {
  FTRACE(0x1266e1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266e1c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1266e1c1 mov ebp, esp */
  EBP = (ESP);
  /* 1266e1c3 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266e1c9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266e1cd jl 0x1266e1d5 */
  if ((C.sf!=C.of)) goto L_1266e1d5;
  /* 1266e1cf cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266e1d3 jle 0x1266e1dc */
  if ((C.zf||C.sf!=C.of)) goto L_1266e1dc;
L_1266e1d5:;
  /* 1266e1d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266e1d7 jmp 0x1266e5ab */
  goto L_1266e5ab;
L_1266e1dc:;
  /* 1266e1dc push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1266e1de call 0x12668070 */
  push32(0x1266e1e3u); f_12668070();
  /* 1266e1e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e1e6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1266e1ed mov eax, dword ptr [0x12690924] */
  EAX = (r32((uint32_t)(0x12690924)));
  /* 1266e1f2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e1f5 mov dword ptr [0x12690924], eax */
  w32((uint32_t)(0x12690924), (EAX));
L_1266e1fa:;
  /* 1266e1fa cmp dword ptr [0x12690934], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12690934))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266e201 je 0x1266e20d */
  if (C.zf) goto L_1266e20d;
  /* 1266e203 push 1 */
  push32((uint32_t)(0x1u));
  /* 1266e205 call dword ptr [0x126932cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932cc))), 0x1266e20bu);
  /* 1266e20b jmp 0x1266e1fa */
  goto L_1266e1fa;
L_1266e20d:;
  /* 1266e20d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266e211 je 0x1266e251 */
  if (C.zf) goto L_1266e251;
  /* 1266e213 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266e217 je 0x1266e231 */
  if (C.zf) goto L_1266e231;
  /* 1266e219 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266e21c push ecx */
  push32((uint32_t)(ECX));
  /* 1266e21d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266e220 push edx */
  push32((uint32_t)(EDX));
  /* 1266e221 call 0x1266e5b0 */
  push32(0x1266e226u); f_1266e5b0();
  /* 1266e226 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e229 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 1266e22f jmp 0x1266e243 */
  goto L_1266e243;
L_1266e231:;
  /* 1266e231 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266e234 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1266e237 mov ecx, dword ptr [eax + 0x1268f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1268f4dc)));
  /* 1266e23d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_1266e243:;
  /* 1266e243 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1266e249 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1266e24c jmp 0x1266e58b */
  goto L_1266e58b;
L_1266e251:;
  /* 1266e251 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 1266e258 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1266e25f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266e263 je 0x1266e583 */
  if (C.zf) goto L_1266e583;
  /* 1266e269 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266e26c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1266e26f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266e272 jne 0x1266e494 */
  if (!C.zf) goto L_1266e494;
  /* 1266e278 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266e27b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1266e27f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266e282 jne 0x1266e494 */
  if (!C.zf) goto L_1266e494;
  /* 1266e288 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266e28b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 1266e28f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266e292 jne 0x1266e494 */
  if (!C.zf) goto L_1266e494;
  /* 1266e298 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266e29b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_1266e2a1:;
  /* 1266e2a1 push 0x1268c234 */
  push32((uint32_t)(0x1268c234u));
  /* 1266e2a6 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1266e2ac push ecx */
  push32((uint32_t)(ECX));
  /* 1266e2ad call 0x12670410 */
  push32(0x1266e2b2u); f_12670410();
  /* 1266e2b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e2b5 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 1266e2bb cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266e2c2 je 0x1266e2ed */
  if (C.zf) goto L_1266e2ed;
  /* 1266e2c4 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1266e2ca sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266e2d0 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 1266e2d6 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266e2dd je 0x1266e2ed */
  if (C.zf) goto L_1266e2ed;
  /* 1266e2df mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1266e2e5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1266e2e8 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266e2eb jne 0x1266e313 */
  if (!C.zf) goto L_1266e313;
L_1266e2ed:;
  /* 1266e2ed cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266e2f1 je 0x1266e30c */
  if (C.zf) goto L_1266e30c;
  /* 1266e2f3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1266e2f5 call 0x12668110 */
  push32(0x1266e2fau); f_12668110();
  /* 1266e2fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e2fd mov edx, dword ptr [0x12690924] */
  EDX = (r32((uint32_t)(0x12690924)));
  /* 1266e303 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266e306 mov dword ptr [0x12690924], edx */
  w32((uint32_t)(0x12690924), (EDX));
L_1266e30c:;
  /* 1266e30c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266e30e jmp 0x1266e5ab */
  goto L_1266e5ab;
L_1266e313:;
  /* 1266e313 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1266e31a jmp 0x1266e325 */
  goto L_1266e325;
L_1266e31c:;
  /* 1266e31c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1266e31f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e322 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1266e325:;
  /* 1266e325 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266e329 jg 0x1266e373 */
  if ((!C.zf&&C.sf==C.of)) goto L_1266e373;
  /* 1266e32b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1266e331 push ecx */
  push32((uint32_t)(ECX));
  /* 1266e332 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1266e338 push edx */
  push32((uint32_t)(EDX));
  /* 1266e339 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1266e33c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1266e33f mov ecx, dword ptr [eax + 0x1268f4d8] */
  ECX = (r32((uint32_t)(EAX + 0x1268f4d8)));
  /* 1266e345 push ecx */
  push32((uint32_t)(ECX));
  /* 1266e346 call 0x126703d0 */
  push32(0x1266e34bu); f_126703d0();
  /* 1266e34b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e34e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266e350 jne 0x1266e371 */
  if (!C.zf) goto L_1266e371;
  /* 1266e352 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1266e355 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1266e358 mov eax, dword ptr [edx + 0x1268f4d8] */
  EAX = (r32((uint32_t)(EDX + 0x1268f4d8)));
  /* 1266e35e push eax */
  push32((uint32_t)(EAX));
  /* 1266e35f call 0x126674a0 */
  push32(0x1266e364u); f_126674a0();
  /* 1266e364 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e367 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266e36d jne 0x1266e371 */
  if (!C.zf) goto L_1266e371;
  /* 1266e36f jmp 0x1266e373 */
  goto L_1266e373;
L_1266e371:;
  /* 1266e371 jmp 0x1266e31c */
  goto L_1266e31c;
L_1266e373:;
  /* 1266e373 push 0x1268c230 */
  push32((uint32_t)(0x1268c230u));
  /* 1266e378 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1266e37e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e381 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 1266e387 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1266e38d push edx */
  push32((uint32_t)(EDX));
  /* 1266e38e call 0x12670390 */
  push32(0x1266e393u); f_12670390();
  /* 1266e393 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e396 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 1266e39c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266e3a3 jne 0x1266e3d9 */
  if (!C.zf) goto L_1266e3d9;
  /* 1266e3a5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1266e3ab movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1266e3ae cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266e3b1 je 0x1266e3d9 */
  if (C.zf) goto L_1266e3d9;
  /* 1266e3b3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266e3b7 je 0x1266e3d2 */
  if (C.zf) goto L_1266e3d2;
  /* 1266e3b9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1266e3bb call 0x12668110 */
  push32(0x1266e3c0u); f_12668110();
  /* 1266e3c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e3c3 mov edx, dword ptr [0x12690924] */
  EDX = (r32((uint32_t)(0x12690924)));
  /* 1266e3c9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266e3cc mov dword ptr [0x12690924], edx */
  w32((uint32_t)(0x12690924), (EDX));
L_1266e3d2:;
  /* 1266e3d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266e3d4 jmp 0x1266e5ab */
  goto L_1266e5ab;
L_1266e3d9:;
  /* 1266e3d9 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266e3dd jg 0x1266e42a */
  if ((!C.zf&&C.sf==C.of)) goto L_1266e42a;
  /* 1266e3df mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1266e3e5 push eax */
  push32((uint32_t)(EAX));
  /* 1266e3e6 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1266e3ec push ecx */
  push32((uint32_t)(ECX));
  /* 1266e3ed lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1266e3f3 push edx */
  push32((uint32_t)(EDX));
  /* 1266e3f4 call 0x12667e90 */
  push32(0x1266e3f9u); f_12667e90();
  /* 1266e3f9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e3fc mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1266e402 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 1266e40a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 1266e410 push ecx */
  push32((uint32_t)(ECX));
  /* 1266e411 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1266e414 push edx */
  push32((uint32_t)(EDX));
  /* 1266e415 call 0x1266e5b0 */
  push32(0x1266e41au); f_1266e5b0();
  /* 1266e41a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e41d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266e41f je 0x1266e42a */
  if (C.zf) goto L_1266e42a;
  /* 1266e421 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266e424 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e427 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1266e42a:;
  /* 1266e42a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1266e430 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e436 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 1266e43c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1266e442 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1266e445 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266e447 je 0x1266e458 */
  if (C.zf) goto L_1266e458;
  /* 1266e449 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1266e44f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e452 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_1266e458:;
  /* 1266e458 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1266e45e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1266e461 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266e463 jne 0x1266e2a1 */
  if (!C.zf) goto L_1266e2a1;
  /* 1266e469 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266e46d je 0x1266e47c */
  if (C.zf) goto L_1266e47c;
  /* 1266e46f call 0x1266e750 */
  push32(0x1266e474u); f_1266e750();
  /* 1266e474 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 1266e47a jmp 0x1266e486 */
  goto L_1266e486;
L_1266e47c:;
  /* 1266e47c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_1266e486:;
  /* 1266e486 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 1266e48c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1266e48f jmp 0x1266e581 */
  goto L_1266e581;
L_1266e494:;
  /* 1266e494 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266e497 push edx */
  push32((uint32_t)(EDX));
  /* 1266e498 push 0 */
  push32((uint32_t)(0x0u));
  /* 1266e49a push 0 */
  push32((uint32_t)(0x0u));
  /* 1266e49c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1266e4a2 push eax */
  push32((uint32_t)(EAX));
  /* 1266e4a3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266e4a6 push ecx */
  push32((uint32_t)(ECX));
  /* 1266e4a7 call 0x1266e850 */
  push32(0x1266e4acu); f_1266e850();
  /* 1266e4ac add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e4af mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1266e4b2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266e4b6 je 0x1266e581 */
  if (C.zf) goto L_1266e581;
  /* 1266e4bc mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1266e4c3 jmp 0x1266e4ce */
  goto L_1266e4ce;
L_1266e4c5:;
  /* 1266e4c5 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1266e4c8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e4cb mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1266e4ce:;
  /* 1266e4ce cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266e4d2 jg 0x1266e530 */
  if ((!C.zf&&C.sf==C.of)) goto L_1266e530;
  /* 1266e4d4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266e4d8 je 0x1266e52e */
  if (C.zf) goto L_1266e52e;
  /* 1266e4da mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1266e4dd imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1266e4e0 mov ecx, dword ptr [eax + 0x1268f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1268f4dc)));
  /* 1266e4e6 push ecx */
  push32((uint32_t)(ECX));
  /* 1266e4e7 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1266e4ed push edx */
  push32((uint32_t)(EDX));
  /* 1266e4ee call 0x12670300 */
  push32(0x1266e4f3u); f_12670300();
  /* 1266e4f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e4f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266e4f8 je 0x1266e525 */
  if (C.zf) goto L_1266e525;
  /* 1266e4fa lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1266e500 push eax */
  push32((uint32_t)(EAX));
  /* 1266e501 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1266e504 push ecx */
  push32((uint32_t)(ECX));
  /* 1266e505 call 0x1266e5b0 */
  push32(0x1266e50au); f_1266e5b0();
  /* 1266e50a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e50d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266e50f je 0x1266e51c */
  if (C.zf) goto L_1266e51c;
  /* 1266e511 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266e514 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e517 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1266e51a jmp 0x1266e523 */
  goto L_1266e523;
L_1266e51c:;
  /* 1266e51c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_1266e523:;
  /* 1266e523 jmp 0x1266e52e */
  goto L_1266e52e;
L_1266e525:;
  /* 1266e525 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266e528 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e52b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1266e52e:;
  /* 1266e52e jmp 0x1266e4c5 */
  goto L_1266e4c5;
L_1266e530:;
  /* 1266e530 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266e534 je 0x1266e55b */
  if (C.zf) goto L_1266e55b;
  /* 1266e536 call 0x1266e750 */
  push32(0x1266e53bu); f_1266e750();
  /* 1266e53b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1266e53e push 2 */
  push32((uint32_t)(0x2u));
  /* 1266e540 mov ecx, dword ptr [0x1268f4dc] */
  ECX = (r32((uint32_t)(0x1268f4dc)));
  /* 1266e546 push ecx */
  push32((uint32_t)(ECX));
  /* 1266e547 call 0x12665100 */
  push32(0x1266e54cu); f_12665100();
  /* 1266e54c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e54f mov dword ptr [0x1268f4dc], 0 */
  w32((uint32_t)(0x1268f4dc), (0x0u));
  /* 1266e559 jmp 0x1266e581 */
  goto L_1266e581;
L_1266e55b:;
  /* 1266e55b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266e55f je 0x1266e56e */
  if (C.zf) goto L_1266e56e;
  /* 1266e561 call 0x1266e750 */
  push32(0x1266e566u); f_1266e750();
  /* 1266e566 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 1266e56c jmp 0x1266e578 */
  goto L_1266e578;
L_1266e56e:;
  /* 1266e56e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_1266e578:;
  /* 1266e578 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 1266e57e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1266e581:;
  /* 1266e581 jmp 0x1266e58b */
  goto L_1266e58b;
L_1266e583:;
  /* 1266e583 call 0x1266e750 */
  push32(0x1266e588u); f_1266e750();
  /* 1266e588 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1266e58b:;
  /* 1266e58b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266e58f je 0x1266e5a8 */
  if (C.zf) goto L_1266e5a8;
  /* 1266e591 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1266e593 call 0x12668110 */
  push32(0x1266e598u); f_12668110();
  /* 1266e598 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e59b mov eax, dword ptr [0x12690924] */
  EAX = (r32((uint32_t)(0x12690924)));
  /* 1266e5a0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266e5a3 mov dword ptr [0x12690924], eax */
  w32((uint32_t)(0x12690924), (EAX));
L_1266e5a8:;
  /* 1266e5a8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1266e5ab:;
  /* 1266e5ab mov esp, ebp */
  ESP = (EBP);
  /* 1266e5ad pop ebp */
  EBP = (pop32());
  /* 1266e5ae ret  */
  ESPCHK(0x1266e1c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e5b0 @ 0x1266e5b0 (403 bytes, 117 insns) */
void f_1266e5b0(void) {
  FTRACE(0x1266e5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266e5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1266e5b1 mov ebp, esp */
  EBP = (ESP);
  /* 1266e5b3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266e5b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266e5bc push eax */
  push32((uint32_t)(EAX));
  /* 1266e5bd lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 1266e5c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1266e5c4 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 1266e5ca push edx */
  push32((uint32_t)(EDX));
  /* 1266e5cb lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 1266e5d1 push eax */
  push32((uint32_t)(EAX));
  /* 1266e5d2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266e5d5 push ecx */
  push32((uint32_t)(ECX));
  /* 1266e5d6 call 0x1266e850 */
  push32(0x1266e5dbu); f_1266e850();
  /* 1266e5db add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e5de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266e5e0 jne 0x1266e5e9 */
  if (!C.zf) goto L_1266e5e9;
  /* 1266e5e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266e5e4 jmp 0x1266e73f */
  goto L_1266e73f;
L_1266e5e9:;
  /* 1266e5e9 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 1266e5ee push 0x1268c238 */
  push32((uint32_t)(0x1268c238u));
  /* 1266e5f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266e5f5 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 1266e5fb push edx */
  push32((uint32_t)(EDX));
  /* 1266e5fc call 0x126674a0 */
  push32(0x1266e601u); f_126674a0();
  /* 1266e601 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e604 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e607 push eax */
  push32((uint32_t)(EAX));
  /* 1266e608 call 0x12664670 */
  push32(0x1266e60du); f_12664670();
  /* 1266e60d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e610 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1266e613 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266e617 jne 0x1266e620 */
  if (!C.zf) goto L_1266e620;
  /* 1266e619 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266e61b jmp 0x1266e73f */
  goto L_1266e73f;
L_1266e620:;
  /* 1266e620 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266e623 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1266e626 mov ecx, dword ptr [eax + 0x1268f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1268f4dc)));
  /* 1266e62c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1266e62f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266e632 mov eax, dword ptr [edx*4 + 0x126907a0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x126907a0)));
  /* 1266e639 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1266e63c push 6 */
  push32((uint32_t)(0x6u));
  /* 1266e63e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266e641 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1266e644 add ecx, 0x126907f0 */
  { uint32_t _a=(ECX),_b=(0x126907f0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e64a push ecx */
  push32((uint32_t)(ECX));
  /* 1266e64b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 1266e64e push edx */
  push32((uint32_t)(EDX));
  /* 1266e64f call 0x1266af50 */
  push32(0x1266e654u); f_1266af50();
  /* 1266e654 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e657 mov eax, dword ptr [0x126907b8] */
  EAX = (r32((uint32_t)(0x126907b8)));
  /* 1266e65c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1266e65f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 1266e665 push ecx */
  push32((uint32_t)(ECX));
  /* 1266e666 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266e669 push edx */
  push32((uint32_t)(EDX));
  /* 1266e66a call 0x12667620 */
  push32(0x1266e66fu); f_12667620();
  /* 1266e66f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e672 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266e675 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1266e678 mov dword ptr [ecx + 0x1268f4dc], eax */
  w32((uint32_t)(ECX + 0x1268f4dc), (EAX));
  /* 1266e67e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1266e684 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1266e68a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266e68d mov dword ptr [eax*4 + 0x126907a0], edx */
  w32((uint32_t)(EAX*4 + 0x126907a0), (EDX));
  /* 1266e694 push 6 */
  push32((uint32_t)(0x6u));
  /* 1266e696 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 1266e69c push ecx */
  push32((uint32_t)(ECX));
  /* 1266e69d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266e6a0 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1266e6a3 add edx, 0x126907f0 */
  { uint32_t _a=(EDX),_b=(0x126907f0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e6a9 push edx */
  push32((uint32_t)(EDX));
  /* 1266e6aa call 0x1266af50 */
  push32(0x1266e6afu); f_1266af50();
  /* 1266e6af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e6b2 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266e6b6 jne 0x1266e6c3 */
  if (!C.zf) goto L_1266e6c3;
  /* 1266e6b8 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1266e6be mov dword ptr [0x126907b8], eax */
  w32((uint32_t)(0x126907b8), (EAX));
L_1266e6c3:;
  /* 1266e6c3 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266e6c7 jne 0x1266e6d5 */
  if (!C.zf) goto L_1266e6d5;
  /* 1266e6c9 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1266e6cf mov dword ptr [0x126907bc], ecx */
  w32((uint32_t)(0x126907bc), (ECX));
L_1266e6d5:;
  /* 1266e6d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266e6d8 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1266e6db call dword ptr [edx + 0x1268f4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x1268f4e0))), 0x1266e6e1u);
  /* 1266e6e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266e6e3 je 0x1266e71c */
  if (C.zf) goto L_1266e71c;
  /* 1266e6e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266e6e8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1266e6eb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266e6ee mov dword ptr [eax + 0x1268f4dc], ecx */
  w32((uint32_t)(EAX + 0x1268f4dc), (ECX));
  /* 1266e6f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266e6f6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266e6f9 push edx */
  push32((uint32_t)(EDX));
  /* 1266e6fa call 0x12665100 */
  push32(0x1266e6ffu); f_12665100();
  /* 1266e6ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e702 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266e705 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266e708 mov dword ptr [eax*4 + 0x126907a0], ecx */
  w32((uint32_t)(EAX*4 + 0x126907a0), (ECX));
  /* 1266e70f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1266e712 mov dword ptr [0x126907b8], edx */
  w32((uint32_t)(0x126907b8), (EDX));
  /* 1266e718 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266e71a jmp 0x1266e73f */
  goto L_1266e73f;
L_1266e71c:;
  /* 1266e71c cmp dword ptr [ebp - 0xc], 0x1268f3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1268f3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266e723 je 0x1266e733 */
  if (C.zf) goto L_1266e733;
  /* 1266e725 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266e727 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266e72a push eax */
  push32((uint32_t)(EAX));
  /* 1266e72b call 0x12665100 */
  push32(0x1266e730u); f_12665100();
  /* 1266e730 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1266e733:;
  /* 1266e733 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266e736 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1266e739 mov eax, dword ptr [ecx + 0x1268f4dc] */
  EAX = (r32((uint32_t)(ECX + 0x1268f4dc)));
L_1266e73f:;
  /* 1266e73f mov esp, ebp */
  ESP = (EBP);
  /* 1266e741 pop ebp */
  EBP = (pop32());
  /* 1266e742 ret  */
  ESPCHK(0x1266e5b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e750 @ 0x1266e750 (256 bytes, 72 insns) */
void f_1266e750(void) {
  FTRACE(0x1266e750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266e750 push ebp */
  push32((uint32_t)(EBP));
  /* 1266e751 mov ebp, esp */
  EBP = (ESP);
  /* 1266e753 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266e756 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1266e75d cmp dword ptr [0x1268f4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1268f4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266e764 jne 0x1266e784 */
  if (!C.zf) goto L_1266e784;
  /* 1266e766 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 1266e76b push 0x1268c238 */
  push32((uint32_t)(0x1268c238u));
  /* 1266e770 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266e772 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 1266e777 call 0x12664670 */
  push32(0x1266e77cu); f_12664670();
  /* 1266e77c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e77f mov dword ptr [0x1268f4dc], eax */
  w32((uint32_t)(0x1268f4dc), (EAX));
L_1266e784:;
  /* 1266e784 mov eax, dword ptr [0x1268f4dc] */
  EAX = (r32((uint32_t)(0x1268f4dc)));
  /* 1266e789 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1266e78c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1266e793 jmp 0x1266e79e */
  goto L_1266e79e;
L_1266e795:;
  /* 1266e795 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266e798 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e79b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1266e79e:;
  /* 1266e79e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266e7a1 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1266e7a4 mov eax, dword ptr [edx + 0x1268f4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1268f4dc)));
  /* 1266e7aa push eax */
  push32((uint32_t)(EAX));
  /* 1266e7ab push 0x1268c244 */
  push32((uint32_t)(0x1268c244u));
  /* 1266e7b0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266e7b3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1266e7b6 mov edx, dword ptr [ecx + 0x1268f4d8] */
  EDX = (r32((uint32_t)(ECX + 0x1268f4d8)));
  /* 1266e7bc push edx */
  push32((uint32_t)(EDX));
  /* 1266e7bd push 3 */
  push32((uint32_t)(0x3u));
  /* 1266e7bf mov eax, dword ptr [0x1268f4dc] */
  EAX = (r32((uint32_t)(0x1268f4dc)));
  /* 1266e7c4 push eax */
  push32((uint32_t)(EAX));
  /* 1266e7c5 call 0x1266e9f0 */
  push32(0x1266e7cau); f_1266e9f0();
  /* 1266e7ca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e7cd cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266e7d1 jge 0x1266e819 */
  if ((C.sf==C.of)) goto L_1266e819;
  /* 1266e7d3 push 0x1268c230 */
  push32((uint32_t)(0x1268c230u));
  /* 1266e7d8 mov ecx, dword ptr [0x1268f4dc] */
  ECX = (r32((uint32_t)(0x1268f4dc)));
  /* 1266e7de push ecx */
  push32((uint32_t)(ECX));
  /* 1266e7df call 0x12667630 */
  push32(0x1266e7e4u); f_12667630();
  /* 1266e7e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e7e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266e7ea add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e7ed imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1266e7f0 mov eax, dword ptr [edx + 0x1268f4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1268f4dc)));
  /* 1266e7f6 push eax */
  push32((uint32_t)(EAX));
  /* 1266e7f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266e7fa imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1266e7fd mov edx, dword ptr [ecx + 0x1268f4dc] */
  EDX = (r32((uint32_t)(ECX + 0x1268f4dc)));
  /* 1266e803 push edx */
  push32((uint32_t)(EDX));
  /* 1266e804 call 0x12670300 */
  push32(0x1266e809u); f_12670300();
  /* 1266e809 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e80c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266e80e je 0x1266e817 */
  if (C.zf) goto L_1266e817;
  /* 1266e810 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1266e817:;
  /* 1266e817 jmp 0x1266e847 */
  goto L_1266e847;
L_1266e819:;
  /* 1266e819 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266e81d jne 0x1266e826 */
  if (!C.zf) goto L_1266e826;
  /* 1266e81f mov eax, dword ptr [0x1268f4dc] */
  EAX = (r32((uint32_t)(0x1268f4dc)));
  /* 1266e824 jmp 0x1266e84c */
  goto L_1266e84c;
L_1266e826:;
  /* 1266e826 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266e828 mov eax, dword ptr [0x1268f4dc] */
  EAX = (r32((uint32_t)(0x1268f4dc)));
  /* 1266e82d push eax */
  push32((uint32_t)(EAX));
  /* 1266e82e call 0x12665100 */
  push32(0x1266e833u); f_12665100();
  /* 1266e833 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e836 mov dword ptr [0x1268f4dc], 0 */
  w32((uint32_t)(0x1268f4dc), (0x0u));
  /* 1266e840 mov eax, dword ptr [0x1268f4f4] */
  EAX = (r32((uint32_t)(0x1268f4f4)));
  /* 1266e845 jmp 0x1266e84c */
  goto L_1266e84c;
L_1266e847:;
  /* 1266e847 jmp 0x1266e795 */
  goto L_1266e795;
L_1266e84c:;
  /* 1266e84c mov esp, ebp */
  ESP = (EBP);
  /* 1266e84e pop ebp */
  EBP = (pop32());
  /* 1266e84f ret  */
  ESPCHK(0x1266e750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e850 @ 0x1266e850 (388 bytes, 115 insns) */
void f_1266e850(void) {
  FTRACE(0x1266e850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266e850 push ebp */
  push32((uint32_t)(EBP));
  /* 1266e851 mov ebp, esp */
  EBP = (ESP);
  /* 1266e853 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266e859 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266e85d jne 0x1266e866 */
  if (!C.zf) goto L_1266e866;
  /* 1266e85f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266e861 jmp 0x1266e9d0 */
  goto L_1266e9d0;
L_1266e866:;
  /* 1266e866 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266e869 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1266e86c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266e86f jne 0x1266e8c0 */
  if (!C.zf) goto L_1266e8c0;
  /* 1266e871 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266e874 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1266e878 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266e87a jne 0x1266e8c0 */
  if (!C.zf) goto L_1266e8c0;
  /* 1266e87c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266e87f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 1266e882 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266e885 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 1266e889 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266e88d je 0x1266e8a9 */
  if (C.zf) goto L_1266e8a9;
  /* 1266e88f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1266e892 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 1266e897 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1266e89a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 1266e8a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1266e8a3 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_1266e8a9:;
  /* 1266e8a9 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266e8ad je 0x1266e8b8 */
  if (C.zf) goto L_1266e8b8;
  /* 1266e8af mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1266e8b2 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_1266e8b8:;
  /* 1266e8b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266e8bb jmp 0x1266e9d0 */
  goto L_1266e9d0;
L_1266e8c0:;
  /* 1266e8c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266e8c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1266e8c4 push 0x1268f450 */
  push32((uint32_t)(0x1268f450u));
  /* 1266e8c9 call 0x12670300 */
  push32(0x1266e8ceu); f_12670300();
  /* 1266e8ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e8d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266e8d3 je 0x1266e988 */
  if (C.zf) goto L_1266e988;
  /* 1266e8d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266e8dc push edx */
  push32((uint32_t)(EDX));
  /* 1266e8dd push 0x1268f3cc */
  push32((uint32_t)(0x1268f3ccu));
  /* 1266e8e2 call 0x12670300 */
  push32(0x1266e8e7u); f_12670300();
  /* 1266e8e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e8ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266e8ec je 0x1266e988 */
  if (C.zf) goto L_1266e988;
  /* 1266e8f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266e8f5 push eax */
  push32((uint32_t)(EAX));
  /* 1266e8f6 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 1266e8fc push ecx */
  push32((uint32_t)(ECX));
  /* 1266e8fd call 0x1266ea40 */
  push32(0x1266e902u); f_1266ea40();
  /* 1266e902 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e905 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266e907 je 0x1266e910 */
  if (C.zf) goto L_1266e910;
  /* 1266e909 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266e90b jmp 0x1266e9d0 */
  goto L_1266e9d0;
L_1266e910:;
  /* 1266e910 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1266e916 push edx */
  push32((uint32_t)(EDX));
  /* 1266e917 push 0x126907c8 */
  push32((uint32_t)(0x126907c8u));
  /* 1266e91c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 1266e922 push eax */
  push32((uint32_t)(EAX));
  /* 1266e923 call 0x12670450 */
  push32(0x1266e928u); f_12670450();
  /* 1266e928 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e92b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266e92d jne 0x1266e936 */
  if (!C.zf) goto L_1266e936;
  /* 1266e92f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266e931 jmp 0x1266e9d0 */
  goto L_1266e9d0;
L_1266e936:;
  /* 1266e936 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1266e938 mov cx, word ptr [0x126907cc] */
  CX = (r16((uint32_t)(0x126907cc)));
  /* 1266e93f mov dword ptr [0x126907d0], ecx */
  w32((uint32_t)(0x126907d0), (ECX));
  /* 1266e945 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1266e94b push edx */
  push32((uint32_t)(EDX));
  /* 1266e94c push 0x1268f450 */
  push32((uint32_t)(0x1268f450u));
  /* 1266e951 call 0x1266eba0 */
  push32(0x1266e956u); f_1266eba0();
  /* 1266e956 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e959 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266e95c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1266e95f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1266e961 je 0x1266e976 */
  if (C.zf) goto L_1266e976;
  /* 1266e963 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266e966 push edx */
  push32((uint32_t)(EDX));
  /* 1266e967 push 0x1268f3cc */
  push32((uint32_t)(0x1268f3ccu));
  /* 1266e96c call 0x12667620 */
  push32(0x1266e971u); f_12667620();
  /* 1266e971 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e974 jmp 0x1266e988 */
  goto L_1266e988;
L_1266e976:;
  /* 1266e976 push 0x1268f450 */
  push32((uint32_t)(0x1268f450u));
  /* 1266e97b push 0x1268f3cc */
  push32((uint32_t)(0x1268f3ccu));
  /* 1266e980 call 0x12667620 */
  push32(0x1266e985u); f_12667620();
  /* 1266e985 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1266e988:;
  /* 1266e988 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266e98c je 0x1266e9a1 */
  if (C.zf) goto L_1266e9a1;
  /* 1266e98e push 6 */
  push32((uint32_t)(0x6u));
  /* 1266e990 push 0x126907c8 */
  push32((uint32_t)(0x126907c8u));
  /* 1266e995 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1266e998 push eax */
  push32((uint32_t)(EAX));
  /* 1266e999 call 0x1266af50 */
  push32(0x1266e99eu); f_1266af50();
  /* 1266e99e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1266e9a1:;
  /* 1266e9a1 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266e9a5 je 0x1266e9ba */
  if (C.zf) goto L_1266e9ba;
  /* 1266e9a7 push 4 */
  push32((uint32_t)(0x4u));
  /* 1266e9a9 push 0x126907d0 */
  push32((uint32_t)(0x126907d0u));
  /* 1266e9ae mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1266e9b1 push ecx */
  push32((uint32_t)(ECX));
  /* 1266e9b2 call 0x1266af50 */
  push32(0x1266e9b7u); f_1266af50();
  /* 1266e9b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1266e9ba:;
  /* 1266e9ba push 0x1268f450 */
  push32((uint32_t)(0x1268f450u));
  /* 1266e9bf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266e9c2 push edx */
  push32((uint32_t)(EDX));
  /* 1266e9c3 call 0x12667620 */
  push32(0x1266e9c8u); f_12667620();
  /* 1266e9c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266e9cb mov eax, 0x1268f450 */
  EAX = (0x1268f450u);
L_1266e9d0:;
  /* 1266e9d0 mov esp, ebp */
  ESP = (EBP);
  /* 1266e9d2 pop ebp */
  EBP = (pop32());
  /* 1266e9d3 ret  */
  ESPCHK(0x1266e850u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e9e0 @ 0x1266e9e0 (7 bytes, 5 insns) */
void f_1266e9e0(void) {
  FTRACE(0x1266e9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266e9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1266e9e1 mov ebp, esp */
  EBP = (ESP);
  /* 1266e9e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266e9e5 pop ebp */
  EBP = (pop32());
  /* 1266e9e6 ret  */
  ESPCHK(0x1266e9e0u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x1266e9f0 (79 bytes, 28 insns) */
void f_1266e9f0(void) {
  FTRACE(0x1266e9f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266e9f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1266e9f1 mov ebp, esp */
  EBP = (ESP);
  /* 1266e9f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266e9f6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1266e9f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1266e9fc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1266ea03 jmp 0x1266ea0e */
  goto L_1266ea0e;
L_1266ea05:;
  /* 1266ea05 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266ea08 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266ea0b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1266ea0e:;
  /* 1266ea0e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266ea11 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266ea14 jge 0x1266ea34 */
  if ((C.sf==C.of)) goto L_1266ea34;
  /* 1266ea16 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266ea19 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266ea1c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1266ea1f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266ea22 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1266ea25 push edx */
  push32((uint32_t)(EDX));
  /* 1266ea26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266ea29 push eax */
  push32((uint32_t)(EAX));
  /* 1266ea2a call 0x12667630 */
  push32(0x1266ea2fu); f_12667630();
  /* 1266ea2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266ea32 jmp 0x1266ea05 */
  goto L_1266ea05;
L_1266ea34:;
  /* 1266ea34 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1266ea3b mov esp, ebp */
  ESP = (EBP);
  /* 1266ea3d pop ebp */
  EBP = (pop32());
  /* 1266ea3e ret  */
  ESPCHK(0x1266e9f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ea40 @ 0x1266ea40 (349 bytes, 122 insns) */
void f_1266ea40(void) {
  FTRACE(0x1266ea40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266ea40 push ebp */
  push32((uint32_t)(EBP));
  /* 1266ea41 mov ebp, esp */
  EBP = (ESP);
  /* 1266ea43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266ea46 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1266ea4b push 0 */
  push32((uint32_t)(0x0u));
  /* 1266ea4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266ea50 push eax */
  push32((uint32_t)(EAX));
  /* 1266ea51 call 0x126683e0 */
  push32(0x1266ea56u); f_126683e0();
  /* 1266ea56 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266ea59 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266ea5c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1266ea5f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1266ea61 jne 0x1266ea6a */
  if (!C.zf) goto L_1266ea6a;
  /* 1266ea63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266ea65 jmp 0x1266eb99 */
  goto L_1266eb99;
L_1266ea6a:;
  /* 1266ea6a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266ea6d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1266ea70 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266ea73 jne 0x1266eaa0 */
  if (!C.zf) goto L_1266eaa0;
  /* 1266ea75 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266ea78 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1266ea7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266ea7e je 0x1266eaa0 */
  if (C.zf) goto L_1266eaa0;
  /* 1266ea80 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266ea83 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266ea86 push ecx */
  push32((uint32_t)(ECX));
  /* 1266ea87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266ea8a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266ea90 push edx */
  push32((uint32_t)(EDX));
  /* 1266ea91 call 0x12667620 */
  push32(0x1266ea96u); f_12667620();
  /* 1266ea96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266ea99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266ea9b jmp 0x1266eb99 */
  goto L_1266eb99;
L_1266eaa0:;
  /* 1266eaa0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1266eaa7 jmp 0x1266eab2 */
  goto L_1266eab2;
L_1266eaa9:;
  /* 1266eaa9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266eaac add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266eaaf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1266eab2:;
  /* 1266eab2 push 0x1268c248 */
  push32((uint32_t)(0x1268c248u));
  /* 1266eab7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266eaba push ecx */
  push32((uint32_t)(ECX));
  /* 1266eabb call 0x12670390 */
  push32(0x1266eac0u); f_12670390();
  /* 1266eac0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266eac3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1266eac6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266eaca jne 0x1266ead4 */
  if (!C.zf) goto L_1266ead4;
  /* 1266eacc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1266eacf jmp 0x1266eb99 */
  goto L_1266eb99;
L_1266ead4:;
  /* 1266ead4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266ead7 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266eada mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1266eadc mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 1266eadf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266eae3 jne 0x1266eb0a */
  if (!C.zf) goto L_1266eb0a;
  /* 1266eae5 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266eae9 jge 0x1266eb0a */
  if ((C.sf==C.of)) goto L_1266eb0a;
  /* 1266eaeb movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1266eaef cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266eaf2 je 0x1266eb0a */
  if (C.zf) goto L_1266eb0a;
  /* 1266eaf4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266eaf7 push edx */
  push32((uint32_t)(EDX));
  /* 1266eaf8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266eafb push eax */
  push32((uint32_t)(EAX));
  /* 1266eafc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266eaff push ecx */
  push32((uint32_t)(ECX));
  /* 1266eb00 call 0x12667e90 */
  push32(0x1266eb05u); f_12667e90();
  /* 1266eb05 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266eb08 jmp 0x1266eb70 */
  goto L_1266eb70;
L_1266eb0a:;
  /* 1266eb0a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266eb0e jne 0x1266eb38 */
  if (!C.zf) goto L_1266eb38;
  /* 1266eb10 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266eb14 jge 0x1266eb38 */
  if ((C.sf==C.of)) goto L_1266eb38;
  /* 1266eb16 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1266eb1a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266eb1d je 0x1266eb38 */
  if (C.zf) goto L_1266eb38;
  /* 1266eb1f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266eb22 push eax */
  push32((uint32_t)(EAX));
  /* 1266eb23 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266eb26 push ecx */
  push32((uint32_t)(ECX));
  /* 1266eb27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266eb2a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266eb2d push edx */
  push32((uint32_t)(EDX));
  /* 1266eb2e call 0x12667e90 */
  push32(0x1266eb33u); f_12667e90();
  /* 1266eb33 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266eb36 jmp 0x1266eb70 */
  goto L_1266eb70;
L_1266eb38:;
  /* 1266eb38 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266eb3c jne 0x1266eb6b */
  if (!C.zf) goto L_1266eb6b;
  /* 1266eb3e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1266eb42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266eb44 je 0x1266eb4f */
  if (C.zf) goto L_1266eb4f;
  /* 1266eb46 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1266eb4a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266eb4d jne 0x1266eb6b */
  if (!C.zf) goto L_1266eb6b;
L_1266eb4f:;
  /* 1266eb4f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266eb52 push edx */
  push32((uint32_t)(EDX));
  /* 1266eb53 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266eb56 push eax */
  push32((uint32_t)(EAX));
  /* 1266eb57 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266eb5a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266eb60 push ecx */
  push32((uint32_t)(ECX));
  /* 1266eb61 call 0x12667e90 */
  push32(0x1266eb66u); f_12667e90();
  /* 1266eb66 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266eb69 jmp 0x1266eb70 */
  goto L_1266eb70;
L_1266eb6b:;
  /* 1266eb6b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1266eb6e jmp 0x1266eb99 */
  goto L_1266eb99;
L_1266eb70:;
  /* 1266eb70 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1266eb74 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266eb77 jne 0x1266eb7b */
  if (!C.zf) goto L_1266eb7b;
  /* 1266eb79 jmp 0x1266eb97 */
  goto L_1266eb97;
L_1266eb7b:;
  /* 1266eb7b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1266eb7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266eb81 jne 0x1266eb85 */
  if (!C.zf) goto L_1266eb85;
  /* 1266eb83 jmp 0x1266eb97 */
  goto L_1266eb97;
L_1266eb85:;
  /* 1266eb85 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266eb88 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266eb8b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 1266eb8f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1266eb92 jmp 0x1266eaa9 */
  goto L_1266eaa9;
L_1266eb97:;
  /* 1266eb97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1266eb99:;
  /* 1266eb99 mov esp, ebp */
  ESP = (EBP);
  /* 1266eb9b pop ebp */
  EBP = (pop32());
  /* 1266eb9c ret  */
  ESPCHK(0x1266ea40u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x1266eba0 (101 bytes, 36 insns) */
void f_1266eba0(void) {
  FTRACE(0x1266eba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266eba0 push ebp */
  push32((uint32_t)(EBP));
  /* 1266eba1 mov ebp, esp */
  EBP = (ESP);
  /* 1266eba3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266eba6 push eax */
  push32((uint32_t)(EAX));
  /* 1266eba7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266ebaa push ecx */
  push32((uint32_t)(ECX));
  /* 1266ebab call 0x12667620 */
  push32(0x1266ebb0u); f_12667620();
  /* 1266ebb0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266ebb3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266ebb6 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 1266ebba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266ebbc je 0x1266ebd8 */
  if (C.zf) goto L_1266ebd8;
  /* 1266ebbe mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266ebc1 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266ebc4 push ecx */
  push32((uint32_t)(ECX));
  /* 1266ebc5 push 0x1268c250 */
  push32((uint32_t)(0x1268c250u));
  /* 1266ebca push 2 */
  push32((uint32_t)(0x2u));
  /* 1266ebcc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266ebcf push edx */
  push32((uint32_t)(EDX));
  /* 1266ebd0 call 0x1266e9f0 */
  push32(0x1266ebd5u); f_1266e9f0();
  /* 1266ebd5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1266ebd8:;
  /* 1266ebd8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266ebdb movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 1266ebe2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1266ebe4 je 0x1266ec03 */
  if (C.zf) goto L_1266ec03;
  /* 1266ebe6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1266ebe9 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266ebef push edx */
  push32((uint32_t)(EDX));
  /* 1266ebf0 push 0x1268c24c */
  push32((uint32_t)(0x1268c24cu));
  /* 1266ebf5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266ebf7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266ebfa push eax */
  push32((uint32_t)(EAX));
  /* 1266ebfb call 0x1266e9f0 */
  push32(0x1266ec00u); f_1266e9f0();
  /* 1266ec00 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1266ec03:;
  /* 1266ec03 pop ebp */
  EBP = (pop32());
  /* 1266ec04 ret  */
  ESPCHK(0x1266eba0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec10 @ 0x1266ec10 (130 bytes, 50 insns) */
void f_1266ec10(void) {
  FTRACE(0x1266ec10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266ec10 push ebp */
  push32((uint32_t)(EBP));
  /* 1266ec11 mov ebp, esp */
  EBP = (ESP);
  /* 1266ec13 push ecx */
  push32((uint32_t)(ECX));
  /* 1266ec14 push ebx */
  push32((uint32_t)(EBX));
  /* 1266ec15 push esi */
  push32((uint32_t)(ESI));
  /* 1266ec16 push edi */
  push32((uint32_t)(EDI));
  /* 1266ec17 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1266ec1e:;
  /* 1266ec1e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266ec22 jne 0x1266ec42 */
  if (!C.zf) goto L_1266ec42;
  /* 1266ec24 push 0x1268c260 */
  push32((uint32_t)(0x1268c260u));
  /* 1266ec29 push 0 */
  push32((uint32_t)(0x0u));
  /* 1266ec2b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1266ec2d push 0x1268c254 */
  push32((uint32_t)(0x1268c254u));
  /* 1266ec32 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266ec34 call 0x12663730 */
  push32(0x1266ec39u); f_12663730();
  /* 1266ec39 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266ec3c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266ec3f jne 0x1266ec42 */
  if (!C.zf) goto L_1266ec42;
  /* 1266ec41 int3  */
  x86_unimpl("int3 @ 0x1266ec41");
L_1266ec42:;
  /* 1266ec42 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266ec44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266ec46 jne 0x1266ec1e */
  if (!C.zf) goto L_1266ec1e;
  /* 1266ec48 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266ec4b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1266ec4e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1266ec51 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1266ec53 je 0x1266ec61 */
  if (C.zf) goto L_1266ec61;
  /* 1266ec55 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266ec58 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1266ec5f jmp 0x1266ec88 */
  goto L_1266ec88;
L_1266ec61:;
  /* 1266ec61 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266ec64 push ecx */
  push32((uint32_t)(ECX));
  /* 1266ec65 call 0x1266d480 */
  push32(0x1266ec6au); f_1266d480();
  /* 1266ec6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266ec6d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266ec70 push edx */
  push32((uint32_t)(EDX));
  /* 1266ec71 call 0x1266eca0 */
  push32(0x1266ec76u); f_1266eca0();
  /* 1266ec76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266ec79 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1266ec7c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266ec7f push eax */
  push32((uint32_t)(EAX));
  /* 1266ec80 call 0x1266d4f0 */
  push32(0x1266ec85u); f_1266d4f0();
  /* 1266ec85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1266ec88:;
  /* 1266ec88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266ec8b pop edi */
  EDI = (pop32());
  /* 1266ec8c pop esi */
  ESI = (pop32());
  /* 1266ec8d pop ebx */
  EBX = (pop32());
  /* 1266ec8e mov esp, ebp */
  ESP = (EBP);
  /* 1266ec90 pop ebp */
  EBP = (pop32());
  /* 1266ec91 ret  */
  ESPCHK(0x1266ec10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eca0 @ 0x1266eca0 (190 bytes, 67 insns) */
void f_1266eca0(void) {
  FTRACE(0x1266eca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266eca0 push ebp */
  push32((uint32_t)(EBP));
  /* 1266eca1 mov ebp, esp */
  EBP = (ESP);
  /* 1266eca3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266eca6 push ebx */
  push32((uint32_t)(EBX));
  /* 1266eca7 push esi */
  push32((uint32_t)(ESI));
  /* 1266eca8 push edi */
  push32((uint32_t)(EDI));
  /* 1266eca9 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1266ecb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266ecb3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1266ecb6:;
  /* 1266ecb6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266ecba jne 0x1266ecda */
  if (!C.zf) goto L_1266ecda;
  /* 1266ecbc push 0x1268c100 */
  push32((uint32_t)(0x1268c100u));
  /* 1266ecc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1266ecc3 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 1266ecc5 push 0x1268c254 */
  push32((uint32_t)(0x1268c254u));
  /* 1266ecca push 2 */
  push32((uint32_t)(0x2u));
  /* 1266eccc call 0x12663730 */
  push32(0x1266ecd1u); f_12663730();
  /* 1266ecd1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266ecd4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266ecd7 jne 0x1266ecda */
  if (!C.zf) goto L_1266ecda;
  /* 1266ecd9 int3  */
  x86_unimpl("int3 @ 0x1266ecd9");
L_1266ecda:;
  /* 1266ecda xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1266ecdc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1266ecde jne 0x1266ecb6 */
  if (!C.zf) goto L_1266ecb6;
  /* 1266ece0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266ece3 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1266ece6 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1266eceb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266eced je 0x1266ed4a */
  if (C.zf) goto L_1266ed4a;
  /* 1266ecef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266ecf2 push ecx */
  push32((uint32_t)(ECX));
  /* 1266ecf3 call 0x1266dfa0 */
  push32(0x1266ecf8u); f_1266dfa0();
  /* 1266ecf8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266ecfb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1266ecfe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266ed01 push edx */
  push32((uint32_t)(EDX));
  /* 1266ed02 call 0x12671320 */
  push32(0x1266ed07u); f_12671320();
  /* 1266ed07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266ed0a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266ed0d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1266ed10 push ecx */
  push32((uint32_t)(ECX));
  /* 1266ed11 call 0x126711f0 */
  push32(0x1266ed16u); f_126711f0();
  /* 1266ed16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266ed19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266ed1b jge 0x1266ed26 */
  if ((C.sf==C.of)) goto L_1266ed26;
  /* 1266ed1d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1266ed24 jmp 0x1266ed4a */
  goto L_1266ed4a;
L_1266ed26:;
  /* 1266ed26 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266ed29 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266ed2d je 0x1266ed4a */
  if (C.zf) goto L_1266ed4a;
  /* 1266ed2f push 2 */
  push32((uint32_t)(0x2u));
  /* 1266ed31 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266ed34 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1266ed37 push ecx */
  push32((uint32_t)(ECX));
  /* 1266ed38 call 0x12665100 */
  push32(0x1266ed3du); f_12665100();
  /* 1266ed3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266ed40 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266ed43 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_1266ed4a:;
  /* 1266ed4a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266ed4d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1266ed54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266ed57 pop edi */
  EDI = (pop32());
  /* 1266ed58 pop esi */
  ESI = (pop32());
  /* 1266ed59 pop ebx */
  EBX = (pop32());
  /* 1266ed5a mov esp, ebp */
  ESP = (EBP);
  /* 1266ed5c pop ebp */
  EBP = (pop32());
  /* 1266ed5d ret  */
  ESPCHK(0x1266eca0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed60 @ 0x1266ed60 (210 bytes, 63 insns) */
void f_1266ed60(void) {
  FTRACE(0x1266ed60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266ed60 push ebp */
  push32((uint32_t)(EBP));
  /* 1266ed61 mov ebp, esp */
  EBP = (ESP);
  /* 1266ed63 push ecx */
  push32((uint32_t)(ECX));
  /* 1266ed64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266ed67 cmp eax, dword ptr [0x126920bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x126920bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266ed6d jae 0x1266ed91 */
  if (!C.cf) goto L_1266ed91;
  /* 1266ed6f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266ed72 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1266ed75 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266ed78 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1266ed7b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1266ed7e mov eax, dword ptr [ecx*4 + 0x12691f80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12691f80)));
  /* 1266ed85 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1266ed8a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1266ed8d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1266ed8f jne 0x1266eda4 */
  if (!C.zf) goto L_1266eda4;
L_1266ed91:;
  /* 1266ed91 call 0x1266c540 */
  push32(0x1266ed96u); f_1266c540();
  /* 1266ed96 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1266ed9c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1266ed9f jmp 0x1266ee2e */
  goto L_1266ee2e;
L_1266eda4:;
  /* 1266eda4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266eda7 push edx */
  push32((uint32_t)(EDX));
  /* 1266eda8 call 0x1266dd60 */
  push32(0x1266edadu); f_1266dd60();
  /* 1266edad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266edb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266edb3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1266edb6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266edb9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1266edbc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1266edbf mov edx, dword ptr [eax*4 + 0x12691f80] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12691f80)));
  /* 1266edc6 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1266edcb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1266edce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266edd0 je 0x1266ee0d */
  if (C.zf) goto L_1266ee0d;
  /* 1266edd2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266edd5 push ecx */
  push32((uint32_t)(ECX));
  /* 1266edd6 call 0x1266dbe0 */
  push32(0x1266eddbu); f_1266dbe0();
  /* 1266eddb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266edde push eax */
  push32((uint32_t)(EAX));
  /* 1266eddf call dword ptr [0x126932c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932c8))), 0x1266ede5u);
  /* 1266ede5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266ede7 jne 0x1266edf4 */
  if (!C.zf) goto L_1266edf4;
  /* 1266ede9 call dword ptr [0x12693370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693370))), 0x1266edefu);
  /* 1266edef mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1266edf2 jmp 0x1266edfb */
  goto L_1266edfb;
L_1266edf4:;
  /* 1266edf4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1266edfb:;
  /* 1266edfb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266edff jne 0x1266ee03 */
  if (!C.zf) goto L_1266ee03;
  /* 1266ee01 jmp 0x1266ee1f */
  goto L_1266ee1f;
L_1266ee03:;
  /* 1266ee03 call 0x1266c550 */
  push32(0x1266ee08u); f_1266c550();
  /* 1266ee08 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266ee0b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1266ee0d:;
  /* 1266ee0d call 0x1266c540 */
  push32(0x1266ee12u); f_1266c540();
  /* 1266ee12 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1266ee18 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1266ee1f:;
  /* 1266ee1f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266ee22 push eax */
  push32((uint32_t)(EAX));
  /* 1266ee23 call 0x1266ddf0 */
  push32(0x1266ee28u); f_1266ddf0();
  /* 1266ee28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266ee2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1266ee2e:;
  /* 1266ee2e mov esp, ebp */
  ESP = (EBP);
  /* 1266ee30 pop ebp */
  EBP = (pop32());
  /* 1266ee31 ret  */
  ESPCHK(0x1266ed60u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x1266ee40 (219 bytes, 64 insns) */
void f_1266ee40(void) {
  FTRACE(0x1266ee40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266ee40 push ebp */
  push32((uint32_t)(EBP));
  /* 1266ee41 mov ebp, esp */
  EBP = (ESP);
  /* 1266ee43 push ecx */
  push32((uint32_t)(ECX));
  /* 1266ee44 cmp dword ptr [0x126907b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x126907b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266ee4b je 0x1266eee1 */
  if (C.zf) goto L_1266eee1;
  /* 1266ee51 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1266ee53 push 0x1268c270 */
  push32((uint32_t)(0x1268c270u));
  /* 1266ee58 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266ee5a push 0xac */
  push32((uint32_t)(0xacu));
  /* 1266ee5f push 1 */
  push32((uint32_t)(0x1u));
  /* 1266ee61 call 0x12664a80 */
  push32(0x1266ee66u); f_12664a80();
  /* 1266ee66 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266ee69 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1266ee6c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266ee70 jne 0x1266ee7c */
  if (!C.zf) goto L_1266ee7c;
  /* 1266ee72 mov eax, 1 */
  EAX = (0x1u);
  /* 1266ee77 jmp 0x1266ef17 */
  goto L_1266ef17;
L_1266ee7c:;
  /* 1266ee7c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266ee7f push eax */
  push32((uint32_t)(EAX));
  /* 1266ee80 call 0x1266ef20 */
  push32(0x1266ee85u); f_1266ef20();
  /* 1266ee85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266ee88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266ee8a je 0x1266eead */
  if (C.zf) goto L_1266eead;
  /* 1266ee8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266ee8f push ecx */
  push32((uint32_t)(ECX));
  /* 1266ee90 call 0x1266f4b0 */
  push32(0x1266ee95u); f_1266f4b0();
  /* 1266ee95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266ee98 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266ee9a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266ee9d push edx */
  push32((uint32_t)(EDX));
  /* 1266ee9e call 0x12665100 */
  push32(0x1266eea3u); f_12665100();
  /* 1266eea3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266eea6 mov eax, 1 */
  EAX = (0x1u);
  /* 1266eeab jmp 0x1266ef17 */
  goto L_1266ef17;
L_1266eead:;
  /* 1266eead mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266eeb0 mov dword ptr [0x1268fc98], eax */
  w32((uint32_t)(0x1268fc98), (EAX));
  /* 1266eeb5 mov ecx, dword ptr [0x126907d4] */
  ECX = (r32((uint32_t)(0x126907d4)));
  /* 1266eebb push ecx */
  push32((uint32_t)(ECX));
  /* 1266eebc call 0x1266f4b0 */
  push32(0x1266eec1u); f_1266f4b0();
  /* 1266eec1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266eec4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266eec6 mov edx, dword ptr [0x126907d4] */
  EDX = (r32((uint32_t)(0x126907d4)));
  /* 1266eecc push edx */
  push32((uint32_t)(EDX));
  /* 1266eecd call 0x12665100 */
  push32(0x1266eed2u); f_12665100();
  /* 1266eed2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266eed5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266eed8 mov dword ptr [0x126907d4], eax */
  w32((uint32_t)(0x126907d4), (EAX));
  /* 1266eedd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266eedf jmp 0x1266ef17 */
  goto L_1266ef17;
L_1266eee1:;
  /* 1266eee1 mov dword ptr [0x1268fc98], 0x1268fca0 */
  w32((uint32_t)(0x1268fc98), (0x1268fca0u));
  /* 1266eeeb mov ecx, dword ptr [0x126907d4] */
  ECX = (r32((uint32_t)(0x126907d4)));
  /* 1266eef1 push ecx */
  push32((uint32_t)(ECX));
  /* 1266eef2 call 0x1266f4b0 */
  push32(0x1266eef7u); f_1266f4b0();
  /* 1266eef7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266eefa push 2 */
  push32((uint32_t)(0x2u));
  /* 1266eefc mov edx, dword ptr [0x126907d4] */
  EDX = (r32((uint32_t)(0x126907d4)));
  /* 1266ef02 push edx */
  push32((uint32_t)(EDX));
  /* 1266ef03 call 0x12665100 */
  push32(0x1266ef08u); f_12665100();
  /* 1266ef08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266ef0b mov dword ptr [0x126907d4], 0 */
  w32((uint32_t)(0x126907d4), (0x0u));
  /* 1266ef15 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1266ef17:;
  /* 1266ef17 mov esp, ebp */
  ESP = (EBP);
  /* 1266ef19 pop ebp */
  EBP = (pop32());
  /* 1266ef1a ret  */
  ESPCHK(0x1266ee40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef20 @ 0x1266ef20 (1423 bytes, 533 insns) */
void f_1266ef20(void) {
  FTRACE(0x1266ef20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266ef20 push ebp */
  push32((uint32_t)(EBP));
  /* 1266ef21 mov ebp, esp */
  EBP = (ESP);
  /* 1266ef23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266ef26 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1266ef2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266ef2f mov ax, word ptr [0x1269080e] */
  AX = (r16((uint32_t)(0x1269080e)));
  /* 1266ef35 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1266ef38 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1266ef3a mov cx, word ptr [0x12690810] */
  CX = (r16((uint32_t)(0x12690810)));
  /* 1266ef41 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1266ef44 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266ef48 jne 0x1266ef52 */
  if (!C.zf) goto L_1266ef52;
  /* 1266ef4a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1266ef4d jmp 0x1266f4ab */
  goto L_1266f4ab;
L_1266ef52:;
  /* 1266ef52 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266ef55 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266ef58 push edx */
  push32((uint32_t)(EDX));
  /* 1266ef59 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 1266ef5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266ef5e push eax */
  push32((uint32_t)(EAX));
  /* 1266ef5f push 1 */
  push32((uint32_t)(0x1u));
  /* 1266ef61 call 0x12672830 */
  push32(0x1266ef66u); f_12672830();
  /* 1266ef66 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266ef69 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266ef6c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266ef6e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1266ef71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266ef74 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266ef77 push edx */
  push32((uint32_t)(EDX));
  /* 1266ef78 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1266ef7a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266ef7d push eax */
  push32((uint32_t)(EAX));
  /* 1266ef7e push 1 */
  push32((uint32_t)(0x1u));
  /* 1266ef80 call 0x12672830 */
  push32(0x1266ef85u); f_12672830();
  /* 1266ef85 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266ef88 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266ef8b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266ef8d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1266ef90 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266ef93 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266ef96 push edx */
  push32((uint32_t)(EDX));
  /* 1266ef97 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 1266ef99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266ef9c push eax */
  push32((uint32_t)(EAX));
  /* 1266ef9d push 1 */
  push32((uint32_t)(0x1u));
  /* 1266ef9f call 0x12672830 */
  push32(0x1266efa4u); f_12672830();
  /* 1266efa4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266efa7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266efaa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266efac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1266efaf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266efb2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266efb5 push edx */
  push32((uint32_t)(EDX));
  /* 1266efb6 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 1266efb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266efbb push eax */
  push32((uint32_t)(EAX));
  /* 1266efbc push 1 */
  push32((uint32_t)(0x1u));
  /* 1266efbe call 0x12672830 */
  push32(0x1266efc3u); f_12672830();
  /* 1266efc3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266efc6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266efc9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266efcb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1266efce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266efd1 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266efd4 push edx */
  push32((uint32_t)(EDX));
  /* 1266efd5 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 1266efd7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266efda push eax */
  push32((uint32_t)(EAX));
  /* 1266efdb push 1 */
  push32((uint32_t)(0x1u));
  /* 1266efdd call 0x12672830 */
  push32(0x1266efe2u); f_12672830();
  /* 1266efe2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266efe5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266efe8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266efea mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1266efed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266eff0 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266eff3 push edx */
  push32((uint32_t)(EDX));
  /* 1266eff4 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 1266eff6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266eff9 push eax */
  push32((uint32_t)(EAX));
  /* 1266effa push 1 */
  push32((uint32_t)(0x1u));
  /* 1266effc call 0x12672830 */
  push32(0x1266f001u); f_12672830();
  /* 1266f001 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f004 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266f007 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266f009 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1266f00c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f00f push edx */
  push32((uint32_t)(EDX));
  /* 1266f010 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 1266f012 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266f015 push eax */
  push32((uint32_t)(EAX));
  /* 1266f016 push 1 */
  push32((uint32_t)(0x1u));
  /* 1266f018 call 0x12672830 */
  push32(0x1266f01du); f_12672830();
  /* 1266f01d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f020 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266f023 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266f025 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1266f028 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f02b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f02e push edx */
  push32((uint32_t)(EDX));
  /* 1266f02f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1266f031 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266f034 push eax */
  push32((uint32_t)(EAX));
  /* 1266f035 push 1 */
  push32((uint32_t)(0x1u));
  /* 1266f037 call 0x12672830 */
  push32(0x1266f03cu); f_12672830();
  /* 1266f03c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f03f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266f042 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266f044 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1266f047 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f04a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f04d push edx */
  push32((uint32_t)(EDX));
  /* 1266f04e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 1266f050 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266f053 push eax */
  push32((uint32_t)(EAX));
  /* 1266f054 push 1 */
  push32((uint32_t)(0x1u));
  /* 1266f056 call 0x12672830 */
  push32(0x1266f05bu); f_12672830();
  /* 1266f05b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f05e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266f061 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266f063 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1266f066 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f069 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f06c push edx */
  push32((uint32_t)(EDX));
  /* 1266f06d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 1266f06f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266f072 push eax */
  push32((uint32_t)(EAX));
  /* 1266f073 push 1 */
  push32((uint32_t)(0x1u));
  /* 1266f075 call 0x12672830 */
  push32(0x1266f07au); f_12672830();
  /* 1266f07a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f07d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266f080 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266f082 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1266f085 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f088 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f08b push edx */
  push32((uint32_t)(EDX));
  /* 1266f08c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 1266f08e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266f091 push eax */
  push32((uint32_t)(EAX));
  /* 1266f092 push 1 */
  push32((uint32_t)(0x1u));
  /* 1266f094 call 0x12672830 */
  push32(0x1266f099u); f_12672830();
  /* 1266f099 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f09c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266f09f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266f0a1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1266f0a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f0a7 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f0aa push edx */
  push32((uint32_t)(EDX));
  /* 1266f0ab push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1266f0ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266f0b0 push eax */
  push32((uint32_t)(EAX));
  /* 1266f0b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1266f0b3 call 0x12672830 */
  push32(0x1266f0b8u); f_12672830();
  /* 1266f0b8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f0bb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266f0be or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266f0c0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1266f0c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f0c6 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f0c9 push edx */
  push32((uint32_t)(EDX));
  /* 1266f0ca push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 1266f0cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266f0cf push eax */
  push32((uint32_t)(EAX));
  /* 1266f0d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 1266f0d2 call 0x12672830 */
  push32(0x1266f0d7u); f_12672830();
  /* 1266f0d7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f0da mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266f0dd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266f0df mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1266f0e2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f0e5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f0e8 push edx */
  push32((uint32_t)(EDX));
  /* 1266f0e9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1266f0eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266f0ee push eax */
  push32((uint32_t)(EAX));
  /* 1266f0ef push 1 */
  push32((uint32_t)(0x1u));
  /* 1266f0f1 call 0x12672830 */
  push32(0x1266f0f6u); f_12672830();
  /* 1266f0f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f0f9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266f0fc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266f0fe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1266f101 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f104 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f107 push edx */
  push32((uint32_t)(EDX));
  /* 1266f108 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1266f10a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266f10d push eax */
  push32((uint32_t)(EAX));
  /* 1266f10e push 1 */
  push32((uint32_t)(0x1u));
  /* 1266f110 call 0x12672830 */
  push32(0x1266f115u); f_12672830();
  /* 1266f115 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f118 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266f11b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266f11d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1266f120 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f123 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f126 push edx */
  push32((uint32_t)(EDX));
  /* 1266f127 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 1266f129 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266f12c push eax */
  push32((uint32_t)(EAX));
  /* 1266f12d push 1 */
  push32((uint32_t)(0x1u));
  /* 1266f12f call 0x12672830 */
  push32(0x1266f134u); f_12672830();
  /* 1266f134 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f137 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266f13a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266f13c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1266f13f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f142 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f145 push edx */
  push32((uint32_t)(EDX));
  /* 1266f146 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 1266f148 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266f14b push eax */
  push32((uint32_t)(EAX));
  /* 1266f14c push 1 */
  push32((uint32_t)(0x1u));
  /* 1266f14e call 0x12672830 */
  push32(0x1266f153u); f_12672830();
  /* 1266f153 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f156 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266f159 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266f15b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1266f15e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f161 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f164 push edx */
  push32((uint32_t)(EDX));
  /* 1266f165 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 1266f167 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266f16a push eax */
  push32((uint32_t)(EAX));
  /* 1266f16b push 1 */
  push32((uint32_t)(0x1u));
  /* 1266f16d call 0x12672830 */
  push32(0x1266f172u); f_12672830();
  /* 1266f172 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f175 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266f178 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266f17a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1266f17d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f180 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f183 push edx */
  push32((uint32_t)(EDX));
  /* 1266f184 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1266f186 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266f189 push eax */
  push32((uint32_t)(EAX));
  /* 1266f18a push 1 */
  push32((uint32_t)(0x1u));
  /* 1266f18c call 0x12672830 */
  push32(0x1266f191u); f_12672830();
  /* 1266f191 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f194 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266f197 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266f199 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1266f19c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f19f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f1a2 push edx */
  push32((uint32_t)(EDX));
  /* 1266f1a3 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 1266f1a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266f1a8 push eax */
  push32((uint32_t)(EAX));
  /* 1266f1a9 push 1 */
  push32((uint32_t)(0x1u));
  /* 1266f1ab call 0x12672830 */
  push32(0x1266f1b0u); f_12672830();
  /* 1266f1b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f1b3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266f1b6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266f1b8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1266f1bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f1be add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f1c1 push edx */
  push32((uint32_t)(EDX));
  /* 1266f1c2 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1266f1c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266f1c7 push eax */
  push32((uint32_t)(EAX));
  /* 1266f1c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 1266f1ca call 0x12672830 */
  push32(0x1266f1cfu); f_12672830();
  /* 1266f1cf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f1d2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266f1d5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266f1d7 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1266f1da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f1dd add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f1e0 push edx */
  push32((uint32_t)(EDX));
  /* 1266f1e1 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 1266f1e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266f1e6 push eax */
  push32((uint32_t)(EAX));
  /* 1266f1e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 1266f1e9 call 0x12672830 */
  push32(0x1266f1eeu); f_12672830();
  /* 1266f1ee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f1f1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266f1f4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266f1f6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1266f1f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f1fc add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f1ff push edx */
  push32((uint32_t)(EDX));
  /* 1266f200 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 1266f202 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266f205 push eax */
  push32((uint32_t)(EAX));
  /* 1266f206 push 1 */
  push32((uint32_t)(0x1u));
  /* 1266f208 call 0x12672830 */
  push32(0x1266f20du); f_12672830();
  /* 1266f20d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f210 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266f213 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266f215 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1266f218 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f21b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f21e push edx */
  push32((uint32_t)(EDX));
  /* 1266f21f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 1266f221 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266f224 push eax */
  push32((uint32_t)(EAX));
  /* 1266f225 push 1 */
  push32((uint32_t)(0x1u));
  /* 1266f227 call 0x12672830 */
  push32(0x1266f22cu); f_12672830();
  /* 1266f22c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f22f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266f232 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266f234 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1266f237 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f23a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f23d push edx */
  push32((uint32_t)(EDX));
  /* 1266f23e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 1266f240 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266f243 push eax */
  push32((uint32_t)(EAX));
  /* 1266f244 push 1 */
  push32((uint32_t)(0x1u));
  /* 1266f246 call 0x12672830 */
  push32(0x1266f24bu); f_12672830();
  /* 1266f24b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f24e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266f251 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266f253 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1266f256 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f259 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f25c push edx */
  push32((uint32_t)(EDX));
  /* 1266f25d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 1266f25f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266f262 push eax */
  push32((uint32_t)(EAX));
  /* 1266f263 push 1 */
  push32((uint32_t)(0x1u));
  /* 1266f265 call 0x12672830 */
  push32(0x1266f26au); f_12672830();
  /* 1266f26a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f26d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266f270 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266f272 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1266f275 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f278 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f27b push edx */
  push32((uint32_t)(EDX));
  /* 1266f27c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 1266f27e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266f281 push eax */
  push32((uint32_t)(EAX));
  /* 1266f282 push 1 */
  push32((uint32_t)(0x1u));
  /* 1266f284 call 0x12672830 */
  push32(0x1266f289u); f_12672830();
  /* 1266f289 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f28c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266f28f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266f291 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1266f294 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f297 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f29a push edx */
  push32((uint32_t)(EDX));
  /* 1266f29b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 1266f29d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266f2a0 push eax */
  push32((uint32_t)(EAX));
  /* 1266f2a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1266f2a3 call 0x12672830 */
  push32(0x1266f2a8u); f_12672830();
  /* 1266f2a8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f2ab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266f2ae or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266f2b0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1266f2b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f2b6 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f2b9 push edx */
  push32((uint32_t)(EDX));
  /* 1266f2ba push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1266f2bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266f2bf push eax */
  push32((uint32_t)(EAX));
  /* 1266f2c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 1266f2c2 call 0x12672830 */
  push32(0x1266f2c7u); f_12672830();
  /* 1266f2c7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f2ca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266f2cd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266f2cf mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1266f2d2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f2d5 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f2d8 push edx */
  push32((uint32_t)(EDX));
  /* 1266f2d9 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1266f2db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266f2de push eax */
  push32((uint32_t)(EAX));
  /* 1266f2df push 1 */
  push32((uint32_t)(0x1u));
  /* 1266f2e1 call 0x12672830 */
  push32(0x1266f2e6u); f_12672830();
  /* 1266f2e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f2e9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266f2ec or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266f2ee mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1266f2f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f2f4 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f2f7 push edx */
  push32((uint32_t)(EDX));
  /* 1266f2f8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1266f2fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266f2fd push eax */
  push32((uint32_t)(EAX));
  /* 1266f2fe push 1 */
  push32((uint32_t)(0x1u));
  /* 1266f300 call 0x12672830 */
  push32(0x1266f305u); f_12672830();
  /* 1266f305 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f308 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266f30b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266f30d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1266f310 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f313 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f316 push edx */
  push32((uint32_t)(EDX));
  /* 1266f317 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 1266f319 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266f31c push eax */
  push32((uint32_t)(EAX));
  /* 1266f31d push 1 */
  push32((uint32_t)(0x1u));
  /* 1266f31f call 0x12672830 */
  push32(0x1266f324u); f_12672830();
  /* 1266f324 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f327 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266f32a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266f32c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1266f32f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f332 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f338 push edx */
  push32((uint32_t)(EDX));
  /* 1266f339 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 1266f33b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266f33e push eax */
  push32((uint32_t)(EAX));
  /* 1266f33f push 1 */
  push32((uint32_t)(0x1u));
  /* 1266f341 call 0x12672830 */
  push32(0x1266f346u); f_12672830();
  /* 1266f346 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f349 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266f34c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266f34e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1266f351 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f354 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f35a push edx */
  push32((uint32_t)(EDX));
  /* 1266f35b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1266f35d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266f360 push eax */
  push32((uint32_t)(EAX));
  /* 1266f361 push 1 */
  push32((uint32_t)(0x1u));
  /* 1266f363 call 0x12672830 */
  push32(0x1266f368u); f_12672830();
  /* 1266f368 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f36b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266f36e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266f370 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1266f373 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f376 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f37c push edx */
  push32((uint32_t)(EDX));
  /* 1266f37d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1266f37f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266f382 push eax */
  push32((uint32_t)(EAX));
  /* 1266f383 push 1 */
  push32((uint32_t)(0x1u));
  /* 1266f385 call 0x12672830 */
  push32(0x1266f38au); f_12672830();
  /* 1266f38a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f38d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266f390 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266f392 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1266f395 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f398 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f39e push edx */
  push32((uint32_t)(EDX));
  /* 1266f39f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 1266f3a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266f3a4 push eax */
  push32((uint32_t)(EAX));
  /* 1266f3a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1266f3a7 call 0x12672830 */
  push32(0x1266f3acu); f_12672830();
  /* 1266f3ac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f3af mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266f3b2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266f3b4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1266f3b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f3ba add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f3c0 push edx */
  push32((uint32_t)(EDX));
  /* 1266f3c1 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 1266f3c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266f3c6 push eax */
  push32((uint32_t)(EAX));
  /* 1266f3c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 1266f3c9 call 0x12672830 */
  push32(0x1266f3ceu); f_12672830();
  /* 1266f3ce add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f3d1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266f3d4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266f3d6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1266f3d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f3dc add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f3e2 push edx */
  push32((uint32_t)(EDX));
  /* 1266f3e3 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 1266f3e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266f3e8 push eax */
  push32((uint32_t)(EAX));
  /* 1266f3e9 push 1 */
  push32((uint32_t)(0x1u));
  /* 1266f3eb call 0x12672830 */
  push32(0x1266f3f0u); f_12672830();
  /* 1266f3f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f3f3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266f3f6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266f3f8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1266f3fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f3fe add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f404 push edx */
  push32((uint32_t)(EDX));
  /* 1266f405 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 1266f407 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266f40a push eax */
  push32((uint32_t)(EAX));
  /* 1266f40b push 1 */
  push32((uint32_t)(0x1u));
  /* 1266f40d call 0x12672830 */
  push32(0x1266f412u); f_12672830();
  /* 1266f412 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f415 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266f418 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266f41a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1266f41d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f420 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f426 push edx */
  push32((uint32_t)(EDX));
  /* 1266f427 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 1266f429 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266f42c push eax */
  push32((uint32_t)(EAX));
  /* 1266f42d push 1 */
  push32((uint32_t)(0x1u));
  /* 1266f42f call 0x12672830 */
  push32(0x1266f434u); f_12672830();
  /* 1266f434 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f437 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266f43a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266f43c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1266f43f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f442 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f448 push edx */
  push32((uint32_t)(EDX));
  /* 1266f449 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1266f44b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266f44e push eax */
  push32((uint32_t)(EAX));
  /* 1266f44f push 1 */
  push32((uint32_t)(0x1u));
  /* 1266f451 call 0x12672830 */
  push32(0x1266f456u); f_12672830();
  /* 1266f456 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f459 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266f45c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266f45e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1266f461 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f464 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f46a push edx */
  push32((uint32_t)(EDX));
  /* 1266f46b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1266f46d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266f470 push eax */
  push32((uint32_t)(EAX));
  /* 1266f471 push 1 */
  push32((uint32_t)(0x1u));
  /* 1266f473 call 0x12672830 */
  push32(0x1266f478u); f_12672830();
  /* 1266f478 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f47b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266f47e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266f480 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1266f483 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f486 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f48c push edx */
  push32((uint32_t)(EDX));
  /* 1266f48d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 1266f492 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266f495 push eax */
  push32((uint32_t)(EAX));
  /* 1266f496 push 1 */
  push32((uint32_t)(0x1u));
  /* 1266f498 call 0x12672830 */
  push32(0x1266f49du); f_12672830();
  /* 1266f49d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f4a0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1266f4a3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266f4a5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1266f4a8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_1266f4ab:;
  /* 1266f4ab mov esp, ebp */
  ESP = (EBP);
  /* 1266f4ad pop ebp */
  EBP = (pop32());
  /* 1266f4ae ret  */
  ESPCHK(0x1266ef20u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x1266f4b0 (779 bytes, 265 insns) */
void f_1266f4b0(void) {
  FTRACE(0x1266f4b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266f4b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1266f4b1 mov ebp, esp */
  EBP = (ESP);
  /* 1266f4b3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266f4b7 jne 0x1266f4be */
  if (!C.zf) goto L_1266f4be;
  /* 1266f4b9 jmp 0x1266f7b9 */
  goto L_1266f7b9;
L_1266f4be:;
  /* 1266f4be push 2 */
  push32((uint32_t)(0x2u));
  /* 1266f4c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f4c3 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1266f4c6 push ecx */
  push32((uint32_t)(ECX));
  /* 1266f4c7 call 0x12665100 */
  push32(0x1266f4ccu); f_12665100();
  /* 1266f4cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f4cf push 2 */
  push32((uint32_t)(0x2u));
  /* 1266f4d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f4d4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1266f4d7 push eax */
  push32((uint32_t)(EAX));
  /* 1266f4d8 call 0x12665100 */
  push32(0x1266f4ddu); f_12665100();
  /* 1266f4dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f4e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266f4e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f4e5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1266f4e8 push edx */
  push32((uint32_t)(EDX));
  /* 1266f4e9 call 0x12665100 */
  push32(0x1266f4eeu); f_12665100();
  /* 1266f4ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f4f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266f4f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f4f6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1266f4f9 push ecx */
  push32((uint32_t)(ECX));
  /* 1266f4fa call 0x12665100 */
  push32(0x1266f4ffu); f_12665100();
  /* 1266f4ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f502 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266f504 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f507 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1266f50a push eax */
  push32((uint32_t)(EAX));
  /* 1266f50b call 0x12665100 */
  push32(0x1266f510u); f_12665100();
  /* 1266f510 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f513 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266f515 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f518 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1266f51b push edx */
  push32((uint32_t)(EDX));
  /* 1266f51c call 0x12665100 */
  push32(0x1266f521u); f_12665100();
  /* 1266f521 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f524 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266f526 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f529 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1266f52b push ecx */
  push32((uint32_t)(ECX));
  /* 1266f52c call 0x12665100 */
  push32(0x1266f531u); f_12665100();
  /* 1266f531 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f534 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266f536 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f539 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1266f53c push eax */
  push32((uint32_t)(EAX));
  /* 1266f53d call 0x12665100 */
  push32(0x1266f542u); f_12665100();
  /* 1266f542 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f545 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266f547 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f54a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1266f54d push edx */
  push32((uint32_t)(EDX));
  /* 1266f54e call 0x12665100 */
  push32(0x1266f553u); f_12665100();
  /* 1266f553 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f556 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266f558 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f55b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 1266f55e push ecx */
  push32((uint32_t)(ECX));
  /* 1266f55f call 0x12665100 */
  push32(0x1266f564u); f_12665100();
  /* 1266f564 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f567 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266f569 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f56c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 1266f56f push eax */
  push32((uint32_t)(EAX));
  /* 1266f570 call 0x12665100 */
  push32(0x1266f575u); f_12665100();
  /* 1266f575 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f578 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266f57a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f57d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 1266f580 push edx */
  push32((uint32_t)(EDX));
  /* 1266f581 call 0x12665100 */
  push32(0x1266f586u); f_12665100();
  /* 1266f586 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f589 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266f58b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f58e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 1266f591 push ecx */
  push32((uint32_t)(ECX));
  /* 1266f592 call 0x12665100 */
  push32(0x1266f597u); f_12665100();
  /* 1266f597 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f59a push 2 */
  push32((uint32_t)(0x2u));
  /* 1266f59c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f59f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1266f5a2 push eax */
  push32((uint32_t)(EAX));
  /* 1266f5a3 call 0x12665100 */
  push32(0x1266f5a8u); f_12665100();
  /* 1266f5a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f5ab push 2 */
  push32((uint32_t)(0x2u));
  /* 1266f5ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f5b0 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 1266f5b3 push edx */
  push32((uint32_t)(EDX));
  /* 1266f5b4 call 0x12665100 */
  push32(0x1266f5b9u); f_12665100();
  /* 1266f5b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f5bc push 2 */
  push32((uint32_t)(0x2u));
  /* 1266f5be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f5c1 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 1266f5c4 push ecx */
  push32((uint32_t)(ECX));
  /* 1266f5c5 call 0x12665100 */
  push32(0x1266f5cau); f_12665100();
  /* 1266f5ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f5cd push 2 */
  push32((uint32_t)(0x2u));
  /* 1266f5cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f5d2 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 1266f5d5 push eax */
  push32((uint32_t)(EAX));
  /* 1266f5d6 call 0x12665100 */
  push32(0x1266f5dbu); f_12665100();
  /* 1266f5db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f5de push 2 */
  push32((uint32_t)(0x2u));
  /* 1266f5e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f5e3 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 1266f5e6 push edx */
  push32((uint32_t)(EDX));
  /* 1266f5e7 call 0x12665100 */
  push32(0x1266f5ecu); f_12665100();
  /* 1266f5ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f5ef push 2 */
  push32((uint32_t)(0x2u));
  /* 1266f5f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f5f4 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 1266f5f7 push ecx */
  push32((uint32_t)(ECX));
  /* 1266f5f8 call 0x12665100 */
  push32(0x1266f5fdu); f_12665100();
  /* 1266f5fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f600 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266f602 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f605 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 1266f608 push eax */
  push32((uint32_t)(EAX));
  /* 1266f609 call 0x12665100 */
  push32(0x1266f60eu); f_12665100();
  /* 1266f60e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f611 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266f613 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f616 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1266f619 push edx */
  push32((uint32_t)(EDX));
  /* 1266f61a call 0x12665100 */
  push32(0x1266f61fu); f_12665100();
  /* 1266f61f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f622 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266f624 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f627 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 1266f62a push ecx */
  push32((uint32_t)(ECX));
  /* 1266f62b call 0x12665100 */
  push32(0x1266f630u); f_12665100();
  /* 1266f630 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f633 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266f635 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f638 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 1266f63b push eax */
  push32((uint32_t)(EAX));
  /* 1266f63c call 0x12665100 */
  push32(0x1266f641u); f_12665100();
  /* 1266f641 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f644 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266f646 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f649 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 1266f64c push edx */
  push32((uint32_t)(EDX));
  /* 1266f64d call 0x12665100 */
  push32(0x1266f652u); f_12665100();
  /* 1266f652 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f655 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266f657 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f65a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 1266f65d push ecx */
  push32((uint32_t)(ECX));
  /* 1266f65e call 0x12665100 */
  push32(0x1266f663u); f_12665100();
  /* 1266f663 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f666 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266f668 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f66b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 1266f66e push eax */
  push32((uint32_t)(EAX));
  /* 1266f66f call 0x12665100 */
  push32(0x1266f674u); f_12665100();
  /* 1266f674 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f677 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266f679 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f67c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 1266f67f push edx */
  push32((uint32_t)(EDX));
  /* 1266f680 call 0x12665100 */
  push32(0x1266f685u); f_12665100();
  /* 1266f685 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f688 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266f68a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f68d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 1266f690 push ecx */
  push32((uint32_t)(ECX));
  /* 1266f691 call 0x12665100 */
  push32(0x1266f696u); f_12665100();
  /* 1266f696 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f699 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266f69b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f69e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 1266f6a1 push eax */
  push32((uint32_t)(EAX));
  /* 1266f6a2 call 0x12665100 */
  push32(0x1266f6a7u); f_12665100();
  /* 1266f6a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f6aa push 2 */
  push32((uint32_t)(0x2u));
  /* 1266f6ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f6af mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 1266f6b2 push edx */
  push32((uint32_t)(EDX));
  /* 1266f6b3 call 0x12665100 */
  push32(0x1266f6b8u); f_12665100();
  /* 1266f6b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f6bb push 2 */
  push32((uint32_t)(0x2u));
  /* 1266f6bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f6c0 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 1266f6c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1266f6c4 call 0x12665100 */
  push32(0x1266f6c9u); f_12665100();
  /* 1266f6c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f6cc push 2 */
  push32((uint32_t)(0x2u));
  /* 1266f6ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f6d1 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 1266f6d4 push eax */
  push32((uint32_t)(EAX));
  /* 1266f6d5 call 0x12665100 */
  push32(0x1266f6dau); f_12665100();
  /* 1266f6da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f6dd push 2 */
  push32((uint32_t)(0x2u));
  /* 1266f6df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f6e2 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 1266f6e8 push edx */
  push32((uint32_t)(EDX));
  /* 1266f6e9 call 0x12665100 */
  push32(0x1266f6eeu); f_12665100();
  /* 1266f6ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f6f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266f6f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f6f6 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 1266f6fc push ecx */
  push32((uint32_t)(ECX));
  /* 1266f6fd call 0x12665100 */
  push32(0x1266f702u); f_12665100();
  /* 1266f702 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f705 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266f707 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f70a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 1266f710 push eax */
  push32((uint32_t)(EAX));
  /* 1266f711 call 0x12665100 */
  push32(0x1266f716u); f_12665100();
  /* 1266f716 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f719 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266f71b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f71e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 1266f724 push edx */
  push32((uint32_t)(EDX));
  /* 1266f725 call 0x12665100 */
  push32(0x1266f72au); f_12665100();
  /* 1266f72a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f72d push 2 */
  push32((uint32_t)(0x2u));
  /* 1266f72f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f732 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 1266f738 push ecx */
  push32((uint32_t)(ECX));
  /* 1266f739 call 0x12665100 */
  push32(0x1266f73eu); f_12665100();
  /* 1266f73e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f741 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266f743 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f746 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 1266f74c push eax */
  push32((uint32_t)(EAX));
  /* 1266f74d call 0x12665100 */
  push32(0x1266f752u); f_12665100();
  /* 1266f752 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f755 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266f757 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f75a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 1266f760 push edx */
  push32((uint32_t)(EDX));
  /* 1266f761 call 0x12665100 */
  push32(0x1266f766u); f_12665100();
  /* 1266f766 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f769 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266f76b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f76e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 1266f774 push ecx */
  push32((uint32_t)(ECX));
  /* 1266f775 call 0x12665100 */
  push32(0x1266f77au); f_12665100();
  /* 1266f77a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f77d push 2 */
  push32((uint32_t)(0x2u));
  /* 1266f77f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f782 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 1266f788 push eax */
  push32((uint32_t)(EAX));
  /* 1266f789 call 0x12665100 */
  push32(0x1266f78eu); f_12665100();
  /* 1266f78e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f791 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266f793 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f796 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 1266f79c push edx */
  push32((uint32_t)(EDX));
  /* 1266f79d call 0x12665100 */
  push32(0x1266f7a2u); f_12665100();
  /* 1266f7a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f7a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266f7a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266f7aa mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 1266f7b0 push ecx */
  push32((uint32_t)(ECX));
  /* 1266f7b1 call 0x12665100 */
  push32(0x1266f7b6u); f_12665100();
  /* 1266f7b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1266f7b9:;
  /* 1266f7b9 pop ebp */
  EBP = (pop32());
  /* 1266f7ba ret  */
  ESPCHK(0x1266f4b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f7c0 @ 0x1266f7c0 (678 bytes, 180 insns) */
void f_1266f7c0(void) {
  FTRACE(0x1266f7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266f7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1266f7c1 mov ebp, esp */
  EBP = (ESP);
  /* 1266f7c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266f7c6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1266f7cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266f7cf mov ax, word ptr [0x1269080a] */
  AX = (r16((uint32_t)(0x1269080a)));
  /* 1266f7d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1266f7d8 cmp dword ptr [0x126907b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x126907b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266f7df je 0x1266f93a */
  if (C.zf) goto L_1266f93a;
  /* 1266f7e5 push 0x126907d8 */
  push32((uint32_t)(0x126907d8u));
  /* 1266f7ea push 0xe */
  push32((uint32_t)(0xeu));
  /* 1266f7ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266f7ef push ecx */
  push32((uint32_t)(ECX));
  /* 1266f7f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 1266f7f2 call 0x12672830 */
  push32(0x1266f7f7u); f_12672830();
  /* 1266f7f7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f7fa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266f7fd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1266f7ff mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1266f802 push 0x126907dc */
  push32((uint32_t)(0x126907dcu));
  /* 1266f807 push 0xf */
  push32((uint32_t)(0xfu));
  /* 1266f809 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266f80c push eax */
  push32((uint32_t)(EAX));
  /* 1266f80d push 1 */
  push32((uint32_t)(0x1u));
  /* 1266f80f call 0x12672830 */
  push32(0x1266f814u); f_12672830();
  /* 1266f814 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f817 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266f81a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266f81c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1266f81f push 0x126907e0 */
  push32((uint32_t)(0x126907e0u));
  /* 1266f824 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1266f826 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266f829 push edx */
  push32((uint32_t)(EDX));
  /* 1266f82a push 1 */
  push32((uint32_t)(0x1u));
  /* 1266f82c call 0x12672830 */
  push32(0x1266f831u); f_12672830();
  /* 1266f831 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f834 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266f837 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266f839 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1266f83c mov edx, dword ptr [0x126907e0] */
  EDX = (r32((uint32_t)(0x126907e0)));
  /* 1266f842 push edx */
  push32((uint32_t)(EDX));
  /* 1266f843 call 0x1266fa70 */
  push32(0x1266f848u); f_1266fa70();
  /* 1266f848 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f84b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266f84f je 0x1266f8a9 */
  if (C.zf) goto L_1266f8a9;
  /* 1266f851 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266f853 mov eax, dword ptr [0x126907d8] */
  EAX = (r32((uint32_t)(0x126907d8)));
  /* 1266f858 push eax */
  push32((uint32_t)(EAX));
  /* 1266f859 call 0x12665100 */
  push32(0x1266f85eu); f_12665100();
  /* 1266f85e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f861 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266f863 mov ecx, dword ptr [0x126907dc] */
  ECX = (r32((uint32_t)(0x126907dc)));
  /* 1266f869 push ecx */
  push32((uint32_t)(ECX));
  /* 1266f86a call 0x12665100 */
  push32(0x1266f86fu); f_12665100();
  /* 1266f86f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f872 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266f874 mov edx, dword ptr [0x126907e0] */
  EDX = (r32((uint32_t)(0x126907e0)));
  /* 1266f87a push edx */
  push32((uint32_t)(EDX));
  /* 1266f87b call 0x12665100 */
  push32(0x1266f880u); f_12665100();
  /* 1266f880 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f883 mov dword ptr [0x126907d8], 0 */
  w32((uint32_t)(0x126907d8), (0x0u));
  /* 1266f88d mov dword ptr [0x126907dc], 0 */
  w32((uint32_t)(0x126907dc), (0x0u));
  /* 1266f897 mov dword ptr [0x126907e0], 0 */
  w32((uint32_t)(0x126907e0), (0x0u));
  /* 1266f8a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1266f8a4 jmp 0x1266fa62 */
  goto L_1266fa62;
L_1266f8a9:;
  /* 1266f8a9 mov eax, dword ptr [0x1268fd88] */
  EAX = (r32((uint32_t)(0x1268fd88)));
  /* 1266f8ae cmp dword ptr [eax], 0x1268fd50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1268fd50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266f8b4 je 0x1266f8f0 */
  if (C.zf) goto L_1266f8f0;
  /* 1266f8b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266f8b8 mov ecx, dword ptr [0x1268fd88] */
  ECX = (r32((uint32_t)(0x1268fd88)));
  /* 1266f8be mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1266f8c0 push edx */
  push32((uint32_t)(EDX));
  /* 1266f8c1 call 0x12665100 */
  push32(0x1266f8c6u); f_12665100();
  /* 1266f8c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f8c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266f8cb mov eax, dword ptr [0x1268fd88] */
  EAX = (r32((uint32_t)(0x1268fd88)));
  /* 1266f8d0 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1266f8d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1266f8d4 call 0x12665100 */
  push32(0x1266f8d9u); f_12665100();
  /* 1266f8d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f8dc push 2 */
  push32((uint32_t)(0x2u));
  /* 1266f8de mov edx, dword ptr [0x1268fd88] */
  EDX = (r32((uint32_t)(0x1268fd88)));
  /* 1266f8e4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1266f8e7 push eax */
  push32((uint32_t)(EAX));
  /* 1266f8e8 call 0x12665100 */
  push32(0x1266f8edu); f_12665100();
  /* 1266f8ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1266f8f0:;
  /* 1266f8f0 mov ecx, dword ptr [0x1268fd88] */
  ECX = (r32((uint32_t)(0x1268fd88)));
  /* 1266f8f6 mov edx, dword ptr [0x126907d8] */
  EDX = (r32((uint32_t)(0x126907d8)));
  /* 1266f8fc mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1266f8fe mov eax, dword ptr [0x1268fd88] */
  EAX = (r32((uint32_t)(0x1268fd88)));
  /* 1266f903 mov ecx, dword ptr [0x126907dc] */
  ECX = (r32((uint32_t)(0x126907dc)));
  /* 1266f909 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1266f90c mov edx, dword ptr [0x1268fd88] */
  EDX = (r32((uint32_t)(0x1268fd88)));
  /* 1266f912 mov eax, dword ptr [0x126907e0] */
  EAX = (r32((uint32_t)(0x126907e0)));
  /* 1266f917 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1266f91a mov ecx, dword ptr [0x1268fd88] */
  ECX = (r32((uint32_t)(0x1268fd88)));
  /* 1266f920 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1266f922 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1266f924 mov byte ptr [0x1268eea8], al */
  w8((uint32_t)(0x1268eea8), (AL));
  /* 1266f929 mov dword ptr [0x1268eeac], 1 */
  w32((uint32_t)(0x1268eeac), (0x1u));
  /* 1266f933 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266f935 jmp 0x1266fa62 */
  goto L_1266fa62;
L_1266f93a:;
  /* 1266f93a push 2 */
  push32((uint32_t)(0x2u));
  /* 1266f93c mov ecx, dword ptr [0x126907d8] */
  ECX = (r32((uint32_t)(0x126907d8)));
  /* 1266f942 push ecx */
  push32((uint32_t)(ECX));
  /* 1266f943 call 0x12665100 */
  push32(0x1266f948u); f_12665100();
  /* 1266f948 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f94b push 2 */
  push32((uint32_t)(0x2u));
  /* 1266f94d mov edx, dword ptr [0x126907dc] */
  EDX = (r32((uint32_t)(0x126907dc)));
  /* 1266f953 push edx */
  push32((uint32_t)(EDX));
  /* 1266f954 call 0x12665100 */
  push32(0x1266f959u); f_12665100();
  /* 1266f959 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f95c push 2 */
  push32((uint32_t)(0x2u));
  /* 1266f95e mov eax, dword ptr [0x126907e0] */
  EAX = (r32((uint32_t)(0x126907e0)));
  /* 1266f963 push eax */
  push32((uint32_t)(EAX));
  /* 1266f964 call 0x12665100 */
  push32(0x1266f969u); f_12665100();
  /* 1266f969 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f96c mov dword ptr [0x126907d8], 0 */
  w32((uint32_t)(0x126907d8), (0x0u));
  /* 1266f976 mov dword ptr [0x126907dc], 0 */
  w32((uint32_t)(0x126907dc), (0x0u));
  /* 1266f980 mov dword ptr [0x126907e0], 0 */
  w32((uint32_t)(0x126907e0), (0x0u));
  /* 1266f98a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1266f98f push 0x1268c27c */
  push32((uint32_t)(0x1268c27cu));
  /* 1266f994 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266f996 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266f998 call 0x12664670 */
  push32(0x1266f99du); f_12664670();
  /* 1266f99d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f9a0 mov ecx, dword ptr [0x1268fd88] */
  ECX = (r32((uint32_t)(0x1268fd88)));
  /* 1266f9a6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1266f9a8 mov edx, dword ptr [0x1268fd88] */
  EDX = (r32((uint32_t)(0x1268fd88)));
  /* 1266f9ae cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266f9b1 jne 0x1266f9bb */
  if (!C.zf) goto L_1266f9bb;
  /* 1266f9b3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1266f9b6 jmp 0x1266fa62 */
  goto L_1266fa62;
L_1266f9bb:;
  /* 1266f9bb push 0x1268c24c */
  push32((uint32_t)(0x1268c24cu));
  /* 1266f9c0 mov eax, dword ptr [0x1268fd88] */
  EAX = (r32((uint32_t)(0x1268fd88)));
  /* 1266f9c5 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1266f9c7 push ecx */
  push32((uint32_t)(ECX));
  /* 1266f9c8 call 0x12667620 */
  push32(0x1266f9cdu); f_12667620();
  /* 1266f9cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f9d0 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 1266f9d5 push 0x1268c27c */
  push32((uint32_t)(0x1268c27cu));
  /* 1266f9da push 2 */
  push32((uint32_t)(0x2u));
  /* 1266f9dc push 2 */
  push32((uint32_t)(0x2u));
  /* 1266f9de call 0x12664670 */
  push32(0x1266f9e3u); f_12664670();
  /* 1266f9e3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266f9e6 mov edx, dword ptr [0x1268fd88] */
  EDX = (r32((uint32_t)(0x1268fd88)));
  /* 1266f9ec mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1266f9ef mov eax, dword ptr [0x1268fd88] */
  EAX = (r32((uint32_t)(0x1268fd88)));
  /* 1266f9f4 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266f9f8 jne 0x1266f9ff */
  if (!C.zf) goto L_1266f9ff;
  /* 1266f9fa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1266f9fd jmp 0x1266fa62 */
  goto L_1266fa62;
L_1266f9ff:;
  /* 1266f9ff mov ecx, dword ptr [0x1268fd88] */
  ECX = (r32((uint32_t)(0x1268fd88)));
  /* 1266fa05 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1266fa08 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1266fa0b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 1266fa10 push 0x1268c27c */
  push32((uint32_t)(0x1268c27cu));
  /* 1266fa15 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266fa17 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266fa19 call 0x12664670 */
  push32(0x1266fa1eu); f_12664670();
  /* 1266fa1e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266fa21 mov ecx, dword ptr [0x1268fd88] */
  ECX = (r32((uint32_t)(0x1268fd88)));
  /* 1266fa27 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1266fa2a mov edx, dword ptr [0x1268fd88] */
  EDX = (r32((uint32_t)(0x1268fd88)));
  /* 1266fa30 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266fa34 jne 0x1266fa3b */
  if (!C.zf) goto L_1266fa3b;
  /* 1266fa36 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1266fa39 jmp 0x1266fa62 */
  goto L_1266fa62;
L_1266fa3b:;
  /* 1266fa3b mov eax, dword ptr [0x1268fd88] */
  EAX = (r32((uint32_t)(0x1268fd88)));
  /* 1266fa40 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1266fa43 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1266fa46 mov edx, dword ptr [0x1268fd88] */
  EDX = (r32((uint32_t)(0x1268fd88)));
  /* 1266fa4c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1266fa4e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1266fa50 mov byte ptr [0x1268eea8], cl */
  w8((uint32_t)(0x1268eea8), (CL));
  /* 1266fa56 mov dword ptr [0x1268eeac], 1 */
  w32((uint32_t)(0x1268eeac), (0x1u));
  /* 1266fa60 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1266fa62:;
  /* 1266fa62 mov esp, ebp */
  ESP = (EBP);
  /* 1266fa64 pop ebp */
  EBP = (pop32());
  /* 1266fa65 ret  */
  ESPCHK(0x1266f7c0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x1266fa70 (125 bytes, 49 insns) */
void f_1266fa70(void) {
  FTRACE(0x1266fa70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266fa70 push ebp */
  push32((uint32_t)(EBP));
  /* 1266fa71 mov ebp, esp */
  EBP = (ESP);
  /* 1266fa73 push ecx */
  push32((uint32_t)(ECX));
L_1266fa74:;
  /* 1266fa74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266fa77 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1266fa7a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1266fa7c je 0x1266fae9 */
  if (C.zf) goto L_1266fae9;
  /* 1266fa7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266fa81 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1266fa84 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266fa87 jl 0x1266faad */
  if ((C.sf!=C.of)) goto L_1266faad;
  /* 1266fa89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266fa8c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1266fa8f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266fa92 jg 0x1266faad */
  if ((!C.zf&&C.sf==C.of)) goto L_1266faad;
  /* 1266fa94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266fa97 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1266fa9a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266fa9d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266faa0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1266faa2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266faa5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266faa8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1266faab jmp 0x1266fae7 */
  goto L_1266fae7;
L_1266faad:;
  /* 1266faad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266fab0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1266fab3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266fab6 jne 0x1266fade */
  if (!C.zf) goto L_1266fade;
  /* 1266fab8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266fabb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1266fabe:;
  /* 1266fabe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266fac1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266fac4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1266fac7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1266fac9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266facc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266facf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1266fad2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266fad5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1266fad8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266fada jne 0x1266fabe */
  if (!C.zf) goto L_1266fabe;
  /* 1266fadc jmp 0x1266fae7 */
  goto L_1266fae7;
L_1266fade:;
  /* 1266fade mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266fae1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266fae4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_1266fae7:;
  /* 1266fae7 jmp 0x1266fa74 */
  goto L_1266fa74;
L_1266fae9:;
  /* 1266fae9 mov esp, ebp */
  ESP = (EBP);
  /* 1266faeb pop ebp */
  EBP = (pop32());
  /* 1266faec ret  */
  ESPCHK(0x1266fa70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000faf0 @ 0x1266faf0 (304 bytes, 85 insns) */
void f_1266faf0(void) {
  FTRACE(0x1266faf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266faf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1266faf1 mov ebp, esp */
  EBP = (ESP);
  /* 1266faf3 push ecx */
  push32((uint32_t)(ECX));
  /* 1266faf4 cmp dword ptr [0x126907ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x126907ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266fafb je 0x1266fbbc */
  if (C.zf) goto L_1266fbbc;
  /* 1266fb01 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1266fb03 push 0x1268c288 */
  push32((uint32_t)(0x1268c288u));
  /* 1266fb08 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266fb0a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1266fb0c push 1 */
  push32((uint32_t)(0x1u));
  /* 1266fb0e call 0x12664a80 */
  push32(0x1266fb13u); f_12664a80();
  /* 1266fb13 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266fb16 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1266fb19 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266fb1d jne 0x1266fb29 */
  if (!C.zf) goto L_1266fb29;
  /* 1266fb1f mov eax, 1 */
  EAX = (0x1u);
  /* 1266fb24 jmp 0x1266fc1c */
  goto L_1266fc1c;
L_1266fb29:;
  /* 1266fb29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266fb2c push eax */
  push32((uint32_t)(EAX));
  /* 1266fb2d call 0x1266fc20 */
  push32(0x1266fb32u); f_1266fc20();
  /* 1266fb32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266fb35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266fb37 je 0x1266fb5d */
  if (C.zf) goto L_1266fb5d;
  /* 1266fb39 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266fb3c push ecx */
  push32((uint32_t)(ECX));
  /* 1266fb3d call 0x1266feb0 */
  push32(0x1266fb42u); f_1266feb0();
  /* 1266fb42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266fb45 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266fb47 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266fb4a push edx */
  push32((uint32_t)(EDX));
  /* 1266fb4b call 0x12665100 */
  push32(0x1266fb50u); f_12665100();
  /* 1266fb50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266fb53 mov eax, 1 */
  EAX = (0x1u);
  /* 1266fb58 jmp 0x1266fc1c */
  goto L_1266fc1c;
L_1266fb5d:;
  /* 1266fb5d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266fb60 mov ecx, dword ptr [0x1268fd88] */
  ECX = (r32((uint32_t)(0x1268fd88)));
  /* 1266fb66 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1266fb68 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1266fb6a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266fb6d mov ecx, dword ptr [0x1268fd88] */
  ECX = (r32((uint32_t)(0x1268fd88)));
  /* 1266fb73 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1266fb76 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1266fb79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266fb7c mov ecx, dword ptr [0x1268fd88] */
  ECX = (r32((uint32_t)(0x1268fd88)));
  /* 1266fb82 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1266fb85 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1266fb88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266fb8b mov dword ptr [0x1268fd88], eax */
  w32((uint32_t)(0x1268fd88), (EAX));
  /* 1266fb90 mov ecx, dword ptr [0x126907e4] */
  ECX = (r32((uint32_t)(0x126907e4)));
  /* 1266fb96 push ecx */
  push32((uint32_t)(ECX));
  /* 1266fb97 call 0x1266feb0 */
  push32(0x1266fb9cu); f_1266feb0();
  /* 1266fb9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266fb9f push 2 */
  push32((uint32_t)(0x2u));
  /* 1266fba1 mov edx, dword ptr [0x126907e4] */
  EDX = (r32((uint32_t)(0x126907e4)));
  /* 1266fba7 push edx */
  push32((uint32_t)(EDX));
  /* 1266fba8 call 0x12665100 */
  push32(0x1266fbadu); f_12665100();
  /* 1266fbad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266fbb0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266fbb3 mov dword ptr [0x126907e4], eax */
  w32((uint32_t)(0x126907e4), (EAX));
  /* 1266fbb8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266fbba jmp 0x1266fc1c */
  goto L_1266fc1c;
L_1266fbbc:;
  /* 1266fbbc mov ecx, dword ptr [0x1268fd88] */
  ECX = (r32((uint32_t)(0x1268fd88)));
  /* 1266fbc2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1266fbc4 mov dword ptr [0x1268fd58], edx */
  w32((uint32_t)(0x1268fd58), (EDX));
  /* 1266fbca mov eax, dword ptr [0x1268fd88] */
  EAX = (r32((uint32_t)(0x1268fd88)));
  /* 1266fbcf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1266fbd2 mov dword ptr [0x1268fd5c], ecx */
  w32((uint32_t)(0x1268fd5c), (ECX));
  /* 1266fbd8 mov edx, dword ptr [0x1268fd88] */
  EDX = (r32((uint32_t)(0x1268fd88)));
  /* 1266fbde mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1266fbe1 mov dword ptr [0x1268fd60], eax */
  w32((uint32_t)(0x1268fd60), (EAX));
  /* 1266fbe6 mov dword ptr [0x1268fd88], 0x1268fd58 */
  w32((uint32_t)(0x1268fd88), (0x1268fd58u));
  /* 1266fbf0 mov ecx, dword ptr [0x126907e4] */
  ECX = (r32((uint32_t)(0x126907e4)));
  /* 1266fbf6 push ecx */
  push32((uint32_t)(ECX));
  /* 1266fbf7 call 0x1266feb0 */
  push32(0x1266fbfcu); f_1266feb0();
  /* 1266fbfc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266fbff push 2 */
  push32((uint32_t)(0x2u));
  /* 1266fc01 mov edx, dword ptr [0x126907e4] */
  EDX = (r32((uint32_t)(0x126907e4)));
  /* 1266fc07 push edx */
  push32((uint32_t)(EDX));
  /* 1266fc08 call 0x12665100 */
  push32(0x1266fc0du); f_12665100();
  /* 1266fc0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266fc10 mov dword ptr [0x126907e4], 0 */
  w32((uint32_t)(0x126907e4), (0x0u));
  /* 1266fc1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1266fc1c:;
  /* 1266fc1c mov esp, ebp */
  ESP = (EBP);
  /* 1266fc1e pop ebp */
  EBP = (pop32());
  /* 1266fc1f ret  */
  ESPCHK(0x1266faf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc20 @ 0x1266fc20 (525 bytes, 200 insns) */
void f_1266fc20(void) {
  FTRACE(0x1266fc20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266fc20 push ebp */
  push32((uint32_t)(EBP));
  /* 1266fc21 mov ebp, esp */
  EBP = (ESP);
  /* 1266fc23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266fc26 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1266fc2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266fc2f mov ax, word ptr [0x12690804] */
  AX = (r16((uint32_t)(0x12690804)));
  /* 1266fc35 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1266fc38 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266fc3c jne 0x1266fc46 */
  if (!C.zf) goto L_1266fc46;
  /* 1266fc3e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1266fc41 jmp 0x1266fe29 */
  goto L_1266fe29;
L_1266fc46:;
  /* 1266fc46 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266fc49 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266fc4c push ecx */
  push32((uint32_t)(ECX));
  /* 1266fc4d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1266fc4f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266fc52 push edx */
  push32((uint32_t)(EDX));
  /* 1266fc53 push 1 */
  push32((uint32_t)(0x1u));
  /* 1266fc55 call 0x12672830 */
  push32(0x1266fc5au); f_12672830();
  /* 1266fc5a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266fc5d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266fc60 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266fc62 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1266fc65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266fc68 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266fc6b push edx */
  push32((uint32_t)(EDX));
  /* 1266fc6c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1266fc6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266fc71 push eax */
  push32((uint32_t)(EAX));
  /* 1266fc72 push 1 */
  push32((uint32_t)(0x1u));
  /* 1266fc74 call 0x12672830 */
  push32(0x1266fc79u); f_12672830();
  /* 1266fc79 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266fc7c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266fc7f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266fc81 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1266fc84 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266fc87 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266fc8a push edx */
  push32((uint32_t)(EDX));
  /* 1266fc8b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1266fc8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266fc90 push eax */
  push32((uint32_t)(EAX));
  /* 1266fc91 push 1 */
  push32((uint32_t)(0x1u));
  /* 1266fc93 call 0x12672830 */
  push32(0x1266fc98u); f_12672830();
  /* 1266fc98 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266fc9b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266fc9e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266fca0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1266fca3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266fca6 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266fca9 push edx */
  push32((uint32_t)(EDX));
  /* 1266fcaa push 0x17 */
  push32((uint32_t)(0x17u));
  /* 1266fcac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266fcaf push eax */
  push32((uint32_t)(EAX));
  /* 1266fcb0 push 1 */
  push32((uint32_t)(0x1u));
  /* 1266fcb2 call 0x12672830 */
  push32(0x1266fcb7u); f_12672830();
  /* 1266fcb7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266fcba mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266fcbd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266fcbf mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1266fcc2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266fcc5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266fcc8 push edx */
  push32((uint32_t)(EDX));
  /* 1266fcc9 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1266fccb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266fcce push eax */
  push32((uint32_t)(EAX));
  /* 1266fccf push 1 */
  push32((uint32_t)(0x1u));
  /* 1266fcd1 call 0x12672830 */
  push32(0x1266fcd6u); f_12672830();
  /* 1266fcd6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266fcd9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266fcdc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266fcde mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1266fce1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266fce4 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1266fce7 push eax */
  push32((uint32_t)(EAX));
  /* 1266fce8 call 0x1266fe30 */
  push32(0x1266fcedu); f_1266fe30();
  /* 1266fced add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266fcf0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266fcf3 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266fcf6 push ecx */
  push32((uint32_t)(ECX));
  /* 1266fcf7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1266fcf9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266fcfc push edx */
  push32((uint32_t)(EDX));
  /* 1266fcfd push 1 */
  push32((uint32_t)(0x1u));
  /* 1266fcff call 0x12672830 */
  push32(0x1266fd04u); f_12672830();
  /* 1266fd04 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266fd07 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266fd0a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266fd0c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1266fd0f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266fd12 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266fd15 push edx */
  push32((uint32_t)(EDX));
  /* 1266fd16 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 1266fd18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266fd1b push eax */
  push32((uint32_t)(EAX));
  /* 1266fd1c push 1 */
  push32((uint32_t)(0x1u));
  /* 1266fd1e call 0x12672830 */
  push32(0x1266fd23u); f_12672830();
  /* 1266fd23 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266fd26 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266fd29 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266fd2b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1266fd2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266fd31 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266fd34 push edx */
  push32((uint32_t)(EDX));
  /* 1266fd35 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1266fd37 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266fd3a push eax */
  push32((uint32_t)(EAX));
  /* 1266fd3b push 0 */
  push32((uint32_t)(0x0u));
  /* 1266fd3d call 0x12672830 */
  push32(0x1266fd42u); f_12672830();
  /* 1266fd42 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266fd45 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266fd48 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266fd4a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1266fd4d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266fd50 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266fd53 push edx */
  push32((uint32_t)(EDX));
  /* 1266fd54 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1266fd56 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266fd59 push eax */
  push32((uint32_t)(EAX));
  /* 1266fd5a push 0 */
  push32((uint32_t)(0x0u));
  /* 1266fd5c call 0x12672830 */
  push32(0x1266fd61u); f_12672830();
  /* 1266fd61 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266fd64 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266fd67 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266fd69 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1266fd6c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266fd6f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266fd72 push edx */
  push32((uint32_t)(EDX));
  /* 1266fd73 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 1266fd75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266fd78 push eax */
  push32((uint32_t)(EAX));
  /* 1266fd79 push 0 */
  push32((uint32_t)(0x0u));
  /* 1266fd7b call 0x12672830 */
  push32(0x1266fd80u); f_12672830();
  /* 1266fd80 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266fd83 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266fd86 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266fd88 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1266fd8b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266fd8e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266fd91 push edx */
  push32((uint32_t)(EDX));
  /* 1266fd92 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 1266fd94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266fd97 push eax */
  push32((uint32_t)(EAX));
  /* 1266fd98 push 0 */
  push32((uint32_t)(0x0u));
  /* 1266fd9a call 0x12672830 */
  push32(0x1266fd9fu); f_12672830();
  /* 1266fd9f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266fda2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266fda5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266fda7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1266fdaa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266fdad add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266fdb0 push edx */
  push32((uint32_t)(EDX));
  /* 1266fdb1 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 1266fdb3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266fdb6 push eax */
  push32((uint32_t)(EAX));
  /* 1266fdb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1266fdb9 call 0x12672830 */
  push32(0x1266fdbeu); f_12672830();
  /* 1266fdbe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266fdc1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266fdc4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266fdc6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1266fdc9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266fdcc add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266fdcf push edx */
  push32((uint32_t)(EDX));
  /* 1266fdd0 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 1266fdd2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266fdd5 push eax */
  push32((uint32_t)(EAX));
  /* 1266fdd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1266fdd8 call 0x12672830 */
  push32(0x1266fdddu); f_12672830();
  /* 1266fddd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266fde0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266fde3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266fde5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1266fde8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266fdeb add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266fdee push edx */
  push32((uint32_t)(EDX));
  /* 1266fdef push 0x52 */
  push32((uint32_t)(0x52u));
  /* 1266fdf1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266fdf4 push eax */
  push32((uint32_t)(EAX));
  /* 1266fdf5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1266fdf7 call 0x12672830 */
  push32(0x1266fdfcu); f_12672830();
  /* 1266fdfc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266fdff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266fe02 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266fe04 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1266fe07 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266fe0a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266fe0d push edx */
  push32((uint32_t)(EDX));
  /* 1266fe0e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 1266fe10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266fe13 push eax */
  push32((uint32_t)(EAX));
  /* 1266fe14 push 0 */
  push32((uint32_t)(0x0u));
  /* 1266fe16 call 0x12672830 */
  push32(0x1266fe1bu); f_12672830();
  /* 1266fe1b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266fe1e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1266fe21 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1266fe23 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1266fe26 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1266fe29:;
  /* 1266fe29 mov esp, ebp */
  ESP = (EBP);
  /* 1266fe2b pop ebp */
  EBP = (pop32());
  /* 1266fe2c ret  */
  ESPCHK(0x1266fc20u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x1266fe30 (125 bytes, 49 insns) */
void f_1266fe30(void) {
  FTRACE(0x1266fe30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266fe30 push ebp */
  push32((uint32_t)(EBP));
  /* 1266fe31 mov ebp, esp */
  EBP = (ESP);
  /* 1266fe33 push ecx */
  push32((uint32_t)(ECX));
L_1266fe34:;
  /* 1266fe34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266fe37 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1266fe3a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1266fe3c je 0x1266fea9 */
  if (C.zf) goto L_1266fea9;
  /* 1266fe3e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266fe41 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1266fe44 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266fe47 jl 0x1266fe6d */
  if ((C.sf!=C.of)) goto L_1266fe6d;
  /* 1266fe49 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266fe4c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1266fe4f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266fe52 jg 0x1266fe6d */
  if ((!C.zf&&C.sf==C.of)) goto L_1266fe6d;
  /* 1266fe54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266fe57 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1266fe5a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266fe5d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266fe60 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1266fe62 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266fe65 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266fe68 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1266fe6b jmp 0x1266fea7 */
  goto L_1266fea7;
L_1266fe6d:;
  /* 1266fe6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266fe70 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1266fe73 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266fe76 jne 0x1266fe9e */
  if (!C.zf) goto L_1266fe9e;
  /* 1266fe78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266fe7b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1266fe7e:;
  /* 1266fe7e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266fe81 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266fe84 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1266fe87 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1266fe89 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266fe8c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266fe8f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1266fe92 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1266fe95 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1266fe98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266fe9a jne 0x1266fe7e */
  if (!C.zf) goto L_1266fe7e;
  /* 1266fe9c jmp 0x1266fea7 */
  goto L_1266fea7;
L_1266fe9e:;
  /* 1266fe9e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266fea1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1266fea4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_1266fea7:;
  /* 1266fea7 jmp 0x1266fe34 */
  goto L_1266fe34;
L_1266fea9:;
  /* 1266fea9 mov esp, ebp */
  ESP = (EBP);
  /* 1266feab pop ebp */
  EBP = (pop32());
  /* 1266feac ret  */
  ESPCHK(0x1266fe30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000feb0 @ 0x1266feb0 (147 bytes, 52 insns) */
void f_1266feb0(void) {
  FTRACE(0x1266feb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266feb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1266feb1 mov ebp, esp */
  EBP = (ESP);
  /* 1266feb3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266feb7 jne 0x1266febe */
  if (!C.zf) goto L_1266febe;
  /* 1266feb9 jmp 0x1266ff41 */
  goto L_1266ff41;
L_1266febe:;
  /* 1266febe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266fec1 cmp dword ptr [eax + 0xc], 0x12690840 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x12690840u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266fec8 je 0x1266ff41 */
  if (C.zf) goto L_1266ff41;
  /* 1266feca push 2 */
  push32((uint32_t)(0x2u));
  /* 1266fecc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266fecf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1266fed2 push edx */
  push32((uint32_t)(EDX));
  /* 1266fed3 call 0x12665100 */
  push32(0x1266fed8u); f_12665100();
  /* 1266fed8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266fedb push 2 */
  push32((uint32_t)(0x2u));
  /* 1266fedd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266fee0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1266fee3 push ecx */
  push32((uint32_t)(ECX));
  /* 1266fee4 call 0x12665100 */
  push32(0x1266fee9u); f_12665100();
  /* 1266fee9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266feec push 2 */
  push32((uint32_t)(0x2u));
  /* 1266feee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266fef1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1266fef4 push eax */
  push32((uint32_t)(EAX));
  /* 1266fef5 call 0x12665100 */
  push32(0x1266fefau); f_12665100();
  /* 1266fefa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266fefd push 2 */
  push32((uint32_t)(0x2u));
  /* 1266feff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266ff02 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1266ff05 push edx */
  push32((uint32_t)(EDX));
  /* 1266ff06 call 0x12665100 */
  push32(0x1266ff0bu); f_12665100();
  /* 1266ff0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266ff0e push 2 */
  push32((uint32_t)(0x2u));
  /* 1266ff10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266ff13 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1266ff16 push ecx */
  push32((uint32_t)(ECX));
  /* 1266ff17 call 0x12665100 */
  push32(0x1266ff1cu); f_12665100();
  /* 1266ff1c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266ff1f push 2 */
  push32((uint32_t)(0x2u));
  /* 1266ff21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266ff24 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1266ff27 push eax */
  push32((uint32_t)(EAX));
  /* 1266ff28 call 0x12665100 */
  push32(0x1266ff2du); f_12665100();
  /* 1266ff2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266ff30 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266ff32 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1266ff35 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1266ff38 push edx */
  push32((uint32_t)(EDX));
  /* 1266ff39 call 0x12665100 */
  push32(0x1266ff3eu); f_12665100();
  /* 1266ff3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1266ff41:;
  /* 1266ff41 pop ebp */
  EBP = (pop32());
  /* 1266ff42 ret  */
  ESPCHK(0x1266feb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ff50 @ 0x1266ff50 (928 bytes, 284 insns) */
void f_1266ff50(void) {
  FTRACE(0x1266ff50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1266ff50 push ebp */
  push32((uint32_t)(EBP));
  /* 1266ff51 mov ebp, esp */
  EBP = (ESP);
  /* 1266ff53 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1266ff56 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 1266ff5d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 1266ff64 cmp dword ptr [0x126907a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x126907a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266ff6b je 0x126702a1 */
  if (C.zf) goto L_126702a1;
  /* 1266ff71 cmp dword ptr [0x126907b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x126907b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1266ff78 jne 0x1266ffa0 */
  if (!C.zf) goto L_1266ffa0;
  /* 1266ff7a push 0x126907b8 */
  push32((uint32_t)(0x126907b8u));
  /* 1266ff7f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 1266ff84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1266ff86 mov ax, word ptr [0x126907fc] */
  AX = (r16((uint32_t)(0x126907fc)));
  /* 1266ff8c push eax */
  push32((uint32_t)(EAX));
  /* 1266ff8d push 0 */
  push32((uint32_t)(0x0u));
  /* 1266ff8f call 0x12672830 */
  push32(0x1266ff94u); f_12672830();
  /* 1266ff94 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266ff97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1266ff99 je 0x1266ffa0 */
  if (C.zf) goto L_1266ffa0;
  /* 1266ff9b jmp 0x12670262 */
  goto L_12670262;
L_1266ffa0:;
  /* 1266ffa0 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 1266ffa2 push 0x1268c294 */
  push32((uint32_t)(0x1268c294u));
  /* 1266ffa7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266ffa9 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1266ffae call 0x12664670 */
  push32(0x1266ffb3u); f_12664670();
  /* 1266ffb3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266ffb6 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1266ffb9 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1266ffbb push 0x1268c294 */
  push32((uint32_t)(0x1268c294u));
  /* 1266ffc0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266ffc2 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1266ffc7 call 0x12664670 */
  push32(0x1266ffccu); f_12664670();
  /* 1266ffcc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266ffcf mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1266ffd2 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 1266ffd4 push 0x1268c294 */
  push32((uint32_t)(0x1268c294u));
  /* 1266ffd9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266ffdb push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1266ffe0 call 0x12664670 */
  push32(0x1266ffe5u); f_12664670();
  /* 1266ffe5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1266ffe8 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1266ffeb push 0x62 */
  push32((uint32_t)(0x62u));
  /* 1266ffed push 0x1268c294 */
  push32((uint32_t)(0x1268c294u));
  /* 1266fff2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1266fff4 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1266fff9 call 0x12664670 */
  push32(0x1266fffeu); f_12664670();
  /* 1266fffe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12670001 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12670004 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12670008 je 0x1267001c */
  if (C.zf) goto L_1267001c;
  /* 1267000a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267000e je 0x1267001c */
  if (C.zf) goto L_1267001c;
  /* 12670010 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12670014 je 0x1267001c */
  if (C.zf) goto L_1267001c;
  /* 12670016 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267001a jne 0x12670021 */
  if (!C.zf) goto L_12670021;
L_1267001c:;
  /* 1267001c jmp 0x12670262 */
  goto L_12670262;
L_12670021:;
  /* 12670021 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12670024 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12670027 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1267002e jmp 0x12670039 */
  goto L_12670039;
L_12670030:;
  /* 12670030 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12670033 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12670036 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12670039:;
  /* 12670039 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12670040 jge 0x12670055 */
  if ((C.sf==C.of)) goto L_12670055;
  /* 12670042 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12670045 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 12670048 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1267004a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1267004d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12670050 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12670053 jmp 0x12670030 */
  goto L_12670030;
L_12670055:;
  /* 12670055 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 12670058 push eax */
  push32((uint32_t)(EAX));
  /* 12670059 mov ecx, dword ptr [0x126907b8] */
  ECX = (r32((uint32_t)(0x126907b8)));
  /* 1267005f push ecx */
  push32((uint32_t)(ECX));
  /* 12670060 call dword ptr [0x126932f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932f8))), 0x12670066u);
  /* 12670066 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12670068 jne 0x1267006f */
  if (!C.zf) goto L_1267006f;
  /* 1267006a jmp 0x12670262 */
  goto L_12670262;
L_1267006f:;
  /* 1267006f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12670073 jbe 0x1267007a */
  if ((C.cf||C.zf)) goto L_1267007a;
  /* 12670075 jmp 0x12670262 */
  goto L_12670262;
L_1267007a:;
  /* 1267007a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1267007d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12670083 mov dword ptr [0x1268eea4], edx */
  w32((uint32_t)(0x1268eea4), (EDX));
  /* 12670089 cmp dword ptr [0x1268eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1268eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12670090 jle 0x126700e9 */
  if ((C.zf||C.sf!=C.of)) goto L_126700e9;
  /* 12670092 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 12670095 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12670098 jmp 0x126700a3 */
  goto L_126700a3;
L_1267009a:;
  /* 1267009a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1267009d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126700a0 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_126700a3:;
  /* 126700a3 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 126700a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126700a8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 126700aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126700ac je 0x126700e9 */
  if (C.zf) goto L_126700e9;
  /* 126700ae mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 126700b1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 126700b3 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 126700b6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 126700b8 je 0x126700e9 */
  if (C.zf) goto L_126700e9;
  /* 126700ba mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 126700bd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 126700bf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 126700c1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 126700c4 jmp 0x126700cf */
  goto L_126700cf;
L_126700c6:;
  /* 126700c6 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 126700c9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126700cc mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_126700cf:;
  /* 126700cf mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 126700d2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 126700d4 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 126700d7 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126700da jg 0x126700e7 */
  if ((!C.zf&&C.sf==C.of)) goto L_126700e7;
  /* 126700dc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 126700df add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126700e2 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 126700e5 jmp 0x126700c6 */
  goto L_126700c6;
L_126700e7:;
  /* 126700e7 jmp 0x1267009a */
  goto L_1267009a;
L_126700e9:;
  /* 126700e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 126700eb push 0 */
  push32((uint32_t)(0x0u));
  /* 126700ed push 0 */
  push32((uint32_t)(0x0u));
  /* 126700ef mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 126700f2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126700f5 push eax */
  push32((uint32_t)(EAX));
  /* 126700f6 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 126700fb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 126700fe push ecx */
  push32((uint32_t)(ECX));
  /* 126700ff push 1 */
  push32((uint32_t)(0x1u));
  /* 12670101 call 0x1266c8a0 */
  push32(0x12670106u); f_1266c8a0();
  /* 12670106 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12670109 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1267010b jne 0x12670112 */
  if (!C.zf) goto L_12670112;
  /* 1267010d jmp 0x12670262 */
  goto L_12670262;
L_12670112:;
  /* 12670112 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12670115 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 1267011a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1267011d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12670120 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12670127 jmp 0x12670132 */
  goto L_12670132;
L_12670129:;
  /* 12670129 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1267012c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1267012f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12670132:;
  /* 12670132 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12670139 jge 0x12670150 */
  if ((C.sf==C.of)) goto L_12670150;
  /* 1267013b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1267013e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 12670142 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 12670145 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12670148 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1267014b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1267014e jmp 0x12670129 */
  goto L_12670129;
L_12670150:;
  /* 12670150 push 0 */
  push32((uint32_t)(0x0u));
  /* 12670152 push 0 */
  push32((uint32_t)(0x0u));
  /* 12670154 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12670157 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1267015a push edx */
  push32((uint32_t)(EDX));
  /* 1267015b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12670160 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12670163 push eax */
  push32((uint32_t)(EAX));
  /* 12670164 push 1 */
  push32((uint32_t)(0x1u));
  /* 12670166 call 0x12672ad0 */
  push32(0x1267016bu); f_12672ad0();
  /* 1267016b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1267016e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12670170 jne 0x12670177 */
  if (!C.zf) goto L_12670177;
  /* 12670172 jmp 0x12670262 */
  goto L_12670262;
L_12670177:;
  /* 12670177 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1267017a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 1267017f cmp dword ptr [0x1268eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1268eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12670186 jle 0x126701e3 */
  if ((C.zf||C.sf!=C.of)) goto L_126701e3;
  /* 12670188 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 1267018b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1267018e jmp 0x12670199 */
  goto L_12670199;
L_12670190:;
  /* 12670190 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12670193 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12670196 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12670199:;
  /* 12670199 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1267019c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1267019e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 126701a0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 126701a2 je 0x126701e3 */
  if (C.zf) goto L_126701e3;
  /* 126701a4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 126701a7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 126701a9 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 126701ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 126701ae je 0x126701e3 */
  if (C.zf) goto L_126701e3;
  /* 126701b0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 126701b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126701b5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 126701b7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 126701ba jmp 0x126701c5 */
  goto L_126701c5;
L_126701bc:;
  /* 126701bc mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 126701bf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126701c2 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_126701c5:;
  /* 126701c5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 126701c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126701ca mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 126701cd cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126701d0 jg 0x126701e1 */
  if ((!C.zf&&C.sf==C.of)) goto L_126701e1;
  /* 126701d2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 126701d5 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 126701d8 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 126701df jmp 0x126701bc */
  goto L_126701bc;
L_126701e1:;
  /* 126701e1 jmp 0x12670190 */
  goto L_12670190;
L_126701e3:;
  /* 126701e3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 126701e6 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126701e9 mov dword ptr [0x1268ec98], eax */
  w32((uint32_t)(0x1268ec98), (EAX));
  /* 126701ee mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 126701f1 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126701f4 mov dword ptr [0x1268ec9c], ecx */
  w32((uint32_t)(0x1268ec9c), (ECX));
  /* 126701fa cmp dword ptr [0x126907e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x126907e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12670201 je 0x12670214 */
  if (C.zf) goto L_12670214;
  /* 12670203 push 2 */
  push32((uint32_t)(0x2u));
  /* 12670205 mov edx, dword ptr [0x126907e8] */
  EDX = (r32((uint32_t)(0x126907e8)));
  /* 1267020b push edx */
  push32((uint32_t)(EDX));
  /* 1267020c call 0x12665100 */
  push32(0x12670211u); f_12665100();
  /* 12670211 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12670214:;
  /* 12670214 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12670217 mov dword ptr [0x126907e8], eax */
  w32((uint32_t)(0x126907e8), (EAX));
  /* 1267021c cmp dword ptr [0x126907ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x126907ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12670223 je 0x12670236 */
  if (C.zf) goto L_12670236;
  /* 12670225 push 2 */
  push32((uint32_t)(0x2u));
  /* 12670227 mov ecx, dword ptr [0x126907ec] */
  ECX = (r32((uint32_t)(0x126907ec)));
  /* 1267022d push ecx */
  push32((uint32_t)(ECX));
  /* 1267022e call 0x12665100 */
  push32(0x12670233u); f_12665100();
  /* 12670233 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12670236:;
  /* 12670236 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12670239 mov dword ptr [0x126907ec], edx */
  w32((uint32_t)(0x126907ec), (EDX));
  /* 1267023f push 2 */
  push32((uint32_t)(0x2u));
  /* 12670241 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12670244 push eax */
  push32((uint32_t)(EAX));
  /* 12670245 call 0x12665100 */
  push32(0x1267024au); f_12665100();
  /* 1267024a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1267024d push 2 */
  push32((uint32_t)(0x2u));
  /* 1267024f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12670252 push ecx */
  push32((uint32_t)(ECX));
  /* 12670253 call 0x12665100 */
  push32(0x12670258u); f_12665100();
  /* 12670258 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1267025b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1267025d jmp 0x126702ec */
  goto L_126702ec;
L_12670262:;
  /* 12670262 push 2 */
  push32((uint32_t)(0x2u));
  /* 12670264 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12670267 push edx */
  push32((uint32_t)(EDX));
  /* 12670268 call 0x12665100 */
  push32(0x1267026du); f_12665100();
  /* 1267026d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12670270 push 2 */
  push32((uint32_t)(0x2u));
  /* 12670272 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12670275 push eax */
  push32((uint32_t)(EAX));
  /* 12670276 call 0x12665100 */
  push32(0x1267027bu); f_12665100();
  /* 1267027b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1267027e push 2 */
  push32((uint32_t)(0x2u));
  /* 12670280 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12670283 push ecx */
  push32((uint32_t)(ECX));
  /* 12670284 call 0x12665100 */
  push32(0x12670289u); f_12665100();
  /* 12670289 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1267028c push 2 */
  push32((uint32_t)(0x2u));
  /* 1267028e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12670291 push edx */
  push32((uint32_t)(EDX));
  /* 12670292 call 0x12665100 */
  push32(0x12670297u); f_12665100();
  /* 12670297 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1267029a mov eax, 1 */
  EAX = (0x1u);
  /* 1267029f jmp 0x126702ec */
  goto L_126702ec;
L_126702a1:;
  /* 126702a1 mov dword ptr [0x1268ec98], 0x1268eca2 */
  w32((uint32_t)(0x1268ec98), (0x1268eca2u));
  /* 126702ab mov dword ptr [0x1268ec9c], 0x1268eca2 */
  w32((uint32_t)(0x1268ec9c), (0x1268eca2u));
  /* 126702b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 126702b7 mov eax, dword ptr [0x126907e8] */
  EAX = (r32((uint32_t)(0x126907e8)));
  /* 126702bc push eax */
  push32((uint32_t)(EAX));
  /* 126702bd call 0x12665100 */
  push32(0x126702c2u); f_12665100();
  /* 126702c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126702c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 126702c7 mov ecx, dword ptr [0x126907ec] */
  ECX = (r32((uint32_t)(0x126907ec)));
  /* 126702cd push ecx */
  push32((uint32_t)(ECX));
  /* 126702ce call 0x12665100 */
  push32(0x126702d3u); f_12665100();
  /* 126702d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126702d6 mov dword ptr [0x126907e8], 0 */
  w32((uint32_t)(0x126907e8), (0x0u));
  /* 126702e0 mov dword ptr [0x126907ec], 0 */
  w32((uint32_t)(0x126907ec), (0x0u));
  /* 126702ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_126702ec:;
  /* 126702ec mov esp, ebp */
  ESP = (EBP);
  /* 126702ee pop ebp */
  EBP = (pop32());
  /* 126702ef ret  */
  ESPCHK(0x1266ff50u, _esp0);
  ESP += 4; return;
}

/* FUN_100102f0 @ 0x126702f0 (7 bytes, 5 insns) */
void f_126702f0(void) {
  FTRACE(0x126702f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126702f0 push ebp */
  push32((uint32_t)(EBP));
  /* 126702f1 mov ebp, esp */
  EBP = (ESP);
  /* 126702f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126702f5 pop ebp */
  EBP = (pop32());
  /* 126702f6 ret  */
  ESPCHK(0x126702f0u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x12670300 (129 bytes, 56 insns) */
void f_12670300(void) {
  FTRACE(0x12670300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12670300 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 12670304 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 12670308 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1267030e jne 0x1267034c */
  if (!C.zf) goto L_1267034c;
L_12670310:;
  /* 12670310 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12670312 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12670314 jne 0x12670344 */
  if (!C.zf) goto L_12670344;
  /* 12670316 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12670318 je 0x12670340 */
  if (C.zf) goto L_12670340;
  /* 1267031a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1267031d jne 0x12670344 */
  if (!C.zf) goto L_12670344;
  /* 1267031f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12670321 je 0x12670340 */
  if (C.zf) goto L_12670340;
  /* 12670323 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12670326 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12670329 jne 0x12670344 */
  if (!C.zf) goto L_12670344;
  /* 1267032b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1267032d je 0x12670340 */
  if (C.zf) goto L_12670340;
  /* 1267032f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12670332 jne 0x12670344 */
  if (!C.zf) goto L_12670344;
  /* 12670334 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12670337 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1267033a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1267033c jne 0x12670310 */
  if (!C.zf) goto L_12670310;
  /* 1267033e mov edi, edi */
  EDI = (EDI);
L_12670340:;
  /* 12670340 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12670342 ret  */
  ESPCHK(0x12670300u, _esp0);
  ESP += 4; return;
  /* 12670343 nop  */
  /* nop */
L_12670344:;
  /* 12670344 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12670346 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12670348 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12670349 ret  */
  ESPCHK(0x12670300u, _esp0);
  ESP += 4; return;
  /* 1267034a mov edi, edi */
  EDI = (EDI);
L_1267034c:;
  /* 1267034c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 12670352 je 0x12670368 */
  if (C.zf) goto L_12670368;
  /* 12670354 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12670356 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12670357 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12670359 jne 0x12670344 */
  if (!C.zf) goto L_12670344;
  /* 1267035b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1267035c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1267035e je 0x12670340 */
  if (C.zf) goto L_12670340;
  /* 12670360 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 12670366 je 0x12670310 */
  if (C.zf) goto L_12670310;
L_12670368:;
  /* 12670368 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1267036b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1267036e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12670370 jne 0x12670344 */
  if (!C.zf) goto L_12670344;
  /* 12670372 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12670374 je 0x12670340 */
  if (C.zf) goto L_12670340;
  /* 12670376 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12670379 jne 0x12670344 */
  if (!C.zf) goto L_12670344;
  /* 1267037b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1267037d je 0x12670340 */
  if (C.zf) goto L_12670340;
  /* 1267037f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12670382 jmp 0x12670310 */
  goto L_12670310;
}

/* FUN_10010390 @ 0x12670390 (62 bytes, 35 insns) */
void f_12670390(void) {
  FTRACE(0x12670390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12670390 push ebp */
  push32((uint32_t)(EBP));
  /* 12670391 mov ebp, esp */
  EBP = (ESP);
  /* 12670393 push esi */
  push32((uint32_t)(ESI));
  /* 12670394 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12670396 push eax */
  push32((uint32_t)(EAX));
  /* 12670397 push eax */
  push32((uint32_t)(EAX));
  /* 12670398 push eax */
  push32((uint32_t)(EAX));
  /* 12670399 push eax */
  push32((uint32_t)(EAX));
  /* 1267039a push eax */
  push32((uint32_t)(EAX));
  /* 1267039b push eax */
  push32((uint32_t)(EAX));
  /* 1267039c push eax */
  push32((uint32_t)(EAX));
  /* 1267039d push eax */
  push32((uint32_t)(EAX));
  /* 1267039e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 126703a1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_126703a4:;
  /* 126703a4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 126703a6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 126703a8 je 0x126703b1 */
  if (C.zf) goto L_126703b1;
  /* 126703aa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 126703ab bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x126703ab");
  /* 126703af jmp 0x126703a4 */
  goto L_126703a4;
L_126703b1:;
  /* 126703b1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 126703b4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 126703b7 nop  */
  /* nop */
L_126703b8:;
  /* 126703b8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 126703b9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 126703bb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 126703bd je 0x126703c6 */
  if (C.zf) goto L_126703c6;
  /* 126703bf inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 126703c0 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x126703c0");
  /* 126703c4 jae 0x126703b8 */
  if (!C.cf) goto L_126703b8;
L_126703c6:;
  /* 126703c6 mov eax, ecx */
  EAX = (ECX);
  /* 126703c8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126703cb pop esi */
  ESI = (pop32());
  /* 126703cc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 126703cd ret  */
  ESPCHK(0x12670390u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x126703d0 (56 bytes, 31 insns) */
void f_126703d0(void) {
  FTRACE(0x126703d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126703d0 push ebp */
  push32((uint32_t)(EBP));
  /* 126703d1 mov ebp, esp */
  EBP = (ESP);
  /* 126703d3 push edi */
  push32((uint32_t)(EDI));
  /* 126703d4 push esi */
  push32((uint32_t)(ESI));
  /* 126703d5 push ebx */
  push32((uint32_t)(EBX));
  /* 126703d6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 126703d9 jecxz 0x12670401 */
  x86_unimpl("jecxz @ 0x126703d9");
  /* 126703db mov ebx, ecx */
  EBX = (ECX);
  /* 126703dd mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 126703e0 mov esi, edi */
  ESI = (EDI);
  /* 126703e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126703e4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 126703e6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 126703e8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126703ea mov edi, esi */
  EDI = (ESI);
  /* 126703ec mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 126703ef repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 126703f1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 126703f4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 126703f6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 126703f9 ja 0x126703ff */
  if ((!C.cf&&!C.zf)) goto L_126703ff;
  /* 126703fb je 0x12670401 */
  if (C.zf) goto L_12670401;
  /* 126703fd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 126703fe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_126703ff:;
  /* 126703ff not ecx */
  ECX = (~(ECX));
L_12670401:;
  /* 12670401 mov eax, ecx */
  EAX = (ECX);
  /* 12670403 pop ebx */
  EBX = (pop32());
  /* 12670404 pop esi */
  ESI = (pop32());
  /* 12670405 pop edi */
  EDI = (pop32());
  /* 12670406 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12670407 ret  */
  ESPCHK(0x126703d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010410 @ 0x12670410 (58 bytes, 32 insns) */
void f_12670410(void) {
  FTRACE(0x12670410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12670410 push ebp */
  push32((uint32_t)(EBP));
  /* 12670411 mov ebp, esp */
  EBP = (ESP);
  /* 12670413 push esi */
  push32((uint32_t)(ESI));
  /* 12670414 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12670416 push eax */
  push32((uint32_t)(EAX));
  /* 12670417 push eax */
  push32((uint32_t)(EAX));
  /* 12670418 push eax */
  push32((uint32_t)(EAX));
  /* 12670419 push eax */
  push32((uint32_t)(EAX));
  /* 1267041a push eax */
  push32((uint32_t)(EAX));
  /* 1267041b push eax */
  push32((uint32_t)(EAX));
  /* 1267041c push eax */
  push32((uint32_t)(EAX));
  /* 1267041d push eax */
  push32((uint32_t)(EAX));
  /* 1267041e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12670421 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12670424:;
  /* 12670424 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12670426 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12670428 je 0x12670431 */
  if (C.zf) goto L_12670431;
  /* 1267042a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1267042b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1267042b");
  /* 1267042f jmp 0x12670424 */
  goto L_12670424;
L_12670431:;
  /* 12670431 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_12670434:;
  /* 12670434 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12670436 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12670438 je 0x12670444 */
  if (C.zf) goto L_12670444;
  /* 1267043a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1267043b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1267043b");
  /* 1267043f jae 0x12670434 */
  if (!C.cf) goto L_12670434;
  /* 12670441 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_12670444:;
  /* 12670444 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12670447 pop esi */
  ESI = (pop32());
  /* 12670448 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12670449 ret  */
  ESPCHK(0x12670410u, _esp0);
  ESP += 4; return;
}

/* FUN_10010450 @ 0x12670450 (512 bytes, 147 insns) */
void f_12670450(void) {
  FTRACE(0x12670450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12670450 push ebp */
  push32((uint32_t)(EBP));
  /* 12670451 mov ebp, esp */
  EBP = (ESP);
  /* 12670453 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12670456 cmp dword ptr [0x12690834], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12690834))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267045d jne 0x12670482 */
  if (!C.zf) goto L_12670482;
  /* 1267045f call 0x12670f20 */
  push32(0x12670464u); f_12670f20();
  /* 12670464 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12670466 je 0x12670472 */
  if (C.zf) goto L_12670472;
  /* 12670468 mov eax, dword ptr [0x126932bc] */
  EAX = (r32((uint32_t)(0x126932bc)));
  /* 1267046d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12670470 jmp 0x12670479 */
  goto L_12670479;
L_12670472:;
  /* 12670472 mov dword ptr [ebp - 8], 0x12670f70 */
  w32((uint32_t)(EBP + -0x8), (0x12670f70u));
L_12670479:;
  /* 12670479 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1267047c mov dword ptr [0x12690834], ecx */
  w32((uint32_t)(0x12690834), (ECX));
L_12670482:;
  /* 12670482 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12670486 jne 0x12670492 */
  if (!C.zf) goto L_12670492;
  /* 12670488 call 0x12670d70 */
  push32(0x1267048du); f_12670d70();
  /* 1267048d jmp 0x1267055e */
  goto L_1267055e;
L_12670492:;
  /* 12670492 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12670495 mov dword ptr [0x12690824], edx */
  w32((uint32_t)(0x12690824), (EDX));
  /* 1267049b cmp dword ptr [0x12690824], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12690824))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126704a2 je 0x126704c4 */
  if (C.zf) goto L_126704c4;
  /* 126704a4 mov eax, dword ptr [0x12690824] */
  EAX = (r32((uint32_t)(0x12690824)));
  /* 126704a9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 126704ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 126704ae je 0x126704c4 */
  if (C.zf) goto L_126704c4;
  /* 126704b0 push 0x12690824 */
  push32((uint32_t)(0x12690824u));
  /* 126704b5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 126704b7 push 0x1268fa90 */
  push32((uint32_t)(0x1268fa90u));
  /* 126704bc call 0x12670650 */
  push32(0x126704c1u); f_12670650();
  /* 126704c1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_126704c4:;
  /* 126704c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 126704c7 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126704ca mov dword ptr [0x12690828], edx */
  w32((uint32_t)(0x12690828), (EDX));
  /* 126704d0 cmp dword ptr [0x12690828], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12690828))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126704d7 je 0x126704f9 */
  if (C.zf) goto L_126704f9;
  /* 126704d9 mov eax, dword ptr [0x12690828] */
  EAX = (r32((uint32_t)(0x12690828)));
  /* 126704de movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 126704e1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 126704e3 je 0x126704f9 */
  if (C.zf) goto L_126704f9;
  /* 126704e5 push 0x12690828 */
  push32((uint32_t)(0x12690828u));
  /* 126704ea push 0x16 */
  push32((uint32_t)(0x16u));
  /* 126704ec push 0x1268f9d8 */
  push32((uint32_t)(0x1268f9d8u));
  /* 126704f1 call 0x12670650 */
  push32(0x126704f6u); f_12670650();
  /* 126704f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_126704f9:;
  /* 126704f9 mov dword ptr [0x1269082c], 0 */
  w32((uint32_t)(0x1269082c), (0x0u));
  /* 12670503 cmp dword ptr [0x12690824], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12690824))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267050a je 0x1267053d */
  if (C.zf) goto L_1267053d;
  /* 1267050c mov edx, dword ptr [0x12690824] */
  EDX = (r32((uint32_t)(0x12690824)));
  /* 12670512 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12670515 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12670517 je 0x1267053d */
  if (C.zf) goto L_1267053d;
  /* 12670519 cmp dword ptr [0x12690828], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12690828))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12670520 je 0x12670536 */
  if (C.zf) goto L_12670536;
  /* 12670522 mov ecx, dword ptr [0x12690828] */
  ECX = (r32((uint32_t)(0x12690828)));
  /* 12670528 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1267052b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1267052d je 0x12670536 */
  if (C.zf) goto L_12670536;
  /* 1267052f call 0x126706e0 */
  push32(0x12670534u); f_126706e0();
  /* 12670534 jmp 0x1267053b */
  goto L_1267053b;
L_12670536:;
  /* 12670536 call 0x12670ad0 */
  push32(0x1267053bu); f_12670ad0();
L_1267053b:;
  /* 1267053b jmp 0x1267055e */
  goto L_1267055e;
L_1267053d:;
  /* 1267053d cmp dword ptr [0x12690828], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12690828))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12670544 je 0x12670559 */
  if (C.zf) goto L_12670559;
  /* 12670546 mov eax, dword ptr [0x12690828] */
  EAX = (r32((uint32_t)(0x12690828)));
  /* 1267054b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1267054e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12670550 je 0x12670559 */
  if (C.zf) goto L_12670559;
  /* 12670552 call 0x12670c70 */
  push32(0x12670557u); f_12670c70();
  /* 12670557 jmp 0x1267055e */
  goto L_1267055e;
L_12670559:;
  /* 12670559 call 0x12670d70 */
  push32(0x1267055eu); f_12670d70();
L_1267055e:;
  /* 1267055e cmp dword ptr [0x1269082c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1269082c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12670565 jne 0x1267056e */
  if (!C.zf) goto L_1267056e;
  /* 12670567 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12670569 jmp 0x1267064c */
  goto L_1267064c;
L_1267056e:;
  /* 1267056e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12670571 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12670577 push edx */
  push32((uint32_t)(EDX));
  /* 12670578 call 0x12670da0 */
  push32(0x1267057du); f_12670da0();
  /* 1267057d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12670580 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12670583 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12670587 je 0x1267059c */
  if (C.zf) goto L_1267059c;
  /* 12670589 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1267058c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12670591 push eax */
  push32((uint32_t)(EAX));
  /* 12670592 call dword ptr [0x126932c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932c0))), 0x12670598u);
  /* 12670598 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1267059a jne 0x126705a3 */
  if (!C.zf) goto L_126705a3;
L_1267059c:;
  /* 1267059c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1267059e jmp 0x1267064c */
  goto L_1267064c;
L_126705a3:;
  /* 126705a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 126705a5 mov ecx, dword ptr [0x12690814] */
  ECX = (r32((uint32_t)(0x12690814)));
  /* 126705ab push ecx */
  push32((uint32_t)(ECX));
  /* 126705ac call dword ptr [0x126932d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932d0))), 0x126705b2u);
  /* 126705b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126705b4 jne 0x126705bd */
  if (!C.zf) goto L_126705bd;
  /* 126705b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126705b8 jmp 0x1267064c */
  goto L_1267064c;
L_126705bd:;
  /* 126705bd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126705c1 je 0x126705e8 */
  if (C.zf) goto L_126705e8;
  /* 126705c3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 126705c6 mov ax, word ptr [0x12690814] */
  AX = (r16((uint32_t)(0x12690814)));
  /* 126705cc mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 126705cf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 126705d2 mov dx, word ptr [0x12690830] */
  DX = (r16((uint32_t)(0x12690830)));
  /* 126705d9 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 126705dd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 126705e0 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 126705e4 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_126705e8:;
  /* 126705e8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126705ec je 0x12670647 */
  if (C.zf) goto L_12670647;
  /* 126705ee push 0x40 */
  push32((uint32_t)(0x40u));
  /* 126705f0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 126705f3 push edx */
  push32((uint32_t)(EDX));
  /* 126705f4 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 126705f9 mov eax, dword ptr [0x12690814] */
  EAX = (r32((uint32_t)(0x12690814)));
  /* 126705fe push eax */
  push32((uint32_t)(EAX));
  /* 126705ff call dword ptr [0x12690834] */
  call_ind((uint32_t)(r32((uint32_t)(0x12690834))), 0x12670605u);
  /* 12670605 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12670607 jne 0x1267060d */
  if (!C.zf) goto L_1267060d;
  /* 12670609 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1267060b jmp 0x1267064c */
  goto L_1267064c;
L_1267060d:;
  /* 1267060d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1267060f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12670612 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12670615 push ecx */
  push32((uint32_t)(ECX));
  /* 12670616 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 1267061b mov edx, dword ptr [0x12690830] */
  EDX = (r32((uint32_t)(0x12690830)));
  /* 12670621 push edx */
  push32((uint32_t)(EDX));
  /* 12670622 call dword ptr [0x12690834] */
  call_ind((uint32_t)(r32((uint32_t)(0x12690834))), 0x12670628u);
  /* 12670628 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1267062a jne 0x12670630 */
  if (!C.zf) goto L_12670630;
  /* 1267062c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1267062e jmp 0x1267064c */
  goto L_1267064c;
L_12670630:;
  /* 12670630 push 0xa */
  push32((uint32_t)(0xau));
  /* 12670632 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12670635 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1267063a push eax */
  push32((uint32_t)(EAX));
  /* 1267063b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1267063e push ecx */
  push32((uint32_t)(ECX));
  /* 1267063f call 0x126671b0 */
  push32(0x12670644u); f_126671b0();
  /* 12670644 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12670647:;
  /* 12670647 mov eax, 1 */
  EAX = (0x1u);
L_1267064c:;
  /* 1267064c mov esp, ebp */
  ESP = (EBP);
  /* 1267064e pop ebp */
  EBP = (pop32());
  /* 1267064f ret  */
  ESPCHK(0x12670450u, _esp0);
  ESP += 4; return;
}

/* FUN_10010650 @ 0x12670650 (130 bytes, 47 insns) */
void f_12670650(void) {
  FTRACE(0x12670650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12670650 push ebp */
  push32((uint32_t)(EBP));
  /* 12670651 mov ebp, esp */
  EBP = (ESP);
  /* 12670653 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12670656 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1267065d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12670664:;
  /* 12670664 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12670667 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267066a jg 0x126706ce */
  if ((!C.zf&&C.sf==C.of)) goto L_126706ce;
  /* 1267066c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12670670 je 0x126706ce */
  if (C.zf) goto L_126706ce;
  /* 12670672 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12670675 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12670678 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12670679 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1267067b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1267067d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12670680 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12670683 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12670686 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 12670689 push eax */
  push32((uint32_t)(EAX));
  /* 1267068a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1267068d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1267068f push edx */
  push32((uint32_t)(EDX));
  /* 12670690 call 0x12672d40 */
  push32(0x12670695u); f_12672d40();
  /* 12670695 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12670698 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1267069b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267069f jne 0x126706b2 */
  if (!C.zf) goto L_126706b2;
  /* 126706a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126706a4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126706a7 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 126706ab mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 126706ae mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 126706b0 jmp 0x126706cc */
  goto L_126706cc;
L_126706b2:;
  /* 126706b2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126706b6 jge 0x126706c3 */
  if ((C.sf==C.of)) goto L_126706c3;
  /* 126706b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126706bb sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126706be mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 126706c1 jmp 0x126706cc */
  goto L_126706cc;
L_126706c3:;
  /* 126706c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 126706c6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126706c9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_126706cc:;
  /* 126706cc jmp 0x12670664 */
  goto L_12670664;
L_126706ce:;
  /* 126706ce mov esp, ebp */
  ESP = (EBP);
  /* 126706d0 pop ebp */
  EBP = (pop32());
  /* 126706d1 ret  */
  ESPCHK(0x12670650u, _esp0);
  ESP += 4; return;
}

/* FUN_100106e0 @ 0x126706e0 (186 bytes, 50 insns) */
void f_126706e0(void) {
  FTRACE(0x126706e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126706e0 push ebp */
  push32((uint32_t)(EBP));
  /* 126706e1 mov ebp, esp */
  EBP = (ESP);
  /* 126706e3 push ecx */
  push32((uint32_t)(ECX));
  /* 126706e4 mov eax, dword ptr [0x12690824] */
  EAX = (r32((uint32_t)(0x12690824)));
  /* 126706e9 push eax */
  push32((uint32_t)(EAX));
  /* 126706ea call 0x126674a0 */
  push32(0x126706efu); f_126674a0();
  /* 126706ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126706f2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 126706f4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126706f7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 126706fa mov dword ptr [0x12690820], ecx */
  w32((uint32_t)(0x12690820), (ECX));
  /* 12670700 mov edx, dword ptr [0x12690828] */
  EDX = (r32((uint32_t)(0x12690828)));
  /* 12670706 push edx */
  push32((uint32_t)(EDX));
  /* 12670707 call 0x126674a0 */
  push32(0x1267070cu); f_126674a0();
  /* 1267070c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1267070f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12670711 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12670714 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12670717 mov dword ptr [0x12690818], ecx */
  w32((uint32_t)(0x12690818), (ECX));
  /* 1267071d mov dword ptr [0x12690814], 0 */
  w32((uint32_t)(0x12690814), (0x0u));
  /* 12670727 cmp dword ptr [0x12690820], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12690820))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267072e je 0x12670739 */
  if (C.zf) goto L_12670739;
  /* 12670730 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12670737 jmp 0x1267074b */
  goto L_1267074b;
L_12670739:;
  /* 12670739 mov edx, dword ptr [0x12690824] */
  EDX = (r32((uint32_t)(0x12690824)));
  /* 1267073f push edx */
  push32((uint32_t)(EDX));
  /* 12670740 call 0x12671180 */
  push32(0x12670745u); f_12671180();
  /* 12670745 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12670748 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1267074b:;
  /* 1267074b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1267074e mov dword ptr [0x1269081c], eax */
  w32((uint32_t)(0x1269081c), (EAX));
  /* 12670753 push 1 */
  push32((uint32_t)(0x1u));
  /* 12670755 push 0x126707a0 */
  push32((uint32_t)(0x126707a0u));
  /* 1267075a call dword ptr [0x126932c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932c4))), 0x12670760u);
  /* 12670760 mov ecx, dword ptr [0x1269082c] */
  ECX = (r32((uint32_t)(0x1269082c)));
  /* 12670766 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1267076c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1267076e je 0x1267078c */
  if (C.zf) goto L_1267078c;
  /* 12670770 mov edx, dword ptr [0x1269082c] */
  EDX = (r32((uint32_t)(0x1269082c)));
  /* 12670776 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 1267077c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1267077e je 0x1267078c */
  if (C.zf) goto L_1267078c;
  /* 12670780 mov eax, dword ptr [0x1269082c] */
  EAX = (r32((uint32_t)(0x1269082c)));
  /* 12670785 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 12670788 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1267078a jne 0x12670796 */
  if (!C.zf) goto L_12670796;
L_1267078c:;
  /* 1267078c mov dword ptr [0x1269082c], 0 */
  w32((uint32_t)(0x1269082c), (0x0u));
L_12670796:;
  /* 12670796 mov esp, ebp */
  ESP = (EBP);
  /* 12670798 pop ebp */
  EBP = (pop32());
  /* 12670799 ret  */
  ESPCHK(0x126706e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100107a0 @ 0x126707a0 (804 bytes, 220 insns) */
void f_126707a0(void) {
  FTRACE(0x126707a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126707a0 push ebp */
  push32((uint32_t)(EBP));
  /* 126707a1 mov ebp, esp */
  EBP = (ESP);
  /* 126707a3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 126707a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126707a9 push eax */
  push32((uint32_t)(EAX));
  /* 126707aa call 0x12671100 */
  push32(0x126707afu); f_12671100();
  /* 126707af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126707b2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 126707b5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 126707b7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 126707ba push ecx */
  push32((uint32_t)(ECX));
  /* 126707bb mov edx, dword ptr [0x12690818] */
  EDX = (r32((uint32_t)(0x12690818)));
  /* 126707c1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 126707c3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126707c5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 126707cb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126707d1 push edx */
  push32((uint32_t)(EDX));
  /* 126707d2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 126707d5 push eax */
  push32((uint32_t)(EAX));
  /* 126707d6 call dword ptr [0x12690834] */
  call_ind((uint32_t)(r32((uint32_t)(0x12690834))), 0x126707dcu);
  /* 126707dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126707de jne 0x126707f4 */
  if (!C.zf) goto L_126707f4;
  /* 126707e0 mov dword ptr [0x1269082c], 0 */
  w32((uint32_t)(0x1269082c), (0x0u));
  /* 126707ea mov eax, 1 */
  EAX = (0x1u);
  /* 126707ef jmp 0x12670abe */
  goto L_12670abe;
L_126707f4:;
  /* 126707f4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 126707f7 push ecx */
  push32((uint32_t)(ECX));
  /* 126707f8 mov edx, dword ptr [0x12690828] */
  EDX = (r32((uint32_t)(0x12690828)));
  /* 126707fe push edx */
  push32((uint32_t)(EDX));
  /* 126707ff call 0x12672d40 */
  push32(0x12670804u); f_12672d40();
  /* 12670804 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12670807 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12670809 jne 0x1267092f */
  if (!C.zf) goto L_1267092f;
  /* 1267080f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12670811 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12670814 push eax */
  push32((uint32_t)(EAX));
  /* 12670815 mov ecx, dword ptr [0x12690820] */
  ECX = (r32((uint32_t)(0x12690820)));
  /* 1267081b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1267081d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1267081f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 12670825 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1267082b push ecx */
  push32((uint32_t)(ECX));
  /* 1267082c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1267082f push edx */
  push32((uint32_t)(EDX));
  /* 12670830 call dword ptr [0x12690834] */
  call_ind((uint32_t)(r32((uint32_t)(0x12690834))), 0x12670836u);
  /* 12670836 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12670838 jne 0x1267084e */
  if (!C.zf) goto L_1267084e;
  /* 1267083a mov dword ptr [0x1269082c], 0 */
  w32((uint32_t)(0x1269082c), (0x0u));
  /* 12670844 mov eax, 1 */
  EAX = (0x1u);
  /* 12670849 jmp 0x12670abe */
  goto L_12670abe;
L_1267084e:;
  /* 1267084e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12670851 push eax */
  push32((uint32_t)(EAX));
  /* 12670852 mov ecx, dword ptr [0x12690824] */
  ECX = (r32((uint32_t)(0x12690824)));
  /* 12670858 push ecx */
  push32((uint32_t)(ECX));
  /* 12670859 call 0x12672d40 */
  push32(0x1267085eu); f_12672d40();
  /* 1267085e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12670861 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12670863 jne 0x12670890 */
  if (!C.zf) goto L_12670890;
  /* 12670865 mov edx, dword ptr [0x1269082c] */
  EDX = (r32((uint32_t)(0x1269082c)));
  /* 1267086b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 12670871 mov dword ptr [0x1269082c], edx */
  w32((uint32_t)(0x1269082c), (EDX));
  /* 12670877 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1267087a mov dword ptr [0x12690830], eax */
  w32((uint32_t)(0x12690830), (EAX));
  /* 1267087f mov ecx, dword ptr [0x12690830] */
  ECX = (r32((uint32_t)(0x12690830)));
  /* 12670885 mov dword ptr [0x12690814], ecx */
  w32((uint32_t)(0x12690814), (ECX));
  /* 1267088b jmp 0x1267092f */
  goto L_1267092f;
L_12670890:;
  /* 12670890 mov edx, dword ptr [0x1269082c] */
  EDX = (r32((uint32_t)(0x1269082c)));
  /* 12670896 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12670899 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1267089b jne 0x1267092f */
  if (!C.zf) goto L_1267092f;
  /* 126708a1 cmp dword ptr [0x1269081c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1269081c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126708a8 je 0x126708fd */
  if (C.zf) goto L_126708fd;
  /* 126708aa mov eax, dword ptr [0x1269081c] */
  EAX = (r32((uint32_t)(0x1269081c)));
  /* 126708af push eax */
  push32((uint32_t)(EAX));
  /* 126708b0 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 126708b3 push ecx */
  push32((uint32_t)(ECX));
  /* 126708b4 mov edx, dword ptr [0x12690824] */
  EDX = (r32((uint32_t)(0x12690824)));
  /* 126708ba push edx */
  push32((uint32_t)(EDX));
  /* 126708bb call 0x12672e10 */
  push32(0x126708c0u); f_12672e10();
  /* 126708c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126708c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126708c5 jne 0x126708fd */
  if (!C.zf) goto L_126708fd;
  /* 126708c7 mov eax, dword ptr [0x1269082c] */
  EAX = (r32((uint32_t)(0x1269082c)));
  /* 126708cc or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 126708ce mov dword ptr [0x1269082c], eax */
  w32((uint32_t)(0x1269082c), (EAX));
  /* 126708d3 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 126708d6 mov dword ptr [0x12690830], ecx */
  w32((uint32_t)(0x12690830), (ECX));
  /* 126708dc mov edx, dword ptr [0x12690824] */
  EDX = (r32((uint32_t)(0x12690824)));
  /* 126708e2 push edx */
  push32((uint32_t)(EDX));
  /* 126708e3 call 0x126674a0 */
  push32(0x126708e8u); f_126674a0();
  /* 126708e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126708eb cmp eax, dword ptr [0x1269081c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1269081c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126708f1 jne 0x126708fb */
  if (!C.zf) goto L_126708fb;
  /* 126708f3 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 126708f6 mov dword ptr [0x12690814], eax */
  w32((uint32_t)(0x12690814), (EAX));
L_126708fb:;
  /* 126708fb jmp 0x1267092f */
  goto L_1267092f;
L_126708fd:;
  /* 126708fd mov ecx, dword ptr [0x1269082c] */
  ECX = (r32((uint32_t)(0x1269082c)));
  /* 12670903 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12670906 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12670908 jne 0x1267092f */
  if (!C.zf) goto L_1267092f;
  /* 1267090a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1267090d push edx */
  push32((uint32_t)(EDX));
  /* 1267090e call 0x12670e40 */
  push32(0x12670913u); f_12670e40();
  /* 12670913 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12670916 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12670918 je 0x1267092f */
  if (C.zf) goto L_1267092f;
  /* 1267091a mov eax, dword ptr [0x1269082c] */
  EAX = (r32((uint32_t)(0x1269082c)));
  /* 1267091f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 12670921 mov dword ptr [0x1269082c], eax */
  w32((uint32_t)(0x1269082c), (EAX));
  /* 12670926 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12670929 mov dword ptr [0x12690830], ecx */
  w32((uint32_t)(0x12690830), (ECX));
L_1267092f:;
  /* 1267092f mov edx, dword ptr [0x1269082c] */
  EDX = (r32((uint32_t)(0x1269082c)));
  /* 12670935 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 1267093b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12670941 je 0x12670ab1 */
  if (C.zf) goto L_12670ab1;
  /* 12670947 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12670949 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1267094c push eax */
  push32((uint32_t)(EAX));
  /* 1267094d mov ecx, dword ptr [0x12690820] */
  ECX = (r32((uint32_t)(0x12690820)));
  /* 12670953 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12670955 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12670957 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 1267095d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12670963 push ecx */
  push32((uint32_t)(ECX));
  /* 12670964 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12670967 push edx */
  push32((uint32_t)(EDX));
  /* 12670968 call dword ptr [0x12690834] */
  call_ind((uint32_t)(r32((uint32_t)(0x12690834))), 0x1267096eu);
  /* 1267096e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12670970 jne 0x12670986 */
  if (!C.zf) goto L_12670986;
  /* 12670972 mov dword ptr [0x1269082c], 0 */
  w32((uint32_t)(0x1269082c), (0x0u));
  /* 1267097c mov eax, 1 */
  EAX = (0x1u);
  /* 12670981 jmp 0x12670abe */
  goto L_12670abe;
L_12670986:;
  /* 12670986 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12670989 push eax */
  push32((uint32_t)(EAX));
  /* 1267098a mov ecx, dword ptr [0x12690824] */
  ECX = (r32((uint32_t)(0x12690824)));
  /* 12670990 push ecx */
  push32((uint32_t)(ECX));
  /* 12670991 call 0x12672d40 */
  push32(0x12670996u); f_12672d40();
  /* 12670996 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12670999 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1267099b jne 0x12670a50 */
  if (!C.zf) goto L_12670a50;
  /* 126709a1 mov edx, dword ptr [0x1269082c] */
  EDX = (r32((uint32_t)(0x1269082c)));
  /* 126709a7 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 126709aa mov dword ptr [0x1269082c], edx */
  w32((uint32_t)(0x1269082c), (EDX));
  /* 126709b0 cmp dword ptr [0x12690820], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12690820))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126709b7 je 0x126709da */
  if (C.zf) goto L_126709da;
  /* 126709b9 mov eax, dword ptr [0x1269082c] */
  EAX = (r32((uint32_t)(0x1269082c)));
  /* 126709be or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 126709c1 mov dword ptr [0x1269082c], eax */
  w32((uint32_t)(0x1269082c), (EAX));
  /* 126709c6 cmp dword ptr [0x12690814], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12690814))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126709cd jne 0x126709d8 */
  if (!C.zf) goto L_126709d8;
  /* 126709cf mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 126709d2 mov dword ptr [0x12690814], ecx */
  w32((uint32_t)(0x12690814), (ECX));
L_126709d8:;
  /* 126709d8 jmp 0x12670a4e */
  goto L_12670a4e;
L_126709da:;
  /* 126709da cmp dword ptr [0x1269081c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1269081c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126709e1 je 0x12670a2f */
  if (C.zf) goto L_12670a2f;
  /* 126709e3 mov edx, dword ptr [0x12690824] */
  EDX = (r32((uint32_t)(0x12690824)));
  /* 126709e9 push edx */
  push32((uint32_t)(EDX));
  /* 126709ea call 0x126674a0 */
  push32(0x126709efu); f_126674a0();
  /* 126709ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126709f2 cmp eax, dword ptr [0x1269081c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1269081c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126709f8 jne 0x12670a2f */
  if (!C.zf) goto L_12670a2f;
  /* 126709fa push 1 */
  push32((uint32_t)(0x1u));
  /* 126709fc mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 126709ff push eax */
  push32((uint32_t)(EAX));
  /* 12670a00 call 0x12670e90 */
  push32(0x12670a05u); f_12670e90();
  /* 12670a05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12670a08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12670a0a je 0x12670a2d */
  if (C.zf) goto L_12670a2d;
  /* 12670a0c mov ecx, dword ptr [0x1269082c] */
  ECX = (r32((uint32_t)(0x1269082c)));
  /* 12670a12 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12670a15 mov dword ptr [0x1269082c], ecx */
  w32((uint32_t)(0x1269082c), (ECX));
  /* 12670a1b cmp dword ptr [0x12690814], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12690814))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12670a22 jne 0x12670a2d */
  if (!C.zf) goto L_12670a2d;
  /* 12670a24 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12670a27 mov dword ptr [0x12690814], edx */
  w32((uint32_t)(0x12690814), (EDX));
L_12670a2d:;
  /* 12670a2d jmp 0x12670a4e */
  goto L_12670a4e;
L_12670a2f:;
  /* 12670a2f mov eax, dword ptr [0x1269082c] */
  EAX = (r32((uint32_t)(0x1269082c)));
  /* 12670a34 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12670a37 mov dword ptr [0x1269082c], eax */
  w32((uint32_t)(0x1269082c), (EAX));
  /* 12670a3c cmp dword ptr [0x12690814], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12690814))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12670a43 jne 0x12670a4e */
  if (!C.zf) goto L_12670a4e;
  /* 12670a45 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12670a48 mov dword ptr [0x12690814], ecx */
  w32((uint32_t)(0x12690814), (ECX));
L_12670a4e:;
  /* 12670a4e jmp 0x12670ab1 */
  goto L_12670ab1;
L_12670a50:;
  /* 12670a50 cmp dword ptr [0x12690820], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12690820))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12670a57 jne 0x12670ab1 */
  if (!C.zf) goto L_12670ab1;
  /* 12670a59 cmp dword ptr [0x1269081c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1269081c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12670a60 je 0x12670ab1 */
  if (C.zf) goto L_12670ab1;
  /* 12670a62 mov edx, dword ptr [0x1269081c] */
  EDX = (r32((uint32_t)(0x1269081c)));
  /* 12670a68 push edx */
  push32((uint32_t)(EDX));
  /* 12670a69 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12670a6c push eax */
  push32((uint32_t)(EAX));
  /* 12670a6d mov ecx, dword ptr [0x12690824] */
  ECX = (r32((uint32_t)(0x12690824)));
  /* 12670a73 push ecx */
  push32((uint32_t)(ECX));
  /* 12670a74 call 0x12672e10 */
  push32(0x12670a79u); f_12672e10();
  /* 12670a79 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12670a7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12670a7e jne 0x12670ab1 */
  if (!C.zf) goto L_12670ab1;
  /* 12670a80 push 0 */
  push32((uint32_t)(0x0u));
  /* 12670a82 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12670a85 push edx */
  push32((uint32_t)(EDX));
  /* 12670a86 call 0x12670e90 */
  push32(0x12670a8bu); f_12670e90();
  /* 12670a8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12670a8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12670a90 je 0x12670ab1 */
  if (C.zf) goto L_12670ab1;
  /* 12670a92 mov eax, dword ptr [0x1269082c] */
  EAX = (r32((uint32_t)(0x1269082c)));
  /* 12670a97 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12670a9a mov dword ptr [0x1269082c], eax */
  w32((uint32_t)(0x1269082c), (EAX));
  /* 12670a9f cmp dword ptr [0x12690814], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12690814))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12670aa6 jne 0x12670ab1 */
  if (!C.zf) goto L_12670ab1;
  /* 12670aa8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12670aab mov dword ptr [0x12690814], ecx */
  w32((uint32_t)(0x12690814), (ECX));
L_12670ab1:;
  /* 12670ab1 mov eax, dword ptr [0x1269082c] */
  EAX = (r32((uint32_t)(0x1269082c)));
  /* 12670ab6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12670ab9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12670abb sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12670abd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12670abe:;
  /* 12670abe mov esp, ebp */
  ESP = (EBP);
  /* 12670ac0 pop ebp */
  EBP = (pop32());
  /* 12670ac1 ret 4 */
  ESPCHK(0x126707a0u, _esp0);
  ESP += 8; return;
}

/* FUN_10010ad0 @ 0x12670ad0 (116 bytes, 33 insns) */
void f_12670ad0(void) {
  FTRACE(0x12670ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12670ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 12670ad1 mov ebp, esp */
  EBP = (ESP);
  /* 12670ad3 push ecx */
  push32((uint32_t)(ECX));
  /* 12670ad4 mov eax, dword ptr [0x12690824] */
  EAX = (r32((uint32_t)(0x12690824)));
  /* 12670ad9 push eax */
  push32((uint32_t)(EAX));
  /* 12670ada call 0x126674a0 */
  push32(0x12670adfu); f_126674a0();
  /* 12670adf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12670ae2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12670ae4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12670ae7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12670aea mov dword ptr [0x12690820], ecx */
  w32((uint32_t)(0x12690820), (ECX));
  /* 12670af0 cmp dword ptr [0x12690820], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12690820))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12670af7 je 0x12670b02 */
  if (C.zf) goto L_12670b02;
  /* 12670af9 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12670b00 jmp 0x12670b14 */
  goto L_12670b14;
L_12670b02:;
  /* 12670b02 mov edx, dword ptr [0x12690824] */
  EDX = (r32((uint32_t)(0x12690824)));
  /* 12670b08 push edx */
  push32((uint32_t)(EDX));
  /* 12670b09 call 0x12671180 */
  push32(0x12670b0eu); f_12671180();
  /* 12670b0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12670b11 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12670b14:;
  /* 12670b14 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12670b17 mov dword ptr [0x1269081c], eax */
  w32((uint32_t)(0x1269081c), (EAX));
  /* 12670b1c push 1 */
  push32((uint32_t)(0x1u));
  /* 12670b1e push 0x12670b50 */
  push32((uint32_t)(0x12670b50u));
  /* 12670b23 call dword ptr [0x126932c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932c4))), 0x12670b29u);
  /* 12670b29 mov ecx, dword ptr [0x1269082c] */
  ECX = (r32((uint32_t)(0x1269082c)));
  /* 12670b2f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12670b32 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12670b34 jne 0x12670b40 */
  if (!C.zf) goto L_12670b40;
  /* 12670b36 mov dword ptr [0x1269082c], 0 */
  w32((uint32_t)(0x1269082c), (0x0u));
L_12670b40:;
  /* 12670b40 mov esp, ebp */
  ESP = (EBP);
  /* 12670b42 pop ebp */
  EBP = (pop32());
  /* 12670b43 ret  */
  ESPCHK(0x12670ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010b50 @ 0x12670b50 (287 bytes, 86 insns) */
void f_12670b50(void) {
  FTRACE(0x12670b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12670b50 push ebp */
  push32((uint32_t)(EBP));
  /* 12670b51 mov ebp, esp */
  EBP = (ESP);
  /* 12670b53 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12670b56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12670b59 push eax */
  push32((uint32_t)(EAX));
  /* 12670b5a call 0x12671100 */
  push32(0x12670b5fu); f_12671100();
  /* 12670b5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12670b62 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12670b65 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12670b67 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12670b6a push ecx */
  push32((uint32_t)(ECX));
  /* 12670b6b mov edx, dword ptr [0x12690820] */
  EDX = (r32((uint32_t)(0x12690820)));
  /* 12670b71 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12670b73 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12670b75 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 12670b7b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12670b81 push edx */
  push32((uint32_t)(EDX));
  /* 12670b82 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12670b85 push eax */
  push32((uint32_t)(EAX));
  /* 12670b86 call dword ptr [0x12690834] */
  call_ind((uint32_t)(r32((uint32_t)(0x12690834))), 0x12670b8cu);
  /* 12670b8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12670b8e jne 0x12670ba4 */
  if (!C.zf) goto L_12670ba4;
  /* 12670b90 mov dword ptr [0x1269082c], 0 */
  w32((uint32_t)(0x1269082c), (0x0u));
  /* 12670b9a mov eax, 1 */
  EAX = (0x1u);
  /* 12670b9f jmp 0x12670c69 */
  goto L_12670c69;
L_12670ba4:;
  /* 12670ba4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12670ba7 push ecx */
  push32((uint32_t)(ECX));
  /* 12670ba8 mov edx, dword ptr [0x12690824] */
  EDX = (r32((uint32_t)(0x12690824)));
  /* 12670bae push edx */
  push32((uint32_t)(EDX));
  /* 12670baf call 0x12672d40 */
  push32(0x12670bb4u); f_12672d40();
  /* 12670bb4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12670bb7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12670bb9 jne 0x12670bf9 */
  if (!C.zf) goto L_12670bf9;
  /* 12670bbb cmp dword ptr [0x12690820], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12690820))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12670bc2 jne 0x12670bd6 */
  if (!C.zf) goto L_12670bd6;
  /* 12670bc4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12670bc6 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12670bc9 push eax */
  push32((uint32_t)(EAX));
  /* 12670bca call 0x12670e90 */
  push32(0x12670bcfu); f_12670e90();
  /* 12670bcf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12670bd2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12670bd4 je 0x12670bf7 */
  if (C.zf) goto L_12670bf7;
L_12670bd6:;
  /* 12670bd6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12670bd9 mov dword ptr [0x12690830], ecx */
  w32((uint32_t)(0x12690830), (ECX));
  /* 12670bdf mov edx, dword ptr [0x12690830] */
  EDX = (r32((uint32_t)(0x12690830)));
  /* 12670be5 mov dword ptr [0x12690814], edx */
  w32((uint32_t)(0x12690814), (EDX));
  /* 12670beb mov eax, dword ptr [0x1269082c] */
  EAX = (r32((uint32_t)(0x1269082c)));
  /* 12670bf0 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12670bf2 mov dword ptr [0x1269082c], eax */
  w32((uint32_t)(0x1269082c), (EAX));
L_12670bf7:;
  /* 12670bf7 jmp 0x12670c5c */
  goto L_12670c5c;
L_12670bf9:;
  /* 12670bf9 cmp dword ptr [0x12690820], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12690820))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12670c00 jne 0x12670c5c */
  if (!C.zf) goto L_12670c5c;
  /* 12670c02 cmp dword ptr [0x1269081c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1269081c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12670c09 je 0x12670c5c */
  if (C.zf) goto L_12670c5c;
  /* 12670c0b mov ecx, dword ptr [0x1269081c] */
  ECX = (r32((uint32_t)(0x1269081c)));
  /* 12670c11 push ecx */
  push32((uint32_t)(ECX));
  /* 12670c12 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 12670c15 push edx */
  push32((uint32_t)(EDX));
  /* 12670c16 mov eax, dword ptr [0x12690824] */
  EAX = (r32((uint32_t)(0x12690824)));
  /* 12670c1b push eax */
  push32((uint32_t)(EAX));
  /* 12670c1c call 0x12672e10 */
  push32(0x12670c21u); f_12672e10();
  /* 12670c21 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12670c24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12670c26 jne 0x12670c5c */
  if (!C.zf) goto L_12670c5c;
  /* 12670c28 push 0 */
  push32((uint32_t)(0x0u));
  /* 12670c2a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12670c2d push ecx */
  push32((uint32_t)(ECX));
  /* 12670c2e call 0x12670e90 */
  push32(0x12670c33u); f_12670e90();
  /* 12670c33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12670c36 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12670c38 je 0x12670c5c */
  if (C.zf) goto L_12670c5c;
  /* 12670c3a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12670c3d mov dword ptr [0x12690830], edx */
  w32((uint32_t)(0x12690830), (EDX));
  /* 12670c43 mov eax, dword ptr [0x12690830] */
  EAX = (r32((uint32_t)(0x12690830)));
  /* 12670c48 mov dword ptr [0x12690814], eax */
  w32((uint32_t)(0x12690814), (EAX));
  /* 12670c4d mov ecx, dword ptr [0x1269082c] */
  ECX = (r32((uint32_t)(0x1269082c)));
  /* 12670c53 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12670c56 mov dword ptr [0x1269082c], ecx */
  w32((uint32_t)(0x1269082c), (ECX));
L_12670c5c:;
  /* 12670c5c mov eax, dword ptr [0x1269082c] */
  EAX = (r32((uint32_t)(0x1269082c)));
  /* 12670c61 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12670c64 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12670c66 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12670c68 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12670c69:;
  /* 12670c69 mov esp, ebp */
  ESP = (EBP);
  /* 12670c6b pop ebp */
  EBP = (pop32());
  /* 12670c6c ret 4 */
  ESPCHK(0x12670b50u, _esp0);
  ESP += 8; return;
}

/* FUN_10010c70 @ 0x12670c70 (69 bytes, 20 insns) */
void f_12670c70(void) {
  FTRACE(0x12670c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12670c70 push ebp */
  push32((uint32_t)(EBP));
  /* 12670c71 mov ebp, esp */
  EBP = (ESP);
  /* 12670c73 mov eax, dword ptr [0x12690828] */
  EAX = (r32((uint32_t)(0x12690828)));
  /* 12670c78 push eax */
  push32((uint32_t)(EAX));
  /* 12670c79 call 0x126674a0 */
  push32(0x12670c7eu); f_126674a0();
  /* 12670c7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12670c81 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12670c83 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12670c86 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12670c89 mov dword ptr [0x12690818], ecx */
  w32((uint32_t)(0x12690818), (ECX));
  /* 12670c8f push 1 */
  push32((uint32_t)(0x1u));
  /* 12670c91 push 0x12670cc0 */
  push32((uint32_t)(0x12670cc0u));
  /* 12670c96 call dword ptr [0x126932c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932c4))), 0x12670c9cu);
  /* 12670c9c mov edx, dword ptr [0x1269082c] */
  EDX = (r32((uint32_t)(0x1269082c)));
  /* 12670ca2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12670ca5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12670ca7 jne 0x12670cb3 */
  if (!C.zf) goto L_12670cb3;
  /* 12670ca9 mov dword ptr [0x1269082c], 0 */
  w32((uint32_t)(0x1269082c), (0x0u));
L_12670cb3:;
  /* 12670cb3 pop ebp */
  EBP = (pop32());
  /* 12670cb4 ret  */
  ESPCHK(0x12670c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10010cc0 @ 0x12670cc0 (172 bytes, 54 insns) */
void f_12670cc0(void) {
  FTRACE(0x12670cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12670cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12670cc1 mov ebp, esp */
  EBP = (ESP);
  /* 12670cc3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12670cc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12670cc9 push eax */
  push32((uint32_t)(EAX));
  /* 12670cca call 0x12671100 */
  push32(0x12670ccfu); f_12671100();
  /* 12670ccf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12670cd2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12670cd5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12670cd7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12670cda push ecx */
  push32((uint32_t)(ECX));
  /* 12670cdb mov edx, dword ptr [0x12690818] */
  EDX = (r32((uint32_t)(0x12690818)));
  /* 12670ce1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12670ce3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12670ce5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 12670ceb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12670cf1 push edx */
  push32((uint32_t)(EDX));
  /* 12670cf2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12670cf5 push eax */
  push32((uint32_t)(EAX));
  /* 12670cf6 call dword ptr [0x12690834] */
  call_ind((uint32_t)(r32((uint32_t)(0x12690834))), 0x12670cfcu);
  /* 12670cfc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12670cfe jne 0x12670d11 */
  if (!C.zf) goto L_12670d11;
  /* 12670d00 mov dword ptr [0x1269082c], 0 */
  w32((uint32_t)(0x1269082c), (0x0u));
  /* 12670d0a mov eax, 1 */
  EAX = (0x1u);
  /* 12670d0f jmp 0x12670d66 */
  goto L_12670d66;
L_12670d11:;
  /* 12670d11 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12670d14 push ecx */
  push32((uint32_t)(ECX));
  /* 12670d15 mov edx, dword ptr [0x12690828] */
  EDX = (r32((uint32_t)(0x12690828)));
  /* 12670d1b push edx */
  push32((uint32_t)(EDX));
  /* 12670d1c call 0x12672d40 */
  push32(0x12670d21u); f_12672d40();
  /* 12670d21 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12670d24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12670d26 jne 0x12670d59 */
  if (!C.zf) goto L_12670d59;
  /* 12670d28 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12670d2b push eax */
  push32((uint32_t)(EAX));
  /* 12670d2c call 0x12670e40 */
  push32(0x12670d31u); f_12670e40();
  /* 12670d31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12670d34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12670d36 je 0x12670d59 */
  if (C.zf) goto L_12670d59;
  /* 12670d38 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12670d3b mov dword ptr [0x12690830], ecx */
  w32((uint32_t)(0x12690830), (ECX));
  /* 12670d41 mov edx, dword ptr [0x12690830] */
  EDX = (r32((uint32_t)(0x12690830)));
  /* 12670d47 mov dword ptr [0x12690814], edx */
  w32((uint32_t)(0x12690814), (EDX));
  /* 12670d4d mov eax, dword ptr [0x1269082c] */
  EAX = (r32((uint32_t)(0x1269082c)));
  /* 12670d52 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12670d54 mov dword ptr [0x1269082c], eax */
  w32((uint32_t)(0x1269082c), (EAX));
L_12670d59:;
  /* 12670d59 mov eax, dword ptr [0x1269082c] */
  EAX = (r32((uint32_t)(0x1269082c)));
  /* 12670d5e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12670d61 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12670d63 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12670d65 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12670d66:;
  /* 12670d66 mov esp, ebp */
  ESP = (EBP);
  /* 12670d68 pop ebp */
  EBP = (pop32());
  /* 12670d69 ret 4 */
  ESPCHK(0x12670cc0u, _esp0);
  ESP += 8; return;
}

/* FUN_10010d70 @ 0x12670d70 (43 bytes, 11 insns) */
void f_12670d70(void) {
  FTRACE(0x12670d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12670d70 push ebp */
  push32((uint32_t)(EBP));
  /* 12670d71 mov ebp, esp */
  EBP = (ESP);
  /* 12670d73 mov eax, dword ptr [0x1269082c] */
  EAX = (r32((uint32_t)(0x1269082c)));
  /* 12670d78 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 12670d7d mov dword ptr [0x1269082c], eax */
  w32((uint32_t)(0x1269082c), (EAX));
  /* 12670d82 call dword ptr [0x126932b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932b4))), 0x12670d88u);
  /* 12670d88 mov dword ptr [0x12690830], eax */
  w32((uint32_t)(0x12690830), (EAX));
  /* 12670d8d mov ecx, dword ptr [0x12690830] */
  ECX = (r32((uint32_t)(0x12690830)));
  /* 12670d93 mov dword ptr [0x12690814], ecx */
  w32((uint32_t)(0x12690814), (ECX));
  /* 12670d99 pop ebp */
  EBP = (pop32());
  /* 12670d9a ret  */
  ESPCHK(0x12670d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10010da0 @ 0x12670da0 (155 bytes, 57 insns) */
void f_12670da0(void) {
  FTRACE(0x12670da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12670da0 push ebp */
  push32((uint32_t)(EBP));
  /* 12670da1 mov ebp, esp */
  EBP = (ESP);
  /* 12670da3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12670da6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12670daa je 0x12670dcb */
  if (C.zf) goto L_12670dcb;
  /* 12670dac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12670daf movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12670db2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12670db4 je 0x12670dcb */
  if (C.zf) goto L_12670dcb;
  /* 12670db6 push 0x1268c924 */
  push32((uint32_t)(0x1268c924u));
  /* 12670dbb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12670dbe push edx */
  push32((uint32_t)(EDX));
  /* 12670dbf call 0x12670300 */
  push32(0x12670dc4u); f_12670300();
  /* 12670dc4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12670dc7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12670dc9 jne 0x12670df3 */
  if (!C.zf) goto L_12670df3;
L_12670dcb:;
  /* 12670dcb push 8 */
  push32((uint32_t)(0x8u));
  /* 12670dcd lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12670dd0 push eax */
  push32((uint32_t)(EAX));
  /* 12670dd1 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 12670dd6 mov ecx, dword ptr [0x12690830] */
  ECX = (r32((uint32_t)(0x12690830)));
  /* 12670ddc push ecx */
  push32((uint32_t)(ECX));
  /* 12670ddd call dword ptr [0x12690834] */
  call_ind((uint32_t)(r32((uint32_t)(0x12690834))), 0x12670de3u);
  /* 12670de3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12670de5 jne 0x12670deb */
  if (!C.zf) goto L_12670deb;
  /* 12670de7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12670de9 jmp 0x12670e37 */
  goto L_12670e37;
L_12670deb:;
  /* 12670deb lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 12670dee mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12670df1 jmp 0x12670e2b */
  goto L_12670e2b;
L_12670df3:;
  /* 12670df3 push 0x1268c920 */
  push32((uint32_t)(0x1268c920u));
  /* 12670df8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12670dfb push eax */
  push32((uint32_t)(EAX));
  /* 12670dfc call 0x12670300 */
  push32(0x12670e01u); f_12670300();
  /* 12670e01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12670e04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12670e06 jne 0x12670e2b */
  if (!C.zf) goto L_12670e2b;
  /* 12670e08 push 8 */
  push32((uint32_t)(0x8u));
  /* 12670e0a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12670e0d push ecx */
  push32((uint32_t)(ECX));
  /* 12670e0e push 0xb */
  push32((uint32_t)(0xbu));
  /* 12670e10 mov edx, dword ptr [0x12690830] */
  EDX = (r32((uint32_t)(0x12690830)));
  /* 12670e16 push edx */
  push32((uint32_t)(EDX));
  /* 12670e17 call dword ptr [0x12690834] */
  call_ind((uint32_t)(r32((uint32_t)(0x12690834))), 0x12670e1du);
  /* 12670e1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12670e1f jne 0x12670e25 */
  if (!C.zf) goto L_12670e25;
  /* 12670e21 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12670e23 jmp 0x12670e37 */
  goto L_12670e37;
L_12670e25:;
  /* 12670e25 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12670e28 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12670e2b:;
  /* 12670e2b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12670e2e push ecx */
  push32((uint32_t)(ECX));
  /* 12670e2f call 0x12672f20 */
  push32(0x12670e34u); f_12672f20();
  /* 12670e34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12670e37:;
  /* 12670e37 mov esp, ebp */
  ESP = (EBP);
  /* 12670e39 pop ebp */
  EBP = (pop32());
  /* 12670e3a ret  */
  ESPCHK(0x12670da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010e40 @ 0x12670e40 (79 bytes, 26 insns) */
void f_12670e40(void) {
  FTRACE(0x12670e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12670e40 push ebp */
  push32((uint32_t)(EBP));
  /* 12670e41 mov ebp, esp */
  EBP = (ESP);
  /* 12670e43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12670e46 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 12670e4a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 12670e4e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12670e55 jmp 0x12670e60 */
  goto L_12670e60;
L_12670e57:;
  /* 12670e57 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12670e5a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12670e5d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12670e60:;
  /* 12670e60 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12670e64 jae 0x12670e86 */
  if (!C.cf) goto L_12670e86;
  /* 12670e66 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12670e69 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12670e6f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12670e72 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12670e74 mov cx, word ptr [eax*2 + 0x1268f9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x1268f9c4)));
  /* 12670e7c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12670e7e jne 0x12670e84 */
  if (!C.zf) goto L_12670e84;
  /* 12670e80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12670e82 jmp 0x12670e8b */
  goto L_12670e8b;
L_12670e84:;
  /* 12670e84 jmp 0x12670e57 */
  goto L_12670e57;
L_12670e86:;
  /* 12670e86 mov eax, 1 */
  EAX = (0x1u);
L_12670e8b:;
  /* 12670e8b mov esp, ebp */
  ESP = (EBP);
  /* 12670e8d pop ebp */
  EBP = (pop32());
  /* 12670e8e ret  */
  ESPCHK(0x12670e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10010e90 @ 0x12670e90 (135 bytes, 48 insns) */
void f_12670e90(void) {
  FTRACE(0x12670e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12670e90 push ebp */
  push32((uint32_t)(EBP));
  /* 12670e91 mov ebp, esp */
  EBP = (ESP);
  /* 12670e93 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12670e96 push esi */
  push32((uint32_t)(ESI));
  /* 12670e97 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12670e9a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12670e9f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 12670ea4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12670ea9 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 12670eac and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12670eb1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12670eb4 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12670eb6 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 12670eb9 push ecx */
  push32((uint32_t)(ECX));
  /* 12670eba push 1 */
  push32((uint32_t)(0x1u));
  /* 12670ebc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12670ebf push edx */
  push32((uint32_t)(EDX));
  /* 12670ec0 call dword ptr [0x12690834] */
  call_ind((uint32_t)(r32((uint32_t)(0x12690834))), 0x12670ec6u);
  /* 12670ec6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12670ec8 jne 0x12670ece */
  if (!C.zf) goto L_12670ece;
  /* 12670eca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12670ecc jmp 0x12670f12 */
  goto L_12670f12;
L_12670ece:;
  /* 12670ece lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 12670ed1 push eax */
  push32((uint32_t)(EAX));
  /* 12670ed2 call 0x12671100 */
  push32(0x12670ed7u); f_12671100();
  /* 12670ed7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12670eda cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12670edd je 0x12670f0d */
  if (C.zf) goto L_12670f0d;
  /* 12670edf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12670ee3 je 0x12670f0d */
  if (C.zf) goto L_12670f0d;
  /* 12670ee5 mov ecx, dword ptr [0x12690824] */
  ECX = (r32((uint32_t)(0x12690824)));
  /* 12670eeb push ecx */
  push32((uint32_t)(ECX));
  /* 12670eec call 0x12671180 */
  push32(0x12670ef1u); f_12671180();
  /* 12670ef1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12670ef4 mov esi, eax */
  ESI = (EAX);
  /* 12670ef6 mov edx, dword ptr [0x12690824] */
  EDX = (r32((uint32_t)(0x12690824)));
  /* 12670efc push edx */
  push32((uint32_t)(EDX));
  /* 12670efd call 0x126674a0 */
  push32(0x12670f02u); f_126674a0();
  /* 12670f02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12670f05 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12670f07 jne 0x12670f0d */
  if (!C.zf) goto L_12670f0d;
  /* 12670f09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12670f0b jmp 0x12670f12 */
  goto L_12670f12;
L_12670f0d:;
  /* 12670f0d mov eax, 1 */
  EAX = (0x1u);
L_12670f12:;
  /* 12670f12 pop esi */
  ESI = (pop32());
  /* 12670f13 mov esp, ebp */
  ESP = (EBP);
  /* 12670f15 pop ebp */
  EBP = (pop32());
  /* 12670f16 ret  */
  ESPCHK(0x12670e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f20 @ 0x12670f20 (77 bytes, 18 insns) */
void f_12670f20(void) {
  FTRACE(0x12670f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12670f20 push ebp */
  push32((uint32_t)(EBP));
  /* 12670f21 mov ebp, esp */
  EBP = (ESP);
  /* 12670f23 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12670f29 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 12670f33 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 12670f39 push eax */
  push32((uint32_t)(EAX));
  /* 12670f3a call dword ptr [0x126932b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932b0))), 0x12670f40u);
  /* 12670f40 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12670f42 je 0x12670f59 */
  if (C.zf) goto L_12670f59;
  /* 12670f44 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12670f4b jne 0x12670f59 */
  if (!C.zf) goto L_12670f59;
  /* 12670f4d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 12670f57 jmp 0x12670f63 */
  goto L_12670f63;
L_12670f59:;
  /* 12670f59 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_12670f63:;
  /* 12670f63 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12670f69 mov esp, ebp */
  ESP = (EBP);
  /* 12670f6b pop ebp */
  EBP = (pop32());
  /* 12670f6c ret  */
  ESPCHK(0x12670f20u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x12670f70 (388 bytes, 118 insns) */
void f_12670f70(void) {
  FTRACE(0x12670f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12670f70 push ebp */
  push32((uint32_t)(EBP));
  /* 12670f71 mov ebp, esp */
  EBP = (ESP);
  /* 12670f73 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12670f76 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12670f7d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 12670f84 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12670f8b:;
  /* 12670f8b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12670f8e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12670f91 jg 0x126710d8 */
  if ((!C.zf&&C.sf==C.of)) goto L_126710d8;
  /* 12670f97 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12670f9a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12670f9d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12670f9e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12670fa0 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12670fa2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12670fa5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12670fa8 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12670fab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12670fae cmp edx, dword ptr [ecx + 0x1268f520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x1268f520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12670fb4 jne 0x126710ae */
  if (!C.zf) goto L_126710ae;
  /* 12670fba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12670fbd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12670fc0 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12670fc4 ja 0x12670fe7 */
  if ((!C.cf&&!C.zf)) goto L_12670fe7;
  /* 12670fc6 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12670fca je 0x12671059 */
  if (C.zf) goto L_12671059;
  /* 12670fd0 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12670fd4 je 0x12671004 */
  if (C.zf) goto L_12671004;
  /* 12670fd6 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12670fda je 0x12671026 */
  if (C.zf) goto L_12671026;
  /* 12670fdc cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12670fe0 je 0x12671048 */
  if (C.zf) goto L_12671048;
  /* 12670fe2 jmp 0x12671078 */
  goto L_12671078;
L_12670fe7:;
  /* 12670fe7 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12670fee je 0x12671015 */
  if (C.zf) goto L_12671015;
  /* 12670ff0 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12670ff7 je 0x12671037 */
  if (C.zf) goto L_12671037;
  /* 12670ff9 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12671000 je 0x1267106a */
  if (C.zf) goto L_1267106a;
  /* 12671002 jmp 0x12671078 */
  goto L_12671078;
L_12671004:;
  /* 12671004 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12671007 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1267100a add ecx, 0x1268f524 */
  { uint32_t _a=(ECX),_b=(0x1268f524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12671010 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12671013 jmp 0x12671078 */
  goto L_12671078;
L_12671015:;
  /* 12671015 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12671018 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1267101b mov eax, dword ptr [edx + 0x1268f52c] */
  EAX = (r32((uint32_t)(EDX + 0x1268f52c)));
  /* 12671021 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12671024 jmp 0x12671078 */
  goto L_12671078;
L_12671026:;
  /* 12671026 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12671029 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1267102c add ecx, 0x1268f530 */
  { uint32_t _a=(ECX),_b=(0x1268f530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12671032 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12671035 jmp 0x12671078 */
  goto L_12671078;
L_12671037:;
  /* 12671037 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1267103a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1267103d mov eax, dword ptr [edx + 0x1268f534] */
  EAX = (r32((uint32_t)(EDX + 0x1268f534)));
  /* 12671043 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12671046 jmp 0x12671078 */
  goto L_12671078;
L_12671048:;
  /* 12671048 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1267104b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1267104e add ecx, 0x1268f538 */
  { uint32_t _a=(ECX),_b=(0x1268f538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12671054 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12671057 jmp 0x12671078 */
  goto L_12671078;
L_12671059:;
  /* 12671059 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1267105c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1267105f add edx, 0x1268f53c */
  { uint32_t _a=(EDX),_b=(0x1268f53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12671065 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12671068 jmp 0x12671078 */
  goto L_12671078;
L_1267106a:;
  /* 1267106a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1267106d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12671070 add eax, 0x1268f544 */
  { uint32_t _a=(EAX),_b=(0x1268f544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12671075 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12671078:;
  /* 12671078 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267107c je 0x12671084 */
  if (C.zf) goto L_12671084;
  /* 1267107e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12671082 jge 0x12671086 */
  if ((C.sf==C.of)) goto L_12671086;
L_12671084:;
  /* 12671084 jmp 0x126710d8 */
  goto L_126710d8;
L_12671086:;
  /* 12671086 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12671089 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1267108c push ecx */
  push32((uint32_t)(ECX));
  /* 1267108d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12671090 push edx */
  push32((uint32_t)(EDX));
  /* 12671091 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12671094 push eax */
  push32((uint32_t)(EAX));
  /* 12671095 call 0x12667e90 */
  push32(0x1267109au); f_12667e90();
  /* 1267109a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1267109d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 126710a0 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126710a3 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 126710a7 mov eax, 1 */
  EAX = (0x1u);
  /* 126710ac jmp 0x126710ee */
  goto L_126710ee;
L_126710ae:;
  /* 126710ae mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 126710b1 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 126710b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126710b7 cmp eax, dword ptr [edx + 0x1268f520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x1268f520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126710bd jae 0x126710ca */
  if (!C.cf) goto L_126710ca;
  /* 126710bf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 126710c2 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126710c5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 126710c8 jmp 0x126710d3 */
  goto L_126710d3;
L_126710ca:;
  /* 126710ca mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 126710cd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126710d0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_126710d3:;
  /* 126710d3 jmp 0x12670f8b */
  goto L_12670f8b;
L_126710d8:;
  /* 126710d8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 126710db push eax */
  push32((uint32_t)(EAX));
  /* 126710dc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 126710df push ecx */
  push32((uint32_t)(ECX));
  /* 126710e0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 126710e3 push edx */
  push32((uint32_t)(EDX));
  /* 126710e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126710e7 push eax */
  push32((uint32_t)(EAX));
  /* 126710e8 call dword ptr [0x126932bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932bc))), 0x126710eeu);
L_126710ee:;
  /* 126710ee mov esp, ebp */
  ESP = (EBP);
  /* 126710f0 pop ebp */
  EBP = (pop32());
  /* 126710f1 ret 0x10 */
  ESPCHK(0x12670f70u, _esp0);
  ESP += 20; return;
}

/* FUN_10011100 @ 0x12671100 (118 bytes, 42 insns) */
void f_12671100(void) {
  FTRACE(0x12671100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12671100 push ebp */
  push32((uint32_t)(EBP));
  /* 12671101 mov ebp, esp */
  EBP = (ESP);
  /* 12671103 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12671106 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1267110d:;
  /* 1267110d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12671110 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12671112 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12671115 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12671119 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1267111c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1267111f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12671122 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12671124 je 0x1267116f */
  if (C.zf) goto L_1267116f;
  /* 12671126 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1267112a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267112d jl 0x12671142 */
  if ((C.sf!=C.of)) goto L_12671142;
  /* 1267112f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12671133 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12671136 jg 0x12671142 */
  if ((!C.zf&&C.sf==C.of)) goto L_12671142;
  /* 12671138 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1267113b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1267113d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 12671140 jmp 0x1267115c */
  goto L_1267115c;
L_12671142:;
  /* 12671142 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12671146 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12671149 jl 0x1267115c */
  if ((C.sf!=C.of)) goto L_1267115c;
  /* 1267114b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1267114f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12671152 jg 0x1267115c */
  if ((!C.zf&&C.sf==C.of)) goto L_1267115c;
  /* 12671154 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12671157 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12671159 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_1267115c:;
  /* 1267115c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1267115f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12671162 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12671166 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1267116a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1267116d jmp 0x1267110d */
  goto L_1267110d;
L_1267116f:;
  /* 1267116f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12671172 mov esp, ebp */
  ESP = (EBP);
  /* 12671174 pop ebp */
  EBP = (pop32());
  /* 12671175 ret  */
  ESPCHK(0x12671100u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x12671180 (101 bytes, 36 insns) */
void f_12671180(void) {
  FTRACE(0x12671180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12671180 push ebp */
  push32((uint32_t)(EBP));
  /* 12671181 mov ebp, esp */
  EBP = (ESP);
  /* 12671183 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12671186 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1267118d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12671190 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12671192 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 12671195 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12671198 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1267119b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_1267119e:;
  /* 1267119e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 126711a2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126711a5 jl 0x126711b0 */
  if ((C.sf!=C.of)) goto L_126711b0;
  /* 126711a7 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 126711ab cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126711ae jle 0x126711c2 */
  if ((C.zf||C.sf!=C.of)) goto L_126711c2;
L_126711b0:;
  /* 126711b0 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 126711b4 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126711b7 jl 0x126711de */
  if ((C.sf!=C.of)) goto L_126711de;
  /* 126711b9 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 126711bd cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126711c0 jg 0x126711de */
  if ((!C.zf&&C.sf==C.of)) goto L_126711de;
L_126711c2:;
  /* 126711c2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 126711c5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126711c8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 126711cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 126711ce mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 126711d0 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 126711d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126711d6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126711d9 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 126711dc jmp 0x1267119e */
  goto L_1267119e;
L_126711de:;
  /* 126711de mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 126711e1 mov esp, ebp */
  ESP = (EBP);
  /* 126711e3 pop ebp */
  EBP = (pop32());
  /* 126711e4 ret  */
  ESPCHK(0x12671180u, _esp0);
  ESP += 4; return;
}

/* FUN_100111f0 @ 0x126711f0 (122 bytes, 39 insns) */
void f_126711f0(void) {
  FTRACE(0x126711f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126711f0 push ebp */
  push32((uint32_t)(EBP));
  /* 126711f1 mov ebp, esp */
  EBP = (ESP);
  /* 126711f3 push ecx */
  push32((uint32_t)(ECX));
  /* 126711f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126711f7 cmp eax, dword ptr [0x126920bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x126920bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126711fd jae 0x12671221 */
  if (!C.cf) goto L_12671221;
  /* 126711ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12671202 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12671205 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12671208 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1267120b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1267120e mov eax, dword ptr [ecx*4 + 0x12691f80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12691f80)));
  /* 12671215 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1267121a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1267121d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1267121f jne 0x1267123c */
  if (!C.zf) goto L_1267123c;
L_12671221:;
  /* 12671221 call 0x1266c540 */
  push32(0x12671226u); f_1266c540();
  /* 12671226 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1267122c call 0x1266c550 */
  push32(0x12671231u); f_1266c550();
  /* 12671231 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12671237 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1267123a jmp 0x12671266 */
  goto L_12671266;
L_1267123c:;
  /* 1267123c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1267123f push edx */
  push32((uint32_t)(EDX));
  /* 12671240 call 0x1266dd60 */
  push32(0x12671245u); f_1266dd60();
  /* 12671245 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12671248 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1267124b push eax */
  push32((uint32_t)(EAX));
  /* 1267124c call 0x12671270 */
  push32(0x12671251u); f_12671270();
  /* 12671251 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12671254 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12671257 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1267125a push ecx */
  push32((uint32_t)(ECX));
  /* 1267125b call 0x1266ddf0 */
  push32(0x12671260u); f_1266ddf0();
  /* 12671260 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12671263 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12671266:;
  /* 12671266 mov esp, ebp */
  ESP = (EBP);
  /* 12671268 pop ebp */
  EBP = (pop32());
  /* 12671269 ret  */
  ESPCHK(0x126711f0u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x12671270 (170 bytes, 59 insns) */
void f_12671270(void) {
  FTRACE(0x12671270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12671270 push ebp */
  push32((uint32_t)(EBP));
  /* 12671271 mov ebp, esp */
  EBP = (ESP);
  /* 12671273 push ecx */
  push32((uint32_t)(ECX));
  /* 12671274 push esi */
  push32((uint32_t)(ESI));
  /* 12671275 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12671278 push eax */
  push32((uint32_t)(EAX));
  /* 12671279 call 0x1266dbe0 */
  push32(0x1267127eu); f_1266dbe0();
  /* 1267127e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12671281 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12671284 je 0x126712c3 */
  if (C.zf) goto L_126712c3;
  /* 12671286 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267128a je 0x12671292 */
  if (C.zf) goto L_12671292;
  /* 1267128c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12671290 jne 0x126712ac */
  if (!C.zf) goto L_126712ac;
L_12671292:;
  /* 12671292 push 1 */
  push32((uint32_t)(0x1u));
  /* 12671294 call 0x1266dbe0 */
  push32(0x12671299u); f_1266dbe0();
  /* 12671299 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1267129c mov esi, eax */
  ESI = (EAX);
  /* 1267129e push 2 */
  push32((uint32_t)(0x2u));
  /* 126712a0 call 0x1266dbe0 */
  push32(0x126712a5u); f_1266dbe0();
  /* 126712a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126712a8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126712aa je 0x126712c3 */
  if (C.zf) goto L_126712c3;
L_126712ac:;
  /* 126712ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126712af push ecx */
  push32((uint32_t)(ECX));
  /* 126712b0 call 0x1266dbe0 */
  push32(0x126712b5u); f_1266dbe0();
  /* 126712b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126712b8 push eax */
  push32((uint32_t)(EAX));
  /* 126712b9 call dword ptr [0x126932b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x126932b8))), 0x126712bfu);
  /* 126712bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126712c1 je 0x126712cc */
  if (C.zf) goto L_126712cc;
L_126712c3:;
  /* 126712c3 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 126712ca jmp 0x126712d5 */
  goto L_126712d5;
L_126712cc:;
  /* 126712cc call dword ptr [0x12693370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12693370))), 0x126712d2u);
  /* 126712d2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_126712d5:;
  /* 126712d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 126712d8 push edx */
  push32((uint32_t)(EDX));
  /* 126712d9 call 0x1266db00 */
  push32(0x126712deu); f_1266db00();
  /* 126712de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126712e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126712e4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 126712e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126712ea and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 126712ed imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 126712f0 mov edx, dword ptr [eax*4 + 0x12691f80] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12691f80)));
  /* 126712f7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 126712fc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12671300 je 0x12671313 */
  if (C.zf) goto L_12671313;
  /* 12671302 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12671305 push eax */
  push32((uint32_t)(EAX));
  /* 12671306 call 0x1266c4a0 */
  push32(0x1267130bu); f_1266c4a0();
  /* 1267130b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1267130e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12671311 jmp 0x12671315 */
  goto L_12671315;
L_12671313:;
  /* 12671313 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12671315:;
  /* 12671315 pop esi */
  ESI = (pop32());
  /* 12671316 mov esp, ebp */
  ESP = (EBP);
  /* 12671318 pop ebp */
  EBP = (pop32());
  /* 12671319 ret  */
  ESPCHK(0x12671270u, _esp0);
  ESP += 4; return;
}

/* FUN_10011320 @ 0x12671320 (146 bytes, 52 insns) */
void f_12671320(void) {
  FTRACE(0x12671320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12671320 push ebp */
  push32((uint32_t)(EBP));
  /* 12671321 mov ebp, esp */
  EBP = (ESP);
  /* 12671323 push ebx */
  push32((uint32_t)(EBX));
  /* 12671324 push esi */
  push32((uint32_t)(ESI));
  /* 12671325 push edi */
  push32((uint32_t)(EDI));
L_12671326:;
  /* 12671326 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1267132a jne 0x1267134a */
  if (!C.zf) goto L_1267134a;
  /* 1267132c push 0x1268c260 */
  push32((uint32_t)(0x1268c260u));
  /* 12671331 push 0 */
  push32((uint32_t)(0x0u));
  /* 12671333 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12671335 push 0x1268c928 */
  push32((uint32_t)(0x1268c928u));
  /* 1267133a push 2 */
  push32((uint32_t)(0x2u));
  /* 1267133c call 0x12663730 */
  push32(0x12671341u); f_12663730();
  /* 12671341 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12671344 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12671347 jne 0x1267134a */
  if (!C.zf) goto L_1267134a;
  /* 12671349 int3  */
  x86_unimpl("int3 @ 0x12671349");
L_1267134a:;
  /* 1267134a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1267134c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1267134e jne 0x12671326 */
  if (!C.zf) goto L_12671326;
  /* 12671350 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12671353 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12671356 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 1267135c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1267135e je 0x126713ad */
  if (C.zf) goto L_126713ad;
  /* 12671360 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12671363 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12671366 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12671369 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1267136b je 0x126713ad */
  if (C.zf) goto L_126713ad;
  /* 1267136d push 2 */
  push32((uint32_t)(0x2u));
  /* 1267136f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12671372 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12671375 push eax */
  push32((uint32_t)(EAX));
  /* 12671376 call 0x12665100 */
  push32(0x1267137bu); f_12665100();
  /* 1267137b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1267137e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12671381 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12671384 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 1267138a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1267138d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12671390 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12671393 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12671399 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1267139c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 126713a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126713a6 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_126713ad:;
  /* 126713ad pop edi */
  EDI = (pop32());
  /* 126713ae pop esi */
  ESI = (pop32());
  /* 126713af pop ebx */
  EBX = (pop32());
  /* 126713b0 pop ebp */
  EBP = (pop32());
  /* 126713b1 ret  */
  ESPCHK(0x12671320u, _esp0);
  ESP += 4; return;
}

