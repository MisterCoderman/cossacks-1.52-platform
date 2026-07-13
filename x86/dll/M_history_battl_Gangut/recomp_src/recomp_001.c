#include "recomp.h"

/* FID_conflict:AtlIsValidAddress @ 0x12896410 (75 bytes, 28 insns) */
void f_12896410(void) {
  FTRACE(0x12896410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12896410 push ebp */
  push32((uint32_t)(EBP));
  /* 12896411 mov ebp, esp */
  EBP = (ESP);
  /* 12896413 push ecx */
  push32((uint32_t)(ECX));
  /* 12896414 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896418 je 0x1289644d */
  if (C.zf) goto L_1289644d;
  /* 1289641a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289641d push eax */
  push32((uint32_t)(EAX));
  /* 1289641e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12896421 push ecx */
  push32((uint32_t)(ECX));
  /* 12896422 call dword ptr [0x128c226c] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c226c))), 0x12896428u);
  /* 12896428 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289642a jne 0x1289644d */
  if (!C.zf) goto L_1289644d;
  /* 1289642c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896430 je 0x12896444 */
  if (C.zf) goto L_12896444;
  /* 12896432 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12896435 push edx */
  push32((uint32_t)(EDX));
  /* 12896436 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12896439 push eax */
  push32((uint32_t)(EAX));
  /* 1289643a call dword ptr [0x128c2268] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2268))), 0x12896440u);
  /* 12896440 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12896442 jne 0x1289644d */
  if (!C.zf) goto L_1289644d;
L_12896444:;
  /* 12896444 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1289644b jmp 0x12896454 */
  goto L_12896454;
L_1289644d:;
  /* 1289644d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12896454:;
  /* 12896454 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12896457 mov esp, ebp */
  ESP = (EBP);
  /* 12896459 pop ebp */
  EBP = (pop32());
  /* 1289645a ret  */
  ESPCHK(0x12896410u, _esp0);
  ESP += 4; return;
}

/* FUN_10006460 @ 0x12896460 (134 bytes, 50 insns) */
void f_12896460(void) {
  FTRACE(0x12896460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12896460 push ebp */
  push32((uint32_t)(EBP));
  /* 12896461 mov ebp, esp */
  EBP = (ESP);
  /* 12896463 push ecx */
  push32((uint32_t)(ECX));
  /* 12896464 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896468 jne 0x1289646e */
  if (!C.zf) goto L_1289646e;
  /* 1289646a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289646c jmp 0x128964e2 */
  goto L_128964e2;
L_1289646e:;
  /* 1289646e push 1 */
  push32((uint32_t)(0x1u));
  /* 12896470 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12896472 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12896475 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12896478 push eax */
  push32((uint32_t)(EAX));
  /* 12896479 call 0x12896410 */
  push32(0x1289647eu); f_12896410();
  /* 1289647e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12896481 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12896483 jne 0x12896489 */
  if (!C.zf) goto L_12896489;
  /* 12896485 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12896487 jmp 0x128964e2 */
  goto L_128964e2;
L_12896489:;
  /* 12896489 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289648c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289648f push ecx */
  push32((uint32_t)(ECX));
  /* 12896490 call 0x12899b10 */
  push32(0x12896495u); f_12899b10();
  /* 12896495 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12896498 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1289649b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289649f je 0x128964b6 */
  if (C.zf) goto L_128964b6;
  /* 128964a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128964a4 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128964a7 push edx */
  push32((uint32_t)(EDX));
  /* 128964a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128964ab push eax */
  push32((uint32_t)(EAX));
  /* 128964ac call 0x12899b70 */
  push32(0x128964b1u); f_12899b70();
  /* 128964b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128964b4 jmp 0x128964e2 */
  goto L_128964e2;
L_128964b6:;
  /* 128964b6 mov ecx, dword ptr [0x128bf6a0] */
  ECX = (r32((uint32_t)(0x128bf6a0)));
  /* 128964bc and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 128964c2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 128964c4 je 0x128964cd */
  if (C.zf) goto L_128964cd;
  /* 128964c6 mov eax, 1 */
  EAX = (0x1u);
  /* 128964cb jmp 0x128964e2 */
  goto L_128964e2;
L_128964cd:;
  /* 128964cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128964d0 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128964d3 push edx */
  push32((uint32_t)(EDX));
  /* 128964d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 128964d6 mov eax, dword ptr [0x128c1044] */
  EAX = (r32((uint32_t)(0x128c1044)));
  /* 128964db push eax */
  push32((uint32_t)(EAX));
  /* 128964dc call dword ptr [0x128c2270] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2270))), 0x128964e2u);
L_128964e2:;
  /* 128964e2 mov esp, ebp */
  ESP = (EBP);
  /* 128964e4 pop ebp */
  EBP = (pop32());
  /* 128964e5 ret  */
  ESPCHK(0x12896460u, _esp0);
  ESP += 4; return;
}

/* FUN_100064f0 @ 0x128964f0 (227 bytes, 80 insns) */
void f_128964f0(void) {
  FTRACE(0x128964f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128964f0 push ebp */
  push32((uint32_t)(EBP));
  /* 128964f1 mov ebp, esp */
  EBP = (ESP);
  /* 128964f3 push ecx */
  push32((uint32_t)(ECX));
  /* 128964f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128964f7 push eax */
  push32((uint32_t)(EAX));
  /* 128964f8 call 0x12896460 */
  push32(0x128964fdu); f_12896460();
  /* 128964fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12896500 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12896502 jne 0x1289650b */
  if (!C.zf) goto L_1289650b;
  /* 12896504 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12896506 jmp 0x128965cf */
  goto L_128965cf;
L_1289650b:;
  /* 1289650b push 9 */
  push32((uint32_t)(0x9u));
  /* 1289650d call 0x12899210 */
  push32(0x12896512u); f_12899210();
  /* 12896512 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12896515 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12896518 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289651b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1289651e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12896521 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12896524 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12896529 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289652c je 0x12896550 */
  if (C.zf) goto L_12896550;
  /* 1289652e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12896531 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896535 je 0x12896550 */
  if (C.zf) goto L_12896550;
  /* 12896537 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289653a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1289653d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12896542 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896545 je 0x12896550 */
  if (C.zf) goto L_12896550;
  /* 12896547 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289654a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289654e jne 0x128965c3 */
  if (!C.zf) goto L_128965c3;
L_12896550:;
  /* 12896550 push 1 */
  push32((uint32_t)(0x1u));
  /* 12896552 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12896555 push edx */
  push32((uint32_t)(EDX));
  /* 12896556 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12896559 push eax */
  push32((uint32_t)(EAX));
  /* 1289655a call 0x12896410 */
  push32(0x1289655fu); f_12896410();
  /* 1289655f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12896562 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12896564 je 0x128965c3 */
  if (C.zf) goto L_128965c3;
  /* 12896566 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12896569 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1289656c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289656f jne 0x128965c3 */
  if (!C.zf) goto L_128965c3;
  /* 12896571 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12896574 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12896577 cmp ecx, dword ptr [0x128bda90] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x128bda90))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289657d jg 0x128965c3 */
  if ((!C.zf&&C.sf==C.of)) goto L_128965c3;
  /* 1289657f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896583 je 0x12896590 */
  if (C.zf) goto L_12896590;
  /* 12896585 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12896588 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289658b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 1289658e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12896590:;
  /* 12896590 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896594 je 0x128965a1 */
  if (C.zf) goto L_128965a1;
  /* 12896596 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12896599 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289659c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1289659f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_128965a1:;
  /* 128965a1 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128965a5 je 0x128965b2 */
  if (C.zf) goto L_128965b2;
  /* 128965a7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 128965aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128965ad mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 128965b0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_128965b2:;
  /* 128965b2 push 9 */
  push32((uint32_t)(0x9u));
  /* 128965b4 call 0x128992b0 */
  push32(0x128965b9u); f_128992b0();
  /* 128965b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128965bc mov eax, 1 */
  EAX = (0x1u);
  /* 128965c1 jmp 0x128965cf */
  goto L_128965cf;
L_128965c3:;
  /* 128965c3 push 9 */
  push32((uint32_t)(0x9u));
  /* 128965c5 call 0x128992b0 */
  push32(0x128965cau); f_128992b0();
  /* 128965ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128965cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_128965cf:;
  /* 128965cf mov esp, ebp */
  ESP = (EBP);
  /* 128965d1 pop ebp */
  EBP = (pop32());
  /* 128965d2 ret  */
  ESPCHK(0x128964f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100065e0 @ 0x128965e0 (28 bytes, 11 insns) */
void f_128965e0(void) {
  FTRACE(0x128965e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128965e0 push ebp */
  push32((uint32_t)(EBP));
  /* 128965e1 mov ebp, esp */
  EBP = (ESP);
  /* 128965e3 push ecx */
  push32((uint32_t)(ECX));
  /* 128965e4 mov eax, dword ptr [0x128c1050] */
  EAX = (r32((uint32_t)(0x128c1050)));
  /* 128965e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 128965ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128965ef mov dword ptr [0x128c1050], ecx */
  w32((uint32_t)(0x128c1050), (ECX));
  /* 128965f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128965f8 mov esp, ebp */
  ESP = (EBP);
  /* 128965fa pop ebp */
  EBP = (pop32());
  /* 128965fb ret  */
  ESPCHK(0x128965e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006600 @ 0x12896600 (362 bytes, 116 insns) */
void f_12896600(void) {
  FTRACE(0x12896600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12896600 push ebp */
  push32((uint32_t)(EBP));
  /* 12896601 mov ebp, esp */
  EBP = (ESP);
  /* 12896603 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12896606 push ebx */
  push32((uint32_t)(EBX));
  /* 12896607 push esi */
  push32((uint32_t)(ESI));
  /* 12896608 push edi */
  push32((uint32_t)(EDI));
  /* 12896609 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289660d jne 0x1289663a */
  if (!C.zf) goto L_1289663a;
L_1289660f:;
  /* 1289660f push 0x128bb1e0 */
  push32((uint32_t)(0x128bb1e0u));
  /* 12896614 push 0x128bacf8 */
  push32((uint32_t)(0x128bacf8u));
  /* 12896619 push 0 */
  push32((uint32_t)(0x0u));
  /* 1289661b push 0 */
  push32((uint32_t)(0x0u));
  /* 1289661d push 0 */
  push32((uint32_t)(0x0u));
  /* 1289661f push 0 */
  push32((uint32_t)(0x0u));
  /* 12896621 call 0x12892e00 */
  push32(0x12896626u); f_12892e00();
  /* 12896626 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12896629 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289662c jne 0x1289662f */
  if (!C.zf) goto L_1289662f;
  /* 1289662e int3  */
  x86_unimpl("int3 @ 0x1289662e");
L_1289662f:;
  /* 1289662f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12896631 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12896633 jne 0x1289660f */
  if (!C.zf) goto L_1289660f;
  /* 12896635 jmp 0x12896763 */
  goto L_12896763;
L_1289663a:;
  /* 1289663a push 9 */
  push32((uint32_t)(0x9u));
  /* 1289663c call 0x12899210 */
  push32(0x12896641u); f_12899210();
  /* 12896641 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12896644 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12896647 mov edx, dword ptr [0x128bf6ec] */
  EDX = (r32((uint32_t)(0x128bf6ec)));
  /* 1289664d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1289664f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12896656 jmp 0x12896661 */
  goto L_12896661;
L_12896658:;
  /* 12896658 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289665b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289665e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12896661:;
  /* 12896661 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896665 jge 0x12896685 */
  if ((C.sf==C.of)) goto L_12896685;
  /* 12896667 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289666a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289666d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 12896675 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12896678 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289667b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 12896683 jmp 0x12896658 */
  goto L_12896658;
L_12896685:;
  /* 12896685 mov edx, dword ptr [0x128bf6ec] */
  EDX = (r32((uint32_t)(0x128bf6ec)));
  /* 1289668b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1289668e jmp 0x12896698 */
  goto L_12896698;
L_12896690:;
  /* 12896690 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12896693 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12896695 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12896698:;
  /* 12896698 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289669c je 0x12896741 */
  if (C.zf) goto L_12896741;
  /* 128966a2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 128966a5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 128966a8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 128966ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128966af jl 0x12896717 */
  if ((C.sf!=C.of)) goto L_12896717;
  /* 128966b1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 128966b4 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 128966b7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 128966bd cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128966c0 jge 0x12896717 */
  if ((C.sf==C.of)) goto L_12896717;
  /* 128966c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128966c5 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 128966c8 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 128966ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128966d1 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 128966d5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128966d8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 128966db mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 128966de and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 128966e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128966e7 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 128966eb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 128966ee mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 128966f1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 128966f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128966f9 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 128966fd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12896700 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12896703 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12896706 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12896709 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1289670e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12896711 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 12896715 jmp 0x1289673c */
  goto L_1289673c;
L_12896717:;
  /* 12896717 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289671a push edx */
  push32((uint32_t)(EDX));
  /* 1289671b push 0x128bb1bc */
  push32((uint32_t)(0x128bb1bcu));
  /* 12896720 push 0 */
  push32((uint32_t)(0x0u));
  /* 12896722 push 0 */
  push32((uint32_t)(0x0u));
  /* 12896724 push 0 */
  push32((uint32_t)(0x0u));
  /* 12896726 push 0 */
  push32((uint32_t)(0x0u));
  /* 12896728 call 0x12892e00 */
  push32(0x1289672du); f_12892e00();
  /* 1289672d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12896730 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896733 jne 0x12896736 */
  if (!C.zf) goto L_12896736;
  /* 12896735 int3  */
  x86_unimpl("int3 @ 0x12896735");
L_12896736:;
  /* 12896736 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12896738 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289673a jne 0x12896717 */
  if (!C.zf) goto L_12896717;
L_1289673c:;
  /* 1289673c jmp 0x12896690 */
  goto L_12896690;
L_12896741:;
  /* 12896741 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12896744 mov edx, dword ptr [0x128bf6f4] */
  EDX = (r32((uint32_t)(0x128bf6f4)));
  /* 1289674a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 1289674d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12896750 mov ecx, dword ptr [0x128bf6e8] */
  ECX = (r32((uint32_t)(0x128bf6e8)));
  /* 12896756 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 12896759 push 9 */
  push32((uint32_t)(0x9u));
  /* 1289675b call 0x128992b0 */
  push32(0x12896760u); f_128992b0();
  /* 12896760 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12896763:;
  /* 12896763 pop edi */
  EDI = (pop32());
  /* 12896764 pop esi */
  ESI = (pop32());
  /* 12896765 pop ebx */
  EBX = (pop32());
  /* 12896766 mov esp, ebp */
  ESP = (EBP);
  /* 12896768 pop ebp */
  EBP = (pop32());
  /* 12896769 ret  */
  ESPCHK(0x12896600u, _esp0);
  ESP += 4; return;
}

/* FUN_10006770 @ 0x12896770 (291 bytes, 95 insns) */
void f_12896770(void) {
  FTRACE(0x12896770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12896770 push ebp */
  push32((uint32_t)(EBP));
  /* 12896771 mov ebp, esp */
  EBP = (ESP);
  /* 12896773 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12896776 push ebx */
  push32((uint32_t)(EBX));
  /* 12896777 push esi */
  push32((uint32_t)(ESI));
  /* 12896778 push edi */
  push32((uint32_t)(EDI));
  /* 12896779 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12896780 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896784 je 0x12896792 */
  if (C.zf) goto L_12896792;
  /* 12896786 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289678a je 0x12896792 */
  if (C.zf) goto L_12896792;
  /* 1289678c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896790 jne 0x128967c0 */
  if (!C.zf) goto L_128967c0;
L_12896792:;
  /* 12896792 push 0x128bb208 */
  push32((uint32_t)(0x128bb208u));
  /* 12896797 push 0x128bacf8 */
  push32((uint32_t)(0x128bacf8u));
  /* 1289679c push 0 */
  push32((uint32_t)(0x0u));
  /* 1289679e push 0 */
  push32((uint32_t)(0x0u));
  /* 128967a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 128967a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 128967a4 call 0x12892e00 */
  push32(0x128967a9u); f_12892e00();
  /* 128967a9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128967ac cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128967af jne 0x128967b2 */
  if (!C.zf) goto L_128967b2;
  /* 128967b1 int3  */
  x86_unimpl("int3 @ 0x128967b1");
L_128967b2:;
  /* 128967b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128967b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128967b6 jne 0x12896792 */
  if (!C.zf) goto L_12896792;
  /* 128967b8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128967bb jmp 0x1289688c */
  goto L_1289688c;
L_128967c0:;
  /* 128967c0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 128967c7 jmp 0x128967d2 */
  goto L_128967d2;
L_128967c9:;
  /* 128967c9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128967cc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128967cf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_128967d2:;
  /* 128967d2 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128967d6 jge 0x1289685c */
  if ((C.sf==C.of)) goto L_1289685c;
  /* 128967dc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128967df mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128967e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128967e5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 128967e8 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 128967ec sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128967f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128967f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128967f6 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 128967fa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128967fd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12896800 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12896803 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12896806 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 1289680a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289680e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12896811 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12896814 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 12896818 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289681b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289681e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896823 jne 0x12896832 */
  if (!C.zf) goto L_12896832;
  /* 12896825 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12896828 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289682b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896830 je 0x12896857 */
  if (C.zf) goto L_12896857;
L_12896832:;
  /* 12896832 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896836 je 0x12896857 */
  if (C.zf) goto L_12896857;
  /* 12896838 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289683c jne 0x12896850 */
  if (!C.zf) goto L_12896850;
  /* 1289683e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896842 jne 0x12896857 */
  if (!C.zf) goto L_12896857;
  /* 12896844 mov eax, dword ptr [0x128bda8c] */
  EAX = (r32((uint32_t)(0x128bda8c)));
  /* 12896849 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1289684c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289684e je 0x12896857 */
  if (C.zf) goto L_12896857;
L_12896850:;
  /* 12896850 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_12896857:;
  /* 12896857 jmp 0x128967c9 */
  goto L_128967c9;
L_1289685c:;
  /* 1289685c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1289685f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12896862 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12896865 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12896868 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289686b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 1289686e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12896871 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12896874 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 12896877 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289687a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289687d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 12896880 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12896883 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12896889 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1289688c:;
  /* 1289688c pop edi */
  EDI = (pop32());
  /* 1289688d pop esi */
  ESI = (pop32());
  /* 1289688e pop ebx */
  EBX = (pop32());
  /* 1289688f mov esp, ebp */
  ESP = (EBP);
  /* 12896891 pop ebp */
  EBP = (pop32());
  /* 12896892 ret  */
  ESPCHK(0x12896770u, _esp0);
  ESP += 4; return;
}

/* FUN_100068a0 @ 0x128968a0 (697 bytes, 253 insns) */
void f_128968a0(void) {
  FTRACE(0x128968a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128968a0 push ebp */
  push32((uint32_t)(EBP));
  /* 128968a1 mov ebp, esp */
  EBP = (ESP);
  /* 128968a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 128968a6 push ebx */
  push32((uint32_t)(EBX));
  /* 128968a7 push esi */
  push32((uint32_t)(ESI));
  /* 128968a8 push edi */
  push32((uint32_t)(EDI));
  /* 128968a9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 128968b0 push 9 */
  push32((uint32_t)(0x9u));
  /* 128968b2 call 0x12899210 */
  push32(0x128968b7u); f_12899210();
  /* 128968b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_128968ba:;
  /* 128968ba push 0x128bb300 */
  push32((uint32_t)(0x128bb300u));
  /* 128968bf push 0x128bacf8 */
  push32((uint32_t)(0x128bacf8u));
  /* 128968c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 128968c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 128968c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 128968ca push 0 */
  push32((uint32_t)(0x0u));
  /* 128968cc call 0x12892e00 */
  push32(0x128968d1u); f_12892e00();
  /* 128968d1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128968d4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128968d7 jne 0x128968da */
  if (!C.zf) goto L_128968da;
  /* 128968d9 int3  */
  x86_unimpl("int3 @ 0x128968d9");
L_128968da:;
  /* 128968da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128968dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128968de jne 0x128968ba */
  if (!C.zf) goto L_128968ba;
  /* 128968e0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128968e4 je 0x128968ee */
  if (C.zf) goto L_128968ee;
  /* 128968e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128968e9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 128968eb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_128968ee:;
  /* 128968ee mov eax, dword ptr [0x128bf6ec] */
  EAX = (r32((uint32_t)(0x128bf6ec)));
  /* 128968f3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 128968f6 jmp 0x12896900 */
  goto L_12896900;
L_128968f8:;
  /* 128968f8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128968fb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 128968fd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12896900:;
  /* 12896900 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896904 je 0x12896b22 */
  if (C.zf) goto L_12896b22;
  /* 1289690a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289690d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896910 je 0x12896b22 */
  if (C.zf) goto L_12896b22;
  /* 12896916 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12896919 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1289691c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12896922 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896925 je 0x12896954 */
  if (C.zf) goto L_12896954;
  /* 12896927 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289692a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1289692d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12896933 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12896935 je 0x12896954 */
  if (C.zf) goto L_12896954;
  /* 12896937 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289693a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1289693d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12896942 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896945 jne 0x12896959 */
  if (!C.zf) goto L_12896959;
  /* 12896947 mov ecx, dword ptr [0x128bda8c] */
  ECX = (r32((uint32_t)(0x128bda8c)));
  /* 1289694d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 12896950 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12896952 jne 0x12896959 */
  if (!C.zf) goto L_12896959;
L_12896954:;
  /* 12896954 jmp 0x12896b1d */
  goto L_12896b1d;
L_12896959:;
  /* 12896959 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289695c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896960 je 0x128969d2 */
  if (C.zf) goto L_128969d2;
  /* 12896962 push 0 */
  push32((uint32_t)(0x0u));
  /* 12896964 push 1 */
  push32((uint32_t)(0x1u));
  /* 12896966 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12896969 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1289696c push ecx */
  push32((uint32_t)(ECX));
  /* 1289696d call 0x12896410 */
  push32(0x12896972u); f_12896410();
  /* 12896972 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12896975 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12896977 jne 0x128969a3 */
  if (!C.zf) goto L_128969a3;
L_12896979:;
  /* 12896979 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289697c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1289697f push eax */
  push32((uint32_t)(EAX));
  /* 12896980 push 0x128bb2ec */
  push32((uint32_t)(0x128bb2ecu));
  /* 12896985 push 0 */
  push32((uint32_t)(0x0u));
  /* 12896987 push 0 */
  push32((uint32_t)(0x0u));
  /* 12896989 push 0 */
  push32((uint32_t)(0x0u));
  /* 1289698b push 0 */
  push32((uint32_t)(0x0u));
  /* 1289698d call 0x12892e00 */
  push32(0x12896992u); f_12892e00();
  /* 12896992 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12896995 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896998 jne 0x1289699b */
  if (!C.zf) goto L_1289699b;
  /* 1289699a int3  */
  x86_unimpl("int3 @ 0x1289699a");
L_1289699b:;
  /* 1289699b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1289699d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1289699f jne 0x12896979 */
  if (!C.zf) goto L_12896979;
  /* 128969a1 jmp 0x128969d2 */
  goto L_128969d2;
L_128969a3:;
  /* 128969a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128969a6 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 128969a9 push eax */
  push32((uint32_t)(EAX));
  /* 128969aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128969ad mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 128969b0 push edx */
  push32((uint32_t)(EDX));
  /* 128969b1 push 0x128bb2e0 */
  push32((uint32_t)(0x128bb2e0u));
  /* 128969b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 128969b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 128969ba push 0 */
  push32((uint32_t)(0x0u));
  /* 128969bc push 0 */
  push32((uint32_t)(0x0u));
  /* 128969be call 0x12892e00 */
  push32(0x128969c3u); f_12892e00();
  /* 128969c3 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128969c6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128969c9 jne 0x128969cc */
  if (!C.zf) goto L_128969cc;
  /* 128969cb int3  */
  x86_unimpl("int3 @ 0x128969cb");
L_128969cc:;
  /* 128969cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128969ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128969d0 jne 0x128969a3 */
  if (!C.zf) goto L_128969a3;
L_128969d2:;
  /* 128969d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128969d5 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 128969d8 push edx */
  push32((uint32_t)(EDX));
  /* 128969d9 push 0x128bb2d8 */
  push32((uint32_t)(0x128bb2d8u));
  /* 128969de push 0 */
  push32((uint32_t)(0x0u));
  /* 128969e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 128969e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 128969e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 128969e6 call 0x12892e00 */
  push32(0x128969ebu); f_12892e00();
  /* 128969eb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128969ee cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128969f1 jne 0x128969f4 */
  if (!C.zf) goto L_128969f4;
  /* 128969f3 int3  */
  x86_unimpl("int3 @ 0x128969f3");
L_128969f4:;
  /* 128969f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128969f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128969f8 jne 0x128969d2 */
  if (!C.zf) goto L_128969d2;
  /* 128969fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128969fd mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12896a00 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12896a06 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896a09 jne 0x12896a7c */
  if (!C.zf) goto L_12896a7c;
L_12896a0b:;
  /* 12896a0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12896a0e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12896a11 push ecx */
  push32((uint32_t)(ECX));
  /* 12896a12 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12896a15 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12896a18 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12896a1b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12896a20 push eax */
  push32((uint32_t)(EAX));
  /* 12896a21 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12896a24 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12896a27 push ecx */
  push32((uint32_t)(ECX));
  /* 12896a28 push 0x128bb2a4 */
  push32((uint32_t)(0x128bb2a4u));
  /* 12896a2d push 0 */
  push32((uint32_t)(0x0u));
  /* 12896a2f push 0 */
  push32((uint32_t)(0x0u));
  /* 12896a31 push 0 */
  push32((uint32_t)(0x0u));
  /* 12896a33 push 0 */
  push32((uint32_t)(0x0u));
  /* 12896a35 call 0x12892e00 */
  push32(0x12896a3au); f_12892e00();
  /* 12896a3a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12896a3d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896a40 jne 0x12896a43 */
  if (!C.zf) goto L_12896a43;
  /* 12896a42 int3  */
  x86_unimpl("int3 @ 0x12896a42");
L_12896a43:;
  /* 12896a43 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12896a45 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12896a47 jne 0x12896a0b */
  if (!C.zf) goto L_12896a0b;
  /* 12896a49 cmp dword ptr [0x128c1050], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128c1050))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896a50 je 0x12896a6b */
  if (C.zf) goto L_12896a6b;
  /* 12896a52 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12896a55 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12896a58 push ecx */
  push32((uint32_t)(ECX));
  /* 12896a59 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12896a5c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12896a5f push edx */
  push32((uint32_t)(EDX));
  /* 12896a60 call dword ptr [0x128c1050] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c1050))), 0x12896a66u);
  /* 12896a66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12896a69 jmp 0x12896a77 */
  goto L_12896a77;
L_12896a6b:;
  /* 12896a6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12896a6e push eax */
  push32((uint32_t)(EAX));
  /* 12896a6f call 0x12896b60 */
  push32(0x12896a74u); f_12896b60();
  /* 12896a74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12896a77:;
  /* 12896a77 jmp 0x12896b1d */
  goto L_12896b1d;
L_12896a7c:;
  /* 12896a7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12896a7f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896a83 jne 0x12896ac2 */
  if (!C.zf) goto L_12896ac2;
L_12896a85:;
  /* 12896a85 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12896a88 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12896a8b push eax */
  push32((uint32_t)(EAX));
  /* 12896a8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12896a8f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12896a92 push ecx */
  push32((uint32_t)(ECX));
  /* 12896a93 push 0x128bb27c */
  push32((uint32_t)(0x128bb27cu));
  /* 12896a98 push 0 */
  push32((uint32_t)(0x0u));
  /* 12896a9a push 0 */
  push32((uint32_t)(0x0u));
  /* 12896a9c push 0 */
  push32((uint32_t)(0x0u));
  /* 12896a9e push 0 */
  push32((uint32_t)(0x0u));
  /* 12896aa0 call 0x12892e00 */
  push32(0x12896aa5u); f_12892e00();
  /* 12896aa5 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12896aa8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896aab jne 0x12896aae */
  if (!C.zf) goto L_12896aae;
  /* 12896aad int3  */
  x86_unimpl("int3 @ 0x12896aad");
L_12896aae:;
  /* 12896aae xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12896ab0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12896ab2 jne 0x12896a85 */
  if (!C.zf) goto L_12896a85;
  /* 12896ab4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12896ab7 push eax */
  push32((uint32_t)(EAX));
  /* 12896ab8 call 0x12896b60 */
  push32(0x12896abdu); f_12896b60();
  /* 12896abd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12896ac0 jmp 0x12896b1d */
  goto L_12896b1d;
L_12896ac2:;
  /* 12896ac2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12896ac5 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12896ac8 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12896ace cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896ad1 jne 0x12896b1d */
  if (!C.zf) goto L_12896b1d;
L_12896ad3:;
  /* 12896ad3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12896ad6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12896ad9 push ecx */
  push32((uint32_t)(ECX));
  /* 12896ada mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12896add mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12896ae0 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12896ae3 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12896ae8 push eax */
  push32((uint32_t)(EAX));
  /* 12896ae9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12896aec add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12896aef push ecx */
  push32((uint32_t)(ECX));
  /* 12896af0 push 0x128bb248 */
  push32((uint32_t)(0x128bb248u));
  /* 12896af5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12896af7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12896af9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12896afb push 0 */
  push32((uint32_t)(0x0u));
  /* 12896afd call 0x12892e00 */
  push32(0x12896b02u); f_12892e00();
  /* 12896b02 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12896b05 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896b08 jne 0x12896b0b */
  if (!C.zf) goto L_12896b0b;
  /* 12896b0a int3  */
  x86_unimpl("int3 @ 0x12896b0a");
L_12896b0b:;
  /* 12896b0b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12896b0d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12896b0f jne 0x12896ad3 */
  if (!C.zf) goto L_12896ad3;
  /* 12896b11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12896b14 push eax */
  push32((uint32_t)(EAX));
  /* 12896b15 call 0x12896b60 */
  push32(0x12896b1au); f_12896b60();
  /* 12896b1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12896b1d:;
  /* 12896b1d jmp 0x128968f8 */
  goto L_128968f8;
L_12896b22:;
  /* 12896b22 push 9 */
  push32((uint32_t)(0x9u));
  /* 12896b24 call 0x128992b0 */
  push32(0x12896b29u); f_128992b0();
  /* 12896b29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12896b2c:;
  /* 12896b2c push 0x128bb230 */
  push32((uint32_t)(0x128bb230u));
  /* 12896b31 push 0x128bacf8 */
  push32((uint32_t)(0x128bacf8u));
  /* 12896b36 push 0 */
  push32((uint32_t)(0x0u));
  /* 12896b38 push 0 */
  push32((uint32_t)(0x0u));
  /* 12896b3a push 0 */
  push32((uint32_t)(0x0u));
  /* 12896b3c push 0 */
  push32((uint32_t)(0x0u));
  /* 12896b3e call 0x12892e00 */
  push32(0x12896b43u); f_12892e00();
  /* 12896b43 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12896b46 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896b49 jne 0x12896b4c */
  if (!C.zf) goto L_12896b4c;
  /* 12896b4b int3  */
  x86_unimpl("int3 @ 0x12896b4b");
L_12896b4c:;
  /* 12896b4c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12896b4e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12896b50 jne 0x12896b2c */
  if (!C.zf) goto L_12896b2c;
  /* 12896b52 pop edi */
  EDI = (pop32());
  /* 12896b53 pop esi */
  ESI = (pop32());
  /* 12896b54 pop ebx */
  EBX = (pop32());
  /* 12896b55 mov esp, ebp */
  ESP = (EBP);
  /* 12896b57 pop ebp */
  EBP = (pop32());
  /* 12896b58 ret  */
  ESPCHK(0x128968a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b60 @ 0x12896b60 (276 bytes, 89 insns) */
void f_12896b60(void) {
  FTRACE(0x12896b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12896b60 push ebp */
  push32((uint32_t)(EBP));
  /* 12896b61 mov ebp, esp */
  EBP = (ESP);
  /* 12896b63 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12896b66 push ebx */
  push32((uint32_t)(EBX));
  /* 12896b67 push esi */
  push32((uint32_t)(ESI));
  /* 12896b68 push edi */
  push32((uint32_t)(EDI));
  /* 12896b69 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 12896b70 jmp 0x12896b7b */
  goto L_12896b7b;
L_12896b72:;
  /* 12896b72 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12896b75 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12896b78 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_12896b7b:;
  /* 12896b7b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12896b7e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896b82 jge 0x12896b8f */
  if ((C.sf==C.of)) goto L_12896b8f;
  /* 12896b84 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12896b87 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12896b8a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 12896b8d jmp 0x12896b96 */
  goto L_12896b96;
L_12896b8f:;
  /* 12896b8f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_12896b96:;
  /* 12896b96 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12896b99 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896b9c jge 0x12896c3c */
  if ((C.sf==C.of)) goto L_12896c3c;
  /* 12896ba2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12896ba5 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12896ba8 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 12896bab mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 12896bae cmp dword ptr [0x128be158], 1 */
  { uint32_t _a=(r32((uint32_t)(0x128be158))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896bb5 jle 0x12896bd3 */
  if ((C.zf||C.sf!=C.of)) goto L_12896bd3;
  /* 12896bb7 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 12896bbc mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12896bbf and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12896bc5 push ecx */
  push32((uint32_t)(ECX));
  /* 12896bc6 call 0x1289b720 */
  push32(0x12896bcbu); f_1289b720();
  /* 12896bcb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12896bce mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 12896bd1 jmp 0x12896bf0 */
  goto L_12896bf0;
L_12896bd3:;
  /* 12896bd3 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12896bd6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12896bdc mov eax, dword ptr [0x128bdde8] */
  EAX = (r32((uint32_t)(0x128bdde8)));
  /* 12896be1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12896be3 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12896be7 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 12896bed mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_12896bf0:;
  /* 12896bf0 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896bf4 je 0x12896c04 */
  if (C.zf) goto L_12896c04;
  /* 12896bf6 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12896bf9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12896bff mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 12896c02 jmp 0x12896c0b */
  goto L_12896c0b;
L_12896c04:;
  /* 12896c04 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_12896c0b:;
  /* 12896c0b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12896c0e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 12896c11 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 12896c15 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12896c18 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12896c1e push edx */
  push32((uint32_t)(EDX));
  /* 12896c1f push 0x128bb324 */
  push32((uint32_t)(0x128bb324u));
  /* 12896c24 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12896c27 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12896c2a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 12896c2e push ecx */
  push32((uint32_t)(ECX));
  /* 12896c2f call 0x12892970 */
  push32(0x12896c34u); f_12892970();
  /* 12896c34 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12896c37 jmp 0x12896b72 */
  goto L_12896b72;
L_12896c3c:;
  /* 12896c3c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12896c3f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_12896c44:;
  /* 12896c44 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 12896c47 push eax */
  push32((uint32_t)(EAX));
  /* 12896c48 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 12896c4b push ecx */
  push32((uint32_t)(ECX));
  /* 12896c4c push 0x128bb314 */
  push32((uint32_t)(0x128bb314u));
  /* 12896c51 push 0 */
  push32((uint32_t)(0x0u));
  /* 12896c53 push 0 */
  push32((uint32_t)(0x0u));
  /* 12896c55 push 0 */
  push32((uint32_t)(0x0u));
  /* 12896c57 push 0 */
  push32((uint32_t)(0x0u));
  /* 12896c59 call 0x12892e00 */
  push32(0x12896c5eu); f_12892e00();
  /* 12896c5e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12896c61 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896c64 jne 0x12896c67 */
  if (!C.zf) goto L_12896c67;
  /* 12896c66 int3  */
  x86_unimpl("int3 @ 0x12896c66");
L_12896c67:;
  /* 12896c67 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12896c69 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12896c6b jne 0x12896c44 */
  if (!C.zf) goto L_12896c44;
  /* 12896c6d pop edi */
  EDI = (pop32());
  /* 12896c6e pop esi */
  ESI = (pop32());
  /* 12896c6f pop ebx */
  EBX = (pop32());
  /* 12896c70 mov esp, ebp */
  ESP = (EBP);
  /* 12896c72 pop ebp */
  EBP = (pop32());
  /* 12896c73 ret  */
  ESPCHK(0x12896b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c80 @ 0x12896c80 (116 bytes, 46 insns) */
void f_12896c80(void) {
  FTRACE(0x12896c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12896c80 push ebp */
  push32((uint32_t)(EBP));
  /* 12896c81 mov ebp, esp */
  EBP = (ESP);
  /* 12896c83 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12896c86 push ebx */
  push32((uint32_t)(EBX));
  /* 12896c87 push esi */
  push32((uint32_t)(ESI));
  /* 12896c88 push edi */
  push32((uint32_t)(EDI));
  /* 12896c89 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 12896c8c push eax */
  push32((uint32_t)(EAX));
  /* 12896c8d call 0x12896600 */
  push32(0x12896c92u); f_12896600();
  /* 12896c92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12896c95 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896c99 jne 0x12896cb4 */
  if (!C.zf) goto L_12896cb4;
  /* 12896c9b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896c9f jne 0x12896cb4 */
  if (!C.zf) goto L_12896cb4;
  /* 12896ca1 mov ecx, dword ptr [0x128bda8c] */
  ECX = (r32((uint32_t)(0x128bda8c)));
  /* 12896ca7 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 12896caa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12896cac je 0x12896ceb */
  if (C.zf) goto L_12896ceb;
  /* 12896cae cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896cb2 je 0x12896ceb */
  if (C.zf) goto L_12896ceb;
L_12896cb4:;
  /* 12896cb4 push 0x128bb32c */
  push32((uint32_t)(0x128bb32cu));
  /* 12896cb9 push 0x128bacf8 */
  push32((uint32_t)(0x128bacf8u));
  /* 12896cbe push 0 */
  push32((uint32_t)(0x0u));
  /* 12896cc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12896cc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12896cc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12896cc6 call 0x12892e00 */
  push32(0x12896ccbu); f_12892e00();
  /* 12896ccb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12896cce cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896cd1 jne 0x12896cd4 */
  if (!C.zf) goto L_12896cd4;
  /* 12896cd3 int3  */
  x86_unimpl("int3 @ 0x12896cd3");
L_12896cd4:;
  /* 12896cd4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12896cd6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12896cd8 jne 0x12896cb4 */
  if (!C.zf) goto L_12896cb4;
  /* 12896cda push 0 */
  push32((uint32_t)(0x0u));
  /* 12896cdc call 0x128968a0 */
  push32(0x12896ce1u); f_128968a0();
  /* 12896ce1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12896ce4 mov eax, 1 */
  EAX = (0x1u);
  /* 12896ce9 jmp 0x12896ced */
  goto L_12896ced;
L_12896ceb:;
  /* 12896ceb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12896ced:;
  /* 12896ced pop edi */
  EDI = (pop32());
  /* 12896cee pop esi */
  ESI = (pop32());
  /* 12896cef pop ebx */
  EBX = (pop32());
  /* 12896cf0 mov esp, ebp */
  ESP = (EBP);
  /* 12896cf2 pop ebp */
  EBP = (pop32());
  /* 12896cf3 ret  */
  ESPCHK(0x12896c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d00 @ 0x12896d00 (197 bytes, 79 insns) */
void f_12896d00(void) {
  FTRACE(0x12896d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12896d00 push ebp */
  push32((uint32_t)(EBP));
  /* 12896d01 mov ebp, esp */
  EBP = (ESP);
  /* 12896d03 push ecx */
  push32((uint32_t)(ECX));
  /* 12896d04 push ebx */
  push32((uint32_t)(EBX));
  /* 12896d05 push esi */
  push32((uint32_t)(ESI));
  /* 12896d06 push edi */
  push32((uint32_t)(EDI));
  /* 12896d07 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896d0b jne 0x12896d12 */
  if (!C.zf) goto L_12896d12;
  /* 12896d0d jmp 0x12896dbe */
  goto L_12896dbe;
L_12896d12:;
  /* 12896d12 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12896d19 jmp 0x12896d24 */
  goto L_12896d24;
L_12896d1b:;
  /* 12896d1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12896d1e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12896d21 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12896d24:;
  /* 12896d24 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896d28 jge 0x12896d6e */
  if ((C.sf==C.of)) goto L_12896d6e;
L_12896d2a:;
  /* 12896d2a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12896d2d mov edx, dword ptr [ecx*4 + 0x128bda9c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x128bda9c)));
  /* 12896d34 push edx */
  push32((uint32_t)(EDX));
  /* 12896d35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12896d38 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12896d3b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 12896d3f push edx */
  push32((uint32_t)(EDX));
  /* 12896d40 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12896d43 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12896d46 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 12896d4a push edx */
  push32((uint32_t)(EDX));
  /* 12896d4b push 0x128bb388 */
  push32((uint32_t)(0x128bb388u));
  /* 12896d50 push 0 */
  push32((uint32_t)(0x0u));
  /* 12896d52 push 0 */
  push32((uint32_t)(0x0u));
  /* 12896d54 push 0 */
  push32((uint32_t)(0x0u));
  /* 12896d56 push 0 */
  push32((uint32_t)(0x0u));
  /* 12896d58 call 0x12892e00 */
  push32(0x12896d5du); f_12892e00();
  /* 12896d5d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12896d60 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896d63 jne 0x12896d66 */
  if (!C.zf) goto L_12896d66;
  /* 12896d65 int3  */
  x86_unimpl("int3 @ 0x12896d65");
L_12896d66:;
  /* 12896d66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12896d68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12896d6a jne 0x12896d2a */
  if (!C.zf) goto L_12896d2a;
  /* 12896d6c jmp 0x12896d1b */
  goto L_12896d1b;
L_12896d6e:;
  /* 12896d6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12896d71 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12896d74 push edx */
  push32((uint32_t)(EDX));
  /* 12896d75 push 0x128bb364 */
  push32((uint32_t)(0x128bb364u));
  /* 12896d7a push 0 */
  push32((uint32_t)(0x0u));
  /* 12896d7c push 0 */
  push32((uint32_t)(0x0u));
  /* 12896d7e push 0 */
  push32((uint32_t)(0x0u));
  /* 12896d80 push 0 */
  push32((uint32_t)(0x0u));
  /* 12896d82 call 0x12892e00 */
  push32(0x12896d87u); f_12892e00();
  /* 12896d87 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12896d8a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896d8d jne 0x12896d90 */
  if (!C.zf) goto L_12896d90;
  /* 12896d8f int3  */
  x86_unimpl("int3 @ 0x12896d8f");
L_12896d90:;
  /* 12896d90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12896d92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12896d94 jne 0x12896d6e */
  if (!C.zf) goto L_12896d6e;
L_12896d96:;
  /* 12896d96 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12896d99 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 12896d9c push edx */
  push32((uint32_t)(EDX));
  /* 12896d9d push 0x128bb344 */
  push32((uint32_t)(0x128bb344u));
  /* 12896da2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12896da4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12896da6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12896da8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12896daa call 0x12892e00 */
  push32(0x12896dafu); f_12892e00();
  /* 12896daf add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12896db2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896db5 jne 0x12896db8 */
  if (!C.zf) goto L_12896db8;
  /* 12896db7 int3  */
  x86_unimpl("int3 @ 0x12896db7");
L_12896db8:;
  /* 12896db8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12896dba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12896dbc jne 0x12896d96 */
  if (!C.zf) goto L_12896d96;
L_12896dbe:;
  /* 12896dbe pop edi */
  EDI = (pop32());
  /* 12896dbf pop esi */
  ESI = (pop32());
  /* 12896dc0 pop ebx */
  EBX = (pop32());
  /* 12896dc1 mov esp, ebp */
  ESP = (EBP);
  /* 12896dc3 pop ebp */
  EBP = (pop32());
  /* 12896dc4 ret  */
  ESPCHK(0x12896d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10006dd0 @ 0x12896dd0 (329 bytes, 102 insns) */
void f_12896dd0(void) {
  FTRACE(0x12896dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12896dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12896dd1 mov ebp, esp */
  EBP = (ESP);
  /* 12896dd3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12896dd6 cmp dword ptr [0x128c11b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128c11b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896ddd jne 0x12896de4 */
  if (!C.zf) goto L_12896de4;
  /* 12896ddf call 0x1289bfc0 */
  push32(0x12896de4u); f_1289bfc0();
L_12896de4:;
  /* 12896de4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12896deb mov eax, dword ptr [0x128bf688] */
  EAX = (r32((uint32_t)(0x128bf688)));
  /* 12896df0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12896df3:;
  /* 12896df3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12896df6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12896df9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12896dfb je 0x12896e29 */
  if (C.zf) goto L_12896e29;
  /* 12896dfd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12896e00 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12896e03 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896e06 je 0x12896e11 */
  if (C.zf) goto L_12896e11;
  /* 12896e08 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12896e0b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12896e0e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12896e11:;
  /* 12896e11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12896e14 push eax */
  push32((uint32_t)(EAX));
  /* 12896e15 call 0x12897c90 */
  push32(0x12896e1au); f_12897c90();
  /* 12896e1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12896e1d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12896e20 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12896e24 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12896e27 jmp 0x12896df3 */
  goto L_12896df3;
L_12896e29:;
  /* 12896e29 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 12896e2b push 0x128bb3a8 */
  push32((uint32_t)(0x128bb3a8u));
  /* 12896e30 push 2 */
  push32((uint32_t)(0x2u));
  /* 12896e32 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12896e35 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 12896e3c push ecx */
  push32((uint32_t)(ECX));
  /* 12896e3d call 0x12894e60 */
  push32(0x12896e42u); f_12894e60();
  /* 12896e42 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12896e45 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12896e48 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12896e4b mov dword ptr [0x128bf6bc], edx */
  w32((uint32_t)(0x128bf6bc), (EDX));
  /* 12896e51 cmp dword ptr [0x128bf6bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf6bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896e58 jne 0x12896e64 */
  if (!C.zf) goto L_12896e64;
  /* 12896e5a push 9 */
  push32((uint32_t)(0x9u));
  /* 12896e5c call 0x12892cb0 */
  push32(0x12896e61u); f_12892cb0();
  /* 12896e61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12896e64:;
  /* 12896e64 mov eax, dword ptr [0x128bf688] */
  EAX = (r32((uint32_t)(0x128bf688)));
  /* 12896e69 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12896e6c jmp 0x12896e77 */
  goto L_12896e77;
L_12896e6e:;
  /* 12896e6e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12896e71 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12896e74 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12896e77:;
  /* 12896e77 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12896e7a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12896e7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12896e7f je 0x12896ee7 */
  if (C.zf) goto L_12896ee7;
  /* 12896e81 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12896e84 push ecx */
  push32((uint32_t)(ECX));
  /* 12896e85 call 0x12897c90 */
  push32(0x12896e8au); f_12897c90();
  /* 12896e8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12896e8d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12896e90 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12896e93 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12896e96 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12896e99 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896e9c je 0x12896ee5 */
  if (C.zf) goto L_12896ee5;
  /* 12896e9e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 12896ea0 push 0x128bb3a8 */
  push32((uint32_t)(0x128bb3a8u));
  /* 12896ea5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12896ea7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12896eaa push ecx */
  push32((uint32_t)(ECX));
  /* 12896eab call 0x12894e60 */
  push32(0x12896eb0u); f_12894e60();
  /* 12896eb0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12896eb3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12896eb6 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12896eb8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12896ebb cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896ebe jne 0x12896eca */
  if (!C.zf) goto L_12896eca;
  /* 12896ec0 push 9 */
  push32((uint32_t)(0x9u));
  /* 12896ec2 call 0x12892cb0 */
  push32(0x12896ec7u); f_12892cb0();
  /* 12896ec7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12896eca:;
  /* 12896eca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12896ecd push ecx */
  push32((uint32_t)(ECX));
  /* 12896ece mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12896ed1 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12896ed3 push eax */
  push32((uint32_t)(EAX));
  /* 12896ed4 call 0x12897e10 */
  push32(0x12896ed9u); f_12897e10();
  /* 12896ed9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12896edc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12896edf add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12896ee2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12896ee5:;
  /* 12896ee5 jmp 0x12896e6e */
  goto L_12896e6e;
L_12896ee7:;
  /* 12896ee7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12896ee9 mov edx, dword ptr [0x128bf688] */
  EDX = (r32((uint32_t)(0x128bf688)));
  /* 12896eef push edx */
  push32((uint32_t)(EDX));
  /* 12896ef0 call 0x128958f0 */
  push32(0x12896ef5u); f_128958f0();
  /* 12896ef5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12896ef8 mov dword ptr [0x128bf688], 0 */
  w32((uint32_t)(0x128bf688), (0x0u));
  /* 12896f02 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12896f05 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12896f0b mov dword ptr [0x128c11a0], 1 */
  w32((uint32_t)(0x128c11a0), (0x1u));
  /* 12896f15 mov esp, ebp */
  ESP = (EBP);
  /* 12896f17 pop ebp */
  EBP = (pop32());
  /* 12896f18 ret  */
  ESPCHK(0x12896dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f20 @ 0x12896f20 (216 bytes, 69 insns) */
void f_12896f20(void) {
  FTRACE(0x12896f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12896f20 push ebp */
  push32((uint32_t)(EBP));
  /* 12896f21 mov ebp, esp */
  EBP = (ESP);
  /* 12896f23 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12896f26 cmp dword ptr [0x128c11b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128c11b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896f2d jne 0x12896f34 */
  if (!C.zf) goto L_12896f34;
  /* 12896f2f call 0x1289bfc0 */
  push32(0x12896f34u); f_1289bfc0();
L_12896f34:;
  /* 12896f34 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12896f39 push 0x128bf6f8 */
  push32((uint32_t)(0x128bf6f8u));
  /* 12896f3e push 0 */
  push32((uint32_t)(0x0u));
  /* 12896f40 call dword ptr [0x128c2228] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2228))), 0x12896f46u);
  /* 12896f46 mov dword ptr [0x128bf6cc], 0x128bf6f8 */
  w32((uint32_t)(0x128bf6cc), (0x128bf6f8u));
  /* 12896f50 mov eax, dword ptr [0x128c11cc] */
  EAX = (r32((uint32_t)(0x128c11cc)));
  /* 12896f55 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12896f58 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12896f5a jne 0x12896f67 */
  if (!C.zf) goto L_12896f67;
  /* 12896f5c mov edx, dword ptr [0x128bf6cc] */
  EDX = (r32((uint32_t)(0x128bf6cc)));
  /* 12896f62 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12896f65 jmp 0x12896f6f */
  goto L_12896f6f;
L_12896f67:;
  /* 12896f67 mov eax, dword ptr [0x128c11cc] */
  EAX = (r32((uint32_t)(0x128c11cc)));
  /* 12896f6c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_12896f6f:;
  /* 12896f6f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12896f72 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12896f75 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12896f78 push edx */
  push32((uint32_t)(EDX));
  /* 12896f79 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12896f7c push eax */
  push32((uint32_t)(EAX));
  /* 12896f7d push 0 */
  push32((uint32_t)(0x0u));
  /* 12896f7f push 0 */
  push32((uint32_t)(0x0u));
  /* 12896f81 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12896f84 push ecx */
  push32((uint32_t)(ECX));
  /* 12896f85 call 0x12897000 */
  push32(0x12896f8au); f_12897000();
  /* 12896f8a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12896f8d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 12896f92 push 0x128bb3b4 */
  push32((uint32_t)(0x128bb3b4u));
  /* 12896f97 push 2 */
  push32((uint32_t)(0x2u));
  /* 12896f99 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12896f9c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12896f9f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 12896fa2 push ecx */
  push32((uint32_t)(ECX));
  /* 12896fa3 call 0x12894e60 */
  push32(0x12896fa8u); f_12894e60();
  /* 12896fa8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12896fab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12896fae cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896fb2 jne 0x12896fbe */
  if (!C.zf) goto L_12896fbe;
  /* 12896fb4 push 8 */
  push32((uint32_t)(0x8u));
  /* 12896fb6 call 0x12892cb0 */
  push32(0x12896fbbu); f_12892cb0();
  /* 12896fbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12896fbe:;
  /* 12896fbe lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12896fc1 push edx */
  push32((uint32_t)(EDX));
  /* 12896fc2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12896fc5 push eax */
  push32((uint32_t)(EAX));
  /* 12896fc6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12896fc9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12896fcc lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 12896fcf push eax */
  push32((uint32_t)(EAX));
  /* 12896fd0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12896fd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12896fd4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12896fd7 push edx */
  push32((uint32_t)(EDX));
  /* 12896fd8 call 0x12897000 */
  push32(0x12896fddu); f_12897000();
  /* 12896fdd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12896fe0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12896fe3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12896fe6 mov dword ptr [0x128bf6b0], eax */
  w32((uint32_t)(0x128bf6b0), (EAX));
  /* 12896feb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12896fee mov dword ptr [0x128bf6b4], ecx */
  w32((uint32_t)(0x128bf6b4), (ECX));
  /* 12896ff4 mov esp, ebp */
  ESP = (EBP);
  /* 12896ff6 pop ebp */
  EBP = (pop32());
  /* 12896ff7 ret  */
  ESPCHK(0x12896f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10007000 @ 0x12897000 (1060 bytes, 360 insns) */
void f_12897000(void) {
  FTRACE(0x12897000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12897000 push ebp */
  push32((uint32_t)(EBP));
  /* 12897001 mov ebp, esp */
  EBP = (ESP);
  /* 12897003 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12897006 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12897009 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1289700f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12897012 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 12897018 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289701b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1289701e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12897022 je 0x12897035 */
  if (C.zf) goto L_12897035;
  /* 12897024 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12897027 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1289702a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1289702c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289702f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12897032 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_12897035:;
  /* 12897035 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12897038 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1289703b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289703e jne 0x1289710d */
  if (!C.zf) goto L_1289710d;
L_12897044:;
  /* 12897044 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12897047 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289704a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1289704d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12897050 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12897053 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12897056 je 0x128970d2 */
  if (C.zf) goto L_128970d2;
  /* 12897058 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289705b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1289705e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12897060 je 0x128970d2 */
  if (C.zf) goto L_128970d2;
  /* 12897062 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12897065 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12897067 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12897069 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289706b mov al, byte ptr [edx + 0x128bfbc1] */
  AL = (r8((uint32_t)(EDX + 0x128bfbc1)));
  /* 12897071 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12897074 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12897076 je 0x128970a7 */
  if (C.zf) goto L_128970a7;
  /* 12897078 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1289707b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1289707d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12897080 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12897083 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12897085 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12897089 je 0x128970a7 */
  if (C.zf) goto L_128970a7;
  /* 1289708b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1289708e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12897091 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12897093 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12897095 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12897098 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289709b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1289709e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128970a1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128970a4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_128970a7:;
  /* 128970a7 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 128970aa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 128970ac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128970af mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 128970b2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 128970b4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128970b8 je 0x128970cd */
  if (C.zf) goto L_128970cd;
  /* 128970ba mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128970bd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128970c0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 128970c2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 128970c4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128970c7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128970ca mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_128970cd:;
  /* 128970cd jmp 0x12897044 */
  goto L_12897044;
L_128970d2:;
  /* 128970d2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 128970d5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 128970d7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128970da mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 128970dd mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 128970df cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128970e3 je 0x128970f4 */
  if (C.zf) goto L_128970f4;
  /* 128970e5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 128970e8 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 128970eb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 128970ee add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128970f1 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_128970f4:;
  /* 128970f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128970f7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 128970fa cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128970fd jne 0x12897108 */
  if (!C.zf) goto L_12897108;
  /* 128970ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12897102 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12897105 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12897108:;
  /* 12897108 jmp 0x128971dc */
  goto L_128971dc;
L_1289710d:;
  /* 1289710d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12897110 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12897112 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12897115 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12897118 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1289711a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289711e je 0x12897133 */
  if (C.zf) goto L_12897133;
  /* 12897120 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12897123 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12897126 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12897128 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1289712a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1289712d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12897130 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12897133:;
  /* 12897133 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12897136 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12897138 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1289713b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289713e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12897141 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12897144 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12897147 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1289714d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1289714f mov dl, byte ptr [ecx + 0x128bfbc1] */
  DL = (r8((uint32_t)(ECX + 0x128bfbc1)));
  /* 12897155 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12897158 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1289715a je 0x1289718b */
  if (C.zf) goto L_1289718b;
  /* 1289715c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1289715f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12897161 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12897164 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12897167 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12897169 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289716d je 0x12897182 */
  if (C.zf) goto L_12897182;
  /* 1289716f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12897172 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12897175 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12897177 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12897179 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1289717c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289717f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12897182:;
  /* 12897182 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12897185 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12897188 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1289718b:;
  /* 1289718b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289718e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12897194 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12897197 je 0x128971b7 */
  if (C.zf) goto L_128971b7;
  /* 12897199 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289719c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 128971a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128971a3 je 0x128971b7 */
  if (C.zf) goto L_128971b7;
  /* 128971a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128971a8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 128971ae cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128971b1 jne 0x1289710d */
  if (!C.zf) goto L_1289710d;
L_128971b7:;
  /* 128971b7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128971ba and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 128971c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 128971c2 jne 0x128971cf */
  if (!C.zf) goto L_128971cf;
  /* 128971c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128971c7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128971ca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 128971cd jmp 0x128971dc */
  goto L_128971dc;
L_128971cf:;
  /* 128971cf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128971d3 je 0x128971dc */
  if (C.zf) goto L_128971dc;
  /* 128971d5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 128971d8 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_128971dc:;
  /* 128971dc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_128971e3:;
  /* 128971e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128971e6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 128971e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128971eb je 0x1289720e */
  if (C.zf) goto L_1289720e;
L_128971ed:;
  /* 128971ed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128971f0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 128971f3 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128971f6 je 0x12897203 */
  if (C.zf) goto L_12897203;
  /* 128971f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128971fb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 128971fe cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12897201 jne 0x1289720e */
  if (!C.zf) goto L_1289720e;
L_12897203:;
  /* 12897203 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12897206 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12897209 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1289720c jmp 0x128971ed */
  goto L_128971ed;
L_1289720e:;
  /* 1289720e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12897211 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12897214 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12897216 jne 0x1289721d */
  if (!C.zf) goto L_1289721d;
  /* 12897218 jmp 0x128973fb */
  goto L_128973fb;
L_1289721d:;
  /* 1289721d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12897221 je 0x12897234 */
  if (C.zf) goto L_12897234;
  /* 12897223 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12897226 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12897229 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1289722b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289722e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12897231 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12897234:;
  /* 12897234 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12897237 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12897239 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289723c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1289723f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12897241:;
  /* 12897241 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12897248 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1289724f:;
  /* 1289724f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12897252 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12897255 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12897258 jne 0x1289726e */
  if (!C.zf) goto L_1289726e;
  /* 1289725a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289725d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12897260 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12897263 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12897266 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12897269 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1289726c jmp 0x1289724f */
  goto L_1289724f;
L_1289726e:;
  /* 1289726e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12897271 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12897274 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12897277 jne 0x128972ca */
  if (!C.zf) goto L_128972ca;
  /* 12897279 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289727c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1289727e mov ecx, 2 */
  ECX = (0x2u);
  /* 12897283 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12897285 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12897287 jne 0x128972c2 */
  if (!C.zf) goto L_128972c2;
  /* 12897289 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289728d je 0x128972af */
  if (C.zf) goto L_128972af;
  /* 1289728f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12897292 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12897296 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12897299 jne 0x128972a6 */
  if (!C.zf) goto L_128972a6;
  /* 1289729b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289729e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128972a1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 128972a4 jmp 0x128972ad */
  goto L_128972ad;
L_128972a6:;
  /* 128972a6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_128972ad:;
  /* 128972ad jmp 0x128972b6 */
  goto L_128972b6;
L_128972af:;
  /* 128972af mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_128972b6:;
  /* 128972b6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128972b8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128972bc sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 128972bf mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_128972c2:;
  /* 128972c2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 128972c5 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 128972c7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_128972ca:;
  /* 128972ca mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 128972cd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 128972d0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128972d3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 128972d6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 128972d8 je 0x128972fe */
  if (C.zf) goto L_128972fe;
  /* 128972da cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128972de je 0x128972ef */
  if (C.zf) goto L_128972ef;
  /* 128972e0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128972e3 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 128972e6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 128972e9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128972ec mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_128972ef:;
  /* 128972ef mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 128972f2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 128972f4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128972f7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 128972fa mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 128972fc jmp 0x128972ca */
  goto L_128972ca;
L_128972fe:;
  /* 128972fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12897301 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12897304 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12897306 je 0x12897324 */
  if (C.zf) goto L_12897324;
  /* 12897308 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289730c jne 0x12897329 */
  if (!C.zf) goto L_12897329;
  /* 1289730e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12897311 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12897314 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12897317 je 0x12897324 */
  if (C.zf) goto L_12897324;
  /* 12897319 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289731c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1289731f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12897322 jne 0x12897329 */
  if (!C.zf) goto L_12897329;
L_12897324:;
  /* 12897324 jmp 0x128973d4 */
  goto L_128973d4;
L_12897329:;
  /* 12897329 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289732d je 0x128973c6 */
  if (C.zf) goto L_128973c6;
  /* 12897333 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12897337 je 0x1289738d */
  if (C.zf) goto L_1289738d;
  /* 12897339 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289733c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289733e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12897340 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12897342 mov cl, byte ptr [eax + 0x128bfbc1] */
  CL = (r8((uint32_t)(EAX + 0x128bfbc1)));
  /* 12897348 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1289734b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1289734d je 0x12897378 */
  if (C.zf) goto L_12897378;
  /* 1289734f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12897352 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12897355 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12897357 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12897359 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1289735c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289735f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 12897362 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12897365 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12897368 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1289736b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1289736e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12897370 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12897373 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12897376 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12897378:;
  /* 12897378 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1289737b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289737e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12897380 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12897382 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12897385 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12897388 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1289738b jmp 0x128973b9 */
  goto L_128973b9;
L_1289738d:;
  /* 1289738d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12897390 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12897392 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12897394 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12897396 mov cl, byte ptr [eax + 0x128bfbc1] */
  CL = (r8((uint32_t)(EAX + 0x128bfbc1)));
  /* 1289739c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1289739f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 128973a1 je 0x128973b9 */
  if (C.zf) goto L_128973b9;
  /* 128973a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128973a6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128973a9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 128973ac mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 128973af mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 128973b1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128973b4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 128973b7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_128973b9:;
  /* 128973b9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 128973bc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 128973be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128973c1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 128973c4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_128973c6:;
  /* 128973c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128973c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128973cc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 128973cf jmp 0x12897241 */
  goto L_12897241;
L_128973d4:;
  /* 128973d4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128973d8 je 0x128973e9 */
  if (C.zf) goto L_128973e9;
  /* 128973da mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 128973dd mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 128973e0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 128973e3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128973e6 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_128973e9:;
  /* 128973e9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 128973ec mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 128973ee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128973f1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 128973f4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 128973f6 jmp 0x128971e3 */
  goto L_128971e3;
L_128973fb:;
  /* 128973fb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128973ff je 0x12897413 */
  if (C.zf) goto L_12897413;
  /* 12897401 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12897404 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1289740a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289740d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12897410 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12897413:;
  /* 12897413 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12897416 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12897418 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289741b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1289741e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12897420 mov esp, ebp */
  ESP = (EBP);
  /* 12897422 pop ebp */
  EBP = (pop32());
  /* 12897423 ret  */
  ESPCHK(0x12897000u, _esp0);
  ESP += 4; return;
}

/* FUN_10007430 @ 0x12897430 (537 bytes, 173 insns) */
void f_12897430(void) {
  FTRACE(0x12897430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12897430 push ebp */
  push32((uint32_t)(EBP));
  /* 12897431 mov ebp, esp */
  EBP = (ESP);
  /* 12897433 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12897436 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1289743d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 12897444 cmp dword ptr [0x128bf7fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf7fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289744b jne 0x1289748a */
  if (!C.zf) goto L_1289748a;
  /* 1289744d call dword ptr [0x128c2284] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2284))), 0x12897453u);
  /* 12897453 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12897456 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289745a je 0x12897468 */
  if (C.zf) goto L_12897468;
  /* 1289745c mov dword ptr [0x128bf7fc], 1 */
  w32((uint32_t)(0x128bf7fc), (0x1u));
  /* 12897466 jmp 0x1289748a */
  goto L_1289748a;
L_12897468:;
  /* 12897468 call dword ptr [0x128c2280] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2280))), 0x1289746eu);
  /* 1289746e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12897471 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12897475 je 0x12897483 */
  if (C.zf) goto L_12897483;
  /* 12897477 mov dword ptr [0x128bf7fc], 2 */
  w32((uint32_t)(0x128bf7fc), (0x2u));
  /* 12897481 jmp 0x1289748a */
  goto L_1289748a;
L_12897483:;
  /* 12897483 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12897485 jmp 0x12897645 */
  goto L_12897645;
L_1289748a:;
  /* 1289748a cmp dword ptr [0x128bf7fc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x128bf7fc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12897491 jne 0x1289758e */
  if (!C.zf) goto L_1289758e;
  /* 12897497 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289749b jne 0x128974b3 */
  if (!C.zf) goto L_128974b3;
  /* 1289749d call dword ptr [0x128c2284] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2284))), 0x128974a3u);
  /* 128974a3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 128974a6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128974aa jne 0x128974b3 */
  if (!C.zf) goto L_128974b3;
  /* 128974ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128974ae jmp 0x12897645 */
  goto L_12897645;
L_128974b3:;
  /* 128974b3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 128974b6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_128974b9:;
  /* 128974b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 128974bc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128974be mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 128974c1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 128974c3 je 0x128974e5 */
  if (C.zf) goto L_128974e5;
  /* 128974c5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128974c8 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128974cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 128974ce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 128974d1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128974d3 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 128974d6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 128974d8 jne 0x128974e3 */
  if (!C.zf) goto L_128974e3;
  /* 128974da mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128974dd add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128974e0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_128974e3:;
  /* 128974e3 jmp 0x128974b9 */
  goto L_128974b9;
L_128974e5:;
  /* 128974e5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 128974e8 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128974eb sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 128974ed add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128974f0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 128974f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 128974f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 128974f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 128974f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 128974fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128974fe push edx */
  push32((uint32_t)(EDX));
  /* 128974ff mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12897502 push eax */
  push32((uint32_t)(EAX));
  /* 12897503 push 0 */
  push32((uint32_t)(0x0u));
  /* 12897505 push 0 */
  push32((uint32_t)(0x0u));
  /* 12897507 call dword ptr [0x128c227c] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c227c))), 0x1289750du);
  /* 1289750d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12897510 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12897514 je 0x12897534 */
  if (C.zf) goto L_12897534;
  /* 12897516 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12897518 push 0x128bb3c0 */
  push32((uint32_t)(0x128bb3c0u));
  /* 1289751d push 2 */
  push32((uint32_t)(0x2u));
  /* 1289751f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12897522 push ecx */
  push32((uint32_t)(ECX));
  /* 12897523 call 0x12894e60 */
  push32(0x12897528u); f_12894e60();
  /* 12897528 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289752b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1289752e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12897532 jne 0x12897545 */
  if (!C.zf) goto L_12897545;
L_12897534:;
  /* 12897534 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12897537 push edx */
  push32((uint32_t)(EDX));
  /* 12897538 call dword ptr [0x128c2278] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2278))), 0x1289753eu);
  /* 1289753e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12897540 jmp 0x12897645 */
  goto L_12897645;
L_12897545:;
  /* 12897545 push 0 */
  push32((uint32_t)(0x0u));
  /* 12897547 push 0 */
  push32((uint32_t)(0x0u));
  /* 12897549 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289754c push eax */
  push32((uint32_t)(EAX));
  /* 1289754d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12897550 push ecx */
  push32((uint32_t)(ECX));
  /* 12897551 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12897554 push edx */
  push32((uint32_t)(EDX));
  /* 12897555 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12897558 push eax */
  push32((uint32_t)(EAX));
  /* 12897559 push 0 */
  push32((uint32_t)(0x0u));
  /* 1289755b push 0 */
  push32((uint32_t)(0x0u));
  /* 1289755d call dword ptr [0x128c227c] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c227c))), 0x12897563u);
  /* 12897563 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12897565 jne 0x1289757c */
  if (!C.zf) goto L_1289757c;
  /* 12897567 push 2 */
  push32((uint32_t)(0x2u));
  /* 12897569 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289756c push ecx */
  push32((uint32_t)(ECX));
  /* 1289756d call 0x128958f0 */
  push32(0x12897572u); f_128958f0();
  /* 12897572 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12897575 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1289757c:;
  /* 1289757c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1289757f push edx */
  push32((uint32_t)(EDX));
  /* 12897580 call dword ptr [0x128c2278] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2278))), 0x12897586u);
  /* 12897586 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12897589 jmp 0x12897645 */
  goto L_12897645;
L_1289758e:;
  /* 1289758e cmp dword ptr [0x128bf7fc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x128bf7fc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12897595 jne 0x12897643 */
  if (!C.zf) goto L_12897643;
  /* 1289759b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289759f jne 0x128975b7 */
  if (!C.zf) goto L_128975b7;
  /* 128975a1 call dword ptr [0x128c2280] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2280))), 0x128975a7u);
  /* 128975a7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 128975aa cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128975ae jne 0x128975b7 */
  if (!C.zf) goto L_128975b7;
  /* 128975b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128975b2 jmp 0x12897645 */
  goto L_12897645;
L_128975b7:;
  /* 128975b7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 128975ba mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_128975bd:;
  /* 128975bd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128975c0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 128975c3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 128975c5 je 0x128975e5 */
  if (C.zf) goto L_128975e5;
  /* 128975c7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 128975ca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128975cd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 128975d0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128975d3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 128975d6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 128975d8 jne 0x128975e3 */
  if (!C.zf) goto L_128975e3;
  /* 128975da mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 128975dd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128975e0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_128975e3:;
  /* 128975e3 jmp 0x128975bd */
  goto L_128975bd;
L_128975e5:;
  /* 128975e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128975e8 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128975eb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128975ee mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 128975f1 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 128975f6 push 0x128bb3c0 */
  push32((uint32_t)(0x128bb3c0u));
  /* 128975fb push 2 */
  push32((uint32_t)(0x2u));
  /* 128975fd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12897600 push edx */
  push32((uint32_t)(EDX));
  /* 12897601 call 0x12894e60 */
  push32(0x12897606u); f_12894e60();
  /* 12897606 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12897609 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1289760c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12897610 jne 0x12897620 */
  if (!C.zf) goto L_12897620;
  /* 12897612 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12897615 push eax */
  push32((uint32_t)(EAX));
  /* 12897616 call dword ptr [0x128c2274] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2274))), 0x1289761cu);
  /* 1289761c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289761e jmp 0x12897645 */
  goto L_12897645;
L_12897620:;
  /* 12897620 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12897623 push ecx */
  push32((uint32_t)(ECX));
  /* 12897624 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12897627 push edx */
  push32((uint32_t)(EDX));
  /* 12897628 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289762b push eax */
  push32((uint32_t)(EAX));
  /* 1289762c call 0x1289bff0 */
  push32(0x12897631u); f_1289bff0();
  /* 12897631 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12897634 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12897637 push ecx */
  push32((uint32_t)(ECX));
  /* 12897638 call dword ptr [0x128c2274] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2274))), 0x1289763eu);
  /* 1289763e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12897641 jmp 0x12897645 */
  goto L_12897645;
L_12897643:;
  /* 12897643 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12897645:;
  /* 12897645 mov esp, ebp */
  ESP = (EBP);
  /* 12897647 pop ebp */
  EBP = (pop32());
  /* 12897648 ret  */
  ESPCHK(0x12897430u, _esp0);
  ESP += 4; return;
}

/* FUN_10007650 @ 0x12897650 (77 bytes, 25 insns) */
void f_12897650(void) {
  FTRACE(0x12897650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12897650 push ebp */
  push32((uint32_t)(EBP));
  /* 12897651 mov ebp, esp */
  EBP = (ESP);
  /* 12897653 push 0 */
  push32((uint32_t)(0x0u));
  /* 12897655 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1289765a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289765c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12897660 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 12897663 push eax */
  push32((uint32_t)(EAX));
  /* 12897664 call dword ptr [0x128c21fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c21fc))), 0x1289766au);
  /* 1289766a mov dword ptr [0x128c1044], eax */
  w32((uint32_t)(0x128c1044), (EAX));
  /* 1289766f cmp dword ptr [0x128c1044], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128c1044))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12897676 jne 0x1289767c */
  if (!C.zf) goto L_1289767c;
  /* 12897678 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289767a jmp 0x1289769b */
  goto L_1289769b;
L_1289767c:;
  /* 1289767c call 0x12899ab0 */
  push32(0x12897681u); f_12899ab0();
  /* 12897681 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12897683 jne 0x12897696 */
  if (!C.zf) goto L_12897696;
  /* 12897685 mov ecx, dword ptr [0x128c1044] */
  ECX = (r32((uint32_t)(0x128c1044)));
  /* 1289768b push ecx */
  push32((uint32_t)(ECX));
  /* 1289768c call dword ptr [0x128c21f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c21f4))), 0x12897692u);
  /* 12897692 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12897694 jmp 0x1289769b */
  goto L_1289769b;
L_12897696:;
  /* 12897696 mov eax, 1 */
  EAX = (0x1u);
L_1289769b:;
  /* 1289769b pop ebp */
  EBP = (pop32());
  /* 1289769c ret  */
  ESPCHK(0x12897650u, _esp0);
  ESP += 4; return;
}

/* FUN_100076a0 @ 0x128976a0 (156 bytes, 48 insns) */
void f_128976a0(void) {
  FTRACE(0x128976a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128976a0 push ebp */
  push32((uint32_t)(EBP));
  /* 128976a1 mov ebp, esp */
  EBP = (ESP);
  /* 128976a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 128976a6 mov eax, dword ptr [0x128bfce8] */
  EAX = (r32((uint32_t)(0x128bfce8)));
  /* 128976ab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 128976ae mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 128976b5 jmp 0x128976c0 */
  goto L_128976c0;
L_128976b7:;
  /* 128976b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128976ba add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128976bd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_128976c0:;
  /* 128976c0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128976c3 cmp edx, dword ptr [0x128bfce4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x128bfce4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128976c9 jge 0x12897716 */
  if ((C.sf==C.of)) goto L_12897716;
  /* 128976cb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 128976d0 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 128976d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128976d8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 128976db push ecx */
  push32((uint32_t)(ECX));
  /* 128976dc call dword ptr [0x128c2294] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2294))), 0x128976e2u);
  /* 128976e2 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 128976e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 128976e9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 128976ec mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 128976ef push eax */
  push32((uint32_t)(EAX));
  /* 128976f0 call dword ptr [0x128c2294] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2294))), 0x128976f6u);
  /* 128976f6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 128976f9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 128976fc push edx */
  push32((uint32_t)(EDX));
  /* 128976fd push 0 */
  push32((uint32_t)(0x0u));
  /* 128976ff mov eax, dword ptr [0x128c1044] */
  EAX = (r32((uint32_t)(0x128c1044)));
  /* 12897704 push eax */
  push32((uint32_t)(EAX));
  /* 12897705 call dword ptr [0x128c2200] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2200))), 0x1289770bu);
  /* 1289770b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289770e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12897711 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12897714 jmp 0x128976b7 */
  goto L_128976b7;
L_12897716:;
  /* 12897716 mov edx, dword ptr [0x128bfce8] */
  EDX = (r32((uint32_t)(0x128bfce8)));
  /* 1289771c push edx */
  push32((uint32_t)(EDX));
  /* 1289771d push 0 */
  push32((uint32_t)(0x0u));
  /* 1289771f mov eax, dword ptr [0x128c1044] */
  EAX = (r32((uint32_t)(0x128c1044)));
  /* 12897724 push eax */
  push32((uint32_t)(EAX));
  /* 12897725 call dword ptr [0x128c2200] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2200))), 0x1289772bu);
  /* 1289772b mov ecx, dword ptr [0x128c1044] */
  ECX = (r32((uint32_t)(0x128c1044)));
  /* 12897731 push ecx */
  push32((uint32_t)(ECX));
  /* 12897732 call dword ptr [0x128c21f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c21f4))), 0x12897738u);
  /* 12897738 mov esp, ebp */
  ESP = (EBP);
  /* 1289773a pop ebp */
  EBP = (pop32());
  /* 1289773b ret  */
  ESPCHK(0x128976a0u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x12897740 (73 bytes, 19 insns) */
void f_12897740(void) {
  FTRACE(0x12897740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12897740 push ebp */
  push32((uint32_t)(EBP));
  /* 12897741 mov ebp, esp */
  EBP = (ESP);
  /* 12897743 cmp dword ptr [0x128bf690], 1 */
  { uint32_t _a=(r32((uint32_t)(0x128bf690))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289774a je 0x1289775e */
  if (C.zf) goto L_1289775e;
  /* 1289774c cmp dword ptr [0x128bf690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12897753 jne 0x12897787 */
  if (!C.zf) goto L_12897787;
  /* 12897755 cmp dword ptr [0x128bf694], 1 */
  { uint32_t _a=(r32((uint32_t)(0x128bf694))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289775c jne 0x12897787 */
  if (!C.zf) goto L_12897787;
L_1289775e:;
  /* 1289775e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 12897763 call 0x12897790 */
  push32(0x12897768u); f_12897790();
  /* 12897768 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289776b cmp dword ptr [0x128bf800], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf800))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12897772 je 0x1289777a */
  if (C.zf) goto L_1289777a;
  /* 12897774 call dword ptr [0x128bf800] */
  call_ind((uint32_t)(r32((uint32_t)(0x128bf800))), 0x1289777au);
L_1289777a:;
  /* 1289777a push 0xff */
  push32((uint32_t)(0xffu));
  /* 1289777f call 0x12897790 */
  push32(0x12897784u); f_12897790();
  /* 12897784 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12897787:;
  /* 12897787 pop ebp */
  EBP = (pop32());
  /* 12897788 ret  */
  ESPCHK(0x12897740u, _esp0);
  ESP += 4; return;
}

/* FUN_10007790 @ 0x12897790 (447 bytes, 131 insns) */
void f_12897790(void) {
  FTRACE(0x12897790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12897790 push ebp */
  push32((uint32_t)(EBP));
  /* 12897791 mov ebp, esp */
  EBP = (ESP);
  /* 12897793 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12897799 push ebx */
  push32((uint32_t)(EBX));
  /* 1289779a push esi */
  push32((uint32_t)(ESI));
  /* 1289779b push edi */
  push32((uint32_t)(EDI));
  /* 1289779c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 128977a3 jmp 0x128977ae */
  goto L_128977ae;
L_128977a5:;
  /* 128977a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128977a8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128977ab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_128977ae:;
  /* 128977ae cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128977b2 jae 0x128977c7 */
  if (!C.cf) goto L_128977c7;
  /* 128977b4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 128977b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128977ba cmp edx, dword ptr [ecx*8 + 0x128bdab8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x128bdab8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128977c1 jne 0x128977c5 */
  if (!C.zf) goto L_128977c5;
  /* 128977c3 jmp 0x128977c7 */
  goto L_128977c7;
L_128977c5:;
  /* 128977c5 jmp 0x128977a5 */
  goto L_128977a5;
L_128977c7:;
  /* 128977c7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128977ca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128977cd cmp ecx, dword ptr [eax*8 + 0x128bdab8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x128bdab8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128977d4 jne 0x12897948 */
  if (!C.zf) goto L_12897948;
  /* 128977da cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128977e1 je 0x12897804 */
  if (C.zf) goto L_12897804;
  /* 128977e3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 128977e6 mov eax, dword ptr [edx*8 + 0x128bdabc] */
  EAX = (r32((uint32_t)(EDX*8 + 0x128bdabc)));
  /* 128977ed push eax */
  push32((uint32_t)(EAX));
  /* 128977ee push 0 */
  push32((uint32_t)(0x0u));
  /* 128977f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 128977f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 128977f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 128977f6 call 0x12892e00 */
  push32(0x128977fbu); f_12892e00();
  /* 128977fb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128977fe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12897801 jne 0x12897804 */
  if (!C.zf) goto L_12897804;
  /* 12897803 int3  */
  x86_unimpl("int3 @ 0x12897803");
L_12897804:;
  /* 12897804 cmp dword ptr [0x128bf690], 1 */
  { uint32_t _a=(r32((uint32_t)(0x128bf690))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289780b je 0x1289781f */
  if (C.zf) goto L_1289781f;
  /* 1289780d cmp dword ptr [0x128bf690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12897814 jne 0x12897858 */
  if (!C.zf) goto L_12897858;
  /* 12897816 cmp dword ptr [0x128bf694], 1 */
  { uint32_t _a=(r32((uint32_t)(0x128bf694))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289781d jne 0x12897858 */
  if (!C.zf) goto L_12897858;
L_1289781f:;
  /* 1289781f push 0 */
  push32((uint32_t)(0x0u));
  /* 12897821 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 12897824 push ecx */
  push32((uint32_t)(ECX));
  /* 12897825 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12897828 mov eax, dword ptr [edx*8 + 0x128bdabc] */
  EAX = (r32((uint32_t)(EDX*8 + 0x128bdabc)));
  /* 1289782f push eax */
  push32((uint32_t)(EAX));
  /* 12897830 call 0x12897c90 */
  push32(0x12897835u); f_12897c90();
  /* 12897835 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12897838 push eax */
  push32((uint32_t)(EAX));
  /* 12897839 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289783c mov edx, dword ptr [ecx*8 + 0x128bdabc] */
  EDX = (r32((uint32_t)(ECX*8 + 0x128bdabc)));
  /* 12897843 push edx */
  push32((uint32_t)(EDX));
  /* 12897844 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12897846 call dword ptr [0x128c2210] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2210))), 0x1289784cu);
  /* 1289784c push eax */
  push32((uint32_t)(EAX));
  /* 1289784d call dword ptr [0x128c2214] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2214))), 0x12897853u);
  /* 12897853 jmp 0x12897948 */
  goto L_12897948;
L_12897858:;
  /* 12897858 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289785f je 0x12897948 */
  if (C.zf) goto L_12897948;
  /* 12897865 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 1289786a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 12897870 push eax */
  push32((uint32_t)(EAX));
  /* 12897871 push 0 */
  push32((uint32_t)(0x0u));
  /* 12897873 call dword ptr [0x128c2228] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2228))), 0x12897879u);
  /* 12897879 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289787b jne 0x12897891 */
  if (!C.zf) goto L_12897891;
  /* 1289787d push 0x128bab40 */
  push32((uint32_t)(0x128bab40u));
  /* 12897882 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12897888 push ecx */
  push32((uint32_t)(ECX));
  /* 12897889 call 0x12897e10 */
  push32(0x1289788eu); f_12897e10();
  /* 1289788e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12897891:;
  /* 12897891 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 12897897 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1289789a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289789d push eax */
  push32((uint32_t)(EAX));
  /* 1289789e call 0x12897c90 */
  push32(0x128978a3u); f_12897c90();
  /* 128978a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128978a6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128978a9 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128978ac jbe 0x128978da */
  if ((C.cf||C.zf)) goto L_128978da;
  /* 128978ae lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 128978b4 push ecx */
  push32((uint32_t)(ECX));
  /* 128978b5 call 0x12897c90 */
  push32(0x128978bau); f_12897c90();
  /* 128978ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128978bd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128978c0 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 128978c4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 128978c7 push 3 */
  push32((uint32_t)(0x3u));
  /* 128978c9 push 0x128bab3c */
  push32((uint32_t)(0x128bab3cu));
  /* 128978ce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128978d1 push ecx */
  push32((uint32_t)(ECX));
  /* 128978d2 call 0x12898680 */
  push32(0x128978d7u); f_12898680();
  /* 128978d7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_128978da:;
  /* 128978da push 0x128bb67c */
  push32((uint32_t)(0x128bb67cu));
  /* 128978df lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 128978e5 push edx */
  push32((uint32_t)(EDX));
  /* 128978e6 call 0x12897e10 */
  push32(0x128978ebu); f_12897e10();
  /* 128978eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128978ee mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 128978f1 push eax */
  push32((uint32_t)(EAX));
  /* 128978f2 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 128978f8 push ecx */
  push32((uint32_t)(ECX));
  /* 128978f9 call 0x12897e20 */
  push32(0x128978feu); f_12897e20();
  /* 128978fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12897901 push 0x128baab4 */
  push32((uint32_t)(0x128baab4u));
  /* 12897906 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 1289790c push edx */
  push32((uint32_t)(EDX));
  /* 1289790d call 0x12897e20 */
  push32(0x12897912u); f_12897e20();
  /* 12897912 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12897915 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12897918 mov ecx, dword ptr [eax*8 + 0x128bdabc] */
  ECX = (r32((uint32_t)(EAX*8 + 0x128bdabc)));
  /* 1289791f push ecx */
  push32((uint32_t)(ECX));
  /* 12897920 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12897926 push edx */
  push32((uint32_t)(EDX));
  /* 12897927 call 0x12897e20 */
  push32(0x1289792cu); f_12897e20();
  /* 1289792c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289792f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 12897934 push 0x128bb654 */
  push32((uint32_t)(0x128bb654u));
  /* 12897939 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 1289793f push eax */
  push32((uint32_t)(EAX));
  /* 12897940 call 0x128985c0 */
  push32(0x12897945u); f_128985c0();
  /* 12897945 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12897948:;
  /* 12897948 pop edi */
  EDI = (pop32());
  /* 12897949 pop esi */
  ESI = (pop32());
  /* 1289794a pop ebx */
  EBX = (pop32());
  /* 1289794b mov esp, ebp */
  ESP = (EBP);
  /* 1289794d pop ebp */
  EBP = (pop32());
  /* 1289794e ret  */
  ESPCHK(0x12897790u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x12897950 (80 bytes, 27 insns) */
void f_12897950(void) {
  FTRACE(0x12897950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12897950 push ebp */
  push32((uint32_t)(EBP));
  /* 12897951 mov ebp, esp */
  EBP = (ESP);
  /* 12897953 push ecx */
  push32((uint32_t)(ECX));
  /* 12897954 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1289795b jmp 0x12897966 */
  goto L_12897966;
L_1289795d:;
  /* 1289795d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12897960 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12897963 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12897966:;
  /* 12897966 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289796a jae 0x1289797f */
  if (!C.cf) goto L_1289797f;
  /* 1289796c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289796f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12897972 cmp edx, dword ptr [ecx*8 + 0x128bdab8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x128bdab8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12897979 jne 0x1289797d */
  if (!C.zf) goto L_1289797d;
  /* 1289797b jmp 0x1289797f */
  goto L_1289797f;
L_1289797d:;
  /* 1289797d jmp 0x1289795d */
  goto L_1289795d;
L_1289797f:;
  /* 1289797f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12897982 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12897985 cmp ecx, dword ptr [eax*8 + 0x128bdab8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x128bdab8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289798c jne 0x1289799a */
  if (!C.zf) goto L_1289799a;
  /* 1289798e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12897991 mov eax, dword ptr [edx*8 + 0x128bdabc] */
  EAX = (r32((uint32_t)(EDX*8 + 0x128bdabc)));
  /* 12897998 jmp 0x1289799c */
  goto L_1289799c;
L_1289799a:;
  /* 1289799a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1289799c:;
  /* 1289799c mov esp, ebp */
  ESP = (EBP);
  /* 1289799e pop ebp */
  EBP = (pop32());
  /* 1289799f ret  */
  ESPCHK(0x12897950u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x128979a0 (66 bytes, 28 insns) */
void f_128979a0(void) {
  FTRACE(0x128979a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128979a0 push ebp */
  push32((uint32_t)(EBP));
  /* 128979a1 mov ebp, esp */
  EBP = (ESP);
  /* 128979a3 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128979a7 jne 0x128979c7 */
  if (!C.zf) goto L_128979c7;
  /* 128979a9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128979ad jge 0x128979c7 */
  if ((C.sf==C.of)) goto L_128979c7;
  /* 128979af push 1 */
  push32((uint32_t)(0x1u));
  /* 128979b1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128979b4 push eax */
  push32((uint32_t)(EAX));
  /* 128979b5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 128979b8 push ecx */
  push32((uint32_t)(ECX));
  /* 128979b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128979bc push edx */
  push32((uint32_t)(EDX));
  /* 128979bd call 0x128979f0 */
  push32(0x128979c2u); f_128979f0();
  /* 128979c2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128979c5 jmp 0x128979dd */
  goto L_128979dd;
L_128979c7:;
  /* 128979c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 128979c9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128979cc push eax */
  push32((uint32_t)(EAX));
  /* 128979cd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 128979d0 push ecx */
  push32((uint32_t)(ECX));
  /* 128979d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128979d4 push edx */
  push32((uint32_t)(EDX));
  /* 128979d5 call 0x128979f0 */
  push32(0x128979dau); f_128979f0();
  /* 128979da add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_128979dd:;
  /* 128979dd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 128979e0 pop ebp */
  EBP = (pop32());
  /* 128979e1 ret  */
  ESPCHK(0x128979a0u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x128979f0 (194 bytes, 71 insns) */
void f_128979f0(void) {
  FTRACE(0x128979f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128979f0 push ebp */
  push32((uint32_t)(EBP));
  /* 128979f1 mov ebp, esp */
  EBP = (ESP);
  /* 128979f3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 128979f6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 128979f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 128979fc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12897a00 je 0x12897a19 */
  if (C.zf) goto L_12897a19;
  /* 12897a02 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12897a05 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 12897a08 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12897a0b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12897a0e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12897a11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12897a14 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12897a16 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12897a19:;
  /* 12897a19 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12897a1c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12897a1f:;
  /* 12897a1f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12897a22 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12897a24 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12897a27 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12897a2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12897a2d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12897a2f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12897a32 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12897a35 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12897a39 jbe 0x12897a51 */
  if ((C.cf||C.zf)) goto L_12897a51;
  /* 12897a3b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12897a3e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12897a41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12897a44 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12897a46 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12897a49 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12897a4c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12897a4f jmp 0x12897a65 */
  goto L_12897a65;
L_12897a51:;
  /* 12897a51 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12897a54 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12897a57 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12897a5a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12897a5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12897a5f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12897a62 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12897a65:;
  /* 12897a65 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12897a69 ja 0x12897a1f */
  if ((!C.cf&&!C.zf)) goto L_12897a1f;
  /* 12897a6b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12897a6e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12897a71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12897a74 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12897a77 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12897a7a:;
  /* 12897a7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12897a7d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12897a7f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12897a82 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12897a85 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12897a88 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12897a8a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12897a8c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12897a8f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 12897a92 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12897a94 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12897a97 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12897a9a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12897a9d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12897aa0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12897aa3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12897aa6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12897aa9 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12897aac jb 0x12897a7a */
  if (C.cf) goto L_12897a7a;
  /* 12897aae mov esp, ebp */
  ESP = (EBP);
  /* 12897ab0 pop ebp */
  EBP = (pop32());
  /* 12897ab1 ret  */
  ESPCHK(0x128979f0u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x12897ac0 (63 bytes, 24 insns) */
void f_12897ac0(void) {
  FTRACE(0x12897ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12897ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 12897ac1 mov ebp, esp */
  EBP = (ESP);
  /* 12897ac3 push ecx */
  push32((uint32_t)(ECX));
  /* 12897ac4 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12897ac8 jne 0x12897ad9 */
  if (!C.zf) goto L_12897ad9;
  /* 12897aca cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12897ace jge 0x12897ad9 */
  if ((C.sf==C.of)) goto L_12897ad9;
  /* 12897ad0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12897ad7 jmp 0x12897ae0 */
  goto L_12897ae0;
L_12897ad9:;
  /* 12897ad9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12897ae0:;
  /* 12897ae0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12897ae3 push eax */
  push32((uint32_t)(EAX));
  /* 12897ae4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12897ae7 push ecx */
  push32((uint32_t)(ECX));
  /* 12897ae8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12897aeb push edx */
  push32((uint32_t)(EDX));
  /* 12897aec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12897aef push eax */
  push32((uint32_t)(EAX));
  /* 12897af0 call 0x128979f0 */
  push32(0x12897af5u); f_128979f0();
  /* 12897af5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12897af8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12897afb mov esp, ebp */
  ESP = (EBP);
  /* 12897afd pop ebp */
  EBP = (pop32());
  /* 12897afe ret  */
  ESPCHK(0x12897ac0u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x12897b00 (30 bytes, 14 insns) */
void f_12897b00(void) {
  FTRACE(0x12897b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12897b00 push ebp */
  push32((uint32_t)(EBP));
  /* 12897b01 mov ebp, esp */
  EBP = (ESP);
  /* 12897b03 push 0 */
  push32((uint32_t)(0x0u));
  /* 12897b05 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12897b08 push eax */
  push32((uint32_t)(EAX));
  /* 12897b09 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12897b0c push ecx */
  push32((uint32_t)(ECX));
  /* 12897b0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12897b10 push edx */
  push32((uint32_t)(EDX));
  /* 12897b11 call 0x128979f0 */
  push32(0x12897b16u); f_128979f0();
  /* 12897b16 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12897b19 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12897b1c pop ebp */
  EBP = (pop32());
  /* 12897b1d ret  */
  ESPCHK(0x12897b00u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x12897b20 (72 bytes, 28 insns) */
void f_12897b20(void) {
  FTRACE(0x12897b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12897b20 push ebp */
  push32((uint32_t)(EBP));
  /* 12897b21 mov ebp, esp */
  EBP = (ESP);
  /* 12897b23 push ecx */
  push32((uint32_t)(ECX));
  /* 12897b24 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12897b28 jne 0x12897b41 */
  if (!C.zf) goto L_12897b41;
  /* 12897b2a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12897b2e jg 0x12897b41 */
  if ((!C.zf&&C.sf==C.of)) goto L_12897b41;
  /* 12897b30 jl 0x12897b38 */
  if ((C.sf!=C.of)) goto L_12897b38;
  /* 12897b32 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12897b36 jae 0x12897b41 */
  if (!C.cf) goto L_12897b41;
L_12897b38:;
  /* 12897b38 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12897b3f jmp 0x12897b48 */
  goto L_12897b48;
L_12897b41:;
  /* 12897b41 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12897b48:;
  /* 12897b48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12897b4b push eax */
  push32((uint32_t)(EAX));
  /* 12897b4c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12897b4f push ecx */
  push32((uint32_t)(ECX));
  /* 12897b50 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12897b53 push edx */
  push32((uint32_t)(EDX));
  /* 12897b54 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12897b57 push eax */
  push32((uint32_t)(EAX));
  /* 12897b58 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12897b5b push ecx */
  push32((uint32_t)(ECX));
  /* 12897b5c call 0x12897b70 */
  push32(0x12897b61u); f_12897b70();
  /* 12897b61 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12897b64 mov esp, ebp */
  ESP = (EBP);
  /* 12897b66 pop ebp */
  EBP = (pop32());
  /* 12897b67 ret  */
  ESPCHK(0x12897b20u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x12897b70 (242 bytes, 91 insns) */
void f_12897b70(void) {
  FTRACE(0x12897b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12897b70 push ebp */
  push32((uint32_t)(EBP));
  /* 12897b71 mov ebp, esp */
  EBP = (ESP);
  /* 12897b73 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12897b76 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12897b79 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12897b7c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12897b80 je 0x12897ba4 */
  if (C.zf) goto L_12897ba4;
  /* 12897b82 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12897b85 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 12897b88 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12897b8b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12897b8e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12897b91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12897b94 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12897b96 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12897b99 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12897b9c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12897b9e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12897ba1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12897ba4:;
  /* 12897ba4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12897ba7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12897baa:;
  /* 12897baa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12897bad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12897baf push ecx */
  push32((uint32_t)(ECX));
  /* 12897bb0 push eax */
  push32((uint32_t)(EAX));
  /* 12897bb1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12897bb4 push edx */
  push32((uint32_t)(EDX));
  /* 12897bb5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12897bb8 push eax */
  push32((uint32_t)(EAX));
  /* 12897bb9 call 0x128990b0 */
  push32(0x12897bbeu); f_128990b0();
  /* 12897bbe mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12897bc1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12897bc4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12897bc6 push edx */
  push32((uint32_t)(EDX));
  /* 12897bc7 push ecx */
  push32((uint32_t)(ECX));
  /* 12897bc8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12897bcb push eax */
  push32((uint32_t)(EAX));
  /* 12897bcc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12897bcf push ecx */
  push32((uint32_t)(ECX));
  /* 12897bd0 call 0x12899040 */
  push32(0x12897bd5u); f_12899040();
  /* 12897bd5 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12897bd8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12897bdb cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12897bdf jbe 0x12897bf7 */
  if ((C.cf||C.zf)) goto L_12897bf7;
  /* 12897be1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12897be4 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12897be7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12897bea mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12897bec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12897bef add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12897bf2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12897bf5 jmp 0x12897c0b */
  goto L_12897c0b;
L_12897bf7:;
  /* 12897bf7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12897bfa add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12897bfd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12897c00 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12897c02 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12897c05 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12897c08 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12897c0b:;
  /* 12897c0b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12897c0f ja 0x12897baa */
  if ((!C.cf&&!C.zf)) goto L_12897baa;
  /* 12897c11 jb 0x12897c19 */
  if (C.cf) goto L_12897c19;
  /* 12897c13 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12897c17 ja 0x12897baa */
  if ((!C.cf&&!C.zf)) goto L_12897baa;
L_12897c19:;
  /* 12897c19 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12897c1c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12897c1f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12897c22 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12897c25 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12897c28:;
  /* 12897c28 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12897c2b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12897c2d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12897c30 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12897c33 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12897c36 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12897c38 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12897c3a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12897c3d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 12897c40 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12897c42 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12897c45 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12897c48 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12897c4b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12897c4e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12897c51 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12897c54 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12897c57 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12897c5a jb 0x12897c28 */
  if (C.cf) goto L_12897c28;
  /* 12897c5c mov esp, ebp */
  ESP = (EBP);
  /* 12897c5e pop ebp */
  EBP = (pop32());
  /* 12897c5f ret 0x14 */
  ESPCHK(0x12897b70u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x12897c70 (31 bytes, 15 insns) */
void f_12897c70(void) {
  FTRACE(0x12897c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12897c70 push ebp */
  push32((uint32_t)(EBP));
  /* 12897c71 mov ebp, esp */
  EBP = (ESP);
  /* 12897c73 push 0 */
  push32((uint32_t)(0x0u));
  /* 12897c75 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12897c78 push eax */
  push32((uint32_t)(EAX));
  /* 12897c79 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12897c7c push ecx */
  push32((uint32_t)(ECX));
  /* 12897c7d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12897c80 push edx */
  push32((uint32_t)(EDX));
  /* 12897c81 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12897c84 push eax */
  push32((uint32_t)(EAX));
  /* 12897c85 call 0x12897b70 */
  push32(0x12897c8au); f_12897b70();
  /* 12897c8a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12897c8d pop ebp */
  EBP = (pop32());
  /* 12897c8e ret  */
  ESPCHK(0x12897c70u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x12897c90 (123 bytes, 44 insns) */
void f_12897c90(void) {
  FTRACE(0x12897c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12897c90 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12897c94 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12897c9a je 0x12897cb0 */
  if (C.zf) goto L_12897cb0;
L_12897c9c:;
  /* 12897c9c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 12897c9e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12897c9f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12897ca1 je 0x12897ce3 */
  if (C.zf) goto L_12897ce3;
  /* 12897ca3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12897ca9 jne 0x12897c9c */
  if (!C.zf) goto L_12897c9c;
  /* 12897cab add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12897cb0:;
  /* 12897cb0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12897cb2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12897cb7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12897cb9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12897cbc xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12897cbe add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12897cc1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12897cc6 je 0x12897cb0 */
  if (C.zf) goto L_12897cb0;
  /* 12897cc8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12897ccb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12897ccd je 0x12897d01 */
  if (C.zf) goto L_12897d01;
  /* 12897ccf test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12897cd1 je 0x12897cf7 */
  if (C.zf) goto L_12897cf7;
  /* 12897cd3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12897cd8 je 0x12897ced */
  if (C.zf) goto L_12897ced;
  /* 12897cda test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 12897cdf je 0x12897ce3 */
  if (C.zf) goto L_12897ce3;
  /* 12897ce1 jmp 0x12897cb0 */
  goto L_12897cb0;
L_12897ce3:;
  /* 12897ce3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 12897ce6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12897cea sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12897cec ret  */
  ESPCHK(0x12897c90u, _esp0);
  ESP += 4; return;
L_12897ced:;
  /* 12897ced lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 12897cf0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12897cf4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12897cf6 ret  */
  ESPCHK(0x12897c90u, _esp0);
  ESP += 4; return;
L_12897cf7:;
  /* 12897cf7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 12897cfa mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12897cfe sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12897d00 ret  */
  ESPCHK(0x12897c90u, _esp0);
  ESP += 4; return;
L_12897d01:;
  /* 12897d01 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 12897d04 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12897d08 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12897d0a ret  */
  ESPCHK(0x12897c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d10 @ 0x12897d10 (249 bytes, 93 insns) */
void f_12897d10(void) {
  FTRACE(0x12897d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12897d10 push ebp */
  push32((uint32_t)(EBP));
  /* 12897d11 mov ebp, esp */
  EBP = (ESP);
  /* 12897d13 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12897d16 push ebx */
  push32((uint32_t)(EBX));
  /* 12897d17 push esi */
  push32((uint32_t)(ESI));
  /* 12897d18 push edi */
  push32((uint32_t)(EDI));
  /* 12897d19 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12897d1c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12897d1f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 12897d22 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_12897d25:;
  /* 12897d25 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12897d29 jne 0x12897d49 */
  if (!C.zf) goto L_12897d49;
  /* 12897d2b push 0x128ba938 */
  push32((uint32_t)(0x128ba938u));
  /* 12897d30 push 0 */
  push32((uint32_t)(0x0u));
  /* 12897d32 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 12897d34 push 0x128ba92c */
  push32((uint32_t)(0x128ba92cu));
  /* 12897d39 push 2 */
  push32((uint32_t)(0x2u));
  /* 12897d3b call 0x12892e00 */
  push32(0x12897d40u); f_12892e00();
  /* 12897d40 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12897d43 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12897d46 jne 0x12897d49 */
  if (!C.zf) goto L_12897d49;
  /* 12897d48 int3  */
  x86_unimpl("int3 @ 0x12897d48");
L_12897d49:;
  /* 12897d49 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12897d4b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12897d4d jne 0x12897d25 */
  if (!C.zf) goto L_12897d25;
L_12897d4f:;
  /* 12897d4f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12897d53 jne 0x12897d73 */
  if (!C.zf) goto L_12897d73;
  /* 12897d55 push 0x128ba91c */
  push32((uint32_t)(0x128ba91cu));
  /* 12897d5a push 0 */
  push32((uint32_t)(0x0u));
  /* 12897d5c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12897d5e push 0x128ba92c */
  push32((uint32_t)(0x128ba92cu));
  /* 12897d63 push 2 */
  push32((uint32_t)(0x2u));
  /* 12897d65 call 0x12892e00 */
  push32(0x12897d6au); f_12892e00();
  /* 12897d6a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12897d6d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12897d70 jne 0x12897d73 */
  if (!C.zf) goto L_12897d73;
  /* 12897d72 int3  */
  x86_unimpl("int3 @ 0x12897d72");
L_12897d73:;
  /* 12897d73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12897d75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12897d77 jne 0x12897d4f */
  if (!C.zf) goto L_12897d4f;
  /* 12897d79 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12897d7c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 12897d83 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12897d86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12897d89 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12897d8c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12897d8f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12897d92 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12897d94 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12897d97 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12897d9a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12897d9d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12897da0 push edx */
  push32((uint32_t)(EDX));
  /* 12897da1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12897da4 push eax */
  push32((uint32_t)(EAX));
  /* 12897da5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12897da8 push ecx */
  push32((uint32_t)(ECX));
  /* 12897da9 call 0x12893720 */
  push32(0x12897daeu); f_12893720();
  /* 12897dae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12897db1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12897db4 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12897db7 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12897dba sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12897dbd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12897dc0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12897dc3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12897dc6 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12897dca jl 0x12897dee */
  if ((C.sf!=C.of)) goto L_12897dee;
  /* 12897dcc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12897dcf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12897dd1 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12897dd4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12897dd6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12897ddc mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12897ddf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12897de2 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12897de4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12897de7 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12897dea mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12897dec jmp 0x12897dff */
  goto L_12897dff;
L_12897dee:;
  /* 12897dee mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12897df1 push eax */
  push32((uint32_t)(EAX));
  /* 12897df2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12897df4 call 0x128934a0 */
  push32(0x12897df9u); f_128934a0();
  /* 12897df9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12897dfc mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_12897dff:;
  /* 12897dff mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12897e02 pop edi */
  EDI = (pop32());
  /* 12897e03 pop esi */
  ESI = (pop32());
  /* 12897e04 pop ebx */
  EBX = (pop32());
  /* 12897e05 mov esp, ebp */
  ESP = (EBP);
  /* 12897e07 pop ebp */
  EBP = (pop32());
  /* 12897e08 ret  */
  ESPCHK(0x12897d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e10 @ 0x12897e10 (7 bytes, 3 insns) */
void f_12897e10(void) {
  FTRACE(0x12897e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12897e10 push edi */
  push32((uint32_t)(EDI));
  /* 12897e11 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 12897e15 jmp 0x12897e81 */
  jmp_ind(0x12897e81u); return;
}

/* FUN_10007e20 @ 0x12897e20 (224 bytes, 84 insns) */
void f_12897e20(void) {
  FTRACE(0x12897e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12897e20 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12897e24 push edi */
  push32((uint32_t)(EDI));
  /* 12897e25 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12897e2b je 0x12897e3c */
  if (C.zf) goto L_12897e3c;
L_12897e2d:;
  /* 12897e2d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 12897e2f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12897e30 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12897e32 je 0x12897e6f */
  if (C.zf) goto L_12897e6f;
  /* 12897e34 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12897e3a jne 0x12897e2d */
  if (!C.zf) goto L_12897e2d;
L_12897e3c:;
  /* 12897e3c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12897e3e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12897e43 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12897e45 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12897e48 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12897e4a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12897e4d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12897e52 je 0x12897e3c */
  if (C.zf) goto L_12897e3c;
  /* 12897e54 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12897e57 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12897e59 je 0x12897e7e */
  if (C.zf) goto L_12897e7e;
  /* 12897e5b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12897e5d je 0x12897e79 */
  if (C.zf) goto L_12897e79;
  /* 12897e5f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12897e64 je 0x12897e74 */
  if (C.zf) goto L_12897e74;
  /* 12897e66 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 12897e6b je 0x12897e6f */
  if (C.zf) goto L_12897e6f;
  /* 12897e6d jmp 0x12897e3c */
  goto L_12897e3c;
L_12897e6f:;
  /* 12897e6f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 12897e72 jmp 0x12897e81 */
  goto L_12897e81;
L_12897e74:;
  /* 12897e74 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 12897e77 jmp 0x12897e81 */
  goto L_12897e81;
L_12897e79:;
  /* 12897e79 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 12897e7c jmp 0x12897e81 */
  goto L_12897e81;
L_12897e7e:;
  /* 12897e7e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_12897e81:;
  /* 12897e81 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12897e85 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12897e8b je 0x12897ea6 */
  if (C.zf) goto L_12897ea6;
L_12897e8d:;
  /* 12897e8d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12897e8f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12897e90 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12897e92 je 0x12897ef8 */
  if (C.zf) goto L_12897ef8;
  /* 12897e94 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 12897e96 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12897e97 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12897e9d jne 0x12897e8d */
  if (!C.zf) goto L_12897e8d;
  /* 12897e9f jmp 0x12897ea6 */
  goto L_12897ea6;
L_12897ea1:;
  /* 12897ea1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12897ea3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12897ea6:;
  /* 12897ea6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12897eab mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12897ead add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12897eaf xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12897eb2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12897eb4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12897eb6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12897eb9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12897ebe je 0x12897ea1 */
  if (C.zf) goto L_12897ea1;
  /* 12897ec0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12897ec2 je 0x12897ef8 */
  if (C.zf) goto L_12897ef8;
  /* 12897ec4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12897ec6 je 0x12897eef */
  if (C.zf) goto L_12897eef;
  /* 12897ec8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 12897ece je 0x12897ee2 */
  if (C.zf) goto L_12897ee2;
  /* 12897ed0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12897ed6 je 0x12897eda */
  if (C.zf) goto L_12897eda;
  /* 12897ed8 jmp 0x12897ea1 */
  goto L_12897ea1;
L_12897eda:;
  /* 12897eda mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12897edc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12897ee0 pop edi */
  EDI = (pop32());
  /* 12897ee1 ret  */
  ESPCHK(0x12897e20u, _esp0);
  ESP += 4; return;
L_12897ee2:;
  /* 12897ee2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12897ee5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12897ee9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 12897eed pop edi */
  EDI = (pop32());
  /* 12897eee ret  */
  ESPCHK(0x12897e20u, _esp0);
  ESP += 4; return;
L_12897eef:;
  /* 12897eef mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12897ef2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12897ef6 pop edi */
  EDI = (pop32());
  /* 12897ef7 ret  */
  ESPCHK(0x12897e20u, _esp0);
  ESP += 4; return;
L_12897ef8:;
  /* 12897ef8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 12897efa mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12897efe pop edi */
  EDI = (pop32());
  /* 12897eff ret  */
  ESPCHK(0x12897e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f00 @ 0x12897f00 (243 bytes, 91 insns) */
void f_12897f00(void) {
  FTRACE(0x12897f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12897f00 push ebp */
  push32((uint32_t)(EBP));
  /* 12897f01 mov ebp, esp */
  EBP = (ESP);
  /* 12897f03 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12897f06 push ebx */
  push32((uint32_t)(EBX));
  /* 12897f07 push esi */
  push32((uint32_t)(ESI));
  /* 12897f08 push edi */
  push32((uint32_t)(EDI));
  /* 12897f09 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12897f0c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12897f0f:;
  /* 12897f0f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12897f13 jne 0x12897f33 */
  if (!C.zf) goto L_12897f33;
  /* 12897f15 push 0x128ba938 */
  push32((uint32_t)(0x128ba938u));
  /* 12897f1a push 0 */
  push32((uint32_t)(0x0u));
  /* 12897f1c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 12897f1e push 0x128bb698 */
  push32((uint32_t)(0x128bb698u));
  /* 12897f23 push 2 */
  push32((uint32_t)(0x2u));
  /* 12897f25 call 0x12892e00 */
  push32(0x12897f2au); f_12892e00();
  /* 12897f2a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12897f2d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12897f30 jne 0x12897f33 */
  if (!C.zf) goto L_12897f33;
  /* 12897f32 int3  */
  x86_unimpl("int3 @ 0x12897f32");
L_12897f33:;
  /* 12897f33 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12897f35 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12897f37 jne 0x12897f0f */
  if (!C.zf) goto L_12897f0f;
L_12897f39:;
  /* 12897f39 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12897f3d jne 0x12897f5d */
  if (!C.zf) goto L_12897f5d;
  /* 12897f3f push 0x128ba91c */
  push32((uint32_t)(0x128ba91cu));
  /* 12897f44 push 0 */
  push32((uint32_t)(0x0u));
  /* 12897f46 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 12897f48 push 0x128bb698 */
  push32((uint32_t)(0x128bb698u));
  /* 12897f4d push 2 */
  push32((uint32_t)(0x2u));
  /* 12897f4f call 0x12892e00 */
  push32(0x12897f54u); f_12892e00();
  /* 12897f54 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12897f57 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12897f5a jne 0x12897f5d */
  if (!C.zf) goto L_12897f5d;
  /* 12897f5c int3  */
  x86_unimpl("int3 @ 0x12897f5c");
L_12897f5d:;
  /* 12897f5d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12897f5f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12897f61 jne 0x12897f39 */
  if (!C.zf) goto L_12897f39;
  /* 12897f63 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12897f66 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 12897f6d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12897f70 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12897f73 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12897f76 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12897f79 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12897f7c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12897f7e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12897f81 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12897f84 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12897f87 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12897f8a push ecx */
  push32((uint32_t)(ECX));
  /* 12897f8b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12897f8e push edx */
  push32((uint32_t)(EDX));
  /* 12897f8f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12897f92 push eax */
  push32((uint32_t)(EAX));
  /* 12897f93 call 0x12893720 */
  push32(0x12897f98u); f_12893720();
  /* 12897f98 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12897f9b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12897f9e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12897fa1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12897fa4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12897fa7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12897faa mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12897fad mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12897fb0 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12897fb4 jl 0x12897fd8 */
  if ((C.sf!=C.of)) goto L_12897fd8;
  /* 12897fb6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12897fb9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12897fbb mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12897fbe xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12897fc0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12897fc6 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12897fc9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12897fcc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12897fce add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12897fd1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12897fd4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12897fd6 jmp 0x12897fe9 */
  goto L_12897fe9;
L_12897fd8:;
  /* 12897fd8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12897fdb push edx */
  push32((uint32_t)(EDX));
  /* 12897fdc push 0 */
  push32((uint32_t)(0x0u));
  /* 12897fde call 0x128934a0 */
  push32(0x12897fe3u); f_128934a0();
  /* 12897fe3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12897fe6 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_12897fe9:;
  /* 12897fe9 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12897fec pop edi */
  EDI = (pop32());
  /* 12897fed pop esi */
  ESI = (pop32());
  /* 12897fee pop ebx */
  EBX = (pop32());
  /* 12897fef mov esp, ebp */
  ESP = (EBP);
  /* 12897ff1 pop ebp */
  EBP = (pop32());
  /* 12897ff2 ret  */
  ESPCHK(0x12897f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10008000 @ 0x12898000 (47 bytes, 17 insns) */
void f_12898000(void) {
  FTRACE(0x12898000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12898000 push ecx */
  push32((uint32_t)(ECX));
  /* 12898001 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898006 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 1289800a jb 0x12898020 */
  if (C.cf) goto L_12898020;
L_1289800c:;
  /* 1289800c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12898012 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12898017 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12898019 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289801e jae 0x1289800c */
  if (!C.cf) goto L_1289800c;
L_12898020:;
  /* 12898020 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12898022 mov eax, esp */
  EAX = (ESP);
  /* 12898024 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12898026 mov esp, ecx */
  ESP = (ECX);
  /* 12898028 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1289802a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 1289802d push eax */
  push32((uint32_t)(EAX));
  /* 1289802e ret  */
  ESPCHK(0x12898000u, _esp0);
  ESP += 4; return;
}

/* FUN_10008030 @ 0x12898030 (507 bytes, 151 insns) [1 switch table(s)] */
void f_12898030(void) {
  FTRACE(0x12898030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12898030 push ebp */
  push32((uint32_t)(EBP));
  /* 12898031 mov ebp, esp */
  EBP = (ESP);
  /* 12898033 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12898036 push esi */
  push32((uint32_t)(ESI));
  /* 12898037 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289803b je 0x12898043 */
  if (C.zf) goto L_12898043;
  /* 1289803d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898041 jne 0x12898048 */
  if (!C.zf) goto L_12898048;
L_12898043:;
  /* 12898043 jmp 0x12898218 */
  goto L_12898218;
L_12898048:;
  /* 12898048 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289804c je 0x12898064 */
  if (C.zf) goto L_12898064;
  /* 1289804e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898052 je 0x12898064 */
  if (C.zf) goto L_12898064;
  /* 12898054 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898058 je 0x12898064 */
  if (C.zf) goto L_12898064;
  /* 1289805a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289805e jne 0x12898141 */
  if (!C.zf) goto L_12898141;
L_12898064:;
  /* 12898064 push 1 */
  push32((uint32_t)(0x1u));
  /* 12898066 call 0x12899210 */
  push32(0x1289806bu); f_12899210();
  /* 1289806b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289806e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898072 je 0x1289807a */
  if (C.zf) goto L_1289807a;
  /* 12898074 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898078 jne 0x128980bf */
  if (!C.zf) goto L_128980bf;
L_1289807a:;
  /* 1289807a cmp dword ptr [0x128bf814], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf814))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898081 jne 0x128980bf */
  if (!C.zf) goto L_128980bf;
  /* 12898083 push 1 */
  push32((uint32_t)(0x1u));
  /* 12898085 push 0x12898260 */
  push32((uint32_t)(0x12898260u));
  /* 1289808a call dword ptr [0x128c2298] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2298))), 0x12898090u);
  /* 12898090 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898093 jne 0x128980a1 */
  if (!C.zf) goto L_128980a1;
  /* 12898095 mov dword ptr [0x128bf814], 1 */
  w32((uint32_t)(0x128bf814), (0x1u));
  /* 1289809f jmp 0x128980bf */
  goto L_128980bf;
L_128980a1:;
  /* 128980a1 call dword ptr [0x128c2250] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2250))), 0x128980a7u);
  /* 128980a7 mov esi, eax */
  ESI = (EAX);
  /* 128980a9 call 0x1289c3e0 */
  push32(0x128980aeu); f_1289c3e0();
  /* 128980ae mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 128980b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 128980b2 call 0x128992b0 */
  push32(0x128980b7u); f_128992b0();
  /* 128980b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128980ba jmp 0x12898218 */
  goto L_12898218;
L_128980bf:;
  /* 128980bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128980c2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 128980c5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 128980c8 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128980cb mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 128980ce cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128980d2 ja 0x12898132 */
  if ((!C.cf&&!C.zf)) goto L_12898132;
  /* 128980d4 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 128980d7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128980d9 mov dl, byte ptr [eax + 0x1289823f] */
  DL = (r8((uint32_t)(EAX + 0x1289823f)));
  /* 128980df jmp dword ptr [edx*4 + 0x1289822b] */
  switch (EDX) {
    case 0: goto L_128980e6;
    case 1: goto L_12898120;
    case 2: goto L_128980fa;
    case 3: goto L_1289810d;
    case 4: goto L_12898132;
    default: x86_unimpl("switch@0x128980df out of table"); return;
  }
L_128980e6:;
  /* 128980e6 mov ecx, dword ptr [0x128bf804] */
  ECX = (r32((uint32_t)(0x128bf804)));
  /* 128980ec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 128980ef mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 128980f2 mov dword ptr [0x128bf804], edx */
  w32((uint32_t)(0x128bf804), (EDX));
  /* 128980f8 jmp 0x12898132 */
  goto L_12898132;
L_128980fa:;
  /* 128980fa mov eax, dword ptr [0x128bf808] */
  EAX = (r32((uint32_t)(0x128bf808)));
  /* 128980ff mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12898102 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12898105 mov dword ptr [0x128bf808], ecx */
  w32((uint32_t)(0x128bf808), (ECX));
  /* 1289810b jmp 0x12898132 */
  goto L_12898132;
L_1289810d:;
  /* 1289810d mov edx, dword ptr [0x128bf80c] */
  EDX = (r32((uint32_t)(0x128bf80c)));
  /* 12898113 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12898116 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12898119 mov dword ptr [0x128bf80c], eax */
  w32((uint32_t)(0x128bf80c), (EAX));
  /* 1289811e jmp 0x12898132 */
  goto L_12898132;
L_12898120:;
  /* 12898120 mov ecx, dword ptr [0x128bf810] */
  ECX = (r32((uint32_t)(0x128bf810)));
  /* 12898126 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12898129 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289812c mov dword ptr [0x128bf810], edx */
  w32((uint32_t)(0x128bf810), (EDX));
L_12898132:;
  /* 12898132 push 1 */
  push32((uint32_t)(0x1u));
  /* 12898134 call 0x128992b0 */
  push32(0x12898139u); f_128992b0();
  /* 12898139 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289813c jmp 0x12898213 */
  goto L_12898213;
L_12898141:;
  /* 12898141 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898145 je 0x12898158 */
  if (C.zf) goto L_12898158;
  /* 12898147 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289814b je 0x12898158 */
  if (C.zf) goto L_12898158;
  /* 1289814d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898151 je 0x12898158 */
  if (C.zf) goto L_12898158;
  /* 12898153 jmp 0x12898218 */
  goto L_12898218;
L_12898158:;
  /* 12898158 call 0x128948a0 */
  push32(0x1289815du); f_128948a0();
  /* 1289815d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12898160 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12898163 cmp dword ptr [eax + 0x50], 0x128be0c0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x128be0c0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289816a jne 0x128981b5 */
  if (!C.zf) goto L_128981b5;
  /* 1289816c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 12898171 push 0x128bb6a4 */
  push32((uint32_t)(0x128bb6a4u));
  /* 12898176 push 2 */
  push32((uint32_t)(0x2u));
  /* 12898178 mov ecx, dword ptr [0x128be140] */
  ECX = (r32((uint32_t)(0x128be140)));
  /* 1289817e push ecx */
  push32((uint32_t)(ECX));
  /* 1289817f call 0x12894e60 */
  push32(0x12898184u); f_12894e60();
  /* 12898184 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12898187 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289818a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 1289818d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12898190 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898194 je 0x128981b3 */
  if (C.zf) goto L_128981b3;
  /* 12898196 mov ecx, dword ptr [0x128be140] */
  ECX = (r32((uint32_t)(0x128be140)));
  /* 1289819c push ecx */
  push32((uint32_t)(ECX));
  /* 1289819d push 0x128be0c0 */
  push32((uint32_t)(0x128be0c0u));
  /* 128981a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128981a5 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 128981a8 push eax */
  push32((uint32_t)(EAX));
  /* 128981a9 call 0x1289bff0 */
  push32(0x128981aeu); f_1289bff0();
  /* 128981ae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128981b1 jmp 0x128981b5 */
  goto L_128981b5;
L_128981b3:;
  /* 128981b3 jmp 0x12898218 */
  goto L_12898218;
L_128981b5:;
  /* 128981b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128981b8 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 128981bb push edx */
  push32((uint32_t)(EDX));
  /* 128981bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128981bf push eax */
  push32((uint32_t)(EAX));
  /* 128981c0 call 0x12898540 */
  push32(0x128981c5u); f_12898540();
  /* 128981c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128981c8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 128981cb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128981cf jne 0x128981d3 */
  if (!C.zf) goto L_128981d3;
  /* 128981d1 jmp 0x12898218 */
  goto L_12898218;
L_128981d3:;
  /* 128981d3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 128981d6 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 128981d9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_128981dc:;
  /* 128981dc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128981df mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 128981e2 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128981e5 jne 0x12898213 */
  if (!C.zf) goto L_12898213;
  /* 128981e7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 128981ea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 128981ed mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 128981f0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 128981f3 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128981f6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 128981f9 mov edx, dword ptr [0x128be144] */
  EDX = (r32((uint32_t)(0x128be144)));
  /* 128981ff imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12898202 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12898205 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 12898208 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289820a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289820d jb 0x12898211 */
  if (C.cf) goto L_12898211;
  /* 1289820f jmp 0x12898213 */
  goto L_12898213;
L_12898211:;
  /* 12898211 jmp 0x128981dc */
  goto L_128981dc;
L_12898213:;
  /* 12898213 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12898216 jmp 0x12898226 */
  goto L_12898226;
L_12898218:;
  /* 12898218 call 0x1289c3d0 */
  push32(0x1289821du); f_1289c3d0();
  /* 1289821d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 12898223 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12898226:;
  /* 12898226 pop esi */
  ESI = (pop32());
  /* 12898227 mov esp, ebp */
  ESP = (EBP);
  /* 12898229 pop ebp */
  EBP = (pop32());
  /* 1289822a ret  */
  ESPCHK(0x12898030u, _esp0);
  ESP += 4; return;
}

/* FUN_10008260 @ 0x12898260 (146 bytes, 45 insns) */
void f_12898260(void) {
  FTRACE(0x12898260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12898260 push ebp */
  push32((uint32_t)(EBP));
  /* 12898261 mov ebp, esp */
  EBP = (ESP);
  /* 12898263 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12898266 push 1 */
  push32((uint32_t)(0x1u));
  /* 12898268 call 0x12899210 */
  push32(0x1289826du); f_12899210();
  /* 1289826d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12898270 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898274 jne 0x1289828e */
  if (!C.zf) goto L_1289828e;
  /* 12898276 mov dword ptr [ebp - 8], 0x128bf804 */
  w32((uint32_t)(EBP + -0x8), (0x128bf804u));
  /* 1289827d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12898280 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12898282 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12898285 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1289828c jmp 0x128982a4 */
  goto L_128982a4;
L_1289828e:;
  /* 1289828e mov dword ptr [ebp - 8], 0x128bf808 */
  w32((uint32_t)(EBP + -0x8), (0x128bf808u));
  /* 12898295 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12898298 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1289829a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1289829d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_128982a4:;
  /* 128982a4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128982a8 jne 0x128982b8 */
  if (!C.zf) goto L_128982b8;
  /* 128982aa push 1 */
  push32((uint32_t)(0x1u));
  /* 128982ac call 0x128992b0 */
  push32(0x128982b1u); f_128992b0();
  /* 128982b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128982b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128982b6 jmp 0x128982ec */
  goto L_128982ec;
L_128982b8:;
  /* 128982b8 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128982bc je 0x128982dd */
  if (C.zf) goto L_128982dd;
  /* 128982be mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 128982c1 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 128982c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 128982c9 call 0x128992b0 */
  push32(0x128982ceu); f_128992b0();
  /* 128982ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128982d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128982d4 push edx */
  push32((uint32_t)(EDX));
  /* 128982d5 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x128982d8u);
  /* 128982d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128982db jmp 0x128982e7 */
  goto L_128982e7;
L_128982dd:;
  /* 128982dd push 1 */
  push32((uint32_t)(0x1u));
  /* 128982df call 0x128992b0 */
  push32(0x128982e4u); f_128992b0();
  /* 128982e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_128982e7:;
  /* 128982e7 mov eax, 1 */
  EAX = (0x1u);
L_128982ec:;
  /* 128982ec mov esp, ebp */
  ESP = (EBP);
  /* 128982ee pop ebp */
  EBP = (pop32());
  /* 128982ef ret 4 */
  ESPCHK(0x12898260u, _esp0);
  ESP += 8; return;
}

/* FUN_10008300 @ 0x12898300 (522 bytes, 162 insns) [1 switch table(s)] */
void f_12898300(void) {
  FTRACE(0x12898300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12898300 push ebp */
  push32((uint32_t)(EBP));
  /* 12898301 mov ebp, esp */
  EBP = (ESP);
  /* 12898303 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12898306 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1289830d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12898310 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12898313 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12898316 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12898319 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1289831c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898320 ja 0x128983ce */
  if ((!C.cf&&!C.zf)) goto L_128983ce;
  /* 12898326 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12898329 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1289832b mov dl, byte ptr [eax + 0x12898522] */
  DL = (r8((uint32_t)(EAX + 0x12898522)));
  /* 12898331 jmp dword ptr [edx*4 + 0x1289850a] */
  switch (EDX) {
    case 0: goto L_12898338;
    case 1: goto L_128983a3;
    case 2: goto L_12898389;
    case 3: goto L_12898355;
    case 4: goto L_1289836f;
    case 5: goto L_128983ce;
    default: x86_unimpl("switch@0x12898331 out of table"); return;
  }
L_12898338:;
  /* 12898338 mov dword ptr [ebp - 0x18], 0x128bf804 */
  w32((uint32_t)(EBP + -0x18), (0x128bf804u));
  /* 1289833f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12898342 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12898344 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12898347 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289834a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289834d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12898350 jmp 0x128983d6 */
  goto L_128983d6;
L_12898355:;
  /* 12898355 mov dword ptr [ebp - 0x18], 0x128bf808 */
  w32((uint32_t)(EBP + -0x18), (0x128bf808u));
  /* 1289835c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289835f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12898361 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12898364 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12898367 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289836a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1289836d jmp 0x128983d6 */
  goto L_128983d6;
L_1289836f:;
  /* 1289836f mov dword ptr [ebp - 0x18], 0x128bf80c */
  w32((uint32_t)(EBP + -0x18), (0x128bf80cu));
  /* 12898376 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12898379 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1289837b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1289837e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12898381 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12898384 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12898387 jmp 0x128983d6 */
  goto L_128983d6;
L_12898389:;
  /* 12898389 mov dword ptr [ebp - 0x18], 0x128bf810 */
  w32((uint32_t)(EBP + -0x18), (0x128bf810u));
  /* 12898390 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12898393 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12898395 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12898398 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289839b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289839e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 128983a1 jmp 0x128983d6 */
  goto L_128983d6;
L_128983a3:;
  /* 128983a3 call 0x128948a0 */
  push32(0x128983a8u); f_128948a0();
  /* 128983a8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 128983ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128983ae mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 128983b1 push edx */
  push32((uint32_t)(EDX));
  /* 128983b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128983b5 push eax */
  push32((uint32_t)(EAX));
  /* 128983b6 call 0x12898540 */
  push32(0x128983bbu); f_12898540();
  /* 128983bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128983be add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128983c1 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 128983c4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 128983c7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 128983c9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 128983cc jmp 0x128983d6 */
  goto L_128983d6;
L_128983ce:;
  /* 128983ce or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 128983d1 jmp 0x12898506 */
  goto L_12898506;
L_128983d6:;
  /* 128983d6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128983da je 0x128983e6 */
  if (C.zf) goto L_128983e6;
  /* 128983dc push 1 */
  push32((uint32_t)(0x1u));
  /* 128983de call 0x12899210 */
  push32(0x128983e3u); f_12899210();
  /* 128983e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_128983e6:;
  /* 128983e6 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128983ea jne 0x12898403 */
  if (!C.zf) goto L_12898403;
  /* 128983ec cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128983f0 je 0x128983fc */
  if (C.zf) goto L_128983fc;
  /* 128983f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 128983f4 call 0x128992b0 */
  push32(0x128983f9u); f_128992b0();
  /* 128983f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_128983fc:;
  /* 128983fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128983fe jmp 0x12898506 */
  goto L_12898506;
L_12898403:;
  /* 12898403 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898407 jne 0x12898420 */
  if (!C.zf) goto L_12898420;
  /* 12898409 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289840d je 0x12898419 */
  if (C.zf) goto L_12898419;
  /* 1289840f push 1 */
  push32((uint32_t)(0x1u));
  /* 12898411 call 0x128992b0 */
  push32(0x12898416u); f_128992b0();
  /* 12898416 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12898419:;
  /* 12898419 push 3 */
  push32((uint32_t)(0x3u));
  /* 1289841b call 0x12894620 */
  push32(0x12898420u); f_12894620();
L_12898420:;
  /* 12898420 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898424 je 0x12898432 */
  if (C.zf) goto L_12898432;
  /* 12898426 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289842a je 0x12898432 */
  if (C.zf) goto L_12898432;
  /* 1289842c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898430 jne 0x1289845e */
  if (!C.zf) goto L_1289845e;
L_12898432:;
  /* 12898432 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12898435 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 12898438 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1289843b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289843e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 12898445 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898449 jne 0x1289845e */
  if (!C.zf) goto L_1289845e;
  /* 1289844b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289844e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 12898451 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12898454 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12898457 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_1289845e:;
  /* 1289845e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898462 jne 0x128984a0 */
  if (!C.zf) goto L_128984a0;
  /* 12898464 mov eax, dword ptr [0x128be138] */
  EAX = (r32((uint32_t)(0x128be138)));
  /* 12898469 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1289846c jmp 0x12898477 */
  goto L_12898477;
L_1289846e:;
  /* 1289846e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12898471 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12898474 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12898477:;
  /* 12898477 mov edx, dword ptr [0x128be138] */
  EDX = (r32((uint32_t)(0x128be138)));
  /* 1289847d add edx, dword ptr [0x128be13c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x128be13c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12898483 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898486 jge 0x1289849e */
  if ((C.sf==C.of)) goto L_1289849e;
  /* 12898488 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289848b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1289848e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12898491 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12898494 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 1289849c jmp 0x1289846e */
  goto L_1289846e;
L_1289849e:;
  /* 1289849e jmp 0x128984a9 */
  goto L_128984a9;
L_128984a0:;
  /* 128984a0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 128984a3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_128984a9:;
  /* 128984a9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128984ad je 0x128984b9 */
  if (C.zf) goto L_128984b9;
  /* 128984af push 1 */
  push32((uint32_t)(0x1u));
  /* 128984b1 call 0x128992b0 */
  push32(0x128984b6u); f_128992b0();
  /* 128984b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_128984b9:;
  /* 128984b9 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128984bd jne 0x128984d0 */
  if (!C.zf) goto L_128984d0;
  /* 128984bf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128984c2 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 128984c5 push edx */
  push32((uint32_t)(EDX));
  /* 128984c6 push 8 */
  push32((uint32_t)(0x8u));
  /* 128984c8 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x128984cbu);
  /* 128984cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128984ce jmp 0x128984da */
  goto L_128984da;
L_128984d0:;
  /* 128984d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128984d3 push eax */
  push32((uint32_t)(EAX));
  /* 128984d4 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x128984d7u);
  /* 128984d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_128984da:;
  /* 128984da cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128984de je 0x128984ec */
  if (C.zf) goto L_128984ec;
  /* 128984e0 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128984e4 je 0x128984ec */
  if (C.zf) goto L_128984ec;
  /* 128984e6 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128984ea jne 0x12898504 */
  if (!C.zf) goto L_12898504;
L_128984ec:;
  /* 128984ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128984ef mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 128984f2 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 128984f5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128984f9 jne 0x12898504 */
  if (!C.zf) goto L_12898504;
  /* 128984fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128984fe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12898501 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_12898504:;
  /* 12898504 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12898506:;
  /* 12898506 mov esp, ebp */
  ESP = (EBP);
  /* 12898508 pop ebp */
  EBP = (pop32());
  /* 12898509 ret  */
  ESPCHK(0x12898300u, _esp0);
  ESP += 4; return;
}

/* FUN_10008540 @ 0x12898540 (91 bytes, 35 insns) */
void f_12898540(void) {
  FTRACE(0x12898540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12898540 push ebp */
  push32((uint32_t)(EBP));
  /* 12898541 mov ebp, esp */
  EBP = (ESP);
  /* 12898543 push ecx */
  push32((uint32_t)(ECX));
  /* 12898544 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12898547 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1289854a:;
  /* 1289854a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289854d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12898550 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898553 je 0x12898573 */
  if (C.zf) goto L_12898573;
  /* 12898555 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12898558 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289855b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1289855e mov ecx, dword ptr [0x128be144] */
  ECX = (r32((uint32_t)(0x128be144)));
  /* 12898564 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12898567 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289856a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289856c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289856f jae 0x12898573 */
  if (!C.cf) goto L_12898573;
  /* 12898571 jmp 0x1289854a */
  goto L_1289854a;
L_12898573:;
  /* 12898573 mov eax, dword ptr [0x128be144] */
  EAX = (r32((uint32_t)(0x128be144)));
  /* 12898578 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1289857b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289857e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12898580 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898583 jae 0x12898595 */
  if (!C.cf) goto L_12898595;
  /* 12898585 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12898588 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1289858b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289858e jne 0x12898595 */
  if (!C.zf) goto L_12898595;
  /* 12898590 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12898593 jmp 0x12898597 */
  goto L_12898597;
L_12898595:;
  /* 12898595 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12898597:;
  /* 12898597 mov esp, ebp */
  ESP = (EBP);
  /* 12898599 pop ebp */
  EBP = (pop32());
  /* 1289859a ret  */
  ESPCHK(0x12898540u, _esp0);
  ESP += 4; return;
}

/* FUN_100085a0 @ 0x128985a0 (13 bytes, 6 insns) */
void f_128985a0(void) {
  FTRACE(0x128985a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128985a0 push ebp */
  push32((uint32_t)(EBP));
  /* 128985a1 mov ebp, esp */
  EBP = (ESP);
  /* 128985a3 call 0x128948a0 */
  push32(0x128985a8u); f_128948a0();
  /* 128985a8 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128985ab pop ebp */
  EBP = (pop32());
  /* 128985ac ret  */
  ESPCHK(0x128985a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100085b0 @ 0x128985b0 (13 bytes, 6 insns) */
void f_128985b0(void) {
  FTRACE(0x128985b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128985b0 push ebp */
  push32((uint32_t)(EBP));
  /* 128985b1 mov ebp, esp */
  EBP = (ESP);
  /* 128985b3 call 0x128948a0 */
  push32(0x128985b8u); f_128948a0();
  /* 128985b8 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128985bb pop ebp */
  EBP = (pop32());
  /* 128985bc ret  */
  ESPCHK(0x128985b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100085c0 @ 0x128985c0 (187 bytes, 54 insns) */
void f_128985c0(void) {
  FTRACE(0x128985c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128985c0 push ebp */
  push32((uint32_t)(EBP));
  /* 128985c1 mov ebp, esp */
  EBP = (ESP);
  /* 128985c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 128985c6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 128985cd cmp dword ptr [0x128bf818], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf818))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128985d4 jne 0x12898633 */
  if (!C.zf) goto L_12898633;
  /* 128985d6 push 0x128baa14 */
  push32((uint32_t)(0x128baa14u));
  /* 128985db call dword ptr [0x128c2220] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2220))), 0x128985e1u);
  /* 128985e1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 128985e4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128985e8 je 0x12898607 */
  if (C.zf) goto L_12898607;
  /* 128985ea push 0x128bb6d4 */
  push32((uint32_t)(0x128bb6d4u));
  /* 128985ef mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128985f2 push eax */
  push32((uint32_t)(EAX));
  /* 128985f3 call dword ptr [0x128c2288] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2288))), 0x128985f9u);
  /* 128985f9 mov dword ptr [0x128bf818], eax */
  w32((uint32_t)(0x128bf818), (EAX));
  /* 128985fe cmp dword ptr [0x128bf818], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf818))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898605 jne 0x1289860b */
  if (!C.zf) goto L_1289860b;
L_12898607:;
  /* 12898607 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12898609 jmp 0x12898677 */
  goto L_12898677;
L_1289860b:;
  /* 1289860b push 0x128bb6c4 */
  push32((uint32_t)(0x128bb6c4u));
  /* 12898610 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12898613 push ecx */
  push32((uint32_t)(ECX));
  /* 12898614 call dword ptr [0x128c2288] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2288))), 0x1289861au);
  /* 1289861a mov dword ptr [0x128bf81c], eax */
  w32((uint32_t)(0x128bf81c), (EAX));
  /* 1289861f push 0x128bb6b0 */
  push32((uint32_t)(0x128bb6b0u));
  /* 12898624 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12898627 push edx */
  push32((uint32_t)(EDX));
  /* 12898628 call dword ptr [0x128c2288] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2288))), 0x1289862eu);
  /* 1289862e mov dword ptr [0x128bf820], eax */
  w32((uint32_t)(0x128bf820), (EAX));
L_12898633:;
  /* 12898633 cmp dword ptr [0x128bf81c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf81c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289863a je 0x12898645 */
  if (C.zf) goto L_12898645;
  /* 1289863c call dword ptr [0x128bf81c] */
  call_ind((uint32_t)(r32((uint32_t)(0x128bf81c))), 0x12898642u);
  /* 12898642 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12898645:;
  /* 12898645 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898649 je 0x12898661 */
  if (C.zf) goto L_12898661;
  /* 1289864b cmp dword ptr [0x128bf820], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf820))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898652 je 0x12898661 */
  if (C.zf) goto L_12898661;
  /* 12898654 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12898657 push eax */
  push32((uint32_t)(EAX));
  /* 12898658 call dword ptr [0x128bf820] */
  call_ind((uint32_t)(r32((uint32_t)(0x128bf820))), 0x1289865eu);
  /* 1289865e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12898661:;
  /* 12898661 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12898664 push ecx */
  push32((uint32_t)(ECX));
  /* 12898665 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12898668 push edx */
  push32((uint32_t)(EDX));
  /* 12898669 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289866c push eax */
  push32((uint32_t)(EAX));
  /* 1289866d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12898670 push ecx */
  push32((uint32_t)(ECX));
  /* 12898671 call dword ptr [0x128bf818] */
  call_ind((uint32_t)(r32((uint32_t)(0x128bf818))), 0x12898677u);
L_12898677:;
  /* 12898677 mov esp, ebp */
  ESP = (EBP);
  /* 12898679 pop ebp */
  EBP = (pop32());
  /* 1289867a ret  */
  ESPCHK(0x128985c0u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x12898680 (254 bytes, 109 insns) */
void f_12898680(void) {
  FTRACE(0x12898680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12898680 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12898684 push edi */
  push32((uint32_t)(EDI));
  /* 12898685 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12898687 je 0x12898703 */
  if (C.zf) goto L_12898703;
  /* 12898689 push esi */
  push32((uint32_t)(ESI));
  /* 1289868a push ebx */
  push32((uint32_t)(EBX));
  /* 1289868b mov ebx, ecx */
  EBX = (ECX);
  /* 1289868d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 12898691 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12898697 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1289869b jne 0x128986a4 */
  if (!C.zf) goto L_128986a4;
  /* 1289869d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 128986a0 jne 0x12898711 */
  if (!C.zf) goto L_12898711;
  /* 128986a2 jmp 0x128986c5 */
  goto L_128986c5;
L_128986a4:;
  /* 128986a4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 128986a6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 128986a7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 128986a9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 128986aa dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 128986ab je 0x128986d2 */
  if (C.zf) goto L_128986d2;
  /* 128986ad test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 128986af je 0x128986da */
  if (C.zf) goto L_128986da;
  /* 128986b1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 128986b7 jne 0x128986a4 */
  if (!C.zf) goto L_128986a4;
  /* 128986b9 mov ebx, ecx */
  EBX = (ECX);
  /* 128986bb shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 128986be jne 0x12898711 */
  if (!C.zf) goto L_12898711;
L_128986c0:;
  /* 128986c0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 128986c3 je 0x128986d2 */
  if (C.zf) goto L_128986d2;
L_128986c5:;
  /* 128986c5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 128986c7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 128986c8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 128986ca inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 128986cb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 128986cd je 0x128986fe */
  if (C.zf) goto L_128986fe;
  /* 128986cf dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 128986d0 jne 0x128986c5 */
  if (!C.zf) goto L_128986c5;
L_128986d2:;
  /* 128986d2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 128986d6 pop ebx */
  EBX = (pop32());
  /* 128986d7 pop esi */
  ESI = (pop32());
  /* 128986d8 pop edi */
  EDI = (pop32());
  /* 128986d9 ret  */
  ESPCHK(0x12898680u, _esp0);
  ESP += 4; return;
L_128986da:;
  /* 128986da test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 128986e0 je 0x128986f4 */
  if (C.zf) goto L_128986f4;
L_128986e2:;
  /* 128986e2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 128986e4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 128986e5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 128986e6 je 0x12898776 */
  if (C.zf) goto L_12898776;
  /* 128986ec test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 128986f2 jne 0x128986e2 */
  if (!C.zf) goto L_128986e2;
L_128986f4:;
  /* 128986f4 mov ebx, ecx */
  EBX = (ECX);
  /* 128986f6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 128986f9 jne 0x12898767 */
  if (!C.zf) goto L_12898767;
L_128986fb:;
  /* 128986fb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 128986fd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_128986fe:;
  /* 128986fe dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 128986ff jne 0x128986fb */
  if (!C.zf) goto L_128986fb;
  /* 12898701 pop ebx */
  EBX = (pop32());
  /* 12898702 pop esi */
  ESI = (pop32());
L_12898703:;
  /* 12898703 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12898707 pop edi */
  EDI = (pop32());
  /* 12898708 ret  */
  ESPCHK(0x12898680u, _esp0);
  ESP += 4; return;
L_12898709:;
  /* 12898709 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1289870b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1289870e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1289870f je 0x128986c0 */
  if (C.zf) goto L_128986c0;
L_12898711:;
  /* 12898711 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12898716 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 12898718 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289871a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1289871d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1289871f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 12898721 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12898724 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12898729 je 0x12898709 */
  if (C.zf) goto L_12898709;
  /* 1289872b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1289872d je 0x1289875b */
  if (C.zf) goto L_1289875b;
  /* 1289872f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12898731 je 0x12898751 */
  if (C.zf) goto L_12898751;
  /* 12898733 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 12898739 je 0x12898747 */
  if (C.zf) goto L_12898747;
  /* 1289873b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12898741 jne 0x12898709 */
  if (!C.zf) goto L_12898709;
  /* 12898743 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12898745 jmp 0x1289875f */
  goto L_1289875f;
L_12898747:;
  /* 12898747 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1289874d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1289874f jmp 0x1289875f */
  goto L_1289875f;
L_12898751:;
  /* 12898751 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12898757 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12898759 jmp 0x1289875f */
  goto L_1289875f;
L_1289875b:;
  /* 1289875b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1289875d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_1289875f:;
  /* 1289875f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12898762 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12898764 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12898765 je 0x12898771 */
  if (C.zf) goto L_12898771;
L_12898767:;
  /* 12898767 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12898769:;
  /* 12898769 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1289876b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1289876e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1289876f jne 0x12898769 */
  if (!C.zf) goto L_12898769;
L_12898771:;
  /* 12898771 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 12898774 jne 0x128986fb */
  if (!C.zf) goto L_128986fb;
L_12898776:;
  /* 12898776 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1289877a pop ebx */
  EBX = (pop32());
  /* 1289877b pop esi */
  ESI = (pop32());
  /* 1289877c pop edi */
  EDI = (pop32());
  /* 1289877d ret  */
  ESPCHK(0x12898680u, _esp0);
  ESP += 4; return;
}

/* FUN_10008780 @ 0x12898780 (130 bytes, 43 insns) */
void f_12898780(void) {
  FTRACE(0x12898780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12898780 push ebp */
  push32((uint32_t)(EBP));
  /* 12898781 mov ebp, esp */
  EBP = (ESP);
  /* 12898783 push ecx */
  push32((uint32_t)(ECX));
  /* 12898784 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12898787 cmp eax, dword ptr [0x128c119c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x128c119c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289878d jae 0x128987b1 */
  if (!C.cf) goto L_128987b1;
  /* 1289878f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12898792 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12898795 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12898798 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1289879b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1289879e mov eax, dword ptr [ecx*4 + 0x128c1060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x128c1060)));
  /* 128987a5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 128987aa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 128987ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 128987af jne 0x128987cc */
  if (!C.zf) goto L_128987cc;
L_128987b1:;
  /* 128987b1 call 0x1289c3d0 */
  push32(0x128987b6u); f_1289c3d0();
  /* 128987b6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 128987bc call 0x1289c3e0 */
  push32(0x128987c1u); f_1289c3e0();
  /* 128987c1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 128987c7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 128987ca jmp 0x128987fe */
  goto L_128987fe;
L_128987cc:;
  /* 128987cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128987cf push edx */
  push32((uint32_t)(EDX));
  /* 128987d0 call 0x1289c900 */
  push32(0x128987d5u); f_1289c900();
  /* 128987d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128987d8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128987db push eax */
  push32((uint32_t)(EAX));
  /* 128987dc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 128987df push ecx */
  push32((uint32_t)(ECX));
  /* 128987e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128987e3 push edx */
  push32((uint32_t)(EDX));
  /* 128987e4 call 0x12898810 */
  push32(0x128987e9u); f_12898810();
  /* 128987e9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128987ec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 128987ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128987f2 push eax */
  push32((uint32_t)(EAX));
  /* 128987f3 call 0x1289c990 */
  push32(0x128987f8u); f_1289c990();
  /* 128987f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128987fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_128987fe:;
  /* 128987fe mov esp, ebp */
  ESP = (EBP);
  /* 12898800 pop ebp */
  EBP = (pop32());
  /* 12898801 ret  */
  ESPCHK(0x12898780u, _esp0);
  ESP += 4; return;
}

/* FUN_10008810 @ 0x12898810 (178 bytes, 56 insns) */
void f_12898810(void) {
  FTRACE(0x12898810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12898810 push ebp */
  push32((uint32_t)(EBP));
  /* 12898811 mov ebp, esp */
  EBP = (ESP);
  /* 12898813 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12898816 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12898819 push eax */
  push32((uint32_t)(EAX));
  /* 1289881a call 0x1289c780 */
  push32(0x1289881fu); f_1289c780();
  /* 1289881f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12898822 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12898825 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898829 jne 0x1289883e */
  if (!C.zf) goto L_1289883e;
  /* 1289882b call 0x1289c3d0 */
  push32(0x12898830u); f_1289c3d0();
  /* 12898830 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12898836 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12898839 jmp 0x128988be */
  goto L_128988be;
L_1289883e:;
  /* 1289883e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12898841 push ecx */
  push32((uint32_t)(ECX));
  /* 12898842 push 0 */
  push32((uint32_t)(0x0u));
  /* 12898844 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12898847 push edx */
  push32((uint32_t)(EDX));
  /* 12898848 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289884b push eax */
  push32((uint32_t)(EAX));
  /* 1289884c call dword ptr [0x128c229c] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c229c))), 0x12898852u);
  /* 12898852 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12898855 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898859 jne 0x12898866 */
  if (!C.zf) goto L_12898866;
  /* 1289885b call dword ptr [0x128c2250] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2250))), 0x12898861u);
  /* 12898861 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12898864 jmp 0x1289886d */
  goto L_1289886d;
L_12898866:;
  /* 12898866 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1289886d:;
  /* 1289886d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898871 je 0x12898884 */
  if (C.zf) goto L_12898884;
  /* 12898873 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12898876 push ecx */
  push32((uint32_t)(ECX));
  /* 12898877 call 0x1289c330 */
  push32(0x1289887cu); f_1289c330();
  /* 1289887c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289887f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12898882 jmp 0x128988be */
  goto L_128988be;
L_12898884:;
  /* 12898884 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12898887 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1289888a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289888d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12898890 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12898893 mov ecx, dword ptr [edx*4 + 0x128c1060] */
  ECX = (r32((uint32_t)(EDX*4 + 0x128c1060)));
  /* 1289889a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 1289889e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 128988a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128988a4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 128988a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128988aa and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 128988ad imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 128988b0 mov eax, dword ptr [eax*4 + 0x128c1060] */
  EAX = (r32((uint32_t)(EAX*4 + 0x128c1060)));
  /* 128988b7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 128988bb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_128988be:;
  /* 128988be mov esp, ebp */
  ESP = (EBP);
  /* 128988c0 pop ebp */
  EBP = (pop32());
  /* 128988c1 ret  */
  ESPCHK(0x12898810u, _esp0);
  ESP += 4; return;
}

/* FUN_100088d0 @ 0x128988d0 (130 bytes, 43 insns) */
void f_128988d0(void) {
  FTRACE(0x128988d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128988d0 push ebp */
  push32((uint32_t)(EBP));
  /* 128988d1 mov ebp, esp */
  EBP = (ESP);
  /* 128988d3 push ecx */
  push32((uint32_t)(ECX));
  /* 128988d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128988d7 cmp eax, dword ptr [0x128c119c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x128c119c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128988dd jae 0x12898901 */
  if (!C.cf) goto L_12898901;
  /* 128988df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128988e2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 128988e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128988e8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 128988eb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 128988ee mov eax, dword ptr [ecx*4 + 0x128c1060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x128c1060)));
  /* 128988f5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 128988fa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 128988fd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 128988ff jne 0x1289891c */
  if (!C.zf) goto L_1289891c;
L_12898901:;
  /* 12898901 call 0x1289c3d0 */
  push32(0x12898906u); f_1289c3d0();
  /* 12898906 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1289890c call 0x1289c3e0 */
  push32(0x12898911u); f_1289c3e0();
  /* 12898911 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12898917 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1289891a jmp 0x1289894e */
  goto L_1289894e;
L_1289891c:;
  /* 1289891c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289891f push edx */
  push32((uint32_t)(EDX));
  /* 12898920 call 0x1289c900 */
  push32(0x12898925u); f_1289c900();
  /* 12898925 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12898928 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1289892b push eax */
  push32((uint32_t)(EAX));
  /* 1289892c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289892f push ecx */
  push32((uint32_t)(ECX));
  /* 12898930 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12898933 push edx */
  push32((uint32_t)(EDX));
  /* 12898934 call 0x12898960 */
  push32(0x12898939u); f_12898960();
  /* 12898939 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289893c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1289893f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12898942 push eax */
  push32((uint32_t)(EAX));
  /* 12898943 call 0x1289c990 */
  push32(0x12898948u); f_1289c990();
  /* 12898948 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289894b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1289894e:;
  /* 1289894e mov esp, ebp */
  ESP = (EBP);
  /* 12898950 pop ebp */
  EBP = (pop32());
  /* 12898951 ret  */
  ESPCHK(0x128988d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008960 @ 0x12898960 (627 bytes, 182 insns) */
void f_12898960(void) {
  FTRACE(0x12898960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12898960 push ebp */
  push32((uint32_t)(EBP));
  /* 12898961 mov ebp, esp */
  EBP = (ESP);
  /* 12898963 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12898969 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12898970 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12898973 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 12898979 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289897d jne 0x12898986 */
  if (!C.zf) goto L_12898986;
  /* 1289897f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12898981 jmp 0x12898bcf */
  goto L_12898bcf;
L_12898986:;
  /* 12898986 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12898989 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1289898c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289898f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12898992 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12898995 mov eax, dword ptr [ecx*4 + 0x128c1060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x128c1060)));
  /* 1289899c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 128989a1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 128989a4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 128989a6 je 0x128989b8 */
  if (C.zf) goto L_128989b8;
  /* 128989a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 128989aa push 0 */
  push32((uint32_t)(0x0u));
  /* 128989ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128989af push edx */
  push32((uint32_t)(EDX));
  /* 128989b0 call 0x12898810 */
  push32(0x128989b5u); f_12898810();
  /* 128989b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_128989b8:;
  /* 128989b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128989bb sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 128989be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128989c1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 128989c4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 128989c7 mov edx, dword ptr [eax*4 + 0x128c1060] */
  EDX = (r32((uint32_t)(EAX*4 + 0x128c1060)));
  /* 128989ce movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 128989d3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 128989d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128989da je 0x12898aec */
  if (C.zf) goto L_12898aec;
  /* 128989e0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 128989e3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 128989e6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_128989ed:;
  /* 128989ed mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128989f0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128989f3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128989f6 jae 0x12898aea */
  if (!C.cf) goto L_12898aea;
  /* 128989fc lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 12898a02 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12898a05:;
  /* 12898a05 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12898a08 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 12898a0e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12898a10 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898a16 jge 0x12898a77 */
  if ((C.sf==C.of)) goto L_12898a77;
  /* 12898a18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12898a1b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12898a1e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898a21 jae 0x12898a77 */
  if (!C.cf) goto L_12898a77;
  /* 12898a23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12898a26 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12898a28 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 12898a2e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12898a31 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12898a34 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12898a37 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 12898a3e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898a41 jne 0x12898a61 */
  if (!C.zf) goto L_12898a61;
  /* 12898a43 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 12898a49 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12898a4c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 12898a52 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12898a55 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 12898a58 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12898a5b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12898a5e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12898a61:;
  /* 12898a61 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12898a64 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 12898a6a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12898a6c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12898a6f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12898a72 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12898a75 jmp 0x12898a05 */
  goto L_12898a05;
L_12898a77:;
  /* 12898a77 push 0 */
  push32((uint32_t)(0x0u));
  /* 12898a79 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 12898a7f push edx */
  push32((uint32_t)(EDX));
  /* 12898a80 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12898a83 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 12898a89 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12898a8b push eax */
  push32((uint32_t)(EAX));
  /* 12898a8c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 12898a92 push edx */
  push32((uint32_t)(EDX));
  /* 12898a93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12898a96 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12898a99 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12898a9c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12898a9f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12898aa2 mov edx, dword ptr [eax*4 + 0x128c1060] */
  EDX = (r32((uint32_t)(EAX*4 + 0x128c1060)));
  /* 12898aa9 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 12898aac push eax */
  push32((uint32_t)(EAX));
  /* 12898aad call dword ptr [0x128c2214] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2214))), 0x12898ab3u);
  /* 12898ab3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12898ab5 je 0x12898ada */
  if (C.zf) goto L_12898ada;
  /* 12898ab7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12898aba add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12898ac0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12898ac3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12898ac6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 12898acc sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12898ace cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898ad4 jge 0x12898ad8 */
  if ((C.sf==C.of)) goto L_12898ad8;
  /* 12898ad6 jmp 0x12898aea */
  goto L_12898aea;
L_12898ad8:;
  /* 12898ad8 jmp 0x12898ae5 */
  goto L_12898ae5;
L_12898ada:;
  /* 12898ada call dword ptr [0x128c2250] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2250))), 0x12898ae0u);
  /* 12898ae0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12898ae3 jmp 0x12898aea */
  goto L_12898aea;
L_12898ae5:;
  /* 12898ae5 jmp 0x128989ed */
  goto L_128989ed;
L_12898aea:;
  /* 12898aea jmp 0x12898b3c */
  goto L_12898b3c;
L_12898aec:;
  /* 12898aec push 0 */
  push32((uint32_t)(0x0u));
  /* 12898aee lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 12898af4 push ecx */
  push32((uint32_t)(ECX));
  /* 12898af5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12898af8 push edx */
  push32((uint32_t)(EDX));
  /* 12898af9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12898afc push eax */
  push32((uint32_t)(EAX));
  /* 12898afd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12898b00 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12898b03 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12898b06 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12898b09 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12898b0c mov eax, dword ptr [ecx*4 + 0x128c1060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x128c1060)));
  /* 12898b13 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 12898b16 push ecx */
  push32((uint32_t)(ECX));
  /* 12898b17 call dword ptr [0x128c2214] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2214))), 0x12898b1du);
  /* 12898b1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12898b1f je 0x12898b33 */
  if (C.zf) goto L_12898b33;
  /* 12898b21 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12898b28 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 12898b2e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12898b31 jmp 0x12898b3c */
  goto L_12898b3c;
L_12898b33:;
  /* 12898b33 call dword ptr [0x128c2250] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2250))), 0x12898b39u);
  /* 12898b39 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12898b3c:;
  /* 12898b3c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898b40 jne 0x12898bc6 */
  if (!C.zf) goto L_12898bc6;
  /* 12898b46 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898b4a je 0x12898b7a */
  if (C.zf) goto L_12898b7a;
  /* 12898b4c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898b50 jne 0x12898b69 */
  if (!C.zf) goto L_12898b69;
  /* 12898b52 call 0x1289c3d0 */
  push32(0x12898b57u); f_1289c3d0();
  /* 12898b57 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12898b5d call 0x1289c3e0 */
  push32(0x12898b62u); f_1289c3e0();
  /* 12898b62 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12898b65 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12898b67 jmp 0x12898b75 */
  goto L_12898b75;
L_12898b69:;
  /* 12898b69 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12898b6c push edx */
  push32((uint32_t)(EDX));
  /* 12898b6d call 0x1289c330 */
  push32(0x12898b72u); f_1289c330();
  /* 12898b72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12898b75:;
  /* 12898b75 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12898b78 jmp 0x12898bcf */
  goto L_12898bcf;
L_12898b7a:;
  /* 12898b7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12898b7d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12898b80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12898b83 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12898b86 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12898b89 mov edx, dword ptr [eax*4 + 0x128c1060] */
  EDX = (r32((uint32_t)(EAX*4 + 0x128c1060)));
  /* 12898b90 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12898b95 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12898b98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12898b9a je 0x12898bab */
  if (C.zf) goto L_12898bab;
  /* 12898b9c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12898b9f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12898ba2 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898ba5 jne 0x12898bab */
  if (!C.zf) goto L_12898bab;
  /* 12898ba7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12898ba9 jmp 0x12898bcf */
  goto L_12898bcf;
L_12898bab:;
  /* 12898bab call 0x1289c3d0 */
  push32(0x12898bb0u); f_1289c3d0();
  /* 12898bb0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 12898bb6 call 0x1289c3e0 */
  push32(0x12898bbbu); f_1289c3e0();
  /* 12898bbb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12898bc1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12898bc4 jmp 0x12898bcf */
  goto L_12898bcf;
L_12898bc6:;
  /* 12898bc6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12898bc9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12898bcf:;
  /* 12898bcf mov esp, ebp */
  ESP = (EBP);
  /* 12898bd1 pop ebp */
  EBP = (pop32());
  /* 12898bd2 ret  */
  ESPCHK(0x12898960u, _esp0);
  ESP += 4; return;
}

/* FUN_10008be0 @ 0x12898be0 (199 bytes, 68 insns) */
void f_12898be0(void) {
  FTRACE(0x12898be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12898be0 push ebp */
  push32((uint32_t)(EBP));
  /* 12898be1 mov ebp, esp */
  EBP = (ESP);
  /* 12898be3 push ecx */
  push32((uint32_t)(ECX));
  /* 12898be4 push ebx */
  push32((uint32_t)(EBX));
  /* 12898be5 push esi */
  push32((uint32_t)(ESI));
  /* 12898be6 push edi */
  push32((uint32_t)(EDI));
L_12898be7:;
  /* 12898be7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898beb jne 0x12898c0b */
  if (!C.zf) goto L_12898c0b;
  /* 12898bed push 0x128babc8 */
  push32((uint32_t)(0x128babc8u));
  /* 12898bf2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12898bf4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 12898bf6 push 0x128bb6e0 */
  push32((uint32_t)(0x128bb6e0u));
  /* 12898bfb push 2 */
  push32((uint32_t)(0x2u));
  /* 12898bfd call 0x12892e00 */
  push32(0x12898c02u); f_12892e00();
  /* 12898c02 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12898c05 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898c08 jne 0x12898c0b */
  if (!C.zf) goto L_12898c0b;
  /* 12898c0a int3  */
  x86_unimpl("int3 @ 0x12898c0a");
L_12898c0b:;
  /* 12898c0b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12898c0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12898c0f jne 0x12898be7 */
  if (!C.zf) goto L_12898be7;
  /* 12898c11 mov ecx, dword ptr [0x128bf824] */
  ECX = (r32((uint32_t)(0x128bf824)));
  /* 12898c17 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12898c1a mov dword ptr [0x128bf824], ecx */
  w32((uint32_t)(0x128bf824), (ECX));
  /* 12898c20 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12898c23 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12898c26 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 12898c28 push 0x128bb6e0 */
  push32((uint32_t)(0x128bb6e0u));
  /* 12898c2d push 2 */
  push32((uint32_t)(0x2u));
  /* 12898c2f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12898c34 call 0x12894e60 */
  push32(0x12898c39u); f_12894e60();
  /* 12898c39 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12898c3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12898c3f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12898c42 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12898c45 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898c49 je 0x12898c66 */
  if (C.zf) goto L_12898c66;
  /* 12898c4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12898c4e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12898c51 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12898c54 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12898c57 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12898c5a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12898c5d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 12898c64 jmp 0x12898c8b */
  goto L_12898c8b;
L_12898c66:;
  /* 12898c66 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12898c69 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12898c6c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12898c6f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12898c72 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12898c75 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12898c78 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12898c7b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12898c7e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12898c81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12898c84 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_12898c8b:;
  /* 12898c8b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12898c8e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12898c91 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12898c94 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12898c96 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12898c99 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12898ca0 pop edi */
  EDI = (pop32());
  /* 12898ca1 pop esi */
  ESI = (pop32());
  /* 12898ca2 pop ebx */
  EBX = (pop32());
  /* 12898ca3 mov esp, ebp */
  ESP = (EBP);
  /* 12898ca5 pop ebp */
  EBP = (pop32());
  /* 12898ca6 ret  */
  ESPCHK(0x12898be0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x12898cb0 (50 bytes, 17 insns) */
void f_12898cb0(void) {
  FTRACE(0x12898cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12898cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12898cb1 mov ebp, esp */
  EBP = (ESP);
  /* 12898cb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12898cb6 cmp eax, dword ptr [0x128c119c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x128c119c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898cbc jb 0x12898cc2 */
  if (C.cf) goto L_12898cc2;
  /* 12898cbe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12898cc0 jmp 0x12898ce0 */
  goto L_12898ce0;
L_12898cc2:;
  /* 12898cc2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12898cc5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12898cc8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12898ccb and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12898cce imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12898cd1 mov eax, dword ptr [ecx*4 + 0x128c1060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x128c1060)));
  /* 12898cd8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12898cdd and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_12898ce0:;
  /* 12898ce0 pop ebp */
  EBP = (pop32());
  /* 12898ce1 ret  */
  ESPCHK(0x12898cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008cf0 @ 0x12898cf0 (300 bytes, 80 insns) */
void f_12898cf0(void) {
  FTRACE(0x12898cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12898cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12898cf1 mov ebp, esp */
  EBP = (ESP);
  /* 12898cf3 push ecx */
  push32((uint32_t)(ECX));
  /* 12898cf4 cmp dword ptr [0x128c1040], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128c1040))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898cfb jne 0x12898d09 */
  if (!C.zf) goto L_12898d09;
  /* 12898cfd mov dword ptr [0x128c1040], 0x200 */
  w32((uint32_t)(0x128c1040), (0x200u));
  /* 12898d07 jmp 0x12898d1c */
  goto L_12898d1c;
L_12898d09:;
  /* 12898d09 cmp dword ptr [0x128c1040], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x128c1040))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898d10 jge 0x12898d1c */
  if ((C.sf==C.of)) goto L_12898d1c;
  /* 12898d12 mov dword ptr [0x128c1040], 0x14 */
  w32((uint32_t)(0x128c1040), (0x14u));
L_12898d1c:;
  /* 12898d1c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 12898d21 push 0x128bb6ec */
  push32((uint32_t)(0x128bb6ecu));
  /* 12898d26 push 2 */
  push32((uint32_t)(0x2u));
  /* 12898d28 push 4 */
  push32((uint32_t)(0x4u));
  /* 12898d2a mov eax, dword ptr [0x128c1040] */
  EAX = (r32((uint32_t)(0x128c1040)));
  /* 12898d2f push eax */
  push32((uint32_t)(EAX));
  /* 12898d30 call 0x12895270 */
  push32(0x12898d35u); f_12895270();
  /* 12898d35 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12898d38 mov dword ptr [0x128bfcec], eax */
  w32((uint32_t)(0x128bfcec), (EAX));
  /* 12898d3d cmp dword ptr [0x128bfcec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bfcec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898d44 jne 0x12898d85 */
  if (!C.zf) goto L_12898d85;
  /* 12898d46 mov dword ptr [0x128c1040], 0x14 */
  w32((uint32_t)(0x128c1040), (0x14u));
  /* 12898d50 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 12898d55 push 0x128bb6ec */
  push32((uint32_t)(0x128bb6ecu));
  /* 12898d5a push 2 */
  push32((uint32_t)(0x2u));
  /* 12898d5c push 4 */
  push32((uint32_t)(0x4u));
  /* 12898d5e mov ecx, dword ptr [0x128c1040] */
  ECX = (r32((uint32_t)(0x128c1040)));
  /* 12898d64 push ecx */
  push32((uint32_t)(ECX));
  /* 12898d65 call 0x12895270 */
  push32(0x12898d6au); f_12895270();
  /* 12898d6a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12898d6d mov dword ptr [0x128bfcec], eax */
  w32((uint32_t)(0x128bfcec), (EAX));
  /* 12898d72 cmp dword ptr [0x128bfcec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bfcec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898d79 jne 0x12898d85 */
  if (!C.zf) goto L_12898d85;
  /* 12898d7b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12898d7d call 0x12892cb0 */
  push32(0x12898d82u); f_12892cb0();
  /* 12898d82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12898d85:;
  /* 12898d85 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12898d8c jmp 0x12898d97 */
  goto L_12898d97;
L_12898d8e:;
  /* 12898d8e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12898d91 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12898d94 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12898d97:;
  /* 12898d97 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898d9b jge 0x12898db6 */
  if ((C.sf==C.of)) goto L_12898db6;
  /* 12898d9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12898da0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12898da3 add eax, 0x128bdb50 */
  { uint32_t _a=(EAX),_b=(0x128bdb50u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12898da8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12898dab mov edx, dword ptr [0x128bfcec] */
  EDX = (r32((uint32_t)(0x128bfcec)));
  /* 12898db1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 12898db4 jmp 0x12898d8e */
  goto L_12898d8e;
L_12898db6:;
  /* 12898db6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12898dbd jmp 0x12898dc8 */
  goto L_12898dc8;
L_12898dbf:;
  /* 12898dbf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12898dc2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12898dc5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12898dc8:;
  /* 12898dc8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898dcc jge 0x12898e18 */
  if ((C.sf==C.of)) goto L_12898e18;
  /* 12898dce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12898dd1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12898dd4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12898dd7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12898dda imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12898ddd mov eax, dword ptr [ecx*4 + 0x128c1060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x128c1060)));
  /* 12898de4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898de8 je 0x12898e06 */
  if (C.zf) goto L_12898e06;
  /* 12898dea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12898ded sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12898df0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12898df3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12898df6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12898df9 mov eax, dword ptr [ecx*4 + 0x128c1060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x128c1060)));
  /* 12898e00 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898e04 jne 0x12898e16 */
  if (!C.zf) goto L_12898e16;
L_12898e06:;
  /* 12898e06 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12898e09 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12898e0c mov dword ptr [ecx + 0x128bdb60], 0xffffffff */
  w32((uint32_t)(ECX + 0x128bdb60), (0xffffffffu));
L_12898e16:;
  /* 12898e16 jmp 0x12898dbf */
  goto L_12898dbf;
L_12898e18:;
  /* 12898e18 mov esp, ebp */
  ESP = (EBP);
  /* 12898e1a pop ebp */
  EBP = (pop32());
  /* 12898e1b ret  */
  ESPCHK(0x12898cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e20 @ 0x12898e20 (26 bytes, 9 insns) */
void f_12898e20(void) {
  FTRACE(0x12898e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12898e20 push ebp */
  push32((uint32_t)(EBP));
  /* 12898e21 mov ebp, esp */
  EBP = (ESP);
  /* 12898e23 call 0x1289cc00 */
  push32(0x12898e28u); f_1289cc00();
  /* 12898e28 movsx eax, byte ptr [0x128bf6d4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x128bf6d4))));
  /* 12898e2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12898e31 je 0x12898e38 */
  if (C.zf) goto L_12898e38;
  /* 12898e33 call 0x1289c9c0 */
  push32(0x12898e38u); f_1289c9c0();
L_12898e38:;
  /* 12898e38 pop ebp */
  EBP = (pop32());
  /* 12898e39 ret  */
  ESPCHK(0x12898e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e40 @ 0x12898e40 (61 bytes, 20 insns) */
void f_12898e40(void) {
  FTRACE(0x12898e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12898e40 push ebp */
  push32((uint32_t)(EBP));
  /* 12898e41 mov ebp, esp */
  EBP = (ESP);
  /* 12898e43 cmp dword ptr [ebp + 8], 0x128bdb50 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x128bdb50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898e4a jb 0x12898e6e */
  if (C.cf) goto L_12898e6e;
  /* 12898e4c cmp dword ptr [ebp + 8], 0x128bddb0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x128bddb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898e53 ja 0x12898e6e */
  if ((!C.cf&&!C.zf)) goto L_12898e6e;
  /* 12898e55 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12898e58 sub eax, 0x128bdb50 */
  { uint32_t _a=(EAX),_b=(0x128bdb50u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12898e5d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12898e60 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12898e63 push eax */
  push32((uint32_t)(EAX));
  /* 12898e64 call 0x12899210 */
  push32(0x12898e69u); f_12899210();
  /* 12898e69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12898e6c jmp 0x12898e7b */
  goto L_12898e7b;
L_12898e6e:;
  /* 12898e6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12898e71 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12898e74 push ecx */
  push32((uint32_t)(ECX));
  /* 12898e75 call dword ptr [0x128c22a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22a0))), 0x12898e7bu);
L_12898e7b:;
  /* 12898e7b pop ebp */
  EBP = (pop32());
  /* 12898e7c ret  */
  ESPCHK(0x12898e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e80 @ 0x12898e80 (41 bytes, 16 insns) */
void f_12898e80(void) {
  FTRACE(0x12898e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12898e80 push ebp */
  push32((uint32_t)(EBP));
  /* 12898e81 mov ebp, esp */
  EBP = (ESP);
  /* 12898e83 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898e87 jge 0x12898e9a */
  if ((C.sf==C.of)) goto L_12898e9a;
  /* 12898e89 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12898e8c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12898e8f push eax */
  push32((uint32_t)(EAX));
  /* 12898e90 call 0x12899210 */
  push32(0x12898e95u); f_12899210();
  /* 12898e95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12898e98 jmp 0x12898ea7 */
  goto L_12898ea7;
L_12898e9a:;
  /* 12898e9a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12898e9d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12898ea0 push ecx */
  push32((uint32_t)(ECX));
  /* 12898ea1 call dword ptr [0x128c22a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22a0))), 0x12898ea7u);
L_12898ea7:;
  /* 12898ea7 pop ebp */
  EBP = (pop32());
  /* 12898ea8 ret  */
  ESPCHK(0x12898e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10008eb0 @ 0x12898eb0 (61 bytes, 20 insns) */
void f_12898eb0(void) {
  FTRACE(0x12898eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12898eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12898eb1 mov ebp, esp */
  EBP = (ESP);
  /* 12898eb3 cmp dword ptr [ebp + 8], 0x128bdb50 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x128bdb50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898eba jb 0x12898ede */
  if (C.cf) goto L_12898ede;
  /* 12898ebc cmp dword ptr [ebp + 8], 0x128bddb0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x128bddb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898ec3 ja 0x12898ede */
  if ((!C.cf&&!C.zf)) goto L_12898ede;
  /* 12898ec5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12898ec8 sub eax, 0x128bdb50 */
  { uint32_t _a=(EAX),_b=(0x128bdb50u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12898ecd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12898ed0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12898ed3 push eax */
  push32((uint32_t)(EAX));
  /* 12898ed4 call 0x128992b0 */
  push32(0x12898ed9u); f_128992b0();
  /* 12898ed9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12898edc jmp 0x12898eeb */
  goto L_12898eeb;
L_12898ede:;
  /* 12898ede mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12898ee1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12898ee4 push ecx */
  push32((uint32_t)(ECX));
  /* 12898ee5 call dword ptr [0x128c22a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22a4))), 0x12898eebu);
L_12898eeb:;
  /* 12898eeb pop ebp */
  EBP = (pop32());
  /* 12898eec ret  */
  ESPCHK(0x12898eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ef0 @ 0x12898ef0 (41 bytes, 16 insns) */
void f_12898ef0(void) {
  FTRACE(0x12898ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12898ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 12898ef1 mov ebp, esp */
  EBP = (ESP);
  /* 12898ef3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898ef7 jge 0x12898f0a */
  if ((C.sf==C.of)) goto L_12898f0a;
  /* 12898ef9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12898efc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12898eff push eax */
  push32((uint32_t)(EAX));
  /* 12898f00 call 0x128992b0 */
  push32(0x12898f05u); f_128992b0();
  /* 12898f05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12898f08 jmp 0x12898f17 */
  goto L_12898f17;
L_12898f0a:;
  /* 12898f0a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12898f0d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12898f10 push ecx */
  push32((uint32_t)(ECX));
  /* 12898f11 call dword ptr [0x128c22a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22a4))), 0x12898f17u);
L_12898f17:;
  /* 12898f17 pop ebp */
  EBP = (pop32());
  /* 12898f18 ret  */
  ESPCHK(0x12898ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f20 @ 0x12898f20 (119 bytes, 34 insns) */
void f_12898f20(void) {
  FTRACE(0x12898f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12898f20 push ebp */
  push32((uint32_t)(EBP));
  /* 12898f21 mov ebp, esp */
  EBP = (ESP);
  /* 12898f23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12898f26 push 0x128bfa2c */
  push32((uint32_t)(0x128bfa2cu));
  /* 12898f2b call dword ptr [0x128c2224] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2224))), 0x12898f31u);
  /* 12898f31 cmp dword ptr [0x128bfa1c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bfa1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898f38 je 0x12898f58 */
  if (C.zf) goto L_12898f58;
  /* 12898f3a push 0x128bfa2c */
  push32((uint32_t)(0x128bfa2cu));
  /* 12898f3f call dword ptr [0x128c2218] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2218))), 0x12898f45u);
  /* 12898f45 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12898f47 call 0x12899210 */
  push32(0x12898f4cu); f_12899210();
  /* 12898f4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12898f4f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12898f56 jmp 0x12898f5f */
  goto L_12898f5f;
L_12898f58:;
  /* 12898f58 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12898f5f:;
  /* 12898f5f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 12898f63 push eax */
  push32((uint32_t)(EAX));
  /* 12898f64 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12898f67 push ecx */
  push32((uint32_t)(ECX));
  /* 12898f68 call 0x12898fa0 */
  push32(0x12898f6du); f_12898fa0();
  /* 12898f6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12898f70 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12898f73 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898f77 je 0x12898f85 */
  if (C.zf) goto L_12898f85;
  /* 12898f79 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12898f7b call 0x128992b0 */
  push32(0x12898f80u); f_128992b0();
  /* 12898f80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12898f83 jmp 0x12898f90 */
  goto L_12898f90;
L_12898f85:;
  /* 12898f85 push 0x128bfa2c */
  push32((uint32_t)(0x128bfa2cu));
  /* 12898f8a call dword ptr [0x128c2218] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2218))), 0x12898f90u);
L_12898f90:;
  /* 12898f90 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12898f93 mov esp, ebp */
  ESP = (EBP);
  /* 12898f95 pop ebp */
  EBP = (pop32());
  /* 12898f96 ret  */
  ESPCHK(0x12898f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10008fa0 @ 0x12898fa0 (160 bytes, 50 insns) */
void f_12898fa0(void) {
  FTRACE(0x12898fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12898fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12898fa1 mov ebp, esp */
  EBP = (ESP);
  /* 12898fa3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12898fa6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898faa jne 0x12898fb3 */
  if (!C.zf) goto L_12898fb3;
  /* 12898fac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12898fae jmp 0x1289903c */
  goto L_1289903c;
L_12898fb3:;
  /* 12898fb3 cmp dword ptr [0x128bf8a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf8a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898fba jne 0x12898fea */
  if (!C.zf) goto L_12898fea;
  /* 12898fbc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12898fbf and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12898fc4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12898fc9 jle 0x12898fdb */
  if ((C.zf||C.sf!=C.of)) goto L_12898fdb;
  /* 12898fcb call 0x1289c3d0 */
  push32(0x12898fd0u); f_1289c3d0();
  /* 12898fd0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 12898fd6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12898fd9 jmp 0x1289903c */
  goto L_1289903c;
L_12898fdb:;
  /* 12898fdb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12898fde mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 12898fe1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 12898fe3 mov eax, 1 */
  EAX = (0x1u);
  /* 12898fe8 jmp 0x1289903c */
  goto L_1289903c;
L_12898fea:;
  /* 12898fea mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12898ff1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12898ff4 push eax */
  push32((uint32_t)(EAX));
  /* 12898ff5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12898ff7 mov ecx, dword ptr [0x128be158] */
  ECX = (r32((uint32_t)(0x128be158)));
  /* 12898ffd push ecx */
  push32((uint32_t)(ECX));
  /* 12898ffe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12899001 push edx */
  push32((uint32_t)(EDX));
  /* 12899002 push 1 */
  push32((uint32_t)(0x1u));
  /* 12899004 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 12899007 push eax */
  push32((uint32_t)(EAX));
  /* 12899008 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1289900d mov ecx, dword ptr [0x128bf8b8] */
  ECX = (r32((uint32_t)(0x128bf8b8)));
  /* 12899013 push ecx */
  push32((uint32_t)(ECX));
  /* 12899014 call dword ptr [0x128c227c] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c227c))), 0x1289901au);
  /* 1289901a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1289901d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12899021 je 0x12899029 */
  if (C.zf) goto L_12899029;
  /* 12899023 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12899027 je 0x12899039 */
  if (C.zf) goto L_12899039;
L_12899029:;
  /* 12899029 call 0x1289c3d0 */
  push32(0x1289902eu); f_1289c3d0();
  /* 1289902e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 12899034 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12899037 jmp 0x1289903c */
  goto L_1289903c;
L_12899039:;
  /* 12899039 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1289903c:;
  /* 1289903c mov esp, ebp */
  ESP = (EBP);
  /* 1289903e pop ebp */
  EBP = (pop32());
  /* 1289903f ret  */
  ESPCHK(0x12898fa0u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x12899040 (104 bytes, 43 insns) */
void f_12899040(void) {
  FTRACE(0x12899040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12899040 push ebx */
  push32((uint32_t)(EBX));
  /* 12899041 push esi */
  push32((uint32_t)(ESI));
  /* 12899042 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 12899046 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12899048 jne 0x12899062 */
  if (!C.zf) goto L_12899062;
  /* 1289904a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1289904e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12899052 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12899054 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12899056 mov ebx, eax */
  EBX = (EAX);
  /* 12899058 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1289905c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1289905e mov edx, ebx */
  EDX = (EBX);
  /* 12899060 jmp 0x128990a3 */
  goto L_128990a3;
L_12899062:;
  /* 12899062 mov ecx, eax */
  ECX = (EAX);
  /* 12899064 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 12899068 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1289906c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_12899070:;
  /* 12899070 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12899072 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 12899074 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12899076 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 12899078 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1289907a jne 0x12899070 */
  if (!C.zf) goto L_12899070;
  /* 1289907c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1289907e mov esi, eax */
  ESI = (EAX);
  /* 12899080 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12899084 mov ecx, eax */
  ECX = (EAX);
  /* 12899086 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1289908a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1289908c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289908e jb 0x1289909e */
  if (C.cf) goto L_1289909e;
  /* 12899090 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12899094 ja 0x1289909e */
  if ((!C.cf&&!C.zf)) goto L_1289909e;
  /* 12899096 jb 0x1289909f */
  if (C.cf) goto L_1289909f;
  /* 12899098 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289909c jbe 0x1289909f */
  if ((C.cf||C.zf)) goto L_1289909f;
L_1289909e:;
  /* 1289909e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1289909f:;
  /* 1289909f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128990a1 mov eax, esi */
  EAX = (ESI);
L_128990a3:;
  /* 128990a3 pop esi */
  ESI = (pop32());
  /* 128990a4 pop ebx */
  EBX = (pop32());
  /* 128990a5 ret 0x10 */
  ESPCHK(0x12899040u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x128990b0 (117 bytes, 44 insns) */
void f_128990b0(void) {
  FTRACE(0x128990b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128990b0 push ebx */
  push32((uint32_t)(EBX));
  /* 128990b1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 128990b5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128990b7 jne 0x128990d1 */
  if (!C.zf) goto L_128990d1;
  /* 128990b9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 128990bd mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 128990c1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128990c3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 128990c5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 128990c9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 128990cb mov eax, edx */
  EAX = (EDX);
  /* 128990cd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128990cf jmp 0x12899121 */
  goto L_12899121;
L_128990d1:;
  /* 128990d1 mov ecx, eax */
  ECX = (EAX);
  /* 128990d3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 128990d7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 128990db mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_128990df:;
  /* 128990df shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 128990e1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 128990e3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 128990e5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 128990e7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 128990e9 jne 0x128990df */
  if (!C.zf) goto L_128990df;
  /* 128990eb div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 128990ed mov ecx, eax */
  ECX = (EAX);
  /* 128990ef mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 128990f3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 128990f4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 128990f8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128990fa jb 0x1289910a */
  if (C.cf) goto L_1289910a;
  /* 128990fc cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12899100 ja 0x1289910a */
  if ((!C.cf&&!C.zf)) goto L_1289910a;
  /* 12899102 jb 0x12899112 */
  if (C.cf) goto L_12899112;
  /* 12899104 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12899108 jbe 0x12899112 */
  if ((C.cf||C.zf)) goto L_12899112;
L_1289910a:;
  /* 1289910a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289910e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12899112:;
  /* 12899112 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12899116 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289911a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1289911c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1289911e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12899121:;
  /* 12899121 pop ebx */
  EBX = (pop32());
  /* 12899122 ret 0x10 */
  ESPCHK(0x128990b0u, _esp0);
  ESP += 20; return;
}

/* FUN_10009130 @ 0x12899130 (55 bytes, 16 insns) */
void f_12899130(void) {
  FTRACE(0x12899130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12899130 push ebp */
  push32((uint32_t)(EBP));
  /* 12899131 mov ebp, esp */
  EBP = (ESP);
  /* 12899133 mov eax, dword ptr [0x128be044] */
  EAX = (r32((uint32_t)(0x128be044)));
  /* 12899138 push eax */
  push32((uint32_t)(EAX));
  /* 12899139 call dword ptr [0x128c22a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22a8))), 0x1289913fu);
  /* 1289913f mov ecx, dword ptr [0x128be034] */
  ECX = (r32((uint32_t)(0x128be034)));
  /* 12899145 push ecx */
  push32((uint32_t)(ECX));
  /* 12899146 call dword ptr [0x128c22a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22a8))), 0x1289914cu);
  /* 1289914c mov edx, dword ptr [0x128be024] */
  EDX = (r32((uint32_t)(0x128be024)));
  /* 12899152 push edx */
  push32((uint32_t)(EDX));
  /* 12899153 call dword ptr [0x128c22a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22a8))), 0x12899159u);
  /* 12899159 mov eax, dword ptr [0x128be004] */
  EAX = (r32((uint32_t)(0x128be004)));
  /* 1289915e push eax */
  push32((uint32_t)(EAX));
  /* 1289915f call dword ptr [0x128c22a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22a8))), 0x12899165u);
  /* 12899165 pop ebp */
  EBP = (pop32());
  /* 12899166 ret  */
  ESPCHK(0x12899130u, _esp0);
  ESP += 4; return;
}

/* FUN_10009170 @ 0x12899170 (159 bytes, 47 insns) */
void f_12899170(void) {
  FTRACE(0x12899170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12899170 push ebp */
  push32((uint32_t)(EBP));
  /* 12899171 mov ebp, esp */
  EBP = (ESP);
  /* 12899173 push ecx */
  push32((uint32_t)(ECX));
  /* 12899174 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1289917b jmp 0x12899186 */
  goto L_12899186;
L_1289917d:;
  /* 1289917d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12899180 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12899183 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12899186:;
  /* 12899186 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289918a jge 0x128991d9 */
  if ((C.sf==C.of)) goto L_128991d9;
  /* 1289918c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289918f cmp dword ptr [ecx*4 + 0x128be000], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x128be000))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12899197 je 0x128991d7 */
  if (C.zf) goto L_128991d7;
  /* 12899199 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289919d je 0x128991d7 */
  if (C.zf) goto L_128991d7;
  /* 1289919f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128991a3 je 0x128991d7 */
  if (C.zf) goto L_128991d7;
  /* 128991a5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128991a9 je 0x128991d7 */
  if (C.zf) goto L_128991d7;
  /* 128991ab cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128991af je 0x128991d7 */
  if (C.zf) goto L_128991d7;
  /* 128991b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128991b4 mov eax, dword ptr [edx*4 + 0x128be000] */
  EAX = (r32((uint32_t)(EDX*4 + 0x128be000)));
  /* 128991bb push eax */
  push32((uint32_t)(EAX));
  /* 128991bc call dword ptr [0x128c2264] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2264))), 0x128991c2u);
  /* 128991c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 128991c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128991c7 mov edx, dword ptr [ecx*4 + 0x128be000] */
  EDX = (r32((uint32_t)(ECX*4 + 0x128be000)));
  /* 128991ce push edx */
  push32((uint32_t)(EDX));
  /* 128991cf call 0x128958f0 */
  push32(0x128991d4u); f_128958f0();
  /* 128991d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_128991d7:;
  /* 128991d7 jmp 0x1289917d */
  goto L_1289917d;
L_128991d9:;
  /* 128991d9 mov eax, dword ptr [0x128be024] */
  EAX = (r32((uint32_t)(0x128be024)));
  /* 128991de push eax */
  push32((uint32_t)(EAX));
  /* 128991df call dword ptr [0x128c2264] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2264))), 0x128991e5u);
  /* 128991e5 mov ecx, dword ptr [0x128be034] */
  ECX = (r32((uint32_t)(0x128be034)));
  /* 128991eb push ecx */
  push32((uint32_t)(ECX));
  /* 128991ec call dword ptr [0x128c2264] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2264))), 0x128991f2u);
  /* 128991f2 mov edx, dword ptr [0x128be044] */
  EDX = (r32((uint32_t)(0x128be044)));
  /* 128991f8 push edx */
  push32((uint32_t)(EDX));
  /* 128991f9 call dword ptr [0x128c2264] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2264))), 0x128991ffu);
  /* 128991ff mov eax, dword ptr [0x128be004] */
  EAX = (r32((uint32_t)(0x128be004)));
  /* 12899204 push eax */
  push32((uint32_t)(EAX));
  /* 12899205 call dword ptr [0x128c2264] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2264))), 0x1289920bu);
  /* 1289920b mov esp, ebp */
  ESP = (EBP);
  /* 1289920d pop ebp */
  EBP = (pop32());
  /* 1289920e ret  */
  ESPCHK(0x12899170u, _esp0);
  ESP += 4; return;
}

/* FUN_10009210 @ 0x12899210 (151 bytes, 46 insns) */
void f_12899210(void) {
  FTRACE(0x12899210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12899210 push ebp */
  push32((uint32_t)(EBP));
  /* 12899211 mov ebp, esp */
  EBP = (ESP);
  /* 12899213 push ecx */
  push32((uint32_t)(ECX));
  /* 12899214 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12899217 cmp dword ptr [eax*4 + 0x128be000], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x128be000))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289921f jne 0x12899292 */
  if (!C.zf) goto L_12899292;
  /* 12899221 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 12899226 push 0x128bb6f4 */
  push32((uint32_t)(0x128bb6f4u));
  /* 1289922b push 2 */
  push32((uint32_t)(0x2u));
  /* 1289922d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1289922f call 0x12894e60 */
  push32(0x12899234u); f_12894e60();
  /* 12899234 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12899237 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1289923a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289923e jne 0x1289924a */
  if (!C.zf) goto L_1289924a;
  /* 12899240 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12899242 call 0x12892cb0 */
  push32(0x12899247u); f_12892cb0();
  /* 12899247 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1289924a:;
  /* 1289924a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1289924c call 0x12899210 */
  push32(0x12899251u); f_12899210();
  /* 12899251 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12899254 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12899257 cmp dword ptr [ecx*4 + 0x128be000], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x128be000))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289925f jne 0x1289927a */
  if (!C.zf) goto L_1289927a;
  /* 12899261 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12899264 push edx */
  push32((uint32_t)(EDX));
  /* 12899265 call dword ptr [0x128c22a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22a8))), 0x1289926bu);
  /* 1289926b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289926e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12899271 mov dword ptr [eax*4 + 0x128be000], ecx */
  w32((uint32_t)(EAX*4 + 0x128be000), (ECX));
  /* 12899278 jmp 0x12899288 */
  goto L_12899288;
L_1289927a:;
  /* 1289927a push 2 */
  push32((uint32_t)(0x2u));
  /* 1289927c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289927f push edx */
  push32((uint32_t)(EDX));
  /* 12899280 call 0x128958f0 */
  push32(0x12899285u); f_128958f0();
  /* 12899285 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12899288:;
  /* 12899288 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1289928a call 0x128992b0 */
  push32(0x1289928fu); f_128992b0();
  /* 1289928f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12899292:;
  /* 12899292 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12899295 mov ecx, dword ptr [eax*4 + 0x128be000] */
  ECX = (r32((uint32_t)(EAX*4 + 0x128be000)));
  /* 1289929c push ecx */
  push32((uint32_t)(ECX));
  /* 1289929d call dword ptr [0x128c22a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22a0))), 0x128992a3u);
  /* 128992a3 mov esp, ebp */
  ESP = (EBP);
  /* 128992a5 pop ebp */
  EBP = (pop32());
  /* 128992a6 ret  */
  ESPCHK(0x12899210u, _esp0);
  ESP += 4; return;
}

/* FUN_100092b0 @ 0x128992b0 (22 bytes, 8 insns) */
void f_128992b0(void) {
  FTRACE(0x128992b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128992b0 push ebp */
  push32((uint32_t)(EBP));
  /* 128992b1 mov ebp, esp */
  EBP = (ESP);
  /* 128992b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128992b6 mov ecx, dword ptr [eax*4 + 0x128be000] */
  ECX = (r32((uint32_t)(EAX*4 + 0x128be000)));
  /* 128992bd push ecx */
  push32((uint32_t)(ECX));
  /* 128992be call dword ptr [0x128c22a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22a4))), 0x128992c4u);
  /* 128992c4 pop ebp */
  EBP = (pop32());
  /* 128992c5 ret  */
  ESPCHK(0x128992b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100092d0 @ 0x128992d0 (26 bytes, 10 insns) */
void f_128992d0(void) {
  FTRACE(0x128992d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128992d0 push ebp */
  push32((uint32_t)(EBP));
  /* 128992d1 mov ebp, esp */
  EBP = (ESP);
  /* 128992d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128992d6 push eax */
  push32((uint32_t)(EAX));
  /* 128992d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 128992d9 call dword ptr [0x128c22ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22ac))), 0x128992dfu);
  /* 128992df push 0xff */
  push32((uint32_t)(0xffu));
  /* 128992e4 call dword ptr [0x128c222c] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c222c))), 0x128992eau);
  /* 128992ea pop ebp */
  EBP = (pop32());
  /* 128992eb ret  */
  ESPCHK(0x128992d0u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x128992f0 (446 bytes, 130 insns) */
void f_128992f0(void) {
  FTRACE(0x128992f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128992f0 push ebp */
  push32((uint32_t)(EBP));
  /* 128992f1 mov ebp, esp */
  EBP = (ESP);
  /* 128992f3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 128992f6 call 0x128948a0 */
  push32(0x128992fbu); f_128948a0();
  /* 128992fb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 128992fe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12899301 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 12899304 push ecx */
  push32((uint32_t)(ECX));
  /* 12899305 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12899308 push edx */
  push32((uint32_t)(EDX));
  /* 12899309 call 0x128994b0 */
  push32(0x1289930eu); f_128994b0();
  /* 1289930e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12899311 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12899314 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12899318 je 0x12899323 */
  if (C.zf) goto L_12899323;
  /* 1289931a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289931d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12899321 jne 0x12899332 */
  if (!C.zf) goto L_12899332;
L_12899323:;
  /* 12899323 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12899326 push ecx */
  push32((uint32_t)(ECX));
  /* 12899327 call dword ptr [0x128c22b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22b0))), 0x1289932du);
  /* 1289932d jmp 0x128994aa */
  goto L_128994aa;
L_12899332:;
  /* 12899332 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12899335 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12899339 jne 0x1289934f */
  if (!C.zf) goto L_1289934f;
  /* 1289933b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289933e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12899345 mov eax, 1 */
  EAX = (0x1u);
  /* 1289934a jmp 0x128994aa */
  goto L_128994aa;
L_1289934f:;
  /* 1289934f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12899352 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12899356 jne 0x12899360 */
  if (!C.zf) goto L_12899360;
  /* 12899358 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1289935b jmp 0x128994aa */
  goto L_128994aa;
L_12899360:;
  /* 12899360 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12899363 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12899366 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12899369 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289936c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 1289936f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12899372 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12899375 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12899378 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 1289937b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289937e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12899382 jne 0x12899487 */
  if (!C.zf) goto L_12899487;
  /* 12899388 mov eax, dword ptr [0x128be138] */
  EAX = (r32((uint32_t)(0x128be138)));
  /* 1289938d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12899390 jmp 0x1289939b */
  goto L_1289939b;
L_12899392:;
  /* 12899392 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12899395 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12899398 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1289939b:;
  /* 1289939b mov edx, dword ptr [0x128be138] */
  EDX = (r32((uint32_t)(0x128be138)));
  /* 128993a1 add edx, dword ptr [0x128be13c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x128be13c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128993a7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128993aa jge 0x128993c2 */
  if ((C.sf==C.of)) goto L_128993c2;
  /* 128993ac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 128993af imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 128993b2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 128993b5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 128993b8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 128993c0 jmp 0x12899392 */
  goto L_12899392;
L_128993c2:;
  /* 128993c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128993c5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 128993c8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 128993cb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 128993ce cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128993d4 jne 0x128993e5 */
  if (!C.zf) goto L_128993e5;
  /* 128993d6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128993d9 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 128993e0 jmp 0x1289946d */
  goto L_1289946d;
L_128993e5:;
  /* 128993e5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 128993e8 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128993ee jne 0x128993fc */
  if (!C.zf) goto L_128993fc;
  /* 128993f0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 128993f3 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 128993fa jmp 0x1289946d */
  goto L_1289946d;
L_128993fc:;
  /* 128993fc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 128993ff cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12899405 jne 0x12899413 */
  if (!C.zf) goto L_12899413;
  /* 12899407 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289940a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 12899411 jmp 0x1289946d */
  goto L_1289946d;
L_12899413:;
  /* 12899413 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12899416 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289941c jne 0x1289942a */
  if (!C.zf) goto L_1289942a;
  /* 1289941e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12899421 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 12899428 jmp 0x1289946d */
  goto L_1289946d;
L_1289942a:;
  /* 1289942a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289942d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12899433 jne 0x12899441 */
  if (!C.zf) goto L_12899441;
  /* 12899435 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12899438 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 1289943f jmp 0x1289946d */
  goto L_1289946d;
L_12899441:;
  /* 12899441 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12899444 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289944a jne 0x12899458 */
  if (!C.zf) goto L_12899458;
  /* 1289944c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289944f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 12899456 jmp 0x1289946d */
  goto L_1289946d;
L_12899458:;
  /* 12899458 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289945b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12899461 jne 0x1289946d */
  if (!C.zf) goto L_1289946d;
  /* 12899463 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12899466 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_1289946d:;
  /* 1289946d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12899470 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 12899473 push edx */
  push32((uint32_t)(EDX));
  /* 12899474 push 8 */
  push32((uint32_t)(0x8u));
  /* 12899476 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12899479u);
  /* 12899479 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289947c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289947f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12899482 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 12899485 jmp 0x1289949e */
  goto L_1289949e;
L_12899487:;
  /* 12899487 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289948a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12899491 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12899494 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12899497 push ecx */
  push32((uint32_t)(ECX));
  /* 12899498 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1289949bu);
  /* 1289949b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1289949e:;
  /* 1289949e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 128994a1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 128994a4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 128994a7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_128994aa:;
  /* 128994aa mov esp, ebp */
  ESP = (EBP);
  /* 128994ac pop ebp */
  EBP = (pop32());
  /* 128994ad ret  */
  ESPCHK(0x128992f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100094b0 @ 0x128994b0 (89 bytes, 35 insns) */
void f_128994b0(void) {
  FTRACE(0x128994b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128994b0 push ebp */
  push32((uint32_t)(EBP));
  /* 128994b1 mov ebp, esp */
  EBP = (ESP);
  /* 128994b3 push ecx */
  push32((uint32_t)(ECX));
  /* 128994b4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 128994b7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_128994ba:;
  /* 128994ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128994bd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 128994bf cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128994c2 je 0x128994e2 */
  if (C.zf) goto L_128994e2;
  /* 128994c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128994c7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128994ca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 128994cd mov ecx, dword ptr [0x128be144] */
  ECX = (r32((uint32_t)(0x128be144)));
  /* 128994d3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 128994d6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 128994d9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128994db cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128994de jae 0x128994e2 */
  if (!C.cf) goto L_128994e2;
  /* 128994e0 jmp 0x128994ba */
  goto L_128994ba;
L_128994e2:;
  /* 128994e2 mov eax, dword ptr [0x128be144] */
  EAX = (r32((uint32_t)(0x128be144)));
  /* 128994e7 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 128994ea mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 128994ed add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128994ef cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128994f2 jae 0x128994fe */
  if (!C.cf) goto L_128994fe;
  /* 128994f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128994f7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 128994f9 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128994fc je 0x12899502 */
  if (C.zf) goto L_12899502;
L_128994fe:;
  /* 128994fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12899500 jmp 0x12899505 */
  goto L_12899505;
L_12899502:;
  /* 12899502 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12899505:;
  /* 12899505 mov esp, ebp */
  ESP = (EBP);
  /* 12899507 pop ebp */
  EBP = (pop32());
  /* 12899508 ret  */
  ESPCHK(0x128994b0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x12899510 (48 bytes, 17 insns) */
void f_12899510(void) {
  FTRACE(0x12899510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12899510 push ebp */
  push32((uint32_t)(EBP));
  /* 12899511 mov ebp, esp */
  EBP = (ESP);
  /* 12899513 push ecx */
  push32((uint32_t)(ECX));
  /* 12899514 push 9 */
  push32((uint32_t)(0x9u));
  /* 12899516 call 0x12899210 */
  push32(0x1289951bu); f_12899210();
  /* 1289951b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289951e mov eax, dword ptr [0x128bf88c] */
  EAX = (r32((uint32_t)(0x128bf88c)));
  /* 12899523 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12899526 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12899529 mov dword ptr [0x128bf88c], ecx */
  w32((uint32_t)(0x128bf88c), (ECX));
  /* 1289952f push 9 */
  push32((uint32_t)(0x9u));
  /* 12899531 call 0x128992b0 */
  push32(0x12899536u); f_128992b0();
  /* 12899536 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12899539 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289953c mov esp, ebp */
  ESP = (EBP);
  /* 1289953e pop ebp */
  EBP = (pop32());
  /* 1289953f ret  */
  ESPCHK(0x12899510u, _esp0);
  ESP += 4; return;
}

/* FUN_10009540 @ 0x12899540 (10 bytes, 5 insns) */
void f_12899540(void) {
  FTRACE(0x12899540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12899540 push ebp */
  push32((uint32_t)(EBP));
  /* 12899541 mov ebp, esp */
  EBP = (ESP);
  /* 12899543 mov eax, dword ptr [0x128bf88c] */
  EAX = (r32((uint32_t)(0x128bf88c)));
  /* 12899548 pop ebp */
  EBP = (pop32());
  /* 12899549 ret  */
  ESPCHK(0x12899540u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x12899550 (45 bytes, 19 insns) */
void f_12899550(void) {
  FTRACE(0x12899550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12899550 push ebp */
  push32((uint32_t)(EBP));
  /* 12899551 mov ebp, esp */
  EBP = (ESP);
  /* 12899553 push ecx */
  push32((uint32_t)(ECX));
  /* 12899554 mov eax, dword ptr [0x128bf88c] */
  EAX = (r32((uint32_t)(0x128bf88c)));
  /* 12899559 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1289955c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12899560 je 0x12899570 */
  if (C.zf) goto L_12899570;
  /* 12899562 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12899565 push ecx */
  push32((uint32_t)(ECX));
  /* 12899566 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12899569u);
  /* 12899569 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289956c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289956e jne 0x12899574 */
  if (!C.zf) goto L_12899574;
L_12899570:;
  /* 12899570 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12899572 jmp 0x12899579 */
  goto L_12899579;
L_12899574:;
  /* 12899574 mov eax, 1 */
  EAX = (0x1u);
L_12899579:;
  /* 12899579 mov esp, ebp */
  ESP = (EBP);
  /* 1289957b pop ebp */
  EBP = (pop32());
  /* 1289957c ret  */
  ESPCHK(0x12899550u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x12899580 (88 bytes, 40 insns) */
void f_12899580(void) {
  FTRACE(0x12899580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12899580 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 12899584 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12899588 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1289958a je 0x128995d3 */
  if (C.zf) goto L_128995d3;
  /* 1289958c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289958e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12899592 push edi */
  push32((uint32_t)(EDI));
  /* 12899593 mov edi, ecx */
  EDI = (ECX);
  /* 12899595 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12899598 jb 0x128995c7 */
  if (C.cf) goto L_128995c7;
  /* 1289959a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1289959c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1289959f je 0x128995a9 */
  if (C.zf) goto L_128995a9;
  /* 128995a1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_128995a3:;
  /* 128995a3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 128995a5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 128995a6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 128995a7 jne 0x128995a3 */
  if (!C.zf) goto L_128995a3;
L_128995a9:;
  /* 128995a9 mov ecx, eax */
  ECX = (EAX);
  /* 128995ab shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 128995ae add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128995b0 mov ecx, eax */
  ECX = (EAX);
  /* 128995b2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 128995b5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128995b7 mov ecx, edx */
  ECX = (EDX);
  /* 128995b9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 128995bc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 128995bf je 0x128995c7 */
  if (C.zf) goto L_128995c7;
  /* 128995c1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 128995c3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 128995c5 je 0x128995cd */
  if (C.zf) goto L_128995cd;
L_128995c7:;
  /* 128995c7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 128995c9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 128995ca dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 128995cb jne 0x128995c7 */
  if (!C.zf) goto L_128995c7;
L_128995cd:;
  /* 128995cd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 128995d1 pop edi */
  EDI = (pop32());
  /* 128995d2 ret  */
  ESPCHK(0x12899580u, _esp0);
  ESP += 4; return;
L_128995d3:;
  /* 128995d3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 128995d7 ret  */
  ESPCHK(0x12899580u, _esp0);
  ESP += 4; return;
}

/* FUN_100095e0 @ 0x128995e0 (23 bytes, 10 insns) */
void f_128995e0(void) {
  FTRACE(0x128995e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128995e0 push ebp */
  push32((uint32_t)(EBP));
  /* 128995e1 mov ebp, esp */
  EBP = (ESP);
  /* 128995e3 mov eax, dword ptr [0x128bf888] */
  EAX = (r32((uint32_t)(0x128bf888)));
  /* 128995e8 push eax */
  push32((uint32_t)(EAX));
  /* 128995e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128995ec push ecx */
  push32((uint32_t)(ECX));
  /* 128995ed call 0x12899600 */
  push32(0x128995f2u); f_12899600();
  /* 128995f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128995f5 pop ebp */
  EBP = (pop32());
  /* 128995f6 ret  */
  ESPCHK(0x128995e0u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x12899600 (87 bytes, 34 insns) */
void f_12899600(void) {
  FTRACE(0x12899600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12899600 push ebp */
  push32((uint32_t)(EBP));
  /* 12899601 mov ebp, esp */
  EBP = (ESP);
  /* 12899603 push ecx */
  push32((uint32_t)(ECX));
  /* 12899604 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12899608 jbe 0x1289960e */
  if ((C.cf||C.zf)) goto L_1289960e;
  /* 1289960a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289960c jmp 0x12899653 */
  goto L_12899653;
L_1289960e:;
  /* 1289960e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12899612 ja 0x12899625 */
  if ((!C.cf&&!C.zf)) goto L_12899625;
  /* 12899614 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12899617 push eax */
  push32((uint32_t)(EAX));
  /* 12899618 call 0x12899660 */
  push32(0x1289961du); f_12899660();
  /* 1289961d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12899620 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12899623 jmp 0x1289962c */
  goto L_1289962c;
L_12899625:;
  /* 12899625 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1289962c:;
  /* 1289962c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12899630 jne 0x12899638 */
  if (!C.zf) goto L_12899638;
  /* 12899632 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12899636 jne 0x1289963d */
  if (!C.zf) goto L_1289963d;
L_12899638:;
  /* 12899638 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289963b jmp 0x12899653 */
  goto L_12899653;
L_1289963d:;
  /* 1289963d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12899640 push ecx */
  push32((uint32_t)(ECX));
  /* 12899641 call 0x12899550 */
  push32(0x12899646u); f_12899550();
  /* 12899646 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12899649 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289964b jne 0x12899651 */
  if (!C.zf) goto L_12899651;
  /* 1289964d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289964f jmp 0x12899653 */
  goto L_12899653;
L_12899651:;
  /* 12899651 jmp 0x1289960e */
  goto L_1289960e;
L_12899653:;
  /* 12899653 mov esp, ebp */
  ESP = (EBP);
  /* 12899655 pop ebp */
  EBP = (pop32());
  /* 12899656 ret  */
  ESPCHK(0x12899600u, _esp0);
  ESP += 4; return;
}

/* FUN_10009660 @ 0x12899660 (109 bytes, 37 insns) */
void f_12899660(void) {
  FTRACE(0x12899660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12899660 push ebp */
  push32((uint32_t)(EBP));
  /* 12899661 mov ebp, esp */
  EBP = (ESP);
  /* 12899663 push ecx */
  push32((uint32_t)(ECX));
  /* 12899664 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12899667 cmp eax, dword ptr [0x128be154] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x128be154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289966d ja 0x1289969d */
  if ((!C.cf&&!C.zf)) goto L_1289969d;
  /* 1289966f push 9 */
  push32((uint32_t)(0x9u));
  /* 12899671 call 0x12899210 */
  push32(0x12899676u); f_12899210();
  /* 12899676 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12899679 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289967c push ecx */
  push32((uint32_t)(ECX));
  /* 1289967d call 0x1289a1a0 */
  push32(0x12899682u); f_1289a1a0();
  /* 12899682 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12899685 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12899688 push 9 */
  push32((uint32_t)(0x9u));
  /* 1289968a call 0x128992b0 */
  push32(0x1289968fu); f_128992b0();
  /* 1289968f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12899692 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12899696 je 0x1289969d */
  if (C.zf) goto L_1289969d;
  /* 12899698 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289969b jmp 0x128996c9 */
  goto L_128996c9;
L_1289969d:;
  /* 1289969d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128996a1 jne 0x128996aa */
  if (!C.zf) goto L_128996aa;
  /* 128996a3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_128996aa:;
  /* 128996aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128996ad add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128996b0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 128996b3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 128996b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128996b9 push eax */
  push32((uint32_t)(EAX));
  /* 128996ba push 0 */
  push32((uint32_t)(0x0u));
  /* 128996bc mov ecx, dword ptr [0x128c1044] */
  ECX = (r32((uint32_t)(0x128c1044)));
  /* 128996c2 push ecx */
  push32((uint32_t)(ECX));
  /* 128996c3 call dword ptr [0x128c22b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22b4))), 0x128996c9u);
L_128996c9:;
  /* 128996c9 mov esp, ebp */
  ESP = (EBP);
  /* 128996cb pop ebp */
  EBP = (pop32());
  /* 128996cc ret  */
  ESPCHK(0x12899660u, _esp0);
  ESP += 4; return;
}

/* FUN_100096d0 @ 0x128996d0 (10 bytes, 5 insns) */
void f_128996d0(void) {
  FTRACE(0x128996d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128996d0 push ebp */
  push32((uint32_t)(EBP));
  /* 128996d1 mov ebp, esp */
  EBP = (ESP);
  /* 128996d3 mov eax, 1 */
  EAX = (0x1u);
  /* 128996d8 pop ebp */
  EBP = (pop32());
  /* 128996d9 ret  */
  ESPCHK(0x128996d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100096e0 @ 0x128996e0 (173 bytes, 59 insns) */
void f_128996e0(void) {
  FTRACE(0x128996e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128996e0 push ebp */
  push32((uint32_t)(EBP));
  /* 128996e1 mov ebp, esp */
  EBP = (ESP);
  /* 128996e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 128996e6 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128996ea jbe 0x128996f3 */
  if ((C.cf||C.zf)) goto L_128996f3;
  /* 128996ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128996ee jmp 0x12899789 */
  goto L_12899789;
L_128996f3:;
  /* 128996f3 push 9 */
  push32((uint32_t)(0x9u));
  /* 128996f5 call 0x12899210 */
  push32(0x128996fau); f_12899210();
  /* 128996fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128996fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12899700 push eax */
  push32((uint32_t)(EAX));
  /* 12899701 call 0x12899b10 */
  push32(0x12899706u); f_12899b10();
  /* 12899706 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12899709 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1289970c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12899710 je 0x12899751 */
  if (C.zf) goto L_12899751;
  /* 12899712 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12899719 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289971c cmp ecx, dword ptr [0x128be154] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x128be154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12899722 ja 0x12899742 */
  if ((!C.cf&&!C.zf)) goto L_12899742;
  /* 12899724 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12899727 push edx */
  push32((uint32_t)(EDX));
  /* 12899728 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289972b push eax */
  push32((uint32_t)(EAX));
  /* 1289972c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289972f push ecx */
  push32((uint32_t)(ECX));
  /* 12899730 call 0x1289a9e0 */
  push32(0x12899735u); f_1289a9e0();
  /* 12899735 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12899738 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289973a je 0x12899742 */
  if (C.zf) goto L_12899742;
  /* 1289973c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289973f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12899742:;
  /* 12899742 push 9 */
  push32((uint32_t)(0x9u));
  /* 12899744 call 0x128992b0 */
  push32(0x12899749u); f_128992b0();
  /* 12899749 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289974c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289974f jmp 0x12899789 */
  goto L_12899789;
L_12899751:;
  /* 12899751 push 9 */
  push32((uint32_t)(0x9u));
  /* 12899753 call 0x128992b0 */
  push32(0x12899758u); f_128992b0();
  /* 12899758 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289975b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289975f jne 0x12899768 */
  if (!C.zf) goto L_12899768;
  /* 12899761 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12899768:;
  /* 12899768 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289976b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289976e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 12899770 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12899773 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12899776 push ecx */
  push32((uint32_t)(ECX));
  /* 12899777 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289977a push edx */
  push32((uint32_t)(EDX));
  /* 1289977b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1289977d mov eax, dword ptr [0x128c1044] */
  EAX = (r32((uint32_t)(0x128c1044)));
  /* 12899782 push eax */
  push32((uint32_t)(EAX));
  /* 12899783 call dword ptr [0x128c22b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22b8))), 0x12899789u);
L_12899789:;
  /* 12899789 mov esp, ebp */
  ESP = (EBP);
  /* 1289978b pop ebp */
  EBP = (pop32());
  /* 1289978c ret  */
  ESPCHK(0x128996e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009790 @ 0x12899790 (490 bytes, 165 insns) */
void f_12899790(void) {
  FTRACE(0x12899790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12899790 push ebp */
  push32((uint32_t)(EBP));
  /* 12899791 mov ebp, esp */
  EBP = (ESP);
  /* 12899793 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12899796 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289979a jne 0x128997ad */
  if (!C.zf) goto L_128997ad;
  /* 1289979c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289979f push eax */
  push32((uint32_t)(EAX));
  /* 128997a0 call 0x128995e0 */
  push32(0x128997a5u); f_128995e0();
  /* 128997a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128997a8 jmp 0x12899976 */
  goto L_12899976;
L_128997ad:;
  /* 128997ad cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128997b1 jne 0x128997c6 */
  if (!C.zf) goto L_128997c6;
  /* 128997b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128997b6 push ecx */
  push32((uint32_t)(ECX));
  /* 128997b7 call 0x12899980 */
  push32(0x128997bcu); f_12899980();
  /* 128997bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128997bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128997c1 jmp 0x12899976 */
  goto L_12899976;
L_128997c6:;
  /* 128997c6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 128997cd cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128997d1 ja 0x12899949 */
  if ((!C.cf&&!C.zf)) goto L_12899949;
  /* 128997d7 push 9 */
  push32((uint32_t)(0x9u));
  /* 128997d9 call 0x12899210 */
  push32(0x128997deu); f_12899210();
  /* 128997de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128997e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128997e4 push edx */
  push32((uint32_t)(EDX));
  /* 128997e5 call 0x12899b10 */
  push32(0x128997eau); f_12899b10();
  /* 128997ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128997ed mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 128997f0 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128997f4 je 0x1289990c */
  if (C.zf) goto L_1289990c;
  /* 128997fa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 128997fd cmp eax, dword ptr [0x128be154] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x128be154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12899803 ja 0x12899880 */
  if ((!C.cf&&!C.zf)) goto L_12899880;
  /* 12899805 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12899808 push ecx */
  push32((uint32_t)(ECX));
  /* 12899809 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289980c push edx */
  push32((uint32_t)(EDX));
  /* 1289980d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12899810 push eax */
  push32((uint32_t)(EAX));
  /* 12899811 call 0x1289a9e0 */
  push32(0x12899816u); f_1289a9e0();
  /* 12899816 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12899819 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289981b je 0x12899825 */
  if (C.zf) goto L_12899825;
  /* 1289981d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12899820 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12899823 jmp 0x12899880 */
  goto L_12899880;
L_12899825:;
  /* 12899825 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12899828 push edx */
  push32((uint32_t)(EDX));
  /* 12899829 call 0x1289a1a0 */
  push32(0x1289982eu); f_1289a1a0();
  /* 1289982e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12899831 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12899834 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12899838 je 0x12899880 */
  if (C.zf) goto L_12899880;
  /* 1289983a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289983d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 12899840 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12899843 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12899846 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12899849 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289984c jae 0x12899856 */
  if (!C.cf) goto L_12899856;
  /* 1289984e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12899851 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12899854 jmp 0x1289985c */
  goto L_1289985c;
L_12899856:;
  /* 12899856 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12899859 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1289985c:;
  /* 1289985c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289985f push edx */
  push32((uint32_t)(EDX));
  /* 12899860 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12899863 push eax */
  push32((uint32_t)(EAX));
  /* 12899864 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12899867 push ecx */
  push32((uint32_t)(ECX));
  /* 12899868 call 0x1289bff0 */
  push32(0x1289986du); f_1289bff0();
  /* 1289986d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12899870 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12899873 push edx */
  push32((uint32_t)(EDX));
  /* 12899874 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12899877 push eax */
  push32((uint32_t)(EAX));
  /* 12899878 call 0x12899bd0 */
  push32(0x1289987du); f_12899bd0();
  /* 1289987d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12899880:;
  /* 12899880 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12899884 jne 0x12899900 */
  if (!C.zf) goto L_12899900;
  /* 12899886 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289988a jne 0x12899893 */
  if (!C.zf) goto L_12899893;
  /* 1289988c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12899893:;
  /* 12899893 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12899896 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12899899 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 1289989c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1289989f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 128998a2 push edx */
  push32((uint32_t)(EDX));
  /* 128998a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 128998a5 mov eax, dword ptr [0x128c1044] */
  EAX = (r32((uint32_t)(0x128c1044)));
  /* 128998aa push eax */
  push32((uint32_t)(EAX));
  /* 128998ab call dword ptr [0x128c22b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22b4))), 0x128998b1u);
  /* 128998b1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 128998b4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128998b8 je 0x12899900 */
  if (C.zf) goto L_12899900;
  /* 128998ba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128998bd mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 128998c0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128998c3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 128998c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128998c9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128998cc jae 0x128998d6 */
  if (!C.cf) goto L_128998d6;
  /* 128998ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128998d1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 128998d4 jmp 0x128998dc */
  goto L_128998dc;
L_128998d6:;
  /* 128998d6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 128998d9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_128998dc:;
  /* 128998dc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 128998df push eax */
  push32((uint32_t)(EAX));
  /* 128998e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128998e3 push ecx */
  push32((uint32_t)(ECX));
  /* 128998e4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 128998e7 push edx */
  push32((uint32_t)(EDX));
  /* 128998e8 call 0x1289bff0 */
  push32(0x128998edu); f_1289bff0();
  /* 128998ed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128998f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128998f3 push eax */
  push32((uint32_t)(EAX));
  /* 128998f4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128998f7 push ecx */
  push32((uint32_t)(ECX));
  /* 128998f8 call 0x12899bd0 */
  push32(0x128998fdu); f_12899bd0();
  /* 128998fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12899900:;
  /* 12899900 push 9 */
  push32((uint32_t)(0x9u));
  /* 12899902 call 0x128992b0 */
  push32(0x12899907u); f_128992b0();
  /* 12899907 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289990a jmp 0x12899949 */
  goto L_12899949;
L_1289990c:;
  /* 1289990c push 9 */
  push32((uint32_t)(0x9u));
  /* 1289990e call 0x128992b0 */
  push32(0x12899913u); f_128992b0();
  /* 12899913 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12899916 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289991a jne 0x12899923 */
  if (!C.zf) goto L_12899923;
  /* 1289991c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12899923:;
  /* 12899923 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12899926 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12899929 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1289992c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1289992f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12899932 push eax */
  push32((uint32_t)(EAX));
  /* 12899933 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12899936 push ecx */
  push32((uint32_t)(ECX));
  /* 12899937 push 0 */
  push32((uint32_t)(0x0u));
  /* 12899939 mov edx, dword ptr [0x128c1044] */
  EDX = (r32((uint32_t)(0x128c1044)));
  /* 1289993f push edx */
  push32((uint32_t)(EDX));
  /* 12899940 call dword ptr [0x128c22b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22b8))), 0x12899946u);
  /* 12899946 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12899949:;
  /* 12899949 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289994d jne 0x12899958 */
  if (!C.zf) goto L_12899958;
  /* 1289994f cmp dword ptr [0x128bf888], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf888))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12899956 jne 0x1289995d */
  if (!C.zf) goto L_1289995d;
L_12899958:;
  /* 12899958 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289995b jmp 0x12899976 */
  goto L_12899976;
L_1289995d:;
  /* 1289995d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12899960 push eax */
  push32((uint32_t)(EAX));
  /* 12899961 call 0x12899550 */
  push32(0x12899966u); f_12899550();
  /* 12899966 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12899969 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289996b jne 0x12899971 */
  if (!C.zf) goto L_12899971;
  /* 1289996d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289996f jmp 0x12899976 */
  goto L_12899976;
L_12899971:;
  /* 12899971 jmp 0x128997c6 */
  goto L_128997c6;
L_12899976:;
  /* 12899976 mov esp, ebp */
  ESP = (EBP);
  /* 12899978 pop ebp */
  EBP = (pop32());
  /* 12899979 ret  */
  ESPCHK(0x12899790u, _esp0);
  ESP += 4; return;
}

/* FUN_10009980 @ 0x12899980 (104 bytes, 38 insns) */
void f_12899980(void) {
  FTRACE(0x12899980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12899980 push ebp */
  push32((uint32_t)(EBP));
  /* 12899981 mov ebp, esp */
  EBP = (ESP);
  /* 12899983 push ecx */
  push32((uint32_t)(ECX));
  /* 12899984 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12899988 jne 0x1289998c */
  if (!C.zf) goto L_1289998c;
  /* 1289998a jmp 0x128999e4 */
  goto L_128999e4;
L_1289998c:;
  /* 1289998c push 9 */
  push32((uint32_t)(0x9u));
  /* 1289998e call 0x12899210 */
  push32(0x12899993u); f_12899210();
  /* 12899993 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12899996 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12899999 push eax */
  push32((uint32_t)(EAX));
  /* 1289999a call 0x12899b10 */
  push32(0x1289999fu); f_12899b10();
  /* 1289999f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128999a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 128999a5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128999a9 je 0x128999c7 */
  if (C.zf) goto L_128999c7;
  /* 128999ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128999ae push ecx */
  push32((uint32_t)(ECX));
  /* 128999af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128999b2 push edx */
  push32((uint32_t)(EDX));
  /* 128999b3 call 0x12899bd0 */
  push32(0x128999b8u); f_12899bd0();
  /* 128999b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128999bb push 9 */
  push32((uint32_t)(0x9u));
  /* 128999bd call 0x128992b0 */
  push32(0x128999c2u); f_128992b0();
  /* 128999c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128999c5 jmp 0x128999e4 */
  goto L_128999e4;
L_128999c7:;
  /* 128999c7 push 9 */
  push32((uint32_t)(0x9u));
  /* 128999c9 call 0x128992b0 */
  push32(0x128999ceu); f_128992b0();
  /* 128999ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128999d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128999d4 push eax */
  push32((uint32_t)(EAX));
  /* 128999d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 128999d7 mov ecx, dword ptr [0x128c1044] */
  ECX = (r32((uint32_t)(0x128c1044)));
  /* 128999dd push ecx */
  push32((uint32_t)(ECX));
  /* 128999de call dword ptr [0x128c2200] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2200))), 0x128999e4u);
L_128999e4:;
  /* 128999e4 mov esp, ebp */
  ESP = (EBP);
  /* 128999e6 pop ebp */
  EBP = (pop32());
  /* 128999e7 ret  */
  ESPCHK(0x12899980u, _esp0);
  ESP += 4; return;
}

/* FUN_100099f0 @ 0x128999f0 (116 bytes, 34 insns) */
void f_128999f0(void) {
  FTRACE(0x128999f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128999f0 push ebp */
  push32((uint32_t)(EBP));
  /* 128999f1 mov ebp, esp */
  EBP = (ESP);
  /* 128999f3 push ecx */
  push32((uint32_t)(ECX));
  /* 128999f4 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 128999fb push 9 */
  push32((uint32_t)(0x9u));
  /* 128999fd call 0x12899210 */
  push32(0x12899a02u); f_12899210();
  /* 12899a02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12899a05 call 0x1289b100 */
  push32(0x12899a0au); f_1289b100();
  /* 12899a0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12899a0c jge 0x12899a15 */
  if ((C.sf==C.of)) goto L_12899a15;
  /* 12899a0e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_12899a15:;
  /* 12899a15 push 9 */
  push32((uint32_t)(0x9u));
  /* 12899a17 call 0x128992b0 */
  push32(0x12899a1cu); f_128992b0();
  /* 12899a1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12899a1f push 0 */
  push32((uint32_t)(0x0u));
  /* 12899a21 push 0 */
  push32((uint32_t)(0x0u));
  /* 12899a23 mov eax, dword ptr [0x128c1044] */
  EAX = (r32((uint32_t)(0x128c1044)));
  /* 12899a28 push eax */
  push32((uint32_t)(EAX));
  /* 12899a29 call dword ptr [0x128c2270] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2270))), 0x12899a2fu);
  /* 12899a2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12899a31 jne 0x12899a5d */
  if (!C.zf) goto L_12899a5d;
  /* 12899a33 call dword ptr [0x128c2250] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2250))), 0x12899a39u);
  /* 12899a39 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12899a3c jne 0x12899a56 */
  if (!C.zf) goto L_12899a56;
  /* 12899a3e call 0x1289c3e0 */
  push32(0x12899a43u); f_1289c3e0();
  /* 12899a43 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 12899a49 call 0x1289c3d0 */
  push32(0x12899a4eu); f_1289c3d0();
  /* 12899a4e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 12899a54 jmp 0x12899a5d */
  goto L_12899a5d;
L_12899a56:;
  /* 12899a56 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_12899a5d:;
  /* 12899a5d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12899a60 mov esp, ebp */
  ESP = (EBP);
  /* 12899a62 pop ebp */
  EBP = (pop32());
  /* 12899a63 ret  */
  ESPCHK(0x128999f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009a70 @ 0x12899a70 (10 bytes, 5 insns) */
void f_12899a70(void) {
  FTRACE(0x12899a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12899a70 push ebp */
  push32((uint32_t)(EBP));
  /* 12899a71 mov ebp, esp */
  EBP = (ESP);
  /* 12899a73 call 0x128999f0 */
  push32(0x12899a78u); f_128999f0();
  /* 12899a78 pop ebp */
  EBP = (pop32());
  /* 12899a79 ret  */
  ESPCHK(0x12899a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10009a80 @ 0x12899a80 (10 bytes, 5 insns) */
void f_12899a80(void) {
  FTRACE(0x12899a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12899a80 push ebp */
  push32((uint32_t)(EBP));
  /* 12899a81 mov ebp, esp */
  EBP = (ESP);
  /* 12899a83 mov eax, dword ptr [0x128be154] */
  EAX = (r32((uint32_t)(0x128be154)));
  /* 12899a88 pop ebp */
  EBP = (pop32());
  /* 12899a89 ret  */
  ESPCHK(0x12899a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10009a90 @ 0x12899a90 (31 bytes, 11 insns) */
void f_12899a90(void) {
  FTRACE(0x12899a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12899a90 push ebp */
  push32((uint32_t)(EBP));
  /* 12899a91 mov ebp, esp */
  EBP = (ESP);
  /* 12899a93 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12899a9a jbe 0x12899aa0 */
  if ((C.cf||C.zf)) goto L_12899aa0;
  /* 12899a9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12899a9e jmp 0x12899aad */
  goto L_12899aad;
L_12899aa0:;
  /* 12899aa0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12899aa3 mov dword ptr [0x128be154], eax */
  w32((uint32_t)(0x128be154), (EAX));
  /* 12899aa8 mov eax, 1 */
  EAX = (0x1u);
L_12899aad:;
  /* 12899aad pop ebp */
  EBP = (pop32());
  /* 12899aae ret  */
  ESPCHK(0x12899a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ab0 @ 0x12899ab0 (89 bytes, 20 insns) */
void f_12899ab0(void) {
  FTRACE(0x12899ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12899ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 12899ab1 mov ebp, esp */
  EBP = (ESP);
  /* 12899ab3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 12899ab8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12899aba mov eax, dword ptr [0x128c1044] */
  EAX = (r32((uint32_t)(0x128c1044)));
  /* 12899abf push eax */
  push32((uint32_t)(EAX));
  /* 12899ac0 call dword ptr [0x128c22b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22b4))), 0x12899ac6u);
  /* 12899ac6 mov dword ptr [0x128bfce8], eax */
  w32((uint32_t)(0x128bfce8), (EAX));
  /* 12899acb cmp dword ptr [0x128bfce8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bfce8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12899ad2 jne 0x12899ad8 */
  if (!C.zf) goto L_12899ad8;
  /* 12899ad4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12899ad6 jmp 0x12899b07 */
  goto L_12899b07;
L_12899ad8:;
  /* 12899ad8 mov ecx, dword ptr [0x128bfce8] */
  ECX = (r32((uint32_t)(0x128bfce8)));
  /* 12899ade mov dword ptr [0x128bfcdc], ecx */
  w32((uint32_t)(0x128bfcdc), (ECX));
  /* 12899ae4 mov dword ptr [0x128bfce0], 0 */
  w32((uint32_t)(0x128bfce0), (0x0u));
  /* 12899aee mov dword ptr [0x128bfce4], 0 */
  w32((uint32_t)(0x128bfce4), (0x0u));
  /* 12899af8 mov dword ptr [0x128bfcc8], 0x10 */
  w32((uint32_t)(0x128bfcc8), (0x10u));
  /* 12899b02 mov eax, 1 */
  EAX = (0x1u);
L_12899b07:;
  /* 12899b07 pop ebp */
  EBP = (pop32());
  /* 12899b08 ret  */
  ESPCHK(0x12899ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b10 @ 0x12899b10 (85 bytes, 29 insns) */
void f_12899b10(void) {
  FTRACE(0x12899b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12899b10 push ebp */
  push32((uint32_t)(EBP));
  /* 12899b11 mov ebp, esp */
  EBP = (ESP);
  /* 12899b13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12899b16 mov eax, dword ptr [0x128bfce4] */
  EAX = (r32((uint32_t)(0x128bfce4)));
  /* 12899b1b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12899b1e mov ecx, dword ptr [0x128bfce8] */
  ECX = (r32((uint32_t)(0x128bfce8)));
  /* 12899b24 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12899b26 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12899b29 mov edx, dword ptr [0x128bfce8] */
  EDX = (r32((uint32_t)(0x128bfce8)));
  /* 12899b2f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12899b32:;
  /* 12899b32 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12899b35 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12899b38 jae 0x12899b5f */
  if (!C.cf) goto L_12899b5f;
  /* 12899b3a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12899b3d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12899b40 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12899b43 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12899b46 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12899b4d jae 0x12899b54 */
  if (!C.cf) goto L_12899b54;
  /* 12899b4f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12899b52 jmp 0x12899b61 */
  goto L_12899b61;
L_12899b54:;
  /* 12899b54 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12899b57 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12899b5a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12899b5d jmp 0x12899b32 */
  goto L_12899b32;
L_12899b5f:;
  /* 12899b5f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12899b61:;
  /* 12899b61 mov esp, ebp */
  ESP = (EBP);
  /* 12899b63 pop ebp */
  EBP = (pop32());
  /* 12899b64 ret  */
  ESPCHK(0x12899b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b70 @ 0x12899b70 (95 bytes, 33 insns) */
void f_12899b70(void) {
  FTRACE(0x12899b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12899b70 push ebp */
  push32((uint32_t)(EBP));
  /* 12899b71 mov ebp, esp */
  EBP = (ESP);
  /* 12899b73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12899b76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12899b79 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12899b7c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12899b7f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12899b82 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12899b85 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12899b88 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12899b8b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12899b90 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12899b93 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12899b95 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12899b98 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12899b9b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12899b9d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12899b9f jne 0x12899bc1 */
  if (!C.zf) goto L_12899bc1;
  /* 12899ba1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12899ba4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 12899ba7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12899ba9 jne 0x12899bc1 */
  if (!C.zf) goto L_12899bc1;
  /* 12899bab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12899bae and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 12899bb4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12899bb6 je 0x12899bc1 */
  if (C.zf) goto L_12899bc1;
  /* 12899bb8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 12899bbf jmp 0x12899bc8 */
  goto L_12899bc8;
L_12899bc1:;
  /* 12899bc1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12899bc8:;
  /* 12899bc8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12899bcb mov esp, ebp */
  ESP = (EBP);
  /* 12899bcd pop ebp */
  EBP = (pop32());
  /* 12899bce ret  */
  ESPCHK(0x12899b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10009bd0 @ 0x12899bd0 (1485 bytes, 453 insns) */
void f_12899bd0(void) {
  FTRACE(0x12899bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12899bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12899bd1 mov ebp, esp */
  EBP = (ESP);
  /* 12899bd3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12899bd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12899bd9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12899bdc mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 12899bdf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12899be2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12899be5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12899be8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12899beb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12899bee shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 12899bf1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12899bf4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12899bf7 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12899bfd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12899c00 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 12899c07 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12899c0a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12899c0d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12899c10 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12899c13 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12899c16 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12899c18 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12899c1b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12899c1e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12899c21 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12899c24 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 12899c27 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12899c2a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12899c2c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12899c2f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12899c32 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 12899c35 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12899c38 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12899c3b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12899c3e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12899c40 jne 0x12899d68 */
  if (!C.zf) goto L_12899d68;
  /* 12899c46 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12899c49 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12899c4c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12899c4f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12899c52 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12899c56 jbe 0x12899c5f */
  if ((C.cf||C.zf)) goto L_12899c5f;
  /* 12899c58 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12899c5f:;
  /* 12899c5f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12899c62 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12899c65 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12899c68 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12899c6b jne 0x12899d41 */
  if (!C.zf) goto L_12899d41;
  /* 12899c71 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12899c75 jae 0x12899cd6 */
  if (!C.cf) goto L_12899cd6;
  /* 12899c77 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12899c7c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12899c7f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12899c81 not eax */
  EAX = (~(EAX));
  /* 12899c83 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12899c86 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12899c89 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12899c8d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12899c8f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12899c92 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12899c95 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12899c99 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12899c9c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12899c9f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12899ca2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12899ca5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12899ca8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12899cab mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12899cae mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12899cb1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12899cb4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12899cb8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12899cba jne 0x12899cd4 */
  if (!C.zf) goto L_12899cd4;
  /* 12899cbc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12899cc1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12899cc4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12899cc6 not eax */
  EAX = (~(EAX));
  /* 12899cc8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12899ccb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12899ccd and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12899ccf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12899cd2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12899cd4:;
  /* 12899cd4 jmp 0x12899d41 */
  goto L_12899d41;
L_12899cd6:;
  /* 12899cd6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12899cd9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12899cdc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12899ce1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12899ce3 not edx */
  EDX = (~(EDX));
  /* 12899ce5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12899ce8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12899ceb mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12899cf2 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12899cf4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12899cf7 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12899cfa mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 12899d01 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12899d04 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12899d07 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12899d0a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12899d0d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12899d10 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12899d13 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12899d16 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12899d19 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12899d1c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12899d20 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12899d22 jne 0x12899d41 */
  if (!C.zf) goto L_12899d41;
  /* 12899d24 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12899d27 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12899d2a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12899d2f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12899d31 not edx */
  EDX = (~(EDX));
  /* 12899d33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12899d36 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12899d39 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12899d3b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12899d3e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12899d41:;
  /* 12899d41 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12899d44 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12899d47 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12899d4a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12899d4d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12899d50 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12899d53 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12899d56 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12899d59 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12899d5c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12899d5f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12899d62 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12899d65 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_12899d68:;
  /* 12899d68 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12899d6b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12899d6e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12899d71 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12899d74 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12899d78 jbe 0x12899d81 */
  if ((C.cf||C.zf)) goto L_12899d81;
  /* 12899d7a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_12899d81:;
  /* 12899d81 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12899d84 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12899d87 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12899d89 jne 0x12899ee5 */
  if (!C.zf) goto L_12899ee5;
  /* 12899d8f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12899d92 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12899d95 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 12899d98 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12899d9b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12899d9e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12899da1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12899da4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12899da8 jbe 0x12899db1 */
  if ((C.cf||C.zf)) goto L_12899db1;
  /* 12899daa mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_12899db1:;
  /* 12899db1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12899db4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12899db7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12899dba mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12899dbd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12899dc0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12899dc3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12899dc6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12899dca jbe 0x12899dd3 */
  if ((C.cf||C.zf)) goto L_12899dd3;
  /* 12899dcc mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_12899dd3:;
  /* 12899dd3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12899dd6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12899dd9 je 0x12899edf */
  if (C.zf) goto L_12899edf;
  /* 12899ddf mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12899de2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12899de5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12899de8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12899deb jne 0x12899ec1 */
  if (!C.zf) goto L_12899ec1;
  /* 12899df1 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12899df5 jae 0x12899e56 */
  if (!C.cf) goto L_12899e56;
  /* 12899df7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12899dfc mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12899dff shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12899e01 not edx */
  EDX = (~(EDX));
  /* 12899e03 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12899e06 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12899e09 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12899e0d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12899e0f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12899e12 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12899e15 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12899e19 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12899e1c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12899e1f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12899e22 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12899e25 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12899e28 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12899e2b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12899e2e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12899e31 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12899e34 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12899e38 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12899e3a jne 0x12899e54 */
  if (!C.zf) goto L_12899e54;
  /* 12899e3c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12899e41 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12899e44 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12899e46 not edx */
  EDX = (~(EDX));
  /* 12899e48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12899e4b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12899e4d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12899e4f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12899e52 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12899e54:;
  /* 12899e54 jmp 0x12899ec1 */
  goto L_12899ec1;
L_12899e56:;
  /* 12899e56 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12899e59 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12899e5c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12899e61 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12899e63 not eax */
  EAX = (~(EAX));
  /* 12899e65 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12899e68 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12899e6b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12899e72 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12899e74 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12899e77 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12899e7a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12899e81 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12899e84 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12899e87 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12899e8a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12899e8d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12899e90 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12899e93 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12899e96 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12899e99 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12899e9c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12899ea0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12899ea2 jne 0x12899ec1 */
  if (!C.zf) goto L_12899ec1;
  /* 12899ea4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12899ea7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12899eaa mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12899eaf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12899eb1 not eax */
  EAX = (~(EAX));
  /* 12899eb3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12899eb6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12899eb9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12899ebb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12899ebe mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12899ec1:;
  /* 12899ec1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12899ec4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12899ec7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12899eca mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12899ecd mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12899ed0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12899ed3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12899ed6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12899ed9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12899edc mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_12899edf:;
  /* 12899edf mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12899ee2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_12899ee5:;
  /* 12899ee5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12899ee8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12899eeb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12899eed jne 0x12899efb */
  if (!C.zf) goto L_12899efb;
  /* 12899eef mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12899ef2 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12899ef5 je 0x1289a00b */
  if (C.zf) goto L_1289a00b;
L_12899efb:;
  /* 12899efb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12899efe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12899f01 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 12899f04 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12899f07 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12899f0a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12899f0d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12899f10 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12899f13 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12899f16 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12899f19 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12899f1c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12899f1f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12899f22 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12899f25 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12899f28 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12899f2b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12899f2e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12899f31 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12899f34 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12899f37 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12899f3a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12899f3d jne 0x1289a00b */
  if (!C.zf) goto L_1289a00b;
  /* 12899f43 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12899f47 jae 0x12899fa4 */
  if (!C.cf) goto L_12899fa4;
  /* 12899f49 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12899f4c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12899f4f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12899f53 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12899f56 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12899f59 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12899f5c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12899f5f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12899f62 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12899f65 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12899f68 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12899f6a jne 0x12899f82 */
  if (!C.zf) goto L_12899f82;
  /* 12899f6c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12899f71 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12899f74 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12899f76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12899f79 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12899f7b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12899f7d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12899f80 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12899f82:;
  /* 12899f82 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12899f87 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12899f8a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12899f8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12899f8f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12899f92 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12899f96 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12899f98 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12899f9b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12899f9e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12899fa2 jmp 0x1289a00b */
  goto L_1289a00b;
L_12899fa4:;
  /* 12899fa4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12899fa7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12899faa movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12899fae mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12899fb1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12899fb4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12899fb7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12899fba mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12899fbd add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12899fc0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12899fc3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12899fc5 jne 0x12899fe2 */
  if (!C.zf) goto L_12899fe2;
  /* 12899fc7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12899fca sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12899fcd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12899fd2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12899fd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12899fd7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12899fda or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12899fdc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12899fdf mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12899fe2:;
  /* 12899fe2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12899fe5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12899fe8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12899fed shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12899fef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12899ff2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12899ff5 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12899ffc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12899ffe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289a001 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1289a004 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1289a00b:;
  /* 1289a00b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1289a00e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289a011 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1289a013 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1289a016 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289a019 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289a01c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 1289a01f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289a022 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1289a024 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289a027 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289a02a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1289a02c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289a02f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289a032 jne 0x1289a199 */
  if (!C.zf) goto L_1289a199;
  /* 1289a038 cmp dword ptr [0x128bfce0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bfce0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289a03f je 0x1289a188 */
  if (C.zf) goto L_1289a188;
  /* 1289a045 mov eax, dword ptr [0x128bfcd8] */
  EAX = (r32((uint32_t)(0x128bfcd8)));
  /* 1289a04a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1289a04d mov ecx, dword ptr [0x128bfce0] */
  ECX = (r32((uint32_t)(0x128bfce0)));
  /* 1289a053 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1289a056 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289a058 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1289a05b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1289a060 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1289a065 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289a068 push eax */
  push32((uint32_t)(EAX));
  /* 1289a069 call dword ptr [0x128c2294] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2294))), 0x1289a06fu);
  /* 1289a06f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1289a074 mov ecx, dword ptr [0x128bfcd8] */
  ECX = (r32((uint32_t)(0x128bfcd8)));
  /* 1289a07a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1289a07c mov eax, dword ptr [0x128bfce0] */
  EAX = (r32((uint32_t)(0x128bfce0)));
  /* 1289a081 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1289a084 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1289a086 mov edx, dword ptr [0x128bfce0] */
  EDX = (r32((uint32_t)(0x128bfce0)));
  /* 1289a08c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1289a08f mov eax, dword ptr [0x128bfce0] */
  EAX = (r32((uint32_t)(0x128bfce0)));
  /* 1289a094 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1289a097 mov edx, dword ptr [0x128bfcd8] */
  EDX = (r32((uint32_t)(0x128bfcd8)));
  /* 1289a09d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1289a0a8 mov eax, dword ptr [0x128bfce0] */
  EAX = (r32((uint32_t)(0x128bfce0)));
  /* 1289a0ad mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1289a0b0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1289a0b3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1289a0b6 mov eax, dword ptr [0x128bfce0] */
  EAX = (r32((uint32_t)(0x128bfce0)));
  /* 1289a0bb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1289a0be mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1289a0c1 mov edx, dword ptr [0x128bfce0] */
  EDX = (r32((uint32_t)(0x128bfce0)));
  /* 1289a0c7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1289a0ca movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1289a0ce test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1289a0d0 jne 0x1289a0e6 */
  if (!C.zf) goto L_1289a0e6;
  /* 1289a0d2 mov edx, dword ptr [0x128bfce0] */
  EDX = (r32((uint32_t)(0x128bfce0)));
  /* 1289a0d8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1289a0db and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1289a0dd mov ecx, dword ptr [0x128bfce0] */
  ECX = (r32((uint32_t)(0x128bfce0)));
  /* 1289a0e3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1289a0e6:;
  /* 1289a0e6 mov edx, dword ptr [0x128bfce0] */
  EDX = (r32((uint32_t)(0x128bfce0)));
  /* 1289a0ec cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289a0f0 jne 0x1289a188 */
  if (!C.zf) goto L_1289a188;
  /* 1289a0f6 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1289a0fb push 0 */
  push32((uint32_t)(0x0u));
  /* 1289a0fd mov eax, dword ptr [0x128bfce0] */
  EAX = (r32((uint32_t)(0x128bfce0)));
  /* 1289a102 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1289a105 push ecx */
  push32((uint32_t)(ECX));
  /* 1289a106 call dword ptr [0x128c2294] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2294))), 0x1289a10cu);
  /* 1289a10c mov edx, dword ptr [0x128bfce0] */
  EDX = (r32((uint32_t)(0x128bfce0)));
  /* 1289a112 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1289a115 push eax */
  push32((uint32_t)(EAX));
  /* 1289a116 push 0 */
  push32((uint32_t)(0x0u));
  /* 1289a118 mov ecx, dword ptr [0x128c1044] */
  ECX = (r32((uint32_t)(0x128c1044)));
  /* 1289a11e push ecx */
  push32((uint32_t)(ECX));
  /* 1289a11f call dword ptr [0x128c2200] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2200))), 0x1289a125u);
  /* 1289a125 mov edx, dword ptr [0x128bfce4] */
  EDX = (r32((uint32_t)(0x128bfce4)));
  /* 1289a12b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1289a12e mov eax, dword ptr [0x128bfce8] */
  EAX = (r32((uint32_t)(0x128bfce8)));
  /* 1289a133 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289a135 mov ecx, dword ptr [0x128bfce0] */
  ECX = (r32((uint32_t)(0x128bfce0)));
  /* 1289a13b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289a13e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289a140 push eax */
  push32((uint32_t)(EAX));
  /* 1289a141 mov edx, dword ptr [0x128bfce0] */
  EDX = (r32((uint32_t)(0x128bfce0)));
  /* 1289a147 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289a14a push edx */
  push32((uint32_t)(EDX));
  /* 1289a14b mov eax, dword ptr [0x128bfce0] */
  EAX = (r32((uint32_t)(0x128bfce0)));
  /* 1289a150 push eax */
  push32((uint32_t)(EAX));
  /* 1289a151 call 0x1289d7b0 */
  push32(0x1289a156u); f_1289d7b0();
  /* 1289a156 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289a159 mov ecx, dword ptr [0x128bfce4] */
  ECX = (r32((uint32_t)(0x128bfce4)));
  /* 1289a15f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289a162 mov dword ptr [0x128bfce4], ecx */
  w32((uint32_t)(0x128bfce4), (ECX));
  /* 1289a168 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289a16b cmp edx, dword ptr [0x128bfce0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x128bfce0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289a171 jbe 0x1289a17c */
  if ((C.cf||C.zf)) goto L_1289a17c;
  /* 1289a173 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289a176 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289a179 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1289a17c:;
  /* 1289a17c mov ecx, dword ptr [0x128bfce8] */
  ECX = (r32((uint32_t)(0x128bfce8)));
  /* 1289a182 mov dword ptr [0x128bfcdc], ecx */
  w32((uint32_t)(0x128bfcdc), (ECX));
L_1289a188:;
  /* 1289a188 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289a18b mov dword ptr [0x128bfce0], edx */
  w32((uint32_t)(0x128bfce0), (EDX));
  /* 1289a191 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289a194 mov dword ptr [0x128bfcd8], eax */
  w32((uint32_t)(0x128bfcd8), (EAX));
L_1289a199:;
  /* 1289a199 mov esp, ebp */
  ESP = (EBP);
  /* 1289a19b pop ebp */
  EBP = (pop32());
  /* 1289a19c ret  */
  ESPCHK(0x12899bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1a0 @ 0x1289a1a0 (1334 bytes, 427 insns) */
void f_1289a1a0(void) {
  FTRACE(0x1289a1a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289a1a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1289a1a1 mov ebp, esp */
  EBP = (ESP);
  /* 1289a1a3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289a1a6 push esi */
  push32((uint32_t)(ESI));
  /* 1289a1a7 mov eax, dword ptr [0x128bfce4] */
  EAX = (r32((uint32_t)(0x128bfce4)));
  /* 1289a1ac imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1289a1af mov ecx, dword ptr [0x128bfce8] */
  ECX = (r32((uint32_t)(0x128bfce8)));
  /* 1289a1b5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289a1b7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1289a1ba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289a1bd add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289a1c0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1289a1c3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1289a1c6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1289a1c9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1289a1cc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289a1cf mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1289a1d2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289a1d6 jge 0x1289a1ec */
  if ((C.sf==C.of)) goto L_1289a1ec;
  /* 1289a1d8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1289a1db mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1289a1de shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1289a1e0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1289a1e3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 1289a1ea jmp 0x1289a201 */
  goto L_1289a201;
L_1289a1ec:;
  /* 1289a1ec mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1289a1f3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1289a1f6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289a1f9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1289a1fc shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1289a1fe mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_1289a201:;
  /* 1289a201 mov ecx, dword ptr [0x128bfcdc] */
  ECX = (r32((uint32_t)(0x128bfcdc)));
  /* 1289a207 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1289a20a:;
  /* 1289a20a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289a20d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289a210 jae 0x1289a236 */
  if (!C.cf) goto L_1289a236;
  /* 1289a212 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289a215 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1289a218 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 1289a21a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289a21d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1289a220 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 1289a223 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289a225 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1289a227 je 0x1289a22b */
  if (C.zf) goto L_1289a22b;
  /* 1289a229 jmp 0x1289a236 */
  goto L_1289a236;
L_1289a22b:;
  /* 1289a22b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289a22e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289a231 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1289a234 jmp 0x1289a20a */
  goto L_1289a20a;
L_1289a236:;
  /* 1289a236 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289a239 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289a23c jne 0x1289a31d */
  if (!C.zf) goto L_1289a31d;
  /* 1289a242 mov eax, dword ptr [0x128bfce8] */
  EAX = (r32((uint32_t)(0x128bfce8)));
  /* 1289a247 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1289a24a:;
  /* 1289a24a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289a24d cmp ecx, dword ptr [0x128bfcdc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x128bfcdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289a253 jae 0x1289a279 */
  if (!C.cf) goto L_1289a279;
  /* 1289a255 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289a258 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1289a25b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 1289a25d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289a260 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1289a263 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 1289a266 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1289a268 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289a26a je 0x1289a26e */
  if (C.zf) goto L_1289a26e;
  /* 1289a26c jmp 0x1289a279 */
  goto L_1289a279;
L_1289a26e:;
  /* 1289a26e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289a271 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289a274 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1289a277 jmp 0x1289a24a */
  goto L_1289a24a;
L_1289a279:;
  /* 1289a279 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289a27c cmp ecx, dword ptr [0x128bfcdc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x128bfcdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289a282 jne 0x1289a31d */
  if (!C.zf) goto L_1289a31d;
L_1289a288:;
  /* 1289a288 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289a28b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289a28e jae 0x1289a2a6 */
  if (!C.cf) goto L_1289a2a6;
  /* 1289a290 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289a293 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289a297 je 0x1289a29b */
  if (C.zf) goto L_1289a29b;
  /* 1289a299 jmp 0x1289a2a6 */
  goto L_1289a2a6;
L_1289a29b:;
  /* 1289a29b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289a29e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289a2a1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1289a2a4 jmp 0x1289a288 */
  goto L_1289a288;
L_1289a2a6:;
  /* 1289a2a6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289a2a9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289a2ac jne 0x1289a2f7 */
  if (!C.zf) goto L_1289a2f7;
  /* 1289a2ae mov eax, dword ptr [0x128bfce8] */
  EAX = (r32((uint32_t)(0x128bfce8)));
  /* 1289a2b3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1289a2b6:;
  /* 1289a2b6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289a2b9 cmp ecx, dword ptr [0x128bfcdc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x128bfcdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289a2bf jae 0x1289a2d7 */
  if (!C.cf) goto L_1289a2d7;
  /* 1289a2c1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289a2c4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289a2c8 je 0x1289a2cc */
  if (C.zf) goto L_1289a2cc;
  /* 1289a2ca jmp 0x1289a2d7 */
  goto L_1289a2d7;
L_1289a2cc:;
  /* 1289a2cc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289a2cf add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289a2d2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1289a2d5 jmp 0x1289a2b6 */
  goto L_1289a2b6;
L_1289a2d7:;
  /* 1289a2d7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289a2da cmp ecx, dword ptr [0x128bfcdc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x128bfcdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289a2e0 jne 0x1289a2f7 */
  if (!C.zf) goto L_1289a2f7;
  /* 1289a2e2 call 0x1289a6e0 */
  push32(0x1289a2e7u); f_1289a6e0();
  /* 1289a2e7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1289a2ea cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289a2ee jne 0x1289a2f7 */
  if (!C.zf) goto L_1289a2f7;
  /* 1289a2f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289a2f2 jmp 0x1289a6d1 */
  goto L_1289a6d1;
L_1289a2f7:;
  /* 1289a2f7 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289a2fa push edx */
  push32((uint32_t)(EDX));
  /* 1289a2fb call 0x1289a7f0 */
  push32(0x1289a300u); f_1289a7f0();
  /* 1289a300 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289a303 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289a306 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1289a309 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1289a30b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289a30e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1289a311 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289a314 jne 0x1289a31d */
  if (!C.zf) goto L_1289a31d;
  /* 1289a316 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289a318 jmp 0x1289a6d1 */
  goto L_1289a6d1;
L_1289a31d:;
  /* 1289a31d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289a320 mov dword ptr [0x128bfcdc], edx */
  w32((uint32_t)(0x128bfcdc), (EDX));
  /* 1289a326 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289a329 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1289a32c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 1289a32f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1289a332 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1289a334 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1289a337 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289a33b je 0x1289a360 */
  if (C.zf) goto L_1289a360;
  /* 1289a33d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289a340 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1289a343 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1289a346 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 1289a34a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289a34d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1289a350 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1289a353 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1289a35a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1289a35c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289a35e jne 0x1289a395 */
  if (!C.zf) goto L_1289a395;
L_1289a360:;
  /* 1289a360 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_1289a367:;
  /* 1289a367 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289a36a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1289a36d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1289a370 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1289a374 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289a377 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1289a37a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1289a37d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1289a384 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 1289a386 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1289a388 jne 0x1289a395 */
  if (!C.zf) goto L_1289a395;
  /* 1289a38a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289a38d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289a390 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1289a393 jmp 0x1289a367 */
  goto L_1289a367;
L_1289a395:;
  /* 1289a395 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289a398 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1289a39e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1289a3a1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1289a3a8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1289a3ab mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1289a3b2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289a3b5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1289a3b8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1289a3bb and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1289a3bf mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1289a3c2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289a3c6 jne 0x1289a3e2 */
  if (!C.zf) goto L_1289a3e2;
  /* 1289a3c8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 1289a3cf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289a3d2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1289a3d5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1289a3d8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 1289a3df mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_1289a3e2:;
  /* 1289a3e2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289a3e6 jl 0x1289a3fb */
  if ((C.sf!=C.of)) goto L_1289a3fb;
  /* 1289a3e8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1289a3eb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1289a3ed mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1289a3f0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1289a3f3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289a3f6 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1289a3f9 jmp 0x1289a3e2 */
  goto L_1289a3e2;
L_1289a3fb:;
  /* 1289a3fb mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1289a3fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289a401 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 1289a405 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1289a408 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289a40b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1289a40d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289a410 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1289a413 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289a416 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1289a419 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289a41c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1289a41f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289a423 jle 0x1289a42c */
  if ((C.zf||C.sf!=C.of)) goto L_1289a42c;
  /* 1289a425 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_1289a42c:;
  /* 1289a42c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1289a42f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289a432 je 0x1289a650 */
  if (C.zf) goto L_1289a650;
  /* 1289a438 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289a43b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289a43e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1289a441 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289a444 jne 0x1289a51a */
  if (!C.zf) goto L_1289a51a;
  /* 1289a44a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289a44e jge 0x1289a4af */
  if ((C.sf==C.of)) goto L_1289a4af;
  /* 1289a450 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1289a455 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1289a458 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1289a45a not eax */
  EAX = (~(EAX));
  /* 1289a45c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289a45f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1289a462 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1289a466 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289a468 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289a46b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1289a46e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1289a472 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1289a475 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289a478 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1289a47b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1289a47e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1289a481 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289a484 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1289a487 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1289a48a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289a48d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1289a491 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1289a493 jne 0x1289a4ad */
  if (!C.zf) goto L_1289a4ad;
  /* 1289a495 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1289a49a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1289a49d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1289a49f not eax */
  EAX = (~(EAX));
  /* 1289a4a1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289a4a4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1289a4a6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1289a4a8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289a4ab mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1289a4ad:;
  /* 1289a4ad jmp 0x1289a51a */
  goto L_1289a51a;
L_1289a4af:;
  /* 1289a4af mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1289a4b2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289a4b5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1289a4ba shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1289a4bc not edx */
  EDX = (~(EDX));
  /* 1289a4be mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289a4c1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1289a4c4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1289a4cb and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1289a4cd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289a4d0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1289a4d3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1289a4da mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1289a4dd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289a4e0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1289a4e3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1289a4e6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1289a4e9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289a4ec mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1289a4ef mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1289a4f2 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289a4f5 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1289a4f9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1289a4fb jne 0x1289a51a */
  if (!C.zf) goto L_1289a51a;
  /* 1289a4fd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1289a500 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289a503 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1289a508 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1289a50a not edx */
  EDX = (~(EDX));
  /* 1289a50c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289a50f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1289a512 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1289a514 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289a517 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1289a51a:;
  /* 1289a51a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289a51d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1289a520 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289a523 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1289a526 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1289a529 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289a52c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1289a52f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289a532 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1289a535 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1289a538 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289a53c je 0x1289a650 */
  if (C.zf) goto L_1289a650;
  /* 1289a542 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1289a545 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289a548 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1289a54b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1289a54e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289a551 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289a554 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1289a557 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1289a55a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289a55d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289a560 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1289a563 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289a566 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289a569 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1289a56c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289a56f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1289a572 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289a575 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1289a578 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289a57b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289a57e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1289a581 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289a584 jne 0x1289a650 */
  if (!C.zf) goto L_1289a650;
  /* 1289a58a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289a58e jge 0x1289a5ea */
  if ((C.sf==C.of)) goto L_1289a5ea;
  /* 1289a590 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1289a593 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289a596 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1289a59a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1289a59d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289a5a0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1289a5a3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1289a5a5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1289a5a8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289a5ab mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1289a5ae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1289a5b0 jne 0x1289a5c8 */
  if (!C.zf) goto L_1289a5c8;
  /* 1289a5b2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1289a5b7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1289a5ba shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1289a5bc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289a5bf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1289a5c1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1289a5c3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289a5c6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1289a5c8:;
  /* 1289a5c8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1289a5cd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1289a5d0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1289a5d2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289a5d5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1289a5d8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1289a5dc or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1289a5de mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289a5e1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1289a5e4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1289a5e8 jmp 0x1289a650 */
  goto L_1289a650;
L_1289a5ea:;
  /* 1289a5ea mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1289a5ed add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289a5f0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1289a5f4 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1289a5f7 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289a5fa mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1289a5fd add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1289a5ff mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1289a602 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289a605 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1289a608 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1289a60a jne 0x1289a627 */
  if (!C.zf) goto L_1289a627;
  /* 1289a60c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1289a60f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289a612 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1289a617 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1289a619 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289a61c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1289a61f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1289a621 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289a624 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1289a627:;
  /* 1289a627 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1289a62a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289a62d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1289a632 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1289a634 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289a637 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1289a63a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1289a641 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1289a643 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289a646 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1289a649 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1289a650:;
  /* 1289a650 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289a654 je 0x1289a66a */
  if (C.zf) goto L_1289a66a;
  /* 1289a656 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289a659 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289a65c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1289a65e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289a661 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289a664 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289a667 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1289a66a:;
  /* 1289a66a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289a66d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289a670 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1289a673 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1289a676 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289a679 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289a67c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1289a67e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1289a681 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289a684 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289a687 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289a68a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1289a68d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289a690 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1289a692 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289a695 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1289a697 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289a69a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289a69d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1289a69f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1289a6a1 jne 0x1289a6c3 */
  if (!C.zf) goto L_1289a6c3;
  /* 1289a6a3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289a6a6 cmp eax, dword ptr [0x128bfce0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x128bfce0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289a6ac jne 0x1289a6c3 */
  if (!C.zf) goto L_1289a6c3;
  /* 1289a6ae mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289a6b1 cmp ecx, dword ptr [0x128bfcd8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x128bfcd8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289a6b7 jne 0x1289a6c3 */
  if (!C.zf) goto L_1289a6c3;
  /* 1289a6b9 mov dword ptr [0x128bfce0], 0 */
  w32((uint32_t)(0x128bfce0), (0x0u));
L_1289a6c3:;
  /* 1289a6c3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1289a6c6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289a6c9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1289a6cb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289a6ce add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1289a6d1:;
  /* 1289a6d1 pop esi */
  ESI = (pop32());
  /* 1289a6d2 mov esp, ebp */
  ESP = (EBP);
  /* 1289a6d4 pop ebp */
  EBP = (pop32());
  /* 1289a6d5 ret  */
  ESPCHK(0x1289a1a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a6e0 @ 0x1289a6e0 (271 bytes, 78 insns) */
void f_1289a6e0(void) {
  FTRACE(0x1289a6e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289a6e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1289a6e1 mov ebp, esp */
  EBP = (ESP);
  /* 1289a6e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1289a6e4 mov eax, dword ptr [0x128bfce4] */
  EAX = (r32((uint32_t)(0x128bfce4)));
  /* 1289a6e9 cmp eax, dword ptr [0x128bfcc8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x128bfcc8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289a6ef jne 0x1289a73b */
  if (!C.zf) goto L_1289a73b;
  /* 1289a6f1 mov ecx, dword ptr [0x128bfcc8] */
  ECX = (r32((uint32_t)(0x128bfcc8)));
  /* 1289a6f7 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289a6fa imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1289a6fd push ecx */
  push32((uint32_t)(ECX));
  /* 1289a6fe mov edx, dword ptr [0x128bfce8] */
  EDX = (r32((uint32_t)(0x128bfce8)));
  /* 1289a704 push edx */
  push32((uint32_t)(EDX));
  /* 1289a705 push 0 */
  push32((uint32_t)(0x0u));
  /* 1289a707 mov eax, dword ptr [0x128c1044] */
  EAX = (r32((uint32_t)(0x128c1044)));
  /* 1289a70c push eax */
  push32((uint32_t)(EAX));
  /* 1289a70d call dword ptr [0x128c22b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22b8))), 0x1289a713u);
  /* 1289a713 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1289a716 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289a71a jne 0x1289a723 */
  if (!C.zf) goto L_1289a723;
  /* 1289a71c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289a71e jmp 0x1289a7eb */
  goto L_1289a7eb;
L_1289a723:;
  /* 1289a723 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289a726 mov dword ptr [0x128bfce8], ecx */
  w32((uint32_t)(0x128bfce8), (ECX));
  /* 1289a72c mov edx, dword ptr [0x128bfcc8] */
  EDX = (r32((uint32_t)(0x128bfcc8)));
  /* 1289a732 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289a735 mov dword ptr [0x128bfcc8], edx */
  w32((uint32_t)(0x128bfcc8), (EDX));
L_1289a73b:;
  /* 1289a73b mov eax, dword ptr [0x128bfce4] */
  EAX = (r32((uint32_t)(0x128bfce4)));
  /* 1289a740 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1289a743 mov ecx, dword ptr [0x128bfce8] */
  ECX = (r32((uint32_t)(0x128bfce8)));
  /* 1289a749 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289a74b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1289a74e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1289a753 push 8 */
  push32((uint32_t)(0x8u));
  /* 1289a755 mov edx, dword ptr [0x128c1044] */
  EDX = (r32((uint32_t)(0x128c1044)));
  /* 1289a75b push edx */
  push32((uint32_t)(EDX));
  /* 1289a75c call dword ptr [0x128c22b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22b4))), 0x1289a762u);
  /* 1289a762 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289a765 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 1289a768 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289a76b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289a76f jne 0x1289a775 */
  if (!C.zf) goto L_1289a775;
  /* 1289a771 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289a773 jmp 0x1289a7eb */
  goto L_1289a7eb;
L_1289a775:;
  /* 1289a775 push 4 */
  push32((uint32_t)(0x4u));
  /* 1289a777 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1289a77c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1289a781 push 0 */
  push32((uint32_t)(0x0u));
  /* 1289a783 call dword ptr [0x128c22bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22bc))), 0x1289a789u);
  /* 1289a789 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289a78c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1289a78f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289a792 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289a796 jne 0x1289a7b2 */
  if (!C.zf) goto L_1289a7b2;
  /* 1289a798 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289a79b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1289a79e push ecx */
  push32((uint32_t)(ECX));
  /* 1289a79f push 0 */
  push32((uint32_t)(0x0u));
  /* 1289a7a1 mov edx, dword ptr [0x128c1044] */
  EDX = (r32((uint32_t)(0x128c1044)));
  /* 1289a7a7 push edx */
  push32((uint32_t)(EDX));
  /* 1289a7a8 call dword ptr [0x128c2200] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2200))), 0x1289a7aeu);
  /* 1289a7ae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289a7b0 jmp 0x1289a7eb */
  goto L_1289a7eb;
L_1289a7b2:;
  /* 1289a7b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289a7b5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1289a7bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289a7be mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1289a7c5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289a7c8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 1289a7cf mov eax, dword ptr [0x128bfce4] */
  EAX = (r32((uint32_t)(0x128bfce4)));
  /* 1289a7d4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289a7d7 mov dword ptr [0x128bfce4], eax */
  w32((uint32_t)(0x128bfce4), (EAX));
  /* 1289a7dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289a7df mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1289a7e2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 1289a7e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1289a7eb:;
  /* 1289a7eb mov esp, ebp */
  ESP = (EBP);
  /* 1289a7ed pop ebp */
  EBP = (pop32());
  /* 1289a7ee ret  */
  ESPCHK(0x1289a6e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a7f0 @ 0x1289a7f0 (494 bytes, 149 insns) */
void f_1289a7f0(void) {
  FTRACE(0x1289a7f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289a7f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1289a7f1 mov ebp, esp */
  EBP = (ESP);
  /* 1289a7f3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289a7f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289a7f9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1289a7fc mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1289a7ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289a802 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1289a805 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1289a808 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_1289a80f:;
  /* 1289a80f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289a813 jl 0x1289a828 */
  if ((C.sf!=C.of)) goto L_1289a828;
  /* 1289a815 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289a818 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1289a81a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1289a81d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1289a820 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289a823 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1289a826 jmp 0x1289a80f */
  goto L_1289a80f;
L_1289a828:;
  /* 1289a828 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1289a82b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1289a831 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1289a834 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1289a83b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1289a83e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1289a845 jmp 0x1289a850 */
  goto L_1289a850;
L_1289a847:;
  /* 1289a847 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1289a84a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289a84d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1289a850:;
  /* 1289a850 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289a854 jge 0x1289a876 */
  if ((C.sf==C.of)) goto L_1289a876;
  /* 1289a856 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1289a859 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289a85c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 1289a85f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1289a862 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289a865 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289a868 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1289a86b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289a86e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289a871 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1289a874 jmp 0x1289a847 */
  goto L_1289a847;
L_1289a876:;
  /* 1289a876 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1289a879 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1289a87c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289a87f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1289a882 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289a884 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1289a887 push 4 */
  push32((uint32_t)(0x4u));
  /* 1289a889 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1289a88e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1289a893 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289a896 push edx */
  push32((uint32_t)(EDX));
  /* 1289a897 call dword ptr [0x128c22bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22bc))), 0x1289a89du);
  /* 1289a89d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289a89f jne 0x1289a8a9 */
  if (!C.zf) goto L_1289a8a9;
  /* 1289a8a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1289a8a4 jmp 0x1289a9da */
  goto L_1289a9da;
L_1289a8a9:;
  /* 1289a8a9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289a8ac add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289a8b1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1289a8b4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289a8b7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1289a8ba jmp 0x1289a8c8 */
  goto L_1289a8c8;
L_1289a8bc:;
  /* 1289a8bc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289a8bf add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289a8c5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1289a8c8:;
  /* 1289a8c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289a8cb cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289a8ce ja 0x1289a92d */
  if ((!C.cf&&!C.zf)) goto L_1289a92d;
  /* 1289a8d0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289a8d3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 1289a8da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289a8dd mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 1289a8e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289a8ea add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289a8ed mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1289a8f0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289a8f3 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1289a8f9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289a8fc add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289a902 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289a905 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1289a908 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289a90b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289a911 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289a914 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1289a917 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289a91a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289a91f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1289a922 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1289a925 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1289a92b jmp 0x1289a8bc */
  goto L_1289a8bc;
L_1289a92d:;
  /* 1289a92d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289a930 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289a936 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1289a939 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289a93c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289a93f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1289a942 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1289a945 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1289a948 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1289a94b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1289a94e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289a951 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1289a954 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1289a957 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1289a95a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289a95d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1289a960 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1289a963 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1289a966 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1289a969 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1289a96c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289a96f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1289a972 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1289a975 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1289a978 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1289a97b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 1289a983 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1289a986 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1289a989 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 1289a994 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1289a997 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 1289a99b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1289a99e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 1289a9a1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1289a9a4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1289a9a7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 1289a9aa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1289a9ac jne 0x1289a9bd */
  if (!C.zf) goto L_1289a9bd;
  /* 1289a9ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289a9b1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1289a9b4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1289a9b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289a9ba mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1289a9bd:;
  /* 1289a9bd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1289a9c2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1289a9c5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1289a9c7 not edx */
  EDX = (~(EDX));
  /* 1289a9c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289a9cc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1289a9cf and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1289a9d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289a9d4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1289a9d7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_1289a9da:;
  /* 1289a9da mov esp, ebp */
  ESP = (EBP);
  /* 1289a9dc pop ebp */
  EBP = (pop32());
  /* 1289a9dd ret  */
  ESPCHK(0x1289a7f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a9e0 @ 0x1289a9e0 (1515 bytes, 489 insns) */
void f_1289a9e0(void) {
  FTRACE(0x1289a9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289a9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1289a9e1 mov ebp, esp */
  EBP = (ESP);
  /* 1289a9e3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289a9e6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1289a9e9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289a9ec and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1289a9ee mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1289a9f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289a9f4 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1289a9f7 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1289a9fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289a9fd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289aa00 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289aa03 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1289aa06 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289aa09 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1289aa0c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1289aa0f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289aa12 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1289aa18 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289aa1b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1289aa22 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1289aa25 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289aa28 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289aa2b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1289aa2e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1289aa31 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1289aa33 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289aa36 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1289aa39 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1289aa3c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289aa3f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1289aa42 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1289aa45 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1289aa47 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1289aa4a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1289aa4d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289aa50 jle 0x1289ad06 */
  if ((C.zf||C.sf!=C.of)) goto L_1289ad06;
  /* 1289aa56 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289aa59 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1289aa5c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1289aa5e jne 0x1289aa6b */
  if (!C.zf) goto L_1289aa6b;
  /* 1289aa60 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1289aa63 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289aa66 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289aa69 jle 0x1289aa72 */
  if ((C.zf||C.sf!=C.of)) goto L_1289aa72;
L_1289aa6b:;
  /* 1289aa6b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289aa6d jmp 0x1289afc7 */
  goto L_1289afc7;
L_1289aa72:;
  /* 1289aa72 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289aa75 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1289aa78 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289aa7b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1289aa7e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289aa82 jbe 0x1289aa8b */
  if ((C.cf||C.zf)) goto L_1289aa8b;
  /* 1289aa84 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1289aa8b:;
  /* 1289aa8b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1289aa8e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1289aa91 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1289aa94 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289aa97 jne 0x1289ab6d */
  if (!C.zf) goto L_1289ab6d;
  /* 1289aa9d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289aaa1 jae 0x1289ab02 */
  if (!C.cf) goto L_1289ab02;
  /* 1289aaa3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1289aaa8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1289aaab shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1289aaad not edx */
  EDX = (~(EDX));
  /* 1289aaaf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289aab2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289aab5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1289aab9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1289aabb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289aabe mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289aac1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1289aac5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289aac8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289aacb mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1289aace sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1289aad1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289aad4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289aad7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1289aada mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289aadd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289aae0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1289aae4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1289aae6 jne 0x1289ab00 */
  if (!C.zf) goto L_1289ab00;
  /* 1289aae8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1289aaed mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1289aaf0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1289aaf2 not edx */
  EDX = (~(EDX));
  /* 1289aaf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289aaf7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1289aaf9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1289aafb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289aafe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1289ab00:;
  /* 1289ab00 jmp 0x1289ab6d */
  goto L_1289ab6d;
L_1289ab02:;
  /* 1289ab02 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1289ab05 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289ab08 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1289ab0d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1289ab0f not eax */
  EAX = (~(EAX));
  /* 1289ab11 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289ab14 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289ab17 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1289ab1e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289ab20 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289ab23 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289ab26 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1289ab2d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289ab30 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ab33 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1289ab36 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1289ab39 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289ab3c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ab3f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1289ab42 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289ab45 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ab48 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1289ab4c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1289ab4e jne 0x1289ab6d */
  if (!C.zf) goto L_1289ab6d;
  /* 1289ab50 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1289ab53 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289ab56 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1289ab5b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1289ab5d not eax */
  EAX = (~(EAX));
  /* 1289ab5f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289ab62 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1289ab65 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1289ab67 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289ab6a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1289ab6d:;
  /* 1289ab6d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1289ab70 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1289ab73 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1289ab76 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1289ab79 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1289ab7c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1289ab7f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1289ab82 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1289ab85 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1289ab88 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1289ab8b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1289ab8e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ab91 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289ab94 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1289ab97 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289ab9b jle 0x1289ace7 */
  if ((C.zf||C.sf!=C.of)) goto L_1289ace7;
  /* 1289aba1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1289aba4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289aba7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1289abaa mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289abad sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1289abb0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289abb3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1289abb6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289abba jbe 0x1289abc3 */
  if ((C.cf||C.zf)) goto L_1289abc3;
  /* 1289abbc mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1289abc3:;
  /* 1289abc3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1289abc6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289abc9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1289abcc mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1289abcf mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1289abd2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289abd5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1289abd8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1289abdb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1289abde mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289abe1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1289abe4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289abe7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1289abea mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1289abed mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1289abf0 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1289abf3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1289abf6 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1289abf9 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1289abfc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1289abff mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1289ac02 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289ac05 jne 0x1289acd3 */
  if (!C.zf) goto L_1289acd3;
  /* 1289ac0b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289ac0f jae 0x1289ac6c */
  if (!C.cf) goto L_1289ac6c;
  /* 1289ac11 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289ac14 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ac17 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1289ac1b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289ac1e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ac21 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1289ac24 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1289ac27 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289ac2a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ac2d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1289ac30 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1289ac32 jne 0x1289ac4a */
  if (!C.zf) goto L_1289ac4a;
  /* 1289ac34 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1289ac39 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1289ac3c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1289ac3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289ac41 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1289ac43 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1289ac45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289ac48 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1289ac4a:;
  /* 1289ac4a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1289ac4f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1289ac52 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1289ac54 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289ac57 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289ac5a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1289ac5e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289ac60 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289ac63 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289ac66 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1289ac6a jmp 0x1289acd3 */
  goto L_1289acd3;
L_1289ac6c:;
  /* 1289ac6c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289ac6f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ac72 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1289ac76 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289ac79 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ac7c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1289ac7f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1289ac82 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289ac85 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ac88 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1289ac8b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1289ac8d jne 0x1289acaa */
  if (!C.zf) goto L_1289acaa;
  /* 1289ac8f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1289ac92 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289ac95 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1289ac9a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1289ac9c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289ac9f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1289aca2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1289aca4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289aca7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1289acaa:;
  /* 1289acaa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1289acad sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289acb0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1289acb5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1289acb7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289acba mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289acbd mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1289acc4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289acc6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289acc9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289accc mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1289acd3:;
  /* 1289acd3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1289acd6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289acd9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1289acdb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1289acde add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ace1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289ace4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_1289ace7:;
  /* 1289ace7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1289acea add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289aced mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1289acf0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1289acf2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1289acf5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289acf8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1289acfb add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289acfe mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1289ad01 jmp 0x1289afc2 */
  goto L_1289afc2;
L_1289ad06:;
  /* 1289ad06 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1289ad09 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289ad0c jge 0x1289afc2 */
  if ((C.sf==C.of)) goto L_1289afc2;
  /* 1289ad12 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1289ad15 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ad18 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1289ad1b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1289ad1d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1289ad20 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ad23 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1289ad26 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ad29 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 1289ad2c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1289ad2f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ad32 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1289ad35 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1289ad38 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289ad3b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1289ad3e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1289ad41 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1289ad44 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289ad47 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1289ad4a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289ad4e jbe 0x1289ad57 */
  if ((C.cf||C.zf)) goto L_1289ad57;
  /* 1289ad50 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1289ad57:;
  /* 1289ad57 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289ad5a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1289ad5d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1289ad5f jne 0x1289aea0 */
  if (!C.zf) goto L_1289aea0;
  /* 1289ad65 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289ad68 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1289ad6b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289ad6e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1289ad71 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289ad75 jbe 0x1289ad7e */
  if ((C.cf||C.zf)) goto L_1289ad7e;
  /* 1289ad77 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1289ad7e:;
  /* 1289ad7e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1289ad81 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1289ad84 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1289ad87 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289ad8a jne 0x1289ae60 */
  if (!C.zf) goto L_1289ae60;
  /* 1289ad90 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289ad94 jae 0x1289adf5 */
  if (!C.cf) goto L_1289adf5;
  /* 1289ad96 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1289ad9b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1289ad9e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1289ada0 not edx */
  EDX = (~(EDX));
  /* 1289ada2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289ada5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289ada8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1289adac and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1289adae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289adb1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289adb4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1289adb8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289adbb add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289adbe mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1289adc1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1289adc4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289adc7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289adca mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1289adcd mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289add0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289add3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1289add7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1289add9 jne 0x1289adf3 */
  if (!C.zf) goto L_1289adf3;
  /* 1289addb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1289ade0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1289ade3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1289ade5 not edx */
  EDX = (~(EDX));
  /* 1289ade7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289adea mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1289adec and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1289adee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289adf1 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1289adf3:;
  /* 1289adf3 jmp 0x1289ae60 */
  goto L_1289ae60;
L_1289adf5:;
  /* 1289adf5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1289adf8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289adfb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1289ae00 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1289ae02 not eax */
  EAX = (~(EAX));
  /* 1289ae04 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289ae07 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289ae0a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1289ae11 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289ae13 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289ae16 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289ae19 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1289ae20 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289ae23 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ae26 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1289ae29 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1289ae2c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289ae2f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ae32 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1289ae35 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289ae38 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ae3b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1289ae3f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1289ae41 jne 0x1289ae60 */
  if (!C.zf) goto L_1289ae60;
  /* 1289ae43 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1289ae46 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289ae49 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1289ae4e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1289ae50 not eax */
  EAX = (~(EAX));
  /* 1289ae52 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289ae55 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1289ae58 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1289ae5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289ae5d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1289ae60:;
  /* 1289ae60 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1289ae63 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1289ae66 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1289ae69 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1289ae6c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1289ae6f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1289ae72 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1289ae75 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1289ae78 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1289ae7b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1289ae7e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1289ae81 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ae84 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1289ae87 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1289ae8a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1289ae8d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289ae90 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1289ae93 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289ae97 jbe 0x1289aea0 */
  if ((C.cf||C.zf)) goto L_1289aea0;
  /* 1289ae99 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1289aea0:;
  /* 1289aea0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1289aea3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289aea6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1289aea9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1289aeac mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1289aeaf mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289aeb2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1289aeb5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1289aeb8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1289aebb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289aebe mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1289aec1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289aec4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1289aec7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1289aeca mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1289aecd mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1289aed0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1289aed3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1289aed6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1289aed9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1289aedc mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1289aedf cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289aee2 jne 0x1289afae */
  if (!C.zf) goto L_1289afae;
  /* 1289aee8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289aeec jae 0x1289af48 */
  if (!C.cf) goto L_1289af48;
  /* 1289aeee mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289aef1 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289aef4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1289aef8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289aefb add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289aefe mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1289af01 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1289af03 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289af06 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289af09 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1289af0c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1289af0e jne 0x1289af26 */
  if (!C.zf) goto L_1289af26;
  /* 1289af10 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1289af15 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1289af18 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1289af1a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289af1d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1289af1f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1289af21 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289af24 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1289af26:;
  /* 1289af26 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1289af2b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1289af2e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1289af30 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289af33 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289af36 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1289af3a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1289af3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289af3f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289af42 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1289af46 jmp 0x1289afae */
  goto L_1289afae;
L_1289af48:;
  /* 1289af48 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289af4b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289af4e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1289af52 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289af55 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289af58 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1289af5b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1289af5d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289af60 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289af63 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1289af66 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1289af68 jne 0x1289af85 */
  if (!C.zf) goto L_1289af85;
  /* 1289af6a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1289af6d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289af70 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1289af75 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1289af77 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289af7a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1289af7d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1289af7f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289af82 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1289af85:;
  /* 1289af85 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1289af88 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289af8b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1289af90 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1289af92 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289af95 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289af98 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1289af9f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1289afa1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289afa4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289afa7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1289afae:;
  /* 1289afae mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1289afb1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1289afb4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1289afb6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1289afb9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289afbc mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1289afbf mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1289afc2:;
  /* 1289afc2 mov eax, 1 */
  EAX = (0x1u);
L_1289afc7:;
  /* 1289afc7 mov esp, ebp */
  ESP = (EBP);
  /* 1289afc9 pop ebp */
  EBP = (pop32());
  /* 1289afca ret  */
  ESPCHK(0x1289a9e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000afd0 @ 0x1289afd0 (304 bytes, 79 insns) */
void f_1289afd0(void) {
  FTRACE(0x1289afd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289afd0 push ebp */
  push32((uint32_t)(EBP));
  /* 1289afd1 mov ebp, esp */
  EBP = (ESP);
  /* 1289afd3 push ecx */
  push32((uint32_t)(ECX));
  /* 1289afd4 cmp dword ptr [0x128bfce0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bfce0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289afdb je 0x1289b0fc */
  if (C.zf) goto L_1289b0fc;
  /* 1289afe1 mov eax, dword ptr [0x128bfcd8] */
  EAX = (r32((uint32_t)(0x128bfcd8)));
  /* 1289afe6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1289afe9 mov ecx, dword ptr [0x128bfce0] */
  ECX = (r32((uint32_t)(0x128bfce0)));
  /* 1289afef mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1289aff2 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289aff4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1289aff7 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1289affc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1289b001 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289b004 push eax */
  push32((uint32_t)(EAX));
  /* 1289b005 call dword ptr [0x128c2294] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2294))), 0x1289b00bu);
  /* 1289b00b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1289b010 mov ecx, dword ptr [0x128bfcd8] */
  ECX = (r32((uint32_t)(0x128bfcd8)));
  /* 1289b016 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1289b018 mov eax, dword ptr [0x128bfce0] */
  EAX = (r32((uint32_t)(0x128bfce0)));
  /* 1289b01d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1289b020 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1289b022 mov edx, dword ptr [0x128bfce0] */
  EDX = (r32((uint32_t)(0x128bfce0)));
  /* 1289b028 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1289b02b mov eax, dword ptr [0x128bfce0] */
  EAX = (r32((uint32_t)(0x128bfce0)));
  /* 1289b030 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1289b033 mov edx, dword ptr [0x128bfcd8] */
  EDX = (r32((uint32_t)(0x128bfcd8)));
  /* 1289b039 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1289b044 mov eax, dword ptr [0x128bfce0] */
  EAX = (r32((uint32_t)(0x128bfce0)));
  /* 1289b049 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1289b04c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1289b04f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1289b052 mov eax, dword ptr [0x128bfce0] */
  EAX = (r32((uint32_t)(0x128bfce0)));
  /* 1289b057 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1289b05a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1289b05d mov edx, dword ptr [0x128bfce0] */
  EDX = (r32((uint32_t)(0x128bfce0)));
  /* 1289b063 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1289b066 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1289b06a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1289b06c jne 0x1289b082 */
  if (!C.zf) goto L_1289b082;
  /* 1289b06e mov edx, dword ptr [0x128bfce0] */
  EDX = (r32((uint32_t)(0x128bfce0)));
  /* 1289b074 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1289b077 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1289b079 mov ecx, dword ptr [0x128bfce0] */
  ECX = (r32((uint32_t)(0x128bfce0)));
  /* 1289b07f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1289b082:;
  /* 1289b082 mov edx, dword ptr [0x128bfce0] */
  EDX = (r32((uint32_t)(0x128bfce0)));
  /* 1289b088 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289b08c jne 0x1289b0f2 */
  if (!C.zf) goto L_1289b0f2;
  /* 1289b08e cmp dword ptr [0x128bfce4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x128bfce4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289b095 jle 0x1289b0f2 */
  if ((C.zf||C.sf!=C.of)) goto L_1289b0f2;
  /* 1289b097 mov eax, dword ptr [0x128bfce0] */
  EAX = (r32((uint32_t)(0x128bfce0)));
  /* 1289b09c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1289b09f push ecx */
  push32((uint32_t)(ECX));
  /* 1289b0a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1289b0a2 mov edx, dword ptr [0x128c1044] */
  EDX = (r32((uint32_t)(0x128c1044)));
  /* 1289b0a8 push edx */
  push32((uint32_t)(EDX));
  /* 1289b0a9 call dword ptr [0x128c2200] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2200))), 0x1289b0afu);
  /* 1289b0af mov eax, dword ptr [0x128bfce4] */
  EAX = (r32((uint32_t)(0x128bfce4)));
  /* 1289b0b4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1289b0b7 mov ecx, dword ptr [0x128bfce8] */
  ECX = (r32((uint32_t)(0x128bfce8)));
  /* 1289b0bd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289b0bf mov edx, dword ptr [0x128bfce0] */
  EDX = (r32((uint32_t)(0x128bfce0)));
  /* 1289b0c5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289b0c8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289b0ca push ecx */
  push32((uint32_t)(ECX));
  /* 1289b0cb mov eax, dword ptr [0x128bfce0] */
  EAX = (r32((uint32_t)(0x128bfce0)));
  /* 1289b0d0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289b0d3 push eax */
  push32((uint32_t)(EAX));
  /* 1289b0d4 mov ecx, dword ptr [0x128bfce0] */
  ECX = (r32((uint32_t)(0x128bfce0)));
  /* 1289b0da push ecx */
  push32((uint32_t)(ECX));
  /* 1289b0db call 0x1289d7b0 */
  push32(0x1289b0e0u); f_1289d7b0();
  /* 1289b0e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289b0e3 mov edx, dword ptr [0x128bfce4] */
  EDX = (r32((uint32_t)(0x128bfce4)));
  /* 1289b0e9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289b0ec mov dword ptr [0x128bfce4], edx */
  w32((uint32_t)(0x128bfce4), (EDX));
L_1289b0f2:;
  /* 1289b0f2 mov dword ptr [0x128bfce0], 0 */
  w32((uint32_t)(0x128bfce0), (0x0u));
L_1289b0fc:;
  /* 1289b0fc mov esp, ebp */
  ESP = (EBP);
  /* 1289b0fe pop ebp */
  EBP = (pop32());
  /* 1289b0ff ret  */
  ESPCHK(0x1289afd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b100 @ 0x1289b100 (1565 bytes, 343 insns) */
void f_1289b100(void) {
  FTRACE(0x1289b100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289b100 push ebp */
  push32((uint32_t)(EBP));
  /* 1289b101 mov ebp, esp */
  EBP = (ESP);
  /* 1289b103 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289b109 mov eax, dword ptr [0x128bfce4] */
  EAX = (r32((uint32_t)(0x128bfce4)));
  /* 1289b10e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1289b111 push eax */
  push32((uint32_t)(EAX));
  /* 1289b112 mov ecx, dword ptr [0x128bfce8] */
  ECX = (r32((uint32_t)(0x128bfce8)));
  /* 1289b118 push ecx */
  push32((uint32_t)(ECX));
  /* 1289b119 call dword ptr [0x128c2268] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2268))), 0x1289b11fu);
  /* 1289b11f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289b121 je 0x1289b12b */
  if (C.zf) goto L_1289b12b;
  /* 1289b123 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1289b126 jmp 0x1289b719 */
  goto L_1289b719;
L_1289b12b:;
  /* 1289b12b mov edx, dword ptr [0x128bfce8] */
  EDX = (r32((uint32_t)(0x128bfce8)));
  /* 1289b131 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 1289b137 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 1289b141 jmp 0x1289b152 */
  goto L_1289b152;
L_1289b143:;
  /* 1289b143 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 1289b149 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289b14c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_1289b152:;
  /* 1289b152 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 1289b158 cmp ecx, dword ptr [0x128bfce4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x128bfce4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289b15e jge 0x1289b717 */
  if ((C.sf==C.of)) goto L_1289b717;
  /* 1289b164 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1289b16a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1289b16d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 1289b173 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1289b178 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1289b17e push ecx */
  push32((uint32_t)(ECX));
  /* 1289b17f call dword ptr [0x128c2268] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2268))), 0x1289b185u);
  /* 1289b185 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289b187 je 0x1289b193 */
  if (C.zf) goto L_1289b193;
  /* 1289b189 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 1289b18e jmp 0x1289b719 */
  goto L_1289b719;
L_1289b193:;
  /* 1289b193 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1289b199 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1289b19c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 1289b1a2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1289b1a8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289b1ae mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1289b1b1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1289b1b7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1289b1ba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1289b1bd mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 1289b1c7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 1289b1d1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1289b1d8 jmp 0x1289b1e3 */
  goto L_1289b1e3;
L_1289b1da:;
  /* 1289b1da mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289b1dd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289b1e0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1289b1e3:;
  /* 1289b1e3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289b1e7 jge 0x1289b6db */
  if ((C.sf==C.of)) goto L_1289b6db;
  /* 1289b1ed mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 1289b1f7 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 1289b201 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 1289b20b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 1289b215 jmp 0x1289b226 */
  goto L_1289b226;
L_1289b217:;
  /* 1289b217 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1289b21d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289b220 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_1289b226:;
  /* 1289b226 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289b22d jge 0x1289b242 */
  if ((C.sf==C.of)) goto L_1289b242;
  /* 1289b22f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1289b235 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 1289b240 jmp 0x1289b217 */
  goto L_1289b217;
L_1289b242:;
  /* 1289b242 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289b246 jl 0x1289b67d */
  if ((C.sf!=C.of)) goto L_1289b67d;
  /* 1289b24c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1289b251 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 1289b257 push ecx */
  push32((uint32_t)(ECX));
  /* 1289b258 call dword ptr [0x128c2268] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2268))), 0x1289b25eu);
  /* 1289b25e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289b260 je 0x1289b26c */
  if (C.zf) goto L_1289b26c;
  /* 1289b262 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 1289b267 jmp 0x1289b719 */
  goto L_1289b719;
L_1289b26c:;
  /* 1289b26c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1289b272 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1289b275 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 1289b27f jmp 0x1289b290 */
  goto L_1289b290;
L_1289b281:;
  /* 1289b281 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 1289b287 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289b28a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_1289b290:;
  /* 1289b290 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289b297 jge 0x1289b414 */
  if ((C.sf==C.of)) goto L_1289b414;
  /* 1289b29d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289b2a0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289b2a3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 1289b2a9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1289b2af add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289b2b5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 1289b2bb mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1289b2c1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289b2c5 jne 0x1289b2d2 */
  if (!C.zf) goto L_1289b2d2;
  /* 1289b2c7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 1289b2cd cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289b2d0 je 0x1289b2dc */
  if (C.zf) goto L_1289b2dc;
L_1289b2d2:;
  /* 1289b2d2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 1289b2d7 jmp 0x1289b719 */
  goto L_1289b719;
L_1289b2dc:;
  /* 1289b2dc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1289b2e2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1289b2e4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1289b2ea mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 1289b2f0 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 1289b2f6 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 1289b2fc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1289b2ff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1289b301 je 0x1289b339 */
  if (C.zf) goto L_1289b339;
  /* 1289b303 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1289b309 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289b30c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1289b312 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289b31c jle 0x1289b328 */
  if ((C.zf||C.sf!=C.of)) goto L_1289b328;
  /* 1289b31e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 1289b323 jmp 0x1289b719 */
  goto L_1289b719;
L_1289b328:;
  /* 1289b328 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 1289b32e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289b331 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 1289b337 jmp 0x1289b37b */
  goto L_1289b37b;
L_1289b339:;
  /* 1289b339 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 1289b33f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1289b342 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289b345 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1289b34b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289b352 jle 0x1289b35e */
  if ((C.zf||C.sf!=C.of)) goto L_1289b35e;
  /* 1289b354 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1289b35e:;
  /* 1289b35e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1289b364 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 1289b36b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289b36e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1289b374 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_1289b37b:;
  /* 1289b37b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289b382 jl 0x1289b39d */
  if ((C.sf!=C.of)) goto L_1289b39d;
  /* 1289b384 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1289b38a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1289b38d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289b38f jne 0x1289b39d */
  if (!C.zf) goto L_1289b39d;
  /* 1289b391 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289b39b jle 0x1289b3a7 */
  if ((C.zf||C.sf!=C.of)) goto L_1289b3a7;
L_1289b39d:;
  /* 1289b39d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 1289b3a2 jmp 0x1289b719 */
  goto L_1289b719;
L_1289b3a7:;
  /* 1289b3a7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1289b3ad add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289b3b3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1289b3b6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289b3bc je 0x1289b3c8 */
  if (C.zf) goto L_1289b3c8;
  /* 1289b3be mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1289b3c3 jmp 0x1289b719 */
  goto L_1289b719;
L_1289b3c8:;
  /* 1289b3c8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1289b3ce add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289b3d4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1289b3da mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1289b3e0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289b3e6 jb 0x1289b2dc */
  if (C.cf) goto L_1289b2dc;
  /* 1289b3ec mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1289b3f2 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289b3f8 je 0x1289b404 */
  if (C.zf) goto L_1289b404;
  /* 1289b3fa mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1289b3ff jmp 0x1289b719 */
  goto L_1289b719;
L_1289b404:;
  /* 1289b404 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289b407 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289b40c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1289b40f jmp 0x1289b281 */
  goto L_1289b281;
L_1289b414:;
  /* 1289b414 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289b417 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1289b419 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289b41f je 0x1289b42b */
  if (C.zf) goto L_1289b42b;
  /* 1289b421 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 1289b426 jmp 0x1289b719 */
  goto L_1289b719;
L_1289b42b:;
  /* 1289b42b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289b42e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 1289b434 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1289b43b jmp 0x1289b446 */
  goto L_1289b446;
L_1289b43d:;
  /* 1289b43d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1289b440 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289b443 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1289b446:;
  /* 1289b446 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289b44a jge 0x1289b67d */
  if ((C.sf==C.of)) goto L_1289b67d;
  /* 1289b450 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 1289b45a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1289b460 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_1289b466:;
  /* 1289b466 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1289b46c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1289b46f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 1289b475 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1289b47b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289b481 je 0x1289b5aa */
  if (C.zf) goto L_1289b5aa;
  /* 1289b487 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1289b48a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1289b490 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289b497 je 0x1289b5aa */
  if (C.zf) goto L_1289b5aa;
  /* 1289b49d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1289b4a3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289b4a9 jb 0x1289b4be */
  if (C.cf) goto L_1289b4be;
  /* 1289b4ab mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 1289b4b1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289b4b6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289b4bc jb 0x1289b4c8 */
  if (C.cf) goto L_1289b4c8;
L_1289b4be:;
  /* 1289b4be mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 1289b4c3 jmp 0x1289b719 */
  goto L_1289b719;
L_1289b4c8:;
  /* 1289b4c8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1289b4ce and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 1289b4d4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 1289b4da mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 1289b4e0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289b4e3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1289b4e6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289b4e9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289b4ee mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_1289b4f4:;
  /* 1289b4f4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289b4f7 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289b4fd je 0x1289b51e */
  if (C.zf) goto L_1289b51e;
  /* 1289b4ff mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289b502 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289b508 jne 0x1289b50c */
  if (!C.zf) goto L_1289b50c;
  /* 1289b50a jmp 0x1289b51e */
  goto L_1289b51e;
L_1289b50c:;
  /* 1289b50c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289b50f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1289b511 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 1289b514 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289b517 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289b519 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1289b51c jmp 0x1289b4f4 */
  goto L_1289b4f4;
L_1289b51e:;
  /* 1289b51e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289b521 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289b527 jne 0x1289b533 */
  if (!C.zf) goto L_1289b533;
  /* 1289b529 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 1289b52e jmp 0x1289b719 */
  goto L_1289b719;
L_1289b533:;
  /* 1289b533 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1289b539 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1289b53b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1289b53e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289b541 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1289b547 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289b54e jle 0x1289b55a */
  if ((C.zf||C.sf!=C.of)) goto L_1289b55a;
  /* 1289b550 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1289b55a:;
  /* 1289b55a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1289b560 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289b563 je 0x1289b56f */
  if (C.zf) goto L_1289b56f;
  /* 1289b565 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 1289b56a jmp 0x1289b719 */
  goto L_1289b719;
L_1289b56f:;
  /* 1289b56f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1289b575 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1289b578 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289b57e je 0x1289b58a */
  if (C.zf) goto L_1289b58a;
  /* 1289b580 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 1289b585 jmp 0x1289b719 */
  goto L_1289b719;
L_1289b58a:;
  /* 1289b58a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1289b590 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1289b596 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1289b59c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289b59f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 1289b5a5 jmp 0x1289b466 */
  goto L_1289b466;
L_1289b5aa:;
  /* 1289b5aa cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289b5b1 je 0x1289b621 */
  if (C.zf) goto L_1289b621;
  /* 1289b5b3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289b5b7 jge 0x1289b5eb */
  if ((C.sf==C.of)) goto L_1289b5eb;
  /* 1289b5b9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1289b5be mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1289b5c1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1289b5c3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1289b5c9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1289b5cb mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 1289b5d1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1289b5d6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1289b5d9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1289b5db mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1289b5e1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1289b5e3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 1289b5e9 jmp 0x1289b621 */
  goto L_1289b621;
L_1289b5eb:;
  /* 1289b5eb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1289b5ee sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289b5f1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1289b5f6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1289b5f8 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 1289b5fe or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1289b600 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 1289b606 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1289b609 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289b60c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1289b611 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1289b613 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 1289b619 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1289b61b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_1289b621:;
  /* 1289b621 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1289b627 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1289b62a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289b630 jne 0x1289b644 */
  if (!C.zf) goto L_1289b644;
  /* 1289b632 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1289b635 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1289b63b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289b642 je 0x1289b64e */
  if (C.zf) goto L_1289b64e;
L_1289b644:;
  /* 1289b644 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 1289b649 jmp 0x1289b719 */
  goto L_1289b719;
L_1289b64e:;
  /* 1289b64e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1289b654 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1289b657 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289b65d je 0x1289b669 */
  if (C.zf) goto L_1289b669;
  /* 1289b65f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 1289b664 jmp 0x1289b719 */
  goto L_1289b719;
L_1289b669:;
  /* 1289b669 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 1289b66f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289b672 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 1289b678 jmp 0x1289b43d */
  goto L_1289b43d;
L_1289b67d:;
  /* 1289b67d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289b680 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1289b686 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1289b68c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289b690 jne 0x1289b6aa */
  if (!C.zf) goto L_1289b6aa;
  /* 1289b692 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289b695 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1289b69b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 1289b6a1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289b6a8 je 0x1289b6b1 */
  if (C.zf) goto L_1289b6b1;
L_1289b6aa:;
  /* 1289b6aa mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 1289b6af jmp 0x1289b719 */
  goto L_1289b719;
L_1289b6b1:;
  /* 1289b6b1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1289b6b7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289b6bd mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 1289b6c3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289b6c6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289b6cb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1289b6ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289b6d1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1289b6d3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1289b6d6 jmp 0x1289b1da */
  goto L_1289b1da;
L_1289b6db:;
  /* 1289b6db mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1289b6e1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1289b6e7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289b6e9 jne 0x1289b6fc */
  if (!C.zf) goto L_1289b6fc;
  /* 1289b6eb mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1289b6f1 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 1289b6f7 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289b6fa je 0x1289b703 */
  if (C.zf) goto L_1289b703;
L_1289b6fc:;
  /* 1289b6fc mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 1289b701 jmp 0x1289b719 */
  goto L_1289b719;
L_1289b703:;
  /* 1289b703 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1289b709 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289b70c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 1289b712 jmp 0x1289b143 */
  goto L_1289b143;
L_1289b717:;
  /* 1289b717 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1289b719:;
  /* 1289b719 mov esp, ebp */
  ESP = (EBP);
  /* 1289b71b pop ebp */
  EBP = (pop32());
  /* 1289b71c ret  */
  ESPCHK(0x1289b100u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b720 @ 0x1289b720 (183 bytes, 58 insns) */
void f_1289b720(void) {
  FTRACE(0x1289b720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289b720 push ebp */
  push32((uint32_t)(EBP));
  /* 1289b721 mov ebp, esp */
  EBP = (ESP);
  /* 1289b723 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289b726 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289b729 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289b72c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289b731 ja 0x1289b74a */
  if ((!C.cf&&!C.zf)) goto L_1289b74a;
  /* 1289b733 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289b736 mov edx, dword ptr [0x128bdde8] */
  EDX = (r32((uint32_t)(0x128bdde8)));
  /* 1289b73c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289b73e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1289b742 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1289b745 jmp 0x1289b7d3 */
  goto L_1289b7d3;
L_1289b74a:;
  /* 1289b74a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289b74d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1289b750 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1289b756 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1289b75c mov edx, dword ptr [0x128bdde8] */
  EDX = (r32((uint32_t)(0x128bdde8)));
  /* 1289b762 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289b764 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1289b768 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1289b76d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289b76f je 0x1289b793 */
  if (C.zf) goto L_1289b793;
  /* 1289b771 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289b774 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1289b777 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1289b77d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1289b780 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 1289b783 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 1289b786 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 1289b78a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 1289b791 jmp 0x1289b7a4 */
  goto L_1289b7a4;
L_1289b793:;
  /* 1289b793 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1289b796 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1289b799 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 1289b79d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_1289b7a4:;
  /* 1289b7a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1289b7a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1289b7a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1289b7aa lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1289b7ad push ecx */
  push32((uint32_t)(ECX));
  /* 1289b7ae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289b7b1 push edx */
  push32((uint32_t)(EDX));
  /* 1289b7b2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1289b7b5 push eax */
  push32((uint32_t)(EAX));
  /* 1289b7b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1289b7b8 call 0x1289daf0 */
  push32(0x1289b7bdu); f_1289daf0();
  /* 1289b7bd add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289b7c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289b7c2 jne 0x1289b7c8 */
  if (!C.zf) goto L_1289b7c8;
  /* 1289b7c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289b7c6 jmp 0x1289b7d3 */
  goto L_1289b7d3;
L_1289b7c8:;
  /* 1289b7c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289b7cb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1289b7d0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_1289b7d3:;
  /* 1289b7d3 mov esp, ebp */
  ESP = (EBP);
  /* 1289b7d5 pop ebp */
  EBP = (pop32());
  /* 1289b7d6 ret  */
  ESPCHK(0x1289b720u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b7e0 @ 0x1289b7e0 (836 bytes, 238 insns) */
void f_1289b7e0(void) {
  FTRACE(0x1289b7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289b7e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1289b7e1 mov ebp, esp */
  EBP = (ESP);
  /* 1289b7e3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289b7e6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1289b7e8 call 0x12899210 */
  push32(0x1289b7edu); f_12899210();
  /* 1289b7ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289b7f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289b7f3 push eax */
  push32((uint32_t)(EAX));
  /* 1289b7f4 call 0x1289bb30 */
  push32(0x1289b7f9u); f_1289bb30();
  /* 1289b7f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289b7fc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1289b7ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289b802 cmp ecx, dword ptr [0x128bfa30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x128bfa30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289b808 jne 0x1289b81b */
  if (!C.zf) goto L_1289b81b;
  /* 1289b80a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1289b80c call 0x128992b0 */
  push32(0x1289b811u); f_128992b0();
  /* 1289b811 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289b814 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289b816 jmp 0x1289bb20 */
  goto L_1289bb20;
L_1289b81b:;
  /* 1289b81b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289b81f jne 0x1289b83c */
  if (!C.zf) goto L_1289b83c;
  /* 1289b821 call 0x1289bc10 */
  push32(0x1289b826u); f_1289bc10();
  /* 1289b826 call 0x1289bc90 */
  push32(0x1289b82bu); f_1289bc90();
  /* 1289b82b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1289b82d call 0x128992b0 */
  push32(0x1289b832u); f_128992b0();
  /* 1289b832 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289b835 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289b837 jmp 0x1289bb20 */
  goto L_1289bb20;
L_1289b83c:;
  /* 1289b83c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1289b843 jmp 0x1289b84e */
  goto L_1289b84e;
L_1289b845:;
  /* 1289b845 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289b848 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289b84b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1289b84e:;
  /* 1289b84e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289b852 jae 0x1289b99f */
  if (!C.cf) goto L_1289b99f;
  /* 1289b858 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289b85b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1289b85e mov ecx, dword ptr [eax + 0x128be170] */
  ECX = (r32((uint32_t)(EAX + 0x128be170)));
  /* 1289b864 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289b867 jne 0x1289b99a */
  if (!C.zf) goto L_1289b99a;
  /* 1289b86d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1289b874 jmp 0x1289b87f */
  goto L_1289b87f;
L_1289b876:;
  /* 1289b876 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1289b879 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289b87c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1289b87f:;
  /* 1289b87f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289b886 jae 0x1289b894 */
  if (!C.cf) goto L_1289b894;
  /* 1289b888 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1289b88b mov byte ptr [eax + 0x128bfbc0], 0 */
  w8((uint32_t)(EAX + 0x128bfbc0), (0x0u));
  /* 1289b892 jmp 0x1289b876 */
  goto L_1289b876;
L_1289b894:;
  /* 1289b894 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1289b89b jmp 0x1289b8a6 */
  goto L_1289b8a6;
L_1289b89d:;
  /* 1289b89d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289b8a0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289b8a3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1289b8a6:;
  /* 1289b8a6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289b8aa jae 0x1289b927 */
  if (!C.cf) goto L_1289b927;
  /* 1289b8ac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289b8af imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1289b8b2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289b8b5 lea ecx, [edx + eax*8 + 0x128be180] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x128be180));
  /* 1289b8bc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1289b8bf jmp 0x1289b8ca */
  goto L_1289b8ca;
L_1289b8c1:;
  /* 1289b8c1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289b8c4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289b8c7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1289b8ca:;
  /* 1289b8ca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289b8cd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1289b8cf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1289b8d1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1289b8d3 je 0x1289b922 */
  if (C.zf) goto L_1289b922;
  /* 1289b8d5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289b8d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289b8da mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1289b8dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289b8df je 0x1289b922 */
  if (C.zf) goto L_1289b922;
  /* 1289b8e1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289b8e4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1289b8e6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1289b8e8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1289b8eb jmp 0x1289b8f6 */
  goto L_1289b8f6;
L_1289b8ed:;
  /* 1289b8ed mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1289b8f0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289b8f3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1289b8f6:;
  /* 1289b8f6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289b8f9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1289b8fb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1289b8fe cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289b901 ja 0x1289b920 */
  if ((!C.cf&&!C.zf)) goto L_1289b920;
  /* 1289b903 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1289b906 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289b909 mov dl, byte ptr [eax + 0x128bfbc1] */
  DL = (r8((uint32_t)(EAX + 0x128bfbc1)));
  /* 1289b90f or dl, byte ptr [ecx + 0x128be168] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x128be168))); DL = (_r); fl_logic(_r,8); }
  /* 1289b915 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1289b918 mov byte ptr [eax + 0x128bfbc1], dl */
  w8((uint32_t)(EAX + 0x128bfbc1), (DL));
  /* 1289b91e jmp 0x1289b8ed */
  goto L_1289b8ed;
L_1289b920:;
  /* 1289b920 jmp 0x1289b8c1 */
  goto L_1289b8c1;
L_1289b922:;
  /* 1289b922 jmp 0x1289b89d */
  goto L_1289b89d;
L_1289b927:;
  /* 1289b927 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289b92a mov dword ptr [0x128bfa30], ecx */
  w32((uint32_t)(0x128bfa30), (ECX));
  /* 1289b930 mov dword ptr [0x128bfabc], 1 */
  w32((uint32_t)(0x128bfabc), (0x1u));
  /* 1289b93a mov edx, dword ptr [0x128bfa30] */
  EDX = (r32((uint32_t)(0x128bfa30)));
  /* 1289b940 push edx */
  push32((uint32_t)(EDX));
  /* 1289b941 call 0x1289bb90 */
  push32(0x1289b946u); f_1289bb90();
  /* 1289b946 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289b949 mov dword ptr [0x128bfcc4], eax */
  w32((uint32_t)(0x128bfcc4), (EAX));
  /* 1289b94e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1289b955 jmp 0x1289b960 */
  goto L_1289b960;
L_1289b957:;
  /* 1289b957 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289b95a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289b95d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1289b960:;
  /* 1289b960 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289b964 jae 0x1289b984 */
  if (!C.cf) goto L_1289b984;
  /* 1289b966 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289b969 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1289b96c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289b96f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289b972 mov cx, word ptr [ecx + eax*2 + 0x128be174] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x128be174)));
  /* 1289b97a mov word ptr [edx*2 + 0x128bfab0], cx */
  w16((uint32_t)(EDX*2 + 0x128bfab0), (CX));
  /* 1289b982 jmp 0x1289b957 */
  goto L_1289b957;
L_1289b984:;
  /* 1289b984 call 0x1289bc90 */
  push32(0x1289b989u); f_1289bc90();
  /* 1289b989 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1289b98b call 0x128992b0 */
  push32(0x1289b990u); f_128992b0();
  /* 1289b990 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289b993 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289b995 jmp 0x1289bb20 */
  goto L_1289bb20;
L_1289b99a:;
  /* 1289b99a jmp 0x1289b845 */
  goto L_1289b845;
L_1289b99f:;
  /* 1289b99f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 1289b9a2 push edx */
  push32((uint32_t)(EDX));
  /* 1289b9a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289b9a6 push eax */
  push32((uint32_t)(EAX));
  /* 1289b9a7 call dword ptr [0x128c22c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22c0))), 0x1289b9adu);
  /* 1289b9ad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289b9b0 jne 0x1289baf2 */
  if (!C.zf) goto L_1289baf2;
  /* 1289b9b6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1289b9bd jmp 0x1289b9c8 */
  goto L_1289b9c8;
L_1289b9bf:;
  /* 1289b9bf mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1289b9c2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289b9c5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1289b9c8:;
  /* 1289b9c8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289b9cf jae 0x1289b9dd */
  if (!C.cf) goto L_1289b9dd;
  /* 1289b9d1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1289b9d4 mov byte ptr [edx + 0x128bfbc0], 0 */
  w8((uint32_t)(EDX + 0x128bfbc0), (0x0u));
  /* 1289b9db jmp 0x1289b9bf */
  goto L_1289b9bf;
L_1289b9dd:;
  /* 1289b9dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289b9e0 mov dword ptr [0x128bfa30], eax */
  w32((uint32_t)(0x128bfa30), (EAX));
  /* 1289b9e5 mov dword ptr [0x128bfcc4], 0 */
  w32((uint32_t)(0x128bfcc4), (0x0u));
  /* 1289b9ef cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289b9f3 jbe 0x1289baae */
  if ((C.cf||C.zf)) goto L_1289baae;
  /* 1289b9f9 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 1289b9fc mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 1289b9ff jmp 0x1289ba0a */
  goto L_1289ba0a;
L_1289ba01:;
  /* 1289ba01 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1289ba04 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ba07 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_1289ba0a:;
  /* 1289ba0a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1289ba0d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1289ba0f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1289ba11 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1289ba13 je 0x1289ba5c */
  if (C.zf) goto L_1289ba5c;
  /* 1289ba15 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1289ba18 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289ba1a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1289ba1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289ba1f je 0x1289ba5c */
  if (C.zf) goto L_1289ba5c;
  /* 1289ba21 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1289ba24 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1289ba26 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1289ba28 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1289ba2b jmp 0x1289ba36 */
  goto L_1289ba36;
L_1289ba2d:;
  /* 1289ba2d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1289ba30 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ba33 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1289ba36:;
  /* 1289ba36 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1289ba39 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1289ba3b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1289ba3e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289ba41 ja 0x1289ba5a */
  if ((!C.cf&&!C.zf)) goto L_1289ba5a;
  /* 1289ba43 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1289ba46 mov cl, byte ptr [eax + 0x128bfbc1] */
  CL = (r8((uint32_t)(EAX + 0x128bfbc1)));
  /* 1289ba4c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 1289ba4f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1289ba52 mov byte ptr [edx + 0x128bfbc1], cl */
  w8((uint32_t)(EDX + 0x128bfbc1), (CL));
  /* 1289ba58 jmp 0x1289ba2d */
  goto L_1289ba2d;
L_1289ba5a:;
  /* 1289ba5a jmp 0x1289ba01 */
  goto L_1289ba01;
L_1289ba5c:;
  /* 1289ba5c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 1289ba63 jmp 0x1289ba6e */
  goto L_1289ba6e;
L_1289ba65:;
  /* 1289ba65 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1289ba68 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ba6b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1289ba6e:;
  /* 1289ba6e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289ba75 jae 0x1289ba8e */
  if (!C.cf) goto L_1289ba8e;
  /* 1289ba77 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1289ba7a mov dl, byte ptr [ecx + 0x128bfbc1] */
  DL = (r8((uint32_t)(ECX + 0x128bfbc1)));
  /* 1289ba80 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1289ba83 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1289ba86 mov byte ptr [eax + 0x128bfbc1], dl */
  w8((uint32_t)(EAX + 0x128bfbc1), (DL));
  /* 1289ba8c jmp 0x1289ba65 */
  goto L_1289ba65;
L_1289ba8e:;
  /* 1289ba8e mov ecx, dword ptr [0x128bfa30] */
  ECX = (r32((uint32_t)(0x128bfa30)));
  /* 1289ba94 push ecx */
  push32((uint32_t)(ECX));
  /* 1289ba95 call 0x1289bb90 */
  push32(0x1289ba9au); f_1289bb90();
  /* 1289ba9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ba9d mov dword ptr [0x128bfcc4], eax */
  w32((uint32_t)(0x128bfcc4), (EAX));
  /* 1289baa2 mov dword ptr [0x128bfabc], 1 */
  w32((uint32_t)(0x128bfabc), (0x1u));
  /* 1289baac jmp 0x1289bab8 */
  goto L_1289bab8;
L_1289baae:;
  /* 1289baae mov dword ptr [0x128bfabc], 0 */
  w32((uint32_t)(0x128bfabc), (0x0u));
L_1289bab8:;
  /* 1289bab8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1289babf jmp 0x1289baca */
  goto L_1289baca;
L_1289bac1:;
  /* 1289bac1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289bac4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289bac7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1289baca:;
  /* 1289baca cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289bace jae 0x1289badf */
  if (!C.cf) goto L_1289badf;
  /* 1289bad0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289bad3 mov word ptr [eax*2 + 0x128bfab0], 0 */
  w16((uint32_t)(EAX*2 + 0x128bfab0), (0x0u));
  /* 1289badd jmp 0x1289bac1 */
  goto L_1289bac1;
L_1289badf:;
  /* 1289badf call 0x1289bc90 */
  push32(0x1289bae4u); f_1289bc90();
  /* 1289bae4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1289bae6 call 0x128992b0 */
  push32(0x1289baebu); f_128992b0();
  /* 1289baeb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289baee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289baf0 jmp 0x1289bb20 */
  goto L_1289bb20;
L_1289baf2:;
  /* 1289baf2 cmp dword ptr [0x128bf890], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf890))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289baf9 je 0x1289bb13 */
  if (C.zf) goto L_1289bb13;
  /* 1289bafb call 0x1289bc10 */
  push32(0x1289bb00u); f_1289bc10();
  /* 1289bb00 call 0x1289bc90 */
  push32(0x1289bb05u); f_1289bc90();
  /* 1289bb05 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1289bb07 call 0x128992b0 */
  push32(0x1289bb0cu); f_128992b0();
  /* 1289bb0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289bb0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289bb11 jmp 0x1289bb20 */
  goto L_1289bb20;
L_1289bb13:;
  /* 1289bb13 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1289bb15 call 0x128992b0 */
  push32(0x1289bb1au); f_128992b0();
  /* 1289bb1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289bb1d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1289bb20:;
  /* 1289bb20 mov esp, ebp */
  ESP = (EBP);
  /* 1289bb22 pop ebp */
  EBP = (pop32());
  /* 1289bb23 ret  */
  ESPCHK(0x1289b7e0u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x1289bb30 (89 bytes, 21 insns) */
void f_1289bb30(void) {
  FTRACE(0x1289bb30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289bb30 push ebp */
  push32((uint32_t)(EBP));
  /* 1289bb31 mov ebp, esp */
  EBP = (ESP);
  /* 1289bb33 mov dword ptr [0x128bf890], 0 */
  w32((uint32_t)(0x128bf890), (0x0u));
  /* 1289bb3d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289bb41 jne 0x1289bb55 */
  if (!C.zf) goto L_1289bb55;
  /* 1289bb43 mov dword ptr [0x128bf890], 1 */
  w32((uint32_t)(0x128bf890), (0x1u));
  /* 1289bb4d call dword ptr [0x128c22c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22c8))), 0x1289bb53u);
  /* 1289bb53 jmp 0x1289bb87 */
  goto L_1289bb87;
L_1289bb55:;
  /* 1289bb55 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289bb59 jne 0x1289bb6d */
  if (!C.zf) goto L_1289bb6d;
  /* 1289bb5b mov dword ptr [0x128bf890], 1 */
  w32((uint32_t)(0x128bf890), (0x1u));
  /* 1289bb65 call dword ptr [0x128c22c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22c4))), 0x1289bb6bu);
  /* 1289bb6b jmp 0x1289bb87 */
  goto L_1289bb87;
L_1289bb6d:;
  /* 1289bb6d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289bb71 jne 0x1289bb84 */
  if (!C.zf) goto L_1289bb84;
  /* 1289bb73 mov dword ptr [0x128bf890], 1 */
  w32((uint32_t)(0x128bf890), (0x1u));
  /* 1289bb7d mov eax, dword ptr [0x128bf8b8] */
  EAX = (r32((uint32_t)(0x128bf8b8)));
  /* 1289bb82 jmp 0x1289bb87 */
  goto L_1289bb87;
L_1289bb84:;
  /* 1289bb84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1289bb87:;
  /* 1289bb87 pop ebp */
  EBP = (pop32());
  /* 1289bb88 ret  */
  ESPCHK(0x1289bb30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bb90 @ 0x1289bb90 (80 bytes, 26 insns) [1 switch table(s)] */
void f_1289bb90(void) {
  FTRACE(0x1289bb90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289bb90 push ebp */
  push32((uint32_t)(EBP));
  /* 1289bb91 mov ebp, esp */
  EBP = (ESP);
  /* 1289bb93 push ecx */
  push32((uint32_t)(ECX));
  /* 1289bb94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289bb97 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1289bb9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289bb9d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289bba3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1289bba6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289bbaa ja 0x1289bbda */
  if ((!C.cf&&!C.zf)) goto L_1289bbda;
  /* 1289bbac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289bbaf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1289bbb1 mov dl, byte ptr [eax + 0x1289bbf4] */
  DL = (r8((uint32_t)(EAX + 0x1289bbf4)));
  /* 1289bbb7 jmp dword ptr [edx*4 + 0x1289bbe0] */
  switch (EDX) {
    case 0: goto L_1289bbbe;
    case 1: goto L_1289bbc5;
    case 2: goto L_1289bbcc;
    case 3: goto L_1289bbd3;
    case 4: goto L_1289bbda;
    default: x86_unimpl("switch@0x1289bbb7 out of table"); return;
  }
L_1289bbbe:;
  /* 1289bbbe mov eax, 0x411 */
  EAX = (0x411u);
  /* 1289bbc3 jmp 0x1289bbdc */
  goto L_1289bbdc;
L_1289bbc5:;
  /* 1289bbc5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1289bbca jmp 0x1289bbdc */
  goto L_1289bbdc;
L_1289bbcc:;
  /* 1289bbcc mov eax, 0x412 */
  EAX = (0x412u);
  /* 1289bbd1 jmp 0x1289bbdc */
  goto L_1289bbdc;
L_1289bbd3:;
  /* 1289bbd3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 1289bbd8 jmp 0x1289bbdc */
  goto L_1289bbdc;
L_1289bbda:;
  /* 1289bbda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1289bbdc:;
  /* 1289bbdc mov esp, ebp */
  ESP = (EBP);
  /* 1289bbde pop ebp */
  EBP = (pop32());
  /* 1289bbdf ret  */
  ESPCHK(0x1289bb90u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x1289bc10 (116 bytes, 29 insns) */
void f_1289bc10(void) {
  FTRACE(0x1289bc10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289bc10 push ebp */
  push32((uint32_t)(EBP));
  /* 1289bc11 mov ebp, esp */
  EBP = (ESP);
  /* 1289bc13 push ecx */
  push32((uint32_t)(ECX));
  /* 1289bc14 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1289bc1b jmp 0x1289bc26 */
  goto L_1289bc26;
L_1289bc1d:;
  /* 1289bc1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289bc20 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289bc23 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1289bc26:;
  /* 1289bc26 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289bc2d jge 0x1289bc3b */
  if ((C.sf==C.of)) goto L_1289bc3b;
  /* 1289bc2f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289bc32 mov byte ptr [ecx + 0x128bfbc0], 0 */
  w8((uint32_t)(ECX + 0x128bfbc0), (0x0u));
  /* 1289bc39 jmp 0x1289bc1d */
  goto L_1289bc1d;
L_1289bc3b:;
  /* 1289bc3b mov dword ptr [0x128bfa30], 0 */
  w32((uint32_t)(0x128bfa30), (0x0u));
  /* 1289bc45 mov dword ptr [0x128bfabc], 0 */
  w32((uint32_t)(0x128bfabc), (0x0u));
  /* 1289bc4f mov dword ptr [0x128bfcc4], 0 */
  w32((uint32_t)(0x128bfcc4), (0x0u));
  /* 1289bc59 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1289bc60 jmp 0x1289bc6b */
  goto L_1289bc6b;
L_1289bc62:;
  /* 1289bc62 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289bc65 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289bc68 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1289bc6b:;
  /* 1289bc6b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289bc6f jge 0x1289bc80 */
  if ((C.sf==C.of)) goto L_1289bc80;
  /* 1289bc71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289bc74 mov word ptr [eax*2 + 0x128bfab0], 0 */
  w16((uint32_t)(EAX*2 + 0x128bfab0), (0x0u));
  /* 1289bc7e jmp 0x1289bc62 */
  goto L_1289bc62;
L_1289bc80:;
  /* 1289bc80 mov esp, ebp */
  ESP = (EBP);
  /* 1289bc82 pop ebp */
  EBP = (pop32());
  /* 1289bc83 ret  */
  ESPCHK(0x1289bc10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc90 @ 0x1289bc90 (770 bytes, 175 insns) */
void f_1289bc90(void) {
  FTRACE(0x1289bc90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289bc90 push ebp */
  push32((uint32_t)(EBP));
  /* 1289bc91 mov ebp, esp */
  EBP = (ESP);
  /* 1289bc93 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289bc99 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 1289bc9f push eax */
  push32((uint32_t)(EAX));
  /* 1289bca0 mov ecx, dword ptr [0x128bfa30] */
  ECX = (r32((uint32_t)(0x128bfa30)));
  /* 1289bca6 push ecx */
  push32((uint32_t)(ECX));
  /* 1289bca7 call dword ptr [0x128c22c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22c0))), 0x1289bcadu);
  /* 1289bcad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289bcb0 jne 0x1289bec9 */
  if (!C.zf) goto L_1289bec9;
  /* 1289bcb6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1289bcc0 jmp 0x1289bcd1 */
  goto L_1289bcd1;
L_1289bcc2:;
  /* 1289bcc2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1289bcc8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289bccb mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1289bcd1:;
  /* 1289bcd1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289bcdb jae 0x1289bcf2 */
  if (!C.cf) goto L_1289bcf2;
  /* 1289bcdd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1289bce3 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 1289bce9 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 1289bcf0 jmp 0x1289bcc2 */
  goto L_1289bcc2;
L_1289bcf2:;
  /* 1289bcf2 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 1289bcf9 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 1289bcff mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1289bd02 jmp 0x1289bd0d */
  goto L_1289bd0d;
L_1289bd04:;
  /* 1289bd04 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289bd07 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289bd0a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1289bd0d:;
  /* 1289bd0d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289bd10 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1289bd12 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1289bd14 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1289bd16 je 0x1289bd58 */
  if (C.zf) goto L_1289bd58;
  /* 1289bd18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289bd1b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1289bd1d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1289bd1f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 1289bd25 jmp 0x1289bd36 */
  goto L_1289bd36;
L_1289bd27:;
  /* 1289bd27 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1289bd2d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289bd30 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1289bd36:;
  /* 1289bd36 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289bd39 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1289bd3b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1289bd3e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289bd44 ja 0x1289bd56 */
  if ((!C.cf&&!C.zf)) goto L_1289bd56;
  /* 1289bd46 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1289bd4c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 1289bd54 jmp 0x1289bd27 */
  goto L_1289bd27;
L_1289bd56:;
  /* 1289bd56 jmp 0x1289bd04 */
  goto L_1289bd04;
L_1289bd58:;
  /* 1289bd58 push 0 */
  push32((uint32_t)(0x0u));
  /* 1289bd5a mov eax, dword ptr [0x128bfcc4] */
  EAX = (r32((uint32_t)(0x128bfcc4)));
  /* 1289bd5f push eax */
  push32((uint32_t)(EAX));
  /* 1289bd60 mov ecx, dword ptr [0x128bfa30] */
  ECX = (r32((uint32_t)(0x128bfa30)));
  /* 1289bd66 push ecx */
  push32((uint32_t)(ECX));
  /* 1289bd67 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 1289bd6d push edx */
  push32((uint32_t)(EDX));
  /* 1289bd6e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1289bd73 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1289bd79 push eax */
  push32((uint32_t)(EAX));
  /* 1289bd7a push 1 */
  push32((uint32_t)(0x1u));
  /* 1289bd7c call 0x1289daf0 */
  push32(0x1289bd81u); f_1289daf0();
  /* 1289bd81 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289bd84 push 0 */
  push32((uint32_t)(0x0u));
  /* 1289bd86 mov ecx, dword ptr [0x128bfa30] */
  ECX = (r32((uint32_t)(0x128bfa30)));
  /* 1289bd8c push ecx */
  push32((uint32_t)(ECX));
  /* 1289bd8d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1289bd92 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1289bd98 push edx */
  push32((uint32_t)(EDX));
  /* 1289bd99 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1289bd9e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1289bda4 push eax */
  push32((uint32_t)(EAX));
  /* 1289bda5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1289bdaa mov ecx, dword ptr [0x128bfcc4] */
  ECX = (r32((uint32_t)(0x128bfcc4)));
  /* 1289bdb0 push ecx */
  push32((uint32_t)(ECX));
  /* 1289bdb1 call 0x1289dcb0 */
  push32(0x1289bdb6u); f_1289dcb0();
  /* 1289bdb6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289bdb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1289bdbb mov edx, dword ptr [0x128bfa30] */
  EDX = (r32((uint32_t)(0x128bfa30)));
  /* 1289bdc1 push edx */
  push32((uint32_t)(EDX));
  /* 1289bdc2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1289bdc7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 1289bdcd push eax */
  push32((uint32_t)(EAX));
  /* 1289bdce push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1289bdd3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 1289bdd9 push ecx */
  push32((uint32_t)(ECX));
  /* 1289bdda push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1289bddf mov edx, dword ptr [0x128bfcc4] */
  EDX = (r32((uint32_t)(0x128bfcc4)));
  /* 1289bde5 push edx */
  push32((uint32_t)(EDX));
  /* 1289bde6 call 0x1289dcb0 */
  push32(0x1289bdebu); f_1289dcb0();
  /* 1289bdeb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289bdee mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1289bdf8 jmp 0x1289be09 */
  goto L_1289be09;
L_1289bdfa:;
  /* 1289bdfa mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1289be00 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289be03 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1289be09:;
  /* 1289be09 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289be13 jae 0x1289bec4 */
  if (!C.cf) goto L_1289bec4;
  /* 1289be19 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1289be1f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1289be21 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 1289be29 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1289be2c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1289be2e je 0x1289be66 */
  if (C.zf) goto L_1289be66;
  /* 1289be30 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1289be36 mov cl, byte ptr [eax + 0x128bfbc1] */
  CL = (r8((uint32_t)(EAX + 0x128bfbc1)));
  /* 1289be3c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 1289be3f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1289be45 mov byte ptr [edx + 0x128bfbc1], cl */
  w8((uint32_t)(EDX + 0x128bfbc1), (CL));
  /* 1289be4b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1289be51 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1289be57 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 1289be5e mov byte ptr [eax + 0x128bfac0], dl */
  w8((uint32_t)(EAX + 0x128bfac0), (DL));
  /* 1289be64 jmp 0x1289bebf */
  goto L_1289bebf;
L_1289be66:;
  /* 1289be66 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1289be6c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1289be6e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 1289be76 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1289be79 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1289be7b je 0x1289beb2 */
  if (C.zf) goto L_1289beb2;
  /* 1289be7d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1289be83 mov al, byte ptr [edx + 0x128bfbc1] */
  AL = (r8((uint32_t)(EDX + 0x128bfbc1)));
  /* 1289be89 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1289be8b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1289be91 mov byte ptr [ecx + 0x128bfbc1], al */
  w8((uint32_t)(ECX + 0x128bfbc1), (AL));
  /* 1289be97 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1289be9d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1289bea3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 1289beaa mov byte ptr [edx + 0x128bfac0], cl */
  w8((uint32_t)(EDX + 0x128bfac0), (CL));
  /* 1289beb0 jmp 0x1289bebf */
  goto L_1289bebf;
L_1289beb2:;
  /* 1289beb2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1289beb8 mov byte ptr [edx + 0x128bfac0], 0 */
  w8((uint32_t)(EDX + 0x128bfac0), (0x0u));
L_1289bebf:;
  /* 1289bebf jmp 0x1289bdfa */
  goto L_1289bdfa;
L_1289bec4:;
  /* 1289bec4 jmp 0x1289bf8e */
  goto L_1289bf8e;
L_1289bec9:;
  /* 1289bec9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1289bed3 jmp 0x1289bee4 */
  goto L_1289bee4;
L_1289bed5:;
  /* 1289bed5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1289bedb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289bede mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1289bee4:;
  /* 1289bee4 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289beee jae 0x1289bf8e */
  if (!C.cf) goto L_1289bf8e;
  /* 1289bef4 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289befb jb 0x1289bf38 */
  if (C.cf) goto L_1289bf38;
  /* 1289befd cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289bf04 ja 0x1289bf38 */
  if ((!C.cf&&!C.zf)) goto L_1289bf38;
  /* 1289bf06 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1289bf0c mov dl, byte ptr [ecx + 0x128bfbc1] */
  DL = (r8((uint32_t)(ECX + 0x128bfbc1)));
  /* 1289bf12 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1289bf15 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1289bf1b mov byte ptr [eax + 0x128bfbc1], dl */
  w8((uint32_t)(EAX + 0x128bfbc1), (DL));
  /* 1289bf21 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1289bf27 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289bf2a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1289bf30 mov byte ptr [edx + 0x128bfac0], cl */
  w8((uint32_t)(EDX + 0x128bfac0), (CL));
  /* 1289bf36 jmp 0x1289bf89 */
  goto L_1289bf89;
L_1289bf38:;
  /* 1289bf38 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289bf3f jb 0x1289bf7c */
  if (C.cf) goto L_1289bf7c;
  /* 1289bf41 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289bf48 ja 0x1289bf7c */
  if ((!C.cf&&!C.zf)) goto L_1289bf7c;
  /* 1289bf4a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1289bf50 mov cl, byte ptr [eax + 0x128bfbc1] */
  CL = (r8((uint32_t)(EAX + 0x128bfbc1)));
  /* 1289bf56 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1289bf59 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1289bf5f mov byte ptr [edx + 0x128bfbc1], cl */
  w8((uint32_t)(EDX + 0x128bfbc1), (CL));
  /* 1289bf65 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1289bf6b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289bf6e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1289bf74 mov byte ptr [ecx + 0x128bfac0], al */
  w8((uint32_t)(ECX + 0x128bfac0), (AL));
  /* 1289bf7a jmp 0x1289bf89 */
  goto L_1289bf89;
L_1289bf7c:;
  /* 1289bf7c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1289bf82 mov byte ptr [edx + 0x128bfac0], 0 */
  w8((uint32_t)(EDX + 0x128bfac0), (0x0u));
L_1289bf89:;
  /* 1289bf89 jmp 0x1289bed5 */
  goto L_1289bed5;
L_1289bf8e:;
  /* 1289bf8e mov esp, ebp */
  ESP = (EBP);
  /* 1289bf90 pop ebp */
  EBP = (pop32());
  /* 1289bf91 ret  */
  ESPCHK(0x1289bc90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bfa0 @ 0x1289bfa0 (23 bytes, 9 insns) */
void f_1289bfa0(void) {
  FTRACE(0x1289bfa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289bfa0 push ebp */
  push32((uint32_t)(EBP));
  /* 1289bfa1 mov ebp, esp */
  EBP = (ESP);
  /* 1289bfa3 cmp dword ptr [0x128bfabc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bfabc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289bfaa je 0x1289bfb3 */
  if (C.zf) goto L_1289bfb3;
  /* 1289bfac mov eax, dword ptr [0x128bfa30] */
  EAX = (r32((uint32_t)(0x128bfa30)));
  /* 1289bfb1 jmp 0x1289bfb5 */
  goto L_1289bfb5;
L_1289bfb3:;
  /* 1289bfb3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1289bfb5:;
  /* 1289bfb5 pop ebp */
  EBP = (pop32());
  /* 1289bfb6 ret  */
  ESPCHK(0x1289bfa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bfc0 @ 0x1289bfc0 (34 bytes, 10 insns) */
void f_1289bfc0(void) {
  FTRACE(0x1289bfc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289bfc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1289bfc1 mov ebp, esp */
  EBP = (ESP);
  /* 1289bfc3 cmp dword ptr [0x128c11b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128c11b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289bfca jne 0x1289bfe0 */
  if (!C.zf) goto L_1289bfe0;
  /* 1289bfcc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1289bfce call 0x1289b7e0 */
  push32(0x1289bfd3u); f_1289b7e0();
  /* 1289bfd3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289bfd6 mov dword ptr [0x128c11b0], 1 */
  w32((uint32_t)(0x128c11b0), (0x1u));
L_1289bfe0:;
  /* 1289bfe0 pop ebp */
  EBP = (pop32());
  /* 1289bfe1 ret  */
  ESPCHK(0x1289bfc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bff0 @ 0x1289bff0 (664 bytes, 265 insns) [15 switch table(s)] */
void f_1289bff0(void) {
  FTRACE(0x1289bff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289bff0 push ebp */
  push32((uint32_t)(EBP));
  /* 1289bff1 mov ebp, esp */
  EBP = (ESP);
  /* 1289bff3 push edi */
  push32((uint32_t)(EDI));
  /* 1289bff4 push esi */
  push32((uint32_t)(ESI));
  /* 1289bff5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1289bff8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1289bffb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1289bffe mov eax, ecx */
  EAX = (ECX);
  /* 1289c000 mov edx, ecx */
  EDX = (ECX);
  /* 1289c002 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289c004 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289c006 jbe 0x1289c010 */
  if ((C.cf||C.zf)) goto L_1289c010;
  /* 1289c008 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289c00a jb 0x1289c188 */
  if (C.cf) goto L_1289c188;
L_1289c010:;
  /* 1289c010 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1289c016 jne 0x1289c02c */
  if (!C.zf) goto L_1289c02c;
  /* 1289c018 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1289c01b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1289c01e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289c021 jb 0x1289c04c */
  if (C.cf) goto L_1289c04c;
  /* 1289c023 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1289c025 jmp dword ptr [edx*4 + 0x1289c138] */
  switch (EDX) {
    case 0: goto L_1289c148;
    case 1: goto L_1289c150;
    case 2: goto L_1289c15c;
    case 3: goto L_1289c170;
    default: x86_unimpl("switch@0x1289c025 out of table"); return;
  }
L_1289c02c:;
  /* 1289c02c mov eax, edi */
  EAX = (EDI);
  /* 1289c02e mov edx, 3 */
  EDX = (0x3u);
  /* 1289c033 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289c036 jb 0x1289c044 */
  if (C.cf) goto L_1289c044;
  /* 1289c038 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1289c03b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289c03d jmp dword ptr [eax*4 + 0x1289c050] */
  switch (EAX) {
    case 1: goto L_1289c060;
    case 2: goto L_1289c08c;
    case 3: goto L_1289c0b0;
    default: x86_unimpl("switch@0x1289c03d out of table"); return;
  }
L_1289c044:;
  /* 1289c044 jmp dword ptr [ecx*4 + 0x1289c148] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1289c148)))); return;
  /* 1289c04b nop  */
  /* nop */
L_1289c04c:;
  /* 1289c04c jmp dword ptr [ecx*4 + 0x1289c0cc] */
  switch (ECX) {
    case 0: goto L_1289c12f;
    case 1: goto L_1289c11c;
    case 2: goto L_1289c114;
    case 3: goto L_1289c10c;
    case 4: goto L_1289c104;
    case 5: goto L_1289c0fc;
    case 6: goto L_1289c0f4;
    case 7: goto L_1289c0ec;
    default: x86_unimpl("switch@0x1289c04c out of table"); return;
  }
  /* 1289c053 nop  */
  /* nop */
L_1289c060:;
  /* 1289c060 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1289c062 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1289c064 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1289c066 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1289c069 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1289c06c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1289c06f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1289c072 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1289c075 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1289c078 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1289c07b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289c07e jb 0x1289c04c */
  if (C.cf) goto L_1289c04c;
  /* 1289c080 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1289c082 jmp dword ptr [edx*4 + 0x1289c138] */
  switch (EDX) {
    case 0: goto L_1289c148;
    case 1: goto L_1289c150;
    case 2: goto L_1289c15c;
    case 3: goto L_1289c170;
    default: x86_unimpl("switch@0x1289c082 out of table"); return;
  }
  /* 1289c089 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1289c08c:;
  /* 1289c08c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1289c08e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1289c090 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1289c092 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1289c095 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1289c098 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1289c09b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1289c09e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1289c0a1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289c0a4 jb 0x1289c04c */
  if (C.cf) goto L_1289c04c;
  /* 1289c0a6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1289c0a8 jmp dword ptr [edx*4 + 0x1289c138] */
  switch (EDX) {
    case 0: goto L_1289c148;
    case 1: goto L_1289c150;
    case 2: goto L_1289c15c;
    case 3: goto L_1289c170;
    default: x86_unimpl("switch@0x1289c0a8 out of table"); return;
  }
  /* 1289c0af nop  */
  /* nop */
L_1289c0b0:;
  /* 1289c0b0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1289c0b2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1289c0b4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1289c0b6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1289c0b7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1289c0ba inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1289c0bb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289c0be jb 0x1289c04c */
  if (C.cf) goto L_1289c04c;
  /* 1289c0c0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1289c0c2 jmp dword ptr [edx*4 + 0x1289c138] */
  switch (EDX) {
    case 0: goto L_1289c148;
    case 1: goto L_1289c150;
    case 2: goto L_1289c15c;
    case 3: goto L_1289c170;
    default: x86_unimpl("switch@0x1289c0c2 out of table"); return;
  }
  /* 1289c0c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1289c0ec:;
  /* 1289c0ec mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1289c0f0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1289c0f4:;
  /* 1289c0f4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1289c0f8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1289c0fc:;
  /* 1289c0fc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1289c100 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1289c104:;
  /* 1289c104 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1289c108 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1289c10c:;
  /* 1289c10c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1289c110 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1289c114:;
  /* 1289c114 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1289c118 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1289c11c:;
  /* 1289c11c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1289c120 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1289c124 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1289c12b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1289c12d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1289c12f:;
  /* 1289c12f jmp dword ptr [edx*4 + 0x1289c138] */
  switch (EDX) {
    case 0: goto L_1289c148;
    case 1: goto L_1289c150;
    case 2: goto L_1289c15c;
    case 3: goto L_1289c170;
    default: x86_unimpl("switch@0x1289c12f out of table"); return;
  }
  /* 1289c136 mov edi, edi */
  EDI = (EDI);
L_1289c148:;
  /* 1289c148 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289c14b pop esi */
  ESI = (pop32());
  /* 1289c14c pop edi */
  EDI = (pop32());
  /* 1289c14d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1289c14e ret  */
  ESPCHK(0x1289bff0u, _esp0);
  ESP += 4; return;
  /* 1289c14f nop  */
  /* nop */
L_1289c150:;
  /* 1289c150 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1289c152 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1289c154 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289c157 pop esi */
  ESI = (pop32());
  /* 1289c158 pop edi */
  EDI = (pop32());
  /* 1289c159 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1289c15a ret  */
  ESPCHK(0x1289bff0u, _esp0);
  ESP += 4; return;
  /* 1289c15b nop  */
  /* nop */
L_1289c15c:;
  /* 1289c15c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1289c15e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1289c160 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1289c163 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1289c166 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289c169 pop esi */
  ESI = (pop32());
  /* 1289c16a pop edi */
  EDI = (pop32());
  /* 1289c16b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1289c16c ret  */
  ESPCHK(0x1289bff0u, _esp0);
  ESP += 4; return;
  /* 1289c16d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1289c170:;
  /* 1289c170 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1289c172 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1289c174 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1289c177 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1289c17a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1289c17d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1289c180 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289c183 pop esi */
  ESI = (pop32());
  /* 1289c184 pop edi */
  EDI = (pop32());
  /* 1289c185 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1289c186 ret  */
  ESPCHK(0x1289bff0u, _esp0);
  ESP += 4; return;
  /* 1289c187 nop  */
  /* nop */
L_1289c188:;
  /* 1289c188 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1289c18c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1289c190 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1289c196 jne 0x1289c1bc */
  if (!C.zf) goto L_1289c1bc;
  /* 1289c198 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1289c19b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1289c19e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289c1a1 jb 0x1289c1b0 */
  if (C.cf) goto L_1289c1b0;
  /* 1289c1a3 std  */
  C.df=1;
  /* 1289c1a4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1289c1a6 cld  */
  C.df=0;
  /* 1289c1a7 jmp dword ptr [edx*4 + 0x1289c2d0] */
  switch (EDX) {
    case 0: goto L_1289c2e0;
    case 1: goto L_1289c2e8;
    case 2: goto L_1289c2f8;
    case 3: goto L_1289c30c;
    default: x86_unimpl("switch@0x1289c1a7 out of table"); return;
  }
  /* 1289c1ae mov edi, edi */
  EDI = (EDI);
L_1289c1b0:;
  /* 1289c1b0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1289c1b2 jmp dword ptr [ecx*4 + 0x1289c280] */
  switch (ECX) {
    case 0: goto L_1289c2c7;
    default: x86_unimpl("switch@0x1289c1b2 out of table"); return;
  }
  /* 1289c1b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1289c1bc:;
  /* 1289c1bc mov eax, edi */
  EAX = (EDI);
  /* 1289c1be mov edx, 3 */
  EDX = (0x3u);
  /* 1289c1c3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289c1c6 jb 0x1289c1d4 */
  if (C.cf) goto L_1289c1d4;
  /* 1289c1c8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1289c1cb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289c1cd jmp dword ptr [eax*4 + 0x1289c1d8] */
  switch (EAX) {
    case 1: goto L_1289c1e8;
    case 2: goto L_1289c208;
    case 3: goto L_1289c230;
    default: x86_unimpl("switch@0x1289c1cd out of table"); return;
  }
L_1289c1d4:;
  /* 1289c1d4 jmp dword ptr [ecx*4 + 0x1289c2d0] */
  switch (ECX) {
    case 0: goto L_1289c2e0;
    case 1: goto L_1289c2e8;
    case 2: goto L_1289c2f8;
    case 3: goto L_1289c30c;
    default: x86_unimpl("switch@0x1289c1d4 out of table"); return;
  }
  /* 1289c1db nop  */
  /* nop */
L_1289c1e8:;
  /* 1289c1e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1289c1eb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1289c1ed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1289c1f0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1289c1f1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1289c1f4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1289c1f5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289c1f8 jb 0x1289c1b0 */
  if (C.cf) goto L_1289c1b0;
  /* 1289c1fa std  */
  C.df=1;
  /* 1289c1fb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1289c1fd cld  */
  C.df=0;
  /* 1289c1fe jmp dword ptr [edx*4 + 0x1289c2d0] */
  switch (EDX) {
    case 0: goto L_1289c2e0;
    case 1: goto L_1289c2e8;
    case 2: goto L_1289c2f8;
    case 3: goto L_1289c30c;
    default: x86_unimpl("switch@0x1289c1fe out of table"); return;
  }
  /* 1289c205 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1289c208:;
  /* 1289c208 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1289c20b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1289c20d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1289c210 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1289c213 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1289c216 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1289c219 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289c21c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289c21f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289c222 jb 0x1289c1b0 */
  if (C.cf) goto L_1289c1b0;
  /* 1289c224 std  */
  C.df=1;
  /* 1289c225 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1289c227 cld  */
  C.df=0;
  /* 1289c228 jmp dword ptr [edx*4 + 0x1289c2d0] */
  switch (EDX) {
    case 0: goto L_1289c2e0;
    case 1: goto L_1289c2e8;
    case 2: goto L_1289c2f8;
    case 3: goto L_1289c30c;
    default: x86_unimpl("switch@0x1289c228 out of table"); return;
  }
  /* 1289c22f nop  */
  /* nop */
L_1289c230:;
  /* 1289c230 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1289c233 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1289c235 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1289c238 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1289c23b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1289c23e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1289c241 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1289c244 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1289c247 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289c24a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289c24d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289c250 jb 0x1289c1b0 */
  if (C.cf) goto L_1289c1b0;
  /* 1289c256 std  */
  C.df=1;
  /* 1289c257 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1289c259 cld  */
  C.df=0;
  /* 1289c25a jmp dword ptr [edx*4 + 0x1289c2d0] */
  switch (EDX) {
    case 0: goto L_1289c2e0;
    case 1: goto L_1289c2e8;
    case 2: goto L_1289c2f8;
    case 3: goto L_1289c30c;
    default: x86_unimpl("switch@0x1289c25a out of table"); return;
  }
  /* 1289c261 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1289c264 test dl, al */
  { uint32_t _r=(DL)&(AL); fl_logic(_r,8); }
  /* 1289c266 mov dword ptr [edx], edx */
  w32((uint32_t)(EDX), (EDX));
  /* 1289c268 mov edx, es */
  EDX = (C.seg_es);
  /* 1289c26a mov dword ptr [edx], edx */
  w32((uint32_t)(EDX), (EDX));
  /* 1289c26c xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 1289c26d ret 0x1289 */
  ESPCHK(0x1289bff0u, _esp0);
  ESP += 4749; return;
  /* 1289c270 pushfd  */
  x86_unimpl("pushfd @ 0x1289c270");
  /* 1289c271 ret 0x1289 */
  ESPCHK(0x1289bff0u, _esp0);
  ESP += 4749; return;
  /* 1289c274 movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 1289c275 ret 0x1289 */
  ESPCHK(0x1289bff0u, _esp0);
  ESP += 4749; return;
  /* 1289c278 lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 1289c279 ret 0x1289 */
  ESPCHK(0x1289bff0u, _esp0);
  ESP += 4749; return;
  /* 1289c27c mov ah, 0xc2 */
  AH = (0xc2u);
  /* 1289c27e mov dword ptr [edx], edx */
  w32((uint32_t)(EDX), (EDX));
  /* 1289c284 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1289c288 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1289c28c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1289c290 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1289c294 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1289c298 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1289c29c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1289c2a0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1289c2a4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1289c2a8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1289c2ac mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1289c2b0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1289c2b4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1289c2b8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1289c2bc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1289c2c3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1289c2c5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1289c2c7:;
  /* 1289c2c7 jmp dword ptr [edx*4 + 0x1289c2d0] */
  switch (EDX) {
    case 0: goto L_1289c2e0;
    case 1: goto L_1289c2e8;
    case 2: goto L_1289c2f8;
    case 3: goto L_1289c30c;
    default: x86_unimpl("switch@0x1289c2c7 out of table"); return;
  }
  /* 1289c2ce mov edi, edi */
  EDI = (EDI);
L_1289c2e0:;
  /* 1289c2e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289c2e3 pop esi */
  ESI = (pop32());
  /* 1289c2e4 pop edi */
  EDI = (pop32());
  /* 1289c2e5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1289c2e6 ret  */
  ESPCHK(0x1289bff0u, _esp0);
  ESP += 4; return;
  /* 1289c2e7 nop  */
  /* nop */
L_1289c2e8:;
  /* 1289c2e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1289c2eb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1289c2ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289c2f1 pop esi */
  ESI = (pop32());
  /* 1289c2f2 pop edi */
  EDI = (pop32());
  /* 1289c2f3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1289c2f4 ret  */
  ESPCHK(0x1289bff0u, _esp0);
  ESP += 4; return;
  /* 1289c2f5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1289c2f8:;
  /* 1289c2f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1289c2fb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1289c2fe mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1289c301 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1289c304 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289c307 pop esi */
  ESI = (pop32());
  /* 1289c308 pop edi */
  EDI = (pop32());
  /* 1289c309 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1289c30a ret  */
  ESPCHK(0x1289bff0u, _esp0);
  ESP += 4; return;
  /* 1289c30b nop  */
  /* nop */
L_1289c30c:;
  /* 1289c30c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1289c30f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1289c312 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1289c315 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1289c318 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1289c31b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1289c31e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289c321 pop esi */
  ESI = (pop32());
  /* 1289c322 pop edi */
  EDI = (pop32());
  /* 1289c323 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1289c324 ret  */
  ESPCHK(0x1289bff0u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x1289c330 (145 bytes, 42 insns) */
void f_1289c330(void) {
  FTRACE(0x1289c330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289c330 push ebp */
  push32((uint32_t)(EBP));
  /* 1289c331 mov ebp, esp */
  EBP = (ESP);
  /* 1289c333 push ecx */
  push32((uint32_t)(ECX));
  /* 1289c334 call 0x1289c3e0 */
  push32(0x1289c339u); f_1289c3e0();
  /* 1289c339 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289c33c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1289c33e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1289c345 jmp 0x1289c350 */
  goto L_1289c350;
L_1289c347:;
  /* 1289c347 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289c34a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289c34d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1289c350:;
  /* 1289c350 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289c354 jae 0x1289c37a */
  if (!C.cf) goto L_1289c37a;
  /* 1289c356 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289c359 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289c35c cmp ecx, dword ptr [eax*8 + 0x128be260] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x128be260))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289c363 jne 0x1289c378 */
  if (!C.zf) goto L_1289c378;
  /* 1289c365 call 0x1289c3d0 */
  push32(0x1289c36au); f_1289c3d0();
  /* 1289c36a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289c36d mov ecx, dword ptr [edx*8 + 0x128be264] */
  ECX = (r32((uint32_t)(EDX*8 + 0x128be264)));
  /* 1289c374 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1289c376 jmp 0x1289c3bd */
  goto L_1289c3bd;
L_1289c378:;
  /* 1289c378 jmp 0x1289c347 */
  goto L_1289c347;
L_1289c37a:;
  /* 1289c37a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289c37e jb 0x1289c393 */
  if (C.cf) goto L_1289c393;
  /* 1289c380 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289c384 ja 0x1289c393 */
  if ((!C.cf&&!C.zf)) goto L_1289c393;
  /* 1289c386 call 0x1289c3d0 */
  push32(0x1289c38bu); f_1289c3d0();
  /* 1289c38b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1289c391 jmp 0x1289c3bd */
  goto L_1289c3bd;
L_1289c393:;
  /* 1289c393 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289c39a jb 0x1289c3b2 */
  if (C.cf) goto L_1289c3b2;
  /* 1289c39c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289c3a3 ja 0x1289c3b2 */
  if ((!C.cf&&!C.zf)) goto L_1289c3b2;
  /* 1289c3a5 call 0x1289c3d0 */
  push32(0x1289c3aau); f_1289c3d0();
  /* 1289c3aa mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1289c3b0 jmp 0x1289c3bd */
  goto L_1289c3bd;
L_1289c3b2:;
  /* 1289c3b2 call 0x1289c3d0 */
  push32(0x1289c3b7u); f_1289c3d0();
  /* 1289c3b7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_1289c3bd:;
  /* 1289c3bd mov esp, ebp */
  ESP = (EBP);
  /* 1289c3bf pop ebp */
  EBP = (pop32());
  /* 1289c3c0 ret  */
  ESPCHK(0x1289c330u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c3d0 @ 0x1289c3d0 (13 bytes, 6 insns) */
void f_1289c3d0(void) {
  FTRACE(0x1289c3d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289c3d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1289c3d1 mov ebp, esp */
  EBP = (ESP);
  /* 1289c3d3 call 0x128948a0 */
  push32(0x1289c3d8u); f_128948a0();
  /* 1289c3d8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289c3db pop ebp */
  EBP = (pop32());
  /* 1289c3dc ret  */
  ESPCHK(0x1289c3d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c3e0 @ 0x1289c3e0 (13 bytes, 6 insns) */
void f_1289c3e0(void) {
  FTRACE(0x1289c3e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289c3e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1289c3e1 mov ebp, esp */
  EBP = (ESP);
  /* 1289c3e3 call 0x128948a0 */
  push32(0x1289c3e8u); f_128948a0();
  /* 1289c3e8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289c3eb pop ebp */
  EBP = (pop32());
  /* 1289c3ec ret  */
  ESPCHK(0x1289c3e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c3f0 @ 0x1289c3f0 (482 bytes, 138 insns) */
void f_1289c3f0(void) {
  FTRACE(0x1289c3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289c3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1289c3f1 mov ebp, esp */
  EBP = (ESP);
  /* 1289c3f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289c3f6 push esi */
  push32((uint32_t)(ESI));
  /* 1289c3f7 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 1289c3fe push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1289c400 call 0x12899210 */
  push32(0x1289c405u); f_12899210();
  /* 1289c405 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289c408 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1289c40f jmp 0x1289c41a */
  goto L_1289c41a;
L_1289c411:;
  /* 1289c411 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289c414 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289c417 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1289c41a:;
  /* 1289c41a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289c41e jge 0x1289c5c0 */
  if ((C.sf==C.of)) goto L_1289c5c0;
  /* 1289c424 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289c427 cmp dword ptr [ecx*4 + 0x128c1060], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x128c1060))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289c42f je 0x1289c526 */
  if (C.zf) goto L_1289c526;
  /* 1289c435 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289c438 mov eax, dword ptr [edx*4 + 0x128c1060] */
  EAX = (r32((uint32_t)(EDX*4 + 0x128c1060)));
  /* 1289c43f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1289c442 jmp 0x1289c44d */
  goto L_1289c44d;
L_1289c444:;
  /* 1289c444 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289c447 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289c44a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1289c44d:;
  /* 1289c44d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289c450 mov eax, dword ptr [edx*4 + 0x128c1060] */
  EAX = (r32((uint32_t)(EDX*4 + 0x128c1060)));
  /* 1289c457 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289c45c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289c45f jae 0x1289c516 */
  if (!C.cf) goto L_1289c516;
  /* 1289c465 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289c468 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1289c46c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1289c46f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1289c471 jne 0x1289c511 */
  if (!C.zf) goto L_1289c511;
  /* 1289c477 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289c47a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289c47e jne 0x1289c4b9 */
  if (!C.zf) goto L_1289c4b9;
  /* 1289c480 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1289c482 call 0x12899210 */
  push32(0x1289c487u); f_12899210();
  /* 1289c487 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289c48a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289c48d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289c491 jne 0x1289c4af */
  if (!C.zf) goto L_1289c4af;
  /* 1289c493 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289c496 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289c499 push edx */
  push32((uint32_t)(EDX));
  /* 1289c49a call dword ptr [0x128c22a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22a8))), 0x1289c4a0u);
  /* 1289c4a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289c4a3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1289c4a6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289c4a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289c4ac mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1289c4af:;
  /* 1289c4af push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1289c4b1 call 0x128992b0 */
  push32(0x1289c4b6u); f_128992b0();
  /* 1289c4b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1289c4b9:;
  /* 1289c4b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289c4bc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289c4bf push eax */
  push32((uint32_t)(EAX));
  /* 1289c4c0 call dword ptr [0x128c22a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22a0))), 0x1289c4c6u);
  /* 1289c4c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289c4c9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1289c4cd and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1289c4d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1289c4d2 je 0x1289c4e6 */
  if (C.zf) goto L_1289c4e6;
  /* 1289c4d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289c4d7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289c4da push eax */
  push32((uint32_t)(EAX));
  /* 1289c4db call dword ptr [0x128c22a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22a4))), 0x1289c4e1u);
  /* 1289c4e1 jmp 0x1289c444 */
  goto L_1289c444;
L_1289c4e6:;
  /* 1289c4e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289c4e9 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1289c4ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289c4f2 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1289c4f5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289c4f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289c4fb sub eax, dword ptr [edx*4 + 0x128c1060] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x128c1060))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289c502 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1289c503 mov esi, 0x24 */
  ESI = (0x24u);
  /* 1289c508 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1289c50a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289c50c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1289c50f jmp 0x1289c516 */
  goto L_1289c516;
L_1289c511:;
  /* 1289c511 jmp 0x1289c444 */
  goto L_1289c444;
L_1289c516:;
  /* 1289c516 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289c51a je 0x1289c521 */
  if (C.zf) goto L_1289c521;
  /* 1289c51c jmp 0x1289c5c0 */
  goto L_1289c5c0;
L_1289c521:;
  /* 1289c521 jmp 0x1289c5bb */
  goto L_1289c5bb;
L_1289c526:;
  /* 1289c526 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 1289c528 push 0x128bb6fc */
  push32((uint32_t)(0x128bb6fcu));
  /* 1289c52d push 2 */
  push32((uint32_t)(0x2u));
  /* 1289c52f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1289c534 call 0x12894e60 */
  push32(0x1289c539u); f_12894e60();
  /* 1289c539 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289c53c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1289c53f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289c543 je 0x1289c5b9 */
  if (C.zf) goto L_1289c5b9;
  /* 1289c545 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289c548 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289c54b mov dword ptr [eax*4 + 0x128c1060], ecx */
  w32((uint32_t)(EAX*4 + 0x128c1060), (ECX));
  /* 1289c552 mov edx, dword ptr [0x128c119c] */
  EDX = (r32((uint32_t)(0x128c119c)));
  /* 1289c558 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289c55b mov dword ptr [0x128c119c], edx */
  w32((uint32_t)(0x128c119c), (EDX));
  /* 1289c561 jmp 0x1289c56c */
  goto L_1289c56c;
L_1289c563:;
  /* 1289c563 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289c566 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289c569 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1289c56c:;
  /* 1289c56c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289c56f mov edx, dword ptr [ecx*4 + 0x128c1060] */
  EDX = (r32((uint32_t)(ECX*4 + 0x128c1060)));
  /* 1289c576 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289c57c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289c57f jae 0x1289c5a4 */
  if (!C.cf) goto L_1289c5a4;
  /* 1289c581 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289c584 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 1289c588 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289c58b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1289c591 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289c594 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 1289c598 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289c59b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1289c5a2 jmp 0x1289c563 */
  goto L_1289c563;
L_1289c5a4:;
  /* 1289c5a4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289c5a7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1289c5aa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1289c5ad mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289c5b0 push edx */
  push32((uint32_t)(EDX));
  /* 1289c5b1 call 0x1289c900 */
  push32(0x1289c5b6u); f_1289c900();
  /* 1289c5b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1289c5b9:;
  /* 1289c5b9 jmp 0x1289c5c0 */
  goto L_1289c5c0;
L_1289c5bb:;
  /* 1289c5bb jmp 0x1289c411 */
  goto L_1289c411;
L_1289c5c0:;
  /* 1289c5c0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1289c5c2 call 0x128992b0 */
  push32(0x1289c5c7u); f_128992b0();
  /* 1289c5c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289c5ca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289c5cd pop esi */
  ESI = (pop32());
  /* 1289c5ce mov esp, ebp */
  ESP = (EBP);
  /* 1289c5d0 pop ebp */
  EBP = (pop32());
  /* 1289c5d1 ret  */
  ESPCHK(0x1289c3f0u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x1289c5e0 (183 bytes, 57 insns) */
void f_1289c5e0(void) {
  FTRACE(0x1289c5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289c5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1289c5e1 mov ebp, esp */
  EBP = (ESP);
  /* 1289c5e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1289c5e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289c5e7 cmp eax, dword ptr [0x128c119c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x128c119c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289c5ed jae 0x1289c67a */
  if (!C.cf) goto L_1289c67a;
  /* 1289c5f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289c5f6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1289c5f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289c5fc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1289c5ff imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1289c602 mov eax, dword ptr [ecx*4 + 0x128c1060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x128c1060)));
  /* 1289c609 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289c60d jne 0x1289c67a */
  if (!C.zf) goto L_1289c67a;
  /* 1289c60f cmp dword ptr [0x128bf694], 1 */
  { uint32_t _a=(r32((uint32_t)(0x128bf694))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289c616 jne 0x1289c65a */
  if (!C.zf) goto L_1289c65a;
  /* 1289c618 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289c61b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1289c61e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289c622 je 0x1289c632 */
  if (C.zf) goto L_1289c632;
  /* 1289c624 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289c628 je 0x1289c640 */
  if (C.zf) goto L_1289c640;
  /* 1289c62a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289c62e je 0x1289c64e */
  if (C.zf) goto L_1289c64e;
  /* 1289c630 jmp 0x1289c65a */
  goto L_1289c65a;
L_1289c632:;
  /* 1289c632 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289c635 push edx */
  push32((uint32_t)(EDX));
  /* 1289c636 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1289c638 call dword ptr [0x128c22cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22cc))), 0x1289c63eu);
  /* 1289c63e jmp 0x1289c65a */
  goto L_1289c65a;
L_1289c640:;
  /* 1289c640 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289c643 push eax */
  push32((uint32_t)(EAX));
  /* 1289c644 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1289c646 call dword ptr [0x128c22cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22cc))), 0x1289c64cu);
  /* 1289c64c jmp 0x1289c65a */
  goto L_1289c65a;
L_1289c64e:;
  /* 1289c64e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289c651 push ecx */
  push32((uint32_t)(ECX));
  /* 1289c652 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1289c654 call dword ptr [0x128c22cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22cc))), 0x1289c65au);
L_1289c65a:;
  /* 1289c65a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289c65d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1289c660 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289c663 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1289c666 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1289c669 mov ecx, dword ptr [edx*4 + 0x128c1060] */
  ECX = (r32((uint32_t)(EDX*4 + 0x128c1060)));
  /* 1289c670 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289c673 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 1289c676 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289c678 jmp 0x1289c693 */
  goto L_1289c693;
L_1289c67a:;
  /* 1289c67a call 0x1289c3d0 */
  push32(0x1289c67fu); f_1289c3d0();
  /* 1289c67f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1289c685 call 0x1289c3e0 */
  push32(0x1289c68au); f_1289c3e0();
  /* 1289c68a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1289c690 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1289c693:;
  /* 1289c693 mov esp, ebp */
  ESP = (EBP);
  /* 1289c695 pop ebp */
  EBP = (pop32());
  /* 1289c696 ret  */
  ESPCHK(0x1289c5e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6a0 @ 0x1289c6a0 (216 bytes, 63 insns) */
void f_1289c6a0(void) {
  FTRACE(0x1289c6a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289c6a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1289c6a1 mov ebp, esp */
  EBP = (ESP);
  /* 1289c6a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1289c6a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289c6a7 cmp eax, dword ptr [0x128c119c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x128c119c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289c6ad jae 0x1289c75b */
  if (!C.cf) goto L_1289c75b;
  /* 1289c6b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289c6b6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1289c6b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289c6bc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1289c6bf imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1289c6c2 mov eax, dword ptr [ecx*4 + 0x128c1060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x128c1060)));
  /* 1289c6c9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1289c6ce and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1289c6d1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1289c6d3 je 0x1289c75b */
  if (C.zf) goto L_1289c75b;
  /* 1289c6d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289c6dc sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1289c6df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289c6e2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1289c6e5 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1289c6e8 mov ecx, dword ptr [edx*4 + 0x128c1060] */
  ECX = (r32((uint32_t)(EDX*4 + 0x128c1060)));
  /* 1289c6ef cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289c6f3 je 0x1289c75b */
  if (C.zf) goto L_1289c75b;
  /* 1289c6f5 cmp dword ptr [0x128bf694], 1 */
  { uint32_t _a=(r32((uint32_t)(0x128bf694))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289c6fc jne 0x1289c73a */
  if (!C.zf) goto L_1289c73a;
  /* 1289c6fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289c701 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1289c704 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289c708 je 0x1289c718 */
  if (C.zf) goto L_1289c718;
  /* 1289c70a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289c70e je 0x1289c724 */
  if (C.zf) goto L_1289c724;
  /* 1289c710 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289c714 je 0x1289c730 */
  if (C.zf) goto L_1289c730;
  /* 1289c716 jmp 0x1289c73a */
  goto L_1289c73a;
L_1289c718:;
  /* 1289c718 push 0 */
  push32((uint32_t)(0x0u));
  /* 1289c71a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1289c71c call dword ptr [0x128c22cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22cc))), 0x1289c722u);
  /* 1289c722 jmp 0x1289c73a */
  goto L_1289c73a;
L_1289c724:;
  /* 1289c724 push 0 */
  push32((uint32_t)(0x0u));
  /* 1289c726 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1289c728 call dword ptr [0x128c22cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22cc))), 0x1289c72eu);
  /* 1289c72e jmp 0x1289c73a */
  goto L_1289c73a;
L_1289c730:;
  /* 1289c730 push 0 */
  push32((uint32_t)(0x0u));
  /* 1289c732 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1289c734 call dword ptr [0x128c22cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22cc))), 0x1289c73au);
L_1289c73a:;
  /* 1289c73a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289c73d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1289c740 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289c743 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1289c746 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1289c749 mov edx, dword ptr [eax*4 + 0x128c1060] */
  EDX = (r32((uint32_t)(EAX*4 + 0x128c1060)));
  /* 1289c750 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 1289c757 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289c759 jmp 0x1289c774 */
  goto L_1289c774;
L_1289c75b:;
  /* 1289c75b call 0x1289c3d0 */
  push32(0x1289c760u); f_1289c3d0();
  /* 1289c760 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1289c766 call 0x1289c3e0 */
  push32(0x1289c76bu); f_1289c3e0();
  /* 1289c76b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1289c771 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1289c774:;
  /* 1289c774 mov esp, ebp */
  ESP = (EBP);
  /* 1289c776 pop ebp */
  EBP = (pop32());
  /* 1289c777 ret  */
  ESPCHK(0x1289c6a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c780 @ 0x1289c780 (102 bytes, 30 insns) */
void f_1289c780(void) {
  FTRACE(0x1289c780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289c780 push ebp */
  push32((uint32_t)(EBP));
  /* 1289c781 mov ebp, esp */
  EBP = (ESP);
  /* 1289c783 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289c786 cmp eax, dword ptr [0x128c119c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x128c119c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289c78c jae 0x1289c7cb */
  if (!C.cf) goto L_1289c7cb;
  /* 1289c78e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289c791 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1289c794 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289c797 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1289c79a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1289c79d mov eax, dword ptr [ecx*4 + 0x128c1060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x128c1060)));
  /* 1289c7a4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1289c7a9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1289c7ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1289c7ae je 0x1289c7cb */
  if (C.zf) goto L_1289c7cb;
  /* 1289c7b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289c7b3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1289c7b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289c7b9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1289c7bc imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1289c7bf mov ecx, dword ptr [edx*4 + 0x128c1060] */
  ECX = (r32((uint32_t)(EDX*4 + 0x128c1060)));
  /* 1289c7c6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 1289c7c9 jmp 0x1289c7e4 */
  goto L_1289c7e4;
L_1289c7cb:;
  /* 1289c7cb call 0x1289c3d0 */
  push32(0x1289c7d0u); f_1289c3d0();
  /* 1289c7d0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1289c7d6 call 0x1289c3e0 */
  push32(0x1289c7dbu); f_1289c3e0();
  /* 1289c7db mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1289c7e1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1289c7e4:;
  /* 1289c7e4 pop ebp */
  EBP = (pop32());
  /* 1289c7e5 ret  */
  ESPCHK(0x1289c780u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c7f0 @ 0x1289c7f0 (260 bytes, 83 insns) */
void f_1289c7f0(void) {
  FTRACE(0x1289c7f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289c7f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1289c7f1 mov ebp, esp */
  EBP = (ESP);
  /* 1289c7f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289c7f6 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 1289c7fa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289c7fd and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1289c800 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289c802 je 0x1289c80d */
  if (C.zf) goto L_1289c80d;
  /* 1289c804 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1289c807 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1289c80a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_1289c80d:;
  /* 1289c80d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289c810 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1289c816 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1289c818 je 0x1289c822 */
  if (C.zf) goto L_1289c822;
  /* 1289c81a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1289c81d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 1289c81f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_1289c822:;
  /* 1289c822 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289c825 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1289c82b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1289c82d je 0x1289c838 */
  if (C.zf) goto L_1289c838;
  /* 1289c82f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1289c832 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1289c835 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1289c838:;
  /* 1289c838 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289c83b push eax */
  push32((uint32_t)(EAX));
  /* 1289c83c call dword ptr [0x128c225c] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c225c))), 0x1289c842u);
  /* 1289c842 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1289c845 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289c849 jne 0x1289c862 */
  if (!C.zf) goto L_1289c862;
  /* 1289c84b call dword ptr [0x128c2250] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2250))), 0x1289c851u);
  /* 1289c851 push eax */
  push32((uint32_t)(EAX));
  /* 1289c852 call 0x1289c330 */
  push32(0x1289c857u); f_1289c330();
  /* 1289c857 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289c85a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1289c85d jmp 0x1289c8f0 */
  goto L_1289c8f0;
L_1289c862:;
  /* 1289c862 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289c866 jne 0x1289c873 */
  if (!C.zf) goto L_1289c873;
  /* 1289c868 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1289c86b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 1289c86e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1289c871 jmp 0x1289c882 */
  goto L_1289c882;
L_1289c873:;
  /* 1289c873 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289c877 jne 0x1289c882 */
  if (!C.zf) goto L_1289c882;
  /* 1289c879 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1289c87c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1289c87f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1289c882:;
  /* 1289c882 call 0x1289c3f0 */
  push32(0x1289c887u); f_1289c3f0();
  /* 1289c887 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1289c88a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289c88e jne 0x1289c8ab */
  if (!C.zf) goto L_1289c8ab;
  /* 1289c890 call 0x1289c3d0 */
  push32(0x1289c895u); f_1289c3d0();
  /* 1289c895 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 1289c89b call 0x1289c3e0 */
  push32(0x1289c8a0u); f_1289c3e0();
  /* 1289c8a0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1289c8a6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1289c8a9 jmp 0x1289c8f0 */
  goto L_1289c8f0;
L_1289c8ab:;
  /* 1289c8ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289c8ae push eax */
  push32((uint32_t)(EAX));
  /* 1289c8af mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289c8b2 push ecx */
  push32((uint32_t)(ECX));
  /* 1289c8b3 call 0x1289c5e0 */
  push32(0x1289c8b8u); f_1289c5e0();
  /* 1289c8b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289c8bb mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1289c8be or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 1289c8c1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1289c8c4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289c8c7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1289c8ca mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289c8cd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1289c8d0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1289c8d3 mov edx, dword ptr [eax*4 + 0x128c1060] */
  EDX = (r32((uint32_t)(EAX*4 + 0x128c1060)));
  /* 1289c8da mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1289c8dd mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 1289c8e1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289c8e4 push ecx */
  push32((uint32_t)(ECX));
  /* 1289c8e5 call 0x1289c990 */
  push32(0x1289c8eau); f_1289c990();
  /* 1289c8ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289c8ed mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1289c8f0:;
  /* 1289c8f0 mov esp, ebp */
  ESP = (EBP);
  /* 1289c8f2 pop ebp */
  EBP = (pop32());
  /* 1289c8f3 ret  */
  ESPCHK(0x1289c7f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c900 @ 0x1289c900 (134 bytes, 44 insns) */
void f_1289c900(void) {
  FTRACE(0x1289c900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289c900 push ebp */
  push32((uint32_t)(EBP));
  /* 1289c901 mov ebp, esp */
  EBP = (ESP);
  /* 1289c903 push ecx */
  push32((uint32_t)(ECX));
  /* 1289c904 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289c907 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1289c90a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289c90d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1289c910 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1289c913 mov edx, dword ptr [eax*4 + 0x128c1060] */
  EDX = (r32((uint32_t)(EAX*4 + 0x128c1060)));
  /* 1289c91a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289c91c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1289c91f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289c922 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289c926 jne 0x1289c961 */
  if (!C.zf) goto L_1289c961;
  /* 1289c928 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1289c92a call 0x12899210 */
  push32(0x1289c92fu); f_12899210();
  /* 1289c92f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289c932 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289c935 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289c939 jne 0x1289c957 */
  if (!C.zf) goto L_1289c957;
  /* 1289c93b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289c93e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289c941 push edx */
  push32((uint32_t)(EDX));
  /* 1289c942 call dword ptr [0x128c22a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22a8))), 0x1289c948u);
  /* 1289c948 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289c94b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1289c94e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289c951 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289c954 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1289c957:;
  /* 1289c957 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1289c959 call 0x128992b0 */
  push32(0x1289c95eu); f_128992b0();
  /* 1289c95e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1289c961:;
  /* 1289c961 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289c964 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1289c967 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289c96a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1289c96d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1289c970 mov edx, dword ptr [eax*4 + 0x128c1060] */
  EDX = (r32((uint32_t)(EAX*4 + 0x128c1060)));
  /* 1289c977 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1289c97b push eax */
  push32((uint32_t)(EAX));
  /* 1289c97c call dword ptr [0x128c22a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22a0))), 0x1289c982u);
  /* 1289c982 mov esp, ebp */
  ESP = (EBP);
  /* 1289c984 pop ebp */
  EBP = (pop32());
  /* 1289c985 ret  */
  ESPCHK(0x1289c900u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x1289c990 (38 bytes, 13 insns) */
void f_1289c990(void) {
  FTRACE(0x1289c990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289c990 push ebp */
  push32((uint32_t)(EBP));
  /* 1289c991 mov ebp, esp */
  EBP = (ESP);
  /* 1289c993 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289c996 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1289c999 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289c99c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1289c99f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1289c9a2 mov edx, dword ptr [eax*4 + 0x128c1060] */
  EDX = (r32((uint32_t)(EAX*4 + 0x128c1060)));
  /* 1289c9a9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1289c9ad push eax */
  push32((uint32_t)(EAX));
  /* 1289c9ae call dword ptr [0x128c22a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22a4))), 0x1289c9b4u);
  /* 1289c9b4 pop ebp */
  EBP = (pop32());
  /* 1289c9b5 ret  */
  ESPCHK(0x1289c990u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c9c0 @ 0x1289c9c0 (218 bytes, 63 insns) */
void f_1289c9c0(void) {
  FTRACE(0x1289c9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289c9c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1289c9c1 mov ebp, esp */
  EBP = (ESP);
  /* 1289c9c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289c9c6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1289c9cd push 2 */
  push32((uint32_t)(0x2u));
  /* 1289c9cf call 0x12899210 */
  push32(0x1289c9d4u); f_12899210();
  /* 1289c9d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289c9d7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 1289c9de jmp 0x1289c9e9 */
  goto L_1289c9e9;
L_1289c9e0:;
  /* 1289c9e0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289c9e3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289c9e6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1289c9e9:;
  /* 1289c9e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289c9ec cmp ecx, dword ptr [0x128c1040] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x128c1040))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289c9f2 jge 0x1289ca89 */
  if ((C.sf==C.of)) goto L_1289ca89;
  /* 1289c9f8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289c9fb mov eax, dword ptr [0x128bfcec] */
  EAX = (r32((uint32_t)(0x128bfcec)));
  /* 1289ca00 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289ca04 je 0x1289ca84 */
  if (C.zf) goto L_1289ca84;
  /* 1289ca06 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289ca09 mov edx, dword ptr [0x128bfcec] */
  EDX = (r32((uint32_t)(0x128bfcec)));
  /* 1289ca0f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1289ca12 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1289ca15 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1289ca1b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1289ca1d je 0x1289ca41 */
  if (C.zf) goto L_1289ca41;
  /* 1289ca1f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289ca22 mov eax, dword ptr [0x128bfcec] */
  EAX = (r32((uint32_t)(0x128bfcec)));
  /* 1289ca27 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1289ca2a push ecx */
  push32((uint32_t)(ECX));
  /* 1289ca2b call 0x1289e010 */
  push32(0x1289ca30u); f_1289e010();
  /* 1289ca30 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ca33 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289ca36 je 0x1289ca41 */
  if (C.zf) goto L_1289ca41;
  /* 1289ca38 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289ca3b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ca3e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1289ca41:;
  /* 1289ca41 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289ca45 jl 0x1289ca84 */
  if ((C.sf!=C.of)) goto L_1289ca84;
  /* 1289ca47 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289ca4a mov ecx, dword ptr [0x128bfcec] */
  ECX = (r32((uint32_t)(0x128bfcec)));
  /* 1289ca50 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1289ca53 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ca56 push edx */
  push32((uint32_t)(EDX));
  /* 1289ca57 call dword ptr [0x128c2264] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2264))), 0x1289ca5du);
  /* 1289ca5d push 2 */
  push32((uint32_t)(0x2u));
  /* 1289ca5f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289ca62 mov ecx, dword ptr [0x128bfcec] */
  ECX = (r32((uint32_t)(0x128bfcec)));
  /* 1289ca68 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1289ca6b push edx */
  push32((uint32_t)(EDX));
  /* 1289ca6c call 0x128958f0 */
  push32(0x1289ca71u); f_128958f0();
  /* 1289ca71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ca74 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289ca77 mov ecx, dword ptr [0x128bfcec] */
  ECX = (r32((uint32_t)(0x128bfcec)));
  /* 1289ca7d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_1289ca84:;
  /* 1289ca84 jmp 0x1289c9e0 */
  goto L_1289c9e0;
L_1289ca89:;
  /* 1289ca89 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289ca8b call 0x128992b0 */
  push32(0x1289ca90u); f_128992b0();
  /* 1289ca90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ca93 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289ca96 mov esp, ebp */
  ESP = (EBP);
  /* 1289ca98 pop ebp */
  EBP = (pop32());
  /* 1289ca99 ret  */
  ESPCHK(0x1289c9c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000caa0 @ 0x1289caa0 (68 bytes, 26 insns) */
void f_1289caa0(void) {
  FTRACE(0x1289caa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289caa0 push ebp */
  push32((uint32_t)(EBP));
  /* 1289caa1 mov ebp, esp */
  EBP = (ESP);
  /* 1289caa3 push ecx */
  push32((uint32_t)(ECX));
  /* 1289caa4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289caa8 jne 0x1289cab6 */
  if (!C.zf) goto L_1289cab6;
  /* 1289caaa push 0 */
  push32((uint32_t)(0x0u));
  /* 1289caac call 0x1289cc10 */
  push32(0x1289cab1u); f_1289cc10();
  /* 1289cab1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289cab4 jmp 0x1289cae0 */
  goto L_1289cae0;
L_1289cab6:;
  /* 1289cab6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289cab9 push eax */
  push32((uint32_t)(EAX));
  /* 1289caba call 0x12898e40 */
  push32(0x1289cabfu); f_12898e40();
  /* 1289cabf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289cac2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289cac5 push ecx */
  push32((uint32_t)(ECX));
  /* 1289cac6 call 0x1289caf0 */
  push32(0x1289cacbu); f_1289caf0();
  /* 1289cacb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289cace mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1289cad1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289cad4 push edx */
  push32((uint32_t)(EDX));
  /* 1289cad5 call 0x12898eb0 */
  push32(0x1289cadau); f_12898eb0();
  /* 1289cada add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289cadd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1289cae0:;
  /* 1289cae0 mov esp, ebp */
  ESP = (EBP);
  /* 1289cae2 pop ebp */
  EBP = (pop32());
  /* 1289cae3 ret  */
  ESPCHK(0x1289caa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000caf0 @ 0x1289caf0 (65 bytes, 26 insns) */
void f_1289caf0(void) {
  FTRACE(0x1289caf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289caf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1289caf1 mov ebp, esp */
  EBP = (ESP);
  /* 1289caf3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289caf6 push eax */
  push32((uint32_t)(EAX));
  /* 1289caf7 call 0x1289cb40 */
  push32(0x1289cafcu); f_1289cb40();
  /* 1289cafc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289caff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289cb01 je 0x1289cb08 */
  if (C.zf) goto L_1289cb08;
  /* 1289cb03 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1289cb06 jmp 0x1289cb2f */
  goto L_1289cb2f;
L_1289cb08:;
  /* 1289cb08 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289cb0b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1289cb0e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1289cb14 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1289cb16 je 0x1289cb2d */
  if (C.zf) goto L_1289cb2d;
  /* 1289cb18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289cb1b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1289cb1e push ecx */
  push32((uint32_t)(ECX));
  /* 1289cb1f call 0x1289e160 */
  push32(0x1289cb24u); f_1289e160();
  /* 1289cb24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289cb27 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1289cb29 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289cb2b jmp 0x1289cb2f */
  goto L_1289cb2f;
L_1289cb2d:;
  /* 1289cb2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1289cb2f:;
  /* 1289cb2f pop ebp */
  EBP = (pop32());
  /* 1289cb30 ret  */
  ESPCHK(0x1289caf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cb40 @ 0x1289cb40 (183 bytes, 62 insns) */
void f_1289cb40(void) {
  FTRACE(0x1289cb40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289cb40 push ebp */
  push32((uint32_t)(EBP));
  /* 1289cb41 mov ebp, esp */
  EBP = (ESP);
  /* 1289cb43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289cb46 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1289cb4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289cb50 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1289cb53 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289cb56 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1289cb59 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1289cb5c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289cb5f jne 0x1289cbdb */
  if (!C.zf) goto L_1289cbdb;
  /* 1289cb61 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289cb64 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1289cb67 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 1289cb6d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1289cb6f je 0x1289cbdb */
  if (C.zf) goto L_1289cbdb;
  /* 1289cb71 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289cb74 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289cb77 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1289cb79 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289cb7c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1289cb7f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289cb83 jle 0x1289cbdb */
  if ((C.zf||C.sf!=C.of)) goto L_1289cbdb;
  /* 1289cb85 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289cb88 push edx */
  push32((uint32_t)(EDX));
  /* 1289cb89 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289cb8c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1289cb8f push ecx */
  push32((uint32_t)(ECX));
  /* 1289cb90 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289cb93 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1289cb96 push eax */
  push32((uint32_t)(EAX));
  /* 1289cb97 call 0x128988d0 */
  push32(0x1289cb9cu); f_128988d0();
  /* 1289cb9c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289cb9f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289cba2 jne 0x1289cbc5 */
  if (!C.zf) goto L_1289cbc5;
  /* 1289cba4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289cba7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1289cbaa and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1289cbb0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1289cbb2 je 0x1289cbc3 */
  if (C.zf) goto L_1289cbc3;
  /* 1289cbb4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289cbb7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1289cbba and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 1289cbbd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289cbc0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_1289cbc3:;
  /* 1289cbc3 jmp 0x1289cbdb */
  goto L_1289cbdb;
L_1289cbc5:;
  /* 1289cbc5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289cbc8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1289cbcb or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1289cbce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289cbd1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1289cbd4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1289cbdb:;
  /* 1289cbdb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289cbde mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289cbe1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1289cbe4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1289cbe6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289cbe9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1289cbf0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289cbf3 mov esp, ebp */
  ESP = (EBP);
  /* 1289cbf5 pop ebp */
  EBP = (pop32());
  /* 1289cbf6 ret  */
  ESPCHK(0x1289cb40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc00 @ 0x1289cc00 (15 bytes, 7 insns) */
void f_1289cc00(void) {
  FTRACE(0x1289cc00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289cc00 push ebp */
  push32((uint32_t)(EBP));
  /* 1289cc01 mov ebp, esp */
  EBP = (ESP);
  /* 1289cc03 push 1 */
  push32((uint32_t)(0x1u));
  /* 1289cc05 call 0x1289cc10 */
  push32(0x1289cc0au); f_1289cc10();
  /* 1289cc0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289cc0d pop ebp */
  EBP = (pop32());
  /* 1289cc0e ret  */
  ESPCHK(0x1289cc00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc10 @ 0x1289cc10 (319 bytes, 94 insns) */
void f_1289cc10(void) {
  FTRACE(0x1289cc10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289cc10 push ebp */
  push32((uint32_t)(EBP));
  /* 1289cc11 mov ebp, esp */
  EBP = (ESP);
  /* 1289cc13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289cc16 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1289cc1d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1289cc24 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289cc26 call 0x12899210 */
  push32(0x1289cc2bu); f_12899210();
  /* 1289cc2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289cc2e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1289cc35 jmp 0x1289cc40 */
  goto L_1289cc40;
L_1289cc37:;
  /* 1289cc37 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289cc3a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289cc3d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1289cc40:;
  /* 1289cc40 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289cc43 cmp ecx, dword ptr [0x128c1040] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x128c1040))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289cc49 jge 0x1289cd33 */
  if ((C.sf==C.of)) goto L_1289cd33;
  /* 1289cc4f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289cc52 mov eax, dword ptr [0x128bfcec] */
  EAX = (r32((uint32_t)(0x128bfcec)));
  /* 1289cc57 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289cc5b je 0x1289cd2e */
  if (C.zf) goto L_1289cd2e;
  /* 1289cc61 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289cc64 mov edx, dword ptr [0x128bfcec] */
  EDX = (r32((uint32_t)(0x128bfcec)));
  /* 1289cc6a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1289cc6d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1289cc70 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1289cc76 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1289cc78 je 0x1289cd2e */
  if (C.zf) goto L_1289cd2e;
  /* 1289cc7e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289cc81 mov eax, dword ptr [0x128bfcec] */
  EAX = (r32((uint32_t)(0x128bfcec)));
  /* 1289cc86 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1289cc89 push ecx */
  push32((uint32_t)(ECX));
  /* 1289cc8a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289cc8d push edx */
  push32((uint32_t)(EDX));
  /* 1289cc8e call 0x12898e80 */
  push32(0x1289cc93u); f_12898e80();
  /* 1289cc93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289cc96 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289cc99 mov ecx, dword ptr [0x128bfcec] */
  ECX = (r32((uint32_t)(0x128bfcec)));
  /* 1289cc9f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1289cca2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1289cca5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1289ccaa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289ccac je 0x1289cd15 */
  if (C.zf) goto L_1289cd15;
  /* 1289ccae cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289ccb2 jne 0x1289ccd9 */
  if (!C.zf) goto L_1289ccd9;
  /* 1289ccb4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289ccb7 mov edx, dword ptr [0x128bfcec] */
  EDX = (r32((uint32_t)(0x128bfcec)));
  /* 1289ccbd mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1289ccc0 push eax */
  push32((uint32_t)(EAX));
  /* 1289ccc1 call 0x1289caf0 */
  push32(0x1289ccc6u); f_1289caf0();
  /* 1289ccc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ccc9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289cccc je 0x1289ccd7 */
  if (C.zf) goto L_1289ccd7;
  /* 1289ccce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289ccd1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ccd4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1289ccd7:;
  /* 1289ccd7 jmp 0x1289cd15 */
  goto L_1289cd15;
L_1289ccd9:;
  /* 1289ccd9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289ccdd jne 0x1289cd15 */
  if (!C.zf) goto L_1289cd15;
  /* 1289ccdf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289cce2 mov eax, dword ptr [0x128bfcec] */
  EAX = (r32((uint32_t)(0x128bfcec)));
  /* 1289cce7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1289ccea mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1289cced and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1289ccf0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1289ccf2 je 0x1289cd15 */
  if (C.zf) goto L_1289cd15;
  /* 1289ccf4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289ccf7 mov ecx, dword ptr [0x128bfcec] */
  ECX = (r32((uint32_t)(0x128bfcec)));
  /* 1289ccfd mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1289cd00 push edx */
  push32((uint32_t)(EDX));
  /* 1289cd01 call 0x1289caf0 */
  push32(0x1289cd06u); f_1289caf0();
  /* 1289cd06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289cd09 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289cd0c jne 0x1289cd15 */
  if (!C.zf) goto L_1289cd15;
  /* 1289cd0e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_1289cd15:;
  /* 1289cd15 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289cd18 mov ecx, dword ptr [0x128bfcec] */
  ECX = (r32((uint32_t)(0x128bfcec)));
  /* 1289cd1e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1289cd21 push edx */
  push32((uint32_t)(EDX));
  /* 1289cd22 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289cd25 push eax */
  push32((uint32_t)(EAX));
  /* 1289cd26 call 0x12898ef0 */
  push32(0x1289cd2bu); f_12898ef0();
  /* 1289cd2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1289cd2e:;
  /* 1289cd2e jmp 0x1289cc37 */
  goto L_1289cc37;
L_1289cd33:;
  /* 1289cd33 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289cd35 call 0x128992b0 */
  push32(0x1289cd3au); f_128992b0();
  /* 1289cd3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289cd3d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289cd41 jne 0x1289cd48 */
  if (!C.zf) goto L_1289cd48;
  /* 1289cd43 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289cd46 jmp 0x1289cd4b */
  goto L_1289cd4b;
L_1289cd48:;
  /* 1289cd48 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1289cd4b:;
  /* 1289cd4b mov esp, ebp */
  ESP = (EBP);
  /* 1289cd4d pop ebp */
  EBP = (pop32());
  /* 1289cd4e ret  */
  ESPCHK(0x1289cc10u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x1289cd50 (15 bytes, 7 insns) */
void f_1289cd50(void) {
  FTRACE(0x1289cd50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289cd50 push ebp */
  push32((uint32_t)(EBP));
  /* 1289cd51 mov ebp, esp */
  EBP = (ESP);
  /* 1289cd53 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289cd55 call 0x12892cb0 */
  push32(0x1289cd5au); f_12892cb0();
  /* 1289cd5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289cd5d pop ebp */
  EBP = (pop32());
  /* 1289cd5e ret  */
  ESPCHK(0x1289cd50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd60 @ 0x1289cd60 (1007 bytes, 269 insns) */
void f_1289cd60(void) {
  FTRACE(0x1289cd60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289cd60 push ebp */
  push32((uint32_t)(EBP));
  /* 1289cd61 mov ebp, esp */
  EBP = (ESP);
  /* 1289cd63 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289cd69 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289cd6d jl 0x1289cd75 */
  if ((C.sf!=C.of)) goto L_1289cd75;
  /* 1289cd6f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289cd73 jle 0x1289cd7c */
  if ((C.zf||C.sf!=C.of)) goto L_1289cd7c;
L_1289cd75:;
  /* 1289cd75 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289cd77 jmp 0x1289d14b */
  goto L_1289d14b;
L_1289cd7c:;
  /* 1289cd7c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1289cd7e call 0x12899210 */
  push32(0x1289cd83u); f_12899210();
  /* 1289cd83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289cd86 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1289cd8d mov eax, dword ptr [0x128bfa1c] */
  EAX = (r32((uint32_t)(0x128bfa1c)));
  /* 1289cd92 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289cd95 mov dword ptr [0x128bfa1c], eax */
  w32((uint32_t)(0x128bfa1c), (EAX));
L_1289cd9a:;
  /* 1289cd9a cmp dword ptr [0x128bfa2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bfa2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289cda1 je 0x1289cdad */
  if (C.zf) goto L_1289cdad;
  /* 1289cda3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1289cda5 call dword ptr [0x128c22d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22d0))), 0x1289cdabu);
  /* 1289cdab jmp 0x1289cd9a */
  goto L_1289cd9a;
L_1289cdad:;
  /* 1289cdad cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289cdb1 je 0x1289cdf1 */
  if (C.zf) goto L_1289cdf1;
  /* 1289cdb3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289cdb7 je 0x1289cdd1 */
  if (C.zf) goto L_1289cdd1;
  /* 1289cdb9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289cdbc push ecx */
  push32((uint32_t)(ECX));
  /* 1289cdbd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289cdc0 push edx */
  push32((uint32_t)(EDX));
  /* 1289cdc1 call 0x1289d150 */
  push32(0x1289cdc6u); f_1289d150();
  /* 1289cdc6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289cdc9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 1289cdcf jmp 0x1289cde3 */
  goto L_1289cde3;
L_1289cdd1:;
  /* 1289cdd1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289cdd4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1289cdd7 mov ecx, dword ptr [eax + 0x128be4dc] */
  ECX = (r32((uint32_t)(EAX + 0x128be4dc)));
  /* 1289cddd mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_1289cde3:;
  /* 1289cde3 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1289cde9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1289cdec jmp 0x1289d12b */
  goto L_1289d12b;
L_1289cdf1:;
  /* 1289cdf1 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 1289cdf8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1289cdff cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289ce03 je 0x1289d123 */
  if (C.zf) goto L_1289d123;
  /* 1289ce09 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289ce0c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1289ce0f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289ce12 jne 0x1289d034 */
  if (!C.zf) goto L_1289d034;
  /* 1289ce18 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289ce1b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1289ce1f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289ce22 jne 0x1289d034 */
  if (!C.zf) goto L_1289d034;
  /* 1289ce28 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289ce2b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 1289ce2f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289ce32 jne 0x1289d034 */
  if (!C.zf) goto L_1289d034;
  /* 1289ce38 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289ce3b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_1289ce41:;
  /* 1289ce41 push 0x128bb74c */
  push32((uint32_t)(0x128bb74cu));
  /* 1289ce46 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1289ce4c push ecx */
  push32((uint32_t)(ECX));
  /* 1289ce4d call 0x1289f810 */
  push32(0x1289ce52u); f_1289f810();
  /* 1289ce52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ce55 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 1289ce5b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289ce62 je 0x1289ce8d */
  if (C.zf) goto L_1289ce8d;
  /* 1289ce64 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1289ce6a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289ce70 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 1289ce76 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289ce7d je 0x1289ce8d */
  if (C.zf) goto L_1289ce8d;
  /* 1289ce7f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1289ce85 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1289ce88 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289ce8b jne 0x1289ceb3 */
  if (!C.zf) goto L_1289ceb3;
L_1289ce8d:;
  /* 1289ce8d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289ce91 je 0x1289ceac */
  if (C.zf) goto L_1289ceac;
  /* 1289ce93 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1289ce95 call 0x128992b0 */
  push32(0x1289ce9au); f_128992b0();
  /* 1289ce9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ce9d mov edx, dword ptr [0x128bfa1c] */
  EDX = (r32((uint32_t)(0x128bfa1c)));
  /* 1289cea3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289cea6 mov dword ptr [0x128bfa1c], edx */
  w32((uint32_t)(0x128bfa1c), (EDX));
L_1289ceac:;
  /* 1289ceac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289ceae jmp 0x1289d14b */
  goto L_1289d14b;
L_1289ceb3:;
  /* 1289ceb3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1289ceba jmp 0x1289cec5 */
  goto L_1289cec5;
L_1289cebc:;
  /* 1289cebc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289cebf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289cec2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1289cec5:;
  /* 1289cec5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289cec9 jg 0x1289cf13 */
  if ((!C.zf&&C.sf==C.of)) goto L_1289cf13;
  /* 1289cecb mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1289ced1 push ecx */
  push32((uint32_t)(ECX));
  /* 1289ced2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1289ced8 push edx */
  push32((uint32_t)(EDX));
  /* 1289ced9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289cedc imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1289cedf mov ecx, dword ptr [eax + 0x128be4d8] */
  ECX = (r32((uint32_t)(EAX + 0x128be4d8)));
  /* 1289cee5 push ecx */
  push32((uint32_t)(ECX));
  /* 1289cee6 call 0x1289f7d0 */
  push32(0x1289ceebu); f_1289f7d0();
  /* 1289ceeb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ceee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289cef0 jne 0x1289cf11 */
  if (!C.zf) goto L_1289cf11;
  /* 1289cef2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289cef5 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1289cef8 mov eax, dword ptr [edx + 0x128be4d8] */
  EAX = (r32((uint32_t)(EDX + 0x128be4d8)));
  /* 1289cefe push eax */
  push32((uint32_t)(EAX));
  /* 1289ceff call 0x12897c90 */
  push32(0x1289cf04u); f_12897c90();
  /* 1289cf04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289cf07 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289cf0d jne 0x1289cf11 */
  if (!C.zf) goto L_1289cf11;
  /* 1289cf0f jmp 0x1289cf13 */
  goto L_1289cf13;
L_1289cf11:;
  /* 1289cf11 jmp 0x1289cebc */
  goto L_1289cebc;
L_1289cf13:;
  /* 1289cf13 push 0x128bb748 */
  push32((uint32_t)(0x128bb748u));
  /* 1289cf18 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1289cf1e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289cf21 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 1289cf27 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1289cf2d push edx */
  push32((uint32_t)(EDX));
  /* 1289cf2e call 0x1289f790 */
  push32(0x1289cf33u); f_1289f790();
  /* 1289cf33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289cf36 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 1289cf3c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289cf43 jne 0x1289cf79 */
  if (!C.zf) goto L_1289cf79;
  /* 1289cf45 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1289cf4b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1289cf4e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289cf51 je 0x1289cf79 */
  if (C.zf) goto L_1289cf79;
  /* 1289cf53 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289cf57 je 0x1289cf72 */
  if (C.zf) goto L_1289cf72;
  /* 1289cf59 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1289cf5b call 0x128992b0 */
  push32(0x1289cf60u); f_128992b0();
  /* 1289cf60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289cf63 mov edx, dword ptr [0x128bfa1c] */
  EDX = (r32((uint32_t)(0x128bfa1c)));
  /* 1289cf69 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289cf6c mov dword ptr [0x128bfa1c], edx */
  w32((uint32_t)(0x128bfa1c), (EDX));
L_1289cf72:;
  /* 1289cf72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289cf74 jmp 0x1289d14b */
  goto L_1289d14b;
L_1289cf79:;
  /* 1289cf79 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289cf7d jg 0x1289cfca */
  if ((!C.zf&&C.sf==C.of)) goto L_1289cfca;
  /* 1289cf7f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1289cf85 push eax */
  push32((uint32_t)(EAX));
  /* 1289cf86 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1289cf8c push ecx */
  push32((uint32_t)(ECX));
  /* 1289cf8d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1289cf93 push edx */
  push32((uint32_t)(EDX));
  /* 1289cf94 call 0x12898680 */
  push32(0x1289cf99u); f_12898680();
  /* 1289cf99 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289cf9c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1289cfa2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 1289cfaa lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 1289cfb0 push ecx */
  push32((uint32_t)(ECX));
  /* 1289cfb1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289cfb4 push edx */
  push32((uint32_t)(EDX));
  /* 1289cfb5 call 0x1289d150 */
  push32(0x1289cfbau); f_1289d150();
  /* 1289cfba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289cfbd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289cfbf je 0x1289cfca */
  if (C.zf) goto L_1289cfca;
  /* 1289cfc1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289cfc4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289cfc7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1289cfca:;
  /* 1289cfca mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1289cfd0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289cfd6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 1289cfdc mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1289cfe2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1289cfe5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289cfe7 je 0x1289cff8 */
  if (C.zf) goto L_1289cff8;
  /* 1289cfe9 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1289cfef add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289cff2 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_1289cff8:;
  /* 1289cff8 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1289cffe movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1289d001 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289d003 jne 0x1289ce41 */
  if (!C.zf) goto L_1289ce41;
  /* 1289d009 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289d00d je 0x1289d01c */
  if (C.zf) goto L_1289d01c;
  /* 1289d00f call 0x1289d2f0 */
  push32(0x1289d014u); f_1289d2f0();
  /* 1289d014 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 1289d01a jmp 0x1289d026 */
  goto L_1289d026;
L_1289d01c:;
  /* 1289d01c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_1289d026:;
  /* 1289d026 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 1289d02c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1289d02f jmp 0x1289d121 */
  goto L_1289d121;
L_1289d034:;
  /* 1289d034 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289d037 push edx */
  push32((uint32_t)(EDX));
  /* 1289d038 push 0 */
  push32((uint32_t)(0x0u));
  /* 1289d03a push 0 */
  push32((uint32_t)(0x0u));
  /* 1289d03c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1289d042 push eax */
  push32((uint32_t)(EAX));
  /* 1289d043 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289d046 push ecx */
  push32((uint32_t)(ECX));
  /* 1289d047 call 0x1289d3f0 */
  push32(0x1289d04cu); f_1289d3f0();
  /* 1289d04c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d04f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1289d052 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289d056 je 0x1289d121 */
  if (C.zf) goto L_1289d121;
  /* 1289d05c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1289d063 jmp 0x1289d06e */
  goto L_1289d06e;
L_1289d065:;
  /* 1289d065 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289d068 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d06b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1289d06e:;
  /* 1289d06e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289d072 jg 0x1289d0d0 */
  if ((!C.zf&&C.sf==C.of)) goto L_1289d0d0;
  /* 1289d074 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289d078 je 0x1289d0ce */
  if (C.zf) goto L_1289d0ce;
  /* 1289d07a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289d07d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1289d080 mov ecx, dword ptr [eax + 0x128be4dc] */
  ECX = (r32((uint32_t)(EAX + 0x128be4dc)));
  /* 1289d086 push ecx */
  push32((uint32_t)(ECX));
  /* 1289d087 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1289d08d push edx */
  push32((uint32_t)(EDX));
  /* 1289d08e call 0x1289f700 */
  push32(0x1289d093u); f_1289f700();
  /* 1289d093 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d096 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289d098 je 0x1289d0c5 */
  if (C.zf) goto L_1289d0c5;
  /* 1289d09a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1289d0a0 push eax */
  push32((uint32_t)(EAX));
  /* 1289d0a1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289d0a4 push ecx */
  push32((uint32_t)(ECX));
  /* 1289d0a5 call 0x1289d150 */
  push32(0x1289d0aau); f_1289d150();
  /* 1289d0aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d0ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289d0af je 0x1289d0bc */
  if (C.zf) goto L_1289d0bc;
  /* 1289d0b1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289d0b4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d0b7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1289d0ba jmp 0x1289d0c3 */
  goto L_1289d0c3;
L_1289d0bc:;
  /* 1289d0bc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_1289d0c3:;
  /* 1289d0c3 jmp 0x1289d0ce */
  goto L_1289d0ce;
L_1289d0c5:;
  /* 1289d0c5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289d0c8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d0cb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1289d0ce:;
  /* 1289d0ce jmp 0x1289d065 */
  goto L_1289d065;
L_1289d0d0:;
  /* 1289d0d0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289d0d4 je 0x1289d0fb */
  if (C.zf) goto L_1289d0fb;
  /* 1289d0d6 call 0x1289d2f0 */
  push32(0x1289d0dbu); f_1289d2f0();
  /* 1289d0db mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1289d0de push 2 */
  push32((uint32_t)(0x2u));
  /* 1289d0e0 mov ecx, dword ptr [0x128be4dc] */
  ECX = (r32((uint32_t)(0x128be4dc)));
  /* 1289d0e6 push ecx */
  push32((uint32_t)(ECX));
  /* 1289d0e7 call 0x128958f0 */
  push32(0x1289d0ecu); f_128958f0();
  /* 1289d0ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d0ef mov dword ptr [0x128be4dc], 0 */
  w32((uint32_t)(0x128be4dc), (0x0u));
  /* 1289d0f9 jmp 0x1289d121 */
  goto L_1289d121;
L_1289d0fb:;
  /* 1289d0fb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289d0ff je 0x1289d10e */
  if (C.zf) goto L_1289d10e;
  /* 1289d101 call 0x1289d2f0 */
  push32(0x1289d106u); f_1289d2f0();
  /* 1289d106 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 1289d10c jmp 0x1289d118 */
  goto L_1289d118;
L_1289d10e:;
  /* 1289d10e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_1289d118:;
  /* 1289d118 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 1289d11e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1289d121:;
  /* 1289d121 jmp 0x1289d12b */
  goto L_1289d12b;
L_1289d123:;
  /* 1289d123 call 0x1289d2f0 */
  push32(0x1289d128u); f_1289d2f0();
  /* 1289d128 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1289d12b:;
  /* 1289d12b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289d12f je 0x1289d148 */
  if (C.zf) goto L_1289d148;
  /* 1289d131 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1289d133 call 0x128992b0 */
  push32(0x1289d138u); f_128992b0();
  /* 1289d138 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d13b mov eax, dword ptr [0x128bfa1c] */
  EAX = (r32((uint32_t)(0x128bfa1c)));
  /* 1289d140 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289d143 mov dword ptr [0x128bfa1c], eax */
  w32((uint32_t)(0x128bfa1c), (EAX));
L_1289d148:;
  /* 1289d148 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1289d14b:;
  /* 1289d14b mov esp, ebp */
  ESP = (EBP);
  /* 1289d14d pop ebp */
  EBP = (pop32());
  /* 1289d14e ret  */
  ESPCHK(0x1289cd60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d150 @ 0x1289d150 (403 bytes, 117 insns) */
void f_1289d150(void) {
  FTRACE(0x1289d150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289d150 push ebp */
  push32((uint32_t)(EBP));
  /* 1289d151 mov ebp, esp */
  EBP = (ESP);
  /* 1289d153 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289d159 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289d15c push eax */
  push32((uint32_t)(EAX));
  /* 1289d15d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 1289d163 push ecx */
  push32((uint32_t)(ECX));
  /* 1289d164 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 1289d16a push edx */
  push32((uint32_t)(EDX));
  /* 1289d16b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 1289d171 push eax */
  push32((uint32_t)(EAX));
  /* 1289d172 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289d175 push ecx */
  push32((uint32_t)(ECX));
  /* 1289d176 call 0x1289d3f0 */
  push32(0x1289d17bu); f_1289d3f0();
  /* 1289d17b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d17e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289d180 jne 0x1289d189 */
  if (!C.zf) goto L_1289d189;
  /* 1289d182 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289d184 jmp 0x1289d2df */
  goto L_1289d2df;
L_1289d189:;
  /* 1289d189 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 1289d18e push 0x128bb750 */
  push32((uint32_t)(0x128bb750u));
  /* 1289d193 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289d195 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 1289d19b push edx */
  push32((uint32_t)(EDX));
  /* 1289d19c call 0x12897c90 */
  push32(0x1289d1a1u); f_12897c90();
  /* 1289d1a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d1a4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d1a7 push eax */
  push32((uint32_t)(EAX));
  /* 1289d1a8 call 0x12894e60 */
  push32(0x1289d1adu); f_12894e60();
  /* 1289d1ad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d1b0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1289d1b3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289d1b7 jne 0x1289d1c0 */
  if (!C.zf) goto L_1289d1c0;
  /* 1289d1b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289d1bb jmp 0x1289d2df */
  goto L_1289d2df;
L_1289d1c0:;
  /* 1289d1c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289d1c3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1289d1c6 mov ecx, dword ptr [eax + 0x128be4dc] */
  ECX = (r32((uint32_t)(EAX + 0x128be4dc)));
  /* 1289d1cc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1289d1cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289d1d2 mov eax, dword ptr [edx*4 + 0x128bf8a0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x128bf8a0)));
  /* 1289d1d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1289d1dc push 6 */
  push32((uint32_t)(0x6u));
  /* 1289d1de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289d1e1 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1289d1e4 add ecx, 0x128bf8e4 */
  { uint32_t _a=(ECX),_b=(0x128bf8e4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d1ea push ecx */
  push32((uint32_t)(ECX));
  /* 1289d1eb lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 1289d1ee push edx */
  push32((uint32_t)(EDX));
  /* 1289d1ef call 0x1289bff0 */
  push32(0x1289d1f4u); f_1289bff0();
  /* 1289d1f4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d1f7 mov eax, dword ptr [0x128bf8b8] */
  EAX = (r32((uint32_t)(0x128bf8b8)));
  /* 1289d1fc mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1289d1ff lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 1289d205 push ecx */
  push32((uint32_t)(ECX));
  /* 1289d206 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289d209 push edx */
  push32((uint32_t)(EDX));
  /* 1289d20a call 0x12897e10 */
  push32(0x1289d20fu); f_12897e10();
  /* 1289d20f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d212 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289d215 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1289d218 mov dword ptr [ecx + 0x128be4dc], eax */
  w32((uint32_t)(ECX + 0x128be4dc), (EAX));
  /* 1289d21e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1289d224 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1289d22a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289d22d mov dword ptr [eax*4 + 0x128bf8a0], edx */
  w32((uint32_t)(EAX*4 + 0x128bf8a0), (EDX));
  /* 1289d234 push 6 */
  push32((uint32_t)(0x6u));
  /* 1289d236 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 1289d23c push ecx */
  push32((uint32_t)(ECX));
  /* 1289d23d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289d240 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1289d243 add edx, 0x128bf8e4 */
  { uint32_t _a=(EDX),_b=(0x128bf8e4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d249 push edx */
  push32((uint32_t)(EDX));
  /* 1289d24a call 0x1289bff0 */
  push32(0x1289d24fu); f_1289bff0();
  /* 1289d24f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d252 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289d256 jne 0x1289d263 */
  if (!C.zf) goto L_1289d263;
  /* 1289d258 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1289d25e mov dword ptr [0x128bf8b8], eax */
  w32((uint32_t)(0x128bf8b8), (EAX));
L_1289d263:;
  /* 1289d263 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289d267 jne 0x1289d275 */
  if (!C.zf) goto L_1289d275;
  /* 1289d269 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1289d26f mov dword ptr [0x128bf8bc], ecx */
  w32((uint32_t)(0x128bf8bc), (ECX));
L_1289d275:;
  /* 1289d275 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289d278 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1289d27b call dword ptr [edx + 0x128be4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x128be4e0))), 0x1289d281u);
  /* 1289d281 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289d283 je 0x1289d2bc */
  if (C.zf) goto L_1289d2bc;
  /* 1289d285 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289d288 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1289d28b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289d28e mov dword ptr [eax + 0x128be4dc], ecx */
  w32((uint32_t)(EAX + 0x128be4dc), (ECX));
  /* 1289d294 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289d296 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289d299 push edx */
  push32((uint32_t)(EDX));
  /* 1289d29a call 0x128958f0 */
  push32(0x1289d29fu); f_128958f0();
  /* 1289d29f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d2a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289d2a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289d2a8 mov dword ptr [eax*4 + 0x128bf8a0], ecx */
  w32((uint32_t)(EAX*4 + 0x128bf8a0), (ECX));
  /* 1289d2af mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289d2b2 mov dword ptr [0x128bf8b8], edx */
  w32((uint32_t)(0x128bf8b8), (EDX));
  /* 1289d2b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289d2ba jmp 0x1289d2df */
  goto L_1289d2df;
L_1289d2bc:;
  /* 1289d2bc cmp dword ptr [ebp - 0xc], 0x128be3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x128be3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289d2c3 je 0x1289d2d3 */
  if (C.zf) goto L_1289d2d3;
  /* 1289d2c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289d2c7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289d2ca push eax */
  push32((uint32_t)(EAX));
  /* 1289d2cb call 0x128958f0 */
  push32(0x1289d2d0u); f_128958f0();
  /* 1289d2d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1289d2d3:;
  /* 1289d2d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289d2d6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1289d2d9 mov eax, dword ptr [ecx + 0x128be4dc] */
  EAX = (r32((uint32_t)(ECX + 0x128be4dc)));
L_1289d2df:;
  /* 1289d2df mov esp, ebp */
  ESP = (EBP);
  /* 1289d2e1 pop ebp */
  EBP = (pop32());
  /* 1289d2e2 ret  */
  ESPCHK(0x1289d150u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d2f0 @ 0x1289d2f0 (256 bytes, 72 insns) */
void f_1289d2f0(void) {
  FTRACE(0x1289d2f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289d2f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1289d2f1 mov ebp, esp */
  EBP = (ESP);
  /* 1289d2f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289d2f6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1289d2fd cmp dword ptr [0x128be4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128be4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289d304 jne 0x1289d324 */
  if (!C.zf) goto L_1289d324;
  /* 1289d306 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 1289d30b push 0x128bb750 */
  push32((uint32_t)(0x128bb750u));
  /* 1289d310 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289d312 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 1289d317 call 0x12894e60 */
  push32(0x1289d31cu); f_12894e60();
  /* 1289d31c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d31f mov dword ptr [0x128be4dc], eax */
  w32((uint32_t)(0x128be4dc), (EAX));
L_1289d324:;
  /* 1289d324 mov eax, dword ptr [0x128be4dc] */
  EAX = (r32((uint32_t)(0x128be4dc)));
  /* 1289d329 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1289d32c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1289d333 jmp 0x1289d33e */
  goto L_1289d33e;
L_1289d335:;
  /* 1289d335 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289d338 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d33b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1289d33e:;
  /* 1289d33e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289d341 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1289d344 mov eax, dword ptr [edx + 0x128be4dc] */
  EAX = (r32((uint32_t)(EDX + 0x128be4dc)));
  /* 1289d34a push eax */
  push32((uint32_t)(EAX));
  /* 1289d34b push 0x128bb75c */
  push32((uint32_t)(0x128bb75cu));
  /* 1289d350 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289d353 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1289d356 mov edx, dword ptr [ecx + 0x128be4d8] */
  EDX = (r32((uint32_t)(ECX + 0x128be4d8)));
  /* 1289d35c push edx */
  push32((uint32_t)(EDX));
  /* 1289d35d push 3 */
  push32((uint32_t)(0x3u));
  /* 1289d35f mov eax, dword ptr [0x128be4dc] */
  EAX = (r32((uint32_t)(0x128be4dc)));
  /* 1289d364 push eax */
  push32((uint32_t)(EAX));
  /* 1289d365 call 0x1289d590 */
  push32(0x1289d36au); f_1289d590();
  /* 1289d36a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d36d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289d371 jge 0x1289d3b9 */
  if ((C.sf==C.of)) goto L_1289d3b9;
  /* 1289d373 push 0x128bb748 */
  push32((uint32_t)(0x128bb748u));
  /* 1289d378 mov ecx, dword ptr [0x128be4dc] */
  ECX = (r32((uint32_t)(0x128be4dc)));
  /* 1289d37e push ecx */
  push32((uint32_t)(ECX));
  /* 1289d37f call 0x12897e20 */
  push32(0x1289d384u); f_12897e20();
  /* 1289d384 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d387 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289d38a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d38d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1289d390 mov eax, dword ptr [edx + 0x128be4dc] */
  EAX = (r32((uint32_t)(EDX + 0x128be4dc)));
  /* 1289d396 push eax */
  push32((uint32_t)(EAX));
  /* 1289d397 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289d39a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1289d39d mov edx, dword ptr [ecx + 0x128be4dc] */
  EDX = (r32((uint32_t)(ECX + 0x128be4dc)));
  /* 1289d3a3 push edx */
  push32((uint32_t)(EDX));
  /* 1289d3a4 call 0x1289f700 */
  push32(0x1289d3a9u); f_1289f700();
  /* 1289d3a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d3ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289d3ae je 0x1289d3b7 */
  if (C.zf) goto L_1289d3b7;
  /* 1289d3b0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1289d3b7:;
  /* 1289d3b7 jmp 0x1289d3e7 */
  goto L_1289d3e7;
L_1289d3b9:;
  /* 1289d3b9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289d3bd jne 0x1289d3c6 */
  if (!C.zf) goto L_1289d3c6;
  /* 1289d3bf mov eax, dword ptr [0x128be4dc] */
  EAX = (r32((uint32_t)(0x128be4dc)));
  /* 1289d3c4 jmp 0x1289d3ec */
  goto L_1289d3ec;
L_1289d3c6:;
  /* 1289d3c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289d3c8 mov eax, dword ptr [0x128be4dc] */
  EAX = (r32((uint32_t)(0x128be4dc)));
  /* 1289d3cd push eax */
  push32((uint32_t)(EAX));
  /* 1289d3ce call 0x128958f0 */
  push32(0x1289d3d3u); f_128958f0();
  /* 1289d3d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d3d6 mov dword ptr [0x128be4dc], 0 */
  w32((uint32_t)(0x128be4dc), (0x0u));
  /* 1289d3e0 mov eax, dword ptr [0x128be4f4] */
  EAX = (r32((uint32_t)(0x128be4f4)));
  /* 1289d3e5 jmp 0x1289d3ec */
  goto L_1289d3ec;
L_1289d3e7:;
  /* 1289d3e7 jmp 0x1289d335 */
  goto L_1289d335;
L_1289d3ec:;
  /* 1289d3ec mov esp, ebp */
  ESP = (EBP);
  /* 1289d3ee pop ebp */
  EBP = (pop32());
  /* 1289d3ef ret  */
  ESPCHK(0x1289d2f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d3f0 @ 0x1289d3f0 (388 bytes, 115 insns) */
void f_1289d3f0(void) {
  FTRACE(0x1289d3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289d3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1289d3f1 mov ebp, esp */
  EBP = (ESP);
  /* 1289d3f3 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289d3f9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289d3fd jne 0x1289d406 */
  if (!C.zf) goto L_1289d406;
  /* 1289d3ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289d401 jmp 0x1289d570 */
  goto L_1289d570;
L_1289d406:;
  /* 1289d406 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289d409 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1289d40c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289d40f jne 0x1289d460 */
  if (!C.zf) goto L_1289d460;
  /* 1289d411 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289d414 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1289d418 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289d41a jne 0x1289d460 */
  if (!C.zf) goto L_1289d460;
  /* 1289d41c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289d41f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 1289d422 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289d425 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 1289d429 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289d42d je 0x1289d449 */
  if (C.zf) goto L_1289d449;
  /* 1289d42f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1289d432 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 1289d437 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1289d43a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 1289d440 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1289d443 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_1289d449:;
  /* 1289d449 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289d44d je 0x1289d458 */
  if (C.zf) goto L_1289d458;
  /* 1289d44f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1289d452 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_1289d458:;
  /* 1289d458 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289d45b jmp 0x1289d570 */
  goto L_1289d570;
L_1289d460:;
  /* 1289d460 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289d463 push ecx */
  push32((uint32_t)(ECX));
  /* 1289d464 push 0x128be450 */
  push32((uint32_t)(0x128be450u));
  /* 1289d469 call 0x1289f700 */
  push32(0x1289d46eu); f_1289f700();
  /* 1289d46e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d471 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289d473 je 0x1289d528 */
  if (C.zf) goto L_1289d528;
  /* 1289d479 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289d47c push edx */
  push32((uint32_t)(EDX));
  /* 1289d47d push 0x128be3cc */
  push32((uint32_t)(0x128be3ccu));
  /* 1289d482 call 0x1289f700 */
  push32(0x1289d487u); f_1289f700();
  /* 1289d487 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d48a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289d48c je 0x1289d528 */
  if (C.zf) goto L_1289d528;
  /* 1289d492 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289d495 push eax */
  push32((uint32_t)(EAX));
  /* 1289d496 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 1289d49c push ecx */
  push32((uint32_t)(ECX));
  /* 1289d49d call 0x1289d5e0 */
  push32(0x1289d4a2u); f_1289d5e0();
  /* 1289d4a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d4a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289d4a7 je 0x1289d4b0 */
  if (C.zf) goto L_1289d4b0;
  /* 1289d4a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289d4ab jmp 0x1289d570 */
  goto L_1289d570;
L_1289d4b0:;
  /* 1289d4b0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1289d4b6 push edx */
  push32((uint32_t)(EDX));
  /* 1289d4b7 push 0x128bf894 */
  push32((uint32_t)(0x128bf894u));
  /* 1289d4bc lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 1289d4c2 push eax */
  push32((uint32_t)(EAX));
  /* 1289d4c3 call 0x1289f850 */
  push32(0x1289d4c8u); f_1289f850();
  /* 1289d4c8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d4cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289d4cd jne 0x1289d4d6 */
  if (!C.zf) goto L_1289d4d6;
  /* 1289d4cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289d4d1 jmp 0x1289d570 */
  goto L_1289d570;
L_1289d4d6:;
  /* 1289d4d6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1289d4d8 mov cx, word ptr [0x128bf898] */
  CX = (r16((uint32_t)(0x128bf898)));
  /* 1289d4df mov dword ptr [0x128bf89c], ecx */
  w32((uint32_t)(0x128bf89c), (ECX));
  /* 1289d4e5 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1289d4eb push edx */
  push32((uint32_t)(EDX));
  /* 1289d4ec push 0x128be450 */
  push32((uint32_t)(0x128be450u));
  /* 1289d4f1 call 0x1289d740 */
  push32(0x1289d4f6u); f_1289d740();
  /* 1289d4f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d4f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289d4fc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1289d4ff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1289d501 je 0x1289d516 */
  if (C.zf) goto L_1289d516;
  /* 1289d503 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289d506 push edx */
  push32((uint32_t)(EDX));
  /* 1289d507 push 0x128be3cc */
  push32((uint32_t)(0x128be3ccu));
  /* 1289d50c call 0x12897e10 */
  push32(0x1289d511u); f_12897e10();
  /* 1289d511 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d514 jmp 0x1289d528 */
  goto L_1289d528;
L_1289d516:;
  /* 1289d516 push 0x128be450 */
  push32((uint32_t)(0x128be450u));
  /* 1289d51b push 0x128be3cc */
  push32((uint32_t)(0x128be3ccu));
  /* 1289d520 call 0x12897e10 */
  push32(0x1289d525u); f_12897e10();
  /* 1289d525 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1289d528:;
  /* 1289d528 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289d52c je 0x1289d541 */
  if (C.zf) goto L_1289d541;
  /* 1289d52e push 6 */
  push32((uint32_t)(0x6u));
  /* 1289d530 push 0x128bf894 */
  push32((uint32_t)(0x128bf894u));
  /* 1289d535 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1289d538 push eax */
  push32((uint32_t)(EAX));
  /* 1289d539 call 0x1289bff0 */
  push32(0x1289d53eu); f_1289bff0();
  /* 1289d53e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1289d541:;
  /* 1289d541 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289d545 je 0x1289d55a */
  if (C.zf) goto L_1289d55a;
  /* 1289d547 push 4 */
  push32((uint32_t)(0x4u));
  /* 1289d549 push 0x128bf89c */
  push32((uint32_t)(0x128bf89cu));
  /* 1289d54e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1289d551 push ecx */
  push32((uint32_t)(ECX));
  /* 1289d552 call 0x1289bff0 */
  push32(0x1289d557u); f_1289bff0();
  /* 1289d557 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1289d55a:;
  /* 1289d55a push 0x128be450 */
  push32((uint32_t)(0x128be450u));
  /* 1289d55f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289d562 push edx */
  push32((uint32_t)(EDX));
  /* 1289d563 call 0x12897e10 */
  push32(0x1289d568u); f_12897e10();
  /* 1289d568 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d56b mov eax, 0x128be450 */
  EAX = (0x128be450u);
L_1289d570:;
  /* 1289d570 mov esp, ebp */
  ESP = (EBP);
  /* 1289d572 pop ebp */
  EBP = (pop32());
  /* 1289d573 ret  */
  ESPCHK(0x1289d3f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d580 @ 0x1289d580 (7 bytes, 5 insns) */
void f_1289d580(void) {
  FTRACE(0x1289d580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289d580 push ebp */
  push32((uint32_t)(EBP));
  /* 1289d581 mov ebp, esp */
  EBP = (ESP);
  /* 1289d583 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289d585 pop ebp */
  EBP = (pop32());
  /* 1289d586 ret  */
  ESPCHK(0x1289d580u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x1289d590 (79 bytes, 28 insns) */
void f_1289d590(void) {
  FTRACE(0x1289d590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289d590 push ebp */
  push32((uint32_t)(EBP));
  /* 1289d591 mov ebp, esp */
  EBP = (ESP);
  /* 1289d593 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289d596 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1289d599 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1289d59c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1289d5a3 jmp 0x1289d5ae */
  goto L_1289d5ae;
L_1289d5a5:;
  /* 1289d5a5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289d5a8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d5ab mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1289d5ae:;
  /* 1289d5ae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289d5b1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289d5b4 jge 0x1289d5d4 */
  if ((C.sf==C.of)) goto L_1289d5d4;
  /* 1289d5b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289d5b9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d5bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1289d5bf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289d5c2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1289d5c5 push edx */
  push32((uint32_t)(EDX));
  /* 1289d5c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289d5c9 push eax */
  push32((uint32_t)(EAX));
  /* 1289d5ca call 0x12897e20 */
  push32(0x1289d5cfu); f_12897e20();
  /* 1289d5cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d5d2 jmp 0x1289d5a5 */
  goto L_1289d5a5;
L_1289d5d4:;
  /* 1289d5d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1289d5db mov esp, ebp */
  ESP = (EBP);
  /* 1289d5dd pop ebp */
  EBP = (pop32());
  /* 1289d5de ret  */
  ESPCHK(0x1289d590u, _esp0);
  ESP += 4; return;
}

