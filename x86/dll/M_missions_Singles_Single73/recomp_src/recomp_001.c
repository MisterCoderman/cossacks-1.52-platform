#include "recomp.h"

/* FUN_100054e1 @ 0x11c354e1 (27 bytes, 13 insns) */
void f_11c354e1(void) {
  FTRACE(0x11c354e1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c354e1 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c354e5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_11c354e7:;
  /* 11c354e7 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c354ea jne 0x11c354f9 */
  if (!C.zf) goto L_11c354f9;
  /* 11c354ec inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c354ed add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c354f0 cmp ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c354f3 jl 0x11c354e7 */
  if ((C.sf!=C.of)) goto L_11c354e7;
  /* 11c354f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c354f7 pop eax */
  EAX = (pop32());
  /* 11c354f8 ret  */
  ESPCHK(0x11c354e1u, _esp0);
  ESP += 4; return;
L_11c354f9:;
  /* 11c354f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c354fb ret  */
  ESPCHK(0x11c354e1u, _esp0);
  ESP += 4; return;
}

/* FUN_100054fc @ 0x11c354fc (141 bytes, 64 insns) */
void f_11c354fc(void) {
  FTRACE(0x11c354fcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c354fc push ebp */
  push32((uint32_t)(EBP));
  /* 11c354fd mov ebp, esp */
  EBP = (ESP);
  /* 11c354ff sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c35502 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c35505 push ebx */
  push32((uint32_t)(EBX));
  /* 11c35506 push esi */
  push32((uint32_t)(ESI));
  /* 11c35507 push edi */
  push32((uint32_t)(EDI));
  /* 11c35508 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11c3550a mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c3550d pop ebx */
  EBX = (pop32());
  /* 11c3550e or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 11c35511 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11c35512 mov ecx, ebx */
  ECX = (EBX);
  /* 11c35514 mov dword ptr [ebp - 4], 3 */
  w32((uint32_t)(EBP + -0x4), (0x3u));
  /* 11c3551b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11c3551d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11c35520 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c35523 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11c35524 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11c35526 and dword ptr [ebp + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(0x0u); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
  /* 11c3552a mov ecx, edx */
  ECX = (EDX);
  /* 11c3552c shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11c3552e sub ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c35530 not esi */
  ESI = (~(ESI));
L_11c35532:;
  /* 11c35532 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11c35534 mov ecx, eax */
  ECX = (EAX);
  /* 11c35536 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 11c35538 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11c3553b mov ecx, edx */
  ECX = (EDX);
  /* 11c3553d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11c3553f or eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 11c35542 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11c35544 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11c35547 mov ecx, ebx */
  ECX = (EBX);
  /* 11c35549 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3554c shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11c3554e dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 11c35551 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11c35554 jne 0x11c35532 */
  if (!C.zf) goto L_11c35532;
  /* 11c35556 mov edi, dword ptr [ebp - 0xc] */
  EDI = (r32((uint32_t)(EBP + -0xc)));
  /* 11c35559 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c3555b pop ebx */
  EBX = (pop32());
  /* 11c3555c mov esi, edi */
  ESI = (EDI);
  /* 11c3555e push 8 */
  push32((uint32_t)(0x8u));
  /* 11c35560 pop ecx */
  ECX = (pop32());
  /* 11c35561 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
L_11c35564:;
  /* 11c35564 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c35566 jl 0x11c35577 */
  if ((C.sf!=C.of)) goto L_11c35577;
  /* 11c35568 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c3556b mov eax, ecx */
  EAX = (ECX);
  /* 11c3556d sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3556f mov eax, dword ptr [eax + edx] */
  EAX = (r32((uint32_t)(EAX + EDX*1)));
  /* 11c35572 mov dword ptr [ecx + edx], eax */
  w32((uint32_t)(ECX + EDX*1), (EAX));
  /* 11c35575 jmp 0x11c3557e */
  goto L_11c3557e;
L_11c35577:;
  /* 11c35577 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c3557a and dword ptr [ecx + eax], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + EAX*1)))&(0x0u); w32((uint32_t)(ECX + EAX*1), (_r)); fl_logic(_r,32); }
L_11c3557e:;
  /* 11c3557e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11c3557f sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c35582 jns 0x11c35564 */
  if (!C.sf) goto L_11c35564;
  /* 11c35584 pop edi */
  EDI = (pop32());
  /* 11c35585 pop esi */
  ESI = (pop32());
  /* 11c35586 pop ebx */
  EBX = (pop32());
  /* 11c35587 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c35588 ret  */
  ESPCHK(0x11c354fcu, _esp0);
  ESP += 4; return;
}

/* FUN_10005589 @ 0x11c35589 (364 bytes, 138 insns) */
void f_11c35589(void) {
  FTRACE(0x11c35589u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c35589 push ebp */
  push32((uint32_t)(EBP));
  /* 11c3558a mov ebp, esp */
  EBP = (ESP);
  /* 11c3558c sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3558f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c35592 push ebx */
  push32((uint32_t)(EBX));
  /* 11c35593 push esi */
  push32((uint32_t)(ESI));
  /* 11c35594 push edi */
  push32((uint32_t)(EDI));
  /* 11c35595 movzx ecx, word ptr [eax + 0xa] */
  ECX = ((uint32_t)(r16((uint32_t)(EAX + 0xa))));
  /* 11c35599 mov ebx, ecx */
  EBX = (ECX);
  /* 11c3559b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11c355a1 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11c355a4 mov ecx, dword ptr [eax + 6] */
  ECX = (r32((uint32_t)(EAX + 0x6)));
  /* 11c355a7 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11c355aa mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 11c355ad movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 11c355b0 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11c355b3 and ebx, 0x7fff */
  { uint32_t _r=(EBX)&(0x7fffu); EBX = (_r); fl_logic(_r,32); }
  /* 11c355b9 sub ebx, 0x3fff */
  { uint32_t _a=(EBX),_b=(0x3fffu),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c355bf mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11c355c2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11c355c5 cmp ebx, 0xffffc001 */
  { uint32_t _a=(EBX),_b=(0xffffc001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c355cb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11c355ce jne 0x11c355f6 */
  if (!C.zf) goto L_11c355f6;
  /* 11c355d0 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11c355d3 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11c355d5 push eax */
  push32((uint32_t)(EAX));
  /* 11c355d6 call 0x11c354e1 */
  push32(0x11c355dbu); f_11c354e1();
  /* 11c355db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c355dd pop ecx */
  ECX = (pop32());
  /* 11c355de jne 0x11c356b5 */
  if (!C.zf) goto L_11c356b5;
  /* 11c355e4 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11c355e7 push eax */
  push32((uint32_t)(EAX));
  /* 11c355e8 call 0x11c354d5 */
  push32(0x11c355edu); f_11c354d5();
  /* 11c355ed pop ecx */
  ECX = (pop32());
L_11c355ee:;
  /* 11c355ee push 2 */
  push32((uint32_t)(0x2u));
L_11c355f0:;
  /* 11c355f0 pop eax */
  EAX = (pop32());
  /* 11c355f1 jmp 0x11c356b7 */
  goto L_11c356b7;
L_11c355f6:;
  /* 11c355f6 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11c355f9 push eax */
  push32((uint32_t)(EAX));
  /* 11c355fa lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11c355fd push eax */
  push32((uint32_t)(EAX));
  /* 11c355fe call 0x11c354ba */
  push32(0x11c35603u); f_11c354ba();
  /* 11c35603 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 11c35606 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11c35609 push eax */
  push32((uint32_t)(EAX));
  /* 11c3560a call 0x11c3542e */
  push32(0x11c3560fu); f_11c3542e();
  /* 11c3560f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c35612 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c35614 je 0x11c35617 */
  if (C.zf) goto L_11c35617;
  /* 11c35616 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_11c35617:;
  /* 11c35617 mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 11c3561a mov ecx, eax */
  ECX = (EAX);
  /* 11c3561c sub ecx, dword ptr [edi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3561f cmp ebx, ecx */
  { uint32_t _a=(EBX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c35621 jge 0x11c3562f */
  if ((C.sf==C.of)) goto L_11c3562f;
  /* 11c35623 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11c35626 push eax */
  push32((uint32_t)(EAX));
  /* 11c35627 call 0x11c354d5 */
  push32(0x11c3562cu); f_11c354d5();
  /* 11c3562c pop ecx */
  ECX = (pop32());
  /* 11c3562d jmp 0x11c3566b */
  goto L_11c3566b;
L_11c3562f:;
  /* 11c3562f cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c35631 jg 0x11c35672 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c35672;
  /* 11c35633 sub eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c35635 mov esi, eax */
  ESI = (EAX);
  /* 11c35637 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11c3563a push eax */
  push32((uint32_t)(EAX));
  /* 11c3563b lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11c3563e push eax */
  push32((uint32_t)(EAX));
  /* 11c3563f call 0x11c354ba */
  push32(0x11c35644u); f_11c354ba();
  /* 11c35644 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11c35647 push esi */
  push32((uint32_t)(ESI));
  /* 11c35648 push eax */
  push32((uint32_t)(EAX));
  /* 11c35649 call 0x11c354fc */
  push32(0x11c3564eu); f_11c354fc();
  /* 11c3564e push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 11c35651 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11c35654 push eax */
  push32((uint32_t)(EAX));
  /* 11c35655 call 0x11c3542e */
  push32(0x11c3565au); f_11c3542e();
  /* 11c3565a mov eax, dword ptr [edi + 0xc] */
  EAX = (r32((uint32_t)(EDI + 0xc)));
  /* 11c3565d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c3565e push eax */
  push32((uint32_t)(EAX));
  /* 11c3565f lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11c35662 push eax */
  push32((uint32_t)(EAX));
  /* 11c35663 call 0x11c354fc */
  push32(0x11c35668u); f_11c354fc();
  /* 11c35668 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c3566b:;
  /* 11c3566b xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11c3566d jmp 0x11c355ee */
  goto L_11c355ee;
L_11c35672:;
  /* 11c35672 cmp ebx, dword ptr [edi] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EDI))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c35674 jl 0x11c3569e */
  if ((C.sf!=C.of)) goto L_11c3569e;
  /* 11c35676 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11c35679 push eax */
  push32((uint32_t)(EAX));
  /* 11c3567a call 0x11c354d5 */
  push32(0x11c3567fu); f_11c354d5();
  /* 11c3567f push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 11c35682 or byte ptr [ebp - 9], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))|(0x80u); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 11c35686 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11c35689 push eax */
  push32((uint32_t)(EAX));
  /* 11c3568a call 0x11c354fc */
  push32(0x11c3568fu); f_11c354fc();
  /* 11c3568f mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 11c35692 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c35695 add esi, dword ptr [edi] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c35697 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c35699 jmp 0x11c355f0 */
  goto L_11c355f0;
L_11c3569e:;
  /* 11c3569e push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 11c356a1 mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 11c356a4 and byte ptr [ebp - 9], 0x7f */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))&(0x7fu); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 11c356a8 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11c356ab push eax */
  push32((uint32_t)(EAX));
  /* 11c356ac add esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c356ae call 0x11c354fc */
  push32(0x11c356b3u); f_11c354fc();
  /* 11c356b3 pop ecx */
  ECX = (pop32());
  /* 11c356b4 pop ecx */
  ECX = (pop32());
L_11c356b5:;
  /* 11c356b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c356b7:;
  /* 11c356b7 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11c356b9 pop ecx */
  ECX = (pop32());
  /* 11c356ba sub ecx, dword ptr [edi + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c356bd mov edi, dword ptr [edi + 0x10] */
  EDI = (r32((uint32_t)(EDI + 0x10)));
  /* 11c356c0 shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11c356c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c356c5 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c356c7 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c356c9 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11c356cf or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 11c356d1 or esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)|(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 11c356d4 cmp edi, 0x40 */
  { uint32_t _a=(EDI),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c356d7 jne 0x11c356e6 */
  if (!C.zf) goto L_11c356e6;
  /* 11c356d9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c356dc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11c356df mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11c356e2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11c356e4 jmp 0x11c356f0 */
  goto L_11c356f0;
L_11c356e6:;
  /* 11c356e6 cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c356e9 jne 0x11c356f0 */
  if (!C.zf) goto L_11c356f0;
  /* 11c356eb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c356ee mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_11c356f0:;
  /* 11c356f0 pop edi */
  EDI = (pop32());
  /* 11c356f1 pop esi */
  ESI = (pop32());
  /* 11c356f2 pop ebx */
  EBX = (pop32());
  /* 11c356f3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c356f4 ret  */
  ESPCHK(0x11c35589u, _esp0);
  ESP += 4; return;
}

/* FUN_100056f5 @ 0x11c356f5 (22 bytes, 6 insns) */
void f_11c356f5(void) {
  FTRACE(0x11c356f5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c356f5 push 0x11c3f910 */
  push32((uint32_t)(0x11c3f910u));
  /* 11c356fa push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11c356fe push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11c35702 call 0x11c35589 */
  push32(0x11c35707u); f_11c35589();
  /* 11c35707 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3570a ret  */
  ESPCHK(0x11c356f5u, _esp0);
  ESP += 4; return;
}

/* FUN_1000570b @ 0x11c3570b (22 bytes, 6 insns) */
void f_11c3570b(void) {
  FTRACE(0x11c3570bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3570b push 0x11c3f928 */
  push32((uint32_t)(0x11c3f928u));
  /* 11c35710 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11c35714 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11c35718 call 0x11c35589 */
  push32(0x11c3571du); f_11c35589();
  /* 11c3571d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c35720 ret  */
  ESPCHK(0x11c3570bu, _esp0);
  ESP += 4; return;
}

/* FUN_10005721 @ 0x11c35721 (45 bytes, 21 insns) */
void f_11c35721(void) {
  FTRACE(0x11c35721u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c35721 push ebp */
  push32((uint32_t)(EBP));
  /* 11c35722 mov ebp, esp */
  EBP = (ESP);
  /* 11c35724 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c35727 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c35729 push eax */
  push32((uint32_t)(EAX));
  /* 11c3572a push eax */
  push32((uint32_t)(EAX));
  /* 11c3572b push eax */
  push32((uint32_t)(EAX));
  /* 11c3572c push eax */
  push32((uint32_t)(EAX));
  /* 11c3572d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c35730 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 11c35733 push eax */
  push32((uint32_t)(EAX));
  /* 11c35734 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11c35737 push eax */
  push32((uint32_t)(EAX));
  /* 11c35738 call 0x11c3939b */
  push32(0x11c3573du); f_11c3939b();
  /* 11c3573d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c35740 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11c35743 push eax */
  push32((uint32_t)(EAX));
  /* 11c35744 call 0x11c356f5 */
  push32(0x11c35749u); f_11c356f5();
  /* 11c35749 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3574c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c3574d ret  */
  ESPCHK(0x11c35721u, _esp0);
  ESP += 4; return;
}

/* FUN_1000574e @ 0x11c3574e (45 bytes, 21 insns) */
void f_11c3574e(void) {
  FTRACE(0x11c3574eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3574e push ebp */
  push32((uint32_t)(EBP));
  /* 11c3574f mov ebp, esp */
  EBP = (ESP);
  /* 11c35751 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c35754 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c35756 push eax */
  push32((uint32_t)(EAX));
  /* 11c35757 push eax */
  push32((uint32_t)(EAX));
  /* 11c35758 push eax */
  push32((uint32_t)(EAX));
  /* 11c35759 push eax */
  push32((uint32_t)(EAX));
  /* 11c3575a push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c3575d lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 11c35760 push eax */
  push32((uint32_t)(EAX));
  /* 11c35761 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11c35764 push eax */
  push32((uint32_t)(EAX));
  /* 11c35765 call 0x11c3939b */
  push32(0x11c3576au); f_11c3939b();
  /* 11c3576a push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c3576d lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11c35770 push eax */
  push32((uint32_t)(EAX));
  /* 11c35771 call 0x11c3570b */
  push32(0x11c35776u); f_11c3570b();
  /* 11c35776 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c35779 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c3577a ret  */
  ESPCHK(0x11c3574eu, _esp0);
  ESP += 4; return;
}

/* FUN_1000577b @ 0x11c3577b (119 bytes, 57 insns) */
void f_11c3577b(void) {
  FTRACE(0x11c3577bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3577b push ebp */
  push32((uint32_t)(EBP));
  /* 11c3577c mov ebp, esp */
  EBP = (ESP);
  /* 11c3577e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c35781 push ebx */
  push32((uint32_t)(EBX));
  /* 11c35782 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c35785 push esi */
  push32((uint32_t)(ESI));
  /* 11c35786 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c35789 mov ecx, dword ptr [edx + 0xc] */
  ECX = (r32((uint32_t)(EDX + 0xc)));
  /* 11c3578c push edi */
  push32((uint32_t)(EDI));
  /* 11c3578d lea edi, [esi + 1] */
  EDI = ((uint32_t)(ESI + 0x1));
  /* 11c35790 mov byte ptr [esi], 0x30 */
  w8((uint32_t)(ESI), (0x30u));
  /* 11c35793 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11c35795 mov eax, edi */
  EAX = (EDI);
  /* 11c35797 jle 0x11c357b8 */
  if ((C.zf||C.sf!=C.of)) goto L_11c357b8;
  /* 11c35799 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11c3579c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11c3579e:;
  /* 11c3579e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11c357a0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11c357a2 je 0x11c357aa */
  if (C.zf) goto L_11c357aa;
  /* 11c357a4 movsx edx, dl */
  EDX = ((uint32_t)(int32_t)(int8_t)(DL));
  /* 11c357a7 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c357a8 jmp 0x11c357ad */
  goto L_11c357ad;
L_11c357aa:;
  /* 11c357aa push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11c357ac pop edx */
  EDX = (pop32());
L_11c357ad:;
  /* 11c357ad mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11c357af inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c357b0 dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 11c357b3 jne 0x11c3579e */
  if (!C.zf) goto L_11c3579e;
  /* 11c357b5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_11c357b8:;
  /* 11c357b8 and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 11c357bb test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11c357bd jl 0x11c357d1 */
  if ((C.sf!=C.of)) goto L_11c357d1;
  /* 11c357bf cmp byte ptr [ecx], 0x35 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c357c2 jl 0x11c357d1 */
  if ((C.sf!=C.of)) goto L_11c357d1;
L_11c357c4:;
  /* 11c357c4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c357c5 cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c357c8 jne 0x11c357cf */
  if (!C.zf) goto L_11c357cf;
  /* 11c357ca mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 11c357cd jmp 0x11c357c4 */
  goto L_11c357c4;
L_11c357cf:;
  /* 11c357cf inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_11c357d1:;
  /* 11c357d1 cmp byte ptr [esi], 0x31 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c357d4 jne 0x11c357db */
  if (!C.zf) goto L_11c357db;
  /* 11c357d6 inc dword ptr [edx + 4] */
  { uint32_t _r=(r32((uint32_t)(EDX + 0x4)))+1; w32((uint32_t)(EDX + 0x4), (_r)); fl_inc(_r,32); }
  /* 11c357d9 jmp 0x11c357ed */
  goto L_11c357ed;
L_11c357db:;
  /* 11c357db push edi */
  push32((uint32_t)(EDI));
  /* 11c357dc call 0x11c35da0 */
  push32(0x11c357e1u); f_11c35da0();
  /* 11c357e1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c357e2 push eax */
  push32((uint32_t)(EAX));
  /* 11c357e3 push edi */
  push32((uint32_t)(EDI));
  /* 11c357e4 push esi */
  push32((uint32_t)(ESI));
  /* 11c357e5 call 0x11c35a60 */
  push32(0x11c357eau); f_11c35a60();
  /* 11c357ea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c357ed:;
  /* 11c357ed pop edi */
  EDI = (pop32());
  /* 11c357ee pop esi */
  ESI = (pop32());
  /* 11c357ef pop ebx */
  EBX = (pop32());
  /* 11c357f0 pop ebp */
  EBP = (pop32());
  /* 11c357f1 ret  */
  ESPCHK(0x11c3577bu, _esp0);
  ESP += 4; return;
}

/* FUN_100057f2 @ 0x11c357f2 (92 bytes, 41 insns) */
void f_11c357f2(void) {
  FTRACE(0x11c357f2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c357f2 push ebp */
  push32((uint32_t)(EBP));
  /* 11c357f3 mov ebp, esp */
  EBP = (ESP);
  /* 11c357f5 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c357f8 push esi */
  push32((uint32_t)(ESI));
  /* 11c357f9 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11c357fc push edi */
  push32((uint32_t)(EDI));
  /* 11c357fd push eax */
  push32((uint32_t)(EAX));
  /* 11c357fe lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11c35801 push eax */
  push32((uint32_t)(EAX));
  /* 11c35802 call 0x11c3584e */
  push32(0x11c35807u); f_11c3584e();
  /* 11c35807 pop ecx */
  ECX = (pop32());
  /* 11c35808 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11c3580b pop ecx */
  ECX = (pop32());
  /* 11c3580c lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
  /* 11c3580f push eax */
  push32((uint32_t)(EAX));
  /* 11c35810 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c35812 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11c35814 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c35817 mov edi, esp */
  EDI = (ESP);
  /* 11c35819 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11c3581a movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11c3581b movsw word ptr es:[edi], word ptr [esi] */
  w16(EDI, r16(ESI)); ESI+=(C.df?-2:2); EDI+=(C.df?-2:2);
  /* 11c3581d call 0x11c3986c */
  push32(0x11c35822u); f_11c3986c();
  /* 11c35822 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11c35825 mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 11c35828 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 11c3582b movsx eax, byte ptr [ebp - 0x26] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x26))));
  /* 11c3582f mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11c35831 movsx eax, word ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x28))));
  /* 11c35835 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 11c35838 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 11c3583b push eax */
  push32((uint32_t)(EAX));
  /* 11c3583c push edi */
  push32((uint32_t)(EDI));
  /* 11c3583d call 0x11c35910 */
  push32(0x11c35842u); f_11c35910();
  /* 11c35842 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c35845 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
  /* 11c35848 mov eax, esi */
  EAX = (ESI);
  /* 11c3584a pop edi */
  EDI = (pop32());
  /* 11c3584b pop esi */
  ESI = (pop32());
  /* 11c3584c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c3584d ret  */
  ESPCHK(0x11c357f2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000584e @ 0x11c3584e (182 bytes, 70 insns) */
void f_11c3584e(void) {
  FTRACE(0x11c3584eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3584e push ebp */
  push32((uint32_t)(EBP));
  /* 11c3584f mov ebp, esp */
  EBP = (ESP);
  /* 11c35851 push ecx */
  push32((uint32_t)(ECX));
  /* 11c35852 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c35855 push ebx */
  push32((uint32_t)(EBX));
  /* 11c35856 push esi */
  push32((uint32_t)(ESI));
  /* 11c35857 push edi */
  push32((uint32_t)(EDI));
  /* 11c35858 mov ax, word ptr [edx + 6] */
  AX = (r16((uint32_t)(EDX + 0x6)));
  /* 11c3585c mov edi, 0x7ff */
  EDI = (0x7ffu);
  /* 11c35861 mov ecx, eax */
  ECX = (EAX);
  /* 11c35863 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11c35868 shr ecx, 4 */
  ECX = (sh_shr((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11c3586b and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11c3586d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11c35870 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11c35873 mov edx, dword ptr [edx] */
  EDX = (r32((uint32_t)(EDX)));
  /* 11c35875 movzx ebx, cx */
  EBX = ((uint32_t)(CX));
  /* 11c35878 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11c3587d and eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c35882 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11c35884 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 11c35887 je 0x11c3589c */
  if (C.zf) goto L_11c3589c;
  /* 11c35889 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3588b je 0x11c35895 */
  if (C.zf) goto L_11c35895;
  /* 11c3588d lea edi, [ecx + 0x3c00] */
  EDI = ((uint32_t)(ECX + 0x3c00));
  /* 11c35893 jmp 0x11c358bd */
  goto L_11c358bd;
L_11c35895:;
  /* 11c35895 mov edi, 0x7fff */
  EDI = (0x7fffu);
  /* 11c3589a jmp 0x11c358bd */
  goto L_11c358bd;
L_11c3589c:;
  /* 11c3589c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c3589e cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c358a0 jne 0x11c358b4 */
  if (!C.zf) goto L_11c358b4;
  /* 11c358a2 cmp edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c358a4 jne 0x11c358b4 */
  if (!C.zf) goto L_11c358b4;
  /* 11c358a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c358a9 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 11c358ac mov dword ptr [eax], ebx */
  w32((uint32_t)(EAX), (EBX));
  /* 11c358ae mov word ptr [eax + 8], bx */
  w16((uint32_t)(EAX + 0x8), (BX));
  /* 11c358b2 jmp 0x11c358ff */
  goto L_11c358ff;
L_11c358b4:;
  /* 11c358b4 lea edi, [ecx + 0x3c01] */
  EDI = ((uint32_t)(ECX + 0x3c01));
  /* 11c358ba mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
L_11c358bd:;
  /* 11c358bd mov ecx, edx */
  ECX = (EDX);
  /* 11c358bf shr ecx, 0x15 */
  ECX = (sh_shr((uint32_t)(ECX), (0x15u)&0x1f, 32));
  /* 11c358c2 shl eax, 0xb */
  EAX = (sh_shl((uint32_t)(EAX), (0xbu)&0x1f, 32));
  /* 11c358c5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11c358c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c358ca or ecx, dword ptr [ebp - 4] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x4))); ECX = (_r); fl_logic(_r,32); }
  /* 11c358cd shl edx, 0xb */
  EDX = (sh_shl((uint32_t)(EDX), (0xbu)&0x1f, 32));
  /* 11c358d0 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11c358d3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11c358d5:;
  /* 11c358d5 test esi, ecx */
  { uint32_t _r=(ESI)&(ECX); fl_logic(_r,32); }
  /* 11c358d7 jne 0x11c358f6 */
  if (!C.zf) goto L_11c358f6;
  /* 11c358d9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11c358db add ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c358dd mov ebx, edx */
  EBX = (EDX);
  /* 11c358df shr ebx, 0x1f */
  EBX = (sh_shr((uint32_t)(EBX), (0x1fu)&0x1f, 32));
  /* 11c358e2 or ebx, ecx */
  { uint32_t _r=(EBX)|(ECX); EBX = (_r); fl_logic(_r,32); }
  /* 11c358e4 lea ecx, [edx + edx] */
  ECX = ((uint32_t)(EDX + EDX*1));
  /* 11c358e7 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11c358e9 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 11c358ec add edi, 0xffff */
  { uint32_t _a=(EDI),_b=(0xffffu),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c358f2 mov ecx, ebx */
  ECX = (EBX);
  /* 11c358f4 jmp 0x11c358d5 */
  goto L_11c358d5;
L_11c358f6:;
  /* 11c358f6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c358f9 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11c358fb mov word ptr [eax + 8], cx */
  w16((uint32_t)(EAX + 0x8), (CX));
L_11c358ff:;
  /* 11c358ff pop edi */
  EDI = (pop32());
  /* 11c35900 pop esi */
  ESI = (pop32());
  /* 11c35901 pop ebx */
  EBX = (pop32());
  /* 11c35902 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c35903 ret  */
  ESPCHK(0x11c3584eu, _esp0);
  ESP += 4; return;
}

/* FUN_10005910 @ 0x11c35910 (7 bytes, 3 insns) */
void f_11c35910(void) {
  FTRACE(0x11c35910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c35910 push edi */
  push32((uint32_t)(EDI));
  /* 11c35911 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c35915 jmp 0x11c35981 */
  jmp_ind(0x11c35981u); return;
}

/* FUN_10005920 @ 0x11c35920 (224 bytes, 84 insns) */
void f_11c35920(void) {
  FTRACE(0x11c35920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c35920 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c35924 push edi */
  push32((uint32_t)(EDI));
  /* 11c35925 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11c3592b je 0x11c3593c */
  if (C.zf) goto L_11c3593c;
L_11c3592d:;
  /* 11c3592d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11c3592f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c35930 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c35932 je 0x11c3596f */
  if (C.zf) goto L_11c3596f;
  /* 11c35934 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11c3593a jne 0x11c3592d */
  if (!C.zf) goto L_11c3592d;
L_11c3593c:;
  /* 11c3593c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11c3593e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11c35943 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c35945 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c35948 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11c3594a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3594d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11c35952 je 0x11c3593c */
  if (C.zf) goto L_11c3593c;
  /* 11c35954 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11c35957 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c35959 je 0x11c3597e */
  if (C.zf) goto L_11c3597e;
  /* 11c3595b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11c3595d je 0x11c35979 */
  if (C.zf) goto L_11c35979;
  /* 11c3595f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11c35964 je 0x11c35974 */
  if (C.zf) goto L_11c35974;
  /* 11c35966 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11c3596b je 0x11c3596f */
  if (C.zf) goto L_11c3596f;
  /* 11c3596d jmp 0x11c3593c */
  goto L_11c3593c;
L_11c3596f:;
  /* 11c3596f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11c35972 jmp 0x11c35981 */
  goto L_11c35981;
L_11c35974:;
  /* 11c35974 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11c35977 jmp 0x11c35981 */
  goto L_11c35981;
L_11c35979:;
  /* 11c35979 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 11c3597c jmp 0x11c35981 */
  goto L_11c35981;
L_11c3597e:;
  /* 11c3597e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11c35981:;
  /* 11c35981 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11c35985 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11c3598b je 0x11c359a6 */
  if (C.zf) goto L_11c359a6;
L_11c3598d:;
  /* 11c3598d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11c3598f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c35990 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11c35992 je 0x11c359f8 */
  if (C.zf) goto L_11c359f8;
  /* 11c35994 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11c35996 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c35997 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11c3599d jne 0x11c3598d */
  if (!C.zf) goto L_11c3598d;
  /* 11c3599f jmp 0x11c359a6 */
  goto L_11c359a6;
L_11c359a1:;
  /* 11c359a1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11c359a3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11c359a6:;
  /* 11c359a6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11c359ab mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11c359ad add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c359af xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c359b2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11c359b4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11c359b6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c359b9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11c359be je 0x11c359a1 */
  if (C.zf) goto L_11c359a1;
  /* 11c359c0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11c359c2 je 0x11c359f8 */
  if (C.zf) goto L_11c359f8;
  /* 11c359c4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11c359c6 je 0x11c359ef */
  if (C.zf) goto L_11c359ef;
  /* 11c359c8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11c359ce je 0x11c359e2 */
  if (C.zf) goto L_11c359e2;
  /* 11c359d0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11c359d6 je 0x11c359da */
  if (C.zf) goto L_11c359da;
  /* 11c359d8 jmp 0x11c359a1 */
  goto L_11c359a1;
L_11c359da:;
  /* 11c359da mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11c359dc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c359e0 pop edi */
  EDI = (pop32());
  /* 11c359e1 ret  */
  ESPCHK(0x11c35920u, _esp0);
  ESP += 4; return;
L_11c359e2:;
  /* 11c359e2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11c359e5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c359e9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 11c359ed pop edi */
  EDI = (pop32());
  /* 11c359ee ret  */
  ESPCHK(0x11c35920u, _esp0);
  ESP += 4; return;
L_11c359ef:;
  /* 11c359ef mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11c359f2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c359f6 pop edi */
  EDI = (pop32());
  /* 11c359f7 ret  */
  ESPCHK(0x11c35920u, _esp0);
  ESP += 4; return;
L_11c359f8:;
  /* 11c359f8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11c359fa mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c359fe pop edi */
  EDI = (pop32());
  /* 11c359ff ret  */
  ESPCHK(0x11c35920u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x11c35a00 (88 bytes, 40 insns) */
void f_11c35a00(void) {
  FTRACE(0x11c35a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c35a00 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11c35a04 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c35a08 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11c35a0a je 0x11c35a53 */
  if (C.zf) goto L_11c35a53;
  /* 11c35a0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c35a0e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11c35a12 push edi */
  push32((uint32_t)(EDI));
  /* 11c35a13 mov edi, ecx */
  EDI = (ECX);
  /* 11c35a15 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c35a18 jb 0x11c35a47 */
  if (C.cf) goto L_11c35a47;
  /* 11c35a1a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c35a1c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11c35a1f je 0x11c35a29 */
  if (C.zf) goto L_11c35a29;
  /* 11c35a21 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11c35a23:;
  /* 11c35a23 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c35a25 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c35a26 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c35a27 jne 0x11c35a23 */
  if (!C.zf) goto L_11c35a23;
L_11c35a29:;
  /* 11c35a29 mov ecx, eax */
  ECX = (EAX);
  /* 11c35a2b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11c35a2e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c35a30 mov ecx, eax */
  ECX = (EAX);
  /* 11c35a32 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11c35a35 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c35a37 mov ecx, edx */
  ECX = (EDX);
  /* 11c35a39 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11c35a3c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c35a3f je 0x11c35a47 */
  if (C.zf) goto L_11c35a47;
  /* 11c35a41 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11c35a43 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11c35a45 je 0x11c35a4d */
  if (C.zf) goto L_11c35a4d;
L_11c35a47:;
  /* 11c35a47 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c35a49 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c35a4a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11c35a4b jne 0x11c35a47 */
  if (!C.zf) goto L_11c35a47;
L_11c35a4d:;
  /* 11c35a4d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c35a51 pop edi */
  EDI = (pop32());
  /* 11c35a52 ret  */
  ESPCHK(0x11c35a00u, _esp0);
  ESP += 4; return;
L_11c35a53:;
  /* 11c35a53 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c35a57 ret  */
  ESPCHK(0x11c35a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a60 @ 0x11c35a60 (664 bytes, 263 insns) [15 switch table(s)] */
void f_11c35a60(void) {
  FTRACE(0x11c35a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c35a60 push ebp */
  push32((uint32_t)(EBP));
  /* 11c35a61 mov ebp, esp */
  EBP = (ESP);
  /* 11c35a63 push edi */
  push32((uint32_t)(EDI));
  /* 11c35a64 push esi */
  push32((uint32_t)(ESI));
  /* 11c35a65 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11c35a68 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c35a6b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c35a6e mov eax, ecx */
  EAX = (ECX);
  /* 11c35a70 mov edx, ecx */
  EDX = (ECX);
  /* 11c35a72 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c35a74 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c35a76 jbe 0x11c35a80 */
  if ((C.cf||C.zf)) goto L_11c35a80;
  /* 11c35a78 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c35a7a jb 0x11c35bf8 */
  if (C.cf) goto L_11c35bf8;
L_11c35a80:;
  /* 11c35a80 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11c35a86 jne 0x11c35a9c */
  if (!C.zf) goto L_11c35a9c;
  /* 11c35a88 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c35a8b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11c35a8e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c35a91 jb 0x11c35abc */
  if (C.cf) goto L_11c35abc;
  /* 11c35a93 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c35a95 jmp dword ptr [edx*4 + 0x11c35ba8] */
  switch (EDX) {
    case 0: goto L_11c35bb8;
    case 1: goto L_11c35bc0;
    case 2: goto L_11c35bcc;
    case 3: goto L_11c35be0;
    default: x86_unimpl("switch@0x11c35a95 out of table"); return;
  }
L_11c35a9c:;
  /* 11c35a9c mov eax, edi */
  EAX = (EDI);
  /* 11c35a9e mov edx, 3 */
  EDX = (0x3u);
  /* 11c35aa3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c35aa6 jb 0x11c35ab4 */
  if (C.cf) goto L_11c35ab4;
  /* 11c35aa8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11c35aab add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c35aad jmp dword ptr [eax*4 + 0x11c35ac0] */
  switch (EAX) {
    case 1: goto L_11c35ad0;
    case 2: goto L_11c35afc;
    case 3: goto L_11c35b20;
    default: x86_unimpl("switch@0x11c35aad out of table"); return;
  }
L_11c35ab4:;
  /* 11c35ab4 jmp dword ptr [ecx*4 + 0x11c35bb8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11c35bb8)))); return;
  /* 11c35abb nop  */
  /* nop */
L_11c35abc:;
  /* 11c35abc jmp dword ptr [ecx*4 + 0x11c35b3c] */
  switch (ECX) {
    case 0: goto L_11c35b9f;
    case 1: goto L_11c35b8c;
    case 2: goto L_11c35b84;
    case 3: goto L_11c35b7c;
    case 4: goto L_11c35b74;
    case 5: goto L_11c35b6c;
    case 6: goto L_11c35b64;
    case 7: goto L_11c35b5c;
    default: x86_unimpl("switch@0x11c35abc out of table"); return;
  }
  /* 11c35ac3 nop  */
  /* nop */
L_11c35ad0:;
  /* 11c35ad0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11c35ad2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c35ad4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c35ad6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11c35ad9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11c35adc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11c35adf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c35ae2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11c35ae5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c35ae8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c35aeb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c35aee jb 0x11c35abc */
  if (C.cf) goto L_11c35abc;
  /* 11c35af0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c35af2 jmp dword ptr [edx*4 + 0x11c35ba8] */
  switch (EDX) {
    case 0: goto L_11c35bb8;
    case 1: goto L_11c35bc0;
    case 2: goto L_11c35bcc;
    case 3: goto L_11c35be0;
    default: x86_unimpl("switch@0x11c35af2 out of table"); return;
  }
  /* 11c35af9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c35afc:;
  /* 11c35afc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11c35afe mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c35b00 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c35b02 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11c35b05 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c35b08 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11c35b0b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c35b0e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c35b11 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c35b14 jb 0x11c35abc */
  if (C.cf) goto L_11c35abc;
  /* 11c35b16 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c35b18 jmp dword ptr [edx*4 + 0x11c35ba8] */
  switch (EDX) {
    case 0: goto L_11c35bb8;
    case 1: goto L_11c35bc0;
    case 2: goto L_11c35bcc;
    case 3: goto L_11c35be0;
    default: x86_unimpl("switch@0x11c35b18 out of table"); return;
  }
  /* 11c35b1f nop  */
  /* nop */
L_11c35b20:;
  /* 11c35b20 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11c35b22 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c35b24 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c35b26 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c35b27 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c35b2a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c35b2b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c35b2e jb 0x11c35abc */
  if (C.cf) goto L_11c35abc;
  /* 11c35b30 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c35b32 jmp dword ptr [edx*4 + 0x11c35ba8] */
  switch (EDX) {
    case 0: goto L_11c35bb8;
    case 1: goto L_11c35bc0;
    case 2: goto L_11c35bcc;
    case 3: goto L_11c35be0;
    default: x86_unimpl("switch@0x11c35b32 out of table"); return;
  }
  /* 11c35b39 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c35b5c:;
  /* 11c35b5c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11c35b60 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11c35b64:;
  /* 11c35b64 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11c35b68 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11c35b6c:;
  /* 11c35b6c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11c35b70 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11c35b74:;
  /* 11c35b74 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11c35b78 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11c35b7c:;
  /* 11c35b7c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11c35b80 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11c35b84:;
  /* 11c35b84 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11c35b88 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11c35b8c:;
  /* 11c35b8c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11c35b90 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11c35b94 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11c35b9b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c35b9d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11c35b9f:;
  /* 11c35b9f jmp dword ptr [edx*4 + 0x11c35ba8] */
  switch (EDX) {
    case 0: goto L_11c35bb8;
    case 1: goto L_11c35bc0;
    case 2: goto L_11c35bcc;
    case 3: goto L_11c35be0;
    default: x86_unimpl("switch@0x11c35b9f out of table"); return;
  }
  /* 11c35ba6 mov edi, edi */
  EDI = (EDI);
L_11c35bb8:;
  /* 11c35bb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c35bbb pop esi */
  ESI = (pop32());
  /* 11c35bbc pop edi */
  EDI = (pop32());
  /* 11c35bbd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c35bbe ret  */
  ESPCHK(0x11c35a60u, _esp0);
  ESP += 4; return;
  /* 11c35bbf nop  */
  /* nop */
L_11c35bc0:;
  /* 11c35bc0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c35bc2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c35bc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c35bc7 pop esi */
  ESI = (pop32());
  /* 11c35bc8 pop edi */
  EDI = (pop32());
  /* 11c35bc9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c35bca ret  */
  ESPCHK(0x11c35a60u, _esp0);
  ESP += 4; return;
  /* 11c35bcb nop  */
  /* nop */
L_11c35bcc:;
  /* 11c35bcc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c35bce mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c35bd0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11c35bd3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11c35bd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c35bd9 pop esi */
  ESI = (pop32());
  /* 11c35bda pop edi */
  EDI = (pop32());
  /* 11c35bdb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c35bdc ret  */
  ESPCHK(0x11c35a60u, _esp0);
  ESP += 4; return;
  /* 11c35bdd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c35be0:;
  /* 11c35be0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c35be2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c35be4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11c35be7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11c35bea mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11c35bed mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11c35bf0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c35bf3 pop esi */
  ESI = (pop32());
  /* 11c35bf4 pop edi */
  EDI = (pop32());
  /* 11c35bf5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c35bf6 ret  */
  ESPCHK(0x11c35a60u, _esp0);
  ESP += 4; return;
  /* 11c35bf7 nop  */
  /* nop */
L_11c35bf8:;
  /* 11c35bf8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11c35bfc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11c35c00 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11c35c06 jne 0x11c35c2c */
  if (!C.zf) goto L_11c35c2c;
  /* 11c35c08 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c35c0b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11c35c0e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c35c11 jb 0x11c35c20 */
  if (C.cf) goto L_11c35c20;
  /* 11c35c13 std  */
  C.df=1;
  /* 11c35c14 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c35c16 cld  */
  C.df=0;
  /* 11c35c17 jmp dword ptr [edx*4 + 0x11c35d40] */
  switch (EDX) {
    case 0: goto L_11c35d50;
    case 1: goto L_11c35d58;
    case 2: goto L_11c35d68;
    case 3: goto L_11c35d7c;
    default: x86_unimpl("switch@0x11c35c17 out of table"); return;
  }
  /* 11c35c1e mov edi, edi */
  EDI = (EDI);
L_11c35c20:;
  /* 11c35c20 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c35c22 jmp dword ptr [ecx*4 + 0x11c35cf0] */
  switch (ECX) {
    case 0: goto L_11c35d37;
    default: x86_unimpl("switch@0x11c35c22 out of table"); return;
  }
  /* 11c35c29 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c35c2c:;
  /* 11c35c2c mov eax, edi */
  EAX = (EDI);
  /* 11c35c2e mov edx, 3 */
  EDX = (0x3u);
  /* 11c35c33 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c35c36 jb 0x11c35c44 */
  if (C.cf) goto L_11c35c44;
  /* 11c35c38 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11c35c3b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c35c3d jmp dword ptr [eax*4 + 0x11c35c48] */
  switch (EAX) {
    case 1: goto L_11c35c58;
    case 2: goto L_11c35c78;
    case 3: goto L_11c35ca0;
    default: x86_unimpl("switch@0x11c35c3d out of table"); return;
  }
L_11c35c44:;
  /* 11c35c44 jmp dword ptr [ecx*4 + 0x11c35d40] */
  switch (ECX) {
    case 0: goto L_11c35d50;
    case 1: goto L_11c35d58;
    case 2: goto L_11c35d68;
    case 3: goto L_11c35d7c;
    default: x86_unimpl("switch@0x11c35c44 out of table"); return;
  }
  /* 11c35c4b nop  */
  /* nop */
L_11c35c58:;
  /* 11c35c58 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11c35c5b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11c35c5d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11c35c60 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11c35c61 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c35c64 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11c35c65 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c35c68 jb 0x11c35c20 */
  if (C.cf) goto L_11c35c20;
  /* 11c35c6a std  */
  C.df=1;
  /* 11c35c6b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c35c6d cld  */
  C.df=0;
  /* 11c35c6e jmp dword ptr [edx*4 + 0x11c35d40] */
  switch (EDX) {
    case 0: goto L_11c35d50;
    case 1: goto L_11c35d58;
    case 2: goto L_11c35d68;
    case 3: goto L_11c35d7c;
    default: x86_unimpl("switch@0x11c35c6e out of table"); return;
  }
  /* 11c35c75 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c35c78:;
  /* 11c35c78 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11c35c7b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11c35c7d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11c35c80 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11c35c83 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c35c86 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11c35c89 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c35c8c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c35c8f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c35c92 jb 0x11c35c20 */
  if (C.cf) goto L_11c35c20;
  /* 11c35c94 std  */
  C.df=1;
  /* 11c35c95 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c35c97 cld  */
  C.df=0;
  /* 11c35c98 jmp dword ptr [edx*4 + 0x11c35d40] */
  switch (EDX) {
    case 0: goto L_11c35d50;
    case 1: goto L_11c35d58;
    case 2: goto L_11c35d68;
    case 3: goto L_11c35d7c;
    default: x86_unimpl("switch@0x11c35c98 out of table"); return;
  }
  /* 11c35c9f nop  */
  /* nop */
L_11c35ca0:;
  /* 11c35ca0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11c35ca3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11c35ca5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11c35ca8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11c35cab mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11c35cae mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11c35cb1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c35cb4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11c35cb7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c35cba sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c35cbd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c35cc0 jb 0x11c35c20 */
  if (C.cf) goto L_11c35c20;
  /* 11c35cc6 std  */
  C.df=1;
  /* 11c35cc7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c35cc9 cld  */
  C.df=0;
  /* 11c35cca jmp dword ptr [edx*4 + 0x11c35d40] */
  switch (EDX) {
    case 0: goto L_11c35d50;
    case 1: goto L_11c35d58;
    case 2: goto L_11c35d68;
    case 3: goto L_11c35d7c;
    default: x86_unimpl("switch@0x11c35cca out of table"); return;
  }
  /* 11c35cd1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11c35cd4 hlt  */
  x86_unimpl("hlt @ 0x11c35cd4");
  /* 11c35cd5 pop esp */
  ESP = (pop32());
  /* 11c35cd6 ret  */
  ESPCHK(0x11c35a60u, _esp0);
  ESP += 4; return;
  /* 11c35cd7 adc esp, edi */
  { uint32_t _a=(ESP),_b=(EDI),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c35cd9 pop esp */
  ESP = (pop32());
  /* 11c35cda ret  */
  ESPCHK(0x11c35a60u, _esp0);
  ESP += 4; return;
  /* 11c35cdb adc dword ptr [ebx*2 + 0x5d0c11c3], eax */
  { uint32_t _a=(r32((uint32_t)(EBX*2 + 0x5d0c11c3))),_b=(EAX),_r=_a+_b+C.cf; w32((uint32_t)(EBX*2 + 0x5d0c11c3), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c35ce2 ret  */
  ESPCHK(0x11c35a60u, _esp0);
  ESP += 4; return;
  /* 11c35ce3 adc dword ptr [ebx*2 + 0x5d1c11c3], edx */
  { uint32_t _a=(r32((uint32_t)(EBX*2 + 0x5d1c11c3))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(EBX*2 + 0x5d1c11c3), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c35cea ret  */
  ESPCHK(0x11c35a60u, _esp0);
  ESP += 4; return;
  /* 11c35cec and al, 0x5d */
  { uint32_t _r=(AL)&(0x5du); AL = (_r); fl_logic(_r,8); }
  /* 11c35cee ret  */
  ESPCHK(0x11c35a60u, _esp0);
  ESP += 4; return;
  /* 11c35cf4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11c35cf8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11c35cfc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11c35d00 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11c35d04 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11c35d08 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11c35d0c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11c35d10 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11c35d14 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11c35d18 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11c35d1c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11c35d20 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11c35d24 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11c35d28 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11c35d2c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11c35d33 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c35d35 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11c35d37:;
  /* 11c35d37 jmp dword ptr [edx*4 + 0x11c35d40] */
  switch (EDX) {
    case 0: goto L_11c35d50;
    case 1: goto L_11c35d58;
    case 2: goto L_11c35d68;
    case 3: goto L_11c35d7c;
    default: x86_unimpl("switch@0x11c35d37 out of table"); return;
  }
  /* 11c35d3e mov edi, edi */
  EDI = (EDI);
L_11c35d50:;
  /* 11c35d50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c35d53 pop esi */
  ESI = (pop32());
  /* 11c35d54 pop edi */
  EDI = (pop32());
  /* 11c35d55 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c35d56 ret  */
  ESPCHK(0x11c35a60u, _esp0);
  ESP += 4; return;
  /* 11c35d57 nop  */
  /* nop */
L_11c35d58:;
  /* 11c35d58 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11c35d5b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11c35d5e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c35d61 pop esi */
  ESI = (pop32());
  /* 11c35d62 pop edi */
  EDI = (pop32());
  /* 11c35d63 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c35d64 ret  */
  ESPCHK(0x11c35a60u, _esp0);
  ESP += 4; return;
  /* 11c35d65 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c35d68:;
  /* 11c35d68 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11c35d6b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11c35d6e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11c35d71 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11c35d74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c35d77 pop esi */
  ESI = (pop32());
  /* 11c35d78 pop edi */
  EDI = (pop32());
  /* 11c35d79 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c35d7a ret  */
  ESPCHK(0x11c35a60u, _esp0);
  ESP += 4; return;
  /* 11c35d7b nop  */
  /* nop */
L_11c35d7c:;
  /* 11c35d7c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11c35d7f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11c35d82 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11c35d85 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11c35d88 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11c35d8b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11c35d8e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c35d91 pop esi */
  ESI = (pop32());
  /* 11c35d92 pop edi */
  EDI = (pop32());
  /* 11c35d93 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c35d94 ret  */
  ESPCHK(0x11c35a60u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11c35da0 (123 bytes, 44 insns) */
void f_11c35da0(void) {
  FTRACE(0x11c35da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c35da0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c35da4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11c35daa je 0x11c35dc0 */
  if (C.zf) goto L_11c35dc0;
L_11c35dac:;
  /* 11c35dac mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11c35dae inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c35daf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c35db1 je 0x11c35df3 */
  if (C.zf) goto L_11c35df3;
  /* 11c35db3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11c35db9 jne 0x11c35dac */
  if (!C.zf) goto L_11c35dac;
  /* 11c35dbb add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11c35dc0:;
  /* 11c35dc0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11c35dc2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11c35dc7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c35dc9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c35dcc xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11c35dce add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c35dd1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11c35dd6 je 0x11c35dc0 */
  if (C.zf) goto L_11c35dc0;
  /* 11c35dd8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11c35ddb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c35ddd je 0x11c35e11 */
  if (C.zf) goto L_11c35e11;
  /* 11c35ddf test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11c35de1 je 0x11c35e07 */
  if (C.zf) goto L_11c35e07;
  /* 11c35de3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11c35de8 je 0x11c35dfd */
  if (C.zf) goto L_11c35dfd;
  /* 11c35dea test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11c35def je 0x11c35df3 */
  if (C.zf) goto L_11c35df3;
  /* 11c35df1 jmp 0x11c35dc0 */
  goto L_11c35dc0;
L_11c35df3:;
  /* 11c35df3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11c35df6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c35dfa sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c35dfc ret  */
  ESPCHK(0x11c35da0u, _esp0);
  ESP += 4; return;
L_11c35dfd:;
  /* 11c35dfd lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 11c35e00 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c35e04 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c35e06 ret  */
  ESPCHK(0x11c35da0u, _esp0);
  ESP += 4; return;
L_11c35e07:;
  /* 11c35e07 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 11c35e0a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c35e0e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c35e10 ret  */
  ESPCHK(0x11c35da0u, _esp0);
  ESP += 4; return;
L_11c35e11:;
  /* 11c35e11 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11c35e14 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c35e18 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c35e1a ret  */
  ESPCHK(0x11c35da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e24 @ 0x11c35e24 (289 bytes, 98 insns) */
void f_11c35e24(void) {
  FTRACE(0x11c35e24u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c35e24 push ebp */
  push32((uint32_t)(EBP));
  /* 11c35e25 mov ebp, esp */
  EBP = (ESP);
  /* 11c35e27 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11c35e29 push 0x11c3d608 */
  push32((uint32_t)(0x11c3d608u));
  /* 11c35e2e push 0x11c37d80 */
  push32((uint32_t)(0x11c37d80u));
  /* 11c35e33 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11c35e39 push eax */
  push32((uint32_t)(EAX));
  /* 11c35e3a mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11c35e41 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c35e44 push ebx */
  push32((uint32_t)(EBX));
  /* 11c35e45 push esi */
  push32((uint32_t)(ESI));
  /* 11c35e46 push edi */
  push32((uint32_t)(EDI));
  /* 11c35e47 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c35e4a imul esi, dword ptr [ebp + 0xc] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0xc)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c35e4e mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11c35e51 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 11c35e54 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c35e57 ja 0x11c35e6d */
  if ((!C.cf&&!C.zf)) goto L_11c35e6d;
  /* 11c35e59 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c35e5b cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c35e5d jne 0x11c35e62 */
  if (!C.zf) goto L_11c35e62;
  /* 11c35e5f push 1 */
  push32((uint32_t)(0x1u));
  /* 11c35e61 pop esi */
  ESI = (pop32());
L_11c35e62:;
  /* 11c35e62 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c35e65 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11c35e68 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11c35e6b jmp 0x11c35e6f */
  goto L_11c35e6f;
L_11c35e6d:;
  /* 11c35e6d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11c35e6f:;
  /* 11c35e6f mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 11c35e72 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c35e75 ja 0x11c35f23 */
  if ((!C.cf&&!C.zf)) goto L_11c35f23;
  /* 11c35e7b mov eax, dword ptr [0x11c57d44] */
  EAX = (r32((uint32_t)(0x11c57d44)));
  /* 11c35e80 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c35e83 jne 0x11c35ec6 */
  if (!C.zf) goto L_11c35ec6;
  /* 11c35e85 mov edi, dword ptr [ebp - 0x1c] */
  EDI = (r32((uint32_t)(EBP + -0x1c)));
  /* 11c35e88 cmp edi, dword ptr [0x11c57d3c] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(0x11c57d3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c35e8e ja 0x11c35f0c */
  if ((!C.cf&&!C.zf)) goto L_11c35f0c;
  /* 11c35e90 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c35e92 call 0x11c35ff6 */
  push32(0x11c35e97u); f_11c35ff6();
  /* 11c35e97 pop ecx */
  ECX = (pop32());
  /* 11c35e98 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11c35e9b push edi */
  push32((uint32_t)(EDI));
  /* 11c35e9c call 0x11c36ab3 */
  push32(0x11c35ea1u); f_11c36ab3();
  /* 11c35ea1 pop ecx */
  ECX = (pop32());
  /* 11c35ea2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11c35ea5 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c35ea9 call 0x11c35ebd */
  push32(0x11c35eaeu); f_11c35ebd();
  /* 11c35eae cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c35eb1 je 0x11c35f11 */
  if (C.zf) goto L_11c35f11;
  /* 11c35eb3 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11c35eb6 jmp 0x11c35f00 */
  goto L_11c35f00;
  /* 11c35eb8 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c35eba mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11c35ebd push 9 */
  push32((uint32_t)(0x9u));
  /* 11c35ebf call 0x11c36057 */
  push32(0x11c35ec4u); f_11c36057();
  /* 11c35ec4 pop ecx */
  ECX = (pop32());
  /* 11c35ec5 ret  */
  ESPCHK(0x11c35e24u, _esp0);
  ESP += 4; return;
L_11c35ec6:;
  /* 11c35ec6 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c35ec9 jne 0x11c35f0c */
  if (!C.zf) goto L_11c35f0c;
  /* 11c35ecb cmp esi, dword ptr [0x11c41bcc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11c41bcc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c35ed1 ja 0x11c35f0c */
  if ((!C.cf&&!C.zf)) goto L_11c35f0c;
  /* 11c35ed3 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c35ed5 call 0x11c35ff6 */
  push32(0x11c35edau); f_11c35ff6();
  /* 11c35eda pop ecx */
  ECX = (pop32());
  /* 11c35edb mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11c35ee2 mov eax, esi */
  EAX = (ESI);
  /* 11c35ee4 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11c35ee7 push eax */
  push32((uint32_t)(EAX));
  /* 11c35ee8 call 0x11c37556 */
  push32(0x11c35eedu); f_11c37556();
  /* 11c35eed pop ecx */
  ECX = (pop32());
  /* 11c35eee mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11c35ef1 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c35ef5 call 0x11c35f46 */
  push32(0x11c35efau); f_11c35f46();
  /* 11c35efa cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c35efd je 0x11c35f11 */
  if (C.zf) goto L_11c35f11;
  /* 11c35eff push esi */
  push32((uint32_t)(ESI));
L_11c35f00:;
  /* 11c35f00 push ebx */
  push32((uint32_t)(EBX));
  /* 11c35f01 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11c35f04 call 0x11c35a00 */
  push32(0x11c35f09u); f_11c35a00();
  /* 11c35f09 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c35f0c:;
  /* 11c35f0c cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c35f0f jne 0x11c35f4f */
  if (!C.zf) { jmp_ind(0x11c35f4fu); return; }
L_11c35f11:;
  /* 11c35f11 push esi */
  push32((uint32_t)(ESI));
  /* 11c35f12 push 8 */
  push32((uint32_t)(0x8u));
  /* 11c35f14 push dword ptr [0x11c57d40] */
  push32((uint32_t)(r32((uint32_t)(0x11c57d40))));
  /* 11c35f1a call dword ptr [0x11c3d0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d0e8))), 0x11c35f20u);
  /* 11c35f20 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_11c35f23:;
  /* 11c35f23 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c35f26 jne 0x11c35f4f */
  if (!C.zf) { jmp_ind(0x11c35f4fu); return; }
  /* 11c35f28 cmp dword ptr [0x11c569a4], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11c569a4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c35f2e je 0x11c35f4f */
  if (C.zf) { jmp_ind(0x11c35f4fu); return; }
  /* 11c35f30 push esi */
  push32((uint32_t)(ESI));
  /* 11c35f31 call 0x11c3792b */
  push32(0x11c35f36u); f_11c3792b();
  /* 11c35f36 pop ecx */
  ECX = (pop32());
  /* 11c35f37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c35f39 jne 0x11c35e6f */
  if (!C.zf) goto L_11c35e6f;
  /* 11c35f3f jmp 0x11c35f52 */
  jmp_ind(0x11c35f52u); return;
  /* 11c35f41 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
}

/* FUN_10005ebd @ 0x11c35ebd (9 bytes, 4 insns) */
void f_11c35ebd(void) {
  FTRACE(0x11c35ebdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c35ebd push 9 */
  push32((uint32_t)(0x9u));
  /* 11c35ebf call 0x11c36057 */
  push32(0x11c35ec4u); f_11c36057();
  /* 11c35ec4 pop ecx */
  ECX = (pop32());
  /* 11c35ec5 ret  */
  ESPCHK(0x11c35ebdu, _esp0);
  ESP += 4; return;
}

/* FUN_10005f46 @ 0x11c35f46 (9 bytes, 4 insns) */
void f_11c35f46(void) {
  FTRACE(0x11c35f46u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c35f46 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c35f48 call 0x11c36057 */
  push32(0x11c35f4du); f_11c36057();
  /* 11c35f4d pop ecx */
  ECX = (pop32());
  /* 11c35f4e ret  */
  ESPCHK(0x11c35f46u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f61 @ 0x11c35f61 (41 bytes, 12 insns) */
void f_11c35f61(void) {
  FTRACE(0x11c35f61u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c35f61 push esi */
  push32((uint32_t)(ESI));
  /* 11c35f62 mov esi, dword ptr [0x11c3d06c] */
  ESI = (r32((uint32_t)(0x11c3d06c)));
  /* 11c35f68 push dword ptr [0x11c3f984] */
  push32((uint32_t)(r32((uint32_t)(0x11c3f984))));
  /* 11c35f6e call esi */
  call_ind((uint32_t)(ESI), 0x11c35f70u);
  /* 11c35f70 push dword ptr [0x11c3f974] */
  push32((uint32_t)(r32((uint32_t)(0x11c3f974))));
  /* 11c35f76 call esi */
  call_ind((uint32_t)(ESI), 0x11c35f78u);
  /* 11c35f78 push dword ptr [0x11c3f964] */
  push32((uint32_t)(r32((uint32_t)(0x11c3f964))));
  /* 11c35f7e call esi */
  call_ind((uint32_t)(ESI), 0x11c35f80u);
  /* 11c35f80 push dword ptr [0x11c3f944] */
  push32((uint32_t)(r32((uint32_t)(0x11c3f944))));
  /* 11c35f86 call esi */
  call_ind((uint32_t)(ESI), 0x11c35f88u);
  /* 11c35f88 pop esi */
  ESI = (pop32());
  /* 11c35f89 ret  */
  ESPCHK(0x11c35f61u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f8a @ 0x11c35f8a (108 bytes, 34 insns) */
void f_11c35f8a(void) {
  FTRACE(0x11c35f8au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c35f8a push esi */
  push32((uint32_t)(ESI));
  /* 11c35f8b push edi */
  push32((uint32_t)(EDI));
  /* 11c35f8c mov edi, dword ptr [0x11c3d0ac] */
  EDI = (r32((uint32_t)(0x11c3d0ac)));
  /* 11c35f92 mov esi, 0x11c3f940 */
  ESI = (0x11c3f940u);
L_11c35f97:;
  /* 11c35f97 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c35f99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c35f9b je 0x11c35fc8 */
  if (C.zf) goto L_11c35fc8;
  /* 11c35f9d cmp esi, 0x11c3f984 */
  { uint32_t _a=(ESI),_b=(0x11c3f984u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c35fa3 je 0x11c35fc8 */
  if (C.zf) goto L_11c35fc8;
  /* 11c35fa5 cmp esi, 0x11c3f974 */
  { uint32_t _a=(ESI),_b=(0x11c3f974u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c35fab je 0x11c35fc8 */
  if (C.zf) goto L_11c35fc8;
  /* 11c35fad cmp esi, 0x11c3f964 */
  { uint32_t _a=(ESI),_b=(0x11c3f964u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c35fb3 je 0x11c35fc8 */
  if (C.zf) goto L_11c35fc8;
  /* 11c35fb5 cmp esi, 0x11c3f944 */
  { uint32_t _a=(ESI),_b=(0x11c3f944u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c35fbb je 0x11c35fc8 */
  if (C.zf) goto L_11c35fc8;
  /* 11c35fbd push eax */
  push32((uint32_t)(EAX));
  /* 11c35fbe call edi */
  call_ind((uint32_t)(EDI), 0x11c35fc0u);
  /* 11c35fc0 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11c35fc2 call 0x11c3606c */
  push32(0x11c35fc7u); f_11c3606c();
  /* 11c35fc7 pop ecx */
  ECX = (pop32());
L_11c35fc8:;
  /* 11c35fc8 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c35fcb cmp esi, 0x11c3fa00 */
  { uint32_t _a=(ESI),_b=(0x11c3fa00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c35fd1 jl 0x11c35f97 */
  if ((C.sf!=C.of)) goto L_11c35f97;
  /* 11c35fd3 push dword ptr [0x11c3f964] */
  push32((uint32_t)(r32((uint32_t)(0x11c3f964))));
  /* 11c35fd9 call edi */
  call_ind((uint32_t)(EDI), 0x11c35fdbu);
  /* 11c35fdb push dword ptr [0x11c3f974] */
  push32((uint32_t)(r32((uint32_t)(0x11c3f974))));
  /* 11c35fe1 call edi */
  call_ind((uint32_t)(EDI), 0x11c35fe3u);
  /* 11c35fe3 push dword ptr [0x11c3f984] */
  push32((uint32_t)(r32((uint32_t)(0x11c3f984))));
  /* 11c35fe9 call edi */
  call_ind((uint32_t)(EDI), 0x11c35febu);
  /* 11c35feb push dword ptr [0x11c3f944] */
  push32((uint32_t)(r32((uint32_t)(0x11c3f944))));
  /* 11c35ff1 call edi */
  call_ind((uint32_t)(EDI), 0x11c35ff3u);
  /* 11c35ff3 pop edi */
  EDI = (pop32());
  /* 11c35ff4 pop esi */
  ESI = (pop32());
  /* 11c35ff5 ret  */
  ESPCHK(0x11c35f8au, _esp0);
  ESP += 4; return;
}

/* FUN_10005ff6 @ 0x11c35ff6 (97 bytes, 37 insns) */
void f_11c35ff6(void) {
  FTRACE(0x11c35ff6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c35ff6 push ebp */
  push32((uint32_t)(EBP));
  /* 11c35ff7 mov ebp, esp */
  EBP = (ESP);
  /* 11c35ff9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c35ffc push esi */
  push32((uint32_t)(ESI));
  /* 11c35ffd cmp dword ptr [eax*4 + 0x11c3f940], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11c3f940))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c36005 lea esi, [eax*4 + 0x11c3f940] */
  ESI = ((uint32_t)(EAX*4 + 0x11c3f940));
  /* 11c3600c jne 0x11c3604c */
  if (!C.zf) goto L_11c3604c;
  /* 11c3600e push edi */
  push32((uint32_t)(EDI));
  /* 11c3600f push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11c36011 call 0x11c344f2 */
  push32(0x11c36016u); f_11c344f2();
  /* 11c36016 mov edi, eax */
  EDI = (EAX);
  /* 11c36018 pop ecx */
  ECX = (pop32());
  /* 11c36019 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11c3601b jne 0x11c36025 */
  if (!C.zf) goto L_11c36025;
  /* 11c3601d push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11c3601f call 0x11c33897 */
  push32(0x11c36024u); f_11c33897();
  /* 11c36024 pop ecx */
  ECX = (pop32());
L_11c36025:;
  /* 11c36025 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11c36027 call 0x11c35ff6 */
  push32(0x11c3602cu); f_11c35ff6();
  /* 11c3602c cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3602f pop ecx */
  ECX = (pop32());
  /* 11c36030 push edi */
  push32((uint32_t)(EDI));
  /* 11c36031 jne 0x11c3603d */
  if (!C.zf) goto L_11c3603d;
  /* 11c36033 call dword ptr [0x11c3d06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d06c))), 0x11c36039u);
  /* 11c36039 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11c3603b jmp 0x11c36043 */
  goto L_11c36043;
L_11c3603d:;
  /* 11c3603d call 0x11c3606c */
  push32(0x11c36042u); f_11c3606c();
  /* 11c36042 pop ecx */
  ECX = (pop32());
L_11c36043:;
  /* 11c36043 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11c36045 call 0x11c36057 */
  push32(0x11c3604au); f_11c36057();
  /* 11c3604a pop ecx */
  ECX = (pop32());
  /* 11c3604b pop edi */
  EDI = (pop32());
L_11c3604c:;
  /* 11c3604c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11c3604e call dword ptr [0x11c3d068] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d068))), 0x11c36054u);
  /* 11c36054 pop esi */
  ESI = (pop32());
  /* 11c36055 pop ebp */
  EBP = (pop32());
  /* 11c36056 ret  */
  ESPCHK(0x11c35ff6u, _esp0);
  ESP += 4; return;
}

/* FUN_10006057 @ 0x11c36057 (21 bytes, 7 insns) */
void f_11c36057(void) {
  FTRACE(0x11c36057u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c36057 push ebp */
  push32((uint32_t)(EBP));
  /* 11c36058 mov ebp, esp */
  EBP = (ESP);
  /* 11c3605a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c3605d push dword ptr [eax*4 + 0x11c3f940] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x11c3f940))));
  /* 11c36064 call dword ptr [0x11c3d064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d064))), 0x11c3606au);
  /* 11c3606a pop ebp */
  EBP = (pop32());
  /* 11c3606b ret  */
  ESPCHK(0x11c36057u, _esp0);
  ESP += 4; return;
}

/* FUN_1000606c @ 0x11c3606c (215 bytes, 75 insns) */
void f_11c3606c(void) {
  FTRACE(0x11c3606cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3606c push ebp */
  push32((uint32_t)(EBP));
  /* 11c3606d mov ebp, esp */
  EBP = (ESP);
  /* 11c3606f push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11c36071 push 0x11c3d620 */
  push32((uint32_t)(0x11c3d620u));
  /* 11c36076 push 0x11c37d80 */
  push32((uint32_t)(0x11c37d80u));
  /* 11c3607b mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11c36081 push eax */
  push32((uint32_t)(EAX));
  /* 11c36082 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11c36089 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3608c push ebx */
  push32((uint32_t)(EBX));
  /* 11c3608d push esi */
  push32((uint32_t)(ESI));
  /* 11c3608e push edi */
  push32((uint32_t)(EDI));
  /* 11c3608f mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c36092 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c36094 je 0x11c36146 */
  if (C.zf) { jmp_ind(0x11c36146u); return; }
  /* 11c3609a mov eax, dword ptr [0x11c57d44] */
  EAX = (r32((uint32_t)(0x11c57d44)));
  /* 11c3609f cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c360a2 jne 0x11c360df */
  if (!C.zf) goto L_11c360df;
  /* 11c360a4 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c360a6 call 0x11c35ff6 */
  push32(0x11c360abu); f_11c35ff6();
  /* 11c360ab pop ecx */
  ECX = (pop32());
  /* 11c360ac and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c360b0 push esi */
  push32((uint32_t)(ESI));
  /* 11c360b1 call 0x11c3675f */
  push32(0x11c360b6u); f_11c3675f();
  /* 11c360b6 pop ecx */
  ECX = (pop32());
  /* 11c360b7 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11c360ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c360bc je 0x11c360c7 */
  if (C.zf) goto L_11c360c7;
  /* 11c360be push esi */
  push32((uint32_t)(ESI));
  /* 11c360bf push eax */
  push32((uint32_t)(EAX));
  /* 11c360c0 call 0x11c3678a */
  push32(0x11c360c5u); f_11c3678a();
  /* 11c360c5 pop ecx */
  ECX = (pop32());
  /* 11c360c6 pop ecx */
  ECX = (pop32());
L_11c360c7:;
  /* 11c360c7 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c360cb call 0x11c360d6 */
  push32(0x11c360d0u); f_11c360d6();
  /* 11c360d0 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c360d4 jmp 0x11c36127 */
  goto L_11c36127;
  /* 11c360d6 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c360d8 call 0x11c36057 */
  push32(0x11c360ddu); f_11c36057();
  /* 11c360dd pop ecx */
  ECX = (pop32());
  /* 11c360de ret  */
  ESPCHK(0x11c3606cu, _esp0);
  ESP += 4; return;
L_11c360df:;
  /* 11c360df cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c360e2 jne 0x11c36137 */
  if (!C.zf) goto L_11c36137;
  /* 11c360e4 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c360e6 call 0x11c35ff6 */
  push32(0x11c360ebu); f_11c35ff6();
  /* 11c360eb pop ecx */
  ECX = (pop32());
  /* 11c360ec mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11c360f3 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11c360f6 push eax */
  push32((uint32_t)(EAX));
  /* 11c360f7 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11c360fa push eax */
  push32((uint32_t)(EAX));
  /* 11c360fb push esi */
  push32((uint32_t)(ESI));
  /* 11c360fc call 0x11c374ba */
  push32(0x11c36101u); f_11c374ba();
  /* 11c36101 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c36104 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11c36107 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c36109 je 0x11c3611a */
  if (C.zf) goto L_11c3611a;
  /* 11c3610b push eax */
  push32((uint32_t)(EAX));
  /* 11c3610c push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11c3610f push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 11c36112 call 0x11c37511 */
  push32(0x11c36117u); f_11c37511();
  /* 11c36117 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c3611a:;
  /* 11c3611a or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c3611e call 0x11c3612e */
  push32(0x11c36123u); f_11c3612e();
  /* 11c36123 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11c36127:;
  /* 11c36127 jne 0x11c36146 */
  if (!C.zf) { jmp_ind(0x11c36146u); return; }
  /* 11c36129 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c3612c jmp 0x11c36138 */
  goto L_11c36138;
  /* 11c3612e push 9 */
  push32((uint32_t)(0x9u));
  /* 11c36130 call 0x11c36057 */
  push32(0x11c36135u); f_11c36057();
  /* 11c36135 pop ecx */
  ECX = (pop32());
  /* 11c36136 ret  */
  ESPCHK(0x11c3606cu, _esp0);
  ESP += 4; return;
L_11c36137:;
  /* 11c36137 push esi */
  push32((uint32_t)(ESI));
L_11c36138:;
  /* 11c36138 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c3613a push dword ptr [0x11c57d40] */
  push32((uint32_t)(r32((uint32_t)(0x11c57d40))));
}

/* FUN_100060d6 @ 0x11c360d6 (9 bytes, 4 insns) */
void f_11c360d6(void) {
  FTRACE(0x11c360d6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c360d6 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c360d8 call 0x11c36057 */
  push32(0x11c360ddu); f_11c36057();
  /* 11c360dd pop ecx */
  ECX = (pop32());
  /* 11c360de ret  */
  ESPCHK(0x11c360d6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000612e @ 0x11c3612e (9 bytes, 4 insns) */
void f_11c3612e(void) {
  FTRACE(0x11c3612eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3612e push 9 */
  push32((uint32_t)(0x9u));
  /* 11c36130 call 0x11c36057 */
  push32(0x11c36135u); f_11c36057();
  /* 11c36135 pop ecx */
  ECX = (pop32());
  /* 11c36136 ret  */
  ESPCHK(0x11c3612eu, _esp0);
  ESP += 4; return;
}

/* FUN_10006155 @ 0x11c36155 (46 bytes, 13 insns) */
void f_11c36155(void) {
  FTRACE(0x11c36155u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c36155 cmp dword ptr [0x11c56998], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c56998))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3615c jne 0x11c36182 */
  if (!C.zf) goto L_11c36182;
  /* 11c3615e push 0xb */
  push32((uint32_t)(0xbu));
  /* 11c36160 call 0x11c35ff6 */
  push32(0x11c36165u); f_11c35ff6();
  /* 11c36165 cmp dword ptr [0x11c56998], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c56998))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3616c pop ecx */
  ECX = (pop32());
  /* 11c3616d jne 0x11c3617a */
  if (!C.zf) goto L_11c3617a;
  /* 11c3616f call 0x11c36183 */
  push32(0x11c36174u); f_11c36183();
  /* 11c36174 inc dword ptr [0x11c56998] */
  { uint32_t _r=(r32((uint32_t)(0x11c56998)))+1; w32((uint32_t)(0x11c56998), (_r)); fl_inc(_r,32); }
L_11c3617a:;
  /* 11c3617a push 0xb */
  push32((uint32_t)(0xbu));
  /* 11c3617c call 0x11c36057 */
  push32(0x11c36181u); f_11c36057();
  /* 11c36181 pop ecx */
  ECX = (pop32());
L_11c36182:;
  /* 11c36182 ret  */
  ESPCHK(0x11c36155u, _esp0);
  ESP += 4; return;
}

/* FUN_10006183 @ 0x11c36183 (647 bytes, 207 insns) */
void f_11c36183(void) {
  FTRACE(0x11c36183u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c36183 push ebp */
  push32((uint32_t)(EBP));
  /* 11c36184 mov ebp, esp */
  EBP = (ESP);
  /* 11c36186 push ecx */
  push32((uint32_t)(ECX));
  /* 11c36187 push ecx */
  push32((uint32_t)(ECX));
  /* 11c36188 push ebx */
  push32((uint32_t)(EBX));
  /* 11c36189 push esi */
  push32((uint32_t)(ESI));
  /* 11c3618a push edi */
  push32((uint32_t)(EDI));
  /* 11c3618b push 0xc */
  push32((uint32_t)(0xcu));
  /* 11c3618d pop edi */
  EDI = (pop32());
  /* 11c3618e xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c36190 push edi */
  push32((uint32_t)(EDI));
  /* 11c36191 mov dword ptr [ebp - 8], ebx */
  w32((uint32_t)(EBP + -0x8), (EBX));
  /* 11c36194 call 0x11c35ff6 */
  push32(0x11c36199u); f_11c35ff6();
  /* 11c36199 or dword ptr [0x11c3fb30], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11c3fb30)))|(0xffffffffu); w32((uint32_t)(0x11c3fb30), (_r)); fl_logic(_r,32); }
  /* 11c361a0 or dword ptr [0x11c3fb20], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11c3fb20)))|(0xffffffffu); w32((uint32_t)(0x11c3fb20), (_r)); fl_logic(_r,32); }
  /* 11c361a7 mov dword ptr [0x11c568e0], ebx */
  w32((uint32_t)(0x11c568e0), (EBX));
  /* 11c361ad mov dword ptr [esp], 0x11c3d678 */
  w32((uint32_t)(ESP), (0x11c3d678u));
  /* 11c361b4 call 0x11c39c14 */
  push32(0x11c361b9u); f_11c39c14();
  /* 11c361b9 mov esi, eax */
  ESI = (EAX);
  /* 11c361bb pop ecx */
  ECX = (pop32());
  /* 11c361bc cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c361be jne 0x11c362c1 */
  if (!C.zf) goto L_11c362c1;
  /* 11c361c4 push edi */
  push32((uint32_t)(EDI));
  /* 11c361c5 call 0x11c36057 */
  push32(0x11c361cau); f_11c36057();
  /* 11c361ca mov dword ptr [esp], 0x11c568e8 */
  w32((uint32_t)(ESP), (0x11c568e8u));
  /* 11c361d1 call dword ptr [0x11c3d0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d0c4))), 0x11c361d7u);
  /* 11c361d7 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c361da je 0x11c36405 */
  if (C.zf) goto L_11c36405;
  /* 11c361e0 mov eax, dword ptr [0x11c568e8] */
  EAX = (r32((uint32_t)(0x11c568e8)));
  /* 11c361e5 mov ecx, dword ptr [0x11c5693c] */
  ECX = (r32((uint32_t)(0x11c5693c)));
  /* 11c361eb imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c361ee cmp word ptr [0x11c5692e], bx */
  { uint32_t _a=(r16((uint32_t)(0x11c5692e))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c361f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c361f7 pop edx */
  EDX = (pop32());
  /* 11c361f8 mov dword ptr [0x11c3fa88], eax */
  w32((uint32_t)(0x11c3fa88), (EAX));
  /* 11c361fd mov dword ptr [0x11c568e0], edx */
  w32((uint32_t)(0x11c568e0), (EDX));
  /* 11c36203 je 0x11c36211 */
  if (C.zf) goto L_11c36211;
  /* 11c36205 mov esi, ecx */
  ESI = (ECX);
  /* 11c36207 imul esi, esi, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ESI)*(int64_t)(int32_t)(0x3cu); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c3620a add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3620c mov dword ptr [0x11c3fa88], eax */
  w32((uint32_t)(0x11c3fa88), (EAX));
L_11c36211:;
  /* 11c36211 cmp word ptr [0x11c56982], bx */
  { uint32_t _a=(r16((uint32_t)(0x11c56982))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c36218 je 0x11c36235 */
  if (C.zf) goto L_11c36235;
  /* 11c3621a mov eax, dword ptr [0x11c56990] */
  EAX = (r32((uint32_t)(0x11c56990)));
  /* 11c3621f cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c36221 je 0x11c36235 */
  if (C.zf) goto L_11c36235;
  /* 11c36223 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c36225 mov dword ptr [0x11c3fa8c], edx */
  w32((uint32_t)(0x11c3fa8c), (EDX));
  /* 11c3622b imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c3622e mov dword ptr [0x11c3fa90], eax */
  w32((uint32_t)(0x11c3fa90), (EAX));
  /* 11c36233 jmp 0x11c36241 */
  goto L_11c36241;
L_11c36235:;
  /* 11c36235 mov dword ptr [0x11c3fa8c], ebx */
  w32((uint32_t)(0x11c3fa8c), (EBX));
  /* 11c3623b mov dword ptr [0x11c3fa90], ebx */
  w32((uint32_t)(0x11c3fa90), (EBX));
L_11c36241:;
  /* 11c36241 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11c36244 mov esi, dword ptr [0x11c3d09c] */
  ESI = (r32((uint32_t)(0x11c3d09c)));
  /* 11c3624a push eax */
  push32((uint32_t)(EAX));
  /* 11c3624b push ebx */
  push32((uint32_t)(EBX));
  /* 11c3624c push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11c3624e mov edi, 0x220 */
  EDI = (0x220u);
  /* 11c36253 push dword ptr [0x11c3fb14] */
  push32((uint32_t)(r32((uint32_t)(0x11c3fb14))));
  /* 11c36259 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11c3625b push 0x11c568ec */
  push32((uint32_t)(0x11c568ecu));
  /* 11c36260 push edi */
  push32((uint32_t)(EDI));
  /* 11c36261 push dword ptr [0x11c569f8] */
  push32((uint32_t)(r32((uint32_t)(0x11c569f8))));
  /* 11c36267 call esi */
  call_ind((uint32_t)(ESI), 0x11c36269u);
  /* 11c36269 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3626b je 0x11c3627d */
  if (C.zf) goto L_11c3627d;
  /* 11c3626d cmp dword ptr [ebp - 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c36270 jne 0x11c3627d */
  if (!C.zf) goto L_11c3627d;
  /* 11c36272 mov eax, dword ptr [0x11c3fb14] */
  EAX = (r32((uint32_t)(0x11c3fb14)));
  /* 11c36277 and byte ptr [eax + 0x3f], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x3f)))&(0x0u); w8((uint32_t)(EAX + 0x3f), (_r)); fl_logic(_r,8); }
  /* 11c3627b jmp 0x11c36285 */
  goto L_11c36285;
L_11c3627d:;
  /* 11c3627d mov eax, dword ptr [0x11c3fb14] */
  EAX = (r32((uint32_t)(0x11c3fb14)));
  /* 11c36282 and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
L_11c36285:;
  /* 11c36285 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11c36288 push eax */
  push32((uint32_t)(EAX));
  /* 11c36289 push ebx */
  push32((uint32_t)(EBX));
  /* 11c3628a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11c3628c push dword ptr [0x11c3fb18] */
  push32((uint32_t)(r32((uint32_t)(0x11c3fb18))));
  /* 11c36292 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11c36294 push 0x11c56940 */
  push32((uint32_t)(0x11c56940u));
  /* 11c36299 push edi */
  push32((uint32_t)(EDI));
  /* 11c3629a push dword ptr [0x11c569f8] */
  push32((uint32_t)(r32((uint32_t)(0x11c569f8))));
  /* 11c362a0 call esi */
  call_ind((uint32_t)(ESI), 0x11c362a2u);
  /* 11c362a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c362a4 je 0x11c363f4 */
  if (C.zf) goto L_11c363f4;
  /* 11c362aa cmp dword ptr [ebp - 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c362ad jne 0x11c363f4 */
  if (!C.zf) goto L_11c363f4;
  /* 11c362b3 mov eax, dword ptr [0x11c3fb18] */
  EAX = (r32((uint32_t)(0x11c3fb18)));
  /* 11c362b8 and byte ptr [eax + 0x3f], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x3f)))&(0x0u); w8((uint32_t)(EAX + 0x3f), (_r)); fl_logic(_r,8); }
  /* 11c362bc jmp 0x11c36405 */
  goto L_11c36405;
L_11c362c1:;
  /* 11c362c1 cmp byte ptr [esi], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c362c4 je 0x11c363fe */
  if (C.zf) goto L_11c363fe;
  /* 11c362ca mov eax, dword ptr [0x11c56994] */
  EAX = (r32((uint32_t)(0x11c56994)));
  /* 11c362cf cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c362d1 je 0x11c362e4 */
  if (C.zf) goto L_11c362e4;
  /* 11c362d3 push eax */
  push32((uint32_t)(EAX));
  /* 11c362d4 push esi */
  push32((uint32_t)(ESI));
  /* 11c362d5 call 0x11c39b90 */
  push32(0x11c362dau); f_11c39b90();
  /* 11c362da pop ecx */
  ECX = (pop32());
  /* 11c362db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c362dd pop ecx */
  ECX = (pop32());
  /* 11c362de je 0x11c363fe */
  if (C.zf) goto L_11c363fe;
L_11c362e4:;
  /* 11c362e4 push dword ptr [0x11c56994] */
  push32((uint32_t)(r32((uint32_t)(0x11c56994))));
  /* 11c362ea call 0x11c3606c */
  push32(0x11c362efu); f_11c3606c();
  /* 11c362ef push esi */
  push32((uint32_t)(ESI));
  /* 11c362f0 call 0x11c35da0 */
  push32(0x11c362f5u); f_11c35da0();
  /* 11c362f5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c362f6 push eax */
  push32((uint32_t)(EAX));
  /* 11c362f7 call 0x11c344f2 */
  push32(0x11c362fcu); f_11c344f2();
  /* 11c362fc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c362ff cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c36301 mov dword ptr [0x11c56994], eax */
  w32((uint32_t)(0x11c56994), (EAX));
  /* 11c36306 je 0x11c363fe */
  if (C.zf) goto L_11c363fe;
  /* 11c3630c push esi */
  push32((uint32_t)(ESI));
  /* 11c3630d push eax */
  push32((uint32_t)(EAX));
  /* 11c3630e call 0x11c35910 */
  push32(0x11c36313u); f_11c35910();
  /* 11c36313 push edi */
  push32((uint32_t)(EDI));
  /* 11c36314 call 0x11c36057 */
  push32(0x11c36319u); f_11c36057();
  /* 11c36319 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c3631b push esi */
  push32((uint32_t)(ESI));
  /* 11c3631c push dword ptr [0x11c3fb14] */
  push32((uint32_t)(r32((uint32_t)(0x11c3fb14))));
  /* 11c36322 call 0x11c38bd0 */
  push32(0x11c36327u); f_11c38bd0();
  /* 11c36327 mov eax, dword ptr [0x11c3fb14] */
  EAX = (r32((uint32_t)(0x11c3fb14)));
  /* 11c3632c add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3632f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c36332 and byte ptr [eax + 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x3)))&(0x0u); w8((uint32_t)(EAX + 0x3), (_r)); fl_logic(_r,8); }
  /* 11c36336 cmp byte ptr [esi], 0x2d */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c36339 jne 0x11c36343 */
  if (!C.zf) goto L_11c36343;
  /* 11c3633b mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11c36342 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11c36343:;
  /* 11c36343 push esi */
  push32((uint32_t)(ESI));
  /* 11c36344 call 0x11c39aff */
  push32(0x11c36349u); f_11c39aff();
  /* 11c36349 pop ecx */
  ECX = (pop32());
  /* 11c3634a mov bl, 0x30 */
  BL = (0x30u);
  /* 11c3634c mov ecx, eax */
  ECX = (EAX);
  /* 11c3634e imul ecx, ecx, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xe10u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c36354 mov dword ptr [0x11c3fa88], ecx */
  w32((uint32_t)(0x11c3fa88), (ECX));
L_11c3635a:;
  /* 11c3635a mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c3635c cmp al, 0x2b */
  { uint32_t _a=(AL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3635e je 0x11c36368 */
  if (C.zf) goto L_11c36368;
  /* 11c36360 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c36362 jl 0x11c3636b */
  if ((C.sf!=C.of)) goto L_11c3636b;
  /* 11c36364 cmp al, 0x39 */
  { uint32_t _a=(AL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c36366 jg 0x11c3636b */
  if ((!C.zf&&C.sf==C.of)) goto L_11c3636b;
L_11c36368:;
  /* 11c36368 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c36369 jmp 0x11c3635a */
  goto L_11c3635a;
L_11c3636b:;
  /* 11c3636b cmp byte ptr [esi], 0x3a */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3636e jne 0x11c363be */
  if (!C.zf) goto L_11c363be;
  /* 11c36370 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c36371 push esi */
  push32((uint32_t)(ESI));
  /* 11c36372 call 0x11c39aff */
  push32(0x11c36377u); f_11c39aff();
  /* 11c36377 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c3637a pop ecx */
  ECX = (pop32());
  /* 11c3637b mov ecx, dword ptr [0x11c3fa88] */
  ECX = (r32((uint32_t)(0x11c3fa88)));
  /* 11c36381 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c36383 mov dword ptr [0x11c3fa88], ecx */
  w32((uint32_t)(0x11c3fa88), (ECX));
L_11c36389:;
  /* 11c36389 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c3638b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3638d jl 0x11c36396 */
  if ((C.sf!=C.of)) goto L_11c36396;
  /* 11c3638f cmp al, 0x39 */
  { uint32_t _a=(AL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c36391 jg 0x11c36396 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c36396;
  /* 11c36393 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c36394 jmp 0x11c36389 */
  goto L_11c36389;
L_11c36396:;
  /* 11c36396 cmp byte ptr [esi], 0x3a */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c36399 jne 0x11c363be */
  if (!C.zf) goto L_11c363be;
  /* 11c3639b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c3639c push esi */
  push32((uint32_t)(ESI));
  /* 11c3639d call 0x11c39aff */
  push32(0x11c363a2u); f_11c39aff();
  /* 11c363a2 pop ecx */
  ECX = (pop32());
  /* 11c363a3 mov ecx, dword ptr [0x11c3fa88] */
  ECX = (r32((uint32_t)(0x11c3fa88)));
  /* 11c363a9 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c363ab mov dword ptr [0x11c3fa88], ecx */
  w32((uint32_t)(0x11c3fa88), (ECX));
L_11c363b1:;
  /* 11c363b1 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c363b3 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c363b5 jl 0x11c363be */
  if ((C.sf!=C.of)) goto L_11c363be;
  /* 11c363b7 cmp al, 0x39 */
  { uint32_t _a=(AL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c363b9 jg 0x11c363be */
  if ((!C.zf&&C.sf==C.of)) goto L_11c363be;
  /* 11c363bb inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c363bc jmp 0x11c363b1 */
  goto L_11c363b1;
L_11c363be:;
  /* 11c363be cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c363c2 je 0x11c363cc */
  if (C.zf) goto L_11c363cc;
  /* 11c363c4 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c363c6 mov dword ptr [0x11c3fa88], ecx */
  w32((uint32_t)(0x11c3fa88), (ECX));
L_11c363cc:;
  /* 11c363cc movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 11c363cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c363d1 mov dword ptr [0x11c3fa8c], eax */
  w32((uint32_t)(0x11c3fa8c), (EAX));
  /* 11c363d6 je 0x11c363f4 */
  if (C.zf) goto L_11c363f4;
  /* 11c363d8 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c363da push esi */
  push32((uint32_t)(ESI));
  /* 11c363db push dword ptr [0x11c3fb18] */
  push32((uint32_t)(r32((uint32_t)(0x11c3fb18))));
  /* 11c363e1 call 0x11c38bd0 */
  push32(0x11c363e6u); f_11c38bd0();
  /* 11c363e6 mov eax, dword ptr [0x11c3fb18] */
  EAX = (r32((uint32_t)(0x11c3fb18)));
  /* 11c363eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c363ee and byte ptr [eax + 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x3)))&(0x0u); w8((uint32_t)(EAX + 0x3), (_r)); fl_logic(_r,8); }
  /* 11c363f2 jmp 0x11c36405 */
  goto L_11c36405;
L_11c363f4:;
  /* 11c363f4 mov eax, dword ptr [0x11c3fb18] */
  EAX = (r32((uint32_t)(0x11c3fb18)));
  /* 11c363f9 and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 11c363fc jmp 0x11c36405 */
  goto L_11c36405;
L_11c363fe:;
  /* 11c363fe push edi */
  push32((uint32_t)(EDI));
  /* 11c363ff call 0x11c36057 */
  push32(0x11c36404u); f_11c36057();
  /* 11c36404 pop ecx */
  ECX = (pop32());
L_11c36405:;
  /* 11c36405 pop edi */
  EDI = (pop32());
  /* 11c36406 pop esi */
  ESI = (pop32());
  /* 11c36407 pop ebx */
  EBX = (pop32());
  /* 11c36408 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c36409 ret  */
  ESPCHK(0x11c36183u, _esp0);
  ESP += 4; return;
}

/* FUN_1000640a @ 0x11c3640a (33 bytes, 12 insns) */
void f_11c3640a(void) {
  FTRACE(0x11c3640au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3640a push esi */
  push32((uint32_t)(ESI));
  /* 11c3640b push 0xb */
  push32((uint32_t)(0xbu));
  /* 11c3640d call 0x11c35ff6 */
  push32(0x11c36412u); f_11c35ff6();
  /* 11c36412 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11c36416 call 0x11c3642b */
  push32(0x11c3641bu); f_11c3642b();
  /* 11c3641b push 0xb */
  push32((uint32_t)(0xbu));
  /* 11c3641d mov esi, eax */
  ESI = (EAX);
  /* 11c3641f call 0x11c36057 */
  push32(0x11c36424u); f_11c36057();
  /* 11c36424 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c36427 mov eax, esi */
  EAX = (ESI);
  /* 11c36429 pop esi */
  ESI = (pop32());
  /* 11c3642a ret  */
  ESPCHK(0x11c3640au, _esp0);
  ESP += 4; return;
}

/* FUN_1000642b @ 0x11c3642b (428 bytes, 149 insns) */
void f_11c3642b(void) {
  FTRACE(0x11c3642bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3642b push ebx */
  push32((uint32_t)(EBX));
  /* 11c3642c push esi */
  push32((uint32_t)(ESI));
  /* 11c3642d push edi */
  push32((uint32_t)(EDI));
  /* 11c3642e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11c36430 cmp dword ptr [0x11c3fa8c], edi */
  { uint32_t _a=(r32((uint32_t)(0x11c3fa8c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c36436 jne 0x11c3643f */
  if (!C.zf) goto L_11c3643f;
L_11c36438:;
  /* 11c36438 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c3643a jmp 0x11c3658b */
  goto L_11c3658b;
L_11c3643f:;
  /* 11c3643f mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11c36443 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c36445 pop ebx */
  EBX = (pop32());
  /* 11c36446 mov eax, dword ptr [esi + 0x14] */
  EAX = (r32((uint32_t)(ESI + 0x14)));
  /* 11c36449 cmp eax, dword ptr [0x11c3fb20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11c3fb20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3644f jne 0x11c3645d */
  if (!C.zf) goto L_11c3645d;
  /* 11c36451 cmp eax, dword ptr [0x11c3fb30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11c3fb30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c36457 je 0x11c3655f */
  if (C.zf) goto L_11c3655f;
L_11c3645d:;
  /* 11c3645d cmp dword ptr [0x11c568e0], edi */
  { uint32_t _a=(r32((uint32_t)(0x11c568e0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c36463 je 0x11c36535 */
  if (C.zf) goto L_11c36535;
  /* 11c36469 movzx ecx, word ptr [0x11c5698e] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11c5698e))));
  /* 11c36470 push ecx */
  push32((uint32_t)(ECX));
  /* 11c36471 cmp word ptr [0x11c56980], di */
  { uint32_t _a=(r16((uint32_t)(0x11c56980))),_b=(DI),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c36478 movzx ecx, word ptr [0x11c5698c] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11c5698c))));
  /* 11c3647f push ecx */
  push32((uint32_t)(ECX));
  /* 11c36480 movzx ecx, word ptr [0x11c5698a] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11c5698a))));
  /* 11c36487 push ecx */
  push32((uint32_t)(ECX));
  /* 11c36488 movzx ecx, word ptr [0x11c56988] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11c56988))));
  /* 11c3648f push ecx */
  push32((uint32_t)(ECX));
  /* 11c36490 jne 0x11c364af */
  if (!C.zf) goto L_11c364af;
  /* 11c36492 movzx ecx, word ptr [0x11c56984] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11c56984))));
  /* 11c36499 push edi */
  push32((uint32_t)(EDI));
  /* 11c3649a push ecx */
  push32((uint32_t)(ECX));
  /* 11c3649b movzx ecx, word ptr [0x11c56986] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11c56986))));
  /* 11c364a2 push ecx */
  push32((uint32_t)(ECX));
  /* 11c364a3 movzx ecx, word ptr [0x11c56982] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11c56982))));
  /* 11c364aa push ecx */
  push32((uint32_t)(ECX));
  /* 11c364ab push eax */
  push32((uint32_t)(EAX));
  /* 11c364ac push ebx */
  push32((uint32_t)(EBX));
  /* 11c364ad jmp 0x11c364c3 */
  goto L_11c364c3;
L_11c364af:;
  /* 11c364af movzx ecx, word ptr [0x11c56986] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11c56986))));
  /* 11c364b6 push ecx */
  push32((uint32_t)(ECX));
  /* 11c364b7 push edi */
  push32((uint32_t)(EDI));
  /* 11c364b8 movzx ecx, word ptr [0x11c56982] */
  ECX = ((uint32_t)(r16((uint32_t)(0x11c56982))));
  /* 11c364bf push edi */
  push32((uint32_t)(EDI));
  /* 11c364c0 push ecx */
  push32((uint32_t)(ECX));
  /* 11c364c1 push eax */
  push32((uint32_t)(EAX));
  /* 11c364c2 push edi */
  push32((uint32_t)(EDI));
L_11c364c3:;
  /* 11c364c3 push ebx */
  push32((uint32_t)(EBX));
  /* 11c364c4 call 0x11c365d7 */
  push32(0x11c364c9u); f_11c365d7();
  /* 11c364c9 movzx eax, word ptr [0x11c5693a] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11c5693a))));
  /* 11c364d0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c364d3 cmp word ptr [0x11c5692c], di */
  { uint32_t _a=(r16((uint32_t)(0x11c5692c))),_b=(DI),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c364da push eax */
  push32((uint32_t)(EAX));
  /* 11c364db movzx eax, word ptr [0x11c56938] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11c56938))));
  /* 11c364e2 push eax */
  push32((uint32_t)(EAX));
  /* 11c364e3 movzx eax, word ptr [0x11c56936] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11c56936))));
  /* 11c364ea push eax */
  push32((uint32_t)(EAX));
  /* 11c364eb movzx eax, word ptr [0x11c56934] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11c56934))));
  /* 11c364f2 push eax */
  push32((uint32_t)(EAX));
  /* 11c364f3 jne 0x11c3651d */
  if (!C.zf) goto L_11c3651d;
  /* 11c364f5 movzx eax, word ptr [0x11c56930] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11c56930))));
  /* 11c364fc push edi */
  push32((uint32_t)(EDI));
  /* 11c364fd push eax */
  push32((uint32_t)(EAX));
  /* 11c364fe movzx eax, word ptr [0x11c56932] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11c56932))));
  /* 11c36505 push eax */
  push32((uint32_t)(EAX));
  /* 11c36506 movzx eax, word ptr [0x11c5692e] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11c5692e))));
  /* 11c3650d push eax */
  push32((uint32_t)(EAX));
  /* 11c3650e push dword ptr [esi + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x14))));
  /* 11c36511 push ebx */
  push32((uint32_t)(EBX));
L_11c36512:;
  /* 11c36512 push edi */
  push32((uint32_t)(EDI));
  /* 11c36513 call 0x11c365d7 */
  push32(0x11c36518u); f_11c365d7();
  /* 11c36518 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3651b jmp 0x11c3655f */
  goto L_11c3655f;
L_11c3651d:;
  /* 11c3651d movzx eax, word ptr [0x11c56932] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11c56932))));
  /* 11c36524 push eax */
  push32((uint32_t)(EAX));
  /* 11c36525 push edi */
  push32((uint32_t)(EDI));
  /* 11c36526 movzx eax, word ptr [0x11c5692e] */
  EAX = ((uint32_t)(r16((uint32_t)(0x11c5692e))));
  /* 11c3652d push edi */
  push32((uint32_t)(EDI));
  /* 11c3652e push eax */
  push32((uint32_t)(EAX));
  /* 11c3652f push dword ptr [esi + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x14))));
  /* 11c36532 push edi */
  push32((uint32_t)(EDI));
  /* 11c36533 jmp 0x11c36512 */
  goto L_11c36512;
L_11c36535:;
  /* 11c36535 push edi */
  push32((uint32_t)(EDI));
  /* 11c36536 push edi */
  push32((uint32_t)(EDI));
  /* 11c36537 push edi */
  push32((uint32_t)(EDI));
  /* 11c36538 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c3653a push edi */
  push32((uint32_t)(EDI));
  /* 11c3653b push edi */
  push32((uint32_t)(EDI));
  /* 11c3653c push ebx */
  push32((uint32_t)(EBX));
  /* 11c3653d push 4 */
  push32((uint32_t)(0x4u));
  /* 11c3653f push eax */
  push32((uint32_t)(EAX));
  /* 11c36540 push ebx */
  push32((uint32_t)(EBX));
  /* 11c36541 push ebx */
  push32((uint32_t)(EBX));
  /* 11c36542 call 0x11c365d7 */
  push32(0x11c36547u); f_11c365d7();
  /* 11c36547 push edi */
  push32((uint32_t)(EDI));
  /* 11c36548 push edi */
  push32((uint32_t)(EDI));
  /* 11c36549 push edi */
  push32((uint32_t)(EDI));
  /* 11c3654a push 2 */
  push32((uint32_t)(0x2u));
  /* 11c3654c push edi */
  push32((uint32_t)(EDI));
  /* 11c3654d push edi */
  push32((uint32_t)(EDI));
  /* 11c3654e push 5 */
  push32((uint32_t)(0x5u));
  /* 11c36550 push 0xa */
  push32((uint32_t)(0xau));
  /* 11c36552 push dword ptr [esi + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x14))));
  /* 11c36555 push ebx */
  push32((uint32_t)(EBX));
  /* 11c36556 push edi */
  push32((uint32_t)(EDI));
  /* 11c36557 call 0x11c365d7 */
  push32(0x11c3655cu); f_11c365d7();
  /* 11c3655c add esp, 0x58 */
  { uint32_t _a=(ESP),_b=(0x58u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c3655f:;
  /* 11c3655f mov edx, dword ptr [0x11c3fb24] */
  EDX = (r32((uint32_t)(0x11c3fb24)));
  /* 11c36565 mov eax, dword ptr [0x11c3fb34] */
  EAX = (r32((uint32_t)(0x11c3fb34)));
  /* 11c3656a mov ecx, dword ptr [esi + 0x1c] */
  ECX = (r32((uint32_t)(ESI + 0x1c)));
  /* 11c3656d cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3656f jge 0x11c3658f */
  if ((C.sf==C.of)) goto L_11c3658f;
  /* 11c36571 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c36573 jl 0x11c36438 */
  if ((C.sf!=C.of)) goto L_11c36438;
  /* 11c36579 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3657b jg 0x11c36438 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c36438;
  /* 11c36581 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c36583 jle 0x11c365a3 */
  if ((C.zf||C.sf!=C.of)) goto L_11c365a3;
  /* 11c36585 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c36587 jge 0x11c365a3 */
  if ((C.sf==C.of)) goto L_11c365a3;
L_11c36589:;
  /* 11c36589 mov eax, ebx */
  EAX = (EBX);
L_11c3658b:;
  /* 11c3658b pop edi */
  EDI = (pop32());
  /* 11c3658c pop esi */
  ESI = (pop32());
  /* 11c3658d pop ebx */
  EBX = (pop32());
  /* 11c3658e ret  */
  ESPCHK(0x11c3642bu, _esp0);
  ESP += 4; return;
L_11c3658f:;
  /* 11c3658f cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c36591 jl 0x11c36589 */
  if ((C.sf!=C.of)) goto L_11c36589;
  /* 11c36593 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c36595 jg 0x11c36589 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c36589;
  /* 11c36597 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c36599 jle 0x11c365a3 */
  if ((C.zf||C.sf!=C.of)) goto L_11c365a3;
  /* 11c3659b cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3659d jl 0x11c36438 */
  if ((C.sf!=C.of)) goto L_11c36438;
L_11c365a3:;
  /* 11c365a3 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 11c365a6 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c365a9 add eax, dword ptr [esi + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c365ac imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c365af add eax, dword ptr [esi] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c365b1 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c365b7 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c365b9 jne 0x11c365ca */
  if (!C.zf) goto L_11c365ca;
  /* 11c365bb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11c365bd cmp eax, dword ptr [0x11c3fb28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11c3fb28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c365c3 setge cl */
  CL = (((C.sf==C.of)) ? 1u : 0u);
L_11c365c6:;
  /* 11c365c6 mov eax, ecx */
  EAX = (ECX);
  /* 11c365c8 jmp 0x11c3658b */
  goto L_11c3658b;
L_11c365ca:;
  /* 11c365ca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11c365cc cmp eax, dword ptr [0x11c3fb38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11c3fb38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c365d2 setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 11c365d5 jmp 0x11c365c6 */
  goto L_11c365c6;
}

/* FUN_100065d7 @ 0x11c365d7 (320 bytes, 101 insns) */
void f_11c365d7(void) {
  FTRACE(0x11c365d7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c365d7 push ebp */
  push32((uint32_t)(EBP));
  /* 11c365d8 mov ebp, esp */
  EBP = (ESP);
  /* 11c365da cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c365de push ebx */
  push32((uint32_t)(EBX));
  /* 11c365df mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c365e2 push esi */
  push32((uint32_t)(ESI));
  /* 11c365e3 jne 0x11c36672 */
  if (!C.zf) goto L_11c36672;
  /* 11c365e9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11c365ec mov dword ptr [ebp + 0x10], ebx */
  w32((uint32_t)(EBP + 0x10), (EBX));
  /* 11c365ef and dword ptr [ebp + 0x10], 3 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))&(0x3u); w32((uint32_t)(EBP + 0x10), (_r)); fl_logic(_r,32); }
  /* 11c365f3 mov esi, eax */
  ESI = (EAX);
  /* 11c365f5 jne 0x11c36602 */
  if (!C.zf) goto L_11c36602;
  /* 11c365f7 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11c365fa mov eax, dword ptr [esi + 0x11c3fb38] */
  EAX = (r32((uint32_t)(ESI + 0x11c3fb38)));
  /* 11c36600 jmp 0x11c3660b */
  goto L_11c3660b;
L_11c36602:;
  /* 11c36602 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11c36605 mov eax, dword ptr [esi + 0x11c3fb6c] */
  EAX = (r32((uint32_t)(ESI + 0x11c3fb6c)));
L_11c3660b:;
  /* 11c3660b mov edx, ebx */
  EDX = (EBX);
  /* 11c3660d lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 11c36610 imul edx, edx, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x16du); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c36616 lea eax, [ebx - 1] */
  EAX = ((uint32_t)(EBX + -0x1));
  /* 11c36619 push edi */
  push32((uint32_t)(EDI));
  /* 11c3661a sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11c3661d mov edi, ecx */
  EDI = (ECX);
  /* 11c3661f push 7 */
  push32((uint32_t)(0x7u));
  /* 11c36621 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c36623 lea eax, [edx + edi - 0x63db] */
  EAX = ((uint32_t)(EDX + EDI*1 + -0x63db));
  /* 11c3662a pop edi */
  EDI = (pop32());
  /* 11c3662b cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11c3662c idiv edi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(EDI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11c3662e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11c36631 pop edi */
  EDI = (pop32());
  /* 11c36632 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c36635 jg 0x11c36645 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c36645;
  /* 11c36637 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c3663a sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3663c add eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3663f lea ecx, [ecx + eax - 7] */
  ECX = ((uint32_t)(ECX + EAX*1 + -0x7));
  /* 11c36643 jmp 0x11c3664f */
  goto L_11c3664f;
L_11c36645:;
  /* 11c36645 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c36648 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3664a add eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3664d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
L_11c3664f:;
  /* 11c3664f cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c36653 jne 0x11c3668d */
  if (!C.zf) goto L_11c3668d;
  /* 11c36655 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c36659 jne 0x11c36663 */
  if (!C.zf) goto L_11c36663;
  /* 11c3665b mov esi, dword ptr [esi + 0x11c3fb3c] */
  ESI = (r32((uint32_t)(ESI + 0x11c3fb3c)));
  /* 11c36661 jmp 0x11c36669 */
  goto L_11c36669;
L_11c36663:;
  /* 11c36663 mov esi, dword ptr [esi + 0x11c3fb70] */
  ESI = (r32((uint32_t)(ESI + 0x11c3fb70)));
L_11c36669:;
  /* 11c36669 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3666b jle 0x11c3668d */
  if ((C.zf||C.sf!=C.of)) goto L_11c3668d;
  /* 11c3666d sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c36670 jmp 0x11c3668d */
  goto L_11c3668d;
L_11c36672:;
  /* 11c36672 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11c36675 test bl, 3 */
  { uint32_t _r=(BL)&(0x3u); fl_logic(_r,8); }
  /* 11c36678 jne 0x11c36683 */
  if (!C.zf) goto L_11c36683;
  /* 11c3667a mov ecx, dword ptr [eax*4 + 0x11c3fb38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11c3fb38)));
  /* 11c36681 jmp 0x11c3668a */
  goto L_11c3668a;
L_11c36683:;
  /* 11c36683 mov ecx, dword ptr [eax*4 + 0x11c3fb6c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11c3fb6c)));
L_11c3668a:;
  /* 11c3668a add ecx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
L_11c3668d:;
  /* 11c3668d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c36691 jne 0x11c366be */
  if (!C.zf) goto L_11c366be;
  /* 11c36693 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11c36696 mov dword ptr [0x11c3fb24], ecx */
  w32((uint32_t)(0x11c3fb24), (ECX));
  /* 11c3669c imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c3669f add eax, dword ptr [ebp + 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c366a2 mov dword ptr [0x11c3fb20], ebx */
  w32((uint32_t)(0x11c3fb20), (EBX));
  /* 11c366a8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c366ab add eax, dword ptr [ebp + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c366ae imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c366b4 add eax, dword ptr [ebp + 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c366b7 mov dword ptr [0x11c3fb28], eax */
  w32((uint32_t)(0x11c3fb28), (EAX));
  /* 11c366bc jmp 0x11c36713 */
  goto L_11c36713;
L_11c366be:;
  /* 11c366be mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11c366c1 mov dword ptr [0x11c3fb34], ecx */
  w32((uint32_t)(0x11c3fb34), (ECX));
  /* 11c366c7 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c366ca add eax, dword ptr [ebp + 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c366cd imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c366d0 add eax, dword ptr [0x11c3fa90] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11c3fa90))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c366d6 add eax, dword ptr [ebp + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c366d9 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c366df add eax, dword ptr [ebp + 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c366e2 mov dword ptr [0x11c3fb38], eax */
  w32((uint32_t)(0x11c3fb38), (EAX));
  /* 11c366e7 jns 0x11c366f6 */
  if (!C.sf) goto L_11c366f6;
  /* 11c366e9 add eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c366ee dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c366ef mov dword ptr [0x11c3fb38], eax */
  w32((uint32_t)(0x11c3fb38), (EAX));
  /* 11c366f4 jmp 0x11c36707 */
  goto L_11c36707;
L_11c366f6:;
  /* 11c366f6 mov edx, 0x5265c00 */
  EDX = (0x5265c00u);
  /* 11c366fb cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c366fd jl 0x11c3670d */
  if ((C.sf!=C.of)) goto L_11c3670d;
  /* 11c366ff sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c36701 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c36702 mov dword ptr [0x11c3fb38], eax */
  w32((uint32_t)(0x11c3fb38), (EAX));
L_11c36707:;
  /* 11c36707 mov dword ptr [0x11c3fb34], ecx */
  w32((uint32_t)(0x11c3fb34), (ECX));
L_11c3670d:;
  /* 11c3670d mov dword ptr [0x11c3fb30], ebx */
  w32((uint32_t)(0x11c3fb30), (EBX));
L_11c36713:;
  /* 11c36713 pop esi */
  ESI = (pop32());
  /* 11c36714 pop ebx */
  EBX = (pop32());
  /* 11c36715 pop ebp */
  EBP = (pop32());
  /* 11c36716 ret  */
  ESPCHK(0x11c365d7u, _esp0);
  ESP += 4; return;
}

/* FUN_10006717 @ 0x11c36717 (72 bytes, 17 insns) */
void f_11c36717(void) {
  FTRACE(0x11c36717u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c36717 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 11c3671c push 0 */
  push32((uint32_t)(0x0u));
  /* 11c3671e push dword ptr [0x11c57d40] */
  push32((uint32_t)(r32((uint32_t)(0x11c57d40))));
  /* 11c36724 call dword ptr [0x11c3d0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d0e8))), 0x11c3672au);
  /* 11c3672a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3672c mov dword ptr [0x11c57d38], eax */
  w32((uint32_t)(0x11c57d38), (EAX));
  /* 11c36731 jne 0x11c36734 */
  if (!C.zf) goto L_11c36734;
  /* 11c36733 ret  */
  ESPCHK(0x11c36717u, _esp0);
  ESP += 4; return;
L_11c36734:;
  /* 11c36734 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c36738 and dword ptr [0x11c57d30], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11c57d30)))&(0x0u); w32((uint32_t)(0x11c57d30), (_r)); fl_logic(_r,32); }
  /* 11c3673f and dword ptr [0x11c57d34], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11c57d34)))&(0x0u); w32((uint32_t)(0x11c57d34), (_r)); fl_logic(_r,32); }
  /* 11c36746 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c36748 mov dword ptr [0x11c57d2c], eax */
  w32((uint32_t)(0x11c57d2c), (EAX));
  /* 11c3674d mov dword ptr [0x11c57d3c], ecx */
  w32((uint32_t)(0x11c57d3c), (ECX));
  /* 11c36753 mov dword ptr [0x11c57d24], 0x10 */
  w32((uint32_t)(0x11c57d24), (0x10u));
  /* 11c3675d pop eax */
  EAX = (pop32());
  /* 11c3675e ret  */
  ESPCHK(0x11c36717u, _esp0);
  ESP += 4; return;
}

/* FUN_1000675f @ 0x11c3675f (43 bytes, 14 insns) */
void f_11c3675f(void) {
  FTRACE(0x11c3675fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3675f mov eax, dword ptr [0x11c57d34] */
  EAX = (r32((uint32_t)(0x11c57d34)));
  /* 11c36764 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11c36767 mov eax, dword ptr [0x11c57d38] */
  EAX = (r32((uint32_t)(0x11c57d38)));
  /* 11c3676c lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_11c3676f:;
  /* 11c3676f cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c36771 jae 0x11c36787 */
  if (!C.cf) goto L_11c36787;
  /* 11c36773 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c36777 sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3677a cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c36780 jb 0x11c36789 */
  if (C.cf) goto L_11c36789;
  /* 11c36782 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c36785 jmp 0x11c3676f */
  goto L_11c3676f;
L_11c36787:;
  /* 11c36787 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c36789:;
  /* 11c36789 ret  */
  ESPCHK(0x11c3675fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000678a @ 0x11c3678a (809 bytes, 265 insns) */
void f_11c3678a(void) {
  FTRACE(0x11c3678au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3678a push ebp */
  push32((uint32_t)(EBP));
  /* 11c3678b mov ebp, esp */
  EBP = (ESP);
  /* 11c3678d sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c36790 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c36793 push ebx */
  push32((uint32_t)(EBX));
  /* 11c36794 push esi */
  push32((uint32_t)(ESI));
  /* 11c36795 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11c36798 mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 11c3679b push edi */
  push32((uint32_t)(EDI));
  /* 11c3679c mov edi, esi */
  EDI = (ESI);
  /* 11c3679e add esi, -4 */
  { uint32_t _a=(ESI),_b=(0xfffffffcu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c367a1 sub edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c367a4 shr edi, 0xf */
  EDI = (sh_shr((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 11c367a7 mov ecx, edi */
  ECX = (EDI);
  /* 11c367a9 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c367af lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11c367b6 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11c367b9 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11c367bb dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c367bc test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 11c367bf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11c367c2 jne 0x11c36aae */
  if (!C.zf) goto L_11c36aae;
  /* 11c367c8 mov edx, dword ptr [ecx + esi] */
  EDX = (r32((uint32_t)(ECX + ESI*1)));
  /* 11c367cb lea ebx, [ecx + esi] */
  EBX = ((uint32_t)(ECX + ESI*1));
  /* 11c367ce mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11c367d1 mov edx, dword ptr [esi - 4] */
  EDX = (r32((uint32_t)(ESI + -0x4)));
  /* 11c367d4 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11c367d7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11c367da test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 11c367dd mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 11c367e0 jne 0x11c36860 */
  if (!C.zf) goto L_11c36860;
  /* 11c367e2 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11c367e5 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11c367e6 cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c367e9 jbe 0x11c367ee */
  if ((C.cf||C.zf)) goto L_11c367ee;
  /* 11c367eb push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11c367ed pop edx */
  EDX = (pop32());
L_11c367ee:;
  /* 11c367ee mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11c367f1 cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c367f4 jne 0x11c36842 */
  if (!C.zf) goto L_11c36842;
  /* 11c367f6 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c367f9 jae 0x11c36819 */
  if (!C.cf) goto L_11c36819;
  /* 11c367fb mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11c36800 mov ecx, edx */
  ECX = (EDX);
  /* 11c36802 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11c36804 lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 11c36808 not ebx */
  EBX = (~(EBX));
  /* 11c3680a and dword ptr [eax + edi*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11c3680e dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11c36810 jne 0x11c3683a */
  if (!C.zf) goto L_11c3683a;
  /* 11c36812 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c36815 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11c36817 jmp 0x11c3683a */
  goto L_11c3683a;
L_11c36819:;
  /* 11c36819 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 11c3681c mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11c36821 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11c36823 lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 11c36827 not ebx */
  EBX = (~(EBX));
  /* 11c36829 and dword ptr [eax + edi*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11c36830 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11c36832 jne 0x11c3683a */
  if (!C.zf) goto L_11c3683a;
  /* 11c36834 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c36837 and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11c3683a:;
  /* 11c3683a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c3683d mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c36840 jmp 0x11c36845 */
  goto L_11c36845;
L_11c36842:;
  /* 11c36842 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
L_11c36845:;
  /* 11c36845 mov edx, dword ptr [ebx + 8] */
  EDX = (r32((uint32_t)(EBX + 0x8)));
  /* 11c36848 mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 11c3684b add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3684e mov dword ptr [edx + 4], ebx */
  w32((uint32_t)(EDX + 0x4), (EBX));
  /* 11c36851 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c36854 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11c36857 mov ebx, dword ptr [edx + 4] */
  EBX = (r32((uint32_t)(EDX + 0x4)));
  /* 11c3685a mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 11c3685d mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
L_11c36860:;
  /* 11c36860 mov edx, ecx */
  EDX = (ECX);
  /* 11c36862 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11c36865 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11c36866 cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c36869 jbe 0x11c3686e */
  if ((C.cf||C.zf)) goto L_11c3686e;
  /* 11c3686b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11c3686d pop edx */
  EDX = (pop32());
L_11c3686e:;
  /* 11c3686e mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 11c36871 and ebx, 1 */
  { uint32_t _r=(EBX)&(0x1u); EBX = (_r); fl_logic(_r,32); }
  /* 11c36874 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 11c36877 jne 0x11c36911 */
  if (!C.zf) goto L_11c36911;
  /* 11c3687d sub esi, dword ptr [ebp - 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c36880 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 11c36883 sar ebx, 4 */
  EBX = (sh_sar((uint32_t)(EBX), (0x4u)&0x1f, 32));
  /* 11c36886 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11c36888 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11c3688b dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11c3688c pop esi */
  ESI = (pop32());
  /* 11c3688d cmp ebx, esi */
  { uint32_t _a=(EBX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3688f jbe 0x11c36893 */
  if ((C.cf||C.zf)) goto L_11c36893;
  /* 11c36891 mov ebx, esi */
  EBX = (ESI);
L_11c36893:;
  /* 11c36893 add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c36896 mov edx, ecx */
  EDX = (ECX);
  /* 11c36898 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11c3689b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11c3689e dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11c3689f cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c368a1 jbe 0x11c368a5 */
  if ((C.cf||C.zf)) goto L_11c368a5;
  /* 11c368a3 mov edx, esi */
  EDX = (ESI);
L_11c368a5:;
  /* 11c368a5 cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c368a7 je 0x11c3690c */
  if (C.zf) goto L_11c3690c;
  /* 11c368a9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c368ac mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 11c368af cmp esi, dword ptr [ecx + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c368b2 jne 0x11c368f4 */
  if (!C.zf) goto L_11c368f4;
  /* 11c368b4 cmp ebx, 0x20 */
  { uint32_t _a=(EBX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c368b7 jae 0x11c368d5 */
  if (!C.cf) goto L_11c368d5;
  /* 11c368b9 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11c368be mov ecx, ebx */
  ECX = (EBX);
  /* 11c368c0 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11c368c2 not esi */
  ESI = (~(ESI));
  /* 11c368c4 and dword ptr [eax + edi*4 + 0x44], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11c368c8 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 11c368cc jne 0x11c368f4 */
  if (!C.zf) goto L_11c368f4;
  /* 11c368ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c368d1 and dword ptr [ecx], esi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(ESI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11c368d3 jmp 0x11c368f4 */
  goto L_11c368f4;
L_11c368d5:;
  /* 11c368d5 lea ecx, [ebx - 0x20] */
  ECX = ((uint32_t)(EBX + -0x20));
  /* 11c368d8 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11c368dd shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11c368df not esi */
  ESI = (~(ESI));
  /* 11c368e1 and dword ptr [eax + edi*4 + 0xc4], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11c368e8 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 11c368ec jne 0x11c368f4 */
  if (!C.zf) goto L_11c368f4;
  /* 11c368ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c368f1 and dword ptr [ecx + 4], esi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(ESI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11c368f4:;
  /* 11c368f4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c368f7 mov esi, dword ptr [ecx + 8] */
  ESI = (r32((uint32_t)(ECX + 0x8)));
  /* 11c368fa mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11c368fd mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 11c36900 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c36903 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 11c36906 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 11c36909 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
L_11c3690c:;
  /* 11c3690c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11c3690f jmp 0x11c36914 */
  goto L_11c36914;
L_11c36911:;
  /* 11c36911 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11c36914:;
  /* 11c36914 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c36918 jne 0x11c36922 */
  if (!C.zf) goto L_11c36922;
  /* 11c3691a cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3691c je 0x11c369a3 */
  if (C.zf) goto L_11c369a3;
L_11c36922:;
  /* 11c36922 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11c36925 mov ebx, dword ptr [ecx + edx*8 + 4] */
  EBX = (r32((uint32_t)(ECX + EDX*8 + 0x4)));
  /* 11c36929 lea ecx, [ecx + edx*8] */
  ECX = ((uint32_t)(ECX + EDX*8));
  /* 11c3692c mov dword ptr [esi + 4], ebx */
  w32((uint32_t)(ESI + 0x4), (EBX));
  /* 11c3692f mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
  /* 11c36932 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11c36935 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11c36938 mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 11c3693b mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11c3693e cmp ecx, dword ptr [esi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(ESI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c36941 jne 0x11c369a3 */
  if (!C.zf) goto L_11c369a3;
  /* 11c36943 mov cl, byte ptr [edx + eax + 4] */
  CL = (r8((uint32_t)(EDX + EAX*1 + 0x4)));
  /* 11c36947 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3694a mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 11c3694d inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11c3694f mov byte ptr [edx + eax + 4], cl */
  w8((uint32_t)(EDX + EAX*1 + 0x4), (CL));
  /* 11c36953 jae 0x11c3697a */
  if (!C.cf) goto L_11c3697a;
  /* 11c36955 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c36959 jne 0x11c36969 */
  if (!C.zf) goto L_11c36969;
  /* 11c3695b mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11c36960 mov ecx, edx */
  ECX = (EDX);
  /* 11c36962 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11c36964 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c36967 or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_11c36969:;
  /* 11c36969 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11c3696e mov ecx, edx */
  ECX = (EDX);
  /* 11c36970 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11c36972 lea eax, [eax + edi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0x44));
  /* 11c36976 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11c36978 jmp 0x11c369a3 */
  goto L_11c369a3;
L_11c3697a:;
  /* 11c3697a cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3697e jne 0x11c36990 */
  if (!C.zf) goto L_11c36990;
  /* 11c36980 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 11c36983 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11c36988 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11c3698a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c3698d or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11c36990:;
  /* 11c36990 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 11c36993 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11c36998 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11c3699a lea eax, [eax + edi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0xc4));
  /* 11c369a1 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_11c369a3:;
  /* 11c369a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c369a6 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11c369a8 mov dword ptr [eax + esi - 4], eax */
  w32((uint32_t)(EAX + ESI*1 + -0x4), (EAX));
  /* 11c369ac mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11c369af dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 11c369b1 jne 0x11c36aae */
  if (!C.zf) goto L_11c36aae;
  /* 11c369b7 mov eax, dword ptr [0x11c57d30] */
  EAX = (r32((uint32_t)(0x11c57d30)));
  /* 11c369bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c369be je 0x11c36aa0 */
  if (C.zf) goto L_11c36aa0;
  /* 11c369c4 mov ecx, dword ptr [0x11c57d28] */
  ECX = (r32((uint32_t)(0x11c57d28)));
  /* 11c369ca mov esi, dword ptr [0x11c3d080] */
  ESI = (r32((uint32_t)(0x11c3d080)));
  /* 11c369d0 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 11c369d3 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c369d6 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 11c369db push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11c369e0 push ebx */
  push32((uint32_t)(EBX));
  /* 11c369e1 push ecx */
  push32((uint32_t)(ECX));
  /* 11c369e2 call esi */
  call_ind((uint32_t)(ESI), 0x11c369e4u);
  /* 11c369e4 mov ecx, dword ptr [0x11c57d28] */
  ECX = (r32((uint32_t)(0x11c57d28)));
  /* 11c369ea mov eax, dword ptr [0x11c57d30] */
  EAX = (r32((uint32_t)(0x11c57d30)));
  /* 11c369ef mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11c369f4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11c369f6 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11c369f9 mov eax, dword ptr [0x11c57d30] */
  EAX = (r32((uint32_t)(0x11c57d30)));
  /* 11c369fe mov ecx, dword ptr [0x11c57d28] */
  ECX = (r32((uint32_t)(0x11c57d28)));
  /* 11c36a04 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11c36a07 and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11c36a0f mov eax, dword ptr [0x11c57d30] */
  EAX = (r32((uint32_t)(0x11c57d30)));
  /* 11c36a14 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11c36a17 dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 11c36a1a mov eax, dword ptr [0x11c57d30] */
  EAX = (r32((uint32_t)(0x11c57d30)));
  /* 11c36a1f mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11c36a22 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c36a26 jne 0x11c36a31 */
  if (!C.zf) goto L_11c36a31;
  /* 11c36a28 and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11c36a2c mov eax, dword ptr [0x11c57d30] */
  EAX = (r32((uint32_t)(0x11c57d30)));
L_11c36a31:;
  /* 11c36a31 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c36a35 jne 0x11c36aa0 */
  if (!C.zf) goto L_11c36aa0;
  /* 11c36a37 push ebx */
  push32((uint32_t)(EBX));
  /* 11c36a38 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c36a3a push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 11c36a3d call esi */
  call_ind((uint32_t)(ESI), 0x11c36a3fu);
  /* 11c36a3f mov eax, dword ptr [0x11c57d30] */
  EAX = (r32((uint32_t)(0x11c57d30)));
  /* 11c36a44 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 11c36a47 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c36a49 push dword ptr [0x11c57d40] */
  push32((uint32_t)(r32((uint32_t)(0x11c57d40))));
  /* 11c36a4f call dword ptr [0x11c3d07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d07c))), 0x11c36a55u);
  /* 11c36a55 mov eax, dword ptr [0x11c57d34] */
  EAX = (r32((uint32_t)(0x11c57d34)));
  /* 11c36a5a mov edx, dword ptr [0x11c57d38] */
  EDX = (r32((uint32_t)(0x11c57d38)));
  /* 11c36a60 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11c36a63 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11c36a66 mov ecx, eax */
  ECX = (EAX);
  /* 11c36a68 mov eax, dword ptr [0x11c57d30] */
  EAX = (r32((uint32_t)(0x11c57d30)));
  /* 11c36a6d sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c36a6f lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 11c36a73 push ecx */
  push32((uint32_t)(ECX));
  /* 11c36a74 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 11c36a77 push ecx */
  push32((uint32_t)(ECX));
  /* 11c36a78 push eax */
  push32((uint32_t)(EAX));
  /* 11c36a79 call 0x11c35a60 */
  push32(0x11c36a7eu); f_11c35a60();
  /* 11c36a7e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c36a81 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c36a84 dec dword ptr [0x11c57d34] */
  { uint32_t _r=(r32((uint32_t)(0x11c57d34)))-1; w32((uint32_t)(0x11c57d34), (_r)); fl_dec(_r,32); }
  /* 11c36a8a cmp eax, dword ptr [0x11c57d30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11c57d30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c36a90 jbe 0x11c36a96 */
  if ((C.cf||C.zf)) goto L_11c36a96;
  /* 11c36a92 sub dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
L_11c36a96:;
  /* 11c36a96 mov eax, dword ptr [0x11c57d38] */
  EAX = (r32((uint32_t)(0x11c57d38)));
  /* 11c36a9b mov dword ptr [0x11c57d2c], eax */
  w32((uint32_t)(0x11c57d2c), (EAX));
L_11c36aa0:;
  /* 11c36aa0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c36aa3 mov dword ptr [0x11c57d28], edi */
  w32((uint32_t)(0x11c57d28), (EDI));
  /* 11c36aa9 mov dword ptr [0x11c57d30], eax */
  w32((uint32_t)(0x11c57d30), (EAX));
L_11c36aae:;
  /* 11c36aae pop edi */
  EDI = (pop32());
  /* 11c36aaf pop esi */
  ESI = (pop32());
  /* 11c36ab0 pop ebx */
  EBX = (pop32());
  /* 11c36ab1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c36ab2 ret  */
  ESPCHK(0x11c3678au, _esp0);
  ESP += 4; return;
}

/* FUN_10006ab3 @ 0x11c36ab3 (777 bytes, 275 insns) */
void f_11c36ab3(void) {
  FTRACE(0x11c36ab3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c36ab3 push ebp */
  push32((uint32_t)(EBP));
  /* 11c36ab4 mov ebp, esp */
  EBP = (ESP);
  /* 11c36ab6 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c36ab9 mov eax, dword ptr [0x11c57d34] */
  EAX = (r32((uint32_t)(0x11c57d34)));
  /* 11c36abe mov edx, dword ptr [0x11c57d38] */
  EDX = (r32((uint32_t)(0x11c57d38)));
  /* 11c36ac4 push ebx */
  push32((uint32_t)(EBX));
  /* 11c36ac5 push esi */
  push32((uint32_t)(ESI));
  /* 11c36ac6 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11c36ac9 push edi */
  push32((uint32_t)(EDI));
  /* 11c36aca lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 11c36acd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c36ad0 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11c36ad3 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 11c36ad6 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 11c36ad9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11c36adc sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11c36adf dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c36ae0 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c36ae3 jge 0x11c36af3 */
  if ((C.sf==C.of)) goto L_11c36af3;
  /* 11c36ae5 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 11c36ae8 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11c36aea or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11c36aee mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11c36af1 jmp 0x11c36b03 */
  goto L_11c36b03;
L_11c36af3:;
  /* 11c36af3 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c36af6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c36af9 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11c36afb shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11c36afd mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11c36b00 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11c36b03:;
  /* 11c36b03 mov eax, dword ptr [0x11c57d2c] */
  EAX = (r32((uint32_t)(0x11c57d2c)));
  /* 11c36b08 mov ebx, eax */
  EBX = (EAX);
  /* 11c36b0a cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c36b0c mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11c36b0f jae 0x11c36b2a */
  if (!C.cf) goto L_11c36b2a;
L_11c36b11:;
  /* 11c36b11 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11c36b14 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11c36b16 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11c36b19 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11c36b1b or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11c36b1d jne 0x11c36b2a */
  if (!C.zf) goto L_11c36b2a;
  /* 11c36b1f add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c36b22 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c36b25 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11c36b28 jb 0x11c36b11 */
  if (C.cf) goto L_11c36b11;
L_11c36b2a:;
  /* 11c36b2a cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c36b2d jne 0x11c36ba8 */
  if (!C.zf) goto L_11c36ba8;
  /* 11c36b2f mov ebx, edx */
  EBX = (EDX);
L_11c36b31:;
  /* 11c36b31 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c36b33 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11c36b36 jae 0x11c36b4d */
  if (!C.cf) goto L_11c36b4d;
  /* 11c36b38 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11c36b3b mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11c36b3d and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11c36b40 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11c36b42 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11c36b44 jne 0x11c36b4b */
  if (!C.zf) goto L_11c36b4b;
  /* 11c36b46 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c36b49 jmp 0x11c36b31 */
  goto L_11c36b31;
L_11c36b4b:;
  /* 11c36b4b cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11c36b4d:;
  /* 11c36b4d jne 0x11c36ba8 */
  if (!C.zf) goto L_11c36ba8;
L_11c36b4f:;
  /* 11c36b4f cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c36b52 jae 0x11c36b65 */
  if (!C.cf) goto L_11c36b65;
  /* 11c36b54 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c36b58 jne 0x11c36b62 */
  if (!C.zf) goto L_11c36b62;
  /* 11c36b5a add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c36b5d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11c36b60 jmp 0x11c36b4f */
  goto L_11c36b4f;
L_11c36b62:;
  /* 11c36b62 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11c36b65:;
  /* 11c36b65 jne 0x11c36b8d */
  if (!C.zf) goto L_11c36b8d;
  /* 11c36b67 mov ebx, edx */
  EBX = (EDX);
L_11c36b69:;
  /* 11c36b69 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c36b6b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11c36b6e jae 0x11c36b7d */
  if (!C.cf) goto L_11c36b7d;
  /* 11c36b70 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c36b74 jne 0x11c36b7b */
  if (!C.zf) goto L_11c36b7b;
  /* 11c36b76 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c36b79 jmp 0x11c36b69 */
  goto L_11c36b69;
L_11c36b7b:;
  /* 11c36b7b cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11c36b7d:;
  /* 11c36b7d jne 0x11c36b8d */
  if (!C.zf) goto L_11c36b8d;
  /* 11c36b7f call 0x11c36dbc */
  push32(0x11c36b84u); f_11c36dbc();
  /* 11c36b84 mov ebx, eax */
  EBX = (EAX);
  /* 11c36b86 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11c36b88 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11c36b8b je 0x11c36ba1 */
  if (C.zf) goto L_11c36ba1;
L_11c36b8d:;
  /* 11c36b8d push ebx */
  push32((uint32_t)(EBX));
  /* 11c36b8e call 0x11c36e6d */
  push32(0x11c36b93u); f_11c36e6d();
  /* 11c36b93 pop ecx */
  ECX = (pop32());
  /* 11c36b94 mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 11c36b97 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11c36b99 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11c36b9c cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c36b9f jne 0x11c36ba8 */
  if (!C.zf) goto L_11c36ba8;
L_11c36ba1:;
  /* 11c36ba1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c36ba3 jmp 0x11c36db7 */
  goto L_11c36db7;
L_11c36ba8:;
  /* 11c36ba8 mov dword ptr [0x11c57d2c], ebx */
  w32((uint32_t)(0x11c57d2c), (EBX));
  /* 11c36bae mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11c36bb1 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11c36bb3 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c36bb6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11c36bb9 je 0x11c36bcf */
  if (C.zf) goto L_11c36bcf;
  /* 11c36bbb mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11c36bc2 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11c36bc6 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11c36bc9 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11c36bcb or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11c36bcd jne 0x11c36c06 */
  if (!C.zf) goto L_11c36c06;
L_11c36bcf:;
  /* 11c36bcf mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 11c36bd5 mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 11c36bd8 and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11c36bdb and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 11c36bde and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c36be2 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 11c36be5 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 11c36be7 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11c36bea jne 0x11c36c03 */
  if (!C.zf) goto L_11c36c03;
L_11c36bec:;
  /* 11c36bec mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 11c36bf2 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11c36bf5 and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11c36bf8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c36bfb mov edi, esi */
  EDI = (ESI);
  /* 11c36bfd and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 11c36bff or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 11c36c01 je 0x11c36bec */
  if (C.zf) goto L_11c36bec;
L_11c36c03:;
  /* 11c36c03 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_11c36c06:;
  /* 11c36c06 mov ecx, edx */
  ECX = (EDX);
  /* 11c36c08 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11c36c0a imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c36c10 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11c36c17 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11c36c1a mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11c36c1e and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 11c36c20 jne 0x11c36c2f */
  if (!C.zf) goto L_11c36c2f;
  /* 11c36c22 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11c36c29 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11c36c2b and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11c36c2e pop edi */
  EDI = (pop32());
L_11c36c2f:;
  /* 11c36c2f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11c36c31 jl 0x11c36c38 */
  if ((C.sf!=C.of)) goto L_11c36c38;
  /* 11c36c33 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11c36c35 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c36c36 jmp 0x11c36c2f */
  goto L_11c36c2f;
L_11c36c38:;
  /* 11c36c38 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11c36c3b mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 11c36c3f mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11c36c41 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c36c44 mov esi, ecx */
  ESI = (ECX);
  /* 11c36c46 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11c36c49 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11c36c4c dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11c36c4d cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c36c50 jle 0x11c36c55 */
  if ((C.zf||C.sf!=C.of)) goto L_11c36c55;
  /* 11c36c52 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11c36c54 pop esi */
  ESI = (pop32());
L_11c36c55:;
  /* 11c36c55 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c36c57 je 0x11c36d6a */
  if (C.zf) goto L_11c36d6a;
  /* 11c36c5d mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11c36c60 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c36c63 jne 0x11c36cc6 */
  if (!C.zf) goto L_11c36cc6;
  /* 11c36c65 cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c36c68 jge 0x11c36c95 */
  if ((C.sf==C.of)) goto L_11c36c95;
  /* 11c36c6a mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11c36c6f mov ecx, edi */
  ECX = (EDI);
  /* 11c36c71 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11c36c73 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c36c76 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11c36c7a not ebx */
  EBX = (~(EBX));
  /* 11c36c7c mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11c36c7f and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 11c36c83 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 11c36c87 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11c36c89 jne 0x11c36cc3 */
  if (!C.zf) goto L_11c36cc3;
  /* 11c36c8b mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c36c8e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11c36c91 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 11c36c93 jmp 0x11c36cc6 */
  goto L_11c36cc6;
L_11c36c95:;
  /* 11c36c95 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11c36c98 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11c36c9d shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11c36c9f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c36ca2 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11c36ca6 lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11c36cad not ebx */
  EBX = (~(EBX));
  /* 11c36caf and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11c36cb1 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11c36cb3 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11c36cb6 jne 0x11c36cc3 */
  if (!C.zf) goto L_11c36cc3;
  /* 11c36cb8 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c36cbb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11c36cbe and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11c36cc1 jmp 0x11c36cc6 */
  goto L_11c36cc6;
L_11c36cc3:;
  /* 11c36cc3 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11c36cc6:;
  /* 11c36cc6 mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 11c36cc9 mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 11c36ccc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c36cd0 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 11c36cd3 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11c36cd6 mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 11c36cd9 mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11c36cdc je 0x11c36d76 */
  if (C.zf) goto L_11c36d76;
  /* 11c36ce2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11c36ce5 mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 11c36ce9 lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 11c36cec mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 11c36cef mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11c36cf2 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11c36cf5 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11c36cf8 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11c36cfb mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11c36cfe cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c36d01 jne 0x11c36d67 */
  if (!C.zf) goto L_11c36d67;
  /* 11c36d03 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 11c36d07 cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c36d0a mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 11c36d0d jge 0x11c36d38 */
  if ((C.sf==C.of)) goto L_11c36d38;
  /* 11c36d0f inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11c36d11 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c36d15 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11c36d19 jne 0x11c36d26 */
  if (!C.zf) goto L_11c36d26;
  /* 11c36d1b mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11c36d20 mov ecx, esi */
  ECX = (ESI);
  /* 11c36d22 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11c36d24 or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_11c36d26:;
  /* 11c36d26 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11c36d2b mov ecx, esi */
  ECX = (ESI);
  /* 11c36d2d shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11c36d2f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c36d32 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11c36d36 jmp 0x11c36d67 */
  goto L_11c36d67;
L_11c36d38:;
  /* 11c36d38 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11c36d3a cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c36d3e mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11c36d42 jne 0x11c36d51 */
  if (!C.zf) goto L_11c36d51;
  /* 11c36d44 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11c36d47 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11c36d4c shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11c36d4e or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_11c36d51:;
  /* 11c36d51 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c36d54 lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11c36d5b lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11c36d5e mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11c36d63 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11c36d65 or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11c36d67:;
  /* 11c36d67 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11c36d6a:;
  /* 11c36d6a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11c36d6c je 0x11c36d79 */
  if (C.zf) goto L_11c36d79;
  /* 11c36d6e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11c36d70 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 11c36d74 jmp 0x11c36d79 */
  goto L_11c36d79;
L_11c36d76:;
  /* 11c36d76 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11c36d79:;
  /* 11c36d79 mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 11c36d7c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c36d7e lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 11c36d81 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11c36d83 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 11c36d87 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11c36d8a mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11c36d8c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11c36d8e lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 11c36d91 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11c36d93 jne 0x11c36daf */
  if (!C.zf) goto L_11c36daf;
  /* 11c36d95 cmp ebx, dword ptr [0x11c57d30] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11c57d30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c36d9b jne 0x11c36daf */
  if (!C.zf) goto L_11c36daf;
  /* 11c36d9d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c36da0 cmp ecx, dword ptr [0x11c57d28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11c57d28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c36da6 jne 0x11c36daf */
  if (!C.zf) goto L_11c36daf;
  /* 11c36da8 and dword ptr [0x11c57d30], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11c57d30)))&(0x0u); w32((uint32_t)(0x11c57d30), (_r)); fl_logic(_r,32); }
L_11c36daf:;
  /* 11c36daf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c36db2 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11c36db4 lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_11c36db7:;
  /* 11c36db7 pop edi */
  EDI = (pop32());
  /* 11c36db8 pop esi */
  ESI = (pop32());
  /* 11c36db9 pop ebx */
  EBX = (pop32());
  /* 11c36dba leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c36dbb ret  */
  ESPCHK(0x11c36ab3u, _esp0);
  ESP += 4; return;
}

/* FUN_10006dbc @ 0x11c36dbc (177 bytes, 53 insns) */
void f_11c36dbc(void) {
  FTRACE(0x11c36dbcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c36dbc mov eax, dword ptr [0x11c57d34] */
  EAX = (r32((uint32_t)(0x11c57d34)));
  /* 11c36dc1 mov ecx, dword ptr [0x11c57d24] */
  ECX = (r32((uint32_t)(0x11c57d24)));
  /* 11c36dc7 push esi */
  push32((uint32_t)(ESI));
  /* 11c36dc8 push edi */
  push32((uint32_t)(EDI));
  /* 11c36dc9 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11c36dcb cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c36dcd jne 0x11c36dff */
  if (!C.zf) goto L_11c36dff;
  /* 11c36dcf lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 11c36dd3 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11c36dd6 push eax */
  push32((uint32_t)(EAX));
  /* 11c36dd7 push dword ptr [0x11c57d38] */
  push32((uint32_t)(r32((uint32_t)(0x11c57d38))));
  /* 11c36ddd push edi */
  push32((uint32_t)(EDI));
  /* 11c36dde push dword ptr [0x11c57d40] */
  push32((uint32_t)(r32((uint32_t)(0x11c57d40))));
  /* 11c36de4 call dword ptr [0x11c3d0e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d0e4))), 0x11c36deau);
  /* 11c36dea cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c36dec je 0x11c36e4f */
  if (C.zf) goto L_11c36e4f;
  /* 11c36dee add dword ptr [0x11c57d24], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x11c57d24))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x11c57d24), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c36df5 mov dword ptr [0x11c57d38], eax */
  w32((uint32_t)(0x11c57d38), (EAX));
  /* 11c36dfa mov eax, dword ptr [0x11c57d34] */
  EAX = (r32((uint32_t)(0x11c57d34)));
L_11c36dff:;
  /* 11c36dff mov ecx, dword ptr [0x11c57d38] */
  ECX = (r32((uint32_t)(0x11c57d38)));
  /* 11c36e05 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11c36e0a push 8 */
  push32((uint32_t)(0x8u));
  /* 11c36e0c lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11c36e0f push dword ptr [0x11c57d40] */
  push32((uint32_t)(r32((uint32_t)(0x11c57d40))));
  /* 11c36e15 lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11c36e18 call dword ptr [0x11c3d0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d0e8))), 0x11c36e1eu);
  /* 11c36e1e cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c36e20 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 11c36e23 je 0x11c36e4f */
  if (C.zf) goto L_11c36e4f;
  /* 11c36e25 push 4 */
  push32((uint32_t)(0x4u));
  /* 11c36e27 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11c36e2c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11c36e31 push edi */
  push32((uint32_t)(EDI));
  /* 11c36e32 call dword ptr [0x11c3d060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d060))), 0x11c36e38u);
  /* 11c36e38 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c36e3a mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11c36e3d jne 0x11c36e53 */
  if (!C.zf) goto L_11c36e53;
  /* 11c36e3f push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11c36e42 push edi */
  push32((uint32_t)(EDI));
  /* 11c36e43 push dword ptr [0x11c57d40] */
  push32((uint32_t)(r32((uint32_t)(0x11c57d40))));
  /* 11c36e49 call dword ptr [0x11c3d07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d07c))), 0x11c36e4fu);
L_11c36e4f:;
  /* 11c36e4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c36e51 jmp 0x11c36e6a */
  goto L_11c36e6a;
L_11c36e53:;
  /* 11c36e53 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11c36e57 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11c36e59 mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 11c36e5c inc dword ptr [0x11c57d34] */
  { uint32_t _r=(r32((uint32_t)(0x11c57d34)))+1; w32((uint32_t)(0x11c57d34), (_r)); fl_inc(_r,32); }
  /* 11c36e62 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11c36e65 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11c36e68 mov eax, esi */
  EAX = (ESI);
L_11c36e6a:;
  /* 11c36e6a pop edi */
  EDI = (pop32());
  /* 11c36e6b pop esi */
  ESI = (pop32());
  /* 11c36e6c ret  */
  ESPCHK(0x11c36dbcu, _esp0);
  ESP += 4; return;
}

/* FUN_10006e6d @ 0x11c36e6d (251 bytes, 85 insns) */
void f_11c36e6d(void) {
  FTRACE(0x11c36e6du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c36e6d push ebp */
  push32((uint32_t)(EBP));
  /* 11c36e6e mov ebp, esp */
  EBP = (ESP);
  /* 11c36e70 push ecx */
  push32((uint32_t)(ECX));
  /* 11c36e71 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c36e74 push ebx */
  push32((uint32_t)(EBX));
  /* 11c36e75 push esi */
  push32((uint32_t)(ESI));
  /* 11c36e76 push edi */
  push32((uint32_t)(EDI));
  /* 11c36e77 mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 11c36e7a mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 11c36e7d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11c36e7f:;
  /* 11c36e7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c36e81 jl 0x11c36e88 */
  if ((C.sf!=C.of)) goto L_11c36e88;
  /* 11c36e83 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11c36e85 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11c36e86 jmp 0x11c36e7f */
  goto L_11c36e7f;
L_11c36e88:;
  /* 11c36e88 mov eax, ebx */
  EAX = (EBX);
  /* 11c36e8a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11c36e8c imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c36e92 pop edx */
  EDX = (pop32());
  /* 11c36e93 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 11c36e9a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11c36e9d:;
  /* 11c36e9d mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 11c36ea0 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 11c36ea3 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c36ea6 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11c36ea7 jne 0x11c36e9d */
  if (!C.zf) goto L_11c36e9d;
  /* 11c36ea9 mov edi, ebx */
  EDI = (EBX);
  /* 11c36eab push 4 */
  push32((uint32_t)(0x4u));
  /* 11c36ead shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 11c36eb0 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c36eb3 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11c36eb8 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11c36ebd push edi */
  push32((uint32_t)(EDI));
  /* 11c36ebe call dword ptr [0x11c3d060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d060))), 0x11c36ec4u);
  /* 11c36ec4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c36ec6 jne 0x11c36ed0 */
  if (!C.zf) goto L_11c36ed0;
  /* 11c36ec8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c36ecb jmp 0x11c36f63 */
  goto L_11c36f63;
L_11c36ed0:;
  /* 11c36ed0 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 11c36ed6 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c36ed8 ja 0x11c36f16 */
  if ((!C.cf&&!C.zf)) goto L_11c36f16;
  /* 11c36eda lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_11c36edd:;
  /* 11c36edd or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 11c36ee1 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 11c36ee8 lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 11c36eee mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 11c36ef5 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11c36ef7 lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 11c36efd mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11c36f00 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 11c36f0a add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c36f0f lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 11c36f12 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c36f14 jbe 0x11c36edd */
  if ((C.cf||C.zf)) goto L_11c36edd;
L_11c36f16:;
  /* 11c36f16 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c36f19 lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 11c36f1c add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c36f21 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c36f23 pop edi */
  EDI = (pop32());
  /* 11c36f24 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11c36f27 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11c36f2a lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 11c36f2d mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11c36f30 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11c36f33 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11c36f38 mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 11c36f3f mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 11c36f42 mov cl, al */
  CL = (AL);
  /* 11c36f44 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11c36f46 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c36f48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c36f4b mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 11c36f4e jne 0x11c36f53 */
  if (!C.zf) goto L_11c36f53;
  /* 11c36f50 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_11c36f53:;
  /* 11c36f53 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11c36f58 mov ecx, ebx */
  ECX = (EBX);
  /* 11c36f5a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11c36f5c not edx */
  EDX = (~(EDX));
  /* 11c36f5e and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11c36f61 mov eax, ebx */
  EAX = (EBX);
L_11c36f63:;
  /* 11c36f63 pop edi */
  EDI = (pop32());
  /* 11c36f64 pop esi */
  ESI = (pop32());
  /* 11c36f65 pop ebx */
  EBX = (pop32());
  /* 11c36f66 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c36f67 ret  */
  ESPCHK(0x11c36e6du, _esp0);
  ESP += 4; return;
}

/* FUN_10006f68 @ 0x11c36f68 (758 bytes, 259 insns) */
void f_11c36f68(void) {
  FTRACE(0x11c36f68u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c36f68 push ebp */
  push32((uint32_t)(EBP));
  /* 11c36f69 mov ebp, esp */
  EBP = (ESP);
  /* 11c36f6b sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c36f6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c36f71 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c36f74 push ebx */
  push32((uint32_t)(EBX));
  /* 11c36f75 push esi */
  push32((uint32_t)(ESI));
  /* 11c36f76 push edi */
  push32((uint32_t)(EDI));
  /* 11c36f77 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11c36f7a mov edx, edi */
  EDX = (EDI);
  /* 11c36f7c lea esi, [eax + 0x17] */
  ESI = ((uint32_t)(EAX + 0x17));
  /* 11c36f7f sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c36f82 mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 11c36f85 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11c36f88 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11c36f8b mov ecx, edx */
  ECX = (EDX);
  /* 11c36f8d imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c36f93 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11c36f9a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11c36f9d mov ecx, dword ptr [edi - 4] */
  ECX = (r32((uint32_t)(EDI + -0x4)));
  /* 11c36fa0 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c36fa1 cmp esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c36fa3 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11c36fa6 mov ebx, dword ptr [ecx + edi - 4] */
  EBX = (r32((uint32_t)(ECX + EDI*1 + -0x4)));
  /* 11c36faa lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11c36fae mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11c36fb1 jle 0x11c37116 */
  if ((C.zf||C.sf!=C.of)) goto L_11c37116;
  /* 11c36fb7 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11c36fba jne 0x11c3710f */
  if (!C.zf) goto L_11c3710f;
  /* 11c36fc0 add ebx, ecx */
  { uint32_t _a=(EBX),_b=(ECX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c36fc2 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c36fc4 jg 0x11c3710f */
  if ((!C.zf&&C.sf==C.of)) goto L_11c3710f;
  /* 11c36fca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c36fcd sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11c36fd0 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c36fd1 cmp ecx, 0x3f */
  { uint32_t _a=(ECX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c36fd4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11c36fd7 jbe 0x11c36fdf */
  if ((C.cf||C.zf)) goto L_11c36fdf;
  /* 11c36fd9 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11c36fdb pop ecx */
  ECX = (pop32());
  /* 11c36fdc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11c36fdf:;
  /* 11c36fdf mov ebx, dword ptr [edi + 4] */
  EBX = (r32((uint32_t)(EDI + 0x4)));
  /* 11c36fe2 cmp ebx, dword ptr [edi + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c36fe5 jne 0x11c3702f */
  if (!C.zf) goto L_11c3702f;
  /* 11c36fe7 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c36fea jae 0x11c3700b */
  if (!C.cf) goto L_11c3700b;
  /* 11c36fec mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11c36ff1 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11c36ff3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11c36ff6 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11c36ffa not ebx */
  EBX = (~(EBX));
  /* 11c36ffc and dword ptr [eax + edx*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11c37000 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11c37002 jne 0x11c3702f */
  if (!C.zf) goto L_11c3702f;
  /* 11c37004 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c37007 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11c37009 jmp 0x11c3702f */
  goto L_11c3702f;
L_11c3700b:;
  /* 11c3700b add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3700e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11c37013 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11c37015 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11c37018 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11c3701c not ebx */
  EBX = (~(EBX));
  /* 11c3701e and dword ptr [eax + edx*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11c37025 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11c37027 jne 0x11c3702f */
  if (!C.zf) goto L_11c3702f;
  /* 11c37029 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c3702c and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11c3702f:;
  /* 11c3702f mov ecx, dword ptr [edi + 8] */
  ECX = (r32((uint32_t)(EDI + 0x8)));
  /* 11c37032 mov ebx, dword ptr [edi + 4] */
  EBX = (r32((uint32_t)(EDI + 0x4)));
  /* 11c37035 mov dword ptr [ecx + 4], ebx */
  w32((uint32_t)(ECX + 0x4), (EBX));
  /* 11c37038 mov ecx, dword ptr [edi + 4] */
  ECX = (r32((uint32_t)(EDI + 0x4)));
  /* 11c3703b mov edi, dword ptr [edi + 8] */
  EDI = (r32((uint32_t)(EDI + 0x8)));
  /* 11c3703e mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11c37041 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c37044 sub ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c37046 add dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c37049 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3704d jle 0x11c370fd */
  if ((C.zf||C.sf!=C.of)) goto L_11c370fd;
  /* 11c37053 mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 11c37056 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c37059 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 11c3705c dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11c3705d lea ecx, [ecx + esi - 4] */
  ECX = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11c37061 cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c37064 jbe 0x11c37069 */
  if ((C.cf||C.zf)) goto L_11c37069;
  /* 11c37066 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11c37068 pop edi */
  EDI = (pop32());
L_11c37069:;
  /* 11c37069 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
  /* 11c3706c lea ebx, [ebx + edi*8] */
  EBX = ((uint32_t)(EBX + EDI*8));
  /* 11c3706f mov dword ptr [ebp + 0x10], ebx */
  w32((uint32_t)(EBP + 0x10), (EBX));
  /* 11c37072 mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 11c37075 mov dword ptr [ecx + 4], ebx */
  w32((uint32_t)(ECX + 0x4), (EBX));
  /* 11c37078 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c3707b mov dword ptr [ecx + 8], ebx */
  w32((uint32_t)(ECX + 0x8), (EBX));
  /* 11c3707e mov dword ptr [ebx + 4], ecx */
  w32((uint32_t)(EBX + 0x4), (ECX));
  /* 11c37081 mov ebx, dword ptr [ecx + 4] */
  EBX = (r32((uint32_t)(ECX + 0x4)));
  /* 11c37084 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11c37087 mov ebx, dword ptr [ecx + 4] */
  EBX = (r32((uint32_t)(ECX + 0x4)));
  /* 11c3708a cmp ebx, dword ptr [ecx + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3708d jne 0x11c370eb */
  if (!C.zf) goto L_11c370eb;
  /* 11c3708f mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 11c37093 cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c37096 mov byte ptr [ebp + 0x13], cl */
  w8((uint32_t)(EBP + 0x13), (CL));
  /* 11c37099 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11c3709b mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 11c3709f jae 0x11c370c2 */
  if (!C.cf) goto L_11c370c2;
  /* 11c370a1 cmp byte ptr [ebp + 0x13], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x13))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c370a5 jne 0x11c370b5 */
  if (!C.zf) goto L_11c370b5;
  /* 11c370a7 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11c370ac mov ecx, edi */
  ECX = (EDI);
  /* 11c370ae shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11c370b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c370b3 or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_11c370b5:;
  /* 11c370b5 lea eax, [eax + edx*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0x44));
  /* 11c370b9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11c370be mov ecx, edi */
  ECX = (EDI);
  /* 11c370c0 jmp 0x11c370e7 */
  goto L_11c370e7;
L_11c370c2:;
  /* 11c370c2 cmp byte ptr [ebp + 0x13], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x13))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c370c6 jne 0x11c370d8 */
  if (!C.zf) goto L_11c370d8;
  /* 11c370c8 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11c370cb mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11c370d0 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11c370d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c370d5 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11c370d8:;
  /* 11c370d8 lea eax, [eax + edx*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0xc4));
  /* 11c370df lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11c370e2 mov edx, 0x80000000 */
  EDX = (0x80000000u);
L_11c370e7:;
  /* 11c370e7 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11c370e9 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_11c370eb:;
  /* 11c370eb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c370ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c370f1 lea eax, [edx + esi - 4] */
  EAX = ((uint32_t)(EDX + ESI*1 + -0x4));
  /* 11c370f5 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11c370f7 mov dword ptr [ecx + eax - 4], ecx */
  w32((uint32_t)(ECX + EAX*1 + -0x4), (ECX));
  /* 11c370fb jmp 0x11c37100 */
  goto L_11c37100;
L_11c370fd:;
  /* 11c370fd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
L_11c37100:;
  /* 11c37100 lea eax, [esi + 1] */
  EAX = ((uint32_t)(ESI + 0x1));
  /* 11c37103 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
  /* 11c37106 mov dword ptr [edx + esi - 8], eax */
  w32((uint32_t)(EDX + ESI*1 + -0x8), (EAX));
  /* 11c3710a jmp 0x11c37256 */
  goto L_11c37256;
L_11c3710f:;
  /* 11c3710f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c37111 jmp 0x11c37259 */
  goto L_11c37259;
L_11c37116:;
  /* 11c37116 jge 0x11c37256 */
  if ((C.sf==C.of)) goto L_11c37256;
  /* 11c3711c mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c3711f sub dword ptr [ebp + 0x10], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0x10), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11c37122 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 11c37125 mov dword ptr [ebx - 4], ecx */
  w32((uint32_t)(EBX + -0x4), (ECX));
  /* 11c37128 lea ebx, [ebx + esi - 4] */
  EBX = ((uint32_t)(EBX + ESI*1 + -0x4));
  /* 11c3712c mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11c3712f mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 11c37132 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11c37135 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11c37136 mov dword ptr [ebx - 4], ecx */
  w32((uint32_t)(EBX + -0x4), (ECX));
  /* 11c37139 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3713c jbe 0x11c37141 */
  if ((C.cf||C.zf)) goto L_11c37141;
  /* 11c3713e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11c37140 pop esi */
  ESI = (pop32());
L_11c37141:;
  /* 11c37141 test byte ptr [ebp - 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11c37145 jne 0x11c371d0 */
  if (!C.zf) goto L_11c371d0;
  /* 11c3714b mov esi, dword ptr [ebp - 4] */
  ESI = (r32((uint32_t)(EBP + -0x4)));
  /* 11c3714e sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11c37151 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11c37152 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c37155 jbe 0x11c3715a */
  if ((C.cf||C.zf)) goto L_11c3715a;
  /* 11c37157 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11c37159 pop esi */
  ESI = (pop32());
L_11c3715a:;
  /* 11c3715a mov ecx, dword ptr [edi + 4] */
  ECX = (r32((uint32_t)(EDI + 0x4)));
  /* 11c3715d cmp ecx, dword ptr [edi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c37160 jne 0x11c371a9 */
  if (!C.zf) goto L_11c371a9;
  /* 11c37162 cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c37165 jae 0x11c37185 */
  if (!C.cf) goto L_11c37185;
  /* 11c37167 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11c3716c mov ecx, esi */
  ECX = (ESI);
  /* 11c3716e shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11c37170 lea esi, [esi + eax + 4] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x4));
  /* 11c37174 not ebx */
  EBX = (~(EBX));
  /* 11c37176 and dword ptr [eax + edx*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11c3717a dec byte ptr [esi] */
  { uint32_t _r=(r8((uint32_t)(ESI)))-1; w8((uint32_t)(ESI), (_r)); fl_dec(_r,8); }
  /* 11c3717c jne 0x11c371a6 */
  if (!C.zf) goto L_11c371a6;
  /* 11c3717e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c37181 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11c37183 jmp 0x11c371a6 */
  goto L_11c371a6;
L_11c37185:;
  /* 11c37185 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11c37188 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11c3718d shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11c3718f lea ecx, [esi + eax + 4] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x4));
  /* 11c37193 not ebx */
  EBX = (~(EBX));
  /* 11c37195 and dword ptr [eax + edx*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11c3719c dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11c3719e jne 0x11c371a6 */
  if (!C.zf) goto L_11c371a6;
  /* 11c371a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c371a3 and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11c371a6:;
  /* 11c371a6 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
L_11c371a9:;
  /* 11c371a9 mov ecx, dword ptr [edi + 8] */
  ECX = (r32((uint32_t)(EDI + 0x8)));
  /* 11c371ac mov esi, dword ptr [edi + 4] */
  ESI = (r32((uint32_t)(EDI + 0x4)));
  /* 11c371af mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11c371b2 mov ecx, dword ptr [edi + 4] */
  ECX = (r32((uint32_t)(EDI + 0x4)));
  /* 11c371b5 mov esi, dword ptr [edi + 8] */
  ESI = (r32((uint32_t)(EDI + 0x8)));
  /* 11c371b8 mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 11c371bb mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11c371be add esi, dword ptr [ebp - 4] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c371c1 mov dword ptr [ebp + 0x10], esi */
  w32((uint32_t)(EBP + 0x10), (ESI));
  /* 11c371c4 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11c371c7 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11c371c8 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c371cb jbe 0x11c371d0 */
  if ((C.cf||C.zf)) goto L_11c371d0;
  /* 11c371cd push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11c371cf pop esi */
  ESI = (pop32());
L_11c371d0:;
  /* 11c371d0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11c371d3 mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 11c371d7 lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 11c371da mov dword ptr [ebx + 4], edi */
  w32((uint32_t)(EBX + 0x4), (EDI));
  /* 11c371dd mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11c371e0 mov dword ptr [ecx + 4], ebx */
  w32((uint32_t)(ECX + 0x4), (EBX));
  /* 11c371e3 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11c371e6 mov dword ptr [ecx + 8], ebx */
  w32((uint32_t)(ECX + 0x8), (EBX));
  /* 11c371e9 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11c371ec cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c371ef jne 0x11c3724d */
  if (!C.zf) goto L_11c3724d;
  /* 11c371f1 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 11c371f5 cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c371f8 mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 11c371fb inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11c371fd mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11c37201 jae 0x11c37224 */
  if (!C.cf) goto L_11c37224;
  /* 11c37203 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c37207 jne 0x11c37217 */
  if (!C.zf) goto L_11c37217;
  /* 11c37209 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11c3720e mov ecx, esi */
  ECX = (ESI);
  /* 11c37210 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11c37212 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c37215 or dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_11c37217:;
  /* 11c37217 lea eax, [eax + edx*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0x44));
  /* 11c3721b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11c37220 mov ecx, esi */
  ECX = (ESI);
  /* 11c37222 jmp 0x11c37249 */
  goto L_11c37249;
L_11c37224:;
  /* 11c37224 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c37228 jne 0x11c3723a */
  if (!C.zf) goto L_11c3723a;
  /* 11c3722a lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11c3722d mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11c37232 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11c37234 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c37237 or dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11c3723a:;
  /* 11c3723a lea eax, [eax + edx*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0xc4));
  /* 11c37241 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11c37244 mov edx, 0x80000000 */
  EDX = (0x80000000u);
L_11c37249:;
  /* 11c37249 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11c3724b or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_11c3724d:;
  /* 11c3724d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c37250 mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 11c37252 mov dword ptr [eax + ebx - 4], eax */
  w32((uint32_t)(EAX + EBX*1 + -0x4), (EAX));
L_11c37256:;
  /* 11c37256 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c37258 pop eax */
  EAX = (pop32());
L_11c37259:;
  /* 11c37259 pop edi */
  EDI = (pop32());
  /* 11c3725a pop esi */
  ESI = (pop32());
  /* 11c3725b pop ebx */
  EBX = (pop32());
  /* 11c3725c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c3725d ret  */
  ESPCHK(0x11c36f68u, _esp0);
  ESP += 4; return;
}

/* FUN_1000725e @ 0x11c3725e (324 bytes, 102 insns) */
void f_11c3725e(void) {
  FTRACE(0x11c3725eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3725e cmp dword ptr [0x11c3fbb8], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11c3fbb8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c37265 push ebx */
  push32((uint32_t)(EBX));
  /* 11c37266 push ebp */
  push32((uint32_t)(EBP));
  /* 11c37267 push esi */
  push32((uint32_t)(ESI));
  /* 11c37268 push edi */
  push32((uint32_t)(EDI));
  /* 11c37269 jne 0x11c37272 */
  if (!C.zf) goto L_11c37272;
  /* 11c3726b mov esi, 0x11c3fba8 */
  ESI = (0x11c3fba8u);
  /* 11c37270 jmp 0x11c3728f */
  goto L_11c3728f;
L_11c37272:;
  /* 11c37272 push 0x2020 */
  push32((uint32_t)(0x2020u));
  /* 11c37277 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c37279 push dword ptr [0x11c57d40] */
  push32((uint32_t)(r32((uint32_t)(0x11c57d40))));
  /* 11c3727f call dword ptr [0x11c3d0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d0e8))), 0x11c37285u);
  /* 11c37285 mov esi, eax */
  ESI = (EAX);
  /* 11c37287 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c37289 je 0x11c3739b */
  if (C.zf) goto L_11c3739b;
L_11c3728f:;
  /* 11c3728f mov ebp, dword ptr [0x11c3d060] */
  EBP = (r32((uint32_t)(0x11c3d060)));
  /* 11c37295 push 4 */
  push32((uint32_t)(0x4u));
  /* 11c37297 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11c3729c push 0x400000 */
  push32((uint32_t)(0x400000u));
  /* 11c372a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c372a3 call ebp */
  call_ind((uint32_t)(EBP), 0x11c372a5u);
  /* 11c372a5 mov edi, eax */
  EDI = (EAX);
  /* 11c372a7 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11c372a9 je 0x11c37384 */
  if (C.zf) goto L_11c37384;
  /* 11c372af push 4 */
  push32((uint32_t)(0x4u));
  /* 11c372b1 mov ebx, 0x10000 */
  EBX = (0x10000u);
  /* 11c372b6 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11c372bb push ebx */
  push32((uint32_t)(EBX));
  /* 11c372bc push edi */
  push32((uint32_t)(EDI));
  /* 11c372bd call ebp */
  call_ind((uint32_t)(EBP), 0x11c372bfu);
  /* 11c372bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c372c1 je 0x11c37376 */
  if (C.zf) goto L_11c37376;
  /* 11c372c7 mov eax, 0x11c3fba8 */
  EAX = (0x11c3fba8u);
  /* 11c372cc cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c372ce jne 0x11c372ee */
  if (!C.zf) goto L_11c372ee;
  /* 11c372d0 cmp dword ptr [0x11c3fba8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c3fba8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c372d7 jne 0x11c372de */
  if (!C.zf) goto L_11c372de;
  /* 11c372d9 mov dword ptr [0x11c3fba8], eax */
  w32((uint32_t)(0x11c3fba8), (EAX));
L_11c372de:;
  /* 11c372de cmp dword ptr [0x11c3fbac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c3fbac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c372e5 jne 0x11c37303 */
  if (!C.zf) goto L_11c37303;
  /* 11c372e7 mov dword ptr [0x11c3fbac], eax */
  w32((uint32_t)(0x11c3fbac), (EAX));
  /* 11c372ec jmp 0x11c37303 */
  goto L_11c37303;
L_11c372ee:;
  /* 11c372ee mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11c372f0 mov eax, dword ptr [0x11c3fbac] */
  EAX = (r32((uint32_t)(0x11c3fbac)));
  /* 11c372f5 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 11c372f8 mov dword ptr [0x11c3fbac], esi */
  w32((uint32_t)(0x11c3fbac), (ESI));
  /* 11c372fe mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11c37301 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_11c37303:;
  /* 11c37303 lea eax, [edi + 0x400000] */
  EAX = ((uint32_t)(EDI + 0x400000));
  /* 11c37309 lea ecx, [esi + 0x98] */
  ECX = ((uint32_t)(ESI + 0x98));
  /* 11c3730f mov dword ptr [esi + 0x14], eax */
  w32((uint32_t)(ESI + 0x14), (EAX));
  /* 11c37312 lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 11c37315 mov dword ptr [esi + 0xc], ecx */
  w32((uint32_t)(ESI + 0xc), (ECX));
  /* 11c37318 mov dword ptr [esi + 0x10], edi */
  w32((uint32_t)(ESI + 0x10), (EDI));
  /* 11c3731b mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 11c3731e xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 11c37320 mov ecx, 0xf1 */
  ECX = (0xf1u);
L_11c37325:;
  /* 11c37325 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11c37327 cmp ebp, 0x10 */
  { uint32_t _a=(EBP),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3732a setge dl */
  DL = (((C.sf==C.of)) ? 1u : 0u);
  /* 11c3732d dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11c3732e and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11c37330 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11c37331 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11c37332 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11c37334 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11c37337 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3733a cmp ebp, 0x400 */
  { uint32_t _a=(EBP),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c37340 jl 0x11c37325 */
  if ((C.sf!=C.of)) goto L_11c37325;
  /* 11c37342 push ebx */
  push32((uint32_t)(EBX));
  /* 11c37343 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c37345 push edi */
  push32((uint32_t)(EDI));
  /* 11c37346 call 0x11c35a00 */
  push32(0x11c3734bu); f_11c35a00();
  /* 11c3734b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c3734e:;
  /* 11c3734e mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11c37351 add eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c37353 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c37355 jae 0x11c37372 */
  if (!C.cf) goto L_11c37372;
  /* 11c37357 or byte ptr [edi + 0xf8], 0xff */
  { uint32_t _r=(r8((uint32_t)(EDI + 0xf8)))|(0xffu); w8((uint32_t)(EDI + 0xf8), (_r)); fl_logic(_r,8); }
  /* 11c3735e lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 11c37361 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11c37363 mov dword ptr [edi + 4], 0xf0 */
  w32((uint32_t)(EDI + 0x4), (0xf0u));
  /* 11c3736a add edi, 0x1000 */
  { uint32_t _a=(EDI),_b=(0x1000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c37370 jmp 0x11c3734e */
  goto L_11c3734e;
L_11c37372:;
  /* 11c37372 mov eax, esi */
  EAX = (ESI);
  /* 11c37374 jmp 0x11c3739d */
  goto L_11c3739d;
L_11c37376:;
  /* 11c37376 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11c3737b push 0 */
  push32((uint32_t)(0x0u));
  /* 11c3737d push edi */
  push32((uint32_t)(EDI));
  /* 11c3737e call dword ptr [0x11c3d080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d080))), 0x11c37384u);
L_11c37384:;
  /* 11c37384 cmp esi, 0x11c3fba8 */
  { uint32_t _a=(ESI),_b=(0x11c3fba8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3738a je 0x11c3739b */
  if (C.zf) goto L_11c3739b;
  /* 11c3738c push esi */
  push32((uint32_t)(ESI));
  /* 11c3738d push 0 */
  push32((uint32_t)(0x0u));
  /* 11c3738f push dword ptr [0x11c57d40] */
  push32((uint32_t)(r32((uint32_t)(0x11c57d40))));
  /* 11c37395 call dword ptr [0x11c3d07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d07c))), 0x11c3739bu);
L_11c3739b:;
  /* 11c3739b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c3739d:;
  /* 11c3739d pop edi */
  EDI = (pop32());
  /* 11c3739e pop esi */
  ESI = (pop32());
  /* 11c3739f pop ebp */
  EBP = (pop32());
  /* 11c373a0 pop ebx */
  EBX = (pop32());
  /* 11c373a1 ret  */
  ESPCHK(0x11c3725eu, _esp0);
  ESP += 4; return;
}

/* FUN_100073a2 @ 0x11c373a2 (86 bytes, 27 insns) */
void f_11c373a2(void) {
  FTRACE(0x11c373a2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c373a2 push esi */
  push32((uint32_t)(ESI));
  /* 11c373a3 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c373a7 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11c373ac push 0 */
  push32((uint32_t)(0x0u));
  /* 11c373ae push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11c373b1 call dword ptr [0x11c3d080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d080))), 0x11c373b7u);
  /* 11c373b7 cmp dword ptr [0x11c41bc8], esi */
  { uint32_t _a=(r32((uint32_t)(0x11c41bc8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c373bd jne 0x11c373c7 */
  if (!C.zf) goto L_11c373c7;
  /* 11c373bf mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11c373c2 mov dword ptr [0x11c41bc8], eax */
  w32((uint32_t)(0x11c41bc8), (EAX));
L_11c373c7:;
  /* 11c373c7 cmp esi, 0x11c3fba8 */
  { uint32_t _a=(ESI),_b=(0x11c3fba8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c373cd je 0x11c373ef */
  if (C.zf) goto L_11c373ef;
  /* 11c373cf mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11c373d2 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11c373d4 push esi */
  push32((uint32_t)(ESI));
  /* 11c373d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c373d7 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11c373d9 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c373db mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11c373de mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11c373e1 push dword ptr [0x11c57d40] */
  push32((uint32_t)(r32((uint32_t)(0x11c57d40))));
  /* 11c373e7 call dword ptr [0x11c3d07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d07c))), 0x11c373edu);
  /* 11c373ed pop esi */
  ESI = (pop32());
  /* 11c373ee ret  */
  ESPCHK(0x11c373a2u, _esp0);
  ESP += 4; return;
L_11c373ef:;
  /* 11c373ef or dword ptr [0x11c3fbb8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11c3fbb8)))|(0xffffffffu); w32((uint32_t)(0x11c3fbb8), (_r)); fl_logic(_r,32); }
  /* 11c373f6 pop esi */
  ESI = (pop32());
  /* 11c373f7 ret  */
  ESPCHK(0x11c373a2u, _esp0);
  ESP += 4; return;
}

/* FUN_100073f8 @ 0x11c373f8 (194 bytes, 66 insns) */
void f_11c373f8(void) {
  FTRACE(0x11c373f8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c373f8 push ebp */
  push32((uint32_t)(EBP));
  /* 11c373f9 mov ebp, esp */
  EBP = (ESP);
  /* 11c373fb push ecx */
  push32((uint32_t)(ECX));
  /* 11c373fc push ebx */
  push32((uint32_t)(EBX));
  /* 11c373fd push esi */
  push32((uint32_t)(ESI));
  /* 11c373fe mov esi, dword ptr [0x11c3fbac] */
  ESI = (r32((uint32_t)(0x11c3fbac)));
  /* 11c37404 push edi */
  push32((uint32_t)(EDI));
L_11c37405:;
  /* 11c37405 cmp dword ptr [esi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c37409 je 0x11c374a3 */
  if (C.zf) goto L_11c374a3;
  /* 11c3740f and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c37413 lea edi, [esi + 0x2010] */
  EDI = ((uint32_t)(ESI + 0x2010));
  /* 11c37419 mov ebx, 0x3ff000 */
  EBX = (0x3ff000u);
L_11c3741e:;
  /* 11c3741e cmp dword ptr [edi], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c37424 jne 0x11c3745f */
  if (!C.zf) goto L_11c3745f;
  /* 11c37426 mov eax, ebx */
  EAX = (EBX);
  /* 11c37428 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11c3742d add eax, dword ptr [esi + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c37430 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11c37435 push eax */
  push32((uint32_t)(EAX));
  /* 11c37436 call dword ptr [0x11c3d080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d080))), 0x11c3743cu);
  /* 11c3743c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3743e je 0x11c3745f */
  if (C.zf) goto L_11c3745f;
  /* 11c37440 or dword ptr [edi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(0xffffffffu); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
  /* 11c37443 dec dword ptr [0x11c5699c] */
  { uint32_t _r=(r32((uint32_t)(0x11c5699c)))-1; w32((uint32_t)(0x11c5699c), (_r)); fl_dec(_r,32); }
  /* 11c37449 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11c3744c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3744e je 0x11c37454 */
  if (C.zf) goto L_11c37454;
  /* 11c37450 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c37452 jbe 0x11c37457 */
  if ((C.cf||C.zf)) goto L_11c37457;
L_11c37454:;
  /* 11c37454 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
L_11c37457:;
  /* 11c37457 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11c3745a dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 11c3745d je 0x11c3746c */
  if (C.zf) goto L_11c3746c;
L_11c3745f:;
  /* 11c3745f sub ebx, 0x1000 */
  { uint32_t _a=(EBX),_b=(0x1000u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c37465 sub edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c37468 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11c3746a jge 0x11c3741e */
  if ((C.sf==C.of)) goto L_11c3741e;
L_11c3746c:;
  /* 11c3746c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c37470 mov ecx, esi */
  ECX = (ESI);
  /* 11c37472 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 11c37475 je 0x11c374a3 */
  if (C.zf) goto L_11c374a3;
  /* 11c37477 cmp dword ptr [ecx + 0x18], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3747b jne 0x11c374a3 */
  if (!C.zf) goto L_11c374a3;
  /* 11c3747d push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3747f lea eax, [ecx + 0x20] */
  EAX = ((uint32_t)(ECX + 0x20));
  /* 11c37482 pop edx */
  EDX = (pop32());
L_11c37483:;
  /* 11c37483 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c37486 jne 0x11c37494 */
  if (!C.zf) goto L_11c37494;
  /* 11c37488 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11c37489 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3748c cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c37492 jl 0x11c37483 */
  if ((C.sf!=C.of)) goto L_11c37483;
L_11c37494:;
  /* 11c37494 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3749a jne 0x11c374a3 */
  if (!C.zf) goto L_11c374a3;
  /* 11c3749c push ecx */
  push32((uint32_t)(ECX));
  /* 11c3749d call 0x11c373a2 */
  push32(0x11c374a2u); f_11c373a2();
  /* 11c374a2 pop ecx */
  ECX = (pop32());
L_11c374a3:;
  /* 11c374a3 cmp esi, dword ptr [0x11c3fbac] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11c3fbac))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c374a9 je 0x11c374b5 */
  if (C.zf) goto L_11c374b5;
  /* 11c374ab cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c374af jg 0x11c37405 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c37405;
L_11c374b5:;
  /* 11c374b5 pop edi */
  EDI = (pop32());
  /* 11c374b6 pop esi */
  ESI = (pop32());
  /* 11c374b7 pop ebx */
  EBX = (pop32());
  /* 11c374b8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c374b9 ret  */
  ESPCHK(0x11c373f8u, _esp0);
  ESP += 4; return;
}

/* FUN_100074ba @ 0x11c374ba (87 bytes, 34 insns) */
void f_11c374ba(void) {
  FTRACE(0x11c374bau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c374ba mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c374be mov edx, 0x11c3fba8 */
  EDX = (0x11c3fba8u);
  /* 11c374c3 push esi */
  push32((uint32_t)(ESI));
  /* 11c374c4 mov ecx, edx */
  ECX = (EDX);
L_11c374c6:;
  /* 11c374c6 cmp eax, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c374c9 jbe 0x11c374d0 */
  if ((C.cf||C.zf)) goto L_11c374d0;
  /* 11c374cb cmp eax, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c374ce jb 0x11c374d8 */
  if (C.cf) goto L_11c374d8;
L_11c374d0:;
  /* 11c374d0 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 11c374d2 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c374d4 je 0x11c3750d */
  if (C.zf) goto L_11c3750d;
  /* 11c374d6 jmp 0x11c374c6 */
  goto L_11c374c6;
L_11c374d8:;
  /* 11c374d8 test al, 0xf */
  { uint32_t _r=(AL)&(0xfu); fl_logic(_r,8); }
  /* 11c374da jne 0x11c3750d */
  if (!C.zf) goto L_11c3750d;
  /* 11c374dc mov esi, eax */
  ESI = (EAX);
  /* 11c374de mov edx, 0x100 */
  EDX = (0x100u);
  /* 11c374e3 and esi, 0xfff */
  { uint32_t _r=(ESI)&(0xfffu); ESI = (_r); fl_logic(_r,32); }
  /* 11c374e9 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c374eb jb 0x11c3750d */
  if (C.cf) goto L_11c3750d;
  /* 11c374ed mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11c374f1 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11c374f3 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11c374f7 mov ecx, eax */
  ECX = (EAX);
  /* 11c374f9 and cx, 0xf000 */
  { uint32_t _r=(CX)&(0xf000u); CX = (_r); fl_logic(_r,16); }
  /* 11c374fe sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c37500 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11c37502 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c37504 pop esi */
  ESI = (pop32());
  /* 11c37505 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11c37508 lea eax, [eax + ecx + 8] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x8));
  /* 11c3750c ret  */
  ESPCHK(0x11c374bau, _esp0);
  ESP += 4; return;
L_11c3750d:;
  /* 11c3750d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c3750f pop esi */
  ESI = (pop32());
  /* 11c37510 ret  */
  ESPCHK(0x11c374bau, _esp0);
  ESP += 4; return;
}

/* FUN_10007511 @ 0x11c37511 (69 bytes, 19 insns) */
void f_11c37511(void) {
  FTRACE(0x11c37511u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c37511 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c37515 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c37519 sub ecx, dword ptr [eax + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3751c sar ecx, 0xc */
  ECX = (sh_sar((uint32_t)(ECX), (0xcu)&0x1f, 32));
  /* 11c3751f lea eax, [eax + ecx*8 + 0x18] */
  EAX = ((uint32_t)(EAX + ECX*8 + 0x18));
  /* 11c37523 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11c37527 movzx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 11c3752a add dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c3752c and byte ptr [ecx], 0 */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(0x0u); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 11c3752f cmp dword ptr [eax], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c37535 mov dword ptr [eax + 4], 0xf1 */
  w32((uint32_t)(EAX + 0x4), (0xf1u));
  /* 11c3753c jne 0x11c37555 */
  if (!C.zf) goto L_11c37555;
  /* 11c3753e inc dword ptr [0x11c5699c] */
  { uint32_t _r=(r32((uint32_t)(0x11c5699c)))+1; w32((uint32_t)(0x11c5699c), (_r)); fl_inc(_r,32); }
  /* 11c37544 cmp dword ptr [0x11c5699c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x11c5699c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3754b jne 0x11c37555 */
  if (!C.zf) goto L_11c37555;
  /* 11c3754d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11c3754f call 0x11c373f8 */
  push32(0x11c37554u); f_11c373f8();
  /* 11c37554 pop ecx */
  ECX = (pop32());
L_11c37555:;
  /* 11c37555 ret  */
  ESPCHK(0x11c37511u, _esp0);
  ESP += 4; return;
}

/* FUN_10007556 @ 0x11c37556 (520 bytes, 180 insns) */
void f_11c37556(void) {
  FTRACE(0x11c37556u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c37556 push ebp */
  push32((uint32_t)(EBP));
  /* 11c37557 mov ebp, esp */
  EBP = (ESP);
  /* 11c37559 push ecx */
  push32((uint32_t)(ECX));
  /* 11c3755a push ecx */
  push32((uint32_t)(ECX));
  /* 11c3755b push ebx */
  push32((uint32_t)(EBX));
  /* 11c3755c push esi */
  push32((uint32_t)(ESI));
  /* 11c3755d mov esi, dword ptr [0x11c41bc8] */
  ESI = (r32((uint32_t)(0x11c41bc8)));
  /* 11c37563 push edi */
  push32((uint32_t)(EDI));
L_11c37564:;
  /* 11c37564 mov edx, dword ptr [esi + 0x10] */
  EDX = (r32((uint32_t)(ESI + 0x10)));
  /* 11c37567 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3756a je 0x11c3760f */
  if (C.zf) goto L_11c3760f;
  /* 11c37570 mov edi, dword ptr [esi + 8] */
  EDI = (r32((uint32_t)(ESI + 0x8)));
  /* 11c37573 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 11c37579 mov eax, edi */
  EAX = (EDI);
  /* 11c3757b sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3757d sub eax, 0x18 */
  { uint32_t _a=(EAX),_b=(0x18u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c37580 sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 11c37583 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 11c37586 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c37588 cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3758a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11c3758d jae 0x11c375c9 */
  if (!C.cf) goto L_11c375c9;
L_11c3758f:;
  /* 11c3758f mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 11c37591 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c37594 cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c37596 jl 0x11c375b2 */
  if ((C.sf!=C.of)) goto L_11c375b2;
  /* 11c37598 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3759b jbe 0x11c375b2 */
  if ((C.cf||C.zf)) goto L_11c375b2;
  /* 11c3759d push ebx */
  push32((uint32_t)(EBX));
  /* 11c3759e push ecx */
  push32((uint32_t)(ECX));
  /* 11c3759f push eax */
  push32((uint32_t)(EAX));
  /* 11c375a0 call 0x11c3775e */
  push32(0x11c375a5u); f_11c3775e();
  /* 11c375a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c375a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c375aa jne 0x11c37621 */
  if (!C.zf) goto L_11c37621;
  /* 11c375ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c375af mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_11c375b2:;
  /* 11c375b2 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c375b5 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 11c375bb add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c375c0 cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c375c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11c375c5 jb 0x11c3758f */
  if (C.cf) goto L_11c3758f;
  /* 11c375c7 jmp 0x11c375cc */
  goto L_11c375cc;
L_11c375c9:;
  /* 11c375c9 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11c375cc:;
  /* 11c375cc mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 11c375cf mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 11c375d2 lea edi, [esi + 0x18] */
  EDI = ((uint32_t)(ESI + 0x18));
  /* 11c375d5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11c375d8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c375da mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11c375dd jae 0x11c37612 */
  if (!C.cf) goto L_11c37612;
L_11c375df:;
  /* 11c375df mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11c375e1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c375e3 jl 0x11c375fe */
  if ((C.sf!=C.of)) goto L_11c375fe;
  /* 11c375e5 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c375e8 jbe 0x11c375fe */
  if ((C.cf||C.zf)) goto L_11c375fe;
  /* 11c375ea push ebx */
  push32((uint32_t)(EBX));
  /* 11c375eb push eax */
  push32((uint32_t)(EAX));
  /* 11c375ec push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 11c375ef call 0x11c3775e */
  push32(0x11c375f4u); f_11c3775e();
  /* 11c375f4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c375f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c375f9 jne 0x11c37621 */
  if (!C.zf) goto L_11c37621;
  /* 11c375fb mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_11c375fe:;
  /* 11c375fe add dword ptr [ebp - 4], 0x1000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1000u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c37605 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c37608 cmp edi, dword ptr [ebp - 8] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3760b jb 0x11c375df */
  if (C.cf) goto L_11c375df;
  /* 11c3760d jmp 0x11c37612 */
  goto L_11c37612;
L_11c3760f:;
  /* 11c3760f mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11c37612:;
  /* 11c37612 mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 11c37614 cmp esi, dword ptr [0x11c41bc8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11c41bc8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3761a je 0x11c37631 */
  if (C.zf) goto L_11c37631;
  /* 11c3761c jmp 0x11c37564 */
  goto L_11c37564;
L_11c37621:;
  /* 11c37621 mov dword ptr [0x11c41bc8], esi */
  w32((uint32_t)(0x11c41bc8), (ESI));
  /* 11c37627 sub dword ptr [edi], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(EBX),_r=_a-_b; w32((uint32_t)(EDI), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11c37629 mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
  /* 11c3762c jmp 0x11c37759 */
  goto L_11c37759;
L_11c37631:;
  /* 11c37631 mov eax, 0x11c3fba8 */
  EAX = (0x11c3fba8u);
  /* 11c37636 mov edi, eax */
  EDI = (EAX);
L_11c37638:;
  /* 11c37638 cmp dword ptr [edi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3763c je 0x11c37644 */
  if (C.zf) goto L_11c37644;
  /* 11c3763e cmp dword ptr [edi + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c37642 jne 0x11c37650 */
  if (!C.zf) goto L_11c37650;
L_11c37644:;
  /* 11c37644 mov edi, dword ptr [edi] */
  EDI = (r32((uint32_t)(EDI)));
  /* 11c37646 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c37648 je 0x11c37725 */
  if (C.zf) goto L_11c37725;
  /* 11c3764e jmp 0x11c37638 */
  goto L_11c37638;
L_11c37650:;
  /* 11c37650 mov ebx, dword ptr [edi + 0xc] */
  EBX = (r32((uint32_t)(EDI + 0xc)));
  /* 11c37653 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c37657 mov esi, ebx */
  ESI = (EBX);
  /* 11c37659 mov eax, ebx */
  EAX = (EBX);
  /* 11c3765b sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3765d sub esi, 0x18 */
  { uint32_t _a=(ESI),_b=(0x18u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c37660 sar esi, 3 */
  ESI = (sh_sar((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 11c37663 shl esi, 0xc */
  ESI = (sh_shl((uint32_t)(ESI), (0xcu)&0x1f, 32));
  /* 11c37666 add esi, dword ptr [edi + 0x10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI + 0x10))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c37669 cmp dword ptr [ebx], -1 */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3766c jne 0x11c3767f */
  if (!C.zf) goto L_11c3767f;
L_11c3766e:;
  /* 11c3766e cmp dword ptr [ebp - 4], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c37672 jge 0x11c3767f */
  if ((C.sf==C.of)) goto L_11c3767f;
  /* 11c37674 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c37677 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11c3767a cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3767d je 0x11c3766e */
  if (C.zf) goto L_11c3766e;
L_11c3767f:;
  /* 11c3767f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c37682 push 4 */
  push32((uint32_t)(0x4u));
  /* 11c37684 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 11c37687 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11c3768c push eax */
  push32((uint32_t)(EAX));
  /* 11c3768d push esi */
  push32((uint32_t)(ESI));
  /* 11c3768e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11c37691 call dword ptr [0x11c3d060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d060))), 0x11c37697u);
  /* 11c37697 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c37699 jne 0x11c37757 */
  if (!C.zf) goto L_11c37757;
  /* 11c3769f push 0 */
  push32((uint32_t)(0x0u));
  /* 11c376a1 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 11c376a4 push esi */
  push32((uint32_t)(ESI));
  /* 11c376a5 call 0x11c35a00 */
  push32(0x11c376aau); f_11c35a00();
  /* 11c376aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c376ad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c376b0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11c376b2 mov ecx, ebx */
  ECX = (EBX);
  /* 11c376b4 jle 0x11c376e6 */
  if ((C.zf||C.sf!=C.of)) goto L_11c376e6;
  /* 11c376b6 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 11c376b9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11c376bc:;
  /* 11c376bc or byte ptr [eax + 0xf4], 0xff */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xf4)))|(0xffu); w8((uint32_t)(EAX + 0xf4), (_r)); fl_logic(_r,8); }
  /* 11c376c3 lea edx, [eax + 4] */
  EDX = ((uint32_t)(EAX + 0x4));
  /* 11c376c6 mov dword ptr [eax - 4], edx */
  w32((uint32_t)(EAX + -0x4), (EDX));
  /* 11c376c9 mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 11c376ce mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11c376d0 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11c376d2 mov dword ptr [ecx + 4], 0xf1 */
  w32((uint32_t)(ECX + 0x4), (0xf1u));
  /* 11c376d9 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c376de add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c376e1 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 11c376e4 jne 0x11c376bc */
  if (!C.zf) goto L_11c376bc;
L_11c376e6:;
  /* 11c376e6 mov dword ptr [0x11c41bc8], edi */
  w32((uint32_t)(0x11c41bc8), (EDI));
  /* 11c376ec lea eax, [edi + 0x2018] */
  EAX = ((uint32_t)(EDI + 0x2018));
L_11c376f2:;
  /* 11c376f2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c376f4 jae 0x11c37702 */
  if (!C.cf) goto L_11c37702;
  /* 11c376f6 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c376f9 je 0x11c37700 */
  if (C.zf) goto L_11c37700;
  /* 11c376fb add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c376fe jmp 0x11c376f2 */
  goto L_11c376f2;
L_11c37700:;
  /* 11c37700 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11c37702:;
  /* 11c37702 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c37704 and eax, ecx */
  { uint32_t _r=(EAX)&(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11c37706 mov dword ptr [edi + 0xc], eax */
  w32((uint32_t)(EDI + 0xc), (EAX));
  /* 11c37709 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c3770c mov byte ptr [esi + 8], al */
  w8((uint32_t)(ESI + 0x8), (AL));
  /* 11c3770f mov dword ptr [edi + 8], ebx */
  w32((uint32_t)(EDI + 0x8), (EBX));
  /* 11c37712 sub dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11c37714 sub dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; w32((uint32_t)(ESI + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11c37717 lea ecx, [esi + eax + 8] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x8));
  /* 11c3771b lea eax, [esi + 0x100] */
  EAX = ((uint32_t)(ESI + 0x100));
  /* 11c37721 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11c37723 jmp 0x11c37759 */
  goto L_11c37759;
L_11c37725:;
  /* 11c37725 call 0x11c3725e */
  push32(0x11c3772au); f_11c3725e();
  /* 11c3772a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3772c je 0x11c37757 */
  if (C.zf) goto L_11c37757;
  /* 11c3772e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11c37731 mov byte ptr [ecx + 8], bl */
  w8((uint32_t)(ECX + 0x8), (BL));
  /* 11c37734 lea edx, [ecx + ebx + 8] */
  EDX = ((uint32_t)(ECX + EBX*1 + 0x8));
  /* 11c37738 mov dword ptr [0x11c41bc8], eax */
  w32((uint32_t)(0x11c41bc8), (EAX));
  /* 11c3773d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11c3773f mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 11c37744 sub edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c37746 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11c37749 movzx edx, bl */
  EDX = ((uint32_t)(BL));
  /* 11c3774c sub dword ptr [eax + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(EDX),_r=_a-_b; w32((uint32_t)(EAX + 0x18), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11c3774f lea eax, [ecx + 0x100] */
  EAX = ((uint32_t)(ECX + 0x100));
  /* 11c37755 jmp 0x11c37759 */
  goto L_11c37759;
L_11c37757:;
  /* 11c37757 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c37759:;
  /* 11c37759 pop edi */
  EDI = (pop32());
  /* 11c3775a pop esi */
  ESI = (pop32());
  /* 11c3775b pop ebx */
  EBX = (pop32());
  /* 11c3775c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c3775d ret  */
  ESPCHK(0x11c37556u, _esp0);
  ESP += 4; return;
}

/* FUN_1000775e @ 0x11c3775e (292 bytes, 125 insns) */
void f_11c3775e(void) {
  FTRACE(0x11c3775eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3775e push ebp */
  push32((uint32_t)(EBP));
  /* 11c3775f mov ebp, esp */
  EBP = (ESP);
  /* 11c37761 push ecx */
  push32((uint32_t)(ECX));
  /* 11c37762 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c37765 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c37768 push ebx */
  push32((uint32_t)(EBX));
  /* 11c37769 push esi */
  push32((uint32_t)(ESI));
  /* 11c3776a mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 11c3776d push edi */
  push32((uint32_t)(EDI));
  /* 11c3776e mov edi, dword ptr [ecx] */
  EDI = (r32((uint32_t)(ECX)));
  /* 11c37770 lea ebx, [ecx + 0xf8] */
  EBX = ((uint32_t)(ECX + 0xf8));
  /* 11c37776 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c37778 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11c3777b mov eax, edi */
  EAX = (EDI);
  /* 11c3777d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11c37780 jb 0x11c377a3 */
  if (C.cf) goto L_11c377a3;
  /* 11c37782 lea eax, [edi + edx] */
  EAX = ((uint32_t)(EDI + EDX*1));
  /* 11c37785 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11c37787 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c37789 jae 0x11c37792 */
  if (!C.cf) goto L_11c37792;
  /* 11c3778b add dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c3778d sub dword ptr [ecx + 4], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(EDX),_r=_a-_b; w32((uint32_t)(ECX + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11c37790 jmp 0x11c3779b */
  goto L_11c3779b;
L_11c37792:;
  /* 11c37792 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11c37796 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 11c37799 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11c3779b:;
  /* 11c3779b lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 11c3779e jmp 0x11c37871 */
  goto L_11c37871;
L_11c377a3:;
  /* 11c377a3 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c377a5 cmp byte ptr [esi], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c377a8 je 0x11c377ac */
  if (C.zf) goto L_11c377ac;
  /* 11c377aa mov eax, esi */
  EAX = (ESI);
L_11c377ac:;
  /* 11c377ac lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 11c377af cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c377b1 jae 0x11c377f6 */
  if (!C.cf) goto L_11c377f6;
L_11c377b3:;
  /* 11c377b3 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11c377b5 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 11c377b7 jne 0x11c377e9 */
  if (!C.zf) goto L_11c377e9;
  /* 11c377b9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c377bb lea ebx, [eax + 1] */
  EBX = ((uint32_t)(EAX + 0x1));
  /* 11c377be pop esi */
  ESI = (pop32());
L_11c377bf:;
  /* 11c377bf cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c377c2 jne 0x11c377c8 */
  if (!C.zf) goto L_11c377c8;
  /* 11c377c4 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11c377c5 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c377c6 jmp 0x11c377bf */
  goto L_11c377bf;
L_11c377c8:;
  /* 11c377c8 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c377ca jae 0x11c3781a */
  if (!C.cf) goto L_11c3781a;
  /* 11c377cc cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c377cf jne 0x11c377d6 */
  if (!C.zf) goto L_11c377d6;
  /* 11c377d1 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11c377d4 jmp 0x11c377e2 */
  goto L_11c377e2;
L_11c377d6:;
  /* 11c377d6 sub dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11c377d9 cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c377dc jb 0x11c3787b */
  if (C.cf) goto L_11c3787b;
L_11c377e2:;
  /* 11c377e2 mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 11c377e5 mov eax, ebx */
  EAX = (EBX);
  /* 11c377e7 jmp 0x11c377ee */
  goto L_11c377ee;
L_11c377e9:;
  /* 11c377e9 movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 11c377ec add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11c377ee:;
  /* 11c377ee lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 11c377f1 cmp esi, dword ptr [ebp + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c377f4 jb 0x11c377b3 */
  if (C.cf) goto L_11c377b3;
L_11c377f6:;
  /* 11c377f6 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
L_11c377f9:;
  /* 11c377f9 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c377fb jae 0x11c3787b */
  if (!C.cf) goto L_11c3787b;
  /* 11c377fd lea eax, [esi + edx] */
  EAX = ((uint32_t)(ESI + EDX*1));
  /* 11c37800 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c37803 jae 0x11c3787b */
  if (!C.cf) goto L_11c3787b;
  /* 11c37805 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c37807 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c37809 jne 0x11c3784b */
  if (!C.zf) goto L_11c3784b;
  /* 11c3780b push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3780d lea ebx, [esi + 1] */
  EBX = ((uint32_t)(ESI + 0x1));
  /* 11c37810 pop eax */
  EAX = (pop32());
L_11c37811:;
  /* 11c37811 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c37814 jne 0x11c3783b */
  if (!C.zf) goto L_11c3783b;
  /* 11c37816 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11c37817 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c37818 jmp 0x11c37811 */
  goto L_11c37811;
L_11c3781a:;
  /* 11c3781a lea ebx, [eax + edx] */
  EBX = ((uint32_t)(EAX + EDX*1));
  /* 11c3781d cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c37820 jae 0x11c3782b */
  if (!C.cf) goto L_11c3782b;
  /* 11c37822 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c37824 mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 11c37826 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11c37829 jmp 0x11c37834 */
  goto L_11c37834;
L_11c3782b:;
  /* 11c3782b and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11c3782f lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
  /* 11c37832 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_11c37834:;
  /* 11c37834 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11c37836 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c37839 jmp 0x11c37871 */
  goto L_11c37871;
L_11c3783b:;
  /* 11c3783b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3783d jae 0x11c37852 */
  if (!C.cf) goto L_11c37852;
  /* 11c3783f sub dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11c37842 cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c37845 jb 0x11c3787b */
  if (C.cf) goto L_11c3787b;
  /* 11c37847 mov esi, ebx */
  ESI = (EBX);
  /* 11c37849 jmp 0x11c377f9 */
  goto L_11c377f9;
L_11c3784b:;
  /* 11c3784b movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11c3784e add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c37850 jmp 0x11c377f9 */
  goto L_11c377f9;
L_11c37852:;
  /* 11c37852 lea ebx, [esi + edx] */
  EBX = ((uint32_t)(ESI + EDX*1));
  /* 11c37855 cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c37858 jae 0x11c37863 */
  if (!C.cf) goto L_11c37863;
  /* 11c3785a sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3785c mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 11c3785e mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11c37861 jmp 0x11c3786c */
  goto L_11c3786c;
L_11c37863:;
  /* 11c37863 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11c37867 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 11c3786a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11c3786c:;
  /* 11c3786c mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11c3786e lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
L_11c37871:;
  /* 11c37871 imul ecx, ecx, 0xf */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xfu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c37874 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11c37877 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c37879 jmp 0x11c3787d */
  goto L_11c3787d;
L_11c3787b:;
  /* 11c3787b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c3787d:;
  /* 11c3787d pop edi */
  EDI = (pop32());
  /* 11c3787e pop esi */
  ESI = (pop32());
  /* 11c3787f pop ebx */
  EBX = (pop32());
  /* 11c37880 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c37881 ret  */
  ESPCHK(0x11c3775eu, _esp0);
  ESP += 4; return;
}

/* FUN_10007882 @ 0x11c37882 (169 bytes, 69 insns) */
void f_11c37882(void) {
  FTRACE(0x11c37882u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c37882 push ebp */
  push32((uint32_t)(EBP));
  /* 11c37883 mov ebp, esp */
  EBP = (ESP);
  /* 11c37885 push ecx */
  push32((uint32_t)(ECX));
  /* 11c37886 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c37889 push ebx */
  push32((uint32_t)(EBX));
  /* 11c3788a mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c3788d push esi */
  push32((uint32_t)(ESI));
  /* 11c3788e movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 11c37891 push edi */
  push32((uint32_t)(EDI));
  /* 11c37892 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c37895 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c37899 mov eax, ebx */
  EAX = (EBX);
  /* 11c3789b sub eax, dword ptr [edi + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDI + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3789e sar eax, 0xc */
  EAX = (sh_sar((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 11c378a1 cmp ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c378a4 lea edi, [edi + eax*8 + 0x18] */
  EDI = ((uint32_t)(EDI + EAX*8 + 0x18));
  /* 11c378a8 jbe 0x11c378bc */
  if ((C.cf||C.zf)) goto L_11c378bc;
  /* 11c378aa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11c378ad sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c378af mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11c378b1 add dword ptr [edi], ecx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(ECX),_r=_a+_b; w32((uint32_t)(EDI), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c378b3 mov dword ptr [edi + 4], 0xf1 */
  w32((uint32_t)(EDI + 0x4), (0xf1u));
  /* 11c378ba jmp 0x11c3791c */
  goto L_11c3791c;
L_11c378bc:;
  /* 11c378bc jae 0x11c37923 */
  if (!C.cf) goto L_11c37923;
  /* 11c378be mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11c378c1 lea esi, [edx + eax] */
  ESI = ((uint32_t)(EDX + EAX*1));
  /* 11c378c4 lea eax, [ebx + 0xf8] */
  EAX = ((uint32_t)(EBX + 0xf8));
  /* 11c378ca cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c378cc jb 0x11c37923 */
  if (C.cf) goto L_11c37923;
  /* 11c378ce lea eax, [ecx + edx] */
  EAX = ((uint32_t)(ECX + EDX*1));
L_11c378d1:;
  /* 11c378d1 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c378d3 jae 0x11c378df */
  if (!C.cf) goto L_11c378df;
  /* 11c378d5 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c378d8 jne 0x11c378dd */
  if (!C.zf) goto L_11c378dd;
  /* 11c378da inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c378db jmp 0x11c378d1 */
  goto L_11c378d1;
L_11c378dd:;
  /* 11c378dd cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11c378df:;
  /* 11c378df jne 0x11c37923 */
  if (!C.zf) goto L_11c37923;
  /* 11c378e1 mov al, byte ptr [ebp + 0x14] */
  AL = (r8((uint32_t)(EBP + 0x14)));
  /* 11c378e4 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11c378e6 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11c378e8 cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c378ea ja 0x11c37917 */
  if ((!C.cf&&!C.zf)) goto L_11c37917;
  /* 11c378ec cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c378ee jbe 0x11c37917 */
  if ((C.cf||C.zf)) goto L_11c37917;
  /* 11c378f0 lea eax, [ebx + 0xf8] */
  EAX = ((uint32_t)(EBX + 0xf8));
  /* 11c378f6 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c378f8 jae 0x11c3790e */
  if (!C.cf) goto L_11c3790e;
  /* 11c378fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c378fc mov dword ptr [ebx], esi */
  w32((uint32_t)(EBX), (ESI));
  /* 11c378fe cmp byte ptr [esi], al */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c37900 jne 0x11c37909 */
  if (!C.zf) goto L_11c37909;
L_11c37902:;
  /* 11c37902 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c37903 cmp byte ptr [esi + eax], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI + EAX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c37907 je 0x11c37902 */
  if (C.zf) goto L_11c37902;
L_11c37909:;
  /* 11c37909 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11c3790c jmp 0x11c37917 */
  goto L_11c37917;
L_11c3790e:;
  /* 11c3790e and dword ptr [ebx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(0x0u); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11c37912 lea eax, [ebx + 8] */
  EAX = ((uint32_t)(EBX + 0x8));
  /* 11c37915 mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
L_11c37917:;
  /* 11c37917 sub ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3791a add dword ptr [edi], ecx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(ECX),_r=_a+_b; w32((uint32_t)(EDI), (_r)); fl_add(_a,_b,_r,32); }
L_11c3791c:;
  /* 11c3791c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_11c37923:;
  /* 11c37923 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c37926 pop edi */
  EDI = (pop32());
  /* 11c37927 pop esi */
  ESI = (pop32());
  /* 11c37928 pop ebx */
  EBX = (pop32());
  /* 11c37929 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c3792a ret  */
  ESPCHK(0x11c37882u, _esp0);
  ESP += 4; return;
}

/* FUN_1000792b @ 0x11c3792b (27 bytes, 13 insns) */
void f_11c3792b(void) {
  FTRACE(0x11c3792bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3792b mov eax, dword ptr [0x11c569a0] */
  EAX = (r32((uint32_t)(0x11c569a0)));
  /* 11c37930 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c37932 je 0x11c37943 */
  if (C.zf) goto L_11c37943;
  /* 11c37934 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11c37938 call eax */
  call_ind((uint32_t)(EAX), 0x11c3793au);
  /* 11c3793a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3793c pop ecx */
  ECX = (pop32());
  /* 11c3793d je 0x11c37943 */
  if (C.zf) goto L_11c37943;
  /* 11c3793f push 1 */
  push32((uint32_t)(0x1u));
  /* 11c37941 pop eax */
  EAX = (pop32());
  /* 11c37942 ret  */
  ESPCHK(0x11c3792bu, _esp0);
  ESP += 4; return;
L_11c37943:;
  /* 11c37943 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c37945 ret  */
  ESPCHK(0x11c3792bu, _esp0);
  ESP += 4; return;
}

/* FUN_10007950 @ 0x11c37950 (664 bytes, 265 insns) [15 switch table(s)] */
void f_11c37950(void) {
  FTRACE(0x11c37950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c37950 push ebp */
  push32((uint32_t)(EBP));
  /* 11c37951 mov ebp, esp */
  EBP = (ESP);
  /* 11c37953 push edi */
  push32((uint32_t)(EDI));
  /* 11c37954 push esi */
  push32((uint32_t)(ESI));
  /* 11c37955 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11c37958 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c3795b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c3795e mov eax, ecx */
  EAX = (ECX);
  /* 11c37960 mov edx, ecx */
  EDX = (ECX);
  /* 11c37962 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c37964 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c37966 jbe 0x11c37970 */
  if ((C.cf||C.zf)) goto L_11c37970;
  /* 11c37968 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3796a jb 0x11c37ae8 */
  if (C.cf) goto L_11c37ae8;
L_11c37970:;
  /* 11c37970 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11c37976 jne 0x11c3798c */
  if (!C.zf) goto L_11c3798c;
  /* 11c37978 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c3797b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11c3797e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c37981 jb 0x11c379ac */
  if (C.cf) goto L_11c379ac;
  /* 11c37983 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c37985 jmp dword ptr [edx*4 + 0x11c37a98] */
  switch (EDX) {
    case 0: goto L_11c37aa8;
    case 1: goto L_11c37ab0;
    case 2: goto L_11c37abc;
    case 3: goto L_11c37ad0;
    default: x86_unimpl("switch@0x11c37985 out of table"); return;
  }
L_11c3798c:;
  /* 11c3798c mov eax, edi */
  EAX = (EDI);
  /* 11c3798e mov edx, 3 */
  EDX = (0x3u);
  /* 11c37993 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c37996 jb 0x11c379a4 */
  if (C.cf) goto L_11c379a4;
  /* 11c37998 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11c3799b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3799d jmp dword ptr [eax*4 + 0x11c379b0] */
  switch (EAX) {
    case 1: goto L_11c379c0;
    case 2: goto L_11c379ec;
    case 3: goto L_11c37a10;
    default: x86_unimpl("switch@0x11c3799d out of table"); return;
  }
L_11c379a4:;
  /* 11c379a4 jmp dword ptr [ecx*4 + 0x11c37aa8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11c37aa8)))); return;
  /* 11c379ab nop  */
  /* nop */
L_11c379ac:;
  /* 11c379ac jmp dword ptr [ecx*4 + 0x11c37a2c] */
  switch (ECX) {
    case 0: goto L_11c37a8f;
    case 1: goto L_11c37a7c;
    case 2: goto L_11c37a74;
    case 3: goto L_11c37a6c;
    case 4: goto L_11c37a64;
    case 5: goto L_11c37a5c;
    case 6: goto L_11c37a54;
    case 7: goto L_11c37a4c;
    default: x86_unimpl("switch@0x11c379ac out of table"); return;
  }
  /* 11c379b3 nop  */
  /* nop */
L_11c379c0:;
  /* 11c379c0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11c379c2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c379c4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c379c6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11c379c9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11c379cc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11c379cf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c379d2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11c379d5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c379d8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c379db cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c379de jb 0x11c379ac */
  if (C.cf) goto L_11c379ac;
  /* 11c379e0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c379e2 jmp dword ptr [edx*4 + 0x11c37a98] */
  switch (EDX) {
    case 0: goto L_11c37aa8;
    case 1: goto L_11c37ab0;
    case 2: goto L_11c37abc;
    case 3: goto L_11c37ad0;
    default: x86_unimpl("switch@0x11c379e2 out of table"); return;
  }
  /* 11c379e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c379ec:;
  /* 11c379ec and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11c379ee mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c379f0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c379f2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11c379f5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c379f8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11c379fb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c379fe add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c37a01 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c37a04 jb 0x11c379ac */
  if (C.cf) goto L_11c379ac;
  /* 11c37a06 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c37a08 jmp dword ptr [edx*4 + 0x11c37a98] */
  switch (EDX) {
    case 0: goto L_11c37aa8;
    case 1: goto L_11c37ab0;
    case 2: goto L_11c37abc;
    case 3: goto L_11c37ad0;
    default: x86_unimpl("switch@0x11c37a08 out of table"); return;
  }
  /* 11c37a0f nop  */
  /* nop */
L_11c37a10:;
  /* 11c37a10 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11c37a12 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c37a14 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c37a16 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c37a17 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c37a1a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c37a1b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c37a1e jb 0x11c379ac */
  if (C.cf) goto L_11c379ac;
  /* 11c37a20 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c37a22 jmp dword ptr [edx*4 + 0x11c37a98] */
  switch (EDX) {
    case 0: goto L_11c37aa8;
    case 1: goto L_11c37ab0;
    case 2: goto L_11c37abc;
    case 3: goto L_11c37ad0;
    default: x86_unimpl("switch@0x11c37a22 out of table"); return;
  }
  /* 11c37a29 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c37a4c:;
  /* 11c37a4c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11c37a50 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11c37a54:;
  /* 11c37a54 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11c37a58 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11c37a5c:;
  /* 11c37a5c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11c37a60 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11c37a64:;
  /* 11c37a64 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11c37a68 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11c37a6c:;
  /* 11c37a6c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11c37a70 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11c37a74:;
  /* 11c37a74 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11c37a78 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11c37a7c:;
  /* 11c37a7c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11c37a80 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11c37a84 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11c37a8b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c37a8d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11c37a8f:;
  /* 11c37a8f jmp dword ptr [edx*4 + 0x11c37a98] */
  switch (EDX) {
    case 0: goto L_11c37aa8;
    case 1: goto L_11c37ab0;
    case 2: goto L_11c37abc;
    case 3: goto L_11c37ad0;
    default: x86_unimpl("switch@0x11c37a8f out of table"); return;
  }
  /* 11c37a96 mov edi, edi */
  EDI = (EDI);
L_11c37aa8:;
  /* 11c37aa8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c37aab pop esi */
  ESI = (pop32());
  /* 11c37aac pop edi */
  EDI = (pop32());
  /* 11c37aad leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c37aae ret  */
  ESPCHK(0x11c37950u, _esp0);
  ESP += 4; return;
  /* 11c37aaf nop  */
  /* nop */
L_11c37ab0:;
  /* 11c37ab0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c37ab2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c37ab4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c37ab7 pop esi */
  ESI = (pop32());
  /* 11c37ab8 pop edi */
  EDI = (pop32());
  /* 11c37ab9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c37aba ret  */
  ESPCHK(0x11c37950u, _esp0);
  ESP += 4; return;
  /* 11c37abb nop  */
  /* nop */
L_11c37abc:;
  /* 11c37abc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c37abe mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c37ac0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11c37ac3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11c37ac6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c37ac9 pop esi */
  ESI = (pop32());
  /* 11c37aca pop edi */
  EDI = (pop32());
  /* 11c37acb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c37acc ret  */
  ESPCHK(0x11c37950u, _esp0);
  ESP += 4; return;
  /* 11c37acd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c37ad0:;
  /* 11c37ad0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c37ad2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c37ad4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11c37ad7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11c37ada mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11c37add mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11c37ae0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c37ae3 pop esi */
  ESI = (pop32());
  /* 11c37ae4 pop edi */
  EDI = (pop32());
  /* 11c37ae5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c37ae6 ret  */
  ESPCHK(0x11c37950u, _esp0);
  ESP += 4; return;
  /* 11c37ae7 nop  */
  /* nop */
L_11c37ae8:;
  /* 11c37ae8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11c37aec lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11c37af0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11c37af6 jne 0x11c37b1c */
  if (!C.zf) goto L_11c37b1c;
  /* 11c37af8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c37afb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11c37afe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c37b01 jb 0x11c37b10 */
  if (C.cf) goto L_11c37b10;
  /* 11c37b03 std  */
  C.df=1;
  /* 11c37b04 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c37b06 cld  */
  C.df=0;
  /* 11c37b07 jmp dword ptr [edx*4 + 0x11c37c30] */
  switch (EDX) {
    case 0: goto L_11c37c40;
    case 1: goto L_11c37c48;
    case 2: goto L_11c37c58;
    case 3: goto L_11c37c6c;
    default: x86_unimpl("switch@0x11c37b07 out of table"); return;
  }
  /* 11c37b0e mov edi, edi */
  EDI = (EDI);
L_11c37b10:;
  /* 11c37b10 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c37b12 jmp dword ptr [ecx*4 + 0x11c37be0] */
  switch (ECX) {
    case 0: goto L_11c37c27;
    default: x86_unimpl("switch@0x11c37b12 out of table"); return;
  }
  /* 11c37b19 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c37b1c:;
  /* 11c37b1c mov eax, edi */
  EAX = (EDI);
  /* 11c37b1e mov edx, 3 */
  EDX = (0x3u);
  /* 11c37b23 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c37b26 jb 0x11c37b34 */
  if (C.cf) goto L_11c37b34;
  /* 11c37b28 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11c37b2b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c37b2d jmp dword ptr [eax*4 + 0x11c37b38] */
  switch (EAX) {
    case 1: goto L_11c37b48;
    case 2: goto L_11c37b68;
    case 3: goto L_11c37b90;
    default: x86_unimpl("switch@0x11c37b2d out of table"); return;
  }
L_11c37b34:;
  /* 11c37b34 jmp dword ptr [ecx*4 + 0x11c37c30] */
  switch (ECX) {
    case 0: goto L_11c37c40;
    case 1: goto L_11c37c48;
    case 2: goto L_11c37c58;
    case 3: goto L_11c37c6c;
    default: x86_unimpl("switch@0x11c37b34 out of table"); return;
  }
  /* 11c37b3b nop  */
  /* nop */
L_11c37b48:;
  /* 11c37b48 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11c37b4b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11c37b4d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11c37b50 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11c37b51 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c37b54 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11c37b55 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c37b58 jb 0x11c37b10 */
  if (C.cf) goto L_11c37b10;
  /* 11c37b5a std  */
  C.df=1;
  /* 11c37b5b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c37b5d cld  */
  C.df=0;
  /* 11c37b5e jmp dword ptr [edx*4 + 0x11c37c30] */
  switch (EDX) {
    case 0: goto L_11c37c40;
    case 1: goto L_11c37c48;
    case 2: goto L_11c37c58;
    case 3: goto L_11c37c6c;
    default: x86_unimpl("switch@0x11c37b5e out of table"); return;
  }
  /* 11c37b65 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c37b68:;
  /* 11c37b68 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11c37b6b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11c37b6d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11c37b70 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11c37b73 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c37b76 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11c37b79 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c37b7c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c37b7f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c37b82 jb 0x11c37b10 */
  if (C.cf) goto L_11c37b10;
  /* 11c37b84 std  */
  C.df=1;
  /* 11c37b85 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c37b87 cld  */
  C.df=0;
  /* 11c37b88 jmp dword ptr [edx*4 + 0x11c37c30] */
  switch (EDX) {
    case 0: goto L_11c37c40;
    case 1: goto L_11c37c48;
    case 2: goto L_11c37c58;
    case 3: goto L_11c37c6c;
    default: x86_unimpl("switch@0x11c37b88 out of table"); return;
  }
  /* 11c37b8f nop  */
  /* nop */
L_11c37b90:;
  /* 11c37b90 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11c37b93 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11c37b95 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11c37b98 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11c37b9b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11c37b9e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11c37ba1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c37ba4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11c37ba7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c37baa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c37bad cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c37bb0 jb 0x11c37b10 */
  if (C.cf) goto L_11c37b10;
  /* 11c37bb6 std  */
  C.df=1;
  /* 11c37bb7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11c37bb9 cld  */
  C.df=0;
  /* 11c37bba jmp dword ptr [edx*4 + 0x11c37c30] */
  switch (EDX) {
    case 0: goto L_11c37c40;
    case 1: goto L_11c37c48;
    case 2: goto L_11c37c58;
    case 3: goto L_11c37c6c;
    default: x86_unimpl("switch@0x11c37bba out of table"); return;
  }
  /* 11c37bc1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11c37bc4 in al, 0x7b */
  x86_unimpl("in @ 0x11c37bc4");
  /* 11c37bc6 ret  */
  ESPCHK(0x11c37950u, _esp0);
  ESP += 4; return;
  /* 11c37bc7 adc esp, ebp */
  { uint32_t _a=(ESP),_b=(EBP),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c37bc9 jnp 0x11c37b8e */
  if (!C.pf) goto L_11c37b8e;
  /* 11c37bcb adc esp, esi */
  { uint32_t _a=(ESP),_b=(ESI),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c37bcd jnp 0x11c37b92 */
  if (!C.pf) goto L_11c37b92;
  /* 11c37bcf adc esp, edi */
  { uint32_t _a=(ESP),_b=(EDI),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c37bd1 jnp 0x11c37b96 */
  if (!C.pf) goto L_11c37b96;
  /* 11c37bd3 adc dword ptr [esp + edi*2], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + EDI*2))),_b=(EAX),_r=_a+_b+C.cf; w32((uint32_t)(ESP + EDI*2), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c37bd6 ret  */
  ESPCHK(0x11c37950u, _esp0);
  ESP += 4; return;
  /* 11c37bd7 adc dword ptr [esp + edi*2], ecx */
  { uint32_t _a=(r32((uint32_t)(ESP + EDI*2))),_b=(ECX),_r=_a+_b+C.cf; w32((uint32_t)(ESP + EDI*2), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c37bda ret  */
  ESPCHK(0x11c37950u, _esp0);
  ESP += 4; return;
  /* 11c37bdb adc dword ptr [esp + edi*2], edx */
  { uint32_t _a=(r32((uint32_t)(ESP + EDI*2))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(ESP + EDI*2), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c37bde ret  */
  ESPCHK(0x11c37950u, _esp0);
  ESP += 4; return;
  /* 11c37be4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11c37be8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11c37bec mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11c37bf0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11c37bf4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11c37bf8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11c37bfc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11c37c00 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11c37c04 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11c37c08 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11c37c0c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11c37c10 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11c37c14 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11c37c18 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11c37c1c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11c37c23 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c37c25 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11c37c27:;
  /* 11c37c27 jmp dword ptr [edx*4 + 0x11c37c30] */
  switch (EDX) {
    case 0: goto L_11c37c40;
    case 1: goto L_11c37c48;
    case 2: goto L_11c37c58;
    case 3: goto L_11c37c6c;
    default: x86_unimpl("switch@0x11c37c27 out of table"); return;
  }
  /* 11c37c2e mov edi, edi */
  EDI = (EDI);
L_11c37c40:;
  /* 11c37c40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c37c43 pop esi */
  ESI = (pop32());
  /* 11c37c44 pop edi */
  EDI = (pop32());
  /* 11c37c45 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c37c46 ret  */
  ESPCHK(0x11c37950u, _esp0);
  ESP += 4; return;
  /* 11c37c47 nop  */
  /* nop */
L_11c37c48:;
  /* 11c37c48 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11c37c4b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11c37c4e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c37c51 pop esi */
  ESI = (pop32());
  /* 11c37c52 pop edi */
  EDI = (pop32());
  /* 11c37c53 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c37c54 ret  */
  ESPCHK(0x11c37950u, _esp0);
  ESP += 4; return;
  /* 11c37c55 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c37c58:;
  /* 11c37c58 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11c37c5b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11c37c5e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11c37c61 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11c37c64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c37c67 pop esi */
  ESI = (pop32());
  /* 11c37c68 pop edi */
  EDI = (pop32());
  /* 11c37c69 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c37c6a ret  */
  ESPCHK(0x11c37950u, _esp0);
  ESP += 4; return;
  /* 11c37c6b nop  */
  /* nop */
L_11c37c6c:;
  /* 11c37c6c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11c37c6f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11c37c72 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11c37c75 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11c37c78 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11c37c7b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11c37c7e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c37c81 pop esi */
  ESI = (pop32());
  /* 11c37c82 pop edi */
  EDI = (pop32());
  /* 11c37c83 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c37c84 ret  */
  ESPCHK(0x11c37950u, _esp0);
  ESP += 4; return;
L_11c37b8e: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x11c37b8e (unresolved jump table)"); return;
L_11c37b92: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x11c37b92 (unresolved jump table)"); return;
L_11c37b96: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x11c37b96 (unresolved jump table)"); return;
}

/* __global_unwind2 @ 0x11c37c88 (32 bytes, 18 insns) */
void f_11c37c88(void) {
  FTRACE(0x11c37c88u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c37c88 push ebp */
  push32((uint32_t)(EBP));
  /* 11c37c89 mov ebp, esp */
  EBP = (ESP);
  /* 11c37c8b push ebx */
  push32((uint32_t)(EBX));
  /* 11c37c8c push esi */
  push32((uint32_t)(ESI));
  /* 11c37c8d push edi */
  push32((uint32_t)(EDI));
  /* 11c37c8e push ebp */
  push32((uint32_t)(EBP));
  /* 11c37c8f push 0 */
  push32((uint32_t)(0x0u));
  /* 11c37c91 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c37c93 push 0x11c37ca0 */
  push32((uint32_t)(0x11c37ca0u));
  /* 11c37c98 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c37c9b call 0x11c3b9b4 */
  push32(0x11c37ca0u); f_11c3b9b4();
  /* 11c37ca0 pop ebp */
  EBP = (pop32());
  /* 11c37ca1 pop edi */
  EDI = (pop32());
  /* 11c37ca2 pop esi */
  ESI = (pop32());
  /* 11c37ca3 pop ebx */
  EBX = (pop32());
  /* 11c37ca4 mov esp, ebp */
  ESP = (EBP);
  /* 11c37ca6 pop ebp */
  EBP = (pop32());
  /* 11c37ca7 ret  */
  ESPCHK(0x11c37c88u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x11c37cca (104 bytes, 33 insns) */
void f_11c37cca(void) {
  FTRACE(0x11c37ccau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c37cca push ebx */
  push32((uint32_t)(EBX));
  /* 11c37ccb push esi */
  push32((uint32_t)(ESI));
  /* 11c37ccc push edi */
  push32((uint32_t)(EDI));
  /* 11c37ccd mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11c37cd1 push eax */
  push32((uint32_t)(EAX));
  /* 11c37cd2 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 11c37cd4 push 0x11c37ca8 */
  push32((uint32_t)(0x11c37ca8u));
  /* 11c37cd9 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 11c37ce0 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_11c37ce7:;
  /* 11c37ce7 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 11c37ceb mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 11c37cee mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11c37cf1 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c37cf4 je 0x11c37d24 */
  if (C.zf) goto L_11c37d24;
  /* 11c37cf6 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c37cfa je 0x11c37d24 */
  if (C.zf) goto L_11c37d24;
  /* 11c37cfc lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 11c37cff mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 11c37d02 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 11c37d06 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11c37d09 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c37d0e jne 0x11c37d22 */
  if (!C.zf) goto L_11c37d22;
  /* 11c37d10 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11c37d15 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 11c37d19 call 0x11c37d5e */
  push32(0x11c37d1eu); f_11c37d5e();
  /* 11c37d1e call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x11c37d22u);
L_11c37d22:;
  /* 11c37d22 jmp 0x11c37ce7 */
  goto L_11c37ce7;
L_11c37d24:;
  /* 11c37d24 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 11c37d2b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c37d2e pop edi */
  EDI = (pop32());
  /* 11c37d2f pop esi */
  ESI = (pop32());
  /* 11c37d30 pop ebx */
  EBX = (pop32());
  /* 11c37d31 ret  */
  ESPCHK(0x11c37ccau, _esp0);
  ESP += 4; return;
}

/* __abnormal_termination @ 0x11c37d32 (35 bytes, 10 insns) */
void f_11c37d32(void) {
  FTRACE(0x11c37d32u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c37d32 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c37d34 mov ecx, dword ptr fs:[0] */
  ECX = (r32((uint32_t)(0x0)));
  /* 11c37d3b cmp dword ptr [ecx + 4], 0x11c37ca8 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x11c37ca8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c37d42 jne 0x11c37d54 */
  if (!C.zf) goto L_11c37d54;
  /* 11c37d44 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11c37d47 mov edx, dword ptr [edx + 0xc] */
  EDX = (r32((uint32_t)(EDX + 0xc)));
  /* 11c37d4a cmp dword ptr [ecx + 8], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c37d4d jne 0x11c37d54 */
  if (!C.zf) goto L_11c37d54;
  /* 11c37d4f mov eax, 1 */
  EAX = (0x1u);
L_11c37d54:;
  /* 11c37d54 ret  */
  ESPCHK(0x11c37d32u, _esp0);
  ESP += 4; return;
}

/* __NLG_Notify1 @ 0x11c37d55 (9 bytes, 4 insns) */
void f_11c37d55(void) {
  FTRACE(0x11c37d55u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c37d55 push ebx */
  push32((uint32_t)(EBX));
  /* 11c37d56 push ecx */
  push32((uint32_t)(ECX));
  /* 11c37d57 mov ebx, 0x11c41bd0 */
  EBX = (0x11c41bd0u);
  /* 11c37d5c jmp 0x11c37d68 */
  jmp_ind(0x11c37d68u); return;
}

/* FUN_10007d5e @ 0x11c37d5e (24 bytes, 10 insns) */
void f_11c37d5e(void) {
  FTRACE(0x11c37d5eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c37d5e push ebx */
  push32((uint32_t)(EBX));
  /* 11c37d5f push ecx */
  push32((uint32_t)(ECX));
  /* 11c37d60 mov ebx, 0x11c41bd0 */
  EBX = (0x11c41bd0u);
  /* 11c37d65 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c37d68 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11c37d6b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11c37d6e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 11c37d71 pop ecx */
  ECX = (pop32());
  /* 11c37d72 pop ebx */
  EBX = (pop32());
  /* 11c37d73 ret 4 */
  ESPCHK(0x11c37d5eu, _esp0);
  ESP += 8; return;
}

/* FUN_10007e3d @ 0x11c37e3d (27 bytes, 11 insns) */
void f_11c37e3d(void) {
  FTRACE(0x11c37e3du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c37e3d push ebp */
  push32((uint32_t)(EBP));
  /* 11c37e3e mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c37e42 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 11c37e44 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11c37e47 push eax */
  push32((uint32_t)(EAX));
  /* 11c37e48 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 11c37e4b push eax */
  push32((uint32_t)(EAX));
  /* 11c37e4c call 0x11c37cca */
  push32(0x11c37e51u); f_11c37cca();
  /* 11c37e51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c37e54 pop ebp */
  EBP = (pop32());
  /* 11c37e55 ret 4 */
  ESPCHK(0x11c37e3du, _esp0);
  ESP += 8; return;
}

/* FUN_10007e58 @ 0x11c37e58 (101 bytes, 34 insns) */
void f_11c37e58(void) {
  FTRACE(0x11c37e58u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c37e58 push esi */
  push32((uint32_t)(ESI));
  /* 11c37e59 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c37e5d cmp esi, dword ptr [0x11c57e60] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11c57e60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c37e63 jae 0x11c37ea5 */
  if (!C.cf) goto L_11c37ea5;
  /* 11c37e65 mov ecx, esi */
  ECX = (ESI);
  /* 11c37e67 mov eax, esi */
  EAX = (ESI);
  /* 11c37e69 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11c37e6c and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11c37e6f mov ecx, dword ptr [ecx*4 + 0x11c57d60] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11c57d60)));
  /* 11c37e76 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11c37e79 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11c37e7e je 0x11c37ea5 */
  if (C.zf) goto L_11c37ea5;
  /* 11c37e80 push edi */
  push32((uint32_t)(EDI));
  /* 11c37e81 push esi */
  push32((uint32_t)(ESI));
  /* 11c37e82 call 0x11c39dd7 */
  push32(0x11c37e87u); f_11c39dd7();
  /* 11c37e87 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11c37e8b push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11c37e8f push esi */
  push32((uint32_t)(ESI));
  /* 11c37e90 call 0x11c37ebd */
  push32(0x11c37e95u); f_11c37ebd();
  /* 11c37e95 push esi */
  push32((uint32_t)(ESI));
  /* 11c37e96 mov edi, eax */
  EDI = (EAX);
  /* 11c37e98 call 0x11c39e36 */
  push32(0x11c37e9du); f_11c39e36();
  /* 11c37e9d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c37ea0 mov eax, edi */
  EAX = (EDI);
  /* 11c37ea2 pop edi */
  EDI = (pop32());
  /* 11c37ea3 pop esi */
  ESI = (pop32());
  /* 11c37ea4 ret  */
  ESPCHK(0x11c37e58u, _esp0);
  ESP += 4; return;
L_11c37ea5:;
  /* 11c37ea5 call 0x11c39d04 */
  push32(0x11c37eaau); f_11c39d04();
  /* 11c37eaa mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11c37eb0 call 0x11c39d0d */
  push32(0x11c37eb5u); f_11c39d0d();
  /* 11c37eb5 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11c37eb8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c37ebb pop esi */
  ESI = (pop32());
  /* 11c37ebc ret  */
  ESPCHK(0x11c37e58u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ebd @ 0x11c37ebd (115 bytes, 41 insns) */
void f_11c37ebd(void) {
  FTRACE(0x11c37ebdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c37ebd push esi */
  push32((uint32_t)(ESI));
  /* 11c37ebe mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c37ec2 push edi */
  push32((uint32_t)(EDI));
  /* 11c37ec3 push esi */
  push32((uint32_t)(ESI));
  /* 11c37ec4 call 0x11c39d95 */
  push32(0x11c37ec9u); f_11c39d95();
  /* 11c37ec9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c37ecc pop ecx */
  ECX = (pop32());
  /* 11c37ecd jne 0x11c37edc */
  if (!C.zf) goto L_11c37edc;
  /* 11c37ecf call 0x11c39d04 */
  push32(0x11c37ed4u); f_11c39d04();
  /* 11c37ed4 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11c37eda jmp 0x11c37f09 */
  goto L_11c37f09;
L_11c37edc:;
  /* 11c37edc push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 11c37ee0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c37ee2 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11c37ee6 push eax */
  push32((uint32_t)(EAX));
  /* 11c37ee7 call dword ptr [0x11c3d054] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d054))), 0x11c37eedu);
  /* 11c37eed mov edi, eax */
  EDI = (EAX);
  /* 11c37eef cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c37ef2 jne 0x11c37efc */
  if (!C.zf) goto L_11c37efc;
  /* 11c37ef4 call dword ptr [0x11c3d0f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d0f8))), 0x11c37efau);
  /* 11c37efa jmp 0x11c37efe */
  goto L_11c37efe;
L_11c37efc:;
  /* 11c37efc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c37efe:;
  /* 11c37efe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c37f00 je 0x11c37f0e */
  if (C.zf) goto L_11c37f0e;
  /* 11c37f02 push eax */
  push32((uint32_t)(EAX));
  /* 11c37f03 call 0x11c39c91 */
  push32(0x11c37f08u); f_11c39c91();
  /* 11c37f08 pop ecx */
  ECX = (pop32());
L_11c37f09:;
  /* 11c37f09 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c37f0c jmp 0x11c37f2d */
  goto L_11c37f2d;
L_11c37f0e:;
  /* 11c37f0e mov ecx, esi */
  ECX = (ESI);
  /* 11c37f10 and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 11c37f13 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11c37f16 mov eax, esi */
  EAX = (ESI);
  /* 11c37f18 mov ecx, dword ptr [ecx*4 + 0x11c57d60] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11c57d60)));
  /* 11c37f1f lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11c37f22 and byte ptr [ecx + eax*4 + 4], 0xfd */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0xfdu); w8((uint32_t)(ECX + EAX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 11c37f27 lea eax, [ecx + eax*4 + 4] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0x4));
  /* 11c37f2b mov eax, edi */
  EAX = (EDI);
L_11c37f2d:;
  /* 11c37f2d pop edi */
  EDI = (pop32());
  /* 11c37f2e pop esi */
  ESI = (pop32());
  /* 11c37f2f ret  */
  ESPCHK(0x11c37ebdu, _esp0);
  ESP += 4; return;
}

/* FUN_10007f30 @ 0x11c37f30 (101 bytes, 34 insns) */
void f_11c37f30(void) {
  FTRACE(0x11c37f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c37f30 push esi */
  push32((uint32_t)(ESI));
  /* 11c37f31 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c37f35 cmp esi, dword ptr [0x11c57e60] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11c57e60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c37f3b jae 0x11c37f7d */
  if (!C.cf) goto L_11c37f7d;
  /* 11c37f3d mov ecx, esi */
  ECX = (ESI);
  /* 11c37f3f mov eax, esi */
  EAX = (ESI);
  /* 11c37f41 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11c37f44 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11c37f47 mov ecx, dword ptr [ecx*4 + 0x11c57d60] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11c57d60)));
  /* 11c37f4e lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11c37f51 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11c37f56 je 0x11c37f7d */
  if (C.zf) goto L_11c37f7d;
  /* 11c37f58 push edi */
  push32((uint32_t)(EDI));
  /* 11c37f59 push esi */
  push32((uint32_t)(ESI));
  /* 11c37f5a call 0x11c39dd7 */
  push32(0x11c37f5fu); f_11c39dd7();
  /* 11c37f5f push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11c37f63 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11c37f67 push esi */
  push32((uint32_t)(ESI));
  /* 11c37f68 call 0x11c37f95 */
  push32(0x11c37f6du); f_11c37f95();
  /* 11c37f6d push esi */
  push32((uint32_t)(ESI));
  /* 11c37f6e mov edi, eax */
  EDI = (EAX);
  /* 11c37f70 call 0x11c39e36 */
  push32(0x11c37f75u); f_11c39e36();
  /* 11c37f75 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c37f78 mov eax, edi */
  EAX = (EDI);
  /* 11c37f7a pop edi */
  EDI = (pop32());
  /* 11c37f7b pop esi */
  ESI = (pop32());
  /* 11c37f7c ret  */
  ESPCHK(0x11c37f30u, _esp0);
  ESP += 4; return;
L_11c37f7d:;
  /* 11c37f7d call 0x11c39d04 */
  push32(0x11c37f82u); f_11c39d04();
  /* 11c37f82 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11c37f88 call 0x11c39d0d */
  push32(0x11c37f8du); f_11c39d0d();
  /* 11c37f8d and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11c37f90 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c37f93 pop esi */
  ESI = (pop32());
  /* 11c37f94 ret  */
  ESPCHK(0x11c37f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f95 @ 0x11c37f95 (395 bytes, 135 insns) */
void f_11c37f95(void) {
  FTRACE(0x11c37f95u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c37f95 push ebp */
  push32((uint32_t)(EBP));
  /* 11c37f96 mov ebp, esp */
  EBP = (ESP);
  /* 11c37f98 sub esp, 0x414 */
  { uint32_t _a=(ESP),_b=(0x414u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c37f9e push ebx */
  push32((uint32_t)(EBX));
  /* 11c37f9f push esi */
  push32((uint32_t)(ESI));
  /* 11c37fa0 push edi */
  push32((uint32_t)(EDI));
  /* 11c37fa1 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11c37fa3 cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c37fa6 mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 11c37fa9 mov dword ptr [ebp - 0x10], edi */
  w32((uint32_t)(EBP + -0x10), (EDI));
  /* 11c37fac jne 0x11c37fb5 */
  if (!C.zf) goto L_11c37fb5;
L_11c37fae:;
  /* 11c37fae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c37fb0 jmp 0x11c3811b */
  goto L_11c3811b;
L_11c37fb5:;
  /* 11c37fb5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c37fb8 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11c37fbb lea ebx, [eax*4 + 0x11c57d60] */
  EBX = ((uint32_t)(EAX*4 + 0x11c57d60));
  /* 11c37fc2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c37fc5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11c37fc8 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 11c37fcb mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11c37fcd shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11c37fd0 test byte ptr [eax + esi + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 11c37fd5 je 0x11c37fe5 */
  if (C.zf) goto L_11c37fe5;
  /* 11c37fd7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c37fd9 push edi */
  push32((uint32_t)(EDI));
  /* 11c37fda push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c37fdd call 0x11c37ebd */
  push32(0x11c37fe2u); f_11c37ebd();
  /* 11c37fe2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c37fe5:;
  /* 11c37fe5 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11c37fe7 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c37fe9 test byte ptr [eax + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x80u); fl_logic(_r,8); }
  /* 11c37fed je 0x11c380b4 */
  if (C.zf) goto L_11c380b4;
  /* 11c37ff3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c37ff6 cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c37ff9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11c37ffc mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 11c37fff jbe 0x11c380ef */
  if ((C.cf||C.zf)) goto L_11c380ef;
L_11c38005:;
  /* 11c38005 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
L_11c3800b:;
  /* 11c3800b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c3800e sub ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c38011 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c38014 jae 0x11c3803f */
  if (!C.cf) goto L_11c3803f;
  /* 11c38016 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c38019 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11c3801c mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 11c3801e cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c38021 jne 0x11c3802a */
  if (!C.zf) goto L_11c3802a;
  /* 11c38023 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 11c38026 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 11c38029 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11c3802a:;
  /* 11c3802a mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11c3802c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c3802d mov ecx, eax */
  ECX = (EAX);
  /* 11c3802f lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 11c38035 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c38037 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3803d jl 0x11c3800b */
  if ((C.sf!=C.of)) goto L_11c3800b;
L_11c3803f:;
  /* 11c3803f mov edi, eax */
  EDI = (EAX);
  /* 11c38041 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 11c38047 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c38049 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11c3804c push 0 */
  push32((uint32_t)(0x0u));
  /* 11c3804e push eax */
  push32((uint32_t)(EAX));
  /* 11c3804f lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 11c38055 push edi */
  push32((uint32_t)(EDI));
  /* 11c38056 push eax */
  push32((uint32_t)(EAX));
  /* 11c38057 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11c38059 push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 11c3805c call dword ptr [0x11c3d078] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d078))), 0x11c38062u);
  /* 11c38062 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c38064 je 0x11c380a9 */
  if (C.zf) goto L_11c380a9;
  /* 11c38066 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11c38069 add dword ptr [ebp - 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c3806c cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3806e jl 0x11c3807b */
  if ((C.sf!=C.of)) goto L_11c3807b;
  /* 11c38070 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c38073 sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c38076 cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c38079 jb 0x11c38005 */
  if (C.cf) goto L_11c38005;
L_11c3807b:;
  /* 11c3807b xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11c3807d:;
  /* 11c3807d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11c38080 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c38082 jne 0x11c38118 */
  if (!C.zf) goto L_11c38118;
  /* 11c38088 cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3808b je 0x11c380ef */
  if (C.zf) goto L_11c380ef;
  /* 11c3808d push 5 */
  push32((uint32_t)(0x5u));
  /* 11c3808f pop esi */
  ESI = (pop32());
  /* 11c38090 cmp dword ptr [ebp + 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c38093 jne 0x11c380e1 */
  if (!C.zf) goto L_11c380e1;
  /* 11c38095 call 0x11c39d04 */
  push32(0x11c3809au); f_11c39d04();
  /* 11c3809a mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11c380a0 call 0x11c39d0d */
  push32(0x11c380a5u); f_11c39d0d();
  /* 11c380a5 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 11c380a7 jmp 0x11c380ea */
  goto L_11c380ea;
L_11c380a9:;
  /* 11c380a9 call dword ptr [0x11c3d0f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d0f8))), 0x11c380afu);
  /* 11c380af mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11c380b2 jmp 0x11c3807b */
  goto L_11c3807b;
L_11c380b4:;
  /* 11c380b4 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11c380b7 push edi */
  push32((uint32_t)(EDI));
  /* 11c380b8 push ecx */
  push32((uint32_t)(ECX));
  /* 11c380b9 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c380bc push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c380bf push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 11c380c1 call dword ptr [0x11c3d078] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d078))), 0x11c380c7u);
  /* 11c380c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c380c9 je 0x11c380d6 */
  if (C.zf) goto L_11c380d6;
  /* 11c380cb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11c380ce mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 11c380d1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11c380d4 jmp 0x11c3807d */
  goto L_11c3807d;
L_11c380d6:;
  /* 11c380d6 call dword ptr [0x11c3d0f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d0f8))), 0x11c380dcu);
  /* 11c380dc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11c380df jmp 0x11c3807d */
  goto L_11c3807d;
L_11c380e1:;
  /* 11c380e1 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c380e4 call 0x11c39c91 */
  push32(0x11c380e9u); f_11c39c91();
  /* 11c380e9 pop ecx */
  ECX = (pop32());
L_11c380ea:;
  /* 11c380ea or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c380ed jmp 0x11c3811b */
  goto L_11c3811b;
L_11c380ef:;
  /* 11c380ef mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11c380f1 test byte ptr [eax + esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x40u); fl_logic(_r,8); }
  /* 11c380f6 je 0x11c38104 */
  if (C.zf) goto L_11c38104;
  /* 11c380f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c380fb cmp byte ptr [eax], 0x1a */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c380fe je 0x11c37fae */
  if (C.zf) goto L_11c37fae;
L_11c38104:;
  /* 11c38104 call 0x11c39d04 */
  push32(0x11c38109u); f_11c39d04();
  /* 11c38109 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 11c3810f call 0x11c39d0d */
  push32(0x11c38114u); f_11c39d0d();
  /* 11c38114 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 11c38116 jmp 0x11c380ea */
  goto L_11c380ea;
L_11c38118:;
  /* 11c38118 sub eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11c3811b:;
  /* 11c3811b pop edi */
  EDI = (pop32());
  /* 11c3811c pop esi */
  ESI = (pop32());
  /* 11c3811d pop ebx */
  EBX = (pop32());
  /* 11c3811e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c3811f ret  */
  ESPCHK(0x11c37f95u, _esp0);
  ESP += 4; return;
}

/* FUN_100081dc @ 0x11c381dc (47 bytes, 17 insns) */
void f_11c381dc(void) {
  FTRACE(0x11c381dcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c381dc mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c381e0 mov ecx, 0x11c41be0 */
  ECX = (0x11c41be0u);
  /* 11c381e5 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c381e7 jb 0x11c38200 */
  if (C.cf) goto L_11c38200;
  /* 11c381e9 cmp eax, 0x11c41e40 */
  { uint32_t _a=(EAX),_b=(0x11c41e40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c381ee ja 0x11c38200 */
  if ((!C.cf&&!C.zf)) goto L_11c38200;
  /* 11c381f0 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c381f2 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11c381f5 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c381f8 push eax */
  push32((uint32_t)(EAX));
  /* 11c381f9 call 0x11c35ff6 */
  push32(0x11c381feu); f_11c35ff6();
  /* 11c381fe pop ecx */
  ECX = (pop32());
  /* 11c381ff ret  */
  ESPCHK(0x11c381dcu, _esp0);
  ESP += 4; return;
L_11c38200:;
  /* 11c38200 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c38203 push eax */
  push32((uint32_t)(EAX));
  /* 11c38204 call dword ptr [0x11c3d068] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d068))), 0x11c3820au);
  /* 11c3820a ret  */
  ESPCHK(0x11c381dcu, _esp0);
  ESP += 4; return;
}

/* FUN_1000820b @ 0x11c3820b (35 bytes, 13 insns) */
void f_11c3820b(void) {
  FTRACE(0x11c3820bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3820b mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c3820f cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c38212 jge 0x11c3821f */
  if ((C.sf==C.of)) goto L_11c3821f;
  /* 11c38214 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c38217 push eax */
  push32((uint32_t)(EAX));
  /* 11c38218 call 0x11c35ff6 */
  push32(0x11c3821du); f_11c35ff6();
  /* 11c3821d pop ecx */
  ECX = (pop32());
  /* 11c3821e ret  */
  ESPCHK(0x11c3820bu, _esp0);
  ESP += 4; return;
L_11c3821f:;
  /* 11c3821f mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c38223 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c38226 push eax */
  push32((uint32_t)(EAX));
  /* 11c38227 call dword ptr [0x11c3d068] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d068))), 0x11c3822du);
  /* 11c3822d ret  */
  ESPCHK(0x11c3820bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000822e @ 0x11c3822e (47 bytes, 17 insns) */
void f_11c3822e(void) {
  FTRACE(0x11c3822eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3822e mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c38232 mov ecx, 0x11c41be0 */
  ECX = (0x11c41be0u);
  /* 11c38237 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c38239 jb 0x11c38252 */
  if (C.cf) goto L_11c38252;
  /* 11c3823b cmp eax, 0x11c41e40 */
  { uint32_t _a=(EAX),_b=(0x11c41e40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c38240 ja 0x11c38252 */
  if ((!C.cf&&!C.zf)) goto L_11c38252;
  /* 11c38242 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c38244 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11c38247 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3824a push eax */
  push32((uint32_t)(EAX));
  /* 11c3824b call 0x11c36057 */
  push32(0x11c38250u); f_11c36057();
  /* 11c38250 pop ecx */
  ECX = (pop32());
  /* 11c38251 ret  */
  ESPCHK(0x11c3822eu, _esp0);
  ESP += 4; return;
L_11c38252:;
  /* 11c38252 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c38255 push eax */
  push32((uint32_t)(EAX));
  /* 11c38256 call dword ptr [0x11c3d064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d064))), 0x11c3825cu);
  /* 11c3825c ret  */
  ESPCHK(0x11c3822eu, _esp0);
  ESP += 4; return;
}

/* FUN_1000825d @ 0x11c3825d (35 bytes, 13 insns) */
void f_11c3825d(void) {
  FTRACE(0x11c3825du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3825d mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c38261 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c38264 jge 0x11c38271 */
  if ((C.sf==C.of)) goto L_11c38271;
  /* 11c38266 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c38269 push eax */
  push32((uint32_t)(EAX));
  /* 11c3826a call 0x11c36057 */
  push32(0x11c3826fu); f_11c36057();
  /* 11c3826f pop ecx */
  ECX = (pop32());
  /* 11c38270 ret  */
  ESPCHK(0x11c3825du, _esp0);
  ESP += 4; return;
L_11c38271:;
  /* 11c38271 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c38275 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c38278 push eax */
  push32((uint32_t)(EAX));
  /* 11c38279 call dword ptr [0x11c3d064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d064))), 0x11c3827fu);
  /* 11c3827f ret  */
  ESPCHK(0x11c3825du, _esp0);
  ESP += 4; return;
}

/* FUN_10008365 @ 0x11c38365 (429 bytes, 143 insns) */
void f_11c38365(void) {
  FTRACE(0x11c38365u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c38365 push ebp */
  push32((uint32_t)(EBP));
  /* 11c38366 mov ebp, esp */
  EBP = (ESP);
  /* 11c38368 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3836b push ebx */
  push32((uint32_t)(EBX));
  /* 11c3836c push esi */
  push32((uint32_t)(ESI));
  /* 11c3836d push edi */
  push32((uint32_t)(EDI));
  /* 11c3836e push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11c38370 call 0x11c35ff6 */
  push32(0x11c38375u); f_11c35ff6();
  /* 11c38375 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c38378 call 0x11c38512 */
  push32(0x11c3837du); f_11c38512();
  /* 11c3837d mov ebx, eax */
  EBX = (EAX);
  /* 11c3837f pop ecx */
  ECX = (pop32());
  /* 11c38380 cmp ebx, dword ptr [0x11c56ad4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11c56ad4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c38386 pop ecx */
  ECX = (pop32());
  /* 11c38387 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11c3838a jne 0x11c38393 */
  if (!C.zf) goto L_11c38393;
L_11c3838c:;
  /* 11c3838c xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11c3838e jmp 0x11c38503 */
  goto L_11c38503;
L_11c38393:;
  /* 11c38393 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11c38395 je 0x11c384f1 */
  if (C.zf) goto L_11c384f1;
  /* 11c3839b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11c3839d mov eax, 0x11c41e68 */
  EAX = (0x11c41e68u);
L_11c383a2:;
  /* 11c383a2 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c383a4 je 0x11c3841a */
  if (C.zf) goto L_11c3841a;
  /* 11c383a6 add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c383a9 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11c383aa cmp eax, 0x11c41f58 */
  { uint32_t _a=(EAX),_b=(0x11c41f58u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c383af jl 0x11c383a2 */
  if ((C.sf!=C.of)) goto L_11c383a2;
  /* 11c383b1 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11c383b4 push eax */
  push32((uint32_t)(EAX));
  /* 11c383b5 push ebx */
  push32((uint32_t)(EBX));
  /* 11c383b6 call dword ptr [0x11c3d050] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d050))), 0x11c383bcu);
  /* 11c383bc push 1 */
  push32((uint32_t)(0x1u));
  /* 11c383be pop esi */
  ESI = (pop32());
  /* 11c383bf cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c383c1 jne 0x11c384e8 */
  if (!C.zf) goto L_11c384e8;
  /* 11c383c7 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11c383c9 and dword ptr [0x11c56d04], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11c56d04)))&(0x0u); w32((uint32_t)(0x11c56d04), (_r)); fl_logic(_r,32); }
  /* 11c383d0 pop ecx */
  ECX = (pop32());
  /* 11c383d1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c383d3 mov edi, 0x11c56c00 */
  EDI = (0x11c56c00u);
  /* 11c383d8 cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c383db rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11c383dd stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11c383de mov dword ptr [0x11c56ad4], ebx */
  w32((uint32_t)(0x11c56ad4), (EBX));
  /* 11c383e4 jbe 0x11c384d5 */
  if ((C.cf||C.zf)) goto L_11c384d5;
  /* 11c383ea cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c383ee je 0x11c384b0 */
  if (C.zf) goto L_11c384b0;
  /* 11c383f4 lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_11c383f7:;
  /* 11c383f7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11c383f9 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11c383fb je 0x11c384b0 */
  if (C.zf) goto L_11c384b0;
  /* 11c38401 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 11c38405 movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_11c38408:;
  /* 11c38408 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3840a ja 0x11c384a4 */
  if ((!C.cf&&!C.zf)) goto L_11c384a4;
  /* 11c38410 or byte ptr [eax + 0x11c56c01], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11c56c01)))|(0x4u); w8((uint32_t)(EAX + 0x11c56c01), (_r)); fl_logic(_r,8); }
  /* 11c38417 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c38418 jmp 0x11c38408 */
  goto L_11c38408;
L_11c3841a:;
  /* 11c3841a and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c3841e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11c38420 pop ecx */
  ECX = (pop32());
  /* 11c38421 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c38423 mov edi, 0x11c56c00 */
  EDI = (0x11c56c00u);
  /* 11c38428 lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 11c3842b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11c3842d shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11c38430 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11c38431 lea ebx, [esi + 0x11c41e78] */
  EBX = ((uint32_t)(ESI + 0x11c41e78));
L_11c38437:;
  /* 11c38437 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3843a mov ecx, ebx */
  ECX = (EBX);
  /* 11c3843c je 0x11c3846a */
  if (C.zf) goto L_11c3846a;
L_11c3843e:;
  /* 11c3843e mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11c38441 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11c38443 je 0x11c3846a */
  if (C.zf) goto L_11c3846a;
  /* 11c38445 movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 11c38448 movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 11c3844b cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3844d ja 0x11c38463 */
  if ((!C.cf&&!C.zf)) goto L_11c38463;
  /* 11c3844f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c38452 mov dl, byte ptr [edx + 0x11c41e60] */
  DL = (r8((uint32_t)(EDX + 0x11c41e60)));
L_11c38458:;
  /* 11c38458 or byte ptr [eax + 0x11c56c01], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11c56c01)))|(DL); w8((uint32_t)(EAX + 0x11c56c01), (_r)); fl_logic(_r,8); }
  /* 11c3845e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c3845f cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c38461 jbe 0x11c38458 */
  if ((C.cf||C.zf)) goto L_11c38458;
L_11c38463:;
  /* 11c38463 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c38464 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c38465 cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c38468 jne 0x11c3843e */
  if (!C.zf) goto L_11c3843e;
L_11c3846a:;
  /* 11c3846a inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11c3846d add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c38470 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c38474 jb 0x11c38437 */
  if (C.cf) goto L_11c38437;
  /* 11c38476 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c38479 mov dword ptr [0x11c56aec], 1 */
  w32((uint32_t)(0x11c56aec), (0x1u));
  /* 11c38483 push eax */
  push32((uint32_t)(EAX));
  /* 11c38484 mov dword ptr [0x11c56ad4], eax */
  w32((uint32_t)(0x11c56ad4), (EAX));
  /* 11c38489 call 0x11c3855c */
  push32(0x11c3848eu); f_11c3855c();
  /* 11c3848e lea esi, [esi + 0x11c41e6c] */
  ESI = ((uint32_t)(ESI + 0x11c41e6c));
  /* 11c38494 mov edi, 0x11c56ae0 */
  EDI = (0x11c56ae0u);
  /* 11c38499 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11c3849a movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11c3849b pop ecx */
  ECX = (pop32());
  /* 11c3849c mov dword ptr [0x11c56d04], eax */
  w32((uint32_t)(0x11c56d04), (EAX));
  /* 11c384a1 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11c384a2 jmp 0x11c384f6 */
  goto L_11c384f6;
L_11c384a4:;
  /* 11c384a4 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c384a5 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c384a6 cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c384aa jne 0x11c383f7 */
  if (!C.zf) goto L_11c383f7;
L_11c384b0:;
  /* 11c384b0 mov eax, esi */
  EAX = (ESI);
L_11c384b2:;
  /* 11c384b2 or byte ptr [eax + 0x11c56c01], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11c56c01)))|(0x8u); w8((uint32_t)(EAX + 0x11c56c01), (_r)); fl_logic(_r,8); }
  /* 11c384b9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c384ba cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c384bf jb 0x11c384b2 */
  if (C.cf) goto L_11c384b2;
  /* 11c384c1 push ebx */
  push32((uint32_t)(EBX));
  /* 11c384c2 call 0x11c3855c */
  push32(0x11c384c7u); f_11c3855c();
  /* 11c384c7 pop ecx */
  ECX = (pop32());
  /* 11c384c8 mov dword ptr [0x11c56d04], eax */
  w32((uint32_t)(0x11c56d04), (EAX));
  /* 11c384cd mov dword ptr [0x11c56aec], esi */
  w32((uint32_t)(0x11c56aec), (ESI));
  /* 11c384d3 jmp 0x11c384dc */
  goto L_11c384dc;
L_11c384d5:;
  /* 11c384d5 and dword ptr [0x11c56aec], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11c56aec)))&(0x0u); w32((uint32_t)(0x11c56aec), (_r)); fl_logic(_r,32); }
L_11c384dc:;
  /* 11c384dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c384de mov edi, 0x11c56ae0 */
  EDI = (0x11c56ae0u);
  /* 11c384e3 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11c384e4 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11c384e5 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11c384e6 jmp 0x11c384f6 */
  goto L_11c384f6;
L_11c384e8:;
  /* 11c384e8 cmp dword ptr [0x11c569ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c569ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c384ef je 0x11c38500 */
  if (C.zf) goto L_11c38500;
L_11c384f1:;
  /* 11c384f1 call 0x11c3858f */
  push32(0x11c384f6u); f_11c3858f();
L_11c384f6:;
  /* 11c384f6 call 0x11c385b8 */
  push32(0x11c384fbu); f_11c385b8();
  /* 11c384fb jmp 0x11c3838c */
  goto L_11c3838c;
L_11c38500:;
  /* 11c38500 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_11c38503:;
  /* 11c38503 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11c38505 call 0x11c36057 */
  push32(0x11c3850au); f_11c36057();
  /* 11c3850a pop ecx */
  ECX = (pop32());
  /* 11c3850b mov eax, esi */
  EAX = (ESI);
  /* 11c3850d pop edi */
  EDI = (pop32());
  /* 11c3850e pop esi */
  ESI = (pop32());
  /* 11c3850f pop ebx */
  EBX = (pop32());
  /* 11c38510 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c38511 ret  */
  ESPCHK(0x11c38365u, _esp0);
  ESP += 4; return;
}

/* FUN_10008512 @ 0x11c38512 (74 bytes, 15 insns) */
void f_11c38512(void) {
  FTRACE(0x11c38512u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c38512 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c38516 and dword ptr [0x11c569ac], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11c569ac)))&(0x0u); w32((uint32_t)(0x11c569ac), (_r)); fl_logic(_r,32); }
  /* 11c3851d cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c38520 jne 0x11c38532 */
  if (!C.zf) goto L_11c38532;
  /* 11c38522 mov dword ptr [0x11c569ac], 1 */
  w32((uint32_t)(0x11c569ac), (0x1u));
  /* 11c3852c jmp dword ptr [0x11c3d048] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11c3d048)))); return;
L_11c38532:;
  /* 11c38532 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c38535 jne 0x11c38547 */
  if (!C.zf) goto L_11c38547;
  /* 11c38537 mov dword ptr [0x11c569ac], 1 */
  w32((uint32_t)(0x11c569ac), (0x1u));
  /* 11c38541 jmp dword ptr [0x11c3d04c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11c3d04c)))); return;
L_11c38547:;
  /* 11c38547 cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3854a jne 0x11c3855b */
  if (!C.zf) goto L_11c3855b;
  /* 11c3854c mov eax, dword ptr [0x11c569f8] */
  EAX = (r32((uint32_t)(0x11c569f8)));
  /* 11c38551 mov dword ptr [0x11c569ac], 1 */
  w32((uint32_t)(0x11c569ac), (0x1u));
L_11c3855b:;
  /* 11c3855b ret  */
  ESPCHK(0x11c38512u, _esp0);
  ESP += 4; return;
}

/* FUN_1000855c @ 0x11c3855c (51 bytes, 19 insns) */
void f_11c3855c(void) {
  FTRACE(0x11c3855cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3855c mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c38560 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c38565 je 0x11c38589 */
  if (C.zf) goto L_11c38589;
  /* 11c38567 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3856a je 0x11c38583 */
  if (C.zf) goto L_11c38583;
  /* 11c3856c sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3856f je 0x11c3857d */
  if (C.zf) goto L_11c3857d;
  /* 11c38571 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c38572 je 0x11c38577 */
  if (C.zf) goto L_11c38577;
  /* 11c38574 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c38576 ret  */
  ESPCHK(0x11c3855cu, _esp0);
  ESP += 4; return;
L_11c38577:;
  /* 11c38577 mov eax, 0x404 */
  EAX = (0x404u);
  /* 11c3857c ret  */
  ESPCHK(0x11c3855cu, _esp0);
  ESP += 4; return;
L_11c3857d:;
  /* 11c3857d mov eax, 0x412 */
  EAX = (0x412u);
  /* 11c38582 ret  */
  ESPCHK(0x11c3855cu, _esp0);
  ESP += 4; return;
L_11c38583:;
  /* 11c38583 mov eax, 0x804 */
  EAX = (0x804u);
  /* 11c38588 ret  */
  ESPCHK(0x11c3855cu, _esp0);
  ESP += 4; return;
L_11c38589:;
  /* 11c38589 mov eax, 0x411 */
  EAX = (0x411u);
  /* 11c3858e ret  */
  ESPCHK(0x11c3855cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000858f @ 0x11c3858f (41 bytes, 17 insns) */
void f_11c3858f(void) {
  FTRACE(0x11c3858fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3858f push edi */
  push32((uint32_t)(EDI));
  /* 11c38590 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11c38592 pop ecx */
  ECX = (pop32());
  /* 11c38593 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c38595 mov edi, 0x11c56c00 */
  EDI = (0x11c56c00u);
  /* 11c3859a rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11c3859c stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11c3859d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c3859f mov edi, 0x11c56ae0 */
  EDI = (0x11c56ae0u);
  /* 11c385a4 mov dword ptr [0x11c56ad4], eax */
  w32((uint32_t)(0x11c56ad4), (EAX));
  /* 11c385a9 mov dword ptr [0x11c56aec], eax */
  w32((uint32_t)(0x11c56aec), (EAX));
  /* 11c385ae mov dword ptr [0x11c56d04], eax */
  w32((uint32_t)(0x11c56d04), (EAX));
  /* 11c385b3 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11c385b4 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11c385b5 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11c385b6 pop edi */
  EDI = (pop32());
  /* 11c385b7 ret  */
  ESPCHK(0x11c3858fu, _esp0);
  ESP += 4; return;
}

/* FUN_100085b8 @ 0x11c385b8 (389 bytes, 124 insns) */
void f_11c385b8(void) {
  FTRACE(0x11c385b8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c385b8 push ebp */
  push32((uint32_t)(EBP));
  /* 11c385b9 mov ebp, esp */
  EBP = (ESP);
  /* 11c385bb sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c385c1 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11c385c4 push esi */
  push32((uint32_t)(ESI));
  /* 11c385c5 push eax */
  push32((uint32_t)(EAX));
  /* 11c385c6 push dword ptr [0x11c56ad4] */
  push32((uint32_t)(r32((uint32_t)(0x11c56ad4))));
  /* 11c385cc call dword ptr [0x11c3d050] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d050))), 0x11c385d2u);
  /* 11c385d2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c385d5 jne 0x11c386f1 */
  if (!C.zf) goto L_11c386f1;
  /* 11c385db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c385dd mov esi, 0x100 */
  ESI = (0x100u);
L_11c385e2:;
  /* 11c385e2 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 11c385e9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c385ea cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c385ec jb 0x11c385e2 */
  if (C.cf) goto L_11c385e2;
  /* 11c385ee mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 11c385f1 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 11c385f8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c385fa je 0x11c38633 */
  if (C.zf) goto L_11c38633;
  /* 11c385fc push ebx */
  push32((uint32_t)(EBX));
  /* 11c385fd push edi */
  push32((uint32_t)(EDI));
  /* 11c385fe lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_11c38601:;
  /* 11c38601 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 11c38604 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11c38607 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c38609 ja 0x11c38628 */
  if ((!C.cf&&!C.zf)) goto L_11c38628;
  /* 11c3860b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3860d lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 11c38614 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c38615 mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 11c3861a mov ebx, ecx */
  EBX = (ECX);
  /* 11c3861c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c3861f rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11c38621 mov ecx, ebx */
  ECX = (EBX);
  /* 11c38623 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11c38626 rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_11c38628:;
  /* 11c38628 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11c38629 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11c3862a mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 11c3862d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c3862f jne 0x11c38601 */
  if (!C.zf) goto L_11c38601;
  /* 11c38631 pop edi */
  EDI = (pop32());
  /* 11c38632 pop ebx */
  EBX = (pop32());
L_11c38633:;
  /* 11c38633 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c38635 lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 11c3863b push dword ptr [0x11c56d04] */
  push32((uint32_t)(r32((uint32_t)(0x11c56d04))));
  /* 11c38641 push dword ptr [0x11c56ad4] */
  push32((uint32_t)(r32((uint32_t)(0x11c56ad4))));
  /* 11c38647 push eax */
  push32((uint32_t)(EAX));
  /* 11c38648 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11c3864e push esi */
  push32((uint32_t)(ESI));
  /* 11c3864f push eax */
  push32((uint32_t)(EAX));
  /* 11c38650 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c38652 call 0x11c38e8d */
  push32(0x11c38657u); f_11c38e8d();
  /* 11c38657 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c38659 lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 11c3865f push dword ptr [0x11c56ad4] */
  push32((uint32_t)(r32((uint32_t)(0x11c56ad4))));
  /* 11c38665 push esi */
  push32((uint32_t)(ESI));
  /* 11c38666 push eax */
  push32((uint32_t)(EAX));
  /* 11c38667 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11c3866d push esi */
  push32((uint32_t)(ESI));
  /* 11c3866e push eax */
  push32((uint32_t)(EAX));
  /* 11c3866f push esi */
  push32((uint32_t)(ESI));
  /* 11c38670 push dword ptr [0x11c56d04] */
  push32((uint32_t)(r32((uint32_t)(0x11c56d04))));
  /* 11c38676 call 0x11c38fd6 */
  push32(0x11c3867bu); f_11c38fd6();
  /* 11c3867b push 0 */
  push32((uint32_t)(0x0u));
  /* 11c3867d lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 11c38683 push dword ptr [0x11c56ad4] */
  push32((uint32_t)(r32((uint32_t)(0x11c56ad4))));
  /* 11c38689 push esi */
  push32((uint32_t)(ESI));
  /* 11c3868a push eax */
  push32((uint32_t)(EAX));
  /* 11c3868b lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11c38691 push esi */
  push32((uint32_t)(ESI));
  /* 11c38692 push eax */
  push32((uint32_t)(EAX));
  /* 11c38693 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11c38698 push dword ptr [0x11c56d04] */
  push32((uint32_t)(r32((uint32_t)(0x11c56d04))));
  /* 11c3869e call 0x11c38fd6 */
  push32(0x11c386a3u); f_11c38fd6();
  /* 11c386a3 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c386a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c386a8 lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_11c386ae:;
  /* 11c386ae mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11c386b1 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 11c386b4 je 0x11c386cc */
  if (C.zf) goto L_11c386cc;
  /* 11c386b6 or byte ptr [eax + 0x11c56c01], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11c56c01)))|(0x10u); w8((uint32_t)(EAX + 0x11c56c01), (_r)); fl_logic(_r,8); }
  /* 11c386bd mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_11c386c4:;
  /* 11c386c4 mov byte ptr [eax + 0x11c56b00], dl */
  w8((uint32_t)(EAX + 0x11c56b00), (DL));
  /* 11c386ca jmp 0x11c386e8 */
  goto L_11c386e8;
L_11c386cc:;
  /* 11c386cc test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 11c386cf je 0x11c386e1 */
  if (C.zf) goto L_11c386e1;
  /* 11c386d1 or byte ptr [eax + 0x11c56c01], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11c56c01)))|(0x20u); w8((uint32_t)(EAX + 0x11c56c01), (_r)); fl_logic(_r,8); }
  /* 11c386d8 mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 11c386df jmp 0x11c386c4 */
  goto L_11c386c4;
L_11c386e1:;
  /* 11c386e1 and byte ptr [eax + 0x11c56b00], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11c56b00)))&(0x0u); w8((uint32_t)(EAX + 0x11c56b00), (_r)); fl_logic(_r,8); }
L_11c386e8:;
  /* 11c386e8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c386e9 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c386ea inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c386eb cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c386ed jb 0x11c386ae */
  if (C.cf) goto L_11c386ae;
  /* 11c386ef jmp 0x11c3873a */
  goto L_11c3873a;
L_11c386f1:;
  /* 11c386f1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c386f3 mov esi, 0x100 */
  ESI = (0x100u);
L_11c386f8:;
  /* 11c386f8 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c386fb jb 0x11c38716 */
  if (C.cf) goto L_11c38716;
  /* 11c386fd cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c38700 ja 0x11c38716 */
  if ((!C.cf&&!C.zf)) goto L_11c38716;
  /* 11c38702 or byte ptr [eax + 0x11c56c01], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11c56c01)))|(0x10u); w8((uint32_t)(EAX + 0x11c56c01), (_r)); fl_logic(_r,8); }
  /* 11c38709 mov cl, al */
  CL = (AL);
  /* 11c3870b add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_11c3870e:;
  /* 11c3870e mov byte ptr [eax + 0x11c56b00], cl */
  w8((uint32_t)(EAX + 0x11c56b00), (CL));
  /* 11c38714 jmp 0x11c38735 */
  goto L_11c38735;
L_11c38716:;
  /* 11c38716 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c38719 jb 0x11c3872e */
  if (C.cf) goto L_11c3872e;
  /* 11c3871b cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3871e ja 0x11c3872e */
  if ((!C.cf&&!C.zf)) goto L_11c3872e;
  /* 11c38720 or byte ptr [eax + 0x11c56c01], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11c56c01)))|(0x20u); w8((uint32_t)(EAX + 0x11c56c01), (_r)); fl_logic(_r,8); }
  /* 11c38727 mov cl, al */
  CL = (AL);
  /* 11c38729 sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11c3872c jmp 0x11c3870e */
  goto L_11c3870e;
L_11c3872e:;
  /* 11c3872e and byte ptr [eax + 0x11c56b00], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11c56b00)))&(0x0u); w8((uint32_t)(EAX + 0x11c56b00), (_r)); fl_logic(_r,8); }
L_11c38735:;
  /* 11c38735 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c38736 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c38738 jb 0x11c386f8 */
  if (C.cf) goto L_11c386f8;
L_11c3873a:;
  /* 11c3873a pop esi */
  ESI = (pop32());
  /* 11c3873b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c3873c ret  */
  ESPCHK(0x11c385b8u, _esp0);
  ESP += 4; return;
}

/* FUN_1000873d @ 0x11c3873d (28 bytes, 7 insns) */
void f_11c3873d(void) {
  FTRACE(0x11c3873du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3873d cmp dword ptr [0x11c57e68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c57e68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c38744 jne 0x11c38758 */
  if (!C.zf) goto L_11c38758;
  /* 11c38746 push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 11c38748 call 0x11c38365 */
  push32(0x11c3874du); f_11c38365();
  /* 11c3874d pop ecx */
  ECX = (pop32());
  /* 11c3874e mov dword ptr [0x11c57e68], 1 */
  w32((uint32_t)(0x11c57e68), (0x1u));
L_11c38758:;
  /* 11c38758 ret  */
  ESPCHK(0x11c3873du, _esp0);
  ESP += 4; return;
}

/* FUN_10008759 @ 0x11c38759 (23 bytes, 7 insns) */
void f_11c38759(void) {
  FTRACE(0x11c38759u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c38759 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c3875b push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11c3875f push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11c38763 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11c38767 call 0x11c38770 */
  push32(0x11c3876cu); f_11c38770();
  /* 11c3876c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3876f ret  */
  ESPCHK(0x11c38759u, _esp0);
  ESP += 4; return;
}

/* FUN_10008770 @ 0x11c38770 (517 bytes, 195 insns) */
void f_11c38770(void) {
  FTRACE(0x11c38770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c38770 push ebp */
  push32((uint32_t)(EBP));
  /* 11c38771 mov ebp, esp */
  EBP = (ESP);
  /* 11c38773 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c38776 push ebx */
  push32((uint32_t)(EBX));
  /* 11c38777 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11c3877b push esi */
  push32((uint32_t)(ESI));
  /* 11c3877c push edi */
  push32((uint32_t)(EDI));
  /* 11c3877d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c38780 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11c38782 lea esi, [edi + 1] */
  ESI = ((uint32_t)(EDI + 0x1));
  /* 11c38785 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_11c38788:;
  /* 11c38788 cmp dword ptr [0x11c3f6f8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c3f6f8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3878f jle 0x11c387a0 */
  if ((C.zf||C.sf!=C.of)) goto L_11c387a0;
  /* 11c38791 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11c38794 push 8 */
  push32((uint32_t)(0x8u));
  /* 11c38796 push eax */
  push32((uint32_t)(EAX));
  /* 11c38797 call 0x11c351e0 */
  push32(0x11c3879cu); f_11c351e0();
  /* 11c3879c pop ecx */
  ECX = (pop32());
  /* 11c3879d pop ecx */
  ECX = (pop32());
  /* 11c3879e jmp 0x11c387af */
  goto L_11c387af;
L_11c387a0:;
  /* 11c387a0 mov ecx, dword ptr [0x11c3f704] */
  ECX = (r32((uint32_t)(0x11c3f704)));
  /* 11c387a6 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11c387a9 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11c387ac and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
L_11c387af:;
  /* 11c387af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c387b1 je 0x11c387b8 */
  if (C.zf) goto L_11c387b8;
  /* 11c387b3 mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 11c387b5 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c387b6 jmp 0x11c38788 */
  goto L_11c38788;
L_11c387b8:;
  /* 11c387b8 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c387bb mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 11c387be jne 0x11c387c6 */
  if (!C.zf) goto L_11c387c6;
  /* 11c387c0 or dword ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x2u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 11c387c4 jmp 0x11c387cb */
  goto L_11c387cb;
L_11c387c6:;
  /* 11c387c6 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c387c9 jne 0x11c387d1 */
  if (!C.zf) goto L_11c387d1;
L_11c387cb:;
  /* 11c387cb mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 11c387cd inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c387ce mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_11c387d1:;
  /* 11c387d1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c387d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c387d6 jl 0x11c38965 */
  if ((C.sf!=C.of)) goto L_11c38965;
  /* 11c387dc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c387df je 0x11c38965 */
  if (C.zf) goto L_11c38965;
  /* 11c387e5 cmp eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c387e8 jg 0x11c38965 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c38965;
  /* 11c387ee push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11c387f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c387f2 pop ecx */
  ECX = (pop32());
  /* 11c387f3 jne 0x11c38819 */
  if (!C.zf) goto L_11c38819;
  /* 11c387f5 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c387f8 je 0x11c38803 */
  if (C.zf) goto L_11c38803;
  /* 11c387fa mov dword ptr [ebp + 0x10], 0xa */
  w32((uint32_t)(EBP + 0x10), (0xau));
  /* 11c38801 jmp 0x11c38835 */
  goto L_11c38835;
L_11c38803:;
  /* 11c38803 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c38805 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c38807 je 0x11c38816 */
  if (C.zf) goto L_11c38816;
  /* 11c38809 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3880b je 0x11c38816 */
  if (C.zf) goto L_11c38816;
  /* 11c3880d mov dword ptr [ebp + 0x10], 8 */
  w32((uint32_t)(EBP + 0x10), (0x8u));
  /* 11c38814 jmp 0x11c38835 */
  goto L_11c38835;
L_11c38816:;
  /* 11c38816 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_11c38819:;
  /* 11c38819 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3881c jne 0x11c38835 */
  if (!C.zf) goto L_11c38835;
  /* 11c3881e cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c38821 jne 0x11c38835 */
  if (!C.zf) goto L_11c38835;
  /* 11c38823 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c38825 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c38827 je 0x11c3882d */
  if (C.zf) goto L_11c3882d;
  /* 11c38829 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3882b jne 0x11c38835 */
  if (!C.zf) goto L_11c38835;
L_11c3882d:;
  /* 11c3882d mov bl, byte ptr [esi + 1] */
  BL = (r8((uint32_t)(ESI + 0x1)));
  /* 11c38830 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c38831 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c38832 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_11c38835:;
  /* 11c38835 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c38838 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11c3883a div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11c3883d mov edi, 0x103 */
  EDI = (0x103u);
  /* 11c38842 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11c38845:;
  /* 11c38845 cmp dword ptr [0x11c3f6f8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c3f6f8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3884c movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 11c3884f jle 0x11c3885d */
  if ((C.zf||C.sf!=C.of)) goto L_11c3885d;
  /* 11c38851 push 4 */
  push32((uint32_t)(0x4u));
  /* 11c38853 push esi */
  push32((uint32_t)(ESI));
  /* 11c38854 call 0x11c351e0 */
  push32(0x11c38859u); f_11c351e0();
  /* 11c38859 pop ecx */
  ECX = (pop32());
  /* 11c3885a pop ecx */
  ECX = (pop32());
  /* 11c3885b jmp 0x11c38868 */
  goto L_11c38868;
L_11c3885d:;
  /* 11c3885d mov eax, dword ptr [0x11c3f704] */
  EAX = (r32((uint32_t)(0x11c3f704)));
  /* 11c38862 mov al, byte ptr [eax + esi*2] */
  AL = (r8((uint32_t)(EAX + ESI*2)));
  /* 11c38865 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_11c38868:;
  /* 11c38868 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3886a je 0x11c38874 */
  if (C.zf) goto L_11c38874;
  /* 11c3886c movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11c3886f sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c38872 jmp 0x11c388a6 */
  goto L_11c388a6;
L_11c38874:;
  /* 11c38874 cmp dword ptr [0x11c3f6f8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c3f6f8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3887b jle 0x11c38888 */
  if ((C.zf||C.sf!=C.of)) goto L_11c38888;
  /* 11c3887d push edi */
  push32((uint32_t)(EDI));
  /* 11c3887e push esi */
  push32((uint32_t)(ESI));
  /* 11c3887f call 0x11c351e0 */
  push32(0x11c38884u); f_11c351e0();
  /* 11c38884 pop ecx */
  ECX = (pop32());
  /* 11c38885 pop ecx */
  ECX = (pop32());
  /* 11c38886 jmp 0x11c38893 */
  goto L_11c38893;
L_11c38888:;
  /* 11c38888 mov eax, dword ptr [0x11c3f704] */
  EAX = (r32((uint32_t)(0x11c3f704)));
  /* 11c3888d mov ax, word ptr [eax + esi*2] */
  AX = (r16((uint32_t)(EAX + ESI*2)));
  /* 11c38891 and eax, edi */
  { uint32_t _r=(EAX)&(EDI); EAX = (_r); fl_logic(_r,32); }
L_11c38893:;
  /* 11c38893 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c38895 je 0x11c388e1 */
  if (C.zf) goto L_11c388e1;
  /* 11c38897 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11c3889a push eax */
  push32((uint32_t)(EAX));
  /* 11c3889b call 0x11c3a010 */
  push32(0x11c388a0u); f_11c3a010();
  /* 11c388a0 pop ecx */
  ECX = (pop32());
  /* 11c388a1 mov ecx, eax */
  ECX = (EAX);
  /* 11c388a3 sub ecx, 0x37 */
  { uint32_t _a=(ECX),_b=(0x37u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
L_11c388a6:;
  /* 11c388a6 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c388a9 jae 0x11c388e1 */
  if (!C.cf) goto L_11c388e1;
  /* 11c388ab mov esi, dword ptr [ebp - 8] */
  ESI = (r32((uint32_t)(EBP + -0x8)));
  /* 11c388ae or dword ptr [ebp + 0x14], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x8u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 11c388b2 cmp esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c388b5 jb 0x11c388cb */
  if (C.cf) goto L_11c388cb;
  /* 11c388b7 jne 0x11c388c5 */
  if (!C.zf) goto L_11c388c5;
  /* 11c388b9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c388bc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11c388be div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11c388c1 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c388c3 jbe 0x11c388cb */
  if ((C.cf||C.zf)) goto L_11c388cb;
L_11c388c5:;
  /* 11c388c5 or dword ptr [ebp + 0x14], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x4u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 11c388c9 jmp 0x11c388d4 */
  goto L_11c388d4;
L_11c388cb:;
  /* 11c388cb imul esi, dword ptr [ebp + 0x10] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x10)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c388cf add esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c388d1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
L_11c388d4:;
  /* 11c388d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c388d7 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11c388da mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11c388dc jmp 0x11c38845 */
  goto L_11c38845;
L_11c388e1:;
  /* 11c388e1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11c388e4 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 11c388e7 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c388ea test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11c388ec jne 0x11c388fe */
  if (!C.zf) goto L_11c388fe;
  /* 11c388ee test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11c388f0 je 0x11c388f8 */
  if (C.zf) goto L_11c388f8;
  /* 11c388f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c388f5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11c388f8:;
  /* 11c388f8 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11c388fc jmp 0x11c38949 */
  goto L_11c38949;
L_11c388fe:;
  /* 11c388fe test al, 4 */
  { uint32_t _r=(AL)&(0x4u); fl_logic(_r,8); }
  /* 11c38900 mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
  /* 11c38905 jne 0x11c38922 */
  if (!C.zf) goto L_11c38922;
  /* 11c38907 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11c38909 jne 0x11c38949 */
  if (!C.zf) goto L_11c38949;
  /* 11c3890b and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 11c3890e je 0x11c38919 */
  if (C.zf) goto L_11c38919;
  /* 11c38910 cmp dword ptr [ebp - 8], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c38917 ja 0x11c38922 */
  if ((!C.cf&&!C.zf)) goto L_11c38922;
L_11c38919:;
  /* 11c38919 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3891b jne 0x11c38949 */
  if (!C.zf) goto L_11c38949;
  /* 11c3891d cmp dword ptr [ebp - 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c38920 jbe 0x11c38949 */
  if ((C.cf||C.zf)) goto L_11c38949;
L_11c38922:;
  /* 11c38922 call 0x11c39d04 */
  push32(0x11c38927u); f_11c39d04();
  /* 11c38927 test byte ptr [ebp + 0x14], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x1u); fl_logic(_r,8); }
  /* 11c3892b mov dword ptr [eax], 0x22 */
  w32((uint32_t)(EAX), (0x22u));
  /* 11c38931 je 0x11c38939 */
  if (C.zf) goto L_11c38939;
  /* 11c38933 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11c38937 jmp 0x11c38949 */
  goto L_11c38949;
L_11c38939:;
  /* 11c38939 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11c3893c and al, 2 */
  { uint32_t _r=(AL)&(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11c3893e neg al */
  { uint32_t _a=(AL),_r=0u-_a; AL = (_r); fl_sub(0,_a,_r,8); }
  /* 11c38940 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c38942 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c38944 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c38946 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11c38949:;
  /* 11c38949 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11c3894b je 0x11c38952 */
  if (C.zf) goto L_11c38952;
  /* 11c3894d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c38950 mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
L_11c38952:;
  /* 11c38952 test byte ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x2u); fl_logic(_r,8); }
  /* 11c38956 je 0x11c38960 */
  if (C.zf) goto L_11c38960;
  /* 11c38958 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11c3895b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c3895d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11c38960:;
  /* 11c38960 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11c38963 jmp 0x11c38970 */
  goto L_11c38970;
L_11c38965:;
  /* 11c38965 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c38968 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3896a je 0x11c3896e */
  if (C.zf) goto L_11c3896e;
  /* 11c3896c mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_11c3896e:;
  /* 11c3896e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c38970:;
  /* 11c38970 pop edi */
  EDI = (pop32());
  /* 11c38971 pop esi */
  ESI = (pop32());
  /* 11c38972 pop ebx */
  EBX = (pop32());
  /* 11c38973 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c38974 ret  */
  ESPCHK(0x11c38770u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x11c38990 (193 bytes, 90 insns) */
void f_11c38990(void) {
  FTRACE(0x11c38990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c38990 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c38992 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11c38996 push ebx */
  push32((uint32_t)(EBX));
  /* 11c38997 mov ebx, eax */
  EBX = (EAX);
  /* 11c38999 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11c3899c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c389a0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11c389a6 je 0x11c389bb */
  if (C.zf) goto L_11c389bb;
L_11c389a8:;
  /* 11c389a8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11c389aa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11c389ab cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c389ad je 0x11c38980 */
  if (C.zf) { jmp_ind(0x11c38980u); return; }
  /* 11c389af test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11c389b1 je 0x11c38a04 */
  if (C.zf) goto L_11c38a04;
  /* 11c389b3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11c389b9 jne 0x11c389a8 */
  if (!C.zf) goto L_11c389a8;
L_11c389bb:;
  /* 11c389bb or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 11c389bd push edi */
  push32((uint32_t)(EDI));
  /* 11c389be mov eax, ebx */
  EAX = (EBX);
  /* 11c389c0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 11c389c3 push esi */
  push32((uint32_t)(ESI));
  /* 11c389c4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_11c389c6:;
  /* 11c389c6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11c389c8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 11c389cd mov eax, ecx */
  EAX = (ECX);
  /* 11c389cf mov esi, edi */
  ESI = (EDI);
  /* 11c389d1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 11c389d3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c389d5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c389d7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11c389da xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c389dd xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11c389df xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11c389e1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c389e4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 11c389ea jne 0x11c38a08 */
  if (!C.zf) goto L_11c38a08;
  /* 11c389ec and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11c389f1 je 0x11c389c6 */
  if (C.zf) goto L_11c389c6;
  /* 11c389f3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11c389f8 jne 0x11c38a02 */
  if (!C.zf) goto L_11c38a02;
  /* 11c389fa and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 11c38a00 jne 0x11c389c6 */
  if (!C.zf) goto L_11c389c6;
L_11c38a02:;
  /* 11c38a02 pop esi */
  ESI = (pop32());
  /* 11c38a03 pop edi */
  EDI = (pop32());
L_11c38a04:;
  /* 11c38a04 pop ebx */
  EBX = (pop32());
  /* 11c38a05 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c38a07 ret  */
  ESPCHK(0x11c38990u, _esp0);
  ESP += 4; return;
L_11c38a08:;
  /* 11c38a08 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11c38a0b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c38a0d je 0x11c38a45 */
  if (C.zf) goto L_11c38a45;
  /* 11c38a0f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c38a11 je 0x11c38a02 */
  if (C.zf) goto L_11c38a02;
  /* 11c38a13 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c38a15 je 0x11c38a3e */
  if (C.zf) goto L_11c38a3e;
  /* 11c38a17 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11c38a19 je 0x11c38a02 */
  if (C.zf) goto L_11c38a02;
  /* 11c38a1b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11c38a1e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c38a20 je 0x11c38a37 */
  if (C.zf) goto L_11c38a37;
  /* 11c38a22 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c38a24 je 0x11c38a02 */
  if (C.zf) goto L_11c38a02;
  /* 11c38a26 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c38a28 je 0x11c38a30 */
  if (C.zf) goto L_11c38a30;
  /* 11c38a2a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11c38a2c je 0x11c38a02 */
  if (C.zf) goto L_11c38a02;
  /* 11c38a2e jmp 0x11c389c6 */
  goto L_11c389c6;
L_11c38a30:;
  /* 11c38a30 pop esi */
  ESI = (pop32());
  /* 11c38a31 pop edi */
  EDI = (pop32());
  /* 11c38a32 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 11c38a35 pop ebx */
  EBX = (pop32());
  /* 11c38a36 ret  */
  ESPCHK(0x11c38990u, _esp0);
  ESP += 4; return;
L_11c38a37:;
  /* 11c38a37 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 11c38a3a pop esi */
  ESI = (pop32());
  /* 11c38a3b pop edi */
  EDI = (pop32());
  /* 11c38a3c pop ebx */
  EBX = (pop32());
  /* 11c38a3d ret  */
  ESPCHK(0x11c38990u, _esp0);
  ESP += 4; return;
L_11c38a3e:;
  /* 11c38a3e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 11c38a41 pop esi */
  ESI = (pop32());
  /* 11c38a42 pop edi */
  EDI = (pop32());
  /* 11c38a43 pop ebx */
  EBX = (pop32());
  /* 11c38a44 ret  */
  ESPCHK(0x11c38990u, _esp0);
  ESP += 4; return;
L_11c38a45:;
  /* 11c38a45 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 11c38a48 pop esi */
  ESI = (pop32());
  /* 11c38a49 pop edi */
  EDI = (pop32());
  /* 11c38a4a pop ebx */
  EBX = (pop32());
  /* 11c38a4b ret  */
  ESPCHK(0x11c38990u, _esp0);
  ESP += 4; return;
  /* 11c38a4c int3  */
  x86_unimpl("int3 @ 0x11c38a4c");
  /* 11c38a4d int3  */
  x86_unimpl("int3 @ 0x11c38a4d");
  /* 11c38a4e int3  */
  x86_unimpl("int3 @ 0x11c38a4e");
  /* 11c38a4f int3  */
  x86_unimpl("int3 @ 0x11c38a4f");
}

/* _strstr @ 0x11c38a50 (128 bytes, 66 insns) */
void f_11c38a50(void) {
  FTRACE(0x11c38a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c38a50 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c38a54 push edi */
  push32((uint32_t)(EDI));
  /* 11c38a55 push ebx */
  push32((uint32_t)(EBX));
  /* 11c38a56 push esi */
  push32((uint32_t)(ESI));
  /* 11c38a57 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11c38a59 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11c38a5d test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11c38a5f je 0x11c38aca */
  if (C.zf) goto L_11c38aca;
  /* 11c38a61 mov dh, byte ptr [ecx + 1] */
  C.d.b.h = (r8((uint32_t)(ECX + 0x1)));
  /* 11c38a64 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11c38a66 je 0x11c38ab7 */
  if (C.zf) goto L_11c38ab7;
L_11c38a68:;
  /* 11c38a68 mov esi, edi */
  ESI = (EDI);
  /* 11c38a6a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 11c38a6e mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11c38a70 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c38a71 cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c38a73 je 0x11c38a8a */
  if (C.zf) goto L_11c38a8a;
  /* 11c38a75 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c38a77 je 0x11c38a84 */
  if (C.zf) goto L_11c38a84;
L_11c38a79:;
  /* 11c38a79 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c38a7b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11c38a7c:;
  /* 11c38a7c cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c38a7e je 0x11c38a8a */
  if (C.zf) goto L_11c38a8a;
  /* 11c38a80 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c38a82 jne 0x11c38a79 */
  if (!C.zf) goto L_11c38a79;
L_11c38a84:;
  /* 11c38a84 pop esi */
  ESI = (pop32());
  /* 11c38a85 pop ebx */
  EBX = (pop32());
  /* 11c38a86 pop edi */
  EDI = (pop32());
  /* 11c38a87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c38a89 ret  */
  ESPCHK(0x11c38a50u, _esp0);
  ESP += 4; return;
L_11c38a8a:;
  /* 11c38a8a mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c38a8c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c38a8d cmp al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c38a8f jne 0x11c38a7c */
  if (!C.zf) goto L_11c38a7c;
  /* 11c38a91 lea edi, [esi - 1] */
  EDI = ((uint32_t)(ESI + -0x1));
L_11c38a94:;
  /* 11c38a94 mov ah, byte ptr [ecx + 2] */
  AH = (r8((uint32_t)(ECX + 0x2)));
  /* 11c38a97 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11c38a99 je 0x11c38ac3 */
  if (C.zf) goto L_11c38ac3;
  /* 11c38a9b mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c38a9d add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c38aa0 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c38aa2 jne 0x11c38a68 */
  if (!C.zf) goto L_11c38a68;
  /* 11c38aa4 mov al, byte ptr [ecx + 3] */
  AL = (r8((uint32_t)(ECX + 0x3)));
  /* 11c38aa7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c38aa9 je 0x11c38ac3 */
  if (C.zf) goto L_11c38ac3;
  /* 11c38aab mov ah, byte ptr [esi - 1] */
  AH = (r8((uint32_t)(ESI + -0x1)));
  /* 11c38aae add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c38ab1 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c38ab3 je 0x11c38a94 */
  if (C.zf) goto L_11c38a94;
  /* 11c38ab5 jmp 0x11c38a68 */
  goto L_11c38a68;
L_11c38ab7:;
  /* 11c38ab7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c38ab9 pop esi */
  ESI = (pop32());
  /* 11c38aba pop ebx */
  EBX = (pop32());
  /* 11c38abb pop edi */
  EDI = (pop32());
  /* 11c38abc mov al, dl */
  AL = (DL);
  /* 11c38abe jmp 0x11c38996 */
  jmp_ind(0x11c38996u); return;
L_11c38ac3:;
  /* 11c38ac3 lea eax, [edi - 1] */
  EAX = ((uint32_t)(EDI + -0x1));
  /* 11c38ac6 pop esi */
  ESI = (pop32());
  /* 11c38ac7 pop ebx */
  EBX = (pop32());
  /* 11c38ac8 pop edi */
  EDI = (pop32());
  /* 11c38ac9 ret  */
  ESPCHK(0x11c38a50u, _esp0);
  ESP += 4; return;
L_11c38aca:;
  /* 11c38aca mov eax, edi */
  EAX = (EDI);
  /* 11c38acc pop esi */
  ESI = (pop32());
  /* 11c38acd pop ebx */
  EBX = (pop32());
  /* 11c38ace pop edi */
  EDI = (pop32());
  /* 11c38acf ret  */
  ESPCHK(0x11c38a50u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x11c38ad0 (56 bytes, 31 insns) */
void f_11c38ad0(void) {
  FTRACE(0x11c38ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c38ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 11c38ad1 mov ebp, esp */
  EBP = (ESP);
  /* 11c38ad3 push edi */
  push32((uint32_t)(EDI));
  /* 11c38ad4 push esi */
  push32((uint32_t)(ESI));
  /* 11c38ad5 push ebx */
  push32((uint32_t)(EBX));
  /* 11c38ad6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c38ad9 jecxz 0x11c38b01 */
  x86_unimpl("jecxz @ 0x11c38ad9");
  /* 11c38adb mov ebx, ecx */
  EBX = (ECX);
  /* 11c38add mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c38ae0 mov esi, edi */
  ESI = (EDI);
  /* 11c38ae2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c38ae4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11c38ae6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c38ae8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c38aea mov edi, esi */
  EDI = (ESI);
  /* 11c38aec mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11c38aef repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 11c38af1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 11c38af4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11c38af6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c38af9 ja 0x11c38aff */
  if ((!C.cf&&!C.zf)) goto L_11c38aff;
  /* 11c38afb je 0x11c38b01 */
  if (C.zf) goto L_11c38b01;
  /* 11c38afd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c38afe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_11c38aff:;
  /* 11c38aff not ecx */
  ECX = (~(ECX));
L_11c38b01:;
  /* 11c38b01 mov eax, ecx */
  EAX = (ECX);
  /* 11c38b03 pop ebx */
  EBX = (pop32());
  /* 11c38b04 pop esi */
  ESI = (pop32());
  /* 11c38b05 pop edi */
  EDI = (pop32());
  /* 11c38b06 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c38b07 ret  */
  ESPCHK(0x11c38ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b10 @ 0x11c38b10 (47 bytes, 17 insns) */
void f_11c38b10(void) {
  FTRACE(0x11c38b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c38b10 push ecx */
  push32((uint32_t)(ECX));
  /* 11c38b11 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c38b16 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 11c38b1a jb 0x11c38b30 */
  if (C.cf) goto L_11c38b30;
L_11c38b1c:;
  /* 11c38b1c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c38b22 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c38b27 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11c38b29 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c38b2e jae 0x11c38b1c */
  if (!C.cf) goto L_11c38b1c;
L_11c38b30:;
  /* 11c38b30 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c38b32 mov eax, esp */
  EAX = (ESP);
  /* 11c38b34 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11c38b36 mov esp, ecx */
  ESP = (ECX);
  /* 11c38b38 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11c38b3a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11c38b3d push eax */
  push32((uint32_t)(EAX));
  /* 11c38b3e ret  */
  ESPCHK(0x11c38b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b3f @ 0x11c38b3f (137 bytes, 50 insns) */
void f_11c38b3f(void) {
  FTRACE(0x11c38b3fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c38b3f push ebx */
  push32((uint32_t)(EBX));
  /* 11c38b40 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c38b42 cmp dword ptr [0x11c569b0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11c569b0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c38b48 push esi */
  push32((uint32_t)(ESI));
  /* 11c38b49 push edi */
  push32((uint32_t)(EDI));
  /* 11c38b4a jne 0x11c38b8e */
  if (!C.zf) goto L_11c38b8e;
  /* 11c38b4c push 0x11c3d6ac */
  push32((uint32_t)(0x11c3d6acu));
  /* 11c38b51 call dword ptr [0x11c3d044] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d044))), 0x11c38b57u);
  /* 11c38b57 mov edi, eax */
  EDI = (EAX);
  /* 11c38b59 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c38b5b je 0x11c38bc4 */
  if (C.zf) goto L_11c38bc4;
  /* 11c38b5d mov esi, dword ptr [0x11c3d0d8] */
  ESI = (r32((uint32_t)(0x11c3d0d8)));
  /* 11c38b63 push 0x11c3d6a0 */
  push32((uint32_t)(0x11c3d6a0u));
  /* 11c38b68 push edi */
  push32((uint32_t)(EDI));
  /* 11c38b69 call esi */
  call_ind((uint32_t)(ESI), 0x11c38b6bu);
  /* 11c38b6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c38b6d mov dword ptr [0x11c569b0], eax */
  w32((uint32_t)(0x11c569b0), (EAX));
  /* 11c38b72 je 0x11c38bc4 */
  if (C.zf) goto L_11c38bc4;
  /* 11c38b74 push 0x11c3d690 */
  push32((uint32_t)(0x11c3d690u));
  /* 11c38b79 push edi */
  push32((uint32_t)(EDI));
  /* 11c38b7a call esi */
  call_ind((uint32_t)(ESI), 0x11c38b7cu);
  /* 11c38b7c push 0x11c3d67c */
  push32((uint32_t)(0x11c3d67cu));
  /* 11c38b81 push edi */
  push32((uint32_t)(EDI));
  /* 11c38b82 mov dword ptr [0x11c569b4], eax */
  w32((uint32_t)(0x11c569b4), (EAX));
  /* 11c38b87 call esi */
  call_ind((uint32_t)(ESI), 0x11c38b89u);
  /* 11c38b89 mov dword ptr [0x11c569b8], eax */
  w32((uint32_t)(0x11c569b8), (EAX));
L_11c38b8e:;
  /* 11c38b8e mov eax, dword ptr [0x11c569b4] */
  EAX = (r32((uint32_t)(0x11c569b4)));
  /* 11c38b93 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c38b95 je 0x11c38bad */
  if (C.zf) goto L_11c38bad;
  /* 11c38b97 call eax */
  call_ind((uint32_t)(EAX), 0x11c38b99u);
  /* 11c38b99 mov ebx, eax */
  EBX = (EAX);
  /* 11c38b9b test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11c38b9d je 0x11c38bad */
  if (C.zf) goto L_11c38bad;
  /* 11c38b9f mov eax, dword ptr [0x11c569b8] */
  EAX = (r32((uint32_t)(0x11c569b8)));
  /* 11c38ba4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c38ba6 je 0x11c38bad */
  if (C.zf) goto L_11c38bad;
  /* 11c38ba8 push ebx */
  push32((uint32_t)(EBX));
  /* 11c38ba9 call eax */
  call_ind((uint32_t)(EAX), 0x11c38babu);
  /* 11c38bab mov ebx, eax */
  EBX = (EAX);
L_11c38bad:;
  /* 11c38bad push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11c38bb1 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11c38bb5 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11c38bb9 push ebx */
  push32((uint32_t)(EBX));
  /* 11c38bba call dword ptr [0x11c569b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c569b0))), 0x11c38bc0u);
L_11c38bc0:;
  /* 11c38bc0 pop edi */
  EDI = (pop32());
  /* 11c38bc1 pop esi */
  ESI = (pop32());
  /* 11c38bc2 pop ebx */
  EBX = (pop32());
  /* 11c38bc3 ret  */
  ESPCHK(0x11c38b3fu, _esp0);
  ESP += 4; return;
L_11c38bc4:;
  /* 11c38bc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c38bc6 jmp 0x11c38bc0 */
  goto L_11c38bc0;
}

/* _strncpy @ 0x11c38bd0 (254 bytes, 109 insns) */
void f_11c38bd0(void) {
  FTRACE(0x11c38bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c38bd0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11c38bd4 push edi */
  push32((uint32_t)(EDI));
  /* 11c38bd5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11c38bd7 je 0x11c38c53 */
  if (C.zf) goto L_11c38c53;
  /* 11c38bd9 push esi */
  push32((uint32_t)(ESI));
  /* 11c38bda push ebx */
  push32((uint32_t)(EBX));
  /* 11c38bdb mov ebx, ecx */
  EBX = (ECX);
  /* 11c38bdd mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11c38be1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11c38be7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11c38beb jne 0x11c38bf4 */
  if (!C.zf) goto L_11c38bf4;
  /* 11c38bed shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c38bf0 jne 0x11c38c61 */
  if (!C.zf) goto L_11c38c61;
  /* 11c38bf2 jmp 0x11c38c15 */
  goto L_11c38c15;
L_11c38bf4:;
  /* 11c38bf4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c38bf6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c38bf7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c38bf9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c38bfa dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c38bfb je 0x11c38c22 */
  if (C.zf) goto L_11c38c22;
  /* 11c38bfd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c38bff je 0x11c38c2a */
  if (C.zf) goto L_11c38c2a;
  /* 11c38c01 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11c38c07 jne 0x11c38bf4 */
  if (!C.zf) goto L_11c38bf4;
  /* 11c38c09 mov ebx, ecx */
  EBX = (ECX);
  /* 11c38c0b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c38c0e jne 0x11c38c61 */
  if (!C.zf) goto L_11c38c61;
L_11c38c10:;
  /* 11c38c10 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11c38c13 je 0x11c38c22 */
  if (C.zf) goto L_11c38c22;
L_11c38c15:;
  /* 11c38c15 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c38c17 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c38c18 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c38c1a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c38c1b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c38c1d je 0x11c38c4e */
  if (C.zf) goto L_11c38c4e;
  /* 11c38c1f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11c38c20 jne 0x11c38c15 */
  if (!C.zf) goto L_11c38c15;
L_11c38c22:;
  /* 11c38c22 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11c38c26 pop ebx */
  EBX = (pop32());
  /* 11c38c27 pop esi */
  ESI = (pop32());
  /* 11c38c28 pop edi */
  EDI = (pop32());
  /* 11c38c29 ret  */
  ESPCHK(0x11c38bd0u, _esp0);
  ESP += 4; return;
L_11c38c2a:;
  /* 11c38c2a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11c38c30 je 0x11c38c44 */
  if (C.zf) goto L_11c38c44;
L_11c38c32:;
  /* 11c38c32 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c38c34 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c38c35 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c38c36 je 0x11c38cc6 */
  if (C.zf) goto L_11c38cc6;
  /* 11c38c3c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11c38c42 jne 0x11c38c32 */
  if (!C.zf) goto L_11c38c32;
L_11c38c44:;
  /* 11c38c44 mov ebx, ecx */
  EBX = (ECX);
  /* 11c38c46 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11c38c49 jne 0x11c38cb7 */
  if (!C.zf) goto L_11c38cb7;
L_11c38c4b:;
  /* 11c38c4b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c38c4d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11c38c4e:;
  /* 11c38c4e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11c38c4f jne 0x11c38c4b */
  if (!C.zf) goto L_11c38c4b;
  /* 11c38c51 pop ebx */
  EBX = (pop32());
  /* 11c38c52 pop esi */
  ESI = (pop32());
L_11c38c53:;
  /* 11c38c53 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c38c57 pop edi */
  EDI = (pop32());
  /* 11c38c58 ret  */
  ESPCHK(0x11c38bd0u, _esp0);
  ESP += 4; return;
L_11c38c59:;
  /* 11c38c59 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11c38c5b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c38c5e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c38c5f je 0x11c38c10 */
  if (C.zf) goto L_11c38c10;
L_11c38c61:;
  /* 11c38c61 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11c38c66 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c38c68 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c38c6a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c38c6d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11c38c6f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11c38c71 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c38c74 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11c38c79 je 0x11c38c59 */
  if (C.zf) goto L_11c38c59;
  /* 11c38c7b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11c38c7d je 0x11c38cab */
  if (C.zf) goto L_11c38cab;
  /* 11c38c7f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11c38c81 je 0x11c38ca1 */
  if (C.zf) goto L_11c38ca1;
  /* 11c38c83 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11c38c89 je 0x11c38c97 */
  if (C.zf) goto L_11c38c97;
  /* 11c38c8b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11c38c91 jne 0x11c38c59 */
  if (!C.zf) goto L_11c38c59;
  /* 11c38c93 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11c38c95 jmp 0x11c38caf */
  goto L_11c38caf;
L_11c38c97:;
  /* 11c38c97 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11c38c9d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11c38c9f jmp 0x11c38caf */
  goto L_11c38caf;
L_11c38ca1:;
  /* 11c38ca1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11c38ca7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11c38ca9 jmp 0x11c38caf */
  goto L_11c38caf;
L_11c38cab:;
  /* 11c38cab xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11c38cad mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_11c38caf:;
  /* 11c38caf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c38cb2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c38cb4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c38cb5 je 0x11c38cc1 */
  if (C.zf) goto L_11c38cc1;
L_11c38cb7:;
  /* 11c38cb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c38cb9:;
  /* 11c38cb9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11c38cbb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c38cbe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c38cbf jne 0x11c38cb9 */
  if (!C.zf) goto L_11c38cb9;
L_11c38cc1:;
  /* 11c38cc1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11c38cc4 jne 0x11c38c4b */
  if (!C.zf) goto L_11c38c4b;
L_11c38cc6:;
  /* 11c38cc6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11c38cca pop ebx */
  EBX = (pop32());
  /* 11c38ccb pop esi */
  ESI = (pop32());
  /* 11c38ccc pop edi */
  EDI = (pop32());
  /* 11c38ccd ret  */
  ESPCHK(0x11c38bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008cce @ 0x11c38cce (386 bytes, 138 insns) */
void f_11c38cce(void) {
  FTRACE(0x11c38cceu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c38cce push ebp */
  push32((uint32_t)(EBP));
  /* 11c38ccf mov ebp, esp */
  EBP = (ESP);
  /* 11c38cd1 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c38cd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c38cd7 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c38cdb dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c38cdc push ebx */
  push32((uint32_t)(EBX));
  /* 11c38cdd push esi */
  push32((uint32_t)(ESI));
  /* 11c38cde dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c38cdf push edi */
  push32((uint32_t)(EDI));
  /* 11c38ce0 je 0x11c38d49 */
  if (C.zf) goto L_11c38d49;
  /* 11c38ce2 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c38ce3 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c38ce4 je 0x11c38d2c */
  if (C.zf) goto L_11c38d2c;
  /* 11c38ce6 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c38ce9 je 0x11c38d2c */
  if (C.zf) goto L_11c38d2c;
  /* 11c38ceb sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c38cee je 0x11c38d2c */
  if (C.zf) goto L_11c38d2c;
  /* 11c38cf0 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c38cf3 je 0x11c38d1f */
  if (C.zf) goto L_11c38d1f;
  /* 11c38cf5 sub eax, 6 */
  { uint32_t _a=(EAX),_b=(0x6u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c38cf8 je 0x11c38d12 */
  if (C.zf) goto L_11c38d12;
  /* 11c38cfa dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c38cfb je 0x11c38d05 */
  if (C.zf) goto L_11c38d05;
  /* 11c38cfd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c38d00 jmp 0x11c38e4b */
  goto L_11c38e4b;
L_11c38d05:;
  /* 11c38d05 mov ebx, dword ptr [0x11c569c4] */
  EBX = (r32((uint32_t)(0x11c569c4)));
  /* 11c38d0b mov edi, 0x11c569c4 */
  EDI = (0x11c569c4u);
  /* 11c38d10 jmp 0x11c38d54 */
  goto L_11c38d54;
L_11c38d12:;
  /* 11c38d12 mov ebx, dword ptr [0x11c569c0] */
  EBX = (r32((uint32_t)(0x11c569c0)));
  /* 11c38d18 mov edi, 0x11c569c0 */
  EDI = (0x11c569c0u);
  /* 11c38d1d jmp 0x11c38d54 */
  goto L_11c38d54;
L_11c38d1f:;
  /* 11c38d1f mov ebx, dword ptr [0x11c569c8] */
  EBX = (r32((uint32_t)(0x11c569c8)));
  /* 11c38d25 mov edi, 0x11c569c8 */
  EDI = (0x11c569c8u);
  /* 11c38d2a jmp 0x11c38d54 */
  goto L_11c38d54;
L_11c38d2c:;
  /* 11c38d2c call 0x11c33dee */
  push32(0x11c38d31u); f_11c33dee();
  /* 11c38d31 mov esi, eax */
  ESI = (EAX);
  /* 11c38d33 push dword ptr [esi + 0x50] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x50))));
  /* 11c38d36 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c38d39 call 0x11c38e50 */
  push32(0x11c38d3eu); f_11c38e50();
  /* 11c38d3e mov edi, eax */
  EDI = (EAX);
  /* 11c38d40 pop ecx */
  ECX = (pop32());
  /* 11c38d41 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c38d44 pop ecx */
  ECX = (pop32());
  /* 11c38d45 mov ebx, dword ptr [edi] */
  EBX = (r32((uint32_t)(EDI)));
  /* 11c38d47 jmp 0x11c38d66 */
  goto L_11c38d66;
L_11c38d49:;
  /* 11c38d49 mov ebx, dword ptr [0x11c569bc] */
  EBX = (r32((uint32_t)(0x11c569bc)));
  /* 11c38d4f mov edi, 0x11c569bc */
  EDI = (0x11c569bcu);
L_11c38d54:;
  /* 11c38d54 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c38d56 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11c38d5d call 0x11c35ff6 */
  push32(0x11c38d62u); f_11c35ff6();
  /* 11c38d62 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c38d65 pop ecx */
  ECX = (pop32());
L_11c38d66:;
  /* 11c38d66 cmp ebx, 1 */
  { uint32_t _a=(EBX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c38d69 jne 0x11c38d81 */
  if (!C.zf) goto L_11c38d81;
  /* 11c38d6b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c38d6f je 0x11c38e49 */
  if (C.zf) goto L_11c38e49;
  /* 11c38d75 push ebx */
  push32((uint32_t)(EBX));
  /* 11c38d76 call 0x11c36057 */
  push32(0x11c38d7bu); f_11c36057();
  /* 11c38d7b pop ecx */
  ECX = (pop32());
  /* 11c38d7c jmp 0x11c38e49 */
  goto L_11c38e49;
L_11c38d81:;
  /* 11c38d81 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11c38d83 cmp ebx, ecx */
  { uint32_t _a=(EBX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c38d85 jne 0x11c38d9b */
  if (!C.zf) goto L_11c38d9b;
  /* 11c38d87 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c38d8a je 0x11c38d94 */
  if (C.zf) goto L_11c38d94;
  /* 11c38d8c push 1 */
  push32((uint32_t)(0x1u));
  /* 11c38d8e call 0x11c36057 */
  push32(0x11c38d93u); f_11c36057();
  /* 11c38d93 pop ecx */
  ECX = (pop32());
L_11c38d94:;
  /* 11c38d94 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c38d96 call 0x11c33fe4 */
  push32(0x11c38d9bu); f_11c33fe4();
L_11c38d9b:;
  /* 11c38d9b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c38d9e cmp eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c38da1 je 0x11c38dad */
  if (C.zf) goto L_11c38dad;
  /* 11c38da3 cmp eax, 0xb */
  { uint32_t _a=(EAX),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c38da6 je 0x11c38dad */
  if (C.zf) goto L_11c38dad;
  /* 11c38da8 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c38dab jne 0x11c38dc8 */
  if (!C.zf) goto L_11c38dc8;
L_11c38dad:;
  /* 11c38dad mov edx, dword ptr [esi + 0x54] */
  EDX = (r32((uint32_t)(ESI + 0x54)));
  /* 11c38db0 cmp eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c38db3 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11c38db6 mov dword ptr [esi + 0x54], ecx */
  w32((uint32_t)(ESI + 0x54), (ECX));
  /* 11c38db9 jne 0x11c38e04 */
  if (!C.zf) goto L_11c38e04;
  /* 11c38dbb mov edx, dword ptr [esi + 0x58] */
  EDX = (r32((uint32_t)(ESI + 0x58)));
  /* 11c38dbe mov dword ptr [esi + 0x58], 0x8c */
  w32((uint32_t)(ESI + 0x58), (0x8cu));
  /* 11c38dc5 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11c38dc8:;
  /* 11c38dc8 cmp eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c38dcb jne 0x11c38e04 */
  if (!C.zf) goto L_11c38e04;
  /* 11c38dcd mov ecx, dword ptr [0x11c3fa78] */
  ECX = (r32((uint32_t)(0x11c3fa78)));
  /* 11c38dd3 mov eax, dword ptr [0x11c3fa7c] */
  EAX = (r32((uint32_t)(0x11c3fa7c)));
  /* 11c38dd8 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c38dda cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c38ddc jge 0x11c38e06 */
  if ((C.sf==C.of)) goto L_11c38e06;
  /* 11c38dde lea eax, [ecx + ecx*2] */
  EAX = ((uint32_t)(ECX + ECX*2));
  /* 11c38de1 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
L_11c38de4:;
  /* 11c38de4 mov edx, dword ptr [esi + 0x50] */
  EDX = (r32((uint32_t)(ESI + 0x50)));
  /* 11c38de7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c38dea and dword ptr [edx + eax - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EDX + EAX*1 + -0x4)))&(0x0u); w32((uint32_t)(EDX + EAX*1 + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c38def mov edx, dword ptr [0x11c3fa78] */
  EDX = (r32((uint32_t)(0x11c3fa78)));
  /* 11c38df5 mov edi, dword ptr [0x11c3fa7c] */
  EDI = (r32((uint32_t)(0x11c3fa7c)));
  /* 11c38dfb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c38dfc add edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c38dfe cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c38e00 jl 0x11c38de4 */
  if ((C.sf!=C.of)) goto L_11c38de4;
  /* 11c38e02 jmp 0x11c38e06 */
  goto L_11c38e06;
L_11c38e04:;
  /* 11c38e04 mov dword ptr [edi], ecx */
  w32((uint32_t)(EDI), (ECX));
L_11c38e06:;
  /* 11c38e06 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c38e0a je 0x11c38e14 */
  if (C.zf) goto L_11c38e14;
  /* 11c38e0c push 1 */
  push32((uint32_t)(0x1u));
  /* 11c38e0e call 0x11c36057 */
  push32(0x11c38e13u); f_11c36057();
  /* 11c38e13 pop ecx */
  ECX = (pop32());
L_11c38e14:;
  /* 11c38e14 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c38e18 jne 0x11c38e25 */
  if (!C.zf) goto L_11c38e25;
  /* 11c38e1a push dword ptr [esi + 0x58] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x58))));
  /* 11c38e1d push 8 */
  push32((uint32_t)(0x8u));
  /* 11c38e1f call ebx */
  call_ind((uint32_t)(EBX), 0x11c38e21u);
  /* 11c38e21 pop ecx */
  ECX = (pop32());
  /* 11c38e22 pop ecx */
  ECX = (pop32());
  /* 11c38e23 jmp 0x11c38e37 */
  goto L_11c38e37;
L_11c38e25:;
  /* 11c38e25 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c38e28 call ebx */
  call_ind((uint32_t)(EBX), 0x11c38e2au);
  /* 11c38e2a cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c38e2e pop ecx */
  ECX = (pop32());
  /* 11c38e2f je 0x11c38e37 */
  if (C.zf) goto L_11c38e37;
  /* 11c38e31 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c38e35 jne 0x11c38e49 */
  if (!C.zf) goto L_11c38e49;
L_11c38e37:;
  /* 11c38e37 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11c38e3a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c38e3e mov dword ptr [esi + 0x54], eax */
  w32((uint32_t)(ESI + 0x54), (EAX));
  /* 11c38e41 jne 0x11c38e49 */
  if (!C.zf) goto L_11c38e49;
  /* 11c38e43 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11c38e46 mov dword ptr [esi + 0x58], eax */
  w32((uint32_t)(ESI + 0x58), (EAX));
L_11c38e49:;
  /* 11c38e49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c38e4b:;
  /* 11c38e4b pop edi */
  EDI = (pop32());
  /* 11c38e4c pop esi */
  ESI = (pop32());
  /* 11c38e4d pop ebx */
  EBX = (pop32());
  /* 11c38e4e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c38e4f ret  */
  ESPCHK(0x11c38cceu, _esp0);
  ESP += 4; return;
}

/* FUN_10008e50 @ 0x11c38e50 (61 bytes, 25 insns) */
void f_11c38e50(void) {
  FTRACE(0x11c38e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c38e50 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c38e54 mov ecx, dword ptr [0x11c3fa84] */
  ECX = (r32((uint32_t)(0x11c3fa84)));
  /* 11c38e5a push esi */
  push32((uint32_t)(ESI));
  /* 11c38e5b mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c38e5f cmp dword ptr [edx + 4], esi */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c38e62 push edi */
  push32((uint32_t)(EDI));
  /* 11c38e63 mov eax, edx */
  EAX = (EDX);
  /* 11c38e65 je 0x11c38e79 */
  if (C.zf) goto L_11c38e79;
  /* 11c38e67 lea edi, [ecx + ecx*2] */
  EDI = ((uint32_t)(ECX + ECX*2));
  /* 11c38e6a lea edi, [edx + edi*4] */
  EDI = ((uint32_t)(EDX + EDI*4));
L_11c38e6d:;
  /* 11c38e6d add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c38e70 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c38e72 jae 0x11c38e79 */
  if (!C.cf) goto L_11c38e79;
  /* 11c38e74 cmp dword ptr [eax + 4], esi */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c38e77 jne 0x11c38e6d */
  if (!C.zf) goto L_11c38e6d;
L_11c38e79:;
  /* 11c38e79 lea ecx, [ecx + ecx*2] */
  ECX = ((uint32_t)(ECX + ECX*2));
  /* 11c38e7c lea ecx, [edx + ecx*4] */
  ECX = ((uint32_t)(EDX + ECX*4));
  /* 11c38e7f cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c38e81 jae 0x11c38e88 */
  if (!C.cf) goto L_11c38e88;
  /* 11c38e83 cmp dword ptr [eax + 4], esi */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c38e86 je 0x11c38e8a */
  if (C.zf) goto L_11c38e8a;
L_11c38e88:;
  /* 11c38e88 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c38e8a:;
  /* 11c38e8a pop edi */
  EDI = (pop32());
  /* 11c38e8b pop esi */
  ESI = (pop32());
  /* 11c38e8c ret  */
  ESPCHK(0x11c38e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e8d @ 0x11c38e8d (318 bytes, 123 insns) */
void f_11c38e8d(void) {
  FTRACE(0x11c38e8du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c38e8d push ebp */
  push32((uint32_t)(EBP));
  /* 11c38e8e mov ebp, esp */
  EBP = (ESP);
  /* 11c38e90 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11c38e92 push 0x11c3d6c0 */
  push32((uint32_t)(0x11c3d6c0u));
  /* 11c38e97 push 0x11c37d80 */
  push32((uint32_t)(0x11c37d80u));
  /* 11c38e9c mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11c38ea2 push eax */
  push32((uint32_t)(EAX));
  /* 11c38ea3 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11c38eaa sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c38ead push ebx */
  push32((uint32_t)(EBX));
  /* 11c38eae push esi */
  push32((uint32_t)(ESI));
  /* 11c38eaf push edi */
  push32((uint32_t)(EDI));
  /* 11c38eb0 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11c38eb3 mov eax, dword ptr [0x11c569d0] */
  EAX = (r32((uint32_t)(0x11c569d0)));
  /* 11c38eb8 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c38eba cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c38ebc jne 0x11c38efc */
  if (!C.zf) goto L_11c38efc;
  /* 11c38ebe lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11c38ec1 push eax */
  push32((uint32_t)(EAX));
  /* 11c38ec2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c38ec4 pop esi */
  ESI = (pop32());
  /* 11c38ec5 push esi */
  push32((uint32_t)(ESI));
  /* 11c38ec6 push 0x11c3d6bc */
  push32((uint32_t)(0x11c3d6bcu));
  /* 11c38ecb push esi */
  push32((uint32_t)(ESI));
  /* 11c38ecc call dword ptr [0x11c3d038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d038))), 0x11c38ed2u);
  /* 11c38ed2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c38ed4 je 0x11c38eda */
  if (C.zf) goto L_11c38eda;
  /* 11c38ed6 mov eax, esi */
  EAX = (ESI);
  /* 11c38ed8 jmp 0x11c38ef7 */
  goto L_11c38ef7;
L_11c38eda:;
  /* 11c38eda lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11c38edd push eax */
  push32((uint32_t)(EAX));
  /* 11c38ede push esi */
  push32((uint32_t)(ESI));
  /* 11c38edf push 0x11c3d6b8 */
  push32((uint32_t)(0x11c3d6b8u));
  /* 11c38ee4 push esi */
  push32((uint32_t)(ESI));
  /* 11c38ee5 push ebx */
  push32((uint32_t)(EBX));
  /* 11c38ee6 call dword ptr [0x11c3d03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d03c))), 0x11c38eecu);
  /* 11c38eec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c38eee je 0x11c38fc2 */
  if (C.zf) goto L_11c38fc2;
  /* 11c38ef4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c38ef6 pop eax */
  EAX = (pop32());
L_11c38ef7:;
  /* 11c38ef7 mov dword ptr [0x11c569d0], eax */
  w32((uint32_t)(0x11c569d0), (EAX));
L_11c38efc:;
  /* 11c38efc cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c38eff jne 0x11c38f25 */
  if (!C.zf) goto L_11c38f25;
  /* 11c38f01 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11c38f04 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c38f06 jne 0x11c38f0d */
  if (!C.zf) goto L_11c38f0d;
  /* 11c38f08 mov eax, dword ptr [0x11c569e8] */
  EAX = (r32((uint32_t)(0x11c569e8)));
L_11c38f0d:;
  /* 11c38f0d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11c38f10 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c38f13 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c38f16 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c38f19 push eax */
  push32((uint32_t)(EAX));
  /* 11c38f1a call dword ptr [0x11c3d03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d03c))), 0x11c38f20u);
  /* 11c38f20 jmp 0x11c38fc4 */
  goto L_11c38fc4;
L_11c38f25:;
  /* 11c38f25 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c38f28 jne 0x11c38fc2 */
  if (!C.zf) goto L_11c38fc2;
  /* 11c38f2e cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c38f31 jne 0x11c38f3b */
  if (!C.zf) goto L_11c38f3b;
  /* 11c38f33 mov eax, dword ptr [0x11c569f8] */
  EAX = (r32((uint32_t)(0x11c569f8)));
  /* 11c38f38 mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11c38f3b:;
  /* 11c38f3b push ebx */
  push32((uint32_t)(EBX));
  /* 11c38f3c push ebx */
  push32((uint32_t)(EBX));
  /* 11c38f3d push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c38f40 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c38f43 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11c38f46 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c38f48 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c38f4a and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11c38f4d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c38f4e push eax */
  push32((uint32_t)(EAX));
  /* 11c38f4f push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11c38f52 call dword ptr [0x11c3d040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d040))), 0x11c38f58u);
  /* 11c38f58 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11c38f5b cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c38f5d je 0x11c38fc2 */
  if (C.zf) goto L_11c38fc2;
  /* 11c38f5f mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11c38f62 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 11c38f65 mov eax, edi */
  EAX = (EDI);
  /* 11c38f67 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c38f6a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11c38f6c call 0x11c38b10 */
  push32(0x11c38f71u); f_11c38b10();
  /* 11c38f71 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11c38f74 mov esi, esp */
  ESI = (ESP);
  /* 11c38f76 mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 11c38f79 push edi */
  push32((uint32_t)(EDI));
  /* 11c38f7a push ebx */
  push32((uint32_t)(EBX));
  /* 11c38f7b push esi */
  push32((uint32_t)(ESI));
  /* 11c38f7c call 0x11c35a00 */
  push32(0x11c38f81u); f_11c35a00();
  /* 11c38f81 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c38f84 jmp 0x11c38f91 */
  goto L_11c38f91;
  /* 11c38f86 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c38f88 pop eax */
  EAX = (pop32());
  /* 11c38f89 ret  */
  ESPCHK(0x11c38e8du, _esp0);
  ESP += 4; return;
  /* 11c38f8a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11c38f8d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c38f8f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11c38f91:;
  /* 11c38f91 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c38f95 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c38f97 je 0x11c38fc2 */
  if (C.zf) goto L_11c38fc2;
  /* 11c38f99 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11c38f9c push esi */
  push32((uint32_t)(ESI));
  /* 11c38f9d push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c38fa0 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c38fa3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c38fa5 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11c38fa8 call dword ptr [0x11c3d040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d040))), 0x11c38faeu);
  /* 11c38fae cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c38fb0 je 0x11c38fc2 */
  if (C.zf) goto L_11c38fc2;
  /* 11c38fb2 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11c38fb5 push eax */
  push32((uint32_t)(EAX));
  /* 11c38fb6 push esi */
  push32((uint32_t)(ESI));
  /* 11c38fb7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c38fba call dword ptr [0x11c3d038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d038))), 0x11c38fc0u);
  /* 11c38fc0 jmp 0x11c38fc4 */
  goto L_11c38fc4;
L_11c38fc2:;
  /* 11c38fc2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c38fc4:;
  /* 11c38fc4 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11c38fc7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11c38fca mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11c38fd1 pop edi */
  EDI = (pop32());
  /* 11c38fd2 pop esi */
  ESI = (pop32());
  /* 11c38fd3 pop ebx */
  EBX = (pop32());
  /* 11c38fd4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c38fd5 ret  */
  ESPCHK(0x11c38e8du, _esp0);
  ESP += 4; return;
}

/* FUN_10008fd6 @ 0x11c38fd6 (511 bytes, 193 insns) */
void f_11c38fd6(void) {
  FTRACE(0x11c38fd6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c38fd6 push ebp */
  push32((uint32_t)(EBP));
  /* 11c38fd7 mov ebp, esp */
  EBP = (ESP);
  /* 11c38fd9 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11c38fdb push 0x11c3d6d0 */
  push32((uint32_t)(0x11c3d6d0u));
  /* 11c38fe0 push 0x11c37d80 */
  push32((uint32_t)(0x11c37d80u));
  /* 11c38fe5 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11c38feb push eax */
  push32((uint32_t)(EAX));
  /* 11c38fec mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11c38ff3 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c38ff6 push ebx */
  push32((uint32_t)(EBX));
  /* 11c38ff7 push esi */
  push32((uint32_t)(ESI));
  /* 11c38ff8 push edi */
  push32((uint32_t)(EDI));
  /* 11c38ff9 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11c38ffc xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11c38ffe cmp dword ptr [0x11c56a00], edi */
  { uint32_t _a=(r32((uint32_t)(0x11c56a00))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c39004 jne 0x11c3904c */
  if (!C.zf) goto L_11c3904c;
  /* 11c39006 push edi */
  push32((uint32_t)(EDI));
  /* 11c39007 push edi */
  push32((uint32_t)(EDI));
  /* 11c39008 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3900a pop ebx */
  EBX = (pop32());
  /* 11c3900b push ebx */
  push32((uint32_t)(EBX));
  /* 11c3900c push 0x11c3d6bc */
  push32((uint32_t)(0x11c3d6bcu));
  /* 11c39011 mov esi, 0x100 */
  ESI = (0x100u);
  /* 11c39016 push esi */
  push32((uint32_t)(ESI));
  /* 11c39017 push edi */
  push32((uint32_t)(EDI));
  /* 11c39018 call dword ptr [0x11c3d030] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d030))), 0x11c3901eu);
  /* 11c3901e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c39020 je 0x11c3902a */
  if (C.zf) goto L_11c3902a;
  /* 11c39022 mov dword ptr [0x11c56a00], ebx */
  w32((uint32_t)(0x11c56a00), (EBX));
  /* 11c39028 jmp 0x11c3904c */
  goto L_11c3904c;
L_11c3902a:;
  /* 11c3902a push edi */
  push32((uint32_t)(EDI));
  /* 11c3902b push edi */
  push32((uint32_t)(EDI));
  /* 11c3902c push ebx */
  push32((uint32_t)(EBX));
  /* 11c3902d push 0x11c3d6b8 */
  push32((uint32_t)(0x11c3d6b8u));
  /* 11c39032 push esi */
  push32((uint32_t)(ESI));
  /* 11c39033 push edi */
  push32((uint32_t)(EDI));
  /* 11c39034 call dword ptr [0x11c3d034] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d034))), 0x11c3903au);
  /* 11c3903a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3903c je 0x11c39164 */
  if (C.zf) goto L_11c39164;
  /* 11c39042 mov dword ptr [0x11c56a00], 2 */
  w32((uint32_t)(0x11c56a00), (0x2u));
L_11c3904c:;
  /* 11c3904c cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3904f jle 0x11c39061 */
  if ((C.zf||C.sf!=C.of)) goto L_11c39061;
  /* 11c39051 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11c39054 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c39057 call 0x11c3aabe */
  push32(0x11c3905cu); f_11c3aabe();
  /* 11c3905c pop ecx */
  ECX = (pop32());
  /* 11c3905d pop ecx */
  ECX = (pop32());
  /* 11c3905e mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11c39061:;
  /* 11c39061 mov eax, dword ptr [0x11c56a00] */
  EAX = (r32((uint32_t)(0x11c56a00)));
  /* 11c39066 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c39069 jne 0x11c39088 */
  if (!C.zf) goto L_11c39088;
  /* 11c3906b push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11c3906e push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11c39071 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11c39074 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c39077 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c3907a push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c3907d call dword ptr [0x11c3d034] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d034))), 0x11c39083u);
  /* 11c39083 jmp 0x11c39166 */
  goto L_11c39166;
L_11c39088:;
  /* 11c39088 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3908b jne 0x11c39164 */
  if (!C.zf) goto L_11c39164;
  /* 11c39091 cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c39094 jne 0x11c3909e */
  if (!C.zf) goto L_11c3909e;
  /* 11c39096 mov eax, dword ptr [0x11c569f8] */
  EAX = (r32((uint32_t)(0x11c569f8)));
  /* 11c3909b mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_11c3909e:;
  /* 11c3909e push edi */
  push32((uint32_t)(EDI));
  /* 11c3909f push edi */
  push32((uint32_t)(EDI));
  /* 11c390a0 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11c390a3 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c390a6 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11c390a9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c390ab sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c390ad and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11c390b0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c390b1 push eax */
  push32((uint32_t)(EAX));
  /* 11c390b2 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11c390b5 call dword ptr [0x11c3d040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d040))), 0x11c390bbu);
  /* 11c390bb mov ebx, eax */
  EBX = (EAX);
  /* 11c390bd mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 11c390c0 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c390c2 je 0x11c39164 */
  if (C.zf) goto L_11c39164;
  /* 11c390c8 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11c390cb lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 11c390ce add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c390d1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11c390d3 call 0x11c38b10 */
  push32(0x11c390d8u); f_11c38b10();
  /* 11c390d8 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11c390db mov eax, esp */
  EAX = (ESP);
  /* 11c390dd mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11c390e0 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c390e4 jmp 0x11c390f9 */
  goto L_11c390f9;
  /* 11c390e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c390e8 pop eax */
  EAX = (pop32());
  /* 11c390e9 ret  */
  ESPCHK(0x11c38fd6u, _esp0);
  ESP += 4; return;
  /* 11c390ea mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11c390ed xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11c390ef mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 11c390f2 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c390f6 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_11c390f9:;
  /* 11c390f9 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c390fc je 0x11c39164 */
  if (C.zf) goto L_11c39164;
  /* 11c390fe push ebx */
  push32((uint32_t)(EBX));
  /* 11c390ff push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11c39102 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11c39105 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c39108 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3910a push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11c3910d call dword ptr [0x11c3d040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d040))), 0x11c39113u);
  /* 11c39113 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c39115 je 0x11c39164 */
  if (C.zf) goto L_11c39164;
  /* 11c39117 push edi */
  push32((uint32_t)(EDI));
  /* 11c39118 push edi */
  push32((uint32_t)(EDI));
  /* 11c39119 push ebx */
  push32((uint32_t)(EBX));
  /* 11c3911a push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11c3911d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c39120 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c39123 call dword ptr [0x11c3d030] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d030))), 0x11c39129u);
  /* 11c39129 mov esi, eax */
  ESI = (EAX);
  /* 11c3912b mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 11c3912e cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c39130 je 0x11c39164 */
  if (C.zf) goto L_11c39164;
  /* 11c39132 test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 11c39136 je 0x11c39178 */
  if (C.zf) goto L_11c39178;
  /* 11c39138 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3913b je 0x11c391f3 */
  if (C.zf) goto L_11c391f3;
  /* 11c39141 cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c39144 jg 0x11c39164 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c39164;
  /* 11c39146 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11c39149 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11c3914c push ebx */
  push32((uint32_t)(EBX));
  /* 11c3914d push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11c39150 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c39153 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c39156 call dword ptr [0x11c3d030] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d030))), 0x11c3915cu);
  /* 11c3915c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3915e jne 0x11c391f3 */
  if (!C.zf) goto L_11c391f3;
L_11c39164:;
  /* 11c39164 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c39166:;
  /* 11c39166 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 11c39169 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11c3916c mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11c39173 pop edi */
  EDI = (pop32());
  /* 11c39174 pop esi */
  ESI = (pop32());
  /* 11c39175 pop ebx */
  EBX = (pop32());
  /* 11c39176 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c39177 ret  */
  ESPCHK(0x11c38fd6u, _esp0);
  ESP += 4; return;
L_11c39178:;
  /* 11c39178 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11c3917f lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 11c39182 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c39185 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11c39187 call 0x11c38b10 */
  push32(0x11c3918cu); f_11c38b10();
  /* 11c3918c mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11c3918f mov ebx, esp */
  EBX = (ESP);
  /* 11c39191 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 11c39194 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c39198 jmp 0x11c391ac */
  goto L_11c391ac;
  /* 11c3919a push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3919c pop eax */
  EAX = (pop32());
  /* 11c3919d ret  */
  ESPCHK(0x11c38fd6u, _esp0);
  ESP += 4; return;
  /* 11c3919e mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11c391a1 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11c391a3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c391a5 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c391a9 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_11c391ac:;
  /* 11c391ac cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c391ae je 0x11c39164 */
  if (C.zf) goto L_11c39164;
  /* 11c391b0 push esi */
  push32((uint32_t)(ESI));
  /* 11c391b1 push ebx */
  push32((uint32_t)(EBX));
  /* 11c391b2 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11c391b5 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11c391b8 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c391bb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c391be call dword ptr [0x11c3d030] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d030))), 0x11c391c4u);
  /* 11c391c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c391c6 je 0x11c39164 */
  if (C.zf) goto L_11c39164;
  /* 11c391c8 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c391cb push edi */
  push32((uint32_t)(EDI));
  /* 11c391cc push edi */
  push32((uint32_t)(EDI));
  /* 11c391cd jne 0x11c391d3 */
  if (!C.zf) goto L_11c391d3;
  /* 11c391cf push edi */
  push32((uint32_t)(EDI));
  /* 11c391d0 push edi */
  push32((uint32_t)(EDI));
  /* 11c391d1 jmp 0x11c391d9 */
  goto L_11c391d9;
L_11c391d3:;
  /* 11c391d3 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11c391d6 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_11c391d9:;
  /* 11c391d9 push esi */
  push32((uint32_t)(ESI));
  /* 11c391da push ebx */
  push32((uint32_t)(EBX));
  /* 11c391db push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11c391e0 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11c391e3 call dword ptr [0x11c3d09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d09c))), 0x11c391e9u);
  /* 11c391e9 mov esi, eax */
  ESI = (EAX);
  /* 11c391eb cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c391ed je 0x11c39164 */
  if (C.zf) goto L_11c39164;
L_11c391f3:;
  /* 11c391f3 mov eax, esi */
  EAX = (ESI);
  /* 11c391f5 jmp 0x11c39166 */
  goto L_11c39166;
}

/* FUN_100091fa @ 0x11c391fa (33 bytes, 15 insns) */
void f_11c391fa(void) {
  FTRACE(0x11c391fau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c391fa mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c391fe push esi */
  push32((uint32_t)(ESI));
  /* 11c391ff mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11c39203 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c39205 lea ecx, [edx + esi] */
  ECX = ((uint32_t)(EDX + ESI*1));
  /* 11c39208 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3920a jb 0x11c39210 */
  if (C.cf) goto L_11c39210;
  /* 11c3920c cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3920e jae 0x11c39213 */
  if (!C.cf) goto L_11c39213;
L_11c39210:;
  /* 11c39210 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c39212 pop eax */
  EAX = (pop32());
L_11c39213:;
  /* 11c39213 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 11c39217 pop esi */
  ESI = (pop32());
  /* 11c39218 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11c3921a ret  */
  ESPCHK(0x11c391fau, _esp0);
  ESP += 4; return;
}

/* ___add_12 @ 0x11c3921b (94 bytes, 38 insns) */
void f_11c3921b(void) {
  FTRACE(0x11c3921bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3921b push esi */
  push32((uint32_t)(ESI));
  /* 11c3921c mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c39220 push edi */
  push32((uint32_t)(EDI));
  /* 11c39221 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11c39225 push esi */
  push32((uint32_t)(ESI));
  /* 11c39226 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 11c39228 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11c3922a call 0x11c391fa */
  push32(0x11c3922fu); f_11c391fa();
  /* 11c3922f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c39232 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c39234 je 0x11c3924d */
  if (C.zf) goto L_11c3924d;
  /* 11c39236 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 11c39239 push eax */
  push32((uint32_t)(EAX));
  /* 11c3923a push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3923c push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 11c3923e call 0x11c391fa */
  push32(0x11c39243u); f_11c391fa();
  /* 11c39243 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c39246 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c39248 je 0x11c3924d */
  if (C.zf) goto L_11c3924d;
  /* 11c3924a inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_11c3924d:;
  /* 11c3924d lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 11c39250 push eax */
  push32((uint32_t)(EAX));
  /* 11c39251 push dword ptr [edi + 4] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x4))));
  /* 11c39254 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 11c39256 call 0x11c391fa */
  push32(0x11c3925bu); f_11c391fa();
  /* 11c3925b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3925e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c39260 je 0x11c39265 */
  if (C.zf) goto L_11c39265;
  /* 11c39262 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_11c39265:;
  /* 11c39265 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 11c39268 push eax */
  push32((uint32_t)(EAX));
  /* 11c39269 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 11c3926c push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 11c3926e call 0x11c391fa */
  push32(0x11c39273u); f_11c391fa();
  /* 11c39273 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c39276 pop edi */
  EDI = (pop32());
  /* 11c39277 pop esi */
  ESI = (pop32());
  /* 11c39278 ret  */
  ESPCHK(0x11c3921bu, _esp0);
  ESP += 4; return;
}

/* FUN_10009279 @ 0x11c39279 (46 bytes, 21 insns) */
void f_11c39279(void) {
  FTRACE(0x11c39279u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c39279 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c3927d push esi */
  push32((uint32_t)(ESI));
  /* 11c3927e push edi */
  push32((uint32_t)(EDI));
  /* 11c3927f mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 11c39281 mov edi, dword ptr [eax + 4] */
  EDI = (r32((uint32_t)(EAX + 0x4)));
  /* 11c39284 mov ecx, esi */
  ECX = (ESI);
  /* 11c39286 add esi, esi */
  { uint32_t _a=(ESI),_b=(ESI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c39288 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 11c3928a lea esi, [edi + edi] */
  ESI = ((uint32_t)(EDI + EDI*1));
  /* 11c3928d shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 11c39290 or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 11c39292 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11c39295 mov edx, edi */
  EDX = (EDI);
  /* 11c39297 mov dword ptr [eax + 4], esi */
  w32((uint32_t)(EAX + 0x4), (ESI));
  /* 11c3929a shr edx, 0x1f */
  EDX = (sh_shr((uint32_t)(EDX), (0x1fu)&0x1f, 32));
  /* 11c3929d shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11c3929f or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11c392a1 pop edi */
  EDI = (pop32());
  /* 11c392a2 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11c392a5 pop esi */
  ESI = (pop32());
  /* 11c392a6 ret  */
  ESPCHK(0x11c39279u, _esp0);
  ESP += 4; return;
}

/* FUN_100092a7 @ 0x11c392a7 (45 bytes, 21 insns) */
void f_11c392a7(void) {
  FTRACE(0x11c392a7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c392a7 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c392ab push esi */
  push32((uint32_t)(ESI));
  /* 11c392ac push edi */
  push32((uint32_t)(EDI));
  /* 11c392ad mov edx, dword ptr [eax + 8] */
  EDX = (r32((uint32_t)(EAX + 0x8)));
  /* 11c392b0 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11c392b3 mov esi, edx */
  ESI = (EDX);
  /* 11c392b5 mov edi, ecx */
  EDI = (ECX);
  /* 11c392b7 shl esi, 0x1f */
  ESI = (sh_shl((uint32_t)(ESI), (0x1fu)&0x1f, 32));
  /* 11c392ba shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11c392bc or ecx, esi */
  { uint32_t _r=(ECX)|(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 11c392be mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11c392c1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11c392c3 shl edi, 0x1f */
  EDI = (sh_shl((uint32_t)(EDI), (0x1fu)&0x1f, 32));
  /* 11c392c6 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11c392c8 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11c392ca or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11c392cc pop edi */
  EDI = (pop32());
  /* 11c392cd mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11c392d0 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11c392d2 pop esi */
  ESI = (pop32());
  /* 11c392d3 ret  */
  ESPCHK(0x11c392a7u, _esp0);
  ESP += 4; return;
}

/* FUN_100092d4 @ 0x11c392d4 (199 bytes, 76 insns) */
void f_11c392d4(void) {
  FTRACE(0x11c392d4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c392d4 push ebp */
  push32((uint32_t)(EBP));
  /* 11c392d5 mov ebp, esp */
  EBP = (ESP);
  /* 11c392d7 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c392da mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c392dd push ebx */
  push32((uint32_t)(EBX));
  /* 11c392de mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c392e1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11c392e3 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c392e5 push esi */
  push32((uint32_t)(ESI));
  /* 11c392e6 mov dword ptr [ebp - 4], 0x404e */
  w32((uint32_t)(EBP + -0x4), (0x404eu));
  /* 11c392ed mov dword ptr [ebx], edx */
  w32((uint32_t)(EBX), (EDX));
  /* 11c392ef mov dword ptr [ebx + 4], edx */
  w32((uint32_t)(EBX + 0x4), (EDX));
  /* 11c392f2 mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
  /* 11c392f5 jbe 0x11c39348 */
  if ((C.cf||C.zf)) goto L_11c39348;
  /* 11c392f7 push edi */
  push32((uint32_t)(EDI));
  /* 11c392f8 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11c392fb:;
  /* 11c392fb mov esi, ebx */
  ESI = (EBX);
  /* 11c392fd lea edi, [ebp - 0x10] */
  EDI = ((uint32_t)(EBP + -0x10));
  /* 11c39300 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11c39301 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11c39302 push ebx */
  push32((uint32_t)(EBX));
  /* 11c39303 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11c39304 call 0x11c39279 */
  push32(0x11c39309u); f_11c39279();
  /* 11c39309 push ebx */
  push32((uint32_t)(EBX));
  /* 11c3930a call 0x11c39279 */
  push32(0x11c3930fu); f_11c39279();
  /* 11c3930f lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11c39312 push eax */
  push32((uint32_t)(EAX));
  /* 11c39313 push ebx */
  push32((uint32_t)(EBX));
  /* 11c39314 call 0x11c3921b */
  push32(0x11c39319u); f_11c3921b();
  /* 11c39319 push ebx */
  push32((uint32_t)(EBX));
  /* 11c3931a call 0x11c39279 */
  push32(0x11c3931fu); f_11c39279();
  /* 11c3931f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c39322 and dword ptr [ebp - 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))&(0x0u); w32((uint32_t)(EBP + -0xc), (_r)); fl_logic(_r,32); }
  /* 11c39326 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11c3932a movsx eax, byte ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11c3932d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11c39330 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11c39333 push eax */
  push32((uint32_t)(EAX));
  /* 11c39334 push ebx */
  push32((uint32_t)(EBX));
  /* 11c39335 call 0x11c3921b */
  push32(0x11c3933au); f_11c3921b();
  /* 11c3933a add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3933d inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 11c39340 dec dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))-1; w32((uint32_t)(EBP + 0x10), (_r)); fl_dec(_r,32); }
  /* 11c39343 jne 0x11c392fb */
  if (!C.zf) goto L_11c392fb;
  /* 11c39345 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11c39347 pop edi */
  EDI = (pop32());
L_11c39348:;
  /* 11c39348 cmp dword ptr [ebx + 8], edx */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3934b jne 0x11c39375 */
  if (!C.zf) goto L_11c39375;
  /* 11c3934d mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11c39350 mov eax, ecx */
  EAX = (ECX);
  /* 11c39352 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11c39355 mov dword ptr [ebx + 8], eax */
  w32((uint32_t)(EBX + 0x8), (EAX));
  /* 11c39358 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11c3935a mov esi, eax */
  ESI = (EAX);
  /* 11c3935c shr esi, 0x10 */
  ESI = (sh_shr((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 11c3935f shl ecx, 0x10 */
  ECX = (sh_shl((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 11c39362 or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 11c39364 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11c39367 add dword ptr [ebp - 4], 0xfff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xfff0u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c3936e mov dword ptr [ebx + 4], esi */
  w32((uint32_t)(EBX + 0x4), (ESI));
  /* 11c39371 mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 11c39373 jmp 0x11c39348 */
  goto L_11c39348;
L_11c39375:;
  /* 11c39375 mov esi, 0x8000 */
  ESI = (0x8000u);
L_11c3937a:;
  /* 11c3937a test dword ptr [ebx + 8], esi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(ESI); fl_logic(_r,32); }
  /* 11c3937d jne 0x11c3938f */
  if (!C.zf) goto L_11c3938f;
  /* 11c3937f push ebx */
  push32((uint32_t)(EBX));
  /* 11c39380 call 0x11c39279 */
  push32(0x11c39385u); f_11c39279();
  /* 11c39385 add dword ptr [ebp - 4], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c3938c pop ecx */
  ECX = (pop32());
  /* 11c3938d jmp 0x11c3937a */
  goto L_11c3937a;
L_11c3938f:;
  /* 11c3938f mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11c39393 pop esi */
  ESI = (pop32());
  /* 11c39394 mov word ptr [ebx + 0xa], ax */
  w16((uint32_t)(EBX + 0xa), (AX));
  /* 11c39398 pop ebx */
  EBX = (pop32());
  /* 11c39399 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c3939a ret  */
  ESPCHK(0x11c392d4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000939b @ 0x11c3939b (1185 bytes, 417 insns) [1 switch table(s)] */
void f_11c3939b(void) {
  FTRACE(0x11c3939bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3939b push ebp */
  push32((uint32_t)(EBP));
  /* 11c3939c mov ebp, esp */
  EBP = (ESP);
  /* 11c3939e sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c393a1 push ebx */
  push32((uint32_t)(EBX));
  /* 11c393a2 push esi */
  push32((uint32_t)(ESI));
  /* 11c393a3 push edi */
  push32((uint32_t)(EDI));
  /* 11c393a4 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11c393a7 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 11c393aa push 1 */
  push32((uint32_t)(0x1u));
  /* 11c393ac mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11c393af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c393b1 pop edx */
  EDX = (pop32());
  /* 11c393b2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11c393b5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11c393b8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11c393bb mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11c393be mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11c393c1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11c393c4 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11c393c7 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11c393ca mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11c393cd mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11c393d0 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11c393d3 mov dword ptr [ebp + 0x10], edi */
  w32((uint32_t)(EBP + 0x10), (EDI));
L_11c393d6:;
  /* 11c393d6 mov cl, byte ptr [edi] */
  CL = (r8((uint32_t)(EDI)));
  /* 11c393d8 cmp cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c393db je 0x11c393ec */
  if (C.zf) goto L_11c393ec;
  /* 11c393dd cmp cl, 9 */
  { uint32_t _a=(CL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c393e0 je 0x11c393ec */
  if (C.zf) goto L_11c393ec;
  /* 11c393e2 cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c393e5 je 0x11c393ec */
  if (C.zf) goto L_11c393ec;
  /* 11c393e7 cmp cl, 0xd */
  { uint32_t _a=(CL),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c393ea jne 0x11c393ef */
  if (!C.zf) goto L_11c393ef;
L_11c393ec:;
  /* 11c393ec inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c393ed jmp 0x11c393d6 */
  goto L_11c393d6;
L_11c393ef:;
  /* 11c393ef push 4 */
  push32((uint32_t)(0x4u));
  /* 11c393f1 pop esi */
  ESI = (pop32());
L_11c393f2:;
  /* 11c393f2 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11c393f4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c393f5 cmp eax, 0xb */
  { uint32_t _a=(EAX),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c393f8 ja 0x11c39675 */
  if ((!C.cf&&!C.zf)) goto L_11c39675;
  /* 11c393fe jmp dword ptr [eax*4 + 0x11c3983c] */
  switch (EAX) {
    case 0: goto L_11c39405;
    case 1: goto L_11c39454;
    case 2: goto L_11c394ab;
    case 3: goto L_11c394d5;
    case 4: goto L_11c39530;
    case 5: goto L_11c395a7;
    case 6: goto L_11c395dd;
    case 7: goto L_11c39627;
    case 8: goto L_11c39606;
    case 9: goto L_11c3968b;
    case 10: goto L_11c39675;
    case 11: goto L_11c39641;
    default: x86_unimpl("switch@0x11c393fe out of table"); return;
  }
L_11c39405:;
  /* 11c39405 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c39408 jl 0x11c39416 */
  if ((C.sf!=C.of)) goto L_11c39416;
  /* 11c3940a cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3940d jg 0x11c39416 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c39416;
L_11c3940f:;
  /* 11c3940f push 3 */
  push32((uint32_t)(0x3u));
  /* 11c39411 jmp 0x11c39633 */
  goto L_11c39633;
L_11c39416:;
  /* 11c39416 cmp bl, byte ptr [0x11c3f6fc] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x11c3f6fc))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3941c jne 0x11c39425 */
  if (!C.zf) goto L_11c39425;
L_11c3941e:;
  /* 11c3941e push 5 */
  push32((uint32_t)(0x5u));
  /* 11c39420 jmp 0x11c3966b */
  goto L_11c3966b;
L_11c39425:;
  /* 11c39425 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11c39428 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3942b je 0x11c3944b */
  if (C.zf) goto L_11c3944b;
  /* 11c3942d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c3942e dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c3942f je 0x11c3943f */
  if (C.zf) goto L_11c3943f;
  /* 11c39431 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c39434 jne 0x11c3970e */
  if (!C.zf) goto L_11c3970e;
  /* 11c3943a jmp 0x11c394ce */
  goto L_11c394ce;
L_11c3943f:;
  /* 11c3943f push 2 */
  push32((uint32_t)(0x2u));
  /* 11c39441 mov dword ptr [ebp - 0x28], 0x8000 */
  w32((uint32_t)(EBP + -0x28), (0x8000u));
  /* 11c39448 pop eax */
  EAX = (pop32());
  /* 11c39449 jmp 0x11c393f2 */
  goto L_11c393f2;
L_11c3944b:;
  /* 11c3944b and dword ptr [ebp - 0x28], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x28)))&(0x0u); w32((uint32_t)(EBP + -0x28), (_r)); fl_logic(_r,32); }
  /* 11c3944f push 2 */
  push32((uint32_t)(0x2u));
  /* 11c39451 pop eax */
  EAX = (pop32());
  /* 11c39452 jmp 0x11c393f2 */
  goto L_11c393f2;
L_11c39454:;
  /* 11c39454 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c39457 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11c3945a jl 0x11c39461 */
  if ((C.sf!=C.of)) goto L_11c39461;
  /* 11c3945c cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3945f jle 0x11c3940f */
  if ((C.zf||C.sf!=C.of)) goto L_11c3940f;
L_11c39461:;
  /* 11c39461 cmp bl, byte ptr [0x11c3f6fc] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x11c3f6fc))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c39467 je 0x11c39529 */
  if (C.zf) goto L_11c39529;
  /* 11c3946d cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c39470 je 0x11c394a3 */
  if (C.zf) goto L_11c394a3;
  /* 11c39472 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c39475 je 0x11c394a3 */
  if (C.zf) goto L_11c394a3;
  /* 11c39477 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3947a je 0x11c394ce */
  if (C.zf) goto L_11c394ce;
L_11c3947c:;
  /* 11c3947c cmp bl, 0x43 */
  { uint32_t _a=(BL),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3947f jle 0x11c3970e */
  if ((C.zf||C.sf!=C.of)) goto L_11c3970e;
  /* 11c39485 cmp bl, 0x45 */
  { uint32_t _a=(BL),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c39488 jle 0x11c3949c */
  if ((C.zf||C.sf!=C.of)) goto L_11c3949c;
  /* 11c3948a cmp bl, 0x63 */
  { uint32_t _a=(BL),_b=(0x63u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3948d jle 0x11c3970e */
  if ((C.zf||C.sf!=C.of)) goto L_11c3970e;
  /* 11c39493 cmp bl, 0x65 */
  { uint32_t _a=(BL),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c39496 jg 0x11c3970e */
  if ((!C.zf&&C.sf==C.of)) goto L_11c3970e;
L_11c3949c:;
  /* 11c3949c push 6 */
  push32((uint32_t)(0x6u));
  /* 11c3949e jmp 0x11c3966b */
  goto L_11c3966b;
L_11c394a3:;
  /* 11c394a3 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11c394a4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11c394a6 jmp 0x11c3966b */
  goto L_11c3966b;
L_11c394ab:;
  /* 11c394ab cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c394ae jl 0x11c394b9 */
  if ((C.sf!=C.of)) goto L_11c394b9;
  /* 11c394b0 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c394b3 jle 0x11c3940f */
  if ((C.zf||C.sf!=C.of)) goto L_11c3940f;
L_11c394b9:;
  /* 11c394b9 cmp bl, byte ptr [0x11c3f6fc] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x11c3f6fc))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c394bf je 0x11c3941e */
  if (C.zf) goto L_11c3941e;
  /* 11c394c5 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c394c8 jne 0x11c39683 */
  if (!C.zf) goto L_11c39683;
L_11c394ce:;
  /* 11c394ce mov eax, edx */
  EAX = (EDX);
  /* 11c394d0 jmp 0x11c393f2 */
  goto L_11c393f2;
L_11c394d5:;
  /* 11c394d5 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11c394d8:;
  /* 11c394d8 cmp dword ptr [0x11c3f6f8], edx */
  { uint32_t _a=(r32((uint32_t)(0x11c3f6f8))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c394de jle 0x11c394f1 */
  if ((C.zf||C.sf!=C.of)) goto L_11c394f1;
  /* 11c394e0 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11c394e3 push esi */
  push32((uint32_t)(ESI));
  /* 11c394e4 push eax */
  push32((uint32_t)(EAX));
  /* 11c394e5 call 0x11c351e0 */
  push32(0x11c394eau); f_11c351e0();
  /* 11c394ea pop ecx */
  ECX = (pop32());
  /* 11c394eb pop ecx */
  ECX = (pop32());
  /* 11c394ec push 1 */
  push32((uint32_t)(0x1u));
  /* 11c394ee pop edx */
  EDX = (pop32());
  /* 11c394ef jmp 0x11c394ff */
  goto L_11c394ff;
L_11c394f1:;
  /* 11c394f1 mov ecx, dword ptr [0x11c3f704] */
  ECX = (r32((uint32_t)(0x11c3f704)));
  /* 11c394f7 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11c394fa mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11c394fd and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_11c394ff:;
  /* 11c394ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c39501 je 0x11c39521 */
  if (C.zf) goto L_11c39521;
  /* 11c39503 cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c39507 jae 0x11c39519 */
  if (!C.cf) goto L_11c39519;
  /* 11c39509 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11c3950c inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11c3950f sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11c39512 inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 11c39515 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
  /* 11c39517 jmp 0x11c3951c */
  goto L_11c3951c;
L_11c39519:;
  /* 11c39519 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
L_11c3951c:;
  /* 11c3951c mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11c3951e inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c3951f jmp 0x11c394d8 */
  goto L_11c394d8;
L_11c39521:;
  /* 11c39521 cmp bl, byte ptr [0x11c3f6fc] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x11c3f6fc))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c39527 jne 0x11c39590 */
  if (!C.zf) goto L_11c39590;
L_11c39529:;
  /* 11c39529 mov eax, esi */
  EAX = (ESI);
  /* 11c3952b jmp 0x11c393f2 */
  goto L_11c393f2;
L_11c39530:;
  /* 11c39530 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c39534 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11c39537 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11c3953a jne 0x11c39549 */
  if (!C.zf) goto L_11c39549;
L_11c3953c:;
  /* 11c3953c cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3953f jne 0x11c39549 */
  if (!C.zf) goto L_11c39549;
  /* 11c39541 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 11c39544 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11c39546 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c39547 jmp 0x11c3953c */
  goto L_11c3953c;
L_11c39549:;
  /* 11c39549 cmp dword ptr [0x11c3f6f8], edx */
  { uint32_t _a=(r32((uint32_t)(0x11c3f6f8))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3954f jle 0x11c39562 */
  if ((C.zf||C.sf!=C.of)) goto L_11c39562;
  /* 11c39551 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11c39554 push esi */
  push32((uint32_t)(ESI));
  /* 11c39555 push eax */
  push32((uint32_t)(EAX));
  /* 11c39556 call 0x11c351e0 */
  push32(0x11c3955bu); f_11c351e0();
  /* 11c3955b pop ecx */
  ECX = (pop32());
  /* 11c3955c pop ecx */
  ECX = (pop32());
  /* 11c3955d push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3955f pop edx */
  EDX = (pop32());
  /* 11c39560 jmp 0x11c39570 */
  goto L_11c39570;
L_11c39562:;
  /* 11c39562 mov ecx, dword ptr [0x11c3f704] */
  ECX = (r32((uint32_t)(0x11c3f704)));
  /* 11c39568 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11c3956b mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11c3956e and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_11c39570:;
  /* 11c39570 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c39572 je 0x11c39590 */
  if (C.zf) goto L_11c39590;
  /* 11c39574 cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c39578 jae 0x11c3958b */
  if (!C.cf) goto L_11c3958b;
  /* 11c3957a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11c3957d inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11c39580 sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11c39583 inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 11c39586 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 11c39589 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
L_11c3958b:;
  /* 11c3958b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11c3958d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c3958e jmp 0x11c39549 */
  goto L_11c39549;
L_11c39590:;
  /* 11c39590 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c39593 je 0x11c394a3 */
  if (C.zf) goto L_11c394a3;
  /* 11c39599 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3959c je 0x11c394a3 */
  if (C.zf) goto L_11c394a3;
  /* 11c395a2 jmp 0x11c3947c */
  goto L_11c3947c;
L_11c395a7:;
  /* 11c395a7 cmp dword ptr [0x11c3f6f8], edx */
  { uint32_t _a=(r32((uint32_t)(0x11c3f6f8))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c395ad mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11c395b0 jle 0x11c395c3 */
  if ((C.zf||C.sf!=C.of)) goto L_11c395c3;
  /* 11c395b2 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11c395b5 push esi */
  push32((uint32_t)(ESI));
  /* 11c395b6 push eax */
  push32((uint32_t)(EAX));
  /* 11c395b7 call 0x11c351e0 */
  push32(0x11c395bcu); f_11c351e0();
  /* 11c395bc pop ecx */
  ECX = (pop32());
  /* 11c395bd pop ecx */
  ECX = (pop32());
  /* 11c395be push 1 */
  push32((uint32_t)(0x1u));
  /* 11c395c0 pop edx */
  EDX = (pop32());
  /* 11c395c1 jmp 0x11c395d1 */
  goto L_11c395d1;
L_11c395c3:;
  /* 11c395c3 mov ecx, dword ptr [0x11c3f704] */
  ECX = (r32((uint32_t)(0x11c3f704)));
  /* 11c395c9 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11c395cc mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11c395cf and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_11c395d1:;
  /* 11c395d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c395d3 je 0x11c39683 */
  if (C.zf) goto L_11c39683;
  /* 11c395d9 mov eax, esi */
  EAX = (ESI);
  /* 11c395db jmp 0x11c39634 */
  goto L_11c39634;
L_11c395dd:;
  /* 11c395dd lea ecx, [edi - 2] */
  ECX = ((uint32_t)(EDI + -0x2));
  /* 11c395e0 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c395e3 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11c395e6 jl 0x11c395ed */
  if ((C.sf!=C.of)) goto L_11c395ed;
  /* 11c395e8 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c395eb jle 0x11c39631 */
  if ((C.zf||C.sf!=C.of)) goto L_11c39631;
L_11c395ed:;
  /* 11c395ed movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11c395f0 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c395f3 je 0x11c39669 */
  if (C.zf) goto L_11c39669;
  /* 11c395f5 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c395f6 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c395f7 je 0x11c3965d */
  if (C.zf) goto L_11c3965d;
  /* 11c395f9 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c395fc jne 0x11c39711 */
  if (!C.zf) goto L_11c39711;
L_11c39602:;
  /* 11c39602 push 8 */
  push32((uint32_t)(0x8u));
  /* 11c39604 jmp 0x11c3966b */
  goto L_11c3966b;
L_11c39606:;
  /* 11c39606 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11c39609:;
  /* 11c39609 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3960c jne 0x11c39613 */
  if (!C.zf) goto L_11c39613;
  /* 11c3960e mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11c39610 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c39611 jmp 0x11c39609 */
  goto L_11c39609;
L_11c39613:;
  /* 11c39613 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c39616 jl 0x11c3970e */
  if ((C.sf!=C.of)) goto L_11c3970e;
  /* 11c3961c cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3961f jg 0x11c3970e */
  if ((!C.zf&&C.sf==C.of)) goto L_11c3970e;
  /* 11c39625 jmp 0x11c39631 */
  goto L_11c39631;
L_11c39627:;
  /* 11c39627 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3962a jl 0x11c3963a */
  if ((C.sf!=C.of)) goto L_11c3963a;
  /* 11c3962c cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3962f jg 0x11c3963a */
  if ((!C.zf&&C.sf==C.of)) goto L_11c3963a;
L_11c39631:;
  /* 11c39631 push 9 */
  push32((uint32_t)(0x9u));
L_11c39633:;
  /* 11c39633 pop eax */
  EAX = (pop32());
L_11c39634:;
  /* 11c39634 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11c39635 jmp 0x11c393f2 */
  goto L_11c393f2;
L_11c3963a:;
  /* 11c3963a cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3963d jne 0x11c39683 */
  if (!C.zf) goto L_11c39683;
  /* 11c3963f jmp 0x11c39602 */
  goto L_11c39602;
L_11c39641:;
  /* 11c39641 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c39645 je 0x11c39671 */
  if (C.zf) goto L_11c39671;
  /* 11c39647 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11c3964a lea ecx, [edi - 1] */
  ECX = ((uint32_t)(EDI + -0x1));
  /* 11c3964d sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c39650 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11c39653 je 0x11c39669 */
  if (C.zf) goto L_11c39669;
  /* 11c39655 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c39656 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c39657 jne 0x11c39711 */
  if (!C.zf) goto L_11c39711;
L_11c3965d:;
  /* 11c3965d or dword ptr [ebp - 0x18], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))|(0xffffffffu); w32((uint32_t)(EBP + -0x18), (_r)); fl_logic(_r,32); }
  /* 11c39661 push 7 */
  push32((uint32_t)(0x7u));
  /* 11c39663 pop eax */
  EAX = (pop32());
  /* 11c39664 jmp 0x11c393f2 */
  goto L_11c393f2;
L_11c39669:;
  /* 11c39669 push 7 */
  push32((uint32_t)(0x7u));
L_11c3966b:;
  /* 11c3966b pop eax */
  EAX = (pop32());
  /* 11c3966c jmp 0x11c393f2 */
  goto L_11c393f2;
L_11c39671:;
  /* 11c39671 push 0xa */
  push32((uint32_t)(0xau));
  /* 11c39673 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11c39674 pop eax */
  EAX = (pop32());
L_11c39675:;
  /* 11c39675 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c39678 je 0x11c39713 */
  if (C.zf) goto L_11c39713;
  /* 11c3967e jmp 0x11c393f2 */
  goto L_11c393f2;
L_11c39683:;
  /* 11c39683 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11c39686 jmp 0x11c39713 */
  goto L_11c39713;
L_11c3968b:;
  /* 11c3968b mov dword ptr [ebp - 0x20], 1 */
  w32((uint32_t)(EBP + -0x20), (0x1u));
  /* 11c39692 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11c39694:;
  /* 11c39694 cmp dword ptr [0x11c3f6f8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c3f6f8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3969b jle 0x11c396ac */
  if ((C.zf||C.sf!=C.of)) goto L_11c396ac;
  /* 11c3969d movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11c396a0 push 4 */
  push32((uint32_t)(0x4u));
  /* 11c396a2 push eax */
  push32((uint32_t)(EAX));
  /* 11c396a3 call 0x11c351e0 */
  push32(0x11c396a8u); f_11c351e0();
  /* 11c396a8 pop ecx */
  ECX = (pop32());
  /* 11c396a9 pop ecx */
  ECX = (pop32());
  /* 11c396aa jmp 0x11c396bb */
  goto L_11c396bb;
L_11c396ac:;
  /* 11c396ac mov ecx, dword ptr [0x11c3f704] */
  ECX = (r32((uint32_t)(0x11c3f704)));
  /* 11c396b2 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11c396b5 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11c396b8 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_11c396bb:;
  /* 11c396bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c396bd je 0x11c396db */
  if (C.zf) goto L_11c396db;
  /* 11c396bf movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11c396c2 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 11c396c5 lea esi, [ecx + eax*2 - 0x30] */
  ESI = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 11c396c9 cmp esi, 0x1450 */
  { uint32_t _a=(ESI),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c396cf jg 0x11c396d6 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c396d6;
  /* 11c396d1 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11c396d3 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c396d4 jmp 0x11c39694 */
  goto L_11c39694;
L_11c396d6:;
  /* 11c396d6 mov esi, 0x1451 */
  ESI = (0x1451u);
L_11c396db:;
  /* 11c396db mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
L_11c396de:;
  /* 11c396de cmp dword ptr [0x11c3f6f8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c3f6f8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c396e5 jle 0x11c396f6 */
  if ((C.zf||C.sf!=C.of)) goto L_11c396f6;
  /* 11c396e7 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11c396ea push 4 */
  push32((uint32_t)(0x4u));
  /* 11c396ec push eax */
  push32((uint32_t)(EAX));
  /* 11c396ed call 0x11c351e0 */
  push32(0x11c396f2u); f_11c351e0();
  /* 11c396f2 pop ecx */
  ECX = (pop32());
  /* 11c396f3 pop ecx */
  ECX = (pop32());
  /* 11c396f4 jmp 0x11c39705 */
  goto L_11c39705;
L_11c396f6:;
  /* 11c396f6 mov ecx, dword ptr [0x11c3f704] */
  ECX = (r32((uint32_t)(0x11c3f704)));
  /* 11c396fc movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11c396ff mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11c39702 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_11c39705:;
  /* 11c39705 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c39707 je 0x11c3970e */
  if (C.zf) goto L_11c3970e;
  /* 11c39709 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11c3970b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c3970c jmp 0x11c396de */
  goto L_11c396de;
L_11c3970e:;
  /* 11c3970e dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11c3970f jmp 0x11c39713 */
  goto L_11c39713;
L_11c39711:;
  /* 11c39711 mov edi, ecx */
  EDI = (ECX);
L_11c39713:;
  /* 11c39713 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c39716 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3971a mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 11c3971c je 0x11c397fb */
  if (C.zf) goto L_11c397fb;
  /* 11c39722 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11c39724 pop eax */
  EAX = (pop32());
  /* 11c39725 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c39728 jbe 0x11c3973f */
  if ((C.cf||C.zf)) goto L_11c3973f;
  /* 11c3972a cmp byte ptr [ebp - 0x45], 5 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x45))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3972e jl 0x11c39733 */
  if ((C.sf!=C.of)) goto L_11c39733;
  /* 11c39730 inc byte ptr [ebp - 0x45] */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x45)))+1; w8((uint32_t)(EBP + -0x45), (_r)); fl_inc(_r,8); }
L_11c39733:;
  /* 11c39733 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11c39736 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11c39739 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c3973a inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 11c3973d jmp 0x11c39742 */
  goto L_11c39742;
L_11c3973f:;
  /* 11c3973f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_11c39742:;
  /* 11c39742 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c39746 jbe 0x11c397f1 */
  if ((C.cf||C.zf)) goto L_11c397f1;
L_11c3974c:;
  /* 11c3974c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c3974d cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c39750 jne 0x11c3975a */
  if (!C.zf) goto L_11c3975a;
  /* 11c39752 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 11c39755 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 11c39758 jmp 0x11c3974c */
  goto L_11c3974c;
L_11c3975a:;
  /* 11c3975a lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 11c3975d push eax */
  push32((uint32_t)(EAX));
  /* 11c3975e lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 11c39761 push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 11c39764 push eax */
  push32((uint32_t)(EAX));
  /* 11c39765 call 0x11c392d4 */
  push32(0x11c3976au); f_11c392d4();
  /* 11c3976a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11c3976d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11c3976f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c39772 cmp dword ptr [ebp - 0x18], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c39775 jge 0x11c39779 */
  if ((C.sf==C.of)) goto L_11c39779;
  /* 11c39777 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11c39779:;
  /* 11c39779 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3977c cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3977f jne 0x11c39784 */
  if (!C.zf) goto L_11c39784;
  /* 11c39781 add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11c39784:;
  /* 11c39784 cmp dword ptr [ebp - 0x24], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c39787 jne 0x11c3978c */
  if (!C.zf) goto L_11c3978c;
  /* 11c39789 sub eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11c3978c:;
  /* 11c3978c cmp eax, 0x1450 */
  { uint32_t _a=(EAX),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c39791 jle 0x11c397c3 */
  if ((C.zf||C.sf!=C.of)) goto L_11c397c3;
  /* 11c39793 mov dword ptr [ebp - 0x2c], 1 */
  w32((uint32_t)(EBP + -0x2c), (0x1u));
L_11c3979a:;
  /* 11c3979a mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c3979d mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11c397a0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c397a3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_11c397a6:;
  /* 11c397a6 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c397aa je 0x11c3980c */
  if (C.zf) goto L_11c3980c;
  /* 11c397ac xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c397ae mov eax, 0x7fff */
  EAX = (0x7fffu);
  /* 11c397b3 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11c397b8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11c397ba mov dword ptr [ebp - 0x14], 2 */
  w32((uint32_t)(EBP + -0x14), (0x2u));
  /* 11c397c1 jmp 0x11c39821 */
  goto L_11c39821;
L_11c397c3:;
  /* 11c397c3 cmp eax, 0xffffebb0 */
  { uint32_t _a=(EAX),_b=(0xffffebb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c397c8 jge 0x11c397d3 */
  if ((C.sf==C.of)) goto L_11c397d3;
  /* 11c397ca mov dword ptr [ebp - 0x30], 1 */
  w32((uint32_t)(EBP + -0x30), (0x1u));
  /* 11c397d1 jmp 0x11c3979a */
  goto L_11c3979a;
L_11c397d3:;
  /* 11c397d3 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11c397d6 push eax */
  push32((uint32_t)(EAX));
  /* 11c397d7 lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 11c397da push eax */
  push32((uint32_t)(EAX));
  /* 11c397db call 0x11c3a3ea */
  push32(0x11c397e0u); f_11c3a3ea();
  /* 11c397e0 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11c397e3 mov ebx, dword ptr [ebp - 0x3e] */
  EBX = (r32((uint32_t)(EBP + -0x3e)));
  /* 11c397e6 mov esi, dword ptr [ebp - 0x3a] */
  ESI = (r32((uint32_t)(EBP + -0x3a)));
  /* 11c397e9 mov eax, dword ptr [ebp - 0x36] */
  EAX = (r32((uint32_t)(EBP + -0x36)));
  /* 11c397ec add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c397ef jmp 0x11c397a6 */
  goto L_11c397a6;
L_11c397f1:;
  /* 11c397f1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11c397f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c397f5 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11c397f7 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c397f9 jmp 0x11c397a6 */
  goto L_11c397a6;
L_11c397fb:;
  /* 11c397fb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11c397fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c397ff xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11c39801 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c39803 mov dword ptr [ebp - 0x14], 4 */
  w32((uint32_t)(EBP + -0x14), (0x4u));
  /* 11c3980a jmp 0x11c39821 */
  goto L_11c39821;
L_11c3980c:;
  /* 11c3980c cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c39810 je 0x11c39821 */
  if (C.zf) goto L_11c39821;
  /* 11c39812 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11c39814 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c39816 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11c39818 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c3981a mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_11c39821:;
  /* 11c39821 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c39824 or eax, dword ptr [ebp - 0x28] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x28))); EAX = (_r); fl_logic(_r,32); }
  /* 11c39827 pop edi */
  EDI = (pop32());
  /* 11c39828 mov dword ptr [ecx + 6], esi */
  w32((uint32_t)(ECX + 0x6), (ESI));
  /* 11c3982b mov dword ptr [ecx + 2], ebx */
  w32((uint32_t)(ECX + 0x2), (EBX));
  /* 11c3982e mov word ptr [ecx + 0xa], ax */
  w16((uint32_t)(ECX + 0xa), (AX));
  /* 11c39832 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11c39835 pop esi */
  ESI = (pop32());
  /* 11c39836 mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 11c39839 pop ebx */
  EBX = (pop32());
  /* 11c3983a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c3983b ret  */
  ESPCHK(0x11c3939bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000986c @ 0x11c3986c (659 bytes, 232 insns) */
void f_11c3986c(void) {
  FTRACE(0x11c3986cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3986c push ebp */
  push32((uint32_t)(EBP));
  /* 11c3986d mov ebp, esp */
  EBP = (ESP);
  /* 11c3986f sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c39872 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c39875 push ebx */
  push32((uint32_t)(EBX));
  /* 11c39876 mov ebx, dword ptr [ebp + 0x1c] */
  EBX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11c39879 push esi */
  push32((uint32_t)(ESI));
  /* 11c3987a mov ecx, eax */
  ECX = (EAX);
  /* 11c3987c mov esi, 0x7fff */
  ESI = (0x7fffu);
  /* 11c39881 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11c39887 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11c39889 test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 11c3988c push edi */
  push32((uint32_t)(EDI));
  /* 11c3988d mov byte ptr [ebp - 0x1c], 0xcc */
  w8((uint32_t)(EBP + -0x1c), (0xccu));
  /* 11c39891 mov byte ptr [ebp - 0x1b], 0xcc */
  w8((uint32_t)(EBP + -0x1b), (0xccu));
  /* 11c39895 mov byte ptr [ebp - 0x1a], 0xcc */
  w8((uint32_t)(EBP + -0x1a), (0xccu));
  /* 11c39899 mov byte ptr [ebp - 0x19], 0xcc */
  w8((uint32_t)(EBP + -0x19), (0xccu));
  /* 11c3989d mov byte ptr [ebp - 0x18], 0xcc */
  w8((uint32_t)(EBP + -0x18), (0xccu));
  /* 11c398a1 mov byte ptr [ebp - 0x17], 0xcc */
  w8((uint32_t)(EBP + -0x17), (0xccu));
  /* 11c398a5 mov byte ptr [ebp - 0x16], 0xcc */
  w8((uint32_t)(EBP + -0x16), (0xccu));
  /* 11c398a9 mov byte ptr [ebp - 0x15], 0xcc */
  w8((uint32_t)(EBP + -0x15), (0xccu));
  /* 11c398ad mov byte ptr [ebp - 0x14], 0xcc */
  w8((uint32_t)(EBP + -0x14), (0xccu));
  /* 11c398b1 mov byte ptr [ebp - 0x13], 0xcc */
  w8((uint32_t)(EBP + -0x13), (0xccu));
  /* 11c398b5 mov byte ptr [ebp - 0x12], 0xfb */
  w8((uint32_t)(EBP + -0x12), (0xfbu));
  /* 11c398b9 mov byte ptr [ebp - 0x11], 0x3f */
  w8((uint32_t)(EBP + -0x11), (0x3fu));
  /* 11c398bd mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11c398c4 mov edx, eax */
  EDX = (EAX);
  /* 11c398c6 je 0x11c398ce */
  if (C.zf) goto L_11c398ce;
  /* 11c398c8 mov byte ptr [ebx + 2], 0x2d */
  w8((uint32_t)(EBX + 0x2), (0x2du));
  /* 11c398cc jmp 0x11c398d2 */
  goto L_11c398d2;
L_11c398ce:;
  /* 11c398ce mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
L_11c398d2:;
  /* 11c398d2 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11c398d5 test dx, dx */
  { uint32_t _r=(DX)&(DX); fl_logic(_r,16); }
  /* 11c398d8 jne 0x11c398f8 */
  if (!C.zf) goto L_11c398f8;
  /* 11c398da test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11c398dc jne 0x11c398f8 */
  if (!C.zf) goto L_11c398f8;
  /* 11c398de cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c398e1 jne 0x11c398f8 */
  if (!C.zf) goto L_11c398f8;
L_11c398e3:;
  /* 11c398e3 and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 11c398e7 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 11c398eb mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 11c398ef mov byte ptr [ebx + 4], 0x30 */
  w8((uint32_t)(EBX + 0x4), (0x30u));
  /* 11c398f3 jmp 0x11c39af6 */
  goto L_11c39af6;
L_11c398f8:;
  /* 11c398f8 cmp dx, si */
  { uint32_t _a=(DX),_b=(SI),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c398fb jne 0x11c39977 */
  if (!C.zf) goto L_11c39977;
  /* 11c398fd mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11c39902 mov word ptr [ebx], 1 */
  w16((uint32_t)(EBX), (0x1u));
  /* 11c39907 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c39909 jne 0x11c39911 */
  if (!C.zf) goto L_11c39911;
  /* 11c3990b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3990f je 0x11c39920 */
  if (C.zf) goto L_11c39920;
L_11c39911:;
  /* 11c39911 test edi, 0x40000000 */
  { uint32_t _r=(EDI)&(0x40000000u); fl_logic(_r,32); }
  /* 11c39917 jne 0x11c39920 */
  if (!C.zf) goto L_11c39920;
  /* 11c39919 push 0x11c3d700 */
  push32((uint32_t)(0x11c3d700u));
  /* 11c3991e jmp 0x11c39966 */
  goto L_11c39966;
L_11c39920:;
  /* 11c39920 test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 11c39923 je 0x11c3993a */
  if (C.zf) goto L_11c3993a;
  /* 11c39925 cmp edi, 0xc0000000 */
  { uint32_t _a=(EDI),_b=(0xc0000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3992b jne 0x11c3993a */
  if (!C.zf) goto L_11c3993a;
  /* 11c3992d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c39931 jne 0x11c39961 */
  if (!C.zf) goto L_11c39961;
  /* 11c39933 push 0x11c3d6f8 */
  push32((uint32_t)(0x11c3d6f8u));
  /* 11c39938 jmp 0x11c39949 */
  goto L_11c39949;
L_11c3993a:;
  /* 11c3993a cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3993c jne 0x11c39961 */
  if (!C.zf) goto L_11c39961;
  /* 11c3993e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c39942 jne 0x11c39961 */
  if (!C.zf) goto L_11c39961;
  /* 11c39944 push 0x11c3d6f0 */
  push32((uint32_t)(0x11c3d6f0u));
L_11c39949:;
  /* 11c39949 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 11c3994c push eax */
  push32((uint32_t)(EAX));
  /* 11c3994d call 0x11c35910 */
  push32(0x11c39952u); f_11c35910();
  /* 11c39952 pop ecx */
  ECX = (pop32());
  /* 11c39953 mov byte ptr [ebx + 3], 5 */
  w8((uint32_t)(EBX + 0x3), (0x5u));
  /* 11c39957 pop ecx */
  ECX = (pop32());
L_11c39958:;
  /* 11c39958 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c3995c jmp 0x11c39acf */
  goto L_11c39acf;
L_11c39961:;
  /* 11c39961 push 0x11c3d6e8 */
  push32((uint32_t)(0x11c3d6e8u));
L_11c39966:;
  /* 11c39966 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 11c39969 push eax */
  push32((uint32_t)(EAX));
  /* 11c3996a call 0x11c35910 */
  push32(0x11c3996fu); f_11c35910();
  /* 11c3996f pop ecx */
  ECX = (pop32());
  /* 11c39970 mov byte ptr [ebx + 3], 6 */
  w8((uint32_t)(EBX + 0x3), (0x6u));
  /* 11c39974 pop ecx */
  ECX = (pop32());
  /* 11c39975 jmp 0x11c39958 */
  goto L_11c39958;
L_11c39977:;
  /* 11c39977 movzx eax, dx */
  EAX = ((uint32_t)(DX));
  /* 11c3997a mov ecx, edi */
  ECX = (EDI);
  /* 11c3997c mov esi, eax */
  ESI = (EAX);
  /* 11c3997e shr ecx, 0x18 */
  ECX = (sh_shr((uint32_t)(ECX), (0x18u)&0x1f, 32));
  /* 11c39981 imul eax, eax, 0x4d10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x4d10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c39987 shr esi, 8 */
  ESI = (sh_shr((uint32_t)(ESI), (0x8u)&0x1f, 32));
  /* 11c3998a and word ptr [ebp - 0x10], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x10)))&(0x0u); w16((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,16); }
  /* 11c3998f push 1 */
  push32((uint32_t)(0x1u));
  /* 11c39991 lea ecx, [esi + ecx*2] */
  ECX = ((uint32_t)(ESI + ECX*2));
  /* 11c39994 mov word ptr [ebp - 6], dx */
  w16((uint32_t)(EBP + -0x6), (DX));
  /* 11c39998 imul ecx, ecx, 0x4d */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x4du); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c3999b mov dword ptr [ebp - 0xa], edi */
  w32((uint32_t)(EBP + -0xa), (EDI));
  /* 11c3999e lea esi, [ecx + eax - 0x134312f4] */
  ESI = ((uint32_t)(ECX + EAX*1 + -0x134312f4));
  /* 11c399a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c399a8 sar esi, 0x10 */
  ESI = (sh_sar((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 11c399ab mov dword ptr [ebp - 0xe], eax */
  w32((uint32_t)(EBP + -0xe), (EAX));
  /* 11c399ae movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 11c399b1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c399b3 push eax */
  push32((uint32_t)(EAX));
  /* 11c399b4 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11c399b7 push eax */
  push32((uint32_t)(EAX));
  /* 11c399b8 call 0x11c3a3ea */
  push32(0x11c399bdu); f_11c3a3ea();
  /* 11c399bd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c399c0 cmp word ptr [ebp - 6], 0x3fff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x6))),_b=(0x3fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c399c6 jb 0x11c399d8 */
  if (C.cf) goto L_11c399d8;
  /* 11c399c8 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11c399cb inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c399cc push eax */
  push32((uint32_t)(EAX));
  /* 11c399cd lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11c399d0 push eax */
  push32((uint32_t)(EAX));
  /* 11c399d1 call 0x11c3a1ca */
  push32(0x11c399d6u); f_11c3a1ca();
  /* 11c399d6 pop ecx */
  ECX = (pop32());
  /* 11c399d7 pop ecx */
  ECX = (pop32());
L_11c399d8:;
  /* 11c399d8 test byte ptr [ebp + 0x18], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x18)))&(0x1u); fl_logic(_r,8); }
  /* 11c399dc mov word ptr [ebx], si */
  w16((uint32_t)(EBX), (SI));
  /* 11c399df je 0x11c399f2 */
  if (C.zf) goto L_11c399f2;
  /* 11c399e1 mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 11c399e4 movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 11c399e7 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c399e9 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11c399eb jg 0x11c399f5 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c399f5;
  /* 11c399ed jmp 0x11c398e3 */
  goto L_11c398e3;
L_11c399f2:;
  /* 11c399f2 mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
L_11c399f5:;
  /* 11c399f5 cmp edi, 0x15 */
  { uint32_t _a=(EDI),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c399f8 jle 0x11c399fd */
  if ((C.zf||C.sf!=C.of)) goto L_11c399fd;
  /* 11c399fa push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11c399fc pop edi */
  EDI = (pop32());
L_11c399fd:;
  /* 11c399fd movzx esi, word ptr [ebp - 6] */
  ESI = ((uint32_t)(r16((uint32_t)(EBP + -0x6))));
  /* 11c39a01 sub esi, 0x3ffe */
  { uint32_t _a=(ESI),_b=(0x3ffeu),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c39a07 and word ptr [ebp - 6], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x6)))&(0x0u); w16((uint32_t)(EBP + -0x6), (_r)); fl_logic(_r,16); }
  /* 11c39a0c mov dword ptr [ebp + 0x1c], 8 */
  w32((uint32_t)(EBP + 0x1c), (0x8u));
L_11c39a13:;
  /* 11c39a13 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11c39a16 push eax */
  push32((uint32_t)(EAX));
  /* 11c39a17 call 0x11c39279 */
  push32(0x11c39a1cu); f_11c39279();
  /* 11c39a1c dec dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))-1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_dec(_r,32); }
  /* 11c39a1f pop ecx */
  ECX = (pop32());
  /* 11c39a20 jne 0x11c39a13 */
  if (!C.zf) goto L_11c39a13;
  /* 11c39a22 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c39a24 jge 0x11c39a3d */
  if ((C.sf==C.of)) goto L_11c39a3d;
  /* 11c39a26 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 11c39a28 and esi, 0xff */
  { uint32_t _r=(ESI)&(0xffu); ESI = (_r); fl_logic(_r,32); }
  /* 11c39a2e jle 0x11c39a3d */
  if ((C.zf||C.sf!=C.of)) goto L_11c39a3d;
L_11c39a30:;
  /* 11c39a30 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11c39a33 push eax */
  push32((uint32_t)(EAX));
  /* 11c39a34 call 0x11c392a7 */
  push32(0x11c39a39u); f_11c392a7();
  /* 11c39a39 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11c39a3a pop ecx */
  ECX = (pop32());
  /* 11c39a3b jne 0x11c39a30 */
  if (!C.zf) goto L_11c39a30;
L_11c39a3d:;
  /* 11c39a3d lea ecx, [edi + 1] */
  ECX = ((uint32_t)(EDI + 0x1));
  /* 11c39a40 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 11c39a43 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11c39a45 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
  /* 11c39a48 jle 0x11c39a9a */
  if ((C.zf||C.sf!=C.of)) goto L_11c39a9a;
  /* 11c39a4a mov dword ptr [ebp + 0x14], ecx */
  w32((uint32_t)(EBP + 0x14), (ECX));
L_11c39a4d:;
  /* 11c39a4d lea esi, [ebp - 0x10] */
  ESI = ((uint32_t)(EBP + -0x10));
  /* 11c39a50 lea edi, [ebp + 8] */
  EDI = ((uint32_t)(EBP + 0x8));
  /* 11c39a53 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11c39a54 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11c39a55 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11c39a58 push eax */
  push32((uint32_t)(EAX));
  /* 11c39a59 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11c39a5a call 0x11c39279 */
  push32(0x11c39a5fu); f_11c39279();
  /* 11c39a5f lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11c39a62 push eax */
  push32((uint32_t)(EAX));
  /* 11c39a63 call 0x11c39279 */
  push32(0x11c39a68u); f_11c39279();
  /* 11c39a68 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11c39a6b push eax */
  push32((uint32_t)(EAX));
  /* 11c39a6c lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11c39a6f push eax */
  push32((uint32_t)(EAX));
  /* 11c39a70 call 0x11c3921b */
  push32(0x11c39a75u); f_11c3921b();
  /* 11c39a75 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11c39a78 push eax */
  push32((uint32_t)(EAX));
  /* 11c39a79 call 0x11c39279 */
  push32(0x11c39a7eu); f_11c39279();
  /* 11c39a7e mov al, byte ptr [ebp - 5] */
  AL = (r8((uint32_t)(EBP + -0x5)));
  /* 11c39a81 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11c39a84 and byte ptr [ebp - 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x5)))&(0x0u); w8((uint32_t)(EBP + -0x5), (_r)); fl_logic(_r,8); }
  /* 11c39a88 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c39a8b add al, 0x30 */
  { uint32_t _a=(AL),_b=(0x30u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11c39a8d inc dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))+1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_inc(_r,32); }
  /* 11c39a90 dec dword ptr [ebp + 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))-1; w32((uint32_t)(EBP + 0x14), (_r)); fl_dec(_r,32); }
  /* 11c39a93 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11c39a95 jne 0x11c39a4d */
  if (!C.zf) goto L_11c39a4d;
  /* 11c39a97 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
L_11c39a9a:;
  /* 11c39a9a mov cl, byte ptr [eax - 1] */
  CL = (r8((uint32_t)(EAX + -0x1)));
  /* 11c39a9d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c39a9e dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c39a9f cmp cl, 0x35 */
  { uint32_t _a=(CL),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c39aa2 lea ecx, [ebx + 4] */
  ECX = ((uint32_t)(EBX + 0x4));
  /* 11c39aa5 jl 0x11c39ad7 */
  if ((C.sf!=C.of)) goto L_11c39ad7;
L_11c39aa7:;
  /* 11c39aa7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c39aa9 jb 0x11c39aba */
  if (C.cf) goto L_11c39aba;
  /* 11c39aab cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c39aae jne 0x11c39ab6 */
  if (!C.zf) goto L_11c39ab6;
  /* 11c39ab0 mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 11c39ab3 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c39ab4 jmp 0x11c39aa7 */
  goto L_11c39aa7;
L_11c39ab6:;
  /* 11c39ab6 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c39ab8 jae 0x11c39abe */
  if (!C.cf) goto L_11c39abe;
L_11c39aba:;
  /* 11c39aba inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c39abb inc word ptr [ebx] */
  { uint32_t _r=(r16((uint32_t)(EBX)))+1; w16((uint32_t)(EBX), (_r)); fl_inc(_r,16); }
L_11c39abe:;
  /* 11c39abe inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_11c39ac0:;
  /* 11c39ac0 sub al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11c39ac2 sub al, 3 */
  { uint32_t _a=(AL),_b=(0x3u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11c39ac4 mov byte ptr [ebx + 3], al */
  w8((uint32_t)(EBX + 0x3), (AL));
  /* 11c39ac7 movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11c39aca and byte ptr [eax + ebx + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + EBX*1 + 0x4)))&(0x0u); w8((uint32_t)(EAX + EBX*1 + 0x4), (_r)); fl_logic(_r,8); }
L_11c39acf:;
  /* 11c39acf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11c39ad2:;
  /* 11c39ad2 pop edi */
  EDI = (pop32());
  /* 11c39ad3 pop esi */
  ESI = (pop32());
  /* 11c39ad4 pop ebx */
  EBX = (pop32());
  /* 11c39ad5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c39ad6 ret  */
  ESPCHK(0x11c3986cu, _esp0);
  ESP += 4; return;
L_11c39ad7:;
  /* 11c39ad7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c39ad9 jb 0x11c39ae7 */
  if (C.cf) goto L_11c39ae7;
  /* 11c39adb cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c39ade jne 0x11c39ae3 */
  if (!C.zf) goto L_11c39ae3;
  /* 11c39ae0 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c39ae1 jmp 0x11c39ad7 */
  goto L_11c39ad7;
L_11c39ae3:;
  /* 11c39ae3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c39ae5 jae 0x11c39ac0 */
  if (!C.cf) goto L_11c39ac0;
L_11c39ae7:;
  /* 11c39ae7 and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 11c39aeb mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 11c39aef mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 11c39af3 mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
L_11c39af6:;
  /* 11c39af6 and byte ptr [ebx + 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x5)))&(0x0u); w8((uint32_t)(EBX + 0x5), (_r)); fl_logic(_r,8); }
  /* 11c39afa push 1 */
  push32((uint32_t)(0x1u));
  /* 11c39afc pop eax */
  EAX = (pop32());
  /* 11c39afd jmp 0x11c39ad2 */
  goto L_11c39ad2;
}

/* FUN_10009aff @ 0x11c39aff (139 bytes, 59 insns) */
void f_11c39aff(void) {
  FTRACE(0x11c39affu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c39aff push ebx */
  push32((uint32_t)(EBX));
  /* 11c39b00 push ebp */
  push32((uint32_t)(EBP));
  /* 11c39b01 push esi */
  push32((uint32_t)(ESI));
  /* 11c39b02 push edi */
  push32((uint32_t)(EDI));
  /* 11c39b03 mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
L_11c39b07:;
  /* 11c39b07 cmp dword ptr [0x11c3f6f8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c3f6f8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c39b0e jle 0x11c39b1f */
  if ((C.zf||C.sf!=C.of)) goto L_11c39b1f;
  /* 11c39b10 movzx eax, byte ptr [edi] */
  EAX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11c39b13 push 8 */
  push32((uint32_t)(0x8u));
  /* 11c39b15 push eax */
  push32((uint32_t)(EAX));
  /* 11c39b16 call 0x11c351e0 */
  push32(0x11c39b1bu); f_11c351e0();
  /* 11c39b1b pop ecx */
  ECX = (pop32());
  /* 11c39b1c pop ecx */
  ECX = (pop32());
  /* 11c39b1d jmp 0x11c39b2e */
  goto L_11c39b2e;
L_11c39b1f:;
  /* 11c39b1f movzx eax, byte ptr [edi] */
  EAX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11c39b22 mov ecx, dword ptr [0x11c3f704] */
  ECX = (r32((uint32_t)(0x11c3f704)));
  /* 11c39b28 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11c39b2b and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
L_11c39b2e:;
  /* 11c39b2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c39b30 je 0x11c39b35 */
  if (C.zf) goto L_11c39b35;
  /* 11c39b32 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c39b33 jmp 0x11c39b07 */
  goto L_11c39b07;
L_11c39b35:;
  /* 11c39b35 movzx esi, byte ptr [edi] */
  ESI = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11c39b38 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c39b39 cmp esi, 0x2d */
  { uint32_t _a=(ESI),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c39b3c mov ebp, esi */
  EBP = (ESI);
  /* 11c39b3e je 0x11c39b45 */
  if (C.zf) goto L_11c39b45;
  /* 11c39b40 cmp esi, 0x2b */
  { uint32_t _a=(ESI),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c39b43 jne 0x11c39b49 */
  if (!C.zf) goto L_11c39b49;
L_11c39b45:;
  /* 11c39b45 movzx esi, byte ptr [edi] */
  ESI = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11c39b48 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11c39b49:;
  /* 11c39b49 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11c39b4b:;
  /* 11c39b4b cmp dword ptr [0x11c3f6f8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c3f6f8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c39b52 jle 0x11c39b60 */
  if ((C.zf||C.sf!=C.of)) goto L_11c39b60;
  /* 11c39b54 push 4 */
  push32((uint32_t)(0x4u));
  /* 11c39b56 push esi */
  push32((uint32_t)(ESI));
  /* 11c39b57 call 0x11c351e0 */
  push32(0x11c39b5cu); f_11c351e0();
  /* 11c39b5c pop ecx */
  ECX = (pop32());
  /* 11c39b5d pop ecx */
  ECX = (pop32());
  /* 11c39b5e jmp 0x11c39b6b */
  goto L_11c39b6b;
L_11c39b60:;
  /* 11c39b60 mov eax, dword ptr [0x11c3f704] */
  EAX = (r32((uint32_t)(0x11c3f704)));
  /* 11c39b65 mov al, byte ptr [eax + esi*2] */
  AL = (r8((uint32_t)(EAX + ESI*2)));
  /* 11c39b68 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_11c39b6b:;
  /* 11c39b6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c39b6d je 0x11c39b7c */
  if (C.zf) goto L_11c39b7c;
  /* 11c39b6f lea eax, [ebx + ebx*4] */
  EAX = ((uint32_t)(EBX + EBX*4));
  /* 11c39b72 lea ebx, [esi + eax*2 - 0x30] */
  EBX = ((uint32_t)(ESI + EAX*2 + -0x30));
  /* 11c39b76 movzx esi, byte ptr [edi] */
  ESI = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11c39b79 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c39b7a jmp 0x11c39b4b */
  goto L_11c39b4b;
L_11c39b7c:;
  /* 11c39b7c cmp ebp, 0x2d */
  { uint32_t _a=(EBP),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c39b7f mov eax, ebx */
  EAX = (EBX);
  /* 11c39b81 jne 0x11c39b85 */
  if (!C.zf) goto L_11c39b85;
  /* 11c39b83 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11c39b85:;
  /* 11c39b85 pop edi */
  EDI = (pop32());
  /* 11c39b86 pop esi */
  ESI = (pop32());
  /* 11c39b87 pop ebp */
  EBP = (pop32());
  /* 11c39b88 pop ebx */
  EBX = (pop32());
  /* 11c39b89 ret  */
  ESPCHK(0x11c39affu, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x11c39b90 (129 bytes, 56 insns) */
void f_11c39b90(void) {
  FTRACE(0x11c39b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c39b90 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c39b94 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c39b98 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11c39b9e jne 0x11c39bdc */
  if (!C.zf) goto L_11c39bdc;
L_11c39ba0:;
  /* 11c39ba0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11c39ba2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c39ba4 jne 0x11c39bd4 */
  if (!C.zf) goto L_11c39bd4;
  /* 11c39ba6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11c39ba8 je 0x11c39bd0 */
  if (C.zf) goto L_11c39bd0;
  /* 11c39baa cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c39bad jne 0x11c39bd4 */
  if (!C.zf) goto L_11c39bd4;
  /* 11c39baf or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11c39bb1 je 0x11c39bd0 */
  if (C.zf) goto L_11c39bd0;
  /* 11c39bb3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11c39bb6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c39bb9 jne 0x11c39bd4 */
  if (!C.zf) goto L_11c39bd4;
  /* 11c39bbb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11c39bbd je 0x11c39bd0 */
  if (C.zf) goto L_11c39bd0;
  /* 11c39bbf cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c39bc2 jne 0x11c39bd4 */
  if (!C.zf) goto L_11c39bd4;
  /* 11c39bc4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c39bc7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c39bca or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11c39bcc jne 0x11c39ba0 */
  if (!C.zf) goto L_11c39ba0;
  /* 11c39bce mov edi, edi */
  EDI = (EDI);
L_11c39bd0:;
  /* 11c39bd0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c39bd2 ret  */
  ESPCHK(0x11c39b90u, _esp0);
  ESP += 4; return;
  /* 11c39bd3 nop  */
  /* nop */
L_11c39bd4:;
  /* 11c39bd4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c39bd6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11c39bd8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c39bd9 ret  */
  ESPCHK(0x11c39b90u, _esp0);
  ESP += 4; return;
  /* 11c39bda mov edi, edi */
  EDI = (EDI);
L_11c39bdc:;
  /* 11c39bdc test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 11c39be2 je 0x11c39bf8 */
  if (C.zf) goto L_11c39bf8;
  /* 11c39be4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11c39be6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11c39be7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c39be9 jne 0x11c39bd4 */
  if (!C.zf) goto L_11c39bd4;
  /* 11c39beb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c39bec or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11c39bee je 0x11c39bd0 */
  if (C.zf) goto L_11c39bd0;
  /* 11c39bf0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 11c39bf6 je 0x11c39ba0 */
  if (C.zf) goto L_11c39ba0;
L_11c39bf8:;
  /* 11c39bf8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11c39bfb add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c39bfe cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c39c00 jne 0x11c39bd4 */
  if (!C.zf) goto L_11c39bd4;
  /* 11c39c02 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11c39c04 je 0x11c39bd0 */
  if (C.zf) goto L_11c39bd0;
  /* 11c39c06 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c39c09 jne 0x11c39bd4 */
  if (!C.zf) goto L_11c39bd4;
  /* 11c39c0b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11c39c0d je 0x11c39bd0 */
  if (C.zf) goto L_11c39bd0;
  /* 11c39c0f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c39c12 jmp 0x11c39ba0 */
  goto L_11c39ba0;
}

/* FUN_10009c14 @ 0x11c39c14 (125 bytes, 51 insns) */
void f_11c39c14(void) {
  FTRACE(0x11c39c14u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c39c14 cmp dword ptr [0x11c57e64], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c57e64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c39c1b push ebx */
  push32((uint32_t)(EBX));
  /* 11c39c1c push esi */
  push32((uint32_t)(ESI));
  /* 11c39c1d mov esi, dword ptr [0x11c5674c] */
  ESI = (r32((uint32_t)(0x11c5674c)));
  /* 11c39c23 push edi */
  push32((uint32_t)(EDI));
  /* 11c39c24 je 0x11c39c8b */
  if (C.zf) goto L_11c39c8b;
  /* 11c39c26 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c39c28 jne 0x11c39c45 */
  if (!C.zf) goto L_11c39c45;
  /* 11c39c2a cmp dword ptr [0x11c56754], esi */
  { uint32_t _a=(r32((uint32_t)(0x11c56754))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c39c30 je 0x11c39c8b */
  if (C.zf) goto L_11c39c8b;
  /* 11c39c32 call 0x11c3a4e3 */
  push32(0x11c39c37u); f_11c3a4e3();
  /* 11c39c37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c39c39 jne 0x11c39c8b */
  if (!C.zf) goto L_11c39c8b;
  /* 11c39c3b mov esi, dword ptr [0x11c5674c] */
  ESI = (r32((uint32_t)(0x11c5674c)));
  /* 11c39c41 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c39c43 je 0x11c39c8b */
  if (C.zf) goto L_11c39c8b;
L_11c39c45:;
  /* 11c39c45 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 11c39c49 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11c39c4b je 0x11c39c8b */
  if (C.zf) goto L_11c39c8b;
  /* 11c39c4d push ebx */
  push32((uint32_t)(EBX));
  /* 11c39c4e call 0x11c35da0 */
  push32(0x11c39c53u); f_11c35da0();
  /* 11c39c53 pop ecx */
  ECX = (pop32());
  /* 11c39c54 mov edi, eax */
  EDI = (EAX);
L_11c39c56:;
  /* 11c39c56 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c39c58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c39c5a je 0x11c39c8b */
  if (C.zf) goto L_11c39c8b;
  /* 11c39c5c push eax */
  push32((uint32_t)(EAX));
  /* 11c39c5d call 0x11c35da0 */
  push32(0x11c39c62u); f_11c35da0();
  /* 11c39c62 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c39c64 pop ecx */
  ECX = (pop32());
  /* 11c39c65 jbe 0x11c39c7e */
  if ((C.cf||C.zf)) goto L_11c39c7e;
  /* 11c39c67 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c39c69 cmp byte ptr [eax + edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EAX + EDI*1))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c39c6d jne 0x11c39c7e */
  if (!C.zf) goto L_11c39c7e;
  /* 11c39c6f push edi */
  push32((uint32_t)(EDI));
  /* 11c39c70 push ebx */
  push32((uint32_t)(EBX));
  /* 11c39c71 push eax */
  push32((uint32_t)(EAX));
  /* 11c39c72 call 0x11c3a4a4 */
  push32(0x11c39c77u); f_11c3a4a4();
  /* 11c39c77 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c39c7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c39c7c je 0x11c39c83 */
  if (C.zf) goto L_11c39c83;
L_11c39c7e:;
  /* 11c39c7e add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c39c81 jmp 0x11c39c56 */
  goto L_11c39c56;
L_11c39c83:;
  /* 11c39c83 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c39c85 lea eax, [eax + edi + 1] */
  EAX = ((uint32_t)(EAX + EDI*1 + 0x1));
  /* 11c39c89 jmp 0x11c39c8d */
  goto L_11c39c8d;
L_11c39c8b:;
  /* 11c39c8b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c39c8d:;
  /* 11c39c8d pop edi */
  EDI = (pop32());
  /* 11c39c8e pop esi */
  ESI = (pop32());
  /* 11c39c8f pop ebx */
  EBX = (pop32());
  /* 11c39c90 ret  */
  ESPCHK(0x11c39c14u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c91 @ 0x11c39c91 (115 bytes, 37 insns) */
void f_11c39c91(void) {
  FTRACE(0x11c39c91u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c39c91 push esi */
  push32((uint32_t)(ESI));
  /* 11c39c92 call 0x11c39d0d */
  push32(0x11c39c97u); f_11c39d0d();
  /* 11c39c97 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c39c9b xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11c39c9d mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11c39c9f mov eax, 0x11c42070 */
  EAX = (0x11c42070u);
L_11c39ca4:;
  /* 11c39ca4 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c39ca6 je 0x11c39cca */
  if (C.zf) goto L_11c39cca;
  /* 11c39ca8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c39cab inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c39cac cmp eax, 0x11c421d8 */
  { uint32_t _a=(EAX),_b=(0x11c421d8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c39cb1 jl 0x11c39ca4 */
  if ((C.sf!=C.of)) goto L_11c39ca4;
  /* 11c39cb3 cmp ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c39cb6 jb 0x11c39cda */
  if (C.cf) goto L_11c39cda;
  /* 11c39cb8 cmp ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c39cbb ja 0x11c39cda */
  if ((!C.cf&&!C.zf)) goto L_11c39cda;
  /* 11c39cbd call 0x11c39d04 */
  push32(0x11c39cc2u); f_11c39d04();
  /* 11c39cc2 mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 11c39cc8 pop esi */
  ESI = (pop32());
  /* 11c39cc9 ret  */
  ESPCHK(0x11c39c91u, _esp0);
  ESP += 4; return;
L_11c39cca:;
  /* 11c39cca call 0x11c39d04 */
  push32(0x11c39ccfu); f_11c39d04();
  /* 11c39ccf mov ecx, dword ptr [esi*8 + 0x11c42074] */
  ECX = (r32((uint32_t)(ESI*8 + 0x11c42074)));
  /* 11c39cd6 pop esi */
  ESI = (pop32());
  /* 11c39cd7 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11c39cd9 ret  */
  ESPCHK(0x11c39c91u, _esp0);
  ESP += 4; return;
L_11c39cda:;
  /* 11c39cda cmp ecx, 0xbc */
  { uint32_t _a=(ECX),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c39ce0 jb 0x11c39cf7 */
  if (C.cf) goto L_11c39cf7;
  /* 11c39ce2 cmp ecx, 0xca */
  { uint32_t _a=(ECX),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c39ce8 ja 0x11c39cf7 */
  if ((!C.cf&&!C.zf)) goto L_11c39cf7;
  /* 11c39cea call 0x11c39d04 */
  push32(0x11c39cefu); f_11c39d04();
  /* 11c39cef mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 11c39cf5 pop esi */
  ESI = (pop32());
  /* 11c39cf6 ret  */
  ESPCHK(0x11c39c91u, _esp0);
  ESP += 4; return;
L_11c39cf7:;
  /* 11c39cf7 call 0x11c39d04 */
  push32(0x11c39cfcu); f_11c39d04();
  /* 11c39cfc mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 11c39d02 pop esi */
  ESI = (pop32());
  /* 11c39d03 ret  */
  ESPCHK(0x11c39c91u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d04 @ 0x11c39d04 (9 bytes, 3 insns) */
void f_11c39d04(void) {
  FTRACE(0x11c39d04u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c39d04 call 0x11c33dee */
  push32(0x11c39d09u); f_11c33dee();
  /* 11c39d09 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c39d0c ret  */
  ESPCHK(0x11c39d04u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d0d @ 0x11c39d0d (9 bytes, 3 insns) */
void f_11c39d0d(void) {
  FTRACE(0x11c39d0du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c39d0d call 0x11c33dee */
  push32(0x11c39d12u); f_11c33dee();
  /* 11c39d12 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c39d15 ret  */
  ESPCHK(0x11c39d0du, _esp0);
  ESP += 4; return;
}

/* FUN_10009d16 @ 0x11c39d16 (127 bytes, 48 insns) */
void f_11c39d16(void) {
  FTRACE(0x11c39d16u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c39d16 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c39d1a push esi */
  push32((uint32_t)(ESI));
  /* 11c39d1b cmp ecx, dword ptr [0x11c57e60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11c57e60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c39d21 push edi */
  push32((uint32_t)(EDI));
  /* 11c39d22 jae 0x11c39d7c */
  if (!C.cf) goto L_11c39d7c;
  /* 11c39d24 mov eax, ecx */
  EAX = (ECX);
  /* 11c39d26 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11c39d29 lea edi, [eax*4 + 0x11c57d60] */
  EDI = ((uint32_t)(EAX*4 + 0x11c57d60));
  /* 11c39d30 mov eax, ecx */
  EAX = (ECX);
  /* 11c39d32 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11c39d35 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 11c39d38 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11c39d3a shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11c39d3d add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c39d3f test byte ptr [eax + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11c39d43 je 0x11c39d7c */
  if (C.zf) goto L_11c39d7c;
  /* 11c39d45 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c39d48 je 0x11c39d7c */
  if (C.zf) goto L_11c39d7c;
  /* 11c39d4a cmp dword ptr [0x11c56728], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c56728))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c39d51 jne 0x11c39d72 */
  if (!C.zf) goto L_11c39d72;
  /* 11c39d53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c39d55 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c39d57 je 0x11c39d69 */
  if (C.zf) goto L_11c39d69;
  /* 11c39d59 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c39d5a je 0x11c39d64 */
  if (C.zf) goto L_11c39d64;
  /* 11c39d5c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c39d5d jne 0x11c39d72 */
  if (!C.zf) goto L_11c39d72;
  /* 11c39d5f push eax */
  push32((uint32_t)(EAX));
  /* 11c39d60 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11c39d62 jmp 0x11c39d6c */
  goto L_11c39d6c;
L_11c39d64:;
  /* 11c39d64 push eax */
  push32((uint32_t)(EAX));
  /* 11c39d65 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11c39d67 jmp 0x11c39d6c */
  goto L_11c39d6c;
L_11c39d69:;
  /* 11c39d69 push eax */
  push32((uint32_t)(EAX));
  /* 11c39d6a push -0xa */
  push32((uint32_t)(0xfffffff6u));
L_11c39d6c:;
  /* 11c39d6c call dword ptr [0x11c3d02c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d02c))), 0x11c39d72u);
L_11c39d72:;
  /* 11c39d72 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11c39d74 or dword ptr [eax + esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*1)))|(0xffffffffu); w32((uint32_t)(EAX + ESI*1), (_r)); fl_logic(_r,32); }
  /* 11c39d78 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c39d7a jmp 0x11c39d92 */
  goto L_11c39d92;
L_11c39d7c:;
  /* 11c39d7c call 0x11c39d04 */
  push32(0x11c39d81u); f_11c39d04();
  /* 11c39d81 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11c39d87 call 0x11c39d0d */
  push32(0x11c39d8cu); f_11c39d0d();
  /* 11c39d8c and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11c39d8f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11c39d92:;
  /* 11c39d92 pop edi */
  EDI = (pop32());
  /* 11c39d93 pop esi */
  ESI = (pop32());
  /* 11c39d94 ret  */
  ESPCHK(0x11c39d16u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d95 @ 0x11c39d95 (66 bytes, 19 insns) */
void f_11c39d95(void) {
  FTRACE(0x11c39d95u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c39d95 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c39d99 cmp eax, dword ptr [0x11c57e60] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11c57e60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c39d9f jae 0x11c39dc0 */
  if (!C.cf) goto L_11c39dc0;
  /* 11c39da1 mov ecx, eax */
  ECX = (EAX);
  /* 11c39da3 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11c39da6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11c39da9 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11c39dac mov ecx, dword ptr [ecx*4 + 0x11c57d60] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11c57d60)));
  /* 11c39db3 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11c39db8 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 11c39dbb je 0x11c39dc0 */
  if (C.zf) goto L_11c39dc0;
  /* 11c39dbd mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 11c39dbf ret  */
  ESPCHK(0x11c39d95u, _esp0);
  ESP += 4; return;
L_11c39dc0:;
  /* 11c39dc0 call 0x11c39d04 */
  push32(0x11c39dc5u); f_11c39d04();
  /* 11c39dc5 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11c39dcb call 0x11c39d0d */
  push32(0x11c39dd0u); f_11c39d0d();
  /* 11c39dd0 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11c39dd3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c39dd6 ret  */
  ESPCHK(0x11c39d95u, _esp0);
  ESP += 4; return;
}

/* FUN_10009dd7 @ 0x11c39dd7 (95 bytes, 34 insns) */
void f_11c39dd7(void) {
  FTRACE(0x11c39dd7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c39dd7 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c39ddb push ebx */
  push32((uint32_t)(EBX));
  /* 11c39ddc mov ecx, eax */
  ECX = (EAX);
  /* 11c39dde and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11c39de1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11c39de4 push esi */
  push32((uint32_t)(ESI));
  /* 11c39de5 push edi */
  push32((uint32_t)(EDI));
  /* 11c39de6 mov esi, dword ptr [ecx*4 + 0x11c57d60] */
  ESI = (r32((uint32_t)(ECX*4 + 0x11c57d60)));
  /* 11c39ded lea ebx, [ecx*4 + 0x11c57d60] */
  EBX = ((uint32_t)(ECX*4 + 0x11c57d60));
  /* 11c39df4 lea edi, [eax + eax*8] */
  EDI = ((uint32_t)(EAX + EAX*8));
  /* 11c39df7 shl edi, 2 */
  EDI = (sh_shl((uint32_t)(EDI), (0x2u)&0x1f, 32));
  /* 11c39dfa add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c39dfc cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c39e00 jne 0x11c39e25 */
  if (!C.zf) goto L_11c39e25;
  /* 11c39e02 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11c39e04 call 0x11c35ff6 */
  push32(0x11c39e09u); f_11c35ff6();
  /* 11c39e09 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c39e0d pop ecx */
  ECX = (pop32());
  /* 11c39e0e jne 0x11c39e1d */
  if (!C.zf) goto L_11c39e1d;
  /* 11c39e10 lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 11c39e13 push eax */
  push32((uint32_t)(EAX));
  /* 11c39e14 call dword ptr [0x11c3d06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d06c))), 0x11c39e1au);
  /* 11c39e1a inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_11c39e1d:;
  /* 11c39e1d push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11c39e1f call 0x11c36057 */
  push32(0x11c39e24u); f_11c36057();
  /* 11c39e24 pop ecx */
  ECX = (pop32());
L_11c39e25:;
  /* 11c39e25 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11c39e27 lea eax, [eax + edi + 0xc] */
  EAX = ((uint32_t)(EAX + EDI*1 + 0xc));
  /* 11c39e2b push eax */
  push32((uint32_t)(EAX));
  /* 11c39e2c call dword ptr [0x11c3d068] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d068))), 0x11c39e32u);
  /* 11c39e32 pop edi */
  EDI = (pop32());
  /* 11c39e33 pop esi */
  ESI = (pop32());
  /* 11c39e34 pop ebx */
  EBX = (pop32());
  /* 11c39e35 ret  */
  ESPCHK(0x11c39dd7u, _esp0);
  ESP += 4; return;
}

/* FUN_10009e36 @ 0x11c39e36 (34 bytes, 10 insns) */
void f_11c39e36(void) {
  FTRACE(0x11c39e36u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c39e36 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c39e3a mov ecx, eax */
  ECX = (EAX);
  /* 11c39e3c and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11c39e3f sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11c39e42 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11c39e45 mov ecx, dword ptr [ecx*4 + 0x11c57d60] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11c57d60)));
  /* 11c39e4c lea eax, [ecx + eax*4 + 0xc] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0xc));
  /* 11c39e50 push eax */
  push32((uint32_t)(EAX));
  /* 11c39e51 call dword ptr [0x11c3d064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d064))), 0x11c39e57u);
  /* 11c39e57 ret  */
  ESPCHK(0x11c39e36u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ed9 @ 0x11c39ed9 (46 bytes, 22 insns) */
void f_11c39ed9(void) {
  FTRACE(0x11c39ed9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c39ed9 push esi */
  push32((uint32_t)(ESI));
  /* 11c39eda mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c39ede push esi */
  push32((uint32_t)(ESI));
  /* 11c39edf call 0x11c39f07 */
  push32(0x11c39ee4u); f_11c39f07();
  /* 11c39ee4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c39ee6 pop ecx */
  ECX = (pop32());
  /* 11c39ee7 je 0x11c39eee */
  if (C.zf) goto L_11c39eee;
  /* 11c39ee9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c39eec pop esi */
  ESI = (pop32());
  /* 11c39eed ret  */
  ESPCHK(0x11c39ed9u, _esp0);
  ESP += 4; return;
L_11c39eee:;
  /* 11c39eee test byte ptr [esi + 0xd], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xd)))&(0x40u); fl_logic(_r,8); }
  /* 11c39ef2 je 0x11c39f03 */
  if (C.zf) goto L_11c39f03;
  /* 11c39ef4 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11c39ef7 call 0x11c3a5ce */
  push32(0x11c39efcu); f_11c3a5ce();
  /* 11c39efc neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c39efe pop ecx */
  ECX = (pop32());
  /* 11c39eff pop esi */
  ESI = (pop32());
  /* 11c39f00 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c39f02 ret  */
  ESPCHK(0x11c39ed9u, _esp0);
  ESP += 4; return;
L_11c39f03:;
  /* 11c39f03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c39f05 pop esi */
  ESI = (pop32());
  /* 11c39f06 ret  */
  ESPCHK(0x11c39ed9u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f07 @ 0x11c39f07 (92 bytes, 40 insns) */
void f_11c39f07(void) {
  FTRACE(0x11c39f07u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c39f07 push ebx */
  push32((uint32_t)(EBX));
  /* 11c39f08 push esi */
  push32((uint32_t)(ESI));
  /* 11c39f09 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11c39f0d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c39f0f push edi */
  push32((uint32_t)(EDI));
  /* 11c39f10 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11c39f13 mov ecx, eax */
  ECX = (EAX);
  /* 11c39f15 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11c39f18 cmp cl, 2 */
  { uint32_t _a=(CL),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c39f1b jne 0x11c39f54 */
  if (!C.zf) goto L_11c39f54;
  /* 11c39f1d test ax, 0x108 */
  { uint32_t _r=(AX)&(0x108u); fl_logic(_r,16); }
  /* 11c39f21 je 0x11c39f54 */
  if (C.zf) goto L_11c39f54;
  /* 11c39f23 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 11c39f26 mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 11c39f28 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c39f2a test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11c39f2c jle 0x11c39f54 */
  if ((C.zf||C.sf!=C.of)) goto L_11c39f54;
  /* 11c39f2e push edi */
  push32((uint32_t)(EDI));
  /* 11c39f2f push eax */
  push32((uint32_t)(EAX));
  /* 11c39f30 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11c39f33 call 0x11c37f30 */
  push32(0x11c39f38u); f_11c37f30();
  /* 11c39f38 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c39f3b cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c39f3d jne 0x11c39f4d */
  if (!C.zf) goto L_11c39f4d;
  /* 11c39f3f mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11c39f42 test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 11c39f44 je 0x11c39f54 */
  if (C.zf) goto L_11c39f54;
  /* 11c39f46 and al, 0xfd */
  { uint32_t _r=(AL)&(0xfdu); AL = (_r); fl_logic(_r,8); }
  /* 11c39f48 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11c39f4b jmp 0x11c39f54 */
  goto L_11c39f54;
L_11c39f4d:;
  /* 11c39f4d or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 11c39f51 or ebx, 0xffffffff */
  { uint32_t _r=(EBX)|(0xffffffffu); EBX = (_r); fl_logic(_r,32); }
L_11c39f54:;
  /* 11c39f54 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 11c39f57 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11c39f5b mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11c39f5d pop edi */
  EDI = (pop32());
  /* 11c39f5e mov eax, ebx */
  EAX = (EBX);
  /* 11c39f60 pop esi */
  ESI = (pop32());
  /* 11c39f61 pop ebx */
  EBX = (pop32());
  /* 11c39f62 ret  */
  ESPCHK(0x11c39f07u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f6c @ 0x11c39f6c (164 bytes, 66 insns) */
void f_11c39f6c(void) {
  FTRACE(0x11c39f6cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c39f6c push ebx */
  push32((uint32_t)(EBX));
  /* 11c39f6d push esi */
  push32((uint32_t)(ESI));
  /* 11c39f6e push edi */
  push32((uint32_t)(EDI));
  /* 11c39f6f push 2 */
  push32((uint32_t)(0x2u));
  /* 11c39f71 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c39f73 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11c39f75 call 0x11c35ff6 */
  push32(0x11c39f7au); f_11c35ff6();
  /* 11c39f7a xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11c39f7c pop ecx */
  ECX = (pop32());
  /* 11c39f7d cmp dword ptr [0x11c57d20], esi */
  { uint32_t _a=(r32((uint32_t)(0x11c57d20))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c39f83 jle 0x11c39ff9 */
  if ((C.zf||C.sf!=C.of)) goto L_11c39ff9;
L_11c39f85:;
  /* 11c39f85 mov eax, dword ptr [0x11c56d08] */
  EAX = (r32((uint32_t)(0x11c56d08)));
  /* 11c39f8a mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 11c39f8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c39f8f je 0x11c39ff0 */
  if (C.zf) goto L_11c39ff0;
  /* 11c39f91 test byte ptr [eax + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 11c39f95 je 0x11c39ff0 */
  if (C.zf) goto L_11c39ff0;
  /* 11c39f97 push eax */
  push32((uint32_t)(EAX));
  /* 11c39f98 push esi */
  push32((uint32_t)(ESI));
  /* 11c39f99 call 0x11c3820b */
  push32(0x11c39f9eu); f_11c3820b();
  /* 11c39f9e mov eax, dword ptr [0x11c56d08] */
  EAX = (r32((uint32_t)(0x11c56d08)));
  /* 11c39fa3 pop ecx */
  ECX = (pop32());
  /* 11c39fa4 pop ecx */
  ECX = (pop32());
  /* 11c39fa5 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 11c39fa8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11c39fab test cl, 0x83 */
  { uint32_t _r=(CL)&(0x83u); fl_logic(_r,8); }
  /* 11c39fae je 0x11c39fe0 */
  if (C.zf) goto L_11c39fe0;
  /* 11c39fb0 cmp dword ptr [esp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c39fb5 jne 0x11c39fc6 */
  if (!C.zf) goto L_11c39fc6;
  /* 11c39fb7 push eax */
  push32((uint32_t)(EAX));
  /* 11c39fb8 call 0x11c39ed9 */
  push32(0x11c39fbdu); f_11c39ed9();
  /* 11c39fbd cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c39fc0 pop ecx */
  ECX = (pop32());
  /* 11c39fc1 je 0x11c39fe0 */
  if (C.zf) goto L_11c39fe0;
  /* 11c39fc3 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11c39fc4 jmp 0x11c39fe0 */
  goto L_11c39fe0;
L_11c39fc6:;
  /* 11c39fc6 cmp dword ptr [esp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c39fcb jne 0x11c39fe0 */
  if (!C.zf) goto L_11c39fe0;
  /* 11c39fcd test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 11c39fd0 je 0x11c39fe0 */
  if (C.zf) goto L_11c39fe0;
  /* 11c39fd2 push eax */
  push32((uint32_t)(EAX));
  /* 11c39fd3 call 0x11c39ed9 */
  push32(0x11c39fd8u); f_11c39ed9();
  /* 11c39fd8 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c39fdb pop ecx */
  ECX = (pop32());
  /* 11c39fdc jne 0x11c39fe0 */
  if (!C.zf) goto L_11c39fe0;
  /* 11c39fde or edi, eax */
  { uint32_t _r=(EDI)|(EAX); EDI = (_r); fl_logic(_r,32); }
L_11c39fe0:;
  /* 11c39fe0 mov eax, dword ptr [0x11c56d08] */
  EAX = (r32((uint32_t)(0x11c56d08)));
  /* 11c39fe5 push dword ptr [eax + esi*4] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*4))));
  /* 11c39fe8 push esi */
  push32((uint32_t)(ESI));
  /* 11c39fe9 call 0x11c3825d */
  push32(0x11c39feeu); f_11c3825d();
  /* 11c39fee pop ecx */
  ECX = (pop32());
  /* 11c39fef pop ecx */
  ECX = (pop32());
L_11c39ff0:;
  /* 11c39ff0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c39ff1 cmp esi, dword ptr [0x11c57d20] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11c57d20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c39ff7 jl 0x11c39f85 */
  if ((C.sf!=C.of)) goto L_11c39f85;
L_11c39ff9:;
  /* 11c39ff9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c39ffb call 0x11c36057 */
  push32(0x11c3a000u); f_11c36057();
  /* 11c3a000 cmp dword ptr [esp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3a005 pop ecx */
  ECX = (pop32());
  /* 11c3a006 mov eax, ebx */
  EAX = (EBX);
  /* 11c3a008 je 0x11c3a00c */
  if (C.zf) goto L_11c3a00c;
  /* 11c3a00a mov eax, edi */
  EAX = (EDI);
L_11c3a00c:;
  /* 11c3a00c pop edi */
  EDI = (pop32());
  /* 11c3a00d pop esi */
  ESI = (pop32());
  /* 11c3a00e pop ebx */
  EBX = (pop32());
  /* 11c3a00f ret  */
  ESPCHK(0x11c39f6cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a010 @ 0x11c3a010 (111 bytes, 44 insns) */
void f_11c3a010(void) {
  FTRACE(0x11c3a010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3a010 push ebx */
  push32((uint32_t)(EBX));
  /* 11c3a011 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c3a013 cmp dword ptr [0x11c569e8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11c569e8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3a019 jne 0x11c3a02e */
  if (!C.zf) goto L_11c3a02e;
  /* 11c3a01b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c3a01f cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3a022 jl 0x11c3a07d */
  if ((C.sf!=C.of)) goto L_11c3a07d;
  /* 11c3a024 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3a027 jg 0x11c3a07d */
  if ((!C.zf&&C.sf==C.of)) goto L_11c3a07d;
  /* 11c3a029 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3a02c pop ebx */
  EBX = (pop32());
  /* 11c3a02d ret  */
  ESPCHK(0x11c3a010u, _esp0);
  ESP += 4; return;
L_11c3a02e:;
  /* 11c3a02e push esi */
  push32((uint32_t)(ESI));
  /* 11c3a02f mov esi, 0x11c56ad0 */
  ESI = (0x11c56ad0u);
  /* 11c3a034 push edi */
  push32((uint32_t)(EDI));
  /* 11c3a035 push esi */
  push32((uint32_t)(ESI));
  /* 11c3a036 call dword ptr [0x11c3d070] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d070))), 0x11c3a03cu);
  /* 11c3a03c cmp dword ptr [0x11c56acc], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11c56acc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3a042 mov edi, dword ptr [0x11c3d074] */
  EDI = (r32((uint32_t)(0x11c3d074)));
  /* 11c3a048 je 0x11c3a058 */
  if (C.zf) goto L_11c3a058;
  /* 11c3a04a push esi */
  push32((uint32_t)(ESI));
  /* 11c3a04b call edi */
  call_ind((uint32_t)(EDI), 0x11c3a04du);
  /* 11c3a04d push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11c3a04f call 0x11c35ff6 */
  push32(0x11c3a054u); f_11c35ff6();
  /* 11c3a054 pop ecx */
  ECX = (pop32());
  /* 11c3a055 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3a057 pop ebx */
  EBX = (pop32());
L_11c3a058:;
  /* 11c3a058 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11c3a05c call 0x11c3a07f */
  push32(0x11c3a061u); f_11c3a07f();
  /* 11c3a061 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11c3a063 pop ecx */
  ECX = (pop32());
  /* 11c3a064 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11c3a068 je 0x11c3a074 */
  if (C.zf) goto L_11c3a074;
  /* 11c3a06a push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11c3a06c call 0x11c36057 */
  push32(0x11c3a071u); f_11c36057();
  /* 11c3a071 pop ecx */
  ECX = (pop32());
  /* 11c3a072 jmp 0x11c3a077 */
  goto L_11c3a077;
L_11c3a074:;
  /* 11c3a074 push esi */
  push32((uint32_t)(ESI));
  /* 11c3a075 call edi */
  call_ind((uint32_t)(EDI), 0x11c3a077u);
L_11c3a077:;
  /* 11c3a077 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11c3a07b pop edi */
  EDI = (pop32());
  /* 11c3a07c pop esi */
  ESI = (pop32());
L_11c3a07d:;
  /* 11c3a07d pop ebx */
  EBX = (pop32());
  /* 11c3a07e ret  */
  ESPCHK(0x11c3a010u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a07f @ 0x11c3a07f (204 bytes, 71 insns) */
void f_11c3a07f(void) {
  FTRACE(0x11c3a07fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3a07f push ebp */
  push32((uint32_t)(EBP));
  /* 11c3a080 mov ebp, esp */
  EBP = (ESP);
  /* 11c3a082 push ecx */
  push32((uint32_t)(ECX));
  /* 11c3a083 cmp dword ptr [0x11c569e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c569e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3a08a push ebx */
  push32((uint32_t)(EBX));
  /* 11c3a08b jne 0x11c3a0aa */
  if (!C.zf) goto L_11c3a0aa;
  /* 11c3a08d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c3a090 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3a093 jl 0x11c3a148 */
  if ((C.sf!=C.of)) goto L_11c3a148;
  /* 11c3a099 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3a09c jg 0x11c3a148 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c3a148;
  /* 11c3a0a2 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3a0a5 jmp 0x11c3a148 */
  goto L_11c3a148;
L_11c3a0aa:;
  /* 11c3a0aa mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c3a0ad cmp ebx, 0x100 */
  { uint32_t _a=(EBX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3a0b3 jge 0x11c3a0dd */
  if ((C.sf==C.of)) goto L_11c3a0dd;
  /* 11c3a0b5 cmp dword ptr [0x11c3f6f8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c3f6f8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3a0bc jle 0x11c3a0ca */
  if ((C.zf||C.sf!=C.of)) goto L_11c3a0ca;
  /* 11c3a0be push 2 */
  push32((uint32_t)(0x2u));
  /* 11c3a0c0 push ebx */
  push32((uint32_t)(EBX));
  /* 11c3a0c1 call 0x11c351e0 */
  push32(0x11c3a0c6u); f_11c351e0();
  /* 11c3a0c6 pop ecx */
  ECX = (pop32());
  /* 11c3a0c7 pop ecx */
  ECX = (pop32());
  /* 11c3a0c8 jmp 0x11c3a0d5 */
  goto L_11c3a0d5;
L_11c3a0ca:;
  /* 11c3a0ca mov eax, dword ptr [0x11c3f704] */
  EAX = (r32((uint32_t)(0x11c3f704)));
  /* 11c3a0cf mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 11c3a0d2 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
L_11c3a0d5:;
  /* 11c3a0d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3a0d7 jne 0x11c3a0dd */
  if (!C.zf) goto L_11c3a0dd;
L_11c3a0d9:;
  /* 11c3a0d9 mov eax, ebx */
  EAX = (EBX);
  /* 11c3a0db jmp 0x11c3a148 */
  goto L_11c3a148;
L_11c3a0dd:;
  /* 11c3a0dd mov edx, dword ptr [0x11c3f704] */
  EDX = (r32((uint32_t)(0x11c3f704)));
  /* 11c3a0e3 mov eax, ebx */
  EAX = (EBX);
  /* 11c3a0e5 sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11c3a0e8 movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 11c3a0eb test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 11c3a0f0 je 0x11c3a100 */
  if (C.zf) goto L_11c3a100;
  /* 11c3a0f2 and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 11c3a0f6 mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 11c3a0f9 mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 11c3a0fc push 2 */
  push32((uint32_t)(0x2u));
  /* 11c3a0fe jmp 0x11c3a109 */
  goto L_11c3a109;
L_11c3a100:;
  /* 11c3a100 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 11c3a104 mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 11c3a107 push 1 */
  push32((uint32_t)(0x1u));
L_11c3a109:;
  /* 11c3a109 pop eax */
  EAX = (pop32());
  /* 11c3a10a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11c3a10d push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3a10f push 0 */
  push32((uint32_t)(0x0u));
  /* 11c3a111 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c3a113 push ecx */
  push32((uint32_t)(ECX));
  /* 11c3a114 push eax */
  push32((uint32_t)(EAX));
  /* 11c3a115 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11c3a118 push eax */
  push32((uint32_t)(EAX));
  /* 11c3a119 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11c3a11e push dword ptr [0x11c569e8] */
  push32((uint32_t)(r32((uint32_t)(0x11c569e8))));
  /* 11c3a124 call 0x11c38fd6 */
  push32(0x11c3a129u); f_11c38fd6();
  /* 11c3a129 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3a12c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3a12e je 0x11c3a0d9 */
  if (C.zf) goto L_11c3a0d9;
  /* 11c3a130 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3a133 jne 0x11c3a13b */
  if (!C.zf) goto L_11c3a13b;
  /* 11c3a135 movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11c3a139 jmp 0x11c3a148 */
  goto L_11c3a148;
L_11c3a13b:;
  /* 11c3a13b movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 11c3a13f movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11c3a143 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11c3a146 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11c3a148:;
  /* 11c3a148 pop ebx */
  EBX = (pop32());
  /* 11c3a149 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c3a14a ret  */
  ESPCHK(0x11c3a07fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a150 @ 0x11c3a150 (62 bytes, 35 insns) */
void f_11c3a150(void) {
  FTRACE(0x11c3a150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3a150 push ebp */
  push32((uint32_t)(EBP));
  /* 11c3a151 mov ebp, esp */
  EBP = (ESP);
  /* 11c3a153 push esi */
  push32((uint32_t)(ESI));
  /* 11c3a154 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c3a156 push eax */
  push32((uint32_t)(EAX));
  /* 11c3a157 push eax */
  push32((uint32_t)(EAX));
  /* 11c3a158 push eax */
  push32((uint32_t)(EAX));
  /* 11c3a159 push eax */
  push32((uint32_t)(EAX));
  /* 11c3a15a push eax */
  push32((uint32_t)(EAX));
  /* 11c3a15b push eax */
  push32((uint32_t)(EAX));
  /* 11c3a15c push eax */
  push32((uint32_t)(EAX));
  /* 11c3a15d push eax */
  push32((uint32_t)(EAX));
  /* 11c3a15e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c3a161 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c3a164:;
  /* 11c3a164 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11c3a166 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11c3a168 je 0x11c3a171 */
  if (C.zf) goto L_11c3a171;
  /* 11c3a16a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11c3a16b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11c3a16b");
  /* 11c3a16f jmp 0x11c3a164 */
  goto L_11c3a164;
L_11c3a171:;
  /* 11c3a171 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c3a174 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11c3a177 nop  */
  /* nop */
L_11c3a178:;
  /* 11c3a178 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c3a179 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c3a17b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11c3a17d je 0x11c3a186 */
  if (C.zf) goto L_11c3a186;
  /* 11c3a17f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c3a180 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11c3a180");
  /* 11c3a184 jae 0x11c3a178 */
  if (!C.cf) goto L_11c3a178;
L_11c3a186:;
  /* 11c3a186 mov eax, ecx */
  EAX = (ECX);
  /* 11c3a188 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3a18b pop esi */
  ESI = (pop32());
  /* 11c3a18c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c3a18d ret  */
  ESPCHK(0x11c3a150u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a190 @ 0x11c3a190 (58 bytes, 32 insns) */
void f_11c3a190(void) {
  FTRACE(0x11c3a190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3a190 push ebp */
  push32((uint32_t)(EBP));
  /* 11c3a191 mov ebp, esp */
  EBP = (ESP);
  /* 11c3a193 push esi */
  push32((uint32_t)(ESI));
  /* 11c3a194 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c3a196 push eax */
  push32((uint32_t)(EAX));
  /* 11c3a197 push eax */
  push32((uint32_t)(EAX));
  /* 11c3a198 push eax */
  push32((uint32_t)(EAX));
  /* 11c3a199 push eax */
  push32((uint32_t)(EAX));
  /* 11c3a19a push eax */
  push32((uint32_t)(EAX));
  /* 11c3a19b push eax */
  push32((uint32_t)(EAX));
  /* 11c3a19c push eax */
  push32((uint32_t)(EAX));
  /* 11c3a19d push eax */
  push32((uint32_t)(EAX));
  /* 11c3a19e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c3a1a1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c3a1a4:;
  /* 11c3a1a4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11c3a1a6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11c3a1a8 je 0x11c3a1b1 */
  if (C.zf) goto L_11c3a1b1;
  /* 11c3a1aa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11c3a1ab bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11c3a1ab");
  /* 11c3a1af jmp 0x11c3a1a4 */
  goto L_11c3a1a4;
L_11c3a1b1:;
  /* 11c3a1b1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_11c3a1b4:;
  /* 11c3a1b4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c3a1b6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11c3a1b8 je 0x11c3a1c4 */
  if (C.zf) goto L_11c3a1c4;
  /* 11c3a1ba inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c3a1bb bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11c3a1bb");
  /* 11c3a1bf jae 0x11c3a1b4 */
  if (!C.cf) goto L_11c3a1b4;
  /* 11c3a1c1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_11c3a1c4:;
  /* 11c3a1c4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3a1c7 pop esi */
  ESI = (pop32());
  /* 11c3a1c8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c3a1c9 ret  */
  ESPCHK(0x11c3a190u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1ca @ 0x11c3a1ca (544 bytes, 177 insns) */
void f_11c3a1ca(void) {
  FTRACE(0x11c3a1cau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3a1ca push ebp */
  push32((uint32_t)(EBP));
  /* 11c3a1cb mov ebp, esp */
  EBP = (ESP);
  /* 11c3a1cd sub esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3a1d0 push ebx */
  push32((uint32_t)(EBX));
  /* 11c3a1d1 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c3a1d4 push esi */
  push32((uint32_t)(ESI));
  /* 11c3a1d5 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c3a1d8 mov cx, word ptr [ebx + 0xa] */
  CX = (r16((uint32_t)(EBX + 0xa)));
  /* 11c3a1dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c3a1de push edi */
  push32((uint32_t)(EDI));
  /* 11c3a1df mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11c3a1e2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11c3a1e5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11c3a1e8 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11c3a1eb mov ax, word ptr [esi + 0xa] */
  AX = (r16((uint32_t)(ESI + 0xa)));
  /* 11c3a1ef mov edi, ecx */
  EDI = (ECX);
  /* 11c3a1f1 mov edx, 0x7fff */
  EDX = (0x7fffu);
  /* 11c3a1f6 xor edi, eax */
  { uint32_t _r=(EDI)^(EAX); EDI = (_r); fl_logic(_r,32); }
  /* 11c3a1f8 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11c3a1fa and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11c3a1fc and edi, 0x8000 */
  { uint32_t _r=(EDI)&(0x8000u); EDI = (_r); fl_logic(_r,32); }
  /* 11c3a202 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c3a206 lea edx, [ecx + eax] */
  EDX = ((uint32_t)(ECX + EAX*1));
  /* 11c3a209 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11c3a20c jae 0x11c3a3ca */
  if (!C.cf) goto L_11c3a3ca;
  /* 11c3a212 cmp cx, 0x7fff */
  { uint32_t _a=(CX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c3a217 jae 0x11c3a3ca */
  if (!C.cf) goto L_11c3a3ca;
  /* 11c3a21d cmp dx, 0xbffd */
  { uint32_t _a=(DX),_b=(0xbffdu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c3a222 ja 0x11c3a3ca */
  if ((!C.cf&&!C.zf)) goto L_11c3a3ca;
  /* 11c3a228 cmp dx, 0x3fbf */
  { uint32_t _a=(DX),_b=(0x3fbfu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c3a22d ja 0x11c3a233 */
  if ((!C.cf&&!C.zf)) goto L_11c3a233;
  /* 11c3a22f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c3a231 jmp 0x11c3a26d */
  goto L_11c3a26d;
L_11c3a233:;
  /* 11c3a233 test ax, ax */
  { uint32_t _r=(AX)&(AX); fl_logic(_r,16); }
  /* 11c3a236 mov edx, 0x7fffffff */
  EDX = (0x7fffffffu);
  /* 11c3a23b jne 0x11c3a255 */
  if (!C.zf) goto L_11c3a255;
  /* 11c3a23d inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 11c3a240 test dword ptr [esi + 8], edx */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 11c3a243 jne 0x11c3a255 */
  if (!C.zf) goto L_11c3a255;
  /* 11c3a245 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c3a247 cmp dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3a24a jne 0x11c3a257 */
  if (!C.zf) goto L_11c3a257;
  /* 11c3a24c cmp dword ptr [esi], eax */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3a24e jne 0x11c3a257 */
  if (!C.zf) goto L_11c3a257;
  /* 11c3a250 jmp 0x11c3a3c4 */
  goto L_11c3a3c4;
L_11c3a255:;
  /* 11c3a255 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c3a257:;
  /* 11c3a257 cmp cx, ax */
  { uint32_t _a=(CX),_b=(AX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c3a25a jne 0x11c3a27a */
  if (!C.zf) goto L_11c3a27a;
  /* 11c3a25c inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 11c3a25f test dword ptr [ebx + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 11c3a262 jne 0x11c3a27a */
  if (!C.zf) goto L_11c3a27a;
  /* 11c3a264 cmp dword ptr [ebx + 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3a267 jne 0x11c3a27a */
  if (!C.zf) goto L_11c3a27a;
  /* 11c3a269 cmp dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3a26b jne 0x11c3a27a */
  if (!C.zf) goto L_11c3a27a;
L_11c3a26d:;
  /* 11c3a26d mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 11c3a270 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 11c3a273 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11c3a275 jmp 0x11c3a3e5 */
  goto L_11c3a3e5;
L_11c3a27a:;
  /* 11c3a27a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11c3a27d lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11c3a280 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11c3a283 mov dword ptr [ebp + 0xc], 5 */
  w32((uint32_t)(EBP + 0xc), (0x5u));
L_11c3a28a:;
  /* 11c3a28a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11c3a28d add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3a28f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3a293 jle 0x11c3a2de */
  if ((C.zf||C.sf!=C.of)) goto L_11c3a2de;
  /* 11c3a295 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3a297 lea ecx, [ebx + 8] */
  ECX = ((uint32_t)(EBX + 0x8));
  /* 11c3a29a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11c3a29d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c3a2a0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11c3a2a3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11c3a2a6:;
  /* 11c3a2a6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11c3a2a9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11c3a2ac movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 11c3a2af movzx ecx, word ptr [ecx] */
  ECX = ((uint32_t)(r16((uint32_t)(ECX))));
  /* 11c3a2b2 imul eax, ecx */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c3a2b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c3a2b8 add ecx, -4 */
  { uint32_t _a=(ECX),_b=(0xfffffffcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3a2bb push ecx */
  push32((uint32_t)(ECX));
  /* 11c3a2bc push eax */
  push32((uint32_t)(EAX));
  /* 11c3a2bd push dword ptr [ecx] */
  push32((uint32_t)(r32((uint32_t)(ECX))));
  /* 11c3a2bf call 0x11c391fa */
  push32(0x11c3a2c4u); f_11c391fa();
  /* 11c3a2c4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3a2c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3a2c9 je 0x11c3a2d1 */
  if (C.zf) goto L_11c3a2d1;
  /* 11c3a2cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c3a2ce inc word ptr [eax] */
  { uint32_t _r=(r16((uint32_t)(EAX)))+1; w16((uint32_t)(EAX), (_r)); fl_inc(_r,16); }
L_11c3a2d1:;
  /* 11c3a2d1 add dword ptr [ebp - 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c3a2d5 sub dword ptr [ebp - 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2u),_r=_a-_b; w32((uint32_t)(EBP + -0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11c3a2d9 dec dword ptr [ebp - 0x18] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))-1; w32((uint32_t)(EBP + -0x18), (_r)); fl_dec(_r,32); }
  /* 11c3a2dc jne 0x11c3a2a6 */
  if (!C.zf) goto L_11c3a2a6;
L_11c3a2de:;
  /* 11c3a2de add dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c3a2e2 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 11c3a2e5 dec dword ptr [ebp + 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))-1; w32((uint32_t)(EBP + 0xc), (_r)); fl_dec(_r,32); }
  /* 11c3a2e8 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3a2ec jg 0x11c3a28a */
  if ((!C.zf&&C.sf==C.of)) goto L_11c3a28a;
  /* 11c3a2ee add dword ptr [ebp + 8], 0xc002 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xc002u),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c3a2f5 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c3a2fa jle 0x11c3a321 */
  if ((C.zf||C.sf!=C.of)) goto L_11c3a321;
L_11c3a2fc:;
  /* 11c3a2fc test byte ptr [ebp - 0x19], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x19)))&(0x80u); fl_logic(_r,8); }
  /* 11c3a300 jne 0x11c3a31a */
  if (!C.zf) goto L_11c3a31a;
  /* 11c3a302 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 11c3a305 push eax */
  push32((uint32_t)(EAX));
  /* 11c3a306 call 0x11c39279 */
  push32(0x11c3a30bu); f_11c39279();
  /* 11c3a30b add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c3a312 pop ecx */
  ECX = (pop32());
  /* 11c3a313 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c3a318 jg 0x11c3a2fc */
  if ((!C.zf&&C.sf==C.of)) goto L_11c3a2fc;
L_11c3a31a:;
  /* 11c3a31a cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c3a31f jg 0x11c3a35a */
  if ((!C.zf&&C.sf==C.of)) goto L_11c3a35a;
L_11c3a321:;
  /* 11c3a321 add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c3a328 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c3a32d jge 0x11c3a35a */
  if ((C.sf==C.of)) goto L_11c3a35a;
  /* 11c3a32f movsx eax, word ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + 0x8))));
  /* 11c3a333 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c3a335 add dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c3a338 mov ebx, eax */
  EBX = (EAX);
L_11c3a33a:;
  /* 11c3a33a test byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))&(0x1u); fl_logic(_r,8); }
  /* 11c3a33e je 0x11c3a343 */
  if (C.zf) goto L_11c3a343;
  /* 11c3a340 inc dword ptr [ebp - 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x14)))+1; w32((uint32_t)(EBP + -0x14), (_r)); fl_inc(_r,32); }
L_11c3a343:;
  /* 11c3a343 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 11c3a346 push eax */
  push32((uint32_t)(EAX));
  /* 11c3a347 call 0x11c392a7 */
  push32(0x11c3a34cu); f_11c392a7();
  /* 11c3a34c dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11c3a34d pop ecx */
  ECX = (pop32());
  /* 11c3a34e jne 0x11c3a33a */
  if (!C.zf) goto L_11c3a33a;
  /* 11c3a350 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3a354 je 0x11c3a35a */
  if (C.zf) goto L_11c3a35a;
  /* 11c3a356 or byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))|(0x1u); w8((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,8); }
L_11c3a35a:;
  /* 11c3a35a cmp word ptr [ebp - 0x24], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x24))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c3a360 ja 0x11c3a371 */
  if ((!C.cf&&!C.zf)) goto L_11c3a371;
  /* 11c3a362 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11c3a365 and eax, 0x1ffff */
  { uint32_t _r=(EAX)&(0x1ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c3a36a cmp eax, 0x18000 */
  { uint32_t _a=(EAX),_b=(0x18000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3a36f jne 0x11c3a3a6 */
  if (!C.zf) goto L_11c3a3a6;
L_11c3a371:;
  /* 11c3a371 cmp dword ptr [ebp - 0x22], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3a375 jne 0x11c3a3a3 */
  if (!C.zf) goto L_11c3a3a3;
  /* 11c3a377 and dword ptr [ebp - 0x22], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))&(0x0u); w32((uint32_t)(EBP + -0x22), (_r)); fl_logic(_r,32); }
  /* 11c3a37b cmp dword ptr [ebp - 0x1e], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1e))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3a37f jne 0x11c3a39e */
  if (!C.zf) goto L_11c3a39e;
  /* 11c3a381 and dword ptr [ebp - 0x1e], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))&(0x0u); w32((uint32_t)(EBP + -0x1e), (_r)); fl_logic(_r,32); }
  /* 11c3a385 cmp word ptr [ebp - 0x1a], 0xffff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x1a))),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c3a38b jne 0x11c3a398 */
  if (!C.zf) goto L_11c3a398;
  /* 11c3a38d inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 11c3a390 mov word ptr [ebp - 0x1a], 0x8000 */
  w16((uint32_t)(EBP + -0x1a), (0x8000u));
  /* 11c3a396 jmp 0x11c3a3a6 */
  goto L_11c3a3a6;
L_11c3a398:;
  /* 11c3a398 inc word ptr [ebp - 0x1a] */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x1a)))+1; w16((uint32_t)(EBP + -0x1a), (_r)); fl_inc(_r,16); }
  /* 11c3a39c jmp 0x11c3a3a6 */
  goto L_11c3a3a6;
L_11c3a39e:;
  /* 11c3a39e inc dword ptr [ebp - 0x1e] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))+1; w32((uint32_t)(EBP + -0x1e), (_r)); fl_inc(_r,32); }
  /* 11c3a3a1 jmp 0x11c3a3a6 */
  goto L_11c3a3a6;
L_11c3a3a3:;
  /* 11c3a3a3 inc dword ptr [ebp - 0x22] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))+1; w32((uint32_t)(EBP + -0x22), (_r)); fl_inc(_r,32); }
L_11c3a3a6:;
  /* 11c3a3a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c3a3a9 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c3a3ad jae 0x11c3a3ca */
  if (!C.cf) goto L_11c3a3ca;
  /* 11c3a3af mov cx, word ptr [ebp - 0x22] */
  CX = (r16((uint32_t)(EBP + -0x22)));
  /* 11c3a3b3 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 11c3a3b5 mov word ptr [esi], cx */
  w16((uint32_t)(ESI), (CX));
  /* 11c3a3b8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11c3a3bb mov dword ptr [esi + 2], ecx */
  w32((uint32_t)(ESI + 0x2), (ECX));
  /* 11c3a3be mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11c3a3c1 mov dword ptr [esi + 6], ecx */
  w32((uint32_t)(ESI + 0x6), (ECX));
L_11c3a3c4:;
  /* 11c3a3c4 mov word ptr [esi + 0xa], ax */
  w16((uint32_t)(ESI + 0xa), (AX));
  /* 11c3a3c8 jmp 0x11c3a3e5 */
  goto L_11c3a3e5;
L_11c3a3ca:;
  /* 11c3a3ca neg di */
  { uint32_t _a=(DI),_r=0u-_a; DI = (_r); fl_sub(0,_a,_r,16); }
  /* 11c3a3cd sbb edi, edi */
  { uint32_t _a=(EDI),_b=(EDI),_r=_a-_b-C.cf; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3a3cf and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11c3a3d3 and edi, 0x80000000 */
  { uint32_t _r=(EDI)&(0x80000000u); EDI = (_r); fl_logic(_r,32); }
  /* 11c3a3d9 add edi, 0x7fff8000 */
  { uint32_t _a=(EDI),_b=(0x7fff8000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3a3df and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11c3a3e2 mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
L_11c3a3e5:;
  /* 11c3a3e5 pop edi */
  EDI = (pop32());
  /* 11c3a3e6 pop esi */
  ESI = (pop32());
  /* 11c3a3e7 pop ebx */
  EBX = (pop32());
  /* 11c3a3e8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c3a3e9 ret  */
  ESPCHK(0x11c3a1cau, _esp0);
  ESP += 4; return;
}

/* FUN_1000a3ea @ 0x11c3a3ea (124 bytes, 52 insns) */
void f_11c3a3ea(void) {
  FTRACE(0x11c3a3eau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3a3ea push ebp */
  push32((uint32_t)(EBP));
  /* 11c3a3eb mov ebp, esp */
  EBP = (ESP);
  /* 11c3a3ed sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3a3f0 push ebx */
  push32((uint32_t)(EBX));
  /* 11c3a3f1 mov ebx, 0x11c422e0 */
  EBX = (0x11c422e0u);
  /* 11c3a3f6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11c3a3f8 sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3a3fb cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3a3fe je 0x11c3a463 */
  if (C.zf) goto L_11c3a463;
  /* 11c3a400 jge 0x11c3a412 */
  if ((C.sf==C.of)) goto L_11c3a412;
  /* 11c3a402 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c3a405 mov ebx, 0x11c42440 */
  EBX = (0x11c42440u);
  /* 11c3a40a neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c3a40c mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11c3a40f sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
L_11c3a412:;
  /* 11c3a412 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3a415 jne 0x11c3a41d */
  if (!C.zf) goto L_11c3a41d;
  /* 11c3a417 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c3a41a mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
L_11c3a41d:;
  /* 11c3a41d cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3a420 je 0x11c3a463 */
  if (C.zf) goto L_11c3a463;
  /* 11c3a422 push esi */
  push32((uint32_t)(ESI));
  /* 11c3a423 push edi */
  push32((uint32_t)(EDI));
L_11c3a424:;
  /* 11c3a424 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c3a427 add ebx, 0x54 */
  { uint32_t _a=(EBX),_b=(0x54u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3a42a sar dword ptr [ebp + 0xc], 3 */
  w32((uint32_t)(EBP + 0xc), (sh_sar((uint32_t)(r32((uint32_t)(EBP + 0xc))), (0x3u)&0x1f, 32)));
  /* 11c3a42e and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 11c3a431 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3a433 je 0x11c3a45c */
  if (C.zf) goto L_11c3a45c;
  /* 11c3a435 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 11c3a438 cmp word ptr [ebx + eax*4], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBX + EAX*4))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c3a43e lea esi, [ebx + eax*4] */
  ESI = ((uint32_t)(EBX + EAX*4));
  /* 11c3a441 jb 0x11c3a44f */
  if (C.cf) goto L_11c3a44f;
  /* 11c3a443 lea edi, [ebp - 0xc] */
  EDI = ((uint32_t)(EBP + -0xc));
  /* 11c3a446 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11c3a447 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11c3a448 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11c3a449 dec dword ptr [ebp - 0xa] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xa)))-1; w32((uint32_t)(EBP + -0xa), (_r)); fl_dec(_r,32); }
  /* 11c3a44c lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
L_11c3a44f:;
  /* 11c3a44f push esi */
  push32((uint32_t)(ESI));
  /* 11c3a450 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c3a453 call 0x11c3a1ca */
  push32(0x11c3a458u); f_11c3a1ca();
  /* 11c3a458 pop ecx */
  ECX = (pop32());
  /* 11c3a459 pop ecx */
  ECX = (pop32());
  /* 11c3a45a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_11c3a45c:;
  /* 11c3a45c cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3a45f jne 0x11c3a424 */
  if (!C.zf) goto L_11c3a424;
  /* 11c3a461 pop edi */
  EDI = (pop32());
  /* 11c3a462 pop esi */
  ESI = (pop32());
L_11c3a463:;
  /* 11c3a463 pop ebx */
  EBX = (pop32());
  /* 11c3a464 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c3a465 ret  */
  ESPCHK(0x11c3a3eau, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x11c3a4a4 (63 bytes, 24 insns) */
void f_11c3a4a4(void) {
  FTRACE(0x11c3a4a4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3a4a4 push ebp */
  push32((uint32_t)(EBP));
  /* 11c3a4a5 mov ebp, esp */
  EBP = (ESP);
  /* 11c3a4a7 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3a4ab jne 0x11c3a4b1 */
  if (!C.zf) goto L_11c3a4b1;
  /* 11c3a4ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c3a4af pop ebp */
  EBP = (pop32());
  /* 11c3a4b0 ret  */
  ESPCHK(0x11c3a4a4u, _esp0);
  ESP += 4; return;
L_11c3a4b1:;
  /* 11c3a4b1 push dword ptr [0x11c56ad4] */
  push32((uint32_t)(r32((uint32_t)(0x11c56ad4))));
  /* 11c3a4b7 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c3a4ba push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c3a4bd push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c3a4c0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c3a4c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3a4c5 push dword ptr [0x11c56d04] */
  push32((uint32_t)(r32((uint32_t)(0x11c56d04))));
  /* 11c3a4cb call 0x11c3a841 */
  push32(0x11c3a4d0u); f_11c3a841();
  /* 11c3a4d0 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3a4d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3a4d5 jne 0x11c3a4de */
  if (!C.zf) goto L_11c3a4de;
  /* 11c3a4d7 mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 11c3a4dc pop ebp */
  EBP = (pop32());
  /* 11c3a4dd ret  */
  ESPCHK(0x11c3a4a4u, _esp0);
  ESP += 4; return;
L_11c3a4de:;
  /* 11c3a4de add eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3a4e1 pop ebp */
  EBP = (pop32());
  /* 11c3a4e2 ret  */
  ESPCHK(0x11c3a4a4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a4e3 @ 0x11c3a4e3 (110 bytes, 58 insns) */
void f_11c3a4e3(void) {
  FTRACE(0x11c3a4e3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3a4e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11c3a4e4 push ebx */
  push32((uint32_t)(EBX));
  /* 11c3a4e5 push ebp */
  push32((uint32_t)(EBP));
  /* 11c3a4e6 push esi */
  push32((uint32_t)(ESI));
  /* 11c3a4e7 mov esi, dword ptr [0x11c56754] */
  ESI = (r32((uint32_t)(0x11c56754)));
  /* 11c3a4ed push edi */
  push32((uint32_t)(EDI));
  /* 11c3a4ee xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11c3a4f0 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c3a4f2 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3a4f4 je 0x11c3a544 */
  if (C.zf) goto L_11c3a544;
  /* 11c3a4f6 mov ebx, dword ptr [0x11c3d09c] */
  EBX = (r32((uint32_t)(0x11c3d09c)));
L_11c3a4fc:;
  /* 11c3a4fc push edi */
  push32((uint32_t)(EDI));
  /* 11c3a4fd push edi */
  push32((uint32_t)(EDI));
  /* 11c3a4fe push edi */
  push32((uint32_t)(EDI));
  /* 11c3a4ff push edi */
  push32((uint32_t)(EDI));
  /* 11c3a500 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11c3a502 push eax */
  push32((uint32_t)(EAX));
  /* 11c3a503 push edi */
  push32((uint32_t)(EDI));
  /* 11c3a504 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3a506 call ebx */
  call_ind((uint32_t)(EBX), 0x11c3a508u);
  /* 11c3a508 mov ebp, eax */
  EBP = (EAX);
  /* 11c3a50a cmp ebp, edi */
  { uint32_t _a=(EBP),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3a50c je 0x11c3a54c */
  if (C.zf) goto L_11c3a54c;
  /* 11c3a50e push ebp */
  push32((uint32_t)(EBP));
  /* 11c3a50f call 0x11c344f2 */
  push32(0x11c3a514u); f_11c344f2();
  /* 11c3a514 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3a516 pop ecx */
  ECX = (pop32());
  /* 11c3a517 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11c3a51b je 0x11c3a54c */
  if (C.zf) goto L_11c3a54c;
  /* 11c3a51d push edi */
  push32((uint32_t)(EDI));
  /* 11c3a51e push edi */
  push32((uint32_t)(EDI));
  /* 11c3a51f push ebp */
  push32((uint32_t)(EBP));
  /* 11c3a520 push eax */
  push32((uint32_t)(EAX));
  /* 11c3a521 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11c3a523 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11c3a525 push edi */
  push32((uint32_t)(EDI));
  /* 11c3a526 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3a528 call ebx */
  call_ind((uint32_t)(EBX), 0x11c3a52au);
  /* 11c3a52a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3a52c je 0x11c3a54c */
  if (C.zf) goto L_11c3a54c;
  /* 11c3a52e push edi */
  push32((uint32_t)(EDI));
  /* 11c3a52f push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 11c3a533 call 0x11c3aae9 */
  push32(0x11c3a538u); f_11c3aae9();
  /* 11c3a538 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11c3a53b add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3a53e pop ecx */
  ECX = (pop32());
  /* 11c3a53f cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3a541 pop ecx */
  ECX = (pop32());
  /* 11c3a542 jne 0x11c3a4fc */
  if (!C.zf) goto L_11c3a4fc;
L_11c3a544:;
  /* 11c3a544 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c3a546:;
  /* 11c3a546 pop edi */
  EDI = (pop32());
  /* 11c3a547 pop esi */
  ESI = (pop32());
  /* 11c3a548 pop ebp */
  EBP = (pop32());
  /* 11c3a549 pop ebx */
  EBX = (pop32());
  /* 11c3a54a pop ecx */
  ECX = (pop32());
  /* 11c3a54b ret  */
  ESPCHK(0x11c3a4e3u, _esp0);
  ESP += 4; return;
L_11c3a54c:;
  /* 11c3a54c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c3a54f jmp 0x11c3a546 */
  goto L_11c3a546;
}

/* FUN_1000a551 @ 0x11c3a551 (49 bytes, 20 insns) */
void f_11c3a551(void) {
  FTRACE(0x11c3a551u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3a551 push esi */
  push32((uint32_t)(ESI));
  /* 11c3a552 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c3a556 push edi */
  push32((uint32_t)(EDI));
  /* 11c3a557 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 11c3a55a test byte ptr [esi + 0xc], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x40u); fl_logic(_r,8); }
  /* 11c3a55e je 0x11c3a566 */
  if (C.zf) goto L_11c3a566;
  /* 11c3a560 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 11c3a564 jmp 0x11c3a57d */
  goto L_11c3a57d;
L_11c3a566:;
  /* 11c3a566 push esi */
  push32((uint32_t)(ESI));
  /* 11c3a567 call 0x11c381dc */
  push32(0x11c3a56cu); f_11c381dc();
  /* 11c3a56c push esi */
  push32((uint32_t)(ESI));
  /* 11c3a56d call 0x11c3a582 */
  push32(0x11c3a572u); f_11c3a582();
  /* 11c3a572 push esi */
  push32((uint32_t)(ESI));
  /* 11c3a573 mov edi, eax */
  EDI = (EAX);
  /* 11c3a575 call 0x11c3822e */
  push32(0x11c3a57au); f_11c3822e();
  /* 11c3a57a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c3a57d:;
  /* 11c3a57d mov eax, edi */
  EAX = (EDI);
  /* 11c3a57f pop edi */
  EDI = (pop32());
  /* 11c3a580 pop esi */
  ESI = (pop32());
  /* 11c3a581 ret  */
  ESPCHK(0x11c3a551u, _esp0);
  ESP += 4; return;
}

/* __fclose_lk @ 0x11c3a582 (76 bytes, 30 insns) */
void f_11c3a582(void) {
  FTRACE(0x11c3a582u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3a582 push esi */
  push32((uint32_t)(ESI));
  /* 11c3a583 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c3a587 push edi */
  push32((uint32_t)(EDI));
  /* 11c3a588 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 11c3a58b test byte ptr [esi + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 11c3a58f je 0x11c3a5c5 */
  if (C.zf) goto L_11c3a5c5;
  /* 11c3a591 push esi */
  push32((uint32_t)(ESI));
  /* 11c3a592 call 0x11c39f07 */
  push32(0x11c3a597u); f_11c39f07();
  /* 11c3a597 push esi */
  push32((uint32_t)(ESI));
  /* 11c3a598 mov edi, eax */
  EDI = (EAX);
  /* 11c3a59a call 0x11c3ae0f */
  push32(0x11c3a59fu); f_11c3ae0f();
  /* 11c3a59f push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11c3a5a2 call 0x11c3ad2f */
  push32(0x11c3a5a7u); f_11c3ad2f();
  /* 11c3a5a7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3a5aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3a5ac jge 0x11c3a5b3 */
  if ((C.sf==C.of)) goto L_11c3a5b3;
  /* 11c3a5ae or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 11c3a5b1 jmp 0x11c3a5c5 */
  goto L_11c3a5c5;
L_11c3a5b3:;
  /* 11c3a5b3 mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 11c3a5b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3a5b8 je 0x11c3a5c5 */
  if (C.zf) goto L_11c3a5c5;
  /* 11c3a5ba push eax */
  push32((uint32_t)(EAX));
  /* 11c3a5bb call 0x11c3606c */
  push32(0x11c3a5c0u); f_11c3606c();
  /* 11c3a5c0 and dword ptr [esi + 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x1c)))&(0x0u); w32((uint32_t)(ESI + 0x1c), (_r)); fl_logic(_r,32); }
  /* 11c3a5c4 pop ecx */
  ECX = (pop32());
L_11c3a5c5:;
  /* 11c3a5c5 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 11c3a5c9 mov eax, edi */
  EAX = (EDI);
  /* 11c3a5cb pop edi */
  EDI = (pop32());
  /* 11c3a5cc pop esi */
  ESI = (pop32());
  /* 11c3a5cd ret  */
  ESPCHK(0x11c3a582u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a5ce @ 0x11c3a5ce (147 bytes, 52 insns) */
void f_11c3a5ce(void) {
  FTRACE(0x11c3a5ceu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3a5ce push ebx */
  push32((uint32_t)(EBX));
  /* 11c3a5cf mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c3a5d3 cmp ebx, dword ptr [0x11c57e60] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11c57e60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3a5d9 push esi */
  push32((uint32_t)(ESI));
  /* 11c3a5da push edi */
  push32((uint32_t)(EDI));
  /* 11c3a5db jae 0x11c3a64f */
  if (!C.cf) goto L_11c3a64f;
  /* 11c3a5dd mov eax, ebx */
  EAX = (EBX);
  /* 11c3a5df sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11c3a5e2 lea edi, [eax*4 + 0x11c57d60] */
  EDI = ((uint32_t)(EAX*4 + 0x11c57d60));
  /* 11c3a5e9 mov eax, ebx */
  EAX = (EBX);
  /* 11c3a5eb and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11c3a5ee lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 11c3a5f1 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11c3a5f3 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11c3a5f6 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11c3a5fb je 0x11c3a64f */
  if (C.zf) goto L_11c3a64f;
  /* 11c3a5fd push ebx */
  push32((uint32_t)(EBX));
  /* 11c3a5fe call 0x11c39dd7 */
  push32(0x11c3a603u); f_11c39dd7();
  /* 11c3a603 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11c3a605 pop ecx */
  ECX = (pop32());
  /* 11c3a606 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11c3a60b je 0x11c3a636 */
  if (C.zf) goto L_11c3a636;
  /* 11c3a60d push ebx */
  push32((uint32_t)(EBX));
  /* 11c3a60e call 0x11c39d95 */
  push32(0x11c3a613u); f_11c39d95();
  /* 11c3a613 pop ecx */
  ECX = (pop32());
  /* 11c3a614 push eax */
  push32((uint32_t)(EAX));
  /* 11c3a615 call dword ptr [0x11c3d028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d028))), 0x11c3a61bu);
  /* 11c3a61b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3a61d jne 0x11c3a629 */
  if (!C.zf) goto L_11c3a629;
  /* 11c3a61f call dword ptr [0x11c3d0f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d0f8))), 0x11c3a625u);
  /* 11c3a625 mov esi, eax */
  ESI = (EAX);
  /* 11c3a627 jmp 0x11c3a62b */
  goto L_11c3a62b;
L_11c3a629:;
  /* 11c3a629 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11c3a62b:;
  /* 11c3a62b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c3a62d je 0x11c3a644 */
  if (C.zf) goto L_11c3a644;
  /* 11c3a62f call 0x11c39d0d */
  push32(0x11c3a634u); f_11c39d0d();
  /* 11c3a634 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_11c3a636:;
  /* 11c3a636 call 0x11c39d04 */
  push32(0x11c3a63bu); f_11c39d04();
  /* 11c3a63b mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11c3a641 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_11c3a644:;
  /* 11c3a644 push ebx */
  push32((uint32_t)(EBX));
  /* 11c3a645 call 0x11c39e36 */
  push32(0x11c3a64au); f_11c39e36();
  /* 11c3a64a pop ecx */
  ECX = (pop32());
  /* 11c3a64b mov eax, esi */
  EAX = (ESI);
  /* 11c3a64d jmp 0x11c3a65d */
  goto L_11c3a65d;
L_11c3a64f:;
  /* 11c3a64f call 0x11c39d04 */
  push32(0x11c3a654u); f_11c39d04();
  /* 11c3a654 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11c3a65a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11c3a65d:;
  /* 11c3a65d pop edi */
  EDI = (pop32());
  /* 11c3a65e pop esi */
  ESI = (pop32());
  /* 11c3a65f pop ebx */
  EBX = (pop32());
  /* 11c3a660 ret  */
  ESPCHK(0x11c3a5ceu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a670 @ 0x11c3a670 (208 bytes, 85 insns) */
void f_11c3a670(void) {
  FTRACE(0x11c3a670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3a670 push ebp */
  push32((uint32_t)(EBP));
  /* 11c3a671 mov ebp, esp */
  EBP = (ESP);
  /* 11c3a673 push edi */
  push32((uint32_t)(EDI));
  /* 11c3a674 push esi */
  push32((uint32_t)(ESI));
  /* 11c3a675 push ebx */
  push32((uint32_t)(EBX));
  /* 11c3a676 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11c3a679 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c3a67c lea eax, [0x11c569e0] */
  EAX = ((uint32_t)(0x11c569e0));
  /* 11c3a682 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3a686 jne 0x11c3a6c3 */
  if (!C.zf) goto L_11c3a6c3;
  /* 11c3a688 mov al, 0xff */
  AL = (0xffu);
  /* 11c3a68a mov edi, edi */
  EDI = (EDI);
L_11c3a68c:;
  /* 11c3a68c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11c3a68e je 0x11c3a6be */
  if (C.zf) goto L_11c3a6be;
  /* 11c3a690 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c3a692 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c3a693 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 11c3a695 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c3a696 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3a698 je 0x11c3a68c */
  if (C.zf) goto L_11c3a68c;
  /* 11c3a69a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11c3a69c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3a69e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11c3a6a0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11c3a6a3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11c3a6a5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11c3a6a7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 11c3a6a9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11c3a6ab cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3a6ad sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11c3a6af and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11c3a6b2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11c3a6b4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11c3a6b6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3a6b8 je 0x11c3a68c */
  if (C.zf) goto L_11c3a68c;
  /* 11c3a6ba sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11c3a6bc sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_11c3a6be:;
  /* 11c3a6be movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11c3a6c1 jmp 0x11c3a73b */
  goto L_11c3a73b;
L_11c3a6c3:;
  /* 11c3a6c3 lock inc dword ptr [0x11c56ad0] */
  x86_unimpl("lock inc @ 0x11c3a6c3");
  /* 11c3a6ca cmp dword ptr [0x11c56acc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c56acc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3a6d1 jg 0x11c3a6d7 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c3a6d7;
  /* 11c3a6d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c3a6d5 jmp 0x11c3a6ec */
  goto L_11c3a6ec;
L_11c3a6d7:;
  /* 11c3a6d7 lock dec dword ptr [0x11c56ad0] */
  x86_unimpl("lock dec @ 0x11c3a6d7");
  /* 11c3a6de push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11c3a6e0 call 0x11c35ff6 */
  push32(0x11c3a6e5u); f_11c35ff6();
  /* 11c3a6e5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_11c3a6ec:;
  /* 11c3a6ec mov eax, 0xff */
  EAX = (0xffu);
  /* 11c3a6f1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c3a6f3 nop  */
  /* nop */
L_11c3a6f4:;
  /* 11c3a6f4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11c3a6f6 je 0x11c3a71f */
  if (C.zf) goto L_11c3a71f;
  /* 11c3a6f8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c3a6fa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c3a6fb mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11c3a6fd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c3a6fe cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3a700 je 0x11c3a6f4 */
  if (C.zf) goto L_11c3a6f4;
  /* 11c3a702 push eax */
  push32((uint32_t)(EAX));
  /* 11c3a703 push ebx */
  push32((uint32_t)(EBX));
  /* 11c3a704 call 0x11c352c4 */
  push32(0x11c3a709u); f_11c352c4();
  /* 11c3a709 mov ebx, eax */
  EBX = (EAX);
  /* 11c3a70b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3a70e call 0x11c352c4 */
  push32(0x11c3a713u); f_11c352c4();
  /* 11c3a713 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3a716 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3a718 je 0x11c3a6f4 */
  if (C.zf) goto L_11c3a6f4;
  /* 11c3a71a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3a71c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11c3a71f:;
  /* 11c3a71f mov ebx, eax */
  EBX = (EAX);
  /* 11c3a721 pop eax */
  EAX = (pop32());
  /* 11c3a722 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c3a724 jne 0x11c3a72f */
  if (!C.zf) goto L_11c3a72f;
  /* 11c3a726 lock dec dword ptr [0x11c56ad0] */
  x86_unimpl("lock dec @ 0x11c3a726");
  /* 11c3a72d jmp 0x11c3a739 */
  goto L_11c3a739;
L_11c3a72f:;
  /* 11c3a72f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11c3a731 call 0x11c36057 */
  push32(0x11c3a736u); f_11c36057();
  /* 11c3a736 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c3a739:;
  /* 11c3a739 mov eax, ebx */
  EAX = (EBX);
L_11c3a73b:;
  /* 11c3a73b pop ebx */
  EBX = (pop32());
  /* 11c3a73c pop esi */
  ESI = (pop32());
  /* 11c3a73d pop edi */
  EDI = (pop32());
  /* 11c3a73e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c3a73f ret  */
  ESPCHK(0x11c3a670u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a740 @ 0x11c3a740 (257 bytes, 103 insns) */
void f_11c3a740(void) {
  FTRACE(0x11c3a740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3a740 push ebp */
  push32((uint32_t)(EBP));
  /* 11c3a741 mov ebp, esp */
  EBP = (ESP);
  /* 11c3a743 push edi */
  push32((uint32_t)(EDI));
  /* 11c3a744 push esi */
  push32((uint32_t)(ESI));
  /* 11c3a745 push ebx */
  push32((uint32_t)(EBX));
  /* 11c3a746 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c3a749 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11c3a74b je 0x11c3a83a */
  if (C.zf) goto L_11c3a83a;
  /* 11c3a751 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c3a754 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11c3a757 lea eax, [0x11c569e0] */
  EAX = ((uint32_t)(0x11c569e0));
  /* 11c3a75d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3a761 jne 0x11c3a7b1 */
  if (!C.zf) goto L_11c3a7b1;
  /* 11c3a763 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 11c3a765 mov bl, 0x5a */
  BL = (0x5au);
  /* 11c3a767 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 11c3a769 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c3a76c:;
  /* 11c3a76c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 11c3a76e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11c3a770 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11c3a772 je 0x11c3a795 */
  if (C.zf) goto L_11c3a795;
  /* 11c3a774 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11c3a776 je 0x11c3a795 */
  if (C.zf) goto L_11c3a795;
  /* 11c3a778 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c3a779 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c3a77a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3a77c jb 0x11c3a784 */
  if (C.cf) goto L_11c3a784;
  /* 11c3a77e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3a780 ja 0x11c3a784 */
  if ((!C.cf&&!C.zf)) goto L_11c3a784;
  /* 11c3a782 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_11c3a784:;
  /* 11c3a784 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3a786 jb 0x11c3a78e */
  if (C.cf) goto L_11c3a78e;
  /* 11c3a788 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3a78a ja 0x11c3a78e */
  if ((!C.cf&&!C.zf)) goto L_11c3a78e;
  /* 11c3a78c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_11c3a78e:;
  /* 11c3a78e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3a790 jne 0x11c3a79f */
  if (!C.zf) goto L_11c3a79f;
  /* 11c3a792 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c3a793 jne 0x11c3a76c */
  if (!C.zf) goto L_11c3a76c;
L_11c3a795:;
  /* 11c3a795 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11c3a797 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3a799 je 0x11c3a83a */
  if (C.zf) goto L_11c3a83a;
L_11c3a79f:;
  /* 11c3a79f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11c3a7a4 jb 0x11c3a83a */
  if (C.cf) goto L_11c3a83a;
  /* 11c3a7aa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c3a7ac jmp 0x11c3a83a */
  goto L_11c3a83a;
L_11c3a7b1:;
  /* 11c3a7b1 lock inc dword ptr [0x11c56ad0] */
  x86_unimpl("lock inc @ 0x11c3a7b1");
  /* 11c3a7b8 cmp dword ptr [0x11c56acc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c56acc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3a7bf jg 0x11c3a7c5 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c3a7c5;
  /* 11c3a7c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c3a7c3 jmp 0x11c3a7de */
  goto L_11c3a7de;
L_11c3a7c5:;
  /* 11c3a7c5 lock dec dword ptr [0x11c56ad0] */
  x86_unimpl("lock dec @ 0x11c3a7c5");
  /* 11c3a7cc mov ebx, ecx */
  EBX = (ECX);
  /* 11c3a7ce push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11c3a7d0 call 0x11c35ff6 */
  push32(0x11c3a7d5u); f_11c35ff6();
  /* 11c3a7d5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 11c3a7dc mov ecx, ebx */
  ECX = (EBX);
L_11c3a7de:;
  /* 11c3a7de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c3a7e0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c3a7e2 mov edi, edi */
  EDI = (EDI);
L_11c3a7e4:;
  /* 11c3a7e4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c3a7e6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c3a7e8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11c3a7ea je 0x11c3a80f */
  if (C.zf) goto L_11c3a80f;
  /* 11c3a7ec or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c3a7ee je 0x11c3a80f */
  if (C.zf) goto L_11c3a80f;
  /* 11c3a7f0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c3a7f1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c3a7f2 push ecx */
  push32((uint32_t)(ECX));
  /* 11c3a7f3 push eax */
  push32((uint32_t)(EAX));
  /* 11c3a7f4 push ebx */
  push32((uint32_t)(EBX));
  /* 11c3a7f5 call 0x11c352c4 */
  push32(0x11c3a7fau); f_11c352c4();
  /* 11c3a7fa mov ebx, eax */
  EBX = (EAX);
  /* 11c3a7fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3a7ff call 0x11c352c4 */
  push32(0x11c3a804u); f_11c352c4();
  /* 11c3a804 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3a807 pop ecx */
  ECX = (pop32());
  /* 11c3a808 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3a80a jne 0x11c3a815 */
  if (!C.zf) goto L_11c3a815;
  /* 11c3a80c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c3a80d jne 0x11c3a7e4 */
  if (!C.zf) goto L_11c3a7e4;
L_11c3a80f:;
  /* 11c3a80f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11c3a811 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3a813 je 0x11c3a81e */
  if (C.zf) goto L_11c3a81e;
L_11c3a815:;
  /* 11c3a815 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11c3a81a jb 0x11c3a81e */
  if (C.cf) goto L_11c3a81e;
  /* 11c3a81c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_11c3a81e:;
  /* 11c3a81e pop eax */
  EAX = (pop32());
  /* 11c3a81f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c3a821 jne 0x11c3a82c */
  if (!C.zf) goto L_11c3a82c;
  /* 11c3a823 lock dec dword ptr [0x11c56ad0] */
  x86_unimpl("lock dec @ 0x11c3a823");
  /* 11c3a82a jmp 0x11c3a83a */
  goto L_11c3a83a;
L_11c3a82c:;
  /* 11c3a82c mov ebx, ecx */
  EBX = (ECX);
  /* 11c3a82e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11c3a830 call 0x11c36057 */
  push32(0x11c3a835u); f_11c36057();
  /* 11c3a835 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3a838 mov ecx, ebx */
  ECX = (EBX);
L_11c3a83a:;
  /* 11c3a83a mov eax, ecx */
  EAX = (ECX);
  /* 11c3a83c pop ebx */
  EBX = (pop32());
  /* 11c3a83d pop esi */
  ESI = (pop32());
  /* 11c3a83e pop edi */
  EDI = (pop32());
  /* 11c3a83f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c3a840 ret  */
  ESPCHK(0x11c3a740u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a841 @ 0x11c3a841 (597 bytes, 239 insns) */
void f_11c3a841(void) {
  FTRACE(0x11c3a841u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3a841 push ebp */
  push32((uint32_t)(EBP));
  /* 11c3a842 mov ebp, esp */
  EBP = (ESP);
  /* 11c3a844 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11c3a846 push 0x11c3d830 */
  push32((uint32_t)(0x11c3d830u));
  /* 11c3a84b push 0x11c37d80 */
  push32((uint32_t)(0x11c37d80u));
  /* 11c3a850 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11c3a856 push eax */
  push32((uint32_t)(EAX));
  /* 11c3a857 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11c3a85e sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3a861 push ebx */
  push32((uint32_t)(EBX));
  /* 11c3a862 push esi */
  push32((uint32_t)(ESI));
  /* 11c3a863 push edi */
  push32((uint32_t)(EDI));
  /* 11c3a864 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11c3a867 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c3a869 cmp dword ptr [0x11c56a78], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11c56a78))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3a86f push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3a871 pop edi */
  EDI = (pop32());
  /* 11c3a872 jne 0x11c3a8b4 */
  if (!C.zf) goto L_11c3a8b4;
  /* 11c3a874 push edi */
  push32((uint32_t)(EDI));
  /* 11c3a875 mov eax, 0x11c3d6bc */
  EAX = (0x11c3d6bcu);
  /* 11c3a87a push eax */
  push32((uint32_t)(EAX));
  /* 11c3a87b push edi */
  push32((uint32_t)(EDI));
  /* 11c3a87c push eax */
  push32((uint32_t)(EAX));
  /* 11c3a87d push ebx */
  push32((uint32_t)(EBX));
  /* 11c3a87e push ebx */
  push32((uint32_t)(EBX));
  /* 11c3a87f call dword ptr [0x11c3d020] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d020))), 0x11c3a885u);
  /* 11c3a885 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3a887 je 0x11c3a891 */
  if (C.zf) goto L_11c3a891;
  /* 11c3a889 mov dword ptr [0x11c56a78], edi */
  w32((uint32_t)(0x11c56a78), (EDI));
  /* 11c3a88f jmp 0x11c3a8b4 */
  goto L_11c3a8b4;
L_11c3a891:;
  /* 11c3a891 push edi */
  push32((uint32_t)(EDI));
  /* 11c3a892 mov eax, 0x11c3d6b8 */
  EAX = (0x11c3d6b8u);
  /* 11c3a897 push eax */
  push32((uint32_t)(EAX));
  /* 11c3a898 push edi */
  push32((uint32_t)(EDI));
  /* 11c3a899 push eax */
  push32((uint32_t)(EAX));
  /* 11c3a89a push ebx */
  push32((uint32_t)(EBX));
  /* 11c3a89b push ebx */
  push32((uint32_t)(EBX));
  /* 11c3a89c call dword ptr [0x11c3d024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d024))), 0x11c3a8a2u);
  /* 11c3a8a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3a8a4 je 0x11c3aaaa */
  if (C.zf) goto L_11c3aaaa;
  /* 11c3a8aa mov dword ptr [0x11c56a78], 2 */
  w32((uint32_t)(0x11c56a78), (0x2u));
L_11c3a8b4:;
  /* 11c3a8b4 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 11c3a8b7 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3a8b9 jle 0x11c3a8cb */
  if ((C.zf||C.sf!=C.of)) goto L_11c3a8cb;
  /* 11c3a8bb push esi */
  push32((uint32_t)(ESI));
  /* 11c3a8bc push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c3a8bf call 0x11c3aabe */
  push32(0x11c3a8c4u); f_11c3aabe();
  /* 11c3a8c4 pop ecx */
  ECX = (pop32());
  /* 11c3a8c5 pop ecx */
  ECX = (pop32());
  /* 11c3a8c6 mov esi, eax */
  ESI = (EAX);
  /* 11c3a8c8 mov dword ptr [ebp + 0x14], esi */
  w32((uint32_t)(EBP + 0x14), (ESI));
L_11c3a8cb:;
  /* 11c3a8cb cmp dword ptr [ebp + 0x1c], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3a8ce jle 0x11c3a8e0 */
  if ((C.zf||C.sf!=C.of)) goto L_11c3a8e0;
  /* 11c3a8d0 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11c3a8d3 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11c3a8d6 call 0x11c3aabe */
  push32(0x11c3a8dbu); f_11c3aabe();
  /* 11c3a8db pop ecx */
  ECX = (pop32());
  /* 11c3a8dc pop ecx */
  ECX = (pop32());
  /* 11c3a8dd mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_11c3a8e0:;
  /* 11c3a8e0 mov eax, dword ptr [0x11c56a78] */
  EAX = (r32((uint32_t)(0x11c56a78)));
  /* 11c3a8e5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3a8e8 jne 0x11c3a905 */
  if (!C.zf) goto L_11c3a905;
  /* 11c3a8ea push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11c3a8ed push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11c3a8f0 push esi */
  push32((uint32_t)(ESI));
  /* 11c3a8f1 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c3a8f4 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c3a8f7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c3a8fa call dword ptr [0x11c3d024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d024))), 0x11c3a900u);
  /* 11c3a900 jmp 0x11c3aaac */
  goto L_11c3aaac;
L_11c3a905:;
  /* 11c3a905 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3a907 jne 0x11c3aaaa */
  if (!C.zf) goto L_11c3aaaa;
  /* 11c3a90d cmp dword ptr [ebp + 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3a910 jne 0x11c3a91a */
  if (!C.zf) goto L_11c3a91a;
  /* 11c3a912 mov eax, dword ptr [0x11c569f8] */
  EAX = (r32((uint32_t)(0x11c569f8)));
  /* 11c3a917 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_11c3a91a:;
  /* 11c3a91a cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3a91c je 0x11c3a927 */
  if (C.zf) goto L_11c3a927;
  /* 11c3a91e cmp dword ptr [ebp + 0x1c], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3a921 jne 0x11c3a9bf */
  if (!C.zf) goto L_11c3a9bf;
L_11c3a927:;
  /* 11c3a927 cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3a92a jne 0x11c3a934 */
  if (!C.zf) goto L_11c3a934;
L_11c3a92c:;
  /* 11c3a92c push 2 */
  push32((uint32_t)(0x2u));
L_11c3a92e:;
  /* 11c3a92e pop eax */
  EAX = (pop32());
  /* 11c3a92f jmp 0x11c3aaac */
  goto L_11c3aaac;
L_11c3a934:;
  /* 11c3a934 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3a937 jle 0x11c3a940 */
  if ((C.zf||C.sf!=C.of)) goto L_11c3a940;
L_11c3a939:;
  /* 11c3a939 mov eax, edi */
  EAX = (EDI);
  /* 11c3a93b jmp 0x11c3aaac */
  goto L_11c3aaac;
L_11c3a940:;
  /* 11c3a940 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3a942 jg 0x11c3a985 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c3a985;
  /* 11c3a944 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 11c3a947 push eax */
  push32((uint32_t)(EAX));
  /* 11c3a948 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11c3a94b call dword ptr [0x11c3d050] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d050))), 0x11c3a951u);
  /* 11c3a951 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3a953 je 0x11c3aaaa */
  if (C.zf) goto L_11c3aaaa;
  /* 11c3a959 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3a95b jle 0x11c3a989 */
  if ((C.zf||C.sf!=C.of)) goto L_11c3a989;
  /* 11c3a95d cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3a961 jb 0x11c3a985 */
  if (C.cf) goto L_11c3a985;
  /* 11c3a963 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 11c3a966 cmp byte ptr [ebp - 0x36], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x36))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3a969 je 0x11c3a985 */
  if (C.zf) goto L_11c3a985;
L_11c3a96b:;
  /* 11c3a96b mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11c3a96e cmp dl, bl */
  { uint32_t _a=(DL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3a970 je 0x11c3a985 */
  if (C.zf) goto L_11c3a985;
  /* 11c3a972 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c3a975 mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 11c3a977 cmp cl, byte ptr [eax] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3a979 jb 0x11c3a97f */
  if (C.cf) goto L_11c3a97f;
  /* 11c3a97b cmp cl, dl */
  { uint32_t _a=(CL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3a97d jbe 0x11c3a92c */
  if ((C.cf||C.zf)) goto L_11c3a92c;
L_11c3a97f:;
  /* 11c3a97f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c3a980 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c3a981 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3a983 jne 0x11c3a96b */
  if (!C.zf) goto L_11c3a96b;
L_11c3a985:;
  /* 11c3a985 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c3a987 jmp 0x11c3a92e */
  goto L_11c3a92e;
L_11c3a989:;
  /* 11c3a989 cmp dword ptr [ebp + 0x1c], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3a98c jle 0x11c3a9bf */
  if ((C.zf||C.sf!=C.of)) goto L_11c3a9bf;
  /* 11c3a98e cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3a992 jb 0x11c3a939 */
  if (C.cf) goto L_11c3a939;
  /* 11c3a994 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 11c3a997 cmp byte ptr [ebp - 0x36], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x36))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3a99a je 0x11c3a939 */
  if (C.zf) goto L_11c3a939;
L_11c3a99c:;
  /* 11c3a99c mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11c3a99f cmp dl, bl */
  { uint32_t _a=(DL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3a9a1 je 0x11c3a939 */
  if (C.zf) goto L_11c3a939;
  /* 11c3a9a3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11c3a9a6 mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 11c3a9a8 cmp cl, byte ptr [eax] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3a9aa jb 0x11c3a9b4 */
  if (C.cf) goto L_11c3a9b4;
  /* 11c3a9ac cmp cl, dl */
  { uint32_t _a=(CL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3a9ae jbe 0x11c3a92c */
  if ((C.cf||C.zf)) goto L_11c3a92c;
L_11c3a9b4:;
  /* 11c3a9b4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c3a9b5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c3a9b6 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3a9b8 jne 0x11c3a99c */
  if (!C.zf) goto L_11c3a99c;
  /* 11c3a9ba jmp 0x11c3a939 */
  goto L_11c3a939;
L_11c3a9bf:;
  /* 11c3a9bf push ebx */
  push32((uint32_t)(EBX));
  /* 11c3a9c0 push ebx */
  push32((uint32_t)(EBX));
  /* 11c3a9c1 push esi */
  push32((uint32_t)(ESI));
  /* 11c3a9c2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c3a9c5 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c3a9c7 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11c3a9ca call dword ptr [0x11c3d040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d040))), 0x11c3a9d0u);
  /* 11c3a9d0 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11c3a9d3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3a9d5 je 0x11c3aaaa */
  if (C.zf) goto L_11c3aaaa;
  /* 11c3a9db mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11c3a9de add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3a9e0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3a9e3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11c3a9e5 call 0x11c38b10 */
  push32(0x11c3a9eau); f_11c38b10();
  /* 11c3a9ea mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11c3a9ed mov eax, esp */
  EAX = (ESP);
  /* 11c3a9ef mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11c3a9f2 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c3a9f6 jmp 0x11c3aa0e */
  goto L_11c3aa0e;
  /* 11c3a9f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3a9fa pop eax */
  EAX = (pop32());
  /* 11c3a9fb ret  */
  ESPCHK(0x11c3a841u, _esp0);
  ESP += 4; return;
  /* 11c3a9fc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11c3a9ff xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c3aa01 mov dword ptr [ebp - 0x24], ebx */
  w32((uint32_t)(EBP + -0x24), (EBX));
  /* 11c3aa04 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c3aa08 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 11c3aa0b push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3aa0d pop edi */
  EDI = (pop32());
L_11c3aa0e:;
  /* 11c3aa0e cmp dword ptr [ebp - 0x24], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3aa11 je 0x11c3aaaa */
  if (C.zf) goto L_11c3aaaa;
  /* 11c3aa17 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11c3aa1a push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11c3aa1d push esi */
  push32((uint32_t)(ESI));
  /* 11c3aa1e push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c3aa21 push edi */
  push32((uint32_t)(EDI));
  /* 11c3aa22 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11c3aa25 mov esi, dword ptr [0x11c3d040] */
  ESI = (r32((uint32_t)(0x11c3d040)));
  /* 11c3aa2b call esi */
  call_ind((uint32_t)(ESI), 0x11c3aa2du);
  /* 11c3aa2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3aa2f je 0x11c3aaaa */
  if (C.zf) goto L_11c3aaaa;
  /* 11c3aa31 push ebx */
  push32((uint32_t)(EBX));
  /* 11c3aa32 push ebx */
  push32((uint32_t)(EBX));
  /* 11c3aa33 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11c3aa36 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11c3aa39 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c3aa3b push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11c3aa3e call esi */
  call_ind((uint32_t)(ESI), 0x11c3aa40u);
  /* 11c3aa40 mov esi, eax */
  ESI = (EAX);
  /* 11c3aa42 mov dword ptr [ebp - 0x20], esi */
  w32((uint32_t)(EBP + -0x20), (ESI));
  /* 11c3aa45 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3aa47 je 0x11c3aaaa */
  if (C.zf) goto L_11c3aaaa;
  /* 11c3aa49 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11c3aa4c lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 11c3aa4f add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3aa52 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11c3aa54 call 0x11c38b10 */
  push32(0x11c3aa59u); f_11c38b10();
  /* 11c3aa59 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11c3aa5c mov edi, esp */
  EDI = (ESP);
  /* 11c3aa5e mov dword ptr [ebp - 0x28], edi */
  w32((uint32_t)(EBP + -0x28), (EDI));
  /* 11c3aa61 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c3aa65 jmp 0x11c3aa79 */
  goto L_11c3aa79;
  /* 11c3aa67 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3aa69 pop eax */
  EAX = (pop32());
  /* 11c3aa6a ret  */
  ESPCHK(0x11c3a841u, _esp0);
  ESP += 4; return;
  /* 11c3aa6b mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11c3aa6e xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c3aa70 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11c3aa72 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c3aa76 mov esi, dword ptr [ebp - 0x20] */
  ESI = (r32((uint32_t)(EBP + -0x20)));
L_11c3aa79:;
  /* 11c3aa79 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3aa7b je 0x11c3aaaa */
  if (C.zf) goto L_11c3aaaa;
  /* 11c3aa7d push esi */
  push32((uint32_t)(ESI));
  /* 11c3aa7e push edi */
  push32((uint32_t)(EDI));
  /* 11c3aa7f push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11c3aa82 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11c3aa85 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3aa87 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11c3aa8a call dword ptr [0x11c3d040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d040))), 0x11c3aa90u);
  /* 11c3aa90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3aa92 je 0x11c3aaaa */
  if (C.zf) goto L_11c3aaaa;
  /* 11c3aa94 push esi */
  push32((uint32_t)(ESI));
  /* 11c3aa95 push edi */
  push32((uint32_t)(EDI));
  /* 11c3aa96 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11c3aa99 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11c3aa9c push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c3aa9f push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c3aaa2 call dword ptr [0x11c3d020] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d020))), 0x11c3aaa8u);
  /* 11c3aaa8 jmp 0x11c3aaac */
  goto L_11c3aaac;
L_11c3aaaa:;
  /* 11c3aaaa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c3aaac:;
  /* 11c3aaac lea esp, [ebp - 0x4c] */
  ESP = ((uint32_t)(EBP + -0x4c));
  /* 11c3aaaf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11c3aab2 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11c3aab9 pop edi */
  EDI = (pop32());
  /* 11c3aaba pop esi */
  ESI = (pop32());
  /* 11c3aabb pop ebx */
  EBX = (pop32());
  /* 11c3aabc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c3aabd ret  */
  ESPCHK(0x11c3a841u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aabe @ 0x11c3aabe (43 bytes, 20 insns) */
void f_11c3aabe(void) {
  FTRACE(0x11c3aabeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3aabe mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c3aac2 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c3aac6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11c3aac8 push esi */
  push32((uint32_t)(ESI));
  /* 11c3aac9 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 11c3aacc je 0x11c3aadb */
  if (C.zf) goto L_11c3aadb;
L_11c3aace:;
  /* 11c3aace cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3aad1 je 0x11c3aadb */
  if (C.zf) goto L_11c3aadb;
  /* 11c3aad3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c3aad4 mov esi, ecx */
  ESI = (ECX);
  /* 11c3aad6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c3aad7 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c3aad9 jne 0x11c3aace */
  if (!C.zf) goto L_11c3aace;
L_11c3aadb:;
  /* 11c3aadb cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3aade pop esi */
  ESI = (pop32());
  /* 11c3aadf jne 0x11c3aae6 */
  if (!C.zf) goto L_11c3aae6;
  /* 11c3aae1 sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3aae5 ret  */
  ESPCHK(0x11c3aabeu, _esp0);
  ESP += 4; return;
L_11c3aae6:;
  /* 11c3aae6 mov eax, edx */
  EAX = (EDX);
  /* 11c3aae8 ret  */
  ESPCHK(0x11c3aabeu, _esp0);
  ESP += 4; return;
}

/* FUN_1000aae9 @ 0x11c3aae9 (391 bytes, 155 insns) */
void f_11c3aae9(void) {
  FTRACE(0x11c3aae9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3aae9 push ebp */
  push32((uint32_t)(EBP));
  /* 11c3aaea mov ebp, esp */
  EBP = (ESP);
  /* 11c3aaec push ecx */
  push32((uint32_t)(ECX));
  /* 11c3aaed push ecx */
  push32((uint32_t)(ECX));
  /* 11c3aaee push ebx */
  push32((uint32_t)(EBX));
  /* 11c3aaef push esi */
  push32((uint32_t)(ESI));
  /* 11c3aaf0 push edi */
  push32((uint32_t)(EDI));
  /* 11c3aaf1 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11c3aaf3 cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3aaf6 je 0x11c3ab4d */
  if (C.zf) goto L_11c3ab4d;
  /* 11c3aaf8 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11c3aafa push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c3aafd call 0x11c3ae3a */
  push32(0x11c3ab02u); f_11c3ae3a();
  /* 11c3ab02 mov esi, eax */
  ESI = (EAX);
  /* 11c3ab04 pop ecx */
  ECX = (pop32());
  /* 11c3ab05 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3ab07 pop ecx */
  ECX = (pop32());
  /* 11c3ab08 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 11c3ab0b je 0x11c3ab4d */
  if (C.zf) goto L_11c3ab4d;
  /* 11c3ab0d cmp dword ptr [ebp + 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3ab10 je 0x11c3ab4d */
  if (C.zf) goto L_11c3ab4d;
  /* 11c3ab12 mov eax, dword ptr [0x11c5674c] */
  EAX = (r32((uint32_t)(0x11c5674c)));
  /* 11c3ab17 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c3ab19 cmp byte ptr [esi + 1], bl */
  { uint32_t _a=(r8((uint32_t)(ESI + 0x1))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3ab1c sete bl */
  BL = ((C.zf) ? 1u : 0u);
  /* 11c3ab1f cmp eax, dword ptr [0x11c56750] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11c56750))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3ab25 jne 0x11c3ab33 */
  if (!C.zf) goto L_11c3ab33;
  /* 11c3ab27 push eax */
  push32((uint32_t)(EAX));
  /* 11c3ab28 call 0x11c3acc8 */
  push32(0x11c3ab2du); f_11c3acc8();
  /* 11c3ab2d pop ecx */
  ECX = (pop32());
  /* 11c3ab2e mov dword ptr [0x11c5674c], eax */
  w32((uint32_t)(0x11c5674c), (EAX));
L_11c3ab33:;
  /* 11c3ab33 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3ab35 jne 0x11c3ab8b */
  if (!C.zf) goto L_11c3ab8b;
  /* 11c3ab37 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3ab3a je 0x11c3ab55 */
  if (C.zf) goto L_11c3ab55;
  /* 11c3ab3c cmp dword ptr [0x11c56754], edi */
  { uint32_t _a=(r32((uint32_t)(0x11c56754))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3ab42 je 0x11c3ab55 */
  if (C.zf) goto L_11c3ab55;
  /* 11c3ab44 call 0x11c3a4e3 */
  push32(0x11c3ab49u); f_11c3a4e3();
  /* 11c3ab49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3ab4b je 0x11c3ab8b */
  if (C.zf) goto L_11c3ab8b;
L_11c3ab4d:;
  /* 11c3ab4d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11c3ab50:;
  /* 11c3ab50 pop edi */
  EDI = (pop32());
  /* 11c3ab51 pop esi */
  ESI = (pop32());
  /* 11c3ab52 pop ebx */
  EBX = (pop32());
  /* 11c3ab53 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c3ab54 ret  */
  ESPCHK(0x11c3aae9u, _esp0);
  ESP += 4; return;
L_11c3ab55:;
  /* 11c3ab55 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3ab57 jne 0x11c3ac69 */
  if (!C.zf) goto L_11c3ac69;
  /* 11c3ab5d push 4 */
  push32((uint32_t)(0x4u));
  /* 11c3ab5f call 0x11c344f2 */
  push32(0x11c3ab64u); f_11c344f2();
  /* 11c3ab64 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3ab66 pop ecx */
  ECX = (pop32());
  /* 11c3ab67 mov dword ptr [0x11c5674c], eax */
  w32((uint32_t)(0x11c5674c), (EAX));
  /* 11c3ab6c je 0x11c3ab4d */
  if (C.zf) goto L_11c3ab4d;
  /* 11c3ab6e mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 11c3ab70 cmp dword ptr [0x11c56754], edi */
  { uint32_t _a=(r32((uint32_t)(0x11c56754))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3ab76 jne 0x11c3ab8b */
  if (!C.zf) goto L_11c3ab8b;
  /* 11c3ab78 push 4 */
  push32((uint32_t)(0x4u));
  /* 11c3ab7a call 0x11c344f2 */
  push32(0x11c3ab7fu); f_11c344f2();
  /* 11c3ab7f cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3ab81 pop ecx */
  ECX = (pop32());
  /* 11c3ab82 mov dword ptr [0x11c56754], eax */
  w32((uint32_t)(0x11c56754), (EAX));
  /* 11c3ab87 je 0x11c3ab4d */
  if (C.zf) goto L_11c3ab4d;
  /* 11c3ab89 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_11c3ab8b:;
  /* 11c3ab8b sub esi, dword ptr [ebp + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3ab8e mov edi, dword ptr [0x11c5674c] */
  EDI = (r32((uint32_t)(0x11c5674c)));
  /* 11c3ab94 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11c3ab97 push esi */
  push32((uint32_t)(ESI));
  /* 11c3ab98 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c3ab9b call 0x11c3ac70 */
  push32(0x11c3aba0u); f_11c3ac70();
  /* 11c3aba0 mov esi, eax */
  ESI = (EAX);
  /* 11c3aba2 pop ecx */
  ECX = (pop32());
  /* 11c3aba3 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c3aba5 pop ecx */
  ECX = (pop32());
  /* 11c3aba6 jl 0x11c3abeb */
  if ((C.sf!=C.of)) goto L_11c3abeb;
  /* 11c3aba8 cmp dword ptr [edi], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3abab je 0x11c3abeb */
  if (C.zf) goto L_11c3abeb;
  /* 11c3abad test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11c3abaf je 0x11c3abe3 */
  if (C.zf) goto L_11c3abe3;
  /* 11c3abb1 push dword ptr [edi + esi*4] */
  push32((uint32_t)(r32((uint32_t)(EDI + ESI*4))));
  /* 11c3abb4 lea edi, [edi + esi*4] */
  EDI = ((uint32_t)(EDI + ESI*4));
  /* 11c3abb7 call 0x11c3606c */
  push32(0x11c3abbcu); f_11c3606c();
  /* 11c3abbc pop ecx */
  ECX = (pop32());
L_11c3abbd:;
  /* 11c3abbd cmp dword ptr [edi], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3abc0 je 0x11c3abcd */
  if (C.zf) goto L_11c3abcd;
  /* 11c3abc2 mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 11c3abc5 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c3abc6 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11c3abc8 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3abcb jmp 0x11c3abbd */
  goto L_11c3abbd;
L_11c3abcd:;
  /* 11c3abcd mov eax, esi */
  EAX = (ESI);
  /* 11c3abcf shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11c3abd2 push eax */
  push32((uint32_t)(EAX));
  /* 11c3abd3 push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 11c3abd6 call 0x11c340d5 */
  push32(0x11c3abdbu); f_11c340d5();
  /* 11c3abdb pop ecx */
  ECX = (pop32());
  /* 11c3abdc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3abde pop ecx */
  ECX = (pop32());
  /* 11c3abdf je 0x11c3ac1d */
  if (C.zf) goto L_11c3ac1d;
  /* 11c3abe1 jmp 0x11c3ac18 */
  goto L_11c3ac18;
L_11c3abe3:;
  /* 11c3abe3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c3abe6 mov dword ptr [edi + esi*4], eax */
  w32((uint32_t)(EDI + ESI*4), (EAX));
  /* 11c3abe9 jmp 0x11c3ac1d */
  goto L_11c3ac1d;
L_11c3abeb:;
  /* 11c3abeb test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11c3abed jne 0x11c3ac69 */
  if (!C.zf) goto L_11c3ac69;
  /* 11c3abef test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c3abf1 jge 0x11c3abf5 */
  if ((C.sf==C.of)) goto L_11c3abf5;
  /* 11c3abf3 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
L_11c3abf5:;
  /* 11c3abf5 lea eax, [esi*4 + 8] */
  EAX = ((uint32_t)(ESI*4 + 0x8));
  /* 11c3abfc push eax */
  push32((uint32_t)(EAX));
  /* 11c3abfd push edi */
  push32((uint32_t)(EDI));
  /* 11c3abfe call 0x11c340d5 */
  push32(0x11c3ac03u); f_11c340d5();
  /* 11c3ac03 pop ecx */
  ECX = (pop32());
  /* 11c3ac04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3ac06 pop ecx */
  ECX = (pop32());
  /* 11c3ac07 je 0x11c3ab4d */
  if (C.zf) goto L_11c3ab4d;
  /* 11c3ac0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c3ac10 mov dword ptr [eax + esi*4], ecx */
  w32((uint32_t)(EAX + ESI*4), (ECX));
  /* 11c3ac13 and dword ptr [eax + esi*4 + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x4)))&(0x0u); w32((uint32_t)(EAX + ESI*4 + 0x4), (_r)); fl_logic(_r,32); }
L_11c3ac18:;
  /* 11c3ac18 mov dword ptr [0x11c5674c], eax */
  w32((uint32_t)(0x11c5674c), (EAX));
L_11c3ac1d:;
  /* 11c3ac1d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3ac21 je 0x11c3ac69 */
  if (C.zf) goto L_11c3ac69;
  /* 11c3ac23 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c3ac26 call 0x11c35da0 */
  push32(0x11c3ac2bu); f_11c35da0();
  /* 11c3ac2b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c3ac2c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c3ac2d push eax */
  push32((uint32_t)(EAX));
  /* 11c3ac2e call 0x11c344f2 */
  push32(0x11c3ac33u); f_11c344f2();
  /* 11c3ac33 mov esi, eax */
  ESI = (EAX);
  /* 11c3ac35 pop ecx */
  ECX = (pop32());
  /* 11c3ac36 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c3ac38 pop ecx */
  ECX = (pop32());
  /* 11c3ac39 je 0x11c3ac69 */
  if (C.zf) goto L_11c3ac69;
  /* 11c3ac3b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c3ac3e push esi */
  push32((uint32_t)(ESI));
  /* 11c3ac3f call 0x11c35910 */
  push32(0x11c3ac44u); f_11c35910();
  /* 11c3ac44 mov eax, esi */
  EAX = (ESI);
  /* 11c3ac46 pop ecx */
  ECX = (pop32());
  /* 11c3ac47 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3ac4a pop ecx */
  ECX = (pop32());
  /* 11c3ac4b add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3ac4e and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 11c3ac51 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c3ac52 neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c3ac54 sbb ebx, ebx */
  { uint32_t _a=(EBX),_b=(EBX),_r=_a-_b-C.cf; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3ac56 not ebx */
  EBX = (~(EBX));
  /* 11c3ac58 and ebx, eax */
  { uint32_t _r=(EBX)&(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 11c3ac5a push ebx */
  push32((uint32_t)(EBX));
  /* 11c3ac5b push esi */
  push32((uint32_t)(ESI));
  /* 11c3ac5c call dword ptr [0x11c3d01c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d01c))), 0x11c3ac62u);
  /* 11c3ac62 push esi */
  push32((uint32_t)(ESI));
  /* 11c3ac63 call 0x11c3606c */
  push32(0x11c3ac68u); f_11c3606c();
  /* 11c3ac68 pop ecx */
  ECX = (pop32());
L_11c3ac69:;
  /* 11c3ac69 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c3ac6b jmp 0x11c3ab50 */
  goto L_11c3ab50;
}

/* FUN_1000ac70 @ 0x11c3ac70 (88 bytes, 35 insns) */
void f_11c3ac70(void) {
  FTRACE(0x11c3ac70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3ac70 push esi */
  push32((uint32_t)(ESI));
  /* 11c3ac71 mov esi, dword ptr [0x11c5674c] */
  ESI = (r32((uint32_t)(0x11c5674c)));
  /* 11c3ac77 push edi */
  push32((uint32_t)(EDI));
  /* 11c3ac78 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c3ac7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3ac7c je 0x11c3acab */
  if (C.zf) goto L_11c3acab;
  /* 11c3ac7e mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
L_11c3ac82:;
  /* 11c3ac82 push edi */
  push32((uint32_t)(EDI));
  /* 11c3ac83 push eax */
  push32((uint32_t)(EAX));
  /* 11c3ac84 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 11c3ac88 call 0x11c3a4a4 */
  push32(0x11c3ac8du); f_11c3a4a4();
  /* 11c3ac8d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3ac90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3ac92 jne 0x11c3aca1 */
  if (!C.zf) goto L_11c3aca1;
  /* 11c3ac94 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c3ac96 mov al, byte ptr [eax + edi] */
  AL = (r8((uint32_t)(EAX + EDI*1)));
  /* 11c3ac99 cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3ac9b je 0x11c3acbb */
  if (C.zf) goto L_11c3acbb;
  /* 11c3ac9d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c3ac9f je 0x11c3acbb */
  if (C.zf) goto L_11c3acbb;
L_11c3aca1:;
  /* 11c3aca1 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11c3aca4 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3aca7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3aca9 jne 0x11c3ac82 */
  if (!C.zf) goto L_11c3ac82;
L_11c3acab:;
  /* 11c3acab mov eax, esi */
  EAX = (ESI);
  /* 11c3acad sub eax, dword ptr [0x11c5674c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11c5674c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3acb3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11c3acb6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11c3acb8:;
  /* 11c3acb8 pop edi */
  EDI = (pop32());
  /* 11c3acb9 pop esi */
  ESI = (pop32());
  /* 11c3acba ret  */
  ESPCHK(0x11c3ac70u, _esp0);
  ESP += 4; return;
L_11c3acbb:;
  /* 11c3acbb mov eax, esi */
  EAX = (ESI);
  /* 11c3acbd sub eax, dword ptr [0x11c5674c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11c5674c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3acc3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11c3acc6 jmp 0x11c3acb8 */
  goto L_11c3acb8;
}

/* FUN_1000acc8 @ 0x11c3acc8 (103 bytes, 49 insns) */
void f_11c3acc8(void) {
  FTRACE(0x11c3acc8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3acc8 push edi */
  push32((uint32_t)(EDI));
  /* 11c3acc9 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c3accd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11c3accf test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11c3acd1 jne 0x11c3acd7 */
  if (!C.zf) goto L_11c3acd7;
  /* 11c3acd3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c3acd5 pop edi */
  EDI = (pop32());
  /* 11c3acd6 ret  */
  ESPCHK(0x11c3acc8u, _esp0);
  ESP += 4; return;
L_11c3acd7:;
  /* 11c3acd7 cmp dword ptr [edi], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3acda lea eax, [edi + 4] */
  EAX = ((uint32_t)(EDI + 0x4));
  /* 11c3acdd je 0x11c3ace9 */
  if (C.zf) goto L_11c3ace9;
L_11c3acdf:;
  /* 11c3acdf mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11c3ace1 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c3ace2 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3ace5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11c3ace7 jne 0x11c3acdf */
  if (!C.zf) goto L_11c3acdf;
L_11c3ace9:;
  /* 11c3ace9 push ebx */
  push32((uint32_t)(EBX));
  /* 11c3acea push ebp */
  push32((uint32_t)(EBP));
  /* 11c3aceb lea eax, [ecx*4 + 4] */
  EAX = ((uint32_t)(ECX*4 + 0x4));
  /* 11c3acf2 push esi */
  push32((uint32_t)(ESI));
  /* 11c3acf3 push eax */
  push32((uint32_t)(EAX));
  /* 11c3acf4 call 0x11c344f2 */
  push32(0x11c3acf9u); f_11c344f2();
  /* 11c3acf9 mov esi, eax */
  ESI = (EAX);
  /* 11c3acfb pop ecx */
  ECX = (pop32());
  /* 11c3acfc test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c3acfe mov ebp, esi */
  EBP = (ESI);
  /* 11c3ad00 jne 0x11c3ad0a */
  if (!C.zf) goto L_11c3ad0a;
  /* 11c3ad02 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c3ad04 call 0x11c33897 */
  push32(0x11c3ad09u); f_11c33897();
  /* 11c3ad09 pop ecx */
  ECX = (pop32());
L_11c3ad0a:;
  /* 11c3ad0a mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11c3ad0c mov ebx, edi */
  EBX = (EDI);
L_11c3ad0e:;
  /* 11c3ad0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3ad10 je 0x11c3ad25 */
  if (C.zf) goto L_11c3ad25;
  /* 11c3ad12 push eax */
  push32((uint32_t)(EAX));
  /* 11c3ad13 add ebx, 4 */
  { uint32_t _a=(EBX),_b=(0x4u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3ad16 call 0x11c3aed1 */
  push32(0x11c3ad1bu); f_11c3aed1();
  /* 11c3ad1b mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11c3ad1d mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11c3ad1f pop ecx */
  ECX = (pop32());
  /* 11c3ad20 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3ad23 jmp 0x11c3ad0e */
  goto L_11c3ad0e;
L_11c3ad25:;
  /* 11c3ad25 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11c3ad28 mov eax, ebp */
  EAX = (EBP);
  /* 11c3ad2a pop esi */
  ESI = (pop32());
  /* 11c3ad2b pop ebp */
  EBP = (pop32());
  /* 11c3ad2c pop ebx */
  EBX = (pop32());
  /* 11c3ad2d pop edi */
  EDI = (pop32());
  /* 11c3ad2e ret  */
  ESPCHK(0x11c3acc8u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ad2f @ 0x11c3ad2f (93 bytes, 32 insns) */
void f_11c3ad2f(void) {
  FTRACE(0x11c3ad2fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3ad2f push esi */
  push32((uint32_t)(ESI));
  /* 11c3ad30 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c3ad34 cmp esi, dword ptr [0x11c57e60] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11c57e60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3ad3a jae 0x11c3ad74 */
  if (!C.cf) goto L_11c3ad74;
  /* 11c3ad3c mov ecx, esi */
  ECX = (ESI);
  /* 11c3ad3e mov eax, esi */
  EAX = (ESI);
  /* 11c3ad40 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11c3ad43 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11c3ad46 mov ecx, dword ptr [ecx*4 + 0x11c57d60] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11c57d60)));
  /* 11c3ad4d lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11c3ad50 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11c3ad55 je 0x11c3ad74 */
  if (C.zf) goto L_11c3ad74;
  /* 11c3ad57 push edi */
  push32((uint32_t)(EDI));
  /* 11c3ad58 push esi */
  push32((uint32_t)(ESI));
  /* 11c3ad59 call 0x11c39dd7 */
  push32(0x11c3ad5eu); f_11c39dd7();
  /* 11c3ad5e push esi */
  push32((uint32_t)(ESI));
  /* 11c3ad5f call 0x11c3ad8c */
  push32(0x11c3ad64u); f_11c3ad8c();
  /* 11c3ad64 push esi */
  push32((uint32_t)(ESI));
  /* 11c3ad65 mov edi, eax */
  EDI = (EAX);
  /* 11c3ad67 call 0x11c39e36 */
  push32(0x11c3ad6cu); f_11c39e36();
  /* 11c3ad6c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3ad6f mov eax, edi */
  EAX = (EDI);
  /* 11c3ad71 pop edi */
  EDI = (pop32());
  /* 11c3ad72 pop esi */
  ESI = (pop32());
  /* 11c3ad73 ret  */
  ESPCHK(0x11c3ad2fu, _esp0);
  ESP += 4; return;
L_11c3ad74:;
  /* 11c3ad74 call 0x11c39d04 */
  push32(0x11c3ad79u); f_11c39d04();
  /* 11c3ad79 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11c3ad7f call 0x11c39d0d */
  push32(0x11c3ad84u); f_11c39d0d();
  /* 11c3ad84 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11c3ad87 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c3ad8a pop esi */
  ESI = (pop32());
  /* 11c3ad8b ret  */
  ESPCHK(0x11c3ad2fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000ad8c @ 0x11c3ad8c (131 bytes, 52 insns) */
void f_11c3ad8c(void) {
  FTRACE(0x11c3ad8cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3ad8c push esi */
  push32((uint32_t)(ESI));
  /* 11c3ad8d mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c3ad91 push edi */
  push32((uint32_t)(EDI));
  /* 11c3ad92 push esi */
  push32((uint32_t)(ESI));
  /* 11c3ad93 call 0x11c39d95 */
  push32(0x11c3ad98u); f_11c39d95();
  /* 11c3ad98 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3ad9b pop ecx */
  ECX = (pop32());
  /* 11c3ad9c je 0x11c3adda */
  if (C.zf) goto L_11c3adda;
  /* 11c3ad9e cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3ada1 je 0x11c3ada8 */
  if (C.zf) goto L_11c3ada8;
  /* 11c3ada3 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3ada6 jne 0x11c3adbe */
  if (!C.zf) goto L_11c3adbe;
L_11c3ada8:;
  /* 11c3ada8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c3adaa call 0x11c39d95 */
  push32(0x11c3adafu); f_11c39d95();
  /* 11c3adaf push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3adb1 mov edi, eax */
  EDI = (EAX);
  /* 11c3adb3 call 0x11c39d95 */
  push32(0x11c3adb8u); f_11c39d95();
  /* 11c3adb8 pop ecx */
  ECX = (pop32());
  /* 11c3adb9 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3adbb pop ecx */
  ECX = (pop32());
  /* 11c3adbc je 0x11c3adda */
  if (C.zf) goto L_11c3adda;
L_11c3adbe:;
  /* 11c3adbe push esi */
  push32((uint32_t)(ESI));
  /* 11c3adbf call 0x11c39d95 */
  push32(0x11c3adc4u); f_11c39d95();
  /* 11c3adc4 pop ecx */
  ECX = (pop32());
  /* 11c3adc5 push eax */
  push32((uint32_t)(EAX));
  /* 11c3adc6 call dword ptr [0x11c3d018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d018))), 0x11c3adccu);
  /* 11c3adcc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3adce jne 0x11c3adda */
  if (!C.zf) goto L_11c3adda;
  /* 11c3add0 call dword ptr [0x11c3d0f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d0f8))), 0x11c3add6u);
  /* 11c3add6 mov edi, eax */
  EDI = (EAX);
  /* 11c3add8 jmp 0x11c3addc */
  goto L_11c3addc;
L_11c3adda:;
  /* 11c3adda xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11c3addc:;
  /* 11c3addc push esi */
  push32((uint32_t)(ESI));
  /* 11c3addd call 0x11c39d16 */
  push32(0x11c3ade2u); f_11c39d16();
  /* 11c3ade2 mov eax, esi */
  EAX = (ESI);
  /* 11c3ade4 and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 11c3ade7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11c3adea pop ecx */
  ECX = (pop32());
  /* 11c3adeb mov eax, dword ptr [eax*4 + 0x11c57d60] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11c57d60)));
  /* 11c3adf2 lea ecx, [esi + esi*8] */
  ECX = ((uint32_t)(ESI + ESI*8));
  /* 11c3adf5 and byte ptr [eax + ecx*4 + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + ECX*4 + 0x4)))&(0x0u); w8((uint32_t)(EAX + ECX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 11c3adfa test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11c3adfc je 0x11c3ae0a */
  if (C.zf) goto L_11c3ae0a;
  /* 11c3adfe push edi */
  push32((uint32_t)(EDI));
  /* 11c3adff call 0x11c39c91 */
  push32(0x11c3ae04u); f_11c39c91();
  /* 11c3ae04 pop ecx */
  ECX = (pop32());
  /* 11c3ae05 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c3ae08 jmp 0x11c3ae0c */
  goto L_11c3ae0c;
L_11c3ae0a:;
  /* 11c3ae0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c3ae0c:;
  /* 11c3ae0c pop edi */
  EDI = (pop32());
  /* 11c3ae0d pop esi */
  ESI = (pop32());
  /* 11c3ae0e ret  */
  ESPCHK(0x11c3ad8cu, _esp0);
  ESP += 4; return;
}

/* __freebuf @ 0x11c3ae0f (43 bytes, 17 insns) */
void f_11c3ae0f(void) {
  FTRACE(0x11c3ae0fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3ae0f push esi */
  push32((uint32_t)(ESI));
  /* 11c3ae10 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c3ae14 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11c3ae17 test al, 0x83 */
  { uint32_t _r=(AL)&(0x83u); fl_logic(_r,8); }
  /* 11c3ae19 je 0x11c3ae38 */
  if (C.zf) goto L_11c3ae38;
  /* 11c3ae1b test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11c3ae1d je 0x11c3ae38 */
  if (C.zf) goto L_11c3ae38;
  /* 11c3ae1f push dword ptr [esi + 8] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x8))));
  /* 11c3ae22 call 0x11c3606c */
  push32(0x11c3ae27u); f_11c3606c();
  /* 11c3ae27 and word ptr [esi + 0xc], 0xfbf7 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0xfbf7u); w16((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,16); }
  /* 11c3ae2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c3ae2f pop ecx */
  ECX = (pop32());
  /* 11c3ae30 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11c3ae32 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 11c3ae35 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
L_11c3ae38:;
  /* 11c3ae38 pop esi */
  ESI = (pop32());
  /* 11c3ae39 ret  */
  ESPCHK(0x11c3ae0fu, _esp0);
  ESP += 4; return;
}

