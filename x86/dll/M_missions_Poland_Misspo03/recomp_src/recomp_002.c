#include "recomp.h"

/* FUN_10011550 @ 0x10881550 (878 bytes, 273 insns) */
void f_10881550(void) {
  FTRACE(0x10881550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10881550 push ebp */
  push32((uint32_t)(EBP));
  /* 10881551 mov ebp, esp */
  EBP = (ESP);
  /* 10881553 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10881556 push esi */
  push32((uint32_t)(ESI));
  /* 10881557 mov eax, dword ptr [0x1089fc98] */
  EAX = (r32((uint32_t)(0x1089fc98)));
  /* 1088155c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1088155f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10881566 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1088156d jmp 0x10881578 */
  goto L_10881578;
L_1088156f:;
  /* 1088156f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10881572 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10881575 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10881578:;
  /* 10881578 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1088157c jae 0x108815b1 */
  if (!C.cf) goto L_108815b1;
  /* 1088157e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10881581 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10881584 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10881587 push ecx */
  push32((uint32_t)(ECX));
  /* 10881588 call 0x108773d0 */
  push32(0x1088158du); f_108773d0();
  /* 1088158d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10881590 mov esi, eax */
  ESI = (EAX);
  /* 10881592 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10881595 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10881598 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 1088159c push ecx */
  push32((uint32_t)(ECX));
  /* 1088159d call 0x108773d0 */
  push32(0x108815a2u); f_108773d0();
  /* 108815a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108815a5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108815a8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 108815ac mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 108815af jmp 0x1088156f */
  goto L_1088156f;
L_108815b1:;
  /* 108815b1 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 108815b8 jmp 0x108815c3 */
  goto L_108815c3;
L_108815ba:;
  /* 108815ba mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108815bd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108815c0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_108815c3:;
  /* 108815c3 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108815c7 jae 0x108815fd */
  if (!C.cf) goto L_108815fd;
  /* 108815c9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108815cc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108815cf mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 108815d3 push eax */
  push32((uint32_t)(EAX));
  /* 108815d4 call 0x108773d0 */
  push32(0x108815d9u); f_108773d0();
  /* 108815d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108815dc mov esi, eax */
  ESI = (EAX);
  /* 108815de mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108815e1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108815e4 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 108815e8 push eax */
  push32((uint32_t)(EAX));
  /* 108815e9 call 0x108773d0 */
  push32(0x108815eeu); f_108773d0();
  /* 108815ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108815f1 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108815f4 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 108815f8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108815fb jmp 0x108815ba */
  goto L_108815ba;
L_108815fd:;
  /* 108815fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10881600 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10881606 push eax */
  push32((uint32_t)(EAX));
  /* 10881607 call 0x108773d0 */
  push32(0x1088160cu); f_108773d0();
  /* 1088160c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1088160f mov esi, eax */
  ESI = (EAX);
  /* 10881611 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10881614 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 1088161a push edx */
  push32((uint32_t)(EDX));
  /* 1088161b call 0x108773d0 */
  push32(0x10881620u); f_108773d0();
  /* 10881620 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10881623 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10881626 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1088162a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1088162d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10881630 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10881636 push edx */
  push32((uint32_t)(EDX));
  /* 10881637 call 0x108773d0 */
  push32(0x1088163cu); f_108773d0();
  /* 1088163c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1088163f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10881642 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10881646 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10881649 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1088164c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 10881652 push ecx */
  push32((uint32_t)(ECX));
  /* 10881653 call 0x108773d0 */
  push32(0x10881658u); f_108773d0();
  /* 10881658 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1088165b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1088165e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10881662 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10881665 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10881668 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 1088166e push edx */
  push32((uint32_t)(EDX));
  /* 1088166f call 0x108773d0 */
  push32(0x10881674u); f_108773d0();
  /* 10881674 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10881677 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1088167a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1088167e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10881681 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10881684 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10881689 push eax */
  push32((uint32_t)(EAX));
  /* 1088168a call 0x10874580 */
  push32(0x1088168fu); f_10874580();
  /* 1088168f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10881692 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10881695 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10881699 je 0x108818b6 */
  if (C.zf) goto L_108818b6;
  /* 1088169f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108816a2 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 108816a5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108816a8 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108816ae mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 108816b1 push 0xac */
  push32((uint32_t)(0xacu));
  /* 108816b6 mov eax, dword ptr [0x1089fc98] */
  EAX = (r32((uint32_t)(0x1089fc98)));
  /* 108816bb push eax */
  push32((uint32_t)(EAX));
  /* 108816bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108816bf push ecx */
  push32((uint32_t)(ECX));
  /* 108816c0 call 0x1087ae80 */
  push32(0x108816c5u); f_1087ae80();
  /* 108816c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108816c8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 108816cf jmp 0x108816da */
  goto L_108816da;
L_108816d1:;
  /* 108816d1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108816d4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108816d7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_108816da:;
  /* 108816da cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108816de jae 0x1088174e */
  if (!C.cf) goto L_1088174e;
  /* 108816e0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108816e3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108816e6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108816e9 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 108816ec mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108816ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108816f2 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 108816f5 push edx */
  push32((uint32_t)(EDX));
  /* 108816f6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 108816f9 push eax */
  push32((uint32_t)(EAX));
  /* 108816fa call 0x10877550 */
  push32(0x108816ffu); f_10877550();
  /* 108816ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10881702 push eax */
  push32((uint32_t)(EAX));
  /* 10881703 call 0x108773d0 */
  push32(0x10881708u); f_108773d0();
  /* 10881708 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1088170b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1088170e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10881712 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10881715 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10881718 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1088171b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1088171e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 10881722 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10881725 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10881728 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 1088172c push edx */
  push32((uint32_t)(EDX));
  /* 1088172d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10881730 push eax */
  push32((uint32_t)(EAX));
  /* 10881731 call 0x10877550 */
  push32(0x10881736u); f_10877550();
  /* 10881736 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10881739 push eax */
  push32((uint32_t)(EAX));
  /* 1088173a call 0x108773d0 */
  push32(0x1088173fu); f_108773d0();
  /* 1088173f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10881742 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10881745 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10881749 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1088174c jmp 0x108816d1 */
  goto L_108816d1;
L_1088174e:;
  /* 1088174e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10881755 jmp 0x10881760 */
  goto L_10881760;
L_10881757:;
  /* 10881757 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1088175a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1088175d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10881760:;
  /* 10881760 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10881764 jae 0x108817d6 */
  if (!C.cf) goto L_108817d6;
  /* 10881766 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10881769 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1088176c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1088176f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 10881773 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10881776 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10881779 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 1088177d push eax */
  push32((uint32_t)(EAX));
  /* 1088177e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10881781 push ecx */
  push32((uint32_t)(ECX));
  /* 10881782 call 0x10877550 */
  push32(0x10881787u); f_10877550();
  /* 10881787 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1088178a push eax */
  push32((uint32_t)(EAX));
  /* 1088178b call 0x108773d0 */
  push32(0x10881790u); f_108773d0();
  /* 10881790 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10881793 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10881796 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1088179a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1088179d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108817a0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 108817a3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 108817a6 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 108817aa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108817ad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108817b0 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 108817b4 push eax */
  push32((uint32_t)(EAX));
  /* 108817b5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108817b8 push ecx */
  push32((uint32_t)(ECX));
  /* 108817b9 call 0x10877550 */
  push32(0x108817beu); f_10877550();
  /* 108817be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108817c1 push eax */
  push32((uint32_t)(EAX));
  /* 108817c2 call 0x108773d0 */
  push32(0x108817c7u); f_108773d0();
  /* 108817c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108817ca mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108817cd lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 108817d1 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 108817d4 jmp 0x10881757 */
  goto L_10881757;
L_108817d6:;
  /* 108817d6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108817d9 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108817dc mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 108817e2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108817e5 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 108817eb push ecx */
  push32((uint32_t)(ECX));
  /* 108817ec mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108817ef push edx */
  push32((uint32_t)(EDX));
  /* 108817f0 call 0x10877550 */
  push32(0x108817f5u); f_10877550();
  /* 108817f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108817f8 push eax */
  push32((uint32_t)(EAX));
  /* 108817f9 call 0x108773d0 */
  push32(0x108817feu); f_108773d0();
  /* 108817fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10881801 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10881804 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10881808 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1088180b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1088180e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10881811 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 10881817 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1088181a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10881820 push eax */
  push32((uint32_t)(EAX));
  /* 10881821 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10881824 push ecx */
  push32((uint32_t)(ECX));
  /* 10881825 call 0x10877550 */
  push32(0x1088182au); f_10877550();
  /* 1088182a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1088182d push eax */
  push32((uint32_t)(EAX));
  /* 1088182e call 0x108773d0 */
  push32(0x10881833u); f_108773d0();
  /* 10881833 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10881836 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10881839 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1088183d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10881840 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10881843 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10881846 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 1088184c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1088184f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 10881855 push ecx */
  push32((uint32_t)(ECX));
  /* 10881856 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10881859 push edx */
  push32((uint32_t)(EDX));
  /* 1088185a call 0x10877550 */
  push32(0x1088185fu); f_10877550();
  /* 1088185f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10881862 push eax */
  push32((uint32_t)(EAX));
  /* 10881863 call 0x108773d0 */
  push32(0x10881868u); f_108773d0();
  /* 10881868 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1088186b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1088186e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10881872 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10881875 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10881878 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1088187b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 10881881 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10881884 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 1088188a push eax */
  push32((uint32_t)(EAX));
  /* 1088188b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1088188e push ecx */
  push32((uint32_t)(ECX));
  /* 1088188f call 0x10877550 */
  push32(0x10881894u); f_10877550();
  /* 10881894 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10881897 push eax */
  push32((uint32_t)(EAX));
  /* 10881898 call 0x108773d0 */
  push32(0x1088189du); f_108773d0();
  /* 1088189d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108818a0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108818a3 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 108818a7 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 108818aa mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108818ad mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108818b0 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_108818b6:;
  /* 108818b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108818b9 pop esi */
  ESI = (pop32());
  /* 108818ba mov esp, ebp */
  ESP = (EBP);
  /* 108818bc pop ebp */
  EBP = (pop32());
  /* 108818bd ret  */
  ESPCHK(0x10881550u, _esp0);
  ESP += 4; return;
}

/* FUN_100118c0 @ 0x108818c0 (31 bytes, 15 insns) */
void f_108818c0(void) {
  FTRACE(0x108818c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108818c0 push ebp */
  push32((uint32_t)(EBP));
  /* 108818c1 mov ebp, esp */
  EBP = (ESP);
  /* 108818c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 108818c5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108818c8 push eax */
  push32((uint32_t)(EAX));
  /* 108818c9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108818cc push ecx */
  push32((uint32_t)(ECX));
  /* 108818cd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108818d0 push edx */
  push32((uint32_t)(EDX));
  /* 108818d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108818d4 push eax */
  push32((uint32_t)(EAX));
  /* 108818d5 call 0x108818e0 */
  push32(0x108818dau); f_108818e0();
  /* 108818da add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108818dd pop ebp */
  EBP = (pop32());
  /* 108818de ret  */
  ESPCHK(0x108818c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100118e0 @ 0x108818e0 (393 bytes, 123 insns) */
void f_108818e0(void) {
  FTRACE(0x108818e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108818e0 push ebp */
  push32((uint32_t)(EBP));
  /* 108818e1 mov ebp, esp */
  EBP = (ESP);
  /* 108818e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108818e6 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108818ea jne 0x108818f6 */
  if (!C.zf) goto L_108818f6;
  /* 108818ec mov eax, dword ptr [0x1089fc98] */
  EAX = (r32((uint32_t)(0x1089fc98)));
  /* 108818f1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 108818f4 jmp 0x108818fc */
  goto L_108818fc;
L_108818f6:;
  /* 108818f6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 108818f9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_108818fc:;
  /* 108818fc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108818ff mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10881902 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10881905 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10881908 push 0x108a09c4 */
  push32((uint32_t)(0x108a09c4u));
  /* 1088190d call dword ptr [0x108a3388] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3388))), 0x10881913u);
  /* 10881913 cmp dword ptr [0x108a09b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a09b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1088191a je 0x1088193a */
  if (C.zf) goto L_1088193a;
  /* 1088191c push 0x108a09c4 */
  push32((uint32_t)(0x108a09c4u));
  /* 10881921 call dword ptr [0x108a3378] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3378))), 0x10881927u);
  /* 10881927 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10881929 call 0x10877fa0 */
  push32(0x1088192eu); f_10877fa0();
  /* 1088192e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10881931 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10881938 jmp 0x10881941 */
  goto L_10881941;
L_1088193a:;
  /* 1088193a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10881941:;
  /* 10881941 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10881945 jbe 0x10881a32 */
  if ((C.cf||C.zf)) goto L_10881a32;
  /* 1088194b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1088194e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10881950 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 10881953 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10881957 je 0x10881961 */
  if (C.zf) goto L_10881961;
  /* 10881959 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1088195d je 0x10881966 */
  if (C.zf) goto L_10881966;
  /* 1088195f jmp 0x108819c0 */
  goto L_108819c0;
L_10881961:;
  /* 10881961 jmp 0x10881a32 */
  goto L_10881a32;
L_10881966:;
  /* 10881966 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10881969 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1088196c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1088196f mov dword ptr [0x108a09a0], 0 */
  w32((uint32_t)(0x108a09a0), (0x0u));
  /* 10881979 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1088197c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1088197f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10881982 jne 0x10881997 */
  if (!C.zf) goto L_10881997;
  /* 10881984 mov dword ptr [0x108a09a0], 1 */
  w32((uint32_t)(0x108a09a0), (0x1u));
  /* 1088198e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10881991 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10881994 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10881997:;
  /* 10881997 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1088199a push ecx */
  push32((uint32_t)(ECX));
  /* 1088199b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 1088199e push edx */
  push32((uint32_t)(EDX));
  /* 1088199f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 108819a2 push eax */
  push32((uint32_t)(EAX));
  /* 108819a3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108819a6 push ecx */
  push32((uint32_t)(ECX));
  /* 108819a7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108819aa mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 108819ac push eax */
  push32((uint32_t)(EAX));
  /* 108819ad call 0x10881a70 */
  push32(0x108819b2u); f_10881a70();
  /* 108819b2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108819b5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108819b8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108819bb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 108819be jmp 0x10881a2d */
  goto L_10881a2d;
L_108819c0:;
  /* 108819c0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108819c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108819c5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 108819c7 mov ecx, dword ptr [0x1089ec98] */
  ECX = (r32((uint32_t)(0x1089ec98)));
  /* 108819cd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108819cf mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 108819d3 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 108819d9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108819db je 0x10881a08 */
  if (C.zf) goto L_10881a08;
  /* 108819dd cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108819e1 jbe 0x10881a08 */
  if ((C.cf||C.zf)) goto L_10881a08;
  /* 108819e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108819e6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108819e9 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108819eb mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 108819ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108819f0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108819f3 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 108819f6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108819f9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108819fc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 108819ff mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10881a02 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10881a05 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10881a08:;
  /* 10881a08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10881a0b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10881a0e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10881a10 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10881a12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10881a15 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10881a18 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10881a1b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10881a1e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10881a21 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10881a24 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10881a27 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10881a2a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10881a2d:;
  /* 10881a2d jmp 0x10881941 */
  goto L_10881941;
L_10881a32:;
  /* 10881a32 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10881a36 je 0x10881a44 */
  if (C.zf) goto L_10881a44;
  /* 10881a38 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10881a3a call 0x10878040 */
  push32(0x10881a3fu); f_10878040();
  /* 10881a3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10881a42 jmp 0x10881a4f */
  goto L_10881a4f;
L_10881a44:;
  /* 10881a44 push 0x108a09c4 */
  push32((uint32_t)(0x108a09c4u));
  /* 10881a49 call dword ptr [0x108a3378] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3378))), 0x10881a4fu);
L_10881a4f:;
  /* 10881a4f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10881a53 jbe 0x10881a63 */
  if ((C.cf||C.zf)) goto L_10881a63;
  /* 10881a55 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10881a58 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10881a5b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10881a5e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10881a61 jmp 0x10881a65 */
  goto L_10881a65;
L_10881a63:;
  /* 10881a63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10881a65:;
  /* 10881a65 mov esp, ebp */
  ESP = (EBP);
  /* 10881a67 pop ebp */
  EBP = (pop32());
  /* 10881a68 ret  */
  ESPCHK(0x108818e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a70 @ 0x10881a70 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_10881a70(void) {
  FTRACE(0x10881a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10881a70 push ebp */
  push32((uint32_t)(EBP));
  /* 10881a71 mov ebp, esp */
  EBP = (ESP);
  /* 10881a73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10881a76 push esi */
  push32((uint32_t)(ESI));
  /* 10881a77 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 10881a7b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10881a7e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10881a81 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10881a84 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10881a87 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10881a8b ja 0x10881fd8 */
  if ((!C.cf&&!C.zf)) goto L_10881fd8;
  /* 10881a91 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10881a94 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10881a96 mov dl, byte ptr [eax + 0x10882039] */
  DL = (r8((uint32_t)(EAX + 0x10882039)));
  /* 10881a9c jmp dword ptr [edx*4 + 0x10881fdd] */
  switch (EDX) {
    case 0: goto L_10881fb6;
    case 1: goto L_10881ac5;
    case 2: goto L_10881b0b;
    case 3: goto L_10881c58;
    case 4: goto L_10881c80;
    case 5: goto L_10881d1f;
    case 6: goto L_10881d8b;
    case 7: goto L_10881db4;
    case 8: goto L_10881df5;
    case 9: goto L_10881ed7;
    case 10: goto L_10881f3e;
    case 11: goto L_10881f8b;
    case 12: goto L_10881aa3;
    case 13: goto L_10881ae8;
    case 14: goto L_10881b2e;
    case 15: goto L_10881c2e;
    case 16: goto L_10881cc5;
    case 17: goto L_10881cf2;
    case 18: goto L_10881d47;
    case 19: goto L_10881dcb;
    case 20: goto L_10881e79;
    case 21: goto L_10881f08;
    case 22: goto L_10881fd8;
    default: x86_unimpl("switch@0x10881a9c out of table"); return;
  }
L_10881aa3:;
  /* 10881aa3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10881aa6 push ecx */
  push32((uint32_t)(ECX));
  /* 10881aa7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10881aaa push edx */
  push32((uint32_t)(EDX));
  /* 10881aab mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10881aae mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10881ab1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10881ab4 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10881ab7 push eax */
  push32((uint32_t)(EAX));
  /* 10881ab8 call 0x10882090 */
  push32(0x10881abdu); f_10882090();
  /* 10881abd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10881ac0 jmp 0x10881fd8 */
  goto L_10881fd8;
L_10881ac5:;
  /* 10881ac5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10881ac8 push ecx */
  push32((uint32_t)(ECX));
  /* 10881ac9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10881acc push edx */
  push32((uint32_t)(EDX));
  /* 10881acd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10881ad0 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10881ad3 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10881ad6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 10881ada push eax */
  push32((uint32_t)(EAX));
  /* 10881adb call 0x10882090 */
  push32(0x10881ae0u); f_10882090();
  /* 10881ae0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10881ae3 jmp 0x10881fd8 */
  goto L_10881fd8;
L_10881ae8:;
  /* 10881ae8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10881aeb push ecx */
  push32((uint32_t)(ECX));
  /* 10881aec mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10881aef push edx */
  push32((uint32_t)(EDX));
  /* 10881af0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10881af3 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10881af6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10881af9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10881afd push eax */
  push32((uint32_t)(EAX));
  /* 10881afe call 0x10882090 */
  push32(0x10881b03u); f_10882090();
  /* 10881b03 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10881b06 jmp 0x10881fd8 */
  goto L_10881fd8;
L_10881b0b:;
  /* 10881b0b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10881b0e push ecx */
  push32((uint32_t)(ECX));
  /* 10881b0f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10881b12 push edx */
  push32((uint32_t)(EDX));
  /* 10881b13 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10881b16 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10881b19 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10881b1c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10881b20 push eax */
  push32((uint32_t)(EAX));
  /* 10881b21 call 0x10882090 */
  push32(0x10881b26u); f_10882090();
  /* 10881b26 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10881b29 jmp 0x10881fd8 */
  goto L_10881fd8;
L_10881b2e:;
  /* 10881b2e cmp dword ptr [0x108a09a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a09a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10881b35 je 0x10881bb6 */
  if (C.zf) goto L_10881bb6;
  /* 10881b37 mov dword ptr [0x108a09a0], 0 */
  w32((uint32_t)(0x108a09a0), (0x0u));
  /* 10881b41 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10881b44 push ecx */
  push32((uint32_t)(ECX));
  /* 10881b45 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10881b48 push edx */
  push32((uint32_t)(EDX));
  /* 10881b49 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10881b4c push eax */
  push32((uint32_t)(EAX));
  /* 10881b4d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10881b50 push ecx */
  push32((uint32_t)(ECX));
  /* 10881b51 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10881b54 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 10881b5a push eax */
  push32((uint32_t)(EAX));
  /* 10881b5b call 0x10882240 */
  push32(0x10881b60u); f_10882240();
  /* 10881b60 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10881b63 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10881b66 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10881b69 jne 0x10881b70 */
  if (!C.zf) goto L_10881b70;
  /* 10881b6b jmp 0x10881fd8 */
  goto L_10881fd8;
L_10881b70:;
  /* 10881b70 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10881b73 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10881b75 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 10881b78 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10881b7b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10881b7d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10881b80 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10881b83 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10881b85 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10881b88 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10881b8a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10881b8d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10881b90 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10881b92 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10881b95 push ecx */
  push32((uint32_t)(ECX));
  /* 10881b96 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10881b99 push edx */
  push32((uint32_t)(EDX));
  /* 10881b9a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10881b9d push eax */
  push32((uint32_t)(EAX));
  /* 10881b9e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10881ba1 push ecx */
  push32((uint32_t)(ECX));
  /* 10881ba2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10881ba5 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10881bab push eax */
  push32((uint32_t)(EAX));
  /* 10881bac call 0x10882240 */
  push32(0x10881bb1u); f_10882240();
  /* 10881bb1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10881bb4 jmp 0x10881c29 */
  goto L_10881c29;
L_10881bb6:;
  /* 10881bb6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10881bb9 push ecx */
  push32((uint32_t)(ECX));
  /* 10881bba mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10881bbd push edx */
  push32((uint32_t)(EDX));
  /* 10881bbe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10881bc1 push eax */
  push32((uint32_t)(EAX));
  /* 10881bc2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10881bc5 push ecx */
  push32((uint32_t)(ECX));
  /* 10881bc6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10881bc9 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 10881bcf push eax */
  push32((uint32_t)(EAX));
  /* 10881bd0 call 0x10882240 */
  push32(0x10881bd5u); f_10882240();
  /* 10881bd5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10881bd8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10881bdb cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10881bde jne 0x10881be5 */
  if (!C.zf) goto L_10881be5;
  /* 10881be0 jmp 0x10881fd8 */
  goto L_10881fd8;
L_10881be5:;
  /* 10881be5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10881be8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10881bea mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 10881bed mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10881bf0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10881bf2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10881bf5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10881bf8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10881bfa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10881bfd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10881bff sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10881c02 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10881c05 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10881c07 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10881c0a push ecx */
  push32((uint32_t)(ECX));
  /* 10881c0b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10881c0e push edx */
  push32((uint32_t)(EDX));
  /* 10881c0f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10881c12 push eax */
  push32((uint32_t)(EAX));
  /* 10881c13 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10881c16 push ecx */
  push32((uint32_t)(ECX));
  /* 10881c17 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10881c1a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10881c20 push eax */
  push32((uint32_t)(EAX));
  /* 10881c21 call 0x10882240 */
  push32(0x10881c26u); f_10882240();
  /* 10881c26 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10881c29:;
  /* 10881c29 jmp 0x10881fd8 */
  goto L_10881fd8;
L_10881c2e:;
  /* 10881c2e mov ecx, dword ptr [0x108a09a0] */
  ECX = (r32((uint32_t)(0x108a09a0)));
  /* 10881c34 mov dword ptr [0x108a09b0], ecx */
  w32((uint32_t)(0x108a09b0), (ECX));
  /* 10881c3a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10881c3d push edx */
  push32((uint32_t)(EDX));
  /* 10881c3e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10881c41 push eax */
  push32((uint32_t)(EAX));
  /* 10881c42 push 2 */
  push32((uint32_t)(0x2u));
  /* 10881c44 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10881c47 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10881c4a push edx */
  push32((uint32_t)(EDX));
  /* 10881c4b call 0x108820e0 */
  push32(0x10881c50u); f_108820e0();
  /* 10881c50 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10881c53 jmp 0x10881fd8 */
  goto L_10881fd8;
L_10881c58:;
  /* 10881c58 mov eax, dword ptr [0x108a09a0] */
  EAX = (r32((uint32_t)(0x108a09a0)));
  /* 10881c5d mov dword ptr [0x108a09b0], eax */
  w32((uint32_t)(0x108a09b0), (EAX));
  /* 10881c62 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10881c65 push ecx */
  push32((uint32_t)(ECX));
  /* 10881c66 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10881c69 push edx */
  push32((uint32_t)(EDX));
  /* 10881c6a push 2 */
  push32((uint32_t)(0x2u));
  /* 10881c6c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10881c6f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10881c72 push ecx */
  push32((uint32_t)(ECX));
  /* 10881c73 call 0x108820e0 */
  push32(0x10881c78u); f_108820e0();
  /* 10881c78 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10881c7b jmp 0x10881fd8 */
  goto L_10881fd8;
L_10881c80:;
  /* 10881c80 mov edx, dword ptr [0x108a09a0] */
  EDX = (r32((uint32_t)(0x108a09a0)));
  /* 10881c86 mov dword ptr [0x108a09b0], edx */
  w32((uint32_t)(0x108a09b0), (EDX));
  /* 10881c8c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10881c8f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 10881c92 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10881c93 mov ecx, 0xc */
  ECX = (0xcu);
  /* 10881c98 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10881c9a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10881c9d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10881ca1 jne 0x10881caa */
  if (!C.zf) goto L_10881caa;
  /* 10881ca3 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_10881caa:;
  /* 10881caa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10881cad push edx */
  push32((uint32_t)(EDX));
  /* 10881cae mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10881cb1 push eax */
  push32((uint32_t)(EAX));
  /* 10881cb2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10881cb4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10881cb7 push ecx */
  push32((uint32_t)(ECX));
  /* 10881cb8 call 0x108820e0 */
  push32(0x10881cbdu); f_108820e0();
  /* 10881cbd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10881cc0 jmp 0x10881fd8 */
  goto L_10881fd8;
L_10881cc5:;
  /* 10881cc5 mov edx, dword ptr [0x108a09a0] */
  EDX = (r32((uint32_t)(0x108a09a0)));
  /* 10881ccb mov dword ptr [0x108a09b0], edx */
  w32((uint32_t)(0x108a09b0), (EDX));
  /* 10881cd1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10881cd4 push eax */
  push32((uint32_t)(EAX));
  /* 10881cd5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10881cd8 push ecx */
  push32((uint32_t)(ECX));
  /* 10881cd9 push 3 */
  push32((uint32_t)(0x3u));
  /* 10881cdb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10881cde mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10881ce1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10881ce4 push eax */
  push32((uint32_t)(EAX));
  /* 10881ce5 call 0x108820e0 */
  push32(0x10881ceau); f_108820e0();
  /* 10881cea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10881ced jmp 0x10881fd8 */
  goto L_10881fd8;
L_10881cf2:;
  /* 10881cf2 mov ecx, dword ptr [0x108a09a0] */
  ECX = (r32((uint32_t)(0x108a09a0)));
  /* 10881cf8 mov dword ptr [0x108a09b0], ecx */
  w32((uint32_t)(0x108a09b0), (ECX));
  /* 10881cfe mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10881d01 push edx */
  push32((uint32_t)(EDX));
  /* 10881d02 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10881d05 push eax */
  push32((uint32_t)(EAX));
  /* 10881d06 push 2 */
  push32((uint32_t)(0x2u));
  /* 10881d08 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10881d0b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10881d0e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10881d11 push edx */
  push32((uint32_t)(EDX));
  /* 10881d12 call 0x108820e0 */
  push32(0x10881d17u); f_108820e0();
  /* 10881d17 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10881d1a jmp 0x10881fd8 */
  goto L_10881fd8;
L_10881d1f:;
  /* 10881d1f mov eax, dword ptr [0x108a09a0] */
  EAX = (r32((uint32_t)(0x108a09a0)));
  /* 10881d24 mov dword ptr [0x108a09b0], eax */
  w32((uint32_t)(0x108a09b0), (EAX));
  /* 10881d29 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10881d2c push ecx */
  push32((uint32_t)(ECX));
  /* 10881d2d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10881d30 push edx */
  push32((uint32_t)(EDX));
  /* 10881d31 push 2 */
  push32((uint32_t)(0x2u));
  /* 10881d33 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10881d36 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10881d39 push ecx */
  push32((uint32_t)(ECX));
  /* 10881d3a call 0x108820e0 */
  push32(0x10881d3fu); f_108820e0();
  /* 10881d3f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10881d42 jmp 0x10881fd8 */
  goto L_10881fd8;
L_10881d47:;
  /* 10881d47 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10881d4a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10881d4e jg 0x10881d6c */
  if ((!C.zf&&C.sf==C.of)) goto L_10881d6c;
  /* 10881d50 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10881d53 push eax */
  push32((uint32_t)(EAX));
  /* 10881d54 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10881d57 push ecx */
  push32((uint32_t)(ECX));
  /* 10881d58 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10881d5b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10881d61 push eax */
  push32((uint32_t)(EAX));
  /* 10881d62 call 0x10882090 */
  push32(0x10881d67u); f_10882090();
  /* 10881d67 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10881d6a jmp 0x10881d86 */
  goto L_10881d86;
L_10881d6c:;
  /* 10881d6c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10881d6f push ecx */
  push32((uint32_t)(ECX));
  /* 10881d70 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10881d73 push edx */
  push32((uint32_t)(EDX));
  /* 10881d74 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10881d77 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 10881d7d push ecx */
  push32((uint32_t)(ECX));
  /* 10881d7e call 0x10882090 */
  push32(0x10881d83u); f_10882090();
  /* 10881d83 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10881d86:;
  /* 10881d86 jmp 0x10881fd8 */
  goto L_10881fd8;
L_10881d8b:;
  /* 10881d8b mov edx, dword ptr [0x108a09a0] */
  EDX = (r32((uint32_t)(0x108a09a0)));
  /* 10881d91 mov dword ptr [0x108a09b0], edx */
  w32((uint32_t)(0x108a09b0), (EDX));
  /* 10881d97 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10881d9a push eax */
  push32((uint32_t)(EAX));
  /* 10881d9b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10881d9e push ecx */
  push32((uint32_t)(ECX));
  /* 10881d9f push 2 */
  push32((uint32_t)(0x2u));
  /* 10881da1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10881da4 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10881da6 push eax */
  push32((uint32_t)(EAX));
  /* 10881da7 call 0x108820e0 */
  push32(0x10881dacu); f_108820e0();
  /* 10881dac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10881daf jmp 0x10881fd8 */
  goto L_10881fd8;
L_10881db4:;
  /* 10881db4 mov ecx, dword ptr [0x108a09a0] */
  ECX = (r32((uint32_t)(0x108a09a0)));
  /* 10881dba mov dword ptr [0x108a09b0], ecx */
  w32((uint32_t)(0x108a09b0), (ECX));
  /* 10881dc0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10881dc3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10881dc6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10881dc9 jmp 0x10881e1d */
  goto L_10881e1d;
L_10881dcb:;
  /* 10881dcb mov ecx, dword ptr [0x108a09a0] */
  ECX = (r32((uint32_t)(0x108a09a0)));
  /* 10881dd1 mov dword ptr [0x108a09b0], ecx */
  w32((uint32_t)(0x108a09b0), (ECX));
  /* 10881dd7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10881dda push edx */
  push32((uint32_t)(EDX));
  /* 10881ddb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10881dde push eax */
  push32((uint32_t)(EAX));
  /* 10881ddf push 1 */
  push32((uint32_t)(0x1u));
  /* 10881de1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10881de4 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10881de7 push edx */
  push32((uint32_t)(EDX));
  /* 10881de8 call 0x108820e0 */
  push32(0x10881dedu); f_108820e0();
  /* 10881ded add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10881df0 jmp 0x10881fd8 */
  goto L_10881fd8;
L_10881df5:;
  /* 10881df5 mov eax, dword ptr [0x108a09a0] */
  EAX = (r32((uint32_t)(0x108a09a0)));
  /* 10881dfa mov dword ptr [0x108a09b0], eax */
  w32((uint32_t)(0x108a09b0), (EAX));
  /* 10881dff mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10881e02 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10881e06 jne 0x10881e11 */
  if (!C.zf) goto L_10881e11;
  /* 10881e08 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 10881e0f jmp 0x10881e1d */
  goto L_10881e1d;
L_10881e11:;
  /* 10881e11 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10881e14 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10881e17 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10881e1a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10881e1d:;
  /* 10881e1d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10881e20 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10881e23 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10881e26 jge 0x10881e31 */
  if ((C.sf==C.of)) goto L_10881e31;
  /* 10881e28 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10881e2f jmp 0x10881e5e */
  goto L_10881e5e;
L_10881e31:;
  /* 10881e31 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10881e34 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10881e37 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10881e38 mov ecx, 7 */
  ECX = (0x7u);
  /* 10881e3d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10881e3f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10881e42 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10881e45 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10881e48 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10881e49 mov ecx, 7 */
  ECX = (0x7u);
  /* 10881e4e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10881e50 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10881e53 jl 0x10881e5e */
  if ((C.sf!=C.of)) goto L_10881e5e;
  /* 10881e55 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10881e58 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10881e5b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10881e5e:;
  /* 10881e5e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10881e61 push eax */
  push32((uint32_t)(EAX));
  /* 10881e62 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10881e65 push ecx */
  push32((uint32_t)(ECX));
  /* 10881e66 push 2 */
  push32((uint32_t)(0x2u));
  /* 10881e68 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10881e6b push edx */
  push32((uint32_t)(EDX));
  /* 10881e6c call 0x108820e0 */
  push32(0x10881e71u); f_108820e0();
  /* 10881e71 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10881e74 jmp 0x10881fd8 */
  goto L_10881fd8;
L_10881e79:;
  /* 10881e79 cmp dword ptr [0x108a09a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a09a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10881e80 je 0x10881eb0 */
  if (C.zf) goto L_10881eb0;
  /* 10881e82 mov dword ptr [0x108a09a0], 0 */
  w32((uint32_t)(0x108a09a0), (0x0u));
  /* 10881e8c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10881e8f push eax */
  push32((uint32_t)(EAX));
  /* 10881e90 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10881e93 push ecx */
  push32((uint32_t)(ECX));
  /* 10881e94 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10881e97 push edx */
  push32((uint32_t)(EDX));
  /* 10881e98 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10881e9b push eax */
  push32((uint32_t)(EAX));
  /* 10881e9c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10881e9f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10881ea5 push edx */
  push32((uint32_t)(EDX));
  /* 10881ea6 call 0x10882240 */
  push32(0x10881eabu); f_10882240();
  /* 10881eab add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10881eae jmp 0x10881ed2 */
  goto L_10881ed2;
L_10881eb0:;
  /* 10881eb0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10881eb3 push eax */
  push32((uint32_t)(EAX));
  /* 10881eb4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10881eb7 push ecx */
  push32((uint32_t)(ECX));
  /* 10881eb8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10881ebb push edx */
  push32((uint32_t)(EDX));
  /* 10881ebc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10881ebf push eax */
  push32((uint32_t)(EAX));
  /* 10881ec0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10881ec3 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10881ec9 push edx */
  push32((uint32_t)(EDX));
  /* 10881eca call 0x10882240 */
  push32(0x10881ecfu); f_10882240();
  /* 10881ecf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10881ed2:;
  /* 10881ed2 jmp 0x10881fd8 */
  goto L_10881fd8;
L_10881ed7:;
  /* 10881ed7 mov dword ptr [0x108a09a0], 0 */
  w32((uint32_t)(0x108a09a0), (0x0u));
  /* 10881ee1 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10881ee4 push eax */
  push32((uint32_t)(EAX));
  /* 10881ee5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10881ee8 push ecx */
  push32((uint32_t)(ECX));
  /* 10881ee9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10881eec push edx */
  push32((uint32_t)(EDX));
  /* 10881eed mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10881ef0 push eax */
  push32((uint32_t)(EAX));
  /* 10881ef1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10881ef4 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 10881efa push edx */
  push32((uint32_t)(EDX));
  /* 10881efb call 0x10882240 */
  push32(0x10881f00u); f_10882240();
  /* 10881f00 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10881f03 jmp 0x10881fd8 */
  goto L_10881fd8;
L_10881f08:;
  /* 10881f08 mov eax, dword ptr [0x108a09a0] */
  EAX = (r32((uint32_t)(0x108a09a0)));
  /* 10881f0d mov dword ptr [0x108a09b0], eax */
  w32((uint32_t)(0x108a09b0), (EAX));
  /* 10881f12 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10881f15 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10881f18 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10881f19 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10881f1e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10881f20 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10881f23 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10881f26 push edx */
  push32((uint32_t)(EDX));
  /* 10881f27 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10881f2a push eax */
  push32((uint32_t)(EAX));
  /* 10881f2b push 2 */
  push32((uint32_t)(0x2u));
  /* 10881f2d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10881f30 push ecx */
  push32((uint32_t)(ECX));
  /* 10881f31 call 0x108820e0 */
  push32(0x10881f36u); f_108820e0();
  /* 10881f36 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10881f39 jmp 0x10881fd8 */
  goto L_10881fd8;
L_10881f3e:;
  /* 10881f3e mov edx, dword ptr [0x108a09a0] */
  EDX = (r32((uint32_t)(0x108a09a0)));
  /* 10881f44 mov dword ptr [0x108a09b0], edx */
  w32((uint32_t)(0x108a09b0), (EDX));
  /* 10881f4a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10881f4d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 10881f50 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10881f51 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10881f56 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10881f58 mov ecx, eax */
  ECX = (EAX);
  /* 10881f5a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10881f5d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10881f60 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10881f63 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10881f66 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10881f67 mov esi, 0x64 */
  ESI = (0x64u);
  /* 10881f6c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10881f6e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10881f70 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10881f73 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10881f76 push eax */
  push32((uint32_t)(EAX));
  /* 10881f77 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10881f7a push ecx */
  push32((uint32_t)(ECX));
  /* 10881f7b push 4 */
  push32((uint32_t)(0x4u));
  /* 10881f7d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10881f80 push edx */
  push32((uint32_t)(EDX));
  /* 10881f81 call 0x108820e0 */
  push32(0x10881f86u); f_108820e0();
  /* 10881f86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10881f89 jmp 0x10881fd8 */
  goto L_10881fd8;
L_10881f8b:;
  /* 10881f8b call 0x108830a0 */
  push32(0x10881f90u); f_108830a0();
  /* 10881f90 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10881f93 push eax */
  push32((uint32_t)(EAX));
  /* 10881f94 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10881f97 push ecx */
  push32((uint32_t)(ECX));
  /* 10881f98 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10881f9b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10881f9d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10881fa1 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 10881fa4 mov ecx, dword ptr [eax*4 + 0x1089fe1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1089fe1c)));
  /* 10881fab push ecx */
  push32((uint32_t)(ECX));
  /* 10881fac call 0x10882090 */
  push32(0x10881fb1u); f_10882090();
  /* 10881fb1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10881fb4 jmp 0x10881fd8 */
  goto L_10881fd8;
L_10881fb6:;
  /* 10881fb6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10881fb9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10881fbb mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 10881fbe mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10881fc1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10881fc3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10881fc6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10881fc9 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10881fcb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10881fce mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10881fd0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10881fd3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10881fd6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10881fd8:;
  /* 10881fd8 pop esi */
  ESI = (pop32());
  /* 10881fd9 mov esp, ebp */
  ESP = (EBP);
  /* 10881fdb pop ebp */
  EBP = (pop32());
  /* 10881fdc ret  */
  ESPCHK(0x10881a70u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x10882090 (72 bytes, 30 insns) */
void f_10882090(void) {
  FTRACE(0x10882090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10882090 push ebp */
  push32((uint32_t)(EBP));
  /* 10882091 mov ebp, esp */
  EBP = (ESP);
L_10882093:;
  /* 10882093 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10882096 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10882099 je 0x108820d6 */
  if (C.zf) goto L_108820d6;
  /* 1088209b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1088209e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 108820a1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108820a3 je 0x108820d6 */
  if (C.zf) goto L_108820d6;
  /* 108820a5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108820a8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108820aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108820ad mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 108820af mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 108820b1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108820b4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108820b6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108820b9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108820bc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 108820be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108820c1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108820c4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 108820c7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108820ca mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108820cc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108820cf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108820d2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 108820d4 jmp 0x10882093 */
  goto L_10882093;
L_108820d6:;
  /* 108820d6 pop ebp */
  EBP = (pop32());
  /* 108820d7 ret  */
  ESPCHK(0x10882090u, _esp0);
  ESP += 4; return;
}

/* FUN_100120e0 @ 0x108820e0 (173 bytes, 64 insns) */
void f_108820e0(void) {
  FTRACE(0x108820e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108820e0 push ebp */
  push32((uint32_t)(EBP));
  /* 108820e1 mov ebp, esp */
  EBP = (ESP);
  /* 108820e3 push ecx */
  push32((uint32_t)(ECX));
  /* 108820e4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108820eb cmp dword ptr [0x108a09b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a09b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108820f2 je 0x1088210a */
  if (C.zf) goto L_1088210a;
  /* 108820f4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108820f7 push eax */
  push32((uint32_t)(EAX));
  /* 108820f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108820fb push ecx */
  push32((uint32_t)(ECX));
  /* 108820fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108820ff push edx */
  push32((uint32_t)(EDX));
  /* 10882100 call 0x10882190 */
  push32(0x10882105u); f_10882190();
  /* 10882105 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10882108 jmp 0x10882189 */
  goto L_10882189;
L_1088210a:;
  /* 1088210a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1088210d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10882110 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10882112 jae 0x10882180 */
  if (!C.cf) goto L_10882180;
  /* 10882114 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10882117 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1088211a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1088211d jmp 0x10882128 */
  goto L_10882128;
L_1088211f:;
  /* 1088211f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10882122 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10882125 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10882128:;
  /* 10882128 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1088212b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1088212e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10882130 je 0x10882164 */
  if (C.zf) goto L_10882164;
  /* 10882132 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10882135 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10882136 mov ecx, 0xa */
  ECX = (0xau);
  /* 1088213b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1088213d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10882140 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10882143 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10882145 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10882148 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 1088214b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1088214e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1088214f mov ecx, 0xa */
  ECX = (0xau);
  /* 10882154 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10882156 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10882159 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1088215c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1088215f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10882162 jmp 0x1088211f */
  goto L_1088211f;
L_10882164:;
  /* 10882164 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10882167 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10882169 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1088216c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1088216f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10882171 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10882174 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10882176 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10882179 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1088217c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1088217e jmp 0x10882189 */
  goto L_10882189;
L_10882180:;
  /* 10882180 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10882183 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10882189:;
  /* 10882189 mov esp, ebp */
  ESP = (EBP);
  /* 1088218b pop ebp */
  EBP = (pop32());
  /* 1088218c ret  */
  ESPCHK(0x108820e0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x10882190 (172 bytes, 65 insns) */
void f_10882190(void) {
  FTRACE(0x10882190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10882190 push ebp */
  push32((uint32_t)(EBP));
  /* 10882191 mov ebp, esp */
  EBP = (ESP);
  /* 10882193 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10882196 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10882199 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1088219b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1088219e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108821a1 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108821a4 jbe 0x108821eb */
  if ((C.cf||C.zf)) goto L_108821eb;
L_108821a6:;
  /* 108821a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108821a9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 108821aa mov ecx, 0xa */
  ECX = (0xau);
  /* 108821af idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 108821b1 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108821b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108821b7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 108821b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108821bc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108821bf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108821c2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108821c5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108821c7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108821ca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108821cd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 108821cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108821d2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 108821d3 mov ecx, 0xa */
  ECX = (0xau);
  /* 108821d8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 108821da mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 108821dd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108821e1 jle 0x108821eb */
  if ((C.zf||C.sf!=C.of)) goto L_108821eb;
  /* 108821e3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108821e6 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108821e9 ja 0x108821a6 */
  if ((!C.cf&&!C.zf)) goto L_108821a6;
L_108821eb:;
  /* 108821eb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108821ee mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108821f0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108821f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108821f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108821f9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 108821fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108821fe sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10882201 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10882204:;
  /* 10882204 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10882207 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10882209 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1088220c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1088220f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10882212 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10882214 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10882216 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10882219 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1088221c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1088221f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10882222 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10882225 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10882227 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1088222a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1088222d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10882230 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10882233 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10882236 jb 0x10882204 */
  if (C.cf) goto L_10882204;
  /* 10882238 mov esp, ebp */
  ESP = (EBP);
  /* 1088223a pop ebp */
  EBP = (pop32());
  /* 1088223b ret  */
  ESPCHK(0x10882190u, _esp0);
  ESP += 4; return;
}

/* FUN_10012240 @ 0x10882240 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_10882240(void) {
  FTRACE(0x10882240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10882240 push ebp */
  push32((uint32_t)(EBP));
  /* 10882241 mov ebp, esp */
  EBP = (ESP);
  /* 10882243 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10882246:;
  /* 10882246 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10882249 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1088224c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1088224e je 0x108826bc */
  if (C.zf) goto L_108826bc;
  /* 10882254 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10882257 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1088225a je 0x108826bc */
  if (C.zf) goto L_108826bc;
  /* 10882260 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 10882264 mov dword ptr [0x108a09b0], 0 */
  w32((uint32_t)(0x108a09b0), (0x0u));
  /* 1088226e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10882275 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10882278 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1088227b jmp 0x10882286 */
  goto L_10882286;
L_1088227d:;
  /* 1088227d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10882280 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10882283 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10882286:;
  /* 10882286 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10882289 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1088228c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1088228f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10882292 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10882295 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10882298 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1088229b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1088229d jne 0x108822a1 */
  if (!C.zf) goto L_108822a1;
  /* 1088229f jmp 0x1088227d */
  goto L_1088227d;
L_108822a1:;
  /* 108822a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108822a4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108822a7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108822aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108822ad movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108822b0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 108822b3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108822b6 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108822b9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 108822bc cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108822c0 ja 0x10882610 */
  if ((!C.cf&&!C.zf)) goto L_10882610;
  /* 108822c6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108822c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108822cb mov al, byte ptr [ecx + 0x108826ec] */
  AL = (r8((uint32_t)(ECX + 0x108826ec)));
  /* 108822d1 jmp dword ptr [eax*4 + 0x108826c0] */
  switch (EAX) {
    case 0: goto L_1088252f;
    case 1: goto L_10882413;
    case 2: goto L_1088239e;
    case 3: goto L_108822d8;
    case 4: goto L_10882316;
    case 5: goto L_10882377;
    case 6: goto L_108823c5;
    case 7: goto L_108823ec;
    case 8: goto L_1088245a;
    case 9: goto L_10882354;
    case 10: goto L_10882610;
    default: x86_unimpl("switch@0x108822d1 out of table"); return;
  }
L_108822d8:;
  /* 108822d8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108822db mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 108822de mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108822e1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108822e4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 108822e7 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108822eb ja 0x10882311 */
  if ((!C.cf&&!C.zf)) goto L_10882311;
  /* 108822ed mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108822f0 jmp dword ptr [ecx*4 + 0x1088273f] */
  switch (ECX) {
    case 0: goto L_108822f7;
    case 1: goto L_10882301;
    case 2: goto L_10882307;
    case 3: goto L_1088230d;
    case 4: goto L_10882335;
    case 5: goto L_1088233f;
    case 6: goto L_10882345;
    case 7: goto L_1088234b;
    default: x86_unimpl("switch@0x108822f0 out of table"); return;
  }
L_108822f7:;
  /* 108822f7 mov dword ptr [0x108a09b0], 1 */
  w32((uint32_t)(0x108a09b0), (0x1u));
L_10882301:;
  /* 10882301 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 10882305 jmp 0x10882311 */
  goto L_10882311;
L_10882307:;
  /* 10882307 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 1088230b jmp 0x10882311 */
  goto L_10882311;
L_1088230d:;
  /* 1088230d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_10882311:;
  /* 10882311 jmp 0x10882610 */
  goto L_10882610;
L_10882316:;
  /* 10882316 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10882319 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1088231c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1088231f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10882322 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10882325 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10882329 ja 0x1088234f */
  if ((!C.cf&&!C.zf)) goto L_1088234f;
  /* 1088232b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1088232e jmp dword ptr [ecx*4 + 0x1088274f] */
  switch (ECX) {
    case 0: goto L_10882335;
    case 1: goto L_1088233f;
    case 2: goto L_10882345;
    case 3: goto L_1088234b;
    default: x86_unimpl("switch@0x1088232e out of table"); return;
  }
L_10882335:;
  /* 10882335 mov dword ptr [0x108a09b0], 1 */
  w32((uint32_t)(0x108a09b0), (0x1u));
L_1088233f:;
  /* 1088233f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 10882343 jmp 0x1088234f */
  goto L_1088234f;
L_10882345:;
  /* 10882345 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 10882349 jmp 0x1088234f */
  goto L_1088234f;
L_1088234b:;
  /* 1088234b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_1088234f:;
  /* 1088234f jmp 0x10882610 */
  goto L_10882610;
L_10882354:;
  /* 10882354 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10882357 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1088235a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1088235e je 0x10882368 */
  if (C.zf) goto L_10882368;
  /* 10882360 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10882364 je 0x1088236e */
  if (C.zf) goto L_1088236e;
  /* 10882366 jmp 0x10882372 */
  goto L_10882372;
L_10882368:;
  /* 10882368 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 1088236c jmp 0x10882372 */
  goto L_10882372;
L_1088236e:;
  /* 1088236e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_10882372:;
  /* 10882372 jmp 0x10882610 */
  goto L_10882610;
L_10882377:;
  /* 10882377 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1088237a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1088237d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10882381 je 0x1088238b */
  if (C.zf) goto L_1088238b;
  /* 10882383 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10882387 je 0x10882395 */
  if (C.zf) goto L_10882395;
  /* 10882389 jmp 0x10882399 */
  goto L_10882399;
L_1088238b:;
  /* 1088238b mov dword ptr [0x108a09b0], 1 */
  w32((uint32_t)(0x108a09b0), (0x1u));
L_10882395:;
  /* 10882395 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_10882399:;
  /* 10882399 jmp 0x10882610 */
  goto L_10882610;
L_1088239e:;
  /* 1088239e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108823a1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 108823a4 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108823a8 je 0x108823b2 */
  if (C.zf) goto L_108823b2;
  /* 108823aa cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108823ae je 0x108823bc */
  if (C.zf) goto L_108823bc;
  /* 108823b0 jmp 0x108823c0 */
  goto L_108823c0;
L_108823b2:;
  /* 108823b2 mov dword ptr [0x108a09b0], 1 */
  w32((uint32_t)(0x108a09b0), (0x1u));
L_108823bc:;
  /* 108823bc mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_108823c0:;
  /* 108823c0 jmp 0x10882610 */
  goto L_10882610;
L_108823c5:;
  /* 108823c5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108823c8 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 108823cb cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108823cf je 0x108823d9 */
  if (C.zf) goto L_108823d9;
  /* 108823d1 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108823d5 je 0x108823e3 */
  if (C.zf) goto L_108823e3;
  /* 108823d7 jmp 0x108823e7 */
  goto L_108823e7;
L_108823d9:;
  /* 108823d9 mov dword ptr [0x108a09b0], 1 */
  w32((uint32_t)(0x108a09b0), (0x1u));
L_108823e3:;
  /* 108823e3 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_108823e7:;
  /* 108823e7 jmp 0x10882610 */
  goto L_10882610;
L_108823ec:;
  /* 108823ec mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108823ef mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 108823f2 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108823f6 je 0x10882400 */
  if (C.zf) goto L_10882400;
  /* 108823f8 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108823fc je 0x1088240a */
  if (C.zf) goto L_1088240a;
  /* 108823fe jmp 0x1088240e */
  goto L_1088240e;
L_10882400:;
  /* 10882400 mov dword ptr [0x108a09b0], 1 */
  w32((uint32_t)(0x108a09b0), (0x1u));
L_1088240a:;
  /* 1088240a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_1088240e:;
  /* 1088240e jmp 0x10882610 */
  goto L_10882610;
L_10882413:;
  /* 10882413 push 0x1089c97c */
  push32((uint32_t)(0x1089c97cu));
  /* 10882418 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1088241b push ecx */
  push32((uint32_t)(ECX));
  /* 1088241c call 0x10882c70 */
  push32(0x10882421u); f_10882c70();
  /* 10882421 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10882424 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10882426 jne 0x10882433 */
  if (!C.zf) goto L_10882433;
  /* 10882428 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1088242b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1088242e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10882431 jmp 0x10882451 */
  goto L_10882451;
L_10882433:;
  /* 10882433 push 0x1089c978 */
  push32((uint32_t)(0x1089c978u));
  /* 10882438 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1088243b push eax */
  push32((uint32_t)(EAX));
  /* 1088243c call 0x10882c70 */
  push32(0x10882441u); f_10882c70();
  /* 10882441 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10882444 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10882446 jne 0x10882451 */
  if (!C.zf) goto L_10882451;
  /* 10882448 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1088244b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1088244e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10882451:;
  /* 10882451 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 10882455 jmp 0x10882610 */
  goto L_10882610;
L_1088245a:;
  /* 1088245a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1088245d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10882461 jg 0x10882471 */
  if ((!C.zf&&C.sf==C.of)) goto L_10882471;
  /* 10882463 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10882466 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 1088246c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1088246f jmp 0x1088247d */
  goto L_1088247d;
L_10882471:;
  /* 10882471 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10882474 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 1088247a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1088247d:;
  /* 1088247d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10882481 jle 0x10882524 */
  if ((C.zf||C.sf!=C.of)) goto L_10882524;
  /* 10882487 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1088248a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1088248d jbe 0x10882524 */
  if ((C.cf||C.zf)) goto L_10882524;
  /* 10882493 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10882496 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10882498 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1088249a mov ecx, dword ptr [0x1089ec98] */
  ECX = (r32((uint32_t)(0x1089ec98)));
  /* 108824a0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108824a2 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 108824a6 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 108824ac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108824ae je 0x108824e7 */
  if (C.zf) goto L_108824e7;
  /* 108824b0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108824b3 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108824b6 jbe 0x108824e7 */
  if ((C.cf||C.zf)) goto L_108824e7;
  /* 108824b8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108824bb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108824bd mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108824c0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 108824c2 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 108824c4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108824c7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108824c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108824cc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108824cf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 108824d1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108824d4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108824d7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 108824da mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108824dd mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108824df sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108824e2 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108824e5 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_108824e7:;
  /* 108824e7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108824ea mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108824ec mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108824ef mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 108824f1 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 108824f3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108824f6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108824f8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108824fb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108824fe mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10882500 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10882503 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10882506 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10882509 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1088250c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1088250e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10882511 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10882514 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10882516 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10882519 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1088251c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1088251f jmp 0x1088247d */
  goto L_1088247d;
L_10882524:;
  /* 10882524 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10882527 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1088252a jmp 0x10882246 */
  goto L_10882246;
L_1088252f:;
  /* 1088252f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10882532 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10882535 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10882537 je 0x10882602 */
  if (C.zf) goto L_10882602;
  /* 1088253d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10882540 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10882543 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10882546:;
  /* 10882546 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10882549 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1088254c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1088254e je 0x10882600 */
  if (C.zf) goto L_10882600;
  /* 10882554 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10882557 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1088255a je 0x10882600 */
  if (C.zf) goto L_10882600;
  /* 10882560 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10882563 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10882566 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10882569 jne 0x10882579 */
  if (!C.zf) goto L_10882579;
  /* 1088256b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1088256e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10882571 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10882574 jmp 0x10882600 */
  goto L_10882600;
L_10882579:;
  /* 10882579 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1088257c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1088257e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10882580 mov edx, dword ptr [0x1089ec98] */
  EDX = (r32((uint32_t)(0x1089ec98)));
  /* 10882586 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10882588 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1088258c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10882591 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10882593 je 0x108825cc */
  if (C.zf) goto L_108825cc;
  /* 10882595 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10882598 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1088259b jbe 0x108825cc */
  if ((C.cf||C.zf)) goto L_108825cc;
  /* 1088259d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108825a0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108825a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108825a5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108825a7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 108825a9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108825ac mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108825ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108825b1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108825b4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 108825b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108825b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108825bc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 108825bf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108825c2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108825c4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108825c7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108825ca mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_108825cc:;
  /* 108825cc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108825cf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108825d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108825d4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 108825d6 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 108825d8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108825db mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108825dd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108825e0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108825e3 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 108825e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108825e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108825eb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 108825ee mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108825f1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108825f3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108825f6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108825f9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 108825fb jmp 0x10882546 */
  goto L_10882546;
L_10882600:;
  /* 10882600 jmp 0x1088260b */
  goto L_1088260b;
L_10882602:;
  /* 10882602 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10882605 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10882608 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1088260b:;
  /* 1088260b jmp 0x10882246 */
  goto L_10882246;
L_10882610:;
  /* 10882610 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10882614 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10882616 je 0x1088263c */
  if (C.zf) goto L_1088263c;
  /* 10882618 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1088261b push edx */
  push32((uint32_t)(EDX));
  /* 1088261c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1088261f push eax */
  push32((uint32_t)(EAX));
  /* 10882620 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10882623 push ecx */
  push32((uint32_t)(ECX));
  /* 10882624 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10882627 push edx */
  push32((uint32_t)(EDX));
  /* 10882628 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1088262b push eax */
  push32((uint32_t)(EAX));
  /* 1088262c call 0x10881a70 */
  push32(0x10882631u); f_10881a70();
  /* 10882631 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10882634 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10882637 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1088263a jmp 0x108826b7 */
  goto L_108826b7;
L_1088263c:;
  /* 1088263c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1088263f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10882641 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10882643 mov ecx, dword ptr [0x1089ec98] */
  ECX = (r32((uint32_t)(0x1089ec98)));
  /* 10882649 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1088264b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1088264f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10882655 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10882657 je 0x10882688 */
  if (C.zf) goto L_10882688;
  /* 10882659 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1088265c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1088265e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10882661 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10882663 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10882665 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10882668 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1088266a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1088266d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10882670 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10882672 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10882675 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10882678 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1088267b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1088267e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10882680 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10882683 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10882686 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10882688:;
  /* 10882688 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1088268b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1088268d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10882690 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10882692 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10882694 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10882697 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10882699 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1088269c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1088269f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 108826a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108826a4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108826a7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 108826aa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108826ad mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108826af sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108826b2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108826b5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_108826b7:;
  /* 108826b7 jmp 0x10882246 */
  goto L_10882246;
L_108826bc:;
  /* 108826bc mov esp, ebp */
  ESP = (EBP);
  /* 108826be pop ebp */
  EBP = (pop32());
  /* 108826bf ret  */
  ESPCHK(0x10882240u, _esp0);
  ESP += 4; return;
}

/* FUN_10012760 @ 0x10882760 (650 bytes, 178 insns) */
void f_10882760(void) {
  FTRACE(0x10882760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10882760 push ebp */
  push32((uint32_t)(EBP));
  /* 10882761 mov ebp, esp */
  EBP = (ESP);
  /* 10882763 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10882769 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1088276d jne 0x108828c9 */
  if (!C.zf) goto L_108828c9;
  /* 10882773 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10882776 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 1088277c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 10882782 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10882785 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1088278c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 10882796 push 0 */
  push32((uint32_t)(0x0u));
  /* 10882798 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 1088279e push edx */
  push32((uint32_t)(EDX));
  /* 1088279f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108827a2 push eax */
  push32((uint32_t)(EAX));
  /* 108827a3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108827a6 push ecx */
  push32((uint32_t)(ECX));
  /* 108827a7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108827aa push edx */
  push32((uint32_t)(EDX));
  /* 108827ab call 0x10883b80 */
  push32(0x108827b0u); f_10883b80();
  /* 108827b0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108827b3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108827b6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108827ba jne 0x1088284f */
  if (!C.zf) goto L_1088284f;
  /* 108827c0 call dword ptr [0x108a33b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a33b4))), 0x108827c6u);
  /* 108827c6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108827c9 je 0x108827d0 */
  if (C.zf) goto L_108827d0;
  /* 108827cb jmp 0x108828ad */
  goto L_108828ad;
L_108827d0:;
  /* 108827d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 108827d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 108827d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 108827d6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108827d9 push eax */
  push32((uint32_t)(EAX));
  /* 108827da mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108827dd push ecx */
  push32((uint32_t)(ECX));
  /* 108827de call 0x10883b80 */
  push32(0x108827e3u); f_10883b80();
  /* 108827e3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108827e6 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 108827ec cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108827f3 jne 0x108827fa */
  if (!C.zf) goto L_108827fa;
  /* 108827f5 jmp 0x108828ad */
  goto L_108828ad;
L_108827fa:;
  /* 108827fa push 0x58 */
  push32((uint32_t)(0x58u));
  /* 108827fc push 0x1089c984 */
  push32((uint32_t)(0x1089c984u));
  /* 10882801 push 2 */
  push32((uint32_t)(0x2u));
  /* 10882803 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10882809 push edx */
  push32((uint32_t)(EDX));
  /* 1088280a call 0x108745a0 */
  push32(0x1088280fu); f_108745a0();
  /* 1088280f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10882812 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10882815 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10882819 jne 0x10882820 */
  if (!C.zf) goto L_10882820;
  /* 1088281b jmp 0x108828ad */
  goto L_108828ad;
L_10882820:;
  /* 10882820 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10882827 push 0 */
  push32((uint32_t)(0x0u));
  /* 10882829 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 1088282f push eax */
  push32((uint32_t)(EAX));
  /* 10882830 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10882833 push ecx */
  push32((uint32_t)(ECX));
  /* 10882834 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10882837 push edx */
  push32((uint32_t)(EDX));
  /* 10882838 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1088283b push eax */
  push32((uint32_t)(EAX));
  /* 1088283c call 0x10883b80 */
  push32(0x10882841u); f_10883b80();
  /* 10882841 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10882844 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10882847 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1088284b jne 0x1088284f */
  if (!C.zf) goto L_1088284f;
  /* 1088284d jmp 0x108828ad */
  goto L_108828ad;
L_1088284f:;
  /* 1088284f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10882851 push 0x1089c984 */
  push32((uint32_t)(0x1089c984u));
  /* 10882856 push 2 */
  push32((uint32_t)(0x2u));
  /* 10882858 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1088285b push ecx */
  push32((uint32_t)(ECX));
  /* 1088285c call 0x108745a0 */
  push32(0x10882861u); f_108745a0();
  /* 10882861 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10882864 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 1088286a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1088286c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10882872 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10882875 jne 0x10882879 */
  if (!C.zf) goto L_10882879;
  /* 10882877 jmp 0x108828ad */
  goto L_108828ad;
L_10882879:;
  /* 10882879 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1088287c push ecx */
  push32((uint32_t)(ECX));
  /* 1088287d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10882880 push edx */
  push32((uint32_t)(EDX));
  /* 10882881 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10882887 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10882889 push ecx */
  push32((uint32_t)(ECX));
  /* 1088288a call 0x10877dc0 */
  push32(0x1088288fu); f_10877dc0();
  /* 1088288f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10882892 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10882896 je 0x108828a6 */
  if (C.zf) goto L_108828a6;
  /* 10882898 push 2 */
  push32((uint32_t)(0x2u));
  /* 1088289a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1088289d push edx */
  push32((uint32_t)(EDX));
  /* 1088289e call 0x10875030 */
  push32(0x108828a3u); f_10875030();
  /* 108828a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108828a6:;
  /* 108828a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108828a8 jmp 0x108829e6 */
  goto L_108829e6;
L_108828ad:;
  /* 108828ad cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108828b1 je 0x108828c1 */
  if (C.zf) goto L_108828c1;
  /* 108828b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 108828b5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108828b8 push eax */
  push32((uint32_t)(EAX));
  /* 108828b9 call 0x10875030 */
  push32(0x108828beu); f_10875030();
  /* 108828be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108828c1:;
  /* 108828c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108828c4 jmp 0x108829e6 */
  goto L_108829e6;
L_108828c9:;
  /* 108828c9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108828cd jne 0x108829e3 */
  if (!C.zf) goto L_108829e3;
  /* 108828d3 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 108828dd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108828e0 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 108828e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 108828e8 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 108828ee push edx */
  push32((uint32_t)(EDX));
  /* 108828ef push 0x108a08c8 */
  push32((uint32_t)(0x108a08c8u));
  /* 108828f4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108828f7 push eax */
  push32((uint32_t)(EAX));
  /* 108828f8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108828fb push ecx */
  push32((uint32_t)(ECX));
  /* 108828fc call 0x108839e0 */
  push32(0x10882901u); f_108839e0();
  /* 10882901 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10882904 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10882906 jne 0x10882910 */
  if (!C.zf) goto L_10882910;
  /* 10882908 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1088290b jmp 0x108829e6 */
  goto L_108829e6;
L_10882910:;
  /* 10882910 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10882916 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10882919 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 10882923 jmp 0x10882934 */
  goto L_10882934;
L_10882925:;
  /* 10882925 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1088292b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1088292e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_10882934:;
  /* 10882934 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1088293b jge 0x108829df */
  if ((C.sf==C.of)) goto L_108829df;
  /* 10882941 cmp dword ptr [0x1089eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1089eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10882948 jle 0x1088297b */
  if ((C.zf||C.sf!=C.of)) goto L_1088297b;
  /* 1088294a push 4 */
  push32((uint32_t)(0x4u));
  /* 1088294c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10882952 mov dl, byte ptr [ecx*2 + 0x108a08c8] */
  DL = (r8((uint32_t)(ECX*2 + 0x108a08c8)));
  /* 10882959 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 1088295f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10882965 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1088296a push eax */
  push32((uint32_t)(EAX));
  /* 1088296b call 0x1087a5b0 */
  push32(0x10882970u); f_1087a5b0();
  /* 10882970 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10882973 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10882979 jmp 0x108829ae */
  goto L_108829ae;
L_1088297b:;
  /* 1088297b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10882981 mov dl, byte ptr [ecx*2 + 0x108a08c8] */
  DL = (r8((uint32_t)(ECX*2 + 0x108a08c8)));
  /* 10882988 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 1088298e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10882994 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10882999 mov ecx, dword ptr [0x1089ec98] */
  ECX = (r32((uint32_t)(0x1089ec98)));
  /* 1088299f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108829a1 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 108829a5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 108829a8 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_108829ae:;
  /* 108829ae cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108829b5 je 0x108829d8 */
  if (C.zf) goto L_108829d8;
  /* 108829b7 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 108829bd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108829c0 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108829c3 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 108829ca lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 108829ce mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 108829d4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 108829d6 jmp 0x108829da */
  goto L_108829da;
L_108829d8:;
  /* 108829d8 jmp 0x108829df */
  goto L_108829df;
L_108829da:;
  /* 108829da jmp 0x10882925 */
  goto L_10882925;
L_108829df:;
  /* 108829df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108829e1 jmp 0x108829e6 */
  goto L_108829e6;
L_108829e3:;
  /* 108829e3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_108829e6:;
  /* 108829e6 mov esp, ebp */
  ESP = (EBP);
  /* 108829e8 pop ebp */
  EBP = (pop32());
  /* 108829e9 ret  */
  ESPCHK(0x10882760u, _esp0);
  ESP += 4; return;
}

/* FUN_100129f0 @ 0x108829f0 (10 bytes, 5 insns) */
void f_108829f0(void) {
  FTRACE(0x108829f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108829f0 push ebp */
  push32((uint32_t)(EBP));
  /* 108829f1 mov ebp, esp */
  EBP = (ESP);
  /* 108829f3 mov eax, dword ptr [0x1089fd88] */
  EAX = (r32((uint32_t)(0x1089fd88)));
  /* 108829f8 pop ebp */
  EBP = (pop32());
  /* 108829f9 ret  */
  ESPCHK(0x108829f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a00 @ 0x10882a00 (575 bytes, 196 insns) */
void f_10882a00(void) {
  FTRACE(0x10882a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10882a00 push ebp */
  push32((uint32_t)(EBP));
  /* 10882a01 mov ebp, esp */
  EBP = (ESP);
  /* 10882a03 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10882a05 push 0x1089c990 */
  push32((uint32_t)(0x1089c990u));
  /* 10882a0a push 0x1087d6a8 */
  push32((uint32_t)(0x1087d6a8u));
  /* 10882a0f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10882a15 push eax */
  push32((uint32_t)(EAX));
  /* 10882a16 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10882a1d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10882a20 push ebx */
  push32((uint32_t)(EBX));
  /* 10882a21 push esi */
  push32((uint32_t)(ESI));
  /* 10882a22 push edi */
  push32((uint32_t)(EDI));
  /* 10882a23 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10882a26 cmp dword ptr [0x108a08d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a08d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10882a2d jne 0x10882a7e */
  if (!C.zf) goto L_10882a7e;
  /* 10882a2f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10882a32 push eax */
  push32((uint32_t)(EAX));
  /* 10882a33 push 1 */
  push32((uint32_t)(0x1u));
  /* 10882a35 push 0x1089c0c4 */
  push32((uint32_t)(0x1089c0c4u));
  /* 10882a3a push 1 */
  push32((uint32_t)(0x1u));
  /* 10882a3c call dword ptr [0x108a3308] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3308))), 0x10882a42u);
  /* 10882a42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10882a44 je 0x10882a52 */
  if (C.zf) goto L_10882a52;
  /* 10882a46 mov dword ptr [0x108a08d4], 1 */
  w32((uint32_t)(0x108a08d4), (0x1u));
  /* 10882a50 jmp 0x10882a7e */
  goto L_10882a7e;
L_10882a52:;
  /* 10882a52 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10882a55 push ecx */
  push32((uint32_t)(ECX));
  /* 10882a56 push 1 */
  push32((uint32_t)(0x1u));
  /* 10882a58 push 0x1089c0c0 */
  push32((uint32_t)(0x1089c0c0u));
  /* 10882a5d push 1 */
  push32((uint32_t)(0x1u));
  /* 10882a5f push 0 */
  push32((uint32_t)(0x0u));
  /* 10882a61 call dword ptr [0x108a3318] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3318))), 0x10882a67u);
  /* 10882a67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10882a69 je 0x10882a77 */
  if (C.zf) goto L_10882a77;
  /* 10882a6b mov dword ptr [0x108a08d4], 2 */
  w32((uint32_t)(0x108a08d4), (0x2u));
  /* 10882a75 jmp 0x10882a7e */
  goto L_10882a7e;
L_10882a77:;
  /* 10882a77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10882a79 jmp 0x10882c59 */
  goto L_10882c59;
L_10882a7e:;
  /* 10882a7e cmp dword ptr [0x108a08d4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108a08d4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10882a85 jne 0x10882aa2 */
  if (!C.zf) goto L_10882aa2;
  /* 10882a87 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10882a8a push edx */
  push32((uint32_t)(EDX));
  /* 10882a8b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10882a8e push eax */
  push32((uint32_t)(EAX));
  /* 10882a8f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10882a92 push ecx */
  push32((uint32_t)(ECX));
  /* 10882a93 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10882a96 push edx */
  push32((uint32_t)(EDX));
  /* 10882a97 call dword ptr [0x108a3308] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3308))), 0x10882a9du);
  /* 10882a9d jmp 0x10882c59 */
  goto L_10882c59;
L_10882aa2:;
  /* 10882aa2 cmp dword ptr [0x108a08d4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x108a08d4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10882aa9 jne 0x10882c57 */
  if (!C.zf) goto L_10882c57;
  /* 10882aaf cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10882ab3 jne 0x10882abd */
  if (!C.zf) goto L_10882abd;
  /* 10882ab5 mov eax, dword ptr [0x108a0848] */
  EAX = (r32((uint32_t)(0x108a0848)));
  /* 10882aba mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_10882abd:;
  /* 10882abd push 0 */
  push32((uint32_t)(0x0u));
  /* 10882abf push 0 */
  push32((uint32_t)(0x0u));
  /* 10882ac1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10882ac3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10882ac5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10882ac8 push ecx */
  push32((uint32_t)(ECX));
  /* 10882ac9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10882acc push edx */
  push32((uint32_t)(EDX));
  /* 10882acd push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10882ad2 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10882ad5 push eax */
  push32((uint32_t)(EAX));
  /* 10882ad6 call dword ptr [0x108a335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a335c))), 0x10882adcu);
  /* 10882adc mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10882adf cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10882ae3 jne 0x10882aec */
  if (!C.zf) goto L_10882aec;
  /* 10882ae5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10882ae7 jmp 0x10882c59 */
  goto L_10882c59;
L_10882aec:;
  /* 10882aec mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10882af3 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10882af6 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10882af9 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10882afb call 0x10877740 */
  push32(0x10882b00u); f_10877740();
  /* 10882b00 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10882b03 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10882b06 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10882b09 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10882b0c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10882b0f push edx */
  push32((uint32_t)(EDX));
  /* 10882b10 push 0 */
  push32((uint32_t)(0x0u));
  /* 10882b12 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10882b15 push eax */
  push32((uint32_t)(EAX));
  /* 10882b16 call 0x10878310 */
  push32(0x10882b1bu); f_10878310();
  /* 10882b1b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10882b1e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10882b25 jmp 0x10882b3e */
  goto L_10882b3e;
  /* 10882b27 mov eax, 1 */
  EAX = (0x1u);
  /* 10882b2c ret  */
  ESPCHK(0x10882a00u, _esp0);
  ESP += 4; return;
  /* 10882b2d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10882b30 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10882b37 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10882b3e:;
  /* 10882b3e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10882b42 jne 0x10882b4b */
  if (!C.zf) goto L_10882b4b;
  /* 10882b44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10882b46 jmp 0x10882c59 */
  goto L_10882c59;
L_10882b4b:;
  /* 10882b4b push 0 */
  push32((uint32_t)(0x0u));
  /* 10882b4d push 0 */
  push32((uint32_t)(0x0u));
  /* 10882b4f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10882b52 push ecx */
  push32((uint32_t)(ECX));
  /* 10882b53 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10882b56 push edx */
  push32((uint32_t)(EDX));
  /* 10882b57 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10882b5a push eax */
  push32((uint32_t)(EAX));
  /* 10882b5b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10882b5e push ecx */
  push32((uint32_t)(ECX));
  /* 10882b5f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10882b64 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10882b67 push edx */
  push32((uint32_t)(EDX));
  /* 10882b68 call dword ptr [0x108a335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a335c))), 0x10882b6eu);
  /* 10882b6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10882b70 jne 0x10882b79 */
  if (!C.zf) goto L_10882b79;
  /* 10882b72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10882b74 jmp 0x10882c59 */
  goto L_10882c59;
L_10882b79:;
  /* 10882b79 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10882b80 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10882b83 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 10882b87 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10882b8a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10882b8c call 0x10877740 */
  push32(0x10882b91u); f_10877740();
  /* 10882b91 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 10882b94 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10882b97 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10882b9a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10882b9d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10882ba4 jmp 0x10882bbd */
  goto L_10882bbd;
  /* 10882ba6 mov eax, 1 */
  EAX = (0x1u);
  /* 10882bab ret  */
  ESPCHK(0x10882a00u, _esp0);
  ESP += 4; return;
  /* 10882bac mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10882baf mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10882bb6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10882bbd:;
  /* 10882bbd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10882bc1 jne 0x10882bca */
  if (!C.zf) goto L_10882bca;
  /* 10882bc3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10882bc5 jmp 0x10882c59 */
  goto L_10882c59;
L_10882bca:;
  /* 10882bca cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10882bce jne 0x10882bd9 */
  if (!C.zf) goto L_10882bd9;
  /* 10882bd0 mov edx, dword ptr [0x108a0838] */
  EDX = (r32((uint32_t)(0x108a0838)));
  /* 10882bd6 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_10882bd9:;
  /* 10882bd9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10882bdc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10882bdf mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 10882be5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10882be8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10882beb mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 10882bf2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10882bf5 push ecx */
  push32((uint32_t)(ECX));
  /* 10882bf6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10882bf9 push edx */
  push32((uint32_t)(EDX));
  /* 10882bfa mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10882bfd push eax */
  push32((uint32_t)(EAX));
  /* 10882bfe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10882c01 push ecx */
  push32((uint32_t)(ECX));
  /* 10882c02 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10882c05 push edx */
  push32((uint32_t)(EDX));
  /* 10882c06 call dword ptr [0x108a3318] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3318))), 0x10882c0cu);
  /* 10882c0c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10882c0f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10882c12 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10882c15 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10882c17 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 10882c1c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10882c22 je 0x10882c38 */
  if (C.zf) goto L_10882c38;
  /* 10882c24 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10882c27 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10882c2a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10882c2c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10882c30 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10882c36 je 0x10882c3c */
  if (C.zf) goto L_10882c3c;
L_10882c38:;
  /* 10882c38 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10882c3a jmp 0x10882c59 */
  goto L_10882c59;
L_10882c3c:;
  /* 10882c3c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10882c3f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10882c41 push eax */
  push32((uint32_t)(EAX));
  /* 10882c42 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10882c45 push ecx */
  push32((uint32_t)(ECX));
  /* 10882c46 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10882c49 push edx */
  push32((uint32_t)(EDX));
  /* 10882c4a call 0x1087c490 */
  push32(0x10882c4fu); f_1087c490();
  /* 10882c4f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10882c52 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10882c55 jmp 0x10882c59 */
  goto L_10882c59;
L_10882c57:;
  /* 10882c57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10882c59:;
  /* 10882c59 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 10882c5c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10882c5f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10882c66 pop edi */
  EDI = (pop32());
  /* 10882c67 pop esi */
  ESI = (pop32());
  /* 10882c68 pop ebx */
  EBX = (pop32());
  /* 10882c69 mov esp, ebp */
  ESP = (EBP);
  /* 10882c6b pop ebp */
  EBP = (pop32());
  /* 10882c6c ret  */
  ESPCHK(0x10882a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10012c70 @ 0x10882c70 (208 bytes, 85 insns) */
void f_10882c70(void) {
  FTRACE(0x10882c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10882c70 push ebp */
  push32((uint32_t)(EBP));
  /* 10882c71 mov ebp, esp */
  EBP = (ESP);
  /* 10882c73 push edi */
  push32((uint32_t)(EDI));
  /* 10882c74 push esi */
  push32((uint32_t)(ESI));
  /* 10882c75 push ebx */
  push32((uint32_t)(EBX));
  /* 10882c76 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10882c79 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10882c7c lea eax, [0x108a0830] */
  EAX = ((uint32_t)(0x108a0830));
  /* 10882c82 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10882c86 jne 0x10882cc3 */
  if (!C.zf) goto L_10882cc3;
  /* 10882c88 mov al, 0xff */
  AL = (0xffu);
  /* 10882c8a mov edi, edi */
  EDI = (EDI);
L_10882c8c:;
  /* 10882c8c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10882c8e je 0x10882cbe */
  if (C.zf) goto L_10882cbe;
  /* 10882c90 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10882c92 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10882c93 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 10882c95 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10882c96 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10882c98 je 0x10882c8c */
  if (C.zf) goto L_10882c8c;
  /* 10882c9a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10882c9c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10882c9e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10882ca0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10882ca3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10882ca5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10882ca7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 10882ca9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10882cab cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10882cad sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10882caf and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10882cb2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10882cb4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10882cb6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10882cb8 je 0x10882c8c */
  if (C.zf) goto L_10882c8c;
  /* 10882cba sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10882cbc sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_10882cbe:;
  /* 10882cbe movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 10882cc1 jmp 0x10882d3b */
  goto L_10882d3b;
L_10882cc3:;
  /* 10882cc3 lock inc dword ptr [0x108a09c4] */
  x86_unimpl("lock inc @ 0x10882cc3");
  /* 10882cca cmp dword ptr [0x108a09b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a09b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10882cd1 jg 0x10882cd7 */
  if ((!C.zf&&C.sf==C.of)) goto L_10882cd7;
  /* 10882cd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10882cd5 jmp 0x10882cec */
  goto L_10882cec;
L_10882cd7:;
  /* 10882cd7 lock dec dword ptr [0x108a09c4] */
  x86_unimpl("lock dec @ 0x10882cd7");
  /* 10882cde push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10882ce0 call 0x10877fa0 */
  push32(0x10882ce5u); f_10877fa0();
  /* 10882ce5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_10882cec:;
  /* 10882cec mov eax, 0xff */
  EAX = (0xffu);
  /* 10882cf1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10882cf3 nop  */
  /* nop */
L_10882cf4:;
  /* 10882cf4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10882cf6 je 0x10882d1f */
  if (C.zf) goto L_10882d1f;
  /* 10882cf8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10882cfa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10882cfb mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10882cfd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10882cfe cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10882d00 je 0x10882cf4 */
  if (C.zf) goto L_10882cf4;
  /* 10882d02 push eax */
  push32((uint32_t)(EAX));
  /* 10882d03 push ebx */
  push32((uint32_t)(EBX));
  /* 10882d04 call 0x10883de0 */
  push32(0x10882d09u); f_10883de0();
  /* 10882d09 mov ebx, eax */
  EBX = (EAX);
  /* 10882d0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10882d0e call 0x10883de0 */
  push32(0x10882d13u); f_10883de0();
  /* 10882d13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10882d16 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10882d18 je 0x10882cf4 */
  if (C.zf) goto L_10882cf4;
  /* 10882d1a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10882d1c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10882d1f:;
  /* 10882d1f mov ebx, eax */
  EBX = (EAX);
  /* 10882d21 pop eax */
  EAX = (pop32());
  /* 10882d22 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10882d24 jne 0x10882d2f */
  if (!C.zf) goto L_10882d2f;
  /* 10882d26 lock dec dword ptr [0x108a09c4] */
  x86_unimpl("lock dec @ 0x10882d26");
  /* 10882d2d jmp 0x10882d39 */
  goto L_10882d39;
L_10882d2f:;
  /* 10882d2f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10882d31 call 0x10878040 */
  push32(0x10882d36u); f_10878040();
  /* 10882d36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10882d39:;
  /* 10882d39 mov eax, ebx */
  EAX = (EBX);
L_10882d3b:;
  /* 10882d3b pop ebx */
  EBX = (pop32());
  /* 10882d3c pop esi */
  ESI = (pop32());
  /* 10882d3d pop edi */
  EDI = (pop32());
  /* 10882d3e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10882d3f ret  */
  ESPCHK(0x10882c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d40 @ 0x10882d40 (257 bytes, 103 insns) */
void f_10882d40(void) {
  FTRACE(0x10882d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10882d40 push ebp */
  push32((uint32_t)(EBP));
  /* 10882d41 mov ebp, esp */
  EBP = (ESP);
  /* 10882d43 push edi */
  push32((uint32_t)(EDI));
  /* 10882d44 push esi */
  push32((uint32_t)(ESI));
  /* 10882d45 push ebx */
  push32((uint32_t)(EBX));
  /* 10882d46 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10882d49 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10882d4b je 0x10882e3a */
  if (C.zf) goto L_10882e3a;
  /* 10882d51 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10882d54 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10882d57 lea eax, [0x108a0830] */
  EAX = ((uint32_t)(0x108a0830));
  /* 10882d5d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10882d61 jne 0x10882db1 */
  if (!C.zf) goto L_10882db1;
  /* 10882d63 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 10882d65 mov bl, 0x5a */
  BL = (0x5au);
  /* 10882d67 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 10882d69 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10882d6c:;
  /* 10882d6c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 10882d6e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10882d70 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 10882d72 je 0x10882d95 */
  if (C.zf) goto L_10882d95;
  /* 10882d74 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10882d76 je 0x10882d95 */
  if (C.zf) goto L_10882d95;
  /* 10882d78 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10882d79 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10882d7a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10882d7c jb 0x10882d84 */
  if (C.cf) goto L_10882d84;
  /* 10882d7e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10882d80 ja 0x10882d84 */
  if ((!C.cf&&!C.zf)) goto L_10882d84;
  /* 10882d82 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_10882d84:;
  /* 10882d84 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10882d86 jb 0x10882d8e */
  if (C.cf) goto L_10882d8e;
  /* 10882d88 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10882d8a ja 0x10882d8e */
  if ((!C.cf&&!C.zf)) goto L_10882d8e;
  /* 10882d8c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_10882d8e:;
  /* 10882d8e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10882d90 jne 0x10882d9f */
  if (!C.zf) goto L_10882d9f;
  /* 10882d92 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10882d93 jne 0x10882d6c */
  if (!C.zf) goto L_10882d6c;
L_10882d95:;
  /* 10882d95 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10882d97 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10882d99 je 0x10882e3a */
  if (C.zf) goto L_10882e3a;
L_10882d9f:;
  /* 10882d9f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10882da4 jb 0x10882e3a */
  if (C.cf) goto L_10882e3a;
  /* 10882daa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10882dac jmp 0x10882e3a */
  goto L_10882e3a;
L_10882db1:;
  /* 10882db1 lock inc dword ptr [0x108a09c4] */
  x86_unimpl("lock inc @ 0x10882db1");
  /* 10882db8 cmp dword ptr [0x108a09b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a09b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10882dbf jg 0x10882dc5 */
  if ((!C.zf&&C.sf==C.of)) goto L_10882dc5;
  /* 10882dc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10882dc3 jmp 0x10882dde */
  goto L_10882dde;
L_10882dc5:;
  /* 10882dc5 lock dec dword ptr [0x108a09c4] */
  x86_unimpl("lock dec @ 0x10882dc5");
  /* 10882dcc mov ebx, ecx */
  EBX = (ECX);
  /* 10882dce push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10882dd0 call 0x10877fa0 */
  push32(0x10882dd5u); f_10877fa0();
  /* 10882dd5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 10882ddc mov ecx, ebx */
  ECX = (EBX);
L_10882dde:;
  /* 10882dde xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10882de0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10882de2 mov edi, edi */
  EDI = (EDI);
L_10882de4:;
  /* 10882de4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10882de6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10882de8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10882dea je 0x10882e0f */
  if (C.zf) goto L_10882e0f;
  /* 10882dec or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10882dee je 0x10882e0f */
  if (C.zf) goto L_10882e0f;
  /* 10882df0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10882df1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10882df2 push ecx */
  push32((uint32_t)(ECX));
  /* 10882df3 push eax */
  push32((uint32_t)(EAX));
  /* 10882df4 push ebx */
  push32((uint32_t)(EBX));
  /* 10882df5 call 0x10883de0 */
  push32(0x10882dfau); f_10883de0();
  /* 10882dfa mov ebx, eax */
  EBX = (EAX);
  /* 10882dfc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10882dff call 0x10883de0 */
  push32(0x10882e04u); f_10883de0();
  /* 10882e04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10882e07 pop ecx */
  ECX = (pop32());
  /* 10882e08 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10882e0a jne 0x10882e15 */
  if (!C.zf) goto L_10882e15;
  /* 10882e0c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10882e0d jne 0x10882de4 */
  if (!C.zf) goto L_10882de4;
L_10882e0f:;
  /* 10882e0f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10882e11 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10882e13 je 0x10882e1e */
  if (C.zf) goto L_10882e1e;
L_10882e15:;
  /* 10882e15 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10882e1a jb 0x10882e1e */
  if (C.cf) goto L_10882e1e;
  /* 10882e1c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_10882e1e:;
  /* 10882e1e pop eax */
  EAX = (pop32());
  /* 10882e1f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10882e21 jne 0x10882e2c */
  if (!C.zf) goto L_10882e2c;
  /* 10882e23 lock dec dword ptr [0x108a09c4] */
  x86_unimpl("lock dec @ 0x10882e23");
  /* 10882e2a jmp 0x10882e3a */
  goto L_10882e3a;
L_10882e2c:;
  /* 10882e2c mov ebx, ecx */
  EBX = (ECX);
  /* 10882e2e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10882e30 call 0x10878040 */
  push32(0x10882e35u); f_10878040();
  /* 10882e35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10882e38 mov ecx, ebx */
  ECX = (EBX);
L_10882e3a:;
  /* 10882e3a mov eax, ecx */
  EAX = (ECX);
  /* 10882e3c pop ebx */
  EBX = (pop32());
  /* 10882e3d pop esi */
  ESI = (pop32());
  /* 10882e3e pop edi */
  EDI = (pop32());
  /* 10882e3f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10882e40 ret  */
  ESPCHK(0x10882d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10012e50 @ 0x10882e50 (255 bytes, 88 insns) */
void f_10882e50(void) {
  FTRACE(0x10882e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10882e50 push ebp */
  push32((uint32_t)(EBP));
  /* 10882e51 mov ebp, esp */
  EBP = (ESP);
  /* 10882e53 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10882e56:;
  /* 10882e56 cmp dword ptr [0x1089eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1089eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10882e5d jle 0x10882e76 */
  if ((C.zf||C.sf!=C.of)) goto L_10882e76;
  /* 10882e5f push 8 */
  push32((uint32_t)(0x8u));
  /* 10882e61 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10882e64 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10882e66 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10882e68 push ecx */
  push32((uint32_t)(ECX));
  /* 10882e69 call 0x1087a5b0 */
  push32(0x10882e6eu); f_1087a5b0();
  /* 10882e6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10882e71 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10882e74 jmp 0x10882e8f */
  goto L_10882e8f;
L_10882e76:;
  /* 10882e76 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10882e79 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10882e7b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10882e7d mov ecx, dword ptr [0x1089ec98] */
  ECX = (r32((uint32_t)(0x1089ec98)));
  /* 10882e83 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10882e85 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10882e89 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10882e8c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10882e8f:;
  /* 10882e8f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10882e93 je 0x10882ea0 */
  if (C.zf) goto L_10882ea0;
  /* 10882e95 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10882e98 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10882e9b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10882e9e jmp 0x10882e56 */
  goto L_10882e56;
L_10882ea0:;
  /* 10882ea0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10882ea3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10882ea5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10882ea7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10882eaa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10882ead add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10882eb0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10882eb3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10882eb6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10882eb9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10882ebd je 0x10882ec5 */
  if (C.zf) goto L_10882ec5;
  /* 10882ebf cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10882ec3 jne 0x10882ed8 */
  if (!C.zf) goto L_10882ed8;
L_10882ec5:;
  /* 10882ec5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10882ec8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10882eca mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10882ecc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10882ecf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10882ed2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10882ed5 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10882ed8:;
  /* 10882ed8 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10882edf:;
  /* 10882edf cmp dword ptr [0x1089eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1089eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10882ee6 jle 0x10882efb */
  if ((C.zf||C.sf!=C.of)) goto L_10882efb;
  /* 10882ee8 push 4 */
  push32((uint32_t)(0x4u));
  /* 10882eea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10882eed push edx */
  push32((uint32_t)(EDX));
  /* 10882eee call 0x1087a5b0 */
  push32(0x10882ef3u); f_1087a5b0();
  /* 10882ef3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10882ef6 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10882ef9 jmp 0x10882f10 */
  goto L_10882f10;
L_10882efb:;
  /* 10882efb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10882efe mov ecx, dword ptr [0x1089ec98] */
  ECX = (r32((uint32_t)(0x1089ec98)));
  /* 10882f04 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10882f06 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10882f0a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10882f0d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10882f10:;
  /* 10882f10 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10882f14 je 0x10882f3b */
  if (C.zf) goto L_10882f3b;
  /* 10882f16 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10882f19 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10882f1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10882f1f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 10882f23 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10882f26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10882f29 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10882f2b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10882f2d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10882f30 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10882f33 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10882f36 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10882f39 jmp 0x10882edf */
  goto L_10882edf;
L_10882f3b:;
  /* 10882f3b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10882f3f jne 0x10882f48 */
  if (!C.zf) goto L_10882f48;
  /* 10882f41 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10882f44 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10882f46 jmp 0x10882f4b */
  goto L_10882f4b;
L_10882f48:;
  /* 10882f48 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10882f4b:;
  /* 10882f4b mov esp, ebp */
  ESP = (EBP);
  /* 10882f4d pop ebp */
  EBP = (pop32());
  /* 10882f4e ret  */
  ESPCHK(0x10882e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f50 @ 0x10882f50 (17 bytes, 8 insns) */
void f_10882f50(void) {
  FTRACE(0x10882f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10882f50 push ebp */
  push32((uint32_t)(EBP));
  /* 10882f51 mov ebp, esp */
  EBP = (ESP);
  /* 10882f53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10882f56 push eax */
  push32((uint32_t)(EAX));
  /* 10882f57 call 0x10882e50 */
  push32(0x10882f5cu); f_10882e50();
  /* 10882f5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10882f5f pop ebp */
  EBP = (pop32());
  /* 10882f60 ret  */
  ESPCHK(0x10882f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f70 @ 0x10882f70 (297 bytes, 106 insns) */
void f_10882f70(void) {
  FTRACE(0x10882f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10882f70 push ebp */
  push32((uint32_t)(EBP));
  /* 10882f71 mov ebp, esp */
  EBP = (ESP);
  /* 10882f73 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10882f76 push esi */
  push32((uint32_t)(ESI));
L_10882f77:;
  /* 10882f77 cmp dword ptr [0x1089eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1089eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10882f7e jle 0x10882f97 */
  if ((C.zf||C.sf!=C.of)) goto L_10882f97;
  /* 10882f80 push 8 */
  push32((uint32_t)(0x8u));
  /* 10882f82 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10882f85 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10882f87 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10882f89 push ecx */
  push32((uint32_t)(ECX));
  /* 10882f8a call 0x1087a5b0 */
  push32(0x10882f8fu); f_1087a5b0();
  /* 10882f8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10882f92 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10882f95 jmp 0x10882fb0 */
  goto L_10882fb0;
L_10882f97:;
  /* 10882f97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10882f9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10882f9c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10882f9e mov ecx, dword ptr [0x1089ec98] */
  ECX = (r32((uint32_t)(0x1089ec98)));
  /* 10882fa4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10882fa6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10882faa and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10882fad mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10882fb0:;
  /* 10882fb0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10882fb4 je 0x10882fc1 */
  if (C.zf) goto L_10882fc1;
  /* 10882fb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10882fb9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10882fbc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10882fbf jmp 0x10882f77 */
  goto L_10882f77;
L_10882fc1:;
  /* 10882fc1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10882fc4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10882fc6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10882fc8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10882fcb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10882fce add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10882fd1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10882fd4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10882fd7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10882fda cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10882fde je 0x10882fe6 */
  if (C.zf) goto L_10882fe6;
  /* 10882fe0 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10882fe4 jne 0x10882ff9 */
  if (!C.zf) goto L_10882ff9;
L_10882fe6:;
  /* 10882fe6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10882fe9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10882feb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10882fed mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10882ff0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10882ff3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10882ff6 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10882ff9:;
  /* 10882ff9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10883000 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10883007:;
  /* 10883007 cmp dword ptr [0x1089eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1089eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1088300e jle 0x10883023 */
  if ((C.zf||C.sf!=C.of)) goto L_10883023;
  /* 10883010 push 4 */
  push32((uint32_t)(0x4u));
  /* 10883012 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10883015 push edx */
  push32((uint32_t)(EDX));
  /* 10883016 call 0x1087a5b0 */
  push32(0x1088301bu); f_1087a5b0();
  /* 1088301b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1088301e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10883021 jmp 0x10883038 */
  goto L_10883038;
L_10883023:;
  /* 10883023 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10883026 mov ecx, dword ptr [0x1089ec98] */
  ECX = (r32((uint32_t)(0x1089ec98)));
  /* 1088302c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1088302e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10883032 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10883035 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_10883038:;
  /* 10883038 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1088303c je 0x10883079 */
  if (C.zf) goto L_10883079;
  /* 1088303e push 0 */
  push32((uint32_t)(0x0u));
  /* 10883040 push 0xa */
  push32((uint32_t)(0xau));
  /* 10883042 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10883045 push eax */
  push32((uint32_t)(EAX));
  /* 10883046 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10883049 push ecx */
  push32((uint32_t)(ECX));
  /* 1088304a call 0x10883f10 */
  push32(0x1088304fu); f_10883f10();
  /* 1088304f mov ecx, eax */
  ECX = (EAX);
  /* 10883051 mov esi, edx */
  ESI = (EDX);
  /* 10883053 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10883056 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10883059 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1088305a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1088305c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1088305e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10883061 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 10883064 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10883067 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10883069 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1088306b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1088306e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10883071 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10883074 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10883077 jmp 0x10883007 */
  goto L_10883007;
L_10883079:;
  /* 10883079 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1088307d jne 0x1088308e */
  if (!C.zf) goto L_1088308e;
  /* 1088307f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10883082 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10883084 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10883087 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1088308a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1088308c jmp 0x10883094 */
  goto L_10883094;
L_1088308e:;
  /* 1088308e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10883091 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_10883094:;
  /* 10883094 pop esi */
  ESI = (pop32());
  /* 10883095 mov esp, ebp */
  ESP = (EBP);
  /* 10883097 pop ebp */
  EBP = (pop32());
  /* 10883098 ret  */
  ESPCHK(0x10882f70u, _esp0);
  ESP += 4; return;
}

/* FUN_100130a0 @ 0x108830a0 (61 bytes, 18 insns) */
void f_108830a0(void) {
  FTRACE(0x108830a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108830a0 push ebp */
  push32((uint32_t)(EBP));
  /* 108830a1 mov ebp, esp */
  EBP = (ESP);
  /* 108830a3 cmp dword ptr [0x108a0990], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a0990))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108830aa jne 0x108830db */
  if (!C.zf) goto L_108830db;
  /* 108830ac push 0xb */
  push32((uint32_t)(0xbu));
  /* 108830ae call 0x10877fa0 */
  push32(0x108830b3u); f_10877fa0();
  /* 108830b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108830b6 cmp dword ptr [0x108a0990], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a0990))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108830bd jne 0x108830d1 */
  if (!C.zf) goto L_108830d1;
  /* 108830bf call 0x10883100 */
  push32(0x108830c4u); f_10883100();
  /* 108830c4 mov eax, dword ptr [0x108a0990] */
  EAX = (r32((uint32_t)(0x108a0990)));
  /* 108830c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108830cc mov dword ptr [0x108a0990], eax */
  w32((uint32_t)(0x108a0990), (EAX));
L_108830d1:;
  /* 108830d1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 108830d3 call 0x10878040 */
  push32(0x108830d8u); f_10878040();
  /* 108830d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108830db:;
  /* 108830db pop ebp */
  EBP = (pop32());
  /* 108830dc ret  */
  ESPCHK(0x108830a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100130e0 @ 0x108830e0 (30 bytes, 11 insns) */
void f_108830e0(void) {
  FTRACE(0x108830e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108830e0 push ebp */
  push32((uint32_t)(EBP));
  /* 108830e1 mov ebp, esp */
  EBP = (ESP);
  /* 108830e3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 108830e5 call 0x10877fa0 */
  push32(0x108830eau); f_10877fa0();
  /* 108830ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108830ed call 0x10883100 */
  push32(0x108830f2u); f_10883100();
  /* 108830f2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 108830f4 call 0x10878040 */
  push32(0x108830f9u); f_10878040();
  /* 108830f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108830fc pop ebp */
  EBP = (pop32());
  /* 108830fd ret  */
  ESPCHK(0x108830e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013100 @ 0x10883100 (939 bytes, 266 insns) */
void f_10883100(void) {
  FTRACE(0x10883100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10883100 push ebp */
  push32((uint32_t)(EBP));
  /* 10883101 mov ebp, esp */
  EBP = (ESP);
  /* 10883103 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10883106 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1088310d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1088310f call 0x10877fa0 */
  push32(0x10883114u); f_10877fa0();
  /* 10883114 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10883117 mov dword ptr [0x108a08d8], 0 */
  w32((uint32_t)(0x108a08d8), (0x0u));
  /* 10883121 mov dword ptr [0x1089fe38], 0xffffffff */
  w32((uint32_t)(0x1089fe38), (0xffffffffu));
  /* 1088312b mov eax, dword ptr [0x1089fe38] */
  EAX = (r32((uint32_t)(0x1089fe38)));
  /* 10883130 mov dword ptr [0x1089fe28], eax */
  w32((uint32_t)(0x1089fe28), (EAX));
  /* 10883135 push 0x1089c9f0 */
  push32((uint32_t)(0x1089c9f0u));
  /* 1088313a call 0x10883f80 */
  push32(0x1088313fu); f_10883f80();
  /* 1088313f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10883142 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10883145 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10883149 jne 0x10883283 */
  if (!C.zf) goto L_10883283;
  /* 1088314f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10883151 call 0x10878040 */
  push32(0x10883156u); f_10878040();
  /* 10883156 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10883159 push 0x108a08e0 */
  push32((uint32_t)(0x108a08e0u));
  /* 1088315e call dword ptr [0x108a32cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a32cc))), 0x10883164u);
  /* 10883164 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10883167 je 0x1088327e */
  if (C.zf) goto L_1088327e;
  /* 1088316d mov dword ptr [0x108a08d8], 1 */
  w32((uint32_t)(0x108a08d8), (0x1u));
  /* 10883177 mov ecx, dword ptr [0x108a08e0] */
  ECX = (r32((uint32_t)(0x108a08e0)));
  /* 1088317d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10883180 mov dword ptr [0x1089fd90], ecx */
  w32((uint32_t)(0x1089fd90), (ECX));
  /* 10883186 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10883188 mov dx, word ptr [0x108a0926] */
  DX = (r16((uint32_t)(0x108a0926)));
  /* 1088318f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10883191 je 0x108831a9 */
  if (C.zf) goto L_108831a9;
  /* 10883193 mov eax, dword ptr [0x108a0934] */
  EAX = (r32((uint32_t)(0x108a0934)));
  /* 10883198 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1088319b mov ecx, dword ptr [0x1089fd90] */
  ECX = (r32((uint32_t)(0x1089fd90)));
  /* 108831a1 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108831a3 mov dword ptr [0x1089fd90], ecx */
  w32((uint32_t)(0x1089fd90), (ECX));
L_108831a9:;
  /* 108831a9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108831ab mov dx, word ptr [0x108a097a] */
  DX = (r16((uint32_t)(0x108a097a)));
  /* 108831b2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108831b4 je 0x108831de */
  if (C.zf) goto L_108831de;
  /* 108831b6 cmp dword ptr [0x108a0988], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a0988))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108831bd je 0x108831de */
  if (C.zf) goto L_108831de;
  /* 108831bf mov dword ptr [0x1089fd94], 1 */
  w32((uint32_t)(0x1089fd94), (0x1u));
  /* 108831c9 mov eax, dword ptr [0x108a0988] */
  EAX = (r32((uint32_t)(0x108a0988)));
  /* 108831ce sub eax, dword ptr [0x108a0934] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x108a0934))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108831d4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108831d7 mov dword ptr [0x1089fd98], eax */
  w32((uint32_t)(0x1089fd98), (EAX));
  /* 108831dc jmp 0x108831f2 */
  goto L_108831f2;
L_108831de:;
  /* 108831de mov dword ptr [0x1089fd94], 0 */
  w32((uint32_t)(0x1089fd94), (0x0u));
  /* 108831e8 mov dword ptr [0x1089fd98], 0 */
  w32((uint32_t)(0x1089fd98), (0x0u));
L_108831f2:;
  /* 108831f2 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 108831f5 push ecx */
  push32((uint32_t)(ECX));
  /* 108831f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 108831f8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 108831fa mov edx, dword ptr [0x1089fe1c] */
  EDX = (r32((uint32_t)(0x1089fe1c)));
  /* 10883200 push edx */
  push32((uint32_t)(EDX));
  /* 10883201 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10883203 push 0x108a08e4 */
  push32((uint32_t)(0x108a08e4u));
  /* 10883208 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1088320d mov eax, dword ptr [0x108a0848] */
  EAX = (r32((uint32_t)(0x108a0848)));
  /* 10883212 push eax */
  push32((uint32_t)(EAX));
  /* 10883213 call dword ptr [0x108a335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a335c))), 0x10883219u);
  /* 10883219 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1088321b je 0x1088322f */
  if (C.zf) goto L_1088322f;
  /* 1088321d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10883221 jne 0x1088322f */
  if (!C.zf) goto L_1088322f;
  /* 10883223 mov ecx, dword ptr [0x1089fe1c] */
  ECX = (r32((uint32_t)(0x1089fe1c)));
  /* 10883229 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 1088322d jmp 0x10883238 */
  goto L_10883238;
L_1088322f:;
  /* 1088322f mov edx, dword ptr [0x1089fe1c] */
  EDX = (r32((uint32_t)(0x1089fe1c)));
  /* 10883235 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10883238:;
  /* 10883238 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1088323b push eax */
  push32((uint32_t)(EAX));
  /* 1088323c push 0 */
  push32((uint32_t)(0x0u));
  /* 1088323e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10883240 mov ecx, dword ptr [0x1089fe20] */
  ECX = (r32((uint32_t)(0x1089fe20)));
  /* 10883246 push ecx */
  push32((uint32_t)(ECX));
  /* 10883247 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10883249 push 0x108a0938 */
  push32((uint32_t)(0x108a0938u));
  /* 1088324e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10883253 mov edx, dword ptr [0x108a0848] */
  EDX = (r32((uint32_t)(0x108a0848)));
  /* 10883259 push edx */
  push32((uint32_t)(EDX));
  /* 1088325a call dword ptr [0x108a335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a335c))), 0x10883260u);
  /* 10883260 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10883262 je 0x10883275 */
  if (C.zf) goto L_10883275;
  /* 10883264 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10883268 jne 0x10883275 */
  if (!C.zf) goto L_10883275;
  /* 1088326a mov eax, dword ptr [0x1089fe20] */
  EAX = (r32((uint32_t)(0x1089fe20)));
  /* 1088326f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 10883273 jmp 0x1088327e */
  goto L_1088327e;
L_10883275:;
  /* 10883275 mov ecx, dword ptr [0x1089fe20] */
  ECX = (r32((uint32_t)(0x1089fe20)));
  /* 1088327b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_1088327e:;
  /* 1088327e jmp 0x108834a7 */
  goto L_108834a7;
L_10883283:;
  /* 10883283 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10883286 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10883289 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1088328b je 0x108832ad */
  if (C.zf) goto L_108832ad;
  /* 1088328d cmp dword ptr [0x108a098c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a098c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10883294 je 0x108832bc */
  if (C.zf) goto L_108832bc;
  /* 10883296 mov ecx, dword ptr [0x108a098c] */
  ECX = (r32((uint32_t)(0x108a098c)));
  /* 1088329c push ecx */
  push32((uint32_t)(ECX));
  /* 1088329d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108832a0 push edx */
  push32((uint32_t)(EDX));
  /* 108832a1 call 0x10880230 */
  push32(0x108832a6u); f_10880230();
  /* 108832a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108832a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108832ab jne 0x108832bc */
  if (!C.zf) goto L_108832bc;
L_108832ad:;
  /* 108832ad push 0xc */
  push32((uint32_t)(0xcu));
  /* 108832af call 0x10878040 */
  push32(0x108832b4u); f_10878040();
  /* 108832b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108832b7 jmp 0x108834a7 */
  goto L_108834a7;
L_108832bc:;
  /* 108832bc push 2 */
  push32((uint32_t)(0x2u));
  /* 108832be mov eax, dword ptr [0x108a098c] */
  EAX = (r32((uint32_t)(0x108a098c)));
  /* 108832c3 push eax */
  push32((uint32_t)(EAX));
  /* 108832c4 call 0x10875030 */
  push32(0x108832c9u); f_10875030();
  /* 108832c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108832cc push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 108832d1 push 0x1089c9e8 */
  push32((uint32_t)(0x1089c9e8u));
  /* 108832d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 108832d8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108832db push ecx */
  push32((uint32_t)(ECX));
  /* 108832dc call 0x108773d0 */
  push32(0x108832e1u); f_108773d0();
  /* 108832e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108832e4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108832e7 push eax */
  push32((uint32_t)(EAX));
  /* 108832e8 call 0x108745a0 */
  push32(0x108832edu); f_108745a0();
  /* 108832ed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108832f0 mov dword ptr [0x108a098c], eax */
  w32((uint32_t)(0x108a098c), (EAX));
  /* 108832f5 cmp dword ptr [0x108a098c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a098c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108832fc jne 0x1088330d */
  if (!C.zf) goto L_1088330d;
  /* 108832fe push 0xc */
  push32((uint32_t)(0xcu));
  /* 10883300 call 0x10878040 */
  push32(0x10883305u); f_10878040();
  /* 10883305 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10883308 jmp 0x108834a7 */
  goto L_108834a7;
L_1088330d:;
  /* 1088330d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10883310 push edx */
  push32((uint32_t)(EDX));
  /* 10883311 mov eax, dword ptr [0x108a098c] */
  EAX = (r32((uint32_t)(0x108a098c)));
  /* 10883316 push eax */
  push32((uint32_t)(EAX));
  /* 10883317 call 0x10877550 */
  push32(0x1088331cu); f_10877550();
  /* 1088331c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1088331f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10883321 call 0x10878040 */
  push32(0x10883326u); f_10878040();
  /* 10883326 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10883329 push 3 */
  push32((uint32_t)(0x3u));
  /* 1088332b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1088332e push ecx */
  push32((uint32_t)(ECX));
  /* 1088332f mov edx, dword ptr [0x1089fe1c] */
  EDX = (r32((uint32_t)(0x1089fe1c)));
  /* 10883335 push edx */
  push32((uint32_t)(EDX));
  /* 10883336 call 0x10877dc0 */
  push32(0x1088333bu); f_10877dc0();
  /* 1088333b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1088333e mov eax, dword ptr [0x1089fe1c] */
  EAX = (r32((uint32_t)(0x1089fe1c)));
  /* 10883343 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 10883347 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1088334a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1088334d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10883350 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10883353 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10883356 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10883359 jne 0x1088336d */
  if (!C.zf) goto L_1088336d;
  /* 1088335b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1088335e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10883361 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10883364 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10883367 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1088336a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1088336d:;
  /* 1088336d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10883370 push eax */
  push32((uint32_t)(EAX));
  /* 10883371 call 0x10882e50 */
  push32(0x10883376u); f_10882e50();
  /* 10883376 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10883379 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1088337f mov dword ptr [0x1089fd90], eax */
  w32((uint32_t)(0x1089fd90), (EAX));
L_10883384:;
  /* 10883384 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10883387 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1088338a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1088338d je 0x108833a5 */
  if (C.zf) goto L_108833a5;
  /* 1088338f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10883392 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10883395 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10883398 jl 0x108833b0 */
  if ((C.sf!=C.of)) goto L_108833b0;
  /* 1088339a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1088339d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 108833a0 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108833a3 jg 0x108833b0 */
  if ((!C.zf&&C.sf==C.of)) goto L_108833b0;
L_108833a5:;
  /* 108833a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108833a8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108833ab mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108833ae jmp 0x10883384 */
  goto L_10883384;
L_108833b0:;
  /* 108833b0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108833b3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 108833b6 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108833b9 jne 0x10883455 */
  if (!C.zf) goto L_10883455;
  /* 108833bf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108833c2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108833c5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108833c8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108833cb push edx */
  push32((uint32_t)(EDX));
  /* 108833cc call 0x10882e50 */
  push32(0x108833d1u); f_10882e50();
  /* 108833d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108833d4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108833d7 mov ecx, dword ptr [0x1089fd90] */
  ECX = (r32((uint32_t)(0x1089fd90)));
  /* 108833dd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108833df mov dword ptr [0x1089fd90], ecx */
  w32((uint32_t)(0x1089fd90), (ECX));
L_108833e5:;
  /* 108833e5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108833e8 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 108833eb cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108833ee jl 0x10883406 */
  if ((C.sf!=C.of)) goto L_10883406;
  /* 108833f0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108833f3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 108833f6 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108833f9 jg 0x10883406 */
  if ((!C.zf&&C.sf==C.of)) goto L_10883406;
  /* 108833fb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108833fe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10883401 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10883404 jmp 0x108833e5 */
  goto L_108833e5;
L_10883406:;
  /* 10883406 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10883409 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1088340c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1088340f jne 0x10883455 */
  if (!C.zf) goto L_10883455;
  /* 10883411 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10883414 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10883417 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1088341a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1088341d push ecx */
  push32((uint32_t)(ECX));
  /* 1088341e call 0x10882e50 */
  push32(0x10883423u); f_10882e50();
  /* 10883423 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10883426 mov edx, dword ptr [0x1089fd90] */
  EDX = (r32((uint32_t)(0x1089fd90)));
  /* 1088342c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1088342e mov dword ptr [0x1089fd90], edx */
  w32((uint32_t)(0x1089fd90), (EDX));
L_10883434:;
  /* 10883434 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10883437 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1088343a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1088343d jl 0x10883455 */
  if ((C.sf!=C.of)) goto L_10883455;
  /* 1088343f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10883442 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10883445 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10883448 jg 0x10883455 */
  if ((!C.zf&&C.sf==C.of)) goto L_10883455;
  /* 1088344a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1088344d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10883450 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10883453 jmp 0x10883434 */
  goto L_10883434;
L_10883455:;
  /* 10883455 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10883459 je 0x10883469 */
  if (C.zf) goto L_10883469;
  /* 1088345b mov edx, dword ptr [0x1089fd90] */
  EDX = (r32((uint32_t)(0x1089fd90)));
  /* 10883461 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10883463 mov dword ptr [0x1089fd90], edx */
  w32((uint32_t)(0x1089fd90), (EDX));
L_10883469:;
  /* 10883469 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1088346c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1088346f mov dword ptr [0x1089fd94], ecx */
  w32((uint32_t)(0x1089fd94), (ECX));
  /* 10883475 cmp dword ptr [0x1089fd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1089fd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1088347c je 0x1088349e */
  if (C.zf) goto L_1088349e;
  /* 1088347e push 3 */
  push32((uint32_t)(0x3u));
  /* 10883480 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10883483 push edx */
  push32((uint32_t)(EDX));
  /* 10883484 mov eax, dword ptr [0x1089fe20] */
  EAX = (r32((uint32_t)(0x1089fe20)));
  /* 10883489 push eax */
  push32((uint32_t)(EAX));
  /* 1088348a call 0x10877dc0 */
  push32(0x1088348fu); f_10877dc0();
  /* 1088348f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10883492 mov ecx, dword ptr [0x1089fe20] */
  ECX = (r32((uint32_t)(0x1089fe20)));
  /* 10883498 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 1088349c jmp 0x108834a7 */
  goto L_108834a7;
L_1088349e:;
  /* 1088349e mov edx, dword ptr [0x1089fe20] */
  EDX = (r32((uint32_t)(0x1089fe20)));
  /* 108834a4 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_108834a7:;
  /* 108834a7 mov esp, ebp */
  ESP = (EBP);
  /* 108834a9 pop ebp */
  EBP = (pop32());
  /* 108834aa ret  */
  ESPCHK(0x10883100u, _esp0);
  ESP += 4; return;
}

/* FUN_100134b0 @ 0x108834b0 (46 bytes, 18 insns) */
void f_108834b0(void) {
  FTRACE(0x108834b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108834b0 push ebp */
  push32((uint32_t)(EBP));
  /* 108834b1 mov ebp, esp */
  EBP = (ESP);
  /* 108834b3 push ecx */
  push32((uint32_t)(ECX));
  /* 108834b4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 108834b6 call 0x10877fa0 */
  push32(0x108834bbu); f_10877fa0();
  /* 108834bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108834be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108834c1 push eax */
  push32((uint32_t)(EAX));
  /* 108834c2 call 0x108834e0 */
  push32(0x108834c7u); f_108834e0();
  /* 108834c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108834ca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108834cd push 0xb */
  push32((uint32_t)(0xbu));
  /* 108834cf call 0x10878040 */
  push32(0x108834d4u); f_10878040();
  /* 108834d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108834d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108834da mov esp, ebp */
  ESP = (EBP);
  /* 108834dc pop ebp */
  EBP = (pop32());
  /* 108834dd ret  */
  ESPCHK(0x108834b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100134e0 @ 0x108834e0 (762 bytes, 246 insns) */
void f_108834e0(void) {
  FTRACE(0x108834e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108834e0 push ebp */
  push32((uint32_t)(EBP));
  /* 108834e1 mov ebp, esp */
  EBP = (ESP);
  /* 108834e3 push ecx */
  push32((uint32_t)(ECX));
  /* 108834e4 cmp dword ptr [0x1089fd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1089fd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108834eb jne 0x108834f4 */
  if (!C.zf) goto L_108834f4;
  /* 108834ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108834ef jmp 0x108837d6 */
  goto L_108837d6;
L_108834f4:;
  /* 108834f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108834f7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 108834fa cmp ecx, dword ptr [0x1089fe28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1089fe28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10883500 jne 0x10883514 */
  if (!C.zf) goto L_10883514;
  /* 10883502 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10883505 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10883508 cmp eax, dword ptr [0x1089fe38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1089fe38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1088350e je 0x108836db */
  if (C.zf) goto L_108836db;
L_10883514:;
  /* 10883514 cmp dword ptr [0x108a08d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a08d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1088351b je 0x10883695 */
  if (C.zf) goto L_10883695;
  /* 10883521 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10883523 mov cx, word ptr [0x108a0978] */
  CX = (r16((uint32_t)(0x108a0978)));
  /* 1088352a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1088352c jne 0x10883589 */
  if (!C.zf) goto L_10883589;
  /* 1088352e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10883530 mov dx, word ptr [0x108a0986] */
  DX = (r16((uint32_t)(0x108a0986)));
  /* 10883537 push edx */
  push32((uint32_t)(EDX));
  /* 10883538 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1088353a mov ax, word ptr [0x108a0984] */
  AX = (r16((uint32_t)(0x108a0984)));
  /* 10883540 push eax */
  push32((uint32_t)(EAX));
  /* 10883541 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10883543 mov cx, word ptr [0x108a0982] */
  CX = (r16((uint32_t)(0x108a0982)));
  /* 1088354a push ecx */
  push32((uint32_t)(ECX));
  /* 1088354b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1088354d mov dx, word ptr [0x108a0980] */
  DX = (r16((uint32_t)(0x108a0980)));
  /* 10883554 push edx */
  push32((uint32_t)(EDX));
  /* 10883555 push 0 */
  push32((uint32_t)(0x0u));
  /* 10883557 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10883559 mov ax, word ptr [0x108a097c] */
  AX = (r16((uint32_t)(0x108a097c)));
  /* 1088355f push eax */
  push32((uint32_t)(EAX));
  /* 10883560 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10883562 mov cx, word ptr [0x108a097e] */
  CX = (r16((uint32_t)(0x108a097e)));
  /* 10883569 push ecx */
  push32((uint32_t)(ECX));
  /* 1088356a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1088356c mov dx, word ptr [0x108a097a] */
  DX = (r16((uint32_t)(0x108a097a)));
  /* 10883573 push edx */
  push32((uint32_t)(EDX));
  /* 10883574 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10883577 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1088357a push ecx */
  push32((uint32_t)(ECX));
  /* 1088357b push 1 */
  push32((uint32_t)(0x1u));
  /* 1088357d push 1 */
  push32((uint32_t)(0x1u));
  /* 1088357f call 0x108837e0 */
  push32(0x10883584u); f_108837e0();
  /* 10883584 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10883587 jmp 0x108835da */
  goto L_108835da;
L_10883589:;
  /* 10883589 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1088358b mov dx, word ptr [0x108a0986] */
  DX = (r16((uint32_t)(0x108a0986)));
  /* 10883592 push edx */
  push32((uint32_t)(EDX));
  /* 10883593 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10883595 mov ax, word ptr [0x108a0984] */
  AX = (r16((uint32_t)(0x108a0984)));
  /* 1088359b push eax */
  push32((uint32_t)(EAX));
  /* 1088359c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1088359e mov cx, word ptr [0x108a0982] */
  CX = (r16((uint32_t)(0x108a0982)));
  /* 108835a5 push ecx */
  push32((uint32_t)(ECX));
  /* 108835a6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108835a8 mov dx, word ptr [0x108a0980] */
  DX = (r16((uint32_t)(0x108a0980)));
  /* 108835af push edx */
  push32((uint32_t)(EDX));
  /* 108835b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108835b2 mov ax, word ptr [0x108a097e] */
  AX = (r16((uint32_t)(0x108a097e)));
  /* 108835b8 push eax */
  push32((uint32_t)(EAX));
  /* 108835b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 108835bb push 0 */
  push32((uint32_t)(0x0u));
  /* 108835bd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108835bf mov cx, word ptr [0x108a097a] */
  CX = (r16((uint32_t)(0x108a097a)));
  /* 108835c6 push ecx */
  push32((uint32_t)(ECX));
  /* 108835c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108835ca mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 108835cd push eax */
  push32((uint32_t)(EAX));
  /* 108835ce push 0 */
  push32((uint32_t)(0x0u));
  /* 108835d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 108835d2 call 0x108837e0 */
  push32(0x108835d7u); f_108837e0();
  /* 108835d7 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108835da:;
  /* 108835da xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108835dc mov cx, word ptr [0x108a0924] */
  CX = (r16((uint32_t)(0x108a0924)));
  /* 108835e3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108835e5 jne 0x10883642 */
  if (!C.zf) goto L_10883642;
  /* 108835e7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108835e9 mov dx, word ptr [0x108a0932] */
  DX = (r16((uint32_t)(0x108a0932)));
  /* 108835f0 push edx */
  push32((uint32_t)(EDX));
  /* 108835f1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108835f3 mov ax, word ptr [0x108a0930] */
  AX = (r16((uint32_t)(0x108a0930)));
  /* 108835f9 push eax */
  push32((uint32_t)(EAX));
  /* 108835fa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108835fc mov cx, word ptr [0x108a092e] */
  CX = (r16((uint32_t)(0x108a092e)));
  /* 10883603 push ecx */
  push32((uint32_t)(ECX));
  /* 10883604 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10883606 mov dx, word ptr [0x108a092c] */
  DX = (r16((uint32_t)(0x108a092c)));
  /* 1088360d push edx */
  push32((uint32_t)(EDX));
  /* 1088360e push 0 */
  push32((uint32_t)(0x0u));
  /* 10883610 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10883612 mov ax, word ptr [0x108a0928] */
  AX = (r16((uint32_t)(0x108a0928)));
  /* 10883618 push eax */
  push32((uint32_t)(EAX));
  /* 10883619 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1088361b mov cx, word ptr [0x108a092a] */
  CX = (r16((uint32_t)(0x108a092a)));
  /* 10883622 push ecx */
  push32((uint32_t)(ECX));
  /* 10883623 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10883625 mov dx, word ptr [0x108a0926] */
  DX = (r16((uint32_t)(0x108a0926)));
  /* 1088362c push edx */
  push32((uint32_t)(EDX));
  /* 1088362d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10883630 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10883633 push ecx */
  push32((uint32_t)(ECX));
  /* 10883634 push 1 */
  push32((uint32_t)(0x1u));
  /* 10883636 push 0 */
  push32((uint32_t)(0x0u));
  /* 10883638 call 0x108837e0 */
  push32(0x1088363du); f_108837e0();
  /* 1088363d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10883640 jmp 0x10883693 */
  goto L_10883693;
L_10883642:;
  /* 10883642 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10883644 mov dx, word ptr [0x108a0932] */
  DX = (r16((uint32_t)(0x108a0932)));
  /* 1088364b push edx */
  push32((uint32_t)(EDX));
  /* 1088364c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1088364e mov ax, word ptr [0x108a0930] */
  AX = (r16((uint32_t)(0x108a0930)));
  /* 10883654 push eax */
  push32((uint32_t)(EAX));
  /* 10883655 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10883657 mov cx, word ptr [0x108a092e] */
  CX = (r16((uint32_t)(0x108a092e)));
  /* 1088365e push ecx */
  push32((uint32_t)(ECX));
  /* 1088365f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10883661 mov dx, word ptr [0x108a092c] */
  DX = (r16((uint32_t)(0x108a092c)));
  /* 10883668 push edx */
  push32((uint32_t)(EDX));
  /* 10883669 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1088366b mov ax, word ptr [0x108a092a] */
  AX = (r16((uint32_t)(0x108a092a)));
  /* 10883671 push eax */
  push32((uint32_t)(EAX));
  /* 10883672 push 0 */
  push32((uint32_t)(0x0u));
  /* 10883674 push 0 */
  push32((uint32_t)(0x0u));
  /* 10883676 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10883678 mov cx, word ptr [0x108a0926] */
  CX = (r16((uint32_t)(0x108a0926)));
  /* 1088367f push ecx */
  push32((uint32_t)(ECX));
  /* 10883680 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10883683 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10883686 push eax */
  push32((uint32_t)(EAX));
  /* 10883687 push 0 */
  push32((uint32_t)(0x0u));
  /* 10883689 push 0 */
  push32((uint32_t)(0x0u));
  /* 1088368b call 0x108837e0 */
  push32(0x10883690u); f_108837e0();
  /* 10883690 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10883693:;
  /* 10883693 jmp 0x108836db */
  goto L_108836db;
L_10883695:;
  /* 10883695 push 0 */
  push32((uint32_t)(0x0u));
  /* 10883697 push 0 */
  push32((uint32_t)(0x0u));
  /* 10883699 push 0 */
  push32((uint32_t)(0x0u));
  /* 1088369b push 2 */
  push32((uint32_t)(0x2u));
  /* 1088369d push 0 */
  push32((uint32_t)(0x0u));
  /* 1088369f push 0 */
  push32((uint32_t)(0x0u));
  /* 108836a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 108836a3 push 4 */
  push32((uint32_t)(0x4u));
  /* 108836a5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108836a8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 108836ab push edx */
  push32((uint32_t)(EDX));
  /* 108836ac push 1 */
  push32((uint32_t)(0x1u));
  /* 108836ae push 1 */
  push32((uint32_t)(0x1u));
  /* 108836b0 call 0x108837e0 */
  push32(0x108836b5u); f_108837e0();
  /* 108836b5 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108836b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 108836ba push 0 */
  push32((uint32_t)(0x0u));
  /* 108836bc push 0 */
  push32((uint32_t)(0x0u));
  /* 108836be push 2 */
  push32((uint32_t)(0x2u));
  /* 108836c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 108836c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 108836c4 push 5 */
  push32((uint32_t)(0x5u));
  /* 108836c6 push 0xa */
  push32((uint32_t)(0xau));
  /* 108836c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108836cb mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 108836ce push ecx */
  push32((uint32_t)(ECX));
  /* 108836cf push 1 */
  push32((uint32_t)(0x1u));
  /* 108836d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 108836d3 call 0x108837e0 */
  push32(0x108836d8u); f_108837e0();
  /* 108836d8 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108836db:;
  /* 108836db mov edx, dword ptr [0x1089fe2c] */
  EDX = (r32((uint32_t)(0x1089fe2c)));
  /* 108836e1 cmp edx, dword ptr [0x1089fe3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1089fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108836e7 jge 0x10883734 */
  if ((C.sf==C.of)) goto L_10883734;
  /* 108836e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108836ec mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 108836ef cmp ecx, dword ptr [0x1089fe2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1089fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108836f5 jl 0x10883705 */
  if ((C.sf!=C.of)) goto L_10883705;
  /* 108836f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108836fa mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 108836fd cmp eax, dword ptr [0x1089fe3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1089fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10883703 jle 0x1088370c */
  if ((C.zf||C.sf!=C.of)) goto L_1088370c;
L_10883705:;
  /* 10883705 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10883707 jmp 0x108837d6 */
  goto L_108837d6;
L_1088370c:;
  /* 1088370c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1088370f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10883712 cmp edx, dword ptr [0x1089fe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1089fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10883718 jle 0x10883732 */
  if ((C.zf||C.sf!=C.of)) goto L_10883732;
  /* 1088371a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1088371d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10883720 cmp ecx, dword ptr [0x1089fe3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1089fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10883726 jge 0x10883732 */
  if ((C.sf==C.of)) goto L_10883732;
  /* 10883728 mov eax, 1 */
  EAX = (0x1u);
  /* 1088372d jmp 0x108837d6 */
  goto L_108837d6;
L_10883732:;
  /* 10883732 jmp 0x10883777 */
  goto L_10883777;
L_10883734:;
  /* 10883734 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10883737 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1088373a cmp eax, dword ptr [0x1089fe3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1089fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10883740 jl 0x10883750 */
  if ((C.sf!=C.of)) goto L_10883750;
  /* 10883742 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10883745 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10883748 cmp edx, dword ptr [0x1089fe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1089fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1088374e jle 0x10883757 */
  if ((C.zf||C.sf!=C.of)) goto L_10883757;
L_10883750:;
  /* 10883750 mov eax, 1 */
  EAX = (0x1u);
  /* 10883755 jmp 0x108837d6 */
  goto L_108837d6;
L_10883757:;
  /* 10883757 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1088375a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1088375d cmp ecx, dword ptr [0x1089fe3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1089fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10883763 jle 0x10883777 */
  if ((C.zf||C.sf!=C.of)) goto L_10883777;
  /* 10883765 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10883768 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1088376b cmp eax, dword ptr [0x1089fe2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1089fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10883771 jge 0x10883777 */
  if ((C.sf==C.of)) goto L_10883777;
  /* 10883773 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10883775 jmp 0x108837d6 */
  goto L_108837d6;
L_10883777:;
  /* 10883777 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1088377a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1088377d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10883780 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10883783 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10883785 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10883787 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1088378a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1088378d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10883793 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10883795 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1088379b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1088379e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108837a1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 108837a4 cmp edx, dword ptr [0x1089fe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1089fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108837aa jne 0x108837c2 */
  if (!C.zf) goto L_108837c2;
  /* 108837ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108837af cmp eax, dword ptr [0x1089fe30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1089fe30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108837b5 jl 0x108837be */
  if ((C.sf!=C.of)) goto L_108837be;
  /* 108837b7 mov eax, 1 */
  EAX = (0x1u);
  /* 108837bc jmp 0x108837d6 */
  goto L_108837d6;
L_108837be:;
  /* 108837be xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108837c0 jmp 0x108837d6 */
  goto L_108837d6;
L_108837c2:;
  /* 108837c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108837c5 cmp ecx, dword ptr [0x1089fe40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1089fe40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108837cb jge 0x108837d4 */
  if ((C.sf==C.of)) goto L_108837d4;
  /* 108837cd mov eax, 1 */
  EAX = (0x1u);
  /* 108837d2 jmp 0x108837d6 */
  goto L_108837d6;
L_108837d4:;
  /* 108837d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108837d6:;
  /* 108837d6 mov esp, ebp */
  ESP = (EBP);
  /* 108837d8 pop ebp */
  EBP = (pop32());
  /* 108837d9 ret  */
  ESPCHK(0x108834e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100137e0 @ 0x108837e0 (504 bytes, 145 insns) */
void f_108837e0(void) {
  FTRACE(0x108837e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108837e0 push ebp */
  push32((uint32_t)(EBP));
  /* 108837e1 mov ebp, esp */
  EBP = (ESP);
  /* 108837e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108837e6 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108837ea jne 0x108838bc */
  if (!C.zf) goto L_108838bc;
  /* 108837f0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108837f3 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 108837f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108837f8 jne 0x10883809 */
  if (!C.zf) goto L_10883809;
  /* 108837fa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108837fd mov edx, dword ptr [ecx*4 + 0x1089fe4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1089fe4c)));
  /* 10883804 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10883807 jmp 0x10883816 */
  goto L_10883816;
L_10883809:;
  /* 10883809 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1088380c mov ecx, dword ptr [eax*4 + 0x1089fe80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1089fe80)));
  /* 10883813 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10883816:;
  /* 10883816 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10883819 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1088381c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1088381f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10883822 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10883825 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1088382b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1088382e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10883830 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10883833 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10883836 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10883839 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 1088383d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1088383e mov ecx, 7 */
  ECX = (0x7u);
  /* 10883843 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10883845 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10883848 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1088384b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1088384e jge 0x10883869 */
  if ((C.sf==C.of)) goto L_10883869;
  /* 10883850 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10883853 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10883856 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10883859 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1088385c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1088385f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10883862 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10883864 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10883867 jmp 0x1088387d */
  goto L_1088387d;
L_10883869:;
  /* 10883869 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1088386c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1088386f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10883872 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10883875 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10883878 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1088387a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1088387d:;
  /* 1088387d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10883881 jne 0x108838ba */
  if (!C.zf) goto L_108838ba;
  /* 10883883 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10883886 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10883889 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1088388b jne 0x1088389c */
  if (!C.zf) goto L_1088389c;
  /* 1088388d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10883890 mov eax, dword ptr [edx*4 + 0x1089fe50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1089fe50)));
  /* 10883897 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1088389a jmp 0x108838a9 */
  goto L_108838a9;
L_1088389c:;
  /* 1088389c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1088389f mov edx, dword ptr [ecx*4 + 0x1089fe84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1089fe84)));
  /* 108838a6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_108838a9:;
  /* 108838a9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108838ac cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108838af jle 0x108838ba */
  if ((C.zf||C.sf!=C.of)) goto L_108838ba;
  /* 108838b1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108838b4 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108838b7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_108838ba:;
  /* 108838ba jmp 0x108838f1 */
  goto L_108838f1;
L_108838bc:;
  /* 108838bc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108838bf and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 108838c2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108838c4 jne 0x108838d5 */
  if (!C.zf) goto L_108838d5;
  /* 108838c6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108838c9 mov ecx, dword ptr [eax*4 + 0x1089fe4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1089fe4c)));
  /* 108838d0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 108838d3 jmp 0x108838e2 */
  goto L_108838e2;
L_108838d5:;
  /* 108838d5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108838d8 mov eax, dword ptr [edx*4 + 0x1089fe80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1089fe80)));
  /* 108838df mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_108838e2:;
  /* 108838e2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108838e5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108838e8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108838eb add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108838ee mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_108838f1:;
  /* 108838f1 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108838f5 jne 0x10883931 */
  if (!C.zf) goto L_10883931;
  /* 108838f7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108838fa mov dword ptr [0x1089fe2c], eax */
  w32((uint32_t)(0x1089fe2c), (EAX));
  /* 108838ff mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10883902 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10883905 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10883908 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1088390a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1088390d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10883910 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10883912 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10883918 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 1088391b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1088391d mov dword ptr [0x1089fe30], ecx */
  w32((uint32_t)(0x1089fe30), (ECX));
  /* 10883923 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10883926 mov dword ptr [0x1089fe28], edx */
  w32((uint32_t)(0x1089fe28), (EDX));
  /* 1088392c jmp 0x108839d4 */
  goto L_108839d4;
L_10883931:;
  /* 10883931 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10883934 mov dword ptr [0x1089fe3c], eax */
  w32((uint32_t)(0x1089fe3c), (EAX));
  /* 10883939 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 1088393c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1088393f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10883942 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10883944 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10883947 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 1088394a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1088394c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10883952 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10883955 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10883957 mov dword ptr [0x1089fe40], ecx */
  w32((uint32_t)(0x1089fe40), (ECX));
  /* 1088395d mov edx, dword ptr [0x1089fd98] */
  EDX = (r32((uint32_t)(0x1089fd98)));
  /* 10883963 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10883969 mov eax, dword ptr [0x1089fe40] */
  EAX = (r32((uint32_t)(0x1089fe40)));
  /* 1088396e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10883970 mov dword ptr [0x1089fe40], eax */
  w32((uint32_t)(0x1089fe40), (EAX));
  /* 10883975 cmp dword ptr [0x1089fe40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1089fe40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1088397c jge 0x108839a1 */
  if ((C.sf==C.of)) goto L_108839a1;
  /* 1088397e mov ecx, dword ptr [0x1089fe40] */
  ECX = (r32((uint32_t)(0x1089fe40)));
  /* 10883984 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1088398a mov dword ptr [0x1089fe40], ecx */
  w32((uint32_t)(0x1089fe40), (ECX));
  /* 10883990 mov edx, dword ptr [0x1089fe3c] */
  EDX = (r32((uint32_t)(0x1089fe3c)));
  /* 10883996 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10883999 mov dword ptr [0x1089fe3c], edx */
  w32((uint32_t)(0x1089fe3c), (EDX));
  /* 1088399f jmp 0x108839cb */
  goto L_108839cb;
L_108839a1:;
  /* 108839a1 cmp dword ptr [0x1089fe40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x1089fe40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108839ab jl 0x108839cb */
  if ((C.sf!=C.of)) goto L_108839cb;
  /* 108839ad mov eax, dword ptr [0x1089fe40] */
  EAX = (r32((uint32_t)(0x1089fe40)));
  /* 108839b2 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108839b7 mov dword ptr [0x1089fe40], eax */
  w32((uint32_t)(0x1089fe40), (EAX));
  /* 108839bc mov ecx, dword ptr [0x1089fe3c] */
  ECX = (r32((uint32_t)(0x1089fe3c)));
  /* 108839c2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108839c5 mov dword ptr [0x1089fe3c], ecx */
  w32((uint32_t)(0x1089fe3c), (ECX));
L_108839cb:;
  /* 108839cb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108839ce mov dword ptr [0x1089fe38], edx */
  w32((uint32_t)(0x1089fe38), (EDX));
L_108839d4:;
  /* 108839d4 mov esp, ebp */
  ESP = (EBP);
  /* 108839d6 pop ebp */
  EBP = (pop32());
  /* 108839d7 ret  */
  ESPCHK(0x108837e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100139e0 @ 0x108839e0 (382 bytes, 135 insns) */
void f_108839e0(void) {
  FTRACE(0x108839e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108839e0 push ebp */
  push32((uint32_t)(EBP));
  /* 108839e1 mov ebp, esp */
  EBP = (ESP);
  /* 108839e3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 108839e5 push 0x1089c9f8 */
  push32((uint32_t)(0x1089c9f8u));
  /* 108839ea push 0x1087d6a8 */
  push32((uint32_t)(0x1087d6a8u));
  /* 108839ef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 108839f5 push eax */
  push32((uint32_t)(EAX));
  /* 108839f6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 108839fd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10883a00 push ebx */
  push32((uint32_t)(EBX));
  /* 10883a01 push esi */
  push32((uint32_t)(ESI));
  /* 10883a02 push edi */
  push32((uint32_t)(EDI));
  /* 10883a03 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10883a06 cmp dword ptr [0x108a0994], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a0994))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10883a0d jne 0x10883a52 */
  if (!C.zf) goto L_10883a52;
  /* 10883a0f push 0 */
  push32((uint32_t)(0x0u));
  /* 10883a11 push 0 */
  push32((uint32_t)(0x0u));
  /* 10883a13 push 1 */
  push32((uint32_t)(0x1u));
  /* 10883a15 push 0 */
  push32((uint32_t)(0x0u));
  /* 10883a17 call dword ptr [0x108a32c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a32c8))), 0x10883a1du);
  /* 10883a1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10883a1f je 0x10883a2d */
  if (C.zf) goto L_10883a2d;
  /* 10883a21 mov dword ptr [0x108a0994], 1 */
  w32((uint32_t)(0x108a0994), (0x1u));
  /* 10883a2b jmp 0x10883a52 */
  goto L_10883a52;
L_10883a2d:;
  /* 10883a2d push 0 */
  push32((uint32_t)(0x0u));
  /* 10883a2f push 0 */
  push32((uint32_t)(0x0u));
  /* 10883a31 push 1 */
  push32((uint32_t)(0x1u));
  /* 10883a33 push 0 */
  push32((uint32_t)(0x0u));
  /* 10883a35 call dword ptr [0x108a32e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a32e0))), 0x10883a3bu);
  /* 10883a3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10883a3d je 0x10883a4b */
  if (C.zf) goto L_10883a4b;
  /* 10883a3f mov dword ptr [0x108a0994], 2 */
  w32((uint32_t)(0x108a0994), (0x2u));
  /* 10883a49 jmp 0x10883a52 */
  goto L_10883a52;
L_10883a4b:;
  /* 10883a4b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10883a4d jmp 0x10883b61 */
  goto L_10883b61;
L_10883a52:;
  /* 10883a52 cmp dword ptr [0x108a0994], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108a0994))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10883a59 jne 0x10883a76 */
  if (!C.zf) goto L_10883a76;
  /* 10883a5b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10883a5e push eax */
  push32((uint32_t)(EAX));
  /* 10883a5f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10883a62 push ecx */
  push32((uint32_t)(ECX));
  /* 10883a63 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10883a66 push edx */
  push32((uint32_t)(EDX));
  /* 10883a67 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10883a6a push eax */
  push32((uint32_t)(EAX));
  /* 10883a6b call dword ptr [0x108a32c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a32c8))), 0x10883a71u);
  /* 10883a71 jmp 0x10883b61 */
  goto L_10883b61;
L_10883a76:;
  /* 10883a76 cmp dword ptr [0x108a0994], 2 */
  { uint32_t _a=(r32((uint32_t)(0x108a0994))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10883a7d jne 0x10883b5f */
  if (!C.zf) goto L_10883b5f;
  /* 10883a83 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10883a87 jne 0x10883a92 */
  if (!C.zf) goto L_10883a92;
  /* 10883a89 mov ecx, dword ptr [0x108a0848] */
  ECX = (r32((uint32_t)(0x108a0848)));
  /* 10883a8f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10883a92:;
  /* 10883a92 push 0 */
  push32((uint32_t)(0x0u));
  /* 10883a94 push 0 */
  push32((uint32_t)(0x0u));
  /* 10883a96 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10883a99 push edx */
  push32((uint32_t)(EDX));
  /* 10883a9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10883a9d push eax */
  push32((uint32_t)(EAX));
  /* 10883a9e call dword ptr [0x108a32e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a32e0))), 0x10883aa4u);
  /* 10883aa4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10883aa7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10883aab jne 0x10883ab4 */
  if (!C.zf) goto L_10883ab4;
  /* 10883aad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10883aaf jmp 0x10883b61 */
  goto L_10883b61;
L_10883ab4:;
  /* 10883ab4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10883abb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10883abe add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10883ac1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10883ac3 call 0x10877740 */
  push32(0x10883ac8u); f_10877740();
  /* 10883ac8 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 10883acb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10883ace mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10883ad1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10883ad4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10883adb jmp 0x10883af4 */
  goto L_10883af4;
  /* 10883add mov eax, 1 */
  EAX = (0x1u);
  /* 10883ae2 ret  */
  ESPCHK(0x108839e0u, _esp0);
  ESP += 4; return;
  /* 10883ae3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10883ae6 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10883aed mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10883af4:;
  /* 10883af4 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10883af8 jne 0x10883afe */
  if (!C.zf) goto L_10883afe;
  /* 10883afa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10883afc jmp 0x10883b61 */
  goto L_10883b61;
L_10883afe:;
  /* 10883afe mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10883b01 push edx */
  push32((uint32_t)(EDX));
  /* 10883b02 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10883b05 push eax */
  push32((uint32_t)(EAX));
  /* 10883b06 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10883b09 push ecx */
  push32((uint32_t)(ECX));
  /* 10883b0a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10883b0d push edx */
  push32((uint32_t)(EDX));
  /* 10883b0e call dword ptr [0x108a32e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a32e0))), 0x10883b14u);
  /* 10883b14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10883b16 jne 0x10883b1c */
  if (!C.zf) goto L_10883b1c;
  /* 10883b18 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10883b1a jmp 0x10883b61 */
  goto L_10883b61;
L_10883b1c:;
  /* 10883b1c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10883b20 jne 0x10883b3d */
  if (!C.zf) goto L_10883b3d;
  /* 10883b22 push 0 */
  push32((uint32_t)(0x0u));
  /* 10883b24 push 0 */
  push32((uint32_t)(0x0u));
  /* 10883b26 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10883b28 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10883b2b push eax */
  push32((uint32_t)(EAX));
  /* 10883b2c push 1 */
  push32((uint32_t)(0x1u));
  /* 10883b2e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10883b31 push ecx */
  push32((uint32_t)(ECX));
  /* 10883b32 call dword ptr [0x108a3310] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3310))), 0x10883b38u);
  /* 10883b38 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10883b3b jmp 0x10883b5a */
  goto L_10883b5a;
L_10883b3d:;
  /* 10883b3d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10883b40 push edx */
  push32((uint32_t)(EDX));
  /* 10883b41 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10883b44 push eax */
  push32((uint32_t)(EAX));
  /* 10883b45 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10883b47 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10883b4a push ecx */
  push32((uint32_t)(ECX));
  /* 10883b4b push 1 */
  push32((uint32_t)(0x1u));
  /* 10883b4d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10883b50 push edx */
  push32((uint32_t)(EDX));
  /* 10883b51 call dword ptr [0x108a3310] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3310))), 0x10883b57u);
  /* 10883b57 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10883b5a:;
  /* 10883b5a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10883b5d jmp 0x10883b61 */
  goto L_10883b61;
L_10883b5f:;
  /* 10883b5f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10883b61:;
  /* 10883b61 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10883b64 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10883b67 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10883b6e pop edi */
  EDI = (pop32());
  /* 10883b6f pop esi */
  ESI = (pop32());
  /* 10883b70 pop ebx */
  EBX = (pop32());
  /* 10883b71 mov esp, ebp */
  ESP = (EBP);
  /* 10883b73 pop ebp */
  EBP = (pop32());
  /* 10883b74 ret  */
  ESPCHK(0x108839e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b80 @ 0x10883b80 (398 bytes, 140 insns) */
void f_10883b80(void) {
  FTRACE(0x10883b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10883b80 push ebp */
  push32((uint32_t)(EBP));
  /* 10883b81 mov ebp, esp */
  EBP = (ESP);
  /* 10883b83 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10883b85 push 0x1089ca08 */
  push32((uint32_t)(0x1089ca08u));
  /* 10883b8a push 0x1087d6a8 */
  push32((uint32_t)(0x1087d6a8u));
  /* 10883b8f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10883b95 push eax */
  push32((uint32_t)(EAX));
  /* 10883b96 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10883b9d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10883ba0 push ebx */
  push32((uint32_t)(EBX));
  /* 10883ba1 push esi */
  push32((uint32_t)(ESI));
  /* 10883ba2 push edi */
  push32((uint32_t)(EDI));
  /* 10883ba3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10883ba6 cmp dword ptr [0x108a0998], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a0998))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10883bad jne 0x10883bf2 */
  if (!C.zf) goto L_10883bf2;
  /* 10883baf push 0 */
  push32((uint32_t)(0x0u));
  /* 10883bb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10883bb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10883bb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10883bb7 call dword ptr [0x108a32c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a32c8))), 0x10883bbdu);
  /* 10883bbd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10883bbf je 0x10883bcd */
  if (C.zf) goto L_10883bcd;
  /* 10883bc1 mov dword ptr [0x108a0998], 1 */
  w32((uint32_t)(0x108a0998), (0x1u));
  /* 10883bcb jmp 0x10883bf2 */
  goto L_10883bf2;
L_10883bcd:;
  /* 10883bcd push 0 */
  push32((uint32_t)(0x0u));
  /* 10883bcf push 0 */
  push32((uint32_t)(0x0u));
  /* 10883bd1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10883bd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10883bd5 call dword ptr [0x108a32e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a32e0))), 0x10883bdbu);
  /* 10883bdb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10883bdd je 0x10883beb */
  if (C.zf) goto L_10883beb;
  /* 10883bdf mov dword ptr [0x108a0998], 2 */
  w32((uint32_t)(0x108a0998), (0x2u));
  /* 10883be9 jmp 0x10883bf2 */
  goto L_10883bf2;
L_10883beb:;
  /* 10883beb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10883bed jmp 0x10883d11 */
  goto L_10883d11;
L_10883bf2:;
  /* 10883bf2 cmp dword ptr [0x108a0998], 2 */
  { uint32_t _a=(r32((uint32_t)(0x108a0998))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10883bf9 jne 0x10883c16 */
  if (!C.zf) goto L_10883c16;
  /* 10883bfb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10883bfe push eax */
  push32((uint32_t)(EAX));
  /* 10883bff mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10883c02 push ecx */
  push32((uint32_t)(ECX));
  /* 10883c03 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10883c06 push edx */
  push32((uint32_t)(EDX));
  /* 10883c07 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10883c0a push eax */
  push32((uint32_t)(EAX));
  /* 10883c0b call dword ptr [0x108a32e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a32e0))), 0x10883c11u);
  /* 10883c11 jmp 0x10883d11 */
  goto L_10883d11;
L_10883c16:;
  /* 10883c16 cmp dword ptr [0x108a0998], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108a0998))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10883c1d jne 0x10883d0f */
  if (!C.zf) goto L_10883d0f;
  /* 10883c23 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10883c27 jne 0x10883c32 */
  if (!C.zf) goto L_10883c32;
  /* 10883c29 mov ecx, dword ptr [0x108a0848] */
  ECX = (r32((uint32_t)(0x108a0848)));
  /* 10883c2f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10883c32:;
  /* 10883c32 push 0 */
  push32((uint32_t)(0x0u));
  /* 10883c34 push 0 */
  push32((uint32_t)(0x0u));
  /* 10883c36 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10883c39 push edx */
  push32((uint32_t)(EDX));
  /* 10883c3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10883c3d push eax */
  push32((uint32_t)(EAX));
  /* 10883c3e call dword ptr [0x108a32c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a32c8))), 0x10883c44u);
  /* 10883c44 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10883c47 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10883c4b jne 0x10883c54 */
  if (!C.zf) goto L_10883c54;
  /* 10883c4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10883c4f jmp 0x10883d11 */
  goto L_10883d11;
L_10883c54:;
  /* 10883c54 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10883c5b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10883c5e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10883c60 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10883c63 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10883c65 call 0x10877740 */
  push32(0x10883c6au); f_10877740();
  /* 10883c6a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 10883c6d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10883c70 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10883c73 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10883c76 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10883c7d jmp 0x10883c96 */
  goto L_10883c96;
  /* 10883c7f mov eax, 1 */
  EAX = (0x1u);
  /* 10883c84 ret  */
  ESPCHK(0x10883b80u, _esp0);
  ESP += 4; return;
  /* 10883c85 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10883c88 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10883c8f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10883c96:;
  /* 10883c96 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10883c9a jne 0x10883ca0 */
  if (!C.zf) goto L_10883ca0;
  /* 10883c9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10883c9e jmp 0x10883d11 */
  goto L_10883d11;
L_10883ca0:;
  /* 10883ca0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10883ca3 push edx */
  push32((uint32_t)(EDX));
  /* 10883ca4 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10883ca7 push eax */
  push32((uint32_t)(EAX));
  /* 10883ca8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10883cab push ecx */
  push32((uint32_t)(ECX));
  /* 10883cac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10883caf push edx */
  push32((uint32_t)(EDX));
  /* 10883cb0 call dword ptr [0x108a32c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a32c8))), 0x10883cb6u);
  /* 10883cb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10883cb8 jne 0x10883cbe */
  if (!C.zf) goto L_10883cbe;
  /* 10883cba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10883cbc jmp 0x10883d11 */
  goto L_10883d11;
L_10883cbe:;
  /* 10883cbe cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10883cc2 jne 0x10883ce6 */
  if (!C.zf) goto L_10883ce6;
  /* 10883cc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10883cc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10883cc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10883cca push 0 */
  push32((uint32_t)(0x0u));
  /* 10883ccc push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10883cce mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10883cd1 push eax */
  push32((uint32_t)(EAX));
  /* 10883cd2 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10883cd7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10883cda push ecx */
  push32((uint32_t)(ECX));
  /* 10883cdb call dword ptr [0x108a335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a335c))), 0x10883ce1u);
  /* 10883ce1 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10883ce4 jmp 0x10883d0a */
  goto L_10883d0a;
L_10883ce6:;
  /* 10883ce6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10883ce8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10883cea mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10883ced push edx */
  push32((uint32_t)(EDX));
  /* 10883cee mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10883cf1 push eax */
  push32((uint32_t)(EAX));
  /* 10883cf2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10883cf4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10883cf7 push ecx */
  push32((uint32_t)(ECX));
  /* 10883cf8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10883cfd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10883d00 push edx */
  push32((uint32_t)(EDX));
  /* 10883d01 call dword ptr [0x108a335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a335c))), 0x10883d07u);
  /* 10883d07 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10883d0a:;
  /* 10883d0a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10883d0d jmp 0x10883d11 */
  goto L_10883d11;
L_10883d0f:;
  /* 10883d0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10883d11:;
  /* 10883d11 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10883d14 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10883d17 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10883d1e pop edi */
  EDI = (pop32());
  /* 10883d1f pop esi */
  ESI = (pop32());
  /* 10883d20 pop ebx */
  EBX = (pop32());
  /* 10883d21 mov esp, ebp */
  ESP = (EBP);
  /* 10883d23 pop ebp */
  EBP = (pop32());
  /* 10883d24 ret  */
  ESPCHK(0x10883b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10013d30 @ 0x10883d30 (11 bytes, 6 insns) */
void f_10883d30(void) {
  FTRACE(0x10883d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10883d30 push ebp */
  push32((uint32_t)(EBP));
  /* 10883d31 mov ebp, esp */
  EBP = (ESP);
  /* 10883d33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10883d36 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10883d39 pop ebp */
  EBP = (pop32());
  /* 10883d3a ret  */
  ESPCHK(0x10883d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10013d40 @ 0x10883d40 (147 bytes, 43 insns) */
void f_10883d40(void) {
  FTRACE(0x10883d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10883d40 push ebp */
  push32((uint32_t)(EBP));
  /* 10883d41 mov ebp, esp */
  EBP = (ESP);
  /* 10883d43 push ecx */
  push32((uint32_t)(ECX));
  /* 10883d44 cmp dword ptr [0x108a0838], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a0838))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10883d4b jne 0x10883d67 */
  if (!C.zf) goto L_10883d67;
  /* 10883d4d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10883d51 jl 0x10883d62 */
  if ((C.sf!=C.of)) goto L_10883d62;
  /* 10883d53 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10883d57 jg 0x10883d62 */
  if ((!C.zf&&C.sf==C.of)) goto L_10883d62;
  /* 10883d59 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10883d5c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10883d5f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10883d62:;
  /* 10883d62 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10883d65 jmp 0x10883dcf */
  goto L_10883dcf;
L_10883d67:;
  /* 10883d67 push 0x108a09c4 */
  push32((uint32_t)(0x108a09c4u));
  /* 10883d6c call dword ptr [0x108a3388] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3388))), 0x10883d72u);
  /* 10883d72 cmp dword ptr [0x108a09b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a09b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10883d79 je 0x10883d99 */
  if (C.zf) goto L_10883d99;
  /* 10883d7b push 0x108a09c4 */
  push32((uint32_t)(0x108a09c4u));
  /* 10883d80 call dword ptr [0x108a3378] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3378))), 0x10883d86u);
  /* 10883d86 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10883d88 call 0x10877fa0 */
  push32(0x10883d8du); f_10877fa0();
  /* 10883d8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10883d90 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10883d97 jmp 0x10883da0 */
  goto L_10883da0;
L_10883d99:;
  /* 10883d99 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10883da0:;
  /* 10883da0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10883da3 push ecx */
  push32((uint32_t)(ECX));
  /* 10883da4 call 0x10883de0 */
  push32(0x10883da9u); f_10883de0();
  /* 10883da9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10883dac mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10883daf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10883db3 je 0x10883dc1 */
  if (C.zf) goto L_10883dc1;
  /* 10883db5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10883db7 call 0x10878040 */
  push32(0x10883dbcu); f_10878040();
  /* 10883dbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10883dbf jmp 0x10883dcc */
  goto L_10883dcc;
L_10883dc1:;
  /* 10883dc1 push 0x108a09c4 */
  push32((uint32_t)(0x108a09c4u));
  /* 10883dc6 call dword ptr [0x108a3378] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3378))), 0x10883dccu);
L_10883dcc:;
  /* 10883dcc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10883dcf:;
  /* 10883dcf mov esp, ebp */
  ESP = (EBP);
  /* 10883dd1 pop ebp */
  EBP = (pop32());
  /* 10883dd2 ret  */
  ESPCHK(0x10883d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10013de0 @ 0x10883de0 (299 bytes, 91 insns) */
void f_10883de0(void) {
  FTRACE(0x10883de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10883de0 push ebp */
  push32((uint32_t)(EBP));
  /* 10883de1 mov ebp, esp */
  EBP = (ESP);
  /* 10883de3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10883de6 cmp dword ptr [0x108a0838], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a0838))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10883ded jne 0x10883e0c */
  if (!C.zf) goto L_10883e0c;
  /* 10883def cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10883df3 jl 0x10883e04 */
  if ((C.sf!=C.of)) goto L_10883e04;
  /* 10883df5 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10883df9 jg 0x10883e04 */
  if ((!C.zf&&C.sf==C.of)) goto L_10883e04;
  /* 10883dfb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10883dfe add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10883e01 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10883e04:;
  /* 10883e04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10883e07 jmp 0x10883f07 */
  goto L_10883f07;
L_10883e0c:;
  /* 10883e0c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10883e13 jge 0x10883e53 */
  if ((C.sf==C.of)) goto L_10883e53;
  /* 10883e15 cmp dword ptr [0x1089eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1089eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10883e1c jle 0x10883e31 */
  if ((C.zf||C.sf!=C.of)) goto L_10883e31;
  /* 10883e1e push 1 */
  push32((uint32_t)(0x1u));
  /* 10883e20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10883e23 push ecx */
  push32((uint32_t)(ECX));
  /* 10883e24 call 0x1087a5b0 */
  push32(0x10883e29u); f_1087a5b0();
  /* 10883e29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10883e2c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10883e2f jmp 0x10883e45 */
  goto L_10883e45;
L_10883e31:;
  /* 10883e31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10883e34 mov eax, dword ptr [0x1089ec98] */
  EAX = (r32((uint32_t)(0x1089ec98)));
  /* 10883e39 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10883e3b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10883e3f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10883e42 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10883e45:;
  /* 10883e45 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10883e49 jne 0x10883e53 */
  if (!C.zf) goto L_10883e53;
  /* 10883e4b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10883e4e jmp 0x10883f07 */
  goto L_10883f07;
L_10883e53:;
  /* 10883e53 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10883e56 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10883e59 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10883e5f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10883e65 mov eax, dword ptr [0x1089ec98] */
  EAX = (r32((uint32_t)(0x1089ec98)));
  /* 10883e6a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10883e6c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10883e70 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10883e76 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10883e78 je 0x10883e9c */
  if (C.zf) goto L_10883e9c;
  /* 10883e7a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10883e7d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10883e80 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10883e86 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 10883e89 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10883e8c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 10883e8f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 10883e93 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10883e9a jmp 0x10883ead */
  goto L_10883ead;
L_10883e9c:;
  /* 10883e9c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10883e9f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10883ea2 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 10883ea6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_10883ead:;
  /* 10883ead push 1 */
  push32((uint32_t)(0x1u));
  /* 10883eaf push 0 */
  push32((uint32_t)(0x0u));
  /* 10883eb1 push 3 */
  push32((uint32_t)(0x3u));
  /* 10883eb3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10883eb6 push edx */
  push32((uint32_t)(EDX));
  /* 10883eb7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10883eba push eax */
  push32((uint32_t)(EAX));
  /* 10883ebb lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10883ebe push ecx */
  push32((uint32_t)(ECX));
  /* 10883ebf push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10883ec4 mov edx, dword ptr [0x108a0838] */
  EDX = (r32((uint32_t)(0x108a0838)));
  /* 10883eca push edx */
  push32((uint32_t)(EDX));
  /* 10883ecb call 0x1087c990 */
  push32(0x10883ed0u); f_1087c990();
  /* 10883ed0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10883ed3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10883ed6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10883eda jne 0x10883ee1 */
  if (!C.zf) goto L_10883ee1;
  /* 10883edc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10883edf jmp 0x10883f07 */
  goto L_10883f07;
L_10883ee1:;
  /* 10883ee1 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10883ee5 jne 0x10883ef1 */
  if (!C.zf) goto L_10883ef1;
  /* 10883ee7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10883eea and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10883eef jmp 0x10883f07 */
  goto L_10883f07;
L_10883ef1:;
  /* 10883ef1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10883ef4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10883ef9 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 10883efc and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10883f02 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10883f05 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_10883f07:;
  /* 10883f07 mov esp, ebp */
  ESP = (EBP);
  /* 10883f09 pop ebp */
  EBP = (pop32());
  /* 10883f0a ret  */
  ESPCHK(0x10883de0u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x10883f10 (52 bytes, 19 insns) */
void f_10883f10(void) {
  FTRACE(0x10883f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10883f10 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10883f14 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10883f18 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10883f1a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10883f1e jne 0x10883f29 */
  if (!C.zf) goto L_10883f29;
  /* 10883f20 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10883f24 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10883f26 ret 0x10 */
  ESPCHK(0x10883f10u, _esp0);
  ESP += 20; return;
L_10883f29:;
  /* 10883f29 push ebx */
  push32((uint32_t)(EBX));
  /* 10883f2a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10883f2c mov ebx, eax */
  EBX = (EAX);
  /* 10883f2e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10883f32 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10883f36 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10883f38 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10883f3c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10883f3e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10883f40 pop ebx */
  EBX = (pop32());
  /* 10883f41 ret 0x10 */
  ESPCHK(0x10883f10u, _esp0);
  ESP += 20; return;
}

/* FUN_10013f50 @ 0x10883f50 (46 bytes, 18 insns) */
void f_10883f50(void) {
  FTRACE(0x10883f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10883f50 push ebp */
  push32((uint32_t)(EBP));
  /* 10883f51 mov ebp, esp */
  EBP = (ESP);
  /* 10883f53 push ecx */
  push32((uint32_t)(ECX));
  /* 10883f54 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10883f56 call 0x10877fa0 */
  push32(0x10883f5bu); f_10877fa0();
  /* 10883f5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10883f5e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10883f61 push eax */
  push32((uint32_t)(EAX));
  /* 10883f62 call 0x10883f80 */
  push32(0x10883f67u); f_10883f80();
  /* 10883f67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10883f6a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10883f6d push 0xc */
  push32((uint32_t)(0xcu));
  /* 10883f6f call 0x10878040 */
  push32(0x10883f74u); f_10878040();
  /* 10883f74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10883f77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10883f7a mov esp, ebp */
  ESP = (EBP);
  /* 10883f7c pop ebp */
  EBP = (pop32());
  /* 10883f7d ret  */
  ESPCHK(0x10883f50u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x10883f80 (198 bytes, 69 insns) */
void f_10883f80(void) {
  FTRACE(0x10883f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10883f80 push ebp */
  push32((uint32_t)(EBP));
  /* 10883f81 mov ebp, esp */
  EBP = (ESP);
  /* 10883f83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10883f86 mov eax, dword ptr [0x108a0654] */
  EAX = (r32((uint32_t)(0x108a0654)));
  /* 10883f8b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10883f8e cmp dword ptr [0x108a2160], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a2160))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10883f95 jne 0x10883f9e */
  if (!C.zf) goto L_10883f9e;
  /* 10883f97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10883f99 jmp 0x10884042 */
  goto L_10884042;
L_10883f9e:;
  /* 10883f9e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10883fa2 jne 0x10883fc6 */
  if (!C.zf) goto L_10883fc6;
  /* 10883fa4 cmp dword ptr [0x108a065c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a065c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10883fab je 0x10883fc6 */
  if (C.zf) goto L_10883fc6;
  /* 10883fad call 0x108840a0 */
  push32(0x10883fb2u); f_108840a0();
  /* 10883fb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10883fb4 je 0x10883fbd */
  if (C.zf) goto L_10883fbd;
  /* 10883fb6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10883fb8 jmp 0x10884042 */
  goto L_10884042;
L_10883fbd:;
  /* 10883fbd mov ecx, dword ptr [0x108a0654] */
  ECX = (r32((uint32_t)(0x108a0654)));
  /* 10883fc3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10883fc6:;
  /* 10883fc6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10883fca je 0x10884040 */
  if (C.zf) goto L_10884040;
  /* 10883fcc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10883fd0 je 0x10884040 */
  if (C.zf) goto L_10884040;
  /* 10883fd2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10883fd5 push edx */
  push32((uint32_t)(EDX));
  /* 10883fd6 call 0x108773d0 */
  push32(0x10883fdbu); f_108773d0();
  /* 10883fdb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10883fde mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10883fe1:;
  /* 10883fe1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10883fe4 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10883fe7 je 0x10884040 */
  if (C.zf) goto L_10884040;
  /* 10883fe9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10883fec mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10883fee push edx */
  push32((uint32_t)(EDX));
  /* 10883fef call 0x108773d0 */
  push32(0x10883ff4u); f_108773d0();
  /* 10883ff4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10883ff7 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10883ffa jbe 0x10884035 */
  if ((C.cf||C.zf)) goto L_10884035;
  /* 10883ffc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10883fff mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10884001 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10884004 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 10884008 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1088400b jne 0x10884035 */
  if (!C.zf) goto L_10884035;
  /* 1088400d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10884010 push ecx */
  push32((uint32_t)(ECX));
  /* 10884011 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10884014 push edx */
  push32((uint32_t)(EDX));
  /* 10884015 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10884018 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1088401a push ecx */
  push32((uint32_t)(ECX));
  /* 1088401b call 0x10884050 */
  push32(0x10884020u); f_10884050();
  /* 10884020 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10884023 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10884025 jne 0x10884035 */
  if (!C.zf) goto L_10884035;
  /* 10884027 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1088402a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1088402c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1088402f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 10884033 jmp 0x10884042 */
  goto L_10884042;
L_10884035:;
  /* 10884035 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10884038 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1088403b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1088403e jmp 0x10883fe1 */
  goto L_10883fe1;
L_10884040:;
  /* 10884040 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10884042:;
  /* 10884042 mov esp, ebp */
  ESP = (EBP);
  /* 10884044 pop ebp */
  EBP = (pop32());
  /* 10884045 ret  */
  ESPCHK(0x10883f80u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x10884050 (79 bytes, 32 insns) */
void f_10884050(void) {
  FTRACE(0x10884050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10884050 push ebp */
  push32((uint32_t)(EBP));
  /* 10884051 mov ebp, esp */
  EBP = (ESP);
  /* 10884053 push ecx */
  push32((uint32_t)(ECX));
  /* 10884054 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10884058 jne 0x1088405e */
  if (!C.zf) goto L_1088405e;
  /* 1088405a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1088405c jmp 0x1088409b */
  goto L_1088409b;
L_1088405e:;
  /* 1088405e mov eax, dword ptr [0x108a1d24] */
  EAX = (r32((uint32_t)(0x108a1d24)));
  /* 10884063 push eax */
  push32((uint32_t)(EAX));
  /* 10884064 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10884067 push ecx */
  push32((uint32_t)(ECX));
  /* 10884068 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1088406b push edx */
  push32((uint32_t)(EDX));
  /* 1088406c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1088406f push eax */
  push32((uint32_t)(EAX));
  /* 10884070 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10884073 push ecx */
  push32((uint32_t)(ECX));
  /* 10884074 push 1 */
  push32((uint32_t)(0x1u));
  /* 10884076 mov edx, dword ptr [0x108a1fc4] */
  EDX = (r32((uint32_t)(0x108a1fc4)));
  /* 1088407c push edx */
  push32((uint32_t)(EDX));
  /* 1088407d call 0x10884150 */
  push32(0x10884082u); f_10884150();
  /* 10884082 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10884085 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10884088 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1088408c jne 0x10884095 */
  if (!C.zf) goto L_10884095;
  /* 1088408e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 10884093 jmp 0x1088409b */
  goto L_1088409b;
L_10884095:;
  /* 10884095 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10884098 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1088409b:;
  /* 1088409b mov esp, ebp */
  ESP = (EBP);
  /* 1088409d pop ebp */
  EBP = (pop32());
  /* 1088409e ret  */
  ESPCHK(0x10884050u, _esp0);
  ESP += 4; return;
}

/* FUN_100140a0 @ 0x108840a0 (174 bytes, 66 insns) */
void f_108840a0(void) {
  FTRACE(0x108840a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108840a0 push ebp */
  push32((uint32_t)(EBP));
  /* 108840a1 mov ebp, esp */
  EBP = (ESP);
  /* 108840a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108840a6 mov eax, dword ptr [0x108a065c] */
  EAX = (r32((uint32_t)(0x108a065c)));
  /* 108840ab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108840ae:;
  /* 108840ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108840b1 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108840b4 je 0x10884148 */
  if (C.zf) goto L_10884148;
  /* 108840ba push 0 */
  push32((uint32_t)(0x0u));
  /* 108840bc push 0 */
  push32((uint32_t)(0x0u));
  /* 108840be push 0 */
  push32((uint32_t)(0x0u));
  /* 108840c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 108840c2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 108840c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108840c7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108840c9 push eax */
  push32((uint32_t)(EAX));
  /* 108840ca push 0 */
  push32((uint32_t)(0x0u));
  /* 108840cc push 1 */
  push32((uint32_t)(0x1u));
  /* 108840ce call dword ptr [0x108a335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a335c))), 0x108840d4u);
  /* 108840d4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108840d7 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108840db jne 0x108840e2 */
  if (!C.zf) goto L_108840e2;
  /* 108840dd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108840e0 jmp 0x1088414a */
  goto L_1088414a;
L_108840e2:;
  /* 108840e2 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 108840e4 push 0x1089ca14 */
  push32((uint32_t)(0x1089ca14u));
  /* 108840e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 108840eb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108840ee push ecx */
  push32((uint32_t)(ECX));
  /* 108840ef call 0x108745a0 */
  push32(0x108840f4u); f_108745a0();
  /* 108840f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108840f7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108840fa cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108840fe jne 0x10884105 */
  if (!C.zf) goto L_10884105;
  /* 10884100 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10884103 jmp 0x1088414a */
  goto L_1088414a;
L_10884105:;
  /* 10884105 push 0 */
  push32((uint32_t)(0x0u));
  /* 10884107 push 0 */
  push32((uint32_t)(0x0u));
  /* 10884109 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1088410c push edx */
  push32((uint32_t)(EDX));
  /* 1088410d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10884110 push eax */
  push32((uint32_t)(EAX));
  /* 10884111 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10884113 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10884116 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10884118 push edx */
  push32((uint32_t)(EDX));
  /* 10884119 push 0 */
  push32((uint32_t)(0x0u));
  /* 1088411b push 1 */
  push32((uint32_t)(0x1u));
  /* 1088411d call dword ptr [0x108a335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a335c))), 0x10884123u);
  /* 10884123 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10884125 jne 0x1088412c */
  if (!C.zf) goto L_1088412c;
  /* 10884127 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1088412a jmp 0x1088414a */
  goto L_1088414a;
L_1088412c:;
  /* 1088412c push 0 */
  push32((uint32_t)(0x0u));
  /* 1088412e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10884131 push eax */
  push32((uint32_t)(EAX));
  /* 10884132 call 0x108845a0 */
  push32(0x10884137u); f_108845a0();
  /* 10884137 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1088413a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1088413d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10884140 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10884143 jmp 0x108840ae */
  goto L_108840ae;
L_10884148:;
  /* 10884148 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1088414a:;
  /* 1088414a mov esp, ebp */
  ESP = (EBP);
  /* 1088414c pop ebp */
  EBP = (pop32());
  /* 1088414d ret  */
  ESPCHK(0x108840a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014150 @ 0x10884150 (970 bytes, 340 insns) */
void f_10884150(void) {
  FTRACE(0x10884150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10884150 push ebp */
  push32((uint32_t)(EBP));
  /* 10884151 mov ebp, esp */
  EBP = (ESP);
  /* 10884153 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10884155 push 0x1089ca68 */
  push32((uint32_t)(0x1089ca68u));
  /* 1088415a push 0x1087d6a8 */
  push32((uint32_t)(0x1087d6a8u));
  /* 1088415f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10884165 push eax */
  push32((uint32_t)(EAX));
  /* 10884166 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1088416d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10884170 push ebx */
  push32((uint32_t)(EBX));
  /* 10884171 push esi */
  push32((uint32_t)(ESI));
  /* 10884172 push edi */
  push32((uint32_t)(EDI));
  /* 10884173 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10884176 cmp dword ptr [0x108a099c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a099c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1088417d jne 0x108841d6 */
  if (!C.zf) goto L_108841d6;
  /* 1088417f push 1 */
  push32((uint32_t)(0x1u));
  /* 10884181 push 0x1089c0c4 */
  push32((uint32_t)(0x1089c0c4u));
  /* 10884186 push 1 */
  push32((uint32_t)(0x1u));
  /* 10884188 push 0x1089c0c4 */
  push32((uint32_t)(0x1089c0c4u));
  /* 1088418d push 0 */
  push32((uint32_t)(0x0u));
  /* 1088418f push 0 */
  push32((uint32_t)(0x0u));
  /* 10884191 call dword ptr [0x108a32c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a32c4))), 0x10884197u);
  /* 10884197 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10884199 je 0x108841a7 */
  if (C.zf) goto L_108841a7;
  /* 1088419b mov dword ptr [0x108a099c], 1 */
  w32((uint32_t)(0x108a099c), (0x1u));
  /* 108841a5 jmp 0x108841d6 */
  goto L_108841d6;
L_108841a7:;
  /* 108841a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 108841a9 push 0x1089c0c0 */
  push32((uint32_t)(0x1089c0c0u));
  /* 108841ae push 1 */
  push32((uint32_t)(0x1u));
  /* 108841b0 push 0x1089c0c0 */
  push32((uint32_t)(0x1089c0c0u));
  /* 108841b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 108841b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 108841b9 call dword ptr [0x108a32d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a32d0))), 0x108841bfu);
  /* 108841bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108841c1 je 0x108841cf */
  if (C.zf) goto L_108841cf;
  /* 108841c3 mov dword ptr [0x108a099c], 2 */
  w32((uint32_t)(0x108a099c), (0x2u));
  /* 108841cd jmp 0x108841d6 */
  goto L_108841d6;
L_108841cf:;
  /* 108841cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108841d1 jmp 0x10884534 */
  goto L_10884534;
L_108841d6:;
  /* 108841d6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108841da jle 0x108841ef */
  if ((C.zf||C.sf!=C.of)) goto L_108841ef;
  /* 108841dc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108841df push eax */
  push32((uint32_t)(EAX));
  /* 108841e0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108841e3 push ecx */
  push32((uint32_t)(ECX));
  /* 108841e4 call 0x10884550 */
  push32(0x108841e9u); f_10884550();
  /* 108841e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108841ec mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_108841ef:;
  /* 108841ef cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108841f3 jle 0x10884208 */
  if ((C.zf||C.sf!=C.of)) goto L_10884208;
  /* 108841f5 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 108841f8 push edx */
  push32((uint32_t)(EDX));
  /* 108841f9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 108841fc push eax */
  push32((uint32_t)(EAX));
  /* 108841fd call 0x10884550 */
  push32(0x10884202u); f_10884550();
  /* 10884202 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10884205 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_10884208:;
  /* 10884208 cmp dword ptr [0x108a099c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x108a099c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1088420f jne 0x10884234 */
  if (!C.zf) goto L_10884234;
  /* 10884211 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10884214 push ecx */
  push32((uint32_t)(ECX));
  /* 10884215 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10884218 push edx */
  push32((uint32_t)(EDX));
  /* 10884219 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1088421c push eax */
  push32((uint32_t)(EAX));
  /* 1088421d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10884220 push ecx */
  push32((uint32_t)(ECX));
  /* 10884221 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10884224 push edx */
  push32((uint32_t)(EDX));
  /* 10884225 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10884228 push eax */
  push32((uint32_t)(EAX));
  /* 10884229 call dword ptr [0x108a32d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a32d0))), 0x1088422fu);
  /* 1088422f jmp 0x10884534 */
  goto L_10884534;
L_10884234:;
  /* 10884234 cmp dword ptr [0x108a099c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108a099c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1088423b jne 0x10884532 */
  if (!C.zf) goto L_10884532;
  /* 10884241 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10884245 jne 0x10884250 */
  if (!C.zf) goto L_10884250;
  /* 10884247 mov ecx, dword ptr [0x108a0848] */
  ECX = (r32((uint32_t)(0x108a0848)));
  /* 1088424d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_10884250:;
  /* 10884250 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10884254 je 0x10884260 */
  if (C.zf) goto L_10884260;
  /* 10884256 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1088425a jne 0x108843dc */
  if (!C.zf) goto L_108843dc;
L_10884260:;
  /* 10884260 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10884263 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10884266 jne 0x10884272 */
  if (!C.zf) goto L_10884272;
  /* 10884268 mov eax, 2 */
  EAX = (0x2u);
  /* 1088426d jmp 0x10884534 */
  goto L_10884534;
L_10884272:;
  /* 10884272 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10884276 jle 0x10884282 */
  if ((C.zf||C.sf!=C.of)) goto L_10884282;
  /* 10884278 mov eax, 1 */
  EAX = (0x1u);
  /* 1088427d jmp 0x10884534 */
  goto L_10884534;
L_10884282:;
  /* 10884282 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10884286 jle 0x10884292 */
  if ((C.zf||C.sf!=C.of)) goto L_10884292;
  /* 10884288 mov eax, 3 */
  EAX = (0x3u);
  /* 1088428d jmp 0x10884534 */
  goto L_10884534;
L_10884292:;
  /* 10884292 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 10884295 push eax */
  push32((uint32_t)(EAX));
  /* 10884296 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10884299 push ecx */
  push32((uint32_t)(ECX));
  /* 1088429a call dword ptr [0x108a331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a331c))), 0x108842a0u);
  /* 108842a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108842a2 jne 0x108842ab */
  if (!C.zf) goto L_108842ab;
  /* 108842a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108842a6 jmp 0x10884534 */
  goto L_10884534;
L_108842ab:;
  /* 108842ab cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108842af jne 0x108842b7 */
  if (!C.zf) goto L_108842b7;
  /* 108842b1 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108842b5 je 0x108842e4 */
  if (C.zf) goto L_108842e4;
L_108842b7:;
  /* 108842b7 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108842bb jne 0x108842c3 */
  if (!C.zf) goto L_108842c3;
  /* 108842bd cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108842c1 je 0x108842e4 */
  if (C.zf) goto L_108842e4;
L_108842c3:;
  /* 108842c3 push 0x1089ca28 */
  push32((uint32_t)(0x1089ca28u));
  /* 108842c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 108842ca push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 108842cf push 0x1089ca20 */
  push32((uint32_t)(0x1089ca20u));
  /* 108842d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 108842d6 call 0x10873660 */
  push32(0x108842dbu); f_10873660();
  /* 108842db add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108842de cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108842e1 jne 0x108842e4 */
  if (!C.zf) goto L_108842e4;
  /* 108842e3 int3  */
  x86_unimpl("int3 @ 0x108842e3");
L_108842e4:;
  /* 108842e4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108842e6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108842e8 jne 0x108842ab */
  if (!C.zf) goto L_108842ab;
  /* 108842ea cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108842ee jle 0x10884363 */
  if ((C.zf||C.sf!=C.of)) goto L_10884363;
  /* 108842f0 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108842f4 jae 0x10884300 */
  if (!C.cf) goto L_10884300;
  /* 108842f6 mov eax, 3 */
  EAX = (0x3u);
  /* 108842fb jmp 0x10884534 */
  goto L_10884534;
L_10884300:;
  /* 10884300 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 10884303 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 10884306 jmp 0x10884311 */
  goto L_10884311;
L_10884308:;
  /* 10884308 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1088430b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1088430e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_10884311:;
  /* 10884311 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10884314 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10884316 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10884318 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1088431a je 0x10884359 */
  if (C.zf) goto L_10884359;
  /* 1088431c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1088431f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10884321 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10884324 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10884326 je 0x10884359 */
  if (C.zf) goto L_10884359;
  /* 10884328 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1088432b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1088432d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1088432f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10884332 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10884334 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10884336 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10884338 jl 0x10884357 */
  if ((C.sf!=C.of)) goto L_10884357;
  /* 1088433a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1088433d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1088433f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10884341 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10884344 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10884346 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10884349 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1088434b jg 0x10884357 */
  if ((!C.zf&&C.sf==C.of)) goto L_10884357;
  /* 1088434d mov eax, 2 */
  EAX = (0x2u);
  /* 10884352 jmp 0x10884534 */
  goto L_10884534;
L_10884357:;
  /* 10884357 jmp 0x10884308 */
  goto L_10884308;
L_10884359:;
  /* 10884359 mov eax, 3 */
  EAX = (0x3u);
  /* 1088435e jmp 0x10884534 */
  goto L_10884534;
L_10884363:;
  /* 10884363 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10884367 jle 0x108843dc */
  if ((C.zf||C.sf!=C.of)) goto L_108843dc;
  /* 10884369 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1088436d jae 0x10884379 */
  if (!C.cf) goto L_10884379;
  /* 1088436f mov eax, 1 */
  EAX = (0x1u);
  /* 10884374 jmp 0x10884534 */
  goto L_10884534;
L_10884379:;
  /* 10884379 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 1088437c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 1088437f jmp 0x1088438a */
  goto L_1088438a;
L_10884381:;
  /* 10884381 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10884384 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10884387 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_1088438a:;
  /* 1088438a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1088438d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1088438f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10884391 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10884393 je 0x108843d2 */
  if (C.zf) goto L_108843d2;
  /* 10884395 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10884398 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1088439a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1088439d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1088439f je 0x108843d2 */
  if (C.zf) goto L_108843d2;
  /* 108843a1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 108843a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108843a6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 108843a8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 108843ab xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108843ad mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108843af cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108843b1 jl 0x108843d0 */
  if ((C.sf!=C.of)) goto L_108843d0;
  /* 108843b3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 108843b6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108843b8 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 108843ba mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 108843bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108843bf mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 108843c2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108843c4 jg 0x108843d0 */
  if ((!C.zf&&C.sf==C.of)) goto L_108843d0;
  /* 108843c6 mov eax, 2 */
  EAX = (0x2u);
  /* 108843cb jmp 0x10884534 */
  goto L_10884534;
L_108843d0:;
  /* 108843d0 jmp 0x10884381 */
  goto L_10884381;
L_108843d2:;
  /* 108843d2 mov eax, 1 */
  EAX = (0x1u);
  /* 108843d7 jmp 0x10884534 */
  goto L_10884534;
L_108843dc:;
  /* 108843dc push 0 */
  push32((uint32_t)(0x0u));
  /* 108843de push 0 */
  push32((uint32_t)(0x0u));
  /* 108843e0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108843e3 push ecx */
  push32((uint32_t)(ECX));
  /* 108843e4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108843e7 push edx */
  push32((uint32_t)(EDX));
  /* 108843e8 push 9 */
  push32((uint32_t)(0x9u));
  /* 108843ea mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 108843ed push eax */
  push32((uint32_t)(EAX));
  /* 108843ee call dword ptr [0x108a3310] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3310))), 0x108843f4u);
  /* 108843f4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 108843f7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108843fb jne 0x10884404 */
  if (!C.zf) goto L_10884404;
  /* 108843fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108843ff jmp 0x10884534 */
  goto L_10884534;
L_10884404:;
  /* 10884404 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1088440b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1088440e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10884410 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10884413 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10884415 call 0x10877740 */
  push32(0x1088441au); f_10877740();
  /* 1088441a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 1088441d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10884420 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 10884423 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10884426 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1088442d jmp 0x10884446 */
  goto L_10884446;
  /* 1088442f mov eax, 1 */
  EAX = (0x1u);
  /* 10884434 ret  */
  ESPCHK(0x10884150u, _esp0);
  ESP += 4; return;
  /* 10884435 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10884438 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1088443f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10884446:;
  /* 10884446 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1088444a jne 0x10884453 */
  if (!C.zf) goto L_10884453;
  /* 1088444c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1088444e jmp 0x10884534 */
  goto L_10884534;
L_10884453:;
  /* 10884453 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10884456 push edx */
  push32((uint32_t)(EDX));
  /* 10884457 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1088445a push eax */
  push32((uint32_t)(EAX));
  /* 1088445b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1088445e push ecx */
  push32((uint32_t)(ECX));
  /* 1088445f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10884462 push edx */
  push32((uint32_t)(EDX));
  /* 10884463 push 1 */
  push32((uint32_t)(0x1u));
  /* 10884465 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10884468 push eax */
  push32((uint32_t)(EAX));
  /* 10884469 call dword ptr [0x108a3310] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3310))), 0x1088446fu);
  /* 1088446f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10884471 jne 0x1088447a */
  if (!C.zf) goto L_1088447a;
  /* 10884473 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10884475 jmp 0x10884534 */
  goto L_10884534;
L_1088447a:;
  /* 1088447a push 0 */
  push32((uint32_t)(0x0u));
  /* 1088447c push 0 */
  push32((uint32_t)(0x0u));
  /* 1088447e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10884481 push ecx */
  push32((uint32_t)(ECX));
  /* 10884482 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10884485 push edx */
  push32((uint32_t)(EDX));
  /* 10884486 push 9 */
  push32((uint32_t)(0x9u));
  /* 10884488 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1088448b push eax */
  push32((uint32_t)(EAX));
  /* 1088448c call dword ptr [0x108a3310] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3310))), 0x10884492u);
  /* 10884492 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10884495 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10884499 jne 0x108844a2 */
  if (!C.zf) goto L_108844a2;
  /* 1088449b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1088449d jmp 0x10884534 */
  goto L_10884534;
L_108844a2:;
  /* 108844a2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 108844a9 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 108844ac shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 108844ae add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108844b1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 108844b3 call 0x10877740 */
  push32(0x108844b8u); f_10877740();
  /* 108844b8 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 108844bb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 108844be mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 108844c1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 108844c4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 108844cb jmp 0x108844e4 */
  goto L_108844e4;
  /* 108844cd mov eax, 1 */
  EAX = (0x1u);
  /* 108844d2 ret  */
  ESPCHK(0x10884150u, _esp0);
  ESP += 4; return;
  /* 108844d3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 108844d6 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 108844dd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_108844e4:;
  /* 108844e4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108844e8 jne 0x108844ee */
  if (!C.zf) goto L_108844ee;
  /* 108844ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108844ec jmp 0x10884534 */
  goto L_10884534;
L_108844ee:;
  /* 108844ee mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 108844f1 push edx */
  push32((uint32_t)(EDX));
  /* 108844f2 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 108844f5 push eax */
  push32((uint32_t)(EAX));
  /* 108844f6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 108844f9 push ecx */
  push32((uint32_t)(ECX));
  /* 108844fa mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 108844fd push edx */
  push32((uint32_t)(EDX));
  /* 108844fe push 1 */
  push32((uint32_t)(0x1u));
  /* 10884500 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10884503 push eax */
  push32((uint32_t)(EAX));
  /* 10884504 call dword ptr [0x108a3310] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3310))), 0x1088450au);
  /* 1088450a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1088450c jne 0x10884512 */
  if (!C.zf) goto L_10884512;
  /* 1088450e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10884510 jmp 0x10884534 */
  goto L_10884534;
L_10884512:;
  /* 10884512 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10884515 push ecx */
  push32((uint32_t)(ECX));
  /* 10884516 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10884519 push edx */
  push32((uint32_t)(EDX));
  /* 1088451a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1088451d push eax */
  push32((uint32_t)(EAX));
  /* 1088451e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10884521 push ecx */
  push32((uint32_t)(ECX));
  /* 10884522 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10884525 push edx */
  push32((uint32_t)(EDX));
  /* 10884526 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10884529 push eax */
  push32((uint32_t)(EAX));
  /* 1088452a call dword ptr [0x108a32c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a32c4))), 0x10884530u);
  /* 10884530 jmp 0x10884534 */
  goto L_10884534;
L_10884532:;
  /* 10884532 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10884534:;
  /* 10884534 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 10884537 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1088453a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10884541 pop edi */
  EDI = (pop32());
  /* 10884542 pop esi */
  ESI = (pop32());
  /* 10884543 pop ebx */
  EBX = (pop32());
  /* 10884544 mov esp, ebp */
  ESP = (EBP);
  /* 10884546 pop ebp */
  EBP = (pop32());
  /* 10884547 ret  */
  ESPCHK(0x10884150u, _esp0);
  ESP += 4; return;
}

/* FUN_10014550 @ 0x10884550 (80 bytes, 32 insns) */
void f_10884550(void) {
  FTRACE(0x10884550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10884550 push ebp */
  push32((uint32_t)(EBP));
  /* 10884551 mov ebp, esp */
  EBP = (ESP);
  /* 10884553 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10884556 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10884559 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1088455c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1088455f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10884562:;
  /* 10884562 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10884565 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10884568 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1088456b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1088456e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10884570 je 0x10884587 */
  if (C.zf) goto L_10884587;
  /* 10884572 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10884575 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10884578 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1088457a je 0x10884587 */
  if (C.zf) goto L_10884587;
  /* 1088457c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1088457f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10884582 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10884585 jmp 0x10884562 */
  goto L_10884562;
L_10884587:;
  /* 10884587 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1088458a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1088458d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1088458f jne 0x10884599 */
  if (!C.zf) goto L_10884599;
  /* 10884591 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10884594 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10884597 jmp 0x1088459c */
  goto L_1088459c;
L_10884599:;
  /* 10884599 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1088459c:;
  /* 1088459c mov esp, ebp */
  ESP = (EBP);
  /* 1088459e pop ebp */
  EBP = (pop32());
  /* 1088459f ret  */
  ESPCHK(0x10884550u, _esp0);
  ESP += 4; return;
}

/* FUN_100145a0 @ 0x108845a0 (736 bytes, 224 insns) */
void f_108845a0(void) {
  FTRACE(0x108845a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108845a0 push ebp */
  push32((uint32_t)(EBP));
  /* 108845a1 mov ebp, esp */
  EBP = (ESP);
  /* 108845a3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108845a6 push esi */
  push32((uint32_t)(ESI));
  /* 108845a7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108845ab je 0x108845cc */
  if (C.zf) goto L_108845cc;
  /* 108845ad push 0x3d */
  push32((uint32_t)(0x3du));
  /* 108845af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108845b2 push eax */
  push32((uint32_t)(EAX));
  /* 108845b3 call 0x108849f0 */
  push32(0x108845b8u); f_108849f0();
  /* 108845b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108845bb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 108845be cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108845c2 je 0x108845cc */
  if (C.zf) goto L_108845cc;
  /* 108845c4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108845c7 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108845ca jne 0x108845d4 */
  if (!C.zf) goto L_108845d4;
L_108845cc:;
  /* 108845cc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108845cf jmp 0x1088487b */
  goto L_1088487b;
L_108845d4:;
  /* 108845d4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 108845d7 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 108845db neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 108845dd sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108845df inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 108845e0 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 108845e3 mov ecx, dword ptr [0x108a0654] */
  ECX = (r32((uint32_t)(0x108a0654)));
  /* 108845e9 cmp ecx, dword ptr [0x108a0658] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x108a0658))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108845ef jne 0x10884605 */
  if (!C.zf) goto L_10884605;
  /* 108845f1 mov edx, dword ptr [0x108a0654] */
  EDX = (r32((uint32_t)(0x108a0654)));
  /* 108845f7 push edx */
  push32((uint32_t)(EDX));
  /* 108845f8 call 0x10884900 */
  push32(0x108845fdu); f_10884900();
  /* 108845fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10884600 mov dword ptr [0x108a0654], eax */
  w32((uint32_t)(0x108a0654), (EAX));
L_10884605:;
  /* 10884605 cmp dword ptr [0x108a0654], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a0654))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1088460c jne 0x108846c5 */
  if (!C.zf) goto L_108846c5;
  /* 10884612 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10884616 je 0x10884637 */
  if (C.zf) goto L_10884637;
  /* 10884618 cmp dword ptr [0x108a065c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a065c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1088461f je 0x10884637 */
  if (C.zf) goto L_10884637;
  /* 10884621 call 0x108840a0 */
  push32(0x10884626u); f_108840a0();
  /* 10884626 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10884628 je 0x10884632 */
  if (C.zf) goto L_10884632;
  /* 1088462a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1088462d jmp 0x1088487b */
  goto L_1088487b;
L_10884632:;
  /* 10884632 jmp 0x108846c5 */
  goto L_108846c5;
L_10884637:;
  /* 10884637 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1088463b je 0x10884644 */
  if (C.zf) goto L_10884644;
  /* 1088463d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1088463f jmp 0x1088487b */
  goto L_1088487b;
L_10884644:;
  /* 10884644 cmp dword ptr [0x108a0654], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a0654))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1088464b jne 0x10884684 */
  if (!C.zf) goto L_10884684;
  /* 1088464d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 10884652 push 0x1089ca80 */
  push32((uint32_t)(0x1089ca80u));
  /* 10884657 push 2 */
  push32((uint32_t)(0x2u));
  /* 10884659 push 4 */
  push32((uint32_t)(0x4u));
  /* 1088465b call 0x108745a0 */
  push32(0x10884660u); f_108745a0();
  /* 10884660 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10884663 mov dword ptr [0x108a0654], eax */
  w32((uint32_t)(0x108a0654), (EAX));
  /* 10884668 cmp dword ptr [0x108a0654], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a0654))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1088466f jne 0x10884679 */
  if (!C.zf) goto L_10884679;
  /* 10884671 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10884674 jmp 0x1088487b */
  goto L_1088487b;
L_10884679:;
  /* 10884679 mov eax, dword ptr [0x108a0654] */
  EAX = (r32((uint32_t)(0x108a0654)));
  /* 1088467e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10884684:;
  /* 10884684 cmp dword ptr [0x108a065c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a065c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1088468b jne 0x108846c5 */
  if (!C.zf) goto L_108846c5;
  /* 1088468d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 10884692 push 0x1089ca80 */
  push32((uint32_t)(0x1089ca80u));
  /* 10884697 push 2 */
  push32((uint32_t)(0x2u));
  /* 10884699 push 4 */
  push32((uint32_t)(0x4u));
  /* 1088469b call 0x108745a0 */
  push32(0x108846a0u); f_108745a0();
  /* 108846a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108846a3 mov dword ptr [0x108a065c], eax */
  w32((uint32_t)(0x108a065c), (EAX));
  /* 108846a8 cmp dword ptr [0x108a065c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a065c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108846af jne 0x108846b9 */
  if (!C.zf) goto L_108846b9;
  /* 108846b1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108846b4 jmp 0x1088487b */
  goto L_1088487b;
L_108846b9:;
  /* 108846b9 mov ecx, dword ptr [0x108a065c] */
  ECX = (r32((uint32_t)(0x108a065c)));
  /* 108846bf mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_108846c5:;
  /* 108846c5 mov edx, dword ptr [0x108a0654] */
  EDX = (r32((uint32_t)(0x108a0654)));
  /* 108846cb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 108846ce mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108846d1 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108846d4 push eax */
  push32((uint32_t)(EAX));
  /* 108846d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108846d8 push ecx */
  push32((uint32_t)(ECX));
  /* 108846d9 call 0x10884880 */
  push32(0x108846deu); f_10884880();
  /* 108846de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108846e1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108846e4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108846e8 jl 0x10884781 */
  if ((C.sf!=C.of)) goto L_10884781;
  /* 108846ee mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108846f1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108846f4 je 0x10884781 */
  if (C.zf) goto L_10884781;
  /* 108846fa cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108846fe je 0x10884773 */
  if (C.zf) goto L_10884773;
  /* 10884700 push 2 */
  push32((uint32_t)(0x2u));
  /* 10884702 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10884705 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10884708 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1088470b push edx */
  push32((uint32_t)(EDX));
  /* 1088470c call 0x10875030 */
  push32(0x10884711u); f_10875030();
  /* 10884711 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10884714 jmp 0x1088471f */
  goto L_1088471f;
L_10884716:;
  /* 10884716 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10884719 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1088471c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1088471f:;
  /* 1088471f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10884722 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10884725 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10884729 je 0x10884740 */
  if (C.zf) goto L_10884740;
  /* 1088472b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1088472e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10884731 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10884734 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10884737 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 1088473b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 1088473e jmp 0x10884716 */
  goto L_10884716;
L_10884740:;
  /* 10884740 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 10884745 push 0x1089ca80 */
  push32((uint32_t)(0x1089ca80u));
  /* 1088474a push 2 */
  push32((uint32_t)(0x2u));
  /* 1088474c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1088474f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10884752 push eax */
  push32((uint32_t)(EAX));
  /* 10884753 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10884756 push ecx */
  push32((uint32_t)(ECX));
  /* 10884757 call 0x10874a30 */
  push32(0x1088475cu); f_10874a30();
  /* 1088475c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1088475f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10884762 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10884766 je 0x10884771 */
  if (C.zf) goto L_10884771;
  /* 10884768 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1088476b mov dword ptr [0x108a0654], edx */
  w32((uint32_t)(0x108a0654), (EDX));
L_10884771:;
  /* 10884771 jmp 0x1088477f */
  goto L_1088477f;
L_10884773:;
  /* 10884773 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10884776 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10884779 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1088477c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_1088477f:;
  /* 1088477f jmp 0x108847f4 */
  goto L_108847f4;
L_10884781:;
  /* 10884781 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10884785 jne 0x108847ed */
  if (!C.zf) goto L_108847ed;
  /* 10884787 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1088478b jge 0x10884795 */
  if ((C.sf==C.of)) goto L_10884795;
  /* 1088478d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10884790 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10884792 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10884795:;
  /* 10884795 push 0xce */
  push32((uint32_t)(0xceu));
  /* 1088479a push 0x1089ca80 */
  push32((uint32_t)(0x1089ca80u));
  /* 1088479f push 2 */
  push32((uint32_t)(0x2u));
  /* 108847a1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108847a4 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 108847ab push edx */
  push32((uint32_t)(EDX));
  /* 108847ac mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108847af push eax */
  push32((uint32_t)(EAX));
  /* 108847b0 call 0x10874a30 */
  push32(0x108847b5u); f_10874a30();
  /* 108847b5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108847b8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108847bb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108847bf jne 0x108847c9 */
  if (!C.zf) goto L_108847c9;
  /* 108847c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108847c4 jmp 0x1088487b */
  goto L_1088487b;
L_108847c9:;
  /* 108847c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108847cc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108847cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108847d2 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 108847d5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108847d8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108847db mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 108847e3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108847e6 mov dword ptr [0x108a0654], eax */
  w32((uint32_t)(0x108a0654), (EAX));
  /* 108847eb jmp 0x108847f4 */
  goto L_108847f4;
L_108847ed:;
  /* 108847ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108847ef jmp 0x1088487b */
  goto L_1088487b;
L_108847f4:;
  /* 108847f4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108847f8 je 0x10884879 */
  if (C.zf) goto L_10884879;
  /* 108847fa push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 108847ff push 0x1089ca80 */
  push32((uint32_t)(0x1089ca80u));
  /* 10884804 push 2 */
  push32((uint32_t)(0x2u));
  /* 10884806 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10884809 push ecx */
  push32((uint32_t)(ECX));
  /* 1088480a call 0x108773d0 */
  push32(0x1088480fu); f_108773d0();
  /* 1088480f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10884812 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10884815 push eax */
  push32((uint32_t)(EAX));
  /* 10884816 call 0x108745a0 */
  push32(0x1088481bu); f_108745a0();
  /* 1088481b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1088481e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10884821 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10884825 je 0x10884879 */
  if (C.zf) goto L_10884879;
  /* 10884827 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1088482a push edx */
  push32((uint32_t)(EDX));
  /* 1088482b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1088482e push eax */
  push32((uint32_t)(EAX));
  /* 1088482f call 0x10877550 */
  push32(0x10884834u); f_10877550();
  /* 10884834 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10884837 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1088483a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1088483d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10884840 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10884842 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10884845 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10884848 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1088484b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1088484e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10884851 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10884854 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10884857 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10884859 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1088485b not edx */
  EDX = (~(EDX));
  /* 1088485d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10884860 push edx */
  push32((uint32_t)(EDX));
  /* 10884861 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10884864 push eax */
  push32((uint32_t)(EAX));
  /* 10884865 call dword ptr [0x108a32c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a32c0))), 0x1088486bu);
  /* 1088486b push 2 */
  push32((uint32_t)(0x2u));
  /* 1088486d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10884870 push ecx */
  push32((uint32_t)(ECX));
  /* 10884871 call 0x10875030 */
  push32(0x10884876u); f_10875030();
  /* 10884876 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10884879:;
  /* 10884879 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1088487b:;
  /* 1088487b pop esi */
  ESI = (pop32());
  /* 1088487c mov esp, ebp */
  ESP = (EBP);
  /* 1088487e pop ebp */
  EBP = (pop32());
  /* 1088487f ret  */
  ESPCHK(0x108845a0u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x10884880 (124 bytes, 47 insns) */
void f_10884880(void) {
  FTRACE(0x10884880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10884880 push ebp */
  push32((uint32_t)(EBP));
  /* 10884881 mov ebp, esp */
  EBP = (ESP);
  /* 10884883 push ecx */
  push32((uint32_t)(ECX));
  /* 10884884 mov eax, dword ptr [0x108a0654] */
  EAX = (r32((uint32_t)(0x108a0654)));
  /* 10884889 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1088488c jmp 0x10884897 */
  goto L_10884897;
L_1088488e:;
  /* 1088488e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10884891 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10884894 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10884897:;
  /* 10884897 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1088489a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1088489d je 0x108848ea */
  if (C.zf) goto L_108848ea;
  /* 1088489f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108848a2 push eax */
  push32((uint32_t)(EAX));
  /* 108848a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108848a6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108848a8 push edx */
  push32((uint32_t)(EDX));
  /* 108848a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108848ac push eax */
  push32((uint32_t)(EAX));
  /* 108848ad call 0x10884050 */
  push32(0x108848b2u); f_10884050();
  /* 108848b2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108848b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108848b7 jne 0x108848e8 */
  if (!C.zf) goto L_108848e8;
  /* 108848b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108848bc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108848be mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108848c1 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 108848c5 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108848c8 je 0x108848da */
  if (C.zf) goto L_108848da;
  /* 108848ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108848cd mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108848cf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108848d2 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 108848d6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108848d8 jne 0x108848e8 */
  if (!C.zf) goto L_108848e8;
L_108848da:;
  /* 108848da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108848dd sub eax, dword ptr [0x108a0654] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x108a0654))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108848e3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 108848e6 jmp 0x108848f8 */
  goto L_108848f8;
L_108848e8:;
  /* 108848e8 jmp 0x1088488e */
  goto L_1088488e;
L_108848ea:;
  /* 108848ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108848ed sub eax, dword ptr [0x108a0654] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x108a0654))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108848f3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 108848f6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_108848f8:;
  /* 108848f8 mov esp, ebp */
  ESP = (EBP);
  /* 108848fa pop ebp */
  EBP = (pop32());
  /* 108848fb ret  */
  ESPCHK(0x10884880u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x10884900 (238 bytes, 80 insns) */
void f_10884900(void) {
  FTRACE(0x10884900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10884900 push ebp */
  push32((uint32_t)(EBP));
  /* 10884901 mov ebp, esp */
  EBP = (ESP);
  /* 10884903 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10884906 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1088490d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10884910 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10884913 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10884917 jne 0x10884920 */
  if (!C.zf) goto L_10884920;
  /* 10884919 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1088491b jmp 0x108849ea */
  goto L_108849ea;
L_10884920:;
  /* 10884920 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10884923 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10884925 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10884928 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1088492b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1088492e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10884930 je 0x1088493d */
  if (C.zf) goto L_1088493d;
  /* 10884932 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10884935 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10884938 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1088493b jmp 0x10884920 */
  goto L_10884920;
L_1088493d:;
  /* 1088493d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 10884942 push 0x1089ca80 */
  push32((uint32_t)(0x1089ca80u));
  /* 10884947 push 2 */
  push32((uint32_t)(0x2u));
  /* 10884949 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1088494c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 10884953 push eax */
  push32((uint32_t)(EAX));
  /* 10884954 call 0x108745a0 */
  push32(0x10884959u); f_108745a0();
  /* 10884959 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1088495c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1088495f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10884962 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10884965 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10884969 jne 0x10884975 */
  if (!C.zf) goto L_10884975;
  /* 1088496b push 9 */
  push32((uint32_t)(0x9u));
  /* 1088496d call 0x10873510 */
  push32(0x10884972u); f_10873510();
  /* 10884972 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10884975:;
  /* 10884975 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10884978 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1088497b:;
  /* 1088497b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1088497e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10884981 je 0x108849de */
  if (C.zf) goto L_108849de;
  /* 10884983 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 10884988 push 0x1089ca80 */
  push32((uint32_t)(0x1089ca80u));
  /* 1088498d push 2 */
  push32((uint32_t)(0x2u));
  /* 1088498f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10884992 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10884994 push edx */
  push32((uint32_t)(EDX));
  /* 10884995 call 0x108773d0 */
  push32(0x1088499au); f_108773d0();
  /* 1088499a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1088499d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108849a0 push eax */
  push32((uint32_t)(EAX));
  /* 108849a1 call 0x108745a0 */
  push32(0x108849a6u); f_108745a0();
  /* 108849a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108849a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108849ac mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 108849ae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108849b1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108849b4 je 0x108849ca */
  if (C.zf) goto L_108849ca;
  /* 108849b6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108849b9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108849bb push ecx */
  push32((uint32_t)(ECX));
  /* 108849bc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108849bf mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108849c1 push eax */
  push32((uint32_t)(EAX));
  /* 108849c2 call 0x10877550 */
  push32(0x108849c7u); f_10877550();
  /* 108849c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108849ca:;
  /* 108849ca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108849cd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108849d0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108849d3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108849d6 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108849d9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 108849dc jmp 0x1088497b */
  goto L_1088497b;
L_108849de:;
  /* 108849de mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108849e1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 108849e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_108849ea:;
  /* 108849ea mov esp, ebp */
  ESP = (EBP);
  /* 108849ec pop ebp */
  EBP = (pop32());
  /* 108849ed ret  */
  ESPCHK(0x10884900u, _esp0);
  ESP += 4; return;
}

/* FUN_100149f0 @ 0x108849f0 (237 bytes, 81 insns) */
void f_108849f0(void) {
  FTRACE(0x108849f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108849f0 push ebp */
  push32((uint32_t)(EBP));
  /* 108849f1 mov ebp, esp */
  EBP = (ESP);
  /* 108849f3 push ecx */
  push32((uint32_t)(ECX));
  /* 108849f4 cmp dword ptr [0x108a1dac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a1dac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108849fb jne 0x10884a12 */
  if (!C.zf) goto L_10884a12;
  /* 108849fd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10884a00 push eax */
  push32((uint32_t)(EAX));
  /* 10884a01 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10884a04 push ecx */
  push32((uint32_t)(ECX));
  /* 10884a05 call 0x10884af0 */
  push32(0x10884a0au); f_10884af0();
  /* 10884a0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10884a0d jmp 0x10884ad9 */
  goto L_10884ad9;
L_10884a12:;
  /* 10884a12 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10884a14 call 0x10877fa0 */
  push32(0x10884a19u); f_10877fa0();
  /* 10884a19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10884a1c jmp 0x10884a27 */
  goto L_10884a27;
L_10884a1e:;
  /* 10884a1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10884a21 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10884a24 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10884a27:;
  /* 10884a27 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10884a2a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 10884a2e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 10884a32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10884a35 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10884a3b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10884a3d je 0x10884abb */
  if (C.zf) goto L_10884abb;
  /* 10884a3f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10884a42 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10884a47 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10884a49 mov cl, byte ptr [eax + 0x108a1ec1] */
  CL = (r8((uint32_t)(EAX + 0x108a1ec1)));
  /* 10884a4f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10884a52 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10884a54 je 0x10884aa6 */
  if (C.zf) goto L_10884aa6;
  /* 10884a56 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10884a59 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10884a5c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10884a5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10884a62 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10884a64 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10884a66 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10884a68 jne 0x10884a78 */
  if (!C.zf) goto L_10884a78;
  /* 10884a6a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10884a6c call 0x10878040 */
  push32(0x10884a71u); f_10878040();
  /* 10884a71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10884a74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10884a76 jmp 0x10884ad9 */
  goto L_10884ad9;
L_10884a78:;
  /* 10884a78 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10884a7b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10884a81 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10884a84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10884a87 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10884a89 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10884a8b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10884a8d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10884a90 jne 0x10884aa4 */
  if (!C.zf) goto L_10884aa4;
  /* 10884a92 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10884a94 call 0x10878040 */
  push32(0x10884a99u); f_10878040();
  /* 10884a99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10884a9c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10884a9f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10884aa2 jmp 0x10884ad9 */
  goto L_10884ad9;
L_10884aa4:;
  /* 10884aa4 jmp 0x10884ab6 */
  goto L_10884ab6;
L_10884aa6:;
  /* 10884aa6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10884aa9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10884aaf cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10884ab2 jne 0x10884ab6 */
  if (!C.zf) goto L_10884ab6;
  /* 10884ab4 jmp 0x10884abb */
  goto L_10884abb;
L_10884ab6:;
  /* 10884ab6 jmp 0x10884a1e */
  goto L_10884a1e;
L_10884abb:;
  /* 10884abb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10884abd call 0x10878040 */
  push32(0x10884ac2u); f_10878040();
  /* 10884ac2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10884ac5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10884ac8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10884acd cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10884ad0 jne 0x10884ad7 */
  if (!C.zf) goto L_10884ad7;
  /* 10884ad2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10884ad5 jmp 0x10884ad9 */
  goto L_10884ad9;
L_10884ad7:;
  /* 10884ad7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10884ad9:;
  /* 10884ad9 mov esp, ebp */
  ESP = (EBP);
  /* 10884adb pop ebp */
  EBP = (pop32());
  /* 10884adc ret  */
  ESPCHK(0x108849f0u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x10884af0 (193 bytes, 87 insns) */
void f_10884af0(void) {
  FTRACE(0x10884af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10884af0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10884af2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10884af6 push ebx */
  push32((uint32_t)(EBX));
  /* 10884af7 mov ebx, eax */
  EBX = (EAX);
  /* 10884af9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10884afc mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10884b00 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10884b06 je 0x10884b1b */
  if (C.zf) goto L_10884b1b;
L_10884b08:;
  /* 10884b08 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 10884b0a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10884b0b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10884b0d je 0x10884ae0 */
  if (C.zf) { jmp_ind(0x10884ae0u); return; }
  /* 10884b0f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10884b11 je 0x10884b64 */
  if (C.zf) goto L_10884b64;
  /* 10884b13 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10884b19 jne 0x10884b08 */
  if (!C.zf) goto L_10884b08;
L_10884b1b:;
  /* 10884b1b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 10884b1d push edi */
  push32((uint32_t)(EDI));
  /* 10884b1e mov eax, ebx */
  EAX = (EBX);
  /* 10884b20 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 10884b23 push esi */
  push32((uint32_t)(ESI));
  /* 10884b24 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_10884b26:;
  /* 10884b26 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10884b28 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 10884b2d mov eax, ecx */
  EAX = (ECX);
  /* 10884b2f mov esi, edi */
  ESI = (EDI);
  /* 10884b31 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 10884b33 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10884b35 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10884b37 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10884b3a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10884b3d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10884b3f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10884b41 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10884b44 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 10884b4a jne 0x10884b68 */
  if (!C.zf) goto L_10884b68;
  /* 10884b4c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10884b51 je 0x10884b26 */
  if (C.zf) goto L_10884b26;
  /* 10884b53 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10884b58 jne 0x10884b62 */
  if (!C.zf) goto L_10884b62;
  /* 10884b5a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 10884b60 jne 0x10884b26 */
  if (!C.zf) goto L_10884b26;
L_10884b62:;
  /* 10884b62 pop esi */
  ESI = (pop32());
  /* 10884b63 pop edi */
  EDI = (pop32());
L_10884b64:;
  /* 10884b64 pop ebx */
  EBX = (pop32());
  /* 10884b65 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10884b67 ret  */
  ESPCHK(0x10884af0u, _esp0);
  ESP += 4; return;
L_10884b68:;
  /* 10884b68 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10884b6b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10884b6d je 0x10884ba5 */
  if (C.zf) goto L_10884ba5;
  /* 10884b6f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10884b71 je 0x10884b62 */
  if (C.zf) goto L_10884b62;
  /* 10884b73 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10884b75 je 0x10884b9e */
  if (C.zf) goto L_10884b9e;
  /* 10884b77 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10884b79 je 0x10884b62 */
  if (C.zf) goto L_10884b62;
  /* 10884b7b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10884b7e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10884b80 je 0x10884b97 */
  if (C.zf) goto L_10884b97;
  /* 10884b82 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10884b84 je 0x10884b62 */
  if (C.zf) goto L_10884b62;
  /* 10884b86 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10884b88 je 0x10884b90 */
  if (C.zf) goto L_10884b90;
  /* 10884b8a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10884b8c je 0x10884b62 */
  if (C.zf) goto L_10884b62;
  /* 10884b8e jmp 0x10884b26 */
  goto L_10884b26;
L_10884b90:;
  /* 10884b90 pop esi */
  ESI = (pop32());
  /* 10884b91 pop edi */
  EDI = (pop32());
  /* 10884b92 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 10884b95 pop ebx */
  EBX = (pop32());
  /* 10884b96 ret  */
  ESPCHK(0x10884af0u, _esp0);
  ESP += 4; return;
L_10884b97:;
  /* 10884b97 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 10884b9a pop esi */
  ESI = (pop32());
  /* 10884b9b pop edi */
  EDI = (pop32());
  /* 10884b9c pop ebx */
  EBX = (pop32());
  /* 10884b9d ret  */
  ESPCHK(0x10884af0u, _esp0);
  ESP += 4; return;
L_10884b9e:;
  /* 10884b9e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 10884ba1 pop esi */
  ESI = (pop32());
  /* 10884ba2 pop edi */
  EDI = (pop32());
  /* 10884ba3 pop ebx */
  EBX = (pop32());
  /* 10884ba4 ret  */
  ESPCHK(0x10884af0u, _esp0);
  ESP += 4; return;
L_10884ba5:;
  /* 10884ba5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 10884ba8 pop esi */
  ESI = (pop32());
  /* 10884ba9 pop edi */
  EDI = (pop32());
  /* 10884baa pop ebx */
  EBX = (pop32());
  /* 10884bab ret  */
  ESPCHK(0x10884af0u, _esp0);
  ESP += 4; return;
  /* 10884bac jmp dword ptr [0x108a3364] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x108a3364)))); return;
}

/* RtlUnwind @ 0x10884cfc (6 bytes, 1 insns) */
void f_10884cfc(void) {
  FTRACE(0x10884cfcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10884cfc jmp dword ptr [0x108a32f8] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x108a32f8)))); return;
}

