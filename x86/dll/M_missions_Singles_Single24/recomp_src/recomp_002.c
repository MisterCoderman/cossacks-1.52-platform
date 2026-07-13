#include "recomp.h"

/* FUN_10010690 @ 0x11350690 (393 bytes, 123 insns) */
void f_11350690(void) {
  FTRACE(0x11350690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11350690 push ebp */
  push32((uint32_t)(EBP));
  /* 11350691 mov ebp, esp */
  EBP = (ESP);
  /* 11350693 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11350696 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1135069a jne 0x113506a6 */
  if (!C.zf) goto L_113506a6;
  /* 1135069c mov eax, dword ptr [0x1136ec98] */
  EAX = (r32((uint32_t)(0x1136ec98)));
  /* 113506a1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 113506a4 jmp 0x113506ac */
  goto L_113506ac;
L_113506a6:;
  /* 113506a6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 113506a9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_113506ac:;
  /* 113506ac mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113506af mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113506b2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113506b5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113506b8 push 0x1136f7f4 */
  push32((uint32_t)(0x1136f7f4u));
  /* 113506bd call dword ptr [0x11371338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371338))), 0x113506c3u);
  /* 113506c3 cmp dword ptr [0x1136f7e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f7e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113506ca je 0x113506ea */
  if (C.zf) goto L_113506ea;
  /* 113506cc push 0x1136f7f4 */
  push32((uint32_t)(0x1136f7f4u));
  /* 113506d1 call dword ptr [0x11371328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371328))), 0x113506d7u);
  /* 113506d7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 113506d9 call 0x11346d50 */
  push32(0x113506deu); f_11346d50();
  /* 113506de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113506e1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 113506e8 jmp 0x113506f1 */
  goto L_113506f1;
L_113506ea:;
  /* 113506ea mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_113506f1:;
  /* 113506f1 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113506f5 jbe 0x113507e2 */
  if ((C.cf||C.zf)) goto L_113507e2;
  /* 113506fb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113506fe mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11350700 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 11350703 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11350707 je 0x11350711 */
  if (C.zf) goto L_11350711;
  /* 11350709 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1135070d je 0x11350716 */
  if (C.zf) goto L_11350716;
  /* 1135070f jmp 0x11350770 */
  goto L_11350770;
L_11350711:;
  /* 11350711 jmp 0x113507e2 */
  goto L_113507e2;
L_11350716:;
  /* 11350716 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11350719 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1135071c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1135071f mov dword ptr [0x1136f7d0], 0 */
  w32((uint32_t)(0x1136f7d0), (0x0u));
  /* 11350729 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1135072c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1135072f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11350732 jne 0x11350747 */
  if (!C.zf) goto L_11350747;
  /* 11350734 mov dword ptr [0x1136f7d0], 1 */
  w32((uint32_t)(0x1136f7d0), (0x1u));
  /* 1135073e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11350741 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11350744 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11350747:;
  /* 11350747 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1135074a push ecx */
  push32((uint32_t)(ECX));
  /* 1135074b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 1135074e push edx */
  push32((uint32_t)(EDX));
  /* 1135074f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11350752 push eax */
  push32((uint32_t)(EAX));
  /* 11350753 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11350756 push ecx */
  push32((uint32_t)(ECX));
  /* 11350757 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1135075a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1135075c push eax */
  push32((uint32_t)(EAX));
  /* 1135075d call 0x11350820 */
  push32(0x11350762u); f_11350820();
  /* 11350762 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11350765 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11350768 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1135076b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1135076e jmp 0x113507dd */
  goto L_113507dd;
L_11350770:;
  /* 11350770 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11350773 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11350775 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11350777 mov ecx, dword ptr [0x1136dc98] */
  ECX = (r32((uint32_t)(0x1136dc98)));
  /* 1135077d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1135077f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11350783 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11350789 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1135078b je 0x113507b8 */
  if (C.zf) goto L_113507b8;
  /* 1135078d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11350791 jbe 0x113507b8 */
  if ((C.cf||C.zf)) goto L_113507b8;
  /* 11350793 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11350796 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11350799 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1135079b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1135079d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113507a0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113507a3 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 113507a6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113507a9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113507ac mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 113507af mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113507b2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113507b5 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_113507b8:;
  /* 113507b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113507bb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113507be mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 113507c0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 113507c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113507c5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113507c8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 113507cb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113507ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113507d1 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 113507d4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113507d7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113507da mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_113507dd:;
  /* 113507dd jmp 0x113506f1 */
  goto L_113506f1;
L_113507e2:;
  /* 113507e2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113507e6 je 0x113507f4 */
  if (C.zf) goto L_113507f4;
  /* 113507e8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 113507ea call 0x11346df0 */
  push32(0x113507efu); f_11346df0();
  /* 113507ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113507f2 jmp 0x113507ff */
  goto L_113507ff;
L_113507f4:;
  /* 113507f4 push 0x1136f7f4 */
  push32((uint32_t)(0x1136f7f4u));
  /* 113507f9 call dword ptr [0x11371328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371328))), 0x113507ffu);
L_113507ff:;
  /* 113507ff cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11350803 jbe 0x11350813 */
  if ((C.cf||C.zf)) goto L_11350813;
  /* 11350805 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11350808 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1135080b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1135080e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11350811 jmp 0x11350815 */
  goto L_11350815;
L_11350813:;
  /* 11350813 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11350815:;
  /* 11350815 mov esp, ebp */
  ESP = (EBP);
  /* 11350817 pop ebp */
  EBP = (pop32());
  /* 11350818 ret  */
  ESPCHK(0x11350690u, _esp0);
  ESP += 4; return;
}

/* FUN_10010820 @ 0x11350820 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_11350820(void) {
  FTRACE(0x11350820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11350820 push ebp */
  push32((uint32_t)(EBP));
  /* 11350821 mov ebp, esp */
  EBP = (ESP);
  /* 11350823 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11350826 push esi */
  push32((uint32_t)(ESI));
  /* 11350827 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1135082b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1135082e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11350831 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11350834 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11350837 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1135083b ja 0x11350d88 */
  if ((!C.cf&&!C.zf)) goto L_11350d88;
  /* 11350841 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11350844 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11350846 mov dl, byte ptr [eax + 0x11350de9] */
  DL = (r8((uint32_t)(EAX + 0x11350de9)));
  /* 1135084c jmp dword ptr [edx*4 + 0x11350d8d] */
  switch (EDX) {
    case 0: goto L_11350d66;
    case 1: goto L_11350875;
    case 2: goto L_113508bb;
    case 3: goto L_11350a08;
    case 4: goto L_11350a30;
    case 5: goto L_11350acf;
    case 6: goto L_11350b3b;
    case 7: goto L_11350b64;
    case 8: goto L_11350ba5;
    case 9: goto L_11350c87;
    case 10: goto L_11350cee;
    case 11: goto L_11350d3b;
    case 12: goto L_11350853;
    case 13: goto L_11350898;
    case 14: goto L_113508de;
    case 15: goto L_113509de;
    case 16: goto L_11350a75;
    case 17: goto L_11350aa2;
    case 18: goto L_11350af7;
    case 19: goto L_11350b7b;
    case 20: goto L_11350c29;
    case 21: goto L_11350cb8;
    case 22: goto L_11350d88;
    default: x86_unimpl("switch@0x1135084c out of table"); return;
  }
L_11350853:;
  /* 11350853 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11350856 push ecx */
  push32((uint32_t)(ECX));
  /* 11350857 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1135085a push edx */
  push32((uint32_t)(EDX));
  /* 1135085b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1135085e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11350861 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11350864 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11350867 push eax */
  push32((uint32_t)(EAX));
  /* 11350868 call 0x11350e40 */
  push32(0x1135086du); f_11350e40();
  /* 1135086d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11350870 jmp 0x11350d88 */
  goto L_11350d88;
L_11350875:;
  /* 11350875 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11350878 push ecx */
  push32((uint32_t)(ECX));
  /* 11350879 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1135087c push edx */
  push32((uint32_t)(EDX));
  /* 1135087d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11350880 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11350883 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11350886 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 1135088a push eax */
  push32((uint32_t)(EAX));
  /* 1135088b call 0x11350e40 */
  push32(0x11350890u); f_11350e40();
  /* 11350890 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11350893 jmp 0x11350d88 */
  goto L_11350d88;
L_11350898:;
  /* 11350898 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1135089b push ecx */
  push32((uint32_t)(ECX));
  /* 1135089c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1135089f push edx */
  push32((uint32_t)(EDX));
  /* 113508a0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113508a3 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 113508a6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113508a9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 113508ad push eax */
  push32((uint32_t)(EAX));
  /* 113508ae call 0x11350e40 */
  push32(0x113508b3u); f_11350e40();
  /* 113508b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113508b6 jmp 0x11350d88 */
  goto L_11350d88;
L_113508bb:;
  /* 113508bb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113508be push ecx */
  push32((uint32_t)(ECX));
  /* 113508bf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113508c2 push edx */
  push32((uint32_t)(EDX));
  /* 113508c3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113508c6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 113508c9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113508cc mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 113508d0 push eax */
  push32((uint32_t)(EAX));
  /* 113508d1 call 0x11350e40 */
  push32(0x113508d6u); f_11350e40();
  /* 113508d6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113508d9 jmp 0x11350d88 */
  goto L_11350d88;
L_113508de:;
  /* 113508de cmp dword ptr [0x1136f7d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f7d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113508e5 je 0x11350966 */
  if (C.zf) goto L_11350966;
  /* 113508e7 mov dword ptr [0x1136f7d0], 0 */
  w32((uint32_t)(0x1136f7d0), (0x0u));
  /* 113508f1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 113508f4 push ecx */
  push32((uint32_t)(ECX));
  /* 113508f5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113508f8 push edx */
  push32((uint32_t)(EDX));
  /* 113508f9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113508fc push eax */
  push32((uint32_t)(EAX));
  /* 113508fd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11350900 push ecx */
  push32((uint32_t)(ECX));
  /* 11350901 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11350904 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 1135090a push eax */
  push32((uint32_t)(EAX));
  /* 1135090b call 0x11350ff0 */
  push32(0x11350910u); f_11350ff0();
  /* 11350910 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11350913 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11350916 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11350919 jne 0x11350920 */
  if (!C.zf) goto L_11350920;
  /* 1135091b jmp 0x11350d88 */
  goto L_11350d88;
L_11350920:;
  /* 11350920 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11350923 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11350925 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 11350928 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1135092b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1135092d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11350930 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11350933 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11350935 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11350938 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1135093a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1135093d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11350940 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11350942 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11350945 push ecx */
  push32((uint32_t)(ECX));
  /* 11350946 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11350949 push edx */
  push32((uint32_t)(EDX));
  /* 1135094a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1135094d push eax */
  push32((uint32_t)(EAX));
  /* 1135094e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11350951 push ecx */
  push32((uint32_t)(ECX));
  /* 11350952 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11350955 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 1135095b push eax */
  push32((uint32_t)(EAX));
  /* 1135095c call 0x11350ff0 */
  push32(0x11350961u); f_11350ff0();
  /* 11350961 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11350964 jmp 0x113509d9 */
  goto L_113509d9;
L_11350966:;
  /* 11350966 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11350969 push ecx */
  push32((uint32_t)(ECX));
  /* 1135096a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1135096d push edx */
  push32((uint32_t)(EDX));
  /* 1135096e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11350971 push eax */
  push32((uint32_t)(EAX));
  /* 11350972 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11350975 push ecx */
  push32((uint32_t)(ECX));
  /* 11350976 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11350979 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 1135097f push eax */
  push32((uint32_t)(EAX));
  /* 11350980 call 0x11350ff0 */
  push32(0x11350985u); f_11350ff0();
  /* 11350985 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11350988 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1135098b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1135098e jne 0x11350995 */
  if (!C.zf) goto L_11350995;
  /* 11350990 jmp 0x11350d88 */
  goto L_11350d88;
L_11350995:;
  /* 11350995 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11350998 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1135099a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 1135099d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113509a0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113509a2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113509a5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113509a8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 113509aa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113509ad mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113509af sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113509b2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113509b5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 113509b7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 113509ba push ecx */
  push32((uint32_t)(ECX));
  /* 113509bb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113509be push edx */
  push32((uint32_t)(EDX));
  /* 113509bf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113509c2 push eax */
  push32((uint32_t)(EAX));
  /* 113509c3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113509c6 push ecx */
  push32((uint32_t)(ECX));
  /* 113509c7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113509ca mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 113509d0 push eax */
  push32((uint32_t)(EAX));
  /* 113509d1 call 0x11350ff0 */
  push32(0x113509d6u); f_11350ff0();
  /* 113509d6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113509d9:;
  /* 113509d9 jmp 0x11350d88 */
  goto L_11350d88;
L_113509de:;
  /* 113509de mov ecx, dword ptr [0x1136f7d0] */
  ECX = (r32((uint32_t)(0x1136f7d0)));
  /* 113509e4 mov dword ptr [0x1136f7e0], ecx */
  w32((uint32_t)(0x1136f7e0), (ECX));
  /* 113509ea mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113509ed push edx */
  push32((uint32_t)(EDX));
  /* 113509ee mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113509f1 push eax */
  push32((uint32_t)(EAX));
  /* 113509f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 113509f4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113509f7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 113509fa push edx */
  push32((uint32_t)(EDX));
  /* 113509fb call 0x11350e90 */
  push32(0x11350a00u); f_11350e90();
  /* 11350a00 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11350a03 jmp 0x11350d88 */
  goto L_11350d88;
L_11350a08:;
  /* 11350a08 mov eax, dword ptr [0x1136f7d0] */
  EAX = (r32((uint32_t)(0x1136f7d0)));
  /* 11350a0d mov dword ptr [0x1136f7e0], eax */
  w32((uint32_t)(0x1136f7e0), (EAX));
  /* 11350a12 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11350a15 push ecx */
  push32((uint32_t)(ECX));
  /* 11350a16 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11350a19 push edx */
  push32((uint32_t)(EDX));
  /* 11350a1a push 2 */
  push32((uint32_t)(0x2u));
  /* 11350a1c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11350a1f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11350a22 push ecx */
  push32((uint32_t)(ECX));
  /* 11350a23 call 0x11350e90 */
  push32(0x11350a28u); f_11350e90();
  /* 11350a28 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11350a2b jmp 0x11350d88 */
  goto L_11350d88;
L_11350a30:;
  /* 11350a30 mov edx, dword ptr [0x1136f7d0] */
  EDX = (r32((uint32_t)(0x1136f7d0)));
  /* 11350a36 mov dword ptr [0x1136f7e0], edx */
  w32((uint32_t)(0x1136f7e0), (EDX));
  /* 11350a3c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11350a3f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 11350a42 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11350a43 mov ecx, 0xc */
  ECX = (0xcu);
  /* 11350a48 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11350a4a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11350a4d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11350a51 jne 0x11350a5a */
  if (!C.zf) goto L_11350a5a;
  /* 11350a53 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_11350a5a:;
  /* 11350a5a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11350a5d push edx */
  push32((uint32_t)(EDX));
  /* 11350a5e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11350a61 push eax */
  push32((uint32_t)(EAX));
  /* 11350a62 push 2 */
  push32((uint32_t)(0x2u));
  /* 11350a64 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11350a67 push ecx */
  push32((uint32_t)(ECX));
  /* 11350a68 call 0x11350e90 */
  push32(0x11350a6du); f_11350e90();
  /* 11350a6d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11350a70 jmp 0x11350d88 */
  goto L_11350d88;
L_11350a75:;
  /* 11350a75 mov edx, dword ptr [0x1136f7d0] */
  EDX = (r32((uint32_t)(0x1136f7d0)));
  /* 11350a7b mov dword ptr [0x1136f7e0], edx */
  w32((uint32_t)(0x1136f7e0), (EDX));
  /* 11350a81 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11350a84 push eax */
  push32((uint32_t)(EAX));
  /* 11350a85 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11350a88 push ecx */
  push32((uint32_t)(ECX));
  /* 11350a89 push 3 */
  push32((uint32_t)(0x3u));
  /* 11350a8b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11350a8e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11350a91 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11350a94 push eax */
  push32((uint32_t)(EAX));
  /* 11350a95 call 0x11350e90 */
  push32(0x11350a9au); f_11350e90();
  /* 11350a9a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11350a9d jmp 0x11350d88 */
  goto L_11350d88;
L_11350aa2:;
  /* 11350aa2 mov ecx, dword ptr [0x1136f7d0] */
  ECX = (r32((uint32_t)(0x1136f7d0)));
  /* 11350aa8 mov dword ptr [0x1136f7e0], ecx */
  w32((uint32_t)(0x1136f7e0), (ECX));
  /* 11350aae mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11350ab1 push edx */
  push32((uint32_t)(EDX));
  /* 11350ab2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11350ab5 push eax */
  push32((uint32_t)(EAX));
  /* 11350ab6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11350ab8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11350abb mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11350abe add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11350ac1 push edx */
  push32((uint32_t)(EDX));
  /* 11350ac2 call 0x11350e90 */
  push32(0x11350ac7u); f_11350e90();
  /* 11350ac7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11350aca jmp 0x11350d88 */
  goto L_11350d88;
L_11350acf:;
  /* 11350acf mov eax, dword ptr [0x1136f7d0] */
  EAX = (r32((uint32_t)(0x1136f7d0)));
  /* 11350ad4 mov dword ptr [0x1136f7e0], eax */
  w32((uint32_t)(0x1136f7e0), (EAX));
  /* 11350ad9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11350adc push ecx */
  push32((uint32_t)(ECX));
  /* 11350add mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11350ae0 push edx */
  push32((uint32_t)(EDX));
  /* 11350ae1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11350ae3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11350ae6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11350ae9 push ecx */
  push32((uint32_t)(ECX));
  /* 11350aea call 0x11350e90 */
  push32(0x11350aefu); f_11350e90();
  /* 11350aef add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11350af2 jmp 0x11350d88 */
  goto L_11350d88;
L_11350af7:;
  /* 11350af7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11350afa cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11350afe jg 0x11350b1c */
  if ((!C.zf&&C.sf==C.of)) goto L_11350b1c;
  /* 11350b00 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11350b03 push eax */
  push32((uint32_t)(EAX));
  /* 11350b04 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11350b07 push ecx */
  push32((uint32_t)(ECX));
  /* 11350b08 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11350b0b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 11350b11 push eax */
  push32((uint32_t)(EAX));
  /* 11350b12 call 0x11350e40 */
  push32(0x11350b17u); f_11350e40();
  /* 11350b17 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11350b1a jmp 0x11350b36 */
  goto L_11350b36;
L_11350b1c:;
  /* 11350b1c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11350b1f push ecx */
  push32((uint32_t)(ECX));
  /* 11350b20 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11350b23 push edx */
  push32((uint32_t)(EDX));
  /* 11350b24 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11350b27 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 11350b2d push ecx */
  push32((uint32_t)(ECX));
  /* 11350b2e call 0x11350e40 */
  push32(0x11350b33u); f_11350e40();
  /* 11350b33 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11350b36:;
  /* 11350b36 jmp 0x11350d88 */
  goto L_11350d88;
L_11350b3b:;
  /* 11350b3b mov edx, dword ptr [0x1136f7d0] */
  EDX = (r32((uint32_t)(0x1136f7d0)));
  /* 11350b41 mov dword ptr [0x1136f7e0], edx */
  w32((uint32_t)(0x1136f7e0), (EDX));
  /* 11350b47 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11350b4a push eax */
  push32((uint32_t)(EAX));
  /* 11350b4b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11350b4e push ecx */
  push32((uint32_t)(ECX));
  /* 11350b4f push 2 */
  push32((uint32_t)(0x2u));
  /* 11350b51 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11350b54 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11350b56 push eax */
  push32((uint32_t)(EAX));
  /* 11350b57 call 0x11350e90 */
  push32(0x11350b5cu); f_11350e90();
  /* 11350b5c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11350b5f jmp 0x11350d88 */
  goto L_11350d88;
L_11350b64:;
  /* 11350b64 mov ecx, dword ptr [0x1136f7d0] */
  ECX = (r32((uint32_t)(0x1136f7d0)));
  /* 11350b6a mov dword ptr [0x1136f7e0], ecx */
  w32((uint32_t)(0x1136f7e0), (ECX));
  /* 11350b70 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11350b73 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11350b76 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11350b79 jmp 0x11350bcd */
  goto L_11350bcd;
L_11350b7b:;
  /* 11350b7b mov ecx, dword ptr [0x1136f7d0] */
  ECX = (r32((uint32_t)(0x1136f7d0)));
  /* 11350b81 mov dword ptr [0x1136f7e0], ecx */
  w32((uint32_t)(0x1136f7e0), (ECX));
  /* 11350b87 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11350b8a push edx */
  push32((uint32_t)(EDX));
  /* 11350b8b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11350b8e push eax */
  push32((uint32_t)(EAX));
  /* 11350b8f push 1 */
  push32((uint32_t)(0x1u));
  /* 11350b91 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11350b94 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11350b97 push edx */
  push32((uint32_t)(EDX));
  /* 11350b98 call 0x11350e90 */
  push32(0x11350b9du); f_11350e90();
  /* 11350b9d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11350ba0 jmp 0x11350d88 */
  goto L_11350d88;
L_11350ba5:;
  /* 11350ba5 mov eax, dword ptr [0x1136f7d0] */
  EAX = (r32((uint32_t)(0x1136f7d0)));
  /* 11350baa mov dword ptr [0x1136f7e0], eax */
  w32((uint32_t)(0x1136f7e0), (EAX));
  /* 11350baf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11350bb2 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11350bb6 jne 0x11350bc1 */
  if (!C.zf) goto L_11350bc1;
  /* 11350bb8 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 11350bbf jmp 0x11350bcd */
  goto L_11350bcd;
L_11350bc1:;
  /* 11350bc1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11350bc4 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11350bc7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11350bca mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11350bcd:;
  /* 11350bcd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11350bd0 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11350bd3 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11350bd6 jge 0x11350be1 */
  if ((C.sf==C.of)) goto L_11350be1;
  /* 11350bd8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11350bdf jmp 0x11350c0e */
  goto L_11350c0e;
L_11350be1:;
  /* 11350be1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11350be4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11350be7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11350be8 mov ecx, 7 */
  ECX = (0x7u);
  /* 11350bed idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11350bef mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11350bf2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11350bf5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11350bf8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11350bf9 mov ecx, 7 */
  ECX = (0x7u);
  /* 11350bfe idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11350c00 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11350c03 jl 0x11350c0e */
  if ((C.sf!=C.of)) goto L_11350c0e;
  /* 11350c05 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11350c08 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11350c0b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11350c0e:;
  /* 11350c0e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11350c11 push eax */
  push32((uint32_t)(EAX));
  /* 11350c12 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11350c15 push ecx */
  push32((uint32_t)(ECX));
  /* 11350c16 push 2 */
  push32((uint32_t)(0x2u));
  /* 11350c18 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11350c1b push edx */
  push32((uint32_t)(EDX));
  /* 11350c1c call 0x11350e90 */
  push32(0x11350c21u); f_11350e90();
  /* 11350c21 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11350c24 jmp 0x11350d88 */
  goto L_11350d88;
L_11350c29:;
  /* 11350c29 cmp dword ptr [0x1136f7d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f7d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11350c30 je 0x11350c60 */
  if (C.zf) goto L_11350c60;
  /* 11350c32 mov dword ptr [0x1136f7d0], 0 */
  w32((uint32_t)(0x1136f7d0), (0x0u));
  /* 11350c3c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11350c3f push eax */
  push32((uint32_t)(EAX));
  /* 11350c40 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11350c43 push ecx */
  push32((uint32_t)(ECX));
  /* 11350c44 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11350c47 push edx */
  push32((uint32_t)(EDX));
  /* 11350c48 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11350c4b push eax */
  push32((uint32_t)(EAX));
  /* 11350c4c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11350c4f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 11350c55 push edx */
  push32((uint32_t)(EDX));
  /* 11350c56 call 0x11350ff0 */
  push32(0x11350c5bu); f_11350ff0();
  /* 11350c5b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11350c5e jmp 0x11350c82 */
  goto L_11350c82;
L_11350c60:;
  /* 11350c60 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11350c63 push eax */
  push32((uint32_t)(EAX));
  /* 11350c64 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11350c67 push ecx */
  push32((uint32_t)(ECX));
  /* 11350c68 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11350c6b push edx */
  push32((uint32_t)(EDX));
  /* 11350c6c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11350c6f push eax */
  push32((uint32_t)(EAX));
  /* 11350c70 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11350c73 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 11350c79 push edx */
  push32((uint32_t)(EDX));
  /* 11350c7a call 0x11350ff0 */
  push32(0x11350c7fu); f_11350ff0();
  /* 11350c7f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11350c82:;
  /* 11350c82 jmp 0x11350d88 */
  goto L_11350d88;
L_11350c87:;
  /* 11350c87 mov dword ptr [0x1136f7d0], 0 */
  w32((uint32_t)(0x1136f7d0), (0x0u));
  /* 11350c91 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11350c94 push eax */
  push32((uint32_t)(EAX));
  /* 11350c95 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11350c98 push ecx */
  push32((uint32_t)(ECX));
  /* 11350c99 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11350c9c push edx */
  push32((uint32_t)(EDX));
  /* 11350c9d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11350ca0 push eax */
  push32((uint32_t)(EAX));
  /* 11350ca1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11350ca4 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 11350caa push edx */
  push32((uint32_t)(EDX));
  /* 11350cab call 0x11350ff0 */
  push32(0x11350cb0u); f_11350ff0();
  /* 11350cb0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11350cb3 jmp 0x11350d88 */
  goto L_11350d88;
L_11350cb8:;
  /* 11350cb8 mov eax, dword ptr [0x1136f7d0] */
  EAX = (r32((uint32_t)(0x1136f7d0)));
  /* 11350cbd mov dword ptr [0x1136f7e0], eax */
  w32((uint32_t)(0x1136f7e0), (EAX));
  /* 11350cc2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11350cc5 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 11350cc8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11350cc9 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11350cce idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11350cd0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11350cd3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11350cd6 push edx */
  push32((uint32_t)(EDX));
  /* 11350cd7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11350cda push eax */
  push32((uint32_t)(EAX));
  /* 11350cdb push 2 */
  push32((uint32_t)(0x2u));
  /* 11350cdd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11350ce0 push ecx */
  push32((uint32_t)(ECX));
  /* 11350ce1 call 0x11350e90 */
  push32(0x11350ce6u); f_11350e90();
  /* 11350ce6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11350ce9 jmp 0x11350d88 */
  goto L_11350d88;
L_11350cee:;
  /* 11350cee mov edx, dword ptr [0x1136f7d0] */
  EDX = (r32((uint32_t)(0x1136f7d0)));
  /* 11350cf4 mov dword ptr [0x1136f7e0], edx */
  w32((uint32_t)(0x1136f7e0), (EDX));
  /* 11350cfa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11350cfd mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 11350d00 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11350d01 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11350d06 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11350d08 mov ecx, eax */
  ECX = (EAX);
  /* 11350d0a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11350d0d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11350d10 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11350d13 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11350d16 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11350d17 mov esi, 0x64 */
  ESI = (0x64u);
  /* 11350d1c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11350d1e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11350d20 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11350d23 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11350d26 push eax */
  push32((uint32_t)(EAX));
  /* 11350d27 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11350d2a push ecx */
  push32((uint32_t)(ECX));
  /* 11350d2b push 4 */
  push32((uint32_t)(0x4u));
  /* 11350d2d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11350d30 push edx */
  push32((uint32_t)(EDX));
  /* 11350d31 call 0x11350e90 */
  push32(0x11350d36u); f_11350e90();
  /* 11350d36 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11350d39 jmp 0x11350d88 */
  goto L_11350d88;
L_11350d3b:;
  /* 11350d3b call 0x11351e50 */
  push32(0x11350d40u); f_11351e50();
  /* 11350d40 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11350d43 push eax */
  push32((uint32_t)(EAX));
  /* 11350d44 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11350d47 push ecx */
  push32((uint32_t)(ECX));
  /* 11350d48 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11350d4b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11350d4d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11350d51 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 11350d54 mov ecx, dword ptr [eax*4 + 0x1136ee1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1136ee1c)));
  /* 11350d5b push ecx */
  push32((uint32_t)(ECX));
  /* 11350d5c call 0x11350e40 */
  push32(0x11350d61u); f_11350e40();
  /* 11350d61 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11350d64 jmp 0x11350d88 */
  goto L_11350d88;
L_11350d66:;
  /* 11350d66 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11350d69 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11350d6b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 11350d6e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11350d71 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11350d73 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11350d76 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11350d79 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11350d7b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11350d7e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11350d80 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11350d83 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11350d86 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11350d88:;
  /* 11350d88 pop esi */
  ESI = (pop32());
  /* 11350d89 mov esp, ebp */
  ESP = (EBP);
  /* 11350d8b pop ebp */
  EBP = (pop32());
  /* 11350d8c ret  */
  ESPCHK(0x11350820u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x11350e40 (72 bytes, 30 insns) */
void f_11350e40(void) {
  FTRACE(0x11350e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11350e40 push ebp */
  push32((uint32_t)(EBP));
  /* 11350e41 mov ebp, esp */
  EBP = (ESP);
L_11350e43:;
  /* 11350e43 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11350e46 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11350e49 je 0x11350e86 */
  if (C.zf) goto L_11350e86;
  /* 11350e4b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11350e4e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11350e51 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11350e53 je 0x11350e86 */
  if (C.zf) goto L_11350e86;
  /* 11350e55 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11350e58 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11350e5a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11350e5d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11350e5f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11350e61 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11350e64 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11350e66 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11350e69 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11350e6c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11350e6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11350e71 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11350e74 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11350e77 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11350e7a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11350e7c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11350e7f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11350e82 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11350e84 jmp 0x11350e43 */
  goto L_11350e43;
L_11350e86:;
  /* 11350e86 pop ebp */
  EBP = (pop32());
  /* 11350e87 ret  */
  ESPCHK(0x11350e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10010e90 @ 0x11350e90 (173 bytes, 64 insns) */
void f_11350e90(void) {
  FTRACE(0x11350e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11350e90 push ebp */
  push32((uint32_t)(EBP));
  /* 11350e91 mov ebp, esp */
  EBP = (ESP);
  /* 11350e93 push ecx */
  push32((uint32_t)(ECX));
  /* 11350e94 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11350e9b cmp dword ptr [0x1136f7e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f7e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11350ea2 je 0x11350eba */
  if (C.zf) goto L_11350eba;
  /* 11350ea4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11350ea7 push eax */
  push32((uint32_t)(EAX));
  /* 11350ea8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11350eab push ecx */
  push32((uint32_t)(ECX));
  /* 11350eac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11350eaf push edx */
  push32((uint32_t)(EDX));
  /* 11350eb0 call 0x11350f40 */
  push32(0x11350eb5u); f_11350f40();
  /* 11350eb5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11350eb8 jmp 0x11350f39 */
  goto L_11350f39;
L_11350eba:;
  /* 11350eba mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11350ebd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11350ec0 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11350ec2 jae 0x11350f30 */
  if (!C.cf) goto L_11350f30;
  /* 11350ec4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11350ec7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11350eca mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11350ecd jmp 0x11350ed8 */
  goto L_11350ed8;
L_11350ecf:;
  /* 11350ecf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11350ed2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11350ed5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11350ed8:;
  /* 11350ed8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11350edb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11350ede test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11350ee0 je 0x11350f14 */
  if (C.zf) goto L_11350f14;
  /* 11350ee2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11350ee5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11350ee6 mov ecx, 0xa */
  ECX = (0xau);
  /* 11350eeb idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11350eed add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11350ef0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11350ef3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11350ef5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11350ef8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 11350efb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11350efe cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11350eff mov ecx, 0xa */
  ECX = (0xau);
  /* 11350f04 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11350f06 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11350f09 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11350f0c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11350f0f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11350f12 jmp 0x11350ecf */
  goto L_11350ecf;
L_11350f14:;
  /* 11350f14 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11350f17 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11350f19 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11350f1c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11350f1f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11350f21 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11350f24 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11350f26 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11350f29 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11350f2c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11350f2e jmp 0x11350f39 */
  goto L_11350f39;
L_11350f30:;
  /* 11350f30 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11350f33 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11350f39:;
  /* 11350f39 mov esp, ebp */
  ESP = (EBP);
  /* 11350f3b pop ebp */
  EBP = (pop32());
  /* 11350f3c ret  */
  ESPCHK(0x11350e90u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x11350f40 (172 bytes, 65 insns) */
void f_11350f40(void) {
  FTRACE(0x11350f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11350f40 push ebp */
  push32((uint32_t)(EBP));
  /* 11350f41 mov ebp, esp */
  EBP = (ESP);
  /* 11350f43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11350f46 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11350f49 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11350f4b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11350f4e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11350f51 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11350f54 jbe 0x11350f9b */
  if ((C.cf||C.zf)) goto L_11350f9b;
L_11350f56:;
  /* 11350f56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11350f59 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11350f5a mov ecx, 0xa */
  ECX = (0xau);
  /* 11350f5f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11350f61 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11350f64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11350f67 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11350f69 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11350f6c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11350f6f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11350f72 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11350f75 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11350f77 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11350f7a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11350f7d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11350f7f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11350f82 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11350f83 mov ecx, 0xa */
  ECX = (0xau);
  /* 11350f88 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11350f8a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11350f8d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11350f91 jle 0x11350f9b */
  if ((C.zf||C.sf!=C.of)) goto L_11350f9b;
  /* 11350f93 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11350f96 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11350f99 ja 0x11350f56 */
  if ((!C.cf&&!C.zf)) goto L_11350f56;
L_11350f9b:;
  /* 11350f9b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11350f9e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11350fa0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11350fa3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11350fa6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11350fa9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11350fab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11350fae sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11350fb1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11350fb4:;
  /* 11350fb4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11350fb7 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11350fb9 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 11350fbc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11350fbf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11350fc2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11350fc4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11350fc6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11350fc9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11350fcc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11350fcf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11350fd2 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11350fd5 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11350fd7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11350fda add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11350fdd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11350fe0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11350fe3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11350fe6 jb 0x11350fb4 */
  if (C.cf) goto L_11350fb4;
  /* 11350fe8 mov esp, ebp */
  ESP = (EBP);
  /* 11350fea pop ebp */
  EBP = (pop32());
  /* 11350feb ret  */
  ESPCHK(0x11350f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ff0 @ 0x11350ff0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_11350ff0(void) {
  FTRACE(0x11350ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11350ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 11350ff1 mov ebp, esp */
  EBP = (ESP);
  /* 11350ff3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11350ff6:;
  /* 11350ff6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11350ff9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11350ffc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11350ffe je 0x1135146c */
  if (C.zf) goto L_1135146c;
  /* 11351004 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11351007 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1135100a je 0x1135146c */
  if (C.zf) goto L_1135146c;
  /* 11351010 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11351014 mov dword ptr [0x1136f7e0], 0 */
  w32((uint32_t)(0x1136f7e0), (0x0u));
  /* 1135101e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11351025 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11351028 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1135102b jmp 0x11351036 */
  goto L_11351036;
L_1135102d:;
  /* 1135102d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11351030 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11351033 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11351036:;
  /* 11351036 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11351039 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1135103c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1135103f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11351042 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11351045 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11351048 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1135104b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1135104d jne 0x11351051 */
  if (!C.zf) goto L_11351051;
  /* 1135104f jmp 0x1135102d */
  goto L_1135102d;
L_11351051:;
  /* 11351051 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11351054 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11351057 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1135105a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1135105d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11351060 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11351063 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11351066 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11351069 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1135106c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11351070 ja 0x113513c0 */
  if ((!C.cf&&!C.zf)) goto L_113513c0;
  /* 11351076 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11351079 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1135107b mov al, byte ptr [ecx + 0x1135149c] */
  AL = (r8((uint32_t)(ECX + 0x1135149c)));
  /* 11351081 jmp dword ptr [eax*4 + 0x11351470] */
  switch (EAX) {
    case 0: goto L_113512df;
    case 1: goto L_113511c3;
    case 2: goto L_1135114e;
    case 3: goto L_11351088;
    case 4: goto L_113510c6;
    case 5: goto L_11351127;
    case 6: goto L_11351175;
    case 7: goto L_1135119c;
    case 8: goto L_1135120a;
    case 9: goto L_11351104;
    case 10: goto L_113513c0;
    default: x86_unimpl("switch@0x11351081 out of table"); return;
  }
L_11351088:;
  /* 11351088 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1135108b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1135108e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11351091 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11351094 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11351097 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1135109b ja 0x113510c1 */
  if ((!C.cf&&!C.zf)) goto L_113510c1;
  /* 1135109d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113510a0 jmp dword ptr [ecx*4 + 0x113514ef] */
  switch (ECX) {
    case 0: goto L_113510a7;
    case 1: goto L_113510b1;
    case 2: goto L_113510b7;
    case 3: goto L_113510bd;
    case 4: goto L_113510e5;
    case 5: goto L_113510ef;
    case 6: goto L_113510f5;
    case 7: goto L_113510fb;
    default: x86_unimpl("switch@0x113510a0 out of table"); return;
  }
L_113510a7:;
  /* 113510a7 mov dword ptr [0x1136f7e0], 1 */
  w32((uint32_t)(0x1136f7e0), (0x1u));
L_113510b1:;
  /* 113510b1 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 113510b5 jmp 0x113510c1 */
  goto L_113510c1;
L_113510b7:;
  /* 113510b7 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 113510bb jmp 0x113510c1 */
  goto L_113510c1;
L_113510bd:;
  /* 113510bd mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_113510c1:;
  /* 113510c1 jmp 0x113513c0 */
  goto L_113513c0;
L_113510c6:;
  /* 113510c6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113510c9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 113510cc mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113510cf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113510d2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 113510d5 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113510d9 ja 0x113510ff */
  if ((!C.cf&&!C.zf)) goto L_113510ff;
  /* 113510db mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113510de jmp dword ptr [ecx*4 + 0x113514ff] */
  switch (ECX) {
    case 0: goto L_113510e5;
    case 1: goto L_113510ef;
    case 2: goto L_113510f5;
    case 3: goto L_113510fb;
    default: x86_unimpl("switch@0x113510de out of table"); return;
  }
L_113510e5:;
  /* 113510e5 mov dword ptr [0x1136f7e0], 1 */
  w32((uint32_t)(0x1136f7e0), (0x1u));
L_113510ef:;
  /* 113510ef mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 113510f3 jmp 0x113510ff */
  goto L_113510ff;
L_113510f5:;
  /* 113510f5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 113510f9 jmp 0x113510ff */
  goto L_113510ff;
L_113510fb:;
  /* 113510fb mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_113510ff:;
  /* 113510ff jmp 0x113513c0 */
  goto L_113513c0;
L_11351104:;
  /* 11351104 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11351107 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1135110a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1135110e je 0x11351118 */
  if (C.zf) goto L_11351118;
  /* 11351110 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11351114 je 0x1135111e */
  if (C.zf) goto L_1135111e;
  /* 11351116 jmp 0x11351122 */
  goto L_11351122;
L_11351118:;
  /* 11351118 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 1135111c jmp 0x11351122 */
  goto L_11351122;
L_1135111e:;
  /* 1135111e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_11351122:;
  /* 11351122 jmp 0x113513c0 */
  goto L_113513c0;
L_11351127:;
  /* 11351127 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1135112a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1135112d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11351131 je 0x1135113b */
  if (C.zf) goto L_1135113b;
  /* 11351133 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11351137 je 0x11351145 */
  if (C.zf) goto L_11351145;
  /* 11351139 jmp 0x11351149 */
  goto L_11351149;
L_1135113b:;
  /* 1135113b mov dword ptr [0x1136f7e0], 1 */
  w32((uint32_t)(0x1136f7e0), (0x1u));
L_11351145:;
  /* 11351145 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_11351149:;
  /* 11351149 jmp 0x113513c0 */
  goto L_113513c0;
L_1135114e:;
  /* 1135114e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11351151 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11351154 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11351158 je 0x11351162 */
  if (C.zf) goto L_11351162;
  /* 1135115a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1135115e je 0x1135116c */
  if (C.zf) goto L_1135116c;
  /* 11351160 jmp 0x11351170 */
  goto L_11351170;
L_11351162:;
  /* 11351162 mov dword ptr [0x1136f7e0], 1 */
  w32((uint32_t)(0x1136f7e0), (0x1u));
L_1135116c:;
  /* 1135116c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_11351170:;
  /* 11351170 jmp 0x113513c0 */
  goto L_113513c0;
L_11351175:;
  /* 11351175 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11351178 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 1135117b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1135117f je 0x11351189 */
  if (C.zf) goto L_11351189;
  /* 11351181 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11351185 je 0x11351193 */
  if (C.zf) goto L_11351193;
  /* 11351187 jmp 0x11351197 */
  goto L_11351197;
L_11351189:;
  /* 11351189 mov dword ptr [0x1136f7e0], 1 */
  w32((uint32_t)(0x1136f7e0), (0x1u));
L_11351193:;
  /* 11351193 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_11351197:;
  /* 11351197 jmp 0x113513c0 */
  goto L_113513c0;
L_1135119c:;
  /* 1135119c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1135119f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 113511a2 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113511a6 je 0x113511b0 */
  if (C.zf) goto L_113511b0;
  /* 113511a8 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113511ac je 0x113511ba */
  if (C.zf) goto L_113511ba;
  /* 113511ae jmp 0x113511be */
  goto L_113511be;
L_113511b0:;
  /* 113511b0 mov dword ptr [0x1136f7e0], 1 */
  w32((uint32_t)(0x1136f7e0), (0x1u));
L_113511ba:;
  /* 113511ba mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_113511be:;
  /* 113511be jmp 0x113513c0 */
  goto L_113513c0;
L_113511c3:;
  /* 113511c3 push 0x1136b854 */
  push32((uint32_t)(0x1136b854u));
  /* 113511c8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113511cb push ecx */
  push32((uint32_t)(ECX));
  /* 113511cc call 0x11351a20 */
  push32(0x113511d1u); f_11351a20();
  /* 113511d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113511d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113511d6 jne 0x113511e3 */
  if (!C.zf) goto L_113511e3;
  /* 113511d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113511db add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113511de mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113511e1 jmp 0x11351201 */
  goto L_11351201;
L_113511e3:;
  /* 113511e3 push 0x1136b850 */
  push32((uint32_t)(0x1136b850u));
  /* 113511e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113511eb push eax */
  push32((uint32_t)(EAX));
  /* 113511ec call 0x11351a20 */
  push32(0x113511f1u); f_11351a20();
  /* 113511f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113511f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113511f6 jne 0x11351201 */
  if (!C.zf) goto L_11351201;
  /* 113511f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113511fb add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113511fe mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11351201:;
  /* 11351201 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 11351205 jmp 0x113513c0 */
  goto L_113513c0;
L_1135120a:;
  /* 1135120a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1135120d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11351211 jg 0x11351221 */
  if ((!C.zf&&C.sf==C.of)) goto L_11351221;
  /* 11351213 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11351216 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 1135121c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1135121f jmp 0x1135122d */
  goto L_1135122d;
L_11351221:;
  /* 11351221 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11351224 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 1135122a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1135122d:;
  /* 1135122d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11351231 jle 0x113512d4 */
  if ((C.zf||C.sf!=C.of)) goto L_113512d4;
  /* 11351237 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1135123a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1135123d jbe 0x113512d4 */
  if ((C.cf||C.zf)) goto L_113512d4;
  /* 11351243 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11351246 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11351248 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1135124a mov ecx, dword ptr [0x1136dc98] */
  ECX = (r32((uint32_t)(0x1136dc98)));
  /* 11351250 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11351252 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11351256 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1135125c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1135125e je 0x11351297 */
  if (C.zf) goto L_11351297;
  /* 11351260 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11351263 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11351266 jbe 0x11351297 */
  if ((C.cf||C.zf)) goto L_11351297;
  /* 11351268 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1135126b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1135126d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11351270 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11351272 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11351274 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11351277 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11351279 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1135127c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1135127f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11351281 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11351284 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11351287 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1135128a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1135128d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1135128f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11351292 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11351295 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11351297:;
  /* 11351297 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1135129a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1135129c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1135129f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113512a1 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 113512a3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113512a6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113512a8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113512ab mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113512ae mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 113512b0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113512b3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113512b6 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 113512b9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113512bc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113512be sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113512c1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113512c4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 113512c6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113512c9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113512cc mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 113512cf jmp 0x1135122d */
  goto L_1135122d;
L_113512d4:;
  /* 113512d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113512d7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 113512da jmp 0x11350ff6 */
  goto L_11350ff6;
L_113512df:;
  /* 113512df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113512e2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 113512e5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113512e7 je 0x113513b2 */
  if (C.zf) goto L_113513b2;
  /* 113512ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113512f0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113512f3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_113512f6:;
  /* 113512f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113512f9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113512fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113512fe je 0x113513b0 */
  if (C.zf) goto L_113513b0;
  /* 11351304 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11351307 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1135130a je 0x113513b0 */
  if (C.zf) goto L_113513b0;
  /* 11351310 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11351313 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11351316 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11351319 jne 0x11351329 */
  if (!C.zf) goto L_11351329;
  /* 1135131b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1135131e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11351321 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11351324 jmp 0x113513b0 */
  goto L_113513b0;
L_11351329:;
  /* 11351329 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1135132c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1135132e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11351330 mov edx, dword ptr [0x1136dc98] */
  EDX = (r32((uint32_t)(0x1136dc98)));
  /* 11351336 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11351338 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1135133c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11351341 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11351343 je 0x1135137c */
  if (C.zf) goto L_1135137c;
  /* 11351345 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11351348 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1135134b jbe 0x1135137c */
  if ((C.cf||C.zf)) goto L_1135137c;
  /* 1135134d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11351350 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11351352 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11351355 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11351357 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11351359 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1135135c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1135135e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11351361 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11351364 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11351366 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11351369 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1135136c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1135136f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11351372 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11351374 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11351377 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1135137a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1135137c:;
  /* 1135137c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1135137f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11351381 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11351384 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11351386 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11351388 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1135138b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1135138d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11351390 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11351393 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11351395 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11351398 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1135139b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1135139e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113513a1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113513a3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113513a6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113513a9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 113513ab jmp 0x113512f6 */
  goto L_113512f6;
L_113513b0:;
  /* 113513b0 jmp 0x113513bb */
  goto L_113513bb;
L_113513b2:;
  /* 113513b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113513b5 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113513b8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_113513bb:;
  /* 113513bb jmp 0x11350ff6 */
  goto L_11350ff6;
L_113513c0:;
  /* 113513c0 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 113513c4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113513c6 je 0x113513ec */
  if (C.zf) goto L_113513ec;
  /* 113513c8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113513cb push edx */
  push32((uint32_t)(EDX));
  /* 113513cc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113513cf push eax */
  push32((uint32_t)(EAX));
  /* 113513d0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113513d3 push ecx */
  push32((uint32_t)(ECX));
  /* 113513d4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113513d7 push edx */
  push32((uint32_t)(EDX));
  /* 113513d8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 113513db push eax */
  push32((uint32_t)(EAX));
  /* 113513dc call 0x11350820 */
  push32(0x113513e1u); f_11350820();
  /* 113513e1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113513e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113513e7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 113513ea jmp 0x11351467 */
  goto L_11351467;
L_113513ec:;
  /* 113513ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113513ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113513f1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113513f3 mov ecx, dword ptr [0x1136dc98] */
  ECX = (r32((uint32_t)(0x1136dc98)));
  /* 113513f9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113513fb mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 113513ff and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11351405 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11351407 je 0x11351438 */
  if (C.zf) goto L_11351438;
  /* 11351409 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1135140c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1135140e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11351411 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11351413 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11351415 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11351418 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1135141a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1135141d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11351420 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11351422 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11351425 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11351428 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1135142b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1135142e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11351430 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11351433 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11351436 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11351438:;
  /* 11351438 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1135143b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1135143d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11351440 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11351442 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11351444 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11351447 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11351449 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1135144c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1135144f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11351451 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11351454 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11351457 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1135145a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1135145d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1135145f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11351462 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11351465 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11351467:;
  /* 11351467 jmp 0x11350ff6 */
  goto L_11350ff6;
L_1135146c:;
  /* 1135146c mov esp, ebp */
  ESP = (EBP);
  /* 1135146e pop ebp */
  EBP = (pop32());
  /* 1135146f ret  */
  ESPCHK(0x11350ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011510 @ 0x11351510 (650 bytes, 178 insns) */
void f_11351510(void) {
  FTRACE(0x11351510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11351510 push ebp */
  push32((uint32_t)(EBP));
  /* 11351511 mov ebp, esp */
  EBP = (ESP);
  /* 11351513 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11351519 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1135151d jne 0x11351679 */
  if (!C.zf) goto L_11351679;
  /* 11351523 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11351526 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 1135152c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 11351532 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11351535 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1135153c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 11351546 push 0 */
  push32((uint32_t)(0x0u));
  /* 11351548 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 1135154e push edx */
  push32((uint32_t)(EDX));
  /* 1135154f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11351552 push eax */
  push32((uint32_t)(EAX));
  /* 11351553 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11351556 push ecx */
  push32((uint32_t)(ECX));
  /* 11351557 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1135155a push edx */
  push32((uint32_t)(EDX));
  /* 1135155b call 0x11352930 */
  push32(0x11351560u); f_11352930();
  /* 11351560 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11351563 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11351566 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1135156a jne 0x113515ff */
  if (!C.zf) goto L_113515ff;
  /* 11351570 call dword ptr [0x11371364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371364))), 0x11351576u);
  /* 11351576 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11351579 je 0x11351580 */
  if (C.zf) goto L_11351580;
  /* 1135157b jmp 0x1135165d */
  goto L_1135165d;
L_11351580:;
  /* 11351580 push 0 */
  push32((uint32_t)(0x0u));
  /* 11351582 push 0 */
  push32((uint32_t)(0x0u));
  /* 11351584 push 0 */
  push32((uint32_t)(0x0u));
  /* 11351586 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11351589 push eax */
  push32((uint32_t)(EAX));
  /* 1135158a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1135158d push ecx */
  push32((uint32_t)(ECX));
  /* 1135158e call 0x11352930 */
  push32(0x11351593u); f_11352930();
  /* 11351593 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11351596 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 1135159c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113515a3 jne 0x113515aa */
  if (!C.zf) goto L_113515aa;
  /* 113515a5 jmp 0x1135165d */
  goto L_1135165d;
L_113515aa:;
  /* 113515aa push 0x58 */
  push32((uint32_t)(0x58u));
  /* 113515ac push 0x1136b85c */
  push32((uint32_t)(0x1136b85cu));
  /* 113515b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 113515b3 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 113515b9 push edx */
  push32((uint32_t)(EDX));
  /* 113515ba call 0x11343350 */
  push32(0x113515bfu); f_11343350();
  /* 113515bf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113515c2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113515c5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113515c9 jne 0x113515d0 */
  if (!C.zf) goto L_113515d0;
  /* 113515cb jmp 0x1135165d */
  goto L_1135165d;
L_113515d0:;
  /* 113515d0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 113515d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 113515d9 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 113515df push eax */
  push32((uint32_t)(EAX));
  /* 113515e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113515e3 push ecx */
  push32((uint32_t)(ECX));
  /* 113515e4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113515e7 push edx */
  push32((uint32_t)(EDX));
  /* 113515e8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113515eb push eax */
  push32((uint32_t)(EAX));
  /* 113515ec call 0x11352930 */
  push32(0x113515f1u); f_11352930();
  /* 113515f1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113515f4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113515f7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113515fb jne 0x113515ff */
  if (!C.zf) goto L_113515ff;
  /* 113515fd jmp 0x1135165d */
  goto L_1135165d;
L_113515ff:;
  /* 113515ff push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11351601 push 0x1136b85c */
  push32((uint32_t)(0x1136b85cu));
  /* 11351606 push 2 */
  push32((uint32_t)(0x2u));
  /* 11351608 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1135160b push ecx */
  push32((uint32_t)(ECX));
  /* 1135160c call 0x11343350 */
  push32(0x11351611u); f_11343350();
  /* 11351611 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11351614 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 1135161a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1135161c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 11351622 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11351625 jne 0x11351629 */
  if (!C.zf) goto L_11351629;
  /* 11351627 jmp 0x1135165d */
  goto L_1135165d;
L_11351629:;
  /* 11351629 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1135162c push ecx */
  push32((uint32_t)(ECX));
  /* 1135162d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11351630 push edx */
  push32((uint32_t)(EDX));
  /* 11351631 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 11351637 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11351639 push ecx */
  push32((uint32_t)(ECX));
  /* 1135163a call 0x11346b70 */
  push32(0x1135163fu); f_11346b70();
  /* 1135163f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11351642 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11351646 je 0x11351656 */
  if (C.zf) goto L_11351656;
  /* 11351648 push 2 */
  push32((uint32_t)(0x2u));
  /* 1135164a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1135164d push edx */
  push32((uint32_t)(EDX));
  /* 1135164e call 0x11343de0 */
  push32(0x11351653u); f_11343de0();
  /* 11351653 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11351656:;
  /* 11351656 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11351658 jmp 0x11351796 */
  goto L_11351796;
L_1135165d:;
  /* 1135165d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11351661 je 0x11351671 */
  if (C.zf) goto L_11351671;
  /* 11351663 push 2 */
  push32((uint32_t)(0x2u));
  /* 11351665 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11351668 push eax */
  push32((uint32_t)(EAX));
  /* 11351669 call 0x11343de0 */
  push32(0x1135166eu); f_11343de0();
  /* 1135166e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11351671:;
  /* 11351671 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11351674 jmp 0x11351796 */
  goto L_11351796;
L_11351679:;
  /* 11351679 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1135167d jne 0x11351793 */
  if (!C.zf) goto L_11351793;
  /* 11351683 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 1135168d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11351690 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 11351696 push 0 */
  push32((uint32_t)(0x0u));
  /* 11351698 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1135169e push edx */
  push32((uint32_t)(EDX));
  /* 1135169f push 0x1136f6f8 */
  push32((uint32_t)(0x1136f6f8u));
  /* 113516a4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113516a7 push eax */
  push32((uint32_t)(EAX));
  /* 113516a8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113516ab push ecx */
  push32((uint32_t)(ECX));
  /* 113516ac call 0x11352790 */
  push32(0x113516b1u); f_11352790();
  /* 113516b1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113516b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113516b6 jne 0x113516c0 */
  if (!C.zf) goto L_113516c0;
  /* 113516b8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113516bb jmp 0x11351796 */
  goto L_11351796;
L_113516c0:;
  /* 113516c0 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 113516c6 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 113516c9 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 113516d3 jmp 0x113516e4 */
  goto L_113516e4;
L_113516d5:;
  /* 113516d5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 113516db add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113516de mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_113516e4:;
  /* 113516e4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113516eb jge 0x1135178f */
  if ((C.sf==C.of)) goto L_1135178f;
  /* 113516f1 cmp dword ptr [0x1136dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1136dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113516f8 jle 0x1135172b */
  if ((C.zf||C.sf!=C.of)) goto L_1135172b;
  /* 113516fa push 4 */
  push32((uint32_t)(0x4u));
  /* 113516fc mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11351702 mov dl, byte ptr [ecx*2 + 0x1136f6f8] */
  DL = (r8((uint32_t)(ECX*2 + 0x1136f6f8)));
  /* 11351709 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 1135170f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11351715 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1135171a push eax */
  push32((uint32_t)(EAX));
  /* 1135171b call 0x11349360 */
  push32(0x11351720u); f_11349360();
  /* 11351720 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11351723 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 11351729 jmp 0x1135175e */
  goto L_1135175e;
L_1135172b:;
  /* 1135172b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11351731 mov dl, byte ptr [ecx*2 + 0x1136f6f8] */
  DL = (r8((uint32_t)(ECX*2 + 0x1136f6f8)));
  /* 11351738 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 1135173e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11351744 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11351749 mov ecx, dword ptr [0x1136dc98] */
  ECX = (r32((uint32_t)(0x1136dc98)));
  /* 1135174f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11351751 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11351755 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11351758 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_1135175e:;
  /* 1135175e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11351765 je 0x11351788 */
  if (C.zf) goto L_11351788;
  /* 11351767 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1135176d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11351770 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11351773 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 1135177a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1135177e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11351784 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11351786 jmp 0x1135178a */
  goto L_1135178a;
L_11351788:;
  /* 11351788 jmp 0x1135178f */
  goto L_1135178f;
L_1135178a:;
  /* 1135178a jmp 0x113516d5 */
  goto L_113516d5;
L_1135178f:;
  /* 1135178f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11351791 jmp 0x11351796 */
  goto L_11351796;
L_11351793:;
  /* 11351793 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11351796:;
  /* 11351796 mov esp, ebp */
  ESP = (EBP);
  /* 11351798 pop ebp */
  EBP = (pop32());
  /* 11351799 ret  */
  ESPCHK(0x11351510u, _esp0);
  ESP += 4; return;
}

/* FUN_100117a0 @ 0x113517a0 (10 bytes, 5 insns) */
void f_113517a0(void) {
  FTRACE(0x113517a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113517a0 push ebp */
  push32((uint32_t)(EBP));
  /* 113517a1 mov ebp, esp */
  EBP = (ESP);
  /* 113517a3 mov eax, dword ptr [0x1136ed88] */
  EAX = (r32((uint32_t)(0x1136ed88)));
  /* 113517a8 pop ebp */
  EBP = (pop32());
  /* 113517a9 ret  */
  ESPCHK(0x113517a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100117b0 @ 0x113517b0 (575 bytes, 196 insns) */
void f_113517b0(void) {
  FTRACE(0x113517b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113517b0 push ebp */
  push32((uint32_t)(EBP));
  /* 113517b1 mov ebp, esp */
  EBP = (ESP);
  /* 113517b3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 113517b5 push 0x1136b868 */
  push32((uint32_t)(0x1136b868u));
  /* 113517ba push 0x1134c458 */
  push32((uint32_t)(0x1134c458u));
  /* 113517bf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 113517c5 push eax */
  push32((uint32_t)(EAX));
  /* 113517c6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 113517cd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113517d0 push ebx */
  push32((uint32_t)(EBX));
  /* 113517d1 push esi */
  push32((uint32_t)(ESI));
  /* 113517d2 push edi */
  push32((uint32_t)(EDI));
  /* 113517d3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 113517d6 cmp dword ptr [0x1136f704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113517dd jne 0x1135182e */
  if (!C.zf) goto L_1135182e;
  /* 113517df lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 113517e2 push eax */
  push32((uint32_t)(EAX));
  /* 113517e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 113517e5 push 0x1136af9c */
  push32((uint32_t)(0x1136af9cu));
  /* 113517ea push 1 */
  push32((uint32_t)(0x1u));
  /* 113517ec call dword ptr [0x113712e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712e0))), 0x113517f2u);
  /* 113517f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113517f4 je 0x11351802 */
  if (C.zf) goto L_11351802;
  /* 113517f6 mov dword ptr [0x1136f704], 1 */
  w32((uint32_t)(0x1136f704), (0x1u));
  /* 11351800 jmp 0x1135182e */
  goto L_1135182e;
L_11351802:;
  /* 11351802 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 11351805 push ecx */
  push32((uint32_t)(ECX));
  /* 11351806 push 1 */
  push32((uint32_t)(0x1u));
  /* 11351808 push 0x1136af98 */
  push32((uint32_t)(0x1136af98u));
  /* 1135180d push 1 */
  push32((uint32_t)(0x1u));
  /* 1135180f push 0 */
  push32((uint32_t)(0x0u));
  /* 11351811 call dword ptr [0x113712e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712e4))), 0x11351817u);
  /* 11351817 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11351819 je 0x11351827 */
  if (C.zf) goto L_11351827;
  /* 1135181b mov dword ptr [0x1136f704], 2 */
  w32((uint32_t)(0x1136f704), (0x2u));
  /* 11351825 jmp 0x1135182e */
  goto L_1135182e;
L_11351827:;
  /* 11351827 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11351829 jmp 0x11351a09 */
  goto L_11351a09;
L_1135182e:;
  /* 1135182e cmp dword ptr [0x1136f704], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1136f704))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11351835 jne 0x11351852 */
  if (!C.zf) goto L_11351852;
  /* 11351837 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1135183a push edx */
  push32((uint32_t)(EDX));
  /* 1135183b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1135183e push eax */
  push32((uint32_t)(EAX));
  /* 1135183f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11351842 push ecx */
  push32((uint32_t)(ECX));
  /* 11351843 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11351846 push edx */
  push32((uint32_t)(EDX));
  /* 11351847 call dword ptr [0x113712e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712e0))), 0x1135184du);
  /* 1135184d jmp 0x11351a09 */
  goto L_11351a09;
L_11351852:;
  /* 11351852 cmp dword ptr [0x1136f704], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1136f704))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11351859 jne 0x11351a07 */
  if (!C.zf) goto L_11351a07;
  /* 1135185f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11351863 jne 0x1135186d */
  if (!C.zf) goto L_1135186d;
  /* 11351865 mov eax, dword ptr [0x1136f678] */
  EAX = (r32((uint32_t)(0x1136f678)));
  /* 1135186a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_1135186d:;
  /* 1135186d push 0 */
  push32((uint32_t)(0x0u));
  /* 1135186f push 0 */
  push32((uint32_t)(0x0u));
  /* 11351871 push 0 */
  push32((uint32_t)(0x0u));
  /* 11351873 push 0 */
  push32((uint32_t)(0x0u));
  /* 11351875 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11351878 push ecx */
  push32((uint32_t)(ECX));
  /* 11351879 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1135187c push edx */
  push32((uint32_t)(EDX));
  /* 1135187d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11351882 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11351885 push eax */
  push32((uint32_t)(EAX));
  /* 11351886 call dword ptr [0x11371390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371390))), 0x1135188cu);
  /* 1135188c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1135188f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11351893 jne 0x1135189c */
  if (!C.zf) goto L_1135189c;
  /* 11351895 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11351897 jmp 0x11351a09 */
  goto L_11351a09;
L_1135189c:;
  /* 1135189c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 113518a3 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 113518a6 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113518a9 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 113518ab call 0x113464f0 */
  push32(0x113518b0u); f_113464f0();
  /* 113518b0 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 113518b3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 113518b6 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 113518b9 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 113518bc mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 113518bf push edx */
  push32((uint32_t)(EDX));
  /* 113518c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 113518c2 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113518c5 push eax */
  push32((uint32_t)(EAX));
  /* 113518c6 call 0x113470c0 */
  push32(0x113518cbu); f_113470c0();
  /* 113518cb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113518ce mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 113518d5 jmp 0x113518ee */
  goto L_113518ee;
  /* 113518d7 mov eax, 1 */
  EAX = (0x1u);
  /* 113518dc ret  */
  ESPCHK(0x113517b0u, _esp0);
  ESP += 4; return;
  /* 113518dd mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 113518e0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 113518e7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_113518ee:;
  /* 113518ee cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113518f2 jne 0x113518fb */
  if (!C.zf) goto L_113518fb;
  /* 113518f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113518f6 jmp 0x11351a09 */
  goto L_11351a09;
L_113518fb:;
  /* 113518fb push 0 */
  push32((uint32_t)(0x0u));
  /* 113518fd push 0 */
  push32((uint32_t)(0x0u));
  /* 113518ff mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11351902 push ecx */
  push32((uint32_t)(ECX));
  /* 11351903 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11351906 push edx */
  push32((uint32_t)(EDX));
  /* 11351907 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1135190a push eax */
  push32((uint32_t)(EAX));
  /* 1135190b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1135190e push ecx */
  push32((uint32_t)(ECX));
  /* 1135190f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11351914 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11351917 push edx */
  push32((uint32_t)(EDX));
  /* 11351918 call dword ptr [0x11371390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371390))), 0x1135191eu);
  /* 1135191e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11351920 jne 0x11351929 */
  if (!C.zf) goto L_11351929;
  /* 11351922 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11351924 jmp 0x11351a09 */
  goto L_11351a09;
L_11351929:;
  /* 11351929 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11351930 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11351933 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 11351937 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1135193a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1135193c call 0x113464f0 */
  push32(0x11351941u); f_113464f0();
  /* 11351941 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 11351944 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11351947 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1135194a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1135194d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11351954 jmp 0x1135196d */
  goto L_1135196d;
  /* 11351956 mov eax, 1 */
  EAX = (0x1u);
  /* 1135195b ret  */
  ESPCHK(0x113517b0u, _esp0);
  ESP += 4; return;
  /* 1135195c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1135195f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11351966 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1135196d:;
  /* 1135196d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11351971 jne 0x1135197a */
  if (!C.zf) goto L_1135197a;
  /* 11351973 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11351975 jmp 0x11351a09 */
  goto L_11351a09;
L_1135197a:;
  /* 1135197a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1135197e jne 0x11351989 */
  if (!C.zf) goto L_11351989;
  /* 11351980 mov edx, dword ptr [0x1136f668] */
  EDX = (r32((uint32_t)(0x1136f668)));
  /* 11351986 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_11351989:;
  /* 11351989 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1135198c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1135198f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 11351995 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11351998 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1135199b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 113519a2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113519a5 push ecx */
  push32((uint32_t)(ECX));
  /* 113519a6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 113519a9 push edx */
  push32((uint32_t)(EDX));
  /* 113519aa mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113519ad push eax */
  push32((uint32_t)(EAX));
  /* 113519ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113519b1 push ecx */
  push32((uint32_t)(ECX));
  /* 113519b2 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 113519b5 push edx */
  push32((uint32_t)(EDX));
  /* 113519b6 call dword ptr [0x113712e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712e4))), 0x113519bcu);
  /* 113519bc mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 113519bf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113519c2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113519c5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113519c7 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 113519cc cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113519d2 je 0x113519e8 */
  if (C.zf) goto L_113519e8;
  /* 113519d4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113519d7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113519da xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113519dc mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 113519e0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113519e6 je 0x113519ec */
  if (C.zf) goto L_113519ec;
L_113519e8:;
  /* 113519e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113519ea jmp 0x11351a09 */
  goto L_11351a09;
L_113519ec:;
  /* 113519ec mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113519ef shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 113519f1 push eax */
  push32((uint32_t)(EAX));
  /* 113519f2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113519f5 push ecx */
  push32((uint32_t)(ECX));
  /* 113519f6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113519f9 push edx */
  push32((uint32_t)(EDX));
  /* 113519fa call 0x1134b240 */
  push32(0x113519ffu); f_1134b240();
  /* 113519ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11351a02 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11351a05 jmp 0x11351a09 */
  goto L_11351a09;
L_11351a07:;
  /* 11351a07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11351a09:;
  /* 11351a09 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 11351a0c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11351a0f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11351a16 pop edi */
  EDI = (pop32());
  /* 11351a17 pop esi */
  ESI = (pop32());
  /* 11351a18 pop ebx */
  EBX = (pop32());
  /* 11351a19 mov esp, ebp */
  ESP = (EBP);
  /* 11351a1b pop ebp */
  EBP = (pop32());
  /* 11351a1c ret  */
  ESPCHK(0x113517b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a20 @ 0x11351a20 (208 bytes, 85 insns) */
void f_11351a20(void) {
  FTRACE(0x11351a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11351a20 push ebp */
  push32((uint32_t)(EBP));
  /* 11351a21 mov ebp, esp */
  EBP = (ESP);
  /* 11351a23 push edi */
  push32((uint32_t)(EDI));
  /* 11351a24 push esi */
  push32((uint32_t)(ESI));
  /* 11351a25 push ebx */
  push32((uint32_t)(EBX));
  /* 11351a26 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11351a29 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11351a2c lea eax, [0x1136f660] */
  EAX = ((uint32_t)(0x1136f660));
  /* 11351a32 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11351a36 jne 0x11351a73 */
  if (!C.zf) goto L_11351a73;
  /* 11351a38 mov al, 0xff */
  AL = (0xffu);
  /* 11351a3a mov edi, edi */
  EDI = (EDI);
L_11351a3c:;
  /* 11351a3c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11351a3e je 0x11351a6e */
  if (C.zf) goto L_11351a6e;
  /* 11351a40 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11351a42 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11351a43 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 11351a45 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11351a46 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11351a48 je 0x11351a3c */
  if (C.zf) goto L_11351a3c;
  /* 11351a4a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11351a4c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11351a4e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11351a50 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11351a53 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11351a55 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11351a57 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 11351a59 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11351a5b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11351a5d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11351a5f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11351a62 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11351a64 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11351a66 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11351a68 je 0x11351a3c */
  if (C.zf) goto L_11351a3c;
  /* 11351a6a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11351a6c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_11351a6e:;
  /* 11351a6e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11351a71 jmp 0x11351aeb */
  goto L_11351aeb;
L_11351a73:;
  /* 11351a73 lock inc dword ptr [0x1136f7f4] */
  x86_unimpl("lock inc @ 0x11351a73");
  /* 11351a7a cmp dword ptr [0x1136f7e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f7e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11351a81 jg 0x11351a87 */
  if ((!C.zf&&C.sf==C.of)) goto L_11351a87;
  /* 11351a83 push 0 */
  push32((uint32_t)(0x0u));
  /* 11351a85 jmp 0x11351a9c */
  goto L_11351a9c;
L_11351a87:;
  /* 11351a87 lock dec dword ptr [0x1136f7f4] */
  x86_unimpl("lock dec @ 0x11351a87");
  /* 11351a8e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11351a90 call 0x11346d50 */
  push32(0x11351a95u); f_11346d50();
  /* 11351a95 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_11351a9c:;
  /* 11351a9c mov eax, 0xff */
  EAX = (0xffu);
  /* 11351aa1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11351aa3 nop  */
  /* nop */
L_11351aa4:;
  /* 11351aa4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11351aa6 je 0x11351acf */
  if (C.zf) goto L_11351acf;
  /* 11351aa8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11351aaa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11351aab mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11351aad inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11351aae cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11351ab0 je 0x11351aa4 */
  if (C.zf) goto L_11351aa4;
  /* 11351ab2 push eax */
  push32((uint32_t)(EAX));
  /* 11351ab3 push ebx */
  push32((uint32_t)(EBX));
  /* 11351ab4 call 0x11352b90 */
  push32(0x11351ab9u); f_11352b90();
  /* 11351ab9 mov ebx, eax */
  EBX = (EAX);
  /* 11351abb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11351abe call 0x11352b90 */
  push32(0x11351ac3u); f_11352b90();
  /* 11351ac3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11351ac6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11351ac8 je 0x11351aa4 */
  if (C.zf) goto L_11351aa4;
  /* 11351aca sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11351acc sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11351acf:;
  /* 11351acf mov ebx, eax */
  EBX = (EAX);
  /* 11351ad1 pop eax */
  EAX = (pop32());
  /* 11351ad2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11351ad4 jne 0x11351adf */
  if (!C.zf) goto L_11351adf;
  /* 11351ad6 lock dec dword ptr [0x1136f7f4] */
  x86_unimpl("lock dec @ 0x11351ad6");
  /* 11351add jmp 0x11351ae9 */
  goto L_11351ae9;
L_11351adf:;
  /* 11351adf push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11351ae1 call 0x11346df0 */
  push32(0x11351ae6u); f_11346df0();
  /* 11351ae6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11351ae9:;
  /* 11351ae9 mov eax, ebx */
  EAX = (EBX);
L_11351aeb:;
  /* 11351aeb pop ebx */
  EBX = (pop32());
  /* 11351aec pop esi */
  ESI = (pop32());
  /* 11351aed pop edi */
  EDI = (pop32());
  /* 11351aee leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11351aef ret  */
  ESPCHK(0x11351a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10011af0 @ 0x11351af0 (257 bytes, 103 insns) */
void f_11351af0(void) {
  FTRACE(0x11351af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11351af0 push ebp */
  push32((uint32_t)(EBP));
  /* 11351af1 mov ebp, esp */
  EBP = (ESP);
  /* 11351af3 push edi */
  push32((uint32_t)(EDI));
  /* 11351af4 push esi */
  push32((uint32_t)(ESI));
  /* 11351af5 push ebx */
  push32((uint32_t)(EBX));
  /* 11351af6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11351af9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11351afb je 0x11351bea */
  if (C.zf) goto L_11351bea;
  /* 11351b01 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11351b04 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11351b07 lea eax, [0x1136f660] */
  EAX = ((uint32_t)(0x1136f660));
  /* 11351b0d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11351b11 jne 0x11351b61 */
  if (!C.zf) goto L_11351b61;
  /* 11351b13 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 11351b15 mov bl, 0x5a */
  BL = (0x5au);
  /* 11351b17 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 11351b19 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11351b1c:;
  /* 11351b1c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 11351b1e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11351b20 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11351b22 je 0x11351b45 */
  if (C.zf) goto L_11351b45;
  /* 11351b24 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11351b26 je 0x11351b45 */
  if (C.zf) goto L_11351b45;
  /* 11351b28 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11351b29 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11351b2a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11351b2c jb 0x11351b34 */
  if (C.cf) goto L_11351b34;
  /* 11351b2e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11351b30 ja 0x11351b34 */
  if ((!C.cf&&!C.zf)) goto L_11351b34;
  /* 11351b32 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_11351b34:;
  /* 11351b34 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11351b36 jb 0x11351b3e */
  if (C.cf) goto L_11351b3e;
  /* 11351b38 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11351b3a ja 0x11351b3e */
  if ((!C.cf&&!C.zf)) goto L_11351b3e;
  /* 11351b3c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_11351b3e:;
  /* 11351b3e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11351b40 jne 0x11351b4f */
  if (!C.zf) goto L_11351b4f;
  /* 11351b42 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11351b43 jne 0x11351b1c */
  if (!C.zf) goto L_11351b1c;
L_11351b45:;
  /* 11351b45 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11351b47 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11351b49 je 0x11351bea */
  if (C.zf) goto L_11351bea;
L_11351b4f:;
  /* 11351b4f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11351b54 jb 0x11351bea */
  if (C.cf) goto L_11351bea;
  /* 11351b5a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11351b5c jmp 0x11351bea */
  goto L_11351bea;
L_11351b61:;
  /* 11351b61 lock inc dword ptr [0x1136f7f4] */
  x86_unimpl("lock inc @ 0x11351b61");
  /* 11351b68 cmp dword ptr [0x1136f7e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f7e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11351b6f jg 0x11351b75 */
  if ((!C.zf&&C.sf==C.of)) goto L_11351b75;
  /* 11351b71 push 0 */
  push32((uint32_t)(0x0u));
  /* 11351b73 jmp 0x11351b8e */
  goto L_11351b8e;
L_11351b75:;
  /* 11351b75 lock dec dword ptr [0x1136f7f4] */
  x86_unimpl("lock dec @ 0x11351b75");
  /* 11351b7c mov ebx, ecx */
  EBX = (ECX);
  /* 11351b7e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11351b80 call 0x11346d50 */
  push32(0x11351b85u); f_11346d50();
  /* 11351b85 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 11351b8c mov ecx, ebx */
  ECX = (EBX);
L_11351b8e:;
  /* 11351b8e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11351b90 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11351b92 mov edi, edi */
  EDI = (EDI);
L_11351b94:;
  /* 11351b94 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11351b96 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11351b98 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11351b9a je 0x11351bbf */
  if (C.zf) goto L_11351bbf;
  /* 11351b9c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11351b9e je 0x11351bbf */
  if (C.zf) goto L_11351bbf;
  /* 11351ba0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11351ba1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11351ba2 push ecx */
  push32((uint32_t)(ECX));
  /* 11351ba3 push eax */
  push32((uint32_t)(EAX));
  /* 11351ba4 push ebx */
  push32((uint32_t)(EBX));
  /* 11351ba5 call 0x11352b90 */
  push32(0x11351baau); f_11352b90();
  /* 11351baa mov ebx, eax */
  EBX = (EAX);
  /* 11351bac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11351baf call 0x11352b90 */
  push32(0x11351bb4u); f_11352b90();
  /* 11351bb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11351bb7 pop ecx */
  ECX = (pop32());
  /* 11351bb8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11351bba jne 0x11351bc5 */
  if (!C.zf) goto L_11351bc5;
  /* 11351bbc dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11351bbd jne 0x11351b94 */
  if (!C.zf) goto L_11351b94;
L_11351bbf:;
  /* 11351bbf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11351bc1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11351bc3 je 0x11351bce */
  if (C.zf) goto L_11351bce;
L_11351bc5:;
  /* 11351bc5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11351bca jb 0x11351bce */
  if (C.cf) goto L_11351bce;
  /* 11351bcc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_11351bce:;
  /* 11351bce pop eax */
  EAX = (pop32());
  /* 11351bcf or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11351bd1 jne 0x11351bdc */
  if (!C.zf) goto L_11351bdc;
  /* 11351bd3 lock dec dword ptr [0x1136f7f4] */
  x86_unimpl("lock dec @ 0x11351bd3");
  /* 11351bda jmp 0x11351bea */
  goto L_11351bea;
L_11351bdc:;
  /* 11351bdc mov ebx, ecx */
  EBX = (ECX);
  /* 11351bde push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11351be0 call 0x11346df0 */
  push32(0x11351be5u); f_11346df0();
  /* 11351be5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11351be8 mov ecx, ebx */
  ECX = (EBX);
L_11351bea:;
  /* 11351bea mov eax, ecx */
  EAX = (ECX);
  /* 11351bec pop ebx */
  EBX = (pop32());
  /* 11351bed pop esi */
  ESI = (pop32());
  /* 11351bee pop edi */
  EDI = (pop32());
  /* 11351bef leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11351bf0 ret  */
  ESPCHK(0x11351af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011c00 @ 0x11351c00 (255 bytes, 88 insns) */
void f_11351c00(void) {
  FTRACE(0x11351c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11351c00 push ebp */
  push32((uint32_t)(EBP));
  /* 11351c01 mov ebp, esp */
  EBP = (ESP);
  /* 11351c03 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11351c06:;
  /* 11351c06 cmp dword ptr [0x1136dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1136dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11351c0d jle 0x11351c26 */
  if ((C.zf||C.sf!=C.of)) goto L_11351c26;
  /* 11351c0f push 8 */
  push32((uint32_t)(0x8u));
  /* 11351c11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11351c14 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11351c16 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11351c18 push ecx */
  push32((uint32_t)(ECX));
  /* 11351c19 call 0x11349360 */
  push32(0x11351c1eu); f_11349360();
  /* 11351c1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11351c21 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11351c24 jmp 0x11351c3f */
  goto L_11351c3f;
L_11351c26:;
  /* 11351c26 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11351c29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11351c2b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11351c2d mov ecx, dword ptr [0x1136dc98] */
  ECX = (r32((uint32_t)(0x1136dc98)));
  /* 11351c33 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11351c35 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11351c39 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11351c3c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11351c3f:;
  /* 11351c3f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11351c43 je 0x11351c50 */
  if (C.zf) goto L_11351c50;
  /* 11351c45 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11351c48 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11351c4b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11351c4e jmp 0x11351c06 */
  goto L_11351c06;
L_11351c50:;
  /* 11351c50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11351c53 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11351c55 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11351c57 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11351c5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11351c5d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11351c60 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11351c63 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11351c66 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11351c69 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11351c6d je 0x11351c75 */
  if (C.zf) goto L_11351c75;
  /* 11351c6f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11351c73 jne 0x11351c88 */
  if (!C.zf) goto L_11351c88;
L_11351c75:;
  /* 11351c75 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11351c78 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11351c7a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11351c7c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11351c7f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11351c82 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11351c85 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11351c88:;
  /* 11351c88 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11351c8f:;
  /* 11351c8f cmp dword ptr [0x1136dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1136dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11351c96 jle 0x11351cab */
  if ((C.zf||C.sf!=C.of)) goto L_11351cab;
  /* 11351c98 push 4 */
  push32((uint32_t)(0x4u));
  /* 11351c9a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11351c9d push edx */
  push32((uint32_t)(EDX));
  /* 11351c9e call 0x11349360 */
  push32(0x11351ca3u); f_11349360();
  /* 11351ca3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11351ca6 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11351ca9 jmp 0x11351cc0 */
  goto L_11351cc0;
L_11351cab:;
  /* 11351cab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11351cae mov ecx, dword ptr [0x1136dc98] */
  ECX = (r32((uint32_t)(0x1136dc98)));
  /* 11351cb4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11351cb6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11351cba and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11351cbd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11351cc0:;
  /* 11351cc0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11351cc4 je 0x11351ceb */
  if (C.zf) goto L_11351ceb;
  /* 11351cc6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11351cc9 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11351ccc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11351ccf lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 11351cd3 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11351cd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11351cd9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11351cdb mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11351cdd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11351ce0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11351ce3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11351ce6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11351ce9 jmp 0x11351c8f */
  goto L_11351c8f;
L_11351ceb:;
  /* 11351ceb cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11351cef jne 0x11351cf8 */
  if (!C.zf) goto L_11351cf8;
  /* 11351cf1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11351cf4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11351cf6 jmp 0x11351cfb */
  goto L_11351cfb;
L_11351cf8:;
  /* 11351cf8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11351cfb:;
  /* 11351cfb mov esp, ebp */
  ESP = (EBP);
  /* 11351cfd pop ebp */
  EBP = (pop32());
  /* 11351cfe ret  */
  ESPCHK(0x11351c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10011d00 @ 0x11351d00 (17 bytes, 8 insns) */
void f_11351d00(void) {
  FTRACE(0x11351d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11351d00 push ebp */
  push32((uint32_t)(EBP));
  /* 11351d01 mov ebp, esp */
  EBP = (ESP);
  /* 11351d03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11351d06 push eax */
  push32((uint32_t)(EAX));
  /* 11351d07 call 0x11351c00 */
  push32(0x11351d0cu); f_11351c00();
  /* 11351d0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11351d0f pop ebp */
  EBP = (pop32());
  /* 11351d10 ret  */
  ESPCHK(0x11351d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10011d20 @ 0x11351d20 (297 bytes, 106 insns) */
void f_11351d20(void) {
  FTRACE(0x11351d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11351d20 push ebp */
  push32((uint32_t)(EBP));
  /* 11351d21 mov ebp, esp */
  EBP = (ESP);
  /* 11351d23 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11351d26 push esi */
  push32((uint32_t)(ESI));
L_11351d27:;
  /* 11351d27 cmp dword ptr [0x1136dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1136dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11351d2e jle 0x11351d47 */
  if ((C.zf||C.sf!=C.of)) goto L_11351d47;
  /* 11351d30 push 8 */
  push32((uint32_t)(0x8u));
  /* 11351d32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11351d35 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11351d37 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11351d39 push ecx */
  push32((uint32_t)(ECX));
  /* 11351d3a call 0x11349360 */
  push32(0x11351d3fu); f_11349360();
  /* 11351d3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11351d42 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11351d45 jmp 0x11351d60 */
  goto L_11351d60;
L_11351d47:;
  /* 11351d47 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11351d4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11351d4c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11351d4e mov ecx, dword ptr [0x1136dc98] */
  ECX = (r32((uint32_t)(0x1136dc98)));
  /* 11351d54 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11351d56 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11351d5a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11351d5d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11351d60:;
  /* 11351d60 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11351d64 je 0x11351d71 */
  if (C.zf) goto L_11351d71;
  /* 11351d66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11351d69 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11351d6c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11351d6f jmp 0x11351d27 */
  goto L_11351d27;
L_11351d71:;
  /* 11351d71 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11351d74 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11351d76 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11351d78 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11351d7b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11351d7e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11351d81 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11351d84 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11351d87 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11351d8a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11351d8e je 0x11351d96 */
  if (C.zf) goto L_11351d96;
  /* 11351d90 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11351d94 jne 0x11351da9 */
  if (!C.zf) goto L_11351da9;
L_11351d96:;
  /* 11351d96 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11351d99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11351d9b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11351d9d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11351da0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11351da3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11351da6 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11351da9:;
  /* 11351da9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11351db0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11351db7:;
  /* 11351db7 cmp dword ptr [0x1136dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1136dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11351dbe jle 0x11351dd3 */
  if ((C.zf||C.sf!=C.of)) goto L_11351dd3;
  /* 11351dc0 push 4 */
  push32((uint32_t)(0x4u));
  /* 11351dc2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11351dc5 push edx */
  push32((uint32_t)(EDX));
  /* 11351dc6 call 0x11349360 */
  push32(0x11351dcbu); f_11349360();
  /* 11351dcb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11351dce mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11351dd1 jmp 0x11351de8 */
  goto L_11351de8;
L_11351dd3:;
  /* 11351dd3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11351dd6 mov ecx, dword ptr [0x1136dc98] */
  ECX = (r32((uint32_t)(0x1136dc98)));
  /* 11351ddc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11351dde mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11351de2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11351de5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_11351de8:;
  /* 11351de8 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11351dec je 0x11351e29 */
  if (C.zf) goto L_11351e29;
  /* 11351dee push 0 */
  push32((uint32_t)(0x0u));
  /* 11351df0 push 0xa */
  push32((uint32_t)(0xau));
  /* 11351df2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11351df5 push eax */
  push32((uint32_t)(EAX));
  /* 11351df6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11351df9 push ecx */
  push32((uint32_t)(ECX));
  /* 11351dfa call 0x11352cc0 */
  push32(0x11351dffu); f_11352cc0();
  /* 11351dff mov ecx, eax */
  ECX = (EAX);
  /* 11351e01 mov esi, edx */
  ESI = (EDX);
  /* 11351e03 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11351e06 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11351e09 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11351e0a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11351e0c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11351e0e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11351e11 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 11351e14 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11351e17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11351e19 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11351e1b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11351e1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11351e21 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11351e24 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11351e27 jmp 0x11351db7 */
  goto L_11351db7;
L_11351e29:;
  /* 11351e29 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11351e2d jne 0x11351e3e */
  if (!C.zf) goto L_11351e3e;
  /* 11351e2f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11351e32 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11351e34 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11351e37 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11351e3a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11351e3c jmp 0x11351e44 */
  goto L_11351e44;
L_11351e3e:;
  /* 11351e3e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11351e41 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_11351e44:;
  /* 11351e44 pop esi */
  ESI = (pop32());
  /* 11351e45 mov esp, ebp */
  ESP = (EBP);
  /* 11351e47 pop ebp */
  EBP = (pop32());
  /* 11351e48 ret  */
  ESPCHK(0x11351d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e50 @ 0x11351e50 (61 bytes, 18 insns) */
void f_11351e50(void) {
  FTRACE(0x11351e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11351e50 push ebp */
  push32((uint32_t)(EBP));
  /* 11351e51 mov ebp, esp */
  EBP = (ESP);
  /* 11351e53 cmp dword ptr [0x1136f7c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f7c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11351e5a jne 0x11351e8b */
  if (!C.zf) goto L_11351e8b;
  /* 11351e5c push 0xb */
  push32((uint32_t)(0xbu));
  /* 11351e5e call 0x11346d50 */
  push32(0x11351e63u); f_11346d50();
  /* 11351e63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11351e66 cmp dword ptr [0x1136f7c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f7c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11351e6d jne 0x11351e81 */
  if (!C.zf) goto L_11351e81;
  /* 11351e6f call 0x11351eb0 */
  push32(0x11351e74u); f_11351eb0();
  /* 11351e74 mov eax, dword ptr [0x1136f7c0] */
  EAX = (r32((uint32_t)(0x1136f7c0)));
  /* 11351e79 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11351e7c mov dword ptr [0x1136f7c0], eax */
  w32((uint32_t)(0x1136f7c0), (EAX));
L_11351e81:;
  /* 11351e81 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11351e83 call 0x11346df0 */
  push32(0x11351e88u); f_11346df0();
  /* 11351e88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11351e8b:;
  /* 11351e8b pop ebp */
  EBP = (pop32());
  /* 11351e8c ret  */
  ESPCHK(0x11351e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e90 @ 0x11351e90 (30 bytes, 11 insns) */
void f_11351e90(void) {
  FTRACE(0x11351e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11351e90 push ebp */
  push32((uint32_t)(EBP));
  /* 11351e91 mov ebp, esp */
  EBP = (ESP);
  /* 11351e93 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11351e95 call 0x11346d50 */
  push32(0x11351e9au); f_11346d50();
  /* 11351e9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11351e9d call 0x11351eb0 */
  push32(0x11351ea2u); f_11351eb0();
  /* 11351ea2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11351ea4 call 0x11346df0 */
  push32(0x11351ea9u); f_11346df0();
  /* 11351ea9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11351eac pop ebp */
  EBP = (pop32());
  /* 11351ead ret  */
  ESPCHK(0x11351e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10011eb0 @ 0x11351eb0 (939 bytes, 266 insns) */
void f_11351eb0(void) {
  FTRACE(0x11351eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11351eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11351eb1 mov ebp, esp */
  EBP = (ESP);
  /* 11351eb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11351eb6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11351ebd push 0xc */
  push32((uint32_t)(0xcu));
  /* 11351ebf call 0x11346d50 */
  push32(0x11351ec4u); f_11346d50();
  /* 11351ec4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11351ec7 mov dword ptr [0x1136f708], 0 */
  w32((uint32_t)(0x1136f708), (0x0u));
  /* 11351ed1 mov dword ptr [0x1136ee38], 0xffffffff */
  w32((uint32_t)(0x1136ee38), (0xffffffffu));
  /* 11351edb mov eax, dword ptr [0x1136ee38] */
  EAX = (r32((uint32_t)(0x1136ee38)));
  /* 11351ee0 mov dword ptr [0x1136ee28], eax */
  w32((uint32_t)(0x1136ee28), (EAX));
  /* 11351ee5 push 0x1136b8c8 */
  push32((uint32_t)(0x1136b8c8u));
  /* 11351eea call 0x11352d30 */
  push32(0x11351eefu); f_11352d30();
  /* 11351eef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11351ef2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11351ef5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11351ef9 jne 0x11352033 */
  if (!C.zf) goto L_11352033;
  /* 11351eff push 0xc */
  push32((uint32_t)(0xcu));
  /* 11351f01 call 0x11346df0 */
  push32(0x11351f06u); f_11346df0();
  /* 11351f06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11351f09 push 0x1136f710 */
  push32((uint32_t)(0x1136f710u));
  /* 11351f0e call dword ptr [0x113712a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712a4))), 0x11351f14u);
  /* 11351f14 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11351f17 je 0x1135202e */
  if (C.zf) goto L_1135202e;
  /* 11351f1d mov dword ptr [0x1136f708], 1 */
  w32((uint32_t)(0x1136f708), (0x1u));
  /* 11351f27 mov ecx, dword ptr [0x1136f710] */
  ECX = (r32((uint32_t)(0x1136f710)));
  /* 11351f2d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11351f30 mov dword ptr [0x1136ed90], ecx */
  w32((uint32_t)(0x1136ed90), (ECX));
  /* 11351f36 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11351f38 mov dx, word ptr [0x1136f756] */
  DX = (r16((uint32_t)(0x1136f756)));
  /* 11351f3f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11351f41 je 0x11351f59 */
  if (C.zf) goto L_11351f59;
  /* 11351f43 mov eax, dword ptr [0x1136f764] */
  EAX = (r32((uint32_t)(0x1136f764)));
  /* 11351f48 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11351f4b mov ecx, dword ptr [0x1136ed90] */
  ECX = (r32((uint32_t)(0x1136ed90)));
  /* 11351f51 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11351f53 mov dword ptr [0x1136ed90], ecx */
  w32((uint32_t)(0x1136ed90), (ECX));
L_11351f59:;
  /* 11351f59 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11351f5b mov dx, word ptr [0x1136f7aa] */
  DX = (r16((uint32_t)(0x1136f7aa)));
  /* 11351f62 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11351f64 je 0x11351f8e */
  if (C.zf) goto L_11351f8e;
  /* 11351f66 cmp dword ptr [0x1136f7b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f7b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11351f6d je 0x11351f8e */
  if (C.zf) goto L_11351f8e;
  /* 11351f6f mov dword ptr [0x1136ed94], 1 */
  w32((uint32_t)(0x1136ed94), (0x1u));
  /* 11351f79 mov eax, dword ptr [0x1136f7b8] */
  EAX = (r32((uint32_t)(0x1136f7b8)));
  /* 11351f7e sub eax, dword ptr [0x1136f764] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1136f764))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11351f84 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11351f87 mov dword ptr [0x1136ed98], eax */
  w32((uint32_t)(0x1136ed98), (EAX));
  /* 11351f8c jmp 0x11351fa2 */
  goto L_11351fa2;
L_11351f8e:;
  /* 11351f8e mov dword ptr [0x1136ed94], 0 */
  w32((uint32_t)(0x1136ed94), (0x0u));
  /* 11351f98 mov dword ptr [0x1136ed98], 0 */
  w32((uint32_t)(0x1136ed98), (0x0u));
L_11351fa2:;
  /* 11351fa2 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11351fa5 push ecx */
  push32((uint32_t)(ECX));
  /* 11351fa6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11351fa8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11351faa mov edx, dword ptr [0x1136ee1c] */
  EDX = (r32((uint32_t)(0x1136ee1c)));
  /* 11351fb0 push edx */
  push32((uint32_t)(EDX));
  /* 11351fb1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11351fb3 push 0x1136f714 */
  push32((uint32_t)(0x1136f714u));
  /* 11351fb8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11351fbd mov eax, dword ptr [0x1136f678] */
  EAX = (r32((uint32_t)(0x1136f678)));
  /* 11351fc2 push eax */
  push32((uint32_t)(EAX));
  /* 11351fc3 call dword ptr [0x11371390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371390))), 0x11351fc9u);
  /* 11351fc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11351fcb je 0x11351fdf */
  if (C.zf) goto L_11351fdf;
  /* 11351fcd cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11351fd1 jne 0x11351fdf */
  if (!C.zf) goto L_11351fdf;
  /* 11351fd3 mov ecx, dword ptr [0x1136ee1c] */
  ECX = (r32((uint32_t)(0x1136ee1c)));
  /* 11351fd9 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 11351fdd jmp 0x11351fe8 */
  goto L_11351fe8;
L_11351fdf:;
  /* 11351fdf mov edx, dword ptr [0x1136ee1c] */
  EDX = (r32((uint32_t)(0x1136ee1c)));
  /* 11351fe5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_11351fe8:;
  /* 11351fe8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11351feb push eax */
  push32((uint32_t)(EAX));
  /* 11351fec push 0 */
  push32((uint32_t)(0x0u));
  /* 11351fee push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11351ff0 mov ecx, dword ptr [0x1136ee20] */
  ECX = (r32((uint32_t)(0x1136ee20)));
  /* 11351ff6 push ecx */
  push32((uint32_t)(ECX));
  /* 11351ff7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11351ff9 push 0x1136f768 */
  push32((uint32_t)(0x1136f768u));
  /* 11351ffe push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11352003 mov edx, dword ptr [0x1136f678] */
  EDX = (r32((uint32_t)(0x1136f678)));
  /* 11352009 push edx */
  push32((uint32_t)(EDX));
  /* 1135200a call dword ptr [0x11371390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371390))), 0x11352010u);
  /* 11352010 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11352012 je 0x11352025 */
  if (C.zf) goto L_11352025;
  /* 11352014 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11352018 jne 0x11352025 */
  if (!C.zf) goto L_11352025;
  /* 1135201a mov eax, dword ptr [0x1136ee20] */
  EAX = (r32((uint32_t)(0x1136ee20)));
  /* 1135201f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 11352023 jmp 0x1135202e */
  goto L_1135202e;
L_11352025:;
  /* 11352025 mov ecx, dword ptr [0x1136ee20] */
  ECX = (r32((uint32_t)(0x1136ee20)));
  /* 1135202b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_1135202e:;
  /* 1135202e jmp 0x11352257 */
  goto L_11352257;
L_11352033:;
  /* 11352033 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11352036 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11352039 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1135203b je 0x1135205d */
  if (C.zf) goto L_1135205d;
  /* 1135203d cmp dword ptr [0x1136f7bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f7bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11352044 je 0x1135206c */
  if (C.zf) goto L_1135206c;
  /* 11352046 mov ecx, dword ptr [0x1136f7bc] */
  ECX = (r32((uint32_t)(0x1136f7bc)));
  /* 1135204c push ecx */
  push32((uint32_t)(ECX));
  /* 1135204d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11352050 push edx */
  push32((uint32_t)(EDX));
  /* 11352051 call 0x1134efe0 */
  push32(0x11352056u); f_1134efe0();
  /* 11352056 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11352059 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1135205b jne 0x1135206c */
  if (!C.zf) goto L_1135206c;
L_1135205d:;
  /* 1135205d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1135205f call 0x11346df0 */
  push32(0x11352064u); f_11346df0();
  /* 11352064 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11352067 jmp 0x11352257 */
  goto L_11352257;
L_1135206c:;
  /* 1135206c push 2 */
  push32((uint32_t)(0x2u));
  /* 1135206e mov eax, dword ptr [0x1136f7bc] */
  EAX = (r32((uint32_t)(0x1136f7bc)));
  /* 11352073 push eax */
  push32((uint32_t)(EAX));
  /* 11352074 call 0x11343de0 */
  push32(0x11352079u); f_11343de0();
  /* 11352079 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1135207c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 11352081 push 0x1136b8c0 */
  push32((uint32_t)(0x1136b8c0u));
  /* 11352086 push 2 */
  push32((uint32_t)(0x2u));
  /* 11352088 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1135208b push ecx */
  push32((uint32_t)(ECX));
  /* 1135208c call 0x11346180 */
  push32(0x11352091u); f_11346180();
  /* 11352091 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11352094 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11352097 push eax */
  push32((uint32_t)(EAX));
  /* 11352098 call 0x11343350 */
  push32(0x1135209du); f_11343350();
  /* 1135209d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113520a0 mov dword ptr [0x1136f7bc], eax */
  w32((uint32_t)(0x1136f7bc), (EAX));
  /* 113520a5 cmp dword ptr [0x1136f7bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f7bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113520ac jne 0x113520bd */
  if (!C.zf) goto L_113520bd;
  /* 113520ae push 0xc */
  push32((uint32_t)(0xcu));
  /* 113520b0 call 0x11346df0 */
  push32(0x113520b5u); f_11346df0();
  /* 113520b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113520b8 jmp 0x11352257 */
  goto L_11352257;
L_113520bd:;
  /* 113520bd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113520c0 push edx */
  push32((uint32_t)(EDX));
  /* 113520c1 mov eax, dword ptr [0x1136f7bc] */
  EAX = (r32((uint32_t)(0x1136f7bc)));
  /* 113520c6 push eax */
  push32((uint32_t)(EAX));
  /* 113520c7 call 0x11346300 */
  push32(0x113520ccu); f_11346300();
  /* 113520cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113520cf push 0xc */
  push32((uint32_t)(0xcu));
  /* 113520d1 call 0x11346df0 */
  push32(0x113520d6u); f_11346df0();
  /* 113520d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113520d9 push 3 */
  push32((uint32_t)(0x3u));
  /* 113520db mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113520de push ecx */
  push32((uint32_t)(ECX));
  /* 113520df mov edx, dword ptr [0x1136ee1c] */
  EDX = (r32((uint32_t)(0x1136ee1c)));
  /* 113520e5 push edx */
  push32((uint32_t)(EDX));
  /* 113520e6 call 0x11346b70 */
  push32(0x113520ebu); f_11346b70();
  /* 113520eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113520ee mov eax, dword ptr [0x1136ee1c] */
  EAX = (r32((uint32_t)(0x1136ee1c)));
  /* 113520f3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 113520f7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113520fa add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113520fd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11352100 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11352103 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11352106 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11352109 jne 0x1135211d */
  if (!C.zf) goto L_1135211d;
  /* 1135210b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1135210e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11352111 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11352114 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11352117 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1135211a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1135211d:;
  /* 1135211d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11352120 push eax */
  push32((uint32_t)(EAX));
  /* 11352121 call 0x11351c00 */
  push32(0x11352126u); f_11351c00();
  /* 11352126 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11352129 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1135212f mov dword ptr [0x1136ed90], eax */
  w32((uint32_t)(0x1136ed90), (EAX));
L_11352134:;
  /* 11352134 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11352137 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1135213a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1135213d je 0x11352155 */
  if (C.zf) goto L_11352155;
  /* 1135213f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11352142 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11352145 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11352148 jl 0x11352160 */
  if ((C.sf!=C.of)) goto L_11352160;
  /* 1135214a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1135214d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11352150 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11352153 jg 0x11352160 */
  if ((!C.zf&&C.sf==C.of)) goto L_11352160;
L_11352155:;
  /* 11352155 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11352158 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1135215b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1135215e jmp 0x11352134 */
  goto L_11352134;
L_11352160:;
  /* 11352160 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11352163 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11352166 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11352169 jne 0x11352205 */
  if (!C.zf) goto L_11352205;
  /* 1135216f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11352172 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11352175 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11352178 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1135217b push edx */
  push32((uint32_t)(EDX));
  /* 1135217c call 0x11351c00 */
  push32(0x11352181u); f_11351c00();
  /* 11352181 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11352184 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11352187 mov ecx, dword ptr [0x1136ed90] */
  ECX = (r32((uint32_t)(0x1136ed90)));
  /* 1135218d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1135218f mov dword ptr [0x1136ed90], ecx */
  w32((uint32_t)(0x1136ed90), (ECX));
L_11352195:;
  /* 11352195 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11352198 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1135219b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1135219e jl 0x113521b6 */
  if ((C.sf!=C.of)) goto L_113521b6;
  /* 113521a0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113521a3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 113521a6 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113521a9 jg 0x113521b6 */
  if ((!C.zf&&C.sf==C.of)) goto L_113521b6;
  /* 113521ab mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113521ae add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113521b1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113521b4 jmp 0x11352195 */
  goto L_11352195;
L_113521b6:;
  /* 113521b6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113521b9 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 113521bc cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113521bf jne 0x11352205 */
  if (!C.zf) goto L_11352205;
  /* 113521c1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113521c4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113521c7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113521ca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113521cd push ecx */
  push32((uint32_t)(ECX));
  /* 113521ce call 0x11351c00 */
  push32(0x113521d3u); f_11351c00();
  /* 113521d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113521d6 mov edx, dword ptr [0x1136ed90] */
  EDX = (r32((uint32_t)(0x1136ed90)));
  /* 113521dc add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113521de mov dword ptr [0x1136ed90], edx */
  w32((uint32_t)(0x1136ed90), (EDX));
L_113521e4:;
  /* 113521e4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113521e7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113521ea cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113521ed jl 0x11352205 */
  if ((C.sf!=C.of)) goto L_11352205;
  /* 113521ef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113521f2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 113521f5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113521f8 jg 0x11352205 */
  if ((!C.zf&&C.sf==C.of)) goto L_11352205;
  /* 113521fa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113521fd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11352200 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11352203 jmp 0x113521e4 */
  goto L_113521e4;
L_11352205:;
  /* 11352205 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11352209 je 0x11352219 */
  if (C.zf) goto L_11352219;
  /* 1135220b mov edx, dword ptr [0x1136ed90] */
  EDX = (r32((uint32_t)(0x1136ed90)));
  /* 11352211 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11352213 mov dword ptr [0x1136ed90], edx */
  w32((uint32_t)(0x1136ed90), (EDX));
L_11352219:;
  /* 11352219 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1135221c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1135221f mov dword ptr [0x1136ed94], ecx */
  w32((uint32_t)(0x1136ed94), (ECX));
  /* 11352225 cmp dword ptr [0x1136ed94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136ed94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1135222c je 0x1135224e */
  if (C.zf) goto L_1135224e;
  /* 1135222e push 3 */
  push32((uint32_t)(0x3u));
  /* 11352230 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11352233 push edx */
  push32((uint32_t)(EDX));
  /* 11352234 mov eax, dword ptr [0x1136ee20] */
  EAX = (r32((uint32_t)(0x1136ee20)));
  /* 11352239 push eax */
  push32((uint32_t)(EAX));
  /* 1135223a call 0x11346b70 */
  push32(0x1135223fu); f_11346b70();
  /* 1135223f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11352242 mov ecx, dword ptr [0x1136ee20] */
  ECX = (r32((uint32_t)(0x1136ee20)));
  /* 11352248 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 1135224c jmp 0x11352257 */
  goto L_11352257;
L_1135224e:;
  /* 1135224e mov edx, dword ptr [0x1136ee20] */
  EDX = (r32((uint32_t)(0x1136ee20)));
  /* 11352254 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_11352257:;
  /* 11352257 mov esp, ebp */
  ESP = (EBP);
  /* 11352259 pop ebp */
  EBP = (pop32());
  /* 1135225a ret  */
  ESPCHK(0x11351eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012260 @ 0x11352260 (46 bytes, 18 insns) */
void f_11352260(void) {
  FTRACE(0x11352260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11352260 push ebp */
  push32((uint32_t)(EBP));
  /* 11352261 mov ebp, esp */
  EBP = (ESP);
  /* 11352263 push ecx */
  push32((uint32_t)(ECX));
  /* 11352264 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11352266 call 0x11346d50 */
  push32(0x1135226bu); f_11346d50();
  /* 1135226b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1135226e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11352271 push eax */
  push32((uint32_t)(EAX));
  /* 11352272 call 0x11352290 */
  push32(0x11352277u); f_11352290();
  /* 11352277 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1135227a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1135227d push 0xb */
  push32((uint32_t)(0xbu));
  /* 1135227f call 0x11346df0 */
  push32(0x11352284u); f_11346df0();
  /* 11352284 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11352287 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1135228a mov esp, ebp */
  ESP = (EBP);
  /* 1135228c pop ebp */
  EBP = (pop32());
  /* 1135228d ret  */
  ESPCHK(0x11352260u, _esp0);
  ESP += 4; return;
}

/* FUN_10012290 @ 0x11352290 (762 bytes, 246 insns) */
void f_11352290(void) {
  FTRACE(0x11352290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11352290 push ebp */
  push32((uint32_t)(EBP));
  /* 11352291 mov ebp, esp */
  EBP = (ESP);
  /* 11352293 push ecx */
  push32((uint32_t)(ECX));
  /* 11352294 cmp dword ptr [0x1136ed94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136ed94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1135229b jne 0x113522a4 */
  if (!C.zf) goto L_113522a4;
  /* 1135229d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1135229f jmp 0x11352586 */
  goto L_11352586;
L_113522a4:;
  /* 113522a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113522a7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 113522aa cmp ecx, dword ptr [0x1136ee28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1136ee28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113522b0 jne 0x113522c4 */
  if (!C.zf) goto L_113522c4;
  /* 113522b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113522b5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 113522b8 cmp eax, dword ptr [0x1136ee38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1136ee38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113522be je 0x1135248b */
  if (C.zf) goto L_1135248b;
L_113522c4:;
  /* 113522c4 cmp dword ptr [0x1136f708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113522cb je 0x11352445 */
  if (C.zf) goto L_11352445;
  /* 113522d1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113522d3 mov cx, word ptr [0x1136f7a8] */
  CX = (r16((uint32_t)(0x1136f7a8)));
  /* 113522da test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113522dc jne 0x11352339 */
  if (!C.zf) goto L_11352339;
  /* 113522de xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113522e0 mov dx, word ptr [0x1136f7b6] */
  DX = (r16((uint32_t)(0x1136f7b6)));
  /* 113522e7 push edx */
  push32((uint32_t)(EDX));
  /* 113522e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113522ea mov ax, word ptr [0x1136f7b4] */
  AX = (r16((uint32_t)(0x1136f7b4)));
  /* 113522f0 push eax */
  push32((uint32_t)(EAX));
  /* 113522f1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113522f3 mov cx, word ptr [0x1136f7b2] */
  CX = (r16((uint32_t)(0x1136f7b2)));
  /* 113522fa push ecx */
  push32((uint32_t)(ECX));
  /* 113522fb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113522fd mov dx, word ptr [0x1136f7b0] */
  DX = (r16((uint32_t)(0x1136f7b0)));
  /* 11352304 push edx */
  push32((uint32_t)(EDX));
  /* 11352305 push 0 */
  push32((uint32_t)(0x0u));
  /* 11352307 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11352309 mov ax, word ptr [0x1136f7ac] */
  AX = (r16((uint32_t)(0x1136f7ac)));
  /* 1135230f push eax */
  push32((uint32_t)(EAX));
  /* 11352310 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11352312 mov cx, word ptr [0x1136f7ae] */
  CX = (r16((uint32_t)(0x1136f7ae)));
  /* 11352319 push ecx */
  push32((uint32_t)(ECX));
  /* 1135231a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1135231c mov dx, word ptr [0x1136f7aa] */
  DX = (r16((uint32_t)(0x1136f7aa)));
  /* 11352323 push edx */
  push32((uint32_t)(EDX));
  /* 11352324 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11352327 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1135232a push ecx */
  push32((uint32_t)(ECX));
  /* 1135232b push 1 */
  push32((uint32_t)(0x1u));
  /* 1135232d push 1 */
  push32((uint32_t)(0x1u));
  /* 1135232f call 0x11352590 */
  push32(0x11352334u); f_11352590();
  /* 11352334 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11352337 jmp 0x1135238a */
  goto L_1135238a;
L_11352339:;
  /* 11352339 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1135233b mov dx, word ptr [0x1136f7b6] */
  DX = (r16((uint32_t)(0x1136f7b6)));
  /* 11352342 push edx */
  push32((uint32_t)(EDX));
  /* 11352343 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11352345 mov ax, word ptr [0x1136f7b4] */
  AX = (r16((uint32_t)(0x1136f7b4)));
  /* 1135234b push eax */
  push32((uint32_t)(EAX));
  /* 1135234c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1135234e mov cx, word ptr [0x1136f7b2] */
  CX = (r16((uint32_t)(0x1136f7b2)));
  /* 11352355 push ecx */
  push32((uint32_t)(ECX));
  /* 11352356 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11352358 mov dx, word ptr [0x1136f7b0] */
  DX = (r16((uint32_t)(0x1136f7b0)));
  /* 1135235f push edx */
  push32((uint32_t)(EDX));
  /* 11352360 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11352362 mov ax, word ptr [0x1136f7ae] */
  AX = (r16((uint32_t)(0x1136f7ae)));
  /* 11352368 push eax */
  push32((uint32_t)(EAX));
  /* 11352369 push 0 */
  push32((uint32_t)(0x0u));
  /* 1135236b push 0 */
  push32((uint32_t)(0x0u));
  /* 1135236d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1135236f mov cx, word ptr [0x1136f7aa] */
  CX = (r16((uint32_t)(0x1136f7aa)));
  /* 11352376 push ecx */
  push32((uint32_t)(ECX));
  /* 11352377 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1135237a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1135237d push eax */
  push32((uint32_t)(EAX));
  /* 1135237e push 0 */
  push32((uint32_t)(0x0u));
  /* 11352380 push 1 */
  push32((uint32_t)(0x1u));
  /* 11352382 call 0x11352590 */
  push32(0x11352387u); f_11352590();
  /* 11352387 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1135238a:;
  /* 1135238a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1135238c mov cx, word ptr [0x1136f754] */
  CX = (r16((uint32_t)(0x1136f754)));
  /* 11352393 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11352395 jne 0x113523f2 */
  if (!C.zf) goto L_113523f2;
  /* 11352397 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11352399 mov dx, word ptr [0x1136f762] */
  DX = (r16((uint32_t)(0x1136f762)));
  /* 113523a0 push edx */
  push32((uint32_t)(EDX));
  /* 113523a1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113523a3 mov ax, word ptr [0x1136f760] */
  AX = (r16((uint32_t)(0x1136f760)));
  /* 113523a9 push eax */
  push32((uint32_t)(EAX));
  /* 113523aa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113523ac mov cx, word ptr [0x1136f75e] */
  CX = (r16((uint32_t)(0x1136f75e)));
  /* 113523b3 push ecx */
  push32((uint32_t)(ECX));
  /* 113523b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113523b6 mov dx, word ptr [0x1136f75c] */
  DX = (r16((uint32_t)(0x1136f75c)));
  /* 113523bd push edx */
  push32((uint32_t)(EDX));
  /* 113523be push 0 */
  push32((uint32_t)(0x0u));
  /* 113523c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113523c2 mov ax, word ptr [0x1136f758] */
  AX = (r16((uint32_t)(0x1136f758)));
  /* 113523c8 push eax */
  push32((uint32_t)(EAX));
  /* 113523c9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113523cb mov cx, word ptr [0x1136f75a] */
  CX = (r16((uint32_t)(0x1136f75a)));
  /* 113523d2 push ecx */
  push32((uint32_t)(ECX));
  /* 113523d3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113523d5 mov dx, word ptr [0x1136f756] */
  DX = (r16((uint32_t)(0x1136f756)));
  /* 113523dc push edx */
  push32((uint32_t)(EDX));
  /* 113523dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113523e0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 113523e3 push ecx */
  push32((uint32_t)(ECX));
  /* 113523e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 113523e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 113523e8 call 0x11352590 */
  push32(0x113523edu); f_11352590();
  /* 113523ed add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113523f0 jmp 0x11352443 */
  goto L_11352443;
L_113523f2:;
  /* 113523f2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113523f4 mov dx, word ptr [0x1136f762] */
  DX = (r16((uint32_t)(0x1136f762)));
  /* 113523fb push edx */
  push32((uint32_t)(EDX));
  /* 113523fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113523fe mov ax, word ptr [0x1136f760] */
  AX = (r16((uint32_t)(0x1136f760)));
  /* 11352404 push eax */
  push32((uint32_t)(EAX));
  /* 11352405 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11352407 mov cx, word ptr [0x1136f75e] */
  CX = (r16((uint32_t)(0x1136f75e)));
  /* 1135240e push ecx */
  push32((uint32_t)(ECX));
  /* 1135240f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11352411 mov dx, word ptr [0x1136f75c] */
  DX = (r16((uint32_t)(0x1136f75c)));
  /* 11352418 push edx */
  push32((uint32_t)(EDX));
  /* 11352419 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1135241b mov ax, word ptr [0x1136f75a] */
  AX = (r16((uint32_t)(0x1136f75a)));
  /* 11352421 push eax */
  push32((uint32_t)(EAX));
  /* 11352422 push 0 */
  push32((uint32_t)(0x0u));
  /* 11352424 push 0 */
  push32((uint32_t)(0x0u));
  /* 11352426 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11352428 mov cx, word ptr [0x1136f756] */
  CX = (r16((uint32_t)(0x1136f756)));
  /* 1135242f push ecx */
  push32((uint32_t)(ECX));
  /* 11352430 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11352433 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11352436 push eax */
  push32((uint32_t)(EAX));
  /* 11352437 push 0 */
  push32((uint32_t)(0x0u));
  /* 11352439 push 0 */
  push32((uint32_t)(0x0u));
  /* 1135243b call 0x11352590 */
  push32(0x11352440u); f_11352590();
  /* 11352440 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11352443:;
  /* 11352443 jmp 0x1135248b */
  goto L_1135248b;
L_11352445:;
  /* 11352445 push 0 */
  push32((uint32_t)(0x0u));
  /* 11352447 push 0 */
  push32((uint32_t)(0x0u));
  /* 11352449 push 0 */
  push32((uint32_t)(0x0u));
  /* 1135244b push 2 */
  push32((uint32_t)(0x2u));
  /* 1135244d push 0 */
  push32((uint32_t)(0x0u));
  /* 1135244f push 0 */
  push32((uint32_t)(0x0u));
  /* 11352451 push 1 */
  push32((uint32_t)(0x1u));
  /* 11352453 push 4 */
  push32((uint32_t)(0x4u));
  /* 11352455 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11352458 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1135245b push edx */
  push32((uint32_t)(EDX));
  /* 1135245c push 1 */
  push32((uint32_t)(0x1u));
  /* 1135245e push 1 */
  push32((uint32_t)(0x1u));
  /* 11352460 call 0x11352590 */
  push32(0x11352465u); f_11352590();
  /* 11352465 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11352468 push 0 */
  push32((uint32_t)(0x0u));
  /* 1135246a push 0 */
  push32((uint32_t)(0x0u));
  /* 1135246c push 0 */
  push32((uint32_t)(0x0u));
  /* 1135246e push 2 */
  push32((uint32_t)(0x2u));
  /* 11352470 push 0 */
  push32((uint32_t)(0x0u));
  /* 11352472 push 0 */
  push32((uint32_t)(0x0u));
  /* 11352474 push 5 */
  push32((uint32_t)(0x5u));
  /* 11352476 push 0xa */
  push32((uint32_t)(0xau));
  /* 11352478 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1135247b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1135247e push ecx */
  push32((uint32_t)(ECX));
  /* 1135247f push 1 */
  push32((uint32_t)(0x1u));
  /* 11352481 push 0 */
  push32((uint32_t)(0x0u));
  /* 11352483 call 0x11352590 */
  push32(0x11352488u); f_11352590();
  /* 11352488 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1135248b:;
  /* 1135248b mov edx, dword ptr [0x1136ee2c] */
  EDX = (r32((uint32_t)(0x1136ee2c)));
  /* 11352491 cmp edx, dword ptr [0x1136ee3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1136ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11352497 jge 0x113524e4 */
  if ((C.sf==C.of)) goto L_113524e4;
  /* 11352499 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1135249c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1135249f cmp ecx, dword ptr [0x1136ee2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1136ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113524a5 jl 0x113524b5 */
  if ((C.sf!=C.of)) goto L_113524b5;
  /* 113524a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113524aa mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 113524ad cmp eax, dword ptr [0x1136ee3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1136ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113524b3 jle 0x113524bc */
  if ((C.zf||C.sf!=C.of)) goto L_113524bc;
L_113524b5:;
  /* 113524b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113524b7 jmp 0x11352586 */
  goto L_11352586;
L_113524bc:;
  /* 113524bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113524bf mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 113524c2 cmp edx, dword ptr [0x1136ee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1136ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113524c8 jle 0x113524e2 */
  if ((C.zf||C.sf!=C.of)) goto L_113524e2;
  /* 113524ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113524cd mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 113524d0 cmp ecx, dword ptr [0x1136ee3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1136ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113524d6 jge 0x113524e2 */
  if ((C.sf==C.of)) goto L_113524e2;
  /* 113524d8 mov eax, 1 */
  EAX = (0x1u);
  /* 113524dd jmp 0x11352586 */
  goto L_11352586;
L_113524e2:;
  /* 113524e2 jmp 0x11352527 */
  goto L_11352527;
L_113524e4:;
  /* 113524e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113524e7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 113524ea cmp eax, dword ptr [0x1136ee3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1136ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113524f0 jl 0x11352500 */
  if ((C.sf!=C.of)) goto L_11352500;
  /* 113524f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113524f5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 113524f8 cmp edx, dword ptr [0x1136ee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1136ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113524fe jle 0x11352507 */
  if ((C.zf||C.sf!=C.of)) goto L_11352507;
L_11352500:;
  /* 11352500 mov eax, 1 */
  EAX = (0x1u);
  /* 11352505 jmp 0x11352586 */
  goto L_11352586;
L_11352507:;
  /* 11352507 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1135250a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1135250d cmp ecx, dword ptr [0x1136ee3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1136ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11352513 jle 0x11352527 */
  if ((C.zf||C.sf!=C.of)) goto L_11352527;
  /* 11352515 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11352518 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1135251b cmp eax, dword ptr [0x1136ee2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1136ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11352521 jge 0x11352527 */
  if ((C.sf==C.of)) goto L_11352527;
  /* 11352523 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11352525 jmp 0x11352586 */
  goto L_11352586;
L_11352527:;
  /* 11352527 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1135252a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1135252d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11352530 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11352533 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11352535 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11352537 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1135253a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1135253d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11352543 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11352545 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1135254b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1135254e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11352551 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11352554 cmp edx, dword ptr [0x1136ee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1136ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1135255a jne 0x11352572 */
  if (!C.zf) goto L_11352572;
  /* 1135255c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1135255f cmp eax, dword ptr [0x1136ee30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1136ee30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11352565 jl 0x1135256e */
  if ((C.sf!=C.of)) goto L_1135256e;
  /* 11352567 mov eax, 1 */
  EAX = (0x1u);
  /* 1135256c jmp 0x11352586 */
  goto L_11352586;
L_1135256e:;
  /* 1135256e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11352570 jmp 0x11352586 */
  goto L_11352586;
L_11352572:;
  /* 11352572 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11352575 cmp ecx, dword ptr [0x1136ee40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1136ee40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1135257b jge 0x11352584 */
  if ((C.sf==C.of)) goto L_11352584;
  /* 1135257d mov eax, 1 */
  EAX = (0x1u);
  /* 11352582 jmp 0x11352586 */
  goto L_11352586;
L_11352584:;
  /* 11352584 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11352586:;
  /* 11352586 mov esp, ebp */
  ESP = (EBP);
  /* 11352588 pop ebp */
  EBP = (pop32());
  /* 11352589 ret  */
  ESPCHK(0x11352290u, _esp0);
  ESP += 4; return;
}

/* FUN_10012590 @ 0x11352590 (504 bytes, 145 insns) */
void f_11352590(void) {
  FTRACE(0x11352590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11352590 push ebp */
  push32((uint32_t)(EBP));
  /* 11352591 mov ebp, esp */
  EBP = (ESP);
  /* 11352593 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11352596 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1135259a jne 0x1135266c */
  if (!C.zf) goto L_1135266c;
  /* 113525a0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113525a3 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 113525a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113525a8 jne 0x113525b9 */
  if (!C.zf) goto L_113525b9;
  /* 113525aa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113525ad mov edx, dword ptr [ecx*4 + 0x1136ee4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1136ee4c)));
  /* 113525b4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 113525b7 jmp 0x113525c6 */
  goto L_113525c6;
L_113525b9:;
  /* 113525b9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113525bc mov ecx, dword ptr [eax*4 + 0x1136ee80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1136ee80)));
  /* 113525c3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_113525c6:;
  /* 113525c6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113525c9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113525cc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 113525cf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113525d2 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113525d5 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113525db mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113525de add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113525e0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113525e3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113525e6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 113525e9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 113525ed cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 113525ee mov ecx, 7 */
  ECX = (0x7u);
  /* 113525f3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 113525f5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113525f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113525fb cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113525fe jge 0x11352619 */
  if ((C.sf==C.of)) goto L_11352619;
  /* 11352600 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11352603 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11352606 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11352609 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1135260c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1135260f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11352612 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11352614 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11352617 jmp 0x1135262d */
  goto L_1135262d;
L_11352619:;
  /* 11352619 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1135261c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1135261f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11352622 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11352625 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11352628 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1135262a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1135262d:;
  /* 1135262d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11352631 jne 0x1135266a */
  if (!C.zf) goto L_1135266a;
  /* 11352633 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11352636 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11352639 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1135263b jne 0x1135264c */
  if (!C.zf) goto L_1135264c;
  /* 1135263d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11352640 mov eax, dword ptr [edx*4 + 0x1136ee50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1136ee50)));
  /* 11352647 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1135264a jmp 0x11352659 */
  goto L_11352659;
L_1135264c:;
  /* 1135264c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1135264f mov edx, dword ptr [ecx*4 + 0x1136ee84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1136ee84)));
  /* 11352656 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11352659:;
  /* 11352659 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1135265c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1135265f jle 0x1135266a */
  if ((C.zf||C.sf!=C.of)) goto L_1135266a;
  /* 11352661 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11352664 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11352667 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1135266a:;
  /* 1135266a jmp 0x113526a1 */
  goto L_113526a1;
L_1135266c:;
  /* 1135266c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1135266f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11352672 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11352674 jne 0x11352685 */
  if (!C.zf) goto L_11352685;
  /* 11352676 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11352679 mov ecx, dword ptr [eax*4 + 0x1136ee4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1136ee4c)));
  /* 11352680 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11352683 jmp 0x11352692 */
  goto L_11352692;
L_11352685:;
  /* 11352685 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11352688 mov eax, dword ptr [edx*4 + 0x1136ee80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1136ee80)));
  /* 1135268f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11352692:;
  /* 11352692 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11352695 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11352698 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1135269b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1135269e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_113526a1:;
  /* 113526a1 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113526a5 jne 0x113526e1 */
  if (!C.zf) goto L_113526e1;
  /* 113526a7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113526aa mov dword ptr [0x1136ee2c], eax */
  w32((uint32_t)(0x1136ee2c), (EAX));
  /* 113526af mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 113526b2 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113526b5 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 113526b8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113526ba imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113526bd mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 113526c0 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113526c2 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113526c8 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 113526cb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113526cd mov dword ptr [0x1136ee30], ecx */
  w32((uint32_t)(0x1136ee30), (ECX));
  /* 113526d3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113526d6 mov dword ptr [0x1136ee28], edx */
  w32((uint32_t)(0x1136ee28), (EDX));
  /* 113526dc jmp 0x11352784 */
  goto L_11352784;
L_113526e1:;
  /* 113526e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113526e4 mov dword ptr [0x1136ee3c], eax */
  w32((uint32_t)(0x1136ee3c), (EAX));
  /* 113526e9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 113526ec imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113526ef mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 113526f2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113526f4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113526f7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 113526fa add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113526fc imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11352702 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 11352705 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11352707 mov dword ptr [0x1136ee40], ecx */
  w32((uint32_t)(0x1136ee40), (ECX));
  /* 1135270d mov edx, dword ptr [0x1136ed98] */
  EDX = (r32((uint32_t)(0x1136ed98)));
  /* 11352713 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11352719 mov eax, dword ptr [0x1136ee40] */
  EAX = (r32((uint32_t)(0x1136ee40)));
  /* 1135271e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11352720 mov dword ptr [0x1136ee40], eax */
  w32((uint32_t)(0x1136ee40), (EAX));
  /* 11352725 cmp dword ptr [0x1136ee40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136ee40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1135272c jge 0x11352751 */
  if ((C.sf==C.of)) goto L_11352751;
  /* 1135272e mov ecx, dword ptr [0x1136ee40] */
  ECX = (r32((uint32_t)(0x1136ee40)));
  /* 11352734 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1135273a mov dword ptr [0x1136ee40], ecx */
  w32((uint32_t)(0x1136ee40), (ECX));
  /* 11352740 mov edx, dword ptr [0x1136ee3c] */
  EDX = (r32((uint32_t)(0x1136ee3c)));
  /* 11352746 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11352749 mov dword ptr [0x1136ee3c], edx */
  w32((uint32_t)(0x1136ee3c), (EDX));
  /* 1135274f jmp 0x1135277b */
  goto L_1135277b;
L_11352751:;
  /* 11352751 cmp dword ptr [0x1136ee40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x1136ee40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1135275b jl 0x1135277b */
  if ((C.sf!=C.of)) goto L_1135277b;
  /* 1135275d mov eax, dword ptr [0x1136ee40] */
  EAX = (r32((uint32_t)(0x1136ee40)));
  /* 11352762 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11352767 mov dword ptr [0x1136ee40], eax */
  w32((uint32_t)(0x1136ee40), (EAX));
  /* 1135276c mov ecx, dword ptr [0x1136ee3c] */
  ECX = (r32((uint32_t)(0x1136ee3c)));
  /* 11352772 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11352775 mov dword ptr [0x1136ee3c], ecx */
  w32((uint32_t)(0x1136ee3c), (ECX));
L_1135277b:;
  /* 1135277b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1135277e mov dword ptr [0x1136ee38], edx */
  w32((uint32_t)(0x1136ee38), (EDX));
L_11352784:;
  /* 11352784 mov esp, ebp */
  ESP = (EBP);
  /* 11352786 pop ebp */
  EBP = (pop32());
  /* 11352787 ret  */
  ESPCHK(0x11352590u, _esp0);
  ESP += 4; return;
}

/* FUN_10012790 @ 0x11352790 (382 bytes, 135 insns) */
void f_11352790(void) {
  FTRACE(0x11352790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11352790 push ebp */
  push32((uint32_t)(EBP));
  /* 11352791 mov ebp, esp */
  EBP = (ESP);
  /* 11352793 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11352795 push 0x1136b8d0 */
  push32((uint32_t)(0x1136b8d0u));
  /* 1135279a push 0x1134c458 */
  push32((uint32_t)(0x1134c458u));
  /* 1135279f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 113527a5 push eax */
  push32((uint32_t)(EAX));
  /* 113527a6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 113527ad add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113527b0 push ebx */
  push32((uint32_t)(EBX));
  /* 113527b1 push esi */
  push32((uint32_t)(ESI));
  /* 113527b2 push edi */
  push32((uint32_t)(EDI));
  /* 113527b3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 113527b6 cmp dword ptr [0x1136f7c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f7c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113527bd jne 0x11352802 */
  if (!C.zf) goto L_11352802;
  /* 113527bf push 0 */
  push32((uint32_t)(0x0u));
  /* 113527c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 113527c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 113527c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 113527c7 call dword ptr [0x113712a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712a0))), 0x113527cdu);
  /* 113527cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113527cf je 0x113527dd */
  if (C.zf) goto L_113527dd;
  /* 113527d1 mov dword ptr [0x1136f7c4], 1 */
  w32((uint32_t)(0x1136f7c4), (0x1u));
  /* 113527db jmp 0x11352802 */
  goto L_11352802;
L_113527dd:;
  /* 113527dd push 0 */
  push32((uint32_t)(0x0u));
  /* 113527df push 0 */
  push32((uint32_t)(0x0u));
  /* 113527e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 113527e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 113527e5 call dword ptr [0x113712b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712b8))), 0x113527ebu);
  /* 113527eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113527ed je 0x113527fb */
  if (C.zf) goto L_113527fb;
  /* 113527ef mov dword ptr [0x1136f7c4], 2 */
  w32((uint32_t)(0x1136f7c4), (0x2u));
  /* 113527f9 jmp 0x11352802 */
  goto L_11352802;
L_113527fb:;
  /* 113527fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113527fd jmp 0x11352911 */
  goto L_11352911;
L_11352802:;
  /* 11352802 cmp dword ptr [0x1136f7c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1136f7c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11352809 jne 0x11352826 */
  if (!C.zf) goto L_11352826;
  /* 1135280b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1135280e push eax */
  push32((uint32_t)(EAX));
  /* 1135280f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11352812 push ecx */
  push32((uint32_t)(ECX));
  /* 11352813 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11352816 push edx */
  push32((uint32_t)(EDX));
  /* 11352817 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1135281a push eax */
  push32((uint32_t)(EAX));
  /* 1135281b call dword ptr [0x113712a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712a0))), 0x11352821u);
  /* 11352821 jmp 0x11352911 */
  goto L_11352911;
L_11352826:;
  /* 11352826 cmp dword ptr [0x1136f7c4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1136f7c4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1135282d jne 0x1135290f */
  if (!C.zf) goto L_1135290f;
  /* 11352833 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11352837 jne 0x11352842 */
  if (!C.zf) goto L_11352842;
  /* 11352839 mov ecx, dword ptr [0x1136f678] */
  ECX = (r32((uint32_t)(0x1136f678)));
  /* 1135283f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11352842:;
  /* 11352842 push 0 */
  push32((uint32_t)(0x0u));
  /* 11352844 push 0 */
  push32((uint32_t)(0x0u));
  /* 11352846 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11352849 push edx */
  push32((uint32_t)(EDX));
  /* 1135284a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1135284d push eax */
  push32((uint32_t)(EAX));
  /* 1135284e call dword ptr [0x113712b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712b8))), 0x11352854u);
  /* 11352854 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11352857 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1135285b jne 0x11352864 */
  if (!C.zf) goto L_11352864;
  /* 1135285d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1135285f jmp 0x11352911 */
  goto L_11352911;
L_11352864:;
  /* 11352864 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1135286b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1135286e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11352871 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11352873 call 0x113464f0 */
  push32(0x11352878u); f_113464f0();
  /* 11352878 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 1135287b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1135287e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11352881 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11352884 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1135288b jmp 0x113528a4 */
  goto L_113528a4;
  /* 1135288d mov eax, 1 */
  EAX = (0x1u);
  /* 11352892 ret  */
  ESPCHK(0x11352790u, _esp0);
  ESP += 4; return;
  /* 11352893 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11352896 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1135289d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_113528a4:;
  /* 113528a4 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113528a8 jne 0x113528ae */
  if (!C.zf) goto L_113528ae;
  /* 113528aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113528ac jmp 0x11352911 */
  goto L_11352911;
L_113528ae:;
  /* 113528ae mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113528b1 push edx */
  push32((uint32_t)(EDX));
  /* 113528b2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 113528b5 push eax */
  push32((uint32_t)(EAX));
  /* 113528b6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113528b9 push ecx */
  push32((uint32_t)(ECX));
  /* 113528ba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113528bd push edx */
  push32((uint32_t)(EDX));
  /* 113528be call dword ptr [0x113712b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712b8))), 0x113528c4u);
  /* 113528c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113528c6 jne 0x113528cc */
  if (!C.zf) goto L_113528cc;
  /* 113528c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113528ca jmp 0x11352911 */
  goto L_11352911;
L_113528cc:;
  /* 113528cc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113528d0 jne 0x113528ed */
  if (!C.zf) goto L_113528ed;
  /* 113528d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 113528d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 113528d6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 113528d8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 113528db push eax */
  push32((uint32_t)(EAX));
  /* 113528dc push 1 */
  push32((uint32_t)(0x1u));
  /* 113528de mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 113528e1 push ecx */
  push32((uint32_t)(ECX));
  /* 113528e2 call dword ptr [0x113712e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712e8))), 0x113528e8u);
  /* 113528e8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 113528eb jmp 0x1135290a */
  goto L_1135290a;
L_113528ed:;
  /* 113528ed mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113528f0 push edx */
  push32((uint32_t)(EDX));
  /* 113528f1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113528f4 push eax */
  push32((uint32_t)(EAX));
  /* 113528f5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 113528f7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 113528fa push ecx */
  push32((uint32_t)(ECX));
  /* 113528fb push 1 */
  push32((uint32_t)(0x1u));
  /* 113528fd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11352900 push edx */
  push32((uint32_t)(EDX));
  /* 11352901 call dword ptr [0x113712e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712e8))), 0x11352907u);
  /* 11352907 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1135290a:;
  /* 1135290a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1135290d jmp 0x11352911 */
  goto L_11352911;
L_1135290f:;
  /* 1135290f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11352911:;
  /* 11352911 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11352914 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11352917 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1135291e pop edi */
  EDI = (pop32());
  /* 1135291f pop esi */
  ESI = (pop32());
  /* 11352920 pop ebx */
  EBX = (pop32());
  /* 11352921 mov esp, ebp */
  ESP = (EBP);
  /* 11352923 pop ebp */
  EBP = (pop32());
  /* 11352924 ret  */
  ESPCHK(0x11352790u, _esp0);
  ESP += 4; return;
}

/* FUN_10012930 @ 0x11352930 (398 bytes, 140 insns) */
void f_11352930(void) {
  FTRACE(0x11352930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11352930 push ebp */
  push32((uint32_t)(EBP));
  /* 11352931 mov ebp, esp */
  EBP = (ESP);
  /* 11352933 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11352935 push 0x1136b8e0 */
  push32((uint32_t)(0x1136b8e0u));
  /* 1135293a push 0x1134c458 */
  push32((uint32_t)(0x1134c458u));
  /* 1135293f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11352945 push eax */
  push32((uint32_t)(EAX));
  /* 11352946 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1135294d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11352950 push ebx */
  push32((uint32_t)(EBX));
  /* 11352951 push esi */
  push32((uint32_t)(ESI));
  /* 11352952 push edi */
  push32((uint32_t)(EDI));
  /* 11352953 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11352956 cmp dword ptr [0x1136f7c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f7c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1135295d jne 0x113529a2 */
  if (!C.zf) goto L_113529a2;
  /* 1135295f push 0 */
  push32((uint32_t)(0x0u));
  /* 11352961 push 0 */
  push32((uint32_t)(0x0u));
  /* 11352963 push 1 */
  push32((uint32_t)(0x1u));
  /* 11352965 push 0 */
  push32((uint32_t)(0x0u));
  /* 11352967 call dword ptr [0x113712a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712a0))), 0x1135296du);
  /* 1135296d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1135296f je 0x1135297d */
  if (C.zf) goto L_1135297d;
  /* 11352971 mov dword ptr [0x1136f7c8], 1 */
  w32((uint32_t)(0x1136f7c8), (0x1u));
  /* 1135297b jmp 0x113529a2 */
  goto L_113529a2;
L_1135297d:;
  /* 1135297d push 0 */
  push32((uint32_t)(0x0u));
  /* 1135297f push 0 */
  push32((uint32_t)(0x0u));
  /* 11352981 push 1 */
  push32((uint32_t)(0x1u));
  /* 11352983 push 0 */
  push32((uint32_t)(0x0u));
  /* 11352985 call dword ptr [0x113712b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712b8))), 0x1135298bu);
  /* 1135298b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1135298d je 0x1135299b */
  if (C.zf) goto L_1135299b;
  /* 1135298f mov dword ptr [0x1136f7c8], 2 */
  w32((uint32_t)(0x1136f7c8), (0x2u));
  /* 11352999 jmp 0x113529a2 */
  goto L_113529a2;
L_1135299b:;
  /* 1135299b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1135299d jmp 0x11352ac1 */
  goto L_11352ac1;
L_113529a2:;
  /* 113529a2 cmp dword ptr [0x1136f7c8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1136f7c8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113529a9 jne 0x113529c6 */
  if (!C.zf) goto L_113529c6;
  /* 113529ab mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113529ae push eax */
  push32((uint32_t)(EAX));
  /* 113529af mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113529b2 push ecx */
  push32((uint32_t)(ECX));
  /* 113529b3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113529b6 push edx */
  push32((uint32_t)(EDX));
  /* 113529b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113529ba push eax */
  push32((uint32_t)(EAX));
  /* 113529bb call dword ptr [0x113712b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712b8))), 0x113529c1u);
  /* 113529c1 jmp 0x11352ac1 */
  goto L_11352ac1;
L_113529c6:;
  /* 113529c6 cmp dword ptr [0x1136f7c8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1136f7c8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113529cd jne 0x11352abf */
  if (!C.zf) goto L_11352abf;
  /* 113529d3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113529d7 jne 0x113529e2 */
  if (!C.zf) goto L_113529e2;
  /* 113529d9 mov ecx, dword ptr [0x1136f678] */
  ECX = (r32((uint32_t)(0x1136f678)));
  /* 113529df mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_113529e2:;
  /* 113529e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 113529e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 113529e6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113529e9 push edx */
  push32((uint32_t)(EDX));
  /* 113529ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113529ed push eax */
  push32((uint32_t)(EAX));
  /* 113529ee call dword ptr [0x113712a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712a0))), 0x113529f4u);
  /* 113529f4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 113529f7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113529fb jne 0x11352a04 */
  if (!C.zf) goto L_11352a04;
  /* 113529fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113529ff jmp 0x11352ac1 */
  goto L_11352ac1;
L_11352a04:;
  /* 11352a04 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11352a0b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11352a0e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11352a10 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11352a13 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11352a15 call 0x113464f0 */
  push32(0x11352a1au); f_113464f0();
  /* 11352a1a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 11352a1d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11352a20 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11352a23 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11352a26 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11352a2d jmp 0x11352a46 */
  goto L_11352a46;
  /* 11352a2f mov eax, 1 */
  EAX = (0x1u);
  /* 11352a34 ret  */
  ESPCHK(0x11352930u, _esp0);
  ESP += 4; return;
  /* 11352a35 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11352a38 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11352a3f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11352a46:;
  /* 11352a46 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11352a4a jne 0x11352a50 */
  if (!C.zf) goto L_11352a50;
  /* 11352a4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11352a4e jmp 0x11352ac1 */
  goto L_11352ac1;
L_11352a50:;
  /* 11352a50 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11352a53 push edx */
  push32((uint32_t)(EDX));
  /* 11352a54 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11352a57 push eax */
  push32((uint32_t)(EAX));
  /* 11352a58 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11352a5b push ecx */
  push32((uint32_t)(ECX));
  /* 11352a5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11352a5f push edx */
  push32((uint32_t)(EDX));
  /* 11352a60 call dword ptr [0x113712a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712a0))), 0x11352a66u);
  /* 11352a66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11352a68 jne 0x11352a6e */
  if (!C.zf) goto L_11352a6e;
  /* 11352a6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11352a6c jmp 0x11352ac1 */
  goto L_11352ac1;
L_11352a6e:;
  /* 11352a6e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11352a72 jne 0x11352a96 */
  if (!C.zf) goto L_11352a96;
  /* 11352a74 push 0 */
  push32((uint32_t)(0x0u));
  /* 11352a76 push 0 */
  push32((uint32_t)(0x0u));
  /* 11352a78 push 0 */
  push32((uint32_t)(0x0u));
  /* 11352a7a push 0 */
  push32((uint32_t)(0x0u));
  /* 11352a7c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11352a7e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11352a81 push eax */
  push32((uint32_t)(EAX));
  /* 11352a82 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11352a87 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11352a8a push ecx */
  push32((uint32_t)(ECX));
  /* 11352a8b call dword ptr [0x11371390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371390))), 0x11352a91u);
  /* 11352a91 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11352a94 jmp 0x11352aba */
  goto L_11352aba;
L_11352a96:;
  /* 11352a96 push 0 */
  push32((uint32_t)(0x0u));
  /* 11352a98 push 0 */
  push32((uint32_t)(0x0u));
  /* 11352a9a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11352a9d push edx */
  push32((uint32_t)(EDX));
  /* 11352a9e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11352aa1 push eax */
  push32((uint32_t)(EAX));
  /* 11352aa2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11352aa4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11352aa7 push ecx */
  push32((uint32_t)(ECX));
  /* 11352aa8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11352aad mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11352ab0 push edx */
  push32((uint32_t)(EDX));
  /* 11352ab1 call dword ptr [0x11371390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371390))), 0x11352ab7u);
  /* 11352ab7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11352aba:;
  /* 11352aba mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11352abd jmp 0x11352ac1 */
  goto L_11352ac1;
L_11352abf:;
  /* 11352abf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11352ac1:;
  /* 11352ac1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11352ac4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11352ac7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11352ace pop edi */
  EDI = (pop32());
  /* 11352acf pop esi */
  ESI = (pop32());
  /* 11352ad0 pop ebx */
  EBX = (pop32());
  /* 11352ad1 mov esp, ebp */
  ESP = (EBP);
  /* 11352ad3 pop ebp */
  EBP = (pop32());
  /* 11352ad4 ret  */
  ESPCHK(0x11352930u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ae0 @ 0x11352ae0 (11 bytes, 6 insns) */
void f_11352ae0(void) {
  FTRACE(0x11352ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11352ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 11352ae1 mov ebp, esp */
  EBP = (ESP);
  /* 11352ae3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11352ae6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11352ae9 pop ebp */
  EBP = (pop32());
  /* 11352aea ret  */
  ESPCHK(0x11352ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012af0 @ 0x11352af0 (147 bytes, 43 insns) */
void f_11352af0(void) {
  FTRACE(0x11352af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11352af0 push ebp */
  push32((uint32_t)(EBP));
  /* 11352af1 mov ebp, esp */
  EBP = (ESP);
  /* 11352af3 push ecx */
  push32((uint32_t)(ECX));
  /* 11352af4 cmp dword ptr [0x1136f668], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f668))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11352afb jne 0x11352b17 */
  if (!C.zf) goto L_11352b17;
  /* 11352afd cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11352b01 jl 0x11352b12 */
  if ((C.sf!=C.of)) goto L_11352b12;
  /* 11352b03 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11352b07 jg 0x11352b12 */
  if ((!C.zf&&C.sf==C.of)) goto L_11352b12;
  /* 11352b09 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11352b0c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11352b0f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11352b12:;
  /* 11352b12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11352b15 jmp 0x11352b7f */
  goto L_11352b7f;
L_11352b17:;
  /* 11352b17 push 0x1136f7f4 */
  push32((uint32_t)(0x1136f7f4u));
  /* 11352b1c call dword ptr [0x11371338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371338))), 0x11352b22u);
  /* 11352b22 cmp dword ptr [0x1136f7e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f7e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11352b29 je 0x11352b49 */
  if (C.zf) goto L_11352b49;
  /* 11352b2b push 0x1136f7f4 */
  push32((uint32_t)(0x1136f7f4u));
  /* 11352b30 call dword ptr [0x11371328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371328))), 0x11352b36u);
  /* 11352b36 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11352b38 call 0x11346d50 */
  push32(0x11352b3du); f_11346d50();
  /* 11352b3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11352b40 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11352b47 jmp 0x11352b50 */
  goto L_11352b50;
L_11352b49:;
  /* 11352b49 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11352b50:;
  /* 11352b50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11352b53 push ecx */
  push32((uint32_t)(ECX));
  /* 11352b54 call 0x11352b90 */
  push32(0x11352b59u); f_11352b90();
  /* 11352b59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11352b5c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11352b5f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11352b63 je 0x11352b71 */
  if (C.zf) goto L_11352b71;
  /* 11352b65 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11352b67 call 0x11346df0 */
  push32(0x11352b6cu); f_11346df0();
  /* 11352b6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11352b6f jmp 0x11352b7c */
  goto L_11352b7c;
L_11352b71:;
  /* 11352b71 push 0x1136f7f4 */
  push32((uint32_t)(0x1136f7f4u));
  /* 11352b76 call dword ptr [0x11371328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371328))), 0x11352b7cu);
L_11352b7c:;
  /* 11352b7c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11352b7f:;
  /* 11352b7f mov esp, ebp */
  ESP = (EBP);
  /* 11352b81 pop ebp */
  EBP = (pop32());
  /* 11352b82 ret  */
  ESPCHK(0x11352af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b90 @ 0x11352b90 (299 bytes, 91 insns) */
void f_11352b90(void) {
  FTRACE(0x11352b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11352b90 push ebp */
  push32((uint32_t)(EBP));
  /* 11352b91 mov ebp, esp */
  EBP = (ESP);
  /* 11352b93 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11352b96 cmp dword ptr [0x1136f668], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f668))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11352b9d jne 0x11352bbc */
  if (!C.zf) goto L_11352bbc;
  /* 11352b9f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11352ba3 jl 0x11352bb4 */
  if ((C.sf!=C.of)) goto L_11352bb4;
  /* 11352ba5 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11352ba9 jg 0x11352bb4 */
  if ((!C.zf&&C.sf==C.of)) goto L_11352bb4;
  /* 11352bab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11352bae add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11352bb1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11352bb4:;
  /* 11352bb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11352bb7 jmp 0x11352cb7 */
  goto L_11352cb7;
L_11352bbc:;
  /* 11352bbc cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11352bc3 jge 0x11352c03 */
  if ((C.sf==C.of)) goto L_11352c03;
  /* 11352bc5 cmp dword ptr [0x1136dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1136dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11352bcc jle 0x11352be1 */
  if ((C.zf||C.sf!=C.of)) goto L_11352be1;
  /* 11352bce push 1 */
  push32((uint32_t)(0x1u));
  /* 11352bd0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11352bd3 push ecx */
  push32((uint32_t)(ECX));
  /* 11352bd4 call 0x11349360 */
  push32(0x11352bd9u); f_11349360();
  /* 11352bd9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11352bdc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11352bdf jmp 0x11352bf5 */
  goto L_11352bf5;
L_11352be1:;
  /* 11352be1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11352be4 mov eax, dword ptr [0x1136dc98] */
  EAX = (r32((uint32_t)(0x1136dc98)));
  /* 11352be9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11352beb mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11352bef and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11352bf2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11352bf5:;
  /* 11352bf5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11352bf9 jne 0x11352c03 */
  if (!C.zf) goto L_11352c03;
  /* 11352bfb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11352bfe jmp 0x11352cb7 */
  goto L_11352cb7;
L_11352c03:;
  /* 11352c03 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11352c06 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11352c09 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11352c0f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11352c15 mov eax, dword ptr [0x1136dc98] */
  EAX = (r32((uint32_t)(0x1136dc98)));
  /* 11352c1a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11352c1c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11352c20 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11352c26 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11352c28 je 0x11352c4c */
  if (C.zf) goto L_11352c4c;
  /* 11352c2a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11352c2d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11352c30 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11352c36 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 11352c39 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11352c3c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 11352c3f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 11352c43 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11352c4a jmp 0x11352c5d */
  goto L_11352c5d;
L_11352c4c:;
  /* 11352c4c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 11352c4f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11352c52 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 11352c56 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_11352c5d:;
  /* 11352c5d push 1 */
  push32((uint32_t)(0x1u));
  /* 11352c5f push 0 */
  push32((uint32_t)(0x0u));
  /* 11352c61 push 3 */
  push32((uint32_t)(0x3u));
  /* 11352c63 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11352c66 push edx */
  push32((uint32_t)(EDX));
  /* 11352c67 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11352c6a push eax */
  push32((uint32_t)(EAX));
  /* 11352c6b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11352c6e push ecx */
  push32((uint32_t)(ECX));
  /* 11352c6f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11352c74 mov edx, dword ptr [0x1136f668] */
  EDX = (r32((uint32_t)(0x1136f668)));
  /* 11352c7a push edx */
  push32((uint32_t)(EDX));
  /* 11352c7b call 0x1134b740 */
  push32(0x11352c80u); f_1134b740();
  /* 11352c80 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11352c83 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11352c86 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11352c8a jne 0x11352c91 */
  if (!C.zf) goto L_11352c91;
  /* 11352c8c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11352c8f jmp 0x11352cb7 */
  goto L_11352cb7;
L_11352c91:;
  /* 11352c91 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11352c95 jne 0x11352ca1 */
  if (!C.zf) goto L_11352ca1;
  /* 11352c97 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11352c9a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11352c9f jmp 0x11352cb7 */
  goto L_11352cb7;
L_11352ca1:;
  /* 11352ca1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11352ca4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11352ca9 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 11352cac and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11352cb2 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11352cb5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11352cb7:;
  /* 11352cb7 mov esp, ebp */
  ESP = (EBP);
  /* 11352cb9 pop ebp */
  EBP = (pop32());
  /* 11352cba ret  */
  ESPCHK(0x11352b90u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x11352cc0 (52 bytes, 19 insns) */
void f_11352cc0(void) {
  FTRACE(0x11352cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11352cc0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11352cc4 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11352cc8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11352cca mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11352cce jne 0x11352cd9 */
  if (!C.zf) goto L_11352cd9;
  /* 11352cd0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11352cd4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11352cd6 ret 0x10 */
  ESPCHK(0x11352cc0u, _esp0);
  ESP += 20; return;
L_11352cd9:;
  /* 11352cd9 push ebx */
  push32((uint32_t)(EBX));
  /* 11352cda mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11352cdc mov ebx, eax */
  EBX = (EAX);
  /* 11352cde mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11352ce2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11352ce6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11352ce8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11352cec mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11352cee add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11352cf0 pop ebx */
  EBX = (pop32());
  /* 11352cf1 ret 0x10 */
  ESPCHK(0x11352cc0u, _esp0);
  ESP += 20; return;
}

/* FUN_10012d00 @ 0x11352d00 (46 bytes, 18 insns) */
void f_11352d00(void) {
  FTRACE(0x11352d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11352d00 push ebp */
  push32((uint32_t)(EBP));
  /* 11352d01 mov ebp, esp */
  EBP = (ESP);
  /* 11352d03 push ecx */
  push32((uint32_t)(ECX));
  /* 11352d04 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11352d06 call 0x11346d50 */
  push32(0x11352d0bu); f_11346d50();
  /* 11352d0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11352d0e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11352d11 push eax */
  push32((uint32_t)(EAX));
  /* 11352d12 call 0x11352d30 */
  push32(0x11352d17u); f_11352d30();
  /* 11352d17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11352d1a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11352d1d push 0xc */
  push32((uint32_t)(0xcu));
  /* 11352d1f call 0x11346df0 */
  push32(0x11352d24u); f_11346df0();
  /* 11352d24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11352d27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11352d2a mov esp, ebp */
  ESP = (EBP);
  /* 11352d2c pop ebp */
  EBP = (pop32());
  /* 11352d2d ret  */
  ESPCHK(0x11352d00u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x11352d30 (198 bytes, 69 insns) */
void f_11352d30(void) {
  FTRACE(0x11352d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11352d30 push ebp */
  push32((uint32_t)(EBP));
  /* 11352d31 mov ebp, esp */
  EBP = (ESP);
  /* 11352d33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11352d36 mov eax, dword ptr [0x1136f484] */
  EAX = (r32((uint32_t)(0x1136f484)));
  /* 11352d3b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11352d3e cmp dword ptr [0x11370f80], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11370f80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11352d45 jne 0x11352d4e */
  if (!C.zf) goto L_11352d4e;
  /* 11352d47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11352d49 jmp 0x11352df2 */
  goto L_11352df2;
L_11352d4e:;
  /* 11352d4e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11352d52 jne 0x11352d76 */
  if (!C.zf) goto L_11352d76;
  /* 11352d54 cmp dword ptr [0x1136f48c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f48c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11352d5b je 0x11352d76 */
  if (C.zf) goto L_11352d76;
  /* 11352d5d call 0x11352e50 */
  push32(0x11352d62u); f_11352e50();
  /* 11352d62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11352d64 je 0x11352d6d */
  if (C.zf) goto L_11352d6d;
  /* 11352d66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11352d68 jmp 0x11352df2 */
  goto L_11352df2;
L_11352d6d:;
  /* 11352d6d mov ecx, dword ptr [0x1136f484] */
  ECX = (r32((uint32_t)(0x1136f484)));
  /* 11352d73 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11352d76:;
  /* 11352d76 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11352d7a je 0x11352df0 */
  if (C.zf) goto L_11352df0;
  /* 11352d7c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11352d80 je 0x11352df0 */
  if (C.zf) goto L_11352df0;
  /* 11352d82 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11352d85 push edx */
  push32((uint32_t)(EDX));
  /* 11352d86 call 0x11346180 */
  push32(0x11352d8bu); f_11346180();
  /* 11352d8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11352d8e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11352d91:;
  /* 11352d91 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11352d94 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11352d97 je 0x11352df0 */
  if (C.zf) goto L_11352df0;
  /* 11352d99 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11352d9c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11352d9e push edx */
  push32((uint32_t)(EDX));
  /* 11352d9f call 0x11346180 */
  push32(0x11352da4u); f_11346180();
  /* 11352da4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11352da7 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11352daa jbe 0x11352de5 */
  if ((C.cf||C.zf)) goto L_11352de5;
  /* 11352dac mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11352daf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11352db1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11352db4 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 11352db8 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11352dbb jne 0x11352de5 */
  if (!C.zf) goto L_11352de5;
  /* 11352dbd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11352dc0 push ecx */
  push32((uint32_t)(ECX));
  /* 11352dc1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11352dc4 push edx */
  push32((uint32_t)(EDX));
  /* 11352dc5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11352dc8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11352dca push ecx */
  push32((uint32_t)(ECX));
  /* 11352dcb call 0x11352e00 */
  push32(0x11352dd0u); f_11352e00();
  /* 11352dd0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11352dd3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11352dd5 jne 0x11352de5 */
  if (!C.zf) goto L_11352de5;
  /* 11352dd7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11352dda mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11352ddc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11352ddf lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 11352de3 jmp 0x11352df2 */
  goto L_11352df2;
L_11352de5:;
  /* 11352de5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11352de8 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11352deb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11352dee jmp 0x11352d91 */
  goto L_11352d91;
L_11352df0:;
  /* 11352df0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11352df2:;
  /* 11352df2 mov esp, ebp */
  ESP = (EBP);
  /* 11352df4 pop ebp */
  EBP = (pop32());
  /* 11352df5 ret  */
  ESPCHK(0x11352d30u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x11352e00 (79 bytes, 32 insns) */
void f_11352e00(void) {
  FTRACE(0x11352e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11352e00 push ebp */
  push32((uint32_t)(EBP));
  /* 11352e01 mov ebp, esp */
  EBP = (ESP);
  /* 11352e03 push ecx */
  push32((uint32_t)(ECX));
  /* 11352e04 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11352e08 jne 0x11352e0e */
  if (!C.zf) goto L_11352e0e;
  /* 11352e0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11352e0c jmp 0x11352e4b */
  goto L_11352e4b;
L_11352e0e:;
  /* 11352e0e mov eax, dword ptr [0x11370b44] */
  EAX = (r32((uint32_t)(0x11370b44)));
  /* 11352e13 push eax */
  push32((uint32_t)(EAX));
  /* 11352e14 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11352e17 push ecx */
  push32((uint32_t)(ECX));
  /* 11352e18 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11352e1b push edx */
  push32((uint32_t)(EDX));
  /* 11352e1c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11352e1f push eax */
  push32((uint32_t)(EAX));
  /* 11352e20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11352e23 push ecx */
  push32((uint32_t)(ECX));
  /* 11352e24 push 1 */
  push32((uint32_t)(0x1u));
  /* 11352e26 mov edx, dword ptr [0x11370de4] */
  EDX = (r32((uint32_t)(0x11370de4)));
  /* 11352e2c push edx */
  push32((uint32_t)(EDX));
  /* 11352e2d call 0x11352f00 */
  push32(0x11352e32u); f_11352f00();
  /* 11352e32 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11352e35 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11352e38 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11352e3c jne 0x11352e45 */
  if (!C.zf) goto L_11352e45;
  /* 11352e3e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 11352e43 jmp 0x11352e4b */
  goto L_11352e4b;
L_11352e45:;
  /* 11352e45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11352e48 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11352e4b:;
  /* 11352e4b mov esp, ebp */
  ESP = (EBP);
  /* 11352e4d pop ebp */
  EBP = (pop32());
  /* 11352e4e ret  */
  ESPCHK(0x11352e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10012e50 @ 0x11352e50 (174 bytes, 66 insns) */
void f_11352e50(void) {
  FTRACE(0x11352e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11352e50 push ebp */
  push32((uint32_t)(EBP));
  /* 11352e51 mov ebp, esp */
  EBP = (ESP);
  /* 11352e53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11352e56 mov eax, dword ptr [0x1136f48c] */
  EAX = (r32((uint32_t)(0x1136f48c)));
  /* 11352e5b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11352e5e:;
  /* 11352e5e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11352e61 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11352e64 je 0x11352ef8 */
  if (C.zf) goto L_11352ef8;
  /* 11352e6a push 0 */
  push32((uint32_t)(0x0u));
  /* 11352e6c push 0 */
  push32((uint32_t)(0x0u));
  /* 11352e6e push 0 */
  push32((uint32_t)(0x0u));
  /* 11352e70 push 0 */
  push32((uint32_t)(0x0u));
  /* 11352e72 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11352e74 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11352e77 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11352e79 push eax */
  push32((uint32_t)(EAX));
  /* 11352e7a push 0 */
  push32((uint32_t)(0x0u));
  /* 11352e7c push 1 */
  push32((uint32_t)(0x1u));
  /* 11352e7e call dword ptr [0x11371390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371390))), 0x11352e84u);
  /* 11352e84 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11352e87 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11352e8b jne 0x11352e92 */
  if (!C.zf) goto L_11352e92;
  /* 11352e8d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11352e90 jmp 0x11352efa */
  goto L_11352efa;
L_11352e92:;
  /* 11352e92 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11352e94 push 0x1136b8ec */
  push32((uint32_t)(0x1136b8ecu));
  /* 11352e99 push 2 */
  push32((uint32_t)(0x2u));
  /* 11352e9b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11352e9e push ecx */
  push32((uint32_t)(ECX));
  /* 11352e9f call 0x11343350 */
  push32(0x11352ea4u); f_11343350();
  /* 11352ea4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11352ea7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11352eaa cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11352eae jne 0x11352eb5 */
  if (!C.zf) goto L_11352eb5;
  /* 11352eb0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11352eb3 jmp 0x11352efa */
  goto L_11352efa;
L_11352eb5:;
  /* 11352eb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11352eb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11352eb9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11352ebc push edx */
  push32((uint32_t)(EDX));
  /* 11352ebd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11352ec0 push eax */
  push32((uint32_t)(EAX));
  /* 11352ec1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11352ec3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11352ec6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11352ec8 push edx */
  push32((uint32_t)(EDX));
  /* 11352ec9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11352ecb push 1 */
  push32((uint32_t)(0x1u));
  /* 11352ecd call dword ptr [0x11371390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371390))), 0x11352ed3u);
  /* 11352ed3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11352ed5 jne 0x11352edc */
  if (!C.zf) goto L_11352edc;
  /* 11352ed7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11352eda jmp 0x11352efa */
  goto L_11352efa;
L_11352edc:;
  /* 11352edc push 0 */
  push32((uint32_t)(0x0u));
  /* 11352ede mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11352ee1 push eax */
  push32((uint32_t)(EAX));
  /* 11352ee2 call 0x11353350 */
  push32(0x11352ee7u); f_11353350();
  /* 11352ee7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11352eea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11352eed add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11352ef0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11352ef3 jmp 0x11352e5e */
  goto L_11352e5e;
L_11352ef8:;
  /* 11352ef8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11352efa:;
  /* 11352efa mov esp, ebp */
  ESP = (EBP);
  /* 11352efc pop ebp */
  EBP = (pop32());
  /* 11352efd ret  */
  ESPCHK(0x11352e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f00 @ 0x11352f00 (970 bytes, 340 insns) */
void f_11352f00(void) {
  FTRACE(0x11352f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11352f00 push ebp */
  push32((uint32_t)(EBP));
  /* 11352f01 mov ebp, esp */
  EBP = (ESP);
  /* 11352f03 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11352f05 push 0x1136b940 */
  push32((uint32_t)(0x1136b940u));
  /* 11352f0a push 0x1134c458 */
  push32((uint32_t)(0x1134c458u));
  /* 11352f0f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11352f15 push eax */
  push32((uint32_t)(EAX));
  /* 11352f16 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11352f1d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11352f20 push ebx */
  push32((uint32_t)(EBX));
  /* 11352f21 push esi */
  push32((uint32_t)(ESI));
  /* 11352f22 push edi */
  push32((uint32_t)(EDI));
  /* 11352f23 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11352f26 cmp dword ptr [0x1136f7cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f7cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11352f2d jne 0x11352f86 */
  if (!C.zf) goto L_11352f86;
  /* 11352f2f push 1 */
  push32((uint32_t)(0x1u));
  /* 11352f31 push 0x1136af9c */
  push32((uint32_t)(0x1136af9cu));
  /* 11352f36 push 1 */
  push32((uint32_t)(0x1u));
  /* 11352f38 push 0x1136af9c */
  push32((uint32_t)(0x1136af9cu));
  /* 11352f3d push 0 */
  push32((uint32_t)(0x0u));
  /* 11352f3f push 0 */
  push32((uint32_t)(0x0u));
  /* 11352f41 call dword ptr [0x11371298] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371298))), 0x11352f47u);
  /* 11352f47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11352f49 je 0x11352f57 */
  if (C.zf) goto L_11352f57;
  /* 11352f4b mov dword ptr [0x1136f7cc], 1 */
  w32((uint32_t)(0x1136f7cc), (0x1u));
  /* 11352f55 jmp 0x11352f86 */
  goto L_11352f86;
L_11352f57:;
  /* 11352f57 push 1 */
  push32((uint32_t)(0x1u));
  /* 11352f59 push 0x1136af98 */
  push32((uint32_t)(0x1136af98u));
  /* 11352f5e push 1 */
  push32((uint32_t)(0x1u));
  /* 11352f60 push 0x1136af98 */
  push32((uint32_t)(0x1136af98u));
  /* 11352f65 push 0 */
  push32((uint32_t)(0x0u));
  /* 11352f67 push 0 */
  push32((uint32_t)(0x0u));
  /* 11352f69 call dword ptr [0x1137129c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1137129c))), 0x11352f6fu);
  /* 11352f6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11352f71 je 0x11352f7f */
  if (C.zf) goto L_11352f7f;
  /* 11352f73 mov dword ptr [0x1136f7cc], 2 */
  w32((uint32_t)(0x1136f7cc), (0x2u));
  /* 11352f7d jmp 0x11352f86 */
  goto L_11352f86;
L_11352f7f:;
  /* 11352f7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11352f81 jmp 0x113532e4 */
  goto L_113532e4;
L_11352f86:;
  /* 11352f86 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11352f8a jle 0x11352f9f */
  if ((C.zf||C.sf!=C.of)) goto L_11352f9f;
  /* 11352f8c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11352f8f push eax */
  push32((uint32_t)(EAX));
  /* 11352f90 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11352f93 push ecx */
  push32((uint32_t)(ECX));
  /* 11352f94 call 0x11353300 */
  push32(0x11352f99u); f_11353300();
  /* 11352f99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11352f9c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11352f9f:;
  /* 11352f9f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11352fa3 jle 0x11352fb8 */
  if ((C.zf||C.sf!=C.of)) goto L_11352fb8;
  /* 11352fa5 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11352fa8 push edx */
  push32((uint32_t)(EDX));
  /* 11352fa9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11352fac push eax */
  push32((uint32_t)(EAX));
  /* 11352fad call 0x11353300 */
  push32(0x11352fb2u); f_11353300();
  /* 11352fb2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11352fb5 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_11352fb8:;
  /* 11352fb8 cmp dword ptr [0x1136f7cc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1136f7cc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11352fbf jne 0x11352fe4 */
  if (!C.zf) goto L_11352fe4;
  /* 11352fc1 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11352fc4 push ecx */
  push32((uint32_t)(ECX));
  /* 11352fc5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11352fc8 push edx */
  push32((uint32_t)(EDX));
  /* 11352fc9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11352fcc push eax */
  push32((uint32_t)(EAX));
  /* 11352fcd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11352fd0 push ecx */
  push32((uint32_t)(ECX));
  /* 11352fd1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11352fd4 push edx */
  push32((uint32_t)(EDX));
  /* 11352fd5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11352fd8 push eax */
  push32((uint32_t)(EAX));
  /* 11352fd9 call dword ptr [0x1137129c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1137129c))), 0x11352fdfu);
  /* 11352fdf jmp 0x113532e4 */
  goto L_113532e4;
L_11352fe4:;
  /* 11352fe4 cmp dword ptr [0x1136f7cc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1136f7cc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11352feb jne 0x113532e2 */
  if (!C.zf) goto L_113532e2;
  /* 11352ff1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11352ff5 jne 0x11353000 */
  if (!C.zf) goto L_11353000;
  /* 11352ff7 mov ecx, dword ptr [0x1136f678] */
  ECX = (r32((uint32_t)(0x1136f678)));
  /* 11352ffd mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_11353000:;
  /* 11353000 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11353004 je 0x11353010 */
  if (C.zf) goto L_11353010;
  /* 11353006 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1135300a jne 0x1135318c */
  if (!C.zf) goto L_1135318c;
L_11353010:;
  /* 11353010 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11353013 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11353016 jne 0x11353022 */
  if (!C.zf) goto L_11353022;
  /* 11353018 mov eax, 2 */
  EAX = (0x2u);
  /* 1135301d jmp 0x113532e4 */
  goto L_113532e4;
L_11353022:;
  /* 11353022 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11353026 jle 0x11353032 */
  if ((C.zf||C.sf!=C.of)) goto L_11353032;
  /* 11353028 mov eax, 1 */
  EAX = (0x1u);
  /* 1135302d jmp 0x113532e4 */
  goto L_113532e4;
L_11353032:;
  /* 11353032 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11353036 jle 0x11353042 */
  if ((C.zf||C.sf!=C.of)) goto L_11353042;
  /* 11353038 mov eax, 3 */
  EAX = (0x3u);
  /* 1135303d jmp 0x113532e4 */
  goto L_113532e4;
L_11353042:;
  /* 11353042 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 11353045 push eax */
  push32((uint32_t)(EAX));
  /* 11353046 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11353049 push ecx */
  push32((uint32_t)(ECX));
  /* 1135304a call dword ptr [0x113712f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712f4))), 0x11353050u);
  /* 11353050 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11353052 jne 0x1135305b */
  if (!C.zf) goto L_1135305b;
  /* 11353054 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11353056 jmp 0x113532e4 */
  goto L_113532e4;
L_1135305b:;
  /* 1135305b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1135305f jne 0x11353067 */
  if (!C.zf) goto L_11353067;
  /* 11353061 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11353065 je 0x11353094 */
  if (C.zf) goto L_11353094;
L_11353067:;
  /* 11353067 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1135306b jne 0x11353073 */
  if (!C.zf) goto L_11353073;
  /* 1135306d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11353071 je 0x11353094 */
  if (C.zf) goto L_11353094;
L_11353073:;
  /* 11353073 push 0x1136b900 */
  push32((uint32_t)(0x1136b900u));
  /* 11353078 push 0 */
  push32((uint32_t)(0x0u));
  /* 1135307a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 1135307f push 0x1136b8f8 */
  push32((uint32_t)(0x1136b8f8u));
  /* 11353084 push 2 */
  push32((uint32_t)(0x2u));
  /* 11353086 call 0x11342410 */
  push32(0x1135308bu); f_11342410();
  /* 1135308b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1135308e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11353091 jne 0x11353094 */
  if (!C.zf) goto L_11353094;
  /* 11353093 int3  */
  x86_unimpl("int3 @ 0x11353093");
L_11353094:;
  /* 11353094 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11353096 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11353098 jne 0x1135305b */
  if (!C.zf) goto L_1135305b;
  /* 1135309a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1135309e jle 0x11353113 */
  if ((C.zf||C.sf!=C.of)) goto L_11353113;
  /* 113530a0 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113530a4 jae 0x113530b0 */
  if (!C.cf) goto L_113530b0;
  /* 113530a6 mov eax, 3 */
  EAX = (0x3u);
  /* 113530ab jmp 0x113532e4 */
  goto L_113532e4;
L_113530b0:;
  /* 113530b0 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 113530b3 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 113530b6 jmp 0x113530c1 */
  goto L_113530c1;
L_113530b8:;
  /* 113530b8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 113530bb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113530be mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_113530c1:;
  /* 113530c1 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 113530c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113530c6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113530c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113530ca je 0x11353109 */
  if (C.zf) goto L_11353109;
  /* 113530cc mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 113530cf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113530d1 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 113530d4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113530d6 je 0x11353109 */
  if (C.zf) goto L_11353109;
  /* 113530d8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113530db xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113530dd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 113530df mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 113530e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113530e4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113530e6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113530e8 jl 0x11353107 */
  if ((C.sf!=C.of)) goto L_11353107;
  /* 113530ea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113530ed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113530ef mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 113530f1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 113530f4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113530f6 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 113530f9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113530fb jg 0x11353107 */
  if ((!C.zf&&C.sf==C.of)) goto L_11353107;
  /* 113530fd mov eax, 2 */
  EAX = (0x2u);
  /* 11353102 jmp 0x113532e4 */
  goto L_113532e4;
L_11353107:;
  /* 11353107 jmp 0x113530b8 */
  goto L_113530b8;
L_11353109:;
  /* 11353109 mov eax, 3 */
  EAX = (0x3u);
  /* 1135310e jmp 0x113532e4 */
  goto L_113532e4;
L_11353113:;
  /* 11353113 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11353117 jle 0x1135318c */
  if ((C.zf||C.sf!=C.of)) goto L_1135318c;
  /* 11353119 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1135311d jae 0x11353129 */
  if (!C.cf) goto L_11353129;
  /* 1135311f mov eax, 1 */
  EAX = (0x1u);
  /* 11353124 jmp 0x113532e4 */
  goto L_113532e4;
L_11353129:;
  /* 11353129 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 1135312c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 1135312f jmp 0x1135313a */
  goto L_1135313a;
L_11353131:;
  /* 11353131 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11353134 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11353137 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_1135313a:;
  /* 1135313a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1135313d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1135313f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11353141 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11353143 je 0x11353182 */
  if (C.zf) goto L_11353182;
  /* 11353145 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11353148 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1135314a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1135314d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1135314f je 0x11353182 */
  if (C.zf) goto L_11353182;
  /* 11353151 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11353154 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11353156 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11353158 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1135315b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1135315d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1135315f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11353161 jl 0x11353180 */
  if ((C.sf!=C.of)) goto L_11353180;
  /* 11353163 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11353166 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11353168 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1135316a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 1135316d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1135316f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11353172 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11353174 jg 0x11353180 */
  if ((!C.zf&&C.sf==C.of)) goto L_11353180;
  /* 11353176 mov eax, 2 */
  EAX = (0x2u);
  /* 1135317b jmp 0x113532e4 */
  goto L_113532e4;
L_11353180:;
  /* 11353180 jmp 0x11353131 */
  goto L_11353131;
L_11353182:;
  /* 11353182 mov eax, 1 */
  EAX = (0x1u);
  /* 11353187 jmp 0x113532e4 */
  goto L_113532e4;
L_1135318c:;
  /* 1135318c push 0 */
  push32((uint32_t)(0x0u));
  /* 1135318e push 0 */
  push32((uint32_t)(0x0u));
  /* 11353190 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11353193 push ecx */
  push32((uint32_t)(ECX));
  /* 11353194 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11353197 push edx */
  push32((uint32_t)(EDX));
  /* 11353198 push 9 */
  push32((uint32_t)(0x9u));
  /* 1135319a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1135319d push eax */
  push32((uint32_t)(EAX));
  /* 1135319e call dword ptr [0x113712e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712e8))), 0x113531a4u);
  /* 113531a4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 113531a7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113531ab jne 0x113531b4 */
  if (!C.zf) goto L_113531b4;
  /* 113531ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113531af jmp 0x113532e4 */
  goto L_113532e4;
L_113531b4:;
  /* 113531b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 113531bb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113531be shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 113531c0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113531c3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 113531c5 call 0x113464f0 */
  push32(0x113531cau); f_113464f0();
  /* 113531ca mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 113531cd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 113531d0 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 113531d3 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 113531d6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 113531dd jmp 0x113531f6 */
  goto L_113531f6;
  /* 113531df mov eax, 1 */
  EAX = (0x1u);
  /* 113531e4 ret  */
  ESPCHK(0x11352f00u, _esp0);
  ESP += 4; return;
  /* 113531e5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 113531e8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 113531ef mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_113531f6:;
  /* 113531f6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113531fa jne 0x11353203 */
  if (!C.zf) goto L_11353203;
  /* 113531fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113531fe jmp 0x113532e4 */
  goto L_113532e4;
L_11353203:;
  /* 11353203 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11353206 push edx */
  push32((uint32_t)(EDX));
  /* 11353207 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1135320a push eax */
  push32((uint32_t)(EAX));
  /* 1135320b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1135320e push ecx */
  push32((uint32_t)(ECX));
  /* 1135320f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11353212 push edx */
  push32((uint32_t)(EDX));
  /* 11353213 push 1 */
  push32((uint32_t)(0x1u));
  /* 11353215 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11353218 push eax */
  push32((uint32_t)(EAX));
  /* 11353219 call dword ptr [0x113712e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712e8))), 0x1135321fu);
  /* 1135321f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11353221 jne 0x1135322a */
  if (!C.zf) goto L_1135322a;
  /* 11353223 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11353225 jmp 0x113532e4 */
  goto L_113532e4;
L_1135322a:;
  /* 1135322a push 0 */
  push32((uint32_t)(0x0u));
  /* 1135322c push 0 */
  push32((uint32_t)(0x0u));
  /* 1135322e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11353231 push ecx */
  push32((uint32_t)(ECX));
  /* 11353232 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11353235 push edx */
  push32((uint32_t)(EDX));
  /* 11353236 push 9 */
  push32((uint32_t)(0x9u));
  /* 11353238 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1135323b push eax */
  push32((uint32_t)(EAX));
  /* 1135323c call dword ptr [0x113712e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712e8))), 0x11353242u);
  /* 11353242 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11353245 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11353249 jne 0x11353252 */
  if (!C.zf) goto L_11353252;
  /* 1135324b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1135324d jmp 0x113532e4 */
  goto L_113532e4;
L_11353252:;
  /* 11353252 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11353259 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1135325c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1135325e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11353261 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11353263 call 0x113464f0 */
  push32(0x11353268u); f_113464f0();
  /* 11353268 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 1135326b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1135326e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11353271 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11353274 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1135327b jmp 0x11353294 */
  goto L_11353294;
  /* 1135327d mov eax, 1 */
  EAX = (0x1u);
  /* 11353282 ret  */
  ESPCHK(0x11352f00u, _esp0);
  ESP += 4; return;
  /* 11353283 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11353286 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 1135328d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11353294:;
  /* 11353294 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11353298 jne 0x1135329e */
  if (!C.zf) goto L_1135329e;
  /* 1135329a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1135329c jmp 0x113532e4 */
  goto L_113532e4;
L_1135329e:;
  /* 1135329e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 113532a1 push edx */
  push32((uint32_t)(EDX));
  /* 113532a2 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 113532a5 push eax */
  push32((uint32_t)(EAX));
  /* 113532a6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 113532a9 push ecx */
  push32((uint32_t)(ECX));
  /* 113532aa mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113532ad push edx */
  push32((uint32_t)(EDX));
  /* 113532ae push 1 */
  push32((uint32_t)(0x1u));
  /* 113532b0 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 113532b3 push eax */
  push32((uint32_t)(EAX));
  /* 113532b4 call dword ptr [0x113712e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113712e8))), 0x113532bau);
  /* 113532ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113532bc jne 0x113532c2 */
  if (!C.zf) goto L_113532c2;
  /* 113532be xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113532c0 jmp 0x113532e4 */
  goto L_113532e4;
L_113532c2:;
  /* 113532c2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 113532c5 push ecx */
  push32((uint32_t)(ECX));
  /* 113532c6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 113532c9 push edx */
  push32((uint32_t)(EDX));
  /* 113532ca mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113532cd push eax */
  push32((uint32_t)(EAX));
  /* 113532ce mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113532d1 push ecx */
  push32((uint32_t)(ECX));
  /* 113532d2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113532d5 push edx */
  push32((uint32_t)(EDX));
  /* 113532d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113532d9 push eax */
  push32((uint32_t)(EAX));
  /* 113532da call dword ptr [0x11371298] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371298))), 0x113532e0u);
  /* 113532e0 jmp 0x113532e4 */
  goto L_113532e4;
L_113532e2:;
  /* 113532e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_113532e4:;
  /* 113532e4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 113532e7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113532ea mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 113532f1 pop edi */
  EDI = (pop32());
  /* 113532f2 pop esi */
  ESI = (pop32());
  /* 113532f3 pop ebx */
  EBX = (pop32());
  /* 113532f4 mov esp, ebp */
  ESP = (EBP);
  /* 113532f6 pop ebp */
  EBP = (pop32());
  /* 113532f7 ret  */
  ESPCHK(0x11352f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10013300 @ 0x11353300 (80 bytes, 32 insns) */
void f_11353300(void) {
  FTRACE(0x11353300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11353300 push ebp */
  push32((uint32_t)(EBP));
  /* 11353301 mov ebp, esp */
  EBP = (ESP);
  /* 11353303 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11353306 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11353309 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1135330c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1135330f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11353312:;
  /* 11353312 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11353315 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11353318 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1135331b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1135331e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11353320 je 0x11353337 */
  if (C.zf) goto L_11353337;
  /* 11353322 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11353325 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11353328 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1135332a je 0x11353337 */
  if (C.zf) goto L_11353337;
  /* 1135332c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1135332f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11353332 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11353335 jmp 0x11353312 */
  goto L_11353312;
L_11353337:;
  /* 11353337 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1135333a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1135333d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1135333f jne 0x11353349 */
  if (!C.zf) goto L_11353349;
  /* 11353341 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11353344 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11353347 jmp 0x1135334c */
  goto L_1135334c;
L_11353349:;
  /* 11353349 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1135334c:;
  /* 1135334c mov esp, ebp */
  ESP = (EBP);
  /* 1135334e pop ebp */
  EBP = (pop32());
  /* 1135334f ret  */
  ESPCHK(0x11353300u, _esp0);
  ESP += 4; return;
}

/* FUN_10013350 @ 0x11353350 (736 bytes, 224 insns) */
void f_11353350(void) {
  FTRACE(0x11353350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11353350 push ebp */
  push32((uint32_t)(EBP));
  /* 11353351 mov ebp, esp */
  EBP = (ESP);
  /* 11353353 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11353356 push esi */
  push32((uint32_t)(ESI));
  /* 11353357 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1135335b je 0x1135337c */
  if (C.zf) goto L_1135337c;
  /* 1135335d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 1135335f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11353362 push eax */
  push32((uint32_t)(EAX));
  /* 11353363 call 0x113537a0 */
  push32(0x11353368u); f_113537a0();
  /* 11353368 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1135336b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1135336e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11353372 je 0x1135337c */
  if (C.zf) goto L_1135337c;
  /* 11353374 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11353377 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1135337a jne 0x11353384 */
  if (!C.zf) goto L_11353384;
L_1135337c:;
  /* 1135337c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1135337f jmp 0x1135362b */
  goto L_1135362b;
L_11353384:;
  /* 11353384 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11353387 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1135338b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1135338d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1135338f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11353390 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11353393 mov ecx, dword ptr [0x1136f484] */
  ECX = (r32((uint32_t)(0x1136f484)));
  /* 11353399 cmp ecx, dword ptr [0x1136f488] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1136f488))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1135339f jne 0x113533b5 */
  if (!C.zf) goto L_113533b5;
  /* 113533a1 mov edx, dword ptr [0x1136f484] */
  EDX = (r32((uint32_t)(0x1136f484)));
  /* 113533a7 push edx */
  push32((uint32_t)(EDX));
  /* 113533a8 call 0x113536b0 */
  push32(0x113533adu); f_113536b0();
  /* 113533ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113533b0 mov dword ptr [0x1136f484], eax */
  w32((uint32_t)(0x1136f484), (EAX));
L_113533b5:;
  /* 113533b5 cmp dword ptr [0x1136f484], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f484))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113533bc jne 0x11353475 */
  if (!C.zf) goto L_11353475;
  /* 113533c2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113533c6 je 0x113533e7 */
  if (C.zf) goto L_113533e7;
  /* 113533c8 cmp dword ptr [0x1136f48c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f48c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113533cf je 0x113533e7 */
  if (C.zf) goto L_113533e7;
  /* 113533d1 call 0x11352e50 */
  push32(0x113533d6u); f_11352e50();
  /* 113533d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113533d8 je 0x113533e2 */
  if (C.zf) goto L_113533e2;
  /* 113533da or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113533dd jmp 0x1135362b */
  goto L_1135362b;
L_113533e2:;
  /* 113533e2 jmp 0x11353475 */
  goto L_11353475;
L_113533e7:;
  /* 113533e7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113533eb je 0x113533f4 */
  if (C.zf) goto L_113533f4;
  /* 113533ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113533ef jmp 0x1135362b */
  goto L_1135362b;
L_113533f4:;
  /* 113533f4 cmp dword ptr [0x1136f484], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f484))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113533fb jne 0x11353434 */
  if (!C.zf) goto L_11353434;
  /* 113533fd push 0x87 */
  push32((uint32_t)(0x87u));
  /* 11353402 push 0x1136b958 */
  push32((uint32_t)(0x1136b958u));
  /* 11353407 push 2 */
  push32((uint32_t)(0x2u));
  /* 11353409 push 4 */
  push32((uint32_t)(0x4u));
  /* 1135340b call 0x11343350 */
  push32(0x11353410u); f_11343350();
  /* 11353410 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11353413 mov dword ptr [0x1136f484], eax */
  w32((uint32_t)(0x1136f484), (EAX));
  /* 11353418 cmp dword ptr [0x1136f484], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f484))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1135341f jne 0x11353429 */
  if (!C.zf) goto L_11353429;
  /* 11353421 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11353424 jmp 0x1135362b */
  goto L_1135362b;
L_11353429:;
  /* 11353429 mov eax, dword ptr [0x1136f484] */
  EAX = (r32((uint32_t)(0x1136f484)));
  /* 1135342e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11353434:;
  /* 11353434 cmp dword ptr [0x1136f48c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f48c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1135343b jne 0x11353475 */
  if (!C.zf) goto L_11353475;
  /* 1135343d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 11353442 push 0x1136b958 */
  push32((uint32_t)(0x1136b958u));
  /* 11353447 push 2 */
  push32((uint32_t)(0x2u));
  /* 11353449 push 4 */
  push32((uint32_t)(0x4u));
  /* 1135344b call 0x11343350 */
  push32(0x11353450u); f_11343350();
  /* 11353450 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11353453 mov dword ptr [0x1136f48c], eax */
  w32((uint32_t)(0x1136f48c), (EAX));
  /* 11353458 cmp dword ptr [0x1136f48c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1136f48c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1135345f jne 0x11353469 */
  if (!C.zf) goto L_11353469;
  /* 11353461 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11353464 jmp 0x1135362b */
  goto L_1135362b;
L_11353469:;
  /* 11353469 mov ecx, dword ptr [0x1136f48c] */
  ECX = (r32((uint32_t)(0x1136f48c)));
  /* 1135346f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_11353475:;
  /* 11353475 mov edx, dword ptr [0x1136f484] */
  EDX = (r32((uint32_t)(0x1136f484)));
  /* 1135347b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1135347e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11353481 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11353484 push eax */
  push32((uint32_t)(EAX));
  /* 11353485 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11353488 push ecx */
  push32((uint32_t)(ECX));
  /* 11353489 call 0x11353630 */
  push32(0x1135348eu); f_11353630();
  /* 1135348e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11353491 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11353494 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11353498 jl 0x11353531 */
  if ((C.sf!=C.of)) goto L_11353531;
  /* 1135349e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113534a1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113534a4 je 0x11353531 */
  if (C.zf) goto L_11353531;
  /* 113534aa cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113534ae je 0x11353523 */
  if (C.zf) goto L_11353523;
  /* 113534b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 113534b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113534b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113534b8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 113534bb push edx */
  push32((uint32_t)(EDX));
  /* 113534bc call 0x11343de0 */
  push32(0x113534c1u); f_11343de0();
  /* 113534c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113534c4 jmp 0x113534cf */
  goto L_113534cf;
L_113534c6:;
  /* 113534c6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113534c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113534cc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_113534cf:;
  /* 113534cf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113534d2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113534d5 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113534d9 je 0x113534f0 */
  if (C.zf) goto L_113534f0;
  /* 113534db mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113534de mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113534e1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113534e4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 113534e7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 113534eb mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 113534ee jmp 0x113534c6 */
  goto L_113534c6;
L_113534f0:;
  /* 113534f0 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 113534f5 push 0x1136b958 */
  push32((uint32_t)(0x1136b958u));
  /* 113534fa push 2 */
  push32((uint32_t)(0x2u));
  /* 113534fc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113534ff shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11353502 push eax */
  push32((uint32_t)(EAX));
  /* 11353503 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11353506 push ecx */
  push32((uint32_t)(ECX));
  /* 11353507 call 0x113437e0 */
  push32(0x1135350cu); f_113437e0();
  /* 1135350c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1135350f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11353512 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11353516 je 0x11353521 */
  if (C.zf) goto L_11353521;
  /* 11353518 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1135351b mov dword ptr [0x1136f484], edx */
  w32((uint32_t)(0x1136f484), (EDX));
L_11353521:;
  /* 11353521 jmp 0x1135352f */
  goto L_1135352f;
L_11353523:;
  /* 11353523 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11353526 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11353529 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1135352c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_1135352f:;
  /* 1135352f jmp 0x113535a4 */
  goto L_113535a4;
L_11353531:;
  /* 11353531 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11353535 jne 0x1135359d */
  if (!C.zf) goto L_1135359d;
  /* 11353537 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1135353b jge 0x11353545 */
  if ((C.sf==C.of)) goto L_11353545;
  /* 1135353d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11353540 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11353542 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11353545:;
  /* 11353545 push 0xce */
  push32((uint32_t)(0xceu));
  /* 1135354a push 0x1136b958 */
  push32((uint32_t)(0x1136b958u));
  /* 1135354f push 2 */
  push32((uint32_t)(0x2u));
  /* 11353551 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11353554 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 1135355b push edx */
  push32((uint32_t)(EDX));
  /* 1135355c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1135355f push eax */
  push32((uint32_t)(EAX));
  /* 11353560 call 0x113437e0 */
  push32(0x11353565u); f_113437e0();
  /* 11353565 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11353568 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1135356b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1135356f jne 0x11353579 */
  if (!C.zf) goto L_11353579;
  /* 11353571 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11353574 jmp 0x1135362b */
  goto L_1135362b;
L_11353579:;
  /* 11353579 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1135357c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1135357f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11353582 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11353585 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11353588 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1135358b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 11353593 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11353596 mov dword ptr [0x1136f484], eax */
  w32((uint32_t)(0x1136f484), (EAX));
  /* 1135359b jmp 0x113535a4 */
  goto L_113535a4;
L_1135359d:;
  /* 1135359d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1135359f jmp 0x1135362b */
  goto L_1135362b;
L_113535a4:;
  /* 113535a4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113535a8 je 0x11353629 */
  if (C.zf) goto L_11353629;
  /* 113535aa push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 113535af push 0x1136b958 */
  push32((uint32_t)(0x1136b958u));
  /* 113535b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 113535b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113535b9 push ecx */
  push32((uint32_t)(ECX));
  /* 113535ba call 0x11346180 */
  push32(0x113535bfu); f_11346180();
  /* 113535bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113535c2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113535c5 push eax */
  push32((uint32_t)(EAX));
  /* 113535c6 call 0x11343350 */
  push32(0x113535cbu); f_11343350();
  /* 113535cb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113535ce mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 113535d1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113535d5 je 0x11353629 */
  if (C.zf) goto L_11353629;
  /* 113535d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113535da push edx */
  push32((uint32_t)(EDX));
  /* 113535db mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113535de push eax */
  push32((uint32_t)(EAX));
  /* 113535df call 0x11346300 */
  push32(0x113535e4u); f_11346300();
  /* 113535e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113535e7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113535ea sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113535ed mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113535f0 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113535f2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113535f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113535f8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 113535fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113535fe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11353601 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11353604 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11353607 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11353609 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1135360b not edx */
  EDX = (~(EDX));
  /* 1135360d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11353610 push edx */
  push32((uint32_t)(EDX));
  /* 11353611 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11353614 push eax */
  push32((uint32_t)(EAX));
  /* 11353615 call dword ptr [0x11371294] */
  call_ind((uint32_t)(r32((uint32_t)(0x11371294))), 0x1135361bu);
  /* 1135361b push 2 */
  push32((uint32_t)(0x2u));
  /* 1135361d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11353620 push ecx */
  push32((uint32_t)(ECX));
  /* 11353621 call 0x11343de0 */
  push32(0x11353626u); f_11343de0();
  /* 11353626 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11353629:;
  /* 11353629 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1135362b:;
  /* 1135362b pop esi */
  ESI = (pop32());
  /* 1135362c mov esp, ebp */
  ESP = (EBP);
  /* 1135362e pop ebp */
  EBP = (pop32());
  /* 1135362f ret  */
  ESPCHK(0x11353350u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x11353630 (124 bytes, 47 insns) */
void f_11353630(void) {
  FTRACE(0x11353630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11353630 push ebp */
  push32((uint32_t)(EBP));
  /* 11353631 mov ebp, esp */
  EBP = (ESP);
  /* 11353633 push ecx */
  push32((uint32_t)(ECX));
  /* 11353634 mov eax, dword ptr [0x1136f484] */
  EAX = (r32((uint32_t)(0x1136f484)));
  /* 11353639 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1135363c jmp 0x11353647 */
  goto L_11353647;
L_1135363e:;
  /* 1135363e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11353641 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11353644 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11353647:;
  /* 11353647 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1135364a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1135364d je 0x1135369a */
  if (C.zf) goto L_1135369a;
  /* 1135364f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11353652 push eax */
  push32((uint32_t)(EAX));
  /* 11353653 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11353656 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11353658 push edx */
  push32((uint32_t)(EDX));
  /* 11353659 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1135365c push eax */
  push32((uint32_t)(EAX));
  /* 1135365d call 0x11352e00 */
  push32(0x11353662u); f_11352e00();
  /* 11353662 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11353665 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11353667 jne 0x11353698 */
  if (!C.zf) goto L_11353698;
  /* 11353669 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1135366c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1135366e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11353671 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 11353675 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11353678 je 0x1135368a */
  if (C.zf) goto L_1135368a;
  /* 1135367a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1135367d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1135367f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11353682 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 11353686 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11353688 jne 0x11353698 */
  if (!C.zf) goto L_11353698;
L_1135368a:;
  /* 1135368a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1135368d sub eax, dword ptr [0x1136f484] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1136f484))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11353693 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11353696 jmp 0x113536a8 */
  goto L_113536a8;
L_11353698:;
  /* 11353698 jmp 0x1135363e */
  goto L_1135363e;
L_1135369a:;
  /* 1135369a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1135369d sub eax, dword ptr [0x1136f484] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1136f484))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113536a3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 113536a6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_113536a8:;
  /* 113536a8 mov esp, ebp */
  ESP = (EBP);
  /* 113536aa pop ebp */
  EBP = (pop32());
  /* 113536ab ret  */
  ESPCHK(0x11353630u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x113536b0 (238 bytes, 80 insns) */
void f_113536b0(void) {
  FTRACE(0x113536b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113536b0 push ebp */
  push32((uint32_t)(EBP));
  /* 113536b1 mov ebp, esp */
  EBP = (ESP);
  /* 113536b3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113536b6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 113536bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113536c0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113536c3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113536c7 jne 0x113536d0 */
  if (!C.zf) goto L_113536d0;
  /* 113536c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113536cb jmp 0x1135379a */
  goto L_1135379a;
L_113536d0:;
  /* 113536d0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113536d3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113536d5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113536d8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113536db mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113536de test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113536e0 je 0x113536ed */
  if (C.zf) goto L_113536ed;
  /* 113536e2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113536e5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113536e8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 113536eb jmp 0x113536d0 */
  goto L_113536d0;
L_113536ed:;
  /* 113536ed push 0x146 */
  push32((uint32_t)(0x146u));
  /* 113536f2 push 0x1136b958 */
  push32((uint32_t)(0x1136b958u));
  /* 113536f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 113536f9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113536fc lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 11353703 push eax */
  push32((uint32_t)(EAX));
  /* 11353704 call 0x11343350 */
  push32(0x11353709u); f_11343350();
  /* 11353709 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1135370c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1135370f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11353712 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11353715 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11353719 jne 0x11353725 */
  if (!C.zf) goto L_11353725;
  /* 1135371b push 9 */
  push32((uint32_t)(0x9u));
  /* 1135371d call 0x113422c0 */
  push32(0x11353722u); f_113422c0();
  /* 11353722 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11353725:;
  /* 11353725 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11353728 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1135372b:;
  /* 1135372b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1135372e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11353731 je 0x1135378e */
  if (C.zf) goto L_1135378e;
  /* 11353733 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 11353738 push 0x1136b958 */
  push32((uint32_t)(0x1136b958u));
  /* 1135373d push 2 */
  push32((uint32_t)(0x2u));
  /* 1135373f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11353742 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11353744 push edx */
  push32((uint32_t)(EDX));
  /* 11353745 call 0x11346180 */
  push32(0x1135374au); f_11346180();
  /* 1135374a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1135374d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11353750 push eax */
  push32((uint32_t)(EAX));
  /* 11353751 call 0x11343350 */
  push32(0x11353756u); f_11343350();
  /* 11353756 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11353759 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1135375c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1135375e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11353761 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11353764 je 0x1135377a */
  if (C.zf) goto L_1135377a;
  /* 11353766 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11353769 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1135376b push ecx */
  push32((uint32_t)(ECX));
  /* 1135376c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1135376f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11353771 push eax */
  push32((uint32_t)(EAX));
  /* 11353772 call 0x11346300 */
  push32(0x11353777u); f_11346300();
  /* 11353777 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1135377a:;
  /* 1135377a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1135377d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11353780 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11353783 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11353786 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11353789 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1135378c jmp 0x1135372b */
  goto L_1135372b;
L_1135378e:;
  /* 1135378e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11353791 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11353797 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1135379a:;
  /* 1135379a mov esp, ebp */
  ESP = (EBP);
  /* 1135379c pop ebp */
  EBP = (pop32());
  /* 1135379d ret  */
  ESPCHK(0x113536b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100137a0 @ 0x113537a0 (237 bytes, 81 insns) */
void f_113537a0(void) {
  FTRACE(0x113537a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113537a0 push ebp */
  push32((uint32_t)(EBP));
  /* 113537a1 mov ebp, esp */
  EBP = (ESP);
  /* 113537a3 push ecx */
  push32((uint32_t)(ECX));
  /* 113537a4 cmp dword ptr [0x11370bcc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11370bcc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113537ab jne 0x113537c2 */
  if (!C.zf) goto L_113537c2;
  /* 113537ad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113537b0 push eax */
  push32((uint32_t)(EAX));
  /* 113537b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113537b4 push ecx */
  push32((uint32_t)(ECX));
  /* 113537b5 call 0x113538a0 */
  push32(0x113537bau); f_113538a0();
  /* 113537ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113537bd jmp 0x11353889 */
  goto L_11353889;
L_113537c2:;
  /* 113537c2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 113537c4 call 0x11346d50 */
  push32(0x113537c9u); f_11346d50();
  /* 113537c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113537cc jmp 0x113537d7 */
  goto L_113537d7;
L_113537ce:;
  /* 113537ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113537d1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113537d4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_113537d7:;
  /* 113537d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113537da movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 113537de mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 113537e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113537e5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 113537eb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113537ed je 0x1135386b */
  if (C.zf) goto L_1135386b;
  /* 113537ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113537f2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113537f7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113537f9 mov cl, byte ptr [eax + 0x11370ce1] */
  CL = (r8((uint32_t)(EAX + 0x11370ce1)));
  /* 113537ff and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11353802 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11353804 je 0x11353856 */
  if (C.zf) goto L_11353856;
  /* 11353806 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11353809 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1135380c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1135380f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11353812 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11353814 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11353816 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11353818 jne 0x11353828 */
  if (!C.zf) goto L_11353828;
  /* 1135381a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1135381c call 0x11346df0 */
  push32(0x11353821u); f_11346df0();
  /* 11353821 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11353824 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11353826 jmp 0x11353889 */
  goto L_11353889;
L_11353828:;
  /* 11353828 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1135382b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11353831 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11353834 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11353837 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11353839 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1135383b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1135383d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11353840 jne 0x11353854 */
  if (!C.zf) goto L_11353854;
  /* 11353842 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11353844 call 0x11346df0 */
  push32(0x11353849u); f_11346df0();
  /* 11353849 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1135384c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1135384f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11353852 jmp 0x11353889 */
  goto L_11353889;
L_11353854:;
  /* 11353854 jmp 0x11353866 */
  goto L_11353866;
L_11353856:;
  /* 11353856 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11353859 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1135385f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11353862 jne 0x11353866 */
  if (!C.zf) goto L_11353866;
  /* 11353864 jmp 0x1135386b */
  goto L_1135386b;
L_11353866:;
  /* 11353866 jmp 0x113537ce */
  goto L_113537ce;
L_1135386b:;
  /* 1135386b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1135386d call 0x11346df0 */
  push32(0x11353872u); f_11346df0();
  /* 11353872 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11353875 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11353878 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1135387d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11353880 jne 0x11353887 */
  if (!C.zf) goto L_11353887;
  /* 11353882 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11353885 jmp 0x11353889 */
  goto L_11353889;
L_11353887:;
  /* 11353887 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11353889:;
  /* 11353889 mov esp, ebp */
  ESP = (EBP);
  /* 1135388b pop ebp */
  EBP = (pop32());
  /* 1135388c ret  */
  ESPCHK(0x113537a0u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x113538a0 (193 bytes, 87 insns) */
void f_113538a0(void) {
  FTRACE(0x113538a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113538a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113538a2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 113538a6 push ebx */
  push32((uint32_t)(EBX));
  /* 113538a7 mov ebx, eax */
  EBX = (EAX);
  /* 113538a9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 113538ac mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 113538b0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 113538b6 je 0x113538cb */
  if (C.zf) goto L_113538cb;
L_113538b8:;
  /* 113538b8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 113538ba inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 113538bb cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 113538bd je 0x11353890 */
  if (C.zf) { jmp_ind(0x11353890u); return; }
  /* 113538bf test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 113538c1 je 0x11353914 */
  if (C.zf) goto L_11353914;
  /* 113538c3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 113538c9 jne 0x113538b8 */
  if (!C.zf) goto L_113538b8;
L_113538cb:;
  /* 113538cb or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 113538cd push edi */
  push32((uint32_t)(EDI));
  /* 113538ce mov eax, ebx */
  EAX = (EBX);
  /* 113538d0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 113538d3 push esi */
  push32((uint32_t)(ESI));
  /* 113538d4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_113538d6:;
  /* 113538d6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 113538d8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 113538dd mov eax, ecx */
  EAX = (ECX);
  /* 113538df mov esi, edi */
  ESI = (EDI);
  /* 113538e1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 113538e3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 113538e5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 113538e7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 113538ea xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113538ed xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 113538ef xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 113538f1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113538f4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 113538fa jne 0x11353918 */
  if (!C.zf) goto L_11353918;
  /* 113538fc and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11353901 je 0x113538d6 */
  if (C.zf) goto L_113538d6;
  /* 11353903 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11353908 jne 0x11353912 */
  if (!C.zf) goto L_11353912;
  /* 1135390a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 11353910 jne 0x113538d6 */
  if (!C.zf) goto L_113538d6;
L_11353912:;
  /* 11353912 pop esi */
  ESI = (pop32());
  /* 11353913 pop edi */
  EDI = (pop32());
L_11353914:;
  /* 11353914 pop ebx */
  EBX = (pop32());
  /* 11353915 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11353917 ret  */
  ESPCHK(0x113538a0u, _esp0);
  ESP += 4; return;
L_11353918:;
  /* 11353918 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1135391b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1135391d je 0x11353955 */
  if (C.zf) goto L_11353955;
  /* 1135391f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11353921 je 0x11353912 */
  if (C.zf) goto L_11353912;
  /* 11353923 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11353925 je 0x1135394e */
  if (C.zf) goto L_1135394e;
  /* 11353927 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11353929 je 0x11353912 */
  if (C.zf) goto L_11353912;
  /* 1135392b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1135392e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11353930 je 0x11353947 */
  if (C.zf) goto L_11353947;
  /* 11353932 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11353934 je 0x11353912 */
  if (C.zf) goto L_11353912;
  /* 11353936 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11353938 je 0x11353940 */
  if (C.zf) goto L_11353940;
  /* 1135393a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1135393c je 0x11353912 */
  if (C.zf) goto L_11353912;
  /* 1135393e jmp 0x113538d6 */
  goto L_113538d6;
L_11353940:;
  /* 11353940 pop esi */
  ESI = (pop32());
  /* 11353941 pop edi */
  EDI = (pop32());
  /* 11353942 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 11353945 pop ebx */
  EBX = (pop32());
  /* 11353946 ret  */
  ESPCHK(0x113538a0u, _esp0);
  ESP += 4; return;
L_11353947:;
  /* 11353947 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 1135394a pop esi */
  ESI = (pop32());
  /* 1135394b pop edi */
  EDI = (pop32());
  /* 1135394c pop ebx */
  EBX = (pop32());
  /* 1135394d ret  */
  ESPCHK(0x113538a0u, _esp0);
  ESP += 4; return;
L_1135394e:;
  /* 1135394e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 11353951 pop esi */
  ESI = (pop32());
  /* 11353952 pop edi */
  EDI = (pop32());
  /* 11353953 pop ebx */
  EBX = (pop32());
  /* 11353954 ret  */
  ESPCHK(0x113538a0u, _esp0);
  ESP += 4; return;
L_11353955:;
  /* 11353955 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 11353958 pop esi */
  ESI = (pop32());
  /* 11353959 pop edi */
  EDI = (pop32());
  /* 1135395a pop ebx */
  EBX = (pop32());
  /* 1135395b ret  */
  ESPCHK(0x113538a0u, _esp0);
  ESP += 4; return;
  /* 1135395c jmp dword ptr [0x11371314] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11371314)))); return;
}

/* RtlUnwind @ 0x11353aac (6 bytes, 1 insns) */
void f_11353aac(void) {
  FTRACE(0x11353aacu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11353aac jmp dword ptr [0x113712d0] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x113712d0)))); return;
}

