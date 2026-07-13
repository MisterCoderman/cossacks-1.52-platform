#include "recomp.h"

/* _memset @ 0x12dc7660 (88 bytes, 40 insns) */
void f_12dc7660(void) {
  FTRACE(0x12dc7660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc7660 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 12dc7664 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12dc7668 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dc766a je 0x12dc76b3 */
  if (C.zf) goto L_12dc76b3;
  /* 12dc766c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc766e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12dc7672 push edi */
  push32((uint32_t)(EDI));
  /* 12dc7673 mov edi, ecx */
  EDI = (ECX);
  /* 12dc7675 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc7678 jb 0x12dc76a7 */
  if (C.cf) goto L_12dc76a7;
  /* 12dc767a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12dc767c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12dc767f je 0x12dc7689 */
  if (C.zf) goto L_12dc7689;
  /* 12dc7681 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12dc7683:;
  /* 12dc7683 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12dc7685 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12dc7686 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12dc7687 jne 0x12dc7683 */
  if (!C.zf) goto L_12dc7683;
L_12dc7689:;
  /* 12dc7689 mov ecx, eax */
  ECX = (EAX);
  /* 12dc768b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12dc768e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc7690 mov ecx, eax */
  ECX = (EAX);
  /* 12dc7692 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12dc7695 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc7697 mov ecx, edx */
  ECX = (EDX);
  /* 12dc7699 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12dc769c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12dc769f je 0x12dc76a7 */
  if (C.zf) goto L_12dc76a7;
  /* 12dc76a1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12dc76a3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dc76a5 je 0x12dc76ad */
  if (C.zf) goto L_12dc76ad;
L_12dc76a7:;
  /* 12dc76a7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12dc76a9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12dc76aa dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 12dc76ab jne 0x12dc76a7 */
  if (!C.zf) goto L_12dc76a7;
L_12dc76ad:;
  /* 12dc76ad mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12dc76b1 pop edi */
  EDI = (pop32());
  /* 12dc76b2 ret  */
  ESPCHK(0x12dc7660u, _esp0);
  ESP += 4; return;
L_12dc76b3:;
  /* 12dc76b3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12dc76b7 ret  */
  ESPCHK(0x12dc7660u, _esp0);
  ESP += 4; return;
}

/* FUN_100076c0 @ 0x12dc76c0 (23 bytes, 10 insns) */
void f_12dc76c0(void) {
  FTRACE(0x12dc76c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc76c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc76c1 mov ebp, esp */
  EBP = (ESP);
  /* 12dc76c3 mov eax, dword ptr [0x12ddf718] */
  EAX = (r32((uint32_t)(0x12ddf718)));
  /* 12dc76c8 push eax */
  push32((uint32_t)(EAX));
  /* 12dc76c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc76cc push ecx */
  push32((uint32_t)(ECX));
  /* 12dc76cd call 0x12dc76e0 */
  push32(0x12dc76d2u); f_12dc76e0();
  /* 12dc76d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc76d5 pop ebp */
  EBP = (pop32());
  /* 12dc76d6 ret  */
  ESPCHK(0x12dc76c0u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x12dc76e0 (87 bytes, 34 insns) */
void f_12dc76e0(void) {
  FTRACE(0x12dc76e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc76e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc76e1 mov ebp, esp */
  EBP = (ESP);
  /* 12dc76e3 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc76e4 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc76e8 jbe 0x12dc76ee */
  if ((C.cf||C.zf)) goto L_12dc76ee;
  /* 12dc76ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc76ec jmp 0x12dc7733 */
  goto L_12dc7733;
L_12dc76ee:;
  /* 12dc76ee cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc76f2 ja 0x12dc7705 */
  if ((!C.cf&&!C.zf)) goto L_12dc7705;
  /* 12dc76f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc76f7 push eax */
  push32((uint32_t)(EAX));
  /* 12dc76f8 call 0x12dc7740 */
  push32(0x12dc76fdu); f_12dc7740();
  /* 12dc76fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc7700 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dc7703 jmp 0x12dc770c */
  goto L_12dc770c;
L_12dc7705:;
  /* 12dc7705 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12dc770c:;
  /* 12dc770c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc7710 jne 0x12dc7718 */
  if (!C.zf) goto L_12dc7718;
  /* 12dc7712 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc7716 jne 0x12dc771d */
  if (!C.zf) goto L_12dc771d;
L_12dc7718:;
  /* 12dc7718 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc771b jmp 0x12dc7733 */
  goto L_12dc7733;
L_12dc771d:;
  /* 12dc771d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc7720 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc7721 call 0x12dc7630 */
  push32(0x12dc7726u); f_12dc7630();
  /* 12dc7726 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc7729 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc772b jne 0x12dc7731 */
  if (!C.zf) goto L_12dc7731;
  /* 12dc772d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc772f jmp 0x12dc7733 */
  goto L_12dc7733;
L_12dc7731:;
  /* 12dc7731 jmp 0x12dc76ee */
  goto L_12dc76ee;
L_12dc7733:;
  /* 12dc7733 mov esp, ebp */
  ESP = (EBP);
  /* 12dc7735 pop ebp */
  EBP = (pop32());
  /* 12dc7736 ret  */
  ESPCHK(0x12dc76e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007740 @ 0x12dc7740 (109 bytes, 37 insns) */
void f_12dc7740(void) {
  FTRACE(0x12dc7740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc7740 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc7741 mov ebp, esp */
  EBP = (ESP);
  /* 12dc7743 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc7744 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc7747 cmp eax, dword ptr [0x12dddc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12dddc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc774d ja 0x12dc777d */
  if ((!C.cf&&!C.zf)) goto L_12dc777d;
  /* 12dc774f push 9 */
  push32((uint32_t)(0x9u));
  /* 12dc7751 call 0x12dc72f0 */
  push32(0x12dc7756u); f_12dc72f0();
  /* 12dc7756 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc7759 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc775c push ecx */
  push32((uint32_t)(ECX));
  /* 12dc775d call 0x12dc8280 */
  push32(0x12dc7762u); f_12dc8280();
  /* 12dc7762 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc7765 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dc7768 push 9 */
  push32((uint32_t)(0x9u));
  /* 12dc776a call 0x12dc7390 */
  push32(0x12dc776fu); f_12dc7390();
  /* 12dc776f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc7772 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc7776 je 0x12dc777d */
  if (C.zf) goto L_12dc777d;
  /* 12dc7778 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc777b jmp 0x12dc77a9 */
  goto L_12dc77a9;
L_12dc777d:;
  /* 12dc777d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc7781 jne 0x12dc778a */
  if (!C.zf) goto L_12dc778a;
  /* 12dc7783 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_12dc778a:;
  /* 12dc778a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc778d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc7790 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12dc7793 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12dc7796 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc7799 push eax */
  push32((uint32_t)(EAX));
  /* 12dc779a push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc779c mov ecx, dword ptr [0x12de0ecc] */
  ECX = (r32((uint32_t)(0x12de0ecc)));
  /* 12dc77a2 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc77a3 call dword ptr [0x12de230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de230c))), 0x12dc77a9u);
L_12dc77a9:;
  /* 12dc77a9 mov esp, ebp */
  ESP = (EBP);
  /* 12dc77ab pop ebp */
  EBP = (pop32());
  /* 12dc77ac ret  */
  ESPCHK(0x12dc7740u, _esp0);
  ESP += 4; return;
}

/* FUN_100077b0 @ 0x12dc77b0 (10 bytes, 5 insns) */
void f_12dc77b0(void) {
  FTRACE(0x12dc77b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc77b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc77b1 mov ebp, esp */
  EBP = (ESP);
  /* 12dc77b3 mov eax, 1 */
  EAX = (0x1u);
  /* 12dc77b8 pop ebp */
  EBP = (pop32());
  /* 12dc77b9 ret  */
  ESPCHK(0x12dc77b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100077c0 @ 0x12dc77c0 (173 bytes, 59 insns) */
void f_12dc77c0(void) {
  FTRACE(0x12dc77c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc77c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc77c1 mov ebp, esp */
  EBP = (ESP);
  /* 12dc77c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc77c6 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc77ca jbe 0x12dc77d3 */
  if ((C.cf||C.zf)) goto L_12dc77d3;
  /* 12dc77cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc77ce jmp 0x12dc7869 */
  goto L_12dc7869;
L_12dc77d3:;
  /* 12dc77d3 push 9 */
  push32((uint32_t)(0x9u));
  /* 12dc77d5 call 0x12dc72f0 */
  push32(0x12dc77dau); f_12dc72f0();
  /* 12dc77da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc77dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc77e0 push eax */
  push32((uint32_t)(EAX));
  /* 12dc77e1 call 0x12dc7bf0 */
  push32(0x12dc77e6u); f_12dc7bf0();
  /* 12dc77e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc77e9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dc77ec cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc77f0 je 0x12dc7831 */
  if (C.zf) goto L_12dc7831;
  /* 12dc77f2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12dc77f9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc77fc cmp ecx, dword ptr [0x12dddc94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12dddc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc7802 ja 0x12dc7822 */
  if ((!C.cf&&!C.zf)) goto L_12dc7822;
  /* 12dc7804 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc7807 push edx */
  push32((uint32_t)(EDX));
  /* 12dc7808 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc780b push eax */
  push32((uint32_t)(EAX));
  /* 12dc780c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc780f push ecx */
  push32((uint32_t)(ECX));
  /* 12dc7810 call 0x12dc8ac0 */
  push32(0x12dc7815u); f_12dc8ac0();
  /* 12dc7815 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc7818 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc781a je 0x12dc7822 */
  if (C.zf) goto L_12dc7822;
  /* 12dc781c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc781f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12dc7822:;
  /* 12dc7822 push 9 */
  push32((uint32_t)(0x9u));
  /* 12dc7824 call 0x12dc7390 */
  push32(0x12dc7829u); f_12dc7390();
  /* 12dc7829 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc782c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc782f jmp 0x12dc7869 */
  goto L_12dc7869;
L_12dc7831:;
  /* 12dc7831 push 9 */
  push32((uint32_t)(0x9u));
  /* 12dc7833 call 0x12dc7390 */
  push32(0x12dc7838u); f_12dc7390();
  /* 12dc7838 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc783b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc783f jne 0x12dc7848 */
  if (!C.zf) goto L_12dc7848;
  /* 12dc7841 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12dc7848:;
  /* 12dc7848 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc784b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc784e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 12dc7850 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12dc7853 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc7856 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc7857 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc785a push edx */
  push32((uint32_t)(EDX));
  /* 12dc785b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12dc785d mov eax, dword ptr [0x12de0ecc] */
  EAX = (r32((uint32_t)(0x12de0ecc)));
  /* 12dc7862 push eax */
  push32((uint32_t)(EAX));
  /* 12dc7863 call dword ptr [0x12de2314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2314))), 0x12dc7869u);
L_12dc7869:;
  /* 12dc7869 mov esp, ebp */
  ESP = (EBP);
  /* 12dc786b pop ebp */
  EBP = (pop32());
  /* 12dc786c ret  */
  ESPCHK(0x12dc77c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007870 @ 0x12dc7870 (490 bytes, 165 insns) */
void f_12dc7870(void) {
  FTRACE(0x12dc7870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc7870 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc7871 mov ebp, esp */
  EBP = (ESP);
  /* 12dc7873 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc7876 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc787a jne 0x12dc788d */
  if (!C.zf) goto L_12dc788d;
  /* 12dc787c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc787f push eax */
  push32((uint32_t)(EAX));
  /* 12dc7880 call 0x12dc76c0 */
  push32(0x12dc7885u); f_12dc76c0();
  /* 12dc7885 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc7888 jmp 0x12dc7a56 */
  goto L_12dc7a56;
L_12dc788d:;
  /* 12dc788d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc7891 jne 0x12dc78a6 */
  if (!C.zf) goto L_12dc78a6;
  /* 12dc7893 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc7896 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc7897 call 0x12dc7a60 */
  push32(0x12dc789cu); f_12dc7a60();
  /* 12dc789c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc789f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc78a1 jmp 0x12dc7a56 */
  goto L_12dc7a56;
L_12dc78a6:;
  /* 12dc78a6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12dc78ad cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc78b1 ja 0x12dc7a29 */
  if ((!C.cf&&!C.zf)) goto L_12dc7a29;
  /* 12dc78b7 push 9 */
  push32((uint32_t)(0x9u));
  /* 12dc78b9 call 0x12dc72f0 */
  push32(0x12dc78beu); f_12dc72f0();
  /* 12dc78be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc78c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc78c4 push edx */
  push32((uint32_t)(EDX));
  /* 12dc78c5 call 0x12dc7bf0 */
  push32(0x12dc78cau); f_12dc7bf0();
  /* 12dc78ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc78cd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12dc78d0 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc78d4 je 0x12dc79ec */
  if (C.zf) goto L_12dc79ec;
  /* 12dc78da mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc78dd cmp eax, dword ptr [0x12dddc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12dddc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc78e3 ja 0x12dc7960 */
  if ((!C.cf&&!C.zf)) goto L_12dc7960;
  /* 12dc78e5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc78e8 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc78e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc78ec push edx */
  push32((uint32_t)(EDX));
  /* 12dc78ed mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc78f0 push eax */
  push32((uint32_t)(EAX));
  /* 12dc78f1 call 0x12dc8ac0 */
  push32(0x12dc78f6u); f_12dc8ac0();
  /* 12dc78f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc78f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc78fb je 0x12dc7905 */
  if (C.zf) goto L_12dc7905;
  /* 12dc78fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc7900 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dc7903 jmp 0x12dc7960 */
  goto L_12dc7960;
L_12dc7905:;
  /* 12dc7905 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc7908 push edx */
  push32((uint32_t)(EDX));
  /* 12dc7909 call 0x12dc8280 */
  push32(0x12dc790eu); f_12dc8280();
  /* 12dc790e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc7911 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dc7914 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc7918 je 0x12dc7960 */
  if (C.zf) goto L_12dc7960;
  /* 12dc791a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc791d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 12dc7920 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc7923 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12dc7926 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc7929 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc792c jae 0x12dc7936 */
  if (!C.cf) goto L_12dc7936;
  /* 12dc792e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc7931 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12dc7934 jmp 0x12dc793c */
  goto L_12dc793c;
L_12dc7936:;
  /* 12dc7936 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc7939 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12dc793c:;
  /* 12dc793c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc793f push edx */
  push32((uint32_t)(EDX));
  /* 12dc7940 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc7943 push eax */
  push32((uint32_t)(EAX));
  /* 12dc7944 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc7947 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc7948 call 0x12dca1d0 */
  push32(0x12dc794du); f_12dca1d0();
  /* 12dc794d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc7950 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc7953 push edx */
  push32((uint32_t)(EDX));
  /* 12dc7954 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc7957 push eax */
  push32((uint32_t)(EAX));
  /* 12dc7958 call 0x12dc7cb0 */
  push32(0x12dc795du); f_12dc7cb0();
  /* 12dc795d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc7960:;
  /* 12dc7960 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc7964 jne 0x12dc79e0 */
  if (!C.zf) goto L_12dc79e0;
  /* 12dc7966 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc796a jne 0x12dc7973 */
  if (!C.zf) goto L_12dc7973;
  /* 12dc796c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12dc7973:;
  /* 12dc7973 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc7976 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc7979 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 12dc797c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12dc797f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc7982 push edx */
  push32((uint32_t)(EDX));
  /* 12dc7983 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc7985 mov eax, dword ptr [0x12de0ecc] */
  EAX = (r32((uint32_t)(0x12de0ecc)));
  /* 12dc798a push eax */
  push32((uint32_t)(EAX));
  /* 12dc798b call dword ptr [0x12de230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de230c))), 0x12dc7991u);
  /* 12dc7991 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dc7994 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc7998 je 0x12dc79e0 */
  if (C.zf) goto L_12dc79e0;
  /* 12dc799a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc799d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12dc79a0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc79a3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12dc79a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc79a9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc79ac jae 0x12dc79b6 */
  if (!C.cf) goto L_12dc79b6;
  /* 12dc79ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc79b1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12dc79b4 jmp 0x12dc79bc */
  goto L_12dc79bc;
L_12dc79b6:;
  /* 12dc79b6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc79b9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12dc79bc:;
  /* 12dc79bc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dc79bf push eax */
  push32((uint32_t)(EAX));
  /* 12dc79c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc79c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc79c4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc79c7 push edx */
  push32((uint32_t)(EDX));
  /* 12dc79c8 call 0x12dca1d0 */
  push32(0x12dc79cdu); f_12dca1d0();
  /* 12dc79cd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc79d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc79d3 push eax */
  push32((uint32_t)(EAX));
  /* 12dc79d4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc79d7 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc79d8 call 0x12dc7cb0 */
  push32(0x12dc79ddu); f_12dc7cb0();
  /* 12dc79dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dc79e0:;
  /* 12dc79e0 push 9 */
  push32((uint32_t)(0x9u));
  /* 12dc79e2 call 0x12dc7390 */
  push32(0x12dc79e7u); f_12dc7390();
  /* 12dc79e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc79ea jmp 0x12dc7a29 */
  goto L_12dc7a29;
L_12dc79ec:;
  /* 12dc79ec push 9 */
  push32((uint32_t)(0x9u));
  /* 12dc79ee call 0x12dc7390 */
  push32(0x12dc79f3u); f_12dc7390();
  /* 12dc79f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc79f6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc79fa jne 0x12dc7a03 */
  if (!C.zf) goto L_12dc7a03;
  /* 12dc79fc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12dc7a03:;
  /* 12dc7a03 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc7a06 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc7a09 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12dc7a0c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12dc7a0f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc7a12 push eax */
  push32((uint32_t)(EAX));
  /* 12dc7a13 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc7a16 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc7a17 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc7a19 mov edx, dword ptr [0x12de0ecc] */
  EDX = (r32((uint32_t)(0x12de0ecc)));
  /* 12dc7a1f push edx */
  push32((uint32_t)(EDX));
  /* 12dc7a20 call dword ptr [0x12de2314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2314))), 0x12dc7a26u);
  /* 12dc7a26 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12dc7a29:;
  /* 12dc7a29 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc7a2d jne 0x12dc7a38 */
  if (!C.zf) goto L_12dc7a38;
  /* 12dc7a2f cmp dword ptr [0x12ddf718], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf718))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc7a36 jne 0x12dc7a3d */
  if (!C.zf) goto L_12dc7a3d;
L_12dc7a38:;
  /* 12dc7a38 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc7a3b jmp 0x12dc7a56 */
  goto L_12dc7a56;
L_12dc7a3d:;
  /* 12dc7a3d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc7a40 push eax */
  push32((uint32_t)(EAX));
  /* 12dc7a41 call 0x12dc7630 */
  push32(0x12dc7a46u); f_12dc7630();
  /* 12dc7a46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc7a49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc7a4b jne 0x12dc7a51 */
  if (!C.zf) goto L_12dc7a51;
  /* 12dc7a4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc7a4f jmp 0x12dc7a56 */
  goto L_12dc7a56;
L_12dc7a51:;
  /* 12dc7a51 jmp 0x12dc78a6 */
  goto L_12dc78a6;
L_12dc7a56:;
  /* 12dc7a56 mov esp, ebp */
  ESP = (EBP);
  /* 12dc7a58 pop ebp */
  EBP = (pop32());
  /* 12dc7a59 ret  */
  ESPCHK(0x12dc7870u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a60 @ 0x12dc7a60 (104 bytes, 38 insns) */
void f_12dc7a60(void) {
  FTRACE(0x12dc7a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc7a60 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc7a61 mov ebp, esp */
  EBP = (ESP);
  /* 12dc7a63 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc7a64 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc7a68 jne 0x12dc7a6c */
  if (!C.zf) goto L_12dc7a6c;
  /* 12dc7a6a jmp 0x12dc7ac4 */
  goto L_12dc7ac4;
L_12dc7a6c:;
  /* 12dc7a6c push 9 */
  push32((uint32_t)(0x9u));
  /* 12dc7a6e call 0x12dc72f0 */
  push32(0x12dc7a73u); f_12dc72f0();
  /* 12dc7a73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc7a76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc7a79 push eax */
  push32((uint32_t)(EAX));
  /* 12dc7a7a call 0x12dc7bf0 */
  push32(0x12dc7a7fu); f_12dc7bf0();
  /* 12dc7a7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc7a82 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dc7a85 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc7a89 je 0x12dc7aa7 */
  if (C.zf) goto L_12dc7aa7;
  /* 12dc7a8b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc7a8e push ecx */
  push32((uint32_t)(ECX));
  /* 12dc7a8f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc7a92 push edx */
  push32((uint32_t)(EDX));
  /* 12dc7a93 call 0x12dc7cb0 */
  push32(0x12dc7a98u); f_12dc7cb0();
  /* 12dc7a98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc7a9b push 9 */
  push32((uint32_t)(0x9u));
  /* 12dc7a9d call 0x12dc7390 */
  push32(0x12dc7aa2u); f_12dc7390();
  /* 12dc7aa2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc7aa5 jmp 0x12dc7ac4 */
  goto L_12dc7ac4;
L_12dc7aa7:;
  /* 12dc7aa7 push 9 */
  push32((uint32_t)(0x9u));
  /* 12dc7aa9 call 0x12dc7390 */
  push32(0x12dc7aaeu); f_12dc7390();
  /* 12dc7aae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc7ab1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc7ab4 push eax */
  push32((uint32_t)(EAX));
  /* 12dc7ab5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc7ab7 mov ecx, dword ptr [0x12de0ecc] */
  ECX = (r32((uint32_t)(0x12de0ecc)));
  /* 12dc7abd push ecx */
  push32((uint32_t)(ECX));
  /* 12dc7abe call dword ptr [0x12de239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de239c))), 0x12dc7ac4u);
L_12dc7ac4:;
  /* 12dc7ac4 mov esp, ebp */
  ESP = (EBP);
  /* 12dc7ac6 pop ebp */
  EBP = (pop32());
  /* 12dc7ac7 ret  */
  ESPCHK(0x12dc7a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ad0 @ 0x12dc7ad0 (116 bytes, 34 insns) */
void f_12dc7ad0(void) {
  FTRACE(0x12dc7ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc7ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc7ad1 mov ebp, esp */
  EBP = (ESP);
  /* 12dc7ad3 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc7ad4 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 12dc7adb push 9 */
  push32((uint32_t)(0x9u));
  /* 12dc7add call 0x12dc72f0 */
  push32(0x12dc7ae2u); f_12dc72f0();
  /* 12dc7ae2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc7ae5 call 0x12dc91e0 */
  push32(0x12dc7aeau); f_12dc91e0();
  /* 12dc7aea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc7aec jge 0x12dc7af5 */
  if ((C.sf==C.of)) goto L_12dc7af5;
  /* 12dc7aee mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_12dc7af5:;
  /* 12dc7af5 push 9 */
  push32((uint32_t)(0x9u));
  /* 12dc7af7 call 0x12dc7390 */
  push32(0x12dc7afcu); f_12dc7390();
  /* 12dc7afc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc7aff push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc7b01 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc7b03 mov eax, dword ptr [0x12de0ecc] */
  EAX = (r32((uint32_t)(0x12de0ecc)));
  /* 12dc7b08 push eax */
  push32((uint32_t)(EAX));
  /* 12dc7b09 call dword ptr [0x12de23a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de23a0))), 0x12dc7b0fu);
  /* 12dc7b0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc7b11 jne 0x12dc7b3d */
  if (!C.zf) goto L_12dc7b3d;
  /* 12dc7b13 call dword ptr [0x12de2380] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2380))), 0x12dc7b19u);
  /* 12dc7b19 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc7b1c jne 0x12dc7b36 */
  if (!C.zf) goto L_12dc7b36;
  /* 12dc7b1e call 0x12dcb7d0 */
  push32(0x12dc7b23u); f_12dcb7d0();
  /* 12dc7b23 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 12dc7b29 call 0x12dcb7c0 */
  push32(0x12dc7b2eu); f_12dcb7c0();
  /* 12dc7b2e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 12dc7b34 jmp 0x12dc7b3d */
  goto L_12dc7b3d;
L_12dc7b36:;
  /* 12dc7b36 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_12dc7b3d:;
  /* 12dc7b3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc7b40 mov esp, ebp */
  ESP = (EBP);
  /* 12dc7b42 pop ebp */
  EBP = (pop32());
  /* 12dc7b43 ret  */
  ESPCHK(0x12dc7ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b50 @ 0x12dc7b50 (10 bytes, 5 insns) */
void f_12dc7b50(void) {
  FTRACE(0x12dc7b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc7b50 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc7b51 mov ebp, esp */
  EBP = (ESP);
  /* 12dc7b53 call 0x12dc7ad0 */
  push32(0x12dc7b58u); f_12dc7ad0();
  /* 12dc7b58 pop ebp */
  EBP = (pop32());
  /* 12dc7b59 ret  */
  ESPCHK(0x12dc7b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b60 @ 0x12dc7b60 (10 bytes, 5 insns) */
void f_12dc7b60(void) {
  FTRACE(0x12dc7b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc7b60 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc7b61 mov ebp, esp */
  EBP = (ESP);
  /* 12dc7b63 mov eax, dword ptr [0x12dddc94] */
  EAX = (r32((uint32_t)(0x12dddc94)));
  /* 12dc7b68 pop ebp */
  EBP = (pop32());
  /* 12dc7b69 ret  */
  ESPCHK(0x12dc7b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b70 @ 0x12dc7b70 (31 bytes, 11 insns) */
void f_12dc7b70(void) {
  FTRACE(0x12dc7b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc7b70 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc7b71 mov ebp, esp */
  EBP = (ESP);
  /* 12dc7b73 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc7b7a jbe 0x12dc7b80 */
  if ((C.cf||C.zf)) goto L_12dc7b80;
  /* 12dc7b7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc7b7e jmp 0x12dc7b8d */
  goto L_12dc7b8d;
L_12dc7b80:;
  /* 12dc7b80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc7b83 mov dword ptr [0x12dddc94], eax */
  w32((uint32_t)(0x12dddc94), (EAX));
  /* 12dc7b88 mov eax, 1 */
  EAX = (0x1u);
L_12dc7b8d:;
  /* 12dc7b8d pop ebp */
  EBP = (pop32());
  /* 12dc7b8e ret  */
  ESPCHK(0x12dc7b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b90 @ 0x12dc7b90 (89 bytes, 20 insns) */
void f_12dc7b90(void) {
  FTRACE(0x12dc7b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc7b90 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc7b91 mov ebp, esp */
  EBP = (ESP);
  /* 12dc7b93 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 12dc7b98 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc7b9a mov eax, dword ptr [0x12de0ecc] */
  EAX = (r32((uint32_t)(0x12de0ecc)));
  /* 12dc7b9f push eax */
  push32((uint32_t)(EAX));
  /* 12dc7ba0 call dword ptr [0x12de230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de230c))), 0x12dc7ba6u);
  /* 12dc7ba6 mov dword ptr [0x12de0ec8], eax */
  w32((uint32_t)(0x12de0ec8), (EAX));
  /* 12dc7bab cmp dword ptr [0x12de0ec8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12de0ec8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc7bb2 jne 0x12dc7bb8 */
  if (!C.zf) goto L_12dc7bb8;
  /* 12dc7bb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc7bb6 jmp 0x12dc7be7 */
  goto L_12dc7be7;
L_12dc7bb8:;
  /* 12dc7bb8 mov ecx, dword ptr [0x12de0ec8] */
  ECX = (r32((uint32_t)(0x12de0ec8)));
  /* 12dc7bbe mov dword ptr [0x12de0ebc], ecx */
  w32((uint32_t)(0x12de0ebc), (ECX));
  /* 12dc7bc4 mov dword ptr [0x12de0ec0], 0 */
  w32((uint32_t)(0x12de0ec0), (0x0u));
  /* 12dc7bce mov dword ptr [0x12de0ec4], 0 */
  w32((uint32_t)(0x12de0ec4), (0x0u));
  /* 12dc7bd8 mov dword ptr [0x12de0ea8], 0x10 */
  w32((uint32_t)(0x12de0ea8), (0x10u));
  /* 12dc7be2 mov eax, 1 */
  EAX = (0x1u);
L_12dc7be7:;
  /* 12dc7be7 pop ebp */
  EBP = (pop32());
  /* 12dc7be8 ret  */
  ESPCHK(0x12dc7b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10007bf0 @ 0x12dc7bf0 (85 bytes, 29 insns) */
void f_12dc7bf0(void) {
  FTRACE(0x12dc7bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc7bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc7bf1 mov ebp, esp */
  EBP = (ESP);
  /* 12dc7bf3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc7bf6 mov eax, dword ptr [0x12de0ec4] */
  EAX = (r32((uint32_t)(0x12de0ec4)));
  /* 12dc7bfb imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dc7bfe mov ecx, dword ptr [0x12de0ec8] */
  ECX = (r32((uint32_t)(0x12de0ec8)));
  /* 12dc7c04 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc7c06 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dc7c09 mov edx, dword ptr [0x12de0ec8] */
  EDX = (r32((uint32_t)(0x12de0ec8)));
  /* 12dc7c0f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12dc7c12:;
  /* 12dc7c12 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc7c15 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc7c18 jae 0x12dc7c3f */
  if (!C.cf) goto L_12dc7c3f;
  /* 12dc7c1a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc7c1d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc7c20 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc7c23 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12dc7c26 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc7c2d jae 0x12dc7c34 */
  if (!C.cf) goto L_12dc7c34;
  /* 12dc7c2f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc7c32 jmp 0x12dc7c41 */
  goto L_12dc7c41;
L_12dc7c34:;
  /* 12dc7c34 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc7c37 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc7c3a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dc7c3d jmp 0x12dc7c12 */
  goto L_12dc7c12;
L_12dc7c3f:;
  /* 12dc7c3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12dc7c41:;
  /* 12dc7c41 mov esp, ebp */
  ESP = (EBP);
  /* 12dc7c43 pop ebp */
  EBP = (pop32());
  /* 12dc7c44 ret  */
  ESPCHK(0x12dc7bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c50 @ 0x12dc7c50 (95 bytes, 33 insns) */
void f_12dc7c50(void) {
  FTRACE(0x12dc7c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc7c50 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc7c51 mov ebp, esp */
  EBP = (ESP);
  /* 12dc7c53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc7c56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc7c59 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc7c5c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc7c5f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dc7c62 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc7c65 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12dc7c68 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12dc7c6b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12dc7c70 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc7c73 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12dc7c75 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc7c78 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12dc7c7b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12dc7c7d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dc7c7f jne 0x12dc7ca1 */
  if (!C.zf) goto L_12dc7ca1;
  /* 12dc7c81 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc7c84 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 12dc7c87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc7c89 jne 0x12dc7ca1 */
  if (!C.zf) goto L_12dc7ca1;
  /* 12dc7c8b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc7c8e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 12dc7c94 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dc7c96 je 0x12dc7ca1 */
  if (C.zf) goto L_12dc7ca1;
  /* 12dc7c98 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 12dc7c9f jmp 0x12dc7ca8 */
  goto L_12dc7ca8;
L_12dc7ca1:;
  /* 12dc7ca1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12dc7ca8:;
  /* 12dc7ca8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc7cab mov esp, ebp */
  ESP = (EBP);
  /* 12dc7cad pop ebp */
  EBP = (pop32());
  /* 12dc7cae ret  */
  ESPCHK(0x12dc7c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10007cb0 @ 0x12dc7cb0 (1485 bytes, 453 insns) */
void f_12dc7cb0(void) {
  FTRACE(0x12dc7cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc7cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc7cb1 mov ebp, esp */
  EBP = (ESP);
  /* 12dc7cb3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc7cb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc7cb9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12dc7cbc mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 12dc7cbf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc7cc2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc7cc5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc7cc8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12dc7ccb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc7cce shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 12dc7cd1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12dc7cd4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc7cd7 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dc7cdd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dc7ce0 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 12dc7ce7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dc7cea mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc7ced sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc7cf0 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12dc7cf3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dc7cf6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dc7cf8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc7cfb mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12dc7cfe mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dc7d01 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc7d04 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 12dc7d07 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dc7d0a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dc7d0c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12dc7d0f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dc7d12 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 12dc7d15 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12dc7d18 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dc7d1b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12dc7d1e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dc7d20 jne 0x12dc7e48 */
  if (!C.zf) goto L_12dc7e48;
  /* 12dc7d26 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dc7d29 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12dc7d2c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc7d2f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12dc7d32 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc7d36 jbe 0x12dc7d3f */
  if ((C.cf||C.zf)) goto L_12dc7d3f;
  /* 12dc7d38 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12dc7d3f:;
  /* 12dc7d3f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dc7d42 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dc7d45 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12dc7d48 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc7d4b jne 0x12dc7e21 */
  if (!C.zf) goto L_12dc7e21;
  /* 12dc7d51 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc7d55 jae 0x12dc7db6 */
  if (!C.cf) goto L_12dc7db6;
  /* 12dc7d57 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12dc7d5c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc7d5f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12dc7d61 not eax */
  EAX = (~(EAX));
  /* 12dc7d63 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc7d66 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dc7d69 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12dc7d6d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dc7d6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc7d72 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dc7d75 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12dc7d79 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dc7d7c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc7d7f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12dc7d82 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12dc7d85 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dc7d88 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc7d8b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12dc7d8e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dc7d91 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc7d94 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12dc7d98 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dc7d9a jne 0x12dc7db4 */
  if (!C.zf) goto L_12dc7db4;
  /* 12dc7d9c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12dc7da1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc7da4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12dc7da6 not eax */
  EAX = (~(EAX));
  /* 12dc7da8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc7dab mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dc7dad and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12dc7daf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc7db2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12dc7db4:;
  /* 12dc7db4 jmp 0x12dc7e21 */
  goto L_12dc7e21;
L_12dc7db6:;
  /* 12dc7db6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc7db9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc7dbc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12dc7dc1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12dc7dc3 not edx */
  EDX = (~(EDX));
  /* 12dc7dc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc7dc8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dc7dcb mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12dc7dd2 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc7dd4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc7dd7 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dc7dda mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 12dc7de1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dc7de4 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc7de7 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12dc7dea sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12dc7ded mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dc7df0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc7df3 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12dc7df6 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dc7df9 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc7dfc movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12dc7e00 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dc7e02 jne 0x12dc7e21 */
  if (!C.zf) goto L_12dc7e21;
  /* 12dc7e04 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc7e07 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc7e0a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12dc7e0f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12dc7e11 not edx */
  EDX = (~(EDX));
  /* 12dc7e13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc7e16 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12dc7e19 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12dc7e1b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc7e1e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12dc7e21:;
  /* 12dc7e21 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dc7e24 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12dc7e27 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dc7e2a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12dc7e2d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12dc7e30 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dc7e33 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12dc7e36 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dc7e39 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12dc7e3c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12dc7e3f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc7e42 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc7e45 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_12dc7e48:;
  /* 12dc7e48 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc7e4b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12dc7e4e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc7e51 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12dc7e54 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc7e58 jbe 0x12dc7e61 */
  if ((C.cf||C.zf)) goto L_12dc7e61;
  /* 12dc7e5a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_12dc7e61:;
  /* 12dc7e61 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc7e64 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12dc7e67 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dc7e69 jne 0x12dc7fc5 */
  if (!C.zf) goto L_12dc7fc5;
  /* 12dc7e6f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dc7e72 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc7e75 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 12dc7e78 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc7e7b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12dc7e7e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc7e81 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12dc7e84 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc7e88 jbe 0x12dc7e91 */
  if ((C.cf||C.zf)) goto L_12dc7e91;
  /* 12dc7e8a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_12dc7e91:;
  /* 12dc7e91 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc7e94 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc7e97 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12dc7e9a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc7e9d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12dc7ea0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc7ea3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12dc7ea6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc7eaa jbe 0x12dc7eb3 */
  if ((C.cf||C.zf)) goto L_12dc7eb3;
  /* 12dc7eac mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_12dc7eb3:;
  /* 12dc7eb3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dc7eb6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc7eb9 je 0x12dc7fbf */
  if (C.zf) goto L_12dc7fbf;
  /* 12dc7ebf mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12dc7ec2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12dc7ec5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12dc7ec8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc7ecb jne 0x12dc7fa1 */
  if (!C.zf) goto L_12dc7fa1;
  /* 12dc7ed1 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc7ed5 jae 0x12dc7f36 */
  if (!C.cf) goto L_12dc7f36;
  /* 12dc7ed7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12dc7edc mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dc7edf shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12dc7ee1 not edx */
  EDX = (~(EDX));
  /* 12dc7ee3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc7ee6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dc7ee9 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12dc7eed and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc7eef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc7ef2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dc7ef5 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12dc7ef9 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dc7efc add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc7eff mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12dc7f02 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12dc7f05 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dc7f08 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc7f0b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12dc7f0e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dc7f11 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc7f14 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12dc7f18 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dc7f1a jne 0x12dc7f34 */
  if (!C.zf) goto L_12dc7f34;
  /* 12dc7f1c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12dc7f21 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dc7f24 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12dc7f26 not edx */
  EDX = (~(EDX));
  /* 12dc7f28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc7f2b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dc7f2d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12dc7f2f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc7f32 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12dc7f34:;
  /* 12dc7f34 jmp 0x12dc7fa1 */
  goto L_12dc7fa1;
L_12dc7f36:;
  /* 12dc7f36 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dc7f39 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc7f3c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12dc7f41 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12dc7f43 not eax */
  EAX = (~(EAX));
  /* 12dc7f45 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc7f48 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dc7f4b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12dc7f52 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dc7f54 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc7f57 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dc7f5a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12dc7f61 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dc7f64 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc7f67 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12dc7f6a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12dc7f6d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dc7f70 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc7f73 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12dc7f76 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dc7f79 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc7f7c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12dc7f80 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dc7f82 jne 0x12dc7fa1 */
  if (!C.zf) goto L_12dc7fa1;
  /* 12dc7f84 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dc7f87 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc7f8a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12dc7f8f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12dc7f91 not eax */
  EAX = (~(EAX));
  /* 12dc7f93 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc7f96 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12dc7f99 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12dc7f9b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc7f9e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12dc7fa1:;
  /* 12dc7fa1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12dc7fa4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12dc7fa7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12dc7faa mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12dc7fad mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12dc7fb0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12dc7fb3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12dc7fb6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12dc7fb9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12dc7fbc mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_12dc7fbf:;
  /* 12dc7fbf mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12dc7fc2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_12dc7fc5:;
  /* 12dc7fc5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc7fc8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12dc7fcb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dc7fcd jne 0x12dc7fdb */
  if (!C.zf) goto L_12dc7fdb;
  /* 12dc7fcf mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dc7fd2 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc7fd5 je 0x12dc80eb */
  if (C.zf) goto L_12dc80eb;
L_12dc7fdb:;
  /* 12dc7fdb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dc7fde mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc7fe1 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 12dc7fe4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12dc7fe7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dc7fea mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dc7fed mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12dc7ff0 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12dc7ff3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dc7ff6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dc7ff9 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12dc7ffc mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dc7fff mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dc8002 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12dc8005 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dc8008 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12dc800b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dc800e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12dc8011 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dc8014 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dc8017 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12dc801a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc801d jne 0x12dc80eb */
  if (!C.zf) goto L_12dc80eb;
  /* 12dc8023 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc8027 jae 0x12dc8084 */
  if (!C.cf) goto L_12dc8084;
  /* 12dc8029 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dc802c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc802f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12dc8033 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dc8036 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8039 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12dc803c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12dc803f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dc8042 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8045 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12dc8048 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dc804a jne 0x12dc8062 */
  if (!C.zf) goto L_12dc8062;
  /* 12dc804c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12dc8051 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dc8054 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12dc8056 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc8059 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dc805b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12dc805d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc8060 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12dc8062:;
  /* 12dc8062 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12dc8067 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dc806a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12dc806c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc806f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dc8072 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12dc8076 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dc8078 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc807b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dc807e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12dc8082 jmp 0x12dc80eb */
  goto L_12dc80eb;
L_12dc8084:;
  /* 12dc8084 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dc8087 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc808a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12dc808e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dc8091 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8094 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12dc8097 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12dc809a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dc809d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc80a0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12dc80a3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dc80a5 jne 0x12dc80c2 */
  if (!C.zf) goto L_12dc80c2;
  /* 12dc80a7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dc80aa sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc80ad mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12dc80b2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12dc80b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc80b7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12dc80ba or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12dc80bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc80bf mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12dc80c2:;
  /* 12dc80c2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dc80c5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc80c8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12dc80cd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12dc80cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc80d2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dc80d5 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12dc80dc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dc80de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc80e1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dc80e4 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_12dc80eb:;
  /* 12dc80eb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dc80ee mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc80f1 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12dc80f3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dc80f6 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc80f9 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc80fc mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 12dc80ff mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc8102 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12dc8104 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc8107 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc810a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12dc810c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc810f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc8112 jne 0x12dc8279 */
  if (!C.zf) goto L_12dc8279;
  /* 12dc8118 cmp dword ptr [0x12de0ec0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12de0ec0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc811f je 0x12dc8268 */
  if (C.zf) goto L_12dc8268;
  /* 12dc8125 mov eax, dword ptr [0x12de0eb8] */
  EAX = (r32((uint32_t)(0x12de0eb8)));
  /* 12dc812a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 12dc812d mov ecx, dword ptr [0x12de0ec0] */
  ECX = (r32((uint32_t)(0x12de0ec0)));
  /* 12dc8133 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12dc8136 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8138 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12dc813b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12dc8140 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12dc8145 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc8148 push eax */
  push32((uint32_t)(EAX));
  /* 12dc8149 call dword ptr [0x12de2328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2328))), 0x12dc814fu);
  /* 12dc814f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12dc8154 mov ecx, dword ptr [0x12de0eb8] */
  ECX = (r32((uint32_t)(0x12de0eb8)));
  /* 12dc815a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12dc815c mov eax, dword ptr [0x12de0ec0] */
  EAX = (r32((uint32_t)(0x12de0ec0)));
  /* 12dc8161 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12dc8164 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12dc8166 mov edx, dword ptr [0x12de0ec0] */
  EDX = (r32((uint32_t)(0x12de0ec0)));
  /* 12dc816c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12dc816f mov eax, dword ptr [0x12de0ec0] */
  EAX = (r32((uint32_t)(0x12de0ec0)));
  /* 12dc8174 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12dc8177 mov edx, dword ptr [0x12de0eb8] */
  EDX = (r32((uint32_t)(0x12de0eb8)));
  /* 12dc817d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 12dc8188 mov eax, dword ptr [0x12de0ec0] */
  EAX = (r32((uint32_t)(0x12de0ec0)));
  /* 12dc818d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12dc8190 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 12dc8193 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12dc8196 mov eax, dword ptr [0x12de0ec0] */
  EAX = (r32((uint32_t)(0x12de0ec0)));
  /* 12dc819b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12dc819e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 12dc81a1 mov edx, dword ptr [0x12de0ec0] */
  EDX = (r32((uint32_t)(0x12de0ec0)));
  /* 12dc81a7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12dc81aa movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 12dc81ae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dc81b0 jne 0x12dc81c6 */
  if (!C.zf) goto L_12dc81c6;
  /* 12dc81b2 mov edx, dword ptr [0x12de0ec0] */
  EDX = (r32((uint32_t)(0x12de0ec0)));
  /* 12dc81b8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12dc81bb and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 12dc81bd mov ecx, dword ptr [0x12de0ec0] */
  ECX = (r32((uint32_t)(0x12de0ec0)));
  /* 12dc81c3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_12dc81c6:;
  /* 12dc81c6 mov edx, dword ptr [0x12de0ec0] */
  EDX = (r32((uint32_t)(0x12de0ec0)));
  /* 12dc81cc cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc81d0 jne 0x12dc8268 */
  if (!C.zf) goto L_12dc8268;
  /* 12dc81d6 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12dc81db push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc81dd mov eax, dword ptr [0x12de0ec0] */
  EAX = (r32((uint32_t)(0x12de0ec0)));
  /* 12dc81e2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12dc81e5 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc81e6 call dword ptr [0x12de2328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2328))), 0x12dc81ecu);
  /* 12dc81ec mov edx, dword ptr [0x12de0ec0] */
  EDX = (r32((uint32_t)(0x12de0ec0)));
  /* 12dc81f2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12dc81f5 push eax */
  push32((uint32_t)(EAX));
  /* 12dc81f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc81f8 mov ecx, dword ptr [0x12de0ecc] */
  ECX = (r32((uint32_t)(0x12de0ecc)));
  /* 12dc81fe push ecx */
  push32((uint32_t)(ECX));
  /* 12dc81ff call dword ptr [0x12de239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de239c))), 0x12dc8205u);
  /* 12dc8205 mov edx, dword ptr [0x12de0ec4] */
  EDX = (r32((uint32_t)(0x12de0ec4)));
  /* 12dc820b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dc820e mov eax, dword ptr [0x12de0ec8] */
  EAX = (r32((uint32_t)(0x12de0ec8)));
  /* 12dc8213 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8215 mov ecx, dword ptr [0x12de0ec0] */
  ECX = (r32((uint32_t)(0x12de0ec0)));
  /* 12dc821b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc821e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc8220 push eax */
  push32((uint32_t)(EAX));
  /* 12dc8221 mov edx, dword ptr [0x12de0ec0] */
  EDX = (r32((uint32_t)(0x12de0ec0)));
  /* 12dc8227 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc822a push edx */
  push32((uint32_t)(EDX));
  /* 12dc822b mov eax, dword ptr [0x12de0ec0] */
  EAX = (r32((uint32_t)(0x12de0ec0)));
  /* 12dc8230 push eax */
  push32((uint32_t)(EAX));
  /* 12dc8231 call 0x12dcb7e0 */
  push32(0x12dc8236u); f_12dcb7e0();
  /* 12dc8236 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8239 mov ecx, dword ptr [0x12de0ec4] */
  ECX = (r32((uint32_t)(0x12de0ec4)));
  /* 12dc823f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc8242 mov dword ptr [0x12de0ec4], ecx */
  w32((uint32_t)(0x12de0ec4), (ECX));
  /* 12dc8248 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc824b cmp edx, dword ptr [0x12de0ec0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12de0ec0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc8251 jbe 0x12dc825c */
  if ((C.cf||C.zf)) goto L_12dc825c;
  /* 12dc8253 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc8256 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc8259 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12dc825c:;
  /* 12dc825c mov ecx, dword ptr [0x12de0ec8] */
  ECX = (r32((uint32_t)(0x12de0ec8)));
  /* 12dc8262 mov dword ptr [0x12de0ebc], ecx */
  w32((uint32_t)(0x12de0ebc), (ECX));
L_12dc8268:;
  /* 12dc8268 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc826b mov dword ptr [0x12de0ec0], edx */
  w32((uint32_t)(0x12de0ec0), (EDX));
  /* 12dc8271 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc8274 mov dword ptr [0x12de0eb8], eax */
  w32((uint32_t)(0x12de0eb8), (EAX));
L_12dc8279:;
  /* 12dc8279 mov esp, ebp */
  ESP = (EBP);
  /* 12dc827b pop ebp */
  EBP = (pop32());
  /* 12dc827c ret  */
  ESPCHK(0x12dc7cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008280 @ 0x12dc8280 (1334 bytes, 427 insns) */
void f_12dc8280(void) {
  FTRACE(0x12dc8280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc8280 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc8281 mov ebp, esp */
  EBP = (ESP);
  /* 12dc8283 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc8286 push esi */
  push32((uint32_t)(ESI));
  /* 12dc8287 mov eax, dword ptr [0x12de0ec4] */
  EAX = (r32((uint32_t)(0x12de0ec4)));
  /* 12dc828c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dc828f mov ecx, dword ptr [0x12de0ec8] */
  ECX = (r32((uint32_t)(0x12de0ec8)));
  /* 12dc8295 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8297 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12dc829a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc829d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc82a0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12dc82a3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12dc82a6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dc82a9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12dc82ac sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc82af mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12dc82b2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc82b6 jge 0x12dc82cc */
  if ((C.sf==C.of)) goto L_12dc82cc;
  /* 12dc82b8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12dc82bb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dc82be shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12dc82c0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12dc82c3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 12dc82ca jmp 0x12dc82e1 */
  goto L_12dc82e1;
L_12dc82cc:;
  /* 12dc82cc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12dc82d3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dc82d6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc82d9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dc82dc shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12dc82de mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_12dc82e1:;
  /* 12dc82e1 mov ecx, dword ptr [0x12de0ebc] */
  ECX = (r32((uint32_t)(0x12de0ebc)));
  /* 12dc82e7 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_12dc82ea:;
  /* 12dc82ea mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc82ed cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc82f0 jae 0x12dc8316 */
  if (!C.cf) goto L_12dc8316;
  /* 12dc82f2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc82f5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc82f8 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 12dc82fa mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc82fd mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12dc8300 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 12dc8303 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dc8305 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dc8307 je 0x12dc830b */
  if (C.zf) goto L_12dc830b;
  /* 12dc8309 jmp 0x12dc8316 */
  goto L_12dc8316;
L_12dc830b:;
  /* 12dc830b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc830e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8311 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12dc8314 jmp 0x12dc82ea */
  goto L_12dc82ea;
L_12dc8316:;
  /* 12dc8316 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc8319 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc831c jne 0x12dc83fd */
  if (!C.zf) goto L_12dc83fd;
  /* 12dc8322 mov eax, dword ptr [0x12de0ec8] */
  EAX = (r32((uint32_t)(0x12de0ec8)));
  /* 12dc8327 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12dc832a:;
  /* 12dc832a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc832d cmp ecx, dword ptr [0x12de0ebc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12de0ebc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc8333 jae 0x12dc8359 */
  if (!C.cf) goto L_12dc8359;
  /* 12dc8335 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc8338 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc833b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 12dc833d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc8340 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12dc8343 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 12dc8346 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc8348 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc834a je 0x12dc834e */
  if (C.zf) goto L_12dc834e;
  /* 12dc834c jmp 0x12dc8359 */
  goto L_12dc8359;
L_12dc834e:;
  /* 12dc834e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc8351 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8354 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12dc8357 jmp 0x12dc832a */
  goto L_12dc832a;
L_12dc8359:;
  /* 12dc8359 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc835c cmp ecx, dword ptr [0x12de0ebc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12de0ebc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc8362 jne 0x12dc83fd */
  if (!C.zf) goto L_12dc83fd;
L_12dc8368:;
  /* 12dc8368 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc836b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc836e jae 0x12dc8386 */
  if (!C.cf) goto L_12dc8386;
  /* 12dc8370 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc8373 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc8377 je 0x12dc837b */
  if (C.zf) goto L_12dc837b;
  /* 12dc8379 jmp 0x12dc8386 */
  goto L_12dc8386;
L_12dc837b:;
  /* 12dc837b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc837e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8381 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12dc8384 jmp 0x12dc8368 */
  goto L_12dc8368;
L_12dc8386:;
  /* 12dc8386 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc8389 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc838c jne 0x12dc83d7 */
  if (!C.zf) goto L_12dc83d7;
  /* 12dc838e mov eax, dword ptr [0x12de0ec8] */
  EAX = (r32((uint32_t)(0x12de0ec8)));
  /* 12dc8393 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12dc8396:;
  /* 12dc8396 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc8399 cmp ecx, dword ptr [0x12de0ebc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12de0ebc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc839f jae 0x12dc83b7 */
  if (!C.cf) goto L_12dc83b7;
  /* 12dc83a1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc83a4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc83a8 je 0x12dc83ac */
  if (C.zf) goto L_12dc83ac;
  /* 12dc83aa jmp 0x12dc83b7 */
  goto L_12dc83b7;
L_12dc83ac:;
  /* 12dc83ac mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc83af add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc83b2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12dc83b5 jmp 0x12dc8396 */
  goto L_12dc8396;
L_12dc83b7:;
  /* 12dc83b7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc83ba cmp ecx, dword ptr [0x12de0ebc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12de0ebc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc83c0 jne 0x12dc83d7 */
  if (!C.zf) goto L_12dc83d7;
  /* 12dc83c2 call 0x12dc87c0 */
  push32(0x12dc83c7u); f_12dc87c0();
  /* 12dc83c7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12dc83ca cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc83ce jne 0x12dc83d7 */
  if (!C.zf) goto L_12dc83d7;
  /* 12dc83d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc83d2 jmp 0x12dc87b1 */
  goto L_12dc87b1;
L_12dc83d7:;
  /* 12dc83d7 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc83da push edx */
  push32((uint32_t)(EDX));
  /* 12dc83db call 0x12dc88d0 */
  push32(0x12dc83e0u); f_12dc88d0();
  /* 12dc83e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc83e3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc83e6 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12dc83e9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12dc83eb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc83ee mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12dc83f1 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc83f4 jne 0x12dc83fd */
  if (!C.zf) goto L_12dc83fd;
  /* 12dc83f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc83f8 jmp 0x12dc87b1 */
  goto L_12dc87b1;
L_12dc83fd:;
  /* 12dc83fd mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc8400 mov dword ptr [0x12de0ebc], edx */
  w32((uint32_t)(0x12de0ebc), (EDX));
  /* 12dc8406 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc8409 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12dc840c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 12dc840f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dc8412 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12dc8414 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12dc8417 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc841b je 0x12dc8440 */
  if (C.zf) goto L_12dc8440;
  /* 12dc841d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc8420 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dc8423 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc8426 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 12dc842a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc842d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dc8430 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 12dc8433 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 12dc843a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 12dc843c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc843e jne 0x12dc8475 */
  if (!C.zf) goto L_12dc8475;
L_12dc8440:;
  /* 12dc8440 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_12dc8447:;
  /* 12dc8447 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc844a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dc844d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc8450 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 12dc8454 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc8457 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dc845a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 12dc845d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 12dc8464 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 12dc8466 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dc8468 jne 0x12dc8475 */
  if (!C.zf) goto L_12dc8475;
  /* 12dc846a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc846d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8470 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12dc8473 jmp 0x12dc8447 */
  goto L_12dc8447;
L_12dc8475:;
  /* 12dc8475 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc8478 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dc847e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dc8481 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12dc8488 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12dc848b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12dc8492 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc8495 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dc8498 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc849b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 12dc849f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12dc84a2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc84a6 jne 0x12dc84c2 */
  if (!C.zf) goto L_12dc84c2;
  /* 12dc84a8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 12dc84af mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc84b2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dc84b5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12dc84b8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 12dc84bf mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_12dc84c2:;
  /* 12dc84c2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc84c6 jl 0x12dc84db */
  if ((C.sf!=C.of)) goto L_12dc84db;
  /* 12dc84c8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dc84cb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12dc84cd mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12dc84d0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dc84d3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc84d6 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12dc84d9 jmp 0x12dc84c2 */
  goto L_12dc84c2;
L_12dc84db:;
  /* 12dc84db mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dc84de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc84e1 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 12dc84e5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12dc84e8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc84eb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12dc84ed sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc84f0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dc84f3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc84f6 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12dc84f9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc84fc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12dc84ff cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc8503 jle 0x12dc850c */
  if ((C.zf||C.sf!=C.of)) goto L_12dc850c;
  /* 12dc8505 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_12dc850c:;
  /* 12dc850c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dc850f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc8512 je 0x12dc8730 */
  if (C.zf) goto L_12dc8730;
  /* 12dc8518 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc851b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc851e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12dc8521 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc8524 jne 0x12dc85fa */
  if (!C.zf) goto L_12dc85fa;
  /* 12dc852a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc852e jge 0x12dc858f */
  if ((C.sf==C.of)) goto L_12dc858f;
  /* 12dc8530 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12dc8535 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dc8538 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12dc853a not eax */
  EAX = (~(EAX));
  /* 12dc853c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc853f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dc8542 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12dc8546 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dc8548 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc854b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dc854e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12dc8552 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dc8555 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8558 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12dc855b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12dc855e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dc8561 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8564 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12dc8567 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dc856a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc856d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12dc8571 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dc8573 jne 0x12dc858d */
  if (!C.zf) goto L_12dc858d;
  /* 12dc8575 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12dc857a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dc857d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12dc857f not eax */
  EAX = (~(EAX));
  /* 12dc8581 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc8584 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dc8586 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12dc8588 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc858b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12dc858d:;
  /* 12dc858d jmp 0x12dc85fa */
  goto L_12dc85fa;
L_12dc858f:;
  /* 12dc858f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dc8592 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc8595 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12dc859a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12dc859c not edx */
  EDX = (~(EDX));
  /* 12dc859e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc85a1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dc85a4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12dc85ab and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc85ad mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc85b0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dc85b3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 12dc85ba mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dc85bd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc85c0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12dc85c3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12dc85c6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dc85c9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc85cc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12dc85cf mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dc85d2 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc85d5 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12dc85d9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dc85db jne 0x12dc85fa */
  if (!C.zf) goto L_12dc85fa;
  /* 12dc85dd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dc85e0 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc85e3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12dc85e8 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12dc85ea not edx */
  EDX = (~(EDX));
  /* 12dc85ec mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc85ef mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12dc85f2 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12dc85f4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc85f7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12dc85fa:;
  /* 12dc85fa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc85fd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12dc8600 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc8603 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12dc8606 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12dc8609 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc860c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12dc860f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc8612 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12dc8615 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12dc8618 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc861c je 0x12dc8730 */
  if (C.zf) goto L_12dc8730;
  /* 12dc8622 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dc8625 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc8628 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 12dc862b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dc862e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc8631 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc8634 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12dc8637 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12dc863a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc863d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc8640 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12dc8643 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc8646 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc8649 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12dc864c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc864f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12dc8652 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc8655 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12dc8658 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc865b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc865e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12dc8661 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc8664 jne 0x12dc8730 */
  if (!C.zf) goto L_12dc8730;
  /* 12dc866a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc866e jge 0x12dc86ca */
  if ((C.sf==C.of)) goto L_12dc86ca;
  /* 12dc8670 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dc8673 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8676 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12dc867a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dc867d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8680 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12dc8683 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12dc8685 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dc8688 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc868b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12dc868e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dc8690 jne 0x12dc86a8 */
  if (!C.zf) goto L_12dc86a8;
  /* 12dc8692 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12dc8697 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dc869a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12dc869c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc869f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dc86a1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12dc86a3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc86a6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12dc86a8:;
  /* 12dc86a8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12dc86ad mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dc86b0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12dc86b2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc86b5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dc86b8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12dc86bc or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc86be mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc86c1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dc86c4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12dc86c8 jmp 0x12dc8730 */
  goto L_12dc8730;
L_12dc86ca:;
  /* 12dc86ca mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dc86cd add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc86d0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12dc86d4 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dc86d7 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc86da mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12dc86dd add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12dc86df mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dc86e2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc86e5 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12dc86e8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dc86ea jne 0x12dc8707 */
  if (!C.zf) goto L_12dc8707;
  /* 12dc86ec mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dc86ef sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc86f2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12dc86f7 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12dc86f9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc86fc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12dc86ff or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12dc8701 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc8704 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12dc8707:;
  /* 12dc8707 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dc870a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc870d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12dc8712 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12dc8714 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc8717 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dc871a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12dc8721 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc8723 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc8726 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dc8729 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_12dc8730:;
  /* 12dc8730 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc8734 je 0x12dc874a */
  if (C.zf) goto L_12dc874a;
  /* 12dc8736 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc8739 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc873c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12dc873e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc8741 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8744 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc8747 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_12dc874a:;
  /* 12dc874a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc874d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8750 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12dc8753 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dc8756 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8759 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc875c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12dc875e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dc8761 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8764 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc8767 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc876a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 12dc876d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc8770 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dc8772 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc8775 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12dc8777 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc877a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc877d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12dc877f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dc8781 jne 0x12dc87a3 */
  if (!C.zf) goto L_12dc87a3;
  /* 12dc8783 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc8786 cmp eax, dword ptr [0x12de0ec0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12de0ec0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc878c jne 0x12dc87a3 */
  if (!C.zf) goto L_12dc87a3;
  /* 12dc878e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc8791 cmp ecx, dword ptr [0x12de0eb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12de0eb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc8797 jne 0x12dc87a3 */
  if (!C.zf) goto L_12dc87a3;
  /* 12dc8799 mov dword ptr [0x12de0ec0], 0 */
  w32((uint32_t)(0x12de0ec0), (0x0u));
L_12dc87a3:;
  /* 12dc87a3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dc87a6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc87a9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12dc87ab mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc87ae add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12dc87b1:;
  /* 12dc87b1 pop esi */
  ESI = (pop32());
  /* 12dc87b2 mov esp, ebp */
  ESP = (EBP);
  /* 12dc87b4 pop ebp */
  EBP = (pop32());
  /* 12dc87b5 ret  */
  ESPCHK(0x12dc8280u, _esp0);
  ESP += 4; return;
}

/* FUN_100087c0 @ 0x12dc87c0 (271 bytes, 78 insns) */
void f_12dc87c0(void) {
  FTRACE(0x12dc87c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc87c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc87c1 mov ebp, esp */
  EBP = (ESP);
  /* 12dc87c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc87c4 mov eax, dword ptr [0x12de0ec4] */
  EAX = (r32((uint32_t)(0x12de0ec4)));
  /* 12dc87c9 cmp eax, dword ptr [0x12de0ea8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12de0ea8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc87cf jne 0x12dc881b */
  if (!C.zf) goto L_12dc881b;
  /* 12dc87d1 mov ecx, dword ptr [0x12de0ea8] */
  ECX = (r32((uint32_t)(0x12de0ea8)));
  /* 12dc87d7 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc87da imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dc87dd push ecx */
  push32((uint32_t)(ECX));
  /* 12dc87de mov edx, dword ptr [0x12de0ec8] */
  EDX = (r32((uint32_t)(0x12de0ec8)));
  /* 12dc87e4 push edx */
  push32((uint32_t)(EDX));
  /* 12dc87e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc87e7 mov eax, dword ptr [0x12de0ecc] */
  EAX = (r32((uint32_t)(0x12de0ecc)));
  /* 12dc87ec push eax */
  push32((uint32_t)(EAX));
  /* 12dc87ed call dword ptr [0x12de2314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2314))), 0x12dc87f3u);
  /* 12dc87f3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dc87f6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc87fa jne 0x12dc8803 */
  if (!C.zf) goto L_12dc8803;
  /* 12dc87fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc87fe jmp 0x12dc88cb */
  goto L_12dc88cb;
L_12dc8803:;
  /* 12dc8803 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc8806 mov dword ptr [0x12de0ec8], ecx */
  w32((uint32_t)(0x12de0ec8), (ECX));
  /* 12dc880c mov edx, dword ptr [0x12de0ea8] */
  EDX = (r32((uint32_t)(0x12de0ea8)));
  /* 12dc8812 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8815 mov dword ptr [0x12de0ea8], edx */
  w32((uint32_t)(0x12de0ea8), (EDX));
L_12dc881b:;
  /* 12dc881b mov eax, dword ptr [0x12de0ec4] */
  EAX = (r32((uint32_t)(0x12de0ec4)));
  /* 12dc8820 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dc8823 mov ecx, dword ptr [0x12de0ec8] */
  ECX = (r32((uint32_t)(0x12de0ec8)));
  /* 12dc8829 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc882b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12dc882e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 12dc8833 push 8 */
  push32((uint32_t)(0x8u));
  /* 12dc8835 mov edx, dword ptr [0x12de0ecc] */
  EDX = (r32((uint32_t)(0x12de0ecc)));
  /* 12dc883b push edx */
  push32((uint32_t)(EDX));
  /* 12dc883c call dword ptr [0x12de230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de230c))), 0x12dc8842u);
  /* 12dc8842 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc8845 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 12dc8848 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc884b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc884f jne 0x12dc8855 */
  if (!C.zf) goto L_12dc8855;
  /* 12dc8851 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc8853 jmp 0x12dc88cb */
  goto L_12dc88cb;
L_12dc8855:;
  /* 12dc8855 push 4 */
  push32((uint32_t)(0x4u));
  /* 12dc8857 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 12dc885c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 12dc8861 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc8863 call dword ptr [0x12de2304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2304))), 0x12dc8869u);
  /* 12dc8869 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc886c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 12dc886f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc8872 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc8876 jne 0x12dc8892 */
  if (!C.zf) goto L_12dc8892;
  /* 12dc8878 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc887b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12dc887e push ecx */
  push32((uint32_t)(ECX));
  /* 12dc887f push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc8881 mov edx, dword ptr [0x12de0ecc] */
  EDX = (r32((uint32_t)(0x12de0ecc)));
  /* 12dc8887 push edx */
  push32((uint32_t)(EDX));
  /* 12dc8888 call dword ptr [0x12de239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de239c))), 0x12dc888eu);
  /* 12dc888e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc8890 jmp 0x12dc88cb */
  goto L_12dc88cb;
L_12dc8892:;
  /* 12dc8892 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc8895 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12dc889b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc889e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12dc88a5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc88a8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 12dc88af mov eax, dword ptr [0x12de0ec4] */
  EAX = (r32((uint32_t)(0x12de0ec4)));
  /* 12dc88b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc88b7 mov dword ptr [0x12de0ec4], eax */
  w32((uint32_t)(0x12de0ec4), (EAX));
  /* 12dc88bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc88bf mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12dc88c2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 12dc88c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12dc88cb:;
  /* 12dc88cb mov esp, ebp */
  ESP = (EBP);
  /* 12dc88cd pop ebp */
  EBP = (pop32());
  /* 12dc88ce ret  */
  ESPCHK(0x12dc87c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100088d0 @ 0x12dc88d0 (494 bytes, 149 insns) */
void f_12dc88d0(void) {
  FTRACE(0x12dc88d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc88d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc88d1 mov ebp, esp */
  EBP = (ESP);
  /* 12dc88d3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc88d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc88d9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12dc88dc mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12dc88df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc88e2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12dc88e5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dc88e8 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_12dc88ef:;
  /* 12dc88ef cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc88f3 jl 0x12dc8908 */
  if ((C.sf!=C.of)) goto L_12dc8908;
  /* 12dc88f5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc88f8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12dc88fa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dc88fd mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dc8900 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8903 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12dc8906 jmp 0x12dc88ef */
  goto L_12dc88ef;
L_12dc8908:;
  /* 12dc8908 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dc890b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dc8911 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dc8914 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12dc891b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12dc891e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12dc8925 jmp 0x12dc8930 */
  goto L_12dc8930;
L_12dc8927:;
  /* 12dc8927 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dc892a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc892d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_12dc8930:;
  /* 12dc8930 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc8934 jge 0x12dc8956 */
  if ((C.sf==C.of)) goto L_12dc8956;
  /* 12dc8936 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dc8939 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc893c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 12dc893f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12dc8942 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc8945 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc8948 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12dc894b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc894e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc8951 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12dc8954 jmp 0x12dc8927 */
  goto L_12dc8927;
L_12dc8956:;
  /* 12dc8956 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dc8959 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12dc895c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc895f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12dc8962 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8964 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12dc8967 push 4 */
  push32((uint32_t)(0x4u));
  /* 12dc8969 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12dc896e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12dc8973 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc8976 push edx */
  push32((uint32_t)(EDX));
  /* 12dc8977 call dword ptr [0x12de2304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2304))), 0x12dc897du);
  /* 12dc897d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc897f jne 0x12dc8989 */
  if (!C.zf) goto L_12dc8989;
  /* 12dc8981 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dc8984 jmp 0x12dc8aba */
  goto L_12dc8aba;
L_12dc8989:;
  /* 12dc8989 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc898c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8991 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12dc8994 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc8997 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12dc899a jmp 0x12dc89a8 */
  goto L_12dc89a8;
L_12dc899c:;
  /* 12dc899c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc899f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc89a5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12dc89a8:;
  /* 12dc89a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc89ab cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc89ae ja 0x12dc8a0d */
  if ((!C.cf&&!C.zf)) goto L_12dc8a0d;
  /* 12dc89b0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc89b3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 12dc89ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc89bd mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 12dc89c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc89ca add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc89cd mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12dc89d0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc89d3 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 12dc89d9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc89dc add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc89e2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc89e5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12dc89e8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc89eb sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc89f1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc89f4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12dc89f7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc89fa add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc89ff mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12dc8a02 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc8a05 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 12dc8a0b jmp 0x12dc899c */
  goto L_12dc899c;
L_12dc8a0d:;
  /* 12dc8a0d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc8a10 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8a16 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12dc8a19 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc8a1c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8a1f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dc8a22 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12dc8a25 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dc8a28 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12dc8a2b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12dc8a2e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc8a31 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dc8a34 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12dc8a37 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dc8a3a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8a3d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dc8a40 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12dc8a43 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dc8a46 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12dc8a49 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12dc8a4c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc8a4f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dc8a52 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12dc8a55 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dc8a58 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dc8a5b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 12dc8a63 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dc8a66 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dc8a69 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 12dc8a74 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dc8a77 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 12dc8a7b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dc8a7e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 12dc8a81 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12dc8a84 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dc8a87 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 12dc8a8a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dc8a8c jne 0x12dc8a9d */
  if (!C.zf) goto L_12dc8a9d;
  /* 12dc8a8e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc8a91 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12dc8a94 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12dc8a97 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc8a9a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12dc8a9d:;
  /* 12dc8a9d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12dc8aa2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dc8aa5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12dc8aa7 not edx */
  EDX = (~(EDX));
  /* 12dc8aa9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc8aac mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12dc8aaf and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12dc8ab1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc8ab4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12dc8ab7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_12dc8aba:;
  /* 12dc8aba mov esp, ebp */
  ESP = (EBP);
  /* 12dc8abc pop ebp */
  EBP = (pop32());
  /* 12dc8abd ret  */
  ESPCHK(0x12dc88d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ac0 @ 0x12dc8ac0 (1515 bytes, 489 insns) */
void f_12dc8ac0(void) {
  FTRACE(0x12dc8ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc8ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc8ac1 mov ebp, esp */
  EBP = (ESP);
  /* 12dc8ac3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc8ac6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dc8ac9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8acc and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 12dc8ace mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12dc8ad1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc8ad4 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12dc8ad7 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12dc8ada mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc8add mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc8ae0 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc8ae3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dc8ae6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc8ae9 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12dc8aec mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12dc8aef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc8af2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dc8af8 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc8afb lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12dc8b02 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12dc8b05 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc8b08 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc8b0b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12dc8b0e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dc8b11 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dc8b13 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc8b16 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12dc8b19 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dc8b1c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8b1f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12dc8b22 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dc8b25 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dc8b27 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12dc8b2a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dc8b2d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc8b30 jle 0x12dc8de6 */
  if ((C.zf||C.sf!=C.of)) goto L_12dc8de6;
  /* 12dc8b36 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc8b39 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12dc8b3c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dc8b3e jne 0x12dc8b4b */
  if (!C.zf) goto L_12dc8b4b;
  /* 12dc8b40 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dc8b43 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8b46 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc8b49 jle 0x12dc8b52 */
  if ((C.zf||C.sf!=C.of)) goto L_12dc8b52;
L_12dc8b4b:;
  /* 12dc8b4b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc8b4d jmp 0x12dc90a7 */
  goto L_12dc90a7;
L_12dc8b52:;
  /* 12dc8b52 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc8b55 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12dc8b58 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc8b5b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12dc8b5e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc8b62 jbe 0x12dc8b6b */
  if ((C.cf||C.zf)) goto L_12dc8b6b;
  /* 12dc8b64 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12dc8b6b:;
  /* 12dc8b6b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dc8b6e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dc8b71 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12dc8b74 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc8b77 jne 0x12dc8c4d */
  if (!C.zf) goto L_12dc8c4d;
  /* 12dc8b7d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc8b81 jae 0x12dc8be2 */
  if (!C.cf) goto L_12dc8be2;
  /* 12dc8b83 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12dc8b88 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dc8b8b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12dc8b8d not edx */
  EDX = (~(EDX));
  /* 12dc8b8f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc8b92 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc8b95 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12dc8b99 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc8b9b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc8b9e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc8ba1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12dc8ba5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc8ba8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8bab mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12dc8bae sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12dc8bb1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc8bb4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8bb7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12dc8bba mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc8bbd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8bc0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12dc8bc4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dc8bc6 jne 0x12dc8be0 */
  if (!C.zf) goto L_12dc8be0;
  /* 12dc8bc8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12dc8bcd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dc8bd0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12dc8bd2 not edx */
  EDX = (~(EDX));
  /* 12dc8bd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc8bd7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dc8bd9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12dc8bdb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc8bde mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12dc8be0:;
  /* 12dc8be0 jmp 0x12dc8c4d */
  goto L_12dc8c4d;
L_12dc8be2:;
  /* 12dc8be2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dc8be5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc8be8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12dc8bed shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12dc8bef not eax */
  EAX = (~(EAX));
  /* 12dc8bf1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc8bf4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc8bf7 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12dc8bfe and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dc8c00 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc8c03 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc8c06 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12dc8c0d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc8c10 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8c13 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12dc8c16 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12dc8c19 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc8c1c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8c1f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12dc8c22 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc8c25 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8c28 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12dc8c2c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dc8c2e jne 0x12dc8c4d */
  if (!C.zf) goto L_12dc8c4d;
  /* 12dc8c30 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dc8c33 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc8c36 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12dc8c3b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12dc8c3d not eax */
  EAX = (~(EAX));
  /* 12dc8c3f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc8c42 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12dc8c45 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12dc8c47 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc8c4a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12dc8c4d:;
  /* 12dc8c4d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dc8c50 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12dc8c53 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dc8c56 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12dc8c59 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12dc8c5c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dc8c5f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12dc8c62 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dc8c65 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12dc8c68 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12dc8c6b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dc8c6e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8c71 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc8c74 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12dc8c77 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc8c7b jle 0x12dc8dc7 */
  if ((C.zf||C.sf!=C.of)) goto L_12dc8dc7;
  /* 12dc8c81 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dc8c84 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8c87 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12dc8c8a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc8c8d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12dc8c90 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc8c93 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12dc8c96 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc8c9a jbe 0x12dc8ca3 */
  if ((C.cf||C.zf)) goto L_12dc8ca3;
  /* 12dc8c9c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12dc8ca3:;
  /* 12dc8ca3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dc8ca6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc8ca9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 12dc8cac mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12dc8caf mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dc8cb2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc8cb5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12dc8cb8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12dc8cbb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dc8cbe mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc8cc1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12dc8cc4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc8cc7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dc8cca mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12dc8ccd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dc8cd0 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12dc8cd3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dc8cd6 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12dc8cd9 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dc8cdc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dc8cdf mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12dc8ce2 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc8ce5 jne 0x12dc8db3 */
  if (!C.zf) goto L_12dc8db3;
  /* 12dc8ceb cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc8cef jae 0x12dc8d4c */
  if (!C.cf) goto L_12dc8d4c;
  /* 12dc8cf1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc8cf4 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8cf7 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12dc8cfb mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc8cfe add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8d01 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12dc8d04 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12dc8d07 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc8d0a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8d0d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12dc8d10 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dc8d12 jne 0x12dc8d2a */
  if (!C.zf) goto L_12dc8d2a;
  /* 12dc8d14 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12dc8d19 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dc8d1c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12dc8d1e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc8d21 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dc8d23 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12dc8d25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc8d28 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12dc8d2a:;
  /* 12dc8d2a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12dc8d2f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dc8d32 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12dc8d34 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc8d37 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc8d3a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12dc8d3e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dc8d40 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc8d43 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc8d46 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12dc8d4a jmp 0x12dc8db3 */
  goto L_12dc8db3;
L_12dc8d4c:;
  /* 12dc8d4c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc8d4f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8d52 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12dc8d56 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc8d59 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8d5c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12dc8d5f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12dc8d62 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc8d65 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8d68 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12dc8d6b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dc8d6d jne 0x12dc8d8a */
  if (!C.zf) goto L_12dc8d8a;
  /* 12dc8d6f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dc8d72 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc8d75 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12dc8d7a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12dc8d7c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc8d7f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12dc8d82 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12dc8d84 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc8d87 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12dc8d8a:;
  /* 12dc8d8a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dc8d8d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc8d90 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12dc8d95 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12dc8d97 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc8d9a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc8d9d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12dc8da4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dc8da6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc8da9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc8dac mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_12dc8db3:;
  /* 12dc8db3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dc8db6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc8db9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12dc8dbb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dc8dbe add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8dc1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc8dc4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_12dc8dc7:;
  /* 12dc8dc7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dc8dca add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8dcd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dc8dd0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12dc8dd2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dc8dd5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8dd8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dc8ddb add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8dde mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 12dc8de1 jmp 0x12dc90a2 */
  goto L_12dc90a2;
L_12dc8de6:;
  /* 12dc8de6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dc8de9 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc8dec jge 0x12dc90a2 */
  if ((C.sf==C.of)) goto L_12dc90a2;
  /* 12dc8df2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dc8df5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8df8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dc8dfb mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12dc8dfd mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dc8e00 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8e03 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dc8e06 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8e09 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 12dc8e0c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dc8e0f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8e12 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12dc8e15 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dc8e18 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc8e1b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12dc8e1e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dc8e21 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12dc8e24 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc8e27 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12dc8e2a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc8e2e jbe 0x12dc8e37 */
  if ((C.cf||C.zf)) goto L_12dc8e37;
  /* 12dc8e30 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12dc8e37:;
  /* 12dc8e37 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc8e3a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12dc8e3d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dc8e3f jne 0x12dc8f80 */
  if (!C.zf) goto L_12dc8f80;
  /* 12dc8e45 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc8e48 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12dc8e4b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc8e4e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12dc8e51 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc8e55 jbe 0x12dc8e5e */
  if ((C.cf||C.zf)) goto L_12dc8e5e;
  /* 12dc8e57 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12dc8e5e:;
  /* 12dc8e5e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dc8e61 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dc8e64 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12dc8e67 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc8e6a jne 0x12dc8f40 */
  if (!C.zf) goto L_12dc8f40;
  /* 12dc8e70 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc8e74 jae 0x12dc8ed5 */
  if (!C.cf) goto L_12dc8ed5;
  /* 12dc8e76 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12dc8e7b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dc8e7e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12dc8e80 not edx */
  EDX = (~(EDX));
  /* 12dc8e82 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc8e85 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc8e88 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12dc8e8c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc8e8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc8e91 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc8e94 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12dc8e98 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc8e9b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8e9e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12dc8ea1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12dc8ea4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc8ea7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8eaa mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12dc8ead mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc8eb0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8eb3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12dc8eb7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dc8eb9 jne 0x12dc8ed3 */
  if (!C.zf) goto L_12dc8ed3;
  /* 12dc8ebb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12dc8ec0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dc8ec3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12dc8ec5 not edx */
  EDX = (~(EDX));
  /* 12dc8ec7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc8eca mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dc8ecc and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12dc8ece mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc8ed1 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12dc8ed3:;
  /* 12dc8ed3 jmp 0x12dc8f40 */
  goto L_12dc8f40;
L_12dc8ed5:;
  /* 12dc8ed5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dc8ed8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc8edb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12dc8ee0 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12dc8ee2 not eax */
  EAX = (~(EAX));
  /* 12dc8ee4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc8ee7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc8eea mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12dc8ef1 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dc8ef3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc8ef6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc8ef9 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12dc8f00 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc8f03 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8f06 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12dc8f09 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12dc8f0c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc8f0f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8f12 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12dc8f15 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc8f18 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8f1b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12dc8f1f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dc8f21 jne 0x12dc8f40 */
  if (!C.zf) goto L_12dc8f40;
  /* 12dc8f23 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dc8f26 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc8f29 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12dc8f2e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12dc8f30 not eax */
  EAX = (~(EAX));
  /* 12dc8f32 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc8f35 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12dc8f38 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12dc8f3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc8f3d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12dc8f40:;
  /* 12dc8f40 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dc8f43 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12dc8f46 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dc8f49 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12dc8f4c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12dc8f4f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dc8f52 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12dc8f55 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dc8f58 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12dc8f5b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12dc8f5e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dc8f61 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8f64 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12dc8f67 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dc8f6a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12dc8f6d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc8f70 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12dc8f73 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc8f77 jbe 0x12dc8f80 */
  if ((C.cf||C.zf)) goto L_12dc8f80;
  /* 12dc8f79 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12dc8f80:;
  /* 12dc8f80 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc8f83 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc8f86 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 12dc8f89 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12dc8f8c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dc8f8f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc8f92 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12dc8f95 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12dc8f98 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dc8f9b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc8f9e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12dc8fa1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc8fa4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dc8fa7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12dc8faa mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dc8fad mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12dc8fb0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dc8fb3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12dc8fb6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dc8fb9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dc8fbc mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12dc8fbf cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc8fc2 jne 0x12dc908e */
  if (!C.zf) goto L_12dc908e;
  /* 12dc8fc8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc8fcc jae 0x12dc9028 */
  if (!C.cf) goto L_12dc9028;
  /* 12dc8fce mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc8fd1 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8fd4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12dc8fd8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc8fdb add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8fde mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12dc8fe1 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12dc8fe3 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc8fe6 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc8fe9 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12dc8fec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dc8fee jne 0x12dc9006 */
  if (!C.zf) goto L_12dc9006;
  /* 12dc8ff0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12dc8ff5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc8ff8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12dc8ffa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc8ffd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dc8fff or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12dc9001 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc9004 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12dc9006:;
  /* 12dc9006 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12dc900b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc900e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12dc9010 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc9013 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc9016 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12dc901a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc901c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc901f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc9022 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12dc9026 jmp 0x12dc908e */
  goto L_12dc908e;
L_12dc9028:;
  /* 12dc9028 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc902b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc902e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12dc9032 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc9035 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc9038 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12dc903b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12dc903d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc9040 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc9043 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12dc9046 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dc9048 jne 0x12dc9065 */
  if (!C.zf) goto L_12dc9065;
  /* 12dc904a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc904d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc9050 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12dc9055 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12dc9057 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc905a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12dc905d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12dc905f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc9062 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12dc9065:;
  /* 12dc9065 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc9068 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc906b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12dc9070 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12dc9072 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc9075 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc9078 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12dc907f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc9081 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc9084 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dc9087 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_12dc908e:;
  /* 12dc908e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dc9091 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dc9094 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12dc9096 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dc9099 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc909c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dc909f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_12dc90a2:;
  /* 12dc90a2 mov eax, 1 */
  EAX = (0x1u);
L_12dc90a7:;
  /* 12dc90a7 mov esp, ebp */
  ESP = (EBP);
  /* 12dc90a9 pop ebp */
  EBP = (pop32());
  /* 12dc90aa ret  */
  ESPCHK(0x12dc8ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_100090b0 @ 0x12dc90b0 (304 bytes, 79 insns) */
void f_12dc90b0(void) {
  FTRACE(0x12dc90b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc90b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc90b1 mov ebp, esp */
  EBP = (ESP);
  /* 12dc90b3 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc90b4 cmp dword ptr [0x12de0ec0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12de0ec0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc90bb je 0x12dc91dc */
  if (C.zf) goto L_12dc91dc;
  /* 12dc90c1 mov eax, dword ptr [0x12de0eb8] */
  EAX = (r32((uint32_t)(0x12de0eb8)));
  /* 12dc90c6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 12dc90c9 mov ecx, dword ptr [0x12de0ec0] */
  ECX = (r32((uint32_t)(0x12de0ec0)));
  /* 12dc90cf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12dc90d2 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc90d4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12dc90d7 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12dc90dc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12dc90e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc90e4 push eax */
  push32((uint32_t)(EAX));
  /* 12dc90e5 call dword ptr [0x12de2328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2328))), 0x12dc90ebu);
  /* 12dc90eb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12dc90f0 mov ecx, dword ptr [0x12de0eb8] */
  ECX = (r32((uint32_t)(0x12de0eb8)));
  /* 12dc90f6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12dc90f8 mov eax, dword ptr [0x12de0ec0] */
  EAX = (r32((uint32_t)(0x12de0ec0)));
  /* 12dc90fd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12dc9100 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12dc9102 mov edx, dword ptr [0x12de0ec0] */
  EDX = (r32((uint32_t)(0x12de0ec0)));
  /* 12dc9108 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12dc910b mov eax, dword ptr [0x12de0ec0] */
  EAX = (r32((uint32_t)(0x12de0ec0)));
  /* 12dc9110 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12dc9113 mov edx, dword ptr [0x12de0eb8] */
  EDX = (r32((uint32_t)(0x12de0eb8)));
  /* 12dc9119 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 12dc9124 mov eax, dword ptr [0x12de0ec0] */
  EAX = (r32((uint32_t)(0x12de0ec0)));
  /* 12dc9129 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12dc912c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 12dc912f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12dc9132 mov eax, dword ptr [0x12de0ec0] */
  EAX = (r32((uint32_t)(0x12de0ec0)));
  /* 12dc9137 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12dc913a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 12dc913d mov edx, dword ptr [0x12de0ec0] */
  EDX = (r32((uint32_t)(0x12de0ec0)));
  /* 12dc9143 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12dc9146 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 12dc914a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dc914c jne 0x12dc9162 */
  if (!C.zf) goto L_12dc9162;
  /* 12dc914e mov edx, dword ptr [0x12de0ec0] */
  EDX = (r32((uint32_t)(0x12de0ec0)));
  /* 12dc9154 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12dc9157 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 12dc9159 mov ecx, dword ptr [0x12de0ec0] */
  ECX = (r32((uint32_t)(0x12de0ec0)));
  /* 12dc915f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_12dc9162:;
  /* 12dc9162 mov edx, dword ptr [0x12de0ec0] */
  EDX = (r32((uint32_t)(0x12de0ec0)));
  /* 12dc9168 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc916c jne 0x12dc91d2 */
  if (!C.zf) goto L_12dc91d2;
  /* 12dc916e cmp dword ptr [0x12de0ec4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12de0ec4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc9175 jle 0x12dc91d2 */
  if ((C.zf||C.sf!=C.of)) goto L_12dc91d2;
  /* 12dc9177 mov eax, dword ptr [0x12de0ec0] */
  EAX = (r32((uint32_t)(0x12de0ec0)));
  /* 12dc917c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12dc917f push ecx */
  push32((uint32_t)(ECX));
  /* 12dc9180 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc9182 mov edx, dword ptr [0x12de0ecc] */
  EDX = (r32((uint32_t)(0x12de0ecc)));
  /* 12dc9188 push edx */
  push32((uint32_t)(EDX));
  /* 12dc9189 call dword ptr [0x12de239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de239c))), 0x12dc918fu);
  /* 12dc918f mov eax, dword ptr [0x12de0ec4] */
  EAX = (r32((uint32_t)(0x12de0ec4)));
  /* 12dc9194 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dc9197 mov ecx, dword ptr [0x12de0ec8] */
  ECX = (r32((uint32_t)(0x12de0ec8)));
  /* 12dc919d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc919f mov edx, dword ptr [0x12de0ec0] */
  EDX = (r32((uint32_t)(0x12de0ec0)));
  /* 12dc91a5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc91a8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc91aa push ecx */
  push32((uint32_t)(ECX));
  /* 12dc91ab mov eax, dword ptr [0x12de0ec0] */
  EAX = (r32((uint32_t)(0x12de0ec0)));
  /* 12dc91b0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc91b3 push eax */
  push32((uint32_t)(EAX));
  /* 12dc91b4 mov ecx, dword ptr [0x12de0ec0] */
  ECX = (r32((uint32_t)(0x12de0ec0)));
  /* 12dc91ba push ecx */
  push32((uint32_t)(ECX));
  /* 12dc91bb call 0x12dcb7e0 */
  push32(0x12dc91c0u); f_12dcb7e0();
  /* 12dc91c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc91c3 mov edx, dword ptr [0x12de0ec4] */
  EDX = (r32((uint32_t)(0x12de0ec4)));
  /* 12dc91c9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc91cc mov dword ptr [0x12de0ec4], edx */
  w32((uint32_t)(0x12de0ec4), (EDX));
L_12dc91d2:;
  /* 12dc91d2 mov dword ptr [0x12de0ec0], 0 */
  w32((uint32_t)(0x12de0ec0), (0x0u));
L_12dc91dc:;
  /* 12dc91dc mov esp, ebp */
  ESP = (EBP);
  /* 12dc91de pop ebp */
  EBP = (pop32());
  /* 12dc91df ret  */
  ESPCHK(0x12dc90b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100091e0 @ 0x12dc91e0 (1565 bytes, 343 insns) */
void f_12dc91e0(void) {
  FTRACE(0x12dc91e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc91e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc91e1 mov ebp, esp */
  EBP = (ESP);
  /* 12dc91e3 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc91e9 mov eax, dword ptr [0x12de0ec4] */
  EAX = (r32((uint32_t)(0x12de0ec4)));
  /* 12dc91ee imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dc91f1 push eax */
  push32((uint32_t)(EAX));
  /* 12dc91f2 mov ecx, dword ptr [0x12de0ec8] */
  ECX = (r32((uint32_t)(0x12de0ec8)));
  /* 12dc91f8 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc91f9 call dword ptr [0x12de2378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2378))), 0x12dc91ffu);
  /* 12dc91ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc9201 je 0x12dc920b */
  if (C.zf) goto L_12dc920b;
  /* 12dc9203 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dc9206 jmp 0x12dc97f9 */
  goto L_12dc97f9;
L_12dc920b:;
  /* 12dc920b mov edx, dword ptr [0x12de0ec8] */
  EDX = (r32((uint32_t)(0x12de0ec8)));
  /* 12dc9211 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 12dc9217 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 12dc9221 jmp 0x12dc9232 */
  goto L_12dc9232;
L_12dc9223:;
  /* 12dc9223 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 12dc9229 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc922c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_12dc9232:;
  /* 12dc9232 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 12dc9238 cmp ecx, dword ptr [0x12de0ec4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12de0ec4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc923e jge 0x12dc97f7 */
  if ((C.sf==C.of)) goto L_12dc97f7;
  /* 12dc9244 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12dc924a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12dc924d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 12dc9253 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 12dc9258 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 12dc925e push ecx */
  push32((uint32_t)(ECX));
  /* 12dc925f call dword ptr [0x12de2378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2378))), 0x12dc9265u);
  /* 12dc9265 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc9267 je 0x12dc9273 */
  if (C.zf) goto L_12dc9273;
  /* 12dc9269 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 12dc926e jmp 0x12dc97f9 */
  goto L_12dc97f9;
L_12dc9273:;
  /* 12dc9273 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12dc9279 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12dc927c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 12dc9282 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 12dc9288 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc928e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12dc9291 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12dc9297 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12dc929a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dc929d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 12dc92a7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 12dc92b1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12dc92b8 jmp 0x12dc92c3 */
  goto L_12dc92c3;
L_12dc92ba:;
  /* 12dc92ba mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc92bd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc92c0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12dc92c3:;
  /* 12dc92c3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc92c7 jge 0x12dc97bb */
  if ((C.sf==C.of)) goto L_12dc97bb;
  /* 12dc92cd mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 12dc92d7 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 12dc92e1 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 12dc92eb mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 12dc92f5 jmp 0x12dc9306 */
  goto L_12dc9306;
L_12dc92f7:;
  /* 12dc92f7 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12dc92fd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc9300 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_12dc9306:;
  /* 12dc9306 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc930d jge 0x12dc9322 */
  if ((C.sf==C.of)) goto L_12dc9322;
  /* 12dc930f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12dc9315 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 12dc9320 jmp 0x12dc92f7 */
  goto L_12dc92f7;
L_12dc9322:;
  /* 12dc9322 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc9326 jl 0x12dc975d */
  if ((C.sf!=C.of)) goto L_12dc975d;
  /* 12dc932c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12dc9331 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 12dc9337 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc9338 call dword ptr [0x12de2378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2378))), 0x12dc933eu);
  /* 12dc933e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc9340 je 0x12dc934c */
  if (C.zf) goto L_12dc934c;
  /* 12dc9342 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 12dc9347 jmp 0x12dc97f9 */
  goto L_12dc97f9;
L_12dc934c:;
  /* 12dc934c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 12dc9352 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12dc9355 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 12dc935f jmp 0x12dc9370 */
  goto L_12dc9370;
L_12dc9361:;
  /* 12dc9361 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 12dc9367 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc936a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_12dc9370:;
  /* 12dc9370 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc9377 jge 0x12dc94f4 */
  if ((C.sf==C.of)) goto L_12dc94f4;
  /* 12dc937d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc9380 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc9383 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 12dc9389 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12dc938f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc9395 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 12dc939b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 12dc93a1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc93a5 jne 0x12dc93b2 */
  if (!C.zf) goto L_12dc93b2;
  /* 12dc93a7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 12dc93ad cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc93b0 je 0x12dc93bc */
  if (C.zf) goto L_12dc93bc;
L_12dc93b2:;
  /* 12dc93b2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 12dc93b7 jmp 0x12dc97f9 */
  goto L_12dc97f9;
L_12dc93bc:;
  /* 12dc93bc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12dc93c2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12dc93c4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 12dc93ca mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 12dc93d0 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 12dc93d6 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 12dc93dc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12dc93df test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dc93e1 je 0x12dc9419 */
  if (C.zf) goto L_12dc9419;
  /* 12dc93e3 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 12dc93e9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc93ec mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 12dc93f2 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc93fc jle 0x12dc9408 */
  if ((C.zf||C.sf!=C.of)) goto L_12dc9408;
  /* 12dc93fe mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 12dc9403 jmp 0x12dc97f9 */
  goto L_12dc97f9;
L_12dc9408:;
  /* 12dc9408 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 12dc940e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc9411 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 12dc9417 jmp 0x12dc945b */
  goto L_12dc945b;
L_12dc9419:;
  /* 12dc9419 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 12dc941f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12dc9422 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc9425 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 12dc942b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc9432 jle 0x12dc943e */
  if ((C.zf||C.sf!=C.of)) goto L_12dc943e;
  /* 12dc9434 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_12dc943e:;
  /* 12dc943e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12dc9444 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 12dc944b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc944e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12dc9454 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_12dc945b:;
  /* 12dc945b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc9462 jl 0x12dc947d */
  if ((C.sf!=C.of)) goto L_12dc947d;
  /* 12dc9464 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 12dc946a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 12dc946d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc946f jne 0x12dc947d */
  if (!C.zf) goto L_12dc947d;
  /* 12dc9471 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc947b jle 0x12dc9487 */
  if ((C.zf||C.sf!=C.of)) goto L_12dc9487;
L_12dc947d:;
  /* 12dc947d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 12dc9482 jmp 0x12dc97f9 */
  goto L_12dc97f9;
L_12dc9487:;
  /* 12dc9487 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12dc948d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc9493 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12dc9496 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc949c je 0x12dc94a8 */
  if (C.zf) goto L_12dc94a8;
  /* 12dc949e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 12dc94a3 jmp 0x12dc97f9 */
  goto L_12dc97f9;
L_12dc94a8:;
  /* 12dc94a8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 12dc94ae add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc94b4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 12dc94ba mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12dc94c0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc94c6 jb 0x12dc93bc */
  if (C.cf) goto L_12dc93bc;
  /* 12dc94cc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12dc94d2 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc94d8 je 0x12dc94e4 */
  if (C.zf) goto L_12dc94e4;
  /* 12dc94da mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 12dc94df jmp 0x12dc97f9 */
  goto L_12dc97f9;
L_12dc94e4:;
  /* 12dc94e4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc94e7 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc94ec mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dc94ef jmp 0x12dc9361 */
  goto L_12dc9361;
L_12dc94f4:;
  /* 12dc94f4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc94f7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dc94f9 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc94ff je 0x12dc950b */
  if (C.zf) goto L_12dc950b;
  /* 12dc9501 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 12dc9506 jmp 0x12dc97f9 */
  goto L_12dc97f9;
L_12dc950b:;
  /* 12dc950b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc950e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 12dc9514 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12dc951b jmp 0x12dc9526 */
  goto L_12dc9526;
L_12dc951d:;
  /* 12dc951d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dc9520 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc9523 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12dc9526:;
  /* 12dc9526 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc952a jge 0x12dc975d */
  if ((C.sf==C.of)) goto L_12dc975d;
  /* 12dc9530 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 12dc953a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 12dc9540 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_12dc9546:;
  /* 12dc9546 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 12dc954c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12dc954f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 12dc9555 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12dc955b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc9561 je 0x12dc968a */
  if (C.zf) goto L_12dc968a;
  /* 12dc9567 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dc956a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 12dc9570 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc9577 je 0x12dc968a */
  if (C.zf) goto L_12dc968a;
  /* 12dc957d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12dc9583 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc9589 jb 0x12dc959e */
  if (C.cf) goto L_12dc959e;
  /* 12dc958b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 12dc9591 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc9596 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc959c jb 0x12dc95a8 */
  if (C.cf) goto L_12dc95a8;
L_12dc959e:;
  /* 12dc959e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 12dc95a3 jmp 0x12dc97f9 */
  goto L_12dc97f9;
L_12dc95a8:;
  /* 12dc95a8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12dc95ae and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 12dc95b4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 12dc95ba mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 12dc95c0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc95c3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12dc95c6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc95c9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc95ce mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_12dc95d4:;
  /* 12dc95d4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc95d7 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc95dd je 0x12dc95fe */
  if (C.zf) goto L_12dc95fe;
  /* 12dc95df mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc95e2 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc95e8 jne 0x12dc95ec */
  if (!C.zf) goto L_12dc95ec;
  /* 12dc95ea jmp 0x12dc95fe */
  goto L_12dc95fe;
L_12dc95ec:;
  /* 12dc95ec mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc95ef mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dc95f1 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 12dc95f4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc95f7 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc95f9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12dc95fc jmp 0x12dc95d4 */
  goto L_12dc95d4;
L_12dc95fe:;
  /* 12dc95fe mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dc9601 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc9607 jne 0x12dc9613 */
  if (!C.zf) goto L_12dc9613;
  /* 12dc9609 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 12dc960e jmp 0x12dc97f9 */
  goto L_12dc97f9;
L_12dc9613:;
  /* 12dc9613 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12dc9619 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dc961b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12dc961e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc9621 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 12dc9627 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc962e jle 0x12dc963a */
  if ((C.zf||C.sf!=C.of)) goto L_12dc963a;
  /* 12dc9630 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_12dc963a:;
  /* 12dc963a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12dc9640 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc9643 je 0x12dc964f */
  if (C.zf) goto L_12dc964f;
  /* 12dc9645 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 12dc964a jmp 0x12dc97f9 */
  goto L_12dc97f9;
L_12dc964f:;
  /* 12dc964f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12dc9655 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12dc9658 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc965e je 0x12dc966a */
  if (C.zf) goto L_12dc966a;
  /* 12dc9660 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 12dc9665 jmp 0x12dc97f9 */
  goto L_12dc97f9;
L_12dc966a:;
  /* 12dc966a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12dc9670 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 12dc9676 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 12dc967c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc967f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 12dc9685 jmp 0x12dc9546 */
  goto L_12dc9546;
L_12dc968a:;
  /* 12dc968a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc9691 je 0x12dc9701 */
  if (C.zf) goto L_12dc9701;
  /* 12dc9693 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc9697 jge 0x12dc96cb */
  if ((C.sf==C.of)) goto L_12dc96cb;
  /* 12dc9699 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12dc969e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dc96a1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12dc96a3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 12dc96a9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc96ab mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 12dc96b1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12dc96b6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dc96b9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12dc96bb mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 12dc96c1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc96c3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 12dc96c9 jmp 0x12dc9701 */
  goto L_12dc9701;
L_12dc96cb:;
  /* 12dc96cb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dc96ce sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc96d1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12dc96d6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12dc96d8 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 12dc96de or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc96e0 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 12dc96e6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dc96e9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc96ec mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12dc96f1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12dc96f3 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 12dc96f9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc96fb mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_12dc9701:;
  /* 12dc9701 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12dc9707 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12dc970a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc9710 jne 0x12dc9724 */
  if (!C.zf) goto L_12dc9724;
  /* 12dc9712 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dc9715 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 12dc971b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc9722 je 0x12dc972e */
  if (C.zf) goto L_12dc972e;
L_12dc9724:;
  /* 12dc9724 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 12dc9729 jmp 0x12dc97f9 */
  goto L_12dc97f9;
L_12dc972e:;
  /* 12dc972e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 12dc9734 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12dc9737 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc973d je 0x12dc9749 */
  if (C.zf) goto L_12dc9749;
  /* 12dc973f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 12dc9744 jmp 0x12dc97f9 */
  goto L_12dc97f9;
L_12dc9749:;
  /* 12dc9749 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 12dc974f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc9752 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 12dc9758 jmp 0x12dc951d */
  goto L_12dc951d;
L_12dc975d:;
  /* 12dc975d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc9760 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 12dc9766 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 12dc976c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc9770 jne 0x12dc978a */
  if (!C.zf) goto L_12dc978a;
  /* 12dc9772 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc9775 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 12dc977b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 12dc9781 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc9788 je 0x12dc9791 */
  if (C.zf) goto L_12dc9791;
L_12dc978a:;
  /* 12dc978a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 12dc978f jmp 0x12dc97f9 */
  goto L_12dc97f9;
L_12dc9791:;
  /* 12dc9791 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 12dc9797 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc979d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 12dc97a3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dc97a6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc97ab mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12dc97ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc97b1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12dc97b3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12dc97b6 jmp 0x12dc92ba */
  goto L_12dc92ba;
L_12dc97bb:;
  /* 12dc97bb mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12dc97c1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 12dc97c7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc97c9 jne 0x12dc97dc */
  if (!C.zf) goto L_12dc97dc;
  /* 12dc97cb mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12dc97d1 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 12dc97d7 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc97da je 0x12dc97e3 */
  if (C.zf) goto L_12dc97e3;
L_12dc97dc:;
  /* 12dc97dc mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 12dc97e1 jmp 0x12dc97f9 */
  goto L_12dc97f9;
L_12dc97e3:;
  /* 12dc97e3 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12dc97e9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc97ec mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 12dc97f2 jmp 0x12dc9223 */
  goto L_12dc9223;
L_12dc97f7:;
  /* 12dc97f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12dc97f9:;
  /* 12dc97f9 mov esp, ebp */
  ESP = (EBP);
  /* 12dc97fb pop ebp */
  EBP = (pop32());
  /* 12dc97fc ret  */
  ESPCHK(0x12dc91e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009800 @ 0x12dc9800 (250 bytes, 92 insns) */
void f_12dc9800(void) {
  FTRACE(0x12dc9800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc9800 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc9801 mov ebp, esp */
  EBP = (ESP);
  /* 12dc9803 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc9806 push ebx */
  push32((uint32_t)(EBX));
  /* 12dc9807 push esi */
  push32((uint32_t)(ESI));
  /* 12dc9808 push edi */
  push32((uint32_t)(EDI));
  /* 12dc9809 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12dc980c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12dc980f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12dc9812 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_12dc9815:;
  /* 12dc9815 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc9819 jne 0x12dc9839 */
  if (!C.zf) goto L_12dc9839;
  /* 12dc981b push 0x12ddaff4 */
  push32((uint32_t)(0x12ddaff4u));
  /* 12dc9820 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc9822 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 12dc9824 push 0x12ddafe8 */
  push32((uint32_t)(0x12ddafe8u));
  /* 12dc9829 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc982b call 0x12dc29b0 */
  push32(0x12dc9830u); f_12dc29b0();
  /* 12dc9830 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc9833 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc9836 jne 0x12dc9839 */
  if (!C.zf) goto L_12dc9839;
  /* 12dc9838 int3  */
  x86_unimpl("int3 @ 0x12dc9838");
L_12dc9839:;
  /* 12dc9839 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dc983b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dc983d jne 0x12dc9815 */
  if (!C.zf) goto L_12dc9815;
L_12dc983f:;
  /* 12dc983f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc9843 jne 0x12dc9863 */
  if (!C.zf) goto L_12dc9863;
  /* 12dc9845 push 0x12ddafd8 */
  push32((uint32_t)(0x12ddafd8u));
  /* 12dc984a push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc984c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12dc984e push 0x12ddafe8 */
  push32((uint32_t)(0x12ddafe8u));
  /* 12dc9853 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dc9855 call 0x12dc29b0 */
  push32(0x12dc985au); f_12dc29b0();
  /* 12dc985a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc985d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc9860 jne 0x12dc9863 */
  if (!C.zf) goto L_12dc9863;
  /* 12dc9862 int3  */
  x86_unimpl("int3 @ 0x12dc9862");
L_12dc9863:;
  /* 12dc9863 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc9865 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc9867 jne 0x12dc983f */
  if (!C.zf) goto L_12dc983f;
  /* 12dc9869 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc986c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 12dc9873 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc9876 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc9879 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12dc987c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc987f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc9882 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12dc9884 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc9887 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 12dc988e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dc9891 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc9892 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dc9895 push edx */
  push32((uint32_t)(EDX));
  /* 12dc9896 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc9899 push eax */
  push32((uint32_t)(EAX));
  /* 12dc989a call 0x12dca880 */
  push32(0x12dc989fu); f_12dca880();
  /* 12dc989f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc98a2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12dc98a5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc98a8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12dc98ab sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc98ae mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc98b1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12dc98b4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc98b7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc98bb jl 0x12dc98df */
  if ((C.sf!=C.of)) goto L_12dc98df;
  /* 12dc98bd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc98c0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12dc98c2 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12dc98c5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dc98c7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12dc98cd mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12dc98d0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc98d3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12dc98d5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc98d8 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc98db mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12dc98dd jmp 0x12dc98f0 */
  goto L_12dc98f0;
L_12dc98df:;
  /* 12dc98df mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc98e2 push edx */
  push32((uint32_t)(EDX));
  /* 12dc98e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc98e5 call 0x12dca600 */
  push32(0x12dc98eau); f_12dca600();
  /* 12dc98ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc98ed mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_12dc98f0:;
  /* 12dc98f0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dc98f3 pop edi */
  EDI = (pop32());
  /* 12dc98f4 pop esi */
  ESI = (pop32());
  /* 12dc98f5 pop ebx */
  EBX = (pop32());
  /* 12dc98f6 mov esp, ebp */
  ESP = (EBP);
  /* 12dc98f8 pop ebp */
  EBP = (pop32());
  /* 12dc98f9 ret  */
  ESPCHK(0x12dc9800u, _esp0);
  ESP += 4; return;
}

/* FUN_10009900 @ 0x12dc9900 (183 bytes, 58 insns) */
void f_12dc9900(void) {
  FTRACE(0x12dc9900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc9900 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc9901 mov ebp, esp */
  EBP = (ESP);
  /* 12dc9903 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc9906 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc9909 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc990c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc9911 ja 0x12dc992a */
  if ((!C.cf&&!C.zf)) goto L_12dc992a;
  /* 12dc9913 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc9916 mov edx, dword ptr [0x12dddc98] */
  EDX = (r32((uint32_t)(0x12dddc98)));
  /* 12dc991c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc991e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12dc9922 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 12dc9925 jmp 0x12dc99b3 */
  goto L_12dc99b3;
L_12dc992a:;
  /* 12dc992a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc992d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12dc9930 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12dc9936 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12dc993c mov edx, dword ptr [0x12dddc98] */
  EDX = (r32((uint32_t)(0x12dddc98)));
  /* 12dc9942 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc9944 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12dc9948 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12dc994d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc994f je 0x12dc9973 */
  if (C.zf) goto L_12dc9973;
  /* 12dc9951 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc9954 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12dc9957 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12dc995d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 12dc9960 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 12dc9963 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 12dc9966 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 12dc996a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 12dc9971 jmp 0x12dc9984 */
  goto L_12dc9984;
L_12dc9973:;
  /* 12dc9973 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12dc9976 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 12dc9979 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 12dc997d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_12dc9984:;
  /* 12dc9984 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc9986 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc9988 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc998a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 12dc998d push ecx */
  push32((uint32_t)(ECX));
  /* 12dc998e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc9991 push edx */
  push32((uint32_t)(EDX));
  /* 12dc9992 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12dc9995 push eax */
  push32((uint32_t)(EAX));
  /* 12dc9996 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc9998 call 0x12dcbb20 */
  push32(0x12dc999du); f_12dcbb20();
  /* 12dc999d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc99a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc99a2 jne 0x12dc99a8 */
  if (!C.zf) goto L_12dc99a8;
  /* 12dc99a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc99a6 jmp 0x12dc99b3 */
  goto L_12dc99b3;
L_12dc99a8:;
  /* 12dc99a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc99ab and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dc99b0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_12dc99b3:;
  /* 12dc99b3 mov esp, ebp */
  ESP = (EBP);
  /* 12dc99b5 pop ebp */
  EBP = (pop32());
  /* 12dc99b6 ret  */
  ESPCHK(0x12dc9900u, _esp0);
  ESP += 4; return;
}

/* FUN_100099c0 @ 0x12dc99c0 (836 bytes, 238 insns) */
void f_12dc99c0(void) {
  FTRACE(0x12dc99c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc99c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc99c1 mov ebp, esp */
  EBP = (ESP);
  /* 12dc99c3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc99c6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12dc99c8 call 0x12dc72f0 */
  push32(0x12dc99cdu); f_12dc72f0();
  /* 12dc99cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc99d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc99d3 push eax */
  push32((uint32_t)(EAX));
  /* 12dc99d4 call 0x12dc9d10 */
  push32(0x12dc99d9u); f_12dc9d10();
  /* 12dc99d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc99dc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12dc99df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc99e2 cmp ecx, dword ptr [0x12de0c04] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12de0c04))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc99e8 jne 0x12dc99fb */
  if (!C.zf) goto L_12dc99fb;
  /* 12dc99ea push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12dc99ec call 0x12dc7390 */
  push32(0x12dc99f1u); f_12dc7390();
  /* 12dc99f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc99f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc99f6 jmp 0x12dc9d00 */
  goto L_12dc9d00;
L_12dc99fb:;
  /* 12dc99fb cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc99ff jne 0x12dc9a1c */
  if (!C.zf) goto L_12dc9a1c;
  /* 12dc9a01 call 0x12dc9df0 */
  push32(0x12dc9a06u); f_12dc9df0();
  /* 12dc9a06 call 0x12dc9e70 */
  push32(0x12dc9a0bu); f_12dc9e70();
  /* 12dc9a0b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12dc9a0d call 0x12dc7390 */
  push32(0x12dc9a12u); f_12dc7390();
  /* 12dc9a12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc9a15 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc9a17 jmp 0x12dc9d00 */
  goto L_12dc9d00;
L_12dc9a1c:;
  /* 12dc9a1c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12dc9a23 jmp 0x12dc9a2e */
  goto L_12dc9a2e;
L_12dc9a25:;
  /* 12dc9a25 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc9a28 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc9a2b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12dc9a2e:;
  /* 12dc9a2e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc9a32 jae 0x12dc9b7f */
  if (!C.cf) goto L_12dc9b7f;
  /* 12dc9a38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc9a3b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dc9a3e mov ecx, dword ptr [eax + 0x12dddeb8] */
  ECX = (r32((uint32_t)(EAX + 0x12dddeb8)));
  /* 12dc9a44 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc9a47 jne 0x12dc9b7a */
  if (!C.zf) goto L_12dc9b7a;
  /* 12dc9a4d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12dc9a54 jmp 0x12dc9a5f */
  goto L_12dc9a5f;
L_12dc9a56:;
  /* 12dc9a56 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc9a59 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc9a5c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_12dc9a5f:;
  /* 12dc9a5f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc9a66 jae 0x12dc9a74 */
  if (!C.cf) goto L_12dc9a74;
  /* 12dc9a68 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc9a6b mov byte ptr [eax + 0x12de0da0], 0 */
  w8((uint32_t)(EAX + 0x12de0da0), (0x0u));
  /* 12dc9a72 jmp 0x12dc9a56 */
  goto L_12dc9a56;
L_12dc9a74:;
  /* 12dc9a74 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12dc9a7b jmp 0x12dc9a86 */
  goto L_12dc9a86;
L_12dc9a7d:;
  /* 12dc9a7d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc9a80 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc9a83 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12dc9a86:;
  /* 12dc9a86 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc9a8a jae 0x12dc9b07 */
  if (!C.cf) goto L_12dc9b07;
  /* 12dc9a8c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc9a8f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dc9a92 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc9a95 lea ecx, [edx + eax*8 + 0x12dddec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x12dddec8));
  /* 12dc9a9c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dc9a9f jmp 0x12dc9aaa */
  goto L_12dc9aaa;
L_12dc9aa1:;
  /* 12dc9aa1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc9aa4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc9aa7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12dc9aaa:;
  /* 12dc9aaa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc9aad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dc9aaf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12dc9ab1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dc9ab3 je 0x12dc9b02 */
  if (C.zf) goto L_12dc9b02;
  /* 12dc9ab5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc9ab8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc9aba mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12dc9abd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc9abf je 0x12dc9b02 */
  if (C.zf) goto L_12dc9b02;
  /* 12dc9ac1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc9ac4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dc9ac6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12dc9ac8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12dc9acb jmp 0x12dc9ad6 */
  goto L_12dc9ad6;
L_12dc9acd:;
  /* 12dc9acd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc9ad0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc9ad3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12dc9ad6:;
  /* 12dc9ad6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dc9ad9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dc9adb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12dc9ade cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc9ae1 ja 0x12dc9b00 */
  if ((!C.cf&&!C.zf)) goto L_12dc9b00;
  /* 12dc9ae3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc9ae6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc9ae9 mov dl, byte ptr [eax + 0x12de0da1] */
  DL = (r8((uint32_t)(EAX + 0x12de0da1)));
  /* 12dc9aef or dl, byte ptr [ecx + 0x12dddeb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x12dddeb0))); DL = (_r); fl_logic(_r,8); }
  /* 12dc9af5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc9af8 mov byte ptr [eax + 0x12de0da1], dl */
  w8((uint32_t)(EAX + 0x12de0da1), (DL));
  /* 12dc9afe jmp 0x12dc9acd */
  goto L_12dc9acd;
L_12dc9b00:;
  /* 12dc9b00 jmp 0x12dc9aa1 */
  goto L_12dc9aa1;
L_12dc9b02:;
  /* 12dc9b02 jmp 0x12dc9a7d */
  goto L_12dc9a7d;
L_12dc9b07:;
  /* 12dc9b07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc9b0a mov dword ptr [0x12de0c04], ecx */
  w32((uint32_t)(0x12de0c04), (ECX));
  /* 12dc9b10 mov dword ptr [0x12de0c8c], 1 */
  w32((uint32_t)(0x12de0c8c), (0x1u));
  /* 12dc9b1a mov edx, dword ptr [0x12de0c04] */
  EDX = (r32((uint32_t)(0x12de0c04)));
  /* 12dc9b20 push edx */
  push32((uint32_t)(EDX));
  /* 12dc9b21 call 0x12dc9d70 */
  push32(0x12dc9b26u); f_12dc9d70();
  /* 12dc9b26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc9b29 mov dword ptr [0x12de0ea4], eax */
  w32((uint32_t)(0x12de0ea4), (EAX));
  /* 12dc9b2e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12dc9b35 jmp 0x12dc9b40 */
  goto L_12dc9b40;
L_12dc9b37:;
  /* 12dc9b37 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc9b3a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc9b3d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12dc9b40:;
  /* 12dc9b40 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc9b44 jae 0x12dc9b64 */
  if (!C.cf) goto L_12dc9b64;
  /* 12dc9b46 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc9b49 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dc9b4c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc9b4f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc9b52 mov cx, word ptr [ecx + eax*2 + 0x12dddebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x12dddebc)));
  /* 12dc9b5a mov word ptr [edx*2 + 0x12de0c80], cx */
  w16((uint32_t)(EDX*2 + 0x12de0c80), (CX));
  /* 12dc9b62 jmp 0x12dc9b37 */
  goto L_12dc9b37;
L_12dc9b64:;
  /* 12dc9b64 call 0x12dc9e70 */
  push32(0x12dc9b69u); f_12dc9e70();
  /* 12dc9b69 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12dc9b6b call 0x12dc7390 */
  push32(0x12dc9b70u); f_12dc7390();
  /* 12dc9b70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc9b73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc9b75 jmp 0x12dc9d00 */
  goto L_12dc9d00;
L_12dc9b7a:;
  /* 12dc9b7a jmp 0x12dc9a25 */
  goto L_12dc9a25;
L_12dc9b7f:;
  /* 12dc9b7f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 12dc9b82 push edx */
  push32((uint32_t)(EDX));
  /* 12dc9b83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc9b86 push eax */
  push32((uint32_t)(EAX));
  /* 12dc9b87 call dword ptr [0x12de2300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2300))), 0x12dc9b8du);
  /* 12dc9b8d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc9b90 jne 0x12dc9cd2 */
  if (!C.zf) goto L_12dc9cd2;
  /* 12dc9b96 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12dc9b9d jmp 0x12dc9ba8 */
  goto L_12dc9ba8;
L_12dc9b9f:;
  /* 12dc9b9f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc9ba2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc9ba5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_12dc9ba8:;
  /* 12dc9ba8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc9baf jae 0x12dc9bbd */
  if (!C.cf) goto L_12dc9bbd;
  /* 12dc9bb1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc9bb4 mov byte ptr [edx + 0x12de0da0], 0 */
  w8((uint32_t)(EDX + 0x12de0da0), (0x0u));
  /* 12dc9bbb jmp 0x12dc9b9f */
  goto L_12dc9b9f;
L_12dc9bbd:;
  /* 12dc9bbd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc9bc0 mov dword ptr [0x12de0c04], eax */
  w32((uint32_t)(0x12de0c04), (EAX));
  /* 12dc9bc5 mov dword ptr [0x12de0ea4], 0 */
  w32((uint32_t)(0x12de0ea4), (0x0u));
  /* 12dc9bcf cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc9bd3 jbe 0x12dc9c8e */
  if ((C.cf||C.zf)) goto L_12dc9c8e;
  /* 12dc9bd9 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 12dc9bdc mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12dc9bdf jmp 0x12dc9bea */
  goto L_12dc9bea;
L_12dc9be1:;
  /* 12dc9be1 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dc9be4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc9be7 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_12dc9bea:;
  /* 12dc9bea mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dc9bed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dc9bef mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12dc9bf1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dc9bf3 je 0x12dc9c3c */
  if (C.zf) goto L_12dc9c3c;
  /* 12dc9bf5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dc9bf8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc9bfa mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12dc9bfd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dc9bff je 0x12dc9c3c */
  if (C.zf) goto L_12dc9c3c;
  /* 12dc9c01 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dc9c04 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dc9c06 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12dc9c08 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12dc9c0b jmp 0x12dc9c16 */
  goto L_12dc9c16;
L_12dc9c0d:;
  /* 12dc9c0d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc9c10 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc9c13 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12dc9c16:;
  /* 12dc9c16 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dc9c19 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dc9c1b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12dc9c1e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc9c21 ja 0x12dc9c3a */
  if ((!C.cf&&!C.zf)) goto L_12dc9c3a;
  /* 12dc9c23 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc9c26 mov cl, byte ptr [eax + 0x12de0da1] */
  CL = (r8((uint32_t)(EAX + 0x12de0da1)));
  /* 12dc9c2c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 12dc9c2f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc9c32 mov byte ptr [edx + 0x12de0da1], cl */
  w8((uint32_t)(EDX + 0x12de0da1), (CL));
  /* 12dc9c38 jmp 0x12dc9c0d */
  goto L_12dc9c0d;
L_12dc9c3a:;
  /* 12dc9c3a jmp 0x12dc9be1 */
  goto L_12dc9be1;
L_12dc9c3c:;
  /* 12dc9c3c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 12dc9c43 jmp 0x12dc9c4e */
  goto L_12dc9c4e;
L_12dc9c45:;
  /* 12dc9c45 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc9c48 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc9c4b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12dc9c4e:;
  /* 12dc9c4e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc9c55 jae 0x12dc9c6e */
  if (!C.cf) goto L_12dc9c6e;
  /* 12dc9c57 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc9c5a mov dl, byte ptr [ecx + 0x12de0da1] */
  DL = (r8((uint32_t)(ECX + 0x12de0da1)));
  /* 12dc9c60 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 12dc9c63 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dc9c66 mov byte ptr [eax + 0x12de0da1], dl */
  w8((uint32_t)(EAX + 0x12de0da1), (DL));
  /* 12dc9c6c jmp 0x12dc9c45 */
  goto L_12dc9c45;
L_12dc9c6e:;
  /* 12dc9c6e mov ecx, dword ptr [0x12de0c04] */
  ECX = (r32((uint32_t)(0x12de0c04)));
  /* 12dc9c74 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc9c75 call 0x12dc9d70 */
  push32(0x12dc9c7au); f_12dc9d70();
  /* 12dc9c7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc9c7d mov dword ptr [0x12de0ea4], eax */
  w32((uint32_t)(0x12de0ea4), (EAX));
  /* 12dc9c82 mov dword ptr [0x12de0c8c], 1 */
  w32((uint32_t)(0x12de0c8c), (0x1u));
  /* 12dc9c8c jmp 0x12dc9c98 */
  goto L_12dc9c98;
L_12dc9c8e:;
  /* 12dc9c8e mov dword ptr [0x12de0c8c], 0 */
  w32((uint32_t)(0x12de0c8c), (0x0u));
L_12dc9c98:;
  /* 12dc9c98 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12dc9c9f jmp 0x12dc9caa */
  goto L_12dc9caa;
L_12dc9ca1:;
  /* 12dc9ca1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc9ca4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc9ca7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12dc9caa:;
  /* 12dc9caa cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc9cae jae 0x12dc9cbf */
  if (!C.cf) goto L_12dc9cbf;
  /* 12dc9cb0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dc9cb3 mov word ptr [eax*2 + 0x12de0c80], 0 */
  w16((uint32_t)(EAX*2 + 0x12de0c80), (0x0u));
  /* 12dc9cbd jmp 0x12dc9ca1 */
  goto L_12dc9ca1;
L_12dc9cbf:;
  /* 12dc9cbf call 0x12dc9e70 */
  push32(0x12dc9cc4u); f_12dc9e70();
  /* 12dc9cc4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12dc9cc6 call 0x12dc7390 */
  push32(0x12dc9ccbu); f_12dc7390();
  /* 12dc9ccb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc9cce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc9cd0 jmp 0x12dc9d00 */
  goto L_12dc9d00;
L_12dc9cd2:;
  /* 12dc9cd2 cmp dword ptr [0x12ddf720], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf720))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc9cd9 je 0x12dc9cf3 */
  if (C.zf) goto L_12dc9cf3;
  /* 12dc9cdb call 0x12dc9df0 */
  push32(0x12dc9ce0u); f_12dc9df0();
  /* 12dc9ce0 call 0x12dc9e70 */
  push32(0x12dc9ce5u); f_12dc9e70();
  /* 12dc9ce5 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12dc9ce7 call 0x12dc7390 */
  push32(0x12dc9cecu); f_12dc7390();
  /* 12dc9cec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc9cef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dc9cf1 jmp 0x12dc9d00 */
  goto L_12dc9d00;
L_12dc9cf3:;
  /* 12dc9cf3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12dc9cf5 call 0x12dc7390 */
  push32(0x12dc9cfau); f_12dc7390();
  /* 12dc9cfa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc9cfd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12dc9d00:;
  /* 12dc9d00 mov esp, ebp */
  ESP = (EBP);
  /* 12dc9d02 pop ebp */
  EBP = (pop32());
  /* 12dc9d03 ret  */
  ESPCHK(0x12dc99c0u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x12dc9d10 (89 bytes, 21 insns) */
void f_12dc9d10(void) {
  FTRACE(0x12dc9d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc9d10 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc9d11 mov ebp, esp */
  EBP = (ESP);
  /* 12dc9d13 mov dword ptr [0x12ddf720], 0 */
  w32((uint32_t)(0x12ddf720), (0x0u));
  /* 12dc9d1d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc9d21 jne 0x12dc9d35 */
  if (!C.zf) goto L_12dc9d35;
  /* 12dc9d23 mov dword ptr [0x12ddf720], 1 */
  w32((uint32_t)(0x12ddf720), (0x1u));
  /* 12dc9d2d call dword ptr [0x12de22f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22f8))), 0x12dc9d33u);
  /* 12dc9d33 jmp 0x12dc9d67 */
  goto L_12dc9d67;
L_12dc9d35:;
  /* 12dc9d35 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc9d39 jne 0x12dc9d4d */
  if (!C.zf) goto L_12dc9d4d;
  /* 12dc9d3b mov dword ptr [0x12ddf720], 1 */
  w32((uint32_t)(0x12ddf720), (0x1u));
  /* 12dc9d45 call dword ptr [0x12de2308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2308))), 0x12dc9d4bu);
  /* 12dc9d4b jmp 0x12dc9d67 */
  goto L_12dc9d67;
L_12dc9d4d:;
  /* 12dc9d4d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc9d51 jne 0x12dc9d64 */
  if (!C.zf) goto L_12dc9d64;
  /* 12dc9d53 mov dword ptr [0x12ddf720], 1 */
  w32((uint32_t)(0x12ddf720), (0x1u));
  /* 12dc9d5d mov eax, dword ptr [0x12ddf740] */
  EAX = (r32((uint32_t)(0x12ddf740)));
  /* 12dc9d62 jmp 0x12dc9d67 */
  goto L_12dc9d67;
L_12dc9d64:;
  /* 12dc9d64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_12dc9d67:;
  /* 12dc9d67 pop ebp */
  EBP = (pop32());
  /* 12dc9d68 ret  */
  ESPCHK(0x12dc9d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d70 @ 0x12dc9d70 (80 bytes, 26 insns) [1 switch table(s)] */
void f_12dc9d70(void) {
  FTRACE(0x12dc9d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc9d70 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc9d71 mov ebp, esp */
  EBP = (ESP);
  /* 12dc9d73 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc9d74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dc9d77 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dc9d7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc9d7d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc9d83 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12dc9d86 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc9d8a ja 0x12dc9dba */
  if ((!C.cf&&!C.zf)) goto L_12dc9dba;
  /* 12dc9d8c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc9d8f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dc9d91 mov dl, byte ptr [eax + 0x12dc9dd4] */
  DL = (r8((uint32_t)(EAX + 0x12dc9dd4)));
  /* 12dc9d97 jmp dword ptr [edx*4 + 0x12dc9dc0] */
  switch (EDX) {
    case 0: goto L_12dc9d9e;
    case 1: goto L_12dc9da5;
    case 2: goto L_12dc9dac;
    case 3: goto L_12dc9db3;
    case 4: goto L_12dc9dba;
    default: x86_unimpl("switch@0x12dc9d97 out of table"); return;
  }
L_12dc9d9e:;
  /* 12dc9d9e mov eax, 0x411 */
  EAX = (0x411u);
  /* 12dc9da3 jmp 0x12dc9dbc */
  goto L_12dc9dbc;
L_12dc9da5:;
  /* 12dc9da5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 12dc9daa jmp 0x12dc9dbc */
  goto L_12dc9dbc;
L_12dc9dac:;
  /* 12dc9dac mov eax, 0x412 */
  EAX = (0x412u);
  /* 12dc9db1 jmp 0x12dc9dbc */
  goto L_12dc9dbc;
L_12dc9db3:;
  /* 12dc9db3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 12dc9db8 jmp 0x12dc9dbc */
  goto L_12dc9dbc;
L_12dc9dba:;
  /* 12dc9dba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12dc9dbc:;
  /* 12dc9dbc mov esp, ebp */
  ESP = (EBP);
  /* 12dc9dbe pop ebp */
  EBP = (pop32());
  /* 12dc9dbf ret  */
  ESPCHK(0x12dc9d70u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x12dc9df0 (116 bytes, 29 insns) */
void f_12dc9df0(void) {
  FTRACE(0x12dc9df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc9df0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc9df1 mov ebp, esp */
  EBP = (ESP);
  /* 12dc9df3 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc9df4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12dc9dfb jmp 0x12dc9e06 */
  goto L_12dc9e06;
L_12dc9dfd:;
  /* 12dc9dfd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc9e00 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc9e03 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12dc9e06:;
  /* 12dc9e06 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc9e0d jge 0x12dc9e1b */
  if ((C.sf==C.of)) goto L_12dc9e1b;
  /* 12dc9e0f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc9e12 mov byte ptr [ecx + 0x12de0da0], 0 */
  w8((uint32_t)(ECX + 0x12de0da0), (0x0u));
  /* 12dc9e19 jmp 0x12dc9dfd */
  goto L_12dc9dfd;
L_12dc9e1b:;
  /* 12dc9e1b mov dword ptr [0x12de0c04], 0 */
  w32((uint32_t)(0x12de0c04), (0x0u));
  /* 12dc9e25 mov dword ptr [0x12de0c8c], 0 */
  w32((uint32_t)(0x12de0c8c), (0x0u));
  /* 12dc9e2f mov dword ptr [0x12de0ea4], 0 */
  w32((uint32_t)(0x12de0ea4), (0x0u));
  /* 12dc9e39 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12dc9e40 jmp 0x12dc9e4b */
  goto L_12dc9e4b;
L_12dc9e42:;
  /* 12dc9e42 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc9e45 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc9e48 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12dc9e4b:;
  /* 12dc9e4b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc9e4f jge 0x12dc9e60 */
  if ((C.sf==C.of)) goto L_12dc9e60;
  /* 12dc9e51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc9e54 mov word ptr [eax*2 + 0x12de0c80], 0 */
  w16((uint32_t)(EAX*2 + 0x12de0c80), (0x0u));
  /* 12dc9e5e jmp 0x12dc9e42 */
  goto L_12dc9e42;
L_12dc9e60:;
  /* 12dc9e60 mov esp, ebp */
  ESP = (EBP);
  /* 12dc9e62 pop ebp */
  EBP = (pop32());
  /* 12dc9e63 ret  */
  ESPCHK(0x12dc9df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009e70 @ 0x12dc9e70 (770 bytes, 175 insns) */
void f_12dc9e70(void) {
  FTRACE(0x12dc9e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dc9e70 push ebp */
  push32((uint32_t)(EBP));
  /* 12dc9e71 mov ebp, esp */
  EBP = (ESP);
  /* 12dc9e73 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dc9e79 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 12dc9e7f push eax */
  push32((uint32_t)(EAX));
  /* 12dc9e80 mov ecx, dword ptr [0x12de0c04] */
  ECX = (r32((uint32_t)(0x12de0c04)));
  /* 12dc9e86 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc9e87 call dword ptr [0x12de2300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2300))), 0x12dc9e8du);
  /* 12dc9e8d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc9e90 jne 0x12dca0a9 */
  if (!C.zf) goto L_12dca0a9;
  /* 12dc9e96 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12dc9ea0 jmp 0x12dc9eb1 */
  goto L_12dc9eb1;
L_12dc9ea2:;
  /* 12dc9ea2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12dc9ea8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc9eab mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_12dc9eb1:;
  /* 12dc9eb1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc9ebb jae 0x12dc9ed2 */
  if (!C.cf) goto L_12dc9ed2;
  /* 12dc9ebd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12dc9ec3 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 12dc9ec9 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 12dc9ed0 jmp 0x12dc9ea2 */
  goto L_12dc9ea2;
L_12dc9ed2:;
  /* 12dc9ed2 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 12dc9ed9 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 12dc9edf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12dc9ee2 jmp 0x12dc9eed */
  goto L_12dc9eed;
L_12dc9ee4:;
  /* 12dc9ee4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc9ee7 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc9eea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12dc9eed:;
  /* 12dc9eed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc9ef0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dc9ef2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12dc9ef4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dc9ef6 je 0x12dc9f38 */
  if (C.zf) goto L_12dc9f38;
  /* 12dc9ef8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc9efb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dc9efd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12dc9eff mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 12dc9f05 jmp 0x12dc9f16 */
  goto L_12dc9f16;
L_12dc9f07:;
  /* 12dc9f07 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12dc9f0d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc9f10 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_12dc9f16:;
  /* 12dc9f16 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dc9f19 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dc9f1b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12dc9f1e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc9f24 ja 0x12dc9f36 */
  if ((!C.cf&&!C.zf)) goto L_12dc9f36;
  /* 12dc9f26 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12dc9f2c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 12dc9f34 jmp 0x12dc9f07 */
  goto L_12dc9f07;
L_12dc9f36:;
  /* 12dc9f36 jmp 0x12dc9ee4 */
  goto L_12dc9ee4;
L_12dc9f38:;
  /* 12dc9f38 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc9f3a mov eax, dword ptr [0x12de0ea4] */
  EAX = (r32((uint32_t)(0x12de0ea4)));
  /* 12dc9f3f push eax */
  push32((uint32_t)(EAX));
  /* 12dc9f40 mov ecx, dword ptr [0x12de0c04] */
  ECX = (r32((uint32_t)(0x12de0c04)));
  /* 12dc9f46 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc9f47 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 12dc9f4d push edx */
  push32((uint32_t)(EDX));
  /* 12dc9f4e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12dc9f53 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 12dc9f59 push eax */
  push32((uint32_t)(EAX));
  /* 12dc9f5a push 1 */
  push32((uint32_t)(0x1u));
  /* 12dc9f5c call 0x12dcbb20 */
  push32(0x12dc9f61u); f_12dcbb20();
  /* 12dc9f61 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc9f64 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc9f66 mov ecx, dword ptr [0x12de0c04] */
  ECX = (r32((uint32_t)(0x12de0c04)));
  /* 12dc9f6c push ecx */
  push32((uint32_t)(ECX));
  /* 12dc9f6d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12dc9f72 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 12dc9f78 push edx */
  push32((uint32_t)(EDX));
  /* 12dc9f79 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12dc9f7e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 12dc9f84 push eax */
  push32((uint32_t)(EAX));
  /* 12dc9f85 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12dc9f8a mov ecx, dword ptr [0x12de0ea4] */
  ECX = (r32((uint32_t)(0x12de0ea4)));
  /* 12dc9f90 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc9f91 call 0x12dcbce0 */
  push32(0x12dc9f96u); f_12dcbce0();
  /* 12dc9f96 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc9f99 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dc9f9b mov edx, dword ptr [0x12de0c04] */
  EDX = (r32((uint32_t)(0x12de0c04)));
  /* 12dc9fa1 push edx */
  push32((uint32_t)(EDX));
  /* 12dc9fa2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12dc9fa7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 12dc9fad push eax */
  push32((uint32_t)(EAX));
  /* 12dc9fae push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12dc9fb3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 12dc9fb9 push ecx */
  push32((uint32_t)(ECX));
  /* 12dc9fba push 0x200 */
  push32((uint32_t)(0x200u));
  /* 12dc9fbf mov edx, dword ptr [0x12de0ea4] */
  EDX = (r32((uint32_t)(0x12de0ea4)));
  /* 12dc9fc5 push edx */
  push32((uint32_t)(EDX));
  /* 12dc9fc6 call 0x12dcbce0 */
  push32(0x12dc9fcbu); f_12dcbce0();
  /* 12dc9fcb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc9fce mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12dc9fd8 jmp 0x12dc9fe9 */
  goto L_12dc9fe9;
L_12dc9fda:;
  /* 12dc9fda mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12dc9fe0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dc9fe3 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_12dc9fe9:;
  /* 12dc9fe9 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dc9ff3 jae 0x12dca0a4 */
  if (!C.cf) goto L_12dca0a4;
  /* 12dc9ff9 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12dc9fff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dca001 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 12dca009 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12dca00c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dca00e je 0x12dca046 */
  if (C.zf) goto L_12dca046;
  /* 12dca010 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12dca016 mov cl, byte ptr [eax + 0x12de0da1] */
  CL = (r8((uint32_t)(EAX + 0x12de0da1)));
  /* 12dca01c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 12dca01f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12dca025 mov byte ptr [edx + 0x12de0da1], cl */
  w8((uint32_t)(EDX + 0x12de0da1), (CL));
  /* 12dca02b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12dca031 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12dca037 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 12dca03e mov byte ptr [eax + 0x12de0ca0], dl */
  w8((uint32_t)(EAX + 0x12de0ca0), (DL));
  /* 12dca044 jmp 0x12dca09f */
  goto L_12dca09f;
L_12dca046:;
  /* 12dca046 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12dca04c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dca04e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 12dca056 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12dca059 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dca05b je 0x12dca092 */
  if (C.zf) goto L_12dca092;
  /* 12dca05d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12dca063 mov al, byte ptr [edx + 0x12de0da1] */
  AL = (r8((uint32_t)(EDX + 0x12de0da1)));
  /* 12dca069 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12dca06b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12dca071 mov byte ptr [ecx + 0x12de0da1], al */
  w8((uint32_t)(ECX + 0x12de0da1), (AL));
  /* 12dca077 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12dca07d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12dca083 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 12dca08a mov byte ptr [edx + 0x12de0ca0], cl */
  w8((uint32_t)(EDX + 0x12de0ca0), (CL));
  /* 12dca090 jmp 0x12dca09f */
  goto L_12dca09f;
L_12dca092:;
  /* 12dca092 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12dca098 mov byte ptr [edx + 0x12de0ca0], 0 */
  w8((uint32_t)(EDX + 0x12de0ca0), (0x0u));
L_12dca09f:;
  /* 12dca09f jmp 0x12dc9fda */
  goto L_12dc9fda;
L_12dca0a4:;
  /* 12dca0a4 jmp 0x12dca16e */
  goto L_12dca16e;
L_12dca0a9:;
  /* 12dca0a9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12dca0b3 jmp 0x12dca0c4 */
  goto L_12dca0c4;
L_12dca0b5:;
  /* 12dca0b5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12dca0bb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dca0be mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_12dca0c4:;
  /* 12dca0c4 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dca0ce jae 0x12dca16e */
  if (!C.cf) goto L_12dca16e;
  /* 12dca0d4 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dca0db jb 0x12dca118 */
  if (C.cf) goto L_12dca118;
  /* 12dca0dd cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dca0e4 ja 0x12dca118 */
  if ((!C.cf&&!C.zf)) goto L_12dca118;
  /* 12dca0e6 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12dca0ec mov dl, byte ptr [ecx + 0x12de0da1] */
  DL = (r8((uint32_t)(ECX + 0x12de0da1)));
  /* 12dca0f2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 12dca0f5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12dca0fb mov byte ptr [eax + 0x12de0da1], dl */
  w8((uint32_t)(EAX + 0x12de0da1), (DL));
  /* 12dca101 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12dca107 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dca10a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12dca110 mov byte ptr [edx + 0x12de0ca0], cl */
  w8((uint32_t)(EDX + 0x12de0ca0), (CL));
  /* 12dca116 jmp 0x12dca169 */
  goto L_12dca169;
L_12dca118:;
  /* 12dca118 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dca11f jb 0x12dca15c */
  if (C.cf) goto L_12dca15c;
  /* 12dca121 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dca128 ja 0x12dca15c */
  if ((!C.cf&&!C.zf)) goto L_12dca15c;
  /* 12dca12a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12dca130 mov cl, byte ptr [eax + 0x12de0da1] */
  CL = (r8((uint32_t)(EAX + 0x12de0da1)));
  /* 12dca136 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12dca139 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12dca13f mov byte ptr [edx + 0x12de0da1], cl */
  w8((uint32_t)(EDX + 0x12de0da1), (CL));
  /* 12dca145 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12dca14b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dca14e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12dca154 mov byte ptr [ecx + 0x12de0ca0], al */
  w8((uint32_t)(ECX + 0x12de0ca0), (AL));
  /* 12dca15a jmp 0x12dca169 */
  goto L_12dca169;
L_12dca15c:;
  /* 12dca15c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12dca162 mov byte ptr [edx + 0x12de0ca0], 0 */
  w8((uint32_t)(EDX + 0x12de0ca0), (0x0u));
L_12dca169:;
  /* 12dca169 jmp 0x12dca0b5 */
  goto L_12dca0b5;
L_12dca16e:;
  /* 12dca16e mov esp, ebp */
  ESP = (EBP);
  /* 12dca170 pop ebp */
  EBP = (pop32());
  /* 12dca171 ret  */
  ESPCHK(0x12dc9e70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a180 @ 0x12dca180 (23 bytes, 9 insns) */
void f_12dca180(void) {
  FTRACE(0x12dca180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dca180 push ebp */
  push32((uint32_t)(EBP));
  /* 12dca181 mov ebp, esp */
  EBP = (ESP);
  /* 12dca183 cmp dword ptr [0x12de0c8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12de0c8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dca18a je 0x12dca193 */
  if (C.zf) goto L_12dca193;
  /* 12dca18c mov eax, dword ptr [0x12de0c04] */
  EAX = (r32((uint32_t)(0x12de0c04)));
  /* 12dca191 jmp 0x12dca195 */
  goto L_12dca195;
L_12dca193:;
  /* 12dca193 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12dca195:;
  /* 12dca195 pop ebp */
  EBP = (pop32());
  /* 12dca196 ret  */
  ESPCHK(0x12dca180u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1a0 @ 0x12dca1a0 (34 bytes, 10 insns) */
void f_12dca1a0(void) {
  FTRACE(0x12dca1a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dca1a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dca1a1 mov ebp, esp */
  EBP = (ESP);
  /* 12dca1a3 cmp dword ptr [0x12de1050], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12de1050))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dca1aa jne 0x12dca1c0 */
  if (!C.zf) goto L_12dca1c0;
  /* 12dca1ac push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 12dca1ae call 0x12dc99c0 */
  push32(0x12dca1b3u); f_12dc99c0();
  /* 12dca1b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dca1b6 mov dword ptr [0x12de1050], 1 */
  w32((uint32_t)(0x12de1050), (0x1u));
L_12dca1c0:;
  /* 12dca1c0 pop ebp */
  EBP = (pop32());
  /* 12dca1c1 ret  */
  ESPCHK(0x12dca1a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1d0 @ 0x12dca1d0 (664 bytes, 264 insns) [15 switch table(s)] */
void f_12dca1d0(void) {
  FTRACE(0x12dca1d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dca1d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dca1d1 mov ebp, esp */
  EBP = (ESP);
  /* 12dca1d3 push edi */
  push32((uint32_t)(EDI));
  /* 12dca1d4 push esi */
  push32((uint32_t)(ESI));
  /* 12dca1d5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12dca1d8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dca1db mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12dca1de mov eax, ecx */
  EAX = (ECX);
  /* 12dca1e0 mov edx, ecx */
  EDX = (ECX);
  /* 12dca1e2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dca1e4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dca1e6 jbe 0x12dca1f0 */
  if ((C.cf||C.zf)) goto L_12dca1f0;
  /* 12dca1e8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dca1ea jb 0x12dca368 */
  if (C.cf) goto L_12dca368;
L_12dca1f0:;
  /* 12dca1f0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12dca1f6 jne 0x12dca20c */
  if (!C.zf) goto L_12dca20c;
  /* 12dca1f8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12dca1fb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12dca1fe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dca201 jb 0x12dca22c */
  if (C.cf) goto L_12dca22c;
  /* 12dca203 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12dca205 jmp dword ptr [edx*4 + 0x12dca318] */
  switch (EDX) {
    case 0: goto L_12dca328;
    case 1: goto L_12dca330;
    case 2: goto L_12dca33c;
    case 3: goto L_12dca350;
    default: x86_unimpl("switch@0x12dca205 out of table"); return;
  }
L_12dca20c:;
  /* 12dca20c mov eax, edi */
  EAX = (EDI);
  /* 12dca20e mov edx, 3 */
  EDX = (0x3u);
  /* 12dca213 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dca216 jb 0x12dca224 */
  if (C.cf) goto L_12dca224;
  /* 12dca218 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12dca21b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dca21d jmp dword ptr [eax*4 + 0x12dca230] */
  switch (EAX) {
    case 1: goto L_12dca240;
    case 2: goto L_12dca26c;
    case 3: goto L_12dca290;
    default: x86_unimpl("switch@0x12dca21d out of table"); return;
  }
L_12dca224:;
  /* 12dca224 jmp dword ptr [ecx*4 + 0x12dca328] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x12dca328)))); return;
  /* 12dca22b nop  */
  /* nop */
L_12dca22c:;
  /* 12dca22c jmp dword ptr [ecx*4 + 0x12dca2ac] */
  switch (ECX) {
    case 0: goto L_12dca30f;
    case 1: goto L_12dca2fc;
    case 2: goto L_12dca2f4;
    case 3: goto L_12dca2ec;
    case 4: goto L_12dca2e4;
    case 5: goto L_12dca2dc;
    case 6: goto L_12dca2d4;
    case 7: goto L_12dca2cc;
    default: x86_unimpl("switch@0x12dca22c out of table"); return;
  }
  /* 12dca233 nop  */
  /* nop */
L_12dca240:;
  /* 12dca240 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12dca242 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12dca244 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12dca246 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12dca249 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12dca24c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12dca24f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12dca252 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12dca255 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12dca258 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12dca25b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dca25e jb 0x12dca22c */
  if (C.cf) goto L_12dca22c;
  /* 12dca260 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12dca262 jmp dword ptr [edx*4 + 0x12dca318] */
  switch (EDX) {
    case 0: goto L_12dca328;
    case 1: goto L_12dca330;
    case 2: goto L_12dca33c;
    case 3: goto L_12dca350;
    default: x86_unimpl("switch@0x12dca262 out of table"); return;
  }
  /* 12dca269 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12dca26c:;
  /* 12dca26c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12dca26e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12dca270 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12dca272 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12dca275 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12dca278 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12dca27b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12dca27e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12dca281 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dca284 jb 0x12dca22c */
  if (C.cf) goto L_12dca22c;
  /* 12dca286 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12dca288 jmp dword ptr [edx*4 + 0x12dca318] */
  switch (EDX) {
    case 0: goto L_12dca328;
    case 1: goto L_12dca330;
    case 2: goto L_12dca33c;
    case 3: goto L_12dca350;
    default: x86_unimpl("switch@0x12dca288 out of table"); return;
  }
  /* 12dca28f nop  */
  /* nop */
L_12dca290:;
  /* 12dca290 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12dca292 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12dca294 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12dca296 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12dca297 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12dca29a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12dca29b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dca29e jb 0x12dca22c */
  if (C.cf) goto L_12dca22c;
  /* 12dca2a0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12dca2a2 jmp dword ptr [edx*4 + 0x12dca318] */
  switch (EDX) {
    case 0: goto L_12dca328;
    case 1: goto L_12dca330;
    case 2: goto L_12dca33c;
    case 3: goto L_12dca350;
    default: x86_unimpl("switch@0x12dca2a2 out of table"); return;
  }
  /* 12dca2a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12dca2cc:;
  /* 12dca2cc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 12dca2d0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_12dca2d4:;
  /* 12dca2d4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 12dca2d8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_12dca2dc:;
  /* 12dca2dc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 12dca2e0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_12dca2e4:;
  /* 12dca2e4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 12dca2e8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_12dca2ec:;
  /* 12dca2ec mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 12dca2f0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_12dca2f4:;
  /* 12dca2f4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 12dca2f8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_12dca2fc:;
  /* 12dca2fc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 12dca300 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 12dca304 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12dca30b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12dca30d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12dca30f:;
  /* 12dca30f jmp dword ptr [edx*4 + 0x12dca318] */
  switch (EDX) {
    case 0: goto L_12dca328;
    case 1: goto L_12dca330;
    case 2: goto L_12dca33c;
    case 3: goto L_12dca350;
    default: x86_unimpl("switch@0x12dca30f out of table"); return;
  }
  /* 12dca316 mov edi, edi */
  EDI = (EDI);
L_12dca328:;
  /* 12dca328 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dca32b pop esi */
  ESI = (pop32());
  /* 12dca32c pop edi */
  EDI = (pop32());
  /* 12dca32d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12dca32e ret  */
  ESPCHK(0x12dca1d0u, _esp0);
  ESP += 4; return;
  /* 12dca32f nop  */
  /* nop */
L_12dca330:;
  /* 12dca330 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12dca332 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12dca334 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dca337 pop esi */
  ESI = (pop32());
  /* 12dca338 pop edi */
  EDI = (pop32());
  /* 12dca339 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12dca33a ret  */
  ESPCHK(0x12dca1d0u, _esp0);
  ESP += 4; return;
  /* 12dca33b nop  */
  /* nop */
L_12dca33c:;
  /* 12dca33c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12dca33e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12dca340 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12dca343 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12dca346 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dca349 pop esi */
  ESI = (pop32());
  /* 12dca34a pop edi */
  EDI = (pop32());
  /* 12dca34b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12dca34c ret  */
  ESPCHK(0x12dca1d0u, _esp0);
  ESP += 4; return;
  /* 12dca34d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12dca350:;
  /* 12dca350 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12dca352 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12dca354 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12dca357 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12dca35a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12dca35d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12dca360 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dca363 pop esi */
  ESI = (pop32());
  /* 12dca364 pop edi */
  EDI = (pop32());
  /* 12dca365 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12dca366 ret  */
  ESPCHK(0x12dca1d0u, _esp0);
  ESP += 4; return;
  /* 12dca367 nop  */
  /* nop */
L_12dca368:;
  /* 12dca368 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 12dca36c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 12dca370 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12dca376 jne 0x12dca39c */
  if (!C.zf) goto L_12dca39c;
  /* 12dca378 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12dca37b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12dca37e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dca381 jb 0x12dca390 */
  if (C.cf) goto L_12dca390;
  /* 12dca383 std  */
  C.df=1;
  /* 12dca384 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12dca386 cld  */
  C.df=0;
  /* 12dca387 jmp dword ptr [edx*4 + 0x12dca4b0] */
  switch (EDX) {
    case 0: goto L_12dca4c0;
    case 1: goto L_12dca4c8;
    case 2: goto L_12dca4d8;
    case 3: goto L_12dca4ec;
    default: x86_unimpl("switch@0x12dca387 out of table"); return;
  }
  /* 12dca38e mov edi, edi */
  EDI = (EDI);
L_12dca390:;
  /* 12dca390 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12dca392 jmp dword ptr [ecx*4 + 0x12dca460] */
  switch (ECX) {
    case 0: goto L_12dca4a7;
    default: x86_unimpl("switch@0x12dca392 out of table"); return;
  }
  /* 12dca399 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12dca39c:;
  /* 12dca39c mov eax, edi */
  EAX = (EDI);
  /* 12dca39e mov edx, 3 */
  EDX = (0x3u);
  /* 12dca3a3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dca3a6 jb 0x12dca3b4 */
  if (C.cf) goto L_12dca3b4;
  /* 12dca3a8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12dca3ab sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dca3ad jmp dword ptr [eax*4 + 0x12dca3b8] */
  switch (EAX) {
    case 1: goto L_12dca3c8;
    case 2: goto L_12dca3e8;
    case 3: goto L_12dca410;
    default: x86_unimpl("switch@0x12dca3ad out of table"); return;
  }
L_12dca3b4:;
  /* 12dca3b4 jmp dword ptr [ecx*4 + 0x12dca4b0] */
  switch (ECX) {
    case 0: goto L_12dca4c0;
    case 1: goto L_12dca4c8;
    case 2: goto L_12dca4d8;
    case 3: goto L_12dca4ec;
    default: x86_unimpl("switch@0x12dca3b4 out of table"); return;
  }
  /* 12dca3bb nop  */
  /* nop */
L_12dca3c8:;
  /* 12dca3c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12dca3cb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12dca3cd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12dca3d0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 12dca3d1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12dca3d4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 12dca3d5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dca3d8 jb 0x12dca390 */
  if (C.cf) goto L_12dca390;
  /* 12dca3da std  */
  C.df=1;
  /* 12dca3db rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12dca3dd cld  */
  C.df=0;
  /* 12dca3de jmp dword ptr [edx*4 + 0x12dca4b0] */
  switch (EDX) {
    case 0: goto L_12dca4c0;
    case 1: goto L_12dca4c8;
    case 2: goto L_12dca4d8;
    case 3: goto L_12dca4ec;
    default: x86_unimpl("switch@0x12dca3de out of table"); return;
  }
  /* 12dca3e5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12dca3e8:;
  /* 12dca3e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12dca3eb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12dca3ed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12dca3f0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12dca3f3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
L_12dca3f6:;
  /* 12dca3f6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12dca3f9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dca3fc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dca3ff cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dca402 jb 0x12dca390 */
  if (C.cf) goto L_12dca390;
  /* 12dca404 std  */
  C.df=1;
  /* 12dca405 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12dca407 cld  */
  C.df=0;
  /* 12dca408 jmp dword ptr [edx*4 + 0x12dca4b0] */
  switch (EDX) {
    case 0: goto L_12dca4c0;
    case 1: goto L_12dca4c8;
    case 2: goto L_12dca4d8;
    case 3: goto L_12dca4ec;
    default: x86_unimpl("switch@0x12dca408 out of table"); return;
  }
  /* 12dca40f nop  */
  /* nop */
L_12dca410:;
  /* 12dca410 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12dca413 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12dca415 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12dca418 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12dca41b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12dca41e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12dca421 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12dca424 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12dca427 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dca42a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dca42d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dca430 jb 0x12dca390 */
  if (C.cf) goto L_12dca390;
  /* 12dca436 std  */
  C.df=1;
  /* 12dca437 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12dca439 cld  */
  C.df=0;
  /* 12dca43a jmp dword ptr [edx*4 + 0x12dca4b0] */
  switch (EDX) {
    case 0: goto L_12dca4c0;
    case 1: goto L_12dca4c8;
    case 2: goto L_12dca4d8;
    case 3: goto L_12dca4ec;
    default: x86_unimpl("switch@0x12dca43a out of table"); return;
  }
  /* 12dca441 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 12dca444 movsb byte ptr es:[edi], byte ptr fs:[esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 12dca446 fcom qword ptr [edx] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(EDX)));
  /* 12dca448 insb byte ptr es:[edi], dx */
  x86_unimpl("insb @ 0x12dca448");
  /* 12dca449 movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 12dca44a fcom qword ptr [edx] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(EDX)));
  /* 12dca44c je 0x12dca3f2 */
  if (C.zf) goto L_12dca3f2;
  /* 12dca44e fcom qword ptr [edx] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(EDX)));
  /* 12dca450 jl 0x12dca3f6 */
  if ((C.sf!=C.of)) goto L_12dca3f6;
  /* 12dca452 fcom qword ptr [edx] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(EDX)));
  /* 12dca454 test byte ptr [esp + ebx*8 - 0x235b73ee], ah */
  { uint32_t _r=(r8((uint32_t)(ESP + EBX*8 + -0x235b73ee)))&(AH); fl_logic(_r,8); }
  /* 12dca45c xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 12dca45d movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 12dca45e fcom qword ptr [edx] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(EDX)));
  /* 12dca464 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 12dca468 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 12dca46c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 12dca470 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 12dca474 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 12dca478 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 12dca47c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 12dca480 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 12dca484 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 12dca488 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 12dca48c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 12dca490 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 12dca494 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 12dca498 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 12dca49c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12dca4a3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12dca4a5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12dca4a7:;
  /* 12dca4a7 jmp dword ptr [edx*4 + 0x12dca4b0] */
  switch (EDX) {
    case 0: goto L_12dca4c0;
    case 1: goto L_12dca4c8;
    case 2: goto L_12dca4d8;
    case 3: goto L_12dca4ec;
    default: x86_unimpl("switch@0x12dca4a7 out of table"); return;
  }
  /* 12dca4ae mov edi, edi */
  EDI = (EDI);
L_12dca4c0:;
  /* 12dca4c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dca4c3 pop esi */
  ESI = (pop32());
  /* 12dca4c4 pop edi */
  EDI = (pop32());
  /* 12dca4c5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12dca4c6 ret  */
  ESPCHK(0x12dca1d0u, _esp0);
  ESP += 4; return;
  /* 12dca4c7 nop  */
  /* nop */
L_12dca4c8:;
  /* 12dca4c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12dca4cb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12dca4ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dca4d1 pop esi */
  ESI = (pop32());
  /* 12dca4d2 pop edi */
  EDI = (pop32());
  /* 12dca4d3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12dca4d4 ret  */
  ESPCHK(0x12dca1d0u, _esp0);
  ESP += 4; return;
  /* 12dca4d5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12dca4d8:;
  /* 12dca4d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12dca4db mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12dca4de mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12dca4e1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12dca4e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dca4e7 pop esi */
  ESI = (pop32());
  /* 12dca4e8 pop edi */
  EDI = (pop32());
  /* 12dca4e9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12dca4ea ret  */
  ESPCHK(0x12dca1d0u, _esp0);
  ESP += 4; return;
  /* 12dca4eb nop  */
  /* nop */
L_12dca4ec:;
  /* 12dca4ec mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12dca4ef mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12dca4f2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12dca4f5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12dca4f8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12dca4fb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12dca4fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dca501 pop esi */
  ESI = (pop32());
  /* 12dca502 pop edi */
  EDI = (pop32());
  /* 12dca503 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12dca504 ret  */
  ESPCHK(0x12dca1d0u, _esp0);
  ESP += 4; return;
L_12dca3f2: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x12dca3f2 (unresolved jump table)"); return;
}

/* __aulldiv @ 0x12dca510 (104 bytes, 43 insns) */
void f_12dca510(void) {
  FTRACE(0x12dca510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dca510 push ebx */
  push32((uint32_t)(EBX));
  /* 12dca511 push esi */
  push32((uint32_t)(ESI));
  /* 12dca512 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 12dca516 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dca518 jne 0x12dca532 */
  if (!C.zf) goto L_12dca532;
  /* 12dca51a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 12dca51e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12dca522 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dca524 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12dca526 mov ebx, eax */
  EBX = (EAX);
  /* 12dca528 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 12dca52c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12dca52e mov edx, ebx */
  EDX = (EBX);
  /* 12dca530 jmp 0x12dca573 */
  goto L_12dca573;
L_12dca532:;
  /* 12dca532 mov ecx, eax */
  ECX = (EAX);
  /* 12dca534 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 12dca538 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 12dca53c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_12dca540:;
  /* 12dca540 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12dca542 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 12dca544 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12dca546 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 12dca548 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dca54a jne 0x12dca540 */
  if (!C.zf) goto L_12dca540;
  /* 12dca54c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12dca54e mov esi, eax */
  ESI = (EAX);
  /* 12dca550 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12dca554 mov ecx, eax */
  ECX = (EAX);
  /* 12dca556 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 12dca55a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12dca55c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dca55e jb 0x12dca56e */
  if (C.cf) goto L_12dca56e;
  /* 12dca560 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dca564 ja 0x12dca56e */
  if ((!C.cf&&!C.zf)) goto L_12dca56e;
  /* 12dca566 jb 0x12dca56f */
  if (C.cf) goto L_12dca56f;
  /* 12dca568 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dca56c jbe 0x12dca56f */
  if ((C.cf||C.zf)) goto L_12dca56f;
L_12dca56e:;
  /* 12dca56e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_12dca56f:;
  /* 12dca56f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dca571 mov eax, esi */
  EAX = (ESI);
L_12dca573:;
  /* 12dca573 pop esi */
  ESI = (pop32());
  /* 12dca574 pop ebx */
  EBX = (pop32());
  /* 12dca575 ret 0x10 */
  ESPCHK(0x12dca510u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x12dca580 (117 bytes, 44 insns) */
void f_12dca580(void) {
  FTRACE(0x12dca580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dca580 push ebx */
  push32((uint32_t)(EBX));
  /* 12dca581 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 12dca585 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dca587 jne 0x12dca5a1 */
  if (!C.zf) goto L_12dca5a1;
  /* 12dca589 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 12dca58d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 12dca591 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dca593 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12dca595 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12dca599 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12dca59b mov eax, edx */
  EAX = (EDX);
  /* 12dca59d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dca59f jmp 0x12dca5f1 */
  goto L_12dca5f1;
L_12dca5a1:;
  /* 12dca5a1 mov ecx, eax */
  ECX = (EAX);
  /* 12dca5a3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 12dca5a7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 12dca5ab mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_12dca5af:;
  /* 12dca5af shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12dca5b1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 12dca5b3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12dca5b5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 12dca5b7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dca5b9 jne 0x12dca5af */
  if (!C.zf) goto L_12dca5af;
  /* 12dca5bb div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12dca5bd mov ecx, eax */
  ECX = (EAX);
  /* 12dca5bf mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12dca5c3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 12dca5c4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12dca5c8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dca5ca jb 0x12dca5da */
  if (C.cf) goto L_12dca5da;
  /* 12dca5cc cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dca5d0 ja 0x12dca5da */
  if ((!C.cf&&!C.zf)) goto L_12dca5da;
  /* 12dca5d2 jb 0x12dca5e2 */
  if (C.cf) goto L_12dca5e2;
  /* 12dca5d4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dca5d8 jbe 0x12dca5e2 */
  if ((C.cf||C.zf)) goto L_12dca5e2;
L_12dca5da:;
  /* 12dca5da sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dca5de sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12dca5e2:;
  /* 12dca5e2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dca5e6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dca5ea neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12dca5ec neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12dca5ee sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12dca5f1:;
  /* 12dca5f1 pop ebx */
  EBX = (pop32());
  /* 12dca5f2 ret 0x10 */
  ESPCHK(0x12dca580u, _esp0);
  ESP += 20; return;
}

/* FUN_1000a600 @ 0x12dca600 (628 bytes, 214 insns) */
void f_12dca600(void) {
  FTRACE(0x12dca600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dca600 push ebp */
  push32((uint32_t)(EBP));
  /* 12dca601 mov ebp, esp */
  EBP = (ESP);
  /* 12dca603 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dca606 push ebx */
  push32((uint32_t)(EBX));
  /* 12dca607 push esi */
  push32((uint32_t)(ESI));
  /* 12dca608 push edi */
  push32((uint32_t)(EDI));
L_12dca609:;
  /* 12dca609 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dca60d jne 0x12dca62d */
  if (!C.zf) goto L_12dca62d;
  /* 12dca60f push 0x12ddb0a0 */
  push32((uint32_t)(0x12ddb0a0u));
  /* 12dca614 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dca616 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 12dca618 push 0x12ddb094 */
  push32((uint32_t)(0x12ddb094u));
  /* 12dca61d push 2 */
  push32((uint32_t)(0x2u));
  /* 12dca61f call 0x12dc29b0 */
  push32(0x12dca624u); f_12dc29b0();
  /* 12dca624 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dca627 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dca62a jne 0x12dca62d */
  if (!C.zf) goto L_12dca62d;
  /* 12dca62c int3  */
  x86_unimpl("int3 @ 0x12dca62c");
L_12dca62d:;
  /* 12dca62d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dca62f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dca631 jne 0x12dca609 */
  if (!C.zf) goto L_12dca609;
  /* 12dca633 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dca636 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dca639 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dca63c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12dca63f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12dca642 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dca645 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12dca648 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 12dca64e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dca650 je 0x12dca65f */
  if (C.zf) goto L_12dca65f;
  /* 12dca652 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dca655 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12dca658 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 12dca65b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dca65d je 0x12dca675 */
  if (C.zf) goto L_12dca675;
L_12dca65f:;
  /* 12dca65f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dca662 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12dca665 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12dca667 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dca66a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 12dca66d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dca670 jmp 0x12dca86d */
  goto L_12dca86d;
L_12dca675:;
  /* 12dca675 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dca678 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12dca67b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12dca67e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dca680 je 0x12dca6cc */
  if (C.zf) goto L_12dca6cc;
  /* 12dca682 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dca685 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12dca68c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dca68f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12dca692 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 12dca695 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dca697 je 0x12dca6b5 */
  if (C.zf) goto L_12dca6b5;
  /* 12dca699 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dca69c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dca69f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12dca6a2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12dca6a4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dca6a7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12dca6aa and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 12dca6ad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dca6b0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12dca6b3 jmp 0x12dca6cc */
  goto L_12dca6cc;
L_12dca6b5:;
  /* 12dca6b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dca6b8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12dca6bb or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 12dca6be mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dca6c1 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12dca6c4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dca6c7 jmp 0x12dca86d */
  goto L_12dca86d;
L_12dca6cc:;
  /* 12dca6cc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dca6cf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12dca6d2 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12dca6d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dca6d8 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12dca6db mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dca6de mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12dca6e1 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 12dca6e4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dca6e7 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12dca6ea mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dca6ed mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12dca6f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12dca6fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dca6fe mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12dca701 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dca704 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12dca707 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 12dca70d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dca70f jne 0x12dca73f */
  if (!C.zf) goto L_12dca73f;
  /* 12dca711 cmp dword ptr [ebp - 8], 0x12dde140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12dde140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dca718 je 0x12dca723 */
  if (C.zf) goto L_12dca723;
  /* 12dca71a cmp dword ptr [ebp - 8], 0x12dde160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12dde160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dca721 jne 0x12dca733 */
  if (!C.zf) goto L_12dca733;
L_12dca723:;
  /* 12dca723 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dca726 push edx */
  push32((uint32_t)(EDX));
  /* 12dca727 call 0x12dcc570 */
  push32(0x12dca72cu); f_12dcc570();
  /* 12dca72c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dca72f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dca731 jne 0x12dca73f */
  if (!C.zf) goto L_12dca73f;
L_12dca733:;
  /* 12dca733 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dca736 push eax */
  push32((uint32_t)(EAX));
  /* 12dca737 call 0x12dcc4a0 */
  push32(0x12dca73cu); f_12dcc4a0();
  /* 12dca73c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dca73f:;
  /* 12dca73f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dca742 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12dca745 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 12dca74b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dca74d je 0x12dca82b */
  if (C.zf) goto L_12dca82b;
L_12dca753:;
  /* 12dca753 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dca756 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dca759 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 12dca75b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dca75e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dca760 jge 0x12dca783 */
  if ((C.sf==C.of)) goto L_12dca783;
  /* 12dca762 push 0x12ddb054 */
  push32((uint32_t)(0x12ddb054u));
  /* 12dca767 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dca769 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 12dca76e push 0x12ddb094 */
  push32((uint32_t)(0x12ddb094u));
  /* 12dca773 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dca775 call 0x12dc29b0 */
  push32(0x12dca77au); f_12dc29b0();
  /* 12dca77a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dca77d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dca780 jne 0x12dca783 */
  if (!C.zf) goto L_12dca783;
  /* 12dca782 int3  */
  x86_unimpl("int3 @ 0x12dca782");
L_12dca783:;
  /* 12dca783 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dca785 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dca787 jne 0x12dca753 */
  if (!C.zf) goto L_12dca753;
  /* 12dca789 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dca78c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dca78f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12dca791 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dca794 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dca797 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dca79a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12dca79d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dca7a0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dca7a3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12dca7a5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dca7a8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12dca7ab sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dca7ae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dca7b1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12dca7b4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dca7b8 jle 0x12dca7d6 */
  if ((C.zf||C.sf!=C.of)) goto L_12dca7d6;
  /* 12dca7ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dca7bd push ecx */
  push32((uint32_t)(ECX));
  /* 12dca7be mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dca7c1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12dca7c4 push eax */
  push32((uint32_t)(EAX));
  /* 12dca7c5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dca7c8 push ecx */
  push32((uint32_t)(ECX));
  /* 12dca7c9 call 0x12dcc190 */
  push32(0x12dca7ceu); f_12dcc190();
  /* 12dca7ce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dca7d1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12dca7d4 jmp 0x12dca81e */
  goto L_12dca81e;
L_12dca7d6:;
  /* 12dca7d6 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dca7da je 0x12dca7f9 */
  if (C.zf) goto L_12dca7f9;
  /* 12dca7dc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dca7df sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12dca7e2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dca7e5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12dca7e8 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dca7eb mov ecx, dword ptr [edx*4 + 0x12de0f00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12de0f00)));
  /* 12dca7f2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dca7f4 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12dca7f7 jmp 0x12dca800 */
  goto L_12dca800;
L_12dca7f9:;
  /* 12dca7f9 mov dword ptr [ebp - 0x14], 0x12ddda60 */
  w32((uint32_t)(EBP + -0x14), (0x12ddda60u));
L_12dca800:;
  /* 12dca800 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dca803 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 12dca807 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12dca80a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dca80c je 0x12dca81e */
  if (C.zf) goto L_12dca81e;
  /* 12dca80e push 2 */
  push32((uint32_t)(0x2u));
  /* 12dca810 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dca812 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dca815 push ecx */
  push32((uint32_t)(ECX));
  /* 12dca816 call 0x12dcc040 */
  push32(0x12dca81bu); f_12dcc040();
  /* 12dca81b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dca81e:;
  /* 12dca81e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dca821 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12dca824 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 12dca827 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12dca829 jmp 0x12dca849 */
  goto L_12dca849;
L_12dca82b:;
  /* 12dca82b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12dca832 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dca835 push edx */
  push32((uint32_t)(EDX));
  /* 12dca836 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 12dca839 push eax */
  push32((uint32_t)(EAX));
  /* 12dca83a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dca83d push ecx */
  push32((uint32_t)(ECX));
  /* 12dca83e call 0x12dcc190 */
  push32(0x12dca843u); f_12dcc190();
  /* 12dca843 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dca846 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12dca849:;
  /* 12dca849 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dca84c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dca84f je 0x12dca865 */
  if (C.zf) goto L_12dca865;
  /* 12dca851 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dca854 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12dca857 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 12dca85a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dca85d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12dca860 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dca863 jmp 0x12dca86d */
  goto L_12dca86d;
L_12dca865:;
  /* 12dca865 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dca868 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_12dca86d:;
  /* 12dca86d pop edi */
  EDI = (pop32());
  /* 12dca86e pop esi */
  ESI = (pop32());
  /* 12dca86f pop ebx */
  EBX = (pop32());
  /* 12dca870 mov esp, ebp */
  ESP = (EBP);
  /* 12dca872 pop ebp */
  EBP = (pop32());
  /* 12dca873 ret  */
  ESPCHK(0x12dca600u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a880 @ 0x12dca880 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_12dca880(void) {
  FTRACE(0x12dca880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dca880 push ebp */
  push32((uint32_t)(EBP));
  /* 12dca881 mov ebp, esp */
  EBP = (ESP);
  /* 12dca883 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dca889 push ebx */
  push32((uint32_t)(EBX));
  /* 12dca88a push esi */
  push32((uint32_t)(ESI));
  /* 12dca88b push edi */
  push32((uint32_t)(EDI));
  /* 12dca88c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12dca893 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 12dca89d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_12dca8a4:;
  /* 12dca8a4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dca8a7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12dca8a9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 12dca8ac movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12dca8b0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dca8b3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dca8b6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12dca8b9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dca8bb je 0x12dcb497 */
  if (C.zf) goto L_12dcb497;
  /* 12dca8c1 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dca8c8 jl 0x12dcb497 */
  if ((C.sf!=C.of)) goto L_12dcb497;
  /* 12dca8ce movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12dca8d2 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dca8d5 jl 0x12dca8f6 */
  if ((C.sf!=C.of)) goto L_12dca8f6;
  /* 12dca8d7 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12dca8db cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dca8de jg 0x12dca8f6 */
  if ((!C.zf&&C.sf==C.of)) goto L_12dca8f6;
  /* 12dca8e0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12dca8e4 movsx ecx, byte ptr [eax + 0x12ddb08c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x12ddb08c))));
  /* 12dca8eb and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 12dca8ee mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 12dca8f4 jmp 0x12dca900 */
  goto L_12dca900;
L_12dca8f6:;
  /* 12dca8f6 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_12dca900:;
  /* 12dca900 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 12dca906 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12dca909 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dca90c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dca90f movsx edx, byte ptr [ecx + eax*8 + 0x12ddb0ac] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x12ddb0ac))));
  /* 12dca917 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12dca91a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12dca91d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dca920 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 12dca926 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dca92d ja 0x12dcb492 */
  if ((!C.cf&&!C.zf)) goto L_12dcb492;
  /* 12dca933 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 12dca939 jmp dword ptr [ecx*4 + 0x12dcb4a4] */
  switch (ECX) {
    case 0: goto L_12dca940;
    case 1: goto L_12dca9da;
    case 2: goto L_12dcaa1c;
    case 3: goto L_12dcaa8b;
    case 4: goto L_12dcaae3;
    case 5: goto L_12dcaaf2;
    case 6: goto L_12dcab3e;
    case 7: goto L_12dcabd1;
    case 8: goto L_12dcaa68;
    case 9: goto L_12dcaa73;
    case 10: goto L_12dcaa5e;
    case 11: goto L_12dcaa53;
    case 12: goto L_12dcaa7e;
    case 13: goto L_12dcaa86;
    default: x86_unimpl("switch@0x12dca939 out of table"); return;
  }
L_12dca940:;
  /* 12dca940 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12dca947 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dca94a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12dca950 mov eax, dword ptr [0x12dddc98] */
  EAX = (r32((uint32_t)(0x12dddc98)));
  /* 12dca955 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dca957 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12dca95b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12dca961 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dca963 je 0x12dca9bd */
  if (C.zf) goto L_12dca9bd;
  /* 12dca965 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 12dca96b push edx */
  push32((uint32_t)(EDX));
  /* 12dca96c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dca96f push eax */
  push32((uint32_t)(EAX));
  /* 12dca970 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12dca974 push ecx */
  push32((uint32_t)(ECX));
  /* 12dca975 call 0x12dcb5b0 */
  push32(0x12dca97au); f_12dcb5b0();
  /* 12dca97a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dca97d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dca980 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12dca982 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 12dca985 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dca988 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dca98b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12dca98e:;
  /* 12dca98e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12dca992 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dca994 jne 0x12dca9b7 */
  if (!C.zf) goto L_12dca9b7;
  /* 12dca996 push 0x12ddb12c */
  push32((uint32_t)(0x12ddb12cu));
  /* 12dca99b push 0 */
  push32((uint32_t)(0x0u));
  /* 12dca99d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 12dca9a2 push 0x12ddb120 */
  push32((uint32_t)(0x12ddb120u));
  /* 12dca9a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dca9a9 call 0x12dc29b0 */
  push32(0x12dca9aeu); f_12dc29b0();
  /* 12dca9ae add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dca9b1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dca9b4 jne 0x12dca9b7 */
  if (!C.zf) goto L_12dca9b7;
  /* 12dca9b6 int3  */
  x86_unimpl("int3 @ 0x12dca9b6");
L_12dca9b7:;
  /* 12dca9b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dca9b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dca9bb jne 0x12dca98e */
  if (!C.zf) goto L_12dca98e;
L_12dca9bd:;
  /* 12dca9bd lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 12dca9c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12dca9c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dca9c7 push edx */
  push32((uint32_t)(EDX));
  /* 12dca9c8 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12dca9cc push eax */
  push32((uint32_t)(EAX));
  /* 12dca9cd call 0x12dcb5b0 */
  push32(0x12dca9d2u); f_12dcb5b0();
  /* 12dca9d2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dca9d5 jmp 0x12dcb492 */
  goto L_12dcb492;
L_12dca9da:;
  /* 12dca9da mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12dca9e1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dca9e4 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 12dca9ea mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 12dca9f0 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 12dca9f6 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 12dca9fc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12dca9ff mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12dcaa06 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 12dcaa10 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12dcaa17 jmp 0x12dcb492 */
  goto L_12dcb492;
L_12dcaa1c:;
  /* 12dcaa1c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12dcaa20 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 12dcaa26 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 12dcaa2c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcaa2f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 12dcaa35 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcaa3c ja 0x12dcaa86 */
  if ((!C.cf&&!C.zf)) goto L_12dcaa86;
  /* 12dcaa3e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 12dcaa44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dcaa46 mov al, byte ptr [ecx + 0x12dcb4dc] */
  AL = (r8((uint32_t)(ECX + 0x12dcb4dc)));
  /* 12dcaa4c jmp dword ptr [eax*4 + 0x12dcb4c4] */
  switch (EAX) {
    case 0: goto L_12dcaa68;
    case 1: goto L_12dcaa73;
    case 2: goto L_12dcaa5e;
    case 3: goto L_12dcaa53;
    case 4: goto L_12dcaa7e;
    case 5: goto L_12dcaa86;
    default: x86_unimpl("switch@0x12dcaa4c out of table"); return;
  }
L_12dcaa53:;
  /* 12dcaa53 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcaa56 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12dcaa59 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12dcaa5c jmp 0x12dcaa86 */
  goto L_12dcaa86;
L_12dcaa5e:;
  /* 12dcaa5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcaa61 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 12dcaa63 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dcaa66 jmp 0x12dcaa86 */
  goto L_12dcaa86;
L_12dcaa68:;
  /* 12dcaa68 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcaa6b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12dcaa6e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12dcaa71 jmp 0x12dcaa86 */
  goto L_12dcaa86;
L_12dcaa73:;
  /* 12dcaa73 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcaa76 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 12dcaa79 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12dcaa7c jmp 0x12dcaa86 */
  goto L_12dcaa86;
L_12dcaa7e:;
  /* 12dcaa7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcaa81 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 12dcaa83 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12dcaa86:;
  /* 12dcaa86 jmp 0x12dcb492 */
  goto L_12dcb492;
L_12dcaa8b:;
  /* 12dcaa8b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12dcaa8f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcaa92 jne 0x12dcaac7 */
  if (!C.zf) goto L_12dcaac7;
  /* 12dcaa94 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12dcaa97 push edx */
  push32((uint32_t)(EDX));
  /* 12dcaa98 call 0x12dcb6c0 */
  push32(0x12dcaa9du); f_12dcb6c0();
  /* 12dcaa9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcaaa0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 12dcaaa6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcaaad jge 0x12dcaac5 */
  if ((C.sf==C.of)) goto L_12dcaac5;
  /* 12dcaaaf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcaab2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12dcaab4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dcaab7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 12dcaabd neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12dcaabf mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_12dcaac5:;
  /* 12dcaac5 jmp 0x12dcaade */
  goto L_12dcaade;
L_12dcaac7:;
  /* 12dcaac7 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 12dcaacd imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dcaad0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12dcaad4 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 12dcaad8 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_12dcaade:;
  /* 12dcaade jmp 0x12dcb492 */
  goto L_12dcb492;
L_12dcaae3:;
  /* 12dcaae3 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 12dcaaed jmp 0x12dcb492 */
  goto L_12dcb492;
L_12dcaaf2:;
  /* 12dcaaf2 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12dcaaf6 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcaaf9 jne 0x12dcab22 */
  if (!C.zf) goto L_12dcab22;
  /* 12dcaafb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12dcaafe push eax */
  push32((uint32_t)(EAX));
  /* 12dcaaff call 0x12dcb6c0 */
  push32(0x12dcab04u); f_12dcb6c0();
  /* 12dcab04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcab07 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 12dcab0d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcab14 jge 0x12dcab20 */
  if ((C.sf==C.of)) goto L_12dcab20;
  /* 12dcab16 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_12dcab20:;
  /* 12dcab20 jmp 0x12dcab39 */
  goto L_12dcab39;
L_12dcab22:;
  /* 12dcab22 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 12dcab28 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dcab2b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12dcab2f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12dcab33 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_12dcab39:;
  /* 12dcab39 jmp 0x12dcb492 */
  goto L_12dcb492;
L_12dcab3e:;
  /* 12dcab3e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12dcab42 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 12dcab48 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 12dcab4e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcab51 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 12dcab57 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcab5e ja 0x12dcabcc */
  if ((!C.cf&&!C.zf)) goto L_12dcabcc;
  /* 12dcab60 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 12dcab66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dcab68 mov al, byte ptr [ecx + 0x12dcb501] */
  AL = (r8((uint32_t)(ECX + 0x12dcb501)));
  /* 12dcab6e jmp dword ptr [eax*4 + 0x12dcb4ed] */
  switch (EAX) {
    case 0: goto L_12dcab80;
    case 1: goto L_12dcabb9;
    case 2: goto L_12dcab75;
    case 3: goto L_12dcabc3;
    case 4: goto L_12dcabcc;
    default: x86_unimpl("switch@0x12dcab6e out of table"); return;
  }
L_12dcab75:;
  /* 12dcab75 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcab78 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 12dcab7b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12dcab7e jmp 0x12dcabcc */
  goto L_12dcabcc;
L_12dcab80:;
  /* 12dcab80 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcab83 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12dcab86 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcab89 jne 0x12dcabab */
  if (!C.zf) goto L_12dcabab;
  /* 12dcab8b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcab8e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12dcab92 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcab95 jne 0x12dcabab */
  if (!C.zf) goto L_12dcabab;
  /* 12dcab97 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcab9a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcab9d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12dcaba0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcaba3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12dcaba6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12dcaba9 jmp 0x12dcabb7 */
  goto L_12dcabb7;
L_12dcabab:;
  /* 12dcabab mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 12dcabb2 jmp 0x12dca940 */
  goto L_12dca940;
L_12dcabb7:;
  /* 12dcabb7 jmp 0x12dcabcc */
  goto L_12dcabcc;
L_12dcabb9:;
  /* 12dcabb9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcabbc or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12dcabbe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dcabc1 jmp 0x12dcabcc */
  goto L_12dcabcc;
L_12dcabc3:;
  /* 12dcabc3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcabc6 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12dcabc9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12dcabcc:;
  /* 12dcabcc jmp 0x12dcb492 */
  goto L_12dcb492;
L_12dcabd1:;
  /* 12dcabd1 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12dcabd5 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 12dcabdb mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 12dcabe1 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcabe4 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 12dcabea cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcabf1 ja 0x12dcb2b7 */
  if ((!C.cf&&!C.zf)) goto L_12dcb2b7;
  /* 12dcabf7 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 12dcabfd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dcabff mov cl, byte ptr [edx + 0x12dcb56c] */
  CL = (r8((uint32_t)(EDX + 0x12dcb56c)));
  /* 12dcac05 jmp dword ptr [ecx*4 + 0x12dcb530] */
  switch (ECX) {
    case 0: goto L_12dcac0c;
    case 1: goto L_12dcaea0;
    case 2: goto L_12dcad30;
    case 3: goto L_12dcafd9;
    case 4: goto L_12dcac9b;
    case 5: goto L_12dcac21;
    case 6: goto L_12dcafab;
    case 7: goto L_12dcaeb0;
    case 8: goto L_12dcae55;
    case 9: goto L_12dcb025;
    case 10: goto L_12dcafcf;
    case 11: goto L_12dcad46;
    case 12: goto L_12dcafc3;
    case 13: goto L_12dcafe5;
    case 14: goto L_12dcb2b7;
    default: x86_unimpl("switch@0x12dcac05 out of table"); return;
  }
L_12dcac0c:;
  /* 12dcac0c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcac0f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 12dcac14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcac16 jne 0x12dcac21 */
  if (!C.zf) goto L_12dcac21;
  /* 12dcac18 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcac1b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12dcac1e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12dcac21:;
  /* 12dcac21 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcac24 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 12dcac2a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dcac2c je 0x12dcac67 */
  if (C.zf) goto L_12dcac67;
  /* 12dcac2e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12dcac31 push eax */
  push32((uint32_t)(EAX));
  /* 12dcac32 call 0x12dcb700 */
  push32(0x12dcac37u); f_12dcb700();
  /* 12dcac37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcac3a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 12dcac3e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 12dcac42 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcac43 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 12dcac49 push edx */
  push32((uint32_t)(EDX));
  /* 12dcac4a call 0x12dcc7e0 */
  push32(0x12dcac4fu); f_12dcc7e0();
  /* 12dcac4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcac52 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12dcac55 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcac59 jge 0x12dcac65 */
  if ((C.sf==C.of)) goto L_12dcac65;
  /* 12dcac5b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_12dcac65:;
  /* 12dcac65 jmp 0x12dcac8d */
  goto L_12dcac8d;
L_12dcac67:;
  /* 12dcac67 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12dcac6a push eax */
  push32((uint32_t)(EAX));
  /* 12dcac6b call 0x12dcb6c0 */
  push32(0x12dcac70u); f_12dcb6c0();
  /* 12dcac70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcac73 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 12dcac7a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 12dcac80 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 12dcac86 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_12dcac8d:;
  /* 12dcac8d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 12dcac93 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12dcac96 jmp 0x12dcb2b7 */
  goto L_12dcb2b7;
L_12dcac9b:;
  /* 12dcac9b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12dcac9e push eax */
  push32((uint32_t)(EAX));
  /* 12dcac9f call 0x12dcb6c0 */
  push32(0x12dcaca4u); f_12dcb6c0();
  /* 12dcaca4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcaca7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 12dcacad cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcacb4 je 0x12dcacc2 */
  if (C.zf) goto L_12dcacc2;
  /* 12dcacb6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12dcacbc cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcacc0 jne 0x12dcacdc */
  if (!C.zf) goto L_12dcacdc;
L_12dcacc2:;
  /* 12dcacc2 mov edx, dword ptr [0x12dddfb0] */
  EDX = (r32((uint32_t)(0x12dddfb0)));
  /* 12dcacc8 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12dcaccb mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dcacce push eax */
  push32((uint32_t)(EAX));
  /* 12dcaccf call 0x12dc6720 */
  push32(0x12dcacd4u); f_12dc6720();
  /* 12dcacd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcacd7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12dcacda jmp 0x12dcad2b */
  goto L_12dcad2b;
L_12dcacdc:;
  /* 12dcacdc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcacdf and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 12dcace5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dcace7 je 0x12dcad0c */
  if (C.zf) goto L_12dcad0c;
  /* 12dcace9 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12dcacef mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12dcacf2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12dcacf5 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12dcacfb movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 12dcacfe shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12dcad00 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12dcad03 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 12dcad0a jmp 0x12dcad2b */
  goto L_12dcad2b;
L_12dcad0c:;
  /* 12dcad0c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12dcad13 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12dcad19 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12dcad1c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12dcad1f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12dcad25 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 12dcad28 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12dcad2b:;
  /* 12dcad2b jmp 0x12dcb2b7 */
  goto L_12dcb2b7;
L_12dcad30:;
  /* 12dcad30 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcad33 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 12dcad39 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dcad3b jne 0x12dcad46 */
  if (!C.zf) goto L_12dcad46;
  /* 12dcad3d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcad40 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12dcad43 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12dcad46:;
  /* 12dcad46 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcad4d jne 0x12dcad5b */
  if (!C.zf) goto L_12dcad5b;
  /* 12dcad4f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 12dcad59 jmp 0x12dcad67 */
  goto L_12dcad67;
L_12dcad5b:;
  /* 12dcad5b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 12dcad61 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_12dcad67:;
  /* 12dcad67 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 12dcad6d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 12dcad73 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12dcad76 push edx */
  push32((uint32_t)(EDX));
  /* 12dcad77 call 0x12dcb6c0 */
  push32(0x12dcad7cu); f_12dcb6c0();
  /* 12dcad7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcad7f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12dcad82 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcad85 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 12dcad8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcad8c je 0x12dcadf6 */
  if (C.zf) goto L_12dcadf6;
  /* 12dcad8e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcad92 jne 0x12dcad9d */
  if (!C.zf) goto L_12dcad9d;
  /* 12dcad94 mov ecx, dword ptr [0x12dddfb4] */
  ECX = (r32((uint32_t)(0x12dddfb4)));
  /* 12dcad9a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12dcad9d:;
  /* 12dcad9d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 12dcada4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dcada7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_12dcadad:;
  /* 12dcadad mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 12dcadb3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 12dcadb9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcadbc mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 12dcadc2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcadc4 je 0x12dcade6 */
  if (C.zf) goto L_12dcade6;
  /* 12dcadc6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 12dcadcc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dcadce mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 12dcadd1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcadd3 je 0x12dcade6 */
  if (C.zf) goto L_12dcade6;
  /* 12dcadd5 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 12dcaddb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcadde mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 12dcade4 jmp 0x12dcadad */
  goto L_12dcadad;
L_12dcade6:;
  /* 12dcade6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 12dcadec sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcadef sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12dcadf1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12dcadf4 jmp 0x12dcae50 */
  goto L_12dcae50;
L_12dcadf6:;
  /* 12dcadf6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcadfa jne 0x12dcae04 */
  if (!C.zf) goto L_12dcae04;
  /* 12dcadfc mov eax, dword ptr [0x12dddfb0] */
  EAX = (r32((uint32_t)(0x12dddfb0)));
  /* 12dcae01 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_12dcae04:;
  /* 12dcae04 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dcae07 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_12dcae0d:;
  /* 12dcae0d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 12dcae13 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 12dcae19 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcae1c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 12dcae22 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dcae24 je 0x12dcae44 */
  if (C.zf) goto L_12dcae44;
  /* 12dcae26 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 12dcae2c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12dcae2f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dcae31 je 0x12dcae44 */
  if (C.zf) goto L_12dcae44;
  /* 12dcae33 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 12dcae39 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcae3c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 12dcae42 jmp 0x12dcae0d */
  goto L_12dcae0d;
L_12dcae44:;
  /* 12dcae44 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 12dcae4a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcae4d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_12dcae50:;
  /* 12dcae50 jmp 0x12dcb2b7 */
  goto L_12dcb2b7;
L_12dcae55:;
  /* 12dcae55 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12dcae58 push edx */
  push32((uint32_t)(EDX));
  /* 12dcae59 call 0x12dcb6c0 */
  push32(0x12dcae5eu); f_12dcb6c0();
  /* 12dcae5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcae61 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 12dcae67 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcae6a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12dcae6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcae6f je 0x12dcae83 */
  if (C.zf) goto L_12dcae83;
  /* 12dcae71 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 12dcae77 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 12dcae7e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 12dcae81 jmp 0x12dcae91 */
  goto L_12dcae91;
L_12dcae83:;
  /* 12dcae83 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 12dcae89 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 12dcae8f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_12dcae91:;
  /* 12dcae91 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 12dcae9b jmp 0x12dcb2b7 */
  goto L_12dcb2b7;
L_12dcaea0:;
  /* 12dcaea0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12dcaea7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 12dcaeaa add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 12dcaead mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_12dcaeb0:;
  /* 12dcaeb0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcaeb3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 12dcaeb5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dcaeb8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 12dcaebe mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12dcaec1 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcaec8 jge 0x12dcaed6 */
  if ((C.sf==C.of)) goto L_12dcaed6;
  /* 12dcaeca mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 12dcaed4 jmp 0x12dcaef2 */
  goto L_12dcaef2;
L_12dcaed6:;
  /* 12dcaed6 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcaedd jne 0x12dcaef2 */
  if (!C.zf) goto L_12dcaef2;
  /* 12dcaedf movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12dcaee3 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcaee6 jne 0x12dcaef2 */
  if (!C.zf) goto L_12dcaef2;
  /* 12dcaee8 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_12dcaef2:;
  /* 12dcaef2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dcaef5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcaef8 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 12dcaefb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dcaefe sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcaf01 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dcaf03 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12dcaf06 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 12dcaf0c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 12dcaf12 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcaf15 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcaf16 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 12dcaf1c push edx */
  push32((uint32_t)(EDX));
  /* 12dcaf1d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12dcaf21 push eax */
  push32((uint32_t)(EAX));
  /* 12dcaf22 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dcaf25 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcaf26 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 12dcaf2c push edx */
  push32((uint32_t)(EDX));
  /* 12dcaf2d call dword ptr [0x12dde3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12dde3a0))), 0x12dcaf33u);
  /* 12dcaf33 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcaf36 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcaf39 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 12dcaf3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcaf40 je 0x12dcaf58 */
  if (C.zf) goto L_12dcaf58;
  /* 12dcaf42 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcaf49 jne 0x12dcaf58 */
  if (!C.zf) goto L_12dcaf58;
  /* 12dcaf4b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dcaf4e push ecx */
  push32((uint32_t)(ECX));
  /* 12dcaf4f call dword ptr [0x12dde3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12dde3ac))), 0x12dcaf55u);
  /* 12dcaf55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dcaf58:;
  /* 12dcaf58 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12dcaf5c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcaf5f jne 0x12dcaf7a */
  if (!C.zf) goto L_12dcaf7a;
  /* 12dcaf61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcaf64 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 12dcaf69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcaf6b jne 0x12dcaf7a */
  if (!C.zf) goto L_12dcaf7a;
  /* 12dcaf6d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dcaf70 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcaf71 call dword ptr [0x12dde3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12dde3a4))), 0x12dcaf77u);
  /* 12dcaf77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dcaf7a:;
  /* 12dcaf7a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dcaf7d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12dcaf80 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcaf83 jne 0x12dcaf97 */
  if (!C.zf) goto L_12dcaf97;
  /* 12dcaf85 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcaf88 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12dcaf8b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12dcaf8e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dcaf91 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcaf94 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12dcaf97:;
  /* 12dcaf97 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dcaf9a push eax */
  push32((uint32_t)(EAX));
  /* 12dcaf9b call 0x12dc6720 */
  push32(0x12dcafa0u); f_12dc6720();
  /* 12dcafa0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcafa3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12dcafa6 jmp 0x12dcb2b7 */
  goto L_12dcb2b7;
L_12dcafab:;
  /* 12dcafab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcafae or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 12dcafb1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12dcafb4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 12dcafbe jmp 0x12dcb045 */
  goto L_12dcb045;
L_12dcafc3:;
  /* 12dcafc3 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 12dcafcd jmp 0x12dcb045 */
  goto L_12dcb045;
L_12dcafcf:;
  /* 12dcafcf mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_12dcafd9:;
  /* 12dcafd9 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 12dcafe3 jmp 0x12dcafef */
  goto L_12dcafef;
L_12dcafe5:;
  /* 12dcafe5 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_12dcafef:;
  /* 12dcafef mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 12dcaff9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcaffc and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 12dcb002 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dcb004 je 0x12dcb023 */
  if (C.zf) goto L_12dcb023;
  /* 12dcb006 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 12dcb00d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 12dcb013 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcb016 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 12dcb01c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_12dcb023:;
  /* 12dcb023 jmp 0x12dcb045 */
  goto L_12dcb045;
L_12dcb025:;
  /* 12dcb025 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 12dcb02f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcb032 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 12dcb038 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dcb03a je 0x12dcb045 */
  if (C.zf) goto L_12dcb045;
  /* 12dcb03c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcb03f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12dcb042 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12dcb045:;
  /* 12dcb045 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcb048 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12dcb04d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcb04f je 0x12dcb06e */
  if (C.zf) goto L_12dcb06e;
  /* 12dcb051 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12dcb054 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcb055 call 0x12dcb6e0 */
  push32(0x12dcb05au); f_12dcb6e0();
  /* 12dcb05a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcb05d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12dcb063 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 12dcb069 jmp 0x12dcb0ff */
  goto L_12dcb0ff;
L_12dcb06e:;
  /* 12dcb06e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcb071 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 12dcb074 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dcb076 je 0x12dcb0c0 */
  if (C.zf) goto L_12dcb0c0;
  /* 12dcb078 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcb07b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12dcb07e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcb080 je 0x12dcb0a0 */
  if (C.zf) goto L_12dcb0a0;
  /* 12dcb082 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12dcb085 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcb086 call 0x12dcb6c0 */
  push32(0x12dcb08bu); f_12dcb6c0();
  /* 12dcb08b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcb08e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 12dcb091 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12dcb092 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12dcb098 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 12dcb09e jmp 0x12dcb0be */
  goto L_12dcb0be;
L_12dcb0a0:;
  /* 12dcb0a0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12dcb0a3 push edx */
  push32((uint32_t)(EDX));
  /* 12dcb0a4 call 0x12dcb6c0 */
  push32(0x12dcb0a9u); f_12dcb6c0();
  /* 12dcb0a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcb0ac and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dcb0b1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12dcb0b2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12dcb0b8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_12dcb0be:;
  /* 12dcb0be jmp 0x12dcb0ff */
  goto L_12dcb0ff;
L_12dcb0c0:;
  /* 12dcb0c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcb0c3 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12dcb0c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcb0c8 je 0x12dcb0e5 */
  if (C.zf) goto L_12dcb0e5;
  /* 12dcb0ca lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12dcb0cd push ecx */
  push32((uint32_t)(ECX));
  /* 12dcb0ce call 0x12dcb6c0 */
  push32(0x12dcb0d3u); f_12dcb6c0();
  /* 12dcb0d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcb0d6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12dcb0d7 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12dcb0dd mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 12dcb0e3 jmp 0x12dcb0ff */
  goto L_12dcb0ff;
L_12dcb0e5:;
  /* 12dcb0e5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12dcb0e8 push edx */
  push32((uint32_t)(EDX));
  /* 12dcb0e9 call 0x12dcb6c0 */
  push32(0x12dcb0eeu); f_12dcb6c0();
  /* 12dcb0ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcb0f1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dcb0f3 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12dcb0f9 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_12dcb0ff:;
  /* 12dcb0ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcb102 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 12dcb105 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dcb107 je 0x12dcb147 */
  if (C.zf) goto L_12dcb147;
  /* 12dcb109 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcb110 jg 0x12dcb147 */
  if ((!C.zf&&C.sf==C.of)) goto L_12dcb147;
  /* 12dcb112 jl 0x12dcb11d */
  if ((C.sf!=C.of)) goto L_12dcb11d;
  /* 12dcb114 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcb11b jae 0x12dcb147 */
  if (!C.cf) goto L_12dcb147;
L_12dcb11d:;
  /* 12dcb11d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 12dcb123 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12dcb125 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 12dcb12b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcb12e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12dcb130 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12dcb136 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 12dcb13c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcb13f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12dcb142 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12dcb145 jmp 0x12dcb15f */
  goto L_12dcb15f;
L_12dcb147:;
  /* 12dcb147 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 12dcb14d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12dcb153 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 12dcb159 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_12dcb15f:;
  /* 12dcb15f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcb162 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12dcb168 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dcb16a jne 0x12dcb187 */
  if (!C.zf) goto L_12dcb187;
  /* 12dcb16c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12dcb172 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 12dcb178 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 12dcb17b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12dcb181 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_12dcb187:;
  /* 12dcb187 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcb18e jge 0x12dcb19c */
  if ((C.sf==C.of)) goto L_12dcb19c;
  /* 12dcb190 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 12dcb19a jmp 0x12dcb1a5 */
  goto L_12dcb1a5;
L_12dcb19c:;
  /* 12dcb19c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcb19f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 12dcb1a2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12dcb1a5:;
  /* 12dcb1a5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12dcb1ab or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 12dcb1b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcb1b3 jne 0x12dcb1bc */
  if (!C.zf) goto L_12dcb1bc;
  /* 12dcb1b5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12dcb1bc:;
  /* 12dcb1bc lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 12dcb1bf mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12dcb1c2:;
  /* 12dcb1c2 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 12dcb1c8 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 12dcb1ce sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcb1d1 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 12dcb1d7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dcb1d9 jg 0x12dcb1ef */
  if ((!C.zf&&C.sf==C.of)) goto L_12dcb1ef;
  /* 12dcb1db mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12dcb1e1 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 12dcb1e7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dcb1e9 je 0x12dcb270 */
  if (C.zf) goto L_12dcb270;
L_12dcb1ef:;
  /* 12dcb1ef mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 12dcb1f5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12dcb1f6 push edx */
  push32((uint32_t)(EDX));
  /* 12dcb1f7 push eax */
  push32((uint32_t)(EAX));
  /* 12dcb1f8 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 12dcb1fe push edx */
  push32((uint32_t)(EDX));
  /* 12dcb1ff mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12dcb205 push eax */
  push32((uint32_t)(EAX));
  /* 12dcb206 call 0x12dca580 */
  push32(0x12dcb20bu); f_12dca580();
  /* 12dcb20b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcb20e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 12dcb214 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 12dcb21a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12dcb21b push edx */
  push32((uint32_t)(EDX));
  /* 12dcb21c push eax */
  push32((uint32_t)(EAX));
  /* 12dcb21d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 12dcb223 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcb224 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12dcb22a push edx */
  push32((uint32_t)(EDX));
  /* 12dcb22b call 0x12dca510 */
  push32(0x12dcb230u); f_12dca510();
  /* 12dcb230 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12dcb236 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 12dcb23c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcb243 jle 0x12dcb257 */
  if ((C.zf||C.sf!=C.of)) goto L_12dcb257;
  /* 12dcb245 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 12dcb24b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcb251 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_12dcb257:;
  /* 12dcb257 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dcb25a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 12dcb260 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 12dcb262 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dcb265 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcb268 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12dcb26b jmp 0x12dcb1c2 */
  goto L_12dcb1c2;
L_12dcb270:;
  /* 12dcb270 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 12dcb273 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcb276 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12dcb279 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dcb27c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcb27f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12dcb282 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcb285 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 12dcb28a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcb28c je 0x12dcb2b7 */
  if (C.zf) goto L_12dcb2b7;
  /* 12dcb28e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dcb291 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12dcb294 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcb297 jne 0x12dcb29f */
  if (!C.zf) goto L_12dcb29f;
  /* 12dcb299 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcb29d jne 0x12dcb2b7 */
  if (!C.zf) goto L_12dcb2b7;
L_12dcb29f:;
  /* 12dcb29f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dcb2a2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcb2a5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12dcb2a8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dcb2ab mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 12dcb2ae mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dcb2b1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcb2b4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_12dcb2b7:;
  /* 12dcb2b7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcb2be jne 0x12dcb492 */
  if (!C.zf) goto L_12dcb492;
  /* 12dcb2c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcb2c7 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12dcb2ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcb2cc je 0x12dcb31d */
  if (C.zf) goto L_12dcb31d;
  /* 12dcb2ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcb2d1 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 12dcb2d7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dcb2d9 je 0x12dcb2eb */
  if (C.zf) goto L_12dcb2eb;
  /* 12dcb2db mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 12dcb2e2 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12dcb2e9 jmp 0x12dcb31d */
  goto L_12dcb31d;
L_12dcb2eb:;
  /* 12dcb2eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcb2ee and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12dcb2f1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dcb2f3 je 0x12dcb305 */
  if (C.zf) goto L_12dcb305;
  /* 12dcb2f5 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 12dcb2fc mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12dcb303 jmp 0x12dcb31d */
  goto L_12dcb31d;
L_12dcb305:;
  /* 12dcb305 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcb308 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 12dcb30b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcb30d je 0x12dcb31d */
  if (C.zf) goto L_12dcb31d;
  /* 12dcb30f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 12dcb316 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_12dcb31d:;
  /* 12dcb31d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 12dcb323 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcb326 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcb329 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 12dcb32f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcb332 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 12dcb335 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dcb337 jne 0x12dcb355 */
  if (!C.zf) goto L_12dcb355;
  /* 12dcb339 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12dcb33f push eax */
  push32((uint32_t)(EAX));
  /* 12dcb340 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcb343 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcb344 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 12dcb34a push edx */
  push32((uint32_t)(EDX));
  /* 12dcb34b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12dcb34d call 0x12dcb630 */
  push32(0x12dcb352u); f_12dcb630();
  /* 12dcb352 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dcb355:;
  /* 12dcb355 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12dcb35b push eax */
  push32((uint32_t)(EAX));
  /* 12dcb35c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcb35f push ecx */
  push32((uint32_t)(ECX));
  /* 12dcb360 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dcb363 push edx */
  push32((uint32_t)(EDX));
  /* 12dcb364 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 12dcb36a push eax */
  push32((uint32_t)(EAX));
  /* 12dcb36b call 0x12dcb670 */
  push32(0x12dcb370u); f_12dcb670();
  /* 12dcb370 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcb373 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcb376 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12dcb379 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dcb37b je 0x12dcb3a3 */
  if (C.zf) goto L_12dcb3a3;
  /* 12dcb37d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcb380 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12dcb383 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dcb385 jne 0x12dcb3a3 */
  if (!C.zf) goto L_12dcb3a3;
  /* 12dcb387 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12dcb38d push eax */
  push32((uint32_t)(EAX));
  /* 12dcb38e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcb391 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcb392 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 12dcb398 push edx */
  push32((uint32_t)(EDX));
  /* 12dcb399 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12dcb39b call 0x12dcb630 */
  push32(0x12dcb3a0u); f_12dcb630();
  /* 12dcb3a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dcb3a3:;
  /* 12dcb3a3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcb3a7 je 0x12dcb451 */
  if (C.zf) goto L_12dcb451;
  /* 12dcb3ad cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcb3b1 jle 0x12dcb451 */
  if ((C.zf||C.sf!=C.of)) goto L_12dcb451;
  /* 12dcb3b7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dcb3ba mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 12dcb3c0 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dcb3c3 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_12dcb3c9:;
  /* 12dcb3c9 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 12dcb3cf mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 12dcb3d5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcb3d8 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 12dcb3de test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dcb3e0 je 0x12dcb44f */
  if (C.zf) goto L_12dcb44f;
  /* 12dcb3e2 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 12dcb3e8 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12dcb3eb mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 12dcb3f2 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 12dcb3f9 push eax */
  push32((uint32_t)(EAX));
  /* 12dcb3fa lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 12dcb400 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcb401 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 12dcb407 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcb40a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 12dcb410 call 0x12dcc7e0 */
  push32(0x12dcb415u); f_12dcc7e0();
  /* 12dcb415 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcb418 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 12dcb41e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcb425 jg 0x12dcb429 */
  if ((!C.zf&&C.sf==C.of)) goto L_12dcb429;
  /* 12dcb427 jmp 0x12dcb44f */
  goto L_12dcb44f;
L_12dcb429:;
  /* 12dcb429 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12dcb42f push eax */
  push32((uint32_t)(EAX));
  /* 12dcb430 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcb433 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcb434 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 12dcb43a push edx */
  push32((uint32_t)(EDX));
  /* 12dcb43b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 12dcb441 push eax */
  push32((uint32_t)(EAX));
  /* 12dcb442 call 0x12dcb670 */
  push32(0x12dcb447u); f_12dcb670();
  /* 12dcb447 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcb44a jmp 0x12dcb3c9 */
  goto L_12dcb3c9;
L_12dcb44f:;
  /* 12dcb44f jmp 0x12dcb46c */
  goto L_12dcb46c;
L_12dcb451:;
  /* 12dcb451 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 12dcb457 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcb458 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcb45b push edx */
  push32((uint32_t)(EDX));
  /* 12dcb45c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dcb45f push eax */
  push32((uint32_t)(EAX));
  /* 12dcb460 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dcb463 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcb464 call 0x12dcb670 */
  push32(0x12dcb469u); f_12dcb670();
  /* 12dcb469 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dcb46c:;
  /* 12dcb46c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcb46f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12dcb472 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dcb474 je 0x12dcb492 */
  if (C.zf) goto L_12dcb492;
  /* 12dcb476 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12dcb47c push eax */
  push32((uint32_t)(EAX));
  /* 12dcb47d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcb480 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcb481 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 12dcb487 push edx */
  push32((uint32_t)(EDX));
  /* 12dcb488 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12dcb48a call 0x12dcb630 */
  push32(0x12dcb48fu); f_12dcb630();
  /* 12dcb48f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dcb492:;
  /* 12dcb492 jmp 0x12dca8a4 */
  goto L_12dca8a4;
L_12dcb497:;
  /* 12dcb497 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 12dcb49d pop edi */
  EDI = (pop32());
  /* 12dcb49e pop esi */
  ESI = (pop32());
  /* 12dcb49f pop ebx */
  EBX = (pop32());
  /* 12dcb4a0 mov esp, ebp */
  ESP = (EBP);
  /* 12dcb4a2 pop ebp */
  EBP = (pop32());
  /* 12dcb4a3 ret  */
  ESPCHK(0x12dca880u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b5b0 @ 0x12dcb5b0 (119 bytes, 44 insns) */
void f_12dcb5b0(void) {
  FTRACE(0x12dcb5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcb5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcb5b1 mov ebp, esp */
  EBP = (ESP);
  /* 12dcb5b3 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcb5b4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcb5b7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12dcb5ba sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcb5bd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcb5c0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12dcb5c3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcb5c6 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcb5ca jl 0x12dcb5f2 */
  if ((C.sf!=C.of)) goto L_12dcb5f2;
  /* 12dcb5cc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcb5cf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dcb5d1 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12dcb5d4 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12dcb5d6 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 12dcb5da and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12dcb5e0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12dcb5e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcb5e6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12dcb5e8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcb5eb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcb5ee mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12dcb5f0 jmp 0x12dcb605 */
  goto L_12dcb605;
L_12dcb5f2:;
  /* 12dcb5f2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcb5f5 push edx */
  push32((uint32_t)(EDX));
  /* 12dcb5f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcb5f9 push eax */
  push32((uint32_t)(EAX));
  /* 12dcb5fa call 0x12dca600 */
  push32(0x12dcb5ffu); f_12dca600();
  /* 12dcb5ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcb602 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12dcb605:;
  /* 12dcb605 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcb609 jne 0x12dcb616 */
  if (!C.zf) goto L_12dcb616;
  /* 12dcb60b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dcb60e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12dcb614 jmp 0x12dcb623 */
  goto L_12dcb623;
L_12dcb616:;
  /* 12dcb616 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dcb619 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12dcb61b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcb61e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dcb621 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12dcb623:;
  /* 12dcb623 mov esp, ebp */
  ESP = (EBP);
  /* 12dcb625 pop ebp */
  EBP = (pop32());
  /* 12dcb626 ret  */
  ESPCHK(0x12dcb5b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b630 @ 0x12dcb630 (53 bytes, 23 insns) */
void f_12dcb630(void) {
  FTRACE(0x12dcb630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcb630 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcb631 mov ebp, esp */
  EBP = (ESP);
L_12dcb633:;
  /* 12dcb633 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcb636 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcb639 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcb63c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12dcb63f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcb641 jle 0x12dcb663 */
  if ((C.zf||C.sf!=C.of)) goto L_12dcb663;
  /* 12dcb643 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dcb646 push edx */
  push32((uint32_t)(EDX));
  /* 12dcb647 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dcb64a push eax */
  push32((uint32_t)(EAX));
  /* 12dcb64b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcb64e push ecx */
  push32((uint32_t)(ECX));
  /* 12dcb64f call 0x12dcb5b0 */
  push32(0x12dcb654u); f_12dcb5b0();
  /* 12dcb654 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcb657 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dcb65a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcb65d jne 0x12dcb661 */
  if (!C.zf) goto L_12dcb661;
  /* 12dcb65f jmp 0x12dcb663 */
  goto L_12dcb663;
L_12dcb661:;
  /* 12dcb661 jmp 0x12dcb633 */
  goto L_12dcb633;
L_12dcb663:;
  /* 12dcb663 pop ebp */
  EBP = (pop32());
  /* 12dcb664 ret  */
  ESPCHK(0x12dcb630u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b670 @ 0x12dcb670 (74 bytes, 31 insns) */
void f_12dcb670(void) {
  FTRACE(0x12dcb670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcb670 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcb671 mov ebp, esp */
  EBP = (ESP);
  /* 12dcb673 push ecx */
  push32((uint32_t)(ECX));
L_12dcb674:;
  /* 12dcb674 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcb677 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcb67a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcb67d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12dcb680 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcb682 jle 0x12dcb6b6 */
  if ((C.zf||C.sf!=C.of)) goto L_12dcb6b6;
  /* 12dcb684 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dcb687 push edx */
  push32((uint32_t)(EDX));
  /* 12dcb688 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dcb68b push eax */
  push32((uint32_t)(EAX));
  /* 12dcb68c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcb68f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12dcb692 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12dcb695 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcb698 push eax */
  push32((uint32_t)(EAX));
  /* 12dcb699 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcb69c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcb69f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12dcb6a2 call 0x12dcb5b0 */
  push32(0x12dcb6a7u); f_12dcb5b0();
  /* 12dcb6a7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcb6aa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dcb6ad cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcb6b0 jne 0x12dcb6b4 */
  if (!C.zf) goto L_12dcb6b4;
  /* 12dcb6b2 jmp 0x12dcb6b6 */
  goto L_12dcb6b6;
L_12dcb6b4:;
  /* 12dcb6b4 jmp 0x12dcb674 */
  goto L_12dcb674;
L_12dcb6b6:;
  /* 12dcb6b6 mov esp, ebp */
  ESP = (EBP);
  /* 12dcb6b8 pop ebp */
  EBP = (pop32());
  /* 12dcb6b9 ret  */
  ESPCHK(0x12dcb670u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b6c0 @ 0x12dcb6c0 (26 bytes, 12 insns) */
void f_12dcb6c0(void) {
  FTRACE(0x12dcb6c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcb6c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcb6c1 mov ebp, esp */
  EBP = (ESP);
  /* 12dcb6c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcb6c6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dcb6c8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcb6cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcb6ce mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12dcb6d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcb6d3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dcb6d5 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12dcb6d8 pop ebp */
  EBP = (pop32());
  /* 12dcb6d9 ret  */
  ESPCHK(0x12dcb6c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b6e0 @ 0x12dcb6e0 (31 bytes, 14 insns) */
void f_12dcb6e0(void) {
  FTRACE(0x12dcb6e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcb6e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcb6e1 mov ebp, esp */
  EBP = (ESP);
  /* 12dcb6e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcb6e6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dcb6e8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcb6eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcb6ee mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12dcb6f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcb6f3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dcb6f5 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcb6f8 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12dcb6fa mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12dcb6fd pop ebp */
  EBP = (pop32());
  /* 12dcb6fe ret  */
  ESPCHK(0x12dcb6e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b700 @ 0x12dcb700 (27 bytes, 12 insns) */
void f_12dcb700(void) {
  FTRACE(0x12dcb700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcb700 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcb701 mov ebp, esp */
  EBP = (ESP);
  /* 12dcb703 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcb706 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dcb708 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcb70b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcb70e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12dcb710 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcb713 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dcb715 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 12dcb719 pop ebp */
  EBP = (pop32());
  /* 12dcb71a ret  */
  ESPCHK(0x12dcb700u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x12dcb720 (145 bytes, 42 insns) */
void f_12dcb720(void) {
  FTRACE(0x12dcb720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcb720 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcb721 mov ebp, esp */
  EBP = (ESP);
  /* 12dcb723 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcb724 call 0x12dcb7d0 */
  push32(0x12dcb729u); f_12dcb7d0();
  /* 12dcb729 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcb72c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12dcb72e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12dcb735 jmp 0x12dcb740 */
  goto L_12dcb740;
L_12dcb737:;
  /* 12dcb737 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcb73a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcb73d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12dcb740:;
  /* 12dcb740 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcb744 jae 0x12dcb76a */
  if (!C.cf) goto L_12dcb76a;
  /* 12dcb746 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcb749 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcb74c cmp ecx, dword ptr [eax*8 + 0x12dddfb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12dddfb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcb753 jne 0x12dcb768 */
  if (!C.zf) goto L_12dcb768;
  /* 12dcb755 call 0x12dcb7c0 */
  push32(0x12dcb75au); f_12dcb7c0();
  /* 12dcb75a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcb75d mov ecx, dword ptr [edx*8 + 0x12dddfbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x12dddfbc)));
  /* 12dcb764 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12dcb766 jmp 0x12dcb7ad */
  goto L_12dcb7ad;
L_12dcb768:;
  /* 12dcb768 jmp 0x12dcb737 */
  goto L_12dcb737;
L_12dcb76a:;
  /* 12dcb76a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcb76e jb 0x12dcb783 */
  if (C.cf) goto L_12dcb783;
  /* 12dcb770 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcb774 ja 0x12dcb783 */
  if ((!C.cf&&!C.zf)) goto L_12dcb783;
  /* 12dcb776 call 0x12dcb7c0 */
  push32(0x12dcb77bu); f_12dcb7c0();
  /* 12dcb77b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 12dcb781 jmp 0x12dcb7ad */
  goto L_12dcb7ad;
L_12dcb783:;
  /* 12dcb783 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcb78a jb 0x12dcb7a2 */
  if (C.cf) goto L_12dcb7a2;
  /* 12dcb78c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcb793 ja 0x12dcb7a2 */
  if ((!C.cf&&!C.zf)) goto L_12dcb7a2;
  /* 12dcb795 call 0x12dcb7c0 */
  push32(0x12dcb79au); f_12dcb7c0();
  /* 12dcb79a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 12dcb7a0 jmp 0x12dcb7ad */
  goto L_12dcb7ad;
L_12dcb7a2:;
  /* 12dcb7a2 call 0x12dcb7c0 */
  push32(0x12dcb7a7u); f_12dcb7c0();
  /* 12dcb7a7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_12dcb7ad:;
  /* 12dcb7ad mov esp, ebp */
  ESP = (EBP);
  /* 12dcb7af pop ebp */
  EBP = (pop32());
  /* 12dcb7b0 ret  */
  ESPCHK(0x12dcb720u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b7c0 @ 0x12dcb7c0 (13 bytes, 6 insns) */
void f_12dcb7c0(void) {
  FTRACE(0x12dcb7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcb7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcb7c1 mov ebp, esp */
  EBP = (ESP);
  /* 12dcb7c3 call 0x12dc3330 */
  push32(0x12dcb7c8u); f_12dc3330();
  /* 12dcb7c8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcb7cb pop ebp */
  EBP = (pop32());
  /* 12dcb7cc ret  */
  ESPCHK(0x12dcb7c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b7d0 @ 0x12dcb7d0 (13 bytes, 6 insns) */
void f_12dcb7d0(void) {
  FTRACE(0x12dcb7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcb7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcb7d1 mov ebp, esp */
  EBP = (ESP);
  /* 12dcb7d3 call 0x12dc3330 */
  push32(0x12dcb7d8u); f_12dc3330();
  /* 12dcb7d8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcb7db pop ebp */
  EBP = (pop32());
  /* 12dcb7dc ret  */
  ESPCHK(0x12dcb7d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b7e0 @ 0x12dcb7e0 (664 bytes, 262 insns) [15 switch table(s)] */
void f_12dcb7e0(void) {
  FTRACE(0x12dcb7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcb7e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcb7e1 mov ebp, esp */
  EBP = (ESP);
  /* 12dcb7e3 push edi */
  push32((uint32_t)(EDI));
  /* 12dcb7e4 push esi */
  push32((uint32_t)(ESI));
  /* 12dcb7e5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcb7e8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dcb7eb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcb7ee mov eax, ecx */
  EAX = (ECX);
  /* 12dcb7f0 mov edx, ecx */
  EDX = (ECX);
  /* 12dcb7f2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcb7f4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcb7f6 jbe 0x12dcb800 */
  if ((C.cf||C.zf)) goto L_12dcb800;
  /* 12dcb7f8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcb7fa jb 0x12dcb978 */
  if (C.cf) goto L_12dcb978;
L_12dcb800:;
  /* 12dcb800 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12dcb806 jne 0x12dcb81c */
  if (!C.zf) goto L_12dcb81c;
  /* 12dcb808 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12dcb80b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12dcb80e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcb811 jb 0x12dcb83c */
  if (C.cf) goto L_12dcb83c;
  /* 12dcb813 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12dcb815 jmp dword ptr [edx*4 + 0x12dcb928] */
  switch (EDX) {
    case 0: goto L_12dcb938;
    case 1: goto L_12dcb940;
    case 2: goto L_12dcb94c;
    case 3: goto L_12dcb960;
    default: x86_unimpl("switch@0x12dcb815 out of table"); return;
  }
L_12dcb81c:;
  /* 12dcb81c mov eax, edi */
  EAX = (EDI);
  /* 12dcb81e mov edx, 3 */
  EDX = (0x3u);
  /* 12dcb823 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcb826 jb 0x12dcb834 */
  if (C.cf) goto L_12dcb834;
  /* 12dcb828 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12dcb82b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcb82d jmp dword ptr [eax*4 + 0x12dcb840] */
  switch (EAX) {
    case 1: goto L_12dcb850;
    case 2: goto L_12dcb87c;
    case 3: goto L_12dcb8a0;
    default: x86_unimpl("switch@0x12dcb82d out of table"); return;
  }
L_12dcb834:;
  /* 12dcb834 jmp dword ptr [ecx*4 + 0x12dcb938] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x12dcb938)))); return;
  /* 12dcb83b nop  */
  /* nop */
L_12dcb83c:;
  /* 12dcb83c jmp dword ptr [ecx*4 + 0x12dcb8bc] */
  switch (ECX) {
    case 0: goto L_12dcb91f;
    case 1: goto L_12dcb90c;
    case 2: goto L_12dcb904;
    case 3: goto L_12dcb8fc;
    case 4: goto L_12dcb8f4;
    case 5: goto L_12dcb8ec;
    case 6: goto L_12dcb8e4;
    case 7: goto L_12dcb8dc;
    default: x86_unimpl("switch@0x12dcb83c out of table"); return;
  }
  /* 12dcb843 nop  */
  /* nop */
L_12dcb850:;
  /* 12dcb850 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12dcb852 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12dcb854 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12dcb856 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12dcb859 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12dcb85c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12dcb85f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12dcb862 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12dcb865 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcb868 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcb86b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcb86e jb 0x12dcb83c */
  if (C.cf) goto L_12dcb83c;
  /* 12dcb870 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12dcb872 jmp dword ptr [edx*4 + 0x12dcb928] */
  switch (EDX) {
    case 0: goto L_12dcb938;
    case 1: goto L_12dcb940;
    case 2: goto L_12dcb94c;
    case 3: goto L_12dcb960;
    default: x86_unimpl("switch@0x12dcb872 out of table"); return;
  }
  /* 12dcb879 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12dcb87c:;
  /* 12dcb87c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12dcb87e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12dcb880 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12dcb882 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12dcb885 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12dcb888 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12dcb88b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcb88e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcb891 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcb894 jb 0x12dcb83c */
  if (C.cf) goto L_12dcb83c;
  /* 12dcb896 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12dcb898 jmp dword ptr [edx*4 + 0x12dcb928] */
  switch (EDX) {
    case 0: goto L_12dcb938;
    case 1: goto L_12dcb940;
    case 2: goto L_12dcb94c;
    case 3: goto L_12dcb960;
    default: x86_unimpl("switch@0x12dcb898 out of table"); return;
  }
  /* 12dcb89f nop  */
  /* nop */
L_12dcb8a0:;
  /* 12dcb8a0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12dcb8a2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12dcb8a4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12dcb8a6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12dcb8a7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12dcb8aa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12dcb8ab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcb8ae jb 0x12dcb83c */
  if (C.cf) goto L_12dcb83c;
  /* 12dcb8b0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12dcb8b2 jmp dword ptr [edx*4 + 0x12dcb928] */
  switch (EDX) {
    case 0: goto L_12dcb938;
    case 1: goto L_12dcb940;
    case 2: goto L_12dcb94c;
    case 3: goto L_12dcb960;
    default: x86_unimpl("switch@0x12dcb8b2 out of table"); return;
  }
  /* 12dcb8b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12dcb8dc:;
  /* 12dcb8dc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 12dcb8e0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_12dcb8e4:;
  /* 12dcb8e4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 12dcb8e8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_12dcb8ec:;
  /* 12dcb8ec mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 12dcb8f0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_12dcb8f4:;
  /* 12dcb8f4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 12dcb8f8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_12dcb8fc:;
  /* 12dcb8fc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 12dcb900 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_12dcb904:;
  /* 12dcb904 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 12dcb908 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_12dcb90c:;
  /* 12dcb90c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 12dcb910 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 12dcb914 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12dcb91b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcb91d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12dcb91f:;
  /* 12dcb91f jmp dword ptr [edx*4 + 0x12dcb928] */
  switch (EDX) {
    case 0: goto L_12dcb938;
    case 1: goto L_12dcb940;
    case 2: goto L_12dcb94c;
    case 3: goto L_12dcb960;
    default: x86_unimpl("switch@0x12dcb91f out of table"); return;
  }
  /* 12dcb926 mov edi, edi */
  EDI = (EDI);
L_12dcb938:;
  /* 12dcb938 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcb93b pop esi */
  ESI = (pop32());
  /* 12dcb93c pop edi */
  EDI = (pop32());
  /* 12dcb93d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12dcb93e ret  */
  ESPCHK(0x12dcb7e0u, _esp0);
  ESP += 4; return;
  /* 12dcb93f nop  */
  /* nop */
L_12dcb940:;
  /* 12dcb940 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12dcb942 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12dcb944 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcb947 pop esi */
  ESI = (pop32());
  /* 12dcb948 pop edi */
  EDI = (pop32());
  /* 12dcb949 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12dcb94a ret  */
  ESPCHK(0x12dcb7e0u, _esp0);
  ESP += 4; return;
  /* 12dcb94b nop  */
  /* nop */
L_12dcb94c:;
  /* 12dcb94c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12dcb94e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12dcb950 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12dcb953 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12dcb956 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcb959 pop esi */
  ESI = (pop32());
  /* 12dcb95a pop edi */
  EDI = (pop32());
  /* 12dcb95b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12dcb95c ret  */
  ESPCHK(0x12dcb7e0u, _esp0);
  ESP += 4; return;
  /* 12dcb95d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12dcb960:;
  /* 12dcb960 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12dcb962 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12dcb964 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12dcb967 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12dcb96a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12dcb96d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12dcb970 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcb973 pop esi */
  ESI = (pop32());
  /* 12dcb974 pop edi */
  EDI = (pop32());
  /* 12dcb975 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12dcb976 ret  */
  ESPCHK(0x12dcb7e0u, _esp0);
  ESP += 4; return;
  /* 12dcb977 nop  */
  /* nop */
L_12dcb978:;
  /* 12dcb978 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 12dcb97c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 12dcb980 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12dcb986 jne 0x12dcb9ac */
  if (!C.zf) goto L_12dcb9ac;
  /* 12dcb988 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12dcb98b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12dcb98e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcb991 jb 0x12dcb9a0 */
  if (C.cf) goto L_12dcb9a0;
  /* 12dcb993 std  */
  C.df=1;
  /* 12dcb994 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12dcb996 cld  */
  C.df=0;
  /* 12dcb997 jmp dword ptr [edx*4 + 0x12dcbac0] */
  switch (EDX) {
    case 0: goto L_12dcbad0;
    case 1: goto L_12dcbad8;
    case 2: goto L_12dcbae8;
    case 3: goto L_12dcbafc;
    default: x86_unimpl("switch@0x12dcb997 out of table"); return;
  }
  /* 12dcb99e mov edi, edi */
  EDI = (EDI);
L_12dcb9a0:;
  /* 12dcb9a0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12dcb9a2 jmp dword ptr [ecx*4 + 0x12dcba70] */
  switch (ECX) {
    case 0: goto L_12dcbab7;
    default: x86_unimpl("switch@0x12dcb9a2 out of table"); return;
  }
  /* 12dcb9a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12dcb9ac:;
  /* 12dcb9ac mov eax, edi */
  EAX = (EDI);
  /* 12dcb9ae mov edx, 3 */
  EDX = (0x3u);
  /* 12dcb9b3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcb9b6 jb 0x12dcb9c4 */
  if (C.cf) goto L_12dcb9c4;
  /* 12dcb9b8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12dcb9bb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcb9bd jmp dword ptr [eax*4 + 0x12dcb9c8] */
  switch (EAX) {
    case 1: goto L_12dcb9d8;
    case 2: goto L_12dcb9f8;
    case 3: goto L_12dcba20;
    default: x86_unimpl("switch@0x12dcb9bd out of table"); return;
  }
L_12dcb9c4:;
  /* 12dcb9c4 jmp dword ptr [ecx*4 + 0x12dcbac0] */
  switch (ECX) {
    case 0: goto L_12dcbad0;
    case 1: goto L_12dcbad8;
    case 2: goto L_12dcbae8;
    case 3: goto L_12dcbafc;
    default: x86_unimpl("switch@0x12dcb9c4 out of table"); return;
  }
  /* 12dcb9cb nop  */
  /* nop */
L_12dcb9d8:;
  /* 12dcb9d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12dcb9db and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12dcb9dd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12dcb9e0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 12dcb9e1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12dcb9e4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 12dcb9e5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcb9e8 jb 0x12dcb9a0 */
  if (C.cf) goto L_12dcb9a0;
  /* 12dcb9ea std  */
  C.df=1;
  /* 12dcb9eb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12dcb9ed cld  */
  C.df=0;
  /* 12dcb9ee jmp dword ptr [edx*4 + 0x12dcbac0] */
  switch (EDX) {
    case 0: goto L_12dcbad0;
    case 1: goto L_12dcbad8;
    case 2: goto L_12dcbae8;
    case 3: goto L_12dcbafc;
    default: x86_unimpl("switch@0x12dcb9ee out of table"); return;
  }
  /* 12dcb9f5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12dcb9f8:;
  /* 12dcb9f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12dcb9fb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12dcb9fd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12dcba00 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12dcba03 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12dcba06 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12dcba09 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcba0c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcba0f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcba12 jb 0x12dcb9a0 */
  if (C.cf) goto L_12dcb9a0;
L_12dcba14:;
  /* 12dcba14 std  */
  C.df=1;
  /* 12dcba15 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12dcba17 cld  */
  C.df=0;
  /* 12dcba18 jmp dword ptr [edx*4 + 0x12dcbac0] */
  switch (EDX) {
    case 0: goto L_12dcbad0;
    case 1: goto L_12dcbad8;
    case 2: goto L_12dcbae8;
    case 3: goto L_12dcbafc;
    default: x86_unimpl("switch@0x12dcba18 out of table"); return;
  }
  /* 12dcba1f nop  */
  /* nop */
L_12dcba20:;
  /* 12dcba20 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12dcba23 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12dcba25 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12dcba28 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12dcba2b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12dcba2e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12dcba31 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12dcba34 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12dcba37 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcba3a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcba3d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcba40 jb 0x12dcb9a0 */
  if (C.cf) goto L_12dcb9a0;
  /* 12dcba46 std  */
  C.df=1;
  /* 12dcba47 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12dcba49 cld  */
  C.df=0;
  /* 12dcba4a jmp dword ptr [edx*4 + 0x12dcbac0] */
  switch (EDX) {
    case 0: goto L_12dcbad0;
    case 1: goto L_12dcbad8;
    case 2: goto L_12dcbae8;
    case 3: goto L_12dcbafc;
    default: x86_unimpl("switch@0x12dcba4a out of table"); return;
  }
  /* 12dcba51 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 12dcba54 je 0x12dcba10 */
  if (C.zf) goto L_12dcba10;
  /* 12dcba56 fcom qword ptr [edx] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(EDX)));
  /* 12dcba58 jl 0x12dcba14 */
  if ((C.sf!=C.of)) goto L_12dcba14;
  /* 12dcba5a fcom qword ptr [edx] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(EDX)));
  /* 12dcba5c test byte ptr [edx - 0x4573ed24], bh */
  { uint32_t _r=(r8((uint32_t)(EDX + -0x4573ed24)))&(C.b.b.h); fl_logic(_r,8); }
  /* 12dcba62 fcom qword ptr [edx] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(EDX)));
  /* 12dcba64 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 12dcba65 mov edx, 0xba9c12dc */
  EDX = (0xba9c12dcu);
  /* 12dcba6a fcom qword ptr [edx] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(EDX)));
  /* 12dcba6c movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 12dcba6e fcom qword ptr [edx] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(EDX)));
  /* 12dcba74 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 12dcba78 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 12dcba7c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 12dcba80 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 12dcba84 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 12dcba88 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 12dcba8c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 12dcba90 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 12dcba94 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 12dcba98 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 12dcba9c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 12dcbaa0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 12dcbaa4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 12dcbaa8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 12dcbaac lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12dcbab3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcbab5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12dcbab7:;
  /* 12dcbab7 jmp dword ptr [edx*4 + 0x12dcbac0] */
  switch (EDX) {
    case 0: goto L_12dcbad0;
    case 1: goto L_12dcbad8;
    case 2: goto L_12dcbae8;
    case 3: goto L_12dcbafc;
    default: x86_unimpl("switch@0x12dcbab7 out of table"); return;
  }
  /* 12dcbabe mov edi, edi */
  EDI = (EDI);
L_12dcbad0:;
  /* 12dcbad0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcbad3 pop esi */
  ESI = (pop32());
  /* 12dcbad4 pop edi */
  EDI = (pop32());
  /* 12dcbad5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12dcbad6 ret  */
  ESPCHK(0x12dcb7e0u, _esp0);
  ESP += 4; return;
  /* 12dcbad7 nop  */
  /* nop */
L_12dcbad8:;
  /* 12dcbad8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12dcbadb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12dcbade mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcbae1 pop esi */
  ESI = (pop32());
  /* 12dcbae2 pop edi */
  EDI = (pop32());
  /* 12dcbae3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12dcbae4 ret  */
  ESPCHK(0x12dcb7e0u, _esp0);
  ESP += 4; return;
  /* 12dcbae5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12dcbae8:;
  /* 12dcbae8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12dcbaeb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12dcbaee mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12dcbaf1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12dcbaf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcbaf7 pop esi */
  ESI = (pop32());
  /* 12dcbaf8 pop edi */
  EDI = (pop32());
  /* 12dcbaf9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12dcbafa ret  */
  ESPCHK(0x12dcb7e0u, _esp0);
  ESP += 4; return;
  /* 12dcbafb nop  */
  /* nop */
L_12dcbafc:;
  /* 12dcbafc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12dcbaff mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12dcbb02 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12dcbb05 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12dcbb08 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12dcbb0b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12dcbb0e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcbb11 pop esi */
  ESI = (pop32());
  /* 12dcbb12 pop edi */
  EDI = (pop32());
  /* 12dcbb13 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12dcbb14 ret  */
  ESPCHK(0x12dcb7e0u, _esp0);
  ESP += 4; return;
L_12dcba10: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x12dcba10 (unresolved jump table)"); return;
}

/* FUN_1000bb20 @ 0x12dcbb20 (421 bytes, 148 insns) */
void f_12dcbb20(void) {
  FTRACE(0x12dcbb20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcbb20 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcbb21 mov ebp, esp */
  EBP = (ESP);
  /* 12dcbb23 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12dcbb25 push 0x12ddb148 */
  push32((uint32_t)(0x12ddb148u));
  /* 12dcbb2a push 0x12dcc9f8 */
  push32((uint32_t)(0x12dcc9f8u));
  /* 12dcbb2f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12dcbb35 push eax */
  push32((uint32_t)(EAX));
  /* 12dcbb36 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12dcbb3d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcbb40 push ebx */
  push32((uint32_t)(EBX));
  /* 12dcbb41 push esi */
  push32((uint32_t)(ESI));
  /* 12dcbb42 push edi */
  push32((uint32_t)(EDI));
  /* 12dcbb43 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12dcbb46 cmp dword ptr [0x12ddf724], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf724))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcbb4d jne 0x12dcbb9e */
  if (!C.zf) goto L_12dcbb9e;
  /* 12dcbb4f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12dcbb52 push eax */
  push32((uint32_t)(EAX));
  /* 12dcbb53 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dcbb55 push 0x12ddb140 */
  push32((uint32_t)(0x12ddb140u));
  /* 12dcbb5a push 1 */
  push32((uint32_t)(0x1u));
  /* 12dcbb5c call dword ptr [0x12de22ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22ec))), 0x12dcbb62u);
  /* 12dcbb62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcbb64 je 0x12dcbb72 */
  if (C.zf) goto L_12dcbb72;
  /* 12dcbb66 mov dword ptr [0x12ddf724], 1 */
  w32((uint32_t)(0x12ddf724), (0x1u));
  /* 12dcbb70 jmp 0x12dcbb9e */
  goto L_12dcbb9e;
L_12dcbb72:;
  /* 12dcbb72 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12dcbb75 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcbb76 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dcbb78 push 0x12ddb13c */
  push32((uint32_t)(0x12ddb13cu));
  /* 12dcbb7d push 1 */
  push32((uint32_t)(0x1u));
  /* 12dcbb7f push 0 */
  push32((uint32_t)(0x0u));
  /* 12dcbb81 call dword ptr [0x12de22fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22fc))), 0x12dcbb87u);
  /* 12dcbb87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcbb89 je 0x12dcbb97 */
  if (C.zf) goto L_12dcbb97;
  /* 12dcbb8b mov dword ptr [0x12ddf724], 2 */
  w32((uint32_t)(0x12ddf724), (0x2u));
  /* 12dcbb95 jmp 0x12dcbb9e */
  goto L_12dcbb9e;
L_12dcbb97:;
  /* 12dcbb97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dcbb99 jmp 0x12dcbcc8 */
  goto L_12dcbcc8;
L_12dcbb9e:;
  /* 12dcbb9e cmp dword ptr [0x12ddf724], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf724))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcbba5 jne 0x12dcbbd5 */
  if (!C.zf) goto L_12dcbbd5;
  /* 12dcbba7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcbbab jne 0x12dcbbb6 */
  if (!C.zf) goto L_12dcbbb6;
  /* 12dcbbad mov edx, dword ptr [0x12ddf730] */
  EDX = (r32((uint32_t)(0x12ddf730)));
  /* 12dcbbb3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_12dcbbb6:;
  /* 12dcbbb6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dcbbb9 push eax */
  push32((uint32_t)(EAX));
  /* 12dcbbba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dcbbbd push ecx */
  push32((uint32_t)(ECX));
  /* 12dcbbbe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcbbc1 push edx */
  push32((uint32_t)(EDX));
  /* 12dcbbc2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcbbc5 push eax */
  push32((uint32_t)(EAX));
  /* 12dcbbc6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12dcbbc9 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcbbca call dword ptr [0x12de22fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22fc))), 0x12dcbbd0u);
  /* 12dcbbd0 jmp 0x12dcbcc8 */
  goto L_12dcbcc8;
L_12dcbbd5:;
  /* 12dcbbd5 cmp dword ptr [0x12ddf724], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf724))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcbbdc jne 0x12dcbcc6 */
  if (!C.zf) goto L_12dcbcc6;
  /* 12dcbbe2 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcbbe6 jne 0x12dcbbf1 */
  if (!C.zf) goto L_12dcbbf1;
  /* 12dcbbe8 mov edx, dword ptr [0x12ddf740] */
  EDX = (r32((uint32_t)(0x12ddf740)));
  /* 12dcbbee mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_12dcbbf1:;
  /* 12dcbbf1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dcbbf3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dcbbf5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dcbbf8 push eax */
  push32((uint32_t)(EAX));
  /* 12dcbbf9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcbbfc push ecx */
  push32((uint32_t)(ECX));
  /* 12dcbbfd mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 12dcbc00 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12dcbc02 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcbc04 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12dcbc07 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcbc0a push edx */
  push32((uint32_t)(EDX));
  /* 12dcbc0b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dcbc0e push eax */
  push32((uint32_t)(EAX));
  /* 12dcbc0f call dword ptr [0x12de22f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22f4))), 0x12dcbc15u);
  /* 12dcbc15 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12dcbc18 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcbc1c jne 0x12dcbc25 */
  if (!C.zf) goto L_12dcbc25;
  /* 12dcbc1e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dcbc20 jmp 0x12dcbcc8 */
  goto L_12dcbcc8;
L_12dcbc25:;
  /* 12dcbc25 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12dcbc2c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dcbc2f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12dcbc31 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcbc34 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12dcbc36 call 0x12dc6a90 */
  push32(0x12dcbc3bu); f_12dc6a90();
  /* 12dcbc3b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 12dcbc3e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12dcbc41 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dcbc44 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12dcbc47 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dcbc4a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12dcbc4c push edx */
  push32((uint32_t)(EDX));
  /* 12dcbc4d push 0 */
  push32((uint32_t)(0x0u));
  /* 12dcbc4f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dcbc52 push eax */
  push32((uint32_t)(EAX));
  /* 12dcbc53 call 0x12dc7660 */
  push32(0x12dcbc58u); f_12dc7660();
  /* 12dcbc58 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcbc5b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12dcbc62 jmp 0x12dcbc7b */
  goto L_12dcbc7b;
  /* 12dcbc64 mov eax, 1 */
  EAX = (0x1u);
  /* 12dcbc69 ret  */
  ESPCHK(0x12dcbb20u, _esp0);
  ESP += 4; return;
  /* 12dcbc6a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12dcbc6d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12dcbc74 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12dcbc7b:;
  /* 12dcbc7b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcbc7f jne 0x12dcbc85 */
  if (!C.zf) goto L_12dcbc85;
  /* 12dcbc81 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dcbc83 jmp 0x12dcbcc8 */
  goto L_12dcbcc8;
L_12dcbc85:;
  /* 12dcbc85 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dcbc88 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcbc89 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dcbc8c push edx */
  push32((uint32_t)(EDX));
  /* 12dcbc8d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dcbc90 push eax */
  push32((uint32_t)(EAX));
  /* 12dcbc91 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcbc94 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcbc95 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dcbc97 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dcbc9a push edx */
  push32((uint32_t)(EDX));
  /* 12dcbc9b call dword ptr [0x12de22f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22f4))), 0x12dcbca1u);
  /* 12dcbca1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12dcbca4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcbca8 jne 0x12dcbcae */
  if (!C.zf) goto L_12dcbcae;
  /* 12dcbcaa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dcbcac jmp 0x12dcbcc8 */
  goto L_12dcbcc8;
L_12dcbcae:;
  /* 12dcbcae mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dcbcb1 push eax */
  push32((uint32_t)(EAX));
  /* 12dcbcb2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dcbcb5 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcbcb6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dcbcb9 push edx */
  push32((uint32_t)(EDX));
  /* 12dcbcba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcbcbd push eax */
  push32((uint32_t)(EAX));
  /* 12dcbcbe call dword ptr [0x12de22ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22ec))), 0x12dcbcc4u);
  /* 12dcbcc4 jmp 0x12dcbcc8 */
  goto L_12dcbcc8;
L_12dcbcc6:;
  /* 12dcbcc6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12dcbcc8:;
  /* 12dcbcc8 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 12dcbccb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dcbcce mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12dcbcd5 pop edi */
  EDI = (pop32());
  /* 12dcbcd6 pop esi */
  ESI = (pop32());
  /* 12dcbcd7 pop ebx */
  EBX = (pop32());
  /* 12dcbcd8 mov esp, ebp */
  ESP = (EBP);
  /* 12dcbcda pop ebp */
  EBP = (pop32());
  /* 12dcbcdb ret  */
  ESPCHK(0x12dcbb20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bce0 @ 0x12dcbce0 (727 bytes, 263 insns) */
void f_12dcbce0(void) {
  FTRACE(0x12dcbce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcbce0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcbce1 mov ebp, esp */
  EBP = (ESP);
  /* 12dcbce3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12dcbce5 push 0x12ddb158 */
  push32((uint32_t)(0x12ddb158u));
  /* 12dcbcea push 0x12dcc9f8 */
  push32((uint32_t)(0x12dcc9f8u));
  /* 12dcbcef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12dcbcf5 push eax */
  push32((uint32_t)(EAX));
  /* 12dcbcf6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12dcbcfd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcbd00 push ebx */
  push32((uint32_t)(EBX));
  /* 12dcbd01 push esi */
  push32((uint32_t)(ESI));
  /* 12dcbd02 push edi */
  push32((uint32_t)(EDI));
  /* 12dcbd03 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12dcbd06 cmp dword ptr [0x12ddf748], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf748))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcbd0d jne 0x12dcbd66 */
  if (!C.zf) goto L_12dcbd66;
  /* 12dcbd0f push 0 */
  push32((uint32_t)(0x0u));
  /* 12dcbd11 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dcbd13 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dcbd15 push 0x12ddb140 */
  push32((uint32_t)(0x12ddb140u));
  /* 12dcbd1a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12dcbd1f push 0 */
  push32((uint32_t)(0x0u));
  /* 12dcbd21 call dword ptr [0x12de22f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22f0))), 0x12dcbd27u);
  /* 12dcbd27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcbd29 je 0x12dcbd37 */
  if (C.zf) goto L_12dcbd37;
  /* 12dcbd2b mov dword ptr [0x12ddf748], 1 */
  w32((uint32_t)(0x12ddf748), (0x1u));
  /* 12dcbd35 jmp 0x12dcbd66 */
  goto L_12dcbd66;
L_12dcbd37:;
  /* 12dcbd37 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dcbd39 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dcbd3b push 1 */
  push32((uint32_t)(0x1u));
  /* 12dcbd3d push 0x12ddb13c */
  push32((uint32_t)(0x12ddb13cu));
  /* 12dcbd42 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12dcbd47 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dcbd49 call dword ptr [0x12de22e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22e8))), 0x12dcbd4fu);
  /* 12dcbd4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcbd51 je 0x12dcbd5f */
  if (C.zf) goto L_12dcbd5f;
  /* 12dcbd53 mov dword ptr [0x12ddf748], 2 */
  w32((uint32_t)(0x12ddf748), (0x2u));
  /* 12dcbd5d jmp 0x12dcbd66 */
  goto L_12dcbd66;
L_12dcbd5f:;
  /* 12dcbd5f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dcbd61 jmp 0x12dcbfd1 */
  goto L_12dcbfd1;
L_12dcbd66:;
  /* 12dcbd66 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcbd6a jle 0x12dcbd7f */
  if ((C.zf||C.sf!=C.of)) goto L_12dcbd7f;
  /* 12dcbd6c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dcbd6f push eax */
  push32((uint32_t)(EAX));
  /* 12dcbd70 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dcbd73 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcbd74 call 0x12dcbff0 */
  push32(0x12dcbd79u); f_12dcbff0();
  /* 12dcbd79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcbd7c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_12dcbd7f:;
  /* 12dcbd7f cmp dword ptr [0x12ddf748], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf748))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcbd86 jne 0x12dcbdab */
  if (!C.zf) goto L_12dcbdab;
  /* 12dcbd88 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12dcbd8b push edx */
  push32((uint32_t)(EDX));
  /* 12dcbd8c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dcbd8f push eax */
  push32((uint32_t)(EAX));
  /* 12dcbd90 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dcbd93 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcbd94 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dcbd97 push edx */
  push32((uint32_t)(EDX));
  /* 12dcbd98 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcbd9b push eax */
  push32((uint32_t)(EAX));
  /* 12dcbd9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcbd9f push ecx */
  push32((uint32_t)(ECX));
  /* 12dcbda0 call dword ptr [0x12de22e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22e8))), 0x12dcbda6u);
  /* 12dcbda6 jmp 0x12dcbfd1 */
  goto L_12dcbfd1;
L_12dcbdab:;
  /* 12dcbdab cmp dword ptr [0x12ddf748], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf748))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcbdb2 jne 0x12dcbfcf */
  if (!C.zf) goto L_12dcbfcf;
  /* 12dcbdb8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcbdbc jne 0x12dcbdc7 */
  if (!C.zf) goto L_12dcbdc7;
  /* 12dcbdbe mov edx, dword ptr [0x12ddf740] */
  EDX = (r32((uint32_t)(0x12ddf740)));
  /* 12dcbdc4 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_12dcbdc7:;
  /* 12dcbdc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dcbdc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dcbdcb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dcbdce push eax */
  push32((uint32_t)(EAX));
  /* 12dcbdcf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dcbdd2 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcbdd3 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 12dcbdd6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12dcbdd8 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcbdda and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12dcbddd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcbde0 push edx */
  push32((uint32_t)(EDX));
  /* 12dcbde1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12dcbde4 push eax */
  push32((uint32_t)(EAX));
  /* 12dcbde5 call dword ptr [0x12de22f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22f4))), 0x12dcbdebu);
  /* 12dcbdeb mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12dcbdee cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcbdf2 jne 0x12dcbdfb */
  if (!C.zf) goto L_12dcbdfb;
  /* 12dcbdf4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dcbdf6 jmp 0x12dcbfd1 */
  goto L_12dcbfd1;
L_12dcbdfb:;
  /* 12dcbdfb mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12dcbe02 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dcbe05 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12dcbe07 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcbe0a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12dcbe0c call 0x12dc6a90 */
  push32(0x12dcbe11u); f_12dc6a90();
  /* 12dcbe11 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 12dcbe14 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12dcbe17 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dcbe1a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12dcbe1d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12dcbe24 jmp 0x12dcbe3d */
  goto L_12dcbe3d;
  /* 12dcbe26 mov eax, 1 */
  EAX = (0x1u);
  /* 12dcbe2b ret  */
  ESPCHK(0x12dcbce0u, _esp0);
  ESP += 4; return;
  /* 12dcbe2c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12dcbe2f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12dcbe36 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12dcbe3d:;
  /* 12dcbe3d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcbe41 jne 0x12dcbe4a */
  if (!C.zf) goto L_12dcbe4a;
  /* 12dcbe43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dcbe45 jmp 0x12dcbfd1 */
  goto L_12dcbfd1;
L_12dcbe4a:;
  /* 12dcbe4a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dcbe4d push edx */
  push32((uint32_t)(EDX));
  /* 12dcbe4e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dcbe51 push eax */
  push32((uint32_t)(EAX));
  /* 12dcbe52 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dcbe55 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcbe56 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dcbe59 push edx */
  push32((uint32_t)(EDX));
  /* 12dcbe5a push 1 */
  push32((uint32_t)(0x1u));
  /* 12dcbe5c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12dcbe5f push eax */
  push32((uint32_t)(EAX));
  /* 12dcbe60 call dword ptr [0x12de22f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22f4))), 0x12dcbe66u);
  /* 12dcbe66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcbe68 jne 0x12dcbe71 */
  if (!C.zf) goto L_12dcbe71;
  /* 12dcbe6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dcbe6c jmp 0x12dcbfd1 */
  goto L_12dcbfd1;
L_12dcbe71:;
  /* 12dcbe71 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dcbe73 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dcbe75 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dcbe78 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcbe79 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dcbe7c push edx */
  push32((uint32_t)(EDX));
  /* 12dcbe7d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcbe80 push eax */
  push32((uint32_t)(EAX));
  /* 12dcbe81 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcbe84 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcbe85 call dword ptr [0x12de22f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22f0))), 0x12dcbe8bu);
  /* 12dcbe8b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12dcbe8e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcbe92 jne 0x12dcbe9b */
  if (!C.zf) goto L_12dcbe9b;
  /* 12dcbe94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dcbe96 jmp 0x12dcbfd1 */
  goto L_12dcbfd1;
L_12dcbe9b:;
  /* 12dcbe9b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcbe9e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 12dcbea4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dcbea6 je 0x12dcbeeb */
  if (C.zf) goto L_12dcbeeb;
  /* 12dcbea8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcbeac je 0x12dcbee6 */
  if (C.zf) goto L_12dcbee6;
  /* 12dcbeae mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dcbeb1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcbeb4 jle 0x12dcbebd */
  if ((C.zf||C.sf!=C.of)) goto L_12dcbebd;
  /* 12dcbeb6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dcbeb8 jmp 0x12dcbfd1 */
  goto L_12dcbfd1;
L_12dcbebd:;
  /* 12dcbebd mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12dcbec0 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcbec1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dcbec4 push edx */
  push32((uint32_t)(EDX));
  /* 12dcbec5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dcbec8 push eax */
  push32((uint32_t)(EAX));
  /* 12dcbec9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dcbecc push ecx */
  push32((uint32_t)(ECX));
  /* 12dcbecd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcbed0 push edx */
  push32((uint32_t)(EDX));
  /* 12dcbed1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcbed4 push eax */
  push32((uint32_t)(EAX));
  /* 12dcbed5 call dword ptr [0x12de22f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22f0))), 0x12dcbedbu);
  /* 12dcbedb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcbedd jne 0x12dcbee6 */
  if (!C.zf) goto L_12dcbee6;
  /* 12dcbedf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dcbee1 jmp 0x12dcbfd1 */
  goto L_12dcbfd1;
L_12dcbee6:;
  /* 12dcbee6 jmp 0x12dcbfca */
  goto L_12dcbfca;
L_12dcbeeb:;
  /* 12dcbeeb mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dcbeee mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12dcbef1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12dcbef8 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dcbefb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12dcbefd add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcbf00 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12dcbf02 call 0x12dc6a90 */
  push32(0x12dcbf07u); f_12dc6a90();
  /* 12dcbf07 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 12dcbf0a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12dcbf0d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12dcbf10 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12dcbf13 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12dcbf1a jmp 0x12dcbf33 */
  goto L_12dcbf33;
  /* 12dcbf1c mov eax, 1 */
  EAX = (0x1u);
  /* 12dcbf21 ret  */
  ESPCHK(0x12dcbce0u, _esp0);
  ESP += 4; return;
  /* 12dcbf22 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12dcbf25 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12dcbf2c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12dcbf33:;
  /* 12dcbf33 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcbf37 jne 0x12dcbf40 */
  if (!C.zf) goto L_12dcbf40;
  /* 12dcbf39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dcbf3b jmp 0x12dcbfd1 */
  goto L_12dcbfd1;
L_12dcbf40:;
  /* 12dcbf40 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dcbf43 push eax */
  push32((uint32_t)(EAX));
  /* 12dcbf44 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dcbf47 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcbf48 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dcbf4b push edx */
  push32((uint32_t)(EDX));
  /* 12dcbf4c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dcbf4f push eax */
  push32((uint32_t)(EAX));
  /* 12dcbf50 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcbf53 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcbf54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcbf57 push edx */
  push32((uint32_t)(EDX));
  /* 12dcbf58 call dword ptr [0x12de22f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22f0))), 0x12dcbf5eu);
  /* 12dcbf5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcbf60 jne 0x12dcbf66 */
  if (!C.zf) goto L_12dcbf66;
  /* 12dcbf62 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dcbf64 jmp 0x12dcbfd1 */
  goto L_12dcbfd1;
L_12dcbf66:;
  /* 12dcbf66 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcbf6a jne 0x12dcbf9a */
  if (!C.zf) goto L_12dcbf9a;
  /* 12dcbf6c push 0 */
  push32((uint32_t)(0x0u));
  /* 12dcbf6e push 0 */
  push32((uint32_t)(0x0u));
  /* 12dcbf70 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dcbf72 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dcbf74 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dcbf77 push eax */
  push32((uint32_t)(EAX));
  /* 12dcbf78 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dcbf7b push ecx */
  push32((uint32_t)(ECX));
  /* 12dcbf7c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12dcbf81 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 12dcbf84 push edx */
  push32((uint32_t)(EDX));
  /* 12dcbf85 call dword ptr [0x12de23ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de23ac))), 0x12dcbf8bu);
  /* 12dcbf8b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12dcbf8e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcbf92 jne 0x12dcbf98 */
  if (!C.zf) goto L_12dcbf98;
  /* 12dcbf94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dcbf96 jmp 0x12dcbfd1 */
  goto L_12dcbfd1;
L_12dcbf98:;
  /* 12dcbf98 jmp 0x12dcbfca */
  goto L_12dcbfca;
L_12dcbf9a:;
  /* 12dcbf9a push 0 */
  push32((uint32_t)(0x0u));
  /* 12dcbf9c push 0 */
  push32((uint32_t)(0x0u));
  /* 12dcbf9e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12dcbfa1 push eax */
  push32((uint32_t)(EAX));
  /* 12dcbfa2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12dcbfa5 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcbfa6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dcbfa9 push edx */
  push32((uint32_t)(EDX));
  /* 12dcbfaa mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dcbfad push eax */
  push32((uint32_t)(EAX));
  /* 12dcbfae push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12dcbfb3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 12dcbfb6 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcbfb7 call dword ptr [0x12de23ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de23ac))), 0x12dcbfbdu);
  /* 12dcbfbd mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12dcbfc0 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcbfc4 jne 0x12dcbfca */
  if (!C.zf) goto L_12dcbfca;
  /* 12dcbfc6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dcbfc8 jmp 0x12dcbfd1 */
  goto L_12dcbfd1;
L_12dcbfca:;
  /* 12dcbfca mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dcbfcd jmp 0x12dcbfd1 */
  goto L_12dcbfd1;
L_12dcbfcf:;
  /* 12dcbfcf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12dcbfd1:;
  /* 12dcbfd1 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 12dcbfd4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dcbfd7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12dcbfde pop edi */
  EDI = (pop32());
  /* 12dcbfdf pop esi */
  ESI = (pop32());
  /* 12dcbfe0 pop ebx */
  EBX = (pop32());
  /* 12dcbfe1 mov esp, ebp */
  ESP = (EBP);
  /* 12dcbfe3 pop ebp */
  EBP = (pop32());
  /* 12dcbfe4 ret  */
  ESPCHK(0x12dcbce0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bff0 @ 0x12dcbff0 (80 bytes, 32 insns) */
void f_12dcbff0(void) {
  FTRACE(0x12dcbff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcbff0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcbff1 mov ebp, esp */
  EBP = (ESP);
  /* 12dcbff3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcbff6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcbff9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dcbffc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcbfff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12dcc002:;
  /* 12dcc002 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcc005 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcc008 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcc00b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dcc00e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dcc010 je 0x12dcc027 */
  if (C.zf) goto L_12dcc027;
  /* 12dcc012 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcc015 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12dcc018 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dcc01a je 0x12dcc027 */
  if (C.zf) goto L_12dcc027;
  /* 12dcc01c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcc01f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcc022 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dcc025 jmp 0x12dcc002 */
  goto L_12dcc002;
L_12dcc027:;
  /* 12dcc027 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcc02a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12dcc02d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dcc02f jne 0x12dcc039 */
  if (!C.zf) goto L_12dcc039;
  /* 12dcc031 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcc034 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcc037 jmp 0x12dcc03c */
  goto L_12dcc03c;
L_12dcc039:;
  /* 12dcc039 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_12dcc03c:;
  /* 12dcc03c mov esp, ebp */
  ESP = (EBP);
  /* 12dcc03e pop ebp */
  EBP = (pop32());
  /* 12dcc03f ret  */
  ESPCHK(0x12dcbff0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c040 @ 0x12dcc040 (130 bytes, 43 insns) */
void f_12dcc040(void) {
  FTRACE(0x12dcc040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcc040 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcc041 mov ebp, esp */
  EBP = (ESP);
  /* 12dcc043 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcc044 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcc047 cmp eax, dword ptr [0x12de103c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12de103c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcc04d jae 0x12dcc071 */
  if (!C.cf) goto L_12dcc071;
  /* 12dcc04f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcc052 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12dcc055 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcc058 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12dcc05b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dcc05e mov eax, dword ptr [ecx*4 + 0x12de0f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12de0f00)));
  /* 12dcc065 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12dcc06a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12dcc06d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dcc06f jne 0x12dcc08c */
  if (!C.zf) goto L_12dcc08c;
L_12dcc071:;
  /* 12dcc071 call 0x12dcb7c0 */
  push32(0x12dcc076u); f_12dcb7c0();
  /* 12dcc076 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12dcc07c call 0x12dcb7d0 */
  push32(0x12dcc081u); f_12dcb7d0();
  /* 12dcc081 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12dcc087 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dcc08a jmp 0x12dcc0be */
  goto L_12dcc0be;
L_12dcc08c:;
  /* 12dcc08c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcc08f push edx */
  push32((uint32_t)(EDX));
  /* 12dcc090 call 0x12dccfe0 */
  push32(0x12dcc095u); f_12dccfe0();
  /* 12dcc095 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcc098 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dcc09b push eax */
  push32((uint32_t)(EAX));
  /* 12dcc09c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcc09f push ecx */
  push32((uint32_t)(ECX));
  /* 12dcc0a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcc0a3 push edx */
  push32((uint32_t)(EDX));
  /* 12dcc0a4 call 0x12dcc0d0 */
  push32(0x12dcc0a9u); f_12dcc0d0();
  /* 12dcc0a9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcc0ac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dcc0af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcc0b2 push eax */
  push32((uint32_t)(EAX));
  /* 12dcc0b3 call 0x12dcd070 */
  push32(0x12dcc0b8u); f_12dcd070();
  /* 12dcc0b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcc0bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12dcc0be:;
  /* 12dcc0be mov esp, ebp */
  ESP = (EBP);
  /* 12dcc0c0 pop ebp */
  EBP = (pop32());
  /* 12dcc0c1 ret  */
  ESPCHK(0x12dcc040u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0d0 @ 0x12dcc0d0 (178 bytes, 56 insns) */
void f_12dcc0d0(void) {
  FTRACE(0x12dcc0d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcc0d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcc0d1 mov ebp, esp */
  EBP = (ESP);
  /* 12dcc0d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcc0d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcc0d9 push eax */
  push32((uint32_t)(EAX));
  /* 12dcc0da call 0x12dcce60 */
  push32(0x12dcc0dfu); f_12dcce60();
  /* 12dcc0df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcc0e2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12dcc0e5 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcc0e9 jne 0x12dcc0fe */
  if (!C.zf) goto L_12dcc0fe;
  /* 12dcc0eb call 0x12dcb7c0 */
  push32(0x12dcc0f0u); f_12dcb7c0();
  /* 12dcc0f0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12dcc0f6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dcc0f9 jmp 0x12dcc17e */
  goto L_12dcc17e;
L_12dcc0fe:;
  /* 12dcc0fe mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dcc101 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcc102 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dcc104 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcc107 push edx */
  push32((uint32_t)(EDX));
  /* 12dcc108 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dcc10b push eax */
  push32((uint32_t)(EAX));
  /* 12dcc10c call dword ptr [0x12de22e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22e0))), 0x12dcc112u);
  /* 12dcc112 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dcc115 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcc119 jne 0x12dcc126 */
  if (!C.zf) goto L_12dcc126;
  /* 12dcc11b call dword ptr [0x12de2380] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2380))), 0x12dcc121u);
  /* 12dcc121 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dcc124 jmp 0x12dcc12d */
  goto L_12dcc12d;
L_12dcc126:;
  /* 12dcc126 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12dcc12d:;
  /* 12dcc12d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcc131 je 0x12dcc144 */
  if (C.zf) goto L_12dcc144;
  /* 12dcc133 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcc136 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcc137 call 0x12dcb720 */
  push32(0x12dcc13cu); f_12dcb720();
  /* 12dcc13c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcc13f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dcc142 jmp 0x12dcc17e */
  goto L_12dcc17e;
L_12dcc144:;
  /* 12dcc144 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcc147 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12dcc14a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcc14d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12dcc150 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dcc153 mov ecx, dword ptr [edx*4 + 0x12de0f00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12de0f00)));
  /* 12dcc15a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 12dcc15e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 12dcc161 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcc164 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12dcc167 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcc16a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12dcc16d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dcc170 mov eax, dword ptr [eax*4 + 0x12de0f00] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12de0f00)));
  /* 12dcc177 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 12dcc17b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12dcc17e:;
  /* 12dcc17e mov esp, ebp */
  ESP = (EBP);
  /* 12dcc180 pop ebp */
  EBP = (pop32());
  /* 12dcc181 ret  */
  ESPCHK(0x12dcc0d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c190 @ 0x12dcc190 (130 bytes, 43 insns) */
void f_12dcc190(void) {
  FTRACE(0x12dcc190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcc190 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcc191 mov ebp, esp */
  EBP = (ESP);
  /* 12dcc193 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcc194 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcc197 cmp eax, dword ptr [0x12de103c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12de103c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcc19d jae 0x12dcc1c1 */
  if (!C.cf) goto L_12dcc1c1;
  /* 12dcc19f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcc1a2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12dcc1a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcc1a8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12dcc1ab imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dcc1ae mov eax, dword ptr [ecx*4 + 0x12de0f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12de0f00)));
  /* 12dcc1b5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12dcc1ba and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12dcc1bd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dcc1bf jne 0x12dcc1dc */
  if (!C.zf) goto L_12dcc1dc;
L_12dcc1c1:;
  /* 12dcc1c1 call 0x12dcb7c0 */
  push32(0x12dcc1c6u); f_12dcb7c0();
  /* 12dcc1c6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12dcc1cc call 0x12dcb7d0 */
  push32(0x12dcc1d1u); f_12dcb7d0();
  /* 12dcc1d1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12dcc1d7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dcc1da jmp 0x12dcc20e */
  goto L_12dcc20e;
L_12dcc1dc:;
  /* 12dcc1dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcc1df push edx */
  push32((uint32_t)(EDX));
  /* 12dcc1e0 call 0x12dccfe0 */
  push32(0x12dcc1e5u); f_12dccfe0();
  /* 12dcc1e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcc1e8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dcc1eb push eax */
  push32((uint32_t)(EAX));
  /* 12dcc1ec mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcc1ef push ecx */
  push32((uint32_t)(ECX));
  /* 12dcc1f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcc1f3 push edx */
  push32((uint32_t)(EDX));
  /* 12dcc1f4 call 0x12dcc220 */
  push32(0x12dcc1f9u); f_12dcc220();
  /* 12dcc1f9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcc1fc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dcc1ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcc202 push eax */
  push32((uint32_t)(EAX));
  /* 12dcc203 call 0x12dcd070 */
  push32(0x12dcc208u); f_12dcd070();
  /* 12dcc208 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcc20b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12dcc20e:;
  /* 12dcc20e mov esp, ebp */
  ESP = (EBP);
  /* 12dcc210 pop ebp */
  EBP = (pop32());
  /* 12dcc211 ret  */
  ESPCHK(0x12dcc190u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c220 @ 0x12dcc220 (627 bytes, 182 insns) */
void f_12dcc220(void) {
  FTRACE(0x12dcc220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcc220 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcc221 mov ebp, esp */
  EBP = (ESP);
  /* 12dcc223 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcc229 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12dcc230 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dcc233 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 12dcc239 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcc23d jne 0x12dcc246 */
  if (!C.zf) goto L_12dcc246;
  /* 12dcc23f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dcc241 jmp 0x12dcc48f */
  goto L_12dcc48f;
L_12dcc246:;
  /* 12dcc246 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcc249 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12dcc24c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcc24f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12dcc252 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dcc255 mov eax, dword ptr [ecx*4 + 0x12de0f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12de0f00)));
  /* 12dcc25c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12dcc261 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 12dcc264 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dcc266 je 0x12dcc278 */
  if (C.zf) goto L_12dcc278;
  /* 12dcc268 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcc26a push 0 */
  push32((uint32_t)(0x0u));
  /* 12dcc26c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcc26f push edx */
  push32((uint32_t)(EDX));
  /* 12dcc270 call 0x12dcc0d0 */
  push32(0x12dcc275u); f_12dcc0d0();
  /* 12dcc275 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dcc278:;
  /* 12dcc278 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcc27b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12dcc27e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcc281 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12dcc284 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dcc287 mov edx, dword ptr [eax*4 + 0x12de0f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12de0f00)));
  /* 12dcc28e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12dcc293 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 12dcc298 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcc29a je 0x12dcc3ac */
  if (C.zf) goto L_12dcc3ac;
  /* 12dcc2a0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcc2a3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12dcc2a6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12dcc2ad:;
  /* 12dcc2ad mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcc2b0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcc2b3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcc2b6 jae 0x12dcc3aa */
  if (!C.cf) goto L_12dcc3aa;
  /* 12dcc2bc lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 12dcc2c2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12dcc2c5:;
  /* 12dcc2c5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcc2c8 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 12dcc2ce sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcc2d0 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcc2d6 jge 0x12dcc337 */
  if ((C.sf==C.of)) goto L_12dcc337;
  /* 12dcc2d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcc2db sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcc2de cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcc2e1 jae 0x12dcc337 */
  if (!C.cf) goto L_12dcc337;
  /* 12dcc2e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcc2e6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12dcc2e8 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 12dcc2ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcc2f1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcc2f4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dcc2f7 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 12dcc2fe cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcc301 jne 0x12dcc321 */
  if (!C.zf) goto L_12dcc321;
  /* 12dcc303 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 12dcc309 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcc30c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 12dcc312 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcc315 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 12dcc318 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcc31b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcc31e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12dcc321:;
  /* 12dcc321 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcc324 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 12dcc32a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12dcc32c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcc32f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcc332 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dcc335 jmp 0x12dcc2c5 */
  goto L_12dcc2c5;
L_12dcc337:;
  /* 12dcc337 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dcc339 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 12dcc33f push edx */
  push32((uint32_t)(EDX));
  /* 12dcc340 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcc343 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 12dcc349 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcc34b push eax */
  push32((uint32_t)(EAX));
  /* 12dcc34c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 12dcc352 push edx */
  push32((uint32_t)(EDX));
  /* 12dcc353 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcc356 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12dcc359 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcc35c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12dcc35f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dcc362 mov edx, dword ptr [eax*4 + 0x12de0f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12de0f00)));
  /* 12dcc369 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 12dcc36c push eax */
  push32((uint32_t)(EAX));
  /* 12dcc36d call dword ptr [0x12de2340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2340))), 0x12dcc373u);
  /* 12dcc373 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcc375 je 0x12dcc39a */
  if (C.zf) goto L_12dcc39a;
  /* 12dcc377 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dcc37a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcc380 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12dcc383 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcc386 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 12dcc38c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcc38e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcc394 jge 0x12dcc398 */
  if ((C.sf==C.of)) goto L_12dcc398;
  /* 12dcc396 jmp 0x12dcc3aa */
  goto L_12dcc3aa;
L_12dcc398:;
  /* 12dcc398 jmp 0x12dcc3a5 */
  goto L_12dcc3a5;
L_12dcc39a:;
  /* 12dcc39a call dword ptr [0x12de2380] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2380))), 0x12dcc3a0u);
  /* 12dcc3a0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12dcc3a3 jmp 0x12dcc3aa */
  goto L_12dcc3aa;
L_12dcc3a5:;
  /* 12dcc3a5 jmp 0x12dcc2ad */
  goto L_12dcc2ad;
L_12dcc3aa:;
  /* 12dcc3aa jmp 0x12dcc3fc */
  goto L_12dcc3fc;
L_12dcc3ac:;
  /* 12dcc3ac push 0 */
  push32((uint32_t)(0x0u));
  /* 12dcc3ae lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 12dcc3b4 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcc3b5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dcc3b8 push edx */
  push32((uint32_t)(EDX));
  /* 12dcc3b9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcc3bc push eax */
  push32((uint32_t)(EAX));
  /* 12dcc3bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcc3c0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12dcc3c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcc3c6 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12dcc3c9 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dcc3cc mov eax, dword ptr [ecx*4 + 0x12de0f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12de0f00)));
  /* 12dcc3d3 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 12dcc3d6 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcc3d7 call dword ptr [0x12de2340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2340))), 0x12dcc3ddu);
  /* 12dcc3dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcc3df je 0x12dcc3f3 */
  if (C.zf) goto L_12dcc3f3;
  /* 12dcc3e1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12dcc3e8 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 12dcc3ee mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12dcc3f1 jmp 0x12dcc3fc */
  goto L_12dcc3fc;
L_12dcc3f3:;
  /* 12dcc3f3 call dword ptr [0x12de2380] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2380))), 0x12dcc3f9u);
  /* 12dcc3f9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12dcc3fc:;
  /* 12dcc3fc cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcc400 jne 0x12dcc486 */
  if (!C.zf) goto L_12dcc486;
  /* 12dcc406 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcc40a je 0x12dcc43a */
  if (C.zf) goto L_12dcc43a;
  /* 12dcc40c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcc410 jne 0x12dcc429 */
  if (!C.zf) goto L_12dcc429;
  /* 12dcc412 call 0x12dcb7c0 */
  push32(0x12dcc417u); f_12dcb7c0();
  /* 12dcc417 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12dcc41d call 0x12dcb7d0 */
  push32(0x12dcc422u); f_12dcb7d0();
  /* 12dcc422 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dcc425 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12dcc427 jmp 0x12dcc435 */
  goto L_12dcc435;
L_12dcc429:;
  /* 12dcc429 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dcc42c push edx */
  push32((uint32_t)(EDX));
  /* 12dcc42d call 0x12dcb720 */
  push32(0x12dcc432u); f_12dcb720();
  /* 12dcc432 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dcc435:;
  /* 12dcc435 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dcc438 jmp 0x12dcc48f */
  goto L_12dcc48f;
L_12dcc43a:;
  /* 12dcc43a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcc43d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12dcc440 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcc443 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12dcc446 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dcc449 mov edx, dword ptr [eax*4 + 0x12de0f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12de0f00)));
  /* 12dcc450 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12dcc455 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12dcc458 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcc45a je 0x12dcc46b */
  if (C.zf) goto L_12dcc46b;
  /* 12dcc45c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcc45f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12dcc462 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcc465 jne 0x12dcc46b */
  if (!C.zf) goto L_12dcc46b;
  /* 12dcc467 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dcc469 jmp 0x12dcc48f */
  goto L_12dcc48f;
L_12dcc46b:;
  /* 12dcc46b call 0x12dcb7c0 */
  push32(0x12dcc470u); f_12dcb7c0();
  /* 12dcc470 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 12dcc476 call 0x12dcb7d0 */
  push32(0x12dcc47bu); f_12dcb7d0();
  /* 12dcc47b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12dcc481 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dcc484 jmp 0x12dcc48f */
  goto L_12dcc48f;
L_12dcc486:;
  /* 12dcc486 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dcc489 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12dcc48f:;
  /* 12dcc48f mov esp, ebp */
  ESP = (EBP);
  /* 12dcc491 pop ebp */
  EBP = (pop32());
  /* 12dcc492 ret  */
  ESPCHK(0x12dcc220u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c4a0 @ 0x12dcc4a0 (199 bytes, 68 insns) */
void f_12dcc4a0(void) {
  FTRACE(0x12dcc4a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcc4a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcc4a1 mov ebp, esp */
  EBP = (ESP);
  /* 12dcc4a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcc4a4 push ebx */
  push32((uint32_t)(EBX));
  /* 12dcc4a5 push esi */
  push32((uint32_t)(ESI));
  /* 12dcc4a6 push edi */
  push32((uint32_t)(EDI));
L_12dcc4a7:;
  /* 12dcc4a7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcc4ab jne 0x12dcc4cb */
  if (!C.zf) goto L_12dcc4cb;
  /* 12dcc4ad push 0x12ddb0a0 */
  push32((uint32_t)(0x12ddb0a0u));
  /* 12dcc4b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dcc4b4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 12dcc4b6 push 0x12ddb170 */
  push32((uint32_t)(0x12ddb170u));
  /* 12dcc4bb push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcc4bd call 0x12dc29b0 */
  push32(0x12dcc4c2u); f_12dc29b0();
  /* 12dcc4c2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcc4c5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcc4c8 jne 0x12dcc4cb */
  if (!C.zf) goto L_12dcc4cb;
  /* 12dcc4ca int3  */
  x86_unimpl("int3 @ 0x12dcc4ca");
L_12dcc4cb:;
  /* 12dcc4cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dcc4cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcc4cf jne 0x12dcc4a7 */
  if (!C.zf) goto L_12dcc4a7;
  /* 12dcc4d1 mov ecx, dword ptr [0x12ddf74c] */
  ECX = (r32((uint32_t)(0x12ddf74c)));
  /* 12dcc4d7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcc4da mov dword ptr [0x12ddf74c], ecx */
  w32((uint32_t)(0x12ddf74c), (ECX));
  /* 12dcc4e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcc4e3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12dcc4e6 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 12dcc4e8 push 0x12ddb170 */
  push32((uint32_t)(0x12ddb170u));
  /* 12dcc4ed push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcc4ef push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12dcc4f4 call 0x12dc38f0 */
  push32(0x12dcc4f9u); f_12dc38f0();
  /* 12dcc4f9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcc4fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcc4ff mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12dcc502 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcc505 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcc509 je 0x12dcc526 */
  if (C.zf) goto L_12dcc526;
  /* 12dcc50b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcc50e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12dcc511 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12dcc514 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcc517 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12dcc51a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcc51d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 12dcc524 jmp 0x12dcc54b */
  goto L_12dcc54b;
L_12dcc526:;
  /* 12dcc526 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcc529 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12dcc52c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12dcc52f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcc532 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12dcc535 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcc538 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcc53b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcc53e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12dcc541 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcc544 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_12dcc54b:;
  /* 12dcc54b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcc54e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcc551 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12dcc554 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12dcc556 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcc559 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12dcc560 pop edi */
  EDI = (pop32());
  /* 12dcc561 pop esi */
  ESI = (pop32());
  /* 12dcc562 pop ebx */
  EBX = (pop32());
  /* 12dcc563 mov esp, ebp */
  ESP = (EBP);
  /* 12dcc565 pop ebp */
  EBP = (pop32());
  /* 12dcc566 ret  */
  ESPCHK(0x12dcc4a0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x12dcc570 (50 bytes, 17 insns) */
void f_12dcc570(void) {
  FTRACE(0x12dcc570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcc570 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcc571 mov ebp, esp */
  EBP = (ESP);
  /* 12dcc573 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcc576 cmp eax, dword ptr [0x12de103c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12de103c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcc57c jb 0x12dcc582 */
  if (C.cf) goto L_12dcc582;
  /* 12dcc57e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dcc580 jmp 0x12dcc5a0 */
  goto L_12dcc5a0;
L_12dcc582:;
  /* 12dcc582 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcc585 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12dcc588 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcc58b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12dcc58e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dcc591 mov eax, dword ptr [ecx*4 + 0x12de0f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12de0f00)));
  /* 12dcc598 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12dcc59d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_12dcc5a0:;
  /* 12dcc5a0 pop ebp */
  EBP = (pop32());
  /* 12dcc5a1 ret  */
  ESPCHK(0x12dcc570u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c5b0 @ 0x12dcc5b0 (300 bytes, 80 insns) */
void f_12dcc5b0(void) {
  FTRACE(0x12dcc5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcc5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcc5b1 mov ebp, esp */
  EBP = (ESP);
  /* 12dcc5b3 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcc5b4 cmp dword ptr [0x12de0c00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12de0c00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcc5bb jne 0x12dcc5c9 */
  if (!C.zf) goto L_12dcc5c9;
  /* 12dcc5bd mov dword ptr [0x12de0c00], 0x200 */
  w32((uint32_t)(0x12de0c00), (0x200u));
  /* 12dcc5c7 jmp 0x12dcc5dc */
  goto L_12dcc5dc;
L_12dcc5c9:;
  /* 12dcc5c9 cmp dword ptr [0x12de0c00], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x12de0c00))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcc5d0 jge 0x12dcc5dc */
  if ((C.sf==C.of)) goto L_12dcc5dc;
  /* 12dcc5d2 mov dword ptr [0x12de0c00], 0x14 */
  w32((uint32_t)(0x12de0c00), (0x14u));
L_12dcc5dc:;
  /* 12dcc5dc push 0x83 */
  push32((uint32_t)(0x83u));
  /* 12dcc5e1 push 0x12ddb17c */
  push32((uint32_t)(0x12ddb17cu));
  /* 12dcc5e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcc5e8 push 4 */
  push32((uint32_t)(0x4u));
  /* 12dcc5ea mov eax, dword ptr [0x12de0c00] */
  EAX = (r32((uint32_t)(0x12de0c00)));
  /* 12dcc5ef push eax */
  push32((uint32_t)(EAX));
  /* 12dcc5f0 call 0x12dc3d00 */
  push32(0x12dcc5f5u); f_12dc3d00();
  /* 12dcc5f5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcc5f8 mov dword ptr [0x12ddf8c0], eax */
  w32((uint32_t)(0x12ddf8c0), (EAX));
  /* 12dcc5fd cmp dword ptr [0x12ddf8c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf8c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcc604 jne 0x12dcc645 */
  if (!C.zf) goto L_12dcc645;
  /* 12dcc606 mov dword ptr [0x12de0c00], 0x14 */
  w32((uint32_t)(0x12de0c00), (0x14u));
  /* 12dcc610 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 12dcc615 push 0x12ddb17c */
  push32((uint32_t)(0x12ddb17cu));
  /* 12dcc61a push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcc61c push 4 */
  push32((uint32_t)(0x4u));
  /* 12dcc61e mov ecx, dword ptr [0x12de0c00] */
  ECX = (r32((uint32_t)(0x12de0c00)));
  /* 12dcc624 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcc625 call 0x12dc3d00 */
  push32(0x12dcc62au); f_12dc3d00();
  /* 12dcc62a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcc62d mov dword ptr [0x12ddf8c0], eax */
  w32((uint32_t)(0x12ddf8c0), (EAX));
  /* 12dcc632 cmp dword ptr [0x12ddf8c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf8c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcc639 jne 0x12dcc645 */
  if (!C.zf) goto L_12dcc645;
  /* 12dcc63b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12dcc63d call 0x12dc2860 */
  push32(0x12dcc642u); f_12dc2860();
  /* 12dcc642 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dcc645:;
  /* 12dcc645 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12dcc64c jmp 0x12dcc657 */
  goto L_12dcc657;
L_12dcc64e:;
  /* 12dcc64e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcc651 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcc654 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12dcc657:;
  /* 12dcc657 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcc65b jge 0x12dcc676 */
  if ((C.sf==C.of)) goto L_12dcc676;
  /* 12dcc65d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcc660 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12dcc663 add eax, 0x12dde120 */
  { uint32_t _a=(EAX),_b=(0x12dde120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcc668 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcc66b mov edx, dword ptr [0x12ddf8c0] */
  EDX = (r32((uint32_t)(0x12ddf8c0)));
  /* 12dcc671 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 12dcc674 jmp 0x12dcc64e */
  goto L_12dcc64e;
L_12dcc676:;
  /* 12dcc676 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12dcc67d jmp 0x12dcc688 */
  goto L_12dcc688;
L_12dcc67f:;
  /* 12dcc67f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcc682 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcc685 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12dcc688:;
  /* 12dcc688 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcc68c jge 0x12dcc6d8 */
  if ((C.sf==C.of)) goto L_12dcc6d8;
  /* 12dcc68e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcc691 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12dcc694 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcc697 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12dcc69a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dcc69d mov eax, dword ptr [ecx*4 + 0x12de0f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12de0f00)));
  /* 12dcc6a4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcc6a8 je 0x12dcc6c6 */
  if (C.zf) goto L_12dcc6c6;
  /* 12dcc6aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcc6ad sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12dcc6b0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcc6b3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12dcc6b6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dcc6b9 mov eax, dword ptr [ecx*4 + 0x12de0f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12de0f00)));
  /* 12dcc6c0 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcc6c4 jne 0x12dcc6d6 */
  if (!C.zf) goto L_12dcc6d6;
L_12dcc6c6:;
  /* 12dcc6c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcc6c9 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12dcc6cc mov dword ptr [ecx + 0x12dde130], 0xffffffff */
  w32((uint32_t)(ECX + 0x12dde130), (0xffffffffu));
L_12dcc6d6:;
  /* 12dcc6d6 jmp 0x12dcc67f */
  goto L_12dcc67f;
L_12dcc6d8:;
  /* 12dcc6d8 mov esp, ebp */
  ESP = (EBP);
  /* 12dcc6da pop ebp */
  EBP = (pop32());
  /* 12dcc6db ret  */
  ESPCHK(0x12dcc5b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6e0 @ 0x12dcc6e0 (26 bytes, 9 insns) */
void f_12dcc6e0(void) {
  FTRACE(0x12dcc6e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcc6e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcc6e1 mov ebp, esp */
  EBP = (ESP);
  /* 12dcc6e3 call 0x12dcd2e0 */
  push32(0x12dcc6e8u); f_12dcd2e0();
  /* 12dcc6e8 movsx eax, byte ptr [0x12ddf568] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x12ddf568))));
  /* 12dcc6ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcc6f1 je 0x12dcc6f8 */
  if (C.zf) goto L_12dcc6f8;
  /* 12dcc6f3 call 0x12dcd0a0 */
  push32(0x12dcc6f8u); f_12dcd0a0();
L_12dcc6f8:;
  /* 12dcc6f8 pop ebp */
  EBP = (pop32());
  /* 12dcc6f9 ret  */
  ESPCHK(0x12dcc6e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c700 @ 0x12dcc700 (61 bytes, 20 insns) */
void f_12dcc700(void) {
  FTRACE(0x12dcc700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcc700 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcc701 mov ebp, esp */
  EBP = (ESP);
  /* 12dcc703 cmp dword ptr [ebp + 8], 0x12dde120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12dde120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcc70a jb 0x12dcc72e */
  if (C.cf) goto L_12dcc72e;
  /* 12dcc70c cmp dword ptr [ebp + 8], 0x12dde380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12dde380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcc713 ja 0x12dcc72e */
  if ((!C.cf&&!C.zf)) goto L_12dcc72e;
  /* 12dcc715 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcc718 sub eax, 0x12dde120 */
  { uint32_t _a=(EAX),_b=(0x12dde120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcc71d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12dcc720 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcc723 push eax */
  push32((uint32_t)(EAX));
  /* 12dcc724 call 0x12dc72f0 */
  push32(0x12dcc729u); f_12dc72f0();
  /* 12dcc729 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcc72c jmp 0x12dcc73b */
  goto L_12dcc73b;
L_12dcc72e:;
  /* 12dcc72e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcc731 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcc734 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcc735 call dword ptr [0x12de231c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de231c))), 0x12dcc73bu);
L_12dcc73b:;
  /* 12dcc73b pop ebp */
  EBP = (pop32());
  /* 12dcc73c ret  */
  ESPCHK(0x12dcc700u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c740 @ 0x12dcc740 (41 bytes, 16 insns) */
void f_12dcc740(void) {
  FTRACE(0x12dcc740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcc740 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcc741 mov ebp, esp */
  EBP = (ESP);
  /* 12dcc743 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcc747 jge 0x12dcc75a */
  if ((C.sf==C.of)) goto L_12dcc75a;
  /* 12dcc749 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcc74c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcc74f push eax */
  push32((uint32_t)(EAX));
  /* 12dcc750 call 0x12dc72f0 */
  push32(0x12dcc755u); f_12dc72f0();
  /* 12dcc755 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcc758 jmp 0x12dcc767 */
  goto L_12dcc767;
L_12dcc75a:;
  /* 12dcc75a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcc75d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcc760 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcc761 call dword ptr [0x12de231c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de231c))), 0x12dcc767u);
L_12dcc767:;
  /* 12dcc767 pop ebp */
  EBP = (pop32());
  /* 12dcc768 ret  */
  ESPCHK(0x12dcc740u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c770 @ 0x12dcc770 (61 bytes, 20 insns) */
void f_12dcc770(void) {
  FTRACE(0x12dcc770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcc770 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcc771 mov ebp, esp */
  EBP = (ESP);
  /* 12dcc773 cmp dword ptr [ebp + 8], 0x12dde120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12dde120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcc77a jb 0x12dcc79e */
  if (C.cf) goto L_12dcc79e;
  /* 12dcc77c cmp dword ptr [ebp + 8], 0x12dde380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12dde380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcc783 ja 0x12dcc79e */
  if ((!C.cf&&!C.zf)) goto L_12dcc79e;
  /* 12dcc785 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcc788 sub eax, 0x12dde120 */
  { uint32_t _a=(EAX),_b=(0x12dde120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcc78d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12dcc790 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcc793 push eax */
  push32((uint32_t)(EAX));
  /* 12dcc794 call 0x12dc7390 */
  push32(0x12dcc799u); f_12dc7390();
  /* 12dcc799 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcc79c jmp 0x12dcc7ab */
  goto L_12dcc7ab;
L_12dcc79e:;
  /* 12dcc79e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcc7a1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcc7a4 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcc7a5 call dword ptr [0x12de2318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2318))), 0x12dcc7abu);
L_12dcc7ab:;
  /* 12dcc7ab pop ebp */
  EBP = (pop32());
  /* 12dcc7ac ret  */
  ESPCHK(0x12dcc770u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c7b0 @ 0x12dcc7b0 (41 bytes, 16 insns) */
void f_12dcc7b0(void) {
  FTRACE(0x12dcc7b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcc7b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcc7b1 mov ebp, esp */
  EBP = (ESP);
  /* 12dcc7b3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcc7b7 jge 0x12dcc7ca */
  if ((C.sf==C.of)) goto L_12dcc7ca;
  /* 12dcc7b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcc7bc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcc7bf push eax */
  push32((uint32_t)(EAX));
  /* 12dcc7c0 call 0x12dc7390 */
  push32(0x12dcc7c5u); f_12dc7390();
  /* 12dcc7c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcc7c8 jmp 0x12dcc7d7 */
  goto L_12dcc7d7;
L_12dcc7ca:;
  /* 12dcc7ca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcc7cd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcc7d0 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcc7d1 call dword ptr [0x12de2318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2318))), 0x12dcc7d7u);
L_12dcc7d7:;
  /* 12dcc7d7 pop ebp */
  EBP = (pop32());
  /* 12dcc7d8 ret  */
  ESPCHK(0x12dcc7b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c7e0 @ 0x12dcc7e0 (119 bytes, 34 insns) */
void f_12dcc7e0(void) {
  FTRACE(0x12dcc7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcc7e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcc7e1 mov ebp, esp */
  EBP = (ESP);
  /* 12dcc7e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcc7e6 push 0x12ddf8bc */
  push32((uint32_t)(0x12ddf8bcu));
  /* 12dcc7eb call dword ptr [0x12de2354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2354))), 0x12dcc7f1u);
  /* 12dcc7f1 cmp dword ptr [0x12ddf8ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf8ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcc7f8 je 0x12dcc818 */
  if (C.zf) goto L_12dcc818;
  /* 12dcc7fa push 0x12ddf8bc */
  push32((uint32_t)(0x12ddf8bcu));
  /* 12dcc7ff call dword ptr [0x12de2344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2344))), 0x12dcc805u);
  /* 12dcc805 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12dcc807 call 0x12dc72f0 */
  push32(0x12dcc80cu); f_12dc72f0();
  /* 12dcc80c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcc80f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12dcc816 jmp 0x12dcc81f */
  goto L_12dcc81f;
L_12dcc818:;
  /* 12dcc818 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12dcc81f:;
  /* 12dcc81f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 12dcc823 push eax */
  push32((uint32_t)(EAX));
  /* 12dcc824 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcc827 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcc828 call 0x12dcc860 */
  push32(0x12dcc82du); f_12dcc860();
  /* 12dcc82d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcc830 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dcc833 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcc837 je 0x12dcc845 */
  if (C.zf) goto L_12dcc845;
  /* 12dcc839 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12dcc83b call 0x12dc7390 */
  push32(0x12dcc840u); f_12dc7390();
  /* 12dcc840 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcc843 jmp 0x12dcc850 */
  goto L_12dcc850;
L_12dcc845:;
  /* 12dcc845 push 0x12ddf8bc */
  push32((uint32_t)(0x12ddf8bcu));
  /* 12dcc84a call dword ptr [0x12de2344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2344))), 0x12dcc850u);
L_12dcc850:;
  /* 12dcc850 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcc853 mov esp, ebp */
  ESP = (EBP);
  /* 12dcc855 pop ebp */
  EBP = (pop32());
  /* 12dcc856 ret  */
  ESPCHK(0x12dcc7e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c860 @ 0x12dcc860 (160 bytes, 50 insns) */
void f_12dcc860(void) {
  FTRACE(0x12dcc860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcc860 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcc861 mov ebp, esp */
  EBP = (ESP);
  /* 12dcc863 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcc866 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcc86a jne 0x12dcc873 */
  if (!C.zf) goto L_12dcc873;
  /* 12dcc86c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dcc86e jmp 0x12dcc8fc */
  goto L_12dcc8fc;
L_12dcc873:;
  /* 12dcc873 cmp dword ptr [0x12ddf730], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf730))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcc87a jne 0x12dcc8aa */
  if (!C.zf) goto L_12dcc8aa;
  /* 12dcc87c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcc87f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dcc884 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcc889 jle 0x12dcc89b */
  if ((C.zf||C.sf!=C.of)) goto L_12dcc89b;
  /* 12dcc88b call 0x12dcb7c0 */
  push32(0x12dcc890u); f_12dcb7c0();
  /* 12dcc890 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 12dcc896 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dcc899 jmp 0x12dcc8fc */
  goto L_12dcc8fc;
L_12dcc89b:;
  /* 12dcc89b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcc89e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 12dcc8a1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 12dcc8a3 mov eax, 1 */
  EAX = (0x1u);
  /* 12dcc8a8 jmp 0x12dcc8fc */
  goto L_12dcc8fc;
L_12dcc8aa:;
  /* 12dcc8aa mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12dcc8b1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12dcc8b4 push eax */
  push32((uint32_t)(EAX));
  /* 12dcc8b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dcc8b7 mov ecx, dword ptr [0x12dddea4] */
  ECX = (r32((uint32_t)(0x12dddea4)));
  /* 12dcc8bd push ecx */
  push32((uint32_t)(ECX));
  /* 12dcc8be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcc8c1 push edx */
  push32((uint32_t)(EDX));
  /* 12dcc8c2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dcc8c4 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 12dcc8c7 push eax */
  push32((uint32_t)(EAX));
  /* 12dcc8c8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12dcc8cd mov ecx, dword ptr [0x12ddf740] */
  ECX = (r32((uint32_t)(0x12ddf740)));
  /* 12dcc8d3 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcc8d4 call dword ptr [0x12de23ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de23ac))), 0x12dcc8dau);
  /* 12dcc8da mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dcc8dd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcc8e1 je 0x12dcc8e9 */
  if (C.zf) goto L_12dcc8e9;
  /* 12dcc8e3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcc8e7 je 0x12dcc8f9 */
  if (C.zf) goto L_12dcc8f9;
L_12dcc8e9:;
  /* 12dcc8e9 call 0x12dcb7c0 */
  push32(0x12dcc8eeu); f_12dcb7c0();
  /* 12dcc8ee mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 12dcc8f4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dcc8f7 jmp 0x12dcc8fc */
  goto L_12dcc8fc;
L_12dcc8f9:;
  /* 12dcc8f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12dcc8fc:;
  /* 12dcc8fc mov esp, ebp */
  ESP = (EBP);
  /* 12dcc8fe pop ebp */
  EBP = (pop32());
  /* 12dcc8ff ret  */
  ESPCHK(0x12dcc860u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x12dcc900 (32 bytes, 18 insns) */
void f_12dcc900(void) {
  FTRACE(0x12dcc900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcc900 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcc901 mov ebp, esp */
  EBP = (ESP);
  /* 12dcc903 push ebx */
  push32((uint32_t)(EBX));
  /* 12dcc904 push esi */
  push32((uint32_t)(ESI));
  /* 12dcc905 push edi */
  push32((uint32_t)(EDI));
  /* 12dcc906 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcc907 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dcc909 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dcc90b push 0x12dcc918 */
  push32((uint32_t)(0x12dcc918u));
  /* 12dcc910 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12dcc913 call 0x12dd404c */
  push32(0x12dcc918u); f_12dd404c();
  /* 12dcc918 pop ebp */
  EBP = (pop32());
  /* 12dcc919 pop edi */
  EDI = (pop32());
  /* 12dcc91a pop esi */
  ESI = (pop32());
  /* 12dcc91b pop ebx */
  EBX = (pop32());
  /* 12dcc91c mov esp, ebp */
  ESP = (EBP);
  /* 12dcc91e pop ebp */
  EBP = (pop32());
  /* 12dcc91f ret  */
  ESPCHK(0x12dcc900u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x12dcc942 (104 bytes, 33 insns) */
void f_12dcc942(void) {
  FTRACE(0x12dcc942u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcc942 push ebx */
  push32((uint32_t)(EBX));
  /* 12dcc943 push esi */
  push32((uint32_t)(ESI));
  /* 12dcc944 push edi */
  push32((uint32_t)(EDI));
  /* 12dcc945 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12dcc949 push eax */
  push32((uint32_t)(EAX));
  /* 12dcc94a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 12dcc94c push 0x12dcc920 */
  push32((uint32_t)(0x12dcc920u));
  /* 12dcc951 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 12dcc958 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_12dcc95f:;
  /* 12dcc95f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 12dcc963 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 12dcc966 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 12dcc969 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcc96c je 0x12dcc99c */
  if (C.zf) goto L_12dcc99c;
  /* 12dcc96e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcc972 je 0x12dcc99c */
  if (C.zf) goto L_12dcc99c;
  /* 12dcc974 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 12dcc977 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 12dcc97a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 12dcc97e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 12dcc981 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcc986 jne 0x12dcc99a */
  if (!C.zf) goto L_12dcc99a;
  /* 12dcc988 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 12dcc98d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 12dcc991 call 0x12dcc9d6 */
  push32(0x12dcc996u); f_12dcc9d6();
  /* 12dcc996 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x12dcc99au);
L_12dcc99a:;
  /* 12dcc99a jmp 0x12dcc95f */
  goto L_12dcc95f;
L_12dcc99c:;
  /* 12dcc99c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 12dcc9a3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcc9a6 pop edi */
  EDI = (pop32());
  /* 12dcc9a7 pop esi */
  ESI = (pop32());
  /* 12dcc9a8 pop ebx */
  EBX = (pop32());
  /* 12dcc9a9 ret  */
  ESPCHK(0x12dcc942u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c9d6 @ 0x12dcc9d6 (24 bytes, 10 insns) */
void f_12dcc9d6(void) {
  FTRACE(0x12dcc9d6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcc9d6 push ebx */
  push32((uint32_t)(EBX));
  /* 12dcc9d7 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcc9d8 mov ebx, 0x12dde3b8 */
  EBX = (0x12dde3b8u);
  /* 12dcc9dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcc9e0 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 12dcc9e3 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 12dcc9e6 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 12dcc9e9 pop ecx */
  ECX = (pop32());
  /* 12dcc9ea pop ebx */
  EBX = (pop32());
  /* 12dcc9eb ret 4 */
  ESPCHK(0x12dcc9d6u, _esp0);
  ESP += 8; return;
}

/* FUN_1000cab5 @ 0x12dccab5 (27 bytes, 11 insns) */
void f_12dccab5(void) {
  FTRACE(0x12dccab5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dccab5 push ebp */
  push32((uint32_t)(EBP));
  /* 12dccab6 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 12dccaba mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 12dccabc mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12dccabf push eax */
  push32((uint32_t)(EAX));
  /* 12dccac0 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 12dccac3 push eax */
  push32((uint32_t)(EAX));
  /* 12dccac4 call 0x12dcc942 */
  push32(0x12dccac9u); f_12dcc942();
  /* 12dccac9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dccacc pop ebp */
  EBP = (pop32());
  /* 12dccacd ret 4 */
  ESPCHK(0x12dccab5u, _esp0);
  ESP += 8; return;
}

/* FUN_1000cad0 @ 0x12dccad0 (482 bytes, 138 insns) */
void f_12dccad0(void) {
  FTRACE(0x12dccad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dccad0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dccad1 mov ebp, esp */
  EBP = (ESP);
  /* 12dccad3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dccad6 push esi */
  push32((uint32_t)(ESI));
  /* 12dccad7 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 12dccade push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12dccae0 call 0x12dc72f0 */
  push32(0x12dccae5u); f_12dc72f0();
  /* 12dccae5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dccae8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12dccaef jmp 0x12dccafa */
  goto L_12dccafa;
L_12dccaf1:;
  /* 12dccaf1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dccaf4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dccaf7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12dccafa:;
  /* 12dccafa cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dccafe jge 0x12dccca0 */
  if ((C.sf==C.of)) goto L_12dccca0;
  /* 12dccb04 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dccb07 cmp dword ptr [ecx*4 + 0x12de0f00], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12de0f00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dccb0f je 0x12dccc06 */
  if (C.zf) goto L_12dccc06;
  /* 12dccb15 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dccb18 mov eax, dword ptr [edx*4 + 0x12de0f00] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12de0f00)));
  /* 12dccb1f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dccb22 jmp 0x12dccb2d */
  goto L_12dccb2d;
L_12dccb24:;
  /* 12dccb24 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dccb27 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dccb2a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12dccb2d:;
  /* 12dccb2d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dccb30 mov eax, dword ptr [edx*4 + 0x12de0f00] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12de0f00)));
  /* 12dccb37 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dccb3c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dccb3f jae 0x12dccbf6 */
  if (!C.cf) goto L_12dccbf6;
  /* 12dccb45 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dccb48 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12dccb4c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12dccb4f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dccb51 jne 0x12dccbf1 */
  if (!C.zf) goto L_12dccbf1;
  /* 12dccb57 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dccb5a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dccb5e jne 0x12dccb99 */
  if (!C.zf) goto L_12dccb99;
  /* 12dccb60 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12dccb62 call 0x12dc72f0 */
  push32(0x12dccb67u); f_12dc72f0();
  /* 12dccb67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dccb6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dccb6d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dccb71 jne 0x12dccb8f */
  if (!C.zf) goto L_12dccb8f;
  /* 12dccb73 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dccb76 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dccb79 push edx */
  push32((uint32_t)(EDX));
  /* 12dccb7a call dword ptr [0x12de232c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de232c))), 0x12dccb80u);
  /* 12dccb80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dccb83 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12dccb86 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dccb89 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dccb8c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_12dccb8f:;
  /* 12dccb8f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12dccb91 call 0x12dc7390 */
  push32(0x12dccb96u); f_12dc7390();
  /* 12dccb96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dccb99:;
  /* 12dccb99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dccb9c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dccb9f push eax */
  push32((uint32_t)(EAX));
  /* 12dccba0 call dword ptr [0x12de231c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de231c))), 0x12dccba6u);
  /* 12dccba6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dccba9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12dccbad and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12dccbb0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dccbb2 je 0x12dccbc6 */
  if (C.zf) goto L_12dccbc6;
  /* 12dccbb4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dccbb7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dccbba push eax */
  push32((uint32_t)(EAX));
  /* 12dccbbb call dword ptr [0x12de2318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2318))), 0x12dccbc1u);
  /* 12dccbc1 jmp 0x12dccb24 */
  goto L_12dccb24;
L_12dccbc6:;
  /* 12dccbc6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dccbc9 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12dccbcf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dccbd2 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12dccbd5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dccbd8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dccbdb sub eax, dword ptr [edx*4 + 0x12de0f00] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x12de0f00))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dccbe2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12dccbe3 mov esi, 0x24 */
  ESI = (0x24u);
  /* 12dccbe8 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12dccbea add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dccbec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dccbef jmp 0x12dccbf6 */
  goto L_12dccbf6;
L_12dccbf1:;
  /* 12dccbf1 jmp 0x12dccb24 */
  goto L_12dccb24;
L_12dccbf6:;
  /* 12dccbf6 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dccbfa je 0x12dccc01 */
  if (C.zf) goto L_12dccc01;
  /* 12dccbfc jmp 0x12dccca0 */
  goto L_12dccca0;
L_12dccc01:;
  /* 12dccc01 jmp 0x12dccc9b */
  goto L_12dccc9b;
L_12dccc06:;
  /* 12dccc06 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 12dccc08 push 0x12ddb184 */
  push32((uint32_t)(0x12ddb184u));
  /* 12dccc0d push 2 */
  push32((uint32_t)(0x2u));
  /* 12dccc0f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12dccc14 call 0x12dc38f0 */
  push32(0x12dccc19u); f_12dc38f0();
  /* 12dccc19 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dccc1c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dccc1f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dccc23 je 0x12dccc99 */
  if (C.zf) goto L_12dccc99;
  /* 12dccc25 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dccc28 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dccc2b mov dword ptr [eax*4 + 0x12de0f00], ecx */
  w32((uint32_t)(EAX*4 + 0x12de0f00), (ECX));
  /* 12dccc32 mov edx, dword ptr [0x12de103c] */
  EDX = (r32((uint32_t)(0x12de103c)));
  /* 12dccc38 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dccc3b mov dword ptr [0x12de103c], edx */
  w32((uint32_t)(0x12de103c), (EDX));
  /* 12dccc41 jmp 0x12dccc4c */
  goto L_12dccc4c;
L_12dccc43:;
  /* 12dccc43 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dccc46 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dccc49 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12dccc4c:;
  /* 12dccc4c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dccc4f mov edx, dword ptr [ecx*4 + 0x12de0f00] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12de0f00)));
  /* 12dccc56 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dccc5c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dccc5f jae 0x12dccc84 */
  if (!C.cf) goto L_12dccc84;
  /* 12dccc61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dccc64 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12dccc68 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dccc6b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12dccc71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dccc74 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12dccc78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dccc7b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12dccc82 jmp 0x12dccc43 */
  goto L_12dccc43;
L_12dccc84:;
  /* 12dccc84 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dccc87 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12dccc8a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dccc8d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dccc90 push edx */
  push32((uint32_t)(EDX));
  /* 12dccc91 call 0x12dccfe0 */
  push32(0x12dccc96u); f_12dccfe0();
  /* 12dccc96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dccc99:;
  /* 12dccc99 jmp 0x12dccca0 */
  goto L_12dccca0;
L_12dccc9b:;
  /* 12dccc9b jmp 0x12dccaf1 */
  goto L_12dccaf1;
L_12dccca0:;
  /* 12dccca0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12dccca2 call 0x12dc7390 */
  push32(0x12dccca7u); f_12dc7390();
  /* 12dccca7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcccaa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcccad pop esi */
  ESI = (pop32());
  /* 12dcccae mov esp, ebp */
  ESP = (EBP);
  /* 12dcccb0 pop ebp */
  EBP = (pop32());
  /* 12dcccb1 ret  */
  ESPCHK(0x12dccad0u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x12dcccc0 (183 bytes, 57 insns) */
void f_12dcccc0(void) {
  FTRACE(0x12dcccc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcccc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcccc1 mov ebp, esp */
  EBP = (ESP);
  /* 12dcccc3 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcccc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcccc7 cmp eax, dword ptr [0x12de103c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12de103c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dccccd jae 0x12dccd5a */
  if (!C.cf) goto L_12dccd5a;
  /* 12dcccd3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcccd6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12dcccd9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcccdc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12dcccdf imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dccce2 mov eax, dword ptr [ecx*4 + 0x12de0f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12de0f00)));
  /* 12dccce9 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dccced jne 0x12dccd5a */
  if (!C.zf) goto L_12dccd5a;
  /* 12dcccef cmp dword ptr [0x12ddf528], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf528))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcccf6 jne 0x12dccd3a */
  if (!C.zf) goto L_12dccd3a;
  /* 12dcccf8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcccfb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12dcccfe cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dccd02 je 0x12dccd12 */
  if (C.zf) goto L_12dccd12;
  /* 12dccd04 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dccd08 je 0x12dccd20 */
  if (C.zf) goto L_12dccd20;
  /* 12dccd0a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dccd0e je 0x12dccd2e */
  if (C.zf) goto L_12dccd2e;
  /* 12dccd10 jmp 0x12dccd3a */
  goto L_12dccd3a;
L_12dccd12:;
  /* 12dccd12 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dccd15 push edx */
  push32((uint32_t)(EDX));
  /* 12dccd16 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 12dccd18 call dword ptr [0x12de22e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22e4))), 0x12dccd1eu);
  /* 12dccd1e jmp 0x12dccd3a */
  goto L_12dccd3a;
L_12dccd20:;
  /* 12dccd20 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dccd23 push eax */
  push32((uint32_t)(EAX));
  /* 12dccd24 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12dccd26 call dword ptr [0x12de22e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22e4))), 0x12dccd2cu);
  /* 12dccd2c jmp 0x12dccd3a */
  goto L_12dccd3a;
L_12dccd2e:;
  /* 12dccd2e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dccd31 push ecx */
  push32((uint32_t)(ECX));
  /* 12dccd32 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12dccd34 call dword ptr [0x12de22e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22e4))), 0x12dccd3au);
L_12dccd3a:;
  /* 12dccd3a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dccd3d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12dccd40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dccd43 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12dccd46 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dccd49 mov ecx, dword ptr [edx*4 + 0x12de0f00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12de0f00)));
  /* 12dccd50 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dccd53 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 12dccd56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dccd58 jmp 0x12dccd73 */
  goto L_12dccd73;
L_12dccd5a:;
  /* 12dccd5a call 0x12dcb7c0 */
  push32(0x12dccd5fu); f_12dcb7c0();
  /* 12dccd5f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12dccd65 call 0x12dcb7d0 */
  push32(0x12dccd6au); f_12dcb7d0();
  /* 12dccd6a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12dccd70 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12dccd73:;
  /* 12dccd73 mov esp, ebp */
  ESP = (EBP);
  /* 12dccd75 pop ebp */
  EBP = (pop32());
  /* 12dccd76 ret  */
  ESPCHK(0x12dcccc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd80 @ 0x12dccd80 (216 bytes, 63 insns) */
void f_12dccd80(void) {
  FTRACE(0x12dccd80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dccd80 push ebp */
  push32((uint32_t)(EBP));
  /* 12dccd81 mov ebp, esp */
  EBP = (ESP);
  /* 12dccd83 push ecx */
  push32((uint32_t)(ECX));
  /* 12dccd84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dccd87 cmp eax, dword ptr [0x12de103c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12de103c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dccd8d jae 0x12dcce3b */
  if (!C.cf) goto L_12dcce3b;
  /* 12dccd93 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dccd96 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12dccd99 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dccd9c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12dccd9f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dccda2 mov eax, dword ptr [ecx*4 + 0x12de0f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12de0f00)));
  /* 12dccda9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12dccdae and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12dccdb1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dccdb3 je 0x12dcce3b */
  if (C.zf) goto L_12dcce3b;
  /* 12dccdb9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dccdbc sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12dccdbf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dccdc2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12dccdc5 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dccdc8 mov ecx, dword ptr [edx*4 + 0x12de0f00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12de0f00)));
  /* 12dccdcf cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dccdd3 je 0x12dcce3b */
  if (C.zf) goto L_12dcce3b;
  /* 12dccdd5 cmp dword ptr [0x12ddf528], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf528))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dccddc jne 0x12dcce1a */
  if (!C.zf) goto L_12dcce1a;
  /* 12dccdde mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dccde1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12dccde4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dccde8 je 0x12dccdf8 */
  if (C.zf) goto L_12dccdf8;
  /* 12dccdea cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dccdee je 0x12dcce04 */
  if (C.zf) goto L_12dcce04;
  /* 12dccdf0 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dccdf4 je 0x12dcce10 */
  if (C.zf) goto L_12dcce10;
  /* 12dccdf6 jmp 0x12dcce1a */
  goto L_12dcce1a;
L_12dccdf8:;
  /* 12dccdf8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dccdfa push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 12dccdfc call dword ptr [0x12de22e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22e4))), 0x12dcce02u);
  /* 12dcce02 jmp 0x12dcce1a */
  goto L_12dcce1a;
L_12dcce04:;
  /* 12dcce04 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dcce06 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12dcce08 call dword ptr [0x12de22e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22e4))), 0x12dcce0eu);
  /* 12dcce0e jmp 0x12dcce1a */
  goto L_12dcce1a;
L_12dcce10:;
  /* 12dcce10 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dcce12 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12dcce14 call dword ptr [0x12de22e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22e4))), 0x12dcce1au);
L_12dcce1a:;
  /* 12dcce1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcce1d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12dcce20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcce23 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12dcce26 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dcce29 mov edx, dword ptr [eax*4 + 0x12de0f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12de0f00)));
  /* 12dcce30 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 12dcce37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dcce39 jmp 0x12dcce54 */
  goto L_12dcce54;
L_12dcce3b:;
  /* 12dcce3b call 0x12dcb7c0 */
  push32(0x12dcce40u); f_12dcb7c0();
  /* 12dcce40 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12dcce46 call 0x12dcb7d0 */
  push32(0x12dcce4bu); f_12dcb7d0();
  /* 12dcce4b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12dcce51 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12dcce54:;
  /* 12dcce54 mov esp, ebp */
  ESP = (EBP);
  /* 12dcce56 pop ebp */
  EBP = (pop32());
  /* 12dcce57 ret  */
  ESPCHK(0x12dccd80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce60 @ 0x12dcce60 (102 bytes, 30 insns) */
void f_12dcce60(void) {
  FTRACE(0x12dcce60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcce60 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcce61 mov ebp, esp */
  EBP = (ESP);
  /* 12dcce63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcce66 cmp eax, dword ptr [0x12de103c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12de103c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcce6c jae 0x12dcceab */
  if (!C.cf) goto L_12dcceab;
  /* 12dcce6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcce71 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12dcce74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcce77 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12dcce7a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dcce7d mov eax, dword ptr [ecx*4 + 0x12de0f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12de0f00)));
  /* 12dcce84 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12dcce89 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12dcce8c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dcce8e je 0x12dcceab */
  if (C.zf) goto L_12dcceab;
  /* 12dcce90 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcce93 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12dcce96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcce99 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12dcce9c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dcce9f mov ecx, dword ptr [edx*4 + 0x12de0f00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12de0f00)));
  /* 12dccea6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 12dccea9 jmp 0x12dccec4 */
  goto L_12dccec4;
L_12dcceab:;
  /* 12dcceab call 0x12dcb7c0 */
  push32(0x12dcceb0u); f_12dcb7c0();
  /* 12dcceb0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12dcceb6 call 0x12dcb7d0 */
  push32(0x12dccebbu); f_12dcb7d0();
  /* 12dccebb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12dccec1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12dccec4:;
  /* 12dccec4 pop ebp */
  EBP = (pop32());
  /* 12dccec5 ret  */
  ESPCHK(0x12dcce60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ced0 @ 0x12dcced0 (260 bytes, 83 insns) */
void f_12dcced0(void) {
  FTRACE(0x12dcced0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcced0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcced1 mov ebp, esp */
  EBP = (ESP);
  /* 12dcced3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcced6 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 12dcceda mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dccedd and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 12dccee0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dccee2 je 0x12dcceed */
  if (C.zf) goto L_12dcceed;
  /* 12dccee4 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 12dccee7 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12dcceea mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_12dcceed:;
  /* 12dcceed mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dccef0 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 12dccef6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dccef8 je 0x12dccf02 */
  if (C.zf) goto L_12dccf02;
  /* 12dccefa mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12dccefd or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 12dcceff mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_12dccf02:;
  /* 12dccf02 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dccf05 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 12dccf0b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dccf0d je 0x12dccf18 */
  if (C.zf) goto L_12dccf18;
  /* 12dccf0f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12dccf12 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 12dccf15 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_12dccf18:;
  /* 12dccf18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dccf1b push eax */
  push32((uint32_t)(EAX));
  /* 12dccf1c call dword ptr [0x12de238c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de238c))), 0x12dccf22u);
  /* 12dccf22 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dccf25 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dccf29 jne 0x12dccf42 */
  if (!C.zf) goto L_12dccf42;
  /* 12dccf2b call dword ptr [0x12de2380] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2380))), 0x12dccf31u);
  /* 12dccf31 push eax */
  push32((uint32_t)(EAX));
  /* 12dccf32 call 0x12dcb720 */
  push32(0x12dccf37u); f_12dcb720();
  /* 12dccf37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dccf3a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dccf3d jmp 0x12dccfd0 */
  goto L_12dccfd0;
L_12dccf42:;
  /* 12dccf42 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dccf46 jne 0x12dccf53 */
  if (!C.zf) goto L_12dccf53;
  /* 12dccf48 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 12dccf4b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 12dccf4e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 12dccf51 jmp 0x12dccf62 */
  goto L_12dccf62;
L_12dccf53:;
  /* 12dccf53 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dccf57 jne 0x12dccf62 */
  if (!C.zf) goto L_12dccf62;
  /* 12dccf59 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12dccf5c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 12dccf5f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_12dccf62:;
  /* 12dccf62 call 0x12dccad0 */
  push32(0x12dccf67u); f_12dccad0();
  /* 12dccf67 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dccf6a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dccf6e jne 0x12dccf8b */
  if (!C.zf) goto L_12dccf8b;
  /* 12dccf70 call 0x12dcb7c0 */
  push32(0x12dccf75u); f_12dcb7c0();
  /* 12dccf75 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 12dccf7b call 0x12dcb7d0 */
  push32(0x12dccf80u); f_12dcb7d0();
  /* 12dccf80 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12dccf86 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dccf89 jmp 0x12dccfd0 */
  goto L_12dccfd0;
L_12dccf8b:;
  /* 12dccf8b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dccf8e push eax */
  push32((uint32_t)(EAX));
  /* 12dccf8f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dccf92 push ecx */
  push32((uint32_t)(ECX));
  /* 12dccf93 call 0x12dcccc0 */
  push32(0x12dccf98u); f_12dcccc0();
  /* 12dccf98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dccf9b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12dccf9e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 12dccfa1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 12dccfa4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dccfa7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12dccfaa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dccfad and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12dccfb0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dccfb3 mov edx, dword ptr [eax*4 + 0x12de0f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12de0f00)));
  /* 12dccfba mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12dccfbd mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 12dccfc1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dccfc4 push ecx */
  push32((uint32_t)(ECX));
  /* 12dccfc5 call 0x12dcd070 */
  push32(0x12dccfcau); f_12dcd070();
  /* 12dccfca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dccfcd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12dccfd0:;
  /* 12dccfd0 mov esp, ebp */
  ESP = (EBP);
  /* 12dccfd2 pop ebp */
  EBP = (pop32());
  /* 12dccfd3 ret  */
  ESPCHK(0x12dcced0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cfe0 @ 0x12dccfe0 (134 bytes, 44 insns) */
void f_12dccfe0(void) {
  FTRACE(0x12dccfe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dccfe0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dccfe1 mov ebp, esp */
  EBP = (ESP);
  /* 12dccfe3 push ecx */
  push32((uint32_t)(ECX));
  /* 12dccfe4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dccfe7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12dccfea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dccfed and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12dccff0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dccff3 mov edx, dword ptr [eax*4 + 0x12de0f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12de0f00)));
  /* 12dccffa add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dccffc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12dccfff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcd002 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcd006 jne 0x12dcd041 */
  if (!C.zf) goto L_12dcd041;
  /* 12dcd008 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12dcd00a call 0x12dc72f0 */
  push32(0x12dcd00fu); f_12dc72f0();
  /* 12dcd00f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd012 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcd015 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcd019 jne 0x12dcd037 */
  if (!C.zf) goto L_12dcd037;
  /* 12dcd01b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcd01e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd021 push edx */
  push32((uint32_t)(EDX));
  /* 12dcd022 call dword ptr [0x12de232c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de232c))), 0x12dcd028u);
  /* 12dcd028 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcd02b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12dcd02e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd031 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcd034 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_12dcd037:;
  /* 12dcd037 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12dcd039 call 0x12dc7390 */
  push32(0x12dcd03eu); f_12dc7390();
  /* 12dcd03e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dcd041:;
  /* 12dcd041 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcd044 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12dcd047 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcd04a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12dcd04d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dcd050 mov edx, dword ptr [eax*4 + 0x12de0f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12de0f00)));
  /* 12dcd057 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 12dcd05b push eax */
  push32((uint32_t)(EAX));
  /* 12dcd05c call dword ptr [0x12de231c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de231c))), 0x12dcd062u);
  /* 12dcd062 mov esp, ebp */
  ESP = (EBP);
  /* 12dcd064 pop ebp */
  EBP = (pop32());
  /* 12dcd065 ret  */
  ESPCHK(0x12dccfe0u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x12dcd070 (38 bytes, 13 insns) */
void f_12dcd070(void) {
  FTRACE(0x12dcd070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcd070 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcd071 mov ebp, esp */
  EBP = (ESP);
  /* 12dcd073 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcd076 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12dcd079 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcd07c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12dcd07f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dcd082 mov edx, dword ptr [eax*4 + 0x12de0f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12de0f00)));
  /* 12dcd089 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 12dcd08d push eax */
  push32((uint32_t)(EAX));
  /* 12dcd08e call dword ptr [0x12de2318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2318))), 0x12dcd094u);
  /* 12dcd094 pop ebp */
  EBP = (pop32());
  /* 12dcd095 ret  */
  ESPCHK(0x12dcd070u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d0a0 @ 0x12dcd0a0 (218 bytes, 63 insns) */
void f_12dcd0a0(void) {
  FTRACE(0x12dcd0a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcd0a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcd0a1 mov ebp, esp */
  EBP = (ESP);
  /* 12dcd0a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcd0a6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12dcd0ad push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcd0af call 0x12dc72f0 */
  push32(0x12dcd0b4u); f_12dc72f0();
  /* 12dcd0b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd0b7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 12dcd0be jmp 0x12dcd0c9 */
  goto L_12dcd0c9;
L_12dcd0c0:;
  /* 12dcd0c0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcd0c3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd0c6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12dcd0c9:;
  /* 12dcd0c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcd0cc cmp ecx, dword ptr [0x12de0c00] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12de0c00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcd0d2 jge 0x12dcd169 */
  if ((C.sf==C.of)) goto L_12dcd169;
  /* 12dcd0d8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcd0db mov eax, dword ptr [0x12ddf8c0] */
  EAX = (r32((uint32_t)(0x12ddf8c0)));
  /* 12dcd0e0 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcd0e4 je 0x12dcd164 */
  if (C.zf) goto L_12dcd164;
  /* 12dcd0e6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcd0e9 mov edx, dword ptr [0x12ddf8c0] */
  EDX = (r32((uint32_t)(0x12ddf8c0)));
  /* 12dcd0ef mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12dcd0f2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12dcd0f5 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 12dcd0fb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dcd0fd je 0x12dcd121 */
  if (C.zf) goto L_12dcd121;
  /* 12dcd0ff mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcd102 mov eax, dword ptr [0x12ddf8c0] */
  EAX = (r32((uint32_t)(0x12ddf8c0)));
  /* 12dcd107 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12dcd10a push ecx */
  push32((uint32_t)(ECX));
  /* 12dcd10b call 0x12dcde90 */
  push32(0x12dcd110u); f_12dcde90();
  /* 12dcd110 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd113 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcd116 je 0x12dcd121 */
  if (C.zf) goto L_12dcd121;
  /* 12dcd118 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcd11b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd11e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12dcd121:;
  /* 12dcd121 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcd125 jl 0x12dcd164 */
  if ((C.sf!=C.of)) goto L_12dcd164;
  /* 12dcd127 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcd12a mov ecx, dword ptr [0x12ddf8c0] */
  ECX = (r32((uint32_t)(0x12ddf8c0)));
  /* 12dcd130 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12dcd133 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd136 push edx */
  push32((uint32_t)(EDX));
  /* 12dcd137 call dword ptr [0x12de2394] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2394))), 0x12dcd13du);
  /* 12dcd13d push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcd13f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcd142 mov ecx, dword ptr [0x12ddf8c0] */
  ECX = (r32((uint32_t)(0x12ddf8c0)));
  /* 12dcd148 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12dcd14b push edx */
  push32((uint32_t)(EDX));
  /* 12dcd14c call 0x12dc4380 */
  push32(0x12dcd151u); f_12dc4380();
  /* 12dcd151 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd154 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcd157 mov ecx, dword ptr [0x12ddf8c0] */
  ECX = (r32((uint32_t)(0x12ddf8c0)));
  /* 12dcd15d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_12dcd164:;
  /* 12dcd164 jmp 0x12dcd0c0 */
  goto L_12dcd0c0;
L_12dcd169:;
  /* 12dcd169 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcd16b call 0x12dc7390 */
  push32(0x12dcd170u); f_12dc7390();
  /* 12dcd170 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd173 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcd176 mov esp, ebp */
  ESP = (EBP);
  /* 12dcd178 pop ebp */
  EBP = (pop32());
  /* 12dcd179 ret  */
  ESPCHK(0x12dcd0a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d180 @ 0x12dcd180 (68 bytes, 26 insns) */
void f_12dcd180(void) {
  FTRACE(0x12dcd180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcd180 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcd181 mov ebp, esp */
  EBP = (ESP);
  /* 12dcd183 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcd184 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcd188 jne 0x12dcd196 */
  if (!C.zf) goto L_12dcd196;
  /* 12dcd18a push 0 */
  push32((uint32_t)(0x0u));
  /* 12dcd18c call 0x12dcd2f0 */
  push32(0x12dcd191u); f_12dcd2f0();
  /* 12dcd191 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd194 jmp 0x12dcd1c0 */
  goto L_12dcd1c0;
L_12dcd196:;
  /* 12dcd196 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcd199 push eax */
  push32((uint32_t)(EAX));
  /* 12dcd19a call 0x12dcc700 */
  push32(0x12dcd19fu); f_12dcc700();
  /* 12dcd19f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd1a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcd1a5 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcd1a6 call 0x12dcd1d0 */
  push32(0x12dcd1abu); f_12dcd1d0();
  /* 12dcd1ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd1ae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dcd1b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcd1b4 push edx */
  push32((uint32_t)(EDX));
  /* 12dcd1b5 call 0x12dcc770 */
  push32(0x12dcd1bau); f_12dcc770();
  /* 12dcd1ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd1bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12dcd1c0:;
  /* 12dcd1c0 mov esp, ebp */
  ESP = (EBP);
  /* 12dcd1c2 pop ebp */
  EBP = (pop32());
  /* 12dcd1c3 ret  */
  ESPCHK(0x12dcd180u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d1d0 @ 0x12dcd1d0 (65 bytes, 26 insns) */
void f_12dcd1d0(void) {
  FTRACE(0x12dcd1d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcd1d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcd1d1 mov ebp, esp */
  EBP = (ESP);
  /* 12dcd1d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcd1d6 push eax */
  push32((uint32_t)(EAX));
  /* 12dcd1d7 call 0x12dcd220 */
  push32(0x12dcd1dcu); f_12dcd220();
  /* 12dcd1dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd1df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcd1e1 je 0x12dcd1e8 */
  if (C.zf) goto L_12dcd1e8;
  /* 12dcd1e3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dcd1e6 jmp 0x12dcd20f */
  goto L_12dcd20f;
L_12dcd1e8:;
  /* 12dcd1e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcd1eb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12dcd1ee and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 12dcd1f4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dcd1f6 je 0x12dcd20d */
  if (C.zf) goto L_12dcd20d;
  /* 12dcd1f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcd1fb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12dcd1fe push ecx */
  push32((uint32_t)(ECX));
  /* 12dcd1ff call 0x12dcdfe0 */
  push32(0x12dcd204u); f_12dcdfe0();
  /* 12dcd204 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd207 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12dcd209 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcd20b jmp 0x12dcd20f */
  goto L_12dcd20f;
L_12dcd20d:;
  /* 12dcd20d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12dcd20f:;
  /* 12dcd20f pop ebp */
  EBP = (pop32());
  /* 12dcd210 ret  */
  ESPCHK(0x12dcd1d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d220 @ 0x12dcd220 (183 bytes, 62 insns) */
void f_12dcd220(void) {
  FTRACE(0x12dcd220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcd220 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcd221 mov ebp, esp */
  EBP = (ESP);
  /* 12dcd223 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcd226 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12dcd22d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcd230 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dcd233 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcd236 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12dcd239 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12dcd23c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcd23f jne 0x12dcd2bb */
  if (!C.zf) goto L_12dcd2bb;
  /* 12dcd241 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcd244 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12dcd247 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 12dcd24d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dcd24f je 0x12dcd2bb */
  if (C.zf) goto L_12dcd2bb;
  /* 12dcd251 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcd254 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcd257 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 12dcd259 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcd25c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dcd25f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcd263 jle 0x12dcd2bb */
  if ((C.zf||C.sf!=C.of)) goto L_12dcd2bb;
  /* 12dcd265 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dcd268 push edx */
  push32((uint32_t)(EDX));
  /* 12dcd269 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcd26c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12dcd26f push ecx */
  push32((uint32_t)(ECX));
  /* 12dcd270 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcd273 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12dcd276 push eax */
  push32((uint32_t)(EAX));
  /* 12dcd277 call 0x12dcc190 */
  push32(0x12dcd27cu); f_12dcc190();
  /* 12dcd27c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd27f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcd282 jne 0x12dcd2a5 */
  if (!C.zf) goto L_12dcd2a5;
  /* 12dcd284 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcd287 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12dcd28a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 12dcd290 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dcd292 je 0x12dcd2a3 */
  if (C.zf) goto L_12dcd2a3;
  /* 12dcd294 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcd297 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12dcd29a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 12dcd29d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcd2a0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_12dcd2a3:;
  /* 12dcd2a3 jmp 0x12dcd2bb */
  goto L_12dcd2bb;
L_12dcd2a5:;
  /* 12dcd2a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcd2a8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12dcd2ab or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 12dcd2ae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcd2b1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12dcd2b4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12dcd2bb:;
  /* 12dcd2bb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcd2be mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcd2c1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12dcd2c4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12dcd2c6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcd2c9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 12dcd2d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcd2d3 mov esp, ebp */
  ESP = (EBP);
  /* 12dcd2d5 pop ebp */
  EBP = (pop32());
  /* 12dcd2d6 ret  */
  ESPCHK(0x12dcd220u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d2e0 @ 0x12dcd2e0 (15 bytes, 7 insns) */
void f_12dcd2e0(void) {
  FTRACE(0x12dcd2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcd2e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcd2e1 mov ebp, esp */
  EBP = (ESP);
  /* 12dcd2e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dcd2e5 call 0x12dcd2f0 */
  push32(0x12dcd2eau); f_12dcd2f0();
  /* 12dcd2ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd2ed pop ebp */
  EBP = (pop32());
  /* 12dcd2ee ret  */
  ESPCHK(0x12dcd2e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d2f0 @ 0x12dcd2f0 (319 bytes, 94 insns) */
void f_12dcd2f0(void) {
  FTRACE(0x12dcd2f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcd2f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcd2f1 mov ebp, esp */
  EBP = (ESP);
  /* 12dcd2f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcd2f6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12dcd2fd mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12dcd304 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcd306 call 0x12dc72f0 */
  push32(0x12dcd30bu); f_12dc72f0();
  /* 12dcd30b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd30e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12dcd315 jmp 0x12dcd320 */
  goto L_12dcd320;
L_12dcd317:;
  /* 12dcd317 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dcd31a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd31d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12dcd320:;
  /* 12dcd320 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dcd323 cmp ecx, dword ptr [0x12de0c00] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12de0c00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcd329 jge 0x12dcd413 */
  if ((C.sf==C.of)) goto L_12dcd413;
  /* 12dcd32f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dcd332 mov eax, dword ptr [0x12ddf8c0] */
  EAX = (r32((uint32_t)(0x12ddf8c0)));
  /* 12dcd337 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcd33b je 0x12dcd40e */
  if (C.zf) goto L_12dcd40e;
  /* 12dcd341 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dcd344 mov edx, dword ptr [0x12ddf8c0] */
  EDX = (r32((uint32_t)(0x12ddf8c0)));
  /* 12dcd34a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12dcd34d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12dcd350 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 12dcd356 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dcd358 je 0x12dcd40e */
  if (C.zf) goto L_12dcd40e;
  /* 12dcd35e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dcd361 mov eax, dword ptr [0x12ddf8c0] */
  EAX = (r32((uint32_t)(0x12ddf8c0)));
  /* 12dcd366 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12dcd369 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcd36a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dcd36d push edx */
  push32((uint32_t)(EDX));
  /* 12dcd36e call 0x12dcc740 */
  push32(0x12dcd373u); f_12dcc740();
  /* 12dcd373 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd376 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dcd379 mov ecx, dword ptr [0x12ddf8c0] */
  ECX = (r32((uint32_t)(0x12ddf8c0)));
  /* 12dcd37f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12dcd382 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12dcd385 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 12dcd38a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcd38c je 0x12dcd3f5 */
  if (C.zf) goto L_12dcd3f5;
  /* 12dcd38e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcd392 jne 0x12dcd3b9 */
  if (!C.zf) goto L_12dcd3b9;
  /* 12dcd394 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dcd397 mov edx, dword ptr [0x12ddf8c0] */
  EDX = (r32((uint32_t)(0x12ddf8c0)));
  /* 12dcd39d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12dcd3a0 push eax */
  push32((uint32_t)(EAX));
  /* 12dcd3a1 call 0x12dcd1d0 */
  push32(0x12dcd3a6u); f_12dcd1d0();
  /* 12dcd3a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd3a9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcd3ac je 0x12dcd3b7 */
  if (C.zf) goto L_12dcd3b7;
  /* 12dcd3ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcd3b1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd3b4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12dcd3b7:;
  /* 12dcd3b7 jmp 0x12dcd3f5 */
  goto L_12dcd3f5;
L_12dcd3b9:;
  /* 12dcd3b9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcd3bd jne 0x12dcd3f5 */
  if (!C.zf) goto L_12dcd3f5;
  /* 12dcd3bf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dcd3c2 mov eax, dword ptr [0x12ddf8c0] */
  EAX = (r32((uint32_t)(0x12ddf8c0)));
  /* 12dcd3c7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12dcd3ca mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12dcd3cd and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12dcd3d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dcd3d2 je 0x12dcd3f5 */
  if (C.zf) goto L_12dcd3f5;
  /* 12dcd3d4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dcd3d7 mov ecx, dword ptr [0x12ddf8c0] */
  ECX = (r32((uint32_t)(0x12ddf8c0)));
  /* 12dcd3dd mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12dcd3e0 push edx */
  push32((uint32_t)(EDX));
  /* 12dcd3e1 call 0x12dcd1d0 */
  push32(0x12dcd3e6u); f_12dcd1d0();
  /* 12dcd3e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd3e9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcd3ec jne 0x12dcd3f5 */
  if (!C.zf) goto L_12dcd3f5;
  /* 12dcd3ee mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_12dcd3f5:;
  /* 12dcd3f5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dcd3f8 mov ecx, dword ptr [0x12ddf8c0] */
  ECX = (r32((uint32_t)(0x12ddf8c0)));
  /* 12dcd3fe mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12dcd401 push edx */
  push32((uint32_t)(EDX));
  /* 12dcd402 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dcd405 push eax */
  push32((uint32_t)(EAX));
  /* 12dcd406 call 0x12dcc7b0 */
  push32(0x12dcd40bu); f_12dcc7b0();
  /* 12dcd40b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dcd40e:;
  /* 12dcd40e jmp 0x12dcd317 */
  goto L_12dcd317;
L_12dcd413:;
  /* 12dcd413 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcd415 call 0x12dc7390 */
  push32(0x12dcd41au); f_12dc7390();
  /* 12dcd41a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd41d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcd421 jne 0x12dcd428 */
  if (!C.zf) goto L_12dcd428;
  /* 12dcd423 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcd426 jmp 0x12dcd42b */
  goto L_12dcd42b;
L_12dcd428:;
  /* 12dcd428 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12dcd42b:;
  /* 12dcd42b mov esp, ebp */
  ESP = (EBP);
  /* 12dcd42d pop ebp */
  EBP = (pop32());
  /* 12dcd42e ret  */
  ESPCHK(0x12dcd2f0u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x12dcd430 (15 bytes, 7 insns) */
void f_12dcd430(void) {
  FTRACE(0x12dcd430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcd430 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcd431 mov ebp, esp */
  EBP = (ESP);
  /* 12dcd433 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcd435 call 0x12dc2860 */
  push32(0x12dcd43au); f_12dc2860();
  /* 12dcd43a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd43d pop ebp */
  EBP = (pop32());
  /* 12dcd43e ret  */
  ESPCHK(0x12dcd430u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d440 @ 0x12dcd440 (1007 bytes, 269 insns) */
void f_12dcd440(void) {
  FTRACE(0x12dcd440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcd440 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcd441 mov ebp, esp */
  EBP = (ESP);
  /* 12dcd443 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcd449 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcd44d jl 0x12dcd455 */
  if ((C.sf!=C.of)) goto L_12dcd455;
  /* 12dcd44f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcd453 jle 0x12dcd45c */
  if ((C.zf||C.sf!=C.of)) goto L_12dcd45c;
L_12dcd455:;
  /* 12dcd455 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dcd457 jmp 0x12dcd82b */
  goto L_12dcd82b;
L_12dcd45c:;
  /* 12dcd45c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12dcd45e call 0x12dc72f0 */
  push32(0x12dcd463u); f_12dc72f0();
  /* 12dcd463 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd466 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12dcd46d mov eax, dword ptr [0x12ddf8ac] */
  EAX = (r32((uint32_t)(0x12ddf8ac)));
  /* 12dcd472 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd475 mov dword ptr [0x12ddf8ac], eax */
  w32((uint32_t)(0x12ddf8ac), (EAX));
L_12dcd47a:;
  /* 12dcd47a cmp dword ptr [0x12ddf8bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf8bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcd481 je 0x12dcd48d */
  if (C.zf) goto L_12dcd48d;
  /* 12dcd483 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dcd485 call dword ptr [0x12de22d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22d4))), 0x12dcd48bu);
  /* 12dcd48b jmp 0x12dcd47a */
  goto L_12dcd47a;
L_12dcd48d:;
  /* 12dcd48d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcd491 je 0x12dcd4d1 */
  if (C.zf) goto L_12dcd4d1;
  /* 12dcd493 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcd497 je 0x12dcd4b1 */
  if (C.zf) goto L_12dcd4b1;
  /* 12dcd499 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcd49c push ecx */
  push32((uint32_t)(ECX));
  /* 12dcd49d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcd4a0 push edx */
  push32((uint32_t)(EDX));
  /* 12dcd4a1 call 0x12dcd830 */
  push32(0x12dcd4a6u); f_12dcd830();
  /* 12dcd4a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd4a9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 12dcd4af jmp 0x12dcd4c3 */
  goto L_12dcd4c3;
L_12dcd4b1:;
  /* 12dcd4b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcd4b4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dcd4b7 mov ecx, dword ptr [eax + 0x12dde4dc] */
  ECX = (r32((uint32_t)(EAX + 0x12dde4dc)));
  /* 12dcd4bd mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_12dcd4c3:;
  /* 12dcd4c3 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 12dcd4c9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12dcd4cc jmp 0x12dcd80b */
  goto L_12dcd80b;
L_12dcd4d1:;
  /* 12dcd4d1 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 12dcd4d8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12dcd4df cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcd4e3 je 0x12dcd803 */
  if (C.zf) goto L_12dcd803;
  /* 12dcd4e9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcd4ec movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12dcd4ef cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcd4f2 jne 0x12dcd714 */
  if (!C.zf) goto L_12dcd714;
  /* 12dcd4f8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcd4fb movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12dcd4ff cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcd502 jne 0x12dcd714 */
  if (!C.zf) goto L_12dcd714;
  /* 12dcd508 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcd50b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 12dcd50f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcd512 jne 0x12dcd714 */
  if (!C.zf) goto L_12dcd714;
  /* 12dcd518 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcd51b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_12dcd521:;
  /* 12dcd521 push 0x12ddb1d4 */
  push32((uint32_t)(0x12ddb1d4u));
  /* 12dcd526 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12dcd52c push ecx */
  push32((uint32_t)(ECX));
  /* 12dcd52d call 0x12dcf690 */
  push32(0x12dcd532u); f_12dcf690();
  /* 12dcd532 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd535 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 12dcd53b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcd542 je 0x12dcd56d */
  if (C.zf) goto L_12dcd56d;
  /* 12dcd544 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12dcd54a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcd550 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 12dcd556 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcd55d je 0x12dcd56d */
  if (C.zf) goto L_12dcd56d;
  /* 12dcd55f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12dcd565 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12dcd568 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcd56b jne 0x12dcd593 */
  if (!C.zf) goto L_12dcd593;
L_12dcd56d:;
  /* 12dcd56d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcd571 je 0x12dcd58c */
  if (C.zf) goto L_12dcd58c;
  /* 12dcd573 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12dcd575 call 0x12dc7390 */
  push32(0x12dcd57au); f_12dc7390();
  /* 12dcd57a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd57d mov edx, dword ptr [0x12ddf8ac] */
  EDX = (r32((uint32_t)(0x12ddf8ac)));
  /* 12dcd583 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcd586 mov dword ptr [0x12ddf8ac], edx */
  w32((uint32_t)(0x12ddf8ac), (EDX));
L_12dcd58c:;
  /* 12dcd58c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dcd58e jmp 0x12dcd82b */
  goto L_12dcd82b;
L_12dcd593:;
  /* 12dcd593 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12dcd59a jmp 0x12dcd5a5 */
  goto L_12dcd5a5;
L_12dcd59c:;
  /* 12dcd59c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dcd59f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd5a2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12dcd5a5:;
  /* 12dcd5a5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcd5a9 jg 0x12dcd5f3 */
  if ((!C.zf&&C.sf==C.of)) goto L_12dcd5f3;
  /* 12dcd5ab mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12dcd5b1 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcd5b2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12dcd5b8 push edx */
  push32((uint32_t)(EDX));
  /* 12dcd5b9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dcd5bc imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dcd5bf mov ecx, dword ptr [eax + 0x12dde4d8] */
  ECX = (r32((uint32_t)(EAX + 0x12dde4d8)));
  /* 12dcd5c5 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcd5c6 call 0x12dcf650 */
  push32(0x12dcd5cbu); f_12dcf650();
  /* 12dcd5cb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd5ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcd5d0 jne 0x12dcd5f1 */
  if (!C.zf) goto L_12dcd5f1;
  /* 12dcd5d2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dcd5d5 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dcd5d8 mov eax, dword ptr [edx + 0x12dde4d8] */
  EAX = (r32((uint32_t)(EDX + 0x12dde4d8)));
  /* 12dcd5de push eax */
  push32((uint32_t)(EAX));
  /* 12dcd5df call 0x12dc6720 */
  push32(0x12dcd5e4u); f_12dc6720();
  /* 12dcd5e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd5e7 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcd5ed jne 0x12dcd5f1 */
  if (!C.zf) goto L_12dcd5f1;
  /* 12dcd5ef jmp 0x12dcd5f3 */
  goto L_12dcd5f3;
L_12dcd5f1:;
  /* 12dcd5f1 jmp 0x12dcd59c */
  goto L_12dcd59c;
L_12dcd5f3:;
  /* 12dcd5f3 push 0x12ddb1d0 */
  push32((uint32_t)(0x12ddb1d0u));
  /* 12dcd5f8 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12dcd5fe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd601 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 12dcd607 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12dcd60d push edx */
  push32((uint32_t)(EDX));
  /* 12dcd60e call 0x12dcf610 */
  push32(0x12dcd613u); f_12dcf610();
  /* 12dcd613 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd616 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 12dcd61c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcd623 jne 0x12dcd659 */
  if (!C.zf) goto L_12dcd659;
  /* 12dcd625 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12dcd62b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12dcd62e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcd631 je 0x12dcd659 */
  if (C.zf) goto L_12dcd659;
  /* 12dcd633 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcd637 je 0x12dcd652 */
  if (C.zf) goto L_12dcd652;
  /* 12dcd639 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12dcd63b call 0x12dc7390 */
  push32(0x12dcd640u); f_12dc7390();
  /* 12dcd640 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd643 mov edx, dword ptr [0x12ddf8ac] */
  EDX = (r32((uint32_t)(0x12ddf8ac)));
  /* 12dcd649 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcd64c mov dword ptr [0x12ddf8ac], edx */
  w32((uint32_t)(0x12ddf8ac), (EDX));
L_12dcd652:;
  /* 12dcd652 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dcd654 jmp 0x12dcd82b */
  goto L_12dcd82b;
L_12dcd659:;
  /* 12dcd659 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcd65d jg 0x12dcd6aa */
  if ((!C.zf&&C.sf==C.of)) goto L_12dcd6aa;
  /* 12dcd65f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12dcd665 push eax */
  push32((uint32_t)(EAX));
  /* 12dcd666 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12dcd66c push ecx */
  push32((uint32_t)(ECX));
  /* 12dcd66d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 12dcd673 push edx */
  push32((uint32_t)(EDX));
  /* 12dcd674 call 0x12dc7110 */
  push32(0x12dcd679u); f_12dc7110();
  /* 12dcd679 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd67c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12dcd682 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 12dcd68a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 12dcd690 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcd691 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dcd694 push edx */
  push32((uint32_t)(EDX));
  /* 12dcd695 call 0x12dcd830 */
  push32(0x12dcd69au); f_12dcd830();
  /* 12dcd69a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd69d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcd69f je 0x12dcd6aa */
  if (C.zf) goto L_12dcd6aa;
  /* 12dcd6a1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dcd6a4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd6a7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12dcd6aa:;
  /* 12dcd6aa mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12dcd6b0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd6b6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 12dcd6bc mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12dcd6c2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12dcd6c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcd6c7 je 0x12dcd6d8 */
  if (C.zf) goto L_12dcd6d8;
  /* 12dcd6c9 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12dcd6cf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd6d2 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_12dcd6d8:;
  /* 12dcd6d8 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12dcd6de movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12dcd6e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcd6e3 jne 0x12dcd521 */
  if (!C.zf) goto L_12dcd521;
  /* 12dcd6e9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcd6ed je 0x12dcd6fc */
  if (C.zf) goto L_12dcd6fc;
  /* 12dcd6ef call 0x12dcd9d0 */
  push32(0x12dcd6f4u); f_12dcd9d0();
  /* 12dcd6f4 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 12dcd6fa jmp 0x12dcd706 */
  goto L_12dcd706;
L_12dcd6fc:;
  /* 12dcd6fc mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_12dcd706:;
  /* 12dcd706 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 12dcd70c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dcd70f jmp 0x12dcd801 */
  goto L_12dcd801;
L_12dcd714:;
  /* 12dcd714 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcd717 push edx */
  push32((uint32_t)(EDX));
  /* 12dcd718 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dcd71a push 0 */
  push32((uint32_t)(0x0u));
  /* 12dcd71c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 12dcd722 push eax */
  push32((uint32_t)(EAX));
  /* 12dcd723 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcd726 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcd727 call 0x12dcdad0 */
  push32(0x12dcd72cu); f_12dcdad0();
  /* 12dcd72c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd72f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dcd732 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcd736 je 0x12dcd801 */
  if (C.zf) goto L_12dcd801;
  /* 12dcd73c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12dcd743 jmp 0x12dcd74e */
  goto L_12dcd74e;
L_12dcd745:;
  /* 12dcd745 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dcd748 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd74b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12dcd74e:;
  /* 12dcd74e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcd752 jg 0x12dcd7b0 */
  if ((!C.zf&&C.sf==C.of)) goto L_12dcd7b0;
  /* 12dcd754 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcd758 je 0x12dcd7ae */
  if (C.zf) goto L_12dcd7ae;
  /* 12dcd75a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dcd75d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dcd760 mov ecx, dword ptr [eax + 0x12dde4dc] */
  ECX = (r32((uint32_t)(EAX + 0x12dde4dc)));
  /* 12dcd766 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcd767 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 12dcd76d push edx */
  push32((uint32_t)(EDX));
  /* 12dcd76e call 0x12dcf580 */
  push32(0x12dcd773u); f_12dcf580();
  /* 12dcd773 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd776 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcd778 je 0x12dcd7a5 */
  if (C.zf) goto L_12dcd7a5;
  /* 12dcd77a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 12dcd780 push eax */
  push32((uint32_t)(EAX));
  /* 12dcd781 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dcd784 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcd785 call 0x12dcd830 */
  push32(0x12dcd78au); f_12dcd830();
  /* 12dcd78a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd78d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcd78f je 0x12dcd79c */
  if (C.zf) goto L_12dcd79c;
  /* 12dcd791 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dcd794 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd797 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12dcd79a jmp 0x12dcd7a3 */
  goto L_12dcd7a3;
L_12dcd79c:;
  /* 12dcd79c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_12dcd7a3:;
  /* 12dcd7a3 jmp 0x12dcd7ae */
  goto L_12dcd7ae;
L_12dcd7a5:;
  /* 12dcd7a5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dcd7a8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd7ab mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12dcd7ae:;
  /* 12dcd7ae jmp 0x12dcd745 */
  goto L_12dcd745;
L_12dcd7b0:;
  /* 12dcd7b0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcd7b4 je 0x12dcd7db */
  if (C.zf) goto L_12dcd7db;
  /* 12dcd7b6 call 0x12dcd9d0 */
  push32(0x12dcd7bbu); f_12dcd9d0();
  /* 12dcd7bb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dcd7be push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcd7c0 mov ecx, dword ptr [0x12dde4dc] */
  ECX = (r32((uint32_t)(0x12dde4dc)));
  /* 12dcd7c6 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcd7c7 call 0x12dc4380 */
  push32(0x12dcd7ccu); f_12dc4380();
  /* 12dcd7cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd7cf mov dword ptr [0x12dde4dc], 0 */
  w32((uint32_t)(0x12dde4dc), (0x0u));
  /* 12dcd7d9 jmp 0x12dcd801 */
  goto L_12dcd801;
L_12dcd7db:;
  /* 12dcd7db cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcd7df je 0x12dcd7ee */
  if (C.zf) goto L_12dcd7ee;
  /* 12dcd7e1 call 0x12dcd9d0 */
  push32(0x12dcd7e6u); f_12dcd9d0();
  /* 12dcd7e6 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 12dcd7ec jmp 0x12dcd7f8 */
  goto L_12dcd7f8;
L_12dcd7ee:;
  /* 12dcd7ee mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_12dcd7f8:;
  /* 12dcd7f8 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 12dcd7fe mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12dcd801:;
  /* 12dcd801 jmp 0x12dcd80b */
  goto L_12dcd80b;
L_12dcd803:;
  /* 12dcd803 call 0x12dcd9d0 */
  push32(0x12dcd808u); f_12dcd9d0();
  /* 12dcd808 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12dcd80b:;
  /* 12dcd80b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcd80f je 0x12dcd828 */
  if (C.zf) goto L_12dcd828;
  /* 12dcd811 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12dcd813 call 0x12dc7390 */
  push32(0x12dcd818u); f_12dc7390();
  /* 12dcd818 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd81b mov eax, dword ptr [0x12ddf8ac] */
  EAX = (r32((uint32_t)(0x12ddf8ac)));
  /* 12dcd820 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcd823 mov dword ptr [0x12ddf8ac], eax */
  w32((uint32_t)(0x12ddf8ac), (EAX));
L_12dcd828:;
  /* 12dcd828 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12dcd82b:;
  /* 12dcd82b mov esp, ebp */
  ESP = (EBP);
  /* 12dcd82d pop ebp */
  EBP = (pop32());
  /* 12dcd82e ret  */
  ESPCHK(0x12dcd440u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d830 @ 0x12dcd830 (403 bytes, 117 insns) */
void f_12dcd830(void) {
  FTRACE(0x12dcd830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcd830 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcd831 mov ebp, esp */
  EBP = (ESP);
  /* 12dcd833 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcd839 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcd83c push eax */
  push32((uint32_t)(EAX));
  /* 12dcd83d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 12dcd843 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcd844 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 12dcd84a push edx */
  push32((uint32_t)(EDX));
  /* 12dcd84b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 12dcd851 push eax */
  push32((uint32_t)(EAX));
  /* 12dcd852 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcd855 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcd856 call 0x12dcdad0 */
  push32(0x12dcd85bu); f_12dcdad0();
  /* 12dcd85b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd85e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcd860 jne 0x12dcd869 */
  if (!C.zf) goto L_12dcd869;
  /* 12dcd862 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dcd864 jmp 0x12dcd9bf */
  goto L_12dcd9bf;
L_12dcd869:;
  /* 12dcd869 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 12dcd86e push 0x12ddb1d8 */
  push32((uint32_t)(0x12ddb1d8u));
  /* 12dcd873 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcd875 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 12dcd87b push edx */
  push32((uint32_t)(EDX));
  /* 12dcd87c call 0x12dc6720 */
  push32(0x12dcd881u); f_12dc6720();
  /* 12dcd881 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd884 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd887 push eax */
  push32((uint32_t)(EAX));
  /* 12dcd888 call 0x12dc38f0 */
  push32(0x12dcd88du); f_12dc38f0();
  /* 12dcd88d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd890 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dcd893 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcd897 jne 0x12dcd8a0 */
  if (!C.zf) goto L_12dcd8a0;
  /* 12dcd899 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dcd89b jmp 0x12dcd9bf */
  goto L_12dcd9bf;
L_12dcd8a0:;
  /* 12dcd8a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcd8a3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dcd8a6 mov ecx, dword ptr [eax + 0x12dde4dc] */
  ECX = (r32((uint32_t)(EAX + 0x12dde4dc)));
  /* 12dcd8ac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dcd8af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcd8b2 mov eax, dword ptr [edx*4 + 0x12ddf728] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12ddf728)));
  /* 12dcd8b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dcd8bc push 6 */
  push32((uint32_t)(0x6u));
  /* 12dcd8be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcd8c1 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dcd8c4 add ecx, 0x12ddf778 */
  { uint32_t _a=(ECX),_b=(0x12ddf778u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd8ca push ecx */
  push32((uint32_t)(ECX));
  /* 12dcd8cb lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 12dcd8ce push edx */
  push32((uint32_t)(EDX));
  /* 12dcd8cf call 0x12dca1d0 */
  push32(0x12dcd8d4u); f_12dca1d0();
  /* 12dcd8d4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd8d7 mov eax, dword ptr [0x12ddf740] */
  EAX = (r32((uint32_t)(0x12ddf740)));
  /* 12dcd8dc mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12dcd8df lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 12dcd8e5 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcd8e6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcd8e9 push edx */
  push32((uint32_t)(EDX));
  /* 12dcd8ea call 0x12dc68a0 */
  push32(0x12dcd8efu); f_12dc68a0();
  /* 12dcd8ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd8f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcd8f5 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dcd8f8 mov dword ptr [ecx + 0x12dde4dc], eax */
  w32((uint32_t)(ECX + 0x12dde4dc), (EAX));
  /* 12dcd8fe mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 12dcd904 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12dcd90a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcd90d mov dword ptr [eax*4 + 0x12ddf728], edx */
  w32((uint32_t)(EAX*4 + 0x12ddf728), (EDX));
  /* 12dcd914 push 6 */
  push32((uint32_t)(0x6u));
  /* 12dcd916 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 12dcd91c push ecx */
  push32((uint32_t)(ECX));
  /* 12dcd91d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcd920 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dcd923 add edx, 0x12ddf778 */
  { uint32_t _a=(EDX),_b=(0x12ddf778u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd929 push edx */
  push32((uint32_t)(EDX));
  /* 12dcd92a call 0x12dca1d0 */
  push32(0x12dcd92fu); f_12dca1d0();
  /* 12dcd92f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd932 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcd936 jne 0x12dcd943 */
  if (!C.zf) goto L_12dcd943;
  /* 12dcd938 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12dcd93e mov dword ptr [0x12ddf740], eax */
  w32((uint32_t)(0x12ddf740), (EAX));
L_12dcd943:;
  /* 12dcd943 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcd947 jne 0x12dcd955 */
  if (!C.zf) goto L_12dcd955;
  /* 12dcd949 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12dcd94f mov dword ptr [0x12ddf744], ecx */
  w32((uint32_t)(0x12ddf744), (ECX));
L_12dcd955:;
  /* 12dcd955 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcd958 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dcd95b call dword ptr [edx + 0x12dde4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x12dde4e0))), 0x12dcd961u);
  /* 12dcd961 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcd963 je 0x12dcd99c */
  if (C.zf) goto L_12dcd99c;
  /* 12dcd965 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcd968 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dcd96b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dcd96e mov dword ptr [eax + 0x12dde4dc], ecx */
  w32((uint32_t)(EAX + 0x12dde4dc), (ECX));
  /* 12dcd974 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcd976 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcd979 push edx */
  push32((uint32_t)(EDX));
  /* 12dcd97a call 0x12dc4380 */
  push32(0x12dcd97fu); f_12dc4380();
  /* 12dcd97f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd982 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcd985 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcd988 mov dword ptr [eax*4 + 0x12ddf728], ecx */
  w32((uint32_t)(EAX*4 + 0x12ddf728), (ECX));
  /* 12dcd98f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dcd992 mov dword ptr [0x12ddf740], edx */
  w32((uint32_t)(0x12ddf740), (EDX));
  /* 12dcd998 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dcd99a jmp 0x12dcd9bf */
  goto L_12dcd9bf;
L_12dcd99c:;
  /* 12dcd99c cmp dword ptr [ebp - 0xc], 0x12dde3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x12dde3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcd9a3 je 0x12dcd9b3 */
  if (C.zf) goto L_12dcd9b3;
  /* 12dcd9a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcd9a7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dcd9aa push eax */
  push32((uint32_t)(EAX));
  /* 12dcd9ab call 0x12dc4380 */
  push32(0x12dcd9b0u); f_12dc4380();
  /* 12dcd9b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dcd9b3:;
  /* 12dcd9b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcd9b6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dcd9b9 mov eax, dword ptr [ecx + 0x12dde4dc] */
  EAX = (r32((uint32_t)(ECX + 0x12dde4dc)));
L_12dcd9bf:;
  /* 12dcd9bf mov esp, ebp */
  ESP = (EBP);
  /* 12dcd9c1 pop ebp */
  EBP = (pop32());
  /* 12dcd9c2 ret  */
  ESPCHK(0x12dcd830u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d9d0 @ 0x12dcd9d0 (256 bytes, 72 insns) */
void f_12dcd9d0(void) {
  FTRACE(0x12dcd9d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcd9d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcd9d1 mov ebp, esp */
  EBP = (ESP);
  /* 12dcd9d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcd9d6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12dcd9dd cmp dword ptr [0x12dde4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dde4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcd9e4 jne 0x12dcda04 */
  if (!C.zf) goto L_12dcda04;
  /* 12dcd9e6 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 12dcd9eb push 0x12ddb1d8 */
  push32((uint32_t)(0x12ddb1d8u));
  /* 12dcd9f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcd9f2 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 12dcd9f7 call 0x12dc38f0 */
  push32(0x12dcd9fcu); f_12dc38f0();
  /* 12dcd9fc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcd9ff mov dword ptr [0x12dde4dc], eax */
  w32((uint32_t)(0x12dde4dc), (EAX));
L_12dcda04:;
  /* 12dcda04 mov eax, dword ptr [0x12dde4dc] */
  EAX = (r32((uint32_t)(0x12dde4dc)));
  /* 12dcda09 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12dcda0c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12dcda13 jmp 0x12dcda1e */
  goto L_12dcda1e;
L_12dcda15:;
  /* 12dcda15 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcda18 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcda1b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12dcda1e:;
  /* 12dcda1e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcda21 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dcda24 mov eax, dword ptr [edx + 0x12dde4dc] */
  EAX = (r32((uint32_t)(EDX + 0x12dde4dc)));
  /* 12dcda2a push eax */
  push32((uint32_t)(EAX));
  /* 12dcda2b push 0x12ddb1e4 */
  push32((uint32_t)(0x12ddb1e4u));
  /* 12dcda30 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcda33 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dcda36 mov edx, dword ptr [ecx + 0x12dde4d8] */
  EDX = (r32((uint32_t)(ECX + 0x12dde4d8)));
  /* 12dcda3c push edx */
  push32((uint32_t)(EDX));
  /* 12dcda3d push 3 */
  push32((uint32_t)(0x3u));
  /* 12dcda3f mov eax, dword ptr [0x12dde4dc] */
  EAX = (r32((uint32_t)(0x12dde4dc)));
  /* 12dcda44 push eax */
  push32((uint32_t)(EAX));
  /* 12dcda45 call 0x12dcdc70 */
  push32(0x12dcda4au); f_12dcdc70();
  /* 12dcda4a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcda4d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcda51 jge 0x12dcda99 */
  if ((C.sf==C.of)) goto L_12dcda99;
  /* 12dcda53 push 0x12ddb1d0 */
  push32((uint32_t)(0x12ddb1d0u));
  /* 12dcda58 mov ecx, dword ptr [0x12dde4dc] */
  ECX = (r32((uint32_t)(0x12dde4dc)));
  /* 12dcda5e push ecx */
  push32((uint32_t)(ECX));
  /* 12dcda5f call 0x12dc68b0 */
  push32(0x12dcda64u); f_12dc68b0();
  /* 12dcda64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcda67 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcda6a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcda6d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dcda70 mov eax, dword ptr [edx + 0x12dde4dc] */
  EAX = (r32((uint32_t)(EDX + 0x12dde4dc)));
  /* 12dcda76 push eax */
  push32((uint32_t)(EAX));
  /* 12dcda77 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcda7a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dcda7d mov edx, dword ptr [ecx + 0x12dde4dc] */
  EDX = (r32((uint32_t)(ECX + 0x12dde4dc)));
  /* 12dcda83 push edx */
  push32((uint32_t)(EDX));
  /* 12dcda84 call 0x12dcf580 */
  push32(0x12dcda89u); f_12dcf580();
  /* 12dcda89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcda8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcda8e je 0x12dcda97 */
  if (C.zf) goto L_12dcda97;
  /* 12dcda90 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12dcda97:;
  /* 12dcda97 jmp 0x12dcdac7 */
  goto L_12dcdac7;
L_12dcda99:;
  /* 12dcda99 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcda9d jne 0x12dcdaa6 */
  if (!C.zf) goto L_12dcdaa6;
  /* 12dcda9f mov eax, dword ptr [0x12dde4dc] */
  EAX = (r32((uint32_t)(0x12dde4dc)));
  /* 12dcdaa4 jmp 0x12dcdacc */
  goto L_12dcdacc;
L_12dcdaa6:;
  /* 12dcdaa6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcdaa8 mov eax, dword ptr [0x12dde4dc] */
  EAX = (r32((uint32_t)(0x12dde4dc)));
  /* 12dcdaad push eax */
  push32((uint32_t)(EAX));
  /* 12dcdaae call 0x12dc4380 */
  push32(0x12dcdab3u); f_12dc4380();
  /* 12dcdab3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcdab6 mov dword ptr [0x12dde4dc], 0 */
  w32((uint32_t)(0x12dde4dc), (0x0u));
  /* 12dcdac0 mov eax, dword ptr [0x12dde4f4] */
  EAX = (r32((uint32_t)(0x12dde4f4)));
  /* 12dcdac5 jmp 0x12dcdacc */
  goto L_12dcdacc;
L_12dcdac7:;
  /* 12dcdac7 jmp 0x12dcda15 */
  goto L_12dcda15;
L_12dcdacc:;
  /* 12dcdacc mov esp, ebp */
  ESP = (EBP);
  /* 12dcdace pop ebp */
  EBP = (pop32());
  /* 12dcdacf ret  */
  ESPCHK(0x12dcd9d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dad0 @ 0x12dcdad0 (388 bytes, 115 insns) */
void f_12dcdad0(void) {
  FTRACE(0x12dcdad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcdad0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcdad1 mov ebp, esp */
  EBP = (ESP);
  /* 12dcdad3 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcdad9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcdadd jne 0x12dcdae6 */
  if (!C.zf) goto L_12dcdae6;
  /* 12dcdadf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dcdae1 jmp 0x12dcdc50 */
  goto L_12dcdc50;
L_12dcdae6:;
  /* 12dcdae6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcdae9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12dcdaec cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcdaef jne 0x12dcdb40 */
  if (!C.zf) goto L_12dcdb40;
  /* 12dcdaf1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcdaf4 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12dcdaf8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcdafa jne 0x12dcdb40 */
  if (!C.zf) goto L_12dcdb40;
  /* 12dcdafc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcdaff mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 12dcdb02 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcdb05 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 12dcdb09 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcdb0d je 0x12dcdb29 */
  if (C.zf) goto L_12dcdb29;
  /* 12dcdb0f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dcdb12 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 12dcdb17 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dcdb1a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 12dcdb20 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dcdb23 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_12dcdb29:;
  /* 12dcdb29 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcdb2d je 0x12dcdb38 */
  if (C.zf) goto L_12dcdb38;
  /* 12dcdb2f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dcdb32 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12dcdb38:;
  /* 12dcdb38 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcdb3b jmp 0x12dcdc50 */
  goto L_12dcdc50;
L_12dcdb40:;
  /* 12dcdb40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcdb43 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcdb44 push 0x12dde450 */
  push32((uint32_t)(0x12dde450u));
  /* 12dcdb49 call 0x12dcf580 */
  push32(0x12dcdb4eu); f_12dcf580();
  /* 12dcdb4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcdb51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcdb53 je 0x12dcdc08 */
  if (C.zf) goto L_12dcdc08;
  /* 12dcdb59 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcdb5c push edx */
  push32((uint32_t)(EDX));
  /* 12dcdb5d push 0x12dde3cc */
  push32((uint32_t)(0x12dde3ccu));
  /* 12dcdb62 call 0x12dcf580 */
  push32(0x12dcdb67u); f_12dcf580();
  /* 12dcdb67 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcdb6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcdb6c je 0x12dcdc08 */
  if (C.zf) goto L_12dcdc08;
  /* 12dcdb72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcdb75 push eax */
  push32((uint32_t)(EAX));
  /* 12dcdb76 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 12dcdb7c push ecx */
  push32((uint32_t)(ECX));
  /* 12dcdb7d call 0x12dcdcc0 */
  push32(0x12dcdb82u); f_12dcdcc0();
  /* 12dcdb82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcdb85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcdb87 je 0x12dcdb90 */
  if (C.zf) goto L_12dcdb90;
  /* 12dcdb89 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dcdb8b jmp 0x12dcdc50 */
  goto L_12dcdc50;
L_12dcdb90:;
  /* 12dcdb90 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 12dcdb96 push edx */
  push32((uint32_t)(EDX));
  /* 12dcdb97 push 0x12ddf750 */
  push32((uint32_t)(0x12ddf750u));
  /* 12dcdb9c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 12dcdba2 push eax */
  push32((uint32_t)(EAX));
  /* 12dcdba3 call 0x12dcf6d0 */
  push32(0x12dcdba8u); f_12dcf6d0();
  /* 12dcdba8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcdbab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcdbad jne 0x12dcdbb6 */
  if (!C.zf) goto L_12dcdbb6;
  /* 12dcdbaf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dcdbb1 jmp 0x12dcdc50 */
  goto L_12dcdc50;
L_12dcdbb6:;
  /* 12dcdbb6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dcdbb8 mov cx, word ptr [0x12ddf754] */
  CX = (r16((uint32_t)(0x12ddf754)));
  /* 12dcdbbf mov dword ptr [0x12ddf758], ecx */
  w32((uint32_t)(0x12ddf758), (ECX));
  /* 12dcdbc5 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 12dcdbcb push edx */
  push32((uint32_t)(EDX));
  /* 12dcdbcc push 0x12dde450 */
  push32((uint32_t)(0x12dde450u));
  /* 12dcdbd1 call 0x12dcde20 */
  push32(0x12dcdbd6u); f_12dcde20();
  /* 12dcdbd6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcdbd9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcdbdc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12dcdbdf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dcdbe1 je 0x12dcdbf6 */
  if (C.zf) goto L_12dcdbf6;
  /* 12dcdbe3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcdbe6 push edx */
  push32((uint32_t)(EDX));
  /* 12dcdbe7 push 0x12dde3cc */
  push32((uint32_t)(0x12dde3ccu));
  /* 12dcdbec call 0x12dc68a0 */
  push32(0x12dcdbf1u); f_12dc68a0();
  /* 12dcdbf1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcdbf4 jmp 0x12dcdc08 */
  goto L_12dcdc08;
L_12dcdbf6:;
  /* 12dcdbf6 push 0x12dde450 */
  push32((uint32_t)(0x12dde450u));
  /* 12dcdbfb push 0x12dde3cc */
  push32((uint32_t)(0x12dde3ccu));
  /* 12dcdc00 call 0x12dc68a0 */
  push32(0x12dcdc05u); f_12dc68a0();
  /* 12dcdc05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dcdc08:;
  /* 12dcdc08 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcdc0c je 0x12dcdc21 */
  if (C.zf) goto L_12dcdc21;
  /* 12dcdc0e push 6 */
  push32((uint32_t)(0x6u));
  /* 12dcdc10 push 0x12ddf750 */
  push32((uint32_t)(0x12ddf750u));
  /* 12dcdc15 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dcdc18 push eax */
  push32((uint32_t)(EAX));
  /* 12dcdc19 call 0x12dca1d0 */
  push32(0x12dcdc1eu); f_12dca1d0();
  /* 12dcdc1e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dcdc21:;
  /* 12dcdc21 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcdc25 je 0x12dcdc3a */
  if (C.zf) goto L_12dcdc3a;
  /* 12dcdc27 push 4 */
  push32((uint32_t)(0x4u));
  /* 12dcdc29 push 0x12ddf758 */
  push32((uint32_t)(0x12ddf758u));
  /* 12dcdc2e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12dcdc31 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcdc32 call 0x12dca1d0 */
  push32(0x12dcdc37u); f_12dca1d0();
  /* 12dcdc37 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dcdc3a:;
  /* 12dcdc3a push 0x12dde450 */
  push32((uint32_t)(0x12dde450u));
  /* 12dcdc3f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcdc42 push edx */
  push32((uint32_t)(EDX));
  /* 12dcdc43 call 0x12dc68a0 */
  push32(0x12dcdc48u); f_12dc68a0();
  /* 12dcdc48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcdc4b mov eax, 0x12dde450 */
  EAX = (0x12dde450u);
L_12dcdc50:;
  /* 12dcdc50 mov esp, ebp */
  ESP = (EBP);
  /* 12dcdc52 pop ebp */
  EBP = (pop32());
  /* 12dcdc53 ret  */
  ESPCHK(0x12dcdad0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc60 @ 0x12dcdc60 (7 bytes, 5 insns) */
void f_12dcdc60(void) {
  FTRACE(0x12dcdc60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcdc60 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcdc61 mov ebp, esp */
  EBP = (ESP);
  /* 12dcdc63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dcdc65 pop ebp */
  EBP = (pop32());
  /* 12dcdc66 ret  */
  ESPCHK(0x12dcdc60u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x12dcdc70 (79 bytes, 28 insns) */
void f_12dcdc70(void) {
  FTRACE(0x12dcdc70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcdc70 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcdc71 mov ebp, esp */
  EBP = (ESP);
  /* 12dcdc73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcdc76 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12dcdc79 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dcdc7c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12dcdc83 jmp 0x12dcdc8e */
  goto L_12dcdc8e;
L_12dcdc85:;
  /* 12dcdc85 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcdc88 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcdc8b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12dcdc8e:;
  /* 12dcdc8e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcdc91 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcdc94 jge 0x12dcdcb4 */
  if ((C.sf==C.of)) goto L_12dcdcb4;
  /* 12dcdc96 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcdc99 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcdc9c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dcdc9f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcdca2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12dcdca5 push edx */
  push32((uint32_t)(EDX));
  /* 12dcdca6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcdca9 push eax */
  push32((uint32_t)(EAX));
  /* 12dcdcaa call 0x12dc68b0 */
  push32(0x12dcdcafu); f_12dc68b0();
  /* 12dcdcaf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcdcb2 jmp 0x12dcdc85 */
  goto L_12dcdc85;
L_12dcdcb4:;
  /* 12dcdcb4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12dcdcbb mov esp, ebp */
  ESP = (EBP);
  /* 12dcdcbd pop ebp */
  EBP = (pop32());
  /* 12dcdcbe ret  */
  ESPCHK(0x12dcdc70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dcc0 @ 0x12dcdcc0 (349 bytes, 122 insns) */
void f_12dcdcc0(void) {
  FTRACE(0x12dcdcc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcdcc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcdcc1 mov ebp, esp */
  EBP = (ESP);
  /* 12dcdcc3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcdcc6 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 12dcdccb push 0 */
  push32((uint32_t)(0x0u));
  /* 12dcdccd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcdcd0 push eax */
  push32((uint32_t)(EAX));
  /* 12dcdcd1 call 0x12dc7660 */
  push32(0x12dcdcd6u); f_12dc7660();
  /* 12dcdcd6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcdcd9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcdcdc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12dcdcdf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dcdce1 jne 0x12dcdcea */
  if (!C.zf) goto L_12dcdcea;
  /* 12dcdce3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dcdce5 jmp 0x12dcde19 */
  goto L_12dcde19;
L_12dcdcea:;
  /* 12dcdcea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcdced movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12dcdcf0 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcdcf3 jne 0x12dcdd20 */
  if (!C.zf) goto L_12dcdd20;
  /* 12dcdcf5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcdcf8 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12dcdcfc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcdcfe je 0x12dcdd20 */
  if (C.zf) goto L_12dcdd20;
  /* 12dcdd00 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcdd03 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcdd06 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcdd07 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcdd0a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcdd10 push edx */
  push32((uint32_t)(EDX));
  /* 12dcdd11 call 0x12dc68a0 */
  push32(0x12dcdd16u); f_12dc68a0();
  /* 12dcdd16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcdd19 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dcdd1b jmp 0x12dcde19 */
  goto L_12dcde19;
L_12dcdd20:;
  /* 12dcdd20 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12dcdd27 jmp 0x12dcdd32 */
  goto L_12dcdd32;
L_12dcdd29:;
  /* 12dcdd29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcdd2c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcdd2f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12dcdd32:;
  /* 12dcdd32 push 0x12ddb1e8 */
  push32((uint32_t)(0x12ddb1e8u));
  /* 12dcdd37 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcdd3a push ecx */
  push32((uint32_t)(ECX));
  /* 12dcdd3b call 0x12dcf610 */
  push32(0x12dcdd40u); f_12dcf610();
  /* 12dcdd40 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcdd43 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12dcdd46 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcdd4a jne 0x12dcdd54 */
  if (!C.zf) goto L_12dcdd54;
  /* 12dcdd4c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dcdd4f jmp 0x12dcde19 */
  goto L_12dcde19;
L_12dcdd54:;
  /* 12dcdd54 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcdd57 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcdd5a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12dcdd5c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 12dcdd5f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcdd63 jne 0x12dcdd8a */
  if (!C.zf) goto L_12dcdd8a;
  /* 12dcdd65 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcdd69 jge 0x12dcdd8a */
  if ((C.sf==C.of)) goto L_12dcdd8a;
  /* 12dcdd6b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12dcdd6f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcdd72 je 0x12dcdd8a */
  if (C.zf) goto L_12dcdd8a;
  /* 12dcdd74 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dcdd77 push edx */
  push32((uint32_t)(EDX));
  /* 12dcdd78 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcdd7b push eax */
  push32((uint32_t)(EAX));
  /* 12dcdd7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcdd7f push ecx */
  push32((uint32_t)(ECX));
  /* 12dcdd80 call 0x12dc7110 */
  push32(0x12dcdd85u); f_12dc7110();
  /* 12dcdd85 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcdd88 jmp 0x12dcddf0 */
  goto L_12dcddf0;
L_12dcdd8a:;
  /* 12dcdd8a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcdd8e jne 0x12dcddb8 */
  if (!C.zf) goto L_12dcddb8;
  /* 12dcdd90 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcdd94 jge 0x12dcddb8 */
  if ((C.sf==C.of)) goto L_12dcddb8;
  /* 12dcdd96 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12dcdd9a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcdd9d je 0x12dcddb8 */
  if (C.zf) goto L_12dcddb8;
  /* 12dcdd9f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dcdda2 push eax */
  push32((uint32_t)(EAX));
  /* 12dcdda3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcdda6 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcdda7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcddaa add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcddad push edx */
  push32((uint32_t)(EDX));
  /* 12dcddae call 0x12dc7110 */
  push32(0x12dcddb3u); f_12dc7110();
  /* 12dcddb3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcddb6 jmp 0x12dcddf0 */
  goto L_12dcddf0;
L_12dcddb8:;
  /* 12dcddb8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcddbc jne 0x12dcddeb */
  if (!C.zf) goto L_12dcddeb;
  /* 12dcddbe movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12dcddc2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcddc4 je 0x12dcddcf */
  if (C.zf) goto L_12dcddcf;
  /* 12dcddc6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12dcddca cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcddcd jne 0x12dcddeb */
  if (!C.zf) goto L_12dcddeb;
L_12dcddcf:;
  /* 12dcddcf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dcddd2 push edx */
  push32((uint32_t)(EDX));
  /* 12dcddd3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcddd6 push eax */
  push32((uint32_t)(EAX));
  /* 12dcddd7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcddda add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcdde0 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcdde1 call 0x12dc7110 */
  push32(0x12dcdde6u); f_12dc7110();
  /* 12dcdde6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcdde9 jmp 0x12dcddf0 */
  goto L_12dcddf0;
L_12dcddeb:;
  /* 12dcddeb or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dcddee jmp 0x12dcde19 */
  goto L_12dcde19;
L_12dcddf0:;
  /* 12dcddf0 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12dcddf4 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcddf7 jne 0x12dcddfb */
  if (!C.zf) goto L_12dcddfb;
  /* 12dcddf9 jmp 0x12dcde17 */
  goto L_12dcde17;
L_12dcddfb:;
  /* 12dcddfb movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12dcddff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcde01 jne 0x12dcde05 */
  if (!C.zf) goto L_12dcde05;
  /* 12dcde03 jmp 0x12dcde17 */
  goto L_12dcde17;
L_12dcde05:;
  /* 12dcde05 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dcde08 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcde0b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 12dcde0f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12dcde12 jmp 0x12dcdd29 */
  goto L_12dcdd29;
L_12dcde17:;
  /* 12dcde17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12dcde19:;
  /* 12dcde19 mov esp, ebp */
  ESP = (EBP);
  /* 12dcde1b pop ebp */
  EBP = (pop32());
  /* 12dcde1c ret  */
  ESPCHK(0x12dcdcc0u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x12dcde20 (101 bytes, 36 insns) */
void f_12dcde20(void) {
  FTRACE(0x12dcde20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcde20 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcde21 mov ebp, esp */
  EBP = (ESP);
  /* 12dcde23 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcde26 push eax */
  push32((uint32_t)(EAX));
  /* 12dcde27 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcde2a push ecx */
  push32((uint32_t)(ECX));
  /* 12dcde2b call 0x12dc68a0 */
  push32(0x12dcde30u); f_12dc68a0();
  /* 12dcde30 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcde33 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcde36 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 12dcde3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcde3c je 0x12dcde58 */
  if (C.zf) goto L_12dcde58;
  /* 12dcde3e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcde41 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcde44 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcde45 push 0x12ddb1f0 */
  push32((uint32_t)(0x12ddb1f0u));
  /* 12dcde4a push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcde4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcde4f push edx */
  push32((uint32_t)(EDX));
  /* 12dcde50 call 0x12dcdc70 */
  push32(0x12dcde55u); f_12dcdc70();
  /* 12dcde55 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dcde58:;
  /* 12dcde58 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcde5b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 12dcde62 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dcde64 je 0x12dcde83 */
  if (C.zf) goto L_12dcde83;
  /* 12dcde66 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcde69 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcde6f push edx */
  push32((uint32_t)(EDX));
  /* 12dcde70 push 0x12ddb1ec */
  push32((uint32_t)(0x12ddb1ecu));
  /* 12dcde75 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcde77 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcde7a push eax */
  push32((uint32_t)(EAX));
  /* 12dcde7b call 0x12dcdc70 */
  push32(0x12dcde80u); f_12dcdc70();
  /* 12dcde80 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dcde83:;
  /* 12dcde83 pop ebp */
  EBP = (pop32());
  /* 12dcde84 ret  */
  ESPCHK(0x12dcde20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de90 @ 0x12dcde90 (130 bytes, 50 insns) */
void f_12dcde90(void) {
  FTRACE(0x12dcde90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcde90 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcde91 mov ebp, esp */
  EBP = (ESP);
  /* 12dcde93 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcde94 push ebx */
  push32((uint32_t)(EBX));
  /* 12dcde95 push esi */
  push32((uint32_t)(ESI));
  /* 12dcde96 push edi */
  push32((uint32_t)(EDI));
  /* 12dcde97 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12dcde9e:;
  /* 12dcde9e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcdea2 jne 0x12dcdec2 */
  if (!C.zf) goto L_12dcdec2;
  /* 12dcdea4 push 0x12ddb200 */
  push32((uint32_t)(0x12ddb200u));
  /* 12dcdea9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dcdeab push 0x3a */
  push32((uint32_t)(0x3au));
  /* 12dcdead push 0x12ddb1f4 */
  push32((uint32_t)(0x12ddb1f4u));
  /* 12dcdeb2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcdeb4 call 0x12dc29b0 */
  push32(0x12dcdeb9u); f_12dc29b0();
  /* 12dcdeb9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcdebc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcdebf jne 0x12dcdec2 */
  if (!C.zf) goto L_12dcdec2;
  /* 12dcdec1 int3  */
  x86_unimpl("int3 @ 0x12dcdec1");
L_12dcdec2:;
  /* 12dcdec2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dcdec4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcdec6 jne 0x12dcde9e */
  if (!C.zf) goto L_12dcde9e;
  /* 12dcdec8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcdecb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12dcdece and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 12dcded1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dcded3 je 0x12dcdee1 */
  if (C.zf) goto L_12dcdee1;
  /* 12dcded5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcded8 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 12dcdedf jmp 0x12dcdf08 */
  goto L_12dcdf08;
L_12dcdee1:;
  /* 12dcdee1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcdee4 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcdee5 call 0x12dcc700 */
  push32(0x12dcdeeau); f_12dcc700();
  /* 12dcdeea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcdeed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcdef0 push edx */
  push32((uint32_t)(EDX));
  /* 12dcdef1 call 0x12dcdf20 */
  push32(0x12dcdef6u); f_12dcdf20();
  /* 12dcdef6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcdef9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dcdefc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcdeff push eax */
  push32((uint32_t)(EAX));
  /* 12dcdf00 call 0x12dcc770 */
  push32(0x12dcdf05u); f_12dcc770();
  /* 12dcdf05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dcdf08:;
  /* 12dcdf08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcdf0b pop edi */
  EDI = (pop32());
  /* 12dcdf0c pop esi */
  ESI = (pop32());
  /* 12dcdf0d pop ebx */
  EBX = (pop32());
  /* 12dcdf0e mov esp, ebp */
  ESP = (EBP);
  /* 12dcdf10 pop ebp */
  EBP = (pop32());
  /* 12dcdf11 ret  */
  ESPCHK(0x12dcde90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df20 @ 0x12dcdf20 (190 bytes, 67 insns) */
void f_12dcdf20(void) {
  FTRACE(0x12dcdf20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcdf20 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcdf21 mov ebp, esp */
  EBP = (ESP);
  /* 12dcdf23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcdf26 push ebx */
  push32((uint32_t)(EBX));
  /* 12dcdf27 push esi */
  push32((uint32_t)(ESI));
  /* 12dcdf28 push edi */
  push32((uint32_t)(EDI));
  /* 12dcdf29 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12dcdf30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcdf33 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12dcdf36:;
  /* 12dcdf36 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcdf3a jne 0x12dcdf5a */
  if (!C.zf) goto L_12dcdf5a;
  /* 12dcdf3c push 0x12ddb0a0 */
  push32((uint32_t)(0x12ddb0a0u));
  /* 12dcdf41 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dcdf43 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 12dcdf45 push 0x12ddb1f4 */
  push32((uint32_t)(0x12ddb1f4u));
  /* 12dcdf4a push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcdf4c call 0x12dc29b0 */
  push32(0x12dcdf51u); f_12dc29b0();
  /* 12dcdf51 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcdf54 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcdf57 jne 0x12dcdf5a */
  if (!C.zf) goto L_12dcdf5a;
  /* 12dcdf59 int3  */
  x86_unimpl("int3 @ 0x12dcdf59");
L_12dcdf5a:;
  /* 12dcdf5a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dcdf5c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dcdf5e jne 0x12dcdf36 */
  if (!C.zf) goto L_12dcdf36;
  /* 12dcdf60 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcdf63 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12dcdf66 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 12dcdf6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcdf6d je 0x12dcdfca */
  if (C.zf) goto L_12dcdfca;
  /* 12dcdf6f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcdf72 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcdf73 call 0x12dcd220 */
  push32(0x12dcdf78u); f_12dcd220();
  /* 12dcdf78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcdf7b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dcdf7e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcdf81 push edx */
  push32((uint32_t)(EDX));
  /* 12dcdf82 call 0x12dd05a0 */
  push32(0x12dcdf87u); f_12dd05a0();
  /* 12dcdf87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcdf8a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcdf8d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12dcdf90 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcdf91 call 0x12dd0470 */
  push32(0x12dcdf96u); f_12dd0470();
  /* 12dcdf96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcdf99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcdf9b jge 0x12dcdfa6 */
  if ((C.sf==C.of)) goto L_12dcdfa6;
  /* 12dcdf9d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12dcdfa4 jmp 0x12dcdfca */
  goto L_12dcdfca;
L_12dcdfa6:;
  /* 12dcdfa6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcdfa9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcdfad je 0x12dcdfca */
  if (C.zf) goto L_12dcdfca;
  /* 12dcdfaf push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcdfb1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcdfb4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12dcdfb7 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcdfb8 call 0x12dc4380 */
  push32(0x12dcdfbdu); f_12dc4380();
  /* 12dcdfbd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcdfc0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcdfc3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_12dcdfca:;
  /* 12dcdfca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcdfcd mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 12dcdfd4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcdfd7 pop edi */
  EDI = (pop32());
  /* 12dcdfd8 pop esi */
  ESI = (pop32());
  /* 12dcdfd9 pop ebx */
  EBX = (pop32());
  /* 12dcdfda mov esp, ebp */
  ESP = (EBP);
  /* 12dcdfdc pop ebp */
  EBP = (pop32());
  /* 12dcdfdd ret  */
  ESPCHK(0x12dcdf20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dfe0 @ 0x12dcdfe0 (210 bytes, 63 insns) */
void f_12dcdfe0(void) {
  FTRACE(0x12dcdfe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcdfe0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcdfe1 mov ebp, esp */
  EBP = (ESP);
  /* 12dcdfe3 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcdfe4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcdfe7 cmp eax, dword ptr [0x12de103c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12de103c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcdfed jae 0x12dce011 */
  if (!C.cf) goto L_12dce011;
  /* 12dcdfef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcdff2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12dcdff5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcdff8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12dcdffb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dcdffe mov eax, dword ptr [ecx*4 + 0x12de0f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12de0f00)));
  /* 12dce005 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12dce00a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12dce00d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dce00f jne 0x12dce024 */
  if (!C.zf) goto L_12dce024;
L_12dce011:;
  /* 12dce011 call 0x12dcb7c0 */
  push32(0x12dce016u); f_12dcb7c0();
  /* 12dce016 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12dce01c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dce01f jmp 0x12dce0ae */
  goto L_12dce0ae;
L_12dce024:;
  /* 12dce024 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce027 push edx */
  push32((uint32_t)(EDX));
  /* 12dce028 call 0x12dccfe0 */
  push32(0x12dce02du); f_12dccfe0();
  /* 12dce02d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce030 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce033 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12dce036 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce039 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12dce03c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dce03f mov edx, dword ptr [eax*4 + 0x12de0f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12de0f00)));
  /* 12dce046 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12dce04b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12dce04e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dce050 je 0x12dce08d */
  if (C.zf) goto L_12dce08d;
  /* 12dce052 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce055 push ecx */
  push32((uint32_t)(ECX));
  /* 12dce056 call 0x12dcce60 */
  push32(0x12dce05bu); f_12dcce60();
  /* 12dce05b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce05e push eax */
  push32((uint32_t)(EAX));
  /* 12dce05f call dword ptr [0x12de22d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22d0))), 0x12dce065u);
  /* 12dce065 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dce067 jne 0x12dce074 */
  if (!C.zf) goto L_12dce074;
  /* 12dce069 call dword ptr [0x12de2380] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2380))), 0x12dce06fu);
  /* 12dce06f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dce072 jmp 0x12dce07b */
  goto L_12dce07b;
L_12dce074:;
  /* 12dce074 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12dce07b:;
  /* 12dce07b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dce07f jne 0x12dce083 */
  if (!C.zf) goto L_12dce083;
  /* 12dce081 jmp 0x12dce09f */
  goto L_12dce09f;
L_12dce083:;
  /* 12dce083 call 0x12dcb7d0 */
  push32(0x12dce088u); f_12dcb7d0();
  /* 12dce088 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dce08b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12dce08d:;
  /* 12dce08d call 0x12dcb7c0 */
  push32(0x12dce092u); f_12dcb7c0();
  /* 12dce092 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12dce098 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12dce09f:;
  /* 12dce09f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce0a2 push eax */
  push32((uint32_t)(EAX));
  /* 12dce0a3 call 0x12dcd070 */
  push32(0x12dce0a8u); f_12dcd070();
  /* 12dce0a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce0ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12dce0ae:;
  /* 12dce0ae mov esp, ebp */
  ESP = (EBP);
  /* 12dce0b0 pop ebp */
  EBP = (pop32());
  /* 12dce0b1 ret  */
  ESPCHK(0x12dcdfe0u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x12dce0c0 (219 bytes, 64 insns) */
void f_12dce0c0(void) {
  FTRACE(0x12dce0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dce0c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dce0c1 mov ebp, esp */
  EBP = (ESP);
  /* 12dce0c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12dce0c4 cmp dword ptr [0x12ddf73c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf73c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dce0cb je 0x12dce161 */
  if (C.zf) goto L_12dce161;
  /* 12dce0d1 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 12dce0d3 push 0x12ddb210 */
  push32((uint32_t)(0x12ddb210u));
  /* 12dce0d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dce0da push 0xac */
  push32((uint32_t)(0xacu));
  /* 12dce0df push 1 */
  push32((uint32_t)(0x1u));
  /* 12dce0e1 call 0x12dc3d00 */
  push32(0x12dce0e6u); f_12dc3d00();
  /* 12dce0e6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce0e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dce0ec cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dce0f0 jne 0x12dce0fc */
  if (!C.zf) goto L_12dce0fc;
  /* 12dce0f2 mov eax, 1 */
  EAX = (0x1u);
  /* 12dce0f7 jmp 0x12dce197 */
  goto L_12dce197;
L_12dce0fc:;
  /* 12dce0fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dce0ff push eax */
  push32((uint32_t)(EAX));
  /* 12dce100 call 0x12dce1a0 */
  push32(0x12dce105u); f_12dce1a0();
  /* 12dce105 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce108 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dce10a je 0x12dce12d */
  if (C.zf) goto L_12dce12d;
  /* 12dce10c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dce10f push ecx */
  push32((uint32_t)(ECX));
  /* 12dce110 call 0x12dce730 */
  push32(0x12dce115u); f_12dce730();
  /* 12dce115 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce118 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dce11a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dce11d push edx */
  push32((uint32_t)(EDX));
  /* 12dce11e call 0x12dc4380 */
  push32(0x12dce123u); f_12dc4380();
  /* 12dce123 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce126 mov eax, 1 */
  EAX = (0x1u);
  /* 12dce12b jmp 0x12dce197 */
  goto L_12dce197;
L_12dce12d:;
  /* 12dce12d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dce130 mov dword ptr [0x12ddec98], eax */
  w32((uint32_t)(0x12ddec98), (EAX));
  /* 12dce135 mov ecx, dword ptr [0x12ddf75c] */
  ECX = (r32((uint32_t)(0x12ddf75c)));
  /* 12dce13b push ecx */
  push32((uint32_t)(ECX));
  /* 12dce13c call 0x12dce730 */
  push32(0x12dce141u); f_12dce730();
  /* 12dce141 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce144 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dce146 mov edx, dword ptr [0x12ddf75c] */
  EDX = (r32((uint32_t)(0x12ddf75c)));
  /* 12dce14c push edx */
  push32((uint32_t)(EDX));
  /* 12dce14d call 0x12dc4380 */
  push32(0x12dce152u); f_12dc4380();
  /* 12dce152 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce155 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dce158 mov dword ptr [0x12ddf75c], eax */
  w32((uint32_t)(0x12ddf75c), (EAX));
  /* 12dce15d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dce15f jmp 0x12dce197 */
  goto L_12dce197;
L_12dce161:;
  /* 12dce161 mov dword ptr [0x12ddec98], 0x12ddeca0 */
  w32((uint32_t)(0x12ddec98), (0x12ddeca0u));
  /* 12dce16b mov ecx, dword ptr [0x12ddf75c] */
  ECX = (r32((uint32_t)(0x12ddf75c)));
  /* 12dce171 push ecx */
  push32((uint32_t)(ECX));
  /* 12dce172 call 0x12dce730 */
  push32(0x12dce177u); f_12dce730();
  /* 12dce177 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce17a push 2 */
  push32((uint32_t)(0x2u));
  /* 12dce17c mov edx, dword ptr [0x12ddf75c] */
  EDX = (r32((uint32_t)(0x12ddf75c)));
  /* 12dce182 push edx */
  push32((uint32_t)(EDX));
  /* 12dce183 call 0x12dc4380 */
  push32(0x12dce188u); f_12dc4380();
  /* 12dce188 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce18b mov dword ptr [0x12ddf75c], 0 */
  w32((uint32_t)(0x12ddf75c), (0x0u));
  /* 12dce195 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12dce197:;
  /* 12dce197 mov esp, ebp */
  ESP = (EBP);
  /* 12dce199 pop ebp */
  EBP = (pop32());
  /* 12dce19a ret  */
  ESPCHK(0x12dce0c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e1a0 @ 0x12dce1a0 (1423 bytes, 533 insns) */
void f_12dce1a0(void) {
  FTRACE(0x12dce1a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dce1a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dce1a1 mov ebp, esp */
  EBP = (ESP);
  /* 12dce1a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dce1a6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12dce1ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dce1af mov ax, word ptr [0x12ddf796] */
  AX = (r16((uint32_t)(0x12ddf796)));
  /* 12dce1b5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dce1b8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dce1ba mov cx, word ptr [0x12ddf798] */
  CX = (r16((uint32_t)(0x12ddf798)));
  /* 12dce1c1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dce1c4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dce1c8 jne 0x12dce1d2 */
  if (!C.zf) goto L_12dce1d2;
  /* 12dce1ca or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dce1cd jmp 0x12dce72b */
  goto L_12dce72b;
L_12dce1d2:;
  /* 12dce1d2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce1d5 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce1d8 push edx */
  push32((uint32_t)(EDX));
  /* 12dce1d9 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 12dce1db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dce1de push eax */
  push32((uint32_t)(EAX));
  /* 12dce1df push 1 */
  push32((uint32_t)(0x1u));
  /* 12dce1e1 call 0x12dd1ab0 */
  push32(0x12dce1e6u); f_12dd1ab0();
  /* 12dce1e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce1e9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dce1ec or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dce1ee mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dce1f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce1f4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce1f7 push edx */
  push32((uint32_t)(EDX));
  /* 12dce1f8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 12dce1fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dce1fd push eax */
  push32((uint32_t)(EAX));
  /* 12dce1fe push 1 */
  push32((uint32_t)(0x1u));
  /* 12dce200 call 0x12dd1ab0 */
  push32(0x12dce205u); f_12dd1ab0();
  /* 12dce205 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce208 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dce20b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dce20d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dce210 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce213 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce216 push edx */
  push32((uint32_t)(EDX));
  /* 12dce217 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 12dce219 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dce21c push eax */
  push32((uint32_t)(EAX));
  /* 12dce21d push 1 */
  push32((uint32_t)(0x1u));
  /* 12dce21f call 0x12dd1ab0 */
  push32(0x12dce224u); f_12dd1ab0();
  /* 12dce224 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce227 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dce22a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dce22c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dce22f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce232 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce235 push edx */
  push32((uint32_t)(EDX));
  /* 12dce236 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 12dce238 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dce23b push eax */
  push32((uint32_t)(EAX));
  /* 12dce23c push 1 */
  push32((uint32_t)(0x1u));
  /* 12dce23e call 0x12dd1ab0 */
  push32(0x12dce243u); f_12dd1ab0();
  /* 12dce243 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce246 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dce249 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dce24b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dce24e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce251 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce254 push edx */
  push32((uint32_t)(EDX));
  /* 12dce255 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 12dce257 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dce25a push eax */
  push32((uint32_t)(EAX));
  /* 12dce25b push 1 */
  push32((uint32_t)(0x1u));
  /* 12dce25d call 0x12dd1ab0 */
  push32(0x12dce262u); f_12dd1ab0();
  /* 12dce262 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce265 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dce268 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dce26a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dce26d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce270 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce273 push edx */
  push32((uint32_t)(EDX));
  /* 12dce274 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 12dce276 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dce279 push eax */
  push32((uint32_t)(EAX));
  /* 12dce27a push 1 */
  push32((uint32_t)(0x1u));
  /* 12dce27c call 0x12dd1ab0 */
  push32(0x12dce281u); f_12dd1ab0();
  /* 12dce281 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce284 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dce287 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dce289 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dce28c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce28f push edx */
  push32((uint32_t)(EDX));
  /* 12dce290 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 12dce292 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dce295 push eax */
  push32((uint32_t)(EAX));
  /* 12dce296 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dce298 call 0x12dd1ab0 */
  push32(0x12dce29du); f_12dd1ab0();
  /* 12dce29d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce2a0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dce2a3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dce2a5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dce2a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce2ab add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce2ae push edx */
  push32((uint32_t)(EDX));
  /* 12dce2af push 0x2a */
  push32((uint32_t)(0x2au));
  /* 12dce2b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dce2b4 push eax */
  push32((uint32_t)(EAX));
  /* 12dce2b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dce2b7 call 0x12dd1ab0 */
  push32(0x12dce2bcu); f_12dd1ab0();
  /* 12dce2bc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce2bf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dce2c2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dce2c4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dce2c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce2ca add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce2cd push edx */
  push32((uint32_t)(EDX));
  /* 12dce2ce push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 12dce2d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dce2d3 push eax */
  push32((uint32_t)(EAX));
  /* 12dce2d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dce2d6 call 0x12dd1ab0 */
  push32(0x12dce2dbu); f_12dd1ab0();
  /* 12dce2db add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce2de mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dce2e1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dce2e3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dce2e6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce2e9 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce2ec push edx */
  push32((uint32_t)(EDX));
  /* 12dce2ed push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 12dce2ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dce2f2 push eax */
  push32((uint32_t)(EAX));
  /* 12dce2f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dce2f5 call 0x12dd1ab0 */
  push32(0x12dce2fau); f_12dd1ab0();
  /* 12dce2fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce2fd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dce300 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dce302 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dce305 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce308 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce30b push edx */
  push32((uint32_t)(EDX));
  /* 12dce30c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 12dce30e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dce311 push eax */
  push32((uint32_t)(EAX));
  /* 12dce312 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dce314 call 0x12dd1ab0 */
  push32(0x12dce319u); f_12dd1ab0();
  /* 12dce319 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce31c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dce31f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dce321 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dce324 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce327 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce32a push edx */
  push32((uint32_t)(EDX));
  /* 12dce32b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 12dce32d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dce330 push eax */
  push32((uint32_t)(EAX));
  /* 12dce331 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dce333 call 0x12dd1ab0 */
  push32(0x12dce338u); f_12dd1ab0();
  /* 12dce338 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce33b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dce33e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dce340 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dce343 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce346 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce349 push edx */
  push32((uint32_t)(EDX));
  /* 12dce34a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 12dce34c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dce34f push eax */
  push32((uint32_t)(EAX));
  /* 12dce350 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dce352 call 0x12dd1ab0 */
  push32(0x12dce357u); f_12dd1ab0();
  /* 12dce357 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce35a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dce35d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dce35f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dce362 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce365 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce368 push edx */
  push32((uint32_t)(EDX));
  /* 12dce369 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12dce36b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dce36e push eax */
  push32((uint32_t)(EAX));
  /* 12dce36f push 1 */
  push32((uint32_t)(0x1u));
  /* 12dce371 call 0x12dd1ab0 */
  push32(0x12dce376u); f_12dd1ab0();
  /* 12dce376 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce379 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dce37c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dce37e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dce381 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce384 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce387 push edx */
  push32((uint32_t)(EDX));
  /* 12dce388 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 12dce38a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dce38d push eax */
  push32((uint32_t)(EAX));
  /* 12dce38e push 1 */
  push32((uint32_t)(0x1u));
  /* 12dce390 call 0x12dd1ab0 */
  push32(0x12dce395u); f_12dd1ab0();
  /* 12dce395 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce398 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dce39b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dce39d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dce3a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce3a3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce3a6 push edx */
  push32((uint32_t)(EDX));
  /* 12dce3a7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 12dce3a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dce3ac push eax */
  push32((uint32_t)(EAX));
  /* 12dce3ad push 1 */
  push32((uint32_t)(0x1u));
  /* 12dce3af call 0x12dd1ab0 */
  push32(0x12dce3b4u); f_12dd1ab0();
  /* 12dce3b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce3b7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dce3ba or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dce3bc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dce3bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce3c2 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce3c5 push edx */
  push32((uint32_t)(EDX));
  /* 12dce3c6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 12dce3c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dce3cb push eax */
  push32((uint32_t)(EAX));
  /* 12dce3cc push 1 */
  push32((uint32_t)(0x1u));
  /* 12dce3ce call 0x12dd1ab0 */
  push32(0x12dce3d3u); f_12dd1ab0();
  /* 12dce3d3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce3d6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dce3d9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dce3db mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dce3de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce3e1 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce3e4 push edx */
  push32((uint32_t)(EDX));
  /* 12dce3e5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 12dce3e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dce3ea push eax */
  push32((uint32_t)(EAX));
  /* 12dce3eb push 1 */
  push32((uint32_t)(0x1u));
  /* 12dce3ed call 0x12dd1ab0 */
  push32(0x12dce3f2u); f_12dd1ab0();
  /* 12dce3f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce3f5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dce3f8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dce3fa mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dce3fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce400 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce403 push edx */
  push32((uint32_t)(EDX));
  /* 12dce404 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 12dce406 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dce409 push eax */
  push32((uint32_t)(EAX));
  /* 12dce40a push 1 */
  push32((uint32_t)(0x1u));
  /* 12dce40c call 0x12dd1ab0 */
  push32(0x12dce411u); f_12dd1ab0();
  /* 12dce411 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce414 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dce417 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dce419 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dce41c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce41f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce422 push edx */
  push32((uint32_t)(EDX));
  /* 12dce423 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 12dce425 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dce428 push eax */
  push32((uint32_t)(EAX));
  /* 12dce429 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dce42b call 0x12dd1ab0 */
  push32(0x12dce430u); f_12dd1ab0();
  /* 12dce430 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce433 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dce436 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dce438 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dce43b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce43e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce441 push edx */
  push32((uint32_t)(EDX));
  /* 12dce442 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 12dce444 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dce447 push eax */
  push32((uint32_t)(EAX));
  /* 12dce448 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dce44a call 0x12dd1ab0 */
  push32(0x12dce44fu); f_12dd1ab0();
  /* 12dce44f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce452 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dce455 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dce457 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dce45a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce45d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce460 push edx */
  push32((uint32_t)(EDX));
  /* 12dce461 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 12dce463 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dce466 push eax */
  push32((uint32_t)(EAX));
  /* 12dce467 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dce469 call 0x12dd1ab0 */
  push32(0x12dce46eu); f_12dd1ab0();
  /* 12dce46e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce471 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dce474 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dce476 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dce479 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce47c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce47f push edx */
  push32((uint32_t)(EDX));
  /* 12dce480 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 12dce482 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dce485 push eax */
  push32((uint32_t)(EAX));
  /* 12dce486 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dce488 call 0x12dd1ab0 */
  push32(0x12dce48du); f_12dd1ab0();
  /* 12dce48d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce490 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dce493 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dce495 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dce498 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce49b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce49e push edx */
  push32((uint32_t)(EDX));
  /* 12dce49f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 12dce4a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dce4a4 push eax */
  push32((uint32_t)(EAX));
  /* 12dce4a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dce4a7 call 0x12dd1ab0 */
  push32(0x12dce4acu); f_12dd1ab0();
  /* 12dce4ac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce4af mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dce4b2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dce4b4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dce4b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce4ba add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce4bd push edx */
  push32((uint32_t)(EDX));
  /* 12dce4be push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 12dce4c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dce4c3 push eax */
  push32((uint32_t)(EAX));
  /* 12dce4c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dce4c6 call 0x12dd1ab0 */
  push32(0x12dce4cbu); f_12dd1ab0();
  /* 12dce4cb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce4ce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dce4d1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dce4d3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dce4d6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce4d9 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce4dc push edx */
  push32((uint32_t)(EDX));
  /* 12dce4dd push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 12dce4df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dce4e2 push eax */
  push32((uint32_t)(EAX));
  /* 12dce4e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dce4e5 call 0x12dd1ab0 */
  push32(0x12dce4eau); f_12dd1ab0();
  /* 12dce4ea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce4ed mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dce4f0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dce4f2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dce4f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce4f8 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce4fb push edx */
  push32((uint32_t)(EDX));
  /* 12dce4fc push 0x38 */
  push32((uint32_t)(0x38u));
  /* 12dce4fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dce501 push eax */
  push32((uint32_t)(EAX));
  /* 12dce502 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dce504 call 0x12dd1ab0 */
  push32(0x12dce509u); f_12dd1ab0();
  /* 12dce509 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce50c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dce50f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dce511 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dce514 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce517 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce51a push edx */
  push32((uint32_t)(EDX));
  /* 12dce51b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 12dce51d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dce520 push eax */
  push32((uint32_t)(EAX));
  /* 12dce521 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dce523 call 0x12dd1ab0 */
  push32(0x12dce528u); f_12dd1ab0();
  /* 12dce528 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce52b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dce52e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dce530 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dce533 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce536 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce539 push edx */
  push32((uint32_t)(EDX));
  /* 12dce53a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 12dce53c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dce53f push eax */
  push32((uint32_t)(EAX));
  /* 12dce540 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dce542 call 0x12dd1ab0 */
  push32(0x12dce547u); f_12dd1ab0();
  /* 12dce547 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce54a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dce54d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dce54f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dce552 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce555 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce558 push edx */
  push32((uint32_t)(EDX));
  /* 12dce559 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 12dce55b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dce55e push eax */
  push32((uint32_t)(EAX));
  /* 12dce55f push 1 */
  push32((uint32_t)(0x1u));
  /* 12dce561 call 0x12dd1ab0 */
  push32(0x12dce566u); f_12dd1ab0();
  /* 12dce566 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce569 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dce56c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dce56e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dce571 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce574 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce577 push edx */
  push32((uint32_t)(EDX));
  /* 12dce578 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 12dce57a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dce57d push eax */
  push32((uint32_t)(EAX));
  /* 12dce57e push 1 */
  push32((uint32_t)(0x1u));
  /* 12dce580 call 0x12dd1ab0 */
  push32(0x12dce585u); f_12dd1ab0();
  /* 12dce585 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce588 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dce58b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dce58d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dce590 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce593 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce596 push edx */
  push32((uint32_t)(EDX));
  /* 12dce597 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12dce599 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dce59c push eax */
  push32((uint32_t)(EAX));
  /* 12dce59d push 1 */
  push32((uint32_t)(0x1u));
  /* 12dce59f call 0x12dd1ab0 */
  push32(0x12dce5a4u); f_12dd1ab0();
  /* 12dce5a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce5a7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dce5aa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dce5ac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dce5af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce5b2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce5b8 push edx */
  push32((uint32_t)(EDX));
  /* 12dce5b9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 12dce5bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dce5be push eax */
  push32((uint32_t)(EAX));
  /* 12dce5bf push 1 */
  push32((uint32_t)(0x1u));
  /* 12dce5c1 call 0x12dd1ab0 */
  push32(0x12dce5c6u); f_12dd1ab0();
  /* 12dce5c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce5c9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dce5cc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dce5ce mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dce5d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce5d4 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce5da push edx */
  push32((uint32_t)(EDX));
  /* 12dce5db push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12dce5dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dce5e0 push eax */
  push32((uint32_t)(EAX));
  /* 12dce5e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dce5e3 call 0x12dd1ab0 */
  push32(0x12dce5e8u); f_12dd1ab0();
  /* 12dce5e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce5eb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dce5ee or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dce5f0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dce5f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce5f6 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce5fc push edx */
  push32((uint32_t)(EDX));
  /* 12dce5fd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12dce5ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dce602 push eax */
  push32((uint32_t)(EAX));
  /* 12dce603 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dce605 call 0x12dd1ab0 */
  push32(0x12dce60au); f_12dd1ab0();
  /* 12dce60a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce60d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dce610 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dce612 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dce615 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce618 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce61e push edx */
  push32((uint32_t)(EDX));
  /* 12dce61f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 12dce621 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dce624 push eax */
  push32((uint32_t)(EAX));
  /* 12dce625 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dce627 call 0x12dd1ab0 */
  push32(0x12dce62cu); f_12dd1ab0();
  /* 12dce62c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce62f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dce632 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dce634 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dce637 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce63a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce640 push edx */
  push32((uint32_t)(EDX));
  /* 12dce641 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 12dce643 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dce646 push eax */
  push32((uint32_t)(EAX));
  /* 12dce647 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dce649 call 0x12dd1ab0 */
  push32(0x12dce64eu); f_12dd1ab0();
  /* 12dce64e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce651 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dce654 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dce656 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dce659 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce65c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce662 push edx */
  push32((uint32_t)(EDX));
  /* 12dce663 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 12dce665 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dce668 push eax */
  push32((uint32_t)(EAX));
  /* 12dce669 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dce66b call 0x12dd1ab0 */
  push32(0x12dce670u); f_12dd1ab0();
  /* 12dce670 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce673 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dce676 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dce678 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dce67b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce67e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce684 push edx */
  push32((uint32_t)(EDX));
  /* 12dce685 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 12dce687 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dce68a push eax */
  push32((uint32_t)(EAX));
  /* 12dce68b push 1 */
  push32((uint32_t)(0x1u));
  /* 12dce68d call 0x12dd1ab0 */
  push32(0x12dce692u); f_12dd1ab0();
  /* 12dce692 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce695 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dce698 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dce69a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dce69d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce6a0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce6a6 push edx */
  push32((uint32_t)(EDX));
  /* 12dce6a7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 12dce6a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dce6ac push eax */
  push32((uint32_t)(EAX));
  /* 12dce6ad push 1 */
  push32((uint32_t)(0x1u));
  /* 12dce6af call 0x12dd1ab0 */
  push32(0x12dce6b4u); f_12dd1ab0();
  /* 12dce6b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce6b7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dce6ba or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dce6bc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dce6bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce6c2 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce6c8 push edx */
  push32((uint32_t)(EDX));
  /* 12dce6c9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 12dce6cb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dce6ce push eax */
  push32((uint32_t)(EAX));
  /* 12dce6cf push 1 */
  push32((uint32_t)(0x1u));
  /* 12dce6d1 call 0x12dd1ab0 */
  push32(0x12dce6d6u); f_12dd1ab0();
  /* 12dce6d6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce6d9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dce6dc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dce6de mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dce6e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce6e4 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce6ea push edx */
  push32((uint32_t)(EDX));
  /* 12dce6eb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12dce6ed mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dce6f0 push eax */
  push32((uint32_t)(EAX));
  /* 12dce6f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dce6f3 call 0x12dd1ab0 */
  push32(0x12dce6f8u); f_12dd1ab0();
  /* 12dce6f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce6fb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dce6fe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dce700 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dce703 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce706 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce70c push edx */
  push32((uint32_t)(EDX));
  /* 12dce70d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 12dce712 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dce715 push eax */
  push32((uint32_t)(EAX));
  /* 12dce716 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dce718 call 0x12dd1ab0 */
  push32(0x12dce71du); f_12dd1ab0();
  /* 12dce71d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce720 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dce723 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dce725 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dce728 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_12dce72b:;
  /* 12dce72b mov esp, ebp */
  ESP = (EBP);
  /* 12dce72d pop ebp */
  EBP = (pop32());
  /* 12dce72e ret  */
  ESPCHK(0x12dce1a0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x12dce730 (779 bytes, 265 insns) */
void f_12dce730(void) {
  FTRACE(0x12dce730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dce730 push ebp */
  push32((uint32_t)(EBP));
  /* 12dce731 mov ebp, esp */
  EBP = (ESP);
  /* 12dce733 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dce737 jne 0x12dce73e */
  if (!C.zf) goto L_12dce73e;
  /* 12dce739 jmp 0x12dcea39 */
  goto L_12dcea39;
L_12dce73e:;
  /* 12dce73e push 2 */
  push32((uint32_t)(0x2u));
  /* 12dce740 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce743 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12dce746 push ecx */
  push32((uint32_t)(ECX));
  /* 12dce747 call 0x12dc4380 */
  push32(0x12dce74cu); f_12dc4380();
  /* 12dce74c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce74f push 2 */
  push32((uint32_t)(0x2u));
  /* 12dce751 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce754 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12dce757 push eax */
  push32((uint32_t)(EAX));
  /* 12dce758 call 0x12dc4380 */
  push32(0x12dce75du); f_12dc4380();
  /* 12dce75d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce760 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dce762 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce765 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12dce768 push edx */
  push32((uint32_t)(EDX));
  /* 12dce769 call 0x12dc4380 */
  push32(0x12dce76eu); f_12dc4380();
  /* 12dce76e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce771 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dce773 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce776 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12dce779 push ecx */
  push32((uint32_t)(ECX));
  /* 12dce77a call 0x12dc4380 */
  push32(0x12dce77fu); f_12dc4380();
  /* 12dce77f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce782 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dce784 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce787 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12dce78a push eax */
  push32((uint32_t)(EAX));
  /* 12dce78b call 0x12dc4380 */
  push32(0x12dce790u); f_12dc4380();
  /* 12dce790 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce793 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dce795 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce798 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12dce79b push edx */
  push32((uint32_t)(EDX));
  /* 12dce79c call 0x12dc4380 */
  push32(0x12dce7a1u); f_12dc4380();
  /* 12dce7a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce7a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dce7a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce7a9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dce7ab push ecx */
  push32((uint32_t)(ECX));
  /* 12dce7ac call 0x12dc4380 */
  push32(0x12dce7b1u); f_12dc4380();
  /* 12dce7b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce7b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dce7b6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce7b9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 12dce7bc push eax */
  push32((uint32_t)(EAX));
  /* 12dce7bd call 0x12dc4380 */
  push32(0x12dce7c2u); f_12dc4380();
  /* 12dce7c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce7c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dce7c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce7ca mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 12dce7cd push edx */
  push32((uint32_t)(EDX));
  /* 12dce7ce call 0x12dc4380 */
  push32(0x12dce7d3u); f_12dc4380();
  /* 12dce7d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce7d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dce7d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce7db mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 12dce7de push ecx */
  push32((uint32_t)(ECX));
  /* 12dce7df call 0x12dc4380 */
  push32(0x12dce7e4u); f_12dc4380();
  /* 12dce7e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce7e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dce7e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce7ec mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 12dce7ef push eax */
  push32((uint32_t)(EAX));
  /* 12dce7f0 call 0x12dc4380 */
  push32(0x12dce7f5u); f_12dc4380();
  /* 12dce7f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce7f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dce7fa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce7fd mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 12dce800 push edx */
  push32((uint32_t)(EDX));
  /* 12dce801 call 0x12dc4380 */
  push32(0x12dce806u); f_12dc4380();
  /* 12dce806 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce809 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dce80b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce80e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 12dce811 push ecx */
  push32((uint32_t)(ECX));
  /* 12dce812 call 0x12dc4380 */
  push32(0x12dce817u); f_12dc4380();
  /* 12dce817 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce81a push 2 */
  push32((uint32_t)(0x2u));
  /* 12dce81c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce81f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12dce822 push eax */
  push32((uint32_t)(EAX));
  /* 12dce823 call 0x12dc4380 */
  push32(0x12dce828u); f_12dc4380();
  /* 12dce828 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce82b push 2 */
  push32((uint32_t)(0x2u));
  /* 12dce82d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce830 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 12dce833 push edx */
  push32((uint32_t)(EDX));
  /* 12dce834 call 0x12dc4380 */
  push32(0x12dce839u); f_12dc4380();
  /* 12dce839 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce83c push 2 */
  push32((uint32_t)(0x2u));
  /* 12dce83e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce841 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 12dce844 push ecx */
  push32((uint32_t)(ECX));
  /* 12dce845 call 0x12dc4380 */
  push32(0x12dce84au); f_12dc4380();
  /* 12dce84a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce84d push 2 */
  push32((uint32_t)(0x2u));
  /* 12dce84f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce852 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 12dce855 push eax */
  push32((uint32_t)(EAX));
  /* 12dce856 call 0x12dc4380 */
  push32(0x12dce85bu); f_12dc4380();
  /* 12dce85b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce85e push 2 */
  push32((uint32_t)(0x2u));
  /* 12dce860 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce863 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 12dce866 push edx */
  push32((uint32_t)(EDX));
  /* 12dce867 call 0x12dc4380 */
  push32(0x12dce86cu); f_12dc4380();
  /* 12dce86c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce86f push 2 */
  push32((uint32_t)(0x2u));
  /* 12dce871 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce874 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 12dce877 push ecx */
  push32((uint32_t)(ECX));
  /* 12dce878 call 0x12dc4380 */
  push32(0x12dce87du); f_12dc4380();
  /* 12dce87d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce880 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dce882 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce885 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 12dce888 push eax */
  push32((uint32_t)(EAX));
  /* 12dce889 call 0x12dc4380 */
  push32(0x12dce88eu); f_12dc4380();
  /* 12dce88e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce891 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dce893 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce896 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12dce899 push edx */
  push32((uint32_t)(EDX));
  /* 12dce89a call 0x12dc4380 */
  push32(0x12dce89fu); f_12dc4380();
  /* 12dce89f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce8a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dce8a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce8a7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 12dce8aa push ecx */
  push32((uint32_t)(ECX));
  /* 12dce8ab call 0x12dc4380 */
  push32(0x12dce8b0u); f_12dc4380();
  /* 12dce8b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce8b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dce8b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce8b8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 12dce8bb push eax */
  push32((uint32_t)(EAX));
  /* 12dce8bc call 0x12dc4380 */
  push32(0x12dce8c1u); f_12dc4380();
  /* 12dce8c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce8c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dce8c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce8c9 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 12dce8cc push edx */
  push32((uint32_t)(EDX));
  /* 12dce8cd call 0x12dc4380 */
  push32(0x12dce8d2u); f_12dc4380();
  /* 12dce8d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce8d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dce8d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce8da mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 12dce8dd push ecx */
  push32((uint32_t)(ECX));
  /* 12dce8de call 0x12dc4380 */
  push32(0x12dce8e3u); f_12dc4380();
  /* 12dce8e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce8e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dce8e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce8eb mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 12dce8ee push eax */
  push32((uint32_t)(EAX));
  /* 12dce8ef call 0x12dc4380 */
  push32(0x12dce8f4u); f_12dc4380();
  /* 12dce8f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce8f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dce8f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce8fc mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 12dce8ff push edx */
  push32((uint32_t)(EDX));
  /* 12dce900 call 0x12dc4380 */
  push32(0x12dce905u); f_12dc4380();
  /* 12dce905 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce908 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dce90a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce90d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 12dce910 push ecx */
  push32((uint32_t)(ECX));
  /* 12dce911 call 0x12dc4380 */
  push32(0x12dce916u); f_12dc4380();
  /* 12dce916 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce919 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dce91b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce91e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 12dce921 push eax */
  push32((uint32_t)(EAX));
  /* 12dce922 call 0x12dc4380 */
  push32(0x12dce927u); f_12dc4380();
  /* 12dce927 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce92a push 2 */
  push32((uint32_t)(0x2u));
  /* 12dce92c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce92f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 12dce932 push edx */
  push32((uint32_t)(EDX));
  /* 12dce933 call 0x12dc4380 */
  push32(0x12dce938u); f_12dc4380();
  /* 12dce938 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce93b push 2 */
  push32((uint32_t)(0x2u));
  /* 12dce93d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce940 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 12dce943 push ecx */
  push32((uint32_t)(ECX));
  /* 12dce944 call 0x12dc4380 */
  push32(0x12dce949u); f_12dc4380();
  /* 12dce949 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce94c push 2 */
  push32((uint32_t)(0x2u));
  /* 12dce94e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce951 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 12dce954 push eax */
  push32((uint32_t)(EAX));
  /* 12dce955 call 0x12dc4380 */
  push32(0x12dce95au); f_12dc4380();
  /* 12dce95a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce95d push 2 */
  push32((uint32_t)(0x2u));
  /* 12dce95f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce962 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 12dce968 push edx */
  push32((uint32_t)(EDX));
  /* 12dce969 call 0x12dc4380 */
  push32(0x12dce96eu); f_12dc4380();
  /* 12dce96e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce971 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dce973 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce976 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 12dce97c push ecx */
  push32((uint32_t)(ECX));
  /* 12dce97d call 0x12dc4380 */
  push32(0x12dce982u); f_12dc4380();
  /* 12dce982 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce985 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dce987 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce98a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 12dce990 push eax */
  push32((uint32_t)(EAX));
  /* 12dce991 call 0x12dc4380 */
  push32(0x12dce996u); f_12dc4380();
  /* 12dce996 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce999 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dce99b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce99e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 12dce9a4 push edx */
  push32((uint32_t)(EDX));
  /* 12dce9a5 call 0x12dc4380 */
  push32(0x12dce9aau); f_12dc4380();
  /* 12dce9aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce9ad push 2 */
  push32((uint32_t)(0x2u));
  /* 12dce9af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce9b2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 12dce9b8 push ecx */
  push32((uint32_t)(ECX));
  /* 12dce9b9 call 0x12dc4380 */
  push32(0x12dce9beu); f_12dc4380();
  /* 12dce9be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce9c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dce9c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce9c6 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 12dce9cc push eax */
  push32((uint32_t)(EAX));
  /* 12dce9cd call 0x12dc4380 */
  push32(0x12dce9d2u); f_12dc4380();
  /* 12dce9d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce9d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dce9d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce9da mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 12dce9e0 push edx */
  push32((uint32_t)(EDX));
  /* 12dce9e1 call 0x12dc4380 */
  push32(0x12dce9e6u); f_12dc4380();
  /* 12dce9e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce9e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dce9eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dce9ee mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 12dce9f4 push ecx */
  push32((uint32_t)(ECX));
  /* 12dce9f5 call 0x12dc4380 */
  push32(0x12dce9fau); f_12dc4380();
  /* 12dce9fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dce9fd push 2 */
  push32((uint32_t)(0x2u));
  /* 12dce9ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcea02 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 12dcea08 push eax */
  push32((uint32_t)(EAX));
  /* 12dcea09 call 0x12dc4380 */
  push32(0x12dcea0eu); f_12dc4380();
  /* 12dcea0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcea11 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcea13 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcea16 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 12dcea1c push edx */
  push32((uint32_t)(EDX));
  /* 12dcea1d call 0x12dc4380 */
  push32(0x12dcea22u); f_12dc4380();
  /* 12dcea22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcea25 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcea27 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcea2a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 12dcea30 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcea31 call 0x12dc4380 */
  push32(0x12dcea36u); f_12dc4380();
  /* 12dcea36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dcea39:;
  /* 12dcea39 pop ebp */
  EBP = (pop32());
  /* 12dcea3a ret  */
  ESPCHK(0x12dce730u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ea40 @ 0x12dcea40 (678 bytes, 180 insns) */
void f_12dcea40(void) {
  FTRACE(0x12dcea40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcea40 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcea41 mov ebp, esp */
  EBP = (ESP);
  /* 12dcea43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcea46 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12dcea4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dcea4f mov ax, word ptr [0x12ddf792] */
  AX = (r16((uint32_t)(0x12ddf792)));
  /* 12dcea55 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dcea58 cmp dword ptr [0x12ddf738], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf738))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcea5f je 0x12dcebba */
  if (C.zf) goto L_12dcebba;
  /* 12dcea65 push 0x12ddf760 */
  push32((uint32_t)(0x12ddf760u));
  /* 12dcea6a push 0xe */
  push32((uint32_t)(0xeu));
  /* 12dcea6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcea6f push ecx */
  push32((uint32_t)(ECX));
  /* 12dcea70 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dcea72 call 0x12dd1ab0 */
  push32(0x12dcea77u); f_12dd1ab0();
  /* 12dcea77 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcea7a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcea7d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12dcea7f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12dcea82 push 0x12ddf764 */
  push32((uint32_t)(0x12ddf764u));
  /* 12dcea87 push 0xf */
  push32((uint32_t)(0xfu));
  /* 12dcea89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcea8c push eax */
  push32((uint32_t)(EAX));
  /* 12dcea8d push 1 */
  push32((uint32_t)(0x1u));
  /* 12dcea8f call 0x12dd1ab0 */
  push32(0x12dcea94u); f_12dd1ab0();
  /* 12dcea94 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcea97 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcea9a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dcea9c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dcea9f push 0x12ddf768 */
  push32((uint32_t)(0x12ddf768u));
  /* 12dceaa4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12dceaa6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dceaa9 push edx */
  push32((uint32_t)(EDX));
  /* 12dceaaa push 1 */
  push32((uint32_t)(0x1u));
  /* 12dceaac call 0x12dd1ab0 */
  push32(0x12dceab1u); f_12dd1ab0();
  /* 12dceab1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dceab4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dceab7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dceab9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dceabc mov edx, dword ptr [0x12ddf768] */
  EDX = (r32((uint32_t)(0x12ddf768)));
  /* 12dceac2 push edx */
  push32((uint32_t)(EDX));
  /* 12dceac3 call 0x12dcecf0 */
  push32(0x12dceac8u); f_12dcecf0();
  /* 12dceac8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dceacb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dceacf je 0x12dceb29 */
  if (C.zf) goto L_12dceb29;
  /* 12dcead1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcead3 mov eax, dword ptr [0x12ddf760] */
  EAX = (r32((uint32_t)(0x12ddf760)));
  /* 12dcead8 push eax */
  push32((uint32_t)(EAX));
  /* 12dcead9 call 0x12dc4380 */
  push32(0x12dceadeu); f_12dc4380();
  /* 12dceade add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dceae1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dceae3 mov ecx, dword ptr [0x12ddf764] */
  ECX = (r32((uint32_t)(0x12ddf764)));
  /* 12dceae9 push ecx */
  push32((uint32_t)(ECX));
  /* 12dceaea call 0x12dc4380 */
  push32(0x12dceaefu); f_12dc4380();
  /* 12dceaef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dceaf2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dceaf4 mov edx, dword ptr [0x12ddf768] */
  EDX = (r32((uint32_t)(0x12ddf768)));
  /* 12dceafa push edx */
  push32((uint32_t)(EDX));
  /* 12dceafb call 0x12dc4380 */
  push32(0x12dceb00u); f_12dc4380();
  /* 12dceb00 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dceb03 mov dword ptr [0x12ddf760], 0 */
  w32((uint32_t)(0x12ddf760), (0x0u));
  /* 12dceb0d mov dword ptr [0x12ddf764], 0 */
  w32((uint32_t)(0x12ddf764), (0x0u));
  /* 12dceb17 mov dword ptr [0x12ddf768], 0 */
  w32((uint32_t)(0x12ddf768), (0x0u));
  /* 12dceb21 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dceb24 jmp 0x12dcece2 */
  goto L_12dcece2;
L_12dceb29:;
  /* 12dceb29 mov eax, dword ptr [0x12dded88] */
  EAX = (r32((uint32_t)(0x12dded88)));
  /* 12dceb2e cmp dword ptr [eax], 0x12dded50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x12dded50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dceb34 je 0x12dceb70 */
  if (C.zf) goto L_12dceb70;
  /* 12dceb36 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dceb38 mov ecx, dword ptr [0x12dded88] */
  ECX = (r32((uint32_t)(0x12dded88)));
  /* 12dceb3e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dceb40 push edx */
  push32((uint32_t)(EDX));
  /* 12dceb41 call 0x12dc4380 */
  push32(0x12dceb46u); f_12dc4380();
  /* 12dceb46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dceb49 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dceb4b mov eax, dword ptr [0x12dded88] */
  EAX = (r32((uint32_t)(0x12dded88)));
  /* 12dceb50 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12dceb53 push ecx */
  push32((uint32_t)(ECX));
  /* 12dceb54 call 0x12dc4380 */
  push32(0x12dceb59u); f_12dc4380();
  /* 12dceb59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dceb5c push 2 */
  push32((uint32_t)(0x2u));
  /* 12dceb5e mov edx, dword ptr [0x12dded88] */
  EDX = (r32((uint32_t)(0x12dded88)));
  /* 12dceb64 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12dceb67 push eax */
  push32((uint32_t)(EAX));
  /* 12dceb68 call 0x12dc4380 */
  push32(0x12dceb6du); f_12dc4380();
  /* 12dceb6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dceb70:;
  /* 12dceb70 mov ecx, dword ptr [0x12dded88] */
  ECX = (r32((uint32_t)(0x12dded88)));
  /* 12dceb76 mov edx, dword ptr [0x12ddf760] */
  EDX = (r32((uint32_t)(0x12ddf760)));
  /* 12dceb7c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12dceb7e mov eax, dword ptr [0x12dded88] */
  EAX = (r32((uint32_t)(0x12dded88)));
  /* 12dceb83 mov ecx, dword ptr [0x12ddf764] */
  ECX = (r32((uint32_t)(0x12ddf764)));
  /* 12dceb89 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12dceb8c mov edx, dword ptr [0x12dded88] */
  EDX = (r32((uint32_t)(0x12dded88)));
  /* 12dceb92 mov eax, dword ptr [0x12ddf768] */
  EAX = (r32((uint32_t)(0x12ddf768)));
  /* 12dceb97 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12dceb9a mov ecx, dword ptr [0x12dded88] */
  ECX = (r32((uint32_t)(0x12dded88)));
  /* 12dceba0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dceba2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12dceba4 mov byte ptr [0x12dddea8], al */
  w8((uint32_t)(0x12dddea8), (AL));
  /* 12dceba9 mov dword ptr [0x12dddeac], 1 */
  w32((uint32_t)(0x12dddeac), (0x1u));
  /* 12dcebb3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dcebb5 jmp 0x12dcece2 */
  goto L_12dcece2;
L_12dcebba:;
  /* 12dcebba push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcebbc mov ecx, dword ptr [0x12ddf760] */
  ECX = (r32((uint32_t)(0x12ddf760)));
  /* 12dcebc2 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcebc3 call 0x12dc4380 */
  push32(0x12dcebc8u); f_12dc4380();
  /* 12dcebc8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcebcb push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcebcd mov edx, dword ptr [0x12ddf764] */
  EDX = (r32((uint32_t)(0x12ddf764)));
  /* 12dcebd3 push edx */
  push32((uint32_t)(EDX));
  /* 12dcebd4 call 0x12dc4380 */
  push32(0x12dcebd9u); f_12dc4380();
  /* 12dcebd9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcebdc push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcebde mov eax, dword ptr [0x12ddf768] */
  EAX = (r32((uint32_t)(0x12ddf768)));
  /* 12dcebe3 push eax */
  push32((uint32_t)(EAX));
  /* 12dcebe4 call 0x12dc4380 */
  push32(0x12dcebe9u); f_12dc4380();
  /* 12dcebe9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcebec mov dword ptr [0x12ddf760], 0 */
  w32((uint32_t)(0x12ddf760), (0x0u));
  /* 12dcebf6 mov dword ptr [0x12ddf764], 0 */
  w32((uint32_t)(0x12ddf764), (0x0u));
  /* 12dcec00 mov dword ptr [0x12ddf768], 0 */
  w32((uint32_t)(0x12ddf768), (0x0u));
  /* 12dcec0a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 12dcec0f push 0x12ddb21c */
  push32((uint32_t)(0x12ddb21cu));
  /* 12dcec14 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcec16 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcec18 call 0x12dc38f0 */
  push32(0x12dcec1du); f_12dc38f0();
  /* 12dcec1d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcec20 mov ecx, dword ptr [0x12dded88] */
  ECX = (r32((uint32_t)(0x12dded88)));
  /* 12dcec26 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12dcec28 mov edx, dword ptr [0x12dded88] */
  EDX = (r32((uint32_t)(0x12dded88)));
  /* 12dcec2e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcec31 jne 0x12dcec3b */
  if (!C.zf) goto L_12dcec3b;
  /* 12dcec33 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dcec36 jmp 0x12dcece2 */
  goto L_12dcece2;
L_12dcec3b:;
  /* 12dcec3b push 0x12ddb1ec */
  push32((uint32_t)(0x12ddb1ecu));
  /* 12dcec40 mov eax, dword ptr [0x12dded88] */
  EAX = (r32((uint32_t)(0x12dded88)));
  /* 12dcec45 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dcec47 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcec48 call 0x12dc68a0 */
  push32(0x12dcec4du); f_12dc68a0();
  /* 12dcec4d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcec50 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 12dcec55 push 0x12ddb21c */
  push32((uint32_t)(0x12ddb21cu));
  /* 12dcec5a push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcec5c push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcec5e call 0x12dc38f0 */
  push32(0x12dcec63u); f_12dc38f0();
  /* 12dcec63 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcec66 mov edx, dword ptr [0x12dded88] */
  EDX = (r32((uint32_t)(0x12dded88)));
  /* 12dcec6c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12dcec6f mov eax, dword ptr [0x12dded88] */
  EAX = (r32((uint32_t)(0x12dded88)));
  /* 12dcec74 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcec78 jne 0x12dcec7f */
  if (!C.zf) goto L_12dcec7f;
  /* 12dcec7a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dcec7d jmp 0x12dcece2 */
  goto L_12dcece2;
L_12dcec7f:;
  /* 12dcec7f mov ecx, dword ptr [0x12dded88] */
  ECX = (r32((uint32_t)(0x12dded88)));
  /* 12dcec85 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12dcec88 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12dcec8b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 12dcec90 push 0x12ddb21c */
  push32((uint32_t)(0x12ddb21cu));
  /* 12dcec95 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcec97 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcec99 call 0x12dc38f0 */
  push32(0x12dcec9eu); f_12dc38f0();
  /* 12dcec9e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dceca1 mov ecx, dword ptr [0x12dded88] */
  ECX = (r32((uint32_t)(0x12dded88)));
  /* 12dceca7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12dcecaa mov edx, dword ptr [0x12dded88] */
  EDX = (r32((uint32_t)(0x12dded88)));
  /* 12dcecb0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcecb4 jne 0x12dcecbb */
  if (!C.zf) goto L_12dcecbb;
  /* 12dcecb6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dcecb9 jmp 0x12dcece2 */
  goto L_12dcece2;
L_12dcecbb:;
  /* 12dcecbb mov eax, dword ptr [0x12dded88] */
  EAX = (r32((uint32_t)(0x12dded88)));
  /* 12dcecc0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12dcecc3 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12dcecc6 mov edx, dword ptr [0x12dded88] */
  EDX = (r32((uint32_t)(0x12dded88)));
  /* 12dceccc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12dcecce mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12dcecd0 mov byte ptr [0x12dddea8], cl */
  w8((uint32_t)(0x12dddea8), (CL));
  /* 12dcecd6 mov dword ptr [0x12dddeac], 1 */
  w32((uint32_t)(0x12dddeac), (0x1u));
  /* 12dcece0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12dcece2:;
  /* 12dcece2 mov esp, ebp */
  ESP = (EBP);
  /* 12dcece4 pop ebp */
  EBP = (pop32());
  /* 12dcece5 ret  */
  ESPCHK(0x12dcea40u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x12dcecf0 (125 bytes, 49 insns) */
void f_12dcecf0(void) {
  FTRACE(0x12dcecf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcecf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcecf1 mov ebp, esp */
  EBP = (ESP);
  /* 12dcecf3 push ecx */
  push32((uint32_t)(ECX));
L_12dcecf4:;
  /* 12dcecf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcecf7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12dcecfa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dcecfc je 0x12dced69 */
  if (C.zf) goto L_12dced69;
  /* 12dcecfe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dced01 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12dced04 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dced07 jl 0x12dced2d */
  if ((C.sf!=C.of)) goto L_12dced2d;
  /* 12dced09 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dced0c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12dced0f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dced12 jg 0x12dced2d */
  if ((!C.zf&&C.sf==C.of)) goto L_12dced2d;
  /* 12dced14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dced17 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12dced1a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dced1d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dced20 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12dced22 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dced25 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dced28 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12dced2b jmp 0x12dced67 */
  goto L_12dced67;
L_12dced2d:;
  /* 12dced2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dced30 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12dced33 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dced36 jne 0x12dced5e */
  if (!C.zf) goto L_12dced5e;
  /* 12dced38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dced3b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12dced3e:;
  /* 12dced3e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dced41 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dced44 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12dced47 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12dced49 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dced4c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dced4f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12dced52 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dced55 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12dced58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dced5a jne 0x12dced3e */
  if (!C.zf) goto L_12dced3e;
  /* 12dced5c jmp 0x12dced67 */
  goto L_12dced67;
L_12dced5e:;
  /* 12dced5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dced61 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dced64 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12dced67:;
  /* 12dced67 jmp 0x12dcecf4 */
  goto L_12dcecf4;
L_12dced69:;
  /* 12dced69 mov esp, ebp */
  ESP = (EBP);
  /* 12dced6b pop ebp */
  EBP = (pop32());
  /* 12dced6c ret  */
  ESPCHK(0x12dcecf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed70 @ 0x12dced70 (304 bytes, 85 insns) */
void f_12dced70(void) {
  FTRACE(0x12dced70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dced70 push ebp */
  push32((uint32_t)(EBP));
  /* 12dced71 mov ebp, esp */
  EBP = (ESP);
  /* 12dced73 push ecx */
  push32((uint32_t)(ECX));
  /* 12dced74 cmp dword ptr [0x12ddf734], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf734))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dced7b je 0x12dcee3c */
  if (C.zf) goto L_12dcee3c;
  /* 12dced81 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 12dced83 push 0x12ddb228 */
  push32((uint32_t)(0x12ddb228u));
  /* 12dced88 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dced8a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12dced8c push 1 */
  push32((uint32_t)(0x1u));
  /* 12dced8e call 0x12dc3d00 */
  push32(0x12dced93u); f_12dc3d00();
  /* 12dced93 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dced96 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dced99 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dced9d jne 0x12dceda9 */
  if (!C.zf) goto L_12dceda9;
  /* 12dced9f mov eax, 1 */
  EAX = (0x1u);
  /* 12dceda4 jmp 0x12dcee9c */
  goto L_12dcee9c;
L_12dceda9:;
  /* 12dceda9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcedac push eax */
  push32((uint32_t)(EAX));
  /* 12dcedad call 0x12dceea0 */
  push32(0x12dcedb2u); f_12dceea0();
  /* 12dcedb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcedb5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcedb7 je 0x12dceddd */
  if (C.zf) goto L_12dceddd;
  /* 12dcedb9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcedbc push ecx */
  push32((uint32_t)(ECX));
  /* 12dcedbd call 0x12dcf130 */
  push32(0x12dcedc2u); f_12dcf130();
  /* 12dcedc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcedc5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcedc7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcedca push edx */
  push32((uint32_t)(EDX));
  /* 12dcedcb call 0x12dc4380 */
  push32(0x12dcedd0u); f_12dc4380();
  /* 12dcedd0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcedd3 mov eax, 1 */
  EAX = (0x1u);
  /* 12dcedd8 jmp 0x12dcee9c */
  goto L_12dcee9c;
L_12dceddd:;
  /* 12dceddd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcede0 mov ecx, dword ptr [0x12dded88] */
  ECX = (r32((uint32_t)(0x12dded88)));
  /* 12dcede6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dcede8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12dcedea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dceded mov ecx, dword ptr [0x12dded88] */
  ECX = (r32((uint32_t)(0x12dded88)));
  /* 12dcedf3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12dcedf6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12dcedf9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcedfc mov ecx, dword ptr [0x12dded88] */
  ECX = (r32((uint32_t)(0x12dded88)));
  /* 12dcee02 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12dcee05 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12dcee08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcee0b mov dword ptr [0x12dded88], eax */
  w32((uint32_t)(0x12dded88), (EAX));
  /* 12dcee10 mov ecx, dword ptr [0x12ddf76c] */
  ECX = (r32((uint32_t)(0x12ddf76c)));
  /* 12dcee16 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcee17 call 0x12dcf130 */
  push32(0x12dcee1cu); f_12dcf130();
  /* 12dcee1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcee1f push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcee21 mov edx, dword ptr [0x12ddf76c] */
  EDX = (r32((uint32_t)(0x12ddf76c)));
  /* 12dcee27 push edx */
  push32((uint32_t)(EDX));
  /* 12dcee28 call 0x12dc4380 */
  push32(0x12dcee2du); f_12dc4380();
  /* 12dcee2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcee30 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcee33 mov dword ptr [0x12ddf76c], eax */
  w32((uint32_t)(0x12ddf76c), (EAX));
  /* 12dcee38 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dcee3a jmp 0x12dcee9c */
  goto L_12dcee9c;
L_12dcee3c:;
  /* 12dcee3c mov ecx, dword ptr [0x12dded88] */
  ECX = (r32((uint32_t)(0x12dded88)));
  /* 12dcee42 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dcee44 mov dword ptr [0x12dded58], edx */
  w32((uint32_t)(0x12dded58), (EDX));
  /* 12dcee4a mov eax, dword ptr [0x12dded88] */
  EAX = (r32((uint32_t)(0x12dded88)));
  /* 12dcee4f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12dcee52 mov dword ptr [0x12dded5c], ecx */
  w32((uint32_t)(0x12dded5c), (ECX));
  /* 12dcee58 mov edx, dword ptr [0x12dded88] */
  EDX = (r32((uint32_t)(0x12dded88)));
  /* 12dcee5e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12dcee61 mov dword ptr [0x12dded60], eax */
  w32((uint32_t)(0x12dded60), (EAX));
  /* 12dcee66 mov dword ptr [0x12dded88], 0x12dded58 */
  w32((uint32_t)(0x12dded88), (0x12dded58u));
  /* 12dcee70 mov ecx, dword ptr [0x12ddf76c] */
  ECX = (r32((uint32_t)(0x12ddf76c)));
  /* 12dcee76 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcee77 call 0x12dcf130 */
  push32(0x12dcee7cu); f_12dcf130();
  /* 12dcee7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcee7f push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcee81 mov edx, dword ptr [0x12ddf76c] */
  EDX = (r32((uint32_t)(0x12ddf76c)));
  /* 12dcee87 push edx */
  push32((uint32_t)(EDX));
  /* 12dcee88 call 0x12dc4380 */
  push32(0x12dcee8du); f_12dc4380();
  /* 12dcee8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcee90 mov dword ptr [0x12ddf76c], 0 */
  w32((uint32_t)(0x12ddf76c), (0x0u));
  /* 12dcee9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12dcee9c:;
  /* 12dcee9c mov esp, ebp */
  ESP = (EBP);
  /* 12dcee9e pop ebp */
  EBP = (pop32());
  /* 12dcee9f ret  */
  ESPCHK(0x12dced70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eea0 @ 0x12dceea0 (525 bytes, 200 insns) */
void f_12dceea0(void) {
  FTRACE(0x12dceea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dceea0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dceea1 mov ebp, esp */
  EBP = (ESP);
  /* 12dceea3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dceea6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12dceead xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dceeaf mov ax, word ptr [0x12ddf78c] */
  AX = (r16((uint32_t)(0x12ddf78c)));
  /* 12dceeb5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dceeb8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dceebc jne 0x12dceec6 */
  if (!C.zf) goto L_12dceec6;
  /* 12dceebe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dceec1 jmp 0x12dcf0a9 */
  goto L_12dcf0a9;
L_12dceec6:;
  /* 12dceec6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dceec9 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dceecc push ecx */
  push32((uint32_t)(ECX));
  /* 12dceecd push 0x15 */
  push32((uint32_t)(0x15u));
  /* 12dceecf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dceed2 push edx */
  push32((uint32_t)(EDX));
  /* 12dceed3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dceed5 call 0x12dd1ab0 */
  push32(0x12dceedau); f_12dd1ab0();
  /* 12dceeda add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dceedd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dceee0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dceee2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dceee5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dceee8 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dceeeb push edx */
  push32((uint32_t)(EDX));
  /* 12dceeec push 0x14 */
  push32((uint32_t)(0x14u));
  /* 12dceeee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dceef1 push eax */
  push32((uint32_t)(EAX));
  /* 12dceef2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dceef4 call 0x12dd1ab0 */
  push32(0x12dceef9u); f_12dd1ab0();
  /* 12dceef9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dceefc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dceeff or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dcef01 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dcef04 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcef07 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcef0a push edx */
  push32((uint32_t)(EDX));
  /* 12dcef0b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12dcef0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcef10 push eax */
  push32((uint32_t)(EAX));
  /* 12dcef11 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dcef13 call 0x12dd1ab0 */
  push32(0x12dcef18u); f_12dd1ab0();
  /* 12dcef18 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcef1b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcef1e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dcef20 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dcef23 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcef26 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcef29 push edx */
  push32((uint32_t)(EDX));
  /* 12dcef2a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 12dcef2c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcef2f push eax */
  push32((uint32_t)(EAX));
  /* 12dcef30 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dcef32 call 0x12dd1ab0 */
  push32(0x12dcef37u); f_12dd1ab0();
  /* 12dcef37 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcef3a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcef3d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dcef3f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dcef42 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcef45 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcef48 push edx */
  push32((uint32_t)(EDX));
  /* 12dcef49 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12dcef4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcef4e push eax */
  push32((uint32_t)(EAX));
  /* 12dcef4f push 1 */
  push32((uint32_t)(0x1u));
  /* 12dcef51 call 0x12dd1ab0 */
  push32(0x12dcef56u); f_12dd1ab0();
  /* 12dcef56 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcef59 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcef5c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dcef5e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dcef61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcef64 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12dcef67 push eax */
  push32((uint32_t)(EAX));
  /* 12dcef68 call 0x12dcf0b0 */
  push32(0x12dcef6du); f_12dcf0b0();
  /* 12dcef6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcef70 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcef73 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcef76 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcef77 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 12dcef79 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcef7c push edx */
  push32((uint32_t)(EDX));
  /* 12dcef7d push 1 */
  push32((uint32_t)(0x1u));
  /* 12dcef7f call 0x12dd1ab0 */
  push32(0x12dcef84u); f_12dd1ab0();
  /* 12dcef84 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcef87 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcef8a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dcef8c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dcef8f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcef92 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcef95 push edx */
  push32((uint32_t)(EDX));
  /* 12dcef96 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 12dcef98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcef9b push eax */
  push32((uint32_t)(EAX));
  /* 12dcef9c push 1 */
  push32((uint32_t)(0x1u));
  /* 12dcef9e call 0x12dd1ab0 */
  push32(0x12dcefa3u); f_12dd1ab0();
  /* 12dcefa3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcefa6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcefa9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dcefab mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dcefae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcefb1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcefb4 push edx */
  push32((uint32_t)(EDX));
  /* 12dcefb5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12dcefb7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcefba push eax */
  push32((uint32_t)(EAX));
  /* 12dcefbb push 0 */
  push32((uint32_t)(0x0u));
  /* 12dcefbd call 0x12dd1ab0 */
  push32(0x12dcefc2u); f_12dd1ab0();
  /* 12dcefc2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcefc5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcefc8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dcefca mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dcefcd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcefd0 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcefd3 push edx */
  push32((uint32_t)(EDX));
  /* 12dcefd4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12dcefd6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcefd9 push eax */
  push32((uint32_t)(EAX));
  /* 12dcefda push 0 */
  push32((uint32_t)(0x0u));
  /* 12dcefdc call 0x12dd1ab0 */
  push32(0x12dcefe1u); f_12dd1ab0();
  /* 12dcefe1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcefe4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcefe7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dcefe9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dcefec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcefef add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dceff2 push edx */
  push32((uint32_t)(EDX));
  /* 12dceff3 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 12dceff5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dceff8 push eax */
  push32((uint32_t)(EAX));
  /* 12dceff9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dceffb call 0x12dd1ab0 */
  push32(0x12dcf000u); f_12dd1ab0();
  /* 12dcf000 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf003 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcf006 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dcf008 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dcf00b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcf00e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf011 push edx */
  push32((uint32_t)(EDX));
  /* 12dcf012 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 12dcf014 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcf017 push eax */
  push32((uint32_t)(EAX));
  /* 12dcf018 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dcf01a call 0x12dd1ab0 */
  push32(0x12dcf01fu); f_12dd1ab0();
  /* 12dcf01f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf022 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcf025 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dcf027 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dcf02a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcf02d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf030 push edx */
  push32((uint32_t)(EDX));
  /* 12dcf031 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 12dcf033 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcf036 push eax */
  push32((uint32_t)(EAX));
  /* 12dcf037 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dcf039 call 0x12dd1ab0 */
  push32(0x12dcf03eu); f_12dd1ab0();
  /* 12dcf03e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf041 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcf044 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dcf046 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dcf049 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcf04c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf04f push edx */
  push32((uint32_t)(EDX));
  /* 12dcf050 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 12dcf052 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcf055 push eax */
  push32((uint32_t)(EAX));
  /* 12dcf056 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dcf058 call 0x12dd1ab0 */
  push32(0x12dcf05du); f_12dd1ab0();
  /* 12dcf05d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf060 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcf063 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dcf065 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dcf068 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcf06b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf06e push edx */
  push32((uint32_t)(EDX));
  /* 12dcf06f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 12dcf071 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcf074 push eax */
  push32((uint32_t)(EAX));
  /* 12dcf075 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dcf077 call 0x12dd1ab0 */
  push32(0x12dcf07cu); f_12dd1ab0();
  /* 12dcf07c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf07f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcf082 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dcf084 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dcf087 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcf08a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf08d push edx */
  push32((uint32_t)(EDX));
  /* 12dcf08e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 12dcf090 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcf093 push eax */
  push32((uint32_t)(EAX));
  /* 12dcf094 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dcf096 call 0x12dd1ab0 */
  push32(0x12dcf09bu); f_12dd1ab0();
  /* 12dcf09b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf09e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcf0a1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dcf0a3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dcf0a6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12dcf0a9:;
  /* 12dcf0a9 mov esp, ebp */
  ESP = (EBP);
  /* 12dcf0ab pop ebp */
  EBP = (pop32());
  /* 12dcf0ac ret  */
  ESPCHK(0x12dceea0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x12dcf0b0 (125 bytes, 49 insns) */
void f_12dcf0b0(void) {
  FTRACE(0x12dcf0b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcf0b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcf0b1 mov ebp, esp */
  EBP = (ESP);
  /* 12dcf0b3 push ecx */
  push32((uint32_t)(ECX));
L_12dcf0b4:;
  /* 12dcf0b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcf0b7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12dcf0ba test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dcf0bc je 0x12dcf129 */
  if (C.zf) goto L_12dcf129;
  /* 12dcf0be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcf0c1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12dcf0c4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcf0c7 jl 0x12dcf0ed */
  if ((C.sf!=C.of)) goto L_12dcf0ed;
  /* 12dcf0c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcf0cc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12dcf0cf cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcf0d2 jg 0x12dcf0ed */
  if ((!C.zf&&C.sf==C.of)) goto L_12dcf0ed;
  /* 12dcf0d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcf0d7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12dcf0da sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcf0dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcf0e0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12dcf0e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcf0e5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf0e8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12dcf0eb jmp 0x12dcf127 */
  goto L_12dcf127;
L_12dcf0ed:;
  /* 12dcf0ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcf0f0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12dcf0f3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcf0f6 jne 0x12dcf11e */
  if (!C.zf) goto L_12dcf11e;
  /* 12dcf0f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcf0fb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12dcf0fe:;
  /* 12dcf0fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcf101 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcf104 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12dcf107 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12dcf109 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcf10c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf10f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12dcf112 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcf115 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12dcf118 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcf11a jne 0x12dcf0fe */
  if (!C.zf) goto L_12dcf0fe;
  /* 12dcf11c jmp 0x12dcf127 */
  goto L_12dcf127;
L_12dcf11e:;
  /* 12dcf11e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcf121 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf124 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12dcf127:;
  /* 12dcf127 jmp 0x12dcf0b4 */
  goto L_12dcf0b4;
L_12dcf129:;
  /* 12dcf129 mov esp, ebp */
  ESP = (EBP);
  /* 12dcf12b pop ebp */
  EBP = (pop32());
  /* 12dcf12c ret  */
  ESPCHK(0x12dcf0b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f130 @ 0x12dcf130 (147 bytes, 52 insns) */
void f_12dcf130(void) {
  FTRACE(0x12dcf130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcf130 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcf131 mov ebp, esp */
  EBP = (ESP);
  /* 12dcf133 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcf137 jne 0x12dcf13e */
  if (!C.zf) goto L_12dcf13e;
  /* 12dcf139 jmp 0x12dcf1c1 */
  goto L_12dcf1c1;
L_12dcf13e:;
  /* 12dcf13e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcf141 cmp dword ptr [eax + 0xc], 0x12ddf7c8 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x12ddf7c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcf148 je 0x12dcf1c1 */
  if (C.zf) goto L_12dcf1c1;
  /* 12dcf14a push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcf14c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcf14f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12dcf152 push edx */
  push32((uint32_t)(EDX));
  /* 12dcf153 call 0x12dc4380 */
  push32(0x12dcf158u); f_12dc4380();
  /* 12dcf158 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf15b push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcf15d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcf160 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12dcf163 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcf164 call 0x12dc4380 */
  push32(0x12dcf169u); f_12dc4380();
  /* 12dcf169 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf16c push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcf16e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcf171 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12dcf174 push eax */
  push32((uint32_t)(EAX));
  /* 12dcf175 call 0x12dc4380 */
  push32(0x12dcf17au); f_12dc4380();
  /* 12dcf17a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf17d push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcf17f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcf182 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12dcf185 push edx */
  push32((uint32_t)(EDX));
  /* 12dcf186 call 0x12dc4380 */
  push32(0x12dcf18bu); f_12dc4380();
  /* 12dcf18b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf18e push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcf190 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcf193 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12dcf196 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcf197 call 0x12dc4380 */
  push32(0x12dcf19cu); f_12dc4380();
  /* 12dcf19c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf19f push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcf1a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcf1a4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 12dcf1a7 push eax */
  push32((uint32_t)(EAX));
  /* 12dcf1a8 call 0x12dc4380 */
  push32(0x12dcf1adu); f_12dc4380();
  /* 12dcf1ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf1b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcf1b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcf1b5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 12dcf1b8 push edx */
  push32((uint32_t)(EDX));
  /* 12dcf1b9 call 0x12dc4380 */
  push32(0x12dcf1beu); f_12dc4380();
  /* 12dcf1be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dcf1c1:;
  /* 12dcf1c1 pop ebp */
  EBP = (pop32());
  /* 12dcf1c2 ret  */
  ESPCHK(0x12dcf130u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f1d0 @ 0x12dcf1d0 (928 bytes, 284 insns) */
void f_12dcf1d0(void) {
  FTRACE(0x12dcf1d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcf1d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcf1d1 mov ebp, esp */
  EBP = (ESP);
  /* 12dcf1d3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcf1d6 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 12dcf1dd mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 12dcf1e4 cmp dword ptr [0x12ddf730], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf730))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcf1eb je 0x12dcf521 */
  if (C.zf) goto L_12dcf521;
  /* 12dcf1f1 cmp dword ptr [0x12ddf740], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf740))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcf1f8 jne 0x12dcf220 */
  if (!C.zf) goto L_12dcf220;
  /* 12dcf1fa push 0x12ddf740 */
  push32((uint32_t)(0x12ddf740u));
  /* 12dcf1ff push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 12dcf204 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dcf206 mov ax, word ptr [0x12ddf784] */
  AX = (r16((uint32_t)(0x12ddf784)));
  /* 12dcf20c push eax */
  push32((uint32_t)(EAX));
  /* 12dcf20d push 0 */
  push32((uint32_t)(0x0u));
  /* 12dcf20f call 0x12dd1ab0 */
  push32(0x12dcf214u); f_12dd1ab0();
  /* 12dcf214 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf217 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcf219 je 0x12dcf220 */
  if (C.zf) goto L_12dcf220;
  /* 12dcf21b jmp 0x12dcf4e2 */
  goto L_12dcf4e2;
L_12dcf220:;
  /* 12dcf220 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 12dcf222 push 0x12ddb234 */
  push32((uint32_t)(0x12ddb234u));
  /* 12dcf227 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcf229 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12dcf22e call 0x12dc38f0 */
  push32(0x12dcf233u); f_12dc38f0();
  /* 12dcf233 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf236 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12dcf239 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12dcf23b push 0x12ddb234 */
  push32((uint32_t)(0x12ddb234u));
  /* 12dcf240 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcf242 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12dcf247 call 0x12dc38f0 */
  push32(0x12dcf24cu); f_12dc38f0();
  /* 12dcf24c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf24f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12dcf252 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 12dcf254 push 0x12ddb234 */
  push32((uint32_t)(0x12ddb234u));
  /* 12dcf259 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcf25b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 12dcf260 call 0x12dc38f0 */
  push32(0x12dcf265u); f_12dc38f0();
  /* 12dcf265 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf268 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12dcf26b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 12dcf26d push 0x12ddb234 */
  push32((uint32_t)(0x12ddb234u));
  /* 12dcf272 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcf274 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12dcf279 call 0x12dc38f0 */
  push32(0x12dcf27eu); f_12dc38f0();
  /* 12dcf27e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf281 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12dcf284 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcf288 je 0x12dcf29c */
  if (C.zf) goto L_12dcf29c;
  /* 12dcf28a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcf28e je 0x12dcf29c */
  if (C.zf) goto L_12dcf29c;
  /* 12dcf290 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcf294 je 0x12dcf29c */
  if (C.zf) goto L_12dcf29c;
  /* 12dcf296 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcf29a jne 0x12dcf2a1 */
  if (!C.zf) goto L_12dcf2a1;
L_12dcf29c:;
  /* 12dcf29c jmp 0x12dcf4e2 */
  goto L_12dcf4e2;
L_12dcf2a1:;
  /* 12dcf2a1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dcf2a4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12dcf2a7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12dcf2ae jmp 0x12dcf2b9 */
  goto L_12dcf2b9;
L_12dcf2b0:;
  /* 12dcf2b0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dcf2b3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf2b6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12dcf2b9:;
  /* 12dcf2b9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcf2c0 jge 0x12dcf2d5 */
  if ((C.sf==C.of)) goto L_12dcf2d5;
  /* 12dcf2c2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dcf2c5 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 12dcf2c8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12dcf2ca mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dcf2cd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf2d0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12dcf2d3 jmp 0x12dcf2b0 */
  goto L_12dcf2b0;
L_12dcf2d5:;
  /* 12dcf2d5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 12dcf2d8 push eax */
  push32((uint32_t)(EAX));
  /* 12dcf2d9 mov ecx, dword ptr [0x12ddf740] */
  ECX = (r32((uint32_t)(0x12ddf740)));
  /* 12dcf2df push ecx */
  push32((uint32_t)(ECX));
  /* 12dcf2e0 call dword ptr [0x12de2300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de2300))), 0x12dcf2e6u);
  /* 12dcf2e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcf2e8 jne 0x12dcf2ef */
  if (!C.zf) goto L_12dcf2ef;
  /* 12dcf2ea jmp 0x12dcf4e2 */
  goto L_12dcf4e2;
L_12dcf2ef:;
  /* 12dcf2ef cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcf2f3 jbe 0x12dcf2fa */
  if ((C.cf||C.zf)) goto L_12dcf2fa;
  /* 12dcf2f5 jmp 0x12dcf4e2 */
  goto L_12dcf4e2;
L_12dcf2fa:;
  /* 12dcf2fa mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dcf2fd and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12dcf303 mov dword ptr [0x12dddea4], edx */
  w32((uint32_t)(0x12dddea4), (EDX));
  /* 12dcf309 cmp dword ptr [0x12dddea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12dddea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcf310 jle 0x12dcf369 */
  if ((C.zf||C.sf!=C.of)) goto L_12dcf369;
  /* 12dcf312 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 12dcf315 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12dcf318 jmp 0x12dcf323 */
  goto L_12dcf323;
L_12dcf31a:;
  /* 12dcf31a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dcf31d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf320 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_12dcf323:;
  /* 12dcf323 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dcf326 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dcf328 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12dcf32a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcf32c je 0x12dcf369 */
  if (C.zf) goto L_12dcf369;
  /* 12dcf32e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dcf331 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dcf333 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12dcf336 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dcf338 je 0x12dcf369 */
  if (C.zf) goto L_12dcf369;
  /* 12dcf33a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dcf33d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dcf33f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12dcf341 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12dcf344 jmp 0x12dcf34f */
  goto L_12dcf34f;
L_12dcf346:;
  /* 12dcf346 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dcf349 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf34c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12dcf34f:;
  /* 12dcf34f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dcf352 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dcf354 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12dcf357 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcf35a jg 0x12dcf367 */
  if ((!C.zf&&C.sf==C.of)) goto L_12dcf367;
  /* 12dcf35c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dcf35f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf362 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12dcf365 jmp 0x12dcf346 */
  goto L_12dcf346;
L_12dcf367:;
  /* 12dcf367 jmp 0x12dcf31a */
  goto L_12dcf31a;
L_12dcf369:;
  /* 12dcf369 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dcf36b push 0 */
  push32((uint32_t)(0x0u));
  /* 12dcf36d push 0 */
  push32((uint32_t)(0x0u));
  /* 12dcf36f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dcf372 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf375 push eax */
  push32((uint32_t)(EAX));
  /* 12dcf376 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12dcf37b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dcf37e push ecx */
  push32((uint32_t)(ECX));
  /* 12dcf37f push 1 */
  push32((uint32_t)(0x1u));
  /* 12dcf381 call 0x12dcbb20 */
  push32(0x12dcf386u); f_12dcbb20();
  /* 12dcf386 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf389 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcf38b jne 0x12dcf392 */
  if (!C.zf) goto L_12dcf392;
  /* 12dcf38d jmp 0x12dcf4e2 */
  goto L_12dcf4e2;
L_12dcf392:;
  /* 12dcf392 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dcf395 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 12dcf39a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dcf39d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12dcf3a0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12dcf3a7 jmp 0x12dcf3b2 */
  goto L_12dcf3b2;
L_12dcf3a9:;
  /* 12dcf3a9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dcf3ac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf3af mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12dcf3b2:;
  /* 12dcf3b2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcf3b9 jge 0x12dcf3d0 */
  if ((C.sf==C.of)) goto L_12dcf3d0;
  /* 12dcf3bb mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dcf3be mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 12dcf3c2 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 12dcf3c5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dcf3c8 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf3cb mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12dcf3ce jmp 0x12dcf3a9 */
  goto L_12dcf3a9;
L_12dcf3d0:;
  /* 12dcf3d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dcf3d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dcf3d4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dcf3d7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf3da push edx */
  push32((uint32_t)(EDX));
  /* 12dcf3db push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12dcf3e0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dcf3e3 push eax */
  push32((uint32_t)(EAX));
  /* 12dcf3e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dcf3e6 call 0x12dd1d50 */
  push32(0x12dcf3ebu); f_12dd1d50();
  /* 12dcf3eb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf3ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcf3f0 jne 0x12dcf3f7 */
  if (!C.zf) goto L_12dcf3f7;
  /* 12dcf3f2 jmp 0x12dcf4e2 */
  goto L_12dcf4e2;
L_12dcf3f7:;
  /* 12dcf3f7 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dcf3fa mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 12dcf3ff cmp dword ptr [0x12dddea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12dddea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcf406 jle 0x12dcf463 */
  if ((C.zf||C.sf!=C.of)) goto L_12dcf463;
  /* 12dcf408 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 12dcf40b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12dcf40e jmp 0x12dcf419 */
  goto L_12dcf419;
L_12dcf410:;
  /* 12dcf410 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dcf413 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf416 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12dcf419:;
  /* 12dcf419 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dcf41c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dcf41e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12dcf420 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dcf422 je 0x12dcf463 */
  if (C.zf) goto L_12dcf463;
  /* 12dcf424 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dcf427 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dcf429 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12dcf42c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dcf42e je 0x12dcf463 */
  if (C.zf) goto L_12dcf463;
  /* 12dcf430 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dcf433 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dcf435 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12dcf437 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12dcf43a jmp 0x12dcf445 */
  goto L_12dcf445;
L_12dcf43c:;
  /* 12dcf43c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dcf43f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf442 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12dcf445:;
  /* 12dcf445 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dcf448 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dcf44a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12dcf44d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcf450 jg 0x12dcf461 */
  if ((!C.zf&&C.sf==C.of)) goto L_12dcf461;
  /* 12dcf452 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dcf455 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dcf458 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 12dcf45f jmp 0x12dcf43c */
  goto L_12dcf43c;
L_12dcf461:;
  /* 12dcf461 jmp 0x12dcf410 */
  goto L_12dcf410;
L_12dcf463:;
  /* 12dcf463 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dcf466 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf469 mov dword ptr [0x12dddc98], eax */
  w32((uint32_t)(0x12dddc98), (EAX));
  /* 12dcf46e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dcf471 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf474 mov dword ptr [0x12dddc9c], ecx */
  w32((uint32_t)(0x12dddc9c), (ECX));
  /* 12dcf47a cmp dword ptr [0x12ddf770], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf770))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcf481 je 0x12dcf494 */
  if (C.zf) goto L_12dcf494;
  /* 12dcf483 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcf485 mov edx, dword ptr [0x12ddf770] */
  EDX = (r32((uint32_t)(0x12ddf770)));
  /* 12dcf48b push edx */
  push32((uint32_t)(EDX));
  /* 12dcf48c call 0x12dc4380 */
  push32(0x12dcf491u); f_12dc4380();
  /* 12dcf491 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dcf494:;
  /* 12dcf494 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dcf497 mov dword ptr [0x12ddf770], eax */
  w32((uint32_t)(0x12ddf770), (EAX));
  /* 12dcf49c cmp dword ptr [0x12ddf774], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf774))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcf4a3 je 0x12dcf4b6 */
  if (C.zf) goto L_12dcf4b6;
  /* 12dcf4a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcf4a7 mov ecx, dword ptr [0x12ddf774] */
  ECX = (r32((uint32_t)(0x12ddf774)));
  /* 12dcf4ad push ecx */
  push32((uint32_t)(ECX));
  /* 12dcf4ae call 0x12dc4380 */
  push32(0x12dcf4b3u); f_12dc4380();
  /* 12dcf4b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dcf4b6:;
  /* 12dcf4b6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dcf4b9 mov dword ptr [0x12ddf774], edx */
  w32((uint32_t)(0x12ddf774), (EDX));
  /* 12dcf4bf push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcf4c1 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dcf4c4 push eax */
  push32((uint32_t)(EAX));
  /* 12dcf4c5 call 0x12dc4380 */
  push32(0x12dcf4cau); f_12dc4380();
  /* 12dcf4ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf4cd push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcf4cf mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dcf4d2 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcf4d3 call 0x12dc4380 */
  push32(0x12dcf4d8u); f_12dc4380();
  /* 12dcf4d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf4db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dcf4dd jmp 0x12dcf56c */
  goto L_12dcf56c;
L_12dcf4e2:;
  /* 12dcf4e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcf4e4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dcf4e7 push edx */
  push32((uint32_t)(EDX));
  /* 12dcf4e8 call 0x12dc4380 */
  push32(0x12dcf4edu); f_12dc4380();
  /* 12dcf4ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf4f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcf4f2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dcf4f5 push eax */
  push32((uint32_t)(EAX));
  /* 12dcf4f6 call 0x12dc4380 */
  push32(0x12dcf4fbu); f_12dc4380();
  /* 12dcf4fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf4fe push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcf500 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dcf503 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcf504 call 0x12dc4380 */
  push32(0x12dcf509u); f_12dc4380();
  /* 12dcf509 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf50c push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcf50e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dcf511 push edx */
  push32((uint32_t)(EDX));
  /* 12dcf512 call 0x12dc4380 */
  push32(0x12dcf517u); f_12dc4380();
  /* 12dcf517 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf51a mov eax, 1 */
  EAX = (0x1u);
  /* 12dcf51f jmp 0x12dcf56c */
  goto L_12dcf56c;
L_12dcf521:;
  /* 12dcf521 mov dword ptr [0x12dddc98], 0x12dddca2 */
  w32((uint32_t)(0x12dddc98), (0x12dddca2u));
  /* 12dcf52b mov dword ptr [0x12dddc9c], 0x12dddca2 */
  w32((uint32_t)(0x12dddc9c), (0x12dddca2u));
  /* 12dcf535 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcf537 mov eax, dword ptr [0x12ddf770] */
  EAX = (r32((uint32_t)(0x12ddf770)));
  /* 12dcf53c push eax */
  push32((uint32_t)(EAX));
  /* 12dcf53d call 0x12dc4380 */
  push32(0x12dcf542u); f_12dc4380();
  /* 12dcf542 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf545 push 2 */
  push32((uint32_t)(0x2u));
  /* 12dcf547 mov ecx, dword ptr [0x12ddf774] */
  ECX = (r32((uint32_t)(0x12ddf774)));
  /* 12dcf54d push ecx */
  push32((uint32_t)(ECX));
  /* 12dcf54e call 0x12dc4380 */
  push32(0x12dcf553u); f_12dc4380();
  /* 12dcf553 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf556 mov dword ptr [0x12ddf770], 0 */
  w32((uint32_t)(0x12ddf770), (0x0u));
  /* 12dcf560 mov dword ptr [0x12ddf774], 0 */
  w32((uint32_t)(0x12ddf774), (0x0u));
  /* 12dcf56a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12dcf56c:;
  /* 12dcf56c mov esp, ebp */
  ESP = (EBP);
  /* 12dcf56e pop ebp */
  EBP = (pop32());
  /* 12dcf56f ret  */
  ESPCHK(0x12dcf1d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f570 @ 0x12dcf570 (7 bytes, 5 insns) */
void f_12dcf570(void) {
  FTRACE(0x12dcf570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcf570 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcf571 mov ebp, esp */
  EBP = (ESP);
  /* 12dcf573 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dcf575 pop ebp */
  EBP = (pop32());
  /* 12dcf576 ret  */
  ESPCHK(0x12dcf570u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x12dcf580 (129 bytes, 56 insns) */
void f_12dcf580(void) {
  FTRACE(0x12dcf580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcf580 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 12dcf584 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 12dcf588 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12dcf58e jne 0x12dcf5cc */
  if (!C.zf) goto L_12dcf5cc;
L_12dcf590:;
  /* 12dcf590 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12dcf592 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12dcf594 jne 0x12dcf5c4 */
  if (!C.zf) goto L_12dcf5c4;
  /* 12dcf596 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12dcf598 je 0x12dcf5c0 */
  if (C.zf) goto L_12dcf5c0;
  /* 12dcf59a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12dcf59d jne 0x12dcf5c4 */
  if (!C.zf) goto L_12dcf5c4;
  /* 12dcf59f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12dcf5a1 je 0x12dcf5c0 */
  if (C.zf) goto L_12dcf5c0;
  /* 12dcf5a3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12dcf5a6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12dcf5a9 jne 0x12dcf5c4 */
  if (!C.zf) goto L_12dcf5c4;
  /* 12dcf5ab or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12dcf5ad je 0x12dcf5c0 */
  if (C.zf) goto L_12dcf5c0;
  /* 12dcf5af cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12dcf5b2 jne 0x12dcf5c4 */
  if (!C.zf) goto L_12dcf5c4;
  /* 12dcf5b4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf5b7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf5ba or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12dcf5bc jne 0x12dcf590 */
  if (!C.zf) goto L_12dcf590;
  /* 12dcf5be mov edi, edi */
  EDI = (EDI);
L_12dcf5c0:;
  /* 12dcf5c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dcf5c2 ret  */
  ESPCHK(0x12dcf580u, _esp0);
  ESP += 4; return;
  /* 12dcf5c3 nop  */
  /* nop */
L_12dcf5c4:;
  /* 12dcf5c4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcf5c6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12dcf5c8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12dcf5c9 ret  */
  ESPCHK(0x12dcf580u, _esp0);
  ESP += 4; return;
  /* 12dcf5ca mov edi, edi */
  EDI = (EDI);
L_12dcf5cc:;
  /* 12dcf5cc test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 12dcf5d2 je 0x12dcf5e8 */
  if (C.zf) goto L_12dcf5e8;
  /* 12dcf5d4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12dcf5d6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12dcf5d7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12dcf5d9 jne 0x12dcf5c4 */
  if (!C.zf) goto L_12dcf5c4;
  /* 12dcf5db inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12dcf5dc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12dcf5de je 0x12dcf5c0 */
  if (C.zf) goto L_12dcf5c0;
  /* 12dcf5e0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 12dcf5e6 je 0x12dcf590 */
  if (C.zf) goto L_12dcf590;
L_12dcf5e8:;
  /* 12dcf5e8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 12dcf5eb add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf5ee cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12dcf5f0 jne 0x12dcf5c4 */
  if (!C.zf) goto L_12dcf5c4;
  /* 12dcf5f2 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12dcf5f4 je 0x12dcf5c0 */
  if (C.zf) goto L_12dcf5c0;
  /* 12dcf5f6 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12dcf5f9 jne 0x12dcf5c4 */
  if (!C.zf) goto L_12dcf5c4;
  /* 12dcf5fb or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12dcf5fd je 0x12dcf5c0 */
  if (C.zf) goto L_12dcf5c0;
  /* 12dcf5ff add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf602 jmp 0x12dcf590 */
  goto L_12dcf590;
}

/* FUN_1000f610 @ 0x12dcf610 (62 bytes, 35 insns) */
void f_12dcf610(void) {
  FTRACE(0x12dcf610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcf610 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcf611 mov ebp, esp */
  EBP = (ESP);
  /* 12dcf613 push esi */
  push32((uint32_t)(ESI));
  /* 12dcf614 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dcf616 push eax */
  push32((uint32_t)(EAX));
  /* 12dcf617 push eax */
  push32((uint32_t)(EAX));
  /* 12dcf618 push eax */
  push32((uint32_t)(EAX));
  /* 12dcf619 push eax */
  push32((uint32_t)(EAX));
  /* 12dcf61a push eax */
  push32((uint32_t)(EAX));
  /* 12dcf61b push eax */
  push32((uint32_t)(EAX));
  /* 12dcf61c push eax */
  push32((uint32_t)(EAX));
  /* 12dcf61d push eax */
  push32((uint32_t)(EAX));
  /* 12dcf61e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcf621 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12dcf624:;
  /* 12dcf624 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12dcf626 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12dcf628 je 0x12dcf631 */
  if (C.zf) goto L_12dcf631;
  /* 12dcf62a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12dcf62b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x12dcf62b");
  /* 12dcf62f jmp 0x12dcf624 */
  goto L_12dcf624;
L_12dcf631:;
  /* 12dcf631 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcf634 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12dcf637 nop  */
  /* nop */
L_12dcf638:;
  /* 12dcf638 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12dcf639 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12dcf63b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12dcf63d je 0x12dcf646 */
  if (C.zf) goto L_12dcf646;
  /* 12dcf63f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12dcf640 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x12dcf640");
  /* 12dcf644 jae 0x12dcf638 */
  if (!C.cf) goto L_12dcf638;
L_12dcf646:;
  /* 12dcf646 mov eax, ecx */
  EAX = (ECX);
  /* 12dcf648 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf64b pop esi */
  ESI = (pop32());
  /* 12dcf64c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12dcf64d ret  */
  ESPCHK(0x12dcf610u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x12dcf650 (56 bytes, 31 insns) */
void f_12dcf650(void) {
  FTRACE(0x12dcf650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcf650 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcf651 mov ebp, esp */
  EBP = (ESP);
  /* 12dcf653 push edi */
  push32((uint32_t)(EDI));
  /* 12dcf654 push esi */
  push32((uint32_t)(ESI));
  /* 12dcf655 push ebx */
  push32((uint32_t)(EBX));
  /* 12dcf656 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dcf659 jecxz 0x12dcf681 */
  x86_unimpl("jecxz @ 0x12dcf659");
  /* 12dcf65b mov ebx, ecx */
  EBX = (ECX);
  /* 12dcf65d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcf660 mov esi, edi */
  ESI = (EDI);
  /* 12dcf662 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dcf664 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 12dcf666 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12dcf668 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf66a mov edi, esi */
  EDI = (ESI);
  /* 12dcf66c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcf66f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 12dcf671 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 12dcf674 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dcf676 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12dcf679 ja 0x12dcf67f */
  if ((!C.cf&&!C.zf)) goto L_12dcf67f;
  /* 12dcf67b je 0x12dcf681 */
  if (C.zf) goto L_12dcf681;
  /* 12dcf67d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12dcf67e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_12dcf67f:;
  /* 12dcf67f not ecx */
  ECX = (~(ECX));
L_12dcf681:;
  /* 12dcf681 mov eax, ecx */
  EAX = (ECX);
  /* 12dcf683 pop ebx */
  EBX = (pop32());
  /* 12dcf684 pop esi */
  ESI = (pop32());
  /* 12dcf685 pop edi */
  EDI = (pop32());
  /* 12dcf686 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12dcf687 ret  */
  ESPCHK(0x12dcf650u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f690 @ 0x12dcf690 (58 bytes, 32 insns) */
void f_12dcf690(void) {
  FTRACE(0x12dcf690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcf690 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcf691 mov ebp, esp */
  EBP = (ESP);
  /* 12dcf693 push esi */
  push32((uint32_t)(ESI));
  /* 12dcf694 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dcf696 push eax */
  push32((uint32_t)(EAX));
  /* 12dcf697 push eax */
  push32((uint32_t)(EAX));
  /* 12dcf698 push eax */
  push32((uint32_t)(EAX));
  /* 12dcf699 push eax */
  push32((uint32_t)(EAX));
  /* 12dcf69a push eax */
  push32((uint32_t)(EAX));
  /* 12dcf69b push eax */
  push32((uint32_t)(EAX));
  /* 12dcf69c push eax */
  push32((uint32_t)(EAX));
  /* 12dcf69d push eax */
  push32((uint32_t)(EAX));
  /* 12dcf69e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcf6a1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12dcf6a4:;
  /* 12dcf6a4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12dcf6a6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12dcf6a8 je 0x12dcf6b1 */
  if (C.zf) goto L_12dcf6b1;
  /* 12dcf6aa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12dcf6ab bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x12dcf6ab");
  /* 12dcf6af jmp 0x12dcf6a4 */
  goto L_12dcf6a4;
L_12dcf6b1:;
  /* 12dcf6b1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_12dcf6b4:;
  /* 12dcf6b4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12dcf6b6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12dcf6b8 je 0x12dcf6c4 */
  if (C.zf) goto L_12dcf6c4;
  /* 12dcf6ba inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12dcf6bb bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x12dcf6bb");
  /* 12dcf6bf jae 0x12dcf6b4 */
  if (!C.cf) goto L_12dcf6b4;
  /* 12dcf6c1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_12dcf6c4:;
  /* 12dcf6c4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf6c7 pop esi */
  ESI = (pop32());
  /* 12dcf6c8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12dcf6c9 ret  */
  ESPCHK(0x12dcf690u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f6d0 @ 0x12dcf6d0 (512 bytes, 147 insns) */
void f_12dcf6d0(void) {
  FTRACE(0x12dcf6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcf6d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcf6d1 mov ebp, esp */
  EBP = (ESP);
  /* 12dcf6d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcf6d6 cmp dword ptr [0x12ddf7bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf7bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcf6dd jne 0x12dcf702 */
  if (!C.zf) goto L_12dcf702;
  /* 12dcf6df call 0x12dd01a0 */
  push32(0x12dcf6e4u); f_12dd01a0();
  /* 12dcf6e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcf6e6 je 0x12dcf6f2 */
  if (C.zf) goto L_12dcf6f2;
  /* 12dcf6e8 mov eax, dword ptr [0x12de22c4] */
  EAX = (r32((uint32_t)(0x12de22c4)));
  /* 12dcf6ed mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dcf6f0 jmp 0x12dcf6f9 */
  goto L_12dcf6f9;
L_12dcf6f2:;
  /* 12dcf6f2 mov dword ptr [ebp - 8], 0x12dd01f0 */
  w32((uint32_t)(EBP + -0x8), (0x12dd01f0u));
L_12dcf6f9:;
  /* 12dcf6f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dcf6fc mov dword ptr [0x12ddf7bc], ecx */
  w32((uint32_t)(0x12ddf7bc), (ECX));
L_12dcf702:;
  /* 12dcf702 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcf706 jne 0x12dcf712 */
  if (!C.zf) goto L_12dcf712;
  /* 12dcf708 call 0x12dcfff0 */
  push32(0x12dcf70du); f_12dcfff0();
  /* 12dcf70d jmp 0x12dcf7de */
  goto L_12dcf7de;
L_12dcf712:;
  /* 12dcf712 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcf715 mov dword ptr [0x12ddf7ac], edx */
  w32((uint32_t)(0x12ddf7ac), (EDX));
  /* 12dcf71b cmp dword ptr [0x12ddf7ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf7ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcf722 je 0x12dcf744 */
  if (C.zf) goto L_12dcf744;
  /* 12dcf724 mov eax, dword ptr [0x12ddf7ac] */
  EAX = (r32((uint32_t)(0x12ddf7ac)));
  /* 12dcf729 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12dcf72c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dcf72e je 0x12dcf744 */
  if (C.zf) goto L_12dcf744;
  /* 12dcf730 push 0x12ddf7ac */
  push32((uint32_t)(0x12ddf7acu));
  /* 12dcf735 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12dcf737 push 0x12ddea90 */
  push32((uint32_t)(0x12ddea90u));
  /* 12dcf73c call 0x12dcf8d0 */
  push32(0x12dcf741u); f_12dcf8d0();
  /* 12dcf741 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dcf744:;
  /* 12dcf744 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcf747 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf74a mov dword ptr [0x12ddf7b0], edx */
  w32((uint32_t)(0x12ddf7b0), (EDX));
  /* 12dcf750 cmp dword ptr [0x12ddf7b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf7b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcf757 je 0x12dcf779 */
  if (C.zf) goto L_12dcf779;
  /* 12dcf759 mov eax, dword ptr [0x12ddf7b0] */
  EAX = (r32((uint32_t)(0x12ddf7b0)));
  /* 12dcf75e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12dcf761 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dcf763 je 0x12dcf779 */
  if (C.zf) goto L_12dcf779;
  /* 12dcf765 push 0x12ddf7b0 */
  push32((uint32_t)(0x12ddf7b0u));
  /* 12dcf76a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12dcf76c push 0x12dde9d8 */
  push32((uint32_t)(0x12dde9d8u));
  /* 12dcf771 call 0x12dcf8d0 */
  push32(0x12dcf776u); f_12dcf8d0();
  /* 12dcf776 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dcf779:;
  /* 12dcf779 mov dword ptr [0x12ddf7b4], 0 */
  w32((uint32_t)(0x12ddf7b4), (0x0u));
  /* 12dcf783 cmp dword ptr [0x12ddf7ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf7ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcf78a je 0x12dcf7bd */
  if (C.zf) goto L_12dcf7bd;
  /* 12dcf78c mov edx, dword ptr [0x12ddf7ac] */
  EDX = (r32((uint32_t)(0x12ddf7ac)));
  /* 12dcf792 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12dcf795 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcf797 je 0x12dcf7bd */
  if (C.zf) goto L_12dcf7bd;
  /* 12dcf799 cmp dword ptr [0x12ddf7b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf7b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcf7a0 je 0x12dcf7b6 */
  if (C.zf) goto L_12dcf7b6;
  /* 12dcf7a2 mov ecx, dword ptr [0x12ddf7b0] */
  ECX = (r32((uint32_t)(0x12ddf7b0)));
  /* 12dcf7a8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12dcf7ab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dcf7ad je 0x12dcf7b6 */
  if (C.zf) goto L_12dcf7b6;
  /* 12dcf7af call 0x12dcf960 */
  push32(0x12dcf7b4u); f_12dcf960();
  /* 12dcf7b4 jmp 0x12dcf7bb */
  goto L_12dcf7bb;
L_12dcf7b6:;
  /* 12dcf7b6 call 0x12dcfd50 */
  push32(0x12dcf7bbu); f_12dcfd50();
L_12dcf7bb:;
  /* 12dcf7bb jmp 0x12dcf7de */
  goto L_12dcf7de;
L_12dcf7bd:;
  /* 12dcf7bd cmp dword ptr [0x12ddf7b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf7b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcf7c4 je 0x12dcf7d9 */
  if (C.zf) goto L_12dcf7d9;
  /* 12dcf7c6 mov eax, dword ptr [0x12ddf7b0] */
  EAX = (r32((uint32_t)(0x12ddf7b0)));
  /* 12dcf7cb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12dcf7ce test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dcf7d0 je 0x12dcf7d9 */
  if (C.zf) goto L_12dcf7d9;
  /* 12dcf7d2 call 0x12dcfef0 */
  push32(0x12dcf7d7u); f_12dcfef0();
  /* 12dcf7d7 jmp 0x12dcf7de */
  goto L_12dcf7de;
L_12dcf7d9:;
  /* 12dcf7d9 call 0x12dcfff0 */
  push32(0x12dcf7deu); f_12dcfff0();
L_12dcf7de:;
  /* 12dcf7de cmp dword ptr [0x12ddf7b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf7b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcf7e5 jne 0x12dcf7ee */
  if (!C.zf) goto L_12dcf7ee;
  /* 12dcf7e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dcf7e9 jmp 0x12dcf8cc */
  goto L_12dcf8cc;
L_12dcf7ee:;
  /* 12dcf7ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcf7f1 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf7f7 push edx */
  push32((uint32_t)(EDX));
  /* 12dcf7f8 call 0x12dd0020 */
  push32(0x12dcf7fdu); f_12dd0020();
  /* 12dcf7fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf800 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dcf803 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcf807 je 0x12dcf81c */
  if (C.zf) goto L_12dcf81c;
  /* 12dcf809 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcf80c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dcf811 push eax */
  push32((uint32_t)(EAX));
  /* 12dcf812 call dword ptr [0x12de22c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22c8))), 0x12dcf818u);
  /* 12dcf818 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcf81a jne 0x12dcf823 */
  if (!C.zf) goto L_12dcf823;
L_12dcf81c:;
  /* 12dcf81c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dcf81e jmp 0x12dcf8cc */
  goto L_12dcf8cc;
L_12dcf823:;
  /* 12dcf823 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dcf825 mov ecx, dword ptr [0x12ddf79c] */
  ECX = (r32((uint32_t)(0x12ddf79c)));
  /* 12dcf82b push ecx */
  push32((uint32_t)(ECX));
  /* 12dcf82c call dword ptr [0x12de22d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22d8))), 0x12dcf832u);
  /* 12dcf832 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcf834 jne 0x12dcf83d */
  if (!C.zf) goto L_12dcf83d;
  /* 12dcf836 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dcf838 jmp 0x12dcf8cc */
  goto L_12dcf8cc;
L_12dcf83d:;
  /* 12dcf83d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcf841 je 0x12dcf868 */
  if (C.zf) goto L_12dcf868;
  /* 12dcf843 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcf846 mov ax, word ptr [0x12ddf79c] */
  AX = (r16((uint32_t)(0x12ddf79c)));
  /* 12dcf84c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 12dcf84f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcf852 mov dx, word ptr [0x12ddf7b8] */
  DX = (r16((uint32_t)(0x12ddf7b8)));
  /* 12dcf859 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 12dcf85d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dcf860 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 12dcf864 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_12dcf868:;
  /* 12dcf868 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcf86c je 0x12dcf8c7 */
  if (C.zf) goto L_12dcf8c7;
  /* 12dcf86e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12dcf870 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dcf873 push edx */
  push32((uint32_t)(EDX));
  /* 12dcf874 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 12dcf879 mov eax, dword ptr [0x12ddf79c] */
  EAX = (r32((uint32_t)(0x12ddf79c)));
  /* 12dcf87e push eax */
  push32((uint32_t)(EAX));
  /* 12dcf87f call dword ptr [0x12ddf7bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ddf7bc))), 0x12dcf885u);
  /* 12dcf885 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcf887 jne 0x12dcf88d */
  if (!C.zf) goto L_12dcf88d;
  /* 12dcf889 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dcf88b jmp 0x12dcf8cc */
  goto L_12dcf8cc;
L_12dcf88d:;
  /* 12dcf88d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12dcf88f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dcf892 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf895 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcf896 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 12dcf89b mov edx, dword ptr [0x12ddf7b8] */
  EDX = (r32((uint32_t)(0x12ddf7b8)));
  /* 12dcf8a1 push edx */
  push32((uint32_t)(EDX));
  /* 12dcf8a2 call dword ptr [0x12ddf7bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ddf7bc))), 0x12dcf8a8u);
  /* 12dcf8a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcf8aa jne 0x12dcf8b0 */
  if (!C.zf) goto L_12dcf8b0;
  /* 12dcf8ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dcf8ae jmp 0x12dcf8cc */
  goto L_12dcf8cc;
L_12dcf8b0:;
  /* 12dcf8b0 push 0xa */
  push32((uint32_t)(0xau));
  /* 12dcf8b2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dcf8b5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf8ba push eax */
  push32((uint32_t)(EAX));
  /* 12dcf8bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcf8be push ecx */
  push32((uint32_t)(ECX));
  /* 12dcf8bf call 0x12dc6430 */
  push32(0x12dcf8c4u); f_12dc6430();
  /* 12dcf8c4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dcf8c7:;
  /* 12dcf8c7 mov eax, 1 */
  EAX = (0x1u);
L_12dcf8cc:;
  /* 12dcf8cc mov esp, ebp */
  ESP = (EBP);
  /* 12dcf8ce pop ebp */
  EBP = (pop32());
  /* 12dcf8cf ret  */
  ESPCHK(0x12dcf6d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f8d0 @ 0x12dcf8d0 (130 bytes, 47 insns) */
void f_12dcf8d0(void) {
  FTRACE(0x12dcf8d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcf8d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcf8d1 mov ebp, esp */
  EBP = (ESP);
  /* 12dcf8d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcf8d6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12dcf8dd mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12dcf8e4:;
  /* 12dcf8e4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dcf8e7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcf8ea jg 0x12dcf94e */
  if ((!C.zf&&C.sf==C.of)) goto L_12dcf94e;
  /* 12dcf8ec cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcf8f0 je 0x12dcf94e */
  if (C.zf) goto L_12dcf94e;
  /* 12dcf8f2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dcf8f5 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf8f8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12dcf8f9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcf8fb sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12dcf8fd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dcf900 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcf903 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcf906 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 12dcf909 push eax */
  push32((uint32_t)(EAX));
  /* 12dcf90a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dcf90d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dcf90f push edx */
  push32((uint32_t)(EDX));
  /* 12dcf910 call 0x12dd1fc0 */
  push32(0x12dcf915u); f_12dd1fc0();
  /* 12dcf915 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf918 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dcf91b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcf91f jne 0x12dcf932 */
  if (!C.zf) goto L_12dcf932;
  /* 12dcf921 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcf924 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcf927 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 12dcf92b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dcf92e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12dcf930 jmp 0x12dcf94c */
  goto L_12dcf94c;
L_12dcf932:;
  /* 12dcf932 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcf936 jge 0x12dcf943 */
  if ((C.sf==C.of)) goto L_12dcf943;
  /* 12dcf938 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcf93b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcf93e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12dcf941 jmp 0x12dcf94c */
  goto L_12dcf94c;
L_12dcf943:;
  /* 12dcf943 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcf946 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf949 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12dcf94c:;
  /* 12dcf94c jmp 0x12dcf8e4 */
  goto L_12dcf8e4;
L_12dcf94e:;
  /* 12dcf94e mov esp, ebp */
  ESP = (EBP);
  /* 12dcf950 pop ebp */
  EBP = (pop32());
  /* 12dcf951 ret  */
  ESPCHK(0x12dcf8d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f960 @ 0x12dcf960 (186 bytes, 50 insns) */
void f_12dcf960(void) {
  FTRACE(0x12dcf960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcf960 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcf961 mov ebp, esp */
  EBP = (ESP);
  /* 12dcf963 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcf964 mov eax, dword ptr [0x12ddf7ac] */
  EAX = (r32((uint32_t)(0x12ddf7ac)));
  /* 12dcf969 push eax */
  push32((uint32_t)(EAX));
  /* 12dcf96a call 0x12dc6720 */
  push32(0x12dcf96fu); f_12dc6720();
  /* 12dcf96f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf972 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dcf974 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcf977 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12dcf97a mov dword ptr [0x12ddf7a8], ecx */
  w32((uint32_t)(0x12ddf7a8), (ECX));
  /* 12dcf980 mov edx, dword ptr [0x12ddf7b0] */
  EDX = (r32((uint32_t)(0x12ddf7b0)));
  /* 12dcf986 push edx */
  push32((uint32_t)(EDX));
  /* 12dcf987 call 0x12dc6720 */
  push32(0x12dcf98cu); f_12dc6720();
  /* 12dcf98c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf98f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dcf991 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcf994 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12dcf997 mov dword ptr [0x12ddf7a0], ecx */
  w32((uint32_t)(0x12ddf7a0), (ECX));
  /* 12dcf99d mov dword ptr [0x12ddf79c], 0 */
  w32((uint32_t)(0x12ddf79c), (0x0u));
  /* 12dcf9a7 cmp dword ptr [0x12ddf7a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf7a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcf9ae je 0x12dcf9b9 */
  if (C.zf) goto L_12dcf9b9;
  /* 12dcf9b0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12dcf9b7 jmp 0x12dcf9cb */
  goto L_12dcf9cb;
L_12dcf9b9:;
  /* 12dcf9b9 mov edx, dword ptr [0x12ddf7ac] */
  EDX = (r32((uint32_t)(0x12ddf7ac)));
  /* 12dcf9bf push edx */
  push32((uint32_t)(EDX));
  /* 12dcf9c0 call 0x12dd0400 */
  push32(0x12dcf9c5u); f_12dd0400();
  /* 12dcf9c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcf9c8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12dcf9cb:;
  /* 12dcf9cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcf9ce mov dword ptr [0x12ddf7a4], eax */
  w32((uint32_t)(0x12ddf7a4), (EAX));
  /* 12dcf9d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dcf9d5 push 0x12dcfa20 */
  push32((uint32_t)(0x12dcfa20u));
  /* 12dcf9da call dword ptr [0x12de22cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22cc))), 0x12dcf9e0u);
  /* 12dcf9e0 mov ecx, dword ptr [0x12ddf7b4] */
  ECX = (r32((uint32_t)(0x12ddf7b4)));
  /* 12dcf9e6 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 12dcf9ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dcf9ee je 0x12dcfa0c */
  if (C.zf) goto L_12dcfa0c;
  /* 12dcf9f0 mov edx, dword ptr [0x12ddf7b4] */
  EDX = (r32((uint32_t)(0x12ddf7b4)));
  /* 12dcf9f6 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 12dcf9fc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dcf9fe je 0x12dcfa0c */
  if (C.zf) goto L_12dcfa0c;
  /* 12dcfa00 mov eax, dword ptr [0x12ddf7b4] */
  EAX = (r32((uint32_t)(0x12ddf7b4)));
  /* 12dcfa05 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 12dcfa08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcfa0a jne 0x12dcfa16 */
  if (!C.zf) goto L_12dcfa16;
L_12dcfa0c:;
  /* 12dcfa0c mov dword ptr [0x12ddf7b4], 0 */
  w32((uint32_t)(0x12ddf7b4), (0x0u));
L_12dcfa16:;
  /* 12dcfa16 mov esp, ebp */
  ESP = (EBP);
  /* 12dcfa18 pop ebp */
  EBP = (pop32());
  /* 12dcfa19 ret  */
  ESPCHK(0x12dcf960u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fa20 @ 0x12dcfa20 (804 bytes, 220 insns) */
void f_12dcfa20(void) {
  FTRACE(0x12dcfa20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcfa20 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcfa21 mov ebp, esp */
  EBP = (ESP);
  /* 12dcfa23 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcfa26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcfa29 push eax */
  push32((uint32_t)(EAX));
  /* 12dcfa2a call 0x12dd0380 */
  push32(0x12dcfa2fu); f_12dd0380();
  /* 12dcfa2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcfa32 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12dcfa35 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12dcfa37 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12dcfa3a push ecx */
  push32((uint32_t)(ECX));
  /* 12dcfa3b mov edx, dword ptr [0x12ddf7a0] */
  EDX = (r32((uint32_t)(0x12ddf7a0)));
  /* 12dcfa41 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12dcfa43 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcfa45 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 12dcfa4b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcfa51 push edx */
  push32((uint32_t)(EDX));
  /* 12dcfa52 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12dcfa55 push eax */
  push32((uint32_t)(EAX));
  /* 12dcfa56 call dword ptr [0x12ddf7bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ddf7bc))), 0x12dcfa5cu);
  /* 12dcfa5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcfa5e jne 0x12dcfa74 */
  if (!C.zf) goto L_12dcfa74;
  /* 12dcfa60 mov dword ptr [0x12ddf7b4], 0 */
  w32((uint32_t)(0x12ddf7b4), (0x0u));
  /* 12dcfa6a mov eax, 1 */
  EAX = (0x1u);
  /* 12dcfa6f jmp 0x12dcfd3e */
  goto L_12dcfd3e;
L_12dcfa74:;
  /* 12dcfa74 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12dcfa77 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcfa78 mov edx, dword ptr [0x12ddf7b0] */
  EDX = (r32((uint32_t)(0x12ddf7b0)));
  /* 12dcfa7e push edx */
  push32((uint32_t)(EDX));
  /* 12dcfa7f call 0x12dd1fc0 */
  push32(0x12dcfa84u); f_12dd1fc0();
  /* 12dcfa84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcfa87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcfa89 jne 0x12dcfbaf */
  if (!C.zf) goto L_12dcfbaf;
  /* 12dcfa8f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12dcfa91 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12dcfa94 push eax */
  push32((uint32_t)(EAX));
  /* 12dcfa95 mov ecx, dword ptr [0x12ddf7a8] */
  ECX = (r32((uint32_t)(0x12ddf7a8)));
  /* 12dcfa9b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12dcfa9d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcfa9f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 12dcfaa5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcfaab push ecx */
  push32((uint32_t)(ECX));
  /* 12dcfaac mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12dcfaaf push edx */
  push32((uint32_t)(EDX));
  /* 12dcfab0 call dword ptr [0x12ddf7bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ddf7bc))), 0x12dcfab6u);
  /* 12dcfab6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcfab8 jne 0x12dcface */
  if (!C.zf) goto L_12dcface;
  /* 12dcfaba mov dword ptr [0x12ddf7b4], 0 */
  w32((uint32_t)(0x12ddf7b4), (0x0u));
  /* 12dcfac4 mov eax, 1 */
  EAX = (0x1u);
  /* 12dcfac9 jmp 0x12dcfd3e */
  goto L_12dcfd3e;
L_12dcface:;
  /* 12dcface lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12dcfad1 push eax */
  push32((uint32_t)(EAX));
  /* 12dcfad2 mov ecx, dword ptr [0x12ddf7ac] */
  ECX = (r32((uint32_t)(0x12ddf7ac)));
  /* 12dcfad8 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcfad9 call 0x12dd1fc0 */
  push32(0x12dcfadeu); f_12dd1fc0();
  /* 12dcfade add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcfae1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcfae3 jne 0x12dcfb10 */
  if (!C.zf) goto L_12dcfb10;
  /* 12dcfae5 mov edx, dword ptr [0x12ddf7b4] */
  EDX = (r32((uint32_t)(0x12ddf7b4)));
  /* 12dcfaeb or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 12dcfaf1 mov dword ptr [0x12ddf7b4], edx */
  w32((uint32_t)(0x12ddf7b4), (EDX));
  /* 12dcfaf7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12dcfafa mov dword ptr [0x12ddf7b8], eax */
  w32((uint32_t)(0x12ddf7b8), (EAX));
  /* 12dcfaff mov ecx, dword ptr [0x12ddf7b8] */
  ECX = (r32((uint32_t)(0x12ddf7b8)));
  /* 12dcfb05 mov dword ptr [0x12ddf79c], ecx */
  w32((uint32_t)(0x12ddf79c), (ECX));
  /* 12dcfb0b jmp 0x12dcfbaf */
  goto L_12dcfbaf;
L_12dcfb10:;
  /* 12dcfb10 mov edx, dword ptr [0x12ddf7b4] */
  EDX = (r32((uint32_t)(0x12ddf7b4)));
  /* 12dcfb16 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12dcfb19 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dcfb1b jne 0x12dcfbaf */
  if (!C.zf) goto L_12dcfbaf;
  /* 12dcfb21 cmp dword ptr [0x12ddf7a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf7a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcfb28 je 0x12dcfb7d */
  if (C.zf) goto L_12dcfb7d;
  /* 12dcfb2a mov eax, dword ptr [0x12ddf7a4] */
  EAX = (r32((uint32_t)(0x12ddf7a4)));
  /* 12dcfb2f push eax */
  push32((uint32_t)(EAX));
  /* 12dcfb30 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12dcfb33 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcfb34 mov edx, dword ptr [0x12ddf7ac] */
  EDX = (r32((uint32_t)(0x12ddf7ac)));
  /* 12dcfb3a push edx */
  push32((uint32_t)(EDX));
  /* 12dcfb3b call 0x12dd2090 */
  push32(0x12dcfb40u); f_12dd2090();
  /* 12dcfb40 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcfb43 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcfb45 jne 0x12dcfb7d */
  if (!C.zf) goto L_12dcfb7d;
  /* 12dcfb47 mov eax, dword ptr [0x12ddf7b4] */
  EAX = (r32((uint32_t)(0x12ddf7b4)));
  /* 12dcfb4c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 12dcfb4e mov dword ptr [0x12ddf7b4], eax */
  w32((uint32_t)(0x12ddf7b4), (EAX));
  /* 12dcfb53 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12dcfb56 mov dword ptr [0x12ddf7b8], ecx */
  w32((uint32_t)(0x12ddf7b8), (ECX));
  /* 12dcfb5c mov edx, dword ptr [0x12ddf7ac] */
  EDX = (r32((uint32_t)(0x12ddf7ac)));
  /* 12dcfb62 push edx */
  push32((uint32_t)(EDX));
  /* 12dcfb63 call 0x12dc6720 */
  push32(0x12dcfb68u); f_12dc6720();
  /* 12dcfb68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcfb6b cmp eax, dword ptr [0x12ddf7a4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12ddf7a4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcfb71 jne 0x12dcfb7b */
  if (!C.zf) goto L_12dcfb7b;
  /* 12dcfb73 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12dcfb76 mov dword ptr [0x12ddf79c], eax */
  w32((uint32_t)(0x12ddf79c), (EAX));
L_12dcfb7b:;
  /* 12dcfb7b jmp 0x12dcfbaf */
  goto L_12dcfbaf;
L_12dcfb7d:;
  /* 12dcfb7d mov ecx, dword ptr [0x12ddf7b4] */
  ECX = (r32((uint32_t)(0x12ddf7b4)));
  /* 12dcfb83 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12dcfb86 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dcfb88 jne 0x12dcfbaf */
  if (!C.zf) goto L_12dcfbaf;
  /* 12dcfb8a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12dcfb8d push edx */
  push32((uint32_t)(EDX));
  /* 12dcfb8e call 0x12dd00c0 */
  push32(0x12dcfb93u); f_12dd00c0();
  /* 12dcfb93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcfb96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcfb98 je 0x12dcfbaf */
  if (C.zf) goto L_12dcfbaf;
  /* 12dcfb9a mov eax, dword ptr [0x12ddf7b4] */
  EAX = (r32((uint32_t)(0x12ddf7b4)));
  /* 12dcfb9f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 12dcfba1 mov dword ptr [0x12ddf7b4], eax */
  w32((uint32_t)(0x12ddf7b4), (EAX));
  /* 12dcfba6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12dcfba9 mov dword ptr [0x12ddf7b8], ecx */
  w32((uint32_t)(0x12ddf7b8), (ECX));
L_12dcfbaf:;
  /* 12dcfbaf mov edx, dword ptr [0x12ddf7b4] */
  EDX = (r32((uint32_t)(0x12ddf7b4)));
  /* 12dcfbb5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 12dcfbbb cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcfbc1 je 0x12dcfd31 */
  if (C.zf) goto L_12dcfd31;
  /* 12dcfbc7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12dcfbc9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12dcfbcc push eax */
  push32((uint32_t)(EAX));
  /* 12dcfbcd mov ecx, dword ptr [0x12ddf7a8] */
  ECX = (r32((uint32_t)(0x12ddf7a8)));
  /* 12dcfbd3 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12dcfbd5 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcfbd7 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 12dcfbdd add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcfbe3 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcfbe4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12dcfbe7 push edx */
  push32((uint32_t)(EDX));
  /* 12dcfbe8 call dword ptr [0x12ddf7bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ddf7bc))), 0x12dcfbeeu);
  /* 12dcfbee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcfbf0 jne 0x12dcfc06 */
  if (!C.zf) goto L_12dcfc06;
  /* 12dcfbf2 mov dword ptr [0x12ddf7b4], 0 */
  w32((uint32_t)(0x12ddf7b4), (0x0u));
  /* 12dcfbfc mov eax, 1 */
  EAX = (0x1u);
  /* 12dcfc01 jmp 0x12dcfd3e */
  goto L_12dcfd3e;
L_12dcfc06:;
  /* 12dcfc06 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12dcfc09 push eax */
  push32((uint32_t)(EAX));
  /* 12dcfc0a mov ecx, dword ptr [0x12ddf7ac] */
  ECX = (r32((uint32_t)(0x12ddf7ac)));
  /* 12dcfc10 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcfc11 call 0x12dd1fc0 */
  push32(0x12dcfc16u); f_12dd1fc0();
  /* 12dcfc16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcfc19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcfc1b jne 0x12dcfcd0 */
  if (!C.zf) goto L_12dcfcd0;
  /* 12dcfc21 mov edx, dword ptr [0x12ddf7b4] */
  EDX = (r32((uint32_t)(0x12ddf7b4)));
  /* 12dcfc27 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12dcfc2a mov dword ptr [0x12ddf7b4], edx */
  w32((uint32_t)(0x12ddf7b4), (EDX));
  /* 12dcfc30 cmp dword ptr [0x12ddf7a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf7a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcfc37 je 0x12dcfc5a */
  if (C.zf) goto L_12dcfc5a;
  /* 12dcfc39 mov eax, dword ptr [0x12ddf7b4] */
  EAX = (r32((uint32_t)(0x12ddf7b4)));
  /* 12dcfc3e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12dcfc41 mov dword ptr [0x12ddf7b4], eax */
  w32((uint32_t)(0x12ddf7b4), (EAX));
  /* 12dcfc46 cmp dword ptr [0x12ddf79c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf79c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcfc4d jne 0x12dcfc58 */
  if (!C.zf) goto L_12dcfc58;
  /* 12dcfc4f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12dcfc52 mov dword ptr [0x12ddf79c], ecx */
  w32((uint32_t)(0x12ddf79c), (ECX));
L_12dcfc58:;
  /* 12dcfc58 jmp 0x12dcfcce */
  goto L_12dcfcce;
L_12dcfc5a:;
  /* 12dcfc5a cmp dword ptr [0x12ddf7a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf7a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcfc61 je 0x12dcfcaf */
  if (C.zf) goto L_12dcfcaf;
  /* 12dcfc63 mov edx, dword ptr [0x12ddf7ac] */
  EDX = (r32((uint32_t)(0x12ddf7ac)));
  /* 12dcfc69 push edx */
  push32((uint32_t)(EDX));
  /* 12dcfc6a call 0x12dc6720 */
  push32(0x12dcfc6fu); f_12dc6720();
  /* 12dcfc6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcfc72 cmp eax, dword ptr [0x12ddf7a4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12ddf7a4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcfc78 jne 0x12dcfcaf */
  if (!C.zf) goto L_12dcfcaf;
  /* 12dcfc7a push 1 */
  push32((uint32_t)(0x1u));
  /* 12dcfc7c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12dcfc7f push eax */
  push32((uint32_t)(EAX));
  /* 12dcfc80 call 0x12dd0110 */
  push32(0x12dcfc85u); f_12dd0110();
  /* 12dcfc85 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcfc88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcfc8a je 0x12dcfcad */
  if (C.zf) goto L_12dcfcad;
  /* 12dcfc8c mov ecx, dword ptr [0x12ddf7b4] */
  ECX = (r32((uint32_t)(0x12ddf7b4)));
  /* 12dcfc92 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12dcfc95 mov dword ptr [0x12ddf7b4], ecx */
  w32((uint32_t)(0x12ddf7b4), (ECX));
  /* 12dcfc9b cmp dword ptr [0x12ddf79c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf79c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcfca2 jne 0x12dcfcad */
  if (!C.zf) goto L_12dcfcad;
  /* 12dcfca4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12dcfca7 mov dword ptr [0x12ddf79c], edx */
  w32((uint32_t)(0x12ddf79c), (EDX));
L_12dcfcad:;
  /* 12dcfcad jmp 0x12dcfcce */
  goto L_12dcfcce;
L_12dcfcaf:;
  /* 12dcfcaf mov eax, dword ptr [0x12ddf7b4] */
  EAX = (r32((uint32_t)(0x12ddf7b4)));
  /* 12dcfcb4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12dcfcb7 mov dword ptr [0x12ddf7b4], eax */
  w32((uint32_t)(0x12ddf7b4), (EAX));
  /* 12dcfcbc cmp dword ptr [0x12ddf79c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf79c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcfcc3 jne 0x12dcfcce */
  if (!C.zf) goto L_12dcfcce;
  /* 12dcfcc5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12dcfcc8 mov dword ptr [0x12ddf79c], ecx */
  w32((uint32_t)(0x12ddf79c), (ECX));
L_12dcfcce:;
  /* 12dcfcce jmp 0x12dcfd31 */
  goto L_12dcfd31;
L_12dcfcd0:;
  /* 12dcfcd0 cmp dword ptr [0x12ddf7a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf7a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcfcd7 jne 0x12dcfd31 */
  if (!C.zf) goto L_12dcfd31;
  /* 12dcfcd9 cmp dword ptr [0x12ddf7a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf7a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcfce0 je 0x12dcfd31 */
  if (C.zf) goto L_12dcfd31;
  /* 12dcfce2 mov edx, dword ptr [0x12ddf7a4] */
  EDX = (r32((uint32_t)(0x12ddf7a4)));
  /* 12dcfce8 push edx */
  push32((uint32_t)(EDX));
  /* 12dcfce9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12dcfcec push eax */
  push32((uint32_t)(EAX));
  /* 12dcfced mov ecx, dword ptr [0x12ddf7ac] */
  ECX = (r32((uint32_t)(0x12ddf7ac)));
  /* 12dcfcf3 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcfcf4 call 0x12dd2090 */
  push32(0x12dcfcf9u); f_12dd2090();
  /* 12dcfcf9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcfcfc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcfcfe jne 0x12dcfd31 */
  if (!C.zf) goto L_12dcfd31;
  /* 12dcfd00 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dcfd02 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12dcfd05 push edx */
  push32((uint32_t)(EDX));
  /* 12dcfd06 call 0x12dd0110 */
  push32(0x12dcfd0bu); f_12dd0110();
  /* 12dcfd0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcfd0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcfd10 je 0x12dcfd31 */
  if (C.zf) goto L_12dcfd31;
  /* 12dcfd12 mov eax, dword ptr [0x12ddf7b4] */
  EAX = (r32((uint32_t)(0x12ddf7b4)));
  /* 12dcfd17 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12dcfd1a mov dword ptr [0x12ddf7b4], eax */
  w32((uint32_t)(0x12ddf7b4), (EAX));
  /* 12dcfd1f cmp dword ptr [0x12ddf79c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf79c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcfd26 jne 0x12dcfd31 */
  if (!C.zf) goto L_12dcfd31;
  /* 12dcfd28 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12dcfd2b mov dword ptr [0x12ddf79c], ecx */
  w32((uint32_t)(0x12ddf79c), (ECX));
L_12dcfd31:;
  /* 12dcfd31 mov eax, dword ptr [0x12ddf7b4] */
  EAX = (r32((uint32_t)(0x12ddf7b4)));
  /* 12dcfd36 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12dcfd39 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12dcfd3b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcfd3d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12dcfd3e:;
  /* 12dcfd3e mov esp, ebp */
  ESP = (EBP);
  /* 12dcfd40 pop ebp */
  EBP = (pop32());
  /* 12dcfd41 ret 4 */
  ESPCHK(0x12dcfa20u, _esp0);
  ESP += 8; return;
}

/* FUN_1000fd50 @ 0x12dcfd50 (116 bytes, 33 insns) */
void f_12dcfd50(void) {
  FTRACE(0x12dcfd50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcfd50 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcfd51 mov ebp, esp */
  EBP = (ESP);
  /* 12dcfd53 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcfd54 mov eax, dword ptr [0x12ddf7ac] */
  EAX = (r32((uint32_t)(0x12ddf7ac)));
  /* 12dcfd59 push eax */
  push32((uint32_t)(EAX));
  /* 12dcfd5a call 0x12dc6720 */
  push32(0x12dcfd5fu); f_12dc6720();
  /* 12dcfd5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcfd62 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dcfd64 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcfd67 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12dcfd6a mov dword ptr [0x12ddf7a8], ecx */
  w32((uint32_t)(0x12ddf7a8), (ECX));
  /* 12dcfd70 cmp dword ptr [0x12ddf7a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf7a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcfd77 je 0x12dcfd82 */
  if (C.zf) goto L_12dcfd82;
  /* 12dcfd79 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12dcfd80 jmp 0x12dcfd94 */
  goto L_12dcfd94;
L_12dcfd82:;
  /* 12dcfd82 mov edx, dword ptr [0x12ddf7ac] */
  EDX = (r32((uint32_t)(0x12ddf7ac)));
  /* 12dcfd88 push edx */
  push32((uint32_t)(EDX));
  /* 12dcfd89 call 0x12dd0400 */
  push32(0x12dcfd8eu); f_12dd0400();
  /* 12dcfd8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcfd91 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12dcfd94:;
  /* 12dcfd94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dcfd97 mov dword ptr [0x12ddf7a4], eax */
  w32((uint32_t)(0x12ddf7a4), (EAX));
  /* 12dcfd9c push 1 */
  push32((uint32_t)(0x1u));
  /* 12dcfd9e push 0x12dcfdd0 */
  push32((uint32_t)(0x12dcfdd0u));
  /* 12dcfda3 call dword ptr [0x12de22cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22cc))), 0x12dcfda9u);
  /* 12dcfda9 mov ecx, dword ptr [0x12ddf7b4] */
  ECX = (r32((uint32_t)(0x12ddf7b4)));
  /* 12dcfdaf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12dcfdb2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dcfdb4 jne 0x12dcfdc0 */
  if (!C.zf) goto L_12dcfdc0;
  /* 12dcfdb6 mov dword ptr [0x12ddf7b4], 0 */
  w32((uint32_t)(0x12ddf7b4), (0x0u));
L_12dcfdc0:;
  /* 12dcfdc0 mov esp, ebp */
  ESP = (EBP);
  /* 12dcfdc2 pop ebp */
  EBP = (pop32());
  /* 12dcfdc3 ret  */
  ESPCHK(0x12dcfd50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fdd0 @ 0x12dcfdd0 (287 bytes, 86 insns) */
void f_12dcfdd0(void) {
  FTRACE(0x12dcfdd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcfdd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcfdd1 mov ebp, esp */
  EBP = (ESP);
  /* 12dcfdd3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcfdd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcfdd9 push eax */
  push32((uint32_t)(EAX));
  /* 12dcfdda call 0x12dd0380 */
  push32(0x12dcfddfu); f_12dd0380();
  /* 12dcfddf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcfde2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12dcfde5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12dcfde7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12dcfdea push ecx */
  push32((uint32_t)(ECX));
  /* 12dcfdeb mov edx, dword ptr [0x12ddf7a8] */
  EDX = (r32((uint32_t)(0x12ddf7a8)));
  /* 12dcfdf1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12dcfdf3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcfdf5 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 12dcfdfb add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcfe01 push edx */
  push32((uint32_t)(EDX));
  /* 12dcfe02 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12dcfe05 push eax */
  push32((uint32_t)(EAX));
  /* 12dcfe06 call dword ptr [0x12ddf7bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ddf7bc))), 0x12dcfe0cu);
  /* 12dcfe0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcfe0e jne 0x12dcfe24 */
  if (!C.zf) goto L_12dcfe24;
  /* 12dcfe10 mov dword ptr [0x12ddf7b4], 0 */
  w32((uint32_t)(0x12ddf7b4), (0x0u));
  /* 12dcfe1a mov eax, 1 */
  EAX = (0x1u);
  /* 12dcfe1f jmp 0x12dcfee9 */
  goto L_12dcfee9;
L_12dcfe24:;
  /* 12dcfe24 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12dcfe27 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcfe28 mov edx, dword ptr [0x12ddf7ac] */
  EDX = (r32((uint32_t)(0x12ddf7ac)));
  /* 12dcfe2e push edx */
  push32((uint32_t)(EDX));
  /* 12dcfe2f call 0x12dd1fc0 */
  push32(0x12dcfe34u); f_12dd1fc0();
  /* 12dcfe34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcfe37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcfe39 jne 0x12dcfe79 */
  if (!C.zf) goto L_12dcfe79;
  /* 12dcfe3b cmp dword ptr [0x12ddf7a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf7a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcfe42 jne 0x12dcfe56 */
  if (!C.zf) goto L_12dcfe56;
  /* 12dcfe44 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dcfe46 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12dcfe49 push eax */
  push32((uint32_t)(EAX));
  /* 12dcfe4a call 0x12dd0110 */
  push32(0x12dcfe4fu); f_12dd0110();
  /* 12dcfe4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcfe52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcfe54 je 0x12dcfe77 */
  if (C.zf) goto L_12dcfe77;
L_12dcfe56:;
  /* 12dcfe56 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12dcfe59 mov dword ptr [0x12ddf7b8], ecx */
  w32((uint32_t)(0x12ddf7b8), (ECX));
  /* 12dcfe5f mov edx, dword ptr [0x12ddf7b8] */
  EDX = (r32((uint32_t)(0x12ddf7b8)));
  /* 12dcfe65 mov dword ptr [0x12ddf79c], edx */
  w32((uint32_t)(0x12ddf79c), (EDX));
  /* 12dcfe6b mov eax, dword ptr [0x12ddf7b4] */
  EAX = (r32((uint32_t)(0x12ddf7b4)));
  /* 12dcfe70 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12dcfe72 mov dword ptr [0x12ddf7b4], eax */
  w32((uint32_t)(0x12ddf7b4), (EAX));
L_12dcfe77:;
  /* 12dcfe77 jmp 0x12dcfedc */
  goto L_12dcfedc;
L_12dcfe79:;
  /* 12dcfe79 cmp dword ptr [0x12ddf7a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf7a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcfe80 jne 0x12dcfedc */
  if (!C.zf) goto L_12dcfedc;
  /* 12dcfe82 cmp dword ptr [0x12ddf7a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ddf7a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcfe89 je 0x12dcfedc */
  if (C.zf) goto L_12dcfedc;
  /* 12dcfe8b mov ecx, dword ptr [0x12ddf7a4] */
  ECX = (r32((uint32_t)(0x12ddf7a4)));
  /* 12dcfe91 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcfe92 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 12dcfe95 push edx */
  push32((uint32_t)(EDX));
  /* 12dcfe96 mov eax, dword ptr [0x12ddf7ac] */
  EAX = (r32((uint32_t)(0x12ddf7ac)));
  /* 12dcfe9b push eax */
  push32((uint32_t)(EAX));
  /* 12dcfe9c call 0x12dd2090 */
  push32(0x12dcfea1u); f_12dd2090();
  /* 12dcfea1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcfea4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcfea6 jne 0x12dcfedc */
  if (!C.zf) goto L_12dcfedc;
  /* 12dcfea8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dcfeaa mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12dcfead push ecx */
  push32((uint32_t)(ECX));
  /* 12dcfeae call 0x12dd0110 */
  push32(0x12dcfeb3u); f_12dd0110();
  /* 12dcfeb3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcfeb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcfeb8 je 0x12dcfedc */
  if (C.zf) goto L_12dcfedc;
  /* 12dcfeba mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12dcfebd mov dword ptr [0x12ddf7b8], edx */
  w32((uint32_t)(0x12ddf7b8), (EDX));
  /* 12dcfec3 mov eax, dword ptr [0x12ddf7b8] */
  EAX = (r32((uint32_t)(0x12ddf7b8)));
  /* 12dcfec8 mov dword ptr [0x12ddf79c], eax */
  w32((uint32_t)(0x12ddf79c), (EAX));
  /* 12dcfecd mov ecx, dword ptr [0x12ddf7b4] */
  ECX = (r32((uint32_t)(0x12ddf7b4)));
  /* 12dcfed3 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12dcfed6 mov dword ptr [0x12ddf7b4], ecx */
  w32((uint32_t)(0x12ddf7b4), (ECX));
L_12dcfedc:;
  /* 12dcfedc mov eax, dword ptr [0x12ddf7b4] */
  EAX = (r32((uint32_t)(0x12ddf7b4)));
  /* 12dcfee1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12dcfee4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12dcfee6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcfee8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12dcfee9:;
  /* 12dcfee9 mov esp, ebp */
  ESP = (EBP);
  /* 12dcfeeb pop ebp */
  EBP = (pop32());
  /* 12dcfeec ret 4 */
  ESPCHK(0x12dcfdd0u, _esp0);
  ESP += 8; return;
}

/* FUN_1000fef0 @ 0x12dcfef0 (69 bytes, 20 insns) */
void f_12dcfef0(void) {
  FTRACE(0x12dcfef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcfef0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcfef1 mov ebp, esp */
  EBP = (ESP);
  /* 12dcfef3 mov eax, dword ptr [0x12ddf7b0] */
  EAX = (r32((uint32_t)(0x12ddf7b0)));
  /* 12dcfef8 push eax */
  push32((uint32_t)(EAX));
  /* 12dcfef9 call 0x12dc6720 */
  push32(0x12dcfefeu); f_12dc6720();
  /* 12dcfefe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcff01 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dcff03 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dcff06 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12dcff09 mov dword ptr [0x12ddf7a0], ecx */
  w32((uint32_t)(0x12ddf7a0), (ECX));
  /* 12dcff0f push 1 */
  push32((uint32_t)(0x1u));
  /* 12dcff11 push 0x12dcff40 */
  push32((uint32_t)(0x12dcff40u));
  /* 12dcff16 call dword ptr [0x12de22cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22cc))), 0x12dcff1cu);
  /* 12dcff1c mov edx, dword ptr [0x12ddf7b4] */
  EDX = (r32((uint32_t)(0x12ddf7b4)));
  /* 12dcff22 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12dcff25 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dcff27 jne 0x12dcff33 */
  if (!C.zf) goto L_12dcff33;
  /* 12dcff29 mov dword ptr [0x12ddf7b4], 0 */
  w32((uint32_t)(0x12ddf7b4), (0x0u));
L_12dcff33:;
  /* 12dcff33 pop ebp */
  EBP = (pop32());
  /* 12dcff34 ret  */
  ESPCHK(0x12dcfef0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ff40 @ 0x12dcff40 (172 bytes, 54 insns) */
void f_12dcff40(void) {
  FTRACE(0x12dcff40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcff40 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcff41 mov ebp, esp */
  EBP = (ESP);
  /* 12dcff43 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcff46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dcff49 push eax */
  push32((uint32_t)(EAX));
  /* 12dcff4a call 0x12dd0380 */
  push32(0x12dcff4fu); f_12dd0380();
  /* 12dcff4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcff52 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12dcff55 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12dcff57 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12dcff5a push ecx */
  push32((uint32_t)(ECX));
  /* 12dcff5b mov edx, dword ptr [0x12ddf7a0] */
  EDX = (r32((uint32_t)(0x12ddf7a0)));
  /* 12dcff61 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12dcff63 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcff65 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 12dcff6b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcff71 push edx */
  push32((uint32_t)(EDX));
  /* 12dcff72 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12dcff75 push eax */
  push32((uint32_t)(EAX));
  /* 12dcff76 call dword ptr [0x12ddf7bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ddf7bc))), 0x12dcff7cu);
  /* 12dcff7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcff7e jne 0x12dcff91 */
  if (!C.zf) goto L_12dcff91;
  /* 12dcff80 mov dword ptr [0x12ddf7b4], 0 */
  w32((uint32_t)(0x12ddf7b4), (0x0u));
  /* 12dcff8a mov eax, 1 */
  EAX = (0x1u);
  /* 12dcff8f jmp 0x12dcffe6 */
  goto L_12dcffe6;
L_12dcff91:;
  /* 12dcff91 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12dcff94 push ecx */
  push32((uint32_t)(ECX));
  /* 12dcff95 mov edx, dword ptr [0x12ddf7b0] */
  EDX = (r32((uint32_t)(0x12ddf7b0)));
  /* 12dcff9b push edx */
  push32((uint32_t)(EDX));
  /* 12dcff9c call 0x12dd1fc0 */
  push32(0x12dcffa1u); f_12dd1fc0();
  /* 12dcffa1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcffa4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcffa6 jne 0x12dcffd9 */
  if (!C.zf) goto L_12dcffd9;
  /* 12dcffa8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12dcffab push eax */
  push32((uint32_t)(EAX));
  /* 12dcffac call 0x12dd00c0 */
  push32(0x12dcffb1u); f_12dd00c0();
  /* 12dcffb1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dcffb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dcffb6 je 0x12dcffd9 */
  if (C.zf) goto L_12dcffd9;
  /* 12dcffb8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12dcffbb mov dword ptr [0x12ddf7b8], ecx */
  w32((uint32_t)(0x12ddf7b8), (ECX));
  /* 12dcffc1 mov edx, dword ptr [0x12ddf7b8] */
  EDX = (r32((uint32_t)(0x12ddf7b8)));
  /* 12dcffc7 mov dword ptr [0x12ddf79c], edx */
  w32((uint32_t)(0x12ddf79c), (EDX));
  /* 12dcffcd mov eax, dword ptr [0x12ddf7b4] */
  EAX = (r32((uint32_t)(0x12ddf7b4)));
  /* 12dcffd2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12dcffd4 mov dword ptr [0x12ddf7b4], eax */
  w32((uint32_t)(0x12ddf7b4), (EAX));
L_12dcffd9:;
  /* 12dcffd9 mov eax, dword ptr [0x12ddf7b4] */
  EAX = (r32((uint32_t)(0x12ddf7b4)));
  /* 12dcffde and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12dcffe1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12dcffe3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dcffe5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12dcffe6:;
  /* 12dcffe6 mov esp, ebp */
  ESP = (EBP);
  /* 12dcffe8 pop ebp */
  EBP = (pop32());
  /* 12dcffe9 ret 4 */
  ESPCHK(0x12dcff40u, _esp0);
  ESP += 8; return;
}

/* FUN_1000fff0 @ 0x12dcfff0 (43 bytes, 11 insns) */
void f_12dcfff0(void) {
  FTRACE(0x12dcfff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dcfff0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dcfff1 mov ebp, esp */
  EBP = (ESP);
  /* 12dcfff3 mov eax, dword ptr [0x12ddf7b4] */
  EAX = (r32((uint32_t)(0x12ddf7b4)));
  /* 12dcfff8 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 12dcfffd mov dword ptr [0x12ddf7b4], eax */
  w32((uint32_t)(0x12ddf7b4), (EAX));
  /* 12dd0002 call dword ptr [0x12de22bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22bc))), 0x12dd0008u);
  /* 12dd0008 mov dword ptr [0x12ddf7b8], eax */
  w32((uint32_t)(0x12ddf7b8), (EAX));
  /* 12dd000d mov ecx, dword ptr [0x12ddf7b8] */
  ECX = (r32((uint32_t)(0x12ddf7b8)));
  /* 12dd0013 mov dword ptr [0x12ddf79c], ecx */
  w32((uint32_t)(0x12ddf79c), (ECX));
  /* 12dd0019 pop ebp */
  EBP = (pop32());
  /* 12dd001a ret  */
  ESPCHK(0x12dcfff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010020 @ 0x12dd0020 (155 bytes, 57 insns) */
void f_12dd0020(void) {
  FTRACE(0x12dd0020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dd0020 push ebp */
  push32((uint32_t)(EBP));
  /* 12dd0021 mov ebp, esp */
  EBP = (ESP);
  /* 12dd0023 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd0026 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd002a je 0x12dd004b */
  if (C.zf) goto L_12dd004b;
  /* 12dd002c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd002f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12dd0032 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dd0034 je 0x12dd004b */
  if (C.zf) goto L_12dd004b;
  /* 12dd0036 push 0x12ddb8c4 */
  push32((uint32_t)(0x12ddb8c4u));
  /* 12dd003b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd003e push edx */
  push32((uint32_t)(EDX));
  /* 12dd003f call 0x12dcf580 */
  push32(0x12dd0044u); f_12dcf580();
  /* 12dd0044 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0047 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dd0049 jne 0x12dd0073 */
  if (!C.zf) goto L_12dd0073;
L_12dd004b:;
  /* 12dd004b push 8 */
  push32((uint32_t)(0x8u));
  /* 12dd004d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12dd0050 push eax */
  push32((uint32_t)(EAX));
  /* 12dd0051 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 12dd0056 mov ecx, dword ptr [0x12ddf7b8] */
  ECX = (r32((uint32_t)(0x12ddf7b8)));
  /* 12dd005c push ecx */
  push32((uint32_t)(ECX));
  /* 12dd005d call dword ptr [0x12ddf7bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ddf7bc))), 0x12dd0063u);
  /* 12dd0063 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dd0065 jne 0x12dd006b */
  if (!C.zf) goto L_12dd006b;
  /* 12dd0067 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd0069 jmp 0x12dd00b7 */
  goto L_12dd00b7;
L_12dd006b:;
  /* 12dd006b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 12dd006e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12dd0071 jmp 0x12dd00ab */
  goto L_12dd00ab;
L_12dd0073:;
  /* 12dd0073 push 0x12ddb8c0 */
  push32((uint32_t)(0x12ddb8c0u));
  /* 12dd0078 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd007b push eax */
  push32((uint32_t)(EAX));
  /* 12dd007c call 0x12dcf580 */
  push32(0x12dd0081u); f_12dcf580();
  /* 12dd0081 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0084 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dd0086 jne 0x12dd00ab */
  if (!C.zf) goto L_12dd00ab;
  /* 12dd0088 push 8 */
  push32((uint32_t)(0x8u));
  /* 12dd008a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12dd008d push ecx */
  push32((uint32_t)(ECX));
  /* 12dd008e push 0xb */
  push32((uint32_t)(0xbu));
  /* 12dd0090 mov edx, dword ptr [0x12ddf7b8] */
  EDX = (r32((uint32_t)(0x12ddf7b8)));
  /* 12dd0096 push edx */
  push32((uint32_t)(EDX));
  /* 12dd0097 call dword ptr [0x12ddf7bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ddf7bc))), 0x12dd009du);
  /* 12dd009d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dd009f jne 0x12dd00a5 */
  if (!C.zf) goto L_12dd00a5;
  /* 12dd00a1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd00a3 jmp 0x12dd00b7 */
  goto L_12dd00b7;
L_12dd00a5:;
  /* 12dd00a5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12dd00a8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12dd00ab:;
  /* 12dd00ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd00ae push ecx */
  push32((uint32_t)(ECX));
  /* 12dd00af call 0x12dd21a0 */
  push32(0x12dd00b4u); f_12dd21a0();
  /* 12dd00b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dd00b7:;
  /* 12dd00b7 mov esp, ebp */
  ESP = (EBP);
  /* 12dd00b9 pop ebp */
  EBP = (pop32());
  /* 12dd00ba ret  */
  ESPCHK(0x12dd0020u, _esp0);
  ESP += 4; return;
}

/* FUN_100100c0 @ 0x12dd00c0 (79 bytes, 26 insns) */
void f_12dd00c0(void) {
  FTRACE(0x12dd00c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dd00c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dd00c1 mov ebp, esp */
  EBP = (ESP);
  /* 12dd00c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd00c6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 12dd00ca mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 12dd00ce mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12dd00d5 jmp 0x12dd00e0 */
  goto L_12dd00e0;
L_12dd00d7:;
  /* 12dd00d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dd00da add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd00dd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12dd00e0:;
  /* 12dd00e0 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd00e4 jae 0x12dd0106 */
  if (!C.cf) goto L_12dd0106;
  /* 12dd00e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd00e9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12dd00ef mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dd00f2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dd00f4 mov cx, word ptr [eax*2 + 0x12dde9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x12dde9c4)));
  /* 12dd00fc cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd00fe jne 0x12dd0104 */
  if (!C.zf) goto L_12dd0104;
  /* 12dd0100 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd0102 jmp 0x12dd010b */
  goto L_12dd010b;
L_12dd0104:;
  /* 12dd0104 jmp 0x12dd00d7 */
  goto L_12dd00d7;
L_12dd0106:;
  /* 12dd0106 mov eax, 1 */
  EAX = (0x1u);
L_12dd010b:;
  /* 12dd010b mov esp, ebp */
  ESP = (EBP);
  /* 12dd010d pop ebp */
  EBP = (pop32());
  /* 12dd010e ret  */
  ESPCHK(0x12dd00c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010110 @ 0x12dd0110 (135 bytes, 48 insns) */
void f_12dd0110(void) {
  FTRACE(0x12dd0110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dd0110 push ebp */
  push32((uint32_t)(EBP));
  /* 12dd0111 mov ebp, esp */
  EBP = (ESP);
  /* 12dd0113 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd0116 push esi */
  push32((uint32_t)(ESI));
  /* 12dd0117 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dd011a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dd011f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dd0124 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dd0129 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 12dd012c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dd0131 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dd0134 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12dd0136 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 12dd0139 push ecx */
  push32((uint32_t)(ECX));
  /* 12dd013a push 1 */
  push32((uint32_t)(0x1u));
  /* 12dd013c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dd013f push edx */
  push32((uint32_t)(EDX));
  /* 12dd0140 call dword ptr [0x12ddf7bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ddf7bc))), 0x12dd0146u);
  /* 12dd0146 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dd0148 jne 0x12dd014e */
  if (!C.zf) goto L_12dd014e;
  /* 12dd014a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd014c jmp 0x12dd0192 */
  goto L_12dd0192;
L_12dd014e:;
  /* 12dd014e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 12dd0151 push eax */
  push32((uint32_t)(EAX));
  /* 12dd0152 call 0x12dd0380 */
  push32(0x12dd0157u); f_12dd0380();
  /* 12dd0157 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd015a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd015d je 0x12dd018d */
  if (C.zf) goto L_12dd018d;
  /* 12dd015f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd0163 je 0x12dd018d */
  if (C.zf) goto L_12dd018d;
  /* 12dd0165 mov ecx, dword ptr [0x12ddf7ac] */
  ECX = (r32((uint32_t)(0x12ddf7ac)));
  /* 12dd016b push ecx */
  push32((uint32_t)(ECX));
  /* 12dd016c call 0x12dd0400 */
  push32(0x12dd0171u); f_12dd0400();
  /* 12dd0171 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0174 mov esi, eax */
  ESI = (EAX);
  /* 12dd0176 mov edx, dword ptr [0x12ddf7ac] */
  EDX = (r32((uint32_t)(0x12ddf7ac)));
  /* 12dd017c push edx */
  push32((uint32_t)(EDX));
  /* 12dd017d call 0x12dc6720 */
  push32(0x12dd0182u); f_12dc6720();
  /* 12dd0182 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dd0185 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd0187 jne 0x12dd018d */
  if (!C.zf) goto L_12dd018d;
  /* 12dd0189 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dd018b jmp 0x12dd0192 */
  goto L_12dd0192;
L_12dd018d:;
  /* 12dd018d mov eax, 1 */
  EAX = (0x1u);
L_12dd0192:;
  /* 12dd0192 pop esi */
  ESI = (pop32());
  /* 12dd0193 mov esp, ebp */
  ESP = (EBP);
  /* 12dd0195 pop ebp */
  EBP = (pop32());
  /* 12dd0196 ret  */
  ESPCHK(0x12dd0110u, _esp0);
  ESP += 4; return;
}

/* FUN_100101a0 @ 0x12dd01a0 (77 bytes, 18 insns) */
void f_12dd01a0(void) {
  FTRACE(0x12dd01a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dd01a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dd01a1 mov ebp, esp */
  EBP = (ESP);
  /* 12dd01a3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dd01a9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 12dd01b3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 12dd01b9 push eax */
  push32((uint32_t)(EAX));
  /* 12dd01ba call dword ptr [0x12de22b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12de22b8))), 0x12dd01c0u);
  /* 12dd01c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dd01c2 je 0x12dd01d9 */
  if (C.zf) goto L_12dd01d9;
  /* 12dd01c4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dd01cb jne 0x12dd01d9 */
  if (!C.zf) goto L_12dd01d9;
  /* 12dd01cd mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 12dd01d7 jmp 0x12dd01e3 */
  goto L_12dd01e3;
L_12dd01d9:;
  /* 12dd01d9 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_12dd01e3:;
  /* 12dd01e3 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12dd01e9 mov esp, ebp */
  ESP = (EBP);
  /* 12dd01eb pop ebp */
  EBP = (pop32());
  /* 12dd01ec ret  */
  ESPCHK(0x12dd01a0u, _esp0);
  ESP += 4; return;
}

