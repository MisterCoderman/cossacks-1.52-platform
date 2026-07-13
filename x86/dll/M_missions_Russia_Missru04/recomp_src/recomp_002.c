#include "recomp.h"

/* FUN_100114d0 @ 0x10a514d0 (878 bytes, 273 insns) */
void f_10a514d0(void) {
  FTRACE(0x10a514d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a514d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a514d1 mov ebp, esp */
  EBP = (ESP);
  /* 10a514d3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a514d6 push esi */
  push32((uint32_t)(ESI));
  /* 10a514d7 mov eax, dword ptr [0x10a6fc98] */
  EAX = (r32((uint32_t)(0x10a6fc98)));
  /* 10a514dc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a514df mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10a514e6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10a514ed jmp 0x10a514f8 */
  goto L_10a514f8;
L_10a514ef:;
  /* 10a514ef mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a514f2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a514f5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10a514f8:;
  /* 10a514f8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a514fc jae 0x10a51531 */
  if (!C.cf) goto L_10a51531;
  /* 10a514fe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a51501 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a51504 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10a51507 push ecx */
  push32((uint32_t)(ECX));
  /* 10a51508 call 0x10a47350 */
  push32(0x10a5150du); f_10a47350();
  /* 10a5150d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51510 mov esi, eax */
  ESI = (EAX);
  /* 10a51512 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a51515 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a51518 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 10a5151c push ecx */
  push32((uint32_t)(ECX));
  /* 10a5151d call 0x10a47350 */
  push32(0x10a51522u); f_10a47350();
  /* 10a51522 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51525 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51528 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10a5152c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10a5152f jmp 0x10a514ef */
  goto L_10a514ef;
L_10a51531:;
  /* 10a51531 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10a51538 jmp 0x10a51543 */
  goto L_10a51543;
L_10a5153a:;
  /* 10a5153a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a5153d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51540 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10a51543:;
  /* 10a51543 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a51547 jae 0x10a5157d */
  if (!C.cf) goto L_10a5157d;
  /* 10a51549 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a5154c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a5154f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10a51553 push eax */
  push32((uint32_t)(EAX));
  /* 10a51554 call 0x10a47350 */
  push32(0x10a51559u); f_10a47350();
  /* 10a51559 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5155c mov esi, eax */
  ESI = (EAX);
  /* 10a5155e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a51561 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a51564 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10a51568 push eax */
  push32((uint32_t)(EAX));
  /* 10a51569 call 0x10a47350 */
  push32(0x10a5156eu); f_10a47350();
  /* 10a5156e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51571 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51574 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10a51578 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a5157b jmp 0x10a5153a */
  goto L_10a5153a;
L_10a5157d:;
  /* 10a5157d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a51580 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10a51586 push eax */
  push32((uint32_t)(EAX));
  /* 10a51587 call 0x10a47350 */
  push32(0x10a5158cu); f_10a47350();
  /* 10a5158c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5158f mov esi, eax */
  ESI = (EAX);
  /* 10a51591 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a51594 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 10a5159a push edx */
  push32((uint32_t)(EDX));
  /* 10a5159b call 0x10a47350 */
  push32(0x10a515a0u); f_10a47350();
  /* 10a515a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a515a3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a515a6 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10a515aa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a515ad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a515b0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10a515b6 push edx */
  push32((uint32_t)(EDX));
  /* 10a515b7 call 0x10a47350 */
  push32(0x10a515bcu); f_10a47350();
  /* 10a515bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a515bf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a515c2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10a515c6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10a515c9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a515cc mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 10a515d2 push ecx */
  push32((uint32_t)(ECX));
  /* 10a515d3 call 0x10a47350 */
  push32(0x10a515d8u); f_10a47350();
  /* 10a515d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a515db mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a515de lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10a515e2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a515e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a515e8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 10a515ee push edx */
  push32((uint32_t)(EDX));
  /* 10a515ef call 0x10a47350 */
  push32(0x10a515f4u); f_10a47350();
  /* 10a515f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a515f7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a515fa lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10a515fe mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10a51601 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a51604 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51609 push eax */
  push32((uint32_t)(EAX));
  /* 10a5160a call 0x10a44500 */
  push32(0x10a5160fu); f_10a44500();
  /* 10a5160f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51612 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a51615 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a51619 je 0x10a51836 */
  if (C.zf) goto L_10a51836;
  /* 10a5161f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a51622 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10a51625 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a51628 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5162e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10a51631 push 0xac */
  push32((uint32_t)(0xacu));
  /* 10a51636 mov eax, dword ptr [0x10a6fc98] */
  EAX = (r32((uint32_t)(0x10a6fc98)));
  /* 10a5163b push eax */
  push32((uint32_t)(EAX));
  /* 10a5163c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a5163f push ecx */
  push32((uint32_t)(ECX));
  /* 10a51640 call 0x10a4ae00 */
  push32(0x10a51645u); f_10a4ae00();
  /* 10a51645 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51648 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10a5164f jmp 0x10a5165a */
  goto L_10a5165a;
L_10a51651:;
  /* 10a51651 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a51654 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51657 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10a5165a:;
  /* 10a5165a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5165e jae 0x10a516ce */
  if (!C.cf) goto L_10a516ce;
  /* 10a51660 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a51663 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a51666 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a51669 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10a5166c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a5166f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a51672 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10a51675 push edx */
  push32((uint32_t)(EDX));
  /* 10a51676 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a51679 push eax */
  push32((uint32_t)(EAX));
  /* 10a5167a call 0x10a474d0 */
  push32(0x10a5167fu); f_10a474d0();
  /* 10a5167f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51682 push eax */
  push32((uint32_t)(EAX));
  /* 10a51683 call 0x10a47350 */
  push32(0x10a51688u); f_10a47350();
  /* 10a51688 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5168b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a5168e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10a51692 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10a51695 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a51698 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a5169b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a5169e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 10a516a2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a516a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a516a8 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 10a516ac push edx */
  push32((uint32_t)(EDX));
  /* 10a516ad mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a516b0 push eax */
  push32((uint32_t)(EAX));
  /* 10a516b1 call 0x10a474d0 */
  push32(0x10a516b6u); f_10a474d0();
  /* 10a516b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a516b9 push eax */
  push32((uint32_t)(EAX));
  /* 10a516ba call 0x10a47350 */
  push32(0x10a516bfu); f_10a47350();
  /* 10a516bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a516c2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a516c5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10a516c9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10a516cc jmp 0x10a51651 */
  goto L_10a51651;
L_10a516ce:;
  /* 10a516ce mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10a516d5 jmp 0x10a516e0 */
  goto L_10a516e0;
L_10a516d7:;
  /* 10a516d7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a516da add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a516dd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10a516e0:;
  /* 10a516e0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a516e4 jae 0x10a51756 */
  if (!C.cf) goto L_10a51756;
  /* 10a516e6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a516e9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a516ec mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a516ef mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 10a516f3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a516f6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a516f9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10a516fd push eax */
  push32((uint32_t)(EAX));
  /* 10a516fe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a51701 push ecx */
  push32((uint32_t)(ECX));
  /* 10a51702 call 0x10a474d0 */
  push32(0x10a51707u); f_10a474d0();
  /* 10a51707 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5170a push eax */
  push32((uint32_t)(EAX));
  /* 10a5170b call 0x10a47350 */
  push32(0x10a51710u); f_10a47350();
  /* 10a51710 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51713 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a51716 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10a5171a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10a5171d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a51720 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a51723 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a51726 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 10a5172a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a5172d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a51730 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10a51734 push eax */
  push32((uint32_t)(EAX));
  /* 10a51735 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a51738 push ecx */
  push32((uint32_t)(ECX));
  /* 10a51739 call 0x10a474d0 */
  push32(0x10a5173eu); f_10a474d0();
  /* 10a5173e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51741 push eax */
  push32((uint32_t)(EAX));
  /* 10a51742 call 0x10a47350 */
  push32(0x10a51747u); f_10a47350();
  /* 10a51747 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5174a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a5174d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10a51751 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10a51754 jmp 0x10a516d7 */
  goto L_10a516d7;
L_10a51756:;
  /* 10a51756 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a51759 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a5175c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 10a51762 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a51765 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 10a5176b push ecx */
  push32((uint32_t)(ECX));
  /* 10a5176c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a5176f push edx */
  push32((uint32_t)(EDX));
  /* 10a51770 call 0x10a474d0 */
  push32(0x10a51775u); f_10a474d0();
  /* 10a51775 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51778 push eax */
  push32((uint32_t)(EAX));
  /* 10a51779 call 0x10a47350 */
  push32(0x10a5177eu); f_10a47350();
  /* 10a5177e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51781 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a51784 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10a51788 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10a5178b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a5178e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a51791 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 10a51797 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a5179a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10a517a0 push eax */
  push32((uint32_t)(EAX));
  /* 10a517a1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a517a4 push ecx */
  push32((uint32_t)(ECX));
  /* 10a517a5 call 0x10a474d0 */
  push32(0x10a517aau); f_10a474d0();
  /* 10a517aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a517ad push eax */
  push32((uint32_t)(EAX));
  /* 10a517ae call 0x10a47350 */
  push32(0x10a517b3u); f_10a47350();
  /* 10a517b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a517b6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a517b9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10a517bd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10a517c0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a517c3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a517c6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 10a517cc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a517cf mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 10a517d5 push ecx */
  push32((uint32_t)(ECX));
  /* 10a517d6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a517d9 push edx */
  push32((uint32_t)(EDX));
  /* 10a517da call 0x10a474d0 */
  push32(0x10a517dfu); f_10a474d0();
  /* 10a517df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a517e2 push eax */
  push32((uint32_t)(EAX));
  /* 10a517e3 call 0x10a47350 */
  push32(0x10a517e8u); f_10a47350();
  /* 10a517e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a517eb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a517ee lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10a517f2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10a517f5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a517f8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a517fb mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 10a51801 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a51804 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 10a5180a push eax */
  push32((uint32_t)(EAX));
  /* 10a5180b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a5180e push ecx */
  push32((uint32_t)(ECX));
  /* 10a5180f call 0x10a474d0 */
  push32(0x10a51814u); f_10a474d0();
  /* 10a51814 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51817 push eax */
  push32((uint32_t)(EAX));
  /* 10a51818 call 0x10a47350 */
  push32(0x10a5181du); f_10a47350();
  /* 10a5181d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51820 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a51823 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10a51827 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10a5182a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a5182d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a51830 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_10a51836:;
  /* 10a51836 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a51839 pop esi */
  ESI = (pop32());
  /* 10a5183a mov esp, ebp */
  ESP = (EBP);
  /* 10a5183c pop ebp */
  EBP = (pop32());
  /* 10a5183d ret  */
  ESPCHK(0x10a514d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011840 @ 0x10a51840 (31 bytes, 15 insns) */
void f_10a51840(void) {
  FTRACE(0x10a51840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a51840 push ebp */
  push32((uint32_t)(EBP));
  /* 10a51841 mov ebp, esp */
  EBP = (ESP);
  /* 10a51843 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a51845 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a51848 push eax */
  push32((uint32_t)(EAX));
  /* 10a51849 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a5184c push ecx */
  push32((uint32_t)(ECX));
  /* 10a5184d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a51850 push edx */
  push32((uint32_t)(EDX));
  /* 10a51851 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a51854 push eax */
  push32((uint32_t)(EAX));
  /* 10a51855 call 0x10a51860 */
  push32(0x10a5185au); f_10a51860();
  /* 10a5185a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5185d pop ebp */
  EBP = (pop32());
  /* 10a5185e ret  */
  ESPCHK(0x10a51840u, _esp0);
  ESP += 4; return;
}

/* FUN_10011860 @ 0x10a51860 (393 bytes, 123 insns) */
void f_10a51860(void) {
  FTRACE(0x10a51860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a51860 push ebp */
  push32((uint32_t)(EBP));
  /* 10a51861 mov ebp, esp */
  EBP = (ESP);
  /* 10a51863 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a51866 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5186a jne 0x10a51876 */
  if (!C.zf) goto L_10a51876;
  /* 10a5186c mov eax, dword ptr [0x10a6fc98] */
  EAX = (r32((uint32_t)(0x10a6fc98)));
  /* 10a51871 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10a51874 jmp 0x10a5187c */
  goto L_10a5187c;
L_10a51876:;
  /* 10a51876 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a51879 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10a5187c:;
  /* 10a5187c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a5187f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a51882 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a51885 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a51888 push 0x10a7098c */
  push32((uint32_t)(0x10a7098cu));
  /* 10a5188d call dword ptr [0x10a732fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732fc))), 0x10a51893u);
  /* 10a51893 cmp dword ptr [0x10a7097c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a7097c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5189a je 0x10a518ba */
  if (C.zf) goto L_10a518ba;
  /* 10a5189c push 0x10a7098c */
  push32((uint32_t)(0x10a7098cu));
  /* 10a518a1 call dword ptr [0x10a732ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732ec))), 0x10a518a7u);
  /* 10a518a7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10a518a9 call 0x10a47f20 */
  push32(0x10a518aeu); f_10a47f20();
  /* 10a518ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a518b1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10a518b8 jmp 0x10a518c1 */
  goto L_10a518c1;
L_10a518ba:;
  /* 10a518ba mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10a518c1:;
  /* 10a518c1 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a518c5 jbe 0x10a519b2 */
  if ((C.cf||C.zf)) goto L_10a519b2;
  /* 10a518cb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a518ce mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a518d0 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 10a518d3 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a518d7 je 0x10a518e1 */
  if (C.zf) goto L_10a518e1;
  /* 10a518d9 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a518dd je 0x10a518e6 */
  if (C.zf) goto L_10a518e6;
  /* 10a518df jmp 0x10a51940 */
  goto L_10a51940;
L_10a518e1:;
  /* 10a518e1 jmp 0x10a519b2 */
  goto L_10a519b2;
L_10a518e6:;
  /* 10a518e6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a518e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a518ec mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10a518ef mov dword ptr [0x10a70968], 0 */
  w32((uint32_t)(0x10a70968), (0x0u));
  /* 10a518f9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a518fc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a518ff cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a51902 jne 0x10a51917 */
  if (!C.zf) goto L_10a51917;
  /* 10a51904 mov dword ptr [0x10a70968], 1 */
  w32((uint32_t)(0x10a70968), (0x1u));
  /* 10a5190e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a51911 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51914 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10a51917:;
  /* 10a51917 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a5191a push ecx */
  push32((uint32_t)(ECX));
  /* 10a5191b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10a5191e push edx */
  push32((uint32_t)(EDX));
  /* 10a5191f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10a51922 push eax */
  push32((uint32_t)(EAX));
  /* 10a51923 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a51926 push ecx */
  push32((uint32_t)(ECX));
  /* 10a51927 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a5192a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a5192c push eax */
  push32((uint32_t)(EAX));
  /* 10a5192d call 0x10a519f0 */
  push32(0x10a51932u); f_10a519f0();
  /* 10a51932 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51935 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a51938 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5193b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10a5193e jmp 0x10a519ad */
  goto L_10a519ad;
L_10a51940:;
  /* 10a51940 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a51943 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a51945 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a51947 mov ecx, dword ptr [0x10a6ec98] */
  ECX = (r32((uint32_t)(0x10a6ec98)));
  /* 10a5194d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a5194f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10a51953 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10a51959 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a5195b je 0x10a51988 */
  if (C.zf) goto L_10a51988;
  /* 10a5195d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a51961 jbe 0x10a51988 */
  if ((C.cf||C.zf)) goto L_10a51988;
  /* 10a51963 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a51966 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a51969 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a5196b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10a5196d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a51970 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51973 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a51976 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a51979 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5197c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10a5197f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a51982 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a51985 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10a51988:;
  /* 10a51988 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a5198b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a5198e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a51990 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10a51992 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a51995 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51998 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a5199b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a5199e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a519a1 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10a519a4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a519a7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a519aa mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10a519ad:;
  /* 10a519ad jmp 0x10a518c1 */
  goto L_10a518c1;
L_10a519b2:;
  /* 10a519b2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a519b6 je 0x10a519c4 */
  if (C.zf) goto L_10a519c4;
  /* 10a519b8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10a519ba call 0x10a47fc0 */
  push32(0x10a519bfu); f_10a47fc0();
  /* 10a519bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a519c2 jmp 0x10a519cf */
  goto L_10a519cf;
L_10a519c4:;
  /* 10a519c4 push 0x10a7098c */
  push32((uint32_t)(0x10a7098cu));
  /* 10a519c9 call dword ptr [0x10a732ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732ec))), 0x10a519cfu);
L_10a519cf:;
  /* 10a519cf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a519d3 jbe 0x10a519e3 */
  if ((C.cf||C.zf)) goto L_10a519e3;
  /* 10a519d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a519d8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10a519db mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a519de sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a519e1 jmp 0x10a519e5 */
  goto L_10a519e5;
L_10a519e3:;
  /* 10a519e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a519e5:;
  /* 10a519e5 mov esp, ebp */
  ESP = (EBP);
  /* 10a519e7 pop ebp */
  EBP = (pop32());
  /* 10a519e8 ret  */
  ESPCHK(0x10a51860u, _esp0);
  ESP += 4; return;
}

/* FUN_100119f0 @ 0x10a519f0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_10a519f0(void) {
  FTRACE(0x10a519f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a519f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a519f1 mov ebp, esp */
  EBP = (ESP);
  /* 10a519f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a519f6 push esi */
  push32((uint32_t)(ESI));
  /* 10a519f7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 10a519fb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a519fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a51a01 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a51a04 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a51a07 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a51a0b ja 0x10a51f58 */
  if ((!C.cf&&!C.zf)) goto L_10a51f58;
  /* 10a51a11 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a51a14 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a51a16 mov dl, byte ptr [eax + 0x10a51fb9] */
  DL = (r8((uint32_t)(EAX + 0x10a51fb9)));
  /* 10a51a1c jmp dword ptr [edx*4 + 0x10a51f5d] */
  switch (EDX) {
    case 0: goto L_10a51f36;
    case 1: goto L_10a51a45;
    case 2: goto L_10a51a8b;
    case 3: goto L_10a51bd8;
    case 4: goto L_10a51c00;
    case 5: goto L_10a51c9f;
    case 6: goto L_10a51d0b;
    case 7: goto L_10a51d34;
    case 8: goto L_10a51d75;
    case 9: goto L_10a51e57;
    case 10: goto L_10a51ebe;
    case 11: goto L_10a51f0b;
    case 12: goto L_10a51a23;
    case 13: goto L_10a51a68;
    case 14: goto L_10a51aae;
    case 15: goto L_10a51bae;
    case 16: goto L_10a51c45;
    case 17: goto L_10a51c72;
    case 18: goto L_10a51cc7;
    case 19: goto L_10a51d4b;
    case 20: goto L_10a51df9;
    case 21: goto L_10a51e88;
    case 22: goto L_10a51f58;
    default: x86_unimpl("switch@0x10a51a1c out of table"); return;
  }
L_10a51a23:;
  /* 10a51a23 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a51a26 push ecx */
  push32((uint32_t)(ECX));
  /* 10a51a27 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a51a2a push edx */
  push32((uint32_t)(EDX));
  /* 10a51a2b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a51a2e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10a51a31 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a51a34 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10a51a37 push eax */
  push32((uint32_t)(EAX));
  /* 10a51a38 call 0x10a52010 */
  push32(0x10a51a3du); f_10a52010();
  /* 10a51a3d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51a40 jmp 0x10a51f58 */
  goto L_10a51f58;
L_10a51a45:;
  /* 10a51a45 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a51a48 push ecx */
  push32((uint32_t)(ECX));
  /* 10a51a49 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a51a4c push edx */
  push32((uint32_t)(EDX));
  /* 10a51a4d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a51a50 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10a51a53 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a51a56 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 10a51a5a push eax */
  push32((uint32_t)(EAX));
  /* 10a51a5b call 0x10a52010 */
  push32(0x10a51a60u); f_10a52010();
  /* 10a51a60 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51a63 jmp 0x10a51f58 */
  goto L_10a51f58;
L_10a51a68:;
  /* 10a51a68 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a51a6b push ecx */
  push32((uint32_t)(ECX));
  /* 10a51a6c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a51a6f push edx */
  push32((uint32_t)(EDX));
  /* 10a51a70 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a51a73 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a51a76 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a51a79 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10a51a7d push eax */
  push32((uint32_t)(EAX));
  /* 10a51a7e call 0x10a52010 */
  push32(0x10a51a83u); f_10a52010();
  /* 10a51a83 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51a86 jmp 0x10a51f58 */
  goto L_10a51f58;
L_10a51a8b:;
  /* 10a51a8b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a51a8e push ecx */
  push32((uint32_t)(ECX));
  /* 10a51a8f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a51a92 push edx */
  push32((uint32_t)(EDX));
  /* 10a51a93 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a51a96 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10a51a99 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a51a9c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10a51aa0 push eax */
  push32((uint32_t)(EAX));
  /* 10a51aa1 call 0x10a52010 */
  push32(0x10a51aa6u); f_10a52010();
  /* 10a51aa6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51aa9 jmp 0x10a51f58 */
  goto L_10a51f58;
L_10a51aae:;
  /* 10a51aae cmp dword ptr [0x10a70968], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a70968))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a51ab5 je 0x10a51b36 */
  if (C.zf) goto L_10a51b36;
  /* 10a51ab7 mov dword ptr [0x10a70968], 0 */
  w32((uint32_t)(0x10a70968), (0x0u));
  /* 10a51ac1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a51ac4 push ecx */
  push32((uint32_t)(ECX));
  /* 10a51ac5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a51ac8 push edx */
  push32((uint32_t)(EDX));
  /* 10a51ac9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a51acc push eax */
  push32((uint32_t)(EAX));
  /* 10a51acd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a51ad0 push ecx */
  push32((uint32_t)(ECX));
  /* 10a51ad1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a51ad4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 10a51ada push eax */
  push32((uint32_t)(EAX));
  /* 10a51adb call 0x10a521c0 */
  push32(0x10a51ae0u); f_10a521c0();
  /* 10a51ae0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51ae3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a51ae6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a51ae9 jne 0x10a51af0 */
  if (!C.zf) goto L_10a51af0;
  /* 10a51aeb jmp 0x10a51f58 */
  goto L_10a51f58;
L_10a51af0:;
  /* 10a51af0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a51af3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a51af5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 10a51af8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a51afb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a51afd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51b00 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a51b03 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10a51b05 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a51b08 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a51b0a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a51b0d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a51b10 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10a51b12 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a51b15 push ecx */
  push32((uint32_t)(ECX));
  /* 10a51b16 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a51b19 push edx */
  push32((uint32_t)(EDX));
  /* 10a51b1a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a51b1d push eax */
  push32((uint32_t)(EAX));
  /* 10a51b1e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a51b21 push ecx */
  push32((uint32_t)(ECX));
  /* 10a51b22 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a51b25 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10a51b2b push eax */
  push32((uint32_t)(EAX));
  /* 10a51b2c call 0x10a521c0 */
  push32(0x10a51b31u); f_10a521c0();
  /* 10a51b31 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51b34 jmp 0x10a51ba9 */
  goto L_10a51ba9;
L_10a51b36:;
  /* 10a51b36 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a51b39 push ecx */
  push32((uint32_t)(ECX));
  /* 10a51b3a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a51b3d push edx */
  push32((uint32_t)(EDX));
  /* 10a51b3e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a51b41 push eax */
  push32((uint32_t)(EAX));
  /* 10a51b42 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a51b45 push ecx */
  push32((uint32_t)(ECX));
  /* 10a51b46 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a51b49 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 10a51b4f push eax */
  push32((uint32_t)(EAX));
  /* 10a51b50 call 0x10a521c0 */
  push32(0x10a51b55u); f_10a521c0();
  /* 10a51b55 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51b58 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a51b5b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a51b5e jne 0x10a51b65 */
  if (!C.zf) goto L_10a51b65;
  /* 10a51b60 jmp 0x10a51f58 */
  goto L_10a51f58;
L_10a51b65:;
  /* 10a51b65 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a51b68 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a51b6a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 10a51b6d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a51b70 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a51b72 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51b75 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a51b78 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10a51b7a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a51b7d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a51b7f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a51b82 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a51b85 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10a51b87 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a51b8a push ecx */
  push32((uint32_t)(ECX));
  /* 10a51b8b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a51b8e push edx */
  push32((uint32_t)(EDX));
  /* 10a51b8f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a51b92 push eax */
  push32((uint32_t)(EAX));
  /* 10a51b93 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a51b96 push ecx */
  push32((uint32_t)(ECX));
  /* 10a51b97 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a51b9a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10a51ba0 push eax */
  push32((uint32_t)(EAX));
  /* 10a51ba1 call 0x10a521c0 */
  push32(0x10a51ba6u); f_10a521c0();
  /* 10a51ba6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a51ba9:;
  /* 10a51ba9 jmp 0x10a51f58 */
  goto L_10a51f58;
L_10a51bae:;
  /* 10a51bae mov ecx, dword ptr [0x10a70968] */
  ECX = (r32((uint32_t)(0x10a70968)));
  /* 10a51bb4 mov dword ptr [0x10a70978], ecx */
  w32((uint32_t)(0x10a70978), (ECX));
  /* 10a51bba mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a51bbd push edx */
  push32((uint32_t)(EDX));
  /* 10a51bbe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a51bc1 push eax */
  push32((uint32_t)(EAX));
  /* 10a51bc2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a51bc4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a51bc7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10a51bca push edx */
  push32((uint32_t)(EDX));
  /* 10a51bcb call 0x10a52060 */
  push32(0x10a51bd0u); f_10a52060();
  /* 10a51bd0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51bd3 jmp 0x10a51f58 */
  goto L_10a51f58;
L_10a51bd8:;
  /* 10a51bd8 mov eax, dword ptr [0x10a70968] */
  EAX = (r32((uint32_t)(0x10a70968)));
  /* 10a51bdd mov dword ptr [0x10a70978], eax */
  w32((uint32_t)(0x10a70978), (EAX));
  /* 10a51be2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a51be5 push ecx */
  push32((uint32_t)(ECX));
  /* 10a51be6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a51be9 push edx */
  push32((uint32_t)(EDX));
  /* 10a51bea push 2 */
  push32((uint32_t)(0x2u));
  /* 10a51bec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a51bef mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10a51bf2 push ecx */
  push32((uint32_t)(ECX));
  /* 10a51bf3 call 0x10a52060 */
  push32(0x10a51bf8u); f_10a52060();
  /* 10a51bf8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51bfb jmp 0x10a51f58 */
  goto L_10a51f58;
L_10a51c00:;
  /* 10a51c00 mov edx, dword ptr [0x10a70968] */
  EDX = (r32((uint32_t)(0x10a70968)));
  /* 10a51c06 mov dword ptr [0x10a70978], edx */
  w32((uint32_t)(0x10a70978), (EDX));
  /* 10a51c0c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a51c0f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 10a51c12 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a51c13 mov ecx, 0xc */
  ECX = (0xcu);
  /* 10a51c18 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a51c1a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a51c1d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a51c21 jne 0x10a51c2a */
  if (!C.zf) goto L_10a51c2a;
  /* 10a51c23 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_10a51c2a:;
  /* 10a51c2a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a51c2d push edx */
  push32((uint32_t)(EDX));
  /* 10a51c2e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a51c31 push eax */
  push32((uint32_t)(EAX));
  /* 10a51c32 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a51c34 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a51c37 push ecx */
  push32((uint32_t)(ECX));
  /* 10a51c38 call 0x10a52060 */
  push32(0x10a51c3du); f_10a52060();
  /* 10a51c3d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51c40 jmp 0x10a51f58 */
  goto L_10a51f58;
L_10a51c45:;
  /* 10a51c45 mov edx, dword ptr [0x10a70968] */
  EDX = (r32((uint32_t)(0x10a70968)));
  /* 10a51c4b mov dword ptr [0x10a70978], edx */
  w32((uint32_t)(0x10a70978), (EDX));
  /* 10a51c51 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a51c54 push eax */
  push32((uint32_t)(EAX));
  /* 10a51c55 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a51c58 push ecx */
  push32((uint32_t)(ECX));
  /* 10a51c59 push 3 */
  push32((uint32_t)(0x3u));
  /* 10a51c5b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a51c5e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10a51c61 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51c64 push eax */
  push32((uint32_t)(EAX));
  /* 10a51c65 call 0x10a52060 */
  push32(0x10a51c6au); f_10a52060();
  /* 10a51c6a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51c6d jmp 0x10a51f58 */
  goto L_10a51f58;
L_10a51c72:;
  /* 10a51c72 mov ecx, dword ptr [0x10a70968] */
  ECX = (r32((uint32_t)(0x10a70968)));
  /* 10a51c78 mov dword ptr [0x10a70978], ecx */
  w32((uint32_t)(0x10a70978), (ECX));
  /* 10a51c7e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a51c81 push edx */
  push32((uint32_t)(EDX));
  /* 10a51c82 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a51c85 push eax */
  push32((uint32_t)(EAX));
  /* 10a51c86 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a51c88 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a51c8b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10a51c8e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51c91 push edx */
  push32((uint32_t)(EDX));
  /* 10a51c92 call 0x10a52060 */
  push32(0x10a51c97u); f_10a52060();
  /* 10a51c97 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51c9a jmp 0x10a51f58 */
  goto L_10a51f58;
L_10a51c9f:;
  /* 10a51c9f mov eax, dword ptr [0x10a70968] */
  EAX = (r32((uint32_t)(0x10a70968)));
  /* 10a51ca4 mov dword ptr [0x10a70978], eax */
  w32((uint32_t)(0x10a70978), (EAX));
  /* 10a51ca9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a51cac push ecx */
  push32((uint32_t)(ECX));
  /* 10a51cad mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a51cb0 push edx */
  push32((uint32_t)(EDX));
  /* 10a51cb1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a51cb3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a51cb6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10a51cb9 push ecx */
  push32((uint32_t)(ECX));
  /* 10a51cba call 0x10a52060 */
  push32(0x10a51cbfu); f_10a52060();
  /* 10a51cbf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51cc2 jmp 0x10a51f58 */
  goto L_10a51f58;
L_10a51cc7:;
  /* 10a51cc7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a51cca cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a51cce jg 0x10a51cec */
  if ((!C.zf&&C.sf==C.of)) goto L_10a51cec;
  /* 10a51cd0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a51cd3 push eax */
  push32((uint32_t)(EAX));
  /* 10a51cd4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a51cd7 push ecx */
  push32((uint32_t)(ECX));
  /* 10a51cd8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a51cdb mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10a51ce1 push eax */
  push32((uint32_t)(EAX));
  /* 10a51ce2 call 0x10a52010 */
  push32(0x10a51ce7u); f_10a52010();
  /* 10a51ce7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51cea jmp 0x10a51d06 */
  goto L_10a51d06;
L_10a51cec:;
  /* 10a51cec mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a51cef push ecx */
  push32((uint32_t)(ECX));
  /* 10a51cf0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a51cf3 push edx */
  push32((uint32_t)(EDX));
  /* 10a51cf4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a51cf7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 10a51cfd push ecx */
  push32((uint32_t)(ECX));
  /* 10a51cfe call 0x10a52010 */
  push32(0x10a51d03u); f_10a52010();
  /* 10a51d03 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a51d06:;
  /* 10a51d06 jmp 0x10a51f58 */
  goto L_10a51f58;
L_10a51d0b:;
  /* 10a51d0b mov edx, dword ptr [0x10a70968] */
  EDX = (r32((uint32_t)(0x10a70968)));
  /* 10a51d11 mov dword ptr [0x10a70978], edx */
  w32((uint32_t)(0x10a70978), (EDX));
  /* 10a51d17 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a51d1a push eax */
  push32((uint32_t)(EAX));
  /* 10a51d1b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a51d1e push ecx */
  push32((uint32_t)(ECX));
  /* 10a51d1f push 2 */
  push32((uint32_t)(0x2u));
  /* 10a51d21 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a51d24 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a51d26 push eax */
  push32((uint32_t)(EAX));
  /* 10a51d27 call 0x10a52060 */
  push32(0x10a51d2cu); f_10a52060();
  /* 10a51d2c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51d2f jmp 0x10a51f58 */
  goto L_10a51f58;
L_10a51d34:;
  /* 10a51d34 mov ecx, dword ptr [0x10a70968] */
  ECX = (r32((uint32_t)(0x10a70968)));
  /* 10a51d3a mov dword ptr [0x10a70978], ecx */
  w32((uint32_t)(0x10a70978), (ECX));
  /* 10a51d40 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a51d43 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10a51d46 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a51d49 jmp 0x10a51d9d */
  goto L_10a51d9d;
L_10a51d4b:;
  /* 10a51d4b mov ecx, dword ptr [0x10a70968] */
  ECX = (r32((uint32_t)(0x10a70968)));
  /* 10a51d51 mov dword ptr [0x10a70978], ecx */
  w32((uint32_t)(0x10a70978), (ECX));
  /* 10a51d57 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a51d5a push edx */
  push32((uint32_t)(EDX));
  /* 10a51d5b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a51d5e push eax */
  push32((uint32_t)(EAX));
  /* 10a51d5f push 1 */
  push32((uint32_t)(0x1u));
  /* 10a51d61 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a51d64 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10a51d67 push edx */
  push32((uint32_t)(EDX));
  /* 10a51d68 call 0x10a52060 */
  push32(0x10a51d6du); f_10a52060();
  /* 10a51d6d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51d70 jmp 0x10a51f58 */
  goto L_10a51f58;
L_10a51d75:;
  /* 10a51d75 mov eax, dword ptr [0x10a70968] */
  EAX = (r32((uint32_t)(0x10a70968)));
  /* 10a51d7a mov dword ptr [0x10a70978], eax */
  w32((uint32_t)(0x10a70978), (EAX));
  /* 10a51d7f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a51d82 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a51d86 jne 0x10a51d91 */
  if (!C.zf) goto L_10a51d91;
  /* 10a51d88 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 10a51d8f jmp 0x10a51d9d */
  goto L_10a51d9d;
L_10a51d91:;
  /* 10a51d91 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a51d94 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10a51d97 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a51d9a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10a51d9d:;
  /* 10a51d9d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a51da0 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10a51da3 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a51da6 jge 0x10a51db1 */
  if ((C.sf==C.of)) goto L_10a51db1;
  /* 10a51da8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a51daf jmp 0x10a51dde */
  goto L_10a51dde;
L_10a51db1:;
  /* 10a51db1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a51db4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10a51db7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a51db8 mov ecx, 7 */
  ECX = (0x7u);
  /* 10a51dbd idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a51dbf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a51dc2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a51dc5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10a51dc8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a51dc9 mov ecx, 7 */
  ECX = (0x7u);
  /* 10a51dce idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a51dd0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a51dd3 jl 0x10a51dde */
  if ((C.sf!=C.of)) goto L_10a51dde;
  /* 10a51dd5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a51dd8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51ddb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10a51dde:;
  /* 10a51dde mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a51de1 push eax */
  push32((uint32_t)(EAX));
  /* 10a51de2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a51de5 push ecx */
  push32((uint32_t)(ECX));
  /* 10a51de6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a51de8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a51deb push edx */
  push32((uint32_t)(EDX));
  /* 10a51dec call 0x10a52060 */
  push32(0x10a51df1u); f_10a52060();
  /* 10a51df1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51df4 jmp 0x10a51f58 */
  goto L_10a51f58;
L_10a51df9:;
  /* 10a51df9 cmp dword ptr [0x10a70968], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a70968))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a51e00 je 0x10a51e30 */
  if (C.zf) goto L_10a51e30;
  /* 10a51e02 mov dword ptr [0x10a70968], 0 */
  w32((uint32_t)(0x10a70968), (0x0u));
  /* 10a51e0c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a51e0f push eax */
  push32((uint32_t)(EAX));
  /* 10a51e10 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a51e13 push ecx */
  push32((uint32_t)(ECX));
  /* 10a51e14 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a51e17 push edx */
  push32((uint32_t)(EDX));
  /* 10a51e18 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a51e1b push eax */
  push32((uint32_t)(EAX));
  /* 10a51e1c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a51e1f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10a51e25 push edx */
  push32((uint32_t)(EDX));
  /* 10a51e26 call 0x10a521c0 */
  push32(0x10a51e2bu); f_10a521c0();
  /* 10a51e2b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51e2e jmp 0x10a51e52 */
  goto L_10a51e52;
L_10a51e30:;
  /* 10a51e30 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a51e33 push eax */
  push32((uint32_t)(EAX));
  /* 10a51e34 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a51e37 push ecx */
  push32((uint32_t)(ECX));
  /* 10a51e38 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a51e3b push edx */
  push32((uint32_t)(EDX));
  /* 10a51e3c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a51e3f push eax */
  push32((uint32_t)(EAX));
  /* 10a51e40 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a51e43 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10a51e49 push edx */
  push32((uint32_t)(EDX));
  /* 10a51e4a call 0x10a521c0 */
  push32(0x10a51e4fu); f_10a521c0();
  /* 10a51e4f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a51e52:;
  /* 10a51e52 jmp 0x10a51f58 */
  goto L_10a51f58;
L_10a51e57:;
  /* 10a51e57 mov dword ptr [0x10a70968], 0 */
  w32((uint32_t)(0x10a70968), (0x0u));
  /* 10a51e61 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a51e64 push eax */
  push32((uint32_t)(EAX));
  /* 10a51e65 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a51e68 push ecx */
  push32((uint32_t)(ECX));
  /* 10a51e69 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a51e6c push edx */
  push32((uint32_t)(EDX));
  /* 10a51e6d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a51e70 push eax */
  push32((uint32_t)(EAX));
  /* 10a51e71 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a51e74 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 10a51e7a push edx */
  push32((uint32_t)(EDX));
  /* 10a51e7b call 0x10a521c0 */
  push32(0x10a51e80u); f_10a521c0();
  /* 10a51e80 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51e83 jmp 0x10a51f58 */
  goto L_10a51f58;
L_10a51e88:;
  /* 10a51e88 mov eax, dword ptr [0x10a70968] */
  EAX = (r32((uint32_t)(0x10a70968)));
  /* 10a51e8d mov dword ptr [0x10a70978], eax */
  w32((uint32_t)(0x10a70978), (EAX));
  /* 10a51e92 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a51e95 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10a51e98 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a51e99 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10a51e9e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a51ea0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a51ea3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a51ea6 push edx */
  push32((uint32_t)(EDX));
  /* 10a51ea7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a51eaa push eax */
  push32((uint32_t)(EAX));
  /* 10a51eab push 2 */
  push32((uint32_t)(0x2u));
  /* 10a51ead mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a51eb0 push ecx */
  push32((uint32_t)(ECX));
  /* 10a51eb1 call 0x10a52060 */
  push32(0x10a51eb6u); f_10a52060();
  /* 10a51eb6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51eb9 jmp 0x10a51f58 */
  goto L_10a51f58;
L_10a51ebe:;
  /* 10a51ebe mov edx, dword ptr [0x10a70968] */
  EDX = (r32((uint32_t)(0x10a70968)));
  /* 10a51ec4 mov dword ptr [0x10a70978], edx */
  w32((uint32_t)(0x10a70978), (EDX));
  /* 10a51eca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a51ecd mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 10a51ed0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a51ed1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10a51ed6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a51ed8 mov ecx, eax */
  ECX = (EAX);
  /* 10a51eda add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51edd imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a51ee0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a51ee3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a51ee6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a51ee7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 10a51eec idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a51eee add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51ef0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a51ef3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a51ef6 push eax */
  push32((uint32_t)(EAX));
  /* 10a51ef7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a51efa push ecx */
  push32((uint32_t)(ECX));
  /* 10a51efb push 4 */
  push32((uint32_t)(0x4u));
  /* 10a51efd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a51f00 push edx */
  push32((uint32_t)(EDX));
  /* 10a51f01 call 0x10a52060 */
  push32(0x10a51f06u); f_10a52060();
  /* 10a51f06 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51f09 jmp 0x10a51f58 */
  goto L_10a51f58;
L_10a51f0b:;
  /* 10a51f0b call 0x10a53020 */
  push32(0x10a51f10u); f_10a53020();
  /* 10a51f10 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a51f13 push eax */
  push32((uint32_t)(EAX));
  /* 10a51f14 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a51f17 push ecx */
  push32((uint32_t)(ECX));
  /* 10a51f18 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a51f1b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a51f1d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a51f21 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 10a51f24 mov ecx, dword ptr [eax*4 + 0x10a6fe1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10a6fe1c)));
  /* 10a51f2b push ecx */
  push32((uint32_t)(ECX));
  /* 10a51f2c call 0x10a52010 */
  push32(0x10a51f31u); f_10a52010();
  /* 10a51f31 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51f34 jmp 0x10a51f58 */
  goto L_10a51f58;
L_10a51f36:;
  /* 10a51f36 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a51f39 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a51f3b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 10a51f3e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a51f41 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a51f43 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a51f46 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a51f49 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10a51f4b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a51f4e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a51f50 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a51f53 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a51f56 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10a51f58:;
  /* 10a51f58 pop esi */
  ESI = (pop32());
  /* 10a51f59 mov esp, ebp */
  ESP = (EBP);
  /* 10a51f5b pop ebp */
  EBP = (pop32());
  /* 10a51f5c ret  */
  ESPCHK(0x10a519f0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x10a52010 (72 bytes, 30 insns) */
void f_10a52010(void) {
  FTRACE(0x10a52010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a52010 push ebp */
  push32((uint32_t)(EBP));
  /* 10a52011 mov ebp, esp */
  EBP = (ESP);
L_10a52013:;
  /* 10a52013 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a52016 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a52019 je 0x10a52056 */
  if (C.zf) goto L_10a52056;
  /* 10a5201b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a5201e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a52021 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a52023 je 0x10a52056 */
  if (C.zf) goto L_10a52056;
  /* 10a52025 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a52028 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a5202a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a5202d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a5202f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10a52031 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a52034 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a52036 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a52039 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a5203c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10a5203e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a52041 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a52044 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10a52047 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a5204a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a5204c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a5204f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a52052 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10a52054 jmp 0x10a52013 */
  goto L_10a52013;
L_10a52056:;
  /* 10a52056 pop ebp */
  EBP = (pop32());
  /* 10a52057 ret  */
  ESPCHK(0x10a52010u, _esp0);
  ESP += 4; return;
}

/* FUN_10012060 @ 0x10a52060 (173 bytes, 64 insns) */
void f_10a52060(void) {
  FTRACE(0x10a52060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a52060 push ebp */
  push32((uint32_t)(EBP));
  /* 10a52061 mov ebp, esp */
  EBP = (ESP);
  /* 10a52063 push ecx */
  push32((uint32_t)(ECX));
  /* 10a52064 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a5206b cmp dword ptr [0x10a70978], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a70978))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a52072 je 0x10a5208a */
  if (C.zf) goto L_10a5208a;
  /* 10a52074 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a52077 push eax */
  push32((uint32_t)(EAX));
  /* 10a52078 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a5207b push ecx */
  push32((uint32_t)(ECX));
  /* 10a5207c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a5207f push edx */
  push32((uint32_t)(EDX));
  /* 10a52080 call 0x10a52110 */
  push32(0x10a52085u); f_10a52110();
  /* 10a52085 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a52088 jmp 0x10a52109 */
  goto L_10a52109;
L_10a5208a:;
  /* 10a5208a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a5208d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a52090 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a52092 jae 0x10a52100 */
  if (!C.cf) goto L_10a52100;
  /* 10a52094 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a52097 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a5209a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10a5209d jmp 0x10a520a8 */
  goto L_10a520a8;
L_10a5209f:;
  /* 10a5209f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a520a2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a520a5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10a520a8:;
  /* 10a520a8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a520ab add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a520ae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a520b0 je 0x10a520e4 */
  if (C.zf) goto L_10a520e4;
  /* 10a520b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a520b5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a520b6 mov ecx, 0xa */
  ECX = (0xau);
  /* 10a520bb idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a520bd add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a520c0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a520c3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a520c5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a520c8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 10a520cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a520ce cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a520cf mov ecx, 0xa */
  ECX = (0xau);
  /* 10a520d4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a520d6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a520d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a520dc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a520df mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a520e2 jmp 0x10a5209f */
  goto L_10a5209f;
L_10a520e4:;
  /* 10a520e4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a520e7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a520e9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a520ec mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a520ef mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10a520f1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a520f4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a520f6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a520f9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a520fc mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10a520fe jmp 0x10a52109 */
  goto L_10a52109;
L_10a52100:;
  /* 10a52100 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a52103 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10a52109:;
  /* 10a52109 mov esp, ebp */
  ESP = (EBP);
  /* 10a5210b pop ebp */
  EBP = (pop32());
  /* 10a5210c ret  */
  ESPCHK(0x10a52060u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x10a52110 (172 bytes, 65 insns) */
void f_10a52110(void) {
  FTRACE(0x10a52110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a52110 push ebp */
  push32((uint32_t)(EBP));
  /* 10a52111 mov ebp, esp */
  EBP = (ESP);
  /* 10a52113 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a52116 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a52119 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a5211b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a5211e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a52121 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a52124 jbe 0x10a5216b */
  if ((C.cf||C.zf)) goto L_10a5216b;
L_10a52126:;
  /* 10a52126 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a52129 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a5212a mov ecx, 0xa */
  ECX = (0xau);
  /* 10a5212f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a52131 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a52134 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a52137 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10a52139 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a5213c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5213f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a52142 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a52145 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a52147 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a5214a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a5214d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10a5214f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a52152 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a52153 mov ecx, 0xa */
  ECX = (0xau);
  /* 10a52158 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a5215a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a5215d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a52161 jle 0x10a5216b */
  if ((C.zf||C.sf!=C.of)) goto L_10a5216b;
  /* 10a52163 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a52166 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a52169 ja 0x10a52126 */
  if ((!C.cf&&!C.zf)) goto L_10a52126;
L_10a5216b:;
  /* 10a5216b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a5216e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a52170 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a52173 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a52176 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a52179 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10a5217b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a5217e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a52181 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a52184:;
  /* 10a52184 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a52187 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a52189 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 10a5218c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a5218f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a52192 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a52194 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10a52196 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a52199 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a5219c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a5219f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a521a2 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10a521a5 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10a521a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a521aa add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a521ad mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a521b0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a521b3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a521b6 jb 0x10a52184 */
  if (C.cf) goto L_10a52184;
  /* 10a521b8 mov esp, ebp */
  ESP = (EBP);
  /* 10a521ba pop ebp */
  EBP = (pop32());
  /* 10a521bb ret  */
  ESPCHK(0x10a52110u, _esp0);
  ESP += 4; return;
}

/* FUN_100121c0 @ 0x10a521c0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_10a521c0(void) {
  FTRACE(0x10a521c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a521c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a521c1 mov ebp, esp */
  EBP = (ESP);
  /* 10a521c3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10a521c6:;
  /* 10a521c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a521c9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a521cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a521ce je 0x10a5263c */
  if (C.zf) goto L_10a5263c;
  /* 10a521d4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a521d7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a521da je 0x10a5263c */
  if (C.zf) goto L_10a5263c;
  /* 10a521e0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 10a521e4 mov dword ptr [0x10a70978], 0 */
  w32((uint32_t)(0x10a70978), (0x0u));
  /* 10a521ee mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10a521f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a521f8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a521fb jmp 0x10a52206 */
  goto L_10a52206;
L_10a521fd:;
  /* 10a521fd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a52200 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a52203 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10a52206:;
  /* 10a52206 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a52209 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a5220c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a5220f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a52212 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a52215 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a52218 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a5221b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5221d jne 0x10a52221 */
  if (!C.zf) goto L_10a52221;
  /* 10a5221f jmp 0x10a521fd */
  goto L_10a521fd;
L_10a52221:;
  /* 10a52221 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a52224 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a52227 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a5222a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a5222d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a52230 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10a52233 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a52236 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a52239 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10a5223c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a52240 ja 0x10a52590 */
  if ((!C.cf&&!C.zf)) goto L_10a52590;
  /* 10a52246 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a52249 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a5224b mov al, byte ptr [ecx + 0x10a5266c] */
  AL = (r8((uint32_t)(ECX + 0x10a5266c)));
  /* 10a52251 jmp dword ptr [eax*4 + 0x10a52640] */
  switch (EAX) {
    case 0: goto L_10a524af;
    case 1: goto L_10a52393;
    case 2: goto L_10a5231e;
    case 3: goto L_10a52258;
    case 4: goto L_10a52296;
    case 5: goto L_10a522f7;
    case 6: goto L_10a52345;
    case 7: goto L_10a5236c;
    case 8: goto L_10a523da;
    case 9: goto L_10a522d4;
    case 10: goto L_10a52590;
    default: x86_unimpl("switch@0x10a52251 out of table"); return;
  }
L_10a52258:;
  /* 10a52258 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a5225b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10a5225e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a52261 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a52264 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10a52267 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5226b ja 0x10a52291 */
  if ((!C.cf&&!C.zf)) goto L_10a52291;
  /* 10a5226d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a52270 jmp dword ptr [ecx*4 + 0x10a526bf] */
  switch (ECX) {
    case 0: goto L_10a52277;
    case 1: goto L_10a52281;
    case 2: goto L_10a52287;
    case 3: goto L_10a5228d;
    case 4: goto L_10a522b5;
    case 5: goto L_10a522bf;
    case 6: goto L_10a522c5;
    case 7: goto L_10a522cb;
    default: x86_unimpl("switch@0x10a52270 out of table"); return;
  }
L_10a52277:;
  /* 10a52277 mov dword ptr [0x10a70978], 1 */
  w32((uint32_t)(0x10a70978), (0x1u));
L_10a52281:;
  /* 10a52281 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 10a52285 jmp 0x10a52291 */
  goto L_10a52291;
L_10a52287:;
  /* 10a52287 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 10a5228b jmp 0x10a52291 */
  goto L_10a52291;
L_10a5228d:;
  /* 10a5228d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_10a52291:;
  /* 10a52291 jmp 0x10a52590 */
  goto L_10a52590;
L_10a52296:;
  /* 10a52296 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a52299 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10a5229c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a5229f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a522a2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10a522a5 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a522a9 ja 0x10a522cf */
  if ((!C.cf&&!C.zf)) goto L_10a522cf;
  /* 10a522ab mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a522ae jmp dword ptr [ecx*4 + 0x10a526cf] */
  switch (ECX) {
    case 0: goto L_10a522b5;
    case 1: goto L_10a522bf;
    case 2: goto L_10a522c5;
    case 3: goto L_10a522cb;
    default: x86_unimpl("switch@0x10a522ae out of table"); return;
  }
L_10a522b5:;
  /* 10a522b5 mov dword ptr [0x10a70978], 1 */
  w32((uint32_t)(0x10a70978), (0x1u));
L_10a522bf:;
  /* 10a522bf mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 10a522c3 jmp 0x10a522cf */
  goto L_10a522cf;
L_10a522c5:;
  /* 10a522c5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 10a522c9 jmp 0x10a522cf */
  goto L_10a522cf;
L_10a522cb:;
  /* 10a522cb mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_10a522cf:;
  /* 10a522cf jmp 0x10a52590 */
  goto L_10a52590;
L_10a522d4:;
  /* 10a522d4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a522d7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10a522da cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a522de je 0x10a522e8 */
  if (C.zf) goto L_10a522e8;
  /* 10a522e0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a522e4 je 0x10a522ee */
  if (C.zf) goto L_10a522ee;
  /* 10a522e6 jmp 0x10a522f2 */
  goto L_10a522f2;
L_10a522e8:;
  /* 10a522e8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 10a522ec jmp 0x10a522f2 */
  goto L_10a522f2;
L_10a522ee:;
  /* 10a522ee mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_10a522f2:;
  /* 10a522f2 jmp 0x10a52590 */
  goto L_10a52590;
L_10a522f7:;
  /* 10a522f7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a522fa mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10a522fd cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a52301 je 0x10a5230b */
  if (C.zf) goto L_10a5230b;
  /* 10a52303 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a52307 je 0x10a52315 */
  if (C.zf) goto L_10a52315;
  /* 10a52309 jmp 0x10a52319 */
  goto L_10a52319;
L_10a5230b:;
  /* 10a5230b mov dword ptr [0x10a70978], 1 */
  w32((uint32_t)(0x10a70978), (0x1u));
L_10a52315:;
  /* 10a52315 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_10a52319:;
  /* 10a52319 jmp 0x10a52590 */
  goto L_10a52590;
L_10a5231e:;
  /* 10a5231e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a52321 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10a52324 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a52328 je 0x10a52332 */
  if (C.zf) goto L_10a52332;
  /* 10a5232a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5232e je 0x10a5233c */
  if (C.zf) goto L_10a5233c;
  /* 10a52330 jmp 0x10a52340 */
  goto L_10a52340;
L_10a52332:;
  /* 10a52332 mov dword ptr [0x10a70978], 1 */
  w32((uint32_t)(0x10a70978), (0x1u));
L_10a5233c:;
  /* 10a5233c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_10a52340:;
  /* 10a52340 jmp 0x10a52590 */
  goto L_10a52590;
L_10a52345:;
  /* 10a52345 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a52348 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 10a5234b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5234f je 0x10a52359 */
  if (C.zf) goto L_10a52359;
  /* 10a52351 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a52355 je 0x10a52363 */
  if (C.zf) goto L_10a52363;
  /* 10a52357 jmp 0x10a52367 */
  goto L_10a52367;
L_10a52359:;
  /* 10a52359 mov dword ptr [0x10a70978], 1 */
  w32((uint32_t)(0x10a70978), (0x1u));
L_10a52363:;
  /* 10a52363 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_10a52367:;
  /* 10a52367 jmp 0x10a52590 */
  goto L_10a52590;
L_10a5236c:;
  /* 10a5236c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a5236f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10a52372 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a52376 je 0x10a52380 */
  if (C.zf) goto L_10a52380;
  /* 10a52378 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5237c je 0x10a5238a */
  if (C.zf) goto L_10a5238a;
  /* 10a5237e jmp 0x10a5238e */
  goto L_10a5238e;
L_10a52380:;
  /* 10a52380 mov dword ptr [0x10a70978], 1 */
  w32((uint32_t)(0x10a70978), (0x1u));
L_10a5238a:;
  /* 10a5238a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_10a5238e:;
  /* 10a5238e jmp 0x10a52590 */
  goto L_10a52590;
L_10a52393:;
  /* 10a52393 push 0x10a6cdfc */
  push32((uint32_t)(0x10a6cdfcu));
  /* 10a52398 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a5239b push ecx */
  push32((uint32_t)(ECX));
  /* 10a5239c call 0x10a52bf0 */
  push32(0x10a523a1u); f_10a52bf0();
  /* 10a523a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a523a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a523a6 jne 0x10a523b3 */
  if (!C.zf) goto L_10a523b3;
  /* 10a523a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a523ab add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a523ae mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a523b1 jmp 0x10a523d1 */
  goto L_10a523d1;
L_10a523b3:;
  /* 10a523b3 push 0x10a6cdf8 */
  push32((uint32_t)(0x10a6cdf8u));
  /* 10a523b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a523bb push eax */
  push32((uint32_t)(EAX));
  /* 10a523bc call 0x10a52bf0 */
  push32(0x10a523c1u); f_10a52bf0();
  /* 10a523c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a523c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a523c6 jne 0x10a523d1 */
  if (!C.zf) goto L_10a523d1;
  /* 10a523c8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a523cb add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a523ce mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a523d1:;
  /* 10a523d1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 10a523d5 jmp 0x10a52590 */
  goto L_10a52590;
L_10a523da:;
  /* 10a523da mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a523dd cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a523e1 jg 0x10a523f1 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a523f1;
  /* 10a523e3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a523e6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 10a523ec mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10a523ef jmp 0x10a523fd */
  goto L_10a523fd;
L_10a523f1:;
  /* 10a523f1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a523f4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10a523fa mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10a523fd:;
  /* 10a523fd cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a52401 jle 0x10a524a4 */
  if ((C.zf||C.sf!=C.of)) goto L_10a524a4;
  /* 10a52407 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a5240a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5240d jbe 0x10a524a4 */
  if ((C.cf||C.zf)) goto L_10a524a4;
  /* 10a52413 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a52416 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a52418 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a5241a mov ecx, dword ptr [0x10a6ec98] */
  ECX = (r32((uint32_t)(0x10a6ec98)));
  /* 10a52420 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a52422 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10a52426 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10a5242c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a5242e je 0x10a52467 */
  if (C.zf) goto L_10a52467;
  /* 10a52430 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a52433 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a52436 jbe 0x10a52467 */
  if ((C.cf||C.zf)) goto L_10a52467;
  /* 10a52438 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a5243b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a5243d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a52440 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a52442 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10a52444 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a52447 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a52449 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5244c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a5244f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10a52451 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a52454 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a52457 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10a5245a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a5245d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a5245f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a52462 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a52465 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10a52467:;
  /* 10a52467 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a5246a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a5246c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a5246f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a52471 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10a52473 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a52476 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a52478 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5247b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a5247e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10a52480 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a52483 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a52486 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10a52489 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a5248c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a5248e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a52491 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a52494 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10a52496 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a52499 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a5249c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10a5249f jmp 0x10a523fd */
  goto L_10a523fd;
L_10a524a4:;
  /* 10a524a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a524a7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a524aa jmp 0x10a521c6 */
  goto L_10a521c6;
L_10a524af:;
  /* 10a524af mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a524b2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10a524b5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a524b7 je 0x10a52582 */
  if (C.zf) goto L_10a52582;
  /* 10a524bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a524c0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a524c3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10a524c6:;
  /* 10a524c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a524c9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a524cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a524ce je 0x10a52580 */
  if (C.zf) goto L_10a52580;
  /* 10a524d4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a524d7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a524da je 0x10a52580 */
  if (C.zf) goto L_10a52580;
  /* 10a524e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a524e3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a524e6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a524e9 jne 0x10a524f9 */
  if (!C.zf) goto L_10a524f9;
  /* 10a524eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a524ee add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a524f1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10a524f4 jmp 0x10a52580 */
  goto L_10a52580;
L_10a524f9:;
  /* 10a524f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a524fc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a524fe mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a52500 mov edx, dword ptr [0x10a6ec98] */
  EDX = (r32((uint32_t)(0x10a6ec98)));
  /* 10a52506 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a52508 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10a5250c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10a52511 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a52513 je 0x10a5254c */
  if (C.zf) goto L_10a5254c;
  /* 10a52515 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a52518 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5251b jbe 0x10a5254c */
  if ((C.cf||C.zf)) goto L_10a5254c;
  /* 10a5251d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a52520 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a52522 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a52525 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a52527 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10a52529 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a5252c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a5252e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a52531 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a52534 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10a52536 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a52539 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5253c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a5253f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a52542 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a52544 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a52547 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a5254a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10a5254c:;
  /* 10a5254c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a5254f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a52551 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a52554 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a52556 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10a52558 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a5255b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a5255d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a52560 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a52563 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10a52565 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a52568 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5256b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10a5256e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a52571 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a52573 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a52576 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a52579 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10a5257b jmp 0x10a524c6 */
  goto L_10a524c6;
L_10a52580:;
  /* 10a52580 jmp 0x10a5258b */
  goto L_10a5258b;
L_10a52582:;
  /* 10a52582 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a52585 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a52588 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10a5258b:;
  /* 10a5258b jmp 0x10a521c6 */
  goto L_10a521c6;
L_10a52590:;
  /* 10a52590 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10a52594 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a52596 je 0x10a525bc */
  if (C.zf) goto L_10a525bc;
  /* 10a52598 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a5259b push edx */
  push32((uint32_t)(EDX));
  /* 10a5259c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a5259f push eax */
  push32((uint32_t)(EAX));
  /* 10a525a0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a525a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a525a4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a525a7 push edx */
  push32((uint32_t)(EDX));
  /* 10a525a8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10a525ab push eax */
  push32((uint32_t)(EAX));
  /* 10a525ac call 0x10a519f0 */
  push32(0x10a525b1u); f_10a519f0();
  /* 10a525b1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a525b4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a525b7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10a525ba jmp 0x10a52637 */
  goto L_10a52637;
L_10a525bc:;
  /* 10a525bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a525bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a525c1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a525c3 mov ecx, dword ptr [0x10a6ec98] */
  ECX = (r32((uint32_t)(0x10a6ec98)));
  /* 10a525c9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a525cb mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10a525cf and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10a525d5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a525d7 je 0x10a52608 */
  if (C.zf) goto L_10a52608;
  /* 10a525d9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a525dc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a525de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a525e1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a525e3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10a525e5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a525e8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a525ea add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a525ed mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a525f0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10a525f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a525f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a525f8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10a525fb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a525fe mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a52600 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a52603 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a52606 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10a52608:;
  /* 10a52608 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a5260b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a5260d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a52610 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a52612 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10a52614 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a52617 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a52619 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5261c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a5261f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10a52621 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a52624 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a52627 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a5262a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a5262d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a5262f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a52632 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a52635 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10a52637:;
  /* 10a52637 jmp 0x10a521c6 */
  goto L_10a521c6;
L_10a5263c:;
  /* 10a5263c mov esp, ebp */
  ESP = (EBP);
  /* 10a5263e pop ebp */
  EBP = (pop32());
  /* 10a5263f ret  */
  ESPCHK(0x10a521c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100126e0 @ 0x10a526e0 (650 bytes, 178 insns) */
void f_10a526e0(void) {
  FTRACE(0x10a526e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a526e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a526e1 mov ebp, esp */
  EBP = (ESP);
  /* 10a526e3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a526e9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a526ed jne 0x10a52849 */
  if (!C.zf) goto L_10a52849;
  /* 10a526f3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a526f6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 10a526fc lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 10a52702 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a52705 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a5270c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 10a52716 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a52718 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10a5271e push edx */
  push32((uint32_t)(EDX));
  /* 10a5271f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a52722 push eax */
  push32((uint32_t)(EAX));
  /* 10a52723 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a52726 push ecx */
  push32((uint32_t)(ECX));
  /* 10a52727 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a5272a push edx */
  push32((uint32_t)(EDX));
  /* 10a5272b call 0x10a53b00 */
  push32(0x10a52730u); f_10a53b00();
  /* 10a52730 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a52733 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a52736 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5273a jne 0x10a527cf */
  if (!C.zf) goto L_10a527cf;
  /* 10a52740 call dword ptr [0x10a73328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73328))), 0x10a52746u);
  /* 10a52746 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a52749 je 0x10a52750 */
  if (C.zf) goto L_10a52750;
  /* 10a5274b jmp 0x10a5282d */
  goto L_10a5282d;
L_10a52750:;
  /* 10a52750 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a52752 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a52754 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a52756 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a52759 push eax */
  push32((uint32_t)(EAX));
  /* 10a5275a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a5275d push ecx */
  push32((uint32_t)(ECX));
  /* 10a5275e call 0x10a53b00 */
  push32(0x10a52763u); f_10a53b00();
  /* 10a52763 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a52766 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 10a5276c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a52773 jne 0x10a5277a */
  if (!C.zf) goto L_10a5277a;
  /* 10a52775 jmp 0x10a5282d */
  goto L_10a5282d;
L_10a5277a:;
  /* 10a5277a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 10a5277c push 0x10a6ce04 */
  push32((uint32_t)(0x10a6ce04u));
  /* 10a52781 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a52783 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10a52789 push edx */
  push32((uint32_t)(EDX));
  /* 10a5278a call 0x10a44520 */
  push32(0x10a5278fu); f_10a44520();
  /* 10a5278f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a52792 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a52795 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a52799 jne 0x10a527a0 */
  if (!C.zf) goto L_10a527a0;
  /* 10a5279b jmp 0x10a5282d */
  goto L_10a5282d;
L_10a527a0:;
  /* 10a527a0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10a527a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a527a9 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 10a527af push eax */
  push32((uint32_t)(EAX));
  /* 10a527b0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a527b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a527b4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a527b7 push edx */
  push32((uint32_t)(EDX));
  /* 10a527b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a527bb push eax */
  push32((uint32_t)(EAX));
  /* 10a527bc call 0x10a53b00 */
  push32(0x10a527c1u); f_10a53b00();
  /* 10a527c1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a527c4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a527c7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a527cb jne 0x10a527cf */
  if (!C.zf) goto L_10a527cf;
  /* 10a527cd jmp 0x10a5282d */
  goto L_10a5282d;
L_10a527cf:;
  /* 10a527cf push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10a527d1 push 0x10a6ce04 */
  push32((uint32_t)(0x10a6ce04u));
  /* 10a527d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a527d8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a527db push ecx */
  push32((uint32_t)(ECX));
  /* 10a527dc call 0x10a44520 */
  push32(0x10a527e1u); f_10a44520();
  /* 10a527e1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a527e4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 10a527ea mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10a527ec mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10a527f2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a527f5 jne 0x10a527f9 */
  if (!C.zf) goto L_10a527f9;
  /* 10a527f7 jmp 0x10a5282d */
  goto L_10a5282d;
L_10a527f9:;
  /* 10a527f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a527fc push ecx */
  push32((uint32_t)(ECX));
  /* 10a527fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a52800 push edx */
  push32((uint32_t)(EDX));
  /* 10a52801 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10a52807 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a52809 push ecx */
  push32((uint32_t)(ECX));
  /* 10a5280a call 0x10a47d40 */
  push32(0x10a5280fu); f_10a47d40();
  /* 10a5280f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a52812 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a52816 je 0x10a52826 */
  if (C.zf) goto L_10a52826;
  /* 10a52818 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a5281a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a5281d push edx */
  push32((uint32_t)(EDX));
  /* 10a5281e call 0x10a44fb0 */
  push32(0x10a52823u); f_10a44fb0();
  /* 10a52823 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a52826:;
  /* 10a52826 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a52828 jmp 0x10a52966 */
  goto L_10a52966;
L_10a5282d:;
  /* 10a5282d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a52831 je 0x10a52841 */
  if (C.zf) goto L_10a52841;
  /* 10a52833 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a52835 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a52838 push eax */
  push32((uint32_t)(EAX));
  /* 10a52839 call 0x10a44fb0 */
  push32(0x10a5283eu); f_10a44fb0();
  /* 10a5283e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a52841:;
  /* 10a52841 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a52844 jmp 0x10a52966 */
  goto L_10a52966;
L_10a52849:;
  /* 10a52849 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5284d jne 0x10a52963 */
  if (!C.zf) goto L_10a52963;
  /* 10a52853 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 10a5285d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a52860 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 10a52866 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a52868 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10a5286e push edx */
  push32((uint32_t)(EDX));
  /* 10a5286f push 0x10a70890 */
  push32((uint32_t)(0x10a70890u));
  /* 10a52874 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a52877 push eax */
  push32((uint32_t)(EAX));
  /* 10a52878 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a5287b push ecx */
  push32((uint32_t)(ECX));
  /* 10a5287c call 0x10a53960 */
  push32(0x10a52881u); f_10a53960();
  /* 10a52881 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a52884 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a52886 jne 0x10a52890 */
  if (!C.zf) goto L_10a52890;
  /* 10a52888 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a5288b jmp 0x10a52966 */
  goto L_10a52966;
L_10a52890:;
  /* 10a52890 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10a52896 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10a52899 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 10a528a3 jmp 0x10a528b4 */
  goto L_10a528b4;
L_10a528a5:;
  /* 10a528a5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10a528ab add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a528ae mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_10a528b4:;
  /* 10a528b4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a528bb jge 0x10a5295f */
  if ((C.sf==C.of)) goto L_10a5295f;
  /* 10a528c1 cmp dword ptr [0x10a6eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10a6eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a528c8 jle 0x10a528fb */
  if ((C.zf||C.sf!=C.of)) goto L_10a528fb;
  /* 10a528ca push 4 */
  push32((uint32_t)(0x4u));
  /* 10a528cc mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10a528d2 mov dl, byte ptr [ecx*2 + 0x10a70890] */
  DL = (r8((uint32_t)(ECX*2 + 0x10a70890)));
  /* 10a528d9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10a528df mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10a528e5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a528ea push eax */
  push32((uint32_t)(EAX));
  /* 10a528eb call 0x10a4a530 */
  push32(0x10a528f0u); f_10a4a530();
  /* 10a528f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a528f3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10a528f9 jmp 0x10a5292e */
  goto L_10a5292e;
L_10a528fb:;
  /* 10a528fb mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10a52901 mov dl, byte ptr [ecx*2 + 0x10a70890] */
  DL = (r8((uint32_t)(ECX*2 + 0x10a70890)));
  /* 10a52908 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10a5290e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10a52914 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a52919 mov ecx, dword ptr [0x10a6ec98] */
  ECX = (r32((uint32_t)(0x10a6ec98)));
  /* 10a5291f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a52921 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10a52925 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10a52928 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_10a5292e:;
  /* 10a5292e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a52935 je 0x10a52958 */
  if (C.zf) goto L_10a52958;
  /* 10a52937 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10a5293d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a52940 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a52943 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 10a5294a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10a5294e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10a52954 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10a52956 jmp 0x10a5295a */
  goto L_10a5295a;
L_10a52958:;
  /* 10a52958 jmp 0x10a5295f */
  goto L_10a5295f;
L_10a5295a:;
  /* 10a5295a jmp 0x10a528a5 */
  goto L_10a528a5;
L_10a5295f:;
  /* 10a5295f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a52961 jmp 0x10a52966 */
  goto L_10a52966;
L_10a52963:;
  /* 10a52963 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10a52966:;
  /* 10a52966 mov esp, ebp */
  ESP = (EBP);
  /* 10a52968 pop ebp */
  EBP = (pop32());
  /* 10a52969 ret  */
  ESPCHK(0x10a526e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012970 @ 0x10a52970 (10 bytes, 5 insns) */
void f_10a52970(void) {
  FTRACE(0x10a52970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a52970 push ebp */
  push32((uint32_t)(EBP));
  /* 10a52971 mov ebp, esp */
  EBP = (ESP);
  /* 10a52973 mov eax, dword ptr [0x10a6fd88] */
  EAX = (r32((uint32_t)(0x10a6fd88)));
  /* 10a52978 pop ebp */
  EBP = (pop32());
  /* 10a52979 ret  */
  ESPCHK(0x10a52970u, _esp0);
  ESP += 4; return;
}

/* FUN_10012980 @ 0x10a52980 (575 bytes, 196 insns) */
void f_10a52980(void) {
  FTRACE(0x10a52980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a52980 push ebp */
  push32((uint32_t)(EBP));
  /* 10a52981 mov ebp, esp */
  EBP = (ESP);
  /* 10a52983 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10a52985 push 0x10a6ce10 */
  push32((uint32_t)(0x10a6ce10u));
  /* 10a5298a push 0x10a4d628 */
  push32((uint32_t)(0x10a4d628u));
  /* 10a5298f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10a52995 push eax */
  push32((uint32_t)(EAX));
  /* 10a52996 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10a5299d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a529a0 push ebx */
  push32((uint32_t)(EBX));
  /* 10a529a1 push esi */
  push32((uint32_t)(ESI));
  /* 10a529a2 push edi */
  push32((uint32_t)(EDI));
  /* 10a529a3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10a529a6 cmp dword ptr [0x10a7089c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a7089c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a529ad jne 0x10a529fe */
  if (!C.zf) goto L_10a529fe;
  /* 10a529af lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10a529b2 push eax */
  push32((uint32_t)(EAX));
  /* 10a529b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a529b5 push 0x10a6c544 */
  push32((uint32_t)(0x10a6c544u));
  /* 10a529ba push 1 */
  push32((uint32_t)(0x1u));
  /* 10a529bc call dword ptr [0x10a732bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732bc))), 0x10a529c2u);
  /* 10a529c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a529c4 je 0x10a529d2 */
  if (C.zf) goto L_10a529d2;
  /* 10a529c6 mov dword ptr [0x10a7089c], 1 */
  w32((uint32_t)(0x10a7089c), (0x1u));
  /* 10a529d0 jmp 0x10a529fe */
  goto L_10a529fe;
L_10a529d2:;
  /* 10a529d2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10a529d5 push ecx */
  push32((uint32_t)(ECX));
  /* 10a529d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a529d8 push 0x10a6c540 */
  push32((uint32_t)(0x10a6c540u));
  /* 10a529dd push 1 */
  push32((uint32_t)(0x1u));
  /* 10a529df push 0 */
  push32((uint32_t)(0x0u));
  /* 10a529e1 call dword ptr [0x10a732cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732cc))), 0x10a529e7u);
  /* 10a529e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a529e9 je 0x10a529f7 */
  if (C.zf) goto L_10a529f7;
  /* 10a529eb mov dword ptr [0x10a7089c], 2 */
  w32((uint32_t)(0x10a7089c), (0x2u));
  /* 10a529f5 jmp 0x10a529fe */
  goto L_10a529fe;
L_10a529f7:;
  /* 10a529f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a529f9 jmp 0x10a52bd9 */
  goto L_10a52bd9;
L_10a529fe:;
  /* 10a529fe cmp dword ptr [0x10a7089c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10a7089c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a52a05 jne 0x10a52a22 */
  if (!C.zf) goto L_10a52a22;
  /* 10a52a07 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a52a0a push edx */
  push32((uint32_t)(EDX));
  /* 10a52a0b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a52a0e push eax */
  push32((uint32_t)(EAX));
  /* 10a52a0f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a52a12 push ecx */
  push32((uint32_t)(ECX));
  /* 10a52a13 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a52a16 push edx */
  push32((uint32_t)(EDX));
  /* 10a52a17 call dword ptr [0x10a732bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732bc))), 0x10a52a1du);
  /* 10a52a1d jmp 0x10a52bd9 */
  goto L_10a52bd9;
L_10a52a22:;
  /* 10a52a22 cmp dword ptr [0x10a7089c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10a7089c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a52a29 jne 0x10a52bd7 */
  if (!C.zf) goto L_10a52bd7;
  /* 10a52a2f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a52a33 jne 0x10a52a3d */
  if (!C.zf) goto L_10a52a3d;
  /* 10a52a35 mov eax, dword ptr [0x10a70810] */
  EAX = (r32((uint32_t)(0x10a70810)));
  /* 10a52a3a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_10a52a3d:;
  /* 10a52a3d push 0 */
  push32((uint32_t)(0x0u));
  /* 10a52a3f push 0 */
  push32((uint32_t)(0x0u));
  /* 10a52a41 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a52a43 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a52a45 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a52a48 push ecx */
  push32((uint32_t)(ECX));
  /* 10a52a49 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a52a4c push edx */
  push32((uint32_t)(EDX));
  /* 10a52a4d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10a52a52 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a52a55 push eax */
  push32((uint32_t)(EAX));
  /* 10a52a56 call dword ptr [0x10a73354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73354))), 0x10a52a5cu);
  /* 10a52a5c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10a52a5f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a52a63 jne 0x10a52a6c */
  if (!C.zf) goto L_10a52a6c;
  /* 10a52a65 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a52a67 jmp 0x10a52bd9 */
  goto L_10a52bd9;
L_10a52a6c:;
  /* 10a52a6c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a52a73 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a52a76 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a52a79 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10a52a7b call 0x10a476c0 */
  push32(0x10a52a80u); f_10a476c0();
  /* 10a52a80 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10a52a83 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10a52a86 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10a52a89 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10a52a8c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a52a8f push edx */
  push32((uint32_t)(EDX));
  /* 10a52a90 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a52a92 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a52a95 push eax */
  push32((uint32_t)(EAX));
  /* 10a52a96 call 0x10a48290 */
  push32(0x10a52a9bu); f_10a48290();
  /* 10a52a9b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a52a9e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10a52aa5 jmp 0x10a52abe */
  goto L_10a52abe;
  /* 10a52aa7 mov eax, 1 */
  EAX = (0x1u);
  /* 10a52aac ret  */
  ESPCHK(0x10a52980u, _esp0);
  ESP += 4; return;
  /* 10a52aad mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10a52ab0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10a52ab7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10a52abe:;
  /* 10a52abe cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a52ac2 jne 0x10a52acb */
  if (!C.zf) goto L_10a52acb;
  /* 10a52ac4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a52ac6 jmp 0x10a52bd9 */
  goto L_10a52bd9;
L_10a52acb:;
  /* 10a52acb push 0 */
  push32((uint32_t)(0x0u));
  /* 10a52acd push 0 */
  push32((uint32_t)(0x0u));
  /* 10a52acf mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a52ad2 push ecx */
  push32((uint32_t)(ECX));
  /* 10a52ad3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a52ad6 push edx */
  push32((uint32_t)(EDX));
  /* 10a52ad7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a52ada push eax */
  push32((uint32_t)(EAX));
  /* 10a52adb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a52ade push ecx */
  push32((uint32_t)(ECX));
  /* 10a52adf push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10a52ae4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a52ae7 push edx */
  push32((uint32_t)(EDX));
  /* 10a52ae8 call dword ptr [0x10a73354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73354))), 0x10a52aeeu);
  /* 10a52aee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a52af0 jne 0x10a52af9 */
  if (!C.zf) goto L_10a52af9;
  /* 10a52af2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a52af4 jmp 0x10a52bd9 */
  goto L_10a52bd9;
L_10a52af9:;
  /* 10a52af9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10a52b00 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a52b03 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 10a52b07 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a52b0a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10a52b0c call 0x10a476c0 */
  push32(0x10a52b11u); f_10a476c0();
  /* 10a52b11 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 10a52b14 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10a52b17 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10a52b1a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10a52b1d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10a52b24 jmp 0x10a52b3d */
  goto L_10a52b3d;
  /* 10a52b26 mov eax, 1 */
  EAX = (0x1u);
  /* 10a52b2b ret  */
  ESPCHK(0x10a52980u, _esp0);
  ESP += 4; return;
  /* 10a52b2c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10a52b2f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10a52b36 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10a52b3d:;
  /* 10a52b3d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a52b41 jne 0x10a52b4a */
  if (!C.zf) goto L_10a52b4a;
  /* 10a52b43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a52b45 jmp 0x10a52bd9 */
  goto L_10a52bd9;
L_10a52b4a:;
  /* 10a52b4a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a52b4e jne 0x10a52b59 */
  if (!C.zf) goto L_10a52b59;
  /* 10a52b50 mov edx, dword ptr [0x10a70800] */
  EDX = (r32((uint32_t)(0x10a70800)));
  /* 10a52b56 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_10a52b59:;
  /* 10a52b59 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a52b5c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a52b5f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 10a52b65 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a52b68 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a52b6b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 10a52b72 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a52b75 push ecx */
  push32((uint32_t)(ECX));
  /* 10a52b76 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a52b79 push edx */
  push32((uint32_t)(EDX));
  /* 10a52b7a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10a52b7d push eax */
  push32((uint32_t)(EAX));
  /* 10a52b7e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a52b81 push ecx */
  push32((uint32_t)(ECX));
  /* 10a52b82 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10a52b85 push edx */
  push32((uint32_t)(EDX));
  /* 10a52b86 call dword ptr [0x10a732cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732cc))), 0x10a52b8cu);
  /* 10a52b8c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10a52b8f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a52b92 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a52b95 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a52b97 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 10a52b9c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a52ba2 je 0x10a52bb8 */
  if (C.zf) goto L_10a52bb8;
  /* 10a52ba4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a52ba7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a52baa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a52bac mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10a52bb0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a52bb6 je 0x10a52bbc */
  if (C.zf) goto L_10a52bbc;
L_10a52bb8:;
  /* 10a52bb8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a52bba jmp 0x10a52bd9 */
  goto L_10a52bd9;
L_10a52bbc:;
  /* 10a52bbc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a52bbf shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10a52bc1 push eax */
  push32((uint32_t)(EAX));
  /* 10a52bc2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a52bc5 push ecx */
  push32((uint32_t)(ECX));
  /* 10a52bc6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a52bc9 push edx */
  push32((uint32_t)(EDX));
  /* 10a52bca call 0x10a4c410 */
  push32(0x10a52bcfu); f_10a4c410();
  /* 10a52bcf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a52bd2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a52bd5 jmp 0x10a52bd9 */
  goto L_10a52bd9;
L_10a52bd7:;
  /* 10a52bd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a52bd9:;
  /* 10a52bd9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 10a52bdc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a52bdf mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10a52be6 pop edi */
  EDI = (pop32());
  /* 10a52be7 pop esi */
  ESI = (pop32());
  /* 10a52be8 pop ebx */
  EBX = (pop32());
  /* 10a52be9 mov esp, ebp */
  ESP = (EBP);
  /* 10a52beb pop ebp */
  EBP = (pop32());
  /* 10a52bec ret  */
  ESPCHK(0x10a52980u, _esp0);
  ESP += 4; return;
}

/* FUN_10012bf0 @ 0x10a52bf0 (208 bytes, 85 insns) */
void f_10a52bf0(void) {
  FTRACE(0x10a52bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a52bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a52bf1 mov ebp, esp */
  EBP = (ESP);
  /* 10a52bf3 push edi */
  push32((uint32_t)(EDI));
  /* 10a52bf4 push esi */
  push32((uint32_t)(ESI));
  /* 10a52bf5 push ebx */
  push32((uint32_t)(EBX));
  /* 10a52bf6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10a52bf9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10a52bfc lea eax, [0x10a707f8] */
  EAX = ((uint32_t)(0x10a707f8));
  /* 10a52c02 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a52c06 jne 0x10a52c43 */
  if (!C.zf) goto L_10a52c43;
  /* 10a52c08 mov al, 0xff */
  AL = (0xffu);
  /* 10a52c0a mov edi, edi */
  EDI = (EDI);
L_10a52c0c:;
  /* 10a52c0c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10a52c0e je 0x10a52c3e */
  if (C.zf) goto L_10a52c3e;
  /* 10a52c10 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a52c12 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10a52c13 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 10a52c15 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10a52c16 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a52c18 je 0x10a52c0c */
  if (C.zf) goto L_10a52c0c;
  /* 10a52c1a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10a52c1c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a52c1e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10a52c20 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10a52c23 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10a52c25 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10a52c27 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 10a52c29 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10a52c2b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a52c2d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10a52c2f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10a52c32 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10a52c34 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10a52c36 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a52c38 je 0x10a52c0c */
  if (C.zf) goto L_10a52c0c;
  /* 10a52c3a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10a52c3c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_10a52c3e:;
  /* 10a52c3e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 10a52c41 jmp 0x10a52cbb */
  goto L_10a52cbb;
L_10a52c43:;
  /* 10a52c43 lock inc dword ptr [0x10a7098c] */
  x86_unimpl("lock inc @ 0x10a52c43");
  /* 10a52c4a cmp dword ptr [0x10a7097c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a7097c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a52c51 jg 0x10a52c57 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a52c57;
  /* 10a52c53 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a52c55 jmp 0x10a52c6c */
  goto L_10a52c6c;
L_10a52c57:;
  /* 10a52c57 lock dec dword ptr [0x10a7098c] */
  x86_unimpl("lock dec @ 0x10a52c57");
  /* 10a52c5e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10a52c60 call 0x10a47f20 */
  push32(0x10a52c65u); f_10a47f20();
  /* 10a52c65 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_10a52c6c:;
  /* 10a52c6c mov eax, 0xff */
  EAX = (0xffu);
  /* 10a52c71 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10a52c73 nop  */
  /* nop */
L_10a52c74:;
  /* 10a52c74 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10a52c76 je 0x10a52c9f */
  if (C.zf) goto L_10a52c9f;
  /* 10a52c78 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a52c7a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10a52c7b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10a52c7d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10a52c7e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a52c80 je 0x10a52c74 */
  if (C.zf) goto L_10a52c74;
  /* 10a52c82 push eax */
  push32((uint32_t)(EAX));
  /* 10a52c83 push ebx */
  push32((uint32_t)(EBX));
  /* 10a52c84 call 0x10a53d60 */
  push32(0x10a52c89u); f_10a53d60();
  /* 10a52c89 mov ebx, eax */
  EBX = (EAX);
  /* 10a52c8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a52c8e call 0x10a53d60 */
  push32(0x10a52c93u); f_10a53d60();
  /* 10a52c93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a52c96 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a52c98 je 0x10a52c74 */
  if (C.zf) goto L_10a52c74;
  /* 10a52c9a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a52c9c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10a52c9f:;
  /* 10a52c9f mov ebx, eax */
  EBX = (EAX);
  /* 10a52ca1 pop eax */
  EAX = (pop32());
  /* 10a52ca2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a52ca4 jne 0x10a52caf */
  if (!C.zf) goto L_10a52caf;
  /* 10a52ca6 lock dec dword ptr [0x10a7098c] */
  x86_unimpl("lock dec @ 0x10a52ca6");
  /* 10a52cad jmp 0x10a52cb9 */
  goto L_10a52cb9;
L_10a52caf:;
  /* 10a52caf push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10a52cb1 call 0x10a47fc0 */
  push32(0x10a52cb6u); f_10a47fc0();
  /* 10a52cb6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a52cb9:;
  /* 10a52cb9 mov eax, ebx */
  EAX = (EBX);
L_10a52cbb:;
  /* 10a52cbb pop ebx */
  EBX = (pop32());
  /* 10a52cbc pop esi */
  ESI = (pop32());
  /* 10a52cbd pop edi */
  EDI = (pop32());
  /* 10a52cbe leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a52cbf ret  */
  ESPCHK(0x10a52bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012cc0 @ 0x10a52cc0 (257 bytes, 103 insns) */
void f_10a52cc0(void) {
  FTRACE(0x10a52cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a52cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a52cc1 mov ebp, esp */
  EBP = (ESP);
  /* 10a52cc3 push edi */
  push32((uint32_t)(EDI));
  /* 10a52cc4 push esi */
  push32((uint32_t)(ESI));
  /* 10a52cc5 push ebx */
  push32((uint32_t)(EBX));
  /* 10a52cc6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a52cc9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a52ccb je 0x10a52dba */
  if (C.zf) goto L_10a52dba;
  /* 10a52cd1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10a52cd4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10a52cd7 lea eax, [0x10a707f8] */
  EAX = ((uint32_t)(0x10a707f8));
  /* 10a52cdd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a52ce1 jne 0x10a52d31 */
  if (!C.zf) goto L_10a52d31;
  /* 10a52ce3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 10a52ce5 mov bl, 0x5a */
  BL = (0x5au);
  /* 10a52ce7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 10a52ce9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10a52cec:;
  /* 10a52cec mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 10a52cee or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10a52cf0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 10a52cf2 je 0x10a52d15 */
  if (C.zf) goto L_10a52d15;
  /* 10a52cf4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10a52cf6 je 0x10a52d15 */
  if (C.zf) goto L_10a52d15;
  /* 10a52cf8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10a52cf9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10a52cfa cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a52cfc jb 0x10a52d04 */
  if (C.cf) goto L_10a52d04;
  /* 10a52cfe cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a52d00 ja 0x10a52d04 */
  if ((!C.cf&&!C.zf)) goto L_10a52d04;
  /* 10a52d02 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_10a52d04:;
  /* 10a52d04 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a52d06 jb 0x10a52d0e */
  if (C.cf) goto L_10a52d0e;
  /* 10a52d08 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a52d0a ja 0x10a52d0e */
  if ((!C.cf&&!C.zf)) goto L_10a52d0e;
  /* 10a52d0c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_10a52d0e:;
  /* 10a52d0e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a52d10 jne 0x10a52d1f */
  if (!C.zf) goto L_10a52d1f;
  /* 10a52d12 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10a52d13 jne 0x10a52cec */
  if (!C.zf) goto L_10a52cec;
L_10a52d15:;
  /* 10a52d15 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a52d17 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a52d19 je 0x10a52dba */
  if (C.zf) goto L_10a52dba;
L_10a52d1f:;
  /* 10a52d1f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10a52d24 jb 0x10a52dba */
  if (C.cf) goto L_10a52dba;
  /* 10a52d2a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a52d2c jmp 0x10a52dba */
  goto L_10a52dba;
L_10a52d31:;
  /* 10a52d31 lock inc dword ptr [0x10a7098c] */
  x86_unimpl("lock inc @ 0x10a52d31");
  /* 10a52d38 cmp dword ptr [0x10a7097c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a7097c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a52d3f jg 0x10a52d45 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a52d45;
  /* 10a52d41 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a52d43 jmp 0x10a52d5e */
  goto L_10a52d5e;
L_10a52d45:;
  /* 10a52d45 lock dec dword ptr [0x10a7098c] */
  x86_unimpl("lock dec @ 0x10a52d45");
  /* 10a52d4c mov ebx, ecx */
  EBX = (ECX);
  /* 10a52d4e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10a52d50 call 0x10a47f20 */
  push32(0x10a52d55u); f_10a47f20();
  /* 10a52d55 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 10a52d5c mov ecx, ebx */
  ECX = (EBX);
L_10a52d5e:;
  /* 10a52d5e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a52d60 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10a52d62 mov edi, edi */
  EDI = (EDI);
L_10a52d64:;
  /* 10a52d64 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10a52d66 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a52d68 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10a52d6a je 0x10a52d8f */
  if (C.zf) goto L_10a52d8f;
  /* 10a52d6c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10a52d6e je 0x10a52d8f */
  if (C.zf) goto L_10a52d8f;
  /* 10a52d70 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10a52d71 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10a52d72 push ecx */
  push32((uint32_t)(ECX));
  /* 10a52d73 push eax */
  push32((uint32_t)(EAX));
  /* 10a52d74 push ebx */
  push32((uint32_t)(EBX));
  /* 10a52d75 call 0x10a53d60 */
  push32(0x10a52d7au); f_10a53d60();
  /* 10a52d7a mov ebx, eax */
  EBX = (EAX);
  /* 10a52d7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a52d7f call 0x10a53d60 */
  push32(0x10a52d84u); f_10a53d60();
  /* 10a52d84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a52d87 pop ecx */
  ECX = (pop32());
  /* 10a52d88 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a52d8a jne 0x10a52d95 */
  if (!C.zf) goto L_10a52d95;
  /* 10a52d8c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10a52d8d jne 0x10a52d64 */
  if (!C.zf) goto L_10a52d64;
L_10a52d8f:;
  /* 10a52d8f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a52d91 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a52d93 je 0x10a52d9e */
  if (C.zf) goto L_10a52d9e;
L_10a52d95:;
  /* 10a52d95 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10a52d9a jb 0x10a52d9e */
  if (C.cf) goto L_10a52d9e;
  /* 10a52d9c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_10a52d9e:;
  /* 10a52d9e pop eax */
  EAX = (pop32());
  /* 10a52d9f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a52da1 jne 0x10a52dac */
  if (!C.zf) goto L_10a52dac;
  /* 10a52da3 lock dec dword ptr [0x10a7098c] */
  x86_unimpl("lock dec @ 0x10a52da3");
  /* 10a52daa jmp 0x10a52dba */
  goto L_10a52dba;
L_10a52dac:;
  /* 10a52dac mov ebx, ecx */
  EBX = (ECX);
  /* 10a52dae push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10a52db0 call 0x10a47fc0 */
  push32(0x10a52db5u); f_10a47fc0();
  /* 10a52db5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a52db8 mov ecx, ebx */
  ECX = (EBX);
L_10a52dba:;
  /* 10a52dba mov eax, ecx */
  EAX = (ECX);
  /* 10a52dbc pop ebx */
  EBX = (pop32());
  /* 10a52dbd pop esi */
  ESI = (pop32());
  /* 10a52dbe pop edi */
  EDI = (pop32());
  /* 10a52dbf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10a52dc0 ret  */
  ESPCHK(0x10a52cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012dd0 @ 0x10a52dd0 (255 bytes, 88 insns) */
void f_10a52dd0(void) {
  FTRACE(0x10a52dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a52dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a52dd1 mov ebp, esp */
  EBP = (ESP);
  /* 10a52dd3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10a52dd6:;
  /* 10a52dd6 cmp dword ptr [0x10a6eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10a6eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a52ddd jle 0x10a52df6 */
  if ((C.zf||C.sf!=C.of)) goto L_10a52df6;
  /* 10a52ddf push 8 */
  push32((uint32_t)(0x8u));
  /* 10a52de1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a52de4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a52de6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a52de8 push ecx */
  push32((uint32_t)(ECX));
  /* 10a52de9 call 0x10a4a530 */
  push32(0x10a52deeu); f_10a4a530();
  /* 10a52dee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a52df1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10a52df4 jmp 0x10a52e0f */
  goto L_10a52e0f;
L_10a52df6:;
  /* 10a52df6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a52df9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a52dfb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a52dfd mov ecx, dword ptr [0x10a6ec98] */
  ECX = (r32((uint32_t)(0x10a6ec98)));
  /* 10a52e03 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a52e05 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10a52e09 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10a52e0c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10a52e0f:;
  /* 10a52e0f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a52e13 je 0x10a52e20 */
  if (C.zf) goto L_10a52e20;
  /* 10a52e15 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a52e18 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a52e1b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a52e1e jmp 0x10a52dd6 */
  goto L_10a52dd6;
L_10a52e20:;
  /* 10a52e20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a52e23 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a52e25 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a52e27 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a52e2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a52e2d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a52e30 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a52e33 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a52e36 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a52e39 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a52e3d je 0x10a52e45 */
  if (C.zf) goto L_10a52e45;
  /* 10a52e3f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a52e43 jne 0x10a52e58 */
  if (!C.zf) goto L_10a52e58;
L_10a52e45:;
  /* 10a52e45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a52e48 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a52e4a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a52e4c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a52e4f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a52e52 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a52e55 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10a52e58:;
  /* 10a52e58 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10a52e5f:;
  /* 10a52e5f cmp dword ptr [0x10a6eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10a6eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a52e66 jle 0x10a52e7b */
  if ((C.zf||C.sf!=C.of)) goto L_10a52e7b;
  /* 10a52e68 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a52e6a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a52e6d push edx */
  push32((uint32_t)(EDX));
  /* 10a52e6e call 0x10a4a530 */
  push32(0x10a52e73u); f_10a4a530();
  /* 10a52e73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a52e76 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10a52e79 jmp 0x10a52e90 */
  goto L_10a52e90;
L_10a52e7b:;
  /* 10a52e7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a52e7e mov ecx, dword ptr [0x10a6ec98] */
  ECX = (r32((uint32_t)(0x10a6ec98)));
  /* 10a52e84 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a52e86 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10a52e8a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10a52e8d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10a52e90:;
  /* 10a52e90 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a52e94 je 0x10a52ebb */
  if (C.zf) goto L_10a52ebb;
  /* 10a52e96 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a52e99 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a52e9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a52e9f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 10a52ea3 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10a52ea6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a52ea9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a52eab mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a52ead mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a52eb0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a52eb3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a52eb6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10a52eb9 jmp 0x10a52e5f */
  goto L_10a52e5f;
L_10a52ebb:;
  /* 10a52ebb cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a52ebf jne 0x10a52ec8 */
  if (!C.zf) goto L_10a52ec8;
  /* 10a52ec1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a52ec4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a52ec6 jmp 0x10a52ecb */
  goto L_10a52ecb;
L_10a52ec8:;
  /* 10a52ec8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10a52ecb:;
  /* 10a52ecb mov esp, ebp */
  ESP = (EBP);
  /* 10a52ecd pop ebp */
  EBP = (pop32());
  /* 10a52ece ret  */
  ESPCHK(0x10a52dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ed0 @ 0x10a52ed0 (17 bytes, 8 insns) */
void f_10a52ed0(void) {
  FTRACE(0x10a52ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a52ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a52ed1 mov ebp, esp */
  EBP = (ESP);
  /* 10a52ed3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a52ed6 push eax */
  push32((uint32_t)(EAX));
  /* 10a52ed7 call 0x10a52dd0 */
  push32(0x10a52edcu); f_10a52dd0();
  /* 10a52edc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a52edf pop ebp */
  EBP = (pop32());
  /* 10a52ee0 ret  */
  ESPCHK(0x10a52ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ef0 @ 0x10a52ef0 (297 bytes, 106 insns) */
void f_10a52ef0(void) {
  FTRACE(0x10a52ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a52ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a52ef1 mov ebp, esp */
  EBP = (ESP);
  /* 10a52ef3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a52ef6 push esi */
  push32((uint32_t)(ESI));
L_10a52ef7:;
  /* 10a52ef7 cmp dword ptr [0x10a6eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10a6eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a52efe jle 0x10a52f17 */
  if ((C.zf||C.sf!=C.of)) goto L_10a52f17;
  /* 10a52f00 push 8 */
  push32((uint32_t)(0x8u));
  /* 10a52f02 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a52f05 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a52f07 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a52f09 push ecx */
  push32((uint32_t)(ECX));
  /* 10a52f0a call 0x10a4a530 */
  push32(0x10a52f0fu); f_10a4a530();
  /* 10a52f0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a52f12 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10a52f15 jmp 0x10a52f30 */
  goto L_10a52f30;
L_10a52f17:;
  /* 10a52f17 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a52f1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a52f1c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a52f1e mov ecx, dword ptr [0x10a6ec98] */
  ECX = (r32((uint32_t)(0x10a6ec98)));
  /* 10a52f24 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a52f26 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10a52f2a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10a52f2d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10a52f30:;
  /* 10a52f30 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a52f34 je 0x10a52f41 */
  if (C.zf) goto L_10a52f41;
  /* 10a52f36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a52f39 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a52f3c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a52f3f jmp 0x10a52ef7 */
  goto L_10a52ef7;
L_10a52f41:;
  /* 10a52f41 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a52f44 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a52f46 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a52f48 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a52f4b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a52f4e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a52f51 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a52f54 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a52f57 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10a52f5a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a52f5e je 0x10a52f66 */
  if (C.zf) goto L_10a52f66;
  /* 10a52f60 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a52f64 jne 0x10a52f79 */
  if (!C.zf) goto L_10a52f79;
L_10a52f66:;
  /* 10a52f66 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a52f69 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a52f6b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a52f6d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a52f70 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a52f73 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a52f76 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10a52f79:;
  /* 10a52f79 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10a52f80 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10a52f87:;
  /* 10a52f87 cmp dword ptr [0x10a6eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10a6eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a52f8e jle 0x10a52fa3 */
  if ((C.zf||C.sf!=C.of)) goto L_10a52fa3;
  /* 10a52f90 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a52f92 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a52f95 push edx */
  push32((uint32_t)(EDX));
  /* 10a52f96 call 0x10a4a530 */
  push32(0x10a52f9bu); f_10a4a530();
  /* 10a52f9b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a52f9e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10a52fa1 jmp 0x10a52fb8 */
  goto L_10a52fb8;
L_10a52fa3:;
  /* 10a52fa3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a52fa6 mov ecx, dword ptr [0x10a6ec98] */
  ECX = (r32((uint32_t)(0x10a6ec98)));
  /* 10a52fac xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a52fae mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10a52fb2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10a52fb5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_10a52fb8:;
  /* 10a52fb8 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a52fbc je 0x10a52ff9 */
  if (C.zf) goto L_10a52ff9;
  /* 10a52fbe push 0 */
  push32((uint32_t)(0x0u));
  /* 10a52fc0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10a52fc2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a52fc5 push eax */
  push32((uint32_t)(EAX));
  /* 10a52fc6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a52fc9 push ecx */
  push32((uint32_t)(ECX));
  /* 10a52fca call 0x10a53e90 */
  push32(0x10a52fcfu); f_10a53e90();
  /* 10a52fcf mov ecx, eax */
  ECX = (EAX);
  /* 10a52fd1 mov esi, edx */
  ESI = (EDX);
  /* 10a52fd3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a52fd6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a52fd9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a52fda add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a52fdc adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a52fde mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a52fe1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 10a52fe4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a52fe7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a52fe9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a52feb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a52fee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a52ff1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a52ff4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10a52ff7 jmp 0x10a52f87 */
  goto L_10a52f87;
L_10a52ff9:;
  /* 10a52ff9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a52ffd jne 0x10a5300e */
  if (!C.zf) goto L_10a5300e;
  /* 10a52fff mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a53002 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a53004 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a53007 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5300a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a5300c jmp 0x10a53014 */
  goto L_10a53014;
L_10a5300e:;
  /* 10a5300e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a53011 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_10a53014:;
  /* 10a53014 pop esi */
  ESI = (pop32());
  /* 10a53015 mov esp, ebp */
  ESP = (EBP);
  /* 10a53017 pop ebp */
  EBP = (pop32());
  /* 10a53018 ret  */
  ESPCHK(0x10a52ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013020 @ 0x10a53020 (61 bytes, 18 insns) */
void f_10a53020(void) {
  FTRACE(0x10a53020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a53020 push ebp */
  push32((uint32_t)(EBP));
  /* 10a53021 mov ebp, esp */
  EBP = (ESP);
  /* 10a53023 cmp dword ptr [0x10a70958], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a70958))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5302a jne 0x10a5305b */
  if (!C.zf) goto L_10a5305b;
  /* 10a5302c push 0xb */
  push32((uint32_t)(0xbu));
  /* 10a5302e call 0x10a47f20 */
  push32(0x10a53033u); f_10a47f20();
  /* 10a53033 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a53036 cmp dword ptr [0x10a70958], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a70958))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5303d jne 0x10a53051 */
  if (!C.zf) goto L_10a53051;
  /* 10a5303f call 0x10a53080 */
  push32(0x10a53044u); f_10a53080();
  /* 10a53044 mov eax, dword ptr [0x10a70958] */
  EAX = (r32((uint32_t)(0x10a70958)));
  /* 10a53049 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5304c mov dword ptr [0x10a70958], eax */
  w32((uint32_t)(0x10a70958), (EAX));
L_10a53051:;
  /* 10a53051 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10a53053 call 0x10a47fc0 */
  push32(0x10a53058u); f_10a47fc0();
  /* 10a53058 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a5305b:;
  /* 10a5305b pop ebp */
  EBP = (pop32());
  /* 10a5305c ret  */
  ESPCHK(0x10a53020u, _esp0);
  ESP += 4; return;
}

/* FUN_10013060 @ 0x10a53060 (30 bytes, 11 insns) */
void f_10a53060(void) {
  FTRACE(0x10a53060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a53060 push ebp */
  push32((uint32_t)(EBP));
  /* 10a53061 mov ebp, esp */
  EBP = (ESP);
  /* 10a53063 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10a53065 call 0x10a47f20 */
  push32(0x10a5306au); f_10a47f20();
  /* 10a5306a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5306d call 0x10a53080 */
  push32(0x10a53072u); f_10a53080();
  /* 10a53072 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10a53074 call 0x10a47fc0 */
  push32(0x10a53079u); f_10a47fc0();
  /* 10a53079 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5307c pop ebp */
  EBP = (pop32());
  /* 10a5307d ret  */
  ESPCHK(0x10a53060u, _esp0);
  ESP += 4; return;
}

/* FUN_10013080 @ 0x10a53080 (939 bytes, 266 insns) */
void f_10a53080(void) {
  FTRACE(0x10a53080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a53080 push ebp */
  push32((uint32_t)(EBP));
  /* 10a53081 mov ebp, esp */
  EBP = (ESP);
  /* 10a53083 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a53086 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a5308d push 0xc */
  push32((uint32_t)(0xcu));
  /* 10a5308f call 0x10a47f20 */
  push32(0x10a53094u); f_10a47f20();
  /* 10a53094 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a53097 mov dword ptr [0x10a708a0], 0 */
  w32((uint32_t)(0x10a708a0), (0x0u));
  /* 10a530a1 mov dword ptr [0x10a6fe38], 0xffffffff */
  w32((uint32_t)(0x10a6fe38), (0xffffffffu));
  /* 10a530ab mov eax, dword ptr [0x10a6fe38] */
  EAX = (r32((uint32_t)(0x10a6fe38)));
  /* 10a530b0 mov dword ptr [0x10a6fe28], eax */
  w32((uint32_t)(0x10a6fe28), (EAX));
  /* 10a530b5 push 0x10a6ce70 */
  push32((uint32_t)(0x10a6ce70u));
  /* 10a530ba call 0x10a53f00 */
  push32(0x10a530bfu); f_10a53f00();
  /* 10a530bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a530c2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a530c5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a530c9 jne 0x10a53203 */
  if (!C.zf) goto L_10a53203;
  /* 10a530cf push 0xc */
  push32((uint32_t)(0xcu));
  /* 10a530d1 call 0x10a47fc0 */
  push32(0x10a530d6u); f_10a47fc0();
  /* 10a530d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a530d9 push 0x10a708a8 */
  push32((uint32_t)(0x10a708a8u));
  /* 10a530de call dword ptr [0x10a73280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73280))), 0x10a530e4u);
  /* 10a530e4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a530e7 je 0x10a531fe */
  if (C.zf) goto L_10a531fe;
  /* 10a530ed mov dword ptr [0x10a708a0], 1 */
  w32((uint32_t)(0x10a708a0), (0x1u));
  /* 10a530f7 mov ecx, dword ptr [0x10a708a8] */
  ECX = (r32((uint32_t)(0x10a708a8)));
  /* 10a530fd imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a53100 mov dword ptr [0x10a6fd90], ecx */
  w32((uint32_t)(0x10a6fd90), (ECX));
  /* 10a53106 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a53108 mov dx, word ptr [0x10a708ee] */
  DX = (r16((uint32_t)(0x10a708ee)));
  /* 10a5310f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a53111 je 0x10a53129 */
  if (C.zf) goto L_10a53129;
  /* 10a53113 mov eax, dword ptr [0x10a708fc] */
  EAX = (r32((uint32_t)(0x10a708fc)));
  /* 10a53118 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a5311b mov ecx, dword ptr [0x10a6fd90] */
  ECX = (r32((uint32_t)(0x10a6fd90)));
  /* 10a53121 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a53123 mov dword ptr [0x10a6fd90], ecx */
  w32((uint32_t)(0x10a6fd90), (ECX));
L_10a53129:;
  /* 10a53129 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a5312b mov dx, word ptr [0x10a70942] */
  DX = (r16((uint32_t)(0x10a70942)));
  /* 10a53132 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a53134 je 0x10a5315e */
  if (C.zf) goto L_10a5315e;
  /* 10a53136 cmp dword ptr [0x10a70950], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a70950))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5313d je 0x10a5315e */
  if (C.zf) goto L_10a5315e;
  /* 10a5313f mov dword ptr [0x10a6fd94], 1 */
  w32((uint32_t)(0x10a6fd94), (0x1u));
  /* 10a53149 mov eax, dword ptr [0x10a70950] */
  EAX = (r32((uint32_t)(0x10a70950)));
  /* 10a5314e sub eax, dword ptr [0x10a708fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10a708fc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a53154 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a53157 mov dword ptr [0x10a6fd98], eax */
  w32((uint32_t)(0x10a6fd98), (EAX));
  /* 10a5315c jmp 0x10a53172 */
  goto L_10a53172;
L_10a5315e:;
  /* 10a5315e mov dword ptr [0x10a6fd94], 0 */
  w32((uint32_t)(0x10a6fd94), (0x0u));
  /* 10a53168 mov dword ptr [0x10a6fd98], 0 */
  w32((uint32_t)(0x10a6fd98), (0x0u));
L_10a53172:;
  /* 10a53172 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10a53175 push ecx */
  push32((uint32_t)(ECX));
  /* 10a53176 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a53178 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10a5317a mov edx, dword ptr [0x10a6fe1c] */
  EDX = (r32((uint32_t)(0x10a6fe1c)));
  /* 10a53180 push edx */
  push32((uint32_t)(EDX));
  /* 10a53181 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10a53183 push 0x10a708ac */
  push32((uint32_t)(0x10a708acu));
  /* 10a53188 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10a5318d mov eax, dword ptr [0x10a70810] */
  EAX = (r32((uint32_t)(0x10a70810)));
  /* 10a53192 push eax */
  push32((uint32_t)(EAX));
  /* 10a53193 call dword ptr [0x10a73354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73354))), 0x10a53199u);
  /* 10a53199 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a5319b je 0x10a531af */
  if (C.zf) goto L_10a531af;
  /* 10a5319d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a531a1 jne 0x10a531af */
  if (!C.zf) goto L_10a531af;
  /* 10a531a3 mov ecx, dword ptr [0x10a6fe1c] */
  ECX = (r32((uint32_t)(0x10a6fe1c)));
  /* 10a531a9 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 10a531ad jmp 0x10a531b8 */
  goto L_10a531b8;
L_10a531af:;
  /* 10a531af mov edx, dword ptr [0x10a6fe1c] */
  EDX = (r32((uint32_t)(0x10a6fe1c)));
  /* 10a531b5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10a531b8:;
  /* 10a531b8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10a531bb push eax */
  push32((uint32_t)(EAX));
  /* 10a531bc push 0 */
  push32((uint32_t)(0x0u));
  /* 10a531be push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10a531c0 mov ecx, dword ptr [0x10a6fe20] */
  ECX = (r32((uint32_t)(0x10a6fe20)));
  /* 10a531c6 push ecx */
  push32((uint32_t)(ECX));
  /* 10a531c7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10a531c9 push 0x10a70900 */
  push32((uint32_t)(0x10a70900u));
  /* 10a531ce push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10a531d3 mov edx, dword ptr [0x10a70810] */
  EDX = (r32((uint32_t)(0x10a70810)));
  /* 10a531d9 push edx */
  push32((uint32_t)(EDX));
  /* 10a531da call dword ptr [0x10a73354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73354))), 0x10a531e0u);
  /* 10a531e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a531e2 je 0x10a531f5 */
  if (C.zf) goto L_10a531f5;
  /* 10a531e4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a531e8 jne 0x10a531f5 */
  if (!C.zf) goto L_10a531f5;
  /* 10a531ea mov eax, dword ptr [0x10a6fe20] */
  EAX = (r32((uint32_t)(0x10a6fe20)));
  /* 10a531ef mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 10a531f3 jmp 0x10a531fe */
  goto L_10a531fe;
L_10a531f5:;
  /* 10a531f5 mov ecx, dword ptr [0x10a6fe20] */
  ECX = (r32((uint32_t)(0x10a6fe20)));
  /* 10a531fb mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_10a531fe:;
  /* 10a531fe jmp 0x10a53427 */
  goto L_10a53427;
L_10a53203:;
  /* 10a53203 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a53206 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a53209 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a5320b je 0x10a5322d */
  if (C.zf) goto L_10a5322d;
  /* 10a5320d cmp dword ptr [0x10a70954], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a70954))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a53214 je 0x10a5323c */
  if (C.zf) goto L_10a5323c;
  /* 10a53216 mov ecx, dword ptr [0x10a70954] */
  ECX = (r32((uint32_t)(0x10a70954)));
  /* 10a5321c push ecx */
  push32((uint32_t)(ECX));
  /* 10a5321d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a53220 push edx */
  push32((uint32_t)(EDX));
  /* 10a53221 call 0x10a501b0 */
  push32(0x10a53226u); f_10a501b0();
  /* 10a53226 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a53229 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a5322b jne 0x10a5323c */
  if (!C.zf) goto L_10a5323c;
L_10a5322d:;
  /* 10a5322d push 0xc */
  push32((uint32_t)(0xcu));
  /* 10a5322f call 0x10a47fc0 */
  push32(0x10a53234u); f_10a47fc0();
  /* 10a53234 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a53237 jmp 0x10a53427 */
  goto L_10a53427;
L_10a5323c:;
  /* 10a5323c push 2 */
  push32((uint32_t)(0x2u));
  /* 10a5323e mov eax, dword ptr [0x10a70954] */
  EAX = (r32((uint32_t)(0x10a70954)));
  /* 10a53243 push eax */
  push32((uint32_t)(EAX));
  /* 10a53244 call 0x10a44fb0 */
  push32(0x10a53249u); f_10a44fb0();
  /* 10a53249 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5324c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 10a53251 push 0x10a6ce68 */
  push32((uint32_t)(0x10a6ce68u));
  /* 10a53256 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a53258 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a5325b push ecx */
  push32((uint32_t)(ECX));
  /* 10a5325c call 0x10a47350 */
  push32(0x10a53261u); f_10a47350();
  /* 10a53261 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a53264 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a53267 push eax */
  push32((uint32_t)(EAX));
  /* 10a53268 call 0x10a44520 */
  push32(0x10a5326du); f_10a44520();
  /* 10a5326d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a53270 mov dword ptr [0x10a70954], eax */
  w32((uint32_t)(0x10a70954), (EAX));
  /* 10a53275 cmp dword ptr [0x10a70954], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a70954))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5327c jne 0x10a5328d */
  if (!C.zf) goto L_10a5328d;
  /* 10a5327e push 0xc */
  push32((uint32_t)(0xcu));
  /* 10a53280 call 0x10a47fc0 */
  push32(0x10a53285u); f_10a47fc0();
  /* 10a53285 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a53288 jmp 0x10a53427 */
  goto L_10a53427;
L_10a5328d:;
  /* 10a5328d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a53290 push edx */
  push32((uint32_t)(EDX));
  /* 10a53291 mov eax, dword ptr [0x10a70954] */
  EAX = (r32((uint32_t)(0x10a70954)));
  /* 10a53296 push eax */
  push32((uint32_t)(EAX));
  /* 10a53297 call 0x10a474d0 */
  push32(0x10a5329cu); f_10a474d0();
  /* 10a5329c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5329f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10a532a1 call 0x10a47fc0 */
  push32(0x10a532a6u); f_10a47fc0();
  /* 10a532a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a532a9 push 3 */
  push32((uint32_t)(0x3u));
  /* 10a532ab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a532ae push ecx */
  push32((uint32_t)(ECX));
  /* 10a532af mov edx, dword ptr [0x10a6fe1c] */
  EDX = (r32((uint32_t)(0x10a6fe1c)));
  /* 10a532b5 push edx */
  push32((uint32_t)(EDX));
  /* 10a532b6 call 0x10a47d40 */
  push32(0x10a532bbu); f_10a47d40();
  /* 10a532bb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a532be mov eax, dword ptr [0x10a6fe1c] */
  EAX = (r32((uint32_t)(0x10a6fe1c)));
  /* 10a532c3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 10a532c7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a532ca add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a532cd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a532d0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a532d3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a532d6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a532d9 jne 0x10a532ed */
  if (!C.zf) goto L_10a532ed;
  /* 10a532db mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a532de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a532e1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a532e4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a532e7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a532ea mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10a532ed:;
  /* 10a532ed mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a532f0 push eax */
  push32((uint32_t)(EAX));
  /* 10a532f1 call 0x10a52dd0 */
  push32(0x10a532f6u); f_10a52dd0();
  /* 10a532f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a532f9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a532ff mov dword ptr [0x10a6fd90], eax */
  w32((uint32_t)(0x10a6fd90), (EAX));
L_10a53304:;
  /* 10a53304 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a53307 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a5330a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5330d je 0x10a53325 */
  if (C.zf) goto L_10a53325;
  /* 10a5330f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a53312 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a53315 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a53318 jl 0x10a53330 */
  if ((C.sf!=C.of)) goto L_10a53330;
  /* 10a5331a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a5331d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a53320 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a53323 jg 0x10a53330 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a53330;
L_10a53325:;
  /* 10a53325 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a53328 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5332b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a5332e jmp 0x10a53304 */
  goto L_10a53304;
L_10a53330:;
  /* 10a53330 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a53333 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a53336 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a53339 jne 0x10a533d5 */
  if (!C.zf) goto L_10a533d5;
  /* 10a5333f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a53342 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a53345 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a53348 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a5334b push edx */
  push32((uint32_t)(EDX));
  /* 10a5334c call 0x10a52dd0 */
  push32(0x10a53351u); f_10a52dd0();
  /* 10a53351 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a53354 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a53357 mov ecx, dword ptr [0x10a6fd90] */
  ECX = (r32((uint32_t)(0x10a6fd90)));
  /* 10a5335d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5335f mov dword ptr [0x10a6fd90], ecx */
  w32((uint32_t)(0x10a6fd90), (ECX));
L_10a53365:;
  /* 10a53365 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a53368 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a5336b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5336e jl 0x10a53386 */
  if ((C.sf!=C.of)) goto L_10a53386;
  /* 10a53370 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a53373 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a53376 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a53379 jg 0x10a53386 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a53386;
  /* 10a5337b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a5337e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a53381 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a53384 jmp 0x10a53365 */
  goto L_10a53365;
L_10a53386:;
  /* 10a53386 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a53389 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a5338c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5338f jne 0x10a533d5 */
  if (!C.zf) goto L_10a533d5;
  /* 10a53391 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a53394 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a53397 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a5339a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a5339d push ecx */
  push32((uint32_t)(ECX));
  /* 10a5339e call 0x10a52dd0 */
  push32(0x10a533a3u); f_10a52dd0();
  /* 10a533a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a533a6 mov edx, dword ptr [0x10a6fd90] */
  EDX = (r32((uint32_t)(0x10a6fd90)));
  /* 10a533ac add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a533ae mov dword ptr [0x10a6fd90], edx */
  w32((uint32_t)(0x10a6fd90), (EDX));
L_10a533b4:;
  /* 10a533b4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a533b7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a533ba cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a533bd jl 0x10a533d5 */
  if ((C.sf!=C.of)) goto L_10a533d5;
  /* 10a533bf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a533c2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10a533c5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a533c8 jg 0x10a533d5 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a533d5;
  /* 10a533ca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a533cd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a533d0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a533d3 jmp 0x10a533b4 */
  goto L_10a533b4;
L_10a533d5:;
  /* 10a533d5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a533d9 je 0x10a533e9 */
  if (C.zf) goto L_10a533e9;
  /* 10a533db mov edx, dword ptr [0x10a6fd90] */
  EDX = (r32((uint32_t)(0x10a6fd90)));
  /* 10a533e1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a533e3 mov dword ptr [0x10a6fd90], edx */
  w32((uint32_t)(0x10a6fd90), (EDX));
L_10a533e9:;
  /* 10a533e9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a533ec movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10a533ef mov dword ptr [0x10a6fd94], ecx */
  w32((uint32_t)(0x10a6fd94), (ECX));
  /* 10a533f5 cmp dword ptr [0x10a6fd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a6fd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a533fc je 0x10a5341e */
  if (C.zf) goto L_10a5341e;
  /* 10a533fe push 3 */
  push32((uint32_t)(0x3u));
  /* 10a53400 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a53403 push edx */
  push32((uint32_t)(EDX));
  /* 10a53404 mov eax, dword ptr [0x10a6fe20] */
  EAX = (r32((uint32_t)(0x10a6fe20)));
  /* 10a53409 push eax */
  push32((uint32_t)(EAX));
  /* 10a5340a call 0x10a47d40 */
  push32(0x10a5340fu); f_10a47d40();
  /* 10a5340f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a53412 mov ecx, dword ptr [0x10a6fe20] */
  ECX = (r32((uint32_t)(0x10a6fe20)));
  /* 10a53418 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 10a5341c jmp 0x10a53427 */
  goto L_10a53427;
L_10a5341e:;
  /* 10a5341e mov edx, dword ptr [0x10a6fe20] */
  EDX = (r32((uint32_t)(0x10a6fe20)));
  /* 10a53424 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10a53427:;
  /* 10a53427 mov esp, ebp */
  ESP = (EBP);
  /* 10a53429 pop ebp */
  EBP = (pop32());
  /* 10a5342a ret  */
  ESPCHK(0x10a53080u, _esp0);
  ESP += 4; return;
}

/* FUN_10013430 @ 0x10a53430 (46 bytes, 18 insns) */
void f_10a53430(void) {
  FTRACE(0x10a53430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a53430 push ebp */
  push32((uint32_t)(EBP));
  /* 10a53431 mov ebp, esp */
  EBP = (ESP);
  /* 10a53433 push ecx */
  push32((uint32_t)(ECX));
  /* 10a53434 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10a53436 call 0x10a47f20 */
  push32(0x10a5343bu); f_10a47f20();
  /* 10a5343b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5343e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a53441 push eax */
  push32((uint32_t)(EAX));
  /* 10a53442 call 0x10a53460 */
  push32(0x10a53447u); f_10a53460();
  /* 10a53447 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5344a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a5344d push 0xb */
  push32((uint32_t)(0xbu));
  /* 10a5344f call 0x10a47fc0 */
  push32(0x10a53454u); f_10a47fc0();
  /* 10a53454 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a53457 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a5345a mov esp, ebp */
  ESP = (EBP);
  /* 10a5345c pop ebp */
  EBP = (pop32());
  /* 10a5345d ret  */
  ESPCHK(0x10a53430u, _esp0);
  ESP += 4; return;
}

/* FUN_10013460 @ 0x10a53460 (762 bytes, 246 insns) */
void f_10a53460(void) {
  FTRACE(0x10a53460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a53460 push ebp */
  push32((uint32_t)(EBP));
  /* 10a53461 mov ebp, esp */
  EBP = (ESP);
  /* 10a53463 push ecx */
  push32((uint32_t)(ECX));
  /* 10a53464 cmp dword ptr [0x10a6fd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a6fd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5346b jne 0x10a53474 */
  if (!C.zf) goto L_10a53474;
  /* 10a5346d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a5346f jmp 0x10a53756 */
  goto L_10a53756;
L_10a53474:;
  /* 10a53474 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a53477 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10a5347a cmp ecx, dword ptr [0x10a6fe28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10a6fe28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a53480 jne 0x10a53494 */
  if (!C.zf) goto L_10a53494;
  /* 10a53482 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a53485 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a53488 cmp eax, dword ptr [0x10a6fe38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10a6fe38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5348e je 0x10a5365b */
  if (C.zf) goto L_10a5365b;
L_10a53494:;
  /* 10a53494 cmp dword ptr [0x10a708a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a708a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5349b je 0x10a53615 */
  if (C.zf) goto L_10a53615;
  /* 10a534a1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a534a3 mov cx, word ptr [0x10a70940] */
  CX = (r16((uint32_t)(0x10a70940)));
  /* 10a534aa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a534ac jne 0x10a53509 */
  if (!C.zf) goto L_10a53509;
  /* 10a534ae xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a534b0 mov dx, word ptr [0x10a7094e] */
  DX = (r16((uint32_t)(0x10a7094e)));
  /* 10a534b7 push edx */
  push32((uint32_t)(EDX));
  /* 10a534b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a534ba mov ax, word ptr [0x10a7094c] */
  AX = (r16((uint32_t)(0x10a7094c)));
  /* 10a534c0 push eax */
  push32((uint32_t)(EAX));
  /* 10a534c1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a534c3 mov cx, word ptr [0x10a7094a] */
  CX = (r16((uint32_t)(0x10a7094a)));
  /* 10a534ca push ecx */
  push32((uint32_t)(ECX));
  /* 10a534cb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a534cd mov dx, word ptr [0x10a70948] */
  DX = (r16((uint32_t)(0x10a70948)));
  /* 10a534d4 push edx */
  push32((uint32_t)(EDX));
  /* 10a534d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a534d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a534d9 mov ax, word ptr [0x10a70944] */
  AX = (r16((uint32_t)(0x10a70944)));
  /* 10a534df push eax */
  push32((uint32_t)(EAX));
  /* 10a534e0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a534e2 mov cx, word ptr [0x10a70946] */
  CX = (r16((uint32_t)(0x10a70946)));
  /* 10a534e9 push ecx */
  push32((uint32_t)(ECX));
  /* 10a534ea xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a534ec mov dx, word ptr [0x10a70942] */
  DX = (r16((uint32_t)(0x10a70942)));
  /* 10a534f3 push edx */
  push32((uint32_t)(EDX));
  /* 10a534f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a534f7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10a534fa push ecx */
  push32((uint32_t)(ECX));
  /* 10a534fb push 1 */
  push32((uint32_t)(0x1u));
  /* 10a534fd push 1 */
  push32((uint32_t)(0x1u));
  /* 10a534ff call 0x10a53760 */
  push32(0x10a53504u); f_10a53760();
  /* 10a53504 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a53507 jmp 0x10a5355a */
  goto L_10a5355a;
L_10a53509:;
  /* 10a53509 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a5350b mov dx, word ptr [0x10a7094e] */
  DX = (r16((uint32_t)(0x10a7094e)));
  /* 10a53512 push edx */
  push32((uint32_t)(EDX));
  /* 10a53513 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a53515 mov ax, word ptr [0x10a7094c] */
  AX = (r16((uint32_t)(0x10a7094c)));
  /* 10a5351b push eax */
  push32((uint32_t)(EAX));
  /* 10a5351c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a5351e mov cx, word ptr [0x10a7094a] */
  CX = (r16((uint32_t)(0x10a7094a)));
  /* 10a53525 push ecx */
  push32((uint32_t)(ECX));
  /* 10a53526 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a53528 mov dx, word ptr [0x10a70948] */
  DX = (r16((uint32_t)(0x10a70948)));
  /* 10a5352f push edx */
  push32((uint32_t)(EDX));
  /* 10a53530 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a53532 mov ax, word ptr [0x10a70946] */
  AX = (r16((uint32_t)(0x10a70946)));
  /* 10a53538 push eax */
  push32((uint32_t)(EAX));
  /* 10a53539 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a5353b push 0 */
  push32((uint32_t)(0x0u));
  /* 10a5353d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a5353f mov cx, word ptr [0x10a70942] */
  CX = (r16((uint32_t)(0x10a70942)));
  /* 10a53546 push ecx */
  push32((uint32_t)(ECX));
  /* 10a53547 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a5354a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a5354d push eax */
  push32((uint32_t)(EAX));
  /* 10a5354e push 0 */
  push32((uint32_t)(0x0u));
  /* 10a53550 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a53552 call 0x10a53760 */
  push32(0x10a53557u); f_10a53760();
  /* 10a53557 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a5355a:;
  /* 10a5355a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a5355c mov cx, word ptr [0x10a708ec] */
  CX = (r16((uint32_t)(0x10a708ec)));
  /* 10a53563 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a53565 jne 0x10a535c2 */
  if (!C.zf) goto L_10a535c2;
  /* 10a53567 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a53569 mov dx, word ptr [0x10a708fa] */
  DX = (r16((uint32_t)(0x10a708fa)));
  /* 10a53570 push edx */
  push32((uint32_t)(EDX));
  /* 10a53571 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a53573 mov ax, word ptr [0x10a708f8] */
  AX = (r16((uint32_t)(0x10a708f8)));
  /* 10a53579 push eax */
  push32((uint32_t)(EAX));
  /* 10a5357a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a5357c mov cx, word ptr [0x10a708f6] */
  CX = (r16((uint32_t)(0x10a708f6)));
  /* 10a53583 push ecx */
  push32((uint32_t)(ECX));
  /* 10a53584 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a53586 mov dx, word ptr [0x10a708f4] */
  DX = (r16((uint32_t)(0x10a708f4)));
  /* 10a5358d push edx */
  push32((uint32_t)(EDX));
  /* 10a5358e push 0 */
  push32((uint32_t)(0x0u));
  /* 10a53590 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a53592 mov ax, word ptr [0x10a708f0] */
  AX = (r16((uint32_t)(0x10a708f0)));
  /* 10a53598 push eax */
  push32((uint32_t)(EAX));
  /* 10a53599 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a5359b mov cx, word ptr [0x10a708f2] */
  CX = (r16((uint32_t)(0x10a708f2)));
  /* 10a535a2 push ecx */
  push32((uint32_t)(ECX));
  /* 10a535a3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a535a5 mov dx, word ptr [0x10a708ee] */
  DX = (r16((uint32_t)(0x10a708ee)));
  /* 10a535ac push edx */
  push32((uint32_t)(EDX));
  /* 10a535ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a535b0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10a535b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a535b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a535b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a535b8 call 0x10a53760 */
  push32(0x10a535bdu); f_10a53760();
  /* 10a535bd add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a535c0 jmp 0x10a53613 */
  goto L_10a53613;
L_10a535c2:;
  /* 10a535c2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a535c4 mov dx, word ptr [0x10a708fa] */
  DX = (r16((uint32_t)(0x10a708fa)));
  /* 10a535cb push edx */
  push32((uint32_t)(EDX));
  /* 10a535cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a535ce mov ax, word ptr [0x10a708f8] */
  AX = (r16((uint32_t)(0x10a708f8)));
  /* 10a535d4 push eax */
  push32((uint32_t)(EAX));
  /* 10a535d5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a535d7 mov cx, word ptr [0x10a708f6] */
  CX = (r16((uint32_t)(0x10a708f6)));
  /* 10a535de push ecx */
  push32((uint32_t)(ECX));
  /* 10a535df xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a535e1 mov dx, word ptr [0x10a708f4] */
  DX = (r16((uint32_t)(0x10a708f4)));
  /* 10a535e8 push edx */
  push32((uint32_t)(EDX));
  /* 10a535e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a535eb mov ax, word ptr [0x10a708f2] */
  AX = (r16((uint32_t)(0x10a708f2)));
  /* 10a535f1 push eax */
  push32((uint32_t)(EAX));
  /* 10a535f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a535f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a535f6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a535f8 mov cx, word ptr [0x10a708ee] */
  CX = (r16((uint32_t)(0x10a708ee)));
  /* 10a535ff push ecx */
  push32((uint32_t)(ECX));
  /* 10a53600 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a53603 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10a53606 push eax */
  push32((uint32_t)(EAX));
  /* 10a53607 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a53609 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a5360b call 0x10a53760 */
  push32(0x10a53610u); f_10a53760();
  /* 10a53610 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a53613:;
  /* 10a53613 jmp 0x10a5365b */
  goto L_10a5365b;
L_10a53615:;
  /* 10a53615 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a53617 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a53619 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a5361b push 2 */
  push32((uint32_t)(0x2u));
  /* 10a5361d push 0 */
  push32((uint32_t)(0x0u));
  /* 10a5361f push 0 */
  push32((uint32_t)(0x0u));
  /* 10a53621 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a53623 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a53625 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a53628 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10a5362b push edx */
  push32((uint32_t)(EDX));
  /* 10a5362c push 1 */
  push32((uint32_t)(0x1u));
  /* 10a5362e push 1 */
  push32((uint32_t)(0x1u));
  /* 10a53630 call 0x10a53760 */
  push32(0x10a53635u); f_10a53760();
  /* 10a53635 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a53638 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a5363a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a5363c push 0 */
  push32((uint32_t)(0x0u));
  /* 10a5363e push 2 */
  push32((uint32_t)(0x2u));
  /* 10a53640 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a53642 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a53644 push 5 */
  push32((uint32_t)(0x5u));
  /* 10a53646 push 0xa */
  push32((uint32_t)(0xau));
  /* 10a53648 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a5364b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10a5364e push ecx */
  push32((uint32_t)(ECX));
  /* 10a5364f push 1 */
  push32((uint32_t)(0x1u));
  /* 10a53651 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a53653 call 0x10a53760 */
  push32(0x10a53658u); f_10a53760();
  /* 10a53658 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a5365b:;
  /* 10a5365b mov edx, dword ptr [0x10a6fe2c] */
  EDX = (r32((uint32_t)(0x10a6fe2c)));
  /* 10a53661 cmp edx, dword ptr [0x10a6fe3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10a6fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a53667 jge 0x10a536b4 */
  if ((C.sf==C.of)) goto L_10a536b4;
  /* 10a53669 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a5366c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10a5366f cmp ecx, dword ptr [0x10a6fe2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10a6fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a53675 jl 0x10a53685 */
  if ((C.sf!=C.of)) goto L_10a53685;
  /* 10a53677 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a5367a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10a5367d cmp eax, dword ptr [0x10a6fe3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10a6fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a53683 jle 0x10a5368c */
  if ((C.zf||C.sf!=C.of)) goto L_10a5368c;
L_10a53685:;
  /* 10a53685 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a53687 jmp 0x10a53756 */
  goto L_10a53756;
L_10a5368c:;
  /* 10a5368c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a5368f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10a53692 cmp edx, dword ptr [0x10a6fe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10a6fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a53698 jle 0x10a536b2 */
  if ((C.zf||C.sf!=C.of)) goto L_10a536b2;
  /* 10a5369a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a5369d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10a536a0 cmp ecx, dword ptr [0x10a6fe3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10a6fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a536a6 jge 0x10a536b2 */
  if ((C.sf==C.of)) goto L_10a536b2;
  /* 10a536a8 mov eax, 1 */
  EAX = (0x1u);
  /* 10a536ad jmp 0x10a53756 */
  goto L_10a53756;
L_10a536b2:;
  /* 10a536b2 jmp 0x10a536f7 */
  goto L_10a536f7;
L_10a536b4:;
  /* 10a536b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a536b7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10a536ba cmp eax, dword ptr [0x10a6fe3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10a6fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a536c0 jl 0x10a536d0 */
  if ((C.sf!=C.of)) goto L_10a536d0;
  /* 10a536c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a536c5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10a536c8 cmp edx, dword ptr [0x10a6fe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10a6fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a536ce jle 0x10a536d7 */
  if ((C.zf||C.sf!=C.of)) goto L_10a536d7;
L_10a536d0:;
  /* 10a536d0 mov eax, 1 */
  EAX = (0x1u);
  /* 10a536d5 jmp 0x10a53756 */
  goto L_10a53756;
L_10a536d7:;
  /* 10a536d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a536da mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10a536dd cmp ecx, dword ptr [0x10a6fe3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10a6fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a536e3 jle 0x10a536f7 */
  if ((C.zf||C.sf!=C.of)) goto L_10a536f7;
  /* 10a536e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a536e8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10a536eb cmp eax, dword ptr [0x10a6fe2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10a6fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a536f1 jge 0x10a536f7 */
  if ((C.sf==C.of)) goto L_10a536f7;
  /* 10a536f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a536f5 jmp 0x10a53756 */
  goto L_10a53756;
L_10a536f7:;
  /* 10a536f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a536fa mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10a536fd imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a53700 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a53703 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a53705 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a53707 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a5370a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10a5370d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a53713 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a53715 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a5371b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a5371e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a53721 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10a53724 cmp edx, dword ptr [0x10a6fe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10a6fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5372a jne 0x10a53742 */
  if (!C.zf) goto L_10a53742;
  /* 10a5372c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a5372f cmp eax, dword ptr [0x10a6fe30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10a6fe30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a53735 jl 0x10a5373e */
  if ((C.sf!=C.of)) goto L_10a5373e;
  /* 10a53737 mov eax, 1 */
  EAX = (0x1u);
  /* 10a5373c jmp 0x10a53756 */
  goto L_10a53756;
L_10a5373e:;
  /* 10a5373e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a53740 jmp 0x10a53756 */
  goto L_10a53756;
L_10a53742:;
  /* 10a53742 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a53745 cmp ecx, dword ptr [0x10a6fe40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10a6fe40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5374b jge 0x10a53754 */
  if ((C.sf==C.of)) goto L_10a53754;
  /* 10a5374d mov eax, 1 */
  EAX = (0x1u);
  /* 10a53752 jmp 0x10a53756 */
  goto L_10a53756;
L_10a53754:;
  /* 10a53754 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a53756:;
  /* 10a53756 mov esp, ebp */
  ESP = (EBP);
  /* 10a53758 pop ebp */
  EBP = (pop32());
  /* 10a53759 ret  */
  ESPCHK(0x10a53460u, _esp0);
  ESP += 4; return;
}

/* FUN_10013760 @ 0x10a53760 (504 bytes, 145 insns) */
void f_10a53760(void) {
  FTRACE(0x10a53760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a53760 push ebp */
  push32((uint32_t)(EBP));
  /* 10a53761 mov ebp, esp */
  EBP = (ESP);
  /* 10a53763 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a53766 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5376a jne 0x10a5383c */
  if (!C.zf) goto L_10a5383c;
  /* 10a53770 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a53773 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10a53776 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a53778 jne 0x10a53789 */
  if (!C.zf) goto L_10a53789;
  /* 10a5377a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a5377d mov edx, dword ptr [ecx*4 + 0x10a6fe4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10a6fe4c)));
  /* 10a53784 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10a53787 jmp 0x10a53796 */
  goto L_10a53796;
L_10a53789:;
  /* 10a53789 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a5378c mov ecx, dword ptr [eax*4 + 0x10a6fe80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10a6fe80)));
  /* 10a53793 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10a53796:;
  /* 10a53796 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a53799 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5379c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10a5379f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a537a2 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a537a5 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a537ab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a537ae add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a537b0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a537b3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a537b6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10a537b9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 10a537bd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10a537be mov ecx, 7 */
  ECX = (0x7u);
  /* 10a537c3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10a537c5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a537c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a537cb cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a537ce jge 0x10a537e9 */
  if ((C.sf==C.of)) goto L_10a537e9;
  /* 10a537d0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10a537d3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a537d6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a537d9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a537dc imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a537df add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a537e2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a537e4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a537e7 jmp 0x10a537fd */
  goto L_10a537fd;
L_10a537e9:;
  /* 10a537e9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10a537ec sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a537ef mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a537f2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a537f5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a537f8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a537fa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10a537fd:;
  /* 10a537fd cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a53801 jne 0x10a5383a */
  if (!C.zf) goto L_10a5383a;
  /* 10a53803 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a53806 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10a53809 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a5380b jne 0x10a5381c */
  if (!C.zf) goto L_10a5381c;
  /* 10a5380d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a53810 mov eax, dword ptr [edx*4 + 0x10a6fe50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10a6fe50)));
  /* 10a53817 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10a5381a jmp 0x10a53829 */
  goto L_10a53829;
L_10a5381c:;
  /* 10a5381c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a5381f mov edx, dword ptr [ecx*4 + 0x10a6fe84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10a6fe84)));
  /* 10a53826 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10a53829:;
  /* 10a53829 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a5382c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5382f jle 0x10a5383a */
  if ((C.zf||C.sf!=C.of)) goto L_10a5383a;
  /* 10a53831 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a53834 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a53837 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10a5383a:;
  /* 10a5383a jmp 0x10a53871 */
  goto L_10a53871;
L_10a5383c:;
  /* 10a5383c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a5383f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10a53842 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a53844 jne 0x10a53855 */
  if (!C.zf) goto L_10a53855;
  /* 10a53846 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a53849 mov ecx, dword ptr [eax*4 + 0x10a6fe4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10a6fe4c)));
  /* 10a53850 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10a53853 jmp 0x10a53862 */
  goto L_10a53862;
L_10a53855:;
  /* 10a53855 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a53858 mov eax, dword ptr [edx*4 + 0x10a6fe80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10a6fe80)));
  /* 10a5385f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10a53862:;
  /* 10a53862 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a53865 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10a53868 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a5386b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5386e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10a53871:;
  /* 10a53871 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a53875 jne 0x10a538b1 */
  if (!C.zf) goto L_10a538b1;
  /* 10a53877 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a5387a mov dword ptr [0x10a6fe2c], eax */
  w32((uint32_t)(0x10a6fe2c), (EAX));
  /* 10a5387f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10a53882 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a53885 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10a53888 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5388a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a5388d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10a53890 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a53892 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a53898 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10a5389b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5389d mov dword ptr [0x10a6fe30], ecx */
  w32((uint32_t)(0x10a6fe30), (ECX));
  /* 10a538a3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a538a6 mov dword ptr [0x10a6fe28], edx */
  w32((uint32_t)(0x10a6fe28), (EDX));
  /* 10a538ac jmp 0x10a53954 */
  goto L_10a53954;
L_10a538b1:;
  /* 10a538b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a538b4 mov dword ptr [0x10a6fe3c], eax */
  w32((uint32_t)(0x10a6fe3c), (EAX));
  /* 10a538b9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10a538bc imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a538bf mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10a538c2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a538c4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a538c7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10a538ca add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a538cc imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a538d2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10a538d5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a538d7 mov dword ptr [0x10a6fe40], ecx */
  w32((uint32_t)(0x10a6fe40), (ECX));
  /* 10a538dd mov edx, dword ptr [0x10a6fd98] */
  EDX = (r32((uint32_t)(0x10a6fd98)));
  /* 10a538e3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10a538e9 mov eax, dword ptr [0x10a6fe40] */
  EAX = (r32((uint32_t)(0x10a6fe40)));
  /* 10a538ee add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a538f0 mov dword ptr [0x10a6fe40], eax */
  w32((uint32_t)(0x10a6fe40), (EAX));
  /* 10a538f5 cmp dword ptr [0x10a6fe40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a6fe40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a538fc jge 0x10a53921 */
  if ((C.sf==C.of)) goto L_10a53921;
  /* 10a538fe mov ecx, dword ptr [0x10a6fe40] */
  ECX = (r32((uint32_t)(0x10a6fe40)));
  /* 10a53904 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5390a mov dword ptr [0x10a6fe40], ecx */
  w32((uint32_t)(0x10a6fe40), (ECX));
  /* 10a53910 mov edx, dword ptr [0x10a6fe3c] */
  EDX = (r32((uint32_t)(0x10a6fe3c)));
  /* 10a53916 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a53919 mov dword ptr [0x10a6fe3c], edx */
  w32((uint32_t)(0x10a6fe3c), (EDX));
  /* 10a5391f jmp 0x10a5394b */
  goto L_10a5394b;
L_10a53921:;
  /* 10a53921 cmp dword ptr [0x10a6fe40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x10a6fe40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5392b jl 0x10a5394b */
  if ((C.sf!=C.of)) goto L_10a5394b;
  /* 10a5392d mov eax, dword ptr [0x10a6fe40] */
  EAX = (r32((uint32_t)(0x10a6fe40)));
  /* 10a53932 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a53937 mov dword ptr [0x10a6fe40], eax */
  w32((uint32_t)(0x10a6fe40), (EAX));
  /* 10a5393c mov ecx, dword ptr [0x10a6fe3c] */
  ECX = (r32((uint32_t)(0x10a6fe3c)));
  /* 10a53942 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a53945 mov dword ptr [0x10a6fe3c], ecx */
  w32((uint32_t)(0x10a6fe3c), (ECX));
L_10a5394b:;
  /* 10a5394b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a5394e mov dword ptr [0x10a6fe38], edx */
  w32((uint32_t)(0x10a6fe38), (EDX));
L_10a53954:;
  /* 10a53954 mov esp, ebp */
  ESP = (EBP);
  /* 10a53956 pop ebp */
  EBP = (pop32());
  /* 10a53957 ret  */
  ESPCHK(0x10a53760u, _esp0);
  ESP += 4; return;
}

/* FUN_10013960 @ 0x10a53960 (382 bytes, 135 insns) */
void f_10a53960(void) {
  FTRACE(0x10a53960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a53960 push ebp */
  push32((uint32_t)(EBP));
  /* 10a53961 mov ebp, esp */
  EBP = (ESP);
  /* 10a53963 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10a53965 push 0x10a6ce78 */
  push32((uint32_t)(0x10a6ce78u));
  /* 10a5396a push 0x10a4d628 */
  push32((uint32_t)(0x10a4d628u));
  /* 10a5396f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10a53975 push eax */
  push32((uint32_t)(EAX));
  /* 10a53976 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10a5397d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a53980 push ebx */
  push32((uint32_t)(EBX));
  /* 10a53981 push esi */
  push32((uint32_t)(ESI));
  /* 10a53982 push edi */
  push32((uint32_t)(EDI));
  /* 10a53983 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10a53986 cmp dword ptr [0x10a7095c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a7095c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5398d jne 0x10a539d2 */
  if (!C.zf) goto L_10a539d2;
  /* 10a5398f push 0 */
  push32((uint32_t)(0x0u));
  /* 10a53991 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a53993 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a53995 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a53997 call dword ptr [0x10a7327c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7327c))), 0x10a5399du);
  /* 10a5399d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a5399f je 0x10a539ad */
  if (C.zf) goto L_10a539ad;
  /* 10a539a1 mov dword ptr [0x10a7095c], 1 */
  w32((uint32_t)(0x10a7095c), (0x1u));
  /* 10a539ab jmp 0x10a539d2 */
  goto L_10a539d2;
L_10a539ad:;
  /* 10a539ad push 0 */
  push32((uint32_t)(0x0u));
  /* 10a539af push 0 */
  push32((uint32_t)(0x0u));
  /* 10a539b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a539b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a539b5 call dword ptr [0x10a73294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73294))), 0x10a539bbu);
  /* 10a539bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a539bd je 0x10a539cb */
  if (C.zf) goto L_10a539cb;
  /* 10a539bf mov dword ptr [0x10a7095c], 2 */
  w32((uint32_t)(0x10a7095c), (0x2u));
  /* 10a539c9 jmp 0x10a539d2 */
  goto L_10a539d2;
L_10a539cb:;
  /* 10a539cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a539cd jmp 0x10a53ae1 */
  goto L_10a53ae1;
L_10a539d2:;
  /* 10a539d2 cmp dword ptr [0x10a7095c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10a7095c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a539d9 jne 0x10a539f6 */
  if (!C.zf) goto L_10a539f6;
  /* 10a539db mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a539de push eax */
  push32((uint32_t)(EAX));
  /* 10a539df mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a539e2 push ecx */
  push32((uint32_t)(ECX));
  /* 10a539e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a539e6 push edx */
  push32((uint32_t)(EDX));
  /* 10a539e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a539ea push eax */
  push32((uint32_t)(EAX));
  /* 10a539eb call dword ptr [0x10a7327c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7327c))), 0x10a539f1u);
  /* 10a539f1 jmp 0x10a53ae1 */
  goto L_10a53ae1;
L_10a539f6:;
  /* 10a539f6 cmp dword ptr [0x10a7095c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10a7095c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a539fd jne 0x10a53adf */
  if (!C.zf) goto L_10a53adf;
  /* 10a53a03 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a53a07 jne 0x10a53a12 */
  if (!C.zf) goto L_10a53a12;
  /* 10a53a09 mov ecx, dword ptr [0x10a70810] */
  ECX = (r32((uint32_t)(0x10a70810)));
  /* 10a53a0f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10a53a12:;
  /* 10a53a12 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a53a14 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a53a16 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a53a19 push edx */
  push32((uint32_t)(EDX));
  /* 10a53a1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a53a1d push eax */
  push32((uint32_t)(EAX));
  /* 10a53a1e call dword ptr [0x10a73294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73294))), 0x10a53a24u);
  /* 10a53a24 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10a53a27 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a53a2b jne 0x10a53a34 */
  if (!C.zf) goto L_10a53a34;
  /* 10a53a2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a53a2f jmp 0x10a53ae1 */
  goto L_10a53ae1;
L_10a53a34:;
  /* 10a53a34 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a53a3b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a53a3e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a53a41 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10a53a43 call 0x10a476c0 */
  push32(0x10a53a48u); f_10a476c0();
  /* 10a53a48 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 10a53a4b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10a53a4e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a53a51 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10a53a54 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10a53a5b jmp 0x10a53a74 */
  goto L_10a53a74;
  /* 10a53a5d mov eax, 1 */
  EAX = (0x1u);
  /* 10a53a62 ret  */
  ESPCHK(0x10a53960u, _esp0);
  ESP += 4; return;
  /* 10a53a63 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10a53a66 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10a53a6d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10a53a74:;
  /* 10a53a74 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a53a78 jne 0x10a53a7e */
  if (!C.zf) goto L_10a53a7e;
  /* 10a53a7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a53a7c jmp 0x10a53ae1 */
  goto L_10a53ae1;
L_10a53a7e:;
  /* 10a53a7e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a53a81 push edx */
  push32((uint32_t)(EDX));
  /* 10a53a82 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a53a85 push eax */
  push32((uint32_t)(EAX));
  /* 10a53a86 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a53a89 push ecx */
  push32((uint32_t)(ECX));
  /* 10a53a8a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a53a8d push edx */
  push32((uint32_t)(EDX));
  /* 10a53a8e call dword ptr [0x10a73294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73294))), 0x10a53a94u);
  /* 10a53a94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a53a96 jne 0x10a53a9c */
  if (!C.zf) goto L_10a53a9c;
  /* 10a53a98 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a53a9a jmp 0x10a53ae1 */
  goto L_10a53ae1;
L_10a53a9c:;
  /* 10a53a9c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a53aa0 jne 0x10a53abd */
  if (!C.zf) goto L_10a53abd;
  /* 10a53aa2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a53aa4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a53aa6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10a53aa8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a53aab push eax */
  push32((uint32_t)(EAX));
  /* 10a53aac push 1 */
  push32((uint32_t)(0x1u));
  /* 10a53aae mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a53ab1 push ecx */
  push32((uint32_t)(ECX));
  /* 10a53ab2 call dword ptr [0x10a732c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732c4))), 0x10a53ab8u);
  /* 10a53ab8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10a53abb jmp 0x10a53ada */
  goto L_10a53ada;
L_10a53abd:;
  /* 10a53abd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a53ac0 push edx */
  push32((uint32_t)(EDX));
  /* 10a53ac1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a53ac4 push eax */
  push32((uint32_t)(EAX));
  /* 10a53ac5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10a53ac7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a53aca push ecx */
  push32((uint32_t)(ECX));
  /* 10a53acb push 1 */
  push32((uint32_t)(0x1u));
  /* 10a53acd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a53ad0 push edx */
  push32((uint32_t)(EDX));
  /* 10a53ad1 call dword ptr [0x10a732c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732c4))), 0x10a53ad7u);
  /* 10a53ad7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10a53ada:;
  /* 10a53ada mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a53add jmp 0x10a53ae1 */
  goto L_10a53ae1;
L_10a53adf:;
  /* 10a53adf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a53ae1:;
  /* 10a53ae1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10a53ae4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a53ae7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10a53aee pop edi */
  EDI = (pop32());
  /* 10a53aef pop esi */
  ESI = (pop32());
  /* 10a53af0 pop ebx */
  EBX = (pop32());
  /* 10a53af1 mov esp, ebp */
  ESP = (EBP);
  /* 10a53af3 pop ebp */
  EBP = (pop32());
  /* 10a53af4 ret  */
  ESPCHK(0x10a53960u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b00 @ 0x10a53b00 (398 bytes, 140 insns) */
void f_10a53b00(void) {
  FTRACE(0x10a53b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a53b00 push ebp */
  push32((uint32_t)(EBP));
  /* 10a53b01 mov ebp, esp */
  EBP = (ESP);
  /* 10a53b03 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10a53b05 push 0x10a6ce88 */
  push32((uint32_t)(0x10a6ce88u));
  /* 10a53b0a push 0x10a4d628 */
  push32((uint32_t)(0x10a4d628u));
  /* 10a53b0f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10a53b15 push eax */
  push32((uint32_t)(EAX));
  /* 10a53b16 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10a53b1d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a53b20 push ebx */
  push32((uint32_t)(EBX));
  /* 10a53b21 push esi */
  push32((uint32_t)(ESI));
  /* 10a53b22 push edi */
  push32((uint32_t)(EDI));
  /* 10a53b23 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10a53b26 cmp dword ptr [0x10a70960], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a70960))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a53b2d jne 0x10a53b72 */
  if (!C.zf) goto L_10a53b72;
  /* 10a53b2f push 0 */
  push32((uint32_t)(0x0u));
  /* 10a53b31 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a53b33 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a53b35 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a53b37 call dword ptr [0x10a7327c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7327c))), 0x10a53b3du);
  /* 10a53b3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a53b3f je 0x10a53b4d */
  if (C.zf) goto L_10a53b4d;
  /* 10a53b41 mov dword ptr [0x10a70960], 1 */
  w32((uint32_t)(0x10a70960), (0x1u));
  /* 10a53b4b jmp 0x10a53b72 */
  goto L_10a53b72;
L_10a53b4d:;
  /* 10a53b4d push 0 */
  push32((uint32_t)(0x0u));
  /* 10a53b4f push 0 */
  push32((uint32_t)(0x0u));
  /* 10a53b51 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a53b53 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a53b55 call dword ptr [0x10a73294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73294))), 0x10a53b5bu);
  /* 10a53b5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a53b5d je 0x10a53b6b */
  if (C.zf) goto L_10a53b6b;
  /* 10a53b5f mov dword ptr [0x10a70960], 2 */
  w32((uint32_t)(0x10a70960), (0x2u));
  /* 10a53b69 jmp 0x10a53b72 */
  goto L_10a53b72;
L_10a53b6b:;
  /* 10a53b6b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a53b6d jmp 0x10a53c91 */
  goto L_10a53c91;
L_10a53b72:;
  /* 10a53b72 cmp dword ptr [0x10a70960], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10a70960))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a53b79 jne 0x10a53b96 */
  if (!C.zf) goto L_10a53b96;
  /* 10a53b7b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a53b7e push eax */
  push32((uint32_t)(EAX));
  /* 10a53b7f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a53b82 push ecx */
  push32((uint32_t)(ECX));
  /* 10a53b83 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a53b86 push edx */
  push32((uint32_t)(EDX));
  /* 10a53b87 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a53b8a push eax */
  push32((uint32_t)(EAX));
  /* 10a53b8b call dword ptr [0x10a73294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73294))), 0x10a53b91u);
  /* 10a53b91 jmp 0x10a53c91 */
  goto L_10a53c91;
L_10a53b96:;
  /* 10a53b96 cmp dword ptr [0x10a70960], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10a70960))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a53b9d jne 0x10a53c8f */
  if (!C.zf) goto L_10a53c8f;
  /* 10a53ba3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a53ba7 jne 0x10a53bb2 */
  if (!C.zf) goto L_10a53bb2;
  /* 10a53ba9 mov ecx, dword ptr [0x10a70810] */
  ECX = (r32((uint32_t)(0x10a70810)));
  /* 10a53baf mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10a53bb2:;
  /* 10a53bb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a53bb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a53bb6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a53bb9 push edx */
  push32((uint32_t)(EDX));
  /* 10a53bba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a53bbd push eax */
  push32((uint32_t)(EAX));
  /* 10a53bbe call dword ptr [0x10a7327c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7327c))), 0x10a53bc4u);
  /* 10a53bc4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10a53bc7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a53bcb jne 0x10a53bd4 */
  if (!C.zf) goto L_10a53bd4;
  /* 10a53bcd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a53bcf jmp 0x10a53c91 */
  goto L_10a53c91;
L_10a53bd4:;
  /* 10a53bd4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a53bdb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a53bde shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10a53be0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a53be3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10a53be5 call 0x10a476c0 */
  push32(0x10a53beau); f_10a476c0();
  /* 10a53bea mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 10a53bed mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10a53bf0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a53bf3 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10a53bf6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10a53bfd jmp 0x10a53c16 */
  goto L_10a53c16;
  /* 10a53bff mov eax, 1 */
  EAX = (0x1u);
  /* 10a53c04 ret  */
  ESPCHK(0x10a53b00u, _esp0);
  ESP += 4; return;
  /* 10a53c05 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10a53c08 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10a53c0f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10a53c16:;
  /* 10a53c16 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a53c1a jne 0x10a53c20 */
  if (!C.zf) goto L_10a53c20;
  /* 10a53c1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a53c1e jmp 0x10a53c91 */
  goto L_10a53c91;
L_10a53c20:;
  /* 10a53c20 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a53c23 push edx */
  push32((uint32_t)(EDX));
  /* 10a53c24 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a53c27 push eax */
  push32((uint32_t)(EAX));
  /* 10a53c28 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a53c2b push ecx */
  push32((uint32_t)(ECX));
  /* 10a53c2c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a53c2f push edx */
  push32((uint32_t)(EDX));
  /* 10a53c30 call dword ptr [0x10a7327c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a7327c))), 0x10a53c36u);
  /* 10a53c36 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a53c38 jne 0x10a53c3e */
  if (!C.zf) goto L_10a53c3e;
  /* 10a53c3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a53c3c jmp 0x10a53c91 */
  goto L_10a53c91;
L_10a53c3e:;
  /* 10a53c3e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a53c42 jne 0x10a53c66 */
  if (!C.zf) goto L_10a53c66;
  /* 10a53c44 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a53c46 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a53c48 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a53c4a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a53c4c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10a53c4e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a53c51 push eax */
  push32((uint32_t)(EAX));
  /* 10a53c52 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10a53c57 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a53c5a push ecx */
  push32((uint32_t)(ECX));
  /* 10a53c5b call dword ptr [0x10a73354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73354))), 0x10a53c61u);
  /* 10a53c61 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10a53c64 jmp 0x10a53c8a */
  goto L_10a53c8a;
L_10a53c66:;
  /* 10a53c66 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a53c68 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a53c6a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a53c6d push edx */
  push32((uint32_t)(EDX));
  /* 10a53c6e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a53c71 push eax */
  push32((uint32_t)(EAX));
  /* 10a53c72 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10a53c74 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a53c77 push ecx */
  push32((uint32_t)(ECX));
  /* 10a53c78 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10a53c7d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a53c80 push edx */
  push32((uint32_t)(EDX));
  /* 10a53c81 call dword ptr [0x10a73354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73354))), 0x10a53c87u);
  /* 10a53c87 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10a53c8a:;
  /* 10a53c8a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a53c8d jmp 0x10a53c91 */
  goto L_10a53c91;
L_10a53c8f:;
  /* 10a53c8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a53c91:;
  /* 10a53c91 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10a53c94 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a53c97 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10a53c9e pop edi */
  EDI = (pop32());
  /* 10a53c9f pop esi */
  ESI = (pop32());
  /* 10a53ca0 pop ebx */
  EBX = (pop32());
  /* 10a53ca1 mov esp, ebp */
  ESP = (EBP);
  /* 10a53ca3 pop ebp */
  EBP = (pop32());
  /* 10a53ca4 ret  */
  ESPCHK(0x10a53b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10013cb0 @ 0x10a53cb0 (11 bytes, 6 insns) */
void f_10a53cb0(void) {
  FTRACE(0x10a53cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a53cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a53cb1 mov ebp, esp */
  EBP = (ESP);
  /* 10a53cb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a53cb6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a53cb9 pop ebp */
  EBP = (pop32());
  /* 10a53cba ret  */
  ESPCHK(0x10a53cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013cc0 @ 0x10a53cc0 (147 bytes, 43 insns) */
void f_10a53cc0(void) {
  FTRACE(0x10a53cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a53cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a53cc1 mov ebp, esp */
  EBP = (ESP);
  /* 10a53cc3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a53cc4 cmp dword ptr [0x10a70800], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a70800))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a53ccb jne 0x10a53ce7 */
  if (!C.zf) goto L_10a53ce7;
  /* 10a53ccd cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a53cd1 jl 0x10a53ce2 */
  if ((C.sf!=C.of)) goto L_10a53ce2;
  /* 10a53cd3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a53cd7 jg 0x10a53ce2 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a53ce2;
  /* 10a53cd9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a53cdc add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a53cdf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10a53ce2:;
  /* 10a53ce2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a53ce5 jmp 0x10a53d4f */
  goto L_10a53d4f;
L_10a53ce7:;
  /* 10a53ce7 push 0x10a7098c */
  push32((uint32_t)(0x10a7098cu));
  /* 10a53cec call dword ptr [0x10a732fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732fc))), 0x10a53cf2u);
  /* 10a53cf2 cmp dword ptr [0x10a7097c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a7097c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a53cf9 je 0x10a53d19 */
  if (C.zf) goto L_10a53d19;
  /* 10a53cfb push 0x10a7098c */
  push32((uint32_t)(0x10a7098cu));
  /* 10a53d00 call dword ptr [0x10a732ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732ec))), 0x10a53d06u);
  /* 10a53d06 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10a53d08 call 0x10a47f20 */
  push32(0x10a53d0du); f_10a47f20();
  /* 10a53d0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a53d10 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10a53d17 jmp 0x10a53d20 */
  goto L_10a53d20;
L_10a53d19:;
  /* 10a53d19 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10a53d20:;
  /* 10a53d20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a53d23 push ecx */
  push32((uint32_t)(ECX));
  /* 10a53d24 call 0x10a53d60 */
  push32(0x10a53d29u); f_10a53d60();
  /* 10a53d29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a53d2c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10a53d2f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a53d33 je 0x10a53d41 */
  if (C.zf) goto L_10a53d41;
  /* 10a53d35 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10a53d37 call 0x10a47fc0 */
  push32(0x10a53d3cu); f_10a47fc0();
  /* 10a53d3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a53d3f jmp 0x10a53d4c */
  goto L_10a53d4c;
L_10a53d41:;
  /* 10a53d41 push 0x10a7098c */
  push32((uint32_t)(0x10a7098cu));
  /* 10a53d46 call dword ptr [0x10a732ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732ec))), 0x10a53d4cu);
L_10a53d4c:;
  /* 10a53d4c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10a53d4f:;
  /* 10a53d4f mov esp, ebp */
  ESP = (EBP);
  /* 10a53d51 pop ebp */
  EBP = (pop32());
  /* 10a53d52 ret  */
  ESPCHK(0x10a53cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013d60 @ 0x10a53d60 (299 bytes, 91 insns) */
void f_10a53d60(void) {
  FTRACE(0x10a53d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a53d60 push ebp */
  push32((uint32_t)(EBP));
  /* 10a53d61 mov ebp, esp */
  EBP = (ESP);
  /* 10a53d63 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a53d66 cmp dword ptr [0x10a70800], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a70800))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a53d6d jne 0x10a53d8c */
  if (!C.zf) goto L_10a53d8c;
  /* 10a53d6f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a53d73 jl 0x10a53d84 */
  if ((C.sf!=C.of)) goto L_10a53d84;
  /* 10a53d75 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a53d79 jg 0x10a53d84 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a53d84;
  /* 10a53d7b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a53d7e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a53d81 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10a53d84:;
  /* 10a53d84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a53d87 jmp 0x10a53e87 */
  goto L_10a53e87;
L_10a53d8c:;
  /* 10a53d8c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a53d93 jge 0x10a53dd3 */
  if ((C.sf==C.of)) goto L_10a53dd3;
  /* 10a53d95 cmp dword ptr [0x10a6eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10a6eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a53d9c jle 0x10a53db1 */
  if ((C.zf||C.sf!=C.of)) goto L_10a53db1;
  /* 10a53d9e push 1 */
  push32((uint32_t)(0x1u));
  /* 10a53da0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a53da3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a53da4 call 0x10a4a530 */
  push32(0x10a53da9u); f_10a4a530();
  /* 10a53da9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a53dac mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10a53daf jmp 0x10a53dc5 */
  goto L_10a53dc5;
L_10a53db1:;
  /* 10a53db1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a53db4 mov eax, dword ptr [0x10a6ec98] */
  EAX = (r32((uint32_t)(0x10a6ec98)));
  /* 10a53db9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a53dbb mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10a53dbf and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10a53dc2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10a53dc5:;
  /* 10a53dc5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a53dc9 jne 0x10a53dd3 */
  if (!C.zf) goto L_10a53dd3;
  /* 10a53dcb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a53dce jmp 0x10a53e87 */
  goto L_10a53e87;
L_10a53dd3:;
  /* 10a53dd3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a53dd6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10a53dd9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a53ddf and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a53de5 mov eax, dword ptr [0x10a6ec98] */
  EAX = (r32((uint32_t)(0x10a6ec98)));
  /* 10a53dea xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a53dec mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10a53df0 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10a53df6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a53df8 je 0x10a53e1c */
  if (C.zf) goto L_10a53e1c;
  /* 10a53dfa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a53dfd sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10a53e00 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a53e06 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 10a53e09 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10a53e0c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 10a53e0f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 10a53e13 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10a53e1a jmp 0x10a53e2d */
  goto L_10a53e2d;
L_10a53e1c:;
  /* 10a53e1c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10a53e1f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10a53e22 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 10a53e26 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_10a53e2d:;
  /* 10a53e2d push 1 */
  push32((uint32_t)(0x1u));
  /* 10a53e2f push 0 */
  push32((uint32_t)(0x0u));
  /* 10a53e31 push 3 */
  push32((uint32_t)(0x3u));
  /* 10a53e33 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10a53e36 push edx */
  push32((uint32_t)(EDX));
  /* 10a53e37 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a53e3a push eax */
  push32((uint32_t)(EAX));
  /* 10a53e3b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10a53e3e push ecx */
  push32((uint32_t)(ECX));
  /* 10a53e3f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10a53e44 mov edx, dword ptr [0x10a70800] */
  EDX = (r32((uint32_t)(0x10a70800)));
  /* 10a53e4a push edx */
  push32((uint32_t)(EDX));
  /* 10a53e4b call 0x10a4c910 */
  push32(0x10a53e50u); f_10a4c910();
  /* 10a53e50 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a53e53 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a53e56 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a53e5a jne 0x10a53e61 */
  if (!C.zf) goto L_10a53e61;
  /* 10a53e5c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a53e5f jmp 0x10a53e87 */
  goto L_10a53e87;
L_10a53e61:;
  /* 10a53e61 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a53e65 jne 0x10a53e71 */
  if (!C.zf) goto L_10a53e71;
  /* 10a53e67 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a53e6a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a53e6f jmp 0x10a53e87 */
  goto L_10a53e87;
L_10a53e71:;
  /* 10a53e71 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a53e74 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a53e79 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 10a53e7c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a53e82 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10a53e85 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_10a53e87:;
  /* 10a53e87 mov esp, ebp */
  ESP = (EBP);
  /* 10a53e89 pop ebp */
  EBP = (pop32());
  /* 10a53e8a ret  */
  ESPCHK(0x10a53d60u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x10a53e90 (52 bytes, 19 insns) */
void f_10a53e90(void) {
  FTRACE(0x10a53e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a53e90 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10a53e94 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10a53e98 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10a53e9a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10a53e9e jne 0x10a53ea9 */
  if (!C.zf) goto L_10a53ea9;
  /* 10a53ea0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10a53ea4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10a53ea6 ret 0x10 */
  ESPCHK(0x10a53e90u, _esp0);
  ESP += 20; return;
L_10a53ea9:;
  /* 10a53ea9 push ebx */
  push32((uint32_t)(EBX));
  /* 10a53eaa mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10a53eac mov ebx, eax */
  EBX = (EAX);
  /* 10a53eae mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10a53eb2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10a53eb6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a53eb8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10a53ebc mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10a53ebe add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a53ec0 pop ebx */
  EBX = (pop32());
  /* 10a53ec1 ret 0x10 */
  ESPCHK(0x10a53e90u, _esp0);
  ESP += 20; return;
}

/* FUN_10013ed0 @ 0x10a53ed0 (46 bytes, 18 insns) */
void f_10a53ed0(void) {
  FTRACE(0x10a53ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a53ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a53ed1 mov ebp, esp */
  EBP = (ESP);
  /* 10a53ed3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a53ed4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10a53ed6 call 0x10a47f20 */
  push32(0x10a53edbu); f_10a47f20();
  /* 10a53edb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a53ede mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a53ee1 push eax */
  push32((uint32_t)(EAX));
  /* 10a53ee2 call 0x10a53f00 */
  push32(0x10a53ee7u); f_10a53f00();
  /* 10a53ee7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a53eea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a53eed push 0xc */
  push32((uint32_t)(0xcu));
  /* 10a53eef call 0x10a47fc0 */
  push32(0x10a53ef4u); f_10a47fc0();
  /* 10a53ef4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a53ef7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a53efa mov esp, ebp */
  ESP = (EBP);
  /* 10a53efc pop ebp */
  EBP = (pop32());
  /* 10a53efd ret  */
  ESPCHK(0x10a53ed0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x10a53f00 (198 bytes, 69 insns) */
void f_10a53f00(void) {
  FTRACE(0x10a53f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a53f00 push ebp */
  push32((uint32_t)(EBP));
  /* 10a53f01 mov ebp, esp */
  EBP = (ESP);
  /* 10a53f03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a53f06 mov eax, dword ptr [0x10a7061c] */
  EAX = (r32((uint32_t)(0x10a7061c)));
  /* 10a53f0b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a53f0e cmp dword ptr [0x10a72120], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a72120))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a53f15 jne 0x10a53f1e */
  if (!C.zf) goto L_10a53f1e;
  /* 10a53f17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a53f19 jmp 0x10a53fc2 */
  goto L_10a53fc2;
L_10a53f1e:;
  /* 10a53f1e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a53f22 jne 0x10a53f46 */
  if (!C.zf) goto L_10a53f46;
  /* 10a53f24 cmp dword ptr [0x10a70624], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a70624))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a53f2b je 0x10a53f46 */
  if (C.zf) goto L_10a53f46;
  /* 10a53f2d call 0x10a54020 */
  push32(0x10a53f32u); f_10a54020();
  /* 10a53f32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a53f34 je 0x10a53f3d */
  if (C.zf) goto L_10a53f3d;
  /* 10a53f36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a53f38 jmp 0x10a53fc2 */
  goto L_10a53fc2;
L_10a53f3d:;
  /* 10a53f3d mov ecx, dword ptr [0x10a7061c] */
  ECX = (r32((uint32_t)(0x10a7061c)));
  /* 10a53f43 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10a53f46:;
  /* 10a53f46 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a53f4a je 0x10a53fc0 */
  if (C.zf) goto L_10a53fc0;
  /* 10a53f4c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a53f50 je 0x10a53fc0 */
  if (C.zf) goto L_10a53fc0;
  /* 10a53f52 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a53f55 push edx */
  push32((uint32_t)(EDX));
  /* 10a53f56 call 0x10a47350 */
  push32(0x10a53f5bu); f_10a47350();
  /* 10a53f5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a53f5e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a53f61:;
  /* 10a53f61 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a53f64 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a53f67 je 0x10a53fc0 */
  if (C.zf) goto L_10a53fc0;
  /* 10a53f69 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a53f6c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a53f6e push edx */
  push32((uint32_t)(EDX));
  /* 10a53f6f call 0x10a47350 */
  push32(0x10a53f74u); f_10a47350();
  /* 10a53f74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a53f77 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a53f7a jbe 0x10a53fb5 */
  if ((C.cf||C.zf)) goto L_10a53fb5;
  /* 10a53f7c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a53f7f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a53f81 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a53f84 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 10a53f88 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a53f8b jne 0x10a53fb5 */
  if (!C.zf) goto L_10a53fb5;
  /* 10a53f8d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a53f90 push ecx */
  push32((uint32_t)(ECX));
  /* 10a53f91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a53f94 push edx */
  push32((uint32_t)(EDX));
  /* 10a53f95 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a53f98 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a53f9a push ecx */
  push32((uint32_t)(ECX));
  /* 10a53f9b call 0x10a53fd0 */
  push32(0x10a53fa0u); f_10a53fd0();
  /* 10a53fa0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a53fa3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a53fa5 jne 0x10a53fb5 */
  if (!C.zf) goto L_10a53fb5;
  /* 10a53fa7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a53faa mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a53fac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a53faf lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 10a53fb3 jmp 0x10a53fc2 */
  goto L_10a53fc2;
L_10a53fb5:;
  /* 10a53fb5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a53fb8 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a53fbb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10a53fbe jmp 0x10a53f61 */
  goto L_10a53f61;
L_10a53fc0:;
  /* 10a53fc0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a53fc2:;
  /* 10a53fc2 mov esp, ebp */
  ESP = (EBP);
  /* 10a53fc4 pop ebp */
  EBP = (pop32());
  /* 10a53fc5 ret  */
  ESPCHK(0x10a53f00u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x10a53fd0 (79 bytes, 32 insns) */
void f_10a53fd0(void) {
  FTRACE(0x10a53fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a53fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a53fd1 mov ebp, esp */
  EBP = (ESP);
  /* 10a53fd3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a53fd4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a53fd8 jne 0x10a53fde */
  if (!C.zf) goto L_10a53fde;
  /* 10a53fda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a53fdc jmp 0x10a5401b */
  goto L_10a5401b;
L_10a53fde:;
  /* 10a53fde mov eax, dword ptr [0x10a71ce4] */
  EAX = (r32((uint32_t)(0x10a71ce4)));
  /* 10a53fe3 push eax */
  push32((uint32_t)(EAX));
  /* 10a53fe4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a53fe7 push ecx */
  push32((uint32_t)(ECX));
  /* 10a53fe8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a53feb push edx */
  push32((uint32_t)(EDX));
  /* 10a53fec mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a53fef push eax */
  push32((uint32_t)(EAX));
  /* 10a53ff0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a53ff3 push ecx */
  push32((uint32_t)(ECX));
  /* 10a53ff4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a53ff6 mov edx, dword ptr [0x10a71f84] */
  EDX = (r32((uint32_t)(0x10a71f84)));
  /* 10a53ffc push edx */
  push32((uint32_t)(EDX));
  /* 10a53ffd call 0x10a540d0 */
  push32(0x10a54002u); f_10a540d0();
  /* 10a54002 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a54005 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a54008 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5400c jne 0x10a54015 */
  if (!C.zf) goto L_10a54015;
  /* 10a5400e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 10a54013 jmp 0x10a5401b */
  goto L_10a5401b;
L_10a54015:;
  /* 10a54015 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a54018 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10a5401b:;
  /* 10a5401b mov esp, ebp */
  ESP = (EBP);
  /* 10a5401d pop ebp */
  EBP = (pop32());
  /* 10a5401e ret  */
  ESPCHK(0x10a53fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014020 @ 0x10a54020 (174 bytes, 66 insns) */
void f_10a54020(void) {
  FTRACE(0x10a54020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a54020 push ebp */
  push32((uint32_t)(EBP));
  /* 10a54021 mov ebp, esp */
  EBP = (ESP);
  /* 10a54023 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a54026 mov eax, dword ptr [0x10a70624] */
  EAX = (r32((uint32_t)(0x10a70624)));
  /* 10a5402b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10a5402e:;
  /* 10a5402e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a54031 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a54034 je 0x10a540c8 */
  if (C.zf) goto L_10a540c8;
  /* 10a5403a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a5403c push 0 */
  push32((uint32_t)(0x0u));
  /* 10a5403e push 0 */
  push32((uint32_t)(0x0u));
  /* 10a54040 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a54042 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10a54044 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a54047 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a54049 push eax */
  push32((uint32_t)(EAX));
  /* 10a5404a push 0 */
  push32((uint32_t)(0x0u));
  /* 10a5404c push 1 */
  push32((uint32_t)(0x1u));
  /* 10a5404e call dword ptr [0x10a73354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73354))), 0x10a54054u);
  /* 10a54054 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a54057 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5405b jne 0x10a54062 */
  if (!C.zf) goto L_10a54062;
  /* 10a5405d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a54060 jmp 0x10a540ca */
  goto L_10a540ca;
L_10a54062:;
  /* 10a54062 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10a54064 push 0x10a6ce94 */
  push32((uint32_t)(0x10a6ce94u));
  /* 10a54069 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a5406b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a5406e push ecx */
  push32((uint32_t)(ECX));
  /* 10a5406f call 0x10a44520 */
  push32(0x10a54074u); f_10a44520();
  /* 10a54074 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a54077 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a5407a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5407e jne 0x10a54085 */
  if (!C.zf) goto L_10a54085;
  /* 10a54080 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a54083 jmp 0x10a540ca */
  goto L_10a540ca;
L_10a54085:;
  /* 10a54085 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a54087 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a54089 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a5408c push edx */
  push32((uint32_t)(EDX));
  /* 10a5408d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a54090 push eax */
  push32((uint32_t)(EAX));
  /* 10a54091 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10a54093 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a54096 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a54098 push edx */
  push32((uint32_t)(EDX));
  /* 10a54099 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a5409b push 1 */
  push32((uint32_t)(0x1u));
  /* 10a5409d call dword ptr [0x10a73354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73354))), 0x10a540a3u);
  /* 10a540a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a540a5 jne 0x10a540ac */
  if (!C.zf) goto L_10a540ac;
  /* 10a540a7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a540aa jmp 0x10a540ca */
  goto L_10a540ca;
L_10a540ac:;
  /* 10a540ac push 0 */
  push32((uint32_t)(0x0u));
  /* 10a540ae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a540b1 push eax */
  push32((uint32_t)(EAX));
  /* 10a540b2 call 0x10a54520 */
  push32(0x10a540b7u); f_10a54520();
  /* 10a540b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a540ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a540bd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a540c0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a540c3 jmp 0x10a5402e */
  goto L_10a5402e;
L_10a540c8:;
  /* 10a540c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a540ca:;
  /* 10a540ca mov esp, ebp */
  ESP = (EBP);
  /* 10a540cc pop ebp */
  EBP = (pop32());
  /* 10a540cd ret  */
  ESPCHK(0x10a54020u, _esp0);
  ESP += 4; return;
}

/* FUN_100140d0 @ 0x10a540d0 (970 bytes, 340 insns) */
void f_10a540d0(void) {
  FTRACE(0x10a540d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a540d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a540d1 mov ebp, esp */
  EBP = (ESP);
  /* 10a540d3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10a540d5 push 0x10a6cee8 */
  push32((uint32_t)(0x10a6cee8u));
  /* 10a540da push 0x10a4d628 */
  push32((uint32_t)(0x10a4d628u));
  /* 10a540df mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10a540e5 push eax */
  push32((uint32_t)(EAX));
  /* 10a540e6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10a540ed add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a540f0 push ebx */
  push32((uint32_t)(EBX));
  /* 10a540f1 push esi */
  push32((uint32_t)(ESI));
  /* 10a540f2 push edi */
  push32((uint32_t)(EDI));
  /* 10a540f3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10a540f6 cmp dword ptr [0x10a70964], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a70964))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a540fd jne 0x10a54156 */
  if (!C.zf) goto L_10a54156;
  /* 10a540ff push 1 */
  push32((uint32_t)(0x1u));
  /* 10a54101 push 0x10a6c544 */
  push32((uint32_t)(0x10a6c544u));
  /* 10a54106 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a54108 push 0x10a6c544 */
  push32((uint32_t)(0x10a6c544u));
  /* 10a5410d push 0 */
  push32((uint32_t)(0x0u));
  /* 10a5410f push 0 */
  push32((uint32_t)(0x0u));
  /* 10a54111 call dword ptr [0x10a73278] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73278))), 0x10a54117u);
  /* 10a54117 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a54119 je 0x10a54127 */
  if (C.zf) goto L_10a54127;
  /* 10a5411b mov dword ptr [0x10a70964], 1 */
  w32((uint32_t)(0x10a70964), (0x1u));
  /* 10a54125 jmp 0x10a54156 */
  goto L_10a54156;
L_10a54127:;
  /* 10a54127 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a54129 push 0x10a6c540 */
  push32((uint32_t)(0x10a6c540u));
  /* 10a5412e push 1 */
  push32((uint32_t)(0x1u));
  /* 10a54130 push 0x10a6c540 */
  push32((uint32_t)(0x10a6c540u));
  /* 10a54135 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a54137 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a54139 call dword ptr [0x10a73284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73284))), 0x10a5413fu);
  /* 10a5413f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a54141 je 0x10a5414f */
  if (C.zf) goto L_10a5414f;
  /* 10a54143 mov dword ptr [0x10a70964], 2 */
  w32((uint32_t)(0x10a70964), (0x2u));
  /* 10a5414d jmp 0x10a54156 */
  goto L_10a54156;
L_10a5414f:;
  /* 10a5414f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a54151 jmp 0x10a544b4 */
  goto L_10a544b4;
L_10a54156:;
  /* 10a54156 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5415a jle 0x10a5416f */
  if ((C.zf||C.sf!=C.of)) goto L_10a5416f;
  /* 10a5415c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a5415f push eax */
  push32((uint32_t)(EAX));
  /* 10a54160 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a54163 push ecx */
  push32((uint32_t)(ECX));
  /* 10a54164 call 0x10a544d0 */
  push32(0x10a54169u); f_10a544d0();
  /* 10a54169 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5416c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10a5416f:;
  /* 10a5416f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a54173 jle 0x10a54188 */
  if ((C.zf||C.sf!=C.of)) goto L_10a54188;
  /* 10a54175 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10a54178 push edx */
  push32((uint32_t)(EDX));
  /* 10a54179 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a5417c push eax */
  push32((uint32_t)(EAX));
  /* 10a5417d call 0x10a544d0 */
  push32(0x10a54182u); f_10a544d0();
  /* 10a54182 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a54185 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_10a54188:;
  /* 10a54188 cmp dword ptr [0x10a70964], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10a70964))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5418f jne 0x10a541b4 */
  if (!C.zf) goto L_10a541b4;
  /* 10a54191 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10a54194 push ecx */
  push32((uint32_t)(ECX));
  /* 10a54195 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a54198 push edx */
  push32((uint32_t)(EDX));
  /* 10a54199 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a5419c push eax */
  push32((uint32_t)(EAX));
  /* 10a5419d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a541a0 push ecx */
  push32((uint32_t)(ECX));
  /* 10a541a1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a541a4 push edx */
  push32((uint32_t)(EDX));
  /* 10a541a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a541a8 push eax */
  push32((uint32_t)(EAX));
  /* 10a541a9 call dword ptr [0x10a73284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73284))), 0x10a541afu);
  /* 10a541af jmp 0x10a544b4 */
  goto L_10a544b4;
L_10a541b4:;
  /* 10a541b4 cmp dword ptr [0x10a70964], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10a70964))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a541bb jne 0x10a544b2 */
  if (!C.zf) goto L_10a544b2;
  /* 10a541c1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a541c5 jne 0x10a541d0 */
  if (!C.zf) goto L_10a541d0;
  /* 10a541c7 mov ecx, dword ptr [0x10a70810] */
  ECX = (r32((uint32_t)(0x10a70810)));
  /* 10a541cd mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_10a541d0:;
  /* 10a541d0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a541d4 je 0x10a541e0 */
  if (C.zf) goto L_10a541e0;
  /* 10a541d6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a541da jne 0x10a5435c */
  if (!C.zf) goto L_10a5435c;
L_10a541e0:;
  /* 10a541e0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a541e3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a541e6 jne 0x10a541f2 */
  if (!C.zf) goto L_10a541f2;
  /* 10a541e8 mov eax, 2 */
  EAX = (0x2u);
  /* 10a541ed jmp 0x10a544b4 */
  goto L_10a544b4;
L_10a541f2:;
  /* 10a541f2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a541f6 jle 0x10a54202 */
  if ((C.zf||C.sf!=C.of)) goto L_10a54202;
  /* 10a541f8 mov eax, 1 */
  EAX = (0x1u);
  /* 10a541fd jmp 0x10a544b4 */
  goto L_10a544b4;
L_10a54202:;
  /* 10a54202 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a54206 jle 0x10a54212 */
  if ((C.zf||C.sf!=C.of)) goto L_10a54212;
  /* 10a54208 mov eax, 3 */
  EAX = (0x3u);
  /* 10a5420d jmp 0x10a544b4 */
  goto L_10a544b4;
L_10a54212:;
  /* 10a54212 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 10a54215 push eax */
  push32((uint32_t)(EAX));
  /* 10a54216 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10a54219 push ecx */
  push32((uint32_t)(ECX));
  /* 10a5421a call dword ptr [0x10a732d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732d0))), 0x10a54220u);
  /* 10a54220 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a54222 jne 0x10a5422b */
  if (!C.zf) goto L_10a5422b;
  /* 10a54224 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a54226 jmp 0x10a544b4 */
  goto L_10a544b4;
L_10a5422b:;
  /* 10a5422b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5422f jne 0x10a54237 */
  if (!C.zf) goto L_10a54237;
  /* 10a54231 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a54235 je 0x10a54264 */
  if (C.zf) goto L_10a54264;
L_10a54237:;
  /* 10a54237 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5423b jne 0x10a54243 */
  if (!C.zf) goto L_10a54243;
  /* 10a5423d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a54241 je 0x10a54264 */
  if (C.zf) goto L_10a54264;
L_10a54243:;
  /* 10a54243 push 0x10a6cea8 */
  push32((uint32_t)(0x10a6cea8u));
  /* 10a54248 push 0 */
  push32((uint32_t)(0x0u));
  /* 10a5424a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 10a5424f push 0x10a6cea0 */
  push32((uint32_t)(0x10a6cea0u));
  /* 10a54254 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a54256 call 0x10a435e0 */
  push32(0x10a5425bu); f_10a435e0();
  /* 10a5425b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5425e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a54261 jne 0x10a54264 */
  if (!C.zf) goto L_10a54264;
  /* 10a54263 int3  */
  x86_unimpl("int3 @ 0x10a54263");
L_10a54264:;
  /* 10a54264 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a54266 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a54268 jne 0x10a5422b */
  if (!C.zf) goto L_10a5422b;
  /* 10a5426a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5426e jle 0x10a542e3 */
  if ((C.zf||C.sf!=C.of)) goto L_10a542e3;
  /* 10a54270 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a54274 jae 0x10a54280 */
  if (!C.cf) goto L_10a54280;
  /* 10a54276 mov eax, 3 */
  EAX = (0x3u);
  /* 10a5427b jmp 0x10a544b4 */
  goto L_10a544b4;
L_10a54280:;
  /* 10a54280 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 10a54283 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 10a54286 jmp 0x10a54291 */
  goto L_10a54291;
L_10a54288:;
  /* 10a54288 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10a5428b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5428e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_10a54291:;
  /* 10a54291 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10a54294 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a54296 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a54298 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a5429a je 0x10a542d9 */
  if (C.zf) goto L_10a542d9;
  /* 10a5429c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10a5429f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a542a1 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10a542a4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a542a6 je 0x10a542d9 */
  if (C.zf) goto L_10a542d9;
  /* 10a542a8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a542ab xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a542ad mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a542af mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10a542b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a542b4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a542b6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a542b8 jl 0x10a542d7 */
  if ((C.sf!=C.of)) goto L_10a542d7;
  /* 10a542ba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a542bd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a542bf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a542c1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10a542c4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a542c6 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10a542c9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a542cb jg 0x10a542d7 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a542d7;
  /* 10a542cd mov eax, 2 */
  EAX = (0x2u);
  /* 10a542d2 jmp 0x10a544b4 */
  goto L_10a544b4;
L_10a542d7:;
  /* 10a542d7 jmp 0x10a54288 */
  goto L_10a54288;
L_10a542d9:;
  /* 10a542d9 mov eax, 3 */
  EAX = (0x3u);
  /* 10a542de jmp 0x10a544b4 */
  goto L_10a544b4;
L_10a542e3:;
  /* 10a542e3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a542e7 jle 0x10a5435c */
  if ((C.zf||C.sf!=C.of)) goto L_10a5435c;
  /* 10a542e9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a542ed jae 0x10a542f9 */
  if (!C.cf) goto L_10a542f9;
  /* 10a542ef mov eax, 1 */
  EAX = (0x1u);
  /* 10a542f4 jmp 0x10a544b4 */
  goto L_10a544b4;
L_10a542f9:;
  /* 10a542f9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 10a542fc mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 10a542ff jmp 0x10a5430a */
  goto L_10a5430a;
L_10a54301:;
  /* 10a54301 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10a54304 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a54307 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_10a5430a:;
  /* 10a5430a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10a5430d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a5430f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a54311 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a54313 je 0x10a54352 */
  if (C.zf) goto L_10a54352;
  /* 10a54315 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10a54318 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a5431a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10a5431d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a5431f je 0x10a54352 */
  if (C.zf) goto L_10a54352;
  /* 10a54321 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a54324 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a54326 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10a54328 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10a5432b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10a5432d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10a5432f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a54331 jl 0x10a54350 */
  if ((C.sf!=C.of)) goto L_10a54350;
  /* 10a54333 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a54336 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a54338 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a5433a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10a5433d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a5433f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10a54342 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a54344 jg 0x10a54350 */
  if ((!C.zf&&C.sf==C.of)) goto L_10a54350;
  /* 10a54346 mov eax, 2 */
  EAX = (0x2u);
  /* 10a5434b jmp 0x10a544b4 */
  goto L_10a544b4;
L_10a54350:;
  /* 10a54350 jmp 0x10a54301 */
  goto L_10a54301;
L_10a54352:;
  /* 10a54352 mov eax, 1 */
  EAX = (0x1u);
  /* 10a54357 jmp 0x10a544b4 */
  goto L_10a544b4;
L_10a5435c:;
  /* 10a5435c push 0 */
  push32((uint32_t)(0x0u));
  /* 10a5435e push 0 */
  push32((uint32_t)(0x0u));
  /* 10a54360 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a54363 push ecx */
  push32((uint32_t)(ECX));
  /* 10a54364 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a54367 push edx */
  push32((uint32_t)(EDX));
  /* 10a54368 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a5436a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10a5436d push eax */
  push32((uint32_t)(EAX));
  /* 10a5436e call dword ptr [0x10a732c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732c4))), 0x10a54374u);
  /* 10a54374 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10a54377 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5437b jne 0x10a54384 */
  if (!C.zf) goto L_10a54384;
  /* 10a5437d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a5437f jmp 0x10a544b4 */
  goto L_10a544b4;
L_10a54384:;
  /* 10a54384 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10a5438b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a5438e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10a54390 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a54393 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10a54395 call 0x10a476c0 */
  push32(0x10a5439au); f_10a476c0();
  /* 10a5439a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 10a5439d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10a543a0 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 10a543a3 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10a543a6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10a543ad jmp 0x10a543c6 */
  goto L_10a543c6;
  /* 10a543af mov eax, 1 */
  EAX = (0x1u);
  /* 10a543b4 ret  */
  ESPCHK(0x10a540d0u, _esp0);
  ESP += 4; return;
  /* 10a543b5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10a543b8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10a543bf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10a543c6:;
  /* 10a543c6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a543ca jne 0x10a543d3 */
  if (!C.zf) goto L_10a543d3;
  /* 10a543cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a543ce jmp 0x10a544b4 */
  goto L_10a544b4;
L_10a543d3:;
  /* 10a543d3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a543d6 push edx */
  push32((uint32_t)(EDX));
  /* 10a543d7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a543da push eax */
  push32((uint32_t)(EAX));
  /* 10a543db mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10a543de push ecx */
  push32((uint32_t)(ECX));
  /* 10a543df mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10a543e2 push edx */
  push32((uint32_t)(EDX));
  /* 10a543e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10a543e5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10a543e8 push eax */
  push32((uint32_t)(EAX));
  /* 10a543e9 call dword ptr [0x10a732c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732c4))), 0x10a543efu);
  /* 10a543ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a543f1 jne 0x10a543fa */
  if (!C.zf) goto L_10a543fa;
  /* 10a543f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a543f5 jmp 0x10a544b4 */
  goto L_10a544b4;
L_10a543fa:;
  /* 10a543fa push 0 */
  push32((uint32_t)(0x0u));
  /* 10a543fc push 0 */
  push32((uint32_t)(0x0u));
  /* 10a543fe mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10a54401 push ecx */
  push32((uint32_t)(ECX));
  /* 10a54402 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a54405 push edx */
  push32((uint32_t)(EDX));
  /* 10a54406 push 9 */
  push32((uint32_t)(0x9u));
  /* 10a54408 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10a5440b push eax */
  push32((uint32_t)(EAX));
  /* 10a5440c call dword ptr [0x10a732c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732c4))), 0x10a54412u);
  /* 10a54412 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10a54415 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a54419 jne 0x10a54422 */
  if (!C.zf) goto L_10a54422;
  /* 10a5441b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a5441d jmp 0x10a544b4 */
  goto L_10a544b4;
L_10a54422:;
  /* 10a54422 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10a54429 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a5442c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10a5442e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a54431 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10a54433 call 0x10a476c0 */
  push32(0x10a54438u); f_10a476c0();
  /* 10a54438 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 10a5443b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10a5443e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 10a54441 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10a54444 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10a5444b jmp 0x10a54464 */
  goto L_10a54464;
  /* 10a5444d mov eax, 1 */
  EAX = (0x1u);
  /* 10a54452 ret  */
  ESPCHK(0x10a540d0u, _esp0);
  ESP += 4; return;
  /* 10a54453 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10a54456 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10a5445d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10a54464:;
  /* 10a54464 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a54468 jne 0x10a5446e */
  if (!C.zf) goto L_10a5446e;
  /* 10a5446a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a5446c jmp 0x10a544b4 */
  goto L_10a544b4;
L_10a5446e:;
  /* 10a5446e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a54471 push edx */
  push32((uint32_t)(EDX));
  /* 10a54472 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a54475 push eax */
  push32((uint32_t)(EAX));
  /* 10a54476 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10a54479 push ecx */
  push32((uint32_t)(ECX));
  /* 10a5447a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10a5447d push edx */
  push32((uint32_t)(EDX));
  /* 10a5447e push 1 */
  push32((uint32_t)(0x1u));
  /* 10a54480 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10a54483 push eax */
  push32((uint32_t)(EAX));
  /* 10a54484 call dword ptr [0x10a732c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a732c4))), 0x10a5448au);
  /* 10a5448a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a5448c jne 0x10a54492 */
  if (!C.zf) goto L_10a54492;
  /* 10a5448e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a54490 jmp 0x10a544b4 */
  goto L_10a544b4;
L_10a54492:;
  /* 10a54492 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10a54495 push ecx */
  push32((uint32_t)(ECX));
  /* 10a54496 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10a54499 push edx */
  push32((uint32_t)(EDX));
  /* 10a5449a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10a5449d push eax */
  push32((uint32_t)(EAX));
  /* 10a5449e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10a544a1 push ecx */
  push32((uint32_t)(ECX));
  /* 10a544a2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a544a5 push edx */
  push32((uint32_t)(EDX));
  /* 10a544a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a544a9 push eax */
  push32((uint32_t)(EAX));
  /* 10a544aa call dword ptr [0x10a73278] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73278))), 0x10a544b0u);
  /* 10a544b0 jmp 0x10a544b4 */
  goto L_10a544b4;
L_10a544b2:;
  /* 10a544b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a544b4:;
  /* 10a544b4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 10a544b7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a544ba mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10a544c1 pop edi */
  EDI = (pop32());
  /* 10a544c2 pop esi */
  ESI = (pop32());
  /* 10a544c3 pop ebx */
  EBX = (pop32());
  /* 10a544c4 mov esp, ebp */
  ESP = (EBP);
  /* 10a544c6 pop ebp */
  EBP = (pop32());
  /* 10a544c7 ret  */
  ESPCHK(0x10a540d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100144d0 @ 0x10a544d0 (80 bytes, 32 insns) */
void f_10a544d0(void) {
  FTRACE(0x10a544d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a544d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10a544d1 mov ebp, esp */
  EBP = (ESP);
  /* 10a544d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a544d6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a544d9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a544dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a544df mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a544e2:;
  /* 10a544e2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a544e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a544e8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a544eb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a544ee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a544f0 je 0x10a54507 */
  if (C.zf) goto L_10a54507;
  /* 10a544f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a544f5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a544f8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a544fa je 0x10a54507 */
  if (C.zf) goto L_10a54507;
  /* 10a544fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a544ff add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a54502 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a54505 jmp 0x10a544e2 */
  goto L_10a544e2;
L_10a54507:;
  /* 10a54507 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a5450a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10a5450d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a5450f jne 0x10a54519 */
  if (!C.zf) goto L_10a54519;
  /* 10a54511 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a54514 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a54517 jmp 0x10a5451c */
  goto L_10a5451c;
L_10a54519:;
  /* 10a54519 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10a5451c:;
  /* 10a5451c mov esp, ebp */
  ESP = (EBP);
  /* 10a5451e pop ebp */
  EBP = (pop32());
  /* 10a5451f ret  */
  ESPCHK(0x10a544d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014520 @ 0x10a54520 (736 bytes, 224 insns) */
void f_10a54520(void) {
  FTRACE(0x10a54520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a54520 push ebp */
  push32((uint32_t)(EBP));
  /* 10a54521 mov ebp, esp */
  EBP = (ESP);
  /* 10a54523 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a54526 push esi */
  push32((uint32_t)(ESI));
  /* 10a54527 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5452b je 0x10a5454c */
  if (C.zf) goto L_10a5454c;
  /* 10a5452d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10a5452f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a54532 push eax */
  push32((uint32_t)(EAX));
  /* 10a54533 call 0x10a54970 */
  push32(0x10a54538u); f_10a54970();
  /* 10a54538 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5453b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10a5453e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a54542 je 0x10a5454c */
  if (C.zf) goto L_10a5454c;
  /* 10a54544 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a54547 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5454a jne 0x10a54554 */
  if (!C.zf) goto L_10a54554;
L_10a5454c:;
  /* 10a5454c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a5454f jmp 0x10a547fb */
  goto L_10a547fb;
L_10a54554:;
  /* 10a54554 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a54557 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10a5455b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a5455d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a5455f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10a54560 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10a54563 mov ecx, dword ptr [0x10a7061c] */
  ECX = (r32((uint32_t)(0x10a7061c)));
  /* 10a54569 cmp ecx, dword ptr [0x10a70620] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10a70620))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5456f jne 0x10a54585 */
  if (!C.zf) goto L_10a54585;
  /* 10a54571 mov edx, dword ptr [0x10a7061c] */
  EDX = (r32((uint32_t)(0x10a7061c)));
  /* 10a54577 push edx */
  push32((uint32_t)(EDX));
  /* 10a54578 call 0x10a54880 */
  push32(0x10a5457du); f_10a54880();
  /* 10a5457d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a54580 mov dword ptr [0x10a7061c], eax */
  w32((uint32_t)(0x10a7061c), (EAX));
L_10a54585:;
  /* 10a54585 cmp dword ptr [0x10a7061c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a7061c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5458c jne 0x10a54645 */
  if (!C.zf) goto L_10a54645;
  /* 10a54592 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a54596 je 0x10a545b7 */
  if (C.zf) goto L_10a545b7;
  /* 10a54598 cmp dword ptr [0x10a70624], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a70624))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5459f je 0x10a545b7 */
  if (C.zf) goto L_10a545b7;
  /* 10a545a1 call 0x10a54020 */
  push32(0x10a545a6u); f_10a54020();
  /* 10a545a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a545a8 je 0x10a545b2 */
  if (C.zf) goto L_10a545b2;
  /* 10a545aa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a545ad jmp 0x10a547fb */
  goto L_10a547fb;
L_10a545b2:;
  /* 10a545b2 jmp 0x10a54645 */
  goto L_10a54645;
L_10a545b7:;
  /* 10a545b7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a545bb je 0x10a545c4 */
  if (C.zf) goto L_10a545c4;
  /* 10a545bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a545bf jmp 0x10a547fb */
  goto L_10a547fb;
L_10a545c4:;
  /* 10a545c4 cmp dword ptr [0x10a7061c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a7061c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a545cb jne 0x10a54604 */
  if (!C.zf) goto L_10a54604;
  /* 10a545cd push 0x87 */
  push32((uint32_t)(0x87u));
  /* 10a545d2 push 0x10a6cf00 */
  push32((uint32_t)(0x10a6cf00u));
  /* 10a545d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a545d9 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a545db call 0x10a44520 */
  push32(0x10a545e0u); f_10a44520();
  /* 10a545e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a545e3 mov dword ptr [0x10a7061c], eax */
  w32((uint32_t)(0x10a7061c), (EAX));
  /* 10a545e8 cmp dword ptr [0x10a7061c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a7061c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a545ef jne 0x10a545f9 */
  if (!C.zf) goto L_10a545f9;
  /* 10a545f1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a545f4 jmp 0x10a547fb */
  goto L_10a547fb;
L_10a545f9:;
  /* 10a545f9 mov eax, dword ptr [0x10a7061c] */
  EAX = (r32((uint32_t)(0x10a7061c)));
  /* 10a545fe mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10a54604:;
  /* 10a54604 cmp dword ptr [0x10a70624], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a70624))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5460b jne 0x10a54645 */
  if (!C.zf) goto L_10a54645;
  /* 10a5460d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 10a54612 push 0x10a6cf00 */
  push32((uint32_t)(0x10a6cf00u));
  /* 10a54617 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a54619 push 4 */
  push32((uint32_t)(0x4u));
  /* 10a5461b call 0x10a44520 */
  push32(0x10a54620u); f_10a44520();
  /* 10a54620 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a54623 mov dword ptr [0x10a70624], eax */
  w32((uint32_t)(0x10a70624), (EAX));
  /* 10a54628 cmp dword ptr [0x10a70624], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a70624))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5462f jne 0x10a54639 */
  if (!C.zf) goto L_10a54639;
  /* 10a54631 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a54634 jmp 0x10a547fb */
  goto L_10a547fb;
L_10a54639:;
  /* 10a54639 mov ecx, dword ptr [0x10a70624] */
  ECX = (r32((uint32_t)(0x10a70624)));
  /* 10a5463f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_10a54645:;
  /* 10a54645 mov edx, dword ptr [0x10a7061c] */
  EDX = (r32((uint32_t)(0x10a7061c)));
  /* 10a5464b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10a5464e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a54651 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a54654 push eax */
  push32((uint32_t)(EAX));
  /* 10a54655 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a54658 push ecx */
  push32((uint32_t)(ECX));
  /* 10a54659 call 0x10a54800 */
  push32(0x10a5465eu); f_10a54800();
  /* 10a5465e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a54661 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a54664 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a54668 jl 0x10a54701 */
  if ((C.sf!=C.of)) goto L_10a54701;
  /* 10a5466e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a54671 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a54674 je 0x10a54701 */
  if (C.zf) goto L_10a54701;
  /* 10a5467a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5467e je 0x10a546f3 */
  if (C.zf) goto L_10a546f3;
  /* 10a54680 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a54682 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a54685 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a54688 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10a5468b push edx */
  push32((uint32_t)(EDX));
  /* 10a5468c call 0x10a44fb0 */
  push32(0x10a54691u); f_10a44fb0();
  /* 10a54691 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a54694 jmp 0x10a5469f */
  goto L_10a5469f;
L_10a54696:;
  /* 10a54696 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a54699 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5469c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10a5469f:;
  /* 10a5469f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a546a2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a546a5 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a546a9 je 0x10a546c0 */
  if (C.zf) goto L_10a546c0;
  /* 10a546ab mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a546ae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a546b1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a546b4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10a546b7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 10a546bb mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10a546be jmp 0x10a54696 */
  goto L_10a54696;
L_10a546c0:;
  /* 10a546c0 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 10a546c5 push 0x10a6cf00 */
  push32((uint32_t)(0x10a6cf00u));
  /* 10a546ca push 2 */
  push32((uint32_t)(0x2u));
  /* 10a546cc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a546cf shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10a546d2 push eax */
  push32((uint32_t)(EAX));
  /* 10a546d3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a546d6 push ecx */
  push32((uint32_t)(ECX));
  /* 10a546d7 call 0x10a449b0 */
  push32(0x10a546dcu); f_10a449b0();
  /* 10a546dc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a546df mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a546e2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a546e6 je 0x10a546f1 */
  if (C.zf) goto L_10a546f1;
  /* 10a546e8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a546eb mov dword ptr [0x10a7061c], edx */
  w32((uint32_t)(0x10a7061c), (EDX));
L_10a546f1:;
  /* 10a546f1 jmp 0x10a546ff */
  goto L_10a546ff;
L_10a546f3:;
  /* 10a546f3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a546f6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a546f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a546fc mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_10a546ff:;
  /* 10a546ff jmp 0x10a54774 */
  goto L_10a54774;
L_10a54701:;
  /* 10a54701 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a54705 jne 0x10a5476d */
  if (!C.zf) goto L_10a5476d;
  /* 10a54707 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5470b jge 0x10a54715 */
  if ((C.sf==C.of)) goto L_10a54715;
  /* 10a5470d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a54710 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a54712 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10a54715:;
  /* 10a54715 push 0xce */
  push32((uint32_t)(0xceu));
  /* 10a5471a push 0x10a6cf00 */
  push32((uint32_t)(0x10a6cf00u));
  /* 10a5471f push 2 */
  push32((uint32_t)(0x2u));
  /* 10a54721 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a54724 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 10a5472b push edx */
  push32((uint32_t)(EDX));
  /* 10a5472c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a5472f push eax */
  push32((uint32_t)(EAX));
  /* 10a54730 call 0x10a449b0 */
  push32(0x10a54735u); f_10a449b0();
  /* 10a54735 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a54738 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a5473b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5473f jne 0x10a54749 */
  if (!C.zf) goto L_10a54749;
  /* 10a54741 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a54744 jmp 0x10a547fb */
  goto L_10a547fb;
L_10a54749:;
  /* 10a54749 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a5474c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a5474f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a54752 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 10a54755 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a54758 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a5475b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 10a54763 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a54766 mov dword ptr [0x10a7061c], eax */
  w32((uint32_t)(0x10a7061c), (EAX));
  /* 10a5476b jmp 0x10a54774 */
  goto L_10a54774;
L_10a5476d:;
  /* 10a5476d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a5476f jmp 0x10a547fb */
  goto L_10a547fb;
L_10a54774:;
  /* 10a54774 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a54778 je 0x10a547f9 */
  if (C.zf) goto L_10a547f9;
  /* 10a5477a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 10a5477f push 0x10a6cf00 */
  push32((uint32_t)(0x10a6cf00u));
  /* 10a54784 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a54786 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a54789 push ecx */
  push32((uint32_t)(ECX));
  /* 10a5478a call 0x10a47350 */
  push32(0x10a5478fu); f_10a47350();
  /* 10a5478f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a54792 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a54795 push eax */
  push32((uint32_t)(EAX));
  /* 10a54796 call 0x10a44520 */
  push32(0x10a5479bu); f_10a44520();
  /* 10a5479b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5479e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10a547a1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a547a5 je 0x10a547f9 */
  if (C.zf) goto L_10a547f9;
  /* 10a547a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a547aa push edx */
  push32((uint32_t)(EDX));
  /* 10a547ab mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a547ae push eax */
  push32((uint32_t)(EAX));
  /* 10a547af call 0x10a474d0 */
  push32(0x10a547b4u); f_10a474d0();
  /* 10a547b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a547b7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10a547ba sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a547bd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a547c0 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a547c2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10a547c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a547c8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10a547cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a547ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a547d1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a547d4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10a547d7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10a547d9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a547db not edx */
  EDX = (~(EDX));
  /* 10a547dd and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10a547e0 push edx */
  push32((uint32_t)(EDX));
  /* 10a547e1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a547e4 push eax */
  push32((uint32_t)(EAX));
  /* 10a547e5 call dword ptr [0x10a73274] */
  call_ind((uint32_t)(r32((uint32_t)(0x10a73274))), 0x10a547ebu);
  /* 10a547eb push 2 */
  push32((uint32_t)(0x2u));
  /* 10a547ed mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a547f0 push ecx */
  push32((uint32_t)(ECX));
  /* 10a547f1 call 0x10a44fb0 */
  push32(0x10a547f6u); f_10a44fb0();
  /* 10a547f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a547f9:;
  /* 10a547f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a547fb:;
  /* 10a547fb pop esi */
  ESI = (pop32());
  /* 10a547fc mov esp, ebp */
  ESP = (EBP);
  /* 10a547fe pop ebp */
  EBP = (pop32());
  /* 10a547ff ret  */
  ESPCHK(0x10a54520u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x10a54800 (124 bytes, 47 insns) */
void f_10a54800(void) {
  FTRACE(0x10a54800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a54800 push ebp */
  push32((uint32_t)(EBP));
  /* 10a54801 mov ebp, esp */
  EBP = (ESP);
  /* 10a54803 push ecx */
  push32((uint32_t)(ECX));
  /* 10a54804 mov eax, dword ptr [0x10a7061c] */
  EAX = (r32((uint32_t)(0x10a7061c)));
  /* 10a54809 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10a5480c jmp 0x10a54817 */
  goto L_10a54817;
L_10a5480e:;
  /* 10a5480e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a54811 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a54814 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10a54817:;
  /* 10a54817 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a5481a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5481d je 0x10a5486a */
  if (C.zf) goto L_10a5486a;
  /* 10a5481f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a54822 push eax */
  push32((uint32_t)(EAX));
  /* 10a54823 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a54826 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a54828 push edx */
  push32((uint32_t)(EDX));
  /* 10a54829 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a5482c push eax */
  push32((uint32_t)(EAX));
  /* 10a5482d call 0x10a53fd0 */
  push32(0x10a54832u); f_10a53fd0();
  /* 10a54832 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a54835 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10a54837 jne 0x10a54868 */
  if (!C.zf) goto L_10a54868;
  /* 10a54839 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a5483c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a5483e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a54841 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 10a54845 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a54848 je 0x10a5485a */
  if (C.zf) goto L_10a5485a;
  /* 10a5484a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a5484d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a5484f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a54852 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 10a54856 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a54858 jne 0x10a54868 */
  if (!C.zf) goto L_10a54868;
L_10a5485a:;
  /* 10a5485a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a5485d sub eax, dword ptr [0x10a7061c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10a7061c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a54863 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10a54866 jmp 0x10a54878 */
  goto L_10a54878;
L_10a54868:;
  /* 10a54868 jmp 0x10a5480e */
  goto L_10a5480e;
L_10a5486a:;
  /* 10a5486a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a5486d sub eax, dword ptr [0x10a7061c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10a7061c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a54873 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10a54876 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_10a54878:;
  /* 10a54878 mov esp, ebp */
  ESP = (EBP);
  /* 10a5487a pop ebp */
  EBP = (pop32());
  /* 10a5487b ret  */
  ESPCHK(0x10a54800u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x10a54880 (238 bytes, 80 insns) */
void f_10a54880(void) {
  FTRACE(0x10a54880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a54880 push ebp */
  push32((uint32_t)(EBP));
  /* 10a54881 mov ebp, esp */
  EBP = (ESP);
  /* 10a54883 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a54886 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10a5488d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a54890 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a54893 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a54897 jne 0x10a548a0 */
  if (!C.zf) goto L_10a548a0;
  /* 10a54899 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a5489b jmp 0x10a5496a */
  goto L_10a5496a;
L_10a548a0:;
  /* 10a548a0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a548a3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a548a5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a548a8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a548ab mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10a548ae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a548b0 je 0x10a548bd */
  if (C.zf) goto L_10a548bd;
  /* 10a548b2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a548b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a548b8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10a548bb jmp 0x10a548a0 */
  goto L_10a548a0;
L_10a548bd:;
  /* 10a548bd push 0x146 */
  push32((uint32_t)(0x146u));
  /* 10a548c2 push 0x10a6cf00 */
  push32((uint32_t)(0x10a6cf00u));
  /* 10a548c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10a548c9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10a548cc lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 10a548d3 push eax */
  push32((uint32_t)(EAX));
  /* 10a548d4 call 0x10a44520 */
  push32(0x10a548d9u); f_10a44520();
  /* 10a548d9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a548dc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10a548df mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a548e2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10a548e5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a548e9 jne 0x10a548f5 */
  if (!C.zf) goto L_10a548f5;
  /* 10a548eb push 9 */
  push32((uint32_t)(0x9u));
  /* 10a548ed call 0x10a43490 */
  push32(0x10a548f2u); f_10a43490();
  /* 10a548f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a548f5:;
  /* 10a548f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a548f8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10a548fb:;
  /* 10a548fb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a548fe cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a54901 je 0x10a5495e */
  if (C.zf) goto L_10a5495e;
  /* 10a54903 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 10a54908 push 0x10a6cf00 */
  push32((uint32_t)(0x10a6cf00u));
  /* 10a5490d push 2 */
  push32((uint32_t)(0x2u));
  /* 10a5490f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a54912 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10a54914 push edx */
  push32((uint32_t)(EDX));
  /* 10a54915 call 0x10a47350 */
  push32(0x10a5491au); f_10a47350();
  /* 10a5491a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5491d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a54920 push eax */
  push32((uint32_t)(EAX));
  /* 10a54921 call 0x10a44520 */
  push32(0x10a54926u); f_10a44520();
  /* 10a54926 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a54929 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a5492c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10a5492e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a54931 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a54934 je 0x10a5494a */
  if (C.zf) goto L_10a5494a;
  /* 10a54936 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a54939 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10a5493b push ecx */
  push32((uint32_t)(ECX));
  /* 10a5493c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a5493f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10a54941 push eax */
  push32((uint32_t)(EAX));
  /* 10a54942 call 0x10a474d0 */
  push32(0x10a54947u); f_10a474d0();
  /* 10a54947 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10a5494a:;
  /* 10a5494a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10a5494d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a54950 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10a54953 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a54956 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a54959 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10a5495c jmp 0x10a548fb */
  goto L_10a548fb;
L_10a5495e:;
  /* 10a5495e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10a54961 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10a54967 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10a5496a:;
  /* 10a5496a mov esp, ebp */
  ESP = (EBP);
  /* 10a5496c pop ebp */
  EBP = (pop32());
  /* 10a5496d ret  */
  ESPCHK(0x10a54880u, _esp0);
  ESP += 4; return;
}

/* FUN_10014970 @ 0x10a54970 (237 bytes, 81 insns) */
void f_10a54970(void) {
  FTRACE(0x10a54970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a54970 push ebp */
  push32((uint32_t)(EBP));
  /* 10a54971 mov ebp, esp */
  EBP = (ESP);
  /* 10a54973 push ecx */
  push32((uint32_t)(ECX));
  /* 10a54974 cmp dword ptr [0x10a71d6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10a71d6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a5497b jne 0x10a54992 */
  if (!C.zf) goto L_10a54992;
  /* 10a5497d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10a54980 push eax */
  push32((uint32_t)(EAX));
  /* 10a54981 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a54984 push ecx */
  push32((uint32_t)(ECX));
  /* 10a54985 call 0x10a54a70 */
  push32(0x10a5498au); f_10a54a70();
  /* 10a5498a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5498d jmp 0x10a54a59 */
  goto L_10a54a59;
L_10a54992:;
  /* 10a54992 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10a54994 call 0x10a47f20 */
  push32(0x10a54999u); f_10a47f20();
  /* 10a54999 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a5499c jmp 0x10a549a7 */
  goto L_10a549a7;
L_10a5499e:;
  /* 10a5499e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a549a1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a549a4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10a549a7:;
  /* 10a549a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a549aa movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 10a549ae mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 10a549b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a549b5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a549bb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10a549bd je 0x10a54a3b */
  if (C.zf) goto L_10a54a3b;
  /* 10a549bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a549c2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a549c7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a549c9 mov cl, byte ptr [eax + 0x10a71e81] */
  CL = (r8((uint32_t)(EAX + 0x10a71e81)));
  /* 10a549cf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10a549d2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a549d4 je 0x10a54a26 */
  if (C.zf) goto L_10a54a26;
  /* 10a549d6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a549d9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a549dc mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10a549df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a549e2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a549e4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a549e6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10a549e8 jne 0x10a549f8 */
  if (!C.zf) goto L_10a549f8;
  /* 10a549ea push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10a549ec call 0x10a47fc0 */
  push32(0x10a549f1u); f_10a47fc0();
  /* 10a549f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a549f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a549f6 jmp 0x10a54a59 */
  goto L_10a54a59;
L_10a549f8:;
  /* 10a549f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a549fb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a54a01 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10a54a04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a54a07 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10a54a09 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10a54a0b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10a54a0d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a54a10 jne 0x10a54a24 */
  if (!C.zf) goto L_10a54a24;
  /* 10a54a12 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10a54a14 call 0x10a47fc0 */
  push32(0x10a54a19u); f_10a47fc0();
  /* 10a54a19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a54a1c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a54a1f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10a54a22 jmp 0x10a54a59 */
  goto L_10a54a59;
L_10a54a24:;
  /* 10a54a24 jmp 0x10a54a36 */
  goto L_10a54a36;
L_10a54a26:;
  /* 10a54a26 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a54a29 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10a54a2f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a54a32 jne 0x10a54a36 */
  if (!C.zf) goto L_10a54a36;
  /* 10a54a34 jmp 0x10a54a3b */
  goto L_10a54a3b;
L_10a54a36:;
  /* 10a54a36 jmp 0x10a5499e */
  goto L_10a5499e;
L_10a54a3b:;
  /* 10a54a3b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10a54a3d call 0x10a47fc0 */
  push32(0x10a54a42u); f_10a47fc0();
  /* 10a54a42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10a54a45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10a54a48 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a54a4d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10a54a50 jne 0x10a54a57 */
  if (!C.zf) goto L_10a54a57;
  /* 10a54a52 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10a54a55 jmp 0x10a54a59 */
  goto L_10a54a59;
L_10a54a57:;
  /* 10a54a57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10a54a59:;
  /* 10a54a59 mov esp, ebp */
  ESP = (EBP);
  /* 10a54a5b pop ebp */
  EBP = (pop32());
  /* 10a54a5c ret  */
  ESPCHK(0x10a54970u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x10a54a70 (193 bytes, 87 insns) */
void f_10a54a70(void) {
  FTRACE(0x10a54a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a54a70 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a54a72 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10a54a76 push ebx */
  push32((uint32_t)(EBX));
  /* 10a54a77 mov ebx, eax */
  EBX = (EAX);
  /* 10a54a79 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10a54a7c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10a54a80 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10a54a86 je 0x10a54a9b */
  if (C.zf) goto L_10a54a9b;
L_10a54a88:;
  /* 10a54a88 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 10a54a8a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10a54a8b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a54a8d je 0x10a54a60 */
  if (C.zf) { jmp_ind(0x10a54a60u); return; }
  /* 10a54a8f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10a54a91 je 0x10a54ae4 */
  if (C.zf) goto L_10a54ae4;
  /* 10a54a93 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10a54a99 jne 0x10a54a88 */
  if (!C.zf) goto L_10a54a88;
L_10a54a9b:;
  /* 10a54a9b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 10a54a9d push edi */
  push32((uint32_t)(EDI));
  /* 10a54a9e mov eax, ebx */
  EAX = (EBX);
  /* 10a54aa0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 10a54aa3 push esi */
  push32((uint32_t)(ESI));
  /* 10a54aa4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_10a54aa6:;
  /* 10a54aa6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10a54aa8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 10a54aad mov eax, ecx */
  EAX = (ECX);
  /* 10a54aaf mov esi, edi */
  ESI = (EDI);
  /* 10a54ab1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 10a54ab3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a54ab5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10a54ab7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10a54aba xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10a54abd xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10a54abf xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10a54ac1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10a54ac4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 10a54aca jne 0x10a54ae8 */
  if (!C.zf) goto L_10a54ae8;
  /* 10a54acc and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10a54ad1 je 0x10a54aa6 */
  if (C.zf) goto L_10a54aa6;
  /* 10a54ad3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10a54ad8 jne 0x10a54ae2 */
  if (!C.zf) goto L_10a54ae2;
  /* 10a54ada and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 10a54ae0 jne 0x10a54aa6 */
  if (!C.zf) goto L_10a54aa6;
L_10a54ae2:;
  /* 10a54ae2 pop esi */
  ESI = (pop32());
  /* 10a54ae3 pop edi */
  EDI = (pop32());
L_10a54ae4:;
  /* 10a54ae4 pop ebx */
  EBX = (pop32());
  /* 10a54ae5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10a54ae7 ret  */
  ESPCHK(0x10a54a70u, _esp0);
  ESP += 4; return;
L_10a54ae8:;
  /* 10a54ae8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10a54aeb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a54aed je 0x10a54b25 */
  if (C.zf) goto L_10a54b25;
  /* 10a54aef test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10a54af1 je 0x10a54ae2 */
  if (C.zf) goto L_10a54ae2;
  /* 10a54af3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a54af5 je 0x10a54b1e */
  if (C.zf) goto L_10a54b1e;
  /* 10a54af7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10a54af9 je 0x10a54ae2 */
  if (C.zf) goto L_10a54ae2;
  /* 10a54afb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10a54afe cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a54b00 je 0x10a54b17 */
  if (C.zf) goto L_10a54b17;
  /* 10a54b02 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10a54b04 je 0x10a54ae2 */
  if (C.zf) goto L_10a54ae2;
  /* 10a54b06 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10a54b08 je 0x10a54b10 */
  if (C.zf) goto L_10a54b10;
  /* 10a54b0a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10a54b0c je 0x10a54ae2 */
  if (C.zf) goto L_10a54ae2;
  /* 10a54b0e jmp 0x10a54aa6 */
  goto L_10a54aa6;
L_10a54b10:;
  /* 10a54b10 pop esi */
  ESI = (pop32());
  /* 10a54b11 pop edi */
  EDI = (pop32());
  /* 10a54b12 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 10a54b15 pop ebx */
  EBX = (pop32());
  /* 10a54b16 ret  */
  ESPCHK(0x10a54a70u, _esp0);
  ESP += 4; return;
L_10a54b17:;
  /* 10a54b17 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 10a54b1a pop esi */
  ESI = (pop32());
  /* 10a54b1b pop edi */
  EDI = (pop32());
  /* 10a54b1c pop ebx */
  EBX = (pop32());
  /* 10a54b1d ret  */
  ESPCHK(0x10a54a70u, _esp0);
  ESP += 4; return;
L_10a54b1e:;
  /* 10a54b1e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 10a54b21 pop esi */
  ESI = (pop32());
  /* 10a54b22 pop edi */
  EDI = (pop32());
  /* 10a54b23 pop ebx */
  EBX = (pop32());
  /* 10a54b24 ret  */
  ESPCHK(0x10a54a70u, _esp0);
  ESP += 4; return;
L_10a54b25:;
  /* 10a54b25 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 10a54b28 pop esi */
  ESI = (pop32());
  /* 10a54b29 pop edi */
  EDI = (pop32());
  /* 10a54b2a pop ebx */
  EBX = (pop32());
  /* 10a54b2b ret  */
  ESPCHK(0x10a54a70u, _esp0);
  ESP += 4; return;
  /* 10a54b2c jmp dword ptr [0x10a732d8] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10a732d8)))); return;
}

/* RtlUnwind @ 0x10a54c7c (6 bytes, 1 insns) */
void f_10a54c7c(void) {
  FTRACE(0x10a54c7cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10a54c7c jmp dword ptr [0x10a732ac] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10a732ac)))); return;
}

