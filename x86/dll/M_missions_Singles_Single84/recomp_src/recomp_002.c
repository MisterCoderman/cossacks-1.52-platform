#include "recomp.h"

/* __NLG_Notify1 @ 0x11dfa42d (9 bytes, 4 insns) */
void f_11dfa42d(void) {
  FTRACE(0x11dfa42du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfa42d push ebx */
  push32((uint32_t)(EBX));
  /* 11dfa42e push ecx */
  push32((uint32_t)(ECX));
  /* 11dfa42f mov ebx, 0x11e2ddbc */
  EBX = (0x11e2ddbcu);
  /* 11dfa434 jmp 0x11dfa440 */
  jmp_ind(0x11dfa440u); return;
}

/* FUN_1000a436 @ 0x11dfa436 (24 bytes, 10 insns) */
void f_11dfa436(void) {
  FTRACE(0x11dfa436u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfa436 push ebx */
  push32((uint32_t)(EBX));
  /* 11dfa437 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfa438 mov ebx, 0x11e2ddbc */
  EBX = (0x11e2ddbcu);
  /* 11dfa43d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfa440 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11dfa443 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11dfa446 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 11dfa449 pop ecx */
  ECX = (pop32());
  /* 11dfa44a pop ebx */
  EBX = (pop32());
  /* 11dfa44b ret 4 */
  ESPCHK(0x11dfa436u, _esp0);
  ESP += 8; return;
}

/* FUN_1000a450 @ 0x11dfa450 (179 bytes, 53 insns) */
void f_11dfa450(void) {
  FTRACE(0x11dfa450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfa450 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfa451 mov ebp, esp */
  EBP = (ESP);
  /* 11dfa453 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfa454 call 0x11dff010 */
  push32(0x11dfa459u); f_11dff010();
  /* 11dfa459 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dfa45b mov eax, dword ptr [0x11e32138] */
  EAX = (r32((uint32_t)(0x11e32138)));
  /* 11dfa460 push eax */
  push32((uint32_t)(EAX));
  /* 11dfa461 call 0x11dfcd20 */
  push32(0x11dfa466u); f_11dfcd20();
  /* 11dfa466 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfa469 mov ecx, dword ptr [0x11e32134] */
  ECX = (r32((uint32_t)(0x11e32134)));
  /* 11dfa46f sub ecx, dword ptr [0x11e32138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11e32138))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfa475 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfa478 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfa47a jae 0x11dfa4dd */
  if (!C.cf) goto L_11dfa4dd;
  /* 11dfa47c push 0x68 */
  push32((uint32_t)(0x68u));
  /* 11dfa47e push 0x11e2a42c */
  push32((uint32_t)(0x11e2a42cu));
  /* 11dfa483 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dfa485 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dfa487 mov edx, dword ptr [0x11e32138] */
  EDX = (r32((uint32_t)(0x11e32138)));
  /* 11dfa48d push edx */
  push32((uint32_t)(EDX));
  /* 11dfa48e call 0x11dfcd20 */
  push32(0x11dfa493u); f_11dfcd20();
  /* 11dfa493 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfa496 add eax, 0x10 */
  { uint32_t _a=(EAX),_b=(0x10u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfa499 push eax */
  push32((uint32_t)(EAX));
  /* 11dfa49a mov eax, dword ptr [0x11e32138] */
  EAX = (r32((uint32_t)(0x11e32138)));
  /* 11dfa49f push eax */
  push32((uint32_t)(EAX));
  /* 11dfa4a0 call 0x11dfc2e0 */
  push32(0x11dfa4a5u); f_11dfc2e0();
  /* 11dfa4a5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfa4a8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11dfa4ab cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfa4af jne 0x11dfa4ba */
  if (!C.zf) goto L_11dfa4ba;
  /* 11dfa4b1 call 0x11dff020 */
  push32(0x11dfa4b6u); f_11dff020();
  /* 11dfa4b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dfa4b8 jmp 0x11dfa4ff */
  goto L_11dfa4ff;
L_11dfa4ba:;
  /* 11dfa4ba mov ecx, dword ptr [0x11e32134] */
  ECX = (r32((uint32_t)(0x11e32134)));
  /* 11dfa4c0 sub ecx, dword ptr [0x11e32138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11e32138))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfa4c6 sar ecx, 2 */
  ECX = (sh_sar((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11dfa4c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfa4cc lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 11dfa4cf mov dword ptr [0x11e32134], eax */
  w32((uint32_t)(0x11e32134), (EAX));
  /* 11dfa4d4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfa4d7 mov dword ptr [0x11e32138], ecx */
  w32((uint32_t)(0x11e32138), (ECX));
L_11dfa4dd:;
  /* 11dfa4dd mov edx, dword ptr [0x11e32134] */
  EDX = (r32((uint32_t)(0x11e32134)));
  /* 11dfa4e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfa4e6 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11dfa4e8 mov ecx, dword ptr [0x11e32134] */
  ECX = (r32((uint32_t)(0x11e32134)));
  /* 11dfa4ee add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfa4f1 mov dword ptr [0x11e32134], ecx */
  w32((uint32_t)(0x11e32134), (ECX));
  /* 11dfa4f7 call 0x11dff020 */
  push32(0x11dfa4fcu); f_11dff020();
  /* 11dfa4fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11dfa4ff:;
  /* 11dfa4ff mov esp, ebp */
  ESP = (EBP);
  /* 11dfa501 pop ebp */
  EBP = (pop32());
  /* 11dfa502 ret  */
  ESPCHK(0x11dfa450u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a510 @ 0x11dfa510 (24 bytes, 12 insns) */
void f_11dfa510(void) {
  FTRACE(0x11dfa510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfa510 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfa511 mov ebp, esp */
  EBP = (ESP);
  /* 11dfa513 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfa516 push eax */
  push32((uint32_t)(EAX));
  /* 11dfa517 call 0x11dfa450 */
  push32(0x11dfa51cu); f_11dfa450();
  /* 11dfa51c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfa51f neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11dfa521 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfa523 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11dfa525 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11dfa526 pop ebp */
  EBP = (pop32());
  /* 11dfa527 ret  */
  ESPCHK(0x11dfa510u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a530 @ 0x11dfa530 (77 bytes, 20 insns) */
void f_11dfa530(void) {
  FTRACE(0x11dfa530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfa530 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfa531 mov ebp, esp */
  EBP = (ESP);
  /* 11dfa533 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 11dfa538 push 0x11e2a42c */
  push32((uint32_t)(0x11e2a42cu));
  /* 11dfa53d push 2 */
  push32((uint32_t)(0x2u));
  /* 11dfa53f push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11dfa544 call 0x11dfbe50 */
  push32(0x11dfa549u); f_11dfbe50();
  /* 11dfa549 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfa54c mov dword ptr [0x11e32138], eax */
  w32((uint32_t)(0x11e32138), (EAX));
  /* 11dfa551 cmp dword ptr [0x11e32138], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e32138))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfa558 jne 0x11dfa564 */
  if (!C.zf) goto L_11dfa564;
  /* 11dfa55a push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11dfa55c call 0x11dfa8c0 */
  push32(0x11dfa561u); f_11dfa8c0();
  /* 11dfa561 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dfa564:;
  /* 11dfa564 mov eax, dword ptr [0x11e32138] */
  EAX = (r32((uint32_t)(0x11e32138)));
  /* 11dfa569 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11dfa56f mov ecx, dword ptr [0x11e32138] */
  ECX = (r32((uint32_t)(0x11e32138)));
  /* 11dfa575 mov dword ptr [0x11e32134], ecx */
  w32((uint32_t)(0x11e32134), (ECX));
  /* 11dfa57b pop ebp */
  EBP = (pop32());
  /* 11dfa57c ret  */
  ESPCHK(0x11dfa530u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a580 @ 0x11dfa580 (250 bytes, 92 insns) */
void f_11dfa580(void) {
  FTRACE(0x11dfa580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfa580 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfa581 mov ebp, esp */
  EBP = (ESP);
  /* 11dfa583 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfa586 push ebx */
  push32((uint32_t)(EBX));
  /* 11dfa587 push esi */
  push32((uint32_t)(ESI));
  /* 11dfa588 push edi */
  push32((uint32_t)(EDI));
  /* 11dfa589 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11dfa58c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11dfa58f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11dfa592 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_11dfa595:;
  /* 11dfa595 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfa599 jne 0x11dfa5b9 */
  if (!C.zf) goto L_11dfa5b9;
  /* 11dfa59b push 0x11e2a454 */
  push32((uint32_t)(0x11e2a454u));
  /* 11dfa5a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfa5a2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11dfa5a4 push 0x11e2a448 */
  push32((uint32_t)(0x11e2a448u));
  /* 11dfa5a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dfa5ab call 0x11dfaa10 */
  push32(0x11dfa5b0u); f_11dfaa10();
  /* 11dfa5b0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfa5b3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfa5b6 jne 0x11dfa5b9 */
  if (!C.zf) goto L_11dfa5b9;
  /* 11dfa5b8 int3  */
  x86_unimpl("int3 @ 0x11dfa5b8");
L_11dfa5b9:;
  /* 11dfa5b9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11dfa5bb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dfa5bd jne 0x11dfa595 */
  if (!C.zf) goto L_11dfa595;
L_11dfa5bf:;
  /* 11dfa5bf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfa5c3 jne 0x11dfa5e3 */
  if (!C.zf) goto L_11dfa5e3;
  /* 11dfa5c5 push 0x11e2a438 */
  push32((uint32_t)(0x11e2a438u));
  /* 11dfa5ca push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfa5cc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11dfa5ce push 0x11e2a448 */
  push32((uint32_t)(0x11e2a448u));
  /* 11dfa5d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dfa5d5 call 0x11dfaa10 */
  push32(0x11dfa5dau); f_11dfaa10();
  /* 11dfa5da add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfa5dd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfa5e0 jne 0x11dfa5e3 */
  if (!C.zf) goto L_11dfa5e3;
  /* 11dfa5e2 int3  */
  x86_unimpl("int3 @ 0x11dfa5e2");
L_11dfa5e3:;
  /* 11dfa5e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dfa5e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfa5e7 jne 0x11dfa5bf */
  if (!C.zf) goto L_11dfa5bf;
  /* 11dfa5e9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11dfa5ec mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 11dfa5f3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11dfa5f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfa5f9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11dfa5fc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11dfa5ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfa602 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11dfa604 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11dfa607 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 11dfa60e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11dfa611 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfa612 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfa615 push edx */
  push32((uint32_t)(EDX));
  /* 11dfa616 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11dfa619 push eax */
  push32((uint32_t)(EAX));
  /* 11dfa61a call 0x11dff2e0 */
  push32(0x11dfa61fu); f_11dff2e0();
  /* 11dfa61f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfa622 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11dfa625 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11dfa628 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11dfa62b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfa62e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11dfa631 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11dfa634 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11dfa637 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfa63b jl 0x11dfa65f */
  if ((C.sf!=C.of)) goto L_11dfa65f;
  /* 11dfa63d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11dfa640 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11dfa642 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11dfa645 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11dfa647 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11dfa64d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11dfa650 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11dfa653 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11dfa655 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfa658 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11dfa65b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11dfa65d jmp 0x11dfa670 */
  goto L_11dfa670;
L_11dfa65f:;
  /* 11dfa65f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11dfa662 push edx */
  push32((uint32_t)(EDX));
  /* 11dfa663 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfa665 call 0x11dff060 */
  push32(0x11dfa66au); f_11dff060();
  /* 11dfa66a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfa66d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_11dfa670:;
  /* 11dfa670 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11dfa673 pop edi */
  EDI = (pop32());
  /* 11dfa674 pop esi */
  ESI = (pop32());
  /* 11dfa675 pop ebx */
  EBX = (pop32());
  /* 11dfa676 mov esp, ebp */
  ESP = (EBP);
  /* 11dfa678 pop ebp */
  EBP = (pop32());
  /* 11dfa679 ret  */
  ESPCHK(0x11dfa580u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a680 @ 0x11dfa680 (313 bytes, 78 insns) */
void f_11dfa680(void) {
  FTRACE(0x11dfa680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfa680 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfa681 mov ebp, esp */
  EBP = (ESP);
  /* 11dfa683 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfa687 jne 0x11dfa747 */
  if (!C.zf) goto L_11dfa747;
  /* 11dfa68d call dword ptr [0x11e333c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333c0))), 0x11dfa693u);
  /* 11dfa693 mov dword ptr [0x11e30690], eax */
  w32((uint32_t)(0x11e30690), (EAX));
  /* 11dfa698 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dfa69a call 0x11e00dd0 */
  push32(0x11dfa69fu); f_11e00dd0();
  /* 11dfa69f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfa6a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfa6a4 jne 0x11dfa6ad */
  if (!C.zf) goto L_11dfa6ad;
  /* 11dfa6a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dfa6a8 jmp 0x11dfa7b5 */
  goto L_11dfa7b5;
L_11dfa6ad:;
  /* 11dfa6ad mov eax, dword ptr [0x11e30690] */
  EAX = (r32((uint32_t)(0x11e30690)));
  /* 11dfa6b2 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11dfa6b5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11dfa6ba mov dword ptr [0x11e3069c], eax */
  w32((uint32_t)(0x11e3069c), (EAX));
  /* 11dfa6bf mov ecx, dword ptr [0x11e30690] */
  ECX = (r32((uint32_t)(0x11e30690)));
  /* 11dfa6c5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11dfa6cb mov dword ptr [0x11e30698], ecx */
  w32((uint32_t)(0x11e30698), (ECX));
  /* 11dfa6d1 mov edx, dword ptr [0x11e30698] */
  EDX = (r32((uint32_t)(0x11e30698)));
  /* 11dfa6d7 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11dfa6da add edx, dword ptr [0x11e3069c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11e3069c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfa6e0 mov dword ptr [0x11e30694], edx */
  w32((uint32_t)(0x11e30694), (EDX));
  /* 11dfa6e6 mov eax, dword ptr [0x11e30690] */
  EAX = (r32((uint32_t)(0x11e30690)));
  /* 11dfa6eb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11dfa6ee and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11dfa6f3 mov dword ptr [0x11e30690], eax */
  w32((uint32_t)(0x11e30690), (EAX));
  /* 11dfa6f8 call 0x11dfea70 */
  push32(0x11dfa6fdu); f_11dfea70();
  /* 11dfa6fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfa6ff jne 0x11dfa70d */
  if (!C.zf) goto L_11dfa70d;
  /* 11dfa701 call 0x11e00e20 */
  push32(0x11dfa706u); f_11e00e20();
  /* 11dfa706 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dfa708 jmp 0x11dfa7b5 */
  goto L_11dfa7b5;
L_11dfa70d:;
  /* 11dfa70d call dword ptr [0x11e333bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333bc))), 0x11dfa713u);
  /* 11dfa713 mov dword ptr [0x11e32154], eax */
  w32((uint32_t)(0x11e32154), (EAX));
  /* 11dfa718 call 0x11e00bb0 */
  push32(0x11dfa71du); f_11e00bb0();
  /* 11dfa71d mov dword ptr [0x11e30600], eax */
  w32((uint32_t)(0x11e30600), (EAX));
  /* 11dfa722 call 0x11e00180 */
  push32(0x11dfa727u); f_11e00180();
  /* 11dfa727 call 0x11e006a0 */
  push32(0x11dfa72cu); f_11e006a0();
  /* 11dfa72c call 0x11e00550 */
  push32(0x11dfa731u); f_11e00550();
  /* 11dfa731 call 0x11dfee60 */
  push32(0x11dfa736u); f_11dfee60();
  /* 11dfa736 mov ecx, dword ptr [0x11e305fc] */
  ECX = (r32((uint32_t)(0x11e305fc)));
  /* 11dfa73c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfa73f mov dword ptr [0x11e305fc], ecx */
  w32((uint32_t)(0x11e305fc), (ECX));
  /* 11dfa745 jmp 0x11dfa7b0 */
  goto L_11dfa7b0;
L_11dfa747:;
  /* 11dfa747 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfa74b jne 0x11dfa7a0 */
  if (!C.zf) goto L_11dfa7a0;
  /* 11dfa74d cmp dword ptr [0x11e305fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e305fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfa754 jle 0x11dfa79a */
  if ((C.zf||C.sf!=C.of)) goto L_11dfa79a;
  /* 11dfa756 mov edx, dword ptr [0x11e305fc] */
  EDX = (r32((uint32_t)(0x11e305fc)));
  /* 11dfa75c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfa75f mov dword ptr [0x11e305fc], edx */
  w32((uint32_t)(0x11e305fc), (EDX));
  /* 11dfa765 cmp dword ptr [0x11e306c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e306c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfa76c jne 0x11dfa773 */
  if (!C.zf) goto L_11dfa773;
  /* 11dfa76e call 0x11dfeee0 */
  push32(0x11dfa773u); f_11dfeee0();
L_11dfa773:;
  /* 11dfa773 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11dfa775 call 0x11dfd360 */
  push32(0x11dfa77au); f_11dfd360();
  /* 11dfa77a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfa77d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11dfa780 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfa782 je 0x11dfa789 */
  if (C.zf) goto L_11dfa789;
  /* 11dfa784 call 0x11dfdc70 */
  push32(0x11dfa789u); f_11dfdc70();
L_11dfa789:;
  /* 11dfa789 call 0x11e004b0 */
  push32(0x11dfa78eu); f_11e004b0();
  /* 11dfa78e call 0x11dfeb00 */
  push32(0x11dfa793u); f_11dfeb00();
  /* 11dfa793 call 0x11e00e20 */
  push32(0x11dfa798u); f_11e00e20();
  /* 11dfa798 jmp 0x11dfa79e */
  goto L_11dfa79e;
L_11dfa79a:;
  /* 11dfa79a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dfa79c jmp 0x11dfa7b5 */
  goto L_11dfa7b5;
L_11dfa79e:;
  /* 11dfa79e jmp 0x11dfa7b0 */
  goto L_11dfa7b0;
L_11dfa7a0:;
  /* 11dfa7a0 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfa7a4 jne 0x11dfa7b0 */
  if (!C.zf) goto L_11dfa7b0;
  /* 11dfa7a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfa7a8 call 0x11dfebf0 */
  push32(0x11dfa7adu); f_11dfebf0();
  /* 11dfa7ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dfa7b0:;
  /* 11dfa7b0 mov eax, 1 */
  EAX = (0x1u);
L_11dfa7b5:;
  /* 11dfa7b5 pop ebp */
  EBP = (pop32());
  /* 11dfa7b6 ret 0xc */
  ESPCHK(0x11dfa680u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x11dfa7c0 (243 bytes, 86 insns) */
void f_11dfa7c0(void) {
  FTRACE(0x11dfa7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfa7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfa7c1 mov ebp, esp */
  EBP = (ESP);
  /* 11dfa7c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfa7c4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11dfa7cb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfa7cf jne 0x11dfa7e1 */
  if (!C.zf) goto L_11dfa7e1;
  /* 11dfa7d1 cmp dword ptr [0x11e305fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e305fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfa7d8 jne 0x11dfa7e1 */
  if (!C.zf) goto L_11dfa7e1;
  /* 11dfa7da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dfa7dc jmp 0x11dfa8ad */
  goto L_11dfa8ad;
L_11dfa7e1:;
  /* 11dfa7e1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfa7e5 je 0x11dfa7ed */
  if (C.zf) goto L_11dfa7ed;
  /* 11dfa7e7 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfa7eb jne 0x11dfa82f */
  if (!C.zf) goto L_11dfa82f;
L_11dfa7ed:;
  /* 11dfa7ed cmp dword ptr [0x11e32164], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e32164))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfa7f4 je 0x11dfa80b */
  if (C.zf) goto L_11dfa80b;
  /* 11dfa7f6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfa7f9 push eax */
  push32((uint32_t)(EAX));
  /* 11dfa7fa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfa7fd push ecx */
  push32((uint32_t)(ECX));
  /* 11dfa7fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfa801 push edx */
  push32((uint32_t)(EDX));
  /* 11dfa802 call dword ptr [0x11e32164] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e32164))), 0x11dfa808u);
  /* 11dfa808 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11dfa80b:;
  /* 11dfa80b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfa80f je 0x11dfa825 */
  if (C.zf) goto L_11dfa825;
  /* 11dfa811 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfa814 push eax */
  push32((uint32_t)(EAX));
  /* 11dfa815 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfa818 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfa819 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfa81c push edx */
  push32((uint32_t)(EDX));
  /* 11dfa81d call 0x11dfa680 */
  push32(0x11dfa822u); f_11dfa680();
  /* 11dfa822 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11dfa825:;
  /* 11dfa825 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfa829 jne 0x11dfa82f */
  if (!C.zf) goto L_11dfa82f;
  /* 11dfa82b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dfa82d jmp 0x11dfa8ad */
  goto L_11dfa8ad;
L_11dfa82f:;
  /* 11dfa82f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfa832 push eax */
  push32((uint32_t)(EAX));
  /* 11dfa833 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfa836 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfa837 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfa83a push edx */
  push32((uint32_t)(EDX));
  /* 11dfa83b call 0x11df1064 */
  push32(0x11dfa840u); f_11df1064();
  /* 11dfa840 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11dfa843 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfa847 jne 0x11dfa85e */
  if (!C.zf) goto L_11dfa85e;
  /* 11dfa849 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfa84d jne 0x11dfa85e */
  if (!C.zf) goto L_11dfa85e;
  /* 11dfa84f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfa852 push eax */
  push32((uint32_t)(EAX));
  /* 11dfa853 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfa855 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfa858 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfa859 call 0x11dfa680 */
  push32(0x11dfa85eu); f_11dfa680();
L_11dfa85e:;
  /* 11dfa85e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfa862 je 0x11dfa86a */
  if (C.zf) goto L_11dfa86a;
  /* 11dfa864 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfa868 jne 0x11dfa8aa */
  if (!C.zf) goto L_11dfa8aa;
L_11dfa86a:;
  /* 11dfa86a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfa86d push edx */
  push32((uint32_t)(EDX));
  /* 11dfa86e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfa871 push eax */
  push32((uint32_t)(EAX));
  /* 11dfa872 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfa875 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfa876 call 0x11dfa680 */
  push32(0x11dfa87bu); f_11dfa680();
  /* 11dfa87b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfa87d jne 0x11dfa886 */
  if (!C.zf) goto L_11dfa886;
  /* 11dfa87f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11dfa886:;
  /* 11dfa886 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfa88a je 0x11dfa8aa */
  if (C.zf) goto L_11dfa8aa;
  /* 11dfa88c cmp dword ptr [0x11e32164], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e32164))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfa893 je 0x11dfa8aa */
  if (C.zf) goto L_11dfa8aa;
  /* 11dfa895 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfa898 push edx */
  push32((uint32_t)(EDX));
  /* 11dfa899 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfa89c push eax */
  push32((uint32_t)(EAX));
  /* 11dfa89d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfa8a0 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfa8a1 call dword ptr [0x11e32164] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e32164))), 0x11dfa8a7u);
  /* 11dfa8a7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11dfa8aa:;
  /* 11dfa8aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11dfa8ad:;
  /* 11dfa8ad mov esp, ebp */
  ESP = (EBP);
  /* 11dfa8af pop ebp */
  EBP = (pop32());
  /* 11dfa8b0 ret 0xc */
  ESPCHK(0x11dfa7c0u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x11dfa8c0 (58 bytes, 18 insns) */
void f_11dfa8c0(void) {
  FTRACE(0x11dfa8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfa8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfa8c1 mov ebp, esp */
  EBP = (ESP);
  /* 11dfa8c3 cmp dword ptr [0x11e30608], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e30608))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfa8ca je 0x11dfa8de */
  if (C.zf) goto L_11dfa8de;
  /* 11dfa8cc cmp dword ptr [0x11e30608], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e30608))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfa8d3 jne 0x11dfa8e3 */
  if (!C.zf) goto L_11dfa8e3;
  /* 11dfa8d5 cmp dword ptr [0x11e3060c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e3060c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfa8dc jne 0x11dfa8e3 */
  if (!C.zf) goto L_11dfa8e3;
L_11dfa8de:;
  /* 11dfa8de call 0x11e00ec0 */
  push32(0x11dfa8e3u); f_11e00ec0();
L_11dfa8e3:;
  /* 11dfa8e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfa8e6 push eax */
  push32((uint32_t)(EAX));
  /* 11dfa8e7 call 0x11e00f10 */
  push32(0x11dfa8ecu); f_11e00f10();
  /* 11dfa8ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfa8ef push 0xff */
  push32((uint32_t)(0xffu));
  /* 11dfa8f4 call dword ptr [0x11e2ddcc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e2ddcc))), 0x11dfa8fau);
  /* 11dfa8fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfa8fd pop ebp */
  EBP = (pop32());
  /* 11dfa8fe ret  */
  ESPCHK(0x11dfa8c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a900 @ 0x11dfa900 (11 bytes, 5 insns) */
void f_11dfa900(void) {
  FTRACE(0x11dfa900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfa900 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfa901 mov ebp, esp */
  EBP = (ESP);
  /* 11dfa903 call dword ptr [0x11e333c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333c4))), 0x11dfa909u);
  /* 11dfa909 pop ebp */
  EBP = (pop32());
  /* 11dfa90a ret  */
  ESPCHK(0x11dfa900u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a910 @ 0x11dfa910 (87 bytes, 30 insns) */
void f_11dfa910(void) {
  FTRACE(0x11dfa910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfa910 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfa911 mov ebp, esp */
  EBP = (ESP);
  /* 11dfa913 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfa914 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfa918 jl 0x11dfa920 */
  if ((C.sf!=C.of)) goto L_11dfa920;
  /* 11dfa91a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfa91e jl 0x11dfa925 */
  if ((C.sf!=C.of)) goto L_11dfa925;
L_11dfa920:;
  /* 11dfa920 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11dfa923 jmp 0x11dfa963 */
  goto L_11dfa963;
L_11dfa925:;
  /* 11dfa925 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfa929 jne 0x11dfa937 */
  if (!C.zf) goto L_11dfa937;
  /* 11dfa92b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfa92e mov eax, dword ptr [eax*4 + 0x11e2ddd4] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11e2ddd4)));
  /* 11dfa935 jmp 0x11dfa963 */
  goto L_11dfa963;
L_11dfa937:;
  /* 11dfa937 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfa93a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 11dfa93d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11dfa93f je 0x11dfa946 */
  if (C.zf) goto L_11dfa946;
  /* 11dfa941 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11dfa944 jmp 0x11dfa963 */
  goto L_11dfa963;
L_11dfa946:;
  /* 11dfa946 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfa949 mov eax, dword ptr [edx*4 + 0x11e2ddd4] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11e2ddd4)));
  /* 11dfa950 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11dfa953 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfa956 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfa959 mov dword ptr [ecx*4 + 0x11e2ddd4], edx */
  w32((uint32_t)(ECX*4 + 0x11e2ddd4), (EDX));
  /* 11dfa960 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11dfa963:;
  /* 11dfa963 mov esp, ebp */
  ESP = (EBP);
  /* 11dfa965 pop ebp */
  EBP = (pop32());
  /* 11dfa966 ret  */
  ESPCHK(0x11dfa910u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x11dfa970 (126 bytes, 38 insns) */
void f_11dfa970(void) {
  FTRACE(0x11dfa970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfa970 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfa971 mov ebp, esp */
  EBP = (ESP);
  /* 11dfa973 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfa974 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfa978 jl 0x11dfa980 */
  if ((C.sf!=C.of)) goto L_11dfa980;
  /* 11dfa97a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfa97e jl 0x11dfa987 */
  if ((C.sf!=C.of)) goto L_11dfa987;
L_11dfa980:;
  /* 11dfa980 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 11dfa985 jmp 0x11dfa9ea */
  goto L_11dfa9ea;
L_11dfa987:;
  /* 11dfa987 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfa98b jne 0x11dfa999 */
  if (!C.zf) goto L_11dfa999;
  /* 11dfa98d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfa990 mov eax, dword ptr [eax*4 + 0x11e2dde0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11e2dde0)));
  /* 11dfa997 jmp 0x11dfa9ea */
  goto L_11dfa9ea;
L_11dfa999:;
  /* 11dfa999 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfa99c mov edx, dword ptr [ecx*4 + 0x11e2dde0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11e2dde0)));
  /* 11dfa9a3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11dfa9a6 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfa9aa jne 0x11dfa9c0 */
  if (!C.zf) goto L_11dfa9c0;
  /* 11dfa9ac push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11dfa9ae call dword ptr [0x11e333c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333c8))), 0x11dfa9b4u);
  /* 11dfa9b4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfa9b7 mov dword ptr [ecx*4 + 0x11e2dde0], eax */
  w32((uint32_t)(ECX*4 + 0x11e2dde0), (EAX));
  /* 11dfa9be jmp 0x11dfa9e7 */
  goto L_11dfa9e7;
L_11dfa9c0:;
  /* 11dfa9c0 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfa9c4 jne 0x11dfa9da */
  if (!C.zf) goto L_11dfa9da;
  /* 11dfa9c6 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11dfa9c8 call dword ptr [0x11e333c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333c8))), 0x11dfa9ceu);
  /* 11dfa9ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfa9d1 mov dword ptr [edx*4 + 0x11e2dde0], eax */
  w32((uint32_t)(EDX*4 + 0x11e2dde0), (EAX));
  /* 11dfa9d8 jmp 0x11dfa9e7 */
  goto L_11dfa9e7;
L_11dfa9da:;
  /* 11dfa9da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfa9dd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfa9e0 mov dword ptr [eax*4 + 0x11e2dde0], ecx */
  w32((uint32_t)(EAX*4 + 0x11e2dde0), (ECX));
L_11dfa9e7:;
  /* 11dfa9e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11dfa9ea:;
  /* 11dfa9ea mov esp, ebp */
  ESP = (EBP);
  /* 11dfa9ec pop ebp */
  EBP = (pop32());
  /* 11dfa9ed ret  */
  ESPCHK(0x11dfa970u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a9f0 @ 0x11dfa9f0 (28 bytes, 11 insns) */
void f_11dfa9f0(void) {
  FTRACE(0x11dfa9f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfa9f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfa9f1 mov ebp, esp */
  EBP = (ESP);
  /* 11dfa9f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfa9f4 mov eax, dword ptr [0x11e32148] */
  EAX = (r32((uint32_t)(0x11e32148)));
  /* 11dfa9f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11dfa9fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfa9ff mov dword ptr [0x11e32148], ecx */
  w32((uint32_t)(0x11e32148), (ECX));
  /* 11dfaa05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfaa08 mov esp, ebp */
  ESP = (EBP);
  /* 11dfaa0a pop ebp */
  EBP = (pop32());
  /* 11dfaa0b ret  */
  ESPCHK(0x11dfa9f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa10 @ 0x11dfaa10 (912 bytes, 248 insns) */
void f_11dfaa10(void) {
  FTRACE(0x11dfaa10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfaa10 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfaa11 mov ebp, esp */
  EBP = (ESP);
  /* 11dfaa13 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 11dfaa18 call 0x11e01780 */
  push32(0x11dfaa1du); f_11e01780();
  /* 11dfaa1d push edi */
  push32((uint32_t)(EDI));
  /* 11dfaa1e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 11dfaa25 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 11dfaa2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dfaa2c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 11dfaa32 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11dfaa34 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 11dfaa36 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11dfaa37 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 11dfaa3e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 11dfaa43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dfaa45 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 11dfaa4b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11dfaa4d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 11dfaa4f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11dfaa50 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 11dfaa57 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 11dfaa5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dfaa5e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 11dfaa64 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11dfaa66 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 11dfaa68 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11dfaa69 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 11dfaa6c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 11dfaa72 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfaa76 jl 0x11dfaa7e */
  if ((C.sf!=C.of)) goto L_11dfaa7e;
  /* 11dfaa78 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfaa7c jl 0x11dfaa86 */
  if ((C.sf!=C.of)) goto L_11dfaa86;
L_11dfaa7e:;
  /* 11dfaa7e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11dfaa81 jmp 0x11dfad9b */
  goto L_11dfad9b;
L_11dfaa86:;
  /* 11dfaa86 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfaa8a jne 0x11dfab30 */
  if (!C.zf) goto L_11dfab30;
  /* 11dfaa90 push 0x11e2ddd0 */
  push32((uint32_t)(0x11e2ddd0u));
  /* 11dfaa95 call dword ptr [0x11e333e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333e0))), 0x11dfaa9bu);
  /* 11dfaa9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfaa9d jle 0x11dfab30 */
  if ((C.zf||C.sf!=C.of)) goto L_11dfab30;
  /* 11dfaaa3 cmp dword ptr [0x11e30610], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e30610))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfaaaa jne 0x11dfaaee */
  if (!C.zf) goto L_11dfaaee;
  /* 11dfaaac push 0x11e2a530 */
  push32((uint32_t)(0x11e2a530u));
  /* 11dfaab1 call dword ptr [0x11e333dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333dc))), 0x11dfaab7u);
  /* 11dfaab7 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 11dfaabd cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfaac4 je 0x11dfaae6 */
  if (C.zf) goto L_11dfaae6;
  /* 11dfaac6 push 0x11e2a524 */
  push32((uint32_t)(0x11e2a524u));
  /* 11dfaacb mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 11dfaad1 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfaad2 call dword ptr [0x11e333d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333d8))), 0x11dfaad8u);
  /* 11dfaad8 mov dword ptr [0x11e30610], eax */
  w32((uint32_t)(0x11e30610), (EAX));
  /* 11dfaadd cmp dword ptr [0x11e30610], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e30610))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfaae4 jne 0x11dfaaee */
  if (!C.zf) goto L_11dfaaee;
L_11dfaae6:;
  /* 11dfaae6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11dfaae9 jmp 0x11dfad9b */
  goto L_11dfad9b;
L_11dfaaee:;
  /* 11dfaaee mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfaaf1 push edx */
  push32((uint32_t)(EDX));
  /* 11dfaaf2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfaaf5 push eax */
  push32((uint32_t)(EAX));
  /* 11dfaaf6 push 0x11e2a4f0 */
  push32((uint32_t)(0x11e2a4f0u));
  /* 11dfaafb lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 11dfab01 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfab02 call dword ptr [0x11e30610] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e30610))), 0x11dfab08u);
  /* 11dfab08 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfab0b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11dfab11 push edx */
  push32((uint32_t)(EDX));
  /* 11dfab12 call dword ptr [0x11e333d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333d4))), 0x11dfab18u);
  /* 11dfab18 push 0x11e2ddd0 */
  push32((uint32_t)(0x11e2ddd0u));
  /* 11dfab1d call dword ptr [0x11e333d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333d0))), 0x11dfab23u);
  /* 11dfab23 call 0x11dfa900 */
  push32(0x11dfab28u); f_11dfa900();
  /* 11dfab28 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11dfab2b jmp 0x11dfad9b */
  goto L_11dfad9b;
L_11dfab30:;
  /* 11dfab30 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfab34 je 0x11dfab6d */
  if (C.zf) goto L_11dfab6d;
  /* 11dfab36 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 11dfab3c push eax */
  push32((uint32_t)(EAX));
  /* 11dfab3d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11dfab40 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfab41 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 11dfab46 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 11dfab4c push edx */
  push32((uint32_t)(EDX));
  /* 11dfab4d call 0x11e01680 */
  push32(0x11dfab52u); f_11e01680();
  /* 11dfab52 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfab55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfab57 jge 0x11dfab6d */
  if ((C.sf==C.of)) goto L_11dfab6d;
  /* 11dfab59 push 0x11e2a4c4 */
  push32((uint32_t)(0x11e2a4c4u));
  /* 11dfab5e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 11dfab64 push eax */
  push32((uint32_t)(EAX));
  /* 11dfab65 call 0x11e01590 */
  push32(0x11dfab6au); f_11e01590();
  /* 11dfab6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dfab6d:;
  /* 11dfab6d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfab71 jne 0x11dfaba5 */
  if (!C.zf) goto L_11dfaba5;
  /* 11dfab73 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfab77 je 0x11dfab85 */
  if (C.zf) goto L_11dfab85;
  /* 11dfab79 mov dword ptr [ebp - 0x3028], 0x11e2a4b0 */
  w32((uint32_t)(EBP + -0x3028), (0x11e2a4b0u));
  /* 11dfab83 jmp 0x11dfab8f */
  goto L_11dfab8f;
L_11dfab85:;
  /* 11dfab85 mov dword ptr [ebp - 0x3028], 0x11e2a49c */
  w32((uint32_t)(EBP + -0x3028), (0x11e2a49cu));
L_11dfab8f:;
  /* 11dfab8f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 11dfab95 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfab96 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 11dfab9c push edx */
  push32((uint32_t)(EDX));
  /* 11dfab9d call 0x11e01590 */
  push32(0x11dfaba2u); f_11e01590();
  /* 11dfaba2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dfaba5:;
  /* 11dfaba5 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 11dfabab push eax */
  push32((uint32_t)(EAX));
  /* 11dfabac lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 11dfabb2 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfabb3 call 0x11e015a0 */
  push32(0x11dfabb8u); f_11e015a0();
  /* 11dfabb8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfabbb cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfabbf jne 0x11dfabfa */
  if (!C.zf) goto L_11dfabfa;
  /* 11dfabc1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfabc4 mov eax, dword ptr [edx*4 + 0x11e2ddd4] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11e2ddd4)));
  /* 11dfabcb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11dfabce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfabd0 je 0x11dfabe6 */
  if (C.zf) goto L_11dfabe6;
  /* 11dfabd2 push 0x11e2a498 */
  push32((uint32_t)(0x11e2a498u));
  /* 11dfabd7 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 11dfabdd push ecx */
  push32((uint32_t)(ECX));
  /* 11dfabde call 0x11e015a0 */
  push32(0x11dfabe3u); f_11e015a0();
  /* 11dfabe3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dfabe6:;
  /* 11dfabe6 push 0x11e2a494 */
  push32((uint32_t)(0x11e2a494u));
  /* 11dfabeb lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 11dfabf1 push edx */
  push32((uint32_t)(EDX));
  /* 11dfabf2 call 0x11e015a0 */
  push32(0x11dfabf7u); f_11e015a0();
  /* 11dfabf7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dfabfa:;
  /* 11dfabfa cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfabfe je 0x11dfac42 */
  if (C.zf) goto L_11dfac42;
  /* 11dfac00 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 11dfac06 push eax */
  push32((uint32_t)(EAX));
  /* 11dfac07 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfac0a push ecx */
  push32((uint32_t)(ECX));
  /* 11dfac0b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfac0e push edx */
  push32((uint32_t)(EDX));
  /* 11dfac0f push 0x11e2a488 */
  push32((uint32_t)(0x11e2a488u));
  /* 11dfac14 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11dfac19 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 11dfac1f push eax */
  push32((uint32_t)(EAX));
  /* 11dfac20 call 0x11e01490 */
  push32(0x11dfac25u); f_11e01490();
  /* 11dfac25 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfac28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfac2a jge 0x11dfac40 */
  if ((C.sf==C.of)) goto L_11dfac40;
  /* 11dfac2c push 0x11e2a4c4 */
  push32((uint32_t)(0x11e2a4c4u));
  /* 11dfac31 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 11dfac37 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfac38 call 0x11e01590 */
  push32(0x11dfac3du); f_11e01590();
  /* 11dfac3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dfac40:;
  /* 11dfac40 jmp 0x11dfac58 */
  goto L_11dfac58;
L_11dfac42:;
  /* 11dfac42 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 11dfac48 push edx */
  push32((uint32_t)(EDX));
  /* 11dfac49 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 11dfac4f push eax */
  push32((uint32_t)(EAX));
  /* 11dfac50 call 0x11e01590 */
  push32(0x11dfac55u); f_11e01590();
  /* 11dfac55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dfac58:;
  /* 11dfac58 cmp dword ptr [0x11e32148], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e32148))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfac5f je 0x11dfac9c */
  if (C.zf) goto L_11dfac9c;
  /* 11dfac61 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 11dfac67 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfac68 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11dfac6e push edx */
  push32((uint32_t)(EDX));
  /* 11dfac6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfac72 push eax */
  push32((uint32_t)(EAX));
  /* 11dfac73 call dword ptr [0x11e32148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e32148))), 0x11dfac79u);
  /* 11dfac79 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfac7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfac7e je 0x11dfac9c */
  if (C.zf) goto L_11dfac9c;
  /* 11dfac80 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfac84 jne 0x11dfac91 */
  if (!C.zf) goto L_11dfac91;
  /* 11dfac86 push 0x11e2ddd0 */
  push32((uint32_t)(0x11e2ddd0u));
  /* 11dfac8b call dword ptr [0x11e333d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333d0))), 0x11dfac91u);
L_11dfac91:;
  /* 11dfac91 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 11dfac97 jmp 0x11dfad9b */
  goto L_11dfad9b;
L_11dfac9c:;
  /* 11dfac9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfac9f mov edx, dword ptr [ecx*4 + 0x11e2ddd4] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11e2ddd4)));
  /* 11dfaca6 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11dfaca9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dfacab je 0x11dfaceb */
  if (C.zf) goto L_11dfaceb;
  /* 11dfacad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfacb0 cmp dword ptr [eax*4 + 0x11e2dde0], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11e2dde0))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfacb8 je 0x11dfaceb */
  if (C.zf) goto L_11dfaceb;
  /* 11dfacba push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfacbc lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 11dfacc2 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfacc3 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11dfacc9 push edx */
  push32((uint32_t)(EDX));
  /* 11dfacca call 0x11e01410 */
  push32(0x11dfaccfu); f_11e01410();
  /* 11dfaccf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfacd2 push eax */
  push32((uint32_t)(EAX));
  /* 11dfacd3 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 11dfacd9 push eax */
  push32((uint32_t)(EAX));
  /* 11dfacda mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfacdd mov edx, dword ptr [ecx*4 + 0x11e2dde0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11e2dde0)));
  /* 11dface4 push edx */
  push32((uint32_t)(EDX));
  /* 11dface5 call dword ptr [0x11e333cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333cc))), 0x11dfacebu);
L_11dfaceb:;
  /* 11dfaceb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfacee mov ecx, dword ptr [eax*4 + 0x11e2ddd4] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11e2ddd4)));
  /* 11dfacf5 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11dfacf8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11dfacfa je 0x11dfad09 */
  if (C.zf) goto L_11dfad09;
  /* 11dfacfc lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11dfad02 push edx */
  push32((uint32_t)(EDX));
  /* 11dfad03 call dword ptr [0x11e333d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333d4))), 0x11dfad09u);
L_11dfad09:;
  /* 11dfad09 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfad0c mov ecx, dword ptr [eax*4 + 0x11e2ddd4] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11e2ddd4)));
  /* 11dfad13 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11dfad16 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11dfad18 je 0x11dfad88 */
  if (C.zf) goto L_11dfad88;
  /* 11dfad1a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfad1e je 0x11dfad3d */
  if (C.zf) goto L_11dfad3d;
  /* 11dfad20 push 0xa */
  push32((uint32_t)(0xau));
  /* 11dfad22 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 11dfad28 push edx */
  push32((uint32_t)(EDX));
  /* 11dfad29 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfad2c push eax */
  push32((uint32_t)(EAX));
  /* 11dfad2d call 0x11e01120 */
  push32(0x11dfad32u); f_11e01120();
  /* 11dfad32 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfad35 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 11dfad3b jmp 0x11dfad47 */
  goto L_11dfad47;
L_11dfad3d:;
  /* 11dfad3d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_11dfad47:;
  /* 11dfad47 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 11dfad4d push ecx */
  push32((uint32_t)(ECX));
  /* 11dfad4e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dfad51 push edx */
  push32((uint32_t)(EDX));
  /* 11dfad52 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 11dfad58 push eax */
  push32((uint32_t)(EAX));
  /* 11dfad59 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfad5c push ecx */
  push32((uint32_t)(ECX));
  /* 11dfad5d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfad60 push edx */
  push32((uint32_t)(EDX));
  /* 11dfad61 call 0x11dfada0 */
  push32(0x11dfad66u); f_11dfada0();
  /* 11dfad66 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfad69 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 11dfad6f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfad73 jne 0x11dfad80 */
  if (!C.zf) goto L_11dfad80;
  /* 11dfad75 push 0x11e2ddd0 */
  push32((uint32_t)(0x11e2ddd0u));
  /* 11dfad7a call dword ptr [0x11e333d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333d0))), 0x11dfad80u);
L_11dfad80:;
  /* 11dfad80 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 11dfad86 jmp 0x11dfad9b */
  goto L_11dfad9b;
L_11dfad88:;
  /* 11dfad88 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfad8c jne 0x11dfad99 */
  if (!C.zf) goto L_11dfad99;
  /* 11dfad8e push 0x11e2ddd0 */
  push32((uint32_t)(0x11e2ddd0u));
  /* 11dfad93 call dword ptr [0x11e333d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333d0))), 0x11dfad99u);
L_11dfad99:;
  /* 11dfad99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11dfad9b:;
  /* 11dfad9b pop edi */
  EDI = (pop32());
  /* 11dfad9c mov esp, ebp */
  ESP = (EBP);
  /* 11dfad9e pop ebp */
  EBP = (pop32());
  /* 11dfad9f ret  */
  ESPCHK(0x11dfaa10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ada0 @ 0x11dfada0 (780 bytes, 197 insns) */
void f_11dfada0(void) {
  FTRACE(0x11dfada0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfada0 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfada1 mov ebp, esp */
  EBP = (ESP);
  /* 11dfada3 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 11dfada8 call 0x11e01780 */
  push32(0x11dfadadu); f_11e01780();
L_11dfadad:;
  /* 11dfadad cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfadb1 jne 0x11dfadd8 */
  if (!C.zf) goto L_11dfadd8;
  /* 11dfadb3 push 0x11e2a680 */
  push32((uint32_t)(0x11e2a680u));
  /* 11dfadb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfadba push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 11dfadbf push 0x11e2a674 */
  push32((uint32_t)(0x11e2a674u));
  /* 11dfadc4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dfadc6 call 0x11dfaa10 */
  push32(0x11dfadcbu); f_11dfaa10();
  /* 11dfadcb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfadce cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfadd1 jne 0x11dfadd8 */
  if (!C.zf) goto L_11dfadd8;
  /* 11dfadd3 call 0x11dfa900 */
  push32(0x11dfadd8u); f_11dfa900();
L_11dfadd8:;
  /* 11dfadd8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dfadda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfaddc jne 0x11dfadad */
  if (!C.zf) goto L_11dfadad;
  /* 11dfadde push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11dfade3 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 11dfade9 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfadea push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfadec call dword ptr [0x11e333e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333e4))), 0x11dfadf2u);
  /* 11dfadf2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfadf4 jne 0x11dfae0a */
  if (!C.zf) goto L_11dfae0a;
  /* 11dfadf6 push 0x11e2a65c */
  push32((uint32_t)(0x11e2a65cu));
  /* 11dfadfb lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 11dfae01 push edx */
  push32((uint32_t)(EDX));
  /* 11dfae02 call 0x11e01590 */
  push32(0x11dfae07u); f_11e01590();
  /* 11dfae07 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dfae0a:;
  /* 11dfae0a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 11dfae10 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11dfae13 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfae16 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfae17 call 0x11e01410 */
  push32(0x11dfae1cu); f_11e01410();
  /* 11dfae1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfae1f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfae22 jbe 0x11dfae4d */
  if ((C.cf||C.zf)) goto L_11dfae4d;
  /* 11dfae24 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfae27 push edx */
  push32((uint32_t)(EDX));
  /* 11dfae28 call 0x11e01410 */
  push32(0x11dfae2du); f_11e01410();
  /* 11dfae2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfae30 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfae33 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 11dfae37 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11dfae3a push 3 */
  push32((uint32_t)(0x3u));
  /* 11dfae3c push 0x11e2a658 */
  push32((uint32_t)(0x11e2a658u));
  /* 11dfae41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfae44 push eax */
  push32((uint32_t)(EAX));
  /* 11dfae45 call 0x11e01e00 */
  push32(0x11dfae4au); f_11e01e00();
  /* 11dfae4a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dfae4d:;
  /* 11dfae4d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dfae50 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 11dfae56 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfae5d je 0x11dfaea8 */
  if (C.zf) goto L_11dfaea8;
  /* 11dfae5f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11dfae65 push edx */
  push32((uint32_t)(EDX));
  /* 11dfae66 call 0x11e01410 */
  push32(0x11dfae6bu); f_11e01410();
  /* 11dfae6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfae6e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfae71 jbe 0x11dfaea8 */
  if ((C.cf||C.zf)) goto L_11dfaea8;
  /* 11dfae73 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11dfae79 push eax */
  push32((uint32_t)(EAX));
  /* 11dfae7a call 0x11e01410 */
  push32(0x11dfae7fu); f_11e01410();
  /* 11dfae7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfae82 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11dfae88 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 11dfae8c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 11dfae92 push 3 */
  push32((uint32_t)(0x3u));
  /* 11dfae94 push 0x11e2a658 */
  push32((uint32_t)(0x11e2a658u));
  /* 11dfae99 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11dfae9f push eax */
  push32((uint32_t)(EAX));
  /* 11dfaea0 call 0x11e01e00 */
  push32(0x11dfaea5u); f_11e01e00();
  /* 11dfaea5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dfaea8:;
  /* 11dfaea8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfaeac jne 0x11dfaeba */
  if (!C.zf) goto L_11dfaeba;
  /* 11dfaeae mov dword ptr [ebp - 0x1114], 0x11e2a5e4 */
  w32((uint32_t)(EBP + -0x1114), (0x11e2a5e4u));
  /* 11dfaeb8 jmp 0x11dfaec4 */
  goto L_11dfaec4;
L_11dfaeba:;
  /* 11dfaeba mov dword ptr [ebp - 0x1114], 0x11e2a318 */
  w32((uint32_t)(EBP + -0x1114), (0x11e2a318u));
L_11dfaec4:;
  /* 11dfaec4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11dfaec7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11dfaeca test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dfaecc je 0x11dfaed9 */
  if (C.zf) goto L_11dfaed9;
  /* 11dfaece mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11dfaed1 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 11dfaed7 jmp 0x11dfaee3 */
  goto L_11dfaee3;
L_11dfaed9:;
  /* 11dfaed9 mov dword ptr [ebp - 0x1118], 0x11e2a318 */
  w32((uint32_t)(EBP + -0x1118), (0x11e2a318u));
L_11dfaee3:;
  /* 11dfaee3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11dfaee6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11dfaee9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dfaeeb je 0x11dfaeff */
  if (C.zf) goto L_11dfaeff;
  /* 11dfaeed cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfaef1 jne 0x11dfaeff */
  if (!C.zf) goto L_11dfaeff;
  /* 11dfaef3 mov dword ptr [ebp - 0x111c], 0x11e2a5d4 */
  w32((uint32_t)(EBP + -0x111c), (0x11e2a5d4u));
  /* 11dfaefd jmp 0x11dfaf09 */
  goto L_11dfaf09;
L_11dfaeff:;
  /* 11dfaeff mov dword ptr [ebp - 0x111c], 0x11e2a318 */
  w32((uint32_t)(EBP + -0x111c), (0x11e2a318u));
L_11dfaf09:;
  /* 11dfaf09 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11dfaf0c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11dfaf0f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11dfaf11 je 0x11dfaf1f */
  if (C.zf) goto L_11dfaf1f;
  /* 11dfaf13 mov dword ptr [ebp - 0x1120], 0x11e2a5d0 */
  w32((uint32_t)(EBP + -0x1120), (0x11e2a5d0u));
  /* 11dfaf1d jmp 0x11dfaf29 */
  goto L_11dfaf29;
L_11dfaf1f:;
  /* 11dfaf1f mov dword ptr [ebp - 0x1120], 0x11e2a318 */
  w32((uint32_t)(EBP + -0x1120), (0x11e2a318u));
L_11dfaf29:;
  /* 11dfaf29 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfaf2d je 0x11dfaf3a */
  if (C.zf) goto L_11dfaf3a;
  /* 11dfaf2f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfaf32 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 11dfaf38 jmp 0x11dfaf44 */
  goto L_11dfaf44;
L_11dfaf3a:;
  /* 11dfaf3a mov dword ptr [ebp - 0x1124], 0x11e2a318 */
  w32((uint32_t)(EBP + -0x1124), (0x11e2a318u));
L_11dfaf44:;
  /* 11dfaf44 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfaf48 je 0x11dfaf56 */
  if (C.zf) goto L_11dfaf56;
  /* 11dfaf4a mov dword ptr [ebp - 0x1128], 0x11e2a5c8 */
  w32((uint32_t)(EBP + -0x1128), (0x11e2a5c8u));
  /* 11dfaf54 jmp 0x11dfaf60 */
  goto L_11dfaf60;
L_11dfaf56:;
  /* 11dfaf56 mov dword ptr [ebp - 0x1128], 0x11e2a318 */
  w32((uint32_t)(EBP + -0x1128), (0x11e2a318u));
L_11dfaf60:;
  /* 11dfaf60 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfaf64 je 0x11dfaf71 */
  if (C.zf) goto L_11dfaf71;
  /* 11dfaf66 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfaf69 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 11dfaf6f jmp 0x11dfaf7b */
  goto L_11dfaf7b;
L_11dfaf71:;
  /* 11dfaf71 mov dword ptr [ebp - 0x112c], 0x11e2a318 */
  w32((uint32_t)(EBP + -0x112c), (0x11e2a318u));
L_11dfaf7b:;
  /* 11dfaf7b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfaf7f je 0x11dfaf8d */
  if (C.zf) goto L_11dfaf8d;
  /* 11dfaf81 mov dword ptr [ebp - 0x1130], 0x11e2a5c0 */
  w32((uint32_t)(EBP + -0x1130), (0x11e2a5c0u));
  /* 11dfaf8b jmp 0x11dfaf97 */
  goto L_11dfaf97;
L_11dfaf8d:;
  /* 11dfaf8d mov dword ptr [ebp - 0x1130], 0x11e2a318 */
  w32((uint32_t)(EBP + -0x1130), (0x11e2a318u));
L_11dfaf97:;
  /* 11dfaf97 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfaf9e je 0x11dfafae */
  if (C.zf) goto L_11dfafae;
  /* 11dfafa0 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11dfafa6 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 11dfafac jmp 0x11dfafb8 */
  goto L_11dfafb8;
L_11dfafae:;
  /* 11dfafae mov dword ptr [ebp - 0x1134], 0x11e2a318 */
  w32((uint32_t)(EBP + -0x1134), (0x11e2a318u));
L_11dfafb8:;
  /* 11dfafb8 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfafbf je 0x11dfafcd */
  if (C.zf) goto L_11dfafcd;
  /* 11dfafc1 mov dword ptr [ebp - 0x1138], 0x11e2a5b4 */
  w32((uint32_t)(EBP + -0x1138), (0x11e2a5b4u));
  /* 11dfafcb jmp 0x11dfafd7 */
  goto L_11dfafd7;
L_11dfafcd:;
  /* 11dfafcd mov dword ptr [ebp - 0x1138], 0x11e2a318 */
  w32((uint32_t)(EBP + -0x1138), (0x11e2a318u));
L_11dfafd7:;
  /* 11dfafd7 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 11dfafdd push edx */
  push32((uint32_t)(EDX));
  /* 11dfafde mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 11dfafe4 push eax */
  push32((uint32_t)(EAX));
  /* 11dfafe5 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 11dfafeb push ecx */
  push32((uint32_t)(ECX));
  /* 11dfafec mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 11dfaff2 push edx */
  push32((uint32_t)(EDX));
  /* 11dfaff3 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 11dfaff9 push eax */
  push32((uint32_t)(EAX));
  /* 11dfaffa mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 11dfb000 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfb001 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 11dfb007 push edx */
  push32((uint32_t)(EDX));
  /* 11dfb008 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 11dfb00e push eax */
  push32((uint32_t)(EAX));
  /* 11dfb00f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 11dfb015 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfb016 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 11dfb01c push edx */
  push32((uint32_t)(EDX));
  /* 11dfb01d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfb020 push eax */
  push32((uint32_t)(EAX));
  /* 11dfb021 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfb024 mov edx, dword ptr [ecx*4 + 0x11e2ddec] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11e2ddec)));
  /* 11dfb02b push edx */
  push32((uint32_t)(EDX));
  /* 11dfb02c push 0x11e2a560 */
  push32((uint32_t)(0x11e2a560u));
  /* 11dfb031 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11dfb036 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 11dfb03c push eax */
  push32((uint32_t)(EAX));
  /* 11dfb03d call 0x11e01490 */
  push32(0x11dfb042u); f_11e01490();
  /* 11dfb042 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfb045 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfb047 jge 0x11dfb05d */
  if ((C.sf==C.of)) goto L_11dfb05d;
  /* 11dfb049 push 0x11e2a4c4 */
  push32((uint32_t)(0x11e2a4c4u));
  /* 11dfb04e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 11dfb054 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfb055 call 0x11e01590 */
  push32(0x11dfb05au); f_11e01590();
  /* 11dfb05a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dfb05d:;
  /* 11dfb05d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 11dfb062 push 0x11e2a53c */
  push32((uint32_t)(0x11e2a53cu));
  /* 11dfb067 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 11dfb06d push edx */
  push32((uint32_t)(EDX));
  /* 11dfb06e call 0x11e01d40 */
  push32(0x11dfb073u); f_11e01d40();
  /* 11dfb073 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfb076 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 11dfb07c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfb083 jne 0x11dfb096 */
  if (!C.zf) goto L_11dfb096;
  /* 11dfb085 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11dfb087 call 0x11e01a80 */
  push32(0x11dfb08cu); f_11e01a80();
  /* 11dfb08c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfb08f push 3 */
  push32((uint32_t)(0x3u));
  /* 11dfb091 call 0x11dfeec0 */
  push32(0x11dfb096u); f_11dfeec0();
L_11dfb096:;
  /* 11dfb096 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfb09d jne 0x11dfb0a6 */
  if (!C.zf) goto L_11dfb0a6;
  /* 11dfb09f mov eax, 1 */
  EAX = (0x1u);
  /* 11dfb0a4 jmp 0x11dfb0a8 */
  goto L_11dfb0a8;
L_11dfb0a6:;
  /* 11dfb0a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11dfb0a8:;
  /* 11dfb0a8 mov esp, ebp */
  ESP = (EBP);
  /* 11dfb0aa pop ebp */
  EBP = (pop32());
  /* 11dfb0ab ret  */
  ESPCHK(0x11dfada0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b2ac @ 0x11dfb2ac (25 bytes, 7 insns) */
void f_11dfb2ac(void) {
  FTRACE(0x11dfb2acu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfb2ac test eax, 0x80000 */
  { uint32_t _r=(EAX)&(0x80000u); fl_logic(_r,32); }
  /* 11dfb2b1 je 0x11dfb2b9 */
  if (C.zf) goto L_11dfb2b9;
  /* 11dfb2b3 mov eax, 7 */
  EAX = (0x7u);
  /* 11dfb2b8 ret  */
  ESPCHK(0x11dfb2acu, _esp0);
  ESP += 4; return;
L_11dfb2b9:;
  /* 11dfb2b9 fadd qword ptr [0x11e2a6a0] */
  FPU_ST(0) = FPU_ST(0) + (rf64((uint32_t)(0x11e2a6a0)));
  /* 11dfb2bf mov eax, 1 */
  EAX = (0x1u);
  /* 11dfb2c4 ret  */
  ESPCHK(0x11dfb2acu, _esp0);
  ESP += 4; return;
}

/* __fload_withFB @ 0x11dfb2c5 (67 bytes, 21 insns) */
void f_11dfb2c5(void) {
  FTRACE(0x11dfb2c5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfb2c5 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11dfb2c8 and eax, 0x7ff00000 */
  { uint32_t _r=(EAX)&(0x7ff00000u); EAX = (_r); fl_logic(_r,32); }
  /* 11dfb2cd cmp eax, 0x7ff00000 */
  { uint32_t _a=(EAX),_b=(0x7ff00000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfb2d2 je 0x11dfb2d7 */
  if (C.zf) goto L_11dfb2d7;
  /* 11dfb2d4 fld qword ptr [edx] */
  fpu_push(rf64((uint32_t)(EDX)));
  /* 11dfb2d6 ret  */
  ESPCHK(0x11dfb2c5u, _esp0);
  ESP += 4; return;
L_11dfb2d7:;
  /* 11dfb2d7 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11dfb2da sub esp, 0xa */
  { uint32_t _a=(ESP),_b=(0xau),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfb2dd or eax, 0x7fff0000 */
  { uint32_t _r=(EAX)|(0x7fff0000u); EAX = (_r); fl_logic(_r,32); }
  /* 11dfb2e2 mov dword ptr [esp + 6], eax */
  w32((uint32_t)(ESP + 0x6), (EAX));
  /* 11dfb2e6 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11dfb2e9 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11dfb2eb shld eax, ecx, 0xb */
  EAX = (sh_shld((uint32_t)(EAX),(uint32_t)(ECX),(0xbu)&0x1f,32));
  /* 11dfb2ef shl ecx, 0xb */
  ECX = (sh_shl((uint32_t)(ECX), (0xbu)&0x1f, 32));
  /* 11dfb2f2 mov dword ptr [esp + 4], eax */
  w32((uint32_t)(ESP + 0x4), (EAX));
  /* 11dfb2f6 mov dword ptr [esp], ecx */
  w32((uint32_t)(ESP), (ECX));
  /* 11dfb2f9 fld xword ptr [esp] */
  fpu_push(rf80((uint32_t)(ESP)));
  /* 11dfb2fc add esp, 0xa */
  { uint32_t _a=(ESP),_b=(0xau),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfb2ff test eax, 0 */
  { uint32_t _r=(EAX)&(0x0u); fl_logic(_r,32); }
  /* 11dfb304 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11dfb307 ret  */
  ESPCHK(0x11dfb2c5u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b308 @ 0x11dfb308 (22 bytes, 7 insns) */
void f_11dfb308(void) {
  FTRACE(0x11dfb308u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfb308 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11dfb30c and eax, 0x7ff00000 */
  { uint32_t _r=(EAX)&(0x7ff00000u); EAX = (_r); fl_logic(_r,32); }
  /* 11dfb311 cmp eax, 0x7ff00000 */
  { uint32_t _a=(EAX),_b=(0x7ff00000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfb316 je 0x11dfb319 */
  if (C.zf) goto L_11dfb319;
  /* 11dfb318 ret  */
  ESPCHK(0x11dfb308u, _esp0);
  ESP += 4; return;
L_11dfb319:;
  /* 11dfb319 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11dfb31d ret  */
  ESPCHK(0x11dfb308u, _esp0);
  ESP += 4; return;
}

/* __math_exit @ 0x11dfb32b (42 bytes, 16 insns) */
void f_11dfb32b(void) {
  FTRACE(0x11dfb32bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfb32b mov ax, word ptr [esp] */
  AX = (r16((uint32_t)(ESP)));
  /* 11dfb32f cmp ax, 0x27f */
  { uint32_t _a=(AX),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11dfb333 je 0x11dfb353 */
  if (C.zf) goto L_11dfb353;
  /* 11dfb335 and ax, 0x20 */
  { uint32_t _r=(AX)&(0x20u); AX = (_r); fl_logic(_r,16); }
  /* 11dfb339 je 0x11dfb350 */
  if (C.zf) goto L_11dfb350;
  /* 11dfb33b wait  */
  /* wait (no observable integer/reg state) */
  /* 11dfb33c fnstsw ax */
  AX = fpu_status();
  /* 11dfb33e and ax, 0x20 */
  { uint32_t _r=(AX)&(0x20u); AX = (_r); fl_logic(_r,16); }
  /* 11dfb342 je 0x11dfb350 */
  if (C.zf) goto L_11dfb350;
  /* 11dfb344 mov eax, 8 */
  EAX = (0x8u);
  /* 11dfb349 call 0x11dfb427 */
  push32(0x11dfb34eu); f_11dfb427();
  /* 11dfb34e pop edx */
  EDX = (pop32());
  /* 11dfb34f ret  */
  ESPCHK(0x11dfb32bu, _esp0);
  ESP += 4; return;
L_11dfb350:;
  /* 11dfb350 fldcw word ptr [esp] */
  C.fcw = r16((uint32_t)(ESP));
L_11dfb353:;
  /* 11dfb353 pop edx */
  EDX = (pop32());
  /* 11dfb354 ret  */
  ESPCHK(0x11dfb32bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000b410 @ 0x11dfb410 (23 bytes, 9 insns) */
void f_11dfb410(void) {
  FTRACE(0x11dfb410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfb410 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfb411 mov ebp, esp */
  EBP = (ESP);
  /* 11dfb413 add esp, -0x20 */
  { uint32_t _a=(ESP),_b=(0xffffffe0u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfb416 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11dfb419 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11dfb41c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11dfb41f mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11dfb422 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11dfb425 jmp 0x11dfb430 */
  jmp_ind(0x11dfb430u); return;
}

/* __startOneArgErrorHandling @ 0x11dfb427 (60 bytes, 23 insns) */
void f_11dfb427(void) {
  FTRACE(0x11dfb427u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfb427 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfb428 mov ebp, esp */
  EBP = (ESP);
  /* 11dfb42a add esp, -0x20 */
  { uint32_t _a=(ESP),_b=(0xffffffe0u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfb42d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11dfb430 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 11dfb433 mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 11dfb436 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfb439 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dfb43c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11dfb43f mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11dfb442 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11dfb445 lea ecx, [ebp - 0x20] */
  ECX = ((uint32_t)(EBP + -0x20));
  /* 11dfb448 push eax */
  push32((uint32_t)(EAX));
  /* 11dfb449 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfb44a push edx */
  push32((uint32_t)(EDX));
  /* 11dfb44b call 0x11e01f00 */
  push32(0x11dfb450u); f_11e01f00();
  /* 11dfb450 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfb453 fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
  /* 11dfb456 cmp word ptr [ebp + 8], 0x27f */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11dfb45c je 0x11dfb461 */
  if (C.zf) goto L_11dfb461;
  /* 11dfb45e fldcw word ptr [ebp + 8] */
  C.fcw = r16((uint32_t)(EBP + 0x8));
L_11dfb461:;
  /* 11dfb461 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dfb462 ret  */
  ESPCHK(0x11dfb427u, _esp0);
  ESP += 4; return;
}

/* __setdefaultprecision @ 0x11dfb470 (23 bytes, 8 insns) */
void f_11dfb470(void) {
  FTRACE(0x11dfb470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfb470 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfb471 mov ebp, esp */
  EBP = (ESP);
  /* 11dfb473 push 0x30000 */
  push32((uint32_t)(0x30000u));
  /* 11dfb478 push 0x10000 */
  push32((uint32_t)(0x10000u));
  /* 11dfb47d call 0x11e02110 */
  push32(0x11dfb482u); f_11e02110();
  /* 11dfb482 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfb485 pop ebp */
  EBP = (pop32());
  /* 11dfb486 ret  */
  ESPCHK(0x11dfb470u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b490 @ 0x11dfb490 (94 bytes, 30 insns) */
void f_11dfb490(void) {
  FTRACE(0x11dfb490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfb490 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfb491 mov ebp, esp */
  EBP = (ESP);
  /* 11dfb493 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfb496 push ebx */
  push32((uint32_t)(EBX));
  /* 11dfb497 push esi */
  push32((uint32_t)(ESI));
  /* 11dfb498 push edi */
  push32((uint32_t)(EDI));
  /* 11dfb499 mov dword ptr [ebp - 0x18], 0x80000000 */
  w32((uint32_t)(EBP + -0x18), (0x80000000u));
  /* 11dfb4a0 mov dword ptr [ebp - 0x14], 0x4147ffff */
  w32((uint32_t)(EBP + -0x14), (0x4147ffffu));
  /* 11dfb4a7 mov dword ptr [ebp - 8], 0xc0000000 */
  w32((uint32_t)(EBP + -0x8), (0xc0000000u));
  /* 11dfb4ae mov dword ptr [ebp - 4], 0x4150017e */
  w32((uint32_t)(EBP + -0x4), (0x4150017eu));
  /* 11dfb4b5 fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
  /* 11dfb4b8 fdiv qword ptr [ebp - 0x18] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(EBP + -0x18)));
  /* 11dfb4bb fmul qword ptr [ebp - 0x18] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x18)));
  /* 11dfb4be fsubr qword ptr [ebp - 8] */
  FPU_ST(0) = (rf64((uint32_t)(EBP + -0x8))) - FPU_ST(0);
  /* 11dfb4c1 fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 11dfb4c4 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 11dfb4c7 fcomp qword ptr [0x11e2a6e8] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11e2a6e8)));
  (void)fpu_pop();
  /* 11dfb4cd fnstsw ax */
  AX = fpu_status();
  /* 11dfb4cf test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 11dfb4d2 jne 0x11dfb4dd */
  if (!C.zf) goto L_11dfb4dd;
  /* 11dfb4d4 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 11dfb4db jmp 0x11dfb4e4 */
  goto L_11dfb4e4;
L_11dfb4dd:;
  /* 11dfb4dd mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
L_11dfb4e4:;
  /* 11dfb4e4 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11dfb4e7 pop edi */
  EDI = (pop32());
  /* 11dfb4e8 pop esi */
  ESI = (pop32());
  /* 11dfb4e9 pop ebx */
  EBX = (pop32());
  /* 11dfb4ea mov esp, ebp */
  ESP = (EBP);
  /* 11dfb4ec pop ebp */
  EBP = (pop32());
  /* 11dfb4ed ret  */
  ESPCHK(0x11dfb490u, _esp0);
  ESP += 4; return;
}

/* __ms_p5_mp_test_fdiv @ 0x11dfb4f0 (66 bytes, 22 insns) */
void f_11dfb4f0(void) {
  FTRACE(0x11dfb4f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfb4f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfb4f1 mov ebp, esp */
  EBP = (ESP);
  /* 11dfb4f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfb4f6 push 0x11e2a70c */
  push32((uint32_t)(0x11e2a70cu));
  /* 11dfb4fb call dword ptr [0x11e332f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e332f4))), 0x11dfb501u);
  /* 11dfb501 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11dfb504 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfb508 je 0x11dfb529 */
  if (C.zf) goto L_11dfb529;
  /* 11dfb50a push 0x11e2a6f0 */
  push32((uint32_t)(0x11e2a6f0u));
  /* 11dfb50f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfb512 push eax */
  push32((uint32_t)(EAX));
  /* 11dfb513 call dword ptr [0x11e333d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333d8))), 0x11dfb519u);
  /* 11dfb519 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11dfb51c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfb520 je 0x11dfb529 */
  if (C.zf) goto L_11dfb529;
  /* 11dfb522 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfb524 call dword ptr [ebp - 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x8))), 0x11dfb527u);
  /* 11dfb527 jmp 0x11dfb52e */
  goto L_11dfb52e;
L_11dfb529:;
  /* 11dfb529 call 0x11dfb490 */
  push32(0x11dfb52eu); f_11dfb490();
L_11dfb52e:;
  /* 11dfb52e mov esp, ebp */
  ESP = (EBP);
  /* 11dfb530 pop ebp */
  EBP = (pop32());
  /* 11dfb531 ret  */
  ESPCHK(0x11dfb4f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b540 @ 0x11dfb540 (168 bytes, 59 insns) */
void f_11dfb540(void) {
  FTRACE(0x11dfb540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfb540 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfb541 mov ebp, esp */
  EBP = (ESP);
  /* 11dfb543 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfb546 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfb549 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11dfb54c push ecx */
  push32((uint32_t)(ECX));
  /* 11dfb54d call 0x11e025f0 */
  push32(0x11dfb552u); f_11e025f0();
  /* 11dfb552 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfb555 cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfb558 je 0x11dfb5a0 */
  if (C.zf) goto L_11dfb5a0;
L_11dfb55a:;
  /* 11dfb55a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfb55d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfb560 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11dfb563 cmp dword ptr [0x11e2e000], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e2e000))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfb56a jle 0x11dfb582 */
  if ((C.zf||C.sf!=C.of)) goto L_11dfb582;
  /* 11dfb56c push 4 */
  push32((uint32_t)(0x4u));
  /* 11dfb56e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfb571 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11dfb574 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfb575 call 0x11e02520 */
  push32(0x11dfb57au); f_11e02520();
  /* 11dfb57a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfb57d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11dfb580 jmp 0x11dfb59a */
  goto L_11dfb59a;
L_11dfb582:;
  /* 11dfb582 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfb585 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11dfb588 mov ecx, dword ptr [0x11e2e00c] */
  ECX = (r32((uint32_t)(0x11e2e00c)));
  /* 11dfb58e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11dfb590 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11dfb594 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11dfb597 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11dfb59a:;
  /* 11dfb59a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfb59e jne 0x11dfb55a */
  if (!C.zf) goto L_11dfb55a;
L_11dfb5a0:;
  /* 11dfb5a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfb5a3 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11dfb5a5 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11dfb5a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfb5ab mov al, byte ptr [0x11e2e004] */
  AL = (r8((uint32_t)(0x11e2e004)));
  /* 11dfb5b0 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11dfb5b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfb5b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfb5b8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11dfb5bb:;
  /* 11dfb5bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfb5be mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11dfb5c0 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 11dfb5c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfb5c6 mov dl, byte ptr [ebp - 8] */
  DL = (r8((uint32_t)(EBP + -0x8)));
  /* 11dfb5c9 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11dfb5cb mov al, byte ptr [ebp - 4] */
  AL = (r8((uint32_t)(EBP + -0x4)));
  /* 11dfb5ce mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11dfb5d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfb5d4 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11dfb5d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfb5da add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfb5dd mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11dfb5e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dfb5e2 jne 0x11dfb5bb */
  if (!C.zf) goto L_11dfb5bb;
  /* 11dfb5e4 mov esp, ebp */
  ESP = (EBP);
  /* 11dfb5e6 pop ebp */
  EBP = (pop32());
  /* 11dfb5e7 ret  */
  ESPCHK(0x11dfb540u, _esp0);
  ESP += 4; return;
}

/* __cropzeros @ 0x11dfb5f0 (215 bytes, 78 insns) */
void f_11dfb5f0(void) {
  FTRACE(0x11dfb5f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfb5f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfb5f1 mov ebp, esp */
  EBP = (ESP);
  /* 11dfb5f3 push ecx */
  push32((uint32_t)(ECX));
L_11dfb5f4:;
  /* 11dfb5f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfb5f7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11dfb5fa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11dfb5fc je 0x11dfb61a */
  if (C.zf) goto L_11dfb61a;
  /* 11dfb5fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfb601 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11dfb604 movsx ecx, byte ptr [0x11e2e004] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11e2e004))));
  /* 11dfb60b cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfb60d je 0x11dfb61a */
  if (C.zf) goto L_11dfb61a;
  /* 11dfb60f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfb612 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfb615 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11dfb618 jmp 0x11dfb5f4 */
  goto L_11dfb5f4;
L_11dfb61a:;
  /* 11dfb61a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfb61d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11dfb620 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfb623 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfb626 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11dfb629 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11dfb62b je 0x11dfb6c3 */
  if (C.zf) goto L_11dfb6c3;
L_11dfb631:;
  /* 11dfb631 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfb634 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11dfb637 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11dfb639 je 0x11dfb65c */
  if (C.zf) goto L_11dfb65c;
  /* 11dfb63b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfb63e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11dfb641 cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfb644 je 0x11dfb65c */
  if (C.zf) goto L_11dfb65c;
  /* 11dfb646 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfb649 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11dfb64c cmp edx, 0x45 */
  { uint32_t _a=(EDX),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfb64f je 0x11dfb65c */
  if (C.zf) goto L_11dfb65c;
  /* 11dfb651 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfb654 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfb657 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11dfb65a jmp 0x11dfb631 */
  goto L_11dfb631;
L_11dfb65c:;
  /* 11dfb65c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfb65f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11dfb662 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfb665 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfb668 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11dfb66b:;
  /* 11dfb66b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfb66e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11dfb671 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfb674 jne 0x11dfb681 */
  if (!C.zf) goto L_11dfb681;
  /* 11dfb676 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfb679 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfb67c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11dfb67f jmp 0x11dfb66b */
  goto L_11dfb66b;
L_11dfb681:;
  /* 11dfb681 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfb684 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11dfb687 movsx edx, byte ptr [0x11e2e004] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11e2e004))));
  /* 11dfb68e cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfb690 jne 0x11dfb69b */
  if (!C.zf) goto L_11dfb69b;
  /* 11dfb692 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfb695 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfb698 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11dfb69b:;
  /* 11dfb69b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfb69e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfb6a1 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11dfb6a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfb6a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfb6aa mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11dfb6ac mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11dfb6ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfb6b1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11dfb6b4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfb6b7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfb6ba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11dfb6bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfb6bf je 0x11dfb6c3 */
  if (C.zf) goto L_11dfb6c3;
  /* 11dfb6c1 jmp 0x11dfb69b */
  goto L_11dfb69b;
L_11dfb6c3:;
  /* 11dfb6c3 mov esp, ebp */
  ESP = (EBP);
  /* 11dfb6c5 pop ebp */
  EBP = (pop32());
  /* 11dfb6c6 ret  */
  ESPCHK(0x11dfb5f0u, _esp0);
  ESP += 4; return;
}

/* __positive @ 0x11dfb6d0 (45 bytes, 16 insns) */
void f_11dfb6d0(void) {
  FTRACE(0x11dfb6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfb6d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfb6d1 mov ebp, esp */
  EBP = (ESP);
  /* 11dfb6d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfb6d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfb6d7 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 11dfb6d9 fcomp qword ptr [0x11e2a718] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11e2a718)));
  (void)fpu_pop();
  /* 11dfb6df fnstsw ax */
  AX = fpu_status();
  /* 11dfb6e1 test ah, 1 */
  { uint32_t _r=(AH)&(0x1u); fl_logic(_r,8); }
  /* 11dfb6e4 jne 0x11dfb6ef */
  if (!C.zf) goto L_11dfb6ef;
  /* 11dfb6e6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11dfb6ed jmp 0x11dfb6f6 */
  goto L_11dfb6f6;
L_11dfb6ef:;
  /* 11dfb6ef mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11dfb6f6:;
  /* 11dfb6f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfb6f9 mov esp, ebp */
  ESP = (EBP);
  /* 11dfb6fb pop ebp */
  EBP = (pop32());
  /* 11dfb6fc ret  */
  ESPCHK(0x11dfb6d0u, _esp0);
  ESP += 4; return;
}

/* __fassign @ 0x11dfb700 (72 bytes, 29 insns) */
void f_11dfb700(void) {
  FTRACE(0x11dfb700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfb700 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfb701 mov ebp, esp */
  EBP = (ESP);
  /* 11dfb703 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfb706 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfb70a je 0x11dfb72c */
  if (C.zf) goto L_11dfb72c;
  /* 11dfb70c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfb70f push eax */
  push32((uint32_t)(EAX));
  /* 11dfb710 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11dfb713 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfb714 call 0x11e02ee0 */
  push32(0x11dfb719u); f_11e02ee0();
  /* 11dfb719 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfb71c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfb71f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfb722 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11dfb724 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfb727 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11dfb72a jmp 0x11dfb744 */
  goto L_11dfb744;
L_11dfb72c:;
  /* 11dfb72c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfb72f push edx */
  push32((uint32_t)(EDX));
  /* 11dfb730 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11dfb733 push eax */
  push32((uint32_t)(EAX));
  /* 11dfb734 call 0x11e02f60 */
  push32(0x11dfb739u); f_11e02f60();
  /* 11dfb739 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfb73c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfb73f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11dfb742 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
L_11dfb744:;
  /* 11dfb744 mov esp, ebp */
  ESP = (EBP);
  /* 11dfb746 pop ebp */
  EBP = (pop32());
  /* 11dfb747 ret  */
  ESPCHK(0x11dfb700u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b750 @ 0x11dfb750 (118 bytes, 49 insns) */
void f_11dfb750(void) {
  FTRACE(0x11dfb750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfb750 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfb751 mov ebp, esp */
  EBP = (ESP);
  /* 11dfb753 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfb756 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11dfb759 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11dfb75c lea ecx, [ebp - 0x2c] */
  ECX = ((uint32_t)(EBP + -0x2c));
  /* 11dfb75f push ecx */
  push32((uint32_t)(ECX));
  /* 11dfb760 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 11dfb763 push edx */
  push32((uint32_t)(EDX));
  /* 11dfb764 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfb767 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11dfb76a push ecx */
  push32((uint32_t)(ECX));
  /* 11dfb76b mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11dfb76d push edx */
  push32((uint32_t)(EDX));
  /* 11dfb76e call 0x11e030a0 */
  push32(0x11dfb773u); f_11e030a0();
  /* 11dfb773 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfb776 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfb779 push eax */
  push32((uint32_t)(EAX));
  /* 11dfb77a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfb77d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfb780 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfb781 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfb784 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dfb786 cmp dword ptr [edx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfb789 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11dfb78c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfb78f add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfb791 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11dfb793 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfb797 setg dl */
  DL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 11dfb79a add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfb79c push ecx */
  push32((uint32_t)(ECX));
  /* 11dfb79d call 0x11e02fa0 */
  push32(0x11dfb7a2u); f_11e02fa0();
  /* 11dfb7a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfb7a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfb7a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfb7aa push eax */
  push32((uint32_t)(EAX));
  /* 11dfb7ab mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dfb7ae push ecx */
  push32((uint32_t)(ECX));
  /* 11dfb7af mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfb7b2 push edx */
  push32((uint32_t)(EDX));
  /* 11dfb7b3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfb7b6 push eax */
  push32((uint32_t)(EAX));
  /* 11dfb7b7 call 0x11dfb7d0 */
  push32(0x11dfb7bcu); f_11dfb7d0();
  /* 11dfb7bc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfb7bf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfb7c2 mov esp, ebp */
  ESP = (EBP);
  /* 11dfb7c4 pop ebp */
  EBP = (pop32());
  /* 11dfb7c5 ret  */
  ESPCHK(0x11dfb750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b7d0 @ 0x11dfb7d0 (358 bytes, 128 insns) */
void f_11dfb7d0(void) {
  FTRACE(0x11dfb7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfb7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfb7d1 mov ebp, esp */
  EBP = (ESP);
  /* 11dfb7d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfb7d6 movsx eax, byte ptr [ebp + 0x18] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x18))));
  /* 11dfb7da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfb7dc je 0x11dfb807 */
  if (C.zf) goto L_11dfb807;
  /* 11dfb7de mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dfb7e1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11dfb7e3 cmp dword ptr [ecx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfb7e6 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11dfb7e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfb7ec add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfb7ee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11dfb7f1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11dfb7f3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfb7f7 setg cl */
  CL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 11dfb7fa push ecx */
  push32((uint32_t)(ECX));
  /* 11dfb7fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfb7fe push edx */
  push32((uint32_t)(EDX));
  /* 11dfb7ff call 0x11dfbc40 */
  push32(0x11dfb804u); f_11dfbc40();
  /* 11dfb804 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dfb807:;
  /* 11dfb807 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfb80a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11dfb80d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dfb810 cmp dword ptr [ecx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfb813 jne 0x11dfb824 */
  if (!C.zf) goto L_11dfb824;
  /* 11dfb815 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfb818 mov byte ptr [edx], 0x2d */
  w8((uint32_t)(EDX), (0x2du));
  /* 11dfb81b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfb81e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfb821 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11dfb824:;
  /* 11dfb824 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfb828 jle 0x11dfb848 */
  if ((C.zf||C.sf!=C.of)) goto L_11dfb848;
  /* 11dfb82a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfb82d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfb830 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11dfb833 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11dfb835 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfb838 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfb83b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11dfb83e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfb841 mov al, byte ptr [0x11e2e004] */
  AL = (r8((uint32_t)(0x11e2e004)));
  /* 11dfb846 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
L_11dfb848:;
  /* 11dfb848 push 0x11e2a720 */
  push32((uint32_t)(0x11e2a720u));
  /* 11dfb84d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfb850 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfb853 movsx edx, byte ptr [ebp + 0x18] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x18))));
  /* 11dfb857 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11dfb859 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfb85b inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11dfb85c add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfb85e push ecx */
  push32((uint32_t)(ECX));
  /* 11dfb85f call 0x11e01590 */
  push32(0x11dfb864u); f_11e01590();
  /* 11dfb864 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfb867 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11dfb86a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfb86e je 0x11dfb876 */
  if (C.zf) goto L_11dfb876;
  /* 11dfb870 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfb873 mov byte ptr [eax], 0x45 */
  w8((uint32_t)(EAX), (0x45u));
L_11dfb876:;
  /* 11dfb876 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfb879 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfb87c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11dfb87f mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dfb882 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11dfb885 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11dfb888 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfb88b je 0x11dfb92f */
  if (C.zf) goto L_11dfb92f;
  /* 11dfb891 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dfb894 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11dfb897 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfb89a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11dfb89d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfb8a1 jge 0x11dfb8b1 */
  if ((C.sf==C.of)) goto L_11dfb8b1;
  /* 11dfb8a3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfb8a6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11dfb8a8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11dfb8ab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfb8ae mov byte ptr [edx], 0x2d */
  w8((uint32_t)(EDX), (0x2du));
L_11dfb8b1:;
  /* 11dfb8b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfb8b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfb8b7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11dfb8ba cmp dword ptr [ebp - 8], 0x64 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfb8be jl 0x11dfb8e5 */
  if ((C.sf!=C.of)) goto L_11dfb8e5;
  /* 11dfb8c0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfb8c3 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11dfb8c4 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11dfb8c9 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11dfb8cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfb8ce mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11dfb8d0 add cl, al */
  { uint32_t _a=(CL),_b=(AL),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11dfb8d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfb8d5 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11dfb8d7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfb8da cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11dfb8db mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11dfb8e0 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11dfb8e2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11dfb8e5:;
  /* 11dfb8e5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfb8e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfb8eb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11dfb8ee cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfb8f2 jl 0x11dfb919 */
  if ((C.sf!=C.of)) goto L_11dfb919;
  /* 11dfb8f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfb8f7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11dfb8f8 mov ecx, 0xa */
  ECX = (0xau);
  /* 11dfb8fd idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11dfb8ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfb902 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11dfb904 add cl, al */
  { uint32_t _a=(CL),_b=(AL),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11dfb906 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfb909 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11dfb90b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfb90e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11dfb90f mov ecx, 0xa */
  ECX = (0xau);
  /* 11dfb914 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11dfb916 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11dfb919:;
  /* 11dfb919 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfb91c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfb91f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11dfb922 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfb925 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11dfb927 add cl, byte ptr [ebp - 8] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EBP + -0x8))),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11dfb92a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfb92d mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
L_11dfb92f:;
  /* 11dfb92f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfb932 mov esp, ebp */
  ESP = (EBP);
  /* 11dfb934 pop ebp */
  EBP = (pop32());
  /* 11dfb935 ret  */
  ESPCHK(0x11dfb7d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b940 @ 0x11dfb940 (106 bytes, 44 insns) */
void f_11dfb940(void) {
  FTRACE(0x11dfb940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfb940 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfb941 mov ebp, esp */
  EBP = (ESP);
  /* 11dfb943 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfb946 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11dfb949 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11dfb94c lea ecx, [ebp - 0x2c] */
  ECX = ((uint32_t)(EBP + -0x2c));
  /* 11dfb94f push ecx */
  push32((uint32_t)(ECX));
  /* 11dfb950 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 11dfb953 push edx */
  push32((uint32_t)(EDX));
  /* 11dfb954 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfb957 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11dfb95a push ecx */
  push32((uint32_t)(ECX));
  /* 11dfb95b mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11dfb95d push edx */
  push32((uint32_t)(EDX));
  /* 11dfb95e call 0x11e030a0 */
  push32(0x11dfb963u); f_11e030a0();
  /* 11dfb963 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfb966 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfb969 push eax */
  push32((uint32_t)(EAX));
  /* 11dfb96a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfb96d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfb970 add edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfb973 push edx */
  push32((uint32_t)(EDX));
  /* 11dfb974 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfb977 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11dfb979 cmp dword ptr [eax], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfb97c sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11dfb97f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfb982 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfb984 push edx */
  push32((uint32_t)(EDX));
  /* 11dfb985 call 0x11e02fa0 */
  push32(0x11dfb98au); f_11e02fa0();
  /* 11dfb98a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfb98d push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfb98f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfb992 push eax */
  push32((uint32_t)(EAX));
  /* 11dfb993 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfb996 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfb997 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfb99a push edx */
  push32((uint32_t)(EDX));
  /* 11dfb99b call 0x11dfb9b0 */
  push32(0x11dfb9a0u); f_11dfb9b0();
  /* 11dfb9a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfb9a3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfb9a6 mov esp, ebp */
  ESP = (EBP);
  /* 11dfb9a8 pop ebp */
  EBP = (pop32());
  /* 11dfb9a9 ret  */
  ESPCHK(0x11dfb940u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9b0 @ 0x11dfb9b0 (317 bytes, 113 insns) */
void f_11dfb9b0(void) {
  FTRACE(0x11dfb9b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfb9b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfb9b1 mov ebp, esp */
  EBP = (ESP);
  /* 11dfb9b3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfb9b6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfb9b9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11dfb9bc sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfb9bf mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11dfb9c2 movsx edx, byte ptr [ebp + 0x14] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x14))));
  /* 11dfb9c6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dfb9c8 je 0x11dfba03 */
  if (C.zf) goto L_11dfba03;
  /* 11dfb9ca mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfb9cd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11dfb9cf cmp dword ptr [eax], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfb9d2 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11dfb9d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfb9d8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfb9da mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11dfb9dd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfb9e0 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfb9e3 jne 0x11dfba03 */
  if (!C.zf) goto L_11dfba03;
  /* 11dfb9e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfb9e8 add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfb9eb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11dfb9ee mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11dfb9f1 mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 11dfb9f4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11dfb9f7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfb9fa mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11dfb9fd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11dfba00 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_11dfba03:;
  /* 11dfba03 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfba06 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11dfba09 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfba0c cmp dword ptr [eax], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfba0f jne 0x11dfba20 */
  if (!C.zf) goto L_11dfba20;
  /* 11dfba11 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfba14 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 11dfba17 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfba1a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfba1d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11dfba20:;
  /* 11dfba20 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfba23 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfba27 jg 0x11dfba48 */
  if ((!C.zf&&C.sf==C.of)) goto L_11dfba48;
  /* 11dfba29 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dfba2b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfba2e push ecx */
  push32((uint32_t)(ECX));
  /* 11dfba2f call 0x11dfbc40 */
  push32(0x11dfba34u); f_11dfbc40();
  /* 11dfba34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfba37 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfba3a mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 11dfba3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfba40 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfba43 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11dfba46 jmp 0x11dfba54 */
  goto L_11dfba54;
L_11dfba48:;
  /* 11dfba48 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfba4b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfba4e add edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfba51 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11dfba54:;
  /* 11dfba54 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfba58 jle 0x11dfbae6 */
  if ((C.zf||C.sf!=C.of)) goto L_11dfbae6;
  /* 11dfba5e push 1 */
  push32((uint32_t)(0x1u));
  /* 11dfba60 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfba63 push eax */
  push32((uint32_t)(EAX));
  /* 11dfba64 call 0x11dfbc40 */
  push32(0x11dfba69u); f_11dfbc40();
  /* 11dfba69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfba6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfba6f mov dl, byte ptr [0x11e2e004] */
  DL = (r8((uint32_t)(0x11e2e004)));
  /* 11dfba75 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11dfba77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfba7a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfba7d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11dfba80 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfba83 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfba87 jge 0x11dfbae6 */
  if ((C.sf==C.of)) goto L_11dfbae6;
  /* 11dfba89 movsx edx, byte ptr [ebp + 0x14] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x14))));
  /* 11dfba8d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dfba8f je 0x11dfba9e */
  if (C.zf) goto L_11dfba9e;
  /* 11dfba91 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfba94 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11dfba97 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11dfba99 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11dfba9c jmp 0x11dfbac4 */
  goto L_11dfbac4;
L_11dfba9e:;
  /* 11dfba9e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfbaa1 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11dfbaa4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11dfbaa6 cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfbaa9 jge 0x11dfbab3 */
  if ((C.sf==C.of)) goto L_11dfbab3;
  /* 11dfbaab mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfbaae mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11dfbab1 jmp 0x11dfbabe */
  goto L_11dfbabe;
L_11dfbab3:;
  /* 11dfbab3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfbab6 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11dfbab9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11dfbabb mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11dfbabe:;
  /* 11dfbabe mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11dfbac1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11dfbac4:;
  /* 11dfbac4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfbac7 push edx */
  push32((uint32_t)(EDX));
  /* 11dfbac8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfbacb push eax */
  push32((uint32_t)(EAX));
  /* 11dfbacc call 0x11dfbc40 */
  push32(0x11dfbad1u); f_11dfbc40();
  /* 11dfbad1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfbad4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfbad7 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfbad8 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11dfbada mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfbadd push edx */
  push32((uint32_t)(EDX));
  /* 11dfbade call 0x11e03290 */
  push32(0x11dfbae3u); f_11e03290();
  /* 11dfbae3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dfbae6:;
  /* 11dfbae6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfbae9 mov esp, ebp */
  ESP = (EBP);
  /* 11dfbaeb pop ebp */
  EBP = (pop32());
  /* 11dfbaec ret  */
  ESPCHK(0x11dfb9b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000baf0 @ 0x11dfbaf0 (229 bytes, 89 insns) */
void f_11dfbaf0(void) {
  FTRACE(0x11dfbaf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfbaf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfbaf1 mov ebp, esp */
  EBP = (ESP);
  /* 11dfbaf3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfbaf6 mov byte ptr [ebp - 0x30], 0 */
  w8((uint32_t)(EBP + -0x30), (0x0u));
  /* 11dfbafa lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11dfbafd mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 11dfbb00 lea ecx, [ebp - 0x2c] */
  ECX = ((uint32_t)(EBP + -0x2c));
  /* 11dfbb03 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfbb04 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 11dfbb07 push edx */
  push32((uint32_t)(EDX));
  /* 11dfbb08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfbb0b mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11dfbb0e push ecx */
  push32((uint32_t)(ECX));
  /* 11dfbb0f mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11dfbb11 push edx */
  push32((uint32_t)(EDX));
  /* 11dfbb12 call 0x11e030a0 */
  push32(0x11dfbb17u); f_11e030a0();
  /* 11dfbb17 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfbb1a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11dfbb1d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11dfbb20 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfbb23 mov dword ptr [ebp - 0x34], ecx */
  w32((uint32_t)(EBP + -0x34), (ECX));
  /* 11dfbb26 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11dfbb29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dfbb2b cmp dword ptr [edx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfbb2e sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11dfbb31 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfbb34 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfbb36 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11dfbb39 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11dfbb3c push edx */
  push32((uint32_t)(EDX));
  /* 11dfbb3d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfbb40 push eax */
  push32((uint32_t)(EAX));
  /* 11dfbb41 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfbb44 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfbb45 call 0x11e02fa0 */
  push32(0x11dfbb4au); f_11e02fa0();
  /* 11dfbb4a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfbb4d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11dfbb50 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11dfbb53 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfbb56 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11dfbb58 cmp dword ptr [ebp - 0x34], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x34))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfbb5b setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 11dfbb5e mov byte ptr [ebp - 0x30], cl */
  w8((uint32_t)(EBP + -0x30), (CL));
  /* 11dfbb61 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11dfbb64 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11dfbb67 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfbb6a mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 11dfbb6d cmp dword ptr [ebp - 0x34], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x34))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfbb71 jl 0x11dfbb7b */
  if ((C.sf!=C.of)) goto L_11dfbb7b;
  /* 11dfbb73 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11dfbb76 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfbb79 jl 0x11dfbb97 */
  if ((C.sf!=C.of)) goto L_11dfbb97;
L_11dfbb7b:;
  /* 11dfbb7b push 1 */
  push32((uint32_t)(0x1u));
  /* 11dfbb7d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11dfbb80 push edx */
  push32((uint32_t)(EDX));
  /* 11dfbb81 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dfbb84 push eax */
  push32((uint32_t)(EAX));
  /* 11dfbb85 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfbb88 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfbb89 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfbb8c push edx */
  push32((uint32_t)(EDX));
  /* 11dfbb8d call 0x11dfb7d0 */
  push32(0x11dfbb92u); f_11dfb7d0();
  /* 11dfbb92 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfbb95 jmp 0x11dfbbd1 */
  goto L_11dfbbd1;
L_11dfbb97:;
  /* 11dfbb97 movsx eax, byte ptr [ebp - 0x30] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x30))));
  /* 11dfbb9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfbb9d je 0x11dfbbbb */
  if (C.zf) goto L_11dfbbbb;
L_11dfbb9f:;
  /* 11dfbb9f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfbba2 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11dfbba5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfbba8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfbbab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11dfbbae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dfbbb0 je 0x11dfbbb4 */
  if (C.zf) goto L_11dfbbb4;
  /* 11dfbbb2 jmp 0x11dfbb9f */
  goto L_11dfbb9f;
L_11dfbbb4:;
  /* 11dfbbb4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfbbb7 mov byte ptr [ecx - 2], 0 */
  w8((uint32_t)(ECX + -0x2), (0x0u));
L_11dfbbbb:;
  /* 11dfbbbb push 1 */
  push32((uint32_t)(0x1u));
  /* 11dfbbbd mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11dfbbc0 push edx */
  push32((uint32_t)(EDX));
  /* 11dfbbc1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfbbc4 push eax */
  push32((uint32_t)(EAX));
  /* 11dfbbc5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfbbc8 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfbbc9 call 0x11dfb9b0 */
  push32(0x11dfbbceu); f_11dfb9b0();
  /* 11dfbbce add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dfbbd1:;
  /* 11dfbbd1 mov esp, ebp */
  ESP = (EBP);
  /* 11dfbbd3 pop ebp */
  EBP = (pop32());
  /* 11dfbbd4 ret  */
  ESPCHK(0x11dfbaf0u, _esp0);
  ESP += 4; return;
}

/* __cfltcvt @ 0x11dfbbe0 (95 bytes, 40 insns) */
void f_11dfbbe0(void) {
  FTRACE(0x11dfbbe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfbbe0 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfbbe1 mov ebp, esp */
  EBP = (ESP);
  /* 11dfbbe3 cmp dword ptr [ebp + 0x10], 0x65 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfbbe7 je 0x11dfbbef */
  if (C.zf) goto L_11dfbbef;
  /* 11dfbbe9 cmp dword ptr [ebp + 0x10], 0x45 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfbbed jne 0x11dfbc09 */
  if (!C.zf) goto L_11dfbc09;
L_11dfbbef:;
  /* 11dfbbef mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11dfbbf2 push eax */
  push32((uint32_t)(EAX));
  /* 11dfbbf3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dfbbf6 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfbbf7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfbbfa push edx */
  push32((uint32_t)(EDX));
  /* 11dfbbfb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfbbfe push eax */
  push32((uint32_t)(EAX));
  /* 11dfbbff call 0x11dfb750 */
  push32(0x11dfbc04u); f_11dfb750();
  /* 11dfbc04 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfbc07 jmp 0x11dfbc3d */
  goto L_11dfbc3d;
L_11dfbc09:;
  /* 11dfbc09 cmp dword ptr [ebp + 0x10], 0x66 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfbc0d jne 0x11dfbc25 */
  if (!C.zf) goto L_11dfbc25;
  /* 11dfbc0f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dfbc12 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfbc13 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfbc16 push edx */
  push32((uint32_t)(EDX));
  /* 11dfbc17 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfbc1a push eax */
  push32((uint32_t)(EAX));
  /* 11dfbc1b call 0x11dfb940 */
  push32(0x11dfbc20u); f_11dfb940();
  /* 11dfbc20 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfbc23 jmp 0x11dfbc3d */
  goto L_11dfbc3d;
L_11dfbc25:;
  /* 11dfbc25 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11dfbc28 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfbc29 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dfbc2c push edx */
  push32((uint32_t)(EDX));
  /* 11dfbc2d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfbc30 push eax */
  push32((uint32_t)(EAX));
  /* 11dfbc31 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfbc34 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfbc35 call 0x11dfbaf0 */
  push32(0x11dfbc3au); f_11dfbaf0();
  /* 11dfbc3a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dfbc3d:;
  /* 11dfbc3d pop ebp */
  EBP = (pop32());
  /* 11dfbc3e ret  */
  ESPCHK(0x11dfbbe0u, _esp0);
  ESP += 4; return;
}

/* __shift @ 0x11dfbc40 (46 bytes, 19 insns) */
void f_11dfbc40(void) {
  FTRACE(0x11dfbc40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfbc40 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfbc41 mov ebp, esp */
  EBP = (ESP);
  /* 11dfbc43 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfbc47 je 0x11dfbc6c */
  if (C.zf) goto L_11dfbc6c;
  /* 11dfbc49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfbc4c push eax */
  push32((uint32_t)(EAX));
  /* 11dfbc4d call 0x11e01410 */
  push32(0x11dfbc52u); f_11e01410();
  /* 11dfbc52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfbc55 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfbc58 push eax */
  push32((uint32_t)(EAX));
  /* 11dfbc59 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfbc5c push ecx */
  push32((uint32_t)(ECX));
  /* 11dfbc5d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfbc60 add edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfbc63 push edx */
  push32((uint32_t)(EDX));
  /* 11dfbc64 call 0x11e032f0 */
  push32(0x11dfbc69u); f_11e032f0();
  /* 11dfbc69 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dfbc6c:;
  /* 11dfbc6c pop ebp */
  EBP = (pop32());
  /* 11dfbc6d ret  */
  ESPCHK(0x11dfbc40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc70 @ 0x11dfbc70 (55 bytes, 16 insns) */
void f_11dfbc70(void) {
  FTRACE(0x11dfbc70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfbc70 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfbc71 mov ebp, esp */
  EBP = (ESP);
  /* 11dfbc73 mov eax, dword ptr [0x11e2de8c] */
  EAX = (r32((uint32_t)(0x11e2de8c)));
  /* 11dfbc78 push eax */
  push32((uint32_t)(EAX));
  /* 11dfbc79 call dword ptr [0x11e332f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e332f0))), 0x11dfbc7fu);
  /* 11dfbc7f mov ecx, dword ptr [0x11e2de7c] */
  ECX = (r32((uint32_t)(0x11e2de7c)));
  /* 11dfbc85 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfbc86 call dword ptr [0x11e332f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e332f0))), 0x11dfbc8cu);
  /* 11dfbc8c mov edx, dword ptr [0x11e2de6c] */
  EDX = (r32((uint32_t)(0x11e2de6c)));
  /* 11dfbc92 push edx */
  push32((uint32_t)(EDX));
  /* 11dfbc93 call dword ptr [0x11e332f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e332f0))), 0x11dfbc99u);
  /* 11dfbc99 mov eax, dword ptr [0x11e2de4c] */
  EAX = (r32((uint32_t)(0x11e2de4c)));
  /* 11dfbc9e push eax */
  push32((uint32_t)(EAX));
  /* 11dfbc9f call dword ptr [0x11e332f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e332f0))), 0x11dfbca5u);
  /* 11dfbca5 pop ebp */
  EBP = (pop32());
  /* 11dfbca6 ret  */
  ESPCHK(0x11dfbc70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bcb0 @ 0x11dfbcb0 (159 bytes, 47 insns) */
void f_11dfbcb0(void) {
  FTRACE(0x11dfbcb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfbcb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfbcb1 mov ebp, esp */
  EBP = (ESP);
  /* 11dfbcb3 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfbcb4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11dfbcbb jmp 0x11dfbcc6 */
  goto L_11dfbcc6;
L_11dfbcbd:;
  /* 11dfbcbd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfbcc0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfbcc3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11dfbcc6:;
  /* 11dfbcc6 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfbcca jge 0x11dfbd19 */
  if ((C.sf==C.of)) goto L_11dfbd19;
  /* 11dfbccc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfbccf cmp dword ptr [ecx*4 + 0x11e2de48], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11e2de48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfbcd7 je 0x11dfbd17 */
  if (C.zf) goto L_11dfbd17;
  /* 11dfbcd9 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfbcdd je 0x11dfbd17 */
  if (C.zf) goto L_11dfbd17;
  /* 11dfbcdf cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfbce3 je 0x11dfbd17 */
  if (C.zf) goto L_11dfbd17;
  /* 11dfbce5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfbce9 je 0x11dfbd17 */
  if (C.zf) goto L_11dfbd17;
  /* 11dfbceb cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfbcef je 0x11dfbd17 */
  if (C.zf) goto L_11dfbd17;
  /* 11dfbcf1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfbcf4 mov eax, dword ptr [edx*4 + 0x11e2de48] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11e2de48)));
  /* 11dfbcfb push eax */
  push32((uint32_t)(EAX));
  /* 11dfbcfc call dword ptr [0x11e333f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333f0))), 0x11dfbd02u);
  /* 11dfbd02 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dfbd04 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfbd07 mov edx, dword ptr [ecx*4 + 0x11e2de48] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11e2de48)));
  /* 11dfbd0e push edx */
  push32((uint32_t)(EDX));
  /* 11dfbd0f call 0x11dfc8e0 */
  push32(0x11dfbd14u); f_11dfc8e0();
  /* 11dfbd14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dfbd17:;
  /* 11dfbd17 jmp 0x11dfbcbd */
  goto L_11dfbcbd;
L_11dfbd19:;
  /* 11dfbd19 mov eax, dword ptr [0x11e2de6c] */
  EAX = (r32((uint32_t)(0x11e2de6c)));
  /* 11dfbd1e push eax */
  push32((uint32_t)(EAX));
  /* 11dfbd1f call dword ptr [0x11e333f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333f0))), 0x11dfbd25u);
  /* 11dfbd25 mov ecx, dword ptr [0x11e2de7c] */
  ECX = (r32((uint32_t)(0x11e2de7c)));
  /* 11dfbd2b push ecx */
  push32((uint32_t)(ECX));
  /* 11dfbd2c call dword ptr [0x11e333f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333f0))), 0x11dfbd32u);
  /* 11dfbd32 mov edx, dword ptr [0x11e2de8c] */
  EDX = (r32((uint32_t)(0x11e2de8c)));
  /* 11dfbd38 push edx */
  push32((uint32_t)(EDX));
  /* 11dfbd39 call dword ptr [0x11e333f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333f0))), 0x11dfbd3fu);
  /* 11dfbd3f mov eax, dword ptr [0x11e2de4c] */
  EAX = (r32((uint32_t)(0x11e2de4c)));
  /* 11dfbd44 push eax */
  push32((uint32_t)(EAX));
  /* 11dfbd45 call dword ptr [0x11e333f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333f0))), 0x11dfbd4bu);
  /* 11dfbd4b mov esp, ebp */
  ESP = (EBP);
  /* 11dfbd4d pop ebp */
  EBP = (pop32());
  /* 11dfbd4e ret  */
  ESPCHK(0x11dfbcb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd50 @ 0x11dfbd50 (151 bytes, 46 insns) */
void f_11dfbd50(void) {
  FTRACE(0x11dfbd50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfbd50 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfbd51 mov ebp, esp */
  EBP = (ESP);
  /* 11dfbd53 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfbd54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfbd57 cmp dword ptr [eax*4 + 0x11e2de48], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11e2de48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfbd5f jne 0x11dfbdd2 */
  if (!C.zf) goto L_11dfbdd2;
  /* 11dfbd61 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 11dfbd66 push 0x11e2a728 */
  push32((uint32_t)(0x11e2a728u));
  /* 11dfbd6b push 2 */
  push32((uint32_t)(0x2u));
  /* 11dfbd6d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11dfbd6f call 0x11dfbe50 */
  push32(0x11dfbd74u); f_11dfbe50();
  /* 11dfbd74 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfbd77 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11dfbd7a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfbd7e jne 0x11dfbd8a */
  if (!C.zf) goto L_11dfbd8a;
  /* 11dfbd80 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11dfbd82 call 0x11dfa8c0 */
  push32(0x11dfbd87u); f_11dfa8c0();
  /* 11dfbd87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dfbd8a:;
  /* 11dfbd8a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11dfbd8c call 0x11dfbd50 */
  push32(0x11dfbd91u); f_11dfbd50();
  /* 11dfbd91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfbd94 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfbd97 cmp dword ptr [ecx*4 + 0x11e2de48], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11e2de48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfbd9f jne 0x11dfbdba */
  if (!C.zf) goto L_11dfbdba;
  /* 11dfbda1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfbda4 push edx */
  push32((uint32_t)(EDX));
  /* 11dfbda5 call dword ptr [0x11e332f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e332f0))), 0x11dfbdabu);
  /* 11dfbdab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfbdae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfbdb1 mov dword ptr [eax*4 + 0x11e2de48], ecx */
  w32((uint32_t)(EAX*4 + 0x11e2de48), (ECX));
  /* 11dfbdb8 jmp 0x11dfbdc8 */
  goto L_11dfbdc8;
L_11dfbdba:;
  /* 11dfbdba push 2 */
  push32((uint32_t)(0x2u));
  /* 11dfbdbc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfbdbf push edx */
  push32((uint32_t)(EDX));
  /* 11dfbdc0 call 0x11dfc8e0 */
  push32(0x11dfbdc5u); f_11dfc8e0();
  /* 11dfbdc5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dfbdc8:;
  /* 11dfbdc8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11dfbdca call 0x11dfbdf0 */
  push32(0x11dfbdcfu); f_11dfbdf0();
  /* 11dfbdcf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dfbdd2:;
  /* 11dfbdd2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfbdd5 mov ecx, dword ptr [eax*4 + 0x11e2de48] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11e2de48)));
  /* 11dfbddc push ecx */
  push32((uint32_t)(ECX));
  /* 11dfbddd call dword ptr [0x11e333f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333f4))), 0x11dfbde3u);
  /* 11dfbde3 mov esp, ebp */
  ESP = (EBP);
  /* 11dfbde5 pop ebp */
  EBP = (pop32());
  /* 11dfbde6 ret  */
  ESPCHK(0x11dfbd50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bdf0 @ 0x11dfbdf0 (22 bytes, 8 insns) */
void f_11dfbdf0(void) {
  FTRACE(0x11dfbdf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfbdf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfbdf1 mov ebp, esp */
  EBP = (ESP);
  /* 11dfbdf3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfbdf6 mov ecx, dword ptr [eax*4 + 0x11e2de48] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11e2de48)));
  /* 11dfbdfd push ecx */
  push32((uint32_t)(ECX));
  /* 11dfbdfe call dword ptr [0x11e333f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333f8))), 0x11dfbe04u);
  /* 11dfbe04 pop ebp */
  EBP = (pop32());
  /* 11dfbe05 ret  */
  ESPCHK(0x11dfbdf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be10 @ 0x11dfbe10 (26 bytes, 10 insns) */
void f_11dfbe10(void) {
  FTRACE(0x11dfbe10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfbe10 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfbe11 mov ebp, esp */
  EBP = (ESP);
  /* 11dfbe13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfbe16 push eax */
  push32((uint32_t)(EAX));
  /* 11dfbe17 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfbe19 call dword ptr [0x11e33400] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33400))), 0x11dfbe1fu);
  /* 11dfbe1f push 0xff */
  push32((uint32_t)(0xffu));
  /* 11dfbe24 call dword ptr [0x11e333fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333fc))), 0x11dfbe2au);
  /* 11dfbe2a pop ebp */
  EBP = (pop32());
  /* 11dfbe2b ret  */
  ESPCHK(0x11dfbe10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be30 @ 0x11dfbe30 (29 bytes, 13 insns) */
void f_11dfbe30(void) {
  FTRACE(0x11dfbe30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfbe30 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfbe31 mov ebp, esp */
  EBP = (ESP);
  /* 11dfbe33 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfbe35 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfbe37 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dfbe39 mov eax, dword ptr [0x11e30800] */
  EAX = (r32((uint32_t)(0x11e30800)));
  /* 11dfbe3e push eax */
  push32((uint32_t)(EAX));
  /* 11dfbe3f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfbe42 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfbe43 call 0x11dfbea0 */
  push32(0x11dfbe48u); f_11dfbea0();
  /* 11dfbe48 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfbe4b pop ebp */
  EBP = (pop32());
  /* 11dfbe4c ret  */
  ESPCHK(0x11dfbe30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be50 @ 0x11dfbe50 (35 bytes, 16 insns) */
void f_11dfbe50(void) {
  FTRACE(0x11dfbe50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfbe50 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfbe51 mov ebp, esp */
  EBP = (ESP);
  /* 11dfbe53 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dfbe56 push eax */
  push32((uint32_t)(EAX));
  /* 11dfbe57 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfbe5a push ecx */
  push32((uint32_t)(ECX));
  /* 11dfbe5b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfbe5e push edx */
  push32((uint32_t)(EDX));
  /* 11dfbe5f mov eax, dword ptr [0x11e30800] */
  EAX = (r32((uint32_t)(0x11e30800)));
  /* 11dfbe64 push eax */
  push32((uint32_t)(EAX));
  /* 11dfbe65 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfbe68 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfbe69 call 0x11dfbea0 */
  push32(0x11dfbe6eu); f_11dfbea0();
  /* 11dfbe6e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfbe71 pop ebp */
  EBP = (pop32());
  /* 11dfbe72 ret  */
  ESPCHK(0x11dfbe50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be80 @ 0x11dfbe80 (27 bytes, 13 insns) */
void f_11dfbe80(void) {
  FTRACE(0x11dfbe80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfbe80 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfbe81 mov ebp, esp */
  EBP = (ESP);
  /* 11dfbe83 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfbe85 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfbe87 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dfbe89 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfbe8c push eax */
  push32((uint32_t)(EAX));
  /* 11dfbe8d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfbe90 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfbe91 call 0x11dfbea0 */
  push32(0x11dfbe96u); f_11dfbea0();
  /* 11dfbe96 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfbe99 pop ebp */
  EBP = (pop32());
  /* 11dfbe9a ret  */
  ESPCHK(0x11dfbe80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bea0 @ 0x11dfbea0 (94 bytes, 38 insns) */
void f_11dfbea0(void) {
  FTRACE(0x11dfbea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfbea0 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfbea1 mov ebp, esp */
  EBP = (ESP);
  /* 11dfbea3 push ecx */
  push32((uint32_t)(ECX));
L_11dfbea4:;
  /* 11dfbea4 push 9 */
  push32((uint32_t)(0x9u));
  /* 11dfbea6 call 0x11dfbd50 */
  push32(0x11dfbeabu); f_11dfbd50();
  /* 11dfbeab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfbeae mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11dfbeb1 push eax */
  push32((uint32_t)(EAX));
  /* 11dfbeb2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dfbeb5 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfbeb6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfbeb9 push edx */
  push32((uint32_t)(EDX));
  /* 11dfbeba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfbebd push eax */
  push32((uint32_t)(EAX));
  /* 11dfbebe call 0x11dfbf20 */
  push32(0x11dfbec3u); f_11dfbf20();
  /* 11dfbec3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfbec6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11dfbec9 push 9 */
  push32((uint32_t)(0x9u));
  /* 11dfbecb call 0x11dfbdf0 */
  push32(0x11dfbed0u); f_11dfbdf0();
  /* 11dfbed0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfbed3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfbed7 jne 0x11dfbedf */
  if (!C.zf) goto L_11dfbedf;
  /* 11dfbed9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfbedd jne 0x11dfbee4 */
  if (!C.zf) goto L_11dfbee4;
L_11dfbedf:;
  /* 11dfbedf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfbee2 jmp 0x11dfbefa */
  goto L_11dfbefa;
L_11dfbee4:;
  /* 11dfbee4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfbee7 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfbee8 call 0x11e03680 */
  push32(0x11dfbeedu); f_11e03680();
  /* 11dfbeed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfbef0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfbef2 jne 0x11dfbef8 */
  if (!C.zf) goto L_11dfbef8;
  /* 11dfbef4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dfbef6 jmp 0x11dfbefa */
  goto L_11dfbefa;
L_11dfbef8:;
  /* 11dfbef8 jmp 0x11dfbea4 */
  goto L_11dfbea4;
L_11dfbefa:;
  /* 11dfbefa mov esp, ebp */
  ESP = (EBP);
  /* 11dfbefc pop ebp */
  EBP = (pop32());
  /* 11dfbefd ret  */
  ESPCHK(0x11dfbea0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf00 @ 0x11dfbf00 (23 bytes, 11 insns) */
void f_11dfbf00(void) {
  FTRACE(0x11dfbf00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfbf00 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfbf01 mov ebp, esp */
  EBP = (ESP);
  /* 11dfbf03 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfbf05 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfbf07 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dfbf09 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfbf0c push eax */
  push32((uint32_t)(EAX));
  /* 11dfbf0d call 0x11dfbf20 */
  push32(0x11dfbf12u); f_11dfbf20();
  /* 11dfbf12 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfbf15 pop ebp */
  EBP = (pop32());
  /* 11dfbf16 ret  */
  ESPCHK(0x11dfbf00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf20 @ 0x11dfbf20 (787 bytes, 254 insns) */
void f_11dfbf20(void) {
  FTRACE(0x11dfbf20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfbf20 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfbf21 mov ebp, esp */
  EBP = (ESP);
  /* 11dfbf23 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfbf26 push ebx */
  push32((uint32_t)(EBX));
  /* 11dfbf27 push esi */
  push32((uint32_t)(ESI));
  /* 11dfbf28 push edi */
  push32((uint32_t)(EDI));
  /* 11dfbf29 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11dfbf30 mov eax, dword ptr [0x11e2df08] */
  EAX = (r32((uint32_t)(0x11e2df08)));
  /* 11dfbf35 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11dfbf38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfbf3a je 0x11dfbf6c */
  if (C.zf) goto L_11dfbf6c;
L_11dfbf3c:;
  /* 11dfbf3c call 0x11dfcff0 */
  push32(0x11dfbf41u); f_11dfcff0();
  /* 11dfbf41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfbf43 jne 0x11dfbf66 */
  if (!C.zf) goto L_11dfbf66;
  /* 11dfbf45 push 0x11e2a818 */
  push32((uint32_t)(0x11e2a818u));
  /* 11dfbf4a push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfbf4c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 11dfbf51 push 0x11e2a80c */
  push32((uint32_t)(0x11e2a80cu));
  /* 11dfbf56 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dfbf58 call 0x11dfaa10 */
  push32(0x11dfbf5du); f_11dfaa10();
  /* 11dfbf5d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfbf60 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfbf63 jne 0x11dfbf66 */
  if (!C.zf) goto L_11dfbf66;
  /* 11dfbf65 int3  */
  x86_unimpl("int3 @ 0x11dfbf65");
L_11dfbf66:;
  /* 11dfbf66 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11dfbf68 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11dfbf6a jne 0x11dfbf3c */
  if (!C.zf) goto L_11dfbf3c;
L_11dfbf6c:;
  /* 11dfbf6c mov edx, dword ptr [0x11e2df0c] */
  EDX = (r32((uint32_t)(0x11e2df0c)));
  /* 11dfbf72 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11dfbf75 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfbf78 cmp eax, dword ptr [0x11e2df10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11e2df10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfbf7e jne 0x11dfbf81 */
  if (!C.zf) goto L_11dfbf81;
  /* 11dfbf80 int3  */
  x86_unimpl("int3 @ 0x11dfbf80");
L_11dfbf81:;
  /* 11dfbf81 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dfbf84 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfbf85 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfbf88 push edx */
  push32((uint32_t)(EDX));
  /* 11dfbf89 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfbf8c push eax */
  push32((uint32_t)(EAX));
  /* 11dfbf8d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfbf90 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfbf91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfbf94 push edx */
  push32((uint32_t)(EDX));
  /* 11dfbf95 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfbf97 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dfbf99 call dword ptr [0x11e2e250] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e2e250))), 0x11dfbf9fu);
  /* 11dfbf9f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfbfa2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfbfa4 jne 0x11dfc004 */
  if (!C.zf) goto L_11dfc004;
  /* 11dfbfa6 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfbfaa je 0x11dfbfd7 */
  if (C.zf) goto L_11dfbfd7;
L_11dfbfac:;
  /* 11dfbfac mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dfbfaf push eax */
  push32((uint32_t)(EAX));
  /* 11dfbfb0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfbfb3 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfbfb4 push 0x11e2a7d4 */
  push32((uint32_t)(0x11e2a7d4u));
  /* 11dfbfb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfbfbb push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfbfbd push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfbfbf push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfbfc1 call 0x11dfaa10 */
  push32(0x11dfbfc6u); f_11dfaa10();
  /* 11dfbfc6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfbfc9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfbfcc jne 0x11dfbfcf */
  if (!C.zf) goto L_11dfbfcf;
  /* 11dfbfce int3  */
  x86_unimpl("int3 @ 0x11dfbfce");
L_11dfbfcf:;
  /* 11dfbfcf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11dfbfd1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dfbfd3 jne 0x11dfbfac */
  if (!C.zf) goto L_11dfbfac;
  /* 11dfbfd5 jmp 0x11dfbffd */
  goto L_11dfbffd;
L_11dfbfd7:;
  /* 11dfbfd7 push 0x11e2a7b0 */
  push32((uint32_t)(0x11e2a7b0u));
  /* 11dfbfdc push 0x11e2a7ac */
  push32((uint32_t)(0x11e2a7acu));
  /* 11dfbfe1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfbfe3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfbfe5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfbfe7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfbfe9 call 0x11dfaa10 */
  push32(0x11dfbfeeu); f_11dfaa10();
  /* 11dfbfee add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfbff1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfbff4 jne 0x11dfbff7 */
  if (!C.zf) goto L_11dfbff7;
  /* 11dfbff6 int3  */
  x86_unimpl("int3 @ 0x11dfbff6");
L_11dfbff7:;
  /* 11dfbff7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dfbff9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfbffb jne 0x11dfbfd7 */
  if (!C.zf) goto L_11dfbfd7;
L_11dfbffd:;
  /* 11dfbffd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dfbfff jmp 0x11dfc22c */
  goto L_11dfc22c;
L_11dfc004:;
  /* 11dfc004 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfc007 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11dfc00d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc010 je 0x11dfc026 */
  if (C.zf) goto L_11dfc026;
  /* 11dfc012 mov edx, dword ptr [0x11e2df08] */
  EDX = (r32((uint32_t)(0x11e2df08)));
  /* 11dfc018 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11dfc01b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dfc01d jne 0x11dfc026 */
  if (!C.zf) goto L_11dfc026;
  /* 11dfc01f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_11dfc026:;
  /* 11dfc026 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc02a ja 0x11dfc037 */
  if ((!C.cf&&!C.zf)) goto L_11dfc037;
  /* 11dfc02c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfc02f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc032 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc035 jbe 0x11dfc063 */
  if ((C.cf||C.zf)) goto L_11dfc063;
L_11dfc037:;
  /* 11dfc037 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfc03a push ecx */
  push32((uint32_t)(ECX));
  /* 11dfc03b push 0x11e2a788 */
  push32((uint32_t)(0x11e2a788u));
  /* 11dfc040 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfc042 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfc044 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfc046 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dfc048 call 0x11dfaa10 */
  push32(0x11dfc04du); f_11dfaa10();
  /* 11dfc04d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc050 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc053 jne 0x11dfc056 */
  if (!C.zf) goto L_11dfc056;
  /* 11dfc055 int3  */
  x86_unimpl("int3 @ 0x11dfc055");
L_11dfc056:;
  /* 11dfc056 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11dfc058 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dfc05a jne 0x11dfc037 */
  if (!C.zf) goto L_11dfc037;
  /* 11dfc05c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dfc05e jmp 0x11dfc22c */
  goto L_11dfc22c;
L_11dfc063:;
  /* 11dfc063 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfc066 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11dfc06b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc06e je 0x11dfc0b0 */
  if (C.zf) goto L_11dfc0b0;
  /* 11dfc070 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc074 je 0x11dfc0b0 */
  if (C.zf) goto L_11dfc0b0;
  /* 11dfc076 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfc079 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11dfc07f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc082 je 0x11dfc0b0 */
  if (C.zf) goto L_11dfc0b0;
  /* 11dfc084 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc088 je 0x11dfc0b0 */
  if (C.zf) goto L_11dfc0b0;
L_11dfc08a:;
  /* 11dfc08a push 0x11e2a754 */
  push32((uint32_t)(0x11e2a754u));
  /* 11dfc08f push 0x11e2a7ac */
  push32((uint32_t)(0x11e2a7acu));
  /* 11dfc094 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfc096 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfc098 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfc09a push 1 */
  push32((uint32_t)(0x1u));
  /* 11dfc09c call 0x11dfaa10 */
  push32(0x11dfc0a1u); f_11dfaa10();
  /* 11dfc0a1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc0a4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc0a7 jne 0x11dfc0aa */
  if (!C.zf) goto L_11dfc0aa;
  /* 11dfc0a9 int3  */
  x86_unimpl("int3 @ 0x11dfc0a9");
L_11dfc0aa:;
  /* 11dfc0aa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11dfc0ac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dfc0ae jne 0x11dfc08a */
  if (!C.zf) goto L_11dfc08a;
L_11dfc0b0:;
  /* 11dfc0b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfc0b3 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc0b6 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11dfc0b9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11dfc0bc push ecx */
  push32((uint32_t)(ECX));
  /* 11dfc0bd call 0x11e03730 */
  push32(0x11dfc0c2u); f_11e03730();
  /* 11dfc0c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc0c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11dfc0c8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc0cc jne 0x11dfc0d5 */
  if (!C.zf) goto L_11dfc0d5;
  /* 11dfc0ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dfc0d0 jmp 0x11dfc22c */
  goto L_11dfc22c;
L_11dfc0d5:;
  /* 11dfc0d5 mov edx, dword ptr [0x11e2df0c] */
  EDX = (r32((uint32_t)(0x11e2df0c)));
  /* 11dfc0db add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc0de mov dword ptr [0x11e2df0c], edx */
  w32((uint32_t)(0x11e2df0c), (EDX));
  /* 11dfc0e4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc0e8 je 0x11dfc133 */
  if (C.zf) goto L_11dfc133;
  /* 11dfc0ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfc0ed mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11dfc0f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfc0f6 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11dfc0fd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfc100 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11dfc107 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfc10a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 11dfc111 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfc114 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfc117 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 11dfc11a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfc11d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 11dfc124 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfc127 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 11dfc12e jmp 0x11dfc1d3 */
  goto L_11dfc1d3;
L_11dfc133:;
  /* 11dfc133 mov edx, dword ptr [0x11e3067c] */
  EDX = (r32((uint32_t)(0x11e3067c)));
  /* 11dfc139 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc13c mov dword ptr [0x11e3067c], edx */
  w32((uint32_t)(0x11e3067c), (EDX));
  /* 11dfc142 mov eax, dword ptr [0x11e30684] */
  EAX = (r32((uint32_t)(0x11e30684)));
  /* 11dfc147 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc14a mov dword ptr [0x11e30684], eax */
  w32((uint32_t)(0x11e30684), (EAX));
  /* 11dfc14f mov ecx, dword ptr [0x11e30684] */
  ECX = (r32((uint32_t)(0x11e30684)));
  /* 11dfc155 cmp ecx, dword ptr [0x11e30688] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11e30688))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc15b jbe 0x11dfc169 */
  if ((C.cf||C.zf)) goto L_11dfc169;
  /* 11dfc15d mov edx, dword ptr [0x11e30684] */
  EDX = (r32((uint32_t)(0x11e30684)));
  /* 11dfc163 mov dword ptr [0x11e30688], edx */
  w32((uint32_t)(0x11e30688), (EDX));
L_11dfc169:;
  /* 11dfc169 cmp dword ptr [0x11e30680], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e30680))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc170 je 0x11dfc17f */
  if (C.zf) goto L_11dfc17f;
  /* 11dfc172 mov eax, dword ptr [0x11e30680] */
  EAX = (r32((uint32_t)(0x11e30680)));
  /* 11dfc177 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfc17a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11dfc17d jmp 0x11dfc188 */
  goto L_11dfc188;
L_11dfc17f:;
  /* 11dfc17f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfc182 mov dword ptr [0x11e30678], edx */
  w32((uint32_t)(0x11e30678), (EDX));
L_11dfc188:;
  /* 11dfc188 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfc18b mov ecx, dword ptr [0x11e30680] */
  ECX = (r32((uint32_t)(0x11e30680)));
  /* 11dfc191 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11dfc193 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfc196 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 11dfc19d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfc1a0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfc1a3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11dfc1a6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfc1a9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dfc1ac mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 11dfc1af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfc1b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfc1b5 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 11dfc1b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfc1bb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfc1be mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 11dfc1c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfc1c4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfc1c7 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 11dfc1ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfc1cd mov dword ptr [0x11e30680], ecx */
  w32((uint32_t)(0x11e30680), (ECX));
L_11dfc1d3:;
  /* 11dfc1d3 push 4 */
  push32((uint32_t)(0x4u));
  /* 11dfc1d5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11dfc1d7 mov dl, byte ptr [0x11e2df14] */
  DL = (r8((uint32_t)(0x11e2df14)));
  /* 11dfc1dd push edx */
  push32((uint32_t)(EDX));
  /* 11dfc1de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfc1e1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc1e4 push eax */
  push32((uint32_t)(EAX));
  /* 11dfc1e5 call 0x11e03290 */
  push32(0x11dfc1eau); f_11e03290();
  /* 11dfc1ea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc1ed push 4 */
  push32((uint32_t)(0x4u));
  /* 11dfc1ef xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11dfc1f1 mov cl, byte ptr [0x11e2df14] */
  CL = (r8((uint32_t)(0x11e2df14)));
  /* 11dfc1f7 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfc1f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfc1fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfc1fe lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 11dfc202 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfc203 call 0x11e03290 */
  push32(0x11dfc208u); f_11e03290();
  /* 11dfc208 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc20b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfc20e push edx */
  push32((uint32_t)(EDX));
  /* 11dfc20f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dfc211 mov al, byte ptr [0x11e2df16] */
  AL = (r8((uint32_t)(0x11e2df16)));
  /* 11dfc216 push eax */
  push32((uint32_t)(EAX));
  /* 11dfc217 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfc21a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc21d push ecx */
  push32((uint32_t)(ECX));
  /* 11dfc21e call 0x11e03290 */
  push32(0x11dfc223u); f_11e03290();
  /* 11dfc223 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc226 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfc229 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11dfc22c:;
  /* 11dfc22c pop edi */
  EDI = (pop32());
  /* 11dfc22d pop esi */
  ESI = (pop32());
  /* 11dfc22e pop ebx */
  EBX = (pop32());
  /* 11dfc22f mov esp, ebp */
  ESP = (EBP);
  /* 11dfc231 pop ebp */
  EBP = (pop32());
  /* 11dfc232 ret  */
  ESPCHK(0x11dfbf20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c240 @ 0x11dfc240 (27 bytes, 13 insns) */
void f_11dfc240(void) {
  FTRACE(0x11dfc240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfc240 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfc241 mov ebp, esp */
  EBP = (ESP);
  /* 11dfc243 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfc245 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfc247 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dfc249 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfc24c push eax */
  push32((uint32_t)(EAX));
  /* 11dfc24d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfc250 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfc251 call 0x11dfc260 */
  push32(0x11dfc256u); f_11dfc260();
  /* 11dfc256 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc259 pop ebp */
  EBP = (pop32());
  /* 11dfc25a ret  */
  ESPCHK(0x11dfc240u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x11dfc260 (96 bytes, 37 insns) */
void f_11dfc260(void) {
  FTRACE(0x11dfc260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfc260 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfc261 mov ebp, esp */
  EBP = (ESP);
  /* 11dfc263 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfc266 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfc269 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11dfc26d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11dfc270 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11dfc273 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfc274 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dfc277 push edx */
  push32((uint32_t)(EDX));
  /* 11dfc278 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfc27b push eax */
  push32((uint32_t)(EAX));
  /* 11dfc27c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfc27f push ecx */
  push32((uint32_t)(ECX));
  /* 11dfc280 call 0x11dfbe50 */
  push32(0x11dfc285u); f_11dfbe50();
  /* 11dfc285 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc288 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11dfc28b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc28f je 0x11dfc2b9 */
  if (C.zf) goto L_11dfc2b9;
  /* 11dfc291 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfc294 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11dfc297 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11dfc29a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc29d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11dfc2a0:;
  /* 11dfc2a0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11dfc2a3 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc2a6 jae 0x11dfc2b9 */
  if (!C.cf) goto L_11dfc2b9;
  /* 11dfc2a8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11dfc2ab mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11dfc2ae mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11dfc2b1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc2b4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11dfc2b7 jmp 0x11dfc2a0 */
  goto L_11dfc2a0;
L_11dfc2b9:;
  /* 11dfc2b9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfc2bc mov esp, ebp */
  ESP = (EBP);
  /* 11dfc2be pop ebp */
  EBP = (pop32());
  /* 11dfc2bf ret  */
  ESPCHK(0x11dfc260u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c2c0 @ 0x11dfc2c0 (27 bytes, 13 insns) */
void f_11dfc2c0(void) {
  FTRACE(0x11dfc2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfc2c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfc2c1 mov ebp, esp */
  EBP = (ESP);
  /* 11dfc2c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfc2c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfc2c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dfc2c9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfc2cc push eax */
  push32((uint32_t)(EAX));
  /* 11dfc2cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfc2d0 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfc2d1 call 0x11dfc2e0 */
  push32(0x11dfc2d6u); f_11dfc2e0();
  /* 11dfc2d6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc2d9 pop ebp */
  EBP = (pop32());
  /* 11dfc2da ret  */
  ESPCHK(0x11dfc2c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c2e0 @ 0x11dfc2e0 (64 bytes, 27 insns) */
void f_11dfc2e0(void) {
  FTRACE(0x11dfc2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfc2e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfc2e1 mov ebp, esp */
  EBP = (ESP);
  /* 11dfc2e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfc2e4 push 9 */
  push32((uint32_t)(0x9u));
  /* 11dfc2e6 call 0x11dfbd50 */
  push32(0x11dfc2ebu); f_11dfbd50();
  /* 11dfc2eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc2ee push 1 */
  push32((uint32_t)(0x1u));
  /* 11dfc2f0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11dfc2f3 push eax */
  push32((uint32_t)(EAX));
  /* 11dfc2f4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dfc2f7 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfc2f8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfc2fb push edx */
  push32((uint32_t)(EDX));
  /* 11dfc2fc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfc2ff push eax */
  push32((uint32_t)(EAX));
  /* 11dfc300 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfc303 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfc304 call 0x11dfc320 */
  push32(0x11dfc309u); f_11dfc320();
  /* 11dfc309 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc30c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11dfc30f push 9 */
  push32((uint32_t)(0x9u));
  /* 11dfc311 call 0x11dfbdf0 */
  push32(0x11dfc316u); f_11dfbdf0();
  /* 11dfc316 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc319 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfc31c mov esp, ebp */
  ESP = (EBP);
  /* 11dfc31e pop ebp */
  EBP = (pop32());
  /* 11dfc31f ret  */
  ESPCHK(0x11dfc2e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c320 @ 0x11dfc320 (1297 bytes, 431 insns) */
void f_11dfc320(void) {
  FTRACE(0x11dfc320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfc320 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfc321 mov ebp, esp */
  EBP = (ESP);
  /* 11dfc323 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfc326 push ebx */
  push32((uint32_t)(EBX));
  /* 11dfc327 push esi */
  push32((uint32_t)(ESI));
  /* 11dfc328 push edi */
  push32((uint32_t)(EDI));
  /* 11dfc329 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11dfc330 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc334 jne 0x11dfc353 */
  if (!C.zf) goto L_11dfc353;
  /* 11dfc336 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11dfc339 push eax */
  push32((uint32_t)(EAX));
  /* 11dfc33a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dfc33d push ecx */
  push32((uint32_t)(ECX));
  /* 11dfc33e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfc341 push edx */
  push32((uint32_t)(EDX));
  /* 11dfc342 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfc345 push eax */
  push32((uint32_t)(EAX));
  /* 11dfc346 call 0x11dfbe50 */
  push32(0x11dfc34bu); f_11dfbe50();
  /* 11dfc34b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc34e jmp 0x11dfc82a */
  goto L_11dfc82a;
L_11dfc353:;
  /* 11dfc353 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc357 je 0x11dfc376 */
  if (C.zf) goto L_11dfc376;
  /* 11dfc359 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc35d jne 0x11dfc376 */
  if (!C.zf) goto L_11dfc376;
  /* 11dfc35f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfc362 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfc363 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfc366 push edx */
  push32((uint32_t)(EDX));
  /* 11dfc367 call 0x11dfc8e0 */
  push32(0x11dfc36cu); f_11dfc8e0();
  /* 11dfc36c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc36f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dfc371 jmp 0x11dfc82a */
  goto L_11dfc82a;
L_11dfc376:;
  /* 11dfc376 mov eax, dword ptr [0x11e2df08] */
  EAX = (r32((uint32_t)(0x11e2df08)));
  /* 11dfc37b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11dfc37e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfc380 je 0x11dfc3b2 */
  if (C.zf) goto L_11dfc3b2;
L_11dfc382:;
  /* 11dfc382 call 0x11dfcff0 */
  push32(0x11dfc387u); f_11dfcff0();
  /* 11dfc387 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfc389 jne 0x11dfc3ac */
  if (!C.zf) goto L_11dfc3ac;
  /* 11dfc38b push 0x11e2a818 */
  push32((uint32_t)(0x11e2a818u));
  /* 11dfc390 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfc392 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 11dfc397 push 0x11e2a80c */
  push32((uint32_t)(0x11e2a80cu));
  /* 11dfc39c push 2 */
  push32((uint32_t)(0x2u));
  /* 11dfc39e call 0x11dfaa10 */
  push32(0x11dfc3a3u); f_11dfaa10();
  /* 11dfc3a3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc3a6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc3a9 jne 0x11dfc3ac */
  if (!C.zf) goto L_11dfc3ac;
  /* 11dfc3ab int3  */
  x86_unimpl("int3 @ 0x11dfc3ab");
L_11dfc3ac:;
  /* 11dfc3ac xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11dfc3ae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11dfc3b0 jne 0x11dfc382 */
  if (!C.zf) goto L_11dfc382;
L_11dfc3b2:;
  /* 11dfc3b2 mov edx, dword ptr [0x11e2df0c] */
  EDX = (r32((uint32_t)(0x11e2df0c)));
  /* 11dfc3b8 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11dfc3bb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11dfc3be cmp eax, dword ptr [0x11e2df10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11e2df10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc3c4 jne 0x11dfc3c7 */
  if (!C.zf) goto L_11dfc3c7;
  /* 11dfc3c6 int3  */
  x86_unimpl("int3 @ 0x11dfc3c6");
L_11dfc3c7:;
  /* 11dfc3c7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11dfc3ca push ecx */
  push32((uint32_t)(ECX));
  /* 11dfc3cb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dfc3ce push edx */
  push32((uint32_t)(EDX));
  /* 11dfc3cf mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11dfc3d2 push eax */
  push32((uint32_t)(EAX));
  /* 11dfc3d3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfc3d6 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfc3d7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfc3da push edx */
  push32((uint32_t)(EDX));
  /* 11dfc3db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfc3de push eax */
  push32((uint32_t)(EAX));
  /* 11dfc3df push 2 */
  push32((uint32_t)(0x2u));
  /* 11dfc3e1 call dword ptr [0x11e2e250] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e2e250))), 0x11dfc3e7u);
  /* 11dfc3e7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc3ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfc3ec jne 0x11dfc44c */
  if (!C.zf) goto L_11dfc44c;
  /* 11dfc3ee cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc3f2 je 0x11dfc41f */
  if (C.zf) goto L_11dfc41f;
L_11dfc3f4:;
  /* 11dfc3f4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11dfc3f7 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfc3f8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dfc3fb push edx */
  push32((uint32_t)(EDX));
  /* 11dfc3fc push 0x11e2a994 */
  push32((uint32_t)(0x11e2a994u));
  /* 11dfc401 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfc403 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfc405 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfc407 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfc409 call 0x11dfaa10 */
  push32(0x11dfc40eu); f_11dfaa10();
  /* 11dfc40e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc411 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc414 jne 0x11dfc417 */
  if (!C.zf) goto L_11dfc417;
  /* 11dfc416 int3  */
  x86_unimpl("int3 @ 0x11dfc416");
L_11dfc417:;
  /* 11dfc417 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dfc419 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfc41b jne 0x11dfc3f4 */
  if (!C.zf) goto L_11dfc3f4;
  /* 11dfc41d jmp 0x11dfc445 */
  goto L_11dfc445;
L_11dfc41f:;
  /* 11dfc41f push 0x11e2a970 */
  push32((uint32_t)(0x11e2a970u));
  /* 11dfc424 push 0x11e2a7ac */
  push32((uint32_t)(0x11e2a7acu));
  /* 11dfc429 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfc42b push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfc42d push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfc42f push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfc431 call 0x11dfaa10 */
  push32(0x11dfc436u); f_11dfaa10();
  /* 11dfc436 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc439 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc43c jne 0x11dfc43f */
  if (!C.zf) goto L_11dfc43f;
  /* 11dfc43e int3  */
  x86_unimpl("int3 @ 0x11dfc43e");
L_11dfc43f:;
  /* 11dfc43f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11dfc441 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11dfc443 jne 0x11dfc41f */
  if (!C.zf) goto L_11dfc41f;
L_11dfc445:;
  /* 11dfc445 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dfc447 jmp 0x11dfc82a */
  goto L_11dfc82a;
L_11dfc44c:;
  /* 11dfc44c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc450 jbe 0x11dfc47e */
  if ((C.cf||C.zf)) goto L_11dfc47e;
L_11dfc452:;
  /* 11dfc452 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfc455 push edx */
  push32((uint32_t)(EDX));
  /* 11dfc456 push 0x11e2a940 */
  push32((uint32_t)(0x11e2a940u));
  /* 11dfc45b push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfc45d push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfc45f push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfc461 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dfc463 call 0x11dfaa10 */
  push32(0x11dfc468u); f_11dfaa10();
  /* 11dfc468 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc46b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc46e jne 0x11dfc471 */
  if (!C.zf) goto L_11dfc471;
  /* 11dfc470 int3  */
  x86_unimpl("int3 @ 0x11dfc470");
L_11dfc471:;
  /* 11dfc471 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dfc473 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfc475 jne 0x11dfc452 */
  if (!C.zf) goto L_11dfc452;
  /* 11dfc477 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dfc479 jmp 0x11dfc82a */
  goto L_11dfc82a;
L_11dfc47e:;
  /* 11dfc47e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc482 je 0x11dfc4c6 */
  if (C.zf) goto L_11dfc4c6;
  /* 11dfc484 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfc487 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11dfc48d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc490 je 0x11dfc4c6 */
  if (C.zf) goto L_11dfc4c6;
  /* 11dfc492 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfc495 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11dfc49b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc49e je 0x11dfc4c6 */
  if (C.zf) goto L_11dfc4c6;
L_11dfc4a0:;
  /* 11dfc4a0 push 0x11e2a754 */
  push32((uint32_t)(0x11e2a754u));
  /* 11dfc4a5 push 0x11e2a7ac */
  push32((uint32_t)(0x11e2a7acu));
  /* 11dfc4aa push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfc4ac push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfc4ae push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfc4b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dfc4b2 call 0x11dfaa10 */
  push32(0x11dfc4b7u); f_11dfaa10();
  /* 11dfc4b7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc4ba cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc4bd jne 0x11dfc4c0 */
  if (!C.zf) goto L_11dfc4c0;
  /* 11dfc4bf int3  */
  x86_unimpl("int3 @ 0x11dfc4bf");
L_11dfc4c0:;
  /* 11dfc4c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dfc4c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfc4c4 jne 0x11dfc4a0 */
  if (!C.zf) goto L_11dfc4a0;
L_11dfc4c6:;
  /* 11dfc4c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfc4c9 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfc4ca call 0x11dfd450 */
  push32(0x11dfc4cfu); f_11dfd450();
  /* 11dfc4cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc4d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfc4d4 jne 0x11dfc4f7 */
  if (!C.zf) goto L_11dfc4f7;
  /* 11dfc4d6 push 0x11e2a91c */
  push32((uint32_t)(0x11e2a91cu));
  /* 11dfc4db push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfc4dd push 0x261 */
  push32((uint32_t)(0x261u));
  /* 11dfc4e2 push 0x11e2a80c */
  push32((uint32_t)(0x11e2a80cu));
  /* 11dfc4e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dfc4e9 call 0x11dfaa10 */
  push32(0x11dfc4eeu); f_11dfaa10();
  /* 11dfc4ee add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc4f1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc4f4 jne 0x11dfc4f7 */
  if (!C.zf) goto L_11dfc4f7;
  /* 11dfc4f6 int3  */
  x86_unimpl("int3 @ 0x11dfc4f6");
L_11dfc4f7:;
  /* 11dfc4f7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11dfc4f9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dfc4fb jne 0x11dfc4c6 */
  if (!C.zf) goto L_11dfc4c6;
  /* 11dfc4fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfc500 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfc503 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11dfc506 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfc509 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc50d jne 0x11dfc516 */
  if (!C.zf) goto L_11dfc516;
  /* 11dfc50f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_11dfc516:;
  /* 11dfc516 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc51a je 0x11dfc55a */
  if (C.zf) goto L_11dfc55a;
L_11dfc51c:;
  /* 11dfc51c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfc51f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc526 jne 0x11dfc531 */
  if (!C.zf) goto L_11dfc531;
  /* 11dfc528 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfc52b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc52f je 0x11dfc552 */
  if (C.zf) goto L_11dfc552;
L_11dfc531:;
  /* 11dfc531 push 0x11e2a8d4 */
  push32((uint32_t)(0x11e2a8d4u));
  /* 11dfc536 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfc538 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 11dfc53d push 0x11e2a80c */
  push32((uint32_t)(0x11e2a80cu));
  /* 11dfc542 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dfc544 call 0x11dfaa10 */
  push32(0x11dfc549u); f_11dfaa10();
  /* 11dfc549 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc54c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc54f jne 0x11dfc552 */
  if (!C.zf) goto L_11dfc552;
  /* 11dfc551 int3  */
  x86_unimpl("int3 @ 0x11dfc551");
L_11dfc552:;
  /* 11dfc552 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11dfc554 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11dfc556 jne 0x11dfc51c */
  if (!C.zf) goto L_11dfc51c;
  /* 11dfc558 jmp 0x11dfc5be */
  goto L_11dfc5be;
L_11dfc55a:;
  /* 11dfc55a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfc55d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11dfc560 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11dfc565 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc568 jne 0x11dfc57f */
  if (!C.zf) goto L_11dfc57f;
  /* 11dfc56a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfc56d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11dfc573 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc576 jne 0x11dfc57f */
  if (!C.zf) goto L_11dfc57f;
  /* 11dfc578 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_11dfc57f:;
  /* 11dfc57f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfc582 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11dfc585 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11dfc58a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfc58d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11dfc593 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc595 je 0x11dfc5b8 */
  if (C.zf) goto L_11dfc5b8;
  /* 11dfc597 push 0x11e2a898 */
  push32((uint32_t)(0x11e2a898u));
  /* 11dfc59c push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfc59e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 11dfc5a3 push 0x11e2a80c */
  push32((uint32_t)(0x11e2a80cu));
  /* 11dfc5a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dfc5aa call 0x11dfaa10 */
  push32(0x11dfc5afu); f_11dfaa10();
  /* 11dfc5af add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc5b2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc5b5 jne 0x11dfc5b8 */
  if (!C.zf) goto L_11dfc5b8;
  /* 11dfc5b7 int3  */
  x86_unimpl("int3 @ 0x11dfc5b7");
L_11dfc5b8:;
  /* 11dfc5b8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11dfc5ba test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dfc5bc jne 0x11dfc57f */
  if (!C.zf) goto L_11dfc57f;
L_11dfc5be:;
  /* 11dfc5be cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc5c2 je 0x11dfc5e9 */
  if (C.zf) goto L_11dfc5e9;
  /* 11dfc5c4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfc5c7 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc5ca push eax */
  push32((uint32_t)(EAX));
  /* 11dfc5cb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfc5ce push ecx */
  push32((uint32_t)(ECX));
  /* 11dfc5cf call 0x11e03860 */
  push32(0x11dfc5d4u); f_11e03860();
  /* 11dfc5d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc5d7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11dfc5da cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc5de jne 0x11dfc5e7 */
  if (!C.zf) goto L_11dfc5e7;
  /* 11dfc5e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dfc5e2 jmp 0x11dfc82a */
  goto L_11dfc82a;
L_11dfc5e7:;
  /* 11dfc5e7 jmp 0x11dfc60c */
  goto L_11dfc60c;
L_11dfc5e9:;
  /* 11dfc5e9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfc5ec add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc5ef push edx */
  push32((uint32_t)(EDX));
  /* 11dfc5f0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfc5f3 push eax */
  push32((uint32_t)(EAX));
  /* 11dfc5f4 call 0x11e037b0 */
  push32(0x11dfc5f9u); f_11e037b0();
  /* 11dfc5f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc5fc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11dfc5ff cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc603 jne 0x11dfc60c */
  if (!C.zf) goto L_11dfc60c;
  /* 11dfc605 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dfc607 jmp 0x11dfc82a */
  goto L_11dfc82a;
L_11dfc60c:;
  /* 11dfc60c mov ecx, dword ptr [0x11e2df0c] */
  ECX = (r32((uint32_t)(0x11e2df0c)));
  /* 11dfc612 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc615 mov dword ptr [0x11e2df0c], ecx */
  w32((uint32_t)(0x11e2df0c), (ECX));
  /* 11dfc61b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc61f jne 0x11dfc677 */
  if (!C.zf) goto L_11dfc677;
  /* 11dfc621 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11dfc624 mov eax, dword ptr [0x11e3067c] */
  EAX = (r32((uint32_t)(0x11e3067c)));
  /* 11dfc629 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfc62c mov dword ptr [0x11e3067c], eax */
  w32((uint32_t)(0x11e3067c), (EAX));
  /* 11dfc631 mov ecx, dword ptr [0x11e3067c] */
  ECX = (r32((uint32_t)(0x11e3067c)));
  /* 11dfc637 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc63a mov dword ptr [0x11e3067c], ecx */
  w32((uint32_t)(0x11e3067c), (ECX));
  /* 11dfc640 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11dfc643 mov eax, dword ptr [0x11e30684] */
  EAX = (r32((uint32_t)(0x11e30684)));
  /* 11dfc648 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfc64b mov dword ptr [0x11e30684], eax */
  w32((uint32_t)(0x11e30684), (EAX));
  /* 11dfc650 mov ecx, dword ptr [0x11e30684] */
  ECX = (r32((uint32_t)(0x11e30684)));
  /* 11dfc656 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc659 mov dword ptr [0x11e30684], ecx */
  w32((uint32_t)(0x11e30684), (ECX));
  /* 11dfc65f mov edx, dword ptr [0x11e30684] */
  EDX = (r32((uint32_t)(0x11e30684)));
  /* 11dfc665 cmp edx, dword ptr [0x11e30688] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11e30688))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc66b jbe 0x11dfc677 */
  if ((C.cf||C.zf)) goto L_11dfc677;
  /* 11dfc66d mov eax, dword ptr [0x11e30684] */
  EAX = (r32((uint32_t)(0x11e30684)));
  /* 11dfc672 mov dword ptr [0x11e30688], eax */
  w32((uint32_t)(0x11e30688), (EAX));
L_11dfc677:;
  /* 11dfc677 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11dfc67a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc67d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11dfc680 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11dfc683 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfc686 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc689 jbe 0x11dfc6af */
  if ((C.cf||C.zf)) goto L_11dfc6af;
  /* 11dfc68b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11dfc68e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfc691 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfc694 push edx */
  push32((uint32_t)(EDX));
  /* 11dfc695 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dfc697 mov al, byte ptr [0x11e2df16] */
  AL = (r8((uint32_t)(0x11e2df16)));
  /* 11dfc69c push eax */
  push32((uint32_t)(EAX));
  /* 11dfc69d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11dfc6a0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfc6a3 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc6a6 push edx */
  push32((uint32_t)(EDX));
  /* 11dfc6a7 call 0x11e03290 */
  push32(0x11dfc6acu); f_11e03290();
  /* 11dfc6ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dfc6af:;
  /* 11dfc6af push 4 */
  push32((uint32_t)(0x4u));
  /* 11dfc6b1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dfc6b3 mov al, byte ptr [0x11e2df14] */
  AL = (r8((uint32_t)(0x11e2df14)));
  /* 11dfc6b8 push eax */
  push32((uint32_t)(EAX));
  /* 11dfc6b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfc6bc add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc6bf push ecx */
  push32((uint32_t)(ECX));
  /* 11dfc6c0 call 0x11e03290 */
  push32(0x11dfc6c5u); f_11e03290();
  /* 11dfc6c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc6c8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc6cc jne 0x11dfc6e9 */
  if (!C.zf) goto L_11dfc6e9;
  /* 11dfc6ce mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11dfc6d1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dfc6d4 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11dfc6d7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11dfc6da mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11dfc6dd mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 11dfc6e0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11dfc6e3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11dfc6e6 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_11dfc6e9:;
  /* 11dfc6e9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11dfc6ec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfc6ef mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_11dfc6f2:;
  /* 11dfc6f2 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc6f6 jne 0x11dfc727 */
  if (!C.zf) goto L_11dfc727;
  /* 11dfc6f8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc6fc jne 0x11dfc706 */
  if (!C.zf) goto L_11dfc706;
  /* 11dfc6fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11dfc701 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc704 je 0x11dfc727 */
  if (C.zf) goto L_11dfc727;
L_11dfc706:;
  /* 11dfc706 push 0x11e2a864 */
  push32((uint32_t)(0x11e2a864u));
  /* 11dfc70b push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfc70d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 11dfc712 push 0x11e2a80c */
  push32((uint32_t)(0x11e2a80cu));
  /* 11dfc717 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dfc719 call 0x11dfaa10 */
  push32(0x11dfc71eu); f_11dfaa10();
  /* 11dfc71e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc721 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc724 jne 0x11dfc727 */
  if (!C.zf) goto L_11dfc727;
  /* 11dfc726 int3  */
  x86_unimpl("int3 @ 0x11dfc726");
L_11dfc727:;
  /* 11dfc727 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11dfc729 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dfc72b jne 0x11dfc6f2 */
  if (!C.zf) goto L_11dfc6f2;
  /* 11dfc72d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11dfc730 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc733 je 0x11dfc73b */
  if (C.zf) goto L_11dfc73b;
  /* 11dfc735 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc739 je 0x11dfc743 */
  if (C.zf) goto L_11dfc743;
L_11dfc73b:;
  /* 11dfc73b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfc73e jmp 0x11dfc82a */
  goto L_11dfc82a;
L_11dfc743:;
  /* 11dfc743 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11dfc746 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc749 je 0x11dfc75b */
  if (C.zf) goto L_11dfc75b;
  /* 11dfc74b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11dfc74e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11dfc750 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11dfc753 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11dfc756 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11dfc759 jmp 0x11dfc797 */
  goto L_11dfc797;
L_11dfc75b:;
  /* 11dfc75b mov eax, dword ptr [0x11e30678] */
  EAX = (r32((uint32_t)(0x11e30678)));
  /* 11dfc760 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc763 je 0x11dfc786 */
  if (C.zf) goto L_11dfc786;
  /* 11dfc765 push 0x11e2a848 */
  push32((uint32_t)(0x11e2a848u));
  /* 11dfc76a push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfc76c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 11dfc771 push 0x11e2a80c */
  push32((uint32_t)(0x11e2a80cu));
  /* 11dfc776 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dfc778 call 0x11dfaa10 */
  push32(0x11dfc77du); f_11dfaa10();
  /* 11dfc77d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc780 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc783 jne 0x11dfc786 */
  if (!C.zf) goto L_11dfc786;
  /* 11dfc785 int3  */
  x86_unimpl("int3 @ 0x11dfc785");
L_11dfc786:;
  /* 11dfc786 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11dfc788 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11dfc78a jne 0x11dfc75b */
  if (!C.zf) goto L_11dfc75b;
  /* 11dfc78c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11dfc78f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11dfc792 mov dword ptr [0x11e30678], eax */
  w32((uint32_t)(0x11e30678), (EAX));
L_11dfc797:;
  /* 11dfc797 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11dfc79a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc79e je 0x11dfc7af */
  if (C.zf) goto L_11dfc7af;
  /* 11dfc7a0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11dfc7a3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11dfc7a6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11dfc7a9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11dfc7ab mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11dfc7ad jmp 0x11dfc7ea */
  goto L_11dfc7ea;
L_11dfc7af:;
  /* 11dfc7af mov eax, dword ptr [0x11e30680] */
  EAX = (r32((uint32_t)(0x11e30680)));
  /* 11dfc7b4 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc7b7 je 0x11dfc7da */
  if (C.zf) goto L_11dfc7da;
  /* 11dfc7b9 push 0x11e2a82c */
  push32((uint32_t)(0x11e2a82cu));
  /* 11dfc7be push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfc7c0 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 11dfc7c5 push 0x11e2a80c */
  push32((uint32_t)(0x11e2a80cu));
  /* 11dfc7ca push 2 */
  push32((uint32_t)(0x2u));
  /* 11dfc7cc call 0x11dfaa10 */
  push32(0x11dfc7d1u); f_11dfaa10();
  /* 11dfc7d1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc7d4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc7d7 jne 0x11dfc7da */
  if (!C.zf) goto L_11dfc7da;
  /* 11dfc7d9 int3  */
  x86_unimpl("int3 @ 0x11dfc7d9");
L_11dfc7da:;
  /* 11dfc7da xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11dfc7dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11dfc7de jne 0x11dfc7af */
  if (!C.zf) goto L_11dfc7af;
  /* 11dfc7e0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11dfc7e3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11dfc7e5 mov dword ptr [0x11e30680], eax */
  w32((uint32_t)(0x11e30680), (EAX));
L_11dfc7ea:;
  /* 11dfc7ea cmp dword ptr [0x11e30680], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e30680))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc7f1 je 0x11dfc801 */
  if (C.zf) goto L_11dfc801;
  /* 11dfc7f3 mov ecx, dword ptr [0x11e30680] */
  ECX = (r32((uint32_t)(0x11e30680)));
  /* 11dfc7f9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11dfc7fc mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11dfc7ff jmp 0x11dfc809 */
  goto L_11dfc809;
L_11dfc801:;
  /* 11dfc801 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11dfc804 mov dword ptr [0x11e30678], eax */
  w32((uint32_t)(0x11e30678), (EAX));
L_11dfc809:;
  /* 11dfc809 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11dfc80c mov edx, dword ptr [0x11e30680] */
  EDX = (r32((uint32_t)(0x11e30680)));
  /* 11dfc812 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11dfc814 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11dfc817 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11dfc81e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11dfc821 mov dword ptr [0x11e30680], ecx */
  w32((uint32_t)(0x11e30680), (ECX));
  /* 11dfc827 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11dfc82a:;
  /* 11dfc82a pop edi */
  EDI = (pop32());
  /* 11dfc82b pop esi */
  ESI = (pop32());
  /* 11dfc82c pop ebx */
  EBX = (pop32());
  /* 11dfc82d mov esp, ebp */
  ESP = (EBP);
  /* 11dfc82f pop ebp */
  EBP = (pop32());
  /* 11dfc830 ret  */
  ESPCHK(0x11dfc320u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c840 @ 0x11dfc840 (27 bytes, 13 insns) */
void f_11dfc840(void) {
  FTRACE(0x11dfc840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfc840 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfc841 mov ebp, esp */
  EBP = (ESP);
  /* 11dfc843 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfc845 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfc847 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dfc849 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfc84c push eax */
  push32((uint32_t)(EAX));
  /* 11dfc84d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfc850 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfc851 call 0x11dfc860 */
  push32(0x11dfc856u); f_11dfc860();
  /* 11dfc856 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc859 pop ebp */
  EBP = (pop32());
  /* 11dfc85a ret  */
  ESPCHK(0x11dfc840u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c860 @ 0x11dfc860 (64 bytes, 27 insns) */
void f_11dfc860(void) {
  FTRACE(0x11dfc860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfc860 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfc861 mov ebp, esp */
  EBP = (ESP);
  /* 11dfc863 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfc864 push 9 */
  push32((uint32_t)(0x9u));
  /* 11dfc866 call 0x11dfbd50 */
  push32(0x11dfc86bu); f_11dfbd50();
  /* 11dfc86b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc86e push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfc870 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11dfc873 push eax */
  push32((uint32_t)(EAX));
  /* 11dfc874 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dfc877 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfc878 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfc87b push edx */
  push32((uint32_t)(EDX));
  /* 11dfc87c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfc87f push eax */
  push32((uint32_t)(EAX));
  /* 11dfc880 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfc883 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfc884 call 0x11dfc320 */
  push32(0x11dfc889u); f_11dfc320();
  /* 11dfc889 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc88c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11dfc88f push 9 */
  push32((uint32_t)(0x9u));
  /* 11dfc891 call 0x11dfbdf0 */
  push32(0x11dfc896u); f_11dfbdf0();
  /* 11dfc896 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc899 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfc89c mov esp, ebp */
  ESP = (EBP);
  /* 11dfc89e pop ebp */
  EBP = (pop32());
  /* 11dfc89f ret  */
  ESPCHK(0x11dfc860u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c8a0 @ 0x11dfc8a0 (19 bytes, 9 insns) */
void f_11dfc8a0(void) {
  FTRACE(0x11dfc8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfc8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfc8a1 mov ebp, esp */
  EBP = (ESP);
  /* 11dfc8a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dfc8a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfc8a8 push eax */
  push32((uint32_t)(EAX));
  /* 11dfc8a9 call 0x11dfc8e0 */
  push32(0x11dfc8aeu); f_11dfc8e0();
  /* 11dfc8ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc8b1 pop ebp */
  EBP = (pop32());
  /* 11dfc8b2 ret  */
  ESPCHK(0x11dfc8a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c8c0 @ 0x11dfc8c0 (19 bytes, 9 insns) */
void f_11dfc8c0(void) {
  FTRACE(0x11dfc8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfc8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfc8c1 mov ebp, esp */
  EBP = (ESP);
  /* 11dfc8c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dfc8c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfc8c8 push eax */
  push32((uint32_t)(EAX));
  /* 11dfc8c9 call 0x11dfc910 */
  push32(0x11dfc8ceu); f_11dfc910();
  /* 11dfc8ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc8d1 pop ebp */
  EBP = (pop32());
  /* 11dfc8d2 ret  */
  ESPCHK(0x11dfc8c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c8e0 @ 0x11dfc8e0 (41 bytes, 16 insns) */
void f_11dfc8e0(void) {
  FTRACE(0x11dfc8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfc8e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfc8e1 mov ebp, esp */
  EBP = (ESP);
  /* 11dfc8e3 push 9 */
  push32((uint32_t)(0x9u));
  /* 11dfc8e5 call 0x11dfbd50 */
  push32(0x11dfc8eau); f_11dfbd50();
  /* 11dfc8ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc8ed mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfc8f0 push eax */
  push32((uint32_t)(EAX));
  /* 11dfc8f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfc8f4 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfc8f5 call 0x11dfc910 */
  push32(0x11dfc8fau); f_11dfc910();
  /* 11dfc8fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc8fd push 9 */
  push32((uint32_t)(0x9u));
  /* 11dfc8ff call 0x11dfbdf0 */
  push32(0x11dfc904u); f_11dfbdf0();
  /* 11dfc904 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc907 pop ebp */
  EBP = (pop32());
  /* 11dfc908 ret  */
  ESPCHK(0x11dfc8e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c910 @ 0x11dfc910 (1004 bytes, 342 insns) */
void f_11dfc910(void) {
  FTRACE(0x11dfc910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfc910 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfc911 mov ebp, esp */
  EBP = (ESP);
  /* 11dfc913 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfc914 push ebx */
  push32((uint32_t)(EBX));
  /* 11dfc915 push esi */
  push32((uint32_t)(ESI));
  /* 11dfc916 push edi */
  push32((uint32_t)(EDI));
  /* 11dfc917 mov eax, dword ptr [0x11e2df08] */
  EAX = (r32((uint32_t)(0x11e2df08)));
  /* 11dfc91c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11dfc91f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfc921 je 0x11dfc953 */
  if (C.zf) goto L_11dfc953;
L_11dfc923:;
  /* 11dfc923 call 0x11dfcff0 */
  push32(0x11dfc928u); f_11dfcff0();
  /* 11dfc928 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfc92a jne 0x11dfc94d */
  if (!C.zf) goto L_11dfc94d;
  /* 11dfc92c push 0x11e2a818 */
  push32((uint32_t)(0x11e2a818u));
  /* 11dfc931 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfc933 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 11dfc938 push 0x11e2a80c */
  push32((uint32_t)(0x11e2a80cu));
  /* 11dfc93d push 2 */
  push32((uint32_t)(0x2u));
  /* 11dfc93f call 0x11dfaa10 */
  push32(0x11dfc944u); f_11dfaa10();
  /* 11dfc944 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc947 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc94a jne 0x11dfc94d */
  if (!C.zf) goto L_11dfc94d;
  /* 11dfc94c int3  */
  x86_unimpl("int3 @ 0x11dfc94c");
L_11dfc94d:;
  /* 11dfc94d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11dfc94f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11dfc951 jne 0x11dfc923 */
  if (!C.zf) goto L_11dfc923;
L_11dfc953:;
  /* 11dfc953 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc957 jne 0x11dfc95e */
  if (!C.zf) goto L_11dfc95e;
  /* 11dfc959 jmp 0x11dfccf5 */
  goto L_11dfccf5;
L_11dfc95e:;
  /* 11dfc95e push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfc960 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfc962 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfc964 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfc967 push edx */
  push32((uint32_t)(EDX));
  /* 11dfc968 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfc96a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfc96d push eax */
  push32((uint32_t)(EAX));
  /* 11dfc96e push 3 */
  push32((uint32_t)(0x3u));
  /* 11dfc970 call dword ptr [0x11e2e250] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e2e250))), 0x11dfc976u);
  /* 11dfc976 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc979 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfc97b jne 0x11dfc9a8 */
  if (!C.zf) goto L_11dfc9a8;
L_11dfc97d:;
  /* 11dfc97d push 0x11e2aab4 */
  push32((uint32_t)(0x11e2aab4u));
  /* 11dfc982 push 0x11e2a7ac */
  push32((uint32_t)(0x11e2a7acu));
  /* 11dfc987 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfc989 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfc98b push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfc98d push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfc98f call 0x11dfaa10 */
  push32(0x11dfc994u); f_11dfaa10();
  /* 11dfc994 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc997 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc99a jne 0x11dfc99d */
  if (!C.zf) goto L_11dfc99d;
  /* 11dfc99c int3  */
  x86_unimpl("int3 @ 0x11dfc99c");
L_11dfc99d:;
  /* 11dfc99d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11dfc99f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11dfc9a1 jne 0x11dfc97d */
  if (!C.zf) goto L_11dfc97d;
  /* 11dfc9a3 jmp 0x11dfccf5 */
  goto L_11dfccf5;
L_11dfc9a8:;
  /* 11dfc9a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfc9ab push edx */
  push32((uint32_t)(EDX));
  /* 11dfc9ac call 0x11dfd450 */
  push32(0x11dfc9b1u); f_11dfd450();
  /* 11dfc9b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc9b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfc9b6 jne 0x11dfc9d9 */
  if (!C.zf) goto L_11dfc9d9;
  /* 11dfc9b8 push 0x11e2a91c */
  push32((uint32_t)(0x11e2a91cu));
  /* 11dfc9bd push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfc9bf push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 11dfc9c4 push 0x11e2a80c */
  push32((uint32_t)(0x11e2a80cu));
  /* 11dfc9c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dfc9cb call 0x11dfaa10 */
  push32(0x11dfc9d0u); f_11dfaa10();
  /* 11dfc9d0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfc9d3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc9d6 jne 0x11dfc9d9 */
  if (!C.zf) goto L_11dfc9d9;
  /* 11dfc9d8 int3  */
  x86_unimpl("int3 @ 0x11dfc9d8");
L_11dfc9d9:;
  /* 11dfc9d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dfc9db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfc9dd jne 0x11dfc9a8 */
  if (!C.zf) goto L_11dfc9a8;
  /* 11dfc9df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfc9e2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfc9e5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11dfc9e8:;
  /* 11dfc9e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfc9eb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11dfc9ee and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11dfc9f3 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc9f6 je 0x11dfca3b */
  if (C.zf) goto L_11dfca3b;
  /* 11dfc9f8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfc9fb cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfc9ff je 0x11dfca3b */
  if (C.zf) goto L_11dfca3b;
  /* 11dfca01 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfca04 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11dfca07 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11dfca0c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfca0f je 0x11dfca3b */
  if (C.zf) goto L_11dfca3b;
  /* 11dfca11 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfca14 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfca18 je 0x11dfca3b */
  if (C.zf) goto L_11dfca3b;
  /* 11dfca1a push 0x11e2a404 */
  push32((uint32_t)(0x11e2a404u));
  /* 11dfca1f push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfca21 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 11dfca26 push 0x11e2a80c */
  push32((uint32_t)(0x11e2a80cu));
  /* 11dfca2b push 2 */
  push32((uint32_t)(0x2u));
  /* 11dfca2d call 0x11dfaa10 */
  push32(0x11dfca32u); f_11dfaa10();
  /* 11dfca32 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfca35 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfca38 jne 0x11dfca3b */
  if (!C.zf) goto L_11dfca3b;
  /* 11dfca3a int3  */
  x86_unimpl("int3 @ 0x11dfca3a");
L_11dfca3b:;
  /* 11dfca3b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11dfca3d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dfca3f jne 0x11dfc9e8 */
  if (!C.zf) goto L_11dfc9e8;
  /* 11dfca41 mov eax, dword ptr [0x11e2df08] */
  EAX = (r32((uint32_t)(0x11e2df08)));
  /* 11dfca46 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11dfca49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfca4b jne 0x11dfcb16 */
  if (!C.zf) goto L_11dfcb16;
  /* 11dfca51 push 4 */
  push32((uint32_t)(0x4u));
  /* 11dfca53 mov cl, byte ptr [0x11e2df14] */
  CL = (r8((uint32_t)(0x11e2df14)));
  /* 11dfca59 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfca5a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfca5d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfca60 push edx */
  push32((uint32_t)(EDX));
  /* 11dfca61 call 0x11dfcf60 */
  push32(0x11dfca66u); f_11dfcf60();
  /* 11dfca66 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfca69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfca6b jne 0x11dfcab0 */
  if (!C.zf) goto L_11dfcab0;
L_11dfca6d:;
  /* 11dfca6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfca70 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfca73 push eax */
  push32((uint32_t)(EAX));
  /* 11dfca74 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfca77 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11dfca7a push edx */
  push32((uint32_t)(EDX));
  /* 11dfca7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfca7e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11dfca81 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11dfca87 mov edx, dword ptr [ecx*4 + 0x11e2df18] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11e2df18)));
  /* 11dfca8e push edx */
  push32((uint32_t)(EDX));
  /* 11dfca8f push 0x11e2aa88 */
  push32((uint32_t)(0x11e2aa88u));
  /* 11dfca94 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfca96 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfca98 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfca9a push 1 */
  push32((uint32_t)(0x1u));
  /* 11dfca9c call 0x11dfaa10 */
  push32(0x11dfcaa1u); f_11dfaa10();
  /* 11dfcaa1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfcaa4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfcaa7 jne 0x11dfcaaa */
  if (!C.zf) goto L_11dfcaaa;
  /* 11dfcaa9 int3  */
  x86_unimpl("int3 @ 0x11dfcaa9");
L_11dfcaaa:;
  /* 11dfcaaa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dfcaac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfcaae jne 0x11dfca6d */
  if (!C.zf) goto L_11dfca6d;
L_11dfcab0:;
  /* 11dfcab0 push 4 */
  push32((uint32_t)(0x4u));
  /* 11dfcab2 mov cl, byte ptr [0x11e2df14] */
  CL = (r8((uint32_t)(0x11e2df14)));
  /* 11dfcab8 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfcab9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfcabc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11dfcabf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfcac2 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 11dfcac6 push edx */
  push32((uint32_t)(EDX));
  /* 11dfcac7 call 0x11dfcf60 */
  push32(0x11dfcaccu); f_11dfcf60();
  /* 11dfcacc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfcacf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfcad1 jne 0x11dfcb16 */
  if (!C.zf) goto L_11dfcb16;
L_11dfcad3:;
  /* 11dfcad3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfcad6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfcad9 push eax */
  push32((uint32_t)(EAX));
  /* 11dfcada mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfcadd mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11dfcae0 push edx */
  push32((uint32_t)(EDX));
  /* 11dfcae1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfcae4 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11dfcae7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11dfcaed mov edx, dword ptr [ecx*4 + 0x11e2df18] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11e2df18)));
  /* 11dfcaf4 push edx */
  push32((uint32_t)(EDX));
  /* 11dfcaf5 push 0x11e2aa5c */
  push32((uint32_t)(0x11e2aa5cu));
  /* 11dfcafa push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfcafc push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfcafe push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfcb00 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dfcb02 call 0x11dfaa10 */
  push32(0x11dfcb07u); f_11dfaa10();
  /* 11dfcb07 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfcb0a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfcb0d jne 0x11dfcb10 */
  if (!C.zf) goto L_11dfcb10;
  /* 11dfcb0f int3  */
  x86_unimpl("int3 @ 0x11dfcb0f");
L_11dfcb10:;
  /* 11dfcb10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dfcb12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfcb14 jne 0x11dfcad3 */
  if (!C.zf) goto L_11dfcad3;
L_11dfcb16:;
  /* 11dfcb16 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfcb19 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfcb1d jne 0x11dfcb8b */
  if (!C.zf) goto L_11dfcb8b;
L_11dfcb1f:;
  /* 11dfcb1f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfcb22 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfcb29 jne 0x11dfcb34 */
  if (!C.zf) goto L_11dfcb34;
  /* 11dfcb2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfcb2e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfcb32 je 0x11dfcb55 */
  if (C.zf) goto L_11dfcb55;
L_11dfcb34:;
  /* 11dfcb34 push 0x11e2aa1c */
  push32((uint32_t)(0x11e2aa1cu));
  /* 11dfcb39 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfcb3b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 11dfcb40 push 0x11e2a80c */
  push32((uint32_t)(0x11e2a80cu));
  /* 11dfcb45 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dfcb47 call 0x11dfaa10 */
  push32(0x11dfcb4cu); f_11dfaa10();
  /* 11dfcb4c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfcb4f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfcb52 jne 0x11dfcb55 */
  if (!C.zf) goto L_11dfcb55;
  /* 11dfcb54 int3  */
  x86_unimpl("int3 @ 0x11dfcb54");
L_11dfcb55:;
  /* 11dfcb55 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11dfcb57 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11dfcb59 jne 0x11dfcb1f */
  if (!C.zf) goto L_11dfcb1f;
  /* 11dfcb5b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfcb5e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11dfcb61 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfcb64 push eax */
  push32((uint32_t)(EAX));
  /* 11dfcb65 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11dfcb67 mov cl, byte ptr [0x11e2df15] */
  CL = (r8((uint32_t)(0x11e2df15)));
  /* 11dfcb6d push ecx */
  push32((uint32_t)(ECX));
  /* 11dfcb6e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfcb71 push edx */
  push32((uint32_t)(EDX));
  /* 11dfcb72 call 0x11e03290 */
  push32(0x11dfcb77u); f_11e03290();
  /* 11dfcb77 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfcb7a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfcb7d push eax */
  push32((uint32_t)(EAX));
  /* 11dfcb7e call 0x11e03a50 */
  push32(0x11dfcb83u); f_11e03a50();
  /* 11dfcb83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfcb86 jmp 0x11dfccf5 */
  goto L_11dfccf5;
L_11dfcb8b:;
  /* 11dfcb8b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfcb8e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfcb92 jne 0x11dfcba1 */
  if (!C.zf) goto L_11dfcba1;
  /* 11dfcb94 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfcb98 jne 0x11dfcba1 */
  if (!C.zf) goto L_11dfcba1;
  /* 11dfcb9a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_11dfcba1:;
  /* 11dfcba1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfcba4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11dfcba7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfcbaa je 0x11dfcbcd */
  if (C.zf) goto L_11dfcbcd;
  /* 11dfcbac push 0x11e2a9fc */
  push32((uint32_t)(0x11e2a9fcu));
  /* 11dfcbb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfcbb3 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 11dfcbb8 push 0x11e2a80c */
  push32((uint32_t)(0x11e2a80cu));
  /* 11dfcbbd push 2 */
  push32((uint32_t)(0x2u));
  /* 11dfcbbf call 0x11dfaa10 */
  push32(0x11dfcbc4u); f_11dfaa10();
  /* 11dfcbc4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfcbc7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfcbca jne 0x11dfcbcd */
  if (!C.zf) goto L_11dfcbcd;
  /* 11dfcbcc int3  */
  x86_unimpl("int3 @ 0x11dfcbcc");
L_11dfcbcd:;
  /* 11dfcbcd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11dfcbcf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11dfcbd1 jne 0x11dfcba1 */
  if (!C.zf) goto L_11dfcba1;
  /* 11dfcbd3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfcbd6 mov eax, dword ptr [0x11e30684] */
  EAX = (r32((uint32_t)(0x11e30684)));
  /* 11dfcbdb sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfcbde mov dword ptr [0x11e30684], eax */
  w32((uint32_t)(0x11e30684), (EAX));
  /* 11dfcbe3 mov ecx, dword ptr [0x11e2df08] */
  ECX = (r32((uint32_t)(0x11e2df08)));
  /* 11dfcbe9 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11dfcbec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11dfcbee jne 0x11dfcccc */
  if (!C.zf) goto L_11dfcccc;
  /* 11dfcbf4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfcbf7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfcbfa je 0x11dfcc0c */
  if (C.zf) goto L_11dfcc0c;
  /* 11dfcbfc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfcbff mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11dfcc01 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfcc04 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11dfcc07 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11dfcc0a jmp 0x11dfcc4a */
  goto L_11dfcc4a;
L_11dfcc0c:;
  /* 11dfcc0c mov ecx, dword ptr [0x11e30678] */
  ECX = (r32((uint32_t)(0x11e30678)));
  /* 11dfcc12 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfcc15 je 0x11dfcc38 */
  if (C.zf) goto L_11dfcc38;
  /* 11dfcc17 push 0x11e2a9e4 */
  push32((uint32_t)(0x11e2a9e4u));
  /* 11dfcc1c push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfcc1e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 11dfcc23 push 0x11e2a80c */
  push32((uint32_t)(0x11e2a80cu));
  /* 11dfcc28 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dfcc2a call 0x11dfaa10 */
  push32(0x11dfcc2fu); f_11dfaa10();
  /* 11dfcc2f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfcc32 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfcc35 jne 0x11dfcc38 */
  if (!C.zf) goto L_11dfcc38;
  /* 11dfcc37 int3  */
  x86_unimpl("int3 @ 0x11dfcc37");
L_11dfcc38:;
  /* 11dfcc38 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11dfcc3a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dfcc3c jne 0x11dfcc0c */
  if (!C.zf) goto L_11dfcc0c;
  /* 11dfcc3e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfcc41 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11dfcc44 mov dword ptr [0x11e30678], ecx */
  w32((uint32_t)(0x11e30678), (ECX));
L_11dfcc4a:;
  /* 11dfcc4a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfcc4d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfcc51 je 0x11dfcc62 */
  if (C.zf) goto L_11dfcc62;
  /* 11dfcc53 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfcc56 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11dfcc59 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfcc5c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11dfcc5e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11dfcc60 jmp 0x11dfcc9f */
  goto L_11dfcc9f;
L_11dfcc62:;
  /* 11dfcc62 mov ecx, dword ptr [0x11e30680] */
  ECX = (r32((uint32_t)(0x11e30680)));
  /* 11dfcc68 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfcc6b je 0x11dfcc8e */
  if (C.zf) goto L_11dfcc8e;
  /* 11dfcc6d push 0x11e2a9cc */
  push32((uint32_t)(0x11e2a9ccu));
  /* 11dfcc72 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfcc74 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 11dfcc79 push 0x11e2a80c */
  push32((uint32_t)(0x11e2a80cu));
  /* 11dfcc7e push 2 */
  push32((uint32_t)(0x2u));
  /* 11dfcc80 call 0x11dfaa10 */
  push32(0x11dfcc85u); f_11dfaa10();
  /* 11dfcc85 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfcc88 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfcc8b jne 0x11dfcc8e */
  if (!C.zf) goto L_11dfcc8e;
  /* 11dfcc8d int3  */
  x86_unimpl("int3 @ 0x11dfcc8d");
L_11dfcc8e:;
  /* 11dfcc8e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11dfcc90 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dfcc92 jne 0x11dfcc62 */
  if (!C.zf) goto L_11dfcc62;
  /* 11dfcc94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfcc97 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11dfcc99 mov dword ptr [0x11e30680], ecx */
  w32((uint32_t)(0x11e30680), (ECX));
L_11dfcc9f:;
  /* 11dfcc9f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfcca2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11dfcca5 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfcca8 push eax */
  push32((uint32_t)(EAX));
  /* 11dfcca9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11dfccab mov cl, byte ptr [0x11e2df15] */
  CL = (r8((uint32_t)(0x11e2df15)));
  /* 11dfccb1 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfccb2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfccb5 push edx */
  push32((uint32_t)(EDX));
  /* 11dfccb6 call 0x11e03290 */
  push32(0x11dfccbbu); f_11e03290();
  /* 11dfccbb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfccbe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfccc1 push eax */
  push32((uint32_t)(EAX));
  /* 11dfccc2 call 0x11e03a50 */
  push32(0x11dfccc7u); f_11e03a50();
  /* 11dfccc7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfccca jmp 0x11dfccf5 */
  goto L_11dfccf5;
L_11dfcccc:;
  /* 11dfcccc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfcccf mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 11dfccd6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfccd9 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11dfccdc push eax */
  push32((uint32_t)(EAX));
  /* 11dfccdd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11dfccdf mov cl, byte ptr [0x11e2df15] */
  CL = (r8((uint32_t)(0x11e2df15)));
  /* 11dfcce5 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfcce6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfcce9 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfccec push edx */
  push32((uint32_t)(EDX));
  /* 11dfcced call 0x11e03290 */
  push32(0x11dfccf2u); f_11e03290();
  /* 11dfccf2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dfccf5:;
  /* 11dfccf5 pop edi */
  EDI = (pop32());
  /* 11dfccf6 pop esi */
  ESI = (pop32());
  /* 11dfccf7 pop ebx */
  EBX = (pop32());
  /* 11dfccf8 mov esp, ebp */
  ESP = (EBP);
  /* 11dfccfa pop ebp */
  EBP = (pop32());
  /* 11dfccfb ret  */
  ESPCHK(0x11dfc910u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd00 @ 0x11dfcd00 (19 bytes, 9 insns) */
void f_11dfcd00(void) {
  FTRACE(0x11dfcd00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfcd00 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfcd01 mov ebp, esp */
  EBP = (ESP);
  /* 11dfcd03 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dfcd05 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfcd08 push eax */
  push32((uint32_t)(EAX));
  /* 11dfcd09 call 0x11dfcd20 */
  push32(0x11dfcd0eu); f_11dfcd20();
  /* 11dfcd0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfcd11 pop ebp */
  EBP = (pop32());
  /* 11dfcd12 ret  */
  ESPCHK(0x11dfcd00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd20 @ 0x11dfcd20 (342 bytes, 119 insns) */
void f_11dfcd20(void) {
  FTRACE(0x11dfcd20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfcd20 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfcd21 mov ebp, esp */
  EBP = (ESP);
  /* 11dfcd23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfcd26 push ebx */
  push32((uint32_t)(EBX));
  /* 11dfcd27 push esi */
  push32((uint32_t)(ESI));
  /* 11dfcd28 push edi */
  push32((uint32_t)(EDI));
  /* 11dfcd29 mov eax, dword ptr [0x11e2df08] */
  EAX = (r32((uint32_t)(0x11e2df08)));
  /* 11dfcd2e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11dfcd31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfcd33 je 0x11dfcd65 */
  if (C.zf) goto L_11dfcd65;
L_11dfcd35:;
  /* 11dfcd35 call 0x11dfcff0 */
  push32(0x11dfcd3au); f_11dfcff0();
  /* 11dfcd3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfcd3c jne 0x11dfcd5f */
  if (!C.zf) goto L_11dfcd5f;
  /* 11dfcd3e push 0x11e2a818 */
  push32((uint32_t)(0x11e2a818u));
  /* 11dfcd43 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfcd45 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 11dfcd4a push 0x11e2a80c */
  push32((uint32_t)(0x11e2a80cu));
  /* 11dfcd4f push 2 */
  push32((uint32_t)(0x2u));
  /* 11dfcd51 call 0x11dfaa10 */
  push32(0x11dfcd56u); f_11dfaa10();
  /* 11dfcd56 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfcd59 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfcd5c jne 0x11dfcd5f */
  if (!C.zf) goto L_11dfcd5f;
  /* 11dfcd5e int3  */
  x86_unimpl("int3 @ 0x11dfcd5e");
L_11dfcd5f:;
  /* 11dfcd5f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11dfcd61 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11dfcd63 jne 0x11dfcd35 */
  if (!C.zf) goto L_11dfcd35;
L_11dfcd65:;
  /* 11dfcd65 push 9 */
  push32((uint32_t)(0x9u));
  /* 11dfcd67 call 0x11dfbd50 */
  push32(0x11dfcd6cu); f_11dfbd50();
  /* 11dfcd6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dfcd6f:;
  /* 11dfcd6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfcd72 push edx */
  push32((uint32_t)(EDX));
  /* 11dfcd73 call 0x11dfd450 */
  push32(0x11dfcd78u); f_11dfd450();
  /* 11dfcd78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfcd7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfcd7d jne 0x11dfcda0 */
  if (!C.zf) goto L_11dfcda0;
  /* 11dfcd7f push 0x11e2a91c */
  push32((uint32_t)(0x11e2a91cu));
  /* 11dfcd84 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfcd86 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 11dfcd8b push 0x11e2a80c */
  push32((uint32_t)(0x11e2a80cu));
  /* 11dfcd90 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dfcd92 call 0x11dfaa10 */
  push32(0x11dfcd97u); f_11dfaa10();
  /* 11dfcd97 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfcd9a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfcd9d jne 0x11dfcda0 */
  if (!C.zf) goto L_11dfcda0;
  /* 11dfcd9f int3  */
  x86_unimpl("int3 @ 0x11dfcd9f");
L_11dfcda0:;
  /* 11dfcda0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dfcda2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfcda4 jne 0x11dfcd6f */
  if (!C.zf) goto L_11dfcd6f;
  /* 11dfcda6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfcda9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfcdac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11dfcdaf:;
  /* 11dfcdaf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfcdb2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11dfcdb5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11dfcdba cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfcdbd je 0x11dfce02 */
  if (C.zf) goto L_11dfce02;
  /* 11dfcdbf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfcdc2 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfcdc6 je 0x11dfce02 */
  if (C.zf) goto L_11dfce02;
  /* 11dfcdc8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfcdcb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11dfcdce and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11dfcdd3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfcdd6 je 0x11dfce02 */
  if (C.zf) goto L_11dfce02;
  /* 11dfcdd8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfcddb cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfcddf je 0x11dfce02 */
  if (C.zf) goto L_11dfce02;
  /* 11dfcde1 push 0x11e2a404 */
  push32((uint32_t)(0x11e2a404u));
  /* 11dfcde6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfcde8 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 11dfcded push 0x11e2a80c */
  push32((uint32_t)(0x11e2a80cu));
  /* 11dfcdf2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dfcdf4 call 0x11dfaa10 */
  push32(0x11dfcdf9u); f_11dfaa10();
  /* 11dfcdf9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfcdfc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfcdff jne 0x11dfce02 */
  if (!C.zf) goto L_11dfce02;
  /* 11dfce01 int3  */
  x86_unimpl("int3 @ 0x11dfce01");
L_11dfce02:;
  /* 11dfce02 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11dfce04 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dfce06 jne 0x11dfcdaf */
  if (!C.zf) goto L_11dfcdaf;
  /* 11dfce08 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfce0b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfce0f jne 0x11dfce1e */
  if (!C.zf) goto L_11dfce1e;
  /* 11dfce11 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfce15 jne 0x11dfce1e */
  if (!C.zf) goto L_11dfce1e;
  /* 11dfce17 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_11dfce1e:;
  /* 11dfce1e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfce21 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfce25 je 0x11dfce59 */
  if (C.zf) goto L_11dfce59;
L_11dfce27:;
  /* 11dfce27 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfce2a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11dfce2d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfce30 je 0x11dfce53 */
  if (C.zf) goto L_11dfce53;
  /* 11dfce32 push 0x11e2a9fc */
  push32((uint32_t)(0x11e2a9fcu));
  /* 11dfce37 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfce39 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 11dfce3e push 0x11e2a80c */
  push32((uint32_t)(0x11e2a80cu));
  /* 11dfce43 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dfce45 call 0x11dfaa10 */
  push32(0x11dfce4au); f_11dfaa10();
  /* 11dfce4a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfce4d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfce50 jne 0x11dfce53 */
  if (!C.zf) goto L_11dfce53;
  /* 11dfce52 int3  */
  x86_unimpl("int3 @ 0x11dfce52");
L_11dfce53:;
  /* 11dfce53 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11dfce55 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11dfce57 jne 0x11dfce27 */
  if (!C.zf) goto L_11dfce27;
L_11dfce59:;
  /* 11dfce59 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfce5c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11dfce5f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11dfce62 push 9 */
  push32((uint32_t)(0x9u));
  /* 11dfce64 call 0x11dfbdf0 */
  push32(0x11dfce69u); f_11dfbdf0();
  /* 11dfce69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfce6c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfce6f pop edi */
  EDI = (pop32());
  /* 11dfce70 pop esi */
  ESI = (pop32());
  /* 11dfce71 pop ebx */
  EBX = (pop32());
  /* 11dfce72 mov esp, ebp */
  ESP = (EBP);
  /* 11dfce74 pop ebp */
  EBP = (pop32());
  /* 11dfce75 ret  */
  ESPCHK(0x11dfcd20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce80 @ 0x11dfce80 (28 bytes, 11 insns) */
void f_11dfce80(void) {
  FTRACE(0x11dfce80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfce80 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfce81 mov ebp, esp */
  EBP = (ESP);
  /* 11dfce83 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfce84 mov eax, dword ptr [0x11e2df10] */
  EAX = (r32((uint32_t)(0x11e2df10)));
  /* 11dfce89 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11dfce8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfce8f mov dword ptr [0x11e2df10], ecx */
  w32((uint32_t)(0x11e2df10), (ECX));
  /* 11dfce95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfce98 mov esp, ebp */
  ESP = (EBP);
  /* 11dfce9a pop ebp */
  EBP = (pop32());
  /* 11dfce9b ret  */
  ESPCHK(0x11dfce80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cea0 @ 0x11dfcea0 (157 bytes, 59 insns) */
void f_11dfcea0(void) {
  FTRACE(0x11dfcea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfcea0 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfcea1 mov ebp, esp */
  EBP = (ESP);
  /* 11dfcea3 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfcea4 push ebx */
  push32((uint32_t)(EBX));
  /* 11dfcea5 push esi */
  push32((uint32_t)(ESI));
  /* 11dfcea6 push edi */
  push32((uint32_t)(EDI));
  /* 11dfcea7 push 9 */
  push32((uint32_t)(0x9u));
  /* 11dfcea9 call 0x11dfbd50 */
  push32(0x11dfceaeu); f_11dfbd50();
  /* 11dfceae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfceb1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfceb4 push eax */
  push32((uint32_t)(EAX));
  /* 11dfceb5 call 0x11dfd450 */
  push32(0x11dfcebau); f_11dfd450();
  /* 11dfceba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfcebd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfcebf je 0x11dfcf2c */
  if (C.zf) goto L_11dfcf2c;
  /* 11dfcec1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfcec4 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfcec7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11dfceca:;
  /* 11dfceca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfcecd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11dfced0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11dfced5 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfced8 je 0x11dfcf1d */
  if (C.zf) goto L_11dfcf1d;
  /* 11dfceda mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfcedd cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfcee1 je 0x11dfcf1d */
  if (C.zf) goto L_11dfcf1d;
  /* 11dfcee3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfcee6 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11dfcee9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11dfceee cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfcef1 je 0x11dfcf1d */
  if (C.zf) goto L_11dfcf1d;
  /* 11dfcef3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfcef6 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfcefa je 0x11dfcf1d */
  if (C.zf) goto L_11dfcf1d;
  /* 11dfcefc push 0x11e2a404 */
  push32((uint32_t)(0x11e2a404u));
  /* 11dfcf01 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfcf03 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 11dfcf08 push 0x11e2a80c */
  push32((uint32_t)(0x11e2a80cu));
  /* 11dfcf0d push 2 */
  push32((uint32_t)(0x2u));
  /* 11dfcf0f call 0x11dfaa10 */
  push32(0x11dfcf14u); f_11dfaa10();
  /* 11dfcf14 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfcf17 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfcf1a jne 0x11dfcf1d */
  if (!C.zf) goto L_11dfcf1d;
  /* 11dfcf1c int3  */
  x86_unimpl("int3 @ 0x11dfcf1c");
L_11dfcf1d:;
  /* 11dfcf1d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11dfcf1f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dfcf21 jne 0x11dfceca */
  if (!C.zf) goto L_11dfceca;
  /* 11dfcf23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfcf26 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfcf29 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_11dfcf2c:;
  /* 11dfcf2c push 9 */
  push32((uint32_t)(0x9u));
  /* 11dfcf2e call 0x11dfbdf0 */
  push32(0x11dfcf33u); f_11dfbdf0();
  /* 11dfcf33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfcf36 pop edi */
  EDI = (pop32());
  /* 11dfcf37 pop esi */
  ESI = (pop32());
  /* 11dfcf38 pop ebx */
  EBX = (pop32());
  /* 11dfcf39 mov esp, ebp */
  ESP = (EBP);
  /* 11dfcf3b pop ebp */
  EBP = (pop32());
  /* 11dfcf3c ret  */
  ESPCHK(0x11dfcea0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf40 @ 0x11dfcf40 (28 bytes, 11 insns) */
void f_11dfcf40(void) {
  FTRACE(0x11dfcf40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfcf40 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfcf41 mov ebp, esp */
  EBP = (ESP);
  /* 11dfcf43 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfcf44 mov eax, dword ptr [0x11e2e250] */
  EAX = (r32((uint32_t)(0x11e2e250)));
  /* 11dfcf49 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11dfcf4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfcf4f mov dword ptr [0x11e2e250], ecx */
  w32((uint32_t)(0x11e2e250), (ECX));
  /* 11dfcf55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfcf58 mov esp, ebp */
  ESP = (EBP);
  /* 11dfcf5a pop ebp */
  EBP = (pop32());
  /* 11dfcf5b ret  */
  ESPCHK(0x11dfcf40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf60 @ 0x11dfcf60 (136 bytes, 55 insns) */
void f_11dfcf60(void) {
  FTRACE(0x11dfcf60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfcf60 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfcf61 mov ebp, esp */
  EBP = (ESP);
  /* 11dfcf63 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfcf64 push ebx */
  push32((uint32_t)(EBX));
  /* 11dfcf65 push esi */
  push32((uint32_t)(ESI));
  /* 11dfcf66 push edi */
  push32((uint32_t)(EDI));
  /* 11dfcf67 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_11dfcf6e:;
  /* 11dfcf6e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfcf71 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfcf74 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfcf77 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11dfcf7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfcf7c je 0x11dfcfde */
  if (C.zf) goto L_11dfcfde;
  /* 11dfcf7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfcf81 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dfcf83 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11dfcf85 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfcf88 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11dfcf8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfcf91 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfcf94 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11dfcf97 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfcf99 je 0x11dfcfdc */
  if (C.zf) goto L_11dfcfdc;
L_11dfcf9b:;
  /* 11dfcf9b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfcf9e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11dfcfa3 push eax */
  push32((uint32_t)(EAX));
  /* 11dfcfa4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfcfa7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11dfcfa9 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 11dfcfac push edx */
  push32((uint32_t)(EDX));
  /* 11dfcfad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfcfb0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfcfb3 push eax */
  push32((uint32_t)(EAX));
  /* 11dfcfb4 push 0x11e2aad0 */
  push32((uint32_t)(0x11e2aad0u));
  /* 11dfcfb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfcfbb push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfcfbd push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfcfbf push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfcfc1 call 0x11dfaa10 */
  push32(0x11dfcfc6u); f_11dfaa10();
  /* 11dfcfc6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfcfc9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfcfcc jne 0x11dfcfcf */
  if (!C.zf) goto L_11dfcfcf;
  /* 11dfcfce int3  */
  x86_unimpl("int3 @ 0x11dfcfce");
L_11dfcfcf:;
  /* 11dfcfcf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11dfcfd1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11dfcfd3 jne 0x11dfcf9b */
  if (!C.zf) goto L_11dfcf9b;
  /* 11dfcfd5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11dfcfdc:;
  /* 11dfcfdc jmp 0x11dfcf6e */
  goto L_11dfcf6e;
L_11dfcfde:;
  /* 11dfcfde mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfcfe1 pop edi */
  EDI = (pop32());
  /* 11dfcfe2 pop esi */
  ESI = (pop32());
  /* 11dfcfe3 pop ebx */
  EBX = (pop32());
  /* 11dfcfe4 mov esp, ebp */
  ESP = (EBP);
  /* 11dfcfe6 pop ebp */
  EBP = (pop32());
  /* 11dfcfe7 ret  */
  ESPCHK(0x11dfcf60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cff0 @ 0x11dfcff0 (863 bytes, 299 insns) [1 switch table(s)] */
void f_11dfcff0(void) {
  FTRACE(0x11dfcff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfcff0 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfcff1 mov ebp, esp */
  EBP = (ESP);
  /* 11dfcff3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfcff6 push ebx */
  push32((uint32_t)(EBX));
  /* 11dfcff7 push esi */
  push32((uint32_t)(ESI));
  /* 11dfcff8 push edi */
  push32((uint32_t)(EDI));
  /* 11dfcff9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11dfd000 mov eax, dword ptr [0x11e2df08] */
  EAX = (r32((uint32_t)(0x11e2df08)));
  /* 11dfd005 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11dfd008 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfd00a jne 0x11dfd016 */
  if (!C.zf) goto L_11dfd016;
  /* 11dfd00c mov eax, 1 */
  EAX = (0x1u);
  /* 11dfd011 jmp 0x11dfd348 */
  goto L_11dfd348;
L_11dfd016:;
  /* 11dfd016 push 9 */
  push32((uint32_t)(0x9u));
  /* 11dfd018 call 0x11dfbd50 */
  push32(0x11dfd01du); f_11dfbd50();
  /* 11dfd01d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfd020 call 0x11e03ac0 */
  push32(0x11dfd025u); f_11e03ac0();
  /* 11dfd025 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11dfd028 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd02c je 0x11dfd139 */
  if (C.zf) goto L_11dfd139;
  /* 11dfd032 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd036 je 0x11dfd139 */
  if (C.zf) goto L_11dfd139;
  /* 11dfd03c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11dfd03f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11dfd042 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11dfd045 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfd048 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11dfd04b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd04f ja 0x11dfd102 */
  if ((!C.cf&&!C.zf)) goto L_11dfd102;
  /* 11dfd055 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11dfd058 jmp dword ptr [eax*4 + 0x11dfd34f] */
  switch (EAX) {
    case 0: goto L_11dfd0da;
    case 1: goto L_11dfd0b2;
    case 2: goto L_11dfd08a;
    case 3: goto L_11dfd05f;
    default: x86_unimpl("switch@0x11dfd058 out of table"); return;
  }
L_11dfd05f:;
  /* 11dfd05f push 0x11e2ac24 */
  push32((uint32_t)(0x11e2ac24u));
  /* 11dfd064 push 0x11e2a7ac */
  push32((uint32_t)(0x11e2a7acu));
  /* 11dfd069 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd06b push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd06d push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd06f push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd071 call 0x11dfaa10 */
  push32(0x11dfd076u); f_11dfaa10();
  /* 11dfd076 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfd079 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd07c jne 0x11dfd07f */
  if (!C.zf) goto L_11dfd07f;
  /* 11dfd07e int3  */
  x86_unimpl("int3 @ 0x11dfd07e");
L_11dfd07f:;
  /* 11dfd07f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11dfd081 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11dfd083 jne 0x11dfd05f */
  if (!C.zf) goto L_11dfd05f;
  /* 11dfd085 jmp 0x11dfd128 */
  goto L_11dfd128;
L_11dfd08a:;
  /* 11dfd08a push 0x11e2ac00 */
  push32((uint32_t)(0x11e2ac00u));
  /* 11dfd08f push 0x11e2a7ac */
  push32((uint32_t)(0x11e2a7acu));
  /* 11dfd094 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd096 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd098 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd09a push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd09c call 0x11dfaa10 */
  push32(0x11dfd0a1u); f_11dfaa10();
  /* 11dfd0a1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfd0a4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd0a7 jne 0x11dfd0aa */
  if (!C.zf) goto L_11dfd0aa;
  /* 11dfd0a9 int3  */
  x86_unimpl("int3 @ 0x11dfd0a9");
L_11dfd0aa:;
  /* 11dfd0aa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11dfd0ac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dfd0ae jne 0x11dfd08a */
  if (!C.zf) goto L_11dfd08a;
  /* 11dfd0b0 jmp 0x11dfd128 */
  goto L_11dfd128;
L_11dfd0b2:;
  /* 11dfd0b2 push 0x11e2abdc */
  push32((uint32_t)(0x11e2abdcu));
  /* 11dfd0b7 push 0x11e2a7ac */
  push32((uint32_t)(0x11e2a7acu));
  /* 11dfd0bc push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd0be push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd0c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd0c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd0c4 call 0x11dfaa10 */
  push32(0x11dfd0c9u); f_11dfaa10();
  /* 11dfd0c9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfd0cc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd0cf jne 0x11dfd0d2 */
  if (!C.zf) goto L_11dfd0d2;
  /* 11dfd0d1 int3  */
  x86_unimpl("int3 @ 0x11dfd0d1");
L_11dfd0d2:;
  /* 11dfd0d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dfd0d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfd0d6 jne 0x11dfd0b2 */
  if (!C.zf) goto L_11dfd0b2;
  /* 11dfd0d8 jmp 0x11dfd128 */
  goto L_11dfd128;
L_11dfd0da:;
  /* 11dfd0da push 0x11e2abb8 */
  push32((uint32_t)(0x11e2abb8u));
  /* 11dfd0df push 0x11e2a7ac */
  push32((uint32_t)(0x11e2a7acu));
  /* 11dfd0e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd0e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd0e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd0ea push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd0ec call 0x11dfaa10 */
  push32(0x11dfd0f1u); f_11dfaa10();
  /* 11dfd0f1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfd0f4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd0f7 jne 0x11dfd0fa */
  if (!C.zf) goto L_11dfd0fa;
  /* 11dfd0f9 int3  */
  x86_unimpl("int3 @ 0x11dfd0f9");
L_11dfd0fa:;
  /* 11dfd0fa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11dfd0fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11dfd0fe jne 0x11dfd0da */
  if (!C.zf) goto L_11dfd0da;
  /* 11dfd100 jmp 0x11dfd128 */
  goto L_11dfd128;
L_11dfd102:;
  /* 11dfd102 push 0x11e2ab8c */
  push32((uint32_t)(0x11e2ab8cu));
  /* 11dfd107 push 0x11e2a7ac */
  push32((uint32_t)(0x11e2a7acu));
  /* 11dfd10c push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd10e push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd110 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd112 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd114 call 0x11dfaa10 */
  push32(0x11dfd119u); f_11dfaa10();
  /* 11dfd119 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfd11c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd11f jne 0x11dfd122 */
  if (!C.zf) goto L_11dfd122;
  /* 11dfd121 int3  */
  x86_unimpl("int3 @ 0x11dfd121");
L_11dfd122:;
  /* 11dfd122 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11dfd124 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dfd126 jne 0x11dfd102 */
  if (!C.zf) goto L_11dfd102;
L_11dfd128:;
  /* 11dfd128 push 9 */
  push32((uint32_t)(0x9u));
  /* 11dfd12a call 0x11dfbdf0 */
  push32(0x11dfd12fu); f_11dfbdf0();
  /* 11dfd12f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfd132 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dfd134 jmp 0x11dfd348 */
  goto L_11dfd348;
L_11dfd139:;
  /* 11dfd139 mov eax, dword ptr [0x11e30680] */
  EAX = (r32((uint32_t)(0x11e30680)));
  /* 11dfd13e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11dfd141 jmp 0x11dfd14b */
  goto L_11dfd14b;
L_11dfd143:;
  /* 11dfd143 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfd146 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11dfd148 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11dfd14b:;
  /* 11dfd14b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd14f je 0x11dfd33b */
  if (C.zf) goto L_11dfd33b;
  /* 11dfd155 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11dfd15c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfd15f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11dfd162 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11dfd168 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd16b je 0x11dfd190 */
  if (C.zf) goto L_11dfd190;
  /* 11dfd16d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfd170 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd174 je 0x11dfd190 */
  if (C.zf) goto L_11dfd190;
  /* 11dfd176 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfd179 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11dfd17c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11dfd182 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd185 je 0x11dfd190 */
  if (C.zf) goto L_11dfd190;
  /* 11dfd187 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfd18a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd18e jne 0x11dfd1a8 */
  if (!C.zf) goto L_11dfd1a8;
L_11dfd190:;
  /* 11dfd190 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfd193 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11dfd196 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11dfd19c mov edx, dword ptr [ecx*4 + 0x11e2df18] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11e2df18)));
  /* 11dfd1a3 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11dfd1a6 jmp 0x11dfd1af */
  goto L_11dfd1af;
L_11dfd1a8:;
  /* 11dfd1a8 mov dword ptr [ebp - 0x14], 0x11e2ab84 */
  w32((uint32_t)(EBP + -0x14), (0x11e2ab84u));
L_11dfd1af:;
  /* 11dfd1af push 4 */
  push32((uint32_t)(0x4u));
  /* 11dfd1b1 mov al, byte ptr [0x11e2df14] */
  AL = (r8((uint32_t)(0x11e2df14)));
  /* 11dfd1b6 push eax */
  push32((uint32_t)(EAX));
  /* 11dfd1b7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfd1ba add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfd1bd push ecx */
  push32((uint32_t)(ECX));
  /* 11dfd1be call 0x11dfcf60 */
  push32(0x11dfd1c3u); f_11dfcf60();
  /* 11dfd1c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfd1c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfd1c8 jne 0x11dfd204 */
  if (!C.zf) goto L_11dfd204;
L_11dfd1ca:;
  /* 11dfd1ca mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfd1cd add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfd1d0 push edx */
  push32((uint32_t)(EDX));
  /* 11dfd1d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfd1d4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11dfd1d7 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfd1d8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11dfd1db push edx */
  push32((uint32_t)(EDX));
  /* 11dfd1dc push 0x11e2aa88 */
  push32((uint32_t)(0x11e2aa88u));
  /* 11dfd1e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd1e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd1e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd1e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd1e9 call 0x11dfaa10 */
  push32(0x11dfd1eeu); f_11dfaa10();
  /* 11dfd1ee add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfd1f1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd1f4 jne 0x11dfd1f7 */
  if (!C.zf) goto L_11dfd1f7;
  /* 11dfd1f6 int3  */
  x86_unimpl("int3 @ 0x11dfd1f6");
L_11dfd1f7:;
  /* 11dfd1f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dfd1f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfd1fb jne 0x11dfd1ca */
  if (!C.zf) goto L_11dfd1ca;
  /* 11dfd1fd mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11dfd204:;
  /* 11dfd204 push 4 */
  push32((uint32_t)(0x4u));
  /* 11dfd206 mov cl, byte ptr [0x11e2df14] */
  CL = (r8((uint32_t)(0x11e2df14)));
  /* 11dfd20c push ecx */
  push32((uint32_t)(ECX));
  /* 11dfd20d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfd210 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11dfd213 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfd216 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 11dfd21a push edx */
  push32((uint32_t)(EDX));
  /* 11dfd21b call 0x11dfcf60 */
  push32(0x11dfd220u); f_11dfcf60();
  /* 11dfd220 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfd223 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfd225 jne 0x11dfd261 */
  if (!C.zf) goto L_11dfd261;
L_11dfd227:;
  /* 11dfd227 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfd22a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfd22d push eax */
  push32((uint32_t)(EAX));
  /* 11dfd22e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfd231 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11dfd234 push edx */
  push32((uint32_t)(EDX));
  /* 11dfd235 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11dfd238 push eax */
  push32((uint32_t)(EAX));
  /* 11dfd239 push 0x11e2aa5c */
  push32((uint32_t)(0x11e2aa5cu));
  /* 11dfd23e push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd240 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd242 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd244 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd246 call 0x11dfaa10 */
  push32(0x11dfd24bu); f_11dfaa10();
  /* 11dfd24b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfd24e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd251 jne 0x11dfd254 */
  if (!C.zf) goto L_11dfd254;
  /* 11dfd253 int3  */
  x86_unimpl("int3 @ 0x11dfd253");
L_11dfd254:;
  /* 11dfd254 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11dfd256 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11dfd258 jne 0x11dfd227 */
  if (!C.zf) goto L_11dfd227;
  /* 11dfd25a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11dfd261:;
  /* 11dfd261 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfd264 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd268 jne 0x11dfd2ba */
  if (!C.zf) goto L_11dfd2ba;
  /* 11dfd26a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfd26d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11dfd270 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfd271 mov dl, byte ptr [0x11e2df15] */
  DL = (r8((uint32_t)(0x11e2df15)));
  /* 11dfd277 push edx */
  push32((uint32_t)(EDX));
  /* 11dfd278 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfd27b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfd27e push eax */
  push32((uint32_t)(EAX));
  /* 11dfd27f call 0x11dfcf60 */
  push32(0x11dfd284u); f_11dfcf60();
  /* 11dfd284 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfd287 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfd289 jne 0x11dfd2ba */
  if (!C.zf) goto L_11dfd2ba;
L_11dfd28b:;
  /* 11dfd28b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfd28e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfd291 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfd292 push 0x11e2ab58 */
  push32((uint32_t)(0x11e2ab58u));
  /* 11dfd297 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd299 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd29b push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd29d push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd29f call 0x11dfaa10 */
  push32(0x11dfd2a4u); f_11dfaa10();
  /* 11dfd2a4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfd2a7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd2aa jne 0x11dfd2ad */
  if (!C.zf) goto L_11dfd2ad;
  /* 11dfd2ac int3  */
  x86_unimpl("int3 @ 0x11dfd2ac");
L_11dfd2ad:;
  /* 11dfd2ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11dfd2af test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dfd2b1 jne 0x11dfd28b */
  if (!C.zf) goto L_11dfd28b;
  /* 11dfd2b3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11dfd2ba:;
  /* 11dfd2ba cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd2be jne 0x11dfd336 */
  if (!C.zf) goto L_11dfd336;
  /* 11dfd2c0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfd2c3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd2c7 je 0x11dfd2fc */
  if (C.zf) goto L_11dfd2fc;
L_11dfd2c9:;
  /* 11dfd2c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfd2cc mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11dfd2cf push edx */
  push32((uint32_t)(EDX));
  /* 11dfd2d0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfd2d3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11dfd2d6 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfd2d7 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11dfd2da push edx */
  push32((uint32_t)(EDX));
  /* 11dfd2db push 0x11e2ab38 */
  push32((uint32_t)(0x11e2ab38u));
  /* 11dfd2e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd2e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd2e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd2e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd2e8 call 0x11dfaa10 */
  push32(0x11dfd2edu); f_11dfaa10();
  /* 11dfd2ed add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfd2f0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd2f3 jne 0x11dfd2f6 */
  if (!C.zf) goto L_11dfd2f6;
  /* 11dfd2f5 int3  */
  x86_unimpl("int3 @ 0x11dfd2f5");
L_11dfd2f6:;
  /* 11dfd2f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dfd2f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfd2fa jne 0x11dfd2c9 */
  if (!C.zf) goto L_11dfd2c9;
L_11dfd2fc:;
  /* 11dfd2fc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfd2ff mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11dfd302 push edx */
  push32((uint32_t)(EDX));
  /* 11dfd303 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfd306 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfd309 push eax */
  push32((uint32_t)(EAX));
  /* 11dfd30a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11dfd30d push ecx */
  push32((uint32_t)(ECX));
  /* 11dfd30e push 0x11e2ab0c */
  push32((uint32_t)(0x11e2ab0cu));
  /* 11dfd313 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd315 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd317 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd319 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd31b call 0x11dfaa10 */
  push32(0x11dfd320u); f_11dfaa10();
  /* 11dfd320 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfd323 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd326 jne 0x11dfd329 */
  if (!C.zf) goto L_11dfd329;
  /* 11dfd328 int3  */
  x86_unimpl("int3 @ 0x11dfd328");
L_11dfd329:;
  /* 11dfd329 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11dfd32b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dfd32d jne 0x11dfd2fc */
  if (!C.zf) goto L_11dfd2fc;
  /* 11dfd32f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11dfd336:;
  /* 11dfd336 jmp 0x11dfd143 */
  goto L_11dfd143;
L_11dfd33b:;
  /* 11dfd33b push 9 */
  push32((uint32_t)(0x9u));
  /* 11dfd33d call 0x11dfbdf0 */
  push32(0x11dfd342u); f_11dfbdf0();
  /* 11dfd342 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfd345 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11dfd348:;
  /* 11dfd348 pop edi */
  EDI = (pop32());
  /* 11dfd349 pop esi */
  ESI = (pop32());
  /* 11dfd34a pop ebx */
  EBX = (pop32());
  /* 11dfd34b mov esp, ebp */
  ESP = (EBP);
  /* 11dfd34d pop ebp */
  EBP = (pop32());
  /* 11dfd34e ret  */
  ESPCHK(0x11dfcff0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d360 @ 0x11dfd360 (34 bytes, 13 insns) */
void f_11dfd360(void) {
  FTRACE(0x11dfd360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfd360 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfd361 mov ebp, esp */
  EBP = (ESP);
  /* 11dfd363 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfd364 mov eax, dword ptr [0x11e2df08] */
  EAX = (r32((uint32_t)(0x11e2df08)));
  /* 11dfd369 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11dfd36c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd370 je 0x11dfd37b */
  if (C.zf) goto L_11dfd37b;
  /* 11dfd372 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfd375 mov dword ptr [0x11e2df08], ecx */
  w32((uint32_t)(0x11e2df08), (ECX));
L_11dfd37b:;
  /* 11dfd37b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfd37e mov esp, ebp */
  ESP = (EBP);
  /* 11dfd380 pop ebp */
  EBP = (pop32());
  /* 11dfd381 ret  */
  ESPCHK(0x11dfd360u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d390 @ 0x11dfd390 (103 bytes, 38 insns) */
void f_11dfd390(void) {
  FTRACE(0x11dfd390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfd390 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfd391 mov ebp, esp */
  EBP = (ESP);
  /* 11dfd393 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfd394 mov eax, dword ptr [0x11e2df08] */
  EAX = (r32((uint32_t)(0x11e2df08)));
  /* 11dfd399 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11dfd39c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfd39e jne 0x11dfd3a2 */
  if (!C.zf) goto L_11dfd3a2;
  /* 11dfd3a0 jmp 0x11dfd3f3 */
  goto L_11dfd3f3;
L_11dfd3a2:;
  /* 11dfd3a2 push 9 */
  push32((uint32_t)(0x9u));
  /* 11dfd3a4 call 0x11dfbd50 */
  push32(0x11dfd3a9u); f_11dfbd50();
  /* 11dfd3a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfd3ac mov ecx, dword ptr [0x11e30680] */
  ECX = (r32((uint32_t)(0x11e30680)));
  /* 11dfd3b2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11dfd3b5 jmp 0x11dfd3bf */
  goto L_11dfd3bf;
L_11dfd3b7:;
  /* 11dfd3b7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfd3ba mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11dfd3bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11dfd3bf:;
  /* 11dfd3bf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd3c3 je 0x11dfd3e9 */
  if (C.zf) goto L_11dfd3e9;
  /* 11dfd3c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfd3c8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11dfd3cb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11dfd3d1 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd3d4 jne 0x11dfd3e7 */
  if (!C.zf) goto L_11dfd3e7;
  /* 11dfd3d6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfd3d9 push eax */
  push32((uint32_t)(EAX));
  /* 11dfd3da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfd3dd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfd3e0 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfd3e1 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x11dfd3e4u);
  /* 11dfd3e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dfd3e7:;
  /* 11dfd3e7 jmp 0x11dfd3b7 */
  goto L_11dfd3b7;
L_11dfd3e9:;
  /* 11dfd3e9 push 9 */
  push32((uint32_t)(0x9u));
  /* 11dfd3eb call 0x11dfbdf0 */
  push32(0x11dfd3f0u); f_11dfbdf0();
  /* 11dfd3f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dfd3f3:;
  /* 11dfd3f3 mov esp, ebp */
  ESP = (EBP);
  /* 11dfd3f5 pop ebp */
  EBP = (pop32());
  /* 11dfd3f6 ret  */
  ESPCHK(0x11dfd390u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x11dfd400 (75 bytes, 28 insns) */
void f_11dfd400(void) {
  FTRACE(0x11dfd400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfd400 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfd401 mov ebp, esp */
  EBP = (ESP);
  /* 11dfd403 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfd404 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd408 je 0x11dfd43d */
  if (C.zf) goto L_11dfd43d;
  /* 11dfd40a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfd40d push eax */
  push32((uint32_t)(EAX));
  /* 11dfd40e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfd411 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfd412 call dword ptr [0x11e333ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333ec))), 0x11dfd418u);
  /* 11dfd418 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfd41a jne 0x11dfd43d */
  if (!C.zf) goto L_11dfd43d;
  /* 11dfd41c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd420 je 0x11dfd434 */
  if (C.zf) goto L_11dfd434;
  /* 11dfd422 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfd425 push edx */
  push32((uint32_t)(EDX));
  /* 11dfd426 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfd429 push eax */
  push32((uint32_t)(EAX));
  /* 11dfd42a call dword ptr [0x11e33404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33404))), 0x11dfd430u);
  /* 11dfd430 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfd432 jne 0x11dfd43d */
  if (!C.zf) goto L_11dfd43d;
L_11dfd434:;
  /* 11dfd434 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11dfd43b jmp 0x11dfd444 */
  goto L_11dfd444;
L_11dfd43d:;
  /* 11dfd43d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11dfd444:;
  /* 11dfd444 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfd447 mov esp, ebp */
  ESP = (EBP);
  /* 11dfd449 pop ebp */
  EBP = (pop32());
  /* 11dfd44a ret  */
  ESPCHK(0x11dfd400u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d450 @ 0x11dfd450 (134 bytes, 50 insns) */
void f_11dfd450(void) {
  FTRACE(0x11dfd450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfd450 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfd451 mov ebp, esp */
  EBP = (ESP);
  /* 11dfd453 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfd454 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd458 jne 0x11dfd45e */
  if (!C.zf) goto L_11dfd45e;
  /* 11dfd45a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dfd45c jmp 0x11dfd4d2 */
  goto L_11dfd4d2;
L_11dfd45e:;
  /* 11dfd45e push 1 */
  push32((uint32_t)(0x1u));
  /* 11dfd460 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11dfd462 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfd465 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfd468 push eax */
  push32((uint32_t)(EAX));
  /* 11dfd469 call 0x11dfd400 */
  push32(0x11dfd46eu); f_11dfd400();
  /* 11dfd46e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfd471 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfd473 jne 0x11dfd479 */
  if (!C.zf) goto L_11dfd479;
  /* 11dfd475 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dfd477 jmp 0x11dfd4d2 */
  goto L_11dfd4d2;
L_11dfd479:;
  /* 11dfd479 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfd47c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfd47f push ecx */
  push32((uint32_t)(ECX));
  /* 11dfd480 call 0x11e03be0 */
  push32(0x11dfd485u); f_11e03be0();
  /* 11dfd485 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfd488 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11dfd48b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd48f je 0x11dfd4a6 */
  if (C.zf) goto L_11dfd4a6;
  /* 11dfd491 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfd494 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfd497 push edx */
  push32((uint32_t)(EDX));
  /* 11dfd498 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfd49b push eax */
  push32((uint32_t)(EAX));
  /* 11dfd49c call 0x11e03c40 */
  push32(0x11dfd4a1u); f_11e03c40();
  /* 11dfd4a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfd4a4 jmp 0x11dfd4d2 */
  goto L_11dfd4d2;
L_11dfd4a6:;
  /* 11dfd4a6 mov ecx, dword ptr [0x11e30690] */
  ECX = (r32((uint32_t)(0x11e30690)));
  /* 11dfd4ac and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11dfd4b2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11dfd4b4 je 0x11dfd4bd */
  if (C.zf) goto L_11dfd4bd;
  /* 11dfd4b6 mov eax, 1 */
  EAX = (0x1u);
  /* 11dfd4bb jmp 0x11dfd4d2 */
  goto L_11dfd4d2;
L_11dfd4bd:;
  /* 11dfd4bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfd4c0 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfd4c3 push edx */
  push32((uint32_t)(EDX));
  /* 11dfd4c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd4c6 mov eax, dword ptr [0x11e31fc8] */
  EAX = (r32((uint32_t)(0x11e31fc8)));
  /* 11dfd4cb push eax */
  push32((uint32_t)(EAX));
  /* 11dfd4cc call dword ptr [0x11e33408] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33408))), 0x11dfd4d2u);
L_11dfd4d2:;
  /* 11dfd4d2 mov esp, ebp */
  ESP = (EBP);
  /* 11dfd4d4 pop ebp */
  EBP = (pop32());
  /* 11dfd4d5 ret  */
  ESPCHK(0x11dfd450u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d4e0 @ 0x11dfd4e0 (227 bytes, 80 insns) */
void f_11dfd4e0(void) {
  FTRACE(0x11dfd4e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfd4e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfd4e1 mov ebp, esp */
  EBP = (ESP);
  /* 11dfd4e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfd4e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfd4e7 push eax */
  push32((uint32_t)(EAX));
  /* 11dfd4e8 call 0x11dfd450 */
  push32(0x11dfd4edu); f_11dfd450();
  /* 11dfd4ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfd4f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfd4f2 jne 0x11dfd4fb */
  if (!C.zf) goto L_11dfd4fb;
  /* 11dfd4f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dfd4f6 jmp 0x11dfd5bf */
  goto L_11dfd5bf;
L_11dfd4fb:;
  /* 11dfd4fb push 9 */
  push32((uint32_t)(0x9u));
  /* 11dfd4fd call 0x11dfbd50 */
  push32(0x11dfd502u); f_11dfbd50();
  /* 11dfd502 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfd505 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfd508 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfd50b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11dfd50e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfd511 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11dfd514 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11dfd519 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd51c je 0x11dfd540 */
  if (C.zf) goto L_11dfd540;
  /* 11dfd51e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfd521 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd525 je 0x11dfd540 */
  if (C.zf) goto L_11dfd540;
  /* 11dfd527 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfd52a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11dfd52d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11dfd532 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd535 je 0x11dfd540 */
  if (C.zf) goto L_11dfd540;
  /* 11dfd537 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfd53a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd53e jne 0x11dfd5b3 */
  if (!C.zf) goto L_11dfd5b3;
L_11dfd540:;
  /* 11dfd540 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dfd542 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfd545 push edx */
  push32((uint32_t)(EDX));
  /* 11dfd546 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfd549 push eax */
  push32((uint32_t)(EAX));
  /* 11dfd54a call 0x11dfd400 */
  push32(0x11dfd54fu); f_11dfd400();
  /* 11dfd54f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfd552 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfd554 je 0x11dfd5b3 */
  if (C.zf) goto L_11dfd5b3;
  /* 11dfd556 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfd559 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11dfd55c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd55f jne 0x11dfd5b3 */
  if (!C.zf) goto L_11dfd5b3;
  /* 11dfd561 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfd564 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11dfd567 cmp ecx, dword ptr [0x11e2df0c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11e2df0c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd56d jg 0x11dfd5b3 */
  if ((!C.zf&&C.sf==C.of)) goto L_11dfd5b3;
  /* 11dfd56f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd573 je 0x11dfd580 */
  if (C.zf) goto L_11dfd580;
  /* 11dfd575 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfd578 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfd57b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11dfd57e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11dfd580:;
  /* 11dfd580 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd584 je 0x11dfd591 */
  if (C.zf) goto L_11dfd591;
  /* 11dfd586 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dfd589 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfd58c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11dfd58f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11dfd591:;
  /* 11dfd591 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd595 je 0x11dfd5a2 */
  if (C.zf) goto L_11dfd5a2;
  /* 11dfd597 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11dfd59a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfd59d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11dfd5a0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11dfd5a2:;
  /* 11dfd5a2 push 9 */
  push32((uint32_t)(0x9u));
  /* 11dfd5a4 call 0x11dfbdf0 */
  push32(0x11dfd5a9u); f_11dfbdf0();
  /* 11dfd5a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfd5ac mov eax, 1 */
  EAX = (0x1u);
  /* 11dfd5b1 jmp 0x11dfd5bf */
  goto L_11dfd5bf;
L_11dfd5b3:;
  /* 11dfd5b3 push 9 */
  push32((uint32_t)(0x9u));
  /* 11dfd5b5 call 0x11dfbdf0 */
  push32(0x11dfd5bau); f_11dfbdf0();
  /* 11dfd5ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfd5bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11dfd5bf:;
  /* 11dfd5bf mov esp, ebp */
  ESP = (EBP);
  /* 11dfd5c1 pop ebp */
  EBP = (pop32());
  /* 11dfd5c2 ret  */
  ESPCHK(0x11dfd4e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d5d0 @ 0x11dfd5d0 (28 bytes, 11 insns) */
void f_11dfd5d0(void) {
  FTRACE(0x11dfd5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfd5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfd5d1 mov ebp, esp */
  EBP = (ESP);
  /* 11dfd5d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfd5d4 mov eax, dword ptr [0x11e3213c] */
  EAX = (r32((uint32_t)(0x11e3213c)));
  /* 11dfd5d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11dfd5dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfd5df mov dword ptr [0x11e3213c], ecx */
  w32((uint32_t)(0x11e3213c), (ECX));
  /* 11dfd5e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfd5e8 mov esp, ebp */
  ESP = (EBP);
  /* 11dfd5ea pop ebp */
  EBP = (pop32());
  /* 11dfd5eb ret  */
  ESPCHK(0x11dfd5d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d5f0 @ 0x11dfd5f0 (362 bytes, 116 insns) */
void f_11dfd5f0(void) {
  FTRACE(0x11dfd5f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfd5f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfd5f1 mov ebp, esp */
  EBP = (ESP);
  /* 11dfd5f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfd5f6 push ebx */
  push32((uint32_t)(EBX));
  /* 11dfd5f7 push esi */
  push32((uint32_t)(ESI));
  /* 11dfd5f8 push edi */
  push32((uint32_t)(EDI));
  /* 11dfd5f9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd5fd jne 0x11dfd62a */
  if (!C.zf) goto L_11dfd62a;
L_11dfd5ff:;
  /* 11dfd5ff push 0x11e2ac6c */
  push32((uint32_t)(0x11e2ac6cu));
  /* 11dfd604 push 0x11e2a7ac */
  push32((uint32_t)(0x11e2a7acu));
  /* 11dfd609 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd60b push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd60d push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd60f push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd611 call 0x11dfaa10 */
  push32(0x11dfd616u); f_11dfaa10();
  /* 11dfd616 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfd619 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd61c jne 0x11dfd61f */
  if (!C.zf) goto L_11dfd61f;
  /* 11dfd61e int3  */
  x86_unimpl("int3 @ 0x11dfd61e");
L_11dfd61f:;
  /* 11dfd61f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dfd621 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfd623 jne 0x11dfd5ff */
  if (!C.zf) goto L_11dfd5ff;
  /* 11dfd625 jmp 0x11dfd753 */
  goto L_11dfd753;
L_11dfd62a:;
  /* 11dfd62a push 9 */
  push32((uint32_t)(0x9u));
  /* 11dfd62c call 0x11dfbd50 */
  push32(0x11dfd631u); f_11dfbd50();
  /* 11dfd631 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfd634 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfd637 mov edx, dword ptr [0x11e30680] */
  EDX = (r32((uint32_t)(0x11e30680)));
  /* 11dfd63d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11dfd63f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11dfd646 jmp 0x11dfd651 */
  goto L_11dfd651;
L_11dfd648:;
  /* 11dfd648 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfd64b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfd64e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11dfd651:;
  /* 11dfd651 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd655 jge 0x11dfd675 */
  if ((C.sf==C.of)) goto L_11dfd675;
  /* 11dfd657 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfd65a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfd65d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 11dfd665 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfd668 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfd66b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 11dfd673 jmp 0x11dfd648 */
  goto L_11dfd648;
L_11dfd675:;
  /* 11dfd675 mov edx, dword ptr [0x11e30680] */
  EDX = (r32((uint32_t)(0x11e30680)));
  /* 11dfd67b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11dfd67e jmp 0x11dfd688 */
  goto L_11dfd688;
L_11dfd680:;
  /* 11dfd680 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfd683 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11dfd685 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11dfd688:;
  /* 11dfd688 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd68c je 0x11dfd731 */
  if (C.zf) goto L_11dfd731;
  /* 11dfd692 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfd695 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11dfd698 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11dfd69d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfd69f jl 0x11dfd707 */
  if ((C.sf!=C.of)) goto L_11dfd707;
  /* 11dfd6a1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfd6a4 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11dfd6a7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11dfd6ad cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd6b0 jge 0x11dfd707 */
  if ((C.sf==C.of)) goto L_11dfd707;
  /* 11dfd6b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfd6b5 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11dfd6b8 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11dfd6be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfd6c1 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 11dfd6c5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfd6c8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfd6cb mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11dfd6ce and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11dfd6d4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfd6d7 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 11dfd6db mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfd6de mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11dfd6e1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11dfd6e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfd6e9 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 11dfd6ed mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfd6f0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfd6f3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfd6f6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 11dfd6f9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11dfd6fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfd701 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 11dfd705 jmp 0x11dfd72c */
  goto L_11dfd72c;
L_11dfd707:;
  /* 11dfd707 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfd70a push edx */
  push32((uint32_t)(EDX));
  /* 11dfd70b push 0x11e2ac48 */
  push32((uint32_t)(0x11e2ac48u));
  /* 11dfd710 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd712 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd714 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd716 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd718 call 0x11dfaa10 */
  push32(0x11dfd71du); f_11dfaa10();
  /* 11dfd71d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfd720 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd723 jne 0x11dfd726 */
  if (!C.zf) goto L_11dfd726;
  /* 11dfd725 int3  */
  x86_unimpl("int3 @ 0x11dfd725");
L_11dfd726:;
  /* 11dfd726 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dfd728 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfd72a jne 0x11dfd707 */
  if (!C.zf) goto L_11dfd707;
L_11dfd72c:;
  /* 11dfd72c jmp 0x11dfd680 */
  goto L_11dfd680;
L_11dfd731:;
  /* 11dfd731 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfd734 mov edx, dword ptr [0x11e30688] */
  EDX = (r32((uint32_t)(0x11e30688)));
  /* 11dfd73a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 11dfd73d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfd740 mov ecx, dword ptr [0x11e3067c] */
  ECX = (r32((uint32_t)(0x11e3067c)));
  /* 11dfd746 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 11dfd749 push 9 */
  push32((uint32_t)(0x9u));
  /* 11dfd74b call 0x11dfbdf0 */
  push32(0x11dfd750u); f_11dfbdf0();
  /* 11dfd750 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dfd753:;
  /* 11dfd753 pop edi */
  EDI = (pop32());
  /* 11dfd754 pop esi */
  ESI = (pop32());
  /* 11dfd755 pop ebx */
  EBX = (pop32());
  /* 11dfd756 mov esp, ebp */
  ESP = (EBP);
  /* 11dfd758 pop ebp */
  EBP = (pop32());
  /* 11dfd759 ret  */
  ESPCHK(0x11dfd5f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d760 @ 0x11dfd760 (291 bytes, 95 insns) */
void f_11dfd760(void) {
  FTRACE(0x11dfd760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfd760 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfd761 mov ebp, esp */
  EBP = (ESP);
  /* 11dfd763 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfd766 push ebx */
  push32((uint32_t)(EBX));
  /* 11dfd767 push esi */
  push32((uint32_t)(ESI));
  /* 11dfd768 push edi */
  push32((uint32_t)(EDI));
  /* 11dfd769 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11dfd770 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd774 je 0x11dfd782 */
  if (C.zf) goto L_11dfd782;
  /* 11dfd776 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd77a je 0x11dfd782 */
  if (C.zf) goto L_11dfd782;
  /* 11dfd77c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd780 jne 0x11dfd7b0 */
  if (!C.zf) goto L_11dfd7b0;
L_11dfd782:;
  /* 11dfd782 push 0x11e2ac94 */
  push32((uint32_t)(0x11e2ac94u));
  /* 11dfd787 push 0x11e2a7ac */
  push32((uint32_t)(0x11e2a7acu));
  /* 11dfd78c push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd78e push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd790 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd792 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd794 call 0x11dfaa10 */
  push32(0x11dfd799u); f_11dfaa10();
  /* 11dfd799 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfd79c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd79f jne 0x11dfd7a2 */
  if (!C.zf) goto L_11dfd7a2;
  /* 11dfd7a1 int3  */
  x86_unimpl("int3 @ 0x11dfd7a1");
L_11dfd7a2:;
  /* 11dfd7a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dfd7a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfd7a6 jne 0x11dfd782 */
  if (!C.zf) goto L_11dfd782;
  /* 11dfd7a8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfd7ab jmp 0x11dfd87c */
  goto L_11dfd87c;
L_11dfd7b0:;
  /* 11dfd7b0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11dfd7b7 jmp 0x11dfd7c2 */
  goto L_11dfd7c2;
L_11dfd7b9:;
  /* 11dfd7b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfd7bc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfd7bf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11dfd7c2:;
  /* 11dfd7c2 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd7c6 jge 0x11dfd84c */
  if ((C.sf==C.of)) goto L_11dfd84c;
  /* 11dfd7cc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfd7cf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfd7d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfd7d5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfd7d8 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 11dfd7dc sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfd7e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfd7e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfd7e6 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 11dfd7ea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfd7ed mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfd7f0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfd7f3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfd7f6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 11dfd7fa sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfd7fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfd801 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfd804 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 11dfd808 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfd80b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfd80e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd813 jne 0x11dfd822 */
  if (!C.zf) goto L_11dfd822;
  /* 11dfd815 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfd818 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfd81b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd820 je 0x11dfd847 */
  if (C.zf) goto L_11dfd847;
L_11dfd822:;
  /* 11dfd822 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd826 je 0x11dfd847 */
  if (C.zf) goto L_11dfd847;
  /* 11dfd828 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd82c jne 0x11dfd840 */
  if (!C.zf) goto L_11dfd840;
  /* 11dfd82e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd832 jne 0x11dfd847 */
  if (!C.zf) goto L_11dfd847;
  /* 11dfd834 mov eax, dword ptr [0x11e2df08] */
  EAX = (r32((uint32_t)(0x11e2df08)));
  /* 11dfd839 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11dfd83c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfd83e je 0x11dfd847 */
  if (C.zf) goto L_11dfd847;
L_11dfd840:;
  /* 11dfd840 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11dfd847:;
  /* 11dfd847 jmp 0x11dfd7b9 */
  goto L_11dfd7b9;
L_11dfd84c:;
  /* 11dfd84c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfd84f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfd852 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 11dfd855 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfd858 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfd85b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 11dfd85e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfd861 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfd864 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 11dfd867 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfd86a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfd86d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 11dfd870 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfd873 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11dfd879 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11dfd87c:;
  /* 11dfd87c pop edi */
  EDI = (pop32());
  /* 11dfd87d pop esi */
  ESI = (pop32());
  /* 11dfd87e pop ebx */
  EBX = (pop32());
  /* 11dfd87f mov esp, ebp */
  ESP = (EBP);
  /* 11dfd881 pop ebp */
  EBP = (pop32());
  /* 11dfd882 ret  */
  ESPCHK(0x11dfd760u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d890 @ 0x11dfd890 (697 bytes, 253 insns) */
void f_11dfd890(void) {
  FTRACE(0x11dfd890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfd890 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfd891 mov ebp, esp */
  EBP = (ESP);
  /* 11dfd893 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfd896 push ebx */
  push32((uint32_t)(EBX));
  /* 11dfd897 push esi */
  push32((uint32_t)(ESI));
  /* 11dfd898 push edi */
  push32((uint32_t)(EDI));
  /* 11dfd899 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11dfd8a0 push 9 */
  push32((uint32_t)(0x9u));
  /* 11dfd8a2 call 0x11dfbd50 */
  push32(0x11dfd8a7u); f_11dfbd50();
  /* 11dfd8a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dfd8aa:;
  /* 11dfd8aa push 0x11e2ad8c */
  push32((uint32_t)(0x11e2ad8cu));
  /* 11dfd8af push 0x11e2a7ac */
  push32((uint32_t)(0x11e2a7acu));
  /* 11dfd8b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd8b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd8b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd8ba push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd8bc call 0x11dfaa10 */
  push32(0x11dfd8c1u); f_11dfaa10();
  /* 11dfd8c1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfd8c4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd8c7 jne 0x11dfd8ca */
  if (!C.zf) goto L_11dfd8ca;
  /* 11dfd8c9 int3  */
  x86_unimpl("int3 @ 0x11dfd8c9");
L_11dfd8ca:;
  /* 11dfd8ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dfd8cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfd8ce jne 0x11dfd8aa */
  if (!C.zf) goto L_11dfd8aa;
  /* 11dfd8d0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd8d4 je 0x11dfd8de */
  if (C.zf) goto L_11dfd8de;
  /* 11dfd8d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfd8d9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11dfd8db mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11dfd8de:;
  /* 11dfd8de mov eax, dword ptr [0x11e30680] */
  EAX = (r32((uint32_t)(0x11e30680)));
  /* 11dfd8e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11dfd8e6 jmp 0x11dfd8f0 */
  goto L_11dfd8f0;
L_11dfd8e8:;
  /* 11dfd8e8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfd8eb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11dfd8ed mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11dfd8f0:;
  /* 11dfd8f0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd8f4 je 0x11dfdb12 */
  if (C.zf) goto L_11dfdb12;
  /* 11dfd8fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfd8fd cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd900 je 0x11dfdb12 */
  if (C.zf) goto L_11dfdb12;
  /* 11dfd906 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfd909 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11dfd90c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11dfd912 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd915 je 0x11dfd944 */
  if (C.zf) goto L_11dfd944;
  /* 11dfd917 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfd91a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11dfd91d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11dfd923 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11dfd925 je 0x11dfd944 */
  if (C.zf) goto L_11dfd944;
  /* 11dfd927 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfd92a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11dfd92d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11dfd932 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd935 jne 0x11dfd949 */
  if (!C.zf) goto L_11dfd949;
  /* 11dfd937 mov ecx, dword ptr [0x11e2df08] */
  ECX = (r32((uint32_t)(0x11e2df08)));
  /* 11dfd93d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11dfd940 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11dfd942 jne 0x11dfd949 */
  if (!C.zf) goto L_11dfd949;
L_11dfd944:;
  /* 11dfd944 jmp 0x11dfdb0d */
  goto L_11dfdb0d;
L_11dfd949:;
  /* 11dfd949 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfd94c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd950 je 0x11dfd9c2 */
  if (C.zf) goto L_11dfd9c2;
  /* 11dfd952 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd954 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dfd956 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfd959 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11dfd95c push ecx */
  push32((uint32_t)(ECX));
  /* 11dfd95d call 0x11dfd400 */
  push32(0x11dfd962u); f_11dfd400();
  /* 11dfd962 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfd965 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfd967 jne 0x11dfd993 */
  if (!C.zf) goto L_11dfd993;
L_11dfd969:;
  /* 11dfd969 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfd96c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11dfd96f push eax */
  push32((uint32_t)(EAX));
  /* 11dfd970 push 0x11e2ad78 */
  push32((uint32_t)(0x11e2ad78u));
  /* 11dfd975 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd977 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd979 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd97b push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd97d call 0x11dfaa10 */
  push32(0x11dfd982u); f_11dfaa10();
  /* 11dfd982 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfd985 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd988 jne 0x11dfd98b */
  if (!C.zf) goto L_11dfd98b;
  /* 11dfd98a int3  */
  x86_unimpl("int3 @ 0x11dfd98a");
L_11dfd98b:;
  /* 11dfd98b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11dfd98d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11dfd98f jne 0x11dfd969 */
  if (!C.zf) goto L_11dfd969;
  /* 11dfd991 jmp 0x11dfd9c2 */
  goto L_11dfd9c2;
L_11dfd993:;
  /* 11dfd993 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfd996 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11dfd999 push eax */
  push32((uint32_t)(EAX));
  /* 11dfd99a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfd99d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11dfd9a0 push edx */
  push32((uint32_t)(EDX));
  /* 11dfd9a1 push 0x11e2ad6c */
  push32((uint32_t)(0x11e2ad6cu));
  /* 11dfd9a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd9a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd9aa push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd9ac push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd9ae call 0x11dfaa10 */
  push32(0x11dfd9b3u); f_11dfaa10();
  /* 11dfd9b3 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfd9b6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd9b9 jne 0x11dfd9bc */
  if (!C.zf) goto L_11dfd9bc;
  /* 11dfd9bb int3  */
  x86_unimpl("int3 @ 0x11dfd9bb");
L_11dfd9bc:;
  /* 11dfd9bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dfd9be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfd9c0 jne 0x11dfd993 */
  if (!C.zf) goto L_11dfd993;
L_11dfd9c2:;
  /* 11dfd9c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfd9c5 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11dfd9c8 push edx */
  push32((uint32_t)(EDX));
  /* 11dfd9c9 push 0x11e2ad64 */
  push32((uint32_t)(0x11e2ad64u));
  /* 11dfd9ce push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd9d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd9d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd9d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfd9d6 call 0x11dfaa10 */
  push32(0x11dfd9dbu); f_11dfaa10();
  /* 11dfd9db add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfd9de cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd9e1 jne 0x11dfd9e4 */
  if (!C.zf) goto L_11dfd9e4;
  /* 11dfd9e3 int3  */
  x86_unimpl("int3 @ 0x11dfd9e3");
L_11dfd9e4:;
  /* 11dfd9e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dfd9e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfd9e8 jne 0x11dfd9c2 */
  if (!C.zf) goto L_11dfd9c2;
  /* 11dfd9ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfd9ed mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11dfd9f0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11dfd9f6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfd9f9 jne 0x11dfda6c */
  if (!C.zf) goto L_11dfda6c;
L_11dfd9fb:;
  /* 11dfd9fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfd9fe mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11dfda01 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfda02 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfda05 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11dfda08 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11dfda0b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11dfda10 push eax */
  push32((uint32_t)(EAX));
  /* 11dfda11 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfda14 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfda17 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfda18 push 0x11e2ad30 */
  push32((uint32_t)(0x11e2ad30u));
  /* 11dfda1d push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfda1f push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfda21 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfda23 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfda25 call 0x11dfaa10 */
  push32(0x11dfda2au); f_11dfaa10();
  /* 11dfda2a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfda2d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfda30 jne 0x11dfda33 */
  if (!C.zf) goto L_11dfda33;
  /* 11dfda32 int3  */
  x86_unimpl("int3 @ 0x11dfda32");
L_11dfda33:;
  /* 11dfda33 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11dfda35 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dfda37 jne 0x11dfd9fb */
  if (!C.zf) goto L_11dfd9fb;
  /* 11dfda39 cmp dword ptr [0x11e3213c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e3213c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfda40 je 0x11dfda5b */
  if (C.zf) goto L_11dfda5b;
  /* 11dfda42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfda45 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11dfda48 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfda49 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfda4c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfda4f push edx */
  push32((uint32_t)(EDX));
  /* 11dfda50 call dword ptr [0x11e3213c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3213c))), 0x11dfda56u);
  /* 11dfda56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfda59 jmp 0x11dfda67 */
  goto L_11dfda67;
L_11dfda5b:;
  /* 11dfda5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfda5e push eax */
  push32((uint32_t)(EAX));
  /* 11dfda5f call 0x11dfdb50 */
  push32(0x11dfda64u); f_11dfdb50();
  /* 11dfda64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dfda67:;
  /* 11dfda67 jmp 0x11dfdb0d */
  goto L_11dfdb0d;
L_11dfda6c:;
  /* 11dfda6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfda6f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfda73 jne 0x11dfdab2 */
  if (!C.zf) goto L_11dfdab2;
L_11dfda75:;
  /* 11dfda75 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfda78 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11dfda7b push eax */
  push32((uint32_t)(EAX));
  /* 11dfda7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfda7f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfda82 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfda83 push 0x11e2ad08 */
  push32((uint32_t)(0x11e2ad08u));
  /* 11dfda88 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfda8a push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfda8c push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfda8e push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfda90 call 0x11dfaa10 */
  push32(0x11dfda95u); f_11dfaa10();
  /* 11dfda95 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfda98 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfda9b jne 0x11dfda9e */
  if (!C.zf) goto L_11dfda9e;
  /* 11dfda9d int3  */
  x86_unimpl("int3 @ 0x11dfda9d");
L_11dfda9e:;
  /* 11dfda9e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11dfdaa0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dfdaa2 jne 0x11dfda75 */
  if (!C.zf) goto L_11dfda75;
  /* 11dfdaa4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfdaa7 push eax */
  push32((uint32_t)(EAX));
  /* 11dfdaa8 call 0x11dfdb50 */
  push32(0x11dfdaadu); f_11dfdb50();
  /* 11dfdaad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfdab0 jmp 0x11dfdb0d */
  goto L_11dfdb0d;
L_11dfdab2:;
  /* 11dfdab2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfdab5 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11dfdab8 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11dfdabe cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfdac1 jne 0x11dfdb0d */
  if (!C.zf) goto L_11dfdb0d;
L_11dfdac3:;
  /* 11dfdac3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfdac6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11dfdac9 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfdaca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfdacd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11dfdad0 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11dfdad3 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11dfdad8 push eax */
  push32((uint32_t)(EAX));
  /* 11dfdad9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfdadc add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfdadf push ecx */
  push32((uint32_t)(ECX));
  /* 11dfdae0 push 0x11e2acd4 */
  push32((uint32_t)(0x11e2acd4u));
  /* 11dfdae5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfdae7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfdae9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfdaeb push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfdaed call 0x11dfaa10 */
  push32(0x11dfdaf2u); f_11dfaa10();
  /* 11dfdaf2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfdaf5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfdaf8 jne 0x11dfdafb */
  if (!C.zf) goto L_11dfdafb;
  /* 11dfdafa int3  */
  x86_unimpl("int3 @ 0x11dfdafa");
L_11dfdafb:;
  /* 11dfdafb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11dfdafd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dfdaff jne 0x11dfdac3 */
  if (!C.zf) goto L_11dfdac3;
  /* 11dfdb01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfdb04 push eax */
  push32((uint32_t)(EAX));
  /* 11dfdb05 call 0x11dfdb50 */
  push32(0x11dfdb0au); f_11dfdb50();
  /* 11dfdb0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dfdb0d:;
  /* 11dfdb0d jmp 0x11dfd8e8 */
  goto L_11dfd8e8;
L_11dfdb12:;
  /* 11dfdb12 push 9 */
  push32((uint32_t)(0x9u));
  /* 11dfdb14 call 0x11dfbdf0 */
  push32(0x11dfdb19u); f_11dfbdf0();
  /* 11dfdb19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dfdb1c:;
  /* 11dfdb1c push 0x11e2acbc */
  push32((uint32_t)(0x11e2acbcu));
  /* 11dfdb21 push 0x11e2a7ac */
  push32((uint32_t)(0x11e2a7acu));
  /* 11dfdb26 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfdb28 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfdb2a push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfdb2c push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfdb2e call 0x11dfaa10 */
  push32(0x11dfdb33u); f_11dfaa10();
  /* 11dfdb33 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfdb36 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfdb39 jne 0x11dfdb3c */
  if (!C.zf) goto L_11dfdb3c;
  /* 11dfdb3b int3  */
  x86_unimpl("int3 @ 0x11dfdb3b");
L_11dfdb3c:;
  /* 11dfdb3c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11dfdb3e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11dfdb40 jne 0x11dfdb1c */
  if (!C.zf) goto L_11dfdb1c;
  /* 11dfdb42 pop edi */
  EDI = (pop32());
  /* 11dfdb43 pop esi */
  ESI = (pop32());
  /* 11dfdb44 pop ebx */
  EBX = (pop32());
  /* 11dfdb45 mov esp, ebp */
  ESP = (EBP);
  /* 11dfdb47 pop ebp */
  EBP = (pop32());
  /* 11dfdb48 ret  */
  ESPCHK(0x11dfd890u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db50 @ 0x11dfdb50 (276 bytes, 89 insns) */
void f_11dfdb50(void) {
  FTRACE(0x11dfdb50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfdb50 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfdb51 mov ebp, esp */
  EBP = (ESP);
  /* 11dfdb53 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfdb56 push ebx */
  push32((uint32_t)(EBX));
  /* 11dfdb57 push esi */
  push32((uint32_t)(ESI));
  /* 11dfdb58 push edi */
  push32((uint32_t)(EDI));
  /* 11dfdb59 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 11dfdb60 jmp 0x11dfdb6b */
  goto L_11dfdb6b;
L_11dfdb62:;
  /* 11dfdb62 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11dfdb65 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfdb68 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_11dfdb6b:;
  /* 11dfdb6b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfdb6e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfdb72 jge 0x11dfdb7f */
  if ((C.sf==C.of)) goto L_11dfdb7f;
  /* 11dfdb74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfdb77 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11dfdb7a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 11dfdb7d jmp 0x11dfdb86 */
  goto L_11dfdb86;
L_11dfdb7f:;
  /* 11dfdb7f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_11dfdb86:;
  /* 11dfdb86 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11dfdb89 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfdb8c jge 0x11dfdc2c */
  if ((C.sf==C.of)) goto L_11dfdc2c;
  /* 11dfdb92 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfdb95 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfdb98 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 11dfdb9b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 11dfdb9e cmp dword ptr [0x11e2e000], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e2e000))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfdba5 jle 0x11dfdbc3 */
  if ((C.zf||C.sf!=C.of)) goto L_11dfdbc3;
  /* 11dfdba7 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 11dfdbac mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11dfdbaf and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11dfdbb5 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfdbb6 call 0x11e02520 */
  push32(0x11dfdbbbu); f_11e02520();
  /* 11dfdbbb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfdbbe mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 11dfdbc1 jmp 0x11dfdbe0 */
  goto L_11dfdbe0;
L_11dfdbc3:;
  /* 11dfdbc3 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11dfdbc6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11dfdbcc mov eax, dword ptr [0x11e2e00c] */
  EAX = (r32((uint32_t)(0x11e2e00c)));
  /* 11dfdbd1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11dfdbd3 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11dfdbd7 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 11dfdbdd mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_11dfdbe0:;
  /* 11dfdbe0 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfdbe4 je 0x11dfdbf4 */
  if (C.zf) goto L_11dfdbf4;
  /* 11dfdbe6 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11dfdbe9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11dfdbef mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 11dfdbf2 jmp 0x11dfdbfb */
  goto L_11dfdbfb;
L_11dfdbf4:;
  /* 11dfdbf4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_11dfdbfb:;
  /* 11dfdbfb mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11dfdbfe mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 11dfdc01 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 11dfdc05 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11dfdc08 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11dfdc0e push edx */
  push32((uint32_t)(EDX));
  /* 11dfdc0f push 0x11e2adb0 */
  push32((uint32_t)(0x11e2adb0u));
  /* 11dfdc14 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11dfdc17 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11dfdc1a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 11dfdc1e push ecx */
  push32((uint32_t)(ECX));
  /* 11dfdc1f call 0x11dfa580 */
  push32(0x11dfdc24u); f_11dfa580();
  /* 11dfdc24 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfdc27 jmp 0x11dfdb62 */
  goto L_11dfdb62;
L_11dfdc2c:;
  /* 11dfdc2c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11dfdc2f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_11dfdc34:;
  /* 11dfdc34 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 11dfdc37 push eax */
  push32((uint32_t)(EAX));
  /* 11dfdc38 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 11dfdc3b push ecx */
  push32((uint32_t)(ECX));
  /* 11dfdc3c push 0x11e2ada0 */
  push32((uint32_t)(0x11e2ada0u));
  /* 11dfdc41 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfdc43 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfdc45 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfdc47 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfdc49 call 0x11dfaa10 */
  push32(0x11dfdc4eu); f_11dfaa10();
  /* 11dfdc4e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfdc51 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfdc54 jne 0x11dfdc57 */
  if (!C.zf) goto L_11dfdc57;
  /* 11dfdc56 int3  */
  x86_unimpl("int3 @ 0x11dfdc56");
L_11dfdc57:;
  /* 11dfdc57 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11dfdc59 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dfdc5b jne 0x11dfdc34 */
  if (!C.zf) goto L_11dfdc34;
  /* 11dfdc5d pop edi */
  EDI = (pop32());
  /* 11dfdc5e pop esi */
  ESI = (pop32());
  /* 11dfdc5f pop ebx */
  EBX = (pop32());
  /* 11dfdc60 mov esp, ebp */
  ESP = (EBP);
  /* 11dfdc62 pop ebp */
  EBP = (pop32());
  /* 11dfdc63 ret  */
  ESPCHK(0x11dfdb50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc70 @ 0x11dfdc70 (116 bytes, 46 insns) */
void f_11dfdc70(void) {
  FTRACE(0x11dfdc70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfdc70 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfdc71 mov ebp, esp */
  EBP = (ESP);
  /* 11dfdc73 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfdc76 push ebx */
  push32((uint32_t)(EBX));
  /* 11dfdc77 push esi */
  push32((uint32_t)(ESI));
  /* 11dfdc78 push edi */
  push32((uint32_t)(EDI));
  /* 11dfdc79 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 11dfdc7c push eax */
  push32((uint32_t)(EAX));
  /* 11dfdc7d call 0x11dfd5f0 */
  push32(0x11dfdc82u); f_11dfd5f0();
  /* 11dfdc82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfdc85 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfdc89 jne 0x11dfdca4 */
  if (!C.zf) goto L_11dfdca4;
  /* 11dfdc8b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfdc8f jne 0x11dfdca4 */
  if (!C.zf) goto L_11dfdca4;
  /* 11dfdc91 mov ecx, dword ptr [0x11e2df08] */
  ECX = (r32((uint32_t)(0x11e2df08)));
  /* 11dfdc97 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11dfdc9a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11dfdc9c je 0x11dfdcdb */
  if (C.zf) goto L_11dfdcdb;
  /* 11dfdc9e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfdca2 je 0x11dfdcdb */
  if (C.zf) goto L_11dfdcdb;
L_11dfdca4:;
  /* 11dfdca4 push 0x11e2adb8 */
  push32((uint32_t)(0x11e2adb8u));
  /* 11dfdca9 push 0x11e2a7ac */
  push32((uint32_t)(0x11e2a7acu));
  /* 11dfdcae push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfdcb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfdcb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfdcb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfdcb6 call 0x11dfaa10 */
  push32(0x11dfdcbbu); f_11dfaa10();
  /* 11dfdcbb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfdcbe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfdcc1 jne 0x11dfdcc4 */
  if (!C.zf) goto L_11dfdcc4;
  /* 11dfdcc3 int3  */
  x86_unimpl("int3 @ 0x11dfdcc3");
L_11dfdcc4:;
  /* 11dfdcc4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11dfdcc6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dfdcc8 jne 0x11dfdca4 */
  if (!C.zf) goto L_11dfdca4;
  /* 11dfdcca push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfdccc call 0x11dfd890 */
  push32(0x11dfdcd1u); f_11dfd890();
  /* 11dfdcd1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfdcd4 mov eax, 1 */
  EAX = (0x1u);
  /* 11dfdcd9 jmp 0x11dfdcdd */
  goto L_11dfdcdd;
L_11dfdcdb:;
  /* 11dfdcdb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11dfdcdd:;
  /* 11dfdcdd pop edi */
  EDI = (pop32());
  /* 11dfdcde pop esi */
  ESI = (pop32());
  /* 11dfdcdf pop ebx */
  EBX = (pop32());
  /* 11dfdce0 mov esp, ebp */
  ESP = (EBP);
  /* 11dfdce2 pop ebp */
  EBP = (pop32());
  /* 11dfdce3 ret  */
  ESPCHK(0x11dfdc70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dcf0 @ 0x11dfdcf0 (197 bytes, 79 insns) */
void f_11dfdcf0(void) {
  FTRACE(0x11dfdcf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfdcf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfdcf1 mov ebp, esp */
  EBP = (ESP);
  /* 11dfdcf3 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfdcf4 push ebx */
  push32((uint32_t)(EBX));
  /* 11dfdcf5 push esi */
  push32((uint32_t)(ESI));
  /* 11dfdcf6 push edi */
  push32((uint32_t)(EDI));
  /* 11dfdcf7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfdcfb jne 0x11dfdd02 */
  if (!C.zf) goto L_11dfdd02;
  /* 11dfdcfd jmp 0x11dfddae */
  goto L_11dfddae;
L_11dfdd02:;
  /* 11dfdd02 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11dfdd09 jmp 0x11dfdd14 */
  goto L_11dfdd14;
L_11dfdd0b:;
  /* 11dfdd0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfdd0e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfdd11 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11dfdd14:;
  /* 11dfdd14 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfdd18 jge 0x11dfdd5e */
  if ((C.sf==C.of)) goto L_11dfdd5e;
L_11dfdd1a:;
  /* 11dfdd1a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfdd1d mov edx, dword ptr [ecx*4 + 0x11e2df18] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11e2df18)));
  /* 11dfdd24 push edx */
  push32((uint32_t)(EDX));
  /* 11dfdd25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfdd28 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfdd2b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 11dfdd2f push edx */
  push32((uint32_t)(EDX));
  /* 11dfdd30 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfdd33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfdd36 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 11dfdd3a push edx */
  push32((uint32_t)(EDX));
  /* 11dfdd3b push 0x11e2ae14 */
  push32((uint32_t)(0x11e2ae14u));
  /* 11dfdd40 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfdd42 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfdd44 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfdd46 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfdd48 call 0x11dfaa10 */
  push32(0x11dfdd4du); f_11dfaa10();
  /* 11dfdd4d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfdd50 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfdd53 jne 0x11dfdd56 */
  if (!C.zf) goto L_11dfdd56;
  /* 11dfdd55 int3  */
  x86_unimpl("int3 @ 0x11dfdd55");
L_11dfdd56:;
  /* 11dfdd56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dfdd58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfdd5a jne 0x11dfdd1a */
  if (!C.zf) goto L_11dfdd1a;
  /* 11dfdd5c jmp 0x11dfdd0b */
  goto L_11dfdd0b;
L_11dfdd5e:;
  /* 11dfdd5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfdd61 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 11dfdd64 push edx */
  push32((uint32_t)(EDX));
  /* 11dfdd65 push 0x11e2adf0 */
  push32((uint32_t)(0x11e2adf0u));
  /* 11dfdd6a push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfdd6c push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfdd6e push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfdd70 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfdd72 call 0x11dfaa10 */
  push32(0x11dfdd77u); f_11dfaa10();
  /* 11dfdd77 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfdd7a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfdd7d jne 0x11dfdd80 */
  if (!C.zf) goto L_11dfdd80;
  /* 11dfdd7f int3  */
  x86_unimpl("int3 @ 0x11dfdd7f");
L_11dfdd80:;
  /* 11dfdd80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dfdd82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfdd84 jne 0x11dfdd5e */
  if (!C.zf) goto L_11dfdd5e;
L_11dfdd86:;
  /* 11dfdd86 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfdd89 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 11dfdd8c push edx */
  push32((uint32_t)(EDX));
  /* 11dfdd8d push 0x11e2add0 */
  push32((uint32_t)(0x11e2add0u));
  /* 11dfdd92 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfdd94 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfdd96 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfdd98 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfdd9a call 0x11dfaa10 */
  push32(0x11dfdd9fu); f_11dfaa10();
  /* 11dfdd9f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfdda2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfdda5 jne 0x11dfdda8 */
  if (!C.zf) goto L_11dfdda8;
  /* 11dfdda7 int3  */
  x86_unimpl("int3 @ 0x11dfdda7");
L_11dfdda8:;
  /* 11dfdda8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dfddaa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfddac jne 0x11dfdd86 */
  if (!C.zf) goto L_11dfdd86;
L_11dfddae:;
  /* 11dfddae pop edi */
  EDI = (pop32());
  /* 11dfddaf pop esi */
  ESI = (pop32());
  /* 11dfddb0 pop ebx */
  EBX = (pop32());
  /* 11dfddb1 mov esp, ebp */
  ESP = (EBP);
  /* 11dfddb3 pop ebp */
  EBP = (pop32());
  /* 11dfddb4 ret  */
  ESPCHK(0x11dfdcf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ddc0 @ 0x11dfddc0 (239 bytes, 88 insns) */
void f_11dfddc0(void) {
  FTRACE(0x11dfddc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfddc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfddc1 mov ebp, esp */
  EBP = (ESP);
  /* 11dfddc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfddc6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11dfddc9 cmp dword ptr [eax], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfddcf jne 0x11dfddda */
  if (!C.zf) goto L_11dfddda;
  /* 11dfddd1 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11dfddd8 jmp 0x11dfdde2 */
  goto L_11dfdde2;
L_11dfddda:;
  /* 11dfddda call 0x11dfedd0 */
  push32(0x11dfdddfu); f_11dfedd0();
  /* 11dfdddf mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11dfdde2:;
  /* 11dfdde2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfdde5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11dfdde8 and edx, 0x66 */
  { uint32_t _r=(EDX)&(0x66u); EDX = (_r); fl_logic(_r,32); }
  /* 11dfddeb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dfdded je 0x11dfde1e */
  if (C.zf) goto L_11dfde1e;
  /* 11dfddef mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11dfddf2 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfddf6 je 0x11dfde14 */
  if (C.zf) goto L_11dfde14;
  /* 11dfddf8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfddfc jne 0x11dfde14 */
  if (!C.zf) goto L_11dfde14;
  /* 11dfddfe push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11dfde00 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11dfde03 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfde04 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dfde07 push edx */
  push32((uint32_t)(EDX));
  /* 11dfde08 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfde0b push eax */
  push32((uint32_t)(EAX));
  /* 11dfde0c call 0x11dfe330 */
  push32(0x11dfde11u); f_11dfe330();
  /* 11dfde11 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dfde14:;
  /* 11dfde14 mov eax, 1 */
  EAX = (0x1u);
  /* 11dfde19 jmp 0x11dfdeab */
  goto L_11dfdeab;
L_11dfde1e:;
  /* 11dfde1e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11dfde21 cmp dword ptr [ecx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfde25 je 0x11dfdea6 */
  if (C.zf) goto L_11dfdea6;
  /* 11dfde27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfde2a cmp dword ptr [edx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfde30 jne 0x11dfde7e */
  if (!C.zf) goto L_11dfde7e;
  /* 11dfde32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfde35 cmp dword ptr [eax + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfde3c jbe 0x11dfde7e */
  if ((C.cf||C.zf)) goto L_11dfde7e;
  /* 11dfde3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfde41 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11dfde44 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11dfde47 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11dfde4a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfde4e je 0x11dfde7e */
  if (C.zf) goto L_11dfde7e;
  /* 11dfde50 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11dfde53 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11dfde59 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfde5a mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11dfde5d push edx */
  push32((uint32_t)(EDX));
  /* 11dfde5e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11dfde61 push eax */
  push32((uint32_t)(EAX));
  /* 11dfde62 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11dfde65 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfde66 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dfde69 push edx */
  push32((uint32_t)(EDX));
  /* 11dfde6a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfde6d push eax */
  push32((uint32_t)(EAX));
  /* 11dfde6e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfde71 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfde72 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfde75 push edx */
  push32((uint32_t)(EDX));
  /* 11dfde76 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11dfde79u);
  /* 11dfde79 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfde7c jmp 0x11dfdeab */
  goto L_11dfdeab;
L_11dfde7e:;
  /* 11dfde7e mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11dfde81 push eax */
  push32((uint32_t)(EAX));
  /* 11dfde82 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11dfde85 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfde86 mov dl, byte ptr [ebp + 0x24] */
  DL = (r8((uint32_t)(EBP + 0x24)));
  /* 11dfde89 push edx */
  push32((uint32_t)(EDX));
  /* 11dfde8a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11dfde8d push eax */
  push32((uint32_t)(EAX));
  /* 11dfde8e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dfde91 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfde92 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfde95 push edx */
  push32((uint32_t)(EDX));
  /* 11dfde96 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfde99 push eax */
  push32((uint32_t)(EAX));
  /* 11dfde9a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfde9d push ecx */
  push32((uint32_t)(ECX));
  /* 11dfde9e call 0x11dfdeb0 */
  push32(0x11dfdea3u); f_11dfdeb0();
  /* 11dfdea3 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dfdea6:;
  /* 11dfdea6 mov eax, 1 */
  EAX = (0x1u);
L_11dfdeab:;
  /* 11dfdeab mov esp, ebp */
  ESP = (EBP);
  /* 11dfdead pop ebp */
  EBP = (pop32());
  /* 11dfdeae ret  */
  ESPCHK(0x11dfddc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000deb0 @ 0x11dfdeb0 (672 bytes, 222 insns) */
void f_11dfdeb0(void) {
  FTRACE(0x11dfdeb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfdeb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfdeb1 mov ebp, esp */
  EBP = (ESP);
  /* 11dfdeb3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfdeb6 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11dfdeba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfdebd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11dfdec0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11dfdec3 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfdec7 jl 0x11dfdedd */
  if ((C.sf!=C.of)) goto L_11dfdedd;
  /* 11dfdec9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11dfdecc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfdecf cmp eax, dword ptr [edx + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfded2 jge 0x11dfdedd */
  if ((C.sf==C.of)) goto L_11dfdedd;
  /* 11dfded4 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11dfdedb jmp 0x11dfdee5 */
  goto L_11dfdee5;
L_11dfdedd:;
  /* 11dfdedd call 0x11dfedd0 */
  push32(0x11dfdee2u); f_11dfedd0();
  /* 11dfdee2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
L_11dfdee5:;
  /* 11dfdee5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfdee8 cmp dword ptr [ecx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfdeee jne 0x11dfdfa5 */
  if (!C.zf) goto L_11dfdfa5;
  /* 11dfdef4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfdef7 cmp dword ptr [edx + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfdefb jne 0x11dfdfa5 */
  if (!C.zf) goto L_11dfdfa5;
  /* 11dfdf01 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfdf04 cmp dword ptr [eax + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfdf0b jne 0x11dfdfa5 */
  if (!C.zf) goto L_11dfdfa5;
  /* 11dfdf11 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfdf14 cmp dword ptr [ecx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfdf18 jne 0x11dfdfa5 */
  if (!C.zf) goto L_11dfdfa5;
  /* 11dfdf1e call 0x11dfeb50 */
  push32(0x11dfdf23u); f_11dfeb50();
  /* 11dfdf23 cmp dword ptr [eax + 0x6c], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfdf27 jne 0x11dfdf2e */
  if (!C.zf) goto L_11dfdf2e;
  /* 11dfdf29 jmp 0x11dfe14c */
  goto L_11dfe14c;
L_11dfdf2e:;
  /* 11dfdf2e call 0x11dfeb50 */
  push32(0x11dfdf33u); f_11dfeb50();
  /* 11dfdf33 mov edx, dword ptr [eax + 0x6c] */
  EDX = (r32((uint32_t)(EAX + 0x6c)));
  /* 11dfdf36 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11dfdf39 call 0x11dfeb50 */
  push32(0x11dfdf3eu); f_11dfeb50();
  /* 11dfdf3e mov eax, dword ptr [eax + 0x70] */
  EAX = (r32((uint32_t)(EAX + 0x70)));
  /* 11dfdf41 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11dfdf44 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
  /* 11dfdf48 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dfdf4a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfdf4d push ecx */
  push32((uint32_t)(ECX));
  /* 11dfdf4e call 0x11e05890 */
  push32(0x11dfdf53u); f_11e05890();
  /* 11dfdf53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfdf56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfdf58 je 0x11dfdf63 */
  if (C.zf) goto L_11dfdf63;
  /* 11dfdf5a mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11dfdf61 jmp 0x11dfdf6b */
  goto L_11dfdf6b;
L_11dfdf63:;
  /* 11dfdf63 call 0x11dfedd0 */
  push32(0x11dfdf68u); f_11dfedd0();
  /* 11dfdf68 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_11dfdf6b:;
  /* 11dfdf6b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfdf6e cmp dword ptr [edx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfdf74 jne 0x11dfdf9e */
  if (!C.zf) goto L_11dfdf9e;
  /* 11dfdf76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfdf79 cmp dword ptr [eax + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfdf7d jne 0x11dfdf9e */
  if (!C.zf) goto L_11dfdf9e;
  /* 11dfdf7f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfdf82 cmp dword ptr [ecx + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfdf89 jne 0x11dfdf9e */
  if (!C.zf) goto L_11dfdf9e;
  /* 11dfdf8b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfdf8e cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfdf92 jne 0x11dfdf9e */
  if (!C.zf) goto L_11dfdf9e;
  /* 11dfdf94 call 0x11dfedd0 */
  push32(0x11dfdf99u); f_11dfedd0();
  /* 11dfdf99 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11dfdf9c jmp 0x11dfdfa5 */
  goto L_11dfdfa5;
L_11dfdf9e:;
  /* 11dfdf9e mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_11dfdfa5:;
  /* 11dfdfa5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfdfa8 cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfdfae jne 0x11dfe10c */
  if (!C.zf) goto L_11dfe10c;
  /* 11dfdfb4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfdfb7 cmp dword ptr [ecx + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfdfbb jne 0x11dfe10c */
  if (!C.zf) goto L_11dfe10c;
  /* 11dfdfc1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfdfc4 cmp dword ptr [edx + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfdfcb jne 0x11dfe10c */
  if (!C.zf) goto L_11dfe10c;
  /* 11dfdfd1 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11dfdfd4 push eax */
  push32((uint32_t)(EAX));
  /* 11dfdfd5 lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 11dfdfd8 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfdfd9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfdfdc push edx */
  push32((uint32_t)(EDX));
  /* 11dfdfdd mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11dfdfe0 push eax */
  push32((uint32_t)(EAX));
  /* 11dfdfe1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11dfdfe4 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfdfe5 call 0x11dfa2d0 */
  push32(0x11dfdfeau); f_11dfa2d0();
  /* 11dfdfea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfdfed mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11dfdff0 jmp 0x11dfe004 */
  goto L_11dfe004;
L_11dfdff2:;
  /* 11dfdff2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11dfdff5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfdff8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11dfdffb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11dfdffe add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfe001 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11dfe004:;
  /* 11dfe004 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11dfe007 cmp ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfe00a jae 0x11dfe0ef */
  if (!C.cf) goto L_11dfe0ef;
  /* 11dfe010 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11dfe013 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11dfe015 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfe018 jg 0x11dfe025 */
  if ((!C.zf&&C.sf==C.of)) goto L_11dfe025;
  /* 11dfe01a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11dfe01d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfe020 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfe023 jle 0x11dfe027 */
  if ((C.zf||C.sf!=C.of)) goto L_11dfe027;
L_11dfe025:;
  /* 11dfe025 jmp 0x11dfdff2 */
  goto L_11dfdff2;
L_11dfe027:;
  /* 11dfe027 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11dfe02a mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11dfe02d mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 11dfe030 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11dfe033 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11dfe036 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11dfe039 jmp 0x11dfe04d */
  goto L_11dfe04d;
L_11dfe03b:;
  /* 11dfe03b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11dfe03e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfe041 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11dfe044 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11dfe047 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfe04a mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_11dfe04d:;
  /* 11dfe04d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfe051 jle 0x11dfe0ea */
  if ((C.zf||C.sf!=C.of)) goto L_11dfe0ea;
  /* 11dfe057 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfe05a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11dfe05d mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11dfe060 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfe063 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11dfe066 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfe069 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11dfe06c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11dfe06f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11dfe071 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11dfe074 jmp 0x11dfe088 */
  goto L_11dfe088;
L_11dfe076:;
  /* 11dfe076 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11dfe079 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfe07c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11dfe07f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11dfe082 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfe085 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_11dfe088:;
  /* 11dfe088 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfe08c jle 0x11dfe0e5 */
  if ((C.zf||C.sf!=C.of)) goto L_11dfe0e5;
  /* 11dfe08e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfe091 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11dfe094 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfe095 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11dfe098 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11dfe09a push eax */
  push32((uint32_t)(EAX));
  /* 11dfe09b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11dfe09e push ecx */
  push32((uint32_t)(ECX));
  /* 11dfe09f call 0x11dfe270 */
  push32(0x11dfe0a4u); f_11dfe270();
  /* 11dfe0a4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfe0a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfe0a9 jne 0x11dfe0ad */
  if (!C.zf) goto L_11dfe0ad;
  /* 11dfe0ab jmp 0x11dfe076 */
  goto L_11dfe076;
L_11dfe0ad:;
  /* 11dfe0ad mov dl, byte ptr [ebp - 8] */
  DL = (r8((uint32_t)(EBP + -0x8)));
  /* 11dfe0b0 push edx */
  push32((uint32_t)(EDX));
  /* 11dfe0b1 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11dfe0b4 push eax */
  push32((uint32_t)(EAX));
  /* 11dfe0b5 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11dfe0b8 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfe0b9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11dfe0bc push edx */
  push32((uint32_t)(EDX));
  /* 11dfe0bd mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11dfe0c0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11dfe0c2 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfe0c3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11dfe0c6 push edx */
  push32((uint32_t)(EDX));
  /* 11dfe0c7 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11dfe0ca push eax */
  push32((uint32_t)(EAX));
  /* 11dfe0cb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dfe0ce push ecx */
  push32((uint32_t)(ECX));
  /* 11dfe0cf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfe0d2 push edx */
  push32((uint32_t)(EDX));
  /* 11dfe0d3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfe0d6 push eax */
  push32((uint32_t)(EAX));
  /* 11dfe0d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfe0da push ecx */
  push32((uint32_t)(ECX));
  /* 11dfe0db call 0x11dfe460 */
  push32(0x11dfe0e0u); f_11dfe460();
  /* 11dfe0e0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfe0e3 jmp 0x11dfe14a */
  goto L_11dfe14a;
L_11dfe0e5:;
  /* 11dfe0e5 jmp 0x11dfe03b */
  goto L_11dfe03b;
L_11dfe0ea:;
  /* 11dfe0ea jmp 0x11dfdff2 */
  goto L_11dfdff2;
L_11dfe0ef:;
  /* 11dfe0ef mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11dfe0f2 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11dfe0f8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dfe0fa je 0x11dfe10a */
  if (C.zf) goto L_11dfe10a;
  /* 11dfe0fc push 1 */
  push32((uint32_t)(0x1u));
  /* 11dfe0fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfe101 push eax */
  push32((uint32_t)(EAX));
  /* 11dfe102 call 0x11dfe940 */
  push32(0x11dfe107u); f_11dfe940();
  /* 11dfe107 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dfe10a:;
  /* 11dfe10a jmp 0x11dfe148 */
  goto L_11dfe148;
L_11dfe10c:;
  /* 11dfe10c mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11dfe10f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11dfe115 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11dfe117 jne 0x11dfe143 */
  if (!C.zf) goto L_11dfe143;
  /* 11dfe119 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 11dfe11c push edx */
  push32((uint32_t)(EDX));
  /* 11dfe11d mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11dfe120 push eax */
  push32((uint32_t)(EAX));
  /* 11dfe121 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfe124 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfe125 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11dfe128 push edx */
  push32((uint32_t)(EDX));
  /* 11dfe129 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dfe12c push eax */
  push32((uint32_t)(EAX));
  /* 11dfe12d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfe130 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfe131 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfe134 push edx */
  push32((uint32_t)(EDX));
  /* 11dfe135 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfe138 push eax */
  push32((uint32_t)(EAX));
  /* 11dfe139 call 0x11dfe150 */
  push32(0x11dfe13eu); f_11dfe150();
  /* 11dfe13e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfe141 jmp 0x11dfe148 */
  goto L_11dfe148;
L_11dfe143:;
  /* 11dfe143 call 0x11dfed20 */
  push32(0x11dfe148u); f_11dfed20();
L_11dfe148:;
  /* 11dfe148 jmp 0x11dfe14c */
  goto L_11dfe14c;
L_11dfe14a:;
  /* 11dfe14a jmp 0x11dfe0ea */
  goto L_11dfe0ea;
L_11dfe14c:;
  /* 11dfe14c mov esp, ebp */
  ESP = (EBP);
  /* 11dfe14e pop ebp */
  EBP = (pop32());
  /* 11dfe14f ret  */
  ESPCHK(0x11dfdeb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e150 @ 0x11dfe150 (277 bytes, 107 insns) */
void f_11dfe150(void) {
  FTRACE(0x11dfe150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfe150 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfe151 mov ebp, esp */
  EBP = (ESP);
  /* 11dfe153 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfe156 call 0x11dfeb50 */
  push32(0x11dfe15bu); f_11dfeb50();
  /* 11dfe15b cmp dword ptr [eax + 0x68], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfe15f je 0x11dfe18e */
  if (C.zf) goto L_11dfe18e;
  /* 11dfe161 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11dfe164 push eax */
  push32((uint32_t)(EAX));
  /* 11dfe165 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11dfe168 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfe169 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11dfe16c push edx */
  push32((uint32_t)(EDX));
  /* 11dfe16d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dfe170 push eax */
  push32((uint32_t)(EAX));
  /* 11dfe171 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfe174 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfe175 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfe178 push edx */
  push32((uint32_t)(EDX));
  /* 11dfe179 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfe17c push eax */
  push32((uint32_t)(EAX));
  /* 11dfe17d call 0x11dfa170 */
  push32(0x11dfe182u); f_11dfa170();
  /* 11dfe182 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfe185 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfe187 je 0x11dfe18e */
  if (C.zf) goto L_11dfe18e;
  /* 11dfe189 jmp 0x11dfe261 */
  goto L_11dfe261;
L_11dfe18e:;
  /* 11dfe18e lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11dfe191 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfe192 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11dfe195 push edx */
  push32((uint32_t)(EDX));
  /* 11dfe196 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11dfe199 push eax */
  push32((uint32_t)(EAX));
  /* 11dfe19a mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11dfe19d push ecx */
  push32((uint32_t)(ECX));
  /* 11dfe19e mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11dfe1a1 push edx */
  push32((uint32_t)(EDX));
  /* 11dfe1a2 call 0x11dfa2d0 */
  push32(0x11dfe1a7u); f_11dfa2d0();
  /* 11dfe1a7 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfe1aa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11dfe1ad jmp 0x11dfe1c1 */
  goto L_11dfe1c1;
L_11dfe1af:;
  /* 11dfe1af mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11dfe1b2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfe1b5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11dfe1b8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfe1bb add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfe1be mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11dfe1c1:;
  /* 11dfe1c1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11dfe1c4 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfe1c7 jae 0x11dfe261 */
  if (!C.cf) goto L_11dfe261;
  /* 11dfe1cd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfe1d0 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11dfe1d3 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfe1d5 jl 0x11dfe219 */
  if ((C.sf!=C.of)) goto L_11dfe219;
  /* 11dfe1d7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfe1da mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11dfe1dd cmp eax, dword ptr [edx + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfe1e0 jg 0x11dfe219 */
  if ((!C.zf&&C.sf==C.of)) goto L_11dfe219;
  /* 11dfe1e2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfe1e5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11dfe1e8 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfe1eb shl edx, 4 */
  EDX = (sh_shl((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11dfe1ee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfe1f1 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11dfe1f4 cmp dword ptr [ecx + edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + EDX*1 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfe1f9 je 0x11dfe21b */
  if (C.zf) goto L_11dfe21b;
  /* 11dfe1fb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfe1fe mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11dfe201 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfe204 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11dfe207 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfe20a mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11dfe20d mov eax, dword ptr [edx + eax + 4] */
  EAX = (r32((uint32_t)(EDX + EAX*1 + 0x4)));
  /* 11dfe211 movsx ecx, byte ptr [eax + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x8))));
  /* 11dfe215 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11dfe217 je 0x11dfe21b */
  if (C.zf) goto L_11dfe21b;
L_11dfe219:;
  /* 11dfe219 jmp 0x11dfe1af */
  goto L_11dfe1af;
L_11dfe21b:;
  /* 11dfe21b push 1 */
  push32((uint32_t)(0x1u));
  /* 11dfe21d mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 11dfe220 push edx */
  push32((uint32_t)(EDX));
  /* 11dfe221 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11dfe224 push eax */
  push32((uint32_t)(EAX));
  /* 11dfe225 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfe228 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfe229 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfe22b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfe22e mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11dfe231 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfe234 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11dfe237 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfe23a mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11dfe23d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfe23f push edx */
  push32((uint32_t)(EDX));
  /* 11dfe240 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11dfe243 push eax */
  push32((uint32_t)(EAX));
  /* 11dfe244 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dfe247 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfe248 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfe24b push edx */
  push32((uint32_t)(EDX));
  /* 11dfe24c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfe24f push eax */
  push32((uint32_t)(EAX));
  /* 11dfe250 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfe253 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfe254 call 0x11dfe460 */
  push32(0x11dfe259u); f_11dfe460();
  /* 11dfe259 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfe25c jmp 0x11dfe1af */
  goto L_11dfe1af;
L_11dfe261:;
  /* 11dfe261 mov esp, ebp */
  ESP = (EBP);
  /* 11dfe263 pop ebp */
  EBP = (pop32());
  /* 11dfe264 ret  */
  ESPCHK(0x11dfe150u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e270 @ 0x11dfe270 (182 bytes, 69 insns) */
void f_11dfe270(void) {
  FTRACE(0x11dfe270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfe270 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfe271 mov ebp, esp */
  EBP = (ESP);
  /* 11dfe273 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfe274 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfe277 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfe27b je 0x11dfe28b */
  if (C.zf) goto L_11dfe28b;
  /* 11dfe27d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfe280 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11dfe283 movsx eax, byte ptr [edx + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x8))));
  /* 11dfe287 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfe289 jne 0x11dfe295 */
  if (!C.zf) goto L_11dfe295;
L_11dfe28b:;
  /* 11dfe28b mov eax, 1 */
  EAX = (0x1u);
  /* 11dfe290 jmp 0x11dfe322 */
  goto L_11dfe322;
L_11dfe295:;
  /* 11dfe295 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfe298 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfe29b mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11dfe29e cmp eax, dword ptr [edx + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfe2a1 je 0x11dfe2c7 */
  if (C.zf) goto L_11dfe2c7;
  /* 11dfe2a3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfe2a6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11dfe2a9 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfe2ac push edx */
  push32((uint32_t)(EDX));
  /* 11dfe2ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfe2b0 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11dfe2b3 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfe2b6 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfe2b7 call 0x11e05920 */
  push32(0x11dfe2bcu); f_11e05920();
  /* 11dfe2bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfe2bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfe2c1 je 0x11dfe2c7 */
  if (C.zf) goto L_11dfe2c7;
  /* 11dfe2c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dfe2c5 jmp 0x11dfe322 */
  goto L_11dfe322;
L_11dfe2c7:;
  /* 11dfe2c7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfe2ca mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11dfe2cc and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 11dfe2cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfe2d1 je 0x11dfe2df */
  if (C.zf) goto L_11dfe2df;
  /* 11dfe2d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfe2d6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11dfe2d8 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11dfe2db test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dfe2dd je 0x11dfe318 */
  if (C.zf) goto L_11dfe318;
L_11dfe2df:;
  /* 11dfe2df mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfe2e2 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11dfe2e4 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11dfe2e7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11dfe2e9 je 0x11dfe2f7 */
  if (C.zf) goto L_11dfe2f7;
  /* 11dfe2eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfe2ee mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11dfe2f0 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11dfe2f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfe2f5 je 0x11dfe318 */
  if (C.zf) goto L_11dfe318;
L_11dfe2f7:;
  /* 11dfe2f7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfe2fa mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11dfe2fc and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11dfe2ff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dfe301 je 0x11dfe30f */
  if (C.zf) goto L_11dfe30f;
  /* 11dfe303 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfe306 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11dfe308 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11dfe30b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11dfe30d je 0x11dfe318 */
  if (C.zf) goto L_11dfe318;
L_11dfe30f:;
  /* 11dfe30f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11dfe316 jmp 0x11dfe31f */
  goto L_11dfe31f;
L_11dfe318:;
  /* 11dfe318 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11dfe31f:;
  /* 11dfe31f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11dfe322:;
  /* 11dfe322 mov esp, ebp */
  ESP = (EBP);
  /* 11dfe324 pop ebp */
  EBP = (pop32());
  /* 11dfe325 ret  */
  ESPCHK(0x11dfe270u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e330 @ 0x11dfe330 (224 bytes, 77 insns) */
void f_11dfe330(void) {
  FTRACE(0x11dfe330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfe330 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfe331 mov ebp, esp */
  EBP = (ESP);
  /* 11dfe333 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11dfe335 push 0x11e2ae38 */
  push32((uint32_t)(0x11e2ae38u));
  /* 11dfe33a push 0x11e059ac */
  push32((uint32_t)(0x11e059acu));
  /* 11dfe33f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11dfe345 push eax */
  push32((uint32_t)(EAX));
  /* 11dfe346 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11dfe34d add esp, -0x14 */
  { uint32_t _a=(ESP),_b=(0xffffffecu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfe350 push ebx */
  push32((uint32_t)(EBX));
  /* 11dfe351 push esi */
  push32((uint32_t)(ESI));
  /* 11dfe352 push edi */
  push32((uint32_t)(EDI));
  /* 11dfe353 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11dfe356 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfe359 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11dfe35c mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
L_11dfe35f:;
  /* 11dfe35f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11dfe362 cmp edx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfe365 je 0x11dfe3f4 */
  if (C.zf) goto L_11dfe3f4;
  /* 11dfe36b cmp dword ptr [ebp - 0x1c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfe36f jle 0x11dfe385 */
  if ((C.zf||C.sf!=C.of)) goto L_11dfe385;
  /* 11dfe371 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfe374 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11dfe377 cmp ecx, dword ptr [eax + 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfe37a jge 0x11dfe385 */
  if ((C.sf==C.of)) goto L_11dfe385;
  /* 11dfe37c mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11dfe383 jmp 0x11dfe38d */
  goto L_11dfe38d;
L_11dfe385:;
  /* 11dfe385 call 0x11dfedd0 */
  push32(0x11dfe38au); f_11dfedd0();
  /* 11dfe38a mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_11dfe38d:;
  /* 11dfe38d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11dfe394 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfe397 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11dfe39a mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11dfe39d cmp dword ptr [eax + ecx*8 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + ECX*8 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfe3a2 je 0x11dfe3c0 */
  if (C.zf) goto L_11dfe3c0;
  /* 11dfe3a4 push 0x103 */
  push32((uint32_t)(0x103u));
  /* 11dfe3a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfe3ac push edx */
  push32((uint32_t)(EDX));
  /* 11dfe3ad mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfe3b0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11dfe3b3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11dfe3b6 mov eax, dword ptr [ecx + edx*8 + 4] */
  EAX = (r32((uint32_t)(ECX + EDX*8 + 0x4)));
  /* 11dfe3ba push eax */
  push32((uint32_t)(EAX));
  /* 11dfe3bb call 0x11dfea20 */
  push32(0x11dfe3c0u); f_11dfea20();
L_11dfe3c0:;
  /* 11dfe3c0 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11dfe3c7 jmp 0x11dfe3e0 */
  goto L_11dfe3e0;
  /* 11dfe3c9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11dfe3cc push ecx */
  push32((uint32_t)(ECX));
  /* 11dfe3cd call 0x11dfe430 */
  push32(0x11dfe3d2u); f_11dfe430();
  /* 11dfe3d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfe3d5 ret  */
  ESPCHK(0x11dfe330u, _esp0);
  ESP += 4; return;
  /* 11dfe3d6 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11dfe3d9 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11dfe3e0:;
  /* 11dfe3e0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfe3e3 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11dfe3e6 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11dfe3e9 mov edx, dword ptr [eax + ecx*8] */
  EDX = (r32((uint32_t)(EAX + ECX*8)));
  /* 11dfe3ec mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11dfe3ef jmp 0x11dfe35f */
  goto L_11dfe35f;
L_11dfe3f4:;
  /* 11dfe3f4 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11dfe3f7 cmp eax, dword ptr [ebp + 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfe3fa jne 0x11dfe405 */
  if (!C.zf) goto L_11dfe405;
  /* 11dfe3fc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11dfe403 jmp 0x11dfe40d */
  goto L_11dfe40d;
L_11dfe405:;
  /* 11dfe405 call 0x11dfedd0 */
  push32(0x11dfe40au); f_11dfedd0();
  /* 11dfe40a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11dfe40d:;
  /* 11dfe40d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfe410 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11dfe413 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11dfe416 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11dfe419 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11dfe420 pop edi */
  EDI = (pop32());
  /* 11dfe421 pop esi */
  ESI = (pop32());
  /* 11dfe422 pop ebx */
  EBX = (pop32());
  /* 11dfe423 mov esp, ebp */
  ESP = (EBP);
  /* 11dfe425 pop ebp */
  EBP = (pop32());
  /* 11dfe426 ret  */
  ESPCHK(0x11dfe330u, _esp0);
  ESP += 4; return;
}

/* ArrayUnwindFilter @ 0x11dfe430 (44 bytes, 17 insns) */
void f_11dfe430(void) {
  FTRACE(0x11dfe430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfe430 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfe431 mov ebp, esp */
  EBP = (ESP);
  /* 11dfe433 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfe436 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfe439 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11dfe43b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11dfe43e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfe441 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11dfe443 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11dfe446 cmp dword ptr [ebp - 8], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfe44d je 0x11dfe451 */
  if (C.zf) goto L_11dfe451;
  /* 11dfe44f jmp 0x11dfe456 */
  goto L_11dfe456;
L_11dfe451:;
  /* 11dfe451 call 0x11dfed20 */
  push32(0x11dfe456u); f_11dfed20();
L_11dfe456:;
  /* 11dfe456 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dfe458 mov esp, ebp */
  ESP = (EBP);
  /* 11dfe45a pop ebp */
  EBP = (pop32());
  /* 11dfe45b ret  */
  ESPCHK(0x11dfe430u, _esp0);
  ESP += 4; return;
}

/* CatchIt @ 0x11dfe460 (183 bytes, 73 insns) */
void f_11dfe460(void) {
  FTRACE(0x11dfe460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfe460 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfe461 mov ebp, esp */
  EBP = (ESP);
  /* 11dfe463 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfe466 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfe469 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11dfe46c cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfe470 je 0x11dfe48a */
  if (C.zf) goto L_11dfe48a;
  /* 11dfe472 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11dfe475 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfe476 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11dfe479 push edx */
  push32((uint32_t)(EDX));
  /* 11dfe47a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfe47d push eax */
  push32((uint32_t)(EAX));
  /* 11dfe47e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfe481 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfe482 call 0x11dfe6c0 */
  push32(0x11dfe487u); f_11dfe6c0();
  /* 11dfe487 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dfe48a:;
  /* 11dfe48a cmp dword ptr [ebp + 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfe48e jne 0x11dfe49f */
  if (!C.zf) goto L_11dfe49f;
  /* 11dfe490 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfe493 push edx */
  push32((uint32_t)(EDX));
  /* 11dfe494 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfe497 push eax */
  push32((uint32_t)(EAX));
  /* 11dfe498 call 0x11df9ff0 */
  push32(0x11dfe49du); f_11df9ff0();
  /* 11dfe49d jmp 0x11dfe4ac */
  goto L_11dfe4ac;
L_11dfe49f:;
  /* 11dfe49f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfe4a2 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfe4a3 mov edx, dword ptr [ebp + 0x2c] */
  EDX = (r32((uint32_t)(EBP + 0x2c)));
  /* 11dfe4a6 push edx */
  push32((uint32_t)(EDX));
  /* 11dfe4a7 call 0x11df9ff0 */
  push32(0x11dfe4acu); f_11df9ff0();
L_11dfe4ac:;
  /* 11dfe4ac mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11dfe4af mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11dfe4b1 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfe4b2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11dfe4b5 push edx */
  push32((uint32_t)(EDX));
  /* 11dfe4b6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dfe4b9 push eax */
  push32((uint32_t)(EAX));
  /* 11dfe4ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfe4bd push ecx */
  push32((uint32_t)(ECX));
  /* 11dfe4be call 0x11dfe330 */
  push32(0x11dfe4c3u); f_11dfe330();
  /* 11dfe4c3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfe4c6 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 11dfe4c9 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11dfe4cc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfe4cf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfe4d2 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11dfe4d5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11dfe4da mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11dfe4dd push edx */
  push32((uint32_t)(EDX));
  /* 11dfe4de mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11dfe4e1 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11dfe4e4 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfe4e5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11dfe4e8 push edx */
  push32((uint32_t)(EDX));
  /* 11dfe4e9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfe4ec push eax */
  push32((uint32_t)(EAX));
  /* 11dfe4ed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfe4f0 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfe4f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfe4f4 push edx */
  push32((uint32_t)(EDX));
  /* 11dfe4f5 call 0x11dfe520 */
  push32(0x11dfe4fau); f_11dfe520();
  /* 11dfe4fa add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfe4fd mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11dfe500 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfe504 je 0x11dfe513 */
  if (C.zf) goto L_11dfe513;
  /* 11dfe506 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfe509 push eax */
  push32((uint32_t)(EAX));
  /* 11dfe50a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfe50d push ecx */
  push32((uint32_t)(ECX));
  /* 11dfe50e call 0x11df9f80 */
  push32(0x11dfe513u); f_11df9f80();
L_11dfe513:;
  /* 11dfe513 mov esp, ebp */
  ESP = (EBP);
  /* 11dfe515 pop ebp */
  EBP = (pop32());
  /* 11dfe516 ret  */
  ESPCHK(0x11dfe460u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e520 @ 0x11dfe520 (172 bytes, 66 insns) */
void f_11dfe520(void) {
  FTRACE(0x11dfe520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfe520 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfe521 mov ebp, esp */
  EBP = (ESP);
  /* 11dfe523 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11dfe525 push 0x11e2ae48 */
  push32((uint32_t)(0x11e2ae48u));
  /* 11dfe52a push 0x11e059ac */
  push32((uint32_t)(0x11e059acu));
  /* 11dfe52f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11dfe535 push eax */
  push32((uint32_t)(EAX));
  /* 11dfe536 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11dfe53d add esp, -0x20 */
  { uint32_t _a=(ESP),_b=(0xffffffe0u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfe540 push ebx */
  push32((uint32_t)(EBX));
  /* 11dfe541 push esi */
  push32((uint32_t)(ESI));
  /* 11dfe542 push edi */
  push32((uint32_t)(EDI));
  /* 11dfe543 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11dfe546 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11dfe549 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11dfe54c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11dfe553 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfe556 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11dfe559 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11dfe55c call 0x11dfeb50 */
  push32(0x11dfe561u); f_11dfeb50();
  /* 11dfe561 mov eax, dword ptr [eax + 0x6c] */
  EAX = (r32((uint32_t)(EAX + 0x6c)));
  /* 11dfe564 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11dfe567 call 0x11dfeb50 */
  push32(0x11dfe56cu); f_11dfeb50();
  /* 11dfe56c mov ecx, dword ptr [eax + 0x70] */
  ECX = (r32((uint32_t)(EAX + 0x70)));
  /* 11dfe56f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11dfe572 call 0x11dfeb50 */
  push32(0x11dfe577u); f_11dfeb50();
  /* 11dfe577 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfe57a mov dword ptr [eax + 0x6c], edx */
  w32((uint32_t)(EAX + 0x6c), (EDX));
  /* 11dfe57d call 0x11dfeb50 */
  push32(0x11dfe582u); f_11dfeb50();
  /* 11dfe582 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfe585 mov dword ptr [eax + 0x70], ecx */
  w32((uint32_t)(EAX + 0x70), (ECX));
  /* 11dfe588 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11dfe58f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11dfe596 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11dfe599 push edx */
  push32((uint32_t)(EDX));
  /* 11dfe59a mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11dfe59d push eax */
  push32((uint32_t)(EAX));
  /* 11dfe59e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11dfe5a1 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfe5a2 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dfe5a5 push edx */
  push32((uint32_t)(EDX));
  /* 11dfe5a6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfe5a9 push eax */
  push32((uint32_t)(EAX));
  /* 11dfe5aa call 0x11dfa0c0 */
  push32(0x11dfe5afu); f_11dfa0c0();
  /* 11dfe5af add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfe5b2 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11dfe5b5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11dfe5bc jmp 0x11dfe5ef */
  goto L_11dfe5ef;
  /* 11dfe5be mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11dfe5c1 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfe5c2 call 0x11dfe670 */
  push32(0x11dfe5c7u); f_11dfe670();
  /* 11dfe5c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfe5ca ret  */
  ESPCHK(0x11dfe520u, _esp0);
  ESP += 4; return;
  /* 11dfe5cb mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11dfe5ce mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11dfe5d5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11dfe5d7 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
  /* 11dfe5de lea edx, [ebp - 0x10] */
  EDX = ((uint32_t)(EBP + -0x10));
  /* 11dfe5e1 push edx */
  push32((uint32_t)(EDX));
  /* 11dfe5e2 call 0x11dfa3a2 */
  push32(0x11dfe5e7u); f_11dfa3a2();
  /* 11dfe5e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfe5ea mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11dfe5ed jmp 0x11dfe65e */
  jmp_ind(0x11dfe65eu); return;
L_11dfe5ef:;
  /* 11dfe5ef mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11dfe5f6 call 0x11dfe5fd */
  push32(0x11dfe5fbu); f_11dfe5fd();
  /* 11dfe5fb jmp 0x11dfe65b */
  f_11dfe65b(); return;
}

/* FUN_1000e5fd @ 0x11dfe5fd (94 bytes, 29 insns) */
void f_11dfe5fd(void) {
  FTRACE(0x11dfe5fdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfe5fd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfe600 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11dfe603 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 11dfe606 call 0x11dfeb50 */
  push32(0x11dfe60bu); f_11dfeb50();
  /* 11dfe60b mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11dfe60e mov dword ptr [eax + 0x6c], edx */
  w32((uint32_t)(EAX + 0x6c), (EDX));
  /* 11dfe611 call 0x11dfeb50 */
  push32(0x11dfe616u); f_11dfeb50();
  /* 11dfe616 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11dfe619 mov dword ptr [eax + 0x70], ecx */
  w32((uint32_t)(EAX + 0x70), (ECX));
  /* 11dfe61c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfe61f cmp dword ptr [edx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfe625 jne 0x11dfe65a */
  if (!C.zf) goto L_11dfe65a;
  /* 11dfe627 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfe62a cmp dword ptr [eax + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfe62e jne 0x11dfe65a */
  if (!C.zf) goto L_11dfe65a;
  /* 11dfe630 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfe633 cmp dword ptr [ecx + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfe63a jne 0x11dfe65a */
  if (!C.zf) goto L_11dfe65a;
  /* 11dfe63c cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfe640 jne 0x11dfe65a */
  if (!C.zf) goto L_11dfe65a;
  /* 11dfe642 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfe646 je 0x11dfe65a */
  if (C.zf) goto L_11dfe65a;
  /* 11dfe648 call 0x11dfa40a */
  push32(0x11dfe64du); f_11dfa40a();
  /* 11dfe64d push eax */
  push32((uint32_t)(EAX));
  /* 11dfe64e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfe651 push edx */
  push32((uint32_t)(EDX));
  /* 11dfe652 call 0x11dfe940 */
  push32(0x11dfe657u); f_11dfe940();
  /* 11dfe657 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dfe65a:;
  /* 11dfe65a ret  */
  ESPCHK(0x11dfe5fdu, _esp0);
  ESP += 4; return;
}

/* FUN_1000e65b @ 0x11dfe65b (20 bytes, 9 insns) */
void f_11dfe65b(void) {
  FTRACE(0x11dfe65bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfe65b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11dfe65e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11dfe661 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11dfe668 pop edi */
  EDI = (pop32());
  /* 11dfe669 pop esi */
  ESI = (pop32());
  /* 11dfe66a pop ebx */
  EBX = (pop32());
  /* 11dfe66b mov esp, ebp */
  ESP = (EBP);
  /* 11dfe66d pop ebp */
  EBP = (pop32());
  /* 11dfe66e ret  */
  ESPCHK(0x11dfe65bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000e670 @ 0x11dfe670 (66 bytes, 24 insns) */
void f_11dfe670(void) {
  FTRACE(0x11dfe670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfe670 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfe671 mov ebp, esp */
  EBP = (ESP);
  /* 11dfe673 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfe674 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfe677 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11dfe679 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11dfe67c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfe67f cmp dword ptr [edx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfe685 jne 0x11dfe6ac */
  if (!C.zf) goto L_11dfe6ac;
  /* 11dfe687 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfe68a cmp dword ptr [eax + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfe68e jne 0x11dfe6ac */
  if (!C.zf) goto L_11dfe6ac;
  /* 11dfe690 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfe693 cmp dword ptr [ecx + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfe69a jne 0x11dfe6ac */
  if (!C.zf) goto L_11dfe6ac;
  /* 11dfe69c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfe69f cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfe6a3 jne 0x11dfe6ac */
  if (!C.zf) goto L_11dfe6ac;
  /* 11dfe6a5 mov eax, 1 */
  EAX = (0x1u);
  /* 11dfe6aa jmp 0x11dfe6ae */
  goto L_11dfe6ae;
L_11dfe6ac:;
  /* 11dfe6ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11dfe6ae:;
  /* 11dfe6ae mov esp, ebp */
  ESP = (EBP);
  /* 11dfe6b0 pop ebp */
  EBP = (pop32());
  /* 11dfe6b1 ret  */
  ESPCHK(0x11dfe670u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e6c0 @ 0x11dfe6c0 (621 bytes, 229 insns) */
void f_11dfe6c0(void) {
  FTRACE(0x11dfe6c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfe6c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfe6c1 mov ebp, esp */
  EBP = (ESP);
  /* 11dfe6c3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11dfe6c5 push 0x11e2ae60 */
  push32((uint32_t)(0x11e2ae60u));
  /* 11dfe6ca push 0x11e059ac */
  push32((uint32_t)(0x11e059acu));
  /* 11dfe6cf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11dfe6d5 push eax */
  push32((uint32_t)(EAX));
  /* 11dfe6d6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11dfe6dd add esp, -0xc */
  { uint32_t _a=(ESP),_b=(0xfffffff4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfe6e0 push ebx */
  push32((uint32_t)(EBX));
  /* 11dfe6e1 push esi */
  push32((uint32_t)(ESI));
  /* 11dfe6e2 push edi */
  push32((uint32_t)(EDI));
  /* 11dfe6e3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11dfe6e6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfe6e9 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfe6ed je 0x11dfe706 */
  if (C.zf) goto L_11dfe706;
  /* 11dfe6ef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfe6f2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11dfe6f5 movsx eax, byte ptr [edx + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x8))));
  /* 11dfe6f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfe6fb je 0x11dfe706 */
  if (C.zf) goto L_11dfe706;
  /* 11dfe6fd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfe700 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfe704 jne 0x11dfe70b */
  if (!C.zf) goto L_11dfe70b;
L_11dfe706:;
  /* 11dfe706 jmp 0x11dfe92a */
  goto L_11dfe92a;
L_11dfe70b:;
  /* 11dfe70b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfe70e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11dfe711 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfe714 lea edx, [ecx + eax + 0xc] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0xc));
  /* 11dfe718 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11dfe71b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11dfe722 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfe725 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11dfe727 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11dfe72a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11dfe72c je 0x11dfe786 */
  if (C.zf) goto L_11dfe786;
  /* 11dfe72e push 1 */
  push32((uint32_t)(0x1u));
  /* 11dfe730 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfe733 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11dfe736 push eax */
  push32((uint32_t)(EAX));
  /* 11dfe737 call 0x11e05890 */
  push32(0x11dfe73cu); f_11e05890();
  /* 11dfe73c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfe73f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfe741 je 0x11dfe77c */
  if (C.zf) goto L_11dfe77c;
  /* 11dfe743 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dfe745 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11dfe748 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfe749 call 0x11e058c0 */
  push32(0x11dfe74eu); f_11e058c0();
  /* 11dfe74e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfe751 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfe753 je 0x11dfe77c */
  if (C.zf) goto L_11dfe77c;
  /* 11dfe755 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11dfe758 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfe75b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11dfe75e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11dfe760 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dfe763 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfe766 push edx */
  push32((uint32_t)(EDX));
  /* 11dfe767 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11dfe76a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11dfe76c push ecx */
  push32((uint32_t)(ECX));
  /* 11dfe76d call 0x11dfe9d0 */
  push32(0x11dfe772u); f_11dfe9d0();
  /* 11dfe772 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfe775 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11dfe778 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11dfe77a jmp 0x11dfe781 */
  goto L_11dfe781;
L_11dfe77c:;
  /* 11dfe77c call 0x11dfedd0 */
  push32(0x11dfe781u); f_11dfedd0();
L_11dfe781:;
  /* 11dfe781 jmp 0x11dfe913 */
  goto L_11dfe913;
L_11dfe786:;
  /* 11dfe786 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dfe789 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11dfe78b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11dfe78e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11dfe790 je 0x11dfe80a */
  if (C.zf) goto L_11dfe80a;
  /* 11dfe792 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dfe794 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfe797 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11dfe79a push eax */
  push32((uint32_t)(EAX));
  /* 11dfe79b call 0x11e05890 */
  push32(0x11dfe7a0u); f_11e05890();
  /* 11dfe7a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfe7a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfe7a5 je 0x11dfe800 */
  if (C.zf) goto L_11dfe800;
  /* 11dfe7a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dfe7a9 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11dfe7ac push ecx */
  push32((uint32_t)(ECX));
  /* 11dfe7ad call 0x11e058c0 */
  push32(0x11dfe7b2u); f_11e058c0();
  /* 11dfe7b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfe7b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfe7b7 je 0x11dfe800 */
  if (C.zf) goto L_11dfe800;
  /* 11dfe7b9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dfe7bc mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11dfe7bf push eax */
  push32((uint32_t)(EAX));
  /* 11dfe7c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfe7c3 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11dfe7c6 push edx */
  push32((uint32_t)(EDX));
  /* 11dfe7c7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11dfe7ca push eax */
  push32((uint32_t)(EAX));
  /* 11dfe7cb call 0x11e032f0 */
  push32(0x11dfe7d0u); f_11e032f0();
  /* 11dfe7d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfe7d3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dfe7d6 cmp dword ptr [ecx + 0x14], 4 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfe7da jne 0x11dfe7fe */
  if (!C.zf) goto L_11dfe7fe;
  /* 11dfe7dc mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11dfe7df cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfe7e2 je 0x11dfe7fe */
  if (C.zf) goto L_11dfe7fe;
  /* 11dfe7e4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dfe7e7 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfe7ea push eax */
  push32((uint32_t)(EAX));
  /* 11dfe7eb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11dfe7ee mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11dfe7f0 push edx */
  push32((uint32_t)(EDX));
  /* 11dfe7f1 call 0x11dfe9d0 */
  push32(0x11dfe7f6u); f_11dfe9d0();
  /* 11dfe7f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfe7f9 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11dfe7fc mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11dfe7fe:;
  /* 11dfe7fe jmp 0x11dfe805 */
  goto L_11dfe805;
L_11dfe800:;
  /* 11dfe800 call 0x11dfedd0 */
  push32(0x11dfe805u); f_11dfedd0();
L_11dfe805:;
  /* 11dfe805 jmp 0x11dfe913 */
  goto L_11dfe913;
L_11dfe80a:;
  /* 11dfe80a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dfe80d cmp dword ptr [edx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfe811 jne 0x11dfe870 */
  if (!C.zf) goto L_11dfe870;
  /* 11dfe813 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dfe815 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfe818 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11dfe81b push ecx */
  push32((uint32_t)(ECX));
  /* 11dfe81c call 0x11e05890 */
  push32(0x11dfe821u); f_11e05890();
  /* 11dfe821 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfe824 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfe826 je 0x11dfe866 */
  if (C.zf) goto L_11dfe866;
  /* 11dfe828 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dfe82a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11dfe82d push edx */
  push32((uint32_t)(EDX));
  /* 11dfe82e call 0x11e058c0 */
  push32(0x11dfe833u); f_11e058c0();
  /* 11dfe833 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfe836 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfe838 je 0x11dfe866 */
  if (C.zf) goto L_11dfe866;
  /* 11dfe83a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dfe83d mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11dfe840 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfe841 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dfe844 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfe847 push edx */
  push32((uint32_t)(EDX));
  /* 11dfe848 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfe84b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11dfe84e push ecx */
  push32((uint32_t)(ECX));
  /* 11dfe84f call 0x11dfe9d0 */
  push32(0x11dfe854u); f_11dfe9d0();
  /* 11dfe854 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfe857 push eax */
  push32((uint32_t)(EAX));
  /* 11dfe858 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11dfe85b push edx */
  push32((uint32_t)(EDX));
  /* 11dfe85c call 0x11e032f0 */
  push32(0x11dfe861u); f_11e032f0();
  /* 11dfe861 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfe864 jmp 0x11dfe86b */
  goto L_11dfe86b;
L_11dfe866:;
  /* 11dfe866 call 0x11dfedd0 */
  push32(0x11dfe86bu); f_11dfedd0();
L_11dfe86b:;
  /* 11dfe86b jmp 0x11dfe913 */
  goto L_11dfe913;
L_11dfe870:;
  /* 11dfe870 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dfe872 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfe875 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11dfe878 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfe879 call 0x11e05890 */
  push32(0x11dfe87eu); f_11e05890();
  /* 11dfe87e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfe881 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfe883 je 0x11dfe90e */
  if (C.zf) goto L_11dfe90e;
  /* 11dfe889 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dfe88b mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11dfe88e push edx */
  push32((uint32_t)(EDX));
  /* 11dfe88f call 0x11e058c0 */
  push32(0x11dfe894u); f_11e058c0();
  /* 11dfe894 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfe897 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfe899 je 0x11dfe90e */
  if (C.zf) goto L_11dfe90e;
  /* 11dfe89b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dfe89e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11dfe8a1 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfe8a2 call 0x11e058f0 */
  push32(0x11dfe8a7u); f_11e058f0();
  /* 11dfe8a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfe8aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfe8ac je 0x11dfe90e */
  if (C.zf) goto L_11dfe90e;
  /* 11dfe8ae mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dfe8b1 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11dfe8b3 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11dfe8b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfe8b8 je 0x11dfe8e5 */
  if (C.zf) goto L_11dfe8e5;
  /* 11dfe8ba push 1 */
  push32((uint32_t)(0x1u));
  /* 11dfe8bc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dfe8bf add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfe8c2 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfe8c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfe8c6 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11dfe8c9 push eax */
  push32((uint32_t)(EAX));
  /* 11dfe8ca call 0x11dfe9d0 */
  push32(0x11dfe8cfu); f_11dfe9d0();
  /* 11dfe8cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfe8d2 push eax */
  push32((uint32_t)(EAX));
  /* 11dfe8d3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dfe8d6 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11dfe8d9 push edx */
  push32((uint32_t)(EDX));
  /* 11dfe8da mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11dfe8dd push eax */
  push32((uint32_t)(EAX));
  /* 11dfe8de call 0x11df9fe0 */
  push32(0x11dfe8e3u); f_11df9fe0();
  /* 11dfe8e3 jmp 0x11dfe90c */
  goto L_11dfe90c;
L_11dfe8e5:;
  /* 11dfe8e5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dfe8e8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfe8eb push ecx */
  push32((uint32_t)(ECX));
  /* 11dfe8ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfe8ef mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11dfe8f2 push eax */
  push32((uint32_t)(EAX));
  /* 11dfe8f3 call 0x11dfe9d0 */
  push32(0x11dfe8f8u); f_11dfe9d0();
  /* 11dfe8f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfe8fb push eax */
  push32((uint32_t)(EAX));
  /* 11dfe8fc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11dfe8ff mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11dfe902 push edx */
  push32((uint32_t)(EDX));
  /* 11dfe903 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11dfe906 push eax */
  push32((uint32_t)(EAX));
  /* 11dfe907 call 0x11df9fd0 */
  push32(0x11dfe90cu); f_11df9fd0();
L_11dfe90c:;
  /* 11dfe90c jmp 0x11dfe913 */
  goto L_11dfe913;
L_11dfe90e:;
  /* 11dfe90e call 0x11dfedd0 */
  push32(0x11dfe913u); f_11dfedd0();
L_11dfe913:;
  /* 11dfe913 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11dfe91a jmp 0x11dfe92a */
  goto L_11dfe92a;
  /* 11dfe91c mov eax, 1 */
  EAX = (0x1u);
  /* 11dfe921 ret  */
  ESPCHK(0x11dfe6c0u, _esp0);
  ESP += 4; return;
  /* 11dfe922 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11dfe925 call 0x11dfed20 */
  push32(0x11dfe92au); f_11dfed20();
L_11dfe92a:;
  /* 11dfe92a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11dfe92d mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11dfe934 pop edi */
  EDI = (pop32());
  /* 11dfe935 pop esi */
  ESI = (pop32());
  /* 11dfe936 pop ebx */
  EBX = (pop32());
  /* 11dfe937 mov esp, ebp */
  ESP = (EBP);
  /* 11dfe939 pop ebp */
  EBP = (pop32());
  /* 11dfe93a ret  */
  ESPCHK(0x11dfe6c0u, _esp0);
  ESP += 4; return;
}

/* ___DestructExceptionObject @ 0x11dfe940 (111 bytes, 46 insns) */
void f_11dfe940(void) {
  FTRACE(0x11dfe940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfe940 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfe941 mov ebp, esp */
  EBP = (ESP);
  /* 11dfe943 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11dfe945 push 0x11e2ae70 */
  push32((uint32_t)(0x11e2ae70u));
  /* 11dfe94a push 0x11e059ac */
  push32((uint32_t)(0x11e059acu));
  /* 11dfe94f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11dfe955 push eax */
  push32((uint32_t)(EAX));
  /* 11dfe956 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11dfe95d sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfe960 push ebx */
  push32((uint32_t)(EBX));
  /* 11dfe961 push esi */
  push32((uint32_t)(ESI));
  /* 11dfe962 push edi */
  push32((uint32_t)(EDI));
  /* 11dfe963 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11dfe966 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfe96a je 0x11dfe9b5 */
  if (C.zf) goto L_11dfe9b5;
  /* 11dfe96c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfe96f mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11dfe972 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfe976 je 0x11dfe9b5 */
  if (C.zf) goto L_11dfe9b5;
  /* 11dfe978 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11dfe97f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfe982 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11dfe985 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11dfe988 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfe989 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfe98c mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11dfe98f push eax */
  push32((uint32_t)(EAX));
  /* 11dfe990 call 0x11df9fc0 */
  push32(0x11dfe995u); f_11df9fc0();
  /* 11dfe995 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11dfe99c jmp 0x11dfe9b5 */
  goto L_11dfe9b5;
  /* 11dfe99e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfe9a1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11dfe9a6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11dfe9a8 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfe9aa neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11dfe9ac ret  */
  ESPCHK(0x11dfe940u, _esp0);
  ESP += 4; return;
  /* 11dfe9ad mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11dfe9b0 call 0x11dfed20 */
  push32(0x11dfe9b5u); f_11dfed20();
L_11dfe9b5:;
  /* 11dfe9b5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11dfe9b8 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11dfe9bf pop edi */
  EDI = (pop32());
  /* 11dfe9c0 pop esi */
  ESI = (pop32());
  /* 11dfe9c1 pop ebx */
  EBX = (pop32());
  /* 11dfe9c2 mov esp, ebp */
  ESP = (EBP);
  /* 11dfe9c4 pop ebp */
  EBP = (pop32());
  /* 11dfe9c5 ret  */
  ESPCHK(0x11dfe940u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:___AdjustPointer @ 0x11dfe9d0 (70 bytes, 27 insns) */
void f_11dfe9d0(void) {
  FTRACE(0x11dfe9d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfe9d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfe9d1 mov ebp, esp */
  EBP = (ESP);
  /* 11dfe9d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfe9d4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfe9d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfe9da add ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfe9dc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11dfe9df mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfe9e2 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfe9e6 jl 0x11dfea0f */
  if ((C.sf!=C.of)) goto L_11dfea0f;
  /* 11dfe9e8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfe9eb mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11dfe9ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfe9f1 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 11dfe9f4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfe9f7 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11dfe9fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfe9fd add ecx, dword ptr [eax + edx] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*1))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfea00 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11dfea03 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfea06 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfea09 add eax, dword ptr [edx + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfea0c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11dfea0f:;
  /* 11dfea0f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfea12 mov esp, ebp */
  ESP = (EBP);
  /* 11dfea14 pop ebp */
  EBP = (pop32());
  /* 11dfea15 ret  */
  ESPCHK(0x11dfe9d0u, _esp0);
  ESP += 4; return;
}

/* __CallSettingFrame@12 @ 0x11dfea20 (76 bytes, 34 insns) */
void f_11dfea20(void) {
  FTRACE(0x11dfea20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfea20 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfea21 mov ebp, esp */
  EBP = (ESP);
  /* 11dfea23 sub esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfea26 push ebx */
  push32((uint32_t)(EBX));
  /* 11dfea27 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfea28 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dfea2b add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfea2e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11dfea31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfea34 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfea35 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11dfea38 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfea3b mov ebp, dword ptr [ebp - 4] */
  EBP = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfea3e call 0x11dfa42d */
  push32(0x11dfea43u); f_11dfa42d();
  /* 11dfea43 push esi */
  push32((uint32_t)(ESI));
  /* 11dfea44 push edi */
  push32((uint32_t)(EDI));
  /* 11dfea45 call eax */
  call_ind((uint32_t)(EAX), 0x11dfea47u);
  /* 11dfea47 pop edi */
  EDI = (pop32());
  /* 11dfea48 pop esi */
  ESI = (pop32());
  /* 11dfea49 mov ebx, ebp */
  EBX = (EBP);
  /* 11dfea4b pop ebp */
  EBP = (pop32());
  /* 11dfea4c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dfea4f push ebp */
  push32((uint32_t)(EBP));
  /* 11dfea50 mov ebp, ebx */
  EBP = (EBX);
  /* 11dfea52 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfea58 jne 0x11dfea5f */
  if (!C.zf) goto L_11dfea5f;
  /* 11dfea5a mov ecx, 2 */
  ECX = (0x2u);
L_11dfea5f:;
  /* 11dfea5f push ecx */
  push32((uint32_t)(ECX));
  /* 11dfea60 call 0x11dfa42d */
  push32(0x11dfea65u); f_11dfa42d();
  /* 11dfea65 pop ebp */
  EBP = (pop32());
  /* 11dfea66 pop ecx */
  ECX = (pop32());
  /* 11dfea67 pop ebx */
  EBX = (pop32());
  /* 11dfea68 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11dfea69 ret 0xc */
  ESPCHK(0x11dfea20u, _esp0);
  ESP += 16; return;
}

/* FUN_1000ea70 @ 0x11dfea70 (130 bytes, 42 insns) */
void f_11dfea70(void) {
  FTRACE(0x11dfea70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfea70 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfea71 mov ebp, esp */
  EBP = (ESP);
  /* 11dfea73 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfea74 call 0x11dfbc70 */
  push32(0x11dfea79u); f_11dfbc70();
  /* 11dfea79 call dword ptr [0x11e33414] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33414))), 0x11dfea7fu);
  /* 11dfea7f mov dword ptr [0x11e2df30], eax */
  w32((uint32_t)(0x11e2df30), (EAX));
  /* 11dfea84 cmp dword ptr [0x11e2df30], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11e2df30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfea8b jne 0x11dfea91 */
  if (!C.zf) goto L_11dfea91;
  /* 11dfea8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dfea8f jmp 0x11dfeaee */
  goto L_11dfeaee;
L_11dfea91:;
  /* 11dfea91 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 11dfea93 push 0x11e2ae7c */
  push32((uint32_t)(0x11e2ae7cu));
  /* 11dfea98 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dfea9a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11dfea9c push 1 */
  push32((uint32_t)(0x1u));
  /* 11dfea9e call 0x11dfc260 */
  push32(0x11dfeaa3u); f_11dfc260();
  /* 11dfeaa3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfeaa6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11dfeaa9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfeaad je 0x11dfeac4 */
  if (C.zf) goto L_11dfeac4;
  /* 11dfeaaf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfeab2 push eax */
  push32((uint32_t)(EAX));
  /* 11dfeab3 mov ecx, dword ptr [0x11e2df30] */
  ECX = (r32((uint32_t)(0x11e2df30)));
  /* 11dfeab9 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfeaba call dword ptr [0x11e33410] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33410))), 0x11dfeac0u);
  /* 11dfeac0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfeac2 jne 0x11dfeac8 */
  if (!C.zf) goto L_11dfeac8;
L_11dfeac4:;
  /* 11dfeac4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dfeac6 jmp 0x11dfeaee */
  goto L_11dfeaee;
L_11dfeac8:;
  /* 11dfeac8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfeacb push edx */
  push32((uint32_t)(EDX));
  /* 11dfeacc call 0x11dfeb30 */
  push32(0x11dfead1u); f_11dfeb30();
  /* 11dfead1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfead4 call dword ptr [0x11e3340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3340c))), 0x11dfeadau);
  /* 11dfeada mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfeadd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11dfeadf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfeae2 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 11dfeae9 mov eax, 1 */
  EAX = (0x1u);
L_11dfeaee:;
  /* 11dfeaee mov esp, ebp */
  ESP = (EBP);
  /* 11dfeaf0 pop ebp */
  EBP = (pop32());
  /* 11dfeaf1 ret  */
  ESPCHK(0x11dfea70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb00 @ 0x11dfeb00 (41 bytes, 11 insns) */
void f_11dfeb00(void) {
  FTRACE(0x11dfeb00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfeb00 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfeb01 mov ebp, esp */
  EBP = (ESP);
  /* 11dfeb03 call 0x11dfbcb0 */
  push32(0x11dfeb08u); f_11dfbcb0();
  /* 11dfeb08 cmp dword ptr [0x11e2df30], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11e2df30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfeb0f je 0x11dfeb27 */
  if (C.zf) goto L_11dfeb27;
  /* 11dfeb11 mov eax, dword ptr [0x11e2df30] */
  EAX = (r32((uint32_t)(0x11e2df30)));
  /* 11dfeb16 push eax */
  push32((uint32_t)(EAX));
  /* 11dfeb17 call dword ptr [0x11e33418] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33418))), 0x11dfeb1du);
  /* 11dfeb1d mov dword ptr [0x11e2df30], 0xffffffff */
  w32((uint32_t)(0x11e2df30), (0xffffffffu));
L_11dfeb27:;
  /* 11dfeb27 pop ebp */
  EBP = (pop32());
  /* 11dfeb28 ret  */
  ESPCHK(0x11dfeb00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb30 @ 0x11dfeb30 (25 bytes, 8 insns) */
void f_11dfeb30(void) {
  FTRACE(0x11dfeb30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfeb30 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfeb31 mov ebp, esp */
  EBP = (ESP);
  /* 11dfeb33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfeb36 mov dword ptr [eax + 0x50], 0x11e2e260 */
  w32((uint32_t)(EAX + 0x50), (0x11e2e260u));
  /* 11dfeb3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfeb40 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 11dfeb47 pop ebp */
  EBP = (pop32());
  /* 11dfeb48 ret  */
  ESPCHK(0x11dfeb30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb50 @ 0x11dfeb50 (152 bytes, 48 insns) */
void f_11dfeb50(void) {
  FTRACE(0x11dfeb50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfeb50 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfeb51 mov ebp, esp */
  EBP = (ESP);
  /* 11dfeb53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfeb56 call dword ptr [0x11e333b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333b4))), 0x11dfeb5cu);
  /* 11dfeb5c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11dfeb5f mov eax, dword ptr [0x11e2df30] */
  EAX = (r32((uint32_t)(0x11e2df30)));
  /* 11dfeb64 push eax */
  push32((uint32_t)(EAX));
  /* 11dfeb65 call dword ptr [0x11e333e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333e8))), 0x11dfeb6bu);
  /* 11dfeb6b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11dfeb6e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfeb72 jne 0x11dfebd7 */
  if (!C.zf) goto L_11dfebd7;
  /* 11dfeb74 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 11dfeb79 push 0x11e2ae7c */
  push32((uint32_t)(0x11e2ae7cu));
  /* 11dfeb7e push 2 */
  push32((uint32_t)(0x2u));
  /* 11dfeb80 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11dfeb82 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dfeb84 call 0x11dfc260 */
  push32(0x11dfeb89u); f_11dfc260();
  /* 11dfeb89 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfeb8c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11dfeb8f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfeb93 je 0x11dfebcd */
  if (C.zf) goto L_11dfebcd;
  /* 11dfeb95 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfeb98 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfeb99 mov edx, dword ptr [0x11e2df30] */
  EDX = (r32((uint32_t)(0x11e2df30)));
  /* 11dfeb9f push edx */
  push32((uint32_t)(EDX));
  /* 11dfeba0 call dword ptr [0x11e33410] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33410))), 0x11dfeba6u);
  /* 11dfeba6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfeba8 je 0x11dfebcd */
  if (C.zf) goto L_11dfebcd;
  /* 11dfebaa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfebad push eax */
  push32((uint32_t)(EAX));
  /* 11dfebae call 0x11dfeb30 */
  push32(0x11dfebb3u); f_11dfeb30();
  /* 11dfebb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfebb6 call dword ptr [0x11e3340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3340c))), 0x11dfebbcu);
  /* 11dfebbc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfebbf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11dfebc1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfebc4 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 11dfebcb jmp 0x11dfebd7 */
  goto L_11dfebd7;
L_11dfebcd:;
  /* 11dfebcd push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11dfebcf call 0x11dfa8c0 */
  push32(0x11dfebd4u); f_11dfa8c0();
  /* 11dfebd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dfebd7:;
  /* 11dfebd7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dfebda push eax */
  push32((uint32_t)(EAX));
  /* 11dfebdb call dword ptr [0x11e3341c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3341c))), 0x11dfebe1u);
  /* 11dfebe1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfebe4 mov esp, ebp */
  ESP = (EBP);
  /* 11dfebe6 pop ebp */
  EBP = (pop32());
  /* 11dfebe7 ret  */
  ESPCHK(0x11dfeb50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ebf0 @ 0x11dfebf0 (263 bytes, 86 insns) */
void f_11dfebf0(void) {
  FTRACE(0x11dfebf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfebf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfebf1 mov ebp, esp */
  EBP = (ESP);
  /* 11dfebf3 cmp dword ptr [0x11e2df30], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11e2df30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfebfa je 0x11dfecf5 */
  if (C.zf) goto L_11dfecf5;
  /* 11dfec00 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfec04 jne 0x11dfec15 */
  if (!C.zf) goto L_11dfec15;
  /* 11dfec06 mov eax, dword ptr [0x11e2df30] */
  EAX = (r32((uint32_t)(0x11e2df30)));
  /* 11dfec0b push eax */
  push32((uint32_t)(EAX));
  /* 11dfec0c call dword ptr [0x11e333e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333e8))), 0x11dfec12u);
  /* 11dfec12 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11dfec15:;
  /* 11dfec15 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfec19 je 0x11dfece6 */
  if (C.zf) goto L_11dfece6;
  /* 11dfec1f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfec22 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfec26 je 0x11dfec39 */
  if (C.zf) goto L_11dfec39;
  /* 11dfec28 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dfec2a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfec2d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 11dfec30 push eax */
  push32((uint32_t)(EAX));
  /* 11dfec31 call 0x11dfc8e0 */
  push32(0x11dfec36u); f_11dfc8e0();
  /* 11dfec36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dfec39:;
  /* 11dfec39 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfec3c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfec40 je 0x11dfec53 */
  if (C.zf) goto L_11dfec53;
  /* 11dfec42 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dfec44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfec47 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 11dfec4a push eax */
  push32((uint32_t)(EAX));
  /* 11dfec4b call 0x11dfc8e0 */
  push32(0x11dfec50u); f_11dfc8e0();
  /* 11dfec50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dfec53:;
  /* 11dfec53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfec56 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfec5a je 0x11dfec6d */
  if (C.zf) goto L_11dfec6d;
  /* 11dfec5c push 2 */
  push32((uint32_t)(0x2u));
  /* 11dfec5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfec61 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 11dfec64 push eax */
  push32((uint32_t)(EAX));
  /* 11dfec65 call 0x11dfc8e0 */
  push32(0x11dfec6au); f_11dfc8e0();
  /* 11dfec6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dfec6d:;
  /* 11dfec6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfec70 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfec74 je 0x11dfec87 */
  if (C.zf) goto L_11dfec87;
  /* 11dfec76 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dfec78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfec7b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 11dfec7e push eax */
  push32((uint32_t)(EAX));
  /* 11dfec7f call 0x11dfc8e0 */
  push32(0x11dfec84u); f_11dfc8e0();
  /* 11dfec84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dfec87:;
  /* 11dfec87 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfec8a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfec8e je 0x11dfeca1 */
  if (C.zf) goto L_11dfeca1;
  /* 11dfec90 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dfec92 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfec95 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 11dfec98 push eax */
  push32((uint32_t)(EAX));
  /* 11dfec99 call 0x11dfc8e0 */
  push32(0x11dfec9eu); f_11dfc8e0();
  /* 11dfec9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dfeca1:;
  /* 11dfeca1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfeca4 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfeca8 je 0x11dfecbb */
  if (C.zf) goto L_11dfecbb;
  /* 11dfecaa push 2 */
  push32((uint32_t)(0x2u));
  /* 11dfecac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfecaf mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 11dfecb2 push eax */
  push32((uint32_t)(EAX));
  /* 11dfecb3 call 0x11dfc8e0 */
  push32(0x11dfecb8u); f_11dfc8e0();
  /* 11dfecb8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dfecbb:;
  /* 11dfecbb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfecbe cmp dword ptr [ecx + 0x50], 0x11e2e260 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x11e2e260u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfecc5 je 0x11dfecd8 */
  if (C.zf) goto L_11dfecd8;
  /* 11dfecc7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dfecc9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfeccc mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 11dfeccf push eax */
  push32((uint32_t)(EAX));
  /* 11dfecd0 call 0x11dfc8e0 */
  push32(0x11dfecd5u); f_11dfc8e0();
  /* 11dfecd5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dfecd8:;
  /* 11dfecd8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dfecda mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfecdd push ecx */
  push32((uint32_t)(ECX));
  /* 11dfecde call 0x11dfc8e0 */
  push32(0x11dfece3u); f_11dfc8e0();
  /* 11dfece3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dfece6:;
  /* 11dfece6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfece8 mov edx, dword ptr [0x11e2df30] */
  EDX = (r32((uint32_t)(0x11e2df30)));
  /* 11dfecee push edx */
  push32((uint32_t)(EDX));
  /* 11dfecef call dword ptr [0x11e33410] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33410))), 0x11dfecf5u);
L_11dfecf5:;
  /* 11dfecf5 pop ebp */
  EBP = (pop32());
  /* 11dfecf6 ret  */
  ESPCHK(0x11dfebf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed00 @ 0x11dfed00 (11 bytes, 5 insns) */
void f_11dfed00(void) {
  FTRACE(0x11dfed00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfed00 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfed01 mov ebp, esp */
  EBP = (ESP);
  /* 11dfed03 call dword ptr [0x11e3340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e3340c))), 0x11dfed09u);
  /* 11dfed09 pop ebp */
  EBP = (pop32());
  /* 11dfed0a ret  */
  ESPCHK(0x11dfed00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed10 @ 0x11dfed10 (11 bytes, 5 insns) */
void f_11dfed10(void) {
  FTRACE(0x11dfed10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfed10 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfed11 mov ebp, esp */
  EBP = (ESP);
  /* 11dfed13 call dword ptr [0x11e333b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333b0))), 0x11dfed19u);
  /* 11dfed19 pop ebp */
  EBP = (pop32());
  /* 11dfed1a ret  */
  ESPCHK(0x11dfed10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed20 @ 0x11dfed20 (92 bytes, 29 insns) */
void f_11dfed20(void) {
  FTRACE(0x11dfed20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfed20 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfed21 mov ebp, esp */
  EBP = (ESP);
  /* 11dfed23 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11dfed25 push 0x11e2ae88 */
  push32((uint32_t)(0x11e2ae88u));
  /* 11dfed2a push 0x11e059ac */
  push32((uint32_t)(0x11e059acu));
  /* 11dfed2f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11dfed35 push eax */
  push32((uint32_t)(EAX));
  /* 11dfed36 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11dfed3d sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfed40 push ebx */
  push32((uint32_t)(EBX));
  /* 11dfed41 push esi */
  push32((uint32_t)(ESI));
  /* 11dfed42 push edi */
  push32((uint32_t)(EDI));
  /* 11dfed43 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11dfed46 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11dfed4d call 0x11dfeb50 */
  push32(0x11dfed52u); f_11dfeb50();
  /* 11dfed52 cmp dword ptr [eax + 0x60], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfed56 je 0x11dfed80 */
  if (C.zf) goto L_11dfed80;
  /* 11dfed58 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11dfed5f call 0x11dfeb50 */
  push32(0x11dfed64u); f_11dfeb50();
  /* 11dfed64 call dword ptr [eax + 0x60] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x60))), 0x11dfed67u);
  /* 11dfed67 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11dfed6e jmp 0x11dfed80 */
  goto L_11dfed80;
  /* 11dfed70 mov eax, 1 */
  EAX = (0x1u);
  /* 11dfed75 ret  */
  ESPCHK(0x11dfed20u, _esp0);
  ESP += 4; return;
  /* 11dfed76 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11dfed79 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11dfed80:;
  /* 11dfed80 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11dfed87 call 0x11dfed8e */
  push32(0x11dfed8cu); f_11dfed8e();
  /* 11dfed8c jmp 0x11dfed94 */
  jmp_ind(0x11dfed94u); return;
}

/* _abort @ 0x11dfed8e (5 bytes, 2 insns) */
void f_11dfed8e(void) {
  FTRACE(0x11dfed8eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfed8e call 0x11e05cb0 */
  push32(0x11dfed93u); f_11e05cb0();
  /* 11dfed93 ret  */
  ESPCHK(0x11dfed8eu, _esp0);
  ESP += 4; return;
}

/* FUN_1000edb0 @ 0x11dfedb0 (29 bytes, 10 insns) */
void f_11dfedb0(void) {
  FTRACE(0x11dfedb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfedb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfedb1 mov ebp, esp */
  EBP = (ESP);
  /* 11dfedb3 call 0x11dfeb50 */
  push32(0x11dfedb8u); f_11dfeb50();
  /* 11dfedb8 cmp dword ptr [eax + 0x64], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfedbc je 0x11dfedc6 */
  if (C.zf) goto L_11dfedc6;
  /* 11dfedbe call 0x11dfeb50 */
  push32(0x11dfedc3u); f_11dfeb50();
  /* 11dfedc3 call dword ptr [eax + 0x64] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x64))), 0x11dfedc6u);
L_11dfedc6:;
  /* 11dfedc6 call 0x11dfed20 */
  push32(0x11dfedcbu); f_11dfed20();
  /* 11dfedcb pop ebp */
  EBP = (pop32());
  /* 11dfedcc ret  */
  ESPCHK(0x11dfedb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000edd0 @ 0x11dfedd0 (90 bytes, 27 insns) */
void f_11dfedd0(void) {
  FTRACE(0x11dfedd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfedd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfedd1 mov ebp, esp */
  EBP = (ESP);
  /* 11dfedd3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11dfedd5 push 0x11e2aea0 */
  push32((uint32_t)(0x11e2aea0u));
  /* 11dfedda push 0x11e059ac */
  push32((uint32_t)(0x11e059acu));
  /* 11dfeddf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11dfede5 push eax */
  push32((uint32_t)(EAX));
  /* 11dfede6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11dfeded sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfedf0 push ebx */
  push32((uint32_t)(EBX));
  /* 11dfedf1 push esi */
  push32((uint32_t)(ESI));
  /* 11dfedf2 push edi */
  push32((uint32_t)(EDI));
  /* 11dfedf3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11dfedf6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11dfedfd cmp dword ptr [0x11e2df34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e2df34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfee04 je 0x11dfee2c */
  if (C.zf) goto L_11dfee2c;
  /* 11dfee06 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11dfee0d call dword ptr [0x11e2df34] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e2df34))), 0x11dfee13u);
  /* 11dfee13 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11dfee1a jmp 0x11dfee2c */
  goto L_11dfee2c;
  /* 11dfee1c mov eax, 1 */
  EAX = (0x1u);
  /* 11dfee21 ret  */
  ESPCHK(0x11dfedd0u, _esp0);
  ESP += 4; return;
  /* 11dfee22 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11dfee25 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11dfee2c:;
  /* 11dfee2c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11dfee33 call 0x11dfee3a */
  push32(0x11dfee38u); f_11dfee3a();
  /* 11dfee38 jmp 0x11dfee40 */
  f_11dfee40(); return;
}

/* FUN_1000ee3a @ 0x11dfee3a (6 bytes, 2 insns) */
void f_11dfee3a(void) {
  FTRACE(0x11dfee3au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfee3a call 0x11dfed20 */
  push32(0x11dfee3fu); f_11dfed20();
  /* 11dfee3f ret  */
  ESPCHK(0x11dfee3au, _esp0);
  ESP += 4; return;
}

/* FUN_1000ee40 @ 0x11dfee40 (17 bytes, 8 insns) */
void f_11dfee40(void) {
  FTRACE(0x11dfee40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfee40 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11dfee43 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11dfee4a pop edi */
  EDI = (pop32());
  /* 11dfee4b pop esi */
  ESI = (pop32());
  /* 11dfee4c pop ebx */
  EBX = (pop32());
  /* 11dfee4d mov esp, ebp */
  ESP = (EBP);
  /* 11dfee4f pop ebp */
  EBP = (pop32());
  /* 11dfee50 ret  */
  ESPCHK(0x11dfee40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ee60 @ 0x11dfee60 (56 bytes, 15 insns) */
void f_11dfee60(void) {
  FTRACE(0x11dfee60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfee60 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfee61 mov ebp, esp */
  EBP = (ESP);
  /* 11dfee63 cmp dword ptr [0x11e2ddb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e2ddb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfee6a je 0x11dfee72 */
  if (C.zf) goto L_11dfee72;
  /* 11dfee6c call dword ptr [0x11e2ddb0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e2ddb0))), 0x11dfee72u);
L_11dfee72:;
  /* 11dfee72 push 0x11e2d63c */
  push32((uint32_t)(0x11e2d63cu));
  /* 11dfee77 push 0x11e2d324 */
  push32((uint32_t)(0x11e2d324u));
  /* 11dfee7c call 0x11dff030 */
  push32(0x11dfee81u); f_11dff030();
  /* 11dfee81 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfee84 push 0x11e2d220 */
  push32((uint32_t)(0x11e2d220u));
  /* 11dfee89 push 0x11e2d000 */
  push32((uint32_t)(0x11e2d000u));
  /* 11dfee8e call 0x11dff030 */
  push32(0x11dfee93u); f_11dff030();
  /* 11dfee93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfee96 pop ebp */
  EBP = (pop32());
  /* 11dfee97 ret  */
  ESPCHK(0x11dfee60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eea0 @ 0x11dfeea0 (21 bytes, 10 insns) */
void f_11dfeea0(void) {
  FTRACE(0x11dfeea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfeea0 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfeea1 mov ebp, esp */
  EBP = (ESP);
  /* 11dfeea3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfeea5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfeea7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfeeaa push eax */
  push32((uint32_t)(EAX));
  /* 11dfeeab call 0x11dfef20 */
  push32(0x11dfeeb0u); f_11dfef20();
  /* 11dfeeb0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfeeb3 pop ebp */
  EBP = (pop32());
  /* 11dfeeb4 ret  */
  ESPCHK(0x11dfeea0u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11dfeec0 (21 bytes, 10 insns) */
void f_11dfeec0(void) {
  FTRACE(0x11dfeec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfeec0 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfeec1 mov ebp, esp */
  EBP = (ESP);
  /* 11dfeec3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfeec5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dfeec7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfeeca push eax */
  push32((uint32_t)(EAX));
  /* 11dfeecb call 0x11dfef20 */
  push32(0x11dfeed0u); f_11dfef20();
  /* 11dfeed0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfeed3 pop ebp */
  EBP = (pop32());
  /* 11dfeed4 ret  */
  ESPCHK(0x11dfeec0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eee0 @ 0x11dfeee0 (19 bytes, 9 insns) */
void f_11dfeee0(void) {
  FTRACE(0x11dfeee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfeee0 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfeee1 mov ebp, esp */
  EBP = (ESP);
  /* 11dfeee3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dfeee5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfeee7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfeee9 call 0x11dfef20 */
  push32(0x11dfeeeeu); f_11dfef20();
  /* 11dfeeee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfeef1 pop ebp */
  EBP = (pop32());
  /* 11dfeef2 ret  */
  ESPCHK(0x11dfeee0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef00 @ 0x11dfef00 (19 bytes, 9 insns) */
void f_11dfef00(void) {
  FTRACE(0x11dfef00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfef00 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfef01 mov ebp, esp */
  EBP = (ESP);
  /* 11dfef03 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dfef05 push 1 */
  push32((uint32_t)(0x1u));
  /* 11dfef07 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dfef09 call 0x11dfef20 */
  push32(0x11dfef0eu); f_11dfef20();
  /* 11dfef0e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfef11 pop ebp */
  EBP = (pop32());
  /* 11dfef12 ret  */
  ESPCHK(0x11dfef00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef20 @ 0x11dfef20 (227 bytes, 61 insns) */
void f_11dfef20(void) {
  FTRACE(0x11dfef20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dfef20 push ebp */
  push32((uint32_t)(EBP));
  /* 11dfef21 mov ebp, esp */
  EBP = (ESP);
  /* 11dfef23 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfef24 call 0x11dff010 */
  push32(0x11dfef29u); f_11dff010();
  /* 11dfef29 cmp dword ptr [0x11e306cc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e306cc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfef30 jne 0x11dfef43 */
  if (!C.zf) goto L_11dfef43;
  /* 11dfef32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfef35 push eax */
  push32((uint32_t)(EAX));
  /* 11dfef36 call dword ptr [0x11e333a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333a8))), 0x11dfef3cu);
  /* 11dfef3c push eax */
  push32((uint32_t)(EAX));
  /* 11dfef3d call dword ptr [0x11e333ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333ac))), 0x11dfef43u);
L_11dfef43:;
  /* 11dfef43 mov dword ptr [0x11e306c8], 1 */
  w32((uint32_t)(0x11e306c8), (0x1u));
  /* 11dfef4d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 11dfef50 mov byte ptr [0x11e306c4], cl */
  w8((uint32_t)(0x11e306c4), (CL));
  /* 11dfef56 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfef5a jne 0x11dfefa3 */
  if (!C.zf) goto L_11dfefa3;
  /* 11dfef5c cmp dword ptr [0x11e32138], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e32138))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfef63 je 0x11dfef91 */
  if (C.zf) goto L_11dfef91;
  /* 11dfef65 mov edx, dword ptr [0x11e32134] */
  EDX = (r32((uint32_t)(0x11e32134)));
  /* 11dfef6b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11dfef6e:;
  /* 11dfef6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfef71 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dfef74 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11dfef77 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfef7a cmp ecx, dword ptr [0x11e32138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11e32138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfef80 jb 0x11dfef91 */
  if (C.cf) goto L_11dfef91;
  /* 11dfef82 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfef85 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfef88 je 0x11dfef8f */
  if (C.zf) goto L_11dfef8f;
  /* 11dfef8a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dfef8d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x11dfef8fu);
L_11dfef8f:;
  /* 11dfef8f jmp 0x11dfef6e */
  goto L_11dfef6e;
L_11dfef91:;
  /* 11dfef91 push 0x11e2d948 */
  push32((uint32_t)(0x11e2d948u));
  /* 11dfef96 push 0x11e2d740 */
  push32((uint32_t)(0x11e2d740u));
  /* 11dfef9b call 0x11dff030 */
  push32(0x11dfefa0u); f_11dff030();
  /* 11dfefa0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dfefa3:;
  /* 11dfefa3 push 0x11e2dc54 */
  push32((uint32_t)(0x11e2dc54u));
  /* 11dfefa8 push 0x11e2da4c */
  push32((uint32_t)(0x11e2da4cu));
  /* 11dfefad call 0x11dff030 */
  push32(0x11dfefb2u); f_11dff030();
  /* 11dfefb2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfefb5 cmp dword ptr [0x11e306d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e306d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfefbc jne 0x11dfefde */
  if (!C.zf) goto L_11dfefde;
  /* 11dfefbe push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11dfefc0 call 0x11dfd360 */
  push32(0x11dfefc5u); f_11dfd360();
  /* 11dfefc5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dfefc8 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11dfefcb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dfefcd je 0x11dfefde */
  if (C.zf) goto L_11dfefde;
  /* 11dfefcf mov dword ptr [0x11e306d0], 1 */
  w32((uint32_t)(0x11e306d0), (0x1u));
  /* 11dfefd9 call 0x11dfdc70 */
  push32(0x11dfefdeu); f_11dfdc70();
L_11dfefde:;
  /* 11dfefde cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dfefe2 je 0x11dfefeb */
  if (C.zf) goto L_11dfefeb;
  /* 11dfefe4 call 0x11dff020 */
  push32(0x11dfefe9u); f_11dff020();
  /* 11dfefe9 jmp 0x11dfefff */
  goto L_11dfefff;
L_11dfefeb:;
  /* 11dfefeb mov dword ptr [0x11e306cc], 1 */
  w32((uint32_t)(0x11e306cc), (0x1u));
  /* 11dfeff5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dfeff8 push ecx */
  push32((uint32_t)(ECX));
  /* 11dfeff9 call dword ptr [0x11e333fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e333fc))), 0x11dfefffu);
L_11dfefff:;
  /* 11dfefff mov esp, ebp */
  ESP = (EBP);
  /* 11dff001 pop ebp */
  EBP = (pop32());
  /* 11dff002 ret  */
  ESPCHK(0x11dfef20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f010 @ 0x11dff010 (15 bytes, 7 insns) */
void f_11dff010(void) {
  FTRACE(0x11dff010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dff010 push ebp */
  push32((uint32_t)(EBP));
  /* 11dff011 mov ebp, esp */
  EBP = (ESP);
  /* 11dff013 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11dff015 call 0x11dfbd50 */
  push32(0x11dff01au); f_11dfbd50();
  /* 11dff01a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dff01d pop ebp */
  EBP = (pop32());
  /* 11dff01e ret  */
  ESPCHK(0x11dff010u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f020 @ 0x11dff020 (15 bytes, 7 insns) */
void f_11dff020(void) {
  FTRACE(0x11dff020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dff020 push ebp */
  push32((uint32_t)(EBP));
  /* 11dff021 mov ebp, esp */
  EBP = (ESP);
  /* 11dff023 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11dff025 call 0x11dfbdf0 */
  push32(0x11dff02au); f_11dfbdf0();
  /* 11dff02a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dff02d pop ebp */
  EBP = (pop32());
  /* 11dff02e ret  */
  ESPCHK(0x11dff020u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x11dff030 (37 bytes, 16 insns) */
void f_11dff030(void) {
  FTRACE(0x11dff030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dff030 push ebp */
  push32((uint32_t)(EBP));
  /* 11dff031 mov ebp, esp */
  EBP = (ESP);
L_11dff033:;
  /* 11dff033 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dff036 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dff039 jae 0x11dff053 */
  if (!C.cf) goto L_11dff053;
  /* 11dff03b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dff03e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dff041 je 0x11dff048 */
  if (C.zf) goto L_11dff048;
  /* 11dff043 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dff046 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x11dff048u);
L_11dff048:;
  /* 11dff048 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dff04b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dff04e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11dff051 jmp 0x11dff033 */
  goto L_11dff033;
L_11dff053:;
  /* 11dff053 pop ebp */
  EBP = (pop32());
  /* 11dff054 ret  */
  ESPCHK(0x11dff030u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f060 @ 0x11dff060 (628 bytes, 214 insns) */
void f_11dff060(void) {
  FTRACE(0x11dff060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dff060 push ebp */
  push32((uint32_t)(EBP));
  /* 11dff061 mov ebp, esp */
  EBP = (ESP);
  /* 11dff063 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dff066 push ebx */
  push32((uint32_t)(EBX));
  /* 11dff067 push esi */
  push32((uint32_t)(ESI));
  /* 11dff068 push edi */
  push32((uint32_t)(EDI));
L_11dff069:;
  /* 11dff069 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dff06d jne 0x11dff08d */
  if (!C.zf) goto L_11dff08d;
  /* 11dff06f push 0x11e2af04 */
  push32((uint32_t)(0x11e2af04u));
  /* 11dff074 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dff076 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 11dff078 push 0x11e2aef8 */
  push32((uint32_t)(0x11e2aef8u));
  /* 11dff07d push 2 */
  push32((uint32_t)(0x2u));
  /* 11dff07f call 0x11dfaa10 */
  push32(0x11dff084u); f_11dfaa10();
  /* 11dff084 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dff087 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dff08a jne 0x11dff08d */
  if (!C.zf) goto L_11dff08d;
  /* 11dff08c int3  */
  x86_unimpl("int3 @ 0x11dff08c");
L_11dff08d:;
  /* 11dff08d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dff08f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dff091 jne 0x11dff069 */
  if (!C.zf) goto L_11dff069;
  /* 11dff093 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dff096 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11dff099 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dff09c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11dff09f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11dff0a2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dff0a5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11dff0a8 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 11dff0ae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dff0b0 je 0x11dff0bf */
  if (C.zf) goto L_11dff0bf;
  /* 11dff0b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dff0b5 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11dff0b8 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 11dff0bb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11dff0bd je 0x11dff0d5 */
  if (C.zf) goto L_11dff0d5;
L_11dff0bf:;
  /* 11dff0bf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dff0c2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11dff0c5 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11dff0c7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dff0ca mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 11dff0cd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11dff0d0 jmp 0x11dff2cd */
  goto L_11dff2cd;
L_11dff0d5:;
  /* 11dff0d5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dff0d8 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11dff0db and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11dff0de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dff0e0 je 0x11dff12c */
  if (C.zf) goto L_11dff12c;
  /* 11dff0e2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dff0e5 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11dff0ec mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dff0ef mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11dff0f2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11dff0f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dff0f7 je 0x11dff115 */
  if (C.zf) goto L_11dff115;
  /* 11dff0f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dff0fc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dff0ff mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11dff102 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11dff104 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dff107 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11dff10a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 11dff10d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dff110 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11dff113 jmp 0x11dff12c */
  goto L_11dff12c;
L_11dff115:;
  /* 11dff115 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dff118 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11dff11b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11dff11e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dff121 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11dff124 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11dff127 jmp 0x11dff2cd */
  goto L_11dff2cd;
L_11dff12c:;
  /* 11dff12c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dff12f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11dff132 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11dff135 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dff138 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11dff13b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dff13e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11dff141 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 11dff144 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dff147 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11dff14a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dff14d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11dff154 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11dff15b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dff15e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11dff161 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dff164 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11dff167 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 11dff16d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11dff16f jne 0x11dff19f */
  if (!C.zf) goto L_11dff19f;
  /* 11dff171 cmp dword ptr [ebp - 8], 0x11e2e308 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x11e2e308u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dff178 je 0x11dff183 */
  if (C.zf) goto L_11dff183;
  /* 11dff17a cmp dword ptr [ebp - 8], 0x11e2e328 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x11e2e328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dff181 jne 0x11dff193 */
  if (!C.zf) goto L_11dff193;
L_11dff183:;
  /* 11dff183 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11dff186 push edx */
  push32((uint32_t)(EDX));
  /* 11dff187 call 0x11e06200 */
  push32(0x11dff18cu); f_11e06200();
  /* 11dff18c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dff18f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dff191 jne 0x11dff19f */
  if (!C.zf) goto L_11dff19f;
L_11dff193:;
  /* 11dff193 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dff196 push eax */
  push32((uint32_t)(EAX));
  /* 11dff197 call 0x11e06130 */
  push32(0x11dff19cu); f_11e06130();
  /* 11dff19c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dff19f:;
  /* 11dff19f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dff1a2 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11dff1a5 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 11dff1ab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dff1ad je 0x11dff28b */
  if (C.zf) goto L_11dff28b;
L_11dff1b3:;
  /* 11dff1b3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dff1b6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dff1b9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11dff1bb sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dff1be test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dff1c0 jge 0x11dff1e3 */
  if ((C.sf==C.of)) goto L_11dff1e3;
  /* 11dff1c2 push 0x11e2aeb8 */
  push32((uint32_t)(0x11e2aeb8u));
  /* 11dff1c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dff1c9 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11dff1ce push 0x11e2aef8 */
  push32((uint32_t)(0x11e2aef8u));
  /* 11dff1d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dff1d5 call 0x11dfaa10 */
  push32(0x11dff1dau); f_11dfaa10();
  /* 11dff1da add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dff1dd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dff1e0 jne 0x11dff1e3 */
  if (!C.zf) goto L_11dff1e3;
  /* 11dff1e2 int3  */
  x86_unimpl("int3 @ 0x11dff1e2");
L_11dff1e3:;
  /* 11dff1e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dff1e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dff1e7 jne 0x11dff1b3 */
  if (!C.zf) goto L_11dff1b3;
  /* 11dff1e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dff1ec mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dff1ef mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11dff1f1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dff1f4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11dff1f7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dff1fa mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11dff1fd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dff200 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dff203 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11dff205 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dff208 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11dff20b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dff20e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dff211 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11dff214 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dff218 jle 0x11dff236 */
  if ((C.zf||C.sf!=C.of)) goto L_11dff236;
  /* 11dff21a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dff21d push ecx */
  push32((uint32_t)(ECX));
  /* 11dff21e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dff221 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11dff224 push eax */
  push32((uint32_t)(EAX));
  /* 11dff225 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11dff228 push ecx */
  push32((uint32_t)(ECX));
  /* 11dff229 call 0x11e05e20 */
  push32(0x11dff22eu); f_11e05e20();
  /* 11dff22e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dff231 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11dff234 jmp 0x11dff27e */
  goto L_11dff27e;
L_11dff236:;
  /* 11dff236 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dff23a je 0x11dff259 */
  if (C.zf) goto L_11dff259;
  /* 11dff23c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11dff23f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11dff242 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11dff245 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11dff248 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11dff24b mov ecx, dword ptr [edx*4 + 0x11e31fe0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11e31fe0)));
  /* 11dff252 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dff254 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11dff257 jmp 0x11dff260 */
  goto L_11dff260;
L_11dff259:;
  /* 11dff259 mov dword ptr [ebp - 0x14], 0x11e2df40 */
  w32((uint32_t)(EBP + -0x14), (0x11e2df40u));
L_11dff260:;
  /* 11dff260 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11dff263 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 11dff267 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11dff26a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dff26c je 0x11dff27e */
  if (C.zf) goto L_11dff27e;
  /* 11dff26e push 2 */
  push32((uint32_t)(0x2u));
  /* 11dff270 push 0 */
  push32((uint32_t)(0x0u));
  /* 11dff272 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11dff275 push ecx */
  push32((uint32_t)(ECX));
  /* 11dff276 call 0x11e05cd0 */
  push32(0x11dff27bu); f_11e05cd0();
  /* 11dff27b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dff27e:;
  /* 11dff27e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dff281 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11dff284 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 11dff287 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11dff289 jmp 0x11dff2a9 */
  goto L_11dff2a9;
L_11dff28b:;
  /* 11dff28b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11dff292 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dff295 push edx */
  push32((uint32_t)(EDX));
  /* 11dff296 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11dff299 push eax */
  push32((uint32_t)(EAX));
  /* 11dff29a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11dff29d push ecx */
  push32((uint32_t)(ECX));
  /* 11dff29e call 0x11e05e20 */
  push32(0x11dff2a3u); f_11e05e20();
  /* 11dff2a3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dff2a6 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11dff2a9:;
  /* 11dff2a9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11dff2ac cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dff2af je 0x11dff2c5 */
  if (C.zf) goto L_11dff2c5;
  /* 11dff2b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dff2b4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11dff2b7 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11dff2ba mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dff2bd mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 11dff2c0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11dff2c3 jmp 0x11dff2cd */
  goto L_11dff2cd;
L_11dff2c5:;
  /* 11dff2c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dff2c8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_11dff2cd:;
  /* 11dff2cd pop edi */
  EDI = (pop32());
  /* 11dff2ce pop esi */
  ESI = (pop32());
  /* 11dff2cf pop ebx */
  EBX = (pop32());
  /* 11dff2d0 mov esp, ebp */
  ESP = (EBP);
  /* 11dff2d2 pop ebp */
  EBP = (pop32());
  /* 11dff2d3 ret  */
  ESPCHK(0x11dff060u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f2e0 @ 0x11dff2e0 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_11dff2e0(void) {
  FTRACE(0x11dff2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11dff2e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11dff2e1 mov ebp, esp */
  EBP = (ESP);
  /* 11dff2e3 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dff2e9 push ebx */
  push32((uint32_t)(EBX));
  /* 11dff2ea push esi */
  push32((uint32_t)(ESI));
  /* 11dff2eb push edi */
  push32((uint32_t)(EDI));
  /* 11dff2ec mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11dff2f3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 11dff2fd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_11dff304:;
  /* 11dff304 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dff307 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11dff309 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 11dff30c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11dff310 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dff313 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dff316 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11dff319 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dff31b je 0x11dffef7 */
  if (C.zf) goto L_11dffef7;
  /* 11dff321 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dff328 jl 0x11dffef7 */
  if ((C.sf!=C.of)) goto L_11dffef7;
  /* 11dff32e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11dff332 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dff335 jl 0x11dff356 */
  if ((C.sf!=C.of)) goto L_11dff356;
  /* 11dff337 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11dff33b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dff33e jg 0x11dff356 */
  if ((!C.zf&&C.sf==C.of)) goto L_11dff356;
  /* 11dff340 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11dff344 movsx ecx, byte ptr [eax + 0x11e2aef0] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x11e2aef0))));
  /* 11dff34b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 11dff34e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 11dff354 jmp 0x11dff360 */
  goto L_11dff360;
L_11dff356:;
  /* 11dff356 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_11dff360:;
  /* 11dff360 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 11dff366 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11dff369 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11dff36c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11dff36f movsx edx, byte ptr [ecx + eax*8 + 0x11e2af10] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x11e2af10))));
  /* 11dff377 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11dff37a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11dff37d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11dff380 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 11dff386 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dff38d ja 0x11dffef2 */
  if ((!C.cf&&!C.zf)) goto L_11dffef2;
  /* 11dff393 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 11dff399 jmp dword ptr [ecx*4 + 0x11dfff04] */
  switch (ECX) {
    case 0: goto L_11dff3a0;
    case 1: goto L_11dff43a;
    case 2: goto L_11dff47c;
    case 3: goto L_11dff4eb;
    case 4: goto L_11dff543;
    case 5: goto L_11dff552;
    case 6: goto L_11dff59e;
    case 7: goto L_11dff631;
    case 8: goto L_11dff4c8;
    case 9: goto L_11dff4d3;
    case 10: goto L_11dff4be;
    case 11: goto L_11dff4b3;
    case 12: goto L_11dff4de;
    case 13: goto L_11dff4e6;
    default: x86_unimpl("switch@0x11dff399 out of table"); return;
  }
L_11dff3a0:;
  /* 11dff3a0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11dff3a7 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11dff3aa and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11dff3b0 mov eax, dword ptr [0x11e2e00c] */
  EAX = (r32((uint32_t)(0x11e2e00c)));
  /* 11dff3b5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11dff3b7 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11dff3bb and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11dff3c1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11dff3c3 je 0x11dff41d */
  if (C.zf) goto L_11dff41d;
  /* 11dff3c5 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 11dff3cb push edx */
  push32((uint32_t)(EDX));
  /* 11dff3cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dff3cf push eax */
  push32((uint32_t)(EAX));
  /* 11dff3d0 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11dff3d4 push ecx */
  push32((uint32_t)(ECX));
  /* 11dff3d5 call 0x11e00010 */
  push32(0x11dff3dau); f_11e00010();
  /* 11dff3da add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dff3dd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dff3e0 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11dff3e2 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 11dff3e5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dff3e8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dff3eb mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11dff3ee:;
  /* 11dff3ee movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11dff3f2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dff3f4 jne 0x11dff417 */
  if (!C.zf) goto L_11dff417;
  /* 11dff3f6 push 0x11e2af90 */
  push32((uint32_t)(0x11e2af90u));
  /* 11dff3fb push 0 */
  push32((uint32_t)(0x0u));
  /* 11dff3fd push 0x186 */
  push32((uint32_t)(0x186u));
  /* 11dff402 push 0x11e2af84 */
  push32((uint32_t)(0x11e2af84u));
  /* 11dff407 push 2 */
  push32((uint32_t)(0x2u));
  /* 11dff409 call 0x11dfaa10 */
  push32(0x11dff40eu); f_11dfaa10();
  /* 11dff40e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dff411 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dff414 jne 0x11dff417 */
  if (!C.zf) goto L_11dff417;
  /* 11dff416 int3  */
  x86_unimpl("int3 @ 0x11dff416");
L_11dff417:;
  /* 11dff417 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dff419 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dff41b jne 0x11dff3ee */
  if (!C.zf) goto L_11dff3ee;
L_11dff41d:;
  /* 11dff41d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 11dff423 push ecx */
  push32((uint32_t)(ECX));
  /* 11dff424 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dff427 push edx */
  push32((uint32_t)(EDX));
  /* 11dff428 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11dff42c push eax */
  push32((uint32_t)(EAX));
  /* 11dff42d call 0x11e00010 */
  push32(0x11dff432u); f_11e00010();
  /* 11dff432 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dff435 jmp 0x11dffef2 */
  goto L_11dffef2;
L_11dff43a:;
  /* 11dff43a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11dff441 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dff444 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 11dff44a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 11dff450 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 11dff456 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 11dff45c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11dff45f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11dff466 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 11dff470 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11dff477 jmp 0x11dffef2 */
  goto L_11dffef2;
L_11dff47c:;
  /* 11dff47c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11dff480 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 11dff486 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 11dff48c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dff48f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 11dff495 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dff49c ja 0x11dff4e6 */
  if ((!C.cf&&!C.zf)) goto L_11dff4e6;
  /* 11dff49e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 11dff4a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dff4a6 mov al, byte ptr [ecx + 0x11dfff3c] */
  AL = (r8((uint32_t)(ECX + 0x11dfff3c)));
  /* 11dff4ac jmp dword ptr [eax*4 + 0x11dfff24] */
  switch (EAX) {
    case 0: goto L_11dff4c8;
    case 1: goto L_11dff4d3;
    case 2: goto L_11dff4be;
    case 3: goto L_11dff4b3;
    case 4: goto L_11dff4de;
    case 5: goto L_11dff4e6;
    default: x86_unimpl("switch@0x11dff4ac out of table"); return;
  }
L_11dff4b3:;
  /* 11dff4b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dff4b6 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11dff4b9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11dff4bc jmp 0x11dff4e6 */
  goto L_11dff4e6;
L_11dff4be:;
  /* 11dff4be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dff4c1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11dff4c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11dff4c6 jmp 0x11dff4e6 */
  goto L_11dff4e6;
L_11dff4c8:;
  /* 11dff4c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dff4cb or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11dff4ce mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11dff4d1 jmp 0x11dff4e6 */
  goto L_11dff4e6;
L_11dff4d3:;
  /* 11dff4d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dff4d6 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 11dff4d9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11dff4dc jmp 0x11dff4e6 */
  goto L_11dff4e6;
L_11dff4de:;
  /* 11dff4de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dff4e1 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 11dff4e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11dff4e6:;
  /* 11dff4e6 jmp 0x11dffef2 */
  goto L_11dffef2;
L_11dff4eb:;
  /* 11dff4eb movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11dff4ef cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dff4f2 jne 0x11dff527 */
  if (!C.zf) goto L_11dff527;
  /* 11dff4f4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11dff4f7 push edx */
  push32((uint32_t)(EDX));
  /* 11dff4f8 call 0x11e00120 */
  push32(0x11dff4fdu); f_11e00120();
  /* 11dff4fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dff500 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 11dff506 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dff50d jge 0x11dff525 */
  if ((C.sf==C.of)) goto L_11dff525;
  /* 11dff50f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dff512 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11dff514 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11dff517 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 11dff51d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11dff51f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_11dff525:;
  /* 11dff525 jmp 0x11dff53e */
  goto L_11dff53e;
L_11dff527:;
  /* 11dff527 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 11dff52d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11dff530 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11dff534 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 11dff538 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_11dff53e:;
  /* 11dff53e jmp 0x11dffef2 */
  goto L_11dffef2;
L_11dff543:;
  /* 11dff543 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 11dff54d jmp 0x11dffef2 */
  goto L_11dffef2;
L_11dff552:;
  /* 11dff552 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11dff556 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dff559 jne 0x11dff582 */
  if (!C.zf) goto L_11dff582;
  /* 11dff55b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11dff55e push eax */
  push32((uint32_t)(EAX));
  /* 11dff55f call 0x11e00120 */
  push32(0x11dff564u); f_11e00120();
  /* 11dff564 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dff567 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 11dff56d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dff574 jge 0x11dff580 */
  if ((C.sf==C.of)) goto L_11dff580;
  /* 11dff576 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_11dff580:;
  /* 11dff580 jmp 0x11dff599 */
  goto L_11dff599;
L_11dff582:;
  /* 11dff582 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 11dff588 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11dff58b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11dff58f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11dff593 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_11dff599:;
  /* 11dff599 jmp 0x11dffef2 */
  goto L_11dffef2;
L_11dff59e:;
  /* 11dff59e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11dff5a2 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 11dff5a8 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 11dff5ae sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dff5b1 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 11dff5b7 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dff5be ja 0x11dff62c */
  if ((!C.cf&&!C.zf)) goto L_11dff62c;
  /* 11dff5c0 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 11dff5c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dff5c8 mov al, byte ptr [ecx + 0x11dfff61] */
  AL = (r8((uint32_t)(ECX + 0x11dfff61)));
  /* 11dff5ce jmp dword ptr [eax*4 + 0x11dfff4d] */
  switch (EAX) {
    case 0: goto L_11dff5e0;
    case 1: goto L_11dff619;
    case 2: goto L_11dff5d5;
    case 3: goto L_11dff623;
    case 4: goto L_11dff62c;
    default: x86_unimpl("switch@0x11dff5ce out of table"); return;
  }
L_11dff5d5:;
  /* 11dff5d5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dff5d8 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 11dff5db mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11dff5de jmp 0x11dff62c */
  goto L_11dff62c;
L_11dff5e0:;
  /* 11dff5e0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dff5e3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11dff5e6 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dff5e9 jne 0x11dff60b */
  if (!C.zf) goto L_11dff60b;
  /* 11dff5eb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dff5ee movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11dff5f2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dff5f5 jne 0x11dff60b */
  if (!C.zf) goto L_11dff60b;
  /* 11dff5f7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11dff5fa add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dff5fd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11dff600 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dff603 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11dff606 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11dff609 jmp 0x11dff617 */
  goto L_11dff617;
L_11dff60b:;
  /* 11dff60b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11dff612 jmp 0x11dff3a0 */
  goto L_11dff3a0;
L_11dff617:;
  /* 11dff617 jmp 0x11dff62c */
  goto L_11dff62c;
L_11dff619:;
  /* 11dff619 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dff61c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11dff61e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11dff621 jmp 0x11dff62c */
  goto L_11dff62c;
L_11dff623:;
  /* 11dff623 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dff626 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11dff629 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11dff62c:;
  /* 11dff62c jmp 0x11dffef2 */
  goto L_11dffef2;
L_11dff631:;
  /* 11dff631 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11dff635 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 11dff63b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 11dff641 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dff644 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 11dff64a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dff651 ja 0x11dffd17 */
  if ((!C.cf&&!C.zf)) goto L_11dffd17;
  /* 11dff657 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 11dff65d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11dff65f mov cl, byte ptr [edx + 0x11dfffcc] */
  CL = (r8((uint32_t)(EDX + 0x11dfffcc)));
  /* 11dff665 jmp dword ptr [ecx*4 + 0x11dfff90] */
  switch (ECX) {
    case 0: goto L_11dff66c;
    case 1: goto L_11dff900;
    case 2: goto L_11dff790;
    case 3: goto L_11dffa39;
    case 4: goto L_11dff6fb;
    case 5: goto L_11dff681;
    case 6: goto L_11dffa0b;
    case 7: goto L_11dff910;
    case 8: goto L_11dff8b5;
    case 9: goto L_11dffa85;
    case 10: goto L_11dffa2f;
    case 11: goto L_11dff7a6;
    case 12: goto L_11dffa23;
    case 13: goto L_11dffa45;
    case 14: goto L_11dffd17;
    default: x86_unimpl("switch@0x11dff665 out of table"); return;
  }
L_11dff66c:;
  /* 11dff66c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dff66f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 11dff674 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dff676 jne 0x11dff681 */
  if (!C.zf) goto L_11dff681;
  /* 11dff678 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dff67b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11dff67e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11dff681:;
  /* 11dff681 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dff684 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 11dff68a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dff68c je 0x11dff6c7 */
  if (C.zf) goto L_11dff6c7;
  /* 11dff68e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11dff691 push eax */
  push32((uint32_t)(EAX));
  /* 11dff692 call 0x11e00160 */
  push32(0x11dff697u); f_11e00160();
  /* 11dff697 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dff69a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 11dff69e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 11dff6a2 push ecx */
  push32((uint32_t)(ECX));
  /* 11dff6a3 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 11dff6a9 push edx */
  push32((uint32_t)(EDX));
  /* 11dff6aa call 0x11e06470 */
  push32(0x11dff6afu); f_11e06470();
  /* 11dff6af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dff6b2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11dff6b5 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dff6b9 jge 0x11dff6c5 */
  if ((C.sf==C.of)) goto L_11dff6c5;
  /* 11dff6bb mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_11dff6c5:;
  /* 11dff6c5 jmp 0x11dff6ed */
  goto L_11dff6ed;
L_11dff6c7:;
  /* 11dff6c7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11dff6ca push eax */
  push32((uint32_t)(EAX));
  /* 11dff6cb call 0x11e00120 */
  push32(0x11dff6d0u); f_11e00120();
  /* 11dff6d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dff6d3 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 11dff6da mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 11dff6e0 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 11dff6e6 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_11dff6ed:;
  /* 11dff6ed lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 11dff6f3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11dff6f6 jmp 0x11dffd17 */
  goto L_11dffd17;
L_11dff6fb:;
  /* 11dff6fb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11dff6fe push eax */
  push32((uint32_t)(EAX));
  /* 11dff6ff call 0x11e00120 */
  push32(0x11dff704u); f_11e00120();
  /* 11dff704 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dff707 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 11dff70d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dff714 je 0x11dff722 */
  if (C.zf) goto L_11dff722;
  /* 11dff716 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11dff71c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dff720 jne 0x11dff73c */
  if (!C.zf) goto L_11dff73c;
L_11dff722:;
  /* 11dff722 mov edx, dword ptr [0x11e2df38] */
  EDX = (r32((uint32_t)(0x11e2df38)));
  /* 11dff728 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11dff72b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11dff72e push eax */
  push32((uint32_t)(EAX));
  /* 11dff72f call 0x11e01410 */
  push32(0x11dff734u); f_11e01410();
  /* 11dff734 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dff737 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11dff73a jmp 0x11dff78b */
  goto L_11dff78b;
L_11dff73c:;
  /* 11dff73c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dff73f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 11dff745 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11dff747 je 0x11dff76c */
  if (C.zf) goto L_11dff76c;
  /* 11dff749 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11dff74f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11dff752 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11dff755 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11dff75b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 11dff75e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11dff760 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11dff763 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 11dff76a jmp 0x11dff78b */
  goto L_11dff78b;
L_11dff76c:;
  /* 11dff76c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11dff773 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11dff779 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11dff77c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11dff77f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11dff785 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 11dff788 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11dff78b:;
  /* 11dff78b jmp 0x11dffd17 */
  goto L_11dffd17;
L_11dff790:;
  /* 11dff790 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dff793 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 11dff799 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11dff79b jne 0x11dff7a6 */
  if (!C.zf) goto L_11dff7a6;
  /* 11dff79d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dff7a0 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11dff7a3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11dff7a6:;
  /* 11dff7a6 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dff7ad jne 0x11dff7bb */
  if (!C.zf) goto L_11dff7bb;
  /* 11dff7af mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 11dff7b9 jmp 0x11dff7c7 */
  goto L_11dff7c7;
L_11dff7bb:;
  /* 11dff7bb mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 11dff7c1 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_11dff7c7:;
  /* 11dff7c7 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 11dff7cd mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 11dff7d3 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11dff7d6 push edx */
  push32((uint32_t)(EDX));
  /* 11dff7d7 call 0x11e00120 */
  push32(0x11dff7dcu); f_11e00120();
  /* 11dff7dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dff7df mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11dff7e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dff7e5 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 11dff7ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dff7ec je 0x11dff856 */
  if (C.zf) goto L_11dff856;
  /* 11dff7ee cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dff7f2 jne 0x11dff7fd */
  if (!C.zf) goto L_11dff7fd;
  /* 11dff7f4 mov ecx, dword ptr [0x11e2df3c] */
  ECX = (r32((uint32_t)(0x11e2df3c)));
  /* 11dff7fa mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11dff7fd:;
  /* 11dff7fd mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 11dff804 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11dff807 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_11dff80d:;
  /* 11dff80d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 11dff813 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 11dff819 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dff81c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 11dff822 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dff824 je 0x11dff846 */
  if (C.zf) goto L_11dff846;
  /* 11dff826 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 11dff82c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11dff82e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11dff831 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dff833 je 0x11dff846 */
  if (C.zf) goto L_11dff846;
  /* 11dff835 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 11dff83b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dff83e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 11dff844 jmp 0x11dff80d */
  goto L_11dff80d;
L_11dff846:;
  /* 11dff846 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 11dff84c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dff84f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11dff851 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11dff854 jmp 0x11dff8b0 */
  goto L_11dff8b0;
L_11dff856:;
  /* 11dff856 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dff85a jne 0x11dff864 */
  if (!C.zf) goto L_11dff864;
  /* 11dff85c mov eax, dword ptr [0x11e2df38] */
  EAX = (r32((uint32_t)(0x11e2df38)));
  /* 11dff861 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_11dff864:;
  /* 11dff864 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11dff867 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_11dff86d:;
  /* 11dff86d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 11dff873 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 11dff879 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dff87c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 11dff882 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dff884 je 0x11dff8a4 */
  if (C.zf) goto L_11dff8a4;
  /* 11dff886 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 11dff88c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11dff88f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dff891 je 0x11dff8a4 */
  if (C.zf) goto L_11dff8a4;
  /* 11dff893 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 11dff899 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dff89c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 11dff8a2 jmp 0x11dff86d */
  goto L_11dff86d;
L_11dff8a4:;
  /* 11dff8a4 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 11dff8aa sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dff8ad mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_11dff8b0:;
  /* 11dff8b0 jmp 0x11dffd17 */
  goto L_11dffd17;
L_11dff8b5:;
  /* 11dff8b5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11dff8b8 push edx */
  push32((uint32_t)(EDX));
  /* 11dff8b9 call 0x11e00120 */
  push32(0x11dff8beu); f_11e00120();
  /* 11dff8be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dff8c1 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 11dff8c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dff8ca and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11dff8cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dff8cf je 0x11dff8e3 */
  if (C.zf) goto L_11dff8e3;
  /* 11dff8d1 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 11dff8d7 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 11dff8de mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 11dff8e1 jmp 0x11dff8f1 */
  goto L_11dff8f1;
L_11dff8e3:;
  /* 11dff8e3 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 11dff8e9 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 11dff8ef mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_11dff8f1:;
  /* 11dff8f1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 11dff8fb jmp 0x11dffd17 */
  goto L_11dffd17;
L_11dff900:;
  /* 11dff900 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11dff907 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 11dff90a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 11dff90d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_11dff910:;
  /* 11dff910 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dff913 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 11dff915 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11dff918 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 11dff91e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11dff921 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dff928 jge 0x11dff936 */
  if ((C.sf==C.of)) goto L_11dff936;
  /* 11dff92a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 11dff934 jmp 0x11dff952 */
  goto L_11dff952;
L_11dff936:;
  /* 11dff936 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dff93d jne 0x11dff952 */
  if (!C.zf) goto L_11dff952;
  /* 11dff93f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11dff943 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dff946 jne 0x11dff952 */
  if (!C.zf) goto L_11dff952;
  /* 11dff948 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_11dff952:;
  /* 11dff952 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dff955 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dff958 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11dff95b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11dff95e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dff961 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11dff963 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11dff966 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 11dff96c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 11dff972 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11dff975 push ecx */
  push32((uint32_t)(ECX));
  /* 11dff976 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 11dff97c push edx */
  push32((uint32_t)(EDX));
  /* 11dff97d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11dff981 push eax */
  push32((uint32_t)(EAX));
  /* 11dff982 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11dff985 push ecx */
  push32((uint32_t)(ECX));
  /* 11dff986 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 11dff98c push edx */
  push32((uint32_t)(EDX));
  /* 11dff98d call dword ptr [0x11e2de30] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e2de30))), 0x11dff993u);
  /* 11dff993 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dff996 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dff999 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 11dff99e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dff9a0 je 0x11dff9b8 */
  if (C.zf) goto L_11dff9b8;
  /* 11dff9a2 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dff9a9 jne 0x11dff9b8 */
  if (!C.zf) goto L_11dff9b8;
  /* 11dff9ab mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11dff9ae push ecx */
  push32((uint32_t)(ECX));
  /* 11dff9af call dword ptr [0x11e2de3c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e2de3c))), 0x11dff9b5u);
  /* 11dff9b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dff9b8:;
  /* 11dff9b8 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11dff9bc cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dff9bf jne 0x11dff9da */
  if (!C.zf) goto L_11dff9da;
  /* 11dff9c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dff9c4 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 11dff9c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dff9cb jne 0x11dff9da */
  if (!C.zf) goto L_11dff9da;
  /* 11dff9cd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11dff9d0 push ecx */
  push32((uint32_t)(ECX));
  /* 11dff9d1 call dword ptr [0x11e2de34] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e2de34))), 0x11dff9d7u);
  /* 11dff9d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dff9da:;
  /* 11dff9da mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11dff9dd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11dff9e0 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dff9e3 jne 0x11dff9f7 */
  if (!C.zf) goto L_11dff9f7;
  /* 11dff9e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dff9e8 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11dff9eb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11dff9ee mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11dff9f1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dff9f4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11dff9f7:;
  /* 11dff9f7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11dff9fa push eax */
  push32((uint32_t)(EAX));
  /* 11dff9fb call 0x11e01410 */
  push32(0x11dffa00u); f_11e01410();
  /* 11dffa00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dffa03 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11dffa06 jmp 0x11dffd17 */
  goto L_11dffd17;
L_11dffa0b:;
  /* 11dffa0b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dffa0e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 11dffa11 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11dffa14 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 11dffa1e jmp 0x11dffaa5 */
  goto L_11dffaa5;
L_11dffa23:;
  /* 11dffa23 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 11dffa2d jmp 0x11dffaa5 */
  goto L_11dffaa5;
L_11dffa2f:;
  /* 11dffa2f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_11dffa39:;
  /* 11dffa39 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 11dffa43 jmp 0x11dffa4f */
  goto L_11dffa4f;
L_11dffa45:;
  /* 11dffa45 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_11dffa4f:;
  /* 11dffa4f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 11dffa59 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dffa5c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 11dffa62 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dffa64 je 0x11dffa83 */
  if (C.zf) goto L_11dffa83;
  /* 11dffa66 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 11dffa6d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 11dffa73 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dffa76 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 11dffa7c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_11dffa83:;
  /* 11dffa83 jmp 0x11dffaa5 */
  goto L_11dffaa5;
L_11dffa85:;
  /* 11dffa85 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 11dffa8f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dffa92 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 11dffa98 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11dffa9a je 0x11dffaa5 */
  if (C.zf) goto L_11dffaa5;
  /* 11dffa9c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dffa9f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11dffaa2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11dffaa5:;
  /* 11dffaa5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dffaa8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11dffaad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dffaaf je 0x11dfface */
  if (C.zf) goto L_11dfface;
  /* 11dffab1 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11dffab4 push ecx */
  push32((uint32_t)(ECX));
  /* 11dffab5 call 0x11e00140 */
  push32(0x11dffabau); f_11e00140();
  /* 11dffaba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dffabd mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11dffac3 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 11dffac9 jmp 0x11dffb5f */
  goto L_11dffb5f;
L_11dfface:;
  /* 11dfface mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dffad1 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11dffad4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dffad6 je 0x11dffb20 */
  if (C.zf) goto L_11dffb20;
  /* 11dffad8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dffadb and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11dffade test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dffae0 je 0x11dffb00 */
  if (C.zf) goto L_11dffb00;
  /* 11dffae2 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11dffae5 push ecx */
  push32((uint32_t)(ECX));
  /* 11dffae6 call 0x11e00120 */
  push32(0x11dffaebu); f_11e00120();
  /* 11dffaeb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dffaee movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 11dffaf1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11dffaf2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11dffaf8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 11dffafe jmp 0x11dffb1e */
  goto L_11dffb1e;
L_11dffb00:;
  /* 11dffb00 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11dffb03 push edx */
  push32((uint32_t)(EDX));
  /* 11dffb04 call 0x11e00120 */
  push32(0x11dffb09u); f_11e00120();
  /* 11dffb09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dffb0c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11dffb11 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11dffb12 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11dffb18 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_11dffb1e:;
  /* 11dffb1e jmp 0x11dffb5f */
  goto L_11dffb5f;
L_11dffb20:;
  /* 11dffb20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dffb23 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11dffb26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dffb28 je 0x11dffb45 */
  if (C.zf) goto L_11dffb45;
  /* 11dffb2a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11dffb2d push ecx */
  push32((uint32_t)(ECX));
  /* 11dffb2e call 0x11e00120 */
  push32(0x11dffb33u); f_11e00120();
  /* 11dffb33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dffb36 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11dffb37 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11dffb3d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 11dffb43 jmp 0x11dffb5f */
  goto L_11dffb5f;
L_11dffb45:;
  /* 11dffb45 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11dffb48 push edx */
  push32((uint32_t)(EDX));
  /* 11dffb49 call 0x11e00120 */
  push32(0x11dffb4eu); f_11e00120();
  /* 11dffb4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dffb51 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11dffb53 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11dffb59 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_11dffb5f:;
  /* 11dffb5f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dffb62 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 11dffb65 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dffb67 je 0x11dffba7 */
  if (C.zf) goto L_11dffba7;
  /* 11dffb69 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dffb70 jg 0x11dffba7 */
  if ((!C.zf&&C.sf==C.of)) goto L_11dffba7;
  /* 11dffb72 jl 0x11dffb7d */
  if ((C.sf!=C.of)) goto L_11dffb7d;
  /* 11dffb74 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dffb7b jae 0x11dffba7 */
  if (!C.cf) goto L_11dffba7;
L_11dffb7d:;
  /* 11dffb7d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 11dffb83 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11dffb85 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 11dffb8b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dffb8e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11dffb90 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11dffb96 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 11dffb9c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dffb9f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11dffba2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11dffba5 jmp 0x11dffbbf */
  goto L_11dffbbf;
L_11dffba7:;
  /* 11dffba7 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 11dffbad mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11dffbb3 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 11dffbb9 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_11dffbbf:;
  /* 11dffbbf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dffbc2 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11dffbc8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dffbca jne 0x11dffbe7 */
  if (!C.zf) goto L_11dffbe7;
  /* 11dffbcc mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11dffbd2 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 11dffbd8 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 11dffbdb mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11dffbe1 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_11dffbe7:;
  /* 11dffbe7 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dffbee jge 0x11dffbfc */
  if ((C.sf==C.of)) goto L_11dffbfc;
  /* 11dffbf0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 11dffbfa jmp 0x11dffc05 */
  goto L_11dffc05;
L_11dffbfc:;
  /* 11dffbfc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dffbff and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 11dffc02 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11dffc05:;
  /* 11dffc05 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11dffc0b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 11dffc11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dffc13 jne 0x11dffc1c */
  if (!C.zf) goto L_11dffc1c;
  /* 11dffc15 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11dffc1c:;
  /* 11dffc1c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 11dffc1f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11dffc22:;
  /* 11dffc22 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 11dffc28 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 11dffc2e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dffc31 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 11dffc37 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dffc39 jg 0x11dffc4f */
  if ((!C.zf&&C.sf==C.of)) goto L_11dffc4f;
  /* 11dffc3b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11dffc41 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 11dffc47 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11dffc49 je 0x11dffcd0 */
  if (C.zf) goto L_11dffcd0;
L_11dffc4f:;
  /* 11dffc4f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 11dffc55 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11dffc56 push edx */
  push32((uint32_t)(EDX));
  /* 11dffc57 push eax */
  push32((uint32_t)(EAX));
  /* 11dffc58 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 11dffc5e push edx */
  push32((uint32_t)(EDX));
  /* 11dffc5f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11dffc65 push eax */
  push32((uint32_t)(EAX));
  /* 11dffc66 call 0x11e06600 */
  push32(0x11dffc6bu); f_11e06600();
  /* 11dffc6b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dffc6e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 11dffc74 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 11dffc7a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11dffc7b push edx */
  push32((uint32_t)(EDX));
  /* 11dffc7c push eax */
  push32((uint32_t)(EAX));
  /* 11dffc7d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 11dffc83 push ecx */
  push32((uint32_t)(ECX));
  /* 11dffc84 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11dffc8a push edx */
  push32((uint32_t)(EDX));
  /* 11dffc8b call 0x11e06590 */
  push32(0x11dffc90u); f_11e06590();
  /* 11dffc90 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11dffc96 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 11dffc9c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dffca3 jle 0x11dffcb7 */
  if ((C.zf||C.sf!=C.of)) goto L_11dffcb7;
  /* 11dffca5 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 11dffcab add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dffcb1 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_11dffcb7:;
  /* 11dffcb7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11dffcba mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 11dffcc0 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11dffcc2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11dffcc5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dffcc8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11dffccb jmp 0x11dffc22 */
  goto L_11dffc22;
L_11dffcd0:;
  /* 11dffcd0 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 11dffcd3 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dffcd6 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11dffcd9 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11dffcdc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dffcdf mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11dffce2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dffce5 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 11dffcea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dffcec je 0x11dffd17 */
  if (C.zf) goto L_11dffd17;
  /* 11dffcee mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11dffcf1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11dffcf4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dffcf7 jne 0x11dffcff */
  if (!C.zf) goto L_11dffcff;
  /* 11dffcf9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dffcfd jne 0x11dffd17 */
  if (!C.zf) goto L_11dffd17;
L_11dffcff:;
  /* 11dffcff mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11dffd02 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dffd05 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11dffd08 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11dffd0b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 11dffd0e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11dffd11 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dffd14 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_11dffd17:;
  /* 11dffd17 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dffd1e jne 0x11dffef2 */
  if (!C.zf) goto L_11dffef2;
  /* 11dffd24 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dffd27 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11dffd2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dffd2c je 0x11dffd7d */
  if (C.zf) goto L_11dffd7d;
  /* 11dffd2e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dffd31 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 11dffd37 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11dffd39 je 0x11dffd4b */
  if (C.zf) goto L_11dffd4b;
  /* 11dffd3b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 11dffd42 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11dffd49 jmp 0x11dffd7d */
  goto L_11dffd7d;
L_11dffd4b:;
  /* 11dffd4b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dffd4e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11dffd51 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dffd53 je 0x11dffd65 */
  if (C.zf) goto L_11dffd65;
  /* 11dffd55 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 11dffd5c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11dffd63 jmp 0x11dffd7d */
  goto L_11dffd7d;
L_11dffd65:;
  /* 11dffd65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dffd68 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 11dffd6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11dffd6d je 0x11dffd7d */
  if (C.zf) goto L_11dffd7d;
  /* 11dffd6f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 11dffd76 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_11dffd7d:;
  /* 11dffd7d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 11dffd83 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dffd86 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dffd89 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 11dffd8f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dffd92 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 11dffd95 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dffd97 jne 0x11dffdb5 */
  if (!C.zf) goto L_11dffdb5;
  /* 11dffd99 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11dffd9f push eax */
  push32((uint32_t)(EAX));
  /* 11dffda0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dffda3 push ecx */
  push32((uint32_t)(ECX));
  /* 11dffda4 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 11dffdaa push edx */
  push32((uint32_t)(EDX));
  /* 11dffdab push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11dffdad call 0x11e00090 */
  push32(0x11dffdb2u); f_11e00090();
  /* 11dffdb2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dffdb5:;
  /* 11dffdb5 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11dffdbb push eax */
  push32((uint32_t)(EAX));
  /* 11dffdbc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dffdbf push ecx */
  push32((uint32_t)(ECX));
  /* 11dffdc0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11dffdc3 push edx */
  push32((uint32_t)(EDX));
  /* 11dffdc4 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 11dffdca push eax */
  push32((uint32_t)(EAX));
  /* 11dffdcb call 0x11e000d0 */
  push32(0x11dffdd0u); f_11e000d0();
  /* 11dffdd0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dffdd3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dffdd6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11dffdd9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11dffddb je 0x11dffe03 */
  if (C.zf) goto L_11dffe03;
  /* 11dffddd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dffde0 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11dffde3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dffde5 jne 0x11dffe03 */
  if (!C.zf) goto L_11dffe03;
  /* 11dffde7 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11dffded push eax */
  push32((uint32_t)(EAX));
  /* 11dffdee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dffdf1 push ecx */
  push32((uint32_t)(ECX));
  /* 11dffdf2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 11dffdf8 push edx */
  push32((uint32_t)(EDX));
  /* 11dffdf9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11dffdfb call 0x11e00090 */
  push32(0x11dffe00u); f_11e00090();
  /* 11dffe00 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dffe03:;
  /* 11dffe03 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dffe07 je 0x11dffeb1 */
  if (C.zf) goto L_11dffeb1;
  /* 11dffe0d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dffe11 jle 0x11dffeb1 */
  if ((C.zf||C.sf!=C.of)) goto L_11dffeb1;
  /* 11dffe17 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11dffe1a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 11dffe20 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11dffe23 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_11dffe29:;
  /* 11dffe29 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 11dffe2f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 11dffe35 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11dffe38 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 11dffe3e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dffe40 je 0x11dffeaf */
  if (C.zf) goto L_11dffeaf;
  /* 11dffe42 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 11dffe48 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11dffe4b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 11dffe52 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 11dffe59 push eax */
  push32((uint32_t)(EAX));
  /* 11dffe5a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 11dffe60 push ecx */
  push32((uint32_t)(ECX));
  /* 11dffe61 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 11dffe67 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11dffe6a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 11dffe70 call 0x11e06470 */
  push32(0x11dffe75u); f_11e06470();
  /* 11dffe75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dffe78 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 11dffe7e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11dffe85 jg 0x11dffe89 */
  if ((!C.zf&&C.sf==C.of)) goto L_11dffe89;
  /* 11dffe87 jmp 0x11dffeaf */
  goto L_11dffeaf;
L_11dffe89:;
  /* 11dffe89 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11dffe8f push eax */
  push32((uint32_t)(EAX));
  /* 11dffe90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dffe93 push ecx */
  push32((uint32_t)(ECX));
  /* 11dffe94 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 11dffe9a push edx */
  push32((uint32_t)(EDX));
  /* 11dffe9b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 11dffea1 push eax */
  push32((uint32_t)(EAX));
  /* 11dffea2 call 0x11e000d0 */
  push32(0x11dffea7u); f_11e000d0();
  /* 11dffea7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11dffeaa jmp 0x11dffe29 */
  goto L_11dffe29;
L_11dffeaf:;
  /* 11dffeaf jmp 0x11dffecc */
  goto L_11dffecc;
L_11dffeb1:;
  /* 11dffeb1 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 11dffeb7 push ecx */
  push32((uint32_t)(ECX));
  /* 11dffeb8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dffebb push edx */
  push32((uint32_t)(EDX));
  /* 11dffebc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11dffebf push eax */
  push32((uint32_t)(EAX));
  /* 11dffec0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11dffec3 push ecx */
  push32((uint32_t)(ECX));
  /* 11dffec4 call 0x11e000d0 */
  push32(0x11dffec9u); f_11e000d0();
  /* 11dffec9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dffecc:;
  /* 11dffecc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11dffecf and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11dffed2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11dffed4 je 0x11dffef2 */
  if (C.zf) goto L_11dffef2;
  /* 11dffed6 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11dffedc push eax */
  push32((uint32_t)(EAX));
  /* 11dffedd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11dffee0 push ecx */
  push32((uint32_t)(ECX));
  /* 11dffee1 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 11dffee7 push edx */
  push32((uint32_t)(EDX));
  /* 11dffee8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11dffeea call 0x11e00090 */
  push32(0x11dffeefu); f_11e00090();
  /* 11dffeef add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11dffef2:;
  /* 11dffef2 jmp 0x11dff304 */
  goto L_11dff304;
L_11dffef7:;
  /* 11dffef7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 11dffefd pop edi */
  EDI = (pop32());
  /* 11dffefe pop esi */
  ESI = (pop32());
  /* 11dffeff pop ebx */
  EBX = (pop32());
  /* 11dfff00 mov esp, ebp */
  ESP = (EBP);
  /* 11dfff02 pop ebp */
  EBP = (pop32());
  /* 11dfff03 ret  */
  ESPCHK(0x11dff2e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010010 @ 0x11e00010 (119 bytes, 44 insns) */
void f_11e00010(void) {
  FTRACE(0x11e00010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e00010 push ebp */
  push32((uint32_t)(EBP));
  /* 11e00011 mov ebp, esp */
  EBP = (ESP);
  /* 11e00013 push ecx */
  push32((uint32_t)(ECX));
  /* 11e00014 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e00017 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11e0001a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0001d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e00020 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11e00023 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e00026 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0002a jl 0x11e00052 */
  if ((C.sf!=C.of)) goto L_11e00052;
  /* 11e0002c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0002f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e00031 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11e00034 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11e00036 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 11e0003a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11e00040 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e00043 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e00046 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e00048 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0004b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e0004e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11e00050 jmp 0x11e00065 */
  goto L_11e00065;
L_11e00052:;
  /* 11e00052 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e00055 push edx */
  push32((uint32_t)(EDX));
  /* 11e00056 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e00059 push eax */
  push32((uint32_t)(EAX));
  /* 11e0005a call 0x11dff060 */
  push32(0x11e0005fu); f_11dff060();
  /* 11e0005f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e00062 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11e00065:;
  /* 11e00065 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00069 jne 0x11e00076 */
  if (!C.zf) goto L_11e00076;
  /* 11e0006b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e0006e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11e00074 jmp 0x11e00083 */
  goto L_11e00083;
L_11e00076:;
  /* 11e00076 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e00079 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e0007b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0007e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e00081 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11e00083:;
  /* 11e00083 mov esp, ebp */
  ESP = (EBP);
  /* 11e00085 pop ebp */
  EBP = (pop32());
  /* 11e00086 ret  */
  ESPCHK(0x11e00010u, _esp0);
  ESP += 4; return;
}

/* FUN_10010090 @ 0x11e00090 (53 bytes, 23 insns) */
void f_11e00090(void) {
  FTRACE(0x11e00090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e00090 push ebp */
  push32((uint32_t)(EBP));
  /* 11e00091 mov ebp, esp */
  EBP = (ESP);
L_11e00093:;
  /* 11e00093 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e00096 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e00099 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e0009c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11e0009f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e000a1 jle 0x11e000c3 */
  if ((C.zf||C.sf!=C.of)) goto L_11e000c3;
  /* 11e000a3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e000a6 push edx */
  push32((uint32_t)(EDX));
  /* 11e000a7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e000aa push eax */
  push32((uint32_t)(EAX));
  /* 11e000ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e000ae push ecx */
  push32((uint32_t)(ECX));
  /* 11e000af call 0x11e00010 */
  push32(0x11e000b4u); f_11e00010();
  /* 11e000b4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e000b7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e000ba cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e000bd jne 0x11e000c1 */
  if (!C.zf) goto L_11e000c1;
  /* 11e000bf jmp 0x11e000c3 */
  goto L_11e000c3;
L_11e000c1:;
  /* 11e000c1 jmp 0x11e00093 */
  goto L_11e00093;
L_11e000c3:;
  /* 11e000c3 pop ebp */
  EBP = (pop32());
  /* 11e000c4 ret  */
  ESPCHK(0x11e00090u, _esp0);
  ESP += 4; return;
}

/* FUN_100100d0 @ 0x11e000d0 (74 bytes, 31 insns) */
void f_11e000d0(void) {
  FTRACE(0x11e000d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e000d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e000d1 mov ebp, esp */
  EBP = (ESP);
  /* 11e000d3 push ecx */
  push32((uint32_t)(ECX));
L_11e000d4:;
  /* 11e000d4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e000d7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e000da sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e000dd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11e000e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e000e2 jle 0x11e00116 */
  if ((C.zf||C.sf!=C.of)) goto L_11e00116;
  /* 11e000e4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e000e7 push edx */
  push32((uint32_t)(EDX));
  /* 11e000e8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e000eb push eax */
  push32((uint32_t)(EAX));
  /* 11e000ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e000ef movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11e000f2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e000f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e000f8 push eax */
  push32((uint32_t)(EAX));
  /* 11e000f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e000fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e000ff mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11e00102 call 0x11e00010 */
  push32(0x11e00107u); f_11e00010();
  /* 11e00107 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0010a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e0010d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e00110 jne 0x11e00114 */
  if (!C.zf) goto L_11e00114;
  /* 11e00112 jmp 0x11e00116 */
  goto L_11e00116;
L_11e00114:;
  /* 11e00114 jmp 0x11e000d4 */
  goto L_11e000d4;
L_11e00116:;
  /* 11e00116 mov esp, ebp */
  ESP = (EBP);
  /* 11e00118 pop ebp */
  EBP = (pop32());
  /* 11e00119 ret  */
  ESPCHK(0x11e000d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010120 @ 0x11e00120 (26 bytes, 12 insns) */
void f_11e00120(void) {
  FTRACE(0x11e00120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e00120 push ebp */
  push32((uint32_t)(EBP));
  /* 11e00121 mov ebp, esp */
  EBP = (ESP);
  /* 11e00123 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e00126 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e00128 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0012b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0012e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11e00130 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e00133 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e00135 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11e00138 pop ebp */
  EBP = (pop32());
  /* 11e00139 ret  */
  ESPCHK(0x11e00120u, _esp0);
  ESP += 4; return;
}

/* FUN_10010140 @ 0x11e00140 (31 bytes, 14 insns) */
void f_11e00140(void) {
  FTRACE(0x11e00140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e00140 push ebp */
  push32((uint32_t)(EBP));
  /* 11e00141 mov ebp, esp */
  EBP = (ESP);
  /* 11e00143 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e00146 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e00148 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0014b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0014e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11e00150 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e00153 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e00155 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e00158 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11e0015a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e0015d pop ebp */
  EBP = (pop32());
  /* 11e0015e ret  */
  ESPCHK(0x11e00140u, _esp0);
  ESP += 4; return;
}

