#include "recomp.h"

/* __close_lk @ 0x12a0f520 (170 bytes, 59 insns) */
void f_12a0f520(void) {
  FTRACE(0x12a0f520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0f520 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0f521 mov ebp, esp */
  EBP = (ESP);
  /* 12a0f523 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0f524 push esi */
  push32((uint32_t)(ESI));
  /* 12a0f525 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0f528 push eax */
  push32((uint32_t)(EAX));
  /* 12a0f529 call 0x12a0be90 */
  push32(0x12a0f52eu); f_12a0be90();
  /* 12a0f52e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f531 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0f534 je 0x12a0f573 */
  if (C.zf) goto L_12a0f573;
  /* 12a0f536 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0f53a je 0x12a0f542 */
  if (C.zf) goto L_12a0f542;
  /* 12a0f53c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0f540 jne 0x12a0f55c */
  if (!C.zf) goto L_12a0f55c;
L_12a0f542:;
  /* 12a0f542 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0f544 call 0x12a0be90 */
  push32(0x12a0f549u); f_12a0be90();
  /* 12a0f549 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f54c mov esi, eax */
  ESI = (EAX);
  /* 12a0f54e push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0f550 call 0x12a0be90 */
  push32(0x12a0f555u); f_12a0be90();
  /* 12a0f555 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f558 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0f55a je 0x12a0f573 */
  if (C.zf) goto L_12a0f573;
L_12a0f55c:;
  /* 12a0f55c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0f55f push ecx */
  push32((uint32_t)(ECX));
  /* 12a0f560 call 0x12a0be90 */
  push32(0x12a0f565u); f_12a0be90();
  /* 12a0f565 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f568 push eax */
  push32((uint32_t)(EAX));
  /* 12a0f569 call dword ptr [0x12a30238] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30238))), 0x12a0f56fu);
  /* 12a0f56f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0f571 je 0x12a0f57c */
  if (C.zf) goto L_12a0f57c;
L_12a0f573:;
  /* 12a0f573 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12a0f57a jmp 0x12a0f585 */
  goto L_12a0f585;
L_12a0f57c:;
  /* 12a0f57c call dword ptr [0x12a30294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30294))), 0x12a0f582u);
  /* 12a0f582 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12a0f585:;
  /* 12a0f585 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0f588 push edx */
  push32((uint32_t)(EDX));
  /* 12a0f589 call 0x12a0bdb0 */
  push32(0x12a0f58eu); f_12a0bdb0();
  /* 12a0f58e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f591 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0f594 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12a0f597 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0f59a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12a0f59d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a0f5a0 mov edx, dword ptr [eax*4 + 0x12a2fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12a2fe60)));
  /* 12a0f5a7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 12a0f5ac cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0f5b0 je 0x12a0f5c3 */
  if (C.zf) goto L_12a0f5c3;
  /* 12a0f5b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0f5b5 push eax */
  push32((uint32_t)(EAX));
  /* 12a0f5b6 call 0x12a0a750 */
  push32(0x12a0f5bbu); f_12a0a750();
  /* 12a0f5bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f5be or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a0f5c1 jmp 0x12a0f5c5 */
  goto L_12a0f5c5;
L_12a0f5c3:;
  /* 12a0f5c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12a0f5c5:;
  /* 12a0f5c5 pop esi */
  ESI = (pop32());
  /* 12a0f5c6 mov esp, ebp */
  ESP = (EBP);
  /* 12a0f5c8 pop ebp */
  EBP = (pop32());
  /* 12a0f5c9 ret  */
  ESPCHK(0x12a0f520u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f5d0 @ 0x12a0f5d0 (146 bytes, 52 insns) */
void f_12a0f5d0(void) {
  FTRACE(0x12a0f5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0f5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0f5d1 mov ebp, esp */
  EBP = (ESP);
  /* 12a0f5d3 push ebx */
  push32((uint32_t)(EBX));
  /* 12a0f5d4 push esi */
  push32((uint32_t)(ESI));
  /* 12a0f5d5 push edi */
  push32((uint32_t)(EDI));
L_12a0f5d6:;
  /* 12a0f5d6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0f5da jne 0x12a0f5fa */
  if (!C.zf) goto L_12a0f5fa;
  /* 12a0f5dc push 0x12a29fc8 */
  push32((uint32_t)(0x12a29fc8u));
  /* 12a0f5e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0f5e3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12a0f5e5 push 0x12a2a690 */
  push32((uint32_t)(0x12a2a690u));
  /* 12a0f5ea push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0f5ec call 0x12a019e0 */
  push32(0x12a0f5f1u); f_12a019e0();
  /* 12a0f5f1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f5f4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0f5f7 jne 0x12a0f5fa */
  if (!C.zf) goto L_12a0f5fa;
  /* 12a0f5f9 int3  */
  x86_unimpl("int3 @ 0x12a0f5f9");
L_12a0f5fa:;
  /* 12a0f5fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0f5fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0f5fe jne 0x12a0f5d6 */
  if (!C.zf) goto L_12a0f5d6;
  /* 12a0f600 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0f603 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12a0f606 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 12a0f60c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a0f60e je 0x12a0f65d */
  if (C.zf) goto L_12a0f65d;
  /* 12a0f610 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0f613 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12a0f616 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12a0f619 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a0f61b je 0x12a0f65d */
  if (C.zf) goto L_12a0f65d;
  /* 12a0f61d push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0f61f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0f622 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12a0f625 push eax */
  push32((uint32_t)(EAX));
  /* 12a0f626 call 0x12a033b0 */
  push32(0x12a0f62bu); f_12a033b0();
  /* 12a0f62b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f62e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0f631 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12a0f634 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 12a0f63a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0f63d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12a0f640 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0f643 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12a0f649 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0f64c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12a0f653 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0f656 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_12a0f65d:;
  /* 12a0f65d pop edi */
  EDI = (pop32());
  /* 12a0f65e pop esi */
  ESI = (pop32());
  /* 12a0f65f pop ebx */
  EBX = (pop32());
  /* 12a0f660 pop ebp */
  EBP = (pop32());
  /* 12a0f661 ret  */
  ESPCHK(0x12a0f5d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f670 @ 0x12a0f670 (289 bytes, 97 insns) */
void f_12a0f670(void) {
  FTRACE(0x12a0f670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0f670 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0f671 mov ebp, esp */
  EBP = (ESP);
  /* 12a0f673 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0f676 push esi */
  push32((uint32_t)(ESI));
  /* 12a0f677 mov eax, dword ptr [0x12a2dc98] */
  EAX = (r32((uint32_t)(0x12a2dc98)));
  /* 12a0f67c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12a0f67f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12a0f686 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12a0f68d jmp 0x12a0f698 */
  goto L_12a0f698;
L_12a0f68f:;
  /* 12a0f68f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0f692 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f695 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12a0f698:;
  /* 12a0f698 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0f69c jae 0x12a0f6d1 */
  if (!C.cf) goto L_12a0f6d1;
  /* 12a0f69e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0f6a1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0f6a4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12a0f6a7 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0f6a8 call 0x12a05750 */
  push32(0x12a0f6adu); f_12a05750();
  /* 12a0f6ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f6b0 mov esi, eax */
  ESI = (EAX);
  /* 12a0f6b2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0f6b5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0f6b8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 12a0f6bc push ecx */
  push32((uint32_t)(ECX));
  /* 12a0f6bd call 0x12a05750 */
  push32(0x12a0f6c2u); f_12a05750();
  /* 12a0f6c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f6c5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f6c8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12a0f6cc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12a0f6cf jmp 0x12a0f68f */
  goto L_12a0f68f;
L_12a0f6d1:;
  /* 12a0f6d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0f6d4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f6d7 push eax */
  push32((uint32_t)(EAX));
  /* 12a0f6d8 call 0x12a02900 */
  push32(0x12a0f6ddu); f_12a02900();
  /* 12a0f6dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f6e0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a0f6e3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0f6e7 je 0x12a0f789 */
  if (C.zf) goto L_12a0f789;
  /* 12a0f6ed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0f6f0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12a0f6f3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12a0f6fa jmp 0x12a0f705 */
  goto L_12a0f705;
L_12a0f6fc:;
  /* 12a0f6fc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0f6ff add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f702 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12a0f705:;
  /* 12a0f705 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0f709 jae 0x12a0f77a */
  if (!C.cf) goto L_12a0f77a;
  /* 12a0f70b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a0f70e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 12a0f711 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a0f714 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f717 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12a0f71a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0f71d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0f720 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12a0f723 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0f724 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a0f727 push edx */
  push32((uint32_t)(EDX));
  /* 12a0f728 call 0x12a058d0 */
  push32(0x12a0f72du); f_12a058d0();
  /* 12a0f72d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f730 push eax */
  push32((uint32_t)(EAX));
  /* 12a0f731 call 0x12a05750 */
  push32(0x12a0f736u); f_12a05750();
  /* 12a0f736 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f739 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a0f73c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f73e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12a0f741 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a0f744 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 12a0f747 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a0f74a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f74d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12a0f750 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0f753 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0f756 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 12a0f75a push eax */
  push32((uint32_t)(EAX));
  /* 12a0f75b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a0f75e push ecx */
  push32((uint32_t)(ECX));
  /* 12a0f75f call 0x12a058d0 */
  push32(0x12a0f764u); f_12a058d0();
  /* 12a0f764 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f767 push eax */
  push32((uint32_t)(EAX));
  /* 12a0f768 call 0x12a05750 */
  push32(0x12a0f76du); f_12a05750();
  /* 12a0f76d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f770 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a0f773 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f775 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12a0f778 jmp 0x12a0f6fc */
  goto L_12a0f6fc;
L_12a0f77a:;
  /* 12a0f77a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a0f77d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12a0f780 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a0f783 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f786 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12a0f789:;
  /* 12a0f789 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0f78c pop esi */
  ESI = (pop32());
  /* 12a0f78d mov esp, ebp */
  ESP = (EBP);
  /* 12a0f78f pop ebp */
  EBP = (pop32());
  /* 12a0f790 ret  */
  ESPCHK(0x12a0f670u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f7a0 @ 0x12a0f7a0 (291 bytes, 97 insns) */
void f_12a0f7a0(void) {
  FTRACE(0x12a0f7a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0f7a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0f7a1 mov ebp, esp */
  EBP = (ESP);
  /* 12a0f7a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0f7a6 push esi */
  push32((uint32_t)(ESI));
  /* 12a0f7a7 mov eax, dword ptr [0x12a2dc98] */
  EAX = (r32((uint32_t)(0x12a2dc98)));
  /* 12a0f7ac mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12a0f7af mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12a0f7b6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12a0f7bd jmp 0x12a0f7c8 */
  goto L_12a0f7c8;
L_12a0f7bf:;
  /* 12a0f7bf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0f7c2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f7c5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12a0f7c8:;
  /* 12a0f7c8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0f7cc jae 0x12a0f802 */
  if (!C.cf) goto L_12a0f802;
  /* 12a0f7ce mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0f7d1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0f7d4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 12a0f7d8 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0f7d9 call 0x12a05750 */
  push32(0x12a0f7deu); f_12a05750();
  /* 12a0f7de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f7e1 mov esi, eax */
  ESI = (EAX);
  /* 12a0f7e3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0f7e6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0f7e9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 12a0f7ed push ecx */
  push32((uint32_t)(ECX));
  /* 12a0f7ee call 0x12a05750 */
  push32(0x12a0f7f3u); f_12a05750();
  /* 12a0f7f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f7f6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f7f9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12a0f7fd mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12a0f800 jmp 0x12a0f7bf */
  goto L_12a0f7bf;
L_12a0f802:;
  /* 12a0f802 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0f805 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f808 push eax */
  push32((uint32_t)(EAX));
  /* 12a0f809 call 0x12a02900 */
  push32(0x12a0f80eu); f_12a02900();
  /* 12a0f80e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f811 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a0f814 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0f818 je 0x12a0f8bb */
  if (C.zf) goto L_12a0f8bb;
  /* 12a0f81e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0f821 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12a0f824 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12a0f82b jmp 0x12a0f836 */
  goto L_12a0f836;
L_12a0f82d:;
  /* 12a0f82d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0f830 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f833 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12a0f836:;
  /* 12a0f836 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0f83a jae 0x12a0f8ac */
  if (!C.cf) goto L_12a0f8ac;
  /* 12a0f83c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a0f83f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 12a0f842 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a0f845 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f848 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12a0f84b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0f84e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0f851 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 12a0f855 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0f856 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a0f859 push edx */
  push32((uint32_t)(EDX));
  /* 12a0f85a call 0x12a058d0 */
  push32(0x12a0f85fu); f_12a058d0();
  /* 12a0f85f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f862 push eax */
  push32((uint32_t)(EAX));
  /* 12a0f863 call 0x12a05750 */
  push32(0x12a0f868u); f_12a05750();
  /* 12a0f868 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f86b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a0f86e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f870 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12a0f873 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a0f876 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 12a0f879 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a0f87c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f87f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12a0f882 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0f885 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0f888 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12a0f88c push eax */
  push32((uint32_t)(EAX));
  /* 12a0f88d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a0f890 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0f891 call 0x12a058d0 */
  push32(0x12a0f896u); f_12a058d0();
  /* 12a0f896 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f899 push eax */
  push32((uint32_t)(EAX));
  /* 12a0f89a call 0x12a05750 */
  push32(0x12a0f89fu); f_12a05750();
  /* 12a0f89f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f8a2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a0f8a5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f8a7 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12a0f8aa jmp 0x12a0f82d */
  goto L_12a0f82d;
L_12a0f8ac:;
  /* 12a0f8ac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a0f8af mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12a0f8b2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a0f8b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f8b8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12a0f8bb:;
  /* 12a0f8bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0f8be pop esi */
  ESI = (pop32());
  /* 12a0f8bf mov esp, ebp */
  ESP = (EBP);
  /* 12a0f8c1 pop ebp */
  EBP = (pop32());
  /* 12a0f8c2 ret  */
  ESPCHK(0x12a0f7a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f8d0 @ 0x12a0f8d0 (878 bytes, 273 insns) */
void f_12a0f8d0(void) {
  FTRACE(0x12a0f8d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0f8d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0f8d1 mov ebp, esp */
  EBP = (ESP);
  /* 12a0f8d3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0f8d6 push esi */
  push32((uint32_t)(ESI));
  /* 12a0f8d7 mov eax, dword ptr [0x12a2dc98] */
  EAX = (r32((uint32_t)(0x12a2dc98)));
  /* 12a0f8dc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12a0f8df mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12a0f8e6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12a0f8ed jmp 0x12a0f8f8 */
  goto L_12a0f8f8;
L_12a0f8ef:;
  /* 12a0f8ef mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0f8f2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f8f5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12a0f8f8:;
  /* 12a0f8f8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0f8fc jae 0x12a0f931 */
  if (!C.cf) goto L_12a0f931;
  /* 12a0f8fe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0f901 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0f904 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12a0f907 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0f908 call 0x12a05750 */
  push32(0x12a0f90du); f_12a05750();
  /* 12a0f90d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f910 mov esi, eax */
  ESI = (EAX);
  /* 12a0f912 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0f915 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0f918 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 12a0f91c push ecx */
  push32((uint32_t)(ECX));
  /* 12a0f91d call 0x12a05750 */
  push32(0x12a0f922u); f_12a05750();
  /* 12a0f922 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f925 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f928 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12a0f92c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12a0f92f jmp 0x12a0f8ef */
  goto L_12a0f8ef;
L_12a0f931:;
  /* 12a0f931 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12a0f938 jmp 0x12a0f943 */
  goto L_12a0f943;
L_12a0f93a:;
  /* 12a0f93a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0f93d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f940 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12a0f943:;
  /* 12a0f943 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0f947 jae 0x12a0f97d */
  if (!C.cf) goto L_12a0f97d;
  /* 12a0f949 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0f94c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0f94f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12a0f953 push eax */
  push32((uint32_t)(EAX));
  /* 12a0f954 call 0x12a05750 */
  push32(0x12a0f959u); f_12a05750();
  /* 12a0f959 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f95c mov esi, eax */
  ESI = (EAX);
  /* 12a0f95e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0f961 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0f964 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12a0f968 push eax */
  push32((uint32_t)(EAX));
  /* 12a0f969 call 0x12a05750 */
  push32(0x12a0f96eu); f_12a05750();
  /* 12a0f96e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f971 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f974 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12a0f978 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12a0f97b jmp 0x12a0f93a */
  goto L_12a0f93a;
L_12a0f97d:;
  /* 12a0f97d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0f980 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12a0f986 push eax */
  push32((uint32_t)(EAX));
  /* 12a0f987 call 0x12a05750 */
  push32(0x12a0f98cu); f_12a05750();
  /* 12a0f98c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f98f mov esi, eax */
  ESI = (EAX);
  /* 12a0f991 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0f994 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 12a0f99a push edx */
  push32((uint32_t)(EDX));
  /* 12a0f99b call 0x12a05750 */
  push32(0x12a0f9a0u); f_12a05750();
  /* 12a0f9a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f9a3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f9a6 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12a0f9aa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12a0f9ad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0f9b0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12a0f9b6 push edx */
  push32((uint32_t)(EDX));
  /* 12a0f9b7 call 0x12a05750 */
  push32(0x12a0f9bcu); f_12a05750();
  /* 12a0f9bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f9bf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0f9c2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12a0f9c6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12a0f9c9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0f9cc mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 12a0f9d2 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0f9d3 call 0x12a05750 */
  push32(0x12a0f9d8u); f_12a05750();
  /* 12a0f9d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f9db mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0f9de lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12a0f9e2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12a0f9e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0f9e8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 12a0f9ee push edx */
  push32((uint32_t)(EDX));
  /* 12a0f9ef call 0x12a05750 */
  push32(0x12a0f9f4u); f_12a05750();
  /* 12a0f9f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f9f7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0f9fa lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12a0f9fe mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12a0fa01 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0fa04 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0fa09 push eax */
  push32((uint32_t)(EAX));
  /* 12a0fa0a call 0x12a02900 */
  push32(0x12a0fa0fu); f_12a02900();
  /* 12a0fa0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0fa12 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a0fa15 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0fa19 je 0x12a0fc36 */
  if (C.zf) goto L_12a0fc36;
  /* 12a0fa1f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0fa22 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12a0fa25 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0fa28 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0fa2e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12a0fa31 push 0xac */
  push32((uint32_t)(0xacu));
  /* 12a0fa36 mov eax, dword ptr [0x12a2dc98] */
  EAX = (r32((uint32_t)(0x12a2dc98)));
  /* 12a0fa3b push eax */
  push32((uint32_t)(EAX));
  /* 12a0fa3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0fa3f push ecx */
  push32((uint32_t)(ECX));
  /* 12a0fa40 call 0x12a09200 */
  push32(0x12a0fa45u); f_12a09200();
  /* 12a0fa45 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0fa48 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12a0fa4f jmp 0x12a0fa5a */
  goto L_12a0fa5a;
L_12a0fa51:;
  /* 12a0fa51 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0fa54 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0fa57 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12a0fa5a:;
  /* 12a0fa5a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0fa5e jae 0x12a0face */
  if (!C.cf) goto L_12a0face;
  /* 12a0fa60 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0fa63 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a0fa66 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a0fa69 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 12a0fa6c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0fa6f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0fa72 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12a0fa75 push edx */
  push32((uint32_t)(EDX));
  /* 12a0fa76 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a0fa79 push eax */
  push32((uint32_t)(EAX));
  /* 12a0fa7a call 0x12a058d0 */
  push32(0x12a0fa7fu); f_12a058d0();
  /* 12a0fa7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0fa82 push eax */
  push32((uint32_t)(EAX));
  /* 12a0fa83 call 0x12a05750 */
  push32(0x12a0fa88u); f_12a05750();
  /* 12a0fa88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0fa8b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a0fa8e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12a0fa92 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12a0fa95 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0fa98 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a0fa9b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a0fa9e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 12a0faa2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0faa5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0faa8 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 12a0faac push edx */
  push32((uint32_t)(EDX));
  /* 12a0faad mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a0fab0 push eax */
  push32((uint32_t)(EAX));
  /* 12a0fab1 call 0x12a058d0 */
  push32(0x12a0fab6u); f_12a058d0();
  /* 12a0fab6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0fab9 push eax */
  push32((uint32_t)(EAX));
  /* 12a0faba call 0x12a05750 */
  push32(0x12a0fabfu); f_12a05750();
  /* 12a0fabf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0fac2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a0fac5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12a0fac9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12a0facc jmp 0x12a0fa51 */
  goto L_12a0fa51;
L_12a0face:;
  /* 12a0face mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12a0fad5 jmp 0x12a0fae0 */
  goto L_12a0fae0;
L_12a0fad7:;
  /* 12a0fad7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0fada add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0fadd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12a0fae0:;
  /* 12a0fae0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0fae4 jae 0x12a0fb56 */
  if (!C.cf) goto L_12a0fb56;
  /* 12a0fae6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0fae9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a0faec mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a0faef mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 12a0faf3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0faf6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0faf9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12a0fafd push eax */
  push32((uint32_t)(EAX));
  /* 12a0fafe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a0fb01 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0fb02 call 0x12a058d0 */
  push32(0x12a0fb07u); f_12a058d0();
  /* 12a0fb07 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0fb0a push eax */
  push32((uint32_t)(EAX));
  /* 12a0fb0b call 0x12a05750 */
  push32(0x12a0fb10u); f_12a05750();
  /* 12a0fb10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0fb13 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a0fb16 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12a0fb1a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12a0fb1d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0fb20 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a0fb23 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a0fb26 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 12a0fb2a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0fb2d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0fb30 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12a0fb34 push eax */
  push32((uint32_t)(EAX));
  /* 12a0fb35 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a0fb38 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0fb39 call 0x12a058d0 */
  push32(0x12a0fb3eu); f_12a058d0();
  /* 12a0fb3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0fb41 push eax */
  push32((uint32_t)(EAX));
  /* 12a0fb42 call 0x12a05750 */
  push32(0x12a0fb47u); f_12a05750();
  /* 12a0fb47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0fb4a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a0fb4d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12a0fb51 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12a0fb54 jmp 0x12a0fad7 */
  goto L_12a0fad7;
L_12a0fb56:;
  /* 12a0fb56 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a0fb59 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a0fb5c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 12a0fb62 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0fb65 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 12a0fb6b push ecx */
  push32((uint32_t)(ECX));
  /* 12a0fb6c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a0fb6f push edx */
  push32((uint32_t)(EDX));
  /* 12a0fb70 call 0x12a058d0 */
  push32(0x12a0fb75u); f_12a058d0();
  /* 12a0fb75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0fb78 push eax */
  push32((uint32_t)(EAX));
  /* 12a0fb79 call 0x12a05750 */
  push32(0x12a0fb7eu); f_12a05750();
  /* 12a0fb7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0fb81 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a0fb84 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12a0fb88 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12a0fb8b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a0fb8e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a0fb91 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 12a0fb97 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0fb9a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 12a0fba0 push eax */
  push32((uint32_t)(EAX));
  /* 12a0fba1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a0fba4 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0fba5 call 0x12a058d0 */
  push32(0x12a0fbaau); f_12a058d0();
  /* 12a0fbaa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0fbad push eax */
  push32((uint32_t)(EAX));
  /* 12a0fbae call 0x12a05750 */
  push32(0x12a0fbb3u); f_12a05750();
  /* 12a0fbb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0fbb6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a0fbb9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12a0fbbd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12a0fbc0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a0fbc3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a0fbc6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 12a0fbcc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0fbcf mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 12a0fbd5 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0fbd6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a0fbd9 push edx */
  push32((uint32_t)(EDX));
  /* 12a0fbda call 0x12a058d0 */
  push32(0x12a0fbdfu); f_12a058d0();
  /* 12a0fbdf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0fbe2 push eax */
  push32((uint32_t)(EAX));
  /* 12a0fbe3 call 0x12a05750 */
  push32(0x12a0fbe8u); f_12a05750();
  /* 12a0fbe8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0fbeb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a0fbee lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12a0fbf2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12a0fbf5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a0fbf8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a0fbfb mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 12a0fc01 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0fc04 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 12a0fc0a push eax */
  push32((uint32_t)(EAX));
  /* 12a0fc0b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a0fc0e push ecx */
  push32((uint32_t)(ECX));
  /* 12a0fc0f call 0x12a058d0 */
  push32(0x12a0fc14u); f_12a058d0();
  /* 12a0fc14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0fc17 push eax */
  push32((uint32_t)(EAX));
  /* 12a0fc18 call 0x12a05750 */
  push32(0x12a0fc1du); f_12a05750();
  /* 12a0fc1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0fc20 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a0fc23 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12a0fc27 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12a0fc2a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a0fc2d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a0fc30 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_12a0fc36:;
  /* 12a0fc36 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0fc39 pop esi */
  ESI = (pop32());
  /* 12a0fc3a mov esp, ebp */
  ESP = (EBP);
  /* 12a0fc3c pop ebp */
  EBP = (pop32());
  /* 12a0fc3d ret  */
  ESPCHK(0x12a0f8d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc40 @ 0x12a0fc40 (31 bytes, 15 insns) */
void f_12a0fc40(void) {
  FTRACE(0x12a0fc40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0fc40 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0fc41 mov ebp, esp */
  EBP = (ESP);
  /* 12a0fc43 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0fc45 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a0fc48 push eax */
  push32((uint32_t)(EAX));
  /* 12a0fc49 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0fc4c push ecx */
  push32((uint32_t)(ECX));
  /* 12a0fc4d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0fc50 push edx */
  push32((uint32_t)(EDX));
  /* 12a0fc51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0fc54 push eax */
  push32((uint32_t)(EAX));
  /* 12a0fc55 call 0x12a0fc60 */
  push32(0x12a0fc5au); f_12a0fc60();
  /* 12a0fc5a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0fc5d pop ebp */
  EBP = (pop32());
  /* 12a0fc5e ret  */
  ESPCHK(0x12a0fc40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc60 @ 0x12a0fc60 (393 bytes, 123 insns) */
void f_12a0fc60(void) {
  FTRACE(0x12a0fc60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0fc60 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0fc61 mov ebp, esp */
  EBP = (ESP);
  /* 12a0fc63 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0fc66 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0fc6a jne 0x12a0fc76 */
  if (!C.zf) goto L_12a0fc76;
  /* 12a0fc6c mov eax, dword ptr [0x12a2dc98] */
  EAX = (r32((uint32_t)(0x12a2dc98)));
  /* 12a0fc71 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12a0fc74 jmp 0x12a0fc7c */
  goto L_12a0fc7c;
L_12a0fc76:;
  /* 12a0fc76 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a0fc79 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12a0fc7c:;
  /* 12a0fc7c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0fc7f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12a0fc82 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0fc85 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12a0fc88 push 0x12a2e814 */
  push32((uint32_t)(0x12a2e814u));
  /* 12a0fc8d call dword ptr [0x12a30268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30268))), 0x12a0fc93u);
  /* 12a0fc93 cmp dword ptr [0x12a2e804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0fc9a je 0x12a0fcba */
  if (C.zf) goto L_12a0fcba;
  /* 12a0fc9c push 0x12a2e814 */
  push32((uint32_t)(0x12a2e814u));
  /* 12a0fca1 call dword ptr [0x12a30258] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30258))), 0x12a0fca7u);
  /* 12a0fca7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12a0fca9 call 0x12a06320 */
  push32(0x12a0fcaeu); f_12a06320();
  /* 12a0fcae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0fcb1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12a0fcb8 jmp 0x12a0fcc1 */
  goto L_12a0fcc1;
L_12a0fcba:;
  /* 12a0fcba mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12a0fcc1:;
  /* 12a0fcc1 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0fcc5 jbe 0x12a0fdb2 */
  if ((C.cf||C.zf)) goto L_12a0fdb2;
  /* 12a0fccb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0fcce mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12a0fcd0 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 12a0fcd3 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12a0fcd7 je 0x12a0fce1 */
  if (C.zf) goto L_12a0fce1;
  /* 12a0fcd9 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12a0fcdd je 0x12a0fce6 */
  if (C.zf) goto L_12a0fce6;
  /* 12a0fcdf jmp 0x12a0fd40 */
  goto L_12a0fd40;
L_12a0fce1:;
  /* 12a0fce1 jmp 0x12a0fdb2 */
  goto L_12a0fdb2;
L_12a0fce6:;
  /* 12a0fce6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0fce9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0fcec mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 12a0fcef mov dword ptr [0x12a2e7f0], 0 */
  w32((uint32_t)(0x12a2e7f0), (0x0u));
  /* 12a0fcf9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0fcfc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12a0fcff cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0fd02 jne 0x12a0fd17 */
  if (!C.zf) goto L_12a0fd17;
  /* 12a0fd04 mov dword ptr [0x12a2e7f0], 1 */
  w32((uint32_t)(0x12a2e7f0), (0x1u));
  /* 12a0fd0e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0fd11 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0fd14 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12a0fd17:;
  /* 12a0fd17 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0fd1a push ecx */
  push32((uint32_t)(ECX));
  /* 12a0fd1b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 12a0fd1e push edx */
  push32((uint32_t)(EDX));
  /* 12a0fd1f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 12a0fd22 push eax */
  push32((uint32_t)(EAX));
  /* 12a0fd23 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a0fd26 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0fd27 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0fd2a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12a0fd2c push eax */
  push32((uint32_t)(EAX));
  /* 12a0fd2d call 0x12a0fdf0 */
  push32(0x12a0fd32u); f_12a0fdf0();
  /* 12a0fd32 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0fd35 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0fd38 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0fd3b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12a0fd3e jmp 0x12a0fdad */
  goto L_12a0fdad;
L_12a0fd40:;
  /* 12a0fd40 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0fd43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0fd45 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12a0fd47 mov ecx, dword ptr [0x12a2cc98] */
  ECX = (r32((uint32_t)(0x12a2cc98)));
  /* 12a0fd4d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a0fd4f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12a0fd53 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12a0fd59 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a0fd5b je 0x12a0fd88 */
  if (C.zf) goto L_12a0fd88;
  /* 12a0fd5d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0fd61 jbe 0x12a0fd88 */
  if ((C.cf||C.zf)) goto L_12a0fd88;
  /* 12a0fd63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0fd66 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0fd69 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12a0fd6b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12a0fd6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0fd70 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0fd73 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12a0fd76 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0fd79 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0fd7c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12a0fd7f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0fd82 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0fd85 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12a0fd88:;
  /* 12a0fd88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0fd8b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0fd8e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12a0fd90 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12a0fd92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0fd95 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0fd98 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12a0fd9b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0fd9e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0fda1 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12a0fda4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0fda7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0fdaa mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12a0fdad:;
  /* 12a0fdad jmp 0x12a0fcc1 */
  goto L_12a0fcc1;
L_12a0fdb2:;
  /* 12a0fdb2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0fdb6 je 0x12a0fdc4 */
  if (C.zf) goto L_12a0fdc4;
  /* 12a0fdb8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12a0fdba call 0x12a063c0 */
  push32(0x12a0fdbfu); f_12a063c0();
  /* 12a0fdbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0fdc2 jmp 0x12a0fdcf */
  goto L_12a0fdcf;
L_12a0fdc4:;
  /* 12a0fdc4 push 0x12a2e814 */
  push32((uint32_t)(0x12a2e814u));
  /* 12a0fdc9 call dword ptr [0x12a30258] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30258))), 0x12a0fdcfu);
L_12a0fdcf:;
  /* 12a0fdcf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0fdd3 jbe 0x12a0fde3 */
  if ((C.cf||C.zf)) goto L_12a0fde3;
  /* 12a0fdd5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0fdd8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12a0fddb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0fdde sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0fde1 jmp 0x12a0fde5 */
  goto L_12a0fde5;
L_12a0fde3:;
  /* 12a0fde3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12a0fde5:;
  /* 12a0fde5 mov esp, ebp */
  ESP = (EBP);
  /* 12a0fde7 pop ebp */
  EBP = (pop32());
  /* 12a0fde8 ret  */
  ESPCHK(0x12a0fc60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fdf0 @ 0x12a0fdf0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_12a0fdf0(void) {
  FTRACE(0x12a0fdf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0fdf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0fdf1 mov ebp, esp */
  EBP = (ESP);
  /* 12a0fdf3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0fdf6 push esi */
  push32((uint32_t)(ESI));
  /* 12a0fdf7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 12a0fdfb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12a0fdfe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0fe01 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0fe04 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a0fe07 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0fe0b ja 0x12a10358 */
  if ((!C.cf&&!C.zf)) goto L_12a10358;
  /* 12a0fe11 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0fe14 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a0fe16 mov dl, byte ptr [eax + 0x12a103b9] */
  DL = (r8((uint32_t)(EAX + 0x12a103b9)));
  /* 12a0fe1c jmp dword ptr [edx*4 + 0x12a1035d] */
  switch (EDX) {
    case 0: goto L_12a10336;
    case 1: goto L_12a0fe45;
    case 2: goto L_12a0fe8b;
    case 3: goto L_12a0ffd8;
    case 4: goto L_12a10000;
    case 5: goto L_12a1009f;
    case 6: goto L_12a1010b;
    case 7: goto L_12a10134;
    case 8: goto L_12a10175;
    case 9: goto L_12a10257;
    case 10: goto L_12a102be;
    case 11: goto L_12a1030b;
    case 12: goto L_12a0fe23;
    case 13: goto L_12a0fe68;
    case 14: goto L_12a0feae;
    case 15: goto L_12a0ffae;
    case 16: goto L_12a10045;
    case 17: goto L_12a10072;
    case 18: goto L_12a100c7;
    case 19: goto L_12a1014b;
    case 20: goto L_12a101f9;
    case 21: goto L_12a10288;
    case 22: goto L_12a10358;
    default: x86_unimpl("switch@0x12a0fe1c out of table"); return;
  }
L_12a0fe23:;
  /* 12a0fe23 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a0fe26 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0fe27 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0fe2a push edx */
  push32((uint32_t)(EDX));
  /* 12a0fe2b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0fe2e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12a0fe31 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a0fe34 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12a0fe37 push eax */
  push32((uint32_t)(EAX));
  /* 12a0fe38 call 0x12a10410 */
  push32(0x12a0fe3du); f_12a10410();
  /* 12a0fe3d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0fe40 jmp 0x12a10358 */
  goto L_12a10358;
L_12a0fe45:;
  /* 12a0fe45 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a0fe48 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0fe49 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0fe4c push edx */
  push32((uint32_t)(EDX));
  /* 12a0fe4d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0fe50 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12a0fe53 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a0fe56 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 12a0fe5a push eax */
  push32((uint32_t)(EAX));
  /* 12a0fe5b call 0x12a10410 */
  push32(0x12a0fe60u); f_12a10410();
  /* 12a0fe60 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0fe63 jmp 0x12a10358 */
  goto L_12a10358;
L_12a0fe68:;
  /* 12a0fe68 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a0fe6b push ecx */
  push32((uint32_t)(ECX));
  /* 12a0fe6c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0fe6f push edx */
  push32((uint32_t)(EDX));
  /* 12a0fe70 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0fe73 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12a0fe76 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a0fe79 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12a0fe7d push eax */
  push32((uint32_t)(EAX));
  /* 12a0fe7e call 0x12a10410 */
  push32(0x12a0fe83u); f_12a10410();
  /* 12a0fe83 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0fe86 jmp 0x12a10358 */
  goto L_12a10358;
L_12a0fe8b:;
  /* 12a0fe8b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a0fe8e push ecx */
  push32((uint32_t)(ECX));
  /* 12a0fe8f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0fe92 push edx */
  push32((uint32_t)(EDX));
  /* 12a0fe93 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0fe96 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12a0fe99 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a0fe9c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12a0fea0 push eax */
  push32((uint32_t)(EAX));
  /* 12a0fea1 call 0x12a10410 */
  push32(0x12a0fea6u); f_12a10410();
  /* 12a0fea6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0fea9 jmp 0x12a10358 */
  goto L_12a10358;
L_12a0feae:;
  /* 12a0feae cmp dword ptr [0x12a2e7f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e7f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0feb5 je 0x12a0ff36 */
  if (C.zf) goto L_12a0ff36;
  /* 12a0feb7 mov dword ptr [0x12a2e7f0], 0 */
  w32((uint32_t)(0x12a2e7f0), (0x0u));
  /* 12a0fec1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a0fec4 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0fec5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a0fec8 push edx */
  push32((uint32_t)(EDX));
  /* 12a0fec9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0fecc push eax */
  push32((uint32_t)(EAX));
  /* 12a0fecd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0fed0 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0fed1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a0fed4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 12a0feda push eax */
  push32((uint32_t)(EAX));
  /* 12a0fedb call 0x12a105c0 */
  push32(0x12a0fee0u); f_12a105c0();
  /* 12a0fee0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0fee3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a0fee6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0fee9 jne 0x12a0fef0 */
  if (!C.zf) goto L_12a0fef0;
  /* 12a0feeb jmp 0x12a10358 */
  goto L_12a10358;
L_12a0fef0:;
  /* 12a0fef0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0fef3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12a0fef5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 12a0fef8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0fefb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12a0fefd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0ff00 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0ff03 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12a0ff05 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a0ff08 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12a0ff0a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0ff0d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a0ff10 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12a0ff12 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a0ff15 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0ff16 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a0ff19 push edx */
  push32((uint32_t)(EDX));
  /* 12a0ff1a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0ff1d push eax */
  push32((uint32_t)(EAX));
  /* 12a0ff1e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0ff21 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0ff22 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a0ff25 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 12a0ff2b push eax */
  push32((uint32_t)(EAX));
  /* 12a0ff2c call 0x12a105c0 */
  push32(0x12a0ff31u); f_12a105c0();
  /* 12a0ff31 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0ff34 jmp 0x12a0ffa9 */
  goto L_12a0ffa9;
L_12a0ff36:;
  /* 12a0ff36 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a0ff39 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0ff3a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a0ff3d push edx */
  push32((uint32_t)(EDX));
  /* 12a0ff3e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0ff41 push eax */
  push32((uint32_t)(EAX));
  /* 12a0ff42 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0ff45 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0ff46 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a0ff49 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 12a0ff4f push eax */
  push32((uint32_t)(EAX));
  /* 12a0ff50 call 0x12a105c0 */
  push32(0x12a0ff55u); f_12a105c0();
  /* 12a0ff55 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0ff58 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a0ff5b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0ff5e jne 0x12a0ff65 */
  if (!C.zf) goto L_12a0ff65;
  /* 12a0ff60 jmp 0x12a10358 */
  goto L_12a10358;
L_12a0ff65:;
  /* 12a0ff65 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0ff68 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12a0ff6a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 12a0ff6d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0ff70 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12a0ff72 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0ff75 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0ff78 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12a0ff7a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a0ff7d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12a0ff7f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0ff82 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a0ff85 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12a0ff87 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a0ff8a push ecx */
  push32((uint32_t)(ECX));
  /* 12a0ff8b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a0ff8e push edx */
  push32((uint32_t)(EDX));
  /* 12a0ff8f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0ff92 push eax */
  push32((uint32_t)(EAX));
  /* 12a0ff93 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0ff96 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0ff97 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a0ff9a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 12a0ffa0 push eax */
  push32((uint32_t)(EAX));
  /* 12a0ffa1 call 0x12a105c0 */
  push32(0x12a0ffa6u); f_12a105c0();
  /* 12a0ffa6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a0ffa9:;
  /* 12a0ffa9 jmp 0x12a10358 */
  goto L_12a10358;
L_12a0ffae:;
  /* 12a0ffae mov ecx, dword ptr [0x12a2e7f0] */
  ECX = (r32((uint32_t)(0x12a2e7f0)));
  /* 12a0ffb4 mov dword ptr [0x12a2e800], ecx */
  w32((uint32_t)(0x12a2e800), (ECX));
  /* 12a0ffba mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a0ffbd push edx */
  push32((uint32_t)(EDX));
  /* 12a0ffbe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0ffc1 push eax */
  push32((uint32_t)(EAX));
  /* 12a0ffc2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0ffc4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0ffc7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12a0ffca push edx */
  push32((uint32_t)(EDX));
  /* 12a0ffcb call 0x12a10460 */
  push32(0x12a0ffd0u); f_12a10460();
  /* 12a0ffd0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0ffd3 jmp 0x12a10358 */
  goto L_12a10358;
L_12a0ffd8:;
  /* 12a0ffd8 mov eax, dword ptr [0x12a2e7f0] */
  EAX = (r32((uint32_t)(0x12a2e7f0)));
  /* 12a0ffdd mov dword ptr [0x12a2e800], eax */
  w32((uint32_t)(0x12a2e800), (EAX));
  /* 12a0ffe2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a0ffe5 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0ffe6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0ffe9 push edx */
  push32((uint32_t)(EDX));
  /* 12a0ffea push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0ffec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0ffef mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12a0fff2 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0fff3 call 0x12a10460 */
  push32(0x12a0fff8u); f_12a10460();
  /* 12a0fff8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0fffb jmp 0x12a10358 */
  goto L_12a10358;
L_12a10000:;
  /* 12a10000 mov edx, dword ptr [0x12a2e7f0] */
  EDX = (r32((uint32_t)(0x12a2e7f0)));
  /* 12a10006 mov dword ptr [0x12a2e800], edx */
  w32((uint32_t)(0x12a2e800), (EDX));
  /* 12a1000c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a1000f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 12a10012 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12a10013 mov ecx, 0xc */
  ECX = (0xcu);
  /* 12a10018 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12a1001a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12a1001d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a10021 jne 0x12a1002a */
  if (!C.zf) goto L_12a1002a;
  /* 12a10023 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_12a1002a:;
  /* 12a1002a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a1002d push edx */
  push32((uint32_t)(EDX));
  /* 12a1002e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a10031 push eax */
  push32((uint32_t)(EAX));
  /* 12a10032 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a10034 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a10037 push ecx */
  push32((uint32_t)(ECX));
  /* 12a10038 call 0x12a10460 */
  push32(0x12a1003du); f_12a10460();
  /* 12a1003d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a10040 jmp 0x12a10358 */
  goto L_12a10358;
L_12a10045:;
  /* 12a10045 mov edx, dword ptr [0x12a2e7f0] */
  EDX = (r32((uint32_t)(0x12a2e7f0)));
  /* 12a1004b mov dword ptr [0x12a2e800], edx */
  w32((uint32_t)(0x12a2e800), (EDX));
  /* 12a10051 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a10054 push eax */
  push32((uint32_t)(EAX));
  /* 12a10055 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a10058 push ecx */
  push32((uint32_t)(ECX));
  /* 12a10059 push 3 */
  push32((uint32_t)(0x3u));
  /* 12a1005b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a1005e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12a10061 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a10064 push eax */
  push32((uint32_t)(EAX));
  /* 12a10065 call 0x12a10460 */
  push32(0x12a1006au); f_12a10460();
  /* 12a1006a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a1006d jmp 0x12a10358 */
  goto L_12a10358;
L_12a10072:;
  /* 12a10072 mov ecx, dword ptr [0x12a2e7f0] */
  ECX = (r32((uint32_t)(0x12a2e7f0)));
  /* 12a10078 mov dword ptr [0x12a2e800], ecx */
  w32((uint32_t)(0x12a2e800), (ECX));
  /* 12a1007e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a10081 push edx */
  push32((uint32_t)(EDX));
  /* 12a10082 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a10085 push eax */
  push32((uint32_t)(EAX));
  /* 12a10086 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a10088 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a1008b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12a1008e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a10091 push edx */
  push32((uint32_t)(EDX));
  /* 12a10092 call 0x12a10460 */
  push32(0x12a10097u); f_12a10460();
  /* 12a10097 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a1009a jmp 0x12a10358 */
  goto L_12a10358;
L_12a1009f:;
  /* 12a1009f mov eax, dword ptr [0x12a2e7f0] */
  EAX = (r32((uint32_t)(0x12a2e7f0)));
  /* 12a100a4 mov dword ptr [0x12a2e800], eax */
  w32((uint32_t)(0x12a2e800), (EAX));
  /* 12a100a9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a100ac push ecx */
  push32((uint32_t)(ECX));
  /* 12a100ad mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a100b0 push edx */
  push32((uint32_t)(EDX));
  /* 12a100b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a100b3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a100b6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12a100b9 push ecx */
  push32((uint32_t)(ECX));
  /* 12a100ba call 0x12a10460 */
  push32(0x12a100bfu); f_12a10460();
  /* 12a100bf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a100c2 jmp 0x12a10358 */
  goto L_12a10358;
L_12a100c7:;
  /* 12a100c7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a100ca cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a100ce jg 0x12a100ec */
  if ((!C.zf&&C.sf==C.of)) goto L_12a100ec;
  /* 12a100d0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a100d3 push eax */
  push32((uint32_t)(EAX));
  /* 12a100d4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a100d7 push ecx */
  push32((uint32_t)(ECX));
  /* 12a100d8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a100db mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12a100e1 push eax */
  push32((uint32_t)(EAX));
  /* 12a100e2 call 0x12a10410 */
  push32(0x12a100e7u); f_12a10410();
  /* 12a100e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a100ea jmp 0x12a10106 */
  goto L_12a10106;
L_12a100ec:;
  /* 12a100ec mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a100ef push ecx */
  push32((uint32_t)(ECX));
  /* 12a100f0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a100f3 push edx */
  push32((uint32_t)(EDX));
  /* 12a100f4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a100f7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 12a100fd push ecx */
  push32((uint32_t)(ECX));
  /* 12a100fe call 0x12a10410 */
  push32(0x12a10103u); f_12a10410();
  /* 12a10103 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a10106:;
  /* 12a10106 jmp 0x12a10358 */
  goto L_12a10358;
L_12a1010b:;
  /* 12a1010b mov edx, dword ptr [0x12a2e7f0] */
  EDX = (r32((uint32_t)(0x12a2e7f0)));
  /* 12a10111 mov dword ptr [0x12a2e800], edx */
  w32((uint32_t)(0x12a2e800), (EDX));
  /* 12a10117 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a1011a push eax */
  push32((uint32_t)(EAX));
  /* 12a1011b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a1011e push ecx */
  push32((uint32_t)(ECX));
  /* 12a1011f push 2 */
  push32((uint32_t)(0x2u));
  /* 12a10121 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a10124 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12a10126 push eax */
  push32((uint32_t)(EAX));
  /* 12a10127 call 0x12a10460 */
  push32(0x12a1012cu); f_12a10460();
  /* 12a1012c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a1012f jmp 0x12a10358 */
  goto L_12a10358;
L_12a10134:;
  /* 12a10134 mov ecx, dword ptr [0x12a2e7f0] */
  ECX = (r32((uint32_t)(0x12a2e7f0)));
  /* 12a1013a mov dword ptr [0x12a2e800], ecx */
  w32((uint32_t)(0x12a2e800), (ECX));
  /* 12a10140 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a10143 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12a10146 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12a10149 jmp 0x12a1019d */
  goto L_12a1019d;
L_12a1014b:;
  /* 12a1014b mov ecx, dword ptr [0x12a2e7f0] */
  ECX = (r32((uint32_t)(0x12a2e7f0)));
  /* 12a10151 mov dword ptr [0x12a2e800], ecx */
  w32((uint32_t)(0x12a2e800), (ECX));
  /* 12a10157 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a1015a push edx */
  push32((uint32_t)(EDX));
  /* 12a1015b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a1015e push eax */
  push32((uint32_t)(EAX));
  /* 12a1015f push 1 */
  push32((uint32_t)(0x1u));
  /* 12a10161 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a10164 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12a10167 push edx */
  push32((uint32_t)(EDX));
  /* 12a10168 call 0x12a10460 */
  push32(0x12a1016du); f_12a10460();
  /* 12a1016d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a10170 jmp 0x12a10358 */
  goto L_12a10358;
L_12a10175:;
  /* 12a10175 mov eax, dword ptr [0x12a2e7f0] */
  EAX = (r32((uint32_t)(0x12a2e7f0)));
  /* 12a1017a mov dword ptr [0x12a2e800], eax */
  w32((uint32_t)(0x12a2e800), (EAX));
  /* 12a1017f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a10182 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a10186 jne 0x12a10191 */
  if (!C.zf) goto L_12a10191;
  /* 12a10188 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 12a1018f jmp 0x12a1019d */
  goto L_12a1019d;
L_12a10191:;
  /* 12a10191 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a10194 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12a10197 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a1019a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12a1019d:;
  /* 12a1019d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a101a0 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12a101a3 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a101a6 jge 0x12a101b1 */
  if ((C.sf==C.of)) goto L_12a101b1;
  /* 12a101a8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12a101af jmp 0x12a101de */
  goto L_12a101de;
L_12a101b1:;
  /* 12a101b1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a101b4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12a101b7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12a101b8 mov ecx, 7 */
  ECX = (0x7u);
  /* 12a101bd idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12a101bf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a101c2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a101c5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12a101c8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12a101c9 mov ecx, 7 */
  ECX = (0x7u);
  /* 12a101ce idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12a101d0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a101d3 jl 0x12a101de */
  if ((C.sf!=C.of)) goto L_12a101de;
  /* 12a101d5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a101d8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a101db mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12a101de:;
  /* 12a101de mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a101e1 push eax */
  push32((uint32_t)(EAX));
  /* 12a101e2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a101e5 push ecx */
  push32((uint32_t)(ECX));
  /* 12a101e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a101e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a101eb push edx */
  push32((uint32_t)(EDX));
  /* 12a101ec call 0x12a10460 */
  push32(0x12a101f1u); f_12a10460();
  /* 12a101f1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a101f4 jmp 0x12a10358 */
  goto L_12a10358;
L_12a101f9:;
  /* 12a101f9 cmp dword ptr [0x12a2e7f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e7f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a10200 je 0x12a10230 */
  if (C.zf) goto L_12a10230;
  /* 12a10202 mov dword ptr [0x12a2e7f0], 0 */
  w32((uint32_t)(0x12a2e7f0), (0x0u));
  /* 12a1020c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a1020f push eax */
  push32((uint32_t)(EAX));
  /* 12a10210 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a10213 push ecx */
  push32((uint32_t)(ECX));
  /* 12a10214 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a10217 push edx */
  push32((uint32_t)(EDX));
  /* 12a10218 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a1021b push eax */
  push32((uint32_t)(EAX));
  /* 12a1021c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a1021f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 12a10225 push edx */
  push32((uint32_t)(EDX));
  /* 12a10226 call 0x12a105c0 */
  push32(0x12a1022bu); f_12a105c0();
  /* 12a1022b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a1022e jmp 0x12a10252 */
  goto L_12a10252;
L_12a10230:;
  /* 12a10230 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a10233 push eax */
  push32((uint32_t)(EAX));
  /* 12a10234 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a10237 push ecx */
  push32((uint32_t)(ECX));
  /* 12a10238 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a1023b push edx */
  push32((uint32_t)(EDX));
  /* 12a1023c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a1023f push eax */
  push32((uint32_t)(EAX));
  /* 12a10240 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a10243 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12a10249 push edx */
  push32((uint32_t)(EDX));
  /* 12a1024a call 0x12a105c0 */
  push32(0x12a1024fu); f_12a105c0();
  /* 12a1024f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a10252:;
  /* 12a10252 jmp 0x12a10358 */
  goto L_12a10358;
L_12a10257:;
  /* 12a10257 mov dword ptr [0x12a2e7f0], 0 */
  w32((uint32_t)(0x12a2e7f0), (0x0u));
  /* 12a10261 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a10264 push eax */
  push32((uint32_t)(EAX));
  /* 12a10265 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a10268 push ecx */
  push32((uint32_t)(ECX));
  /* 12a10269 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a1026c push edx */
  push32((uint32_t)(EDX));
  /* 12a1026d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a10270 push eax */
  push32((uint32_t)(EAX));
  /* 12a10271 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a10274 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 12a1027a push edx */
  push32((uint32_t)(EDX));
  /* 12a1027b call 0x12a105c0 */
  push32(0x12a10280u); f_12a105c0();
  /* 12a10280 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a10283 jmp 0x12a10358 */
  goto L_12a10358;
L_12a10288:;
  /* 12a10288 mov eax, dword ptr [0x12a2e7f0] */
  EAX = (r32((uint32_t)(0x12a2e7f0)));
  /* 12a1028d mov dword ptr [0x12a2e800], eax */
  w32((uint32_t)(0x12a2e800), (EAX));
  /* 12a10292 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a10295 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12a10298 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12a10299 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 12a1029e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12a102a0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12a102a3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a102a6 push edx */
  push32((uint32_t)(EDX));
  /* 12a102a7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a102aa push eax */
  push32((uint32_t)(EAX));
  /* 12a102ab push 2 */
  push32((uint32_t)(0x2u));
  /* 12a102ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a102b0 push ecx */
  push32((uint32_t)(ECX));
  /* 12a102b1 call 0x12a10460 */
  push32(0x12a102b6u); f_12a10460();
  /* 12a102b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a102b9 jmp 0x12a10358 */
  goto L_12a10358;
L_12a102be:;
  /* 12a102be mov edx, dword ptr [0x12a2e7f0] */
  EDX = (r32((uint32_t)(0x12a2e7f0)));
  /* 12a102c4 mov dword ptr [0x12a2e800], edx */
  w32((uint32_t)(0x12a2e800), (EDX));
  /* 12a102ca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a102cd mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 12a102d0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12a102d1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 12a102d6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12a102d8 mov ecx, eax */
  ECX = (EAX);
  /* 12a102da add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a102dd imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a102e0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a102e3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12a102e6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12a102e7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 12a102ec idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12a102ee add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a102f0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12a102f3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a102f6 push eax */
  push32((uint32_t)(EAX));
  /* 12a102f7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a102fa push ecx */
  push32((uint32_t)(ECX));
  /* 12a102fb push 4 */
  push32((uint32_t)(0x4u));
  /* 12a102fd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a10300 push edx */
  push32((uint32_t)(EDX));
  /* 12a10301 call 0x12a10460 */
  push32(0x12a10306u); f_12a10460();
  /* 12a10306 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a10309 jmp 0x12a10358 */
  goto L_12a10358;
L_12a1030b:;
  /* 12a1030b call 0x12a11420 */
  push32(0x12a10310u); f_12a11420();
  /* 12a10310 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a10313 push eax */
  push32((uint32_t)(EAX));
  /* 12a10314 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a10317 push ecx */
  push32((uint32_t)(ECX));
  /* 12a10318 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a1031b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a1031d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a10321 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 12a10324 mov ecx, dword ptr [eax*4 + 0x12a2de1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12a2de1c)));
  /* 12a1032b push ecx */
  push32((uint32_t)(ECX));
  /* 12a1032c call 0x12a10410 */
  push32(0x12a10331u); f_12a10410();
  /* 12a10331 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a10334 jmp 0x12a10358 */
  goto L_12a10358;
L_12a10336:;
  /* 12a10336 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a10339 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12a1033b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 12a1033e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a10341 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12a10343 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a10346 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a10349 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12a1034b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a1034e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12a10350 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a10353 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a10356 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12a10358:;
  /* 12a10358 pop esi */
  ESI = (pop32());
  /* 12a10359 mov esp, ebp */
  ESP = (EBP);
  /* 12a1035b pop ebp */
  EBP = (pop32());
  /* 12a1035c ret  */
  ESPCHK(0x12a0fdf0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x12a10410 (72 bytes, 30 insns) */
void f_12a10410(void) {
  FTRACE(0x12a10410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a10410 push ebp */
  push32((uint32_t)(EBP));
  /* 12a10411 mov ebp, esp */
  EBP = (ESP);
L_12a10413:;
  /* 12a10413 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a10416 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a10419 je 0x12a10456 */
  if (C.zf) goto L_12a10456;
  /* 12a1041b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a1041e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12a10421 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a10423 je 0x12a10456 */
  if (C.zf) goto L_12a10456;
  /* 12a10425 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a10428 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12a1042a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a1042d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12a1042f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12a10431 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a10434 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12a10436 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a10439 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a1043c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12a1043e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a10441 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a10444 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12a10447 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a1044a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12a1044c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a1044f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a10452 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12a10454 jmp 0x12a10413 */
  goto L_12a10413;
L_12a10456:;
  /* 12a10456 pop ebp */
  EBP = (pop32());
  /* 12a10457 ret  */
  ESPCHK(0x12a10410u, _esp0);
  ESP += 4; return;
}

/* FUN_10010460 @ 0x12a10460 (173 bytes, 64 insns) */
void f_12a10460(void) {
  FTRACE(0x12a10460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a10460 push ebp */
  push32((uint32_t)(EBP));
  /* 12a10461 mov ebp, esp */
  EBP = (ESP);
  /* 12a10463 push ecx */
  push32((uint32_t)(ECX));
  /* 12a10464 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12a1046b cmp dword ptr [0x12a2e800], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e800))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a10472 je 0x12a1048a */
  if (C.zf) goto L_12a1048a;
  /* 12a10474 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a10477 push eax */
  push32((uint32_t)(EAX));
  /* 12a10478 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a1047b push ecx */
  push32((uint32_t)(ECX));
  /* 12a1047c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a1047f push edx */
  push32((uint32_t)(EDX));
  /* 12a10480 call 0x12a10510 */
  push32(0x12a10485u); f_12a10510();
  /* 12a10485 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a10488 jmp 0x12a10509 */
  goto L_12a10509;
L_12a1048a:;
  /* 12a1048a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a1048d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a10490 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a10492 jae 0x12a10500 */
  if (!C.cf) goto L_12a10500;
  /* 12a10494 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a10497 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a1049a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12a1049d jmp 0x12a104a8 */
  goto L_12a104a8;
L_12a1049f:;
  /* 12a1049f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a104a2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a104a5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_12a104a8:;
  /* 12a104a8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a104ab add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a104ae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a104b0 je 0x12a104e4 */
  if (C.zf) goto L_12a104e4;
  /* 12a104b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a104b5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12a104b6 mov ecx, 0xa */
  ECX = (0xau);
  /* 12a104bb idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12a104bd add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a104c0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a104c3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12a104c5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a104c8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 12a104cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a104ce cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12a104cf mov ecx, 0xa */
  ECX = (0xau);
  /* 12a104d4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12a104d6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12a104d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a104dc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a104df mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12a104e2 jmp 0x12a1049f */
  goto L_12a1049f;
L_12a104e4:;
  /* 12a104e4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a104e7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12a104e9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a104ec mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a104ef mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12a104f1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a104f4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12a104f6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a104f9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a104fc mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12a104fe jmp 0x12a10509 */
  goto L_12a10509;
L_12a10500:;
  /* 12a10500 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a10503 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12a10509:;
  /* 12a10509 mov esp, ebp */
  ESP = (EBP);
  /* 12a1050b pop ebp */
  EBP = (pop32());
  /* 12a1050c ret  */
  ESPCHK(0x12a10460u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x12a10510 (172 bytes, 65 insns) */
void f_12a10510(void) {
  FTRACE(0x12a10510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a10510 push ebp */
  push32((uint32_t)(EBP));
  /* 12a10511 mov ebp, esp */
  EBP = (ESP);
  /* 12a10513 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a10516 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a10519 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12a1051b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12a1051e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a10521 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a10524 jbe 0x12a1056b */
  if ((C.cf||C.zf)) goto L_12a1056b;
L_12a10526:;
  /* 12a10526 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a10529 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12a1052a mov ecx, 0xa */
  ECX = (0xau);
  /* 12a1052f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12a10531 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a10534 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a10537 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12a10539 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a1053c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a1053f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12a10542 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a10545 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12a10547 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a1054a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a1054d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12a1054f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a10552 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12a10553 mov ecx, 0xa */
  ECX = (0xau);
  /* 12a10558 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12a1055a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12a1055d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a10561 jle 0x12a1056b */
  if ((C.zf||C.sf!=C.of)) goto L_12a1056b;
  /* 12a10563 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a10566 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a10569 ja 0x12a10526 */
  if ((!C.cf&&!C.zf)) goto L_12a10526;
L_12a1056b:;
  /* 12a1056b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a1056e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12a10570 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12a10573 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a10576 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a10579 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12a1057b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a1057e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a10581 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12a10584:;
  /* 12a10584 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a10587 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12a10589 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 12a1058c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a1058f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a10592 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12a10594 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12a10596 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a10599 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a1059c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12a1059f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a105a2 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12a105a5 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12a105a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a105aa add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a105ad mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12a105b0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a105b3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a105b6 jb 0x12a10584 */
  if (C.cf) goto L_12a10584;
  /* 12a105b8 mov esp, ebp */
  ESP = (EBP);
  /* 12a105ba pop ebp */
  EBP = (pop32());
  /* 12a105bb ret  */
  ESPCHK(0x12a10510u, _esp0);
  ESP += 4; return;
}

/* FUN_100105c0 @ 0x12a105c0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_12a105c0(void) {
  FTRACE(0x12a105c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a105c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a105c1 mov ebp, esp */
  EBP = (ESP);
  /* 12a105c3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_12a105c6:;
  /* 12a105c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a105c9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12a105cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a105ce je 0x12a10a3c */
  if (C.zf) goto L_12a10a3c;
  /* 12a105d4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a105d7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a105da je 0x12a10a3c */
  if (C.zf) goto L_12a10a3c;
  /* 12a105e0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 12a105e4 mov dword ptr [0x12a2e800], 0 */
  w32((uint32_t)(0x12a2e800), (0x0u));
  /* 12a105ee mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12a105f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a105f8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a105fb jmp 0x12a10606 */
  goto L_12a10606;
L_12a105fd:;
  /* 12a105fd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a10600 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a10603 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12a10606:;
  /* 12a10606 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a10609 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12a1060c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a1060f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12a10612 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a10615 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a10618 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12a1061b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a1061d jne 0x12a10621 */
  if (!C.zf) goto L_12a10621;
  /* 12a1061f jmp 0x12a105fd */
  goto L_12a105fd;
L_12a10621:;
  /* 12a10621 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a10624 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a10627 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12a1062a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a1062d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12a10630 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12a10633 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a10636 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a10639 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12a1063c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a10640 ja 0x12a10990 */
  if ((!C.cf&&!C.zf)) goto L_12a10990;
  /* 12a10646 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a10649 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a1064b mov al, byte ptr [ecx + 0x12a10a6c] */
  AL = (r8((uint32_t)(ECX + 0x12a10a6c)));
  /* 12a10651 jmp dword ptr [eax*4 + 0x12a10a40] */
  switch (EAX) {
    case 0: goto L_12a108af;
    case 1: goto L_12a10793;
    case 2: goto L_12a1071e;
    case 3: goto L_12a10658;
    case 4: goto L_12a10696;
    case 5: goto L_12a106f7;
    case 6: goto L_12a10745;
    case 7: goto L_12a1076c;
    case 8: goto L_12a107da;
    case 9: goto L_12a106d4;
    case 10: goto L_12a10990;
    default: x86_unimpl("switch@0x12a10651 out of table"); return;
  }
L_12a10658:;
  /* 12a10658 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a1065b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12a1065e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a10661 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a10664 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12a10667 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a1066b ja 0x12a10691 */
  if ((!C.cf&&!C.zf)) goto L_12a10691;
  /* 12a1066d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a10670 jmp dword ptr [ecx*4 + 0x12a10abf] */
  switch (ECX) {
    case 0: goto L_12a10677;
    case 1: goto L_12a10681;
    case 2: goto L_12a10687;
    case 3: goto L_12a1068d;
    case 4: goto L_12a106b5;
    case 5: goto L_12a106bf;
    case 6: goto L_12a106c5;
    case 7: goto L_12a106cb;
    default: x86_unimpl("switch@0x12a10670 out of table"); return;
  }
L_12a10677:;
  /* 12a10677 mov dword ptr [0x12a2e800], 1 */
  w32((uint32_t)(0x12a2e800), (0x1u));
L_12a10681:;
  /* 12a10681 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 12a10685 jmp 0x12a10691 */
  goto L_12a10691;
L_12a10687:;
  /* 12a10687 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 12a1068b jmp 0x12a10691 */
  goto L_12a10691;
L_12a1068d:;
  /* 12a1068d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_12a10691:;
  /* 12a10691 jmp 0x12a10990 */
  goto L_12a10990;
L_12a10696:;
  /* 12a10696 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a10699 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12a1069c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12a1069f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a106a2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12a106a5 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a106a9 ja 0x12a106cf */
  if ((!C.cf&&!C.zf)) goto L_12a106cf;
  /* 12a106ab mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12a106ae jmp dword ptr [ecx*4 + 0x12a10acf] */
  switch (ECX) {
    case 0: goto L_12a106b5;
    case 1: goto L_12a106bf;
    case 2: goto L_12a106c5;
    case 3: goto L_12a106cb;
    default: x86_unimpl("switch@0x12a106ae out of table"); return;
  }
L_12a106b5:;
  /* 12a106b5 mov dword ptr [0x12a2e800], 1 */
  w32((uint32_t)(0x12a2e800), (0x1u));
L_12a106bf:;
  /* 12a106bf mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 12a106c3 jmp 0x12a106cf */
  goto L_12a106cf;
L_12a106c5:;
  /* 12a106c5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 12a106c9 jmp 0x12a106cf */
  goto L_12a106cf;
L_12a106cb:;
  /* 12a106cb mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_12a106cf:;
  /* 12a106cf jmp 0x12a10990 */
  goto L_12a10990;
L_12a106d4:;
  /* 12a106d4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a106d7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12a106da cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a106de je 0x12a106e8 */
  if (C.zf) goto L_12a106e8;
  /* 12a106e0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a106e4 je 0x12a106ee */
  if (C.zf) goto L_12a106ee;
  /* 12a106e6 jmp 0x12a106f2 */
  goto L_12a106f2;
L_12a106e8:;
  /* 12a106e8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 12a106ec jmp 0x12a106f2 */
  goto L_12a106f2;
L_12a106ee:;
  /* 12a106ee mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_12a106f2:;
  /* 12a106f2 jmp 0x12a10990 */
  goto L_12a10990;
L_12a106f7:;
  /* 12a106f7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a106fa mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12a106fd cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a10701 je 0x12a1070b */
  if (C.zf) goto L_12a1070b;
  /* 12a10703 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a10707 je 0x12a10715 */
  if (C.zf) goto L_12a10715;
  /* 12a10709 jmp 0x12a10719 */
  goto L_12a10719;
L_12a1070b:;
  /* 12a1070b mov dword ptr [0x12a2e800], 1 */
  w32((uint32_t)(0x12a2e800), (0x1u));
L_12a10715:;
  /* 12a10715 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_12a10719:;
  /* 12a10719 jmp 0x12a10990 */
  goto L_12a10990;
L_12a1071e:;
  /* 12a1071e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a10721 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12a10724 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a10728 je 0x12a10732 */
  if (C.zf) goto L_12a10732;
  /* 12a1072a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a1072e je 0x12a1073c */
  if (C.zf) goto L_12a1073c;
  /* 12a10730 jmp 0x12a10740 */
  goto L_12a10740;
L_12a10732:;
  /* 12a10732 mov dword ptr [0x12a2e800], 1 */
  w32((uint32_t)(0x12a2e800), (0x1u));
L_12a1073c:;
  /* 12a1073c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_12a10740:;
  /* 12a10740 jmp 0x12a10990 */
  goto L_12a10990;
L_12a10745:;
  /* 12a10745 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a10748 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 12a1074b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a1074f je 0x12a10759 */
  if (C.zf) goto L_12a10759;
  /* 12a10751 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a10755 je 0x12a10763 */
  if (C.zf) goto L_12a10763;
  /* 12a10757 jmp 0x12a10767 */
  goto L_12a10767;
L_12a10759:;
  /* 12a10759 mov dword ptr [0x12a2e800], 1 */
  w32((uint32_t)(0x12a2e800), (0x1u));
L_12a10763:;
  /* 12a10763 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_12a10767:;
  /* 12a10767 jmp 0x12a10990 */
  goto L_12a10990;
L_12a1076c:;
  /* 12a1076c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a1076f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12a10772 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a10776 je 0x12a10780 */
  if (C.zf) goto L_12a10780;
  /* 12a10778 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a1077c je 0x12a1078a */
  if (C.zf) goto L_12a1078a;
  /* 12a1077e jmp 0x12a1078e */
  goto L_12a1078e;
L_12a10780:;
  /* 12a10780 mov dword ptr [0x12a2e800], 1 */
  w32((uint32_t)(0x12a2e800), (0x1u));
L_12a1078a:;
  /* 12a1078a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_12a1078e:;
  /* 12a1078e jmp 0x12a10990 */
  goto L_12a10990;
L_12a10793:;
  /* 12a10793 push 0x12a2a7c4 */
  push32((uint32_t)(0x12a2a7c4u));
  /* 12a10798 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a1079b push ecx */
  push32((uint32_t)(ECX));
  /* 12a1079c call 0x12a10ff0 */
  push32(0x12a107a1u); f_12a10ff0();
  /* 12a107a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a107a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a107a6 jne 0x12a107b3 */
  if (!C.zf) goto L_12a107b3;
  /* 12a107a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a107ab add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a107ae mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12a107b1 jmp 0x12a107d1 */
  goto L_12a107d1;
L_12a107b3:;
  /* 12a107b3 push 0x12a2a7c0 */
  push32((uint32_t)(0x12a2a7c0u));
  /* 12a107b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a107bb push eax */
  push32((uint32_t)(EAX));
  /* 12a107bc call 0x12a10ff0 */
  push32(0x12a107c1u); f_12a10ff0();
  /* 12a107c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a107c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a107c6 jne 0x12a107d1 */
  if (!C.zf) goto L_12a107d1;
  /* 12a107c8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a107cb add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a107ce mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12a107d1:;
  /* 12a107d1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 12a107d5 jmp 0x12a10990 */
  goto L_12a10990;
L_12a107da:;
  /* 12a107da mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a107dd cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a107e1 jg 0x12a107f1 */
  if ((!C.zf&&C.sf==C.of)) goto L_12a107f1;
  /* 12a107e3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a107e6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 12a107ec mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12a107ef jmp 0x12a107fd */
  goto L_12a107fd;
L_12a107f1:;
  /* 12a107f1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a107f4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 12a107fa mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12a107fd:;
  /* 12a107fd cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a10801 jle 0x12a108a4 */
  if ((C.zf||C.sf!=C.of)) goto L_12a108a4;
  /* 12a10807 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a1080a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a1080d jbe 0x12a108a4 */
  if ((C.cf||C.zf)) goto L_12a108a4;
  /* 12a10813 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a10816 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a10818 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12a1081a mov ecx, dword ptr [0x12a2cc98] */
  ECX = (r32((uint32_t)(0x12a2cc98)));
  /* 12a10820 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a10822 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12a10826 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12a1082c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a1082e je 0x12a10867 */
  if (C.zf) goto L_12a10867;
  /* 12a10830 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a10833 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a10836 jbe 0x12a10867 */
  if ((C.cf||C.zf)) goto L_12a10867;
  /* 12a10838 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a1083b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12a1083d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a10840 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12a10842 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12a10844 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a10847 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12a10849 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a1084c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a1084f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12a10851 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a10854 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a10857 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12a1085a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a1085d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12a1085f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a10862 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a10865 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12a10867:;
  /* 12a10867 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a1086a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12a1086c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a1086f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12a10871 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12a10873 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a10876 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12a10878 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a1087b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a1087e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12a10880 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a10883 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a10886 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12a10889 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a1088c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12a1088e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a10891 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a10894 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12a10896 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a10899 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a1089c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12a1089f jmp 0x12a107fd */
  goto L_12a107fd;
L_12a108a4:;
  /* 12a108a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a108a7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12a108aa jmp 0x12a105c6 */
  goto L_12a105c6;
L_12a108af:;
  /* 12a108af mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a108b2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12a108b5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a108b7 je 0x12a10982 */
  if (C.zf) goto L_12a10982;
  /* 12a108bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a108c0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a108c3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12a108c6:;
  /* 12a108c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a108c9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12a108cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a108ce je 0x12a10980 */
  if (C.zf) goto L_12a10980;
  /* 12a108d4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a108d7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a108da je 0x12a10980 */
  if (C.zf) goto L_12a10980;
  /* 12a108e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a108e3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12a108e6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a108e9 jne 0x12a108f9 */
  if (!C.zf) goto L_12a108f9;
  /* 12a108eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a108ee add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a108f1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12a108f4 jmp 0x12a10980 */
  goto L_12a10980;
L_12a108f9:;
  /* 12a108f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a108fc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a108fe mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12a10900 mov edx, dword ptr [0x12a2cc98] */
  EDX = (r32((uint32_t)(0x12a2cc98)));
  /* 12a10906 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a10908 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12a1090c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12a10911 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a10913 je 0x12a1094c */
  if (C.zf) goto L_12a1094c;
  /* 12a10915 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a10918 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a1091b jbe 0x12a1094c */
  if ((C.cf||C.zf)) goto L_12a1094c;
  /* 12a1091d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a10920 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12a10922 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a10925 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12a10927 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12a10929 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a1092c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12a1092e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a10931 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a10934 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12a10936 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a10939 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a1093c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12a1093f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a10942 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12a10944 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a10947 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a1094a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12a1094c:;
  /* 12a1094c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a1094f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12a10951 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a10954 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12a10956 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12a10958 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a1095b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12a1095d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a10960 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a10963 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12a10965 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a10968 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a1096b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12a1096e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a10971 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12a10973 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a10976 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a10979 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12a1097b jmp 0x12a108c6 */
  goto L_12a108c6;
L_12a10980:;
  /* 12a10980 jmp 0x12a1098b */
  goto L_12a1098b;
L_12a10982:;
  /* 12a10982 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a10985 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a10988 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12a1098b:;
  /* 12a1098b jmp 0x12a105c6 */
  goto L_12a105c6;
L_12a10990:;
  /* 12a10990 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12a10994 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a10996 je 0x12a109bc */
  if (C.zf) goto L_12a109bc;
  /* 12a10998 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a1099b push edx */
  push32((uint32_t)(EDX));
  /* 12a1099c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a1099f push eax */
  push32((uint32_t)(EAX));
  /* 12a109a0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a109a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12a109a4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a109a7 push edx */
  push32((uint32_t)(EDX));
  /* 12a109a8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12a109ab push eax */
  push32((uint32_t)(EAX));
  /* 12a109ac call 0x12a0fdf0 */
  push32(0x12a109b1u); f_12a0fdf0();
  /* 12a109b1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a109b4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a109b7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12a109ba jmp 0x12a10a37 */
  goto L_12a10a37;
L_12a109bc:;
  /* 12a109bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a109bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a109c1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12a109c3 mov ecx, dword ptr [0x12a2cc98] */
  ECX = (r32((uint32_t)(0x12a2cc98)));
  /* 12a109c9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a109cb mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12a109cf and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12a109d5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a109d7 je 0x12a10a08 */
  if (C.zf) goto L_12a10a08;
  /* 12a109d9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a109dc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12a109de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a109e1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12a109e3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12a109e5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a109e8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12a109ea add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a109ed mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a109f0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12a109f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a109f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a109f8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12a109fb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a109fe mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12a10a00 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a10a03 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a10a06 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12a10a08:;
  /* 12a10a08 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a10a0b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12a10a0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a10a10 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12a10a12 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12a10a14 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a10a17 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12a10a19 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a10a1c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a10a1f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12a10a21 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a10a24 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a10a27 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12a10a2a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a10a2d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12a10a2f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a10a32 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a10a35 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12a10a37:;
  /* 12a10a37 jmp 0x12a105c6 */
  goto L_12a105c6;
L_12a10a3c:;
  /* 12a10a3c mov esp, ebp */
  ESP = (EBP);
  /* 12a10a3e pop ebp */
  EBP = (pop32());
  /* 12a10a3f ret  */
  ESPCHK(0x12a105c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ae0 @ 0x12a10ae0 (650 bytes, 178 insns) */
void f_12a10ae0(void) {
  FTRACE(0x12a10ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a10ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a10ae1 mov ebp, esp */
  EBP = (ESP);
  /* 12a10ae3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a10ae9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a10aed jne 0x12a10c49 */
  if (!C.zf) goto L_12a10c49;
  /* 12a10af3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a10af6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 12a10afc lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 12a10b02 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a10b05 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12a10b0c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 12a10b16 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a10b18 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12a10b1e push edx */
  push32((uint32_t)(EDX));
  /* 12a10b1f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a10b22 push eax */
  push32((uint32_t)(EAX));
  /* 12a10b23 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a10b26 push ecx */
  push32((uint32_t)(ECX));
  /* 12a10b27 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a10b2a push edx */
  push32((uint32_t)(EDX));
  /* 12a10b2b call 0x12a11f00 */
  push32(0x12a10b30u); f_12a11f00();
  /* 12a10b30 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a10b33 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12a10b36 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a10b3a jne 0x12a10bcf */
  if (!C.zf) goto L_12a10bcf;
  /* 12a10b40 call dword ptr [0x12a30294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30294))), 0x12a10b46u);
  /* 12a10b46 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a10b49 je 0x12a10b50 */
  if (C.zf) goto L_12a10b50;
  /* 12a10b4b jmp 0x12a10c2d */
  goto L_12a10c2d;
L_12a10b50:;
  /* 12a10b50 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a10b52 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a10b54 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a10b56 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a10b59 push eax */
  push32((uint32_t)(EAX));
  /* 12a10b5a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a10b5d push ecx */
  push32((uint32_t)(ECX));
  /* 12a10b5e call 0x12a11f00 */
  push32(0x12a10b63u); f_12a11f00();
  /* 12a10b63 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a10b66 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 12a10b6c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a10b73 jne 0x12a10b7a */
  if (!C.zf) goto L_12a10b7a;
  /* 12a10b75 jmp 0x12a10c2d */
  goto L_12a10c2d;
L_12a10b7a:;
  /* 12a10b7a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 12a10b7c push 0x12a2a7cc */
  push32((uint32_t)(0x12a2a7ccu));
  /* 12a10b81 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a10b83 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12a10b89 push edx */
  push32((uint32_t)(EDX));
  /* 12a10b8a call 0x12a02920 */
  push32(0x12a10b8fu); f_12a02920();
  /* 12a10b8f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a10b92 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12a10b95 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a10b99 jne 0x12a10ba0 */
  if (!C.zf) goto L_12a10ba0;
  /* 12a10b9b jmp 0x12a10c2d */
  goto L_12a10c2d;
L_12a10ba0:;
  /* 12a10ba0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12a10ba7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a10ba9 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 12a10baf push eax */
  push32((uint32_t)(EAX));
  /* 12a10bb0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a10bb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12a10bb4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a10bb7 push edx */
  push32((uint32_t)(EDX));
  /* 12a10bb8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a10bbb push eax */
  push32((uint32_t)(EAX));
  /* 12a10bbc call 0x12a11f00 */
  push32(0x12a10bc1u); f_12a11f00();
  /* 12a10bc1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a10bc4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12a10bc7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a10bcb jne 0x12a10bcf */
  if (!C.zf) goto L_12a10bcf;
  /* 12a10bcd jmp 0x12a10c2d */
  goto L_12a10c2d;
L_12a10bcf:;
  /* 12a10bcf push 0x63 */
  push32((uint32_t)(0x63u));
  /* 12a10bd1 push 0x12a2a7cc */
  push32((uint32_t)(0x12a2a7ccu));
  /* 12a10bd6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a10bd8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a10bdb push ecx */
  push32((uint32_t)(ECX));
  /* 12a10bdc call 0x12a02920 */
  push32(0x12a10be1u); f_12a02920();
  /* 12a10be1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a10be4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 12a10bea mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12a10bec mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12a10bf2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a10bf5 jne 0x12a10bf9 */
  if (!C.zf) goto L_12a10bf9;
  /* 12a10bf7 jmp 0x12a10c2d */
  goto L_12a10c2d;
L_12a10bf9:;
  /* 12a10bf9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a10bfc push ecx */
  push32((uint32_t)(ECX));
  /* 12a10bfd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a10c00 push edx */
  push32((uint32_t)(EDX));
  /* 12a10c01 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12a10c07 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12a10c09 push ecx */
  push32((uint32_t)(ECX));
  /* 12a10c0a call 0x12a06140 */
  push32(0x12a10c0fu); f_12a06140();
  /* 12a10c0f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a10c12 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a10c16 je 0x12a10c26 */
  if (C.zf) goto L_12a10c26;
  /* 12a10c18 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a10c1a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a10c1d push edx */
  push32((uint32_t)(EDX));
  /* 12a10c1e call 0x12a033b0 */
  push32(0x12a10c23u); f_12a033b0();
  /* 12a10c23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a10c26:;
  /* 12a10c26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a10c28 jmp 0x12a10d66 */
  goto L_12a10d66;
L_12a10c2d:;
  /* 12a10c2d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a10c31 je 0x12a10c41 */
  if (C.zf) goto L_12a10c41;
  /* 12a10c33 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a10c35 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a10c38 push eax */
  push32((uint32_t)(EAX));
  /* 12a10c39 call 0x12a033b0 */
  push32(0x12a10c3eu); f_12a033b0();
  /* 12a10c3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a10c41:;
  /* 12a10c41 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a10c44 jmp 0x12a10d66 */
  goto L_12a10d66;
L_12a10c49:;
  /* 12a10c49 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a10c4d jne 0x12a10d63 */
  if (!C.zf) goto L_12a10d63;
  /* 12a10c53 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 12a10c5d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a10c60 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 12a10c66 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a10c68 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12a10c6e push edx */
  push32((uint32_t)(EDX));
  /* 12a10c6f push 0x12a2e718 */
  push32((uint32_t)(0x12a2e718u));
  /* 12a10c74 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a10c77 push eax */
  push32((uint32_t)(EAX));
  /* 12a10c78 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a10c7b push ecx */
  push32((uint32_t)(ECX));
  /* 12a10c7c call 0x12a11d60 */
  push32(0x12a10c81u); f_12a11d60();
  /* 12a10c81 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a10c84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a10c86 jne 0x12a10c90 */
  if (!C.zf) goto L_12a10c90;
  /* 12a10c88 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a10c8b jmp 0x12a10d66 */
  goto L_12a10d66;
L_12a10c90:;
  /* 12a10c90 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12a10c96 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12a10c99 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 12a10ca3 jmp 0x12a10cb4 */
  goto L_12a10cb4;
L_12a10ca5:;
  /* 12a10ca5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12a10cab add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a10cae mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_12a10cb4:;
  /* 12a10cb4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a10cbb jge 0x12a10d5f */
  if ((C.sf==C.of)) goto L_12a10d5f;
  /* 12a10cc1 cmp dword ptr [0x12a2cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12a2cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a10cc8 jle 0x12a10cfb */
  if ((C.zf||C.sf!=C.of)) goto L_12a10cfb;
  /* 12a10cca push 4 */
  push32((uint32_t)(0x4u));
  /* 12a10ccc mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12a10cd2 mov dl, byte ptr [ecx*2 + 0x12a2e718] */
  DL = (r8((uint32_t)(ECX*2 + 0x12a2e718)));
  /* 12a10cd9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 12a10cdf mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12a10ce5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a10cea push eax */
  push32((uint32_t)(EAX));
  /* 12a10ceb call 0x12a08930 */
  push32(0x12a10cf0u); f_12a08930();
  /* 12a10cf0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a10cf3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 12a10cf9 jmp 0x12a10d2e */
  goto L_12a10d2e;
L_12a10cfb:;
  /* 12a10cfb mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12a10d01 mov dl, byte ptr [ecx*2 + 0x12a2e718] */
  DL = (r8((uint32_t)(ECX*2 + 0x12a2e718)));
  /* 12a10d08 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 12a10d0e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12a10d14 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a10d19 mov ecx, dword ptr [0x12a2cc98] */
  ECX = (r32((uint32_t)(0x12a2cc98)));
  /* 12a10d1f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a10d21 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12a10d25 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12a10d28 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_12a10d2e:;
  /* 12a10d2e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a10d35 je 0x12a10d58 */
  if (C.zf) goto L_12a10d58;
  /* 12a10d37 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12a10d3d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12a10d40 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a10d43 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 12a10d4a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12a10d4e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12a10d54 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12a10d56 jmp 0x12a10d5a */
  goto L_12a10d5a;
L_12a10d58:;
  /* 12a10d58 jmp 0x12a10d5f */
  goto L_12a10d5f;
L_12a10d5a:;
  /* 12a10d5a jmp 0x12a10ca5 */
  goto L_12a10ca5;
L_12a10d5f:;
  /* 12a10d5f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a10d61 jmp 0x12a10d66 */
  goto L_12a10d66;
L_12a10d63:;
  /* 12a10d63 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12a10d66:;
  /* 12a10d66 mov esp, ebp */
  ESP = (EBP);
  /* 12a10d68 pop ebp */
  EBP = (pop32());
  /* 12a10d69 ret  */
  ESPCHK(0x12a10ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010d70 @ 0x12a10d70 (10 bytes, 5 insns) */
void f_12a10d70(void) {
  FTRACE(0x12a10d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a10d70 push ebp */
  push32((uint32_t)(EBP));
  /* 12a10d71 mov ebp, esp */
  EBP = (ESP);
  /* 12a10d73 mov eax, dword ptr [0x12a2dd88] */
  EAX = (r32((uint32_t)(0x12a2dd88)));
  /* 12a10d78 pop ebp */
  EBP = (pop32());
  /* 12a10d79 ret  */
  ESPCHK(0x12a10d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10010d80 @ 0x12a10d80 (575 bytes, 196 insns) */
void f_12a10d80(void) {
  FTRACE(0x12a10d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a10d80 push ebp */
  push32((uint32_t)(EBP));
  /* 12a10d81 mov ebp, esp */
  EBP = (ESP);
  /* 12a10d83 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12a10d85 push 0x12a2a7d8 */
  push32((uint32_t)(0x12a2a7d8u));
  /* 12a10d8a push 0x12a0ba28 */
  push32((uint32_t)(0x12a0ba28u));
  /* 12a10d8f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12a10d95 push eax */
  push32((uint32_t)(EAX));
  /* 12a10d96 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12a10d9d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a10da0 push ebx */
  push32((uint32_t)(EBX));
  /* 12a10da1 push esi */
  push32((uint32_t)(ESI));
  /* 12a10da2 push edi */
  push32((uint32_t)(EDI));
  /* 12a10da3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12a10da6 cmp dword ptr [0x12a2e724], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e724))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a10dad jne 0x12a10dfe */
  if (!C.zf) goto L_12a10dfe;
  /* 12a10daf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12a10db2 push eax */
  push32((uint32_t)(EAX));
  /* 12a10db3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a10db5 push 0x12a29f0c */
  push32((uint32_t)(0x12a29f0cu));
  /* 12a10dba push 1 */
  push32((uint32_t)(0x1u));
  /* 12a10dbc call dword ptr [0x12a30314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30314))), 0x12a10dc2u);
  /* 12a10dc2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a10dc4 je 0x12a10dd2 */
  if (C.zf) goto L_12a10dd2;
  /* 12a10dc6 mov dword ptr [0x12a2e724], 1 */
  w32((uint32_t)(0x12a2e724), (0x1u));
  /* 12a10dd0 jmp 0x12a10dfe */
  goto L_12a10dfe;
L_12a10dd2:;
  /* 12a10dd2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12a10dd5 push ecx */
  push32((uint32_t)(ECX));
  /* 12a10dd6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a10dd8 push 0x12a29f08 */
  push32((uint32_t)(0x12a29f08u));
  /* 12a10ddd push 1 */
  push32((uint32_t)(0x1u));
  /* 12a10ddf push 0 */
  push32((uint32_t)(0x0u));
  /* 12a10de1 call dword ptr [0x12a30310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30310))), 0x12a10de7u);
  /* 12a10de7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a10de9 je 0x12a10df7 */
  if (C.zf) goto L_12a10df7;
  /* 12a10deb mov dword ptr [0x12a2e724], 2 */
  w32((uint32_t)(0x12a2e724), (0x2u));
  /* 12a10df5 jmp 0x12a10dfe */
  goto L_12a10dfe;
L_12a10df7:;
  /* 12a10df7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a10df9 jmp 0x12a10fd9 */
  goto L_12a10fd9;
L_12a10dfe:;
  /* 12a10dfe cmp dword ptr [0x12a2e724], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e724))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a10e05 jne 0x12a10e22 */
  if (!C.zf) goto L_12a10e22;
  /* 12a10e07 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a10e0a push edx */
  push32((uint32_t)(EDX));
  /* 12a10e0b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a10e0e push eax */
  push32((uint32_t)(EAX));
  /* 12a10e0f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a10e12 push ecx */
  push32((uint32_t)(ECX));
  /* 12a10e13 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a10e16 push edx */
  push32((uint32_t)(EDX));
  /* 12a10e17 call dword ptr [0x12a30314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30314))), 0x12a10e1du);
  /* 12a10e1d jmp 0x12a10fd9 */
  goto L_12a10fd9;
L_12a10e22:;
  /* 12a10e22 cmp dword ptr [0x12a2e724], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e724))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a10e29 jne 0x12a10fd7 */
  if (!C.zf) goto L_12a10fd7;
  /* 12a10e2f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a10e33 jne 0x12a10e3d */
  if (!C.zf) goto L_12a10e3d;
  /* 12a10e35 mov eax, dword ptr [0x12a2e698] */
  EAX = (r32((uint32_t)(0x12a2e698)));
  /* 12a10e3a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_12a10e3d:;
  /* 12a10e3d push 0 */
  push32((uint32_t)(0x0u));
  /* 12a10e3f push 0 */
  push32((uint32_t)(0x0u));
  /* 12a10e41 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a10e43 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a10e45 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a10e48 push ecx */
  push32((uint32_t)(ECX));
  /* 12a10e49 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a10e4c push edx */
  push32((uint32_t)(EDX));
  /* 12a10e4d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12a10e52 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a10e55 push eax */
  push32((uint32_t)(EAX));
  /* 12a10e56 call dword ptr [0x12a3021c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a3021c))), 0x12a10e5cu);
  /* 12a10e5c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12a10e5f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a10e63 jne 0x12a10e6c */
  if (!C.zf) goto L_12a10e6c;
  /* 12a10e65 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a10e67 jmp 0x12a10fd9 */
  goto L_12a10fd9;
L_12a10e6c:;
  /* 12a10e6c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12a10e73 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12a10e76 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a10e79 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12a10e7b call 0x12a05ac0 */
  push32(0x12a10e80u); f_12a05ac0();
  /* 12a10e80 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 12a10e83 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12a10e86 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a10e89 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12a10e8c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12a10e8f push edx */
  push32((uint32_t)(EDX));
  /* 12a10e90 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a10e92 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12a10e95 push eax */
  push32((uint32_t)(EAX));
  /* 12a10e96 call 0x12a06690 */
  push32(0x12a10e9bu); f_12a06690();
  /* 12a10e9b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a10e9e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12a10ea5 jmp 0x12a10ebe */
  goto L_12a10ebe;
  /* 12a10ea7 mov eax, 1 */
  EAX = (0x1u);
  /* 12a10eac ret  */
  ESPCHK(0x12a10d80u, _esp0);
  ESP += 4; return;
  /* 12a10ead mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12a10eb0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 12a10eb7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12a10ebe:;
  /* 12a10ebe cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a10ec2 jne 0x12a10ecb */
  if (!C.zf) goto L_12a10ecb;
  /* 12a10ec4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a10ec6 jmp 0x12a10fd9 */
  goto L_12a10fd9;
L_12a10ecb:;
  /* 12a10ecb push 0 */
  push32((uint32_t)(0x0u));
  /* 12a10ecd push 0 */
  push32((uint32_t)(0x0u));
  /* 12a10ecf mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12a10ed2 push ecx */
  push32((uint32_t)(ECX));
  /* 12a10ed3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12a10ed6 push edx */
  push32((uint32_t)(EDX));
  /* 12a10ed7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a10eda push eax */
  push32((uint32_t)(EAX));
  /* 12a10edb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a10ede push ecx */
  push32((uint32_t)(ECX));
  /* 12a10edf push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12a10ee4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a10ee7 push edx */
  push32((uint32_t)(EDX));
  /* 12a10ee8 call dword ptr [0x12a3021c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a3021c))), 0x12a10eeeu);
  /* 12a10eee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a10ef0 jne 0x12a10ef9 */
  if (!C.zf) goto L_12a10ef9;
  /* 12a10ef2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a10ef4 jmp 0x12a10fd9 */
  goto L_12a10fd9;
L_12a10ef9:;
  /* 12a10ef9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12a10f00 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12a10f03 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 12a10f07 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a10f0a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12a10f0c call 0x12a05ac0 */
  push32(0x12a10f11u); f_12a05ac0();
  /* 12a10f11 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 12a10f14 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12a10f17 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12a10f1a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12a10f1d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12a10f24 jmp 0x12a10f3d */
  goto L_12a10f3d;
  /* 12a10f26 mov eax, 1 */
  EAX = (0x1u);
  /* 12a10f2b ret  */
  ESPCHK(0x12a10d80u, _esp0);
  ESP += 4; return;
  /* 12a10f2c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12a10f2f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12a10f36 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12a10f3d:;
  /* 12a10f3d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a10f41 jne 0x12a10f4a */
  if (!C.zf) goto L_12a10f4a;
  /* 12a10f43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a10f45 jmp 0x12a10fd9 */
  goto L_12a10fd9;
L_12a10f4a:;
  /* 12a10f4a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a10f4e jne 0x12a10f59 */
  if (!C.zf) goto L_12a10f59;
  /* 12a10f50 mov edx, dword ptr [0x12a2e688] */
  EDX = (r32((uint32_t)(0x12a2e688)));
  /* 12a10f56 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_12a10f59:;
  /* 12a10f59 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a10f5c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a10f5f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 12a10f65 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a10f68 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a10f6b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 12a10f72 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a10f75 push ecx */
  push32((uint32_t)(ECX));
  /* 12a10f76 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12a10f79 push edx */
  push32((uint32_t)(EDX));
  /* 12a10f7a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12a10f7d push eax */
  push32((uint32_t)(EAX));
  /* 12a10f7e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a10f81 push ecx */
  push32((uint32_t)(ECX));
  /* 12a10f82 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12a10f85 push edx */
  push32((uint32_t)(EDX));
  /* 12a10f86 call dword ptr [0x12a30310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30310))), 0x12a10f8cu);
  /* 12a10f8c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12a10f8f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a10f92 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a10f95 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a10f97 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 12a10f9c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a10fa2 je 0x12a10fb8 */
  if (C.zf) goto L_12a10fb8;
  /* 12a10fa4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a10fa7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a10faa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a10fac mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12a10fb0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a10fb6 je 0x12a10fbc */
  if (C.zf) goto L_12a10fbc;
L_12a10fb8:;
  /* 12a10fb8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a10fba jmp 0x12a10fd9 */
  goto L_12a10fd9;
L_12a10fbc:;
  /* 12a10fbc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a10fbf shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12a10fc1 push eax */
  push32((uint32_t)(EAX));
  /* 12a10fc2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a10fc5 push ecx */
  push32((uint32_t)(ECX));
  /* 12a10fc6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a10fc9 push edx */
  push32((uint32_t)(EDX));
  /* 12a10fca call 0x12a0a810 */
  push32(0x12a10fcfu); f_12a0a810();
  /* 12a10fcf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a10fd2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a10fd5 jmp 0x12a10fd9 */
  goto L_12a10fd9;
L_12a10fd7:;
  /* 12a10fd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12a10fd9:;
  /* 12a10fd9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 12a10fdc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a10fdf mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12a10fe6 pop edi */
  EDI = (pop32());
  /* 12a10fe7 pop esi */
  ESI = (pop32());
  /* 12a10fe8 pop ebx */
  EBX = (pop32());
  /* 12a10fe9 mov esp, ebp */
  ESP = (EBP);
  /* 12a10feb pop ebp */
  EBP = (pop32());
  /* 12a10fec ret  */
  ESPCHK(0x12a10d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ff0 @ 0x12a10ff0 (208 bytes, 85 insns) */
void f_12a10ff0(void) {
  FTRACE(0x12a10ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a10ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a10ff1 mov ebp, esp */
  EBP = (ESP);
  /* 12a10ff3 push edi */
  push32((uint32_t)(EDI));
  /* 12a10ff4 push esi */
  push32((uint32_t)(ESI));
  /* 12a10ff5 push ebx */
  push32((uint32_t)(EBX));
  /* 12a10ff6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12a10ff9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12a10ffc lea eax, [0x12a2e680] */
  EAX = ((uint32_t)(0x12a2e680));
  /* 12a11002 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a11006 jne 0x12a11043 */
  if (!C.zf) goto L_12a11043;
  /* 12a11008 mov al, 0xff */
  AL = (0xffu);
  /* 12a1100a mov edi, edi */
  EDI = (EDI);
L_12a1100c:;
  /* 12a1100c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12a1100e je 0x12a1103e */
  if (C.zf) goto L_12a1103e;
  /* 12a11010 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12a11012 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12a11013 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 12a11015 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12a11016 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12a11018 je 0x12a1100c */
  if (C.zf) goto L_12a1100c;
  /* 12a1101a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12a1101c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12a1101e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12a11020 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12a11023 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12a11025 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12a11027 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 12a11029 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12a1102b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12a1102d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12a1102f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12a11032 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12a11034 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12a11036 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12a11038 je 0x12a1100c */
  if (C.zf) goto L_12a1100c;
  /* 12a1103a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12a1103c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_12a1103e:;
  /* 12a1103e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 12a11041 jmp 0x12a110bb */
  goto L_12a110bb;
L_12a11043:;
  /* 12a11043 lock inc dword ptr [0x12a2e814] */
  x86_unimpl("lock inc @ 0x12a11043");
  /* 12a1104a cmp dword ptr [0x12a2e804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a11051 jg 0x12a11057 */
  if ((!C.zf&&C.sf==C.of)) goto L_12a11057;
  /* 12a11053 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a11055 jmp 0x12a1106c */
  goto L_12a1106c;
L_12a11057:;
  /* 12a11057 lock dec dword ptr [0x12a2e814] */
  x86_unimpl("lock dec @ 0x12a11057");
  /* 12a1105e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12a11060 call 0x12a06320 */
  push32(0x12a11065u); f_12a06320();
  /* 12a11065 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_12a1106c:;
  /* 12a1106c mov eax, 0xff */
  EAX = (0xffu);
  /* 12a11071 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12a11073 nop  */
  /* nop */
L_12a11074:;
  /* 12a11074 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12a11076 je 0x12a1109f */
  if (C.zf) goto L_12a1109f;
  /* 12a11078 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12a1107a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12a1107b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 12a1107d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12a1107e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12a11080 je 0x12a11074 */
  if (C.zf) goto L_12a11074;
  /* 12a11082 push eax */
  push32((uint32_t)(EAX));
  /* 12a11083 push ebx */
  push32((uint32_t)(EBX));
  /* 12a11084 call 0x12a12160 */
  push32(0x12a11089u); f_12a12160();
  /* 12a11089 mov ebx, eax */
  EBX = (EAX);
  /* 12a1108b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a1108e call 0x12a12160 */
  push32(0x12a11093u); f_12a12160();
  /* 12a11093 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a11096 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12a11098 je 0x12a11074 */
  if (C.zf) goto L_12a11074;
  /* 12a1109a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a1109c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12a1109f:;
  /* 12a1109f mov ebx, eax */
  EBX = (EAX);
  /* 12a110a1 pop eax */
  EAX = (pop32());
  /* 12a110a2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a110a4 jne 0x12a110af */
  if (!C.zf) goto L_12a110af;
  /* 12a110a6 lock dec dword ptr [0x12a2e814] */
  x86_unimpl("lock dec @ 0x12a110a6");
  /* 12a110ad jmp 0x12a110b9 */
  goto L_12a110b9;
L_12a110af:;
  /* 12a110af push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12a110b1 call 0x12a063c0 */
  push32(0x12a110b6u); f_12a063c0();
  /* 12a110b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a110b9:;
  /* 12a110b9 mov eax, ebx */
  EAX = (EBX);
L_12a110bb:;
  /* 12a110bb pop ebx */
  EBX = (pop32());
  /* 12a110bc pop esi */
  ESI = (pop32());
  /* 12a110bd pop edi */
  EDI = (pop32());
  /* 12a110be leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12a110bf ret  */
  ESPCHK(0x12a10ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_100110c0 @ 0x12a110c0 (257 bytes, 103 insns) */
void f_12a110c0(void) {
  FTRACE(0x12a110c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a110c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a110c1 mov ebp, esp */
  EBP = (ESP);
  /* 12a110c3 push edi */
  push32((uint32_t)(EDI));
  /* 12a110c4 push esi */
  push32((uint32_t)(ESI));
  /* 12a110c5 push ebx */
  push32((uint32_t)(EBX));
  /* 12a110c6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a110c9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a110cb je 0x12a111ba */
  if (C.zf) goto L_12a111ba;
  /* 12a110d1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12a110d4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 12a110d7 lea eax, [0x12a2e680] */
  EAX = ((uint32_t)(0x12a2e680));
  /* 12a110dd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a110e1 jne 0x12a11131 */
  if (!C.zf) goto L_12a11131;
  /* 12a110e3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 12a110e5 mov bl, 0x5a */
  BL = (0x5au);
  /* 12a110e7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 12a110e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12a110ec:;
  /* 12a110ec mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 12a110ee or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12a110f0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 12a110f2 je 0x12a11115 */
  if (C.zf) goto L_12a11115;
  /* 12a110f4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12a110f6 je 0x12a11115 */
  if (C.zf) goto L_12a11115;
  /* 12a110f8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12a110f9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12a110fa cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12a110fc jb 0x12a11104 */
  if (C.cf) goto L_12a11104;
  /* 12a110fe cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12a11100 ja 0x12a11104 */
  if ((!C.cf&&!C.zf)) goto L_12a11104;
  /* 12a11102 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_12a11104:;
  /* 12a11104 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12a11106 jb 0x12a1110e */
  if (C.cf) goto L_12a1110e;
  /* 12a11108 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12a1110a ja 0x12a1110e */
  if ((!C.cf&&!C.zf)) goto L_12a1110e;
  /* 12a1110c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_12a1110e:;
  /* 12a1110e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12a11110 jne 0x12a1111f */
  if (!C.zf) goto L_12a1111f;
  /* 12a11112 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12a11113 jne 0x12a110ec */
  if (!C.zf) goto L_12a110ec;
L_12a11115:;
  /* 12a11115 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a11117 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12a11119 je 0x12a111ba */
  if (C.zf) goto L_12a111ba;
L_12a1111f:;
  /* 12a1111f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12a11124 jb 0x12a111ba */
  if (C.cf) goto L_12a111ba;
  /* 12a1112a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12a1112c jmp 0x12a111ba */
  goto L_12a111ba;
L_12a11131:;
  /* 12a11131 lock inc dword ptr [0x12a2e814] */
  x86_unimpl("lock inc @ 0x12a11131");
  /* 12a11138 cmp dword ptr [0x12a2e804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a1113f jg 0x12a11145 */
  if ((!C.zf&&C.sf==C.of)) goto L_12a11145;
  /* 12a11141 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a11143 jmp 0x12a1115e */
  goto L_12a1115e;
L_12a11145:;
  /* 12a11145 lock dec dword ptr [0x12a2e814] */
  x86_unimpl("lock dec @ 0x12a11145");
  /* 12a1114c mov ebx, ecx */
  EBX = (ECX);
  /* 12a1114e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12a11150 call 0x12a06320 */
  push32(0x12a11155u); f_12a06320();
  /* 12a11155 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 12a1115c mov ecx, ebx */
  ECX = (EBX);
L_12a1115e:;
  /* 12a1115e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a11160 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12a11162 mov edi, edi */
  EDI = (EDI);
L_12a11164:;
  /* 12a11164 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12a11166 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a11168 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 12a1116a je 0x12a1118f */
  if (C.zf) goto L_12a1118f;
  /* 12a1116c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12a1116e je 0x12a1118f */
  if (C.zf) goto L_12a1118f;
  /* 12a11170 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12a11171 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12a11172 push ecx */
  push32((uint32_t)(ECX));
  /* 12a11173 push eax */
  push32((uint32_t)(EAX));
  /* 12a11174 push ebx */
  push32((uint32_t)(EBX));
  /* 12a11175 call 0x12a12160 */
  push32(0x12a1117au); f_12a12160();
  /* 12a1117a mov ebx, eax */
  EBX = (EAX);
  /* 12a1117c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a1117f call 0x12a12160 */
  push32(0x12a11184u); f_12a12160();
  /* 12a11184 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a11187 pop ecx */
  ECX = (pop32());
  /* 12a11188 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a1118a jne 0x12a11195 */
  if (!C.zf) goto L_12a11195;
  /* 12a1118c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12a1118d jne 0x12a11164 */
  if (!C.zf) goto L_12a11164;
L_12a1118f:;
  /* 12a1118f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a11191 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a11193 je 0x12a1119e */
  if (C.zf) goto L_12a1119e;
L_12a11195:;
  /* 12a11195 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12a1119a jb 0x12a1119e */
  if (C.cf) goto L_12a1119e;
  /* 12a1119c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_12a1119e:;
  /* 12a1119e pop eax */
  EAX = (pop32());
  /* 12a1119f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a111a1 jne 0x12a111ac */
  if (!C.zf) goto L_12a111ac;
  /* 12a111a3 lock dec dword ptr [0x12a2e814] */
  x86_unimpl("lock dec @ 0x12a111a3");
  /* 12a111aa jmp 0x12a111ba */
  goto L_12a111ba;
L_12a111ac:;
  /* 12a111ac mov ebx, ecx */
  EBX = (ECX);
  /* 12a111ae push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12a111b0 call 0x12a063c0 */
  push32(0x12a111b5u); f_12a063c0();
  /* 12a111b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a111b8 mov ecx, ebx */
  ECX = (EBX);
L_12a111ba:;
  /* 12a111ba mov eax, ecx */
  EAX = (ECX);
  /* 12a111bc pop ebx */
  EBX = (pop32());
  /* 12a111bd pop esi */
  ESI = (pop32());
  /* 12a111be pop edi */
  EDI = (pop32());
  /* 12a111bf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12a111c0 ret  */
  ESPCHK(0x12a110c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100111d0 @ 0x12a111d0 (255 bytes, 88 insns) */
void f_12a111d0(void) {
  FTRACE(0x12a111d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a111d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a111d1 mov ebp, esp */
  EBP = (ESP);
  /* 12a111d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_12a111d6:;
  /* 12a111d6 cmp dword ptr [0x12a2cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12a2cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a111dd jle 0x12a111f6 */
  if ((C.zf||C.sf!=C.of)) goto L_12a111f6;
  /* 12a111df push 8 */
  push32((uint32_t)(0x8u));
  /* 12a111e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a111e4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a111e6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12a111e8 push ecx */
  push32((uint32_t)(ECX));
  /* 12a111e9 call 0x12a08930 */
  push32(0x12a111eeu); f_12a08930();
  /* 12a111ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a111f1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12a111f4 jmp 0x12a1120f */
  goto L_12a1120f;
L_12a111f6:;
  /* 12a111f6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a111f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a111fb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12a111fd mov ecx, dword ptr [0x12a2cc98] */
  ECX = (r32((uint32_t)(0x12a2cc98)));
  /* 12a11203 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a11205 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12a11209 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12a1120c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12a1120f:;
  /* 12a1120f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a11213 je 0x12a11220 */
  if (C.zf) goto L_12a11220;
  /* 12a11215 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a11218 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a1121b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12a1121e jmp 0x12a111d6 */
  goto L_12a111d6;
L_12a11220:;
  /* 12a11220 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a11223 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a11225 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12a11227 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12a1122a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a1122d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a11230 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12a11233 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a11236 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a11239 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a1123d je 0x12a11245 */
  if (C.zf) goto L_12a11245;
  /* 12a1123f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a11243 jne 0x12a11258 */
  if (!C.zf) goto L_12a11258;
L_12a11245:;
  /* 12a11245 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a11248 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a1124a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12a1124c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a1124f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a11252 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a11255 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12a11258:;
  /* 12a11258 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12a1125f:;
  /* 12a1125f cmp dword ptr [0x12a2cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12a2cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a11266 jle 0x12a1127b */
  if ((C.zf||C.sf!=C.of)) goto L_12a1127b;
  /* 12a11268 push 4 */
  push32((uint32_t)(0x4u));
  /* 12a1126a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a1126d push edx */
  push32((uint32_t)(EDX));
  /* 12a1126e call 0x12a08930 */
  push32(0x12a11273u); f_12a08930();
  /* 12a11273 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a11276 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12a11279 jmp 0x12a11290 */
  goto L_12a11290;
L_12a1127b:;
  /* 12a1127b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a1127e mov ecx, dword ptr [0x12a2cc98] */
  ECX = (r32((uint32_t)(0x12a2cc98)));
  /* 12a11284 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a11286 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12a1128a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12a1128d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12a11290:;
  /* 12a11290 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a11294 je 0x12a112bb */
  if (C.zf) goto L_12a112bb;
  /* 12a11296 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a11299 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a1129c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a1129f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 12a112a3 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12a112a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a112a9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a112ab mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12a112ad mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12a112b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a112b3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a112b6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12a112b9 jmp 0x12a1125f */
  goto L_12a1125f;
L_12a112bb:;
  /* 12a112bb cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a112bf jne 0x12a112c8 */
  if (!C.zf) goto L_12a112c8;
  /* 12a112c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a112c4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12a112c6 jmp 0x12a112cb */
  goto L_12a112cb;
L_12a112c8:;
  /* 12a112c8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12a112cb:;
  /* 12a112cb mov esp, ebp */
  ESP = (EBP);
  /* 12a112cd pop ebp */
  EBP = (pop32());
  /* 12a112ce ret  */
  ESPCHK(0x12a111d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100112d0 @ 0x12a112d0 (17 bytes, 8 insns) */
void f_12a112d0(void) {
  FTRACE(0x12a112d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a112d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a112d1 mov ebp, esp */
  EBP = (ESP);
  /* 12a112d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a112d6 push eax */
  push32((uint32_t)(EAX));
  /* 12a112d7 call 0x12a111d0 */
  push32(0x12a112dcu); f_12a111d0();
  /* 12a112dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a112df pop ebp */
  EBP = (pop32());
  /* 12a112e0 ret  */
  ESPCHK(0x12a112d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100112f0 @ 0x12a112f0 (297 bytes, 106 insns) */
void f_12a112f0(void) {
  FTRACE(0x12a112f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a112f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a112f1 mov ebp, esp */
  EBP = (ESP);
  /* 12a112f3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a112f6 push esi */
  push32((uint32_t)(ESI));
L_12a112f7:;
  /* 12a112f7 cmp dword ptr [0x12a2cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12a2cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a112fe jle 0x12a11317 */
  if ((C.zf||C.sf!=C.of)) goto L_12a11317;
  /* 12a11300 push 8 */
  push32((uint32_t)(0x8u));
  /* 12a11302 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a11305 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a11307 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12a11309 push ecx */
  push32((uint32_t)(ECX));
  /* 12a1130a call 0x12a08930 */
  push32(0x12a1130fu); f_12a08930();
  /* 12a1130f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a11312 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12a11315 jmp 0x12a11330 */
  goto L_12a11330;
L_12a11317:;
  /* 12a11317 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a1131a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a1131c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12a1131e mov ecx, dword ptr [0x12a2cc98] */
  ECX = (r32((uint32_t)(0x12a2cc98)));
  /* 12a11324 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a11326 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12a1132a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12a1132d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12a11330:;
  /* 12a11330 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a11334 je 0x12a11341 */
  if (C.zf) goto L_12a11341;
  /* 12a11336 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a11339 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a1133c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12a1133f jmp 0x12a112f7 */
  goto L_12a112f7;
L_12a11341:;
  /* 12a11341 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a11344 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a11346 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12a11348 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12a1134b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a1134e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a11351 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12a11354 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a11357 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12a1135a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a1135e je 0x12a11366 */
  if (C.zf) goto L_12a11366;
  /* 12a11360 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a11364 jne 0x12a11379 */
  if (!C.zf) goto L_12a11379;
L_12a11366:;
  /* 12a11366 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a11369 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a1136b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12a1136d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a11370 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a11373 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a11376 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12a11379:;
  /* 12a11379 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12a11380 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12a11387:;
  /* 12a11387 cmp dword ptr [0x12a2cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12a2cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a1138e jle 0x12a113a3 */
  if ((C.zf||C.sf!=C.of)) goto L_12a113a3;
  /* 12a11390 push 4 */
  push32((uint32_t)(0x4u));
  /* 12a11392 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a11395 push edx */
  push32((uint32_t)(EDX));
  /* 12a11396 call 0x12a08930 */
  push32(0x12a1139bu); f_12a08930();
  /* 12a1139b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a1139e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12a113a1 jmp 0x12a113b8 */
  goto L_12a113b8;
L_12a113a3:;
  /* 12a113a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a113a6 mov ecx, dword ptr [0x12a2cc98] */
  ECX = (r32((uint32_t)(0x12a2cc98)));
  /* 12a113ac xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a113ae mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12a113b2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12a113b5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_12a113b8:;
  /* 12a113b8 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a113bc je 0x12a113f9 */
  if (C.zf) goto L_12a113f9;
  /* 12a113be push 0 */
  push32((uint32_t)(0x0u));
  /* 12a113c0 push 0xa */
  push32((uint32_t)(0xau));
  /* 12a113c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a113c5 push eax */
  push32((uint32_t)(EAX));
  /* 12a113c6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a113c9 push ecx */
  push32((uint32_t)(ECX));
  /* 12a113ca call 0x12a12290 */
  push32(0x12a113cfu); f_12a12290();
  /* 12a113cf mov ecx, eax */
  ECX = (EAX);
  /* 12a113d1 mov esi, edx */
  ESI = (EDX);
  /* 12a113d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a113d6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a113d9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12a113da add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a113dc adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12a113de mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a113e1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 12a113e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a113e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a113e9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12a113eb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a113ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a113f1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a113f4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12a113f7 jmp 0x12a11387 */
  goto L_12a11387;
L_12a113f9:;
  /* 12a113f9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a113fd jne 0x12a1140e */
  if (!C.zf) goto L_12a1140e;
  /* 12a113ff mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a11402 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12a11404 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a11407 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a1140a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12a1140c jmp 0x12a11414 */
  goto L_12a11414;
L_12a1140e:;
  /* 12a1140e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a11411 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_12a11414:;
  /* 12a11414 pop esi */
  ESI = (pop32());
  /* 12a11415 mov esp, ebp */
  ESP = (EBP);
  /* 12a11417 pop ebp */
  EBP = (pop32());
  /* 12a11418 ret  */
  ESPCHK(0x12a112f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011420 @ 0x12a11420 (61 bytes, 18 insns) */
void f_12a11420(void) {
  FTRACE(0x12a11420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a11420 push ebp */
  push32((uint32_t)(EBP));
  /* 12a11421 mov ebp, esp */
  EBP = (ESP);
  /* 12a11423 cmp dword ptr [0x12a2e7e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e7e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a1142a jne 0x12a1145b */
  if (!C.zf) goto L_12a1145b;
  /* 12a1142c push 0xb */
  push32((uint32_t)(0xbu));
  /* 12a1142e call 0x12a06320 */
  push32(0x12a11433u); f_12a06320();
  /* 12a11433 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a11436 cmp dword ptr [0x12a2e7e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e7e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a1143d jne 0x12a11451 */
  if (!C.zf) goto L_12a11451;
  /* 12a1143f call 0x12a11480 */
  push32(0x12a11444u); f_12a11480();
  /* 12a11444 mov eax, dword ptr [0x12a2e7e0] */
  EAX = (r32((uint32_t)(0x12a2e7e0)));
  /* 12a11449 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a1144c mov dword ptr [0x12a2e7e0], eax */
  w32((uint32_t)(0x12a2e7e0), (EAX));
L_12a11451:;
  /* 12a11451 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12a11453 call 0x12a063c0 */
  push32(0x12a11458u); f_12a063c0();
  /* 12a11458 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a1145b:;
  /* 12a1145b pop ebp */
  EBP = (pop32());
  /* 12a1145c ret  */
  ESPCHK(0x12a11420u, _esp0);
  ESP += 4; return;
}

/* FUN_10011460 @ 0x12a11460 (30 bytes, 11 insns) */
void f_12a11460(void) {
  FTRACE(0x12a11460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a11460 push ebp */
  push32((uint32_t)(EBP));
  /* 12a11461 mov ebp, esp */
  EBP = (ESP);
  /* 12a11463 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12a11465 call 0x12a06320 */
  push32(0x12a1146au); f_12a06320();
  /* 12a1146a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a1146d call 0x12a11480 */
  push32(0x12a11472u); f_12a11480();
  /* 12a11472 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12a11474 call 0x12a063c0 */
  push32(0x12a11479u); f_12a063c0();
  /* 12a11479 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a1147c pop ebp */
  EBP = (pop32());
  /* 12a1147d ret  */
  ESPCHK(0x12a11460u, _esp0);
  ESP += 4; return;
}

/* FUN_10011480 @ 0x12a11480 (939 bytes, 266 insns) */
void f_12a11480(void) {
  FTRACE(0x12a11480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a11480 push ebp */
  push32((uint32_t)(EBP));
  /* 12a11481 mov ebp, esp */
  EBP = (ESP);
  /* 12a11483 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a11486 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12a1148d push 0xc */
  push32((uint32_t)(0xcu));
  /* 12a1148f call 0x12a06320 */
  push32(0x12a11494u); f_12a06320();
  /* 12a11494 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a11497 mov dword ptr [0x12a2e728], 0 */
  w32((uint32_t)(0x12a2e728), (0x0u));
  /* 12a114a1 mov dword ptr [0x12a2de38], 0xffffffff */
  w32((uint32_t)(0x12a2de38), (0xffffffffu));
  /* 12a114ab mov eax, dword ptr [0x12a2de38] */
  EAX = (r32((uint32_t)(0x12a2de38)));
  /* 12a114b0 mov dword ptr [0x12a2de28], eax */
  w32((uint32_t)(0x12a2de28), (EAX));
  /* 12a114b5 push 0x12a2a838 */
  push32((uint32_t)(0x12a2a838u));
  /* 12a114ba call 0x12a12300 */
  push32(0x12a114bfu); f_12a12300();
  /* 12a114bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a114c2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12a114c5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a114c9 jne 0x12a11603 */
  if (!C.zf) goto L_12a11603;
  /* 12a114cf push 0xc */
  push32((uint32_t)(0xcu));
  /* 12a114d1 call 0x12a063c0 */
  push32(0x12a114d6u); f_12a063c0();
  /* 12a114d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a114d9 push 0x12a2e730 */
  push32((uint32_t)(0x12a2e730u));
  /* 12a114de call dword ptr [0x12a30234] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30234))), 0x12a114e4u);
  /* 12a114e4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a114e7 je 0x12a115fe */
  if (C.zf) goto L_12a115fe;
  /* 12a114ed mov dword ptr [0x12a2e728], 1 */
  w32((uint32_t)(0x12a2e728), (0x1u));
  /* 12a114f7 mov ecx, dword ptr [0x12a2e730] */
  ECX = (r32((uint32_t)(0x12a2e730)));
  /* 12a114fd imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a11500 mov dword ptr [0x12a2dd90], ecx */
  w32((uint32_t)(0x12a2dd90), (ECX));
  /* 12a11506 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a11508 mov dx, word ptr [0x12a2e776] */
  DX = (r16((uint32_t)(0x12a2e776)));
  /* 12a1150f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a11511 je 0x12a11529 */
  if (C.zf) goto L_12a11529;
  /* 12a11513 mov eax, dword ptr [0x12a2e784] */
  EAX = (r32((uint32_t)(0x12a2e784)));
  /* 12a11518 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a1151b mov ecx, dword ptr [0x12a2dd90] */
  ECX = (r32((uint32_t)(0x12a2dd90)));
  /* 12a11521 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a11523 mov dword ptr [0x12a2dd90], ecx */
  w32((uint32_t)(0x12a2dd90), (ECX));
L_12a11529:;
  /* 12a11529 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a1152b mov dx, word ptr [0x12a2e7ca] */
  DX = (r16((uint32_t)(0x12a2e7ca)));
  /* 12a11532 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a11534 je 0x12a1155e */
  if (C.zf) goto L_12a1155e;
  /* 12a11536 cmp dword ptr [0x12a2e7d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e7d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a1153d je 0x12a1155e */
  if (C.zf) goto L_12a1155e;
  /* 12a1153f mov dword ptr [0x12a2dd94], 1 */
  w32((uint32_t)(0x12a2dd94), (0x1u));
  /* 12a11549 mov eax, dword ptr [0x12a2e7d8] */
  EAX = (r32((uint32_t)(0x12a2e7d8)));
  /* 12a1154e sub eax, dword ptr [0x12a2e784] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12a2e784))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a11554 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a11557 mov dword ptr [0x12a2dd98], eax */
  w32((uint32_t)(0x12a2dd98), (EAX));
  /* 12a1155c jmp 0x12a11572 */
  goto L_12a11572;
L_12a1155e:;
  /* 12a1155e mov dword ptr [0x12a2dd94], 0 */
  w32((uint32_t)(0x12a2dd94), (0x0u));
  /* 12a11568 mov dword ptr [0x12a2dd98], 0 */
  w32((uint32_t)(0x12a2dd98), (0x0u));
L_12a11572:;
  /* 12a11572 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12a11575 push ecx */
  push32((uint32_t)(ECX));
  /* 12a11576 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a11578 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12a1157a mov edx, dword ptr [0x12a2de1c] */
  EDX = (r32((uint32_t)(0x12a2de1c)));
  /* 12a11580 push edx */
  push32((uint32_t)(EDX));
  /* 12a11581 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12a11583 push 0x12a2e734 */
  push32((uint32_t)(0x12a2e734u));
  /* 12a11588 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12a1158d mov eax, dword ptr [0x12a2e698] */
  EAX = (r32((uint32_t)(0x12a2e698)));
  /* 12a11592 push eax */
  push32((uint32_t)(EAX));
  /* 12a11593 call dword ptr [0x12a3021c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a3021c))), 0x12a11599u);
  /* 12a11599 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a1159b je 0x12a115af */
  if (C.zf) goto L_12a115af;
  /* 12a1159d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a115a1 jne 0x12a115af */
  if (!C.zf) goto L_12a115af;
  /* 12a115a3 mov ecx, dword ptr [0x12a2de1c] */
  ECX = (r32((uint32_t)(0x12a2de1c)));
  /* 12a115a9 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 12a115ad jmp 0x12a115b8 */
  goto L_12a115b8;
L_12a115af:;
  /* 12a115af mov edx, dword ptr [0x12a2de1c] */
  EDX = (r32((uint32_t)(0x12a2de1c)));
  /* 12a115b5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12a115b8:;
  /* 12a115b8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12a115bb push eax */
  push32((uint32_t)(EAX));
  /* 12a115bc push 0 */
  push32((uint32_t)(0x0u));
  /* 12a115be push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12a115c0 mov ecx, dword ptr [0x12a2de20] */
  ECX = (r32((uint32_t)(0x12a2de20)));
  /* 12a115c6 push ecx */
  push32((uint32_t)(ECX));
  /* 12a115c7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12a115c9 push 0x12a2e788 */
  push32((uint32_t)(0x12a2e788u));
  /* 12a115ce push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12a115d3 mov edx, dword ptr [0x12a2e698] */
  EDX = (r32((uint32_t)(0x12a2e698)));
  /* 12a115d9 push edx */
  push32((uint32_t)(EDX));
  /* 12a115da call dword ptr [0x12a3021c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a3021c))), 0x12a115e0u);
  /* 12a115e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a115e2 je 0x12a115f5 */
  if (C.zf) goto L_12a115f5;
  /* 12a115e4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a115e8 jne 0x12a115f5 */
  if (!C.zf) goto L_12a115f5;
  /* 12a115ea mov eax, dword ptr [0x12a2de20] */
  EAX = (r32((uint32_t)(0x12a2de20)));
  /* 12a115ef mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 12a115f3 jmp 0x12a115fe */
  goto L_12a115fe;
L_12a115f5:;
  /* 12a115f5 mov ecx, dword ptr [0x12a2de20] */
  ECX = (r32((uint32_t)(0x12a2de20)));
  /* 12a115fb mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_12a115fe:;
  /* 12a115fe jmp 0x12a11827 */
  goto L_12a11827;
L_12a11603:;
  /* 12a11603 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a11606 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12a11609 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a1160b je 0x12a1162d */
  if (C.zf) goto L_12a1162d;
  /* 12a1160d cmp dword ptr [0x12a2e7dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e7dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a11614 je 0x12a1163c */
  if (C.zf) goto L_12a1163c;
  /* 12a11616 mov ecx, dword ptr [0x12a2e7dc] */
  ECX = (r32((uint32_t)(0x12a2e7dc)));
  /* 12a1161c push ecx */
  push32((uint32_t)(ECX));
  /* 12a1161d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a11620 push edx */
  push32((uint32_t)(EDX));
  /* 12a11621 call 0x12a0e5b0 */
  push32(0x12a11626u); f_12a0e5b0();
  /* 12a11626 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a11629 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a1162b jne 0x12a1163c */
  if (!C.zf) goto L_12a1163c;
L_12a1162d:;
  /* 12a1162d push 0xc */
  push32((uint32_t)(0xcu));
  /* 12a1162f call 0x12a063c0 */
  push32(0x12a11634u); f_12a063c0();
  /* 12a11634 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a11637 jmp 0x12a11827 */
  goto L_12a11827;
L_12a1163c:;
  /* 12a1163c push 2 */
  push32((uint32_t)(0x2u));
  /* 12a1163e mov eax, dword ptr [0x12a2e7dc] */
  EAX = (r32((uint32_t)(0x12a2e7dc)));
  /* 12a11643 push eax */
  push32((uint32_t)(EAX));
  /* 12a11644 call 0x12a033b0 */
  push32(0x12a11649u); f_12a033b0();
  /* 12a11649 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a1164c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 12a11651 push 0x12a2a830 */
  push32((uint32_t)(0x12a2a830u));
  /* 12a11656 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a11658 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a1165b push ecx */
  push32((uint32_t)(ECX));
  /* 12a1165c call 0x12a05750 */
  push32(0x12a11661u); f_12a05750();
  /* 12a11661 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a11664 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a11667 push eax */
  push32((uint32_t)(EAX));
  /* 12a11668 call 0x12a02920 */
  push32(0x12a1166du); f_12a02920();
  /* 12a1166d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a11670 mov dword ptr [0x12a2e7dc], eax */
  w32((uint32_t)(0x12a2e7dc), (EAX));
  /* 12a11675 cmp dword ptr [0x12a2e7dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e7dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a1167c jne 0x12a1168d */
  if (!C.zf) goto L_12a1168d;
  /* 12a1167e push 0xc */
  push32((uint32_t)(0xcu));
  /* 12a11680 call 0x12a063c0 */
  push32(0x12a11685u); f_12a063c0();
  /* 12a11685 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a11688 jmp 0x12a11827 */
  goto L_12a11827;
L_12a1168d:;
  /* 12a1168d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a11690 push edx */
  push32((uint32_t)(EDX));
  /* 12a11691 mov eax, dword ptr [0x12a2e7dc] */
  EAX = (r32((uint32_t)(0x12a2e7dc)));
  /* 12a11696 push eax */
  push32((uint32_t)(EAX));
  /* 12a11697 call 0x12a058d0 */
  push32(0x12a1169cu); f_12a058d0();
  /* 12a1169c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a1169f push 0xc */
  push32((uint32_t)(0xcu));
  /* 12a116a1 call 0x12a063c0 */
  push32(0x12a116a6u); f_12a063c0();
  /* 12a116a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a116a9 push 3 */
  push32((uint32_t)(0x3u));
  /* 12a116ab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a116ae push ecx */
  push32((uint32_t)(ECX));
  /* 12a116af mov edx, dword ptr [0x12a2de1c] */
  EDX = (r32((uint32_t)(0x12a2de1c)));
  /* 12a116b5 push edx */
  push32((uint32_t)(EDX));
  /* 12a116b6 call 0x12a06140 */
  push32(0x12a116bbu); f_12a06140();
  /* 12a116bb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a116be mov eax, dword ptr [0x12a2de1c] */
  EAX = (r32((uint32_t)(0x12a2de1c)));
  /* 12a116c3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 12a116c7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a116ca add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a116cd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a116d0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a116d3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12a116d6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a116d9 jne 0x12a116ed */
  if (!C.zf) goto L_12a116ed;
  /* 12a116db mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a116de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a116e1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12a116e4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a116e7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a116ea mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12a116ed:;
  /* 12a116ed mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a116f0 push eax */
  push32((uint32_t)(EAX));
  /* 12a116f1 call 0x12a111d0 */
  push32(0x12a116f6u); f_12a111d0();
  /* 12a116f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a116f9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a116ff mov dword ptr [0x12a2dd90], eax */
  w32((uint32_t)(0x12a2dd90), (EAX));
L_12a11704:;
  /* 12a11704 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a11707 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12a1170a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a1170d je 0x12a11725 */
  if (C.zf) goto L_12a11725;
  /* 12a1170f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a11712 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12a11715 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a11718 jl 0x12a11730 */
  if ((C.sf!=C.of)) goto L_12a11730;
  /* 12a1171a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a1171d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12a11720 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a11723 jg 0x12a11730 */
  if ((!C.zf&&C.sf==C.of)) goto L_12a11730;
L_12a11725:;
  /* 12a11725 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a11728 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a1172b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a1172e jmp 0x12a11704 */
  goto L_12a11704;
L_12a11730:;
  /* 12a11730 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a11733 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12a11736 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a11739 jne 0x12a117d5 */
  if (!C.zf) goto L_12a117d5;
  /* 12a1173f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a11742 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a11745 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a11748 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a1174b push edx */
  push32((uint32_t)(EDX));
  /* 12a1174c call 0x12a111d0 */
  push32(0x12a11751u); f_12a111d0();
  /* 12a11751 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a11754 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a11757 mov ecx, dword ptr [0x12a2dd90] */
  ECX = (r32((uint32_t)(0x12a2dd90)));
  /* 12a1175d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a1175f mov dword ptr [0x12a2dd90], ecx */
  w32((uint32_t)(0x12a2dd90), (ECX));
L_12a11765:;
  /* 12a11765 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a11768 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12a1176b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a1176e jl 0x12a11786 */
  if ((C.sf!=C.of)) goto L_12a11786;
  /* 12a11770 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a11773 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12a11776 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a11779 jg 0x12a11786 */
  if ((!C.zf&&C.sf==C.of)) goto L_12a11786;
  /* 12a1177b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a1177e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a11781 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12a11784 jmp 0x12a11765 */
  goto L_12a11765;
L_12a11786:;
  /* 12a11786 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a11789 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12a1178c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a1178f jne 0x12a117d5 */
  if (!C.zf) goto L_12a117d5;
  /* 12a11791 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a11794 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a11797 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12a1179a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a1179d push ecx */
  push32((uint32_t)(ECX));
  /* 12a1179e call 0x12a111d0 */
  push32(0x12a117a3u); f_12a111d0();
  /* 12a117a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a117a6 mov edx, dword ptr [0x12a2dd90] */
  EDX = (r32((uint32_t)(0x12a2dd90)));
  /* 12a117ac add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a117ae mov dword ptr [0x12a2dd90], edx */
  w32((uint32_t)(0x12a2dd90), (EDX));
L_12a117b4:;
  /* 12a117b4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a117b7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12a117ba cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a117bd jl 0x12a117d5 */
  if ((C.sf!=C.of)) goto L_12a117d5;
  /* 12a117bf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a117c2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12a117c5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a117c8 jg 0x12a117d5 */
  if ((!C.zf&&C.sf==C.of)) goto L_12a117d5;
  /* 12a117ca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a117cd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a117d0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a117d3 jmp 0x12a117b4 */
  goto L_12a117b4;
L_12a117d5:;
  /* 12a117d5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a117d9 je 0x12a117e9 */
  if (C.zf) goto L_12a117e9;
  /* 12a117db mov edx, dword ptr [0x12a2dd90] */
  EDX = (r32((uint32_t)(0x12a2dd90)));
  /* 12a117e1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12a117e3 mov dword ptr [0x12a2dd90], edx */
  w32((uint32_t)(0x12a2dd90), (EDX));
L_12a117e9:;
  /* 12a117e9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a117ec movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12a117ef mov dword ptr [0x12a2dd94], ecx */
  w32((uint32_t)(0x12a2dd94), (ECX));
  /* 12a117f5 cmp dword ptr [0x12a2dd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2dd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a117fc je 0x12a1181e */
  if (C.zf) goto L_12a1181e;
  /* 12a117fe push 3 */
  push32((uint32_t)(0x3u));
  /* 12a11800 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a11803 push edx */
  push32((uint32_t)(EDX));
  /* 12a11804 mov eax, dword ptr [0x12a2de20] */
  EAX = (r32((uint32_t)(0x12a2de20)));
  /* 12a11809 push eax */
  push32((uint32_t)(EAX));
  /* 12a1180a call 0x12a06140 */
  push32(0x12a1180fu); f_12a06140();
  /* 12a1180f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a11812 mov ecx, dword ptr [0x12a2de20] */
  ECX = (r32((uint32_t)(0x12a2de20)));
  /* 12a11818 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 12a1181c jmp 0x12a11827 */
  goto L_12a11827;
L_12a1181e:;
  /* 12a1181e mov edx, dword ptr [0x12a2de20] */
  EDX = (r32((uint32_t)(0x12a2de20)));
  /* 12a11824 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12a11827:;
  /* 12a11827 mov esp, ebp */
  ESP = (EBP);
  /* 12a11829 pop ebp */
  EBP = (pop32());
  /* 12a1182a ret  */
  ESPCHK(0x12a11480u, _esp0);
  ESP += 4; return;
}

/* FUN_10011830 @ 0x12a11830 (46 bytes, 18 insns) */
void f_12a11830(void) {
  FTRACE(0x12a11830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a11830 push ebp */
  push32((uint32_t)(EBP));
  /* 12a11831 mov ebp, esp */
  EBP = (ESP);
  /* 12a11833 push ecx */
  push32((uint32_t)(ECX));
  /* 12a11834 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12a11836 call 0x12a06320 */
  push32(0x12a1183bu); f_12a06320();
  /* 12a1183b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a1183e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a11841 push eax */
  push32((uint32_t)(EAX));
  /* 12a11842 call 0x12a11860 */
  push32(0x12a11847u); f_12a11860();
  /* 12a11847 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a1184a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a1184d push 0xb */
  push32((uint32_t)(0xbu));
  /* 12a1184f call 0x12a063c0 */
  push32(0x12a11854u); f_12a063c0();
  /* 12a11854 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a11857 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a1185a mov esp, ebp */
  ESP = (EBP);
  /* 12a1185c pop ebp */
  EBP = (pop32());
  /* 12a1185d ret  */
  ESPCHK(0x12a11830u, _esp0);
  ESP += 4; return;
}

/* FUN_10011860 @ 0x12a11860 (762 bytes, 246 insns) */
void f_12a11860(void) {
  FTRACE(0x12a11860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a11860 push ebp */
  push32((uint32_t)(EBP));
  /* 12a11861 mov ebp, esp */
  EBP = (ESP);
  /* 12a11863 push ecx */
  push32((uint32_t)(ECX));
  /* 12a11864 cmp dword ptr [0x12a2dd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2dd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a1186b jne 0x12a11874 */
  if (!C.zf) goto L_12a11874;
  /* 12a1186d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a1186f jmp 0x12a11b56 */
  goto L_12a11b56;
L_12a11874:;
  /* 12a11874 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a11877 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12a1187a cmp ecx, dword ptr [0x12a2de28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12a2de28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a11880 jne 0x12a11894 */
  if (!C.zf) goto L_12a11894;
  /* 12a11882 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a11885 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12a11888 cmp eax, dword ptr [0x12a2de38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12a2de38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a1188e je 0x12a11a5b */
  if (C.zf) goto L_12a11a5b;
L_12a11894:;
  /* 12a11894 cmp dword ptr [0x12a2e728], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e728))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a1189b je 0x12a11a15 */
  if (C.zf) goto L_12a11a15;
  /* 12a118a1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a118a3 mov cx, word ptr [0x12a2e7c8] */
  CX = (r16((uint32_t)(0x12a2e7c8)));
  /* 12a118aa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a118ac jne 0x12a11909 */
  if (!C.zf) goto L_12a11909;
  /* 12a118ae xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a118b0 mov dx, word ptr [0x12a2e7d6] */
  DX = (r16((uint32_t)(0x12a2e7d6)));
  /* 12a118b7 push edx */
  push32((uint32_t)(EDX));
  /* 12a118b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a118ba mov ax, word ptr [0x12a2e7d4] */
  AX = (r16((uint32_t)(0x12a2e7d4)));
  /* 12a118c0 push eax */
  push32((uint32_t)(EAX));
  /* 12a118c1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a118c3 mov cx, word ptr [0x12a2e7d2] */
  CX = (r16((uint32_t)(0x12a2e7d2)));
  /* 12a118ca push ecx */
  push32((uint32_t)(ECX));
  /* 12a118cb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a118cd mov dx, word ptr [0x12a2e7d0] */
  DX = (r16((uint32_t)(0x12a2e7d0)));
  /* 12a118d4 push edx */
  push32((uint32_t)(EDX));
  /* 12a118d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a118d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a118d9 mov ax, word ptr [0x12a2e7cc] */
  AX = (r16((uint32_t)(0x12a2e7cc)));
  /* 12a118df push eax */
  push32((uint32_t)(EAX));
  /* 12a118e0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a118e2 mov cx, word ptr [0x12a2e7ce] */
  CX = (r16((uint32_t)(0x12a2e7ce)));
  /* 12a118e9 push ecx */
  push32((uint32_t)(ECX));
  /* 12a118ea xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a118ec mov dx, word ptr [0x12a2e7ca] */
  DX = (r16((uint32_t)(0x12a2e7ca)));
  /* 12a118f3 push edx */
  push32((uint32_t)(EDX));
  /* 12a118f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a118f7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12a118fa push ecx */
  push32((uint32_t)(ECX));
  /* 12a118fb push 1 */
  push32((uint32_t)(0x1u));
  /* 12a118fd push 1 */
  push32((uint32_t)(0x1u));
  /* 12a118ff call 0x12a11b60 */
  push32(0x12a11904u); f_12a11b60();
  /* 12a11904 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a11907 jmp 0x12a1195a */
  goto L_12a1195a;
L_12a11909:;
  /* 12a11909 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a1190b mov dx, word ptr [0x12a2e7d6] */
  DX = (r16((uint32_t)(0x12a2e7d6)));
  /* 12a11912 push edx */
  push32((uint32_t)(EDX));
  /* 12a11913 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a11915 mov ax, word ptr [0x12a2e7d4] */
  AX = (r16((uint32_t)(0x12a2e7d4)));
  /* 12a1191b push eax */
  push32((uint32_t)(EAX));
  /* 12a1191c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a1191e mov cx, word ptr [0x12a2e7d2] */
  CX = (r16((uint32_t)(0x12a2e7d2)));
  /* 12a11925 push ecx */
  push32((uint32_t)(ECX));
  /* 12a11926 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a11928 mov dx, word ptr [0x12a2e7d0] */
  DX = (r16((uint32_t)(0x12a2e7d0)));
  /* 12a1192f push edx */
  push32((uint32_t)(EDX));
  /* 12a11930 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a11932 mov ax, word ptr [0x12a2e7ce] */
  AX = (r16((uint32_t)(0x12a2e7ce)));
  /* 12a11938 push eax */
  push32((uint32_t)(EAX));
  /* 12a11939 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a1193b push 0 */
  push32((uint32_t)(0x0u));
  /* 12a1193d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a1193f mov cx, word ptr [0x12a2e7ca] */
  CX = (r16((uint32_t)(0x12a2e7ca)));
  /* 12a11946 push ecx */
  push32((uint32_t)(ECX));
  /* 12a11947 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a1194a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12a1194d push eax */
  push32((uint32_t)(EAX));
  /* 12a1194e push 0 */
  push32((uint32_t)(0x0u));
  /* 12a11950 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a11952 call 0x12a11b60 */
  push32(0x12a11957u); f_12a11b60();
  /* 12a11957 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a1195a:;
  /* 12a1195a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a1195c mov cx, word ptr [0x12a2e774] */
  CX = (r16((uint32_t)(0x12a2e774)));
  /* 12a11963 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a11965 jne 0x12a119c2 */
  if (!C.zf) goto L_12a119c2;
  /* 12a11967 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a11969 mov dx, word ptr [0x12a2e782] */
  DX = (r16((uint32_t)(0x12a2e782)));
  /* 12a11970 push edx */
  push32((uint32_t)(EDX));
  /* 12a11971 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a11973 mov ax, word ptr [0x12a2e780] */
  AX = (r16((uint32_t)(0x12a2e780)));
  /* 12a11979 push eax */
  push32((uint32_t)(EAX));
  /* 12a1197a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a1197c mov cx, word ptr [0x12a2e77e] */
  CX = (r16((uint32_t)(0x12a2e77e)));
  /* 12a11983 push ecx */
  push32((uint32_t)(ECX));
  /* 12a11984 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a11986 mov dx, word ptr [0x12a2e77c] */
  DX = (r16((uint32_t)(0x12a2e77c)));
  /* 12a1198d push edx */
  push32((uint32_t)(EDX));
  /* 12a1198e push 0 */
  push32((uint32_t)(0x0u));
  /* 12a11990 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a11992 mov ax, word ptr [0x12a2e778] */
  AX = (r16((uint32_t)(0x12a2e778)));
  /* 12a11998 push eax */
  push32((uint32_t)(EAX));
  /* 12a11999 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a1199b mov cx, word ptr [0x12a2e77a] */
  CX = (r16((uint32_t)(0x12a2e77a)));
  /* 12a119a2 push ecx */
  push32((uint32_t)(ECX));
  /* 12a119a3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a119a5 mov dx, word ptr [0x12a2e776] */
  DX = (r16((uint32_t)(0x12a2e776)));
  /* 12a119ac push edx */
  push32((uint32_t)(EDX));
  /* 12a119ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a119b0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12a119b3 push ecx */
  push32((uint32_t)(ECX));
  /* 12a119b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a119b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a119b8 call 0x12a11b60 */
  push32(0x12a119bdu); f_12a11b60();
  /* 12a119bd add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a119c0 jmp 0x12a11a13 */
  goto L_12a11a13;
L_12a119c2:;
  /* 12a119c2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a119c4 mov dx, word ptr [0x12a2e782] */
  DX = (r16((uint32_t)(0x12a2e782)));
  /* 12a119cb push edx */
  push32((uint32_t)(EDX));
  /* 12a119cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a119ce mov ax, word ptr [0x12a2e780] */
  AX = (r16((uint32_t)(0x12a2e780)));
  /* 12a119d4 push eax */
  push32((uint32_t)(EAX));
  /* 12a119d5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a119d7 mov cx, word ptr [0x12a2e77e] */
  CX = (r16((uint32_t)(0x12a2e77e)));
  /* 12a119de push ecx */
  push32((uint32_t)(ECX));
  /* 12a119df xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a119e1 mov dx, word ptr [0x12a2e77c] */
  DX = (r16((uint32_t)(0x12a2e77c)));
  /* 12a119e8 push edx */
  push32((uint32_t)(EDX));
  /* 12a119e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a119eb mov ax, word ptr [0x12a2e77a] */
  AX = (r16((uint32_t)(0x12a2e77a)));
  /* 12a119f1 push eax */
  push32((uint32_t)(EAX));
  /* 12a119f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a119f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a119f6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a119f8 mov cx, word ptr [0x12a2e776] */
  CX = (r16((uint32_t)(0x12a2e776)));
  /* 12a119ff push ecx */
  push32((uint32_t)(ECX));
  /* 12a11a00 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a11a03 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12a11a06 push eax */
  push32((uint32_t)(EAX));
  /* 12a11a07 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a11a09 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a11a0b call 0x12a11b60 */
  push32(0x12a11a10u); f_12a11b60();
  /* 12a11a10 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a11a13:;
  /* 12a11a13 jmp 0x12a11a5b */
  goto L_12a11a5b;
L_12a11a15:;
  /* 12a11a15 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a11a17 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a11a19 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a11a1b push 2 */
  push32((uint32_t)(0x2u));
  /* 12a11a1d push 0 */
  push32((uint32_t)(0x0u));
  /* 12a11a1f push 0 */
  push32((uint32_t)(0x0u));
  /* 12a11a21 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a11a23 push 4 */
  push32((uint32_t)(0x4u));
  /* 12a11a25 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a11a28 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12a11a2b push edx */
  push32((uint32_t)(EDX));
  /* 12a11a2c push 1 */
  push32((uint32_t)(0x1u));
  /* 12a11a2e push 1 */
  push32((uint32_t)(0x1u));
  /* 12a11a30 call 0x12a11b60 */
  push32(0x12a11a35u); f_12a11b60();
  /* 12a11a35 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a11a38 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a11a3a push 0 */
  push32((uint32_t)(0x0u));
  /* 12a11a3c push 0 */
  push32((uint32_t)(0x0u));
  /* 12a11a3e push 2 */
  push32((uint32_t)(0x2u));
  /* 12a11a40 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a11a42 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a11a44 push 5 */
  push32((uint32_t)(0x5u));
  /* 12a11a46 push 0xa */
  push32((uint32_t)(0xau));
  /* 12a11a48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a11a4b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12a11a4e push ecx */
  push32((uint32_t)(ECX));
  /* 12a11a4f push 1 */
  push32((uint32_t)(0x1u));
  /* 12a11a51 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a11a53 call 0x12a11b60 */
  push32(0x12a11a58u); f_12a11b60();
  /* 12a11a58 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a11a5b:;
  /* 12a11a5b mov edx, dword ptr [0x12a2de2c] */
  EDX = (r32((uint32_t)(0x12a2de2c)));
  /* 12a11a61 cmp edx, dword ptr [0x12a2de3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12a2de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a11a67 jge 0x12a11ab4 */
  if ((C.sf==C.of)) goto L_12a11ab4;
  /* 12a11a69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a11a6c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12a11a6f cmp ecx, dword ptr [0x12a2de2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12a2de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a11a75 jl 0x12a11a85 */
  if ((C.sf!=C.of)) goto L_12a11a85;
  /* 12a11a77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a11a7a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12a11a7d cmp eax, dword ptr [0x12a2de3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12a2de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a11a83 jle 0x12a11a8c */
  if ((C.zf||C.sf!=C.of)) goto L_12a11a8c;
L_12a11a85:;
  /* 12a11a85 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a11a87 jmp 0x12a11b56 */
  goto L_12a11b56;
L_12a11a8c:;
  /* 12a11a8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a11a8f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12a11a92 cmp edx, dword ptr [0x12a2de2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12a2de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a11a98 jle 0x12a11ab2 */
  if ((C.zf||C.sf!=C.of)) goto L_12a11ab2;
  /* 12a11a9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a11a9d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12a11aa0 cmp ecx, dword ptr [0x12a2de3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12a2de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a11aa6 jge 0x12a11ab2 */
  if ((C.sf==C.of)) goto L_12a11ab2;
  /* 12a11aa8 mov eax, 1 */
  EAX = (0x1u);
  /* 12a11aad jmp 0x12a11b56 */
  goto L_12a11b56;
L_12a11ab2:;
  /* 12a11ab2 jmp 0x12a11af7 */
  goto L_12a11af7;
L_12a11ab4:;
  /* 12a11ab4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a11ab7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12a11aba cmp eax, dword ptr [0x12a2de3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12a2de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a11ac0 jl 0x12a11ad0 */
  if ((C.sf!=C.of)) goto L_12a11ad0;
  /* 12a11ac2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a11ac5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12a11ac8 cmp edx, dword ptr [0x12a2de2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12a2de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a11ace jle 0x12a11ad7 */
  if ((C.zf||C.sf!=C.of)) goto L_12a11ad7;
L_12a11ad0:;
  /* 12a11ad0 mov eax, 1 */
  EAX = (0x1u);
  /* 12a11ad5 jmp 0x12a11b56 */
  goto L_12a11b56;
L_12a11ad7:;
  /* 12a11ad7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a11ada mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12a11add cmp ecx, dword ptr [0x12a2de3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12a2de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a11ae3 jle 0x12a11af7 */
  if ((C.zf||C.sf!=C.of)) goto L_12a11af7;
  /* 12a11ae5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a11ae8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12a11aeb cmp eax, dword ptr [0x12a2de2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12a2de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a11af1 jge 0x12a11af7 */
  if ((C.sf==C.of)) goto L_12a11af7;
  /* 12a11af3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a11af5 jmp 0x12a11b56 */
  goto L_12a11b56;
L_12a11af7:;
  /* 12a11af7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a11afa mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12a11afd imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a11b00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a11b03 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12a11b05 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a11b07 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a11b0a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12a11b0d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a11b13 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a11b15 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a11b1b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12a11b1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a11b21 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12a11b24 cmp edx, dword ptr [0x12a2de2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12a2de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a11b2a jne 0x12a11b42 */
  if (!C.zf) goto L_12a11b42;
  /* 12a11b2c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a11b2f cmp eax, dword ptr [0x12a2de30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12a2de30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a11b35 jl 0x12a11b3e */
  if ((C.sf!=C.of)) goto L_12a11b3e;
  /* 12a11b37 mov eax, 1 */
  EAX = (0x1u);
  /* 12a11b3c jmp 0x12a11b56 */
  goto L_12a11b56;
L_12a11b3e:;
  /* 12a11b3e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a11b40 jmp 0x12a11b56 */
  goto L_12a11b56;
L_12a11b42:;
  /* 12a11b42 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a11b45 cmp ecx, dword ptr [0x12a2de40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12a2de40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a11b4b jge 0x12a11b54 */
  if ((C.sf==C.of)) goto L_12a11b54;
  /* 12a11b4d mov eax, 1 */
  EAX = (0x1u);
  /* 12a11b52 jmp 0x12a11b56 */
  goto L_12a11b56;
L_12a11b54:;
  /* 12a11b54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12a11b56:;
  /* 12a11b56 mov esp, ebp */
  ESP = (EBP);
  /* 12a11b58 pop ebp */
  EBP = (pop32());
  /* 12a11b59 ret  */
  ESPCHK(0x12a11860u, _esp0);
  ESP += 4; return;
}

/* FUN_10011b60 @ 0x12a11b60 (504 bytes, 145 insns) */
void f_12a11b60(void) {
  FTRACE(0x12a11b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a11b60 push ebp */
  push32((uint32_t)(EBP));
  /* 12a11b61 mov ebp, esp */
  EBP = (ESP);
  /* 12a11b63 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a11b66 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a11b6a jne 0x12a11c3c */
  if (!C.zf) goto L_12a11c3c;
  /* 12a11b70 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a11b73 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12a11b76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a11b78 jne 0x12a11b89 */
  if (!C.zf) goto L_12a11b89;
  /* 12a11b7a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a11b7d mov edx, dword ptr [ecx*4 + 0x12a2de4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12a2de4c)));
  /* 12a11b84 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12a11b87 jmp 0x12a11b96 */
  goto L_12a11b96;
L_12a11b89:;
  /* 12a11b89 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a11b8c mov ecx, dword ptr [eax*4 + 0x12a2de80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12a2de80)));
  /* 12a11b93 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12a11b96:;
  /* 12a11b96 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a11b99 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a11b9c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12a11b9f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a11ba2 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a11ba5 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a11bab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a11bae add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a11bb0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a11bb3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a11bb6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 12a11bb9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 12a11bbd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12a11bbe mov ecx, 7 */
  ECX = (0x7u);
  /* 12a11bc3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12a11bc5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12a11bc8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a11bcb cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a11bce jge 0x12a11be9 */
  if ((C.sf==C.of)) goto L_12a11be9;
  /* 12a11bd0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12a11bd3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a11bd6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a11bd9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a11bdc imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a11bdf add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a11be2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a11be4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12a11be7 jmp 0x12a11bfd */
  goto L_12a11bfd;
L_12a11be9:;
  /* 12a11be9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12a11bec sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a11bef mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a11bf2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a11bf5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a11bf8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a11bfa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12a11bfd:;
  /* 12a11bfd cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a11c01 jne 0x12a11c3a */
  if (!C.zf) goto L_12a11c3a;
  /* 12a11c03 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a11c06 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12a11c09 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a11c0b jne 0x12a11c1c */
  if (!C.zf) goto L_12a11c1c;
  /* 12a11c0d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a11c10 mov eax, dword ptr [edx*4 + 0x12a2de50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12a2de50)));
  /* 12a11c17 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12a11c1a jmp 0x12a11c29 */
  goto L_12a11c29;
L_12a11c1c:;
  /* 12a11c1c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a11c1f mov edx, dword ptr [ecx*4 + 0x12a2de84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12a2de84)));
  /* 12a11c26 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12a11c29:;
  /* 12a11c29 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a11c2c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a11c2f jle 0x12a11c3a */
  if ((C.zf||C.sf!=C.of)) goto L_12a11c3a;
  /* 12a11c31 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a11c34 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a11c37 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12a11c3a:;
  /* 12a11c3a jmp 0x12a11c71 */
  goto L_12a11c71;
L_12a11c3c:;
  /* 12a11c3c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a11c3f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12a11c42 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a11c44 jne 0x12a11c55 */
  if (!C.zf) goto L_12a11c55;
  /* 12a11c46 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a11c49 mov ecx, dword ptr [eax*4 + 0x12a2de4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12a2de4c)));
  /* 12a11c50 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12a11c53 jmp 0x12a11c62 */
  goto L_12a11c62;
L_12a11c55:;
  /* 12a11c55 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a11c58 mov eax, dword ptr [edx*4 + 0x12a2de80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12a2de80)));
  /* 12a11c5f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_12a11c62:;
  /* 12a11c62 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a11c65 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12a11c68 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a11c6b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a11c6e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12a11c71:;
  /* 12a11c71 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a11c75 jne 0x12a11cb1 */
  if (!C.zf) goto L_12a11cb1;
  /* 12a11c77 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a11c7a mov dword ptr [0x12a2de2c], eax */
  w32((uint32_t)(0x12a2de2c), (EAX));
  /* 12a11c7f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12a11c82 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a11c85 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12a11c88 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a11c8a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a11c8d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 12a11c90 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a11c92 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a11c98 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 12a11c9b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a11c9d mov dword ptr [0x12a2de30], ecx */
  w32((uint32_t)(0x12a2de30), (ECX));
  /* 12a11ca3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a11ca6 mov dword ptr [0x12a2de28], edx */
  w32((uint32_t)(0x12a2de28), (EDX));
  /* 12a11cac jmp 0x12a11d54 */
  goto L_12a11d54;
L_12a11cb1:;
  /* 12a11cb1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a11cb4 mov dword ptr [0x12a2de3c], eax */
  w32((uint32_t)(0x12a2de3c), (EAX));
  /* 12a11cb9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12a11cbc imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a11cbf mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12a11cc2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a11cc4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a11cc7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 12a11cca add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a11ccc imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a11cd2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 12a11cd5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a11cd7 mov dword ptr [0x12a2de40], ecx */
  w32((uint32_t)(0x12a2de40), (ECX));
  /* 12a11cdd mov edx, dword ptr [0x12a2dd98] */
  EDX = (r32((uint32_t)(0x12a2dd98)));
  /* 12a11ce3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a11ce9 mov eax, dword ptr [0x12a2de40] */
  EAX = (r32((uint32_t)(0x12a2de40)));
  /* 12a11cee add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a11cf0 mov dword ptr [0x12a2de40], eax */
  w32((uint32_t)(0x12a2de40), (EAX));
  /* 12a11cf5 cmp dword ptr [0x12a2de40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2de40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a11cfc jge 0x12a11d21 */
  if ((C.sf==C.of)) goto L_12a11d21;
  /* 12a11cfe mov ecx, dword ptr [0x12a2de40] */
  ECX = (r32((uint32_t)(0x12a2de40)));
  /* 12a11d04 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a11d0a mov dword ptr [0x12a2de40], ecx */
  w32((uint32_t)(0x12a2de40), (ECX));
  /* 12a11d10 mov edx, dword ptr [0x12a2de3c] */
  EDX = (r32((uint32_t)(0x12a2de3c)));
  /* 12a11d16 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a11d19 mov dword ptr [0x12a2de3c], edx */
  w32((uint32_t)(0x12a2de3c), (EDX));
  /* 12a11d1f jmp 0x12a11d4b */
  goto L_12a11d4b;
L_12a11d21:;
  /* 12a11d21 cmp dword ptr [0x12a2de40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x12a2de40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a11d2b jl 0x12a11d4b */
  if ((C.sf!=C.of)) goto L_12a11d4b;
  /* 12a11d2d mov eax, dword ptr [0x12a2de40] */
  EAX = (r32((uint32_t)(0x12a2de40)));
  /* 12a11d32 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a11d37 mov dword ptr [0x12a2de40], eax */
  w32((uint32_t)(0x12a2de40), (EAX));
  /* 12a11d3c mov ecx, dword ptr [0x12a2de3c] */
  ECX = (r32((uint32_t)(0x12a2de3c)));
  /* 12a11d42 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a11d45 mov dword ptr [0x12a2de3c], ecx */
  w32((uint32_t)(0x12a2de3c), (ECX));
L_12a11d4b:;
  /* 12a11d4b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a11d4e mov dword ptr [0x12a2de38], edx */
  w32((uint32_t)(0x12a2de38), (EDX));
L_12a11d54:;
  /* 12a11d54 mov esp, ebp */
  ESP = (EBP);
  /* 12a11d56 pop ebp */
  EBP = (pop32());
  /* 12a11d57 ret  */
  ESPCHK(0x12a11b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10011d60 @ 0x12a11d60 (382 bytes, 135 insns) */
void f_12a11d60(void) {
  FTRACE(0x12a11d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a11d60 push ebp */
  push32((uint32_t)(EBP));
  /* 12a11d61 mov ebp, esp */
  EBP = (ESP);
  /* 12a11d63 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12a11d65 push 0x12a2a840 */
  push32((uint32_t)(0x12a2a840u));
  /* 12a11d6a push 0x12a0ba28 */
  push32((uint32_t)(0x12a0ba28u));
  /* 12a11d6f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12a11d75 push eax */
  push32((uint32_t)(EAX));
  /* 12a11d76 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12a11d7d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a11d80 push ebx */
  push32((uint32_t)(EBX));
  /* 12a11d81 push esi */
  push32((uint32_t)(ESI));
  /* 12a11d82 push edi */
  push32((uint32_t)(EDI));
  /* 12a11d83 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12a11d86 cmp dword ptr [0x12a2e7e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e7e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a11d8d jne 0x12a11dd2 */
  if (!C.zf) goto L_12a11dd2;
  /* 12a11d8f push 0 */
  push32((uint32_t)(0x0u));
  /* 12a11d91 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a11d93 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a11d95 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a11d97 call dword ptr [0x12a30230] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30230))), 0x12a11d9du);
  /* 12a11d9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a11d9f je 0x12a11dad */
  if (C.zf) goto L_12a11dad;
  /* 12a11da1 mov dword ptr [0x12a2e7e4], 1 */
  w32((uint32_t)(0x12a2e7e4), (0x1u));
  /* 12a11dab jmp 0x12a11dd2 */
  goto L_12a11dd2;
L_12a11dad:;
  /* 12a11dad push 0 */
  push32((uint32_t)(0x0u));
  /* 12a11daf push 0 */
  push32((uint32_t)(0x0u));
  /* 12a11db1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a11db3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a11db5 call dword ptr [0x12a30338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30338))), 0x12a11dbbu);
  /* 12a11dbb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a11dbd je 0x12a11dcb */
  if (C.zf) goto L_12a11dcb;
  /* 12a11dbf mov dword ptr [0x12a2e7e4], 2 */
  w32((uint32_t)(0x12a2e7e4), (0x2u));
  /* 12a11dc9 jmp 0x12a11dd2 */
  goto L_12a11dd2;
L_12a11dcb:;
  /* 12a11dcb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a11dcd jmp 0x12a11ee1 */
  goto L_12a11ee1;
L_12a11dd2:;
  /* 12a11dd2 cmp dword ptr [0x12a2e7e4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e7e4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a11dd9 jne 0x12a11df6 */
  if (!C.zf) goto L_12a11df6;
  /* 12a11ddb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a11dde push eax */
  push32((uint32_t)(EAX));
  /* 12a11ddf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a11de2 push ecx */
  push32((uint32_t)(ECX));
  /* 12a11de3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a11de6 push edx */
  push32((uint32_t)(EDX));
  /* 12a11de7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a11dea push eax */
  push32((uint32_t)(EAX));
  /* 12a11deb call dword ptr [0x12a30230] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30230))), 0x12a11df1u);
  /* 12a11df1 jmp 0x12a11ee1 */
  goto L_12a11ee1;
L_12a11df6:;
  /* 12a11df6 cmp dword ptr [0x12a2e7e4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e7e4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a11dfd jne 0x12a11edf */
  if (!C.zf) goto L_12a11edf;
  /* 12a11e03 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a11e07 jne 0x12a11e12 */
  if (!C.zf) goto L_12a11e12;
  /* 12a11e09 mov ecx, dword ptr [0x12a2e698] */
  ECX = (r32((uint32_t)(0x12a2e698)));
  /* 12a11e0f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12a11e12:;
  /* 12a11e12 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a11e14 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a11e16 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a11e19 push edx */
  push32((uint32_t)(EDX));
  /* 12a11e1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a11e1d push eax */
  push32((uint32_t)(EAX));
  /* 12a11e1e call dword ptr [0x12a30338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30338))), 0x12a11e24u);
  /* 12a11e24 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12a11e27 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a11e2b jne 0x12a11e34 */
  if (!C.zf) goto L_12a11e34;
  /* 12a11e2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a11e2f jmp 0x12a11ee1 */
  goto L_12a11ee1;
L_12a11e34:;
  /* 12a11e34 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12a11e3b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12a11e3e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a11e41 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12a11e43 call 0x12a05ac0 */
  push32(0x12a11e48u); f_12a05ac0();
  /* 12a11e48 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 12a11e4b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12a11e4e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12a11e51 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12a11e54 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12a11e5b jmp 0x12a11e74 */
  goto L_12a11e74;
  /* 12a11e5d mov eax, 1 */
  EAX = (0x1u);
  /* 12a11e62 ret  */
  ESPCHK(0x12a11d60u, _esp0);
  ESP += 4; return;
  /* 12a11e63 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12a11e66 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12a11e6d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12a11e74:;
  /* 12a11e74 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a11e78 jne 0x12a11e7e */
  if (!C.zf) goto L_12a11e7e;
  /* 12a11e7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a11e7c jmp 0x12a11ee1 */
  goto L_12a11ee1;
L_12a11e7e:;
  /* 12a11e7e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12a11e81 push edx */
  push32((uint32_t)(EDX));
  /* 12a11e82 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a11e85 push eax */
  push32((uint32_t)(EAX));
  /* 12a11e86 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a11e89 push ecx */
  push32((uint32_t)(ECX));
  /* 12a11e8a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a11e8d push edx */
  push32((uint32_t)(EDX));
  /* 12a11e8e call dword ptr [0x12a30338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30338))), 0x12a11e94u);
  /* 12a11e94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a11e96 jne 0x12a11e9c */
  if (!C.zf) goto L_12a11e9c;
  /* 12a11e98 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a11e9a jmp 0x12a11ee1 */
  goto L_12a11ee1;
L_12a11e9c:;
  /* 12a11e9c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a11ea0 jne 0x12a11ebd */
  if (!C.zf) goto L_12a11ebd;
  /* 12a11ea2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a11ea4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a11ea6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12a11ea8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a11eab push eax */
  push32((uint32_t)(EAX));
  /* 12a11eac push 1 */
  push32((uint32_t)(0x1u));
  /* 12a11eae mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a11eb1 push ecx */
  push32((uint32_t)(ECX));
  /* 12a11eb2 call dword ptr [0x12a3030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a3030c))), 0x12a11eb8u);
  /* 12a11eb8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12a11ebb jmp 0x12a11eda */
  goto L_12a11eda;
L_12a11ebd:;
  /* 12a11ebd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a11ec0 push edx */
  push32((uint32_t)(EDX));
  /* 12a11ec1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a11ec4 push eax */
  push32((uint32_t)(EAX));
  /* 12a11ec5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12a11ec7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a11eca push ecx */
  push32((uint32_t)(ECX));
  /* 12a11ecb push 1 */
  push32((uint32_t)(0x1u));
  /* 12a11ecd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a11ed0 push edx */
  push32((uint32_t)(EDX));
  /* 12a11ed1 call dword ptr [0x12a3030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a3030c))), 0x12a11ed7u);
  /* 12a11ed7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12a11eda:;
  /* 12a11eda mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a11edd jmp 0x12a11ee1 */
  goto L_12a11ee1;
L_12a11edf:;
  /* 12a11edf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12a11ee1:;
  /* 12a11ee1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12a11ee4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a11ee7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12a11eee pop edi */
  EDI = (pop32());
  /* 12a11eef pop esi */
  ESI = (pop32());
  /* 12a11ef0 pop ebx */
  EBX = (pop32());
  /* 12a11ef1 mov esp, ebp */
  ESP = (EBP);
  /* 12a11ef3 pop ebp */
  EBP = (pop32());
  /* 12a11ef4 ret  */
  ESPCHK(0x12a11d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f00 @ 0x12a11f00 (398 bytes, 140 insns) */
void f_12a11f00(void) {
  FTRACE(0x12a11f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a11f00 push ebp */
  push32((uint32_t)(EBP));
  /* 12a11f01 mov ebp, esp */
  EBP = (ESP);
  /* 12a11f03 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12a11f05 push 0x12a2a850 */
  push32((uint32_t)(0x12a2a850u));
  /* 12a11f0a push 0x12a0ba28 */
  push32((uint32_t)(0x12a0ba28u));
  /* 12a11f0f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12a11f15 push eax */
  push32((uint32_t)(EAX));
  /* 12a11f16 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12a11f1d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a11f20 push ebx */
  push32((uint32_t)(EBX));
  /* 12a11f21 push esi */
  push32((uint32_t)(ESI));
  /* 12a11f22 push edi */
  push32((uint32_t)(EDI));
  /* 12a11f23 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12a11f26 cmp dword ptr [0x12a2e7e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e7e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a11f2d jne 0x12a11f72 */
  if (!C.zf) goto L_12a11f72;
  /* 12a11f2f push 0 */
  push32((uint32_t)(0x0u));
  /* 12a11f31 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a11f33 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a11f35 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a11f37 call dword ptr [0x12a30230] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30230))), 0x12a11f3du);
  /* 12a11f3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a11f3f je 0x12a11f4d */
  if (C.zf) goto L_12a11f4d;
  /* 12a11f41 mov dword ptr [0x12a2e7e8], 1 */
  w32((uint32_t)(0x12a2e7e8), (0x1u));
  /* 12a11f4b jmp 0x12a11f72 */
  goto L_12a11f72;
L_12a11f4d:;
  /* 12a11f4d push 0 */
  push32((uint32_t)(0x0u));
  /* 12a11f4f push 0 */
  push32((uint32_t)(0x0u));
  /* 12a11f51 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a11f53 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a11f55 call dword ptr [0x12a30338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30338))), 0x12a11f5bu);
  /* 12a11f5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a11f5d je 0x12a11f6b */
  if (C.zf) goto L_12a11f6b;
  /* 12a11f5f mov dword ptr [0x12a2e7e8], 2 */
  w32((uint32_t)(0x12a2e7e8), (0x2u));
  /* 12a11f69 jmp 0x12a11f72 */
  goto L_12a11f72;
L_12a11f6b:;
  /* 12a11f6b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a11f6d jmp 0x12a12091 */
  goto L_12a12091;
L_12a11f72:;
  /* 12a11f72 cmp dword ptr [0x12a2e7e8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e7e8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a11f79 jne 0x12a11f96 */
  if (!C.zf) goto L_12a11f96;
  /* 12a11f7b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a11f7e push eax */
  push32((uint32_t)(EAX));
  /* 12a11f7f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a11f82 push ecx */
  push32((uint32_t)(ECX));
  /* 12a11f83 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a11f86 push edx */
  push32((uint32_t)(EDX));
  /* 12a11f87 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a11f8a push eax */
  push32((uint32_t)(EAX));
  /* 12a11f8b call dword ptr [0x12a30338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30338))), 0x12a11f91u);
  /* 12a11f91 jmp 0x12a12091 */
  goto L_12a12091;
L_12a11f96:;
  /* 12a11f96 cmp dword ptr [0x12a2e7e8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e7e8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a11f9d jne 0x12a1208f */
  if (!C.zf) goto L_12a1208f;
  /* 12a11fa3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a11fa7 jne 0x12a11fb2 */
  if (!C.zf) goto L_12a11fb2;
  /* 12a11fa9 mov ecx, dword ptr [0x12a2e698] */
  ECX = (r32((uint32_t)(0x12a2e698)));
  /* 12a11faf mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12a11fb2:;
  /* 12a11fb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a11fb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a11fb6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a11fb9 push edx */
  push32((uint32_t)(EDX));
  /* 12a11fba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a11fbd push eax */
  push32((uint32_t)(EAX));
  /* 12a11fbe call dword ptr [0x12a30230] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30230))), 0x12a11fc4u);
  /* 12a11fc4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12a11fc7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a11fcb jne 0x12a11fd4 */
  if (!C.zf) goto L_12a11fd4;
  /* 12a11fcd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a11fcf jmp 0x12a12091 */
  goto L_12a12091;
L_12a11fd4:;
  /* 12a11fd4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12a11fdb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12a11fde shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12a11fe0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a11fe3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12a11fe5 call 0x12a05ac0 */
  push32(0x12a11feau); f_12a05ac0();
  /* 12a11fea mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 12a11fed mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12a11ff0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12a11ff3 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12a11ff6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12a11ffd jmp 0x12a12016 */
  goto L_12a12016;
  /* 12a11fff mov eax, 1 */
  EAX = (0x1u);
  /* 12a12004 ret  */
  ESPCHK(0x12a11f00u, _esp0);
  ESP += 4; return;
  /* 12a12005 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12a12008 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12a1200f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12a12016:;
  /* 12a12016 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a1201a jne 0x12a12020 */
  if (!C.zf) goto L_12a12020;
  /* 12a1201c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a1201e jmp 0x12a12091 */
  goto L_12a12091;
L_12a12020:;
  /* 12a12020 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12a12023 push edx */
  push32((uint32_t)(EDX));
  /* 12a12024 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a12027 push eax */
  push32((uint32_t)(EAX));
  /* 12a12028 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a1202b push ecx */
  push32((uint32_t)(ECX));
  /* 12a1202c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a1202f push edx */
  push32((uint32_t)(EDX));
  /* 12a12030 call dword ptr [0x12a30230] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30230))), 0x12a12036u);
  /* 12a12036 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a12038 jne 0x12a1203e */
  if (!C.zf) goto L_12a1203e;
  /* 12a1203a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a1203c jmp 0x12a12091 */
  goto L_12a12091;
L_12a1203e:;
  /* 12a1203e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a12042 jne 0x12a12066 */
  if (!C.zf) goto L_12a12066;
  /* 12a12044 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a12046 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a12048 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a1204a push 0 */
  push32((uint32_t)(0x0u));
  /* 12a1204c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12a1204e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a12051 push eax */
  push32((uint32_t)(EAX));
  /* 12a12052 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12a12057 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a1205a push ecx */
  push32((uint32_t)(ECX));
  /* 12a1205b call dword ptr [0x12a3021c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a3021c))), 0x12a12061u);
  /* 12a12061 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12a12064 jmp 0x12a1208a */
  goto L_12a1208a;
L_12a12066:;
  /* 12a12066 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a12068 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a1206a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a1206d push edx */
  push32((uint32_t)(EDX));
  /* 12a1206e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a12071 push eax */
  push32((uint32_t)(EAX));
  /* 12a12072 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12a12074 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a12077 push ecx */
  push32((uint32_t)(ECX));
  /* 12a12078 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12a1207d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a12080 push edx */
  push32((uint32_t)(EDX));
  /* 12a12081 call dword ptr [0x12a3021c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a3021c))), 0x12a12087u);
  /* 12a12087 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12a1208a:;
  /* 12a1208a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a1208d jmp 0x12a12091 */
  goto L_12a12091;
L_12a1208f:;
  /* 12a1208f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12a12091:;
  /* 12a12091 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12a12094 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a12097 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12a1209e pop edi */
  EDI = (pop32());
  /* 12a1209f pop esi */
  ESI = (pop32());
  /* 12a120a0 pop ebx */
  EBX = (pop32());
  /* 12a120a1 mov esp, ebp */
  ESP = (EBP);
  /* 12a120a3 pop ebp */
  EBP = (pop32());
  /* 12a120a4 ret  */
  ESPCHK(0x12a11f00u, _esp0);
  ESP += 4; return;
}

/* FUN_100120b0 @ 0x12a120b0 (11 bytes, 6 insns) */
void f_12a120b0(void) {
  FTRACE(0x12a120b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a120b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a120b1 mov ebp, esp */
  EBP = (ESP);
  /* 12a120b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a120b6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a120b9 pop ebp */
  EBP = (pop32());
  /* 12a120ba ret  */
  ESPCHK(0x12a120b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100120c0 @ 0x12a120c0 (147 bytes, 43 insns) */
void f_12a120c0(void) {
  FTRACE(0x12a120c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a120c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a120c1 mov ebp, esp */
  EBP = (ESP);
  /* 12a120c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12a120c4 cmp dword ptr [0x12a2e688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a120cb jne 0x12a120e7 */
  if (!C.zf) goto L_12a120e7;
  /* 12a120cd cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a120d1 jl 0x12a120e2 */
  if ((C.sf!=C.of)) goto L_12a120e2;
  /* 12a120d3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a120d7 jg 0x12a120e2 */
  if ((!C.zf&&C.sf==C.of)) goto L_12a120e2;
  /* 12a120d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a120dc add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a120df mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12a120e2:;
  /* 12a120e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a120e5 jmp 0x12a1214f */
  goto L_12a1214f;
L_12a120e7:;
  /* 12a120e7 push 0x12a2e814 */
  push32((uint32_t)(0x12a2e814u));
  /* 12a120ec call dword ptr [0x12a30268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30268))), 0x12a120f2u);
  /* 12a120f2 cmp dword ptr [0x12a2e804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a120f9 je 0x12a12119 */
  if (C.zf) goto L_12a12119;
  /* 12a120fb push 0x12a2e814 */
  push32((uint32_t)(0x12a2e814u));
  /* 12a12100 call dword ptr [0x12a30258] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30258))), 0x12a12106u);
  /* 12a12106 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12a12108 call 0x12a06320 */
  push32(0x12a1210du); f_12a06320();
  /* 12a1210d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a12110 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12a12117 jmp 0x12a12120 */
  goto L_12a12120;
L_12a12119:;
  /* 12a12119 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12a12120:;
  /* 12a12120 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a12123 push ecx */
  push32((uint32_t)(ECX));
  /* 12a12124 call 0x12a12160 */
  push32(0x12a12129u); f_12a12160();
  /* 12a12129 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a1212c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12a1212f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a12133 je 0x12a12141 */
  if (C.zf) goto L_12a12141;
  /* 12a12135 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12a12137 call 0x12a063c0 */
  push32(0x12a1213cu); f_12a063c0();
  /* 12a1213c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a1213f jmp 0x12a1214c */
  goto L_12a1214c;
L_12a12141:;
  /* 12a12141 push 0x12a2e814 */
  push32((uint32_t)(0x12a2e814u));
  /* 12a12146 call dword ptr [0x12a30258] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30258))), 0x12a1214cu);
L_12a1214c:;
  /* 12a1214c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_12a1214f:;
  /* 12a1214f mov esp, ebp */
  ESP = (EBP);
  /* 12a12151 pop ebp */
  EBP = (pop32());
  /* 12a12152 ret  */
  ESPCHK(0x12a120c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012160 @ 0x12a12160 (299 bytes, 91 insns) */
void f_12a12160(void) {
  FTRACE(0x12a12160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a12160 push ebp */
  push32((uint32_t)(EBP));
  /* 12a12161 mov ebp, esp */
  EBP = (ESP);
  /* 12a12163 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a12166 cmp dword ptr [0x12a2e688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a1216d jne 0x12a1218c */
  if (!C.zf) goto L_12a1218c;
  /* 12a1216f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a12173 jl 0x12a12184 */
  if ((C.sf!=C.of)) goto L_12a12184;
  /* 12a12175 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a12179 jg 0x12a12184 */
  if ((!C.zf&&C.sf==C.of)) goto L_12a12184;
  /* 12a1217b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a1217e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a12181 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12a12184:;
  /* 12a12184 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a12187 jmp 0x12a12287 */
  goto L_12a12287;
L_12a1218c:;
  /* 12a1218c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a12193 jge 0x12a121d3 */
  if ((C.sf==C.of)) goto L_12a121d3;
  /* 12a12195 cmp dword ptr [0x12a2cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12a2cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a1219c jle 0x12a121b1 */
  if ((C.zf||C.sf!=C.of)) goto L_12a121b1;
  /* 12a1219e push 1 */
  push32((uint32_t)(0x1u));
  /* 12a121a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a121a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12a121a4 call 0x12a08930 */
  push32(0x12a121a9u); f_12a08930();
  /* 12a121a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a121ac mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12a121af jmp 0x12a121c5 */
  goto L_12a121c5;
L_12a121b1:;
  /* 12a121b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a121b4 mov eax, dword ptr [0x12a2cc98] */
  EAX = (r32((uint32_t)(0x12a2cc98)));
  /* 12a121b9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a121bb mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12a121bf and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12a121c2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12a121c5:;
  /* 12a121c5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a121c9 jne 0x12a121d3 */
  if (!C.zf) goto L_12a121d3;
  /* 12a121cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a121ce jmp 0x12a12287 */
  goto L_12a12287;
L_12a121d3:;
  /* 12a121d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a121d6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12a121d9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12a121df and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12a121e5 mov eax, dword ptr [0x12a2cc98] */
  EAX = (r32((uint32_t)(0x12a2cc98)));
  /* 12a121ea xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a121ec mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12a121f0 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12a121f6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a121f8 je 0x12a1221c */
  if (C.zf) goto L_12a1221c;
  /* 12a121fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a121fd sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12a12200 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12a12206 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 12a12209 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12a1220c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 12a1220f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 12a12213 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12a1221a jmp 0x12a1222d */
  goto L_12a1222d;
L_12a1221c:;
  /* 12a1221c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 12a1221f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12a12222 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 12a12226 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_12a1222d:;
  /* 12a1222d push 1 */
  push32((uint32_t)(0x1u));
  /* 12a1222f push 0 */
  push32((uint32_t)(0x0u));
  /* 12a12231 push 3 */
  push32((uint32_t)(0x3u));
  /* 12a12233 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 12a12236 push edx */
  push32((uint32_t)(EDX));
  /* 12a12237 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a1223a push eax */
  push32((uint32_t)(EAX));
  /* 12a1223b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12a1223e push ecx */
  push32((uint32_t)(ECX));
  /* 12a1223f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12a12244 mov edx, dword ptr [0x12a2e688] */
  EDX = (r32((uint32_t)(0x12a2e688)));
  /* 12a1224a push edx */
  push32((uint32_t)(EDX));
  /* 12a1224b call 0x12a0ad10 */
  push32(0x12a12250u); f_12a0ad10();
  /* 12a12250 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a12253 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a12256 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a1225a jne 0x12a12261 */
  if (!C.zf) goto L_12a12261;
  /* 12a1225c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a1225f jmp 0x12a12287 */
  goto L_12a12287;
L_12a12261:;
  /* 12a12261 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a12265 jne 0x12a12271 */
  if (!C.zf) goto L_12a12271;
  /* 12a12267 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a1226a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a1226f jmp 0x12a12287 */
  goto L_12a12287;
L_12a12271:;
  /* 12a12271 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a12274 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a12279 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 12a1227c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12a12282 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12a12285 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_12a12287:;
  /* 12a12287 mov esp, ebp */
  ESP = (EBP);
  /* 12a12289 pop ebp */
  EBP = (pop32());
  /* 12a1228a ret  */
  ESPCHK(0x12a12160u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x12a12290 (52 bytes, 19 insns) */
void f_12a12290(void) {
  FTRACE(0x12a12290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a12290 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12a12294 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 12a12298 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a1229a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12a1229e jne 0x12a122a9 */
  if (!C.zf) goto L_12a122a9;
  /* 12a122a0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12a122a4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12a122a6 ret 0x10 */
  ESPCHK(0x12a12290u, _esp0);
  ESP += 20; return;
L_12a122a9:;
  /* 12a122a9 push ebx */
  push32((uint32_t)(EBX));
  /* 12a122aa mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12a122ac mov ebx, eax */
  EBX = (EAX);
  /* 12a122ae mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12a122b2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12a122b6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a122b8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12a122bc mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12a122be add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a122c0 pop ebx */
  EBX = (pop32());
  /* 12a122c1 ret 0x10 */
  ESPCHK(0x12a12290u, _esp0);
  ESP += 20; return;
}

/* FUN_100122d0 @ 0x12a122d0 (46 bytes, 18 insns) */
void f_12a122d0(void) {
  FTRACE(0x12a122d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a122d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a122d1 mov ebp, esp */
  EBP = (ESP);
  /* 12a122d3 push ecx */
  push32((uint32_t)(ECX));
  /* 12a122d4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 12a122d6 call 0x12a06320 */
  push32(0x12a122dbu); f_12a06320();
  /* 12a122db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a122de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a122e1 push eax */
  push32((uint32_t)(EAX));
  /* 12a122e2 call 0x12a12300 */
  push32(0x12a122e7u); f_12a12300();
  /* 12a122e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a122ea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a122ed push 0xc */
  push32((uint32_t)(0xcu));
  /* 12a122ef call 0x12a063c0 */
  push32(0x12a122f4u); f_12a063c0();
  /* 12a122f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a122f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a122fa mov esp, ebp */
  ESP = (EBP);
  /* 12a122fc pop ebp */
  EBP = (pop32());
  /* 12a122fd ret  */
  ESPCHK(0x12a122d0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x12a12300 (198 bytes, 69 insns) */
void f_12a12300(void) {
  FTRACE(0x12a12300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a12300 push ebp */
  push32((uint32_t)(EBP));
  /* 12a12301 mov ebp, esp */
  EBP = (ESP);
  /* 12a12303 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a12306 mov eax, dword ptr [0x12a2e4a4] */
  EAX = (r32((uint32_t)(0x12a2e4a4)));
  /* 12a1230b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12a1230e cmp dword ptr [0x12a2ffa0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2ffa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a12315 jne 0x12a1231e */
  if (!C.zf) goto L_12a1231e;
  /* 12a12317 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a12319 jmp 0x12a123c2 */
  goto L_12a123c2;
L_12a1231e:;
  /* 12a1231e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a12322 jne 0x12a12346 */
  if (!C.zf) goto L_12a12346;
  /* 12a12324 cmp dword ptr [0x12a2e4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a1232b je 0x12a12346 */
  if (C.zf) goto L_12a12346;
  /* 12a1232d call 0x12a12420 */
  push32(0x12a12332u); f_12a12420();
  /* 12a12332 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a12334 je 0x12a1233d */
  if (C.zf) goto L_12a1233d;
  /* 12a12336 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a12338 jmp 0x12a123c2 */
  goto L_12a123c2;
L_12a1233d:;
  /* 12a1233d mov ecx, dword ptr [0x12a2e4a4] */
  ECX = (r32((uint32_t)(0x12a2e4a4)));
  /* 12a12343 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12a12346:;
  /* 12a12346 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a1234a je 0x12a123c0 */
  if (C.zf) goto L_12a123c0;
  /* 12a1234c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a12350 je 0x12a123c0 */
  if (C.zf) goto L_12a123c0;
  /* 12a12352 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a12355 push edx */
  push32((uint32_t)(EDX));
  /* 12a12356 call 0x12a05750 */
  push32(0x12a1235bu); f_12a05750();
  /* 12a1235b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a1235e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12a12361:;
  /* 12a12361 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a12364 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a12367 je 0x12a123c0 */
  if (C.zf) goto L_12a123c0;
  /* 12a12369 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a1236c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12a1236e push edx */
  push32((uint32_t)(EDX));
  /* 12a1236f call 0x12a05750 */
  push32(0x12a12374u); f_12a05750();
  /* 12a12374 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a12377 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a1237a jbe 0x12a123b5 */
  if ((C.cf||C.zf)) goto L_12a123b5;
  /* 12a1237c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a1237f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12a12381 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a12384 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 12a12388 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a1238b jne 0x12a123b5 */
  if (!C.zf) goto L_12a123b5;
  /* 12a1238d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a12390 push ecx */
  push32((uint32_t)(ECX));
  /* 12a12391 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a12394 push edx */
  push32((uint32_t)(EDX));
  /* 12a12395 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a12398 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12a1239a push ecx */
  push32((uint32_t)(ECX));
  /* 12a1239b call 0x12a123d0 */
  push32(0x12a123a0u); f_12a123d0();
  /* 12a123a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a123a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a123a5 jne 0x12a123b5 */
  if (!C.zf) goto L_12a123b5;
  /* 12a123a7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a123aa mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12a123ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a123af lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 12a123b3 jmp 0x12a123c2 */
  goto L_12a123c2;
L_12a123b5:;
  /* 12a123b5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a123b8 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a123bb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12a123be jmp 0x12a12361 */
  goto L_12a12361;
L_12a123c0:;
  /* 12a123c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12a123c2:;
  /* 12a123c2 mov esp, ebp */
  ESP = (EBP);
  /* 12a123c4 pop ebp */
  EBP = (pop32());
  /* 12a123c5 ret  */
  ESPCHK(0x12a12300u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x12a123d0 (79 bytes, 32 insns) */
void f_12a123d0(void) {
  FTRACE(0x12a123d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a123d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a123d1 mov ebp, esp */
  EBP = (ESP);
  /* 12a123d3 push ecx */
  push32((uint32_t)(ECX));
  /* 12a123d4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a123d8 jne 0x12a123de */
  if (!C.zf) goto L_12a123de;
  /* 12a123da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a123dc jmp 0x12a1241b */
  goto L_12a1241b;
L_12a123de:;
  /* 12a123de mov eax, dword ptr [0x12a2fb64] */
  EAX = (r32((uint32_t)(0x12a2fb64)));
  /* 12a123e3 push eax */
  push32((uint32_t)(EAX));
  /* 12a123e4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a123e7 push ecx */
  push32((uint32_t)(ECX));
  /* 12a123e8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a123eb push edx */
  push32((uint32_t)(EDX));
  /* 12a123ec mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a123ef push eax */
  push32((uint32_t)(EAX));
  /* 12a123f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a123f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12a123f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a123f6 mov edx, dword ptr [0x12a2fe04] */
  EDX = (r32((uint32_t)(0x12a2fe04)));
  /* 12a123fc push edx */
  push32((uint32_t)(EDX));
  /* 12a123fd call 0x12a124d0 */
  push32(0x12a12402u); f_12a124d0();
  /* 12a12402 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a12405 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a12408 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a1240c jne 0x12a12415 */
  if (!C.zf) goto L_12a12415;
  /* 12a1240e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 12a12413 jmp 0x12a1241b */
  goto L_12a1241b;
L_12a12415:;
  /* 12a12415 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a12418 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12a1241b:;
  /* 12a1241b mov esp, ebp */
  ESP = (EBP);
  /* 12a1241d pop ebp */
  EBP = (pop32());
  /* 12a1241e ret  */
  ESPCHK(0x12a123d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012420 @ 0x12a12420 (174 bytes, 66 insns) */
void f_12a12420(void) {
  FTRACE(0x12a12420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a12420 push ebp */
  push32((uint32_t)(EBP));
  /* 12a12421 mov ebp, esp */
  EBP = (ESP);
  /* 12a12423 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a12426 mov eax, dword ptr [0x12a2e4ac] */
  EAX = (r32((uint32_t)(0x12a2e4ac)));
  /* 12a1242b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12a1242e:;
  /* 12a1242e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a12431 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a12434 je 0x12a124c8 */
  if (C.zf) goto L_12a124c8;
  /* 12a1243a push 0 */
  push32((uint32_t)(0x0u));
  /* 12a1243c push 0 */
  push32((uint32_t)(0x0u));
  /* 12a1243e push 0 */
  push32((uint32_t)(0x0u));
  /* 12a12440 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a12442 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12a12444 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a12447 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12a12449 push eax */
  push32((uint32_t)(EAX));
  /* 12a1244a push 0 */
  push32((uint32_t)(0x0u));
  /* 12a1244c push 1 */
  push32((uint32_t)(0x1u));
  /* 12a1244e call dword ptr [0x12a3021c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a3021c))), 0x12a12454u);
  /* 12a12454 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12a12457 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a1245b jne 0x12a12462 */
  if (!C.zf) goto L_12a12462;
  /* 12a1245d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a12460 jmp 0x12a124ca */
  goto L_12a124ca;
L_12a12462:;
  /* 12a12462 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12a12464 push 0x12a2a85c */
  push32((uint32_t)(0x12a2a85cu));
  /* 12a12469 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a1246b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a1246e push ecx */
  push32((uint32_t)(ECX));
  /* 12a1246f call 0x12a02920 */
  push32(0x12a12474u); f_12a02920();
  /* 12a12474 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a12477 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12a1247a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a1247e jne 0x12a12485 */
  if (!C.zf) goto L_12a12485;
  /* 12a12480 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a12483 jmp 0x12a124ca */
  goto L_12a124ca;
L_12a12485:;
  /* 12a12485 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a12487 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a12489 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a1248c push edx */
  push32((uint32_t)(EDX));
  /* 12a1248d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a12490 push eax */
  push32((uint32_t)(EAX));
  /* 12a12491 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12a12493 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a12496 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12a12498 push edx */
  push32((uint32_t)(EDX));
  /* 12a12499 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a1249b push 1 */
  push32((uint32_t)(0x1u));
  /* 12a1249d call dword ptr [0x12a3021c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a3021c))), 0x12a124a3u);
  /* 12a124a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a124a5 jne 0x12a124ac */
  if (!C.zf) goto L_12a124ac;
  /* 12a124a7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a124aa jmp 0x12a124ca */
  goto L_12a124ca;
L_12a124ac:;
  /* 12a124ac push 0 */
  push32((uint32_t)(0x0u));
  /* 12a124ae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a124b1 push eax */
  push32((uint32_t)(EAX));
  /* 12a124b2 call 0x12a12920 */
  push32(0x12a124b7u); f_12a12920();
  /* 12a124b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a124ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a124bd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a124c0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12a124c3 jmp 0x12a1242e */
  goto L_12a1242e;
L_12a124c8:;
  /* 12a124c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12a124ca:;
  /* 12a124ca mov esp, ebp */
  ESP = (EBP);
  /* 12a124cc pop ebp */
  EBP = (pop32());
  /* 12a124cd ret  */
  ESPCHK(0x12a12420u, _esp0);
  ESP += 4; return;
}

/* FUN_100124d0 @ 0x12a124d0 (970 bytes, 340 insns) */
void f_12a124d0(void) {
  FTRACE(0x12a124d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a124d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a124d1 mov ebp, esp */
  EBP = (ESP);
  /* 12a124d3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12a124d5 push 0x12a2a8b0 */
  push32((uint32_t)(0x12a2a8b0u));
  /* 12a124da push 0x12a0ba28 */
  push32((uint32_t)(0x12a0ba28u));
  /* 12a124df mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12a124e5 push eax */
  push32((uint32_t)(EAX));
  /* 12a124e6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12a124ed add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a124f0 push ebx */
  push32((uint32_t)(EBX));
  /* 12a124f1 push esi */
  push32((uint32_t)(ESI));
  /* 12a124f2 push edi */
  push32((uint32_t)(EDI));
  /* 12a124f3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12a124f6 cmp dword ptr [0x12a2e7ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e7ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a124fd jne 0x12a12556 */
  if (!C.zf) goto L_12a12556;
  /* 12a124ff push 1 */
  push32((uint32_t)(0x1u));
  /* 12a12501 push 0x12a29f0c */
  push32((uint32_t)(0x12a29f0cu));
  /* 12a12506 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a12508 push 0x12a29f0c */
  push32((uint32_t)(0x12a29f0cu));
  /* 12a1250d push 0 */
  push32((uint32_t)(0x0u));
  /* 12a1250f push 0 */
  push32((uint32_t)(0x0u));
  /* 12a12511 call dword ptr [0x12a30228] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30228))), 0x12a12517u);
  /* 12a12517 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a12519 je 0x12a12527 */
  if (C.zf) goto L_12a12527;
  /* 12a1251b mov dword ptr [0x12a2e7ec], 1 */
  w32((uint32_t)(0x12a2e7ec), (0x1u));
  /* 12a12525 jmp 0x12a12556 */
  goto L_12a12556;
L_12a12527:;
  /* 12a12527 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a12529 push 0x12a29f08 */
  push32((uint32_t)(0x12a29f08u));
  /* 12a1252e push 1 */
  push32((uint32_t)(0x1u));
  /* 12a12530 push 0x12a29f08 */
  push32((uint32_t)(0x12a29f08u));
  /* 12a12535 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a12537 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a12539 call dword ptr [0x12a3022c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a3022c))), 0x12a1253fu);
  /* 12a1253f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a12541 je 0x12a1254f */
  if (C.zf) goto L_12a1254f;
  /* 12a12543 mov dword ptr [0x12a2e7ec], 2 */
  w32((uint32_t)(0x12a2e7ec), (0x2u));
  /* 12a1254d jmp 0x12a12556 */
  goto L_12a12556;
L_12a1254f:;
  /* 12a1254f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a12551 jmp 0x12a128b4 */
  goto L_12a128b4;
L_12a12556:;
  /* 12a12556 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a1255a jle 0x12a1256f */
  if ((C.zf||C.sf!=C.of)) goto L_12a1256f;
  /* 12a1255c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a1255f push eax */
  push32((uint32_t)(EAX));
  /* 12a12560 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a12563 push ecx */
  push32((uint32_t)(ECX));
  /* 12a12564 call 0x12a128d0 */
  push32(0x12a12569u); f_12a128d0();
  /* 12a12569 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a1256c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_12a1256f:;
  /* 12a1256f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a12573 jle 0x12a12588 */
  if ((C.zf||C.sf!=C.of)) goto L_12a12588;
  /* 12a12575 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12a12578 push edx */
  push32((uint32_t)(EDX));
  /* 12a12579 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a1257c push eax */
  push32((uint32_t)(EAX));
  /* 12a1257d call 0x12a128d0 */
  push32(0x12a12582u); f_12a128d0();
  /* 12a12582 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a12585 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_12a12588:;
  /* 12a12588 cmp dword ptr [0x12a2e7ec], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e7ec))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a1258f jne 0x12a125b4 */
  if (!C.zf) goto L_12a125b4;
  /* 12a12591 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12a12594 push ecx */
  push32((uint32_t)(ECX));
  /* 12a12595 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a12598 push edx */
  push32((uint32_t)(EDX));
  /* 12a12599 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a1259c push eax */
  push32((uint32_t)(EAX));
  /* 12a1259d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a125a0 push ecx */
  push32((uint32_t)(ECX));
  /* 12a125a1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a125a4 push edx */
  push32((uint32_t)(EDX));
  /* 12a125a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a125a8 push eax */
  push32((uint32_t)(EAX));
  /* 12a125a9 call dword ptr [0x12a3022c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a3022c))), 0x12a125afu);
  /* 12a125af jmp 0x12a128b4 */
  goto L_12a128b4;
L_12a125b4:;
  /* 12a125b4 cmp dword ptr [0x12a2e7ec], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e7ec))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a125bb jne 0x12a128b2 */
  if (!C.zf) goto L_12a128b2;
  /* 12a125c1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a125c5 jne 0x12a125d0 */
  if (!C.zf) goto L_12a125d0;
  /* 12a125c7 mov ecx, dword ptr [0x12a2e698] */
  ECX = (r32((uint32_t)(0x12a2e698)));
  /* 12a125cd mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_12a125d0:;
  /* 12a125d0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a125d4 je 0x12a125e0 */
  if (C.zf) goto L_12a125e0;
  /* 12a125d6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a125da jne 0x12a1275c */
  if (!C.zf) goto L_12a1275c;
L_12a125e0:;
  /* 12a125e0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a125e3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a125e6 jne 0x12a125f2 */
  if (!C.zf) goto L_12a125f2;
  /* 12a125e8 mov eax, 2 */
  EAX = (0x2u);
  /* 12a125ed jmp 0x12a128b4 */
  goto L_12a128b4;
L_12a125f2:;
  /* 12a125f2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a125f6 jle 0x12a12602 */
  if ((C.zf||C.sf!=C.of)) goto L_12a12602;
  /* 12a125f8 mov eax, 1 */
  EAX = (0x1u);
  /* 12a125fd jmp 0x12a128b4 */
  goto L_12a128b4;
L_12a12602:;
  /* 12a12602 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a12606 jle 0x12a12612 */
  if ((C.zf||C.sf!=C.of)) goto L_12a12612;
  /* 12a12608 mov eax, 3 */
  EAX = (0x3u);
  /* 12a1260d jmp 0x12a128b4 */
  goto L_12a128b4;
L_12a12612:;
  /* 12a12612 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 12a12615 push eax */
  push32((uint32_t)(EAX));
  /* 12a12616 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 12a12619 push ecx */
  push32((uint32_t)(ECX));
  /* 12a1261a call dword ptr [0x12a302c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302c0))), 0x12a12620u);
  /* 12a12620 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a12622 jne 0x12a1262b */
  if (!C.zf) goto L_12a1262b;
  /* 12a12624 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a12626 jmp 0x12a128b4 */
  goto L_12a128b4;
L_12a1262b:;
  /* 12a1262b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a1262f jne 0x12a12637 */
  if (!C.zf) goto L_12a12637;
  /* 12a12631 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a12635 je 0x12a12664 */
  if (C.zf) goto L_12a12664;
L_12a12637:;
  /* 12a12637 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a1263b jne 0x12a12643 */
  if (!C.zf) goto L_12a12643;
  /* 12a1263d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a12641 je 0x12a12664 */
  if (C.zf) goto L_12a12664;
L_12a12643:;
  /* 12a12643 push 0x12a2a870 */
  push32((uint32_t)(0x12a2a870u));
  /* 12a12648 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a1264a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 12a1264f push 0x12a2a868 */
  push32((uint32_t)(0x12a2a868u));
  /* 12a12654 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a12656 call 0x12a019e0 */
  push32(0x12a1265bu); f_12a019e0();
  /* 12a1265b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a1265e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a12661 jne 0x12a12664 */
  if (!C.zf) goto L_12a12664;
  /* 12a12663 int3  */
  x86_unimpl("int3 @ 0x12a12663");
L_12a12664:;
  /* 12a12664 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a12666 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a12668 jne 0x12a1262b */
  if (!C.zf) goto L_12a1262b;
  /* 12a1266a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a1266e jle 0x12a126e3 */
  if ((C.zf||C.sf!=C.of)) goto L_12a126e3;
  /* 12a12670 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a12674 jae 0x12a12680 */
  if (!C.cf) goto L_12a12680;
  /* 12a12676 mov eax, 3 */
  EAX = (0x3u);
  /* 12a1267b jmp 0x12a128b4 */
  goto L_12a128b4;
L_12a12680:;
  /* 12a12680 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 12a12683 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 12a12686 jmp 0x12a12691 */
  goto L_12a12691;
L_12a12688:;
  /* 12a12688 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12a1268b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a1268e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_12a12691:;
  /* 12a12691 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12a12694 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a12696 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12a12698 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a1269a je 0x12a126d9 */
  if (C.zf) goto L_12a126d9;
  /* 12a1269c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12a1269f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a126a1 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12a126a4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a126a6 je 0x12a126d9 */
  if (C.zf) goto L_12a126d9;
  /* 12a126a8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a126ab xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a126ad mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12a126af mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12a126b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a126b4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12a126b6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a126b8 jl 0x12a126d7 */
  if ((C.sf!=C.of)) goto L_12a126d7;
  /* 12a126ba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a126bd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a126bf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12a126c1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12a126c4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a126c6 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12a126c9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a126cb jg 0x12a126d7 */
  if ((!C.zf&&C.sf==C.of)) goto L_12a126d7;
  /* 12a126cd mov eax, 2 */
  EAX = (0x2u);
  /* 12a126d2 jmp 0x12a128b4 */
  goto L_12a128b4;
L_12a126d7:;
  /* 12a126d7 jmp 0x12a12688 */
  goto L_12a12688;
L_12a126d9:;
  /* 12a126d9 mov eax, 3 */
  EAX = (0x3u);
  /* 12a126de jmp 0x12a128b4 */
  goto L_12a128b4;
L_12a126e3:;
  /* 12a126e3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a126e7 jle 0x12a1275c */
  if ((C.zf||C.sf!=C.of)) goto L_12a1275c;
  /* 12a126e9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a126ed jae 0x12a126f9 */
  if (!C.cf) goto L_12a126f9;
  /* 12a126ef mov eax, 1 */
  EAX = (0x1u);
  /* 12a126f4 jmp 0x12a128b4 */
  goto L_12a128b4;
L_12a126f9:;
  /* 12a126f9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 12a126fc mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 12a126ff jmp 0x12a1270a */
  goto L_12a1270a;
L_12a12701:;
  /* 12a12701 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12a12704 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a12707 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_12a1270a:;
  /* 12a1270a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12a1270d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a1270f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12a12711 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a12713 je 0x12a12752 */
  if (C.zf) goto L_12a12752;
  /* 12a12715 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12a12718 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a1271a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12a1271d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a1271f je 0x12a12752 */
  if (C.zf) goto L_12a12752;
  /* 12a12721 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a12724 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a12726 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12a12728 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12a1272b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a1272d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12a1272f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a12731 jl 0x12a12750 */
  if ((C.sf!=C.of)) goto L_12a12750;
  /* 12a12733 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a12736 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a12738 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12a1273a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12a1273d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a1273f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12a12742 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a12744 jg 0x12a12750 */
  if ((!C.zf&&C.sf==C.of)) goto L_12a12750;
  /* 12a12746 mov eax, 2 */
  EAX = (0x2u);
  /* 12a1274b jmp 0x12a128b4 */
  goto L_12a128b4;
L_12a12750:;
  /* 12a12750 jmp 0x12a12701 */
  goto L_12a12701;
L_12a12752:;
  /* 12a12752 mov eax, 1 */
  EAX = (0x1u);
  /* 12a12757 jmp 0x12a128b4 */
  goto L_12a128b4;
L_12a1275c:;
  /* 12a1275c push 0 */
  push32((uint32_t)(0x0u));
  /* 12a1275e push 0 */
  push32((uint32_t)(0x0u));
  /* 12a12760 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a12763 push ecx */
  push32((uint32_t)(ECX));
  /* 12a12764 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a12767 push edx */
  push32((uint32_t)(EDX));
  /* 12a12768 push 9 */
  push32((uint32_t)(0x9u));
  /* 12a1276a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12a1276d push eax */
  push32((uint32_t)(EAX));
  /* 12a1276e call dword ptr [0x12a3030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a3030c))), 0x12a12774u);
  /* 12a12774 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12a12777 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a1277b jne 0x12a12784 */
  if (!C.zf) goto L_12a12784;
  /* 12a1277d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a1277f jmp 0x12a128b4 */
  goto L_12a128b4;
L_12a12784:;
  /* 12a12784 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12a1278b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12a1278e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12a12790 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a12793 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12a12795 call 0x12a05ac0 */
  push32(0x12a1279au); f_12a05ac0();
  /* 12a1279a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 12a1279d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12a127a0 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 12a127a3 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12a127a6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12a127ad jmp 0x12a127c6 */
  goto L_12a127c6;
  /* 12a127af mov eax, 1 */
  EAX = (0x1u);
  /* 12a127b4 ret  */
  ESPCHK(0x12a124d0u, _esp0);
  ESP += 4; return;
  /* 12a127b5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12a127b8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12a127bf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12a127c6:;
  /* 12a127c6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a127ca jne 0x12a127d3 */
  if (!C.zf) goto L_12a127d3;
  /* 12a127cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a127ce jmp 0x12a128b4 */
  goto L_12a128b4;
L_12a127d3:;
  /* 12a127d3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12a127d6 push edx */
  push32((uint32_t)(EDX));
  /* 12a127d7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a127da push eax */
  push32((uint32_t)(EAX));
  /* 12a127db mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a127de push ecx */
  push32((uint32_t)(ECX));
  /* 12a127df mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a127e2 push edx */
  push32((uint32_t)(EDX));
  /* 12a127e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a127e5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12a127e8 push eax */
  push32((uint32_t)(EAX));
  /* 12a127e9 call dword ptr [0x12a3030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a3030c))), 0x12a127efu);
  /* 12a127ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a127f1 jne 0x12a127fa */
  if (!C.zf) goto L_12a127fa;
  /* 12a127f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a127f5 jmp 0x12a128b4 */
  goto L_12a128b4;
L_12a127fa:;
  /* 12a127fa push 0 */
  push32((uint32_t)(0x0u));
  /* 12a127fc push 0 */
  push32((uint32_t)(0x0u));
  /* 12a127fe mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12a12801 push ecx */
  push32((uint32_t)(ECX));
  /* 12a12802 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a12805 push edx */
  push32((uint32_t)(EDX));
  /* 12a12806 push 9 */
  push32((uint32_t)(0x9u));
  /* 12a12808 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12a1280b push eax */
  push32((uint32_t)(EAX));
  /* 12a1280c call dword ptr [0x12a3030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a3030c))), 0x12a12812u);
  /* 12a12812 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12a12815 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a12819 jne 0x12a12822 */
  if (!C.zf) goto L_12a12822;
  /* 12a1281b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a1281d jmp 0x12a128b4 */
  goto L_12a128b4;
L_12a12822:;
  /* 12a12822 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12a12829 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a1282c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12a1282e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a12831 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12a12833 call 0x12a05ac0 */
  push32(0x12a12838u); f_12a05ac0();
  /* 12a12838 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 12a1283b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12a1283e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 12a12841 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12a12844 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12a1284b jmp 0x12a12864 */
  goto L_12a12864;
  /* 12a1284d mov eax, 1 */
  EAX = (0x1u);
  /* 12a12852 ret  */
  ESPCHK(0x12a124d0u, _esp0);
  ESP += 4; return;
  /* 12a12853 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12a12856 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 12a1285d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12a12864:;
  /* 12a12864 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a12868 jne 0x12a1286e */
  if (!C.zf) goto L_12a1286e;
  /* 12a1286a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a1286c jmp 0x12a128b4 */
  goto L_12a128b4;
L_12a1286e:;
  /* 12a1286e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a12871 push edx */
  push32((uint32_t)(EDX));
  /* 12a12872 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12a12875 push eax */
  push32((uint32_t)(EAX));
  /* 12a12876 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12a12879 push ecx */
  push32((uint32_t)(ECX));
  /* 12a1287a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a1287d push edx */
  push32((uint32_t)(EDX));
  /* 12a1287e push 1 */
  push32((uint32_t)(0x1u));
  /* 12a12880 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12a12883 push eax */
  push32((uint32_t)(EAX));
  /* 12a12884 call dword ptr [0x12a3030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a3030c))), 0x12a1288au);
  /* 12a1288a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a1288c jne 0x12a12892 */
  if (!C.zf) goto L_12a12892;
  /* 12a1288e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a12890 jmp 0x12a128b4 */
  goto L_12a128b4;
L_12a12892:;
  /* 12a12892 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a12895 push ecx */
  push32((uint32_t)(ECX));
  /* 12a12896 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12a12899 push edx */
  push32((uint32_t)(EDX));
  /* 12a1289a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12a1289d push eax */
  push32((uint32_t)(EAX));
  /* 12a1289e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a128a1 push ecx */
  push32((uint32_t)(ECX));
  /* 12a128a2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a128a5 push edx */
  push32((uint32_t)(EDX));
  /* 12a128a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a128a9 push eax */
  push32((uint32_t)(EAX));
  /* 12a128aa call dword ptr [0x12a30228] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30228))), 0x12a128b0u);
  /* 12a128b0 jmp 0x12a128b4 */
  goto L_12a128b4;
L_12a128b2:;
  /* 12a128b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12a128b4:;
  /* 12a128b4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 12a128b7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a128ba mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12a128c1 pop edi */
  EDI = (pop32());
  /* 12a128c2 pop esi */
  ESI = (pop32());
  /* 12a128c3 pop ebx */
  EBX = (pop32());
  /* 12a128c4 mov esp, ebp */
  ESP = (EBP);
  /* 12a128c6 pop ebp */
  EBP = (pop32());
  /* 12a128c7 ret  */
  ESPCHK(0x12a124d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100128d0 @ 0x12a128d0 (80 bytes, 32 insns) */
void f_12a128d0(void) {
  FTRACE(0x12a128d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a128d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a128d1 mov ebp, esp */
  EBP = (ESP);
  /* 12a128d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a128d6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a128d9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12a128dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a128df mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12a128e2:;
  /* 12a128e2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a128e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a128e8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a128eb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12a128ee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a128f0 je 0x12a12907 */
  if (C.zf) goto L_12a12907;
  /* 12a128f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a128f5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12a128f8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a128fa je 0x12a12907 */
  if (C.zf) goto L_12a12907;
  /* 12a128fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a128ff add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a12902 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a12905 jmp 0x12a128e2 */
  goto L_12a128e2;
L_12a12907:;
  /* 12a12907 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a1290a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12a1290d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a1290f jne 0x12a12919 */
  if (!C.zf) goto L_12a12919;
  /* 12a12911 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a12914 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a12917 jmp 0x12a1291c */
  goto L_12a1291c;
L_12a12919:;
  /* 12a12919 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_12a1291c:;
  /* 12a1291c mov esp, ebp */
  ESP = (EBP);
  /* 12a1291e pop ebp */
  EBP = (pop32());
  /* 12a1291f ret  */
  ESPCHK(0x12a128d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012920 @ 0x12a12920 (736 bytes, 224 insns) */
void f_12a12920(void) {
  FTRACE(0x12a12920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a12920 push ebp */
  push32((uint32_t)(EBP));
  /* 12a12921 mov ebp, esp */
  EBP = (ESP);
  /* 12a12923 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a12926 push esi */
  push32((uint32_t)(ESI));
  /* 12a12927 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a1292b je 0x12a1294c */
  if (C.zf) goto L_12a1294c;
  /* 12a1292d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12a1292f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a12932 push eax */
  push32((uint32_t)(EAX));
  /* 12a12933 call 0x12a12d70 */
  push32(0x12a12938u); f_12a12d70();
  /* 12a12938 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a1293b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12a1293e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a12942 je 0x12a1294c */
  if (C.zf) goto L_12a1294c;
  /* 12a12944 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a12947 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a1294a jne 0x12a12954 */
  if (!C.zf) goto L_12a12954;
L_12a1294c:;
  /* 12a1294c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a1294f jmp 0x12a12bfb */
  goto L_12a12bfb;
L_12a12954:;
  /* 12a12954 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a12957 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12a1295b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12a1295d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a1295f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12a12960 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12a12963 mov ecx, dword ptr [0x12a2e4a4] */
  ECX = (r32((uint32_t)(0x12a2e4a4)));
  /* 12a12969 cmp ecx, dword ptr [0x12a2e4a8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12a2e4a8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a1296f jne 0x12a12985 */
  if (!C.zf) goto L_12a12985;
  /* 12a12971 mov edx, dword ptr [0x12a2e4a4] */
  EDX = (r32((uint32_t)(0x12a2e4a4)));
  /* 12a12977 push edx */
  push32((uint32_t)(EDX));
  /* 12a12978 call 0x12a12c80 */
  push32(0x12a1297du); f_12a12c80();
  /* 12a1297d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a12980 mov dword ptr [0x12a2e4a4], eax */
  w32((uint32_t)(0x12a2e4a4), (EAX));
L_12a12985:;
  /* 12a12985 cmp dword ptr [0x12a2e4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a1298c jne 0x12a12a45 */
  if (!C.zf) goto L_12a12a45;
  /* 12a12992 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a12996 je 0x12a129b7 */
  if (C.zf) goto L_12a129b7;
  /* 12a12998 cmp dword ptr [0x12a2e4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a1299f je 0x12a129b7 */
  if (C.zf) goto L_12a129b7;
  /* 12a129a1 call 0x12a12420 */
  push32(0x12a129a6u); f_12a12420();
  /* 12a129a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a129a8 je 0x12a129b2 */
  if (C.zf) goto L_12a129b2;
  /* 12a129aa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a129ad jmp 0x12a12bfb */
  goto L_12a12bfb;
L_12a129b2:;
  /* 12a129b2 jmp 0x12a12a45 */
  goto L_12a12a45;
L_12a129b7:;
  /* 12a129b7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a129bb je 0x12a129c4 */
  if (C.zf) goto L_12a129c4;
  /* 12a129bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a129bf jmp 0x12a12bfb */
  goto L_12a12bfb;
L_12a129c4:;
  /* 12a129c4 cmp dword ptr [0x12a2e4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a129cb jne 0x12a12a04 */
  if (!C.zf) goto L_12a12a04;
  /* 12a129cd push 0x87 */
  push32((uint32_t)(0x87u));
  /* 12a129d2 push 0x12a2a8c8 */
  push32((uint32_t)(0x12a2a8c8u));
  /* 12a129d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a129d9 push 4 */
  push32((uint32_t)(0x4u));
  /* 12a129db call 0x12a02920 */
  push32(0x12a129e0u); f_12a02920();
  /* 12a129e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a129e3 mov dword ptr [0x12a2e4a4], eax */
  w32((uint32_t)(0x12a2e4a4), (EAX));
  /* 12a129e8 cmp dword ptr [0x12a2e4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a129ef jne 0x12a129f9 */
  if (!C.zf) goto L_12a129f9;
  /* 12a129f1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a129f4 jmp 0x12a12bfb */
  goto L_12a12bfb;
L_12a129f9:;
  /* 12a129f9 mov eax, dword ptr [0x12a2e4a4] */
  EAX = (r32((uint32_t)(0x12a2e4a4)));
  /* 12a129fe mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12a12a04:;
  /* 12a12a04 cmp dword ptr [0x12a2e4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a12a0b jne 0x12a12a45 */
  if (!C.zf) goto L_12a12a45;
  /* 12a12a0d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 12a12a12 push 0x12a2a8c8 */
  push32((uint32_t)(0x12a2a8c8u));
  /* 12a12a17 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a12a19 push 4 */
  push32((uint32_t)(0x4u));
  /* 12a12a1b call 0x12a02920 */
  push32(0x12a12a20u); f_12a02920();
  /* 12a12a20 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a12a23 mov dword ptr [0x12a2e4ac], eax */
  w32((uint32_t)(0x12a2e4ac), (EAX));
  /* 12a12a28 cmp dword ptr [0x12a2e4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a12a2f jne 0x12a12a39 */
  if (!C.zf) goto L_12a12a39;
  /* 12a12a31 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a12a34 jmp 0x12a12bfb */
  goto L_12a12bfb;
L_12a12a39:;
  /* 12a12a39 mov ecx, dword ptr [0x12a2e4ac] */
  ECX = (r32((uint32_t)(0x12a2e4ac)));
  /* 12a12a3f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_12a12a45:;
  /* 12a12a45 mov edx, dword ptr [0x12a2e4a4] */
  EDX = (r32((uint32_t)(0x12a2e4a4)));
  /* 12a12a4b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12a12a4e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a12a51 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a12a54 push eax */
  push32((uint32_t)(EAX));
  /* 12a12a55 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a12a58 push ecx */
  push32((uint32_t)(ECX));
  /* 12a12a59 call 0x12a12c00 */
  push32(0x12a12a5eu); f_12a12c00();
  /* 12a12a5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a12a61 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12a12a64 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a12a68 jl 0x12a12b01 */
  if ((C.sf!=C.of)) goto L_12a12b01;
  /* 12a12a6e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a12a71 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a12a74 je 0x12a12b01 */
  if (C.zf) goto L_12a12b01;
  /* 12a12a7a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a12a7e je 0x12a12af3 */
  if (C.zf) goto L_12a12af3;
  /* 12a12a80 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a12a82 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a12a85 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a12a88 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12a12a8b push edx */
  push32((uint32_t)(EDX));
  /* 12a12a8c call 0x12a033b0 */
  push32(0x12a12a91u); f_12a033b0();
  /* 12a12a91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a12a94 jmp 0x12a12a9f */
  goto L_12a12a9f;
L_12a12a96:;
  /* 12a12a96 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a12a99 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a12a9c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12a12a9f:;
  /* 12a12a9f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a12aa2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a12aa5 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a12aa9 je 0x12a12ac0 */
  if (C.zf) goto L_12a12ac0;
  /* 12a12aab mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a12aae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a12ab1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a12ab4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 12a12ab7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 12a12abb mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 12a12abe jmp 0x12a12a96 */
  goto L_12a12a96;
L_12a12ac0:;
  /* 12a12ac0 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 12a12ac5 push 0x12a2a8c8 */
  push32((uint32_t)(0x12a2a8c8u));
  /* 12a12aca push 2 */
  push32((uint32_t)(0x2u));
  /* 12a12acc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a12acf shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12a12ad2 push eax */
  push32((uint32_t)(EAX));
  /* 12a12ad3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a12ad6 push ecx */
  push32((uint32_t)(ECX));
  /* 12a12ad7 call 0x12a02db0 */
  push32(0x12a12adcu); f_12a02db0();
  /* 12a12adc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a12adf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12a12ae2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a12ae6 je 0x12a12af1 */
  if (C.zf) goto L_12a12af1;
  /* 12a12ae8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a12aeb mov dword ptr [0x12a2e4a4], edx */
  w32((uint32_t)(0x12a2e4a4), (EDX));
L_12a12af1:;
  /* 12a12af1 jmp 0x12a12aff */
  goto L_12a12aff;
L_12a12af3:;
  /* 12a12af3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a12af6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a12af9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a12afc mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_12a12aff:;
  /* 12a12aff jmp 0x12a12b74 */
  goto L_12a12b74;
L_12a12b01:;
  /* 12a12b01 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a12b05 jne 0x12a12b6d */
  if (!C.zf) goto L_12a12b6d;
  /* 12a12b07 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a12b0b jge 0x12a12b15 */
  if ((C.sf==C.of)) goto L_12a12b15;
  /* 12a12b0d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a12b10 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12a12b12 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12a12b15:;
  /* 12a12b15 push 0xce */
  push32((uint32_t)(0xceu));
  /* 12a12b1a push 0x12a2a8c8 */
  push32((uint32_t)(0x12a2a8c8u));
  /* 12a12b1f push 2 */
  push32((uint32_t)(0x2u));
  /* 12a12b21 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a12b24 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 12a12b2b push edx */
  push32((uint32_t)(EDX));
  /* 12a12b2c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a12b2f push eax */
  push32((uint32_t)(EAX));
  /* 12a12b30 call 0x12a02db0 */
  push32(0x12a12b35u); f_12a02db0();
  /* 12a12b35 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a12b38 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12a12b3b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a12b3f jne 0x12a12b49 */
  if (!C.zf) goto L_12a12b49;
  /* 12a12b41 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a12b44 jmp 0x12a12bfb */
  goto L_12a12bfb;
L_12a12b49:;
  /* 12a12b49 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a12b4c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a12b4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a12b52 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 12a12b55 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a12b58 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a12b5b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 12a12b63 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a12b66 mov dword ptr [0x12a2e4a4], eax */
  w32((uint32_t)(0x12a2e4a4), (EAX));
  /* 12a12b6b jmp 0x12a12b74 */
  goto L_12a12b74;
L_12a12b6d:;
  /* 12a12b6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a12b6f jmp 0x12a12bfb */
  goto L_12a12bfb;
L_12a12b74:;
  /* 12a12b74 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a12b78 je 0x12a12bf9 */
  if (C.zf) goto L_12a12bf9;
  /* 12a12b7a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 12a12b7f push 0x12a2a8c8 */
  push32((uint32_t)(0x12a2a8c8u));
  /* 12a12b84 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a12b86 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a12b89 push ecx */
  push32((uint32_t)(ECX));
  /* 12a12b8a call 0x12a05750 */
  push32(0x12a12b8fu); f_12a05750();
  /* 12a12b8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a12b92 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a12b95 push eax */
  push32((uint32_t)(EAX));
  /* 12a12b96 call 0x12a02920 */
  push32(0x12a12b9bu); f_12a02920();
  /* 12a12b9b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a12b9e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12a12ba1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a12ba5 je 0x12a12bf9 */
  if (C.zf) goto L_12a12bf9;
  /* 12a12ba7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a12baa push edx */
  push32((uint32_t)(EDX));
  /* 12a12bab mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a12bae push eax */
  push32((uint32_t)(EAX));
  /* 12a12baf call 0x12a058d0 */
  push32(0x12a12bb4u); f_12a058d0();
  /* 12a12bb4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a12bb7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a12bba sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a12bbd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a12bc0 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a12bc2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12a12bc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a12bc8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12a12bcb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a12bce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a12bd1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12a12bd4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a12bd7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12a12bd9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a12bdb not edx */
  EDX = (~(EDX));
  /* 12a12bdd and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 12a12be0 push edx */
  push32((uint32_t)(EDX));
  /* 12a12be1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a12be4 push eax */
  push32((uint32_t)(EAX));
  /* 12a12be5 call dword ptr [0x12a30224] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30224))), 0x12a12bebu);
  /* 12a12beb push 2 */
  push32((uint32_t)(0x2u));
  /* 12a12bed mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a12bf0 push ecx */
  push32((uint32_t)(ECX));
  /* 12a12bf1 call 0x12a033b0 */
  push32(0x12a12bf6u); f_12a033b0();
  /* 12a12bf6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a12bf9:;
  /* 12a12bf9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12a12bfb:;
  /* 12a12bfb pop esi */
  ESI = (pop32());
  /* 12a12bfc mov esp, ebp */
  ESP = (EBP);
  /* 12a12bfe pop ebp */
  EBP = (pop32());
  /* 12a12bff ret  */
  ESPCHK(0x12a12920u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x12a12c00 (124 bytes, 47 insns) */
void f_12a12c00(void) {
  FTRACE(0x12a12c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a12c00 push ebp */
  push32((uint32_t)(EBP));
  /* 12a12c01 mov ebp, esp */
  EBP = (ESP);
  /* 12a12c03 push ecx */
  push32((uint32_t)(ECX));
  /* 12a12c04 mov eax, dword ptr [0x12a2e4a4] */
  EAX = (r32((uint32_t)(0x12a2e4a4)));
  /* 12a12c09 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a12c0c jmp 0x12a12c17 */
  goto L_12a12c17;
L_12a12c0e:;
  /* 12a12c0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a12c11 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a12c14 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12a12c17:;
  /* 12a12c17 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a12c1a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a12c1d je 0x12a12c6a */
  if (C.zf) goto L_12a12c6a;
  /* 12a12c1f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a12c22 push eax */
  push32((uint32_t)(EAX));
  /* 12a12c23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a12c26 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12a12c28 push edx */
  push32((uint32_t)(EDX));
  /* 12a12c29 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a12c2c push eax */
  push32((uint32_t)(EAX));
  /* 12a12c2d call 0x12a123d0 */
  push32(0x12a12c32u); f_12a123d0();
  /* 12a12c32 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a12c35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a12c37 jne 0x12a12c68 */
  if (!C.zf) goto L_12a12c68;
  /* 12a12c39 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a12c3c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12a12c3e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a12c41 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 12a12c45 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a12c48 je 0x12a12c5a */
  if (C.zf) goto L_12a12c5a;
  /* 12a12c4a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a12c4d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12a12c4f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a12c52 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 12a12c56 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a12c58 jne 0x12a12c68 */
  if (!C.zf) goto L_12a12c68;
L_12a12c5a:;
  /* 12a12c5a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a12c5d sub eax, dword ptr [0x12a2e4a4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12a2e4a4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a12c63 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12a12c66 jmp 0x12a12c78 */
  goto L_12a12c78;
L_12a12c68:;
  /* 12a12c68 jmp 0x12a12c0e */
  goto L_12a12c0e;
L_12a12c6a:;
  /* 12a12c6a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a12c6d sub eax, dword ptr [0x12a2e4a4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12a2e4a4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a12c73 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12a12c76 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_12a12c78:;
  /* 12a12c78 mov esp, ebp */
  ESP = (EBP);
  /* 12a12c7a pop ebp */
  EBP = (pop32());
  /* 12a12c7b ret  */
  ESPCHK(0x12a12c00u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x12a12c80 (238 bytes, 80 insns) */
void f_12a12c80(void) {
  FTRACE(0x12a12c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a12c80 push ebp */
  push32((uint32_t)(EBP));
  /* 12a12c81 mov ebp, esp */
  EBP = (ESP);
  /* 12a12c83 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a12c86 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12a12c8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a12c90 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12a12c93 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a12c97 jne 0x12a12ca0 */
  if (!C.zf) goto L_12a12ca0;
  /* 12a12c99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a12c9b jmp 0x12a12d6a */
  goto L_12a12d6a;
L_12a12ca0:;
  /* 12a12ca0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a12ca3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12a12ca5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a12ca8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a12cab mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12a12cae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a12cb0 je 0x12a12cbd */
  if (C.zf) goto L_12a12cbd;
  /* 12a12cb2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a12cb5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a12cb8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12a12cbb jmp 0x12a12ca0 */
  goto L_12a12ca0;
L_12a12cbd:;
  /* 12a12cbd push 0x146 */
  push32((uint32_t)(0x146u));
  /* 12a12cc2 push 0x12a2a8c8 */
  push32((uint32_t)(0x12a2a8c8u));
  /* 12a12cc7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a12cc9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a12ccc lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 12a12cd3 push eax */
  push32((uint32_t)(EAX));
  /* 12a12cd4 call 0x12a02920 */
  push32(0x12a12cd9u); f_12a02920();
  /* 12a12cd9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a12cdc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12a12cdf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a12ce2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12a12ce5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a12ce9 jne 0x12a12cf5 */
  if (!C.zf) goto L_12a12cf5;
  /* 12a12ceb push 9 */
  push32((uint32_t)(0x9u));
  /* 12a12ced call 0x12a01890 */
  push32(0x12a12cf2u); f_12a01890();
  /* 12a12cf2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a12cf5:;
  /* 12a12cf5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a12cf8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12a12cfb:;
  /* 12a12cfb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a12cfe cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a12d01 je 0x12a12d5e */
  if (C.zf) goto L_12a12d5e;
  /* 12a12d03 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 12a12d08 push 0x12a2a8c8 */
  push32((uint32_t)(0x12a2a8c8u));
  /* 12a12d0d push 2 */
  push32((uint32_t)(0x2u));
  /* 12a12d0f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a12d12 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12a12d14 push edx */
  push32((uint32_t)(EDX));
  /* 12a12d15 call 0x12a05750 */
  push32(0x12a12d1au); f_12a05750();
  /* 12a12d1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a12d1d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a12d20 push eax */
  push32((uint32_t)(EAX));
  /* 12a12d21 call 0x12a02920 */
  push32(0x12a12d26u); f_12a02920();
  /* 12a12d26 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a12d29 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a12d2c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12a12d2e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a12d31 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a12d34 je 0x12a12d4a */
  if (C.zf) goto L_12a12d4a;
  /* 12a12d36 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a12d39 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12a12d3b push ecx */
  push32((uint32_t)(ECX));
  /* 12a12d3c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a12d3f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12a12d41 push eax */
  push32((uint32_t)(EAX));
  /* 12a12d42 call 0x12a058d0 */
  push32(0x12a12d47u); f_12a058d0();
  /* 12a12d47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a12d4a:;
  /* 12a12d4a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a12d4d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a12d50 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a12d53 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a12d56 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a12d59 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12a12d5c jmp 0x12a12cfb */
  goto L_12a12cfb;
L_12a12d5e:;
  /* 12a12d5e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a12d61 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12a12d67 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12a12d6a:;
  /* 12a12d6a mov esp, ebp */
  ESP = (EBP);
  /* 12a12d6c pop ebp */
  EBP = (pop32());
  /* 12a12d6d ret  */
  ESPCHK(0x12a12c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d70 @ 0x12a12d70 (237 bytes, 81 insns) */
void f_12a12d70(void) {
  FTRACE(0x12a12d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a12d70 push ebp */
  push32((uint32_t)(EBP));
  /* 12a12d71 mov ebp, esp */
  EBP = (ESP);
  /* 12a12d73 push ecx */
  push32((uint32_t)(ECX));
  /* 12a12d74 cmp dword ptr [0x12a2fbec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2fbec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a12d7b jne 0x12a12d92 */
  if (!C.zf) goto L_12a12d92;
  /* 12a12d7d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a12d80 push eax */
  push32((uint32_t)(EAX));
  /* 12a12d81 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a12d84 push ecx */
  push32((uint32_t)(ECX));
  /* 12a12d85 call 0x12a12e70 */
  push32(0x12a12d8au); f_12a12e70();
  /* 12a12d8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a12d8d jmp 0x12a12e59 */
  goto L_12a12e59;
L_12a12d92:;
  /* 12a12d92 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12a12d94 call 0x12a06320 */
  push32(0x12a12d99u); f_12a06320();
  /* 12a12d99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a12d9c jmp 0x12a12da7 */
  goto L_12a12da7;
L_12a12d9e:;
  /* 12a12d9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a12da1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a12da4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12a12da7:;
  /* 12a12da7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a12daa movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 12a12dae mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 12a12db2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a12db5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12a12dbb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a12dbd je 0x12a12e3b */
  if (C.zf) goto L_12a12e3b;
  /* 12a12dbf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a12dc2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a12dc7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a12dc9 mov cl, byte ptr [eax + 0x12a2fd01] */
  CL = (r8((uint32_t)(EAX + 0x12a2fd01)));
  /* 12a12dcf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12a12dd2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a12dd4 je 0x12a12e26 */
  if (C.zf) goto L_12a12e26;
  /* 12a12dd6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a12dd9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a12ddc mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12a12ddf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a12de2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a12de4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12a12de6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a12de8 jne 0x12a12df8 */
  if (!C.zf) goto L_12a12df8;
  /* 12a12dea push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12a12dec call 0x12a063c0 */
  push32(0x12a12df1u); f_12a063c0();
  /* 12a12df1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a12df4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a12df6 jmp 0x12a12e59 */
  goto L_12a12e59;
L_12a12df8:;
  /* 12a12df8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a12dfb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12a12e01 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12a12e04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a12e07 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a12e09 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12a12e0b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12a12e0d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a12e10 jne 0x12a12e24 */
  if (!C.zf) goto L_12a12e24;
  /* 12a12e12 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12a12e14 call 0x12a063c0 */
  push32(0x12a12e19u); f_12a063c0();
  /* 12a12e19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a12e1c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a12e1f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a12e22 jmp 0x12a12e59 */
  goto L_12a12e59;
L_12a12e24:;
  /* 12a12e24 jmp 0x12a12e36 */
  goto L_12a12e36;
L_12a12e26:;
  /* 12a12e26 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a12e29 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12a12e2f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a12e32 jne 0x12a12e36 */
  if (!C.zf) goto L_12a12e36;
  /* 12a12e34 jmp 0x12a12e3b */
  goto L_12a12e3b;
L_12a12e36:;
  /* 12a12e36 jmp 0x12a12d9e */
  goto L_12a12d9e;
L_12a12e3b:;
  /* 12a12e3b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12a12e3d call 0x12a063c0 */
  push32(0x12a12e42u); f_12a063c0();
  /* 12a12e42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a12e45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a12e48 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a12e4d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a12e50 jne 0x12a12e57 */
  if (!C.zf) goto L_12a12e57;
  /* 12a12e52 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a12e55 jmp 0x12a12e59 */
  goto L_12a12e59;
L_12a12e57:;
  /* 12a12e57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12a12e59:;
  /* 12a12e59 mov esp, ebp */
  ESP = (EBP);
  /* 12a12e5b pop ebp */
  EBP = (pop32());
  /* 12a12e5c ret  */
  ESPCHK(0x12a12d70u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x12a12e70 (193 bytes, 87 insns) */
void f_12a12e70(void) {
  FTRACE(0x12a12e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a12e70 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a12e72 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12a12e76 push ebx */
  push32((uint32_t)(EBX));
  /* 12a12e77 mov ebx, eax */
  EBX = (EAX);
  /* 12a12e79 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12a12e7c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 12a12e80 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12a12e86 je 0x12a12e9b */
  if (C.zf) goto L_12a12e9b;
L_12a12e88:;
  /* 12a12e88 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 12a12e8a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12a12e8b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12a12e8d je 0x12a12e60 */
  if (C.zf) { jmp_ind(0x12a12e60u); return; }
  /* 12a12e8f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 12a12e91 je 0x12a12ee4 */
  if (C.zf) goto L_12a12ee4;
  /* 12a12e93 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12a12e99 jne 0x12a12e88 */
  if (!C.zf) goto L_12a12e88;
L_12a12e9b:;
  /* 12a12e9b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 12a12e9d push edi */
  push32((uint32_t)(EDI));
  /* 12a12e9e mov eax, ebx */
  EAX = (EBX);
  /* 12a12ea0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 12a12ea3 push esi */
  push32((uint32_t)(ESI));
  /* 12a12ea4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_12a12ea6:;
  /* 12a12ea6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 12a12ea8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 12a12ead mov eax, ecx */
  EAX = (ECX);
  /* 12a12eaf mov esi, edi */
  ESI = (EDI);
  /* 12a12eb1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 12a12eb3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12a12eb5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12a12eb7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12a12eba xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a12ebd xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 12a12ebf xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 12a12ec1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a12ec4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 12a12eca jne 0x12a12ee8 */
  if (!C.zf) goto L_12a12ee8;
  /* 12a12ecc and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12a12ed1 je 0x12a12ea6 */
  if (C.zf) goto L_12a12ea6;
  /* 12a12ed3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12a12ed8 jne 0x12a12ee2 */
  if (!C.zf) goto L_12a12ee2;
  /* 12a12eda and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 12a12ee0 jne 0x12a12ea6 */
  if (!C.zf) goto L_12a12ea6;
L_12a12ee2:;
  /* 12a12ee2 pop esi */
  ESI = (pop32());
  /* 12a12ee3 pop edi */
  EDI = (pop32());
L_12a12ee4:;
  /* 12a12ee4 pop ebx */
  EBX = (pop32());
  /* 12a12ee5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a12ee7 ret  */
  ESPCHK(0x12a12e70u, _esp0);
  ESP += 4; return;
L_12a12ee8:;
  /* 12a12ee8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 12a12eeb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12a12eed je 0x12a12f25 */
  if (C.zf) goto L_12a12f25;
  /* 12a12eef test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12a12ef1 je 0x12a12ee2 */
  if (C.zf) goto L_12a12ee2;
  /* 12a12ef3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12a12ef5 je 0x12a12f1e */
  if (C.zf) goto L_12a12f1e;
  /* 12a12ef7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12a12ef9 je 0x12a12ee2 */
  if (C.zf) goto L_12a12ee2;
  /* 12a12efb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12a12efe cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12a12f00 je 0x12a12f17 */
  if (C.zf) goto L_12a12f17;
  /* 12a12f02 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12a12f04 je 0x12a12ee2 */
  if (C.zf) goto L_12a12ee2;
  /* 12a12f06 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12a12f08 je 0x12a12f10 */
  if (C.zf) goto L_12a12f10;
  /* 12a12f0a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12a12f0c je 0x12a12ee2 */
  if (C.zf) goto L_12a12ee2;
  /* 12a12f0e jmp 0x12a12ea6 */
  goto L_12a12ea6;
L_12a12f10:;
  /* 12a12f10 pop esi */
  ESI = (pop32());
  /* 12a12f11 pop edi */
  EDI = (pop32());
  /* 12a12f12 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 12a12f15 pop ebx */
  EBX = (pop32());
  /* 12a12f16 ret  */
  ESPCHK(0x12a12e70u, _esp0);
  ESP += 4; return;
L_12a12f17:;
  /* 12a12f17 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 12a12f1a pop esi */
  ESI = (pop32());
  /* 12a12f1b pop edi */
  EDI = (pop32());
  /* 12a12f1c pop ebx */
  EBX = (pop32());
  /* 12a12f1d ret  */
  ESPCHK(0x12a12e70u, _esp0);
  ESP += 4; return;
L_12a12f1e:;
  /* 12a12f1e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 12a12f21 pop esi */
  ESI = (pop32());
  /* 12a12f22 pop edi */
  EDI = (pop32());
  /* 12a12f23 pop ebx */
  EBX = (pop32());
  /* 12a12f24 ret  */
  ESPCHK(0x12a12e70u, _esp0);
  ESP += 4; return;
L_12a12f25:;
  /* 12a12f25 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 12a12f28 pop esi */
  ESI = (pop32());
  /* 12a12f29 pop edi */
  EDI = (pop32());
  /* 12a12f2a pop ebx */
  EBX = (pop32());
  /* 12a12f2b ret  */
  ESPCHK(0x12a12e70u, _esp0);
  ESP += 4; return;
  /* 12a12f2c jmp dword ptr [0x12a30244] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12a30244)))); return;
}

/* RtlUnwind @ 0x12a1307c (6 bytes, 1 insns) */
void f_12a1307c(void) {
  FTRACE(0x12a1307cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a1307c jmp dword ptr [0x12a30320] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12a30320)))); return;
}

