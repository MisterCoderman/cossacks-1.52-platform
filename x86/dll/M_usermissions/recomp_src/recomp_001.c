#include "recomp.h"

/* __local_unwind2 @ 0x12c854e2 (104 bytes, 33 insns) */
void f_12c854e2(void) {
  FTRACE(0x12c854e2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c854e2 push ebx */
  push32((uint32_t)(EBX));
  /* 12c854e3 push esi */
  push32((uint32_t)(ESI));
  /* 12c854e4 push edi */
  push32((uint32_t)(EDI));
  /* 12c854e5 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12c854e9 push eax */
  push32((uint32_t)(EAX));
  /* 12c854ea push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 12c854ec push 0x12c854c0 */
  push32((uint32_t)(0x12c854c0u));
  /* 12c854f1 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 12c854f8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_12c854ff:;
  /* 12c854ff mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 12c85503 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 12c85506 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 12c85509 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8550c je 0x12c8553c */
  if (C.zf) goto L_12c8553c;
  /* 12c8550e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c85512 je 0x12c8553c */
  if (C.zf) goto L_12c8553c;
  /* 12c85514 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 12c85517 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 12c8551a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 12c8551e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 12c85521 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c85526 jne 0x12c8553a */
  if (!C.zf) goto L_12c8553a;
  /* 12c85528 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 12c8552d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 12c85531 call 0x12c85576 */
  push32(0x12c85536u); f_12c85576();
  /* 12c85536 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x12c8553au);
L_12c8553a:;
  /* 12c8553a jmp 0x12c854ff */
  goto L_12c854ff;
L_12c8553c:;
  /* 12c8553c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 12c85543 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c85546 pop edi */
  EDI = (pop32());
  /* 12c85547 pop esi */
  ESI = (pop32());
  /* 12c85548 pop ebx */
  EBX = (pop32());
  /* 12c85549 ret  */
  ESPCHK(0x12c854e2u, _esp0);
  ESP += 4; return;
}

/* __abnormal_termination @ 0x12c8554a (35 bytes, 10 insns) */
void f_12c8554a(void) {
  FTRACE(0x12c8554au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8554a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c8554c mov ecx, dword ptr fs:[0] */
  ECX = (r32((uint32_t)(0x0)));
  /* 12c85553 cmp dword ptr [ecx + 4], 0x12c854c0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x12c854c0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8555a jne 0x12c8556c */
  if (!C.zf) goto L_12c8556c;
  /* 12c8555c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12c8555f mov edx, dword ptr [edx + 0xc] */
  EDX = (r32((uint32_t)(EDX + 0xc)));
  /* 12c85562 cmp dword ptr [ecx + 8], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c85565 jne 0x12c8556c */
  if (!C.zf) goto L_12c8556c;
  /* 12c85567 mov eax, 1 */
  EAX = (0x1u);
L_12c8556c:;
  /* 12c8556c ret  */
  ESPCHK(0x12c8554au, _esp0);
  ESP += 4; return;
}

/* __NLG_Notify1 @ 0x12c8556d (9 bytes, 4 insns) */
void f_12c8556d(void) {
  FTRACE(0x12c8556du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8556d push ebx */
  push32((uint32_t)(EBX));
  /* 12c8556e push ecx */
  push32((uint32_t)(ECX));
  /* 12c8556f mov ebx, 0x12c905f0 */
  EBX = (0x12c905f0u);
  /* 12c85574 jmp 0x12c85580 */
  jmp_ind(0x12c85580u); return;
}

/* FUN_10005576 @ 0x12c85576 (24 bytes, 10 insns) */
void f_12c85576(void) {
  FTRACE(0x12c85576u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c85576 push ebx */
  push32((uint32_t)(EBX));
  /* 12c85577 push ecx */
  push32((uint32_t)(ECX));
  /* 12c85578 mov ebx, 0x12c905f0 */
  EBX = (0x12c905f0u);
  /* 12c8557d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c85580 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 12c85583 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 12c85586 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 12c85589 pop ecx */
  ECX = (pop32());
  /* 12c8558a pop ebx */
  EBX = (pop32());
  /* 12c8558b ret 4 */
  ESPCHK(0x12c85576u, _esp0);
  ESP += 8; return;
}

/* __CxxThrowException@8 @ 0x12c8558e (58 bytes, 24 insns) */
void f_12c8558e(void) {
  FTRACE(0x12c8558eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8558e push ebp */
  push32((uint32_t)(EBP));
  /* 12c8558f mov ebp, esp */
  EBP = (ESP);
  /* 12c85591 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c85594 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c85597 push esi */
  push32((uint32_t)(ESI));
  /* 12c85598 push edi */
  push32((uint32_t)(EDI));
  /* 12c85599 push 8 */
  push32((uint32_t)(0x8u));
  /* 12c8559b pop ecx */
  ECX = (pop32());
  /* 12c8559c mov esi, 0x12c8e1f0 */
  ESI = (0x12c8e1f0u);
  /* 12c855a1 lea edi, [ebp - 0x20] */
  EDI = ((uint32_t)(EBP + -0x20));
  /* 12c855a4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c855a6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c855a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c855ac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c855af lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12c855b2 push eax */
  push32((uint32_t)(EAX));
  /* 12c855b3 push dword ptr [ebp - 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x10))));
  /* 12c855b6 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 12c855b9 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 12c855bc call dword ptr [0x12c8e040] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e040))), 0x12c855c2u);
  /* 12c855c2 pop edi */
  EDI = (pop32());
  /* 12c855c3 pop esi */
  ESI = (pop32());
  /* 12c855c4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c855c5 ret 8 */
  ESPCHK(0x12c8558eu, _esp0);
  ESP += 12; return;
}

/* FUN_100055c8 @ 0x12c855c8 (82 bytes, 32 insns) */
void f_12c855c8(void) {
  FTRACE(0x12c855c8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c855c8 push ebp */
  push32((uint32_t)(EBP));
  /* 12c855c9 mov ebp, esp */
  EBP = (ESP);
  /* 12c855cb sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c855ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c855d1 push esi */
  push32((uint32_t)(ESI));
  /* 12c855d2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12c855d5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12c855d8 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12c855db mov dword ptr [ebp - 0x14], 0x42 */
  w32((uint32_t)(EBP + -0x14), (0x42u));
  /* 12c855e2 push eax */
  push32((uint32_t)(EAX));
  /* 12c855e3 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12c855e6 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 12c855e9 mov dword ptr [ebp - 0x1c], 0x7fffffff */
  w32((uint32_t)(EBP + -0x1c), (0x7fffffffu));
  /* 12c855f0 push eax */
  push32((uint32_t)(EAX));
  /* 12c855f1 call 0x12c88544 */
  push32(0x12c855f6u); f_12c88544();
  /* 12c855f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c855f9 dec dword ptr [ebp - 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1c)))-1; w32((uint32_t)(EBP + -0x1c), (_r)); fl_dec(_r,32); }
  /* 12c855fc mov esi, eax */
  ESI = (EAX);
  /* 12c855fe js 0x12c85608 */
  if (C.sf) goto L_12c85608;
  /* 12c85600 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c85603 and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 12c85606 jmp 0x12c85615 */
  goto L_12c85615;
L_12c85608:;
  /* 12c85608 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12c8560b push eax */
  push32((uint32_t)(EAX));
  /* 12c8560c push 0 */
  push32((uint32_t)(0x0u));
  /* 12c8560e call 0x12c8842c */
  push32(0x12c85613u); f_12c8842c();
  /* 12c85613 pop ecx */
  ECX = (pop32());
  /* 12c85614 pop ecx */
  ECX = (pop32());
L_12c85615:;
  /* 12c85615 mov eax, esi */
  EAX = (ESI);
  /* 12c85617 pop esi */
  ESI = (pop32());
  /* 12c85618 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c85619 ret  */
  ESPCHK(0x12c855c8u, _esp0);
  ESP += 4; return;
}

/* operator_new @ 0x12c8561a (14 bytes, 6 insns) */
void f_12c8561a(void) {
  FTRACE(0x12c8561au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8561a push 1 */
  push32((uint32_t)(0x1u));
  /* 12c8561c push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 12c85620 call 0x12c86932 */
  push32(0x12c85625u); f_12c86932();
  /* 12c85625 pop ecx */
  ECX = (pop32());
  /* 12c85626 pop ecx */
  ECX = (pop32());
  /* 12c85627 ret  */
  ESPCHK(0x12c8561au, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x12c85630 (254 bytes, 109 insns) */
void f_12c85630(void) {
  FTRACE(0x12c85630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c85630 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12c85634 push edi */
  push32((uint32_t)(EDI));
  /* 12c85635 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c85637 je 0x12c856b3 */
  if (C.zf) goto L_12c856b3;
  /* 12c85639 push esi */
  push32((uint32_t)(ESI));
  /* 12c8563a push ebx */
  push32((uint32_t)(EBX));
  /* 12c8563b mov ebx, ecx */
  EBX = (ECX);
  /* 12c8563d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 12c85641 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12c85647 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 12c8564b jne 0x12c85654 */
  if (!C.zf) goto L_12c85654;
  /* 12c8564d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c85650 jne 0x12c856c1 */
  if (!C.zf) goto L_12c856c1;
  /* 12c85652 jmp 0x12c85675 */
  goto L_12c85675;
L_12c85654:;
  /* 12c85654 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c85656 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c85657 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12c85659 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12c8565a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12c8565b je 0x12c85682 */
  if (C.zf) goto L_12c85682;
  /* 12c8565d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12c8565f je 0x12c8568a */
  if (C.zf) goto L_12c8568a;
  /* 12c85661 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12c85667 jne 0x12c85654 */
  if (!C.zf) goto L_12c85654;
  /* 12c85669 mov ebx, ecx */
  EBX = (ECX);
  /* 12c8566b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c8566e jne 0x12c856c1 */
  if (!C.zf) goto L_12c856c1;
L_12c85670:;
  /* 12c85670 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 12c85673 je 0x12c85682 */
  if (C.zf) goto L_12c85682;
L_12c85675:;
  /* 12c85675 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c85677 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c85678 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12c8567a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12c8567b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12c8567d je 0x12c856ae */
  if (C.zf) goto L_12c856ae;
  /* 12c8567f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 12c85680 jne 0x12c85675 */
  if (!C.zf) goto L_12c85675;
L_12c85682:;
  /* 12c85682 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12c85686 pop ebx */
  EBX = (pop32());
  /* 12c85687 pop esi */
  ESI = (pop32());
  /* 12c85688 pop edi */
  EDI = (pop32());
  /* 12c85689 ret  */
  ESPCHK(0x12c85630u, _esp0);
  ESP += 4; return;
L_12c8568a:;
  /* 12c8568a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12c85690 je 0x12c856a4 */
  if (C.zf) goto L_12c856a4;
L_12c85692:;
  /* 12c85692 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12c85694 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12c85695 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12c85696 je 0x12c85726 */
  if (C.zf) goto L_12c85726;
  /* 12c8569c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12c856a2 jne 0x12c85692 */
  if (!C.zf) goto L_12c85692;
L_12c856a4:;
  /* 12c856a4 mov ebx, ecx */
  EBX = (ECX);
  /* 12c856a6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c856a9 jne 0x12c85717 */
  if (!C.zf) goto L_12c85717;
L_12c856ab:;
  /* 12c856ab mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12c856ad inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_12c856ae:;
  /* 12c856ae dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 12c856af jne 0x12c856ab */
  if (!C.zf) goto L_12c856ab;
  /* 12c856b1 pop ebx */
  EBX = (pop32());
  /* 12c856b2 pop esi */
  ESI = (pop32());
L_12c856b3:;
  /* 12c856b3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c856b7 pop edi */
  EDI = (pop32());
  /* 12c856b8 ret  */
  ESPCHK(0x12c85630u, _esp0);
  ESP += 4; return;
L_12c856b9:;
  /* 12c856b9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12c856bb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c856be dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12c856bf je 0x12c85670 */
  if (C.zf) goto L_12c85670;
L_12c856c1:;
  /* 12c856c1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12c856c6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 12c856c8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c856ca xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c856cd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12c856cf mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 12c856d1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c856d4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12c856d9 je 0x12c856b9 */
  if (C.zf) goto L_12c856b9;
  /* 12c856db test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12c856dd je 0x12c8570b */
  if (C.zf) goto L_12c8570b;
  /* 12c856df test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12c856e1 je 0x12c85701 */
  if (C.zf) goto L_12c85701;
  /* 12c856e3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 12c856e9 je 0x12c856f7 */
  if (C.zf) goto L_12c856f7;
  /* 12c856eb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12c856f1 jne 0x12c856b9 */
  if (!C.zf) goto L_12c856b9;
  /* 12c856f3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12c856f5 jmp 0x12c8570f */
  goto L_12c8570f;
L_12c856f7:;
  /* 12c856f7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c856fd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12c856ff jmp 0x12c8570f */
  goto L_12c8570f;
L_12c85701:;
  /* 12c85701 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c85707 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12c85709 jmp 0x12c8570f */
  goto L_12c8570f;
L_12c8570b:;
  /* 12c8570b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c8570d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_12c8570f:;
  /* 12c8570f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c85712 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c85714 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12c85715 je 0x12c85721 */
  if (C.zf) goto L_12c85721;
L_12c85717:;
  /* 12c85717 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c85719:;
  /* 12c85719 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 12c8571b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8571e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12c8571f jne 0x12c85719 */
  if (!C.zf) goto L_12c85719;
L_12c85721:;
  /* 12c85721 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 12c85724 jne 0x12c856ab */
  if (!C.zf) goto L_12c856ab;
L_12c85726:;
  /* 12c85726 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12c8572a pop ebx */
  EBX = (pop32());
  /* 12c8572b pop esi */
  ESI = (pop32());
  /* 12c8572c pop edi */
  EDI = (pop32());
  /* 12c8572d ret  */
  ESPCHK(0x12c85630u, _esp0);
  ESP += 4; return;
}

/* FUN_1000572e @ 0x12c8572e (52 bytes, 19 insns) */
void f_12c8572e(void) {
  FTRACE(0x12c8572eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8572e push ebp */
  push32((uint32_t)(EBP));
  /* 12c8572f mov ebp, esp */
  EBP = (ESP);
  /* 12c85731 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c85734 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c85737 mov dword ptr [ebp - 0x14], 0x49 */
  w32((uint32_t)(EBP + -0x14), (0x49u));
  /* 12c8573e push eax */
  push32((uint32_t)(EAX));
  /* 12c8573f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12c85742 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12c85745 call 0x12c86010 */
  push32(0x12c8574au); f_12c86010();
  /* 12c8574a mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12c8574d lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12c85750 push eax */
  push32((uint32_t)(EAX));
  /* 12c85751 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12c85754 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 12c85757 push eax */
  push32((uint32_t)(EAX));
  /* 12c85758 call 0x12c88d4e */
  push32(0x12c8575du); f_12c88d4e();
  /* 12c8575d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c85760 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c85761 ret  */
  ESPCHK(0x12c8572eu, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x12c85770 (56 bytes, 31 insns) */
void f_12c85770(void) {
  FTRACE(0x12c85770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c85770 push ebp */
  push32((uint32_t)(EBP));
  /* 12c85771 mov ebp, esp */
  EBP = (ESP);
  /* 12c85773 push edi */
  push32((uint32_t)(EDI));
  /* 12c85774 push esi */
  push32((uint32_t)(ESI));
  /* 12c85775 push ebx */
  push32((uint32_t)(EBX));
  /* 12c85776 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c85779 jecxz 0x12c857a1 */
  x86_unimpl("jecxz @ 0x12c85779");
  /* 12c8577b mov ebx, ecx */
  EBX = (ECX);
  /* 12c8577d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12c85780 mov esi, edi */
  ESI = (EDI);
  /* 12c85782 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c85784 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 12c85786 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c85788 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8578a mov edi, esi */
  EDI = (ESI);
  /* 12c8578c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12c8578f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 12c85791 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 12c85794 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c85796 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c85799 ja 0x12c8579f */
  if ((!C.cf&&!C.zf)) goto L_12c8579f;
  /* 12c8579b je 0x12c857a1 */
  if (C.zf) goto L_12c857a1;
  /* 12c8579d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12c8579e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_12c8579f:;
  /* 12c8579f not ecx */
  ECX = (~(ECX));
L_12c857a1:;
  /* 12c857a1 mov eax, ecx */
  EAX = (ECX);
  /* 12c857a3 pop ebx */
  EBX = (pop32());
  /* 12c857a4 pop esi */
  ESI = (pop32());
  /* 12c857a5 pop edi */
  EDI = (pop32());
  /* 12c857a6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c857a7 ret  */
  ESPCHK(0x12c85770u, _esp0);
  ESP += 4; return;
}

/* FUN_100057b0 @ 0x12c857b0 (62 bytes, 35 insns) */
void f_12c857b0(void) {
  FTRACE(0x12c857b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c857b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c857b1 mov ebp, esp */
  EBP = (ESP);
  /* 12c857b3 push esi */
  push32((uint32_t)(ESI));
  /* 12c857b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c857b6 push eax */
  push32((uint32_t)(EAX));
  /* 12c857b7 push eax */
  push32((uint32_t)(EAX));
  /* 12c857b8 push eax */
  push32((uint32_t)(EAX));
  /* 12c857b9 push eax */
  push32((uint32_t)(EAX));
  /* 12c857ba push eax */
  push32((uint32_t)(EAX));
  /* 12c857bb push eax */
  push32((uint32_t)(EAX));
  /* 12c857bc push eax */
  push32((uint32_t)(EAX));
  /* 12c857bd push eax */
  push32((uint32_t)(EAX));
  /* 12c857be mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c857c1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12c857c4:;
  /* 12c857c4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c857c6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12c857c8 je 0x12c857d1 */
  if (C.zf) goto L_12c857d1;
  /* 12c857ca inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12c857cb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x12c857cb");
  /* 12c857cf jmp 0x12c857c4 */
  goto L_12c857c4;
L_12c857d1:;
  /* 12c857d1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12c857d4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c857d7 nop  */
  /* nop */
L_12c857d8:;
  /* 12c857d8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12c857d9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c857db or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12c857dd je 0x12c857e6 */
  if (C.zf) goto L_12c857e6;
  /* 12c857df inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c857e0 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x12c857e0");
  /* 12c857e4 jb 0x12c857d8 */
  if (C.cf) goto L_12c857d8;
L_12c857e6:;
  /* 12c857e6 mov eax, ecx */
  EAX = (ECX);
  /* 12c857e8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c857eb pop esi */
  ESI = (pop32());
  /* 12c857ec leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c857ed ret  */
  ESPCHK(0x12c857b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100057ee @ 0x12c857ee (46 bytes, 13 insns) */
void f_12c857ee(void) {
  FTRACE(0x12c857eeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c857ee cmp dword ptr [0x12c90d24], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c90d24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c857f5 jle 0x12c85808 */
  if ((C.zf||C.sf!=C.of)) goto L_12c85808;
  /* 12c857f7 push 0x103 */
  push32((uint32_t)(0x103u));
  /* 12c857fc push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 12c85800 call 0x12c897ff */
  push32(0x12c85805u); f_12c897ff();
  /* 12c85805 pop ecx */
  ECX = (pop32());
  /* 12c85806 pop ecx */
  ECX = (pop32());
  /* 12c85807 ret  */
  ESPCHK(0x12c857eeu, _esp0);
  ESP += 4; return;
L_12c85808:;
  /* 12c85808 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c8580c mov ecx, dword ptr [0x12c90b18] */
  ECX = (r32((uint32_t)(0x12c90b18)));
  /* 12c85812 mov ax, word ptr [ecx + eax*2] */
  AX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12c85816 and eax, 0x103 */
  { uint32_t _r=(EAX)&(0x103u); EAX = (_r); fl_logic(_r,32); }
  /* 12c8581b ret  */
  ESPCHK(0x12c857eeu, _esp0);
  ESP += 4; return;
}

/* FUN_1000581c @ 0x12c8581c (40 bytes, 13 insns) */
void f_12c8581c(void) {
  FTRACE(0x12c8581cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8581c cmp dword ptr [0x12c90d24], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c90d24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c85823 jle 0x12c85833 */
  if ((C.zf||C.sf!=C.of)) goto L_12c85833;
  /* 12c85825 push 4 */
  push32((uint32_t)(0x4u));
  /* 12c85827 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 12c8582b call 0x12c897ff */
  push32(0x12c85830u); f_12c897ff();
  /* 12c85830 pop ecx */
  ECX = (pop32());
  /* 12c85831 pop ecx */
  ECX = (pop32());
  /* 12c85832 ret  */
  ESPCHK(0x12c8581cu, _esp0);
  ESP += 4; return;
L_12c85833:;
  /* 12c85833 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c85837 mov ecx, dword ptr [0x12c90b18] */
  ECX = (r32((uint32_t)(0x12c90b18)));
  /* 12c8583d mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 12c85840 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12c85843 ret  */
  ESPCHK(0x12c8581cu, _esp0);
  ESP += 4; return;
}

/* FUN_10005844 @ 0x12c85844 (40 bytes, 13 insns) */
void f_12c85844(void) {
  FTRACE(0x12c85844u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c85844 cmp dword ptr [0x12c90d24], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c90d24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8584b jle 0x12c8585b */
  if ((C.zf||C.sf!=C.of)) goto L_12c8585b;
  /* 12c8584d push 8 */
  push32((uint32_t)(0x8u));
  /* 12c8584f push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 12c85853 call 0x12c897ff */
  push32(0x12c85858u); f_12c897ff();
  /* 12c85858 pop ecx */
  ECX = (pop32());
  /* 12c85859 pop ecx */
  ECX = (pop32());
  /* 12c8585a ret  */
  ESPCHK(0x12c85844u, _esp0);
  ESP += 4; return;
L_12c8585b:;
  /* 12c8585b mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c8585f mov ecx, dword ptr [0x12c90b18] */
  ECX = (r32((uint32_t)(0x12c90b18)));
  /* 12c85865 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 12c85868 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 12c8586b ret  */
  ESPCHK(0x12c85844u, _esp0);
  ESP += 4; return;
}

/* FUN_10005870 @ 0x12c85870 (664 bytes, 258 insns) [15 switch table(s)] */
void f_12c85870(void) {
  FTRACE(0x12c85870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c85870 push ebp */
  push32((uint32_t)(EBP));
  /* 12c85871 mov ebp, esp */
  EBP = (ESP);
  /* 12c85873 push edi */
  push32((uint32_t)(EDI));
  /* 12c85874 push esi */
  push32((uint32_t)(ESI));
  /* 12c85875 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12c85878 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c8587b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8587e mov eax, ecx */
  EAX = (ECX);
  /* 12c85880 mov edx, ecx */
  EDX = (ECX);
  /* 12c85882 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c85884 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c85886 jbe 0x12c85890 */
  if ((C.cf||C.zf)) goto L_12c85890;
  /* 12c85888 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8588a jb 0x12c85a08 */
  if (C.cf) goto L_12c85a08;
L_12c85890:;
  /* 12c85890 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12c85896 jne 0x12c858ac */
  if (!C.zf) goto L_12c858ac;
  /* 12c85898 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c8589b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12c8589e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c858a1 jb 0x12c858cc */
  if (C.cf) goto L_12c858cc;
  /* 12c858a3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c858a5 jmp dword ptr [edx*4 + 0x12c859b8] */
  switch (EDX) {
    case 0: goto L_12c859c8;
    case 1: goto L_12c859d0;
    case 2: goto L_12c859dc;
    case 3: goto L_12c859f0;
    default: x86_unimpl("switch@0x12c858a5 out of table"); return;
  }
L_12c858ac:;
  /* 12c858ac mov eax, edi */
  EAX = (EDI);
  /* 12c858ae mov edx, 3 */
  EDX = (0x3u);
  /* 12c858b3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c858b6 jb 0x12c858c4 */
  if (C.cf) goto L_12c858c4;
  /* 12c858b8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12c858bb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c858bd jmp dword ptr [eax*4 + 0x12c858d0] */
  switch (EAX) {
    case 1: goto L_12c858e0;
    case 2: goto L_12c8590c;
    case 3: goto L_12c85930;
    default: x86_unimpl("switch@0x12c858bd out of table"); return;
  }
L_12c858c4:;
  /* 12c858c4 jmp dword ptr [ecx*4 + 0x12c859c8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x12c859c8)))); return;
  /* 12c858cb nop  */
  /* nop */
L_12c858cc:;
  /* 12c858cc jmp dword ptr [ecx*4 + 0x12c8594c] */
  switch (ECX) {
    case 0: goto L_12c859af;
    case 1: goto L_12c8599c;
    case 2: goto L_12c85994;
    case 3: goto L_12c8598c;
    case 4: goto L_12c85984;
    case 5: goto L_12c8597c;
    case 6: goto L_12c85974;
    case 7: goto L_12c8596c;
    default: x86_unimpl("switch@0x12c858cc out of table"); return;
  }
  /* 12c858d3 nop  */
  /* nop */
L_12c858e0:;
  /* 12c858e0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12c858e2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c858e4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12c858e6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12c858e9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12c858ec mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12c858ef shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c858f2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12c858f5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c858f8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c858fb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c858fe jb 0x12c858cc */
  if (C.cf) goto L_12c858cc;
  /* 12c85900 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c85902 jmp dword ptr [edx*4 + 0x12c859b8] */
  switch (EDX) {
    case 0: goto L_12c859c8;
    case 1: goto L_12c859d0;
    case 2: goto L_12c859dc;
    case 3: goto L_12c859f0;
    default: x86_unimpl("switch@0x12c85902 out of table"); return;
  }
  /* 12c85909 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12c8590c:;
  /* 12c8590c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12c8590e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c85910 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12c85912 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12c85915 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c85918 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12c8591b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8591e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c85921 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c85924 jb 0x12c858cc */
  if (C.cf) goto L_12c858cc;
  /* 12c85926 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c85928 jmp dword ptr [edx*4 + 0x12c859b8] */
  switch (EDX) {
    case 0: goto L_12c859c8;
    case 1: goto L_12c859d0;
    case 2: goto L_12c859dc;
    case 3: goto L_12c859f0;
    default: x86_unimpl("switch@0x12c85928 out of table"); return;
  }
  /* 12c8592f nop  */
  /* nop */
L_12c85930:;
  /* 12c85930 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12c85932 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c85934 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12c85936 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c85937 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c8593a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12c8593b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8593e jb 0x12c858cc */
  if (C.cf) goto L_12c858cc;
  /* 12c85940 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c85942 jmp dword ptr [edx*4 + 0x12c859b8] */
  switch (EDX) {
    case 0: goto L_12c859c8;
    case 1: goto L_12c859d0;
    case 2: goto L_12c859dc;
    case 3: goto L_12c859f0;
    default: x86_unimpl("switch@0x12c85942 out of table"); return;
  }
  /* 12c85949 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12c8596c:;
  /* 12c8596c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 12c85970 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_12c85974:;
  /* 12c85974 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 12c85978 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_12c8597c:;
  /* 12c8597c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 12c85980 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_12c85984:;
  /* 12c85984 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 12c85988 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_12c8598c:;
  /* 12c8598c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 12c85990 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_12c85994:;
  /* 12c85994 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 12c85998 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_12c8599c:;
  /* 12c8599c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 12c859a0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 12c859a4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12c859ab add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c859ad add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12c859af:;
  /* 12c859af jmp dword ptr [edx*4 + 0x12c859b8] */
  switch (EDX) {
    case 0: goto L_12c859c8;
    case 1: goto L_12c859d0;
    case 2: goto L_12c859dc;
    case 3: goto L_12c859f0;
    default: x86_unimpl("switch@0x12c859af out of table"); return;
  }
  /* 12c859b6 mov edi, edi */
  EDI = (EDI);
L_12c859c8:;
  /* 12c859c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c859cb pop esi */
  ESI = (pop32());
  /* 12c859cc pop edi */
  EDI = (pop32());
  /* 12c859cd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c859ce ret  */
  ESPCHK(0x12c85870u, _esp0);
  ESP += 4; return;
  /* 12c859cf nop  */
  /* nop */
L_12c859d0:;
  /* 12c859d0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c859d2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12c859d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c859d7 pop esi */
  ESI = (pop32());
  /* 12c859d8 pop edi */
  EDI = (pop32());
  /* 12c859d9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c859da ret  */
  ESPCHK(0x12c85870u, _esp0);
  ESP += 4; return;
  /* 12c859db nop  */
  /* nop */
L_12c859dc:;
  /* 12c859dc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c859de mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12c859e0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12c859e3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12c859e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c859e9 pop esi */
  ESI = (pop32());
  /* 12c859ea pop edi */
  EDI = (pop32());
  /* 12c859eb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c859ec ret  */
  ESPCHK(0x12c85870u, _esp0);
  ESP += 4; return;
  /* 12c859ed lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12c859f0:;
  /* 12c859f0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c859f2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12c859f4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12c859f7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12c859fa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12c859fd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12c85a00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c85a03 pop esi */
  ESI = (pop32());
  /* 12c85a04 pop edi */
  EDI = (pop32());
  /* 12c85a05 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c85a06 ret  */
  ESPCHK(0x12c85870u, _esp0);
  ESP += 4; return;
  /* 12c85a07 nop  */
  /* nop */
L_12c85a08:;
  /* 12c85a08 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 12c85a0c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 12c85a10 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12c85a16 jne 0x12c85a3c */
  if (!C.zf) goto L_12c85a3c;
  /* 12c85a18 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c85a1b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12c85a1e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c85a21 jb 0x12c85a30 */
  if (C.cf) goto L_12c85a30;
  /* 12c85a23 std  */
  C.df=1;
  /* 12c85a24 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c85a26 cld  */
  C.df=0;
  /* 12c85a27 jmp dword ptr [edx*4 + 0x12c85b50] */
  switch (EDX) {
    case 0: goto L_12c85b60;
    case 1: goto L_12c85b68;
    case 2: goto L_12c85b78;
    case 3: goto L_12c85b8c;
    default: x86_unimpl("switch@0x12c85a27 out of table"); return;
  }
  /* 12c85a2e mov edi, edi */
  EDI = (EDI);
L_12c85a30:;
  /* 12c85a30 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c85a32 jmp dword ptr [ecx*4 + 0x12c85b00] */
  switch (ECX) {
    case 0: goto L_12c85b47;
    default: x86_unimpl("switch@0x12c85a32 out of table"); return;
  }
  /* 12c85a39 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12c85a3c:;
  /* 12c85a3c mov eax, edi */
  EAX = (EDI);
  /* 12c85a3e mov edx, 3 */
  EDX = (0x3u);
  /* 12c85a43 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c85a46 jb 0x12c85a54 */
  if (C.cf) goto L_12c85a54;
  /* 12c85a48 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12c85a4b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c85a4d jmp dword ptr [eax*4 + 0x12c85a58] */
  switch (EAX) {
    case 1: goto L_12c85a68;
    case 2: goto L_12c85a88;
    case 3: goto L_12c85ab0;
    default: x86_unimpl("switch@0x12c85a4d out of table"); return;
  }
L_12c85a54:;
  /* 12c85a54 jmp dword ptr [ecx*4 + 0x12c85b50] */
  switch (ECX) {
    case 0: goto L_12c85b60;
    case 1: goto L_12c85b68;
    case 2: goto L_12c85b78;
    case 3: goto L_12c85b8c;
    default: x86_unimpl("switch@0x12c85a54 out of table"); return;
  }
  /* 12c85a5b nop  */
  /* nop */
L_12c85a68:;
  /* 12c85a68 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12c85a6b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12c85a6d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12c85a70 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 12c85a71 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c85a74 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 12c85a75 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c85a78 jb 0x12c85a30 */
  if (C.cf) goto L_12c85a30;
  /* 12c85a7a std  */
  C.df=1;
  /* 12c85a7b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c85a7d cld  */
  C.df=0;
  /* 12c85a7e jmp dword ptr [edx*4 + 0x12c85b50] */
  switch (EDX) {
    case 0: goto L_12c85b60;
    case 1: goto L_12c85b68;
    case 2: goto L_12c85b78;
    case 3: goto L_12c85b8c;
    default: x86_unimpl("switch@0x12c85a7e out of table"); return;
  }
  /* 12c85a85 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12c85a88:;
  /* 12c85a88 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12c85a8b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12c85a8d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12c85a90 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12c85a93 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c85a96 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12c85a99 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c85a9c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c85a9f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c85aa2 jb 0x12c85a30 */
  if (C.cf) goto L_12c85a30;
  /* 12c85aa4 std  */
  C.df=1;
  /* 12c85aa5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c85aa7 cld  */
  C.df=0;
  /* 12c85aa8 jmp dword ptr [edx*4 + 0x12c85b50] */
  switch (EDX) {
    case 0: goto L_12c85b60;
    case 1: goto L_12c85b68;
    case 2: goto L_12c85b78;
    case 3: goto L_12c85b8c;
    default: x86_unimpl("switch@0x12c85aa8 out of table"); return;
  }
  /* 12c85aaf nop  */
  /* nop */
L_12c85ab0:;
  /* 12c85ab0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12c85ab3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12c85ab5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12c85ab8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12c85abb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12c85abe mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12c85ac1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c85ac4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12c85ac7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c85aca sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c85acd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c85ad0 jb 0x12c85a30 */
  if (C.cf) goto L_12c85a30;
  /* 12c85ad6 std  */
  C.df=1;
  /* 12c85ad7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c85ad9 cld  */
  C.df=0;
  /* 12c85ada jmp dword ptr [edx*4 + 0x12c85b50] */
  switch (EDX) {
    case 0: goto L_12c85b60;
    case 1: goto L_12c85b68;
    case 2: goto L_12c85b78;
    case 3: goto L_12c85b8c;
    default: x86_unimpl("switch@0x12c85ada out of table"); return;
  }
  /* 12c85ae1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 12c85ae4 add al, 0x5b */
  { uint32_t _a=(AL),_b=(0x5bu),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12c85ae6 enter 0xc12, 0x5b */
  x86_unimpl("enter @ 0x12c85ae6");
  /* 12c85aea enter 0x1412, 0x5b */
  x86_unimpl("enter @ 0x12c85aea");
  /* 12c85aee enter 0x1c12, 0x5b */
  x86_unimpl("enter @ 0x12c85aee");
  /* 12c85af2 enter 0x2412, 0x5b */
  x86_unimpl("enter @ 0x12c85af2");
  /* 12c85af6 enter 0x2c12, 0x5b */
  x86_unimpl("enter @ 0x12c85af6");
  /* 12c85afa enter 0x3412, 0x5b */
  x86_unimpl("enter @ 0x12c85afa");
  /* 12c85b04 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 12c85b08 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 12c85b0c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 12c85b10 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 12c85b14 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 12c85b18 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 12c85b1c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 12c85b20 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 12c85b24 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 12c85b28 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 12c85b2c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 12c85b30 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 12c85b34 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 12c85b38 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 12c85b3c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12c85b43 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c85b45 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12c85b47:;
  /* 12c85b47 jmp dword ptr [edx*4 + 0x12c85b50] */
  switch (EDX) {
    case 0: goto L_12c85b60;
    case 1: goto L_12c85b68;
    case 2: goto L_12c85b78;
    case 3: goto L_12c85b8c;
    default: x86_unimpl("switch@0x12c85b47 out of table"); return;
  }
  /* 12c85b4e mov edi, edi */
  EDI = (EDI);
L_12c85b60:;
  /* 12c85b60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c85b63 pop esi */
  ESI = (pop32());
  /* 12c85b64 pop edi */
  EDI = (pop32());
  /* 12c85b65 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c85b66 ret  */
  ESPCHK(0x12c85870u, _esp0);
  ESP += 4; return;
  /* 12c85b67 nop  */
  /* nop */
L_12c85b68:;
  /* 12c85b68 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12c85b6b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12c85b6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c85b71 pop esi */
  ESI = (pop32());
  /* 12c85b72 pop edi */
  EDI = (pop32());
  /* 12c85b73 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c85b74 ret  */
  ESPCHK(0x12c85870u, _esp0);
  ESP += 4; return;
  /* 12c85b75 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12c85b78:;
  /* 12c85b78 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12c85b7b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12c85b7e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12c85b81 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12c85b84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c85b87 pop esi */
  ESI = (pop32());
  /* 12c85b88 pop edi */
  EDI = (pop32());
  /* 12c85b89 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c85b8a ret  */
  ESPCHK(0x12c85870u, _esp0);
  ESP += 4; return;
  /* 12c85b8b nop  */
  /* nop */
L_12c85b8c:;
  /* 12c85b8c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12c85b8f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12c85b92 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12c85b95 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12c85b98 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12c85b9b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12c85b9e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c85ba1 pop esi */
  ESI = (pop32());
  /* 12c85ba2 pop edi */
  EDI = (pop32());
  /* 12c85ba3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c85ba4 ret  */
  ESPCHK(0x12c85870u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ba5 @ 0x12c85ba5 (106 bytes, 36 insns) */
void f_12c85ba5(void) {
  FTRACE(0x12c85ba5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c85ba5 push ebp */
  push32((uint32_t)(EBP));
  /* 12c85ba6 mov ebp, esp */
  EBP = (ESP);
  /* 12c85ba8 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c85baa push 0x12c8e210 */
  push32((uint32_t)(0x12c8e210u));
  /* 12c85baf push 0x12c86a64 */
  push32((uint32_t)(0x12c86a64u));
  /* 12c85bb4 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12c85bba push eax */
  push32((uint32_t)(EAX));
  /* 12c85bbb mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12c85bc2 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c85bc5 push ebx */
  push32((uint32_t)(EBX));
  /* 12c85bc6 push esi */
  push32((uint32_t)(ESI));
  /* 12c85bc7 push edi */
  push32((uint32_t)(EDI));
  /* 12c85bc8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c85bca mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12c85bcd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c85bd0 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_12c85bd3:;
  /* 12c85bd3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c85bd6 cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c85bd9 jge 0x12c85bee */
  if ((C.sf==C.of)) goto L_12c85bee;
  /* 12c85bdb mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12c85bde mov ecx, esi */
  ECX = (ESI);
  /* 12c85be0 call dword ptr [ebp + 0x14] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x14))), 0x12c85be3u);
  /* 12c85be3 add esi, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c85be6 mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
  /* 12c85be9 inc dword ptr [ebp - 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1c)))+1; w32((uint32_t)(EBP + -0x1c), (_r)); fl_inc(_r,32); }
  /* 12c85bec jmp 0x12c85bd3 */
  goto L_12c85bd3;
L_12c85bee:;
  /* 12c85bee mov dword ptr [ebp - 0x20], 1 */
  w32((uint32_t)(EBP + -0x20), (0x1u));
  /* 12c85bf5 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c85bf9 call 0x12c85c0f */
  push32(0x12c85bfeu); f_12c85c0f();
  /* 12c85bfe mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c85c01 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12c85c08 pop edi */
  EDI = (pop32());
  /* 12c85c09 pop esi */
  ESI = (pop32());
  /* 12c85c0a pop ebx */
  EBX = (pop32());
  /* 12c85c0b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c85c0c ret 0x14 */
  ESPCHK(0x12c85ba5u, _esp0);
  ESP += 24; return;
}

/* FUN_10005c0f @ 0x12c85c0f (24 bytes, 8 insns) */
void f_12c85c0f(void) {
  FTRACE(0x12c85c0fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c85c0f cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c85c13 jne 0x12c85c26 */
  if (!C.zf) goto L_12c85c26;
  /* 12c85c15 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 12c85c18 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 12c85c1b push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 12c85c1e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c85c21 call 0x12c84c71 */
  push32(0x12c85c26u); f_12c84c71();
L_12c85c26:;
  /* 12c85c26 ret  */
  ESPCHK(0x12c85c0fu, _esp0);
  ESP += 4; return;
}

/* FUN_10005c30 @ 0x12c85c30 (133 bytes, 67 insns) */
void f_12c85c30(void) {
  FTRACE(0x12c85c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c85c30 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c85c34 push edi */
  push32((uint32_t)(EDI));
  /* 12c85c35 push ebx */
  push32((uint32_t)(EBX));
  /* 12c85c36 push esi */
  push32((uint32_t)(ESI));
  /* 12c85c37 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12c85c39 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 12c85c3d test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12c85c3f je 0x12c85caa */
  if (C.zf) goto L_12c85caa;
  /* 12c85c41 mov dh, byte ptr [ecx + 1] */
  C.d.b.h = (r8((uint32_t)(ECX + 0x1)));
  /* 12c85c44 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12c85c46 je 0x12c85c97 */
  if (C.zf) goto L_12c85c97;
L_12c85c48:;
  /* 12c85c48 mov esi, edi */
  ESI = (EDI);
  /* 12c85c4a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 12c85c4e mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 12c85c50 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c85c51 cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c85c53 je 0x12c85c6a */
  if (C.zf) goto L_12c85c6a;
  /* 12c85c55 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12c85c57 je 0x12c85c64 */
  if (C.zf) goto L_12c85c64;
L_12c85c59:;
  /* 12c85c59 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c85c5b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_12c85c5c:;
  /* 12c85c5c cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c85c5e je 0x12c85c6a */
  if (C.zf) goto L_12c85c6a;
  /* 12c85c60 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12c85c62 jne 0x12c85c59 */
  if (!C.zf) goto L_12c85c59;
L_12c85c64:;
  /* 12c85c64 pop esi */
  ESI = (pop32());
  /* 12c85c65 pop ebx */
  EBX = (pop32());
  /* 12c85c66 pop edi */
  EDI = (pop32());
  /* 12c85c67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c85c69 ret  */
  ESPCHK(0x12c85c30u, _esp0);
  ESP += 4; return;
L_12c85c6a:;
  /* 12c85c6a mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c85c6c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c85c6d cmp al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c85c6f jne 0x12c85c5c */
  if (!C.zf) goto L_12c85c5c;
  /* 12c85c71 lea edi, [esi - 1] */
  EDI = ((uint32_t)(ESI + -0x1));
L_12c85c74:;
  /* 12c85c74 mov ah, byte ptr [ecx + 2] */
  AH = (r8((uint32_t)(ECX + 0x2)));
  /* 12c85c77 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12c85c79 je 0x12c85ca3 */
  if (C.zf) goto L_12c85ca3;
  /* 12c85c7b mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c85c7d add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c85c80 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c85c82 jne 0x12c85c48 */
  if (!C.zf) goto L_12c85c48;
  /* 12c85c84 mov al, byte ptr [ecx + 3] */
  AL = (r8((uint32_t)(ECX + 0x3)));
  /* 12c85c87 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12c85c89 je 0x12c85ca3 */
  if (C.zf) goto L_12c85ca3;
  /* 12c85c8b mov ah, byte ptr [esi - 1] */
  AH = (r8((uint32_t)(ESI + -0x1)));
  /* 12c85c8e add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c85c91 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c85c93 je 0x12c85c74 */
  if (C.zf) goto L_12c85c74;
  /* 12c85c95 jmp 0x12c85c48 */
  goto L_12c85c48;
L_12c85c97:;
  /* 12c85c97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c85c99 pop esi */
  ESI = (pop32());
  /* 12c85c9a pop ebx */
  EBX = (pop32());
  /* 12c85c9b pop edi */
  EDI = (pop32());
  /* 12c85c9c mov al, dl */
  AL = (DL);
  /* 12c85c9e jmp 0x12c89a86 */
  jmp_ind(0x12c89a86u); return;
L_12c85ca3:;
  /* 12c85ca3 lea eax, [edi - 1] */
  EAX = ((uint32_t)(EDI + -0x1));
  /* 12c85ca6 pop esi */
  ESI = (pop32());
  /* 12c85ca7 pop ebx */
  EBX = (pop32());
  /* 12c85ca8 pop edi */
  EDI = (pop32());
  /* 12c85ca9 ret  */
  ESPCHK(0x12c85c30u, _esp0);
  ESP += 4; return;
L_12c85caa:;
  /* 12c85caa mov eax, edi */
  EAX = (EDI);
  /* 12c85cac pop esi */
  ESI = (pop32());
  /* 12c85cad pop ebx */
  EBX = (pop32());
  /* 12c85cae pop edi */
  EDI = (pop32());
  /* 12c85caf ret  */
  ESPCHK(0x12c85c30u, _esp0);
  ESP += 4; return;
  /* 12c85cb0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
}

/* FUN_10005cb0 @ 0x12c85cb0 (217 bytes, 57 insns) */
void f_12c85cb0(void) {
  FTRACE(0x12c85cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c85cb0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c85cb4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c85cb7 jne 0x12c85d45 */
  if (!C.zf) goto L_12c85d45;
  /* 12c85cbd call dword ptr [0x12c8e048] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e048))), 0x12c85cc3u);
  /* 12c85cc3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c85cc5 mov dword ptr [0x12cac450], eax */
  w32((uint32_t)(0x12cac450), (EAX));
  /* 12c85cca call 0x12c8a0e9 */
  push32(0x12c85ccfu); f_12c8a0e9();
  /* 12c85ccf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c85cd1 pop ecx */
  ECX = (pop32());
  /* 12c85cd2 je 0x12c85d10 */
  if (C.zf) goto L_12c85d10;
  /* 12c85cd4 mov eax, dword ptr [0x12cac450] */
  EAX = (r32((uint32_t)(0x12cac450)));
  /* 12c85cd9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c85cdb mov cl, byte ptr [0x12cac451] */
  CL = (r8((uint32_t)(0x12cac451)));
  /* 12c85ce1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c85ce6 shr dword ptr [0x12cac450], 0x10 */
  w32((uint32_t)(0x12cac450), (sh_shr((uint32_t)(r32((uint32_t)(0x12cac450))), (0x10u)&0x1f, 32)));
  /* 12c85ced mov dword ptr [0x12cac458], eax */
  w32((uint32_t)(0x12cac458), (EAX));
  /* 12c85cf2 mov dword ptr [0x12cac45c], ecx */
  w32((uint32_t)(0x12cac45c), (ECX));
  /* 12c85cf8 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12c85cfb add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c85cfd mov dword ptr [0x12cac454], eax */
  w32((uint32_t)(0x12cac454), (EAX));
  /* 12c85d02 call 0x12c8823c */
  push32(0x12c85d07u); f_12c8823c();
  /* 12c85d07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c85d09 jne 0x12c85d14 */
  if (!C.zf) goto L_12c85d14;
  /* 12c85d0b call 0x12c8a146 */
  push32(0x12c85d10u); f_12c8a146();
L_12c85d10:;
  /* 12c85d10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c85d12 jmp 0x12c85d86 */
  goto L_12c85d86;
L_12c85d14:;
  /* 12c85d14 call dword ptr [0x12c8e044] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e044))), 0x12c85d1au);
  /* 12c85d1a mov dword ptr [0x12cadb58], eax */
  w32((uint32_t)(0x12cadb58), (EAX));
  /* 12c85d1f call 0x12c89e42 */
  push32(0x12c85d24u); f_12c89e42();
  /* 12c85d24 mov dword ptr [0x12cac43c], eax */
  w32((uint32_t)(0x12cac43c), (EAX));
  /* 12c85d29 call 0x12c874c5 */
  push32(0x12c85d2eu); f_12c874c5();
  /* 12c85d2e call 0x12c89bf5 */
  push32(0x12c85d33u); f_12c89bf5();
  /* 12c85d33 call 0x12c89b3c */
  push32(0x12c85d38u); f_12c89b3c();
  /* 12c85d38 call 0x12c863e5 */
  push32(0x12c85d3du); f_12c863e5();
  /* 12c85d3d inc dword ptr [0x12cac438] */
  { uint32_t _r=(r32((uint32_t)(0x12cac438)))+1; w32((uint32_t)(0x12cac438), (_r)); fl_inc(_r,32); }
  /* 12c85d43 jmp 0x12c85d83 */
  goto L_12c85d83;
L_12c85d45:;
  /* 12c85d45 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c85d47 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c85d49 jne 0x12c85d77 */
  if (!C.zf) goto L_12c85d77;
  /* 12c85d4b cmp dword ptr [0x12cac438], ecx */
  { uint32_t _a=(r32((uint32_t)(0x12cac438))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c85d51 jle 0x12c85d10 */
  if ((C.zf||C.sf!=C.of)) goto L_12c85d10;
  /* 12c85d53 dec dword ptr [0x12cac438] */
  { uint32_t _r=(r32((uint32_t)(0x12cac438)))-1; w32((uint32_t)(0x12cac438), (_r)); fl_dec(_r,32); }
  /* 12c85d59 cmp dword ptr [0x12cac488], ecx */
  { uint32_t _a=(r32((uint32_t)(0x12cac488))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c85d5f jne 0x12c85d66 */
  if (!C.zf) goto L_12c85d66;
  /* 12c85d61 call 0x12c86423 */
  push32(0x12c85d66u); f_12c86423();
L_12c85d66:;
  /* 12c85d66 call 0x12c87681 */
  push32(0x12c85d6bu); f_12c87681();
  /* 12c85d6b call 0x12c88290 */
  push32(0x12c85d70u); f_12c88290();
  /* 12c85d70 call 0x12c8a146 */
  push32(0x12c85d75u); f_12c8a146();
  /* 12c85d75 jmp 0x12c85d83 */
  goto L_12c85d83;
L_12c85d77:;
  /* 12c85d77 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c85d7a jne 0x12c85d83 */
  if (!C.zf) goto L_12c85d83;
  /* 12c85d7c push ecx */
  push32((uint32_t)(ECX));
  /* 12c85d7d call 0x12c88328 */
  push32(0x12c85d82u); f_12c88328();
  /* 12c85d82 pop ecx */
  ECX = (pop32());
L_12c85d83:;
  /* 12c85d83 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c85d85 pop eax */
  EAX = (pop32());
L_12c85d86:;
  /* 12c85d86 ret 0xc */
  ESPCHK(0x12c85cb0u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x12c85d89 (157 bytes, 73 insns) */
void f_12c85d89(void) {
  FTRACE(0x12c85d89u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c85d89 push ebp */
  push32((uint32_t)(EBP));
  /* 12c85d8a mov ebp, esp */
  EBP = (ESP);
  /* 12c85d8c push ebx */
  push32((uint32_t)(EBX));
  /* 12c85d8d mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c85d90 push esi */
  push32((uint32_t)(ESI));
  /* 12c85d91 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12c85d94 push edi */
  push32((uint32_t)(EDI));
  /* 12c85d95 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 12c85d98 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 12c85d9a jne 0x12c85da5 */
  if (!C.zf) goto L_12c85da5;
  /* 12c85d9c cmp dword ptr [0x12cac438], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12cac438))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c85da3 jmp 0x12c85dcb */
  goto L_12c85dcb;
L_12c85da5:;
  /* 12c85da5 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c85da8 je 0x12c85daf */
  if (C.zf) goto L_12c85daf;
  /* 12c85daa cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c85dad jne 0x12c85dd1 */
  if (!C.zf) goto L_12c85dd1;
L_12c85daf:;
  /* 12c85daf mov eax, dword ptr [0x12cadb5c] */
  EAX = (r32((uint32_t)(0x12cadb5c)));
  /* 12c85db4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c85db6 je 0x12c85dc1 */
  if (C.zf) goto L_12c85dc1;
  /* 12c85db8 push edi */
  push32((uint32_t)(EDI));
  /* 12c85db9 push esi */
  push32((uint32_t)(ESI));
  /* 12c85dba push ebx */
  push32((uint32_t)(EBX));
  /* 12c85dbb call eax */
  call_ind((uint32_t)(EAX), 0x12c85dbdu);
  /* 12c85dbd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c85dbf je 0x12c85dcd */
  if (C.zf) goto L_12c85dcd;
L_12c85dc1:;
  /* 12c85dc1 push edi */
  push32((uint32_t)(EDI));
  /* 12c85dc2 push esi */
  push32((uint32_t)(ESI));
  /* 12c85dc3 push ebx */
  push32((uint32_t)(EBX));
  /* 12c85dc4 call 0x12c85cb0 */
  push32(0x12c85dc9u); f_12c85cb0();
  /* 12c85dc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_12c85dcb:;
  /* 12c85dcb jne 0x12c85dd1 */
  if (!C.zf) goto L_12c85dd1;
L_12c85dcd:;
  /* 12c85dcd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c85dcf jmp 0x12c85e1f */
  goto L_12c85e1f;
L_12c85dd1:;
  /* 12c85dd1 push edi */
  push32((uint32_t)(EDI));
  /* 12c85dd2 push esi */
  push32((uint32_t)(ESI));
  /* 12c85dd3 push ebx */
  push32((uint32_t)(EBX));
  /* 12c85dd4 call 0x12c810a0 */
  push32(0x12c85dd9u); f_12c810a0();
  /* 12c85dd9 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c85ddc mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12c85ddf jne 0x12c85ded */
  if (!C.zf) goto L_12c85ded;
  /* 12c85de1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c85de3 jne 0x12c85e1c */
  if (!C.zf) goto L_12c85e1c;
  /* 12c85de5 push edi */
  push32((uint32_t)(EDI));
  /* 12c85de6 push eax */
  push32((uint32_t)(EAX));
  /* 12c85de7 push ebx */
  push32((uint32_t)(EBX));
  /* 12c85de8 call 0x12c85cb0 */
  push32(0x12c85dedu); f_12c85cb0();
L_12c85ded:;
  /* 12c85ded test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 12c85def je 0x12c85df6 */
  if (C.zf) goto L_12c85df6;
  /* 12c85df1 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c85df4 jne 0x12c85e1c */
  if (!C.zf) goto L_12c85e1c;
L_12c85df6:;
  /* 12c85df6 push edi */
  push32((uint32_t)(EDI));
  /* 12c85df7 push esi */
  push32((uint32_t)(ESI));
  /* 12c85df8 push ebx */
  push32((uint32_t)(EBX));
  /* 12c85df9 call 0x12c85cb0 */
  push32(0x12c85dfeu); f_12c85cb0();
  /* 12c85dfe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c85e00 jne 0x12c85e05 */
  if (!C.zf) goto L_12c85e05;
  /* 12c85e02 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_12c85e05:;
  /* 12c85e05 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c85e09 je 0x12c85e1c */
  if (C.zf) goto L_12c85e1c;
  /* 12c85e0b mov eax, dword ptr [0x12cadb5c] */
  EAX = (r32((uint32_t)(0x12cadb5c)));
  /* 12c85e10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c85e12 je 0x12c85e1c */
  if (C.zf) goto L_12c85e1c;
  /* 12c85e14 push edi */
  push32((uint32_t)(EDI));
  /* 12c85e15 push esi */
  push32((uint32_t)(ESI));
  /* 12c85e16 push ebx */
  push32((uint32_t)(EBX));
  /* 12c85e17 call eax */
  call_ind((uint32_t)(EAX), 0x12c85e19u);
  /* 12c85e19 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_12c85e1c:;
  /* 12c85e1c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_12c85e1f:;
  /* 12c85e1f pop edi */
  EDI = (pop32());
  /* 12c85e20 pop esi */
  ESI = (pop32());
  /* 12c85e21 pop ebx */
  EBX = (pop32());
  /* 12c85e22 pop ebp */
  EBP = (pop32());
  /* 12c85e23 ret 0xc */
  ESPCHK(0x12c85d89u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x12c85e26 (48 bytes, 15 insns) */
void f_12c85e26(void) {
  FTRACE(0x12c85e26u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c85e26 mov eax, dword ptr [0x12cac444] */
  EAX = (r32((uint32_t)(0x12cac444)));
  /* 12c85e2b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c85e2e je 0x12c85e3d */
  if (C.zf) goto L_12c85e3d;
  /* 12c85e30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c85e32 jne 0x12c85e42 */
  if (!C.zf) goto L_12c85e42;
  /* 12c85e34 cmp dword ptr [0x12cac448], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12cac448))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c85e3b jne 0x12c85e42 */
  if (!C.zf) goto L_12c85e42;
L_12c85e3d:;
  /* 12c85e3d call 0x12c8a1ee */
  push32(0x12c85e42u); f_12c8a1ee();
L_12c85e42:;
  /* 12c85e42 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 12c85e46 call 0x12c8a227 */
  push32(0x12c85e4bu); f_12c8a227();
  /* 12c85e4b push 0xff */
  push32((uint32_t)(0xffu));
  /* 12c85e50 call dword ptr [0x12c90610] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c90610))), 0x12c85e56u);
  /* 12c85e56 pop ecx */
  ECX = (pop32());
  /* 12c85e57 pop ecx */
  ECX = (pop32());
  /* 12c85e58 ret  */
  ESPCHK(0x12c85e26u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e59 @ 0x12c85e59 (215 bytes, 76 insns) */
void f_12c85e59(void) {
  FTRACE(0x12c85e59u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c85e59 push ebp */
  push32((uint32_t)(EBP));
  /* 12c85e5a mov ebp, esp */
  EBP = (ESP);
  /* 12c85e5c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c85e5e push 0x12c8e220 */
  push32((uint32_t)(0x12c8e220u));
  /* 12c85e63 push 0x12c86a64 */
  push32((uint32_t)(0x12c86a64u));
  /* 12c85e68 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12c85e6e push eax */
  push32((uint32_t)(EAX));
  /* 12c85e6f mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12c85e76 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c85e79 push ebx */
  push32((uint32_t)(EBX));
  /* 12c85e7a push esi */
  push32((uint32_t)(ESI));
  /* 12c85e7b push edi */
  push32((uint32_t)(EDI));
  /* 12c85e7c mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12c85e7f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 12c85e81 je 0x12c85f33 */
  if (C.zf) { jmp_ind(0x12c85f33u); return; }
  /* 12c85e87 mov eax, dword ptr [0x12caca08] */
  EAX = (r32((uint32_t)(0x12caca08)));
  /* 12c85e8c cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c85e8f jne 0x12c85ecc */
  if (!C.zf) goto L_12c85ecc;
  /* 12c85e91 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c85e93 call 0x12c86c88 */
  push32(0x12c85e98u); f_12c86c88();
  /* 12c85e98 pop ecx */
  ECX = (pop32());
  /* 12c85e99 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c85e9d push esi */
  push32((uint32_t)(ESI));
  /* 12c85e9e call 0x12c8a3c2 */
  push32(0x12c85ea3u); f_12c8a3c2();
  /* 12c85ea3 pop ecx */
  ECX = (pop32());
  /* 12c85ea4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12c85ea7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c85ea9 je 0x12c85eb4 */
  if (C.zf) goto L_12c85eb4;
  /* 12c85eab push esi */
  push32((uint32_t)(ESI));
  /* 12c85eac push eax */
  push32((uint32_t)(EAX));
  /* 12c85ead call 0x12c8a3ed */
  push32(0x12c85eb2u); f_12c8a3ed();
  /* 12c85eb2 pop ecx */
  ECX = (pop32());
  /* 12c85eb3 pop ecx */
  ECX = (pop32());
L_12c85eb4:;
  /* 12c85eb4 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c85eb8 call 0x12c85ec3 */
  push32(0x12c85ebdu); f_12c85ec3();
  /* 12c85ebd cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c85ec1 jmp 0x12c85f14 */
  goto L_12c85f14;
  /* 12c85ec3 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c85ec5 call 0x12c86ce9 */
  push32(0x12c85ecau); f_12c86ce9();
  /* 12c85eca pop ecx */
  ECX = (pop32());
  /* 12c85ecb ret  */
  ESPCHK(0x12c85e59u, _esp0);
  ESP += 4; return;
L_12c85ecc:;
  /* 12c85ecc cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c85ecf jne 0x12c85f24 */
  if (!C.zf) goto L_12c85f24;
  /* 12c85ed1 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c85ed3 call 0x12c86c88 */
  push32(0x12c85ed8u); f_12c86c88();
  /* 12c85ed8 pop ecx */
  ECX = (pop32());
  /* 12c85ed9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12c85ee0 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12c85ee3 push eax */
  push32((uint32_t)(EAX));
  /* 12c85ee4 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 12c85ee7 push eax */
  push32((uint32_t)(EAX));
  /* 12c85ee8 push esi */
  push32((uint32_t)(ESI));
  /* 12c85ee9 call 0x12c8b11d */
  push32(0x12c85eeeu); f_12c8b11d();
  /* 12c85eee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c85ef1 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12c85ef4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c85ef6 je 0x12c85f07 */
  if (C.zf) goto L_12c85f07;
  /* 12c85ef8 push eax */
  push32((uint32_t)(EAX));
  /* 12c85ef9 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 12c85efc push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 12c85eff call 0x12c8b174 */
  push32(0x12c85f04u); f_12c8b174();
  /* 12c85f04 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c85f07:;
  /* 12c85f07 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c85f0b call 0x12c85f1b */
  push32(0x12c85f10u); f_12c85f1b();
  /* 12c85f10 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_12c85f14:;
  /* 12c85f14 jne 0x12c85f33 */
  if (!C.zf) { jmp_ind(0x12c85f33u); return; }
  /* 12c85f16 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c85f19 jmp 0x12c85f25 */
  goto L_12c85f25;
  /* 12c85f1b push 9 */
  push32((uint32_t)(0x9u));
  /* 12c85f1d call 0x12c86ce9 */
  push32(0x12c85f22u); f_12c86ce9();
  /* 12c85f22 pop ecx */
  ECX = (pop32());
  /* 12c85f23 ret  */
  ESPCHK(0x12c85e59u, _esp0);
  ESP += 4; return;
L_12c85f24:;
  /* 12c85f24 push esi */
  push32((uint32_t)(ESI));
L_12c85f25:;
  /* 12c85f25 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c85f27 push dword ptr [0x12caca04] */
  push32((uint32_t)(r32((uint32_t)(0x12caca04))));
  /* 12c85f2f dec esp */
  { uint32_t _r=(ESP)-1; ESP = (_r); fl_dec(_r,32); }
}

/* FUN_10005ec3 @ 0x12c85ec3 (9 bytes, 4 insns) */
void f_12c85ec3(void) {
  FTRACE(0x12c85ec3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c85ec3 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c85ec5 call 0x12c86ce9 */
  push32(0x12c85ecau); f_12c86ce9();
  /* 12c85eca pop ecx */
  ECX = (pop32());
  /* 12c85ecb ret  */
  ESPCHK(0x12c85ec3u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f1b @ 0x12c85f1b (9 bytes, 4 insns) */
void f_12c85f1b(void) {
  FTRACE(0x12c85f1bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c85f1b push 9 */
  push32((uint32_t)(0x9u));
  /* 12c85f1d call 0x12c86ce9 */
  push32(0x12c85f22u); f_12c86ce9();
  /* 12c85f22 pop ecx */
  ECX = (pop32());
  /* 12c85f23 ret  */
  ESPCHK(0x12c85f1bu, _esp0);
  ESP += 4; return;
}

/* FUN_10005f42 @ 0x12c85f42 (28 bytes, 11 insns) */
void f_12c85f42(void) {
  FTRACE(0x12c85f42u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c85f42 push esi */
  push32((uint32_t)(ESI));
  /* 12c85f43 mov esi, ecx */
  ESI = (ECX);
  /* 12c85f45 call 0x12c85fe5 */
  push32(0x12c85f4au); f_12c85fe5();
  /* 12c85f4a test byte ptr [esp + 8], 1 */
  { uint32_t _r=(r8((uint32_t)(ESP + 0x8)))&(0x1u); fl_logic(_r,8); }
  /* 12c85f4f je 0x12c85f58 */
  if (C.zf) goto L_12c85f58;
  /* 12c85f51 push esi */
  push32((uint32_t)(ESI));
  /* 12c85f52 call 0x12c847d0 */
  push32(0x12c85f57u); f_12c847d0();
  /* 12c85f57 pop ecx */
  ECX = (pop32());
L_12c85f58:;
  /* 12c85f58 mov eax, esi */
  EAX = (ESI);
  /* 12c85f5a pop esi */
  ESI = (pop32());
  /* 12c85f5b ret 4 */
  ESPCHK(0x12c85f42u, _esp0);
  ESP += 8; return;
}

/* FUN_10005f5e @ 0x12c85f5e (61 bytes, 25 insns) */
void f_12c85f5e(void) {
  FTRACE(0x12c85f5eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c85f5e push esi */
  push32((uint32_t)(ESI));
  /* 12c85f5f push edi */
  push32((uint32_t)(EDI));
  /* 12c85f60 mov edi, dword ptr [esp + 0xc] */
  EDI = (r32((uint32_t)(ESP + 0xc)));
  /* 12c85f64 mov esi, ecx */
  ESI = (ECX);
  /* 12c85f66 mov dword ptr [esi], 0x12c8e23c */
  w32((uint32_t)(ESI), (0x12c8e23cu));
  /* 12c85f6c push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 12c85f6e call 0x12c86010 */
  push32(0x12c85f73u); f_12c86010();
  /* 12c85f73 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c85f74 push eax */
  push32((uint32_t)(EAX));
  /* 12c85f75 call 0x12c8561a */
  push32(0x12c85f7au); f_12c8561a();
  /* 12c85f7a pop ecx */
  ECX = (pop32());
  /* 12c85f7b mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 12c85f7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c85f80 pop ecx */
  ECX = (pop32());
  /* 12c85f81 je 0x12c85f8d */
  if (C.zf) goto L_12c85f8d;
  /* 12c85f83 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 12c85f85 push eax */
  push32((uint32_t)(EAX));
  /* 12c85f86 call 0x12c8b590 */
  push32(0x12c85f8bu); f_12c8b590();
  /* 12c85f8b pop ecx */
  ECX = (pop32());
  /* 12c85f8c pop ecx */
  ECX = (pop32());
L_12c85f8d:;
  /* 12c85f8d mov dword ptr [esi + 8], 1 */
  w32((uint32_t)(ESI + 0x8), (0x1u));
  /* 12c85f94 mov eax, esi */
  EAX = (ESI);
  /* 12c85f96 pop edi */
  EDI = (pop32());
  /* 12c85f97 pop esi */
  ESI = (pop32());
  /* 12c85f98 ret 4 */
  ESPCHK(0x12c85f5eu, _esp0);
  ESP += 8; return;
}

/* FUN_10005f9b @ 0x12c85f9b (74 bytes, 31 insns) */
void f_12c85f9b(void) {
  FTRACE(0x12c85f9bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c85f9b push esi */
  push32((uint32_t)(ESI));
  /* 12c85f9c push edi */
  push32((uint32_t)(EDI));
  /* 12c85f9d mov edi, dword ptr [esp + 0xc] */
  EDI = (r32((uint32_t)(ESP + 0xc)));
  /* 12c85fa1 mov esi, ecx */
  ESI = (ECX);
  /* 12c85fa3 mov dword ptr [esi], 0x12c8e23c */
  w32((uint32_t)(ESI), (0x12c8e23cu));
  /* 12c85fa9 mov eax, dword ptr [edi + 8] */
  EAX = (r32((uint32_t)(EDI + 0x8)));
  /* 12c85fac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c85fae mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 12c85fb1 je 0x12c85fd8 */
  if (C.zf) goto L_12c85fd8;
  /* 12c85fb3 push dword ptr [edi + 4] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x4))));
  /* 12c85fb6 call 0x12c86010 */
  push32(0x12c85fbbu); f_12c86010();
  /* 12c85fbb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c85fbc push eax */
  push32((uint32_t)(EAX));
  /* 12c85fbd call 0x12c8561a */
  push32(0x12c85fc2u); f_12c8561a();
  /* 12c85fc2 pop ecx */
  ECX = (pop32());
  /* 12c85fc3 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 12c85fc6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c85fc8 pop ecx */
  ECX = (pop32());
  /* 12c85fc9 je 0x12c85fde */
  if (C.zf) goto L_12c85fde;
  /* 12c85fcb push dword ptr [edi + 4] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x4))));
  /* 12c85fce push eax */
  push32((uint32_t)(EAX));
  /* 12c85fcf call 0x12c8b590 */
  push32(0x12c85fd4u); f_12c8b590();
  /* 12c85fd4 pop ecx */
  ECX = (pop32());
  /* 12c85fd5 pop ecx */
  ECX = (pop32());
  /* 12c85fd6 jmp 0x12c85fde */
  goto L_12c85fde;
L_12c85fd8:;
  /* 12c85fd8 mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 12c85fdb mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
L_12c85fde:;
  /* 12c85fde mov eax, esi */
  EAX = (ESI);
  /* 12c85fe0 pop edi */
  EDI = (pop32());
  /* 12c85fe1 pop esi */
  ESI = (pop32());
  /* 12c85fe2 ret 4 */
  ESPCHK(0x12c85f9bu, _esp0);
  ESP += 8; return;
}

/* ~exception @ 0x12c85fe5 (22 bytes, 7 insns) */
void f_12c85fe5(void) {
  FTRACE(0x12c85fe5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c85fe5 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c85fe9 mov dword ptr [ecx], 0x12c8e23c */
  w32((uint32_t)(ECX), (0x12c8e23cu));
  /* 12c85fef je 0x12c85ffa */
  if (C.zf) goto L_12c85ffa;
  /* 12c85ff1 push dword ptr [ecx + 4] */
  push32((uint32_t)(r32((uint32_t)(ECX + 0x4))));
  /* 12c85ff4 call 0x12c847d0 */
  push32(0x12c85ff9u); f_12c847d0();
  /* 12c85ff9 pop ecx */
  ECX = (pop32());
L_12c85ffa:;
  /* 12c85ffa ret  */
  ESPCHK(0x12c85fe5u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x12c86010 (123 bytes, 44 insns) */
void f_12c86010(void) {
  FTRACE(0x12c86010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c86010 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c86014 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12c8601a je 0x12c86030 */
  if (C.zf) goto L_12c86030;
L_12c8601c:;
  /* 12c8601c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 12c8601e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12c8601f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12c86021 je 0x12c86063 */
  if (C.zf) goto L_12c86063;
  /* 12c86023 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12c86029 jne 0x12c8601c */
  if (!C.zf) goto L_12c8601c;
  /* 12c8602b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12c86030:;
  /* 12c86030 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12c86032 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12c86037 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c86039 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c8603c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12c8603e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c86041 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12c86046 je 0x12c86030 */
  if (C.zf) goto L_12c86030;
  /* 12c86048 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12c8604b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12c8604d je 0x12c86081 */
  if (C.zf) goto L_12c86081;
  /* 12c8604f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12c86051 je 0x12c86077 */
  if (C.zf) goto L_12c86077;
  /* 12c86053 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12c86058 je 0x12c8606d */
  if (C.zf) goto L_12c8606d;
  /* 12c8605a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 12c8605f je 0x12c86063 */
  if (C.zf) goto L_12c86063;
  /* 12c86061 jmp 0x12c86030 */
  goto L_12c86030;
L_12c86063:;
  /* 12c86063 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 12c86066 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c8606a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8606c ret  */
  ESPCHK(0x12c86010u, _esp0);
  ESP += 4; return;
L_12c8606d:;
  /* 12c8606d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 12c86070 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c86074 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c86076 ret  */
  ESPCHK(0x12c86010u, _esp0);
  ESP += 4; return;
L_12c86077:;
  /* 12c86077 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 12c8607a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c8607e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c86080 ret  */
  ESPCHK(0x12c86010u, _esp0);
  ESP += 4; return;
L_12c86081:;
  /* 12c86081 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 12c86084 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c86088 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8608a ret  */
  ESPCHK(0x12c86010u, _esp0);
  ESP += 4; return;
}

/* FUN_1000608c @ 0x12c8608c (31 bytes, 10 insns) */
void f_12c8608c(void) {
  FTRACE(0x12c8608cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8608c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c8608e push eax */
  push32((uint32_t)(EAX));
  /* 12c8608f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12c86095 push eax */
  push32((uint32_t)(EAX));
  /* 12c86096 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 12c8609a mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12c860a1 mov dword ptr [esp + 0xc], ebp */
  w32((uint32_t)(ESP + 0xc), (EBP));
  /* 12c860a5 lea ebp, [esp + 0xc] */
  EBP = ((uint32_t)(ESP + 0xc));
  /* 12c860a9 push eax */
  push32((uint32_t)(EAX));
  /* 12c860aa ret  */
  ESPCHK(0x12c8608cu, _esp0);
  ESP += 4; return;
}

/* FUN_100060b0 @ 0x12c860b0 (664 bytes, 259 insns) [15 switch table(s)] */
void f_12c860b0(void) {
  FTRACE(0x12c860b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c860b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c860b1 mov ebp, esp */
  EBP = (ESP);
  /* 12c860b3 push edi */
  push32((uint32_t)(EDI));
  /* 12c860b4 push esi */
  push32((uint32_t)(ESI));
  /* 12c860b5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12c860b8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c860bb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12c860be mov eax, ecx */
  EAX = (ECX);
  /* 12c860c0 mov edx, ecx */
  EDX = (ECX);
  /* 12c860c2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c860c4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c860c6 jbe 0x12c860d0 */
  if ((C.cf||C.zf)) goto L_12c860d0;
  /* 12c860c8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c860ca jb 0x12c86248 */
  if (C.cf) goto L_12c86248;
L_12c860d0:;
  /* 12c860d0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12c860d6 jne 0x12c860ec */
  if (!C.zf) goto L_12c860ec;
  /* 12c860d8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c860db and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12c860de cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c860e1 jb 0x12c8610c */
  if (C.cf) goto L_12c8610c;
  /* 12c860e3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c860e5 jmp dword ptr [edx*4 + 0x12c861f8] */
  switch (EDX) {
    case 0: goto L_12c86208;
    case 1: goto L_12c86210;
    case 2: goto L_12c8621c;
    case 3: goto L_12c86230;
    default: x86_unimpl("switch@0x12c860e5 out of table"); return;
  }
L_12c860ec:;
  /* 12c860ec mov eax, edi */
  EAX = (EDI);
  /* 12c860ee mov edx, 3 */
  EDX = (0x3u);
  /* 12c860f3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c860f6 jb 0x12c86104 */
  if (C.cf) goto L_12c86104;
  /* 12c860f8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12c860fb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c860fd jmp dword ptr [eax*4 + 0x12c86110] */
  switch (EAX) {
    case 1: goto L_12c86120;
    case 2: goto L_12c8614c;
    case 3: goto L_12c86170;
    default: x86_unimpl("switch@0x12c860fd out of table"); return;
  }
L_12c86104:;
  /* 12c86104 jmp dword ptr [ecx*4 + 0x12c86208] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x12c86208)))); return;
  /* 12c8610b nop  */
  /* nop */
L_12c8610c:;
  /* 12c8610c jmp dword ptr [ecx*4 + 0x12c8618c] */
  switch (ECX) {
    case 0: goto L_12c861ef;
    case 1: goto L_12c861dc;
    case 2: goto L_12c861d4;
    case 3: goto L_12c861cc;
    case 4: goto L_12c861c4;
    case 5: goto L_12c861bc;
    case 6: goto L_12c861b4;
    case 7: goto L_12c861ac;
    default: x86_unimpl("switch@0x12c8610c out of table"); return;
  }
  /* 12c86113 nop  */
  /* nop */
L_12c86120:;
  /* 12c86120 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12c86122 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c86124 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12c86126 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12c86129 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12c8612c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12c8612f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c86132 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12c86135 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c86138 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8613b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8613e jb 0x12c8610c */
  if (C.cf) goto L_12c8610c;
  /* 12c86140 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c86142 jmp dword ptr [edx*4 + 0x12c861f8] */
  switch (EDX) {
    case 0: goto L_12c86208;
    case 1: goto L_12c86210;
    case 2: goto L_12c8621c;
    case 3: goto L_12c86230;
    default: x86_unimpl("switch@0x12c86142 out of table"); return;
  }
  /* 12c86149 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12c8614c:;
  /* 12c8614c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12c8614e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c86150 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12c86152 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12c86155 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c86158 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12c8615b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8615e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c86161 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c86164 jb 0x12c8610c */
  if (C.cf) goto L_12c8610c;
  /* 12c86166 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c86168 jmp dword ptr [edx*4 + 0x12c861f8] */
  switch (EDX) {
    case 0: goto L_12c86208;
    case 1: goto L_12c86210;
    case 2: goto L_12c8621c;
    case 3: goto L_12c86230;
    default: x86_unimpl("switch@0x12c86168 out of table"); return;
  }
  /* 12c8616f nop  */
  /* nop */
L_12c86170:;
  /* 12c86170 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12c86172 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c86174 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12c86176 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c86177 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c8617a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12c8617b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8617e jb 0x12c8610c */
  if (C.cf) goto L_12c8610c;
  /* 12c86180 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c86182 jmp dword ptr [edx*4 + 0x12c861f8] */
  switch (EDX) {
    case 0: goto L_12c86208;
    case 1: goto L_12c86210;
    case 2: goto L_12c8621c;
    case 3: goto L_12c86230;
    default: x86_unimpl("switch@0x12c86182 out of table"); return;
  }
  /* 12c86189 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12c861ac:;
  /* 12c861ac mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 12c861b0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_12c861b4:;
  /* 12c861b4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 12c861b8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_12c861bc:;
  /* 12c861bc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 12c861c0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_12c861c4:;
  /* 12c861c4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 12c861c8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_12c861cc:;
  /* 12c861cc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 12c861d0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_12c861d4:;
  /* 12c861d4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 12c861d8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_12c861dc:;
  /* 12c861dc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 12c861e0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 12c861e4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12c861eb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c861ed add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12c861ef:;
  /* 12c861ef jmp dword ptr [edx*4 + 0x12c861f8] */
  switch (EDX) {
    case 0: goto L_12c86208;
    case 1: goto L_12c86210;
    case 2: goto L_12c8621c;
    case 3: goto L_12c86230;
    default: x86_unimpl("switch@0x12c861ef out of table"); return;
  }
  /* 12c861f6 mov edi, edi */
  EDI = (EDI);
L_12c86208:;
  /* 12c86208 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8620b pop esi */
  ESI = (pop32());
  /* 12c8620c pop edi */
  EDI = (pop32());
  /* 12c8620d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c8620e ret  */
  ESPCHK(0x12c860b0u, _esp0);
  ESP += 4; return;
  /* 12c8620f nop  */
  /* nop */
L_12c86210:;
  /* 12c86210 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c86212 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12c86214 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c86217 pop esi */
  ESI = (pop32());
  /* 12c86218 pop edi */
  EDI = (pop32());
  /* 12c86219 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c8621a ret  */
  ESPCHK(0x12c860b0u, _esp0);
  ESP += 4; return;
  /* 12c8621b nop  */
  /* nop */
L_12c8621c:;
  /* 12c8621c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c8621e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12c86220 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12c86223 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12c86226 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c86229 pop esi */
  ESI = (pop32());
  /* 12c8622a pop edi */
  EDI = (pop32());
  /* 12c8622b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c8622c ret  */
  ESPCHK(0x12c860b0u, _esp0);
  ESP += 4; return;
  /* 12c8622d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12c86230:;
  /* 12c86230 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c86232 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12c86234 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12c86237 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12c8623a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12c8623d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12c86240 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c86243 pop esi */
  ESI = (pop32());
  /* 12c86244 pop edi */
  EDI = (pop32());
  /* 12c86245 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c86246 ret  */
  ESPCHK(0x12c860b0u, _esp0);
  ESP += 4; return;
  /* 12c86247 nop  */
  /* nop */
L_12c86248:;
  /* 12c86248 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 12c8624c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 12c86250 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12c86256 jne 0x12c8627c */
  if (!C.zf) goto L_12c8627c;
  /* 12c86258 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c8625b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12c8625e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c86261 jb 0x12c86270 */
  if (C.cf) goto L_12c86270;
  /* 12c86263 std  */
  C.df=1;
  /* 12c86264 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c86266 cld  */
  C.df=0;
  /* 12c86267 jmp dword ptr [edx*4 + 0x12c86390] */
  switch (EDX) {
    case 0: goto L_12c863a0;
    case 1: goto L_12c863a8;
    case 2: goto L_12c863b8;
    case 3: goto L_12c863cc;
    default: x86_unimpl("switch@0x12c86267 out of table"); return;
  }
  /* 12c8626e mov edi, edi */
  EDI = (EDI);
L_12c86270:;
  /* 12c86270 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c86272 jmp dword ptr [ecx*4 + 0x12c86340] */
  switch (ECX) {
    case 0: goto L_12c86387;
    default: x86_unimpl("switch@0x12c86272 out of table"); return;
  }
  /* 12c86279 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12c8627c:;
  /* 12c8627c mov eax, edi */
  EAX = (EDI);
  /* 12c8627e mov edx, 3 */
  EDX = (0x3u);
  /* 12c86283 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c86286 jb 0x12c86294 */
  if (C.cf) goto L_12c86294;
  /* 12c86288 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12c8628b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8628d jmp dword ptr [eax*4 + 0x12c86298] */
  switch (EAX) {
    case 1: goto L_12c862a8;
    case 2: goto L_12c862c8;
    case 3: goto L_12c862f0;
    default: x86_unimpl("switch@0x12c8628d out of table"); return;
  }
L_12c86294:;
  /* 12c86294 jmp dword ptr [ecx*4 + 0x12c86390] */
  switch (ECX) {
    case 0: goto L_12c863a0;
    case 1: goto L_12c863a8;
    case 2: goto L_12c863b8;
    case 3: goto L_12c863cc;
    default: x86_unimpl("switch@0x12c86294 out of table"); return;
  }
  /* 12c8629b nop  */
  /* nop */
L_12c862a8:;
  /* 12c862a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12c862ab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12c862ad mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12c862b0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 12c862b1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c862b4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 12c862b5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c862b8 jb 0x12c86270 */
  if (C.cf) goto L_12c86270;
  /* 12c862ba std  */
  C.df=1;
  /* 12c862bb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c862bd cld  */
  C.df=0;
  /* 12c862be jmp dword ptr [edx*4 + 0x12c86390] */
  switch (EDX) {
    case 0: goto L_12c863a0;
    case 1: goto L_12c863a8;
    case 2: goto L_12c863b8;
    case 3: goto L_12c863cc;
    default: x86_unimpl("switch@0x12c862be out of table"); return;
  }
  /* 12c862c5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12c862c8:;
  /* 12c862c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12c862cb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12c862cd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12c862d0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12c862d3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c862d6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12c862d9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c862dc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c862df cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c862e2 jb 0x12c86270 */
  if (C.cf) goto L_12c86270;
  /* 12c862e4 std  */
  C.df=1;
  /* 12c862e5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c862e7 cld  */
  C.df=0;
  /* 12c862e8 jmp dword ptr [edx*4 + 0x12c86390] */
  switch (EDX) {
    case 0: goto L_12c863a0;
    case 1: goto L_12c863a8;
    case 2: goto L_12c863b8;
    case 3: goto L_12c863cc;
    default: x86_unimpl("switch@0x12c862e8 out of table"); return;
  }
  /* 12c862ef nop  */
  /* nop */
L_12c862f0:;
  /* 12c862f0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12c862f3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12c862f5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12c862f8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12c862fb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12c862fe mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12c86301 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c86304 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12c86307 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8630a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8630d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c86310 jb 0x12c86270 */
  if (C.cf) goto L_12c86270;
  /* 12c86316 std  */
  C.df=1;
  /* 12c86317 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c86319 cld  */
  C.df=0;
  /* 12c8631a jmp dword ptr [edx*4 + 0x12c86390] */
  switch (EDX) {
    case 0: goto L_12c863a0;
    case 1: goto L_12c863a8;
    case 2: goto L_12c863b8;
    case 3: goto L_12c863cc;
    default: x86_unimpl("switch@0x12c8631a out of table"); return;
  }
  /* 12c86321 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 12c86324 inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 12c86325 arpl ax, cx */
  x86_unimpl("arpl @ 0x12c86325");
  /* 12c86327 adc cl, byte ptr [ebx - 0x38] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EBX + -0x38))),_r=_a+_b+C.cf; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12c8632b adc dl, byte ptr [ebx - 0x38] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EBX + -0x38))),_r=_a+_b+C.cf; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 12c8632f adc bl, byte ptr [ebx - 0x38] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(EBX + -0x38))),_r=_a+_b+C.cf; BL = (_r); fl_add(_a,_b,_r,8); }
  /* 12c86333 adc ah, byte ptr [ebx - 0x38] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(EBX + -0x38))),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 12c86337 adc ch, byte ptr [ebx - 0x38] */
  { uint32_t _a=(C.c.b.h),_b=(r8((uint32_t)(EBX + -0x38))),_r=_a+_b+C.cf; C.c.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 12c8633b adc dh, byte ptr [ebx - 0x38] */
  { uint32_t _a=(C.d.b.h),_b=(r8((uint32_t)(EBX + -0x38))),_r=_a+_b+C.cf; C.d.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 12c86344 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 12c86348 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 12c8634c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 12c86350 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 12c86354 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 12c86358 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 12c8635c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 12c86360 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 12c86364 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 12c86368 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 12c8636c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 12c86370 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 12c86374 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 12c86378 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 12c8637c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12c86383 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c86385 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12c86387:;
  /* 12c86387 jmp dword ptr [edx*4 + 0x12c86390] */
  switch (EDX) {
    case 0: goto L_12c863a0;
    case 1: goto L_12c863a8;
    case 2: goto L_12c863b8;
    case 3: goto L_12c863cc;
    default: x86_unimpl("switch@0x12c86387 out of table"); return;
  }
  /* 12c8638e mov edi, edi */
  EDI = (EDI);
L_12c863a0:;
  /* 12c863a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c863a3 pop esi */
  ESI = (pop32());
  /* 12c863a4 pop edi */
  EDI = (pop32());
  /* 12c863a5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c863a6 ret  */
  ESPCHK(0x12c860b0u, _esp0);
  ESP += 4; return;
  /* 12c863a7 nop  */
  /* nop */
L_12c863a8:;
  /* 12c863a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12c863ab mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12c863ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c863b1 pop esi */
  ESI = (pop32());
  /* 12c863b2 pop edi */
  EDI = (pop32());
  /* 12c863b3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c863b4 ret  */
  ESPCHK(0x12c860b0u, _esp0);
  ESP += 4; return;
  /* 12c863b5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12c863b8:;
  /* 12c863b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12c863bb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12c863be mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12c863c1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12c863c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c863c7 pop esi */
  ESI = (pop32());
  /* 12c863c8 pop edi */
  EDI = (pop32());
  /* 12c863c9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c863ca ret  */
  ESPCHK(0x12c860b0u, _esp0);
  ESP += 4; return;
  /* 12c863cb nop  */
  /* nop */
L_12c863cc:;
  /* 12c863cc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12c863cf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12c863d2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12c863d5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12c863d8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12c863db mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12c863de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c863e1 pop esi */
  ESI = (pop32());
  /* 12c863e2 pop edi */
  EDI = (pop32());
  /* 12c863e3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c863e4 ret  */
  ESPCHK(0x12c860b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100063e5 @ 0x12c863e5 (45 bytes, 12 insns) */
void f_12c863e5(void) {
  FTRACE(0x12c863e5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c863e5 mov eax, dword ptr [0x12cadb54] */
  EAX = (r32((uint32_t)(0x12cadb54)));
  /* 12c863ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c863ec je 0x12c863f0 */
  if (C.zf) goto L_12c863f0;
  /* 12c863ee call eax */
  call_ind((uint32_t)(EAX), 0x12c863f0u);
L_12c863f0:;
  /* 12c863f0 push 0x12c90030 */
  push32((uint32_t)(0x12c90030u));
  /* 12c863f5 push 0x12c9001c */
  push32((uint32_t)(0x12c9001cu));
  /* 12c863fa call 0x12c864e9 */
  push32(0x12c863ffu); f_12c864e9();
  /* 12c863ff push 0x12c90018 */
  push32((uint32_t)(0x12c90018u));
  /* 12c86404 push 0x12c90000 */
  push32((uint32_t)(0x12c90000u));
  /* 12c86409 call 0x12c864e9 */
  push32(0x12c8640eu); f_12c864e9();
  /* 12c8640e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c86411 ret  */
  ESPCHK(0x12c863e5u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x12c86412 (17 bytes, 6 insns) */
void f_12c86412(void) {
  FTRACE(0x12c86412u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c86412 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c86414 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c86416 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 12c8641a call 0x12c86432 */
  push32(0x12c8641fu); f_12c86432();
  /* 12c8641f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c86422 ret  */
  ESPCHK(0x12c86412u, _esp0);
  ESP += 4; return;
}

/* FUN_10006423 @ 0x12c86423 (15 bytes, 6 insns) */
void f_12c86423(void) {
  FTRACE(0x12c86423u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c86423 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c86425 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c86427 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c86429 call 0x12c86432 */
  push32(0x12c8642eu); f_12c86432();
  /* 12c8642e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c86431 ret  */
  ESPCHK(0x12c86423u, _esp0);
  ESP += 4; return;
}

/* FUN_10006432 @ 0x12c86432 (163 bytes, 53 insns) */
void f_12c86432(void) {
  FTRACE(0x12c86432u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c86432 push edi */
  push32((uint32_t)(EDI));
  /* 12c86433 call 0x12c864d7 */
  push32(0x12c86438u); f_12c864d7();
  /* 12c86438 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c8643a pop edi */
  EDI = (pop32());
  /* 12c8643b cmp dword ptr [0x12cac48c], edi */
  { uint32_t _a=(r32((uint32_t)(0x12cac48c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c86441 jne 0x12c86454 */
  if (!C.zf) goto L_12c86454;
  /* 12c86443 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 12c86447 call dword ptr [0x12c8e058] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e058))), 0x12c8644du);
  /* 12c8644d push eax */
  push32((uint32_t)(EAX));
  /* 12c8644e call dword ptr [0x12c8e054] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e054))), 0x12c86454u);
L_12c86454:;
  /* 12c86454 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c86459 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8645a mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 12c8645e mov dword ptr [0x12cac488], edi */
  w32((uint32_t)(0x12cac488), (EDI));
  /* 12c86464 mov byte ptr [0x12cac484], bl */
  w8((uint32_t)(0x12cac484), (BL));
  /* 12c8646a jne 0x12c864a8 */
  if (!C.zf) goto L_12c864a8;
  /* 12c8646c mov eax, dword ptr [0x12cadb50] */
  EAX = (r32((uint32_t)(0x12cadb50)));
  /* 12c86471 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c86473 je 0x12c86497 */
  if (C.zf) goto L_12c86497;
  /* 12c86475 mov ecx, dword ptr [0x12cadb4c] */
  ECX = (r32((uint32_t)(0x12cadb4c)));
  /* 12c8647b push esi */
  push32((uint32_t)(ESI));
  /* 12c8647c lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 12c8647f cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c86481 jb 0x12c86496 */
  if (C.cf) goto L_12c86496;
L_12c86483:;
  /* 12c86483 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 12c86485 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c86487 je 0x12c8648b */
  if (C.zf) goto L_12c8648b;
  /* 12c86489 call eax */
  call_ind((uint32_t)(EAX), 0x12c8648bu);
L_12c8648b:;
  /* 12c8648b sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8648e cmp esi, dword ptr [0x12cadb50] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x12cadb50))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c86494 jae 0x12c86483 */
  if (!C.cf) goto L_12c86483;
L_12c86496:;
  /* 12c86496 pop esi */
  ESI = (pop32());
L_12c86497:;
  /* 12c86497 push 0x12c9003c */
  push32((uint32_t)(0x12c9003cu));
  /* 12c8649c push 0x12c90034 */
  push32((uint32_t)(0x12c90034u));
  /* 12c864a1 call 0x12c864e9 */
  push32(0x12c864a6u); f_12c864e9();
  /* 12c864a6 pop ecx */
  ECX = (pop32());
  /* 12c864a7 pop ecx */
  ECX = (pop32());
L_12c864a8:;
  /* 12c864a8 push 0x12c90048 */
  push32((uint32_t)(0x12c90048u));
  /* 12c864ad push 0x12c90040 */
  push32((uint32_t)(0x12c90040u));
  /* 12c864b2 call 0x12c864e9 */
  push32(0x12c864b7u); f_12c864e9();
  /* 12c864b7 pop ecx */
  ECX = (pop32());
  /* 12c864b8 pop ecx */
  ECX = (pop32());
  /* 12c864b9 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 12c864bb pop ebx */
  EBX = (pop32());
  /* 12c864bc je 0x12c864c5 */
  if (C.zf) goto L_12c864c5;
  /* 12c864be call 0x12c864e0 */
  push32(0x12c864c3u); f_12c864e0();
  /* 12c864c3 pop edi */
  EDI = (pop32());
  /* 12c864c4 ret  */
  ESPCHK(0x12c86432u, _esp0);
  ESP += 4; return;
L_12c864c5:;
  /* 12c864c5 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 12c864c9 mov dword ptr [0x12cac48c], edi */
  w32((uint32_t)(0x12cac48c), (EDI));
  /* 12c864cf call dword ptr [0x12c8e050] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e050))), 0x12c864d5u);
  /* 12c864d5 pop edi */
  EDI = (pop32());
  /* 12c864d6 ret  */
  ESPCHK(0x12c86432u, _esp0);
  ESP += 4; return;
}

/* FUN_100064d7 @ 0x12c864d7 (9 bytes, 4 insns) */
void f_12c864d7(void) {
  FTRACE(0x12c864d7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c864d7 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12c864d9 call 0x12c86c88 */
  push32(0x12c864deu); f_12c86c88();
  /* 12c864de pop ecx */
  ECX = (pop32());
  /* 12c864df ret  */
  ESPCHK(0x12c864d7u, _esp0);
  ESP += 4; return;
}

/* FUN_100064e0 @ 0x12c864e0 (9 bytes, 4 insns) */
void f_12c864e0(void) {
  FTRACE(0x12c864e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c864e0 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12c864e2 call 0x12c86ce9 */
  push32(0x12c864e7u); f_12c86ce9();
  /* 12c864e7 pop ecx */
  ECX = (pop32());
  /* 12c864e8 ret  */
  ESPCHK(0x12c864e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100064e9 @ 0x12c864e9 (26 bytes, 12 insns) */
void f_12c864e9(void) {
  FTRACE(0x12c864e9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c864e9 push esi */
  push32((uint32_t)(ESI));
  /* 12c864ea mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_12c864ee:;
  /* 12c864ee cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c864f2 jae 0x12c86501 */
  if (!C.cf) goto L_12c86501;
  /* 12c864f4 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 12c864f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c864f8 je 0x12c864fc */
  if (C.zf) goto L_12c864fc;
  /* 12c864fa call eax */
  call_ind((uint32_t)(EAX), 0x12c864fcu);
L_12c864fc:;
  /* 12c864fc add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c864ff jmp 0x12c864ee */
  goto L_12c864ee;
L_12c86501:;
  /* 12c86501 pop esi */
  ESI = (pop32());
  /* 12c86502 ret  */
  ESPCHK(0x12c864e9u, _esp0);
  ESP += 4; return;
}

/* FUN_10006503 @ 0x12c86503 (781 bytes, 277 insns) */
void f_12c86503(void) {
  FTRACE(0x12c86503u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c86503 push ebp */
  push32((uint32_t)(EBP));
  /* 12c86504 mov ebp, esp */
  EBP = (ESP);
  /* 12c86506 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c86508 push 0x12c8e258 */
  push32((uint32_t)(0x12c8e258u));
  /* 12c8650d push 0x12c86a64 */
  push32((uint32_t)(0x12c86a64u));
  /* 12c86512 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12c86518 push eax */
  push32((uint32_t)(EAX));
  /* 12c86519 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12c86520 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c86523 push ebx */
  push32((uint32_t)(EBX));
  /* 12c86524 push esi */
  push32((uint32_t)(ESI));
  /* 12c86525 push edi */
  push32((uint32_t)(EDI));
  /* 12c86526 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c86529 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 12c8652b cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8652d jne 0x12c8653d */
  if (!C.zf) goto L_12c8653d;
  /* 12c8652f push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 12c86532 call 0x12c86920 */
  push32(0x12c86537u); f_12c86920();
  /* 12c86537 pop ecx */
  ECX = (pop32());
  /* 12c86538 jmp 0x12c86823 */
  jmp_ind(0x12c86823u); return;
L_12c8653d:;
  /* 12c8653d mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12c86540 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c86542 jne 0x12c86550 */
  if (!C.zf) goto L_12c86550;
  /* 12c86544 push ebx */
  push32((uint32_t)(EBX));
  /* 12c86545 call 0x12c85e59 */
  push32(0x12c8654au); f_12c85e59();
  /* 12c8654a pop ecx */
  ECX = (pop32());
  /* 12c8654b jmp 0x12c86821 */
  jmp_ind(0x12c86821u); return;
L_12c86550:;
  /* 12c86550 mov eax, dword ptr [0x12caca08] */
  EAX = (r32((uint32_t)(0x12caca08)));
  /* 12c86555 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c86558 jne 0x12c86697 */
  if (!C.zf) goto L_12c86697;
L_12c8655e:;
  /* 12c8655e mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 12c86561 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c86564 ja 0x12c8665b */
  if ((!C.cf&&!C.zf)) goto L_12c8665b;
  /* 12c8656a push 9 */
  push32((uint32_t)(0x9u));
  /* 12c8656c call 0x12c86c88 */
  push32(0x12c86571u); f_12c86c88();
  /* 12c86571 pop ecx */
  ECX = (pop32());
  /* 12c86572 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 12c86575 push ebx */
  push32((uint32_t)(EBX));
  /* 12c86576 call 0x12c8a3c2 */
  push32(0x12c8657bu); f_12c8a3c2();
  /* 12c8657b pop ecx */
  ECX = (pop32());
  /* 12c8657c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12c8657f cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c86581 je 0x12c8662b */
  if (C.zf) goto L_12c8662b;
  /* 12c86587 cmp esi, dword ptr [0x12caca00] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x12caca00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8658d ja 0x12c865db */
  if ((!C.cf&&!C.zf)) goto L_12c865db;
  /* 12c8658f push esi */
  push32((uint32_t)(ESI));
  /* 12c86590 push ebx */
  push32((uint32_t)(EBX));
  /* 12c86591 push eax */
  push32((uint32_t)(EAX));
  /* 12c86592 call 0x12c8abcb */
  push32(0x12c86597u); f_12c8abcb();
  /* 12c86597 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8659a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8659c je 0x12c865a3 */
  if (C.zf) goto L_12c865a3;
  /* 12c8659e mov dword ptr [ebp - 0x24], ebx */
  w32((uint32_t)(EBP + -0x24), (EBX));
  /* 12c865a1 jmp 0x12c865db */
  goto L_12c865db;
L_12c865a3:;
  /* 12c865a3 push esi */
  push32((uint32_t)(ESI));
  /* 12c865a4 call 0x12c8a716 */
  push32(0x12c865a9u); f_12c8a716();
  /* 12c865a9 pop ecx */
  ECX = (pop32());
  /* 12c865aa mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12c865ad cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c865af je 0x12c865db */
  if (C.zf) goto L_12c865db;
  /* 12c865b1 mov eax, dword ptr [ebx - 4] */
  EAX = (r32((uint32_t)(EBX + -0x4)));
  /* 12c865b4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 12c865b5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12c865b8 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c865ba jb 0x12c865be */
  if (C.cf) goto L_12c865be;
  /* 12c865bc mov eax, esi */
  EAX = (ESI);
L_12c865be:;
  /* 12c865be push eax */
  push32((uint32_t)(EAX));
  /* 12c865bf push ebx */
  push32((uint32_t)(EBX));
  /* 12c865c0 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 12c865c3 call 0x12c860b0 */
  push32(0x12c865c8u); f_12c860b0();
  /* 12c865c8 push ebx */
  push32((uint32_t)(EBX));
  /* 12c865c9 call 0x12c8a3c2 */
  push32(0x12c865ceu); f_12c8a3c2();
  /* 12c865ce mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12c865d1 push ebx */
  push32((uint32_t)(EBX));
  /* 12c865d2 push eax */
  push32((uint32_t)(EAX));
  /* 12c865d3 call 0x12c8a3ed */
  push32(0x12c865d8u); f_12c8a3ed();
  /* 12c865d8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c865db:;
  /* 12c865db cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c865de jne 0x12c8662b */
  if (!C.zf) goto L_12c8662b;
  /* 12c865e0 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c865e2 jne 0x12c865ea */
  if (!C.zf) goto L_12c865ea;
  /* 12c865e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c865e6 pop esi */
  ESI = (pop32());
  /* 12c865e7 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_12c865ea:;
  /* 12c865ea add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c865ed and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 12c865f0 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 12c865f3 push esi */
  push32((uint32_t)(ESI));
  /* 12c865f4 push edi */
  push32((uint32_t)(EDI));
  /* 12c865f5 push dword ptr [0x12caca04] */
  push32((uint32_t)(r32((uint32_t)(0x12caca04))));
  /* 12c865fb call dword ptr [0x12c8e060] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e060))), 0x12c86601u);
  /* 12c86601 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12c86604 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c86606 je 0x12c8662b */
  if (C.zf) goto L_12c8662b;
  /* 12c86608 mov eax, dword ptr [ebx - 4] */
  EAX = (r32((uint32_t)(EBX + -0x4)));
  /* 12c8660b dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 12c8660c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12c8660f cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c86611 jb 0x12c86615 */
  if (C.cf) goto L_12c86615;
  /* 12c86613 mov eax, esi */
  EAX = (ESI);
L_12c86615:;
  /* 12c86615 push eax */
  push32((uint32_t)(EAX));
  /* 12c86616 push ebx */
  push32((uint32_t)(EBX));
  /* 12c86617 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 12c8661a call 0x12c860b0 */
  push32(0x12c8661fu); f_12c860b0();
  /* 12c8661f push ebx */
  push32((uint32_t)(EBX));
  /* 12c86620 push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 12c86623 call 0x12c8a3ed */
  push32(0x12c86628u); f_12c8a3ed();
  /* 12c86628 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c8662b:;
  /* 12c8662b or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c8662f call 0x12c8668e */
  push32(0x12c86634u); f_12c8668e();
  /* 12c86634 cmp dword ptr [ebp - 0x28], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c86637 jne 0x12c8665b */
  if (!C.zf) goto L_12c8665b;
  /* 12c86639 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8663b jne 0x12c86640 */
  if (!C.zf) goto L_12c86640;
  /* 12c8663d push 1 */
  push32((uint32_t)(0x1u));
  /* 12c8663f pop esi */
  ESI = (pop32());
L_12c86640:;
  /* 12c86640 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c86643 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 12c86646 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 12c86649 push esi */
  push32((uint32_t)(ESI));
  /* 12c8664a push ebx */
  push32((uint32_t)(EBX));
  /* 12c8664b push edi */
  push32((uint32_t)(EDI));
  /* 12c8664c push dword ptr [0x12caca04] */
  push32((uint32_t)(r32((uint32_t)(0x12caca04))));
  /* 12c86652 call dword ptr [0x12c8e05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e05c))), 0x12c86658u);
  /* 12c86658 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12c8665b:;
  /* 12c8665b mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c8665e cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c86660 jne 0x12c86823 */
  if (!C.zf) { jmp_ind(0x12c86823u); return; }
  /* 12c86666 cmp dword ptr [0x12cac60c], edi */
  { uint32_t _a=(r32((uint32_t)(0x12cac60c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8666c je 0x12c86823 */
  if (C.zf) { jmp_ind(0x12c86823u); return; }
  /* 12c86672 push esi */
  push32((uint32_t)(ESI));
  /* 12c86673 call 0x12c8b680 */
  push32(0x12c86678u); f_12c8b680();
  /* 12c86678 pop ecx */
  ECX = (pop32());
  /* 12c86679 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8667b jne 0x12c8655e */
  if (!C.zf) goto L_12c8655e;
  /* 12c86681 jmp 0x12c86821 */
  jmp_ind(0x12c86821u); return;
  /* 12c86686 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12c86689 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8668c xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 12c8668e push 9 */
  push32((uint32_t)(0x9u));
  /* 12c86690 call 0x12c86ce9 */
  push32(0x12c86695u); f_12c86ce9();
  /* 12c86695 pop ecx */
  ECX = (pop32());
  /* 12c86696 ret  */
  ESPCHK(0x12c86503u, _esp0);
  ESP += 4; return;
L_12c86697:;
  /* 12c86697 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8669a jne 0x12c867e7 */
  if (!C.zf) goto L_12c867e7;
  /* 12c866a0 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c866a3 ja 0x12c866b7 */
  if ((!C.cf&&!C.zf)) goto L_12c866b7;
  /* 12c866a5 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c866a7 jbe 0x12c866b1 */
  if ((C.cf||C.zf)) goto L_12c866b1;
  /* 12c866a9 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c866ac and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 12c866af jmp 0x12c866b4 */
  goto L_12c866b4;
L_12c866b1:;
  /* 12c866b1 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12c866b3 pop esi */
  ESI = (pop32());
L_12c866b4:;
  /* 12c866b4 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_12c866b7:;
  /* 12c866b7 mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 12c866ba cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c866bd ja 0x12c867b6 */
  if ((!C.cf&&!C.zf)) goto L_12c867b6;
  /* 12c866c3 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c866c5 call 0x12c86c88 */
  push32(0x12c866cau); f_12c86c88();
  /* 12c866ca pop ecx */
  ECX = (pop32());
  /* 12c866cb mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12c866d2 lea eax, [ebp - 0x2c] */
  EAX = ((uint32_t)(EBP + -0x2c));
  /* 12c866d5 push eax */
  push32((uint32_t)(EAX));
  /* 12c866d6 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 12c866d9 push eax */
  push32((uint32_t)(EAX));
  /* 12c866da push ebx */
  push32((uint32_t)(EBX));
  /* 12c866db call 0x12c8b11d */
  push32(0x12c866e0u); f_12c8b11d();
  /* 12c866e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c866e3 mov edi, eax */
  EDI = (EAX);
  /* 12c866e5 mov dword ptr [ebp - 0x30], edi */
  w32((uint32_t)(EBP + -0x30), (EDI));
  /* 12c866e8 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 12c866ea je 0x12c8679a */
  if (C.zf) goto L_12c8679a;
  /* 12c866f0 cmp esi, dword ptr [0x12c92dec] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x12c92dec))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c866f6 jae 0x12c86754 */
  if (!C.cf) goto L_12c86754;
  /* 12c866f8 mov ebx, esi */
  EBX = (ESI);
  /* 12c866fa shr ebx, 4 */
  EBX = (sh_shr((uint32_t)(EBX), (0x4u)&0x1f, 32));
  /* 12c866fd push ebx */
  push32((uint32_t)(EBX));
  /* 12c866fe push edi */
  push32((uint32_t)(EDI));
  /* 12c866ff push dword ptr [ebp - 0x2c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x2c))));
  /* 12c86702 push dword ptr [ebp - 0x38] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x38))));
  /* 12c86705 call 0x12c8b4e5 */
  push32(0x12c8670au); f_12c8b4e5();
  /* 12c8670a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8670d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8670f je 0x12c86719 */
  if (C.zf) goto L_12c86719;
  /* 12c86711 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c86714 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12c86717 jmp 0x12c86751 */
  goto L_12c86751;
L_12c86719:;
  /* 12c86719 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8671a call 0x12c8b1b9 */
  push32(0x12c8671fu); f_12c8b1b9();
  /* 12c8671f pop ecx */
  ECX = (pop32());
  /* 12c86720 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12c86723 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c86725 je 0x12c86751 */
  if (C.zf) goto L_12c86751;
  /* 12c86727 movzx eax, byte ptr [edi] */
  EAX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 12c8672a shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12c8672d mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 12c86730 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c86732 jb 0x12c86736 */
  if (C.cf) goto L_12c86736;
  /* 12c86734 mov eax, esi */
  EAX = (ESI);
L_12c86736:;
  /* 12c86736 push eax */
  push32((uint32_t)(EAX));
  /* 12c86737 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c8673a push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 12c8673d call 0x12c860b0 */
  push32(0x12c86742u); f_12c860b0();
  /* 12c86742 push edi */
  push32((uint32_t)(EDI));
  /* 12c86743 push dword ptr [ebp - 0x2c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x2c))));
  /* 12c86746 push dword ptr [ebp - 0x38] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x38))));
  /* 12c86749 call 0x12c8b174 */
  push32(0x12c8674eu); f_12c8b174();
  /* 12c8674e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c86751:;
  /* 12c86751 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_12c86754:;
  /* 12c86754 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c86758 jne 0x12c867ad */
  if (!C.zf) goto L_12c867ad;
  /* 12c8675a push esi */
  push32((uint32_t)(ESI));
  /* 12c8675b push 0 */
  push32((uint32_t)(0x0u));
  /* 12c8675d push dword ptr [0x12caca04] */
  push32((uint32_t)(r32((uint32_t)(0x12caca04))));
  /* 12c86763 call dword ptr [0x12c8e060] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e060))), 0x12c86769u);
  /* 12c86769 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12c8676c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8676e je 0x12c867ad */
  if (C.zf) goto L_12c867ad;
  /* 12c86770 movzx eax, byte ptr [edi] */
  EAX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 12c86773 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12c86776 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 12c86779 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8677b jb 0x12c8677f */
  if (C.cf) goto L_12c8677f;
  /* 12c8677d mov eax, esi */
  EAX = (ESI);
L_12c8677f:;
  /* 12c8677f push eax */
  push32((uint32_t)(EAX));
  /* 12c86780 push ebx */
  push32((uint32_t)(EBX));
  /* 12c86781 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 12c86784 call 0x12c860b0 */
  push32(0x12c86789u); f_12c860b0();
  /* 12c86789 push edi */
  push32((uint32_t)(EDI));
  /* 12c8678a push dword ptr [ebp - 0x2c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x2c))));
  /* 12c8678d push dword ptr [ebp - 0x38] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x38))));
  /* 12c86790 call 0x12c8b174 */
  push32(0x12c86795u); f_12c8b174();
  /* 12c86795 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c86798 jmp 0x12c867ad */
  goto L_12c867ad;
L_12c8679a:;
  /* 12c8679a push esi */
  push32((uint32_t)(ESI));
  /* 12c8679b push ebx */
  push32((uint32_t)(EBX));
  /* 12c8679c push 0 */
  push32((uint32_t)(0x0u));
  /* 12c8679e push dword ptr [0x12caca04] */
  push32((uint32_t)(r32((uint32_t)(0x12caca04))));
  /* 12c867a4 call dword ptr [0x12c8e05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e05c))), 0x12c867aau);
  /* 12c867aa mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12c867ad:;
  /* 12c867ad or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c867b1 call 0x12c867dc */
  push32(0x12c867b6u); f_12c867dc();
L_12c867b6:;
  /* 12c867b6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c867b9 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c867bb jne 0x12c86823 */
  if (!C.zf) { jmp_ind(0x12c86823u); return; }
  /* 12c867bd cmp dword ptr [0x12cac60c], edi */
  { uint32_t _a=(r32((uint32_t)(0x12cac60c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c867c3 je 0x12c86823 */
  if (C.zf) { jmp_ind(0x12c86823u); return; }
  /* 12c867c5 push esi */
  push32((uint32_t)(ESI));
  /* 12c867c6 call 0x12c8b680 */
  push32(0x12c867cbu); f_12c8b680();
  /* 12c867cb pop ecx */
  ECX = (pop32());
  /* 12c867cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c867ce jne 0x12c866b7 */
  if (!C.zf) goto L_12c866b7;
  /* 12c867d4 jmp 0x12c86821 */
  jmp_ind(0x12c86821u); return;
  /* 12c867d6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12c867d9 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c867dc push 9 */
  push32((uint32_t)(0x9u));
  /* 12c867de call 0x12c86ce9 */
  push32(0x12c867e3u); f_12c86ce9();
  /* 12c867e3 pop ecx */
  ECX = (pop32());
  /* 12c867e4 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 12c867e6 ret  */
  ESPCHK(0x12c86503u, _esp0);
  ESP += 4; return;
L_12c867e7:;
  /* 12c867e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c867e9 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c867ec ja 0x12c8680a */
  if ((!C.cf&&!C.zf)) goto L_12c8680a;
  /* 12c867ee cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c867f0 jne 0x12c867f5 */
  if (!C.zf) goto L_12c867f5;
  /* 12c867f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c867f4 pop esi */
  ESI = (pop32());
L_12c867f5:;
  /* 12c867f5 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c867f8 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 12c867fb push esi */
  push32((uint32_t)(ESI));
  /* 12c867fc push ebx */
  push32((uint32_t)(EBX));
  /* 12c867fd push edi */
  push32((uint32_t)(EDI));
  /* 12c867fe push dword ptr [0x12caca04] */
  push32((uint32_t)(r32((uint32_t)(0x12caca04))));
  /* 12c86804 call dword ptr [0x12c8e05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e05c))), 0x12c8680au);
L_12c8680a:;
  /* 12c8680a cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8680c jne 0x12c86823 */
  if (!C.zf) { jmp_ind(0x12c86823u); return; }
}

/* FUN_1000668e @ 0x12c8668e (9 bytes, 4 insns) */
void f_12c8668e(void) {
  FTRACE(0x12c8668eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8668e push 9 */
  push32((uint32_t)(0x9u));
  /* 12c86690 call 0x12c86ce9 */
  push32(0x12c86695u); f_12c86ce9();
  /* 12c86695 pop ecx */
  ECX = (pop32());
  /* 12c86696 ret  */
  ESPCHK(0x12c8668eu, _esp0);
  ESP += 4; return;
}

/* FUN_100067dc @ 0x12c867dc (11 bytes, 5 insns) */
void f_12c867dc(void) {
  FTRACE(0x12c867dcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c867dc push 9 */
  push32((uint32_t)(0x9u));
  /* 12c867de call 0x12c86ce9 */
  push32(0x12c867e3u); f_12c86ce9();
  /* 12c867e3 pop ecx */
  ECX = (pop32());
  /* 12c867e4 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 12c867e6 ret  */
  ESPCHK(0x12c867dcu, _esp0);
  ESP += 4; return;
}

/* FUN_10006832 @ 0x12c86832 (214 bytes, 72 insns) */
void f_12c86832(void) {
  FTRACE(0x12c86832u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c86832 push ebp */
  push32((uint32_t)(EBP));
  /* 12c86833 mov ebp, esp */
  EBP = (ESP);
  /* 12c86835 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c86837 push 0x12c8e270 */
  push32((uint32_t)(0x12c8e270u));
  /* 12c8683c push 0x12c86a64 */
  push32((uint32_t)(0x12c86a64u));
  /* 12c86841 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12c86847 push eax */
  push32((uint32_t)(EAX));
  /* 12c86848 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12c8684f sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c86852 push ebx */
  push32((uint32_t)(EBX));
  /* 12c86853 push esi */
  push32((uint32_t)(ESI));
  /* 12c86854 push edi */
  push32((uint32_t)(EDI));
  /* 12c86855 mov eax, dword ptr [0x12caca08] */
  EAX = (r32((uint32_t)(0x12caca08)));
  /* 12c8685a cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8685d jne 0x12c868a5 */
  if (!C.zf) goto L_12c868a5;
  /* 12c8685f push 9 */
  push32((uint32_t)(0x9u));
  /* 12c86861 call 0x12c86c88 */
  push32(0x12c86866u); f_12c86c88();
  /* 12c86866 pop ecx */
  ECX = (pop32());
  /* 12c86867 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c8686b mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8686e push esi */
  push32((uint32_t)(ESI));
  /* 12c8686f call 0x12c8a3c2 */
  push32(0x12c86874u); f_12c8a3c2();
  /* 12c86874 pop ecx */
  ECX = (pop32());
  /* 12c86875 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12c86878 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8687a je 0x12c86887 */
  if (C.zf) goto L_12c86887;
  /* 12c8687c mov esi, dword ptr [esi - 4] */
  ESI = (r32((uint32_t)(ESI + -0x4)));
  /* 12c8687f sub esi, 9 */
  { uint32_t _a=(ESI),_b=(0x9u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c86882 mov dword ptr [ebp - 0x20], esi */
  w32((uint32_t)(EBP + -0x20), (ESI));
  /* 12c86885 jmp 0x12c8688a */
  goto L_12c8688a;
L_12c86887:;
  /* 12c86887 mov esi, dword ptr [ebp - 0x20] */
  ESI = (r32((uint32_t)(EBP + -0x20)));
L_12c8688a:;
  /* 12c8688a or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c8688e call 0x12c8689c */
  push32(0x12c86893u); f_12c8689c();
  /* 12c86893 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c86897 jmp 0x12c868ee */
  goto L_12c868ee;
  /* 12c86899 mov esi, dword ptr [ebp - 0x20] */
  ESI = (r32((uint32_t)(EBP + -0x20)));
  /* 12c8689c push 9 */
  push32((uint32_t)(0x9u));
  /* 12c8689e call 0x12c86ce9 */
  push32(0x12c868a3u); f_12c86ce9();
  /* 12c868a3 pop ecx */
  ECX = (pop32());
  /* 12c868a4 ret  */
  ESPCHK(0x12c86832u, _esp0);
  ESP += 4; return;
L_12c868a5:;
  /* 12c868a5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c868a8 jne 0x12c868f0 */
  if (!C.zf) goto L_12c868f0;
  /* 12c868aa push 9 */
  push32((uint32_t)(0x9u));
  /* 12c868ac call 0x12c86c88 */
  push32(0x12c868b1u); f_12c86c88();
  /* 12c868b1 pop ecx */
  ECX = (pop32());
  /* 12c868b2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12c868b9 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 12c868bc push eax */
  push32((uint32_t)(EAX));
  /* 12c868bd lea eax, [ebp - 0x2c] */
  EAX = ((uint32_t)(EBP + -0x2c));
  /* 12c868c0 push eax */
  push32((uint32_t)(EAX));
  /* 12c868c1 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c868c4 call 0x12c8b11d */
  push32(0x12c868c9u); f_12c8b11d();
  /* 12c868c9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c868cc mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12c868cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c868d1 je 0x12c868de */
  if (C.zf) goto L_12c868de;
  /* 12c868d3 movzx esi, byte ptr [eax] */
  ESI = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 12c868d6 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 12c868d9 mov dword ptr [ebp - 0x20], esi */
  w32((uint32_t)(EBP + -0x20), (ESI));
  /* 12c868dc jmp 0x12c868e1 */
  goto L_12c868e1;
L_12c868de:;
  /* 12c868de mov esi, dword ptr [ebp - 0x20] */
  ESI = (r32((uint32_t)(EBP + -0x20)));
L_12c868e1:;
  /* 12c868e1 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c868e5 call 0x12c86917 */
  push32(0x12c868eau); f_12c86917();
  /* 12c868ea cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_12c868ee:;
  /* 12c868ee jne 0x12c86903 */
  if (!C.zf) goto L_12c86903;
L_12c868f0:;
  /* 12c868f0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c868f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c868f5 push dword ptr [0x12caca04] */
  push32((uint32_t)(r32((uint32_t)(0x12caca04))));
  /* 12c868fb call dword ptr [0x12c8e064] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e064))), 0x12c86901u);
  /* 12c86901 mov esi, eax */
  ESI = (EAX);
L_12c86903:;
  /* 12c86903 mov eax, esi */
  EAX = (ESI);
  /* 12c86905 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
}

/* FUN_1000689c @ 0x12c8689c (9 bytes, 4 insns) */
void f_12c8689c(void) {
  FTRACE(0x12c8689cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8689c push 9 */
  push32((uint32_t)(0x9u));
  /* 12c8689e call 0x12c86ce9 */
  push32(0x12c868a3u); f_12c86ce9();
  /* 12c868a3 pop ecx */
  ECX = (pop32());
  /* 12c868a4 ret  */
  ESPCHK(0x12c8689cu, _esp0);
  ESP += 4; return;
}

/* FUN_10006917 @ 0x12c86917 (9 bytes, 4 insns) */
void f_12c86917(void) {
  FTRACE(0x12c86917u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c86917 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c86919 call 0x12c86ce9 */
  push32(0x12c8691eu); f_12c86ce9();
  /* 12c8691e pop ecx */
  ECX = (pop32());
  /* 12c8691f ret  */
  ESPCHK(0x12c86917u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x12c86920 (18 bytes, 6 insns) */
void f_12c86920(void) {
  FTRACE(0x12c86920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c86920 push dword ptr [0x12cac60c] */
  push32((uint32_t)(r32((uint32_t)(0x12cac60c))));
  /* 12c86926 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 12c8692a call 0x12c86932 */
  push32(0x12c8692fu); f_12c86932();
  /* 12c8692f pop ecx */
  ECX = (pop32());
  /* 12c86930 pop ecx */
  ECX = (pop32());
  /* 12c86931 ret  */
  ESPCHK(0x12c86920u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x12c86932 (44 bytes, 16 insns) */
void f_12c86932(void) {
  FTRACE(0x12c86932u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c86932 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c86937 ja 0x12c8695b */
  if ((!C.cf&&!C.zf)) goto L_12c8695b;
L_12c86939:;
  /* 12c86939 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 12c8693d call 0x12c8695e */
  push32(0x12c86942u); f_12c8695e();
  /* 12c86942 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c86944 pop ecx */
  ECX = (pop32());
  /* 12c86945 jne 0x12c8695d */
  if (!C.zf) goto L_12c8695d;
  /* 12c86947 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8694b je 0x12c8695d */
  if (C.zf) goto L_12c8695d;
  /* 12c8694d push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 12c86951 call 0x12c8b680 */
  push32(0x12c86956u); f_12c8b680();
  /* 12c86956 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c86958 pop ecx */
  ECX = (pop32());
  /* 12c86959 jne 0x12c86939 */
  if (!C.zf) goto L_12c86939;
L_12c8695b:;
  /* 12c8695b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c8695d:;
  /* 12c8695d ret  */
  ESPCHK(0x12c86932u, _esp0);
  ESP += 4; return;
}

/* FUN_1000695e @ 0x12c8695e (231 bytes, 81 insns) */
void f_12c8695e(void) {
  FTRACE(0x12c8695eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8695e push ebp */
  push32((uint32_t)(EBP));
  /* 12c8695f mov ebp, esp */
  EBP = (ESP);
  /* 12c86961 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c86963 push 0x12c8e288 */
  push32((uint32_t)(0x12c8e288u));
  /* 12c86968 push 0x12c86a64 */
  push32((uint32_t)(0x12c86a64u));
  /* 12c8696d mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12c86973 push eax */
  push32((uint32_t)(EAX));
  /* 12c86974 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12c8697b sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8697e push ebx */
  push32((uint32_t)(EBX));
  /* 12c8697f push esi */
  push32((uint32_t)(ESI));
  /* 12c86980 push edi */
  push32((uint32_t)(EDI));
  /* 12c86981 mov eax, dword ptr [0x12caca08] */
  EAX = (r32((uint32_t)(0x12caca08)));
  /* 12c86986 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c86989 jne 0x12c869ce */
  if (!C.zf) goto L_12c869ce;
  /* 12c8698b mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8698e cmp esi, dword ptr [0x12caca00] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x12caca00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c86994 ja 0x12c86a2d */
  if ((!C.cf&&!C.zf)) goto L_12c86a2d;
  /* 12c8699a push 9 */
  push32((uint32_t)(0x9u));
  /* 12c8699c call 0x12c86c88 */
  push32(0x12c869a1u); f_12c86c88();
  /* 12c869a1 pop ecx */
  ECX = (pop32());
  /* 12c869a2 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c869a6 push esi */
  push32((uint32_t)(ESI));
  /* 12c869a7 call 0x12c8a716 */
  push32(0x12c869acu); f_12c8a716();
  /* 12c869ac pop ecx */
  ECX = (pop32());
  /* 12c869ad mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12c869b0 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c869b4 call 0x12c869c5 */
  push32(0x12c869b9u); f_12c869c5();
  /* 12c869b9 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c869bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c869be je 0x12c86a2d */
  if (C.zf) goto L_12c86a2d;
  /* 12c869c0 jmp 0x12c86a4b */
  jmp_ind(0x12c86a4bu); return;
  /* 12c869c5 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c869c7 call 0x12c86ce9 */
  push32(0x12c869ccu); f_12c86ce9();
  /* 12c869cc pop ecx */
  ECX = (pop32());
  /* 12c869cd ret  */
  ESPCHK(0x12c8695eu, _esp0);
  ESP += 4; return;
L_12c869ce:;
  /* 12c869ce cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c869d1 jne 0x12c86a2d */
  if (!C.zf) goto L_12c86a2d;
  /* 12c869d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c869d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c869d8 je 0x12c869e2 */
  if (C.zf) goto L_12c869e2;
  /* 12c869da lea esi, [eax + 0xf] */
  ESI = ((uint32_t)(EAX + 0xf));
  /* 12c869dd and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 12c869e0 jmp 0x12c869e5 */
  goto L_12c869e5;
L_12c869e2:;
  /* 12c869e2 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12c869e4 pop esi */
  ESI = (pop32());
L_12c869e5:;
  /* 12c869e5 mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
  /* 12c869e8 cmp esi, dword ptr [0x12c92dec] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x12c92dec))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c869ee ja 0x12c86a1e */
  if ((!C.cf&&!C.zf)) goto L_12c86a1e;
  /* 12c869f0 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c869f2 call 0x12c86c88 */
  push32(0x12c869f7u); f_12c86c88();
  /* 12c869f7 pop ecx */
  ECX = (pop32());
  /* 12c869f8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12c869ff mov eax, esi */
  EAX = (ESI);
  /* 12c86a01 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12c86a04 push eax */
  push32((uint32_t)(EAX));
  /* 12c86a05 call 0x12c8b1b9 */
  push32(0x12c86a0au); f_12c8b1b9();
  /* 12c86a0a pop ecx */
  ECX = (pop32());
  /* 12c86a0b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12c86a0e or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c86a12 call 0x12c86a24 */
  push32(0x12c86a17u); f_12c86a24();
  /* 12c86a17 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c86a1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c86a1c jne 0x12c86a4b */
  if (!C.zf) { jmp_ind(0x12c86a4bu); return; }
L_12c86a1e:;
  /* 12c86a1e push esi */
  push32((uint32_t)(ESI));
  /* 12c86a1f jmp 0x12c86a3d */
  goto L_12c86a3d;
  /* 12c86a21 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12c86a24 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c86a26 call 0x12c86ce9 */
  push32(0x12c86a2bu); f_12c86ce9();
  /* 12c86a2b pop ecx */
  ECX = (pop32());
  /* 12c86a2c ret  */
  ESPCHK(0x12c8695eu, _esp0);
  ESP += 4; return;
L_12c86a2d:;
  /* 12c86a2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c86a30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c86a32 jne 0x12c86a37 */
  if (!C.zf) goto L_12c86a37;
  /* 12c86a34 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c86a36 pop eax */
  EAX = (pop32());
L_12c86a37:;
  /* 12c86a37 add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c86a3a and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 12c86a3c push eax */
  push32((uint32_t)(EAX));
L_12c86a3d:;
  /* 12c86a3d push 0 */
  push32((uint32_t)(0x0u));
  /* 12c86a3f push dword ptr [0x12caca04] */
  push32((uint32_t)(r32((uint32_t)(0x12caca04))));
}

/* FUN_100069c5 @ 0x12c869c5 (9 bytes, 4 insns) */
void f_12c869c5(void) {
  FTRACE(0x12c869c5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c869c5 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c869c7 call 0x12c86ce9 */
  push32(0x12c869ccu); f_12c86ce9();
  /* 12c869cc pop ecx */
  ECX = (pop32());
  /* 12c869cd ret  */
  ESPCHK(0x12c869c5u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a24 @ 0x12c86a24 (9 bytes, 4 insns) */
void f_12c86a24(void) {
  FTRACE(0x12c86a24u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c86a24 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c86a26 call 0x12c86ce9 */
  push32(0x12c86a2bu); f_12c86ce9();
  /* 12c86a2b pop ecx */
  ECX = (pop32());
  /* 12c86a2c ret  */
  ESPCHK(0x12c86a24u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b21 @ 0x12c86b21 (27 bytes, 11 insns) */
void f_12c86b21(void) {
  FTRACE(0x12c86b21u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c86b21 push ebp */
  push32((uint32_t)(EBP));
  /* 12c86b22 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c86b26 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 12c86b28 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12c86b2b push eax */
  push32((uint32_t)(EAX));
  /* 12c86b2c mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 12c86b2f push eax */
  push32((uint32_t)(EAX));
  /* 12c86b30 call 0x12c854e2 */
  push32(0x12c86b35u); f_12c854e2();
  /* 12c86b35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c86b38 pop ebp */
  EBP = (pop32());
  /* 12c86b39 ret 4 */
  ESPCHK(0x12c86b21u, _esp0);
  ESP += 8; return;
}

/* FUN_10006b3c @ 0x12c86b3c (86 bytes, 32 insns) */
void f_12c86b3c(void) {
  FTRACE(0x12c86b3cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c86b3c push ebp */
  push32((uint32_t)(EBP));
  /* 12c86b3d mov ebp, esp */
  EBP = (ESP);
  /* 12c86b3f push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c86b41 push 0x12c8e2a0 */
  push32((uint32_t)(0x12c8e2a0u));
  /* 12c86b46 push 0x12c86a64 */
  push32((uint32_t)(0x12c86a64u));
  /* 12c86b4b mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12c86b51 push eax */
  push32((uint32_t)(EAX));
  /* 12c86b52 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12c86b59 push ecx */
  push32((uint32_t)(ECX));
  /* 12c86b5a push ecx */
  push32((uint32_t)(ECX));
  /* 12c86b5b push ebx */
  push32((uint32_t)(EBX));
  /* 12c86b5c push esi */
  push32((uint32_t)(ESI));
  /* 12c86b5d push edi */
  push32((uint32_t)(EDI));
  /* 12c86b5e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12c86b61 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 12c86b63 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 12c86b66 call 0x12c882c1 */
  push32(0x12c86b6bu); f_12c882c1();
  /* 12c86b6b cmp dword ptr [eax + 0x60], esi */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x60))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c86b6e je 0x12c86b8f */
  if (C.zf) goto L_12c86b8f;
  /* 12c86b70 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12c86b77 call 0x12c882c1 */
  push32(0x12c86b7cu); f_12c882c1();
  /* 12c86b7c call dword ptr [eax + 0x60] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x60))), 0x12c86b7fu);
  /* 12c86b7f mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 12c86b82 jmp 0x12c86b8f */
  goto L_12c86b8f;
  /* 12c86b84 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c86b86 pop eax */
  EAX = (pop32());
  /* 12c86b87 ret  */
  ESPCHK(0x12c86b3cu, _esp0);
  ESP += 4; return;
  /* 12c86b88 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12c86b8b and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_12c86b8f:;
  /* 12c86b8f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c86b93 call 0x12c86b98 */
  call_ind(0x12c86b98u, 0x12c86b98u);
  /* 12c86b98 jmp 0x12c8b69b */
  f_12c8b69b(); return;
}

/* FUN_10006b9d @ 0x12c86b9d (79 bytes, 29 insns) */
void f_12c86b9d(void) {
  FTRACE(0x12c86b9du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c86b9d push ebp */
  push32((uint32_t)(EBP));
  /* 12c86b9e mov ebp, esp */
  EBP = (ESP);
  /* 12c86ba0 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c86ba2 push 0x12c8e2b8 */
  push32((uint32_t)(0x12c8e2b8u));
  /* 12c86ba7 push 0x12c86a64 */
  push32((uint32_t)(0x12c86a64u));
  /* 12c86bac mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12c86bb2 push eax */
  push32((uint32_t)(EAX));
  /* 12c86bb3 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12c86bba push ecx */
  push32((uint32_t)(ECX));
  /* 12c86bbb push ecx */
  push32((uint32_t)(ECX));
  /* 12c86bbc push ebx */
  push32((uint32_t)(EBX));
  /* 12c86bbd push esi */
  push32((uint32_t)(ESI));
  /* 12c86bbe push edi */
  push32((uint32_t)(EDI));
  /* 12c86bbf mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12c86bc2 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c86bc6 mov eax, dword ptr [0x12c90620] */
  EAX = (r32((uint32_t)(0x12c90620)));
  /* 12c86bcb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c86bcd je 0x12c86be5 */
  if (C.zf) goto L_12c86be5;
  /* 12c86bcf mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12c86bd6 call eax */
  call_ind((uint32_t)(EAX), 0x12c86bd8u);
  /* 12c86bd8 jmp 0x12c86be1 */
  goto L_12c86be1;
  /* 12c86bda push 1 */
  push32((uint32_t)(0x1u));
  /* 12c86bdc pop eax */
  EAX = (pop32());
  /* 12c86bdd ret  */
  ESPCHK(0x12c86b9du, _esp0);
  ESP += 4; return;
  /* 12c86bde mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
L_12c86be1:;
  /* 12c86be1 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_12c86be5:;
  /* 12c86be5 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c86be9 call 0x12c86bee */
  call_ind(0x12c86beeu, 0x12c86beeu);
  /* 12c86bee jmp 0x12c86b3c */
  f_12c86b3c(); return;
}

/* FUN_10006bf3 @ 0x12c86bf3 (41 bytes, 12 insns) */
void f_12c86bf3(void) {
  FTRACE(0x12c86bf3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c86bf3 push esi */
  push32((uint32_t)(ESI));
  /* 12c86bf4 mov esi, dword ptr [0x12c8e068] */
  ESI = (r32((uint32_t)(0x12c8e068)));
  /* 12c86bfa push dword ptr [0x12c90668] */
  push32((uint32_t)(r32((uint32_t)(0x12c90668))));
  /* 12c86c00 call esi */
  call_ind((uint32_t)(ESI), 0x12c86c02u);
  /* 12c86c02 push dword ptr [0x12c90658] */
  push32((uint32_t)(r32((uint32_t)(0x12c90658))));
  /* 12c86c08 call esi */
  call_ind((uint32_t)(ESI), 0x12c86c0au);
  /* 12c86c0a push dword ptr [0x12c90648] */
  push32((uint32_t)(r32((uint32_t)(0x12c90648))));
  /* 12c86c10 call esi */
  call_ind((uint32_t)(ESI), 0x12c86c12u);
  /* 12c86c12 push dword ptr [0x12c90628] */
  push32((uint32_t)(r32((uint32_t)(0x12c90628))));
  /* 12c86c18 call esi */
  call_ind((uint32_t)(ESI), 0x12c86c1au);
  /* 12c86c1a pop esi */
  ESI = (pop32());
  /* 12c86c1b ret  */
  ESPCHK(0x12c86bf3u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c1c @ 0x12c86c1c (108 bytes, 34 insns) */
void f_12c86c1c(void) {
  FTRACE(0x12c86c1cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c86c1c push esi */
  push32((uint32_t)(ESI));
  /* 12c86c1d push edi */
  push32((uint32_t)(EDI));
  /* 12c86c1e mov edi, dword ptr [0x12c8e06c] */
  EDI = (r32((uint32_t)(0x12c8e06c)));
  /* 12c86c24 mov esi, 0x12c90624 */
  ESI = (0x12c90624u);
L_12c86c29:;
  /* 12c86c29 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 12c86c2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c86c2d je 0x12c86c5a */
  if (C.zf) goto L_12c86c5a;
  /* 12c86c2f cmp esi, 0x12c90668 */
  { uint32_t _a=(ESI),_b=(0x12c90668u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c86c35 je 0x12c86c5a */
  if (C.zf) goto L_12c86c5a;
  /* 12c86c37 cmp esi, 0x12c90658 */
  { uint32_t _a=(ESI),_b=(0x12c90658u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c86c3d je 0x12c86c5a */
  if (C.zf) goto L_12c86c5a;
  /* 12c86c3f cmp esi, 0x12c90648 */
  { uint32_t _a=(ESI),_b=(0x12c90648u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c86c45 je 0x12c86c5a */
  if (C.zf) goto L_12c86c5a;
  /* 12c86c47 cmp esi, 0x12c90628 */
  { uint32_t _a=(ESI),_b=(0x12c90628u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c86c4d je 0x12c86c5a */
  if (C.zf) goto L_12c86c5a;
  /* 12c86c4f push eax */
  push32((uint32_t)(EAX));
  /* 12c86c50 call edi */
  call_ind((uint32_t)(EDI), 0x12c86c52u);
  /* 12c86c52 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 12c86c54 call 0x12c85e59 */
  push32(0x12c86c59u); f_12c85e59();
  /* 12c86c59 pop ecx */
  ECX = (pop32());
L_12c86c5a:;
  /* 12c86c5a add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c86c5d cmp esi, 0x12c906e4 */
  { uint32_t _a=(ESI),_b=(0x12c906e4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c86c63 jl 0x12c86c29 */
  if ((C.sf!=C.of)) goto L_12c86c29;
  /* 12c86c65 push dword ptr [0x12c90648] */
  push32((uint32_t)(r32((uint32_t)(0x12c90648))));
  /* 12c86c6b call edi */
  call_ind((uint32_t)(EDI), 0x12c86c6du);
  /* 12c86c6d push dword ptr [0x12c90658] */
  push32((uint32_t)(r32((uint32_t)(0x12c90658))));
  /* 12c86c73 call edi */
  call_ind((uint32_t)(EDI), 0x12c86c75u);
  /* 12c86c75 push dword ptr [0x12c90668] */
  push32((uint32_t)(r32((uint32_t)(0x12c90668))));
  /* 12c86c7b call edi */
  call_ind((uint32_t)(EDI), 0x12c86c7du);
  /* 12c86c7d push dword ptr [0x12c90628] */
  push32((uint32_t)(r32((uint32_t)(0x12c90628))));
  /* 12c86c83 call edi */
  call_ind((uint32_t)(EDI), 0x12c86c85u);
  /* 12c86c85 pop edi */
  EDI = (pop32());
  /* 12c86c86 pop esi */
  ESI = (pop32());
  /* 12c86c87 ret  */
  ESPCHK(0x12c86c1cu, _esp0);
  ESP += 4; return;
}

/* FUN_10006c88 @ 0x12c86c88 (97 bytes, 37 insns) */
void f_12c86c88(void) {
  FTRACE(0x12c86c88u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c86c88 push ebp */
  push32((uint32_t)(EBP));
  /* 12c86c89 mov ebp, esp */
  EBP = (ESP);
  /* 12c86c8b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c86c8e push esi */
  push32((uint32_t)(ESI));
  /* 12c86c8f cmp dword ptr [eax*4 + 0x12c90624], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x12c90624))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c86c97 lea esi, [eax*4 + 0x12c90624] */
  ESI = ((uint32_t)(EAX*4 + 0x12c90624));
  /* 12c86c9e jne 0x12c86cde */
  if (!C.zf) goto L_12c86cde;
  /* 12c86ca0 push edi */
  push32((uint32_t)(EDI));
  /* 12c86ca1 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12c86ca3 call 0x12c86920 */
  push32(0x12c86ca8u); f_12c86920();
  /* 12c86ca8 mov edi, eax */
  EDI = (EAX);
  /* 12c86caa pop ecx */
  ECX = (pop32());
  /* 12c86cab test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 12c86cad jne 0x12c86cb7 */
  if (!C.zf) goto L_12c86cb7;
  /* 12c86caf push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12c86cb1 call 0x12c85e26 */
  push32(0x12c86cb6u); f_12c85e26();
  /* 12c86cb6 pop ecx */
  ECX = (pop32());
L_12c86cb7:;
  /* 12c86cb7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12c86cb9 call 0x12c86c88 */
  push32(0x12c86cbeu); f_12c86c88();
  /* 12c86cbe cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c86cc1 pop ecx */
  ECX = (pop32());
  /* 12c86cc2 push edi */
  push32((uint32_t)(EDI));
  /* 12c86cc3 jne 0x12c86ccf */
  if (!C.zf) goto L_12c86ccf;
  /* 12c86cc5 call dword ptr [0x12c8e068] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e068))), 0x12c86ccbu);
  /* 12c86ccb mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 12c86ccd jmp 0x12c86cd5 */
  goto L_12c86cd5;
L_12c86ccf:;
  /* 12c86ccf call 0x12c85e59 */
  push32(0x12c86cd4u); f_12c85e59();
  /* 12c86cd4 pop ecx */
  ECX = (pop32());
L_12c86cd5:;
  /* 12c86cd5 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12c86cd7 call 0x12c86ce9 */
  push32(0x12c86cdcu); f_12c86ce9();
  /* 12c86cdc pop ecx */
  ECX = (pop32());
  /* 12c86cdd pop edi */
  EDI = (pop32());
L_12c86cde:;
  /* 12c86cde push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 12c86ce0 call dword ptr [0x12c8e070] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e070))), 0x12c86ce6u);
  /* 12c86ce6 pop esi */
  ESI = (pop32());
  /* 12c86ce7 pop ebp */
  EBP = (pop32());
  /* 12c86ce8 ret  */
  ESPCHK(0x12c86c88u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ce9 @ 0x12c86ce9 (21 bytes, 7 insns) */
void f_12c86ce9(void) {
  FTRACE(0x12c86ce9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c86ce9 push ebp */
  push32((uint32_t)(EBP));
  /* 12c86cea mov ebp, esp */
  EBP = (ESP);
  /* 12c86cec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c86cef push dword ptr [eax*4 + 0x12c90624] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x12c90624))));
  /* 12c86cf6 call dword ptr [0x12c8e074] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e074))), 0x12c86cfcu);
  /* 12c86cfc pop ebp */
  EBP = (pop32());
  /* 12c86cfd ret  */
  ESPCHK(0x12c86ce9u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x12c86d00 (129 bytes, 56 insns) */
void f_12c86d00(void) {
  FTRACE(0x12c86d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c86d00 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c86d04 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c86d08 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12c86d0e jne 0x12c86d4c */
  if (!C.zf) goto L_12c86d4c;
L_12c86d10:;
  /* 12c86d10 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c86d12 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c86d14 jne 0x12c86d44 */
  if (!C.zf) goto L_12c86d44;
  /* 12c86d16 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12c86d18 je 0x12c86d40 */
  if (C.zf) goto L_12c86d40;
  /* 12c86d1a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c86d1d jne 0x12c86d44 */
  if (!C.zf) goto L_12c86d44;
  /* 12c86d1f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12c86d21 je 0x12c86d40 */
  if (C.zf) goto L_12c86d40;
  /* 12c86d23 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12c86d26 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c86d29 jne 0x12c86d44 */
  if (!C.zf) goto L_12c86d44;
  /* 12c86d2b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12c86d2d je 0x12c86d40 */
  if (C.zf) goto L_12c86d40;
  /* 12c86d2f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c86d32 jne 0x12c86d44 */
  if (!C.zf) goto L_12c86d44;
  /* 12c86d34 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c86d37 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c86d3a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12c86d3c jne 0x12c86d10 */
  if (!C.zf) goto L_12c86d10;
  /* 12c86d3e mov edi, edi */
  EDI = (EDI);
L_12c86d40:;
  /* 12c86d40 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c86d42 ret  */
  ESPCHK(0x12c86d00u, _esp0);
  ESP += 4; return;
  /* 12c86d43 nop  */
  /* nop */
L_12c86d44:;
  /* 12c86d44 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c86d46 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12c86d48 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c86d49 ret  */
  ESPCHK(0x12c86d00u, _esp0);
  ESP += 4; return;
  /* 12c86d4a mov edi, edi */
  EDI = (EDI);
L_12c86d4c:;
  /* 12c86d4c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 12c86d52 je 0x12c86d68 */
  if (C.zf) goto L_12c86d68;
  /* 12c86d54 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c86d56 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12c86d57 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c86d59 jne 0x12c86d44 */
  if (!C.zf) goto L_12c86d44;
  /* 12c86d5b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12c86d5c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12c86d5e je 0x12c86d40 */
  if (C.zf) goto L_12c86d40;
  /* 12c86d60 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 12c86d66 je 0x12c86d10 */
  if (C.zf) goto L_12c86d10;
L_12c86d68:;
  /* 12c86d68 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 12c86d6b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c86d6e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c86d70 jne 0x12c86d44 */
  if (!C.zf) goto L_12c86d44;
  /* 12c86d72 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12c86d74 je 0x12c86d40 */
  if (C.zf) goto L_12c86d40;
  /* 12c86d76 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c86d79 jne 0x12c86d44 */
  if (!C.zf) goto L_12c86d44;
  /* 12c86d7b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12c86d7d je 0x12c86d40 */
  if (C.zf) goto L_12c86d40;
  /* 12c86d7f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c86d82 jmp 0x12c86d10 */
  goto L_12c86d10;
}

/* FUN_10006e40 @ 0x12c86e40 (47 bytes, 17 insns) */
void f_12c86e40(void) {
  FTRACE(0x12c86e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c86e40 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c86e44 mov ecx, 0x12c906f0 */
  ECX = (0x12c906f0u);
  /* 12c86e49 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c86e4b jb 0x12c86e64 */
  if (C.cf) goto L_12c86e64;
  /* 12c86e4d cmp eax, 0x12c90950 */
  { uint32_t _a=(EAX),_b=(0x12c90950u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c86e52 ja 0x12c86e64 */
  if ((!C.cf&&!C.zf)) goto L_12c86e64;
  /* 12c86e54 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c86e56 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12c86e59 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c86e5c push eax */
  push32((uint32_t)(EAX));
  /* 12c86e5d call 0x12c86c88 */
  push32(0x12c86e62u); f_12c86c88();
  /* 12c86e62 pop ecx */
  ECX = (pop32());
  /* 12c86e63 ret  */
  ESPCHK(0x12c86e40u, _esp0);
  ESP += 4; return;
L_12c86e64:;
  /* 12c86e64 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c86e67 push eax */
  push32((uint32_t)(EAX));
  /* 12c86e68 call dword ptr [0x12c8e070] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e070))), 0x12c86e6eu);
  /* 12c86e6e ret  */
  ESPCHK(0x12c86e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e6f @ 0x12c86e6f (35 bytes, 13 insns) */
void f_12c86e6f(void) {
  FTRACE(0x12c86e6fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c86e6f mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c86e73 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c86e76 jge 0x12c86e83 */
  if ((C.sf==C.of)) goto L_12c86e83;
  /* 12c86e78 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c86e7b push eax */
  push32((uint32_t)(EAX));
  /* 12c86e7c call 0x12c86c88 */
  push32(0x12c86e81u); f_12c86c88();
  /* 12c86e81 pop ecx */
  ECX = (pop32());
  /* 12c86e82 ret  */
  ESPCHK(0x12c86e6fu, _esp0);
  ESP += 4; return;
L_12c86e83:;
  /* 12c86e83 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c86e87 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c86e8a push eax */
  push32((uint32_t)(EAX));
  /* 12c86e8b call dword ptr [0x12c8e070] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e070))), 0x12c86e91u);
  /* 12c86e91 ret  */
  ESPCHK(0x12c86e6fu, _esp0);
  ESP += 4; return;
}

/* FUN_10006e92 @ 0x12c86e92 (47 bytes, 17 insns) */
void f_12c86e92(void) {
  FTRACE(0x12c86e92u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c86e92 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c86e96 mov ecx, 0x12c906f0 */
  ECX = (0x12c906f0u);
  /* 12c86e9b cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c86e9d jb 0x12c86eb6 */
  if (C.cf) goto L_12c86eb6;
  /* 12c86e9f cmp eax, 0x12c90950 */
  { uint32_t _a=(EAX),_b=(0x12c90950u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c86ea4 ja 0x12c86eb6 */
  if ((!C.cf&&!C.zf)) goto L_12c86eb6;
  /* 12c86ea6 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c86ea8 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12c86eab add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c86eae push eax */
  push32((uint32_t)(EAX));
  /* 12c86eaf call 0x12c86ce9 */
  push32(0x12c86eb4u); f_12c86ce9();
  /* 12c86eb4 pop ecx */
  ECX = (pop32());
  /* 12c86eb5 ret  */
  ESPCHK(0x12c86e92u, _esp0);
  ESP += 4; return;
L_12c86eb6:;
  /* 12c86eb6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c86eb9 push eax */
  push32((uint32_t)(EAX));
  /* 12c86eba call dword ptr [0x12c8e074] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e074))), 0x12c86ec0u);
  /* 12c86ec0 ret  */
  ESPCHK(0x12c86e92u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ec1 @ 0x12c86ec1 (35 bytes, 13 insns) */
void f_12c86ec1(void) {
  FTRACE(0x12c86ec1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c86ec1 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c86ec5 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c86ec8 jge 0x12c86ed5 */
  if ((C.sf==C.of)) goto L_12c86ed5;
  /* 12c86eca add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c86ecd push eax */
  push32((uint32_t)(EAX));
  /* 12c86ece call 0x12c86ce9 */
  push32(0x12c86ed3u); f_12c86ce9();
  /* 12c86ed3 pop ecx */
  ECX = (pop32());
  /* 12c86ed4 ret  */
  ESPCHK(0x12c86ec1u, _esp0);
  ESP += 4; return;
L_12c86ed5:;
  /* 12c86ed5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c86ed9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c86edc push eax */
  push32((uint32_t)(EAX));
  /* 12c86edd call dword ptr [0x12c8e074] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e074))), 0x12c86ee3u);
  /* 12c86ee3 ret  */
  ESPCHK(0x12c86ec1u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ee4 @ 0x12c86ee4 (93 bytes, 32 insns) */
void f_12c86ee4(void) {
  FTRACE(0x12c86ee4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c86ee4 push esi */
  push32((uint32_t)(ESI));
  /* 12c86ee5 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 12c86ee9 cmp esi, dword ptr [0x12cacb20] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x12cacb20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c86eef jae 0x12c86f29 */
  if (!C.cf) goto L_12c86f29;
  /* 12c86ef1 mov ecx, esi */
  ECX = (ESI);
  /* 12c86ef3 mov eax, esi */
  EAX = (ESI);
  /* 12c86ef5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12c86ef8 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12c86efb mov ecx, dword ptr [ecx*4 + 0x12caca20] */
  ECX = (r32((uint32_t)(ECX*4 + 0x12caca20)));
  /* 12c86f02 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 12c86f05 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 12c86f0a je 0x12c86f29 */
  if (C.zf) goto L_12c86f29;
  /* 12c86f0c push edi */
  push32((uint32_t)(EDI));
  /* 12c86f0d push esi */
  push32((uint32_t)(ESI));
  /* 12c86f0e call 0x12c8bad0 */
  push32(0x12c86f13u); f_12c8bad0();
  /* 12c86f13 push esi */
  push32((uint32_t)(ESI));
  /* 12c86f14 call 0x12c86f41 */
  push32(0x12c86f19u); f_12c86f41();
  /* 12c86f19 push esi */
  push32((uint32_t)(ESI));
  /* 12c86f1a mov edi, eax */
  EDI = (EAX);
  /* 12c86f1c call 0x12c8bb2f */
  push32(0x12c86f21u); f_12c8bb2f();
  /* 12c86f21 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c86f24 mov eax, edi */
  EAX = (EDI);
  /* 12c86f26 pop edi */
  EDI = (pop32());
  /* 12c86f27 pop esi */
  ESI = (pop32());
  /* 12c86f28 ret  */
  ESPCHK(0x12c86ee4u, _esp0);
  ESP += 4; return;
L_12c86f29:;
  /* 12c86f29 call 0x12c874b3 */
  push32(0x12c86f2eu); f_12c874b3();
  /* 12c86f2e mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12c86f34 call 0x12c874bc */
  push32(0x12c86f39u); f_12c874bc();
  /* 12c86f39 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 12c86f3c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c86f3f pop esi */
  ESI = (pop32());
  /* 12c86f40 ret  */
  ESPCHK(0x12c86ee4u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f41 @ 0x12c86f41 (131 bytes, 52 insns) */
void f_12c86f41(void) {
  FTRACE(0x12c86f41u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c86f41 push esi */
  push32((uint32_t)(ESI));
  /* 12c86f42 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 12c86f46 push edi */
  push32((uint32_t)(EDI));
  /* 12c86f47 push esi */
  push32((uint32_t)(ESI));
  /* 12c86f48 call 0x12c8ba8e */
  push32(0x12c86f4du); f_12c8ba8e();
  /* 12c86f4d cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c86f50 pop ecx */
  ECX = (pop32());
  /* 12c86f51 je 0x12c86f8f */
  if (C.zf) goto L_12c86f8f;
  /* 12c86f53 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c86f56 je 0x12c86f5d */
  if (C.zf) goto L_12c86f5d;
  /* 12c86f58 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c86f5b jne 0x12c86f73 */
  if (!C.zf) goto L_12c86f73;
L_12c86f5d:;
  /* 12c86f5d push 2 */
  push32((uint32_t)(0x2u));
  /* 12c86f5f call 0x12c8ba8e */
  push32(0x12c86f64u); f_12c8ba8e();
  /* 12c86f64 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c86f66 mov edi, eax */
  EDI = (EAX);
  /* 12c86f68 call 0x12c8ba8e */
  push32(0x12c86f6du); f_12c8ba8e();
  /* 12c86f6d pop ecx */
  ECX = (pop32());
  /* 12c86f6e cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c86f70 pop ecx */
  ECX = (pop32());
  /* 12c86f71 je 0x12c86f8f */
  if (C.zf) goto L_12c86f8f;
L_12c86f73:;
  /* 12c86f73 push esi */
  push32((uint32_t)(ESI));
  /* 12c86f74 call 0x12c8ba8e */
  push32(0x12c86f79u); f_12c8ba8e();
  /* 12c86f79 pop ecx */
  ECX = (pop32());
  /* 12c86f7a push eax */
  push32((uint32_t)(EAX));
  /* 12c86f7b call dword ptr [0x12c8e07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e07c))), 0x12c86f81u);
  /* 12c86f81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c86f83 jne 0x12c86f8f */
  if (!C.zf) goto L_12c86f8f;
  /* 12c86f85 call dword ptr [0x12c8e078] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e078))), 0x12c86f8bu);
  /* 12c86f8b mov edi, eax */
  EDI = (EAX);
  /* 12c86f8d jmp 0x12c86f91 */
  goto L_12c86f91;
L_12c86f8f:;
  /* 12c86f8f xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_12c86f91:;
  /* 12c86f91 push esi */
  push32((uint32_t)(ESI));
  /* 12c86f92 call 0x12c8ba0f */
  push32(0x12c86f97u); f_12c8ba0f();
  /* 12c86f97 mov eax, esi */
  EAX = (ESI);
  /* 12c86f99 and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 12c86f9c sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12c86f9f pop ecx */
  ECX = (pop32());
  /* 12c86fa0 mov eax, dword ptr [eax*4 + 0x12caca20] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12caca20)));
  /* 12c86fa7 lea ecx, [esi + esi*8] */
  ECX = ((uint32_t)(ESI + ESI*8));
  /* 12c86faa and byte ptr [eax + ecx*4 + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + ECX*4 + 0x4)))&(0x0u); w8((uint32_t)(EAX + ECX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 12c86faf test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 12c86fb1 je 0x12c86fbf */
  if (C.zf) goto L_12c86fbf;
  /* 12c86fb3 push edi */
  push32((uint32_t)(EDI));
  /* 12c86fb4 call 0x12c87440 */
  push32(0x12c86fb9u); f_12c87440();
  /* 12c86fb9 pop ecx */
  ECX = (pop32());
  /* 12c86fba or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c86fbd jmp 0x12c86fc1 */
  goto L_12c86fc1;
L_12c86fbf:;
  /* 12c86fbf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c86fc1:;
  /* 12c86fc1 pop edi */
  EDI = (pop32());
  /* 12c86fc2 pop esi */
  ESI = (pop32());
  /* 12c86fc3 ret  */
  ESPCHK(0x12c86f41u, _esp0);
  ESP += 4; return;
}

/* __freebuf @ 0x12c86fc4 (43 bytes, 17 insns) */
void f_12c86fc4(void) {
  FTRACE(0x12c86fc4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c86fc4 push esi */
  push32((uint32_t)(ESI));
  /* 12c86fc5 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 12c86fc9 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 12c86fcc test al, 0x83 */
  { uint32_t _r=(AL)&(0x83u); fl_logic(_r,8); }
  /* 12c86fce je 0x12c86fed */
  if (C.zf) goto L_12c86fed;
  /* 12c86fd0 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 12c86fd2 je 0x12c86fed */
  if (C.zf) goto L_12c86fed;
  /* 12c86fd4 push dword ptr [esi + 8] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x8))));
  /* 12c86fd7 call 0x12c85e59 */
  push32(0x12c86fdcu); f_12c85e59();
  /* 12c86fdc and word ptr [esi + 0xc], 0xfbf7 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0xfbf7u); w16((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,16); }
  /* 12c86fe2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c86fe4 pop ecx */
  ECX = (pop32());
  /* 12c86fe5 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 12c86fe7 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 12c86fea mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
L_12c86fed:;
  /* 12c86fed pop esi */
  ESI = (pop32());
  /* 12c86fee ret  */
  ESPCHK(0x12c86fc4u, _esp0);
  ESP += 4; return;
}

/* FUN_10006fef @ 0x12c86fef (46 bytes, 22 insns) */
void f_12c86fef(void) {
  FTRACE(0x12c86fefu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c86fef push esi */
  push32((uint32_t)(ESI));
  /* 12c86ff0 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 12c86ff4 push esi */
  push32((uint32_t)(ESI));
  /* 12c86ff5 call 0x12c8701d */
  push32(0x12c86ffau); f_12c8701d();
  /* 12c86ffa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c86ffc pop ecx */
  ECX = (pop32());
  /* 12c86ffd je 0x12c87004 */
  if (C.zf) goto L_12c87004;
  /* 12c86fff or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c87002 pop esi */
  ESI = (pop32());
  /* 12c87003 ret  */
  ESPCHK(0x12c86fefu, _esp0);
  ESP += 4; return;
L_12c87004:;
  /* 12c87004 test byte ptr [esi + 0xd], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xd)))&(0x40u); fl_logic(_r,8); }
  /* 12c87008 je 0x12c87019 */
  if (C.zf) goto L_12c87019;
  /* 12c8700a push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 12c8700d call 0x12c8bb51 */
  push32(0x12c87012u); f_12c8bb51();
  /* 12c87012 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c87014 pop ecx */
  ECX = (pop32());
  /* 12c87015 pop esi */
  ESI = (pop32());
  /* 12c87016 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c87018 ret  */
  ESPCHK(0x12c86fefu, _esp0);
  ESP += 4; return;
L_12c87019:;
  /* 12c87019 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c8701b pop esi */
  ESI = (pop32());
  /* 12c8701c ret  */
  ESPCHK(0x12c86fefu, _esp0);
  ESP += 4; return;
}

/* FUN_1000701d @ 0x12c8701d (92 bytes, 40 insns) */
void f_12c8701d(void) {
  FTRACE(0x12c8701du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8701d push ebx */
  push32((uint32_t)(EBX));
  /* 12c8701e push esi */
  push32((uint32_t)(ESI));
  /* 12c8701f mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 12c87023 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12c87025 push edi */
  push32((uint32_t)(EDI));
  /* 12c87026 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 12c87029 mov ecx, eax */
  ECX = (EAX);
  /* 12c8702b and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12c8702e cmp cl, 2 */
  { uint32_t _a=(CL),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c87031 jne 0x12c8706a */
  if (!C.zf) goto L_12c8706a;
  /* 12c87033 test ax, 0x108 */
  { uint32_t _r=(AX)&(0x108u); fl_logic(_r,16); }
  /* 12c87037 je 0x12c8706a */
  if (C.zf) goto L_12c8706a;
  /* 12c87039 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 12c8703c mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 12c8703e sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c87040 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 12c87042 jle 0x12c8706a */
  if ((C.zf||C.sf!=C.of)) goto L_12c8706a;
  /* 12c87044 push edi */
  push32((uint32_t)(EDI));
  /* 12c87045 push eax */
  push32((uint32_t)(EAX));
  /* 12c87046 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 12c87049 call 0x12c89874 */
  push32(0x12c8704eu); f_12c89874();
  /* 12c8704e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c87051 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87053 jne 0x12c87063 */
  if (!C.zf) goto L_12c87063;
  /* 12c87055 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 12c87058 test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 12c8705a je 0x12c8706a */
  if (C.zf) goto L_12c8706a;
  /* 12c8705c and al, 0xfd */
  { uint32_t _r=(AL)&(0xfdu); AL = (_r); fl_logic(_r,8); }
  /* 12c8705e mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 12c87061 jmp 0x12c8706a */
  goto L_12c8706a;
L_12c87063:;
  /* 12c87063 or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 12c87067 or ebx, 0xffffffff */
  { uint32_t _r=(EBX)|(0xffffffffu); EBX = (_r); fl_logic(_r,32); }
L_12c8706a:;
  /* 12c8706a mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 12c8706d and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 12c87071 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 12c87073 pop edi */
  EDI = (pop32());
  /* 12c87074 mov eax, ebx */
  EAX = (EBX);
  /* 12c87076 pop esi */
  ESI = (pop32());
  /* 12c87077 pop ebx */
  EBX = (pop32());
  /* 12c87078 ret  */
  ESPCHK(0x12c8701du, _esp0);
  ESP += 4; return;
}

/* FUN_10007082 @ 0x12c87082 (164 bytes, 66 insns) */
void f_12c87082(void) {
  FTRACE(0x12c87082u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c87082 push ebx */
  push32((uint32_t)(EBX));
  /* 12c87083 push esi */
  push32((uint32_t)(ESI));
  /* 12c87084 push edi */
  push32((uint32_t)(EDI));
  /* 12c87085 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c87087 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12c87089 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 12c8708b call 0x12c86c88 */
  push32(0x12c87090u); f_12c86c88();
  /* 12c87090 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 12c87092 pop ecx */
  ECX = (pop32());
  /* 12c87093 cmp dword ptr [0x12cadb40], esi */
  { uint32_t _a=(r32((uint32_t)(0x12cadb40))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87099 jle 0x12c8710f */
  if ((C.zf||C.sf!=C.of)) goto L_12c8710f;
L_12c8709b:;
  /* 12c8709b mov eax, dword ptr [0x12cacb24] */
  EAX = (r32((uint32_t)(0x12cacb24)));
  /* 12c870a0 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 12c870a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c870a5 je 0x12c87106 */
  if (C.zf) goto L_12c87106;
  /* 12c870a7 test byte ptr [eax + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 12c870ab je 0x12c87106 */
  if (C.zf) goto L_12c87106;
  /* 12c870ad push eax */
  push32((uint32_t)(EAX));
  /* 12c870ae push esi */
  push32((uint32_t)(ESI));
  /* 12c870af call 0x12c86e6f */
  push32(0x12c870b4u); f_12c86e6f();
  /* 12c870b4 mov eax, dword ptr [0x12cacb24] */
  EAX = (r32((uint32_t)(0x12cacb24)));
  /* 12c870b9 pop ecx */
  ECX = (pop32());
  /* 12c870ba pop ecx */
  ECX = (pop32());
  /* 12c870bb mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 12c870be mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12c870c1 test cl, 0x83 */
  { uint32_t _r=(CL)&(0x83u); fl_logic(_r,8); }
  /* 12c870c4 je 0x12c870f6 */
  if (C.zf) goto L_12c870f6;
  /* 12c870c6 cmp dword ptr [esp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c870cb jne 0x12c870dc */
  if (!C.zf) goto L_12c870dc;
  /* 12c870cd push eax */
  push32((uint32_t)(EAX));
  /* 12c870ce call 0x12c86fef */
  push32(0x12c870d3u); f_12c86fef();
  /* 12c870d3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c870d6 pop ecx */
  ECX = (pop32());
  /* 12c870d7 je 0x12c870f6 */
  if (C.zf) goto L_12c870f6;
  /* 12c870d9 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 12c870da jmp 0x12c870f6 */
  goto L_12c870f6;
L_12c870dc:;
  /* 12c870dc cmp dword ptr [esp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c870e1 jne 0x12c870f6 */
  if (!C.zf) goto L_12c870f6;
  /* 12c870e3 test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 12c870e6 je 0x12c870f6 */
  if (C.zf) goto L_12c870f6;
  /* 12c870e8 push eax */
  push32((uint32_t)(EAX));
  /* 12c870e9 call 0x12c86fef */
  push32(0x12c870eeu); f_12c86fef();
  /* 12c870ee cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c870f1 pop ecx */
  ECX = (pop32());
  /* 12c870f2 jne 0x12c870f6 */
  if (!C.zf) goto L_12c870f6;
  /* 12c870f4 or edi, eax */
  { uint32_t _r=(EDI)|(EAX); EDI = (_r); fl_logic(_r,32); }
L_12c870f6:;
  /* 12c870f6 mov eax, dword ptr [0x12cacb24] */
  EAX = (r32((uint32_t)(0x12cacb24)));
  /* 12c870fb push dword ptr [eax + esi*4] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*4))));
  /* 12c870fe push esi */
  push32((uint32_t)(ESI));
  /* 12c870ff call 0x12c86ec1 */
  push32(0x12c87104u); f_12c86ec1();
  /* 12c87104 pop ecx */
  ECX = (pop32());
  /* 12c87105 pop ecx */
  ECX = (pop32());
L_12c87106:;
  /* 12c87106 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c87107 cmp esi, dword ptr [0x12cadb40] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x12cadb40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8710d jl 0x12c8709b */
  if ((C.sf!=C.of)) goto L_12c8709b;
L_12c8710f:;
  /* 12c8710f push 2 */
  push32((uint32_t)(0x2u));
  /* 12c87111 call 0x12c86ce9 */
  push32(0x12c87116u); f_12c86ce9();
  /* 12c87116 cmp dword ptr [esp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8711b pop ecx */
  ECX = (pop32());
  /* 12c8711c mov eax, ebx */
  EAX = (EBX);
  /* 12c8711e je 0x12c87122 */
  if (C.zf) goto L_12c87122;
  /* 12c87120 mov eax, edi */
  EAX = (EDI);
L_12c87122:;
  /* 12c87122 pop edi */
  EDI = (pop32());
  /* 12c87123 pop esi */
  ESI = (pop32());
  /* 12c87124 pop ebx */
  EBX = (pop32());
  /* 12c87125 ret  */
  ESPCHK(0x12c87082u, _esp0);
  ESP += 4; return;
}

/* FUN_10007126 @ 0x12c87126 (220 bytes, 79 insns) */
void f_12c87126(void) {
  FTRACE(0x12c87126u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c87126 push esi */
  push32((uint32_t)(ESI));
  /* 12c87127 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 12c8712b mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 12c8712e test al, 0x83 */
  { uint32_t _r=(AL)&(0x83u); fl_logic(_r,8); }
  /* 12c87130 je 0x12c871fd */
  if (C.zf) goto L_12c871fd;
  /* 12c87136 test al, 0x40 */
  { uint32_t _r=(AL)&(0x40u); fl_logic(_r,8); }
  /* 12c87138 jne 0x12c871fd */
  if (!C.zf) goto L_12c871fd;
  /* 12c8713e test al, 2 */
  { uint32_t _r=(AL)&(0x2u); fl_logic(_r,8); }
  /* 12c87140 je 0x12c8714c */
  if (C.zf) goto L_12c8714c;
  /* 12c87142 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12c87144 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 12c87147 jmp 0x12c871fd */
  goto L_12c871fd;
L_12c8714c:;
  /* 12c8714c or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 12c8714e test ax, 0x10c */
  { uint32_t _r=(AX)&(0x10cu); fl_logic(_r,16); }
  /* 12c87152 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 12c87155 jne 0x12c87160 */
  if (!C.zf) goto L_12c87160;
  /* 12c87157 push esi */
  push32((uint32_t)(ESI));
  /* 12c87158 call 0x12c8bbe4 */
  push32(0x12c8715du); f_12c8bbe4();
  /* 12c8715d pop ecx */
  ECX = (pop32());
  /* 12c8715e jmp 0x12c87165 */
  goto L_12c87165;
L_12c87160:;
  /* 12c87160 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 12c87163 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
L_12c87165:;
  /* 12c87165 push dword ptr [esi + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x18))));
  /* 12c87168 push dword ptr [esi + 8] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x8))));
  /* 12c8716b push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 12c8716e call 0x12c87202 */
  push32(0x12c87173u); f_12c87202();
  /* 12c87173 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c87176 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 12c87179 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8717b je 0x12c871ec */
  if (C.zf) goto L_12c871ec;
  /* 12c8717d cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87180 je 0x12c871ec */
  if (C.zf) goto L_12c871ec;
  /* 12c87182 mov edx, dword ptr [esi + 0xc] */
  EDX = (r32((uint32_t)(ESI + 0xc)));
  /* 12c87185 test dl, 0x82 */
  { uint32_t _r=(DL)&(0x82u); fl_logic(_r,8); }
  /* 12c87188 jne 0x12c871c1 */
  if (!C.zf) goto L_12c871c1;
  /* 12c8718a mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 12c8718d push edi */
  push32((uint32_t)(EDI));
  /* 12c8718e cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87191 je 0x12c871aa */
  if (C.zf) goto L_12c871aa;
  /* 12c87193 mov edi, ecx */
  EDI = (ECX);
  /* 12c87195 sar edi, 5 */
  EDI = (sh_sar((uint32_t)(EDI), (0x5u)&0x1f, 32));
  /* 12c87198 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12c8719b mov edi, dword ptr [edi*4 + 0x12caca20] */
  EDI = (r32((uint32_t)(EDI*4 + 0x12caca20)));
  /* 12c871a2 lea ecx, [ecx + ecx*8] */
  ECX = ((uint32_t)(ECX + ECX*8));
  /* 12c871a5 lea edi, [edi + ecx*4] */
  EDI = ((uint32_t)(EDI + ECX*4));
  /* 12c871a8 jmp 0x12c871af */
  goto L_12c871af;
L_12c871aa:;
  /* 12c871aa mov edi, 0x12c90ad8 */
  EDI = (0x12c90ad8u);
L_12c871af:;
  /* 12c871af mov cl, byte ptr [edi + 4] */
  CL = (r8((uint32_t)(EDI + 0x4)));
  /* 12c871b2 pop edi */
  EDI = (pop32());
  /* 12c871b3 and cl, 0x82 */
  { uint32_t _r=(CL)&(0x82u); CL = (_r); fl_logic(_r,8); }
  /* 12c871b6 cmp cl, 0x82 */
  { uint32_t _a=(CL),_b=(0x82u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c871b9 jne 0x12c871c1 */
  if (!C.zf) goto L_12c871c1;
  /* 12c871bb or dh, 0x20 */
  { uint32_t _r=(C.d.b.h)|(0x20u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12c871be mov dword ptr [esi + 0xc], edx */
  w32((uint32_t)(ESI + 0xc), (EDX));
L_12c871c1:;
  /* 12c871c1 cmp dword ptr [esi + 0x18], 0x200 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x18))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c871c8 jne 0x12c871de */
  if (!C.zf) goto L_12c871de;
  /* 12c871ca mov ecx, dword ptr [esi + 0xc] */
  ECX = (r32((uint32_t)(ESI + 0xc)));
  /* 12c871cd test cl, 8 */
  { uint32_t _r=(CL)&(0x8u); fl_logic(_r,8); }
  /* 12c871d0 je 0x12c871de */
  if (C.zf) goto L_12c871de;
  /* 12c871d2 test ch, 4 */
  { uint32_t _r=(C.c.b.h)&(0x4u); fl_logic(_r,8); }
  /* 12c871d5 jne 0x12c871de */
  if (!C.zf) goto L_12c871de;
  /* 12c871d7 mov dword ptr [esi + 0x18], 0x1000 */
  w32((uint32_t)(ESI + 0x18), (0x1000u));
L_12c871de:;
  /* 12c871de mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 12c871e0 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 12c871e1 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 12c871e4 movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 12c871e7 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12c871e8 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 12c871ea pop esi */
  ESI = (pop32());
  /* 12c871eb ret  */
  ESPCHK(0x12c87126u, _esp0);
  ESP += 4; return;
L_12c871ec:;
  /* 12c871ec neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c871ee sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c871f0 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 12c871f3 add eax, 0x10 */
  { uint32_t _a=(EAX),_b=(0x10u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c871f6 or dword ptr [esi + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(EAX); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 12c871f9 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
L_12c871fd:;
  /* 12c871fd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c87200 pop esi */
  ESI = (pop32());
  /* 12c87201 ret  */
  ESPCHK(0x12c87126u, _esp0);
  ESP += 4; return;
}

/* FUN_10007202 @ 0x12c87202 (101 bytes, 34 insns) */
void f_12c87202(void) {
  FTRACE(0x12c87202u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c87202 push esi */
  push32((uint32_t)(ESI));
  /* 12c87203 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 12c87207 cmp esi, dword ptr [0x12cacb20] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x12cacb20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8720d jae 0x12c8724f */
  if (!C.cf) goto L_12c8724f;
  /* 12c8720f mov ecx, esi */
  ECX = (ESI);
  /* 12c87211 mov eax, esi */
  EAX = (ESI);
  /* 12c87213 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12c87216 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12c87219 mov ecx, dword ptr [ecx*4 + 0x12caca20] */
  ECX = (r32((uint32_t)(ECX*4 + 0x12caca20)));
  /* 12c87220 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 12c87223 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 12c87228 je 0x12c8724f */
  if (C.zf) goto L_12c8724f;
  /* 12c8722a push edi */
  push32((uint32_t)(EDI));
  /* 12c8722b push esi */
  push32((uint32_t)(ESI));
  /* 12c8722c call 0x12c8bad0 */
  push32(0x12c87231u); f_12c8bad0();
  /* 12c87231 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 12c87235 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 12c87239 push esi */
  push32((uint32_t)(ESI));
  /* 12c8723a call 0x12c87267 */
  push32(0x12c8723fu); f_12c87267();
  /* 12c8723f push esi */
  push32((uint32_t)(ESI));
  /* 12c87240 mov edi, eax */
  EDI = (EAX);
  /* 12c87242 call 0x12c8bb2f */
  push32(0x12c87247u); f_12c8bb2f();
  /* 12c87247 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8724a mov eax, edi */
  EAX = (EDI);
  /* 12c8724c pop edi */
  EDI = (pop32());
  /* 12c8724d pop esi */
  ESI = (pop32());
  /* 12c8724e ret  */
  ESPCHK(0x12c87202u, _esp0);
  ESP += 4; return;
L_12c8724f:;
  /* 12c8724f call 0x12c874b3 */
  push32(0x12c87254u); f_12c874b3();
  /* 12c87254 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12c8725a call 0x12c874bc */
  push32(0x12c8725fu); f_12c874bc();
  /* 12c8725f and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 12c87262 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c87265 pop esi */
  ESI = (pop32());
  /* 12c87266 ret  */
  ESPCHK(0x12c87202u, _esp0);
  ESP += 4; return;
}

/* FUN_10007267 @ 0x12c87267 (473 bytes, 170 insns) */
void f_12c87267(void) {
  FTRACE(0x12c87267u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c87267 push ebp */
  push32((uint32_t)(EBP));
  /* 12c87268 mov ebp, esp */
  EBP = (ESP);
  /* 12c8726a sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8726d and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 12c87271 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87275 push ebx */
  push32((uint32_t)(EBX));
  /* 12c87276 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c87279 push esi */
  push32((uint32_t)(ESI));
  /* 12c8727a push edi */
  push32((uint32_t)(EDI));
  /* 12c8727b mov edx, ebx */
  EDX = (EBX);
  /* 12c8727d je 0x12c87439 */
  if (C.zf) goto L_12c87439;
  /* 12c87283 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c87286 mov ecx, eax */
  ECX = (EAX);
  /* 12c87288 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12c8728b sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12c8728e lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 12c87291 mov eax, dword ptr [ecx*4 + 0x12caca20] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12caca20)));
  /* 12c87298 lea edi, [ecx*4 + 0x12caca20] */
  EDI = ((uint32_t)(ECX*4 + 0x12caca20));
  /* 12c8729f shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 12c872a2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c872a4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12c872a7 test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 12c872aa jne 0x12c87439 */
  if (!C.zf) goto L_12c87439;
  /* 12c872b0 test cl, 0x48 */
  { uint32_t _r=(CL)&(0x48u); fl_logic(_r,8); }
  /* 12c872b3 je 0x12c872d2 */
  if (C.zf) goto L_12c872d2;
  /* 12c872b5 mov al, byte ptr [eax + 5] */
  AL = (r8((uint32_t)(EAX + 0x5)));
  /* 12c872b8 cmp al, 0xa */
  { uint32_t _a=(AL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c872ba je 0x12c872d2 */
  if (C.zf) goto L_12c872d2;
  /* 12c872bc dec dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))-1; w32((uint32_t)(EBP + 0x10), (_r)); fl_dec(_r,32); }
  /* 12c872bf mov byte ptr [ebx], al */
  w8((uint32_t)(EBX), (AL));
  /* 12c872c1 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 12c872c3 lea edx, [ebx + 1] */
  EDX = ((uint32_t)(EBX + 0x1));
  /* 12c872c6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12c872cd mov byte ptr [eax + esi + 5], 0xa */
  w8((uint32_t)(EAX + ESI*1 + 0x5), (0xau));
L_12c872d2:;
  /* 12c872d2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12c872d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c872d7 push eax */
  push32((uint32_t)(EAX));
  /* 12c872d8 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 12c872da push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 12c872dd push edx */
  push32((uint32_t)(EDX));
  /* 12c872de push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 12c872e1 call dword ptr [0x12c8e080] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e080))), 0x12c872e7u);
  /* 12c872e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c872e9 jne 0x12c87324 */
  if (!C.zf) goto L_12c87324;
  /* 12c872eb call dword ptr [0x12c8e078] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e078))), 0x12c872f1u);
  /* 12c872f1 push 5 */
  push32((uint32_t)(0x5u));
  /* 12c872f3 pop esi */
  ESI = (pop32());
  /* 12c872f4 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c872f6 jne 0x12c8730c */
  if (!C.zf) goto L_12c8730c;
  /* 12c872f8 call 0x12c874b3 */
  push32(0x12c872fdu); f_12c874b3();
  /* 12c872fd mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12c87303 call 0x12c874bc */
  push32(0x12c87308u); f_12c874bc();
  /* 12c87308 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 12c8730a jmp 0x12c8731c */
  goto L_12c8731c;
L_12c8730c:;
  /* 12c8730c cmp eax, 0x6d */
  { uint32_t _a=(EAX),_b=(0x6du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8730f je 0x12c87439 */
  if (C.zf) goto L_12c87439;
  /* 12c87315 push eax */
  push32((uint32_t)(EAX));
  /* 12c87316 call 0x12c87440 */
  push32(0x12c8731bu); f_12c87440();
  /* 12c8731b pop ecx */
  ECX = (pop32());
L_12c8731c:;
  /* 12c8731c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c8731f jmp 0x12c8743b */
  goto L_12c8743b;
L_12c87324:;
  /* 12c87324 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 12c87326 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c87329 add dword ptr [ebp - 8], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 12c8732c lea ecx, [eax + esi + 4] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x4));
  /* 12c87330 mov al, byte ptr [eax + esi + 4] */
  AL = (r8((uint32_t)(EAX + ESI*1 + 0x4)));
  /* 12c87334 test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 12c87336 je 0x12c87434 */
  if (C.zf) goto L_12c87434;
  /* 12c8733c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c8733e je 0x12c87349 */
  if (C.zf) goto L_12c87349;
  /* 12c87340 cmp byte ptr [ebx], 0xa */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c87343 jne 0x12c87349 */
  if (!C.zf) goto L_12c87349;
  /* 12c87345 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12c87347 jmp 0x12c8734b */
  goto L_12c8734b;
L_12c87349:;
  /* 12c87349 and al, 0xfb */
  { uint32_t _r=(AL)&(0xfbu); AL = (_r); fl_logic(_r,8); }
L_12c8734b:;
  /* 12c8734b mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12c8734d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c87350 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c87353 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 12c87356 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c87358 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8735a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c8735d jae 0x12c8742e */
  if (!C.cf) goto L_12c8742e;
L_12c87363:;
  /* 12c87363 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c87366 mov al, byte ptr [eax] */
  AL = (r8((uint32_t)(EAX)));
  /* 12c87368 cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8736a je 0x12c8741e */
  if (C.zf) goto L_12c8741e;
  /* 12c87370 cmp al, 0xd */
  { uint32_t _a=(AL),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c87372 je 0x12c8737f */
  if (C.zf) goto L_12c8737f;
  /* 12c87374 mov byte ptr [ebx], al */
  w8((uint32_t)(EBX), (AL));
  /* 12c87376 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 12c87377 inc dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))+1; w32((uint32_t)(EBP + 0x10), (_r)); fl_inc(_r,32); }
  /* 12c8737a jmp 0x12c87410 */
  goto L_12c87410;
L_12c8737f:;
  /* 12c8737f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12c87380 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87383 jae 0x12c8739d */
  if (!C.cf) goto L_12c8739d;
  /* 12c87385 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c87388 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c87389 cmp byte ptr [eax], 0xa */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8738c jne 0x12c87394 */
  if (!C.zf) goto L_12c87394;
  /* 12c8738e add dword ptr [ebp + 0x10], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + 0x10), (_r)); fl_add(_a,_b,_r,32); }
  /* 12c87392 jmp 0x12c873f2 */
  goto L_12c873f2;
L_12c87394:;
  /* 12c87394 mov byte ptr [ebx], 0xd */
  w8((uint32_t)(EBX), (0xdu));
  /* 12c87397 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 12c87398 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 12c8739b jmp 0x12c87410 */
  goto L_12c87410;
L_12c8739d:;
  /* 12c8739d lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12c873a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c873a2 push eax */
  push32((uint32_t)(EAX));
  /* 12c873a3 inc dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))+1; w32((uint32_t)(EBP + 0x10), (_r)); fl_inc(_r,32); }
  /* 12c873a6 lea eax, [ebp - 1] */
  EAX = ((uint32_t)(EBP + -0x1));
  /* 12c873a9 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c873ab push eax */
  push32((uint32_t)(EAX));
  /* 12c873ac mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 12c873ae push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 12c873b1 call dword ptr [0x12c8e080] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e080))), 0x12c873b7u);
  /* 12c873b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c873b9 jne 0x12c873c5 */
  if (!C.zf) goto L_12c873c5;
  /* 12c873bb call dword ptr [0x12c8e078] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e078))), 0x12c873c1u);
  /* 12c873c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c873c3 jne 0x12c8740c */
  if (!C.zf) goto L_12c8740c;
L_12c873c5:;
  /* 12c873c5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c873c9 je 0x12c8740c */
  if (C.zf) goto L_12c8740c;
  /* 12c873cb mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 12c873cd test byte ptr [eax + esi + 4], 0x48 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x48u); fl_logic(_r,8); }
  /* 12c873d2 je 0x12c873e7 */
  if (C.zf) goto L_12c873e7;
  /* 12c873d4 mov al, byte ptr [ebp - 1] */
  AL = (r8((uint32_t)(EBP + -0x1)));
  /* 12c873d7 cmp al, 0xa */
  { uint32_t _a=(AL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c873d9 je 0x12c873f2 */
  if (C.zf) goto L_12c873f2;
  /* 12c873db mov byte ptr [ebx], 0xd */
  w8((uint32_t)(EBX), (0xdu));
  /* 12c873de mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 12c873e0 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 12c873e1 mov byte ptr [ecx + esi + 5], al */
  w8((uint32_t)(ECX + ESI*1 + 0x5), (AL));
  /* 12c873e5 jmp 0x12c87410 */
  goto L_12c87410;
L_12c873e7:;
  /* 12c873e7 cmp ebx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c873ea jne 0x12c873f7 */
  if (!C.zf) goto L_12c873f7;
  /* 12c873ec cmp byte ptr [ebp - 1], 0xa */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x1))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c873f0 jne 0x12c873f7 */
  if (!C.zf) goto L_12c873f7;
L_12c873f2:;
  /* 12c873f2 mov byte ptr [ebx], 0xa */
  w8((uint32_t)(EBX), (0xau));
  /* 12c873f5 jmp 0x12c8740f */
  goto L_12c8740f;
L_12c873f7:;
  /* 12c873f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c873f9 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c873fb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c873fe call 0x12c8773a */
  push32(0x12c87403u); f_12c8773a();
  /* 12c87403 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c87406 cmp byte ptr [ebp - 1], 0xa */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x1))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8740a je 0x12c87410 */
  if (C.zf) goto L_12c87410;
L_12c8740c:;
  /* 12c8740c mov byte ptr [ebx], 0xd */
  w8((uint32_t)(EBX), (0xdu));
L_12c8740f:;
  /* 12c8740f inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_12c87410:;
  /* 12c87410 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c87413 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87416 jb 0x12c87363 */
  if (C.cf) goto L_12c87363;
  /* 12c8741c jmp 0x12c8742e */
  goto L_12c8742e;
L_12c8741e:;
  /* 12c8741e mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 12c87420 lea esi, [eax + esi + 4] */
  ESI = ((uint32_t)(EAX + ESI*1 + 0x4));
  /* 12c87424 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c87426 test al, 0x40 */
  { uint32_t _r=(AL)&(0x40u); fl_logic(_r,8); }
  /* 12c87428 jne 0x12c8742e */
  if (!C.zf) goto L_12c8742e;
  /* 12c8742a or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 12c8742c mov byte ptr [esi], al */
  w8((uint32_t)(ESI), (AL));
L_12c8742e:;
  /* 12c8742e sub ebx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c87431 mov dword ptr [ebp - 8], ebx */
  w32((uint32_t)(EBP + -0x8), (EBX));
L_12c87434:;
  /* 12c87434 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c87437 jmp 0x12c8743b */
  goto L_12c8743b;
L_12c87439:;
  /* 12c87439 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c8743b:;
  /* 12c8743b pop edi */
  EDI = (pop32());
  /* 12c8743c pop esi */
  ESI = (pop32());
  /* 12c8743d pop ebx */
  EBX = (pop32());
  /* 12c8743e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c8743f ret  */
  ESPCHK(0x12c87267u, _esp0);
  ESP += 4; return;
}

/* FUN_10007440 @ 0x12c87440 (115 bytes, 37 insns) */
void f_12c87440(void) {
  FTRACE(0x12c87440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c87440 push esi */
  push32((uint32_t)(ESI));
  /* 12c87441 call 0x12c874bc */
  push32(0x12c87446u); f_12c874bc();
  /* 12c87446 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c8744a xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 12c8744c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12c8744e mov eax, 0x12c90970 */
  EAX = (0x12c90970u);
L_12c87453:;
  /* 12c87453 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87455 je 0x12c87479 */
  if (C.zf) goto L_12c87479;
  /* 12c87457 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8745a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c8745b cmp eax, 0x12c90ad8 */
  { uint32_t _a=(EAX),_b=(0x12c90ad8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87460 jl 0x12c87453 */
  if ((C.sf!=C.of)) goto L_12c87453;
  /* 12c87462 cmp ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87465 jb 0x12c87489 */
  if (C.cf) goto L_12c87489;
  /* 12c87467 cmp ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8746a ja 0x12c87489 */
  if ((!C.cf&&!C.zf)) goto L_12c87489;
  /* 12c8746c call 0x12c874b3 */
  push32(0x12c87471u); f_12c874b3();
  /* 12c87471 mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 12c87477 pop esi */
  ESI = (pop32());
  /* 12c87478 ret  */
  ESPCHK(0x12c87440u, _esp0);
  ESP += 4; return;
L_12c87479:;
  /* 12c87479 call 0x12c874b3 */
  push32(0x12c8747eu); f_12c874b3();
  /* 12c8747e mov ecx, dword ptr [esi*8 + 0x12c90974] */
  ECX = (r32((uint32_t)(ESI*8 + 0x12c90974)));
  /* 12c87485 pop esi */
  ESI = (pop32());
  /* 12c87486 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12c87488 ret  */
  ESPCHK(0x12c87440u, _esp0);
  ESP += 4; return;
L_12c87489:;
  /* 12c87489 cmp ecx, 0xbc */
  { uint32_t _a=(ECX),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8748f jb 0x12c874a6 */
  if (C.cf) goto L_12c874a6;
  /* 12c87491 cmp ecx, 0xca */
  { uint32_t _a=(ECX),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87497 ja 0x12c874a6 */
  if ((!C.cf&&!C.zf)) goto L_12c874a6;
  /* 12c87499 call 0x12c874b3 */
  push32(0x12c8749eu); f_12c874b3();
  /* 12c8749e mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 12c874a4 pop esi */
  ESI = (pop32());
  /* 12c874a5 ret  */
  ESPCHK(0x12c87440u, _esp0);
  ESP += 4; return;
L_12c874a6:;
  /* 12c874a6 call 0x12c874b3 */
  push32(0x12c874abu); f_12c874b3();
  /* 12c874ab mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 12c874b1 pop esi */
  ESI = (pop32());
  /* 12c874b2 ret  */
  ESPCHK(0x12c87440u, _esp0);
  ESP += 4; return;
}

/* FUN_100074b3 @ 0x12c874b3 (9 bytes, 3 insns) */
void f_12c874b3(void) {
  FTRACE(0x12c874b3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c874b3 call 0x12c882c1 */
  push32(0x12c874b8u); f_12c882c1();
  /* 12c874b8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c874bb ret  */
  ESPCHK(0x12c874b3u, _esp0);
  ESP += 4; return;
}

/* FUN_100074bc @ 0x12c874bc (9 bytes, 3 insns) */
void f_12c874bc(void) {
  FTRACE(0x12c874bcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c874bc call 0x12c882c1 */
  push32(0x12c874c1u); f_12c882c1();
  /* 12c874c1 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c874c4 ret  */
  ESPCHK(0x12c874bcu, _esp0);
  ESP += 4; return;
}

/* FUN_100074c5 @ 0x12c874c5 (444 bytes, 150 insns) */
void f_12c874c5(void) {
  FTRACE(0x12c874c5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c874c5 push ebp */
  push32((uint32_t)(EBP));
  /* 12c874c6 mov ebp, esp */
  EBP = (ESP);
  /* 12c874c8 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c874cb push ebx */
  push32((uint32_t)(EBX));
  /* 12c874cc push esi */
  push32((uint32_t)(ESI));
  /* 12c874cd push edi */
  push32((uint32_t)(EDI));
  /* 12c874ce push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12c874d3 call 0x12c86920 */
  push32(0x12c874d8u); f_12c86920();
  /* 12c874d8 mov esi, eax */
  ESI = (EAX);
  /* 12c874da pop ecx */
  ECX = (pop32());
  /* 12c874db test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 12c874dd jne 0x12c874e7 */
  if (!C.zf) goto L_12c874e7;
  /* 12c874df push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 12c874e1 call 0x12c85e26 */
  push32(0x12c874e6u); f_12c85e26();
  /* 12c874e6 pop ecx */
  ECX = (pop32());
L_12c874e7:;
  /* 12c874e7 mov dword ptr [0x12caca20], esi */
  w32((uint32_t)(0x12caca20), (ESI));
  /* 12c874ed mov dword ptr [0x12cacb20], 0x20 */
  w32((uint32_t)(0x12cacb20), (0x20u));
  /* 12c874f7 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_12c874fd:;
  /* 12c874fd cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c874ff jae 0x12c8751f */
  if (!C.cf) goto L_12c8751f;
  /* 12c87501 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 12c87505 or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 12c87508 and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 12c8750c mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 12c87510 mov eax, dword ptr [0x12caca20] */
  EAX = (r32((uint32_t)(0x12caca20)));
  /* 12c87515 add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c87518 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8751d jmp 0x12c874fd */
  goto L_12c874fd;
L_12c8751f:;
  /* 12c8751f lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 12c87522 push eax */
  push32((uint32_t)(EAX));
  /* 12c87523 call dword ptr [0x12c8e090] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e090))), 0x12c87529u);
  /* 12c87529 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 12c8752e je 0x12c87605 */
  if (C.zf) goto L_12c87605;
  /* 12c87534 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c87537 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c87539 je 0x12c87605 */
  if (C.zf) goto L_12c87605;
  /* 12c8753f mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 12c87541 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 12c87544 lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 12c87547 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c8754a mov eax, 0x800 */
  EAX = (0x800u);
  /* 12c8754f cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87551 jl 0x12c87555 */
  if ((C.sf!=C.of)) goto L_12c87555;
  /* 12c87553 mov edi, eax */
  EDI = (EAX);
L_12c87555:;
  /* 12c87555 cmp dword ptr [0x12cacb20], edi */
  { uint32_t _a=(r32((uint32_t)(0x12cacb20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8755b jge 0x12c875b3 */
  if ((C.sf==C.of)) goto L_12c875b3;
  /* 12c8755d mov esi, 0x12caca24 */
  ESI = (0x12caca24u);
L_12c87562:;
  /* 12c87562 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12c87567 call 0x12c86920 */
  push32(0x12c8756cu); f_12c86920();
  /* 12c8756c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8756e pop ecx */
  ECX = (pop32());
  /* 12c8756f je 0x12c875ad */
  if (C.zf) goto L_12c875ad;
  /* 12c87571 add dword ptr [0x12cacb20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x12cacb20))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x12cacb20), (_r)); fl_add(_a,_b,_r,32); }
  /* 12c87578 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 12c8757a lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_12c87580:;
  /* 12c87580 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87582 jae 0x12c875a0 */
  if (!C.cf) goto L_12c875a0;
  /* 12c87584 and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 12c87588 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 12c8758b and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 12c8758f mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 12c87593 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 12c87595 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c87598 add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8759e jmp 0x12c87580 */
  goto L_12c87580;
L_12c875a0:;
  /* 12c875a0 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c875a3 cmp dword ptr [0x12cacb20], edi */
  { uint32_t _a=(r32((uint32_t)(0x12cacb20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c875a9 jl 0x12c87562 */
  if ((C.sf!=C.of)) goto L_12c87562;
  /* 12c875ab jmp 0x12c875b3 */
  goto L_12c875b3;
L_12c875ad:;
  /* 12c875ad mov edi, dword ptr [0x12cacb20] */
  EDI = (r32((uint32_t)(0x12cacb20)));
L_12c875b3:;
  /* 12c875b3 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 12c875b5 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 12c875b7 jle 0x12c87605 */
  if ((C.zf||C.sf!=C.of)) goto L_12c87605;
L_12c875b9:;
  /* 12c875b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c875bc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c875be cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c875c1 je 0x12c875fb */
  if (C.zf) goto L_12c875fb;
  /* 12c875c3 mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 12c875c5 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 12c875c7 je 0x12c875fb */
  if (C.zf) goto L_12c875fb;
  /* 12c875c9 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 12c875cb jne 0x12c875d8 */
  if (!C.zf) goto L_12c875d8;
  /* 12c875cd push ecx */
  push32((uint32_t)(ECX));
  /* 12c875ce call dword ptr [0x12c8e08c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e08c))), 0x12c875d4u);
  /* 12c875d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c875d6 je 0x12c875fb */
  if (C.zf) goto L_12c875fb;
L_12c875d8:;
  /* 12c875d8 mov ecx, esi */
  ECX = (ESI);
  /* 12c875da mov eax, esi */
  EAX = (ESI);
  /* 12c875dc sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12c875df and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12c875e2 mov ecx, dword ptr [ecx*4 + 0x12caca20] */
  ECX = (r32((uint32_t)(ECX*4 + 0x12caca20)));
  /* 12c875e9 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 12c875ec lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 12c875ef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c875f2 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 12c875f4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12c875f6 mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 12c875f8 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_12c875fb:;
  /* 12c875fb add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 12c875ff inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c87600 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 12c87601 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87603 jl 0x12c875b9 */
  if ((C.sf!=C.of)) goto L_12c875b9;
L_12c87605:;
  /* 12c87605 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_12c87607:;
  /* 12c87607 mov ecx, dword ptr [0x12caca20] */
  ECX = (r32((uint32_t)(0x12caca20)));
  /* 12c8760d lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 12c87610 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87614 lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 12c87617 jne 0x12c87666 */
  if (!C.zf) goto L_12c87666;
  /* 12c87619 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 12c8761b mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 12c8761f jne 0x12c87626 */
  if (!C.zf) goto L_12c87626;
  /* 12c87621 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 12c87623 pop eax */
  EAX = (pop32());
  /* 12c87624 jmp 0x12c87630 */
  goto L_12c87630;
L_12c87626:;
  /* 12c87626 mov eax, ebx */
  EAX = (EBX);
  /* 12c87628 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 12c87629 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c8762b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8762d add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12c87630:;
  /* 12c87630 push eax */
  push32((uint32_t)(EAX));
  /* 12c87631 call dword ptr [0x12c8e088] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e088))), 0x12c87637u);
  /* 12c87637 mov edi, eax */
  EDI = (EAX);
  /* 12c87639 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8763c je 0x12c87655 */
  if (C.zf) goto L_12c87655;
  /* 12c8763e push edi */
  push32((uint32_t)(EDI));
  /* 12c8763f call dword ptr [0x12c8e08c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e08c))), 0x12c87645u);
  /* 12c87645 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c87647 je 0x12c87655 */
  if (C.zf) goto L_12c87655;
  /* 12c87649 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c8764e mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 12c87650 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87653 jne 0x12c8765b */
  if (!C.zf) goto L_12c8765b;
L_12c87655:;
  /* 12c87655 or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 12c87659 jmp 0x12c8766a */
  goto L_12c8766a;
L_12c8765b:;
  /* 12c8765b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8765e jne 0x12c8766a */
  if (!C.zf) goto L_12c8766a;
  /* 12c87660 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 12c87664 jmp 0x12c8766a */
  goto L_12c8766a;
L_12c87666:;
  /* 12c87666 or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_12c8766a:;
  /* 12c8766a inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 12c8766b cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8766e jl 0x12c87607 */
  if ((C.sf!=C.of)) goto L_12c87607;
  /* 12c87670 push dword ptr [0x12cacb20] */
  push32((uint32_t)(r32((uint32_t)(0x12cacb20))));
  /* 12c87676 call dword ptr [0x12c8e084] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e084))), 0x12c8767cu);
  /* 12c8767c pop edi */
  EDI = (pop32());
  /* 12c8767d pop esi */
  ESI = (pop32());
  /* 12c8767e pop ebx */
  EBX = (pop32());
  /* 12c8767f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c87680 ret  */
  ESPCHK(0x12c874c5u, _esp0);
  ESP += 4; return;
}

/* FUN_10007681 @ 0x12c87681 (84 bytes, 33 insns) */
void f_12c87681(void) {
  FTRACE(0x12c87681u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c87681 push ebx */
  push32((uint32_t)(EBX));
  /* 12c87682 push esi */
  push32((uint32_t)(ESI));
  /* 12c87683 push edi */
  push32((uint32_t)(EDI));
  /* 12c87684 mov esi, 0x12caca20 */
  ESI = (0x12caca20u);
L_12c87689:;
  /* 12c87689 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 12c8768b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8768d je 0x12c876c6 */
  if (C.zf) goto L_12c876c6;
  /* 12c8768f mov edi, eax */
  EDI = (EAX);
  /* 12c87691 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c87696 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87698 jae 0x12c876bb */
  if (!C.cf) goto L_12c876bb;
  /* 12c8769a lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_12c8769d:;
  /* 12c8769d cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c876a1 je 0x12c876aa */
  if (C.zf) goto L_12c876aa;
  /* 12c876a3 push ebx */
  push32((uint32_t)(EBX));
  /* 12c876a4 call dword ptr [0x12c8e06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e06c))), 0x12c876aau);
L_12c876aa:;
  /* 12c876aa mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 12c876ac add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c876af add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c876b4 add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c876b7 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c876b9 jb 0x12c8769d */
  if (C.cf) goto L_12c8769d;
L_12c876bb:;
  /* 12c876bb push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 12c876bd call 0x12c85e59 */
  push32(0x12c876c2u); f_12c85e59();
  /* 12c876c2 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 12c876c5 pop ecx */
  ECX = (pop32());
L_12c876c6:;
  /* 12c876c6 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c876c9 cmp esi, 0x12cacb20 */
  { uint32_t _a=(ESI),_b=(0x12cacb20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c876cf jl 0x12c87689 */
  if ((C.sf!=C.of)) goto L_12c87689;
  /* 12c876d1 pop edi */
  EDI = (pop32());
  /* 12c876d2 pop esi */
  ESI = (pop32());
  /* 12c876d3 pop ebx */
  EBX = (pop32());
  /* 12c876d4 ret  */
  ESPCHK(0x12c87681u, _esp0);
  ESP += 4; return;
}

/* FUN_100076d5 @ 0x12c876d5 (101 bytes, 34 insns) */
void f_12c876d5(void) {
  FTRACE(0x12c876d5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c876d5 push esi */
  push32((uint32_t)(ESI));
  /* 12c876d6 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 12c876da cmp esi, dword ptr [0x12cacb20] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x12cacb20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c876e0 jae 0x12c87722 */
  if (!C.cf) goto L_12c87722;
  /* 12c876e2 mov ecx, esi */
  ECX = (ESI);
  /* 12c876e4 mov eax, esi */
  EAX = (ESI);
  /* 12c876e6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12c876e9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12c876ec mov ecx, dword ptr [ecx*4 + 0x12caca20] */
  ECX = (r32((uint32_t)(ECX*4 + 0x12caca20)));
  /* 12c876f3 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 12c876f6 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 12c876fb je 0x12c87722 */
  if (C.zf) goto L_12c87722;
  /* 12c876fd push edi */
  push32((uint32_t)(EDI));
  /* 12c876fe push esi */
  push32((uint32_t)(ESI));
  /* 12c876ff call 0x12c8bad0 */
  push32(0x12c87704u); f_12c8bad0();
  /* 12c87704 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 12c87708 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 12c8770c push esi */
  push32((uint32_t)(ESI));
  /* 12c8770d call 0x12c8773a */
  push32(0x12c87712u); f_12c8773a();
  /* 12c87712 push esi */
  push32((uint32_t)(ESI));
  /* 12c87713 mov edi, eax */
  EDI = (EAX);
  /* 12c87715 call 0x12c8bb2f */
  push32(0x12c8771au); f_12c8bb2f();
  /* 12c8771a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8771d mov eax, edi */
  EAX = (EDI);
  /* 12c8771f pop edi */
  EDI = (pop32());
  /* 12c87720 pop esi */
  ESI = (pop32());
  /* 12c87721 ret  */
  ESPCHK(0x12c876d5u, _esp0);
  ESP += 4; return;
L_12c87722:;
  /* 12c87722 call 0x12c874b3 */
  push32(0x12c87727u); f_12c874b3();
  /* 12c87727 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12c8772d call 0x12c874bc */
  push32(0x12c87732u); f_12c874bc();
  /* 12c87732 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 12c87735 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c87738 pop esi */
  ESI = (pop32());
  /* 12c87739 ret  */
  ESPCHK(0x12c876d5u, _esp0);
  ESP += 4; return;
}

/* FUN_1000773a @ 0x12c8773a (115 bytes, 41 insns) */
void f_12c8773a(void) {
  FTRACE(0x12c8773au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8773a push esi */
  push32((uint32_t)(ESI));
  /* 12c8773b mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 12c8773f push edi */
  push32((uint32_t)(EDI));
  /* 12c87740 push esi */
  push32((uint32_t)(ESI));
  /* 12c87741 call 0x12c8ba8e */
  push32(0x12c87746u); f_12c8ba8e();
  /* 12c87746 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87749 pop ecx */
  ECX = (pop32());
  /* 12c8774a jne 0x12c87759 */
  if (!C.zf) goto L_12c87759;
  /* 12c8774c call 0x12c874b3 */
  push32(0x12c87751u); f_12c874b3();
  /* 12c87751 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12c87757 jmp 0x12c87786 */
  goto L_12c87786;
L_12c87759:;
  /* 12c87759 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 12c8775d push 0 */
  push32((uint32_t)(0x0u));
  /* 12c8775f push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 12c87763 push eax */
  push32((uint32_t)(EAX));
  /* 12c87764 call dword ptr [0x12c8e094] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e094))), 0x12c8776au);
  /* 12c8776a mov edi, eax */
  EDI = (EAX);
  /* 12c8776c cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8776f jne 0x12c87779 */
  if (!C.zf) goto L_12c87779;
  /* 12c87771 call dword ptr [0x12c8e078] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e078))), 0x12c87777u);
  /* 12c87777 jmp 0x12c8777b */
  goto L_12c8777b;
L_12c87779:;
  /* 12c87779 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c8777b:;
  /* 12c8777b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8777d je 0x12c8778b */
  if (C.zf) goto L_12c8778b;
  /* 12c8777f push eax */
  push32((uint32_t)(EAX));
  /* 12c87780 call 0x12c87440 */
  push32(0x12c87785u); f_12c87440();
  /* 12c87785 pop ecx */
  ECX = (pop32());
L_12c87786:;
  /* 12c87786 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c87789 jmp 0x12c877aa */
  goto L_12c877aa;
L_12c8778b:;
  /* 12c8778b mov ecx, esi */
  ECX = (ESI);
  /* 12c8778d and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 12c87790 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12c87793 mov eax, esi */
  EAX = (ESI);
  /* 12c87795 mov ecx, dword ptr [ecx*4 + 0x12caca20] */
  ECX = (r32((uint32_t)(ECX*4 + 0x12caca20)));
  /* 12c8779c lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 12c8779f and byte ptr [ecx + eax*4 + 4], 0xfd */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0xfdu); w8((uint32_t)(ECX + EAX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 12c877a4 lea eax, [ecx + eax*4 + 4] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0x4));
  /* 12c877a8 mov eax, edi */
  EAX = (EDI);
L_12c877aa:;
  /* 12c877aa pop edi */
  EDI = (pop32());
  /* 12c877ab pop esi */
  ESI = (pop32());
  /* 12c877ac ret  */
  ESPCHK(0x12c8773au, _esp0);
  ESP += 4; return;
}

/* FUN_100077ad @ 0x12c877ad (368 bytes, 124 insns) */
void f_12c877ad(void) {
  FTRACE(0x12c877adu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c877ad push ebp */
  push32((uint32_t)(EBP));
  /* 12c877ae mov ebp, esp */
  EBP = (ESP);
  /* 12c877b0 push ecx */
  push32((uint32_t)(ECX));
  /* 12c877b1 push ecx */
  push32((uint32_t)(ECX));
  /* 12c877b2 push ebx */
  push32((uint32_t)(EBX));
  /* 12c877b3 push esi */
  push32((uint32_t)(ESI));
  /* 12c877b4 mov esi, dword ptr [0x12cac610] */
  ESI = (r32((uint32_t)(0x12cac610)));
  /* 12c877ba push edi */
  push32((uint32_t)(EDI));
  /* 12c877bb mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 12c877be xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12c877c0 mov dword ptr [ebp - 8], ebx */
  w32((uint32_t)(EBP + -0x8), (EBX));
  /* 12c877c3 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 12c877c6 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 12c877c8 cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c877ca je 0x12c877e6 */
  if (C.zf) goto L_12c877e6;
  /* 12c877cc cmp al, 0x72 */
  { uint32_t _a=(AL),_b=(0x72u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c877ce je 0x12c877df */
  if (C.zf) goto L_12c877df;
  /* 12c877d0 cmp al, 0x77 */
  { uint32_t _a=(AL),_b=(0x77u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c877d2 jne 0x12c878fa */
  if (!C.zf) goto L_12c878fa;
  /* 12c877d8 mov ecx, 0x301 */
  ECX = (0x301u);
  /* 12c877dd jmp 0x12c877eb */
  goto L_12c877eb;
L_12c877df:;
  /* 12c877df xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c877e1 or esi, 1 */
  { uint32_t _r=(ESI)|(0x1u); ESI = (_r); fl_logic(_r,32); }
  /* 12c877e4 jmp 0x12c877ee */
  goto L_12c877ee;
L_12c877e6:;
  /* 12c877e6 mov ecx, 0x109 */
  ECX = (0x109u);
L_12c877eb:;
  /* 12c877eb or esi, 2 */
  { uint32_t _r=(ESI)|(0x2u); ESI = (_r); fl_logic(_r,32); }
L_12c877ee:;
  /* 12c877ee push 1 */
  push32((uint32_t)(0x1u));
  /* 12c877f0 pop edx */
  EDX = (pop32());
L_12c877f1:;
  /* 12c877f1 mov al, byte ptr [edi + 1] */
  AL = (r8((uint32_t)(EDI + 0x1)));
  /* 12c877f4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12c877f5 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c877f7 je 0x12c878e0 */
  if (C.zf) goto L_12c878e0;
  /* 12c877fd cmp edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c877ff je 0x12c878e0 */
  if (C.zf) goto L_12c878e0;
  /* 12c87805 movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 12c87808 cmp eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8780b jg 0x12c8787f */
  if ((!C.zf&&C.sf==C.of)) goto L_12c8787f;
  /* 12c8780d je 0x12c8786f */
  if (C.zf) goto L_12c8786f;
  /* 12c8780f sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c87812 je 0x12c87859 */
  if (C.zf) goto L_12c87859;
  /* 12c87814 sub eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c87817 je 0x12c8784f */
  if (C.zf) goto L_12c8784f;
  /* 12c87819 sub eax, 0xe */
  { uint32_t _a=(EAX),_b=(0xeu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8781c je 0x12c8783a */
  if (C.zf) goto L_12c8783a;
  /* 12c8781e dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 12c8781f jne 0x12c878d1 */
  if (!C.zf) goto L_12c878d1;
  /* 12c87825 cmp dword ptr [ebp - 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87828 jne 0x12c878d1 */
  if (!C.zf) goto L_12c878d1;
  /* 12c8782e mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12c87835 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 12c87838 jmp 0x12c877f1 */
  goto L_12c877f1;
L_12c8783a:;
  /* 12c8783a cmp dword ptr [ebp - 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8783d jne 0x12c878d1 */
  if (!C.zf) goto L_12c878d1;
  /* 12c87843 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12c8784a or ecx, 0x10 */
  { uint32_t _r=(ECX)|(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 12c8784d jmp 0x12c877f1 */
  goto L_12c877f1;
L_12c8784f:;
  /* 12c8784f test cl, 0x40 */
  { uint32_t _r=(CL)&(0x40u); fl_logic(_r,8); }
  /* 12c87852 jne 0x12c878d1 */
  if (!C.zf) goto L_12c878d1;
  /* 12c87854 or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 12c87857 jmp 0x12c877f1 */
  goto L_12c877f1;
L_12c87859:;
  /* 12c87859 test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 12c8785c jne 0x12c878d1 */
  if (!C.zf) goto L_12c878d1;
  /* 12c8785e and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 12c87861 and esi, 0xfffffffc */
  { uint32_t _r=(ESI)&(0xfffffffcu); ESI = (_r); fl_logic(_r,32); }
  /* 12c87864 or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12c87867 or esi, 0x80 */
  { uint32_t _r=(ESI)|(0x80u); ESI = (_r); fl_logic(_r,32); }
  /* 12c8786d jmp 0x12c877f1 */
  goto L_12c877f1;
L_12c8786f:;
  /* 12c8786f mov eax, 0x1000 */
  EAX = (0x1000u);
  /* 12c87874 test eax, ecx */
  { uint32_t _r=(EAX)&(ECX); fl_logic(_r,32); }
  /* 12c87876 jne 0x12c878d1 */
  if (!C.zf) goto L_12c878d1;
  /* 12c87878 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c8787a jmp 0x12c877f1 */
  goto L_12c877f1;
L_12c8787f:;
  /* 12c8787f sub eax, 0x62 */
  { uint32_t _a=(EAX),_b=(0x62u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c87882 je 0x12c878cc */
  if (C.zf) goto L_12c878cc;
  /* 12c87884 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 12c87885 je 0x12c878b5 */
  if (C.zf) goto L_12c878b5;
  /* 12c87887 sub eax, 0xb */
  { uint32_t _a=(EAX),_b=(0xbu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8788a je 0x12c8789e */
  if (C.zf) goto L_12c8789e;
  /* 12c8788c sub eax, 6 */
  { uint32_t _a=(EAX),_b=(0x6u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8788f jne 0x12c878d1 */
  if (!C.zf) goto L_12c878d1;
  /* 12c87891 test ch, 0xc0 */
  { uint32_t _r=(C.c.b.h)&(0xc0u); fl_logic(_r,8); }
  /* 12c87894 jne 0x12c878d1 */
  if (!C.zf) goto L_12c878d1;
  /* 12c87896 or ch, 0x40 */
  { uint32_t _r=(C.c.b.h)|(0x40u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12c87899 jmp 0x12c877f1 */
  goto L_12c877f1;
L_12c8789e:;
  /* 12c8789e cmp dword ptr [ebp - 8], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c878a1 jne 0x12c878d1 */
  if (!C.zf) goto L_12c878d1;
  /* 12c878a3 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12c878aa and esi, 0xffffbfff */
  { uint32_t _r=(ESI)&(0xffffbfffu); ESI = (_r); fl_logic(_r,32); }
  /* 12c878b0 jmp 0x12c877f1 */
  goto L_12c877f1;
L_12c878b5:;
  /* 12c878b5 cmp dword ptr [ebp - 8], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c878b8 jne 0x12c878d1 */
  if (!C.zf) goto L_12c878d1;
  /* 12c878ba mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12c878c1 or esi, 0x4000 */
  { uint32_t _r=(ESI)|(0x4000u); ESI = (_r); fl_logic(_r,32); }
  /* 12c878c7 jmp 0x12c877f1 */
  goto L_12c877f1;
L_12c878cc:;
  /* 12c878cc test ch, 0xc0 */
  { uint32_t _r=(C.c.b.h)&(0xc0u); fl_logic(_r,8); }
  /* 12c878cf je 0x12c878d8 */
  if (C.zf) goto L_12c878d8;
L_12c878d1:;
  /* 12c878d1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c878d3 jmp 0x12c877f1 */
  goto L_12c877f1;
L_12c878d8:;
  /* 12c878d8 or ch, 0x80 */
  { uint32_t _r=(C.c.b.h)|(0x80u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12c878db jmp 0x12c877f1 */
  goto L_12c877f1;
L_12c878e0:;
  /* 12c878e0 push 0x1a4 */
  push32((uint32_t)(0x1a4u));
  /* 12c878e5 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 12c878e8 push ecx */
  push32((uint32_t)(ECX));
  /* 12c878e9 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c878ec call 0x12c8bc28 */
  push32(0x12c878f1u); f_12c8bc28();
  /* 12c878f1 mov ecx, eax */
  ECX = (EAX);
  /* 12c878f3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c878f6 cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c878f8 jge 0x12c878fe */
  if ((C.sf==C.of)) goto L_12c878fe;
L_12c878fa:;
  /* 12c878fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c878fc jmp 0x12c87918 */
  goto L_12c87918;
L_12c878fe:;
  /* 12c878fe mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c87901 inc dword ptr [0x12cac4f0] */
  { uint32_t _r=(r32((uint32_t)(0x12cac4f0)))+1; w32((uint32_t)(0x12cac4f0), (_r)); fl_inc(_r,32); }
  /* 12c87907 mov dword ptr [eax + 0xc], esi */
  w32((uint32_t)(EAX + 0xc), (ESI));
  /* 12c8790a mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 12c8790d mov dword ptr [eax], ebx */
  w32((uint32_t)(EAX), (EBX));
  /* 12c8790f mov dword ptr [eax + 8], ebx */
  w32((uint32_t)(EAX + 0x8), (EBX));
  /* 12c87912 mov dword ptr [eax + 0x1c], ebx */
  w32((uint32_t)(EAX + 0x1c), (EBX));
  /* 12c87915 mov dword ptr [eax + 0x10], ecx */
  w32((uint32_t)(EAX + 0x10), (ECX));
L_12c87918:;
  /* 12c87918 pop edi */
  EDI = (pop32());
  /* 12c87919 pop esi */
  ESI = (pop32());
  /* 12c8791a pop ebx */
  EBX = (pop32());
  /* 12c8791b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c8791c ret  */
  ESPCHK(0x12c877adu, _esp0);
  ESP += 4; return;
}

/* FUN_1000791d @ 0x12c8791d (200 bytes, 73 insns) */
void f_12c8791d(void) {
  FTRACE(0x12c8791du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8791d push ebx */
  push32((uint32_t)(EBX));
  /* 12c8791e push esi */
  push32((uint32_t)(ESI));
  /* 12c8791f push edi */
  push32((uint32_t)(EDI));
  /* 12c87920 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c87922 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12c87924 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 12c87926 call 0x12c86c88 */
  push32(0x12c8792bu); f_12c86c88();
  /* 12c8792b xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 12c8792d cmp dword ptr [0x12cadb40], ebx */
  { uint32_t _a=(r32((uint32_t)(0x12cadb40))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87933 pop ecx */
  ECX = (pop32());
  /* 12c87934 jle 0x12c879d7 */
  if ((C.zf||C.sf!=C.of)) goto L_12c879d7;
L_12c8793a:;
  /* 12c8793a mov eax, dword ptr [0x12cacb24] */
  EAX = (r32((uint32_t)(0x12cacb24)));
  /* 12c8793f mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 12c87942 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87944 je 0x12c8797d */
  if (C.zf) goto L_12c8797d;
  /* 12c87946 test byte ptr [eax + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 12c8794a jne 0x12c8796d */
  if (!C.zf) goto L_12c8796d;
  /* 12c8794c push eax */
  push32((uint32_t)(EAX));
  /* 12c8794d push esi */
  push32((uint32_t)(ESI));
  /* 12c8794e call 0x12c86e6f */
  push32(0x12c87953u); f_12c86e6f();
  /* 12c87953 pop ecx */
  ECX = (pop32());
  /* 12c87954 pop ecx */
  ECX = (pop32());
  /* 12c87955 mov ecx, dword ptr [0x12cacb24] */
  ECX = (r32((uint32_t)(0x12cacb24)));
  /* 12c8795b mov eax, dword ptr [ecx + esi*4] */
  EAX = (r32((uint32_t)(ECX + ESI*4)));
  /* 12c8795e test byte ptr [eax + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 12c87962 je 0x12c87978 */
  if (C.zf) goto L_12c87978;
  /* 12c87964 push eax */
  push32((uint32_t)(EAX));
  /* 12c87965 push esi */
  push32((uint32_t)(ESI));
  /* 12c87966 call 0x12c86ec1 */
  push32(0x12c8796bu); f_12c86ec1();
  /* 12c8796b pop ecx */
  ECX = (pop32());
  /* 12c8796c pop ecx */
  ECX = (pop32());
L_12c8796d:;
  /* 12c8796d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c8796e cmp esi, dword ptr [0x12cadb40] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x12cadb40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87974 jl 0x12c8793a */
  if ((C.sf!=C.of)) goto L_12c8793a;
  /* 12c87976 jmp 0x12c879d7 */
  goto L_12c879d7;
L_12c87978:;
  /* 12c87978 mov edi, dword ptr [ecx + esi*4] */
  EDI = (r32((uint32_t)(ECX + ESI*4)));
  /* 12c8797b jmp 0x12c879c1 */
  goto L_12c879c1;
L_12c8797d:;
  /* 12c8797d push 0x38 */
  push32((uint32_t)(0x38u));
  /* 12c8797f shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 12c87982 call 0x12c86920 */
  push32(0x12c87987u); f_12c86920();
  /* 12c87987 pop ecx */
  ECX = (pop32());
  /* 12c87988 mov ecx, dword ptr [0x12cacb24] */
  ECX = (r32((uint32_t)(0x12cacb24)));
  /* 12c8798e mov dword ptr [esi + ecx], eax */
  w32((uint32_t)(ESI + ECX*1), (EAX));
  /* 12c87991 mov eax, dword ptr [0x12cacb24] */
  EAX = (r32((uint32_t)(0x12cacb24)));
  /* 12c87996 mov eax, dword ptr [esi + eax] */
  EAX = (r32((uint32_t)(ESI + EAX*1)));
  /* 12c87999 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8799b je 0x12c879d7 */
  if (C.zf) goto L_12c879d7;
  /* 12c8799d add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c879a0 push eax */
  push32((uint32_t)(EAX));
  /* 12c879a1 call dword ptr [0x12c8e068] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e068))), 0x12c879a7u);
  /* 12c879a7 mov eax, dword ptr [0x12cacb24] */
  EAX = (r32((uint32_t)(0x12cacb24)));
  /* 12c879ac mov eax, dword ptr [esi + eax] */
  EAX = (r32((uint32_t)(ESI + EAX*1)));
  /* 12c879af add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c879b2 push eax */
  push32((uint32_t)(EAX));
  /* 12c879b3 call dword ptr [0x12c8e070] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e070))), 0x12c879b9u);
  /* 12c879b9 mov eax, dword ptr [0x12cacb24] */
  EAX = (r32((uint32_t)(0x12cacb24)));
  /* 12c879be mov edi, dword ptr [esi + eax] */
  EDI = (r32((uint32_t)(ESI + EAX*1)));
L_12c879c1:;
  /* 12c879c1 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c879c3 je 0x12c879d7 */
  if (C.zf) goto L_12c879d7;
  /* 12c879c5 or dword ptr [edi + 0x10], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EDI + 0x10)))|(0xffffffffu); w32((uint32_t)(EDI + 0x10), (_r)); fl_logic(_r,32); }
  /* 12c879c9 mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
  /* 12c879cc mov dword ptr [edi + 0xc], ebx */
  w32((uint32_t)(EDI + 0xc), (EBX));
  /* 12c879cf mov dword ptr [edi + 8], ebx */
  w32((uint32_t)(EDI + 0x8), (EBX));
  /* 12c879d2 mov dword ptr [edi], ebx */
  w32((uint32_t)(EDI), (EBX));
  /* 12c879d4 mov dword ptr [edi + 0x1c], ebx */
  w32((uint32_t)(EDI + 0x1c), (EBX));
L_12c879d7:;
  /* 12c879d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c879d9 call 0x12c86ce9 */
  push32(0x12c879deu); f_12c86ce9();
  /* 12c879de pop ecx */
  ECX = (pop32());
  /* 12c879df mov eax, edi */
  EAX = (EDI);
  /* 12c879e1 pop edi */
  EDI = (pop32());
  /* 12c879e2 pop esi */
  ESI = (pop32());
  /* 12c879e3 pop ebx */
  EBX = (pop32());
  /* 12c879e4 ret  */
  ESPCHK(0x12c8791du, _esp0);
  ESP += 4; return;
}

/* FUN_100079e5 @ 0x12c879e5 (155 bytes, 61 insns) */
void f_12c879e5(void) {
  FTRACE(0x12c879e5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c879e5 push ebp */
  push32((uint32_t)(EBP));
  /* 12c879e6 mov ebp, esp */
  EBP = (ESP);
  /* 12c879e8 push esi */
  push32((uint32_t)(ESI));
  /* 12c879e9 mov esi, dword ptr [ebp + 0x18] */
  ESI = (r32((uint32_t)(EBP + 0x18)));
  /* 12c879ec push edi */
  push32((uint32_t)(EDI));
  /* 12c879ed mov edi, 0x19930520 */
  EDI = (0x19930520u);
  /* 12c879f2 cmp dword ptr [esi], edi */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c879f4 je 0x12c879fb */
  if (C.zf) goto L_12c879fb;
  /* 12c879f6 call 0x12c86b9d */
  push32(0x12c879fbu); f_12c86b9d();
L_12c879fb:;
  /* 12c879fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c879fe test byte ptr [eax + 4], 0x66 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x66u); fl_logic(_r,8); }
  /* 12c87a02 je 0x12c87a23 */
  if (C.zf) goto L_12c87a23;
  /* 12c87a04 cmp dword ptr [esi + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87a08 je 0x12c87a79 */
  if (C.zf) goto L_12c87a79;
  /* 12c87a0a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87a0e jne 0x12c87a79 */
  if (!C.zf) goto L_12c87a79;
  /* 12c87a10 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c87a12 push esi */
  push32((uint32_t)(ESI));
  /* 12c87a13 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 12c87a16 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 12c87a19 call 0x12c87d3a */
  push32(0x12c87a1eu); f_12c87d3a();
  /* 12c87a1e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c87a21 jmp 0x12c87a79 */
  goto L_12c87a79;
L_12c87a23:;
  /* 12c87a23 cmp dword ptr [esi + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87a27 je 0x12c87a79 */
  if (C.zf) goto L_12c87a79;
  /* 12c87a29 cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87a2f jne 0x12c87a5d */
  if (!C.zf) goto L_12c87a5d;
  /* 12c87a31 cmp dword ptr [eax + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87a34 jbe 0x12c87a5d */
  if ((C.cf||C.zf)) goto L_12c87a5d;
  /* 12c87a36 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12c87a39 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 12c87a3c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c87a3e je 0x12c87a5d */
  if (C.zf) goto L_12c87a5d;
  /* 12c87a40 movzx edx, byte ptr [ebp + 0x24] */
  EDX = ((uint32_t)(r8((uint32_t)(EBP + 0x24))));
  /* 12c87a44 push edx */
  push32((uint32_t)(EDX));
  /* 12c87a45 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 12c87a48 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 12c87a4b push esi */
  push32((uint32_t)(ESI));
  /* 12c87a4c push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 12c87a4f push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 12c87a52 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 12c87a55 push eax */
  push32((uint32_t)(EAX));
  /* 12c87a56 call ecx */
  call_ind((uint32_t)(ECX), 0x12c87a58u);
  /* 12c87a58 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c87a5b jmp 0x12c87a7c */
  goto L_12c87a7c;
L_12c87a5d:;
  /* 12c87a5d push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 12c87a60 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 12c87a63 push dword ptr [ebp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x24))));
  /* 12c87a66 push esi */
  push32((uint32_t)(ESI));
  /* 12c87a67 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 12c87a6a push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 12c87a6d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 12c87a70 push eax */
  push32((uint32_t)(EAX));
  /* 12c87a71 call 0x12c87a80 */
  push32(0x12c87a76u); f_12c87a80();
  /* 12c87a76 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c87a79:;
  /* 12c87a79 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c87a7b pop eax */
  EAX = (pop32());
L_12c87a7c:;
  /* 12c87a7c pop edi */
  EDI = (pop32());
  /* 12c87a7d pop esi */
  ESI = (pop32());
  /* 12c87a7e pop ebp */
  EBP = (pop32());
  /* 12c87a7f ret  */
  ESPCHK(0x12c879e5u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a80 @ 0x12c87a80 (435 bytes, 149 insns) */
void f_12c87a80(void) {
  FTRACE(0x12c87a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c87a80 push ebp */
  push32((uint32_t)(EBP));
  /* 12c87a81 mov ebp, esp */
  EBP = (ESP);
  /* 12c87a83 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c87a86 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c87a89 and byte ptr [ebp - 0x14], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x14)))&(0x0u); w8((uint32_t)(EBP + -0x14), (_r)); fl_logic(_r,8); }
  /* 12c87a8d mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 12c87a90 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87a93 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12c87a96 jl 0x12c87aa0 */
  if ((C.sf!=C.of)) goto L_12c87aa0;
  /* 12c87a98 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c87a9b cmp eax, dword ptr [ecx + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87a9e jl 0x12c87aa5 */
  if ((C.sf!=C.of)) goto L_12c87aa5;
L_12c87aa0:;
  /* 12c87aa0 call 0x12c86b9d */
  push32(0x12c87aa5u); f_12c86b9d();
L_12c87aa5:;
  /* 12c87aa5 push ebx */
  push32((uint32_t)(EBX));
  /* 12c87aa6 push esi */
  push32((uint32_t)(ESI));
  /* 12c87aa7 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12c87aaa mov ebx, 0xe06d7363 */
  EBX = (0xe06d7363u);
  /* 12c87aaf push edi */
  push32((uint32_t)(EDI));
  /* 12c87ab0 mov edi, 0x19930520 */
  EDI = (0x19930520u);
  /* 12c87ab5 cmp dword ptr [esi], ebx */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87ab7 jne 0x12c87c08 */
  if (!C.zf) goto L_12c87c08;
  /* 12c87abd cmp dword ptr [esi + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87ac1 jne 0x12c87b25 */
  if (!C.zf) goto L_12c87b25;
  /* 12c87ac3 cmp dword ptr [esi + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87ac6 jne 0x12c87b25 */
  if (!C.zf) goto L_12c87b25;
  /* 12c87ac8 cmp dword ptr [esi + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87acc jne 0x12c87b25 */
  if (!C.zf) goto L_12c87b25;
  /* 12c87ace call 0x12c882c1 */
  push32(0x12c87ad3u); f_12c882c1();
  /* 12c87ad3 cmp dword ptr [eax + 0x6c], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87ad7 je 0x12c87c03 */
  if (C.zf) goto L_12c87c03;
  /* 12c87add call 0x12c882c1 */
  push32(0x12c87ae2u); f_12c882c1();
  /* 12c87ae2 mov esi, dword ptr [eax + 0x6c] */
  ESI = (r32((uint32_t)(EAX + 0x6c)));
  /* 12c87ae5 call 0x12c882c1 */
  push32(0x12c87aeau); f_12c882c1();
  /* 12c87aea mov eax, dword ptr [eax + 0x70] */
  EAX = (r32((uint32_t)(EAX + 0x70)));
  /* 12c87aed push 1 */
  push32((uint32_t)(0x1u));
  /* 12c87aef push esi */
  push32((uint32_t)(ESI));
  /* 12c87af0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 12c87af3 mov byte ptr [ebp - 0x14], 1 */
  w8((uint32_t)(EBP + -0x14), (0x1u));
  /* 12c87af7 call 0x12c8bef7 */
  push32(0x12c87afcu); f_12c8bef7();
  /* 12c87afc pop ecx */
  ECX = (pop32());
  /* 12c87afd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c87aff pop ecx */
  ECX = (pop32());
  /* 12c87b00 jne 0x12c87b07 */
  if (!C.zf) goto L_12c87b07;
  /* 12c87b02 call 0x12c86b9d */
  push32(0x12c87b07u); f_12c86b9d();
L_12c87b07:;
  /* 12c87b07 cmp dword ptr [esi], ebx */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87b09 jne 0x12c87c08 */
  if (!C.zf) goto L_12c87c08;
  /* 12c87b0f cmp dword ptr [esi + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87b13 jne 0x12c87b25 */
  if (!C.zf) goto L_12c87b25;
  /* 12c87b15 cmp dword ptr [esi + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87b18 jne 0x12c87b25 */
  if (!C.zf) goto L_12c87b25;
  /* 12c87b1a cmp dword ptr [esi + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87b1e jne 0x12c87b25 */
  if (!C.zf) goto L_12c87b25;
  /* 12c87b20 call 0x12c86b9d */
  push32(0x12c87b25u); f_12c86b9d();
L_12c87b25:;
  /* 12c87b25 cmp dword ptr [esi], ebx */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87b27 jne 0x12c87c08 */
  if (!C.zf) goto L_12c87c08;
  /* 12c87b2d cmp dword ptr [esi + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87b31 jne 0x12c87c08 */
  if (!C.zf) goto L_12c87c08;
  /* 12c87b37 cmp dword ptr [esi + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87b3a jne 0x12c87c08 */
  if (!C.zf) goto L_12c87c08;
  /* 12c87b40 mov edi, dword ptr [ebp - 0x10] */
  EDI = (r32((uint32_t)(EBP + -0x10)));
  /* 12c87b43 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 12c87b46 push eax */
  push32((uint32_t)(EAX));
  /* 12c87b47 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 12c87b4a push eax */
  push32((uint32_t)(EAX));
  /* 12c87b4b push edi */
  push32((uint32_t)(EDI));
  /* 12c87b4c push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 12c87b4f push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 12c87b52 call 0x12c853f0 */
  push32(0x12c87b57u); f_12c853f0();
  /* 12c87b57 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c87b5a mov ebx, eax */
  EBX = (EAX);
L_12c87b5c:;
  /* 12c87b5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c87b5f cmp eax, dword ptr [ebp - 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87b62 jae 0x12c87bf3 */
  if (!C.cf) goto L_12c87bf3;
  /* 12c87b68 cmp dword ptr [ebx], edi */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87b6a jg 0x12c87be8 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c87be8;
  /* 12c87b6c cmp edi, dword ptr [ebx + 4] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EBX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87b6f jg 0x12c87be8 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c87be8;
  /* 12c87b71 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 12c87b74 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12c87b77 mov eax, dword ptr [ebx + 0xc] */
  EAX = (r32((uint32_t)(EBX + 0xc)));
  /* 12c87b7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c87b7c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c87b7f jle 0x12c87be5 */
  if ((C.zf||C.sf!=C.of)) goto L_12c87be5;
L_12c87b81:;
  /* 12c87b81 mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 12c87b84 mov eax, dword ptr [eax + 0xc] */
  EAX = (r32((uint32_t)(EAX + 0xc)));
  /* 12c87b87 lea edi, [eax + 4] */
  EDI = ((uint32_t)(EAX + 0x4));
  /* 12c87b8a mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 12c87b8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c87b8e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c87b91 jle 0x12c87bb2 */
  if ((C.zf||C.sf!=C.of)) goto L_12c87bb2;
L_12c87b93:;
  /* 12c87b93 push dword ptr [esi + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x1c))));
  /* 12c87b96 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 12c87b98 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c87b9b call 0x12c87cdd */
  push32(0x12c87ba0u); f_12c87cdd();
  /* 12c87ba0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c87ba3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c87ba5 jne 0x12c87bc1 */
  if (!C.zf) goto L_12c87bc1;
  /* 12c87ba7 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 12c87baa add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c87bad cmp dword ptr [ebp - 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87bb0 jg 0x12c87b93 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c87b93;
L_12c87bb2:;
  /* 12c87bb2 dec dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))-1; w32((uint32_t)(EBP + -0xc), (_r)); fl_dec(_r,32); }
  /* 12c87bb5 add dword ptr [ebp + 8], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 12c87bb9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87bbd jg 0x12c87b81 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c87b81;
  /* 12c87bbf jmp 0x12c87be5 */
  goto L_12c87be5;
L_12c87bc1:;
  /* 12c87bc1 push dword ptr [ebp - 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x14))));
  /* 12c87bc4 push dword ptr [ebp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x24))));
  /* 12c87bc7 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 12c87bca push ebx */
  push32((uint32_t)(EBX));
  /* 12c87bcb push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 12c87bcd push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c87bd0 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 12c87bd3 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 12c87bd6 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 12c87bd9 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 12c87bdc push esi */
  push32((uint32_t)(ESI));
  /* 12c87bdd call 0x12c87dd8 */
  push32(0x12c87be2u); f_12c87dd8();
  /* 12c87be2 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c87be5:;
  /* 12c87be5 mov edi, dword ptr [ebp - 0x10] */
  EDI = (r32((uint32_t)(EBP + -0x10)));
L_12c87be8:;
  /* 12c87be8 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 12c87beb add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c87bee jmp 0x12c87b5c */
  goto L_12c87b5c;
L_12c87bf3:;
  /* 12c87bf3 cmp byte ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c87bf7 je 0x12c87c03 */
  if (C.zf) goto L_12c87c03;
  /* 12c87bf9 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c87bfb push esi */
  push32((uint32_t)(ESI));
  /* 12c87bfc call 0x12c8815c */
  push32(0x12c87c01u); f_12c8815c();
  /* 12c87c01 pop ecx */
  ECX = (pop32());
  /* 12c87c02 pop ecx */
  ECX = (pop32());
L_12c87c03:;
  /* 12c87c03 pop edi */
  EDI = (pop32());
  /* 12c87c04 pop esi */
  ESI = (pop32());
  /* 12c87c05 pop ebx */
  EBX = (pop32());
  /* 12c87c06 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c87c07 ret  */
  ESPCHK(0x12c87a80u, _esp0);
  ESP += 4; return;
L_12c87c08:;
  /* 12c87c08 cmp byte ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c87c0c jne 0x12c87c2e */
  if (!C.zf) goto L_12c87c2e;
  /* 12c87c0e push dword ptr [ebp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x24))));
  /* 12c87c11 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 12c87c14 push dword ptr [ebp - 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x10))));
  /* 12c87c17 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 12c87c1a push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 12c87c1d push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 12c87c20 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 12c87c23 push esi */
  push32((uint32_t)(ESI));
  /* 12c87c24 call 0x12c87c33 */
  push32(0x12c87c29u); f_12c87c33();
  /* 12c87c29 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c87c2c jmp 0x12c87c03 */
  goto L_12c87c03;
L_12c87c2e:;
  /* 12c87c2e jmp 0x12c86b3c */
  f_12c86b3c(); return;
}

/* FUN_10007c33 @ 0x12c87c33 (170 bytes, 68 insns) */
void f_12c87c33(void) {
  FTRACE(0x12c87c33u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c87c33 push ebp */
  push32((uint32_t)(EBP));
  /* 12c87c34 mov ebp, esp */
  EBP = (ESP);
  /* 12c87c36 push ecx */
  push32((uint32_t)(ECX));
  /* 12c87c37 push ecx */
  push32((uint32_t)(ECX));
  /* 12c87c38 push esi */
  push32((uint32_t)(ESI));
  /* 12c87c39 push edi */
  push32((uint32_t)(EDI));
  /* 12c87c3a call 0x12c882c1 */
  push32(0x12c87c3fu); f_12c882c1();
  /* 12c87c3f cmp dword ptr [eax + 0x68], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87c43 je 0x12c87c66 */
  if (C.zf) goto L_12c87c66;
  /* 12c87c45 push dword ptr [ebp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x24))));
  /* 12c87c48 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 12c87c4b push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 12c87c4e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 12c87c51 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 12c87c54 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 12c87c57 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c87c5a call 0x12c852c5 */
  push32(0x12c87c5fu); f_12c852c5();
  /* 12c87c5f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c87c62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c87c64 jne 0x12c87cd9 */
  if (!C.zf) goto L_12c87cd9;
L_12c87c66:;
  /* 12c87c66 mov edi, dword ptr [ebp + 0x1c] */
  EDI = (r32((uint32_t)(EBP + 0x1c)));
  /* 12c87c69 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12c87c6c push eax */
  push32((uint32_t)(EAX));
  /* 12c87c6d lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 12c87c70 push eax */
  push32((uint32_t)(EAX));
  /* 12c87c71 push edi */
  push32((uint32_t)(EDI));
  /* 12c87c72 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 12c87c75 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 12c87c78 call 0x12c853f0 */
  push32(0x12c87c7du); f_12c853f0();
  /* 12c87c7d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c87c80 mov esi, eax */
  ESI = (EAX);
L_12c87c82:;
  /* 12c87c82 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c87c85 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87c88 jae 0x12c87cd9 */
  if (!C.cf) goto L_12c87cd9;
  /* 12c87c8a cmp edi, dword ptr [esi] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ESI))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87c8c jl 0x12c87cd1 */
  if ((C.sf!=C.of)) goto L_12c87cd1;
  /* 12c87c8e cmp edi, dword ptr [esi + 4] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ESI + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87c91 jg 0x12c87cd1 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c87cd1;
  /* 12c87c93 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 12c87c96 mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 12c87c99 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12c87c9c add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c87c9e mov ecx, dword ptr [eax - 0xc] */
  ECX = (r32((uint32_t)(EAX + -0xc)));
  /* 12c87ca1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c87ca3 je 0x12c87cab */
  if (C.zf) goto L_12c87cab;
  /* 12c87ca5 cmp byte ptr [ecx + 8], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c87ca9 jne 0x12c87cd1 */
  if (!C.zf) goto L_12c87cd1;
L_12c87cab:;
  /* 12c87cab push 1 */
  push32((uint32_t)(0x1u));
  /* 12c87cad add eax, -0x10 */
  { uint32_t _a=(EAX),_b=(0xfffffff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c87cb0 push dword ptr [ebp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x24))));
  /* 12c87cb3 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 12c87cb6 push esi */
  push32((uint32_t)(ESI));
  /* 12c87cb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c87cb9 push eax */
  push32((uint32_t)(EAX));
  /* 12c87cba push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 12c87cbd push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 12c87cc0 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 12c87cc3 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 12c87cc6 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c87cc9 call 0x12c87dd8 */
  push32(0x12c87cceu); f_12c87dd8();
  /* 12c87cce add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c87cd1:;
  /* 12c87cd1 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 12c87cd4 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c87cd7 jmp 0x12c87c82 */
  goto L_12c87c82;
L_12c87cd9:;
  /* 12c87cd9 pop edi */
  EDI = (pop32());
  /* 12c87cda pop esi */
  ESI = (pop32());
  /* 12c87cdb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c87cdc ret  */
  ESPCHK(0x12c87c33u, _esp0);
  ESP += 4; return;
}

/* FUN_10007cdd @ 0x12c87cdd (93 bytes, 42 insns) */
void f_12c87cdd(void) {
  FTRACE(0x12c87cddu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c87cdd push esi */
  push32((uint32_t)(ESI));
  /* 12c87cde push edi */
  push32((uint32_t)(EDI));
  /* 12c87cdf mov edi, dword ptr [esp + 0xc] */
  EDI = (r32((uint32_t)(ESP + 0xc)));
  /* 12c87ce3 mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 12c87ce6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c87ce8 je 0x12c87d34 */
  if (C.zf) goto L_12c87d34;
  /* 12c87cea cmp byte ptr [eax + 8], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c87cee lea edx, [eax + 8] */
  EDX = ((uint32_t)(EAX + 0x8));
  /* 12c87cf1 je 0x12c87d34 */
  if (C.zf) goto L_12c87d34;
  /* 12c87cf3 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 12c87cf7 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 12c87cfa cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87cfc je 0x12c87d0e */
  if (C.zf) goto L_12c87d0e;
  /* 12c87cfe add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c87d01 push ecx */
  push32((uint32_t)(ECX));
  /* 12c87d02 push edx */
  push32((uint32_t)(EDX));
  /* 12c87d03 call 0x12c86d00 */
  push32(0x12c87d08u); f_12c86d00();
  /* 12c87d08 pop ecx */
  ECX = (pop32());
  /* 12c87d09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c87d0b pop ecx */
  ECX = (pop32());
  /* 12c87d0c jne 0x12c87d30 */
  if (!C.zf) goto L_12c87d30;
L_12c87d0e:;
  /* 12c87d0e test byte ptr [esi], 2 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x2u); fl_logic(_r,8); }
  /* 12c87d11 je 0x12c87d18 */
  if (C.zf) goto L_12c87d18;
  /* 12c87d13 test byte ptr [edi], 8 */
  { uint32_t _r=(r8((uint32_t)(EDI)))&(0x8u); fl_logic(_r,8); }
  /* 12c87d16 je 0x12c87d30 */
  if (C.zf) goto L_12c87d30;
L_12c87d18:;
  /* 12c87d18 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 12c87d1c mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 12c87d1e test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 12c87d20 je 0x12c87d27 */
  if (C.zf) goto L_12c87d27;
  /* 12c87d22 test byte ptr [edi], 1 */
  { uint32_t _r=(r8((uint32_t)(EDI)))&(0x1u); fl_logic(_r,8); }
  /* 12c87d25 je 0x12c87d30 */
  if (C.zf) goto L_12c87d30;
L_12c87d27:;
  /* 12c87d27 test al, 2 */
  { uint32_t _r=(AL)&(0x2u); fl_logic(_r,8); }
  /* 12c87d29 je 0x12c87d34 */
  if (C.zf) goto L_12c87d34;
  /* 12c87d2b test byte ptr [edi], 2 */
  { uint32_t _r=(r8((uint32_t)(EDI)))&(0x2u); fl_logic(_r,8); }
  /* 12c87d2e jne 0x12c87d34 */
  if (!C.zf) goto L_12c87d34;
L_12c87d30:;
  /* 12c87d30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c87d32 jmp 0x12c87d37 */
  goto L_12c87d37;
L_12c87d34:;
  /* 12c87d34 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c87d36 pop eax */
  EAX = (pop32());
L_12c87d37:;
  /* 12c87d37 pop edi */
  EDI = (pop32());
  /* 12c87d38 pop esi */
  ESI = (pop32());
  /* 12c87d39 ret  */
  ESPCHK(0x12c87cddu, _esp0);
  ESP += 4; return;
}

/* FUN_10007d3a @ 0x12c87d3a (132 bytes, 56 insns) */
void f_12c87d3a(void) {
  FTRACE(0x12c87d3au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c87d3a push ebp */
  push32((uint32_t)(EBP));
  /* 12c87d3b mov ebp, esp */
  EBP = (ESP);
  /* 12c87d3d push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c87d3f push 0x12c8e2d0 */
  push32((uint32_t)(0x12c8e2d0u));
  /* 12c87d44 push 0x12c86a64 */
  push32((uint32_t)(0x12c86a64u));
  /* 12c87d49 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12c87d4f push eax */
  push32((uint32_t)(EAX));
  /* 12c87d50 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12c87d57 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c87d5a push ebx */
  push32((uint32_t)(EBX));
  /* 12c87d5b push esi */
  push32((uint32_t)(ESI));
  /* 12c87d5c push edi */
  push32((uint32_t)(EDI));
  /* 12c87d5d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12c87d60 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c87d63 mov esi, dword ptr [ebx + 8] */
  ESI = (r32((uint32_t)(EBX + 0x8)));
  /* 12c87d66 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 12c87d69 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
L_12c87d6c:;
  /* 12c87d6c cmp esi, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87d6f je 0x12c87dc6 */
  if (C.zf) goto L_12c87dc6;
  /* 12c87d71 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87d74 jle 0x12c87d7b */
  if ((C.zf||C.sf!=C.of)) goto L_12c87d7b;
  /* 12c87d76 cmp esi, dword ptr [edi + 4] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87d79 jl 0x12c87d80 */
  if ((C.sf!=C.of)) goto L_12c87d80;
L_12c87d7b:;
  /* 12c87d7b call 0x12c86b9d */
  push32(0x12c87d80u); f_12c86b9d();
L_12c87d80:;
  /* 12c87d80 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c87d84 mov eax, dword ptr [edi + 8] */
  EAX = (r32((uint32_t)(EDI + 0x8)));
  /* 12c87d87 mov eax, dword ptr [eax + esi*8 + 4] */
  EAX = (r32((uint32_t)(EAX + ESI*8 + 0x4)));
  /* 12c87d8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c87d8d je 0x12c87d9b */
  if (C.zf) goto L_12c87d9b;
  /* 12c87d8f push 0x103 */
  push32((uint32_t)(0x103u));
  /* 12c87d94 push ebx */
  push32((uint32_t)(EBX));
  /* 12c87d95 push eax */
  push32((uint32_t)(EAX));
  /* 12c87d96 call 0x12c881f0 */
  push32(0x12c87d9bu); f_12c881f0();
L_12c87d9b:;
  /* 12c87d9b or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c87d9f jmp 0x12c87dbb */
  goto L_12c87dbb;
  /* 12c87da1 push dword ptr [ebp - 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x14))));
  /* 12c87da4 call 0x12c84ccf */
  push32(0x12c87da9u); f_12c84ccf();
  /* 12c87da9 pop ecx */
  ECX = (pop32());
  /* 12c87daa ret  */
  ESPCHK(0x12c87d3au, _esp0);
  ESP += 4; return;
  /* 12c87dab mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12c87dae or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c87db2 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 12c87db5 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c87db8 mov esi, dword ptr [ebp - 0x1c] */
  ESI = (r32((uint32_t)(EBP + -0x1c)));
L_12c87dbb:;
  /* 12c87dbb mov eax, dword ptr [edi + 8] */
  EAX = (r32((uint32_t)(EDI + 0x8)));
  /* 12c87dbe mov esi, dword ptr [eax + esi*8] */
  ESI = (r32((uint32_t)(EAX + ESI*8)));
  /* 12c87dc1 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 12c87dc4 jmp 0x12c87d6c */
  goto L_12c87d6c;
L_12c87dc6:;
  /* 12c87dc6 mov dword ptr [ebx + 8], esi */
  w32((uint32_t)(EBX + 0x8), (ESI));
  /* 12c87dc9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c87dcc mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12c87dd3 pop edi */
  EDI = (pop32());
  /* 12c87dd4 pop esi */
  ESI = (pop32());
  /* 12c87dd5 pop ebx */
  EBX = (pop32());
  /* 12c87dd6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c87dd7 ret  */
  ESPCHK(0x12c87d3au, _esp0);
  ESP += 4; return;
}

/* FUN_10007dd8 @ 0x12c87dd8 (123 bytes, 50 insns) */
void f_12c87dd8(void) {
  FTRACE(0x12c87dd8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c87dd8 push ebp */
  push32((uint32_t)(EBP));
  /* 12c87dd9 mov ebp, esp */
  EBP = (ESP);
  /* 12c87ddb cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87ddf push ebx */
  push32((uint32_t)(EBX));
  /* 12c87de0 mov ebx, dword ptr [ebp + 0x1c] */
  EBX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12c87de3 push esi */
  push32((uint32_t)(ESI));
  /* 12c87de4 push edi */
  push32((uint32_t)(EDI));
  /* 12c87de5 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 12c87de8 je 0x12c87dfa */
  if (C.zf) goto L_12c87dfa;
  /* 12c87dea push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 12c87ded push ebx */
  push32((uint32_t)(EBX));
  /* 12c87dee push edi */
  push32((uint32_t)(EDI));
  /* 12c87def push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c87df2 call 0x12c87f98 */
  push32(0x12c87df7u); f_12c87f98();
  /* 12c87df7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c87dfa:;
  /* 12c87dfa cmp dword ptr [ebp + 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87dfe push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c87e01 jne 0x12c87e06 */
  if (!C.zf) goto L_12c87e06;
  /* 12c87e03 push edi */
  push32((uint32_t)(EDI));
  /* 12c87e04 jmp 0x12c87e09 */
  goto L_12c87e09;
L_12c87e06:;
  /* 12c87e06 push dword ptr [ebp + 0x2c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x2c))));
L_12c87e09:;
  /* 12c87e09 call 0x12c851c7 */
  push32(0x12c87e0eu); f_12c851c7();
  /* 12c87e0e mov esi, dword ptr [ebp + 0x24] */
  ESI = (r32((uint32_t)(EBP + 0x24)));
  /* 12c87e11 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 12c87e13 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 12c87e16 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 12c87e19 push edi */
  push32((uint32_t)(EDI));
  /* 12c87e1a call 0x12c87d3a */
  push32(0x12c87e1fu); f_12c87d3a();
  /* 12c87e1f mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 12c87e22 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12c87e27 push dword ptr [ebp + 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x28))));
  /* 12c87e2a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c87e2b mov dword ptr [edi + 8], eax */
  w32((uint32_t)(EDI + 0x8), (EAX));
  /* 12c87e2e push dword ptr [ebx + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0xc))));
  /* 12c87e31 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 12c87e34 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 12c87e37 push edi */
  push32((uint32_t)(EDI));
  /* 12c87e38 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c87e3b call 0x12c87e53 */
  push32(0x12c87e40u); f_12c87e53();
  /* 12c87e40 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c87e43 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c87e45 je 0x12c87e4e */
  if (C.zf) goto L_12c87e4e;
  /* 12c87e47 push edi */
  push32((uint32_t)(EDI));
  /* 12c87e48 push eax */
  push32((uint32_t)(EAX));
  /* 12c87e49 call 0x12c85185 */
  push32(0x12c87e4eu); f_12c85185();
L_12c87e4e:;
  /* 12c87e4e pop edi */
  EDI = (pop32());
  /* 12c87e4f pop esi */
  ESI = (pop32());
  /* 12c87e50 pop ebx */
  EBX = (pop32());
  /* 12c87e51 pop ebp */
  EBP = (pop32());
  /* 12c87e52 ret  */
  ESPCHK(0x12c87dd8u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e53 @ 0x12c87e53 (165 bytes, 52 insns) */
void f_12c87e53(void) {
  FTRACE(0x12c87e53u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c87e53 push ebp */
  push32((uint32_t)(EBP));
  /* 12c87e54 mov ebp, esp */
  EBP = (ESP);
  /* 12c87e56 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c87e58 push 0x12c8e2e0 */
  push32((uint32_t)(0x12c8e2e0u));
  /* 12c87e5d push 0x12c86a64 */
  push32((uint32_t)(0x12c86a64u));
  /* 12c87e62 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12c87e68 push eax */
  push32((uint32_t)(EAX));
  /* 12c87e69 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12c87e70 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c87e73 push ebx */
  push32((uint32_t)(EBX));
  /* 12c87e74 push esi */
  push32((uint32_t)(ESI));
  /* 12c87e75 push edi */
  push32((uint32_t)(EDI));
  /* 12c87e76 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12c87e79 mov ebx, dword ptr [ebp + 0x18] */
  EBX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c87e7c mov dword ptr [ebp - 0x2c], ebx */
  w32((uint32_t)(EBP + -0x2c), (EBX));
  /* 12c87e7f and dword ptr [ebp - 0x24], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x24)))&(0x0u); w32((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,32); }
  /* 12c87e83 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12c87e86 mov eax, dword ptr [esi - 4] */
  EAX = (r32((uint32_t)(ESI + -0x4)));
  /* 12c87e89 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12c87e8c call 0x12c882c1 */
  push32(0x12c87e91u); f_12c882c1();
  /* 12c87e91 mov eax, dword ptr [eax + 0x6c] */
  EAX = (r32((uint32_t)(EAX + 0x6c)));
  /* 12c87e94 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12c87e97 call 0x12c882c1 */
  push32(0x12c87e9cu); f_12c882c1();
  /* 12c87e9c mov eax, dword ptr [eax + 0x70] */
  EAX = (r32((uint32_t)(EAX + 0x70)));
  /* 12c87e9f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12c87ea2 call 0x12c882c1 */
  push32(0x12c87ea7u); f_12c882c1();
  /* 12c87ea7 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12c87eaa mov dword ptr [eax + 0x6c], edi */
  w32((uint32_t)(EAX + 0x6c), (EDI));
  /* 12c87ead call 0x12c882c1 */
  push32(0x12c87eb2u); f_12c882c1();
  /* 12c87eb2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c87eb5 mov dword ptr [eax + 0x70], ecx */
  w32((uint32_t)(EAX + 0x70), (ECX));
  /* 12c87eb8 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c87ebc mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12c87ec3 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 12c87ec6 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 12c87ec9 push ebx */
  push32((uint32_t)(EBX));
  /* 12c87eca push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 12c87ecd push esi */
  push32((uint32_t)(ESI));
  /* 12c87ece call 0x12c8524c */
  push32(0x12c87ed3u); f_12c8524c();
  /* 12c87ed3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c87ed6 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12c87ed9 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c87edd or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c87ee1 call 0x12c87f20 */
  push32(0x12c87ee6u); f_12c87f20();
  /* 12c87ee6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c87ee9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c87eec mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12c87ef3 pop edi */
  EDI = (pop32());
  /* 12c87ef4 pop esi */
  ESI = (pop32());
  /* 12c87ef5 pop ebx */
  EBX = (pop32());
  /* 12c87ef6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c87ef7 ret  */
  ESPCHK(0x12c87e53u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f20 @ 0x12c87f20 (78 bytes, 25 insns) */
void f_12c87f20(void) {
  FTRACE(0x12c87f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c87f20 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c87f23 mov dword ptr [esi - 4], eax */
  w32((uint32_t)(ESI + -0x4), (EAX));
  /* 12c87f26 call 0x12c882c1 */
  push32(0x12c87f2bu); f_12c882c1();
  /* 12c87f2b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c87f2e mov dword ptr [eax + 0x6c], ecx */
  w32((uint32_t)(EAX + 0x6c), (ECX));
  /* 12c87f31 call 0x12c882c1 */
  push32(0x12c87f36u); f_12c882c1();
  /* 12c87f36 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c87f39 mov dword ptr [eax + 0x70], ecx */
  w32((uint32_t)(EAX + 0x70), (ECX));
  /* 12c87f3c cmp dword ptr [edi], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87f42 jne 0x12c87f6d */
  if (!C.zf) goto L_12c87f6d;
  /* 12c87f44 cmp dword ptr [edi + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87f48 jne 0x12c87f6d */
  if (!C.zf) goto L_12c87f6d;
  /* 12c87f4a cmp dword ptr [edi + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87f51 jne 0x12c87f6d */
  if (!C.zf) goto L_12c87f6d;
  /* 12c87f53 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87f57 jne 0x12c87f6d */
  if (!C.zf) goto L_12c87f6d;
  /* 12c87f59 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c87f5d je 0x12c87f6d */
  if (C.zf) goto L_12c87f6d;
  /* 12c87f5f call 0x12c8554a */
  push32(0x12c87f64u); f_12c8554a();
  /* 12c87f64 push eax */
  push32((uint32_t)(EAX));
  /* 12c87f65 push edi */
  push32((uint32_t)(EDI));
  /* 12c87f66 call 0x12c8815c */
  push32(0x12c87f6bu); f_12c8815c();
  /* 12c87f6b pop ecx */
  ECX = (pop32());
  /* 12c87f6c pop ecx */
  ECX = (pop32());
L_12c87f6d:;
  /* 12c87f6d ret  */
  ESPCHK(0x12c87f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f98 @ 0x12c87f98 (440 bytes, 164 insns) */
void f_12c87f98(void) {
  FTRACE(0x12c87f98u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c87f98 push ebp */
  push32((uint32_t)(EBP));
  /* 12c87f99 mov ebp, esp */
  EBP = (ESP);
  /* 12c87f9b push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c87f9d push 0x12c8e2f8 */
  push32((uint32_t)(0x12c8e2f8u));
  /* 12c87fa2 push 0x12c86a64 */
  push32((uint32_t)(0x12c86a64u));
  /* 12c87fa7 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12c87fad push eax */
  push32((uint32_t)(EAX));
  /* 12c87fae mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12c87fb5 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c87fb8 push ebx */
  push32((uint32_t)(EBX));
  /* 12c87fb9 push esi */
  push32((uint32_t)(ESI));
  /* 12c87fba push edi */
  push32((uint32_t)(EDI));
  /* 12c87fbb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12c87fbe mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c87fc1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c87fc4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c87fc6 je 0x12c88141 */
  if (C.zf) goto L_12c88141;
  /* 12c87fcc cmp byte ptr [eax + 8], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c87fd0 je 0x12c88141 */
  if (C.zf) goto L_12c88141;
  /* 12c87fd6 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 12c87fd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c87fdb je 0x12c88141 */
  if (C.zf) goto L_12c88141;
  /* 12c87fe1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c87fe4 lea edi, [eax + edx + 0xc] */
  EDI = ((uint32_t)(EAX + EDX*1 + 0xc));
  /* 12c87fe8 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c87fec test byte ptr [ecx], 8 */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(0x8u); fl_logic(_r,8); }
  /* 12c87fef je 0x12c88035 */
  if (C.zf) goto L_12c88035;
  /* 12c87ff1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12c87ff4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c87ff6 push dword ptr [esi + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x18))));
  /* 12c87ff9 call 0x12c8bef7 */
  push32(0x12c87ffeu); f_12c8bef7();
  /* 12c87ffe pop ecx */
  ECX = (pop32());
  /* 12c87fff pop ecx */
  ECX = (pop32());
  /* 12c88000 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c88002 je 0x12c88138 */
  if (C.zf) goto L_12c88138;
  /* 12c88008 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c8800a push edi */
  push32((uint32_t)(EDI));
  /* 12c8800b call 0x12c8bf13 */
  push32(0x12c88010u); f_12c8bf13();
  /* 12c88010 pop ecx */
  ECX = (pop32());
  /* 12c88011 pop ecx */
  ECX = (pop32());
  /* 12c88012 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c88014 je 0x12c88138 */
  if (C.zf) goto L_12c88138;
  /* 12c8801a mov eax, dword ptr [esi + 0x18] */
  EAX = (r32((uint32_t)(ESI + 0x18)));
  /* 12c8801d mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 12c8801f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c88022 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c88025 push ecx */
  push32((uint32_t)(ECX));
L_12c88026:;
  /* 12c88026 push eax */
  push32((uint32_t)(EAX));
  /* 12c88027 call 0x12c881c3 */
  push32(0x12c8802cu); f_12c881c3();
  /* 12c8802c pop ecx */
  ECX = (pop32());
  /* 12c8802d pop ecx */
  ECX = (pop32());
  /* 12c8802e mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 12c88030 jmp 0x12c8813d */
  goto L_12c8813d;
L_12c88035:;
  /* 12c88035 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 12c88038 test byte ptr [esi], 1 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x1u); fl_logic(_r,8); }
  /* 12c8803b je 0x12c8808f */
  if (C.zf) goto L_12c8808f;
  /* 12c8803d mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c88040 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c88042 push dword ptr [ebx + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0x18))));
  /* 12c88045 call 0x12c8bef7 */
  push32(0x12c8804au); f_12c8bef7();
  /* 12c8804a pop ecx */
  ECX = (pop32());
  /* 12c8804b pop ecx */
  ECX = (pop32());
  /* 12c8804c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8804e je 0x12c88138 */
  if (C.zf) goto L_12c88138;
  /* 12c88054 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c88056 push edi */
  push32((uint32_t)(EDI));
  /* 12c88057 call 0x12c8bf13 */
  push32(0x12c8805cu); f_12c8bf13();
  /* 12c8805c pop ecx */
  ECX = (pop32());
  /* 12c8805d pop ecx */
  ECX = (pop32());
  /* 12c8805e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c88060 je 0x12c88138 */
  if (C.zf) goto L_12c88138;
  /* 12c88066 push dword ptr [esi + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x14))));
  /* 12c88069 push dword ptr [ebx + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0x18))));
  /* 12c8806c push edi */
  push32((uint32_t)(EDI));
  /* 12c8806d call 0x12c85870 */
  push32(0x12c88072u); f_12c85870();
  /* 12c88072 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c88075 cmp dword ptr [esi + 0x14], 4 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x14))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c88079 jne 0x12c8813d */
  if (!C.zf) goto L_12c8813d;
  /* 12c8807f mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 12c88081 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c88083 je 0x12c8813d */
  if (C.zf) goto L_12c8813d;
  /* 12c88089 add esi, 8 */
  { uint32_t _a=(ESI),_b=(0x8u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8808c push esi */
  push32((uint32_t)(ESI));
  /* 12c8808d jmp 0x12c88026 */
  goto L_12c88026;
L_12c8808f:;
  /* 12c8808f cmp dword ptr [esi + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c88093 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c88096 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c88098 push dword ptr [ebx + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0x18))));
  /* 12c8809b jne 0x12c880d7 */
  if (!C.zf) goto L_12c880d7;
  /* 12c8809d call 0x12c8bef7 */
  push32(0x12c880a2u); f_12c8bef7();
  /* 12c880a2 pop ecx */
  ECX = (pop32());
  /* 12c880a3 pop ecx */
  ECX = (pop32());
  /* 12c880a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c880a6 je 0x12c88138 */
  if (C.zf) goto L_12c88138;
  /* 12c880ac push 1 */
  push32((uint32_t)(0x1u));
  /* 12c880ae push edi */
  push32((uint32_t)(EDI));
  /* 12c880af call 0x12c8bf13 */
  push32(0x12c880b4u); f_12c8bf13();
  /* 12c880b4 pop ecx */
  ECX = (pop32());
  /* 12c880b5 pop ecx */
  ECX = (pop32());
  /* 12c880b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c880b8 je 0x12c88138 */
  if (C.zf) goto L_12c88138;
  /* 12c880ba push dword ptr [esi + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x14))));
  /* 12c880bd add esi, 8 */
  { uint32_t _a=(ESI),_b=(0x8u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c880c0 push esi */
  push32((uint32_t)(ESI));
  /* 12c880c1 push dword ptr [ebx + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0x18))));
  /* 12c880c4 call 0x12c881c3 */
  push32(0x12c880c9u); f_12c881c3();
  /* 12c880c9 pop ecx */
  ECX = (pop32());
  /* 12c880ca pop ecx */
  ECX = (pop32());
  /* 12c880cb push eax */
  push32((uint32_t)(EAX));
  /* 12c880cc push edi */
  push32((uint32_t)(EDI));
  /* 12c880cd call 0x12c85870 */
  push32(0x12c880d2u); f_12c85870();
  /* 12c880d2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c880d5 jmp 0x12c8813d */
  goto L_12c8813d;
L_12c880d7:;
  /* 12c880d7 call 0x12c8bef7 */
  push32(0x12c880dcu); f_12c8bef7();
  /* 12c880dc pop ecx */
  ECX = (pop32());
  /* 12c880dd pop ecx */
  ECX = (pop32());
  /* 12c880de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c880e0 je 0x12c88138 */
  if (C.zf) goto L_12c88138;
  /* 12c880e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c880e4 push edi */
  push32((uint32_t)(EDI));
  /* 12c880e5 call 0x12c8bf13 */
  push32(0x12c880eau); f_12c8bf13();
  /* 12c880ea pop ecx */
  ECX = (pop32());
  /* 12c880eb pop ecx */
  ECX = (pop32());
  /* 12c880ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c880ee je 0x12c88138 */
  if (C.zf) goto L_12c88138;
  /* 12c880f0 push dword ptr [esi + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x18))));
  /* 12c880f3 call 0x12c8bf2f */
  push32(0x12c880f8u); f_12c8bf2f();
  /* 12c880f8 pop ecx */
  ECX = (pop32());
  /* 12c880f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c880fb je 0x12c88138 */
  if (C.zf) goto L_12c88138;
  /* 12c880fd test byte ptr [esi], 4 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x4u); fl_logic(_r,8); }
  /* 12c88100 je 0x12c8811e */
  if (C.zf) goto L_12c8811e;
  /* 12c88102 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c88104 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 12c88107 push eax */
  push32((uint32_t)(EAX));
  /* 12c88108 push dword ptr [ebx + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0x18))));
  /* 12c8810b call 0x12c881c3 */
  push32(0x12c88110u); f_12c881c3();
  /* 12c88110 pop ecx */
  ECX = (pop32());
  /* 12c88111 pop ecx */
  ECX = (pop32());
  /* 12c88112 push eax */
  push32((uint32_t)(EAX));
  /* 12c88113 push dword ptr [esi + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x18))));
  /* 12c88116 push edi */
  push32((uint32_t)(EDI));
  /* 12c88117 call 0x12c851c0 */
  push32(0x12c8811cu); f_12c851c0();
  /* 12c8811c jmp 0x12c8813d */
  goto L_12c8813d;
L_12c8811e:;
  /* 12c8811e lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 12c88121 push eax */
  push32((uint32_t)(EAX));
  /* 12c88122 push dword ptr [ebx + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0x18))));
  /* 12c88125 call 0x12c881c3 */
  push32(0x12c8812au); f_12c881c3();
  /* 12c8812a pop ecx */
  ECX = (pop32());
  /* 12c8812b pop ecx */
  ECX = (pop32());
  /* 12c8812c push eax */
  push32((uint32_t)(EAX));
  /* 12c8812d push dword ptr [esi + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x18))));
  /* 12c88130 push edi */
  push32((uint32_t)(EDI));
  /* 12c88131 call 0x12c851b9 */
  push32(0x12c88136u); f_12c851b9();
  /* 12c88136 jmp 0x12c8813d */
  goto L_12c8813d;
L_12c88138:;
  /* 12c88138 call 0x12c86b9d */
  push32(0x12c8813du); f_12c86b9d();
L_12c8813d:;
  /* 12c8813d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_12c88141:;
  /* 12c88141 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c88144 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12c8814b pop edi */
  EDI = (pop32());
  /* 12c8814c pop esi */
  ESI = (pop32());
  /* 12c8814d pop ebx */
  EBX = (pop32());
  /* 12c8814e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c8814f ret  */
  ESPCHK(0x12c87f98u, _esp0);
  ESP += 4; return;
}

/* FUN_1000815c @ 0x12c8815c (86 bytes, 33 insns) */
void f_12c8815c(void) {
  FTRACE(0x12c8815cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8815c push ebp */
  push32((uint32_t)(EBP));
  /* 12c8815d mov ebp, esp */
  EBP = (ESP);
  /* 12c8815f push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c88161 push 0x12c8e308 */
  push32((uint32_t)(0x12c8e308u));
  /* 12c88166 push 0x12c86a64 */
  push32((uint32_t)(0x12c86a64u));
  /* 12c8816b mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12c88171 push eax */
  push32((uint32_t)(EAX));
  /* 12c88172 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12c88179 push ecx */
  push32((uint32_t)(ECX));
  /* 12c8817a push ecx */
  push32((uint32_t)(ECX));
  /* 12c8817b push ebx */
  push32((uint32_t)(EBX));
  /* 12c8817c push esi */
  push32((uint32_t)(ESI));
  /* 12c8817d push edi */
  push32((uint32_t)(EDI));
  /* 12c8817e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12c88181 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c88184 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c88186 je 0x12c881a3 */
  if (C.zf) goto L_12c881a3;
  /* 12c88188 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12c8818b mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c8818e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c88190 je 0x12c881a3 */
  if (C.zf) goto L_12c881a3;
  /* 12c88192 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c88196 push ecx */
  push32((uint32_t)(ECX));
  /* 12c88197 push dword ptr [eax + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x18))));
  /* 12c8819a call 0x12c851b9 */
  push32(0x12c8819fu); f_12c851b9();
  /* 12c8819f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_12c881a3:;
  /* 12c881a3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c881a6 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12c881ad pop edi */
  EDI = (pop32());
  /* 12c881ae pop esi */
  ESI = (pop32());
  /* 12c881af pop ebx */
  EBX = (pop32());
  /* 12c881b0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c881b1 ret  */
  ESPCHK(0x12c8815cu, _esp0);
  ESP += 4; return;
}

/* FUN_100081c3 @ 0x12c881c3 (35 bytes, 15 insns) */
void f_12c881c3(void) {
  FTRACE(0x12c881c3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c881c3 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c881c7 push esi */
  push32((uint32_t)(ESI));
  /* 12c881c8 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 12c881cc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12c881ce mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c881d1 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c881d3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c881d5 jl 0x12c881e4 */
  if ((C.sf!=C.of)) goto L_12c881e4;
  /* 12c881d7 mov esi, dword ptr [edx + esi] */
  ESI = (r32((uint32_t)(EDX + ESI*1)));
  /* 12c881da mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 12c881dd mov ecx, dword ptr [esi + ecx] */
  ECX = (r32((uint32_t)(ESI + ECX*1)));
  /* 12c881e0 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c881e2 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12c881e4:;
  /* 12c881e4 pop esi */
  ESI = (pop32());
  /* 12c881e5 ret  */
  ESPCHK(0x12c881c3u, _esp0);
  ESP += 4; return;
}

/* __CallSettingFrame@12 @ 0x12c881f0 (76 bytes, 34 insns) */
void f_12c881f0(void) {
  FTRACE(0x12c881f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c881f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c881f1 mov ebp, esp */
  EBP = (ESP);
  /* 12c881f3 sub esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c881f6 push ebx */
  push32((uint32_t)(EBX));
  /* 12c881f7 push ecx */
  push32((uint32_t)(ECX));
  /* 12c881f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c881fb add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c881fe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c88201 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c88204 push ebp */
  push32((uint32_t)(EBP));
  /* 12c88205 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 12c88208 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c8820b mov ebp, dword ptr [ebp - 4] */
  EBP = (r32((uint32_t)(EBP + -0x4)));
  /* 12c8820e call 0x12c8556d */
  push32(0x12c88213u); f_12c8556d();
  /* 12c88213 push esi */
  push32((uint32_t)(ESI));
  /* 12c88214 push edi */
  push32((uint32_t)(EDI));
  /* 12c88215 call eax */
  call_ind((uint32_t)(EAX), 0x12c88217u);
  /* 12c88217 pop edi */
  EDI = (pop32());
  /* 12c88218 pop esi */
  ESI = (pop32());
  /* 12c88219 mov ebx, ebp */
  EBX = (EBP);
  /* 12c8821b pop ebp */
  EBP = (pop32());
  /* 12c8821c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c8821f push ebp */
  push32((uint32_t)(EBP));
  /* 12c88220 mov ebp, ebx */
  EBP = (EBX);
  /* 12c88222 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c88228 jne 0x12c8822f */
  if (!C.zf) goto L_12c8822f;
  /* 12c8822a mov ecx, 2 */
  ECX = (0x2u);
L_12c8822f:;
  /* 12c8822f push ecx */
  push32((uint32_t)(ECX));
  /* 12c88230 call 0x12c8556d */
  push32(0x12c88235u); f_12c8556d();
  /* 12c88235 pop ebp */
  EBP = (pop32());
  /* 12c88236 pop ecx */
  ECX = (pop32());
  /* 12c88237 pop ebx */
  EBX = (pop32());
  /* 12c88238 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c88239 ret 0xc */
  ESPCHK(0x12c881f0u, _esp0);
  ESP += 16; return;
}

/* FUN_1000823c @ 0x12c8823c (84 bytes, 32 insns) */
void f_12c8823c(void) {
  FTRACE(0x12c8823cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8823c push esi */
  push32((uint32_t)(ESI));
  /* 12c8823d call 0x12c86bf3 */
  push32(0x12c88242u); f_12c86bf3();
  /* 12c88242 call dword ptr [0x12c8e00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e00c))), 0x12c88248u);
  /* 12c88248 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8824b mov dword ptr [0x12c90b00], eax */
  w32((uint32_t)(0x12c90b00), (EAX));
  /* 12c88250 je 0x12c8828c */
  if (C.zf) goto L_12c8828c;
  /* 12c88252 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 12c88254 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c88256 call 0x12c8b6b2 */
  push32(0x12c8825bu); f_12c8b6b2();
  /* 12c8825b mov esi, eax */
  ESI = (EAX);
  /* 12c8825d pop ecx */
  ECX = (pop32());
  /* 12c8825e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 12c88260 pop ecx */
  ECX = (pop32());
  /* 12c88261 je 0x12c8828c */
  if (C.zf) goto L_12c8828c;
  /* 12c88263 push esi */
  push32((uint32_t)(ESI));
  /* 12c88264 push dword ptr [0x12c90b00] */
  push32((uint32_t)(r32((uint32_t)(0x12c90b00))));
  /* 12c8826a call dword ptr [0x12c8e008] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e008))), 0x12c88270u);
  /* 12c88270 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c88272 je 0x12c8828c */
  if (C.zf) goto L_12c8828c;
  /* 12c88274 push esi */
  push32((uint32_t)(ESI));
  /* 12c88275 call 0x12c882ae */
  push32(0x12c8827au); f_12c882ae();
  /* 12c8827a pop ecx */
  ECX = (pop32());
  /* 12c8827b call dword ptr [0x12c8e000] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e000))), 0x12c88281u);
  /* 12c88281 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 12c88285 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c88287 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 12c88289 pop eax */
  EAX = (pop32());
  /* 12c8828a pop esi */
  ESI = (pop32());
  /* 12c8828b ret  */
  ESPCHK(0x12c8823cu, _esp0);
  ESP += 4; return;
L_12c8828c:;
  /* 12c8828c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c8828e pop esi */
  ESI = (pop32());
  /* 12c8828f ret  */
  ESPCHK(0x12c8823cu, _esp0);
  ESP += 4; return;
}

/* FUN_10008290 @ 0x12c88290 (30 bytes, 8 insns) */
void f_12c88290(void) {
  FTRACE(0x12c88290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c88290 call 0x12c86c1c */
  push32(0x12c88295u); f_12c86c1c();
  /* 12c88295 mov eax, dword ptr [0x12c90b00] */
  EAX = (r32((uint32_t)(0x12c90b00)));
  /* 12c8829a cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8829d je 0x12c882ad */
  if (C.zf) goto L_12c882ad;
  /* 12c8829f push eax */
  push32((uint32_t)(EAX));
  /* 12c882a0 call dword ptr [0x12c8e0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e0a4))), 0x12c882a6u);
  /* 12c882a6 or dword ptr [0x12c90b00], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x12c90b00)))|(0xffffffffu); w32((uint32_t)(0x12c90b00), (_r)); fl_logic(_r,32); }
L_12c882ad:;
  /* 12c882ad ret  */
  ESPCHK(0x12c88290u, _esp0);
  ESP += 4; return;
}

/* FUN_100082ae @ 0x12c882ae (19 bytes, 4 insns) */
void f_12c882ae(void) {
  FTRACE(0x12c882aeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c882ae mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c882b2 mov dword ptr [eax + 0x50], 0x12c92df0 */
  w32((uint32_t)(EAX + 0x50), (0x12c92df0u));
  /* 12c882b9 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 12c882c0 ret  */
  ESPCHK(0x12c882aeu, _esp0);
  ESP += 4; return;
}

/* FUN_100082c1 @ 0x12c882c1 (103 bytes, 38 insns) */
void f_12c882c1(void) {
  FTRACE(0x12c882c1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c882c1 push esi */
  push32((uint32_t)(ESI));
  /* 12c882c2 push edi */
  push32((uint32_t)(EDI));
  /* 12c882c3 call dword ptr [0x12c8e078] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e078))), 0x12c882c9u);
  /* 12c882c9 push dword ptr [0x12c90b00] */
  push32((uint32_t)(r32((uint32_t)(0x12c90b00))));
  /* 12c882cf mov edi, eax */
  EDI = (EAX);
  /* 12c882d1 call dword ptr [0x12c8e0ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e0ac))), 0x12c882d7u);
  /* 12c882d7 mov esi, eax */
  ESI = (EAX);
  /* 12c882d9 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 12c882db jne 0x12c8831c */
  if (!C.zf) goto L_12c8831c;
  /* 12c882dd push 0x74 */
  push32((uint32_t)(0x74u));
  /* 12c882df push 1 */
  push32((uint32_t)(0x1u));
  /* 12c882e1 call 0x12c8b6b2 */
  push32(0x12c882e6u); f_12c8b6b2();
  /* 12c882e6 mov esi, eax */
  ESI = (EAX);
  /* 12c882e8 pop ecx */
  ECX = (pop32());
  /* 12c882e9 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 12c882eb pop ecx */
  ECX = (pop32());
  /* 12c882ec je 0x12c88314 */
  if (C.zf) goto L_12c88314;
  /* 12c882ee push esi */
  push32((uint32_t)(ESI));
  /* 12c882ef push dword ptr [0x12c90b00] */
  push32((uint32_t)(r32((uint32_t)(0x12c90b00))));
  /* 12c882f5 call dword ptr [0x12c8e008] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e008))), 0x12c882fbu);
  /* 12c882fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c882fd je 0x12c88314 */
  if (C.zf) goto L_12c88314;
  /* 12c882ff push esi */
  push32((uint32_t)(ESI));
  /* 12c88300 call 0x12c882ae */
  push32(0x12c88305u); f_12c882ae();
  /* 12c88305 pop ecx */
  ECX = (pop32());
  /* 12c88306 call dword ptr [0x12c8e000] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e000))), 0x12c8830cu);
  /* 12c8830c or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 12c88310 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 12c88312 jmp 0x12c8831c */
  goto L_12c8831c;
L_12c88314:;
  /* 12c88314 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12c88316 call 0x12c85e26 */
  push32(0x12c8831bu); f_12c85e26();
  /* 12c8831b pop ecx */
  ECX = (pop32());
L_12c8831c:;
  /* 12c8831c push edi */
  push32((uint32_t)(EDI));
  /* 12c8831d call dword ptr [0x12c8e0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e0a8))), 0x12c88323u);
  /* 12c88323 mov eax, esi */
  EAX = (ESI);
  /* 12c88325 pop edi */
  EDI = (pop32());
  /* 12c88326 pop esi */
  ESI = (pop32());
  /* 12c88327 ret  */
  ESPCHK(0x12c882c1u, _esp0);
  ESP += 4; return;
}

/* FUN_10008328 @ 0x12c88328 (160 bytes, 62 insns) */
void f_12c88328(void) {
  FTRACE(0x12c88328u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c88328 mov eax, dword ptr [0x12c90b00] */
  EAX = (r32((uint32_t)(0x12c90b00)));
  /* 12c8832d cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c88330 je 0x12c883c7 */
  if (C.zf) goto L_12c883c7;
  /* 12c88336 push esi */
  push32((uint32_t)(ESI));
  /* 12c88337 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 12c8833b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 12c8833d jne 0x12c8834c */
  if (!C.zf) goto L_12c8834c;
  /* 12c8833f push eax */
  push32((uint32_t)(EAX));
  /* 12c88340 call dword ptr [0x12c8e0ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e0ac))), 0x12c88346u);
  /* 12c88346 mov esi, eax */
  ESI = (EAX);
  /* 12c88348 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 12c8834a je 0x12c883b8 */
  if (C.zf) goto L_12c883b8;
L_12c8834c:;
  /* 12c8834c mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 12c8834f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c88351 je 0x12c8835a */
  if (C.zf) goto L_12c8835a;
  /* 12c88353 push eax */
  push32((uint32_t)(EAX));
  /* 12c88354 call 0x12c85e59 */
  push32(0x12c88359u); f_12c85e59();
  /* 12c88359 pop ecx */
  ECX = (pop32());
L_12c8835a:;
  /* 12c8835a mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 12c8835d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8835f je 0x12c88368 */
  if (C.zf) goto L_12c88368;
  /* 12c88361 push eax */
  push32((uint32_t)(EAX));
  /* 12c88362 call 0x12c85e59 */
  push32(0x12c88367u); f_12c85e59();
  /* 12c88367 pop ecx */
  ECX = (pop32());
L_12c88368:;
  /* 12c88368 mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 12c8836b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8836d je 0x12c88376 */
  if (C.zf) goto L_12c88376;
  /* 12c8836f push eax */
  push32((uint32_t)(EAX));
  /* 12c88370 call 0x12c85e59 */
  push32(0x12c88375u); f_12c85e59();
  /* 12c88375 pop ecx */
  ECX = (pop32());
L_12c88376:;
  /* 12c88376 mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 12c88379 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8837b je 0x12c88384 */
  if (C.zf) goto L_12c88384;
  /* 12c8837d push eax */
  push32((uint32_t)(EAX));
  /* 12c8837e call 0x12c85e59 */
  push32(0x12c88383u); f_12c85e59();
  /* 12c88383 pop ecx */
  ECX = (pop32());
L_12c88384:;
  /* 12c88384 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 12c88387 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c88389 je 0x12c88392 */
  if (C.zf) goto L_12c88392;
  /* 12c8838b push eax */
  push32((uint32_t)(EAX));
  /* 12c8838c call 0x12c85e59 */
  push32(0x12c88391u); f_12c85e59();
  /* 12c88391 pop ecx */
  ECX = (pop32());
L_12c88392:;
  /* 12c88392 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 12c88395 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c88397 je 0x12c883a0 */
  if (C.zf) goto L_12c883a0;
  /* 12c88399 push eax */
  push32((uint32_t)(EAX));
  /* 12c8839a call 0x12c85e59 */
  push32(0x12c8839fu); f_12c85e59();
  /* 12c8839f pop ecx */
  ECX = (pop32());
L_12c883a0:;
  /* 12c883a0 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 12c883a3 cmp eax, 0x12c92df0 */
  { uint32_t _a=(EAX),_b=(0x12c92df0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c883a8 je 0x12c883b1 */
  if (C.zf) goto L_12c883b1;
  /* 12c883aa push eax */
  push32((uint32_t)(EAX));
  /* 12c883ab call 0x12c85e59 */
  push32(0x12c883b0u); f_12c85e59();
  /* 12c883b0 pop ecx */
  ECX = (pop32());
L_12c883b1:;
  /* 12c883b1 push esi */
  push32((uint32_t)(ESI));
  /* 12c883b2 call 0x12c85e59 */
  push32(0x12c883b7u); f_12c85e59();
  /* 12c883b7 pop ecx */
  ECX = (pop32());
L_12c883b8:;
  /* 12c883b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c883ba push dword ptr [0x12c90b00] */
  push32((uint32_t)(r32((uint32_t)(0x12c90b00))));
  /* 12c883c0 call dword ptr [0x12c8e008] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e008))), 0x12c883c6u);
  /* 12c883c6 pop esi */
  ESI = (pop32());
L_12c883c7:;
  /* 12c883c7 ret  */
  ESPCHK(0x12c88328u, _esp0);
  ESP += 4; return;
}

/* FUN_100083c8 @ 0x12c883c8 (70 bytes, 24 insns) */
void f_12c883c8(void) {
  FTRACE(0x12c883c8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c883c8 push esi */
  push32((uint32_t)(ESI));
  /* 12c883c9 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 12c883cd mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 12c883cf cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c883d5 jne 0x12c883eb */
  if (!C.zf) goto L_12c883eb;
  /* 12c883d7 cmp dword ptr [eax + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c883db jne 0x12c883eb */
  if (!C.zf) goto L_12c883eb;
  /* 12c883dd cmp dword ptr [eax + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c883e4 jne 0x12c883eb */
  if (!C.zf) goto L_12c883eb;
  /* 12c883e6 jmp 0x12c86b3c */
  f_12c86b3c(); return;
L_12c883eb:;
  /* 12c883eb mov eax, dword ptr [0x12cac4f4] */
  EAX = (r32((uint32_t)(0x12cac4f4)));
  /* 12c883f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c883f2 je 0x12c88408 */
  if (C.zf) goto L_12c88408;
  /* 12c883f4 push eax */
  push32((uint32_t)(EAX));
  /* 12c883f5 call 0x12c8bf2f */
  push32(0x12c883fau); f_12c8bf2f();
  /* 12c883fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c883fc pop ecx */
  ECX = (pop32());
  /* 12c883fd je 0x12c88408 */
  if (C.zf) goto L_12c88408;
  /* 12c883ff push esi */
  push32((uint32_t)(ESI));
  /* 12c88400 call dword ptr [0x12cac4f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12cac4f4))), 0x12c88406u);
  /* 12c88406 jmp 0x12c8840a */
  goto L_12c8840a;
L_12c88408:;
  /* 12c88408 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c8840a:;
  /* 12c8840a pop esi */
  ESI = (pop32());
  /* 12c8840b ret 4 */
  ESPCHK(0x12c883c8u, _esp0);
  ESP += 8; return;
}

/* FUN_1000842c @ 0x12c8842c (280 bytes, 106 insns) */
void f_12c8842c(void) {
  FTRACE(0x12c8842cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c8842c push ebp */
  push32((uint32_t)(EBP));
  /* 12c8842d mov ebp, esp */
  EBP = (ESP);
  /* 12c8842f push ebx */
  push32((uint32_t)(EBX));
  /* 12c88430 push esi */
  push32((uint32_t)(ESI));
  /* 12c88431 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12c88434 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 12c88437 mov ebx, dword ptr [esi + 0x10] */
  EBX = (r32((uint32_t)(ESI + 0x10)));
  /* 12c8843a test al, 0x82 */
  { uint32_t _r=(AL)&(0x82u); fl_logic(_r,8); }
  /* 12c8843c je 0x12c88538 */
  if (C.zf) goto L_12c88538;
  /* 12c88442 test al, 0x40 */
  { uint32_t _r=(AL)&(0x40u); fl_logic(_r,8); }
  /* 12c88444 jne 0x12c88538 */
  if (!C.zf) goto L_12c88538;
  /* 12c8844a test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 12c8844c je 0x12c88464 */
  if (C.zf) goto L_12c88464;
  /* 12c8844e and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 12c88452 test al, 0x10 */
  { uint32_t _r=(AL)&(0x10u); fl_logic(_r,8); }
  /* 12c88454 je 0x12c88538 */
  if (C.zf) goto L_12c88538;
  /* 12c8845a mov ecx, dword ptr [esi + 8] */
  ECX = (r32((uint32_t)(ESI + 0x8)));
  /* 12c8845d and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 12c8845f mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 12c88461 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
L_12c88464:;
  /* 12c88464 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 12c88467 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 12c8846b and dword ptr [ebp + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(0x0u); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
  /* 12c8846f and al, 0xef */
  { uint32_t _r=(AL)&(0xefu); AL = (_r); fl_logic(_r,8); }
  /* 12c88471 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 12c88473 test ax, 0x10c */
  { uint32_t _r=(AX)&(0x10cu); fl_logic(_r,16); }
  /* 12c88477 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 12c8847a jne 0x12c8849e */
  if (!C.zf) goto L_12c8849e;
  /* 12c8847c cmp esi, 0x12c90710 */
  { uint32_t _a=(ESI),_b=(0x12c90710u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c88482 je 0x12c8848c */
  if (C.zf) goto L_12c8848c;
  /* 12c88484 cmp esi, 0x12c90730 */
  { uint32_t _a=(ESI),_b=(0x12c90730u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8848a jne 0x12c88497 */
  if (!C.zf) goto L_12c88497;
L_12c8848c:;
  /* 12c8848c push ebx */
  push32((uint32_t)(EBX));
  /* 12c8848d call 0x12c8bf47 */
  push32(0x12c88492u); f_12c8bf47();
  /* 12c88492 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c88494 pop ecx */
  ECX = (pop32());
  /* 12c88495 jne 0x12c8849e */
  if (!C.zf) goto L_12c8849e;
L_12c88497:;
  /* 12c88497 push esi */
  push32((uint32_t)(ESI));
  /* 12c88498 call 0x12c8bbe4 */
  push32(0x12c8849du); f_12c8bbe4();
  /* 12c8849d pop ecx */
  ECX = (pop32());
L_12c8849e:;
  /* 12c8849e test word ptr [esi + 0xc], 0x108 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0x108u); fl_logic(_r,16); }
  /* 12c884a4 push edi */
  push32((uint32_t)(EDI));
  /* 12c884a5 je 0x12c8850e */
  if (C.zf) goto L_12c8850e;
  /* 12c884a7 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 12c884aa mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 12c884ac sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c884ae lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 12c884b1 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 12c884b3 mov ecx, dword ptr [esi + 0x18] */
  ECX = (r32((uint32_t)(ESI + 0x18)));
  /* 12c884b6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12c884b7 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 12c884b9 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 12c884bc jle 0x12c884ce */
  if ((C.zf||C.sf!=C.of)) goto L_12c884ce;
  /* 12c884be push edi */
  push32((uint32_t)(EDI));
  /* 12c884bf push eax */
  push32((uint32_t)(EAX));
  /* 12c884c0 push ebx */
  push32((uint32_t)(EBX));
  /* 12c884c1 call 0x12c89874 */
  push32(0x12c884c6u); f_12c89874();
  /* 12c884c6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c884c9 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12c884cc jmp 0x12c88504 */
  goto L_12c88504;
L_12c884ce:;
  /* 12c884ce cmp ebx, -1 */
  { uint32_t _a=(EBX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c884d1 je 0x12c884ec */
  if (C.zf) goto L_12c884ec;
  /* 12c884d3 mov ecx, ebx */
  ECX = (EBX);
  /* 12c884d5 mov eax, ebx */
  EAX = (EBX);
  /* 12c884d7 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12c884da and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12c884dd mov ecx, dword ptr [ecx*4 + 0x12caca20] */
  ECX = (r32((uint32_t)(ECX*4 + 0x12caca20)));
  /* 12c884e4 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 12c884e7 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 12c884ea jmp 0x12c884f1 */
  goto L_12c884f1;
L_12c884ec:;
  /* 12c884ec mov eax, 0x12c90ad8 */
  EAX = (0x12c90ad8u);
L_12c884f1:;
  /* 12c884f1 test byte ptr [eax + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 12c884f5 je 0x12c88504 */
  if (C.zf) goto L_12c88504;
  /* 12c884f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c884f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c884fb push ebx */
  push32((uint32_t)(EBX));
  /* 12c884fc call 0x12c876d5 */
  push32(0x12c88501u); f_12c876d5();
  /* 12c88501 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c88504:;
  /* 12c88504 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 12c88507 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 12c8850a mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12c8850c jmp 0x12c88522 */
  goto L_12c88522;
L_12c8850e:;
  /* 12c8850e push 1 */
  push32((uint32_t)(0x1u));
  /* 12c88510 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 12c88513 pop edi */
  EDI = (pop32());
  /* 12c88514 push edi */
  push32((uint32_t)(EDI));
  /* 12c88515 push eax */
  push32((uint32_t)(EAX));
  /* 12c88516 push ebx */
  push32((uint32_t)(EBX));
  /* 12c88517 call 0x12c89874 */
  push32(0x12c8851cu); f_12c89874();
  /* 12c8851c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8851f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_12c88522:;
  /* 12c88522 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c88525 pop edi */
  EDI = (pop32());
  /* 12c88526 je 0x12c8852e */
  if (C.zf) goto L_12c8852e;
  /* 12c88528 or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 12c8852c jmp 0x12c8853d */
  goto L_12c8853d;
L_12c8852e:;
  /* 12c8852e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c88531 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c88536 jmp 0x12c88540 */
  goto L_12c88540;
L_12c88538:;
  /* 12c88538 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12c8853a mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
L_12c8853d:;
  /* 12c8853d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12c88540:;
  /* 12c88540 pop esi */
  ESI = (pop32());
  /* 12c88541 pop ebx */
  EBX = (pop32());
  /* 12c88542 pop ebp */
  EBP = (pop32());
  /* 12c88543 ret  */
  ESPCHK(0x12c8842cu, _esp0);
  ESP += 4; return;
}

/* FUN_10008544 @ 0x12c88544 (1825 bytes, 595 insns) [1 switch table(s)] */
void f_12c88544(void) {
  FTRACE(0x12c88544u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c88544 push ebp */
  push32((uint32_t)(EBP));
  /* 12c88545 mov ebp, esp */
  EBP = (ESP);
  /* 12c88547 sub esp, 0x248 */
  { uint32_t _a=(ESP),_b=(0x248u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8854d push ebx */
  push32((uint32_t)(EBX));
  /* 12c8854e push esi */
  push32((uint32_t)(ESI));
  /* 12c8854f push edi */
  push32((uint32_t)(EDI));
  /* 12c88550 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 12c88553 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 12c88555 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 12c88557 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12c88558 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 12c8855a mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 12c8855d mov dword ptr [ebp - 0x14], esi */
  w32((uint32_t)(EBP + -0x14), (ESI));
  /* 12c88560 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 12c88563 je 0x12c88c5d */
  if (C.zf) goto L_12c88c5d;
  /* 12c88569 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c8856c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c8856e jmp 0x12c88578 */
  goto L_12c88578;
L_12c88570:;
  /* 12c88570 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c88573 mov esi, dword ptr [ebp - 0x30] */
  ESI = (r32((uint32_t)(EBP + -0x30)));
  /* 12c88576 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
L_12c88578:;
  /* 12c88578 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8857b jl 0x12c88c5d */
  if ((C.sf!=C.of)) goto L_12c88c5d;
  /* 12c88581 cmp bl, 0x20 */
  { uint32_t _a=(BL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c88584 jl 0x12c88599 */
  if ((C.sf!=C.of)) goto L_12c88599;
  /* 12c88586 cmp bl, 0x78 */
  { uint32_t _a=(BL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c88589 jg 0x12c88599 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c88599;
  /* 12c8858b movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 12c8858e mov al, byte ptr [eax + 0x12c8e2f4] */
  AL = (r8((uint32_t)(EAX + 0x12c8e2f4)));
  /* 12c88594 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 12c88597 jmp 0x12c8859b */
  goto L_12c8859b;
L_12c88599:;
  /* 12c88599 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c8859b:;
  /* 12c8859b movsx eax, byte ptr [esi + eax*8 + 0x12c8e314] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI + EAX*8 + 0x12c8e314))));
  /* 12c885a3 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12c885a6 cmp eax, 7 */
  { uint32_t _a=(EAX),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c885a9 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12c885ac ja 0x12c88c4c */
  if ((!C.cf&&!C.zf)) goto L_12c88c4c;
  /* 12c885b2 jmp dword ptr [eax*4 + 0x12c88c65] */
  switch (EAX) {
    case 0: goto L_12c886e3;
    case 1: goto L_12c885b9;
    case 2: goto L_12c885d4;
    case 3: goto L_12c88620;
    case 4: goto L_12c88657;
    case 5: goto L_12c8865f;
    case 6: goto L_12c88694;
    case 7: goto L_12c88727;
    default: x86_unimpl("switch@0x12c885b2 out of table"); return;
  }
L_12c885b9:;
  /* 12c885b9 or dword ptr [ebp - 0x10], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))|(0xffffffffu); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 12c885bd mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 12c885c0 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12c885c3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12c885c6 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12c885c9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c885cc mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12c885cf jmp 0x12c88c4c */
  goto L_12c88c4c;
L_12c885d4:;
  /* 12c885d4 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 12c885d7 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c885da je 0x12c88617 */
  if (C.zf) goto L_12c88617;
  /* 12c885dc sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c885df je 0x12c8860e */
  if (C.zf) goto L_12c8860e;
  /* 12c885e1 sub eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c885e4 je 0x12c88605 */
  if (C.zf) goto L_12c88605;
  /* 12c885e6 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 12c885e7 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 12c885e8 je 0x12c885fc */
  if (C.zf) goto L_12c885fc;
  /* 12c885ea sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c885ed jne 0x12c88c4c */
  if (!C.zf) goto L_12c88c4c;
  /* 12c885f3 or dword ptr [ebp - 4], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x8u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c885f7 jmp 0x12c88c4c */
  goto L_12c88c4c;
L_12c885fc:;
  /* 12c885fc or dword ptr [ebp - 4], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x4u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c88600 jmp 0x12c88c4c */
  goto L_12c88c4c;
L_12c88605:;
  /* 12c88605 or dword ptr [ebp - 4], 1 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x1u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c88609 jmp 0x12c88c4c */
  goto L_12c88c4c;
L_12c8860e:;
  /* 12c8860e or byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))|(0x80u); w8((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,8); }
  /* 12c88612 jmp 0x12c88c4c */
  goto L_12c88c4c;
L_12c88617:;
  /* 12c88617 or dword ptr [ebp - 4], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x2u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c8861b jmp 0x12c88c4c */
  goto L_12c88c4c;
L_12c88620:;
  /* 12c88620 cmp bl, 0x2a */
  { uint32_t _a=(BL),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c88623 jne 0x12c88648 */
  if (!C.zf) goto L_12c88648;
  /* 12c88625 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12c88628 push eax */
  push32((uint32_t)(EAX));
  /* 12c88629 call 0x12c88d23 */
  push32(0x12c8862eu); f_12c88d23();
  /* 12c8862e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c88630 pop ecx */
  ECX = (pop32());
  /* 12c88631 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12c88634 jge 0x12c88c4c */
  if ((C.sf==C.of)) goto L_12c88c4c;
  /* 12c8863a or dword ptr [ebp - 4], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x4u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c8863e neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_12c88640:;
  /* 12c88640 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12c88643 jmp 0x12c88c4c */
  goto L_12c88c4c;
L_12c88648:;
  /* 12c88648 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c8864b movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 12c8864e lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 12c88651 lea eax, [ecx + eax*2 - 0x30] */
  EAX = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 12c88655 jmp 0x12c88640 */
  goto L_12c88640;
L_12c88657:;
  /* 12c88657 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12c8865a jmp 0x12c88c4c */
  goto L_12c88c4c;
L_12c8865f:;
  /* 12c8865f cmp bl, 0x2a */
  { uint32_t _a=(BL),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c88662 jne 0x12c88682 */
  if (!C.zf) goto L_12c88682;
  /* 12c88664 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12c88667 push eax */
  push32((uint32_t)(EAX));
  /* 12c88668 call 0x12c88d23 */
  push32(0x12c8866du); f_12c88d23();
  /* 12c8866d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8866f pop ecx */
  ECX = (pop32());
  /* 12c88670 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12c88673 jge 0x12c88c4c */
  if ((C.sf==C.of)) goto L_12c88c4c;
  /* 12c88679 or dword ptr [ebp - 0x10], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))|(0xffffffffu); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 12c8867d jmp 0x12c88c4c */
  goto L_12c88c4c;
L_12c88682:;
  /* 12c88682 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 12c88685 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 12c88688 lea eax, [ecx + eax*2 - 0x30] */
  EAX = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 12c8868c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12c8868f jmp 0x12c88c4c */
  goto L_12c88c4c;
L_12c88694:;
  /* 12c88694 cmp bl, 0x49 */
  { uint32_t _a=(BL),_b=(0x49u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c88697 je 0x12c886c7 */
  if (C.zf) goto L_12c886c7;
  /* 12c88699 cmp bl, 0x68 */
  { uint32_t _a=(BL),_b=(0x68u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8869c je 0x12c886be */
  if (C.zf) goto L_12c886be;
  /* 12c8869e cmp bl, 0x6c */
  { uint32_t _a=(BL),_b=(0x6cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c886a1 je 0x12c886b5 */
  if (C.zf) goto L_12c886b5;
  /* 12c886a3 cmp bl, 0x77 */
  { uint32_t _a=(BL),_b=(0x77u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c886a6 jne 0x12c88c4c */
  if (!C.zf) goto L_12c88c4c;
  /* 12c886ac or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 12c886b0 jmp 0x12c88c4c */
  goto L_12c88c4c;
L_12c886b5:;
  /* 12c886b5 or dword ptr [ebp - 4], 0x10 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x10u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c886b9 jmp 0x12c88c4c */
  goto L_12c88c4c;
L_12c886be:;
  /* 12c886be or dword ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x20u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c886c2 jmp 0x12c88c4c */
  goto L_12c88c4c;
L_12c886c7:;
  /* 12c886c7 cmp byte ptr [edi], 0x36 */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c886ca jne 0x12c886e0 */
  if (!C.zf) goto L_12c886e0;
  /* 12c886cc cmp byte ptr [edi + 1], 0x34 */
  { uint32_t _a=(r8((uint32_t)(EDI + 0x1))),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c886d0 jne 0x12c886e0 */
  if (!C.zf) goto L_12c886e0;
  /* 12c886d2 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12c886d3 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12c886d4 or byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x80u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 12c886d8 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 12c886db jmp 0x12c88c4c */
  goto L_12c88c4c;
L_12c886e0:;
  /* 12c886e0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_12c886e3:;
  /* 12c886e3 mov ecx, dword ptr [0x12c90b18] */
  ECX = (r32((uint32_t)(0x12c90b18)));
  /* 12c886e9 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12c886ec movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 12c886ef test byte ptr [ecx + eax*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 12c886f4 je 0x12c8870f */
  if (C.zf) goto L_12c8870f;
  /* 12c886f6 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 12c886f9 push eax */
  push32((uint32_t)(EAX));
  /* 12c886fa push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c886fd movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 12c88700 push eax */
  push32((uint32_t)(EAX));
  /* 12c88701 call 0x12c88c85 */
  push32(0x12c88706u); f_12c88c85();
  /* 12c88706 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 12c88708 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8870b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12c8870c mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_12c8870f:;
  /* 12c8870f lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 12c88712 push eax */
  push32((uint32_t)(EAX));
  /* 12c88713 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c88716 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 12c88719 push eax */
  push32((uint32_t)(EAX));
  /* 12c8871a call 0x12c88c85 */
  push32(0x12c8871fu); f_12c88c85();
  /* 12c8871f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c88722 jmp 0x12c88c4c */
  goto L_12c88c4c;
L_12c88727:;
  /* 12c88727 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 12c8872a cmp eax, 0x67 */
  { uint32_t _a=(EAX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8872d jg 0x12c8894f */
  if ((!C.zf&&C.sf==C.of)) goto L_12c8894f;
  /* 12c88733 cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c88736 jge 0x12c887d2 */
  if ((C.sf==C.of)) goto L_12c887d2;
  /* 12c8873c cmp eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8873f jg 0x12c88830 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c88830;
  /* 12c88745 je 0x12c889c3 */
  if (C.zf) goto L_12c889c3;
  /* 12c8874b sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8874e je 0x12c887f3 */
  if (C.zf) goto L_12c887f3;
  /* 12c88754 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 12c88755 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 12c88756 je 0x12c887c8 */
  if (C.zf) goto L_12c887c8;
  /* 12c88758 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 12c88759 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 12c8875a je 0x12c887c8 */
  if (C.zf) goto L_12c887c8;
  /* 12c8875c sub eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8875f jne 0x12c88b4e */
  if (!C.zf) goto L_12c88b4e;
  /* 12c88765 test word ptr [ebp - 4], 0x830 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x830u); fl_logic(_r,16); }
  /* 12c8876b jne 0x12c88771 */
  if (!C.zf) goto L_12c88771;
  /* 12c8876d or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
L_12c88771:;
  /* 12c88771 mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 12c88774 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c88777 jne 0x12c8877e */
  if (!C.zf) goto L_12c8877e;
  /* 12c88779 mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
L_12c8877e:;
  /* 12c8877e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12c88781 push eax */
  push32((uint32_t)(EAX));
  /* 12c88782 call 0x12c88d23 */
  push32(0x12c88787u); f_12c88d23();
  /* 12c88787 test word ptr [ebp - 4], 0x810 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x810u); fl_logic(_r,16); }
  /* 12c8878d pop ecx */
  ECX = (pop32());
  /* 12c8878e mov ecx, eax */
  ECX = (EAX);
  /* 12c88790 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c88793 je 0x12c88997 */
  if (C.zf) goto L_12c88997;
  /* 12c88799 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c8879b jne 0x12c887a6 */
  if (!C.zf) goto L_12c887a6;
  /* 12c8879d mov ecx, dword ptr [0x12c90b08] */
  ECX = (r32((uint32_t)(0x12c90b08)));
  /* 12c887a3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12c887a6:;
  /* 12c887a6 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 12c887ad mov eax, ecx */
  EAX = (ECX);
L_12c887af:;
  /* 12c887af mov edx, esi */
  EDX = (ESI);
  /* 12c887b1 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 12c887b2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c887b4 je 0x12c8898e */
  if (C.zf) goto L_12c8898e;
  /* 12c887ba cmp word ptr [eax], 0 */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 12c887be je 0x12c8898e */
  if (C.zf) goto L_12c8898e;
  /* 12c887c4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c887c5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c887c6 jmp 0x12c887af */
  goto L_12c887af;
L_12c887c8:;
  /* 12c887c8 mov dword ptr [ebp - 0x34], 1 */
  w32((uint32_t)(EBP + -0x34), (0x1u));
  /* 12c887cf add bl, 0x20 */
  { uint32_t _a=(BL),_b=(0x20u),_r=_a+_b; BL = (_r); fl_add(_a,_b,_r,8); }
L_12c887d2:;
  /* 12c887d2 or dword ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x40u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 12c887d6 lea edi, [ebp - 0x248] */
  EDI = ((uint32_t)(EBP + -0x248));
  /* 12c887dc cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c887de mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 12c887e1 jge 0x12c888b6 */
  if ((C.sf==C.of)) goto L_12c888b6;
  /* 12c887e7 mov dword ptr [ebp - 0x10], 6 */
  w32((uint32_t)(EBP + -0x10), (0x6u));
  /* 12c887ee jmp 0x12c888c4 */
  goto L_12c888c4;
L_12c887f3:;
  /* 12c887f3 test word ptr [ebp - 4], 0x830 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x830u); fl_logic(_r,16); }
  /* 12c887f9 jne 0x12c887ff */
  if (!C.zf) goto L_12c887ff;
  /* 12c887fb or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
L_12c887ff:;
  /* 12c887ff test word ptr [ebp - 4], 0x810 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x810u); fl_logic(_r,16); }
  /* 12c88805 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12c88808 push eax */
  push32((uint32_t)(EAX));
  /* 12c88809 je 0x12c88846 */
  if (C.zf) goto L_12c88846;
  /* 12c8880b call 0x12c88d40 */
  push32(0x12c88810u); f_12c88d40();
  /* 12c88810 push eax */
  push32((uint32_t)(EAX));
  /* 12c88811 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 12c88817 push eax */
  push32((uint32_t)(EAX));
  /* 12c88818 call 0x12c8bf70 */
  push32(0x12c8881du); f_12c8bf70();
  /* 12c8881d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c88820 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c88823 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c88825 jge 0x12c88859 */
  if ((C.sf==C.of)) goto L_12c88859;
  /* 12c88827 mov dword ptr [ebp - 0x28], 1 */
  w32((uint32_t)(EBP + -0x28), (0x1u));
  /* 12c8882e jmp 0x12c88859 */
  goto L_12c88859;
L_12c88830:;
  /* 12c88830 sub eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c88833 je 0x12c88867 */
  if (C.zf) goto L_12c88867;
  /* 12c88835 sub eax, 9 */
  { uint32_t _a=(EAX),_b=(0x9u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c88838 je 0x12c887ff */
  if (C.zf) goto L_12c887ff;
  /* 12c8883a dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 12c8883b je 0x12c88a29 */
  if (C.zf) goto L_12c88a29;
  /* 12c88841 jmp 0x12c88b4e */
  goto L_12c88b4e;
L_12c88846:;
  /* 12c88846 call 0x12c88d23 */
  push32(0x12c8884bu); f_12c88d23();
  /* 12c8884b pop ecx */
  ECX = (pop32());
  /* 12c8884c mov byte ptr [ebp - 0x248], al */
  w8((uint32_t)(EBP + -0x248), (AL));
  /* 12c88852 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_12c88859:;
  /* 12c88859 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 12c8885f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c88862 jmp 0x12c88b4e */
  goto L_12c88b4e;
L_12c88867:;
  /* 12c88867 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12c8886a push eax */
  push32((uint32_t)(EAX));
  /* 12c8886b call 0x12c88d23 */
  push32(0x12c88870u); f_12c88d23();
  /* 12c88870 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c88872 pop ecx */
  ECX = (pop32());
  /* 12c88873 je 0x12c888a8 */
  if (C.zf) goto L_12c888a8;
  /* 12c88875 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c88878 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c8887a je 0x12c888a8 */
  if (C.zf) goto L_12c888a8;
  /* 12c8887c test byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x8u); fl_logic(_r,8); }
  /* 12c88880 je 0x12c88899 */
  if (C.zf) goto L_12c88899;
  /* 12c88882 movsx eax, word ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EAX))));
  /* 12c88885 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12c88887 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c8888a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c8888d mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 12c88894 jmp 0x12c88b4e */
  goto L_12c88b4e;
L_12c88899:;
  /* 12c88899 and dword ptr [ebp - 0x24], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x24)))&(0x0u); w32((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,32); }
  /* 12c8889d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c888a0 movsx eax, word ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EAX))));
  /* 12c888a3 jmp 0x12c88b4b */
  goto L_12c88b4b;
L_12c888a8:;
  /* 12c888a8 mov eax, dword ptr [0x12c90b04] */
  EAX = (r32((uint32_t)(0x12c90b04)));
  /* 12c888ad mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c888b0 push eax */
  push32((uint32_t)(EAX));
  /* 12c888b1 jmp 0x12c88944 */
  goto L_12c88944;
L_12c888b6:;
  /* 12c888b6 jne 0x12c888c4 */
  if (!C.zf) goto L_12c888c4;
  /* 12c888b8 cmp bl, 0x67 */
  { uint32_t _a=(BL),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c888bb jne 0x12c888c4 */
  if (!C.zf) goto L_12c888c4;
  /* 12c888bd mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_12c888c4:;
  /* 12c888c4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c888c7 push dword ptr [ebp - 0x34] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x34))));
  /* 12c888ca add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c888cd mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 12c888d0 push dword ptr [ebp - 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x10))));
  /* 12c888d3 mov ecx, dword ptr [eax - 8] */
  ECX = (r32((uint32_t)(EAX + -0x8)));
  /* 12c888d6 mov dword ptr [ebp - 0x48], ecx */
  w32((uint32_t)(EBP + -0x48), (ECX));
  /* 12c888d9 mov eax, dword ptr [eax - 4] */
  EAX = (r32((uint32_t)(EAX + -0x4)));
  /* 12c888dc mov dword ptr [ebp - 0x44], eax */
  w32((uint32_t)(EBP + -0x44), (EAX));
  /* 12c888df movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 12c888e2 push eax */
  push32((uint32_t)(EAX));
  /* 12c888e3 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 12c888e9 push eax */
  push32((uint32_t)(EAX));
  /* 12c888ea lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 12c888ed push eax */
  push32((uint32_t)(EAX));
  /* 12c888ee call dword ptr [0x12c92e78] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c92e78))), 0x12c888f4u);
  /* 12c888f4 mov esi, dword ptr [ebp - 4] */
  ESI = (r32((uint32_t)(EBP + -0x4)));
  /* 12c888f7 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c888fa and esi, 0x80 */
  { uint32_t _r=(ESI)&(0x80u); ESI = (_r); fl_logic(_r,32); }
  /* 12c88900 je 0x12c88916 */
  if (C.zf) goto L_12c88916;
  /* 12c88902 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c88906 jne 0x12c88916 */
  if (!C.zf) goto L_12c88916;
  /* 12c88908 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 12c8890e push eax */
  push32((uint32_t)(EAX));
  /* 12c8890f call dword ptr [0x12c92e84] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c92e84))), 0x12c88915u);
  /* 12c88915 pop ecx */
  ECX = (pop32());
L_12c88916:;
  /* 12c88916 cmp bl, 0x67 */
  { uint32_t _a=(BL),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c88919 jne 0x12c8892d */
  if (!C.zf) goto L_12c8892d;
  /* 12c8891b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 12c8891d jne 0x12c8892d */
  if (!C.zf) goto L_12c8892d;
  /* 12c8891f lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 12c88925 push eax */
  push32((uint32_t)(EAX));
  /* 12c88926 call dword ptr [0x12c92e7c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c92e7c))), 0x12c8892cu);
  /* 12c8892c pop ecx */
  ECX = (pop32());
L_12c8892d:;
  /* 12c8892d cmp byte ptr [ebp - 0x248], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x248))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c88934 jne 0x12c88943 */
  if (!C.zf) goto L_12c88943;
  /* 12c88936 or byte ptr [ebp - 3], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x1u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 12c8893a lea edi, [ebp - 0x247] */
  EDI = ((uint32_t)(EBP + -0x247));
  /* 12c88940 mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
L_12c88943:;
  /* 12c88943 push edi */
  push32((uint32_t)(EDI));
L_12c88944:;
  /* 12c88944 call 0x12c86010 */
  push32(0x12c88949u); f_12c86010();
  /* 12c88949 pop ecx */
  ECX = (pop32());
  /* 12c8894a jmp 0x12c88b4b */
  goto L_12c88b4b;
L_12c8894f:;
  /* 12c8894f sub eax, 0x69 */
  { uint32_t _a=(EAX),_b=(0x69u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c88952 je 0x12c88a29 */
  if (C.zf) goto L_12c88a29;
  /* 12c88958 sub eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8895b je 0x12c889ff */
  if (C.zf) goto L_12c889ff;
  /* 12c88961 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 12c88962 je 0x12c889ec */
  if (C.zf) goto L_12c889ec;
  /* 12c88968 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 12c88969 je 0x12c889bc */
  if (C.zf) goto L_12c889bc;
  /* 12c8896b sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8896e je 0x12c88771 */
  if (C.zf) goto L_12c88771;
  /* 12c88974 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 12c88975 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 12c88976 je 0x12c88a2d */
  if (C.zf) goto L_12c88a2d;
  /* 12c8897c sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8897f jne 0x12c88b4e */
  if (!C.zf) goto L_12c88b4e;
  /* 12c88985 mov dword ptr [ebp - 0x2c], 0x27 */
  w32((uint32_t)(EBP + -0x2c), (0x27u));
  /* 12c8898c jmp 0x12c889ca */
  goto L_12c889ca;
L_12c8898e:;
  /* 12c8898e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c88990 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12c88992 jmp 0x12c88b4b */
  goto L_12c88b4b;
L_12c88997:;
  /* 12c88997 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c88999 jne 0x12c889a4 */
  if (!C.zf) goto L_12c889a4;
  /* 12c8899b mov ecx, dword ptr [0x12c90b04] */
  ECX = (r32((uint32_t)(0x12c90b04)));
  /* 12c889a1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12c889a4:;
  /* 12c889a4 mov eax, ecx */
  EAX = (ECX);
L_12c889a6:;
  /* 12c889a6 mov edx, esi */
  EDX = (ESI);
  /* 12c889a8 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 12c889a9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c889ab je 0x12c889b5 */
  if (C.zf) goto L_12c889b5;
  /* 12c889ad cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c889b0 je 0x12c889b5 */
  if (C.zf) goto L_12c889b5;
  /* 12c889b2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c889b3 jmp 0x12c889a6 */
  goto L_12c889a6;
L_12c889b5:;
  /* 12c889b5 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c889b7 jmp 0x12c88b4b */
  goto L_12c88b4b;
L_12c889bc:;
  /* 12c889bc mov dword ptr [ebp - 0x10], 8 */
  w32((uint32_t)(EBP + -0x10), (0x8u));
L_12c889c3:;
  /* 12c889c3 mov dword ptr [ebp - 0x2c], 7 */
  w32((uint32_t)(EBP + -0x2c), (0x7u));
L_12c889ca:;
  /* 12c889ca test byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x80u); fl_logic(_r,8); }
  /* 12c889ce mov dword ptr [ebp - 0xc], 0x10 */
  w32((uint32_t)(EBP + -0xc), (0x10u));
  /* 12c889d5 je 0x12c88a34 */
  if (C.zf) goto L_12c88a34;
  /* 12c889d7 mov al, byte ptr [ebp - 0x2c] */
  AL = (r8((uint32_t)(EBP + -0x2c)));
  /* 12c889da mov byte ptr [ebp - 0x16], 0x30 */
  w8((uint32_t)(EBP + -0x16), (0x30u));
  /* 12c889de add al, 0x51 */
  { uint32_t _a=(AL),_b=(0x51u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12c889e0 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
  /* 12c889e7 mov byte ptr [ebp - 0x15], al */
  w8((uint32_t)(EBP + -0x15), (AL));
  /* 12c889ea jmp 0x12c88a34 */
  goto L_12c88a34;
L_12c889ec:;
  /* 12c889ec test byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x80u); fl_logic(_r,8); }
  /* 12c889f0 mov dword ptr [ebp - 0xc], 8 */
  w32((uint32_t)(EBP + -0xc), (0x8u));
  /* 12c889f7 je 0x12c88a34 */
  if (C.zf) goto L_12c88a34;
  /* 12c889f9 or byte ptr [ebp - 3], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x2u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 12c889fd jmp 0x12c88a34 */
  goto L_12c88a34;
L_12c889ff:;
  /* 12c889ff lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12c88a02 push eax */
  push32((uint32_t)(EAX));
  /* 12c88a03 call 0x12c88d23 */
  push32(0x12c88a08u); f_12c88d23();
  /* 12c88a08 test byte ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x20u); fl_logic(_r,8); }
  /* 12c88a0c pop ecx */
  ECX = (pop32());
  /* 12c88a0d je 0x12c88a18 */
  if (C.zf) goto L_12c88a18;
  /* 12c88a0f mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 12c88a13 mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
  /* 12c88a16 jmp 0x12c88a1d */
  goto L_12c88a1d;
L_12c88a18:;
  /* 12c88a18 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c88a1b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_12c88a1d:;
  /* 12c88a1d mov dword ptr [ebp - 0x28], 1 */
  w32((uint32_t)(EBP + -0x28), (0x1u));
  /* 12c88a24 jmp 0x12c88c4c */
  goto L_12c88c4c;
L_12c88a29:;
  /* 12c88a29 or dword ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x40u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_12c88a2d:;
  /* 12c88a2d mov dword ptr [ebp - 0xc], 0xa */
  w32((uint32_t)(EBP + -0xc), (0xau));
L_12c88a34:;
  /* 12c88a34 test byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x80u); fl_logic(_r,8); }
  /* 12c88a38 je 0x12c88a46 */
  if (C.zf) goto L_12c88a46;
  /* 12c88a3a lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12c88a3d push eax */
  push32((uint32_t)(EAX));
  /* 12c88a3e call 0x12c88d30 */
  push32(0x12c88a43u); f_12c88d30();
  /* 12c88a43 pop ecx */
  ECX = (pop32());
  /* 12c88a44 jmp 0x12c88a87 */
  goto L_12c88a87;
L_12c88a46:;
  /* 12c88a46 test byte ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x20u); fl_logic(_r,8); }
  /* 12c88a4a je 0x12c88a6d */
  if (C.zf) goto L_12c88a6d;
  /* 12c88a4c test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 12c88a50 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12c88a53 push eax */
  push32((uint32_t)(EAX));
  /* 12c88a54 je 0x12c88a62 */
  if (C.zf) goto L_12c88a62;
  /* 12c88a56 call 0x12c88d23 */
  push32(0x12c88a5bu); f_12c88d23();
  /* 12c88a5b pop ecx */
  ECX = (pop32());
  /* 12c88a5c movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
L_12c88a5f:;
  /* 12c88a5f cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12c88a60 jmp 0x12c88a87 */
  goto L_12c88a87;
L_12c88a62:;
  /* 12c88a62 call 0x12c88d23 */
  push32(0x12c88a67u); f_12c88d23();
  /* 12c88a67 pop ecx */
  ECX = (pop32());
  /* 12c88a68 movzx eax, ax */
  EAX = ((uint32_t)(AX));
  /* 12c88a6b jmp 0x12c88a5f */
  goto L_12c88a5f;
L_12c88a6d:;
  /* 12c88a6d test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 12c88a71 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12c88a74 push eax */
  push32((uint32_t)(EAX));
  /* 12c88a75 je 0x12c88a7f */
  if (C.zf) goto L_12c88a7f;
  /* 12c88a77 call 0x12c88d23 */
  push32(0x12c88a7cu); f_12c88d23();
  /* 12c88a7c pop ecx */
  ECX = (pop32());
  /* 12c88a7d jmp 0x12c88a5f */
  goto L_12c88a5f;
L_12c88a7f:;
  /* 12c88a7f call 0x12c88d23 */
  push32(0x12c88a84u); f_12c88d23();
  /* 12c88a84 pop ecx */
  ECX = (pop32());
  /* 12c88a85 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
L_12c88a87:;
  /* 12c88a87 test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 12c88a8b je 0x12c88aa8 */
  if (C.zf) goto L_12c88aa8;
  /* 12c88a8d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c88a8f jg 0x12c88aa8 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c88aa8;
  /* 12c88a91 jl 0x12c88a97 */
  if ((C.sf!=C.of)) goto L_12c88a97;
  /* 12c88a93 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c88a95 jae 0x12c88aa8 */
  if (!C.cf) goto L_12c88aa8;
L_12c88a97:;
  /* 12c88a97 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c88a99 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c88a9c mov esi, eax */
  ESI = (EAX);
  /* 12c88a9e neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c88aa0 or byte ptr [ebp - 3], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x1u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 12c88aa4 mov edi, edx */
  EDI = (EDX);
  /* 12c88aa6 jmp 0x12c88aac */
  goto L_12c88aac;
L_12c88aa8:;
  /* 12c88aa8 mov esi, eax */
  ESI = (EAX);
  /* 12c88aaa mov edi, edx */
  EDI = (EDX);
L_12c88aac:;
  /* 12c88aac test byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x80u); fl_logic(_r,8); }
  /* 12c88ab0 jne 0x12c88ab5 */
  if (!C.zf) goto L_12c88ab5;
  /* 12c88ab2 and edi, 0 */
  { uint32_t _r=(EDI)&(0x0u); EDI = (_r); fl_logic(_r,32); }
L_12c88ab5:;
  /* 12c88ab5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c88ab9 jge 0x12c88ac4 */
  if ((C.sf==C.of)) goto L_12c88ac4;
  /* 12c88abb mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12c88ac2 jmp 0x12c88ac8 */
  goto L_12c88ac8;
L_12c88ac4:;
  /* 12c88ac4 and dword ptr [ebp - 4], 0xfffffff7 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0xfffffff7u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_12c88ac8:;
  /* 12c88ac8 mov eax, esi */
  EAX = (ESI);
  /* 12c88aca or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 12c88acc jne 0x12c88ad2 */
  if (!C.zf) goto L_12c88ad2;
  /* 12c88ace and dword ptr [ebp - 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1c)))&(0x0u); w32((uint32_t)(EBP + -0x1c), (_r)); fl_logic(_r,32); }
L_12c88ad2:;
  /* 12c88ad2 lea eax, [ebp - 0x49] */
  EAX = ((uint32_t)(EBP + -0x49));
  /* 12c88ad5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12c88ad8:;
  /* 12c88ad8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c88adb dec dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))-1; w32((uint32_t)(EBP + -0x10), (_r)); fl_dec(_r,32); }
  /* 12c88ade test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c88ae0 jg 0x12c88ae8 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c88ae8;
  /* 12c88ae2 mov eax, esi */
  EAX = (ESI);
  /* 12c88ae4 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 12c88ae6 je 0x12c88b23 */
  if (C.zf) goto L_12c88b23;
L_12c88ae8:;
  /* 12c88ae8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c88aeb cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12c88aec push edx */
  push32((uint32_t)(EDX));
  /* 12c88aed push eax */
  push32((uint32_t)(EAX));
  /* 12c88aee push edi */
  push32((uint32_t)(EDI));
  /* 12c88aef push esi */
  push32((uint32_t)(ESI));
  /* 12c88af0 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 12c88af3 mov dword ptr [ebp - 0x3c], edx */
  w32((uint32_t)(EBP + -0x3c), (EDX));
  /* 12c88af6 call 0x12c8c0b0 */
  push32(0x12c88afbu); f_12c8c0b0();
  /* 12c88afb push dword ptr [ebp - 0x3c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x3c))));
  /* 12c88afe mov ebx, eax */
  EBX = (EAX);
  /* 12c88b00 add ebx, 0x30 */
  { uint32_t _a=(EBX),_b=(0x30u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c88b03 push dword ptr [ebp - 0x40] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x40))));
  /* 12c88b06 push edi */
  push32((uint32_t)(EDI));
  /* 12c88b07 push esi */
  push32((uint32_t)(ESI));
  /* 12c88b08 call 0x12c8c040 */
  push32(0x12c88b0du); f_12c8c040();
  /* 12c88b0d cmp ebx, 0x39 */
  { uint32_t _a=(EBX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c88b10 mov esi, eax */
  ESI = (EAX);
  /* 12c88b12 mov edi, edx */
  EDI = (EDX);
  /* 12c88b14 jle 0x12c88b19 */
  if ((C.zf||C.sf!=C.of)) goto L_12c88b19;
  /* 12c88b16 add ebx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
L_12c88b19:;
  /* 12c88b19 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c88b1c dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 12c88b1f mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
  /* 12c88b21 jmp 0x12c88ad8 */
  goto L_12c88ad8;
L_12c88b23:;
  /* 12c88b23 lea eax, [ebp - 0x49] */
  EAX = ((uint32_t)(EBP + -0x49));
  /* 12c88b26 sub eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c88b29 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 12c88b2c test byte ptr [ebp - 3], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x2u); fl_logic(_r,8); }
  /* 12c88b30 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c88b33 je 0x12c88b4e */
  if (C.zf) goto L_12c88b4e;
  /* 12c88b35 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c88b38 cmp byte ptr [ecx], 0x30 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c88b3b jne 0x12c88b41 */
  if (!C.zf) goto L_12c88b41;
  /* 12c88b3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c88b3f jne 0x12c88b4e */
  if (!C.zf) goto L_12c88b4e;
L_12c88b41:;
  /* 12c88b41 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 12c88b44 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c88b45 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c88b48 mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
L_12c88b4b:;
  /* 12c88b4b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12c88b4e:;
  /* 12c88b4e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c88b52 jne 0x12c88c4c */
  if (!C.zf) goto L_12c88c4c;
  /* 12c88b58 mov ebx, dword ptr [ebp - 4] */
  EBX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c88b5b test bl, 0x40 */
  { uint32_t _r=(BL)&(0x40u); fl_logic(_r,8); }
  /* 12c88b5e je 0x12c88b86 */
  if (C.zf) goto L_12c88b86;
  /* 12c88b60 test bh, 1 */
  { uint32_t _r=(C.b.b.h)&(0x1u); fl_logic(_r,8); }
  /* 12c88b63 je 0x12c88b6b */
  if (C.zf) goto L_12c88b6b;
  /* 12c88b65 mov byte ptr [ebp - 0x16], 0x2d */
  w8((uint32_t)(EBP + -0x16), (0x2du));
  /* 12c88b69 jmp 0x12c88b7f */
  goto L_12c88b7f;
L_12c88b6b:;
  /* 12c88b6b test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 12c88b6e je 0x12c88b76 */
  if (C.zf) goto L_12c88b76;
  /* 12c88b70 mov byte ptr [ebp - 0x16], 0x2b */
  w8((uint32_t)(EBP + -0x16), (0x2bu));
  /* 12c88b74 jmp 0x12c88b7f */
  goto L_12c88b7f;
L_12c88b76:;
  /* 12c88b76 test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 12c88b79 je 0x12c88b86 */
  if (C.zf) goto L_12c88b86;
  /* 12c88b7b mov byte ptr [ebp - 0x16], 0x20 */
  w8((uint32_t)(EBP + -0x16), (0x20u));
L_12c88b7f:;
  /* 12c88b7f mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
L_12c88b86:;
  /* 12c88b86 mov esi, dword ptr [ebp - 0x20] */
  ESI = (r32((uint32_t)(EBP + -0x20)));
  /* 12c88b89 sub esi, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c88b8c sub esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c88b8f test bl, 0xc */
  { uint32_t _r=(BL)&(0xcu); fl_logic(_r,8); }
  /* 12c88b92 jne 0x12c88ba6 */
  if (!C.zf) goto L_12c88ba6;
  /* 12c88b94 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 12c88b97 push eax */
  push32((uint32_t)(EAX));
  /* 12c88b98 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c88b9b push esi */
  push32((uint32_t)(ESI));
  /* 12c88b9c push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12c88b9e call 0x12c88cba */
  push32(0x12c88ba3u); f_12c88cba();
  /* 12c88ba3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c88ba6:;
  /* 12c88ba6 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 12c88ba9 push eax */
  push32((uint32_t)(EAX));
  /* 12c88baa lea eax, [ebp - 0x16] */
  EAX = ((uint32_t)(EBP + -0x16));
  /* 12c88bad push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c88bb0 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 12c88bb3 push eax */
  push32((uint32_t)(EAX));
  /* 12c88bb4 call 0x12c88ceb */
  push32(0x12c88bb9u); f_12c88ceb();
  /* 12c88bb9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c88bbc test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 12c88bbf je 0x12c88bd8 */
  if (C.zf) goto L_12c88bd8;
  /* 12c88bc1 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 12c88bc4 jne 0x12c88bd8 */
  if (!C.zf) goto L_12c88bd8;
  /* 12c88bc6 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 12c88bc9 push eax */
  push32((uint32_t)(EAX));
  /* 12c88bca push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c88bcd push esi */
  push32((uint32_t)(ESI));
  /* 12c88bce push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12c88bd0 call 0x12c88cba */
  push32(0x12c88bd5u); f_12c88cba();
  /* 12c88bd5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c88bd8:;
  /* 12c88bd8 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c88bdc je 0x12c88c1f */
  if (C.zf) goto L_12c88c1f;
  /* 12c88bde cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c88be2 jle 0x12c88c1f */
  if ((C.zf||C.sf!=C.of)) goto L_12c88c1f;
  /* 12c88be4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c88be7 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c88bea lea edi, [eax - 1] */
  EDI = ((uint32_t)(EAX + -0x1));
L_12c88bed:;
  /* 12c88bed mov ax, word ptr [ebx] */
  AX = (r16((uint32_t)(EBX)));
  /* 12c88bf0 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 12c88bf1 push eax */
  push32((uint32_t)(EAX));
  /* 12c88bf2 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 12c88bf5 push eax */
  push32((uint32_t)(EAX));
  /* 12c88bf6 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 12c88bf7 call 0x12c8bf70 */
  push32(0x12c88bfcu); f_12c8bf70();
  /* 12c88bfc pop ecx */
  ECX = (pop32());
  /* 12c88bfd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c88bff pop ecx */
  ECX = (pop32());
  /* 12c88c00 jle 0x12c88c34 */
  if ((C.zf||C.sf!=C.of)) goto L_12c88c34;
  /* 12c88c02 lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 12c88c05 push ecx */
  push32((uint32_t)(ECX));
  /* 12c88c06 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c88c09 push eax */
  push32((uint32_t)(EAX));
  /* 12c88c0a lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 12c88c0d push eax */
  push32((uint32_t)(EAX));
  /* 12c88c0e call 0x12c88ceb */
  push32(0x12c88c13u); f_12c88ceb();
  /* 12c88c13 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c88c16 mov eax, edi */
  EAX = (EDI);
  /* 12c88c18 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 12c88c19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c88c1b jne 0x12c88bed */
  if (!C.zf) goto L_12c88bed;
  /* 12c88c1d jmp 0x12c88c34 */
  goto L_12c88c34;
L_12c88c1f:;
  /* 12c88c1f lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 12c88c22 push eax */
  push32((uint32_t)(EAX));
  /* 12c88c23 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c88c26 push dword ptr [ebp - 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0xc))));
  /* 12c88c29 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 12c88c2c call 0x12c88ceb */
  push32(0x12c88c31u); f_12c88ceb();
  /* 12c88c31 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c88c34:;
  /* 12c88c34 test byte ptr [ebp - 4], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x4u); fl_logic(_r,8); }
  /* 12c88c38 je 0x12c88c4c */
  if (C.zf) goto L_12c88c4c;
  /* 12c88c3a lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 12c88c3d push eax */
  push32((uint32_t)(EAX));
  /* 12c88c3e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c88c41 push esi */
  push32((uint32_t)(ESI));
  /* 12c88c42 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12c88c44 call 0x12c88cba */
  push32(0x12c88c49u); f_12c88cba();
  /* 12c88c49 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c88c4c:;
  /* 12c88c4c mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 12c88c4f mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 12c88c51 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12c88c52 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 12c88c54 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 12c88c57 jne 0x12c88570 */
  if (!C.zf) goto L_12c88570;
L_12c88c5d:;
  /* 12c88c5d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c88c60 pop edi */
  EDI = (pop32());
  /* 12c88c61 pop esi */
  ESI = (pop32());
  /* 12c88c62 pop ebx */
  EBX = (pop32());
  /* 12c88c63 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c88c64 ret  */
  ESPCHK(0x12c88544u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c85 @ 0x12c88c85 (53 bytes, 25 insns) */
void f_12c88c85(void) {
  FTRACE(0x12c88c85u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c88c85 push ebp */
  push32((uint32_t)(EBP));
  /* 12c88c86 mov ebp, esp */
  EBP = (ESP);
  /* 12c88c88 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c88c8b dec dword ptr [ecx + 4] */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))-1; w32((uint32_t)(ECX + 0x4), (_r)); fl_dec(_r,32); }
  /* 12c88c8e js 0x12c88c9e */
  if (C.sf) goto L_12c88c9e;
  /* 12c88c90 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c88c92 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12c88c95 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12c88c97 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 12c88c99 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 12c88c9c jmp 0x12c88ca9 */
  goto L_12c88ca9;
L_12c88c9e:;
  /* 12c88c9e push ecx */
  push32((uint32_t)(ECX));
  /* 12c88c9f push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c88ca2 call 0x12c8842c */
  push32(0x12c88ca7u); f_12c8842c();
  /* 12c88ca7 pop ecx */
  ECX = (pop32());
  /* 12c88ca8 pop ecx */
  ECX = (pop32());
L_12c88ca9:;
  /* 12c88ca9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c88cac mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c88caf jne 0x12c88cb6 */
  if (!C.zf) goto L_12c88cb6;
  /* 12c88cb1 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 12c88cb4 pop ebp */
  EBP = (pop32());
  /* 12c88cb5 ret  */
  ESPCHK(0x12c88c85u, _esp0);
  ESP += 4; return;
L_12c88cb6:;
  /* 12c88cb6 inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 12c88cb8 pop ebp */
  EBP = (pop32());
  /* 12c88cb9 ret  */
  ESPCHK(0x12c88c85u, _esp0);
  ESP += 4; return;
}

/* FUN_10008cba @ 0x12c88cba (49 bytes, 22 insns) */
void f_12c88cba(void) {
  FTRACE(0x12c88cbau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c88cba push esi */
  push32((uint32_t)(ESI));
  /* 12c88cbb push edi */
  push32((uint32_t)(EDI));
  /* 12c88cbc mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 12c88cc0 mov eax, edi */
  EAX = (EDI);
  /* 12c88cc2 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 12c88cc3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c88cc5 jle 0x12c88ce8 */
  if ((C.zf||C.sf!=C.of)) goto L_12c88ce8;
  /* 12c88cc7 mov esi, dword ptr [esp + 0x18] */
  ESI = (r32((uint32_t)(ESP + 0x18)));
L_12c88ccb:;
  /* 12c88ccb push esi */
  push32((uint32_t)(ESI));
  /* 12c88ccc push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 12c88cd0 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 12c88cd4 call 0x12c88c85 */
  push32(0x12c88cd9u); f_12c88c85();
  /* 12c88cd9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c88cdc cmp dword ptr [esi], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c88cdf je 0x12c88ce8 */
  if (C.zf) goto L_12c88ce8;
  /* 12c88ce1 mov eax, edi */
  EAX = (EDI);
  /* 12c88ce3 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 12c88ce4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c88ce6 jg 0x12c88ccb */
  if ((!C.zf&&C.sf==C.of)) goto L_12c88ccb;
L_12c88ce8:;
  /* 12c88ce8 pop edi */
  EDI = (pop32());
  /* 12c88ce9 pop esi */
  ESI = (pop32());
  /* 12c88cea ret  */
  ESPCHK(0x12c88cbau, _esp0);
  ESP += 4; return;
}

/* FUN_10008ceb @ 0x12c88ceb (56 bytes, 27 insns) */
void f_12c88ceb(void) {
  FTRACE(0x12c88cebu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c88ceb push ebx */
  push32((uint32_t)(EBX));
  /* 12c88cec mov ebx, dword ptr [esp + 0xc] */
  EBX = (r32((uint32_t)(ESP + 0xc)));
  /* 12c88cf0 mov eax, ebx */
  EAX = (EBX);
  /* 12c88cf2 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 12c88cf3 push esi */
  push32((uint32_t)(ESI));
  /* 12c88cf4 push edi */
  push32((uint32_t)(EDI));
  /* 12c88cf5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c88cf7 jle 0x12c88d1f */
  if ((C.zf||C.sf!=C.of)) goto L_12c88d1f;
  /* 12c88cf9 mov edi, dword ptr [esp + 0x1c] */
  EDI = (r32((uint32_t)(ESP + 0x1c)));
  /* 12c88cfd mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
L_12c88d01:;
  /* 12c88d01 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 12c88d04 push edi */
  push32((uint32_t)(EDI));
  /* 12c88d05 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c88d06 push dword ptr [esp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x1c))));
  /* 12c88d0a push eax */
  push32((uint32_t)(EAX));
  /* 12c88d0b call 0x12c88c85 */
  push32(0x12c88d10u); f_12c88c85();
  /* 12c88d10 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c88d13 cmp dword ptr [edi], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c88d16 je 0x12c88d1f */
  if (C.zf) goto L_12c88d1f;
  /* 12c88d18 mov eax, ebx */
  EAX = (EBX);
  /* 12c88d1a dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 12c88d1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c88d1d jg 0x12c88d01 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c88d01;
L_12c88d1f:;
  /* 12c88d1f pop edi */
  EDI = (pop32());
  /* 12c88d20 pop esi */
  ESI = (pop32());
  /* 12c88d21 pop ebx */
  EBX = (pop32());
  /* 12c88d22 ret  */
  ESPCHK(0x12c88cebu, _esp0);
  ESP += 4; return;
}

/* FUN_10008d23 @ 0x12c88d23 (13 bytes, 5 insns) */
void f_12c88d23(void) {
  FTRACE(0x12c88d23u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c88d23 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c88d27 add dword ptr [eax], 4 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 12c88d2a mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 12c88d2c mov eax, dword ptr [eax - 4] */
  EAX = (r32((uint32_t)(EAX + -0x4)));
  /* 12c88d2f ret  */
  ESPCHK(0x12c88d23u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d30 @ 0x12c88d30 (16 bytes, 6 insns) */
void f_12c88d30(void) {
  FTRACE(0x12c88d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c88d30 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c88d34 add dword ptr [eax], 8 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x8u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 12c88d37 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c88d39 mov eax, dword ptr [ecx - 8] */
  EAX = (r32((uint32_t)(ECX + -0x8)));
  /* 12c88d3c mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12c88d3f ret  */
  ESPCHK(0x12c88d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d40 @ 0x12c88d40 (14 bytes, 5 insns) */
void f_12c88d40(void) {
  FTRACE(0x12c88d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c88d40 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c88d44 add dword ptr [eax], 4 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 12c88d47 mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 12c88d49 mov ax, word ptr [eax - 4] */
  AX = (r16((uint32_t)(EAX + -0x4)));
  /* 12c88d4d ret  */
  ESPCHK(0x12c88d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d4e @ 0x12c88d4e (2597 bytes, 906 insns) */
void f_12c88d4e(void) {
  FTRACE(0x12c88d4eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c88d4e push ebp */
  push32((uint32_t)(EBP));
  /* 12c88d4f mov ebp, esp */
  EBP = (ESP);
  /* 12c88d51 sub esp, 0x1c4 */
  { uint32_t _a=(ESP),_b=(0x1c4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c88d57 and byte ptr [ebp - 0x15], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x15)))&(0x0u); w8((uint32_t)(EBP + -0x15), (_r)); fl_logic(_r,8); }
  /* 12c88d5b push ebx */
  push32((uint32_t)(EBX));
  /* 12c88d5c push esi */
  push32((uint32_t)(ESI));
  /* 12c88d5d mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12c88d60 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12c88d62 push edi */
  push32((uint32_t)(EDI));
  /* 12c88d63 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c88d65 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 12c88d68 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12c88d6a mov dword ptr [ebp - 0x34], ebx */
  w32((uint32_t)(EBP + -0x34), (EBX));
  /* 12c88d6d je 0x12c89754 */
  if (C.zf) goto L_12c89754;
  /* 12c88d73 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12c88d76 jmp 0x12c88d7d */
  goto L_12c88d7d;
L_12c88d78:;
  /* 12c88d78 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12c88d7b xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_12c88d7d:;
  /* 12c88d7d cmp dword ptr [0x12c90d24], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c90d24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c88d84 jle 0x12c88d95 */
  if ((C.zf||C.sf!=C.of)) goto L_12c88d95;
  /* 12c88d86 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 12c88d89 push 8 */
  push32((uint32_t)(0x8u));
  /* 12c88d8b push eax */
  push32((uint32_t)(EAX));
  /* 12c88d8c call 0x12c897ff */
  push32(0x12c88d91u); f_12c897ff();
  /* 12c88d91 pop ecx */
  ECX = (pop32());
  /* 12c88d92 pop ecx */
  ECX = (pop32());
  /* 12c88d93 jmp 0x12c88da4 */
  goto L_12c88da4;
L_12c88d95:;
  /* 12c88d95 mov ecx, dword ptr [0x12c90b18] */
  ECX = (r32((uint32_t)(0x12c90b18)));
  /* 12c88d9b movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 12c88d9e mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 12c88da1 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
L_12c88da4:;
  /* 12c88da4 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c88da6 je 0x12c88dde */
  if (C.zf) goto L_12c88dde;
  /* 12c88da8 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 12c88dab push edi */
  push32((uint32_t)(EDI));
  /* 12c88dac lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 12c88daf push edi */
  push32((uint32_t)(EDI));
  /* 12c88db0 push eax */
  push32((uint32_t)(EAX));
  /* 12c88db1 call 0x12c897db */
  push32(0x12c88db6u); f_12c897db();
  /* 12c88db6 pop ecx */
  ECX = (pop32());
  /* 12c88db7 pop ecx */
  ECX = (pop32());
  /* 12c88db8 push eax */
  push32((uint32_t)(EAX));
  /* 12c88db9 call 0x12c897c4 */
  push32(0x12c88dbeu); f_12c897c4();
  /* 12c88dbe movzx eax, byte ptr [esi + 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ESI + 0x1))));
  /* 12c88dc2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c88dc3 push eax */
  push32((uint32_t)(EAX));
  /* 12c88dc4 call 0x12c85844 */
  push32(0x12c88dc9u); f_12c85844();
  /* 12c88dc9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c88dcc:;
  /* 12c88dcc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c88dce je 0x12c88dde */
  if (C.zf) goto L_12c88dde;
  /* 12c88dd0 movzx eax, byte ptr [esi + 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ESI + 0x1))));
  /* 12c88dd4 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c88dd5 push eax */
  push32((uint32_t)(EAX));
  /* 12c88dd6 call 0x12c85844 */
  push32(0x12c88ddbu); f_12c85844();
  /* 12c88ddb pop ecx */
  ECX = (pop32());
  /* 12c88ddc jmp 0x12c88dcc */
  goto L_12c88dcc;
L_12c88dde:;
  /* 12c88dde cmp byte ptr [esi], 0x25 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c88de1 jne 0x12c896c0 */
  if (!C.zf) goto L_12c896c0;
  /* 12c88de7 and byte ptr [ebp - 0x35], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x35)))&(0x0u); w8((uint32_t)(EBP + -0x35), (_r)); fl_logic(_r,8); }
  /* 12c88deb and byte ptr [ebp - 0x18], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x18)))&(0x0u); w8((uint32_t)(EBP + -0x18), (_r)); fl_logic(_r,8); }
  /* 12c88def and byte ptr [ebp - 0x17], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x17)))&(0x0u); w8((uint32_t)(EBP + -0x17), (_r)); fl_logic(_r,8); }
  /* 12c88df3 and byte ptr [ebp - 0xe], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0xe)))&(0x0u); w8((uint32_t)(EBP + -0xe), (_r)); fl_logic(_r,8); }
  /* 12c88df7 and byte ptr [ebp - 0xf], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0xf)))&(0x0u); w8((uint32_t)(EBP + -0xf), (_r)); fl_logic(_r,8); }
  /* 12c88dfb and byte ptr [ebp - 0x16], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x16)))&(0x0u); w8((uint32_t)(EBP + -0x16), (_r)); fl_logic(_r,8); }
  /* 12c88dff xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 12c88e01 and byte ptr [ebp - 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x5)))&(0x0u); w8((uint32_t)(EBP + -0x5), (_r)); fl_logic(_r,8); }
  /* 12c88e05 mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 12c88e08 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 12c88e0b mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 12c88e0e mov byte ptr [ebp - 0xd], 1 */
  w8((uint32_t)(EBP + -0xd), (0x1u));
  /* 12c88e12 mov dword ptr [ebp - 0x30], ebx */
  w32((uint32_t)(EBP + -0x30), (EBX));
L_12c88e15:;
  /* 12c88e15 movzx ebx, byte ptr [esi + 1] */
  EBX = ((uint32_t)(r8((uint32_t)(ESI + 0x1))));
  /* 12c88e19 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c88e1a cmp dword ptr [0x12c90d24], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c90d24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c88e21 jle 0x12c88e32 */
  if ((C.zf||C.sf!=C.of)) goto L_12c88e32;
  /* 12c88e23 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 12c88e26 push 4 */
  push32((uint32_t)(0x4u));
  /* 12c88e28 push eax */
  push32((uint32_t)(EAX));
  /* 12c88e29 call 0x12c897ff */
  push32(0x12c88e2eu); f_12c897ff();
  /* 12c88e2e pop ecx */
  ECX = (pop32());
  /* 12c88e2f pop ecx */
  ECX = (pop32());
  /* 12c88e30 jmp 0x12c88e41 */
  goto L_12c88e41;
L_12c88e32:;
  /* 12c88e32 mov ecx, dword ptr [0x12c90b18] */
  ECX = (r32((uint32_t)(0x12c90b18)));
  /* 12c88e38 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 12c88e3b mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 12c88e3e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_12c88e41:;
  /* 12c88e41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c88e43 je 0x12c88e57 */
  if (C.zf) goto L_12c88e57;
  /* 12c88e45 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c88e48 inc dword ptr [ebp - 0x20] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x20)))+1; w32((uint32_t)(EBP + -0x20), (_r)); fl_inc(_r,32); }
  /* 12c88e4b lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 12c88e4e lea eax, [ebx + eax*2 - 0x30] */
  EAX = ((uint32_t)(EBX + EAX*2 + -0x30));
  /* 12c88e52 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c88e55 jmp 0x12c88ebc */
  goto L_12c88ebc;
L_12c88e57:;
  /* 12c88e57 cmp ebx, 0x4e */
  { uint32_t _a=(EBX),_b=(0x4eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c88e5a jg 0x12c88e9a */
  if ((!C.zf&&C.sf==C.of)) goto L_12c88e9a;
  /* 12c88e5c je 0x12c88ebc */
  if (C.zf) goto L_12c88ebc;
  /* 12c88e5e cmp ebx, 0x2a */
  { uint32_t _a=(EBX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c88e61 je 0x12c88e95 */
  if (C.zf) goto L_12c88e95;
  /* 12c88e63 cmp ebx, 0x46 */
  { uint32_t _a=(EBX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c88e66 je 0x12c88ebc */
  if (C.zf) goto L_12c88ebc;
  /* 12c88e68 cmp ebx, 0x49 */
  { uint32_t _a=(EBX),_b=(0x49u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c88e6b je 0x12c88e77 */
  if (C.zf) goto L_12c88e77;
  /* 12c88e6d cmp ebx, 0x4c */
  { uint32_t _a=(EBX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c88e70 jne 0x12c88ea9 */
  if (!C.zf) goto L_12c88ea9;
  /* 12c88e72 inc byte ptr [ebp - 0xd] */
  { uint32_t _r=(r8((uint32_t)(EBP + -0xd)))+1; w8((uint32_t)(EBP + -0xd), (_r)); fl_inc(_r,8); }
  /* 12c88e75 jmp 0x12c88ebc */
  goto L_12c88ebc;
L_12c88e77:;
  /* 12c88e77 cmp byte ptr [esi + 1], 0x36 */
  { uint32_t _a=(r8((uint32_t)(ESI + 0x1))),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c88e7b jne 0x12c88ea9 */
  if (!C.zf) goto L_12c88ea9;
  /* 12c88e7d cmp byte ptr [esi + 2], 0x34 */
  { uint32_t _a=(r8((uint32_t)(ESI + 0x2))),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c88e81 lea eax, [esi + 2] */
  EAX = ((uint32_t)(ESI + 0x2));
  /* 12c88e84 jne 0x12c88ea9 */
  if (!C.zf) goto L_12c88ea9;
  /* 12c88e86 inc dword ptr [ebp - 0x30] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x30)))+1; w32((uint32_t)(EBP + -0x30), (_r)); fl_inc(_r,32); }
  /* 12c88e89 and dword ptr [ebp - 0x28], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x28)))&(0x0u); w32((uint32_t)(EBP + -0x28), (_r)); fl_logic(_r,32); }
  /* 12c88e8d and dword ptr [ebp - 0x24], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x24)))&(0x0u); w32((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,32); }
  /* 12c88e91 mov esi, eax */
  ESI = (EAX);
  /* 12c88e93 jmp 0x12c88ebc */
  goto L_12c88ebc;
L_12c88e95:;
  /* 12c88e95 inc byte ptr [ebp - 0xe] */
  { uint32_t _r=(r8((uint32_t)(EBP + -0xe)))+1; w8((uint32_t)(EBP + -0xe), (_r)); fl_inc(_r,8); }
  /* 12c88e98 jmp 0x12c88ebc */
  goto L_12c88ebc;
L_12c88e9a:;
  /* 12c88e9a cmp ebx, 0x68 */
  { uint32_t _a=(EBX),_b=(0x68u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c88e9d je 0x12c88eb6 */
  if (C.zf) goto L_12c88eb6;
  /* 12c88e9f cmp ebx, 0x6c */
  { uint32_t _a=(EBX),_b=(0x6cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c88ea2 je 0x12c88eae */
  if (C.zf) goto L_12c88eae;
  /* 12c88ea4 cmp ebx, 0x77 */
  { uint32_t _a=(EBX),_b=(0x77u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c88ea7 je 0x12c88eb1 */
  if (C.zf) goto L_12c88eb1;
L_12c88ea9:;
  /* 12c88ea9 inc byte ptr [ebp - 0xf] */
  { uint32_t _r=(r8((uint32_t)(EBP + -0xf)))+1; w8((uint32_t)(EBP + -0xf), (_r)); fl_inc(_r,8); }
  /* 12c88eac jmp 0x12c88ebc */
  goto L_12c88ebc;
L_12c88eae:;
  /* 12c88eae inc byte ptr [ebp - 0xd] */
  { uint32_t _r=(r8((uint32_t)(EBP + -0xd)))+1; w8((uint32_t)(EBP + -0xd), (_r)); fl_inc(_r,8); }
L_12c88eb1:;
  /* 12c88eb1 inc byte ptr [ebp - 5] */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x5)))+1; w8((uint32_t)(EBP + -0x5), (_r)); fl_inc(_r,8); }
  /* 12c88eb4 jmp 0x12c88ebc */
  goto L_12c88ebc;
L_12c88eb6:;
  /* 12c88eb6 dec byte ptr [ebp - 0xd] */
  { uint32_t _r=(r8((uint32_t)(EBP + -0xd)))-1; w8((uint32_t)(EBP + -0xd), (_r)); fl_dec(_r,8); }
  /* 12c88eb9 dec byte ptr [ebp - 5] */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x5)))-1; w8((uint32_t)(EBP + -0x5), (_r)); fl_dec(_r,8); }
L_12c88ebc:;
  /* 12c88ebc cmp byte ptr [ebp - 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c88ec0 je 0x12c88e15 */
  if (C.zf) goto L_12c88e15;
  /* 12c88ec6 cmp byte ptr [ebp - 0xe], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xe))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c88eca mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 12c88ecd jne 0x12c88ee1 */
  if (!C.zf) goto L_12c88ee1;
  /* 12c88ecf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c88ed2 mov dword ptr [ebp - 0x44], eax */
  w32((uint32_t)(EBP + -0x44), (EAX));
  /* 12c88ed5 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c88ed8 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 12c88edb mov eax, dword ptr [eax - 4] */
  EAX = (r32((uint32_t)(EAX + -0x4)));
  /* 12c88ede mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_12c88ee1:;
  /* 12c88ee1 and byte ptr [ebp - 0xf], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0xf)))&(0x0u); w8((uint32_t)(EBP + -0xf), (_r)); fl_logic(_r,8); }
  /* 12c88ee5 cmp byte ptr [ebp - 5], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x5))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c88ee9 jne 0x12c88eff */
  if (!C.zf) goto L_12c88eff;
  /* 12c88eeb mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c88eed cmp al, 0x53 */
  { uint32_t _a=(AL),_b=(0x53u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c88eef je 0x12c88efb */
  if (C.zf) goto L_12c88efb;
  /* 12c88ef1 cmp al, 0x43 */
  { uint32_t _a=(AL),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c88ef3 je 0x12c88efb */
  if (C.zf) goto L_12c88efb;
  /* 12c88ef5 or byte ptr [ebp - 5], 0xff */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x5)))|(0xffu); w8((uint32_t)(EBP + -0x5), (_r)); fl_logic(_r,8); }
  /* 12c88ef9 jmp 0x12c88eff */
  goto L_12c88eff;
L_12c88efb:;
  /* 12c88efb mov byte ptr [ebp - 5], 1 */
  w8((uint32_t)(EBP + -0x5), (0x1u));
L_12c88eff:;
  /* 12c88eff mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c88f02 movzx esi, byte ptr [ebx] */
  ESI = ((uint32_t)(r8((uint32_t)(EBX))));
  /* 12c88f05 or esi, 0x20 */
  { uint32_t _r=(ESI)|(0x20u); ESI = (_r); fl_logic(_r,32); }
  /* 12c88f08 cmp esi, 0x6e */
  { uint32_t _a=(ESI),_b=(0x6eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c88f0b mov dword ptr [ebp - 0x3c], esi */
  w32((uint32_t)(EBP + -0x3c), (ESI));
  /* 12c88f0e je 0x12c88f38 */
  if (C.zf) goto L_12c88f38;
  /* 12c88f10 cmp esi, 0x63 */
  { uint32_t _a=(ESI),_b=(0x63u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c88f13 je 0x12c88f29 */
  if (C.zf) goto L_12c88f29;
  /* 12c88f15 cmp esi, 0x7b */
  { uint32_t _a=(ESI),_b=(0x7bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c88f18 je 0x12c88f29 */
  if (C.zf) goto L_12c88f29;
  /* 12c88f1a push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c88f1d lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 12c88f20 push eax */
  push32((uint32_t)(EAX));
  /* 12c88f21 call 0x12c897db */
  push32(0x12c88f26u); f_12c897db();
  /* 12c88f26 pop ecx */
  ECX = (pop32());
  /* 12c88f27 jmp 0x12c88f34 */
  goto L_12c88f34;
L_12c88f29:;
  /* 12c88f29 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c88f2c inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 12c88f2f call 0x12c897aa */
  push32(0x12c88f34u); f_12c897aa();
L_12c88f34:;
  /* 12c88f34 pop ecx */
  ECX = (pop32());
  /* 12c88f35 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_12c88f38:;
  /* 12c88f38 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c88f3a cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c88f3d je 0x12c88f48 */
  if (C.zf) goto L_12c88f48;
  /* 12c88f3f cmp dword ptr [ebp - 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c88f42 je 0x12c89724 */
  if (C.zf) goto L_12c89724;
L_12c88f48:;
  /* 12c88f48 cmp esi, 0x6f */
  { uint32_t _a=(ESI),_b=(0x6fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c88f4b jg 0x12c891af */
  if ((!C.zf&&C.sf==C.of)) goto L_12c891af;
  /* 12c88f51 je 0x12c89461 */
  if (C.zf) goto L_12c89461;
  /* 12c88f57 cmp esi, 0x63 */
  { uint32_t _a=(ESI),_b=(0x63u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c88f5a je 0x12c8918c */
  if (C.zf) goto L_12c8918c;
  /* 12c88f60 cmp esi, 0x64 */
  { uint32_t _a=(ESI),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c88f63 je 0x12c89461 */
  if (C.zf) goto L_12c89461;
  /* 12c88f69 jle 0x12c891d9 */
  if ((C.zf||C.sf!=C.of)) goto L_12c891d9;
  /* 12c88f6f cmp esi, 0x67 */
  { uint32_t _a=(ESI),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c88f72 jle 0x12c88fac */
  if ((C.zf||C.sf!=C.of)) goto L_12c88fac;
  /* 12c88f74 cmp esi, 0x69 */
  { uint32_t _a=(ESI),_b=(0x69u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c88f77 je 0x12c88f94 */
  if (C.zf) goto L_12c88f94;
  /* 12c88f79 cmp esi, 0x6e */
  { uint32_t _a=(ESI),_b=(0x6eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c88f7c jne 0x12c891d9 */
  if (!C.zf) goto L_12c891d9;
  /* 12c88f82 cmp byte ptr [ebp - 0xe], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xe))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c88f86 mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 12c88f89 je 0x12c8968f */
  if (C.zf) goto L_12c8968f;
  /* 12c88f8f jmp 0x12c896b5 */
  goto L_12c896b5;
L_12c88f94:;
  /* 12c88f94 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12c88f96 pop esi */
  ESI = (pop32());
L_12c88f97:;
  /* 12c88f97 mov ebx, dword ptr [ebp - 0x14] */
  EBX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c88f9a cmp ebx, 0x2d */
  { uint32_t _a=(EBX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c88f9d jne 0x12c89221 */
  if (!C.zf) goto L_12c89221;
  /* 12c88fa3 mov byte ptr [ebp - 0x17], 1 */
  w8((uint32_t)(EBP + -0x17), (0x1u));
  /* 12c88fa7 jmp 0x12c89226 */
  goto L_12c89226;
L_12c88fac:;
  /* 12c88fac mov ebx, dword ptr [ebp - 0x14] */
  EBX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c88faf lea esi, [ebp - 0x1c4] */
  ESI = ((uint32_t)(EBP + -0x1c4));
  /* 12c88fb5 cmp ebx, 0x2d */
  { uint32_t _a=(EBX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c88fb8 jne 0x12c88fc8 */
  if (!C.zf) goto L_12c88fc8;
  /* 12c88fba mov byte ptr [ebp - 0x1c4], bl */
  w8((uint32_t)(EBP + -0x1c4), (BL));
  /* 12c88fc0 lea esi, [ebp - 0x1c3] */
  ESI = ((uint32_t)(EBP + -0x1c3));
  /* 12c88fc6 jmp 0x12c88fcd */
  goto L_12c88fcd;
L_12c88fc8:;
  /* 12c88fc8 cmp ebx, 0x2b */
  { uint32_t _a=(EBX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c88fcb jne 0x12c88fe4 */
  if (!C.zf) goto L_12c88fe4;
L_12c88fcd:;
  /* 12c88fcd mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12c88fd0 dec dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))-1; w32((uint32_t)(EBP + -0xc), (_r)); fl_dec(_r,32); }
  /* 12c88fd3 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 12c88fd6 push edi */
  push32((uint32_t)(EDI));
  /* 12c88fd7 call 0x12c897aa */
  push32(0x12c88fdcu); f_12c897aa();
  /* 12c88fdc mov ebx, eax */
  EBX = (EAX);
  /* 12c88fde pop ecx */
  ECX = (pop32());
  /* 12c88fdf mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 12c88fe2 jmp 0x12c88fe7 */
  goto L_12c88fe7;
L_12c88fe4:;
  /* 12c88fe4 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
L_12c88fe7:;
  /* 12c88fe7 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c88feb je 0x12c88ff6 */
  if (C.zf) goto L_12c88ff6;
  /* 12c88fed cmp dword ptr [ebp - 0xc], 0x15d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x15du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c88ff4 jle 0x12c88ffd */
  if ((C.zf||C.sf!=C.of)) goto L_12c88ffd;
L_12c88ff6:;
  /* 12c88ff6 mov dword ptr [ebp - 0xc], 0x15d */
  w32((uint32_t)(EBP + -0xc), (0x15du));
L_12c88ffd:;
  /* 12c88ffd cmp dword ptr [0x12c90d24], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c90d24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c89004 jle 0x12c89012 */
  if ((C.zf||C.sf!=C.of)) goto L_12c89012;
  /* 12c89006 push 4 */
  push32((uint32_t)(0x4u));
  /* 12c89008 push ebx */
  push32((uint32_t)(EBX));
  /* 12c89009 call 0x12c897ff */
  push32(0x12c8900eu); f_12c897ff();
  /* 12c8900e pop ecx */
  ECX = (pop32());
  /* 12c8900f pop ecx */
  ECX = (pop32());
  /* 12c89010 jmp 0x12c8901d */
  goto L_12c8901d;
L_12c89012:;
  /* 12c89012 mov eax, dword ptr [0x12c90b18] */
  EAX = (r32((uint32_t)(0x12c90b18)));
  /* 12c89017 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 12c8901a and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_12c8901d:;
  /* 12c8901d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8901f je 0x12c89042 */
  if (C.zf) goto L_12c89042;
  /* 12c89021 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c89024 dec dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))-1; w32((uint32_t)(EBP + -0xc), (_r)); fl_dec(_r,32); }
  /* 12c89027 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c89029 je 0x12c89042 */
  if (C.zf) goto L_12c89042;
  /* 12c8902b inc dword ptr [ebp - 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1c)))+1; w32((uint32_t)(EBP + -0x1c), (_r)); fl_inc(_r,32); }
  /* 12c8902e mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 12c89030 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c89031 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 12c89034 push edi */
  push32((uint32_t)(EDI));
  /* 12c89035 call 0x12c897aa */
  push32(0x12c8903au); f_12c897aa();
  /* 12c8903a mov ebx, eax */
  EBX = (EAX);
  /* 12c8903c pop ecx */
  ECX = (pop32());
  /* 12c8903d mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 12c89040 jmp 0x12c88ffd */
  goto L_12c88ffd;
L_12c89042:;
  /* 12c89042 cmp byte ptr [0x12c90d28], bl */
  { uint32_t _a=(r8((uint32_t)(0x12c90d28))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c89048 jne 0x12c890b0 */
  if (!C.zf) goto L_12c890b0;
  /* 12c8904a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c8904d dec dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))-1; w32((uint32_t)(EBP + -0xc), (_r)); fl_dec(_r,32); }
  /* 12c89050 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c89052 je 0x12c890b0 */
  if (C.zf) goto L_12c890b0;
  /* 12c89054 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 12c89057 push edi */
  push32((uint32_t)(EDI));
  /* 12c89058 call 0x12c897aa */
  push32(0x12c8905du); f_12c897aa();
  /* 12c8905d mov ebx, eax */
  EBX = (EAX);
  /* 12c8905f mov al, byte ptr [0x12c90d28] */
  AL = (r8((uint32_t)(0x12c90d28)));
  /* 12c89064 mov byte ptr [esi], al */
  w8((uint32_t)(ESI), (AL));
  /* 12c89066 pop ecx */
  ECX = (pop32());
  /* 12c89067 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 12c8906a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_12c8906b:;
  /* 12c8906b cmp dword ptr [0x12c90d24], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c90d24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c89072 jle 0x12c89080 */
  if ((C.zf||C.sf!=C.of)) goto L_12c89080;
  /* 12c89074 push 4 */
  push32((uint32_t)(0x4u));
  /* 12c89076 push ebx */
  push32((uint32_t)(EBX));
  /* 12c89077 call 0x12c897ff */
  push32(0x12c8907cu); f_12c897ff();
  /* 12c8907c pop ecx */
  ECX = (pop32());
  /* 12c8907d pop ecx */
  ECX = (pop32());
  /* 12c8907e jmp 0x12c8908b */
  goto L_12c8908b;
L_12c89080:;
  /* 12c89080 mov eax, dword ptr [0x12c90b18] */
  EAX = (r32((uint32_t)(0x12c90b18)));
  /* 12c89085 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 12c89088 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_12c8908b:;
  /* 12c8908b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8908d je 0x12c890b0 */
  if (C.zf) goto L_12c890b0;
  /* 12c8908f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c89092 dec dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))-1; w32((uint32_t)(EBP + -0xc), (_r)); fl_dec(_r,32); }
  /* 12c89095 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c89097 je 0x12c890b0 */
  if (C.zf) goto L_12c890b0;
  /* 12c89099 inc dword ptr [ebp - 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1c)))+1; w32((uint32_t)(EBP + -0x1c), (_r)); fl_inc(_r,32); }
  /* 12c8909c mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 12c8909e inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c8909f inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 12c890a2 push edi */
  push32((uint32_t)(EDI));
  /* 12c890a3 call 0x12c897aa */
  push32(0x12c890a8u); f_12c897aa();
  /* 12c890a8 mov ebx, eax */
  EBX = (EAX);
  /* 12c890aa pop ecx */
  ECX = (pop32());
  /* 12c890ab mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 12c890ae jmp 0x12c8906b */
  goto L_12c8906b;
L_12c890b0:;
  /* 12c890b0 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c890b4 je 0x12c89148 */
  if (C.zf) goto L_12c89148;
  /* 12c890ba cmp ebx, 0x65 */
  { uint32_t _a=(EBX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c890bd je 0x12c890c8 */
  if (C.zf) goto L_12c890c8;
  /* 12c890bf cmp ebx, 0x45 */
  { uint32_t _a=(EBX),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c890c2 jne 0x12c89148 */
  if (!C.zf) goto L_12c89148;
L_12c890c8:;
  /* 12c890c8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c890cb dec dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))-1; w32((uint32_t)(EBP + -0xc), (_r)); fl_dec(_r,32); }
  /* 12c890ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c890d0 je 0x12c89148 */
  if (C.zf) goto L_12c89148;
  /* 12c890d2 mov byte ptr [esi], 0x65 */
  w8((uint32_t)(ESI), (0x65u));
  /* 12c890d5 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c890d6 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 12c890d9 push edi */
  push32((uint32_t)(EDI));
  /* 12c890da call 0x12c897aa */
  push32(0x12c890dfu); f_12c897aa();
  /* 12c890df mov ebx, eax */
  EBX = (EAX);
  /* 12c890e1 pop ecx */
  ECX = (pop32());
  /* 12c890e2 cmp ebx, 0x2d */
  { uint32_t _a=(EBX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c890e5 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 12c890e8 jne 0x12c890ef */
  if (!C.zf) goto L_12c890ef;
  /* 12c890ea mov byte ptr [esi], al */
  w8((uint32_t)(ESI), (AL));
  /* 12c890ec inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c890ed jmp 0x12c890f4 */
  goto L_12c890f4;
L_12c890ef:;
  /* 12c890ef cmp ebx, 0x2b */
  { uint32_t _a=(EBX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c890f2 jne 0x12c89112 */
  if (!C.zf) goto L_12c89112;
L_12c890f4:;
  /* 12c890f4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c890f7 dec dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))-1; w32((uint32_t)(EBP + -0xc), (_r)); fl_dec(_r,32); }
  /* 12c890fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c890fc jne 0x12c89103 */
  if (!C.zf) goto L_12c89103;
  /* 12c890fe and dword ptr [ebp - 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))&(EAX); w32((uint32_t)(EBP + -0xc), (_r)); fl_logic(_r,32); }
  /* 12c89101 jmp 0x12c89112 */
  goto L_12c89112;
L_12c89103:;
  /* 12c89103 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 12c89106 push edi */
  push32((uint32_t)(EDI));
  /* 12c89107 call 0x12c897aa */
  push32(0x12c8910cu); f_12c897aa();
  /* 12c8910c mov ebx, eax */
  EBX = (EAX);
  /* 12c8910e pop ecx */
  ECX = (pop32());
  /* 12c8910f mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
L_12c89112:;
  /* 12c89112 cmp dword ptr [0x12c90d24], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c90d24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c89119 jle 0x12c89127 */
  if ((C.zf||C.sf!=C.of)) goto L_12c89127;
  /* 12c8911b push 4 */
  push32((uint32_t)(0x4u));
  /* 12c8911d push ebx */
  push32((uint32_t)(EBX));
  /* 12c8911e call 0x12c897ff */
  push32(0x12c89123u); f_12c897ff();
  /* 12c89123 pop ecx */
  ECX = (pop32());
  /* 12c89124 pop ecx */
  ECX = (pop32());
  /* 12c89125 jmp 0x12c89132 */
  goto L_12c89132;
L_12c89127:;
  /* 12c89127 mov eax, dword ptr [0x12c90b18] */
  EAX = (r32((uint32_t)(0x12c90b18)));
  /* 12c8912c mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 12c8912f and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_12c89132:;
  /* 12c89132 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c89134 je 0x12c89148 */
  if (C.zf) goto L_12c89148;
  /* 12c89136 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c89139 dec dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))-1; w32((uint32_t)(EBP + -0xc), (_r)); fl_dec(_r,32); }
  /* 12c8913c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8913e je 0x12c89148 */
  if (C.zf) goto L_12c89148;
  /* 12c89140 inc dword ptr [ebp - 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1c)))+1; w32((uint32_t)(EBP + -0x1c), (_r)); fl_inc(_r,32); }
  /* 12c89143 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 12c89145 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c89146 jmp 0x12c89103 */
  goto L_12c89103;
L_12c89148:;
  /* 12c89148 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 12c8914b push edi */
  push32((uint32_t)(EDI));
  /* 12c8914c push ebx */
  push32((uint32_t)(EBX));
  /* 12c8914d call 0x12c897c4 */
  push32(0x12c89152u); f_12c897c4();
  /* 12c89152 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c89156 pop ecx */
  ECX = (pop32());
  /* 12c89157 pop ecx */
  ECX = (pop32());
  /* 12c89158 je 0x12c89754 */
  if (C.zf) goto L_12c89754;
  /* 12c8915e cmp byte ptr [ebp - 0xe], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xe))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c89162 jne 0x12c896b5 */
  if (!C.zf) goto L_12c896b5;
  /* 12c89168 inc dword ptr [ebp - 0x34] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x34)))+1; w32((uint32_t)(EBP + -0x34), (_r)); fl_inc(_r,32); }
  /* 12c8916b and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 12c8916e lea eax, [ebp - 0x1c4] */
  EAX = ((uint32_t)(EBP + -0x1c4));
  /* 12c89174 push eax */
  push32((uint32_t)(EAX));
  /* 12c89175 movsx eax, byte ptr [ebp - 0xd] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0xd))));
  /* 12c89179 push dword ptr [ebp - 0x2c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x2c))));
  /* 12c8917c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 12c8917d push eax */
  push32((uint32_t)(EAX));
  /* 12c8917e call dword ptr [0x12c92e80] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c92e80))), 0x12c89184u);
  /* 12c89184 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c89187 jmp 0x12c896b5 */
  goto L_12c896b5;
L_12c8918c:;
  /* 12c8918c cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8918f jne 0x12c8919b */
  if (!C.zf) goto L_12c8919b;
  /* 12c89191 inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 12c89194 mov dword ptr [ebp - 0x20], 1 */
  w32((uint32_t)(EBP + -0x20), (0x1u));
L_12c8919b:;
  /* 12c8919b cmp byte ptr [ebp - 5], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x5))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8919f jle 0x12c891a5 */
  if ((C.zf||C.sf!=C.of)) goto L_12c891a5;
  /* 12c891a1 mov byte ptr [ebp - 0x16], 1 */
  w8((uint32_t)(EBP + -0x16), (0x1u));
L_12c891a5:;
  /* 12c891a5 mov edi, 0x12c90b14 */
  EDI = (0x12c90b14u);
  /* 12c891aa jmp 0x12c892ba */
  goto L_12c892ba;
L_12c891af:;
  /* 12c891af mov eax, esi */
  EAX = (ESI);
  /* 12c891b1 sub eax, 0x70 */
  { uint32_t _a=(EAX),_b=(0x70u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c891b4 je 0x12c8945d */
  if (C.zf) goto L_12c8945d;
  /* 12c891ba sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c891bd je 0x12c892ab */
  if (C.zf) goto L_12c892ab;
  /* 12c891c3 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 12c891c4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 12c891c5 je 0x12c89461 */
  if (C.zf) goto L_12c89461;
  /* 12c891cb sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c891ce je 0x12c88f97 */
  if (C.zf) goto L_12c88f97;
  /* 12c891d4 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c891d7 je 0x12c891fd */
  if (C.zf) goto L_12c891fd;
L_12c891d9:;
  /* 12c891d9 movzx eax, byte ptr [ebx] */
  EAX = ((uint32_t)(r8((uint32_t)(EBX))));
  /* 12c891dc cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c891df jne 0x12c89724 */
  if (!C.zf) goto L_12c89724;
  /* 12c891e5 dec byte ptr [ebp - 0x15] */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x15)))-1; w8((uint32_t)(EBP + -0x15), (_r)); fl_dec(_r,8); }
  /* 12c891e8 cmp byte ptr [ebp - 0xe], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xe))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c891ec jne 0x12c896b5 */
  if (!C.zf) goto L_12c896b5;
  /* 12c891f2 mov eax, dword ptr [ebp - 0x44] */
  EAX = (r32((uint32_t)(EBP + -0x44)));
  /* 12c891f5 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 12c891f8 jmp 0x12c896b5 */
  goto L_12c896b5;
L_12c891fd:;
  /* 12c891fd cmp byte ptr [ebp - 5], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x5))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c89201 jle 0x12c89207 */
  if ((C.zf||C.sf!=C.of)) goto L_12c89207;
  /* 12c89203 mov byte ptr [ebp - 0x16], 1 */
  w8((uint32_t)(EBP + -0x16), (0x1u));
L_12c89207:;
  /* 12c89207 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 12c8920a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12c8920b mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 12c8920e cmp byte ptr [edi], 0x5e */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x5eu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c89211 jne 0x12c892be */
  if (!C.zf) goto L_12c892be;
  /* 12c89217 mov eax, edi */
  EAX = (EDI);
  /* 12c89219 lea edi, [eax + 1] */
  EDI = ((uint32_t)(EAX + 0x1));
  /* 12c8921c jmp 0x12c892ba */
  goto L_12c892ba;
L_12c89221:;
  /* 12c89221 cmp ebx, 0x2b */
  { uint32_t _a=(EBX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c89224 jne 0x12c89248 */
  if (!C.zf) goto L_12c89248;
L_12c89226:;
  /* 12c89226 dec dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))-1; w32((uint32_t)(EBP + -0xc), (_r)); fl_dec(_r,32); }
  /* 12c89229 jne 0x12c89237 */
  if (!C.zf) goto L_12c89237;
  /* 12c8922b cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8922f je 0x12c89237 */
  if (C.zf) goto L_12c89237;
  /* 12c89231 mov byte ptr [ebp - 0xf], 1 */
  w8((uint32_t)(EBP + -0xf), (0x1u));
  /* 12c89235 jmp 0x12c89248 */
  goto L_12c89248;
L_12c89237:;
  /* 12c89237 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c8923a inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 12c8923d call 0x12c897aa */
  push32(0x12c89242u); f_12c897aa();
  /* 12c89242 mov ebx, eax */
  EBX = (EAX);
  /* 12c89244 pop ecx */
  ECX = (pop32());
  /* 12c89245 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
L_12c89248:;
  /* 12c89248 cmp ebx, 0x30 */
  { uint32_t _a=(EBX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8924b jne 0x12c89496 */
  if (!C.zf) goto L_12c89496;
  /* 12c89251 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c89254 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 12c89257 call 0x12c897aa */
  push32(0x12c8925cu); f_12c897aa();
  /* 12c8925c mov ebx, eax */
  EBX = (EAX);
  /* 12c8925e pop ecx */
  ECX = (pop32());
  /* 12c8925f cmp bl, 0x78 */
  { uint32_t _a=(BL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c89262 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 12c89265 je 0x12c89296 */
  if (C.zf) goto L_12c89296;
  /* 12c89267 cmp bl, 0x58 */
  { uint32_t _a=(BL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8926a je 0x12c89296 */
  if (C.zf) goto L_12c89296;
  /* 12c8926c cmp esi, 0x78 */
  { uint32_t _a=(ESI),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8926f mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 12c89276 je 0x12c89280 */
  if (C.zf) goto L_12c89280;
  /* 12c89278 push 0x6f */
  push32((uint32_t)(0x6fu));
L_12c8927a:;
  /* 12c8927a pop esi */
  ESI = (pop32());
  /* 12c8927b jmp 0x12c89496 */
  goto L_12c89496;
L_12c89280:;
  /* 12c89280 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c89283 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 12c89286 push ebx */
  push32((uint32_t)(EBX));
  /* 12c89287 call 0x12c897c4 */
  push32(0x12c8928cu); f_12c897c4();
  /* 12c8928c pop ecx */
  ECX = (pop32());
  /* 12c8928d pop ecx */
  ECX = (pop32());
  /* 12c8928e push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12c89290 pop ebx */
  EBX = (pop32());
  /* 12c89291 jmp 0x12c89493 */
  goto L_12c89493;
L_12c89296:;
  /* 12c89296 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c89299 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 12c8929c call 0x12c897aa */
  push32(0x12c892a1u); f_12c897aa();
  /* 12c892a1 pop ecx */
  ECX = (pop32());
  /* 12c892a2 mov ebx, eax */
  EBX = (EAX);
  /* 12c892a4 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 12c892a7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12c892a9 jmp 0x12c8927a */
  goto L_12c8927a;
L_12c892ab:;
  /* 12c892ab cmp byte ptr [ebp - 5], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x5))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c892af jle 0x12c892b5 */
  if ((C.zf||C.sf!=C.of)) goto L_12c892b5;
  /* 12c892b1 mov byte ptr [ebp - 0x16], 1 */
  w8((uint32_t)(EBP + -0x16), (0x1u));
L_12c892b5:;
  /* 12c892b5 mov edi, 0x12c90b0c */
  EDI = (0x12c90b0cu);
L_12c892ba:;
  /* 12c892ba or byte ptr [ebp - 0x18], 0xff */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x18)))|(0xffu); w8((uint32_t)(EBP + -0x18), (_r)); fl_logic(_r,8); }
L_12c892be:;
  /* 12c892be push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12c892c0 lea eax, [ebp - 0x64] */
  EAX = ((uint32_t)(EBP + -0x64));
  /* 12c892c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c892c5 push eax */
  push32((uint32_t)(EAX));
  /* 12c892c6 call 0x12c8c250 */
  push32(0x12c892cbu); f_12c8c250();
  /* 12c892cb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c892ce cmp dword ptr [ebp - 0x3c], 0x7b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x7bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c892d2 jne 0x12c892e2 */
  if (!C.zf) goto L_12c892e2;
  /* 12c892d4 cmp byte ptr [edi], 0x5d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x5du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c892d7 jne 0x12c892e2 */
  if (!C.zf) goto L_12c892e2;
  /* 12c892d9 mov dl, 0x5d */
  DL = (0x5du);
  /* 12c892db inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12c892dc mov byte ptr [ebp - 0x59], 0x20 */
  w8((uint32_t)(EBP + -0x59), (0x20u));
  /* 12c892e0 jmp 0x12c892e5 */
  goto L_12c892e5;
L_12c892e2:;
  /* 12c892e2 mov dl, byte ptr [ebp - 0x35] */
  DL = (r8((uint32_t)(EBP + -0x35)));
L_12c892e5:;
  /* 12c892e5 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 12c892e7 cmp al, 0x5d */
  { uint32_t _a=(AL),_b=(0x5du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c892e9 je 0x12c8934a */
  if (C.zf) goto L_12c8934a;
  /* 12c892eb inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12c892ec cmp al, 0x2d */
  { uint32_t _a=(AL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c892ee jne 0x12c89331 */
  if (!C.zf) goto L_12c89331;
  /* 12c892f0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12c892f2 je 0x12c89331 */
  if (C.zf) goto L_12c89331;
  /* 12c892f4 mov cl, byte ptr [edi] */
  CL = (r8((uint32_t)(EDI)));
  /* 12c892f6 cmp cl, 0x5d */
  { uint32_t _a=(CL),_b=(0x5du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c892f9 je 0x12c89331 */
  if (C.zf) goto L_12c89331;
  /* 12c892fb inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12c892fc cmp dl, cl */
  { uint32_t _a=(DL),_b=(CL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c892fe jae 0x12c89304 */
  if (!C.cf) goto L_12c89304;
  /* 12c89300 mov al, cl */
  AL = (CL);
  /* 12c89302 jmp 0x12c89308 */
  goto L_12c89308;
L_12c89304:;
  /* 12c89304 mov al, dl */
  AL = (DL);
  /* 12c89306 mov dl, cl */
  DL = (CL);
L_12c89308:;
  /* 12c89308 cmp dl, al */
  { uint32_t _a=(DL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8930a ja 0x12c8932d */
  if ((!C.cf&&!C.zf)) goto L_12c8932d;
  /* 12c8930c movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 12c8930f movzx esi, al */
  ESI = ((uint32_t)(AL));
  /* 12c89312 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c89314 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_12c89315:;
  /* 12c89315 mov ecx, edx */
  ECX = (EDX);
  /* 12c89317 mov eax, edx */
  EAX = (EDX);
  /* 12c89319 and ecx, 7 */
  { uint32_t _r=(ECX)&(0x7u); ECX = (_r); fl_logic(_r,32); }
  /* 12c8931c mov bl, 1 */
  BL = (0x1u);
  /* 12c8931e shr eax, 3 */
  EAX = (sh_shr((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 12c89321 shl bl, cl */
  BL = (sh_shl((uint32_t)(BL), (CL)&0x1f, 8));
  /* 12c89323 lea eax, [ebp + eax - 0x64] */
  EAX = ((uint32_t)(EBP + EAX*1 + -0x64));
  /* 12c89327 or byte ptr [eax], bl */
  { uint32_t _r=(r8((uint32_t)(EAX)))|(BL); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 12c89329 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12c8932a dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 12c8932b jne 0x12c89315 */
  if (!C.zf) goto L_12c89315;
L_12c8932d:;
  /* 12c8932d xor dl, dl */
  { uint32_t _r=(DL)^(DL); DL = (_r); fl_logic(_r,8); }
  /* 12c8932f jmp 0x12c892e5 */
  goto L_12c892e5;
L_12c89331:;
  /* 12c89331 movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 12c89334 mov dl, al */
  DL = (AL);
  /* 12c89336 mov eax, ecx */
  EAX = (ECX);
  /* 12c89338 and ecx, 7 */
  { uint32_t _r=(ECX)&(0x7u); ECX = (_r); fl_logic(_r,32); }
  /* 12c8933b mov bl, 1 */
  BL = (0x1u);
  /* 12c8933d shr eax, 3 */
  EAX = (sh_shr((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 12c89340 shl bl, cl */
  BL = (sh_shl((uint32_t)(BL), (CL)&0x1f, 8));
  /* 12c89342 lea eax, [ebp + eax - 0x64] */
  EAX = ((uint32_t)(EBP + EAX*1 + -0x64));
  /* 12c89346 or byte ptr [eax], bl */
  { uint32_t _r=(r8((uint32_t)(EAX)))|(BL); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 12c89348 jmp 0x12c892e5 */
  goto L_12c892e5;
L_12c8934a:;
  /* 12c8934a cmp byte ptr [edi], 0 */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8934d je 0x12c89754 */
  if (C.zf) goto L_12c89754;
  /* 12c89353 cmp dword ptr [ebp - 0x3c], 0x7b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x7bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c89357 jne 0x12c8935c */
  if (!C.zf) goto L_12c8935c;
  /* 12c89359 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_12c8935c:;
  /* 12c8935c mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12c8935f mov esi, dword ptr [ebp - 0x2c] */
  ESI = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c89362 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 12c89365 push edi */
  push32((uint32_t)(EDI));
  /* 12c89366 push dword ptr [ebp - 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x14))));
  /* 12c89369 mov dword ptr [ebp - 0x30], esi */
  w32((uint32_t)(EBP + -0x30), (ESI));
  /* 12c8936c call 0x12c897c4 */
  push32(0x12c89371u); f_12c897c4();
  /* 12c89371 pop ecx */
  ECX = (pop32());
  /* 12c89372 pop ecx */
  ECX = (pop32());
L_12c89373:;
  /* 12c89373 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c89377 je 0x12c89387 */
  if (C.zf) goto L_12c89387;
  /* 12c89379 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c8937c dec dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))-1; w32((uint32_t)(EBP + -0xc), (_r)); fl_dec(_r,32); }
  /* 12c8937f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c89381 je 0x12c89423 */
  if (C.zf) goto L_12c89423;
L_12c89387:;
  /* 12c89387 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 12c8938a push edi */
  push32((uint32_t)(EDI));
  /* 12c8938b call 0x12c897aa */
  push32(0x12c89390u); f_12c897aa();
  /* 12c89390 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c89393 pop ecx */
  ECX = (pop32());
  /* 12c89394 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12c89397 je 0x12c89417 */
  if (C.zf) goto L_12c89417;
  /* 12c89399 mov ecx, eax */
  ECX = (EAX);
  /* 12c8939b push 1 */
  push32((uint32_t)(0x1u));
  /* 12c8939d and ecx, 7 */
  { uint32_t _r=(ECX)&(0x7u); ECX = (_r); fl_logic(_r,32); }
  /* 12c893a0 pop edx */
  EDX = (pop32());
  /* 12c893a1 movsx ebx, byte ptr [ebp - 0x18] */
  EBX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x18))));
  /* 12c893a5 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c893a7 mov ecx, eax */
  ECX = (EAX);
  /* 12c893a9 sar ecx, 3 */
  ECX = (sh_sar((uint32_t)(ECX), (0x3u)&0x1f, 32));
  /* 12c893ac movsx ecx, byte ptr [ebp + ecx - 0x64] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + ECX*1 + -0x64))));
  /* 12c893b1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 12c893b3 test ecx, edx */
  { uint32_t _r=(ECX)&(EDX); fl_logic(_r,32); }
  /* 12c893b5 je 0x12c89417 */
  if (C.zf) goto L_12c89417;
  /* 12c893b7 cmp byte ptr [ebp - 0xe], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xe))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c893bb jne 0x12c8940f */
  if (!C.zf) goto L_12c8940f;
  /* 12c893bd cmp byte ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c893c1 je 0x12c89404 */
  if (C.zf) goto L_12c89404;
  /* 12c893c3 mov ecx, dword ptr [0x12c90b18] */
  ECX = (r32((uint32_t)(0x12c90b18)));
  /* 12c893c9 mov byte ptr [ebp - 0x38], al */
  w8((uint32_t)(EBP + -0x38), (AL));
  /* 12c893cc movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 12c893cf test byte ptr [ecx + eax*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 12c893d4 je 0x12c893e3 */
  if (C.zf) goto L_12c893e3;
  /* 12c893d6 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 12c893d9 push edi */
  push32((uint32_t)(EDI));
  /* 12c893da call 0x12c897aa */
  push32(0x12c893dfu); f_12c897aa();
  /* 12c893df pop ecx */
  ECX = (pop32());
  /* 12c893e0 mov byte ptr [ebp - 0x37], al */
  w8((uint32_t)(EBP + -0x37), (AL));
L_12c893e3:;
  /* 12c893e3 push dword ptr [0x12c90d24] */
  push32((uint32_t)(r32((uint32_t)(0x12c90d24))));
  /* 12c893e9 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 12c893ec push eax */
  push32((uint32_t)(EAX));
  /* 12c893ed lea eax, [ebp - 0x3e] */
  EAX = ((uint32_t)(EBP + -0x3e));
  /* 12c893f0 push eax */
  push32((uint32_t)(EAX));
  /* 12c893f1 call 0x12c8c125 */
  push32(0x12c893f6u); f_12c8c125();
  /* 12c893f6 mov ax, word ptr [ebp - 0x3e] */
  AX = (r16((uint32_t)(EBP + -0x3e)));
  /* 12c893fa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c893fd mov word ptr [esi], ax */
  w16((uint32_t)(ESI), (AX));
  /* 12c89400 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c89401 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c89402 jmp 0x12c89407 */
  goto L_12c89407;
L_12c89404:;
  /* 12c89404 mov byte ptr [esi], al */
  w8((uint32_t)(ESI), (AL));
  /* 12c89406 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_12c89407:;
  /* 12c89407 mov dword ptr [ebp - 0x2c], esi */
  w32((uint32_t)(EBP + -0x2c), (ESI));
  /* 12c8940a jmp 0x12c89373 */
  goto L_12c89373;
L_12c8940f:;
  /* 12c8940f inc dword ptr [ebp - 0x30] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x30)))+1; w32((uint32_t)(EBP + -0x30), (_r)); fl_inc(_r,32); }
  /* 12c89412 jmp 0x12c89373 */
  goto L_12c89373;
L_12c89417:;
  /* 12c89417 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 12c8941a push edi */
  push32((uint32_t)(EDI));
  /* 12c8941b push eax */
  push32((uint32_t)(EAX));
  /* 12c8941c call 0x12c897c4 */
  push32(0x12c89421u); f_12c897c4();
  /* 12c89421 pop ecx */
  ECX = (pop32());
  /* 12c89422 pop ecx */
  ECX = (pop32());
L_12c89423:;
  /* 12c89423 cmp dword ptr [ebp - 0x30], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c89426 je 0x12c89754 */
  if (C.zf) goto L_12c89754;
  /* 12c8942c cmp byte ptr [ebp - 0xe], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xe))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c89430 jne 0x12c896b5 */
  if (!C.zf) goto L_12c896b5;
  /* 12c89436 inc dword ptr [ebp - 0x34] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x34)))+1; w32((uint32_t)(EBP + -0x34), (_r)); fl_inc(_r,32); }
  /* 12c89439 cmp dword ptr [ebp - 0x3c], 0x63 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x63u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8943d je 0x12c896b5 */
  if (C.zf) goto L_12c896b5;
  /* 12c89443 cmp byte ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c89447 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c8944a je 0x12c89455 */
  if (C.zf) goto L_12c89455;
  /* 12c8944c and word ptr [eax], 0 */
  { uint32_t _r=(r16((uint32_t)(EAX)))&(0x0u); w16((uint32_t)(EAX), (_r)); fl_logic(_r,16); }
  /* 12c89450 jmp 0x12c896b5 */
  goto L_12c896b5;
L_12c89455:;
  /* 12c89455 and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 12c89458 jmp 0x12c896b5 */
  goto L_12c896b5;
L_12c8945d:;
  /* 12c8945d mov byte ptr [ebp - 0xd], 1 */
  w8((uint32_t)(EBP + -0xd), (0x1u));
L_12c89461:;
  /* 12c89461 mov ebx, dword ptr [ebp - 0x14] */
  EBX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c89464 cmp ebx, 0x2d */
  { uint32_t _a=(EBX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c89467 jne 0x12c8946f */
  if (!C.zf) goto L_12c8946f;
  /* 12c89469 mov byte ptr [ebp - 0x17], 1 */
  w8((uint32_t)(EBP + -0x17), (0x1u));
  /* 12c8946d jmp 0x12c89474 */
  goto L_12c89474;
L_12c8946f:;
  /* 12c8946f cmp ebx, 0x2b */
  { uint32_t _a=(EBX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c89472 jne 0x12c89496 */
  if (!C.zf) goto L_12c89496;
L_12c89474:;
  /* 12c89474 dec dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))-1; w32((uint32_t)(EBP + -0xc), (_r)); fl_dec(_r,32); }
  /* 12c89477 jne 0x12c89485 */
  if (!C.zf) goto L_12c89485;
  /* 12c89479 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8947d je 0x12c89485 */
  if (C.zf) goto L_12c89485;
  /* 12c8947f mov byte ptr [ebp - 0xf], 1 */
  w8((uint32_t)(EBP + -0xf), (0x1u));
  /* 12c89483 jmp 0x12c89496 */
  goto L_12c89496;
L_12c89485:;
  /* 12c89485 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c89488 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 12c8948b call 0x12c897aa */
  push32(0x12c89490u); f_12c897aa();
  /* 12c89490 pop ecx */
  ECX = (pop32());
  /* 12c89491 mov ebx, eax */
  EBX = (EAX);
L_12c89493:;
  /* 12c89493 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
L_12c89496:;
  /* 12c89496 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8949a je 0x12c895af */
  if (C.zf) goto L_12c895af;
  /* 12c894a0 cmp byte ptr [ebp - 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c894a4 jne 0x12c8958d */
  if (!C.zf) goto L_12c8958d;
L_12c894aa:;
  /* 12c894aa cmp esi, 0x78 */
  { uint32_t _a=(ESI),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c894ad jne 0x12c894fe */
  if (!C.zf) goto L_12c894fe;
  /* 12c894af cmp dword ptr [0x12c90d24], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c90d24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c894b6 jle 0x12c894c7 */
  if ((C.zf||C.sf!=C.of)) goto L_12c894c7;
  /* 12c894b8 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 12c894bd push ebx */
  push32((uint32_t)(EBX));
  /* 12c894be call 0x12c897ff */
  push32(0x12c894c3u); f_12c897ff();
  /* 12c894c3 pop ecx */
  ECX = (pop32());
  /* 12c894c4 pop ecx */
  ECX = (pop32());
  /* 12c894c5 jmp 0x12c894d4 */
  goto L_12c894d4;
L_12c894c7:;
  /* 12c894c7 mov eax, dword ptr [0x12c90b18] */
  EAX = (r32((uint32_t)(0x12c90b18)));
  /* 12c894cc mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 12c894cf and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
L_12c894d4:;
  /* 12c894d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c894d6 je 0x12c8957f */
  if (C.zf) goto L_12c8957f;
  /* 12c894dc mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c894df mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c894e2 push 4 */
  push32((uint32_t)(0x4u));
  /* 12c894e4 pop ecx */
  ECX = (pop32());
  /* 12c894e5 call 0x12c8c2f0 */
  push32(0x12c894eau); f_12c8c2f0();
  /* 12c894ea push ebx */
  push32((uint32_t)(EBX));
  /* 12c894eb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12c894ee mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12c894f1 call 0x12c89773 */
  push32(0x12c894f6u); f_12c89773();
  /* 12c894f6 mov ebx, eax */
  EBX = (EAX);
  /* 12c894f8 pop ecx */
  ECX = (pop32());
  /* 12c894f9 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 12c894fc jmp 0x12c89551 */
  goto L_12c89551;
L_12c894fe:;
  /* 12c894fe cmp dword ptr [0x12c90d24], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c90d24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c89505 jle 0x12c89513 */
  if ((C.zf||C.sf!=C.of)) goto L_12c89513;
  /* 12c89507 push 4 */
  push32((uint32_t)(0x4u));
  /* 12c89509 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8950a call 0x12c897ff */
  push32(0x12c8950fu); f_12c897ff();
  /* 12c8950f pop ecx */
  ECX = (pop32());
  /* 12c89510 pop ecx */
  ECX = (pop32());
  /* 12c89511 jmp 0x12c8951e */
  goto L_12c8951e;
L_12c89513:;
  /* 12c89513 mov eax, dword ptr [0x12c90b18] */
  EAX = (r32((uint32_t)(0x12c90b18)));
  /* 12c89518 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 12c8951b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_12c8951e:;
  /* 12c8951e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c89520 je 0x12c8957f */
  if (C.zf) goto L_12c8957f;
  /* 12c89522 cmp esi, 0x6f */
  { uint32_t _a=(ESI),_b=(0x6fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c89525 jne 0x12c8953c */
  if (!C.zf) goto L_12c8953c;
  /* 12c89527 cmp ebx, 0x38 */
  { uint32_t _a=(EBX),_b=(0x38u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8952a jge 0x12c8957f */
  if ((C.sf==C.of)) goto L_12c8957f;
  /* 12c8952c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c8952f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c89532 push 3 */
  push32((uint32_t)(0x3u));
  /* 12c89534 pop ecx */
  ECX = (pop32());
  /* 12c89535 call 0x12c8c2f0 */
  push32(0x12c8953au); f_12c8c2f0();
  /* 12c8953a jmp 0x12c8954b */
  goto L_12c8954b;
L_12c8953c:;
  /* 12c8953c push 0 */
  push32((uint32_t)(0x0u));
  /* 12c8953e push 0xa */
  push32((uint32_t)(0xau));
  /* 12c89540 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 12c89543 push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 12c89546 call 0x12c8c2b0 */
  push32(0x12c8954bu); f_12c8c2b0();
L_12c8954b:;
  /* 12c8954b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12c8954e mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_12c89551:;
  /* 12c89551 inc dword ptr [ebp - 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1c)))+1; w32((uint32_t)(EBP + -0x1c), (_r)); fl_inc(_r,32); }
  /* 12c89554 lea eax, [ebx - 0x30] */
  EAX = ((uint32_t)(EBX + -0x30));
  /* 12c89557 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12c89558 add dword ptr [ebp - 0x28], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + -0x28), (_r)); fl_add(_a,_b,_r,32); }
  /* 12c8955b adc dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(EBP + -0x24), (_r)); fl_add(_a,_b,_r,32); }
  /* 12c8955e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c89562 je 0x12c89569 */
  if (C.zf) goto L_12c89569;
  /* 12c89564 dec dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))-1; w32((uint32_t)(EBP + -0xc), (_r)); fl_dec(_r,32); }
  /* 12c89567 je 0x12c8958d */
  if (C.zf) goto L_12c8958d;
L_12c89569:;
  /* 12c89569 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c8956c inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 12c8956f call 0x12c897aa */
  push32(0x12c89574u); f_12c897aa();
  /* 12c89574 mov ebx, eax */
  EBX = (EAX);
  /* 12c89576 pop ecx */
  ECX = (pop32());
  /* 12c89577 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 12c8957a jmp 0x12c894aa */
  goto L_12c894aa;
L_12c8957f:;
  /* 12c8957f push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c89582 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 12c89585 push ebx */
  push32((uint32_t)(EBX));
  /* 12c89586 call 0x12c897c4 */
  push32(0x12c8958bu); f_12c897c4();
  /* 12c8958b pop ecx */
  ECX = (pop32());
  /* 12c8958c pop ecx */
  ECX = (pop32());
L_12c8958d:;
  /* 12c8958d cmp byte ptr [ebp - 0x17], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x17))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c89591 je 0x12c89673 */
  if (C.zf) goto L_12c89673;
  /* 12c89597 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c8959a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c8959d neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c8959f adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c895a2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12c895a5 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c895a7 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12c895aa jmp 0x12c89673 */
  goto L_12c89673;
L_12c895af:;
  /* 12c895af cmp byte ptr [ebp - 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c895b3 jne 0x12c8966b */
  if (!C.zf) goto L_12c8966b;
L_12c895b9:;
  /* 12c895b9 cmp esi, 0x78 */
  { uint32_t _a=(ESI),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c895bc je 0x12c895fd */
  if (C.zf) goto L_12c895fd;
  /* 12c895be cmp esi, 0x70 */
  { uint32_t _a=(ESI),_b=(0x70u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c895c1 je 0x12c895fd */
  if (C.zf) goto L_12c895fd;
  /* 12c895c3 cmp dword ptr [0x12c90d24], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c90d24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c895ca jle 0x12c895d8 */
  if ((C.zf||C.sf!=C.of)) goto L_12c895d8;
  /* 12c895cc push 4 */
  push32((uint32_t)(0x4u));
  /* 12c895ce push ebx */
  push32((uint32_t)(EBX));
  /* 12c895cf call 0x12c897ff */
  push32(0x12c895d4u); f_12c897ff();
  /* 12c895d4 pop ecx */
  ECX = (pop32());
  /* 12c895d5 pop ecx */
  ECX = (pop32());
  /* 12c895d6 jmp 0x12c895e3 */
  goto L_12c895e3;
L_12c895d8:;
  /* 12c895d8 mov eax, dword ptr [0x12c90b18] */
  EAX = (r32((uint32_t)(0x12c90b18)));
  /* 12c895dd mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 12c895e0 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_12c895e3:;
  /* 12c895e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c895e5 je 0x12c8965d */
  if (C.zf) goto L_12c8965d;
  /* 12c895e7 cmp esi, 0x6f */
  { uint32_t _a=(ESI),_b=(0x6fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c895ea jne 0x12c895f6 */
  if (!C.zf) goto L_12c895f6;
  /* 12c895ec cmp ebx, 0x38 */
  { uint32_t _a=(EBX),_b=(0x38u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c895ef jge 0x12c8965d */
  if ((C.sf==C.of)) goto L_12c8965d;
  /* 12c895f1 shl edi, 3 */
  EDI = (sh_shl((uint32_t)(EDI), (0x3u)&0x1f, 32));
  /* 12c895f4 jmp 0x12c89635 */
  goto L_12c89635;
L_12c895f6:;
  /* 12c895f6 lea edi, [edi + edi*4] */
  EDI = ((uint32_t)(EDI + EDI*4));
  /* 12c895f9 shl edi, 1 */
  EDI = (sh_shl((uint32_t)(EDI), (0x1u)&0x1f, 32));
  /* 12c895fb jmp 0x12c89635 */
  goto L_12c89635;
L_12c895fd:;
  /* 12c895fd cmp dword ptr [0x12c90d24], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c90d24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c89604 jle 0x12c89615 */
  if ((C.zf||C.sf!=C.of)) goto L_12c89615;
  /* 12c89606 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 12c8960b push ebx */
  push32((uint32_t)(EBX));
  /* 12c8960c call 0x12c897ff */
  push32(0x12c89611u); f_12c897ff();
  /* 12c89611 pop ecx */
  ECX = (pop32());
  /* 12c89612 pop ecx */
  ECX = (pop32());
  /* 12c89613 jmp 0x12c89622 */
  goto L_12c89622;
L_12c89615:;
  /* 12c89615 mov eax, dword ptr [0x12c90b18] */
  EAX = (r32((uint32_t)(0x12c90b18)));
  /* 12c8961a mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 12c8961d and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
L_12c89622:;
  /* 12c89622 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c89624 je 0x12c8965d */
  if (C.zf) goto L_12c8965d;
  /* 12c89626 push ebx */
  push32((uint32_t)(EBX));
  /* 12c89627 shl edi, 4 */
  EDI = (sh_shl((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 12c8962a call 0x12c89773 */
  push32(0x12c8962fu); f_12c89773();
  /* 12c8962f mov ebx, eax */
  EBX = (EAX);
  /* 12c89631 pop ecx */
  ECX = (pop32());
  /* 12c89632 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
L_12c89635:;
  /* 12c89635 inc dword ptr [ebp - 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1c)))+1; w32((uint32_t)(EBP + -0x1c), (_r)); fl_inc(_r,32); }
  /* 12c89638 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8963c lea edi, [edi + ebx - 0x30] */
  EDI = ((uint32_t)(EDI + EBX*1 + -0x30));
  /* 12c89640 je 0x12c89647 */
  if (C.zf) goto L_12c89647;
  /* 12c89642 dec dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))-1; w32((uint32_t)(EBP + -0xc), (_r)); fl_dec(_r,32); }
  /* 12c89645 je 0x12c8966b */
  if (C.zf) goto L_12c8966b;
L_12c89647:;
  /* 12c89647 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c8964a inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 12c8964d call 0x12c897aa */
  push32(0x12c89652u); f_12c897aa();
  /* 12c89652 mov ebx, eax */
  EBX = (EAX);
  /* 12c89654 pop ecx */
  ECX = (pop32());
  /* 12c89655 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 12c89658 jmp 0x12c895b9 */
  goto L_12c895b9;
L_12c8965d:;
  /* 12c8965d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c89660 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 12c89663 push ebx */
  push32((uint32_t)(EBX));
  /* 12c89664 call 0x12c897c4 */
  push32(0x12c89669u); f_12c897c4();
  /* 12c89669 pop ecx */
  ECX = (pop32());
  /* 12c8966a pop ecx */
  ECX = (pop32());
L_12c8966b:;
  /* 12c8966b cmp byte ptr [ebp - 0x17], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x17))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8966f je 0x12c89673 */
  if (C.zf) goto L_12c89673;
  /* 12c89671 neg edi */
  { uint32_t _a=(EDI),_r=0u-_a; EDI = (_r); fl_sub(0,_a,_r,32); }
L_12c89673:;
  /* 12c89673 cmp esi, 0x46 */
  { uint32_t _a=(ESI),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c89676 jne 0x12c8967c */
  if (!C.zf) goto L_12c8967c;
  /* 12c89678 and dword ptr [ebp - 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1c)))&(0x0u); w32((uint32_t)(EBP + -0x1c), (_r)); fl_logic(_r,32); }
L_12c8967c:;
  /* 12c8967c cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c89680 je 0x12c89754 */
  if (C.zf) goto L_12c89754;
  /* 12c89686 cmp byte ptr [ebp - 0xe], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xe))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8968a jne 0x12c896b5 */
  if (!C.zf) goto L_12c896b5;
  /* 12c8968c inc dword ptr [ebp - 0x34] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x34)))+1; w32((uint32_t)(EBP + -0x34), (_r)); fl_inc(_r,32); }
L_12c8968f:;
  /* 12c8968f cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c89693 je 0x12c896a5 */
  if (C.zf) goto L_12c896a5;
  /* 12c89695 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c89698 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c8969b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12c8969d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c896a0 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12c896a3 jmp 0x12c896b5 */
  goto L_12c896b5;
L_12c896a5:;
  /* 12c896a5 cmp byte ptr [ebp - 0xd], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xd))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c896a9 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c896ac je 0x12c896b2 */
  if (C.zf) goto L_12c896b2;
  /* 12c896ae mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 12c896b0 jmp 0x12c896b5 */
  goto L_12c896b5;
L_12c896b2:;
  /* 12c896b2 mov word ptr [eax], di */
  w16((uint32_t)(EAX), (DI));
L_12c896b5:;
  /* 12c896b5 inc byte ptr [ebp - 0x15] */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x15)))+1; w8((uint32_t)(EBP + -0x15), (_r)); fl_inc(_r,8); }
  /* 12c896b8 inc dword ptr [ebp + 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))+1; w32((uint32_t)(EBP + 0xc), (_r)); fl_inc(_r,32); }
  /* 12c896bb mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12c896be jmp 0x12c89702 */
  goto L_12c89702;
L_12c896c0:;
  /* 12c896c0 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 12c896c3 push edi */
  push32((uint32_t)(EDI));
  /* 12c896c4 call 0x12c897aa */
  push32(0x12c896c9u); f_12c897aa();
  /* 12c896c9 mov ebx, eax */
  EBX = (EAX);
  /* 12c896cb pop ecx */
  ECX = (pop32());
  /* 12c896cc movzx eax, byte ptr [esi] */
  EAX = ((uint32_t)(r8((uint32_t)(ESI))));
  /* 12c896cf inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c896d0 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c896d2 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 12c896d5 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 12c896d8 jne 0x12c8972f */
  if (!C.zf) goto L_12c8972f;
  /* 12c896da mov ecx, dword ptr [0x12c90b18] */
  ECX = (r32((uint32_t)(0x12c90b18)));
  /* 12c896e0 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 12c896e3 test byte ptr [ecx + eax*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 12c896e8 je 0x12c89702 */
  if (C.zf) goto L_12c89702;
  /* 12c896ea inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 12c896ed push edi */
  push32((uint32_t)(EDI));
  /* 12c896ee call 0x12c897aa */
  push32(0x12c896f3u); f_12c897aa();
  /* 12c896f3 pop ecx */
  ECX = (pop32());
  /* 12c896f4 movzx ecx, byte ptr [esi] */
  ECX = ((uint32_t)(r8((uint32_t)(ESI))));
  /* 12c896f7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c896f8 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c896fa mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 12c896fd jne 0x12c8973d */
  if (!C.zf) goto L_12c8973d;
  /* 12c896ff dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
L_12c89702:;
  /* 12c89702 cmp dword ptr [ebp - 0x14], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c89706 jne 0x12c89718 */
  if (!C.zf) goto L_12c89718;
  /* 12c89708 cmp byte ptr [esi], 0x25 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8970b jne 0x12c8975a */
  if (!C.zf) goto L_12c8975a;
  /* 12c8970d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c89710 cmp byte ptr [eax + 1], 0x6e */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x6eu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c89714 jne 0x12c8975a */
  if (!C.zf) goto L_12c8975a;
  /* 12c89716 mov esi, eax */
  ESI = (EAX);
L_12c89718:;
  /* 12c89718 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c8971a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12c8971c jne 0x12c88d78 */
  if (!C.zf) goto L_12c88d78;
  /* 12c89722 jmp 0x12c89754 */
  goto L_12c89754;
L_12c89724:;
  /* 12c89724 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c89727 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 12c8972a push dword ptr [ebp - 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x14))));
  /* 12c8972d jmp 0x12c89734 */
  goto L_12c89734;
L_12c8972f:;
  /* 12c8972f dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 12c89732 push edi */
  push32((uint32_t)(EDI));
  /* 12c89733 push ebx */
  push32((uint32_t)(EBX));
L_12c89734:;
  /* 12c89734 call 0x12c897c4 */
  push32(0x12c89739u); f_12c897c4();
  /* 12c89739 pop ecx */
  ECX = (pop32());
  /* 12c8973a pop ecx */
  ECX = (pop32());
  /* 12c8973b jmp 0x12c89754 */
  goto L_12c89754;
L_12c8973d:;
  /* 12c8973d dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 12c89740 push edi */
  push32((uint32_t)(EDI));
  /* 12c89741 push eax */
  push32((uint32_t)(EAX));
  /* 12c89742 call 0x12c897c4 */
  push32(0x12c89747u); f_12c897c4();
  /* 12c89747 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 12c8974a push edi */
  push32((uint32_t)(EDI));
  /* 12c8974b push ebx */
  push32((uint32_t)(EBX));
  /* 12c8974c call 0x12c897c4 */
  push32(0x12c89751u); f_12c897c4();
  /* 12c89751 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c89754:;
  /* 12c89754 cmp dword ptr [ebp - 0x14], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c89758 jne 0x12c8976b */
  if (!C.zf) goto L_12c8976b;
L_12c8975a:;
  /* 12c8975a mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12c8975d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8975f jne 0x12c8976e */
  if (!C.zf) goto L_12c8976e;
  /* 12c89761 cmp byte ptr [ebp - 0x15], al */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x15))),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c89764 jne 0x12c8976e */
  if (!C.zf) goto L_12c8976e;
  /* 12c89766 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c89769 jmp 0x12c8976e */
  goto L_12c8976e;
L_12c8976b:;
  /* 12c8976b mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
L_12c8976e:;
  /* 12c8976e pop edi */
  EDI = (pop32());
  /* 12c8976f pop esi */
  ESI = (pop32());
  /* 12c89770 pop ebx */
  EBX = (pop32());
  /* 12c89771 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c89772 ret  */
  ESPCHK(0x12c88d4eu, _esp0);
  ESP += 4; return;
}

/* FUN_10009773 @ 0x12c89773 (55 bytes, 21 insns) */
void f_12c89773(void) {
  FTRACE(0x12c89773u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c89773 cmp dword ptr [0x12c90d24], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c90d24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8977a push esi */
  push32((uint32_t)(ESI));
  /* 12c8977b jle 0x12c8978d */
  if ((C.zf||C.sf!=C.of)) goto L_12c8978d;
  /* 12c8977d mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 12c89781 push 4 */
  push32((uint32_t)(0x4u));
  /* 12c89783 push esi */
  push32((uint32_t)(ESI));
  /* 12c89784 call 0x12c897ff */
  push32(0x12c89789u); f_12c897ff();
  /* 12c89789 pop ecx */
  ECX = (pop32());
  /* 12c8978a pop ecx */
  ECX = (pop32());
  /* 12c8978b jmp 0x12c8979c */
  goto L_12c8979c;
L_12c8978d:;
  /* 12c8978d mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 12c89791 mov eax, dword ptr [0x12c90b18] */
  EAX = (r32((uint32_t)(0x12c90b18)));
  /* 12c89796 mov al, byte ptr [eax + esi*2] */
  AL = (r8((uint32_t)(EAX + ESI*2)));
  /* 12c89799 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_12c8979c:;
  /* 12c8979c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8979e jne 0x12c897a6 */
  if (!C.zf) goto L_12c897a6;
  /* 12c897a0 and esi, 0xffffffdf */
  { uint32_t _r=(ESI)&(0xffffffdfu); ESI = (_r); fl_logic(_r,32); }
  /* 12c897a3 sub esi, 7 */
  { uint32_t _a=(ESI),_b=(0x7u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
L_12c897a6:;
  /* 12c897a6 mov eax, esi */
  EAX = (ESI);
  /* 12c897a8 pop esi */
  ESI = (pop32());
  /* 12c897a9 ret  */
  ESPCHK(0x12c89773u, _esp0);
  ESP += 4; return;
}

/* FUN_100097aa @ 0x12c897aa (26 bytes, 12 insns) */
void f_12c897aa(void) {
  FTRACE(0x12c897aau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c897aa mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c897ae dec dword ptr [edx + 4] */
  { uint32_t _r=(r32((uint32_t)(EDX + 0x4)))-1; w32((uint32_t)(EDX + 0x4), (_r)); fl_dec(_r,32); }
  /* 12c897b1 js 0x12c897bc */
  if (C.sf) goto L_12c897bc;
  /* 12c897b3 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 12c897b5 movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 12c897b8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12c897b9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12c897bb ret  */
  ESPCHK(0x12c897aau, _esp0);
  ESP += 4; return;
L_12c897bc:;
  /* 12c897bc push edx */
  push32((uint32_t)(EDX));
  /* 12c897bd call 0x12c87126 */
  push32(0x12c897c2u); f_12c87126();
  /* 12c897c2 pop ecx */
  ECX = (pop32());
  /* 12c897c3 ret  */
  ESPCHK(0x12c897aau, _esp0);
  ESP += 4; return;
}

/* FUN_100097c4 @ 0x12c897c4 (23 bytes, 8 insns) */
void f_12c897c4(void) {
  FTRACE(0x12c897c4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c897c4 cmp dword ptr [esp + 4], -1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c897c9 je 0x12c897da */
  if (C.zf) goto L_12c897da;
  /* 12c897cb push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 12c897cf push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 12c897d3 call 0x12c8c30f */
  push32(0x12c897d8u); f_12c8c30f();
  /* 12c897d8 pop ecx */
  ECX = (pop32());
  /* 12c897d9 pop ecx */
  ECX = (pop32());
L_12c897da:;
  /* 12c897da ret  */
  ESPCHK(0x12c897c4u, _esp0);
  ESP += 4; return;
}

/* FUN_100097db @ 0x12c897db (36 bytes, 17 insns) */
void f_12c897db(void) {
  FTRACE(0x12c897dbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c897db push esi */
  push32((uint32_t)(ESI));
  /* 12c897dc mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 12c897e0 push edi */
  push32((uint32_t)(EDI));
L_12c897e1:;
  /* 12c897e1 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 12c897e5 inc dword ptr [esi] */
  { uint32_t _r=(r32((uint32_t)(ESI)))+1; w32((uint32_t)(ESI), (_r)); fl_inc(_r,32); }
  /* 12c897e7 call 0x12c897aa */
  push32(0x12c897ecu); f_12c897aa();
  /* 12c897ec mov edi, eax */
  EDI = (EAX);
  /* 12c897ee push edi */
  push32((uint32_t)(EDI));
  /* 12c897ef call 0x12c85844 */
  push32(0x12c897f4u); f_12c85844();
  /* 12c897f4 pop ecx */
  ECX = (pop32());
  /* 12c897f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c897f7 pop ecx */
  ECX = (pop32());
  /* 12c897f8 jne 0x12c897e1 */
  if (!C.zf) goto L_12c897e1;
  /* 12c897fa mov eax, edi */
  EAX = (EDI);
  /* 12c897fc pop edi */
  EDI = (pop32());
  /* 12c897fd pop esi */
  ESI = (pop32());
  /* 12c897fe ret  */
  ESPCHK(0x12c897dbu, _esp0);
  ESP += 4; return;
}

/* FUN_100097ff @ 0x12c897ff (117 bytes, 46 insns) */
void f_12c897ff(void) {
  FTRACE(0x12c897ffu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c897ff push ebp */
  push32((uint32_t)(EBP));
  /* 12c89800 mov ebp, esp */
  EBP = (ESP);
  /* 12c89802 push ecx */
  push32((uint32_t)(ECX));
  /* 12c89803 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c89806 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 12c89809 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8980f ja 0x12c8981d */
  if ((!C.cf&&!C.zf)) goto L_12c8981d;
  /* 12c89811 mov ecx, dword ptr [0x12c90b18] */
  ECX = (r32((uint32_t)(0x12c90b18)));
  /* 12c89817 movzx eax, word ptr [ecx + eax*2] */
  EAX = ((uint32_t)(r16((uint32_t)(ECX + EAX*2))));
  /* 12c8981b jmp 0x12c8986f */
  goto L_12c8986f;
L_12c8981d:;
  /* 12c8981d mov ecx, eax */
  ECX = (EAX);
  /* 12c8981f push esi */
  push32((uint32_t)(ESI));
  /* 12c89820 mov esi, dword ptr [0x12c90b18] */
  ESI = (r32((uint32_t)(0x12c90b18)));
  /* 12c89826 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12c89829 movzx edx, cl */
  EDX = ((uint32_t)(CL));
  /* 12c8982c test byte ptr [esi + edx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + EDX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 12c89831 pop esi */
  ESI = (pop32());
  /* 12c89832 je 0x12c89842 */
  if (C.zf) goto L_12c89842;
  /* 12c89834 and byte ptr [ebp - 2], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x2)))&(0x0u); w8((uint32_t)(EBP + -0x2), (_r)); fl_logic(_r,8); }
  /* 12c89838 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 12c8983b mov byte ptr [ebp - 3], al */
  w8((uint32_t)(EBP + -0x3), (AL));
  /* 12c8983e push 2 */
  push32((uint32_t)(0x2u));
  /* 12c89840 jmp 0x12c8984b */
  goto L_12c8984b;
L_12c89842:;
  /* 12c89842 and byte ptr [ebp - 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x0u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 12c89846 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 12c89849 push 1 */
  push32((uint32_t)(0x1u));
L_12c8984b:;
  /* 12c8984b pop eax */
  EAX = (pop32());
  /* 12c8984c lea ecx, [ebp + 0xa] */
  ECX = ((uint32_t)(EBP + 0xa));
  /* 12c8984f push 1 */
  push32((uint32_t)(0x1u));
  /* 12c89851 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c89853 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c89855 push ecx */
  push32((uint32_t)(ECX));
  /* 12c89856 push eax */
  push32((uint32_t)(EAX));
  /* 12c89857 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 12c8985a push eax */
  push32((uint32_t)(EAX));
  /* 12c8985b push 1 */
  push32((uint32_t)(0x1u));
  /* 12c8985d call 0x12c8c37d */
  push32(0x12c89862u); f_12c8c37d();
  /* 12c89862 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c89865 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c89867 jne 0x12c8986b */
  if (!C.zf) goto L_12c8986b;
  /* 12c89869 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c8986a ret  */
  ESPCHK(0x12c897ffu, _esp0);
  ESP += 4; return;
L_12c8986b:;
  /* 12c8986b movzx eax, word ptr [ebp + 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + 0xa))));
L_12c8986f:;
  /* 12c8986f and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 12c89872 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c89873 ret  */
  ESPCHK(0x12c897ffu, _esp0);
  ESP += 4; return;
}

/* FUN_10009874 @ 0x12c89874 (101 bytes, 34 insns) */
void f_12c89874(void) {
  FTRACE(0x12c89874u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c89874 push esi */
  push32((uint32_t)(ESI));
  /* 12c89875 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 12c89879 cmp esi, dword ptr [0x12cacb20] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x12cacb20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8987f jae 0x12c898c1 */
  if (!C.cf) goto L_12c898c1;
  /* 12c89881 mov ecx, esi */
  ECX = (ESI);
  /* 12c89883 mov eax, esi */
  EAX = (ESI);
  /* 12c89885 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12c89888 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12c8988b mov ecx, dword ptr [ecx*4 + 0x12caca20] */
  ECX = (r32((uint32_t)(ECX*4 + 0x12caca20)));
  /* 12c89892 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 12c89895 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 12c8989a je 0x12c898c1 */
  if (C.zf) goto L_12c898c1;
  /* 12c8989c push edi */
  push32((uint32_t)(EDI));
  /* 12c8989d push esi */
  push32((uint32_t)(ESI));
  /* 12c8989e call 0x12c8bad0 */
  push32(0x12c898a3u); f_12c8bad0();
  /* 12c898a3 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 12c898a7 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 12c898ab push esi */
  push32((uint32_t)(ESI));
  /* 12c898ac call 0x12c898d9 */
  push32(0x12c898b1u); f_12c898d9();
  /* 12c898b1 push esi */
  push32((uint32_t)(ESI));
  /* 12c898b2 mov edi, eax */
  EDI = (EAX);
  /* 12c898b4 call 0x12c8bb2f */
  push32(0x12c898b9u); f_12c8bb2f();
  /* 12c898b9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c898bc mov eax, edi */
  EAX = (EDI);
  /* 12c898be pop edi */
  EDI = (pop32());
  /* 12c898bf pop esi */
  ESI = (pop32());
  /* 12c898c0 ret  */
  ESPCHK(0x12c89874u, _esp0);
  ESP += 4; return;
L_12c898c1:;
  /* 12c898c1 call 0x12c874b3 */
  push32(0x12c898c6u); f_12c874b3();
  /* 12c898c6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12c898cc call 0x12c874bc */
  push32(0x12c898d1u); f_12c874bc();
  /* 12c898d1 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 12c898d4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c898d7 pop esi */
  ESI = (pop32());
  /* 12c898d8 ret  */
  ESPCHK(0x12c89874u, _esp0);
  ESP += 4; return;
}

/* FUN_100098d9 @ 0x12c898d9 (395 bytes, 135 insns) */
void f_12c898d9(void) {
  FTRACE(0x12c898d9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c898d9 push ebp */
  push32((uint32_t)(EBP));
  /* 12c898da mov ebp, esp */
  EBP = (ESP);
  /* 12c898dc sub esp, 0x414 */
  { uint32_t _a=(ESP),_b=(0x414u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c898e2 push ebx */
  push32((uint32_t)(EBX));
  /* 12c898e3 push esi */
  push32((uint32_t)(ESI));
  /* 12c898e4 push edi */
  push32((uint32_t)(EDI));
  /* 12c898e5 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 12c898e7 cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c898ea mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 12c898ed mov dword ptr [ebp - 0x10], edi */
  w32((uint32_t)(EBP + -0x10), (EDI));
  /* 12c898f0 jne 0x12c898f9 */
  if (!C.zf) goto L_12c898f9;
L_12c898f2:;
  /* 12c898f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c898f4 jmp 0x12c89a5f */
  goto L_12c89a5f;
L_12c898f9:;
  /* 12c898f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c898fc sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12c898ff lea ebx, [eax*4 + 0x12caca20] */
  EBX = ((uint32_t)(EAX*4 + 0x12caca20));
  /* 12c89906 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c89909 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12c8990c lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 12c8990f mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 12c89911 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 12c89914 test byte ptr [eax + esi + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 12c89919 je 0x12c89929 */
  if (C.zf) goto L_12c89929;
  /* 12c8991b push 2 */
  push32((uint32_t)(0x2u));
  /* 12c8991d push edi */
  push32((uint32_t)(EDI));
  /* 12c8991e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c89921 call 0x12c8773a */
  push32(0x12c89926u); f_12c8773a();
  /* 12c89926 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c89929:;
  /* 12c89929 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 12c8992b add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8992d test byte ptr [eax + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x80u); fl_logic(_r,8); }
  /* 12c89931 je 0x12c899f8 */
  if (C.zf) goto L_12c899f8;
  /* 12c89937 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c8993a cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8993d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c89940 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 12c89943 jbe 0x12c89a33 */
  if ((C.cf||C.zf)) goto L_12c89a33;
L_12c89949:;
  /* 12c89949 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
L_12c8994f:;
  /* 12c8994f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c89952 sub ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c89955 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c89958 jae 0x12c89983 */
  if (!C.cf) goto L_12c89983;
  /* 12c8995a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c8995d inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 12c89960 mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 12c89962 cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c89965 jne 0x12c8996e */
  if (!C.zf) goto L_12c8996e;
  /* 12c89967 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 12c8996a mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 12c8996d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12c8996e:;
  /* 12c8996e mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12c89970 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c89971 mov ecx, eax */
  ECX = (EAX);
  /* 12c89973 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 12c89979 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8997b cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c89981 jl 0x12c8994f */
  if ((C.sf!=C.of)) goto L_12c8994f;
L_12c89983:;
  /* 12c89983 mov edi, eax */
  EDI = (EAX);
  /* 12c89985 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 12c8998b sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8998d lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12c89990 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c89992 push eax */
  push32((uint32_t)(EAX));
  /* 12c89993 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 12c89999 push edi */
  push32((uint32_t)(EDI));
  /* 12c8999a push eax */
  push32((uint32_t)(EAX));
  /* 12c8999b mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 12c8999d push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 12c899a0 call dword ptr [0x12c8e0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e0b4))), 0x12c899a6u);
  /* 12c899a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c899a8 je 0x12c899ed */
  if (C.zf) goto L_12c899ed;
  /* 12c899aa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c899ad add dword ptr [ebp - 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 12c899b0 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c899b2 jl 0x12c899bf */
  if ((C.sf!=C.of)) goto L_12c899bf;
  /* 12c899b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c899b7 sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c899ba cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c899bd jb 0x12c89949 */
  if (C.cf) goto L_12c89949;
L_12c899bf:;
  /* 12c899bf xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_12c899c1:;
  /* 12c899c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c899c4 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c899c6 jne 0x12c89a5c */
  if (!C.zf) goto L_12c89a5c;
  /* 12c899cc cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c899cf je 0x12c89a33 */
  if (C.zf) goto L_12c89a33;
  /* 12c899d1 push 5 */
  push32((uint32_t)(0x5u));
  /* 12c899d3 pop esi */
  ESI = (pop32());
  /* 12c899d4 cmp dword ptr [ebp + 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c899d7 jne 0x12c89a25 */
  if (!C.zf) goto L_12c89a25;
  /* 12c899d9 call 0x12c874b3 */
  push32(0x12c899deu); f_12c874b3();
  /* 12c899de mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12c899e4 call 0x12c874bc */
  push32(0x12c899e9u); f_12c874bc();
  /* 12c899e9 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 12c899eb jmp 0x12c89a2e */
  goto L_12c89a2e;
L_12c899ed:;
  /* 12c899ed call dword ptr [0x12c8e078] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e078))), 0x12c899f3u);
  /* 12c899f3 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12c899f6 jmp 0x12c899bf */
  goto L_12c899bf;
L_12c899f8:;
  /* 12c899f8 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 12c899fb push edi */
  push32((uint32_t)(EDI));
  /* 12c899fc push ecx */
  push32((uint32_t)(ECX));
  /* 12c899fd push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 12c89a00 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 12c89a03 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 12c89a05 call dword ptr [0x12c8e0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e0b4))), 0x12c89a0bu);
  /* 12c89a0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c89a0d je 0x12c89a1a */
  if (C.zf) goto L_12c89a1a;
  /* 12c89a0f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c89a12 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 12c89a15 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c89a18 jmp 0x12c899c1 */
  goto L_12c899c1;
L_12c89a1a:;
  /* 12c89a1a call dword ptr [0x12c8e078] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e078))), 0x12c89a20u);
  /* 12c89a20 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12c89a23 jmp 0x12c899c1 */
  goto L_12c899c1;
L_12c89a25:;
  /* 12c89a25 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c89a28 call 0x12c87440 */
  push32(0x12c89a2du); f_12c87440();
  /* 12c89a2d pop ecx */
  ECX = (pop32());
L_12c89a2e:;
  /* 12c89a2e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c89a31 jmp 0x12c89a5f */
  goto L_12c89a5f;
L_12c89a33:;
  /* 12c89a33 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 12c89a35 test byte ptr [eax + esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x40u); fl_logic(_r,8); }
  /* 12c89a3a je 0x12c89a48 */
  if (C.zf) goto L_12c89a48;
  /* 12c89a3c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c89a3f cmp byte ptr [eax], 0x1a */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c89a42 je 0x12c898f2 */
  if (C.zf) goto L_12c898f2;
L_12c89a48:;
  /* 12c89a48 call 0x12c874b3 */
  push32(0x12c89a4du); f_12c874b3();
  /* 12c89a4d mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 12c89a53 call 0x12c874bc */
  push32(0x12c89a58u); f_12c874bc();
  /* 12c89a58 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 12c89a5a jmp 0x12c89a2e */
  goto L_12c89a2e;
L_12c89a5c:;
  /* 12c89a5c sub eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12c89a5f:;
  /* 12c89a5f pop edi */
  EDI = (pop32());
  /* 12c89a60 pop esi */
  ESI = (pop32());
  /* 12c89a61 pop ebx */
  EBX = (pop32());
  /* 12c89a62 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c89a63 ret  */
  ESPCHK(0x12c898d9u, _esp0);
  ESP += 4; return;
}

/* FUN_10009a80 @ 0x12c89a80 (188 bytes, 86 insns) */
void f_12c89a80(void) {
  FTRACE(0x12c89a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c89a80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c89a82 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12c89a86 push ebx */
  push32((uint32_t)(EBX));
  /* 12c89a87 mov ebx, eax */
  EBX = (EAX);
  /* 12c89a89 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12c89a8c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c89a90 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12c89a96 je 0x12c89aab */
  if (C.zf) goto L_12c89aab;
L_12c89a98:;
  /* 12c89a98 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 12c89a9a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12c89a9b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c89a9d je 0x12c89a70 */
  if (C.zf) { jmp_ind(0x12c89a70u); return; }
  /* 12c89a9f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 12c89aa1 je 0x12c89af4 */
  if (C.zf) goto L_12c89af4;
  /* 12c89aa3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12c89aa9 jne 0x12c89a98 */
  if (!C.zf) goto L_12c89a98;
L_12c89aab:;
  /* 12c89aab or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 12c89aad push edi */
  push32((uint32_t)(EDI));
  /* 12c89aae mov eax, ebx */
  EAX = (EBX);
  /* 12c89ab0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 12c89ab3 push esi */
  push32((uint32_t)(ESI));
  /* 12c89ab4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_12c89ab6:;
  /* 12c89ab6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 12c89ab8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 12c89abd mov eax, ecx */
  EAX = (ECX);
  /* 12c89abf mov esi, edi */
  ESI = (EDI);
  /* 12c89ac1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 12c89ac3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c89ac5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c89ac7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c89aca xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c89acd xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 12c89acf xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 12c89ad1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c89ad4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 12c89ada jne 0x12c89af8 */
  if (!C.zf) goto L_12c89af8;
  /* 12c89adc and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12c89ae1 je 0x12c89ab6 */
  if (C.zf) goto L_12c89ab6;
  /* 12c89ae3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12c89ae8 jne 0x12c89af2 */
  if (!C.zf) goto L_12c89af2;
  /* 12c89aea and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 12c89af0 jne 0x12c89ab6 */
  if (!C.zf) goto L_12c89ab6;
L_12c89af2:;
  /* 12c89af2 pop esi */
  ESI = (pop32());
  /* 12c89af3 pop edi */
  EDI = (pop32());
L_12c89af4:;
  /* 12c89af4 pop ebx */
  EBX = (pop32());
  /* 12c89af5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c89af7 ret  */
  ESPCHK(0x12c89a80u, _esp0);
  ESP += 4; return;
L_12c89af8:;
  /* 12c89af8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 12c89afb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c89afd je 0x12c89b35 */
  if (C.zf) goto L_12c89b35;
  /* 12c89aff test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12c89b01 je 0x12c89af2 */
  if (C.zf) goto L_12c89af2;
  /* 12c89b03 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c89b05 je 0x12c89b2e */
  if (C.zf) goto L_12c89b2e;
  /* 12c89b07 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12c89b09 je 0x12c89af2 */
  if (C.zf) goto L_12c89af2;
  /* 12c89b0b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12c89b0e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c89b10 je 0x12c89b27 */
  if (C.zf) goto L_12c89b27;
  /* 12c89b12 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12c89b14 je 0x12c89af2 */
  if (C.zf) goto L_12c89af2;
  /* 12c89b16 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c89b18 je 0x12c89b20 */
  if (C.zf) goto L_12c89b20;
  /* 12c89b1a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12c89b1c je 0x12c89af2 */
  if (C.zf) goto L_12c89af2;
  /* 12c89b1e jmp 0x12c89ab6 */
  goto L_12c89ab6;
L_12c89b20:;
  /* 12c89b20 pop esi */
  ESI = (pop32());
  /* 12c89b21 pop edi */
  EDI = (pop32());
  /* 12c89b22 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 12c89b25 pop ebx */
  EBX = (pop32());
  /* 12c89b26 ret  */
  ESPCHK(0x12c89a80u, _esp0);
  ESP += 4; return;
L_12c89b27:;
  /* 12c89b27 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 12c89b2a pop esi */
  ESI = (pop32());
  /* 12c89b2b pop edi */
  EDI = (pop32());
  /* 12c89b2c pop ebx */
  EBX = (pop32());
  /* 12c89b2d ret  */
  ESPCHK(0x12c89a80u, _esp0);
  ESP += 4; return;
L_12c89b2e:;
  /* 12c89b2e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 12c89b31 pop esi */
  ESI = (pop32());
  /* 12c89b32 pop edi */
  EDI = (pop32());
  /* 12c89b33 pop ebx */
  EBX = (pop32());
  /* 12c89b34 ret  */
  ESPCHK(0x12c89a80u, _esp0);
  ESP += 4; return;
L_12c89b35:;
  /* 12c89b35 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 12c89b38 pop esi */
  ESI = (pop32());
  /* 12c89b39 pop edi */
  EDI = (pop32());
  /* 12c89b3a pop ebx */
  EBX = (pop32());
  /* 12c89b3b ret  */
  ESPCHK(0x12c89a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b3c @ 0x12c89b3c (185 bytes, 71 insns) */
void f_12c89b3c(void) {
  FTRACE(0x12c89b3cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c89b3c push ebx */
  push32((uint32_t)(EBX));
  /* 12c89b3d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12c89b3f cmp dword ptr [0x12cadb48], ebx */
  { uint32_t _a=(r32((uint32_t)(0x12cadb48))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c89b45 push esi */
  push32((uint32_t)(ESI));
  /* 12c89b46 push edi */
  push32((uint32_t)(EDI));
  /* 12c89b47 jne 0x12c89b4e */
  if (!C.zf) goto L_12c89b4e;
  /* 12c89b49 call 0x12c8c89e */
  push32(0x12c89b4eu); f_12c8c89e();
L_12c89b4e:;
  /* 12c89b4e mov esi, dword ptr [0x12cac43c] */
  ESI = (r32((uint32_t)(0x12cac43c)));
  /* 12c89b54 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_12c89b56:;
  /* 12c89b56 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c89b58 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c89b5a je 0x12c89b6e */
  if (C.zf) goto L_12c89b6e;
  /* 12c89b5c cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c89b5e je 0x12c89b61 */
  if (C.zf) goto L_12c89b61;
  /* 12c89b60 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_12c89b61:;
  /* 12c89b61 push esi */
  push32((uint32_t)(ESI));
  /* 12c89b62 call 0x12c86010 */
  push32(0x12c89b67u); f_12c86010();
  /* 12c89b67 pop ecx */
  ECX = (pop32());
  /* 12c89b68 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 12c89b6c jmp 0x12c89b56 */
  goto L_12c89b56;
L_12c89b6e:;
  /* 12c89b6e lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 12c89b75 push eax */
  push32((uint32_t)(EAX));
  /* 12c89b76 call 0x12c86920 */
  push32(0x12c89b7bu); f_12c86920();
  /* 12c89b7b mov esi, eax */
  ESI = (EAX);
  /* 12c89b7d pop ecx */
  ECX = (pop32());
  /* 12c89b7e cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c89b80 mov dword ptr [0x12cac46c], esi */
  w32((uint32_t)(0x12cac46c), (ESI));
  /* 12c89b86 jne 0x12c89b90 */
  if (!C.zf) goto L_12c89b90;
  /* 12c89b88 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c89b8a call 0x12c85e26 */
  push32(0x12c89b8fu); f_12c85e26();
  /* 12c89b8f pop ecx */
  ECX = (pop32());
L_12c89b90:;
  /* 12c89b90 mov edi, dword ptr [0x12cac43c] */
  EDI = (r32((uint32_t)(0x12cac43c)));
  /* 12c89b96 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c89b98 je 0x12c89bd3 */
  if (C.zf) goto L_12c89bd3;
  /* 12c89b9a push ebp */
  push32((uint32_t)(EBP));
L_12c89b9b:;
  /* 12c89b9b push edi */
  push32((uint32_t)(EDI));
  /* 12c89b9c call 0x12c86010 */
  push32(0x12c89ba1u); f_12c86010();
  /* 12c89ba1 mov ebp, eax */
  EBP = (EAX);
  /* 12c89ba3 pop ecx */
  ECX = (pop32());
  /* 12c89ba4 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 12c89ba5 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c89ba8 je 0x12c89bcc */
  if (C.zf) goto L_12c89bcc;
  /* 12c89baa push ebp */
  push32((uint32_t)(EBP));
  /* 12c89bab call 0x12c86920 */
  push32(0x12c89bb0u); f_12c86920();
  /* 12c89bb0 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c89bb2 pop ecx */
  ECX = (pop32());
  /* 12c89bb3 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 12c89bb5 jne 0x12c89bbf */
  if (!C.zf) goto L_12c89bbf;
  /* 12c89bb7 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c89bb9 call 0x12c85e26 */
  push32(0x12c89bbeu); f_12c85e26();
  /* 12c89bbe pop ecx */
  ECX = (pop32());
L_12c89bbf:;
  /* 12c89bbf push edi */
  push32((uint32_t)(EDI));
  /* 12c89bc0 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 12c89bc2 call 0x12c8b590 */
  push32(0x12c89bc7u); f_12c8b590();
  /* 12c89bc7 pop ecx */
  ECX = (pop32());
  /* 12c89bc8 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c89bcb pop ecx */
  ECX = (pop32());
L_12c89bcc:;
  /* 12c89bcc add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c89bce cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c89bd0 jne 0x12c89b9b */
  if (!C.zf) goto L_12c89b9b;
  /* 12c89bd2 pop ebp */
  EBP = (pop32());
L_12c89bd3:;
  /* 12c89bd3 push dword ptr [0x12cac43c] */
  push32((uint32_t)(r32((uint32_t)(0x12cac43c))));
  /* 12c89bd9 call 0x12c85e59 */
  push32(0x12c89bdeu); f_12c85e59();
  /* 12c89bde pop ecx */
  ECX = (pop32());
  /* 12c89bdf mov dword ptr [0x12cac43c], ebx */
  w32((uint32_t)(0x12cac43c), (EBX));
  /* 12c89be5 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 12c89be7 pop edi */
  EDI = (pop32());
  /* 12c89be8 pop esi */
  ESI = (pop32());
  /* 12c89be9 mov dword ptr [0x12cadb44], 1 */
  w32((uint32_t)(0x12cadb44), (0x1u));
  /* 12c89bf3 pop ebx */
  EBX = (pop32());
  /* 12c89bf4 ret  */
  ESPCHK(0x12c89b3cu, _esp0);
  ESP += 4; return;
}

/* FUN_10009bf5 @ 0x12c89bf5 (153 bytes, 62 insns) */
void f_12c89bf5(void) {
  FTRACE(0x12c89bf5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c89bf5 push ebp */
  push32((uint32_t)(EBP));
  /* 12c89bf6 mov ebp, esp */
  EBP = (ESP);
  /* 12c89bf8 push ecx */
  push32((uint32_t)(ECX));
  /* 12c89bf9 push ecx */
  push32((uint32_t)(ECX));
  /* 12c89bfa push ebx */
  push32((uint32_t)(EBX));
  /* 12c89bfb xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12c89bfd cmp dword ptr [0x12cadb48], ebx */
  { uint32_t _a=(r32((uint32_t)(0x12cadb48))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c89c03 push esi */
  push32((uint32_t)(ESI));
  /* 12c89c04 push edi */
  push32((uint32_t)(EDI));
  /* 12c89c05 jne 0x12c89c0c */
  if (!C.zf) goto L_12c89c0c;
  /* 12c89c07 call 0x12c8c89e */
  push32(0x12c89c0cu); f_12c8c89e();
L_12c89c0c:;
  /* 12c89c0c mov esi, 0x12cac4f8 */
  ESI = (0x12cac4f8u);
  /* 12c89c11 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12c89c16 push esi */
  push32((uint32_t)(ESI));
  /* 12c89c17 push ebx */
  push32((uint32_t)(EBX));
  /* 12c89c18 call dword ptr [0x12c8e0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e0b8))), 0x12c89c1eu);
  /* 12c89c1e mov eax, dword ptr [0x12cadb58] */
  EAX = (r32((uint32_t)(0x12cadb58)));
  /* 12c89c23 mov dword ptr [0x12cac47c], esi */
  w32((uint32_t)(0x12cac47c), (ESI));
  /* 12c89c29 mov edi, esi */
  EDI = (ESI);
  /* 12c89c2b cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c89c2d je 0x12c89c31 */
  if (C.zf) goto L_12c89c31;
  /* 12c89c2f mov edi, eax */
  EDI = (EAX);
L_12c89c31:;
  /* 12c89c31 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12c89c34 push eax */
  push32((uint32_t)(EAX));
  /* 12c89c35 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 12c89c38 push eax */
  push32((uint32_t)(EAX));
  /* 12c89c39 push ebx */
  push32((uint32_t)(EBX));
  /* 12c89c3a push ebx */
  push32((uint32_t)(EBX));
  /* 12c89c3b push edi */
  push32((uint32_t)(EDI));
  /* 12c89c3c call 0x12c89c8e */
  push32(0x12c89c41u); f_12c89c8e();
  /* 12c89c41 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c89c44 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c89c47 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 12c89c4a push eax */
  push32((uint32_t)(EAX));
  /* 12c89c4b call 0x12c86920 */
  push32(0x12c89c50u); f_12c86920();
  /* 12c89c50 mov esi, eax */
  ESI = (EAX);
  /* 12c89c52 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c89c55 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c89c57 jne 0x12c89c61 */
  if (!C.zf) goto L_12c89c61;
  /* 12c89c59 push 8 */
  push32((uint32_t)(0x8u));
  /* 12c89c5b call 0x12c85e26 */
  push32(0x12c89c60u); f_12c85e26();
  /* 12c89c60 pop ecx */
  ECX = (pop32());
L_12c89c61:;
  /* 12c89c61 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12c89c64 push eax */
  push32((uint32_t)(EAX));
  /* 12c89c65 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 12c89c68 push eax */
  push32((uint32_t)(EAX));
  /* 12c89c69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c89c6c lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 12c89c6f push eax */
  push32((uint32_t)(EAX));
  /* 12c89c70 push esi */
  push32((uint32_t)(ESI));
  /* 12c89c71 push edi */
  push32((uint32_t)(EDI));
  /* 12c89c72 call 0x12c89c8e */
  push32(0x12c89c77u); f_12c89c8e();
  /* 12c89c77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c89c7a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c89c7d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 12c89c7e mov dword ptr [0x12cac464], esi */
  w32((uint32_t)(0x12cac464), (ESI));
  /* 12c89c84 pop edi */
  EDI = (pop32());
  /* 12c89c85 pop esi */
  ESI = (pop32());
  /* 12c89c86 mov dword ptr [0x12cac460], eax */
  w32((uint32_t)(0x12cac460), (EAX));
  /* 12c89c8b pop ebx */
  EBX = (pop32());
  /* 12c89c8c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c89c8d ret  */
  ESPCHK(0x12c89bf5u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c8e @ 0x12c89c8e (436 bytes, 187 insns) */
void f_12c89c8e(void) {
  FTRACE(0x12c89c8eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c89c8e push ebp */
  push32((uint32_t)(EBP));
  /* 12c89c8f mov ebp, esp */
  EBP = (ESP);
  /* 12c89c91 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c89c94 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c89c97 push ebx */
  push32((uint32_t)(EBX));
  /* 12c89c98 push esi */
  push32((uint32_t)(ESI));
  /* 12c89c99 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 12c89c9c mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 12c89c9f push edi */
  push32((uint32_t)(EDI));
  /* 12c89ca0 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 12c89ca3 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 12c89ca9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c89cac test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 12c89cae je 0x12c89cb8 */
  if (C.zf) goto L_12c89cb8;
  /* 12c89cb0 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 12c89cb2 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c89cb5 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_12c89cb8:;
  /* 12c89cb8 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c89cbb jne 0x12c89d01 */
  if (!C.zf) goto L_12c89d01;
L_12c89cbd:;
  /* 12c89cbd mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 12c89cc0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c89cc1 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c89cc4 je 0x12c89cef */
  if (C.zf) goto L_12c89cef;
  /* 12c89cc6 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12c89cc8 je 0x12c89cef */
  if (C.zf) goto L_12c89cef;
  /* 12c89cca movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 12c89ccd test byte ptr [edx + 0x12cac8e1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x12cac8e1)))&(0x4u); fl_logic(_r,8); }
  /* 12c89cd4 je 0x12c89ce2 */
  if (C.zf) goto L_12c89ce2;
  /* 12c89cd6 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 12c89cd8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 12c89cda je 0x12c89ce2 */
  if (C.zf) goto L_12c89ce2;
  /* 12c89cdc mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 12c89cde mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 12c89ce0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c89ce1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12c89ce2:;
  /* 12c89ce2 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 12c89ce4 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 12c89ce6 je 0x12c89cbd */
  if (C.zf) goto L_12c89cbd;
  /* 12c89ce8 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 12c89cea mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 12c89cec inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c89ced jmp 0x12c89cbd */
  goto L_12c89cbd;
L_12c89cef:;
  /* 12c89cef inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 12c89cf1 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 12c89cf3 je 0x12c89cf9 */
  if (C.zf) goto L_12c89cf9;
  /* 12c89cf5 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 12c89cf8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_12c89cf9:;
  /* 12c89cf9 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c89cfc jne 0x12c89d44 */
  if (!C.zf) goto L_12c89d44;
  /* 12c89cfe inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c89cff jmp 0x12c89d44 */
  goto L_12c89d44;
L_12c89d01:;
  /* 12c89d01 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 12c89d03 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 12c89d05 je 0x12c89d0c */
  if (C.zf) goto L_12c89d0c;
  /* 12c89d07 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 12c89d09 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 12c89d0b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_12c89d0c:;
  /* 12c89d0c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 12c89d0e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c89d0f movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 12c89d12 test byte ptr [ebx + 0x12cac8e1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x12cac8e1)))&(0x4u); fl_logic(_r,8); }
  /* 12c89d19 je 0x12c89d27 */
  if (C.zf) goto L_12c89d27;
  /* 12c89d1b inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 12c89d1d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 12c89d1f je 0x12c89d26 */
  if (C.zf) goto L_12c89d26;
  /* 12c89d21 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 12c89d23 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 12c89d25 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_12c89d26:;
  /* 12c89d26 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12c89d27:;
  /* 12c89d27 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c89d2a je 0x12c89d35 */
  if (C.zf) goto L_12c89d35;
  /* 12c89d2c test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12c89d2e je 0x12c89d39 */
  if (C.zf) goto L_12c89d39;
  /* 12c89d30 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c89d33 jne 0x12c89d01 */
  if (!C.zf) goto L_12c89d01;
L_12c89d35:;
  /* 12c89d35 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12c89d37 jne 0x12c89d3c */
  if (!C.zf) goto L_12c89d3c;
L_12c89d39:;
  /* 12c89d39 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 12c89d3a jmp 0x12c89d44 */
  goto L_12c89d44;
L_12c89d3c:;
  /* 12c89d3c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 12c89d3e je 0x12c89d44 */
  if (C.zf) goto L_12c89d44;
  /* 12c89d40 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_12c89d44:;
  /* 12c89d44 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_12c89d48:;
  /* 12c89d48 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c89d4b je 0x12c89e31 */
  if (C.zf) goto L_12c89e31;
L_12c89d51:;
  /* 12c89d51 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 12c89d53 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c89d56 je 0x12c89d5d */
  if (C.zf) goto L_12c89d5d;
  /* 12c89d58 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c89d5b jne 0x12c89d60 */
  if (!C.zf) goto L_12c89d60;
L_12c89d5d:;
  /* 12c89d5d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c89d5e jmp 0x12c89d51 */
  goto L_12c89d51;
L_12c89d60:;
  /* 12c89d60 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c89d63 je 0x12c89e31 */
  if (C.zf) goto L_12c89e31;
  /* 12c89d69 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 12c89d6b je 0x12c89d75 */
  if (C.zf) goto L_12c89d75;
  /* 12c89d6d mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 12c89d6f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c89d72 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_12c89d75:;
  /* 12c89d75 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c89d78 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_12c89d7a:;
  /* 12c89d7a mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 12c89d81 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_12c89d83:;
  /* 12c89d83 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c89d86 jne 0x12c89d8c */
  if (!C.zf) goto L_12c89d8c;
  /* 12c89d88 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c89d89 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 12c89d8a jmp 0x12c89d83 */
  goto L_12c89d83;
L_12c89d8c:;
  /* 12c89d8c cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c89d8f jne 0x12c89dbd */
  if (!C.zf) goto L_12c89dbd;
  /* 12c89d91 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 12c89d94 jne 0x12c89dbb */
  if (!C.zf) goto L_12c89dbb;
  /* 12c89d96 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 12c89d98 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c89d9b je 0x12c89daa */
  if (C.zf) goto L_12c89daa;
  /* 12c89d9d cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c89da1 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 12c89da4 jne 0x12c89daa */
  if (!C.zf) goto L_12c89daa;
  /* 12c89da6 mov eax, edx */
  EAX = (EDX);
  /* 12c89da8 jmp 0x12c89dad */
  goto L_12c89dad;
L_12c89daa:;
  /* 12c89daa mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_12c89dad:;
  /* 12c89dad mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 12c89db0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c89db2 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c89db5 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 12c89db8 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_12c89dbb:;
  /* 12c89dbb shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_12c89dbd:;
  /* 12c89dbd mov edx, ebx */
  EDX = (EBX);
  /* 12c89dbf dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 12c89dc0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c89dc2 je 0x12c89dd2 */
  if (C.zf) goto L_12c89dd2;
  /* 12c89dc4 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_12c89dc5:;
  /* 12c89dc5 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 12c89dc7 je 0x12c89dcd */
  if (C.zf) goto L_12c89dcd;
  /* 12c89dc9 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 12c89dcc inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_12c89dcd:;
  /* 12c89dcd inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 12c89dcf dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 12c89dd0 jne 0x12c89dc5 */
  if (!C.zf) goto L_12c89dc5;
L_12c89dd2:;
  /* 12c89dd2 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 12c89dd4 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12c89dd6 je 0x12c89e22 */
  if (C.zf) goto L_12c89e22;
  /* 12c89dd8 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c89ddc jne 0x12c89de8 */
  if (!C.zf) goto L_12c89de8;
  /* 12c89dde cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c89de1 je 0x12c89e22 */
  if (C.zf) goto L_12c89e22;
  /* 12c89de3 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c89de6 je 0x12c89e22 */
  if (C.zf) goto L_12c89e22;
L_12c89de8:;
  /* 12c89de8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c89dec je 0x12c89e1c */
  if (C.zf) goto L_12c89e1c;
  /* 12c89dee test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 12c89df0 je 0x12c89e0b */
  if (C.zf) goto L_12c89e0b;
  /* 12c89df2 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 12c89df5 test byte ptr [ebx + 0x12cac8e1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x12cac8e1)))&(0x4u); fl_logic(_r,8); }
  /* 12c89dfc je 0x12c89e04 */
  if (C.zf) goto L_12c89e04;
  /* 12c89dfe mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 12c89e00 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c89e01 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c89e02 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_12c89e04:;
  /* 12c89e04 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 12c89e06 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 12c89e08 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c89e09 jmp 0x12c89e1a */
  goto L_12c89e1a;
L_12c89e0b:;
  /* 12c89e0b movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 12c89e0e test byte ptr [edx + 0x12cac8e1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x12cac8e1)))&(0x4u); fl_logic(_r,8); }
  /* 12c89e15 je 0x12c89e1a */
  if (C.zf) goto L_12c89e1a;
  /* 12c89e17 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c89e18 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_12c89e1a:;
  /* 12c89e1a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_12c89e1c:;
  /* 12c89e1c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c89e1d jmp 0x12c89d7a */
  goto L_12c89d7a;
L_12c89e22:;
  /* 12c89e22 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 12c89e24 je 0x12c89e2a */
  if (C.zf) goto L_12c89e2a;
  /* 12c89e26 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 12c89e29 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_12c89e2a:;
  /* 12c89e2a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 12c89e2c jmp 0x12c89d48 */
  goto L_12c89d48;
L_12c89e31:;
  /* 12c89e31 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 12c89e33 je 0x12c89e38 */
  if (C.zf) goto L_12c89e38;
  /* 12c89e35 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_12c89e38:;
  /* 12c89e38 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c89e3b pop edi */
  EDI = (pop32());
  /* 12c89e3c pop esi */
  ESI = (pop32());
  /* 12c89e3d pop ebx */
  EBX = (pop32());
  /* 12c89e3e inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 12c89e40 pop ebp */
  EBP = (pop32());
  /* 12c89e41 ret  */
  ESPCHK(0x12c89c8eu, _esp0);
  ESP += 4; return;
}

/* FUN_10009e42 @ 0x12c89e42 (306 bytes, 132 insns) */
void f_12c89e42(void) {
  FTRACE(0x12c89e42u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c89e42 push ecx */
  push32((uint32_t)(ECX));
  /* 12c89e43 push ecx */
  push32((uint32_t)(ECX));
  /* 12c89e44 mov eax, dword ptr [0x12cac5fc] */
  EAX = (r32((uint32_t)(0x12cac5fc)));
  /* 12c89e49 push ebx */
  push32((uint32_t)(EBX));
  /* 12c89e4a push ebp */
  push32((uint32_t)(EBP));
  /* 12c89e4b mov ebp, dword ptr [0x12c8e09c] */
  EBP = (r32((uint32_t)(0x12c8e09c)));
  /* 12c89e51 push esi */
  push32((uint32_t)(ESI));
  /* 12c89e52 push edi */
  push32((uint32_t)(EDI));
  /* 12c89e53 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12c89e55 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 12c89e57 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 12c89e59 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c89e5b jne 0x12c89e90 */
  if (!C.zf) goto L_12c89e90;
  /* 12c89e5d call ebp */
  call_ind((uint32_t)(EBP), 0x12c89e5fu);
  /* 12c89e5f mov esi, eax */
  ESI = (EAX);
  /* 12c89e61 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c89e63 je 0x12c89e71 */
  if (C.zf) goto L_12c89e71;
  /* 12c89e65 mov dword ptr [0x12cac5fc], 1 */
  w32((uint32_t)(0x12cac5fc), (0x1u));
  /* 12c89e6f jmp 0x12c89e99 */
  goto L_12c89e99;
L_12c89e71:;
  /* 12c89e71 call dword ptr [0x12c8e0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e0c8))), 0x12c89e77u);
  /* 12c89e77 mov edi, eax */
  EDI = (EAX);
  /* 12c89e79 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c89e7b je 0x12c89f6b */
  if (C.zf) goto L_12c89f6b;
  /* 12c89e81 mov dword ptr [0x12cac5fc], 2 */
  w32((uint32_t)(0x12cac5fc), (0x2u));
  /* 12c89e8b jmp 0x12c89f1f */
  goto L_12c89f1f;
L_12c89e90:;
  /* 12c89e90 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c89e93 jne 0x12c89f1a */
  if (!C.zf) goto L_12c89f1a;
L_12c89e99:;
  /* 12c89e99 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c89e9b jne 0x12c89ea9 */
  if (!C.zf) goto L_12c89ea9;
  /* 12c89e9d call ebp */
  call_ind((uint32_t)(EBP), 0x12c89e9fu);
  /* 12c89e9f mov esi, eax */
  ESI = (EAX);
  /* 12c89ea1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c89ea3 je 0x12c89f6b */
  if (C.zf) goto L_12c89f6b;
L_12c89ea9:;
  /* 12c89ea9 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 12c89eac mov eax, esi */
  EAX = (ESI);
  /* 12c89eae je 0x12c89ebe */
  if (C.zf) goto L_12c89ebe;
L_12c89eb0:;
  /* 12c89eb0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c89eb1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c89eb2 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 12c89eb5 jne 0x12c89eb0 */
  if (!C.zf) goto L_12c89eb0;
  /* 12c89eb7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c89eb8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c89eb9 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 12c89ebc jne 0x12c89eb0 */
  if (!C.zf) goto L_12c89eb0;
L_12c89ebe:;
  /* 12c89ebe sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c89ec0 mov edi, dword ptr [0x12c8e0c4] */
  EDI = (r32((uint32_t)(0x12c8e0c4)));
  /* 12c89ec6 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12c89ec8 push ebx */
  push32((uint32_t)(EBX));
  /* 12c89ec9 push ebx */
  push32((uint32_t)(EBX));
  /* 12c89eca inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c89ecb push ebx */
  push32((uint32_t)(EBX));
  /* 12c89ecc push ebx */
  push32((uint32_t)(EBX));
  /* 12c89ecd push eax */
  push32((uint32_t)(EAX));
  /* 12c89ece push esi */
  push32((uint32_t)(ESI));
  /* 12c89ecf push ebx */
  push32((uint32_t)(EBX));
  /* 12c89ed0 push ebx */
  push32((uint32_t)(EBX));
  /* 12c89ed1 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 12c89ed5 call edi */
  call_ind((uint32_t)(EDI), 0x12c89ed7u);
  /* 12c89ed7 mov ebp, eax */
  EBP = (EAX);
  /* 12c89ed9 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c89edb je 0x12c89f0f */
  if (C.zf) goto L_12c89f0f;
  /* 12c89edd push ebp */
  push32((uint32_t)(EBP));
  /* 12c89ede call 0x12c86920 */
  push32(0x12c89ee3u); f_12c86920();
  /* 12c89ee3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c89ee5 pop ecx */
  ECX = (pop32());
  /* 12c89ee6 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 12c89eea je 0x12c89f0f */
  if (C.zf) goto L_12c89f0f;
  /* 12c89eec push ebx */
  push32((uint32_t)(EBX));
  /* 12c89eed push ebx */
  push32((uint32_t)(EBX));
  /* 12c89eee push ebp */
  push32((uint32_t)(EBP));
  /* 12c89eef push eax */
  push32((uint32_t)(EAX));
  /* 12c89ef0 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 12c89ef4 push esi */
  push32((uint32_t)(ESI));
  /* 12c89ef5 push ebx */
  push32((uint32_t)(EBX));
  /* 12c89ef6 push ebx */
  push32((uint32_t)(EBX));
  /* 12c89ef7 call edi */
  call_ind((uint32_t)(EDI), 0x12c89ef9u);
  /* 12c89ef9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c89efb jne 0x12c89f0b */
  if (!C.zf) goto L_12c89f0b;
  /* 12c89efd push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 12c89f01 call 0x12c85e59 */
  push32(0x12c89f06u); f_12c85e59();
  /* 12c89f06 pop ecx */
  ECX = (pop32());
  /* 12c89f07 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_12c89f0b:;
  /* 12c89f0b mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_12c89f0f:;
  /* 12c89f0f push esi */
  push32((uint32_t)(ESI));
  /* 12c89f10 call dword ptr [0x12c8e0c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e0c0))), 0x12c89f16u);
  /* 12c89f16 mov eax, ebx */
  EAX = (EBX);
  /* 12c89f18 jmp 0x12c89f6d */
  goto L_12c89f6d;
L_12c89f1a:;
  /* 12c89f1a cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c89f1d jne 0x12c89f6b */
  if (!C.zf) goto L_12c89f6b;
L_12c89f1f:;
  /* 12c89f1f cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c89f21 jne 0x12c89f2f */
  if (!C.zf) goto L_12c89f2f;
  /* 12c89f23 call dword ptr [0x12c8e0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e0c8))), 0x12c89f29u);
  /* 12c89f29 mov edi, eax */
  EDI = (EAX);
  /* 12c89f2b cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c89f2d je 0x12c89f6b */
  if (C.zf) goto L_12c89f6b;
L_12c89f2f:;
  /* 12c89f2f cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c89f31 mov eax, edi */
  EAX = (EDI);
  /* 12c89f33 je 0x12c89f3f */
  if (C.zf) goto L_12c89f3f;
L_12c89f35:;
  /* 12c89f35 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c89f36 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c89f38 jne 0x12c89f35 */
  if (!C.zf) goto L_12c89f35;
  /* 12c89f3a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c89f3b cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c89f3d jne 0x12c89f35 */
  if (!C.zf) goto L_12c89f35;
L_12c89f3f:;
  /* 12c89f3f sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c89f41 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c89f42 mov ebp, eax */
  EBP = (EAX);
  /* 12c89f44 push ebp */
  push32((uint32_t)(EBP));
  /* 12c89f45 call 0x12c86920 */
  push32(0x12c89f4au); f_12c86920();
  /* 12c89f4a mov esi, eax */
  ESI = (EAX);
  /* 12c89f4c pop ecx */
  ECX = (pop32());
  /* 12c89f4d cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c89f4f jne 0x12c89f55 */
  if (!C.zf) goto L_12c89f55;
  /* 12c89f51 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 12c89f53 jmp 0x12c89f60 */
  goto L_12c89f60;
L_12c89f55:;
  /* 12c89f55 push ebp */
  push32((uint32_t)(EBP));
  /* 12c89f56 push edi */
  push32((uint32_t)(EDI));
  /* 12c89f57 push esi */
  push32((uint32_t)(ESI));
  /* 12c89f58 call 0x12c860b0 */
  push32(0x12c89f5du); f_12c860b0();
  /* 12c89f5d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c89f60:;
  /* 12c89f60 push edi */
  push32((uint32_t)(EDI));
  /* 12c89f61 call dword ptr [0x12c8e0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e0bc))), 0x12c89f67u);
  /* 12c89f67 mov eax, esi */
  EAX = (ESI);
  /* 12c89f69 jmp 0x12c89f6d */
  goto L_12c89f6d;
L_12c89f6b:;
  /* 12c89f6b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c89f6d:;
  /* 12c89f6d pop edi */
  EDI = (pop32());
  /* 12c89f6e pop esi */
  ESI = (pop32());
  /* 12c89f6f pop ebp */
  EBP = (pop32());
  /* 12c89f70 pop ebx */
  EBX = (pop32());
  /* 12c89f71 pop ecx */
  ECX = (pop32());
  /* 12c89f72 pop ecx */
  ECX = (pop32());
  /* 12c89f73 ret  */
  ESPCHK(0x12c89e42u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f74 @ 0x12c89f74 (45 bytes, 17 insns) */
void f_12c89f74(void) {
  FTRACE(0x12c89f74u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c89f74 push esi */
  push32((uint32_t)(ESI));
  /* 12c89f75 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 12c89f79 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c89f7b and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 12c89f7e call dword ptr [0x12c8e004] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e004))), 0x12c89f84u);
  /* 12c89f84 cmp word ptr [eax], 0x5a4d */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x5a4du),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 12c89f89 jne 0x12c89f9f */
  if (!C.zf) goto L_12c89f9f;
  /* 12c89f8b mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 12c89f8e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c89f90 je 0x12c89f9f */
  if (C.zf) goto L_12c89f9f;
  /* 12c89f92 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c89f94 mov cl, byte ptr [eax + 0x1a] */
  CL = (r8((uint32_t)(EAX + 0x1a)));
  /* 12c89f97 mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 12c89f99 mov al, byte ptr [eax + 0x1b] */
  AL = (r8((uint32_t)(EAX + 0x1b)));
  /* 12c89f9c mov byte ptr [esi + 1], al */
  w8((uint32_t)(ESI + 0x1), (AL));
L_12c89f9f:;
  /* 12c89f9f pop esi */
  ESI = (pop32());
  /* 12c89fa0 ret  */
  ESPCHK(0x12c89f74u, _esp0);
  ESP += 4; return;
}

/* FUN_10009fa1 @ 0x12c89fa1 (328 bytes, 115 insns) */
void f_12c89fa1(void) {
  FTRACE(0x12c89fa1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c89fa1 push ebp */
  push32((uint32_t)(EBP));
  /* 12c89fa2 mov ebp, esp */
  EBP = (ESP);
  /* 12c89fa4 mov eax, 0x122c */
  EAX = (0x122cu);
  /* 12c89fa9 call 0x12c85470 */
  push32(0x12c89faeu); f_12c85470();
  /* 12c89fae lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 12c89fb4 push ebx */
  push32((uint32_t)(EBX));
  /* 12c89fb5 push eax */
  push32((uint32_t)(EAX));
  /* 12c89fb6 mov dword ptr [ebp - 0x98], 0x94 */
  w32((uint32_t)(EBP + -0x98), (0x94u));
  /* 12c89fc0 call dword ptr [0x12c8e0d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e0d4))), 0x12c89fc6u);
  /* 12c89fc6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c89fc8 je 0x12c89fe4 */
  if (C.zf) goto L_12c89fe4;
  /* 12c89fca cmp dword ptr [ebp - 0x88], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c89fd1 jne 0x12c89fe4 */
  if (!C.zf) goto L_12c89fe4;
  /* 12c89fd3 cmp dword ptr [ebp - 0x94], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c89fda jb 0x12c89fe4 */
  if (C.cf) goto L_12c89fe4;
  /* 12c89fdc push 1 */
  push32((uint32_t)(0x1u));
  /* 12c89fde pop eax */
  EAX = (pop32());
  /* 12c89fdf jmp 0x12c8a0e6 */
  goto L_12c8a0e6;
L_12c89fe4:;
  /* 12c89fe4 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 12c89fea push 0x1090 */
  push32((uint32_t)(0x1090u));
  /* 12c89fef push eax */
  push32((uint32_t)(EAX));
  /* 12c89ff0 push 0x12c8e3a0 */
  push32((uint32_t)(0x12c8e3a0u));
  /* 12c89ff5 call dword ptr [0x12c8e0d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e0d0))), 0x12c89ffbu);
  /* 12c89ffb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c89ffd je 0x12c8a0d3 */
  if (C.zf) goto L_12c8a0d3;
  /* 12c8a003 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12c8a005 lea ecx, [ebp - 0x122c] */
  ECX = ((uint32_t)(EBP + -0x122c));
  /* 12c8a00b cmp byte ptr [ebp - 0x122c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x122c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8a011 je 0x12c8a026 */
  if (C.zf) goto L_12c8a026;
L_12c8a013:;
  /* 12c8a013 mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 12c8a015 cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8a017 jl 0x12c8a021 */
  if ((C.sf!=C.of)) goto L_12c8a021;
  /* 12c8a019 cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8a01b jg 0x12c8a021 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c8a021;
  /* 12c8a01d sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12c8a01f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_12c8a021:;
  /* 12c8a021 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12c8a022 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8a024 jne 0x12c8a013 */
  if (!C.zf) goto L_12c8a013;
L_12c8a026:;
  /* 12c8a026 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 12c8a02c push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12c8a02e push eax */
  push32((uint32_t)(EAX));
  /* 12c8a02f push 0x12c8e388 */
  push32((uint32_t)(0x12c8e388u));
  /* 12c8a034 call 0x12c85770 */
  push32(0x12c8a039u); f_12c85770();
  /* 12c8a039 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8a03c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c8a03e jne 0x12c8a048 */
  if (!C.zf) goto L_12c8a048;
  /* 12c8a040 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 12c8a046 jmp 0x12c8a091 */
  goto L_12c8a091;
L_12c8a048:;
  /* 12c8a048 lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 12c8a04e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12c8a053 push eax */
  push32((uint32_t)(EAX));
  /* 12c8a054 push ebx */
  push32((uint32_t)(EBX));
  /* 12c8a055 call dword ptr [0x12c8e0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c8e0b8))), 0x12c8a05bu);
  /* 12c8a05b cmp byte ptr [ebp - 0x19c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x19c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8a061 lea ecx, [ebp - 0x19c] */
  ECX = ((uint32_t)(EBP + -0x19c));
  /* 12c8a067 je 0x12c8a07c */
  if (C.zf) goto L_12c8a07c;
L_12c8a069:;
  /* 12c8a069 mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 12c8a06b cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8a06d jl 0x12c8a077 */
  if ((C.sf!=C.of)) goto L_12c8a077;
  /* 12c8a06f cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8a071 jg 0x12c8a077 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c8a077;
  /* 12c8a073 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12c8a075 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_12c8a077:;
  /* 12c8a077 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12c8a078 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8a07a jne 0x12c8a069 */
  if (!C.zf) goto L_12c8a069;
L_12c8a07c:;
  /* 12c8a07c lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 12c8a082 push eax */
  push32((uint32_t)(EAX));
  /* 12c8a083 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 12c8a089 push eax */
  push32((uint32_t)(EAX));
  /* 12c8a08a call 0x12c85c30 */
  push32(0x12c8a08fu); f_12c85c30();
  /* 12c8a08f pop ecx */
  ECX = (pop32());
  /* 12c8a090 pop ecx */
  ECX = (pop32());
L_12c8a091:;
  /* 12c8a091 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a093 je 0x12c8a0d3 */
  if (C.zf) goto L_12c8a0d3;
  /* 12c8a095 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 12c8a097 push eax */
  push32((uint32_t)(EAX));
  /* 12c8a098 call 0x12c89a80 */
  push32(0x12c8a09du); f_12c89a80();
  /* 12c8a09d pop ecx */
  ECX = (pop32());
  /* 12c8a09e cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a0a0 pop ecx */
  ECX = (pop32());
  /* 12c8a0a1 je 0x12c8a0d3 */
  if (C.zf) goto L_12c8a0d3;
  /* 12c8a0a3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c8a0a4 mov ecx, eax */
  ECX = (EAX);
  /* 12c8a0a6 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8a0a8 je 0x12c8a0b8 */
  if (C.zf) goto L_12c8a0b8;
L_12c8a0aa:;
  /* 12c8a0aa cmp byte ptr [ecx], 0x3b */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8a0ad jne 0x12c8a0b3 */
  if (!C.zf) goto L_12c8a0b3;
  /* 12c8a0af mov byte ptr [ecx], bl */
  w8((uint32_t)(ECX), (BL));
  /* 12c8a0b1 jmp 0x12c8a0b4 */
  goto L_12c8a0b4;
L_12c8a0b3:;
  /* 12c8a0b3 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
L_12c8a0b4:;
  /* 12c8a0b4 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8a0b6 jne 0x12c8a0aa */
  if (!C.zf) goto L_12c8a0aa;
L_12c8a0b8:;
  /* 12c8a0b8 push 0xa */
  push32((uint32_t)(0xau));
  /* 12c8a0ba push ebx */
  push32((uint32_t)(EBX));
  /* 12c8a0bb push eax */
  push32((uint32_t)(EAX));
  /* 12c8a0bc call 0x12c8c8ba */
  push32(0x12c8a0c1u); f_12c8c8ba();
  /* 12c8a0c1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c8a0c4 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a0c7 je 0x12c8a0e6 */
  if (C.zf) goto L_12c8a0e6;
  /* 12c8a0c9 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a0cc je 0x12c8a0e6 */
  if (C.zf) goto L_12c8a0e6;
  /* 12c8a0ce cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c8a0d1 je 0x12c8a0e6 */
  if (C.zf) goto L_12c8a0e6;
L_12c8a0d3:;
  /* 12c8a0d3 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 12c8a0d6 push eax */
  push32((uint32_t)(EAX));
  /* 12c8a0d7 call 0x12c89f74 */
  push32(0x12c8a0dcu); f_12c89f74();
  /* 12c8a0dc cmp byte ptr [ebp - 4], 6 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c8a0e0 pop ecx */
  ECX = (pop32());
  /* 12c8a0e1 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c8a0e3 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12c8a0e6:;
  /* 12c8a0e6 pop ebx */
  EBX = (pop32());
  /* 12c8a0e7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c8a0e8 ret  */
  ESPCHK(0x12c89fa1u, _esp0);
  ESP += 4; return;
}

