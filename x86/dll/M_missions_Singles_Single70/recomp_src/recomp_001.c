#include "recomp.h"

/* FUN_10005500 @ 0x11b95500 (98 bytes, 39 insns) */
void f_11b95500(void) {
  FTRACE(0x11b95500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b95500 push ebp */
  push32((uint32_t)(EBP));
  /* 11b95501 mov ebp, esp */
  EBP = (ESP);
  /* 11b95503 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b95506 push ebx */
  push32((uint32_t)(EBX));
  /* 11b95507 push esi */
  push32((uint32_t)(ESI));
  /* 11b95508 push edi */
  push32((uint32_t)(EDI));
  /* 11b95509 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9550a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11b9550d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11b95512 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b95517 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b95519 pop ecx */
  ECX = (pop32());
  /* 11b9551a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b9551d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b95520 call 0x11b91136 */
  push32(0x11b95525u); f_11b91136();
  /* 11b95525 mov esi, esp */
  ESI = (ESP);
  /* 11b95527 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b95529 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9552b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9552e push eax */
  push32((uint32_t)(EAX));
  /* 11b9552f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b95532 mov dl, byte ptr [ecx + 0x10] */
  DL = (r8((uint32_t)(ECX + 0x10)));
  /* 11b95535 push edx */
  push32((uint32_t)(EDX));
  /* 11b95536 call dword ptr [0x11bd0560] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0560))), 0x11b9553cu);
  /* 11b9553c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9553f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b95541 call 0x11b98330 */
  push32(0x11b95546u); f_11b98330();
  /* 11b95546 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b95549 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9554c mov dword ptr [eax + 0x20], ecx */
  w32((uint32_t)(EAX + 0x20), (ECX));
  /* 11b9554f pop edi */
  EDI = (pop32());
  /* 11b95550 pop esi */
  ESI = (pop32());
  /* 11b95551 pop ebx */
  EBX = (pop32());
  /* 11b95552 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b95555 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b95557 call 0x11b98330 */
  push32(0x11b9555cu); f_11b98330();
  /* 11b9555c mov esp, ebp */
  ESP = (EBP);
  /* 11b9555e pop ebp */
  EBP = (pop32());
  /* 11b9555f ret 4 */
  ESPCHK(0x11b95500u, _esp0);
  ESP += 8; return;
}

/* FUN_10005580 @ 0x11b95580 (87 bytes, 35 insns) */
void f_11b95580(void) {
  FTRACE(0x11b95580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b95580 push ebp */
  push32((uint32_t)(EBP));
  /* 11b95581 mov ebp, esp */
  EBP = (ESP);
  /* 11b95583 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b95586 push ebx */
  push32((uint32_t)(EBX));
  /* 11b95587 push esi */
  push32((uint32_t)(ESI));
  /* 11b95588 push edi */
  push32((uint32_t)(EDI));
  /* 11b95589 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9558a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11b9558d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11b95592 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b95597 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b95599 pop ecx */
  ECX = (pop32());
  /* 11b9559a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b9559d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b955a0 call 0x11b91136 */
  push32(0x11b955a5u); f_11b91136();
  /* 11b955a5 mov esi, esp */
  ESI = (ESP);
  /* 11b955a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b955a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b955ac push eax */
  push32((uint32_t)(EAX));
  /* 11b955ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b955b0 mov dl, byte ptr [ecx + 0x10] */
  DL = (r8((uint32_t)(ECX + 0x10)));
  /* 11b955b3 push edx */
  push32((uint32_t)(EDX));
  /* 11b955b4 call dword ptr [0x11bd04cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd04cc))), 0x11b955bau);
  /* 11b955ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b955bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b955bf call 0x11b98330 */
  push32(0x11b955c4u); f_11b98330();
  /* 11b955c4 pop edi */
  EDI = (pop32());
  /* 11b955c5 pop esi */
  ESI = (pop32());
  /* 11b955c6 pop ebx */
  EBX = (pop32());
  /* 11b955c7 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b955ca cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b955cc call 0x11b98330 */
  push32(0x11b955d1u); f_11b98330();
  /* 11b955d1 mov esp, ebp */
  ESP = (EBP);
  /* 11b955d3 pop ebp */
  EBP = (pop32());
  /* 11b955d4 ret 4 */
  ESPCHK(0x11b95580u, _esp0);
  ESP += 8; return;
}

/* FUN_100055f0 @ 0x11b955f0 (90 bytes, 37 insns) */
void f_11b955f0(void) {
  FTRACE(0x11b955f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b955f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b955f1 mov ebp, esp */
  EBP = (ESP);
  /* 11b955f3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b955f6 push ebx */
  push32((uint32_t)(EBX));
  /* 11b955f7 push esi */
  push32((uint32_t)(ESI));
  /* 11b955f8 push edi */
  push32((uint32_t)(EDI));
  /* 11b955f9 push ecx */
  push32((uint32_t)(ECX));
  /* 11b955fa lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11b955fd mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11b95602 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b95607 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b95609 pop ecx */
  ECX = (pop32());
  /* 11b9560a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b9560d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11b95611 mov esi, esp */
  ESI = (ESP);
  /* 11b95613 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b95616 push eax */
  push32((uint32_t)(EAX));
  /* 11b95617 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9561a mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 11b9561d push edx */
  push32((uint32_t)(EDX));
  /* 11b9561e call dword ptr [0x11bd0564] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0564))), 0x11b95624u);
  /* 11b95624 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b95627 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b95629 call 0x11b98330 */
  push32(0x11b9562eu); f_11b98330();
  /* 11b9562e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b95630 jle 0x11b95636 */
  if ((C.zf||C.sf!=C.of)) goto L_11b95636;
  /* 11b95632 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11b95636:;
  /* 11b95636 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11b95639 pop edi */
  EDI = (pop32());
  /* 11b9563a pop esi */
  ESI = (pop32());
  /* 11b9563b pop ebx */
  EBX = (pop32());
  /* 11b9563c add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9563f cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b95641 call 0x11b98330 */
  push32(0x11b95646u); f_11b98330();
  /* 11b95646 mov esp, ebp */
  ESP = (EBP);
  /* 11b95648 pop ebp */
  EBP = (pop32());
  /* 11b95649 ret  */
  ESPCHK(0x11b955f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005660 @ 0x11b95660 (89 bytes, 36 insns) */
void f_11b95660(void) {
  FTRACE(0x11b95660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b95660 push ebp */
  push32((uint32_t)(EBP));
  /* 11b95661 mov ebp, esp */
  EBP = (ESP);
  /* 11b95663 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b95666 push ebx */
  push32((uint32_t)(EBX));
  /* 11b95667 push esi */
  push32((uint32_t)(ESI));
  /* 11b95668 push edi */
  push32((uint32_t)(EDI));
  /* 11b95669 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9566a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11b9566d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11b95672 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b95677 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b95679 pop ecx */
  ECX = (pop32());
  /* 11b9567a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b9567d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11b95681 mov esi, esp */
  ESI = (ESP);
  /* 11b95683 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b95686 push eax */
  push32((uint32_t)(EAX));
  /* 11b95687 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9568a push ecx */
  push32((uint32_t)(ECX));
  /* 11b9568b call dword ptr [0x11bd0564] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0564))), 0x11b95691u);
  /* 11b95691 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b95694 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b95696 call 0x11b98330 */
  push32(0x11b9569bu); f_11b98330();
  /* 11b9569b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9569d jle 0x11b956a3 */
  if ((C.zf||C.sf!=C.of)) goto L_11b956a3;
  /* 11b9569f mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11b956a3:;
  /* 11b956a3 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11b956a6 pop edi */
  EDI = (pop32());
  /* 11b956a7 pop esi */
  ESI = (pop32());
  /* 11b956a8 pop ebx */
  EBX = (pop32());
  /* 11b956a9 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b956ac cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b956ae call 0x11b98330 */
  push32(0x11b956b3u); f_11b98330();
  /* 11b956b3 mov esp, ebp */
  ESP = (EBP);
  /* 11b956b5 pop ebp */
  EBP = (pop32());
  /* 11b956b6 ret 4 */
  ESPCHK(0x11b95660u, _esp0);
  ESP += 8; return;
}

/* FUN_100056d0 @ 0x11b956d0 (47 bytes, 22 insns) */
void f_11b956d0(void) {
  FTRACE(0x11b956d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b956d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b956d1 mov ebp, esp */
  EBP = (ESP);
  /* 11b956d3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b956d6 push ebx */
  push32((uint32_t)(EBX));
  /* 11b956d7 push esi */
  push32((uint32_t)(ESI));
  /* 11b956d8 push edi */
  push32((uint32_t)(EDI));
  /* 11b956d9 push ecx */
  push32((uint32_t)(ECX));
  /* 11b956da lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11b956dd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11b956e2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b956e7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b956e9 pop ecx */
  ECX = (pop32());
  /* 11b956ea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b956ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b956f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b956f3 mov dword ptr [eax + 0x20], ecx */
  w32((uint32_t)(EAX + 0x20), (ECX));
  /* 11b956f6 pop edi */
  EDI = (pop32());
  /* 11b956f7 pop esi */
  ESI = (pop32());
  /* 11b956f8 pop ebx */
  EBX = (pop32());
  /* 11b956f9 mov esp, ebp */
  ESP = (EBP);
  /* 11b956fb pop ebp */
  EBP = (pop32());
  /* 11b956fc ret 4 */
  ESPCHK(0x11b956d0u, _esp0);
  ESP += 8; return;
}

/* FUN_10005710 @ 0x11b95710 (81 bytes, 33 insns) */
void f_11b95710(void) {
  FTRACE(0x11b95710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b95710 push ebp */
  push32((uint32_t)(EBP));
  /* 11b95711 mov ebp, esp */
  EBP = (ESP);
  /* 11b95713 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b95716 push ebx */
  push32((uint32_t)(EBX));
  /* 11b95717 push esi */
  push32((uint32_t)(ESI));
  /* 11b95718 push edi */
  push32((uint32_t)(EDI));
  /* 11b95719 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9571a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11b9571d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11b95722 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b95727 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b95729 pop ecx */
  ECX = (pop32());
  /* 11b9572a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b9572d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b95730 call 0x11b91136 */
  push32(0x11b95735u); f_11b91136();
  /* 11b95735 mov esi, esp */
  ESI = (ESP);
  /* 11b95737 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b95739 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9573c mov cl, byte ptr [eax + 0x10] */
  CL = (r8((uint32_t)(EAX + 0x10)));
  /* 11b9573f push ecx */
  push32((uint32_t)(ECX));
  /* 11b95740 call dword ptr [0x11bd0554] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0554))), 0x11b95746u);
  /* 11b95746 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b95749 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9574b call 0x11b98330 */
  push32(0x11b95750u); f_11b98330();
  /* 11b95750 pop edi */
  EDI = (pop32());
  /* 11b95751 pop esi */
  ESI = (pop32());
  /* 11b95752 pop ebx */
  EBX = (pop32());
  /* 11b95753 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b95756 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b95758 call 0x11b98330 */
  push32(0x11b9575du); f_11b98330();
  /* 11b9575d mov esp, ebp */
  ESP = (EBP);
  /* 11b9575f pop ebp */
  EBP = (pop32());
  /* 11b95760 ret  */
  ESPCHK(0x11b95710u, _esp0);
  ESP += 4; return;
}

/* FUN_10005780 @ 0x11b95780 (99 bytes, 38 insns) */
void f_11b95780(void) {
  FTRACE(0x11b95780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b95780 push ebp */
  push32((uint32_t)(EBP));
  /* 11b95781 mov ebp, esp */
  EBP = (ESP);
  /* 11b95783 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b95786 push ebx */
  push32((uint32_t)(EBX));
  /* 11b95787 push esi */
  push32((uint32_t)(ESI));
  /* 11b95788 push edi */
  push32((uint32_t)(EDI));
  /* 11b95789 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9578a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11b9578d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11b95792 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b95797 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b95799 pop ecx */
  ECX = (pop32());
  /* 11b9579a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b9579d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b957a0 call 0x11b91019 */
  push32(0x11b957a5u); f_11b91019();
  /* 11b957a5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b957aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b957ac je 0x11b957d2 */
  if (C.zf) goto L_11b957d2;
  /* 11b957ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b957b1 call 0x11b911db */
  push32(0x11b957b6u); f_11b911db();
  /* 11b957b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b957b9 call 0x11b91073 */
  push32(0x11b957beu); f_11b91073();
  /* 11b957be cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b957c1 jge 0x11b957d2 */
  if ((C.sf==C.of)) goto L_11b957d2;
  /* 11b957c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b957c6 mov ecx, dword ptr [eax + 0x20] */
  ECX = (r32((uint32_t)(EAX + 0x20)));
  /* 11b957c9 push ecx */
  push32((uint32_t)(ECX));
  /* 11b957ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b957cd call 0x11b91195 */
  push32(0x11b957d2u); f_11b91195();
L_11b957d2:;
  /* 11b957d2 pop edi */
  EDI = (pop32());
  /* 11b957d3 pop esi */
  ESI = (pop32());
  /* 11b957d4 pop ebx */
  EBX = (pop32());
  /* 11b957d5 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b957d8 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b957da call 0x11b98330 */
  push32(0x11b957dfu); f_11b98330();
  /* 11b957df mov esp, ebp */
  ESP = (EBP);
  /* 11b957e1 pop ebp */
  EBP = (pop32());
  /* 11b957e2 ret  */
  ESPCHK(0x11b95780u, _esp0);
  ESP += 4; return;
}

/* FUN_10005800 @ 0x11b95800 (76 bytes, 32 insns) */
void f_11b95800(void) {
  FTRACE(0x11b95800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b95800 push ebp */
  push32((uint32_t)(EBP));
  /* 11b95801 mov ebp, esp */
  EBP = (ESP);
  /* 11b95803 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b95806 push ebx */
  push32((uint32_t)(EBX));
  /* 11b95807 push esi */
  push32((uint32_t)(ESI));
  /* 11b95808 push edi */
  push32((uint32_t)(EDI));
  /* 11b95809 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9580a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11b9580d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11b95812 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b95817 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b95819 pop ecx */
  ECX = (pop32());
  /* 11b9581a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b9581d mov esi, esp */
  ESI = (ESP);
  /* 11b9581f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b95821 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b95824 push eax */
  push32((uint32_t)(EAX));
  /* 11b95825 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b95828 push ecx */
  push32((uint32_t)(ECX));
  /* 11b95829 call dword ptr [0x11bd055c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd055c))), 0x11b9582fu);
  /* 11b9582f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b95832 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b95834 call 0x11b98330 */
  push32(0x11b95839u); f_11b98330();
  /* 11b95839 pop edi */
  EDI = (pop32());
  /* 11b9583a pop esi */
  ESI = (pop32());
  /* 11b9583b pop ebx */
  EBX = (pop32());
  /* 11b9583c add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9583f cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b95841 call 0x11b98330 */
  push32(0x11b95846u); f_11b98330();
  /* 11b95846 mov esp, ebp */
  ESP = (EBP);
  /* 11b95848 pop ebp */
  EBP = (pop32());
  /* 11b95849 ret 4 */
  ESPCHK(0x11b95800u, _esp0);
  ESP += 8; return;
}

/* FUN_10005860 @ 0x11b95860 (95 bytes, 37 insns) */
void f_11b95860(void) {
  FTRACE(0x11b95860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b95860 push ebp */
  push32((uint32_t)(EBP));
  /* 11b95861 mov ebp, esp */
  EBP = (ESP);
  /* 11b95863 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b95866 push ebx */
  push32((uint32_t)(EBX));
  /* 11b95867 push esi */
  push32((uint32_t)(ESI));
  /* 11b95868 push edi */
  push32((uint32_t)(EDI));
  /* 11b95869 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9586a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11b9586d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11b95872 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b95877 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b95879 pop ecx */
  ECX = (pop32());
  /* 11b9587a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b9587d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11b95881 mov esi, esp */
  ESI = (ESP);
  /* 11b95883 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b95885 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 11b9588a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9588d call 0x11b9121c */
  push32(0x11b95892u); f_11b9121c();
  /* 11b95892 push eax */
  push32((uint32_t)(EAX));
  /* 11b95893 call dword ptr [0x11bd054c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd054c))), 0x11b95899u);
  /* 11b95899 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9589c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9589e call 0x11b98330 */
  push32(0x11b958a3u); f_11b98330();
  /* 11b958a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b958a5 jle 0x11b958ab */
  if ((C.zf||C.sf!=C.of)) goto L_11b958ab;
  /* 11b958a7 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11b958ab:;
  /* 11b958ab mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11b958ae pop edi */
  EDI = (pop32());
  /* 11b958af pop esi */
  ESI = (pop32());
  /* 11b958b0 pop ebx */
  EBX = (pop32());
  /* 11b958b1 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b958b4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b958b6 call 0x11b98330 */
  push32(0x11b958bbu); f_11b98330();
  /* 11b958bb mov esp, ebp */
  ESP = (EBP);
  /* 11b958bd pop ebp */
  EBP = (pop32());
  /* 11b958be ret  */
  ESPCHK(0x11b95860u, _esp0);
  ESP += 4; return;
}

/* FUN_100058e0 @ 0x11b958e0 (47 bytes, 22 insns) */
void f_11b958e0(void) {
  FTRACE(0x11b958e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b958e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b958e1 mov ebp, esp */
  EBP = (ESP);
  /* 11b958e3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b958e6 push ebx */
  push32((uint32_t)(EBX));
  /* 11b958e7 push esi */
  push32((uint32_t)(ESI));
  /* 11b958e8 push edi */
  push32((uint32_t)(EDI));
  /* 11b958e9 push ecx */
  push32((uint32_t)(ECX));
  /* 11b958ea lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11b958ed mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11b958f2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b958f7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b958f9 pop ecx */
  ECX = (pop32());
  /* 11b958fa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b958fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b95900 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b95903 mov dword ptr [eax + 0x2c], ecx */
  w32((uint32_t)(EAX + 0x2c), (ECX));
  /* 11b95906 pop edi */
  EDI = (pop32());
  /* 11b95907 pop esi */
  ESI = (pop32());
  /* 11b95908 pop ebx */
  EBX = (pop32());
  /* 11b95909 mov esp, ebp */
  ESP = (EBP);
  /* 11b9590b pop ebp */
  EBP = (pop32());
  /* 11b9590c ret 4 */
  ESPCHK(0x11b958e0u, _esp0);
  ESP += 8; return;
}

/* FUN_10005920 @ 0x11b95920 (64 bytes, 27 insns) */
void f_11b95920(void) {
  FTRACE(0x11b95920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b95920 push ebp */
  push32((uint32_t)(EBP));
  /* 11b95921 mov ebp, esp */
  EBP = (ESP);
  /* 11b95923 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b95926 push ebx */
  push32((uint32_t)(EBX));
  /* 11b95927 push esi */
  push32((uint32_t)(ESI));
  /* 11b95928 push edi */
  push32((uint32_t)(EDI));
  /* 11b95929 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9592a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11b9592d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11b95932 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b95937 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b95939 pop ecx */
  ECX = (pop32());
  /* 11b9593a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b9593d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b95940 call 0x11b9117c */
  push32(0x11b95945u); f_11b9117c();
  /* 11b95945 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b95948 mov byte ptr [eax + 0x2c], 1 */
  w8((uint32_t)(EAX + 0x2c), (0x1u));
  /* 11b9594c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9594f pop edi */
  EDI = (pop32());
  /* 11b95950 pop esi */
  ESI = (pop32());
  /* 11b95951 pop ebx */
  EBX = (pop32());
  /* 11b95952 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b95955 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b95957 call 0x11b98330 */
  push32(0x11b9595cu); f_11b98330();
  /* 11b9595c mov esp, ebp */
  ESP = (EBP);
  /* 11b9595e pop ebp */
  EBP = (pop32());
  /* 11b9595f ret  */
  ESPCHK(0x11b95920u, _esp0);
  ESP += 4; return;
}

/* FUN_10005970 @ 0x11b95970 (57 bytes, 25 insns) */
void f_11b95970(void) {
  FTRACE(0x11b95970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b95970 push ebp */
  push32((uint32_t)(EBP));
  /* 11b95971 mov ebp, esp */
  EBP = (ESP);
  /* 11b95973 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b95976 push ebx */
  push32((uint32_t)(EBX));
  /* 11b95977 push esi */
  push32((uint32_t)(ESI));
  /* 11b95978 push edi */
  push32((uint32_t)(EDI));
  /* 11b95979 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9597a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11b9597d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11b95982 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b95987 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b95989 pop ecx */
  ECX = (pop32());
  /* 11b9598a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b9598d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b95990 call 0x11b911e5 */
  push32(0x11b95995u); f_11b911e5();
  /* 11b95995 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b95998 pop edi */
  EDI = (pop32());
  /* 11b95999 pop esi */
  ESI = (pop32());
  /* 11b9599a pop ebx */
  EBX = (pop32());
  /* 11b9599b add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9599e cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b959a0 call 0x11b98330 */
  push32(0x11b959a5u); f_11b98330();
  /* 11b959a5 mov esp, ebp */
  ESP = (EBP);
  /* 11b959a7 pop ebp */
  EBP = (pop32());
  /* 11b959a8 ret  */
  ESPCHK(0x11b95970u, _esp0);
  ESP += 4; return;
}

/* FUN_100059c0 @ 0x11b959c0 (56 bytes, 25 insns) */
void f_11b959c0(void) {
  FTRACE(0x11b959c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b959c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b959c1 mov ebp, esp */
  EBP = (ESP);
  /* 11b959c3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b959c6 push ebx */
  push32((uint32_t)(EBX));
  /* 11b959c7 push esi */
  push32((uint32_t)(ESI));
  /* 11b959c8 push edi */
  push32((uint32_t)(EDI));
  /* 11b959c9 push ecx */
  push32((uint32_t)(ECX));
  /* 11b959ca lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11b959cd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11b959d2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b959d7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b959d9 pop ecx */
  ECX = (pop32());
  /* 11b959da mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b959dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b959e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b959e3 mov dword ptr [eax + 0x24], ecx */
  w32((uint32_t)(EAX + 0x24), (ECX));
  /* 11b959e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b959e9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b959ec mov dword ptr [edx + 0x28], eax */
  w32((uint32_t)(EDX + 0x28), (EAX));
  /* 11b959ef pop edi */
  EDI = (pop32());
  /* 11b959f0 pop esi */
  ESI = (pop32());
  /* 11b959f1 pop ebx */
  EBX = (pop32());
  /* 11b959f2 mov esp, ebp */
  ESP = (EBP);
  /* 11b959f4 pop ebp */
  EBP = (pop32());
  /* 11b959f5 ret 8 */
  ESPCHK(0x11b959c0u, _esp0);
  ESP += 12; return;
}

/* FUN_10005a10 @ 0x11b95a10 (566 bytes, 177 insns) [1 switch table(s)] */
void f_11b95a10(void) {
  FTRACE(0x11b95a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b95a10 push ebp */
  push32((uint32_t)(EBP));
  /* 11b95a11 mov ebp, esp */
  EBP = (ESP);
  /* 11b95a13 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b95a16 push ebx */
  push32((uint32_t)(EBX));
  /* 11b95a17 push esi */
  push32((uint32_t)(ESI));
  /* 11b95a18 push edi */
  push32((uint32_t)(EDI));
  /* 11b95a19 push ecx */
  push32((uint32_t)(ECX));
  /* 11b95a1a lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 11b95a1d mov ecx, 0x13 */
  ECX = (0x13u);
  /* 11b95a22 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b95a27 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b95a29 pop ecx */
  ECX = (pop32());
  /* 11b95a2a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b95a2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b95a30 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b95a32 mov cl, byte ptr [eax + 0x2c] */
  CL = (r8((uint32_t)(EAX + 0x2c)));
  /* 11b95a35 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b95a37 je 0x11b95c35 */
  if (C.zf) goto L_11b95c35;
  /* 11b95a3d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b95a40 call 0x11b91019 */
  push32(0x11b95a45u); f_11b91019();
  /* 11b95a45 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b95a4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b95a4c je 0x11b95c35 */
  if (C.zf) goto L_11b95c35;
  /* 11b95a52 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b95a55 cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b95a59 je 0x11b95c35 */
  if (C.zf) goto L_11b95c35;
  /* 11b95a5f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b95a62 cmp dword ptr [eax + 0x10], 6 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b95a66 je 0x11b95aad */
  if (C.zf) goto L_11b95aad;
  /* 11b95a68 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b95a6b call 0x11b91073 */
  push32(0x11b95a70u); f_11b91073();
  /* 11b95a70 cmp eax, 0x32 */
  { uint32_t _a=(EAX),_b=(0x32u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b95a73 jge 0x11b95a7d */
  if ((C.sf==C.of)) goto L_11b95a7d;
  /* 11b95a75 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b95a78 call 0x11b911ef */
  push32(0x11b95a7du); f_11b911ef();
L_11b95a7d:;
  /* 11b95a7d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b95a80 call 0x11b911f4 */
  push32(0x11b95a85u); f_11b911f4();
  /* 11b95a85 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b95a8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b95a8c je 0x11b95aa8 */
  if (C.zf) goto L_11b95aa8;
  /* 11b95a8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b95a91 push ecx */
  push32((uint32_t)(ECX));
  /* 11b95a92 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b95a95 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 11b95a98 push eax */
  push32((uint32_t)(EAX));
  /* 11b95a99 call 0x11b91217 */
  push32(0x11b95a9eu); f_11b91217();
  /* 11b95a9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b95aa1 mov ecx, eax */
  ECX = (EAX);
  /* 11b95aa3 call 0x11b91177 */
  push32(0x11b95aa8u); f_11b91177();
L_11b95aa8:;
  /* 11b95aa8 jmp 0x11b95c35 */
  goto L_11b95c35;
L_11b95aad:;
  /* 11b95aad mov esi, esp */
  ESI = (ESP);
  /* 11b95aaf push 0 */
  push32((uint32_t)(0x0u));
  /* 11b95ab1 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 11b95ab6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b95ab9 call 0x11b9121c */
  push32(0x11b95abeu); f_11b9121c();
  /* 11b95abe push eax */
  push32((uint32_t)(EAX));
  /* 11b95abf call dword ptr [0x11bd054c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd054c))), 0x11b95ac5u);
  /* 11b95ac5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b95ac8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b95aca call 0x11b98330 */
  push32(0x11b95acfu); f_11b98330();
  /* 11b95acf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b95ad1 jle 0x11b95c35 */
  if ((C.zf||C.sf!=C.of)) goto L_11b95c35;
  /* 11b95ad7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b95ada cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b95ade je 0x11b95c35 */
  if (C.zf) goto L_11b95c35;
  /* 11b95ae4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b95ae7 mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 11b95aea mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b95aed cmp dword ptr [ebp - 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b95af1 ja 0x11b95bc2 */
  if ((!C.cf&&!C.zf)) goto L_11b95bc2;
  /* 11b95af7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b95afa jmp dword ptr [ecx*4 + 0x11b95c46] */
  switch (ECX) {
    case 0: goto L_11b95b01;
    case 1: goto L_11b95b24;
    case 2: goto L_11b95b44;
    case 3: goto L_11b95b64;
    case 4: goto L_11b95b84;
    case 5: goto L_11b95ba4;
    default: x86_unimpl("switch@0x11b95afa out of table"); return;
  }
L_11b95b01:;
  /* 11b95b01 mov esi, esp */
  ESI = (ESP);
  /* 11b95b03 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b95b06 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 11b95b09 push eax */
  push32((uint32_t)(EAX));
  /* 11b95b0a push 0x11bc8300 */
  push32((uint32_t)(0x11bc8300u));
  /* 11b95b0f call dword ptr [0x11bd04c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd04c0))), 0x11b95b15u);
  /* 11b95b15 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b95b18 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b95b1a call 0x11b98330 */
  push32(0x11b95b1fu); f_11b98330();
  /* 11b95b1f jmp 0x11b95bc2 */
  goto L_11b95bc2;
L_11b95b24:;
  /* 11b95b24 mov esi, esp */
  ESI = (ESP);
  /* 11b95b26 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b95b29 mov edx, dword ptr [ecx + 0x28] */
  EDX = (r32((uint32_t)(ECX + 0x28)));
  /* 11b95b2c push edx */
  push32((uint32_t)(EDX));
  /* 11b95b2d push 0x11bc82f4 */
  push32((uint32_t)(0x11bc82f4u));
  /* 11b95b32 call dword ptr [0x11bd04c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd04c0))), 0x11b95b38u);
  /* 11b95b38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b95b3b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b95b3d call 0x11b98330 */
  push32(0x11b95b42u); f_11b98330();
  /* 11b95b42 jmp 0x11b95bc2 */
  goto L_11b95bc2;
L_11b95b44:;
  /* 11b95b44 mov esi, esp */
  ESI = (ESP);
  /* 11b95b46 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b95b49 mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 11b95b4c push ecx */
  push32((uint32_t)(ECX));
  /* 11b95b4d push 0x11bc82e8 */
  push32((uint32_t)(0x11bc82e8u));
  /* 11b95b52 call dword ptr [0x11bd04c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd04c0))), 0x11b95b58u);
  /* 11b95b58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b95b5b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b95b5d call 0x11b98330 */
  push32(0x11b95b62u); f_11b98330();
  /* 11b95b62 jmp 0x11b95bc2 */
  goto L_11b95bc2;
L_11b95b64:;
  /* 11b95b64 mov esi, esp */
  ESI = (ESP);
  /* 11b95b66 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b95b69 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 11b95b6c push eax */
  push32((uint32_t)(EAX));
  /* 11b95b6d push 0x11bc82dc */
  push32((uint32_t)(0x11bc82dcu));
  /* 11b95b72 call dword ptr [0x11bd04c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd04c0))), 0x11b95b78u);
  /* 11b95b78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b95b7b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b95b7d call 0x11b98330 */
  push32(0x11b95b82u); f_11b98330();
  /* 11b95b82 jmp 0x11b95bc2 */
  goto L_11b95bc2;
L_11b95b84:;
  /* 11b95b84 mov esi, esp */
  ESI = (ESP);
  /* 11b95b86 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b95b89 mov edx, dword ptr [ecx + 0x28] */
  EDX = (r32((uint32_t)(ECX + 0x28)));
  /* 11b95b8c push edx */
  push32((uint32_t)(EDX));
  /* 11b95b8d push 0x11bc82d0 */
  push32((uint32_t)(0x11bc82d0u));
  /* 11b95b92 call dword ptr [0x11bd04c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd04c0))), 0x11b95b98u);
  /* 11b95b98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b95b9b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b95b9d call 0x11b98330 */
  push32(0x11b95ba2u); f_11b98330();
  /* 11b95ba2 jmp 0x11b95bc2 */
  goto L_11b95bc2;
L_11b95ba4:;
  /* 11b95ba4 mov esi, esp */
  ESI = (ESP);
  /* 11b95ba6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b95ba9 mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 11b95bac push ecx */
  push32((uint32_t)(ECX));
  /* 11b95bad push 0x11bc82c4 */
  push32((uint32_t)(0x11bc82c4u));
  /* 11b95bb2 call dword ptr [0x11bd04c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd04c0))), 0x11b95bb8u);
  /* 11b95bb8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b95bbb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b95bbd call 0x11b98330 */
  push32(0x11b95bc2u); f_11b98330();
L_11b95bc2:;
  /* 11b95bc2 mov esi, esp */
  ESI = (ESP);
  /* 11b95bc4 push 0x11bc82b4 */
  push32((uint32_t)(0x11bc82b4u));
  /* 11b95bc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b95bcb push 0x11bc82ac */
  push32((uint32_t)(0x11bc82acu));
  /* 11b95bd0 push 7 */
  push32((uint32_t)(0x7u));
  /* 11b95bd2 call dword ptr [0x11bd04c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd04c4))), 0x11b95bd8u);
  /* 11b95bd8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b95bdb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b95bdd call 0x11b98330 */
  push32(0x11b95be2u); f_11b98330();
  /* 11b95be2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b95be5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b95be9 je 0x11b95bf3 */
  if (C.zf) goto L_11b95bf3;
  /* 11b95beb cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b95bef je 0x11b95bff */
  if (C.zf) goto L_11b95bff;
  /* 11b95bf1 jmp 0x11b95c07 */
  goto L_11b95c07;
L_11b95bf3:;
  /* 11b95bf3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b95bf5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b95bf8 call 0x11b910d2 */
  push32(0x11b95bfdu); f_11b910d2();
  /* 11b95bfd jmp 0x11b95c07 */
  goto L_11b95c07;
L_11b95bff:;
  /* 11b95bff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b95c02 call 0x11b91104 */
  push32(0x11b95c07u); f_11b91104();
L_11b95c07:;
  /* 11b95c07 mov esi, esp */
  ESI = (ESP);
  /* 11b95c09 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b95c0c mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 11b95c0f push eax */
  push32((uint32_t)(EAX));
  /* 11b95c10 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b95c13 mov dl, byte ptr [ecx + 0x24] */
  DL = (r8((uint32_t)(ECX + 0x24)));
  /* 11b95c16 push edx */
  push32((uint32_t)(EDX));
  /* 11b95c17 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b95c19 call dword ptr [0x11bd04c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd04c8))), 0x11b95c1fu);
  /* 11b95c1f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b95c22 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b95c24 call 0x11b98330 */
  push32(0x11b95c29u); f_11b98330();
  /* 11b95c29 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b95c2b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b95c2d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b95c30 call 0x11b91159 */
  push32(0x11b95c35u); f_11b91159();
L_11b95c35:;
  /* 11b95c35 pop edi */
  EDI = (pop32());
  /* 11b95c36 pop esi */
  ESI = (pop32());
  /* 11b95c37 pop ebx */
  EBX = (pop32());
  /* 11b95c38 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b95c3b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b95c3d call 0x11b98330 */
  push32(0x11b95c42u); f_11b98330();
  /* 11b95c42 mov esp, ebp */
  ESP = (EBP);
  /* 11b95c44 pop ebp */
  EBP = (pop32());
  /* 11b95c45 ret  */
  ESPCHK(0x11b95a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d00 @ 0x11b95d00 (112 bytes, 43 insns) */
void f_11b95d00(void) {
  FTRACE(0x11b95d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b95d00 push ebp */
  push32((uint32_t)(EBP));
  /* 11b95d01 mov ebp, esp */
  EBP = (ESP);
  /* 11b95d03 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b95d06 push ebx */
  push32((uint32_t)(EBX));
  /* 11b95d07 push esi */
  push32((uint32_t)(ESI));
  /* 11b95d08 push edi */
  push32((uint32_t)(EDI));
  /* 11b95d09 push ecx */
  push32((uint32_t)(ECX));
  /* 11b95d0a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11b95d0d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11b95d12 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b95d17 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b95d19 pop ecx */
  ECX = (pop32());
  /* 11b95d1a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b95d1d push 6 */
  push32((uint32_t)(0x6u));
  /* 11b95d1f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b95d22 call 0x11b910d2 */
  push32(0x11b95d27u); f_11b910d2();
  /* 11b95d27 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b95d2a call 0x11b91136 */
  push32(0x11b95d2fu); f_11b91136();
  /* 11b95d2f mov esi, esp */
  ESI = (ESP);
  /* 11b95d31 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b95d33 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b95d35 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11b95d37 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b95d3a call 0x11b9121c */
  push32(0x11b95d3fu); f_11b9121c();
  /* 11b95d3f push eax */
  push32((uint32_t)(EAX));
  /* 11b95d40 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b95d43 mov cl, byte ptr [eax + 0x10] */
  CL = (r8((uint32_t)(EAX + 0x10)));
  /* 11b95d46 push ecx */
  push32((uint32_t)(ECX));
  /* 11b95d47 call dword ptr [0x11bd0560] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0560))), 0x11b95d4du);
  /* 11b95d4d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b95d50 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b95d52 call 0x11b98330 */
  push32(0x11b95d57u); f_11b98330();
  /* 11b95d57 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b95d5a call 0x11b9120d */
  push32(0x11b95d5fu); f_11b9120d();
  /* 11b95d5f pop edi */
  EDI = (pop32());
  /* 11b95d60 pop esi */
  ESI = (pop32());
  /* 11b95d61 pop ebx */
  EBX = (pop32());
  /* 11b95d62 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b95d65 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b95d67 call 0x11b98330 */
  push32(0x11b95d6cu); f_11b98330();
  /* 11b95d6c mov esp, ebp */
  ESP = (EBP);
  /* 11b95d6e pop ebp */
  EBP = (pop32());
  /* 11b95d6f ret  */
  ESPCHK(0x11b95d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d90 @ 0x11b95d90 (75 bytes, 32 insns) */
void f_11b95d90(void) {
  FTRACE(0x11b95d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b95d90 push ebp */
  push32((uint32_t)(EBP));
  /* 11b95d91 mov ebp, esp */
  EBP = (ESP);
  /* 11b95d93 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b95d96 push ebx */
  push32((uint32_t)(EBX));
  /* 11b95d97 push esi */
  push32((uint32_t)(ESI));
  /* 11b95d98 push edi */
  push32((uint32_t)(EDI));
  /* 11b95d99 push ecx */
  push32((uint32_t)(ECX));
  /* 11b95d9a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11b95d9d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11b95da2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b95da7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b95da9 pop ecx */
  ECX = (pop32());
  /* 11b95daa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b95dad mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b95db0 push eax */
  push32((uint32_t)(EAX));
  /* 11b95db1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b95db4 push ecx */
  push32((uint32_t)(ECX));
  /* 11b95db5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b95db8 push edx */
  push32((uint32_t)(EDX));
  /* 11b95db9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b95dbc call 0x11b9100f */
  push32(0x11b95dc1u); f_11b9100f();
  /* 11b95dc1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b95dc4 mov byte ptr [eax + 0x2c], 1 */
  w8((uint32_t)(EAX + 0x2c), (0x1u));
  /* 11b95dc8 pop edi */
  EDI = (pop32());
  /* 11b95dc9 pop esi */
  ESI = (pop32());
  /* 11b95dca pop ebx */
  EBX = (pop32());
  /* 11b95dcb add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b95dce cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b95dd0 call 0x11b98330 */
  push32(0x11b95dd5u); f_11b98330();
  /* 11b95dd5 mov esp, ebp */
  ESP = (EBP);
  /* 11b95dd7 pop ebp */
  EBP = (pop32());
  /* 11b95dd8 ret 0xc */
  ESPCHK(0x11b95d90u, _esp0);
  ESP += 16; return;
}

/* FUN_10005df0 @ 0x11b95df0 (95 bytes, 37 insns) */
void f_11b95df0(void) {
  FTRACE(0x11b95df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b95df0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b95df1 mov ebp, esp */
  EBP = (ESP);
  /* 11b95df3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b95df6 push ebx */
  push32((uint32_t)(EBX));
  /* 11b95df7 push esi */
  push32((uint32_t)(ESI));
  /* 11b95df8 push edi */
  push32((uint32_t)(EDI));
  /* 11b95df9 push ecx */
  push32((uint32_t)(ECX));
  /* 11b95dfa lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11b95dfd mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11b95e02 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b95e07 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b95e09 pop ecx */
  ECX = (pop32());
  /* 11b95e0a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b95e0d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11b95e11 mov esi, esp */
  ESI = (ESP);
  /* 11b95e13 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b95e15 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 11b95e1a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b95e1d call 0x11b9121c */
  push32(0x11b95e22u); f_11b9121c();
  /* 11b95e22 push eax */
  push32((uint32_t)(EAX));
  /* 11b95e23 call dword ptr [0x11bd054c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd054c))), 0x11b95e29u);
  /* 11b95e29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b95e2c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b95e2e call 0x11b98330 */
  push32(0x11b95e33u); f_11b98330();
  /* 11b95e33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b95e35 jle 0x11b95e3b */
  if ((C.zf||C.sf!=C.of)) goto L_11b95e3b;
  /* 11b95e37 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11b95e3b:;
  /* 11b95e3b mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11b95e3e pop edi */
  EDI = (pop32());
  /* 11b95e3f pop esi */
  ESI = (pop32());
  /* 11b95e40 pop ebx */
  EBX = (pop32());
  /* 11b95e41 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b95e44 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b95e46 call 0x11b98330 */
  push32(0x11b95e4bu); f_11b98330();
  /* 11b95e4b mov esp, ebp */
  ESP = (EBP);
  /* 11b95e4d pop ebp */
  EBP = (pop32());
  /* 11b95e4e ret  */
  ESPCHK(0x11b95df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e70 @ 0x11b95e70 (78 bytes, 28 insns) */
void f_11b95e70(void) {
  FTRACE(0x11b95e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b95e70 push ebp */
  push32((uint32_t)(EBP));
  /* 11b95e71 mov ebp, esp */
  EBP = (ESP);
  /* 11b95e73 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b95e76 push ebx */
  push32((uint32_t)(EBX));
  /* 11b95e77 push esi */
  push32((uint32_t)(ESI));
  /* 11b95e78 push edi */
  push32((uint32_t)(EDI));
  /* 11b95e79 push ecx */
  push32((uint32_t)(ECX));
  /* 11b95e7a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11b95e7d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11b95e82 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b95e87 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b95e89 pop ecx */
  ECX = (pop32());
  /* 11b95e8a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b95e8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b95e90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b95e93 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11b95e96 mov edx, dword ptr [0x11bce2f4] */
  EDX = (r32((uint32_t)(0x11bce2f4)));
  /* 11b95e9c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b95e9f mov dword ptr [edx*4 + 0x11bce2a4], eax */
  w32((uint32_t)(EDX*4 + 0x11bce2a4), (EAX));
  /* 11b95ea6 mov ecx, dword ptr [0x11bce2f4] */
  ECX = (r32((uint32_t)(0x11bce2f4)));
  /* 11b95eac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b95eaf mov dword ptr [0x11bce2f4], ecx */
  w32((uint32_t)(0x11bce2f4), (ECX));
  /* 11b95eb5 pop edi */
  EDI = (pop32());
  /* 11b95eb6 pop esi */
  ESI = (pop32());
  /* 11b95eb7 pop ebx */
  EBX = (pop32());
  /* 11b95eb8 mov esp, ebp */
  ESP = (EBP);
  /* 11b95eba pop ebp */
  EBP = (pop32());
  /* 11b95ebb ret 4 */
  ESPCHK(0x11b95e70u, _esp0);
  ESP += 8; return;
}

/* FUN_10005ee0 @ 0x11b95ee0 (128 bytes, 44 insns) */
void f_11b95ee0(void) {
  FTRACE(0x11b95ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b95ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b95ee1 mov ebp, esp */
  EBP = (ESP);
  /* 11b95ee3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b95ee6 push ebx */
  push32((uint32_t)(EBX));
  /* 11b95ee7 push esi */
  push32((uint32_t)(ESI));
  /* 11b95ee8 push edi */
  push32((uint32_t)(EDI));
  /* 11b95ee9 lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11b95eec mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11b95ef1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b95ef6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b95ef8 mov eax, dword ptr [0x11bce2a4] */
  EAX = (r32((uint32_t)(0x11bce2a4)));
  /* 11b95efd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b95f00 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11b95f07 jmp 0x11b95f12 */
  goto L_11b95f12;
L_11b95f09:;
  /* 11b95f09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b95f0c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b95f0f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11b95f12:;
  /* 11b95f12 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b95f15 cmp edx, dword ptr [0x11bce2f4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11bce2f4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b95f1b jge 0x11b95f4c */
  if ((C.sf==C.of)) goto L_11b95f4c;
  /* 11b95f1d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b95f20 mov ecx, dword ptr [eax*4 + 0x11bce2a4] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11bce2a4)));
  /* 11b95f27 call 0x11b910e1 */
  push32(0x11b95f2cu); f_11b910e1();
  /* 11b95f2c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b95f2e mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 11b95f31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b95f34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b95f36 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11b95f39 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b95f3b jne 0x11b95f4a */
  if (!C.zf) goto L_11b95f4a;
  /* 11b95f3d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b95f40 mov edx, dword ptr [ecx*4 + 0x11bce2a4] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11bce2a4)));
  /* 11b95f47 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11b95f4a:;
  /* 11b95f4a jmp 0x11b95f09 */
  goto L_11b95f09;
L_11b95f4c:;
  /* 11b95f4c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b95f4f pop edi */
  EDI = (pop32());
  /* 11b95f50 pop esi */
  ESI = (pop32());
  /* 11b95f51 pop ebx */
  EBX = (pop32());
  /* 11b95f52 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b95f55 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b95f57 call 0x11b98330 */
  push32(0x11b95f5cu); f_11b98330();
  /* 11b95f5c mov esp, ebp */
  ESP = (EBP);
  /* 11b95f5e pop ebp */
  EBP = (pop32());
  /* 11b95f5f ret  */
  ESPCHK(0x11b95ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f80 @ 0x11b95f80 (47 bytes, 22 insns) */
void f_11b95f80(void) {
  FTRACE(0x11b95f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b95f80 push ebp */
  push32((uint32_t)(EBP));
  /* 11b95f81 mov ebp, esp */
  EBP = (ESP);
  /* 11b95f83 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b95f86 push ebx */
  push32((uint32_t)(EBX));
  /* 11b95f87 push esi */
  push32((uint32_t)(ESI));
  /* 11b95f88 push edi */
  push32((uint32_t)(EDI));
  /* 11b95f89 push ecx */
  push32((uint32_t)(ECX));
  /* 11b95f8a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11b95f8d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11b95f92 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b95f97 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b95f99 pop ecx */
  ECX = (pop32());
  /* 11b95f9a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b95f9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b95fa0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b95fa3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11b95fa6 pop edi */
  EDI = (pop32());
  /* 11b95fa7 pop esi */
  ESI = (pop32());
  /* 11b95fa8 pop ebx */
  EBX = (pop32());
  /* 11b95fa9 mov esp, ebp */
  ESP = (EBP);
  /* 11b95fab pop ebp */
  EBP = (pop32());
  /* 11b95fac ret 4 */
  ESPCHK(0x11b95f80u, _esp0);
  ESP += 8; return;
}

/* FUN_10005fc0 @ 0x11b95fc0 (47 bytes, 22 insns) */
void f_11b95fc0(void) {
  FTRACE(0x11b95fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b95fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b95fc1 mov ebp, esp */
  EBP = (ESP);
  /* 11b95fc3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b95fc6 push ebx */
  push32((uint32_t)(EBX));
  /* 11b95fc7 push esi */
  push32((uint32_t)(ESI));
  /* 11b95fc8 push edi */
  push32((uint32_t)(EDI));
  /* 11b95fc9 push ecx */
  push32((uint32_t)(ECX));
  /* 11b95fca lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11b95fcd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11b95fd2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b95fd7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b95fd9 pop ecx */
  ECX = (pop32());
  /* 11b95fda mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b95fdd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b95fe0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b95fe3 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11b95fe6 pop edi */
  EDI = (pop32());
  /* 11b95fe7 pop esi */
  ESI = (pop32());
  /* 11b95fe8 pop ebx */
  EBX = (pop32());
  /* 11b95fe9 mov esp, ebp */
  ESP = (EBP);
  /* 11b95feb pop ebp */
  EBP = (pop32());
  /* 11b95fec ret 4 */
  ESPCHK(0x11b95fc0u, _esp0);
  ESP += 8; return;
}

/* FUN_10006000 @ 0x11b96000 (47 bytes, 22 insns) */
void f_11b96000(void) {
  FTRACE(0x11b96000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b96000 push ebp */
  push32((uint32_t)(EBP));
  /* 11b96001 mov ebp, esp */
  EBP = (ESP);
  /* 11b96003 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b96006 push ebx */
  push32((uint32_t)(EBX));
  /* 11b96007 push esi */
  push32((uint32_t)(ESI));
  /* 11b96008 push edi */
  push32((uint32_t)(EDI));
  /* 11b96009 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9600a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11b9600d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11b96012 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b96017 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b96019 pop ecx */
  ECX = (pop32());
  /* 11b9601a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b9601d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96020 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b96023 mov dword ptr [eax + 0x10], ecx */
  w32((uint32_t)(EAX + 0x10), (ECX));
  /* 11b96026 pop edi */
  EDI = (pop32());
  /* 11b96027 pop esi */
  ESI = (pop32());
  /* 11b96028 pop ebx */
  EBX = (pop32());
  /* 11b96029 mov esp, ebp */
  ESP = (EBP);
  /* 11b9602b pop ebp */
  EBP = (pop32());
  /* 11b9602c ret 4 */
  ESPCHK(0x11b96000u, _esp0);
  ESP += 8; return;
}

/* FUN_10006040 @ 0x11b96040 (85 bytes, 35 insns) */
void f_11b96040(void) {
  FTRACE(0x11b96040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b96040 push ebp */
  push32((uint32_t)(EBP));
  /* 11b96041 mov ebp, esp */
  EBP = (ESP);
  /* 11b96043 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b96046 push ebx */
  push32((uint32_t)(EBX));
  /* 11b96047 push esi */
  push32((uint32_t)(ESI));
  /* 11b96048 push edi */
  push32((uint32_t)(EDI));
  /* 11b96049 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9604a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11b9604d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11b96052 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b96057 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b96059 pop ecx */
  ECX = (pop32());
  /* 11b9605a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b9605d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96060 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11b96063 push ecx */
  push32((uint32_t)(ECX));
  /* 11b96064 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96067 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11b9606a push eax */
  push32((uint32_t)(EAX));
  /* 11b9606b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9606e call 0x11b91159 */
  push32(0x11b96073u); f_11b91159();
  /* 11b96073 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96076 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11b96079 push edx */
  push32((uint32_t)(EDX));
  /* 11b9607a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9607d call 0x11b91195 */
  push32(0x11b96082u); f_11b91195();
  /* 11b96082 pop edi */
  EDI = (pop32());
  /* 11b96083 pop esi */
  ESI = (pop32());
  /* 11b96084 pop ebx */
  EBX = (pop32());
  /* 11b96085 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96088 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9608a call 0x11b98330 */
  push32(0x11b9608fu); f_11b98330();
  /* 11b9608f mov esp, ebp */
  ESP = (EBP);
  /* 11b96091 pop ebp */
  EBP = (pop32());
  /* 11b96092 ret 4 */
  ESPCHK(0x11b96040u, _esp0);
  ESP += 8; return;
}

/* FUN_100060b0 @ 0x11b960b0 (42 bytes, 21 insns) */
void f_11b960b0(void) {
  FTRACE(0x11b960b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b960b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b960b1 mov ebp, esp */
  EBP = (ESP);
  /* 11b960b3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b960b6 push ebx */
  push32((uint32_t)(EBX));
  /* 11b960b7 push esi */
  push32((uint32_t)(ESI));
  /* 11b960b8 push edi */
  push32((uint32_t)(EDI));
  /* 11b960b9 push ecx */
  push32((uint32_t)(ECX));
  /* 11b960ba lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11b960bd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11b960c2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b960c7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b960c9 pop ecx */
  ECX = (pop32());
  /* 11b960ca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b960cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b960d0 mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b960d3 pop edi */
  EDI = (pop32());
  /* 11b960d4 pop esi */
  ESI = (pop32());
  /* 11b960d5 pop ebx */
  EBX = (pop32());
  /* 11b960d6 mov esp, ebp */
  ESP = (EBP);
  /* 11b960d8 pop ebp */
  EBP = (pop32());
  /* 11b960d9 ret  */
  ESPCHK(0x11b960b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100060f0 @ 0x11b960f0 (39 bytes, 20 insns) */
void f_11b960f0(void) {
  FTRACE(0x11b960f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b960f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b960f1 mov ebp, esp */
  EBP = (ESP);
  /* 11b960f3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b960f6 push ebx */
  push32((uint32_t)(EBX));
  /* 11b960f7 push esi */
  push32((uint32_t)(ESI));
  /* 11b960f8 push edi */
  push32((uint32_t)(EDI));
  /* 11b960f9 push ecx */
  push32((uint32_t)(ECX));
  /* 11b960fa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11b960fd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11b96102 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b96107 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b96109 pop ecx */
  ECX = (pop32());
  /* 11b9610a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b9610d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96110 pop edi */
  EDI = (pop32());
  /* 11b96111 pop esi */
  ESI = (pop32());
  /* 11b96112 pop ebx */
  EBX = (pop32());
  /* 11b96113 mov esp, ebp */
  ESP = (EBP);
  /* 11b96115 pop ebp */
  EBP = (pop32());
  /* 11b96116 ret  */
  ESPCHK(0x11b960f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006120 @ 0x11b96120 (518 bytes, 176 insns) */
void f_11b96120(void) {
  FTRACE(0x11b96120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b96120 push ebp */
  push32((uint32_t)(EBP));
  /* 11b96121 mov ebp, esp */
  EBP = (ESP);
  /* 11b96123 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b96126 push ebx */
  push32((uint32_t)(EBX));
  /* 11b96127 push esi */
  push32((uint32_t)(ESI));
  /* 11b96128 push edi */
  push32((uint32_t)(EDI));
  /* 11b96129 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9612a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11b9612d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11b96132 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b96137 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b96139 pop ecx */
  ECX = (pop32());
  /* 11b9613a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b9613d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96140 call 0x11b9114a */
  push32(0x11b96145u); f_11b9114a();
  /* 11b96145 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b96147 jle 0x11b96315 */
  if ((C.zf||C.sf!=C.of)) goto L_11b96315;
  /* 11b9614d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96150 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11b96153 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96156 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96159 cmp ecx, dword ptr [edx + 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9615c jge 0x11b96315 */
  if ((C.sf==C.of)) goto L_11b96315;
  /* 11b96162 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96165 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11b96168 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9616b cmp dword ptr [edx + ecx*8 + 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*8 + 0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b96170 jne 0x11b96239 */
  if (!C.zf) goto L_11b96239;
  /* 11b96176 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96179 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11b9617c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9617f mov eax, dword ptr [edx + ecx*8 + 0x28] */
  EAX = (r32((uint32_t)(EDX + ECX*8 + 0x28)));
  /* 11b96183 push eax */
  push32((uint32_t)(EAX));
  /* 11b96184 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96187 call 0x11b9108c */
  push32(0x11b9618cu); f_11b9108c();
  /* 11b9618c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b96191 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b96193 je 0x11b961c0 */
  if (C.zf) goto L_11b961c0;
  /* 11b96195 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96198 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11b9619b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9619e mov ecx, dword ptr [eax + edx*8 + 0x30] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x30)));
  /* 11b961a2 push ecx */
  push32((uint32_t)(ECX));
  /* 11b961a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b961a6 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11b961a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b961ac mov edx, dword ptr [ecx + eax*8 + 0x28] */
  EDX = (r32((uint32_t)(ECX + EAX*8 + 0x28)));
  /* 11b961b0 push edx */
  push32((uint32_t)(EDX));
  /* 11b961b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b961b4 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b961b7 push eax */
  push32((uint32_t)(EAX));
  /* 11b961b8 call 0x11b91041 */
  push32(0x11b961bdu); f_11b91041();
  /* 11b961bd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b961c0:;
  /* 11b961c0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b961c3 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11b961c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b961c9 mov ecx, dword ptr [eax + edx*8 + 0x30] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x30)));
  /* 11b961cd push ecx */
  push32((uint32_t)(ECX));
  /* 11b961ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b961d1 call 0x11b9108c */
  push32(0x11b961d6u); f_11b9108c();
  /* 11b961d6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b961db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b961dd je 0x11b96234 */
  if (C.zf) goto L_11b96234;
  /* 11b961df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b961e2 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11b961e5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b961e8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b961eb mov dword ptr [ecx + 0x1c], eax */
  w32((uint32_t)(ECX + 0x1c), (EAX));
  /* 11b961ee mov esi, esp */
  ESI = (ESP);
  /* 11b961f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b961f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b961f5 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b961f8 push edx */
  push32((uint32_t)(EDX));
  /* 11b961f9 call dword ptr [0x11bd0550] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0550))), 0x11b961ffu);
  /* 11b961ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96202 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b96204 call 0x11b98330 */
  push32(0x11b96209u); f_11b98330();
  /* 11b96209 mov esi, esp */
  ESI = (ESP);
  /* 11b9620b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9620d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9620f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96212 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11b96215 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96218 mov eax, dword ptr [edx + ecx*8 + 0x28] */
  EAX = (r32((uint32_t)(EDX + ECX*8 + 0x28)));
  /* 11b9621c push eax */
  push32((uint32_t)(EAX));
  /* 11b9621d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96220 mov dl, byte ptr [ecx + 0x24] */
  DL = (r8((uint32_t)(ECX + 0x24)));
  /* 11b96223 push edx */
  push32((uint32_t)(EDX));
  /* 11b96224 call dword ptr [0x11bd0560] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0560))), 0x11b9622au);
  /* 11b9622a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9622d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9622f call 0x11b98330 */
  push32(0x11b96234u); f_11b98330();
L_11b96234:;
  /* 11b96234 jmp 0x11b96315 */
  goto L_11b96315;
L_11b96239:;
  /* 11b96239 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9623c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11b9623f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96242 cmp dword ptr [edx + ecx*8 + 0x34], 2 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*8 + 0x34))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b96247 je 0x11b96259 */
  if (C.zf) goto L_11b96259;
  /* 11b96249 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9624c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11b9624f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96252 cmp dword ptr [edx + ecx*8 + 0x34], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*8 + 0x34))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b96257 jne 0x11b962b0 */
  if (!C.zf) goto L_11b962b0;
L_11b96259:;
  /* 11b96259 mov esi, esp */
  ESI = (ESP);
  /* 11b9625b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9625d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96260 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96263 push eax */
  push32((uint32_t)(EAX));
  /* 11b96264 call dword ptr [0x11bd0550] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0550))), 0x11b9626au);
  /* 11b9626a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9626d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9626f call 0x11b98330 */
  push32(0x11b96274u); f_11b98330();
  /* 11b96274 mov esi, esp */
  ESI = (ESP);
  /* 11b96276 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b96278 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9627a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9627d mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11b96280 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96283 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96286 mov dword ptr [eax + 0x1c], edx */
  w32((uint32_t)(EAX + 0x1c), (EDX));
  /* 11b96289 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9628c mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11b9628f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96292 mov ecx, dword ptr [eax + edx*8 + 0x28] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x28)));
  /* 11b96296 push ecx */
  push32((uint32_t)(ECX));
  /* 11b96297 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9629a mov al, byte ptr [edx + 0x24] */
  AL = (r8((uint32_t)(EDX + 0x24)));
  /* 11b9629d push eax */
  push32((uint32_t)(EAX));
  /* 11b9629e call dword ptr [0x11bd0560] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0560))), 0x11b962a4u);
  /* 11b962a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b962a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b962a9 call 0x11b98330 */
  push32(0x11b962aeu); f_11b98330();
  /* 11b962ae jmp 0x11b96315 */
  goto L_11b96315;
L_11b962b0:;
  /* 11b962b0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b962b3 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11b962b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b962b9 cmp dword ptr [eax + edx*8 + 0x34], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*8 + 0x34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b962be jne 0x11b96315 */
  if (!C.zf) goto L_11b96315;
  /* 11b962c0 mov esi, esp */
  ESI = (ESP);
  /* 11b962c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b962c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b962c7 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b962ca push ecx */
  push32((uint32_t)(ECX));
  /* 11b962cb call dword ptr [0x11bd0550] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0550))), 0x11b962d1u);
  /* 11b962d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b962d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b962d6 call 0x11b98330 */
  push32(0x11b962dbu); f_11b98330();
  /* 11b962db mov esi, esp */
  ESI = (ESP);
  /* 11b962dd push 0 */
  push32((uint32_t)(0x0u));
  /* 11b962df push 0 */
  push32((uint32_t)(0x0u));
  /* 11b962e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b962e4 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11b962e7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b962ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b962ed mov dword ptr [ecx + 0x1c], eax */
  w32((uint32_t)(ECX + 0x1c), (EAX));
  /* 11b962f0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b962f3 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11b962f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b962f9 mov edx, dword ptr [ecx + eax*8 + 0x28] */
  EDX = (r32((uint32_t)(ECX + EAX*8 + 0x28)));
  /* 11b962fd push edx */
  push32((uint32_t)(EDX));
  /* 11b962fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96301 mov cl, byte ptr [eax + 0x24] */
  CL = (r8((uint32_t)(EAX + 0x24)));
  /* 11b96304 push ecx */
  push32((uint32_t)(ECX));
  /* 11b96305 call dword ptr [0x11bd0560] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0560))), 0x11b9630bu);
  /* 11b9630b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9630e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b96310 call 0x11b98330 */
  push32(0x11b96315u); f_11b98330();
L_11b96315:;
  /* 11b96315 pop edi */
  EDI = (pop32());
  /* 11b96316 pop esi */
  ESI = (pop32());
  /* 11b96317 pop ebx */
  EBX = (pop32());
  /* 11b96318 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9631b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9631d call 0x11b98330 */
  push32(0x11b96322u); f_11b98330();
  /* 11b96322 mov esp, ebp */
  ESP = (EBP);
  /* 11b96324 pop ebp */
  EBP = (pop32());
  /* 11b96325 ret  */
  ESPCHK(0x11b96120u, _esp0);
  ESP += 4; return;
}

/* FUN_100063b0 @ 0x11b963b0 (38 bytes, 20 insns) */
void f_11b963b0(void) {
  FTRACE(0x11b963b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b963b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b963b1 mov ebp, esp */
  EBP = (ESP);
  /* 11b963b3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b963b6 push ebx */
  push32((uint32_t)(EBX));
  /* 11b963b7 push esi */
  push32((uint32_t)(ESI));
  /* 11b963b8 push edi */
  push32((uint32_t)(EDI));
  /* 11b963b9 push ecx */
  push32((uint32_t)(ECX));
  /* 11b963ba lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11b963bd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11b963c2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b963c7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b963c9 pop ecx */
  ECX = (pop32());
  /* 11b963ca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b963cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b963cf pop edi */
  EDI = (pop32());
  /* 11b963d0 pop esi */
  ESI = (pop32());
  /* 11b963d1 pop ebx */
  EBX = (pop32());
  /* 11b963d2 mov esp, ebp */
  ESP = (EBP);
  /* 11b963d4 pop ebp */
  EBP = (pop32());
  /* 11b963d5 ret  */
  ESPCHK(0x11b963b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100063e0 @ 0x11b963e0 (85 bytes, 34 insns) */
void f_11b963e0(void) {
  FTRACE(0x11b963e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b963e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b963e1 mov ebp, esp */
  EBP = (ESP);
  /* 11b963e3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b963e6 push ebx */
  push32((uint32_t)(EBX));
  /* 11b963e7 push esi */
  push32((uint32_t)(ESI));
  /* 11b963e8 push edi */
  push32((uint32_t)(EDI));
  /* 11b963e9 push ecx */
  push32((uint32_t)(ECX));
  /* 11b963ea lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11b963ed mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11b963f2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b963f7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b963f9 pop ecx */
  ECX = (pop32());
  /* 11b963fa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b963fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96400 mov ecx, dword ptr [eax + 0x20] */
  ECX = (r32((uint32_t)(EAX + 0x20)));
  /* 11b96403 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96406 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b96409 mov dword ptr [edx + ecx*8 + 0x28], eax */
  w32((uint32_t)(EDX + ECX*8 + 0x28), (EAX));
  /* 11b9640d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96410 mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 11b96413 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96416 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b96419 mov dword ptr [eax + edx*8 + 0x2c], ecx */
  w32((uint32_t)(EAX + EDX*8 + 0x2c), (ECX));
  /* 11b9641d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96420 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 11b96423 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96426 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96429 mov dword ptr [ecx + 0x20], eax */
  w32((uint32_t)(ECX + 0x20), (EAX));
  /* 11b9642c pop edi */
  EDI = (pop32());
  /* 11b9642d pop esi */
  ESI = (pop32());
  /* 11b9642e pop ebx */
  EBX = (pop32());
  /* 11b9642f mov esp, ebp */
  ESP = (EBP);
  /* 11b96431 pop ebp */
  EBP = (pop32());
  /* 11b96432 ret 8 */
  ESPCHK(0x11b963e0u, _esp0);
  ESP += 12; return;
}

/* FUN_10006450 @ 0x11b96450 (86 bytes, 33 insns) */
void f_11b96450(void) {
  FTRACE(0x11b96450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b96450 push ebp */
  push32((uint32_t)(EBP));
  /* 11b96451 mov ebp, esp */
  EBP = (ESP);
  /* 11b96453 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b96456 push ebx */
  push32((uint32_t)(EBX));
  /* 11b96457 push esi */
  push32((uint32_t)(ESI));
  /* 11b96458 push edi */
  push32((uint32_t)(EDI));
  /* 11b96459 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9645a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11b9645d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11b96462 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b96467 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b96469 pop ecx */
  ECX = (pop32());
  /* 11b9646a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b9646d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96470 mov ecx, dword ptr [eax + 0x20] */
  ECX = (r32((uint32_t)(EAX + 0x20)));
  /* 11b96473 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96476 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b96479 mov dword ptr [edx + ecx*8 + 0x28], eax */
  w32((uint32_t)(EDX + ECX*8 + 0x28), (EAX));
  /* 11b9647d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96480 mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 11b96483 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96486 mov dword ptr [eax + edx*8 + 0x2c], 2 */
  w32((uint32_t)(EAX + EDX*8 + 0x2c), (0x2u));
  /* 11b9648e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96491 mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 11b96494 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96497 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9649a mov dword ptr [eax + 0x20], edx */
  w32((uint32_t)(EAX + 0x20), (EDX));
  /* 11b9649d pop edi */
  EDI = (pop32());
  /* 11b9649e pop esi */
  ESI = (pop32());
  /* 11b9649f pop ebx */
  EBX = (pop32());
  /* 11b964a0 mov esp, ebp */
  ESP = (EBP);
  /* 11b964a2 pop ebp */
  EBP = (pop32());
  /* 11b964a3 ret 4 */
  ESPCHK(0x11b96450u, _esp0);
  ESP += 8; return;
}

/* FUN_100064c0 @ 0x11b964c0 (119 bytes, 43 insns) */
void f_11b964c0(void) {
  FTRACE(0x11b964c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b964c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b964c1 mov ebp, esp */
  EBP = (ESP);
  /* 11b964c3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b964c6 push ebx */
  push32((uint32_t)(EBX));
  /* 11b964c7 push esi */
  push32((uint32_t)(ESI));
  /* 11b964c8 push edi */
  push32((uint32_t)(EDI));
  /* 11b964c9 push ecx */
  push32((uint32_t)(ECX));
  /* 11b964ca lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11b964cd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11b964d2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b964d7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b964d9 pop ecx */
  ECX = (pop32());
  /* 11b964da mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b964dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b964e0 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b964e3 mov esi, esp */
  ESI = (ESP);
  /* 11b964e5 push eax */
  push32((uint32_t)(EAX));
  /* 11b964e6 call dword ptr [0x11bd056c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd056c))), 0x11b964ecu);
  /* 11b964ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b964ef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b964f1 call 0x11b98330 */
  push32(0x11b964f6u); f_11b98330();
  /* 11b964f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b964f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b964fc mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11b964fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96501 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b96504 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11b96507 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9650a mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
  /* 11b96511 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96514 mov dword ptr [eax + 0x20], 0 */
  w32((uint32_t)(EAX + 0x20), (0x0u));
  /* 11b9651b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9651e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b96521 mov dword ptr [ecx + 0x24], edx */
  w32((uint32_t)(ECX + 0x24), (EDX));
  /* 11b96524 pop edi */
  EDI = (pop32());
  /* 11b96525 pop esi */
  ESI = (pop32());
  /* 11b96526 pop ebx */
  EBX = (pop32());
  /* 11b96527 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9652a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9652c call 0x11b98330 */
  push32(0x11b96531u); f_11b98330();
  /* 11b96531 mov esp, ebp */
  ESP = (EBP);
  /* 11b96533 pop ebp */
  EBP = (pop32());
  /* 11b96534 ret 0xc */
  ESPCHK(0x11b964c0u, _esp0);
  ESP += 16; return;
}

/* FUN_10006560 @ 0x11b96560 (263 bytes, 93 insns) */
void f_11b96560(void) {
  FTRACE(0x11b96560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b96560 push ebp */
  push32((uint32_t)(EBP));
  /* 11b96561 mov ebp, esp */
  EBP = (ESP);
  /* 11b96563 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b96566 push ebx */
  push32((uint32_t)(EBX));
  /* 11b96567 push esi */
  push32((uint32_t)(ESI));
  /* 11b96568 push edi */
  push32((uint32_t)(EDI));
  /* 11b96569 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9656a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11b9656d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11b96572 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b96577 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b96579 pop ecx */
  ECX = (pop32());
  /* 11b9657a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b9657d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96580 call 0x11b9114a */
  push32(0x11b96585u); f_11b9114a();
  /* 11b96585 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b96587 jne 0x11b96654 */
  if (!C.zf) goto L_11b96654;
  /* 11b9658d mov esi, esp */
  ESI = (ESP);
  /* 11b9658f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96592 mov cl, byte ptr [eax + 0x24] */
  CL = (r8((uint32_t)(EAX + 0x24)));
  /* 11b96595 push ecx */
  push32((uint32_t)(ECX));
  /* 11b96596 call dword ptr [0x11bd052c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd052c))), 0x11b9659cu);
  /* 11b9659c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9659f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b965a1 call 0x11b98330 */
  push32(0x11b965a6u); f_11b98330();
  /* 11b965a6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11b965ad jmp 0x11b965b8 */
  goto L_11b965b8;
L_11b965af:;
  /* 11b965af mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b965b2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b965b5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11b965b8:;
  /* 11b965b8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b965bb cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b965be jge 0x11b96610 */
  if ((C.sf==C.of)) goto L_11b96610;
  /* 11b965c0 mov esi, esp */
  ESI = (ESP);
  /* 11b965c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b965c4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b965c7 push ecx */
  push32((uint32_t)(ECX));
  /* 11b965c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b965cb mov al, byte ptr [edx + 0x24] */
  AL = (r8((uint32_t)(EDX + 0x24)));
  /* 11b965ce push eax */
  push32((uint32_t)(EAX));
  /* 11b965cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b965d2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b965d4 push edx */
  push32((uint32_t)(EDX));
  /* 11b965d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b965d8 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b965db push ecx */
  push32((uint32_t)(ECX));
  /* 11b965dc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b965df add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b965e2 push edx */
  push32((uint32_t)(EDX));
  /* 11b965e3 call dword ptr [0x11bd0528] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0528))), 0x11b965e9u);
  /* 11b965e9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b965ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b965ee call 0x11b98330 */
  push32(0x11b965f3u); f_11b98330();
  /* 11b965f3 mov esi, esp */
  ESI = (ESP);
  /* 11b965f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b965f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b965fa add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b965fd push eax */
  push32((uint32_t)(EAX));
  /* 11b965fe call dword ptr [0x11bd0550] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0550))), 0x11b96604u);
  /* 11b96604 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96607 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b96609 call 0x11b98330 */
  push32(0x11b9660eu); f_11b98330();
  /* 11b9660e jmp 0x11b965af */
  goto L_11b965af;
L_11b96610:;
  /* 11b96610 mov esi, esp */
  ESI = (ESP);
  /* 11b96612 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b96614 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96617 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9661a push ecx */
  push32((uint32_t)(ECX));
  /* 11b9661b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9661e mov al, byte ptr [edx + 0x24] */
  AL = (r8((uint32_t)(EDX + 0x24)));
  /* 11b96621 push eax */
  push32((uint32_t)(EAX));
  /* 11b96622 call dword ptr [0x11bd0574] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0574))), 0x11b96628u);
  /* 11b96628 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9662b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9662d call 0x11b98330 */
  push32(0x11b96632u); f_11b98330();
  /* 11b96632 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96635 mov dword ptr [ecx + 0x20], 0 */
  w32((uint32_t)(ECX + 0x20), (0x0u));
  /* 11b9663c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9663e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b96641 push edx */
  push32((uint32_t)(EDX));
  /* 11b96642 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96645 call 0x11b91037 */
  push32(0x11b9664au); f_11b91037();
  /* 11b9664a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9664d mov dword ptr [eax + 0x1c], 0 */
  w32((uint32_t)(EAX + 0x1c), (0x0u));
L_11b96654:;
  /* 11b96654 pop edi */
  EDI = (pop32());
  /* 11b96655 pop esi */
  ESI = (pop32());
  /* 11b96656 pop ebx */
  EBX = (pop32());
  /* 11b96657 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9665a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9665c call 0x11b98330 */
  push32(0x11b96661u); f_11b98330();
  /* 11b96661 mov esp, ebp */
  ESP = (EBP);
  /* 11b96663 pop ebp */
  EBP = (pop32());
  /* 11b96664 ret 8 */
  ESPCHK(0x11b96560u, _esp0);
  ESP += 12; return;
}

/* FUN_100066b0 @ 0x11b966b0 (42 bytes, 21 insns) */
void f_11b966b0(void) {
  FTRACE(0x11b966b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b966b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b966b1 mov ebp, esp */
  EBP = (ESP);
  /* 11b966b3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b966b6 push ebx */
  push32((uint32_t)(EBX));
  /* 11b966b7 push esi */
  push32((uint32_t)(ESI));
  /* 11b966b8 push edi */
  push32((uint32_t)(EDI));
  /* 11b966b9 push ecx */
  push32((uint32_t)(ECX));
  /* 11b966ba lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11b966bd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11b966c2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b966c7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b966c9 pop ecx */
  ECX = (pop32());
  /* 11b966ca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b966cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b966d0 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b966d3 pop edi */
  EDI = (pop32());
  /* 11b966d4 pop esi */
  ESI = (pop32());
  /* 11b966d5 pop ebx */
  EBX = (pop32());
  /* 11b966d6 mov esp, ebp */
  ESP = (EBP);
  /* 11b966d8 pop ebp */
  EBP = (pop32());
  /* 11b966d9 ret  */
  ESPCHK(0x11b966b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100066f0 @ 0x11b966f0 (78 bytes, 33 insns) */
void f_11b966f0(void) {
  FTRACE(0x11b966f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b966f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b966f1 mov ebp, esp */
  EBP = (ESP);
  /* 11b966f3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b966f6 push ebx */
  push32((uint32_t)(EBX));
  /* 11b966f7 push esi */
  push32((uint32_t)(ESI));
  /* 11b966f8 push edi */
  push32((uint32_t)(EDI));
  /* 11b966f9 push ecx */
  push32((uint32_t)(ECX));
  /* 11b966fa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11b966fd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11b96702 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b96707 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b96709 pop ecx */
  ECX = (pop32());
  /* 11b9670a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b9670d mov esi, esp */
  ESI = (ESP);
  /* 11b9670f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96712 mov cl, byte ptr [eax + 0x24] */
  CL = (r8((uint32_t)(EAX + 0x24)));
  /* 11b96715 push ecx */
  push32((uint32_t)(ECX));
  /* 11b96716 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96719 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9671c push edx */
  push32((uint32_t)(EDX));
  /* 11b9671d call dword ptr [0x11bd04e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd04e0))), 0x11b96723u);
  /* 11b96723 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96726 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b96728 call 0x11b98330 */
  push32(0x11b9672du); f_11b98330();
  /* 11b9672d pop edi */
  EDI = (pop32());
  /* 11b9672e pop esi */
  ESI = (pop32());
  /* 11b9672f pop ebx */
  EBX = (pop32());
  /* 11b96730 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96733 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b96735 call 0x11b98330 */
  push32(0x11b9673au); f_11b98330();
  /* 11b9673a mov esp, ebp */
  ESP = (EBP);
  /* 11b9673c pop ebp */
  EBP = (pop32());
  /* 11b9673d ret  */
  ESPCHK(0x11b966f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006760 @ 0x11b96760 (102 bytes, 40 insns) */
void f_11b96760(void) {
  FTRACE(0x11b96760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b96760 push ebp */
  push32((uint32_t)(EBP));
  /* 11b96761 mov ebp, esp */
  EBP = (ESP);
  /* 11b96763 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b96766 push ebx */
  push32((uint32_t)(EBX));
  /* 11b96767 push esi */
  push32((uint32_t)(ESI));
  /* 11b96768 push edi */
  push32((uint32_t)(EDI));
  /* 11b96769 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9676a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11b9676d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11b96772 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b96777 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b96779 pop ecx */
  ECX = (pop32());
  /* 11b9677a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b9677d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11b96781 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96784 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96787 mov esi, esp */
  ESI = (ESP);
  /* 11b96789 push eax */
  push32((uint32_t)(EAX));
  /* 11b9678a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9678d push ecx */
  push32((uint32_t)(ECX));
  /* 11b9678e call dword ptr [0x11bd0564] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0564))), 0x11b96794u);
  /* 11b96794 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96797 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b96799 call 0x11b98330 */
  push32(0x11b9679eu); f_11b98330();
  /* 11b9679e mov esi, eax */
  ESI = (EAX);
  /* 11b967a0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b967a3 call 0x11b9114a */
  push32(0x11b967a8u); f_11b9114a();
  /* 11b967a8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b967aa jne 0x11b967b0 */
  if (!C.zf) goto L_11b967b0;
  /* 11b967ac mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11b967b0:;
  /* 11b967b0 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11b967b3 pop edi */
  EDI = (pop32());
  /* 11b967b4 pop esi */
  ESI = (pop32());
  /* 11b967b5 pop ebx */
  EBX = (pop32());
  /* 11b967b6 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b967b9 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b967bb call 0x11b98330 */
  push32(0x11b967c0u); f_11b98330();
  /* 11b967c0 mov esp, ebp */
  ESP = (EBP);
  /* 11b967c2 pop ebp */
  EBP = (pop32());
  /* 11b967c3 ret 4 */
  ESPCHK(0x11b96760u, _esp0);
  ESP += 8; return;
}

/* FUN_100067e0 @ 0x11b967e0 (117 bytes, 44 insns) */
void f_11b967e0(void) {
  FTRACE(0x11b967e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b967e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b967e1 mov ebp, esp */
  EBP = (ESP);
  /* 11b967e3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b967e6 push ebx */
  push32((uint32_t)(EBX));
  /* 11b967e7 push esi */
  push32((uint32_t)(ESI));
  /* 11b967e8 push edi */
  push32((uint32_t)(EDI));
  /* 11b967e9 push ecx */
  push32((uint32_t)(ECX));
  /* 11b967ea lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11b967ed mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11b967f2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b967f7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b967f9 pop ecx */
  ECX = (pop32());
  /* 11b967fa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b967fd mov esi, esp */
  ESI = (ESP);
  /* 11b967ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b96802 push eax */
  push32((uint32_t)(EAX));
  /* 11b96803 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96806 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96809 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9680a call dword ptr [0x11bd0548] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0548))), 0x11b96810u);
  /* 11b96810 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96813 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b96815 call 0x11b98330 */
  push32(0x11b9681au); f_11b98330();
  /* 11b9681a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9681d add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96820 push edx */
  push32((uint32_t)(EDX));
  /* 11b96821 call 0x11b9102d */
  push32(0x11b96826u); f_11b9102d();
  /* 11b96826 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96829 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9682c mov dword ptr [ecx + 0x18], eax */
  w32((uint32_t)(ECX + 0x18), (EAX));
  /* 11b9682f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96832 mov dword ptr [edx + 0x14], 0 */
  w32((uint32_t)(EDX + 0x14), (0x0u));
  /* 11b96839 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9683c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9683f mov dword ptr [eax + 0x1c], ecx */
  w32((uint32_t)(EAX + 0x1c), (ECX));
  /* 11b96842 pop edi */
  EDI = (pop32());
  /* 11b96843 pop esi */
  ESI = (pop32());
  /* 11b96844 pop ebx */
  EBX = (pop32());
  /* 11b96845 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96848 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9684a call 0x11b98330 */
  push32(0x11b9684fu); f_11b98330();
  /* 11b9684f mov esp, ebp */
  ESP = (EBP);
  /* 11b96851 pop ebp */
  EBP = (pop32());
  /* 11b96852 ret 8 */
  ESPCHK(0x11b967e0u, _esp0);
  ESP += 12; return;
}

/* FUN_10006880 @ 0x11b96880 (56 bytes, 25 insns) */
void f_11b96880(void) {
  FTRACE(0x11b96880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b96880 push ebp */
  push32((uint32_t)(EBP));
  /* 11b96881 mov ebp, esp */
  EBP = (ESP);
  /* 11b96883 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b96886 push ebx */
  push32((uint32_t)(EBX));
  /* 11b96887 push esi */
  push32((uint32_t)(ESI));
  /* 11b96888 push edi */
  push32((uint32_t)(EDI));
  /* 11b96889 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9688a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11b9688d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11b96892 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b96897 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b96899 pop ecx */
  ECX = (pop32());
  /* 11b9689a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b9689d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11b968a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b968a4 cmp dword ptr [eax + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b968a8 jne 0x11b968ae */
  if (!C.zf) goto L_11b968ae;
  /* 11b968aa mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11b968ae:;
  /* 11b968ae mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11b968b1 pop edi */
  EDI = (pop32());
  /* 11b968b2 pop esi */
  ESI = (pop32());
  /* 11b968b3 pop ebx */
  EBX = (pop32());
  /* 11b968b4 mov esp, ebp */
  ESP = (EBP);
  /* 11b968b6 pop ebp */
  EBP = (pop32());
  /* 11b968b7 ret  */
  ESPCHK(0x11b96880u, _esp0);
  ESP += 4; return;
}

/* FUN_100068d0 @ 0x11b968d0 (163 bytes, 60 insns) */
void f_11b968d0(void) {
  FTRACE(0x11b968d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b968d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b968d1 mov ebp, esp */
  EBP = (ESP);
  /* 11b968d3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b968d6 push ebx */
  push32((uint32_t)(EBX));
  /* 11b968d7 push esi */
  push32((uint32_t)(ESI));
  /* 11b968d8 push edi */
  push32((uint32_t)(EDI));
  /* 11b968d9 push ecx */
  push32((uint32_t)(ECX));
  /* 11b968da lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11b968dd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11b968e2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b968e7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b968e9 pop ecx */
  ECX = (pop32());
  /* 11b968ea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b968ed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b968f0 call 0x11b9109b */
  push32(0x11b968f5u); f_11b9109b();
  /* 11b968f5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b968fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b968fc je 0x11b96960 */
  if (C.zf) goto L_11b96960;
  /* 11b968fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96901 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b96904 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11b96907 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9690a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9690d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11b9690f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96912 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b96915 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11b96918 mov esi, esp */
  ESI = (ESP);
  /* 11b9691a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9691c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9691f add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96922 push eax */
  push32((uint32_t)(EAX));
  /* 11b96923 call dword ptr [0x11bd0550] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0550))), 0x11b96929u);
  /* 11b96929 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9692c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9692e call 0x11b98330 */
  push32(0x11b96933u); f_11b98330();
  /* 11b96933 mov esi, esp */
  ESI = (ESP);
  /* 11b96935 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b96937 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b96939 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9693c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b9693e push edx */
  push32((uint32_t)(EDX));
  /* 11b9693f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96942 mov cl, byte ptr [eax + 0x18] */
  CL = (r8((uint32_t)(EAX + 0x18)));
  /* 11b96945 push ecx */
  push32((uint32_t)(ECX));
  /* 11b96946 call dword ptr [0x11bd0560] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0560))), 0x11b9694cu);
  /* 11b9694c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9694f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b96951 call 0x11b98330 */
  push32(0x11b96956u); f_11b98330();
  /* 11b96956 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96959 mov dword ptr [edx + 0x14], 1 */
  w32((uint32_t)(EDX + 0x14), (0x1u));
L_11b96960:;
  /* 11b96960 pop edi */
  EDI = (pop32());
  /* 11b96961 pop esi */
  ESI = (pop32());
  /* 11b96962 pop ebx */
  EBX = (pop32());
  /* 11b96963 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96966 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b96968 call 0x11b98330 */
  push32(0x11b9696du); f_11b98330();
  /* 11b9696d mov esp, ebp */
  ESP = (EBP);
  /* 11b9696f pop ebp */
  EBP = (pop32());
  /* 11b96970 ret 0xc */
  ESPCHK(0x11b968d0u, _esp0);
  ESP += 16; return;
}

/* FUN_100069a0 @ 0x11b969a0 (140 bytes, 53 insns) */
void f_11b969a0(void) {
  FTRACE(0x11b969a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b969a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b969a1 mov ebp, esp */
  EBP = (ESP);
  /* 11b969a3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b969a6 push ebx */
  push32((uint32_t)(EBX));
  /* 11b969a7 push esi */
  push32((uint32_t)(ESI));
  /* 11b969a8 push edi */
  push32((uint32_t)(EDI));
  /* 11b969a9 push ecx */
  push32((uint32_t)(ECX));
  /* 11b969aa lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11b969ad mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11b969b2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b969b7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b969b9 pop ecx */
  ECX = (pop32());
  /* 11b969ba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b969bd mov esi, esp */
  ESI = (ESP);
  /* 11b969bf push 0 */
  push32((uint32_t)(0x0u));
  /* 11b969c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b969c4 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b969c7 push eax */
  push32((uint32_t)(EAX));
  /* 11b969c8 call dword ptr [0x11bd0550] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0550))), 0x11b969ceu);
  /* 11b969ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b969d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b969d3 call 0x11b98330 */
  push32(0x11b969d8u); f_11b98330();
  /* 11b969d8 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11b969dc mov esi, esp */
  ESI = (ESP);
  /* 11b969de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b969e1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11b969e4 push edx */
  push32((uint32_t)(EDX));
  /* 11b969e5 call dword ptr [0x11bd0578] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0578))), 0x11b969ebu);
  /* 11b969eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b969ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b969f0 call 0x11b98330 */
  push32(0x11b969f5u); f_11b98330();
  /* 11b969f5 mov esi, eax */
  ESI = (EAX);
  /* 11b969f7 mov edi, esp */
  EDI = (ESP);
  /* 11b969f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b969fc mov cl, byte ptr [eax + 0x18] */
  CL = (r8((uint32_t)(EAX + 0x18)));
  /* 11b969ff push ecx */
  push32((uint32_t)(ECX));
  /* 11b96a00 call dword ptr [0x11bd04bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd04bc))), 0x11b96a06u);
  /* 11b96a06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96a09 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b96a0b call 0x11b98330 */
  push32(0x11b96a10u); f_11b98330();
  /* 11b96a10 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b96a12 jne 0x11b96a18 */
  if (!C.zf) goto L_11b96a18;
  /* 11b96a14 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11b96a18:;
  /* 11b96a18 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11b96a1b pop edi */
  EDI = (pop32());
  /* 11b96a1c pop esi */
  ESI = (pop32());
  /* 11b96a1d pop ebx */
  EBX = (pop32());
  /* 11b96a1e add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96a21 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b96a23 call 0x11b98330 */
  push32(0x11b96a28u); f_11b98330();
  /* 11b96a28 mov esp, ebp */
  ESP = (EBP);
  /* 11b96a2a pop ebp */
  EBP = (pop32());
  /* 11b96a2b ret  */
  ESPCHK(0x11b969a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a50 @ 0x11b96a50 (125 bytes, 48 insns) */
void f_11b96a50(void) {
  FTRACE(0x11b96a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b96a50 push ebp */
  push32((uint32_t)(EBP));
  /* 11b96a51 mov ebp, esp */
  EBP = (ESP);
  /* 11b96a53 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b96a56 push ebx */
  push32((uint32_t)(EBX));
  /* 11b96a57 push esi */
  push32((uint32_t)(ESI));
  /* 11b96a58 push edi */
  push32((uint32_t)(EDI));
  /* 11b96a59 push ecx */
  push32((uint32_t)(ECX));
  /* 11b96a5a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11b96a5d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11b96a62 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b96a67 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b96a69 pop ecx */
  ECX = (pop32());
  /* 11b96a6a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b96a6d mov esi, esp */
  ESI = (ESP);
  /* 11b96a6f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b96a71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96a74 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96a77 push eax */
  push32((uint32_t)(EAX));
  /* 11b96a78 call dword ptr [0x11bd0550] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0550))), 0x11b96a7eu);
  /* 11b96a7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96a81 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b96a83 call 0x11b98330 */
  push32(0x11b96a88u); f_11b98330();
  /* 11b96a88 mov esi, esp */
  ESI = (ESP);
  /* 11b96a8a push 1 */
  push32((uint32_t)(0x1u));
  /* 11b96a8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96a8f mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11b96a92 push edx */
  push32((uint32_t)(EDX));
  /* 11b96a93 call dword ptr [0x11bd0550] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0550))), 0x11b96a99u);
  /* 11b96a99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96a9c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b96a9e call 0x11b98330 */
  push32(0x11b96aa3u); f_11b98330();
  /* 11b96aa3 mov esi, esp */
  ESI = (ESP);
  /* 11b96aa5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96aa8 mov cl, byte ptr [eax + 0x18] */
  CL = (r8((uint32_t)(EAX + 0x18)));
  /* 11b96aab push ecx */
  push32((uint32_t)(ECX));
  /* 11b96aac call dword ptr [0x11bd04b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd04b8))), 0x11b96ab2u);
  /* 11b96ab2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96ab5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b96ab7 call 0x11b98330 */
  push32(0x11b96abcu); f_11b98330();
  /* 11b96abc pop edi */
  EDI = (pop32());
  /* 11b96abd pop esi */
  ESI = (pop32());
  /* 11b96abe pop ebx */
  EBX = (pop32());
  /* 11b96abf add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96ac2 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b96ac4 call 0x11b98330 */
  push32(0x11b96ac9u); f_11b98330();
  /* 11b96ac9 mov esp, ebp */
  ESP = (EBP);
  /* 11b96acb pop ebp */
  EBP = (pop32());
  /* 11b96acc ret  */
  ESPCHK(0x11b96a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10006af0 @ 0x11b96af0 (98 bytes, 39 insns) */
void f_11b96af0(void) {
  FTRACE(0x11b96af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b96af0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b96af1 mov ebp, esp */
  EBP = (ESP);
  /* 11b96af3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b96af6 push ebx */
  push32((uint32_t)(EBX));
  /* 11b96af7 push esi */
  push32((uint32_t)(ESI));
  /* 11b96af8 push edi */
  push32((uint32_t)(EDI));
  /* 11b96af9 push ecx */
  push32((uint32_t)(ECX));
  /* 11b96afa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11b96afd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11b96b02 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b96b07 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b96b09 pop ecx */
  ECX = (pop32());
  /* 11b96b0a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b96b0d mov esi, esp */
  ESI = (ESP);
  /* 11b96b0f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b96b11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96b14 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96b17 push eax */
  push32((uint32_t)(EAX));
  /* 11b96b18 call dword ptr [0x11bd0550] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0550))), 0x11b96b1eu);
  /* 11b96b1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96b21 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b96b23 call 0x11b98330 */
  push32(0x11b96b28u); f_11b98330();
  /* 11b96b28 mov esi, esp */
  ESI = (ESP);
  /* 11b96b2a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96b2d mov dl, byte ptr [ecx + 0x18] */
  DL = (r8((uint32_t)(ECX + 0x18)));
  /* 11b96b30 push edx */
  push32((uint32_t)(EDX));
  /* 11b96b31 call dword ptr [0x11bd04b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd04b4))), 0x11b96b37u);
  /* 11b96b37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96b3a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b96b3c call 0x11b98330 */
  push32(0x11b96b41u); f_11b98330();
  /* 11b96b41 pop edi */
  EDI = (pop32());
  /* 11b96b42 pop esi */
  ESI = (pop32());
  /* 11b96b43 pop ebx */
  EBX = (pop32());
  /* 11b96b44 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96b47 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b96b49 call 0x11b98330 */
  push32(0x11b96b4eu); f_11b98330();
  /* 11b96b4e mov esp, ebp */
  ESP = (EBP);
  /* 11b96b50 pop ebp */
  EBP = (pop32());
  /* 11b96b51 ret  */
  ESPCHK(0x11b96af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b70 @ 0x11b96b70 (402 bytes, 129 insns) [1 switch table(s)] */
void f_11b96b70(void) {
  FTRACE(0x11b96b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b96b70 push ebp */
  push32((uint32_t)(EBP));
  /* 11b96b71 mov ebp, esp */
  EBP = (ESP);
  /* 11b96b73 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b96b76 push ebx */
  push32((uint32_t)(EBX));
  /* 11b96b77 push esi */
  push32((uint32_t)(ESI));
  /* 11b96b78 push edi */
  push32((uint32_t)(EDI));
  /* 11b96b79 push ecx */
  push32((uint32_t)(ECX));
  /* 11b96b7a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11b96b7d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11b96b82 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b96b87 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b96b89 pop ecx */
  ECX = (pop32());
  /* 11b96b8a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b96b8d mov esi, esp */
  ESI = (ESP);
  /* 11b96b8f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b96b91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96b94 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96b97 push eax */
  push32((uint32_t)(EAX));
  /* 11b96b98 call dword ptr [0x11bd0550] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0550))), 0x11b96b9eu);
  /* 11b96b9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96ba1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b96ba3 call 0x11b98330 */
  push32(0x11b96ba8u); f_11b98330();
  /* 11b96ba8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96bab mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11b96bae mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11b96bb1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b96bb4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b96bb7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b96bba cmp dword ptr [ebp - 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b96bbe ja 0x11b96cf1 */
  if ((!C.cf&&!C.zf)) goto L_11b96cf1;
  /* 11b96bc4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b96bc7 jmp dword ptr [ecx*4 + 0x11b96d02] */
  switch (ECX) {
    case 0: goto L_11b96bce;
    case 1: goto L_11b96c07;
    case 2: goto L_11b96c4b;
    case 3: goto L_11b96c81;
    case 4: goto L_11b96cc5;
    default: x86_unimpl("switch@0x11b96bc7 out of table"); return;
  }
L_11b96bce:;
  /* 11b96bce mov esi, esp */
  ESI = (ESP);
  /* 11b96bd0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96bd3 mov al, byte ptr [edx + 0x18] */
  AL = (r8((uint32_t)(EDX + 0x18)));
  /* 11b96bd6 push eax */
  push32((uint32_t)(EAX));
  /* 11b96bd7 call dword ptr [0x11bd04b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd04b0))), 0x11b96bddu);
  /* 11b96bdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96be0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b96be2 call 0x11b98330 */
  push32(0x11b96be7u); f_11b98330();
  /* 11b96be7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b96bec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b96bee je 0x11b96c02 */
  if (C.zf) goto L_11b96c02;
  /* 11b96bf0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96bf3 call 0x11b91190 */
  push32(0x11b96bf8u); f_11b91190();
  /* 11b96bf8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96bfb mov dword ptr [ecx + 0x14], 2 */
  w32((uint32_t)(ECX + 0x14), (0x2u));
L_11b96c02:;
  /* 11b96c02 jmp 0x11b96cf1 */
  goto L_11b96cf1;
L_11b96c07:;
  /* 11b96c07 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96c0a call 0x11b910f0 */
  push32(0x11b96c0fu); f_11b910f0();
  /* 11b96c0f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b96c14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b96c16 je 0x11b96c46 */
  if (C.zf) goto L_11b96c46;
  /* 11b96c18 mov esi, esp */
  ESI = (ESP);
  /* 11b96c1a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b96c1c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b96c1e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96c21 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b96c24 push eax */
  push32((uint32_t)(EAX));
  /* 11b96c25 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96c28 mov dl, byte ptr [ecx + 0x18] */
  DL = (r8((uint32_t)(ECX + 0x18)));
  /* 11b96c2b push edx */
  push32((uint32_t)(EDX));
  /* 11b96c2c call dword ptr [0x11bd0560] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0560))), 0x11b96c32u);
  /* 11b96c32 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96c35 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b96c37 call 0x11b98330 */
  push32(0x11b96c3cu); f_11b98330();
  /* 11b96c3c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96c3f mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
L_11b96c46:;
  /* 11b96c46 jmp 0x11b96cf1 */
  goto L_11b96cf1;
L_11b96c4b:;
  /* 11b96c4b mov esi, esp */
  ESI = (ESP);
  /* 11b96c4d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96c50 mov dl, byte ptr [ecx + 0x18] */
  DL = (r8((uint32_t)(ECX + 0x18)));
  /* 11b96c53 push edx */
  push32((uint32_t)(EDX));
  /* 11b96c54 call dword ptr [0x11bd04b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd04b0))), 0x11b96c5au);
  /* 11b96c5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96c5d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b96c5f call 0x11b98330 */
  push32(0x11b96c64u); f_11b98330();
  /* 11b96c64 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b96c69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b96c6b je 0x11b96c7f */
  if (C.zf) goto L_11b96c7f;
  /* 11b96c6d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96c70 call 0x11b91050 */
  push32(0x11b96c75u); f_11b91050();
  /* 11b96c75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96c78 mov dword ptr [eax + 0x14], 4 */
  w32((uint32_t)(EAX + 0x14), (0x4u));
L_11b96c7f:;
  /* 11b96c7f jmp 0x11b96cf1 */
  goto L_11b96cf1;
L_11b96c81:;
  /* 11b96c81 mov esi, esp */
  ESI = (ESP);
  /* 11b96c83 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96c86 mov dl, byte ptr [ecx + 0x18] */
  DL = (r8((uint32_t)(ECX + 0x18)));
  /* 11b96c89 push edx */
  push32((uint32_t)(EDX));
  /* 11b96c8a call dword ptr [0x11bd04bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd04bc))), 0x11b96c90u);
  /* 11b96c90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96c93 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b96c95 call 0x11b98330 */
  push32(0x11b96c9au); f_11b98330();
  /* 11b96c9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b96c9c jne 0x11b96cc3 */
  if (!C.zf) goto L_11b96cc3;
  /* 11b96c9e mov esi, esp */
  ESI = (ESP);
  /* 11b96ca0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11b96ca2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96ca5 mov cl, byte ptr [eax + 0x1c] */
  CL = (r8((uint32_t)(EAX + 0x1c)));
  /* 11b96ca8 push ecx */
  push32((uint32_t)(ECX));
  /* 11b96ca9 call dword ptr [0x11bd04fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd04fc))), 0x11b96cafu);
  /* 11b96caf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96cb2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b96cb4 call 0x11b98330 */
  push32(0x11b96cb9u); f_11b98330();
  /* 11b96cb9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96cbc mov dword ptr [edx + 0x14], 5 */
  w32((uint32_t)(EDX + 0x14), (0x5u));
L_11b96cc3:;
  /* 11b96cc3 jmp 0x11b96cf1 */
  goto L_11b96cf1;
L_11b96cc5:;
  /* 11b96cc5 mov esi, esp */
  ESI = (ESP);
  /* 11b96cc7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96cca mov cl, byte ptr [eax + 0x1c] */
  CL = (r8((uint32_t)(EAX + 0x1c)));
  /* 11b96ccd push ecx */
  push32((uint32_t)(ECX));
  /* 11b96cce call dword ptr [0x11bd0500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0500))), 0x11b96cd4u);
  /* 11b96cd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96cd7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b96cd9 call 0x11b98330 */
  push32(0x11b96cdeu); f_11b98330();
  /* 11b96cde and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b96ce3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b96ce5 je 0x11b96cf1 */
  if (C.zf) goto L_11b96cf1;
  /* 11b96ce7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96cea mov dword ptr [edx + 0x14], 0 */
  w32((uint32_t)(EDX + 0x14), (0x0u));
L_11b96cf1:;
  /* 11b96cf1 pop edi */
  EDI = (pop32());
  /* 11b96cf2 pop esi */
  ESI = (pop32());
  /* 11b96cf3 pop ebx */
  EBX = (pop32());
  /* 11b96cf4 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96cf7 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b96cf9 call 0x11b98330 */
  push32(0x11b96cfeu); f_11b98330();
  /* 11b96cfe mov esp, ebp */
  ESP = (EBP);
  /* 11b96d00 pop ebp */
  EBP = (pop32());
  /* 11b96d01 ret  */
  ESPCHK(0x11b96b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d80 @ 0x11b96d80 (39 bytes, 18 insns) */
void f_11b96d80(void) {
  FTRACE(0x11b96d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b96d80 push ebp */
  push32((uint32_t)(EBP));
  /* 11b96d81 mov ebp, esp */
  EBP = (ESP);
  /* 11b96d83 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b96d86 push ebx */
  push32((uint32_t)(EBX));
  /* 11b96d87 push esi */
  push32((uint32_t)(ESI));
  /* 11b96d88 push edi */
  push32((uint32_t)(EDI));
  /* 11b96d89 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 11b96d8c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 11b96d91 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b96d96 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b96d98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b96d9b mov dword ptr [0x11bce2f8], eax */
  w32((uint32_t)(0x11bce2f8), (EAX));
  /* 11b96da0 pop edi */
  EDI = (pop32());
  /* 11b96da1 pop esi */
  ESI = (pop32());
  /* 11b96da2 pop ebx */
  EBX = (pop32());
  /* 11b96da3 mov esp, ebp */
  ESP = (EBP);
  /* 11b96da5 pop ebp */
  EBP = (pop32());
  /* 11b96da6 ret  */
  ESPCHK(0x11b96d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10006db0 @ 0x11b96db0 (93 bytes, 34 insns) */
void f_11b96db0(void) {
  FTRACE(0x11b96db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b96db0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b96db1 mov ebp, esp */
  EBP = (ESP);
  /* 11b96db3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b96db6 push ebx */
  push32((uint32_t)(EBX));
  /* 11b96db7 push esi */
  push32((uint32_t)(ESI));
  /* 11b96db8 push edi */
  push32((uint32_t)(EDI));
  /* 11b96db9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 11b96dbc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 11b96dc1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b96dc6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b96dc8 cmp dword ptr [0x11bce2f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce2f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b96dcf je 0x11b96dfc */
  if (C.zf) goto L_11b96dfc;
  /* 11b96dd1 mov ecx, dword ptr [0x11bce2f8] */
  ECX = (r32((uint32_t)(0x11bce2f8)));
  /* 11b96dd7 call 0x11b9109b */
  push32(0x11b96ddcu); f_11b9109b();
  /* 11b96ddc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b96de1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b96de3 je 0x11b96dfc */
  if (C.zf) goto L_11b96dfc;
  /* 11b96de5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b96de8 push eax */
  push32((uint32_t)(EAX));
  /* 11b96de9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b96dec push ecx */
  push32((uint32_t)(ECX));
  /* 11b96ded mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b96df0 push edx */
  push32((uint32_t)(EDX));
  /* 11b96df1 mov ecx, dword ptr [0x11bce2f8] */
  ECX = (r32((uint32_t)(0x11bce2f8)));
  /* 11b96df7 call 0x11b910cd */
  push32(0x11b96dfcu); f_11b910cd();
L_11b96dfc:;
  /* 11b96dfc pop edi */
  EDI = (pop32());
  /* 11b96dfd pop esi */
  ESI = (pop32());
  /* 11b96dfe pop ebx */
  EBX = (pop32());
  /* 11b96dff add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96e02 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b96e04 call 0x11b98330 */
  push32(0x11b96e09u); f_11b98330();
  /* 11b96e09 mov esp, ebp */
  ESP = (EBP);
  /* 11b96e0b pop ebp */
  EBP = (pop32());
  /* 11b96e0c ret  */
  ESPCHK(0x11b96db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e30 @ 0x11b96e30 (437 bytes, 146 insns) */
void f_11b96e30(void) {
  FTRACE(0x11b96e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b96e30 push ebp */
  push32((uint32_t)(EBP));
  /* 11b96e31 mov ebp, esp */
  EBP = (ESP);
  /* 11b96e33 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b96e36 push ebx */
  push32((uint32_t)(EBX));
  /* 11b96e37 push esi */
  push32((uint32_t)(ESI));
  /* 11b96e38 push edi */
  push32((uint32_t)(EDI));
  /* 11b96e39 push ecx */
  push32((uint32_t)(ECX));
  /* 11b96e3a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11b96e3d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11b96e42 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b96e47 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b96e49 pop ecx */
  ECX = (pop32());
  /* 11b96e4a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b96e4d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96e50 call 0x11b91032 */
  push32(0x11b96e55u); f_11b91032();
  /* 11b96e55 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b96e5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b96e5c je 0x11b96fd4 */
  if (C.zf) goto L_11b96fd4;
  /* 11b96e62 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96e65 mov cl, byte ptr [eax + 0x1c] */
  CL = (r8((uint32_t)(EAX + 0x1c)));
  /* 11b96e68 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11b96e6b cmp byte ptr [ebp - 8], 1 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b96e6f je 0x11b96f29 */
  if (C.zf) goto L_11b96f29;
  /* 11b96e75 cmp byte ptr [ebp - 8], 2 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b96e79 je 0x11b96e80 */
  if (C.zf) goto L_11b96e80;
  /* 11b96e7b jmp 0x11b96f7f */
  goto L_11b96f7f;
L_11b96e80:;
  /* 11b96e80 cmp dword ptr [0x11bce300], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce300))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b96e87 je 0x11b96ecf */
  if (C.zf) goto L_11b96ecf;
  /* 11b96e89 mov esi, esp */
  ESI = (ESP);
  /* 11b96e8b push 3 */
  push32((uint32_t)(0x3u));
  /* 11b96e8d mov edx, dword ptr [0x11bce300] */
  EDX = (r32((uint32_t)(0x11bce300)));
  /* 11b96e93 push edx */
  push32((uint32_t)(EDX));
  /* 11b96e94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96e97 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96e9a push eax */
  push32((uint32_t)(EAX));
  /* 11b96e9b call dword ptr [0x11bd055c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd055c))), 0x11b96ea1u);
  /* 11b96ea1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96ea4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b96ea6 call 0x11b98330 */
  push32(0x11b96eabu); f_11b98330();
  /* 11b96eab mov esi, esp */
  ESI = (ESP);
  /* 11b96ead push 0 */
  push32((uint32_t)(0x0u));
  /* 11b96eaf mov ecx, dword ptr [0x11bce300] */
  ECX = (r32((uint32_t)(0x11bce300)));
  /* 11b96eb5 push ecx */
  push32((uint32_t)(ECX));
  /* 11b96eb6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96eb9 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96ebc push edx */
  push32((uint32_t)(EDX));
  /* 11b96ebd call dword ptr [0x11bd055c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd055c))), 0x11b96ec3u);
  /* 11b96ec3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96ec6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b96ec8 call 0x11b98330 */
  push32(0x11b96ecdu); f_11b98330();
  /* 11b96ecd jmp 0x11b96f24 */
  goto L_11b96f24;
L_11b96ecf:;
  /* 11b96ecf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96ed2 call 0x11b9106e */
  push32(0x11b96ed7u); f_11b9106e();
  /* 11b96ed7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b96edc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b96ede jne 0x11b96f24 */
  if (!C.zf) goto L_11b96f24;
  /* 11b96ee0 mov esi, esp */
  ESI = (ESP);
  /* 11b96ee2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b96ee4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96ee7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96eea push eax */
  push32((uint32_t)(EAX));
  /* 11b96eeb call dword ptr [0x11bd0550] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0550))), 0x11b96ef1u);
  /* 11b96ef1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96ef4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b96ef6 call 0x11b98330 */
  push32(0x11b96efbu); f_11b98330();
  /* 11b96efb mov esi, esp */
  ESI = (ESP);
  /* 11b96efd push 0 */
  push32((uint32_t)(0x0u));
  /* 11b96eff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96f02 mov dl, byte ptr [ecx + 8] */
  DL = (r8((uint32_t)(ECX + 0x8)));
  /* 11b96f05 push edx */
  push32((uint32_t)(EDX));
  /* 11b96f06 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96f09 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96f0c push eax */
  push32((uint32_t)(EAX));
  /* 11b96f0d mov cl, byte ptr [0x11bce2fc] */
  CL = (r8((uint32_t)(0x11bce2fc)));
  /* 11b96f13 push ecx */
  push32((uint32_t)(ECX));
  /* 11b96f14 call dword ptr [0x11bd0558] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0558))), 0x11b96f1au);
  /* 11b96f1a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96f1d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b96f1f call 0x11b98330 */
  push32(0x11b96f24u); f_11b98330();
L_11b96f24:;
  /* 11b96f24 jmp 0x11b96fd4 */
  goto L_11b96fd4;
L_11b96f29:;
  /* 11b96f29 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96f2c call 0x11b9106e */
  push32(0x11b96f31u); f_11b9106e();
  /* 11b96f31 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b96f36 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b96f38 jne 0x11b96f7d */
  if (!C.zf) goto L_11b96f7d;
  /* 11b96f3a mov esi, esp */
  ESI = (ESP);
  /* 11b96f3c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b96f3e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96f41 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96f44 push edx */
  push32((uint32_t)(EDX));
  /* 11b96f45 call dword ptr [0x11bd0550] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0550))), 0x11b96f4bu);
  /* 11b96f4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96f4e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b96f50 call 0x11b98330 */
  push32(0x11b96f55u); f_11b98330();
  /* 11b96f55 mov esi, esp */
  ESI = (ESP);
  /* 11b96f57 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b96f59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96f5c mov cl, byte ptr [eax + 8] */
  CL = (r8((uint32_t)(EAX + 0x8)));
  /* 11b96f5f push ecx */
  push32((uint32_t)(ECX));
  /* 11b96f60 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96f63 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96f66 push edx */
  push32((uint32_t)(EDX));
  /* 11b96f67 mov al, byte ptr [0x11bce2fc] */
  AL = (r8((uint32_t)(0x11bce2fc)));
  /* 11b96f6c push eax */
  push32((uint32_t)(EAX));
  /* 11b96f6d call dword ptr [0x11bd0558] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0558))), 0x11b96f73u);
  /* 11b96f73 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96f76 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b96f78 call 0x11b98330 */
  push32(0x11b96f7du); f_11b98330();
L_11b96f7d:;
  /* 11b96f7d jmp 0x11b96fd4 */
  goto L_11b96fd4;
L_11b96f7f:;
  /* 11b96f7f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96f82 call 0x11b9106e */
  push32(0x11b96f87u); f_11b9106e();
  /* 11b96f87 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b96f8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b96f8e jne 0x11b96fd4 */
  if (!C.zf) goto L_11b96fd4;
  /* 11b96f90 mov esi, esp */
  ESI = (ESP);
  /* 11b96f92 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b96f94 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96f97 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96f9a push ecx */
  push32((uint32_t)(ECX));
  /* 11b96f9b call dword ptr [0x11bd0550] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0550))), 0x11b96fa1u);
  /* 11b96fa1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96fa4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b96fa6 call 0x11b98330 */
  push32(0x11b96fabu); f_11b98330();
  /* 11b96fab mov esi, esp */
  ESI = (ESP);
  /* 11b96fad push 0 */
  push32((uint32_t)(0x0u));
  /* 11b96faf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96fb2 mov al, byte ptr [edx + 8] */
  AL = (r8((uint32_t)(EDX + 0x8)));
  /* 11b96fb5 push eax */
  push32((uint32_t)(EAX));
  /* 11b96fb6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b96fb9 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96fbc push ecx */
  push32((uint32_t)(ECX));
  /* 11b96fbd mov dl, byte ptr [0x11bce2fc] */
  DL = (r8((uint32_t)(0x11bce2fc)));
  /* 11b96fc3 push edx */
  push32((uint32_t)(EDX));
  /* 11b96fc4 call dword ptr [0x11bd0560] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0560))), 0x11b96fcau);
  /* 11b96fca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96fcd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b96fcf call 0x11b98330 */
  push32(0x11b96fd4u); f_11b98330();
L_11b96fd4:;
  /* 11b96fd4 pop edi */
  EDI = (pop32());
  /* 11b96fd5 pop esi */
  ESI = (pop32());
  /* 11b96fd6 pop ebx */
  EBX = (pop32());
  /* 11b96fd7 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b96fda cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b96fdc call 0x11b98330 */
  push32(0x11b96fe1u); f_11b98330();
  /* 11b96fe1 mov esp, ebp */
  ESP = (EBP);
  /* 11b96fe3 pop ebp */
  EBP = (pop32());
  /* 11b96fe4 ret  */
  ESPCHK(0x11b96e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10007060 @ 0x11b97060 (235 bytes, 78 insns) */
void f_11b97060(void) {
  FTRACE(0x11b97060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b97060 push ebp */
  push32((uint32_t)(EBP));
  /* 11b97061 mov ebp, esp */
  EBP = (ESP);
  /* 11b97063 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b97069 push ebx */
  push32((uint32_t)(EBX));
  /* 11b9706a push esi */
  push32((uint32_t)(ESI));
  /* 11b9706b push edi */
  push32((uint32_t)(EDI));
  /* 11b9706c push ecx */
  push32((uint32_t)(ECX));
  /* 11b9706d lea edi, [ebp - 0x88] */
  EDI = ((uint32_t)(EBP + -0x88));
  /* 11b97073 mov ecx, 0x22 */
  ECX = (0x22u);
  /* 11b97078 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b9707d rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b9707f pop ecx */
  ECX = (pop32());
  /* 11b97080 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b97083 mov dword ptr [ebp - 0x38], 0 */
  w32((uint32_t)(EBP + -0x38), (0x0u));
  /* 11b9708a mov dword ptr [ebp - 0x34], 0 */
  w32((uint32_t)(EBP + -0x34), (0x0u));
  /* 11b97091 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97094 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97097 mov esi, esp */
  ESI = (ESP);
  /* 11b97099 push eax */
  push32((uint32_t)(EAX));
  /* 11b9709a call dword ptr [0x11bd0578] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0578))), 0x11b970a0u);
  /* 11b970a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b970a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b970a5 call 0x11b98330 */
  push32(0x11b970aau); f_11b98330();
  /* 11b970aa mov dword ptr [ebp - 0x3c], eax */
  w32((uint32_t)(EBP + -0x3c), (EAX));
  /* 11b970ad cmp dword ptr [ebp - 0x3c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b970b1 jle 0x11b97124 */
  if ((C.zf||C.sf!=C.of)) goto L_11b97124;
  /* 11b970b3 mov dword ptr [ebp - 0x40], 0 */
  w32((uint32_t)(EBP + -0x40), (0x0u));
  /* 11b970ba mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
  /* 11b970c1 mov dword ptr [ebp - 0x48], 0 */
  w32((uint32_t)(EBP + -0x48), (0x0u));
  /* 11b970c8 jmp 0x11b970d3 */
  goto L_11b970d3;
L_11b970ca:;
  /* 11b970ca mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11b970cd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b970d0 mov dword ptr [ebp - 0x48], ecx */
  w32((uint32_t)(EBP + -0x48), (ECX));
L_11b970d3:;
  /* 11b970d3 mov edx, dword ptr [ebp - 0x48] */
  EDX = (r32((uint32_t)(EBP + -0x48)));
  /* 11b970d6 cmp edx, dword ptr [ebp - 0x3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b970d9 jge 0x11b97110 */
  if ((C.sf==C.of)) goto L_11b97110;
  /* 11b970db mov esi, esp */
  ESI = (ESP);
  /* 11b970dd lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 11b970e0 push eax */
  push32((uint32_t)(EAX));
  /* 11b970e1 mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11b970e4 push ecx */
  push32((uint32_t)(ECX));
  /* 11b970e5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b970e8 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b970eb push edx */
  push32((uint32_t)(EDX));
  /* 11b970ec call dword ptr [0x11bd057c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd057c))), 0x11b970f2u);
  /* 11b970f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b970f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b970f7 call 0x11b98330 */
  push32(0x11b970fcu); f_11b98330();
  /* 11b970fc mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11b970ff add eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97102 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 11b97105 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11b97108 add ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9710b mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
  /* 11b9710e jmp 0x11b970ca */
  goto L_11b970ca;
L_11b97110:;
  /* 11b97110 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11b97113 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b97114 idiv dword ptr [ebp - 0x3c] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBP + -0x3c))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b97117 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 11b9711a mov eax, dword ptr [ebp - 0x44] */
  EAX = (r32((uint32_t)(EBP + -0x44)));
  /* 11b9711d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b9711e idiv dword ptr [ebp - 0x3c] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBP + -0x3c))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b97121 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_11b97124:;
  /* 11b97124 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b97127 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11b9712a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11b9712c mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11b9712f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11b97132 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b97135 pop edi */
  EDI = (pop32());
  /* 11b97136 pop esi */
  ESI = (pop32());
  /* 11b97137 pop ebx */
  EBX = (pop32());
  /* 11b97138 add esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9713e cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b97140 call 0x11b98330 */
  push32(0x11b97145u); f_11b98330();
  /* 11b97145 mov esp, ebp */
  ESP = (EBP);
  /* 11b97147 pop ebp */
  EBP = (pop32());
  /* 11b97148 ret 4 */
  ESPCHK(0x11b97060u, _esp0);
  ESP += 8; return;
}

/* FUN_10007190 @ 0x11b97190 (120 bytes, 47 insns) */
void f_11b97190(void) {
  FTRACE(0x11b97190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b97190 push ebp */
  push32((uint32_t)(EBP));
  /* 11b97191 mov ebp, esp */
  EBP = (ESP);
  /* 11b97193 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b97196 push ebx */
  push32((uint32_t)(EBX));
  /* 11b97197 push esi */
  push32((uint32_t)(ESI));
  /* 11b97198 push edi */
  push32((uint32_t)(EDI));
  /* 11b97199 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9719a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11b9719d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11b971a2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b971a7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b971a9 pop ecx */
  ECX = (pop32());
  /* 11b971aa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b971ad mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11b971b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b971b4 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b971b7 mov esi, esp */
  ESI = (ESP);
  /* 11b971b9 push eax */
  push32((uint32_t)(EAX));
  /* 11b971ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b971bd add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b971c0 push ecx */
  push32((uint32_t)(ECX));
  /* 11b971c1 call dword ptr [0x11bd0564] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0564))), 0x11b971c7u);
  /* 11b971c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b971ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b971cc call 0x11b98330 */
  push32(0x11b971d1u); f_11b98330();
  /* 11b971d1 mov esi, eax */
  ESI = (EAX);
  /* 11b971d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b971d6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b971d9 mov edi, esp */
  EDI = (ESP);
  /* 11b971db push edx */
  push32((uint32_t)(EDX));
  /* 11b971dc call dword ptr [0x11bd0578] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0578))), 0x11b971e2u);
  /* 11b971e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b971e5 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b971e7 call 0x11b98330 */
  push32(0x11b971ecu); f_11b98330();
  /* 11b971ec cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b971ee jne 0x11b971f4 */
  if (!C.zf) goto L_11b971f4;
  /* 11b971f0 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11b971f4:;
  /* 11b971f4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11b971f7 pop edi */
  EDI = (pop32());
  /* 11b971f8 pop esi */
  ESI = (pop32());
  /* 11b971f9 pop ebx */
  EBX = (pop32());
  /* 11b971fa add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b971fd cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b971ff call 0x11b98330 */
  push32(0x11b97204u); f_11b98330();
  /* 11b97204 mov esp, ebp */
  ESP = (EBP);
  /* 11b97206 pop ebp */
  EBP = (pop32());
  /* 11b97207 ret  */
  ESPCHK(0x11b97190u, _esp0);
  ESP += 4; return;
}

/* FUN_10007230 @ 0x11b97230 (86 bytes, 35 insns) */
void f_11b97230(void) {
  FTRACE(0x11b97230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b97230 push ebp */
  push32((uint32_t)(EBP));
  /* 11b97231 mov ebp, esp */
  EBP = (ESP);
  /* 11b97233 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b97236 push ebx */
  push32((uint32_t)(EBX));
  /* 11b97237 push esi */
  push32((uint32_t)(ESI));
  /* 11b97238 push edi */
  push32((uint32_t)(EDI));
  /* 11b97239 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9723a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11b9723d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11b97242 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b97247 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b97249 pop ecx */
  ECX = (pop32());
  /* 11b9724a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b9724d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11b97251 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97254 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97257 mov esi, esp */
  ESI = (ESP);
  /* 11b97259 push eax */
  push32((uint32_t)(EAX));
  /* 11b9725a call dword ptr [0x11bd0578] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0578))), 0x11b97260u);
  /* 11b97260 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97263 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b97265 call 0x11b98330 */
  push32(0x11b9726au); f_11b98330();
  /* 11b9726a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9726c jle 0x11b97272 */
  if ((C.zf||C.sf!=C.of)) goto L_11b97272;
  /* 11b9726e mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11b97272:;
  /* 11b97272 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11b97275 pop edi */
  EDI = (pop32());
  /* 11b97276 pop esi */
  ESI = (pop32());
  /* 11b97277 pop ebx */
  EBX = (pop32());
  /* 11b97278 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9727b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9727d call 0x11b98330 */
  push32(0x11b97282u); f_11b98330();
  /* 11b97282 mov esp, ebp */
  ESP = (EBP);
  /* 11b97284 pop ebp */
  EBP = (pop32());
  /* 11b97285 ret  */
  ESPCHK(0x11b97230u, _esp0);
  ESP += 4; return;
}

/* FUN_100072a0 @ 0x11b972a0 (42 bytes, 21 insns) */
void f_11b972a0(void) {
  FTRACE(0x11b972a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b972a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b972a1 mov ebp, esp */
  EBP = (ESP);
  /* 11b972a3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b972a6 push ebx */
  push32((uint32_t)(EBX));
  /* 11b972a7 push esi */
  push32((uint32_t)(ESI));
  /* 11b972a8 push edi */
  push32((uint32_t)(EDI));
  /* 11b972a9 push ecx */
  push32((uint32_t)(ECX));
  /* 11b972aa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11b972ad mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11b972b2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b972b7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b972b9 pop ecx */
  ECX = (pop32());
  /* 11b972ba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b972bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b972c0 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b972c3 pop edi */
  EDI = (pop32());
  /* 11b972c4 pop esi */
  ESI = (pop32());
  /* 11b972c5 pop ebx */
  EBX = (pop32());
  /* 11b972c6 mov esp, ebp */
  ESP = (EBP);
  /* 11b972c8 pop ebp */
  EBP = (pop32());
  /* 11b972c9 ret  */
  ESPCHK(0x11b972a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100072e0 @ 0x11b972e0 (77 bytes, 32 insns) */
void f_11b972e0(void) {
  FTRACE(0x11b972e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b972e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b972e1 mov ebp, esp */
  EBP = (ESP);
  /* 11b972e3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b972e6 push ebx */
  push32((uint32_t)(EBX));
  /* 11b972e7 push esi */
  push32((uint32_t)(ESI));
  /* 11b972e8 push edi */
  push32((uint32_t)(EDI));
  /* 11b972e9 push ecx */
  push32((uint32_t)(ECX));
  /* 11b972ea lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11b972ed mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11b972f2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b972f7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b972f9 pop ecx */
  ECX = (pop32());
  /* 11b972fa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b972fd mov esi, esp */
  ESI = (ESP);
  /* 11b972ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b97302 push eax */
  push32((uint32_t)(EAX));
  /* 11b97303 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97306 add ecx, 0xd */
  { uint32_t _a=(ECX),_b=(0xdu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97309 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9730a call dword ptr [0x11bd0548] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0548))), 0x11b97310u);
  /* 11b97310 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97313 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b97315 call 0x11b98330 */
  push32(0x11b9731au); f_11b98330();
  /* 11b9731a pop edi */
  EDI = (pop32());
  /* 11b9731b pop esi */
  ESI = (pop32());
  /* 11b9731c pop ebx */
  EBX = (pop32());
  /* 11b9731d add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97320 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b97322 call 0x11b98330 */
  push32(0x11b97327u); f_11b98330();
  /* 11b97327 mov esp, ebp */
  ESP = (EBP);
  /* 11b97329 pop ebp */
  EBP = (pop32());
  /* 11b9732a ret 4 */
  ESPCHK(0x11b972e0u, _esp0);
  ESP += 8; return;
}

/* FUN_10007340 @ 0x11b97340 (413 bytes, 143 insns) */
void f_11b97340(void) {
  FTRACE(0x11b97340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b97340 push ebp */
  push32((uint32_t)(EBP));
  /* 11b97341 mov ebp, esp */
  EBP = (ESP);
  /* 11b97343 sub esp, 0x54 */
  { uint32_t _a=(ESP),_b=(0x54u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b97346 push ebx */
  push32((uint32_t)(EBX));
  /* 11b97347 push esi */
  push32((uint32_t)(ESI));
  /* 11b97348 push edi */
  push32((uint32_t)(EDI));
  /* 11b97349 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9734a lea edi, [ebp - 0x54] */
  EDI = ((uint32_t)(EBP + -0x54));
  /* 11b9734d mov ecx, 0x15 */
  ECX = (0x15u);
  /* 11b97352 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b97357 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b97359 pop ecx */
  ECX = (pop32());
  /* 11b9735a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b9735d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97360 call 0x11b91091 */
  push32(0x11b97365u); f_11b91091();
  /* 11b97365 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b9736a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9736c je 0x11b974cc */
  if (C.zf) goto L_11b974cc;
  /* 11b97372 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97375 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b97377 mov cl, byte ptr [eax + 0xc] */
  CL = (r8((uint32_t)(EAX + 0xc)));
  /* 11b9737a cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9737d jne 0x11b97428 */
  if (!C.zf) goto L_11b97428;
  /* 11b97383 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11b97388 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11b9738b push edx */
  push32((uint32_t)(EDX));
  /* 11b9738c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9738f call 0x11b91087 */
  push32(0x11b97394u); f_11b91087();
  /* 11b97394 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b97397 push ecx */
  push32((uint32_t)(ECX));
  /* 11b97398 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11b9739a push edx */
  push32((uint32_t)(EDX));
  /* 11b9739b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9739e add eax, 0x15 */
  { uint32_t _a=(EAX),_b=(0x15u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b973a1 push eax */
  push32((uint32_t)(EAX));
  /* 11b973a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b973a5 call 0x11b91221 */
  push32(0x11b973aau); f_11b91221();
  /* 11b973aa mov esi, esp */
  ESI = (ESP);
  /* 11b973ac push 0 */
  push32((uint32_t)(0x0u));
  /* 11b973ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b973b1 add ecx, 0x15 */
  { uint32_t _a=(ECX),_b=(0x15u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b973b4 push ecx */
  push32((uint32_t)(ECX));
  /* 11b973b5 call dword ptr [0x11bd054c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd054c))), 0x11b973bbu);
  /* 11b973bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b973be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b973c0 call 0x11b98330 */
  push32(0x11b973c5u); f_11b98330();
  /* 11b973c5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b973c8 jge 0x11b973d3 */
  if ((C.sf==C.of)) goto L_11b973d3;
  /* 11b973ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b973cd mov byte ptr [edx + 0xc], 2 */
  w8((uint32_t)(EDX + 0xc), (0x2u));
  /* 11b973d1 jmp 0x11b97428 */
  goto L_11b97428;
L_11b973d3:;
  /* 11b973d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b973d6 call 0x11b91127 */
  push32(0x11b973dbu); f_11b91127();
  /* 11b973db and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b973e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b973e2 jne 0x11b97428 */
  if (!C.zf) goto L_11b97428;
  /* 11b973e4 mov esi, esp */
  ESI = (ESP);
  /* 11b973e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b973e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b973eb add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b973ee push eax */
  push32((uint32_t)(EAX));
  /* 11b973ef call dword ptr [0x11bd0550] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0550))), 0x11b973f5u);
  /* 11b973f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b973f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b973fa call 0x11b98330 */
  push32(0x11b973ffu); f_11b98330();
  /* 11b973ff mov esi, esp */
  ESI = (ESP);
  /* 11b97401 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b97403 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97406 mov dl, byte ptr [ecx + 8] */
  DL = (r8((uint32_t)(ECX + 0x8)));
  /* 11b97409 push edx */
  push32((uint32_t)(EDX));
  /* 11b9740a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9740d add eax, 0x1d */
  { uint32_t _a=(EAX),_b=(0x1du),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97410 push eax */
  push32((uint32_t)(EAX));
  /* 11b97411 mov cl, byte ptr [0x11bcbd6c] */
  CL = (r8((uint32_t)(0x11bcbd6c)));
  /* 11b97417 push ecx */
  push32((uint32_t)(ECX));
  /* 11b97418 call dword ptr [0x11bd0560] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0560))), 0x11b9741eu);
  /* 11b9741e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97421 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b97423 call 0x11b98330 */
  push32(0x11b97428u); f_11b98330();
L_11b97428:;
  /* 11b97428 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9742b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9742d mov al, byte ptr [edx + 0xc] */
  AL = (r8((uint32_t)(EDX + 0xc)));
  /* 11b97430 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b97433 jne 0x11b974cc */
  if (!C.zf) goto L_11b974cc;
  /* 11b97439 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 11b9743e lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 11b97441 push ecx */
  push32((uint32_t)(ECX));
  /* 11b97442 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97445 call 0x11b91087 */
  push32(0x11b9744au); f_11b91087();
  /* 11b9744a mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b9744d push edx */
  push32((uint32_t)(EDX));
  /* 11b9744e mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 11b97450 push eax */
  push32((uint32_t)(EAX));
  /* 11b97451 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97454 add ecx, 0x15 */
  { uint32_t _a=(ECX),_b=(0x15u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97457 push ecx */
  push32((uint32_t)(ECX));
  /* 11b97458 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9745b call 0x11b91221 */
  push32(0x11b97460u); f_11b91221();
  /* 11b97460 mov esi, esp */
  ESI = (ESP);
  /* 11b97462 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b97464 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97467 add edx, 0x15 */
  { uint32_t _a=(EDX),_b=(0x15u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9746a push edx */
  push32((uint32_t)(EDX));
  /* 11b9746b call dword ptr [0x11bd054c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd054c))), 0x11b97471u);
  /* 11b97471 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97474 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b97476 call 0x11b98330 */
  push32(0x11b9747bu); f_11b98330();
  /* 11b9747b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9747e jge 0x11b974c5 */
  if ((C.sf==C.of)) goto L_11b974c5;
  /* 11b97480 mov esi, esp */
  ESI = (ESP);
  /* 11b97482 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b97484 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97487 add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9748a push eax */
  push32((uint32_t)(EAX));
  /* 11b9748b call dword ptr [0x11bd0550] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0550))), 0x11b97491u);
  /* 11b97491 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97494 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b97496 call 0x11b98330 */
  push32(0x11b9749bu); f_11b98330();
  /* 11b9749b mov esi, esp */
  ESI = (ESP);
  /* 11b9749d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9749f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b974a2 mov dl, byte ptr [ecx + 8] */
  DL = (r8((uint32_t)(ECX + 0x8)));
  /* 11b974a5 push edx */
  push32((uint32_t)(EDX));
  /* 11b974a6 mov eax, dword ptr [0x11bce304] */
  EAX = (r32((uint32_t)(0x11bce304)));
  /* 11b974ab push eax */
  push32((uint32_t)(EAX));
  /* 11b974ac mov cl, byte ptr [0x11bcbd6c] */
  CL = (r8((uint32_t)(0x11bcbd6c)));
  /* 11b974b2 push ecx */
  push32((uint32_t)(ECX));
  /* 11b974b3 call dword ptr [0x11bd0560] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0560))), 0x11b974b9u);
  /* 11b974b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b974bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b974be call 0x11b98330 */
  push32(0x11b974c3u); f_11b98330();
  /* 11b974c3 jmp 0x11b974cc */
  goto L_11b974cc;
L_11b974c5:;
  /* 11b974c5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b974c8 mov byte ptr [edx + 0xc], 1 */
  w8((uint32_t)(EDX + 0xc), (0x1u));
L_11b974cc:;
  /* 11b974cc pop edi */
  EDI = (pop32());
  /* 11b974cd pop esi */
  ESI = (pop32());
  /* 11b974ce pop ebx */
  EBX = (pop32());
  /* 11b974cf add esp, 0x54 */
  { uint32_t _a=(ESP),_b=(0x54u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b974d2 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b974d4 call 0x11b98330 */
  push32(0x11b974d9u); f_11b98330();
  /* 11b974d9 mov esp, ebp */
  ESP = (EBP);
  /* 11b974db pop ebp */
  EBP = (pop32());
  /* 11b974dc ret  */
  ESPCHK(0x11b97340u, _esp0);
  ESP += 4; return;
}

/* FUN_10007550 @ 0x11b97550 (311 bytes, 104 insns) */
void f_11b97550(void) {
  FTRACE(0x11b97550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b97550 push ebp */
  push32((uint32_t)(EBP));
  /* 11b97551 mov ebp, esp */
  EBP = (ESP);
  /* 11b97553 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b97559 push ebx */
  push32((uint32_t)(EBX));
  /* 11b9755a push esi */
  push32((uint32_t)(ESI));
  /* 11b9755b push edi */
  push32((uint32_t)(EDI));
  /* 11b9755c push ecx */
  push32((uint32_t)(ECX));
  /* 11b9755d lea edi, [ebp - 0x88] */
  EDI = ((uint32_t)(EBP + -0x88));
  /* 11b97563 mov ecx, 0x22 */
  ECX = (0x22u);
  /* 11b97568 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b9756d rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b9756f pop ecx */
  ECX = (pop32());
  /* 11b97570 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b97573 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b97576 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b97579 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9757c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b9757f lea edx, [ebp - 0x30] */
  EDX = ((uint32_t)(EBP + -0x30));
  /* 11b97582 push edx */
  push32((uint32_t)(EDX));
  /* 11b97583 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97586 call 0x11b91087 */
  push32(0x11b9758bu); f_11b91087();
  /* 11b9758b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b9758d mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b97590 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11b97593 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11b97596 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b97599 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11b9759c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b9759f mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 11b975a2 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b975a5 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b975a8 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 11b975ab fild dword ptr [ebp - 0x34] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + -0x34)));
  /* 11b975ae mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b975b1 sub eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b975b4 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 11b975b7 fild dword ptr [ebp - 0x38] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + -0x38)));
  /* 11b975ba fdivp st(1) */
  FPU_ST(1) = FPU_ST(1) / FPU_ST(0);
  (void)fpu_pop();
  /* 11b975bc sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b975bf fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 11b975c2 call 0x11b984e4 */
  push32(0x11b975c7u); f_11b984e4();
  /* 11b975c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b975ca fstp qword ptr [ebp - 0x24] */
  wf64((uint32_t)(EBP + -0x24), FPU_ST(0));
  (void)fpu_pop();
  /* 11b975cd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b975d0 sub ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b975d3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b975d5 jge 0x11b975e3 */
  if ((C.sf==C.of)) goto L_11b975e3;
  /* 11b975d7 fld qword ptr [0x11bc8040] */
  fpu_push(rf64((uint32_t)(0x11bc8040)));
  /* 11b975dd fadd qword ptr [ebp - 0x24] */
  FPU_ST(0) = FPU_ST(0) + (rf64((uint32_t)(EBP + -0x24)));
  /* 11b975e0 fstp qword ptr [ebp - 0x24] */
  wf64((uint32_t)(EBP + -0x24), FPU_ST(0));
  (void)fpu_pop();
L_11b975e3:;
  /* 11b975e3 fld qword ptr [ebp - 0x24] */
  fpu_push(rf64((uint32_t)(EBP + -0x24)));
  /* 11b975e6 fmul qword ptr [0x11bc8030] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(0x11bc8030)));
  /* 11b975ec fdiv qword ptr [0x11bc8020] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(0x11bc8020)));
  /* 11b975f2 call 0x11b9861c */
  push32(0x11b975f7u); f_11b9861c();
  /* 11b975f7 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11b975fa fild dword ptr [ebp + 0x10] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + 0x10)));
  /* 11b975fd fstp qword ptr [ebp - 0x40] */
  wf64((uint32_t)(EBP + -0x40), FPU_ST(0));
  (void)fpu_pop();
  /* 11b97600 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b97603 push edx */
  push32((uint32_t)(EDX));
  /* 11b97604 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b97607 push eax */
  push32((uint32_t)(EAX));
  /* 11b97608 call 0x11b98434 */
  push32(0x11b9760du); f_11b98434();
  /* 11b9760d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97610 fmul qword ptr [ebp - 0x40] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x40)));
  /* 11b97613 fiadd dword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) + ((double)(int32_t)r32((uint32_t)(EBP + -0x8)));
  /* 11b97616 call 0x11b9861c */
  push32(0x11b9761bu); f_11b9861c();
  /* 11b9761b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11b9761e fild dword ptr [ebp + 0x10] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + 0x10)));
  /* 11b97621 fstp qword ptr [ebp - 0x48] */
  wf64((uint32_t)(EBP + -0x48), FPU_ST(0));
  (void)fpu_pop();
  /* 11b97624 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b97627 push ecx */
  push32((uint32_t)(ECX));
  /* 11b97628 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b9762b push edx */
  push32((uint32_t)(EDX));
  /* 11b9762c call 0x11b98384 */
  push32(0x11b97631u); f_11b98384();
  /* 11b97631 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97634 fmul qword ptr [ebp - 0x48] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x48)));
  /* 11b97637 fiadd dword ptr [ebp - 0xc] */
  FPU_ST(0) = FPU_ST(0) + ((double)(int32_t)r32((uint32_t)(EBP + -0xc)));
  /* 11b9763a call 0x11b9861c */
  push32(0x11b9763fu); f_11b9861c();
  /* 11b9763f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11b97642 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11b97644 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b97647 push eax */
  push32((uint32_t)(EAX));
  /* 11b97648 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b9764b push ecx */
  push32((uint32_t)(ECX));
  /* 11b9764c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9764f add edx, 0x1d */
  { uint32_t _a=(EDX),_b=(0x1du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97652 push edx */
  push32((uint32_t)(EDX));
  /* 11b97653 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97656 call 0x11b91221 */
  push32(0x11b9765bu); f_11b91221();
  /* 11b9765b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b9765e add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97663 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97666 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11b97669 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9766c call 0x11b9119a */
  push32(0x11b97671u); f_11b9119a();
  /* 11b97671 pop edi */
  EDI = (pop32());
  /* 11b97672 pop esi */
  ESI = (pop32());
  /* 11b97673 pop ebx */
  EBX = (pop32());
  /* 11b97674 add esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9767a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9767c call 0x11b98330 */
  push32(0x11b97681u); f_11b98330();
  /* 11b97681 mov esp, ebp */
  ESP = (EBP);
  /* 11b97683 pop ebp */
  EBP = (pop32());
  /* 11b97684 ret 0xc */
  ESPCHK(0x11b97550u, _esp0);
  ESP += 16; return;
}

/* FUN_100076e0 @ 0x11b976e0 (198 bytes, 71 insns) */
void f_11b976e0(void) {
  FTRACE(0x11b976e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b976e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b976e1 mov ebp, esp */
  EBP = (ESP);
  /* 11b976e3 sub esp, 0x78 */
  { uint32_t _a=(ESP),_b=(0x78u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b976e6 push ebx */
  push32((uint32_t)(EBX));
  /* 11b976e7 push esi */
  push32((uint32_t)(ESI));
  /* 11b976e8 push edi */
  push32((uint32_t)(EDI));
  /* 11b976e9 push ecx */
  push32((uint32_t)(ECX));
  /* 11b976ea lea edi, [ebp - 0x78] */
  EDI = ((uint32_t)(EBP + -0x78));
  /* 11b976ed mov ecx, 0x1e */
  ECX = (0x1eu);
  /* 11b976f2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b976f7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b976f9 pop ecx */
  ECX = (pop32());
  /* 11b976fa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b976fd mov esi, esp */
  ESI = (ESP);
  /* 11b976ff lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 11b97702 push eax */
  push32((uint32_t)(EAX));
  /* 11b97703 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b97705 mov ecx, dword ptr [0x11bce308] */
  ECX = (r32((uint32_t)(0x11bce308)));
  /* 11b9770b push ecx */
  push32((uint32_t)(ECX));
  /* 11b9770c call dword ptr [0x11bd057c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd057c))), 0x11b97712u);
  /* 11b97712 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97715 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b97717 call 0x11b98330 */
  push32(0x11b9771cu); f_11b98330();
  /* 11b9771c mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b9771f mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 11b97722 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b97725 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 11b97728 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9772b mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 11b9772e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b97731 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11b97734 mov esi, esp */
  ESI = (ESP);
  /* 11b97736 lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 11b97739 push eax */
  push32((uint32_t)(EAX));
  /* 11b9773a call dword ptr [0x11bd04d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd04d4))), 0x11b97740u);
  /* 11b97740 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97743 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b97745 call 0x11b98330 */
  push32(0x11b9774au); f_11b98330();
  /* 11b9774a mov esi, esp */
  ESI = (ESP);
  /* 11b9774c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9774f push ecx */
  push32((uint32_t)(ECX));
  /* 11b97750 mov edx, dword ptr [0x11bce308] */
  EDX = (r32((uint32_t)(0x11bce308)));
  /* 11b97756 push edx */
  push32((uint32_t)(EDX));
  /* 11b97757 mov eax, dword ptr [0x11bce304] */
  EAX = (r32((uint32_t)(0x11bce304)));
  /* 11b9775c push eax */
  push32((uint32_t)(EAX));
  /* 11b9775d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b97760 push ecx */
  push32((uint32_t)(ECX));
  /* 11b97761 call dword ptr [0x11bd04d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd04d8))), 0x11b97767u);
  /* 11b97767 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9776a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9776c call 0x11b98330 */
  push32(0x11b97771u); f_11b98330();
  /* 11b97771 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11b97774 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11b97777 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11b9777a mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11b9777d mov esi, esp */
  ESI = (ESP);
  /* 11b9777f lea ecx, [ebp - 0x30] */
  ECX = ((uint32_t)(EBP + -0x30));
  /* 11b97782 push ecx */
  push32((uint32_t)(ECX));
  /* 11b97783 call dword ptr [0x11bd04d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd04d4))), 0x11b97789u);
  /* 11b97789 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9778c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9778e call 0x11b98330 */
  push32(0x11b97793u); f_11b98330();
  /* 11b97793 pop edi */
  EDI = (pop32());
  /* 11b97794 pop esi */
  ESI = (pop32());
  /* 11b97795 pop ebx */
  EBX = (pop32());
  /* 11b97796 add esp, 0x78 */
  { uint32_t _a=(ESP),_b=(0x78u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97799 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9779b call 0x11b98330 */
  push32(0x11b977a0u); f_11b98330();
  /* 11b977a0 mov esp, ebp */
  ESP = (EBP);
  /* 11b977a2 pop ebp */
  EBP = (pop32());
  /* 11b977a3 ret 0x10 */
  ESPCHK(0x11b976e0u, _esp0);
  ESP += 20; return;
}

/* FUN_100077e0 @ 0x11b977e0 (120 bytes, 47 insns) */
void f_11b977e0(void) {
  FTRACE(0x11b977e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b977e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b977e1 mov ebp, esp */
  EBP = (ESP);
  /* 11b977e3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b977e6 push ebx */
  push32((uint32_t)(EBX));
  /* 11b977e7 push esi */
  push32((uint32_t)(ESI));
  /* 11b977e8 push edi */
  push32((uint32_t)(EDI));
  /* 11b977e9 push ecx */
  push32((uint32_t)(ECX));
  /* 11b977ea lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11b977ed mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11b977f2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b977f7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b977f9 pop ecx */
  ECX = (pop32());
  /* 11b977fa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b977fd mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11b97801 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97804 add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97807 mov esi, esp */
  ESI = (ESP);
  /* 11b97809 push eax */
  push32((uint32_t)(EAX));
  /* 11b9780a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9780d add ecx, 0x1d */
  { uint32_t _a=(ECX),_b=(0x1du),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97810 push ecx */
  push32((uint32_t)(ECX));
  /* 11b97811 call dword ptr [0x11bd0564] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0564))), 0x11b97817u);
  /* 11b97817 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9781a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9781c call 0x11b98330 */
  push32(0x11b97821u); f_11b98330();
  /* 11b97821 mov esi, eax */
  ESI = (EAX);
  /* 11b97823 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97826 add edx, 0xd */
  { uint32_t _a=(EDX),_b=(0xdu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97829 mov edi, esp */
  EDI = (ESP);
  /* 11b9782b push edx */
  push32((uint32_t)(EDX));
  /* 11b9782c call dword ptr [0x11bd0578] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0578))), 0x11b97832u);
  /* 11b97832 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97835 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b97837 call 0x11b98330 */
  push32(0x11b9783cu); f_11b98330();
  /* 11b9783c cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9783e jne 0x11b97844 */
  if (!C.zf) goto L_11b97844;
  /* 11b97840 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11b97844:;
  /* 11b97844 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11b97847 pop edi */
  EDI = (pop32());
  /* 11b97848 pop esi */
  ESI = (pop32());
  /* 11b97849 pop ebx */
  EBX = (pop32());
  /* 11b9784a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9784d cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9784f call 0x11b98330 */
  push32(0x11b97854u); f_11b98330();
  /* 11b97854 mov esp, ebp */
  ESP = (EBP);
  /* 11b97856 pop ebp */
  EBP = (pop32());
  /* 11b97857 ret  */
  ESPCHK(0x11b977e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007880 @ 0x11b97880 (86 bytes, 35 insns) */
void f_11b97880(void) {
  FTRACE(0x11b97880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b97880 push ebp */
  push32((uint32_t)(EBP));
  /* 11b97881 mov ebp, esp */
  EBP = (ESP);
  /* 11b97883 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b97886 push ebx */
  push32((uint32_t)(EBX));
  /* 11b97887 push esi */
  push32((uint32_t)(ESI));
  /* 11b97888 push edi */
  push32((uint32_t)(EDI));
  /* 11b97889 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9788a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11b9788d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11b97892 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b97897 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b97899 pop ecx */
  ECX = (pop32());
  /* 11b9789a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b9789d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11b978a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b978a4 add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b978a7 mov esi, esp */
  ESI = (ESP);
  /* 11b978a9 push eax */
  push32((uint32_t)(EAX));
  /* 11b978aa call dword ptr [0x11bd0578] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0578))), 0x11b978b0u);
  /* 11b978b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b978b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b978b5 call 0x11b98330 */
  push32(0x11b978bau); f_11b98330();
  /* 11b978ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b978bc jle 0x11b978c2 */
  if ((C.zf||C.sf!=C.of)) goto L_11b978c2;
  /* 11b978be mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11b978c2:;
  /* 11b978c2 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11b978c5 pop edi */
  EDI = (pop32());
  /* 11b978c6 pop esi */
  ESI = (pop32());
  /* 11b978c7 pop ebx */
  EBX = (pop32());
  /* 11b978c8 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b978cb cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b978cd call 0x11b98330 */
  push32(0x11b978d2u); f_11b98330();
  /* 11b978d2 mov esp, ebp */
  ESP = (EBP);
  /* 11b978d4 pop ebp */
  EBP = (pop32());
  /* 11b978d5 ret  */
  ESPCHK(0x11b97880u, _esp0);
  ESP += 4; return;
}

/* FUN_100078f0 @ 0x11b978f0 (42 bytes, 21 insns) */
void f_11b978f0(void) {
  FTRACE(0x11b978f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b978f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b978f1 mov ebp, esp */
  EBP = (ESP);
  /* 11b978f3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b978f6 push ebx */
  push32((uint32_t)(EBX));
  /* 11b978f7 push esi */
  push32((uint32_t)(ESI));
  /* 11b978f8 push edi */
  push32((uint32_t)(EDI));
  /* 11b978f9 push ecx */
  push32((uint32_t)(ECX));
  /* 11b978fa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11b978fd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11b97902 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b97907 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b97909 pop ecx */
  ECX = (pop32());
  /* 11b9790a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b9790d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97910 add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97913 pop edi */
  EDI = (pop32());
  /* 11b97914 pop esi */
  ESI = (pop32());
  /* 11b97915 pop ebx */
  EBX = (pop32());
  /* 11b97916 mov esp, ebp */
  ESP = (EBP);
  /* 11b97918 pop ebp */
  EBP = (pop32());
  /* 11b97919 ret  */
  ESPCHK(0x11b978f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007930 @ 0x11b97930 (235 bytes, 78 insns) */
void f_11b97930(void) {
  FTRACE(0x11b97930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b97930 push ebp */
  push32((uint32_t)(EBP));
  /* 11b97931 mov ebp, esp */
  EBP = (ESP);
  /* 11b97933 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b97939 push ebx */
  push32((uint32_t)(EBX));
  /* 11b9793a push esi */
  push32((uint32_t)(ESI));
  /* 11b9793b push edi */
  push32((uint32_t)(EDI));
  /* 11b9793c push ecx */
  push32((uint32_t)(ECX));
  /* 11b9793d lea edi, [ebp - 0x88] */
  EDI = ((uint32_t)(EBP + -0x88));
  /* 11b97943 mov ecx, 0x22 */
  ECX = (0x22u);
  /* 11b97948 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b9794d rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b9794f pop ecx */
  ECX = (pop32());
  /* 11b97950 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b97953 mov dword ptr [ebp - 0x38], 0 */
  w32((uint32_t)(EBP + -0x38), (0x0u));
  /* 11b9795a mov dword ptr [ebp - 0x34], 0 */
  w32((uint32_t)(EBP + -0x34), (0x0u));
  /* 11b97961 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97964 add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97967 mov esi, esp */
  ESI = (ESP);
  /* 11b97969 push eax */
  push32((uint32_t)(EAX));
  /* 11b9796a call dword ptr [0x11bd0578] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0578))), 0x11b97970u);
  /* 11b97970 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97973 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b97975 call 0x11b98330 */
  push32(0x11b9797au); f_11b98330();
  /* 11b9797a mov dword ptr [ebp - 0x3c], eax */
  w32((uint32_t)(EBP + -0x3c), (EAX));
  /* 11b9797d cmp dword ptr [ebp - 0x3c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b97981 jle 0x11b979f4 */
  if ((C.zf||C.sf!=C.of)) goto L_11b979f4;
  /* 11b97983 mov dword ptr [ebp - 0x40], 0 */
  w32((uint32_t)(EBP + -0x40), (0x0u));
  /* 11b9798a mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
  /* 11b97991 mov dword ptr [ebp - 0x48], 0 */
  w32((uint32_t)(EBP + -0x48), (0x0u));
  /* 11b97998 jmp 0x11b979a3 */
  goto L_11b979a3;
L_11b9799a:;
  /* 11b9799a mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11b9799d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b979a0 mov dword ptr [ebp - 0x48], ecx */
  w32((uint32_t)(EBP + -0x48), (ECX));
L_11b979a3:;
  /* 11b979a3 mov edx, dword ptr [ebp - 0x48] */
  EDX = (r32((uint32_t)(EBP + -0x48)));
  /* 11b979a6 cmp edx, dword ptr [ebp - 0x3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b979a9 jge 0x11b979e0 */
  if ((C.sf==C.of)) goto L_11b979e0;
  /* 11b979ab mov esi, esp */
  ESI = (ESP);
  /* 11b979ad lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 11b979b0 push eax */
  push32((uint32_t)(EAX));
  /* 11b979b1 mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11b979b4 push ecx */
  push32((uint32_t)(ECX));
  /* 11b979b5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b979b8 add edx, 0xd */
  { uint32_t _a=(EDX),_b=(0xdu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b979bb push edx */
  push32((uint32_t)(EDX));
  /* 11b979bc call dword ptr [0x11bd057c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd057c))), 0x11b979c2u);
  /* 11b979c2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b979c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b979c7 call 0x11b98330 */
  push32(0x11b979ccu); f_11b98330();
  /* 11b979cc mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11b979cf add eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b979d2 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 11b979d5 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11b979d8 add ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b979db mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
  /* 11b979de jmp 0x11b9799a */
  goto L_11b9799a;
L_11b979e0:;
  /* 11b979e0 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11b979e3 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b979e4 idiv dword ptr [ebp - 0x3c] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBP + -0x3c))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b979e7 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 11b979ea mov eax, dword ptr [ebp - 0x44] */
  EAX = (r32((uint32_t)(EBP + -0x44)));
  /* 11b979ed cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b979ee idiv dword ptr [ebp - 0x3c] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBP + -0x3c))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b979f1 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_11b979f4:;
  /* 11b979f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b979f7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11b979fa mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11b979fc mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11b979ff mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11b97a02 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b97a05 pop edi */
  EDI = (pop32());
  /* 11b97a06 pop esi */
  ESI = (pop32());
  /* 11b97a07 pop ebx */
  EBX = (pop32());
  /* 11b97a08 add esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97a0e cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b97a10 call 0x11b98330 */
  push32(0x11b97a15u); f_11b98330();
  /* 11b97a15 mov esp, ebp */
  ESP = (EBP);
  /* 11b97a17 pop ebp */
  EBP = (pop32());
  /* 11b97a18 ret 4 */
  ESPCHK(0x11b97930u, _esp0);
  ESP += 8; return;
}

/* FUN_10007a60 @ 0x11b97a60 (250 bytes, 89 insns) */
void f_11b97a60(void) {
  FTRACE(0x11b97a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b97a60 push ebp */
  push32((uint32_t)(EBP));
  /* 11b97a61 mov ebp, esp */
  EBP = (ESP);
  /* 11b97a63 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b97a66 push ebx */
  push32((uint32_t)(EBX));
  /* 11b97a67 push esi */
  push32((uint32_t)(ESI));
  /* 11b97a68 push edi */
  push32((uint32_t)(EDI));
  /* 11b97a69 push ecx */
  push32((uint32_t)(ECX));
  /* 11b97a6a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11b97a6d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11b97a72 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b97a77 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b97a79 pop ecx */
  ECX = (pop32());
  /* 11b97a7a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b97a7d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97a80 call 0x11b910b9 */
  push32(0x11b97a85u); f_11b910b9();
  /* 11b97a85 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b97a8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b97a8c je 0x11b97b49 */
  if (C.zf) goto L_11b97b49;
  /* 11b97a92 mov esi, esp */
  ESI = (ESP);
  /* 11b97a94 mov eax, dword ptr [0x11bcbd70] */
  EAX = (r32((uint32_t)(0x11bcbd70)));
  /* 11b97a99 push eax */
  push32((uint32_t)(EAX));
  /* 11b97a9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97a9d push ecx */
  push32((uint32_t)(ECX));
  /* 11b97a9e mov edx, dword ptr [0x11bce30c] */
  EDX = (r32((uint32_t)(0x11bce30c)));
  /* 11b97aa4 push edx */
  push32((uint32_t)(EDX));
  /* 11b97aa5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97aa8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97aab push eax */
  push32((uint32_t)(EAX));
  /* 11b97aac call dword ptr [0x11bd04d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd04d8))), 0x11b97ab2u);
  /* 11b97ab2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97ab5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b97ab7 call 0x11b98330 */
  push32(0x11b97abcu); f_11b98330();
  /* 11b97abc mov esi, esp */
  ESI = (ESP);
  /* 11b97abe push 0 */
  push32((uint32_t)(0x0u));
  /* 11b97ac0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97ac3 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97ac6 push ecx */
  push32((uint32_t)(ECX));
  /* 11b97ac7 call dword ptr [0x11bd054c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd054c))), 0x11b97acdu);
  /* 11b97acd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97ad0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b97ad2 call 0x11b98330 */
  push32(0x11b97ad7u); f_11b98330();
  /* 11b97ad7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b97ad9 jle 0x11b97afc */
  if ((C.zf||C.sf!=C.of)) goto L_11b97afc;
  /* 11b97adb mov esi, esp */
  ESI = (ESP);
  /* 11b97add push 0 */
  push32((uint32_t)(0x0u));
  /* 11b97adf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97ae2 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97ae5 push edx */
  push32((uint32_t)(EDX));
  /* 11b97ae6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97ae9 push eax */
  push32((uint32_t)(EAX));
  /* 11b97aea call dword ptr [0x11bd055c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd055c))), 0x11b97af0u);
  /* 11b97af0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97af3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b97af5 call 0x11b98330 */
  push32(0x11b97afau); f_11b98330();
  /* 11b97afa jmp 0x11b97b49 */
  goto L_11b97b49;
L_11b97afc:;
  /* 11b97afc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97aff call 0x11b911a9 */
  push32(0x11b97b04u); f_11b911a9();
  /* 11b97b04 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b97b09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b97b0b jne 0x11b97b49 */
  if (!C.zf) goto L_11b97b49;
  /* 11b97b0d mov esi, esp */
  ESI = (ESP);
  /* 11b97b0f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b97b11 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97b14 push ecx */
  push32((uint32_t)(ECX));
  /* 11b97b15 call dword ptr [0x11bd0550] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0550))), 0x11b97b1bu);
  /* 11b97b1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97b1e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b97b20 call 0x11b98330 */
  push32(0x11b97b25u); f_11b98330();
  /* 11b97b25 mov esi, esp */
  ESI = (ESP);
  /* 11b97b27 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b97b29 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b97b2b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97b2e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11b97b31 push eax */
  push32((uint32_t)(EAX));
  /* 11b97b32 mov cl, byte ptr [0x11bcbd74] */
  CL = (r8((uint32_t)(0x11bcbd74)));
  /* 11b97b38 push ecx */
  push32((uint32_t)(ECX));
  /* 11b97b39 call dword ptr [0x11bd0558] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0558))), 0x11b97b3fu);
  /* 11b97b3f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97b42 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b97b44 call 0x11b98330 */
  push32(0x11b97b49u); f_11b98330();
L_11b97b49:;
  /* 11b97b49 pop edi */
  EDI = (pop32());
  /* 11b97b4a pop esi */
  ESI = (pop32());
  /* 11b97b4b pop ebx */
  EBX = (pop32());
  /* 11b97b4c add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97b4f cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b97b51 call 0x11b98330 */
  push32(0x11b97b56u); f_11b98330();
  /* 11b97b56 mov esp, ebp */
  ESP = (EBP);
  /* 11b97b58 pop ebp */
  EBP = (pop32());
  /* 11b97b59 ret  */
  ESPCHK(0x11b97a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ba0 @ 0x11b97ba0 (74 bytes, 31 insns) */
void f_11b97ba0(void) {
  FTRACE(0x11b97ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b97ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b97ba1 mov ebp, esp */
  EBP = (ESP);
  /* 11b97ba3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b97ba6 push ebx */
  push32((uint32_t)(EBX));
  /* 11b97ba7 push esi */
  push32((uint32_t)(ESI));
  /* 11b97ba8 push edi */
  push32((uint32_t)(EDI));
  /* 11b97ba9 push ecx */
  push32((uint32_t)(ECX));
  /* 11b97baa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11b97bad mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11b97bb2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b97bb7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b97bb9 pop ecx */
  ECX = (pop32());
  /* 11b97bba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b97bbd mov esi, esp */
  ESI = (ESP);
  /* 11b97bbf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b97bc2 push eax */
  push32((uint32_t)(EAX));
  /* 11b97bc3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97bc6 push ecx */
  push32((uint32_t)(ECX));
  /* 11b97bc7 call dword ptr [0x11bd0548] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0548))), 0x11b97bcdu);
  /* 11b97bcd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97bd0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b97bd2 call 0x11b98330 */
  push32(0x11b97bd7u); f_11b98330();
  /* 11b97bd7 pop edi */
  EDI = (pop32());
  /* 11b97bd8 pop esi */
  ESI = (pop32());
  /* 11b97bd9 pop ebx */
  EBX = (pop32());
  /* 11b97bda add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97bdd cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b97bdf call 0x11b98330 */
  push32(0x11b97be4u); f_11b98330();
  /* 11b97be4 mov esp, ebp */
  ESP = (EBP);
  /* 11b97be6 pop ebp */
  EBP = (pop32());
  /* 11b97be7 ret 4 */
  ESPCHK(0x11b97ba0u, _esp0);
  ESP += 8; return;
}

/* FUN_10007c00 @ 0x11b97c00 (114 bytes, 45 insns) */
void f_11b97c00(void) {
  FTRACE(0x11b97c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b97c00 push ebp */
  push32((uint32_t)(EBP));
  /* 11b97c01 mov ebp, esp */
  EBP = (ESP);
  /* 11b97c03 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b97c06 push ebx */
  push32((uint32_t)(EBX));
  /* 11b97c07 push esi */
  push32((uint32_t)(ESI));
  /* 11b97c08 push edi */
  push32((uint32_t)(EDI));
  /* 11b97c09 push ecx */
  push32((uint32_t)(ECX));
  /* 11b97c0a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11b97c0d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11b97c12 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b97c17 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b97c19 pop ecx */
  ECX = (pop32());
  /* 11b97c1a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b97c1d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11b97c21 mov esi, esp */
  ESI = (ESP);
  /* 11b97c23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97c26 push eax */
  push32((uint32_t)(EAX));
  /* 11b97c27 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97c2a mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11b97c2d push edx */
  push32((uint32_t)(EDX));
  /* 11b97c2e call dword ptr [0x11bd0564] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0564))), 0x11b97c34u);
  /* 11b97c34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97c37 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b97c39 call 0x11b98330 */
  push32(0x11b97c3eu); f_11b98330();
  /* 11b97c3e mov esi, eax */
  ESI = (EAX);
  /* 11b97c40 mov edi, esp */
  EDI = (ESP);
  /* 11b97c42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97c45 push eax */
  push32((uint32_t)(EAX));
  /* 11b97c46 call dword ptr [0x11bd0578] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0578))), 0x11b97c4cu);
  /* 11b97c4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97c4f cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b97c51 call 0x11b98330 */
  push32(0x11b97c56u); f_11b98330();
  /* 11b97c56 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b97c58 jne 0x11b97c5e */
  if (!C.zf) goto L_11b97c5e;
  /* 11b97c5a mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11b97c5e:;
  /* 11b97c5e mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11b97c61 pop edi */
  EDI = (pop32());
  /* 11b97c62 pop esi */
  ESI = (pop32());
  /* 11b97c63 pop ebx */
  EBX = (pop32());
  /* 11b97c64 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97c67 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b97c69 call 0x11b98330 */
  push32(0x11b97c6eu); f_11b98330();
  /* 11b97c6e mov esp, ebp */
  ESP = (EBP);
  /* 11b97c70 pop ebp */
  EBP = (pop32());
  /* 11b97c71 ret  */
  ESPCHK(0x11b97c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c90 @ 0x11b97c90 (83 bytes, 34 insns) */
void f_11b97c90(void) {
  FTRACE(0x11b97c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b97c90 push ebp */
  push32((uint32_t)(EBP));
  /* 11b97c91 mov ebp, esp */
  EBP = (ESP);
  /* 11b97c93 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b97c96 push ebx */
  push32((uint32_t)(EBX));
  /* 11b97c97 push esi */
  push32((uint32_t)(ESI));
  /* 11b97c98 push edi */
  push32((uint32_t)(EDI));
  /* 11b97c99 push ecx */
  push32((uint32_t)(ECX));
  /* 11b97c9a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11b97c9d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11b97ca2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b97ca7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b97ca9 pop ecx */
  ECX = (pop32());
  /* 11b97caa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b97cad mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11b97cb1 mov esi, esp */
  ESI = (ESP);
  /* 11b97cb3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97cb6 push eax */
  push32((uint32_t)(EAX));
  /* 11b97cb7 call dword ptr [0x11bd0578] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0578))), 0x11b97cbdu);
  /* 11b97cbd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97cc0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b97cc2 call 0x11b98330 */
  push32(0x11b97cc7u); f_11b98330();
  /* 11b97cc7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b97cc9 jle 0x11b97ccf */
  if ((C.zf||C.sf!=C.of)) goto L_11b97ccf;
  /* 11b97ccb mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11b97ccf:;
  /* 11b97ccf mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11b97cd2 pop edi */
  EDI = (pop32());
  /* 11b97cd3 pop esi */
  ESI = (pop32());
  /* 11b97cd4 pop ebx */
  EBX = (pop32());
  /* 11b97cd5 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97cd8 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b97cda call 0x11b98330 */
  push32(0x11b97cdfu); f_11b98330();
  /* 11b97cdf mov esp, ebp */
  ESP = (EBP);
  /* 11b97ce1 pop ebp */
  EBP = (pop32());
  /* 11b97ce2 ret  */
  ESPCHK(0x11b97c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d00 @ 0x11b97d00 (126 bytes, 48 insns) */
void f_11b97d00(void) {
  FTRACE(0x11b97d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b97d00 push ebp */
  push32((uint32_t)(EBP));
  /* 11b97d01 mov ebp, esp */
  EBP = (ESP);
  /* 11b97d03 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b97d06 push ebx */
  push32((uint32_t)(EBX));
  /* 11b97d07 push esi */
  push32((uint32_t)(ESI));
  /* 11b97d08 push edi */
  push32((uint32_t)(EDI));
  /* 11b97d09 push ecx */
  push32((uint32_t)(ECX));
  /* 11b97d0a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11b97d0d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11b97d12 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b97d17 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b97d19 pop ecx */
  ECX = (pop32());
  /* 11b97d1a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b97d1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97d20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b97d23 mov dword ptr [eax + 6], ecx */
  w32((uint32_t)(EAX + 0x6), (ECX));
  /* 11b97d26 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97d29 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b97d2c mov dword ptr [edx + 0xa], eax */
  w32((uint32_t)(EDX + 0xa), (EAX));
  /* 11b97d2f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b97d32 push ecx */
  push32((uint32_t)(ECX));
  /* 11b97d33 call 0x11b9102d */
  push32(0x11b97d38u); f_11b9102d();
  /* 11b97d38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97d3b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97d3e mov byte ptr [edx + 1], al */
  w8((uint32_t)(EDX + 0x1), (AL));
  /* 11b97d41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97d44 mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 11b97d47 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11b97d49 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97d4c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b97d4f mov dword ptr [edx + 2], eax */
  w32((uint32_t)(EDX + 0x2), (EAX));
  /* 11b97d52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97d55 add ecx, 0xe */
  { uint32_t _a=(ECX),_b=(0xeu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97d58 mov esi, esp */
  ESI = (ESP);
  /* 11b97d5a push ecx */
  push32((uint32_t)(ECX));
  /* 11b97d5b call dword ptr [0x11bd056c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd056c))), 0x11b97d61u);
  /* 11b97d61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97d64 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b97d66 call 0x11b98330 */
  push32(0x11b97d6bu); f_11b98330();
  /* 11b97d6b pop edi */
  EDI = (pop32());
  /* 11b97d6c pop esi */
  ESI = (pop32());
  /* 11b97d6d pop ebx */
  EBX = (pop32());
  /* 11b97d6e add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97d71 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b97d73 call 0x11b98330 */
  push32(0x11b97d78u); f_11b98330();
  /* 11b97d78 mov esp, ebp */
  ESP = (EBP);
  /* 11b97d7a pop ebp */
  EBP = (pop32());
  /* 11b97d7b ret 0x10 */
  ESPCHK(0x11b97d00u, _esp0);
  ESP += 20; return;
}

/* FUN_10007da0 @ 0x11b97da0 (136 bytes, 54 insns) */
void f_11b97da0(void) {
  FTRACE(0x11b97da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b97da0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b97da1 mov ebp, esp */
  EBP = (ESP);
  /* 11b97da3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b97da6 push ebx */
  push32((uint32_t)(EBX));
  /* 11b97da7 push esi */
  push32((uint32_t)(ESI));
  /* 11b97da8 push edi */
  push32((uint32_t)(EDI));
  /* 11b97da9 push ecx */
  push32((uint32_t)(ECX));
  /* 11b97daa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11b97dad mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11b97db2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b97db7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b97db9 pop ecx */
  ECX = (pop32());
  /* 11b97dba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b97dbd mov esi, esp */
  ESI = (ESP);
  /* 11b97dbf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b97dc2 push eax */
  push32((uint32_t)(EAX));
  /* 11b97dc3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97dc6 add ecx, 0x16 */
  { uint32_t _a=(ECX),_b=(0x16u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97dc9 push ecx */
  push32((uint32_t)(ECX));
  /* 11b97dca call dword ptr [0x11bd0548] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0548))), 0x11b97dd0u);
  /* 11b97dd0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97dd3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b97dd5 call 0x11b98330 */
  push32(0x11b97ddau); f_11b98330();
  /* 11b97dda mov esi, esp */
  ESI = (ESP);
  /* 11b97ddc mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b97ddf push edx */
  push32((uint32_t)(EDX));
  /* 11b97de0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97de3 add eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97de6 push eax */
  push32((uint32_t)(EAX));
  /* 11b97de7 call dword ptr [0x11bd0538] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0538))), 0x11b97dedu);
  /* 11b97ded add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97df0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b97df2 call 0x11b98330 */
  push32(0x11b97df7u); f_11b98330();
  /* 11b97df7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b97dfa push ecx */
  push32((uint32_t)(ECX));
  /* 11b97dfb mov dl, byte ptr [ebp + 0x10] */
  DL = (r8((uint32_t)(EBP + 0x10)));
  /* 11b97dfe push edx */
  push32((uint32_t)(EDX));
  /* 11b97dff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97e02 add eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97e05 push eax */
  push32((uint32_t)(EAX));
  /* 11b97e06 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97e09 add ecx, 0x16 */
  { uint32_t _a=(ECX),_b=(0x16u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97e0c push ecx */
  push32((uint32_t)(ECX));
  /* 11b97e0d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97e10 call 0x11b9104b */
  push32(0x11b97e15u); f_11b9104b();
  /* 11b97e15 pop edi */
  EDI = (pop32());
  /* 11b97e16 pop esi */
  ESI = (pop32());
  /* 11b97e17 pop ebx */
  EBX = (pop32());
  /* 11b97e18 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97e1b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b97e1d call 0x11b98330 */
  push32(0x11b97e22u); f_11b98330();
  /* 11b97e22 mov esp, ebp */
  ESP = (EBP);
  /* 11b97e24 pop ebp */
  EBP = (pop32());
  /* 11b97e25 ret 0x10 */
  ESPCHK(0x11b97da0u, _esp0);
  ESP += 20; return;
}

/* FUN_10007e50 @ 0x11b97e50 (150 bytes, 58 insns) */
void f_11b97e50(void) {
  FTRACE(0x11b97e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b97e50 push ebp */
  push32((uint32_t)(EBP));
  /* 11b97e51 mov ebp, esp */
  EBP = (ESP);
  /* 11b97e53 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b97e56 push ebx */
  push32((uint32_t)(EBX));
  /* 11b97e57 push esi */
  push32((uint32_t)(ESI));
  /* 11b97e58 push edi */
  push32((uint32_t)(EDI));
  /* 11b97e59 push ecx */
  push32((uint32_t)(ECX));
  /* 11b97e5a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11b97e5d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11b97e62 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b97e67 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b97e69 pop ecx */
  ECX = (pop32());
  /* 11b97e6a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b97e6d mov esi, esp */
  ESI = (ESP);
  /* 11b97e6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b97e72 push eax */
  push32((uint32_t)(EAX));
  /* 11b97e73 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97e76 add ecx, 0x16 */
  { uint32_t _a=(ECX),_b=(0x16u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97e79 push ecx */
  push32((uint32_t)(ECX));
  /* 11b97e7a call dword ptr [0x11bd0548] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0548))), 0x11b97e80u);
  /* 11b97e80 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97e83 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b97e85 call 0x11b98330 */
  push32(0x11b97e8au); f_11b98330();
  /* 11b97e8a mov esi, esp */
  ESI = (ESP);
  /* 11b97e8c push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 11b97e91 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97e94 add edx, 0x16 */
  { uint32_t _a=(EDX),_b=(0x16u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97e97 push edx */
  push32((uint32_t)(EDX));
  /* 11b97e98 mov eax, dword ptr [0x11bce310] */
  EAX = (r32((uint32_t)(0x11bce310)));
  /* 11b97e9d push eax */
  push32((uint32_t)(EAX));
  /* 11b97e9e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97ea1 add ecx, 0x1e */
  { uint32_t _a=(ECX),_b=(0x1eu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97ea4 push ecx */
  push32((uint32_t)(ECX));
  /* 11b97ea5 call dword ptr [0x11bd04d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd04d8))), 0x11b97eabu);
  /* 11b97eab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97eae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b97eb0 call 0x11b98330 */
  push32(0x11b97eb5u); f_11b98330();
  /* 11b97eb5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b97eb8 push edx */
  push32((uint32_t)(EDX));
  /* 11b97eb9 mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 11b97ebc push eax */
  push32((uint32_t)(EAX));
  /* 11b97ebd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97ec0 add ecx, 0x1e */
  { uint32_t _a=(ECX),_b=(0x1eu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97ec3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b97ec4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97ec7 add edx, 0x16 */
  { uint32_t _a=(EDX),_b=(0x16u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97eca push edx */
  push32((uint32_t)(EDX));
  /* 11b97ecb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97ece call 0x11b9104b */
  push32(0x11b97ed3u); f_11b9104b();
  /* 11b97ed3 pop edi */
  EDI = (pop32());
  /* 11b97ed4 pop esi */
  ESI = (pop32());
  /* 11b97ed5 pop ebx */
  EBX = (pop32());
  /* 11b97ed6 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97ed9 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b97edb call 0x11b98330 */
  push32(0x11b97ee0u); f_11b98330();
  /* 11b97ee0 mov esp, ebp */
  ESP = (EBP);
  /* 11b97ee2 pop ebp */
  EBP = (pop32());
  /* 11b97ee3 ret 0xc */
  ESPCHK(0x11b97e50u, _esp0);
  ESP += 16; return;
}

/* FUN_10007f10 @ 0x11b97f10 (255 bytes, 92 insns) */
void f_11b97f10(void) {
  FTRACE(0x11b97f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b97f10 push ebp */
  push32((uint32_t)(EBP));
  /* 11b97f11 mov ebp, esp */
  EBP = (ESP);
  /* 11b97f13 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b97f16 push ebx */
  push32((uint32_t)(EBX));
  /* 11b97f17 push esi */
  push32((uint32_t)(ESI));
  /* 11b97f18 push edi */
  push32((uint32_t)(EDI));
  /* 11b97f19 push ecx */
  push32((uint32_t)(ECX));
  /* 11b97f1a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11b97f1d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11b97f22 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b97f27 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b97f29 pop ecx */
  ECX = (pop32());
  /* 11b97f2a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b97f2d mov esi, esp */
  ESI = (ESP);
  /* 11b97f2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97f32 mov cl, byte ptr [eax + 2] */
  CL = (r8((uint32_t)(EAX + 0x2)));
  /* 11b97f35 push ecx */
  push32((uint32_t)(ECX));
  /* 11b97f36 call dword ptr [0x11bd04e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd04e4))), 0x11b97f3cu);
  /* 11b97f3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97f3f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b97f41 call 0x11b98330 */
  push32(0x11b97f46u); f_11b98330();
  /* 11b97f46 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b97f4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b97f4d je 0x11b97f95 */
  if (C.zf) goto L_11b97f95;
  /* 11b97f4f mov esi, esp */
  ESI = (ESP);
  /* 11b97f51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97f54 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11b97f56 push eax */
  push32((uint32_t)(EAX));
  /* 11b97f57 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97f5a mov edx, dword ptr [ecx + 0xa] */
  EDX = (r32((uint32_t)(ECX + 0xa)));
  /* 11b97f5d push edx */
  push32((uint32_t)(EDX));
  /* 11b97f5e call dword ptr [0x11bd054c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd054c))), 0x11b97f64u);
  /* 11b97f64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97f67 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b97f69 call 0x11b98330 */
  push32(0x11b97f6eu); f_11b98330();
  /* 11b97f6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b97f70 jle 0x11b97f95 */
  if ((C.zf||C.sf!=C.of)) goto L_11b97f95;
  /* 11b97f72 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97f75 call 0x11b91212 */
  push32(0x11b97f7au); f_11b91212();
  /* 11b97f7a mov esi, esp */
  ESI = (ESP);
  /* 11b97f7c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b97f7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97f81 mov cl, byte ptr [eax + 2] */
  CL = (r8((uint32_t)(EAX + 0x2)));
  /* 11b97f84 push ecx */
  push32((uint32_t)(ECX));
  /* 11b97f85 call dword ptr [0x11bd04f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd04f8))), 0x11b97f8bu);
  /* 11b97f8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97f8e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b97f90 call 0x11b98330 */
  push32(0x11b97f95u); f_11b98330();
L_11b97f95:;
  /* 11b97f95 mov esi, esp */
  ESI = (ESP);
  /* 11b97f97 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97f9a mov al, byte ptr [edx + 2] */
  AL = (r8((uint32_t)(EDX + 0x2)));
  /* 11b97f9d push eax */
  push32((uint32_t)(EAX));
  /* 11b97f9e call dword ptr [0x11bd04e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd04e4))), 0x11b97fa4u);
  /* 11b97fa4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97fa7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b97fa9 call 0x11b98330 */
  push32(0x11b97faeu); f_11b98330();
  /* 11b97fae and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b97fb3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b97fb5 jne 0x11b97ffe */
  if (!C.zf) goto L_11b97ffe;
  /* 11b97fb7 mov esi, esp */
  ESI = (ESP);
  /* 11b97fb9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97fbc mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11b97fbe push edx */
  push32((uint32_t)(EDX));
  /* 11b97fbf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97fc2 mov ecx, dword ptr [eax + 0xa] */
  ECX = (r32((uint32_t)(EAX + 0xa)));
  /* 11b97fc5 push ecx */
  push32((uint32_t)(ECX));
  /* 11b97fc6 call dword ptr [0x11bd054c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd054c))), 0x11b97fccu);
  /* 11b97fcc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97fcf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b97fd1 call 0x11b98330 */
  push32(0x11b97fd6u); f_11b98330();
  /* 11b97fd6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b97fd9 jge 0x11b97ffe */
  if ((C.sf==C.of)) goto L_11b97ffe;
  /* 11b97fdb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97fde call 0x11b91096 */
  push32(0x11b97fe3u); f_11b91096();
  /* 11b97fe3 mov esi, esp */
  ESI = (ESP);
  /* 11b97fe5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b97fe7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b97fea mov al, byte ptr [edx + 2] */
  AL = (r8((uint32_t)(EDX + 0x2)));
  /* 11b97fed push eax */
  push32((uint32_t)(EAX));
  /* 11b97fee call dword ptr [0x11bd04f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd04f8))), 0x11b97ff4u);
  /* 11b97ff4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b97ff7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b97ff9 call 0x11b98330 */
  push32(0x11b97ffeu); f_11b98330();
L_11b97ffe:;
  /* 11b97ffe pop edi */
  EDI = (pop32());
  /* 11b97fff pop esi */
  ESI = (pop32());
  /* 11b98000 pop ebx */
  EBX = (pop32());
  /* 11b98001 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b98004 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b98006 call 0x11b98330 */
  push32(0x11b9800bu); f_11b98330();
  /* 11b9800b mov esp, ebp */
  ESP = (EBP);
  /* 11b9800d pop ebp */
  EBP = (pop32());
  /* 11b9800e ret  */
  ESPCHK(0x11b97f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10008050 @ 0x11b98050 (158 bytes, 60 insns) */
void f_11b98050(void) {
  FTRACE(0x11b98050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b98050 push ebp */
  push32((uint32_t)(EBP));
  /* 11b98051 mov ebp, esp */
  EBP = (ESP);
  /* 11b98053 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b98056 push ebx */
  push32((uint32_t)(EBX));
  /* 11b98057 push esi */
  push32((uint32_t)(ESI));
  /* 11b98058 push edi */
  push32((uint32_t)(EDI));
  /* 11b98059 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9805a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11b9805d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11b98062 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b98067 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b98069 pop ecx */
  ECX = (pop32());
  /* 11b9806a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b9806d mov esi, esp */
  ESI = (ESP);
  /* 11b9806f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b98071 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b98074 add eax, 0xe */
  { uint32_t _a=(EAX),_b=(0xeu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b98077 push eax */
  push32((uint32_t)(EAX));
  /* 11b98078 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9807b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11b9807d push edx */
  push32((uint32_t)(EDX));
  /* 11b9807e call dword ptr [0x11bd0574] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0574))), 0x11b98084u);
  /* 11b98084 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b98087 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b98089 call 0x11b98330 */
  push32(0x11b9808eu); f_11b98330();
  /* 11b9808e mov esi, esp */
  ESI = (ESP);
  /* 11b98090 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b98092 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b98095 mov ecx, dword ptr [eax + 6] */
  ECX = (r32((uint32_t)(EAX + 0x6)));
  /* 11b98098 push ecx */
  push32((uint32_t)(ECX));
  /* 11b98099 call dword ptr [0x11bd0550] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0550))), 0x11b9809fu);
  /* 11b9809f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b980a2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b980a4 call 0x11b98330 */
  push32(0x11b980a9u); f_11b98330();
  /* 11b980a9 mov esi, esp */
  ESI = (ESP);
  /* 11b980ab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b980ae mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11b980b1 push eax */
  push32((uint32_t)(EAX));
  /* 11b980b2 call dword ptr [0x11bd04ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd04ac))), 0x11b980b8u);
  /* 11b980b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b980bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b980bd call 0x11b98330 */
  push32(0x11b980c2u); f_11b98330();
  /* 11b980c2 mov esi, esp */
  ESI = (ESP);
  /* 11b980c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b980c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b980c9 add ecx, 0xe */
  { uint32_t _a=(ECX),_b=(0xeu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b980cc push ecx */
  push32((uint32_t)(ECX));
  /* 11b980cd call dword ptr [0x11bd0550] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0550))), 0x11b980d3u);
  /* 11b980d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b980d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b980d8 call 0x11b98330 */
  push32(0x11b980ddu); f_11b98330();
  /* 11b980dd pop edi */
  EDI = (pop32());
  /* 11b980de pop esi */
  ESI = (pop32());
  /* 11b980df pop ebx */
  EBX = (pop32());
  /* 11b980e0 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b980e3 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b980e5 call 0x11b98330 */
  push32(0x11b980eau); f_11b98330();
  /* 11b980ea mov esp, ebp */
  ESP = (EBP);
  /* 11b980ec pop ebp */
  EBP = (pop32());
  /* 11b980ed ret  */
  ESPCHK(0x11b98050u, _esp0);
  ESP += 4; return;
}

/* FUN_10008120 @ 0x11b98120 (158 bytes, 60 insns) */
void f_11b98120(void) {
  FTRACE(0x11b98120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b98120 push ebp */
  push32((uint32_t)(EBP));
  /* 11b98121 mov ebp, esp */
  EBP = (ESP);
  /* 11b98123 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b98126 push ebx */
  push32((uint32_t)(EBX));
  /* 11b98127 push esi */
  push32((uint32_t)(ESI));
  /* 11b98128 push edi */
  push32((uint32_t)(EDI));
  /* 11b98129 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9812a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11b9812d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11b98132 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11b98137 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b98139 pop ecx */
  ECX = (pop32());
  /* 11b9813a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b9813d mov esi, esp */
  ESI = (ESP);
  /* 11b9813f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b98141 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b98144 add eax, 0xe */
  { uint32_t _a=(EAX),_b=(0xeu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b98147 push eax */
  push32((uint32_t)(EAX));
  /* 11b98148 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9814b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11b9814d push edx */
  push32((uint32_t)(EDX));
  /* 11b9814e call dword ptr [0x11bd0574] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0574))), 0x11b98154u);
  /* 11b98154 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b98157 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b98159 call 0x11b98330 */
  push32(0x11b9815eu); f_11b98330();
  /* 11b9815e mov esi, esp */
  ESI = (ESP);
  /* 11b98160 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b98162 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b98165 mov ecx, dword ptr [eax + 6] */
  ECX = (r32((uint32_t)(EAX + 0x6)));
  /* 11b98168 push ecx */
  push32((uint32_t)(ECX));
  /* 11b98169 call dword ptr [0x11bd0550] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0550))), 0x11b9816fu);
  /* 11b9816f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b98172 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b98174 call 0x11b98330 */
  push32(0x11b98179u); f_11b98330();
  /* 11b98179 mov esi, esp */
  ESI = (ESP);
  /* 11b9817b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9817e mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11b98181 push eax */
  push32((uint32_t)(EAX));
  /* 11b98182 call dword ptr [0x11bd04a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd04a8))), 0x11b98188u);
  /* 11b98188 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9818b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9818d call 0x11b98330 */
  push32(0x11b98192u); f_11b98330();
  /* 11b98192 mov esi, esp */
  ESI = (ESP);
  /* 11b98194 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b98196 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b98199 add ecx, 0xe */
  { uint32_t _a=(ECX),_b=(0xeu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9819c push ecx */
  push32((uint32_t)(ECX));
  /* 11b9819d call dword ptr [0x11bd0550] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0550))), 0x11b981a3u);
  /* 11b981a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b981a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b981a8 call 0x11b98330 */
  push32(0x11b981adu); f_11b98330();
  /* 11b981ad pop edi */
  EDI = (pop32());
  /* 11b981ae pop esi */
  ESI = (pop32());
  /* 11b981af pop ebx */
  EBX = (pop32());
  /* 11b981b0 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b981b3 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b981b5 call 0x11b98330 */
  push32(0x11b981bau); f_11b98330();
  /* 11b981ba mov esp, ebp */
  ESP = (EBP);
  /* 11b981bc pop ebp */
  EBP = (pop32());
  /* 11b981bd ret  */
  ESPCHK(0x11b98120u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x11b98330 (56 bytes, 28 insns) */
void f_11b98330(void) {
  FTRACE(0x11b98330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b98330 jne 0x11b98333 */
  if (!C.zf) goto L_11b98333;
  /* 11b98332 ret  */
  ESPCHK(0x11b98330u, _esp0);
  ESP += 4; return;
L_11b98333:;
  /* 11b98333 push ebp */
  push32((uint32_t)(EBP));
  /* 11b98334 mov ebp, esp */
  EBP = (ESP);
  /* 11b98336 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b98339 push eax */
  push32((uint32_t)(EAX));
  /* 11b9833a push edx */
  push32((uint32_t)(EDX));
  /* 11b9833b push ebx */
  push32((uint32_t)(EBX));
  /* 11b9833c push esi */
  push32((uint32_t)(ESI));
  /* 11b9833d push edi */
  push32((uint32_t)(EDI));
  /* 11b9833e push 0x11bc8320 */
  push32((uint32_t)(0x11bc8320u));
  /* 11b98343 push 0x11bc831c */
  push32((uint32_t)(0x11bc831cu));
  /* 11b98348 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 11b9834a push 0x11bc830c */
  push32((uint32_t)(0x11bc830cu));
  /* 11b9834f push 1 */
  push32((uint32_t)(0x1u));
  /* 11b98351 call 0x11b99390 */
  push32(0x11b98356u); f_11b99390();
  /* 11b98356 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b98359 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9835c jne 0x11b9835f */
  if (!C.zf) goto L_11b9835f;
  /* 11b9835e int3  */
  x86_unimpl("int3 @ 0x11b9835e");
L_11b9835f:;
  /* 11b9835f pop edi */
  EDI = (pop32());
  /* 11b98360 pop esi */
  ESI = (pop32());
  /* 11b98361 pop ebx */
  EBX = (pop32());
  /* 11b98362 pop edx */
  EDX = (pop32());
  /* 11b98363 pop eax */
  EAX = (pop32());
  /* 11b98364 mov esp, ebp */
  ESP = (EBP);
  /* 11b98366 pop ebp */
  EBP = (pop32());
  /* 11b98367 ret  */
  ESPCHK(0x11b98330u, _esp0);
  ESP += 4; return;
}

/* FUN_10008370 @ 0x11b98370 (20 bytes, 6 insns) */
void f_11b98370(void) {
  FTRACE(0x11b98370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b98370 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b98373 fst qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  /* 11b98376 call 0x11b99c88 */
  push32(0x11b9837bu); f_11b99c88();
  /* 11b9837b call 0x11b9838d */
  push32(0x11b98380u); f_11b9838d();
  /* 11b98380 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b98383 ret  */
  ESPCHK(0x11b98370u, _esp0);
  ESP += 4; return;
}

/* FUN_10008384 @ 0x11b98384 (9 bytes, 2 insns) */
void f_11b98384(void) {
  FTRACE(0x11b98384u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b98384 lea edx, [esp + 4] */
  EDX = ((uint32_t)(ESP + 0x4));
  /* 11b98388 call 0x11b99c45 */
  push32(0x11b9838du); f_11b99c45();
}

/* FUN_1000838d @ 0x11b9838d (145 bytes, 43 insns) */
void f_11b9838d(void) {
  FTRACE(0x11b9838du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9838d push edx */
  push32((uint32_t)(EDX));
  /* 11b9838e wait  */
  /* wait (no observable integer/reg state) */
  /* 11b9838f fnstcw word ptr [esp] */
  w16((uint32_t)(ESP), C.fcw);
  /* 11b98392 je 0x11b983e4 */
  if (C.zf) goto L_11b983e4;
  /* 11b98394 cmp word ptr [esp], 0x27f */
  { uint32_t _a=(r16((uint32_t)(ESP))),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11b9839a je 0x11b983a2 */
  if (C.zf) goto L_11b983a2;
  /* 11b9839c fldcw word ptr [0x11bc86a8] */
  C.fcw = r16((uint32_t)(0x11bc86a8));
L_11b983a2:;
  /* 11b983a2 fsin  */
  FPU_ST(0) = __builtin_sin(FPU_ST(0)); C.fsw_c2=0;
  /* 11b983a4 wait  */
  /* wait (no observable integer/reg state) */
  /* 11b983a5 fnstsw ax */
  AX = fpu_status();
  /* 11b983a7 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 11b983a8 jp 0x11b983c7 */
  if (C.pf) goto L_11b983c7;
L_11b983aa:;
  /* 11b983aa cmp dword ptr [0x11bce32c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce32c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b983b1 jne 0x11b99c9e */
  if (!C.zf) { jmp_ind(0x11b99c9eu); return; }
  /* 11b983b7 mov edx, 0x1e */
  EDX = (0x1eu);
  /* 11b983bc lea ecx, [0x11bcbd80] */
  ECX = ((uint32_t)(0x11bcbd80));
  /* 11b983c2 jmp 0x11b99cab */
  f_11b99cab(); return;
L_11b983c7:;
  /* 11b983c7 fld xword ptr [0x11bc86aa] */
  fpu_push(rf80((uint32_t)(0x11bc86aa)));
  /* 11b983cd fxch st(1) */
  { double _t=FPU_ST(0); FPU_ST(0)=FPU_ST(1); FPU_ST(1)=_t; }
L_11b983cf:;
  /* 11b983cf fprem1  */
  FPU_ST(0) = __builtin_remainder(FPU_ST(0), FPU_ST(1)); C.fsw_c2=0;
  /* 11b983d1 wait  */
  /* wait (no observable integer/reg state) */
  /* 11b983d2 fnstsw ax */
  AX = fpu_status();
  /* 11b983d4 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 11b983d5 jp 0x11b983cf */
  if (C.pf) goto L_11b983cf;
  /* 11b983d7 fstp st(1) */
  FPU_ST(1) = FPU_ST(0);
  (void)fpu_pop();
  /* 11b983d9 fsin  */
  FPU_ST(0) = __builtin_sin(FPU_ST(0)); C.fsw_c2=0;
  /* 11b983db jmp 0x11b983aa */
  goto L_11b983aa;
L_11b983dd:;
  /* 11b983dd call 0x11b99c2c */
  push32(0x11b983e2u); f_11b99c2c();
  /* 11b983e2 jmp 0x11b983ff */
  goto L_11b983ff;
L_11b983e4:;
  /* 11b983e4 test eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); fl_logic(_r,32); }
  /* 11b983e9 jne 0x11b983dd */
  if (!C.zf) goto L_11b983dd;
  /* 11b983eb cmp dword ptr [esp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b983f0 jne 0x11b983dd */
  if (!C.zf) goto L_11b983dd;
  /* 11b983f2 fstp st(0) */
  FPU_ST(0) = FPU_ST(0);
  (void)fpu_pop();
  /* 11b983f4 fld xword ptr [0x11bcbe00] */
  fpu_push(rf80((uint32_t)(0x11bcbe00)));
  /* 11b983fa mov eax, 1 */
  EAX = (0x1u);
L_11b983ff:;
  /* 11b983ff cmp dword ptr [0x11bce32c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce32c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b98406 jne 0x11b99c9e */
  if (!C.zf) { jmp_ind(0x11b99c9eu); return; }
  /* 11b9840c mov edx, 0x1e */
  EDX = (0x1eu);
  /* 11b98411 lea ecx, [0x11bcbd80] */
  ECX = ((uint32_t)(0x11bcbd80));
  /* 11b98417 call 0x11b99da7 */
  push32(0x11b9841cu); f_11b99da7();
  /* 11b9841c pop edx */
  EDX = (pop32());
  /* 11b9841d ret  */
  ESPCHK(0x11b9838du, _esp0);
  ESP += 4; return;
}

/* FUN_10008420 @ 0x11b98420 (20 bytes, 6 insns) */
void f_11b98420(void) {
  FTRACE(0x11b98420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b98420 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b98423 fst qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  /* 11b98426 call 0x11b99c88 */
  push32(0x11b9842bu); f_11b99c88();
  /* 11b9842b call 0x11b9843d */
  push32(0x11b98430u); f_11b9843d();
  /* 11b98430 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b98433 ret  */
  ESPCHK(0x11b98420u, _esp0);
  ESP += 4; return;
}

/* FUN_10008434 @ 0x11b98434 (9 bytes, 2 insns) */
void f_11b98434(void) {
  FTRACE(0x11b98434u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b98434 lea edx, [esp + 4] */
  EDX = ((uint32_t)(ESP + 0x4));
  /* 11b98438 call 0x11b99c45 */
  push32(0x11b9843du); f_11b99c45();
}

/* FUN_1000843d @ 0x11b9843d (145 bytes, 43 insns) */
void f_11b9843d(void) {
  FTRACE(0x11b9843du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9843d push edx */
  push32((uint32_t)(EDX));
  /* 11b9843e wait  */
  /* wait (no observable integer/reg state) */
  /* 11b9843f fnstcw word ptr [esp] */
  w16((uint32_t)(ESP), C.fcw);
  /* 11b98442 je 0x11b98494 */
  if (C.zf) goto L_11b98494;
  /* 11b98444 cmp word ptr [esp], 0x27f */
  { uint32_t _a=(r16((uint32_t)(ESP))),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11b9844a je 0x11b98452 */
  if (C.zf) goto L_11b98452;
  /* 11b9844c fldcw word ptr [0x11bc86a8] */
  C.fcw = r16((uint32_t)(0x11bc86a8));
L_11b98452:;
  /* 11b98452 fcos  */
  FPU_ST(0) = __builtin_cos(FPU_ST(0)); C.fsw_c2=0;
  /* 11b98454 wait  */
  /* wait (no observable integer/reg state) */
  /* 11b98455 fnstsw ax */
  AX = fpu_status();
  /* 11b98457 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 11b98458 jp 0x11b98477 */
  if (C.pf) goto L_11b98477;
L_11b9845a:;
  /* 11b9845a cmp dword ptr [0x11bce32c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce32c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b98461 jne 0x11b99c9e */
  if (!C.zf) { jmp_ind(0x11b99c9eu); return; }
  /* 11b98467 mov edx, 0x12 */
  EDX = (0x12u);
  /* 11b9846c lea ecx, [0x11bcbd90] */
  ECX = ((uint32_t)(0x11bcbd90));
  /* 11b98472 jmp 0x11b99cab */
  f_11b99cab(); return;
L_11b98477:;
  /* 11b98477 fld xword ptr [0x11bc86aa] */
  fpu_push(rf80((uint32_t)(0x11bc86aa)));
  /* 11b9847d fxch st(1) */
  { double _t=FPU_ST(0); FPU_ST(0)=FPU_ST(1); FPU_ST(1)=_t; }
L_11b9847f:;
  /* 11b9847f fprem1  */
  FPU_ST(0) = __builtin_remainder(FPU_ST(0), FPU_ST(1)); C.fsw_c2=0;
  /* 11b98481 wait  */
  /* wait (no observable integer/reg state) */
  /* 11b98482 fnstsw ax */
  AX = fpu_status();
  /* 11b98484 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 11b98485 jp 0x11b9847f */
  if (C.pf) goto L_11b9847f;
  /* 11b98487 fstp st(1) */
  FPU_ST(1) = FPU_ST(0);
  (void)fpu_pop();
  /* 11b98489 fcos  */
  FPU_ST(0) = __builtin_cos(FPU_ST(0)); C.fsw_c2=0;
  /* 11b9848b jmp 0x11b9845a */
  goto L_11b9845a;
L_11b9848d:;
  /* 11b9848d call 0x11b99c2c */
  push32(0x11b98492u); f_11b99c2c();
  /* 11b98492 jmp 0x11b984af */
  goto L_11b984af;
L_11b98494:;
  /* 11b98494 test eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); fl_logic(_r,32); }
  /* 11b98499 jne 0x11b9848d */
  if (!C.zf) goto L_11b9848d;
  /* 11b9849b cmp dword ptr [esp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b984a0 jne 0x11b9848d */
  if (!C.zf) goto L_11b9848d;
  /* 11b984a2 fstp st(0) */
  FPU_ST(0) = FPU_ST(0);
  (void)fpu_pop();
  /* 11b984a4 fld xword ptr [0x11bcbe00] */
  fpu_push(rf80((uint32_t)(0x11bcbe00)));
  /* 11b984aa mov eax, 1 */
  EAX = (0x1u);
L_11b984af:;
  /* 11b984af cmp dword ptr [0x11bce32c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce32c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b984b6 jne 0x11b99c9e */
  if (!C.zf) { jmp_ind(0x11b99c9eu); return; }
  /* 11b984bc mov edx, 0x12 */
  EDX = (0x12u);
  /* 11b984c1 lea ecx, [0x11bcbd90] */
  ECX = ((uint32_t)(0x11bcbd90));
  /* 11b984c7 call 0x11b99da7 */
  push32(0x11b984ccu); f_11b99da7();
  /* 11b984cc pop edx */
  EDX = (pop32());
  /* 11b984cd ret  */
  ESPCHK(0x11b9843du, _esp0);
  ESP += 4; return;
}

/* FUN_100084d0 @ 0x11b984d0 (20 bytes, 6 insns) */
void f_11b984d0(void) {
  FTRACE(0x11b984d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b984d0 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b984d3 fst qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  /* 11b984d6 call 0x11b99c88 */
  push32(0x11b984dbu); f_11b99c88();
  /* 11b984db call 0x11b984ed */
  push32(0x11b984e0u); f_11b984ed();
  /* 11b984e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b984e3 ret  */
  ESPCHK(0x11b984d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100084e4 @ 0x11b984e4 (9 bytes, 2 insns) */
void f_11b984e4(void) {
  FTRACE(0x11b984e4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b984e4 lea edx, [esp + 4] */
  EDX = ((uint32_t)(ESP + 0x4));
  /* 11b984e8 call 0x11b99c45 */
  push32(0x11b984edu); f_11b99c45();
}

/* FUN_100084ed @ 0x11b984ed (138 bytes, 40 insns) */
void f_11b984ed(void) {
  FTRACE(0x11b984edu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b984ed push edx */
  push32((uint32_t)(EDX));
  /* 11b984ee wait  */
  /* wait (no observable integer/reg state) */
  /* 11b984ef fnstcw word ptr [esp] */
  w16((uint32_t)(ESP), C.fcw);
  /* 11b984f2 je 0x11b9852a */
  if (C.zf) goto L_11b9852a;
  /* 11b984f4 cmp word ptr [esp], 0x27f */
  { uint32_t _a=(r16((uint32_t)(ESP))),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11b984fa je 0x11b98502 */
  if (C.zf) goto L_11b98502;
  /* 11b984fc fldcw word ptr [0x11bc86a8] */
  C.fcw = r16((uint32_t)(0x11bc86a8));
L_11b98502:;
  /* 11b98502 fld1  */
  fpu_push(1.0);
  /* 11b98504 fpatan  */
  { double _r=__builtin_atan2(FPU_ST(1), FPU_ST(0)); (void)fpu_pop(); FPU_ST(0)=_r; }
L_11b98506:;
  /* 11b98506 cmp dword ptr [0x11bce32c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce32c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9850d jne 0x11b99c9e */
  if (!C.zf) { jmp_ind(0x11b99c9eu); return; }
  /* 11b98513 mov edx, 0xf */
  EDX = (0xfu);
  /* 11b98518 lea ecx, [0x11bcbda0] */
  ECX = ((uint32_t)(0x11bcbda0));
  /* 11b9851e jmp 0x11b99cab */
  f_11b99cab(); return;
L_11b98523:;
  /* 11b98523 call 0x11b99c2c */
  push32(0x11b98528u); f_11b99c2c();
  /* 11b98528 jmp 0x11b98550 */
  goto L_11b98550;
L_11b9852a:;
  /* 11b9852a test eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); fl_logic(_r,32); }
  /* 11b9852f jne 0x11b98523 */
  if (!C.zf) goto L_11b98523;
  /* 11b98531 cmp dword ptr [esp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b98536 jne 0x11b98523 */
  if (!C.zf) goto L_11b98523;
  /* 11b98538 fstp st(0) */
  FPU_ST(0) = FPU_ST(0);
  (void)fpu_pop();
  /* 11b9853a fld xword ptr [0x11bcbe0a] */
  fpu_push(rf80((uint32_t)(0x11bcbe0a)));
  /* 11b98540 test eax, 0x80000000 */
  { uint32_t _r=(EAX)&(0x80000000u); fl_logic(_r,32); }
  /* 11b98545 je 0x11b98506 */
  if (C.zf) goto L_11b98506;
  /* 11b98547 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 11b98549 jmp 0x11b98506 */
  goto L_11b98506;
  /* 11b9854b mov eax, 1 */
  EAX = (0x1u);
L_11b98550:;
  /* 11b98550 cmp dword ptr [0x11bce32c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce32c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b98557 jne 0x11b99c9e */
  if (!C.zf) { jmp_ind(0x11b99c9eu); return; }
  /* 11b9855d mov edx, 0xf */
  EDX = (0xfu);
  /* 11b98562 lea ecx, [0x11bcbda0] */
  ECX = ((uint32_t)(0x11bcbda0));
  /* 11b98568 call 0x11b99da7 */
  push32(0x11b9856du); f_11b99da7();
  /* 11b9856d pop edx */
  EDX = (pop32());
  /* 11b9856e ret  */
  ESPCHK(0x11b984edu, _esp0);
  ESP += 4; return;
  /* 11b9856f int3  */
  x86_unimpl("int3 @ 0x11b9856f");
  /* 11b98570 push ebp */
  push32((uint32_t)(EBP));
  /* 11b98571 mov ebp, esp */
  EBP = (ESP);
  /* 11b98573 push ebx */
  push32((uint32_t)(EBX));
  /* 11b98574 push esi */
  push32((uint32_t)(ESI));
  /* 11b98575 push edi */
  push32((uint32_t)(EDI));
}

/* FUN_10008570 @ 0x11b98570 (33 bytes, 15 insns) */
void f_11b98570(void) {
  FTRACE(0x11b98570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b98570 push ebp */
  push32((uint32_t)(EBP));
  /* 11b98571 mov ebp, esp */
  EBP = (ESP);
  /* 11b98573 push ebx */
  push32((uint32_t)(EBX));
  /* 11b98574 push esi */
  push32((uint32_t)(ESI));
  /* 11b98575 push edi */
  push32((uint32_t)(EDI));
  /* 11b98576 call 0x11b985b0 */
  push32(0x11b9857bu); f_11b985b0();
  /* 11b9857b call 0x11b99e70 */
  push32(0x11b98580u); f_11b99e70();
  /* 11b98580 mov dword ptr [0x11bce330], eax */
  w32((uint32_t)(0x11bce330), (EAX));
  /* 11b98585 call 0x11b99df0 */
  push32(0x11b9858au); f_11b99df0();
  /* 11b9858a fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 11b9858c pop edi */
  EDI = (pop32());
  /* 11b9858d pop esi */
  ESI = (pop32());
  /* 11b9858e pop ebx */
  EBX = (pop32());
  /* 11b9858f pop ebp */
  EBP = (pop32());
  /* 11b98590 ret  */
  ESPCHK(0x11b98570u, _esp0);
  ESP += 4; return;
}

/* FUN_100085a0 @ 0x11b985a0 (5 bytes, 4 insns) */
void f_11b985a0(void) {
  FTRACE(0x11b985a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b985a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b985a1 mov ebp, esp */
  EBP = (ESP);
  /* 11b985a3 pop ebp */
  EBP = (pop32());
  /* 11b985a4 ret  */
  ESPCHK(0x11b985a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100085b0 @ 0x11b985b0 (65 bytes, 10 insns) */
void f_11b985b0(void) {
  FTRACE(0x11b985b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b985b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b985b1 mov ebp, esp */
  EBP = (ESP);
  /* 11b985b3 mov dword ptr [0x11bcbe30], 0x11b9a560 */
  w32((uint32_t)(0x11bcbe30), (0x11b9a560u));
  /* 11b985bd mov dword ptr [0x11bcbe34], 0x11b99f70 */
  w32((uint32_t)(0x11bcbe34), (0x11b99f70u));
  /* 11b985c7 mov dword ptr [0x11bcbe38], 0x11b9a080 */
  w32((uint32_t)(0x11bcbe38), (0x11b9a080u));
  /* 11b985d1 mov dword ptr [0x11bcbe3c], 0x11b99ec0 */
  w32((uint32_t)(0x11bcbe3c), (0x11b99ec0u));
  /* 11b985db mov dword ptr [0x11bcbe40], 0x11b9a050 */
  w32((uint32_t)(0x11bcbe40), (0x11b9a050u));
  /* 11b985e5 mov dword ptr [0x11bcbe44], 0x11b9a560 */
  w32((uint32_t)(0x11bcbe44), (0x11b9a560u));
  /* 11b985ef pop ebp */
  EBP = (pop32());
  /* 11b985f0 ret  */
  ESPCHK(0x11b985b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008600 @ 0x11b98600 (28 bytes, 11 insns) */
void f_11b98600(void) {
  FTRACE(0x11b98600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b98600 push ebp */
  push32((uint32_t)(EBP));
  /* 11b98601 mov ebp, esp */
  EBP = (ESP);
  /* 11b98603 push ecx */
  push32((uint32_t)(ECX));
  /* 11b98604 mov eax, dword ptr [0x11bce32c] */
  EAX = (r32((uint32_t)(0x11bce32c)));
  /* 11b98609 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b9860c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9860f mov dword ptr [0x11bce32c], ecx */
  w32((uint32_t)(0x11bce32c), (ECX));
  /* 11b98615 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b98618 mov esp, ebp */
  ESP = (EBP);
  /* 11b9861a pop ebp */
  EBP = (pop32());
  /* 11b9861b ret  */
  ESPCHK(0x11b98600u, _esp0);
  ESP += 4; return;
}

/* __ftol @ 0x11b9861c (39 bytes, 16 insns) */
void f_11b9861c(void) {
  FTRACE(0x11b9861cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9861c push ebp */
  push32((uint32_t)(EBP));
  /* 11b9861d mov ebp, esp */
  EBP = (ESP);
  /* 11b9861f add esp, -0xc */
  { uint32_t _a=(ESP),_b=(0xfffffff4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b98622 wait  */
  /* wait (no observable integer/reg state) */
  /* 11b98623 fnstcw word ptr [ebp - 2] */
  w16((uint32_t)(EBP + -0x2), C.fcw);
  /* 11b98626 wait  */
  /* wait (no observable integer/reg state) */
  /* 11b98627 mov ax, word ptr [ebp - 2] */
  AX = (r16((uint32_t)(EBP + -0x2)));
  /* 11b9862b or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 11b9862e mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11b98632 fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 11b98635 fistp qword ptr [ebp - 0xc] */
  { int64_t _q=fpu_to_i64(FPU_ST(0)); w32((uint32_t)(EBP + -0xc),(uint32_t)_q); w32((uint32_t)(EBP + -0xc)+4,(uint32_t)((uint64_t)_q>>32)); }
  (void)fpu_pop();
  /* 11b98638 fldcw word ptr [ebp - 2] */
  C.fcw = r16((uint32_t)(EBP + -0x2));
  /* 11b9863b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9863e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b98641 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b98642 ret  */
  ESPCHK(0x11b9861cu, _esp0);
  ESP += 4; return;
}

/* FUN_10008650 @ 0x11b98650 (161 bytes, 60 insns) */
void f_11b98650(void) {
  FTRACE(0x11b98650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b98650 push ebp */
  push32((uint32_t)(EBP));
  /* 11b98651 mov ebp, esp */
  EBP = (ESP);
  /* 11b98653 push ecx */
  push32((uint32_t)(ECX));
  /* 11b98654 push ebx */
  push32((uint32_t)(EBX));
  /* 11b98655 push esi */
  push32((uint32_t)(ESI));
  /* 11b98656 push edi */
  push32((uint32_t)(EDI));
  /* 11b98657 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9865b jne 0x11b98662 */
  if (!C.zf) goto L_11b98662;
  /* 11b9865d jmp 0x11b986ea */
  goto L_11b986ea;
L_11b98662:;
  /* 11b98662 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b98664 call 0x11b9a6d0 */
  push32(0x11b98669u); f_11b9a6d0();
  /* 11b98669 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9866c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9866f sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b98672 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b98675:;
  /* 11b98675 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b98678 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11b9867b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b98681 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b98684 je 0x11b986c7 */
  if (C.zf) goto L_11b986c7;
  /* 11b98686 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b98689 cmp dword ptr [eax + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9868d je 0x11b986c7 */
  if (C.zf) goto L_11b986c7;
  /* 11b9868f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b98692 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11b98695 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b9869b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9869e je 0x11b986c7 */
  if (C.zf) goto L_11b986c7;
  /* 11b986a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b986a3 cmp dword ptr [eax + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b986a7 je 0x11b986c7 */
  if (C.zf) goto L_11b986c7;
  /* 11b986a9 push 0x11bc8408 */
  push32((uint32_t)(0x11bc8408u));
  /* 11b986ae push 0 */
  push32((uint32_t)(0x0u));
  /* 11b986b0 push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 11b986b2 push 0x11bc83fc */
  push32((uint32_t)(0x11bc83fcu));
  /* 11b986b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b986b9 call 0x11b99390 */
  push32(0x11b986beu); f_11b99390();
  /* 11b986be add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b986c1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b986c4 jne 0x11b986c7 */
  if (!C.zf) goto L_11b986c7;
  /* 11b986c6 int3  */
  x86_unimpl("int3 @ 0x11b986c6");
L_11b986c7:;
  /* 11b986c7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b986c9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b986cb jne 0x11b98675 */
  if (!C.zf) goto L_11b98675;
  /* 11b986cd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b986d0 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11b986d3 push eax */
  push32((uint32_t)(EAX));
  /* 11b986d4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b986d7 push ecx */
  push32((uint32_t)(ECX));
  /* 11b986d8 call 0x11b9b260 */
  push32(0x11b986ddu); f_11b9b260();
  /* 11b986dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b986e0 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b986e2 call 0x11b9a770 */
  push32(0x11b986e7u); f_11b9a770();
  /* 11b986e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b986ea:;
  /* 11b986ea pop edi */
  EDI = (pop32());
  /* 11b986eb pop esi */
  ESI = (pop32());
  /* 11b986ec pop ebx */
  EBX = (pop32());
  /* 11b986ed mov esp, ebp */
  ESP = (EBP);
  /* 11b986ef pop ebp */
  EBP = (pop32());
  /* 11b986f0 ret  */
  ESPCHK(0x11b98650u, _esp0);
  ESP += 4; return;
}

/* FUN_10008700 @ 0x11b98700 (19 bytes, 9 insns) */
void f_11b98700(void) {
  FTRACE(0x11b98700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b98700 push ebp */
  push32((uint32_t)(EBP));
  /* 11b98701 mov ebp, esp */
  EBP = (ESP);
  /* 11b98703 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b98705 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b98708 push eax */
  push32((uint32_t)(EAX));
  /* 11b98709 call 0x11b9a800 */
  push32(0x11b9870eu); f_11b9a800();
  /* 11b9870e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b98711 pop ebp */
  EBP = (pop32());
  /* 11b98712 ret  */
  ESPCHK(0x11b98700u, _esp0);
  ESP += 4; return;
}

/* FUN_10008720 @ 0x11b98720 (45 bytes, 17 insns) */
void f_11b98720(void) {
  FTRACE(0x11b98720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b98720 push ebp */
  push32((uint32_t)(EBP));
  /* 11b98721 mov ebp, esp */
  EBP = (ESP);
  /* 11b98723 push ecx */
  push32((uint32_t)(ECX));
  /* 11b98724 push ebx */
  push32((uint32_t)(EBX));
  /* 11b98725 push esi */
  push32((uint32_t)(ESI));
  /* 11b98726 push edi */
  push32((uint32_t)(EDI));
  /* 11b98727 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9872a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9872d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b98730 mov ebx, dword ptr fs:[0] */
  EBX = (r32((uint32_t)(0x0)));
  /* 11b98737 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11b98739 mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 11b9873f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b98742 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b98745 mov esp, dword ptr [ebx - 4] */
  ESP = (r32((uint32_t)(EBX + -0x4)));
  /* 11b98748 mov ebp, dword ptr [ebp - 4] */
  EBP = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9874b jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* _CallMemberFunction0 @ 0x11b98760 (7 bytes, 4 insns) */
void f_11b98760(void) {
  FTRACE(0x11b98760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b98760 pop eax */
  EAX = (pop32());
  /* 11b98761 pop ecx */
  ECX = (pop32());
  /* 11b98762 xchg dword ptr [esp], eax */
  { uint32_t _t=(r32((uint32_t)(ESP))); w32((uint32_t)(ESP), (EAX)); EAX = (_t); }
  /* 11b98765 jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* FUN_10008770 @ 0x11b98770 (7 bytes, 4 insns) */
void f_11b98770(void) {
  FTRACE(0x11b98770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b98770 pop eax */
  EAX = (pop32());
  /* 11b98771 pop ecx */
  ECX = (pop32());
  /* 11b98772 xchg dword ptr [esp], eax */
  { uint32_t _t=(r32((uint32_t)(ESP))); w32((uint32_t)(ESP), (EAX)); EAX = (_t); }
  /* 11b98775 jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* FUN_10008780 @ 0x11b98780 (7 bytes, 4 insns) */
void f_11b98780(void) {
  FTRACE(0x11b98780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b98780 pop eax */
  EAX = (pop32());
  /* 11b98781 pop ecx */
  ECX = (pop32());
  /* 11b98782 xchg dword ptr [esp], eax */
  { uint32_t _t=(r32((uint32_t)(ESP))); w32((uint32_t)(ESP), (EAX)); EAX = (_t); }
  /* 11b98785 jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* FUN_10008790 @ 0x11b98790 (86 bytes, 32 insns) */
void f_11b98790(void) {
  FTRACE(0x11b98790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b98790 push ebp */
  push32((uint32_t)(EBP));
  /* 11b98791 mov ebp, esp */
  EBP = (ESP);
  /* 11b98793 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b98796 push ebx */
  push32((uint32_t)(EBX));
  /* 11b98797 push esi */
  push32((uint32_t)(ESI));
  /* 11b98798 push edi */
  push32((uint32_t)(EDI));
  /* 11b98799 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11b9879f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b987a2 mov dword ptr [ebp - 4], 0x11b987bc */
  w32((uint32_t)(EBP + -0x4), (0x11b987bcu));
  /* 11b987a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b987ab mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b987ae push eax */
  push32((uint32_t)(EAX));
  /* 11b987af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b987b2 push ecx */
  push32((uint32_t)(ECX));
  /* 11b987b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b987b6 push edx */
  push32((uint32_t)(EDX));
  /* 11b987b7 call 0x11bafc8c */
  push32(0x11b987bcu); f_11bafc8c();
  /* 11b987bc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b987bf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b987c2 and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 11b987c5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b987c8 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11b987cb mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11b987d1 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b987d4 mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 11b987d6 mov dword ptr fs:[0], ebx */
  w32((uint32_t)(0x0), (EBX));
  /* 11b987dd pop edi */
  EDI = (pop32());
  /* 11b987de pop esi */
  ESI = (pop32());
  /* 11b987df pop ebx */
  EBX = (pop32());
  /* 11b987e0 mov esp, ebp */
  ESP = (EBP);
  /* 11b987e2 pop ebp */
  EBP = (pop32());
  /* 11b987e3 ret 8 */
  ESPCHK(0x11b98790u, _esp0);
  ESP += 12; return;
}

/* FID_conflict:___CxxFrameHandler3 @ 0x11b987f0 (60 bytes, 31 insns) */
void f_11b987f0(void) {
  FTRACE(0x11b987f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b987f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b987f1 mov ebp, esp */
  EBP = (ESP);
  /* 11b987f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b987f6 push ebx */
  push32((uint32_t)(EBX));
  /* 11b987f7 push esi */
  push32((uint32_t)(ESI));
  /* 11b987f8 push edi */
  push32((uint32_t)(EDI));
  /* 11b987f9 cld  */
  C.df=0;
  /* 11b987fa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b987fd push 0 */
  push32((uint32_t)(0x0u));
  /* 11b987ff push 0 */
  push32((uint32_t)(0x0u));
  /* 11b98801 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b98803 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b98806 push eax */
  push32((uint32_t)(EAX));
  /* 11b98807 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9880a push ecx */
  push32((uint32_t)(ECX));
  /* 11b9880b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9880e push edx */
  push32((uint32_t)(EDX));
  /* 11b9880f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b98812 push eax */
  push32((uint32_t)(EAX));
  /* 11b98813 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b98816 push ecx */
  push32((uint32_t)(ECX));
  /* 11b98817 call 0x11b9c740 */
  push32(0x11b9881cu); f_11b9c740();
  /* 11b9881c add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9881f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b98822 pop edi */
  EDI = (pop32());
  /* 11b98823 pop esi */
  ESI = (pop32());
  /* 11b98824 pop ebx */
  EBX = (pop32());
  /* 11b98825 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b98828 mov esp, ebp */
  ESP = (EBP);
  /* 11b9882a pop ebp */
  EBP = (pop32());
  /* 11b9882b ret  */
  ESPCHK(0x11b987f0u, _esp0);
  ESP += 4; return;
}

/* ___CxxLongjmpUnwind@4 @ 0x11b98830 (38 bytes, 16 insns) */
void f_11b98830(void) {
  FTRACE(0x11b98830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b98830 push ebp */
  push32((uint32_t)(EBP));
  /* 11b98831 mov ebp, esp */
  EBP = (ESP);
  /* 11b98833 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b98836 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11b98839 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9883a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9883d mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 11b98840 push eax */
  push32((uint32_t)(EAX));
  /* 11b98841 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b98843 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b98846 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11b98849 push edx */
  push32((uint32_t)(EDX));
  /* 11b9884a call 0x11b9ccb0 */
  push32(0x11b9884fu); f_11b9ccb0();
  /* 11b9884f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b98852 pop ebp */
  EBP = (pop32());
  /* 11b98853 ret 4 */
  ESPCHK(0x11b98830u, _esp0);
  ESP += 8; return;
}

/* FUN_10008860 @ 0x11b98860 (104 bytes, 36 insns) */
void f_11b98860(void) {
  FTRACE(0x11b98860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b98860 push ebp */
  push32((uint32_t)(EBP));
  /* 11b98861 mov ebp, esp */
  EBP = (ESP);
  /* 11b98863 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b98866 push ebx */
  push32((uint32_t)(EBX));
  /* 11b98867 push esi */
  push32((uint32_t)(ESI));
  /* 11b98868 push edi */
  push32((uint32_t)(EDI));
  /* 11b98869 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11b98870 mov dword ptr [ebp - 0x10], 0x11b988d0 */
  w32((uint32_t)(EBP + -0x10), (0x11b988d0u));
  /* 11b98877 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9887a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b9887d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b98880 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b98883 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b98886 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b98889 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b9888c mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11b98892 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11b98895 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11b9889b mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 11b988a1 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b988a4 push eax */
  push32((uint32_t)(EAX));
  /* 11b988a5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b988a8 push ecx */
  push32((uint32_t)(ECX));
  /* 11b988a9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b988ac push edx */
  push32((uint32_t)(EDX));
  /* 11b988ad call 0x11b9d3a0 */
  push32(0x11b988b2u); f_11b9d3a0();
  /* 11b988b2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11b988b5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b988b8 mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 11b988be mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b988c1 pop edi */
  EDI = (pop32());
  /* 11b988c2 pop esi */
  ESI = (pop32());
  /* 11b988c3 pop ebx */
  EBX = (pop32());
  /* 11b988c4 mov esp, ebp */
  ESP = (EBP);
  /* 11b988c6 pop ebp */
  EBP = (pop32());
  /* 11b988c7 ret  */
  ESPCHK(0x11b98860u, _esp0);
  ESP += 4; return;
}

/* FUN_100088d0 @ 0x11b988d0 (57 bytes, 30 insns) */
void f_11b988d0(void) {
  FTRACE(0x11b988d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b988d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b988d1 mov ebp, esp */
  EBP = (ESP);
  /* 11b988d3 push ebx */
  push32((uint32_t)(EBX));
  /* 11b988d4 push esi */
  push32((uint32_t)(ESI));
  /* 11b988d5 push edi */
  push32((uint32_t)(EDI));
  /* 11b988d6 cld  */
  C.df=0;
  /* 11b988d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b988d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b988dc push eax */
  push32((uint32_t)(EAX));
  /* 11b988dd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b988e0 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11b988e3 push edx */
  push32((uint32_t)(EDX));
  /* 11b988e4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b988e7 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11b988ea push ecx */
  push32((uint32_t)(ECX));
  /* 11b988eb push 0 */
  push32((uint32_t)(0x0u));
  /* 11b988ed mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b988f0 push edx */
  push32((uint32_t)(EDX));
  /* 11b988f1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b988f4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11b988f7 push ecx */
  push32((uint32_t)(ECX));
  /* 11b988f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b988fb push edx */
  push32((uint32_t)(EDX));
  /* 11b988fc call 0x11b9c740 */
  push32(0x11b98901u); f_11b9c740();
  /* 11b98901 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b98904 pop edi */
  EDI = (pop32());
  /* 11b98905 pop esi */
  ESI = (pop32());
  /* 11b98906 pop ebx */
  EBX = (pop32());
  /* 11b98907 pop ebp */
  EBP = (pop32());
  /* 11b98908 ret  */
  ESPCHK(0x11b988d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008910 @ 0x11b98910 (204 bytes, 58 insns) */
void f_11b98910(void) {
  FTRACE(0x11b98910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b98910 push ebp */
  push32((uint32_t)(EBP));
  /* 11b98911 mov ebp, esp */
  EBP = (ESP);
  /* 11b98913 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b98916 push ebx */
  push32((uint32_t)(EBX));
  /* 11b98917 push esi */
  push32((uint32_t)(ESI));
  /* 11b98918 push edi */
  push32((uint32_t)(EDI));
  /* 11b98919 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11b98920 mov dword ptr [ebp - 0x24], 0x11b989e0 */
  w32((uint32_t)(EBP + -0x24), (0x11b989e0u));
  /* 11b98927 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b9892a mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11b9892d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b98930 mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 11b98933 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b98936 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11b98939 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11b9893c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11b9893f mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11b98946 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11b9894d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11b98954 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b9895b mov dword ptr [ebp - 0x10], 0x11b989ac */
  w32((uint32_t)(EBP + -0x10), (0x11b989acu));
  /* 11b98962 mov dword ptr [ebp - 0xc], esp */
  w32((uint32_t)(EBP + -0xc), (ESP));
  /* 11b98965 mov dword ptr [ebp - 8], ebp */
  w32((uint32_t)(EBP + -0x8), (EBP));
  /* 11b98968 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11b9896e mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11b98971 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11b98977 mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 11b9897d mov dword ptr [ebp - 0x34], 1 */
  w32((uint32_t)(EBP + -0x34), (0x1u));
  /* 11b98984 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b98987 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11b9898a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9898d mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 11b98990 lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 11b98993 push eax */
  push32((uint32_t)(EAX));
  /* 11b98994 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b98997 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b98999 push edx */
  push32((uint32_t)(EDX));
  /* 11b9899a call 0x11b9d4d0 */
  push32(0x11b9899fu); f_11b9d4d0();
  /* 11b9899f call dword ptr [eax + 0x68] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x68))), 0x11b989a2u);
  /* 11b989a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b989a5 mov dword ptr [ebp - 0x34], 0 */
  w32((uint32_t)(EBP + -0x34), (0x0u));
  /* 11b989ac cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b989b0 je 0x11b989c9 */
  if (C.zf) goto L_11b989c9;
  /* 11b989b2 mov ebx, dword ptr fs:[0] */
  EBX = (r32((uint32_t)(0x0)));
  /* 11b989b9 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11b989bb mov ebx, dword ptr [ebp - 0x28] */
  EBX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b989be mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 11b989c0 mov dword ptr fs:[0], ebx */
  w32((uint32_t)(0x0), (EBX));
  /* 11b989c7 jmp 0x11b989d2 */
  goto L_11b989d2;
L_11b989c9:;
  /* 11b989c9 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b989cc mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
L_11b989d2:;
  /* 11b989d2 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11b989d5 pop edi */
  EDI = (pop32());
  /* 11b989d6 pop esi */
  ESI = (pop32());
  /* 11b989d7 pop ebx */
  EBX = (pop32());
  /* 11b989d8 mov esp, ebp */
  ESP = (EBP);
  /* 11b989da pop ebp */
  EBP = (pop32());
  /* 11b989db ret  */
  ESPCHK(0x11b98910u, _esp0);
  ESP += 4; return;
}

/* FUN_100089e0 @ 0x11b989e0 (124 bytes, 53 insns) */
void f_11b989e0(void) {
  FTRACE(0x11b989e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b989e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b989e1 mov ebp, esp */
  EBP = (ESP);
  /* 11b989e3 push ebx */
  push32((uint32_t)(EBX));
  /* 11b989e4 push esi */
  push32((uint32_t)(ESI));
  /* 11b989e5 push edi */
  push32((uint32_t)(EDI));
  /* 11b989e6 cld  */
  C.df=0;
  /* 11b989e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b989ea mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b989ed and ecx, 0x66 */
  { uint32_t _r=(ECX)&(0x66u); ECX = (_r); fl_logic(_r,32); }
  /* 11b989f0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b989f2 je 0x11b98a05 */
  if (C.zf) goto L_11b98a05;
  /* 11b989f4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b989f7 mov dword ptr [edx + 0x24], 1 */
  w32((uint32_t)(EDX + 0x24), (0x1u));
  /* 11b989fe mov eax, 1 */
  EAX = (0x1u);
  /* 11b98a03 jmp 0x11b98a5c */
  goto L_11b98a5c;
L_11b98a05:;
  /* 11b98a05 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b98a07 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b98a0a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11b98a0d push ecx */
  push32((uint32_t)(ECX));
  /* 11b98a0e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b98a11 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11b98a14 push eax */
  push32((uint32_t)(EAX));
  /* 11b98a15 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b98a18 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11b98a1b push edx */
  push32((uint32_t)(EDX));
  /* 11b98a1c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b98a1e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b98a21 push eax */
  push32((uint32_t)(EAX));
  /* 11b98a22 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b98a25 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11b98a28 push edx */
  push32((uint32_t)(EDX));
  /* 11b98a29 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b98a2c push eax */
  push32((uint32_t)(EAX));
  /* 11b98a2d call 0x11b9c740 */
  push32(0x11b98a32u); f_11b9c740();
  /* 11b98a32 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b98a35 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b98a38 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b98a3c jne 0x11b98a4b */
  if (!C.zf) goto L_11b98a4b;
  /* 11b98a3e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b98a41 push edx */
  push32((uint32_t)(EDX));
  /* 11b98a42 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b98a45 push eax */
  push32((uint32_t)(EAX));
  /* 11b98a46 call 0x11b98790 */
  push32(0x11b98a4bu); f_11b98790();
L_11b98a4b:;
  /* 11b98a4b mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b98a4e mov esp, dword ptr [ebx + 0x1c] */
  ESP = (r32((uint32_t)(EBX + 0x1c)));
  /* 11b98a51 mov ebp, dword ptr [ebx + 0x20] */
  EBP = (r32((uint32_t)(EBX + 0x20)));
  /* 11b98a54 jmp dword ptr [ebx + 0x18] */
  jmp_ind((uint32_t)(r32((uint32_t)(EBX + 0x18)))); return;
  /* 11b98a57 mov eax, 1 */
  EAX = (0x1u);
L_11b98a5c:;
  /* 11b98a5c pop edi */
  EDI = (pop32());
  /* 11b98a5d pop esi */
  ESI = (pop32());
  /* 11b98a5e pop ebx */
  EBX = (pop32());
  /* 11b98a5f pop ebp */
  EBP = (pop32());
  /* 11b98a60 ret  */
  ESPCHK(0x11b989e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a70 @ 0x11b98a70 (130 bytes, 57 insns) */
void f_11b98a70(void) {
  FTRACE(0x11b98a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b98a70 push ebp */
  push32((uint32_t)(EBP));
  /* 11b98a71 mov ebp, esp */
  EBP = (ESP);
  /* 11b98a73 push ecx */
  push32((uint32_t)(ECX));
  /* 11b98a74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b98a77 push ebx */
  push32((uint32_t)(EBX));
  /* 11b98a78 push esi */
  push32((uint32_t)(ESI));
  /* 11b98a79 push edi */
  push32((uint32_t)(EDI));
  /* 11b98a7a mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11b98a7d mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11b98a80 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b98a83 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b98a86 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b98a88 mov edi, esi */
  EDI = (ESI);
  /* 11b98a8a mov ebx, esi */
  EBX = (ESI);
  /* 11b98a8c jl 0x11b98ac9 */
  if ((C.sf!=C.of)) goto L_11b98ac9;
L_11b98a8e:;
  /* 11b98a8e cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b98a91 jne 0x11b98a98 */
  if (!C.zf) goto L_11b98a98;
  /* 11b98a93 call 0x11b9d750 */
  push32(0x11b98a98u); f_11b9d750();
L_11b98a98:;
  /* 11b98a98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b98a9b dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11b98a9c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b98a9f lea edx, [esi + esi*4] */
  EDX = ((uint32_t)(ESI + ESI*4));
  /* 11b98aa2 lea eax, [eax + edx*4] */
  EAX = ((uint32_t)(EAX + EDX*4));
  /* 11b98aa5 cmp dword ptr [eax + 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b98aa8 jge 0x11b98aaf */
  if ((C.sf==C.of)) goto L_11b98aaf;
  /* 11b98aaa cmp ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b98aad jle 0x11b98ab4 */
  if ((C.zf||C.sf!=C.of)) goto L_11b98ab4;
L_11b98aaf:;
  /* 11b98aaf cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b98ab2 jne 0x11b98abf */
  if (!C.zf) goto L_11b98abf;
L_11b98ab4:;
  /* 11b98ab4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b98ab7 mov edi, ebx */
  EDI = (EBX);
  /* 11b98ab9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11b98aba mov ebx, esi */
  EBX = (ESI);
  /* 11b98abc mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11b98abf:;
  /* 11b98abf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b98ac2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b98ac4 jge 0x11b98a8e */
  if ((C.sf==C.of)) goto L_11b98a8e;
  /* 11b98ac6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11b98ac9:;
  /* 11b98ac9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b98acc mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b98acf inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b98ad0 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
  /* 11b98ad2 mov dword ptr [edx], edi */
  w32((uint32_t)(EDX), (EDI));
  /* 11b98ad4 cmp edi, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b98ad7 ja 0x11b98add */
  if ((!C.cf&&!C.zf)) goto L_11b98add;
  /* 11b98ad9 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b98adb jbe 0x11b98ae2 */
  if ((C.cf||C.zf)) goto L_11b98ae2;
L_11b98add:;
  /* 11b98add call 0x11b9d750 */
  push32(0x11b98ae2u); f_11b9d750();
L_11b98ae2:;
  /* 11b98ae2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b98ae5 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 11b98ae8 pop edi */
  EDI = (pop32());
  /* 11b98ae9 pop esi */
  ESI = (pop32());
  /* 11b98aea lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 11b98aed pop ebx */
  EBX = (pop32());
  /* 11b98aee mov esp, ebp */
  ESP = (EBP);
  /* 11b98af0 pop ebp */
  EBP = (pop32());
  /* 11b98af1 ret  */
  ESPCHK(0x11b98a70u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x11b98b00 (32 bytes, 18 insns) */
void f_11b98b00(void) {
  FTRACE(0x11b98b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b98b00 push ebp */
  push32((uint32_t)(EBP));
  /* 11b98b01 mov ebp, esp */
  EBP = (ESP);
  /* 11b98b03 push ebx */
  push32((uint32_t)(EBX));
  /* 11b98b04 push esi */
  push32((uint32_t)(ESI));
  /* 11b98b05 push edi */
  push32((uint32_t)(EDI));
  /* 11b98b06 push ebp */
  push32((uint32_t)(EBP));
  /* 11b98b07 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b98b09 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b98b0b push 0x11b98b18 */
  push32((uint32_t)(0x11b98b18u));
  /* 11b98b10 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11b98b13 call 0x11bafc8c */
  push32(0x11b98b18u); f_11bafc8c();
  /* 11b98b18 pop ebp */
  EBP = (pop32());
  /* 11b98b19 pop edi */
  EDI = (pop32());
  /* 11b98b1a pop esi */
  ESI = (pop32());
  /* 11b98b1b pop ebx */
  EBX = (pop32());
  /* 11b98b1c mov esp, ebp */
  ESP = (EBP);
  /* 11b98b1e pop ebp */
  EBP = (pop32());
  /* 11b98b1f ret  */
  ESPCHK(0x11b98b00u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x11b98b42 (104 bytes, 33 insns) */
void f_11b98b42(void) {
  FTRACE(0x11b98b42u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b98b42 push ebx */
  push32((uint32_t)(EBX));
  /* 11b98b43 push esi */
  push32((uint32_t)(ESI));
  /* 11b98b44 push edi */
  push32((uint32_t)(EDI));
  /* 11b98b45 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11b98b49 push eax */
  push32((uint32_t)(EAX));
  /* 11b98b4a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 11b98b4c push 0x11b98b20 */
  push32((uint32_t)(0x11b98b20u));
  /* 11b98b51 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 11b98b58 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_11b98b5f:;
  /* 11b98b5f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 11b98b63 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 11b98b66 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11b98b69 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b98b6c je 0x11b98b9c */
  if (C.zf) goto L_11b98b9c;
  /* 11b98b6e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b98b72 je 0x11b98b9c */
  if (C.zf) goto L_11b98b9c;
  /* 11b98b74 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 11b98b77 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 11b98b7a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 11b98b7e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11b98b81 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b98b86 jne 0x11b98b9a */
  if (!C.zf) goto L_11b98b9a;
  /* 11b98b88 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11b98b8d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 11b98b91 call 0x11b98bd6 */
  push32(0x11b98b96u); f_11b98bd6();
  /* 11b98b96 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x11b98b9au);
L_11b98b9a:;
  /* 11b98b9a jmp 0x11b98b5f */
  goto L_11b98b5f;
L_11b98b9c:;
  /* 11b98b9c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 11b98ba3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b98ba6 pop edi */
  EDI = (pop32());
  /* 11b98ba7 pop esi */
  ESI = (pop32());
  /* 11b98ba8 pop ebx */
  EBX = (pop32());
  /* 11b98ba9 ret  */
  ESPCHK(0x11b98b42u, _esp0);
  ESP += 4; return;
}

/* __abnormal_termination @ 0x11b98baa (35 bytes, 10 insns) */
void f_11b98baa(void) {
  FTRACE(0x11b98baau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b98baa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b98bac mov ecx, dword ptr fs:[0] */
  ECX = (r32((uint32_t)(0x0)));
  /* 11b98bb3 cmp dword ptr [ecx + 4], 0x11b98b20 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x11b98b20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b98bba jne 0x11b98bcc */
  if (!C.zf) goto L_11b98bcc;
  /* 11b98bbc mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11b98bbf mov edx, dword ptr [edx + 0xc] */
  EDX = (r32((uint32_t)(EDX + 0xc)));
  /* 11b98bc2 cmp dword ptr [ecx + 8], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b98bc5 jne 0x11b98bcc */
  if (!C.zf) goto L_11b98bcc;
  /* 11b98bc7 mov eax, 1 */
  EAX = (0x1u);
L_11b98bcc:;
  /* 11b98bcc ret  */
  ESPCHK(0x11b98baau, _esp0);
  ESP += 4; return;
}

/* __NLG_Notify1 @ 0x11b98bcd (9 bytes, 4 insns) */
void f_11b98bcd(void) {
  FTRACE(0x11b98bcdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b98bcd push ebx */
  push32((uint32_t)(EBX));
  /* 11b98bce push ecx */
  push32((uint32_t)(ECX));
  /* 11b98bcf mov ebx, 0x11bcbdbc */
  EBX = (0x11bcbdbcu);
  /* 11b98bd4 jmp 0x11b98be0 */
  jmp_ind(0x11b98be0u); return;
}

/* FUN_10008bd6 @ 0x11b98bd6 (24 bytes, 10 insns) */
void f_11b98bd6(void) {
  FTRACE(0x11b98bd6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b98bd6 push ebx */
  push32((uint32_t)(EBX));
  /* 11b98bd7 push ecx */
  push32((uint32_t)(ECX));
  /* 11b98bd8 mov ebx, 0x11bcbdbc */
  EBX = (0x11bcbdbcu);
  /* 11b98bdd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b98be0 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11b98be3 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11b98be6 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 11b98be9 pop ecx */
  ECX = (pop32());
  /* 11b98bea pop ebx */
  EBX = (pop32());
  /* 11b98beb ret 4 */
  ESPCHK(0x11b98bd6u, _esp0);
  ESP += 8; return;
}

/* FUN_10008bf0 @ 0x11b98bf0 (179 bytes, 53 insns) */
void f_11b98bf0(void) {
  FTRACE(0x11b98bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b98bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b98bf1 mov ebp, esp */
  EBP = (ESP);
  /* 11b98bf3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b98bf4 call 0x11b9d990 */
  push32(0x11b98bf9u); f_11b9d990();
  /* 11b98bf9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b98bfb mov eax, dword ptr [0x11bcfe98] */
  EAX = (r32((uint32_t)(0x11bcfe98)));
  /* 11b98c00 push eax */
  push32((uint32_t)(EAX));
  /* 11b98c01 call 0x11b9b6a0 */
  push32(0x11b98c06u); f_11b9b6a0();
  /* 11b98c06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b98c09 mov ecx, dword ptr [0x11bcfe94] */
  ECX = (r32((uint32_t)(0x11bcfe94)));
  /* 11b98c0f sub ecx, dword ptr [0x11bcfe98] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11bcfe98))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b98c15 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b98c18 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b98c1a jae 0x11b98c7d */
  if (!C.cf) goto L_11b98c7d;
  /* 11b98c1c push 0x68 */
  push32((uint32_t)(0x68u));
  /* 11b98c1e push 0x11bc8430 */
  push32((uint32_t)(0x11bc8430u));
  /* 11b98c23 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b98c25 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b98c27 mov edx, dword ptr [0x11bcfe98] */
  EDX = (r32((uint32_t)(0x11bcfe98)));
  /* 11b98c2d push edx */
  push32((uint32_t)(EDX));
  /* 11b98c2e call 0x11b9b6a0 */
  push32(0x11b98c33u); f_11b9b6a0();
  /* 11b98c33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b98c36 add eax, 0x10 */
  { uint32_t _a=(EAX),_b=(0x10u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b98c39 push eax */
  push32((uint32_t)(EAX));
  /* 11b98c3a mov eax, dword ptr [0x11bcfe98] */
  EAX = (r32((uint32_t)(0x11bcfe98)));
  /* 11b98c3f push eax */
  push32((uint32_t)(EAX));
  /* 11b98c40 call 0x11b9ac60 */
  push32(0x11b98c45u); f_11b9ac60();
  /* 11b98c45 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b98c48 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b98c4b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b98c4f jne 0x11b98c5a */
  if (!C.zf) goto L_11b98c5a;
  /* 11b98c51 call 0x11b9d9a0 */
  push32(0x11b98c56u); f_11b9d9a0();
  /* 11b98c56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b98c58 jmp 0x11b98c9f */
  goto L_11b98c9f;
L_11b98c5a:;
  /* 11b98c5a mov ecx, dword ptr [0x11bcfe94] */
  ECX = (r32((uint32_t)(0x11bcfe94)));
  /* 11b98c60 sub ecx, dword ptr [0x11bcfe98] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11bcfe98))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b98c66 sar ecx, 2 */
  ECX = (sh_sar((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b98c69 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b98c6c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 11b98c6f mov dword ptr [0x11bcfe94], eax */
  w32((uint32_t)(0x11bcfe94), (EAX));
  /* 11b98c74 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b98c77 mov dword ptr [0x11bcfe98], ecx */
  w32((uint32_t)(0x11bcfe98), (ECX));
L_11b98c7d:;
  /* 11b98c7d mov edx, dword ptr [0x11bcfe94] */
  EDX = (r32((uint32_t)(0x11bcfe94)));
  /* 11b98c83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b98c86 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11b98c88 mov ecx, dword ptr [0x11bcfe94] */
  ECX = (r32((uint32_t)(0x11bcfe94)));
  /* 11b98c8e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b98c91 mov dword ptr [0x11bcfe94], ecx */
  w32((uint32_t)(0x11bcfe94), (ECX));
  /* 11b98c97 call 0x11b9d9a0 */
  push32(0x11b98c9cu); f_11b9d9a0();
  /* 11b98c9c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11b98c9f:;
  /* 11b98c9f mov esp, ebp */
  ESP = (EBP);
  /* 11b98ca1 pop ebp */
  EBP = (pop32());
  /* 11b98ca2 ret  */
  ESPCHK(0x11b98bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008cb0 @ 0x11b98cb0 (24 bytes, 12 insns) */
void f_11b98cb0(void) {
  FTRACE(0x11b98cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b98cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b98cb1 mov ebp, esp */
  EBP = (ESP);
  /* 11b98cb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b98cb6 push eax */
  push32((uint32_t)(EAX));
  /* 11b98cb7 call 0x11b98bf0 */
  push32(0x11b98cbcu); f_11b98bf0();
  /* 11b98cbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b98cbf neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b98cc1 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b98cc3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b98cc5 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11b98cc6 pop ebp */
  EBP = (pop32());
  /* 11b98cc7 ret  */
  ESPCHK(0x11b98cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008cd0 @ 0x11b98cd0 (77 bytes, 20 insns) */
void f_11b98cd0(void) {
  FTRACE(0x11b98cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b98cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b98cd1 mov ebp, esp */
  EBP = (ESP);
  /* 11b98cd3 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 11b98cd8 push 0x11bc8430 */
  push32((uint32_t)(0x11bc8430u));
  /* 11b98cdd push 2 */
  push32((uint32_t)(0x2u));
  /* 11b98cdf push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11b98ce4 call 0x11b9a7d0 */
  push32(0x11b98ce9u); f_11b9a7d0();
  /* 11b98ce9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b98cec mov dword ptr [0x11bcfe98], eax */
  w32((uint32_t)(0x11bcfe98), (EAX));
  /* 11b98cf1 cmp dword ptr [0x11bcfe98], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bcfe98))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b98cf8 jne 0x11b98d04 */
  if (!C.zf) goto L_11b98d04;
  /* 11b98cfa push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11b98cfc call 0x11b99240 */
  push32(0x11b98d01u); f_11b99240();
  /* 11b98d01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b98d04:;
  /* 11b98d04 mov eax, dword ptr [0x11bcfe98] */
  EAX = (r32((uint32_t)(0x11bcfe98)));
  /* 11b98d09 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11b98d0f mov ecx, dword ptr [0x11bcfe98] */
  ECX = (r32((uint32_t)(0x11bcfe98)));
  /* 11b98d15 mov dword ptr [0x11bcfe94], ecx */
  w32((uint32_t)(0x11bcfe94), (ECX));
  /* 11b98d1b pop ebp */
  EBP = (pop32());
  /* 11b98d1c ret  */
  ESPCHK(0x11b98cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d20 @ 0x11b98d20 (16 bytes, 7 insns) */
void f_11b98d20(void) {
  FTRACE(0x11b98d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b98d20 push ebp */
  push32((uint32_t)(EBP));
  /* 11b98d21 mov ebp, esp */
  EBP = (ESP);
  /* 11b98d23 call 0x11b9d4d0 */
  push32(0x11b98d28u); f_11b9d4d0();
  /* 11b98d28 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b98d2b mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 11b98d2e pop ebp */
  EBP = (pop32());
  /* 11b98d2f ret  */
  ESPCHK(0x11b98d20u, _esp0);
  ESP += 4; return;
}

/* _rand @ 0x11b98d30 (54 bytes, 18 insns) */
void f_11b98d30(void) {
  FTRACE(0x11b98d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b98d30 push ebp */
  push32((uint32_t)(EBP));
  /* 11b98d31 mov ebp, esp */
  EBP = (ESP);
  /* 11b98d33 push ecx */
  push32((uint32_t)(ECX));
  /* 11b98d34 call 0x11b9d4d0 */
  push32(0x11b98d39u); f_11b9d4d0();
  /* 11b98d39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b98d3c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b98d3f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11b98d42 imul ecx, ecx, 0x343fd */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x343fdu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b98d48 add ecx, 0x269ec3 */
  { uint32_t _a=(ECX),_b=(0x269ec3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b98d4e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b98d51 mov dword ptr [edx + 0x14], ecx */
  w32((uint32_t)(EDX + 0x14), (ECX));
  /* 11b98d54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b98d57 mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 11b98d5a shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11b98d5d and eax, 0x7fff */
  { uint32_t _r=(EAX)&(0x7fffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b98d62 mov esp, ebp */
  ESP = (EBP);
  /* 11b98d64 pop ebp */
  EBP = (pop32());
  /* 11b98d65 ret  */
  ESPCHK(0x11b98d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d70 @ 0x11b98d70 (385 bytes, 103 insns) */
void f_11b98d70(void) {
  FTRACE(0x11b98d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b98d70 push ebp */
  push32((uint32_t)(EBP));
  /* 11b98d71 mov ebp, esp */
  EBP = (ESP);
  /* 11b98d73 sub esp, 0xd8 */
  { uint32_t _a=(ESP),_b=(0xd8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b98d79 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 11b98d7c push eax */
  push32((uint32_t)(EAX));
  /* 11b98d7d call dword ptr [0x11bd03ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd03ec))), 0x11b98d83u);
  /* 11b98d83 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 11b98d86 push ecx */
  push32((uint32_t)(ECX));
  /* 11b98d87 call dword ptr [0x11bd03e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd03e8))), 0x11b98d8du);
  /* 11b98d8d mov edx, dword ptr [ebp - 6] */
  EDX = (r32((uint32_t)(EBP + -0x6)));
  /* 11b98d90 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b98d96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b98d98 mov ax, word ptr [0x11bce34a] */
  AX = (r16((uint32_t)(0x11bce34a)));
  /* 11b98d9e cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b98da0 jne 0x11b98e08 */
  if (!C.zf) goto L_11b98e08;
  /* 11b98da2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b98da5 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b98dab xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b98dad mov dx, word ptr [0x11bce348] */
  DX = (r16((uint32_t)(0x11bce348)));
  /* 11b98db4 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b98db6 jne 0x11b98e08 */
  if (!C.zf) goto L_11b98e08;
  /* 11b98db8 mov eax, dword ptr [ebp - 0xa] */
  EAX = (r32((uint32_t)(EBP + -0xa)));
  /* 11b98dbb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b98dc0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b98dc2 mov cx, word ptr [0x11bce346] */
  CX = (r16((uint32_t)(0x11bce346)));
  /* 11b98dc9 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b98dcb jne 0x11b98e08 */
  if (!C.zf) goto L_11b98e08;
  /* 11b98dcd mov edx, dword ptr [ebp - 0xe] */
  EDX = (r32((uint32_t)(EBP + -0xe)));
  /* 11b98dd0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b98dd6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b98dd8 mov ax, word ptr [0x11bce342] */
  AX = (r16((uint32_t)(0x11bce342)));
  /* 11b98dde cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b98de0 jne 0x11b98e08 */
  if (!C.zf) goto L_11b98e08;
  /* 11b98de2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b98de5 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b98deb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b98ded mov dx, word ptr [0x11bce340] */
  DX = (r16((uint32_t)(0x11bce340)));
  /* 11b98df4 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b98df6 jne 0x11b98e08 */
  if (!C.zf) goto L_11b98e08;
  /* 11b98df8 mov eax, dword ptr [0x11bce338] */
  EAX = (r32((uint32_t)(0x11bce338)));
  /* 11b98dfd mov dword ptr [ebp - 0xd8], eax */
  w32((uint32_t)(EBP + -0xd8), (EAX));
  /* 11b98e03 jmp 0x11b98e90 */
  goto L_11b98e90;
L_11b98e08:;
  /* 11b98e08 lea ecx, [ebp - 0xd0] */
  ECX = ((uint32_t)(EBP + -0xd0));
  /* 11b98e0e push ecx */
  push32((uint32_t)(ECX));
  /* 11b98e0f call dword ptr [0x11bd03e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd03e4))), 0x11b98e15u);
  /* 11b98e15 mov dword ptr [ebp - 0xd4], eax */
  w32((uint32_t)(EBP + -0xd4), (EAX));
  /* 11b98e1b cmp dword ptr [ebp - 0xd4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xd4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b98e22 je 0x11b98e58 */
  if (C.zf) goto L_11b98e58;
  /* 11b98e24 cmp dword ptr [ebp - 0xd4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xd4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b98e2b jne 0x11b98e4c */
  if (!C.zf) goto L_11b98e4c;
  /* 11b98e2d mov edx, dword ptr [ebp - 0x36] */
  EDX = (r32((uint32_t)(EBP + -0x36)));
  /* 11b98e30 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b98e36 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b98e38 je 0x11b98e4c */
  if (C.zf) goto L_11b98e4c;
  /* 11b98e3a cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b98e3e je 0x11b98e4c */
  if (C.zf) goto L_11b98e4c;
  /* 11b98e40 mov dword ptr [ebp - 0xd8], 1 */
  w32((uint32_t)(EBP + -0xd8), (0x1u));
  /* 11b98e4a jmp 0x11b98e56 */
  goto L_11b98e56;
L_11b98e4c:;
  /* 11b98e4c mov dword ptr [ebp - 0xd8], 0 */
  w32((uint32_t)(EBP + -0xd8), (0x0u));
L_11b98e56:;
  /* 11b98e56 jmp 0x11b98e62 */
  goto L_11b98e62;
L_11b98e58:;
  /* 11b98e58 mov dword ptr [ebp - 0xd8], 0xffffffff */
  w32((uint32_t)(EBP + -0xd8), (0xffffffffu));
L_11b98e62:;
  /* 11b98e62 mov eax, dword ptr [ebp - 0xd8] */
  EAX = (r32((uint32_t)(EBP + -0xd8)));
  /* 11b98e68 mov dword ptr [0x11bce338], eax */
  w32((uint32_t)(0x11bce338), (EAX));
  /* 11b98e6d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b98e70 mov dword ptr [0x11bce340], ecx */
  w32((uint32_t)(0x11bce340), (ECX));
  /* 11b98e76 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b98e79 mov dword ptr [0x11bce344], edx */
  w32((uint32_t)(0x11bce344), (EDX));
  /* 11b98e7f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b98e82 mov dword ptr [0x11bce348], eax */
  w32((uint32_t)(0x11bce348), (EAX));
  /* 11b98e87 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b98e8a mov dword ptr [0x11bce34c], ecx */
  w32((uint32_t)(0x11bce34c), (ECX));
L_11b98e90:;
  /* 11b98e90 mov edx, dword ptr [ebp - 0xd8] */
  EDX = (r32((uint32_t)(EBP + -0xd8)));
  /* 11b98e96 push edx */
  push32((uint32_t)(EDX));
  /* 11b98e97 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b98e9a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b98e9f push eax */
  push32((uint32_t)(EAX));
  /* 11b98ea0 mov ecx, dword ptr [ebp - 0x1a] */
  ECX = (r32((uint32_t)(EBP + -0x1a)));
  /* 11b98ea3 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b98ea9 push ecx */
  push32((uint32_t)(ECX));
  /* 11b98eaa mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b98ead and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b98eb3 push edx */
  push32((uint32_t)(EDX));
  /* 11b98eb4 mov eax, dword ptr [ebp - 0x1e] */
  EAX = (r32((uint32_t)(EBP + -0x1e)));
  /* 11b98eb7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b98ebc push eax */
  push32((uint32_t)(EAX));
  /* 11b98ebd mov ecx, dword ptr [ebp - 0x22] */
  ECX = (r32((uint32_t)(EBP + -0x22)));
  /* 11b98ec0 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b98ec6 push ecx */
  push32((uint32_t)(ECX));
  /* 11b98ec7 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b98eca and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b98ed0 push edx */
  push32((uint32_t)(EDX));
  /* 11b98ed1 call 0x11b9d9e0 */
  push32(0x11b98ed6u); f_11b9d9e0();
  /* 11b98ed6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b98ed9 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11b98edc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b98ee0 je 0x11b98eea */
  if (C.zf) goto L_11b98eea;
  /* 11b98ee2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b98ee5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b98ee8 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_11b98eea:;
  /* 11b98eea mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b98eed mov esp, ebp */
  ESP = (EBP);
  /* 11b98eef pop ebp */
  EBP = (pop32());
  /* 11b98ef0 ret  */
  ESPCHK(0x11b98d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f00 @ 0x11b98f00 (250 bytes, 92 insns) */
void f_11b98f00(void) {
  FTRACE(0x11b98f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b98f00 push ebp */
  push32((uint32_t)(EBP));
  /* 11b98f01 mov ebp, esp */
  EBP = (ESP);
  /* 11b98f03 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b98f06 push ebx */
  push32((uint32_t)(EBX));
  /* 11b98f07 push esi */
  push32((uint32_t)(ESI));
  /* 11b98f08 push edi */
  push32((uint32_t)(EDI));
  /* 11b98f09 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11b98f0c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11b98f0f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11b98f12 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_11b98f15:;
  /* 11b98f15 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b98f19 jne 0x11b98f39 */
  if (!C.zf) goto L_11b98f39;
  /* 11b98f1b push 0x11bc8458 */
  push32((uint32_t)(0x11bc8458u));
  /* 11b98f20 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b98f22 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11b98f24 push 0x11bc844c */
  push32((uint32_t)(0x11bc844cu));
  /* 11b98f29 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b98f2b call 0x11b99390 */
  push32(0x11b98f30u); f_11b99390();
  /* 11b98f30 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b98f33 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b98f36 jne 0x11b98f39 */
  if (!C.zf) goto L_11b98f39;
  /* 11b98f38 int3  */
  x86_unimpl("int3 @ 0x11b98f38");
L_11b98f39:;
  /* 11b98f39 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b98f3b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b98f3d jne 0x11b98f15 */
  if (!C.zf) goto L_11b98f15;
L_11b98f3f:;
  /* 11b98f3f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b98f43 jne 0x11b98f63 */
  if (!C.zf) goto L_11b98f63;
  /* 11b98f45 push 0x11bc843c */
  push32((uint32_t)(0x11bc843cu));
  /* 11b98f4a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b98f4c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11b98f4e push 0x11bc844c */
  push32((uint32_t)(0x11bc844cu));
  /* 11b98f53 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b98f55 call 0x11b99390 */
  push32(0x11b98f5au); f_11b99390();
  /* 11b98f5a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b98f5d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b98f60 jne 0x11b98f63 */
  if (!C.zf) goto L_11b98f63;
  /* 11b98f62 int3  */
  x86_unimpl("int3 @ 0x11b98f62");
L_11b98f63:;
  /* 11b98f63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b98f65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b98f67 jne 0x11b98f3f */
  if (!C.zf) goto L_11b98f3f;
  /* 11b98f69 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b98f6c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 11b98f73 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b98f76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b98f79 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11b98f7c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b98f7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b98f82 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11b98f84 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b98f87 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 11b98f8e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b98f91 push ecx */
  push32((uint32_t)(ECX));
  /* 11b98f92 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b98f95 push edx */
  push32((uint32_t)(EDX));
  /* 11b98f96 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b98f99 push eax */
  push32((uint32_t)(EAX));
  /* 11b98f9a call 0x11b9dd50 */
  push32(0x11b98f9fu); f_11b9dd50();
  /* 11b98f9f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b98fa2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11b98fa5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b98fa8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11b98fab sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b98fae mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b98fb1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11b98fb4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b98fb7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b98fbb jl 0x11b98fdf */
  if ((C.sf!=C.of)) goto L_11b98fdf;
  /* 11b98fbd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b98fc0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b98fc2 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11b98fc5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b98fc7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b98fcd mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11b98fd0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b98fd3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b98fd5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b98fd8 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b98fdb mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11b98fdd jmp 0x11b98ff0 */
  goto L_11b98ff0;
L_11b98fdf:;
  /* 11b98fdf mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b98fe2 push edx */
  push32((uint32_t)(EDX));
  /* 11b98fe3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b98fe5 call 0x11b9dad0 */
  push32(0x11b98feau); f_11b9dad0();
  /* 11b98fea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b98fed mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_11b98ff0:;
  /* 11b98ff0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b98ff3 pop edi */
  EDI = (pop32());
  /* 11b98ff4 pop esi */
  ESI = (pop32());
  /* 11b98ff5 pop ebx */
  EBX = (pop32());
  /* 11b98ff6 mov esp, ebp */
  ESP = (EBP);
  /* 11b98ff8 pop ebp */
  EBP = (pop32());
  /* 11b98ff9 ret  */
  ESPCHK(0x11b98f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10009000 @ 0x11b99000 (313 bytes, 78 insns) */
void f_11b99000(void) {
  FTRACE(0x11b99000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b99000 push ebp */
  push32((uint32_t)(EBP));
  /* 11b99001 mov ebp, esp */
  EBP = (ESP);
  /* 11b99003 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b99007 jne 0x11b990c7 */
  if (!C.zf) goto L_11b990c7;
  /* 11b9900d call dword ptr [0x11bd03f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd03f4))), 0x11b99013u);
  /* 11b99013 mov dword ptr [0x11bce3e0], eax */
  w32((uint32_t)(0x11bce3e0), (EAX));
  /* 11b99018 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b9901a call 0x11b9f840 */
  push32(0x11b9901fu); f_11b9f840();
  /* 11b9901f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b99022 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b99024 jne 0x11b9902d */
  if (!C.zf) goto L_11b9902d;
  /* 11b99026 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b99028 jmp 0x11b99135 */
  goto L_11b99135;
L_11b9902d:;
  /* 11b9902d mov eax, dword ptr [0x11bce3e0] */
  EAX = (r32((uint32_t)(0x11bce3e0)));
  /* 11b99032 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11b99035 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b9903a mov dword ptr [0x11bce3ec], eax */
  w32((uint32_t)(0x11bce3ec), (EAX));
  /* 11b9903f mov ecx, dword ptr [0x11bce3e0] */
  ECX = (r32((uint32_t)(0x11bce3e0)));
  /* 11b99045 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b9904b mov dword ptr [0x11bce3e8], ecx */
  w32((uint32_t)(0x11bce3e8), (ECX));
  /* 11b99051 mov edx, dword ptr [0x11bce3e8] */
  EDX = (r32((uint32_t)(0x11bce3e8)));
  /* 11b99057 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11b9905a add edx, dword ptr [0x11bce3ec] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11bce3ec))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b99060 mov dword ptr [0x11bce3e4], edx */
  w32((uint32_t)(0x11bce3e4), (EDX));
  /* 11b99066 mov eax, dword ptr [0x11bce3e0] */
  EAX = (r32((uint32_t)(0x11bce3e0)));
  /* 11b9906b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11b9906e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b99073 mov dword ptr [0x11bce3e0], eax */
  w32((uint32_t)(0x11bce3e0), (EAX));
  /* 11b99078 call 0x11b9d3f0 */
  push32(0x11b9907du); f_11b9d3f0();
  /* 11b9907d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9907f jne 0x11b9908d */
  if (!C.zf) goto L_11b9908d;
  /* 11b99081 call 0x11b9f890 */
  push32(0x11b99086u); f_11b9f890();
  /* 11b99086 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b99088 jmp 0x11b99135 */
  goto L_11b99135;
L_11b9908d:;
  /* 11b9908d call dword ptr [0x11bd03f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd03f0))), 0x11b99093u);
  /* 11b99093 mov dword ptr [0x11bcfeb4], eax */
  w32((uint32_t)(0x11bcfeb4), (EAX));
  /* 11b99098 call 0x11b9f620 */
  push32(0x11b9909du); f_11b9f620();
  /* 11b9909d mov dword ptr [0x11bce354], eax */
  w32((uint32_t)(0x11bce354), (EAX));
  /* 11b990a2 call 0x11b9ebf0 */
  push32(0x11b990a7u); f_11b9ebf0();
  /* 11b990a7 call 0x11b9f110 */
  push32(0x11b990acu); f_11b9f110();
  /* 11b990ac call 0x11b9efc0 */
  push32(0x11b990b1u); f_11b9efc0();
  /* 11b990b1 call 0x11b9d7e0 */
  push32(0x11b990b6u); f_11b9d7e0();
  /* 11b990b6 mov ecx, dword ptr [0x11bce350] */
  ECX = (r32((uint32_t)(0x11bce350)));
  /* 11b990bc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b990bf mov dword ptr [0x11bce350], ecx */
  w32((uint32_t)(0x11bce350), (ECX));
  /* 11b990c5 jmp 0x11b99130 */
  goto L_11b99130;
L_11b990c7:;
  /* 11b990c7 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b990cb jne 0x11b99120 */
  if (!C.zf) goto L_11b99120;
  /* 11b990cd cmp dword ptr [0x11bce350], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce350))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b990d4 jle 0x11b9911a */
  if ((C.zf||C.sf!=C.of)) goto L_11b9911a;
  /* 11b990d6 mov edx, dword ptr [0x11bce350] */
  EDX = (r32((uint32_t)(0x11bce350)));
  /* 11b990dc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b990df mov dword ptr [0x11bce350], edx */
  w32((uint32_t)(0x11bce350), (EDX));
  /* 11b990e5 cmp dword ptr [0x11bce418], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce418))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b990ec jne 0x11b990f3 */
  if (!C.zf) goto L_11b990f3;
  /* 11b990ee call 0x11b9d860 */
  push32(0x11b990f3u); f_11b9d860();
L_11b990f3:;
  /* 11b990f3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11b990f5 call 0x11b9bce0 */
  push32(0x11b990fau); f_11b9bce0();
  /* 11b990fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b990fd and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11b99100 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b99102 je 0x11b99109 */
  if (C.zf) goto L_11b99109;
  /* 11b99104 call 0x11b9c5f0 */
  push32(0x11b99109u); f_11b9c5f0();
L_11b99109:;
  /* 11b99109 call 0x11b9ef20 */
  push32(0x11b9910eu); f_11b9ef20();
  /* 11b9910e call 0x11b9d480 */
  push32(0x11b99113u); f_11b9d480();
  /* 11b99113 call 0x11b9f890 */
  push32(0x11b99118u); f_11b9f890();
  /* 11b99118 jmp 0x11b9911e */
  goto L_11b9911e;
L_11b9911a:;
  /* 11b9911a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9911c jmp 0x11b99135 */
  goto L_11b99135;
L_11b9911e:;
  /* 11b9911e jmp 0x11b99130 */
  goto L_11b99130;
L_11b99120:;
  /* 11b99120 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b99124 jne 0x11b99130 */
  if (!C.zf) goto L_11b99130;
  /* 11b99126 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b99128 call 0x11b9d570 */
  push32(0x11b9912du); f_11b9d570();
  /* 11b9912d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b99130:;
  /* 11b99130 mov eax, 1 */
  EAX = (0x1u);
L_11b99135:;
  /* 11b99135 pop ebp */
  EBP = (pop32());
  /* 11b99136 ret 0xc */
  ESPCHK(0x11b99000u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x11b99140 (243 bytes, 86 insns) */
void f_11b99140(void) {
  FTRACE(0x11b99140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b99140 push ebp */
  push32((uint32_t)(EBP));
  /* 11b99141 mov ebp, esp */
  EBP = (ESP);
  /* 11b99143 push ecx */
  push32((uint32_t)(ECX));
  /* 11b99144 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11b9914b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9914f jne 0x11b99161 */
  if (!C.zf) goto L_11b99161;
  /* 11b99151 cmp dword ptr [0x11bce350], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce350))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b99158 jne 0x11b99161 */
  if (!C.zf) goto L_11b99161;
  /* 11b9915a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9915c jmp 0x11b9922d */
  goto L_11b9922d;
L_11b99161:;
  /* 11b99161 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b99165 je 0x11b9916d */
  if (C.zf) goto L_11b9916d;
  /* 11b99167 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9916b jne 0x11b991af */
  if (!C.zf) goto L_11b991af;
L_11b9916d:;
  /* 11b9916d cmp dword ptr [0x11bcfec4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bcfec4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b99174 je 0x11b9918b */
  if (C.zf) goto L_11b9918b;
  /* 11b99176 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b99179 push eax */
  push32((uint32_t)(EAX));
  /* 11b9917a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9917d push ecx */
  push32((uint32_t)(ECX));
  /* 11b9917e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b99181 push edx */
  push32((uint32_t)(EDX));
  /* 11b99182 call dword ptr [0x11bcfec4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bcfec4))), 0x11b99188u);
  /* 11b99188 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b9918b:;
  /* 11b9918b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9918f je 0x11b991a5 */
  if (C.zf) goto L_11b991a5;
  /* 11b99191 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b99194 push eax */
  push32((uint32_t)(EAX));
  /* 11b99195 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b99198 push ecx */
  push32((uint32_t)(ECX));
  /* 11b99199 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9919c push edx */
  push32((uint32_t)(EDX));
  /* 11b9919d call 0x11b99000 */
  push32(0x11b991a2u); f_11b99000();
  /* 11b991a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b991a5:;
  /* 11b991a5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b991a9 jne 0x11b991af */
  if (!C.zf) goto L_11b991af;
  /* 11b991ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b991ad jmp 0x11b9922d */
  goto L_11b9922d;
L_11b991af:;
  /* 11b991af mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b991b2 push eax */
  push32((uint32_t)(EAX));
  /* 11b991b3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b991b6 push ecx */
  push32((uint32_t)(ECX));
  /* 11b991b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b991ba push edx */
  push32((uint32_t)(EDX));
  /* 11b991bb call 0x11b91046 */
  push32(0x11b991c0u); f_11b91046();
  /* 11b991c0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b991c3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b991c7 jne 0x11b991de */
  if (!C.zf) goto L_11b991de;
  /* 11b991c9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b991cd jne 0x11b991de */
  if (!C.zf) goto L_11b991de;
  /* 11b991cf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b991d2 push eax */
  push32((uint32_t)(EAX));
  /* 11b991d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b991d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b991d8 push ecx */
  push32((uint32_t)(ECX));
  /* 11b991d9 call 0x11b99000 */
  push32(0x11b991deu); f_11b99000();
L_11b991de:;
  /* 11b991de cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b991e2 je 0x11b991ea */
  if (C.zf) goto L_11b991ea;
  /* 11b991e4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b991e8 jne 0x11b9922a */
  if (!C.zf) goto L_11b9922a;
L_11b991ea:;
  /* 11b991ea mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b991ed push edx */
  push32((uint32_t)(EDX));
  /* 11b991ee mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b991f1 push eax */
  push32((uint32_t)(EAX));
  /* 11b991f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b991f5 push ecx */
  push32((uint32_t)(ECX));
  /* 11b991f6 call 0x11b99000 */
  push32(0x11b991fbu); f_11b99000();
  /* 11b991fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b991fd jne 0x11b99206 */
  if (!C.zf) goto L_11b99206;
  /* 11b991ff mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11b99206:;
  /* 11b99206 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9920a je 0x11b9922a */
  if (C.zf) goto L_11b9922a;
  /* 11b9920c cmp dword ptr [0x11bcfec4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bcfec4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b99213 je 0x11b9922a */
  if (C.zf) goto L_11b9922a;
  /* 11b99215 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b99218 push edx */
  push32((uint32_t)(EDX));
  /* 11b99219 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9921c push eax */
  push32((uint32_t)(EAX));
  /* 11b9921d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b99220 push ecx */
  push32((uint32_t)(ECX));
  /* 11b99221 call dword ptr [0x11bcfec4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bcfec4))), 0x11b99227u);
  /* 11b99227 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b9922a:;
  /* 11b9922a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11b9922d:;
  /* 11b9922d mov esp, ebp */
  ESP = (EBP);
  /* 11b9922f pop ebp */
  EBP = (pop32());
  /* 11b99230 ret 0xc */
  ESPCHK(0x11b99140u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x11b99240 (58 bytes, 18 insns) */
void f_11b99240(void) {
  FTRACE(0x11b99240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b99240 push ebp */
  push32((uint32_t)(EBP));
  /* 11b99241 mov ebp, esp */
  EBP = (ESP);
  /* 11b99243 cmp dword ptr [0x11bce35c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11bce35c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9924a je 0x11b9925e */
  if (C.zf) goto L_11b9925e;
  /* 11b9924c cmp dword ptr [0x11bce35c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce35c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b99253 jne 0x11b99263 */
  if (!C.zf) goto L_11b99263;
  /* 11b99255 cmp dword ptr [0x11bce360], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11bce360))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9925c jne 0x11b99263 */
  if (!C.zf) goto L_11b99263;
L_11b9925e:;
  /* 11b9925e call 0x11b9f930 */
  push32(0x11b99263u); f_11b9f930();
L_11b99263:;
  /* 11b99263 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b99266 push eax */
  push32((uint32_t)(EAX));
  /* 11b99267 call 0x11b9f980 */
  push32(0x11b9926cu); f_11b9f980();
  /* 11b9926c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9926f push 0xff */
  push32((uint32_t)(0xffu));
  /* 11b99274 call dword ptr [0x11bcbdcc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bcbdcc))), 0x11b9927au);
  /* 11b9927a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9927d pop ebp */
  EBP = (pop32());
  /* 11b9927e ret  */
  ESPCHK(0x11b99240u, _esp0);
  ESP += 4; return;
}

/* FUN_10009280 @ 0x11b99280 (11 bytes, 5 insns) */
void f_11b99280(void) {
  FTRACE(0x11b99280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b99280 push ebp */
  push32((uint32_t)(EBP));
  /* 11b99281 mov ebp, esp */
  EBP = (ESP);
  /* 11b99283 call dword ptr [0x11bd03f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd03f8))), 0x11b99289u);
  /* 11b99289 pop ebp */
  EBP = (pop32());
  /* 11b9928a ret  */
  ESPCHK(0x11b99280u, _esp0);
  ESP += 4; return;
}

/* FUN_10009290 @ 0x11b99290 (87 bytes, 30 insns) */
void f_11b99290(void) {
  FTRACE(0x11b99290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b99290 push ebp */
  push32((uint32_t)(EBP));
  /* 11b99291 mov ebp, esp */
  EBP = (ESP);
  /* 11b99293 push ecx */
  push32((uint32_t)(ECX));
  /* 11b99294 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b99298 jl 0x11b992a0 */
  if ((C.sf!=C.of)) goto L_11b992a0;
  /* 11b9929a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9929e jl 0x11b992a5 */
  if ((C.sf!=C.of)) goto L_11b992a5;
L_11b992a0:;
  /* 11b992a0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b992a3 jmp 0x11b992e3 */
  goto L_11b992e3;
L_11b992a5:;
  /* 11b992a5 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b992a9 jne 0x11b992b7 */
  if (!C.zf) goto L_11b992b7;
  /* 11b992ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b992ae mov eax, dword ptr [eax*4 + 0x11bcbdd4] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11bcbdd4)));
  /* 11b992b5 jmp 0x11b992e3 */
  goto L_11b992e3;
L_11b992b7:;
  /* 11b992b7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b992ba and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 11b992bd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b992bf je 0x11b992c6 */
  if (C.zf) goto L_11b992c6;
  /* 11b992c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b992c4 jmp 0x11b992e3 */
  goto L_11b992e3;
L_11b992c6:;
  /* 11b992c6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b992c9 mov eax, dword ptr [edx*4 + 0x11bcbdd4] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11bcbdd4)));
  /* 11b992d0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b992d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b992d6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b992d9 mov dword ptr [ecx*4 + 0x11bcbdd4], edx */
  w32((uint32_t)(ECX*4 + 0x11bcbdd4), (EDX));
  /* 11b992e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11b992e3:;
  /* 11b992e3 mov esp, ebp */
  ESP = (EBP);
  /* 11b992e5 pop ebp */
  EBP = (pop32());
  /* 11b992e6 ret  */
  ESPCHK(0x11b99290u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x11b992f0 (126 bytes, 38 insns) */
void f_11b992f0(void) {
  FTRACE(0x11b992f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b992f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b992f1 mov ebp, esp */
  EBP = (ESP);
  /* 11b992f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b992f4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b992f8 jl 0x11b99300 */
  if ((C.sf!=C.of)) goto L_11b99300;
  /* 11b992fa cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b992fe jl 0x11b99307 */
  if ((C.sf!=C.of)) goto L_11b99307;
L_11b99300:;
  /* 11b99300 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 11b99305 jmp 0x11b9936a */
  goto L_11b9936a;
L_11b99307:;
  /* 11b99307 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9930b jne 0x11b99319 */
  if (!C.zf) goto L_11b99319;
  /* 11b9930d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b99310 mov eax, dword ptr [eax*4 + 0x11bcbde0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11bcbde0)));
  /* 11b99317 jmp 0x11b9936a */
  goto L_11b9936a;
L_11b99319:;
  /* 11b99319 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9931c mov edx, dword ptr [ecx*4 + 0x11bcbde0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11bcbde0)));
  /* 11b99323 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b99326 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9932a jne 0x11b99340 */
  if (!C.zf) goto L_11b99340;
  /* 11b9932c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11b9932e call dword ptr [0x11bd03fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd03fc))), 0x11b99334u);
  /* 11b99334 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b99337 mov dword ptr [ecx*4 + 0x11bcbde0], eax */
  w32((uint32_t)(ECX*4 + 0x11bcbde0), (EAX));
  /* 11b9933e jmp 0x11b99367 */
  goto L_11b99367;
L_11b99340:;
  /* 11b99340 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b99344 jne 0x11b9935a */
  if (!C.zf) goto L_11b9935a;
  /* 11b99346 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11b99348 call dword ptr [0x11bd03fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd03fc))), 0x11b9934eu);
  /* 11b9934e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b99351 mov dword ptr [edx*4 + 0x11bcbde0], eax */
  w32((uint32_t)(EDX*4 + 0x11bcbde0), (EAX));
  /* 11b99358 jmp 0x11b99367 */
  goto L_11b99367;
L_11b9935a:;
  /* 11b9935a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9935d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b99360 mov dword ptr [eax*4 + 0x11bcbde0], ecx */
  w32((uint32_t)(EAX*4 + 0x11bcbde0), (ECX));
L_11b99367:;
  /* 11b99367 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11b9936a:;
  /* 11b9936a mov esp, ebp */
  ESP = (EBP);
  /* 11b9936c pop ebp */
  EBP = (pop32());
  /* 11b9936d ret  */
  ESPCHK(0x11b992f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009370 @ 0x11b99370 (28 bytes, 11 insns) */
void f_11b99370(void) {
  FTRACE(0x11b99370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b99370 push ebp */
  push32((uint32_t)(EBP));
  /* 11b99371 mov ebp, esp */
  EBP = (ESP);
  /* 11b99373 push ecx */
  push32((uint32_t)(ECX));
  /* 11b99374 mov eax, dword ptr [0x11bcfea8] */
  EAX = (r32((uint32_t)(0x11bcfea8)));
  /* 11b99379 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b9937c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9937f mov dword ptr [0x11bcfea8], ecx */
  w32((uint32_t)(0x11bcfea8), (ECX));
  /* 11b99385 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b99388 mov esp, ebp */
  ESP = (EBP);
  /* 11b9938a pop ebp */
  EBP = (pop32());
  /* 11b9938b ret  */
  ESPCHK(0x11b99370u, _esp0);
  ESP += 4; return;
}

/* FUN_10009390 @ 0x11b99390 (912 bytes, 248 insns) */
void f_11b99390(void) {
  FTRACE(0x11b99390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b99390 push ebp */
  push32((uint32_t)(EBP));
  /* 11b99391 mov ebp, esp */
  EBP = (ESP);
  /* 11b99393 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 11b99398 call 0x11ba01f0 */
  push32(0x11b9939du); f_11ba01f0();
  /* 11b9939d push edi */
  push32((uint32_t)(EDI));
  /* 11b9939e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 11b993a5 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 11b993aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b993ac lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 11b993b2 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b993b4 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 11b993b6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11b993b7 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 11b993be mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 11b993c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b993c5 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 11b993cb rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b993cd stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 11b993cf stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11b993d0 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 11b993d7 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 11b993dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b993de lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 11b993e4 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b993e6 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 11b993e8 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11b993e9 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 11b993ec mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 11b993f2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b993f6 jl 0x11b993fe */
  if ((C.sf!=C.of)) goto L_11b993fe;
  /* 11b993f8 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b993fc jl 0x11b99406 */
  if ((C.sf!=C.of)) goto L_11b99406;
L_11b993fe:;
  /* 11b993fe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b99401 jmp 0x11b9971b */
  goto L_11b9971b;
L_11b99406:;
  /* 11b99406 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9940a jne 0x11b994b0 */
  if (!C.zf) goto L_11b994b0;
  /* 11b99410 push 0x11bcbdd0 */
  push32((uint32_t)(0x11bcbdd0u));
  /* 11b99415 call dword ptr [0x11bd0414] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0414))), 0x11b9941bu);
  /* 11b9941b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9941d jle 0x11b994b0 */
  if ((C.zf||C.sf!=C.of)) goto L_11b994b0;
  /* 11b99423 cmp dword ptr [0x11bce364], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce364))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9942a jne 0x11b9946e */
  if (!C.zf) goto L_11b9946e;
  /* 11b9942c push 0x11bc8534 */
  push32((uint32_t)(0x11bc8534u));
  /* 11b99431 call dword ptr [0x11bd0308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0308))), 0x11b99437u);
  /* 11b99437 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 11b9943d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b99444 je 0x11b99466 */
  if (C.zf) goto L_11b99466;
  /* 11b99446 push 0x11bc8528 */
  push32((uint32_t)(0x11bc8528u));
  /* 11b9944b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 11b99451 push ecx */
  push32((uint32_t)(ECX));
  /* 11b99452 call dword ptr [0x11bd030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd030c))), 0x11b99458u);
  /* 11b99458 mov dword ptr [0x11bce364], eax */
  w32((uint32_t)(0x11bce364), (EAX));
  /* 11b9945d cmp dword ptr [0x11bce364], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce364))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b99464 jne 0x11b9946e */
  if (!C.zf) goto L_11b9946e;
L_11b99466:;
  /* 11b99466 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b99469 jmp 0x11b9971b */
  goto L_11b9971b;
L_11b9946e:;
  /* 11b9946e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b99471 push edx */
  push32((uint32_t)(EDX));
  /* 11b99472 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b99475 push eax */
  push32((uint32_t)(EAX));
  /* 11b99476 push 0x11bc84f4 */
  push32((uint32_t)(0x11bc84f4u));
  /* 11b9947b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 11b99481 push ecx */
  push32((uint32_t)(ECX));
  /* 11b99482 call dword ptr [0x11bce364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bce364))), 0x11b99488u);
  /* 11b99488 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9948b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11b99491 push edx */
  push32((uint32_t)(EDX));
  /* 11b99492 call dword ptr [0x11bd0408] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0408))), 0x11b99498u);
  /* 11b99498 push 0x11bcbdd0 */
  push32((uint32_t)(0x11bcbdd0u));
  /* 11b9949d call dword ptr [0x11bd0404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0404))), 0x11b994a3u);
  /* 11b994a3 call 0x11b99280 */
  push32(0x11b994a8u); f_11b99280();
  /* 11b994a8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b994ab jmp 0x11b9971b */
  goto L_11b9971b;
L_11b994b0:;
  /* 11b994b0 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b994b4 je 0x11b994ed */
  if (C.zf) goto L_11b994ed;
  /* 11b994b6 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 11b994bc push eax */
  push32((uint32_t)(EAX));
  /* 11b994bd mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b994c0 push ecx */
  push32((uint32_t)(ECX));
  /* 11b994c1 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 11b994c6 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 11b994cc push edx */
  push32((uint32_t)(EDX));
  /* 11b994cd call 0x11ba00f0 */
  push32(0x11b994d2u); f_11ba00f0();
  /* 11b994d2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b994d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b994d7 jge 0x11b994ed */
  if ((C.sf==C.of)) goto L_11b994ed;
  /* 11b994d9 push 0x11bc84c8 */
  push32((uint32_t)(0x11bc84c8u));
  /* 11b994de lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 11b994e4 push eax */
  push32((uint32_t)(EAX));
  /* 11b994e5 call 0x11ba0000 */
  push32(0x11b994eau); f_11ba0000();
  /* 11b994ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b994ed:;
  /* 11b994ed cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b994f1 jne 0x11b99525 */
  if (!C.zf) goto L_11b99525;
  /* 11b994f3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b994f7 je 0x11b99505 */
  if (C.zf) goto L_11b99505;
  /* 11b994f9 mov dword ptr [ebp - 0x3028], 0x11bc84b4 */
  w32((uint32_t)(EBP + -0x3028), (0x11bc84b4u));
  /* 11b99503 jmp 0x11b9950f */
  goto L_11b9950f;
L_11b99505:;
  /* 11b99505 mov dword ptr [ebp - 0x3028], 0x11bc84a0 */
  w32((uint32_t)(EBP + -0x3028), (0x11bc84a0u));
L_11b9950f:;
  /* 11b9950f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 11b99515 push ecx */
  push32((uint32_t)(ECX));
  /* 11b99516 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 11b9951c push edx */
  push32((uint32_t)(EDX));
  /* 11b9951d call 0x11ba0000 */
  push32(0x11b99522u); f_11ba0000();
  /* 11b99522 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b99525:;
  /* 11b99525 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 11b9952b push eax */
  push32((uint32_t)(EAX));
  /* 11b9952c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 11b99532 push ecx */
  push32((uint32_t)(ECX));
  /* 11b99533 call 0x11ba0010 */
  push32(0x11b99538u); f_11ba0010();
  /* 11b99538 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9953b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9953f jne 0x11b9957a */
  if (!C.zf) goto L_11b9957a;
  /* 11b99541 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b99544 mov eax, dword ptr [edx*4 + 0x11bcbdd4] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11bcbdd4)));
  /* 11b9954b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11b9954e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b99550 je 0x11b99566 */
  if (C.zf) goto L_11b99566;
  /* 11b99552 push 0x11bc849c */
  push32((uint32_t)(0x11bc849cu));
  /* 11b99557 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 11b9955d push ecx */
  push32((uint32_t)(ECX));
  /* 11b9955e call 0x11ba0010 */
  push32(0x11b99563u); f_11ba0010();
  /* 11b99563 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b99566:;
  /* 11b99566 push 0x11bc8498 */
  push32((uint32_t)(0x11bc8498u));
  /* 11b9956b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 11b99571 push edx */
  push32((uint32_t)(EDX));
  /* 11b99572 call 0x11ba0010 */
  push32(0x11b99577u); f_11ba0010();
  /* 11b99577 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b9957a:;
  /* 11b9957a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9957e je 0x11b995c2 */
  if (C.zf) goto L_11b995c2;
  /* 11b99580 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 11b99586 push eax */
  push32((uint32_t)(EAX));
  /* 11b99587 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9958a push ecx */
  push32((uint32_t)(ECX));
  /* 11b9958b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9958e push edx */
  push32((uint32_t)(EDX));
  /* 11b9958f push 0x11bc848c */
  push32((uint32_t)(0x11bc848cu));
  /* 11b99594 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11b99599 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 11b9959f push eax */
  push32((uint32_t)(EAX));
  /* 11b995a0 call 0x11b9ff00 */
  push32(0x11b995a5u); f_11b9ff00();
  /* 11b995a5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b995a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b995aa jge 0x11b995c0 */
  if ((C.sf==C.of)) goto L_11b995c0;
  /* 11b995ac push 0x11bc84c8 */
  push32((uint32_t)(0x11bc84c8u));
  /* 11b995b1 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 11b995b7 push ecx */
  push32((uint32_t)(ECX));
  /* 11b995b8 call 0x11ba0000 */
  push32(0x11b995bdu); f_11ba0000();
  /* 11b995bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b995c0:;
  /* 11b995c0 jmp 0x11b995d8 */
  goto L_11b995d8;
L_11b995c2:;
  /* 11b995c2 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 11b995c8 push edx */
  push32((uint32_t)(EDX));
  /* 11b995c9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 11b995cf push eax */
  push32((uint32_t)(EAX));
  /* 11b995d0 call 0x11ba0000 */
  push32(0x11b995d5u); f_11ba0000();
  /* 11b995d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b995d8:;
  /* 11b995d8 cmp dword ptr [0x11bcfea8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bcfea8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b995df je 0x11b9961c */
  if (C.zf) goto L_11b9961c;
  /* 11b995e1 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 11b995e7 push ecx */
  push32((uint32_t)(ECX));
  /* 11b995e8 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11b995ee push edx */
  push32((uint32_t)(EDX));
  /* 11b995ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b995f2 push eax */
  push32((uint32_t)(EAX));
  /* 11b995f3 call dword ptr [0x11bcfea8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bcfea8))), 0x11b995f9u);
  /* 11b995f9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b995fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b995fe je 0x11b9961c */
  if (C.zf) goto L_11b9961c;
  /* 11b99600 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b99604 jne 0x11b99611 */
  if (!C.zf) goto L_11b99611;
  /* 11b99606 push 0x11bcbdd0 */
  push32((uint32_t)(0x11bcbdd0u));
  /* 11b9960b call dword ptr [0x11bd0404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0404))), 0x11b99611u);
L_11b99611:;
  /* 11b99611 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 11b99617 jmp 0x11b9971b */
  goto L_11b9971b;
L_11b9961c:;
  /* 11b9961c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9961f mov edx, dword ptr [ecx*4 + 0x11bcbdd4] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11bcbdd4)));
  /* 11b99626 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11b99629 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9962b je 0x11b9966b */
  if (C.zf) goto L_11b9966b;
  /* 11b9962d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b99630 cmp dword ptr [eax*4 + 0x11bcbde0], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11bcbde0))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b99638 je 0x11b9966b */
  if (C.zf) goto L_11b9966b;
  /* 11b9963a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9963c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 11b99642 push ecx */
  push32((uint32_t)(ECX));
  /* 11b99643 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11b99649 push edx */
  push32((uint32_t)(EDX));
  /* 11b9964a call 0x11b9fe80 */
  push32(0x11b9964fu); f_11b9fe80();
  /* 11b9964f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b99652 push eax */
  push32((uint32_t)(EAX));
  /* 11b99653 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 11b99659 push eax */
  push32((uint32_t)(EAX));
  /* 11b9965a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9965d mov edx, dword ptr [ecx*4 + 0x11bcbde0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11bcbde0)));
  /* 11b99664 push edx */
  push32((uint32_t)(EDX));
  /* 11b99665 call dword ptr [0x11bd0400] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0400))), 0x11b9966bu);
L_11b9966b:;
  /* 11b9966b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9966e mov ecx, dword ptr [eax*4 + 0x11bcbdd4] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11bcbdd4)));
  /* 11b99675 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11b99678 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b9967a je 0x11b99689 */
  if (C.zf) goto L_11b99689;
  /* 11b9967c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11b99682 push edx */
  push32((uint32_t)(EDX));
  /* 11b99683 call dword ptr [0x11bd0408] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0408))), 0x11b99689u);
L_11b99689:;
  /* 11b99689 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9968c mov ecx, dword ptr [eax*4 + 0x11bcbdd4] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11bcbdd4)));
  /* 11b99693 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11b99696 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b99698 je 0x11b99708 */
  if (C.zf) goto L_11b99708;
  /* 11b9969a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9969e je 0x11b996bd */
  if (C.zf) goto L_11b996bd;
  /* 11b996a0 push 0xa */
  push32((uint32_t)(0xau));
  /* 11b996a2 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 11b996a8 push edx */
  push32((uint32_t)(EDX));
  /* 11b996a9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b996ac push eax */
  push32((uint32_t)(EAX));
  /* 11b996ad call 0x11b9fb90 */
  push32(0x11b996b2u); f_11b9fb90();
  /* 11b996b2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b996b5 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 11b996bb jmp 0x11b996c7 */
  goto L_11b996c7;
L_11b996bd:;
  /* 11b996bd mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_11b996c7:;
  /* 11b996c7 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 11b996cd push ecx */
  push32((uint32_t)(ECX));
  /* 11b996ce mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b996d1 push edx */
  push32((uint32_t)(EDX));
  /* 11b996d2 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 11b996d8 push eax */
  push32((uint32_t)(EAX));
  /* 11b996d9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b996dc push ecx */
  push32((uint32_t)(ECX));
  /* 11b996dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b996e0 push edx */
  push32((uint32_t)(EDX));
  /* 11b996e1 call 0x11b99720 */
  push32(0x11b996e6u); f_11b99720();
  /* 11b996e6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b996e9 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 11b996ef cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b996f3 jne 0x11b99700 */
  if (!C.zf) goto L_11b99700;
  /* 11b996f5 push 0x11bcbdd0 */
  push32((uint32_t)(0x11bcbdd0u));
  /* 11b996fa call dword ptr [0x11bd0404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0404))), 0x11b99700u);
L_11b99700:;
  /* 11b99700 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 11b99706 jmp 0x11b9971b */
  goto L_11b9971b;
L_11b99708:;
  /* 11b99708 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9970c jne 0x11b99719 */
  if (!C.zf) goto L_11b99719;
  /* 11b9970e push 0x11bcbdd0 */
  push32((uint32_t)(0x11bcbdd0u));
  /* 11b99713 call dword ptr [0x11bd0404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0404))), 0x11b99719u);
L_11b99719:;
  /* 11b99719 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b9971b:;
  /* 11b9971b pop edi */
  EDI = (pop32());
  /* 11b9971c mov esp, ebp */
  ESP = (EBP);
  /* 11b9971e pop ebp */
  EBP = (pop32());
  /* 11b9971f ret  */
  ESPCHK(0x11b99390u, _esp0);
  ESP += 4; return;
}

/* FUN_10009720 @ 0x11b99720 (780 bytes, 197 insns) */
void f_11b99720(void) {
  FTRACE(0x11b99720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b99720 push ebp */
  push32((uint32_t)(EBP));
  /* 11b99721 mov ebp, esp */
  EBP = (ESP);
  /* 11b99723 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 11b99728 call 0x11ba01f0 */
  push32(0x11b9972du); f_11ba01f0();
L_11b9972d:;
  /* 11b9972d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b99731 jne 0x11b99758 */
  if (!C.zf) goto L_11b99758;
  /* 11b99733 push 0x11bc8684 */
  push32((uint32_t)(0x11bc8684u));
  /* 11b99738 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9973a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 11b9973f push 0x11bc8678 */
  push32((uint32_t)(0x11bc8678u));
  /* 11b99744 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b99746 call 0x11b99390 */
  push32(0x11b9974bu); f_11b99390();
  /* 11b9974b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9974e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b99751 jne 0x11b99758 */
  if (!C.zf) goto L_11b99758;
  /* 11b99753 call 0x11b99280 */
  push32(0x11b99758u); f_11b99280();
L_11b99758:;
  /* 11b99758 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9975a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9975c jne 0x11b9972d */
  if (!C.zf) goto L_11b9972d;
  /* 11b9975e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11b99763 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 11b99769 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9976a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9976c call dword ptr [0x11bd0418] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0418))), 0x11b99772u);
  /* 11b99772 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b99774 jne 0x11b9978a */
  if (!C.zf) goto L_11b9978a;
  /* 11b99776 push 0x11bc8660 */
  push32((uint32_t)(0x11bc8660u));
  /* 11b9977b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 11b99781 push edx */
  push32((uint32_t)(EDX));
  /* 11b99782 call 0x11ba0000 */
  push32(0x11b99787u); f_11ba0000();
  /* 11b99787 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b9978a:;
  /* 11b9978a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 11b99790 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b99793 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b99796 push ecx */
  push32((uint32_t)(ECX));
  /* 11b99797 call 0x11b9fe80 */
  push32(0x11b9979cu); f_11b9fe80();
  /* 11b9979c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9979f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b997a2 jbe 0x11b997cd */
  if ((C.cf||C.zf)) goto L_11b997cd;
  /* 11b997a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b997a7 push edx */
  push32((uint32_t)(EDX));
  /* 11b997a8 call 0x11b9fe80 */
  push32(0x11b997adu); f_11b9fe80();
  /* 11b997ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b997b0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b997b3 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 11b997b7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b997ba push 3 */
  push32((uint32_t)(0x3u));
  /* 11b997bc push 0x11bc865c */
  push32((uint32_t)(0x11bc865cu));
  /* 11b997c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b997c4 push eax */
  push32((uint32_t)(EAX));
  /* 11b997c5 call 0x11ba0870 */
  push32(0x11b997cau); f_11ba0870();
  /* 11b997ca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b997cd:;
  /* 11b997cd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b997d0 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 11b997d6 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b997dd je 0x11b99828 */
  if (C.zf) goto L_11b99828;
  /* 11b997df mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11b997e5 push edx */
  push32((uint32_t)(EDX));
  /* 11b997e6 call 0x11b9fe80 */
  push32(0x11b997ebu); f_11b9fe80();
  /* 11b997eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b997ee cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b997f1 jbe 0x11b99828 */
  if ((C.cf||C.zf)) goto L_11b99828;
  /* 11b997f3 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11b997f9 push eax */
  push32((uint32_t)(EAX));
  /* 11b997fa call 0x11b9fe80 */
  push32(0x11b997ffu); f_11b9fe80();
  /* 11b997ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b99802 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11b99808 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 11b9980c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 11b99812 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b99814 push 0x11bc865c */
  push32((uint32_t)(0x11bc865cu));
  /* 11b99819 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11b9981f push eax */
  push32((uint32_t)(EAX));
  /* 11b99820 call 0x11ba0870 */
  push32(0x11b99825u); f_11ba0870();
  /* 11b99825 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b99828:;
  /* 11b99828 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9982c jne 0x11b9983a */
  if (!C.zf) goto L_11b9983a;
  /* 11b9982e mov dword ptr [ebp - 0x1114], 0x11bc85e8 */
  w32((uint32_t)(EBP + -0x1114), (0x11bc85e8u));
  /* 11b99838 jmp 0x11b99844 */
  goto L_11b99844;
L_11b9983a:;
  /* 11b9983a mov dword ptr [ebp - 0x1114], 0x11bc831c */
  w32((uint32_t)(EBP + -0x1114), (0x11bc831cu));
L_11b99844:;
  /* 11b99844 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b99847 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11b9984a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9984c je 0x11b99859 */
  if (C.zf) goto L_11b99859;
  /* 11b9984e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b99851 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 11b99857 jmp 0x11b99863 */
  goto L_11b99863;
L_11b99859:;
  /* 11b99859 mov dword ptr [ebp - 0x1118], 0x11bc831c */
  w32((uint32_t)(EBP + -0x1118), (0x11bc831cu));
L_11b99863:;
  /* 11b99863 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b99866 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11b99869 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9986b je 0x11b9987f */
  if (C.zf) goto L_11b9987f;
  /* 11b9986d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b99871 jne 0x11b9987f */
  if (!C.zf) goto L_11b9987f;
  /* 11b99873 mov dword ptr [ebp - 0x111c], 0x11bc85d8 */
  w32((uint32_t)(EBP + -0x111c), (0x11bc85d8u));
  /* 11b9987d jmp 0x11b99889 */
  goto L_11b99889;
L_11b9987f:;
  /* 11b9987f mov dword ptr [ebp - 0x111c], 0x11bc831c */
  w32((uint32_t)(EBP + -0x111c), (0x11bc831cu));
L_11b99889:;
  /* 11b99889 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b9988c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b9988f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b99891 je 0x11b9989f */
  if (C.zf) goto L_11b9989f;
  /* 11b99893 mov dword ptr [ebp - 0x1120], 0x11bc85d4 */
  w32((uint32_t)(EBP + -0x1120), (0x11bc85d4u));
  /* 11b9989d jmp 0x11b998a9 */
  goto L_11b998a9;
L_11b9989f:;
  /* 11b9989f mov dword ptr [ebp - 0x1120], 0x11bc831c */
  w32((uint32_t)(EBP + -0x1120), (0x11bc831cu));
L_11b998a9:;
  /* 11b998a9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b998ad je 0x11b998ba */
  if (C.zf) goto L_11b998ba;
  /* 11b998af mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b998b2 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 11b998b8 jmp 0x11b998c4 */
  goto L_11b998c4;
L_11b998ba:;
  /* 11b998ba mov dword ptr [ebp - 0x1124], 0x11bc831c */
  w32((uint32_t)(EBP + -0x1124), (0x11bc831cu));
L_11b998c4:;
  /* 11b998c4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b998c8 je 0x11b998d6 */
  if (C.zf) goto L_11b998d6;
  /* 11b998ca mov dword ptr [ebp - 0x1128], 0x11bc85cc */
  w32((uint32_t)(EBP + -0x1128), (0x11bc85ccu));
  /* 11b998d4 jmp 0x11b998e0 */
  goto L_11b998e0;
L_11b998d6:;
  /* 11b998d6 mov dword ptr [ebp - 0x1128], 0x11bc831c */
  w32((uint32_t)(EBP + -0x1128), (0x11bc831cu));
L_11b998e0:;
  /* 11b998e0 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b998e4 je 0x11b998f1 */
  if (C.zf) goto L_11b998f1;
  /* 11b998e6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b998e9 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 11b998ef jmp 0x11b998fb */
  goto L_11b998fb;
L_11b998f1:;
  /* 11b998f1 mov dword ptr [ebp - 0x112c], 0x11bc831c */
  w32((uint32_t)(EBP + -0x112c), (0x11bc831cu));
L_11b998fb:;
  /* 11b998fb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b998ff je 0x11b9990d */
  if (C.zf) goto L_11b9990d;
  /* 11b99901 mov dword ptr [ebp - 0x1130], 0x11bc85c4 */
  w32((uint32_t)(EBP + -0x1130), (0x11bc85c4u));
  /* 11b9990b jmp 0x11b99917 */
  goto L_11b99917;
L_11b9990d:;
  /* 11b9990d mov dword ptr [ebp - 0x1130], 0x11bc831c */
  w32((uint32_t)(EBP + -0x1130), (0x11bc831cu));
L_11b99917:;
  /* 11b99917 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9991e je 0x11b9992e */
  if (C.zf) goto L_11b9992e;
  /* 11b99920 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11b99926 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 11b9992c jmp 0x11b99938 */
  goto L_11b99938;
L_11b9992e:;
  /* 11b9992e mov dword ptr [ebp - 0x1134], 0x11bc831c */
  w32((uint32_t)(EBP + -0x1134), (0x11bc831cu));
L_11b99938:;
  /* 11b99938 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9993f je 0x11b9994d */
  if (C.zf) goto L_11b9994d;
  /* 11b99941 mov dword ptr [ebp - 0x1138], 0x11bc85b8 */
  w32((uint32_t)(EBP + -0x1138), (0x11bc85b8u));
  /* 11b9994b jmp 0x11b99957 */
  goto L_11b99957;
L_11b9994d:;
  /* 11b9994d mov dword ptr [ebp - 0x1138], 0x11bc831c */
  w32((uint32_t)(EBP + -0x1138), (0x11bc831cu));
L_11b99957:;
  /* 11b99957 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 11b9995d push edx */
  push32((uint32_t)(EDX));
  /* 11b9995e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 11b99964 push eax */
  push32((uint32_t)(EAX));
  /* 11b99965 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 11b9996b push ecx */
  push32((uint32_t)(ECX));
  /* 11b9996c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 11b99972 push edx */
  push32((uint32_t)(EDX));
  /* 11b99973 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 11b99979 push eax */
  push32((uint32_t)(EAX));
  /* 11b9997a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 11b99980 push ecx */
  push32((uint32_t)(ECX));
  /* 11b99981 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 11b99987 push edx */
  push32((uint32_t)(EDX));
  /* 11b99988 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 11b9998e push eax */
  push32((uint32_t)(EAX));
  /* 11b9998f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 11b99995 push ecx */
  push32((uint32_t)(ECX));
  /* 11b99996 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 11b9999c push edx */
  push32((uint32_t)(EDX));
  /* 11b9999d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b999a0 push eax */
  push32((uint32_t)(EAX));
  /* 11b999a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b999a4 mov edx, dword ptr [ecx*4 + 0x11bcbdec] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11bcbdec)));
  /* 11b999ab push edx */
  push32((uint32_t)(EDX));
  /* 11b999ac push 0x11bc8564 */
  push32((uint32_t)(0x11bc8564u));
  /* 11b999b1 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11b999b6 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 11b999bc push eax */
  push32((uint32_t)(EAX));
  /* 11b999bd call 0x11b9ff00 */
  push32(0x11b999c2u); f_11b9ff00();
  /* 11b999c2 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b999c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b999c7 jge 0x11b999dd */
  if ((C.sf==C.of)) goto L_11b999dd;
  /* 11b999c9 push 0x11bc84c8 */
  push32((uint32_t)(0x11bc84c8u));
  /* 11b999ce lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 11b999d4 push ecx */
  push32((uint32_t)(ECX));
  /* 11b999d5 call 0x11ba0000 */
  push32(0x11b999dau); f_11ba0000();
  /* 11b999da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b999dd:;
  /* 11b999dd push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 11b999e2 push 0x11bc8540 */
  push32((uint32_t)(0x11bc8540u));
  /* 11b999e7 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 11b999ed push edx */
  push32((uint32_t)(EDX));
  /* 11b999ee call 0x11ba07b0 */
  push32(0x11b999f3u); f_11ba07b0();
  /* 11b999f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b999f6 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 11b999fc cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b99a03 jne 0x11b99a16 */
  if (!C.zf) goto L_11b99a16;
  /* 11b99a05 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11b99a07 call 0x11ba04f0 */
  push32(0x11b99a0cu); f_11ba04f0();
  /* 11b99a0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b99a0f push 3 */
  push32((uint32_t)(0x3u));
  /* 11b99a11 call 0x11b9d840 */
  push32(0x11b99a16u); f_11b9d840();
L_11b99a16:;
  /* 11b99a16 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b99a1d jne 0x11b99a26 */
  if (!C.zf) goto L_11b99a26;
  /* 11b99a1f mov eax, 1 */
  EAX = (0x1u);
  /* 11b99a24 jmp 0x11b99a28 */
  goto L_11b99a28;
L_11b99a26:;
  /* 11b99a26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b99a28:;
  /* 11b99a28 mov esp, ebp */
  ESP = (EBP);
  /* 11b99a2a pop ebp */
  EBP = (pop32());
  /* 11b99a2b ret  */
  ESPCHK(0x11b99720u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c2c @ 0x11b99c2c (25 bytes, 7 insns) */
void f_11b99c2c(void) {
  FTRACE(0x11b99c2cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b99c2c test eax, 0x80000 */
  { uint32_t _r=(EAX)&(0x80000u); fl_logic(_r,32); }
  /* 11b99c31 je 0x11b99c39 */
  if (C.zf) goto L_11b99c39;
  /* 11b99c33 mov eax, 7 */
  EAX = (0x7u);
  /* 11b99c38 ret  */
  ESPCHK(0x11b99c2cu, _esp0);
  ESP += 4; return;
L_11b99c39:;
  /* 11b99c39 fadd qword ptr [0x11bc86a0] */
  FPU_ST(0) = FPU_ST(0) + (rf64((uint32_t)(0x11bc86a0)));
  /* 11b99c3f mov eax, 1 */
  EAX = (0x1u);
  /* 11b99c44 ret  */
  ESPCHK(0x11b99c2cu, _esp0);
  ESP += 4; return;
}

/* __fload_withFB @ 0x11b99c45 (67 bytes, 21 insns) */
void f_11b99c45(void) {
  FTRACE(0x11b99c45u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b99c45 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b99c48 and eax, 0x7ff00000 */
  { uint32_t _r=(EAX)&(0x7ff00000u); EAX = (_r); fl_logic(_r,32); }
  /* 11b99c4d cmp eax, 0x7ff00000 */
  { uint32_t _a=(EAX),_b=(0x7ff00000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b99c52 je 0x11b99c57 */
  if (C.zf) goto L_11b99c57;
  /* 11b99c54 fld qword ptr [edx] */
  fpu_push(rf64((uint32_t)(EDX)));
  /* 11b99c56 ret  */
  ESPCHK(0x11b99c45u, _esp0);
  ESP += 4; return;
L_11b99c57:;
  /* 11b99c57 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b99c5a sub esp, 0xa */
  { uint32_t _a=(ESP),_b=(0xau),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b99c5d or eax, 0x7fff0000 */
  { uint32_t _r=(EAX)|(0x7fff0000u); EAX = (_r); fl_logic(_r,32); }
  /* 11b99c62 mov dword ptr [esp + 6], eax */
  w32((uint32_t)(ESP + 0x6), (EAX));
  /* 11b99c66 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b99c69 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11b99c6b shld eax, ecx, 0xb */
  EAX = (sh_shld((uint32_t)(EAX),(uint32_t)(ECX),(0xbu)&0x1f,32));
  /* 11b99c6f shl ecx, 0xb */
  ECX = (sh_shl((uint32_t)(ECX), (0xbu)&0x1f, 32));
  /* 11b99c72 mov dword ptr [esp + 4], eax */
  w32((uint32_t)(ESP + 0x4), (EAX));
  /* 11b99c76 mov dword ptr [esp], ecx */
  w32((uint32_t)(ESP), (ECX));
  /* 11b99c79 fld xword ptr [esp] */
  fpu_push(rf80((uint32_t)(ESP)));
  /* 11b99c7c add esp, 0xa */
  { uint32_t _a=(ESP),_b=(0xau),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b99c7f test eax, 0 */
  { uint32_t _r=(EAX)&(0x0u); fl_logic(_r,32); }
  /* 11b99c84 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b99c87 ret  */
  ESPCHK(0x11b99c45u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c88 @ 0x11b99c88 (22 bytes, 7 insns) */
void f_11b99c88(void) {
  FTRACE(0x11b99c88u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b99c88 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b99c8c and eax, 0x7ff00000 */
  { uint32_t _r=(EAX)&(0x7ff00000u); EAX = (_r); fl_logic(_r,32); }
  /* 11b99c91 cmp eax, 0x7ff00000 */
  { uint32_t _a=(EAX),_b=(0x7ff00000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b99c96 je 0x11b99c99 */
  if (C.zf) goto L_11b99c99;
  /* 11b99c98 ret  */
  ESPCHK(0x11b99c88u, _esp0);
  ESP += 4; return;
L_11b99c99:;
  /* 11b99c99 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b99c9d ret  */
  ESPCHK(0x11b99c88u, _esp0);
  ESP += 4; return;
}

/* __math_exit @ 0x11b99cab (42 bytes, 16 insns) */
void f_11b99cab(void) {
  FTRACE(0x11b99cabu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b99cab mov ax, word ptr [esp] */
  AX = (r16((uint32_t)(ESP)));
  /* 11b99caf cmp ax, 0x27f */
  { uint32_t _a=(AX),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11b99cb3 je 0x11b99cd3 */
  if (C.zf) goto L_11b99cd3;
  /* 11b99cb5 and ax, 0x20 */
  { uint32_t _r=(AX)&(0x20u); AX = (_r); fl_logic(_r,16); }
  /* 11b99cb9 je 0x11b99cd0 */
  if (C.zf) goto L_11b99cd0;
  /* 11b99cbb wait  */
  /* wait (no observable integer/reg state) */
  /* 11b99cbc fnstsw ax */
  AX = fpu_status();
  /* 11b99cbe and ax, 0x20 */
  { uint32_t _r=(AX)&(0x20u); AX = (_r); fl_logic(_r,16); }
  /* 11b99cc2 je 0x11b99cd0 */
  if (C.zf) goto L_11b99cd0;
  /* 11b99cc4 mov eax, 8 */
  EAX = (0x8u);
  /* 11b99cc9 call 0x11b99da7 */
  push32(0x11b99cceu); f_11b99da7();
  /* 11b99cce pop edx */
  EDX = (pop32());
  /* 11b99ccf ret  */
  ESPCHK(0x11b99cabu, _esp0);
  ESP += 4; return;
L_11b99cd0:;
  /* 11b99cd0 fldcw word ptr [esp] */
  C.fcw = r16((uint32_t)(ESP));
L_11b99cd3:;
  /* 11b99cd3 pop edx */
  EDX = (pop32());
  /* 11b99cd4 ret  */
  ESPCHK(0x11b99cabu, _esp0);
  ESP += 4; return;
}

