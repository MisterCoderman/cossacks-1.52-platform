#include "recomp.h"

/* FUN_1000c541 @ 0x120fc541 (781 bytes, 277 insns) */
void f_120fc541(void) {
  FTRACE(0x120fc541u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120fc541 push ebp */
  push32((uint32_t)(EBP));
  /* 120fc542 mov ebp, esp */
  EBP = (ESP);
  /* 120fc544 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 120fc546 push 0x120fd888 */
  push32((uint32_t)(0x120fd888u));
  /* 120fc54b push 0x120f8730 */
  push32((uint32_t)(0x120f8730u));
  /* 120fc550 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 120fc556 push eax */
  push32((uint32_t)(EAX));
  /* 120fc557 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 120fc55e sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120fc561 push ebx */
  push32((uint32_t)(EBX));
  /* 120fc562 push esi */
  push32((uint32_t)(ESI));
  /* 120fc563 push edi */
  push32((uint32_t)(EDI));
  /* 120fc564 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 120fc567 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 120fc569 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc56b jne 0x120fc57b */
  if (!C.zf) goto L_120fc57b;
  /* 120fc56d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 120fc570 call 0x120f5823 */
  push32(0x120fc575u); f_120f5823();
  /* 120fc575 pop ecx */
  ECX = (pop32());
  /* 120fc576 jmp 0x120fc861 */
  jmp_ind(0x120fc861u); return;
L_120fc57b:;
  /* 120fc57b mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 120fc57e cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc580 jne 0x120fc58e */
  if (!C.zf) goto L_120fc58e;
  /* 120fc582 push ebx */
  push32((uint32_t)(EBX));
  /* 120fc583 call 0x120f4e1c */
  push32(0x120fc588u); f_120f4e1c();
  /* 120fc588 pop ecx */
  ECX = (pop32());
  /* 120fc589 jmp 0x120fc85f */
  jmp_ind(0x120fc85fu); return;
L_120fc58e:;
  /* 120fc58e mov eax, dword ptr [0x12104468] */
  EAX = (r32((uint32_t)(0x12104468)));
  /* 120fc593 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc596 jne 0x120fc6d5 */
  if (!C.zf) goto L_120fc6d5;
L_120fc59c:;
  /* 120fc59c mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 120fc59f cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc5a2 ja 0x120fc699 */
  if ((!C.cf&&!C.zf)) goto L_120fc699;
  /* 120fc5a8 push 9 */
  push32((uint32_t)(0x9u));
  /* 120fc5aa call 0x120f6edc */
  push32(0x120fc5afu); f_120f6edc();
  /* 120fc5af pop ecx */
  ECX = (pop32());
  /* 120fc5b0 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 120fc5b3 push ebx */
  push32((uint32_t)(EBX));
  /* 120fc5b4 call 0x120f755c */
  push32(0x120fc5b9u); f_120f755c();
  /* 120fc5b9 pop ecx */
  ECX = (pop32());
  /* 120fc5ba mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 120fc5bd cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc5bf je 0x120fc669 */
  if (C.zf) goto L_120fc669;
  /* 120fc5c5 cmp esi, dword ptr [0x12104460] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x12104460))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc5cb ja 0x120fc619 */
  if ((!C.cf&&!C.zf)) goto L_120fc619;
  /* 120fc5cd push esi */
  push32((uint32_t)(ESI));
  /* 120fc5ce push ebx */
  push32((uint32_t)(EBX));
  /* 120fc5cf push eax */
  push32((uint32_t)(EAX));
  /* 120fc5d0 call 0x120f7d65 */
  push32(0x120fc5d5u); f_120f7d65();
  /* 120fc5d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120fc5d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120fc5da je 0x120fc5e1 */
  if (C.zf) goto L_120fc5e1;
  /* 120fc5dc mov dword ptr [ebp - 0x24], ebx */
  w32((uint32_t)(EBP + -0x24), (EBX));
  /* 120fc5df jmp 0x120fc619 */
  goto L_120fc619;
L_120fc5e1:;
  /* 120fc5e1 push esi */
  push32((uint32_t)(ESI));
  /* 120fc5e2 call 0x120f78b0 */
  push32(0x120fc5e7u); f_120f78b0();
  /* 120fc5e7 pop ecx */
  ECX = (pop32());
  /* 120fc5e8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 120fc5eb cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc5ed je 0x120fc619 */
  if (C.zf) goto L_120fc619;
  /* 120fc5ef mov eax, dword ptr [ebx - 4] */
  EAX = (r32((uint32_t)(EBX + -0x4)));
  /* 120fc5f2 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 120fc5f3 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 120fc5f6 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc5f8 jb 0x120fc5fc */
  if (C.cf) goto L_120fc5fc;
  /* 120fc5fa mov eax, esi */
  EAX = (ESI);
L_120fc5fc:;
  /* 120fc5fc push eax */
  push32((uint32_t)(EAX));
  /* 120fc5fd push ebx */
  push32((uint32_t)(EBX));
  /* 120fc5fe push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 120fc601 call 0x120fa0d0 */
  push32(0x120fc606u); f_120fa0d0();
  /* 120fc606 push ebx */
  push32((uint32_t)(EBX));
  /* 120fc607 call 0x120f755c */
  push32(0x120fc60cu); f_120f755c();
  /* 120fc60c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 120fc60f push ebx */
  push32((uint32_t)(EBX));
  /* 120fc610 push eax */
  push32((uint32_t)(EAX));
  /* 120fc611 call 0x120f7587 */
  push32(0x120fc616u); f_120f7587();
  /* 120fc616 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120fc619:;
  /* 120fc619 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc61c jne 0x120fc669 */
  if (!C.zf) goto L_120fc669;
  /* 120fc61e cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc620 jne 0x120fc628 */
  if (!C.zf) goto L_120fc628;
  /* 120fc622 push 1 */
  push32((uint32_t)(0x1u));
  /* 120fc624 pop esi */
  ESI = (pop32());
  /* 120fc625 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_120fc628:;
  /* 120fc628 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120fc62b and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 120fc62e mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 120fc631 push esi */
  push32((uint32_t)(ESI));
  /* 120fc632 push edi */
  push32((uint32_t)(EDI));
  /* 120fc633 push dword ptr [0x12104464] */
  push32((uint32_t)(r32((uint32_t)(0x12104464))));
  /* 120fc639 call dword ptr [0x120fd0d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd0d0))), 0x120fc63fu);
  /* 120fc63f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 120fc642 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc644 je 0x120fc669 */
  if (C.zf) goto L_120fc669;
  /* 120fc646 mov eax, dword ptr [ebx - 4] */
  EAX = (r32((uint32_t)(EBX + -0x4)));
  /* 120fc649 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 120fc64a mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 120fc64d cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc64f jb 0x120fc653 */
  if (C.cf) goto L_120fc653;
  /* 120fc651 mov eax, esi */
  EAX = (ESI);
L_120fc653:;
  /* 120fc653 push eax */
  push32((uint32_t)(EAX));
  /* 120fc654 push ebx */
  push32((uint32_t)(EBX));
  /* 120fc655 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 120fc658 call 0x120fa0d0 */
  push32(0x120fc65du); f_120fa0d0();
  /* 120fc65d push ebx */
  push32((uint32_t)(EBX));
  /* 120fc65e push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 120fc661 call 0x120f7587 */
  push32(0x120fc666u); f_120f7587();
  /* 120fc666 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120fc669:;
  /* 120fc669 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 120fc66d call 0x120fc6cc */
  push32(0x120fc672u); f_120fc6cc();
  /* 120fc672 cmp dword ptr [ebp - 0x28], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc675 jne 0x120fc699 */
  if (!C.zf) goto L_120fc699;
  /* 120fc677 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc679 jne 0x120fc67e */
  if (!C.zf) goto L_120fc67e;
  /* 120fc67b push 1 */
  push32((uint32_t)(0x1u));
  /* 120fc67d pop esi */
  ESI = (pop32());
L_120fc67e:;
  /* 120fc67e add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120fc681 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 120fc684 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 120fc687 push esi */
  push32((uint32_t)(ESI));
  /* 120fc688 push ebx */
  push32((uint32_t)(EBX));
  /* 120fc689 push edi */
  push32((uint32_t)(EDI));
  /* 120fc68a push dword ptr [0x12104464] */
  push32((uint32_t)(r32((uint32_t)(0x12104464))));
  /* 120fc690 call dword ptr [0x120fd05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd05c))), 0x120fc696u);
  /* 120fc696 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_120fc699:;
  /* 120fc699 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 120fc69c cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc69e jne 0x120fc861 */
  if (!C.zf) { jmp_ind(0x120fc861u); return; }
  /* 120fc6a4 cmp dword ptr [0x1210412c], edi */
  { uint32_t _a=(r32((uint32_t)(0x1210412c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc6aa je 0x120fc861 */
  if (C.zf) { jmp_ind(0x120fc861u); return; }
  /* 120fc6b0 push esi */
  push32((uint32_t)(ESI));
  /* 120fc6b1 call 0x120f8c9c */
  push32(0x120fc6b6u); f_120f8c9c();
  /* 120fc6b6 pop ecx */
  ECX = (pop32());
  /* 120fc6b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120fc6b9 jne 0x120fc59c */
  if (!C.zf) goto L_120fc59c;
  /* 120fc6bf jmp 0x120fc85f */
  jmp_ind(0x120fc85fu); return;
  /* 120fc6c4 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 120fc6c7 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 120fc6ca xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 120fc6cc push 9 */
  push32((uint32_t)(0x9u));
  /* 120fc6ce call 0x120f6f3d */
  push32(0x120fc6d3u); f_120f6f3d();
  /* 120fc6d3 pop ecx */
  ECX = (pop32());
  /* 120fc6d4 ret  */
  ESPCHK(0x120fc541u, _esp0);
  ESP += 4; return;
L_120fc6d5:;
  /* 120fc6d5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc6d8 jne 0x120fc825 */
  if (!C.zf) goto L_120fc825;
  /* 120fc6de cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc6e1 ja 0x120fc6f5 */
  if ((!C.cf&&!C.zf)) goto L_120fc6f5;
  /* 120fc6e3 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc6e5 jbe 0x120fc6ef */
  if ((C.cf||C.zf)) goto L_120fc6ef;
  /* 120fc6e7 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120fc6ea and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 120fc6ed jmp 0x120fc6f2 */
  goto L_120fc6f2;
L_120fc6ef:;
  /* 120fc6ef push 0x10 */
  push32((uint32_t)(0x10u));
  /* 120fc6f1 pop esi */
  ESI = (pop32());
L_120fc6f2:;
  /* 120fc6f2 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_120fc6f5:;
  /* 120fc6f5 mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 120fc6f8 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc6fb ja 0x120fc7f4 */
  if ((!C.cf&&!C.zf)) goto L_120fc7f4;
  /* 120fc701 push 9 */
  push32((uint32_t)(0x9u));
  /* 120fc703 call 0x120f6edc */
  push32(0x120fc708u); f_120f6edc();
  /* 120fc708 pop ecx */
  ECX = (pop32());
  /* 120fc709 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 120fc710 lea eax, [ebp - 0x2c] */
  EAX = ((uint32_t)(EBP + -0x2c));
  /* 120fc713 push eax */
  push32((uint32_t)(EAX));
  /* 120fc714 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 120fc717 push eax */
  push32((uint32_t)(EAX));
  /* 120fc718 push ebx */
  push32((uint32_t)(EBX));
  /* 120fc719 call 0x120f82b7 */
  push32(0x120fc71eu); f_120f82b7();
  /* 120fc71e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120fc721 mov edi, eax */
  EDI = (EAX);
  /* 120fc723 mov dword ptr [ebp - 0x30], edi */
  w32((uint32_t)(EBP + -0x30), (EDI));
  /* 120fc726 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 120fc728 je 0x120fc7d8 */
  if (C.zf) goto L_120fc7d8;
  /* 120fc72e cmp esi, dword ptr [0x1210303c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x1210303c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc734 jae 0x120fc792 */
  if (!C.cf) goto L_120fc792;
  /* 120fc736 mov ebx, esi */
  EBX = (ESI);
  /* 120fc738 shr ebx, 4 */
  EBX = (sh_shr((uint32_t)(EBX), (0x4u)&0x1f, 32));
  /* 120fc73b push ebx */
  push32((uint32_t)(EBX));
  /* 120fc73c push edi */
  push32((uint32_t)(EDI));
  /* 120fc73d push dword ptr [ebp - 0x2c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x2c))));
  /* 120fc740 push dword ptr [ebp - 0x38] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x38))));
  /* 120fc743 call 0x120f867f */
  push32(0x120fc748u); f_120f867f();
  /* 120fc748 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120fc74b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120fc74d je 0x120fc757 */
  if (C.zf) goto L_120fc757;
  /* 120fc74f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120fc752 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 120fc755 jmp 0x120fc78f */
  goto L_120fc78f;
L_120fc757:;
  /* 120fc757 push ebx */
  push32((uint32_t)(EBX));
  /* 120fc758 call 0x120f8353 */
  push32(0x120fc75du); f_120f8353();
  /* 120fc75d pop ecx */
  ECX = (pop32());
  /* 120fc75e mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 120fc761 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120fc763 je 0x120fc78f */
  if (C.zf) goto L_120fc78f;
  /* 120fc765 movzx eax, byte ptr [edi] */
  EAX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 120fc768 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 120fc76b mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 120fc76e cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc770 jb 0x120fc774 */
  if (C.cf) goto L_120fc774;
  /* 120fc772 mov eax, esi */
  EAX = (ESI);
L_120fc774:;
  /* 120fc774 push eax */
  push32((uint32_t)(EAX));
  /* 120fc775 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 120fc778 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 120fc77b call 0x120fa0d0 */
  push32(0x120fc780u); f_120fa0d0();
  /* 120fc780 push edi */
  push32((uint32_t)(EDI));
  /* 120fc781 push dword ptr [ebp - 0x2c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x2c))));
  /* 120fc784 push dword ptr [ebp - 0x38] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x38))));
  /* 120fc787 call 0x120f830e */
  push32(0x120fc78cu); f_120f830e();
  /* 120fc78c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120fc78f:;
  /* 120fc78f mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_120fc792:;
  /* 120fc792 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc796 jne 0x120fc7eb */
  if (!C.zf) goto L_120fc7eb;
  /* 120fc798 push esi */
  push32((uint32_t)(ESI));
  /* 120fc799 push 0 */
  push32((uint32_t)(0x0u));
  /* 120fc79b push dword ptr [0x12104464] */
  push32((uint32_t)(r32((uint32_t)(0x12104464))));
  /* 120fc7a1 call dword ptr [0x120fd0d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd0d0))), 0x120fc7a7u);
  /* 120fc7a7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 120fc7aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120fc7ac je 0x120fc7eb */
  if (C.zf) goto L_120fc7eb;
  /* 120fc7ae movzx eax, byte ptr [edi] */
  EAX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 120fc7b1 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 120fc7b4 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 120fc7b7 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc7b9 jb 0x120fc7bd */
  if (C.cf) goto L_120fc7bd;
  /* 120fc7bb mov eax, esi */
  EAX = (ESI);
L_120fc7bd:;
  /* 120fc7bd push eax */
  push32((uint32_t)(EAX));
  /* 120fc7be push ebx */
  push32((uint32_t)(EBX));
  /* 120fc7bf push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 120fc7c2 call 0x120fa0d0 */
  push32(0x120fc7c7u); f_120fa0d0();
  /* 120fc7c7 push edi */
  push32((uint32_t)(EDI));
  /* 120fc7c8 push dword ptr [ebp - 0x2c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x2c))));
  /* 120fc7cb push dword ptr [ebp - 0x38] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x38))));
  /* 120fc7ce call 0x120f830e */
  push32(0x120fc7d3u); f_120f830e();
  /* 120fc7d3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120fc7d6 jmp 0x120fc7eb */
  goto L_120fc7eb;
L_120fc7d8:;
  /* 120fc7d8 push esi */
  push32((uint32_t)(ESI));
  /* 120fc7d9 push ebx */
  push32((uint32_t)(EBX));
  /* 120fc7da push 0 */
  push32((uint32_t)(0x0u));
  /* 120fc7dc push dword ptr [0x12104464] */
  push32((uint32_t)(r32((uint32_t)(0x12104464))));
  /* 120fc7e2 call dword ptr [0x120fd05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd05c))), 0x120fc7e8u);
  /* 120fc7e8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_120fc7eb:;
  /* 120fc7eb or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 120fc7ef call 0x120fc81a */
  push32(0x120fc7f4u); f_120fc81a();
L_120fc7f4:;
  /* 120fc7f4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 120fc7f7 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc7f9 jne 0x120fc861 */
  if (!C.zf) { jmp_ind(0x120fc861u); return; }
  /* 120fc7fb cmp dword ptr [0x1210412c], edi */
  { uint32_t _a=(r32((uint32_t)(0x1210412c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc801 je 0x120fc861 */
  if (C.zf) { jmp_ind(0x120fc861u); return; }
  /* 120fc803 push esi */
  push32((uint32_t)(ESI));
  /* 120fc804 call 0x120f8c9c */
  push32(0x120fc809u); f_120f8c9c();
  /* 120fc809 pop ecx */
  ECX = (pop32());
  /* 120fc80a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120fc80c jne 0x120fc6f5 */
  if (!C.zf) goto L_120fc6f5;
  /* 120fc812 jmp 0x120fc85f */
  jmp_ind(0x120fc85fu); return;
  /* 120fc814 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 120fc817 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 120fc81a push 9 */
  push32((uint32_t)(0x9u));
  /* 120fc81c call 0x120f6f3d */
  push32(0x120fc821u); f_120f6f3d();
  /* 120fc821 pop ecx */
  ECX = (pop32());
  /* 120fc822 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 120fc824 ret  */
  ESPCHK(0x120fc541u, _esp0);
  ESP += 4; return;
L_120fc825:;
  /* 120fc825 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120fc827 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc82a ja 0x120fc848 */
  if ((!C.cf&&!C.zf)) goto L_120fc848;
  /* 120fc82c cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc82e jne 0x120fc833 */
  if (!C.zf) goto L_120fc833;
  /* 120fc830 push 1 */
  push32((uint32_t)(0x1u));
  /* 120fc832 pop esi */
  ESI = (pop32());
L_120fc833:;
  /* 120fc833 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120fc836 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 120fc839 push esi */
  push32((uint32_t)(ESI));
  /* 120fc83a push ebx */
  push32((uint32_t)(EBX));
  /* 120fc83b push edi */
  push32((uint32_t)(EDI));
  /* 120fc83c push dword ptr [0x12104464] */
  push32((uint32_t)(r32((uint32_t)(0x12104464))));
  /* 120fc842 call dword ptr [0x120fd05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd05c))), 0x120fc848u);
L_120fc848:;
  /* 120fc848 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc84a jne 0x120fc861 */
  if (!C.zf) { jmp_ind(0x120fc861u); return; }
}

/* FUN_1000c6cc @ 0x120fc6cc (9 bytes, 4 insns) */
void f_120fc6cc(void) {
  FTRACE(0x120fc6ccu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120fc6cc push 9 */
  push32((uint32_t)(0x9u));
  /* 120fc6ce call 0x120f6f3d */
  push32(0x120fc6d3u); f_120f6f3d();
  /* 120fc6d3 pop ecx */
  ECX = (pop32());
  /* 120fc6d4 ret  */
  ESPCHK(0x120fc6ccu, _esp0);
  ESP += 4; return;
}

/* FUN_1000c81a @ 0x120fc81a (11 bytes, 5 insns) */
void f_120fc81a(void) {
  FTRACE(0x120fc81au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120fc81a push 9 */
  push32((uint32_t)(0x9u));
  /* 120fc81c call 0x120f6f3d */
  push32(0x120fc821u); f_120f6f3d();
  /* 120fc821 pop ecx */
  ECX = (pop32());
  /* 120fc822 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 120fc824 ret  */
  ESPCHK(0x120fc81au, _esp0);
  ESP += 4; return;
}

/* FUN_1000c870 @ 0x120fc870 (151 bytes, 62 insns) */
void f_120fc870(void) {
  FTRACE(0x120fc870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120fc870 push ebp */
  push32((uint32_t)(EBP));
  /* 120fc871 mov ebp, esp */
  EBP = (ESP);
  /* 120fc873 cmp dword ptr [0x1210422c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1210422c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc87a push ebx */
  push32((uint32_t)(EBX));
  /* 120fc87b push esi */
  push32((uint32_t)(ESI));
  /* 120fc87c jne 0x120fc88d */
  if (!C.zf) goto L_120fc88d;
  /* 120fc87e push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 120fc881 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 120fc884 call 0x120fa640 */
  push32(0x120fc889u); f_120fa640();
  /* 120fc889 pop ecx */
  ECX = (pop32());
  /* 120fc88a pop ecx */
  ECX = (pop32());
  /* 120fc88b jmp 0x120fc903 */
  goto L_120fc903;
L_120fc88d:;
  /* 120fc88d push 0x19 */
  push32((uint32_t)(0x19u));
  /* 120fc88f call 0x120f6edc */
  push32(0x120fc894u); f_120f6edc();
  /* 120fc894 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 120fc897 pop ecx */
  ECX = (pop32());
L_120fc898:;
  /* 120fc898 movzx bx, byte ptr [esi] */
  BX = ((uint32_t)(r8((uint32_t)(ESI))));
  /* 120fc89c test bx, bx */
  { uint32_t _r=(BX)&(BX); fl_logic(_r,16); }
  /* 120fc89f je 0x120fc8eb */
  if (C.zf) goto L_120fc8eb;
  /* 120fc8a1 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 120fc8a4 test byte ptr [eax + 0x12104341], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x12104341)))&(0x4u); fl_logic(_r,8); }
  /* 120fc8ab je 0x120fc8c7 */
  if (C.zf) goto L_120fc8c7;
  /* 120fc8ad mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 120fc8b0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120fc8b1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120fc8b3 je 0x120fc8d2 */
  if (C.zf) goto L_120fc8d2;
  /* 120fc8b5 movzx ecx, bx */
  ECX = ((uint32_t)(BX));
  /* 120fc8b8 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 120fc8bb shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 120fc8be or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120fc8c0 cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc8c3 je 0x120fc8de */
  if (C.zf) goto L_120fc8de;
  /* 120fc8c5 jmp 0x120fc8cf */
  goto L_120fc8cf;
L_120fc8c7:;
  /* 120fc8c7 movzx eax, bx */
  EAX = ((uint32_t)(BX));
  /* 120fc8ca cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc8cd je 0x120fc8eb */
  if (C.zf) goto L_120fc8eb;
L_120fc8cf:;
  /* 120fc8cf inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120fc8d0 jmp 0x120fc898 */
  goto L_120fc898;
L_120fc8d2:;
  /* 120fc8d2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 120fc8d4 call 0x120f6f3d */
  push32(0x120fc8d9u); f_120f6f3d();
  /* 120fc8d9 pop ecx */
  ECX = (pop32());
  /* 120fc8da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120fc8dc jmp 0x120fc903 */
  goto L_120fc903;
L_120fc8de:;
  /* 120fc8de push 0x19 */
  push32((uint32_t)(0x19u));
  /* 120fc8e0 call 0x120f6f3d */
  push32(0x120fc8e5u); f_120f6f3d();
  /* 120fc8e5 pop ecx */
  ECX = (pop32());
  /* 120fc8e6 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
  /* 120fc8e9 jmp 0x120fc903 */
  goto L_120fc903;
L_120fc8eb:;
  /* 120fc8eb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 120fc8ed call 0x120f6f3d */
  push32(0x120fc8f2u); f_120f6f3d();
  /* 120fc8f2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120fc8f5 pop ecx */
  ECX = (pop32());
  /* 120fc8f6 movzx ecx, bx */
  ECX = ((uint32_t)(BX));
  /* 120fc8f9 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120fc8fb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 120fc8fd sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120fc8ff not eax */
  EAX = (~(EAX));
  /* 120fc901 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_120fc903:;
  /* 120fc903 pop esi */
  ESI = (pop32());
  /* 120fc904 pop ebx */
  EBX = (pop32());
  /* 120fc905 pop ebp */
  EBP = (pop32());
  /* 120fc906 ret  */
  ESPCHK(0x120fc870u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c907 @ 0x120fc907 (43 bytes, 23 insns) */
void f_120fc907(void) {
  FTRACE(0x120fc907u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120fc907 push esi */
  push32((uint32_t)(ESI));
  /* 120fc908 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 120fc90c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 120fc90e je 0x120fc92e */
  if (C.zf) goto L_120fc92e;
  /* 120fc910 push esi */
  push32((uint32_t)(ESI));
  /* 120fc911 call 0x120f9190 */
  push32(0x120fc916u); f_120f9190();
  /* 120fc916 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120fc917 push eax */
  push32((uint32_t)(EAX));
  /* 120fc918 call 0x120f5823 */
  push32(0x120fc91du); f_120f5823();
  /* 120fc91d pop ecx */
  ECX = (pop32());
  /* 120fc91e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120fc920 pop ecx */
  ECX = (pop32());
  /* 120fc921 je 0x120fc92e */
  if (C.zf) goto L_120fc92e;
  /* 120fc923 push esi */
  push32((uint32_t)(ESI));
  /* 120fc924 push eax */
  push32((uint32_t)(EAX));
  /* 120fc925 call 0x120f9b80 */
  push32(0x120fc92au); f_120f9b80();
  /* 120fc92a pop ecx */
  ECX = (pop32());
  /* 120fc92b pop ecx */
  ECX = (pop32());
  /* 120fc92c pop esi */
  ESI = (pop32());
  /* 120fc92d ret  */
  ESPCHK(0x120fc907u, _esp0);
  ESP += 4; return;
L_120fc92e:;
  /* 120fc92e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120fc930 pop esi */
  ESI = (pop32());
  /* 120fc931 ret  */
  ESPCHK(0x120fc907u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x120fc932 (6 bytes, 1 insns) */
void f_120fc932(void) {
  FTRACE(0x120fc932u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120fc932 jmp dword ptr [0x120fd0a0] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x120fd0a0)))); return;
}

/* Unwind@1000c940 @ 0x120fc940 (8 bytes, 2 insns) */
void f_120fc940(void) {
  FTRACE(0x120fc940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120fc940 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 120fc943 jmp 0x120f2e70 */
  f_120f2e70(); return;
}

