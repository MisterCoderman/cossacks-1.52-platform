#include "recomp.h"

/* FUN_10011690 @ 0x10771690 (289 bytes, 97 insns) */
void f_10771690(void) {
  FTRACE(0x10771690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10771690 push ebp */
  push32((uint32_t)(EBP));
  /* 10771691 mov ebp, esp */
  EBP = (ESP);
  /* 10771693 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10771696 push esi */
  push32((uint32_t)(ESI));
  /* 10771697 mov eax, dword ptr [0x1078fc98] */
  EAX = (r32((uint32_t)(0x1078fc98)));
  /* 1077169c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1077169f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 107716a6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 107716ad jmp 0x107716b8 */
  goto L_107716b8;
L_107716af:;
  /* 107716af mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107716b2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107716b5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_107716b8:;
  /* 107716b8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107716bc jae 0x107716f1 */
  if (!C.cf) goto L_107716f1;
  /* 107716be mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107716c1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107716c4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 107716c7 push ecx */
  push32((uint32_t)(ECX));
  /* 107716c8 call 0x10767770 */
  push32(0x107716cdu); f_10767770();
  /* 107716cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107716d0 mov esi, eax */
  ESI = (EAX);
  /* 107716d2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107716d5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107716d8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 107716dc push ecx */
  push32((uint32_t)(ECX));
  /* 107716dd call 0x10767770 */
  push32(0x107716e2u); f_10767770();
  /* 107716e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107716e5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107716e8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 107716ec mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 107716ef jmp 0x107716af */
  goto L_107716af;
L_107716f1:;
  /* 107716f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107716f4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107716f7 push eax */
  push32((uint32_t)(EAX));
  /* 107716f8 call 0x10764920 */
  push32(0x107716fdu); f_10764920();
  /* 107716fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10771700 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10771703 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10771707 je 0x107717a9 */
  if (C.zf) goto L_107717a9;
  /* 1077170d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10771710 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10771713 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1077171a jmp 0x10771725 */
  goto L_10771725;
L_1077171c:;
  /* 1077171c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1077171f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10771722 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10771725:;
  /* 10771725 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10771729 jae 0x1077179a */
  if (!C.cf) goto L_1077179a;
  /* 1077172b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1077172e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10771731 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10771734 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10771737 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1077173a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1077173d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10771740 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10771743 push ecx */
  push32((uint32_t)(ECX));
  /* 10771744 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10771747 push edx */
  push32((uint32_t)(EDX));
  /* 10771748 call 0x107678f0 */
  push32(0x1077174du); f_107678f0();
  /* 1077174d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10771750 push eax */
  push32((uint32_t)(EAX));
  /* 10771751 call 0x10767770 */
  push32(0x10771756u); f_10767770();
  /* 10771756 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10771759 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1077175c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1077175e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10771761 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10771764 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10771767 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1077176a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1077176d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10771770 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10771773 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10771776 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 1077177a push eax */
  push32((uint32_t)(EAX));
  /* 1077177b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1077177e push ecx */
  push32((uint32_t)(ECX));
  /* 1077177f call 0x107678f0 */
  push32(0x10771784u); f_107678f0();
  /* 10771784 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10771787 push eax */
  push32((uint32_t)(EAX));
  /* 10771788 call 0x10767770 */
  push32(0x1077178du); f_10767770();
  /* 1077178d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10771790 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10771793 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10771795 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10771798 jmp 0x1077171c */
  goto L_1077171c;
L_1077179a:;
  /* 1077179a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1077179d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 107717a0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107717a3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107717a6 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_107717a9:;
  /* 107717a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107717ac pop esi */
  ESI = (pop32());
  /* 107717ad mov esp, ebp */
  ESP = (EBP);
  /* 107717af pop ebp */
  EBP = (pop32());
  /* 107717b0 ret  */
  ESPCHK(0x10771690u, _esp0);
  ESP += 4; return;
}

/* FUN_100117c0 @ 0x107717c0 (291 bytes, 97 insns) */
void f_107717c0(void) {
  FTRACE(0x107717c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107717c0 push ebp */
  push32((uint32_t)(EBP));
  /* 107717c1 mov ebp, esp */
  EBP = (ESP);
  /* 107717c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107717c6 push esi */
  push32((uint32_t)(ESI));
  /* 107717c7 mov eax, dword ptr [0x1078fc98] */
  EAX = (r32((uint32_t)(0x1078fc98)));
  /* 107717cc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107717cf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 107717d6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 107717dd jmp 0x107717e8 */
  goto L_107717e8;
L_107717df:;
  /* 107717df mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107717e2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107717e5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_107717e8:;
  /* 107717e8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107717ec jae 0x10771822 */
  if (!C.cf) goto L_10771822;
  /* 107717ee mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107717f1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107717f4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 107717f8 push ecx */
  push32((uint32_t)(ECX));
  /* 107717f9 call 0x10767770 */
  push32(0x107717feu); f_10767770();
  /* 107717fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10771801 mov esi, eax */
  ESI = (EAX);
  /* 10771803 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10771806 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10771809 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 1077180d push ecx */
  push32((uint32_t)(ECX));
  /* 1077180e call 0x10767770 */
  push32(0x10771813u); f_10767770();
  /* 10771813 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10771816 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10771819 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1077181d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10771820 jmp 0x107717df */
  goto L_107717df;
L_10771822:;
  /* 10771822 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10771825 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10771828 push eax */
  push32((uint32_t)(EAX));
  /* 10771829 call 0x10764920 */
  push32(0x1077182eu); f_10764920();
  /* 1077182e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10771831 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10771834 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10771838 je 0x107718db */
  if (C.zf) goto L_107718db;
  /* 1077183e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10771841 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10771844 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1077184b jmp 0x10771856 */
  goto L_10771856;
L_1077184d:;
  /* 1077184d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10771850 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10771853 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10771856:;
  /* 10771856 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1077185a jae 0x107718cc */
  if (!C.cf) goto L_107718cc;
  /* 1077185c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1077185f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10771862 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10771865 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10771868 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1077186b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1077186e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10771871 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10771875 push ecx */
  push32((uint32_t)(ECX));
  /* 10771876 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10771879 push edx */
  push32((uint32_t)(EDX));
  /* 1077187a call 0x107678f0 */
  push32(0x1077187fu); f_107678f0();
  /* 1077187f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10771882 push eax */
  push32((uint32_t)(EAX));
  /* 10771883 call 0x10767770 */
  push32(0x10771888u); f_10767770();
  /* 10771888 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1077188b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1077188e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10771890 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10771893 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10771896 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10771899 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1077189c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1077189f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 107718a2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107718a5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107718a8 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 107718ac push eax */
  push32((uint32_t)(EAX));
  /* 107718ad mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107718b0 push ecx */
  push32((uint32_t)(ECX));
  /* 107718b1 call 0x107678f0 */
  push32(0x107718b6u); f_107678f0();
  /* 107718b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107718b9 push eax */
  push32((uint32_t)(EAX));
  /* 107718ba call 0x10767770 */
  push32(0x107718bfu); f_10767770();
  /* 107718bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107718c2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107718c5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107718c7 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 107718ca jmp 0x1077184d */
  goto L_1077184d;
L_107718cc:;
  /* 107718cc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107718cf mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 107718d2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107718d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107718d8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_107718db:;
  /* 107718db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107718de pop esi */
  ESI = (pop32());
  /* 107718df mov esp, ebp */
  ESP = (EBP);
  /* 107718e1 pop ebp */
  EBP = (pop32());
  /* 107718e2 ret  */
  ESPCHK(0x107717c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100118f0 @ 0x107718f0 (878 bytes, 273 insns) */
void f_107718f0(void) {
  FTRACE(0x107718f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107718f0 push ebp */
  push32((uint32_t)(EBP));
  /* 107718f1 mov ebp, esp */
  EBP = (ESP);
  /* 107718f3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107718f6 push esi */
  push32((uint32_t)(ESI));
  /* 107718f7 mov eax, dword ptr [0x1078fc98] */
  EAX = (r32((uint32_t)(0x1078fc98)));
  /* 107718fc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107718ff mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10771906 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1077190d jmp 0x10771918 */
  goto L_10771918;
L_1077190f:;
  /* 1077190f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10771912 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10771915 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10771918:;
  /* 10771918 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1077191c jae 0x10771951 */
  if (!C.cf) goto L_10771951;
  /* 1077191e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10771921 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10771924 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10771927 push ecx */
  push32((uint32_t)(ECX));
  /* 10771928 call 0x10767770 */
  push32(0x1077192du); f_10767770();
  /* 1077192d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10771930 mov esi, eax */
  ESI = (EAX);
  /* 10771932 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10771935 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10771938 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 1077193c push ecx */
  push32((uint32_t)(ECX));
  /* 1077193d call 0x10767770 */
  push32(0x10771942u); f_10767770();
  /* 10771942 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10771945 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10771948 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1077194c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1077194f jmp 0x1077190f */
  goto L_1077190f;
L_10771951:;
  /* 10771951 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10771958 jmp 0x10771963 */
  goto L_10771963;
L_1077195a:;
  /* 1077195a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1077195d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10771960 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10771963:;
  /* 10771963 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10771967 jae 0x1077199d */
  if (!C.cf) goto L_1077199d;
  /* 10771969 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1077196c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1077196f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10771973 push eax */
  push32((uint32_t)(EAX));
  /* 10771974 call 0x10767770 */
  push32(0x10771979u); f_10767770();
  /* 10771979 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1077197c mov esi, eax */
  ESI = (EAX);
  /* 1077197e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10771981 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10771984 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10771988 push eax */
  push32((uint32_t)(EAX));
  /* 10771989 call 0x10767770 */
  push32(0x1077198eu); f_10767770();
  /* 1077198e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10771991 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10771994 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10771998 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1077199b jmp 0x1077195a */
  goto L_1077195a;
L_1077199d:;
  /* 1077199d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107719a0 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 107719a6 push eax */
  push32((uint32_t)(EAX));
  /* 107719a7 call 0x10767770 */
  push32(0x107719acu); f_10767770();
  /* 107719ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107719af mov esi, eax */
  ESI = (EAX);
  /* 107719b1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107719b4 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 107719ba push edx */
  push32((uint32_t)(EDX));
  /* 107719bb call 0x10767770 */
  push32(0x107719c0u); f_10767770();
  /* 107719c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107719c3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107719c6 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 107719ca mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107719cd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107719d0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 107719d6 push edx */
  push32((uint32_t)(EDX));
  /* 107719d7 call 0x10767770 */
  push32(0x107719dcu); f_10767770();
  /* 107719dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107719df mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107719e2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 107719e6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 107719e9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107719ec mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 107719f2 push ecx */
  push32((uint32_t)(ECX));
  /* 107719f3 call 0x10767770 */
  push32(0x107719f8u); f_10767770();
  /* 107719f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107719fb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107719fe lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10771a02 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10771a05 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10771a08 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 10771a0e push edx */
  push32((uint32_t)(EDX));
  /* 10771a0f call 0x10767770 */
  push32(0x10771a14u); f_10767770();
  /* 10771a14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10771a17 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10771a1a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10771a1e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10771a21 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10771a24 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10771a29 push eax */
  push32((uint32_t)(EAX));
  /* 10771a2a call 0x10764920 */
  push32(0x10771a2fu); f_10764920();
  /* 10771a2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10771a32 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10771a35 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10771a39 je 0x10771c56 */
  if (C.zf) goto L_10771c56;
  /* 10771a3f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10771a42 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10771a45 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10771a48 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10771a4e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10771a51 push 0xac */
  push32((uint32_t)(0xacu));
  /* 10771a56 mov eax, dword ptr [0x1078fc98] */
  EAX = (r32((uint32_t)(0x1078fc98)));
  /* 10771a5b push eax */
  push32((uint32_t)(EAX));
  /* 10771a5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10771a5f push ecx */
  push32((uint32_t)(ECX));
  /* 10771a60 call 0x1076b220 */
  push32(0x10771a65u); f_1076b220();
  /* 10771a65 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10771a68 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10771a6f jmp 0x10771a7a */
  goto L_10771a7a;
L_10771a71:;
  /* 10771a71 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10771a74 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10771a77 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10771a7a:;
  /* 10771a7a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10771a7e jae 0x10771aee */
  if (!C.cf) goto L_10771aee;
  /* 10771a80 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10771a83 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10771a86 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10771a89 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10771a8c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10771a8f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10771a92 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10771a95 push edx */
  push32((uint32_t)(EDX));
  /* 10771a96 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10771a99 push eax */
  push32((uint32_t)(EAX));
  /* 10771a9a call 0x107678f0 */
  push32(0x10771a9fu); f_107678f0();
  /* 10771a9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10771aa2 push eax */
  push32((uint32_t)(EAX));
  /* 10771aa3 call 0x10767770 */
  push32(0x10771aa8u); f_10767770();
  /* 10771aa8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10771aab mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10771aae lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10771ab2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10771ab5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10771ab8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10771abb mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10771abe mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 10771ac2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10771ac5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10771ac8 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 10771acc push edx */
  push32((uint32_t)(EDX));
  /* 10771acd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10771ad0 push eax */
  push32((uint32_t)(EAX));
  /* 10771ad1 call 0x107678f0 */
  push32(0x10771ad6u); f_107678f0();
  /* 10771ad6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10771ad9 push eax */
  push32((uint32_t)(EAX));
  /* 10771ada call 0x10767770 */
  push32(0x10771adfu); f_10767770();
  /* 10771adf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10771ae2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10771ae5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10771ae9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10771aec jmp 0x10771a71 */
  goto L_10771a71;
L_10771aee:;
  /* 10771aee mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10771af5 jmp 0x10771b00 */
  goto L_10771b00;
L_10771af7:;
  /* 10771af7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10771afa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10771afd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10771b00:;
  /* 10771b00 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10771b04 jae 0x10771b76 */
  if (!C.cf) goto L_10771b76;
  /* 10771b06 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10771b09 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10771b0c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10771b0f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 10771b13 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10771b16 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10771b19 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10771b1d push eax */
  push32((uint32_t)(EAX));
  /* 10771b1e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10771b21 push ecx */
  push32((uint32_t)(ECX));
  /* 10771b22 call 0x107678f0 */
  push32(0x10771b27u); f_107678f0();
  /* 10771b27 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10771b2a push eax */
  push32((uint32_t)(EAX));
  /* 10771b2b call 0x10767770 */
  push32(0x10771b30u); f_10767770();
  /* 10771b30 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10771b33 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10771b36 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10771b3a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10771b3d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10771b40 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10771b43 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10771b46 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 10771b4a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10771b4d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10771b50 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10771b54 push eax */
  push32((uint32_t)(EAX));
  /* 10771b55 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10771b58 push ecx */
  push32((uint32_t)(ECX));
  /* 10771b59 call 0x107678f0 */
  push32(0x10771b5eu); f_107678f0();
  /* 10771b5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10771b61 push eax */
  push32((uint32_t)(EAX));
  /* 10771b62 call 0x10767770 */
  push32(0x10771b67u); f_10767770();
  /* 10771b67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10771b6a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10771b6d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10771b71 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10771b74 jmp 0x10771af7 */
  goto L_10771af7;
L_10771b76:;
  /* 10771b76 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10771b79 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10771b7c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 10771b82 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10771b85 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 10771b8b push ecx */
  push32((uint32_t)(ECX));
  /* 10771b8c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10771b8f push edx */
  push32((uint32_t)(EDX));
  /* 10771b90 call 0x107678f0 */
  push32(0x10771b95u); f_107678f0();
  /* 10771b95 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10771b98 push eax */
  push32((uint32_t)(EAX));
  /* 10771b99 call 0x10767770 */
  push32(0x10771b9eu); f_10767770();
  /* 10771b9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10771ba1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10771ba4 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10771ba8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10771bab mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10771bae mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10771bb1 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 10771bb7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10771bba mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10771bc0 push eax */
  push32((uint32_t)(EAX));
  /* 10771bc1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10771bc4 push ecx */
  push32((uint32_t)(ECX));
  /* 10771bc5 call 0x107678f0 */
  push32(0x10771bcau); f_107678f0();
  /* 10771bca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10771bcd push eax */
  push32((uint32_t)(EAX));
  /* 10771bce call 0x10767770 */
  push32(0x10771bd3u); f_10767770();
  /* 10771bd3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10771bd6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10771bd9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10771bdd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10771be0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10771be3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10771be6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 10771bec mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10771bef mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 10771bf5 push ecx */
  push32((uint32_t)(ECX));
  /* 10771bf6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10771bf9 push edx */
  push32((uint32_t)(EDX));
  /* 10771bfa call 0x107678f0 */
  push32(0x10771bffu); f_107678f0();
  /* 10771bff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10771c02 push eax */
  push32((uint32_t)(EAX));
  /* 10771c03 call 0x10767770 */
  push32(0x10771c08u); f_10767770();
  /* 10771c08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10771c0b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10771c0e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10771c12 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10771c15 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10771c18 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10771c1b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 10771c21 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10771c24 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 10771c2a push eax */
  push32((uint32_t)(EAX));
  /* 10771c2b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10771c2e push ecx */
  push32((uint32_t)(ECX));
  /* 10771c2f call 0x107678f0 */
  push32(0x10771c34u); f_107678f0();
  /* 10771c34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10771c37 push eax */
  push32((uint32_t)(EAX));
  /* 10771c38 call 0x10767770 */
  push32(0x10771c3du); f_10767770();
  /* 10771c3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10771c40 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10771c43 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10771c47 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10771c4a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10771c4d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10771c50 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_10771c56:;
  /* 10771c56 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10771c59 pop esi */
  ESI = (pop32());
  /* 10771c5a mov esp, ebp */
  ESP = (EBP);
  /* 10771c5c pop ebp */
  EBP = (pop32());
  /* 10771c5d ret  */
  ESPCHK(0x107718f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011c60 @ 0x10771c60 (31 bytes, 15 insns) */
void f_10771c60(void) {
  FTRACE(0x10771c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10771c60 push ebp */
  push32((uint32_t)(EBP));
  /* 10771c61 mov ebp, esp */
  EBP = (ESP);
  /* 10771c63 push 0 */
  push32((uint32_t)(0x0u));
  /* 10771c65 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10771c68 push eax */
  push32((uint32_t)(EAX));
  /* 10771c69 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10771c6c push ecx */
  push32((uint32_t)(ECX));
  /* 10771c6d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10771c70 push edx */
  push32((uint32_t)(EDX));
  /* 10771c71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10771c74 push eax */
  push32((uint32_t)(EAX));
  /* 10771c75 call 0x10771c80 */
  push32(0x10771c7au); f_10771c80();
  /* 10771c7a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10771c7d pop ebp */
  EBP = (pop32());
  /* 10771c7e ret  */
  ESPCHK(0x10771c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10011c80 @ 0x10771c80 (393 bytes, 123 insns) */
void f_10771c80(void) {
  FTRACE(0x10771c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10771c80 push ebp */
  push32((uint32_t)(EBP));
  /* 10771c81 mov ebp, esp */
  EBP = (ESP);
  /* 10771c83 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10771c86 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10771c8a jne 0x10771c96 */
  if (!C.zf) goto L_10771c96;
  /* 10771c8c mov eax, dword ptr [0x1078fc98] */
  EAX = (r32((uint32_t)(0x1078fc98)));
  /* 10771c91 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10771c94 jmp 0x10771c9c */
  goto L_10771c9c;
L_10771c96:;
  /* 10771c96 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10771c99 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10771c9c:;
  /* 10771c9c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10771c9f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10771ca2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10771ca5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10771ca8 push 0x107908e4 */
  push32((uint32_t)(0x107908e4u));
  /* 10771cad call dword ptr [0x10793344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793344))), 0x10771cb3u);
  /* 10771cb3 cmp dword ptr [0x107908d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107908d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10771cba je 0x10771cda */
  if (C.zf) goto L_10771cda;
  /* 10771cbc push 0x107908e4 */
  push32((uint32_t)(0x107908e4u));
  /* 10771cc1 call dword ptr [0x10793334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793334))), 0x10771cc7u);
  /* 10771cc7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10771cc9 call 0x10768340 */
  push32(0x10771cceu); f_10768340();
  /* 10771cce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10771cd1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10771cd8 jmp 0x10771ce1 */
  goto L_10771ce1;
L_10771cda:;
  /* 10771cda mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10771ce1:;
  /* 10771ce1 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10771ce5 jbe 0x10771dd2 */
  if ((C.cf||C.zf)) goto L_10771dd2;
  /* 10771ceb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10771cee mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10771cf0 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 10771cf3 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10771cf7 je 0x10771d01 */
  if (C.zf) goto L_10771d01;
  /* 10771cf9 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10771cfd je 0x10771d06 */
  if (C.zf) goto L_10771d06;
  /* 10771cff jmp 0x10771d60 */
  goto L_10771d60;
L_10771d01:;
  /* 10771d01 jmp 0x10771dd2 */
  goto L_10771dd2;
L_10771d06:;
  /* 10771d06 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10771d09 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10771d0c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10771d0f mov dword ptr [0x107908c0], 0 */
  w32((uint32_t)(0x107908c0), (0x0u));
  /* 10771d19 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10771d1c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10771d1f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10771d22 jne 0x10771d37 */
  if (!C.zf) goto L_10771d37;
  /* 10771d24 mov dword ptr [0x107908c0], 1 */
  w32((uint32_t)(0x107908c0), (0x1u));
  /* 10771d2e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10771d31 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10771d34 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10771d37:;
  /* 10771d37 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10771d3a push ecx */
  push32((uint32_t)(ECX));
  /* 10771d3b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10771d3e push edx */
  push32((uint32_t)(EDX));
  /* 10771d3f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10771d42 push eax */
  push32((uint32_t)(EAX));
  /* 10771d43 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10771d46 push ecx */
  push32((uint32_t)(ECX));
  /* 10771d47 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10771d4a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10771d4c push eax */
  push32((uint32_t)(EAX));
  /* 10771d4d call 0x10771e10 */
  push32(0x10771d52u); f_10771e10();
  /* 10771d52 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10771d55 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10771d58 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10771d5b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10771d5e jmp 0x10771dcd */
  goto L_10771dcd;
L_10771d60:;
  /* 10771d60 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10771d63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10771d65 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10771d67 mov ecx, dword ptr [0x1078ec98] */
  ECX = (r32((uint32_t)(0x1078ec98)));
  /* 10771d6d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10771d6f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10771d73 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10771d79 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10771d7b je 0x10771da8 */
  if (C.zf) goto L_10771da8;
  /* 10771d7d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10771d81 jbe 0x10771da8 */
  if ((C.cf||C.zf)) goto L_10771da8;
  /* 10771d83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10771d86 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10771d89 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10771d8b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10771d8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10771d90 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10771d93 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10771d96 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10771d99 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10771d9c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10771d9f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10771da2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10771da5 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10771da8:;
  /* 10771da8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10771dab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10771dae mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10771db0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10771db2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10771db5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10771db8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10771dbb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10771dbe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10771dc1 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10771dc4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10771dc7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10771dca mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10771dcd:;
  /* 10771dcd jmp 0x10771ce1 */
  goto L_10771ce1;
L_10771dd2:;
  /* 10771dd2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10771dd6 je 0x10771de4 */
  if (C.zf) goto L_10771de4;
  /* 10771dd8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10771dda call 0x107683e0 */
  push32(0x10771ddfu); f_107683e0();
  /* 10771ddf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10771de2 jmp 0x10771def */
  goto L_10771def;
L_10771de4:;
  /* 10771de4 push 0x107908e4 */
  push32((uint32_t)(0x107908e4u));
  /* 10771de9 call dword ptr [0x10793334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793334))), 0x10771defu);
L_10771def:;
  /* 10771def cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10771df3 jbe 0x10771e03 */
  if ((C.cf||C.zf)) goto L_10771e03;
  /* 10771df5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10771df8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10771dfb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10771dfe sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10771e01 jmp 0x10771e05 */
  goto L_10771e05;
L_10771e03:;
  /* 10771e03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10771e05:;
  /* 10771e05 mov esp, ebp */
  ESP = (EBP);
  /* 10771e07 pop ebp */
  EBP = (pop32());
  /* 10771e08 ret  */
  ESPCHK(0x10771c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e10 @ 0x10771e10 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_10771e10(void) {
  FTRACE(0x10771e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10771e10 push ebp */
  push32((uint32_t)(EBP));
  /* 10771e11 mov ebp, esp */
  EBP = (ESP);
  /* 10771e13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10771e16 push esi */
  push32((uint32_t)(ESI));
  /* 10771e17 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 10771e1b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10771e1e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10771e21 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10771e24 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10771e27 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10771e2b ja 0x10772378 */
  if ((!C.cf&&!C.zf)) goto L_10772378;
  /* 10771e31 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10771e34 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10771e36 mov dl, byte ptr [eax + 0x107723d9] */
  DL = (r8((uint32_t)(EAX + 0x107723d9)));
  /* 10771e3c jmp dword ptr [edx*4 + 0x1077237d] */
  switch (EDX) {
    case 0: goto L_10772356;
    case 1: goto L_10771e65;
    case 2: goto L_10771eab;
    case 3: goto L_10771ff8;
    case 4: goto L_10772020;
    case 5: goto L_107720bf;
    case 6: goto L_1077212b;
    case 7: goto L_10772154;
    case 8: goto L_10772195;
    case 9: goto L_10772277;
    case 10: goto L_107722de;
    case 11: goto L_1077232b;
    case 12: goto L_10771e43;
    case 13: goto L_10771e88;
    case 14: goto L_10771ece;
    case 15: goto L_10771fce;
    case 16: goto L_10772065;
    case 17: goto L_10772092;
    case 18: goto L_107720e7;
    case 19: goto L_1077216b;
    case 20: goto L_10772219;
    case 21: goto L_107722a8;
    case 22: goto L_10772378;
    default: x86_unimpl("switch@0x10771e3c out of table"); return;
  }
L_10771e43:;
  /* 10771e43 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10771e46 push ecx */
  push32((uint32_t)(ECX));
  /* 10771e47 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10771e4a push edx */
  push32((uint32_t)(EDX));
  /* 10771e4b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10771e4e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10771e51 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10771e54 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10771e57 push eax */
  push32((uint32_t)(EAX));
  /* 10771e58 call 0x10772430 */
  push32(0x10771e5du); f_10772430();
  /* 10771e5d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10771e60 jmp 0x10772378 */
  goto L_10772378;
L_10771e65:;
  /* 10771e65 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10771e68 push ecx */
  push32((uint32_t)(ECX));
  /* 10771e69 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10771e6c push edx */
  push32((uint32_t)(EDX));
  /* 10771e6d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10771e70 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10771e73 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10771e76 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 10771e7a push eax */
  push32((uint32_t)(EAX));
  /* 10771e7b call 0x10772430 */
  push32(0x10771e80u); f_10772430();
  /* 10771e80 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10771e83 jmp 0x10772378 */
  goto L_10772378;
L_10771e88:;
  /* 10771e88 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10771e8b push ecx */
  push32((uint32_t)(ECX));
  /* 10771e8c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10771e8f push edx */
  push32((uint32_t)(EDX));
  /* 10771e90 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10771e93 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10771e96 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10771e99 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10771e9d push eax */
  push32((uint32_t)(EAX));
  /* 10771e9e call 0x10772430 */
  push32(0x10771ea3u); f_10772430();
  /* 10771ea3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10771ea6 jmp 0x10772378 */
  goto L_10772378;
L_10771eab:;
  /* 10771eab mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10771eae push ecx */
  push32((uint32_t)(ECX));
  /* 10771eaf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10771eb2 push edx */
  push32((uint32_t)(EDX));
  /* 10771eb3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10771eb6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10771eb9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10771ebc mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10771ec0 push eax */
  push32((uint32_t)(EAX));
  /* 10771ec1 call 0x10772430 */
  push32(0x10771ec6u); f_10772430();
  /* 10771ec6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10771ec9 jmp 0x10772378 */
  goto L_10772378;
L_10771ece:;
  /* 10771ece cmp dword ptr [0x107908c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107908c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10771ed5 je 0x10771f56 */
  if (C.zf) goto L_10771f56;
  /* 10771ed7 mov dword ptr [0x107908c0], 0 */
  w32((uint32_t)(0x107908c0), (0x0u));
  /* 10771ee1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10771ee4 push ecx */
  push32((uint32_t)(ECX));
  /* 10771ee5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10771ee8 push edx */
  push32((uint32_t)(EDX));
  /* 10771ee9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10771eec push eax */
  push32((uint32_t)(EAX));
  /* 10771eed mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10771ef0 push ecx */
  push32((uint32_t)(ECX));
  /* 10771ef1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10771ef4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 10771efa push eax */
  push32((uint32_t)(EAX));
  /* 10771efb call 0x107725e0 */
  push32(0x10771f00u); f_107725e0();
  /* 10771f00 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10771f03 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10771f06 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10771f09 jne 0x10771f10 */
  if (!C.zf) goto L_10771f10;
  /* 10771f0b jmp 0x10772378 */
  goto L_10772378;
L_10771f10:;
  /* 10771f10 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10771f13 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10771f15 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 10771f18 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10771f1b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10771f1d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10771f20 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10771f23 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10771f25 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10771f28 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10771f2a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10771f2d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10771f30 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10771f32 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10771f35 push ecx */
  push32((uint32_t)(ECX));
  /* 10771f36 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10771f39 push edx */
  push32((uint32_t)(EDX));
  /* 10771f3a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10771f3d push eax */
  push32((uint32_t)(EAX));
  /* 10771f3e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10771f41 push ecx */
  push32((uint32_t)(ECX));
  /* 10771f42 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10771f45 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10771f4b push eax */
  push32((uint32_t)(EAX));
  /* 10771f4c call 0x107725e0 */
  push32(0x10771f51u); f_107725e0();
  /* 10771f51 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10771f54 jmp 0x10771fc9 */
  goto L_10771fc9;
L_10771f56:;
  /* 10771f56 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10771f59 push ecx */
  push32((uint32_t)(ECX));
  /* 10771f5a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10771f5d push edx */
  push32((uint32_t)(EDX));
  /* 10771f5e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10771f61 push eax */
  push32((uint32_t)(EAX));
  /* 10771f62 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10771f65 push ecx */
  push32((uint32_t)(ECX));
  /* 10771f66 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10771f69 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 10771f6f push eax */
  push32((uint32_t)(EAX));
  /* 10771f70 call 0x107725e0 */
  push32(0x10771f75u); f_107725e0();
  /* 10771f75 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10771f78 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10771f7b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10771f7e jne 0x10771f85 */
  if (!C.zf) goto L_10771f85;
  /* 10771f80 jmp 0x10772378 */
  goto L_10772378;
L_10771f85:;
  /* 10771f85 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10771f88 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10771f8a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 10771f8d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10771f90 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10771f92 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10771f95 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10771f98 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10771f9a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10771f9d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10771f9f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10771fa2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10771fa5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10771fa7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10771faa push ecx */
  push32((uint32_t)(ECX));
  /* 10771fab mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10771fae push edx */
  push32((uint32_t)(EDX));
  /* 10771faf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10771fb2 push eax */
  push32((uint32_t)(EAX));
  /* 10771fb3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10771fb6 push ecx */
  push32((uint32_t)(ECX));
  /* 10771fb7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10771fba mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10771fc0 push eax */
  push32((uint32_t)(EAX));
  /* 10771fc1 call 0x107725e0 */
  push32(0x10771fc6u); f_107725e0();
  /* 10771fc6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10771fc9:;
  /* 10771fc9 jmp 0x10772378 */
  goto L_10772378;
L_10771fce:;
  /* 10771fce mov ecx, dword ptr [0x107908c0] */
  ECX = (r32((uint32_t)(0x107908c0)));
  /* 10771fd4 mov dword ptr [0x107908d0], ecx */
  w32((uint32_t)(0x107908d0), (ECX));
  /* 10771fda mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10771fdd push edx */
  push32((uint32_t)(EDX));
  /* 10771fde mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10771fe1 push eax */
  push32((uint32_t)(EAX));
  /* 10771fe2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10771fe4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10771fe7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10771fea push edx */
  push32((uint32_t)(EDX));
  /* 10771feb call 0x10772480 */
  push32(0x10771ff0u); f_10772480();
  /* 10771ff0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10771ff3 jmp 0x10772378 */
  goto L_10772378;
L_10771ff8:;
  /* 10771ff8 mov eax, dword ptr [0x107908c0] */
  EAX = (r32((uint32_t)(0x107908c0)));
  /* 10771ffd mov dword ptr [0x107908d0], eax */
  w32((uint32_t)(0x107908d0), (EAX));
  /* 10772002 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10772005 push ecx */
  push32((uint32_t)(ECX));
  /* 10772006 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10772009 push edx */
  push32((uint32_t)(EDX));
  /* 1077200a push 2 */
  push32((uint32_t)(0x2u));
  /* 1077200c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1077200f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10772012 push ecx */
  push32((uint32_t)(ECX));
  /* 10772013 call 0x10772480 */
  push32(0x10772018u); f_10772480();
  /* 10772018 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1077201b jmp 0x10772378 */
  goto L_10772378;
L_10772020:;
  /* 10772020 mov edx, dword ptr [0x107908c0] */
  EDX = (r32((uint32_t)(0x107908c0)));
  /* 10772026 mov dword ptr [0x107908d0], edx */
  w32((uint32_t)(0x107908d0), (EDX));
  /* 1077202c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1077202f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 10772032 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10772033 mov ecx, 0xc */
  ECX = (0xcu);
  /* 10772038 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1077203a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1077203d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10772041 jne 0x1077204a */
  if (!C.zf) goto L_1077204a;
  /* 10772043 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_1077204a:;
  /* 1077204a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1077204d push edx */
  push32((uint32_t)(EDX));
  /* 1077204e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10772051 push eax */
  push32((uint32_t)(EAX));
  /* 10772052 push 2 */
  push32((uint32_t)(0x2u));
  /* 10772054 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10772057 push ecx */
  push32((uint32_t)(ECX));
  /* 10772058 call 0x10772480 */
  push32(0x1077205du); f_10772480();
  /* 1077205d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10772060 jmp 0x10772378 */
  goto L_10772378;
L_10772065:;
  /* 10772065 mov edx, dword ptr [0x107908c0] */
  EDX = (r32((uint32_t)(0x107908c0)));
  /* 1077206b mov dword ptr [0x107908d0], edx */
  w32((uint32_t)(0x107908d0), (EDX));
  /* 10772071 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10772074 push eax */
  push32((uint32_t)(EAX));
  /* 10772075 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10772078 push ecx */
  push32((uint32_t)(ECX));
  /* 10772079 push 3 */
  push32((uint32_t)(0x3u));
  /* 1077207b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1077207e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10772081 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10772084 push eax */
  push32((uint32_t)(EAX));
  /* 10772085 call 0x10772480 */
  push32(0x1077208au); f_10772480();
  /* 1077208a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1077208d jmp 0x10772378 */
  goto L_10772378;
L_10772092:;
  /* 10772092 mov ecx, dword ptr [0x107908c0] */
  ECX = (r32((uint32_t)(0x107908c0)));
  /* 10772098 mov dword ptr [0x107908d0], ecx */
  w32((uint32_t)(0x107908d0), (ECX));
  /* 1077209e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107720a1 push edx */
  push32((uint32_t)(EDX));
  /* 107720a2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107720a5 push eax */
  push32((uint32_t)(EAX));
  /* 107720a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 107720a8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107720ab mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 107720ae add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107720b1 push edx */
  push32((uint32_t)(EDX));
  /* 107720b2 call 0x10772480 */
  push32(0x107720b7u); f_10772480();
  /* 107720b7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107720ba jmp 0x10772378 */
  goto L_10772378;
L_107720bf:;
  /* 107720bf mov eax, dword ptr [0x107908c0] */
  EAX = (r32((uint32_t)(0x107908c0)));
  /* 107720c4 mov dword ptr [0x107908d0], eax */
  w32((uint32_t)(0x107908d0), (EAX));
  /* 107720c9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107720cc push ecx */
  push32((uint32_t)(ECX));
  /* 107720cd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107720d0 push edx */
  push32((uint32_t)(EDX));
  /* 107720d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 107720d3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107720d6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 107720d9 push ecx */
  push32((uint32_t)(ECX));
  /* 107720da call 0x10772480 */
  push32(0x107720dfu); f_10772480();
  /* 107720df add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107720e2 jmp 0x10772378 */
  goto L_10772378;
L_107720e7:;
  /* 107720e7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107720ea cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107720ee jg 0x1077210c */
  if ((!C.zf&&C.sf==C.of)) goto L_1077210c;
  /* 107720f0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107720f3 push eax */
  push32((uint32_t)(EAX));
  /* 107720f4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107720f7 push ecx */
  push32((uint32_t)(ECX));
  /* 107720f8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107720fb mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10772101 push eax */
  push32((uint32_t)(EAX));
  /* 10772102 call 0x10772430 */
  push32(0x10772107u); f_10772430();
  /* 10772107 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1077210a jmp 0x10772126 */
  goto L_10772126;
L_1077210c:;
  /* 1077210c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1077210f push ecx */
  push32((uint32_t)(ECX));
  /* 10772110 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10772113 push edx */
  push32((uint32_t)(EDX));
  /* 10772114 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10772117 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 1077211d push ecx */
  push32((uint32_t)(ECX));
  /* 1077211e call 0x10772430 */
  push32(0x10772123u); f_10772430();
  /* 10772123 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10772126:;
  /* 10772126 jmp 0x10772378 */
  goto L_10772378;
L_1077212b:;
  /* 1077212b mov edx, dword ptr [0x107908c0] */
  EDX = (r32((uint32_t)(0x107908c0)));
  /* 10772131 mov dword ptr [0x107908d0], edx */
  w32((uint32_t)(0x107908d0), (EDX));
  /* 10772137 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1077213a push eax */
  push32((uint32_t)(EAX));
  /* 1077213b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1077213e push ecx */
  push32((uint32_t)(ECX));
  /* 1077213f push 2 */
  push32((uint32_t)(0x2u));
  /* 10772141 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10772144 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10772146 push eax */
  push32((uint32_t)(EAX));
  /* 10772147 call 0x10772480 */
  push32(0x1077214cu); f_10772480();
  /* 1077214c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1077214f jmp 0x10772378 */
  goto L_10772378;
L_10772154:;
  /* 10772154 mov ecx, dword ptr [0x107908c0] */
  ECX = (r32((uint32_t)(0x107908c0)));
  /* 1077215a mov dword ptr [0x107908d0], ecx */
  w32((uint32_t)(0x107908d0), (ECX));
  /* 10772160 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10772163 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10772166 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10772169 jmp 0x107721bd */
  goto L_107721bd;
L_1077216b:;
  /* 1077216b mov ecx, dword ptr [0x107908c0] */
  ECX = (r32((uint32_t)(0x107908c0)));
  /* 10772171 mov dword ptr [0x107908d0], ecx */
  w32((uint32_t)(0x107908d0), (ECX));
  /* 10772177 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1077217a push edx */
  push32((uint32_t)(EDX));
  /* 1077217b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1077217e push eax */
  push32((uint32_t)(EAX));
  /* 1077217f push 1 */
  push32((uint32_t)(0x1u));
  /* 10772181 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10772184 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10772187 push edx */
  push32((uint32_t)(EDX));
  /* 10772188 call 0x10772480 */
  push32(0x1077218du); f_10772480();
  /* 1077218d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10772190 jmp 0x10772378 */
  goto L_10772378;
L_10772195:;
  /* 10772195 mov eax, dword ptr [0x107908c0] */
  EAX = (r32((uint32_t)(0x107908c0)));
  /* 1077219a mov dword ptr [0x107908d0], eax */
  w32((uint32_t)(0x107908d0), (EAX));
  /* 1077219f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107721a2 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107721a6 jne 0x107721b1 */
  if (!C.zf) goto L_107721b1;
  /* 107721a8 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 107721af jmp 0x107721bd */
  goto L_107721bd;
L_107721b1:;
  /* 107721b1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107721b4 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 107721b7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107721ba mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_107721bd:;
  /* 107721bd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107721c0 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 107721c3 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107721c6 jge 0x107721d1 */
  if ((C.sf==C.of)) goto L_107721d1;
  /* 107721c8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107721cf jmp 0x107721fe */
  goto L_107721fe;
L_107721d1:;
  /* 107721d1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107721d4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 107721d7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 107721d8 mov ecx, 7 */
  ECX = (0x7u);
  /* 107721dd idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 107721df mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107721e2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107721e5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 107721e8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 107721e9 mov ecx, 7 */
  ECX = (0x7u);
  /* 107721ee idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 107721f0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107721f3 jl 0x107721fe */
  if ((C.sf!=C.of)) goto L_107721fe;
  /* 107721f5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107721f8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107721fb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_107721fe:;
  /* 107721fe mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10772201 push eax */
  push32((uint32_t)(EAX));
  /* 10772202 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10772205 push ecx */
  push32((uint32_t)(ECX));
  /* 10772206 push 2 */
  push32((uint32_t)(0x2u));
  /* 10772208 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1077220b push edx */
  push32((uint32_t)(EDX));
  /* 1077220c call 0x10772480 */
  push32(0x10772211u); f_10772480();
  /* 10772211 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10772214 jmp 0x10772378 */
  goto L_10772378;
L_10772219:;
  /* 10772219 cmp dword ptr [0x107908c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107908c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10772220 je 0x10772250 */
  if (C.zf) goto L_10772250;
  /* 10772222 mov dword ptr [0x107908c0], 0 */
  w32((uint32_t)(0x107908c0), (0x0u));
  /* 1077222c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1077222f push eax */
  push32((uint32_t)(EAX));
  /* 10772230 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10772233 push ecx */
  push32((uint32_t)(ECX));
  /* 10772234 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10772237 push edx */
  push32((uint32_t)(EDX));
  /* 10772238 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1077223b push eax */
  push32((uint32_t)(EAX));
  /* 1077223c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1077223f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10772245 push edx */
  push32((uint32_t)(EDX));
  /* 10772246 call 0x107725e0 */
  push32(0x1077224bu); f_107725e0();
  /* 1077224b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1077224e jmp 0x10772272 */
  goto L_10772272;
L_10772250:;
  /* 10772250 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10772253 push eax */
  push32((uint32_t)(EAX));
  /* 10772254 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10772257 push ecx */
  push32((uint32_t)(ECX));
  /* 10772258 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1077225b push edx */
  push32((uint32_t)(EDX));
  /* 1077225c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1077225f push eax */
  push32((uint32_t)(EAX));
  /* 10772260 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10772263 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10772269 push edx */
  push32((uint32_t)(EDX));
  /* 1077226a call 0x107725e0 */
  push32(0x1077226fu); f_107725e0();
  /* 1077226f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10772272:;
  /* 10772272 jmp 0x10772378 */
  goto L_10772378;
L_10772277:;
  /* 10772277 mov dword ptr [0x107908c0], 0 */
  w32((uint32_t)(0x107908c0), (0x0u));
  /* 10772281 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10772284 push eax */
  push32((uint32_t)(EAX));
  /* 10772285 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10772288 push ecx */
  push32((uint32_t)(ECX));
  /* 10772289 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1077228c push edx */
  push32((uint32_t)(EDX));
  /* 1077228d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10772290 push eax */
  push32((uint32_t)(EAX));
  /* 10772291 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10772294 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 1077229a push edx */
  push32((uint32_t)(EDX));
  /* 1077229b call 0x107725e0 */
  push32(0x107722a0u); f_107725e0();
  /* 107722a0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107722a3 jmp 0x10772378 */
  goto L_10772378;
L_107722a8:;
  /* 107722a8 mov eax, dword ptr [0x107908c0] */
  EAX = (r32((uint32_t)(0x107908c0)));
  /* 107722ad mov dword ptr [0x107908d0], eax */
  w32((uint32_t)(0x107908d0), (EAX));
  /* 107722b2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107722b5 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 107722b8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 107722b9 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 107722be idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 107722c0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107722c3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107722c6 push edx */
  push32((uint32_t)(EDX));
  /* 107722c7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107722ca push eax */
  push32((uint32_t)(EAX));
  /* 107722cb push 2 */
  push32((uint32_t)(0x2u));
  /* 107722cd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107722d0 push ecx */
  push32((uint32_t)(ECX));
  /* 107722d1 call 0x10772480 */
  push32(0x107722d6u); f_10772480();
  /* 107722d6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107722d9 jmp 0x10772378 */
  goto L_10772378;
L_107722de:;
  /* 107722de mov edx, dword ptr [0x107908c0] */
  EDX = (r32((uint32_t)(0x107908c0)));
  /* 107722e4 mov dword ptr [0x107908d0], edx */
  w32((uint32_t)(0x107908d0), (EDX));
  /* 107722ea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107722ed mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 107722f0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 107722f1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 107722f6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 107722f8 mov ecx, eax */
  ECX = (EAX);
  /* 107722fa add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107722fd imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10772300 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10772303 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10772306 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10772307 mov esi, 0x64 */
  ESI = (0x64u);
  /* 1077230c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1077230e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10772310 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10772313 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10772316 push eax */
  push32((uint32_t)(EAX));
  /* 10772317 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1077231a push ecx */
  push32((uint32_t)(ECX));
  /* 1077231b push 4 */
  push32((uint32_t)(0x4u));
  /* 1077231d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10772320 push edx */
  push32((uint32_t)(EDX));
  /* 10772321 call 0x10772480 */
  push32(0x10772326u); f_10772480();
  /* 10772326 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10772329 jmp 0x10772378 */
  goto L_10772378;
L_1077232b:;
  /* 1077232b call 0x10773440 */
  push32(0x10772330u); f_10773440();
  /* 10772330 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10772333 push eax */
  push32((uint32_t)(EAX));
  /* 10772334 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10772337 push ecx */
  push32((uint32_t)(ECX));
  /* 10772338 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1077233b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1077233d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10772341 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 10772344 mov ecx, dword ptr [eax*4 + 0x1078fe1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1078fe1c)));
  /* 1077234b push ecx */
  push32((uint32_t)(ECX));
  /* 1077234c call 0x10772430 */
  push32(0x10772351u); f_10772430();
  /* 10772351 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10772354 jmp 0x10772378 */
  goto L_10772378;
L_10772356:;
  /* 10772356 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10772359 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1077235b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 1077235e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10772361 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10772363 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10772366 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10772369 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1077236b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1077236e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10772370 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10772373 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10772376 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10772378:;
  /* 10772378 pop esi */
  ESI = (pop32());
  /* 10772379 mov esp, ebp */
  ESP = (EBP);
  /* 1077237b pop ebp */
  EBP = (pop32());
  /* 1077237c ret  */
  ESPCHK(0x10771e10u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x10772430 (72 bytes, 30 insns) */
void f_10772430(void) {
  FTRACE(0x10772430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10772430 push ebp */
  push32((uint32_t)(EBP));
  /* 10772431 mov ebp, esp */
  EBP = (ESP);
L_10772433:;
  /* 10772433 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10772436 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10772439 je 0x10772476 */
  if (C.zf) goto L_10772476;
  /* 1077243b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1077243e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10772441 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10772443 je 0x10772476 */
  if (C.zf) goto L_10772476;
  /* 10772445 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10772448 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1077244a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1077244d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1077244f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10772451 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10772454 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10772456 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10772459 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1077245c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1077245e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10772461 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10772464 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10772467 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1077246a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1077246c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1077246f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10772472 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10772474 jmp 0x10772433 */
  goto L_10772433;
L_10772476:;
  /* 10772476 pop ebp */
  EBP = (pop32());
  /* 10772477 ret  */
  ESPCHK(0x10772430u, _esp0);
  ESP += 4; return;
}

/* FUN_10012480 @ 0x10772480 (173 bytes, 64 insns) */
void f_10772480(void) {
  FTRACE(0x10772480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10772480 push ebp */
  push32((uint32_t)(EBP));
  /* 10772481 mov ebp, esp */
  EBP = (ESP);
  /* 10772483 push ecx */
  push32((uint32_t)(ECX));
  /* 10772484 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1077248b cmp dword ptr [0x107908d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107908d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10772492 je 0x107724aa */
  if (C.zf) goto L_107724aa;
  /* 10772494 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10772497 push eax */
  push32((uint32_t)(EAX));
  /* 10772498 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1077249b push ecx */
  push32((uint32_t)(ECX));
  /* 1077249c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1077249f push edx */
  push32((uint32_t)(EDX));
  /* 107724a0 call 0x10772530 */
  push32(0x107724a5u); f_10772530();
  /* 107724a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107724a8 jmp 0x10772529 */
  goto L_10772529;
L_107724aa:;
  /* 107724aa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107724ad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107724b0 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107724b2 jae 0x10772520 */
  if (!C.cf) goto L_10772520;
  /* 107724b4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107724b7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107724ba mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 107724bd jmp 0x107724c8 */
  goto L_107724c8;
L_107724bf:;
  /* 107724bf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107724c2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107724c5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_107724c8:;
  /* 107724c8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107724cb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107724ce test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107724d0 je 0x10772504 */
  if (C.zf) goto L_10772504;
  /* 107724d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107724d5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 107724d6 mov ecx, 0xa */
  ECX = (0xau);
  /* 107724db idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 107724dd add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107724e0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107724e3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107724e5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107724e8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 107724eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107724ee cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 107724ef mov ecx, 0xa */
  ECX = (0xau);
  /* 107724f4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 107724f6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 107724f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107724fc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107724ff mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10772502 jmp 0x107724bf */
  goto L_107724bf;
L_10772504:;
  /* 10772504 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10772507 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10772509 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1077250c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1077250f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10772511 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10772514 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10772516 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10772519 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1077251c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1077251e jmp 0x10772529 */
  goto L_10772529;
L_10772520:;
  /* 10772520 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10772523 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10772529:;
  /* 10772529 mov esp, ebp */
  ESP = (EBP);
  /* 1077252b pop ebp */
  EBP = (pop32());
  /* 1077252c ret  */
  ESPCHK(0x10772480u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x10772530 (172 bytes, 65 insns) */
void f_10772530(void) {
  FTRACE(0x10772530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10772530 push ebp */
  push32((uint32_t)(EBP));
  /* 10772531 mov ebp, esp */
  EBP = (ESP);
  /* 10772533 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10772536 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10772539 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1077253b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1077253e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10772541 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10772544 jbe 0x1077258b */
  if ((C.cf||C.zf)) goto L_1077258b;
L_10772546:;
  /* 10772546 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10772549 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1077254a mov ecx, 0xa */
  ECX = (0xau);
  /* 1077254f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10772551 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10772554 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10772557 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10772559 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1077255c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1077255f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10772562 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10772565 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10772567 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1077256a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1077256d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1077256f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10772572 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10772573 mov ecx, 0xa */
  ECX = (0xau);
  /* 10772578 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1077257a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1077257d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10772581 jle 0x1077258b */
  if ((C.zf||C.sf!=C.of)) goto L_1077258b;
  /* 10772583 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10772586 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10772589 ja 0x10772546 */
  if ((!C.cf&&!C.zf)) goto L_10772546;
L_1077258b:;
  /* 1077258b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1077258e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10772590 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10772593 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10772596 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10772599 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1077259b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1077259e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107725a1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_107725a4:;
  /* 107725a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107725a7 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107725a9 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 107725ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107725af mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107725b2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107725b4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 107725b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107725b9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107725bc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107725bf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107725c2 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 107725c5 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 107725c7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107725ca add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107725cd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107725d0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107725d3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107725d6 jb 0x107725a4 */
  if (C.cf) goto L_107725a4;
  /* 107725d8 mov esp, ebp */
  ESP = (EBP);
  /* 107725da pop ebp */
  EBP = (pop32());
  /* 107725db ret  */
  ESPCHK(0x10772530u, _esp0);
  ESP += 4; return;
}

/* FUN_100125e0 @ 0x107725e0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_107725e0(void) {
  FTRACE(0x107725e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107725e0 push ebp */
  push32((uint32_t)(EBP));
  /* 107725e1 mov ebp, esp */
  EBP = (ESP);
  /* 107725e3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_107725e6:;
  /* 107725e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107725e9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107725ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107725ee je 0x10772a5c */
  if (C.zf) goto L_10772a5c;
  /* 107725f4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107725f7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107725fa je 0x10772a5c */
  if (C.zf) goto L_10772a5c;
  /* 10772600 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 10772604 mov dword ptr [0x107908d0], 0 */
  w32((uint32_t)(0x107908d0), (0x0u));
  /* 1077260e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10772615 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10772618 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1077261b jmp 0x10772626 */
  goto L_10772626;
L_1077261d:;
  /* 1077261d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10772620 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10772623 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10772626:;
  /* 10772626 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10772629 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1077262c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1077262f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10772632 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10772635 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10772638 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1077263b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1077263d jne 0x10772641 */
  if (!C.zf) goto L_10772641;
  /* 1077263f jmp 0x1077261d */
  goto L_1077261d;
L_10772641:;
  /* 10772641 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10772644 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10772647 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1077264a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1077264d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10772650 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10772653 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10772656 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10772659 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1077265c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10772660 ja 0x107729b0 */
  if ((!C.cf&&!C.zf)) goto L_107729b0;
  /* 10772666 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10772669 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1077266b mov al, byte ptr [ecx + 0x10772a8c] */
  AL = (r8((uint32_t)(ECX + 0x10772a8c)));
  /* 10772671 jmp dword ptr [eax*4 + 0x10772a60] */
  switch (EAX) {
    case 0: goto L_107728cf;
    case 1: goto L_107727b3;
    case 2: goto L_1077273e;
    case 3: goto L_10772678;
    case 4: goto L_107726b6;
    case 5: goto L_10772717;
    case 6: goto L_10772765;
    case 7: goto L_1077278c;
    case 8: goto L_107727fa;
    case 9: goto L_107726f4;
    case 10: goto L_107729b0;
    default: x86_unimpl("switch@0x10772671 out of table"); return;
  }
L_10772678:;
  /* 10772678 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1077267b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1077267e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10772681 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10772684 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10772687 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1077268b ja 0x107726b1 */
  if ((!C.cf&&!C.zf)) goto L_107726b1;
  /* 1077268d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10772690 jmp dword ptr [ecx*4 + 0x10772adf] */
  switch (ECX) {
    case 0: goto L_10772697;
    case 1: goto L_107726a1;
    case 2: goto L_107726a7;
    case 3: goto L_107726ad;
    case 4: goto L_107726d5;
    case 5: goto L_107726df;
    case 6: goto L_107726e5;
    case 7: goto L_107726eb;
    default: x86_unimpl("switch@0x10772690 out of table"); return;
  }
L_10772697:;
  /* 10772697 mov dword ptr [0x107908d0], 1 */
  w32((uint32_t)(0x107908d0), (0x1u));
L_107726a1:;
  /* 107726a1 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 107726a5 jmp 0x107726b1 */
  goto L_107726b1;
L_107726a7:;
  /* 107726a7 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 107726ab jmp 0x107726b1 */
  goto L_107726b1;
L_107726ad:;
  /* 107726ad mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_107726b1:;
  /* 107726b1 jmp 0x107729b0 */
  goto L_107729b0;
L_107726b6:;
  /* 107726b6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107726b9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 107726bc mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107726bf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107726c2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 107726c5 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107726c9 ja 0x107726ef */
  if ((!C.cf&&!C.zf)) goto L_107726ef;
  /* 107726cb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107726ce jmp dword ptr [ecx*4 + 0x10772aef] */
  switch (ECX) {
    case 0: goto L_107726d5;
    case 1: goto L_107726df;
    case 2: goto L_107726e5;
    case 3: goto L_107726eb;
    default: x86_unimpl("switch@0x107726ce out of table"); return;
  }
L_107726d5:;
  /* 107726d5 mov dword ptr [0x107908d0], 1 */
  w32((uint32_t)(0x107908d0), (0x1u));
L_107726df:;
  /* 107726df mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 107726e3 jmp 0x107726ef */
  goto L_107726ef;
L_107726e5:;
  /* 107726e5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 107726e9 jmp 0x107726ef */
  goto L_107726ef;
L_107726eb:;
  /* 107726eb mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_107726ef:;
  /* 107726ef jmp 0x107729b0 */
  goto L_107729b0;
L_107726f4:;
  /* 107726f4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107726f7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 107726fa cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107726fe je 0x10772708 */
  if (C.zf) goto L_10772708;
  /* 10772700 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10772704 je 0x1077270e */
  if (C.zf) goto L_1077270e;
  /* 10772706 jmp 0x10772712 */
  goto L_10772712;
L_10772708:;
  /* 10772708 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 1077270c jmp 0x10772712 */
  goto L_10772712;
L_1077270e:;
  /* 1077270e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_10772712:;
  /* 10772712 jmp 0x107729b0 */
  goto L_107729b0;
L_10772717:;
  /* 10772717 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1077271a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1077271d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10772721 je 0x1077272b */
  if (C.zf) goto L_1077272b;
  /* 10772723 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10772727 je 0x10772735 */
  if (C.zf) goto L_10772735;
  /* 10772729 jmp 0x10772739 */
  goto L_10772739;
L_1077272b:;
  /* 1077272b mov dword ptr [0x107908d0], 1 */
  w32((uint32_t)(0x107908d0), (0x1u));
L_10772735:;
  /* 10772735 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_10772739:;
  /* 10772739 jmp 0x107729b0 */
  goto L_107729b0;
L_1077273e:;
  /* 1077273e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10772741 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10772744 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10772748 je 0x10772752 */
  if (C.zf) goto L_10772752;
  /* 1077274a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1077274e je 0x1077275c */
  if (C.zf) goto L_1077275c;
  /* 10772750 jmp 0x10772760 */
  goto L_10772760;
L_10772752:;
  /* 10772752 mov dword ptr [0x107908d0], 1 */
  w32((uint32_t)(0x107908d0), (0x1u));
L_1077275c:;
  /* 1077275c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_10772760:;
  /* 10772760 jmp 0x107729b0 */
  goto L_107729b0;
L_10772765:;
  /* 10772765 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10772768 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 1077276b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1077276f je 0x10772779 */
  if (C.zf) goto L_10772779;
  /* 10772771 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10772775 je 0x10772783 */
  if (C.zf) goto L_10772783;
  /* 10772777 jmp 0x10772787 */
  goto L_10772787;
L_10772779:;
  /* 10772779 mov dword ptr [0x107908d0], 1 */
  w32((uint32_t)(0x107908d0), (0x1u));
L_10772783:;
  /* 10772783 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_10772787:;
  /* 10772787 jmp 0x107729b0 */
  goto L_107729b0;
L_1077278c:;
  /* 1077278c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1077278f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10772792 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10772796 je 0x107727a0 */
  if (C.zf) goto L_107727a0;
  /* 10772798 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1077279c je 0x107727aa */
  if (C.zf) goto L_107727aa;
  /* 1077279e jmp 0x107727ae */
  goto L_107727ae;
L_107727a0:;
  /* 107727a0 mov dword ptr [0x107908d0], 1 */
  w32((uint32_t)(0x107908d0), (0x1u));
L_107727aa:;
  /* 107727aa mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_107727ae:;
  /* 107727ae jmp 0x107729b0 */
  goto L_107729b0;
L_107727b3:;
  /* 107727b3 push 0x1078c9e4 */
  push32((uint32_t)(0x1078c9e4u));
  /* 107727b8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107727bb push ecx */
  push32((uint32_t)(ECX));
  /* 107727bc call 0x10773010 */
  push32(0x107727c1u); f_10773010();
  /* 107727c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107727c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107727c6 jne 0x107727d3 */
  if (!C.zf) goto L_107727d3;
  /* 107727c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107727cb add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107727ce mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107727d1 jmp 0x107727f1 */
  goto L_107727f1;
L_107727d3:;
  /* 107727d3 push 0x1078c9e0 */
  push32((uint32_t)(0x1078c9e0u));
  /* 107727d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107727db push eax */
  push32((uint32_t)(EAX));
  /* 107727dc call 0x10773010 */
  push32(0x107727e1u); f_10773010();
  /* 107727e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107727e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107727e6 jne 0x107727f1 */
  if (!C.zf) goto L_107727f1;
  /* 107727e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107727eb add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107727ee mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_107727f1:;
  /* 107727f1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 107727f5 jmp 0x107729b0 */
  goto L_107729b0;
L_107727fa:;
  /* 107727fa mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107727fd cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10772801 jg 0x10772811 */
  if ((!C.zf&&C.sf==C.of)) goto L_10772811;
  /* 10772803 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10772806 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 1077280c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1077280f jmp 0x1077281d */
  goto L_1077281d;
L_10772811:;
  /* 10772811 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10772814 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 1077281a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1077281d:;
  /* 1077281d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10772821 jle 0x107728c4 */
  if ((C.zf||C.sf!=C.of)) goto L_107728c4;
  /* 10772827 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1077282a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1077282d jbe 0x107728c4 */
  if ((C.cf||C.zf)) goto L_107728c4;
  /* 10772833 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10772836 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10772838 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1077283a mov ecx, dword ptr [0x1078ec98] */
  ECX = (r32((uint32_t)(0x1078ec98)));
  /* 10772840 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10772842 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10772846 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1077284c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1077284e je 0x10772887 */
  if (C.zf) goto L_10772887;
  /* 10772850 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10772853 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10772856 jbe 0x10772887 */
  if ((C.cf||C.zf)) goto L_10772887;
  /* 10772858 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1077285b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1077285d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10772860 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10772862 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10772864 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10772867 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10772869 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1077286c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1077286f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10772871 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10772874 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10772877 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1077287a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1077287d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1077287f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10772882 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10772885 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10772887:;
  /* 10772887 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1077288a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1077288c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1077288f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10772891 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10772893 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10772896 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10772898 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1077289b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1077289e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 107728a0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107728a3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107728a6 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 107728a9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107728ac mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107728ae sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107728b1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107728b4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 107728b6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107728b9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107728bc mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 107728bf jmp 0x1077281d */
  goto L_1077281d;
L_107728c4:;
  /* 107728c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107728c7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 107728ca jmp 0x107725e6 */
  goto L_107725e6;
L_107728cf:;
  /* 107728cf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107728d2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 107728d5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107728d7 je 0x107729a2 */
  if (C.zf) goto L_107729a2;
  /* 107728dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107728e0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107728e3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_107728e6:;
  /* 107728e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107728e9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107728ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107728ee je 0x107729a0 */
  if (C.zf) goto L_107729a0;
  /* 107728f4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107728f7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107728fa je 0x107729a0 */
  if (C.zf) goto L_107729a0;
  /* 10772900 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10772903 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10772906 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10772909 jne 0x10772919 */
  if (!C.zf) goto L_10772919;
  /* 1077290b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1077290e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10772911 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10772914 jmp 0x107729a0 */
  goto L_107729a0;
L_10772919:;
  /* 10772919 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1077291c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1077291e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10772920 mov edx, dword ptr [0x1078ec98] */
  EDX = (r32((uint32_t)(0x1078ec98)));
  /* 10772926 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10772928 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1077292c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10772931 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10772933 je 0x1077296c */
  if (C.zf) goto L_1077296c;
  /* 10772935 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10772938 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1077293b jbe 0x1077296c */
  if ((C.cf||C.zf)) goto L_1077296c;
  /* 1077293d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10772940 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10772942 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10772945 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10772947 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10772949 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1077294c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1077294e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10772951 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10772954 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10772956 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10772959 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1077295c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1077295f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10772962 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10772964 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10772967 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1077296a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1077296c:;
  /* 1077296c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1077296f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10772971 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10772974 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10772976 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10772978 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1077297b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1077297d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10772980 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10772983 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10772985 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10772988 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1077298b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1077298e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10772991 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10772993 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10772996 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10772999 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1077299b jmp 0x107728e6 */
  goto L_107728e6;
L_107729a0:;
  /* 107729a0 jmp 0x107729ab */
  goto L_107729ab;
L_107729a2:;
  /* 107729a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107729a5 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107729a8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_107729ab:;
  /* 107729ab jmp 0x107725e6 */
  goto L_107725e6;
L_107729b0:;
  /* 107729b0 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 107729b4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107729b6 je 0x107729dc */
  if (C.zf) goto L_107729dc;
  /* 107729b8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107729bb push edx */
  push32((uint32_t)(EDX));
  /* 107729bc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107729bf push eax */
  push32((uint32_t)(EAX));
  /* 107729c0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107729c3 push ecx */
  push32((uint32_t)(ECX));
  /* 107729c4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107729c7 push edx */
  push32((uint32_t)(EDX));
  /* 107729c8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 107729cb push eax */
  push32((uint32_t)(EAX));
  /* 107729cc call 0x10771e10 */
  push32(0x107729d1u); f_10771e10();
  /* 107729d1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107729d4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107729d7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 107729da jmp 0x10772a57 */
  goto L_10772a57;
L_107729dc:;
  /* 107729dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107729df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107729e1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107729e3 mov ecx, dword ptr [0x1078ec98] */
  ECX = (r32((uint32_t)(0x1078ec98)));
  /* 107729e9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107729eb mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 107729ef and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 107729f5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107729f7 je 0x10772a28 */
  if (C.zf) goto L_10772a28;
  /* 107729f9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107729fc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107729fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10772a01 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10772a03 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10772a05 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10772a08 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10772a0a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10772a0d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10772a10 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10772a12 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10772a15 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10772a18 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10772a1b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10772a1e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10772a20 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10772a23 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10772a26 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10772a28:;
  /* 10772a28 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10772a2b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10772a2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10772a30 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10772a32 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10772a34 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10772a37 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10772a39 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10772a3c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10772a3f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10772a41 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10772a44 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10772a47 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10772a4a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10772a4d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10772a4f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10772a52 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10772a55 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10772a57:;
  /* 10772a57 jmp 0x107725e6 */
  goto L_107725e6;
L_10772a5c:;
  /* 10772a5c mov esp, ebp */
  ESP = (EBP);
  /* 10772a5e pop ebp */
  EBP = (pop32());
  /* 10772a5f ret  */
  ESPCHK(0x107725e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b00 @ 0x10772b00 (650 bytes, 178 insns) */
void f_10772b00(void) {
  FTRACE(0x10772b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10772b00 push ebp */
  push32((uint32_t)(EBP));
  /* 10772b01 mov ebp, esp */
  EBP = (ESP);
  /* 10772b03 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10772b09 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10772b0d jne 0x10772c69 */
  if (!C.zf) goto L_10772c69;
  /* 10772b13 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10772b16 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 10772b1c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 10772b22 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10772b25 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10772b2c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 10772b36 push 0 */
  push32((uint32_t)(0x0u));
  /* 10772b38 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10772b3e push edx */
  push32((uint32_t)(EDX));
  /* 10772b3f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10772b42 push eax */
  push32((uint32_t)(EAX));
  /* 10772b43 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10772b46 push ecx */
  push32((uint32_t)(ECX));
  /* 10772b47 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10772b4a push edx */
  push32((uint32_t)(EDX));
  /* 10772b4b call 0x10773f20 */
  push32(0x10772b50u); f_10773f20();
  /* 10772b50 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10772b53 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10772b56 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10772b5a jne 0x10772bef */
  if (!C.zf) goto L_10772bef;
  /* 10772b60 call dword ptr [0x10793370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793370))), 0x10772b66u);
  /* 10772b66 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10772b69 je 0x10772b70 */
  if (C.zf) goto L_10772b70;
  /* 10772b6b jmp 0x10772c4d */
  goto L_10772c4d;
L_10772b70:;
  /* 10772b70 push 0 */
  push32((uint32_t)(0x0u));
  /* 10772b72 push 0 */
  push32((uint32_t)(0x0u));
  /* 10772b74 push 0 */
  push32((uint32_t)(0x0u));
  /* 10772b76 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10772b79 push eax */
  push32((uint32_t)(EAX));
  /* 10772b7a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10772b7d push ecx */
  push32((uint32_t)(ECX));
  /* 10772b7e call 0x10773f20 */
  push32(0x10772b83u); f_10773f20();
  /* 10772b83 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10772b86 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 10772b8c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10772b93 jne 0x10772b9a */
  if (!C.zf) goto L_10772b9a;
  /* 10772b95 jmp 0x10772c4d */
  goto L_10772c4d;
L_10772b9a:;
  /* 10772b9a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 10772b9c push 0x1078c9ec */
  push32((uint32_t)(0x1078c9ecu));
  /* 10772ba1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10772ba3 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10772ba9 push edx */
  push32((uint32_t)(EDX));
  /* 10772baa call 0x10764940 */
  push32(0x10772bafu); f_10764940();
  /* 10772baf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10772bb2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10772bb5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10772bb9 jne 0x10772bc0 */
  if (!C.zf) goto L_10772bc0;
  /* 10772bbb jmp 0x10772c4d */
  goto L_10772c4d;
L_10772bc0:;
  /* 10772bc0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10772bc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10772bc9 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 10772bcf push eax */
  push32((uint32_t)(EAX));
  /* 10772bd0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10772bd3 push ecx */
  push32((uint32_t)(ECX));
  /* 10772bd4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10772bd7 push edx */
  push32((uint32_t)(EDX));
  /* 10772bd8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10772bdb push eax */
  push32((uint32_t)(EAX));
  /* 10772bdc call 0x10773f20 */
  push32(0x10772be1u); f_10773f20();
  /* 10772be1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10772be4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10772be7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10772beb jne 0x10772bef */
  if (!C.zf) goto L_10772bef;
  /* 10772bed jmp 0x10772c4d */
  goto L_10772c4d;
L_10772bef:;
  /* 10772bef push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10772bf1 push 0x1078c9ec */
  push32((uint32_t)(0x1078c9ecu));
  /* 10772bf6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10772bf8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10772bfb push ecx */
  push32((uint32_t)(ECX));
  /* 10772bfc call 0x10764940 */
  push32(0x10772c01u); f_10764940();
  /* 10772c01 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10772c04 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 10772c0a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10772c0c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10772c12 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10772c15 jne 0x10772c19 */
  if (!C.zf) goto L_10772c19;
  /* 10772c17 jmp 0x10772c4d */
  goto L_10772c4d;
L_10772c19:;
  /* 10772c19 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10772c1c push ecx */
  push32((uint32_t)(ECX));
  /* 10772c1d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10772c20 push edx */
  push32((uint32_t)(EDX));
  /* 10772c21 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10772c27 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10772c29 push ecx */
  push32((uint32_t)(ECX));
  /* 10772c2a call 0x10768160 */
  push32(0x10772c2fu); f_10768160();
  /* 10772c2f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10772c32 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10772c36 je 0x10772c46 */
  if (C.zf) goto L_10772c46;
  /* 10772c38 push 2 */
  push32((uint32_t)(0x2u));
  /* 10772c3a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10772c3d push edx */
  push32((uint32_t)(EDX));
  /* 10772c3e call 0x107653d0 */
  push32(0x10772c43u); f_107653d0();
  /* 10772c43 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10772c46:;
  /* 10772c46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10772c48 jmp 0x10772d86 */
  goto L_10772d86;
L_10772c4d:;
  /* 10772c4d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10772c51 je 0x10772c61 */
  if (C.zf) goto L_10772c61;
  /* 10772c53 push 2 */
  push32((uint32_t)(0x2u));
  /* 10772c55 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10772c58 push eax */
  push32((uint32_t)(EAX));
  /* 10772c59 call 0x107653d0 */
  push32(0x10772c5eu); f_107653d0();
  /* 10772c5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10772c61:;
  /* 10772c61 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10772c64 jmp 0x10772d86 */
  goto L_10772d86;
L_10772c69:;
  /* 10772c69 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10772c6d jne 0x10772d83 */
  if (!C.zf) goto L_10772d83;
  /* 10772c73 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 10772c7d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10772c80 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 10772c86 push 0 */
  push32((uint32_t)(0x0u));
  /* 10772c88 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10772c8e push edx */
  push32((uint32_t)(EDX));
  /* 10772c8f push 0x107907e8 */
  push32((uint32_t)(0x107907e8u));
  /* 10772c94 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10772c97 push eax */
  push32((uint32_t)(EAX));
  /* 10772c98 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10772c9b push ecx */
  push32((uint32_t)(ECX));
  /* 10772c9c call 0x10773d80 */
  push32(0x10772ca1u); f_10773d80();
  /* 10772ca1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10772ca4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10772ca6 jne 0x10772cb0 */
  if (!C.zf) goto L_10772cb0;
  /* 10772ca8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10772cab jmp 0x10772d86 */
  goto L_10772d86;
L_10772cb0:;
  /* 10772cb0 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10772cb6 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10772cb9 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 10772cc3 jmp 0x10772cd4 */
  goto L_10772cd4;
L_10772cc5:;
  /* 10772cc5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10772ccb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10772cce mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_10772cd4:;
  /* 10772cd4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10772cdb jge 0x10772d7f */
  if ((C.sf==C.of)) goto L_10772d7f;
  /* 10772ce1 cmp dword ptr [0x1078eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1078eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10772ce8 jle 0x10772d1b */
  if ((C.zf||C.sf!=C.of)) goto L_10772d1b;
  /* 10772cea push 4 */
  push32((uint32_t)(0x4u));
  /* 10772cec mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10772cf2 mov dl, byte ptr [ecx*2 + 0x107907e8] */
  DL = (r8((uint32_t)(ECX*2 + 0x107907e8)));
  /* 10772cf9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10772cff mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10772d05 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10772d0a push eax */
  push32((uint32_t)(EAX));
  /* 10772d0b call 0x1076a950 */
  push32(0x10772d10u); f_1076a950();
  /* 10772d10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10772d13 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10772d19 jmp 0x10772d4e */
  goto L_10772d4e;
L_10772d1b:;
  /* 10772d1b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10772d21 mov dl, byte ptr [ecx*2 + 0x107907e8] */
  DL = (r8((uint32_t)(ECX*2 + 0x107907e8)));
  /* 10772d28 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10772d2e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10772d34 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10772d39 mov ecx, dword ptr [0x1078ec98] */
  ECX = (r32((uint32_t)(0x1078ec98)));
  /* 10772d3f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10772d41 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10772d45 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10772d48 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_10772d4e:;
  /* 10772d4e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10772d55 je 0x10772d78 */
  if (C.zf) goto L_10772d78;
  /* 10772d57 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10772d5d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10772d60 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10772d63 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 10772d6a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10772d6e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10772d74 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10772d76 jmp 0x10772d7a */
  goto L_10772d7a;
L_10772d78:;
  /* 10772d78 jmp 0x10772d7f */
  goto L_10772d7f;
L_10772d7a:;
  /* 10772d7a jmp 0x10772cc5 */
  goto L_10772cc5;
L_10772d7f:;
  /* 10772d7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10772d81 jmp 0x10772d86 */
  goto L_10772d86;
L_10772d83:;
  /* 10772d83 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10772d86:;
  /* 10772d86 mov esp, ebp */
  ESP = (EBP);
  /* 10772d88 pop ebp */
  EBP = (pop32());
  /* 10772d89 ret  */
  ESPCHK(0x10772b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d90 @ 0x10772d90 (10 bytes, 5 insns) */
void f_10772d90(void) {
  FTRACE(0x10772d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10772d90 push ebp */
  push32((uint32_t)(EBP));
  /* 10772d91 mov ebp, esp */
  EBP = (ESP);
  /* 10772d93 mov eax, dword ptr [0x1078fd88] */
  EAX = (r32((uint32_t)(0x1078fd88)));
  /* 10772d98 pop ebp */
  EBP = (pop32());
  /* 10772d99 ret  */
  ESPCHK(0x10772d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10012da0 @ 0x10772da0 (575 bytes, 196 insns) */
void f_10772da0(void) {
  FTRACE(0x10772da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10772da0 push ebp */
  push32((uint32_t)(EBP));
  /* 10772da1 mov ebp, esp */
  EBP = (ESP);
  /* 10772da3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10772da5 push 0x1078c9f8 */
  push32((uint32_t)(0x1078c9f8u));
  /* 10772daa push 0x1076da48 */
  push32((uint32_t)(0x1076da48u));
  /* 10772daf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10772db5 push eax */
  push32((uint32_t)(EAX));
  /* 10772db6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10772dbd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10772dc0 push ebx */
  push32((uint32_t)(EBX));
  /* 10772dc1 push esi */
  push32((uint32_t)(ESI));
  /* 10772dc2 push edi */
  push32((uint32_t)(EDI));
  /* 10772dc3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10772dc6 cmp dword ptr [0x107907f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107907f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10772dcd jne 0x10772e1e */
  if (!C.zf) goto L_10772e1e;
  /* 10772dcf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10772dd2 push eax */
  push32((uint32_t)(EAX));
  /* 10772dd3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10772dd5 push 0x1078c128 */
  push32((uint32_t)(0x1078c128u));
  /* 10772dda push 1 */
  push32((uint32_t)(0x1u));
  /* 10772ddc call dword ptr [0x107932e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932e4))), 0x10772de2u);
  /* 10772de2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10772de4 je 0x10772df2 */
  if (C.zf) goto L_10772df2;
  /* 10772de6 mov dword ptr [0x107907f4], 1 */
  w32((uint32_t)(0x107907f4), (0x1u));
  /* 10772df0 jmp 0x10772e1e */
  goto L_10772e1e;
L_10772df2:;
  /* 10772df2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10772df5 push ecx */
  push32((uint32_t)(ECX));
  /* 10772df6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10772df8 push 0x1078c124 */
  push32((uint32_t)(0x1078c124u));
  /* 10772dfd push 1 */
  push32((uint32_t)(0x1u));
  /* 10772dff push 0 */
  push32((uint32_t)(0x0u));
  /* 10772e01 call dword ptr [0x107932f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932f4))), 0x10772e07u);
  /* 10772e07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10772e09 je 0x10772e17 */
  if (C.zf) goto L_10772e17;
  /* 10772e0b mov dword ptr [0x107907f4], 2 */
  w32((uint32_t)(0x107907f4), (0x2u));
  /* 10772e15 jmp 0x10772e1e */
  goto L_10772e1e;
L_10772e17:;
  /* 10772e17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10772e19 jmp 0x10772ff9 */
  goto L_10772ff9;
L_10772e1e:;
  /* 10772e1e cmp dword ptr [0x107907f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x107907f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10772e25 jne 0x10772e42 */
  if (!C.zf) goto L_10772e42;
  /* 10772e27 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10772e2a push edx */
  push32((uint32_t)(EDX));
  /* 10772e2b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10772e2e push eax */
  push32((uint32_t)(EAX));
  /* 10772e2f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10772e32 push ecx */
  push32((uint32_t)(ECX));
  /* 10772e33 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10772e36 push edx */
  push32((uint32_t)(EDX));
  /* 10772e37 call dword ptr [0x107932e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932e4))), 0x10772e3du);
  /* 10772e3d jmp 0x10772ff9 */
  goto L_10772ff9;
L_10772e42:;
  /* 10772e42 cmp dword ptr [0x107907f4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x107907f4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10772e49 jne 0x10772ff7 */
  if (!C.zf) goto L_10772ff7;
  /* 10772e4f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10772e53 jne 0x10772e5d */
  if (!C.zf) goto L_10772e5d;
  /* 10772e55 mov eax, dword ptr [0x10790768] */
  EAX = (r32((uint32_t)(0x10790768)));
  /* 10772e5a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_10772e5d:;
  /* 10772e5d push 0 */
  push32((uint32_t)(0x0u));
  /* 10772e5f push 0 */
  push32((uint32_t)(0x0u));
  /* 10772e61 push 0 */
  push32((uint32_t)(0x0u));
  /* 10772e63 push 0 */
  push32((uint32_t)(0x0u));
  /* 10772e65 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10772e68 push ecx */
  push32((uint32_t)(ECX));
  /* 10772e69 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10772e6c push edx */
  push32((uint32_t)(EDX));
  /* 10772e6d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10772e72 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10772e75 push eax */
  push32((uint32_t)(EAX));
  /* 10772e76 call dword ptr [0x1079339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079339c))), 0x10772e7cu);
  /* 10772e7c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10772e7f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10772e83 jne 0x10772e8c */
  if (!C.zf) goto L_10772e8c;
  /* 10772e85 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10772e87 jmp 0x10772ff9 */
  goto L_10772ff9;
L_10772e8c:;
  /* 10772e8c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10772e93 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10772e96 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10772e99 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10772e9b call 0x10767ae0 */
  push32(0x10772ea0u); f_10767ae0();
  /* 10772ea0 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10772ea3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10772ea6 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10772ea9 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10772eac mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10772eaf push edx */
  push32((uint32_t)(EDX));
  /* 10772eb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10772eb2 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10772eb5 push eax */
  push32((uint32_t)(EAX));
  /* 10772eb6 call 0x107686b0 */
  push32(0x10772ebbu); f_107686b0();
  /* 10772ebb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10772ebe mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10772ec5 jmp 0x10772ede */
  goto L_10772ede;
  /* 10772ec7 mov eax, 1 */
  EAX = (0x1u);
  /* 10772ecc ret  */
  ESPCHK(0x10772da0u, _esp0);
  ESP += 4; return;
  /* 10772ecd mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10772ed0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10772ed7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10772ede:;
  /* 10772ede cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10772ee2 jne 0x10772eeb */
  if (!C.zf) goto L_10772eeb;
  /* 10772ee4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10772ee6 jmp 0x10772ff9 */
  goto L_10772ff9;
L_10772eeb:;
  /* 10772eeb push 0 */
  push32((uint32_t)(0x0u));
  /* 10772eed push 0 */
  push32((uint32_t)(0x0u));
  /* 10772eef mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10772ef2 push ecx */
  push32((uint32_t)(ECX));
  /* 10772ef3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10772ef6 push edx */
  push32((uint32_t)(EDX));
  /* 10772ef7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10772efa push eax */
  push32((uint32_t)(EAX));
  /* 10772efb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10772efe push ecx */
  push32((uint32_t)(ECX));
  /* 10772eff push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10772f04 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10772f07 push edx */
  push32((uint32_t)(EDX));
  /* 10772f08 call dword ptr [0x1079339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079339c))), 0x10772f0eu);
  /* 10772f0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10772f10 jne 0x10772f19 */
  if (!C.zf) goto L_10772f19;
  /* 10772f12 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10772f14 jmp 0x10772ff9 */
  goto L_10772ff9;
L_10772f19:;
  /* 10772f19 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10772f20 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10772f23 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 10772f27 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10772f2a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10772f2c call 0x10767ae0 */
  push32(0x10772f31u); f_10767ae0();
  /* 10772f31 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 10772f34 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10772f37 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10772f3a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10772f3d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10772f44 jmp 0x10772f5d */
  goto L_10772f5d;
  /* 10772f46 mov eax, 1 */
  EAX = (0x1u);
  /* 10772f4b ret  */
  ESPCHK(0x10772da0u, _esp0);
  ESP += 4; return;
  /* 10772f4c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10772f4f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10772f56 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10772f5d:;
  /* 10772f5d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10772f61 jne 0x10772f6a */
  if (!C.zf) goto L_10772f6a;
  /* 10772f63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10772f65 jmp 0x10772ff9 */
  goto L_10772ff9;
L_10772f6a:;
  /* 10772f6a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10772f6e jne 0x10772f79 */
  if (!C.zf) goto L_10772f79;
  /* 10772f70 mov edx, dword ptr [0x10790758] */
  EDX = (r32((uint32_t)(0x10790758)));
  /* 10772f76 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_10772f79:;
  /* 10772f79 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10772f7c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10772f7f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 10772f85 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10772f88 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10772f8b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 10772f92 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10772f95 push ecx */
  push32((uint32_t)(ECX));
  /* 10772f96 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10772f99 push edx */
  push32((uint32_t)(EDX));
  /* 10772f9a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10772f9d push eax */
  push32((uint32_t)(EAX));
  /* 10772f9e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10772fa1 push ecx */
  push32((uint32_t)(ECX));
  /* 10772fa2 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10772fa5 push edx */
  push32((uint32_t)(EDX));
  /* 10772fa6 call dword ptr [0x107932f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932f4))), 0x10772facu);
  /* 10772fac mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10772faf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10772fb2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10772fb5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10772fb7 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 10772fbc cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10772fc2 je 0x10772fd8 */
  if (C.zf) goto L_10772fd8;
  /* 10772fc4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10772fc7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10772fca xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10772fcc mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10772fd0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10772fd6 je 0x10772fdc */
  if (C.zf) goto L_10772fdc;
L_10772fd8:;
  /* 10772fd8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10772fda jmp 0x10772ff9 */
  goto L_10772ff9;
L_10772fdc:;
  /* 10772fdc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10772fdf shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10772fe1 push eax */
  push32((uint32_t)(EAX));
  /* 10772fe2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10772fe5 push ecx */
  push32((uint32_t)(ECX));
  /* 10772fe6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10772fe9 push edx */
  push32((uint32_t)(EDX));
  /* 10772fea call 0x1076c830 */
  push32(0x10772fefu); f_1076c830();
  /* 10772fef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10772ff2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10772ff5 jmp 0x10772ff9 */
  goto L_10772ff9;
L_10772ff7:;
  /* 10772ff7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10772ff9:;
  /* 10772ff9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 10772ffc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10772fff mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10773006 pop edi */
  EDI = (pop32());
  /* 10773007 pop esi */
  ESI = (pop32());
  /* 10773008 pop ebx */
  EBX = (pop32());
  /* 10773009 mov esp, ebp */
  ESP = (EBP);
  /* 1077300b pop ebp */
  EBP = (pop32());
  /* 1077300c ret  */
  ESPCHK(0x10772da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013010 @ 0x10773010 (208 bytes, 85 insns) */
void f_10773010(void) {
  FTRACE(0x10773010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10773010 push ebp */
  push32((uint32_t)(EBP));
  /* 10773011 mov ebp, esp */
  EBP = (ESP);
  /* 10773013 push edi */
  push32((uint32_t)(EDI));
  /* 10773014 push esi */
  push32((uint32_t)(ESI));
  /* 10773015 push ebx */
  push32((uint32_t)(EBX));
  /* 10773016 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10773019 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1077301c lea eax, [0x10790750] */
  EAX = ((uint32_t)(0x10790750));
  /* 10773022 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10773026 jne 0x10773063 */
  if (!C.zf) goto L_10773063;
  /* 10773028 mov al, 0xff */
  AL = (0xffu);
  /* 1077302a mov edi, edi */
  EDI = (EDI);
L_1077302c:;
  /* 1077302c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1077302e je 0x1077305e */
  if (C.zf) goto L_1077305e;
  /* 10773030 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10773032 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10773033 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 10773035 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10773036 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10773038 je 0x1077302c */
  if (C.zf) goto L_1077302c;
  /* 1077303a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1077303c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1077303e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10773040 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10773043 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10773045 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10773047 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 10773049 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1077304b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1077304d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1077304f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10773052 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10773054 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10773056 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10773058 je 0x1077302c */
  if (C.zf) goto L_1077302c;
  /* 1077305a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1077305c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_1077305e:;
  /* 1077305e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 10773061 jmp 0x107730db */
  goto L_107730db;
L_10773063:;
  /* 10773063 lock inc dword ptr [0x107908e4] */
  x86_unimpl("lock inc @ 0x10773063");
  /* 1077306a cmp dword ptr [0x107908d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107908d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10773071 jg 0x10773077 */
  if ((!C.zf&&C.sf==C.of)) goto L_10773077;
  /* 10773073 push 0 */
  push32((uint32_t)(0x0u));
  /* 10773075 jmp 0x1077308c */
  goto L_1077308c;
L_10773077:;
  /* 10773077 lock dec dword ptr [0x107908e4] */
  x86_unimpl("lock dec @ 0x10773077");
  /* 1077307e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10773080 call 0x10768340 */
  push32(0x10773085u); f_10768340();
  /* 10773085 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_1077308c:;
  /* 1077308c mov eax, 0xff */
  EAX = (0xffu);
  /* 10773091 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10773093 nop  */
  /* nop */
L_10773094:;
  /* 10773094 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10773096 je 0x107730bf */
  if (C.zf) goto L_107730bf;
  /* 10773098 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1077309a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1077309b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1077309d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1077309e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107730a0 je 0x10773094 */
  if (C.zf) goto L_10773094;
  /* 107730a2 push eax */
  push32((uint32_t)(EAX));
  /* 107730a3 push ebx */
  push32((uint32_t)(EBX));
  /* 107730a4 call 0x10774180 */
  push32(0x107730a9u); f_10774180();
  /* 107730a9 mov ebx, eax */
  EBX = (EAX);
  /* 107730ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107730ae call 0x10774180 */
  push32(0x107730b3u); f_10774180();
  /* 107730b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107730b6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107730b8 je 0x10773094 */
  if (C.zf) goto L_10773094;
  /* 107730ba sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107730bc sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_107730bf:;
  /* 107730bf mov ebx, eax */
  EBX = (EAX);
  /* 107730c1 pop eax */
  EAX = (pop32());
  /* 107730c2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107730c4 jne 0x107730cf */
  if (!C.zf) goto L_107730cf;
  /* 107730c6 lock dec dword ptr [0x107908e4] */
  x86_unimpl("lock dec @ 0x107730c6");
  /* 107730cd jmp 0x107730d9 */
  goto L_107730d9;
L_107730cf:;
  /* 107730cf push 0x13 */
  push32((uint32_t)(0x13u));
  /* 107730d1 call 0x107683e0 */
  push32(0x107730d6u); f_107683e0();
  /* 107730d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107730d9:;
  /* 107730d9 mov eax, ebx */
  EAX = (EBX);
L_107730db:;
  /* 107730db pop ebx */
  EBX = (pop32());
  /* 107730dc pop esi */
  ESI = (pop32());
  /* 107730dd pop edi */
  EDI = (pop32());
  /* 107730de leave  */
  ESP = EBP;
  EBP = pop32();
  /* 107730df ret  */
  ESPCHK(0x10773010u, _esp0);
  ESP += 4; return;
}

/* FUN_100130e0 @ 0x107730e0 (257 bytes, 103 insns) */
void f_107730e0(void) {
  FTRACE(0x107730e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107730e0 push ebp */
  push32((uint32_t)(EBP));
  /* 107730e1 mov ebp, esp */
  EBP = (ESP);
  /* 107730e3 push edi */
  push32((uint32_t)(EDI));
  /* 107730e4 push esi */
  push32((uint32_t)(ESI));
  /* 107730e5 push ebx */
  push32((uint32_t)(EBX));
  /* 107730e6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107730e9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107730eb je 0x107731da */
  if (C.zf) goto L_107731da;
  /* 107730f1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 107730f4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 107730f7 lea eax, [0x10790750] */
  EAX = ((uint32_t)(0x10790750));
  /* 107730fd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10773101 jne 0x10773151 */
  if (!C.zf) goto L_10773151;
  /* 10773103 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 10773105 mov bl, 0x5a */
  BL = (0x5au);
  /* 10773107 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 10773109 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1077310c:;
  /* 1077310c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 1077310e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10773110 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 10773112 je 0x10773135 */
  if (C.zf) goto L_10773135;
  /* 10773114 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10773116 je 0x10773135 */
  if (C.zf) goto L_10773135;
  /* 10773118 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10773119 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1077311a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1077311c jb 0x10773124 */
  if (C.cf) goto L_10773124;
  /* 1077311e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10773120 ja 0x10773124 */
  if ((!C.cf&&!C.zf)) goto L_10773124;
  /* 10773122 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_10773124:;
  /* 10773124 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10773126 jb 0x1077312e */
  if (C.cf) goto L_1077312e;
  /* 10773128 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1077312a ja 0x1077312e */
  if ((!C.cf&&!C.zf)) goto L_1077312e;
  /* 1077312c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_1077312e:;
  /* 1077312e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10773130 jne 0x1077313f */
  if (!C.zf) goto L_1077313f;
  /* 10773132 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10773133 jne 0x1077310c */
  if (!C.zf) goto L_1077310c;
L_10773135:;
  /* 10773135 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10773137 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10773139 je 0x107731da */
  if (C.zf) goto L_107731da;
L_1077313f:;
  /* 1077313f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10773144 jb 0x107731da */
  if (C.cf) goto L_107731da;
  /* 1077314a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1077314c jmp 0x107731da */
  goto L_107731da;
L_10773151:;
  /* 10773151 lock inc dword ptr [0x107908e4] */
  x86_unimpl("lock inc @ 0x10773151");
  /* 10773158 cmp dword ptr [0x107908d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107908d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1077315f jg 0x10773165 */
  if ((!C.zf&&C.sf==C.of)) goto L_10773165;
  /* 10773161 push 0 */
  push32((uint32_t)(0x0u));
  /* 10773163 jmp 0x1077317e */
  goto L_1077317e;
L_10773165:;
  /* 10773165 lock dec dword ptr [0x107908e4] */
  x86_unimpl("lock dec @ 0x10773165");
  /* 1077316c mov ebx, ecx */
  EBX = (ECX);
  /* 1077316e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10773170 call 0x10768340 */
  push32(0x10773175u); f_10768340();
  /* 10773175 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 1077317c mov ecx, ebx */
  ECX = (EBX);
L_1077317e:;
  /* 1077317e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10773180 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10773182 mov edi, edi */
  EDI = (EDI);
L_10773184:;
  /* 10773184 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10773186 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10773188 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1077318a je 0x107731af */
  if (C.zf) goto L_107731af;
  /* 1077318c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1077318e je 0x107731af */
  if (C.zf) goto L_107731af;
  /* 10773190 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10773191 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10773192 push ecx */
  push32((uint32_t)(ECX));
  /* 10773193 push eax */
  push32((uint32_t)(EAX));
  /* 10773194 push ebx */
  push32((uint32_t)(EBX));
  /* 10773195 call 0x10774180 */
  push32(0x1077319au); f_10774180();
  /* 1077319a mov ebx, eax */
  EBX = (EAX);
  /* 1077319c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1077319f call 0x10774180 */
  push32(0x107731a4u); f_10774180();
  /* 107731a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107731a7 pop ecx */
  ECX = (pop32());
  /* 107731a8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107731aa jne 0x107731b5 */
  if (!C.zf) goto L_107731b5;
  /* 107731ac dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 107731ad jne 0x10773184 */
  if (!C.zf) goto L_10773184;
L_107731af:;
  /* 107731af xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107731b1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107731b3 je 0x107731be */
  if (C.zf) goto L_107731be;
L_107731b5:;
  /* 107731b5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 107731ba jb 0x107731be */
  if (C.cf) goto L_107731be;
  /* 107731bc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_107731be:;
  /* 107731be pop eax */
  EAX = (pop32());
  /* 107731bf or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107731c1 jne 0x107731cc */
  if (!C.zf) goto L_107731cc;
  /* 107731c3 lock dec dword ptr [0x107908e4] */
  x86_unimpl("lock dec @ 0x107731c3");
  /* 107731ca jmp 0x107731da */
  goto L_107731da;
L_107731cc:;
  /* 107731cc mov ebx, ecx */
  EBX = (ECX);
  /* 107731ce push 0x13 */
  push32((uint32_t)(0x13u));
  /* 107731d0 call 0x107683e0 */
  push32(0x107731d5u); f_107683e0();
  /* 107731d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107731d8 mov ecx, ebx */
  ECX = (EBX);
L_107731da:;
  /* 107731da mov eax, ecx */
  EAX = (ECX);
  /* 107731dc pop ebx */
  EBX = (pop32());
  /* 107731dd pop esi */
  ESI = (pop32());
  /* 107731de pop edi */
  EDI = (pop32());
  /* 107731df leave  */
  ESP = EBP;
  EBP = pop32();
  /* 107731e0 ret  */
  ESPCHK(0x107730e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100131f0 @ 0x107731f0 (255 bytes, 88 insns) */
void f_107731f0(void) {
  FTRACE(0x107731f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107731f0 push ebp */
  push32((uint32_t)(EBP));
  /* 107731f1 mov ebp, esp */
  EBP = (ESP);
  /* 107731f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_107731f6:;
  /* 107731f6 cmp dword ptr [0x1078eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1078eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107731fd jle 0x10773216 */
  if ((C.zf||C.sf!=C.of)) goto L_10773216;
  /* 107731ff push 8 */
  push32((uint32_t)(0x8u));
  /* 10773201 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10773204 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10773206 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10773208 push ecx */
  push32((uint32_t)(ECX));
  /* 10773209 call 0x1076a950 */
  push32(0x1077320eu); f_1076a950();
  /* 1077320e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10773211 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10773214 jmp 0x1077322f */
  goto L_1077322f;
L_10773216:;
  /* 10773216 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10773219 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1077321b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1077321d mov ecx, dword ptr [0x1078ec98] */
  ECX = (r32((uint32_t)(0x1078ec98)));
  /* 10773223 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10773225 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10773229 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1077322c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1077322f:;
  /* 1077322f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10773233 je 0x10773240 */
  if (C.zf) goto L_10773240;
  /* 10773235 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10773238 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1077323b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1077323e jmp 0x107731f6 */
  goto L_107731f6;
L_10773240:;
  /* 10773240 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10773243 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10773245 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10773247 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1077324a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1077324d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10773250 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10773253 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10773256 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10773259 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1077325d je 0x10773265 */
  if (C.zf) goto L_10773265;
  /* 1077325f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10773263 jne 0x10773278 */
  if (!C.zf) goto L_10773278;
L_10773265:;
  /* 10773265 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10773268 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1077326a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1077326c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1077326f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10773272 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10773275 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10773278:;
  /* 10773278 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1077327f:;
  /* 1077327f cmp dword ptr [0x1078eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1078eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10773286 jle 0x1077329b */
  if ((C.zf||C.sf!=C.of)) goto L_1077329b;
  /* 10773288 push 4 */
  push32((uint32_t)(0x4u));
  /* 1077328a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1077328d push edx */
  push32((uint32_t)(EDX));
  /* 1077328e call 0x1076a950 */
  push32(0x10773293u); f_1076a950();
  /* 10773293 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10773296 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10773299 jmp 0x107732b0 */
  goto L_107732b0;
L_1077329b:;
  /* 1077329b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1077329e mov ecx, dword ptr [0x1078ec98] */
  ECX = (r32((uint32_t)(0x1078ec98)));
  /* 107732a4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107732a6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 107732aa and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 107732ad mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_107732b0:;
  /* 107732b0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107732b4 je 0x107732db */
  if (C.zf) goto L_107732db;
  /* 107732b6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107732b9 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107732bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107732bf lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 107732c3 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 107732c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107732c9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107732cb mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 107732cd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107732d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107732d3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107732d6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 107732d9 jmp 0x1077327f */
  goto L_1077327f;
L_107732db:;
  /* 107732db cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107732df jne 0x107732e8 */
  if (!C.zf) goto L_107732e8;
  /* 107732e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107732e4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 107732e6 jmp 0x107732eb */
  goto L_107732eb;
L_107732e8:;
  /* 107732e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_107732eb:;
  /* 107732eb mov esp, ebp */
  ESP = (EBP);
  /* 107732ed pop ebp */
  EBP = (pop32());
  /* 107732ee ret  */
  ESPCHK(0x107731f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100132f0 @ 0x107732f0 (17 bytes, 8 insns) */
void f_107732f0(void) {
  FTRACE(0x107732f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107732f0 push ebp */
  push32((uint32_t)(EBP));
  /* 107732f1 mov ebp, esp */
  EBP = (ESP);
  /* 107732f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107732f6 push eax */
  push32((uint32_t)(EAX));
  /* 107732f7 call 0x107731f0 */
  push32(0x107732fcu); f_107731f0();
  /* 107732fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107732ff pop ebp */
  EBP = (pop32());
  /* 10773300 ret  */
  ESPCHK(0x107732f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013310 @ 0x10773310 (297 bytes, 106 insns) */
void f_10773310(void) {
  FTRACE(0x10773310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10773310 push ebp */
  push32((uint32_t)(EBP));
  /* 10773311 mov ebp, esp */
  EBP = (ESP);
  /* 10773313 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10773316 push esi */
  push32((uint32_t)(ESI));
L_10773317:;
  /* 10773317 cmp dword ptr [0x1078eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1078eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1077331e jle 0x10773337 */
  if ((C.zf||C.sf!=C.of)) goto L_10773337;
  /* 10773320 push 8 */
  push32((uint32_t)(0x8u));
  /* 10773322 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10773325 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10773327 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10773329 push ecx */
  push32((uint32_t)(ECX));
  /* 1077332a call 0x1076a950 */
  push32(0x1077332fu); f_1076a950();
  /* 1077332f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10773332 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10773335 jmp 0x10773350 */
  goto L_10773350;
L_10773337:;
  /* 10773337 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1077333a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1077333c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1077333e mov ecx, dword ptr [0x1078ec98] */
  ECX = (r32((uint32_t)(0x1078ec98)));
  /* 10773344 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10773346 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1077334a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1077334d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10773350:;
  /* 10773350 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10773354 je 0x10773361 */
  if (C.zf) goto L_10773361;
  /* 10773356 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10773359 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1077335c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1077335f jmp 0x10773317 */
  goto L_10773317;
L_10773361:;
  /* 10773361 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10773364 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10773366 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10773368 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1077336b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1077336e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10773371 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10773374 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10773377 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1077337a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1077337e je 0x10773386 */
  if (C.zf) goto L_10773386;
  /* 10773380 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10773384 jne 0x10773399 */
  if (!C.zf) goto L_10773399;
L_10773386:;
  /* 10773386 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10773389 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1077338b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1077338d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10773390 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10773393 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10773396 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10773399:;
  /* 10773399 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 107733a0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_107733a7:;
  /* 107733a7 cmp dword ptr [0x1078eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1078eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107733ae jle 0x107733c3 */
  if ((C.zf||C.sf!=C.of)) goto L_107733c3;
  /* 107733b0 push 4 */
  push32((uint32_t)(0x4u));
  /* 107733b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107733b5 push edx */
  push32((uint32_t)(EDX));
  /* 107733b6 call 0x1076a950 */
  push32(0x107733bbu); f_1076a950();
  /* 107733bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107733be mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 107733c1 jmp 0x107733d8 */
  goto L_107733d8;
L_107733c3:;
  /* 107733c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107733c6 mov ecx, dword ptr [0x1078ec98] */
  ECX = (r32((uint32_t)(0x1078ec98)));
  /* 107733cc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107733ce mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 107733d2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 107733d5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_107733d8:;
  /* 107733d8 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107733dc je 0x10773419 */
  if (C.zf) goto L_10773419;
  /* 107733de push 0 */
  push32((uint32_t)(0x0u));
  /* 107733e0 push 0xa */
  push32((uint32_t)(0xau));
  /* 107733e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107733e5 push eax */
  push32((uint32_t)(EAX));
  /* 107733e6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107733e9 push ecx */
  push32((uint32_t)(ECX));
  /* 107733ea call 0x107742b0 */
  push32(0x107733efu); f_107742b0();
  /* 107733ef mov ecx, eax */
  ECX = (EAX);
  /* 107733f1 mov esi, edx */
  ESI = (EDX);
  /* 107733f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107733f6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107733f9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 107733fa add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107733fc adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 107733fe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10773401 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 10773404 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10773407 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10773409 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1077340b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1077340e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10773411 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10773414 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10773417 jmp 0x107733a7 */
  goto L_107733a7;
L_10773419:;
  /* 10773419 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1077341d jne 0x1077342e */
  if (!C.zf) goto L_1077342e;
  /* 1077341f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10773422 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10773424 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10773427 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1077342a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1077342c jmp 0x10773434 */
  goto L_10773434;
L_1077342e:;
  /* 1077342e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10773431 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_10773434:;
  /* 10773434 pop esi */
  ESI = (pop32());
  /* 10773435 mov esp, ebp */
  ESP = (EBP);
  /* 10773437 pop ebp */
  EBP = (pop32());
  /* 10773438 ret  */
  ESPCHK(0x10773310u, _esp0);
  ESP += 4; return;
}

/* FUN_10013440 @ 0x10773440 (61 bytes, 18 insns) */
void f_10773440(void) {
  FTRACE(0x10773440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10773440 push ebp */
  push32((uint32_t)(EBP));
  /* 10773441 mov ebp, esp */
  EBP = (ESP);
  /* 10773443 cmp dword ptr [0x107908b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107908b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1077344a jne 0x1077347b */
  if (!C.zf) goto L_1077347b;
  /* 1077344c push 0xb */
  push32((uint32_t)(0xbu));
  /* 1077344e call 0x10768340 */
  push32(0x10773453u); f_10768340();
  /* 10773453 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10773456 cmp dword ptr [0x107908b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107908b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1077345d jne 0x10773471 */
  if (!C.zf) goto L_10773471;
  /* 1077345f call 0x107734a0 */
  push32(0x10773464u); f_107734a0();
  /* 10773464 mov eax, dword ptr [0x107908b0] */
  EAX = (r32((uint32_t)(0x107908b0)));
  /* 10773469 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1077346c mov dword ptr [0x107908b0], eax */
  w32((uint32_t)(0x107908b0), (EAX));
L_10773471:;
  /* 10773471 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10773473 call 0x107683e0 */
  push32(0x10773478u); f_107683e0();
  /* 10773478 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1077347b:;
  /* 1077347b pop ebp */
  EBP = (pop32());
  /* 1077347c ret  */
  ESPCHK(0x10773440u, _esp0);
  ESP += 4; return;
}

/* FUN_10013480 @ 0x10773480 (30 bytes, 11 insns) */
void f_10773480(void) {
  FTRACE(0x10773480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10773480 push ebp */
  push32((uint32_t)(EBP));
  /* 10773481 mov ebp, esp */
  EBP = (ESP);
  /* 10773483 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10773485 call 0x10768340 */
  push32(0x1077348au); f_10768340();
  /* 1077348a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1077348d call 0x107734a0 */
  push32(0x10773492u); f_107734a0();
  /* 10773492 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10773494 call 0x107683e0 */
  push32(0x10773499u); f_107683e0();
  /* 10773499 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1077349c pop ebp */
  EBP = (pop32());
  /* 1077349d ret  */
  ESPCHK(0x10773480u, _esp0);
  ESP += 4; return;
}

/* FUN_100134a0 @ 0x107734a0 (939 bytes, 266 insns) */
void f_107734a0(void) {
  FTRACE(0x107734a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107734a0 push ebp */
  push32((uint32_t)(EBP));
  /* 107734a1 mov ebp, esp */
  EBP = (ESP);
  /* 107734a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107734a6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107734ad push 0xc */
  push32((uint32_t)(0xcu));
  /* 107734af call 0x10768340 */
  push32(0x107734b4u); f_10768340();
  /* 107734b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107734b7 mov dword ptr [0x107907f8], 0 */
  w32((uint32_t)(0x107907f8), (0x0u));
  /* 107734c1 mov dword ptr [0x1078fe38], 0xffffffff */
  w32((uint32_t)(0x1078fe38), (0xffffffffu));
  /* 107734cb mov eax, dword ptr [0x1078fe38] */
  EAX = (r32((uint32_t)(0x1078fe38)));
  /* 107734d0 mov dword ptr [0x1078fe28], eax */
  w32((uint32_t)(0x1078fe28), (EAX));
  /* 107734d5 push 0x1078ca58 */
  push32((uint32_t)(0x1078ca58u));
  /* 107734da call 0x10774320 */
  push32(0x107734dfu); f_10774320();
  /* 107734df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107734e2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107734e5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107734e9 jne 0x10773623 */
  if (!C.zf) goto L_10773623;
  /* 107734ef push 0xc */
  push32((uint32_t)(0xcu));
  /* 107734f1 call 0x107683e0 */
  push32(0x107734f6u); f_107683e0();
  /* 107734f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107734f9 push 0x10790800 */
  push32((uint32_t)(0x10790800u));
  /* 107734fe call dword ptr [0x107932a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932a8))), 0x10773504u);
  /* 10773504 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10773507 je 0x1077361e */
  if (C.zf) goto L_1077361e;
  /* 1077350d mov dword ptr [0x107907f8], 1 */
  w32((uint32_t)(0x107907f8), (0x1u));
  /* 10773517 mov ecx, dword ptr [0x10790800] */
  ECX = (r32((uint32_t)(0x10790800)));
  /* 1077351d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10773520 mov dword ptr [0x1078fd90], ecx */
  w32((uint32_t)(0x1078fd90), (ECX));
  /* 10773526 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10773528 mov dx, word ptr [0x10790846] */
  DX = (r16((uint32_t)(0x10790846)));
  /* 1077352f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10773531 je 0x10773549 */
  if (C.zf) goto L_10773549;
  /* 10773533 mov eax, dword ptr [0x10790854] */
  EAX = (r32((uint32_t)(0x10790854)));
  /* 10773538 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1077353b mov ecx, dword ptr [0x1078fd90] */
  ECX = (r32((uint32_t)(0x1078fd90)));
  /* 10773541 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10773543 mov dword ptr [0x1078fd90], ecx */
  w32((uint32_t)(0x1078fd90), (ECX));
L_10773549:;
  /* 10773549 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1077354b mov dx, word ptr [0x1079089a] */
  DX = (r16((uint32_t)(0x1079089a)));
  /* 10773552 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10773554 je 0x1077357e */
  if (C.zf) goto L_1077357e;
  /* 10773556 cmp dword ptr [0x107908a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107908a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1077355d je 0x1077357e */
  if (C.zf) goto L_1077357e;
  /* 1077355f mov dword ptr [0x1078fd94], 1 */
  w32((uint32_t)(0x1078fd94), (0x1u));
  /* 10773569 mov eax, dword ptr [0x107908a8] */
  EAX = (r32((uint32_t)(0x107908a8)));
  /* 1077356e sub eax, dword ptr [0x10790854] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10790854))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10773574 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10773577 mov dword ptr [0x1078fd98], eax */
  w32((uint32_t)(0x1078fd98), (EAX));
  /* 1077357c jmp 0x10773592 */
  goto L_10773592;
L_1077357e:;
  /* 1077357e mov dword ptr [0x1078fd94], 0 */
  w32((uint32_t)(0x1078fd94), (0x0u));
  /* 10773588 mov dword ptr [0x1078fd98], 0 */
  w32((uint32_t)(0x1078fd98), (0x0u));
L_10773592:;
  /* 10773592 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10773595 push ecx */
  push32((uint32_t)(ECX));
  /* 10773596 push 0 */
  push32((uint32_t)(0x0u));
  /* 10773598 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1077359a mov edx, dword ptr [0x1078fe1c] */
  EDX = (r32((uint32_t)(0x1078fe1c)));
  /* 107735a0 push edx */
  push32((uint32_t)(EDX));
  /* 107735a1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 107735a3 push 0x10790804 */
  push32((uint32_t)(0x10790804u));
  /* 107735a8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 107735ad mov eax, dword ptr [0x10790768] */
  EAX = (r32((uint32_t)(0x10790768)));
  /* 107735b2 push eax */
  push32((uint32_t)(EAX));
  /* 107735b3 call dword ptr [0x1079339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079339c))), 0x107735b9u);
  /* 107735b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107735bb je 0x107735cf */
  if (C.zf) goto L_107735cf;
  /* 107735bd cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107735c1 jne 0x107735cf */
  if (!C.zf) goto L_107735cf;
  /* 107735c3 mov ecx, dword ptr [0x1078fe1c] */
  ECX = (r32((uint32_t)(0x1078fe1c)));
  /* 107735c9 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 107735cd jmp 0x107735d8 */
  goto L_107735d8;
L_107735cf:;
  /* 107735cf mov edx, dword ptr [0x1078fe1c] */
  EDX = (r32((uint32_t)(0x1078fe1c)));
  /* 107735d5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_107735d8:;
  /* 107735d8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 107735db push eax */
  push32((uint32_t)(EAX));
  /* 107735dc push 0 */
  push32((uint32_t)(0x0u));
  /* 107735de push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 107735e0 mov ecx, dword ptr [0x1078fe20] */
  ECX = (r32((uint32_t)(0x1078fe20)));
  /* 107735e6 push ecx */
  push32((uint32_t)(ECX));
  /* 107735e7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 107735e9 push 0x10790858 */
  push32((uint32_t)(0x10790858u));
  /* 107735ee push 0x220 */
  push32((uint32_t)(0x220u));
  /* 107735f3 mov edx, dword ptr [0x10790768] */
  EDX = (r32((uint32_t)(0x10790768)));
  /* 107735f9 push edx */
  push32((uint32_t)(EDX));
  /* 107735fa call dword ptr [0x1079339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079339c))), 0x10773600u);
  /* 10773600 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10773602 je 0x10773615 */
  if (C.zf) goto L_10773615;
  /* 10773604 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10773608 jne 0x10773615 */
  if (!C.zf) goto L_10773615;
  /* 1077360a mov eax, dword ptr [0x1078fe20] */
  EAX = (r32((uint32_t)(0x1078fe20)));
  /* 1077360f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 10773613 jmp 0x1077361e */
  goto L_1077361e;
L_10773615:;
  /* 10773615 mov ecx, dword ptr [0x1078fe20] */
  ECX = (r32((uint32_t)(0x1078fe20)));
  /* 1077361b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_1077361e:;
  /* 1077361e jmp 0x10773847 */
  goto L_10773847;
L_10773623:;
  /* 10773623 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10773626 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10773629 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1077362b je 0x1077364d */
  if (C.zf) goto L_1077364d;
  /* 1077362d cmp dword ptr [0x107908ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107908ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10773634 je 0x1077365c */
  if (C.zf) goto L_1077365c;
  /* 10773636 mov ecx, dword ptr [0x107908ac] */
  ECX = (r32((uint32_t)(0x107908ac)));
  /* 1077363c push ecx */
  push32((uint32_t)(ECX));
  /* 1077363d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10773640 push edx */
  push32((uint32_t)(EDX));
  /* 10773641 call 0x107705d0 */
  push32(0x10773646u); f_107705d0();
  /* 10773646 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10773649 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1077364b jne 0x1077365c */
  if (!C.zf) goto L_1077365c;
L_1077364d:;
  /* 1077364d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1077364f call 0x107683e0 */
  push32(0x10773654u); f_107683e0();
  /* 10773654 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10773657 jmp 0x10773847 */
  goto L_10773847;
L_1077365c:;
  /* 1077365c push 2 */
  push32((uint32_t)(0x2u));
  /* 1077365e mov eax, dword ptr [0x107908ac] */
  EAX = (r32((uint32_t)(0x107908ac)));
  /* 10773663 push eax */
  push32((uint32_t)(EAX));
  /* 10773664 call 0x107653d0 */
  push32(0x10773669u); f_107653d0();
  /* 10773669 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1077366c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 10773671 push 0x1078ca50 */
  push32((uint32_t)(0x1078ca50u));
  /* 10773676 push 2 */
  push32((uint32_t)(0x2u));
  /* 10773678 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1077367b push ecx */
  push32((uint32_t)(ECX));
  /* 1077367c call 0x10767770 */
  push32(0x10773681u); f_10767770();
  /* 10773681 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10773684 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10773687 push eax */
  push32((uint32_t)(EAX));
  /* 10773688 call 0x10764940 */
  push32(0x1077368du); f_10764940();
  /* 1077368d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10773690 mov dword ptr [0x107908ac], eax */
  w32((uint32_t)(0x107908ac), (EAX));
  /* 10773695 cmp dword ptr [0x107908ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107908ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1077369c jne 0x107736ad */
  if (!C.zf) goto L_107736ad;
  /* 1077369e push 0xc */
  push32((uint32_t)(0xcu));
  /* 107736a0 call 0x107683e0 */
  push32(0x107736a5u); f_107683e0();
  /* 107736a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107736a8 jmp 0x10773847 */
  goto L_10773847;
L_107736ad:;
  /* 107736ad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107736b0 push edx */
  push32((uint32_t)(EDX));
  /* 107736b1 mov eax, dword ptr [0x107908ac] */
  EAX = (r32((uint32_t)(0x107908ac)));
  /* 107736b6 push eax */
  push32((uint32_t)(EAX));
  /* 107736b7 call 0x107678f0 */
  push32(0x107736bcu); f_107678f0();
  /* 107736bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107736bf push 0xc */
  push32((uint32_t)(0xcu));
  /* 107736c1 call 0x107683e0 */
  push32(0x107736c6u); f_107683e0();
  /* 107736c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107736c9 push 3 */
  push32((uint32_t)(0x3u));
  /* 107736cb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107736ce push ecx */
  push32((uint32_t)(ECX));
  /* 107736cf mov edx, dword ptr [0x1078fe1c] */
  EDX = (r32((uint32_t)(0x1078fe1c)));
  /* 107736d5 push edx */
  push32((uint32_t)(EDX));
  /* 107736d6 call 0x10768160 */
  push32(0x107736dbu); f_10768160();
  /* 107736db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107736de mov eax, dword ptr [0x1078fe1c] */
  EAX = (r32((uint32_t)(0x1078fe1c)));
  /* 107736e3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 107736e7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107736ea add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107736ed mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107736f0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107736f3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 107736f6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107736f9 jne 0x1077370d */
  if (!C.zf) goto L_1077370d;
  /* 107736fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107736fe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10773701 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10773704 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10773707 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1077370a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1077370d:;
  /* 1077370d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10773710 push eax */
  push32((uint32_t)(EAX));
  /* 10773711 call 0x107731f0 */
  push32(0x10773716u); f_107731f0();
  /* 10773716 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10773719 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1077371f mov dword ptr [0x1078fd90], eax */
  w32((uint32_t)(0x1078fd90), (EAX));
L_10773724:;
  /* 10773724 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10773727 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1077372a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1077372d je 0x10773745 */
  if (C.zf) goto L_10773745;
  /* 1077372f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10773732 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10773735 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10773738 jl 0x10773750 */
  if ((C.sf!=C.of)) goto L_10773750;
  /* 1077373a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1077373d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10773740 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10773743 jg 0x10773750 */
  if ((!C.zf&&C.sf==C.of)) goto L_10773750;
L_10773745:;
  /* 10773745 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10773748 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1077374b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1077374e jmp 0x10773724 */
  goto L_10773724;
L_10773750:;
  /* 10773750 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10773753 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10773756 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10773759 jne 0x107737f5 */
  if (!C.zf) goto L_107737f5;
  /* 1077375f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10773762 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10773765 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10773768 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1077376b push edx */
  push32((uint32_t)(EDX));
  /* 1077376c call 0x107731f0 */
  push32(0x10773771u); f_107731f0();
  /* 10773771 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10773774 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10773777 mov ecx, dword ptr [0x1078fd90] */
  ECX = (r32((uint32_t)(0x1078fd90)));
  /* 1077377d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1077377f mov dword ptr [0x1078fd90], ecx */
  w32((uint32_t)(0x1078fd90), (ECX));
L_10773785:;
  /* 10773785 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10773788 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1077378b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1077378e jl 0x107737a6 */
  if ((C.sf!=C.of)) goto L_107737a6;
  /* 10773790 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10773793 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10773796 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10773799 jg 0x107737a6 */
  if ((!C.zf&&C.sf==C.of)) goto L_107737a6;
  /* 1077379b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1077379e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107737a1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107737a4 jmp 0x10773785 */
  goto L_10773785;
L_107737a6:;
  /* 107737a6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107737a9 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107737ac cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107737af jne 0x107737f5 */
  if (!C.zf) goto L_107737f5;
  /* 107737b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107737b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107737b7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107737ba mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107737bd push ecx */
  push32((uint32_t)(ECX));
  /* 107737be call 0x107731f0 */
  push32(0x107737c3u); f_107731f0();
  /* 107737c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107737c6 mov edx, dword ptr [0x1078fd90] */
  EDX = (r32((uint32_t)(0x1078fd90)));
  /* 107737cc add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107737ce mov dword ptr [0x1078fd90], edx */
  w32((uint32_t)(0x1078fd90), (EDX));
L_107737d4:;
  /* 107737d4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107737d7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107737da cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107737dd jl 0x107737f5 */
  if ((C.sf!=C.of)) goto L_107737f5;
  /* 107737df mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107737e2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 107737e5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107737e8 jg 0x107737f5 */
  if ((!C.zf&&C.sf==C.of)) goto L_107737f5;
  /* 107737ea mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107737ed add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107737f0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107737f3 jmp 0x107737d4 */
  goto L_107737d4;
L_107737f5:;
  /* 107737f5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107737f9 je 0x10773809 */
  if (C.zf) goto L_10773809;
  /* 107737fb mov edx, dword ptr [0x1078fd90] */
  EDX = (r32((uint32_t)(0x1078fd90)));
  /* 10773801 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10773803 mov dword ptr [0x1078fd90], edx */
  w32((uint32_t)(0x1078fd90), (EDX));
L_10773809:;
  /* 10773809 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1077380c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1077380f mov dword ptr [0x1078fd94], ecx */
  w32((uint32_t)(0x1078fd94), (ECX));
  /* 10773815 cmp dword ptr [0x1078fd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1078fd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1077381c je 0x1077383e */
  if (C.zf) goto L_1077383e;
  /* 1077381e push 3 */
  push32((uint32_t)(0x3u));
  /* 10773820 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10773823 push edx */
  push32((uint32_t)(EDX));
  /* 10773824 mov eax, dword ptr [0x1078fe20] */
  EAX = (r32((uint32_t)(0x1078fe20)));
  /* 10773829 push eax */
  push32((uint32_t)(EAX));
  /* 1077382a call 0x10768160 */
  push32(0x1077382fu); f_10768160();
  /* 1077382f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10773832 mov ecx, dword ptr [0x1078fe20] */
  ECX = (r32((uint32_t)(0x1078fe20)));
  /* 10773838 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 1077383c jmp 0x10773847 */
  goto L_10773847;
L_1077383e:;
  /* 1077383e mov edx, dword ptr [0x1078fe20] */
  EDX = (r32((uint32_t)(0x1078fe20)));
  /* 10773844 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10773847:;
  /* 10773847 mov esp, ebp */
  ESP = (EBP);
  /* 10773849 pop ebp */
  EBP = (pop32());
  /* 1077384a ret  */
  ESPCHK(0x107734a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013850 @ 0x10773850 (46 bytes, 18 insns) */
void f_10773850(void) {
  FTRACE(0x10773850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10773850 push ebp */
  push32((uint32_t)(EBP));
  /* 10773851 mov ebp, esp */
  EBP = (ESP);
  /* 10773853 push ecx */
  push32((uint32_t)(ECX));
  /* 10773854 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10773856 call 0x10768340 */
  push32(0x1077385bu); f_10768340();
  /* 1077385b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1077385e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10773861 push eax */
  push32((uint32_t)(EAX));
  /* 10773862 call 0x10773880 */
  push32(0x10773867u); f_10773880();
  /* 10773867 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1077386a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1077386d push 0xb */
  push32((uint32_t)(0xbu));
  /* 1077386f call 0x107683e0 */
  push32(0x10773874u); f_107683e0();
  /* 10773874 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10773877 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1077387a mov esp, ebp */
  ESP = (EBP);
  /* 1077387c pop ebp */
  EBP = (pop32());
  /* 1077387d ret  */
  ESPCHK(0x10773850u, _esp0);
  ESP += 4; return;
}

/* FUN_10013880 @ 0x10773880 (762 bytes, 246 insns) */
void f_10773880(void) {
  FTRACE(0x10773880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10773880 push ebp */
  push32((uint32_t)(EBP));
  /* 10773881 mov ebp, esp */
  EBP = (ESP);
  /* 10773883 push ecx */
  push32((uint32_t)(ECX));
  /* 10773884 cmp dword ptr [0x1078fd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1078fd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1077388b jne 0x10773894 */
  if (!C.zf) goto L_10773894;
  /* 1077388d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1077388f jmp 0x10773b76 */
  goto L_10773b76;
L_10773894:;
  /* 10773894 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10773897 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1077389a cmp ecx, dword ptr [0x1078fe28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1078fe28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107738a0 jne 0x107738b4 */
  if (!C.zf) goto L_107738b4;
  /* 107738a2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107738a5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107738a8 cmp eax, dword ptr [0x1078fe38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1078fe38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107738ae je 0x10773a7b */
  if (C.zf) goto L_10773a7b;
L_107738b4:;
  /* 107738b4 cmp dword ptr [0x107907f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107907f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107738bb je 0x10773a35 */
  if (C.zf) goto L_10773a35;
  /* 107738c1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107738c3 mov cx, word ptr [0x10790898] */
  CX = (r16((uint32_t)(0x10790898)));
  /* 107738ca test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107738cc jne 0x10773929 */
  if (!C.zf) goto L_10773929;
  /* 107738ce xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107738d0 mov dx, word ptr [0x107908a6] */
  DX = (r16((uint32_t)(0x107908a6)));
  /* 107738d7 push edx */
  push32((uint32_t)(EDX));
  /* 107738d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107738da mov ax, word ptr [0x107908a4] */
  AX = (r16((uint32_t)(0x107908a4)));
  /* 107738e0 push eax */
  push32((uint32_t)(EAX));
  /* 107738e1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107738e3 mov cx, word ptr [0x107908a2] */
  CX = (r16((uint32_t)(0x107908a2)));
  /* 107738ea push ecx */
  push32((uint32_t)(ECX));
  /* 107738eb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107738ed mov dx, word ptr [0x107908a0] */
  DX = (r16((uint32_t)(0x107908a0)));
  /* 107738f4 push edx */
  push32((uint32_t)(EDX));
  /* 107738f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 107738f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107738f9 mov ax, word ptr [0x1079089c] */
  AX = (r16((uint32_t)(0x1079089c)));
  /* 107738ff push eax */
  push32((uint32_t)(EAX));
  /* 10773900 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10773902 mov cx, word ptr [0x1079089e] */
  CX = (r16((uint32_t)(0x1079089e)));
  /* 10773909 push ecx */
  push32((uint32_t)(ECX));
  /* 1077390a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1077390c mov dx, word ptr [0x1079089a] */
  DX = (r16((uint32_t)(0x1079089a)));
  /* 10773913 push edx */
  push32((uint32_t)(EDX));
  /* 10773914 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10773917 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1077391a push ecx */
  push32((uint32_t)(ECX));
  /* 1077391b push 1 */
  push32((uint32_t)(0x1u));
  /* 1077391d push 1 */
  push32((uint32_t)(0x1u));
  /* 1077391f call 0x10773b80 */
  push32(0x10773924u); f_10773b80();
  /* 10773924 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10773927 jmp 0x1077397a */
  goto L_1077397a;
L_10773929:;
  /* 10773929 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1077392b mov dx, word ptr [0x107908a6] */
  DX = (r16((uint32_t)(0x107908a6)));
  /* 10773932 push edx */
  push32((uint32_t)(EDX));
  /* 10773933 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10773935 mov ax, word ptr [0x107908a4] */
  AX = (r16((uint32_t)(0x107908a4)));
  /* 1077393b push eax */
  push32((uint32_t)(EAX));
  /* 1077393c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1077393e mov cx, word ptr [0x107908a2] */
  CX = (r16((uint32_t)(0x107908a2)));
  /* 10773945 push ecx */
  push32((uint32_t)(ECX));
  /* 10773946 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10773948 mov dx, word ptr [0x107908a0] */
  DX = (r16((uint32_t)(0x107908a0)));
  /* 1077394f push edx */
  push32((uint32_t)(EDX));
  /* 10773950 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10773952 mov ax, word ptr [0x1079089e] */
  AX = (r16((uint32_t)(0x1079089e)));
  /* 10773958 push eax */
  push32((uint32_t)(EAX));
  /* 10773959 push 0 */
  push32((uint32_t)(0x0u));
  /* 1077395b push 0 */
  push32((uint32_t)(0x0u));
  /* 1077395d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1077395f mov cx, word ptr [0x1079089a] */
  CX = (r16((uint32_t)(0x1079089a)));
  /* 10773966 push ecx */
  push32((uint32_t)(ECX));
  /* 10773967 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1077396a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1077396d push eax */
  push32((uint32_t)(EAX));
  /* 1077396e push 0 */
  push32((uint32_t)(0x0u));
  /* 10773970 push 1 */
  push32((uint32_t)(0x1u));
  /* 10773972 call 0x10773b80 */
  push32(0x10773977u); f_10773b80();
  /* 10773977 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1077397a:;
  /* 1077397a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1077397c mov cx, word ptr [0x10790844] */
  CX = (r16((uint32_t)(0x10790844)));
  /* 10773983 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10773985 jne 0x107739e2 */
  if (!C.zf) goto L_107739e2;
  /* 10773987 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10773989 mov dx, word ptr [0x10790852] */
  DX = (r16((uint32_t)(0x10790852)));
  /* 10773990 push edx */
  push32((uint32_t)(EDX));
  /* 10773991 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10773993 mov ax, word ptr [0x10790850] */
  AX = (r16((uint32_t)(0x10790850)));
  /* 10773999 push eax */
  push32((uint32_t)(EAX));
  /* 1077399a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1077399c mov cx, word ptr [0x1079084e] */
  CX = (r16((uint32_t)(0x1079084e)));
  /* 107739a3 push ecx */
  push32((uint32_t)(ECX));
  /* 107739a4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107739a6 mov dx, word ptr [0x1079084c] */
  DX = (r16((uint32_t)(0x1079084c)));
  /* 107739ad push edx */
  push32((uint32_t)(EDX));
  /* 107739ae push 0 */
  push32((uint32_t)(0x0u));
  /* 107739b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107739b2 mov ax, word ptr [0x10790848] */
  AX = (r16((uint32_t)(0x10790848)));
  /* 107739b8 push eax */
  push32((uint32_t)(EAX));
  /* 107739b9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107739bb mov cx, word ptr [0x1079084a] */
  CX = (r16((uint32_t)(0x1079084a)));
  /* 107739c2 push ecx */
  push32((uint32_t)(ECX));
  /* 107739c3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107739c5 mov dx, word ptr [0x10790846] */
  DX = (r16((uint32_t)(0x10790846)));
  /* 107739cc push edx */
  push32((uint32_t)(EDX));
  /* 107739cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107739d0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 107739d3 push ecx */
  push32((uint32_t)(ECX));
  /* 107739d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 107739d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 107739d8 call 0x10773b80 */
  push32(0x107739ddu); f_10773b80();
  /* 107739dd add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107739e0 jmp 0x10773a33 */
  goto L_10773a33;
L_107739e2:;
  /* 107739e2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107739e4 mov dx, word ptr [0x10790852] */
  DX = (r16((uint32_t)(0x10790852)));
  /* 107739eb push edx */
  push32((uint32_t)(EDX));
  /* 107739ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107739ee mov ax, word ptr [0x10790850] */
  AX = (r16((uint32_t)(0x10790850)));
  /* 107739f4 push eax */
  push32((uint32_t)(EAX));
  /* 107739f5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107739f7 mov cx, word ptr [0x1079084e] */
  CX = (r16((uint32_t)(0x1079084e)));
  /* 107739fe push ecx */
  push32((uint32_t)(ECX));
  /* 107739ff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10773a01 mov dx, word ptr [0x1079084c] */
  DX = (r16((uint32_t)(0x1079084c)));
  /* 10773a08 push edx */
  push32((uint32_t)(EDX));
  /* 10773a09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10773a0b mov ax, word ptr [0x1079084a] */
  AX = (r16((uint32_t)(0x1079084a)));
  /* 10773a11 push eax */
  push32((uint32_t)(EAX));
  /* 10773a12 push 0 */
  push32((uint32_t)(0x0u));
  /* 10773a14 push 0 */
  push32((uint32_t)(0x0u));
  /* 10773a16 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10773a18 mov cx, word ptr [0x10790846] */
  CX = (r16((uint32_t)(0x10790846)));
  /* 10773a1f push ecx */
  push32((uint32_t)(ECX));
  /* 10773a20 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10773a23 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10773a26 push eax */
  push32((uint32_t)(EAX));
  /* 10773a27 push 0 */
  push32((uint32_t)(0x0u));
  /* 10773a29 push 0 */
  push32((uint32_t)(0x0u));
  /* 10773a2b call 0x10773b80 */
  push32(0x10773a30u); f_10773b80();
  /* 10773a30 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10773a33:;
  /* 10773a33 jmp 0x10773a7b */
  goto L_10773a7b;
L_10773a35:;
  /* 10773a35 push 0 */
  push32((uint32_t)(0x0u));
  /* 10773a37 push 0 */
  push32((uint32_t)(0x0u));
  /* 10773a39 push 0 */
  push32((uint32_t)(0x0u));
  /* 10773a3b push 2 */
  push32((uint32_t)(0x2u));
  /* 10773a3d push 0 */
  push32((uint32_t)(0x0u));
  /* 10773a3f push 0 */
  push32((uint32_t)(0x0u));
  /* 10773a41 push 1 */
  push32((uint32_t)(0x1u));
  /* 10773a43 push 4 */
  push32((uint32_t)(0x4u));
  /* 10773a45 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10773a48 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10773a4b push edx */
  push32((uint32_t)(EDX));
  /* 10773a4c push 1 */
  push32((uint32_t)(0x1u));
  /* 10773a4e push 1 */
  push32((uint32_t)(0x1u));
  /* 10773a50 call 0x10773b80 */
  push32(0x10773a55u); f_10773b80();
  /* 10773a55 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10773a58 push 0 */
  push32((uint32_t)(0x0u));
  /* 10773a5a push 0 */
  push32((uint32_t)(0x0u));
  /* 10773a5c push 0 */
  push32((uint32_t)(0x0u));
  /* 10773a5e push 2 */
  push32((uint32_t)(0x2u));
  /* 10773a60 push 0 */
  push32((uint32_t)(0x0u));
  /* 10773a62 push 0 */
  push32((uint32_t)(0x0u));
  /* 10773a64 push 5 */
  push32((uint32_t)(0x5u));
  /* 10773a66 push 0xa */
  push32((uint32_t)(0xau));
  /* 10773a68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10773a6b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10773a6e push ecx */
  push32((uint32_t)(ECX));
  /* 10773a6f push 1 */
  push32((uint32_t)(0x1u));
  /* 10773a71 push 0 */
  push32((uint32_t)(0x0u));
  /* 10773a73 call 0x10773b80 */
  push32(0x10773a78u); f_10773b80();
  /* 10773a78 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10773a7b:;
  /* 10773a7b mov edx, dword ptr [0x1078fe2c] */
  EDX = (r32((uint32_t)(0x1078fe2c)));
  /* 10773a81 cmp edx, dword ptr [0x1078fe3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1078fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10773a87 jge 0x10773ad4 */
  if ((C.sf==C.of)) goto L_10773ad4;
  /* 10773a89 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10773a8c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10773a8f cmp ecx, dword ptr [0x1078fe2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1078fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10773a95 jl 0x10773aa5 */
  if ((C.sf!=C.of)) goto L_10773aa5;
  /* 10773a97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10773a9a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10773a9d cmp eax, dword ptr [0x1078fe3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1078fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10773aa3 jle 0x10773aac */
  if ((C.zf||C.sf!=C.of)) goto L_10773aac;
L_10773aa5:;
  /* 10773aa5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10773aa7 jmp 0x10773b76 */
  goto L_10773b76;
L_10773aac:;
  /* 10773aac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10773aaf mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10773ab2 cmp edx, dword ptr [0x1078fe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1078fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10773ab8 jle 0x10773ad2 */
  if ((C.zf||C.sf!=C.of)) goto L_10773ad2;
  /* 10773aba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10773abd mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10773ac0 cmp ecx, dword ptr [0x1078fe3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1078fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10773ac6 jge 0x10773ad2 */
  if ((C.sf==C.of)) goto L_10773ad2;
  /* 10773ac8 mov eax, 1 */
  EAX = (0x1u);
  /* 10773acd jmp 0x10773b76 */
  goto L_10773b76;
L_10773ad2:;
  /* 10773ad2 jmp 0x10773b17 */
  goto L_10773b17;
L_10773ad4:;
  /* 10773ad4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10773ad7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10773ada cmp eax, dword ptr [0x1078fe3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1078fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10773ae0 jl 0x10773af0 */
  if ((C.sf!=C.of)) goto L_10773af0;
  /* 10773ae2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10773ae5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10773ae8 cmp edx, dword ptr [0x1078fe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1078fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10773aee jle 0x10773af7 */
  if ((C.zf||C.sf!=C.of)) goto L_10773af7;
L_10773af0:;
  /* 10773af0 mov eax, 1 */
  EAX = (0x1u);
  /* 10773af5 jmp 0x10773b76 */
  goto L_10773b76;
L_10773af7:;
  /* 10773af7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10773afa mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10773afd cmp ecx, dword ptr [0x1078fe3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1078fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10773b03 jle 0x10773b17 */
  if ((C.zf||C.sf!=C.of)) goto L_10773b17;
  /* 10773b05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10773b08 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10773b0b cmp eax, dword ptr [0x1078fe2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1078fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10773b11 jge 0x10773b17 */
  if ((C.sf==C.of)) goto L_10773b17;
  /* 10773b13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10773b15 jmp 0x10773b76 */
  goto L_10773b76;
L_10773b17:;
  /* 10773b17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10773b1a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10773b1d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10773b20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10773b23 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10773b25 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10773b27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10773b2a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10773b2d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10773b33 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10773b35 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10773b3b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10773b3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10773b41 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10773b44 cmp edx, dword ptr [0x1078fe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1078fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10773b4a jne 0x10773b62 */
  if (!C.zf) goto L_10773b62;
  /* 10773b4c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10773b4f cmp eax, dword ptr [0x1078fe30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1078fe30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10773b55 jl 0x10773b5e */
  if ((C.sf!=C.of)) goto L_10773b5e;
  /* 10773b57 mov eax, 1 */
  EAX = (0x1u);
  /* 10773b5c jmp 0x10773b76 */
  goto L_10773b76;
L_10773b5e:;
  /* 10773b5e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10773b60 jmp 0x10773b76 */
  goto L_10773b76;
L_10773b62:;
  /* 10773b62 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10773b65 cmp ecx, dword ptr [0x1078fe40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1078fe40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10773b6b jge 0x10773b74 */
  if ((C.sf==C.of)) goto L_10773b74;
  /* 10773b6d mov eax, 1 */
  EAX = (0x1u);
  /* 10773b72 jmp 0x10773b76 */
  goto L_10773b76;
L_10773b74:;
  /* 10773b74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10773b76:;
  /* 10773b76 mov esp, ebp */
  ESP = (EBP);
  /* 10773b78 pop ebp */
  EBP = (pop32());
  /* 10773b79 ret  */
  ESPCHK(0x10773880u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b80 @ 0x10773b80 (504 bytes, 145 insns) */
void f_10773b80(void) {
  FTRACE(0x10773b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10773b80 push ebp */
  push32((uint32_t)(EBP));
  /* 10773b81 mov ebp, esp */
  EBP = (ESP);
  /* 10773b83 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10773b86 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10773b8a jne 0x10773c5c */
  if (!C.zf) goto L_10773c5c;
  /* 10773b90 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10773b93 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10773b96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10773b98 jne 0x10773ba9 */
  if (!C.zf) goto L_10773ba9;
  /* 10773b9a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10773b9d mov edx, dword ptr [ecx*4 + 0x1078fe4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1078fe4c)));
  /* 10773ba4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10773ba7 jmp 0x10773bb6 */
  goto L_10773bb6;
L_10773ba9:;
  /* 10773ba9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10773bac mov ecx, dword ptr [eax*4 + 0x1078fe80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1078fe80)));
  /* 10773bb3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10773bb6:;
  /* 10773bb6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10773bb9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10773bbc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10773bbf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10773bc2 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10773bc5 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10773bcb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10773bce add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10773bd0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10773bd3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10773bd6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10773bd9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 10773bdd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10773bde mov ecx, 7 */
  ECX = (0x7u);
  /* 10773be3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10773be5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10773be8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10773beb cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10773bee jge 0x10773c09 */
  if ((C.sf==C.of)) goto L_10773c09;
  /* 10773bf0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10773bf3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10773bf6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10773bf9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10773bfc imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10773bff add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10773c02 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10773c04 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10773c07 jmp 0x10773c1d */
  goto L_10773c1d;
L_10773c09:;
  /* 10773c09 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10773c0c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10773c0f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10773c12 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10773c15 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10773c18 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10773c1a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10773c1d:;
  /* 10773c1d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10773c21 jne 0x10773c5a */
  if (!C.zf) goto L_10773c5a;
  /* 10773c23 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10773c26 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10773c29 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10773c2b jne 0x10773c3c */
  if (!C.zf) goto L_10773c3c;
  /* 10773c2d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10773c30 mov eax, dword ptr [edx*4 + 0x1078fe50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1078fe50)));
  /* 10773c37 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10773c3a jmp 0x10773c49 */
  goto L_10773c49;
L_10773c3c:;
  /* 10773c3c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10773c3f mov edx, dword ptr [ecx*4 + 0x1078fe84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1078fe84)));
  /* 10773c46 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10773c49:;
  /* 10773c49 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10773c4c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10773c4f jle 0x10773c5a */
  if ((C.zf||C.sf!=C.of)) goto L_10773c5a;
  /* 10773c51 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10773c54 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10773c57 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10773c5a:;
  /* 10773c5a jmp 0x10773c91 */
  goto L_10773c91;
L_10773c5c:;
  /* 10773c5c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10773c5f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10773c62 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10773c64 jne 0x10773c75 */
  if (!C.zf) goto L_10773c75;
  /* 10773c66 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10773c69 mov ecx, dword ptr [eax*4 + 0x1078fe4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1078fe4c)));
  /* 10773c70 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10773c73 jmp 0x10773c82 */
  goto L_10773c82;
L_10773c75:;
  /* 10773c75 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10773c78 mov eax, dword ptr [edx*4 + 0x1078fe80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1078fe80)));
  /* 10773c7f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10773c82:;
  /* 10773c82 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10773c85 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10773c88 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10773c8b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10773c8e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10773c91:;
  /* 10773c91 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10773c95 jne 0x10773cd1 */
  if (!C.zf) goto L_10773cd1;
  /* 10773c97 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10773c9a mov dword ptr [0x1078fe2c], eax */
  w32((uint32_t)(0x1078fe2c), (EAX));
  /* 10773c9f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10773ca2 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10773ca5 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10773ca8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10773caa imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10773cad mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10773cb0 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10773cb2 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10773cb8 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10773cbb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10773cbd mov dword ptr [0x1078fe30], ecx */
  w32((uint32_t)(0x1078fe30), (ECX));
  /* 10773cc3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10773cc6 mov dword ptr [0x1078fe28], edx */
  w32((uint32_t)(0x1078fe28), (EDX));
  /* 10773ccc jmp 0x10773d74 */
  goto L_10773d74;
L_10773cd1:;
  /* 10773cd1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10773cd4 mov dword ptr [0x1078fe3c], eax */
  w32((uint32_t)(0x1078fe3c), (EAX));
  /* 10773cd9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10773cdc imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10773cdf mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10773ce2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10773ce4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10773ce7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10773cea add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10773cec imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10773cf2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10773cf5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10773cf7 mov dword ptr [0x1078fe40], ecx */
  w32((uint32_t)(0x1078fe40), (ECX));
  /* 10773cfd mov edx, dword ptr [0x1078fd98] */
  EDX = (r32((uint32_t)(0x1078fd98)));
  /* 10773d03 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10773d09 mov eax, dword ptr [0x1078fe40] */
  EAX = (r32((uint32_t)(0x1078fe40)));
  /* 10773d0e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10773d10 mov dword ptr [0x1078fe40], eax */
  w32((uint32_t)(0x1078fe40), (EAX));
  /* 10773d15 cmp dword ptr [0x1078fe40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1078fe40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10773d1c jge 0x10773d41 */
  if ((C.sf==C.of)) goto L_10773d41;
  /* 10773d1e mov ecx, dword ptr [0x1078fe40] */
  ECX = (r32((uint32_t)(0x1078fe40)));
  /* 10773d24 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10773d2a mov dword ptr [0x1078fe40], ecx */
  w32((uint32_t)(0x1078fe40), (ECX));
  /* 10773d30 mov edx, dword ptr [0x1078fe3c] */
  EDX = (r32((uint32_t)(0x1078fe3c)));
  /* 10773d36 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10773d39 mov dword ptr [0x1078fe3c], edx */
  w32((uint32_t)(0x1078fe3c), (EDX));
  /* 10773d3f jmp 0x10773d6b */
  goto L_10773d6b;
L_10773d41:;
  /* 10773d41 cmp dword ptr [0x1078fe40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x1078fe40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10773d4b jl 0x10773d6b */
  if ((C.sf!=C.of)) goto L_10773d6b;
  /* 10773d4d mov eax, dword ptr [0x1078fe40] */
  EAX = (r32((uint32_t)(0x1078fe40)));
  /* 10773d52 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10773d57 mov dword ptr [0x1078fe40], eax */
  w32((uint32_t)(0x1078fe40), (EAX));
  /* 10773d5c mov ecx, dword ptr [0x1078fe3c] */
  ECX = (r32((uint32_t)(0x1078fe3c)));
  /* 10773d62 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10773d65 mov dword ptr [0x1078fe3c], ecx */
  w32((uint32_t)(0x1078fe3c), (ECX));
L_10773d6b:;
  /* 10773d6b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10773d6e mov dword ptr [0x1078fe38], edx */
  w32((uint32_t)(0x1078fe38), (EDX));
L_10773d74:;
  /* 10773d74 mov esp, ebp */
  ESP = (EBP);
  /* 10773d76 pop ebp */
  EBP = (pop32());
  /* 10773d77 ret  */
  ESPCHK(0x10773b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10013d80 @ 0x10773d80 (382 bytes, 135 insns) */
void f_10773d80(void) {
  FTRACE(0x10773d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10773d80 push ebp */
  push32((uint32_t)(EBP));
  /* 10773d81 mov ebp, esp */
  EBP = (ESP);
  /* 10773d83 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10773d85 push 0x1078ca60 */
  push32((uint32_t)(0x1078ca60u));
  /* 10773d8a push 0x1076da48 */
  push32((uint32_t)(0x1076da48u));
  /* 10773d8f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10773d95 push eax */
  push32((uint32_t)(EAX));
  /* 10773d96 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10773d9d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10773da0 push ebx */
  push32((uint32_t)(EBX));
  /* 10773da1 push esi */
  push32((uint32_t)(ESI));
  /* 10773da2 push edi */
  push32((uint32_t)(EDI));
  /* 10773da3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10773da6 cmp dword ptr [0x107908b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107908b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10773dad jne 0x10773df2 */
  if (!C.zf) goto L_10773df2;
  /* 10773daf push 0 */
  push32((uint32_t)(0x0u));
  /* 10773db1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10773db3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10773db5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10773db7 call dword ptr [0x107932a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932a4))), 0x10773dbdu);
  /* 10773dbd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10773dbf je 0x10773dcd */
  if (C.zf) goto L_10773dcd;
  /* 10773dc1 mov dword ptr [0x107908b4], 1 */
  w32((uint32_t)(0x107908b4), (0x1u));
  /* 10773dcb jmp 0x10773df2 */
  goto L_10773df2;
L_10773dcd:;
  /* 10773dcd push 0 */
  push32((uint32_t)(0x0u));
  /* 10773dcf push 0 */
  push32((uint32_t)(0x0u));
  /* 10773dd1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10773dd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10773dd5 call dword ptr [0x107932bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932bc))), 0x10773ddbu);
  /* 10773ddb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10773ddd je 0x10773deb */
  if (C.zf) goto L_10773deb;
  /* 10773ddf mov dword ptr [0x107908b4], 2 */
  w32((uint32_t)(0x107908b4), (0x2u));
  /* 10773de9 jmp 0x10773df2 */
  goto L_10773df2;
L_10773deb:;
  /* 10773deb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10773ded jmp 0x10773f01 */
  goto L_10773f01;
L_10773df2:;
  /* 10773df2 cmp dword ptr [0x107908b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x107908b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10773df9 jne 0x10773e16 */
  if (!C.zf) goto L_10773e16;
  /* 10773dfb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10773dfe push eax */
  push32((uint32_t)(EAX));
  /* 10773dff mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10773e02 push ecx */
  push32((uint32_t)(ECX));
  /* 10773e03 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10773e06 push edx */
  push32((uint32_t)(EDX));
  /* 10773e07 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10773e0a push eax */
  push32((uint32_t)(EAX));
  /* 10773e0b call dword ptr [0x107932a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932a4))), 0x10773e11u);
  /* 10773e11 jmp 0x10773f01 */
  goto L_10773f01;
L_10773e16:;
  /* 10773e16 cmp dword ptr [0x107908b4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x107908b4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10773e1d jne 0x10773eff */
  if (!C.zf) goto L_10773eff;
  /* 10773e23 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10773e27 jne 0x10773e32 */
  if (!C.zf) goto L_10773e32;
  /* 10773e29 mov ecx, dword ptr [0x10790768] */
  ECX = (r32((uint32_t)(0x10790768)));
  /* 10773e2f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10773e32:;
  /* 10773e32 push 0 */
  push32((uint32_t)(0x0u));
  /* 10773e34 push 0 */
  push32((uint32_t)(0x0u));
  /* 10773e36 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10773e39 push edx */
  push32((uint32_t)(EDX));
  /* 10773e3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10773e3d push eax */
  push32((uint32_t)(EAX));
  /* 10773e3e call dword ptr [0x107932bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932bc))), 0x10773e44u);
  /* 10773e44 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10773e47 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10773e4b jne 0x10773e54 */
  if (!C.zf) goto L_10773e54;
  /* 10773e4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10773e4f jmp 0x10773f01 */
  goto L_10773f01;
L_10773e54:;
  /* 10773e54 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10773e5b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10773e5e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10773e61 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10773e63 call 0x10767ae0 */
  push32(0x10773e68u); f_10767ae0();
  /* 10773e68 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 10773e6b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10773e6e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10773e71 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10773e74 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10773e7b jmp 0x10773e94 */
  goto L_10773e94;
  /* 10773e7d mov eax, 1 */
  EAX = (0x1u);
  /* 10773e82 ret  */
  ESPCHK(0x10773d80u, _esp0);
  ESP += 4; return;
  /* 10773e83 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10773e86 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10773e8d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10773e94:;
  /* 10773e94 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10773e98 jne 0x10773e9e */
  if (!C.zf) goto L_10773e9e;
  /* 10773e9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10773e9c jmp 0x10773f01 */
  goto L_10773f01;
L_10773e9e:;
  /* 10773e9e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10773ea1 push edx */
  push32((uint32_t)(EDX));
  /* 10773ea2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10773ea5 push eax */
  push32((uint32_t)(EAX));
  /* 10773ea6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10773ea9 push ecx */
  push32((uint32_t)(ECX));
  /* 10773eaa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10773ead push edx */
  push32((uint32_t)(EDX));
  /* 10773eae call dword ptr [0x107932bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932bc))), 0x10773eb4u);
  /* 10773eb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10773eb6 jne 0x10773ebc */
  if (!C.zf) goto L_10773ebc;
  /* 10773eb8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10773eba jmp 0x10773f01 */
  goto L_10773f01;
L_10773ebc:;
  /* 10773ebc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10773ec0 jne 0x10773edd */
  if (!C.zf) goto L_10773edd;
  /* 10773ec2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10773ec4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10773ec6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10773ec8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10773ecb push eax */
  push32((uint32_t)(EAX));
  /* 10773ecc push 1 */
  push32((uint32_t)(0x1u));
  /* 10773ece mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10773ed1 push ecx */
  push32((uint32_t)(ECX));
  /* 10773ed2 call dword ptr [0x107932ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932ec))), 0x10773ed8u);
  /* 10773ed8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10773edb jmp 0x10773efa */
  goto L_10773efa;
L_10773edd:;
  /* 10773edd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10773ee0 push edx */
  push32((uint32_t)(EDX));
  /* 10773ee1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10773ee4 push eax */
  push32((uint32_t)(EAX));
  /* 10773ee5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10773ee7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10773eea push ecx */
  push32((uint32_t)(ECX));
  /* 10773eeb push 1 */
  push32((uint32_t)(0x1u));
  /* 10773eed mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10773ef0 push edx */
  push32((uint32_t)(EDX));
  /* 10773ef1 call dword ptr [0x107932ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932ec))), 0x10773ef7u);
  /* 10773ef7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10773efa:;
  /* 10773efa mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10773efd jmp 0x10773f01 */
  goto L_10773f01;
L_10773eff:;
  /* 10773eff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10773f01:;
  /* 10773f01 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10773f04 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10773f07 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10773f0e pop edi */
  EDI = (pop32());
  /* 10773f0f pop esi */
  ESI = (pop32());
  /* 10773f10 pop ebx */
  EBX = (pop32());
  /* 10773f11 mov esp, ebp */
  ESP = (EBP);
  /* 10773f13 pop ebp */
  EBP = (pop32());
  /* 10773f14 ret  */
  ESPCHK(0x10773d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10013f20 @ 0x10773f20 (398 bytes, 140 insns) */
void f_10773f20(void) {
  FTRACE(0x10773f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10773f20 push ebp */
  push32((uint32_t)(EBP));
  /* 10773f21 mov ebp, esp */
  EBP = (ESP);
  /* 10773f23 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10773f25 push 0x1078ca70 */
  push32((uint32_t)(0x1078ca70u));
  /* 10773f2a push 0x1076da48 */
  push32((uint32_t)(0x1076da48u));
  /* 10773f2f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10773f35 push eax */
  push32((uint32_t)(EAX));
  /* 10773f36 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10773f3d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10773f40 push ebx */
  push32((uint32_t)(EBX));
  /* 10773f41 push esi */
  push32((uint32_t)(ESI));
  /* 10773f42 push edi */
  push32((uint32_t)(EDI));
  /* 10773f43 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10773f46 cmp dword ptr [0x107908b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107908b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10773f4d jne 0x10773f92 */
  if (!C.zf) goto L_10773f92;
  /* 10773f4f push 0 */
  push32((uint32_t)(0x0u));
  /* 10773f51 push 0 */
  push32((uint32_t)(0x0u));
  /* 10773f53 push 1 */
  push32((uint32_t)(0x1u));
  /* 10773f55 push 0 */
  push32((uint32_t)(0x0u));
  /* 10773f57 call dword ptr [0x107932a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932a4))), 0x10773f5du);
  /* 10773f5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10773f5f je 0x10773f6d */
  if (C.zf) goto L_10773f6d;
  /* 10773f61 mov dword ptr [0x107908b8], 1 */
  w32((uint32_t)(0x107908b8), (0x1u));
  /* 10773f6b jmp 0x10773f92 */
  goto L_10773f92;
L_10773f6d:;
  /* 10773f6d push 0 */
  push32((uint32_t)(0x0u));
  /* 10773f6f push 0 */
  push32((uint32_t)(0x0u));
  /* 10773f71 push 1 */
  push32((uint32_t)(0x1u));
  /* 10773f73 push 0 */
  push32((uint32_t)(0x0u));
  /* 10773f75 call dword ptr [0x107932bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932bc))), 0x10773f7bu);
  /* 10773f7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10773f7d je 0x10773f8b */
  if (C.zf) goto L_10773f8b;
  /* 10773f7f mov dword ptr [0x107908b8], 2 */
  w32((uint32_t)(0x107908b8), (0x2u));
  /* 10773f89 jmp 0x10773f92 */
  goto L_10773f92;
L_10773f8b:;
  /* 10773f8b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10773f8d jmp 0x107740b1 */
  goto L_107740b1;
L_10773f92:;
  /* 10773f92 cmp dword ptr [0x107908b8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x107908b8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10773f99 jne 0x10773fb6 */
  if (!C.zf) goto L_10773fb6;
  /* 10773f9b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10773f9e push eax */
  push32((uint32_t)(EAX));
  /* 10773f9f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10773fa2 push ecx */
  push32((uint32_t)(ECX));
  /* 10773fa3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10773fa6 push edx */
  push32((uint32_t)(EDX));
  /* 10773fa7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10773faa push eax */
  push32((uint32_t)(EAX));
  /* 10773fab call dword ptr [0x107932bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932bc))), 0x10773fb1u);
  /* 10773fb1 jmp 0x107740b1 */
  goto L_107740b1;
L_10773fb6:;
  /* 10773fb6 cmp dword ptr [0x107908b8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x107908b8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10773fbd jne 0x107740af */
  if (!C.zf) goto L_107740af;
  /* 10773fc3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10773fc7 jne 0x10773fd2 */
  if (!C.zf) goto L_10773fd2;
  /* 10773fc9 mov ecx, dword ptr [0x10790768] */
  ECX = (r32((uint32_t)(0x10790768)));
  /* 10773fcf mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10773fd2:;
  /* 10773fd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10773fd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10773fd6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10773fd9 push edx */
  push32((uint32_t)(EDX));
  /* 10773fda mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10773fdd push eax */
  push32((uint32_t)(EAX));
  /* 10773fde call dword ptr [0x107932a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932a4))), 0x10773fe4u);
  /* 10773fe4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10773fe7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10773feb jne 0x10773ff4 */
  if (!C.zf) goto L_10773ff4;
  /* 10773fed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10773fef jmp 0x107740b1 */
  goto L_107740b1;
L_10773ff4:;
  /* 10773ff4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10773ffb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10773ffe shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10774000 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10774003 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10774005 call 0x10767ae0 */
  push32(0x1077400au); f_10767ae0();
  /* 1077400a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 1077400d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10774010 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10774013 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10774016 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1077401d jmp 0x10774036 */
  goto L_10774036;
  /* 1077401f mov eax, 1 */
  EAX = (0x1u);
  /* 10774024 ret  */
  ESPCHK(0x10773f20u, _esp0);
  ESP += 4; return;
  /* 10774025 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10774028 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1077402f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10774036:;
  /* 10774036 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1077403a jne 0x10774040 */
  if (!C.zf) goto L_10774040;
  /* 1077403c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1077403e jmp 0x107740b1 */
  goto L_107740b1;
L_10774040:;
  /* 10774040 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10774043 push edx */
  push32((uint32_t)(EDX));
  /* 10774044 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10774047 push eax */
  push32((uint32_t)(EAX));
  /* 10774048 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1077404b push ecx */
  push32((uint32_t)(ECX));
  /* 1077404c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1077404f push edx */
  push32((uint32_t)(EDX));
  /* 10774050 call dword ptr [0x107932a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932a4))), 0x10774056u);
  /* 10774056 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10774058 jne 0x1077405e */
  if (!C.zf) goto L_1077405e;
  /* 1077405a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1077405c jmp 0x107740b1 */
  goto L_107740b1;
L_1077405e:;
  /* 1077405e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10774062 jne 0x10774086 */
  if (!C.zf) goto L_10774086;
  /* 10774064 push 0 */
  push32((uint32_t)(0x0u));
  /* 10774066 push 0 */
  push32((uint32_t)(0x0u));
  /* 10774068 push 0 */
  push32((uint32_t)(0x0u));
  /* 1077406a push 0 */
  push32((uint32_t)(0x0u));
  /* 1077406c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1077406e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10774071 push eax */
  push32((uint32_t)(EAX));
  /* 10774072 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10774077 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1077407a push ecx */
  push32((uint32_t)(ECX));
  /* 1077407b call dword ptr [0x1079339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079339c))), 0x10774081u);
  /* 10774081 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10774084 jmp 0x107740aa */
  goto L_107740aa;
L_10774086:;
  /* 10774086 push 0 */
  push32((uint32_t)(0x0u));
  /* 10774088 push 0 */
  push32((uint32_t)(0x0u));
  /* 1077408a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1077408d push edx */
  push32((uint32_t)(EDX));
  /* 1077408e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10774091 push eax */
  push32((uint32_t)(EAX));
  /* 10774092 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10774094 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10774097 push ecx */
  push32((uint32_t)(ECX));
  /* 10774098 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1077409d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107740a0 push edx */
  push32((uint32_t)(EDX));
  /* 107740a1 call dword ptr [0x1079339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079339c))), 0x107740a7u);
  /* 107740a7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_107740aa:;
  /* 107740aa mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107740ad jmp 0x107740b1 */
  goto L_107740b1;
L_107740af:;
  /* 107740af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107740b1:;
  /* 107740b1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 107740b4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107740b7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 107740be pop edi */
  EDI = (pop32());
  /* 107740bf pop esi */
  ESI = (pop32());
  /* 107740c0 pop ebx */
  EBX = (pop32());
  /* 107740c1 mov esp, ebp */
  ESP = (EBP);
  /* 107740c3 pop ebp */
  EBP = (pop32());
  /* 107740c4 ret  */
  ESPCHK(0x10773f20u, _esp0);
  ESP += 4; return;
}

/* FUN_100140d0 @ 0x107740d0 (11 bytes, 6 insns) */
void f_107740d0(void) {
  FTRACE(0x107740d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107740d0 push ebp */
  push32((uint32_t)(EBP));
  /* 107740d1 mov ebp, esp */
  EBP = (ESP);
  /* 107740d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107740d6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107740d9 pop ebp */
  EBP = (pop32());
  /* 107740da ret  */
  ESPCHK(0x107740d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100140e0 @ 0x107740e0 (147 bytes, 43 insns) */
void f_107740e0(void) {
  FTRACE(0x107740e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107740e0 push ebp */
  push32((uint32_t)(EBP));
  /* 107740e1 mov ebp, esp */
  EBP = (ESP);
  /* 107740e3 push ecx */
  push32((uint32_t)(ECX));
  /* 107740e4 cmp dword ptr [0x10790758], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10790758))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107740eb jne 0x10774107 */
  if (!C.zf) goto L_10774107;
  /* 107740ed cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107740f1 jl 0x10774102 */
  if ((C.sf!=C.of)) goto L_10774102;
  /* 107740f3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107740f7 jg 0x10774102 */
  if ((!C.zf&&C.sf==C.of)) goto L_10774102;
  /* 107740f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107740fc add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107740ff mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10774102:;
  /* 10774102 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10774105 jmp 0x1077416f */
  goto L_1077416f;
L_10774107:;
  /* 10774107 push 0x107908e4 */
  push32((uint32_t)(0x107908e4u));
  /* 1077410c call dword ptr [0x10793344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793344))), 0x10774112u);
  /* 10774112 cmp dword ptr [0x107908d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107908d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10774119 je 0x10774139 */
  if (C.zf) goto L_10774139;
  /* 1077411b push 0x107908e4 */
  push32((uint32_t)(0x107908e4u));
  /* 10774120 call dword ptr [0x10793334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793334))), 0x10774126u);
  /* 10774126 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10774128 call 0x10768340 */
  push32(0x1077412du); f_10768340();
  /* 1077412d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10774130 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10774137 jmp 0x10774140 */
  goto L_10774140;
L_10774139:;
  /* 10774139 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10774140:;
  /* 10774140 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10774143 push ecx */
  push32((uint32_t)(ECX));
  /* 10774144 call 0x10774180 */
  push32(0x10774149u); f_10774180();
  /* 10774149 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1077414c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1077414f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10774153 je 0x10774161 */
  if (C.zf) goto L_10774161;
  /* 10774155 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10774157 call 0x107683e0 */
  push32(0x1077415cu); f_107683e0();
  /* 1077415c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1077415f jmp 0x1077416c */
  goto L_1077416c;
L_10774161:;
  /* 10774161 push 0x107908e4 */
  push32((uint32_t)(0x107908e4u));
  /* 10774166 call dword ptr [0x10793334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793334))), 0x1077416cu);
L_1077416c:;
  /* 1077416c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1077416f:;
  /* 1077416f mov esp, ebp */
  ESP = (EBP);
  /* 10774171 pop ebp */
  EBP = (pop32());
  /* 10774172 ret  */
  ESPCHK(0x107740e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014180 @ 0x10774180 (299 bytes, 91 insns) */
void f_10774180(void) {
  FTRACE(0x10774180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10774180 push ebp */
  push32((uint32_t)(EBP));
  /* 10774181 mov ebp, esp */
  EBP = (ESP);
  /* 10774183 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10774186 cmp dword ptr [0x10790758], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10790758))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1077418d jne 0x107741ac */
  if (!C.zf) goto L_107741ac;
  /* 1077418f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10774193 jl 0x107741a4 */
  if ((C.sf!=C.of)) goto L_107741a4;
  /* 10774195 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10774199 jg 0x107741a4 */
  if ((!C.zf&&C.sf==C.of)) goto L_107741a4;
  /* 1077419b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1077419e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107741a1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_107741a4:;
  /* 107741a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107741a7 jmp 0x107742a7 */
  goto L_107742a7;
L_107741ac:;
  /* 107741ac cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107741b3 jge 0x107741f3 */
  if ((C.sf==C.of)) goto L_107741f3;
  /* 107741b5 cmp dword ptr [0x1078eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1078eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107741bc jle 0x107741d1 */
  if ((C.zf||C.sf!=C.of)) goto L_107741d1;
  /* 107741be push 1 */
  push32((uint32_t)(0x1u));
  /* 107741c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107741c3 push ecx */
  push32((uint32_t)(ECX));
  /* 107741c4 call 0x1076a950 */
  push32(0x107741c9u); f_1076a950();
  /* 107741c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107741cc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 107741cf jmp 0x107741e5 */
  goto L_107741e5;
L_107741d1:;
  /* 107741d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107741d4 mov eax, dword ptr [0x1078ec98] */
  EAX = (r32((uint32_t)(0x1078ec98)));
  /* 107741d9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107741db mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 107741df and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 107741e2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_107741e5:;
  /* 107741e5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107741e9 jne 0x107741f3 */
  if (!C.zf) goto L_107741f3;
  /* 107741eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107741ee jmp 0x107742a7 */
  goto L_107742a7;
L_107741f3:;
  /* 107741f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107741f6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 107741f9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 107741ff and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10774205 mov eax, dword ptr [0x1078ec98] */
  EAX = (r32((uint32_t)(0x1078ec98)));
  /* 1077420a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1077420c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10774210 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10774216 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10774218 je 0x1077423c */
  if (C.zf) goto L_1077423c;
  /* 1077421a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1077421d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10774220 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10774226 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 10774229 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1077422c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 1077422f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 10774233 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1077423a jmp 0x1077424d */
  goto L_1077424d;
L_1077423c:;
  /* 1077423c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1077423f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10774242 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 10774246 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_1077424d:;
  /* 1077424d push 1 */
  push32((uint32_t)(0x1u));
  /* 1077424f push 0 */
  push32((uint32_t)(0x0u));
  /* 10774251 push 3 */
  push32((uint32_t)(0x3u));
  /* 10774253 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10774256 push edx */
  push32((uint32_t)(EDX));
  /* 10774257 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1077425a push eax */
  push32((uint32_t)(EAX));
  /* 1077425b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 1077425e push ecx */
  push32((uint32_t)(ECX));
  /* 1077425f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10774264 mov edx, dword ptr [0x10790758] */
  EDX = (r32((uint32_t)(0x10790758)));
  /* 1077426a push edx */
  push32((uint32_t)(EDX));
  /* 1077426b call 0x1076cd30 */
  push32(0x10774270u); f_1076cd30();
  /* 10774270 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10774273 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10774276 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1077427a jne 0x10774281 */
  if (!C.zf) goto L_10774281;
  /* 1077427c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1077427f jmp 0x107742a7 */
  goto L_107742a7;
L_10774281:;
  /* 10774281 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10774285 jne 0x10774291 */
  if (!C.zf) goto L_10774291;
  /* 10774287 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1077428a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1077428f jmp 0x107742a7 */
  goto L_107742a7;
L_10774291:;
  /* 10774291 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10774294 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10774299 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 1077429c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 107742a2 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 107742a5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_107742a7:;
  /* 107742a7 mov esp, ebp */
  ESP = (EBP);
  /* 107742a9 pop ebp */
  EBP = (pop32());
  /* 107742aa ret  */
  ESPCHK(0x10774180u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x107742b0 (52 bytes, 19 insns) */
void f_107742b0(void) {
  FTRACE(0x107742b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107742b0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 107742b4 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 107742b8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107742ba mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 107742be jne 0x107742c9 */
  if (!C.zf) goto L_107742c9;
  /* 107742c0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 107742c4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 107742c6 ret 0x10 */
  ESPCHK(0x107742b0u, _esp0);
  ESP += 20; return;
L_107742c9:;
  /* 107742c9 push ebx */
  push32((uint32_t)(EBX));
  /* 107742ca mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 107742cc mov ebx, eax */
  EBX = (EAX);
  /* 107742ce mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 107742d2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 107742d6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 107742d8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 107742dc mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 107742de add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107742e0 pop ebx */
  EBX = (pop32());
  /* 107742e1 ret 0x10 */
  ESPCHK(0x107742b0u, _esp0);
  ESP += 20; return;
}

/* FUN_100142f0 @ 0x107742f0 (46 bytes, 18 insns) */
void f_107742f0(void) {
  FTRACE(0x107742f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107742f0 push ebp */
  push32((uint32_t)(EBP));
  /* 107742f1 mov ebp, esp */
  EBP = (ESP);
  /* 107742f3 push ecx */
  push32((uint32_t)(ECX));
  /* 107742f4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 107742f6 call 0x10768340 */
  push32(0x107742fbu); f_10768340();
  /* 107742fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107742fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10774301 push eax */
  push32((uint32_t)(EAX));
  /* 10774302 call 0x10774320 */
  push32(0x10774307u); f_10774320();
  /* 10774307 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1077430a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1077430d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1077430f call 0x107683e0 */
  push32(0x10774314u); f_107683e0();
  /* 10774314 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10774317 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1077431a mov esp, ebp */
  ESP = (EBP);
  /* 1077431c pop ebp */
  EBP = (pop32());
  /* 1077431d ret  */
  ESPCHK(0x107742f0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x10774320 (198 bytes, 69 insns) */
void f_10774320(void) {
  FTRACE(0x10774320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10774320 push ebp */
  push32((uint32_t)(EBP));
  /* 10774321 mov ebp, esp */
  EBP = (ESP);
  /* 10774323 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10774326 mov eax, dword ptr [0x10790578] */
  EAX = (r32((uint32_t)(0x10790578)));
  /* 1077432b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1077432e cmp dword ptr [0x10792080], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10792080))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10774335 jne 0x1077433e */
  if (!C.zf) goto L_1077433e;
  /* 10774337 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10774339 jmp 0x107743e2 */
  goto L_107743e2;
L_1077433e:;
  /* 1077433e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10774342 jne 0x10774366 */
  if (!C.zf) goto L_10774366;
  /* 10774344 cmp dword ptr [0x10790580], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10790580))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1077434b je 0x10774366 */
  if (C.zf) goto L_10774366;
  /* 1077434d call 0x10774440 */
  push32(0x10774352u); f_10774440();
  /* 10774352 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10774354 je 0x1077435d */
  if (C.zf) goto L_1077435d;
  /* 10774356 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10774358 jmp 0x107743e2 */
  goto L_107743e2;
L_1077435d:;
  /* 1077435d mov ecx, dword ptr [0x10790578] */
  ECX = (r32((uint32_t)(0x10790578)));
  /* 10774363 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10774366:;
  /* 10774366 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1077436a je 0x107743e0 */
  if (C.zf) goto L_107743e0;
  /* 1077436c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10774370 je 0x107743e0 */
  if (C.zf) goto L_107743e0;
  /* 10774372 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10774375 push edx */
  push32((uint32_t)(EDX));
  /* 10774376 call 0x10767770 */
  push32(0x1077437bu); f_10767770();
  /* 1077437b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1077437e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10774381:;
  /* 10774381 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10774384 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10774387 je 0x107743e0 */
  if (C.zf) goto L_107743e0;
  /* 10774389 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1077438c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1077438e push edx */
  push32((uint32_t)(EDX));
  /* 1077438f call 0x10767770 */
  push32(0x10774394u); f_10767770();
  /* 10774394 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10774397 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1077439a jbe 0x107743d5 */
  if ((C.cf||C.zf)) goto L_107743d5;
  /* 1077439c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1077439f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107743a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107743a4 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 107743a8 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107743ab jne 0x107743d5 */
  if (!C.zf) goto L_107743d5;
  /* 107743ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107743b0 push ecx */
  push32((uint32_t)(ECX));
  /* 107743b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107743b4 push edx */
  push32((uint32_t)(EDX));
  /* 107743b5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107743b8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107743ba push ecx */
  push32((uint32_t)(ECX));
  /* 107743bb call 0x107743f0 */
  push32(0x107743c0u); f_107743f0();
  /* 107743c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107743c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107743c5 jne 0x107743d5 */
  if (!C.zf) goto L_107743d5;
  /* 107743c7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107743ca mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107743cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107743cf lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 107743d3 jmp 0x107743e2 */
  goto L_107743e2;
L_107743d5:;
  /* 107743d5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107743d8 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107743db mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 107743de jmp 0x10774381 */
  goto L_10774381;
L_107743e0:;
  /* 107743e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107743e2:;
  /* 107743e2 mov esp, ebp */
  ESP = (EBP);
  /* 107743e4 pop ebp */
  EBP = (pop32());
  /* 107743e5 ret  */
  ESPCHK(0x10774320u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x107743f0 (79 bytes, 32 insns) */
void f_107743f0(void) {
  FTRACE(0x107743f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107743f0 push ebp */
  push32((uint32_t)(EBP));
  /* 107743f1 mov ebp, esp */
  EBP = (ESP);
  /* 107743f3 push ecx */
  push32((uint32_t)(ECX));
  /* 107743f4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107743f8 jne 0x107743fe */
  if (!C.zf) goto L_107743fe;
  /* 107743fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107743fc jmp 0x1077443b */
  goto L_1077443b;
L_107743fe:;
  /* 107743fe mov eax, dword ptr [0x10791c44] */
  EAX = (r32((uint32_t)(0x10791c44)));
  /* 10774403 push eax */
  push32((uint32_t)(EAX));
  /* 10774404 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10774407 push ecx */
  push32((uint32_t)(ECX));
  /* 10774408 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1077440b push edx */
  push32((uint32_t)(EDX));
  /* 1077440c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1077440f push eax */
  push32((uint32_t)(EAX));
  /* 10774410 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10774413 push ecx */
  push32((uint32_t)(ECX));
  /* 10774414 push 1 */
  push32((uint32_t)(0x1u));
  /* 10774416 mov edx, dword ptr [0x10791ee4] */
  EDX = (r32((uint32_t)(0x10791ee4)));
  /* 1077441c push edx */
  push32((uint32_t)(EDX));
  /* 1077441d call 0x107744f0 */
  push32(0x10774422u); f_107744f0();
  /* 10774422 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10774425 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10774428 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1077442c jne 0x10774435 */
  if (!C.zf) goto L_10774435;
  /* 1077442e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 10774433 jmp 0x1077443b */
  goto L_1077443b;
L_10774435:;
  /* 10774435 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10774438 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1077443b:;
  /* 1077443b mov esp, ebp */
  ESP = (EBP);
  /* 1077443d pop ebp */
  EBP = (pop32());
  /* 1077443e ret  */
  ESPCHK(0x107743f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014440 @ 0x10774440 (174 bytes, 66 insns) */
void f_10774440(void) {
  FTRACE(0x10774440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10774440 push ebp */
  push32((uint32_t)(EBP));
  /* 10774441 mov ebp, esp */
  EBP = (ESP);
  /* 10774443 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10774446 mov eax, dword ptr [0x10790580] */
  EAX = (r32((uint32_t)(0x10790580)));
  /* 1077444b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1077444e:;
  /* 1077444e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10774451 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10774454 je 0x107744e8 */
  if (C.zf) goto L_107744e8;
  /* 1077445a push 0 */
  push32((uint32_t)(0x0u));
  /* 1077445c push 0 */
  push32((uint32_t)(0x0u));
  /* 1077445e push 0 */
  push32((uint32_t)(0x0u));
  /* 10774460 push 0 */
  push32((uint32_t)(0x0u));
  /* 10774462 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10774464 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10774467 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10774469 push eax */
  push32((uint32_t)(EAX));
  /* 1077446a push 0 */
  push32((uint32_t)(0x0u));
  /* 1077446c push 1 */
  push32((uint32_t)(0x1u));
  /* 1077446e call dword ptr [0x1079339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079339c))), 0x10774474u);
  /* 10774474 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10774477 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1077447b jne 0x10774482 */
  if (!C.zf) goto L_10774482;
  /* 1077447d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10774480 jmp 0x107744ea */
  goto L_107744ea;
L_10774482:;
  /* 10774482 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10774484 push 0x1078ca7c */
  push32((uint32_t)(0x1078ca7cu));
  /* 10774489 push 2 */
  push32((uint32_t)(0x2u));
  /* 1077448b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1077448e push ecx */
  push32((uint32_t)(ECX));
  /* 1077448f call 0x10764940 */
  push32(0x10774494u); f_10764940();
  /* 10774494 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10774497 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1077449a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1077449e jne 0x107744a5 */
  if (!C.zf) goto L_107744a5;
  /* 107744a0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107744a3 jmp 0x107744ea */
  goto L_107744ea;
L_107744a5:;
  /* 107744a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 107744a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 107744a9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107744ac push edx */
  push32((uint32_t)(EDX));
  /* 107744ad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107744b0 push eax */
  push32((uint32_t)(EAX));
  /* 107744b1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 107744b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107744b6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107744b8 push edx */
  push32((uint32_t)(EDX));
  /* 107744b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 107744bb push 1 */
  push32((uint32_t)(0x1u));
  /* 107744bd call dword ptr [0x1079339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079339c))), 0x107744c3u);
  /* 107744c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107744c5 jne 0x107744cc */
  if (!C.zf) goto L_107744cc;
  /* 107744c7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107744ca jmp 0x107744ea */
  goto L_107744ea;
L_107744cc:;
  /* 107744cc push 0 */
  push32((uint32_t)(0x0u));
  /* 107744ce mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107744d1 push eax */
  push32((uint32_t)(EAX));
  /* 107744d2 call 0x10774940 */
  push32(0x107744d7u); f_10774940();
  /* 107744d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107744da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107744dd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107744e0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107744e3 jmp 0x1077444e */
  goto L_1077444e;
L_107744e8:;
  /* 107744e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107744ea:;
  /* 107744ea mov esp, ebp */
  ESP = (EBP);
  /* 107744ec pop ebp */
  EBP = (pop32());
  /* 107744ed ret  */
  ESPCHK(0x10774440u, _esp0);
  ESP += 4; return;
}

/* FUN_100144f0 @ 0x107744f0 (970 bytes, 340 insns) */
void f_107744f0(void) {
  FTRACE(0x107744f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107744f0 push ebp */
  push32((uint32_t)(EBP));
  /* 107744f1 mov ebp, esp */
  EBP = (ESP);
  /* 107744f3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 107744f5 push 0x1078cad0 */
  push32((uint32_t)(0x1078cad0u));
  /* 107744fa push 0x1076da48 */
  push32((uint32_t)(0x1076da48u));
  /* 107744ff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10774505 push eax */
  push32((uint32_t)(EAX));
  /* 10774506 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1077450d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10774510 push ebx */
  push32((uint32_t)(EBX));
  /* 10774511 push esi */
  push32((uint32_t)(ESI));
  /* 10774512 push edi */
  push32((uint32_t)(EDI));
  /* 10774513 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10774516 cmp dword ptr [0x107908bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107908bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1077451d jne 0x10774576 */
  if (!C.zf) goto L_10774576;
  /* 1077451f push 1 */
  push32((uint32_t)(0x1u));
  /* 10774521 push 0x1078c128 */
  push32((uint32_t)(0x1078c128u));
  /* 10774526 push 1 */
  push32((uint32_t)(0x1u));
  /* 10774528 push 0x1078c128 */
  push32((uint32_t)(0x1078c128u));
  /* 1077452d push 0 */
  push32((uint32_t)(0x0u));
  /* 1077452f push 0 */
  push32((uint32_t)(0x0u));
  /* 10774531 call dword ptr [0x107932a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932a0))), 0x10774537u);
  /* 10774537 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10774539 je 0x10774547 */
  if (C.zf) goto L_10774547;
  /* 1077453b mov dword ptr [0x107908bc], 1 */
  w32((uint32_t)(0x107908bc), (0x1u));
  /* 10774545 jmp 0x10774576 */
  goto L_10774576;
L_10774547:;
  /* 10774547 push 1 */
  push32((uint32_t)(0x1u));
  /* 10774549 push 0x1078c124 */
  push32((uint32_t)(0x1078c124u));
  /* 1077454e push 1 */
  push32((uint32_t)(0x1u));
  /* 10774550 push 0x1078c124 */
  push32((uint32_t)(0x1078c124u));
  /* 10774555 push 0 */
  push32((uint32_t)(0x0u));
  /* 10774557 push 0 */
  push32((uint32_t)(0x0u));
  /* 10774559 call dword ptr [0x107932ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932ac))), 0x1077455fu);
  /* 1077455f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10774561 je 0x1077456f */
  if (C.zf) goto L_1077456f;
  /* 10774563 mov dword ptr [0x107908bc], 2 */
  w32((uint32_t)(0x107908bc), (0x2u));
  /* 1077456d jmp 0x10774576 */
  goto L_10774576;
L_1077456f:;
  /* 1077456f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10774571 jmp 0x107748d4 */
  goto L_107748d4;
L_10774576:;
  /* 10774576 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1077457a jle 0x1077458f */
  if ((C.zf||C.sf!=C.of)) goto L_1077458f;
  /* 1077457c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1077457f push eax */
  push32((uint32_t)(EAX));
  /* 10774580 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10774583 push ecx */
  push32((uint32_t)(ECX));
  /* 10774584 call 0x107748f0 */
  push32(0x10774589u); f_107748f0();
  /* 10774589 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1077458c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1077458f:;
  /* 1077458f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10774593 jle 0x107745a8 */
  if ((C.zf||C.sf!=C.of)) goto L_107745a8;
  /* 10774595 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10774598 push edx */
  push32((uint32_t)(EDX));
  /* 10774599 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1077459c push eax */
  push32((uint32_t)(EAX));
  /* 1077459d call 0x107748f0 */
  push32(0x107745a2u); f_107748f0();
  /* 107745a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107745a5 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_107745a8:;
  /* 107745a8 cmp dword ptr [0x107908bc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x107908bc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107745af jne 0x107745d4 */
  if (!C.zf) goto L_107745d4;
  /* 107745b1 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 107745b4 push ecx */
  push32((uint32_t)(ECX));
  /* 107745b5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107745b8 push edx */
  push32((uint32_t)(EDX));
  /* 107745b9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107745bc push eax */
  push32((uint32_t)(EAX));
  /* 107745bd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107745c0 push ecx */
  push32((uint32_t)(ECX));
  /* 107745c1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107745c4 push edx */
  push32((uint32_t)(EDX));
  /* 107745c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107745c8 push eax */
  push32((uint32_t)(EAX));
  /* 107745c9 call dword ptr [0x107932ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932ac))), 0x107745cfu);
  /* 107745cf jmp 0x107748d4 */
  goto L_107748d4;
L_107745d4:;
  /* 107745d4 cmp dword ptr [0x107908bc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x107908bc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107745db jne 0x107748d2 */
  if (!C.zf) goto L_107748d2;
  /* 107745e1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107745e5 jne 0x107745f0 */
  if (!C.zf) goto L_107745f0;
  /* 107745e7 mov ecx, dword ptr [0x10790768] */
  ECX = (r32((uint32_t)(0x10790768)));
  /* 107745ed mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_107745f0:;
  /* 107745f0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107745f4 je 0x10774600 */
  if (C.zf) goto L_10774600;
  /* 107745f6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107745fa jne 0x1077477c */
  if (!C.zf) goto L_1077477c;
L_10774600:;
  /* 10774600 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10774603 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10774606 jne 0x10774612 */
  if (!C.zf) goto L_10774612;
  /* 10774608 mov eax, 2 */
  EAX = (0x2u);
  /* 1077460d jmp 0x107748d4 */
  goto L_107748d4;
L_10774612:;
  /* 10774612 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10774616 jle 0x10774622 */
  if ((C.zf||C.sf!=C.of)) goto L_10774622;
  /* 10774618 mov eax, 1 */
  EAX = (0x1u);
  /* 1077461d jmp 0x107748d4 */
  goto L_107748d4;
L_10774622:;
  /* 10774622 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10774626 jle 0x10774632 */
  if ((C.zf||C.sf!=C.of)) goto L_10774632;
  /* 10774628 mov eax, 3 */
  EAX = (0x3u);
  /* 1077462d jmp 0x107748d4 */
  goto L_107748d4;
L_10774632:;
  /* 10774632 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 10774635 push eax */
  push32((uint32_t)(EAX));
  /* 10774636 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10774639 push ecx */
  push32((uint32_t)(ECX));
  /* 1077463a call dword ptr [0x107932f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932f8))), 0x10774640u);
  /* 10774640 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10774642 jne 0x1077464b */
  if (!C.zf) goto L_1077464b;
  /* 10774644 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10774646 jmp 0x107748d4 */
  goto L_107748d4;
L_1077464b:;
  /* 1077464b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1077464f jne 0x10774657 */
  if (!C.zf) goto L_10774657;
  /* 10774651 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10774655 je 0x10774684 */
  if (C.zf) goto L_10774684;
L_10774657:;
  /* 10774657 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1077465b jne 0x10774663 */
  if (!C.zf) goto L_10774663;
  /* 1077465d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10774661 je 0x10774684 */
  if (C.zf) goto L_10774684;
L_10774663:;
  /* 10774663 push 0x1078ca90 */
  push32((uint32_t)(0x1078ca90u));
  /* 10774668 push 0 */
  push32((uint32_t)(0x0u));
  /* 1077466a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 1077466f push 0x1078ca88 */
  push32((uint32_t)(0x1078ca88u));
  /* 10774674 push 2 */
  push32((uint32_t)(0x2u));
  /* 10774676 call 0x10763a00 */
  push32(0x1077467bu); f_10763a00();
  /* 1077467b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1077467e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10774681 jne 0x10774684 */
  if (!C.zf) goto L_10774684;
  /* 10774683 int3  */
  x86_unimpl("int3 @ 0x10774683");
L_10774684:;
  /* 10774684 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10774686 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10774688 jne 0x1077464b */
  if (!C.zf) goto L_1077464b;
  /* 1077468a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1077468e jle 0x10774703 */
  if ((C.zf||C.sf!=C.of)) goto L_10774703;
  /* 10774690 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10774694 jae 0x107746a0 */
  if (!C.cf) goto L_107746a0;
  /* 10774696 mov eax, 3 */
  EAX = (0x3u);
  /* 1077469b jmp 0x107748d4 */
  goto L_107748d4;
L_107746a0:;
  /* 107746a0 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 107746a3 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 107746a6 jmp 0x107746b1 */
  goto L_107746b1;
L_107746a8:;
  /* 107746a8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 107746ab add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107746ae mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_107746b1:;
  /* 107746b1 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 107746b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107746b6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107746b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107746ba je 0x107746f9 */
  if (C.zf) goto L_107746f9;
  /* 107746bc mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 107746bf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107746c1 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 107746c4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107746c6 je 0x107746f9 */
  if (C.zf) goto L_107746f9;
  /* 107746c8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107746cb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107746cd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 107746cf mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 107746d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107746d4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107746d6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107746d8 jl 0x107746f7 */
  if ((C.sf!=C.of)) goto L_107746f7;
  /* 107746da mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107746dd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107746df mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107746e1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 107746e4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107746e6 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 107746e9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107746eb jg 0x107746f7 */
  if ((!C.zf&&C.sf==C.of)) goto L_107746f7;
  /* 107746ed mov eax, 2 */
  EAX = (0x2u);
  /* 107746f2 jmp 0x107748d4 */
  goto L_107748d4;
L_107746f7:;
  /* 107746f7 jmp 0x107746a8 */
  goto L_107746a8;
L_107746f9:;
  /* 107746f9 mov eax, 3 */
  EAX = (0x3u);
  /* 107746fe jmp 0x107748d4 */
  goto L_107748d4;
L_10774703:;
  /* 10774703 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10774707 jle 0x1077477c */
  if ((C.zf||C.sf!=C.of)) goto L_1077477c;
  /* 10774709 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1077470d jae 0x10774719 */
  if (!C.cf) goto L_10774719;
  /* 1077470f mov eax, 1 */
  EAX = (0x1u);
  /* 10774714 jmp 0x107748d4 */
  goto L_107748d4;
L_10774719:;
  /* 10774719 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 1077471c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 1077471f jmp 0x1077472a */
  goto L_1077472a;
L_10774721:;
  /* 10774721 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10774724 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10774727 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_1077472a:;
  /* 1077472a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1077472d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1077472f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10774731 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10774733 je 0x10774772 */
  if (C.zf) goto L_10774772;
  /* 10774735 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10774738 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1077473a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1077473d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1077473f je 0x10774772 */
  if (C.zf) goto L_10774772;
  /* 10774741 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10774744 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10774746 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10774748 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1077474b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1077474d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1077474f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10774751 jl 0x10774770 */
  if ((C.sf!=C.of)) goto L_10774770;
  /* 10774753 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10774756 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10774758 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1077475a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 1077475d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1077475f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10774762 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10774764 jg 0x10774770 */
  if ((!C.zf&&C.sf==C.of)) goto L_10774770;
  /* 10774766 mov eax, 2 */
  EAX = (0x2u);
  /* 1077476b jmp 0x107748d4 */
  goto L_107748d4;
L_10774770:;
  /* 10774770 jmp 0x10774721 */
  goto L_10774721;
L_10774772:;
  /* 10774772 mov eax, 1 */
  EAX = (0x1u);
  /* 10774777 jmp 0x107748d4 */
  goto L_107748d4;
L_1077477c:;
  /* 1077477c push 0 */
  push32((uint32_t)(0x0u));
  /* 1077477e push 0 */
  push32((uint32_t)(0x0u));
  /* 10774780 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10774783 push ecx */
  push32((uint32_t)(ECX));
  /* 10774784 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10774787 push edx */
  push32((uint32_t)(EDX));
  /* 10774788 push 9 */
  push32((uint32_t)(0x9u));
  /* 1077478a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1077478d push eax */
  push32((uint32_t)(EAX));
  /* 1077478e call dword ptr [0x107932ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932ec))), 0x10774794u);
  /* 10774794 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10774797 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1077479b jne 0x107747a4 */
  if (!C.zf) goto L_107747a4;
  /* 1077479d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1077479f jmp 0x107748d4 */
  goto L_107748d4;
L_107747a4:;
  /* 107747a4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107747ab mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107747ae shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 107747b0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107747b3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 107747b5 call 0x10767ae0 */
  push32(0x107747bau); f_10767ae0();
  /* 107747ba mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 107747bd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 107747c0 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 107747c3 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 107747c6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 107747cd jmp 0x107747e6 */
  goto L_107747e6;
  /* 107747cf mov eax, 1 */
  EAX = (0x1u);
  /* 107747d4 ret  */
  ESPCHK(0x107744f0u, _esp0);
  ESP += 4; return;
  /* 107747d5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 107747d8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 107747df mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_107747e6:;
  /* 107747e6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107747ea jne 0x107747f3 */
  if (!C.zf) goto L_107747f3;
  /* 107747ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107747ee jmp 0x107748d4 */
  goto L_107748d4;
L_107747f3:;
  /* 107747f3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107747f6 push edx */
  push32((uint32_t)(EDX));
  /* 107747f7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107747fa push eax */
  push32((uint32_t)(EAX));
  /* 107747fb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107747fe push ecx */
  push32((uint32_t)(ECX));
  /* 107747ff mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10774802 push edx */
  push32((uint32_t)(EDX));
  /* 10774803 push 1 */
  push32((uint32_t)(0x1u));
  /* 10774805 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10774808 push eax */
  push32((uint32_t)(EAX));
  /* 10774809 call dword ptr [0x107932ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932ec))), 0x1077480fu);
  /* 1077480f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10774811 jne 0x1077481a */
  if (!C.zf) goto L_1077481a;
  /* 10774813 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10774815 jmp 0x107748d4 */
  goto L_107748d4;
L_1077481a:;
  /* 1077481a push 0 */
  push32((uint32_t)(0x0u));
  /* 1077481c push 0 */
  push32((uint32_t)(0x0u));
  /* 1077481e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10774821 push ecx */
  push32((uint32_t)(ECX));
  /* 10774822 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10774825 push edx */
  push32((uint32_t)(EDX));
  /* 10774826 push 9 */
  push32((uint32_t)(0x9u));
  /* 10774828 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1077482b push eax */
  push32((uint32_t)(EAX));
  /* 1077482c call dword ptr [0x107932ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932ec))), 0x10774832u);
  /* 10774832 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10774835 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10774839 jne 0x10774842 */
  if (!C.zf) goto L_10774842;
  /* 1077483b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1077483d jmp 0x107748d4 */
  goto L_107748d4;
L_10774842:;
  /* 10774842 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10774849 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1077484c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1077484e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10774851 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10774853 call 0x10767ae0 */
  push32(0x10774858u); f_10767ae0();
  /* 10774858 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 1077485b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1077485e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 10774861 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10774864 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1077486b jmp 0x10774884 */
  goto L_10774884;
  /* 1077486d mov eax, 1 */
  EAX = (0x1u);
  /* 10774872 ret  */
  ESPCHK(0x107744f0u, _esp0);
  ESP += 4; return;
  /* 10774873 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10774876 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 1077487d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10774884:;
  /* 10774884 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10774888 jne 0x1077488e */
  if (!C.zf) goto L_1077488e;
  /* 1077488a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1077488c jmp 0x107748d4 */
  goto L_107748d4;
L_1077488e:;
  /* 1077488e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10774891 push edx */
  push32((uint32_t)(EDX));
  /* 10774892 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10774895 push eax */
  push32((uint32_t)(EAX));
  /* 10774896 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10774899 push ecx */
  push32((uint32_t)(ECX));
  /* 1077489a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1077489d push edx */
  push32((uint32_t)(EDX));
  /* 1077489e push 1 */
  push32((uint32_t)(0x1u));
  /* 107748a0 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 107748a3 push eax */
  push32((uint32_t)(EAX));
  /* 107748a4 call dword ptr [0x107932ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932ec))), 0x107748aau);
  /* 107748aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107748ac jne 0x107748b2 */
  if (!C.zf) goto L_107748b2;
  /* 107748ae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107748b0 jmp 0x107748d4 */
  goto L_107748d4;
L_107748b2:;
  /* 107748b2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107748b5 push ecx */
  push32((uint32_t)(ECX));
  /* 107748b6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 107748b9 push edx */
  push32((uint32_t)(EDX));
  /* 107748ba mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107748bd push eax */
  push32((uint32_t)(EAX));
  /* 107748be mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107748c1 push ecx */
  push32((uint32_t)(ECX));
  /* 107748c2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107748c5 push edx */
  push32((uint32_t)(EDX));
  /* 107748c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107748c9 push eax */
  push32((uint32_t)(EAX));
  /* 107748ca call dword ptr [0x107932a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932a0))), 0x107748d0u);
  /* 107748d0 jmp 0x107748d4 */
  goto L_107748d4;
L_107748d2:;
  /* 107748d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107748d4:;
  /* 107748d4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 107748d7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107748da mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 107748e1 pop edi */
  EDI = (pop32());
  /* 107748e2 pop esi */
  ESI = (pop32());
  /* 107748e3 pop ebx */
  EBX = (pop32());
  /* 107748e4 mov esp, ebp */
  ESP = (EBP);
  /* 107748e6 pop ebp */
  EBP = (pop32());
  /* 107748e7 ret  */
  ESPCHK(0x107744f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100148f0 @ 0x107748f0 (80 bytes, 32 insns) */
void f_107748f0(void) {
  FTRACE(0x107748f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107748f0 push ebp */
  push32((uint32_t)(EBP));
  /* 107748f1 mov ebp, esp */
  EBP = (ESP);
  /* 107748f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107748f6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107748f9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107748fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107748ff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10774902:;
  /* 10774902 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10774905 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10774908 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1077490b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1077490e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10774910 je 0x10774927 */
  if (C.zf) goto L_10774927;
  /* 10774912 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10774915 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10774918 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1077491a je 0x10774927 */
  if (C.zf) goto L_10774927;
  /* 1077491c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1077491f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10774922 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10774925 jmp 0x10774902 */
  goto L_10774902;
L_10774927:;
  /* 10774927 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1077492a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1077492d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1077492f jne 0x10774939 */
  if (!C.zf) goto L_10774939;
  /* 10774931 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10774934 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10774937 jmp 0x1077493c */
  goto L_1077493c;
L_10774939:;
  /* 10774939 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1077493c:;
  /* 1077493c mov esp, ebp */
  ESP = (EBP);
  /* 1077493e pop ebp */
  EBP = (pop32());
  /* 1077493f ret  */
  ESPCHK(0x107748f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014940 @ 0x10774940 (736 bytes, 224 insns) */
void f_10774940(void) {
  FTRACE(0x10774940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10774940 push ebp */
  push32((uint32_t)(EBP));
  /* 10774941 mov ebp, esp */
  EBP = (ESP);
  /* 10774943 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10774946 push esi */
  push32((uint32_t)(ESI));
  /* 10774947 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1077494b je 0x1077496c */
  if (C.zf) goto L_1077496c;
  /* 1077494d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 1077494f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10774952 push eax */
  push32((uint32_t)(EAX));
  /* 10774953 call 0x10774d90 */
  push32(0x10774958u); f_10774d90();
  /* 10774958 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1077495b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1077495e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10774962 je 0x1077496c */
  if (C.zf) goto L_1077496c;
  /* 10774964 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10774967 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1077496a jne 0x10774974 */
  if (!C.zf) goto L_10774974;
L_1077496c:;
  /* 1077496c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1077496f jmp 0x10774c1b */
  goto L_10774c1b;
L_10774974:;
  /* 10774974 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10774977 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1077497b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1077497d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1077497f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10774980 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10774983 mov ecx, dword ptr [0x10790578] */
  ECX = (r32((uint32_t)(0x10790578)));
  /* 10774989 cmp ecx, dword ptr [0x1079057c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1079057c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1077498f jne 0x107749a5 */
  if (!C.zf) goto L_107749a5;
  /* 10774991 mov edx, dword ptr [0x10790578] */
  EDX = (r32((uint32_t)(0x10790578)));
  /* 10774997 push edx */
  push32((uint32_t)(EDX));
  /* 10774998 call 0x10774ca0 */
  push32(0x1077499du); f_10774ca0();
  /* 1077499d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107749a0 mov dword ptr [0x10790578], eax */
  w32((uint32_t)(0x10790578), (EAX));
L_107749a5:;
  /* 107749a5 cmp dword ptr [0x10790578], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10790578))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107749ac jne 0x10774a65 */
  if (!C.zf) goto L_10774a65;
  /* 107749b2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107749b6 je 0x107749d7 */
  if (C.zf) goto L_107749d7;
  /* 107749b8 cmp dword ptr [0x10790580], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10790580))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107749bf je 0x107749d7 */
  if (C.zf) goto L_107749d7;
  /* 107749c1 call 0x10774440 */
  push32(0x107749c6u); f_10774440();
  /* 107749c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107749c8 je 0x107749d2 */
  if (C.zf) goto L_107749d2;
  /* 107749ca or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107749cd jmp 0x10774c1b */
  goto L_10774c1b;
L_107749d2:;
  /* 107749d2 jmp 0x10774a65 */
  goto L_10774a65;
L_107749d7:;
  /* 107749d7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107749db je 0x107749e4 */
  if (C.zf) goto L_107749e4;
  /* 107749dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107749df jmp 0x10774c1b */
  goto L_10774c1b;
L_107749e4:;
  /* 107749e4 cmp dword ptr [0x10790578], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10790578))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107749eb jne 0x10774a24 */
  if (!C.zf) goto L_10774a24;
  /* 107749ed push 0x87 */
  push32((uint32_t)(0x87u));
  /* 107749f2 push 0x1078cae8 */
  push32((uint32_t)(0x1078cae8u));
  /* 107749f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 107749f9 push 4 */
  push32((uint32_t)(0x4u));
  /* 107749fb call 0x10764940 */
  push32(0x10774a00u); f_10764940();
  /* 10774a00 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10774a03 mov dword ptr [0x10790578], eax */
  w32((uint32_t)(0x10790578), (EAX));
  /* 10774a08 cmp dword ptr [0x10790578], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10790578))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10774a0f jne 0x10774a19 */
  if (!C.zf) goto L_10774a19;
  /* 10774a11 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10774a14 jmp 0x10774c1b */
  goto L_10774c1b;
L_10774a19:;
  /* 10774a19 mov eax, dword ptr [0x10790578] */
  EAX = (r32((uint32_t)(0x10790578)));
  /* 10774a1e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10774a24:;
  /* 10774a24 cmp dword ptr [0x10790580], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10790580))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10774a2b jne 0x10774a65 */
  if (!C.zf) goto L_10774a65;
  /* 10774a2d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 10774a32 push 0x1078cae8 */
  push32((uint32_t)(0x1078cae8u));
  /* 10774a37 push 2 */
  push32((uint32_t)(0x2u));
  /* 10774a39 push 4 */
  push32((uint32_t)(0x4u));
  /* 10774a3b call 0x10764940 */
  push32(0x10774a40u); f_10764940();
  /* 10774a40 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10774a43 mov dword ptr [0x10790580], eax */
  w32((uint32_t)(0x10790580), (EAX));
  /* 10774a48 cmp dword ptr [0x10790580], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10790580))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10774a4f jne 0x10774a59 */
  if (!C.zf) goto L_10774a59;
  /* 10774a51 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10774a54 jmp 0x10774c1b */
  goto L_10774c1b;
L_10774a59:;
  /* 10774a59 mov ecx, dword ptr [0x10790580] */
  ECX = (r32((uint32_t)(0x10790580)));
  /* 10774a5f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_10774a65:;
  /* 10774a65 mov edx, dword ptr [0x10790578] */
  EDX = (r32((uint32_t)(0x10790578)));
  /* 10774a6b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10774a6e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10774a71 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10774a74 push eax */
  push32((uint32_t)(EAX));
  /* 10774a75 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10774a78 push ecx */
  push32((uint32_t)(ECX));
  /* 10774a79 call 0x10774c20 */
  push32(0x10774a7eu); f_10774c20();
  /* 10774a7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10774a81 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10774a84 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10774a88 jl 0x10774b21 */
  if ((C.sf!=C.of)) goto L_10774b21;
  /* 10774a8e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10774a91 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10774a94 je 0x10774b21 */
  if (C.zf) goto L_10774b21;
  /* 10774a9a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10774a9e je 0x10774b13 */
  if (C.zf) goto L_10774b13;
  /* 10774aa0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10774aa2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10774aa5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10774aa8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10774aab push edx */
  push32((uint32_t)(EDX));
  /* 10774aac call 0x107653d0 */
  push32(0x10774ab1u); f_107653d0();
  /* 10774ab1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10774ab4 jmp 0x10774abf */
  goto L_10774abf;
L_10774ab6:;
  /* 10774ab6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10774ab9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10774abc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10774abf:;
  /* 10774abf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10774ac2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10774ac5 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10774ac9 je 0x10774ae0 */
  if (C.zf) goto L_10774ae0;
  /* 10774acb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10774ace mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10774ad1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10774ad4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10774ad7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 10774adb mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10774ade jmp 0x10774ab6 */
  goto L_10774ab6;
L_10774ae0:;
  /* 10774ae0 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 10774ae5 push 0x1078cae8 */
  push32((uint32_t)(0x1078cae8u));
  /* 10774aea push 2 */
  push32((uint32_t)(0x2u));
  /* 10774aec mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10774aef shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10774af2 push eax */
  push32((uint32_t)(EAX));
  /* 10774af3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10774af6 push ecx */
  push32((uint32_t)(ECX));
  /* 10774af7 call 0x10764dd0 */
  push32(0x10774afcu); f_10764dd0();
  /* 10774afc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10774aff mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10774b02 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10774b06 je 0x10774b11 */
  if (C.zf) goto L_10774b11;
  /* 10774b08 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10774b0b mov dword ptr [0x10790578], edx */
  w32((uint32_t)(0x10790578), (EDX));
L_10774b11:;
  /* 10774b11 jmp 0x10774b1f */
  goto L_10774b1f;
L_10774b13:;
  /* 10774b13 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10774b16 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10774b19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10774b1c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_10774b1f:;
  /* 10774b1f jmp 0x10774b94 */
  goto L_10774b94;
L_10774b21:;
  /* 10774b21 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10774b25 jne 0x10774b8d */
  if (!C.zf) goto L_10774b8d;
  /* 10774b27 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10774b2b jge 0x10774b35 */
  if ((C.sf==C.of)) goto L_10774b35;
  /* 10774b2d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10774b30 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10774b32 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10774b35:;
  /* 10774b35 push 0xce */
  push32((uint32_t)(0xceu));
  /* 10774b3a push 0x1078cae8 */
  push32((uint32_t)(0x1078cae8u));
  /* 10774b3f push 2 */
  push32((uint32_t)(0x2u));
  /* 10774b41 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10774b44 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 10774b4b push edx */
  push32((uint32_t)(EDX));
  /* 10774b4c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10774b4f push eax */
  push32((uint32_t)(EAX));
  /* 10774b50 call 0x10764dd0 */
  push32(0x10774b55u); f_10764dd0();
  /* 10774b55 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10774b58 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10774b5b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10774b5f jne 0x10774b69 */
  if (!C.zf) goto L_10774b69;
  /* 10774b61 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10774b64 jmp 0x10774c1b */
  goto L_10774c1b;
L_10774b69:;
  /* 10774b69 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10774b6c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10774b6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10774b72 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 10774b75 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10774b78 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10774b7b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 10774b83 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10774b86 mov dword ptr [0x10790578], eax */
  w32((uint32_t)(0x10790578), (EAX));
  /* 10774b8b jmp 0x10774b94 */
  goto L_10774b94;
L_10774b8d:;
  /* 10774b8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10774b8f jmp 0x10774c1b */
  goto L_10774c1b;
L_10774b94:;
  /* 10774b94 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10774b98 je 0x10774c19 */
  if (C.zf) goto L_10774c19;
  /* 10774b9a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 10774b9f push 0x1078cae8 */
  push32((uint32_t)(0x1078cae8u));
  /* 10774ba4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10774ba6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10774ba9 push ecx */
  push32((uint32_t)(ECX));
  /* 10774baa call 0x10767770 */
  push32(0x10774bafu); f_10767770();
  /* 10774baf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10774bb2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10774bb5 push eax */
  push32((uint32_t)(EAX));
  /* 10774bb6 call 0x10764940 */
  push32(0x10774bbbu); f_10764940();
  /* 10774bbb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10774bbe mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10774bc1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10774bc5 je 0x10774c19 */
  if (C.zf) goto L_10774c19;
  /* 10774bc7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10774bca push edx */
  push32((uint32_t)(EDX));
  /* 10774bcb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10774bce push eax */
  push32((uint32_t)(EAX));
  /* 10774bcf call 0x107678f0 */
  push32(0x10774bd4u); f_107678f0();
  /* 10774bd4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10774bd7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10774bda sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10774bdd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10774be0 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10774be2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10774be5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10774be8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10774beb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10774bee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10774bf1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10774bf4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10774bf7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10774bf9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10774bfb not edx */
  EDX = (~(EDX));
  /* 10774bfd and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10774c00 push edx */
  push32((uint32_t)(EDX));
  /* 10774c01 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10774c04 push eax */
  push32((uint32_t)(EAX));
  /* 10774c05 call dword ptr [0x1079329c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079329c))), 0x10774c0bu);
  /* 10774c0b push 2 */
  push32((uint32_t)(0x2u));
  /* 10774c0d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10774c10 push ecx */
  push32((uint32_t)(ECX));
  /* 10774c11 call 0x107653d0 */
  push32(0x10774c16u); f_107653d0();
  /* 10774c16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10774c19:;
  /* 10774c19 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10774c1b:;
  /* 10774c1b pop esi */
  ESI = (pop32());
  /* 10774c1c mov esp, ebp */
  ESP = (EBP);
  /* 10774c1e pop ebp */
  EBP = (pop32());
  /* 10774c1f ret  */
  ESPCHK(0x10774940u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x10774c20 (124 bytes, 47 insns) */
void f_10774c20(void) {
  FTRACE(0x10774c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10774c20 push ebp */
  push32((uint32_t)(EBP));
  /* 10774c21 mov ebp, esp */
  EBP = (ESP);
  /* 10774c23 push ecx */
  push32((uint32_t)(ECX));
  /* 10774c24 mov eax, dword ptr [0x10790578] */
  EAX = (r32((uint32_t)(0x10790578)));
  /* 10774c29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10774c2c jmp 0x10774c37 */
  goto L_10774c37;
L_10774c2e:;
  /* 10774c2e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10774c31 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10774c34 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10774c37:;
  /* 10774c37 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10774c3a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10774c3d je 0x10774c8a */
  if (C.zf) goto L_10774c8a;
  /* 10774c3f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10774c42 push eax */
  push32((uint32_t)(EAX));
  /* 10774c43 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10774c46 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10774c48 push edx */
  push32((uint32_t)(EDX));
  /* 10774c49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10774c4c push eax */
  push32((uint32_t)(EAX));
  /* 10774c4d call 0x107743f0 */
  push32(0x10774c52u); f_107743f0();
  /* 10774c52 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10774c55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10774c57 jne 0x10774c88 */
  if (!C.zf) goto L_10774c88;
  /* 10774c59 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10774c5c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10774c5e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10774c61 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 10774c65 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10774c68 je 0x10774c7a */
  if (C.zf) goto L_10774c7a;
  /* 10774c6a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10774c6d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10774c6f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10774c72 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 10774c76 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10774c78 jne 0x10774c88 */
  if (!C.zf) goto L_10774c88;
L_10774c7a:;
  /* 10774c7a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10774c7d sub eax, dword ptr [0x10790578] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10790578))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10774c83 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10774c86 jmp 0x10774c98 */
  goto L_10774c98;
L_10774c88:;
  /* 10774c88 jmp 0x10774c2e */
  goto L_10774c2e;
L_10774c8a:;
  /* 10774c8a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10774c8d sub eax, dword ptr [0x10790578] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10790578))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10774c93 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10774c96 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_10774c98:;
  /* 10774c98 mov esp, ebp */
  ESP = (EBP);
  /* 10774c9a pop ebp */
  EBP = (pop32());
  /* 10774c9b ret  */
  ESPCHK(0x10774c20u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x10774ca0 (238 bytes, 80 insns) */
void f_10774ca0(void) {
  FTRACE(0x10774ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10774ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 10774ca1 mov ebp, esp */
  EBP = (ESP);
  /* 10774ca3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10774ca6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10774cad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10774cb0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10774cb3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10774cb7 jne 0x10774cc0 */
  if (!C.zf) goto L_10774cc0;
  /* 10774cb9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10774cbb jmp 0x10774d8a */
  goto L_10774d8a;
L_10774cc0:;
  /* 10774cc0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10774cc3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10774cc5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10774cc8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10774ccb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10774cce test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10774cd0 je 0x10774cdd */
  if (C.zf) goto L_10774cdd;
  /* 10774cd2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10774cd5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10774cd8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10774cdb jmp 0x10774cc0 */
  goto L_10774cc0;
L_10774cdd:;
  /* 10774cdd push 0x146 */
  push32((uint32_t)(0x146u));
  /* 10774ce2 push 0x1078cae8 */
  push32((uint32_t)(0x1078cae8u));
  /* 10774ce7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10774ce9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10774cec lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 10774cf3 push eax */
  push32((uint32_t)(EAX));
  /* 10774cf4 call 0x10764940 */
  push32(0x10774cf9u); f_10764940();
  /* 10774cf9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10774cfc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10774cff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10774d02 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10774d05 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10774d09 jne 0x10774d15 */
  if (!C.zf) goto L_10774d15;
  /* 10774d0b push 9 */
  push32((uint32_t)(0x9u));
  /* 10774d0d call 0x107638b0 */
  push32(0x10774d12u); f_107638b0();
  /* 10774d12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10774d15:;
  /* 10774d15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10774d18 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10774d1b:;
  /* 10774d1b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10774d1e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10774d21 je 0x10774d7e */
  if (C.zf) goto L_10774d7e;
  /* 10774d23 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 10774d28 push 0x1078cae8 */
  push32((uint32_t)(0x1078cae8u));
  /* 10774d2d push 2 */
  push32((uint32_t)(0x2u));
  /* 10774d2f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10774d32 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10774d34 push edx */
  push32((uint32_t)(EDX));
  /* 10774d35 call 0x10767770 */
  push32(0x10774d3au); f_10767770();
  /* 10774d3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10774d3d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10774d40 push eax */
  push32((uint32_t)(EAX));
  /* 10774d41 call 0x10764940 */
  push32(0x10774d46u); f_10764940();
  /* 10774d46 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10774d49 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10774d4c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10774d4e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10774d51 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10774d54 je 0x10774d6a */
  if (C.zf) goto L_10774d6a;
  /* 10774d56 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10774d59 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10774d5b push ecx */
  push32((uint32_t)(ECX));
  /* 10774d5c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10774d5f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10774d61 push eax */
  push32((uint32_t)(EAX));
  /* 10774d62 call 0x107678f0 */
  push32(0x10774d67u); f_107678f0();
  /* 10774d67 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10774d6a:;
  /* 10774d6a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10774d6d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10774d70 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10774d73 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10774d76 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10774d79 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10774d7c jmp 0x10774d1b */
  goto L_10774d1b;
L_10774d7e:;
  /* 10774d7e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10774d81 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10774d87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10774d8a:;
  /* 10774d8a mov esp, ebp */
  ESP = (EBP);
  /* 10774d8c pop ebp */
  EBP = (pop32());
  /* 10774d8d ret  */
  ESPCHK(0x10774ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014d90 @ 0x10774d90 (237 bytes, 81 insns) */
void f_10774d90(void) {
  FTRACE(0x10774d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10774d90 push ebp */
  push32((uint32_t)(EBP));
  /* 10774d91 mov ebp, esp */
  EBP = (ESP);
  /* 10774d93 push ecx */
  push32((uint32_t)(ECX));
  /* 10774d94 cmp dword ptr [0x10791ccc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10791ccc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10774d9b jne 0x10774db2 */
  if (!C.zf) goto L_10774db2;
  /* 10774d9d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10774da0 push eax */
  push32((uint32_t)(EAX));
  /* 10774da1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10774da4 push ecx */
  push32((uint32_t)(ECX));
  /* 10774da5 call 0x10774e90 */
  push32(0x10774daau); f_10774e90();
  /* 10774daa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10774dad jmp 0x10774e79 */
  goto L_10774e79;
L_10774db2:;
  /* 10774db2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10774db4 call 0x10768340 */
  push32(0x10774db9u); f_10768340();
  /* 10774db9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10774dbc jmp 0x10774dc7 */
  goto L_10774dc7;
L_10774dbe:;
  /* 10774dbe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10774dc1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10774dc4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10774dc7:;
  /* 10774dc7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10774dca movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 10774dce mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 10774dd2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10774dd5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10774ddb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10774ddd je 0x10774e5b */
  if (C.zf) goto L_10774e5b;
  /* 10774ddf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10774de2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10774de7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10774de9 mov cl, byte ptr [eax + 0x10791de1] */
  CL = (r8((uint32_t)(EAX + 0x10791de1)));
  /* 10774def and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10774df2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10774df4 je 0x10774e46 */
  if (C.zf) goto L_10774e46;
  /* 10774df6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10774df9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10774dfc mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10774dff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10774e02 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10774e04 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10774e06 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10774e08 jne 0x10774e18 */
  if (!C.zf) goto L_10774e18;
  /* 10774e0a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10774e0c call 0x107683e0 */
  push32(0x10774e11u); f_107683e0();
  /* 10774e11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10774e14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10774e16 jmp 0x10774e79 */
  goto L_10774e79;
L_10774e18:;
  /* 10774e18 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10774e1b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10774e21 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10774e24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10774e27 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10774e29 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10774e2b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10774e2d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10774e30 jne 0x10774e44 */
  if (!C.zf) goto L_10774e44;
  /* 10774e32 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10774e34 call 0x107683e0 */
  push32(0x10774e39u); f_107683e0();
  /* 10774e39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10774e3c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10774e3f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10774e42 jmp 0x10774e79 */
  goto L_10774e79;
L_10774e44:;
  /* 10774e44 jmp 0x10774e56 */
  goto L_10774e56;
L_10774e46:;
  /* 10774e46 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10774e49 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10774e4f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10774e52 jne 0x10774e56 */
  if (!C.zf) goto L_10774e56;
  /* 10774e54 jmp 0x10774e5b */
  goto L_10774e5b;
L_10774e56:;
  /* 10774e56 jmp 0x10774dbe */
  goto L_10774dbe;
L_10774e5b:;
  /* 10774e5b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10774e5d call 0x107683e0 */
  push32(0x10774e62u); f_107683e0();
  /* 10774e62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10774e65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10774e68 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10774e6d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10774e70 jne 0x10774e77 */
  if (!C.zf) goto L_10774e77;
  /* 10774e72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10774e75 jmp 0x10774e79 */
  goto L_10774e79;
L_10774e77:;
  /* 10774e77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10774e79:;
  /* 10774e79 mov esp, ebp */
  ESP = (EBP);
  /* 10774e7b pop ebp */
  EBP = (pop32());
  /* 10774e7c ret  */
  ESPCHK(0x10774d90u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x10774e90 (193 bytes, 87 insns) */
void f_10774e90(void) {
  FTRACE(0x10774e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10774e90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10774e92 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10774e96 push ebx */
  push32((uint32_t)(EBX));
  /* 10774e97 mov ebx, eax */
  EBX = (EAX);
  /* 10774e99 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10774e9c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10774ea0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10774ea6 je 0x10774ebb */
  if (C.zf) goto L_10774ebb;
L_10774ea8:;
  /* 10774ea8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 10774eaa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10774eab cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10774ead je 0x10774e80 */
  if (C.zf) { jmp_ind(0x10774e80u); return; }
  /* 10774eaf test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10774eb1 je 0x10774f04 */
  if (C.zf) goto L_10774f04;
  /* 10774eb3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10774eb9 jne 0x10774ea8 */
  if (!C.zf) goto L_10774ea8;
L_10774ebb:;
  /* 10774ebb or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 10774ebd push edi */
  push32((uint32_t)(EDI));
  /* 10774ebe mov eax, ebx */
  EAX = (EBX);
  /* 10774ec0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 10774ec3 push esi */
  push32((uint32_t)(ESI));
  /* 10774ec4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_10774ec6:;
  /* 10774ec6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10774ec8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 10774ecd mov eax, ecx */
  EAX = (ECX);
  /* 10774ecf mov esi, edi */
  ESI = (EDI);
  /* 10774ed1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 10774ed3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10774ed5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10774ed7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10774eda xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10774edd xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10774edf xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10774ee1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10774ee4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 10774eea jne 0x10774f08 */
  if (!C.zf) goto L_10774f08;
  /* 10774eec and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10774ef1 je 0x10774ec6 */
  if (C.zf) goto L_10774ec6;
  /* 10774ef3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10774ef8 jne 0x10774f02 */
  if (!C.zf) goto L_10774f02;
  /* 10774efa and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 10774f00 jne 0x10774ec6 */
  if (!C.zf) goto L_10774ec6;
L_10774f02:;
  /* 10774f02 pop esi */
  ESI = (pop32());
  /* 10774f03 pop edi */
  EDI = (pop32());
L_10774f04:;
  /* 10774f04 pop ebx */
  EBX = (pop32());
  /* 10774f05 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10774f07 ret  */
  ESPCHK(0x10774e90u, _esp0);
  ESP += 4; return;
L_10774f08:;
  /* 10774f08 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10774f0b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10774f0d je 0x10774f45 */
  if (C.zf) goto L_10774f45;
  /* 10774f0f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10774f11 je 0x10774f02 */
  if (C.zf) goto L_10774f02;
  /* 10774f13 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10774f15 je 0x10774f3e */
  if (C.zf) goto L_10774f3e;
  /* 10774f17 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10774f19 je 0x10774f02 */
  if (C.zf) goto L_10774f02;
  /* 10774f1b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10774f1e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10774f20 je 0x10774f37 */
  if (C.zf) goto L_10774f37;
  /* 10774f22 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10774f24 je 0x10774f02 */
  if (C.zf) goto L_10774f02;
  /* 10774f26 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10774f28 je 0x10774f30 */
  if (C.zf) goto L_10774f30;
  /* 10774f2a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10774f2c je 0x10774f02 */
  if (C.zf) goto L_10774f02;
  /* 10774f2e jmp 0x10774ec6 */
  goto L_10774ec6;
L_10774f30:;
  /* 10774f30 pop esi */
  ESI = (pop32());
  /* 10774f31 pop edi */
  EDI = (pop32());
  /* 10774f32 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 10774f35 pop ebx */
  EBX = (pop32());
  /* 10774f36 ret  */
  ESPCHK(0x10774e90u, _esp0);
  ESP += 4; return;
L_10774f37:;
  /* 10774f37 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 10774f3a pop esi */
  ESI = (pop32());
  /* 10774f3b pop edi */
  EDI = (pop32());
  /* 10774f3c pop ebx */
  EBX = (pop32());
  /* 10774f3d ret  */
  ESPCHK(0x10774e90u, _esp0);
  ESP += 4; return;
L_10774f3e:;
  /* 10774f3e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 10774f41 pop esi */
  ESI = (pop32());
  /* 10774f42 pop edi */
  EDI = (pop32());
  /* 10774f43 pop ebx */
  EBX = (pop32());
  /* 10774f44 ret  */
  ESPCHK(0x10774e90u, _esp0);
  ESP += 4; return;
L_10774f45:;
  /* 10774f45 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 10774f48 pop esi */
  ESI = (pop32());
  /* 10774f49 pop edi */
  EDI = (pop32());
  /* 10774f4a pop ebx */
  EBX = (pop32());
  /* 10774f4b ret  */
  ESPCHK(0x10774e90u, _esp0);
  ESP += 4; return;
  /* 10774f4c jmp dword ptr [0x10793320] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10793320)))); return;
}

/* RtlUnwind @ 0x1077509c (6 bytes, 1 insns) */
void f_1077509c(void) {
  FTRACE(0x1077509cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1077509c jmp dword ptr [0x107932d4] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x107932d4)))); return;
}

