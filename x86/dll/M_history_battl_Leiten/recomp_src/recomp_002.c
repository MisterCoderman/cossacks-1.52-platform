#include "recomp.h"

/* __close_lk @ 0x1298f4b0 (170 bytes, 59 insns) */
void f_1298f4b0(void) {
  FTRACE(0x1298f4b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298f4b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1298f4b1 mov ebp, esp */
  EBP = (ESP);
  /* 1298f4b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1298f4b4 push esi */
  push32((uint32_t)(ESI));
  /* 1298f4b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298f4b8 push eax */
  push32((uint32_t)(EAX));
  /* 1298f4b9 call 0x1298be20 */
  push32(0x1298f4beu); f_1298be20();
  /* 1298f4be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f4c1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298f4c4 je 0x1298f503 */
  if (C.zf) goto L_1298f503;
  /* 1298f4c6 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298f4ca je 0x1298f4d2 */
  if (C.zf) goto L_1298f4d2;
  /* 1298f4cc cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298f4d0 jne 0x1298f4ec */
  if (!C.zf) goto L_1298f4ec;
L_1298f4d2:;
  /* 1298f4d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1298f4d4 call 0x1298be20 */
  push32(0x1298f4d9u); f_1298be20();
  /* 1298f4d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f4dc mov esi, eax */
  ESI = (EAX);
  /* 1298f4de push 2 */
  push32((uint32_t)(0x2u));
  /* 1298f4e0 call 0x1298be20 */
  push32(0x1298f4e5u); f_1298be20();
  /* 1298f4e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f4e8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298f4ea je 0x1298f503 */
  if (C.zf) goto L_1298f503;
L_1298f4ec:;
  /* 1298f4ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298f4ef push ecx */
  push32((uint32_t)(ECX));
  /* 1298f4f0 call 0x1298be20 */
  push32(0x1298f4f5u); f_1298be20();
  /* 1298f4f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f4f8 push eax */
  push32((uint32_t)(EAX));
  /* 1298f4f9 call dword ptr [0x129b0238] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0238))), 0x1298f4ffu);
  /* 1298f4ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298f501 je 0x1298f50c */
  if (C.zf) goto L_1298f50c;
L_1298f503:;
  /* 1298f503 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1298f50a jmp 0x1298f515 */
  goto L_1298f515;
L_1298f50c:;
  /* 1298f50c call dword ptr [0x129b0294] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0294))), 0x1298f512u);
  /* 1298f512 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1298f515:;
  /* 1298f515 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298f518 push edx */
  push32((uint32_t)(EDX));
  /* 1298f519 call 0x1298bd40 */
  push32(0x1298f51eu); f_1298bd40();
  /* 1298f51e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f521 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298f524 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1298f527 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298f52a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1298f52d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1298f530 mov edx, dword ptr [eax*4 + 0x129afe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x129afe60)));
  /* 1298f537 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 1298f53c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298f540 je 0x1298f553 */
  if (C.zf) goto L_1298f553;
  /* 1298f542 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298f545 push eax */
  push32((uint32_t)(EAX));
  /* 1298f546 call 0x1298a6e0 */
  push32(0x1298f54bu); f_1298a6e0();
  /* 1298f54b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f54e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1298f551 jmp 0x1298f555 */
  goto L_1298f555;
L_1298f553:;
  /* 1298f553 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1298f555:;
  /* 1298f555 pop esi */
  ESI = (pop32());
  /* 1298f556 mov esp, ebp */
  ESP = (EBP);
  /* 1298f558 pop ebp */
  EBP = (pop32());
  /* 1298f559 ret  */
  ESPCHK(0x1298f4b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f560 @ 0x1298f560 (146 bytes, 52 insns) */
void f_1298f560(void) {
  FTRACE(0x1298f560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298f560 push ebp */
  push32((uint32_t)(EBP));
  /* 1298f561 mov ebp, esp */
  EBP = (ESP);
  /* 1298f563 push ebx */
  push32((uint32_t)(EBX));
  /* 1298f564 push esi */
  push32((uint32_t)(ESI));
  /* 1298f565 push edi */
  push32((uint32_t)(EDI));
L_1298f566:;
  /* 1298f566 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298f56a jne 0x1298f58a */
  if (!C.zf) goto L_1298f58a;
  /* 1298f56c push 0x129a9fb8 */
  push32((uint32_t)(0x129a9fb8u));
  /* 1298f571 push 0 */
  push32((uint32_t)(0x0u));
  /* 1298f573 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1298f575 push 0x129aa680 */
  push32((uint32_t)(0x129aa680u));
  /* 1298f57a push 2 */
  push32((uint32_t)(0x2u));
  /* 1298f57c call 0x12981970 */
  push32(0x1298f581u); f_12981970();
  /* 1298f581 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f584 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298f587 jne 0x1298f58a */
  if (!C.zf) goto L_1298f58a;
  /* 1298f589 int3  */
  x86_unimpl("int3 @ 0x1298f589");
L_1298f58a:;
  /* 1298f58a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298f58c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298f58e jne 0x1298f566 */
  if (!C.zf) goto L_1298f566;
  /* 1298f590 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298f593 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1298f596 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 1298f59c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1298f59e je 0x1298f5ed */
  if (C.zf) goto L_1298f5ed;
  /* 1298f5a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298f5a3 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1298f5a6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1298f5a9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1298f5ab je 0x1298f5ed */
  if (C.zf) goto L_1298f5ed;
  /* 1298f5ad push 2 */
  push32((uint32_t)(0x2u));
  /* 1298f5af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298f5b2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1298f5b5 push eax */
  push32((uint32_t)(EAX));
  /* 1298f5b6 call 0x12983340 */
  push32(0x1298f5bbu); f_12983340();
  /* 1298f5bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f5be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298f5c1 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1298f5c4 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 1298f5ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298f5cd mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1298f5d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298f5d3 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 1298f5d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298f5dc mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 1298f5e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298f5e6 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_1298f5ed:;
  /* 1298f5ed pop edi */
  EDI = (pop32());
  /* 1298f5ee pop esi */
  ESI = (pop32());
  /* 1298f5ef pop ebx */
  EBX = (pop32());
  /* 1298f5f0 pop ebp */
  EBP = (pop32());
  /* 1298f5f1 ret  */
  ESPCHK(0x1298f560u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f600 @ 0x1298f600 (289 bytes, 97 insns) */
void f_1298f600(void) {
  FTRACE(0x1298f600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298f600 push ebp */
  push32((uint32_t)(EBP));
  /* 1298f601 mov ebp, esp */
  EBP = (ESP);
  /* 1298f603 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298f606 push esi */
  push32((uint32_t)(ESI));
  /* 1298f607 mov eax, dword ptr [0x129adc98] */
  EAX = (r32((uint32_t)(0x129adc98)));
  /* 1298f60c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1298f60f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1298f616 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1298f61d jmp 0x1298f628 */
  goto L_1298f628;
L_1298f61f:;
  /* 1298f61f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1298f622 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f625 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1298f628:;
  /* 1298f628 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298f62c jae 0x1298f661 */
  if (!C.cf) goto L_1298f661;
  /* 1298f62e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1298f631 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298f634 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1298f637 push ecx */
  push32((uint32_t)(ECX));
  /* 1298f638 call 0x129856e0 */
  push32(0x1298f63du); f_129856e0();
  /* 1298f63d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f640 mov esi, eax */
  ESI = (EAX);
  /* 1298f642 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1298f645 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298f648 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 1298f64c push ecx */
  push32((uint32_t)(ECX));
  /* 1298f64d call 0x129856e0 */
  push32(0x1298f652u); f_129856e0();
  /* 1298f652 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f655 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f658 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1298f65c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1298f65f jmp 0x1298f61f */
  goto L_1298f61f;
L_1298f661:;
  /* 1298f661 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298f664 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f667 push eax */
  push32((uint32_t)(EAX));
  /* 1298f668 call 0x12982890 */
  push32(0x1298f66du); f_12982890();
  /* 1298f66d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f670 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1298f673 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298f677 je 0x1298f719 */
  if (C.zf) goto L_1298f719;
  /* 1298f67d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298f680 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1298f683 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1298f68a jmp 0x1298f695 */
  goto L_1298f695;
L_1298f68c:;
  /* 1298f68c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1298f68f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f692 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1298f695:;
  /* 1298f695 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298f699 jae 0x1298f70a */
  if (!C.cf) goto L_1298f70a;
  /* 1298f69b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1298f69e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 1298f6a1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1298f6a4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f6a7 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1298f6aa mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1298f6ad mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298f6b0 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1298f6b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1298f6b4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1298f6b7 push edx */
  push32((uint32_t)(EDX));
  /* 1298f6b8 call 0x12985860 */
  push32(0x1298f6bdu); f_12985860();
  /* 1298f6bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f6c0 push eax */
  push32((uint32_t)(EAX));
  /* 1298f6c1 call 0x129856e0 */
  push32(0x1298f6c6u); f_129856e0();
  /* 1298f6c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f6c9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1298f6cc add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f6ce mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1298f6d1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1298f6d4 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 1298f6d7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1298f6da add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f6dd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1298f6e0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1298f6e3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298f6e6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 1298f6ea push eax */
  push32((uint32_t)(EAX));
  /* 1298f6eb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1298f6ee push ecx */
  push32((uint32_t)(ECX));
  /* 1298f6ef call 0x12985860 */
  push32(0x1298f6f4u); f_12985860();
  /* 1298f6f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f6f7 push eax */
  push32((uint32_t)(EAX));
  /* 1298f6f8 call 0x129856e0 */
  push32(0x1298f6fdu); f_129856e0();
  /* 1298f6fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f700 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1298f703 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f705 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1298f708 jmp 0x1298f68c */
  goto L_1298f68c;
L_1298f70a:;
  /* 1298f70a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1298f70d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1298f710 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1298f713 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f716 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1298f719:;
  /* 1298f719 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298f71c pop esi */
  ESI = (pop32());
  /* 1298f71d mov esp, ebp */
  ESP = (EBP);
  /* 1298f71f pop ebp */
  EBP = (pop32());
  /* 1298f720 ret  */
  ESPCHK(0x1298f600u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f730 @ 0x1298f730 (291 bytes, 97 insns) */
void f_1298f730(void) {
  FTRACE(0x1298f730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298f730 push ebp */
  push32((uint32_t)(EBP));
  /* 1298f731 mov ebp, esp */
  EBP = (ESP);
  /* 1298f733 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298f736 push esi */
  push32((uint32_t)(ESI));
  /* 1298f737 mov eax, dword ptr [0x129adc98] */
  EAX = (r32((uint32_t)(0x129adc98)));
  /* 1298f73c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1298f73f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1298f746 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1298f74d jmp 0x1298f758 */
  goto L_1298f758;
L_1298f74f:;
  /* 1298f74f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1298f752 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f755 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1298f758:;
  /* 1298f758 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298f75c jae 0x1298f792 */
  if (!C.cf) goto L_1298f792;
  /* 1298f75e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1298f761 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298f764 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 1298f768 push ecx */
  push32((uint32_t)(ECX));
  /* 1298f769 call 0x129856e0 */
  push32(0x1298f76eu); f_129856e0();
  /* 1298f76e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f771 mov esi, eax */
  ESI = (EAX);
  /* 1298f773 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1298f776 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298f779 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 1298f77d push ecx */
  push32((uint32_t)(ECX));
  /* 1298f77e call 0x129856e0 */
  push32(0x1298f783u); f_129856e0();
  /* 1298f783 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f786 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f789 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1298f78d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1298f790 jmp 0x1298f74f */
  goto L_1298f74f;
L_1298f792:;
  /* 1298f792 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298f795 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f798 push eax */
  push32((uint32_t)(EAX));
  /* 1298f799 call 0x12982890 */
  push32(0x1298f79eu); f_12982890();
  /* 1298f79e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f7a1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1298f7a4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298f7a8 je 0x1298f84b */
  if (C.zf) goto L_1298f84b;
  /* 1298f7ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298f7b1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1298f7b4 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1298f7bb jmp 0x1298f7c6 */
  goto L_1298f7c6;
L_1298f7bd:;
  /* 1298f7bd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1298f7c0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f7c3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1298f7c6:;
  /* 1298f7c6 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298f7ca jae 0x1298f83c */
  if (!C.cf) goto L_1298f83c;
  /* 1298f7cc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1298f7cf mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 1298f7d2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1298f7d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f7d8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1298f7db mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1298f7de mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298f7e1 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 1298f7e5 push ecx */
  push32((uint32_t)(ECX));
  /* 1298f7e6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1298f7e9 push edx */
  push32((uint32_t)(EDX));
  /* 1298f7ea call 0x12985860 */
  push32(0x1298f7efu); f_12985860();
  /* 1298f7ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f7f2 push eax */
  push32((uint32_t)(EAX));
  /* 1298f7f3 call 0x129856e0 */
  push32(0x1298f7f8u); f_129856e0();
  /* 1298f7f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f7fb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1298f7fe add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f800 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1298f803 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1298f806 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 1298f809 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1298f80c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f80f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1298f812 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1298f815 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298f818 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 1298f81c push eax */
  push32((uint32_t)(EAX));
  /* 1298f81d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1298f820 push ecx */
  push32((uint32_t)(ECX));
  /* 1298f821 call 0x12985860 */
  push32(0x1298f826u); f_12985860();
  /* 1298f826 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f829 push eax */
  push32((uint32_t)(EAX));
  /* 1298f82a call 0x129856e0 */
  push32(0x1298f82fu); f_129856e0();
  /* 1298f82f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f832 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1298f835 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f837 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1298f83a jmp 0x1298f7bd */
  goto L_1298f7bd;
L_1298f83c:;
  /* 1298f83c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1298f83f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1298f842 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1298f845 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f848 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1298f84b:;
  /* 1298f84b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298f84e pop esi */
  ESI = (pop32());
  /* 1298f84f mov esp, ebp */
  ESP = (EBP);
  /* 1298f851 pop ebp */
  EBP = (pop32());
  /* 1298f852 ret  */
  ESPCHK(0x1298f730u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f860 @ 0x1298f860 (878 bytes, 273 insns) */
void f_1298f860(void) {
  FTRACE(0x1298f860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298f860 push ebp */
  push32((uint32_t)(EBP));
  /* 1298f861 mov ebp, esp */
  EBP = (ESP);
  /* 1298f863 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298f866 push esi */
  push32((uint32_t)(ESI));
  /* 1298f867 mov eax, dword ptr [0x129adc98] */
  EAX = (r32((uint32_t)(0x129adc98)));
  /* 1298f86c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1298f86f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1298f876 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1298f87d jmp 0x1298f888 */
  goto L_1298f888;
L_1298f87f:;
  /* 1298f87f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1298f882 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f885 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1298f888:;
  /* 1298f888 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298f88c jae 0x1298f8c1 */
  if (!C.cf) goto L_1298f8c1;
  /* 1298f88e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1298f891 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298f894 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1298f897 push ecx */
  push32((uint32_t)(ECX));
  /* 1298f898 call 0x129856e0 */
  push32(0x1298f89du); f_129856e0();
  /* 1298f89d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f8a0 mov esi, eax */
  ESI = (EAX);
  /* 1298f8a2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1298f8a5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298f8a8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 1298f8ac push ecx */
  push32((uint32_t)(ECX));
  /* 1298f8ad call 0x129856e0 */
  push32(0x1298f8b2u); f_129856e0();
  /* 1298f8b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f8b5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f8b8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1298f8bc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1298f8bf jmp 0x1298f87f */
  goto L_1298f87f;
L_1298f8c1:;
  /* 1298f8c1 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1298f8c8 jmp 0x1298f8d3 */
  goto L_1298f8d3;
L_1298f8ca:;
  /* 1298f8ca mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1298f8cd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f8d0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1298f8d3:;
  /* 1298f8d3 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298f8d7 jae 0x1298f90d */
  if (!C.cf) goto L_1298f90d;
  /* 1298f8d9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1298f8dc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298f8df mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 1298f8e3 push eax */
  push32((uint32_t)(EAX));
  /* 1298f8e4 call 0x129856e0 */
  push32(0x1298f8e9u); f_129856e0();
  /* 1298f8e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f8ec mov esi, eax */
  ESI = (EAX);
  /* 1298f8ee mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1298f8f1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298f8f4 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 1298f8f8 push eax */
  push32((uint32_t)(EAX));
  /* 1298f8f9 call 0x129856e0 */
  push32(0x1298f8feu); f_129856e0();
  /* 1298f8fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f901 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f904 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1298f908 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1298f90b jmp 0x1298f8ca */
  goto L_1298f8ca;
L_1298f90d:;
  /* 1298f90d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298f910 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 1298f916 push eax */
  push32((uint32_t)(EAX));
  /* 1298f917 call 0x129856e0 */
  push32(0x1298f91cu); f_129856e0();
  /* 1298f91c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f91f mov esi, eax */
  ESI = (EAX);
  /* 1298f921 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298f924 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 1298f92a push edx */
  push32((uint32_t)(EDX));
  /* 1298f92b call 0x129856e0 */
  push32(0x1298f930u); f_129856e0();
  /* 1298f930 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f933 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f936 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1298f93a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1298f93d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298f940 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 1298f946 push edx */
  push32((uint32_t)(EDX));
  /* 1298f947 call 0x129856e0 */
  push32(0x1298f94cu); f_129856e0();
  /* 1298f94c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f94f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298f952 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1298f956 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1298f959 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298f95c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 1298f962 push ecx */
  push32((uint32_t)(ECX));
  /* 1298f963 call 0x129856e0 */
  push32(0x1298f968u); f_129856e0();
  /* 1298f968 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f96b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298f96e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1298f972 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1298f975 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298f978 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 1298f97e push edx */
  push32((uint32_t)(EDX));
  /* 1298f97f call 0x129856e0 */
  push32(0x1298f984u); f_129856e0();
  /* 1298f984 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f987 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298f98a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1298f98e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1298f991 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298f994 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f999 push eax */
  push32((uint32_t)(EAX));
  /* 1298f99a call 0x12982890 */
  push32(0x1298f99fu); f_12982890();
  /* 1298f99f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f9a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1298f9a5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298f9a9 je 0x1298fbc6 */
  if (C.zf) goto L_1298fbc6;
  /* 1298f9af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298f9b2 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1298f9b5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298f9b8 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f9be mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1298f9c1 push 0xac */
  push32((uint32_t)(0xacu));
  /* 1298f9c6 mov eax, dword ptr [0x129adc98] */
  EAX = (r32((uint32_t)(0x129adc98)));
  /* 1298f9cb push eax */
  push32((uint32_t)(EAX));
  /* 1298f9cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298f9cf push ecx */
  push32((uint32_t)(ECX));
  /* 1298f9d0 call 0x12989190 */
  push32(0x1298f9d5u); f_12989190();
  /* 1298f9d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f9d8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1298f9df jmp 0x1298f9ea */
  goto L_1298f9ea;
L_1298f9e1:;
  /* 1298f9e1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1298f9e4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f9e7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1298f9ea:;
  /* 1298f9ea cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298f9ee jae 0x1298fa5e */
  if (!C.cf) goto L_1298fa5e;
  /* 1298f9f0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1298f9f3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1298f9f6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1298f9f9 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 1298f9fc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1298f9ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298fa02 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1298fa05 push edx */
  push32((uint32_t)(EDX));
  /* 1298fa06 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1298fa09 push eax */
  push32((uint32_t)(EAX));
  /* 1298fa0a call 0x12985860 */
  push32(0x1298fa0fu); f_12985860();
  /* 1298fa0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298fa12 push eax */
  push32((uint32_t)(EAX));
  /* 1298fa13 call 0x129856e0 */
  push32(0x1298fa18u); f_129856e0();
  /* 1298fa18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298fa1b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1298fa1e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1298fa22 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1298fa25 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1298fa28 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1298fa2b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1298fa2e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 1298fa32 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1298fa35 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298fa38 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 1298fa3c push edx */
  push32((uint32_t)(EDX));
  /* 1298fa3d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1298fa40 push eax */
  push32((uint32_t)(EAX));
  /* 1298fa41 call 0x12985860 */
  push32(0x1298fa46u); f_12985860();
  /* 1298fa46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298fa49 push eax */
  push32((uint32_t)(EAX));
  /* 1298fa4a call 0x129856e0 */
  push32(0x1298fa4fu); f_129856e0();
  /* 1298fa4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298fa52 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1298fa55 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1298fa59 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1298fa5c jmp 0x1298f9e1 */
  goto L_1298f9e1;
L_1298fa5e:;
  /* 1298fa5e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1298fa65 jmp 0x1298fa70 */
  goto L_1298fa70;
L_1298fa67:;
  /* 1298fa67 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1298fa6a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298fa6d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1298fa70:;
  /* 1298fa70 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298fa74 jae 0x1298fae6 */
  if (!C.cf) goto L_1298fae6;
  /* 1298fa76 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1298fa79 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1298fa7c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1298fa7f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 1298fa83 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1298fa86 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298fa89 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 1298fa8d push eax */
  push32((uint32_t)(EAX));
  /* 1298fa8e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1298fa91 push ecx */
  push32((uint32_t)(ECX));
  /* 1298fa92 call 0x12985860 */
  push32(0x1298fa97u); f_12985860();
  /* 1298fa97 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298fa9a push eax */
  push32((uint32_t)(EAX));
  /* 1298fa9b call 0x129856e0 */
  push32(0x1298faa0u); f_129856e0();
  /* 1298faa0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298faa3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1298faa6 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1298faaa mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1298faad mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1298fab0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1298fab3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1298fab6 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 1298faba mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1298fabd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298fac0 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 1298fac4 push eax */
  push32((uint32_t)(EAX));
  /* 1298fac5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1298fac8 push ecx */
  push32((uint32_t)(ECX));
  /* 1298fac9 call 0x12985860 */
  push32(0x1298faceu); f_12985860();
  /* 1298face add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298fad1 push eax */
  push32((uint32_t)(EAX));
  /* 1298fad2 call 0x129856e0 */
  push32(0x1298fad7u); f_129856e0();
  /* 1298fad7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298fada mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1298fadd lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1298fae1 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1298fae4 jmp 0x1298fa67 */
  goto L_1298fa67;
L_1298fae6:;
  /* 1298fae6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1298fae9 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1298faec mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 1298faf2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298faf5 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 1298fafb push ecx */
  push32((uint32_t)(ECX));
  /* 1298fafc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1298faff push edx */
  push32((uint32_t)(EDX));
  /* 1298fb00 call 0x12985860 */
  push32(0x1298fb05u); f_12985860();
  /* 1298fb05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298fb08 push eax */
  push32((uint32_t)(EAX));
  /* 1298fb09 call 0x129856e0 */
  push32(0x1298fb0eu); f_129856e0();
  /* 1298fb0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298fb11 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1298fb14 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1298fb18 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1298fb1b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1298fb1e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1298fb21 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 1298fb27 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298fb2a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 1298fb30 push eax */
  push32((uint32_t)(EAX));
  /* 1298fb31 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1298fb34 push ecx */
  push32((uint32_t)(ECX));
  /* 1298fb35 call 0x12985860 */
  push32(0x1298fb3au); f_12985860();
  /* 1298fb3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298fb3d push eax */
  push32((uint32_t)(EAX));
  /* 1298fb3e call 0x129856e0 */
  push32(0x1298fb43u); f_129856e0();
  /* 1298fb43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298fb46 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1298fb49 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1298fb4d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1298fb50 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1298fb53 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1298fb56 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 1298fb5c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298fb5f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 1298fb65 push ecx */
  push32((uint32_t)(ECX));
  /* 1298fb66 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1298fb69 push edx */
  push32((uint32_t)(EDX));
  /* 1298fb6a call 0x12985860 */
  push32(0x1298fb6fu); f_12985860();
  /* 1298fb6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298fb72 push eax */
  push32((uint32_t)(EAX));
  /* 1298fb73 call 0x129856e0 */
  push32(0x1298fb78u); f_129856e0();
  /* 1298fb78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298fb7b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1298fb7e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1298fb82 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1298fb85 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1298fb88 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1298fb8b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 1298fb91 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298fb94 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 1298fb9a push eax */
  push32((uint32_t)(EAX));
  /* 1298fb9b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1298fb9e push ecx */
  push32((uint32_t)(ECX));
  /* 1298fb9f call 0x12985860 */
  push32(0x1298fba4u); f_12985860();
  /* 1298fba4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298fba7 push eax */
  push32((uint32_t)(EAX));
  /* 1298fba8 call 0x129856e0 */
  push32(0x1298fbadu); f_129856e0();
  /* 1298fbad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298fbb0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1298fbb3 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1298fbb7 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1298fbba mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1298fbbd mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1298fbc0 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_1298fbc6:;
  /* 1298fbc6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298fbc9 pop esi */
  ESI = (pop32());
  /* 1298fbca mov esp, ebp */
  ESP = (EBP);
  /* 1298fbcc pop ebp */
  EBP = (pop32());
  /* 1298fbcd ret  */
  ESPCHK(0x1298f860u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fbd0 @ 0x1298fbd0 (31 bytes, 15 insns) */
void f_1298fbd0(void) {
  FTRACE(0x1298fbd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298fbd0 push ebp */
  push32((uint32_t)(EBP));
  /* 1298fbd1 mov ebp, esp */
  EBP = (ESP);
  /* 1298fbd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1298fbd5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1298fbd8 push eax */
  push32((uint32_t)(EAX));
  /* 1298fbd9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298fbdc push ecx */
  push32((uint32_t)(ECX));
  /* 1298fbdd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298fbe0 push edx */
  push32((uint32_t)(EDX));
  /* 1298fbe1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298fbe4 push eax */
  push32((uint32_t)(EAX));
  /* 1298fbe5 call 0x1298fbf0 */
  push32(0x1298fbeau); f_1298fbf0();
  /* 1298fbea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298fbed pop ebp */
  EBP = (pop32());
  /* 1298fbee ret  */
  ESPCHK(0x1298fbd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fbf0 @ 0x1298fbf0 (393 bytes, 123 insns) */
void f_1298fbf0(void) {
  FTRACE(0x1298fbf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298fbf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1298fbf1 mov ebp, esp */
  EBP = (ESP);
  /* 1298fbf3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298fbf6 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298fbfa jne 0x1298fc06 */
  if (!C.zf) goto L_1298fc06;
  /* 1298fbfc mov eax, dword ptr [0x129adc98] */
  EAX = (r32((uint32_t)(0x129adc98)));
  /* 1298fc01 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1298fc04 jmp 0x1298fc0c */
  goto L_1298fc0c;
L_1298fc06:;
  /* 1298fc06 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1298fc09 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1298fc0c:;
  /* 1298fc0c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1298fc0f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1298fc12 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298fc15 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1298fc18 push 0x129ae814 */
  push32((uint32_t)(0x129ae814u));
  /* 1298fc1d call dword ptr [0x129b0268] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0268))), 0x1298fc23u);
  /* 1298fc23 cmp dword ptr [0x129ae804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298fc2a je 0x1298fc4a */
  if (C.zf) goto L_1298fc4a;
  /* 1298fc2c push 0x129ae814 */
  push32((uint32_t)(0x129ae814u));
  /* 1298fc31 call dword ptr [0x129b0258] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0258))), 0x1298fc37u);
  /* 1298fc37 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1298fc39 call 0x129862b0 */
  push32(0x1298fc3eu); f_129862b0();
  /* 1298fc3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298fc41 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1298fc48 jmp 0x1298fc51 */
  goto L_1298fc51;
L_1298fc4a:;
  /* 1298fc4a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1298fc51:;
  /* 1298fc51 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298fc55 jbe 0x1298fd42 */
  if ((C.cf||C.zf)) goto L_1298fd42;
  /* 1298fc5b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298fc5e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1298fc60 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 1298fc63 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1298fc67 je 0x1298fc71 */
  if (C.zf) goto L_1298fc71;
  /* 1298fc69 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1298fc6d je 0x1298fc76 */
  if (C.zf) goto L_1298fc76;
  /* 1298fc6f jmp 0x1298fcd0 */
  goto L_1298fcd0;
L_1298fc71:;
  /* 1298fc71 jmp 0x1298fd42 */
  goto L_1298fd42;
L_1298fc76:;
  /* 1298fc76 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298fc79 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298fc7c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1298fc7f mov dword ptr [0x129ae7f0], 0 */
  w32((uint32_t)(0x129ae7f0), (0x0u));
  /* 1298fc89 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298fc8c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1298fc8f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298fc92 jne 0x1298fca7 */
  if (!C.zf) goto L_1298fca7;
  /* 1298fc94 mov dword ptr [0x129ae7f0], 1 */
  w32((uint32_t)(0x129ae7f0), (0x1u));
  /* 1298fc9e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298fca1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298fca4 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_1298fca7:;
  /* 1298fca7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298fcaa push ecx */
  push32((uint32_t)(ECX));
  /* 1298fcab lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 1298fcae push edx */
  push32((uint32_t)(EDX));
  /* 1298fcaf lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1298fcb2 push eax */
  push32((uint32_t)(EAX));
  /* 1298fcb3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1298fcb6 push ecx */
  push32((uint32_t)(ECX));
  /* 1298fcb7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298fcba mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1298fcbc push eax */
  push32((uint32_t)(EAX));
  /* 1298fcbd call 0x1298fd80 */
  push32(0x1298fcc2u); f_1298fd80();
  /* 1298fcc2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298fcc5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298fcc8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298fccb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1298fcce jmp 0x1298fd3d */
  goto L_1298fd3d;
L_1298fcd0:;
  /* 1298fcd0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298fcd3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298fcd5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1298fcd7 mov ecx, dword ptr [0x129acc98] */
  ECX = (r32((uint32_t)(0x129acc98)));
  /* 1298fcdd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1298fcdf mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1298fce3 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1298fce9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1298fceb je 0x1298fd18 */
  if (C.zf) goto L_1298fd18;
  /* 1298fced cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298fcf1 jbe 0x1298fd18 */
  if ((C.cf||C.zf)) goto L_1298fd18;
  /* 1298fcf3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298fcf6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298fcf9 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1298fcfb mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1298fcfd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298fd00 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298fd03 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1298fd06 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298fd09 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298fd0c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1298fd0f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298fd12 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298fd15 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1298fd18:;
  /* 1298fd18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298fd1b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298fd1e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1298fd20 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1298fd22 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298fd25 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298fd28 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1298fd2b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298fd2e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298fd31 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1298fd34 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298fd37 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298fd3a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1298fd3d:;
  /* 1298fd3d jmp 0x1298fc51 */
  goto L_1298fc51;
L_1298fd42:;
  /* 1298fd42 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298fd46 je 0x1298fd54 */
  if (C.zf) goto L_1298fd54;
  /* 1298fd48 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1298fd4a call 0x12986350 */
  push32(0x1298fd4fu); f_12986350();
  /* 1298fd4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298fd52 jmp 0x1298fd5f */
  goto L_1298fd5f;
L_1298fd54:;
  /* 1298fd54 push 0x129ae814 */
  push32((uint32_t)(0x129ae814u));
  /* 1298fd59 call dword ptr [0x129b0258] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0258))), 0x1298fd5fu);
L_1298fd5f:;
  /* 1298fd5f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298fd63 jbe 0x1298fd73 */
  if ((C.cf||C.zf)) goto L_1298fd73;
  /* 1298fd65 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298fd68 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1298fd6b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298fd6e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298fd71 jmp 0x1298fd75 */
  goto L_1298fd75;
L_1298fd73:;
  /* 1298fd73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1298fd75:;
  /* 1298fd75 mov esp, ebp */
  ESP = (EBP);
  /* 1298fd77 pop ebp */
  EBP = (pop32());
  /* 1298fd78 ret  */
  ESPCHK(0x1298fbf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fd80 @ 0x1298fd80 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_1298fd80(void) {
  FTRACE(0x1298fd80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298fd80 push ebp */
  push32((uint32_t)(EBP));
  /* 1298fd81 mov ebp, esp */
  EBP = (ESP);
  /* 1298fd83 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298fd86 push esi */
  push32((uint32_t)(ESI));
  /* 1298fd87 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1298fd8b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1298fd8e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298fd91 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298fd94 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1298fd97 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298fd9b ja 0x129902e8 */
  if ((!C.cf&&!C.zf)) goto L_129902e8;
  /* 1298fda1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298fda4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1298fda6 mov dl, byte ptr [eax + 0x12990349] */
  DL = (r8((uint32_t)(EAX + 0x12990349)));
  /* 1298fdac jmp dword ptr [edx*4 + 0x129902ed] */
  switch (EDX) {
    case 0: goto L_129902c6;
    case 1: goto L_1298fdd5;
    case 2: goto L_1298fe1b;
    case 3: goto L_1298ff68;
    case 4: goto L_1298ff90;
    case 5: goto L_1299002f;
    case 6: goto L_1299009b;
    case 7: goto L_129900c4;
    case 8: goto L_12990105;
    case 9: goto L_129901e7;
    case 10: goto L_1299024e;
    case 11: goto L_1299029b;
    case 12: goto L_1298fdb3;
    case 13: goto L_1298fdf8;
    case 14: goto L_1298fe3e;
    case 15: goto L_1298ff3e;
    case 16: goto L_1298ffd5;
    case 17: goto L_12990002;
    case 18: goto L_12990057;
    case 19: goto L_129900db;
    case 20: goto L_12990189;
    case 21: goto L_12990218;
    case 22: goto L_129902e8;
    default: x86_unimpl("switch@0x1298fdac out of table"); return;
  }
L_1298fdb3:;
  /* 1298fdb3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1298fdb6 push ecx */
  push32((uint32_t)(ECX));
  /* 1298fdb7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298fdba push edx */
  push32((uint32_t)(EDX));
  /* 1298fdbb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298fdbe mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 1298fdc1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1298fdc4 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1298fdc7 push eax */
  push32((uint32_t)(EAX));
  /* 1298fdc8 call 0x129903a0 */
  push32(0x1298fdcdu); f_129903a0();
  /* 1298fdcd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298fdd0 jmp 0x129902e8 */
  goto L_129902e8;
L_1298fdd5:;
  /* 1298fdd5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1298fdd8 push ecx */
  push32((uint32_t)(ECX));
  /* 1298fdd9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298fddc push edx */
  push32((uint32_t)(EDX));
  /* 1298fddd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298fde0 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 1298fde3 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1298fde6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 1298fdea push eax */
  push32((uint32_t)(EAX));
  /* 1298fdeb call 0x129903a0 */
  push32(0x1298fdf0u); f_129903a0();
  /* 1298fdf0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298fdf3 jmp 0x129902e8 */
  goto L_129902e8;
L_1298fdf8:;
  /* 1298fdf8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1298fdfb push ecx */
  push32((uint32_t)(ECX));
  /* 1298fdfc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298fdff push edx */
  push32((uint32_t)(EDX));
  /* 1298fe00 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298fe03 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1298fe06 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1298fe09 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 1298fe0d push eax */
  push32((uint32_t)(EAX));
  /* 1298fe0e call 0x129903a0 */
  push32(0x1298fe13u); f_129903a0();
  /* 1298fe13 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298fe16 jmp 0x129902e8 */
  goto L_129902e8;
L_1298fe1b:;
  /* 1298fe1b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1298fe1e push ecx */
  push32((uint32_t)(ECX));
  /* 1298fe1f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298fe22 push edx */
  push32((uint32_t)(EDX));
  /* 1298fe23 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298fe26 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1298fe29 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1298fe2c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 1298fe30 push eax */
  push32((uint32_t)(EAX));
  /* 1298fe31 call 0x129903a0 */
  push32(0x1298fe36u); f_129903a0();
  /* 1298fe36 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298fe39 jmp 0x129902e8 */
  goto L_129902e8;
L_1298fe3e:;
  /* 1298fe3e cmp dword ptr [0x129ae7f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae7f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298fe45 je 0x1298fec6 */
  if (C.zf) goto L_1298fec6;
  /* 1298fe47 mov dword ptr [0x129ae7f0], 0 */
  w32((uint32_t)(0x129ae7f0), (0x0u));
  /* 1298fe51 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1298fe54 push ecx */
  push32((uint32_t)(ECX));
  /* 1298fe55 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1298fe58 push edx */
  push32((uint32_t)(EDX));
  /* 1298fe59 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298fe5c push eax */
  push32((uint32_t)(EAX));
  /* 1298fe5d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298fe60 push ecx */
  push32((uint32_t)(ECX));
  /* 1298fe61 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1298fe64 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 1298fe6a push eax */
  push32((uint32_t)(EAX));
  /* 1298fe6b call 0x12990550 */
  push32(0x1298fe70u); f_12990550();
  /* 1298fe70 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298fe73 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1298fe76 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298fe79 jne 0x1298fe80 */
  if (!C.zf) goto L_1298fe80;
  /* 1298fe7b jmp 0x129902e8 */
  goto L_129902e8;
L_1298fe80:;
  /* 1298fe80 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298fe83 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1298fe85 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 1298fe88 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298fe8b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1298fe8d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298fe90 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298fe93 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1298fe95 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1298fe98 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1298fe9a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298fe9d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1298fea0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1298fea2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1298fea5 push ecx */
  push32((uint32_t)(ECX));
  /* 1298fea6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1298fea9 push edx */
  push32((uint32_t)(EDX));
  /* 1298feaa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298fead push eax */
  push32((uint32_t)(EAX));
  /* 1298feae mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298feb1 push ecx */
  push32((uint32_t)(ECX));
  /* 1298feb2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1298feb5 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 1298febb push eax */
  push32((uint32_t)(EAX));
  /* 1298febc call 0x12990550 */
  push32(0x1298fec1u); f_12990550();
  /* 1298fec1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298fec4 jmp 0x1298ff39 */
  goto L_1298ff39;
L_1298fec6:;
  /* 1298fec6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1298fec9 push ecx */
  push32((uint32_t)(ECX));
  /* 1298feca mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1298fecd push edx */
  push32((uint32_t)(EDX));
  /* 1298fece mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298fed1 push eax */
  push32((uint32_t)(EAX));
  /* 1298fed2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298fed5 push ecx */
  push32((uint32_t)(ECX));
  /* 1298fed6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1298fed9 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 1298fedf push eax */
  push32((uint32_t)(EAX));
  /* 1298fee0 call 0x12990550 */
  push32(0x1298fee5u); f_12990550();
  /* 1298fee5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298fee8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1298feeb cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298feee jne 0x1298fef5 */
  if (!C.zf) goto L_1298fef5;
  /* 1298fef0 jmp 0x129902e8 */
  goto L_129902e8;
L_1298fef5:;
  /* 1298fef5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298fef8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1298fefa mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 1298fefd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298ff00 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1298ff02 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298ff05 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298ff08 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1298ff0a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1298ff0d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1298ff0f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298ff12 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1298ff15 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1298ff17 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1298ff1a push ecx */
  push32((uint32_t)(ECX));
  /* 1298ff1b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1298ff1e push edx */
  push32((uint32_t)(EDX));
  /* 1298ff1f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298ff22 push eax */
  push32((uint32_t)(EAX));
  /* 1298ff23 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298ff26 push ecx */
  push32((uint32_t)(ECX));
  /* 1298ff27 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1298ff2a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 1298ff30 push eax */
  push32((uint32_t)(EAX));
  /* 1298ff31 call 0x12990550 */
  push32(0x1298ff36u); f_12990550();
  /* 1298ff36 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1298ff39:;
  /* 1298ff39 jmp 0x129902e8 */
  goto L_129902e8;
L_1298ff3e:;
  /* 1298ff3e mov ecx, dword ptr [0x129ae7f0] */
  ECX = (r32((uint32_t)(0x129ae7f0)));
  /* 1298ff44 mov dword ptr [0x129ae800], ecx */
  w32((uint32_t)(0x129ae800), (ECX));
  /* 1298ff4a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1298ff4d push edx */
  push32((uint32_t)(EDX));
  /* 1298ff4e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298ff51 push eax */
  push32((uint32_t)(EAX));
  /* 1298ff52 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298ff54 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298ff57 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1298ff5a push edx */
  push32((uint32_t)(EDX));
  /* 1298ff5b call 0x129903f0 */
  push32(0x1298ff60u); f_129903f0();
  /* 1298ff60 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298ff63 jmp 0x129902e8 */
  goto L_129902e8;
L_1298ff68:;
  /* 1298ff68 mov eax, dword ptr [0x129ae7f0] */
  EAX = (r32((uint32_t)(0x129ae7f0)));
  /* 1298ff6d mov dword ptr [0x129ae800], eax */
  w32((uint32_t)(0x129ae800), (EAX));
  /* 1298ff72 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1298ff75 push ecx */
  push32((uint32_t)(ECX));
  /* 1298ff76 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298ff79 push edx */
  push32((uint32_t)(EDX));
  /* 1298ff7a push 2 */
  push32((uint32_t)(0x2u));
  /* 1298ff7c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298ff7f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1298ff82 push ecx */
  push32((uint32_t)(ECX));
  /* 1298ff83 call 0x129903f0 */
  push32(0x1298ff88u); f_129903f0();
  /* 1298ff88 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298ff8b jmp 0x129902e8 */
  goto L_129902e8;
L_1298ff90:;
  /* 1298ff90 mov edx, dword ptr [0x129ae7f0] */
  EDX = (r32((uint32_t)(0x129ae7f0)));
  /* 1298ff96 mov dword ptr [0x129ae800], edx */
  w32((uint32_t)(0x129ae800), (EDX));
  /* 1298ff9c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298ff9f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 1298ffa2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1298ffa3 mov ecx, 0xc */
  ECX = (0xcu);
  /* 1298ffa8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1298ffaa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1298ffad cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298ffb1 jne 0x1298ffba */
  if (!C.zf) goto L_1298ffba;
  /* 1298ffb3 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_1298ffba:;
  /* 1298ffba mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1298ffbd push edx */
  push32((uint32_t)(EDX));
  /* 1298ffbe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298ffc1 push eax */
  push32((uint32_t)(EAX));
  /* 1298ffc2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298ffc4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298ffc7 push ecx */
  push32((uint32_t)(ECX));
  /* 1298ffc8 call 0x129903f0 */
  push32(0x1298ffcdu); f_129903f0();
  /* 1298ffcd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298ffd0 jmp 0x129902e8 */
  goto L_129902e8;
L_1298ffd5:;
  /* 1298ffd5 mov edx, dword ptr [0x129ae7f0] */
  EDX = (r32((uint32_t)(0x129ae7f0)));
  /* 1298ffdb mov dword ptr [0x129ae800], edx */
  w32((uint32_t)(0x129ae800), (EDX));
  /* 1298ffe1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1298ffe4 push eax */
  push32((uint32_t)(EAX));
  /* 1298ffe5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298ffe8 push ecx */
  push32((uint32_t)(ECX));
  /* 1298ffe9 push 3 */
  push32((uint32_t)(0x3u));
  /* 1298ffeb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298ffee mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1298fff1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298fff4 push eax */
  push32((uint32_t)(EAX));
  /* 1298fff5 call 0x129903f0 */
  push32(0x1298fffau); f_129903f0();
  /* 1298fffa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298fffd jmp 0x129902e8 */
  goto L_129902e8;
L_12990002:;
  /* 12990002 mov ecx, dword ptr [0x129ae7f0] */
  ECX = (r32((uint32_t)(0x129ae7f0)));
  /* 12990008 mov dword ptr [0x129ae800], ecx */
  w32((uint32_t)(0x129ae800), (ECX));
  /* 1299000e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12990011 push edx */
  push32((uint32_t)(EDX));
  /* 12990012 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12990015 push eax */
  push32((uint32_t)(EAX));
  /* 12990016 push 2 */
  push32((uint32_t)(0x2u));
  /* 12990018 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1299001b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1299001e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12990021 push edx */
  push32((uint32_t)(EDX));
  /* 12990022 call 0x129903f0 */
  push32(0x12990027u); f_129903f0();
  /* 12990027 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1299002a jmp 0x129902e8 */
  goto L_129902e8;
L_1299002f:;
  /* 1299002f mov eax, dword ptr [0x129ae7f0] */
  EAX = (r32((uint32_t)(0x129ae7f0)));
  /* 12990034 mov dword ptr [0x129ae800], eax */
  w32((uint32_t)(0x129ae800), (EAX));
  /* 12990039 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1299003c push ecx */
  push32((uint32_t)(ECX));
  /* 1299003d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12990040 push edx */
  push32((uint32_t)(EDX));
  /* 12990041 push 2 */
  push32((uint32_t)(0x2u));
  /* 12990043 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12990046 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12990049 push ecx */
  push32((uint32_t)(ECX));
  /* 1299004a call 0x129903f0 */
  push32(0x1299004fu); f_129903f0();
  /* 1299004f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12990052 jmp 0x129902e8 */
  goto L_129902e8;
L_12990057:;
  /* 12990057 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1299005a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1299005e jg 0x1299007c */
  if ((!C.zf&&C.sf==C.of)) goto L_1299007c;
  /* 12990060 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12990063 push eax */
  push32((uint32_t)(EAX));
  /* 12990064 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12990067 push ecx */
  push32((uint32_t)(ECX));
  /* 12990068 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1299006b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12990071 push eax */
  push32((uint32_t)(EAX));
  /* 12990072 call 0x129903a0 */
  push32(0x12990077u); f_129903a0();
  /* 12990077 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1299007a jmp 0x12990096 */
  goto L_12990096;
L_1299007c:;
  /* 1299007c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1299007f push ecx */
  push32((uint32_t)(ECX));
  /* 12990080 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12990083 push edx */
  push32((uint32_t)(EDX));
  /* 12990084 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12990087 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 1299008d push ecx */
  push32((uint32_t)(ECX));
  /* 1299008e call 0x129903a0 */
  push32(0x12990093u); f_129903a0();
  /* 12990093 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12990096:;
  /* 12990096 jmp 0x129902e8 */
  goto L_129902e8;
L_1299009b:;
  /* 1299009b mov edx, dword ptr [0x129ae7f0] */
  EDX = (r32((uint32_t)(0x129ae7f0)));
  /* 129900a1 mov dword ptr [0x129ae800], edx */
  w32((uint32_t)(0x129ae800), (EDX));
  /* 129900a7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129900aa push eax */
  push32((uint32_t)(EAX));
  /* 129900ab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129900ae push ecx */
  push32((uint32_t)(ECX));
  /* 129900af push 2 */
  push32((uint32_t)(0x2u));
  /* 129900b1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129900b4 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129900b6 push eax */
  push32((uint32_t)(EAX));
  /* 129900b7 call 0x129903f0 */
  push32(0x129900bcu); f_129903f0();
  /* 129900bc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129900bf jmp 0x129902e8 */
  goto L_129902e8;
L_129900c4:;
  /* 129900c4 mov ecx, dword ptr [0x129ae7f0] */
  ECX = (r32((uint32_t)(0x129ae7f0)));
  /* 129900ca mov dword ptr [0x129ae800], ecx */
  w32((uint32_t)(0x129ae800), (ECX));
  /* 129900d0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129900d3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 129900d6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129900d9 jmp 0x1299012d */
  goto L_1299012d;
L_129900db:;
  /* 129900db mov ecx, dword ptr [0x129ae7f0] */
  ECX = (r32((uint32_t)(0x129ae7f0)));
  /* 129900e1 mov dword ptr [0x129ae800], ecx */
  w32((uint32_t)(0x129ae800), (ECX));
  /* 129900e7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 129900ea push edx */
  push32((uint32_t)(EDX));
  /* 129900eb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129900ee push eax */
  push32((uint32_t)(EAX));
  /* 129900ef push 1 */
  push32((uint32_t)(0x1u));
  /* 129900f1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129900f4 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 129900f7 push edx */
  push32((uint32_t)(EDX));
  /* 129900f8 call 0x129903f0 */
  push32(0x129900fdu); f_129903f0();
  /* 129900fd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12990100 jmp 0x129902e8 */
  goto L_129902e8;
L_12990105:;
  /* 12990105 mov eax, dword ptr [0x129ae7f0] */
  EAX = (r32((uint32_t)(0x129ae7f0)));
  /* 1299010a mov dword ptr [0x129ae800], eax */
  w32((uint32_t)(0x129ae800), (EAX));
  /* 1299010f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12990112 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12990116 jne 0x12990121 */
  if (!C.zf) goto L_12990121;
  /* 12990118 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 1299011f jmp 0x1299012d */
  goto L_1299012d;
L_12990121:;
  /* 12990121 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12990124 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12990127 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1299012a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1299012d:;
  /* 1299012d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12990130 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12990133 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12990136 jge 0x12990141 */
  if ((C.sf==C.of)) goto L_12990141;
  /* 12990138 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1299013f jmp 0x1299016e */
  goto L_1299016e;
L_12990141:;
  /* 12990141 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12990144 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12990147 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12990148 mov ecx, 7 */
  ECX = (0x7u);
  /* 1299014d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1299014f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12990152 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12990155 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12990158 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12990159 mov ecx, 7 */
  ECX = (0x7u);
  /* 1299015e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12990160 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12990163 jl 0x1299016e */
  if ((C.sf!=C.of)) goto L_1299016e;
  /* 12990165 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12990168 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1299016b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1299016e:;
  /* 1299016e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12990171 push eax */
  push32((uint32_t)(EAX));
  /* 12990172 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12990175 push ecx */
  push32((uint32_t)(ECX));
  /* 12990176 push 2 */
  push32((uint32_t)(0x2u));
  /* 12990178 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1299017b push edx */
  push32((uint32_t)(EDX));
  /* 1299017c call 0x129903f0 */
  push32(0x12990181u); f_129903f0();
  /* 12990181 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12990184 jmp 0x129902e8 */
  goto L_129902e8;
L_12990189:;
  /* 12990189 cmp dword ptr [0x129ae7f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae7f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12990190 je 0x129901c0 */
  if (C.zf) goto L_129901c0;
  /* 12990192 mov dword ptr [0x129ae7f0], 0 */
  w32((uint32_t)(0x129ae7f0), (0x0u));
  /* 1299019c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1299019f push eax */
  push32((uint32_t)(EAX));
  /* 129901a0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129901a3 push ecx */
  push32((uint32_t)(ECX));
  /* 129901a4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129901a7 push edx */
  push32((uint32_t)(EDX));
  /* 129901a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129901ab push eax */
  push32((uint32_t)(EAX));
  /* 129901ac mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 129901af mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 129901b5 push edx */
  push32((uint32_t)(EDX));
  /* 129901b6 call 0x12990550 */
  push32(0x129901bbu); f_12990550();
  /* 129901bb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129901be jmp 0x129901e2 */
  goto L_129901e2;
L_129901c0:;
  /* 129901c0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 129901c3 push eax */
  push32((uint32_t)(EAX));
  /* 129901c4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129901c7 push ecx */
  push32((uint32_t)(ECX));
  /* 129901c8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129901cb push edx */
  push32((uint32_t)(EDX));
  /* 129901cc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129901cf push eax */
  push32((uint32_t)(EAX));
  /* 129901d0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 129901d3 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 129901d9 push edx */
  push32((uint32_t)(EDX));
  /* 129901da call 0x12990550 */
  push32(0x129901dfu); f_12990550();
  /* 129901df add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129901e2:;
  /* 129901e2 jmp 0x129902e8 */
  goto L_129902e8;
L_129901e7:;
  /* 129901e7 mov dword ptr [0x129ae7f0], 0 */
  w32((uint32_t)(0x129ae7f0), (0x0u));
  /* 129901f1 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 129901f4 push eax */
  push32((uint32_t)(EAX));
  /* 129901f5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129901f8 push ecx */
  push32((uint32_t)(ECX));
  /* 129901f9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129901fc push edx */
  push32((uint32_t)(EDX));
  /* 129901fd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12990200 push eax */
  push32((uint32_t)(EAX));
  /* 12990201 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12990204 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 1299020a push edx */
  push32((uint32_t)(EDX));
  /* 1299020b call 0x12990550 */
  push32(0x12990210u); f_12990550();
  /* 12990210 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12990213 jmp 0x129902e8 */
  goto L_129902e8;
L_12990218:;
  /* 12990218 mov eax, dword ptr [0x129ae7f0] */
  EAX = (r32((uint32_t)(0x129ae7f0)));
  /* 1299021d mov dword ptr [0x129ae800], eax */
  w32((uint32_t)(0x129ae800), (EAX));
  /* 12990222 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12990225 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12990228 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12990229 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 1299022e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12990230 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12990233 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12990236 push edx */
  push32((uint32_t)(EDX));
  /* 12990237 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1299023a push eax */
  push32((uint32_t)(EAX));
  /* 1299023b push 2 */
  push32((uint32_t)(0x2u));
  /* 1299023d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12990240 push ecx */
  push32((uint32_t)(ECX));
  /* 12990241 call 0x129903f0 */
  push32(0x12990246u); f_129903f0();
  /* 12990246 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12990249 jmp 0x129902e8 */
  goto L_129902e8;
L_1299024e:;
  /* 1299024e mov edx, dword ptr [0x129ae7f0] */
  EDX = (r32((uint32_t)(0x129ae7f0)));
  /* 12990254 mov dword ptr [0x129ae800], edx */
  w32((uint32_t)(0x129ae800), (EDX));
  /* 1299025a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1299025d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 12990260 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12990261 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 12990266 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12990268 mov ecx, eax */
  ECX = (EAX);
  /* 1299026a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1299026d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12990270 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12990273 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12990276 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12990277 mov esi, 0x64 */
  ESI = (0x64u);
  /* 1299027c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1299027e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12990280 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12990283 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12990286 push eax */
  push32((uint32_t)(EAX));
  /* 12990287 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1299028a push ecx */
  push32((uint32_t)(ECX));
  /* 1299028b push 4 */
  push32((uint32_t)(0x4u));
  /* 1299028d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12990290 push edx */
  push32((uint32_t)(EDX));
  /* 12990291 call 0x129903f0 */
  push32(0x12990296u); f_129903f0();
  /* 12990296 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12990299 jmp 0x129902e8 */
  goto L_129902e8;
L_1299029b:;
  /* 1299029b call 0x129913b0 */
  push32(0x129902a0u); f_129913b0();
  /* 129902a0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129902a3 push eax */
  push32((uint32_t)(EAX));
  /* 129902a4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129902a7 push ecx */
  push32((uint32_t)(ECX));
  /* 129902a8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129902ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129902ad cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129902b1 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 129902b4 mov ecx, dword ptr [eax*4 + 0x129ade1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x129ade1c)));
  /* 129902bb push ecx */
  push32((uint32_t)(ECX));
  /* 129902bc call 0x129903a0 */
  push32(0x129902c1u); f_129903a0();
  /* 129902c1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129902c4 jmp 0x129902e8 */
  goto L_129902e8;
L_129902c6:;
  /* 129902c6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129902c9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129902cb mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 129902ce mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129902d1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129902d3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129902d6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129902d9 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 129902db mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129902de mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129902e0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129902e3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129902e6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_129902e8:;
  /* 129902e8 pop esi */
  ESI = (pop32());
  /* 129902e9 mov esp, ebp */
  ESP = (EBP);
  /* 129902eb pop ebp */
  EBP = (pop32());
  /* 129902ec ret  */
  ESPCHK(0x1298fd80u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x129903a0 (72 bytes, 30 insns) */
void f_129903a0(void) {
  FTRACE(0x129903a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129903a0 push ebp */
  push32((uint32_t)(EBP));
  /* 129903a1 mov ebp, esp */
  EBP = (ESP);
L_129903a3:;
  /* 129903a3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129903a6 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129903a9 je 0x129903e6 */
  if (C.zf) goto L_129903e6;
  /* 129903ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129903ae movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 129903b1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129903b3 je 0x129903e6 */
  if (C.zf) goto L_129903e6;
  /* 129903b5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129903b8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129903ba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129903bd mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 129903bf mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 129903c1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129903c4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129903c6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129903c9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129903cc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 129903ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129903d1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129903d4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 129903d7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129903da mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129903dc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129903df mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129903e2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 129903e4 jmp 0x129903a3 */
  goto L_129903a3;
L_129903e6:;
  /* 129903e6 pop ebp */
  EBP = (pop32());
  /* 129903e7 ret  */
  ESPCHK(0x129903a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100103f0 @ 0x129903f0 (173 bytes, 64 insns) */
void f_129903f0(void) {
  FTRACE(0x129903f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129903f0 push ebp */
  push32((uint32_t)(EBP));
  /* 129903f1 mov ebp, esp */
  EBP = (ESP);
  /* 129903f3 push ecx */
  push32((uint32_t)(ECX));
  /* 129903f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 129903fb cmp dword ptr [0x129ae800], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae800))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12990402 je 0x1299041a */
  if (C.zf) goto L_1299041a;
  /* 12990404 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12990407 push eax */
  push32((uint32_t)(EAX));
  /* 12990408 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1299040b push ecx */
  push32((uint32_t)(ECX));
  /* 1299040c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1299040f push edx */
  push32((uint32_t)(EDX));
  /* 12990410 call 0x129904a0 */
  push32(0x12990415u); f_129904a0();
  /* 12990415 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12990418 jmp 0x12990499 */
  goto L_12990499;
L_1299041a:;
  /* 1299041a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1299041d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12990420 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12990422 jae 0x12990490 */
  if (!C.cf) goto L_12990490;
  /* 12990424 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12990427 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1299042a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1299042d jmp 0x12990438 */
  goto L_12990438;
L_1299042f:;
  /* 1299042f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12990432 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12990435 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_12990438:;
  /* 12990438 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1299043b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1299043e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12990440 je 0x12990474 */
  if (C.zf) goto L_12990474;
  /* 12990442 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12990445 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12990446 mov ecx, 0xa */
  ECX = (0xau);
  /* 1299044b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1299044d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12990450 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12990453 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12990455 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12990458 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 1299045b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1299045e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1299045f mov ecx, 0xa */
  ECX = (0xau);
  /* 12990464 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12990466 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12990469 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1299046c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1299046f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12990472 jmp 0x1299042f */
  goto L_1299042f;
L_12990474:;
  /* 12990474 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12990477 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12990479 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1299047c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1299047f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12990481 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12990484 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12990486 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12990489 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1299048c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1299048e jmp 0x12990499 */
  goto L_12990499;
L_12990490:;
  /* 12990490 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12990493 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12990499:;
  /* 12990499 mov esp, ebp */
  ESP = (EBP);
  /* 1299049b pop ebp */
  EBP = (pop32());
  /* 1299049c ret  */
  ESPCHK(0x129903f0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x129904a0 (172 bytes, 65 insns) */
void f_129904a0(void) {
  FTRACE(0x129904a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129904a0 push ebp */
  push32((uint32_t)(EBP));
  /* 129904a1 mov ebp, esp */
  EBP = (ESP);
  /* 129904a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129904a6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129904a9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129904ab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 129904ae mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129904b1 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129904b4 jbe 0x129904fb */
  if ((C.cf||C.zf)) goto L_129904fb;
L_129904b6:;
  /* 129904b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129904b9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 129904ba mov ecx, 0xa */
  ECX = (0xau);
  /* 129904bf idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 129904c1 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129904c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129904c7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 129904c9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129904cc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129904cf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 129904d2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129904d5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129904d7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129904da mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129904dd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 129904df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129904e2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 129904e3 mov ecx, 0xa */
  ECX = (0xau);
  /* 129904e8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 129904ea mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 129904ed cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129904f1 jle 0x129904fb */
  if ((C.zf||C.sf!=C.of)) goto L_129904fb;
  /* 129904f3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129904f6 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129904f9 ja 0x129904b6 */
  if ((!C.cf&&!C.zf)) goto L_129904b6;
L_129904fb:;
  /* 129904fb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129904fe mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12990500 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12990503 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12990506 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12990509 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1299050b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1299050e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12990511 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12990514:;
  /* 12990514 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12990517 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12990519 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1299051c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1299051f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12990522 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12990524 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12990526 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12990529 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1299052c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1299052f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12990532 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12990535 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12990537 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1299053a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1299053d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12990540 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12990543 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12990546 jb 0x12990514 */
  if (C.cf) goto L_12990514;
  /* 12990548 mov esp, ebp */
  ESP = (EBP);
  /* 1299054a pop ebp */
  EBP = (pop32());
  /* 1299054b ret  */
  ESPCHK(0x129904a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010550 @ 0x12990550 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_12990550(void) {
  FTRACE(0x12990550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12990550 push ebp */
  push32((uint32_t)(EBP));
  /* 12990551 mov ebp, esp */
  EBP = (ESP);
  /* 12990553 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_12990556:;
  /* 12990556 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12990559 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1299055c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1299055e je 0x129909cc */
  if (C.zf) goto L_129909cc;
  /* 12990564 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12990567 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1299056a je 0x129909cc */
  if (C.zf) goto L_129909cc;
  /* 12990570 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 12990574 mov dword ptr [0x129ae800], 0 */
  w32((uint32_t)(0x129ae800), (0x0u));
  /* 1299057e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12990585 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12990588 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1299058b jmp 0x12990596 */
  goto L_12990596;
L_1299058d:;
  /* 1299058d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12990590 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12990593 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12990596:;
  /* 12990596 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12990599 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1299059c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1299059f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 129905a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129905a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129905a8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 129905ab cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129905ad jne 0x129905b1 */
  if (!C.zf) goto L_129905b1;
  /* 129905af jmp 0x1299058d */
  goto L_1299058d;
L_129905b1:;
  /* 129905b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129905b4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129905b7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 129905ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129905bd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 129905c0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 129905c3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129905c6 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129905c9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 129905cc cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129905d0 ja 0x12990920 */
  if ((!C.cf&&!C.zf)) goto L_12990920;
  /* 129905d6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 129905d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129905db mov al, byte ptr [ecx + 0x129909fc] */
  AL = (r8((uint32_t)(ECX + 0x129909fc)));
  /* 129905e1 jmp dword ptr [eax*4 + 0x129909d0] */
  switch (EAX) {
    case 0: goto L_1299083f;
    case 1: goto L_12990723;
    case 2: goto L_129906ae;
    case 3: goto L_129905e8;
    case 4: goto L_12990626;
    case 5: goto L_12990687;
    case 6: goto L_129906d5;
    case 7: goto L_129906fc;
    case 8: goto L_1299076a;
    case 9: goto L_12990664;
    case 10: goto L_12990920;
    default: x86_unimpl("switch@0x129905e1 out of table"); return;
  }
L_129905e8:;
  /* 129905e8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129905eb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 129905ee mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129905f1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129905f4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 129905f7 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129905fb ja 0x12990621 */
  if ((!C.cf&&!C.zf)) goto L_12990621;
  /* 129905fd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12990600 jmp dword ptr [ecx*4 + 0x12990a4f] */
  switch (ECX) {
    case 0: goto L_12990607;
    case 1: goto L_12990611;
    case 2: goto L_12990617;
    case 3: goto L_1299061d;
    case 4: goto L_12990645;
    case 5: goto L_1299064f;
    case 6: goto L_12990655;
    case 7: goto L_1299065b;
    default: x86_unimpl("switch@0x12990600 out of table"); return;
  }
L_12990607:;
  /* 12990607 mov dword ptr [0x129ae800], 1 */
  w32((uint32_t)(0x129ae800), (0x1u));
L_12990611:;
  /* 12990611 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 12990615 jmp 0x12990621 */
  goto L_12990621;
L_12990617:;
  /* 12990617 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 1299061b jmp 0x12990621 */
  goto L_12990621;
L_1299061d:;
  /* 1299061d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_12990621:;
  /* 12990621 jmp 0x12990920 */
  goto L_12990920;
L_12990626:;
  /* 12990626 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12990629 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1299062c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1299062f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12990632 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12990635 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12990639 ja 0x1299065f */
  if ((!C.cf&&!C.zf)) goto L_1299065f;
  /* 1299063b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1299063e jmp dword ptr [ecx*4 + 0x12990a5f] */
  switch (ECX) {
    case 0: goto L_12990645;
    case 1: goto L_1299064f;
    case 2: goto L_12990655;
    case 3: goto L_1299065b;
    default: x86_unimpl("switch@0x1299063e out of table"); return;
  }
L_12990645:;
  /* 12990645 mov dword ptr [0x129ae800], 1 */
  w32((uint32_t)(0x129ae800), (0x1u));
L_1299064f:;
  /* 1299064f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 12990653 jmp 0x1299065f */
  goto L_1299065f;
L_12990655:;
  /* 12990655 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 12990659 jmp 0x1299065f */
  goto L_1299065f;
L_1299065b:;
  /* 1299065b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_1299065f:;
  /* 1299065f jmp 0x12990920 */
  goto L_12990920;
L_12990664:;
  /* 12990664 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12990667 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1299066a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1299066e je 0x12990678 */
  if (C.zf) goto L_12990678;
  /* 12990670 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12990674 je 0x1299067e */
  if (C.zf) goto L_1299067e;
  /* 12990676 jmp 0x12990682 */
  goto L_12990682;
L_12990678:;
  /* 12990678 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 1299067c jmp 0x12990682 */
  goto L_12990682;
L_1299067e:;
  /* 1299067e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_12990682:;
  /* 12990682 jmp 0x12990920 */
  goto L_12990920;
L_12990687:;
  /* 12990687 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1299068a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1299068d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12990691 je 0x1299069b */
  if (C.zf) goto L_1299069b;
  /* 12990693 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12990697 je 0x129906a5 */
  if (C.zf) goto L_129906a5;
  /* 12990699 jmp 0x129906a9 */
  goto L_129906a9;
L_1299069b:;
  /* 1299069b mov dword ptr [0x129ae800], 1 */
  w32((uint32_t)(0x129ae800), (0x1u));
L_129906a5:;
  /* 129906a5 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_129906a9:;
  /* 129906a9 jmp 0x12990920 */
  goto L_12990920;
L_129906ae:;
  /* 129906ae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129906b1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 129906b4 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129906b8 je 0x129906c2 */
  if (C.zf) goto L_129906c2;
  /* 129906ba cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129906be je 0x129906cc */
  if (C.zf) goto L_129906cc;
  /* 129906c0 jmp 0x129906d0 */
  goto L_129906d0;
L_129906c2:;
  /* 129906c2 mov dword ptr [0x129ae800], 1 */
  w32((uint32_t)(0x129ae800), (0x1u));
L_129906cc:;
  /* 129906cc mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_129906d0:;
  /* 129906d0 jmp 0x12990920 */
  goto L_12990920;
L_129906d5:;
  /* 129906d5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129906d8 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 129906db cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129906df je 0x129906e9 */
  if (C.zf) goto L_129906e9;
  /* 129906e1 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129906e5 je 0x129906f3 */
  if (C.zf) goto L_129906f3;
  /* 129906e7 jmp 0x129906f7 */
  goto L_129906f7;
L_129906e9:;
  /* 129906e9 mov dword ptr [0x129ae800], 1 */
  w32((uint32_t)(0x129ae800), (0x1u));
L_129906f3:;
  /* 129906f3 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_129906f7:;
  /* 129906f7 jmp 0x12990920 */
  goto L_12990920;
L_129906fc:;
  /* 129906fc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129906ff mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12990702 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12990706 je 0x12990710 */
  if (C.zf) goto L_12990710;
  /* 12990708 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1299070c je 0x1299071a */
  if (C.zf) goto L_1299071a;
  /* 1299070e jmp 0x1299071e */
  goto L_1299071e;
L_12990710:;
  /* 12990710 mov dword ptr [0x129ae800], 1 */
  w32((uint32_t)(0x129ae800), (0x1u));
L_1299071a:;
  /* 1299071a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_1299071e:;
  /* 1299071e jmp 0x12990920 */
  goto L_12990920;
L_12990723:;
  /* 12990723 push 0x129aa7b4 */
  push32((uint32_t)(0x129aa7b4u));
  /* 12990728 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1299072b push ecx */
  push32((uint32_t)(ECX));
  /* 1299072c call 0x12990f80 */
  push32(0x12990731u); f_12990f80();
  /* 12990731 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12990734 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12990736 jne 0x12990743 */
  if (!C.zf) goto L_12990743;
  /* 12990738 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1299073b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1299073e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12990741 jmp 0x12990761 */
  goto L_12990761;
L_12990743:;
  /* 12990743 push 0x129aa7b0 */
  push32((uint32_t)(0x129aa7b0u));
  /* 12990748 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1299074b push eax */
  push32((uint32_t)(EAX));
  /* 1299074c call 0x12990f80 */
  push32(0x12990751u); f_12990f80();
  /* 12990751 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12990754 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12990756 jne 0x12990761 */
  if (!C.zf) goto L_12990761;
  /* 12990758 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1299075b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1299075e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12990761:;
  /* 12990761 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 12990765 jmp 0x12990920 */
  goto L_12990920;
L_1299076a:;
  /* 1299076a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1299076d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12990771 jg 0x12990781 */
  if ((!C.zf&&C.sf==C.of)) goto L_12990781;
  /* 12990773 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12990776 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 1299077c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1299077f jmp 0x1299078d */
  goto L_1299078d;
L_12990781:;
  /* 12990781 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12990784 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 1299078a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1299078d:;
  /* 1299078d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12990791 jle 0x12990834 */
  if ((C.zf||C.sf!=C.of)) goto L_12990834;
  /* 12990797 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1299079a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1299079d jbe 0x12990834 */
  if ((C.cf||C.zf)) goto L_12990834;
  /* 129907a3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129907a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129907a8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 129907aa mov ecx, dword ptr [0x129acc98] */
  ECX = (r32((uint32_t)(0x129acc98)));
  /* 129907b0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129907b2 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 129907b6 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 129907bc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129907be je 0x129907f7 */
  if (C.zf) goto L_129907f7;
  /* 129907c0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129907c3 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129907c6 jbe 0x129907f7 */
  if ((C.cf||C.zf)) goto L_129907f7;
  /* 129907c8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129907cb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129907cd mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129907d0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 129907d2 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 129907d4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129907d7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129907d9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129907dc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129907df mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 129907e1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129907e4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129907e7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 129907ea mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129907ed mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129907ef sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129907f2 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 129907f5 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_129907f7:;
  /* 129907f7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129907fa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129907fc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129907ff mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12990801 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12990803 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12990806 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12990808 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1299080b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1299080e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12990810 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12990813 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12990816 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12990819 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1299081c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1299081e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12990821 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12990824 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12990826 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12990829 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1299082c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1299082f jmp 0x1299078d */
  goto L_1299078d;
L_12990834:;
  /* 12990834 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12990837 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1299083a jmp 0x12990556 */
  goto L_12990556;
L_1299083f:;
  /* 1299083f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12990842 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12990845 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12990847 je 0x12990912 */
  if (C.zf) goto L_12990912;
  /* 1299084d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12990850 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12990853 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12990856:;
  /* 12990856 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12990859 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1299085c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1299085e je 0x12990910 */
  if (C.zf) goto L_12990910;
  /* 12990864 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12990867 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1299086a je 0x12990910 */
  if (C.zf) goto L_12990910;
  /* 12990870 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12990873 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12990876 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12990879 jne 0x12990889 */
  if (!C.zf) goto L_12990889;
  /* 1299087b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1299087e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12990881 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12990884 jmp 0x12990910 */
  goto L_12990910;
L_12990889:;
  /* 12990889 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1299088c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1299088e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12990890 mov edx, dword ptr [0x129acc98] */
  EDX = (r32((uint32_t)(0x129acc98)));
  /* 12990896 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12990898 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1299089c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 129908a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129908a3 je 0x129908dc */
  if (C.zf) goto L_129908dc;
  /* 129908a5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129908a8 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129908ab jbe 0x129908dc */
  if ((C.cf||C.zf)) goto L_129908dc;
  /* 129908ad mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129908b0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129908b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129908b5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 129908b7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 129908b9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129908bc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129908be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129908c1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129908c4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 129908c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129908c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129908cc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 129908cf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129908d2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129908d4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129908d7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129908da mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_129908dc:;
  /* 129908dc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129908df mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129908e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129908e4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 129908e6 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 129908e8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129908eb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129908ed add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129908f0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129908f3 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 129908f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129908f8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129908fb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 129908fe mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12990901 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12990903 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12990906 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12990909 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1299090b jmp 0x12990856 */
  goto L_12990856;
L_12990910:;
  /* 12990910 jmp 0x1299091b */
  goto L_1299091b;
L_12990912:;
  /* 12990912 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12990915 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12990918 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1299091b:;
  /* 1299091b jmp 0x12990556 */
  goto L_12990556;
L_12990920:;
  /* 12990920 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12990924 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12990926 je 0x1299094c */
  if (C.zf) goto L_1299094c;
  /* 12990928 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1299092b push edx */
  push32((uint32_t)(EDX));
  /* 1299092c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1299092f push eax */
  push32((uint32_t)(EAX));
  /* 12990930 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12990933 push ecx */
  push32((uint32_t)(ECX));
  /* 12990934 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12990937 push edx */
  push32((uint32_t)(EDX));
  /* 12990938 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1299093b push eax */
  push32((uint32_t)(EAX));
  /* 1299093c call 0x1298fd80 */
  push32(0x12990941u); f_1298fd80();
  /* 12990941 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12990944 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12990947 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1299094a jmp 0x129909c7 */
  goto L_129909c7;
L_1299094c:;
  /* 1299094c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1299094f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12990951 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12990953 mov ecx, dword ptr [0x129acc98] */
  ECX = (r32((uint32_t)(0x129acc98)));
  /* 12990959 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1299095b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1299095f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12990965 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12990967 je 0x12990998 */
  if (C.zf) goto L_12990998;
  /* 12990969 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1299096c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1299096e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12990971 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12990973 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12990975 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12990978 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1299097a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1299097d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12990980 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12990982 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12990985 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12990988 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1299098b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1299098e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12990990 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12990993 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12990996 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12990998:;
  /* 12990998 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1299099b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1299099d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129909a0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 129909a2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 129909a4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129909a7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129909a9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129909ac mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129909af mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 129909b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129909b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129909b7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 129909ba mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129909bd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129909bf sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129909c2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129909c5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_129909c7:;
  /* 129909c7 jmp 0x12990556 */
  goto L_12990556;
L_129909cc:;
  /* 129909cc mov esp, ebp */
  ESP = (EBP);
  /* 129909ce pop ebp */
  EBP = (pop32());
  /* 129909cf ret  */
  ESPCHK(0x12990550u, _esp0);
  ESP += 4; return;
}

/* FUN_10010a70 @ 0x12990a70 (650 bytes, 178 insns) */
void f_12990a70(void) {
  FTRACE(0x12990a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12990a70 push ebp */
  push32((uint32_t)(EBP));
  /* 12990a71 mov ebp, esp */
  EBP = (ESP);
  /* 12990a73 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12990a79 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12990a7d jne 0x12990bd9 */
  if (!C.zf) goto L_12990bd9;
  /* 12990a83 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12990a86 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 12990a8c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 12990a92 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12990a95 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12990a9c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 12990aa6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12990aa8 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12990aae push edx */
  push32((uint32_t)(EDX));
  /* 12990aaf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12990ab2 push eax */
  push32((uint32_t)(EAX));
  /* 12990ab3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12990ab6 push ecx */
  push32((uint32_t)(ECX));
  /* 12990ab7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12990aba push edx */
  push32((uint32_t)(EDX));
  /* 12990abb call 0x12991e90 */
  push32(0x12990ac0u); f_12991e90();
  /* 12990ac0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12990ac3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12990ac6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12990aca jne 0x12990b5f */
  if (!C.zf) goto L_12990b5f;
  /* 12990ad0 call dword ptr [0x129b0294] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0294))), 0x12990ad6u);
  /* 12990ad6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12990ad9 je 0x12990ae0 */
  if (C.zf) goto L_12990ae0;
  /* 12990adb jmp 0x12990bbd */
  goto L_12990bbd;
L_12990ae0:;
  /* 12990ae0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12990ae2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12990ae4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12990ae6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12990ae9 push eax */
  push32((uint32_t)(EAX));
  /* 12990aea mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12990aed push ecx */
  push32((uint32_t)(ECX));
  /* 12990aee call 0x12991e90 */
  push32(0x12990af3u); f_12991e90();
  /* 12990af3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12990af6 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 12990afc cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12990b03 jne 0x12990b0a */
  if (!C.zf) goto L_12990b0a;
  /* 12990b05 jmp 0x12990bbd */
  goto L_12990bbd;
L_12990b0a:;
  /* 12990b0a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 12990b0c push 0x129aa7bc */
  push32((uint32_t)(0x129aa7bcu));
  /* 12990b11 push 2 */
  push32((uint32_t)(0x2u));
  /* 12990b13 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12990b19 push edx */
  push32((uint32_t)(EDX));
  /* 12990b1a call 0x129828b0 */
  push32(0x12990b1fu); f_129828b0();
  /* 12990b1f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12990b22 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12990b25 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12990b29 jne 0x12990b30 */
  if (!C.zf) goto L_12990b30;
  /* 12990b2b jmp 0x12990bbd */
  goto L_12990bbd;
L_12990b30:;
  /* 12990b30 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12990b37 push 0 */
  push32((uint32_t)(0x0u));
  /* 12990b39 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 12990b3f push eax */
  push32((uint32_t)(EAX));
  /* 12990b40 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12990b43 push ecx */
  push32((uint32_t)(ECX));
  /* 12990b44 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12990b47 push edx */
  push32((uint32_t)(EDX));
  /* 12990b48 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12990b4b push eax */
  push32((uint32_t)(EAX));
  /* 12990b4c call 0x12991e90 */
  push32(0x12990b51u); f_12991e90();
  /* 12990b51 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12990b54 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12990b57 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12990b5b jne 0x12990b5f */
  if (!C.zf) goto L_12990b5f;
  /* 12990b5d jmp 0x12990bbd */
  goto L_12990bbd;
L_12990b5f:;
  /* 12990b5f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 12990b61 push 0x129aa7bc */
  push32((uint32_t)(0x129aa7bcu));
  /* 12990b66 push 2 */
  push32((uint32_t)(0x2u));
  /* 12990b68 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12990b6b push ecx */
  push32((uint32_t)(ECX));
  /* 12990b6c call 0x129828b0 */
  push32(0x12990b71u); f_129828b0();
  /* 12990b71 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12990b74 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 12990b7a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12990b7c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12990b82 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12990b85 jne 0x12990b89 */
  if (!C.zf) goto L_12990b89;
  /* 12990b87 jmp 0x12990bbd */
  goto L_12990bbd;
L_12990b89:;
  /* 12990b89 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12990b8c push ecx */
  push32((uint32_t)(ECX));
  /* 12990b8d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12990b90 push edx */
  push32((uint32_t)(EDX));
  /* 12990b91 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12990b97 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12990b99 push ecx */
  push32((uint32_t)(ECX));
  /* 12990b9a call 0x129860d0 */
  push32(0x12990b9fu); f_129860d0();
  /* 12990b9f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12990ba2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12990ba6 je 0x12990bb6 */
  if (C.zf) goto L_12990bb6;
  /* 12990ba8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12990baa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12990bad push edx */
  push32((uint32_t)(EDX));
  /* 12990bae call 0x12983340 */
  push32(0x12990bb3u); f_12983340();
  /* 12990bb3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12990bb6:;
  /* 12990bb6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12990bb8 jmp 0x12990cf6 */
  goto L_12990cf6;
L_12990bbd:;
  /* 12990bbd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12990bc1 je 0x12990bd1 */
  if (C.zf) goto L_12990bd1;
  /* 12990bc3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12990bc5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12990bc8 push eax */
  push32((uint32_t)(EAX));
  /* 12990bc9 call 0x12983340 */
  push32(0x12990bceu); f_12983340();
  /* 12990bce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12990bd1:;
  /* 12990bd1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12990bd4 jmp 0x12990cf6 */
  goto L_12990cf6;
L_12990bd9:;
  /* 12990bd9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12990bdd jne 0x12990cf3 */
  if (!C.zf) goto L_12990cf3;
  /* 12990be3 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 12990bed mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12990bf0 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 12990bf6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12990bf8 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12990bfe push edx */
  push32((uint32_t)(EDX));
  /* 12990bff push 0x129ae718 */
  push32((uint32_t)(0x129ae718u));
  /* 12990c04 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12990c07 push eax */
  push32((uint32_t)(EAX));
  /* 12990c08 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12990c0b push ecx */
  push32((uint32_t)(ECX));
  /* 12990c0c call 0x12991cf0 */
  push32(0x12990c11u); f_12991cf0();
  /* 12990c11 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12990c14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12990c16 jne 0x12990c20 */
  if (!C.zf) goto L_12990c20;
  /* 12990c18 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12990c1b jmp 0x12990cf6 */
  goto L_12990cf6;
L_12990c20:;
  /* 12990c20 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12990c26 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12990c29 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 12990c33 jmp 0x12990c44 */
  goto L_12990c44;
L_12990c35:;
  /* 12990c35 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12990c3b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12990c3e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_12990c44:;
  /* 12990c44 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12990c4b jge 0x12990cef */
  if ((C.sf==C.of)) goto L_12990cef;
  /* 12990c51 cmp dword ptr [0x129acea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x129acea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12990c58 jle 0x12990c8b */
  if ((C.zf||C.sf!=C.of)) goto L_12990c8b;
  /* 12990c5a push 4 */
  push32((uint32_t)(0x4u));
  /* 12990c5c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12990c62 mov dl, byte ptr [ecx*2 + 0x129ae718] */
  DL = (r8((uint32_t)(ECX*2 + 0x129ae718)));
  /* 12990c69 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 12990c6f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12990c75 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12990c7a push eax */
  push32((uint32_t)(EAX));
  /* 12990c7b call 0x129888c0 */
  push32(0x12990c80u); f_129888c0();
  /* 12990c80 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12990c83 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 12990c89 jmp 0x12990cbe */
  goto L_12990cbe;
L_12990c8b:;
  /* 12990c8b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12990c91 mov dl, byte ptr [ecx*2 + 0x129ae718] */
  DL = (r8((uint32_t)(ECX*2 + 0x129ae718)));
  /* 12990c98 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 12990c9e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12990ca4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12990ca9 mov ecx, dword ptr [0x129acc98] */
  ECX = (r32((uint32_t)(0x129acc98)));
  /* 12990caf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12990cb1 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12990cb5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12990cb8 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_12990cbe:;
  /* 12990cbe cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12990cc5 je 0x12990ce8 */
  if (C.zf) goto L_12990ce8;
  /* 12990cc7 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12990ccd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12990cd0 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12990cd3 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 12990cda lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12990cde mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12990ce4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12990ce6 jmp 0x12990cea */
  goto L_12990cea;
L_12990ce8:;
  /* 12990ce8 jmp 0x12990cef */
  goto L_12990cef;
L_12990cea:;
  /* 12990cea jmp 0x12990c35 */
  goto L_12990c35;
L_12990cef:;
  /* 12990cef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12990cf1 jmp 0x12990cf6 */
  goto L_12990cf6;
L_12990cf3:;
  /* 12990cf3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12990cf6:;
  /* 12990cf6 mov esp, ebp */
  ESP = (EBP);
  /* 12990cf8 pop ebp */
  EBP = (pop32());
  /* 12990cf9 ret  */
  ESPCHK(0x12990a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10010d00 @ 0x12990d00 (10 bytes, 5 insns) */
void f_12990d00(void) {
  FTRACE(0x12990d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12990d00 push ebp */
  push32((uint32_t)(EBP));
  /* 12990d01 mov ebp, esp */
  EBP = (ESP);
  /* 12990d03 mov eax, dword ptr [0x129add88] */
  EAX = (r32((uint32_t)(0x129add88)));
  /* 12990d08 pop ebp */
  EBP = (pop32());
  /* 12990d09 ret  */
  ESPCHK(0x12990d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10010d10 @ 0x12990d10 (575 bytes, 196 insns) */
void f_12990d10(void) {
  FTRACE(0x12990d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12990d10 push ebp */
  push32((uint32_t)(EBP));
  /* 12990d11 mov ebp, esp */
  EBP = (ESP);
  /* 12990d13 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12990d15 push 0x129aa7c8 */
  push32((uint32_t)(0x129aa7c8u));
  /* 12990d1a push 0x1298b9b8 */
  push32((uint32_t)(0x1298b9b8u));
  /* 12990d1f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12990d25 push eax */
  push32((uint32_t)(EAX));
  /* 12990d26 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12990d2d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12990d30 push ebx */
  push32((uint32_t)(EBX));
  /* 12990d31 push esi */
  push32((uint32_t)(ESI));
  /* 12990d32 push edi */
  push32((uint32_t)(EDI));
  /* 12990d33 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12990d36 cmp dword ptr [0x129ae724], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae724))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12990d3d jne 0x12990d8e */
  if (!C.zf) goto L_12990d8e;
  /* 12990d3f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12990d42 push eax */
  push32((uint32_t)(EAX));
  /* 12990d43 push 1 */
  push32((uint32_t)(0x1u));
  /* 12990d45 push 0x129a9efc */
  push32((uint32_t)(0x129a9efcu));
  /* 12990d4a push 1 */
  push32((uint32_t)(0x1u));
  /* 12990d4c call dword ptr [0x129b0314] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0314))), 0x12990d52u);
  /* 12990d52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12990d54 je 0x12990d62 */
  if (C.zf) goto L_12990d62;
  /* 12990d56 mov dword ptr [0x129ae724], 1 */
  w32((uint32_t)(0x129ae724), (0x1u));
  /* 12990d60 jmp 0x12990d8e */
  goto L_12990d8e;
L_12990d62:;
  /* 12990d62 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12990d65 push ecx */
  push32((uint32_t)(ECX));
  /* 12990d66 push 1 */
  push32((uint32_t)(0x1u));
  /* 12990d68 push 0x129a9ef8 */
  push32((uint32_t)(0x129a9ef8u));
  /* 12990d6d push 1 */
  push32((uint32_t)(0x1u));
  /* 12990d6f push 0 */
  push32((uint32_t)(0x0u));
  /* 12990d71 call dword ptr [0x129b0310] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0310))), 0x12990d77u);
  /* 12990d77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12990d79 je 0x12990d87 */
  if (C.zf) goto L_12990d87;
  /* 12990d7b mov dword ptr [0x129ae724], 2 */
  w32((uint32_t)(0x129ae724), (0x2u));
  /* 12990d85 jmp 0x12990d8e */
  goto L_12990d8e;
L_12990d87:;
  /* 12990d87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12990d89 jmp 0x12990f69 */
  goto L_12990f69;
L_12990d8e:;
  /* 12990d8e cmp dword ptr [0x129ae724], 1 */
  { uint32_t _a=(r32((uint32_t)(0x129ae724))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12990d95 jne 0x12990db2 */
  if (!C.zf) goto L_12990db2;
  /* 12990d97 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12990d9a push edx */
  push32((uint32_t)(EDX));
  /* 12990d9b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12990d9e push eax */
  push32((uint32_t)(EAX));
  /* 12990d9f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12990da2 push ecx */
  push32((uint32_t)(ECX));
  /* 12990da3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12990da6 push edx */
  push32((uint32_t)(EDX));
  /* 12990da7 call dword ptr [0x129b0314] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0314))), 0x12990dadu);
  /* 12990dad jmp 0x12990f69 */
  goto L_12990f69;
L_12990db2:;
  /* 12990db2 cmp dword ptr [0x129ae724], 2 */
  { uint32_t _a=(r32((uint32_t)(0x129ae724))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12990db9 jne 0x12990f67 */
  if (!C.zf) goto L_12990f67;
  /* 12990dbf cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12990dc3 jne 0x12990dcd */
  if (!C.zf) goto L_12990dcd;
  /* 12990dc5 mov eax, dword ptr [0x129ae698] */
  EAX = (r32((uint32_t)(0x129ae698)));
  /* 12990dca mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_12990dcd:;
  /* 12990dcd push 0 */
  push32((uint32_t)(0x0u));
  /* 12990dcf push 0 */
  push32((uint32_t)(0x0u));
  /* 12990dd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12990dd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12990dd5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12990dd8 push ecx */
  push32((uint32_t)(ECX));
  /* 12990dd9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12990ddc push edx */
  push32((uint32_t)(EDX));
  /* 12990ddd push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12990de2 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12990de5 push eax */
  push32((uint32_t)(EAX));
  /* 12990de6 call dword ptr [0x129b021c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b021c))), 0x12990decu);
  /* 12990dec mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12990def cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12990df3 jne 0x12990dfc */
  if (!C.zf) goto L_12990dfc;
  /* 12990df5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12990df7 jmp 0x12990f69 */
  goto L_12990f69;
L_12990dfc:;
  /* 12990dfc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12990e03 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12990e06 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12990e09 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12990e0b call 0x12985a50 */
  push32(0x12990e10u); f_12985a50();
  /* 12990e10 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 12990e13 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12990e16 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12990e19 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12990e1c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12990e1f push edx */
  push32((uint32_t)(EDX));
  /* 12990e20 push 0 */
  push32((uint32_t)(0x0u));
  /* 12990e22 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12990e25 push eax */
  push32((uint32_t)(EAX));
  /* 12990e26 call 0x12986620 */
  push32(0x12990e2bu); f_12986620();
  /* 12990e2b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12990e2e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12990e35 jmp 0x12990e4e */
  goto L_12990e4e;
  /* 12990e37 mov eax, 1 */
  EAX = (0x1u);
  /* 12990e3c ret  */
  ESPCHK(0x12990d10u, _esp0);
  ESP += 4; return;
  /* 12990e3d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12990e40 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 12990e47 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12990e4e:;
  /* 12990e4e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12990e52 jne 0x12990e5b */
  if (!C.zf) goto L_12990e5b;
  /* 12990e54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12990e56 jmp 0x12990f69 */
  goto L_12990f69;
L_12990e5b:;
  /* 12990e5b push 0 */
  push32((uint32_t)(0x0u));
  /* 12990e5d push 0 */
  push32((uint32_t)(0x0u));
  /* 12990e5f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12990e62 push ecx */
  push32((uint32_t)(ECX));
  /* 12990e63 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12990e66 push edx */
  push32((uint32_t)(EDX));
  /* 12990e67 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12990e6a push eax */
  push32((uint32_t)(EAX));
  /* 12990e6b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12990e6e push ecx */
  push32((uint32_t)(ECX));
  /* 12990e6f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12990e74 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12990e77 push edx */
  push32((uint32_t)(EDX));
  /* 12990e78 call dword ptr [0x129b021c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b021c))), 0x12990e7eu);
  /* 12990e7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12990e80 jne 0x12990e89 */
  if (!C.zf) goto L_12990e89;
  /* 12990e82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12990e84 jmp 0x12990f69 */
  goto L_12990f69;
L_12990e89:;
  /* 12990e89 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12990e90 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12990e93 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 12990e97 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12990e9a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12990e9c call 0x12985a50 */
  push32(0x12990ea1u); f_12985a50();
  /* 12990ea1 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 12990ea4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12990ea7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12990eaa mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12990ead mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12990eb4 jmp 0x12990ecd */
  goto L_12990ecd;
  /* 12990eb6 mov eax, 1 */
  EAX = (0x1u);
  /* 12990ebb ret  */
  ESPCHK(0x12990d10u, _esp0);
  ESP += 4; return;
  /* 12990ebc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12990ebf mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12990ec6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12990ecd:;
  /* 12990ecd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12990ed1 jne 0x12990eda */
  if (!C.zf) goto L_12990eda;
  /* 12990ed3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12990ed5 jmp 0x12990f69 */
  goto L_12990f69;
L_12990eda:;
  /* 12990eda cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12990ede jne 0x12990ee9 */
  if (!C.zf) goto L_12990ee9;
  /* 12990ee0 mov edx, dword ptr [0x129ae688] */
  EDX = (r32((uint32_t)(0x129ae688)));
  /* 12990ee6 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_12990ee9:;
  /* 12990ee9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12990eec mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12990eef mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 12990ef5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12990ef8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12990efb mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 12990f02 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12990f05 push ecx */
  push32((uint32_t)(ECX));
  /* 12990f06 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12990f09 push edx */
  push32((uint32_t)(EDX));
  /* 12990f0a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12990f0d push eax */
  push32((uint32_t)(EAX));
  /* 12990f0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12990f11 push ecx */
  push32((uint32_t)(ECX));
  /* 12990f12 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12990f15 push edx */
  push32((uint32_t)(EDX));
  /* 12990f16 call dword ptr [0x129b0310] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0310))), 0x12990f1cu);
  /* 12990f1c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12990f1f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12990f22 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12990f25 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12990f27 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 12990f2c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12990f32 je 0x12990f48 */
  if (C.zf) goto L_12990f48;
  /* 12990f34 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12990f37 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12990f3a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12990f3c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12990f40 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12990f46 je 0x12990f4c */
  if (C.zf) goto L_12990f4c;
L_12990f48:;
  /* 12990f48 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12990f4a jmp 0x12990f69 */
  goto L_12990f69;
L_12990f4c:;
  /* 12990f4c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12990f4f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12990f51 push eax */
  push32((uint32_t)(EAX));
  /* 12990f52 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12990f55 push ecx */
  push32((uint32_t)(ECX));
  /* 12990f56 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12990f59 push edx */
  push32((uint32_t)(EDX));
  /* 12990f5a call 0x1298a7a0 */
  push32(0x12990f5fu); f_1298a7a0();
  /* 12990f5f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12990f62 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12990f65 jmp 0x12990f69 */
  goto L_12990f69;
L_12990f67:;
  /* 12990f67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12990f69:;
  /* 12990f69 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 12990f6c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12990f6f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12990f76 pop edi */
  EDI = (pop32());
  /* 12990f77 pop esi */
  ESI = (pop32());
  /* 12990f78 pop ebx */
  EBX = (pop32());
  /* 12990f79 mov esp, ebp */
  ESP = (EBP);
  /* 12990f7b pop ebp */
  EBP = (pop32());
  /* 12990f7c ret  */
  ESPCHK(0x12990d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f80 @ 0x12990f80 (208 bytes, 85 insns) */
void f_12990f80(void) {
  FTRACE(0x12990f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12990f80 push ebp */
  push32((uint32_t)(EBP));
  /* 12990f81 mov ebp, esp */
  EBP = (ESP);
  /* 12990f83 push edi */
  push32((uint32_t)(EDI));
  /* 12990f84 push esi */
  push32((uint32_t)(ESI));
  /* 12990f85 push ebx */
  push32((uint32_t)(EBX));
  /* 12990f86 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12990f89 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12990f8c lea eax, [0x129ae680] */
  EAX = ((uint32_t)(0x129ae680));
  /* 12990f92 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12990f96 jne 0x12990fd3 */
  if (!C.zf) goto L_12990fd3;
  /* 12990f98 mov al, 0xff */
  AL = (0xffu);
  /* 12990f9a mov edi, edi */
  EDI = (EDI);
L_12990f9c:;
  /* 12990f9c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12990f9e je 0x12990fce */
  if (C.zf) goto L_12990fce;
  /* 12990fa0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12990fa2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12990fa3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 12990fa5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12990fa6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12990fa8 je 0x12990f9c */
  if (C.zf) goto L_12990f9c;
  /* 12990faa sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12990fac cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12990fae sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12990fb0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12990fb3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12990fb5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12990fb7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 12990fb9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12990fbb cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12990fbd sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12990fbf and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12990fc2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12990fc4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12990fc6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12990fc8 je 0x12990f9c */
  if (C.zf) goto L_12990f9c;
  /* 12990fca sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12990fcc sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_12990fce:;
  /* 12990fce movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 12990fd1 jmp 0x1299104b */
  goto L_1299104b;
L_12990fd3:;
  /* 12990fd3 lock inc dword ptr [0x129ae814] */
  x86_unimpl("lock inc @ 0x12990fd3");
  /* 12990fda cmp dword ptr [0x129ae804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12990fe1 jg 0x12990fe7 */
  if ((!C.zf&&C.sf==C.of)) goto L_12990fe7;
  /* 12990fe3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12990fe5 jmp 0x12990ffc */
  goto L_12990ffc;
L_12990fe7:;
  /* 12990fe7 lock dec dword ptr [0x129ae814] */
  x86_unimpl("lock dec @ 0x12990fe7");
  /* 12990fee push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12990ff0 call 0x129862b0 */
  push32(0x12990ff5u); f_129862b0();
  /* 12990ff5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_12990ffc:;
  /* 12990ffc mov eax, 0xff */
  EAX = (0xffu);
  /* 12991001 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12991003 nop  */
  /* nop */
L_12991004:;
  /* 12991004 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12991006 je 0x1299102f */
  if (C.zf) goto L_1299102f;
  /* 12991008 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1299100a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1299100b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1299100d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1299100e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12991010 je 0x12991004 */
  if (C.zf) goto L_12991004;
  /* 12991012 push eax */
  push32((uint32_t)(EAX));
  /* 12991013 push ebx */
  push32((uint32_t)(EBX));
  /* 12991014 call 0x129920f0 */
  push32(0x12991019u); f_129920f0();
  /* 12991019 mov ebx, eax */
  EBX = (EAX);
  /* 1299101b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1299101e call 0x129920f0 */
  push32(0x12991023u); f_129920f0();
  /* 12991023 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12991026 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12991028 je 0x12991004 */
  if (C.zf) goto L_12991004;
  /* 1299102a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1299102c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1299102f:;
  /* 1299102f mov ebx, eax */
  EBX = (EAX);
  /* 12991031 pop eax */
  EAX = (pop32());
  /* 12991032 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12991034 jne 0x1299103f */
  if (!C.zf) goto L_1299103f;
  /* 12991036 lock dec dword ptr [0x129ae814] */
  x86_unimpl("lock dec @ 0x12991036");
  /* 1299103d jmp 0x12991049 */
  goto L_12991049;
L_1299103f:;
  /* 1299103f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12991041 call 0x12986350 */
  push32(0x12991046u); f_12986350();
  /* 12991046 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12991049:;
  /* 12991049 mov eax, ebx */
  EAX = (EBX);
L_1299104b:;
  /* 1299104b pop ebx */
  EBX = (pop32());
  /* 1299104c pop esi */
  ESI = (pop32());
  /* 1299104d pop edi */
  EDI = (pop32());
  /* 1299104e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1299104f ret  */
  ESPCHK(0x12990f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10011050 @ 0x12991050 (257 bytes, 103 insns) */
void f_12991050(void) {
  FTRACE(0x12991050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12991050 push ebp */
  push32((uint32_t)(EBP));
  /* 12991051 mov ebp, esp */
  EBP = (ESP);
  /* 12991053 push edi */
  push32((uint32_t)(EDI));
  /* 12991054 push esi */
  push32((uint32_t)(ESI));
  /* 12991055 push ebx */
  push32((uint32_t)(EBX));
  /* 12991056 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12991059 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1299105b je 0x1299114a */
  if (C.zf) goto L_1299114a;
  /* 12991061 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12991064 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 12991067 lea eax, [0x129ae680] */
  EAX = ((uint32_t)(0x129ae680));
  /* 1299106d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12991071 jne 0x129910c1 */
  if (!C.zf) goto L_129910c1;
  /* 12991073 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 12991075 mov bl, 0x5a */
  BL = (0x5au);
  /* 12991077 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 12991079 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1299107c:;
  /* 1299107c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 1299107e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12991080 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 12991082 je 0x129910a5 */
  if (C.zf) goto L_129910a5;
  /* 12991084 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12991086 je 0x129910a5 */
  if (C.zf) goto L_129910a5;
  /* 12991088 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12991089 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1299108a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1299108c jb 0x12991094 */
  if (C.cf) goto L_12991094;
  /* 1299108e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12991090 ja 0x12991094 */
  if ((!C.cf&&!C.zf)) goto L_12991094;
  /* 12991092 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_12991094:;
  /* 12991094 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12991096 jb 0x1299109e */
  if (C.cf) goto L_1299109e;
  /* 12991098 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1299109a ja 0x1299109e */
  if ((!C.cf&&!C.zf)) goto L_1299109e;
  /* 1299109c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_1299109e:;
  /* 1299109e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 129910a0 jne 0x129910af */
  if (!C.zf) goto L_129910af;
  /* 129910a2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 129910a3 jne 0x1299107c */
  if (!C.zf) goto L_1299107c;
L_129910a5:;
  /* 129910a5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129910a7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 129910a9 je 0x1299114a */
  if (C.zf) goto L_1299114a;
L_129910af:;
  /* 129910af mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 129910b4 jb 0x1299114a */
  if (C.cf) goto L_1299114a;
  /* 129910ba neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 129910bc jmp 0x1299114a */
  goto L_1299114a;
L_129910c1:;
  /* 129910c1 lock inc dword ptr [0x129ae814] */
  x86_unimpl("lock inc @ 0x129910c1");
  /* 129910c8 cmp dword ptr [0x129ae804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129910cf jg 0x129910d5 */
  if ((!C.zf&&C.sf==C.of)) goto L_129910d5;
  /* 129910d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 129910d3 jmp 0x129910ee */
  goto L_129910ee;
L_129910d5:;
  /* 129910d5 lock dec dword ptr [0x129ae814] */
  x86_unimpl("lock dec @ 0x129910d5");
  /* 129910dc mov ebx, ecx */
  EBX = (ECX);
  /* 129910de push 0x13 */
  push32((uint32_t)(0x13u));
  /* 129910e0 call 0x129862b0 */
  push32(0x129910e5u); f_129862b0();
  /* 129910e5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 129910ec mov ecx, ebx */
  ECX = (EBX);
L_129910ee:;
  /* 129910ee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129910f0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 129910f2 mov edi, edi */
  EDI = (EDI);
L_129910f4:;
  /* 129910f4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 129910f6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129910f8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 129910fa je 0x1299111f */
  if (C.zf) goto L_1299111f;
  /* 129910fc or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 129910fe je 0x1299111f */
  if (C.zf) goto L_1299111f;
  /* 12991100 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12991101 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12991102 push ecx */
  push32((uint32_t)(ECX));
  /* 12991103 push eax */
  push32((uint32_t)(EAX));
  /* 12991104 push ebx */
  push32((uint32_t)(EBX));
  /* 12991105 call 0x129920f0 */
  push32(0x1299110au); f_129920f0();
  /* 1299110a mov ebx, eax */
  EBX = (EAX);
  /* 1299110c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1299110f call 0x129920f0 */
  push32(0x12991114u); f_129920f0();
  /* 12991114 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12991117 pop ecx */
  ECX = (pop32());
  /* 12991118 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1299111a jne 0x12991125 */
  if (!C.zf) goto L_12991125;
  /* 1299111c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1299111d jne 0x129910f4 */
  if (!C.zf) goto L_129910f4;
L_1299111f:;
  /* 1299111f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12991121 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12991123 je 0x1299112e */
  if (C.zf) goto L_1299112e;
L_12991125:;
  /* 12991125 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 1299112a jb 0x1299112e */
  if (C.cf) goto L_1299112e;
  /* 1299112c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_1299112e:;
  /* 1299112e pop eax */
  EAX = (pop32());
  /* 1299112f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12991131 jne 0x1299113c */
  if (!C.zf) goto L_1299113c;
  /* 12991133 lock dec dword ptr [0x129ae814] */
  x86_unimpl("lock dec @ 0x12991133");
  /* 1299113a jmp 0x1299114a */
  goto L_1299114a;
L_1299113c:;
  /* 1299113c mov ebx, ecx */
  EBX = (ECX);
  /* 1299113e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12991140 call 0x12986350 */
  push32(0x12991145u); f_12986350();
  /* 12991145 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12991148 mov ecx, ebx */
  ECX = (EBX);
L_1299114a:;
  /* 1299114a mov eax, ecx */
  EAX = (ECX);
  /* 1299114c pop ebx */
  EBX = (pop32());
  /* 1299114d pop esi */
  ESI = (pop32());
  /* 1299114e pop edi */
  EDI = (pop32());
  /* 1299114f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12991150 ret  */
  ESPCHK(0x12991050u, _esp0);
  ESP += 4; return;
}

/* FUN_10011160 @ 0x12991160 (255 bytes, 88 insns) */
void f_12991160(void) {
  FTRACE(0x12991160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12991160 push ebp */
  push32((uint32_t)(EBP));
  /* 12991161 mov ebp, esp */
  EBP = (ESP);
  /* 12991163 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_12991166:;
  /* 12991166 cmp dword ptr [0x129acea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x129acea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1299116d jle 0x12991186 */
  if ((C.zf||C.sf!=C.of)) goto L_12991186;
  /* 1299116f push 8 */
  push32((uint32_t)(0x8u));
  /* 12991171 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12991174 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12991176 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12991178 push ecx */
  push32((uint32_t)(ECX));
  /* 12991179 call 0x129888c0 */
  push32(0x1299117eu); f_129888c0();
  /* 1299117e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12991181 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12991184 jmp 0x1299119f */
  goto L_1299119f;
L_12991186:;
  /* 12991186 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12991189 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1299118b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1299118d mov ecx, dword ptr [0x129acc98] */
  ECX = (r32((uint32_t)(0x129acc98)));
  /* 12991193 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12991195 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12991199 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1299119c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1299119f:;
  /* 1299119f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129911a3 je 0x129911b0 */
  if (C.zf) goto L_129911b0;
  /* 129911a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129911a8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129911ab mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 129911ae jmp 0x12991166 */
  goto L_12991166;
L_129911b0:;
  /* 129911b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129911b3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129911b5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 129911b7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 129911ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129911bd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129911c0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 129911c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129911c6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129911c9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129911cd je 0x129911d5 */
  if (C.zf) goto L_129911d5;
  /* 129911cf cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129911d3 jne 0x129911e8 */
  if (!C.zf) goto L_129911e8;
L_129911d5:;
  /* 129911d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129911d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129911da mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 129911dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129911df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129911e2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129911e5 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_129911e8:;
  /* 129911e8 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_129911ef:;
  /* 129911ef cmp dword ptr [0x129acea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x129acea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129911f6 jle 0x1299120b */
  if ((C.zf||C.sf!=C.of)) goto L_1299120b;
  /* 129911f8 push 4 */
  push32((uint32_t)(0x4u));
  /* 129911fa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129911fd push edx */
  push32((uint32_t)(EDX));
  /* 129911fe call 0x129888c0 */
  push32(0x12991203u); f_129888c0();
  /* 12991203 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12991206 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12991209 jmp 0x12991220 */
  goto L_12991220;
L_1299120b:;
  /* 1299120b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1299120e mov ecx, dword ptr [0x129acc98] */
  ECX = (r32((uint32_t)(0x129acc98)));
  /* 12991214 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12991216 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1299121a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1299121d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12991220:;
  /* 12991220 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12991224 je 0x1299124b */
  if (C.zf) goto L_1299124b;
  /* 12991226 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12991229 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1299122c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1299122f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 12991233 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12991236 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12991239 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1299123b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1299123d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12991240 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12991243 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12991246 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12991249 jmp 0x129911ef */
  goto L_129911ef;
L_1299124b:;
  /* 1299124b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1299124f jne 0x12991258 */
  if (!C.zf) goto L_12991258;
  /* 12991251 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12991254 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12991256 jmp 0x1299125b */
  goto L_1299125b;
L_12991258:;
  /* 12991258 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1299125b:;
  /* 1299125b mov esp, ebp */
  ESP = (EBP);
  /* 1299125d pop ebp */
  EBP = (pop32());
  /* 1299125e ret  */
  ESPCHK(0x12991160u, _esp0);
  ESP += 4; return;
}

/* FUN_10011260 @ 0x12991260 (17 bytes, 8 insns) */
void f_12991260(void) {
  FTRACE(0x12991260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12991260 push ebp */
  push32((uint32_t)(EBP));
  /* 12991261 mov ebp, esp */
  EBP = (ESP);
  /* 12991263 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12991266 push eax */
  push32((uint32_t)(EAX));
  /* 12991267 call 0x12991160 */
  push32(0x1299126cu); f_12991160();
  /* 1299126c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1299126f pop ebp */
  EBP = (pop32());
  /* 12991270 ret  */
  ESPCHK(0x12991260u, _esp0);
  ESP += 4; return;
}

/* FUN_10011280 @ 0x12991280 (297 bytes, 106 insns) */
void f_12991280(void) {
  FTRACE(0x12991280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12991280 push ebp */
  push32((uint32_t)(EBP));
  /* 12991281 mov ebp, esp */
  EBP = (ESP);
  /* 12991283 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12991286 push esi */
  push32((uint32_t)(ESI));
L_12991287:;
  /* 12991287 cmp dword ptr [0x129acea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x129acea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1299128e jle 0x129912a7 */
  if ((C.zf||C.sf!=C.of)) goto L_129912a7;
  /* 12991290 push 8 */
  push32((uint32_t)(0x8u));
  /* 12991292 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12991295 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12991297 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12991299 push ecx */
  push32((uint32_t)(ECX));
  /* 1299129a call 0x129888c0 */
  push32(0x1299129fu); f_129888c0();
  /* 1299129f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129912a2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 129912a5 jmp 0x129912c0 */
  goto L_129912c0;
L_129912a7:;
  /* 129912a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129912aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129912ac mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 129912ae mov ecx, dword ptr [0x129acc98] */
  ECX = (r32((uint32_t)(0x129acc98)));
  /* 129912b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129912b6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 129912ba and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 129912bd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_129912c0:;
  /* 129912c0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129912c4 je 0x129912d1 */
  if (C.zf) goto L_129912d1;
  /* 129912c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129912c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129912cc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 129912cf jmp 0x12991287 */
  goto L_12991287;
L_129912d1:;
  /* 129912d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129912d4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129912d6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 129912d8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 129912db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129912de add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129912e1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 129912e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129912e7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 129912ea cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129912ee je 0x129912f6 */
  if (C.zf) goto L_129912f6;
  /* 129912f0 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129912f4 jne 0x12991309 */
  if (!C.zf) goto L_12991309;
L_129912f6:;
  /* 129912f6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129912f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129912fb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 129912fd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12991300 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12991303 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12991306 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12991309:;
  /* 12991309 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12991310 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12991317:;
  /* 12991317 cmp dword ptr [0x129acea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x129acea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1299131e jle 0x12991333 */
  if ((C.zf||C.sf!=C.of)) goto L_12991333;
  /* 12991320 push 4 */
  push32((uint32_t)(0x4u));
  /* 12991322 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12991325 push edx */
  push32((uint32_t)(EDX));
  /* 12991326 call 0x129888c0 */
  push32(0x1299132bu); f_129888c0();
  /* 1299132b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1299132e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12991331 jmp 0x12991348 */
  goto L_12991348;
L_12991333:;
  /* 12991333 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12991336 mov ecx, dword ptr [0x129acc98] */
  ECX = (r32((uint32_t)(0x129acc98)));
  /* 1299133c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1299133e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12991342 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12991345 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_12991348:;
  /* 12991348 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1299134c je 0x12991389 */
  if (C.zf) goto L_12991389;
  /* 1299134e push 0 */
  push32((uint32_t)(0x0u));
  /* 12991350 push 0xa */
  push32((uint32_t)(0xau));
  /* 12991352 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12991355 push eax */
  push32((uint32_t)(EAX));
  /* 12991356 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12991359 push ecx */
  push32((uint32_t)(ECX));
  /* 1299135a call 0x12992220 */
  push32(0x1299135fu); f_12992220();
  /* 1299135f mov ecx, eax */
  ECX = (EAX);
  /* 12991361 mov esi, edx */
  ESI = (EDX);
  /* 12991363 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12991366 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12991369 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1299136a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1299136c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1299136e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12991371 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 12991374 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12991377 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12991379 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1299137b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1299137e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12991381 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12991384 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12991387 jmp 0x12991317 */
  goto L_12991317;
L_12991389:;
  /* 12991389 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1299138d jne 0x1299139e */
  if (!C.zf) goto L_1299139e;
  /* 1299138f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12991392 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12991394 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12991397 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1299139a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1299139c jmp 0x129913a4 */
  goto L_129913a4;
L_1299139e:;
  /* 1299139e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129913a1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_129913a4:;
  /* 129913a4 pop esi */
  ESI = (pop32());
  /* 129913a5 mov esp, ebp */
  ESP = (EBP);
  /* 129913a7 pop ebp */
  EBP = (pop32());
  /* 129913a8 ret  */
  ESPCHK(0x12991280u, _esp0);
  ESP += 4; return;
}

/* FUN_100113b0 @ 0x129913b0 (61 bytes, 18 insns) */
void f_129913b0(void) {
  FTRACE(0x129913b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129913b0 push ebp */
  push32((uint32_t)(EBP));
  /* 129913b1 mov ebp, esp */
  EBP = (ESP);
  /* 129913b3 cmp dword ptr [0x129ae7e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae7e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129913ba jne 0x129913eb */
  if (!C.zf) goto L_129913eb;
  /* 129913bc push 0xb */
  push32((uint32_t)(0xbu));
  /* 129913be call 0x129862b0 */
  push32(0x129913c3u); f_129862b0();
  /* 129913c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129913c6 cmp dword ptr [0x129ae7e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae7e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129913cd jne 0x129913e1 */
  if (!C.zf) goto L_129913e1;
  /* 129913cf call 0x12991410 */
  push32(0x129913d4u); f_12991410();
  /* 129913d4 mov eax, dword ptr [0x129ae7e0] */
  EAX = (r32((uint32_t)(0x129ae7e0)));
  /* 129913d9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129913dc mov dword ptr [0x129ae7e0], eax */
  w32((uint32_t)(0x129ae7e0), (EAX));
L_129913e1:;
  /* 129913e1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 129913e3 call 0x12986350 */
  push32(0x129913e8u); f_12986350();
  /* 129913e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129913eb:;
  /* 129913eb pop ebp */
  EBP = (pop32());
  /* 129913ec ret  */
  ESPCHK(0x129913b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100113f0 @ 0x129913f0 (30 bytes, 11 insns) */
void f_129913f0(void) {
  FTRACE(0x129913f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129913f0 push ebp */
  push32((uint32_t)(EBP));
  /* 129913f1 mov ebp, esp */
  EBP = (ESP);
  /* 129913f3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 129913f5 call 0x129862b0 */
  push32(0x129913fau); f_129862b0();
  /* 129913fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129913fd call 0x12991410 */
  push32(0x12991402u); f_12991410();
  /* 12991402 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12991404 call 0x12986350 */
  push32(0x12991409u); f_12986350();
  /* 12991409 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1299140c pop ebp */
  EBP = (pop32());
  /* 1299140d ret  */
  ESPCHK(0x129913f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011410 @ 0x12991410 (939 bytes, 266 insns) */
void f_12991410(void) {
  FTRACE(0x12991410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12991410 push ebp */
  push32((uint32_t)(EBP));
  /* 12991411 mov ebp, esp */
  EBP = (ESP);
  /* 12991413 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12991416 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1299141d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1299141f call 0x129862b0 */
  push32(0x12991424u); f_129862b0();
  /* 12991424 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12991427 mov dword ptr [0x129ae728], 0 */
  w32((uint32_t)(0x129ae728), (0x0u));
  /* 12991431 mov dword ptr [0x129ade38], 0xffffffff */
  w32((uint32_t)(0x129ade38), (0xffffffffu));
  /* 1299143b mov eax, dword ptr [0x129ade38] */
  EAX = (r32((uint32_t)(0x129ade38)));
  /* 12991440 mov dword ptr [0x129ade28], eax */
  w32((uint32_t)(0x129ade28), (EAX));
  /* 12991445 push 0x129aa828 */
  push32((uint32_t)(0x129aa828u));
  /* 1299144a call 0x12992290 */
  push32(0x1299144fu); f_12992290();
  /* 1299144f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12991452 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12991455 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12991459 jne 0x12991593 */
  if (!C.zf) goto L_12991593;
  /* 1299145f push 0xc */
  push32((uint32_t)(0xcu));
  /* 12991461 call 0x12986350 */
  push32(0x12991466u); f_12986350();
  /* 12991466 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12991469 push 0x129ae730 */
  push32((uint32_t)(0x129ae730u));
  /* 1299146e call dword ptr [0x129b0234] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0234))), 0x12991474u);
  /* 12991474 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12991477 je 0x1299158e */
  if (C.zf) goto L_1299158e;
  /* 1299147d mov dword ptr [0x129ae728], 1 */
  w32((uint32_t)(0x129ae728), (0x1u));
  /* 12991487 mov ecx, dword ptr [0x129ae730] */
  ECX = (r32((uint32_t)(0x129ae730)));
  /* 1299148d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12991490 mov dword ptr [0x129add90], ecx */
  w32((uint32_t)(0x129add90), (ECX));
  /* 12991496 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12991498 mov dx, word ptr [0x129ae776] */
  DX = (r16((uint32_t)(0x129ae776)));
  /* 1299149f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129914a1 je 0x129914b9 */
  if (C.zf) goto L_129914b9;
  /* 129914a3 mov eax, dword ptr [0x129ae784] */
  EAX = (r32((uint32_t)(0x129ae784)));
  /* 129914a8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129914ab mov ecx, dword ptr [0x129add90] */
  ECX = (r32((uint32_t)(0x129add90)));
  /* 129914b1 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129914b3 mov dword ptr [0x129add90], ecx */
  w32((uint32_t)(0x129add90), (ECX));
L_129914b9:;
  /* 129914b9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129914bb mov dx, word ptr [0x129ae7ca] */
  DX = (r16((uint32_t)(0x129ae7ca)));
  /* 129914c2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129914c4 je 0x129914ee */
  if (C.zf) goto L_129914ee;
  /* 129914c6 cmp dword ptr [0x129ae7d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae7d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129914cd je 0x129914ee */
  if (C.zf) goto L_129914ee;
  /* 129914cf mov dword ptr [0x129add94], 1 */
  w32((uint32_t)(0x129add94), (0x1u));
  /* 129914d9 mov eax, dword ptr [0x129ae7d8] */
  EAX = (r32((uint32_t)(0x129ae7d8)));
  /* 129914de sub eax, dword ptr [0x129ae784] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x129ae784))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129914e4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129914e7 mov dword ptr [0x129add98], eax */
  w32((uint32_t)(0x129add98), (EAX));
  /* 129914ec jmp 0x12991502 */
  goto L_12991502;
L_129914ee:;
  /* 129914ee mov dword ptr [0x129add94], 0 */
  w32((uint32_t)(0x129add94), (0x0u));
  /* 129914f8 mov dword ptr [0x129add98], 0 */
  w32((uint32_t)(0x129add98), (0x0u));
L_12991502:;
  /* 12991502 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12991505 push ecx */
  push32((uint32_t)(ECX));
  /* 12991506 push 0 */
  push32((uint32_t)(0x0u));
  /* 12991508 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1299150a mov edx, dword ptr [0x129ade1c] */
  EDX = (r32((uint32_t)(0x129ade1c)));
  /* 12991510 push edx */
  push32((uint32_t)(EDX));
  /* 12991511 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12991513 push 0x129ae734 */
  push32((uint32_t)(0x129ae734u));
  /* 12991518 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1299151d mov eax, dword ptr [0x129ae698] */
  EAX = (r32((uint32_t)(0x129ae698)));
  /* 12991522 push eax */
  push32((uint32_t)(EAX));
  /* 12991523 call dword ptr [0x129b021c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b021c))), 0x12991529u);
  /* 12991529 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1299152b je 0x1299153f */
  if (C.zf) goto L_1299153f;
  /* 1299152d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12991531 jne 0x1299153f */
  if (!C.zf) goto L_1299153f;
  /* 12991533 mov ecx, dword ptr [0x129ade1c] */
  ECX = (r32((uint32_t)(0x129ade1c)));
  /* 12991539 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 1299153d jmp 0x12991548 */
  goto L_12991548;
L_1299153f:;
  /* 1299153f mov edx, dword ptr [0x129ade1c] */
  EDX = (r32((uint32_t)(0x129ade1c)));
  /* 12991545 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12991548:;
  /* 12991548 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1299154b push eax */
  push32((uint32_t)(EAX));
  /* 1299154c push 0 */
  push32((uint32_t)(0x0u));
  /* 1299154e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12991550 mov ecx, dword ptr [0x129ade20] */
  ECX = (r32((uint32_t)(0x129ade20)));
  /* 12991556 push ecx */
  push32((uint32_t)(ECX));
  /* 12991557 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12991559 push 0x129ae788 */
  push32((uint32_t)(0x129ae788u));
  /* 1299155e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12991563 mov edx, dword ptr [0x129ae698] */
  EDX = (r32((uint32_t)(0x129ae698)));
  /* 12991569 push edx */
  push32((uint32_t)(EDX));
  /* 1299156a call dword ptr [0x129b021c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b021c))), 0x12991570u);
  /* 12991570 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12991572 je 0x12991585 */
  if (C.zf) goto L_12991585;
  /* 12991574 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12991578 jne 0x12991585 */
  if (!C.zf) goto L_12991585;
  /* 1299157a mov eax, dword ptr [0x129ade20] */
  EAX = (r32((uint32_t)(0x129ade20)));
  /* 1299157f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 12991583 jmp 0x1299158e */
  goto L_1299158e;
L_12991585:;
  /* 12991585 mov ecx, dword ptr [0x129ade20] */
  ECX = (r32((uint32_t)(0x129ade20)));
  /* 1299158b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_1299158e:;
  /* 1299158e jmp 0x129917b7 */
  goto L_129917b7;
L_12991593:;
  /* 12991593 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12991596 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12991599 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1299159b je 0x129915bd */
  if (C.zf) goto L_129915bd;
  /* 1299159d cmp dword ptr [0x129ae7dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae7dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129915a4 je 0x129915cc */
  if (C.zf) goto L_129915cc;
  /* 129915a6 mov ecx, dword ptr [0x129ae7dc] */
  ECX = (r32((uint32_t)(0x129ae7dc)));
  /* 129915ac push ecx */
  push32((uint32_t)(ECX));
  /* 129915ad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129915b0 push edx */
  push32((uint32_t)(EDX));
  /* 129915b1 call 0x1298e540 */
  push32(0x129915b6u); f_1298e540();
  /* 129915b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129915b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129915bb jne 0x129915cc */
  if (!C.zf) goto L_129915cc;
L_129915bd:;
  /* 129915bd push 0xc */
  push32((uint32_t)(0xcu));
  /* 129915bf call 0x12986350 */
  push32(0x129915c4u); f_12986350();
  /* 129915c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129915c7 jmp 0x129917b7 */
  goto L_129917b7;
L_129915cc:;
  /* 129915cc push 2 */
  push32((uint32_t)(0x2u));
  /* 129915ce mov eax, dword ptr [0x129ae7dc] */
  EAX = (r32((uint32_t)(0x129ae7dc)));
  /* 129915d3 push eax */
  push32((uint32_t)(EAX));
  /* 129915d4 call 0x12983340 */
  push32(0x129915d9u); f_12983340();
  /* 129915d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129915dc push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 129915e1 push 0x129aa820 */
  push32((uint32_t)(0x129aa820u));
  /* 129915e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 129915e8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129915eb push ecx */
  push32((uint32_t)(ECX));
  /* 129915ec call 0x129856e0 */
  push32(0x129915f1u); f_129856e0();
  /* 129915f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129915f4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129915f7 push eax */
  push32((uint32_t)(EAX));
  /* 129915f8 call 0x129828b0 */
  push32(0x129915fdu); f_129828b0();
  /* 129915fd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12991600 mov dword ptr [0x129ae7dc], eax */
  w32((uint32_t)(0x129ae7dc), (EAX));
  /* 12991605 cmp dword ptr [0x129ae7dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae7dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1299160c jne 0x1299161d */
  if (!C.zf) goto L_1299161d;
  /* 1299160e push 0xc */
  push32((uint32_t)(0xcu));
  /* 12991610 call 0x12986350 */
  push32(0x12991615u); f_12986350();
  /* 12991615 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12991618 jmp 0x129917b7 */
  goto L_129917b7;
L_1299161d:;
  /* 1299161d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12991620 push edx */
  push32((uint32_t)(EDX));
  /* 12991621 mov eax, dword ptr [0x129ae7dc] */
  EAX = (r32((uint32_t)(0x129ae7dc)));
  /* 12991626 push eax */
  push32((uint32_t)(EAX));
  /* 12991627 call 0x12985860 */
  push32(0x1299162cu); f_12985860();
  /* 1299162c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1299162f push 0xc */
  push32((uint32_t)(0xcu));
  /* 12991631 call 0x12986350 */
  push32(0x12991636u); f_12986350();
  /* 12991636 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12991639 push 3 */
  push32((uint32_t)(0x3u));
  /* 1299163b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1299163e push ecx */
  push32((uint32_t)(ECX));
  /* 1299163f mov edx, dword ptr [0x129ade1c] */
  EDX = (r32((uint32_t)(0x129ade1c)));
  /* 12991645 push edx */
  push32((uint32_t)(EDX));
  /* 12991646 call 0x129860d0 */
  push32(0x1299164bu); f_129860d0();
  /* 1299164b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1299164e mov eax, dword ptr [0x129ade1c] */
  EAX = (r32((uint32_t)(0x129ade1c)));
  /* 12991653 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 12991657 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1299165a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1299165d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12991660 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12991663 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12991666 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12991669 jne 0x1299167d */
  if (!C.zf) goto L_1299167d;
  /* 1299166b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1299166e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12991671 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12991674 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12991677 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1299167a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1299167d:;
  /* 1299167d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12991680 push eax */
  push32((uint32_t)(EAX));
  /* 12991681 call 0x12991160 */
  push32(0x12991686u); f_12991160();
  /* 12991686 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12991689 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1299168f mov dword ptr [0x129add90], eax */
  w32((uint32_t)(0x129add90), (EAX));
L_12991694:;
  /* 12991694 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12991697 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1299169a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1299169d je 0x129916b5 */
  if (C.zf) goto L_129916b5;
  /* 1299169f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129916a2 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 129916a5 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129916a8 jl 0x129916c0 */
  if ((C.sf!=C.of)) goto L_129916c0;
  /* 129916aa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129916ad movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 129916b0 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129916b3 jg 0x129916c0 */
  if ((!C.zf&&C.sf==C.of)) goto L_129916c0;
L_129916b5:;
  /* 129916b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129916b8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129916bb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129916be jmp 0x12991694 */
  goto L_12991694;
L_129916c0:;
  /* 129916c0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129916c3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 129916c6 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129916c9 jne 0x12991765 */
  if (!C.zf) goto L_12991765;
  /* 129916cf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129916d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129916d5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129916d8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129916db push edx */
  push32((uint32_t)(EDX));
  /* 129916dc call 0x12991160 */
  push32(0x129916e1u); f_12991160();
  /* 129916e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129916e4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129916e7 mov ecx, dword ptr [0x129add90] */
  ECX = (r32((uint32_t)(0x129add90)));
  /* 129916ed add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129916ef mov dword ptr [0x129add90], ecx */
  w32((uint32_t)(0x129add90), (ECX));
L_129916f5:;
  /* 129916f5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129916f8 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 129916fb cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129916fe jl 0x12991716 */
  if ((C.sf!=C.of)) goto L_12991716;
  /* 12991700 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12991703 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12991706 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12991709 jg 0x12991716 */
  if ((!C.zf&&C.sf==C.of)) goto L_12991716;
  /* 1299170b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1299170e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12991711 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12991714 jmp 0x129916f5 */
  goto L_129916f5;
L_12991716:;
  /* 12991716 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12991719 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1299171c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1299171f jne 0x12991765 */
  if (!C.zf) goto L_12991765;
  /* 12991721 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12991724 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12991727 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1299172a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1299172d push ecx */
  push32((uint32_t)(ECX));
  /* 1299172e call 0x12991160 */
  push32(0x12991733u); f_12991160();
  /* 12991733 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12991736 mov edx, dword ptr [0x129add90] */
  EDX = (r32((uint32_t)(0x129add90)));
  /* 1299173c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1299173e mov dword ptr [0x129add90], edx */
  w32((uint32_t)(0x129add90), (EDX));
L_12991744:;
  /* 12991744 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12991747 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1299174a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1299174d jl 0x12991765 */
  if ((C.sf!=C.of)) goto L_12991765;
  /* 1299174f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12991752 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12991755 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12991758 jg 0x12991765 */
  if ((!C.zf&&C.sf==C.of)) goto L_12991765;
  /* 1299175a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1299175d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12991760 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12991763 jmp 0x12991744 */
  goto L_12991744;
L_12991765:;
  /* 12991765 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12991769 je 0x12991779 */
  if (C.zf) goto L_12991779;
  /* 1299176b mov edx, dword ptr [0x129add90] */
  EDX = (r32((uint32_t)(0x129add90)));
  /* 12991771 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12991773 mov dword ptr [0x129add90], edx */
  w32((uint32_t)(0x129add90), (EDX));
L_12991779:;
  /* 12991779 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1299177c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1299177f mov dword ptr [0x129add94], ecx */
  w32((uint32_t)(0x129add94), (ECX));
  /* 12991785 cmp dword ptr [0x129add94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129add94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1299178c je 0x129917ae */
  if (C.zf) goto L_129917ae;
  /* 1299178e push 3 */
  push32((uint32_t)(0x3u));
  /* 12991790 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12991793 push edx */
  push32((uint32_t)(EDX));
  /* 12991794 mov eax, dword ptr [0x129ade20] */
  EAX = (r32((uint32_t)(0x129ade20)));
  /* 12991799 push eax */
  push32((uint32_t)(EAX));
  /* 1299179a call 0x129860d0 */
  push32(0x1299179fu); f_129860d0();
  /* 1299179f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129917a2 mov ecx, dword ptr [0x129ade20] */
  ECX = (r32((uint32_t)(0x129ade20)));
  /* 129917a8 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 129917ac jmp 0x129917b7 */
  goto L_129917b7;
L_129917ae:;
  /* 129917ae mov edx, dword ptr [0x129ade20] */
  EDX = (r32((uint32_t)(0x129ade20)));
  /* 129917b4 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_129917b7:;
  /* 129917b7 mov esp, ebp */
  ESP = (EBP);
  /* 129917b9 pop ebp */
  EBP = (pop32());
  /* 129917ba ret  */
  ESPCHK(0x12991410u, _esp0);
  ESP += 4; return;
}

/* FUN_100117c0 @ 0x129917c0 (46 bytes, 18 insns) */
void f_129917c0(void) {
  FTRACE(0x129917c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129917c0 push ebp */
  push32((uint32_t)(EBP));
  /* 129917c1 mov ebp, esp */
  EBP = (ESP);
  /* 129917c3 push ecx */
  push32((uint32_t)(ECX));
  /* 129917c4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 129917c6 call 0x129862b0 */
  push32(0x129917cbu); f_129862b0();
  /* 129917cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129917ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129917d1 push eax */
  push32((uint32_t)(EAX));
  /* 129917d2 call 0x129917f0 */
  push32(0x129917d7u); f_129917f0();
  /* 129917d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129917da mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129917dd push 0xb */
  push32((uint32_t)(0xbu));
  /* 129917df call 0x12986350 */
  push32(0x129917e4u); f_12986350();
  /* 129917e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129917e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129917ea mov esp, ebp */
  ESP = (EBP);
  /* 129917ec pop ebp */
  EBP = (pop32());
  /* 129917ed ret  */
  ESPCHK(0x129917c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100117f0 @ 0x129917f0 (762 bytes, 246 insns) */
void f_129917f0(void) {
  FTRACE(0x129917f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129917f0 push ebp */
  push32((uint32_t)(EBP));
  /* 129917f1 mov ebp, esp */
  EBP = (ESP);
  /* 129917f3 push ecx */
  push32((uint32_t)(ECX));
  /* 129917f4 cmp dword ptr [0x129add94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129add94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129917fb jne 0x12991804 */
  if (!C.zf) goto L_12991804;
  /* 129917fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129917ff jmp 0x12991ae6 */
  goto L_12991ae6;
L_12991804:;
  /* 12991804 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12991807 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1299180a cmp ecx, dword ptr [0x129ade28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x129ade28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12991810 jne 0x12991824 */
  if (!C.zf) goto L_12991824;
  /* 12991812 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12991815 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12991818 cmp eax, dword ptr [0x129ade38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x129ade38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1299181e je 0x129919eb */
  if (C.zf) goto L_129919eb;
L_12991824:;
  /* 12991824 cmp dword ptr [0x129ae728], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae728))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1299182b je 0x129919a5 */
  if (C.zf) goto L_129919a5;
  /* 12991831 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12991833 mov cx, word ptr [0x129ae7c8] */
  CX = (r16((uint32_t)(0x129ae7c8)));
  /* 1299183a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1299183c jne 0x12991899 */
  if (!C.zf) goto L_12991899;
  /* 1299183e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12991840 mov dx, word ptr [0x129ae7d6] */
  DX = (r16((uint32_t)(0x129ae7d6)));
  /* 12991847 push edx */
  push32((uint32_t)(EDX));
  /* 12991848 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1299184a mov ax, word ptr [0x129ae7d4] */
  AX = (r16((uint32_t)(0x129ae7d4)));
  /* 12991850 push eax */
  push32((uint32_t)(EAX));
  /* 12991851 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12991853 mov cx, word ptr [0x129ae7d2] */
  CX = (r16((uint32_t)(0x129ae7d2)));
  /* 1299185a push ecx */
  push32((uint32_t)(ECX));
  /* 1299185b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1299185d mov dx, word ptr [0x129ae7d0] */
  DX = (r16((uint32_t)(0x129ae7d0)));
  /* 12991864 push edx */
  push32((uint32_t)(EDX));
  /* 12991865 push 0 */
  push32((uint32_t)(0x0u));
  /* 12991867 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12991869 mov ax, word ptr [0x129ae7cc] */
  AX = (r16((uint32_t)(0x129ae7cc)));
  /* 1299186f push eax */
  push32((uint32_t)(EAX));
  /* 12991870 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12991872 mov cx, word ptr [0x129ae7ce] */
  CX = (r16((uint32_t)(0x129ae7ce)));
  /* 12991879 push ecx */
  push32((uint32_t)(ECX));
  /* 1299187a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1299187c mov dx, word ptr [0x129ae7ca] */
  DX = (r16((uint32_t)(0x129ae7ca)));
  /* 12991883 push edx */
  push32((uint32_t)(EDX));
  /* 12991884 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12991887 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1299188a push ecx */
  push32((uint32_t)(ECX));
  /* 1299188b push 1 */
  push32((uint32_t)(0x1u));
  /* 1299188d push 1 */
  push32((uint32_t)(0x1u));
  /* 1299188f call 0x12991af0 */
  push32(0x12991894u); f_12991af0();
  /* 12991894 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12991897 jmp 0x129918ea */
  goto L_129918ea;
L_12991899:;
  /* 12991899 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1299189b mov dx, word ptr [0x129ae7d6] */
  DX = (r16((uint32_t)(0x129ae7d6)));
  /* 129918a2 push edx */
  push32((uint32_t)(EDX));
  /* 129918a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129918a5 mov ax, word ptr [0x129ae7d4] */
  AX = (r16((uint32_t)(0x129ae7d4)));
  /* 129918ab push eax */
  push32((uint32_t)(EAX));
  /* 129918ac xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129918ae mov cx, word ptr [0x129ae7d2] */
  CX = (r16((uint32_t)(0x129ae7d2)));
  /* 129918b5 push ecx */
  push32((uint32_t)(ECX));
  /* 129918b6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129918b8 mov dx, word ptr [0x129ae7d0] */
  DX = (r16((uint32_t)(0x129ae7d0)));
  /* 129918bf push edx */
  push32((uint32_t)(EDX));
  /* 129918c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129918c2 mov ax, word ptr [0x129ae7ce] */
  AX = (r16((uint32_t)(0x129ae7ce)));
  /* 129918c8 push eax */
  push32((uint32_t)(EAX));
  /* 129918c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 129918cb push 0 */
  push32((uint32_t)(0x0u));
  /* 129918cd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129918cf mov cx, word ptr [0x129ae7ca] */
  CX = (r16((uint32_t)(0x129ae7ca)));
  /* 129918d6 push ecx */
  push32((uint32_t)(ECX));
  /* 129918d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129918da mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 129918dd push eax */
  push32((uint32_t)(EAX));
  /* 129918de push 0 */
  push32((uint32_t)(0x0u));
  /* 129918e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 129918e2 call 0x12991af0 */
  push32(0x129918e7u); f_12991af0();
  /* 129918e7 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129918ea:;
  /* 129918ea xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129918ec mov cx, word ptr [0x129ae774] */
  CX = (r16((uint32_t)(0x129ae774)));
  /* 129918f3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129918f5 jne 0x12991952 */
  if (!C.zf) goto L_12991952;
  /* 129918f7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129918f9 mov dx, word ptr [0x129ae782] */
  DX = (r16((uint32_t)(0x129ae782)));
  /* 12991900 push edx */
  push32((uint32_t)(EDX));
  /* 12991901 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12991903 mov ax, word ptr [0x129ae780] */
  AX = (r16((uint32_t)(0x129ae780)));
  /* 12991909 push eax */
  push32((uint32_t)(EAX));
  /* 1299190a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1299190c mov cx, word ptr [0x129ae77e] */
  CX = (r16((uint32_t)(0x129ae77e)));
  /* 12991913 push ecx */
  push32((uint32_t)(ECX));
  /* 12991914 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12991916 mov dx, word ptr [0x129ae77c] */
  DX = (r16((uint32_t)(0x129ae77c)));
  /* 1299191d push edx */
  push32((uint32_t)(EDX));
  /* 1299191e push 0 */
  push32((uint32_t)(0x0u));
  /* 12991920 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12991922 mov ax, word ptr [0x129ae778] */
  AX = (r16((uint32_t)(0x129ae778)));
  /* 12991928 push eax */
  push32((uint32_t)(EAX));
  /* 12991929 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1299192b mov cx, word ptr [0x129ae77a] */
  CX = (r16((uint32_t)(0x129ae77a)));
  /* 12991932 push ecx */
  push32((uint32_t)(ECX));
  /* 12991933 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12991935 mov dx, word ptr [0x129ae776] */
  DX = (r16((uint32_t)(0x129ae776)));
  /* 1299193c push edx */
  push32((uint32_t)(EDX));
  /* 1299193d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12991940 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12991943 push ecx */
  push32((uint32_t)(ECX));
  /* 12991944 push 1 */
  push32((uint32_t)(0x1u));
  /* 12991946 push 0 */
  push32((uint32_t)(0x0u));
  /* 12991948 call 0x12991af0 */
  push32(0x1299194du); f_12991af0();
  /* 1299194d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12991950 jmp 0x129919a3 */
  goto L_129919a3;
L_12991952:;
  /* 12991952 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12991954 mov dx, word ptr [0x129ae782] */
  DX = (r16((uint32_t)(0x129ae782)));
  /* 1299195b push edx */
  push32((uint32_t)(EDX));
  /* 1299195c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1299195e mov ax, word ptr [0x129ae780] */
  AX = (r16((uint32_t)(0x129ae780)));
  /* 12991964 push eax */
  push32((uint32_t)(EAX));
  /* 12991965 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12991967 mov cx, word ptr [0x129ae77e] */
  CX = (r16((uint32_t)(0x129ae77e)));
  /* 1299196e push ecx */
  push32((uint32_t)(ECX));
  /* 1299196f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12991971 mov dx, word ptr [0x129ae77c] */
  DX = (r16((uint32_t)(0x129ae77c)));
  /* 12991978 push edx */
  push32((uint32_t)(EDX));
  /* 12991979 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1299197b mov ax, word ptr [0x129ae77a] */
  AX = (r16((uint32_t)(0x129ae77a)));
  /* 12991981 push eax */
  push32((uint32_t)(EAX));
  /* 12991982 push 0 */
  push32((uint32_t)(0x0u));
  /* 12991984 push 0 */
  push32((uint32_t)(0x0u));
  /* 12991986 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12991988 mov cx, word ptr [0x129ae776] */
  CX = (r16((uint32_t)(0x129ae776)));
  /* 1299198f push ecx */
  push32((uint32_t)(ECX));
  /* 12991990 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12991993 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12991996 push eax */
  push32((uint32_t)(EAX));
  /* 12991997 push 0 */
  push32((uint32_t)(0x0u));
  /* 12991999 push 0 */
  push32((uint32_t)(0x0u));
  /* 1299199b call 0x12991af0 */
  push32(0x129919a0u); f_12991af0();
  /* 129919a0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129919a3:;
  /* 129919a3 jmp 0x129919eb */
  goto L_129919eb;
L_129919a5:;
  /* 129919a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 129919a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 129919a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 129919ab push 2 */
  push32((uint32_t)(0x2u));
  /* 129919ad push 0 */
  push32((uint32_t)(0x0u));
  /* 129919af push 0 */
  push32((uint32_t)(0x0u));
  /* 129919b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 129919b3 push 4 */
  push32((uint32_t)(0x4u));
  /* 129919b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129919b8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 129919bb push edx */
  push32((uint32_t)(EDX));
  /* 129919bc push 1 */
  push32((uint32_t)(0x1u));
  /* 129919be push 1 */
  push32((uint32_t)(0x1u));
  /* 129919c0 call 0x12991af0 */
  push32(0x129919c5u); f_12991af0();
  /* 129919c5 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129919c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 129919ca push 0 */
  push32((uint32_t)(0x0u));
  /* 129919cc push 0 */
  push32((uint32_t)(0x0u));
  /* 129919ce push 2 */
  push32((uint32_t)(0x2u));
  /* 129919d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 129919d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 129919d4 push 5 */
  push32((uint32_t)(0x5u));
  /* 129919d6 push 0xa */
  push32((uint32_t)(0xau));
  /* 129919d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129919db mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 129919de push ecx */
  push32((uint32_t)(ECX));
  /* 129919df push 1 */
  push32((uint32_t)(0x1u));
  /* 129919e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 129919e3 call 0x12991af0 */
  push32(0x129919e8u); f_12991af0();
  /* 129919e8 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129919eb:;
  /* 129919eb mov edx, dword ptr [0x129ade2c] */
  EDX = (r32((uint32_t)(0x129ade2c)));
  /* 129919f1 cmp edx, dword ptr [0x129ade3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x129ade3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129919f7 jge 0x12991a44 */
  if ((C.sf==C.of)) goto L_12991a44;
  /* 129919f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129919fc mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 129919ff cmp ecx, dword ptr [0x129ade2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x129ade2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12991a05 jl 0x12991a15 */
  if ((C.sf!=C.of)) goto L_12991a15;
  /* 12991a07 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12991a0a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12991a0d cmp eax, dword ptr [0x129ade3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x129ade3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12991a13 jle 0x12991a1c */
  if ((C.zf||C.sf!=C.of)) goto L_12991a1c;
L_12991a15:;
  /* 12991a15 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12991a17 jmp 0x12991ae6 */
  goto L_12991ae6;
L_12991a1c:;
  /* 12991a1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12991a1f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12991a22 cmp edx, dword ptr [0x129ade2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x129ade2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12991a28 jle 0x12991a42 */
  if ((C.zf||C.sf!=C.of)) goto L_12991a42;
  /* 12991a2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12991a2d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12991a30 cmp ecx, dword ptr [0x129ade3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x129ade3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12991a36 jge 0x12991a42 */
  if ((C.sf==C.of)) goto L_12991a42;
  /* 12991a38 mov eax, 1 */
  EAX = (0x1u);
  /* 12991a3d jmp 0x12991ae6 */
  goto L_12991ae6;
L_12991a42:;
  /* 12991a42 jmp 0x12991a87 */
  goto L_12991a87;
L_12991a44:;
  /* 12991a44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12991a47 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12991a4a cmp eax, dword ptr [0x129ade3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x129ade3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12991a50 jl 0x12991a60 */
  if ((C.sf!=C.of)) goto L_12991a60;
  /* 12991a52 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12991a55 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12991a58 cmp edx, dword ptr [0x129ade2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x129ade2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12991a5e jle 0x12991a67 */
  if ((C.zf||C.sf!=C.of)) goto L_12991a67;
L_12991a60:;
  /* 12991a60 mov eax, 1 */
  EAX = (0x1u);
  /* 12991a65 jmp 0x12991ae6 */
  goto L_12991ae6;
L_12991a67:;
  /* 12991a67 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12991a6a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12991a6d cmp ecx, dword ptr [0x129ade3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x129ade3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12991a73 jle 0x12991a87 */
  if ((C.zf||C.sf!=C.of)) goto L_12991a87;
  /* 12991a75 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12991a78 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12991a7b cmp eax, dword ptr [0x129ade2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x129ade2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12991a81 jge 0x12991a87 */
  if ((C.sf==C.of)) goto L_12991a87;
  /* 12991a83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12991a85 jmp 0x12991ae6 */
  goto L_12991ae6;
L_12991a87:;
  /* 12991a87 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12991a8a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12991a8d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12991a90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12991a93 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12991a95 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12991a97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12991a9a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12991a9d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12991aa3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12991aa5 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12991aab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12991aae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12991ab1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12991ab4 cmp edx, dword ptr [0x129ade2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x129ade2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12991aba jne 0x12991ad2 */
  if (!C.zf) goto L_12991ad2;
  /* 12991abc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12991abf cmp eax, dword ptr [0x129ade30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x129ade30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12991ac5 jl 0x12991ace */
  if ((C.sf!=C.of)) goto L_12991ace;
  /* 12991ac7 mov eax, 1 */
  EAX = (0x1u);
  /* 12991acc jmp 0x12991ae6 */
  goto L_12991ae6;
L_12991ace:;
  /* 12991ace xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12991ad0 jmp 0x12991ae6 */
  goto L_12991ae6;
L_12991ad2:;
  /* 12991ad2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12991ad5 cmp ecx, dword ptr [0x129ade40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x129ade40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12991adb jge 0x12991ae4 */
  if ((C.sf==C.of)) goto L_12991ae4;
  /* 12991add mov eax, 1 */
  EAX = (0x1u);
  /* 12991ae2 jmp 0x12991ae6 */
  goto L_12991ae6;
L_12991ae4:;
  /* 12991ae4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12991ae6:;
  /* 12991ae6 mov esp, ebp */
  ESP = (EBP);
  /* 12991ae8 pop ebp */
  EBP = (pop32());
  /* 12991ae9 ret  */
  ESPCHK(0x129917f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011af0 @ 0x12991af0 (504 bytes, 145 insns) */
void f_12991af0(void) {
  FTRACE(0x12991af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12991af0 push ebp */
  push32((uint32_t)(EBP));
  /* 12991af1 mov ebp, esp */
  EBP = (ESP);
  /* 12991af3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12991af6 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12991afa jne 0x12991bcc */
  if (!C.zf) goto L_12991bcc;
  /* 12991b00 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12991b03 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12991b06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12991b08 jne 0x12991b19 */
  if (!C.zf) goto L_12991b19;
  /* 12991b0a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12991b0d mov edx, dword ptr [ecx*4 + 0x129ade4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x129ade4c)));
  /* 12991b14 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12991b17 jmp 0x12991b26 */
  goto L_12991b26;
L_12991b19:;
  /* 12991b19 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12991b1c mov ecx, dword ptr [eax*4 + 0x129ade80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x129ade80)));
  /* 12991b23 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12991b26:;
  /* 12991b26 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12991b29 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12991b2c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12991b2f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12991b32 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12991b35 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12991b3b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12991b3e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12991b40 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12991b43 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12991b46 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 12991b49 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 12991b4d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12991b4e mov ecx, 7 */
  ECX = (0x7u);
  /* 12991b53 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12991b55 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12991b58 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12991b5b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12991b5e jge 0x12991b79 */
  if ((C.sf==C.of)) goto L_12991b79;
  /* 12991b60 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12991b63 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12991b66 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12991b69 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12991b6c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12991b6f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12991b72 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12991b74 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12991b77 jmp 0x12991b8d */
  goto L_12991b8d;
L_12991b79:;
  /* 12991b79 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12991b7c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12991b7f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12991b82 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12991b85 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12991b88 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12991b8a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12991b8d:;
  /* 12991b8d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12991b91 jne 0x12991bca */
  if (!C.zf) goto L_12991bca;
  /* 12991b93 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12991b96 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12991b99 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12991b9b jne 0x12991bac */
  if (!C.zf) goto L_12991bac;
  /* 12991b9d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12991ba0 mov eax, dword ptr [edx*4 + 0x129ade50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x129ade50)));
  /* 12991ba7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12991baa jmp 0x12991bb9 */
  goto L_12991bb9;
L_12991bac:;
  /* 12991bac mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12991baf mov edx, dword ptr [ecx*4 + 0x129ade84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x129ade84)));
  /* 12991bb6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12991bb9:;
  /* 12991bb9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12991bbc cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12991bbf jle 0x12991bca */
  if ((C.zf||C.sf!=C.of)) goto L_12991bca;
  /* 12991bc1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12991bc4 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12991bc7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12991bca:;
  /* 12991bca jmp 0x12991c01 */
  goto L_12991c01;
L_12991bcc:;
  /* 12991bcc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12991bcf and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12991bd2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12991bd4 jne 0x12991be5 */
  if (!C.zf) goto L_12991be5;
  /* 12991bd6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12991bd9 mov ecx, dword ptr [eax*4 + 0x129ade4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x129ade4c)));
  /* 12991be0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12991be3 jmp 0x12991bf2 */
  goto L_12991bf2;
L_12991be5:;
  /* 12991be5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12991be8 mov eax, dword ptr [edx*4 + 0x129ade80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x129ade80)));
  /* 12991bef mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_12991bf2:;
  /* 12991bf2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12991bf5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12991bf8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12991bfb add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12991bfe mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12991c01:;
  /* 12991c01 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12991c05 jne 0x12991c41 */
  if (!C.zf) goto L_12991c41;
  /* 12991c07 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12991c0a mov dword ptr [0x129ade2c], eax */
  w32((uint32_t)(0x129ade2c), (EAX));
  /* 12991c0f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12991c12 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12991c15 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12991c18 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12991c1a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12991c1d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 12991c20 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12991c22 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12991c28 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 12991c2b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12991c2d mov dword ptr [0x129ade30], ecx */
  w32((uint32_t)(0x129ade30), (ECX));
  /* 12991c33 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12991c36 mov dword ptr [0x129ade28], edx */
  w32((uint32_t)(0x129ade28), (EDX));
  /* 12991c3c jmp 0x12991ce4 */
  goto L_12991ce4;
L_12991c41:;
  /* 12991c41 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12991c44 mov dword ptr [0x129ade3c], eax */
  w32((uint32_t)(0x129ade3c), (EAX));
  /* 12991c49 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12991c4c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12991c4f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12991c52 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12991c54 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12991c57 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 12991c5a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12991c5c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12991c62 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 12991c65 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12991c67 mov dword ptr [0x129ade40], ecx */
  w32((uint32_t)(0x129ade40), (ECX));
  /* 12991c6d mov edx, dword ptr [0x129add98] */
  EDX = (r32((uint32_t)(0x129add98)));
  /* 12991c73 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12991c79 mov eax, dword ptr [0x129ade40] */
  EAX = (r32((uint32_t)(0x129ade40)));
  /* 12991c7e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12991c80 mov dword ptr [0x129ade40], eax */
  w32((uint32_t)(0x129ade40), (EAX));
  /* 12991c85 cmp dword ptr [0x129ade40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ade40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12991c8c jge 0x12991cb1 */
  if ((C.sf==C.of)) goto L_12991cb1;
  /* 12991c8e mov ecx, dword ptr [0x129ade40] */
  ECX = (r32((uint32_t)(0x129ade40)));
  /* 12991c94 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12991c9a mov dword ptr [0x129ade40], ecx */
  w32((uint32_t)(0x129ade40), (ECX));
  /* 12991ca0 mov edx, dword ptr [0x129ade3c] */
  EDX = (r32((uint32_t)(0x129ade3c)));
  /* 12991ca6 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12991ca9 mov dword ptr [0x129ade3c], edx */
  w32((uint32_t)(0x129ade3c), (EDX));
  /* 12991caf jmp 0x12991cdb */
  goto L_12991cdb;
L_12991cb1:;
  /* 12991cb1 cmp dword ptr [0x129ade40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x129ade40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12991cbb jl 0x12991cdb */
  if ((C.sf!=C.of)) goto L_12991cdb;
  /* 12991cbd mov eax, dword ptr [0x129ade40] */
  EAX = (r32((uint32_t)(0x129ade40)));
  /* 12991cc2 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12991cc7 mov dword ptr [0x129ade40], eax */
  w32((uint32_t)(0x129ade40), (EAX));
  /* 12991ccc mov ecx, dword ptr [0x129ade3c] */
  ECX = (r32((uint32_t)(0x129ade3c)));
  /* 12991cd2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12991cd5 mov dword ptr [0x129ade3c], ecx */
  w32((uint32_t)(0x129ade3c), (ECX));
L_12991cdb:;
  /* 12991cdb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12991cde mov dword ptr [0x129ade38], edx */
  w32((uint32_t)(0x129ade38), (EDX));
L_12991ce4:;
  /* 12991ce4 mov esp, ebp */
  ESP = (EBP);
  /* 12991ce6 pop ebp */
  EBP = (pop32());
  /* 12991ce7 ret  */
  ESPCHK(0x12991af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011cf0 @ 0x12991cf0 (382 bytes, 135 insns) */
void f_12991cf0(void) {
  FTRACE(0x12991cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12991cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12991cf1 mov ebp, esp */
  EBP = (ESP);
  /* 12991cf3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12991cf5 push 0x129aa830 */
  push32((uint32_t)(0x129aa830u));
  /* 12991cfa push 0x1298b9b8 */
  push32((uint32_t)(0x1298b9b8u));
  /* 12991cff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12991d05 push eax */
  push32((uint32_t)(EAX));
  /* 12991d06 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12991d0d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12991d10 push ebx */
  push32((uint32_t)(EBX));
  /* 12991d11 push esi */
  push32((uint32_t)(ESI));
  /* 12991d12 push edi */
  push32((uint32_t)(EDI));
  /* 12991d13 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12991d16 cmp dword ptr [0x129ae7e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae7e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12991d1d jne 0x12991d62 */
  if (!C.zf) goto L_12991d62;
  /* 12991d1f push 0 */
  push32((uint32_t)(0x0u));
  /* 12991d21 push 0 */
  push32((uint32_t)(0x0u));
  /* 12991d23 push 1 */
  push32((uint32_t)(0x1u));
  /* 12991d25 push 0 */
  push32((uint32_t)(0x0u));
  /* 12991d27 call dword ptr [0x129b0230] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0230))), 0x12991d2du);
  /* 12991d2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12991d2f je 0x12991d3d */
  if (C.zf) goto L_12991d3d;
  /* 12991d31 mov dword ptr [0x129ae7e4], 1 */
  w32((uint32_t)(0x129ae7e4), (0x1u));
  /* 12991d3b jmp 0x12991d62 */
  goto L_12991d62;
L_12991d3d:;
  /* 12991d3d push 0 */
  push32((uint32_t)(0x0u));
  /* 12991d3f push 0 */
  push32((uint32_t)(0x0u));
  /* 12991d41 push 1 */
  push32((uint32_t)(0x1u));
  /* 12991d43 push 0 */
  push32((uint32_t)(0x0u));
  /* 12991d45 call dword ptr [0x129b0338] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0338))), 0x12991d4bu);
  /* 12991d4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12991d4d je 0x12991d5b */
  if (C.zf) goto L_12991d5b;
  /* 12991d4f mov dword ptr [0x129ae7e4], 2 */
  w32((uint32_t)(0x129ae7e4), (0x2u));
  /* 12991d59 jmp 0x12991d62 */
  goto L_12991d62;
L_12991d5b:;
  /* 12991d5b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12991d5d jmp 0x12991e71 */
  goto L_12991e71;
L_12991d62:;
  /* 12991d62 cmp dword ptr [0x129ae7e4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x129ae7e4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12991d69 jne 0x12991d86 */
  if (!C.zf) goto L_12991d86;
  /* 12991d6b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12991d6e push eax */
  push32((uint32_t)(EAX));
  /* 12991d6f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12991d72 push ecx */
  push32((uint32_t)(ECX));
  /* 12991d73 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12991d76 push edx */
  push32((uint32_t)(EDX));
  /* 12991d77 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12991d7a push eax */
  push32((uint32_t)(EAX));
  /* 12991d7b call dword ptr [0x129b0230] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0230))), 0x12991d81u);
  /* 12991d81 jmp 0x12991e71 */
  goto L_12991e71;
L_12991d86:;
  /* 12991d86 cmp dword ptr [0x129ae7e4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x129ae7e4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12991d8d jne 0x12991e6f */
  if (!C.zf) goto L_12991e6f;
  /* 12991d93 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12991d97 jne 0x12991da2 */
  if (!C.zf) goto L_12991da2;
  /* 12991d99 mov ecx, dword ptr [0x129ae698] */
  ECX = (r32((uint32_t)(0x129ae698)));
  /* 12991d9f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12991da2:;
  /* 12991da2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12991da4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12991da6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12991da9 push edx */
  push32((uint32_t)(EDX));
  /* 12991daa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12991dad push eax */
  push32((uint32_t)(EAX));
  /* 12991dae call dword ptr [0x129b0338] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0338))), 0x12991db4u);
  /* 12991db4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12991db7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12991dbb jne 0x12991dc4 */
  if (!C.zf) goto L_12991dc4;
  /* 12991dbd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12991dbf jmp 0x12991e71 */
  goto L_12991e71;
L_12991dc4:;
  /* 12991dc4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12991dcb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12991dce add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12991dd1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12991dd3 call 0x12985a50 */
  push32(0x12991dd8u); f_12985a50();
  /* 12991dd8 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 12991ddb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12991dde mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12991de1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12991de4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12991deb jmp 0x12991e04 */
  goto L_12991e04;
  /* 12991ded mov eax, 1 */
  EAX = (0x1u);
  /* 12991df2 ret  */
  ESPCHK(0x12991cf0u, _esp0);
  ESP += 4; return;
  /* 12991df3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12991df6 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12991dfd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12991e04:;
  /* 12991e04 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12991e08 jne 0x12991e0e */
  if (!C.zf) goto L_12991e0e;
  /* 12991e0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12991e0c jmp 0x12991e71 */
  goto L_12991e71;
L_12991e0e:;
  /* 12991e0e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12991e11 push edx */
  push32((uint32_t)(EDX));
  /* 12991e12 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12991e15 push eax */
  push32((uint32_t)(EAX));
  /* 12991e16 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12991e19 push ecx */
  push32((uint32_t)(ECX));
  /* 12991e1a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12991e1d push edx */
  push32((uint32_t)(EDX));
  /* 12991e1e call dword ptr [0x129b0338] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0338))), 0x12991e24u);
  /* 12991e24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12991e26 jne 0x12991e2c */
  if (!C.zf) goto L_12991e2c;
  /* 12991e28 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12991e2a jmp 0x12991e71 */
  goto L_12991e71;
L_12991e2c:;
  /* 12991e2c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12991e30 jne 0x12991e4d */
  if (!C.zf) goto L_12991e4d;
  /* 12991e32 push 0 */
  push32((uint32_t)(0x0u));
  /* 12991e34 push 0 */
  push32((uint32_t)(0x0u));
  /* 12991e36 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12991e38 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12991e3b push eax */
  push32((uint32_t)(EAX));
  /* 12991e3c push 1 */
  push32((uint32_t)(0x1u));
  /* 12991e3e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12991e41 push ecx */
  push32((uint32_t)(ECX));
  /* 12991e42 call dword ptr [0x129b030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b030c))), 0x12991e48u);
  /* 12991e48 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12991e4b jmp 0x12991e6a */
  goto L_12991e6a;
L_12991e4d:;
  /* 12991e4d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12991e50 push edx */
  push32((uint32_t)(EDX));
  /* 12991e51 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12991e54 push eax */
  push32((uint32_t)(EAX));
  /* 12991e55 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12991e57 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12991e5a push ecx */
  push32((uint32_t)(ECX));
  /* 12991e5b push 1 */
  push32((uint32_t)(0x1u));
  /* 12991e5d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12991e60 push edx */
  push32((uint32_t)(EDX));
  /* 12991e61 call dword ptr [0x129b030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b030c))), 0x12991e67u);
  /* 12991e67 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12991e6a:;
  /* 12991e6a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12991e6d jmp 0x12991e71 */
  goto L_12991e71;
L_12991e6f:;
  /* 12991e6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12991e71:;
  /* 12991e71 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12991e74 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12991e77 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12991e7e pop edi */
  EDI = (pop32());
  /* 12991e7f pop esi */
  ESI = (pop32());
  /* 12991e80 pop ebx */
  EBX = (pop32());
  /* 12991e81 mov esp, ebp */
  ESP = (EBP);
  /* 12991e83 pop ebp */
  EBP = (pop32());
  /* 12991e84 ret  */
  ESPCHK(0x12991cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e90 @ 0x12991e90 (398 bytes, 140 insns) */
void f_12991e90(void) {
  FTRACE(0x12991e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12991e90 push ebp */
  push32((uint32_t)(EBP));
  /* 12991e91 mov ebp, esp */
  EBP = (ESP);
  /* 12991e93 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12991e95 push 0x129aa840 */
  push32((uint32_t)(0x129aa840u));
  /* 12991e9a push 0x1298b9b8 */
  push32((uint32_t)(0x1298b9b8u));
  /* 12991e9f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12991ea5 push eax */
  push32((uint32_t)(EAX));
  /* 12991ea6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12991ead add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12991eb0 push ebx */
  push32((uint32_t)(EBX));
  /* 12991eb1 push esi */
  push32((uint32_t)(ESI));
  /* 12991eb2 push edi */
  push32((uint32_t)(EDI));
  /* 12991eb3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12991eb6 cmp dword ptr [0x129ae7e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae7e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12991ebd jne 0x12991f02 */
  if (!C.zf) goto L_12991f02;
  /* 12991ebf push 0 */
  push32((uint32_t)(0x0u));
  /* 12991ec1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12991ec3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12991ec5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12991ec7 call dword ptr [0x129b0230] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0230))), 0x12991ecdu);
  /* 12991ecd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12991ecf je 0x12991edd */
  if (C.zf) goto L_12991edd;
  /* 12991ed1 mov dword ptr [0x129ae7e8], 1 */
  w32((uint32_t)(0x129ae7e8), (0x1u));
  /* 12991edb jmp 0x12991f02 */
  goto L_12991f02;
L_12991edd:;
  /* 12991edd push 0 */
  push32((uint32_t)(0x0u));
  /* 12991edf push 0 */
  push32((uint32_t)(0x0u));
  /* 12991ee1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12991ee3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12991ee5 call dword ptr [0x129b0338] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0338))), 0x12991eebu);
  /* 12991eeb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12991eed je 0x12991efb */
  if (C.zf) goto L_12991efb;
  /* 12991eef mov dword ptr [0x129ae7e8], 2 */
  w32((uint32_t)(0x129ae7e8), (0x2u));
  /* 12991ef9 jmp 0x12991f02 */
  goto L_12991f02;
L_12991efb:;
  /* 12991efb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12991efd jmp 0x12992021 */
  goto L_12992021;
L_12991f02:;
  /* 12991f02 cmp dword ptr [0x129ae7e8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x129ae7e8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12991f09 jne 0x12991f26 */
  if (!C.zf) goto L_12991f26;
  /* 12991f0b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12991f0e push eax */
  push32((uint32_t)(EAX));
  /* 12991f0f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12991f12 push ecx */
  push32((uint32_t)(ECX));
  /* 12991f13 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12991f16 push edx */
  push32((uint32_t)(EDX));
  /* 12991f17 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12991f1a push eax */
  push32((uint32_t)(EAX));
  /* 12991f1b call dword ptr [0x129b0338] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0338))), 0x12991f21u);
  /* 12991f21 jmp 0x12992021 */
  goto L_12992021;
L_12991f26:;
  /* 12991f26 cmp dword ptr [0x129ae7e8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x129ae7e8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12991f2d jne 0x1299201f */
  if (!C.zf) goto L_1299201f;
  /* 12991f33 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12991f37 jne 0x12991f42 */
  if (!C.zf) goto L_12991f42;
  /* 12991f39 mov ecx, dword ptr [0x129ae698] */
  ECX = (r32((uint32_t)(0x129ae698)));
  /* 12991f3f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12991f42:;
  /* 12991f42 push 0 */
  push32((uint32_t)(0x0u));
  /* 12991f44 push 0 */
  push32((uint32_t)(0x0u));
  /* 12991f46 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12991f49 push edx */
  push32((uint32_t)(EDX));
  /* 12991f4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12991f4d push eax */
  push32((uint32_t)(EAX));
  /* 12991f4e call dword ptr [0x129b0230] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0230))), 0x12991f54u);
  /* 12991f54 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12991f57 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12991f5b jne 0x12991f64 */
  if (!C.zf) goto L_12991f64;
  /* 12991f5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12991f5f jmp 0x12992021 */
  goto L_12992021;
L_12991f64:;
  /* 12991f64 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12991f6b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12991f6e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12991f70 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12991f73 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12991f75 call 0x12985a50 */
  push32(0x12991f7au); f_12985a50();
  /* 12991f7a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 12991f7d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12991f80 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12991f83 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12991f86 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12991f8d jmp 0x12991fa6 */
  goto L_12991fa6;
  /* 12991f8f mov eax, 1 */
  EAX = (0x1u);
  /* 12991f94 ret  */
  ESPCHK(0x12991e90u, _esp0);
  ESP += 4; return;
  /* 12991f95 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12991f98 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12991f9f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12991fa6:;
  /* 12991fa6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12991faa jne 0x12991fb0 */
  if (!C.zf) goto L_12991fb0;
  /* 12991fac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12991fae jmp 0x12992021 */
  goto L_12992021;
L_12991fb0:;
  /* 12991fb0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12991fb3 push edx */
  push32((uint32_t)(EDX));
  /* 12991fb4 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12991fb7 push eax */
  push32((uint32_t)(EAX));
  /* 12991fb8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12991fbb push ecx */
  push32((uint32_t)(ECX));
  /* 12991fbc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12991fbf push edx */
  push32((uint32_t)(EDX));
  /* 12991fc0 call dword ptr [0x129b0230] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0230))), 0x12991fc6u);
  /* 12991fc6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12991fc8 jne 0x12991fce */
  if (!C.zf) goto L_12991fce;
  /* 12991fca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12991fcc jmp 0x12992021 */
  goto L_12992021;
L_12991fce:;
  /* 12991fce cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12991fd2 jne 0x12991ff6 */
  if (!C.zf) goto L_12991ff6;
  /* 12991fd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12991fd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12991fd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12991fda push 0 */
  push32((uint32_t)(0x0u));
  /* 12991fdc push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12991fde mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12991fe1 push eax */
  push32((uint32_t)(EAX));
  /* 12991fe2 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12991fe7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12991fea push ecx */
  push32((uint32_t)(ECX));
  /* 12991feb call dword ptr [0x129b021c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b021c))), 0x12991ff1u);
  /* 12991ff1 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12991ff4 jmp 0x1299201a */
  goto L_1299201a;
L_12991ff6:;
  /* 12991ff6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12991ff8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12991ffa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12991ffd push edx */
  push32((uint32_t)(EDX));
  /* 12991ffe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12992001 push eax */
  push32((uint32_t)(EAX));
  /* 12992002 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12992004 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12992007 push ecx */
  push32((uint32_t)(ECX));
  /* 12992008 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1299200d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12992010 push edx */
  push32((uint32_t)(EDX));
  /* 12992011 call dword ptr [0x129b021c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b021c))), 0x12992017u);
  /* 12992017 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1299201a:;
  /* 1299201a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1299201d jmp 0x12992021 */
  goto L_12992021;
L_1299201f:;
  /* 1299201f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12992021:;
  /* 12992021 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12992024 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12992027 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1299202e pop edi */
  EDI = (pop32());
  /* 1299202f pop esi */
  ESI = (pop32());
  /* 12992030 pop ebx */
  EBX = (pop32());
  /* 12992031 mov esp, ebp */
  ESP = (EBP);
  /* 12992033 pop ebp */
  EBP = (pop32());
  /* 12992034 ret  */
  ESPCHK(0x12991e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10012040 @ 0x12992040 (11 bytes, 6 insns) */
void f_12992040(void) {
  FTRACE(0x12992040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12992040 push ebp */
  push32((uint32_t)(EBP));
  /* 12992041 mov ebp, esp */
  EBP = (ESP);
  /* 12992043 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12992046 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12992049 pop ebp */
  EBP = (pop32());
  /* 1299204a ret  */
  ESPCHK(0x12992040u, _esp0);
  ESP += 4; return;
}

/* FUN_10012050 @ 0x12992050 (147 bytes, 43 insns) */
void f_12992050(void) {
  FTRACE(0x12992050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12992050 push ebp */
  push32((uint32_t)(EBP));
  /* 12992051 mov ebp, esp */
  EBP = (ESP);
  /* 12992053 push ecx */
  push32((uint32_t)(ECX));
  /* 12992054 cmp dword ptr [0x129ae688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1299205b jne 0x12992077 */
  if (!C.zf) goto L_12992077;
  /* 1299205d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12992061 jl 0x12992072 */
  if ((C.sf!=C.of)) goto L_12992072;
  /* 12992063 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12992067 jg 0x12992072 */
  if ((!C.zf&&C.sf==C.of)) goto L_12992072;
  /* 12992069 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1299206c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1299206f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12992072:;
  /* 12992072 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12992075 jmp 0x129920df */
  goto L_129920df;
L_12992077:;
  /* 12992077 push 0x129ae814 */
  push32((uint32_t)(0x129ae814u));
  /* 1299207c call dword ptr [0x129b0268] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0268))), 0x12992082u);
  /* 12992082 cmp dword ptr [0x129ae804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12992089 je 0x129920a9 */
  if (C.zf) goto L_129920a9;
  /* 1299208b push 0x129ae814 */
  push32((uint32_t)(0x129ae814u));
  /* 12992090 call dword ptr [0x129b0258] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0258))), 0x12992096u);
  /* 12992096 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12992098 call 0x129862b0 */
  push32(0x1299209du); f_129862b0();
  /* 1299209d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129920a0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 129920a7 jmp 0x129920b0 */
  goto L_129920b0;
L_129920a9:;
  /* 129920a9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_129920b0:;
  /* 129920b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129920b3 push ecx */
  push32((uint32_t)(ECX));
  /* 129920b4 call 0x129920f0 */
  push32(0x129920b9u); f_129920f0();
  /* 129920b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129920bc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 129920bf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129920c3 je 0x129920d1 */
  if (C.zf) goto L_129920d1;
  /* 129920c5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 129920c7 call 0x12986350 */
  push32(0x129920ccu); f_12986350();
  /* 129920cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129920cf jmp 0x129920dc */
  goto L_129920dc;
L_129920d1:;
  /* 129920d1 push 0x129ae814 */
  push32((uint32_t)(0x129ae814u));
  /* 129920d6 call dword ptr [0x129b0258] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0258))), 0x129920dcu);
L_129920dc:;
  /* 129920dc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_129920df:;
  /* 129920df mov esp, ebp */
  ESP = (EBP);
  /* 129920e1 pop ebp */
  EBP = (pop32());
  /* 129920e2 ret  */
  ESPCHK(0x12992050u, _esp0);
  ESP += 4; return;
}

/* FUN_100120f0 @ 0x129920f0 (299 bytes, 91 insns) */
void f_129920f0(void) {
  FTRACE(0x129920f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129920f0 push ebp */
  push32((uint32_t)(EBP));
  /* 129920f1 mov ebp, esp */
  EBP = (ESP);
  /* 129920f3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129920f6 cmp dword ptr [0x129ae688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129920fd jne 0x1299211c */
  if (!C.zf) goto L_1299211c;
  /* 129920ff cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12992103 jl 0x12992114 */
  if ((C.sf!=C.of)) goto L_12992114;
  /* 12992105 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12992109 jg 0x12992114 */
  if ((!C.zf&&C.sf==C.of)) goto L_12992114;
  /* 1299210b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1299210e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12992111 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12992114:;
  /* 12992114 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12992117 jmp 0x12992217 */
  goto L_12992217;
L_1299211c:;
  /* 1299211c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12992123 jge 0x12992163 */
  if ((C.sf==C.of)) goto L_12992163;
  /* 12992125 cmp dword ptr [0x129acea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x129acea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1299212c jle 0x12992141 */
  if ((C.zf||C.sf!=C.of)) goto L_12992141;
  /* 1299212e push 1 */
  push32((uint32_t)(0x1u));
  /* 12992130 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12992133 push ecx */
  push32((uint32_t)(ECX));
  /* 12992134 call 0x129888c0 */
  push32(0x12992139u); f_129888c0();
  /* 12992139 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1299213c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1299213f jmp 0x12992155 */
  goto L_12992155;
L_12992141:;
  /* 12992141 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12992144 mov eax, dword ptr [0x129acc98] */
  EAX = (r32((uint32_t)(0x129acc98)));
  /* 12992149 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1299214b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1299214f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12992152 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12992155:;
  /* 12992155 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12992159 jne 0x12992163 */
  if (!C.zf) goto L_12992163;
  /* 1299215b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1299215e jmp 0x12992217 */
  goto L_12992217;
L_12992163:;
  /* 12992163 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12992166 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12992169 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1299216f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12992175 mov eax, dword ptr [0x129acc98] */
  EAX = (r32((uint32_t)(0x129acc98)));
  /* 1299217a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1299217c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12992180 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12992186 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12992188 je 0x129921ac */
  if (C.zf) goto L_129921ac;
  /* 1299218a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1299218d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12992190 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12992196 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 12992199 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1299219c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 1299219f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 129921a3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 129921aa jmp 0x129921bd */
  goto L_129921bd;
L_129921ac:;
  /* 129921ac mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 129921af mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 129921b2 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 129921b6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_129921bd:;
  /* 129921bd push 1 */
  push32((uint32_t)(0x1u));
  /* 129921bf push 0 */
  push32((uint32_t)(0x0u));
  /* 129921c1 push 3 */
  push32((uint32_t)(0x3u));
  /* 129921c3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 129921c6 push edx */
  push32((uint32_t)(EDX));
  /* 129921c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129921ca push eax */
  push32((uint32_t)(EAX));
  /* 129921cb lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 129921ce push ecx */
  push32((uint32_t)(ECX));
  /* 129921cf push 0x100 */
  push32((uint32_t)(0x100u));
  /* 129921d4 mov edx, dword ptr [0x129ae688] */
  EDX = (r32((uint32_t)(0x129ae688)));
  /* 129921da push edx */
  push32((uint32_t)(EDX));
  /* 129921db call 0x1298aca0 */
  push32(0x129921e0u); f_1298aca0();
  /* 129921e0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129921e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129921e6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129921ea jne 0x129921f1 */
  if (!C.zf) goto L_129921f1;
  /* 129921ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129921ef jmp 0x12992217 */
  goto L_12992217;
L_129921f1:;
  /* 129921f1 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129921f5 jne 0x12992201 */
  if (!C.zf) goto L_12992201;
  /* 129921f7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129921fa and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 129921ff jmp 0x12992217 */
  goto L_12992217;
L_12992201:;
  /* 12992201 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12992204 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12992209 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 1299220c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12992212 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12992215 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_12992217:;
  /* 12992217 mov esp, ebp */
  ESP = (EBP);
  /* 12992219 pop ebp */
  EBP = (pop32());
  /* 1299221a ret  */
  ESPCHK(0x129920f0u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x12992220 (52 bytes, 19 insns) */
void f_12992220(void) {
  FTRACE(0x12992220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12992220 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12992224 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 12992228 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1299222a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1299222e jne 0x12992239 */
  if (!C.zf) goto L_12992239;
  /* 12992230 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12992234 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12992236 ret 0x10 */
  ESPCHK(0x12992220u, _esp0);
  ESP += 20; return;
L_12992239:;
  /* 12992239 push ebx */
  push32((uint32_t)(EBX));
  /* 1299223a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1299223c mov ebx, eax */
  EBX = (EAX);
  /* 1299223e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12992242 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12992246 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 12992248 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1299224c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1299224e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12992250 pop ebx */
  EBX = (pop32());
  /* 12992251 ret 0x10 */
  ESPCHK(0x12992220u, _esp0);
  ESP += 20; return;
}

/* FUN_10012260 @ 0x12992260 (46 bytes, 18 insns) */
void f_12992260(void) {
  FTRACE(0x12992260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12992260 push ebp */
  push32((uint32_t)(EBP));
  /* 12992261 mov ebp, esp */
  EBP = (ESP);
  /* 12992263 push ecx */
  push32((uint32_t)(ECX));
  /* 12992264 push 0xc */
  push32((uint32_t)(0xcu));
  /* 12992266 call 0x129862b0 */
  push32(0x1299226bu); f_129862b0();
  /* 1299226b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1299226e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12992271 push eax */
  push32((uint32_t)(EAX));
  /* 12992272 call 0x12992290 */
  push32(0x12992277u); f_12992290();
  /* 12992277 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1299227a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1299227d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1299227f call 0x12986350 */
  push32(0x12992284u); f_12986350();
  /* 12992284 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12992287 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1299228a mov esp, ebp */
  ESP = (EBP);
  /* 1299228c pop ebp */
  EBP = (pop32());
  /* 1299228d ret  */
  ESPCHK(0x12992260u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x12992290 (198 bytes, 69 insns) */
void f_12992290(void) {
  FTRACE(0x12992290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12992290 push ebp */
  push32((uint32_t)(EBP));
  /* 12992291 mov ebp, esp */
  EBP = (ESP);
  /* 12992293 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12992296 mov eax, dword ptr [0x129ae4a4] */
  EAX = (r32((uint32_t)(0x129ae4a4)));
  /* 1299229b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1299229e cmp dword ptr [0x129affa0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129affa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129922a5 jne 0x129922ae */
  if (!C.zf) goto L_129922ae;
  /* 129922a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129922a9 jmp 0x12992352 */
  goto L_12992352;
L_129922ae:;
  /* 129922ae cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129922b2 jne 0x129922d6 */
  if (!C.zf) goto L_129922d6;
  /* 129922b4 cmp dword ptr [0x129ae4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129922bb je 0x129922d6 */
  if (C.zf) goto L_129922d6;
  /* 129922bd call 0x129923b0 */
  push32(0x129922c2u); f_129923b0();
  /* 129922c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129922c4 je 0x129922cd */
  if (C.zf) goto L_129922cd;
  /* 129922c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129922c8 jmp 0x12992352 */
  goto L_12992352;
L_129922cd:;
  /* 129922cd mov ecx, dword ptr [0x129ae4a4] */
  ECX = (r32((uint32_t)(0x129ae4a4)));
  /* 129922d3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_129922d6:;
  /* 129922d6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129922da je 0x12992350 */
  if (C.zf) goto L_12992350;
  /* 129922dc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129922e0 je 0x12992350 */
  if (C.zf) goto L_12992350;
  /* 129922e2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129922e5 push edx */
  push32((uint32_t)(EDX));
  /* 129922e6 call 0x129856e0 */
  push32(0x129922ebu); f_129856e0();
  /* 129922eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129922ee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_129922f1:;
  /* 129922f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129922f4 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129922f7 je 0x12992350 */
  if (C.zf) goto L_12992350;
  /* 129922f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129922fc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129922fe push edx */
  push32((uint32_t)(EDX));
  /* 129922ff call 0x129856e0 */
  push32(0x12992304u); f_129856e0();
  /* 12992304 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12992307 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1299230a jbe 0x12992345 */
  if ((C.cf||C.zf)) goto L_12992345;
  /* 1299230c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1299230f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12992311 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12992314 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 12992318 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1299231b jne 0x12992345 */
  if (!C.zf) goto L_12992345;
  /* 1299231d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12992320 push ecx */
  push32((uint32_t)(ECX));
  /* 12992321 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12992324 push edx */
  push32((uint32_t)(EDX));
  /* 12992325 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12992328 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1299232a push ecx */
  push32((uint32_t)(ECX));
  /* 1299232b call 0x12992360 */
  push32(0x12992330u); f_12992360();
  /* 12992330 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12992333 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12992335 jne 0x12992345 */
  if (!C.zf) goto L_12992345;
  /* 12992337 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1299233a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1299233c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1299233f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 12992343 jmp 0x12992352 */
  goto L_12992352;
L_12992345:;
  /* 12992345 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12992348 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1299234b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1299234e jmp 0x129922f1 */
  goto L_129922f1;
L_12992350:;
  /* 12992350 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12992352:;
  /* 12992352 mov esp, ebp */
  ESP = (EBP);
  /* 12992354 pop ebp */
  EBP = (pop32());
  /* 12992355 ret  */
  ESPCHK(0x12992290u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x12992360 (79 bytes, 32 insns) */
void f_12992360(void) {
  FTRACE(0x12992360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12992360 push ebp */
  push32((uint32_t)(EBP));
  /* 12992361 mov ebp, esp */
  EBP = (ESP);
  /* 12992363 push ecx */
  push32((uint32_t)(ECX));
  /* 12992364 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12992368 jne 0x1299236e */
  if (!C.zf) goto L_1299236e;
  /* 1299236a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1299236c jmp 0x129923ab */
  goto L_129923ab;
L_1299236e:;
  /* 1299236e mov eax, dword ptr [0x129afb64] */
  EAX = (r32((uint32_t)(0x129afb64)));
  /* 12992373 push eax */
  push32((uint32_t)(EAX));
  /* 12992374 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12992377 push ecx */
  push32((uint32_t)(ECX));
  /* 12992378 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1299237b push edx */
  push32((uint32_t)(EDX));
  /* 1299237c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1299237f push eax */
  push32((uint32_t)(EAX));
  /* 12992380 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12992383 push ecx */
  push32((uint32_t)(ECX));
  /* 12992384 push 1 */
  push32((uint32_t)(0x1u));
  /* 12992386 mov edx, dword ptr [0x129afe04] */
  EDX = (r32((uint32_t)(0x129afe04)));
  /* 1299238c push edx */
  push32((uint32_t)(EDX));
  /* 1299238d call 0x12992460 */
  push32(0x12992392u); f_12992460();
  /* 12992392 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12992395 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12992398 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1299239c jne 0x129923a5 */
  if (!C.zf) goto L_129923a5;
  /* 1299239e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 129923a3 jmp 0x129923ab */
  goto L_129923ab;
L_129923a5:;
  /* 129923a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129923a8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_129923ab:;
  /* 129923ab mov esp, ebp */
  ESP = (EBP);
  /* 129923ad pop ebp */
  EBP = (pop32());
  /* 129923ae ret  */
  ESPCHK(0x12992360u, _esp0);
  ESP += 4; return;
}

/* FUN_100123b0 @ 0x129923b0 (174 bytes, 66 insns) */
void f_129923b0(void) {
  FTRACE(0x129923b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129923b0 push ebp */
  push32((uint32_t)(EBP));
  /* 129923b1 mov ebp, esp */
  EBP = (ESP);
  /* 129923b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129923b6 mov eax, dword ptr [0x129ae4ac] */
  EAX = (r32((uint32_t)(0x129ae4ac)));
  /* 129923bb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_129923be:;
  /* 129923be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129923c1 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129923c4 je 0x12992458 */
  if (C.zf) goto L_12992458;
  /* 129923ca push 0 */
  push32((uint32_t)(0x0u));
  /* 129923cc push 0 */
  push32((uint32_t)(0x0u));
  /* 129923ce push 0 */
  push32((uint32_t)(0x0u));
  /* 129923d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 129923d2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 129923d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129923d7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129923d9 push eax */
  push32((uint32_t)(EAX));
  /* 129923da push 0 */
  push32((uint32_t)(0x0u));
  /* 129923dc push 1 */
  push32((uint32_t)(0x1u));
  /* 129923de call dword ptr [0x129b021c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b021c))), 0x129923e4u);
  /* 129923e4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 129923e7 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129923eb jne 0x129923f2 */
  if (!C.zf) goto L_129923f2;
  /* 129923ed or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129923f0 jmp 0x1299245a */
  goto L_1299245a;
L_129923f2:;
  /* 129923f2 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 129923f4 push 0x129aa84c */
  push32((uint32_t)(0x129aa84cu));
  /* 129923f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 129923fb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129923fe push ecx */
  push32((uint32_t)(ECX));
  /* 129923ff call 0x129828b0 */
  push32(0x12992404u); f_129828b0();
  /* 12992404 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12992407 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1299240a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1299240e jne 0x12992415 */
  if (!C.zf) goto L_12992415;
  /* 12992410 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12992413 jmp 0x1299245a */
  goto L_1299245a;
L_12992415:;
  /* 12992415 push 0 */
  push32((uint32_t)(0x0u));
  /* 12992417 push 0 */
  push32((uint32_t)(0x0u));
  /* 12992419 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1299241c push edx */
  push32((uint32_t)(EDX));
  /* 1299241d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12992420 push eax */
  push32((uint32_t)(EAX));
  /* 12992421 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12992423 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12992426 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12992428 push edx */
  push32((uint32_t)(EDX));
  /* 12992429 push 0 */
  push32((uint32_t)(0x0u));
  /* 1299242b push 1 */
  push32((uint32_t)(0x1u));
  /* 1299242d call dword ptr [0x129b021c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b021c))), 0x12992433u);
  /* 12992433 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12992435 jne 0x1299243c */
  if (!C.zf) goto L_1299243c;
  /* 12992437 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1299243a jmp 0x1299245a */
  goto L_1299245a;
L_1299243c:;
  /* 1299243c push 0 */
  push32((uint32_t)(0x0u));
  /* 1299243e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12992441 push eax */
  push32((uint32_t)(EAX));
  /* 12992442 call 0x129928b0 */
  push32(0x12992447u); f_129928b0();
  /* 12992447 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1299244a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1299244d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12992450 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12992453 jmp 0x129923be */
  goto L_129923be;
L_12992458:;
  /* 12992458 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1299245a:;
  /* 1299245a mov esp, ebp */
  ESP = (EBP);
  /* 1299245c pop ebp */
  EBP = (pop32());
  /* 1299245d ret  */
  ESPCHK(0x129923b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012460 @ 0x12992460 (970 bytes, 340 insns) */
void f_12992460(void) {
  FTRACE(0x12992460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12992460 push ebp */
  push32((uint32_t)(EBP));
  /* 12992461 mov ebp, esp */
  EBP = (ESP);
  /* 12992463 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12992465 push 0x129aa8a0 */
  push32((uint32_t)(0x129aa8a0u));
  /* 1299246a push 0x1298b9b8 */
  push32((uint32_t)(0x1298b9b8u));
  /* 1299246f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12992475 push eax */
  push32((uint32_t)(EAX));
  /* 12992476 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1299247d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12992480 push ebx */
  push32((uint32_t)(EBX));
  /* 12992481 push esi */
  push32((uint32_t)(ESI));
  /* 12992482 push edi */
  push32((uint32_t)(EDI));
  /* 12992483 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12992486 cmp dword ptr [0x129ae7ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae7ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1299248d jne 0x129924e6 */
  if (!C.zf) goto L_129924e6;
  /* 1299248f push 1 */
  push32((uint32_t)(0x1u));
  /* 12992491 push 0x129a9efc */
  push32((uint32_t)(0x129a9efcu));
  /* 12992496 push 1 */
  push32((uint32_t)(0x1u));
  /* 12992498 push 0x129a9efc */
  push32((uint32_t)(0x129a9efcu));
  /* 1299249d push 0 */
  push32((uint32_t)(0x0u));
  /* 1299249f push 0 */
  push32((uint32_t)(0x0u));
  /* 129924a1 call dword ptr [0x129b0228] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0228))), 0x129924a7u);
  /* 129924a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129924a9 je 0x129924b7 */
  if (C.zf) goto L_129924b7;
  /* 129924ab mov dword ptr [0x129ae7ec], 1 */
  w32((uint32_t)(0x129ae7ec), (0x1u));
  /* 129924b5 jmp 0x129924e6 */
  goto L_129924e6;
L_129924b7:;
  /* 129924b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 129924b9 push 0x129a9ef8 */
  push32((uint32_t)(0x129a9ef8u));
  /* 129924be push 1 */
  push32((uint32_t)(0x1u));
  /* 129924c0 push 0x129a9ef8 */
  push32((uint32_t)(0x129a9ef8u));
  /* 129924c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 129924c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 129924c9 call dword ptr [0x129b022c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b022c))), 0x129924cfu);
  /* 129924cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129924d1 je 0x129924df */
  if (C.zf) goto L_129924df;
  /* 129924d3 mov dword ptr [0x129ae7ec], 2 */
  w32((uint32_t)(0x129ae7ec), (0x2u));
  /* 129924dd jmp 0x129924e6 */
  goto L_129924e6;
L_129924df:;
  /* 129924df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129924e1 jmp 0x12992844 */
  goto L_12992844;
L_129924e6:;
  /* 129924e6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129924ea jle 0x129924ff */
  if ((C.zf||C.sf!=C.of)) goto L_129924ff;
  /* 129924ec mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129924ef push eax */
  push32((uint32_t)(EAX));
  /* 129924f0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129924f3 push ecx */
  push32((uint32_t)(ECX));
  /* 129924f4 call 0x12992860 */
  push32(0x129924f9u); f_12992860();
  /* 129924f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129924fc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_129924ff:;
  /* 129924ff cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12992503 jle 0x12992518 */
  if ((C.zf||C.sf!=C.of)) goto L_12992518;
  /* 12992505 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12992508 push edx */
  push32((uint32_t)(EDX));
  /* 12992509 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1299250c push eax */
  push32((uint32_t)(EAX));
  /* 1299250d call 0x12992860 */
  push32(0x12992512u); f_12992860();
  /* 12992512 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12992515 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_12992518:;
  /* 12992518 cmp dword ptr [0x129ae7ec], 2 */
  { uint32_t _a=(r32((uint32_t)(0x129ae7ec))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1299251f jne 0x12992544 */
  if (!C.zf) goto L_12992544;
  /* 12992521 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12992524 push ecx */
  push32((uint32_t)(ECX));
  /* 12992525 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12992528 push edx */
  push32((uint32_t)(EDX));
  /* 12992529 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1299252c push eax */
  push32((uint32_t)(EAX));
  /* 1299252d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12992530 push ecx */
  push32((uint32_t)(ECX));
  /* 12992531 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12992534 push edx */
  push32((uint32_t)(EDX));
  /* 12992535 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12992538 push eax */
  push32((uint32_t)(EAX));
  /* 12992539 call dword ptr [0x129b022c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b022c))), 0x1299253fu);
  /* 1299253f jmp 0x12992844 */
  goto L_12992844;
L_12992544:;
  /* 12992544 cmp dword ptr [0x129ae7ec], 1 */
  { uint32_t _a=(r32((uint32_t)(0x129ae7ec))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1299254b jne 0x12992842 */
  if (!C.zf) goto L_12992842;
  /* 12992551 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12992555 jne 0x12992560 */
  if (!C.zf) goto L_12992560;
  /* 12992557 mov ecx, dword ptr [0x129ae698] */
  ECX = (r32((uint32_t)(0x129ae698)));
  /* 1299255d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_12992560:;
  /* 12992560 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12992564 je 0x12992570 */
  if (C.zf) goto L_12992570;
  /* 12992566 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1299256a jne 0x129926ec */
  if (!C.zf) goto L_129926ec;
L_12992570:;
  /* 12992570 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12992573 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12992576 jne 0x12992582 */
  if (!C.zf) goto L_12992582;
  /* 12992578 mov eax, 2 */
  EAX = (0x2u);
  /* 1299257d jmp 0x12992844 */
  goto L_12992844;
L_12992582:;
  /* 12992582 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12992586 jle 0x12992592 */
  if ((C.zf||C.sf!=C.of)) goto L_12992592;
  /* 12992588 mov eax, 1 */
  EAX = (0x1u);
  /* 1299258d jmp 0x12992844 */
  goto L_12992844;
L_12992592:;
  /* 12992592 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12992596 jle 0x129925a2 */
  if ((C.zf||C.sf!=C.of)) goto L_129925a2;
  /* 12992598 mov eax, 3 */
  EAX = (0x3u);
  /* 1299259d jmp 0x12992844 */
  goto L_12992844;
L_129925a2:;
  /* 129925a2 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 129925a5 push eax */
  push32((uint32_t)(EAX));
  /* 129925a6 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 129925a9 push ecx */
  push32((uint32_t)(ECX));
  /* 129925aa call dword ptr [0x129b02c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02c0))), 0x129925b0u);
  /* 129925b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129925b2 jne 0x129925bb */
  if (!C.zf) goto L_129925bb;
  /* 129925b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129925b6 jmp 0x12992844 */
  goto L_12992844;
L_129925bb:;
  /* 129925bb cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129925bf jne 0x129925c7 */
  if (!C.zf) goto L_129925c7;
  /* 129925c1 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129925c5 je 0x129925f4 */
  if (C.zf) goto L_129925f4;
L_129925c7:;
  /* 129925c7 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129925cb jne 0x129925d3 */
  if (!C.zf) goto L_129925d3;
  /* 129925cd cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129925d1 je 0x129925f4 */
  if (C.zf) goto L_129925f4;
L_129925d3:;
  /* 129925d3 push 0x129aa860 */
  push32((uint32_t)(0x129aa860u));
  /* 129925d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 129925da push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 129925df push 0x129aa858 */
  push32((uint32_t)(0x129aa858u));
  /* 129925e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 129925e6 call 0x12981970 */
  push32(0x129925ebu); f_12981970();
  /* 129925eb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129925ee cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129925f1 jne 0x129925f4 */
  if (!C.zf) goto L_129925f4;
  /* 129925f3 int3  */
  x86_unimpl("int3 @ 0x129925f3");
L_129925f4:;
  /* 129925f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129925f6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129925f8 jne 0x129925bb */
  if (!C.zf) goto L_129925bb;
  /* 129925fa cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129925fe jle 0x12992673 */
  if ((C.zf||C.sf!=C.of)) goto L_12992673;
  /* 12992600 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12992604 jae 0x12992610 */
  if (!C.cf) goto L_12992610;
  /* 12992606 mov eax, 3 */
  EAX = (0x3u);
  /* 1299260b jmp 0x12992844 */
  goto L_12992844;
L_12992610:;
  /* 12992610 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 12992613 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 12992616 jmp 0x12992621 */
  goto L_12992621;
L_12992618:;
  /* 12992618 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1299261b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1299261e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_12992621:;
  /* 12992621 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12992624 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12992626 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12992628 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1299262a je 0x12992669 */
  if (C.zf) goto L_12992669;
  /* 1299262c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1299262f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12992631 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12992634 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12992636 je 0x12992669 */
  if (C.zf) goto L_12992669;
  /* 12992638 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1299263b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1299263d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1299263f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12992642 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12992644 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12992646 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12992648 jl 0x12992667 */
  if ((C.sf!=C.of)) goto L_12992667;
  /* 1299264a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1299264d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1299264f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12992651 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12992654 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12992656 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12992659 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1299265b jg 0x12992667 */
  if ((!C.zf&&C.sf==C.of)) goto L_12992667;
  /* 1299265d mov eax, 2 */
  EAX = (0x2u);
  /* 12992662 jmp 0x12992844 */
  goto L_12992844;
L_12992667:;
  /* 12992667 jmp 0x12992618 */
  goto L_12992618;
L_12992669:;
  /* 12992669 mov eax, 3 */
  EAX = (0x3u);
  /* 1299266e jmp 0x12992844 */
  goto L_12992844;
L_12992673:;
  /* 12992673 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12992677 jle 0x129926ec */
  if ((C.zf||C.sf!=C.of)) goto L_129926ec;
  /* 12992679 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1299267d jae 0x12992689 */
  if (!C.cf) goto L_12992689;
  /* 1299267f mov eax, 1 */
  EAX = (0x1u);
  /* 12992684 jmp 0x12992844 */
  goto L_12992844;
L_12992689:;
  /* 12992689 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 1299268c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 1299268f jmp 0x1299269a */
  goto L_1299269a;
L_12992691:;
  /* 12992691 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12992694 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12992697 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_1299269a:;
  /* 1299269a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1299269d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1299269f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 129926a1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129926a3 je 0x129926e2 */
  if (C.zf) goto L_129926e2;
  /* 129926a5 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 129926a8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129926aa mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 129926ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129926af je 0x129926e2 */
  if (C.zf) goto L_129926e2;
  /* 129926b1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 129926b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129926b6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 129926b8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 129926bb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129926bd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 129926bf cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129926c1 jl 0x129926e0 */
  if ((C.sf!=C.of)) goto L_129926e0;
  /* 129926c3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 129926c6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129926c8 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 129926ca mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 129926cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129926cf mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 129926d2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129926d4 jg 0x129926e0 */
  if ((!C.zf&&C.sf==C.of)) goto L_129926e0;
  /* 129926d6 mov eax, 2 */
  EAX = (0x2u);
  /* 129926db jmp 0x12992844 */
  goto L_12992844;
L_129926e0:;
  /* 129926e0 jmp 0x12992691 */
  goto L_12992691;
L_129926e2:;
  /* 129926e2 mov eax, 1 */
  EAX = (0x1u);
  /* 129926e7 jmp 0x12992844 */
  goto L_12992844;
L_129926ec:;
  /* 129926ec push 0 */
  push32((uint32_t)(0x0u));
  /* 129926ee push 0 */
  push32((uint32_t)(0x0u));
  /* 129926f0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129926f3 push ecx */
  push32((uint32_t)(ECX));
  /* 129926f4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129926f7 push edx */
  push32((uint32_t)(EDX));
  /* 129926f8 push 9 */
  push32((uint32_t)(0x9u));
  /* 129926fa mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 129926fd push eax */
  push32((uint32_t)(EAX));
  /* 129926fe call dword ptr [0x129b030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b030c))), 0x12992704u);
  /* 12992704 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12992707 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1299270b jne 0x12992714 */
  if (!C.zf) goto L_12992714;
  /* 1299270d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1299270f jmp 0x12992844 */
  goto L_12992844;
L_12992714:;
  /* 12992714 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1299271b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1299271e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12992720 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12992723 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12992725 call 0x12985a50 */
  push32(0x1299272au); f_12985a50();
  /* 1299272a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 1299272d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12992730 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 12992733 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12992736 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1299273d jmp 0x12992756 */
  goto L_12992756;
  /* 1299273f mov eax, 1 */
  EAX = (0x1u);
  /* 12992744 ret  */
  ESPCHK(0x12992460u, _esp0);
  ESP += 4; return;
  /* 12992745 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12992748 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1299274f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12992756:;
  /* 12992756 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1299275a jne 0x12992763 */
  if (!C.zf) goto L_12992763;
  /* 1299275c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1299275e jmp 0x12992844 */
  goto L_12992844;
L_12992763:;
  /* 12992763 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12992766 push edx */
  push32((uint32_t)(EDX));
  /* 12992767 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1299276a push eax */
  push32((uint32_t)(EAX));
  /* 1299276b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1299276e push ecx */
  push32((uint32_t)(ECX));
  /* 1299276f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12992772 push edx */
  push32((uint32_t)(EDX));
  /* 12992773 push 1 */
  push32((uint32_t)(0x1u));
  /* 12992775 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12992778 push eax */
  push32((uint32_t)(EAX));
  /* 12992779 call dword ptr [0x129b030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b030c))), 0x1299277fu);
  /* 1299277f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12992781 jne 0x1299278a */
  if (!C.zf) goto L_1299278a;
  /* 12992783 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12992785 jmp 0x12992844 */
  goto L_12992844;
L_1299278a:;
  /* 1299278a push 0 */
  push32((uint32_t)(0x0u));
  /* 1299278c push 0 */
  push32((uint32_t)(0x0u));
  /* 1299278e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12992791 push ecx */
  push32((uint32_t)(ECX));
  /* 12992792 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12992795 push edx */
  push32((uint32_t)(EDX));
  /* 12992796 push 9 */
  push32((uint32_t)(0x9u));
  /* 12992798 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1299279b push eax */
  push32((uint32_t)(EAX));
  /* 1299279c call dword ptr [0x129b030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b030c))), 0x129927a2u);
  /* 129927a2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 129927a5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129927a9 jne 0x129927b2 */
  if (!C.zf) goto L_129927b2;
  /* 129927ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129927ad jmp 0x12992844 */
  goto L_12992844;
L_129927b2:;
  /* 129927b2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 129927b9 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 129927bc shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 129927be add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129927c1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 129927c3 call 0x12985a50 */
  push32(0x129927c8u); f_12985a50();
  /* 129927c8 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 129927cb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 129927ce mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 129927d1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 129927d4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 129927db jmp 0x129927f4 */
  goto L_129927f4;
  /* 129927dd mov eax, 1 */
  EAX = (0x1u);
  /* 129927e2 ret  */
  ESPCHK(0x12992460u, _esp0);
  ESP += 4; return;
  /* 129927e3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 129927e6 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 129927ed mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_129927f4:;
  /* 129927f4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129927f8 jne 0x129927fe */
  if (!C.zf) goto L_129927fe;
  /* 129927fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129927fc jmp 0x12992844 */
  goto L_12992844;
L_129927fe:;
  /* 129927fe mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12992801 push edx */
  push32((uint32_t)(EDX));
  /* 12992802 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12992805 push eax */
  push32((uint32_t)(EAX));
  /* 12992806 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12992809 push ecx */
  push32((uint32_t)(ECX));
  /* 1299280a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1299280d push edx */
  push32((uint32_t)(EDX));
  /* 1299280e push 1 */
  push32((uint32_t)(0x1u));
  /* 12992810 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12992813 push eax */
  push32((uint32_t)(EAX));
  /* 12992814 call dword ptr [0x129b030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b030c))), 0x1299281au);
  /* 1299281a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1299281c jne 0x12992822 */
  if (!C.zf) goto L_12992822;
  /* 1299281e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12992820 jmp 0x12992844 */
  goto L_12992844;
L_12992822:;
  /* 12992822 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12992825 push ecx */
  push32((uint32_t)(ECX));
  /* 12992826 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12992829 push edx */
  push32((uint32_t)(EDX));
  /* 1299282a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1299282d push eax */
  push32((uint32_t)(EAX));
  /* 1299282e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12992831 push ecx */
  push32((uint32_t)(ECX));
  /* 12992832 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12992835 push edx */
  push32((uint32_t)(EDX));
  /* 12992836 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12992839 push eax */
  push32((uint32_t)(EAX));
  /* 1299283a call dword ptr [0x129b0228] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0228))), 0x12992840u);
  /* 12992840 jmp 0x12992844 */
  goto L_12992844;
L_12992842:;
  /* 12992842 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12992844:;
  /* 12992844 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 12992847 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1299284a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12992851 pop edi */
  EDI = (pop32());
  /* 12992852 pop esi */
  ESI = (pop32());
  /* 12992853 pop ebx */
  EBX = (pop32());
  /* 12992854 mov esp, ebp */
  ESP = (EBP);
  /* 12992856 pop ebp */
  EBP = (pop32());
  /* 12992857 ret  */
  ESPCHK(0x12992460u, _esp0);
  ESP += 4; return;
}

/* FUN_10012860 @ 0x12992860 (80 bytes, 32 insns) */
void f_12992860(void) {
  FTRACE(0x12992860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12992860 push ebp */
  push32((uint32_t)(EBP));
  /* 12992861 mov ebp, esp */
  EBP = (ESP);
  /* 12992863 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12992866 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12992869 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1299286c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1299286f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12992872:;
  /* 12992872 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12992875 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12992878 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1299287b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1299287e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12992880 je 0x12992897 */
  if (C.zf) goto L_12992897;
  /* 12992882 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12992885 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12992888 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1299288a je 0x12992897 */
  if (C.zf) goto L_12992897;
  /* 1299288c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1299288f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12992892 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12992895 jmp 0x12992872 */
  goto L_12992872;
L_12992897:;
  /* 12992897 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1299289a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1299289d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1299289f jne 0x129928a9 */
  if (!C.zf) goto L_129928a9;
  /* 129928a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129928a4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129928a7 jmp 0x129928ac */
  goto L_129928ac;
L_129928a9:;
  /* 129928a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_129928ac:;
  /* 129928ac mov esp, ebp */
  ESP = (EBP);
  /* 129928ae pop ebp */
  EBP = (pop32());
  /* 129928af ret  */
  ESPCHK(0x12992860u, _esp0);
  ESP += 4; return;
}

/* FUN_100128b0 @ 0x129928b0 (736 bytes, 224 insns) */
void f_129928b0(void) {
  FTRACE(0x129928b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129928b0 push ebp */
  push32((uint32_t)(EBP));
  /* 129928b1 mov ebp, esp */
  EBP = (ESP);
  /* 129928b3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129928b6 push esi */
  push32((uint32_t)(ESI));
  /* 129928b7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129928bb je 0x129928dc */
  if (C.zf) goto L_129928dc;
  /* 129928bd push 0x3d */
  push32((uint32_t)(0x3du));
  /* 129928bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129928c2 push eax */
  push32((uint32_t)(EAX));
  /* 129928c3 call 0x12992d00 */
  push32(0x129928c8u); f_12992d00();
  /* 129928c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129928cb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 129928ce cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129928d2 je 0x129928dc */
  if (C.zf) goto L_129928dc;
  /* 129928d4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129928d7 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129928da jne 0x129928e4 */
  if (!C.zf) goto L_129928e4;
L_129928dc:;
  /* 129928dc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129928df jmp 0x12992b8b */
  goto L_12992b8b;
L_129928e4:;
  /* 129928e4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 129928e7 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 129928eb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 129928ed sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129928ef inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 129928f0 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 129928f3 mov ecx, dword ptr [0x129ae4a4] */
  ECX = (r32((uint32_t)(0x129ae4a4)));
  /* 129928f9 cmp ecx, dword ptr [0x129ae4a8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x129ae4a8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129928ff jne 0x12992915 */
  if (!C.zf) goto L_12992915;
  /* 12992901 mov edx, dword ptr [0x129ae4a4] */
  EDX = (r32((uint32_t)(0x129ae4a4)));
  /* 12992907 push edx */
  push32((uint32_t)(EDX));
  /* 12992908 call 0x12992c10 */
  push32(0x1299290du); f_12992c10();
  /* 1299290d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12992910 mov dword ptr [0x129ae4a4], eax */
  w32((uint32_t)(0x129ae4a4), (EAX));
L_12992915:;
  /* 12992915 cmp dword ptr [0x129ae4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1299291c jne 0x129929d5 */
  if (!C.zf) goto L_129929d5;
  /* 12992922 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12992926 je 0x12992947 */
  if (C.zf) goto L_12992947;
  /* 12992928 cmp dword ptr [0x129ae4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1299292f je 0x12992947 */
  if (C.zf) goto L_12992947;
  /* 12992931 call 0x129923b0 */
  push32(0x12992936u); f_129923b0();
  /* 12992936 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12992938 je 0x12992942 */
  if (C.zf) goto L_12992942;
  /* 1299293a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1299293d jmp 0x12992b8b */
  goto L_12992b8b;
L_12992942:;
  /* 12992942 jmp 0x129929d5 */
  goto L_129929d5;
L_12992947:;
  /* 12992947 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1299294b je 0x12992954 */
  if (C.zf) goto L_12992954;
  /* 1299294d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1299294f jmp 0x12992b8b */
  goto L_12992b8b;
L_12992954:;
  /* 12992954 cmp dword ptr [0x129ae4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1299295b jne 0x12992994 */
  if (!C.zf) goto L_12992994;
  /* 1299295d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 12992962 push 0x129aa8b8 */
  push32((uint32_t)(0x129aa8b8u));
  /* 12992967 push 2 */
  push32((uint32_t)(0x2u));
  /* 12992969 push 4 */
  push32((uint32_t)(0x4u));
  /* 1299296b call 0x129828b0 */
  push32(0x12992970u); f_129828b0();
  /* 12992970 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12992973 mov dword ptr [0x129ae4a4], eax */
  w32((uint32_t)(0x129ae4a4), (EAX));
  /* 12992978 cmp dword ptr [0x129ae4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1299297f jne 0x12992989 */
  if (!C.zf) goto L_12992989;
  /* 12992981 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12992984 jmp 0x12992b8b */
  goto L_12992b8b;
L_12992989:;
  /* 12992989 mov eax, dword ptr [0x129ae4a4] */
  EAX = (r32((uint32_t)(0x129ae4a4)));
  /* 1299298e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12992994:;
  /* 12992994 cmp dword ptr [0x129ae4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1299299b jne 0x129929d5 */
  if (!C.zf) goto L_129929d5;
  /* 1299299d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 129929a2 push 0x129aa8b8 */
  push32((uint32_t)(0x129aa8b8u));
  /* 129929a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 129929a9 push 4 */
  push32((uint32_t)(0x4u));
  /* 129929ab call 0x129828b0 */
  push32(0x129929b0u); f_129828b0();
  /* 129929b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129929b3 mov dword ptr [0x129ae4ac], eax */
  w32((uint32_t)(0x129ae4ac), (EAX));
  /* 129929b8 cmp dword ptr [0x129ae4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129929bf jne 0x129929c9 */
  if (!C.zf) goto L_129929c9;
  /* 129929c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129929c4 jmp 0x12992b8b */
  goto L_12992b8b;
L_129929c9:;
  /* 129929c9 mov ecx, dword ptr [0x129ae4ac] */
  ECX = (r32((uint32_t)(0x129ae4ac)));
  /* 129929cf mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_129929d5:;
  /* 129929d5 mov edx, dword ptr [0x129ae4a4] */
  EDX = (r32((uint32_t)(0x129ae4a4)));
  /* 129929db mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 129929de mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129929e1 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129929e4 push eax */
  push32((uint32_t)(EAX));
  /* 129929e5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129929e8 push ecx */
  push32((uint32_t)(ECX));
  /* 129929e9 call 0x12992b90 */
  push32(0x129929eeu); f_12992b90();
  /* 129929ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129929f1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129929f4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129929f8 jl 0x12992a91 */
  if ((C.sf!=C.of)) goto L_12992a91;
  /* 129929fe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12992a01 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12992a04 je 0x12992a91 */
  if (C.zf) goto L_12992a91;
  /* 12992a0a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12992a0e je 0x12992a83 */
  if (C.zf) goto L_12992a83;
  /* 12992a10 push 2 */
  push32((uint32_t)(0x2u));
  /* 12992a12 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12992a15 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12992a18 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12992a1b push edx */
  push32((uint32_t)(EDX));
  /* 12992a1c call 0x12983340 */
  push32(0x12992a21u); f_12983340();
  /* 12992a21 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12992a24 jmp 0x12992a2f */
  goto L_12992a2f;
L_12992a26:;
  /* 12992a26 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12992a29 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12992a2c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12992a2f:;
  /* 12992a2f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12992a32 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12992a35 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12992a39 je 0x12992a50 */
  if (C.zf) goto L_12992a50;
  /* 12992a3b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12992a3e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12992a41 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12992a44 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 12992a47 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 12992a4b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 12992a4e jmp 0x12992a26 */
  goto L_12992a26;
L_12992a50:;
  /* 12992a50 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 12992a55 push 0x129aa8b8 */
  push32((uint32_t)(0x129aa8b8u));
  /* 12992a5a push 2 */
  push32((uint32_t)(0x2u));
  /* 12992a5c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12992a5f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12992a62 push eax */
  push32((uint32_t)(EAX));
  /* 12992a63 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12992a66 push ecx */
  push32((uint32_t)(ECX));
  /* 12992a67 call 0x12982d40 */
  push32(0x12992a6cu); f_12982d40();
  /* 12992a6c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12992a6f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12992a72 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12992a76 je 0x12992a81 */
  if (C.zf) goto L_12992a81;
  /* 12992a78 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12992a7b mov dword ptr [0x129ae4a4], edx */
  w32((uint32_t)(0x129ae4a4), (EDX));
L_12992a81:;
  /* 12992a81 jmp 0x12992a8f */
  goto L_12992a8f;
L_12992a83:;
  /* 12992a83 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12992a86 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12992a89 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12992a8c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_12992a8f:;
  /* 12992a8f jmp 0x12992b04 */
  goto L_12992b04;
L_12992a91:;
  /* 12992a91 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12992a95 jne 0x12992afd */
  if (!C.zf) goto L_12992afd;
  /* 12992a97 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12992a9b jge 0x12992aa5 */
  if ((C.sf==C.of)) goto L_12992aa5;
  /* 12992a9d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12992aa0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12992aa2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12992aa5:;
  /* 12992aa5 push 0xce */
  push32((uint32_t)(0xceu));
  /* 12992aaa push 0x129aa8b8 */
  push32((uint32_t)(0x129aa8b8u));
  /* 12992aaf push 2 */
  push32((uint32_t)(0x2u));
  /* 12992ab1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12992ab4 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 12992abb push edx */
  push32((uint32_t)(EDX));
  /* 12992abc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12992abf push eax */
  push32((uint32_t)(EAX));
  /* 12992ac0 call 0x12982d40 */
  push32(0x12992ac5u); f_12982d40();
  /* 12992ac5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12992ac8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12992acb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12992acf jne 0x12992ad9 */
  if (!C.zf) goto L_12992ad9;
  /* 12992ad1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12992ad4 jmp 0x12992b8b */
  goto L_12992b8b;
L_12992ad9:;
  /* 12992ad9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12992adc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12992adf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12992ae2 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 12992ae5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12992ae8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12992aeb mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 12992af3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12992af6 mov dword ptr [0x129ae4a4], eax */
  w32((uint32_t)(0x129ae4a4), (EAX));
  /* 12992afb jmp 0x12992b04 */
  goto L_12992b04;
L_12992afd:;
  /* 12992afd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12992aff jmp 0x12992b8b */
  goto L_12992b8b;
L_12992b04:;
  /* 12992b04 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12992b08 je 0x12992b89 */
  if (C.zf) goto L_12992b89;
  /* 12992b0a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 12992b0f push 0x129aa8b8 */
  push32((uint32_t)(0x129aa8b8u));
  /* 12992b14 push 2 */
  push32((uint32_t)(0x2u));
  /* 12992b16 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12992b19 push ecx */
  push32((uint32_t)(ECX));
  /* 12992b1a call 0x129856e0 */
  push32(0x12992b1fu); f_129856e0();
  /* 12992b1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12992b22 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12992b25 push eax */
  push32((uint32_t)(EAX));
  /* 12992b26 call 0x129828b0 */
  push32(0x12992b2bu); f_129828b0();
  /* 12992b2b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12992b2e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12992b31 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12992b35 je 0x12992b89 */
  if (C.zf) goto L_12992b89;
  /* 12992b37 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12992b3a push edx */
  push32((uint32_t)(EDX));
  /* 12992b3b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12992b3e push eax */
  push32((uint32_t)(EAX));
  /* 12992b3f call 0x12985860 */
  push32(0x12992b44u); f_12985860();
  /* 12992b44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12992b47 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12992b4a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12992b4d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12992b50 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12992b52 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12992b55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12992b58 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12992b5b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12992b5e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12992b61 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12992b64 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12992b67 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12992b69 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12992b6b not edx */
  EDX = (~(EDX));
  /* 12992b6d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 12992b70 push edx */
  push32((uint32_t)(EDX));
  /* 12992b71 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12992b74 push eax */
  push32((uint32_t)(EAX));
  /* 12992b75 call dword ptr [0x129b0224] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0224))), 0x12992b7bu);
  /* 12992b7b push 2 */
  push32((uint32_t)(0x2u));
  /* 12992b7d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12992b80 push ecx */
  push32((uint32_t)(ECX));
  /* 12992b81 call 0x12983340 */
  push32(0x12992b86u); f_12983340();
  /* 12992b86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12992b89:;
  /* 12992b89 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12992b8b:;
  /* 12992b8b pop esi */
  ESI = (pop32());
  /* 12992b8c mov esp, ebp */
  ESP = (EBP);
  /* 12992b8e pop ebp */
  EBP = (pop32());
  /* 12992b8f ret  */
  ESPCHK(0x129928b0u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x12992b90 (124 bytes, 47 insns) */
void f_12992b90(void) {
  FTRACE(0x12992b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12992b90 push ebp */
  push32((uint32_t)(EBP));
  /* 12992b91 mov ebp, esp */
  EBP = (ESP);
  /* 12992b93 push ecx */
  push32((uint32_t)(ECX));
  /* 12992b94 mov eax, dword ptr [0x129ae4a4] */
  EAX = (r32((uint32_t)(0x129ae4a4)));
  /* 12992b99 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12992b9c jmp 0x12992ba7 */
  goto L_12992ba7;
L_12992b9e:;
  /* 12992b9e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12992ba1 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12992ba4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12992ba7:;
  /* 12992ba7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12992baa cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12992bad je 0x12992bfa */
  if (C.zf) goto L_12992bfa;
  /* 12992baf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12992bb2 push eax */
  push32((uint32_t)(EAX));
  /* 12992bb3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12992bb6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12992bb8 push edx */
  push32((uint32_t)(EDX));
  /* 12992bb9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12992bbc push eax */
  push32((uint32_t)(EAX));
  /* 12992bbd call 0x12992360 */
  push32(0x12992bc2u); f_12992360();
  /* 12992bc2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12992bc5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12992bc7 jne 0x12992bf8 */
  if (!C.zf) goto L_12992bf8;
  /* 12992bc9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12992bcc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12992bce mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12992bd1 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 12992bd5 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12992bd8 je 0x12992bea */
  if (C.zf) goto L_12992bea;
  /* 12992bda mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12992bdd mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12992bdf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12992be2 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 12992be6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12992be8 jne 0x12992bf8 */
  if (!C.zf) goto L_12992bf8;
L_12992bea:;
  /* 12992bea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12992bed sub eax, dword ptr [0x129ae4a4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x129ae4a4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12992bf3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12992bf6 jmp 0x12992c08 */
  goto L_12992c08;
L_12992bf8:;
  /* 12992bf8 jmp 0x12992b9e */
  goto L_12992b9e;
L_12992bfa:;
  /* 12992bfa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12992bfd sub eax, dword ptr [0x129ae4a4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x129ae4a4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12992c03 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12992c06 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_12992c08:;
  /* 12992c08 mov esp, ebp */
  ESP = (EBP);
  /* 12992c0a pop ebp */
  EBP = (pop32());
  /* 12992c0b ret  */
  ESPCHK(0x12992b90u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x12992c10 (238 bytes, 80 insns) */
void f_12992c10(void) {
  FTRACE(0x12992c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12992c10 push ebp */
  push32((uint32_t)(EBP));
  /* 12992c11 mov ebp, esp */
  EBP = (ESP);
  /* 12992c13 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12992c16 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12992c1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12992c20 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12992c23 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12992c27 jne 0x12992c30 */
  if (!C.zf) goto L_12992c30;
  /* 12992c29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12992c2b jmp 0x12992cfa */
  goto L_12992cfa;
L_12992c30:;
  /* 12992c30 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12992c33 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12992c35 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12992c38 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12992c3b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12992c3e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12992c40 je 0x12992c4d */
  if (C.zf) goto L_12992c4d;
  /* 12992c42 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12992c45 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12992c48 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12992c4b jmp 0x12992c30 */
  goto L_12992c30;
L_12992c4d:;
  /* 12992c4d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 12992c52 push 0x129aa8b8 */
  push32((uint32_t)(0x129aa8b8u));
  /* 12992c57 push 2 */
  push32((uint32_t)(0x2u));
  /* 12992c59 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12992c5c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 12992c63 push eax */
  push32((uint32_t)(EAX));
  /* 12992c64 call 0x129828b0 */
  push32(0x12992c69u); f_129828b0();
  /* 12992c69 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12992c6c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12992c6f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12992c72 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12992c75 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12992c79 jne 0x12992c85 */
  if (!C.zf) goto L_12992c85;
  /* 12992c7b push 9 */
  push32((uint32_t)(0x9u));
  /* 12992c7d call 0x12981820 */
  push32(0x12992c82u); f_12981820();
  /* 12992c82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12992c85:;
  /* 12992c85 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12992c88 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12992c8b:;
  /* 12992c8b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12992c8e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12992c91 je 0x12992cee */
  if (C.zf) goto L_12992cee;
  /* 12992c93 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 12992c98 push 0x129aa8b8 */
  push32((uint32_t)(0x129aa8b8u));
  /* 12992c9d push 2 */
  push32((uint32_t)(0x2u));
  /* 12992c9f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12992ca2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12992ca4 push edx */
  push32((uint32_t)(EDX));
  /* 12992ca5 call 0x129856e0 */
  push32(0x12992caau); f_129856e0();
  /* 12992caa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12992cad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12992cb0 push eax */
  push32((uint32_t)(EAX));
  /* 12992cb1 call 0x129828b0 */
  push32(0x12992cb6u); f_129828b0();
  /* 12992cb6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12992cb9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12992cbc mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12992cbe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12992cc1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12992cc4 je 0x12992cda */
  if (C.zf) goto L_12992cda;
  /* 12992cc6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12992cc9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12992ccb push ecx */
  push32((uint32_t)(ECX));
  /* 12992ccc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12992ccf mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12992cd1 push eax */
  push32((uint32_t)(EAX));
  /* 12992cd2 call 0x12985860 */
  push32(0x12992cd7u); f_12985860();
  /* 12992cd7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12992cda:;
  /* 12992cda mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12992cdd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12992ce0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12992ce3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12992ce6 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12992ce9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12992cec jmp 0x12992c8b */
  goto L_12992c8b;
L_12992cee:;
  /* 12992cee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12992cf1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12992cf7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12992cfa:;
  /* 12992cfa mov esp, ebp */
  ESP = (EBP);
  /* 12992cfc pop ebp */
  EBP = (pop32());
  /* 12992cfd ret  */
  ESPCHK(0x12992c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d00 @ 0x12992d00 (237 bytes, 81 insns) */
void f_12992d00(void) {
  FTRACE(0x12992d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12992d00 push ebp */
  push32((uint32_t)(EBP));
  /* 12992d01 mov ebp, esp */
  EBP = (ESP);
  /* 12992d03 push ecx */
  push32((uint32_t)(ECX));
  /* 12992d04 cmp dword ptr [0x129afbec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129afbec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12992d0b jne 0x12992d22 */
  if (!C.zf) goto L_12992d22;
  /* 12992d0d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12992d10 push eax */
  push32((uint32_t)(EAX));
  /* 12992d11 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12992d14 push ecx */
  push32((uint32_t)(ECX));
  /* 12992d15 call 0x12992e00 */
  push32(0x12992d1au); f_12992e00();
  /* 12992d1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12992d1d jmp 0x12992de9 */
  goto L_12992de9;
L_12992d22:;
  /* 12992d22 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12992d24 call 0x129862b0 */
  push32(0x12992d29u); f_129862b0();
  /* 12992d29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12992d2c jmp 0x12992d37 */
  goto L_12992d37;
L_12992d2e:;
  /* 12992d2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12992d31 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12992d34 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12992d37:;
  /* 12992d37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12992d3a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 12992d3e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 12992d42 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12992d45 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12992d4b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12992d4d je 0x12992dcb */
  if (C.zf) goto L_12992dcb;
  /* 12992d4f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12992d52 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12992d57 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12992d59 mov cl, byte ptr [eax + 0x129afd01] */
  CL = (r8((uint32_t)(EAX + 0x129afd01)));
  /* 12992d5f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12992d62 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12992d64 je 0x12992db6 */
  if (C.zf) goto L_12992db6;
  /* 12992d66 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12992d69 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12992d6c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12992d6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12992d72 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12992d74 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12992d76 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12992d78 jne 0x12992d88 */
  if (!C.zf) goto L_12992d88;
  /* 12992d7a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12992d7c call 0x12986350 */
  push32(0x12992d81u); f_12986350();
  /* 12992d81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12992d84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12992d86 jmp 0x12992de9 */
  goto L_12992de9;
L_12992d88:;
  /* 12992d88 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12992d8b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12992d91 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12992d94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12992d97 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12992d99 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12992d9b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12992d9d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12992da0 jne 0x12992db4 */
  if (!C.zf) goto L_12992db4;
  /* 12992da2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12992da4 call 0x12986350 */
  push32(0x12992da9u); f_12986350();
  /* 12992da9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12992dac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12992daf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12992db2 jmp 0x12992de9 */
  goto L_12992de9;
L_12992db4:;
  /* 12992db4 jmp 0x12992dc6 */
  goto L_12992dc6;
L_12992db6:;
  /* 12992db6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12992db9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12992dbf cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12992dc2 jne 0x12992dc6 */
  if (!C.zf) goto L_12992dc6;
  /* 12992dc4 jmp 0x12992dcb */
  goto L_12992dcb;
L_12992dc6:;
  /* 12992dc6 jmp 0x12992d2e */
  goto L_12992d2e;
L_12992dcb:;
  /* 12992dcb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12992dcd call 0x12986350 */
  push32(0x12992dd2u); f_12986350();
  /* 12992dd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12992dd5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12992dd8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12992ddd cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12992de0 jne 0x12992de7 */
  if (!C.zf) goto L_12992de7;
  /* 12992de2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12992de5 jmp 0x12992de9 */
  goto L_12992de9;
L_12992de7:;
  /* 12992de7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12992de9:;
  /* 12992de9 mov esp, ebp */
  ESP = (EBP);
  /* 12992deb pop ebp */
  EBP = (pop32());
  /* 12992dec ret  */
  ESPCHK(0x12992d00u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x12992e00 (193 bytes, 87 insns) */
void f_12992e00(void) {
  FTRACE(0x12992e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12992e00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12992e02 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12992e06 push ebx */
  push32((uint32_t)(EBX));
  /* 12992e07 mov ebx, eax */
  EBX = (EAX);
  /* 12992e09 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12992e0c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 12992e10 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12992e16 je 0x12992e2b */
  if (C.zf) goto L_12992e2b;
L_12992e18:;
  /* 12992e18 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 12992e1a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12992e1b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12992e1d je 0x12992df0 */
  if (C.zf) { jmp_ind(0x12992df0u); return; }
  /* 12992e1f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 12992e21 je 0x12992e74 */
  if (C.zf) goto L_12992e74;
  /* 12992e23 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12992e29 jne 0x12992e18 */
  if (!C.zf) goto L_12992e18;
L_12992e2b:;
  /* 12992e2b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 12992e2d push edi */
  push32((uint32_t)(EDI));
  /* 12992e2e mov eax, ebx */
  EAX = (EBX);
  /* 12992e30 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 12992e33 push esi */
  push32((uint32_t)(ESI));
  /* 12992e34 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_12992e36:;
  /* 12992e36 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 12992e38 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 12992e3d mov eax, ecx */
  EAX = (ECX);
  /* 12992e3f mov esi, edi */
  ESI = (EDI);
  /* 12992e41 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 12992e43 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12992e45 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12992e47 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12992e4a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12992e4d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 12992e4f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 12992e51 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12992e54 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 12992e5a jne 0x12992e78 */
  if (!C.zf) goto L_12992e78;
  /* 12992e5c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12992e61 je 0x12992e36 */
  if (C.zf) goto L_12992e36;
  /* 12992e63 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12992e68 jne 0x12992e72 */
  if (!C.zf) goto L_12992e72;
  /* 12992e6a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 12992e70 jne 0x12992e36 */
  if (!C.zf) goto L_12992e36;
L_12992e72:;
  /* 12992e72 pop esi */
  ESI = (pop32());
  /* 12992e73 pop edi */
  EDI = (pop32());
L_12992e74:;
  /* 12992e74 pop ebx */
  EBX = (pop32());
  /* 12992e75 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12992e77 ret  */
  ESPCHK(0x12992e00u, _esp0);
  ESP += 4; return;
L_12992e78:;
  /* 12992e78 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 12992e7b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12992e7d je 0x12992eb5 */
  if (C.zf) goto L_12992eb5;
  /* 12992e7f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12992e81 je 0x12992e72 */
  if (C.zf) goto L_12992e72;
  /* 12992e83 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12992e85 je 0x12992eae */
  if (C.zf) goto L_12992eae;
  /* 12992e87 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12992e89 je 0x12992e72 */
  if (C.zf) goto L_12992e72;
  /* 12992e8b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12992e8e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12992e90 je 0x12992ea7 */
  if (C.zf) goto L_12992ea7;
  /* 12992e92 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12992e94 je 0x12992e72 */
  if (C.zf) goto L_12992e72;
  /* 12992e96 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12992e98 je 0x12992ea0 */
  if (C.zf) goto L_12992ea0;
  /* 12992e9a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12992e9c je 0x12992e72 */
  if (C.zf) goto L_12992e72;
  /* 12992e9e jmp 0x12992e36 */
  goto L_12992e36;
L_12992ea0:;
  /* 12992ea0 pop esi */
  ESI = (pop32());
  /* 12992ea1 pop edi */
  EDI = (pop32());
  /* 12992ea2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 12992ea5 pop ebx */
  EBX = (pop32());
  /* 12992ea6 ret  */
  ESPCHK(0x12992e00u, _esp0);
  ESP += 4; return;
L_12992ea7:;
  /* 12992ea7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 12992eaa pop esi */
  ESI = (pop32());
  /* 12992eab pop edi */
  EDI = (pop32());
  /* 12992eac pop ebx */
  EBX = (pop32());
  /* 12992ead ret  */
  ESPCHK(0x12992e00u, _esp0);
  ESP += 4; return;
L_12992eae:;
  /* 12992eae lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 12992eb1 pop esi */
  ESI = (pop32());
  /* 12992eb2 pop edi */
  EDI = (pop32());
  /* 12992eb3 pop ebx */
  EBX = (pop32());
  /* 12992eb4 ret  */
  ESPCHK(0x12992e00u, _esp0);
  ESP += 4; return;
L_12992eb5:;
  /* 12992eb5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 12992eb8 pop esi */
  ESI = (pop32());
  /* 12992eb9 pop edi */
  EDI = (pop32());
  /* 12992eba pop ebx */
  EBX = (pop32());
  /* 12992ebb ret  */
  ESPCHK(0x12992e00u, _esp0);
  ESP += 4; return;
  /* 12992ebc jmp dword ptr [0x129b0244] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x129b0244)))); return;
}

/* RtlUnwind @ 0x1299300c (6 bytes, 1 insns) */
void f_1299300c(void) {
  FTRACE(0x1299300cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1299300c jmp dword ptr [0x129b0320] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x129b0320)))); return;
}

