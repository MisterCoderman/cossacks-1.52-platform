#include "recomp.h"

/* __nh_malloc_base @ 0x12d365c0 (87 bytes, 34 insns) */
void f_12d365c0(void) {
  FTRACE(0x12d365c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d365c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d365c1 mov ebp, esp */
  EBP = (ESP);
  /* 12d365c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d365c4 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d365c8 jbe 0x12d365ce */
  if ((C.cf||C.zf)) goto L_12d365ce;
  /* 12d365ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d365cc jmp 0x12d36613 */
  goto L_12d36613;
L_12d365ce:;
  /* 12d365ce cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d365d2 ja 0x12d365e5 */
  if ((!C.cf&&!C.zf)) goto L_12d365e5;
  /* 12d365d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d365d7 push eax */
  push32((uint32_t)(EAX));
  /* 12d365d8 call 0x12d36620 */
  push32(0x12d365ddu); f_12d36620();
  /* 12d365dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d365e0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d365e3 jmp 0x12d365ec */
  goto L_12d365ec;
L_12d365e5:;
  /* 12d365e5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12d365ec:;
  /* 12d365ec cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d365f0 jne 0x12d365f8 */
  if (!C.zf) goto L_12d365f8;
  /* 12d365f2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d365f6 jne 0x12d365fd */
  if (!C.zf) goto L_12d365fd;
L_12d365f8:;
  /* 12d365f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d365fb jmp 0x12d36613 */
  goto L_12d36613;
L_12d365fd:;
  /* 12d365fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d36600 push ecx */
  push32((uint32_t)(ECX));
  /* 12d36601 call 0x12d36510 */
  push32(0x12d36606u); f_12d36510();
  /* 12d36606 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d36609 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3660b jne 0x12d36611 */
  if (!C.zf) goto L_12d36611;
  /* 12d3660d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3660f jmp 0x12d36613 */
  goto L_12d36613;
L_12d36611:;
  /* 12d36611 jmp 0x12d365ce */
  goto L_12d365ce;
L_12d36613:;
  /* 12d36613 mov esp, ebp */
  ESP = (EBP);
  /* 12d36615 pop ebp */
  EBP = (pop32());
  /* 12d36616 ret  */
  ESPCHK(0x12d365c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006620 @ 0x12d36620 (109 bytes, 37 insns) */
void f_12d36620(void) {
  FTRACE(0x12d36620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d36620 push ebp */
  push32((uint32_t)(EBP));
  /* 12d36621 mov ebp, esp */
  EBP = (ESP);
  /* 12d36623 push ecx */
  push32((uint32_t)(ECX));
  /* 12d36624 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d36627 cmp eax, dword ptr [0x12d4ccb4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d4ccb4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3662d ja 0x12d3665d */
  if ((!C.cf&&!C.zf)) goto L_12d3665d;
  /* 12d3662f push 9 */
  push32((uint32_t)(0x9u));
  /* 12d36631 call 0x12d361d0 */
  push32(0x12d36636u); f_12d361d0();
  /* 12d36636 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d36639 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3663c push ecx */
  push32((uint32_t)(ECX));
  /* 12d3663d call 0x12d37160 */
  push32(0x12d36642u); f_12d37160();
  /* 12d36642 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d36645 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d36648 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d3664a call 0x12d36270 */
  push32(0x12d3664fu); f_12d36270();
  /* 12d3664f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d36652 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d36656 je 0x12d3665d */
  if (C.zf) goto L_12d3665d;
  /* 12d36658 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3665b jmp 0x12d36689 */
  goto L_12d36689;
L_12d3665d:;
  /* 12d3665d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d36661 jne 0x12d3666a */
  if (!C.zf) goto L_12d3666a;
  /* 12d36663 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_12d3666a:;
  /* 12d3666a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3666d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d36670 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12d36673 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12d36676 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d36679 push eax */
  push32((uint32_t)(EAX));
  /* 12d3667a push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3667c mov ecx, dword ptr [0x12d4fe0c] */
  ECX = (r32((uint32_t)(0x12d4fe0c)));
  /* 12d36682 push ecx */
  push32((uint32_t)(ECX));
  /* 12d36683 call dword ptr [0x12d502e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502e0))), 0x12d36689u);
L_12d36689:;
  /* 12d36689 mov esp, ebp */
  ESP = (EBP);
  /* 12d3668b pop ebp */
  EBP = (pop32());
  /* 12d3668c ret  */
  ESPCHK(0x12d36620u, _esp0);
  ESP += 4; return;
}

/* FUN_10006690 @ 0x12d36690 (10 bytes, 5 insns) */
void f_12d36690(void) {
  FTRACE(0x12d36690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d36690 push ebp */
  push32((uint32_t)(EBP));
  /* 12d36691 mov ebp, esp */
  EBP = (ESP);
  /* 12d36693 mov eax, 1 */
  EAX = (0x1u);
  /* 12d36698 pop ebp */
  EBP = (pop32());
  /* 12d36699 ret  */
  ESPCHK(0x12d36690u, _esp0);
  ESP += 4; return;
}

/* FUN_100066a0 @ 0x12d366a0 (173 bytes, 59 insns) */
void f_12d366a0(void) {
  FTRACE(0x12d366a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d366a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d366a1 mov ebp, esp */
  EBP = (ESP);
  /* 12d366a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d366a6 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d366aa jbe 0x12d366b3 */
  if ((C.cf||C.zf)) goto L_12d366b3;
  /* 12d366ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d366ae jmp 0x12d36749 */
  goto L_12d36749;
L_12d366b3:;
  /* 12d366b3 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d366b5 call 0x12d361d0 */
  push32(0x12d366bau); f_12d361d0();
  /* 12d366ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d366bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d366c0 push eax */
  push32((uint32_t)(EAX));
  /* 12d366c1 call 0x12d36ad0 */
  push32(0x12d366c6u); f_12d36ad0();
  /* 12d366c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d366c9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d366cc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d366d0 je 0x12d36711 */
  if (C.zf) goto L_12d36711;
  /* 12d366d2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d366d9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d366dc cmp ecx, dword ptr [0x12d4ccb4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d4ccb4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d366e2 ja 0x12d36702 */
  if ((!C.cf&&!C.zf)) goto L_12d36702;
  /* 12d366e4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d366e7 push edx */
  push32((uint32_t)(EDX));
  /* 12d366e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d366eb push eax */
  push32((uint32_t)(EAX));
  /* 12d366ec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d366ef push ecx */
  push32((uint32_t)(ECX));
  /* 12d366f0 call 0x12d379a0 */
  push32(0x12d366f5u); f_12d379a0();
  /* 12d366f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d366f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d366fa je 0x12d36702 */
  if (C.zf) goto L_12d36702;
  /* 12d366fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d366ff mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12d36702:;
  /* 12d36702 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d36704 call 0x12d36270 */
  push32(0x12d36709u); f_12d36270();
  /* 12d36709 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3670c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3670f jmp 0x12d36749 */
  goto L_12d36749;
L_12d36711:;
  /* 12d36711 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d36713 call 0x12d36270 */
  push32(0x12d36718u); f_12d36270();
  /* 12d36718 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3671b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3671f jne 0x12d36728 */
  if (!C.zf) goto L_12d36728;
  /* 12d36721 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12d36728:;
  /* 12d36728 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3672b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3672e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 12d36730 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12d36733 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d36736 push ecx */
  push32((uint32_t)(ECX));
  /* 12d36737 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3673a push edx */
  push32((uint32_t)(EDX));
  /* 12d3673b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12d3673d mov eax, dword ptr [0x12d4fe0c] */
  EAX = (r32((uint32_t)(0x12d4fe0c)));
  /* 12d36742 push eax */
  push32((uint32_t)(EAX));
  /* 12d36743 call dword ptr [0x12d502e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502e4))), 0x12d36749u);
L_12d36749:;
  /* 12d36749 mov esp, ebp */
  ESP = (EBP);
  /* 12d3674b pop ebp */
  EBP = (pop32());
  /* 12d3674c ret  */
  ESPCHK(0x12d366a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006750 @ 0x12d36750 (490 bytes, 165 insns) */
void f_12d36750(void) {
  FTRACE(0x12d36750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d36750 push ebp */
  push32((uint32_t)(EBP));
  /* 12d36751 mov ebp, esp */
  EBP = (ESP);
  /* 12d36753 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d36756 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3675a jne 0x12d3676d */
  if (!C.zf) goto L_12d3676d;
  /* 12d3675c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3675f push eax */
  push32((uint32_t)(EAX));
  /* 12d36760 call 0x12d365a0 */
  push32(0x12d36765u); f_12d365a0();
  /* 12d36765 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d36768 jmp 0x12d36936 */
  goto L_12d36936;
L_12d3676d:;
  /* 12d3676d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d36771 jne 0x12d36786 */
  if (!C.zf) goto L_12d36786;
  /* 12d36773 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d36776 push ecx */
  push32((uint32_t)(ECX));
  /* 12d36777 call 0x12d36940 */
  push32(0x12d3677cu); f_12d36940();
  /* 12d3677c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3677f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d36781 jmp 0x12d36936 */
  goto L_12d36936;
L_12d36786:;
  /* 12d36786 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d3678d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d36791 ja 0x12d36909 */
  if ((!C.cf&&!C.zf)) goto L_12d36909;
  /* 12d36797 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d36799 call 0x12d361d0 */
  push32(0x12d3679eu); f_12d361d0();
  /* 12d3679e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d367a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d367a4 push edx */
  push32((uint32_t)(EDX));
  /* 12d367a5 call 0x12d36ad0 */
  push32(0x12d367aau); f_12d36ad0();
  /* 12d367aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d367ad mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d367b0 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d367b4 je 0x12d368cc */
  if (C.zf) goto L_12d368cc;
  /* 12d367ba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d367bd cmp eax, dword ptr [0x12d4ccb4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d4ccb4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d367c3 ja 0x12d36840 */
  if ((!C.cf&&!C.zf)) goto L_12d36840;
  /* 12d367c5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d367c8 push ecx */
  push32((uint32_t)(ECX));
  /* 12d367c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d367cc push edx */
  push32((uint32_t)(EDX));
  /* 12d367cd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d367d0 push eax */
  push32((uint32_t)(EAX));
  /* 12d367d1 call 0x12d379a0 */
  push32(0x12d367d6u); f_12d379a0();
  /* 12d367d6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d367d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d367db je 0x12d367e5 */
  if (C.zf) goto L_12d367e5;
  /* 12d367dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d367e0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d367e3 jmp 0x12d36840 */
  goto L_12d36840;
L_12d367e5:;
  /* 12d367e5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d367e8 push edx */
  push32((uint32_t)(EDX));
  /* 12d367e9 call 0x12d37160 */
  push32(0x12d367eeu); f_12d37160();
  /* 12d367ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d367f1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d367f4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d367f8 je 0x12d36840 */
  if (C.zf) goto L_12d36840;
  /* 12d367fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d367fd mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 12d36800 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d36803 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d36806 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d36809 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3680c jae 0x12d36816 */
  if (!C.cf) goto L_12d36816;
  /* 12d3680e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d36811 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12d36814 jmp 0x12d3681c */
  goto L_12d3681c;
L_12d36816:;
  /* 12d36816 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d36819 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12d3681c:;
  /* 12d3681c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3681f push edx */
  push32((uint32_t)(EDX));
  /* 12d36820 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d36823 push eax */
  push32((uint32_t)(EAX));
  /* 12d36824 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d36827 push ecx */
  push32((uint32_t)(ECX));
  /* 12d36828 call 0x12d390b0 */
  push32(0x12d3682du); f_12d390b0();
  /* 12d3682d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d36830 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d36833 push edx */
  push32((uint32_t)(EDX));
  /* 12d36834 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d36837 push eax */
  push32((uint32_t)(EAX));
  /* 12d36838 call 0x12d36b90 */
  push32(0x12d3683du); f_12d36b90();
  /* 12d3683d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d36840:;
  /* 12d36840 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d36844 jne 0x12d368c0 */
  if (!C.zf) goto L_12d368c0;
  /* 12d36846 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3684a jne 0x12d36853 */
  if (!C.zf) goto L_12d36853;
  /* 12d3684c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12d36853:;
  /* 12d36853 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d36856 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d36859 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 12d3685c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12d3685f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d36862 push edx */
  push32((uint32_t)(EDX));
  /* 12d36863 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d36865 mov eax, dword ptr [0x12d4fe0c] */
  EAX = (r32((uint32_t)(0x12d4fe0c)));
  /* 12d3686a push eax */
  push32((uint32_t)(EAX));
  /* 12d3686b call dword ptr [0x12d502e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502e0))), 0x12d36871u);
  /* 12d36871 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d36874 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d36878 je 0x12d368c0 */
  if (C.zf) goto L_12d368c0;
  /* 12d3687a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3687d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12d36880 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d36883 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d36886 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d36889 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3688c jae 0x12d36896 */
  if (!C.cf) goto L_12d36896;
  /* 12d3688e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d36891 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12d36894 jmp 0x12d3689c */
  goto L_12d3689c;
L_12d36896:;
  /* 12d36896 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d36899 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12d3689c:;
  /* 12d3689c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d3689f push eax */
  push32((uint32_t)(EAX));
  /* 12d368a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d368a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d368a4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d368a7 push edx */
  push32((uint32_t)(EDX));
  /* 12d368a8 call 0x12d390b0 */
  push32(0x12d368adu); f_12d390b0();
  /* 12d368ad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d368b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d368b3 push eax */
  push32((uint32_t)(EAX));
  /* 12d368b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d368b7 push ecx */
  push32((uint32_t)(ECX));
  /* 12d368b8 call 0x12d36b90 */
  push32(0x12d368bdu); f_12d36b90();
  /* 12d368bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d368c0:;
  /* 12d368c0 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d368c2 call 0x12d36270 */
  push32(0x12d368c7u); f_12d36270();
  /* 12d368c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d368ca jmp 0x12d36909 */
  goto L_12d36909;
L_12d368cc:;
  /* 12d368cc push 9 */
  push32((uint32_t)(0x9u));
  /* 12d368ce call 0x12d36270 */
  push32(0x12d368d3u); f_12d36270();
  /* 12d368d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d368d6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d368da jne 0x12d368e3 */
  if (!C.zf) goto L_12d368e3;
  /* 12d368dc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12d368e3:;
  /* 12d368e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d368e6 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d368e9 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12d368ec mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12d368ef mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d368f2 push eax */
  push32((uint32_t)(EAX));
  /* 12d368f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d368f6 push ecx */
  push32((uint32_t)(ECX));
  /* 12d368f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d368f9 mov edx, dword ptr [0x12d4fe0c] */
  EDX = (r32((uint32_t)(0x12d4fe0c)));
  /* 12d368ff push edx */
  push32((uint32_t)(EDX));
  /* 12d36900 call dword ptr [0x12d502e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502e4))), 0x12d36906u);
  /* 12d36906 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12d36909:;
  /* 12d36909 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3690d jne 0x12d36918 */
  if (!C.zf) goto L_12d36918;
  /* 12d3690f cmp dword ptr [0x12d4e648], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e648))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d36916 jne 0x12d3691d */
  if (!C.zf) goto L_12d3691d;
L_12d36918:;
  /* 12d36918 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3691b jmp 0x12d36936 */
  goto L_12d36936;
L_12d3691d:;
  /* 12d3691d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d36920 push eax */
  push32((uint32_t)(EAX));
  /* 12d36921 call 0x12d36510 */
  push32(0x12d36926u); f_12d36510();
  /* 12d36926 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d36929 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3692b jne 0x12d36931 */
  if (!C.zf) goto L_12d36931;
  /* 12d3692d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3692f jmp 0x12d36936 */
  goto L_12d36936;
L_12d36931:;
  /* 12d36931 jmp 0x12d36786 */
  goto L_12d36786;
L_12d36936:;
  /* 12d36936 mov esp, ebp */
  ESP = (EBP);
  /* 12d36938 pop ebp */
  EBP = (pop32());
  /* 12d36939 ret  */
  ESPCHK(0x12d36750u, _esp0);
  ESP += 4; return;
}

/* FUN_10006940 @ 0x12d36940 (104 bytes, 38 insns) */
void f_12d36940(void) {
  FTRACE(0x12d36940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d36940 push ebp */
  push32((uint32_t)(EBP));
  /* 12d36941 mov ebp, esp */
  EBP = (ESP);
  /* 12d36943 push ecx */
  push32((uint32_t)(ECX));
  /* 12d36944 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d36948 jne 0x12d3694c */
  if (!C.zf) goto L_12d3694c;
  /* 12d3694a jmp 0x12d369a4 */
  goto L_12d369a4;
L_12d3694c:;
  /* 12d3694c push 9 */
  push32((uint32_t)(0x9u));
  /* 12d3694e call 0x12d361d0 */
  push32(0x12d36953u); f_12d361d0();
  /* 12d36953 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d36956 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d36959 push eax */
  push32((uint32_t)(EAX));
  /* 12d3695a call 0x12d36ad0 */
  push32(0x12d3695fu); f_12d36ad0();
  /* 12d3695f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d36962 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d36965 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d36969 je 0x12d36987 */
  if (C.zf) goto L_12d36987;
  /* 12d3696b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3696e push ecx */
  push32((uint32_t)(ECX));
  /* 12d3696f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d36972 push edx */
  push32((uint32_t)(EDX));
  /* 12d36973 call 0x12d36b90 */
  push32(0x12d36978u); f_12d36b90();
  /* 12d36978 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3697b push 9 */
  push32((uint32_t)(0x9u));
  /* 12d3697d call 0x12d36270 */
  push32(0x12d36982u); f_12d36270();
  /* 12d36982 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d36985 jmp 0x12d369a4 */
  goto L_12d369a4;
L_12d36987:;
  /* 12d36987 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d36989 call 0x12d36270 */
  push32(0x12d3698eu); f_12d36270();
  /* 12d3698e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d36991 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d36994 push eax */
  push32((uint32_t)(EAX));
  /* 12d36995 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d36997 mov ecx, dword ptr [0x12d4fe0c] */
  ECX = (r32((uint32_t)(0x12d4fe0c)));
  /* 12d3699d push ecx */
  push32((uint32_t)(ECX));
  /* 12d3699e call dword ptr [0x12d502c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502c0))), 0x12d369a4u);
L_12d369a4:;
  /* 12d369a4 mov esp, ebp */
  ESP = (EBP);
  /* 12d369a6 pop ebp */
  EBP = (pop32());
  /* 12d369a7 ret  */
  ESPCHK(0x12d36940u, _esp0);
  ESP += 4; return;
}

/* FUN_100069b0 @ 0x12d369b0 (116 bytes, 34 insns) */
void f_12d369b0(void) {
  FTRACE(0x12d369b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d369b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d369b1 mov ebp, esp */
  EBP = (ESP);
  /* 12d369b3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d369b4 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 12d369bb push 9 */
  push32((uint32_t)(0x9u));
  /* 12d369bd call 0x12d361d0 */
  push32(0x12d369c2u); f_12d361d0();
  /* 12d369c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d369c5 call 0x12d380c0 */
  push32(0x12d369cau); f_12d380c0();
  /* 12d369ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d369cc jge 0x12d369d5 */
  if ((C.sf==C.of)) goto L_12d369d5;
  /* 12d369ce mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_12d369d5:;
  /* 12d369d5 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d369d7 call 0x12d36270 */
  push32(0x12d369dcu); f_12d36270();
  /* 12d369dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d369df push 0 */
  push32((uint32_t)(0x0u));
  /* 12d369e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d369e3 mov eax, dword ptr [0x12d4fe0c] */
  EAX = (r32((uint32_t)(0x12d4fe0c)));
  /* 12d369e8 push eax */
  push32((uint32_t)(EAX));
  /* 12d369e9 call dword ptr [0x12d502a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502a0))), 0x12d369efu);
  /* 12d369ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d369f1 jne 0x12d36a1d */
  if (!C.zf) goto L_12d36a1d;
  /* 12d369f3 call dword ptr [0x12d50280] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50280))), 0x12d369f9u);
  /* 12d369f9 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d369fc jne 0x12d36a16 */
  if (!C.zf) goto L_12d36a16;
  /* 12d369fe call 0x12d3a6b0 */
  push32(0x12d36a03u); f_12d3a6b0();
  /* 12d36a03 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 12d36a09 call 0x12d3a6a0 */
  push32(0x12d36a0eu); f_12d3a6a0();
  /* 12d36a0e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 12d36a14 jmp 0x12d36a1d */
  goto L_12d36a1d;
L_12d36a16:;
  /* 12d36a16 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_12d36a1d:;
  /* 12d36a1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d36a20 mov esp, ebp */
  ESP = (EBP);
  /* 12d36a22 pop ebp */
  EBP = (pop32());
  /* 12d36a23 ret  */
  ESPCHK(0x12d369b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a30 @ 0x12d36a30 (10 bytes, 5 insns) */
void f_12d36a30(void) {
  FTRACE(0x12d36a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d36a30 push ebp */
  push32((uint32_t)(EBP));
  /* 12d36a31 mov ebp, esp */
  EBP = (ESP);
  /* 12d36a33 call 0x12d369b0 */
  push32(0x12d36a38u); f_12d369b0();
  /* 12d36a38 pop ebp */
  EBP = (pop32());
  /* 12d36a39 ret  */
  ESPCHK(0x12d36a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a40 @ 0x12d36a40 (10 bytes, 5 insns) */
void f_12d36a40(void) {
  FTRACE(0x12d36a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d36a40 push ebp */
  push32((uint32_t)(EBP));
  /* 12d36a41 mov ebp, esp */
  EBP = (ESP);
  /* 12d36a43 mov eax, dword ptr [0x12d4ccb4] */
  EAX = (r32((uint32_t)(0x12d4ccb4)));
  /* 12d36a48 pop ebp */
  EBP = (pop32());
  /* 12d36a49 ret  */
  ESPCHK(0x12d36a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a50 @ 0x12d36a50 (31 bytes, 11 insns) */
void f_12d36a50(void) {
  FTRACE(0x12d36a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d36a50 push ebp */
  push32((uint32_t)(EBP));
  /* 12d36a51 mov ebp, esp */
  EBP = (ESP);
  /* 12d36a53 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d36a5a jbe 0x12d36a60 */
  if ((C.cf||C.zf)) goto L_12d36a60;
  /* 12d36a5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d36a5e jmp 0x12d36a6d */
  goto L_12d36a6d;
L_12d36a60:;
  /* 12d36a60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d36a63 mov dword ptr [0x12d4ccb4], eax */
  w32((uint32_t)(0x12d4ccb4), (EAX));
  /* 12d36a68 mov eax, 1 */
  EAX = (0x1u);
L_12d36a6d:;
  /* 12d36a6d pop ebp */
  EBP = (pop32());
  /* 12d36a6e ret  */
  ESPCHK(0x12d36a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a70 @ 0x12d36a70 (89 bytes, 20 insns) */
void f_12d36a70(void) {
  FTRACE(0x12d36a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d36a70 push ebp */
  push32((uint32_t)(EBP));
  /* 12d36a71 mov ebp, esp */
  EBP = (ESP);
  /* 12d36a73 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 12d36a78 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d36a7a mov eax, dword ptr [0x12d4fe0c] */
  EAX = (r32((uint32_t)(0x12d4fe0c)));
  /* 12d36a7f push eax */
  push32((uint32_t)(EAX));
  /* 12d36a80 call dword ptr [0x12d502e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502e0))), 0x12d36a86u);
  /* 12d36a86 mov dword ptr [0x12d4fe08], eax */
  w32((uint32_t)(0x12d4fe08), (EAX));
  /* 12d36a8b cmp dword ptr [0x12d4fe08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4fe08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d36a92 jne 0x12d36a98 */
  if (!C.zf) goto L_12d36a98;
  /* 12d36a94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d36a96 jmp 0x12d36ac7 */
  goto L_12d36ac7;
L_12d36a98:;
  /* 12d36a98 mov ecx, dword ptr [0x12d4fe08] */
  ECX = (r32((uint32_t)(0x12d4fe08)));
  /* 12d36a9e mov dword ptr [0x12d4fdfc], ecx */
  w32((uint32_t)(0x12d4fdfc), (ECX));
  /* 12d36aa4 mov dword ptr [0x12d4fe00], 0 */
  w32((uint32_t)(0x12d4fe00), (0x0u));
  /* 12d36aae mov dword ptr [0x12d4fe04], 0 */
  w32((uint32_t)(0x12d4fe04), (0x0u));
  /* 12d36ab8 mov dword ptr [0x12d4fde8], 0x10 */
  w32((uint32_t)(0x12d4fde8), (0x10u));
  /* 12d36ac2 mov eax, 1 */
  EAX = (0x1u);
L_12d36ac7:;
  /* 12d36ac7 pop ebp */
  EBP = (pop32());
  /* 12d36ac8 ret  */
  ESPCHK(0x12d36a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ad0 @ 0x12d36ad0 (85 bytes, 29 insns) */
void f_12d36ad0(void) {
  FTRACE(0x12d36ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d36ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d36ad1 mov ebp, esp */
  EBP = (ESP);
  /* 12d36ad3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d36ad6 mov eax, dword ptr [0x12d4fe04] */
  EAX = (r32((uint32_t)(0x12d4fe04)));
  /* 12d36adb imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d36ade mov ecx, dword ptr [0x12d4fe08] */
  ECX = (r32((uint32_t)(0x12d4fe08)));
  /* 12d36ae4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d36ae6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d36ae9 mov edx, dword ptr [0x12d4fe08] */
  EDX = (r32((uint32_t)(0x12d4fe08)));
  /* 12d36aef mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12d36af2:;
  /* 12d36af2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d36af5 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d36af8 jae 0x12d36b1f */
  if (!C.cf) goto L_12d36b1f;
  /* 12d36afa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d36afd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d36b00 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d36b03 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d36b06 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d36b0d jae 0x12d36b14 */
  if (!C.cf) goto L_12d36b14;
  /* 12d36b0f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d36b12 jmp 0x12d36b21 */
  goto L_12d36b21;
L_12d36b14:;
  /* 12d36b14 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d36b17 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d36b1a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d36b1d jmp 0x12d36af2 */
  goto L_12d36af2;
L_12d36b1f:;
  /* 12d36b1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d36b21:;
  /* 12d36b21 mov esp, ebp */
  ESP = (EBP);
  /* 12d36b23 pop ebp */
  EBP = (pop32());
  /* 12d36b24 ret  */
  ESPCHK(0x12d36ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b30 @ 0x12d36b30 (95 bytes, 33 insns) */
void f_12d36b30(void) {
  FTRACE(0x12d36b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d36b30 push ebp */
  push32((uint32_t)(EBP));
  /* 12d36b31 mov ebp, esp */
  EBP = (ESP);
  /* 12d36b33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d36b36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d36b39 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d36b3c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d36b3f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d36b42 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d36b45 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12d36b48 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d36b4b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d36b50 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d36b53 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d36b55 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d36b58 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12d36b5b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12d36b5d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d36b5f jne 0x12d36b81 */
  if (!C.zf) goto L_12d36b81;
  /* 12d36b61 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d36b64 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 12d36b67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d36b69 jne 0x12d36b81 */
  if (!C.zf) goto L_12d36b81;
  /* 12d36b6b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d36b6e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d36b74 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d36b76 je 0x12d36b81 */
  if (C.zf) goto L_12d36b81;
  /* 12d36b78 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 12d36b7f jmp 0x12d36b88 */
  goto L_12d36b88;
L_12d36b81:;
  /* 12d36b81 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12d36b88:;
  /* 12d36b88 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d36b8b mov esp, ebp */
  ESP = (EBP);
  /* 12d36b8d pop ebp */
  EBP = (pop32());
  /* 12d36b8e ret  */
  ESPCHK(0x12d36b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b90 @ 0x12d36b90 (1485 bytes, 453 insns) */
void f_12d36b90(void) {
  FTRACE(0x12d36b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d36b90 push ebp */
  push32((uint32_t)(EBP));
  /* 12d36b91 mov ebp, esp */
  EBP = (ESP);
  /* 12d36b93 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d36b96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d36b99 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d36b9c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 12d36b9f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d36ba2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d36ba5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d36ba8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12d36bab mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d36bae shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 12d36bb1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d36bb4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d36bb7 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d36bbd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d36bc0 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 12d36bc7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d36bca mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d36bcd sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d36bd0 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12d36bd3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d36bd6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d36bd8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d36bdb mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12d36bde mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d36be1 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d36be4 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 12d36be7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d36bea mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d36bec mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12d36bef mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d36bf2 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 12d36bf5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d36bf8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d36bfb and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12d36bfe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d36c00 jne 0x12d36d28 */
  if (!C.zf) goto L_12d36d28;
  /* 12d36c06 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d36c09 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12d36c0c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d36c0f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12d36c12 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d36c16 jbe 0x12d36c1f */
  if ((C.cf||C.zf)) goto L_12d36c1f;
  /* 12d36c18 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12d36c1f:;
  /* 12d36c1f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d36c22 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d36c25 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d36c28 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d36c2b jne 0x12d36d01 */
  if (!C.zf) goto L_12d36d01;
  /* 12d36c31 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d36c35 jae 0x12d36c96 */
  if (!C.cf) goto L_12d36c96;
  /* 12d36c37 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d36c3c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d36c3f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d36c41 not eax */
  EAX = (~(EAX));
  /* 12d36c43 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d36c46 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d36c49 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12d36c4d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d36c4f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d36c52 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d36c55 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12d36c59 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d36c5c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d36c5f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12d36c62 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12d36c65 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d36c68 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d36c6b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12d36c6e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d36c71 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d36c74 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12d36c78 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d36c7a jne 0x12d36c94 */
  if (!C.zf) goto L_12d36c94;
  /* 12d36c7c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d36c81 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d36c84 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d36c86 not eax */
  EAX = (~(EAX));
  /* 12d36c88 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d36c8b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d36c8d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12d36c8f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d36c92 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12d36c94:;
  /* 12d36c94 jmp 0x12d36d01 */
  goto L_12d36d01;
L_12d36c96:;
  /* 12d36c96 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d36c99 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d36c9c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d36ca1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d36ca3 not edx */
  EDX = (~(EDX));
  /* 12d36ca5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d36ca8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d36cab mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12d36cb2 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12d36cb4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d36cb7 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d36cba mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 12d36cc1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d36cc4 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d36cc7 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12d36cca sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12d36ccd mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d36cd0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d36cd3 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12d36cd6 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d36cd9 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d36cdc movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12d36ce0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d36ce2 jne 0x12d36d01 */
  if (!C.zf) goto L_12d36d01;
  /* 12d36ce4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d36ce7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d36cea mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d36cef shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d36cf1 not edx */
  EDX = (~(EDX));
  /* 12d36cf3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d36cf6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d36cf9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12d36cfb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d36cfe mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12d36d01:;
  /* 12d36d01 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d36d04 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12d36d07 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d36d0a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12d36d0d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12d36d10 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d36d13 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d36d16 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d36d19 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12d36d1c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12d36d1f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d36d22 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d36d25 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_12d36d28:;
  /* 12d36d28 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d36d2b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12d36d2e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d36d31 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12d36d34 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d36d38 jbe 0x12d36d41 */
  if ((C.cf||C.zf)) goto L_12d36d41;
  /* 12d36d3a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_12d36d41:;
  /* 12d36d41 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d36d44 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12d36d47 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d36d49 jne 0x12d36ea5 */
  if (!C.zf) goto L_12d36ea5;
  /* 12d36d4f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d36d52 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d36d55 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 12d36d58 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d36d5b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12d36d5e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d36d61 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12d36d64 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d36d68 jbe 0x12d36d71 */
  if ((C.cf||C.zf)) goto L_12d36d71;
  /* 12d36d6a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_12d36d71:;
  /* 12d36d71 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d36d74 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d36d77 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12d36d7a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d36d7d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12d36d80 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d36d83 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12d36d86 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d36d8a jbe 0x12d36d93 */
  if ((C.cf||C.zf)) goto L_12d36d93;
  /* 12d36d8c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_12d36d93:;
  /* 12d36d93 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d36d96 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d36d99 je 0x12d36e9f */
  if (C.zf) goto L_12d36e9f;
  /* 12d36d9f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12d36da2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12d36da5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d36da8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d36dab jne 0x12d36e81 */
  if (!C.zf) goto L_12d36e81;
  /* 12d36db1 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d36db5 jae 0x12d36e16 */
  if (!C.cf) goto L_12d36e16;
  /* 12d36db7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d36dbc mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d36dbf shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d36dc1 not edx */
  EDX = (~(EDX));
  /* 12d36dc3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d36dc6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d36dc9 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12d36dcd and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12d36dcf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d36dd2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d36dd5 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12d36dd9 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d36ddc add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d36ddf mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12d36de2 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12d36de5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d36de8 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d36deb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12d36dee mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d36df1 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d36df4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12d36df8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d36dfa jne 0x12d36e14 */
  if (!C.zf) goto L_12d36e14;
  /* 12d36dfc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d36e01 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d36e04 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d36e06 not edx */
  EDX = (~(EDX));
  /* 12d36e08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d36e0b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d36e0d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12d36e0f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d36e12 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12d36e14:;
  /* 12d36e14 jmp 0x12d36e81 */
  goto L_12d36e81;
L_12d36e16:;
  /* 12d36e16 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d36e19 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d36e1c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d36e21 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d36e23 not eax */
  EAX = (~(EAX));
  /* 12d36e25 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d36e28 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d36e2b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12d36e32 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d36e34 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d36e37 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d36e3a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12d36e41 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d36e44 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d36e47 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12d36e4a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12d36e4d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d36e50 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d36e53 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12d36e56 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d36e59 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d36e5c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12d36e60 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d36e62 jne 0x12d36e81 */
  if (!C.zf) goto L_12d36e81;
  /* 12d36e64 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d36e67 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d36e6a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d36e6f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d36e71 not eax */
  EAX = (~(EAX));
  /* 12d36e73 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d36e76 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d36e79 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12d36e7b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d36e7e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12d36e81:;
  /* 12d36e81 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12d36e84 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12d36e87 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12d36e8a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d36e8d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12d36e90 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12d36e93 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12d36e96 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12d36e99 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12d36e9c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_12d36e9f:;
  /* 12d36e9f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12d36ea2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_12d36ea5:;
  /* 12d36ea5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d36ea8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12d36eab test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d36ead jne 0x12d36ebb */
  if (!C.zf) goto L_12d36ebb;
  /* 12d36eaf mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d36eb2 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d36eb5 je 0x12d36fcb */
  if (C.zf) goto L_12d36fcb;
L_12d36ebb:;
  /* 12d36ebb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d36ebe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d36ec1 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 12d36ec4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12d36ec7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d36eca mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d36ecd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d36ed0 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12d36ed3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d36ed6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d36ed9 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12d36edc mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d36edf mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d36ee2 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12d36ee5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d36ee8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d36eeb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d36eee mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12d36ef1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d36ef4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d36ef7 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d36efa cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d36efd jne 0x12d36fcb */
  if (!C.zf) goto L_12d36fcb;
  /* 12d36f03 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d36f07 jae 0x12d36f64 */
  if (!C.cf) goto L_12d36f64;
  /* 12d36f09 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d36f0c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d36f0f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12d36f13 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d36f16 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d36f19 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12d36f1c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d36f1f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d36f22 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d36f25 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12d36f28 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d36f2a jne 0x12d36f42 */
  if (!C.zf) goto L_12d36f42;
  /* 12d36f2c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d36f31 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d36f34 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d36f36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d36f39 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d36f3b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12d36f3d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d36f40 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12d36f42:;
  /* 12d36f42 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d36f47 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d36f4a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d36f4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d36f4f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d36f52 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12d36f56 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d36f58 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d36f5b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d36f5e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12d36f62 jmp 0x12d36fcb */
  goto L_12d36fcb;
L_12d36f64:;
  /* 12d36f64 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d36f67 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d36f6a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12d36f6e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d36f71 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d36f74 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12d36f77 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d36f7a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d36f7d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d36f80 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12d36f83 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d36f85 jne 0x12d36fa2 */
  if (!C.zf) goto L_12d36fa2;
  /* 12d36f87 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d36f8a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d36f8d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d36f92 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d36f94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d36f97 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d36f9a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12d36f9c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d36f9f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12d36fa2:;
  /* 12d36fa2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d36fa5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d36fa8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d36fad shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d36faf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d36fb2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d36fb5 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12d36fbc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d36fbe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d36fc1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12d36fc4 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_12d36fcb:;
  /* 12d36fcb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d36fce mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d36fd1 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12d36fd3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d36fd6 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d36fd9 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d36fdc mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 12d36fdf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d36fe2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d36fe4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d36fe7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d36fea mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12d36fec mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d36fef cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d36ff2 jne 0x12d37159 */
  if (!C.zf) goto L_12d37159;
  /* 12d36ff8 cmp dword ptr [0x12d4fe00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4fe00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d36fff je 0x12d37148 */
  if (C.zf) goto L_12d37148;
  /* 12d37005 mov eax, dword ptr [0x12d4fdf8] */
  EAX = (r32((uint32_t)(0x12d4fdf8)));
  /* 12d3700a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 12d3700d mov ecx, dword ptr [0x12d4fe00] */
  ECX = (r32((uint32_t)(0x12d4fe00)));
  /* 12d37013 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d37016 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37018 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12d3701b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12d37020 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12d37025 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d37028 push eax */
  push32((uint32_t)(EAX));
  /* 12d37029 call dword ptr [0x12d502c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502c4))), 0x12d3702fu);
  /* 12d3702f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d37034 mov ecx, dword ptr [0x12d4fdf8] */
  ECX = (r32((uint32_t)(0x12d4fdf8)));
  /* 12d3703a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d3703c mov eax, dword ptr [0x12d4fe00] */
  EAX = (r32((uint32_t)(0x12d4fe00)));
  /* 12d37041 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12d37044 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12d37046 mov edx, dword ptr [0x12d4fe00] */
  EDX = (r32((uint32_t)(0x12d4fe00)));
  /* 12d3704c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12d3704f mov eax, dword ptr [0x12d4fe00] */
  EAX = (r32((uint32_t)(0x12d4fe00)));
  /* 12d37054 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d37057 mov edx, dword ptr [0x12d4fdf8] */
  EDX = (r32((uint32_t)(0x12d4fdf8)));
  /* 12d3705d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 12d37068 mov eax, dword ptr [0x12d4fe00] */
  EAX = (r32((uint32_t)(0x12d4fe00)));
  /* 12d3706d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d37070 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 12d37073 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12d37076 mov eax, dword ptr [0x12d4fe00] */
  EAX = (r32((uint32_t)(0x12d4fe00)));
  /* 12d3707b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d3707e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 12d37081 mov edx, dword ptr [0x12d4fe00] */
  EDX = (r32((uint32_t)(0x12d4fe00)));
  /* 12d37087 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12d3708a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 12d3708e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d37090 jne 0x12d370a6 */
  if (!C.zf) goto L_12d370a6;
  /* 12d37092 mov edx, dword ptr [0x12d4fe00] */
  EDX = (r32((uint32_t)(0x12d4fe00)));
  /* 12d37098 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12d3709b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 12d3709d mov ecx, dword ptr [0x12d4fe00] */
  ECX = (r32((uint32_t)(0x12d4fe00)));
  /* 12d370a3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_12d370a6:;
  /* 12d370a6 mov edx, dword ptr [0x12d4fe00] */
  EDX = (r32((uint32_t)(0x12d4fe00)));
  /* 12d370ac cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d370b0 jne 0x12d37148 */
  if (!C.zf) goto L_12d37148;
  /* 12d370b6 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12d370bb push 0 */
  push32((uint32_t)(0x0u));
  /* 12d370bd mov eax, dword ptr [0x12d4fe00] */
  EAX = (r32((uint32_t)(0x12d4fe00)));
  /* 12d370c2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12d370c5 push ecx */
  push32((uint32_t)(ECX));
  /* 12d370c6 call dword ptr [0x12d502c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502c4))), 0x12d370ccu);
  /* 12d370cc mov edx, dword ptr [0x12d4fe00] */
  EDX = (r32((uint32_t)(0x12d4fe00)));
  /* 12d370d2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12d370d5 push eax */
  push32((uint32_t)(EAX));
  /* 12d370d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d370d8 mov ecx, dword ptr [0x12d4fe0c] */
  ECX = (r32((uint32_t)(0x12d4fe0c)));
  /* 12d370de push ecx */
  push32((uint32_t)(ECX));
  /* 12d370df call dword ptr [0x12d502c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502c0))), 0x12d370e5u);
  /* 12d370e5 mov edx, dword ptr [0x12d4fe04] */
  EDX = (r32((uint32_t)(0x12d4fe04)));
  /* 12d370eb imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d370ee mov eax, dword ptr [0x12d4fe08] */
  EAX = (r32((uint32_t)(0x12d4fe08)));
  /* 12d370f3 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d370f5 mov ecx, dword ptr [0x12d4fe00] */
  ECX = (r32((uint32_t)(0x12d4fe00)));
  /* 12d370fb add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d370fe sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d37100 push eax */
  push32((uint32_t)(EAX));
  /* 12d37101 mov edx, dword ptr [0x12d4fe00] */
  EDX = (r32((uint32_t)(0x12d4fe00)));
  /* 12d37107 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3710a push edx */
  push32((uint32_t)(EDX));
  /* 12d3710b mov eax, dword ptr [0x12d4fe00] */
  EAX = (r32((uint32_t)(0x12d4fe00)));
  /* 12d37110 push eax */
  push32((uint32_t)(EAX));
  /* 12d37111 call 0x12d3a6c0 */
  push32(0x12d37116u); f_12d3a6c0();
  /* 12d37116 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37119 mov ecx, dword ptr [0x12d4fe04] */
  ECX = (r32((uint32_t)(0x12d4fe04)));
  /* 12d3711f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d37122 mov dword ptr [0x12d4fe04], ecx */
  w32((uint32_t)(0x12d4fe04), (ECX));
  /* 12d37128 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3712b cmp edx, dword ptr [0x12d4fe00] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12d4fe00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d37131 jbe 0x12d3713c */
  if ((C.cf||C.zf)) goto L_12d3713c;
  /* 12d37133 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d37136 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d37139 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12d3713c:;
  /* 12d3713c mov ecx, dword ptr [0x12d4fe08] */
  ECX = (r32((uint32_t)(0x12d4fe08)));
  /* 12d37142 mov dword ptr [0x12d4fdfc], ecx */
  w32((uint32_t)(0x12d4fdfc), (ECX));
L_12d37148:;
  /* 12d37148 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3714b mov dword ptr [0x12d4fe00], edx */
  w32((uint32_t)(0x12d4fe00), (EDX));
  /* 12d37151 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d37154 mov dword ptr [0x12d4fdf8], eax */
  w32((uint32_t)(0x12d4fdf8), (EAX));
L_12d37159:;
  /* 12d37159 mov esp, ebp */
  ESP = (EBP);
  /* 12d3715b pop ebp */
  EBP = (pop32());
  /* 12d3715c ret  */
  ESPCHK(0x12d36b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10007160 @ 0x12d37160 (1334 bytes, 427 insns) */
void f_12d37160(void) {
  FTRACE(0x12d37160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d37160 push ebp */
  push32((uint32_t)(EBP));
  /* 12d37161 mov ebp, esp */
  EBP = (ESP);
  /* 12d37163 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d37166 push esi */
  push32((uint32_t)(ESI));
  /* 12d37167 mov eax, dword ptr [0x12d4fe04] */
  EAX = (r32((uint32_t)(0x12d4fe04)));
  /* 12d3716c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d3716f mov ecx, dword ptr [0x12d4fe08] */
  ECX = (r32((uint32_t)(0x12d4fe08)));
  /* 12d37175 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37177 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12d3717a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3717d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37180 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12d37183 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12d37186 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d37189 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12d3718c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3718f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12d37192 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d37196 jge 0x12d371ac */
  if ((C.sf==C.of)) goto L_12d371ac;
  /* 12d37198 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d3719b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d3719e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d371a0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12d371a3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 12d371aa jmp 0x12d371c1 */
  goto L_12d371c1;
L_12d371ac:;
  /* 12d371ac mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12d371b3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d371b6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d371b9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d371bc shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d371be mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_12d371c1:;
  /* 12d371c1 mov ecx, dword ptr [0x12d4fdfc] */
  ECX = (r32((uint32_t)(0x12d4fdfc)));
  /* 12d371c7 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_12d371ca:;
  /* 12d371ca mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d371cd cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d371d0 jae 0x12d371f6 */
  if (!C.cf) goto L_12d371f6;
  /* 12d371d2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d371d5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d371d8 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 12d371da mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d371dd mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12d371e0 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 12d371e3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d371e5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d371e7 je 0x12d371eb */
  if (C.zf) goto L_12d371eb;
  /* 12d371e9 jmp 0x12d371f6 */
  goto L_12d371f6;
L_12d371eb:;
  /* 12d371eb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d371ee add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d371f1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12d371f4 jmp 0x12d371ca */
  goto L_12d371ca;
L_12d371f6:;
  /* 12d371f6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d371f9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d371fc jne 0x12d372dd */
  if (!C.zf) goto L_12d372dd;
  /* 12d37202 mov eax, dword ptr [0x12d4fe08] */
  EAX = (r32((uint32_t)(0x12d4fe08)));
  /* 12d37207 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12d3720a:;
  /* 12d3720a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d3720d cmp ecx, dword ptr [0x12d4fdfc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d4fdfc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d37213 jae 0x12d37239 */
  if (!C.cf) goto L_12d37239;
  /* 12d37215 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d37218 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d3721b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 12d3721d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d37220 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12d37223 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 12d37226 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12d37228 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3722a je 0x12d3722e */
  if (C.zf) goto L_12d3722e;
  /* 12d3722c jmp 0x12d37239 */
  goto L_12d37239;
L_12d3722e:;
  /* 12d3722e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d37231 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37234 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12d37237 jmp 0x12d3720a */
  goto L_12d3720a;
L_12d37239:;
  /* 12d37239 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d3723c cmp ecx, dword ptr [0x12d4fdfc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d4fdfc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d37242 jne 0x12d372dd */
  if (!C.zf) goto L_12d372dd;
L_12d37248:;
  /* 12d37248 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d3724b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3724e jae 0x12d37266 */
  if (!C.cf) goto L_12d37266;
  /* 12d37250 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d37253 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d37257 je 0x12d3725b */
  if (C.zf) goto L_12d3725b;
  /* 12d37259 jmp 0x12d37266 */
  goto L_12d37266;
L_12d3725b:;
  /* 12d3725b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d3725e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37261 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12d37264 jmp 0x12d37248 */
  goto L_12d37248;
L_12d37266:;
  /* 12d37266 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d37269 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3726c jne 0x12d372b7 */
  if (!C.zf) goto L_12d372b7;
  /* 12d3726e mov eax, dword ptr [0x12d4fe08] */
  EAX = (r32((uint32_t)(0x12d4fe08)));
  /* 12d37273 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12d37276:;
  /* 12d37276 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d37279 cmp ecx, dword ptr [0x12d4fdfc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d4fdfc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3727f jae 0x12d37297 */
  if (!C.cf) goto L_12d37297;
  /* 12d37281 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d37284 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d37288 je 0x12d3728c */
  if (C.zf) goto L_12d3728c;
  /* 12d3728a jmp 0x12d37297 */
  goto L_12d37297;
L_12d3728c:;
  /* 12d3728c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d3728f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37292 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12d37295 jmp 0x12d37276 */
  goto L_12d37276;
L_12d37297:;
  /* 12d37297 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d3729a cmp ecx, dword ptr [0x12d4fdfc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d4fdfc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d372a0 jne 0x12d372b7 */
  if (!C.zf) goto L_12d372b7;
  /* 12d372a2 call 0x12d376a0 */
  push32(0x12d372a7u); f_12d376a0();
  /* 12d372a7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12d372aa cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d372ae jne 0x12d372b7 */
  if (!C.zf) goto L_12d372b7;
  /* 12d372b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d372b2 jmp 0x12d37691 */
  goto L_12d37691;
L_12d372b7:;
  /* 12d372b7 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d372ba push edx */
  push32((uint32_t)(EDX));
  /* 12d372bb call 0x12d377b0 */
  push32(0x12d372c0u); f_12d377b0();
  /* 12d372c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d372c3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d372c6 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12d372c9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12d372cb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d372ce mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d372d1 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d372d4 jne 0x12d372dd */
  if (!C.zf) goto L_12d372dd;
  /* 12d372d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d372d8 jmp 0x12d37691 */
  goto L_12d37691;
L_12d372dd:;
  /* 12d372dd mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d372e0 mov dword ptr [0x12d4fdfc], edx */
  w32((uint32_t)(0x12d4fdfc), (EDX));
  /* 12d372e6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d372e9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d372ec mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 12d372ef mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d372f2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d372f4 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12d372f7 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d372fb je 0x12d37320 */
  if (C.zf) goto L_12d37320;
  /* 12d372fd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d37300 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d37303 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d37306 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 12d3730a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d3730d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d37310 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 12d37313 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 12d3731a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 12d3731c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3731e jne 0x12d37355 */
  if (!C.zf) goto L_12d37355;
L_12d37320:;
  /* 12d37320 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_12d37327:;
  /* 12d37327 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d3732a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d3732d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d37330 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 12d37334 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d37337 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d3733a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 12d3733d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 12d37344 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 12d37346 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d37348 jne 0x12d37355 */
  if (!C.zf) goto L_12d37355;
  /* 12d3734a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d3734d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37350 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12d37353 jmp 0x12d37327 */
  goto L_12d37327;
L_12d37355:;
  /* 12d37355 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d37358 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d3735e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d37361 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12d37368 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d3736b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12d37372 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d37375 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d37378 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d3737b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 12d3737f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12d37382 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d37386 jne 0x12d373a2 */
  if (!C.zf) goto L_12d373a2;
  /* 12d37388 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 12d3738f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d37392 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d37395 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12d37398 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 12d3739f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_12d373a2:;
  /* 12d373a2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d373a6 jl 0x12d373bb */
  if ((C.sf!=C.of)) goto L_12d373bb;
  /* 12d373a8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d373ab shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12d373ad mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12d373b0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d373b3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d373b6 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12d373b9 jmp 0x12d373a2 */
  goto L_12d373a2;
L_12d373bb:;
  /* 12d373bb mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d373be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d373c1 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 12d373c5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12d373c8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d373cb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d373cd sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d373d0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d373d3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d373d6 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12d373d9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d373dc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12d373df cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d373e3 jle 0x12d373ec */
  if ((C.zf||C.sf!=C.of)) goto L_12d373ec;
  /* 12d373e5 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_12d373ec:;
  /* 12d373ec mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d373ef cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d373f2 je 0x12d37610 */
  if (C.zf) goto L_12d37610;
  /* 12d373f8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d373fb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d373fe mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d37401 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d37404 jne 0x12d374da */
  if (!C.zf) goto L_12d374da;
  /* 12d3740a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3740e jge 0x12d3746f */
  if ((C.sf==C.of)) goto L_12d3746f;
  /* 12d37410 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d37415 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d37418 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d3741a not eax */
  EAX = (~(EAX));
  /* 12d3741c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d3741f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d37422 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12d37426 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d37428 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d3742b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d3742e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12d37432 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d37435 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37438 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12d3743b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12d3743e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d37441 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37444 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12d37447 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d3744a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3744d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12d37451 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d37453 jne 0x12d3746d */
  if (!C.zf) goto L_12d3746d;
  /* 12d37455 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d3745a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d3745d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d3745f not eax */
  EAX = (~(EAX));
  /* 12d37461 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d37464 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d37466 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12d37468 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d3746b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12d3746d:;
  /* 12d3746d jmp 0x12d374da */
  goto L_12d374da;
L_12d3746f:;
  /* 12d3746f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d37472 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d37475 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d3747a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d3747c not edx */
  EDX = (~(EDX));
  /* 12d3747e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d37481 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d37484 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12d3748b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3748d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d37490 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d37493 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 12d3749a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d3749d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d374a0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12d374a3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12d374a6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d374a9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d374ac mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12d374af mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d374b2 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d374b5 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12d374b9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d374bb jne 0x12d374da */
  if (!C.zf) goto L_12d374da;
  /* 12d374bd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d374c0 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d374c3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d374c8 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d374ca not edx */
  EDX = (~(EDX));
  /* 12d374cc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d374cf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d374d2 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12d374d4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d374d7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12d374da:;
  /* 12d374da mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d374dd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12d374e0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d374e3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12d374e6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12d374e9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d374ec mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d374ef mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d374f2 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12d374f5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12d374f8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d374fc je 0x12d37610 */
  if (C.zf) goto L_12d37610;
  /* 12d37502 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d37505 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d37508 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 12d3750b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d3750e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d37511 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d37514 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d37517 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12d3751a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3751d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d37520 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12d37523 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d37526 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d37529 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12d3752c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3752f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d37532 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d37535 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12d37538 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3753b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3753e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d37541 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d37544 jne 0x12d37610 */
  if (!C.zf) goto L_12d37610;
  /* 12d3754a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3754e jge 0x12d375aa */
  if ((C.sf==C.of)) goto L_12d375aa;
  /* 12d37550 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d37553 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37556 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12d3755a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d3755d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37560 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12d37563 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d37565 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d37568 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3756b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12d3756e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d37570 jne 0x12d37588 */
  if (!C.zf) goto L_12d37588;
  /* 12d37572 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d37577 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d3757a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d3757c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d3757f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d37581 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12d37583 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d37586 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12d37588:;
  /* 12d37588 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d3758d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d37590 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d37592 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d37595 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d37598 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12d3759c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3759e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d375a1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d375a4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12d375a8 jmp 0x12d37610 */
  goto L_12d37610;
L_12d375aa:;
  /* 12d375aa mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d375ad add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d375b0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12d375b4 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d375b7 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d375ba mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12d375bd add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d375bf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d375c2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d375c5 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12d375c8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d375ca jne 0x12d375e7 */
  if (!C.zf) goto L_12d375e7;
  /* 12d375cc mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d375cf sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d375d2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d375d7 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d375d9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d375dc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d375df or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12d375e1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d375e4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12d375e7:;
  /* 12d375e7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d375ea sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d375ed mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d375f2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d375f4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d375f7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d375fa mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12d37601 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12d37603 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d37606 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d37609 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_12d37610:;
  /* 12d37610 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d37614 je 0x12d3762a */
  if (C.zf) goto L_12d3762a;
  /* 12d37616 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d37619 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3761c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12d3761e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d37621 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37624 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d37627 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_12d3762a:;
  /* 12d3762a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3762d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37630 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12d37633 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d37636 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37639 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3763c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12d3763e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d37641 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37644 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d37647 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3764a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 12d3764d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d37650 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d37652 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d37655 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d37657 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3765a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3765d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12d3765f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d37661 jne 0x12d37683 */
  if (!C.zf) goto L_12d37683;
  /* 12d37663 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d37666 cmp eax, dword ptr [0x12d4fe00] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d4fe00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3766c jne 0x12d37683 */
  if (!C.zf) goto L_12d37683;
  /* 12d3766e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d37671 cmp ecx, dword ptr [0x12d4fdf8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d4fdf8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d37677 jne 0x12d37683 */
  if (!C.zf) goto L_12d37683;
  /* 12d37679 mov dword ptr [0x12d4fe00], 0 */
  w32((uint32_t)(0x12d4fe00), (0x0u));
L_12d37683:;
  /* 12d37683 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12d37686 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d37689 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12d3768b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3768e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12d37691:;
  /* 12d37691 pop esi */
  ESI = (pop32());
  /* 12d37692 mov esp, ebp */
  ESP = (EBP);
  /* 12d37694 pop ebp */
  EBP = (pop32());
  /* 12d37695 ret  */
  ESPCHK(0x12d37160u, _esp0);
  ESP += 4; return;
}

/* FUN_100076a0 @ 0x12d376a0 (271 bytes, 78 insns) */
void f_12d376a0(void) {
  FTRACE(0x12d376a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d376a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d376a1 mov ebp, esp */
  EBP = (ESP);
  /* 12d376a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d376a4 mov eax, dword ptr [0x12d4fe04] */
  EAX = (r32((uint32_t)(0x12d4fe04)));
  /* 12d376a9 cmp eax, dword ptr [0x12d4fde8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d4fde8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d376af jne 0x12d376fb */
  if (!C.zf) goto L_12d376fb;
  /* 12d376b1 mov ecx, dword ptr [0x12d4fde8] */
  ECX = (r32((uint32_t)(0x12d4fde8)));
  /* 12d376b7 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d376ba imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d376bd push ecx */
  push32((uint32_t)(ECX));
  /* 12d376be mov edx, dword ptr [0x12d4fe08] */
  EDX = (r32((uint32_t)(0x12d4fe08)));
  /* 12d376c4 push edx */
  push32((uint32_t)(EDX));
  /* 12d376c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d376c7 mov eax, dword ptr [0x12d4fe0c] */
  EAX = (r32((uint32_t)(0x12d4fe0c)));
  /* 12d376cc push eax */
  push32((uint32_t)(EAX));
  /* 12d376cd call dword ptr [0x12d502e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502e4))), 0x12d376d3u);
  /* 12d376d3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d376d6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d376da jne 0x12d376e3 */
  if (!C.zf) goto L_12d376e3;
  /* 12d376dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d376de jmp 0x12d377ab */
  goto L_12d377ab;
L_12d376e3:;
  /* 12d376e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d376e6 mov dword ptr [0x12d4fe08], ecx */
  w32((uint32_t)(0x12d4fe08), (ECX));
  /* 12d376ec mov edx, dword ptr [0x12d4fde8] */
  EDX = (r32((uint32_t)(0x12d4fde8)));
  /* 12d376f2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d376f5 mov dword ptr [0x12d4fde8], edx */
  w32((uint32_t)(0x12d4fde8), (EDX));
L_12d376fb:;
  /* 12d376fb mov eax, dword ptr [0x12d4fe04] */
  EAX = (r32((uint32_t)(0x12d4fe04)));
  /* 12d37700 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d37703 mov ecx, dword ptr [0x12d4fe08] */
  ECX = (r32((uint32_t)(0x12d4fe08)));
  /* 12d37709 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3770b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d3770e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 12d37713 push 8 */
  push32((uint32_t)(0x8u));
  /* 12d37715 mov edx, dword ptr [0x12d4fe0c] */
  EDX = (r32((uint32_t)(0x12d4fe0c)));
  /* 12d3771b push edx */
  push32((uint32_t)(EDX));
  /* 12d3771c call dword ptr [0x12d502e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502e0))), 0x12d37722u);
  /* 12d37722 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d37725 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 12d37728 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3772b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3772f jne 0x12d37735 */
  if (!C.zf) goto L_12d37735;
  /* 12d37731 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d37733 jmp 0x12d377ab */
  goto L_12d377ab;
L_12d37735:;
  /* 12d37735 push 4 */
  push32((uint32_t)(0x4u));
  /* 12d37737 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 12d3773c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 12d37741 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d37743 call dword ptr [0x12d502e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502e8))), 0x12d37749u);
  /* 12d37749 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3774c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 12d3774f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d37752 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d37756 jne 0x12d37772 */
  if (!C.zf) goto L_12d37772;
  /* 12d37758 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3775b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d3775e push ecx */
  push32((uint32_t)(ECX));
  /* 12d3775f push 0 */
  push32((uint32_t)(0x0u));
  /* 12d37761 mov edx, dword ptr [0x12d4fe0c] */
  EDX = (r32((uint32_t)(0x12d4fe0c)));
  /* 12d37767 push edx */
  push32((uint32_t)(EDX));
  /* 12d37768 call dword ptr [0x12d502c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502c0))), 0x12d3776eu);
  /* 12d3776e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d37770 jmp 0x12d377ab */
  goto L_12d377ab;
L_12d37772:;
  /* 12d37772 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d37775 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12d3777b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3777e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12d37785 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d37788 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 12d3778f mov eax, dword ptr [0x12d4fe04] */
  EAX = (r32((uint32_t)(0x12d4fe04)));
  /* 12d37794 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37797 mov dword ptr [0x12d4fe04], eax */
  w32((uint32_t)(0x12d4fe04), (EAX));
  /* 12d3779c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3779f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12d377a2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 12d377a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12d377ab:;
  /* 12d377ab mov esp, ebp */
  ESP = (EBP);
  /* 12d377ad pop ebp */
  EBP = (pop32());
  /* 12d377ae ret  */
  ESPCHK(0x12d376a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100077b0 @ 0x12d377b0 (494 bytes, 149 insns) */
void f_12d377b0(void) {
  FTRACE(0x12d377b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d377b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d377b1 mov ebp, esp */
  EBP = (ESP);
  /* 12d377b3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d377b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d377b9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d377bc mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12d377bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d377c2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12d377c5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d377c8 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_12d377cf:;
  /* 12d377cf cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d377d3 jl 0x12d377e8 */
  if ((C.sf!=C.of)) goto L_12d377e8;
  /* 12d377d5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d377d8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12d377da mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d377dd mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d377e0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d377e3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12d377e6 jmp 0x12d377cf */
  goto L_12d377cf;
L_12d377e8:;
  /* 12d377e8 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d377eb imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d377f1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d377f4 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12d377fb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12d377fe mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12d37805 jmp 0x12d37810 */
  goto L_12d37810;
L_12d37807:;
  /* 12d37807 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d3780a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3780d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_12d37810:;
  /* 12d37810 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d37814 jge 0x12d37836 */
  if ((C.sf==C.of)) goto L_12d37836;
  /* 12d37816 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d37819 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3781c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 12d3781f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12d37822 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d37825 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d37828 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12d3782b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d3782e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d37831 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12d37834 jmp 0x12d37807 */
  goto L_12d37807;
L_12d37836:;
  /* 12d37836 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d37839 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12d3783c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3783f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12d37842 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37844 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12d37847 push 4 */
  push32((uint32_t)(0x4u));
  /* 12d37849 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12d3784e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12d37853 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d37856 push edx */
  push32((uint32_t)(EDX));
  /* 12d37857 call dword ptr [0x12d502e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502e8))), 0x12d3785du);
  /* 12d3785d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3785f jne 0x12d37869 */
  if (!C.zf) goto L_12d37869;
  /* 12d37861 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d37864 jmp 0x12d3799a */
  goto L_12d3799a;
L_12d37869:;
  /* 12d37869 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3786c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37871 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12d37874 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d37877 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d3787a jmp 0x12d37888 */
  goto L_12d37888;
L_12d3787c:;
  /* 12d3787c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3787f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37885 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12d37888:;
  /* 12d37888 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3788b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3788e ja 0x12d378ed */
  if ((!C.cf&&!C.zf)) goto L_12d378ed;
  /* 12d37890 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d37893 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 12d3789a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3789d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 12d378a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d378aa add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d378ad mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12d378b0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d378b3 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 12d378b9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d378bc add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d378c2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d378c5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12d378c8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d378cb sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d378d1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d378d4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12d378d7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d378da add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d378df mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12d378e2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d378e5 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 12d378eb jmp 0x12d3787c */
  goto L_12d3787c;
L_12d378ed:;
  /* 12d378ed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d378f0 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d378f6 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12d378f9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d378fc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d378ff mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d37902 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12d37905 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d37908 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12d3790b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12d3790e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d37911 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d37914 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12d37917 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d3791a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3791d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d37920 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12d37923 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d37926 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12d37929 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12d3792c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d3792f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d37932 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12d37935 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d37938 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d3793b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 12d37943 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d37946 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d37949 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 12d37954 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d37957 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 12d3795b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d3795e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 12d37961 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d37964 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d37967 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 12d3796a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d3796c jne 0x12d3797d */
  if (!C.zf) goto L_12d3797d;
  /* 12d3796e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d37971 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d37974 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12d37977 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3797a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12d3797d:;
  /* 12d3797d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d37982 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d37985 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d37987 not edx */
  EDX = (~(EDX));
  /* 12d37989 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3798c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12d3798f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12d37991 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d37994 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12d37997 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_12d3799a:;
  /* 12d3799a mov esp, ebp */
  ESP = (EBP);
  /* 12d3799c pop ebp */
  EBP = (pop32());
  /* 12d3799d ret  */
  ESPCHK(0x12d377b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100079a0 @ 0x12d379a0 (1515 bytes, 489 insns) */
void f_12d379a0(void) {
  FTRACE(0x12d379a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d379a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d379a1 mov ebp, esp */
  EBP = (ESP);
  /* 12d379a3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d379a6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d379a9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d379ac and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 12d379ae mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12d379b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d379b4 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12d379b7 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12d379ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d379bd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d379c0 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d379c3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d379c6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d379c9 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12d379cc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d379cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d379d2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d379d8 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d379db lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12d379e2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12d379e5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d379e8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d379eb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12d379ee mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d379f1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d379f3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d379f6 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12d379f9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d379fc add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d379ff mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12d37a02 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d37a05 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d37a07 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12d37a0a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d37a0d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d37a10 jle 0x12d37cc6 */
  if ((C.zf||C.sf!=C.of)) goto L_12d37cc6;
  /* 12d37a16 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d37a19 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12d37a1c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d37a1e jne 0x12d37a2b */
  if (!C.zf) goto L_12d37a2b;
  /* 12d37a20 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d37a23 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37a26 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d37a29 jle 0x12d37a32 */
  if ((C.zf||C.sf!=C.of)) goto L_12d37a32;
L_12d37a2b:;
  /* 12d37a2b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d37a2d jmp 0x12d37f87 */
  goto L_12d37f87;
L_12d37a32:;
  /* 12d37a32 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d37a35 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12d37a38 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d37a3b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12d37a3e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d37a42 jbe 0x12d37a4b */
  if ((C.cf||C.zf)) goto L_12d37a4b;
  /* 12d37a44 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12d37a4b:;
  /* 12d37a4b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d37a4e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d37a51 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d37a54 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d37a57 jne 0x12d37b2d */
  if (!C.zf) goto L_12d37b2d;
  /* 12d37a5d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d37a61 jae 0x12d37ac2 */
  if (!C.cf) goto L_12d37ac2;
  /* 12d37a63 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d37a68 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d37a6b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d37a6d not edx */
  EDX = (~(EDX));
  /* 12d37a6f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d37a72 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d37a75 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12d37a79 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12d37a7b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d37a7e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d37a81 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12d37a85 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d37a88 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37a8b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12d37a8e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12d37a91 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d37a94 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37a97 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12d37a9a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d37a9d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37aa0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12d37aa4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d37aa6 jne 0x12d37ac0 */
  if (!C.zf) goto L_12d37ac0;
  /* 12d37aa8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d37aad mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d37ab0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d37ab2 not edx */
  EDX = (~(EDX));
  /* 12d37ab4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d37ab7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d37ab9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12d37abb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d37abe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12d37ac0:;
  /* 12d37ac0 jmp 0x12d37b2d */
  goto L_12d37b2d;
L_12d37ac2:;
  /* 12d37ac2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d37ac5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d37ac8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d37acd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d37acf not eax */
  EAX = (~(EAX));
  /* 12d37ad1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d37ad4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d37ad7 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12d37ade and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d37ae0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d37ae3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d37ae6 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12d37aed mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d37af0 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37af3 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12d37af6 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12d37af9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d37afc add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37aff mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12d37b02 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d37b05 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37b08 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12d37b0c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d37b0e jne 0x12d37b2d */
  if (!C.zf) goto L_12d37b2d;
  /* 12d37b10 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d37b13 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d37b16 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d37b1b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d37b1d not eax */
  EAX = (~(EAX));
  /* 12d37b1f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d37b22 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d37b25 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12d37b27 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d37b2a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12d37b2d:;
  /* 12d37b2d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d37b30 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12d37b33 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d37b36 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d37b39 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12d37b3c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d37b3f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12d37b42 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d37b45 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12d37b48 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12d37b4b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d37b4e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37b51 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d37b54 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12d37b57 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d37b5b jle 0x12d37ca7 */
  if ((C.zf||C.sf!=C.of)) goto L_12d37ca7;
  /* 12d37b61 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d37b64 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37b67 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12d37b6a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d37b6d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12d37b70 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d37b73 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12d37b76 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d37b7a jbe 0x12d37b83 */
  if ((C.cf||C.zf)) goto L_12d37b83;
  /* 12d37b7c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12d37b83:;
  /* 12d37b83 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d37b86 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d37b89 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 12d37b8c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12d37b8f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d37b92 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d37b95 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d37b98 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12d37b9b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d37b9e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d37ba1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12d37ba4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d37ba7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d37baa mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12d37bad mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d37bb0 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d37bb3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d37bb6 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12d37bb9 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d37bbc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d37bbf mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d37bc2 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d37bc5 jne 0x12d37c93 */
  if (!C.zf) goto L_12d37c93;
  /* 12d37bcb cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d37bcf jae 0x12d37c2c */
  if (!C.cf) goto L_12d37c2c;
  /* 12d37bd1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d37bd4 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37bd7 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12d37bdb mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d37bde add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37be1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12d37be4 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d37be7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d37bea add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37bed mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12d37bf0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d37bf2 jne 0x12d37c0a */
  if (!C.zf) goto L_12d37c0a;
  /* 12d37bf4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d37bf9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d37bfc shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d37bfe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d37c01 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d37c03 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12d37c05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d37c08 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12d37c0a:;
  /* 12d37c0a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d37c0f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d37c12 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d37c14 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d37c17 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d37c1a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12d37c1e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d37c20 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d37c23 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d37c26 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12d37c2a jmp 0x12d37c93 */
  goto L_12d37c93;
L_12d37c2c:;
  /* 12d37c2c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d37c2f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37c32 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12d37c36 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d37c39 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37c3c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12d37c3f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d37c42 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d37c45 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37c48 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12d37c4b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d37c4d jne 0x12d37c6a */
  if (!C.zf) goto L_12d37c6a;
  /* 12d37c4f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d37c52 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d37c55 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d37c5a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d37c5c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d37c5f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d37c62 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12d37c64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d37c67 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12d37c6a:;
  /* 12d37c6a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d37c6d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d37c70 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d37c75 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d37c77 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d37c7a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d37c7d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12d37c84 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d37c86 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d37c89 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d37c8c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_12d37c93:;
  /* 12d37c93 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d37c96 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d37c99 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12d37c9b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d37c9e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37ca1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d37ca4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_12d37ca7:;
  /* 12d37ca7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d37caa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37cad mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d37cb0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12d37cb2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d37cb5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37cb8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d37cbb add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37cbe mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 12d37cc1 jmp 0x12d37f82 */
  goto L_12d37f82;
L_12d37cc6:;
  /* 12d37cc6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d37cc9 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d37ccc jge 0x12d37f82 */
  if ((C.sf==C.of)) goto L_12d37f82;
  /* 12d37cd2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d37cd5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37cd8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d37cdb mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12d37cdd mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d37ce0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37ce3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d37ce6 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37ce9 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 12d37cec mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d37cef add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37cf2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12d37cf5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d37cf8 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d37cfb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12d37cfe mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d37d01 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12d37d04 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d37d07 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12d37d0a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d37d0e jbe 0x12d37d17 */
  if ((C.cf||C.zf)) goto L_12d37d17;
  /* 12d37d10 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12d37d17:;
  /* 12d37d17 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d37d1a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12d37d1d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d37d1f jne 0x12d37e60 */
  if (!C.zf) goto L_12d37e60;
  /* 12d37d25 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d37d28 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12d37d2b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d37d2e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12d37d31 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d37d35 jbe 0x12d37d3e */
  if ((C.cf||C.zf)) goto L_12d37d3e;
  /* 12d37d37 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12d37d3e:;
  /* 12d37d3e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d37d41 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d37d44 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d37d47 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d37d4a jne 0x12d37e20 */
  if (!C.zf) goto L_12d37e20;
  /* 12d37d50 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d37d54 jae 0x12d37db5 */
  if (!C.cf) goto L_12d37db5;
  /* 12d37d56 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d37d5b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d37d5e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d37d60 not edx */
  EDX = (~(EDX));
  /* 12d37d62 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d37d65 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d37d68 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12d37d6c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12d37d6e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d37d71 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d37d74 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12d37d78 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d37d7b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37d7e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12d37d81 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12d37d84 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d37d87 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37d8a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12d37d8d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d37d90 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37d93 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12d37d97 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d37d99 jne 0x12d37db3 */
  if (!C.zf) goto L_12d37db3;
  /* 12d37d9b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d37da0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d37da3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d37da5 not edx */
  EDX = (~(EDX));
  /* 12d37da7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d37daa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d37dac and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12d37dae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d37db1 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12d37db3:;
  /* 12d37db3 jmp 0x12d37e20 */
  goto L_12d37e20;
L_12d37db5:;
  /* 12d37db5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d37db8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d37dbb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d37dc0 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d37dc2 not eax */
  EAX = (~(EAX));
  /* 12d37dc4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d37dc7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d37dca mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12d37dd1 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d37dd3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d37dd6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d37dd9 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12d37de0 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d37de3 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37de6 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12d37de9 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12d37dec mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d37def add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37df2 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12d37df5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d37df8 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37dfb movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12d37dff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d37e01 jne 0x12d37e20 */
  if (!C.zf) goto L_12d37e20;
  /* 12d37e03 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d37e06 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d37e09 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d37e0e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d37e10 not eax */
  EAX = (~(EAX));
  /* 12d37e12 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d37e15 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d37e18 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12d37e1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d37e1d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12d37e20:;
  /* 12d37e20 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d37e23 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12d37e26 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d37e29 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d37e2c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12d37e2f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d37e32 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12d37e35 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d37e38 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12d37e3b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12d37e3e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d37e41 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37e44 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12d37e47 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d37e4a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12d37e4d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d37e50 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12d37e53 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d37e57 jbe 0x12d37e60 */
  if ((C.cf||C.zf)) goto L_12d37e60;
  /* 12d37e59 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12d37e60:;
  /* 12d37e60 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d37e63 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d37e66 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 12d37e69 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12d37e6c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d37e6f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d37e72 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d37e75 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12d37e78 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d37e7b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d37e7e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12d37e81 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d37e84 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d37e87 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12d37e8a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d37e8d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d37e90 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d37e93 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12d37e96 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d37e99 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d37e9c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d37e9f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d37ea2 jne 0x12d37f6e */
  if (!C.zf) goto L_12d37f6e;
  /* 12d37ea8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d37eac jae 0x12d37f08 */
  if (!C.cf) goto L_12d37f08;
  /* 12d37eae mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d37eb1 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37eb4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12d37eb8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d37ebb add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37ebe mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12d37ec1 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d37ec3 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d37ec6 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37ec9 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12d37ecc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d37ece jne 0x12d37ee6 */
  if (!C.zf) goto L_12d37ee6;
  /* 12d37ed0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d37ed5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d37ed8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d37eda mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d37edd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d37edf or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12d37ee1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d37ee4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12d37ee6:;
  /* 12d37ee6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d37eeb mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d37eee shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d37ef0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d37ef3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d37ef6 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12d37efa or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12d37efc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d37eff mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d37f02 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12d37f06 jmp 0x12d37f6e */
  goto L_12d37f6e;
L_12d37f08:;
  /* 12d37f08 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d37f0b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37f0e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12d37f12 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d37f15 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37f18 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12d37f1b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d37f1d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d37f20 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37f23 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12d37f26 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d37f28 jne 0x12d37f45 */
  if (!C.zf) goto L_12d37f45;
  /* 12d37f2a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d37f2d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d37f30 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12d37f35 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12d37f37 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d37f3a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d37f3d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12d37f3f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d37f42 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12d37f45:;
  /* 12d37f45 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d37f48 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d37f4b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d37f50 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d37f52 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d37f55 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d37f58 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12d37f5f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12d37f61 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d37f64 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d37f67 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_12d37f6e:;
  /* 12d37f6e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d37f71 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d37f74 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12d37f76 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d37f79 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37f7c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d37f7f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_12d37f82:;
  /* 12d37f82 mov eax, 1 */
  EAX = (0x1u);
L_12d37f87:;
  /* 12d37f87 mov esp, ebp */
  ESP = (EBP);
  /* 12d37f89 pop ebp */
  EBP = (pop32());
  /* 12d37f8a ret  */
  ESPCHK(0x12d379a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f90 @ 0x12d37f90 (304 bytes, 79 insns) */
void f_12d37f90(void) {
  FTRACE(0x12d37f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d37f90 push ebp */
  push32((uint32_t)(EBP));
  /* 12d37f91 mov ebp, esp */
  EBP = (ESP);
  /* 12d37f93 push ecx */
  push32((uint32_t)(ECX));
  /* 12d37f94 cmp dword ptr [0x12d4fe00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4fe00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d37f9b je 0x12d380bc */
  if (C.zf) goto L_12d380bc;
  /* 12d37fa1 mov eax, dword ptr [0x12d4fdf8] */
  EAX = (r32((uint32_t)(0x12d4fdf8)));
  /* 12d37fa6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 12d37fa9 mov ecx, dword ptr [0x12d4fe00] */
  ECX = (r32((uint32_t)(0x12d4fe00)));
  /* 12d37faf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d37fb2 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d37fb4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d37fb7 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12d37fbc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12d37fc1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d37fc4 push eax */
  push32((uint32_t)(EAX));
  /* 12d37fc5 call dword ptr [0x12d502c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502c4))), 0x12d37fcbu);
  /* 12d37fcb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d37fd0 mov ecx, dword ptr [0x12d4fdf8] */
  ECX = (r32((uint32_t)(0x12d4fdf8)));
  /* 12d37fd6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d37fd8 mov eax, dword ptr [0x12d4fe00] */
  EAX = (r32((uint32_t)(0x12d4fe00)));
  /* 12d37fdd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12d37fe0 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12d37fe2 mov edx, dword ptr [0x12d4fe00] */
  EDX = (r32((uint32_t)(0x12d4fe00)));
  /* 12d37fe8 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12d37feb mov eax, dword ptr [0x12d4fe00] */
  EAX = (r32((uint32_t)(0x12d4fe00)));
  /* 12d37ff0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d37ff3 mov edx, dword ptr [0x12d4fdf8] */
  EDX = (r32((uint32_t)(0x12d4fdf8)));
  /* 12d37ff9 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 12d38004 mov eax, dword ptr [0x12d4fe00] */
  EAX = (r32((uint32_t)(0x12d4fe00)));
  /* 12d38009 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d3800c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 12d3800f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12d38012 mov eax, dword ptr [0x12d4fe00] */
  EAX = (r32((uint32_t)(0x12d4fe00)));
  /* 12d38017 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d3801a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 12d3801d mov edx, dword ptr [0x12d4fe00] */
  EDX = (r32((uint32_t)(0x12d4fe00)));
  /* 12d38023 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12d38026 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 12d3802a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d3802c jne 0x12d38042 */
  if (!C.zf) goto L_12d38042;
  /* 12d3802e mov edx, dword ptr [0x12d4fe00] */
  EDX = (r32((uint32_t)(0x12d4fe00)));
  /* 12d38034 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12d38037 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 12d38039 mov ecx, dword ptr [0x12d4fe00] */
  ECX = (r32((uint32_t)(0x12d4fe00)));
  /* 12d3803f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_12d38042:;
  /* 12d38042 mov edx, dword ptr [0x12d4fe00] */
  EDX = (r32((uint32_t)(0x12d4fe00)));
  /* 12d38048 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3804c jne 0x12d380b2 */
  if (!C.zf) goto L_12d380b2;
  /* 12d3804e cmp dword ptr [0x12d4fe04], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d4fe04))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d38055 jle 0x12d380b2 */
  if ((C.zf||C.sf!=C.of)) goto L_12d380b2;
  /* 12d38057 mov eax, dword ptr [0x12d4fe00] */
  EAX = (r32((uint32_t)(0x12d4fe00)));
  /* 12d3805c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d3805f push ecx */
  push32((uint32_t)(ECX));
  /* 12d38060 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d38062 mov edx, dword ptr [0x12d4fe0c] */
  EDX = (r32((uint32_t)(0x12d4fe0c)));
  /* 12d38068 push edx */
  push32((uint32_t)(EDX));
  /* 12d38069 call dword ptr [0x12d502c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502c0))), 0x12d3806fu);
  /* 12d3806f mov eax, dword ptr [0x12d4fe04] */
  EAX = (r32((uint32_t)(0x12d4fe04)));
  /* 12d38074 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d38077 mov ecx, dword ptr [0x12d4fe08] */
  ECX = (r32((uint32_t)(0x12d4fe08)));
  /* 12d3807d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3807f mov edx, dword ptr [0x12d4fe00] */
  EDX = (r32((uint32_t)(0x12d4fe00)));
  /* 12d38085 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d38088 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3808a push ecx */
  push32((uint32_t)(ECX));
  /* 12d3808b mov eax, dword ptr [0x12d4fe00] */
  EAX = (r32((uint32_t)(0x12d4fe00)));
  /* 12d38090 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d38093 push eax */
  push32((uint32_t)(EAX));
  /* 12d38094 mov ecx, dword ptr [0x12d4fe00] */
  ECX = (r32((uint32_t)(0x12d4fe00)));
  /* 12d3809a push ecx */
  push32((uint32_t)(ECX));
  /* 12d3809b call 0x12d3a6c0 */
  push32(0x12d380a0u); f_12d3a6c0();
  /* 12d380a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d380a3 mov edx, dword ptr [0x12d4fe04] */
  EDX = (r32((uint32_t)(0x12d4fe04)));
  /* 12d380a9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d380ac mov dword ptr [0x12d4fe04], edx */
  w32((uint32_t)(0x12d4fe04), (EDX));
L_12d380b2:;
  /* 12d380b2 mov dword ptr [0x12d4fe00], 0 */
  w32((uint32_t)(0x12d4fe00), (0x0u));
L_12d380bc:;
  /* 12d380bc mov esp, ebp */
  ESP = (EBP);
  /* 12d380be pop ebp */
  EBP = (pop32());
  /* 12d380bf ret  */
  ESPCHK(0x12d37f90u, _esp0);
  ESP += 4; return;
}

/* FUN_100080c0 @ 0x12d380c0 (1565 bytes, 343 insns) */
void f_12d380c0(void) {
  FTRACE(0x12d380c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d380c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d380c1 mov ebp, esp */
  EBP = (ESP);
  /* 12d380c3 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d380c9 mov eax, dword ptr [0x12d4fe04] */
  EAX = (r32((uint32_t)(0x12d4fe04)));
  /* 12d380ce imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d380d1 push eax */
  push32((uint32_t)(EAX));
  /* 12d380d2 mov ecx, dword ptr [0x12d4fe08] */
  ECX = (r32((uint32_t)(0x12d4fe08)));
  /* 12d380d8 push ecx */
  push32((uint32_t)(ECX));
  /* 12d380d9 call dword ptr [0x12d50298] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50298))), 0x12d380dfu);
  /* 12d380df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d380e1 je 0x12d380eb */
  if (C.zf) goto L_12d380eb;
  /* 12d380e3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d380e6 jmp 0x12d386d9 */
  goto L_12d386d9;
L_12d380eb:;
  /* 12d380eb mov edx, dword ptr [0x12d4fe08] */
  EDX = (r32((uint32_t)(0x12d4fe08)));
  /* 12d380f1 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 12d380f7 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 12d38101 jmp 0x12d38112 */
  goto L_12d38112;
L_12d38103:;
  /* 12d38103 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 12d38109 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3810c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_12d38112:;
  /* 12d38112 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 12d38118 cmp ecx, dword ptr [0x12d4fe04] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d4fe04))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3811e jge 0x12d386d7 */
  if ((C.sf==C.of)) goto L_12d386d7;
  /* 12d38124 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12d3812a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12d3812d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 12d38133 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 12d38138 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 12d3813e push ecx */
  push32((uint32_t)(ECX));
  /* 12d3813f call dword ptr [0x12d50298] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50298))), 0x12d38145u);
  /* 12d38145 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d38147 je 0x12d38153 */
  if (C.zf) goto L_12d38153;
  /* 12d38149 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 12d3814e jmp 0x12d386d9 */
  goto L_12d386d9;
L_12d38153:;
  /* 12d38153 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12d38159 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12d3815c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 12d38162 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 12d38168 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3816e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12d38171 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12d38177 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12d3817a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d3817d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 12d38187 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 12d38191 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12d38198 jmp 0x12d381a3 */
  goto L_12d381a3;
L_12d3819a:;
  /* 12d3819a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3819d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d381a0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12d381a3:;
  /* 12d381a3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d381a7 jge 0x12d3869b */
  if ((C.sf==C.of)) goto L_12d3869b;
  /* 12d381ad mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 12d381b7 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 12d381c1 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 12d381cb mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 12d381d5 jmp 0x12d381e6 */
  goto L_12d381e6;
L_12d381d7:;
  /* 12d381d7 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12d381dd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d381e0 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_12d381e6:;
  /* 12d381e6 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d381ed jge 0x12d38202 */
  if ((C.sf==C.of)) goto L_12d38202;
  /* 12d381ef mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12d381f5 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 12d38200 jmp 0x12d381d7 */
  goto L_12d381d7;
L_12d38202:;
  /* 12d38202 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d38206 jl 0x12d3863d */
  if ((C.sf!=C.of)) goto L_12d3863d;
  /* 12d3820c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12d38211 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 12d38217 push ecx */
  push32((uint32_t)(ECX));
  /* 12d38218 call dword ptr [0x12d50298] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50298))), 0x12d3821eu);
  /* 12d3821e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d38220 je 0x12d3822c */
  if (C.zf) goto L_12d3822c;
  /* 12d38222 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 12d38227 jmp 0x12d386d9 */
  goto L_12d386d9;
L_12d3822c:;
  /* 12d3822c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 12d38232 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12d38235 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 12d3823f jmp 0x12d38250 */
  goto L_12d38250;
L_12d38241:;
  /* 12d38241 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 12d38247 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3824a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_12d38250:;
  /* 12d38250 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d38257 jge 0x12d383d4 */
  if ((C.sf==C.of)) goto L_12d383d4;
  /* 12d3825d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d38260 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d38263 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 12d38269 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12d3826f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d38275 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 12d3827b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 12d38281 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d38285 jne 0x12d38292 */
  if (!C.zf) goto L_12d38292;
  /* 12d38287 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 12d3828d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d38290 je 0x12d3829c */
  if (C.zf) goto L_12d3829c;
L_12d38292:;
  /* 12d38292 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 12d38297 jmp 0x12d386d9 */
  goto L_12d386d9;
L_12d3829c:;
  /* 12d3829c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12d382a2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d382a4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 12d382aa mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 12d382b0 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 12d382b6 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 12d382bc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12d382bf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d382c1 je 0x12d382f9 */
  if (C.zf) goto L_12d382f9;
  /* 12d382c3 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 12d382c9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d382cc mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 12d382d2 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d382dc jle 0x12d382e8 */
  if ((C.zf||C.sf!=C.of)) goto L_12d382e8;
  /* 12d382de mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 12d382e3 jmp 0x12d386d9 */
  goto L_12d386d9;
L_12d382e8:;
  /* 12d382e8 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 12d382ee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d382f1 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 12d382f7 jmp 0x12d3833b */
  goto L_12d3833b;
L_12d382f9:;
  /* 12d382f9 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 12d382ff sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12d38302 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d38305 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 12d3830b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d38312 jle 0x12d3831e */
  if ((C.zf||C.sf!=C.of)) goto L_12d3831e;
  /* 12d38314 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_12d3831e:;
  /* 12d3831e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12d38324 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 12d3832b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3832e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12d38334 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_12d3833b:;
  /* 12d3833b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d38342 jl 0x12d3835d */
  if ((C.sf!=C.of)) goto L_12d3835d;
  /* 12d38344 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 12d3834a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 12d3834d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3834f jne 0x12d3835d */
  if (!C.zf) goto L_12d3835d;
  /* 12d38351 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3835b jle 0x12d38367 */
  if ((C.zf||C.sf!=C.of)) goto L_12d38367;
L_12d3835d:;
  /* 12d3835d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 12d38362 jmp 0x12d386d9 */
  goto L_12d386d9;
L_12d38367:;
  /* 12d38367 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12d3836d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d38373 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12d38376 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3837c je 0x12d38388 */
  if (C.zf) goto L_12d38388;
  /* 12d3837e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 12d38383 jmp 0x12d386d9 */
  goto L_12d386d9;
L_12d38388:;
  /* 12d38388 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 12d3838e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d38394 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 12d3839a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12d383a0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d383a6 jb 0x12d3829c */
  if (C.cf) goto L_12d3829c;
  /* 12d383ac mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12d383b2 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d383b8 je 0x12d383c4 */
  if (C.zf) goto L_12d383c4;
  /* 12d383ba mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 12d383bf jmp 0x12d386d9 */
  goto L_12d386d9;
L_12d383c4:;
  /* 12d383c4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d383c7 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d383cc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d383cf jmp 0x12d38241 */
  goto L_12d38241;
L_12d383d4:;
  /* 12d383d4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d383d7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d383d9 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d383df je 0x12d383eb */
  if (C.zf) goto L_12d383eb;
  /* 12d383e1 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 12d383e6 jmp 0x12d386d9 */
  goto L_12d386d9;
L_12d383eb:;
  /* 12d383eb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d383ee mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 12d383f4 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12d383fb jmp 0x12d38406 */
  goto L_12d38406;
L_12d383fd:;
  /* 12d383fd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d38400 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d38403 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12d38406:;
  /* 12d38406 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3840a jge 0x12d3863d */
  if ((C.sf==C.of)) goto L_12d3863d;
  /* 12d38410 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 12d3841a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 12d38420 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_12d38426:;
  /* 12d38426 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 12d3842c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d3842f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 12d38435 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12d3843b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d38441 je 0x12d3856a */
  if (C.zf) goto L_12d3856a;
  /* 12d38447 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d3844a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 12d38450 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d38457 je 0x12d3856a */
  if (C.zf) goto L_12d3856a;
  /* 12d3845d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12d38463 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d38469 jb 0x12d3847e */
  if (C.cf) goto L_12d3847e;
  /* 12d3846b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 12d38471 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d38476 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3847c jb 0x12d38488 */
  if (C.cf) goto L_12d38488;
L_12d3847e:;
  /* 12d3847e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 12d38483 jmp 0x12d386d9 */
  goto L_12d386d9;
L_12d38488:;
  /* 12d38488 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12d3848e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 12d38494 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 12d3849a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 12d384a0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d384a3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12d384a6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d384a9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d384ae mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_12d384b4:;
  /* 12d384b4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d384b7 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d384bd je 0x12d384de */
  if (C.zf) goto L_12d384de;
  /* 12d384bf mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d384c2 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d384c8 jne 0x12d384cc */
  if (!C.zf) goto L_12d384cc;
  /* 12d384ca jmp 0x12d384de */
  goto L_12d384de;
L_12d384cc:;
  /* 12d384cc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d384cf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d384d1 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 12d384d4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d384d7 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d384d9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12d384dc jmp 0x12d384b4 */
  goto L_12d384b4;
L_12d384de:;
  /* 12d384de mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d384e1 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d384e7 jne 0x12d384f3 */
  if (!C.zf) goto L_12d384f3;
  /* 12d384e9 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 12d384ee jmp 0x12d386d9 */
  goto L_12d386d9;
L_12d384f3:;
  /* 12d384f3 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12d384f9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d384fb sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12d384fe sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d38501 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 12d38507 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3850e jle 0x12d3851a */
  if ((C.zf||C.sf!=C.of)) goto L_12d3851a;
  /* 12d38510 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_12d3851a:;
  /* 12d3851a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12d38520 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d38523 je 0x12d3852f */
  if (C.zf) goto L_12d3852f;
  /* 12d38525 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 12d3852a jmp 0x12d386d9 */
  goto L_12d386d9;
L_12d3852f:;
  /* 12d3852f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12d38535 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12d38538 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3853e je 0x12d3854a */
  if (C.zf) goto L_12d3854a;
  /* 12d38540 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 12d38545 jmp 0x12d386d9 */
  goto L_12d386d9;
L_12d3854a:;
  /* 12d3854a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12d38550 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 12d38556 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 12d3855c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3855f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 12d38565 jmp 0x12d38426 */
  goto L_12d38426;
L_12d3856a:;
  /* 12d3856a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d38571 je 0x12d385e1 */
  if (C.zf) goto L_12d385e1;
  /* 12d38573 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d38577 jge 0x12d385ab */
  if ((C.sf==C.of)) goto L_12d385ab;
  /* 12d38579 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d3857e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d38581 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d38583 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 12d38589 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3858b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 12d38591 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d38596 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d38599 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d3859b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 12d385a1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12d385a3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 12d385a9 jmp 0x12d385e1 */
  goto L_12d385e1;
L_12d385ab:;
  /* 12d385ab mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d385ae sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d385b1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d385b6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d385b8 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 12d385be or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12d385c0 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 12d385c6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d385c9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d385cc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12d385d1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12d385d3 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 12d385d9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12d385db mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_12d385e1:;
  /* 12d385e1 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12d385e7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d385ea cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d385f0 jne 0x12d38604 */
  if (!C.zf) goto L_12d38604;
  /* 12d385f2 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d385f5 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 12d385fb cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d38602 je 0x12d3860e */
  if (C.zf) goto L_12d3860e;
L_12d38604:;
  /* 12d38604 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 12d38609 jmp 0x12d386d9 */
  goto L_12d386d9;
L_12d3860e:;
  /* 12d3860e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 12d38614 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12d38617 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3861d je 0x12d38629 */
  if (C.zf) goto L_12d38629;
  /* 12d3861f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 12d38624 jmp 0x12d386d9 */
  goto L_12d386d9;
L_12d38629:;
  /* 12d38629 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 12d3862f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d38632 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 12d38638 jmp 0x12d383fd */
  goto L_12d383fd;
L_12d3863d:;
  /* 12d3863d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d38640 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 12d38646 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 12d3864c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d38650 jne 0x12d3866a */
  if (!C.zf) goto L_12d3866a;
  /* 12d38652 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d38655 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 12d3865b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 12d38661 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d38668 je 0x12d38671 */
  if (C.zf) goto L_12d38671;
L_12d3866a:;
  /* 12d3866a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 12d3866f jmp 0x12d386d9 */
  goto L_12d386d9;
L_12d38671:;
  /* 12d38671 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 12d38677 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3867d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 12d38683 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d38686 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3868b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12d3868e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d38691 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12d38693 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d38696 jmp 0x12d3819a */
  goto L_12d3819a;
L_12d3869b:;
  /* 12d3869b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12d386a1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 12d386a7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d386a9 jne 0x12d386bc */
  if (!C.zf) goto L_12d386bc;
  /* 12d386ab mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12d386b1 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 12d386b7 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d386ba je 0x12d386c3 */
  if (C.zf) goto L_12d386c3;
L_12d386bc:;
  /* 12d386bc mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 12d386c1 jmp 0x12d386d9 */
  goto L_12d386d9;
L_12d386c3:;
  /* 12d386c3 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12d386c9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d386cc mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 12d386d2 jmp 0x12d38103 */
  goto L_12d38103;
L_12d386d7:;
  /* 12d386d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d386d9:;
  /* 12d386d9 mov esp, ebp */
  ESP = (EBP);
  /* 12d386db pop ebp */
  EBP = (pop32());
  /* 12d386dc ret  */
  ESPCHK(0x12d380c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100086e0 @ 0x12d386e0 (250 bytes, 92 insns) */
void f_12d386e0(void) {
  FTRACE(0x12d386e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d386e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d386e1 mov ebp, esp */
  EBP = (ESP);
  /* 12d386e3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d386e6 push ebx */
  push32((uint32_t)(EBX));
  /* 12d386e7 push esi */
  push32((uint32_t)(ESI));
  /* 12d386e8 push edi */
  push32((uint32_t)(EDI));
  /* 12d386e9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12d386ec mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12d386ef lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12d386f2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_12d386f5:;
  /* 12d386f5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d386f9 jne 0x12d38719 */
  if (!C.zf) goto L_12d38719;
  /* 12d386fb push 0x12d49e00 */
  push32((uint32_t)(0x12d49e00u));
  /* 12d38700 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d38702 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 12d38704 push 0x12d49df4 */
  push32((uint32_t)(0x12d49df4u));
  /* 12d38709 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3870b call 0x12d31890 */
  push32(0x12d38710u); f_12d31890();
  /* 12d38710 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d38713 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d38716 jne 0x12d38719 */
  if (!C.zf) goto L_12d38719;
  /* 12d38718 int3  */
  x86_unimpl("int3 @ 0x12d38718");
L_12d38719:;
  /* 12d38719 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d3871b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d3871d jne 0x12d386f5 */
  if (!C.zf) goto L_12d386f5;
L_12d3871f:;
  /* 12d3871f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d38723 jne 0x12d38743 */
  if (!C.zf) goto L_12d38743;
  /* 12d38725 push 0x12d49de4 */
  push32((uint32_t)(0x12d49de4u));
  /* 12d3872a push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3872c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12d3872e push 0x12d49df4 */
  push32((uint32_t)(0x12d49df4u));
  /* 12d38733 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d38735 call 0x12d31890 */
  push32(0x12d3873au); f_12d31890();
  /* 12d3873a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3873d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d38740 jne 0x12d38743 */
  if (!C.zf) goto L_12d38743;
  /* 12d38742 int3  */
  x86_unimpl("int3 @ 0x12d38742");
L_12d38743:;
  /* 12d38743 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d38745 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d38747 jne 0x12d3871f */
  if (!C.zf) goto L_12d3871f;
  /* 12d38749 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d3874c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 12d38753 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d38756 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d38759 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12d3875c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d3875f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d38762 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12d38764 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d38767 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 12d3876e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d38771 push ecx */
  push32((uint32_t)(ECX));
  /* 12d38772 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d38775 push edx */
  push32((uint32_t)(EDX));
  /* 12d38776 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d38779 push eax */
  push32((uint32_t)(EAX));
  /* 12d3877a call 0x12d39760 */
  push32(0x12d3877fu); f_12d39760();
  /* 12d3877f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d38782 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12d38785 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d38788 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d3878b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3878e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d38791 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12d38794 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d38797 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3879b jl 0x12d387bf */
  if ((C.sf!=C.of)) goto L_12d387bf;
  /* 12d3879d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d387a0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d387a2 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12d387a5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d387a7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d387ad mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12d387b0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d387b3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d387b5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d387b8 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d387bb mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12d387bd jmp 0x12d387d0 */
  goto L_12d387d0;
L_12d387bf:;
  /* 12d387bf mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d387c2 push edx */
  push32((uint32_t)(EDX));
  /* 12d387c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d387c5 call 0x12d394e0 */
  push32(0x12d387cau); f_12d394e0();
  /* 12d387ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d387cd mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_12d387d0:;
  /* 12d387d0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d387d3 pop edi */
  EDI = (pop32());
  /* 12d387d4 pop esi */
  ESI = (pop32());
  /* 12d387d5 pop ebx */
  EBX = (pop32());
  /* 12d387d6 mov esp, ebp */
  ESP = (EBP);
  /* 12d387d8 pop ebp */
  EBP = (pop32());
  /* 12d387d9 ret  */
  ESPCHK(0x12d386e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100087e0 @ 0x12d387e0 (183 bytes, 58 insns) */
void f_12d387e0(void) {
  FTRACE(0x12d387e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d387e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d387e1 mov ebp, esp */
  EBP = (ESP);
  /* 12d387e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d387e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d387e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d387ec cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d387f1 ja 0x12d3880a */
  if ((!C.cf&&!C.zf)) goto L_12d3880a;
  /* 12d387f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d387f6 mov edx, dword ptr [0x12d4ccb8] */
  EDX = (r32((uint32_t)(0x12d4ccb8)));
  /* 12d387fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d387fe mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12d38802 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 12d38805 jmp 0x12d38893 */
  goto L_12d38893;
L_12d3880a:;
  /* 12d3880a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3880d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12d38810 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d38816 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d3881c mov edx, dword ptr [0x12d4ccb8] */
  EDX = (r32((uint32_t)(0x12d4ccb8)));
  /* 12d38822 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d38824 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12d38828 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12d3882d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3882f je 0x12d38853 */
  if (C.zf) goto L_12d38853;
  /* 12d38831 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d38834 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12d38837 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d3883d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 12d38840 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 12d38843 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 12d38846 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 12d3884a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 12d38851 jmp 0x12d38864 */
  goto L_12d38864;
L_12d38853:;
  /* 12d38853 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12d38856 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 12d38859 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 12d3885d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_12d38864:;
  /* 12d38864 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d38866 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d38868 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3886a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 12d3886d push ecx */
  push32((uint32_t)(ECX));
  /* 12d3886e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d38871 push edx */
  push32((uint32_t)(EDX));
  /* 12d38872 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12d38875 push eax */
  push32((uint32_t)(EAX));
  /* 12d38876 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d38878 call 0x12d3aa00 */
  push32(0x12d3887du); f_12d3aa00();
  /* 12d3887d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d38880 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d38882 jne 0x12d38888 */
  if (!C.zf) goto L_12d38888;
  /* 12d38884 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d38886 jmp 0x12d38893 */
  goto L_12d38893;
L_12d38888:;
  /* 12d38888 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3888b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d38890 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_12d38893:;
  /* 12d38893 mov esp, ebp */
  ESP = (EBP);
  /* 12d38895 pop ebp */
  EBP = (pop32());
  /* 12d38896 ret  */
  ESPCHK(0x12d387e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100088a0 @ 0x12d388a0 (836 bytes, 238 insns) */
void f_12d388a0(void) {
  FTRACE(0x12d388a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d388a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d388a1 mov ebp, esp */
  EBP = (ESP);
  /* 12d388a3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d388a6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12d388a8 call 0x12d361d0 */
  push32(0x12d388adu); f_12d361d0();
  /* 12d388ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d388b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d388b3 push eax */
  push32((uint32_t)(EAX));
  /* 12d388b4 call 0x12d38bf0 */
  push32(0x12d388b9u); f_12d38bf0();
  /* 12d388b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d388bc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d388bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d388c2 cmp ecx, dword ptr [0x12d4fb44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d4fb44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d388c8 jne 0x12d388db */
  if (!C.zf) goto L_12d388db;
  /* 12d388ca push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12d388cc call 0x12d36270 */
  push32(0x12d388d1u); f_12d36270();
  /* 12d388d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d388d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d388d6 jmp 0x12d38be0 */
  goto L_12d38be0;
L_12d388db:;
  /* 12d388db cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d388df jne 0x12d388fc */
  if (!C.zf) goto L_12d388fc;
  /* 12d388e1 call 0x12d38cd0 */
  push32(0x12d388e6u); f_12d38cd0();
  /* 12d388e6 call 0x12d38d50 */
  push32(0x12d388ebu); f_12d38d50();
  /* 12d388eb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12d388ed call 0x12d36270 */
  push32(0x12d388f2u); f_12d36270();
  /* 12d388f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d388f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d388f7 jmp 0x12d38be0 */
  goto L_12d38be0;
L_12d388fc:;
  /* 12d388fc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d38903 jmp 0x12d3890e */
  goto L_12d3890e;
L_12d38905:;
  /* 12d38905 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d38908 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3890b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12d3890e:;
  /* 12d3890e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d38912 jae 0x12d38a5f */
  if (!C.cf) goto L_12d38a5f;
  /* 12d38918 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3891b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d3891e mov ecx, dword ptr [eax + 0x12d4ced8] */
  ECX = (r32((uint32_t)(EAX + 0x12d4ced8)));
  /* 12d38924 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d38927 jne 0x12d38a5a */
  if (!C.zf) goto L_12d38a5a;
  /* 12d3892d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12d38934 jmp 0x12d3893f */
  goto L_12d3893f;
L_12d38936:;
  /* 12d38936 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d38939 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3893c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_12d3893f:;
  /* 12d3893f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d38946 jae 0x12d38954 */
  if (!C.cf) goto L_12d38954;
  /* 12d38948 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d3894b mov byte ptr [eax + 0x12d4fce0], 0 */
  w8((uint32_t)(EAX + 0x12d4fce0), (0x0u));
  /* 12d38952 jmp 0x12d38936 */
  goto L_12d38936;
L_12d38954:;
  /* 12d38954 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12d3895b jmp 0x12d38966 */
  goto L_12d38966;
L_12d3895d:;
  /* 12d3895d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d38960 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d38963 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12d38966:;
  /* 12d38966 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3896a jae 0x12d389e7 */
  if (!C.cf) goto L_12d389e7;
  /* 12d3896c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3896f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d38972 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d38975 lea ecx, [edx + eax*8 + 0x12d4cee8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x12d4cee8));
  /* 12d3897c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d3897f jmp 0x12d3898a */
  goto L_12d3898a;
L_12d38981:;
  /* 12d38981 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d38984 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d38987 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12d3898a:;
  /* 12d3898a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3898d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3898f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d38991 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d38993 je 0x12d389e2 */
  if (C.zf) goto L_12d389e2;
  /* 12d38995 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d38998 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3899a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12d3899d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3899f je 0x12d389e2 */
  if (C.zf) goto L_12d389e2;
  /* 12d389a1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d389a4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d389a6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d389a8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12d389ab jmp 0x12d389b6 */
  goto L_12d389b6;
L_12d389ad:;
  /* 12d389ad mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d389b0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d389b3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12d389b6:;
  /* 12d389b6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d389b9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d389bb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12d389be cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d389c1 ja 0x12d389e0 */
  if ((!C.cf&&!C.zf)) goto L_12d389e0;
  /* 12d389c3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d389c6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d389c9 mov dl, byte ptr [eax + 0x12d4fce1] */
  DL = (r8((uint32_t)(EAX + 0x12d4fce1)));
  /* 12d389cf or dl, byte ptr [ecx + 0x12d4ced0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x12d4ced0))); DL = (_r); fl_logic(_r,8); }
  /* 12d389d5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d389d8 mov byte ptr [eax + 0x12d4fce1], dl */
  w8((uint32_t)(EAX + 0x12d4fce1), (DL));
  /* 12d389de jmp 0x12d389ad */
  goto L_12d389ad;
L_12d389e0:;
  /* 12d389e0 jmp 0x12d38981 */
  goto L_12d38981;
L_12d389e2:;
  /* 12d389e2 jmp 0x12d3895d */
  goto L_12d3895d;
L_12d389e7:;
  /* 12d389e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d389ea mov dword ptr [0x12d4fb44], ecx */
  w32((uint32_t)(0x12d4fb44), (ECX));
  /* 12d389f0 mov dword ptr [0x12d4fbcc], 1 */
  w32((uint32_t)(0x12d4fbcc), (0x1u));
  /* 12d389fa mov edx, dword ptr [0x12d4fb44] */
  EDX = (r32((uint32_t)(0x12d4fb44)));
  /* 12d38a00 push edx */
  push32((uint32_t)(EDX));
  /* 12d38a01 call 0x12d38c50 */
  push32(0x12d38a06u); f_12d38c50();
  /* 12d38a06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d38a09 mov dword ptr [0x12d4fde4], eax */
  w32((uint32_t)(0x12d4fde4), (EAX));
  /* 12d38a0e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12d38a15 jmp 0x12d38a20 */
  goto L_12d38a20;
L_12d38a17:;
  /* 12d38a17 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d38a1a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d38a1d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12d38a20:;
  /* 12d38a20 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d38a24 jae 0x12d38a44 */
  if (!C.cf) goto L_12d38a44;
  /* 12d38a26 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d38a29 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d38a2c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d38a2f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d38a32 mov cx, word ptr [ecx + eax*2 + 0x12d4cedc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x12d4cedc)));
  /* 12d38a3a mov word ptr [edx*2 + 0x12d4fbc0], cx */
  w16((uint32_t)(EDX*2 + 0x12d4fbc0), (CX));
  /* 12d38a42 jmp 0x12d38a17 */
  goto L_12d38a17;
L_12d38a44:;
  /* 12d38a44 call 0x12d38d50 */
  push32(0x12d38a49u); f_12d38d50();
  /* 12d38a49 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12d38a4b call 0x12d36270 */
  push32(0x12d38a50u); f_12d36270();
  /* 12d38a50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d38a53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d38a55 jmp 0x12d38be0 */
  goto L_12d38be0;
L_12d38a5a:;
  /* 12d38a5a jmp 0x12d38905 */
  goto L_12d38905;
L_12d38a5f:;
  /* 12d38a5f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 12d38a62 push edx */
  push32((uint32_t)(EDX));
  /* 12d38a63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d38a66 push eax */
  push32((uint32_t)(EAX));
  /* 12d38a67 call dword ptr [0x12d502ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502ec))), 0x12d38a6du);
  /* 12d38a6d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d38a70 jne 0x12d38bb2 */
  if (!C.zf) goto L_12d38bb2;
  /* 12d38a76 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12d38a7d jmp 0x12d38a88 */
  goto L_12d38a88;
L_12d38a7f:;
  /* 12d38a7f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d38a82 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d38a85 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_12d38a88:;
  /* 12d38a88 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d38a8f jae 0x12d38a9d */
  if (!C.cf) goto L_12d38a9d;
  /* 12d38a91 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d38a94 mov byte ptr [edx + 0x12d4fce0], 0 */
  w8((uint32_t)(EDX + 0x12d4fce0), (0x0u));
  /* 12d38a9b jmp 0x12d38a7f */
  goto L_12d38a7f;
L_12d38a9d:;
  /* 12d38a9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d38aa0 mov dword ptr [0x12d4fb44], eax */
  w32((uint32_t)(0x12d4fb44), (EAX));
  /* 12d38aa5 mov dword ptr [0x12d4fde4], 0 */
  w32((uint32_t)(0x12d4fde4), (0x0u));
  /* 12d38aaf cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d38ab3 jbe 0x12d38b6e */
  if ((C.cf||C.zf)) goto L_12d38b6e;
  /* 12d38ab9 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 12d38abc mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12d38abf jmp 0x12d38aca */
  goto L_12d38aca;
L_12d38ac1:;
  /* 12d38ac1 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d38ac4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d38ac7 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_12d38aca:;
  /* 12d38aca mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d38acd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d38acf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d38ad1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d38ad3 je 0x12d38b1c */
  if (C.zf) goto L_12d38b1c;
  /* 12d38ad5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d38ad8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d38ada mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12d38add test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d38adf je 0x12d38b1c */
  if (C.zf) goto L_12d38b1c;
  /* 12d38ae1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d38ae4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d38ae6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d38ae8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12d38aeb jmp 0x12d38af6 */
  goto L_12d38af6;
L_12d38aed:;
  /* 12d38aed mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d38af0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d38af3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12d38af6:;
  /* 12d38af6 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d38af9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d38afb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12d38afe cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d38b01 ja 0x12d38b1a */
  if ((!C.cf&&!C.zf)) goto L_12d38b1a;
  /* 12d38b03 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d38b06 mov cl, byte ptr [eax + 0x12d4fce1] */
  CL = (r8((uint32_t)(EAX + 0x12d4fce1)));
  /* 12d38b0c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 12d38b0f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d38b12 mov byte ptr [edx + 0x12d4fce1], cl */
  w8((uint32_t)(EDX + 0x12d4fce1), (CL));
  /* 12d38b18 jmp 0x12d38aed */
  goto L_12d38aed;
L_12d38b1a:;
  /* 12d38b1a jmp 0x12d38ac1 */
  goto L_12d38ac1;
L_12d38b1c:;
  /* 12d38b1c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 12d38b23 jmp 0x12d38b2e */
  goto L_12d38b2e;
L_12d38b25:;
  /* 12d38b25 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d38b28 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d38b2b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12d38b2e:;
  /* 12d38b2e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d38b35 jae 0x12d38b4e */
  if (!C.cf) goto L_12d38b4e;
  /* 12d38b37 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d38b3a mov dl, byte ptr [ecx + 0x12d4fce1] */
  DL = (r8((uint32_t)(ECX + 0x12d4fce1)));
  /* 12d38b40 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 12d38b43 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d38b46 mov byte ptr [eax + 0x12d4fce1], dl */
  w8((uint32_t)(EAX + 0x12d4fce1), (DL));
  /* 12d38b4c jmp 0x12d38b25 */
  goto L_12d38b25;
L_12d38b4e:;
  /* 12d38b4e mov ecx, dword ptr [0x12d4fb44] */
  ECX = (r32((uint32_t)(0x12d4fb44)));
  /* 12d38b54 push ecx */
  push32((uint32_t)(ECX));
  /* 12d38b55 call 0x12d38c50 */
  push32(0x12d38b5au); f_12d38c50();
  /* 12d38b5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d38b5d mov dword ptr [0x12d4fde4], eax */
  w32((uint32_t)(0x12d4fde4), (EAX));
  /* 12d38b62 mov dword ptr [0x12d4fbcc], 1 */
  w32((uint32_t)(0x12d4fbcc), (0x1u));
  /* 12d38b6c jmp 0x12d38b78 */
  goto L_12d38b78;
L_12d38b6e:;
  /* 12d38b6e mov dword ptr [0x12d4fbcc], 0 */
  w32((uint32_t)(0x12d4fbcc), (0x0u));
L_12d38b78:;
  /* 12d38b78 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12d38b7f jmp 0x12d38b8a */
  goto L_12d38b8a;
L_12d38b81:;
  /* 12d38b81 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d38b84 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d38b87 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12d38b8a:;
  /* 12d38b8a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d38b8e jae 0x12d38b9f */
  if (!C.cf) goto L_12d38b9f;
  /* 12d38b90 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d38b93 mov word ptr [eax*2 + 0x12d4fbc0], 0 */
  w16((uint32_t)(EAX*2 + 0x12d4fbc0), (0x0u));
  /* 12d38b9d jmp 0x12d38b81 */
  goto L_12d38b81;
L_12d38b9f:;
  /* 12d38b9f call 0x12d38d50 */
  push32(0x12d38ba4u); f_12d38d50();
  /* 12d38ba4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12d38ba6 call 0x12d36270 */
  push32(0x12d38babu); f_12d36270();
  /* 12d38bab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d38bae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d38bb0 jmp 0x12d38be0 */
  goto L_12d38be0;
L_12d38bb2:;
  /* 12d38bb2 cmp dword ptr [0x12d4e650], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e650))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d38bb9 je 0x12d38bd3 */
  if (C.zf) goto L_12d38bd3;
  /* 12d38bbb call 0x12d38cd0 */
  push32(0x12d38bc0u); f_12d38cd0();
  /* 12d38bc0 call 0x12d38d50 */
  push32(0x12d38bc5u); f_12d38d50();
  /* 12d38bc5 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12d38bc7 call 0x12d36270 */
  push32(0x12d38bccu); f_12d36270();
  /* 12d38bcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d38bcf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d38bd1 jmp 0x12d38be0 */
  goto L_12d38be0;
L_12d38bd3:;
  /* 12d38bd3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12d38bd5 call 0x12d36270 */
  push32(0x12d38bdau); f_12d36270();
  /* 12d38bda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d38bdd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12d38be0:;
  /* 12d38be0 mov esp, ebp */
  ESP = (EBP);
  /* 12d38be2 pop ebp */
  EBP = (pop32());
  /* 12d38be3 ret  */
  ESPCHK(0x12d388a0u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x12d38bf0 (89 bytes, 21 insns) */
void f_12d38bf0(void) {
  FTRACE(0x12d38bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d38bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d38bf1 mov ebp, esp */
  EBP = (ESP);
  /* 12d38bf3 mov dword ptr [0x12d4e650], 0 */
  w32((uint32_t)(0x12d4e650), (0x0u));
  /* 12d38bfd cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d38c01 jne 0x12d38c15 */
  if (!C.zf) goto L_12d38c15;
  /* 12d38c03 mov dword ptr [0x12d4e650], 1 */
  w32((uint32_t)(0x12d4e650), (0x1u));
  /* 12d38c0d call dword ptr [0x12d502f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502f4))), 0x12d38c13u);
  /* 12d38c13 jmp 0x12d38c47 */
  goto L_12d38c47;
L_12d38c15:;
  /* 12d38c15 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d38c19 jne 0x12d38c2d */
  if (!C.zf) goto L_12d38c2d;
  /* 12d38c1b mov dword ptr [0x12d4e650], 1 */
  w32((uint32_t)(0x12d4e650), (0x1u));
  /* 12d38c25 call dword ptr [0x12d502b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502b0))), 0x12d38c2bu);
  /* 12d38c2b jmp 0x12d38c47 */
  goto L_12d38c47;
L_12d38c2d:;
  /* 12d38c2d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d38c31 jne 0x12d38c44 */
  if (!C.zf) goto L_12d38c44;
  /* 12d38c33 mov dword ptr [0x12d4e650], 1 */
  w32((uint32_t)(0x12d4e650), (0x1u));
  /* 12d38c3d mov eax, dword ptr [0x12d4e670] */
  EAX = (r32((uint32_t)(0x12d4e670)));
  /* 12d38c42 jmp 0x12d38c47 */
  goto L_12d38c47;
L_12d38c44:;
  /* 12d38c44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_12d38c47:;
  /* 12d38c47 pop ebp */
  EBP = (pop32());
  /* 12d38c48 ret  */
  ESPCHK(0x12d38bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c50 @ 0x12d38c50 (80 bytes, 26 insns) [1 switch table(s)] */
void f_12d38c50(void) {
  FTRACE(0x12d38c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d38c50 push ebp */
  push32((uint32_t)(EBP));
  /* 12d38c51 mov ebp, esp */
  EBP = (ESP);
  /* 12d38c53 push ecx */
  push32((uint32_t)(ECX));
  /* 12d38c54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d38c57 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d38c5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d38c5d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d38c63 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d38c66 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d38c6a ja 0x12d38c9a */
  if ((!C.cf&&!C.zf)) goto L_12d38c9a;
  /* 12d38c6c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d38c6f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d38c71 mov dl, byte ptr [eax + 0x12d38cb4] */
  DL = (r8((uint32_t)(EAX + 0x12d38cb4)));
  /* 12d38c77 jmp dword ptr [edx*4 + 0x12d38ca0] */
  switch (EDX) {
    case 0: goto L_12d38c7e;
    case 1: goto L_12d38c85;
    case 2: goto L_12d38c8c;
    case 3: goto L_12d38c93;
    case 4: goto L_12d38c9a;
    default: x86_unimpl("switch@0x12d38c77 out of table"); return;
  }
L_12d38c7e:;
  /* 12d38c7e mov eax, 0x411 */
  EAX = (0x411u);
  /* 12d38c83 jmp 0x12d38c9c */
  goto L_12d38c9c;
L_12d38c85:;
  /* 12d38c85 mov eax, 0x804 */
  EAX = (0x804u);
  /* 12d38c8a jmp 0x12d38c9c */
  goto L_12d38c9c;
L_12d38c8c:;
  /* 12d38c8c mov eax, 0x412 */
  EAX = (0x412u);
  /* 12d38c91 jmp 0x12d38c9c */
  goto L_12d38c9c;
L_12d38c93:;
  /* 12d38c93 mov eax, 0x404 */
  EAX = (0x404u);
  /* 12d38c98 jmp 0x12d38c9c */
  goto L_12d38c9c;
L_12d38c9a:;
  /* 12d38c9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d38c9c:;
  /* 12d38c9c mov esp, ebp */
  ESP = (EBP);
  /* 12d38c9e pop ebp */
  EBP = (pop32());
  /* 12d38c9f ret  */
  ESPCHK(0x12d38c50u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x12d38cd0 (116 bytes, 29 insns) */
void f_12d38cd0(void) {
  FTRACE(0x12d38cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d38cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d38cd1 mov ebp, esp */
  EBP = (ESP);
  /* 12d38cd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d38cd4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d38cdb jmp 0x12d38ce6 */
  goto L_12d38ce6;
L_12d38cdd:;
  /* 12d38cdd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d38ce0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d38ce3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d38ce6:;
  /* 12d38ce6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d38ced jge 0x12d38cfb */
  if ((C.sf==C.of)) goto L_12d38cfb;
  /* 12d38cef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d38cf2 mov byte ptr [ecx + 0x12d4fce0], 0 */
  w8((uint32_t)(ECX + 0x12d4fce0), (0x0u));
  /* 12d38cf9 jmp 0x12d38cdd */
  goto L_12d38cdd;
L_12d38cfb:;
  /* 12d38cfb mov dword ptr [0x12d4fb44], 0 */
  w32((uint32_t)(0x12d4fb44), (0x0u));
  /* 12d38d05 mov dword ptr [0x12d4fbcc], 0 */
  w32((uint32_t)(0x12d4fbcc), (0x0u));
  /* 12d38d0f mov dword ptr [0x12d4fde4], 0 */
  w32((uint32_t)(0x12d4fde4), (0x0u));
  /* 12d38d19 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d38d20 jmp 0x12d38d2b */
  goto L_12d38d2b;
L_12d38d22:;
  /* 12d38d22 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d38d25 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d38d28 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12d38d2b:;
  /* 12d38d2b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d38d2f jge 0x12d38d40 */
  if ((C.sf==C.of)) goto L_12d38d40;
  /* 12d38d31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d38d34 mov word ptr [eax*2 + 0x12d4fbc0], 0 */
  w16((uint32_t)(EAX*2 + 0x12d4fbc0), (0x0u));
  /* 12d38d3e jmp 0x12d38d22 */
  goto L_12d38d22;
L_12d38d40:;
  /* 12d38d40 mov esp, ebp */
  ESP = (EBP);
  /* 12d38d42 pop ebp */
  EBP = (pop32());
  /* 12d38d43 ret  */
  ESPCHK(0x12d38cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d50 @ 0x12d38d50 (770 bytes, 175 insns) */
void f_12d38d50(void) {
  FTRACE(0x12d38d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d38d50 push ebp */
  push32((uint32_t)(EBP));
  /* 12d38d51 mov ebp, esp */
  EBP = (ESP);
  /* 12d38d53 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d38d59 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 12d38d5f push eax */
  push32((uint32_t)(EAX));
  /* 12d38d60 mov ecx, dword ptr [0x12d4fb44] */
  ECX = (r32((uint32_t)(0x12d4fb44)));
  /* 12d38d66 push ecx */
  push32((uint32_t)(ECX));
  /* 12d38d67 call dword ptr [0x12d502ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502ec))), 0x12d38d6du);
  /* 12d38d6d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d38d70 jne 0x12d38f89 */
  if (!C.zf) goto L_12d38f89;
  /* 12d38d76 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12d38d80 jmp 0x12d38d91 */
  goto L_12d38d91;
L_12d38d82:;
  /* 12d38d82 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d38d88 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d38d8b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_12d38d91:;
  /* 12d38d91 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d38d9b jae 0x12d38db2 */
  if (!C.cf) goto L_12d38db2;
  /* 12d38d9d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d38da3 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 12d38da9 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 12d38db0 jmp 0x12d38d82 */
  goto L_12d38d82;
L_12d38db2:;
  /* 12d38db2 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 12d38db9 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 12d38dbf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d38dc2 jmp 0x12d38dcd */
  goto L_12d38dcd;
L_12d38dc4:;
  /* 12d38dc4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d38dc7 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d38dca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d38dcd:;
  /* 12d38dcd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d38dd0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d38dd2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d38dd4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d38dd6 je 0x12d38e18 */
  if (C.zf) goto L_12d38e18;
  /* 12d38dd8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d38ddb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d38ddd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d38ddf mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 12d38de5 jmp 0x12d38df6 */
  goto L_12d38df6;
L_12d38de7:;
  /* 12d38de7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d38ded add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d38df0 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_12d38df6:;
  /* 12d38df6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d38df9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d38dfb mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12d38dfe cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d38e04 ja 0x12d38e16 */
  if ((!C.cf&&!C.zf)) goto L_12d38e16;
  /* 12d38e06 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d38e0c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 12d38e14 jmp 0x12d38de7 */
  goto L_12d38de7;
L_12d38e16:;
  /* 12d38e16 jmp 0x12d38dc4 */
  goto L_12d38dc4;
L_12d38e18:;
  /* 12d38e18 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d38e1a mov eax, dword ptr [0x12d4fde4] */
  EAX = (r32((uint32_t)(0x12d4fde4)));
  /* 12d38e1f push eax */
  push32((uint32_t)(EAX));
  /* 12d38e20 mov ecx, dword ptr [0x12d4fb44] */
  ECX = (r32((uint32_t)(0x12d4fb44)));
  /* 12d38e26 push ecx */
  push32((uint32_t)(ECX));
  /* 12d38e27 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 12d38e2d push edx */
  push32((uint32_t)(EDX));
  /* 12d38e2e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12d38e33 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 12d38e39 push eax */
  push32((uint32_t)(EAX));
  /* 12d38e3a push 1 */
  push32((uint32_t)(0x1u));
  /* 12d38e3c call 0x12d3aa00 */
  push32(0x12d38e41u); f_12d3aa00();
  /* 12d38e41 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d38e44 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d38e46 mov ecx, dword ptr [0x12d4fb44] */
  ECX = (r32((uint32_t)(0x12d4fb44)));
  /* 12d38e4c push ecx */
  push32((uint32_t)(ECX));
  /* 12d38e4d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12d38e52 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 12d38e58 push edx */
  push32((uint32_t)(EDX));
  /* 12d38e59 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12d38e5e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 12d38e64 push eax */
  push32((uint32_t)(EAX));
  /* 12d38e65 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12d38e6a mov ecx, dword ptr [0x12d4fde4] */
  ECX = (r32((uint32_t)(0x12d4fde4)));
  /* 12d38e70 push ecx */
  push32((uint32_t)(ECX));
  /* 12d38e71 call 0x12d3abc0 */
  push32(0x12d38e76u); f_12d3abc0();
  /* 12d38e76 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d38e79 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d38e7b mov edx, dword ptr [0x12d4fb44] */
  EDX = (r32((uint32_t)(0x12d4fb44)));
  /* 12d38e81 push edx */
  push32((uint32_t)(EDX));
  /* 12d38e82 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12d38e87 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 12d38e8d push eax */
  push32((uint32_t)(EAX));
  /* 12d38e8e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12d38e93 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 12d38e99 push ecx */
  push32((uint32_t)(ECX));
  /* 12d38e9a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 12d38e9f mov edx, dword ptr [0x12d4fde4] */
  EDX = (r32((uint32_t)(0x12d4fde4)));
  /* 12d38ea5 push edx */
  push32((uint32_t)(EDX));
  /* 12d38ea6 call 0x12d3abc0 */
  push32(0x12d38eabu); f_12d3abc0();
  /* 12d38eab add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d38eae mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12d38eb8 jmp 0x12d38ec9 */
  goto L_12d38ec9;
L_12d38eba:;
  /* 12d38eba mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d38ec0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d38ec3 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_12d38ec9:;
  /* 12d38ec9 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d38ed3 jae 0x12d38f84 */
  if (!C.cf) goto L_12d38f84;
  /* 12d38ed9 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d38edf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d38ee1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 12d38ee9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12d38eec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d38eee je 0x12d38f26 */
  if (C.zf) goto L_12d38f26;
  /* 12d38ef0 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d38ef6 mov cl, byte ptr [eax + 0x12d4fce1] */
  CL = (r8((uint32_t)(EAX + 0x12d4fce1)));
  /* 12d38efc or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 12d38eff mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d38f05 mov byte ptr [edx + 0x12d4fce1], cl */
  w8((uint32_t)(EDX + 0x12d4fce1), (CL));
  /* 12d38f0b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d38f11 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d38f17 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 12d38f1e mov byte ptr [eax + 0x12d4fbe0], dl */
  w8((uint32_t)(EAX + 0x12d4fbe0), (DL));
  /* 12d38f24 jmp 0x12d38f7f */
  goto L_12d38f7f;
L_12d38f26:;
  /* 12d38f26 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d38f2c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d38f2e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 12d38f36 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12d38f39 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d38f3b je 0x12d38f72 */
  if (C.zf) goto L_12d38f72;
  /* 12d38f3d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d38f43 mov al, byte ptr [edx + 0x12d4fce1] */
  AL = (r8((uint32_t)(EDX + 0x12d4fce1)));
  /* 12d38f49 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12d38f4b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d38f51 mov byte ptr [ecx + 0x12d4fce1], al */
  w8((uint32_t)(ECX + 0x12d4fce1), (AL));
  /* 12d38f57 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d38f5d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d38f63 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 12d38f6a mov byte ptr [edx + 0x12d4fbe0], cl */
  w8((uint32_t)(EDX + 0x12d4fbe0), (CL));
  /* 12d38f70 jmp 0x12d38f7f */
  goto L_12d38f7f;
L_12d38f72:;
  /* 12d38f72 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d38f78 mov byte ptr [edx + 0x12d4fbe0], 0 */
  w8((uint32_t)(EDX + 0x12d4fbe0), (0x0u));
L_12d38f7f:;
  /* 12d38f7f jmp 0x12d38eba */
  goto L_12d38eba;
L_12d38f84:;
  /* 12d38f84 jmp 0x12d3904e */
  goto L_12d3904e;
L_12d38f89:;
  /* 12d38f89 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12d38f93 jmp 0x12d38fa4 */
  goto L_12d38fa4;
L_12d38f95:;
  /* 12d38f95 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d38f9b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d38f9e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_12d38fa4:;
  /* 12d38fa4 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d38fae jae 0x12d3904e */
  if (!C.cf) goto L_12d3904e;
  /* 12d38fb4 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d38fbb jb 0x12d38ff8 */
  if (C.cf) goto L_12d38ff8;
  /* 12d38fbd cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d38fc4 ja 0x12d38ff8 */
  if ((!C.cf&&!C.zf)) goto L_12d38ff8;
  /* 12d38fc6 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d38fcc mov dl, byte ptr [ecx + 0x12d4fce1] */
  DL = (r8((uint32_t)(ECX + 0x12d4fce1)));
  /* 12d38fd2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 12d38fd5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d38fdb mov byte ptr [eax + 0x12d4fce1], dl */
  w8((uint32_t)(EAX + 0x12d4fce1), (DL));
  /* 12d38fe1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d38fe7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d38fea mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d38ff0 mov byte ptr [edx + 0x12d4fbe0], cl */
  w8((uint32_t)(EDX + 0x12d4fbe0), (CL));
  /* 12d38ff6 jmp 0x12d39049 */
  goto L_12d39049;
L_12d38ff8:;
  /* 12d38ff8 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d38fff jb 0x12d3903c */
  if (C.cf) goto L_12d3903c;
  /* 12d39001 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d39008 ja 0x12d3903c */
  if ((!C.cf&&!C.zf)) goto L_12d3903c;
  /* 12d3900a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d39010 mov cl, byte ptr [eax + 0x12d4fce1] */
  CL = (r8((uint32_t)(EAX + 0x12d4fce1)));
  /* 12d39016 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12d39019 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d3901f mov byte ptr [edx + 0x12d4fce1], cl */
  w8((uint32_t)(EDX + 0x12d4fce1), (CL));
  /* 12d39025 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d3902b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3902e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d39034 mov byte ptr [ecx + 0x12d4fbe0], al */
  w8((uint32_t)(ECX + 0x12d4fbe0), (AL));
  /* 12d3903a jmp 0x12d39049 */
  goto L_12d39049;
L_12d3903c:;
  /* 12d3903c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12d39042 mov byte ptr [edx + 0x12d4fbe0], 0 */
  w8((uint32_t)(EDX + 0x12d4fbe0), (0x0u));
L_12d39049:;
  /* 12d39049 jmp 0x12d38f95 */
  goto L_12d38f95;
L_12d3904e:;
  /* 12d3904e mov esp, ebp */
  ESP = (EBP);
  /* 12d39050 pop ebp */
  EBP = (pop32());
  /* 12d39051 ret  */
  ESPCHK(0x12d38d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10009060 @ 0x12d39060 (23 bytes, 9 insns) */
void f_12d39060(void) {
  FTRACE(0x12d39060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d39060 push ebp */
  push32((uint32_t)(EBP));
  /* 12d39061 mov ebp, esp */
  EBP = (ESP);
  /* 12d39063 cmp dword ptr [0x12d4fbcc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4fbcc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3906a je 0x12d39073 */
  if (C.zf) goto L_12d39073;
  /* 12d3906c mov eax, dword ptr [0x12d4fb44] */
  EAX = (r32((uint32_t)(0x12d4fb44)));
  /* 12d39071 jmp 0x12d39075 */
  goto L_12d39075;
L_12d39073:;
  /* 12d39073 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d39075:;
  /* 12d39075 pop ebp */
  EBP = (pop32());
  /* 12d39076 ret  */
  ESPCHK(0x12d39060u, _esp0);
  ESP += 4; return;
}

/* FUN_10009080 @ 0x12d39080 (34 bytes, 10 insns) */
void f_12d39080(void) {
  FTRACE(0x12d39080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d39080 push ebp */
  push32((uint32_t)(EBP));
  /* 12d39081 mov ebp, esp */
  EBP = (ESP);
  /* 12d39083 cmp dword ptr [0x12d4ff90], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4ff90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3908a jne 0x12d390a0 */
  if (!C.zf) goto L_12d390a0;
  /* 12d3908c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 12d3908e call 0x12d388a0 */
  push32(0x12d39093u); f_12d388a0();
  /* 12d39093 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d39096 mov dword ptr [0x12d4ff90], 1 */
  w32((uint32_t)(0x12d4ff90), (0x1u));
L_12d390a0:;
  /* 12d390a0 pop ebp */
  EBP = (pop32());
  /* 12d390a1 ret  */
  ESPCHK(0x12d39080u, _esp0);
  ESP += 4; return;
}

/* FUN_100090b0 @ 0x12d390b0 (664 bytes, 270 insns) [15 switch table(s)] */
void f_12d390b0(void) {
  FTRACE(0x12d390b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d390b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d390b1 mov ebp, esp */
  EBP = (ESP);
  /* 12d390b3 push edi */
  push32((uint32_t)(EDI));
  /* 12d390b4 push esi */
  push32((uint32_t)(ESI));
  /* 12d390b5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12d390b8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d390bb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12d390be mov eax, ecx */
  EAX = (ECX);
  /* 12d390c0 mov edx, ecx */
  EDX = (ECX);
  /* 12d390c2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d390c4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d390c6 jbe 0x12d390d0 */
  if ((C.cf||C.zf)) goto L_12d390d0;
  /* 12d390c8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d390ca jb 0x12d39248 */
  if (C.cf) goto L_12d39248;
L_12d390d0:;
  /* 12d390d0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12d390d6 jne 0x12d390ec */
  if (!C.zf) goto L_12d390ec;
  /* 12d390d8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d390db and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12d390de cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d390e1 jb 0x12d3910c */
  if (C.cf) goto L_12d3910c;
  /* 12d390e3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12d390e5 jmp dword ptr [edx*4 + 0x12d391f8] */
  switch (EDX) {
    case 0: goto L_12d39208;
    case 1: goto L_12d39210;
    case 2: goto L_12d3921c;
    case 3: goto L_12d39230;
    default: x86_unimpl("switch@0x12d390e5 out of table"); return;
  }
L_12d390ec:;
  /* 12d390ec mov eax, edi */
  EAX = (EDI);
  /* 12d390ee mov edx, 3 */
  EDX = (0x3u);
  /* 12d390f3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d390f6 jb 0x12d39104 */
  if (C.cf) goto L_12d39104;
  /* 12d390f8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12d390fb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d390fd jmp dword ptr [eax*4 + 0x12d39110] */
  switch (EAX) {
    case 1: goto L_12d39120;
    case 2: goto L_12d3914c;
    case 3: goto L_12d39170;
    default: x86_unimpl("switch@0x12d390fd out of table"); return;
  }
L_12d39104:;
  /* 12d39104 jmp dword ptr [ecx*4 + 0x12d39208] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x12d39208)))); return;
  /* 12d3910b nop  */
  /* nop */
L_12d3910c:;
  /* 12d3910c jmp dword ptr [ecx*4 + 0x12d3918c] */
  switch (ECX) {
    case 0: goto L_12d391ef;
    case 1: goto L_12d391dc;
    case 2: goto L_12d391d4;
    case 3: goto L_12d391cc;
    case 4: goto L_12d391c4;
    case 5: goto L_12d391bc;
    case 6: goto L_12d391b4;
    case 7: goto L_12d391ac;
    default: x86_unimpl("switch@0x12d3910c out of table"); return;
  }
  /* 12d39113 nop  */
  /* nop */
L_12d39120:;
  /* 12d39120 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12d39122 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d39124 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12d39126 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12d39129 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12d3912c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12d3912f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d39132 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12d39135 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d39138 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3913b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3913e jb 0x12d3910c */
  if (C.cf) goto L_12d3910c;
  /* 12d39140 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12d39142 jmp dword ptr [edx*4 + 0x12d391f8] */
  switch (EDX) {
    case 0: goto L_12d39208;
    case 1: goto L_12d39210;
    case 2: goto L_12d3921c;
    case 3: goto L_12d39230;
    default: x86_unimpl("switch@0x12d39142 out of table"); return;
  }
  /* 12d39149 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12d3914c:;
  /* 12d3914c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12d3914e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d39150 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12d39152 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12d39155 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d39158 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12d3915b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3915e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d39161 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d39164 jb 0x12d3910c */
  if (C.cf) goto L_12d3910c;
  /* 12d39166 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12d39168 jmp dword ptr [edx*4 + 0x12d391f8] */
  switch (EDX) {
    case 0: goto L_12d39208;
    case 1: goto L_12d39210;
    case 2: goto L_12d3921c;
    case 3: goto L_12d39230;
    default: x86_unimpl("switch@0x12d39168 out of table"); return;
  }
  /* 12d3916f nop  */
  /* nop */
L_12d39170:;
  /* 12d39170 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12d39172 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d39174 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12d39176 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12d39177 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d3917a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12d3917b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3917e jb 0x12d3910c */
  if (C.cf) goto L_12d3910c;
  /* 12d39180 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12d39182 jmp dword ptr [edx*4 + 0x12d391f8] */
  switch (EDX) {
    case 0: goto L_12d39208;
    case 1: goto L_12d39210;
    case 2: goto L_12d3921c;
    case 3: goto L_12d39230;
    default: x86_unimpl("switch@0x12d39182 out of table"); return;
  }
  /* 12d39189 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12d391ac:;
  /* 12d391ac mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 12d391b0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_12d391b4:;
  /* 12d391b4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 12d391b8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_12d391bc:;
  /* 12d391bc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 12d391c0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_12d391c4:;
  /* 12d391c4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 12d391c8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_12d391cc:;
  /* 12d391cc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 12d391d0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_12d391d4:;
  /* 12d391d4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 12d391d8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_12d391dc:;
  /* 12d391dc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 12d391e0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 12d391e4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12d391eb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d391ed add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12d391ef:;
  /* 12d391ef jmp dword ptr [edx*4 + 0x12d391f8] */
  switch (EDX) {
    case 0: goto L_12d39208;
    case 1: goto L_12d39210;
    case 2: goto L_12d3921c;
    case 3: goto L_12d39230;
    default: x86_unimpl("switch@0x12d391ef out of table"); return;
  }
  /* 12d391f6 mov edi, edi */
  EDI = (EDI);
L_12d39208:;
  /* 12d39208 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3920b pop esi */
  ESI = (pop32());
  /* 12d3920c pop edi */
  EDI = (pop32());
  /* 12d3920d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d3920e ret  */
  ESPCHK(0x12d390b0u, _esp0);
  ESP += 4; return;
  /* 12d3920f nop  */
  /* nop */
L_12d39210:;
  /* 12d39210 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d39212 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12d39214 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d39217 pop esi */
  ESI = (pop32());
  /* 12d39218 pop edi */
  EDI = (pop32());
  /* 12d39219 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d3921a ret  */
  ESPCHK(0x12d390b0u, _esp0);
  ESP += 4; return;
  /* 12d3921b nop  */
  /* nop */
L_12d3921c:;
  /* 12d3921c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d3921e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12d39220 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12d39223 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12d39226 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d39229 pop esi */
  ESI = (pop32());
  /* 12d3922a pop edi */
  EDI = (pop32());
  /* 12d3922b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d3922c ret  */
  ESPCHK(0x12d390b0u, _esp0);
  ESP += 4; return;
  /* 12d3922d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12d39230:;
  /* 12d39230 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d39232 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12d39234 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12d39237 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12d3923a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12d3923d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12d39240 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d39243 pop esi */
  ESI = (pop32());
  /* 12d39244 pop edi */
  EDI = (pop32());
  /* 12d39245 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d39246 ret  */
  ESPCHK(0x12d390b0u, _esp0);
  ESP += 4; return;
  /* 12d39247 nop  */
  /* nop */
L_12d39248:;
  /* 12d39248 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 12d3924c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 12d39250 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12d39256 jne 0x12d3927c */
  if (!C.zf) goto L_12d3927c;
  /* 12d39258 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d3925b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12d3925e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d39261 jb 0x12d39270 */
  if (C.cf) goto L_12d39270;
  /* 12d39263 std  */
  C.df=1;
  /* 12d39264 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12d39266 cld  */
  C.df=0;
  /* 12d39267 jmp dword ptr [edx*4 + 0x12d39390] */
  switch (EDX) {
    case 0: goto L_12d393a0;
    case 1: goto L_12d393a8;
    case 2: goto L_12d393b8;
    case 3: goto L_12d393cc;
    default: x86_unimpl("switch@0x12d39267 out of table"); return;
  }
  /* 12d3926e mov edi, edi */
  EDI = (EDI);
L_12d39270:;
  /* 12d39270 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d39272 jmp dword ptr [ecx*4 + 0x12d39340] */
  switch (ECX) {
    case 0: goto L_12d39387;
    default: x86_unimpl("switch@0x12d39272 out of table"); return;
  }
  /* 12d39279 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12d3927c:;
  /* 12d3927c mov eax, edi */
  EAX = (EDI);
  /* 12d3927e mov edx, 3 */
  EDX = (0x3u);
  /* 12d39283 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d39286 jb 0x12d39294 */
  if (C.cf) goto L_12d39294;
  /* 12d39288 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12d3928b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3928d jmp dword ptr [eax*4 + 0x12d39298] */
  switch (EAX) {
    case 1: goto L_12d392a8;
    case 2: goto L_12d392c8;
    case 3: goto L_12d392f0;
    default: x86_unimpl("switch@0x12d3928d out of table"); return;
  }
L_12d39294:;
  /* 12d39294 jmp dword ptr [ecx*4 + 0x12d39390] */
  switch (ECX) {
    case 0: goto L_12d393a0;
    case 1: goto L_12d393a8;
    case 2: goto L_12d393b8;
    case 3: goto L_12d393cc;
    default: x86_unimpl("switch@0x12d39294 out of table"); return;
  }
  /* 12d3929b nop  */
  /* nop */
L_12d392a8:;
  /* 12d392a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12d392ab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12d392ad mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12d392b0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 12d392b1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d392b4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 12d392b5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d392b8 jb 0x12d39270 */
  if (C.cf) goto L_12d39270;
  /* 12d392ba std  */
  C.df=1;
  /* 12d392bb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12d392bd cld  */
  C.df=0;
  /* 12d392be jmp dword ptr [edx*4 + 0x12d39390] */
  switch (EDX) {
    case 0: goto L_12d393a0;
    case 1: goto L_12d393a8;
    case 2: goto L_12d393b8;
    case 3: goto L_12d393cc;
    default: x86_unimpl("switch@0x12d392be out of table"); return;
  }
  /* 12d392c5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12d392c8:;
  /* 12d392c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12d392cb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12d392cd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12d392d0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12d392d3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d392d6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12d392d9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d392dc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d392df cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d392e2 jb 0x12d39270 */
  if (C.cf) goto L_12d39270;
  /* 12d392e4 std  */
  C.df=1;
  /* 12d392e5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12d392e7 cld  */
  C.df=0;
  /* 12d392e8 jmp dword ptr [edx*4 + 0x12d39390] */
  switch (EDX) {
    case 0: goto L_12d393a0;
    case 1: goto L_12d393a8;
    case 2: goto L_12d393b8;
    case 3: goto L_12d393cc;
    default: x86_unimpl("switch@0x12d392e8 out of table"); return;
  }
  /* 12d392ef nop  */
  /* nop */
L_12d392f0:;
  /* 12d392f0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12d392f3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12d392f5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12d392f8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12d392fb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12d392fe mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12d39301 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d39304 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12d39307 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3930a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3930d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d39310 jb 0x12d39270 */
  if (C.cf) goto L_12d39270;
  /* 12d39316 std  */
  C.df=1;
  /* 12d39317 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12d39319 cld  */
  C.df=0;
  /* 12d3931a jmp dword ptr [edx*4 + 0x12d39390] */
  switch (EDX) {
    case 0: goto L_12d393a0;
    case 1: goto L_12d393a8;
    case 2: goto L_12d393b8;
    case 3: goto L_12d393cc;
    default: x86_unimpl("switch@0x12d3931a out of table"); return;
  }
  /* 12d39321 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 12d39324 inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 12d39325 xchg ebx, eax */
  { uint32_t _t=(EBX); EBX = (EAX); EAX = (_t); }
  /* 12d39326 rcl dword ptr [edx], cl */
  { uint32_t _v=(r32((uint32_t)(EDX)))&0xffffffffu, _cf=C.cf, _n=(CL)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>31)&1; _v=((_v<<1)|_cf)&0xffffffffu; _cf=_b; } w32((uint32_t)(EDX), (_v)); C.cf=_cf; }
  /* 12d39328 dec esp */
  { uint32_t _r=(ESP)-1; ESP = (_r); fl_dec(_r,32); }
  /* 12d39329 xchg ebx, eax */
  { uint32_t _t=(EBX); EBX = (EAX); EAX = (_t); }
  /* 12d3932a rcl dword ptr [edx], cl */
  { uint32_t _v=(r32((uint32_t)(EDX)))&0xffffffffu, _cf=C.cf, _n=(CL)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>31)&1; _v=((_v<<1)|_cf)&0xffffffffu; _cf=_b; } w32((uint32_t)(EDX), (_v)); C.cf=_cf; }
  /* 12d3932c push esp */
  push32((uint32_t)(ESP));
  /* 12d3932d xchg ebx, eax */
  { uint32_t _t=(EBX); EBX = (EAX); EAX = (_t); }
  /* 12d3932e rcl dword ptr [edx], cl */
  { uint32_t _v=(r32((uint32_t)(EDX)))&0xffffffffu, _cf=C.cf, _n=(CL)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>31)&1; _v=((_v<<1)|_cf)&0xffffffffu; _cf=_b; } w32((uint32_t)(EDX), (_v)); C.cf=_cf; }
  /* 12d39330 pop esp */
  ESP = (pop32());
  /* 12d39331 xchg ebx, eax */
  { uint32_t _t=(EBX); EBX = (EAX); EAX = (_t); }
  /* 12d39332 rcl dword ptr [edx], cl */
  { uint32_t _v=(r32((uint32_t)(EDX)))&0xffffffffu, _cf=C.cf, _n=(CL)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>31)&1; _v=((_v<<1)|_cf)&0xffffffffu; _cf=_b; } w32((uint32_t)(EDX), (_v)); C.cf=_cf; }
  /* 12d39334 xchg ebx, eax */
  { uint32_t _t=(EBX); EBX = (EAX); EAX = (_t); }
  /* 12d39336 rcl dword ptr [edx], cl */
  { uint32_t _v=(r32((uint32_t)(EDX)))&0xffffffffu, _cf=C.cf, _n=(CL)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>31)&1; _v=((_v<<1)|_cf)&0xffffffffu; _cf=_b; } w32((uint32_t)(EDX), (_v)); C.cf=_cf; }
  /* 12d39338 insb byte ptr es:[edi], dx */
  x86_unimpl("insb @ 0x12d39338");
  /* 12d39339 xchg ebx, eax */
  { uint32_t _t=(EBX); EBX = (EAX); EAX = (_t); }
  /* 12d3933a rcl dword ptr [edx], cl */
  { uint32_t _v=(r32((uint32_t)(EDX)))&0xffffffffu, _cf=C.cf, _n=(CL)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>31)&1; _v=((_v<<1)|_cf)&0xffffffffu; _cf=_b; } w32((uint32_t)(EDX), (_v)); C.cf=_cf; }
  /* 12d3933c je 0x12d392d1 */
  if (C.zf) goto L_12d392d1;
  /* 12d3933e rcl dword ptr [edx], cl */
  { uint32_t _v=(r32((uint32_t)(EDX)))&0xffffffffu, _cf=C.cf, _n=(CL)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>31)&1; _v=((_v<<1)|_cf)&0xffffffffu; _cf=_b; } w32((uint32_t)(EDX), (_v)); C.cf=_cf; }
  /* 12d39344 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 12d39348 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 12d3934c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 12d39350 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 12d39354 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 12d39358 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 12d3935c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 12d39360 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 12d39364 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 12d39368 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 12d3936c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 12d39370 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 12d39374 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 12d39378 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 12d3937c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12d39383 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d39385 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12d39387:;
  /* 12d39387 jmp dword ptr [edx*4 + 0x12d39390] */
  switch (EDX) {
    case 0: goto L_12d393a0;
    case 1: goto L_12d393a8;
    case 2: goto L_12d393b8;
    case 3: goto L_12d393cc;
    default: x86_unimpl("switch@0x12d39387 out of table"); return;
  }
  /* 12d3938e mov edi, edi */
  EDI = (EDI);
L_12d393a0:;
  /* 12d393a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d393a3 pop esi */
  ESI = (pop32());
  /* 12d393a4 pop edi */
  EDI = (pop32());
  /* 12d393a5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d393a6 ret  */
  ESPCHK(0x12d390b0u, _esp0);
  ESP += 4; return;
  /* 12d393a7 nop  */
  /* nop */
L_12d393a8:;
  /* 12d393a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12d393ab mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12d393ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d393b1 pop esi */
  ESI = (pop32());
  /* 12d393b2 pop edi */
  EDI = (pop32());
  /* 12d393b3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d393b4 ret  */
  ESPCHK(0x12d390b0u, _esp0);
  ESP += 4; return;
  /* 12d393b5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12d393b8:;
  /* 12d393b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12d393bb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12d393be mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12d393c1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12d393c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d393c7 pop esi */
  ESI = (pop32());
  /* 12d393c8 pop edi */
  EDI = (pop32());
  /* 12d393c9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d393ca ret  */
  ESPCHK(0x12d390b0u, _esp0);
  ESP += 4; return;
  /* 12d393cb nop  */
  /* nop */
L_12d393cc:;
  /* 12d393cc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12d393cf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12d393d2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12d393d5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12d393d8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12d393db mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12d393de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d393e1 pop esi */
  ESI = (pop32());
  /* 12d393e2 pop edi */
  EDI = (pop32());
  /* 12d393e3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d393e4 ret  */
  ESPCHK(0x12d390b0u, _esp0);
  ESP += 4; return;
L_12d392d1: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x12d392d1 (unresolved jump table)"); return;
}

/* __aulldiv @ 0x12d393f0 (104 bytes, 43 insns) */
void f_12d393f0(void) {
  FTRACE(0x12d393f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d393f0 push ebx */
  push32((uint32_t)(EBX));
  /* 12d393f1 push esi */
  push32((uint32_t)(ESI));
  /* 12d393f2 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 12d393f6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d393f8 jne 0x12d39412 */
  if (!C.zf) goto L_12d39412;
  /* 12d393fa mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 12d393fe mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12d39402 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d39404 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d39406 mov ebx, eax */
  EBX = (EAX);
  /* 12d39408 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 12d3940c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d3940e mov edx, ebx */
  EDX = (EBX);
  /* 12d39410 jmp 0x12d39453 */
  goto L_12d39453;
L_12d39412:;
  /* 12d39412 mov ecx, eax */
  ECX = (EAX);
  /* 12d39414 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 12d39418 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 12d3941c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_12d39420:;
  /* 12d39420 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12d39422 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 12d39424 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12d39426 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 12d39428 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3942a jne 0x12d39420 */
  if (!C.zf) goto L_12d39420;
  /* 12d3942c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d3942e mov esi, eax */
  ESI = (EAX);
  /* 12d39430 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12d39434 mov ecx, eax */
  ECX = (EAX);
  /* 12d39436 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 12d3943a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12d3943c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3943e jb 0x12d3944e */
  if (C.cf) goto L_12d3944e;
  /* 12d39440 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d39444 ja 0x12d3944e */
  if ((!C.cf&&!C.zf)) goto L_12d3944e;
  /* 12d39446 jb 0x12d3944f */
  if (C.cf) goto L_12d3944f;
  /* 12d39448 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3944c jbe 0x12d3944f */
  if ((C.cf||C.zf)) goto L_12d3944f;
L_12d3944e:;
  /* 12d3944e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_12d3944f:;
  /* 12d3944f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d39451 mov eax, esi */
  EAX = (ESI);
L_12d39453:;
  /* 12d39453 pop esi */
  ESI = (pop32());
  /* 12d39454 pop ebx */
  EBX = (pop32());
  /* 12d39455 ret 0x10 */
  ESPCHK(0x12d393f0u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x12d39460 (117 bytes, 44 insns) */
void f_12d39460(void) {
  FTRACE(0x12d39460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d39460 push ebx */
  push32((uint32_t)(EBX));
  /* 12d39461 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 12d39465 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d39467 jne 0x12d39481 */
  if (!C.zf) goto L_12d39481;
  /* 12d39469 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 12d3946d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 12d39471 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d39473 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d39475 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12d39479 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d3947b mov eax, edx */
  EAX = (EDX);
  /* 12d3947d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d3947f jmp 0x12d394d1 */
  goto L_12d394d1;
L_12d39481:;
  /* 12d39481 mov ecx, eax */
  ECX = (EAX);
  /* 12d39483 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 12d39487 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 12d3948b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_12d3948f:;
  /* 12d3948f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12d39491 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 12d39493 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12d39495 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 12d39497 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d39499 jne 0x12d3948f */
  if (!C.zf) goto L_12d3948f;
  /* 12d3949b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d3949d mov ecx, eax */
  ECX = (EAX);
  /* 12d3949f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12d394a3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 12d394a4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12d394a8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d394aa jb 0x12d394ba */
  if (C.cf) goto L_12d394ba;
  /* 12d394ac cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d394b0 ja 0x12d394ba */
  if ((!C.cf&&!C.zf)) goto L_12d394ba;
  /* 12d394b2 jb 0x12d394c2 */
  if (C.cf) goto L_12d394c2;
  /* 12d394b4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d394b8 jbe 0x12d394c2 */
  if ((C.cf||C.zf)) goto L_12d394c2;
L_12d394ba:;
  /* 12d394ba sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d394be sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12d394c2:;
  /* 12d394c2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d394c6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d394ca neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d394cc neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d394ce sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12d394d1:;
  /* 12d394d1 pop ebx */
  EBX = (pop32());
  /* 12d394d2 ret 0x10 */
  ESPCHK(0x12d39460u, _esp0);
  ESP += 20; return;
}

/* FUN_100094e0 @ 0x12d394e0 (628 bytes, 214 insns) */
void f_12d394e0(void) {
  FTRACE(0x12d394e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d394e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d394e1 mov ebp, esp */
  EBP = (ESP);
  /* 12d394e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d394e6 push ebx */
  push32((uint32_t)(EBX));
  /* 12d394e7 push esi */
  push32((uint32_t)(ESI));
  /* 12d394e8 push edi */
  push32((uint32_t)(EDI));
L_12d394e9:;
  /* 12d394e9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d394ed jne 0x12d3950d */
  if (!C.zf) goto L_12d3950d;
  /* 12d394ef push 0x12d49eac */
  push32((uint32_t)(0x12d49eacu));
  /* 12d394f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d394f6 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 12d394f8 push 0x12d49ea0 */
  push32((uint32_t)(0x12d49ea0u));
  /* 12d394fd push 2 */
  push32((uint32_t)(0x2u));
  /* 12d394ff call 0x12d31890 */
  push32(0x12d39504u); f_12d31890();
  /* 12d39504 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d39507 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3950a jne 0x12d3950d */
  if (!C.zf) goto L_12d3950d;
  /* 12d3950c int3  */
  x86_unimpl("int3 @ 0x12d3950c");
L_12d3950d:;
  /* 12d3950d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3950f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d39511 jne 0x12d394e9 */
  if (!C.zf) goto L_12d394e9;
  /* 12d39513 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d39516 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d39519 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3951c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12d3951f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12d39522 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d39525 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d39528 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 12d3952e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d39530 je 0x12d3953f */
  if (C.zf) goto L_12d3953f;
  /* 12d39532 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d39535 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12d39538 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 12d3953b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d3953d je 0x12d39555 */
  if (C.zf) goto L_12d39555;
L_12d3953f:;
  /* 12d3953f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d39542 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12d39545 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12d39547 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3954a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 12d3954d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d39550 jmp 0x12d3974d */
  goto L_12d3974d;
L_12d39555:;
  /* 12d39555 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d39558 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12d3955b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12d3955e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d39560 je 0x12d395ac */
  if (C.zf) goto L_12d395ac;
  /* 12d39562 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d39565 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12d3956c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3956f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12d39572 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 12d39575 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d39577 je 0x12d39595 */
  if (C.zf) goto L_12d39595;
  /* 12d39579 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3957c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3957f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12d39582 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12d39584 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d39587 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d3958a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 12d3958d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d39590 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12d39593 jmp 0x12d395ac */
  goto L_12d395ac;
L_12d39595:;
  /* 12d39595 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d39598 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d3959b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 12d3959e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d395a1 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12d395a4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d395a7 jmp 0x12d3974d */
  goto L_12d3974d;
L_12d395ac:;
  /* 12d395ac mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d395af mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d395b2 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12d395b5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d395b8 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12d395bb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d395be mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d395c1 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 12d395c4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d395c7 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12d395ca mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d395cd mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12d395d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d395db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d395de mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12d395e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d395e4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12d395e7 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 12d395ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d395ef jne 0x12d3961f */
  if (!C.zf) goto L_12d3961f;
  /* 12d395f1 cmp dword ptr [ebp - 8], 0x12d4d160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12d4d160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d395f8 je 0x12d39603 */
  if (C.zf) goto L_12d39603;
  /* 12d395fa cmp dword ptr [ebp - 8], 0x12d4d180 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12d4d180u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d39601 jne 0x12d39613 */
  if (!C.zf) goto L_12d39613;
L_12d39603:;
  /* 12d39603 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d39606 push edx */
  push32((uint32_t)(EDX));
  /* 12d39607 call 0x12d3b450 */
  push32(0x12d3960cu); f_12d3b450();
  /* 12d3960c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3960f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d39611 jne 0x12d3961f */
  if (!C.zf) goto L_12d3961f;
L_12d39613:;
  /* 12d39613 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d39616 push eax */
  push32((uint32_t)(EAX));
  /* 12d39617 call 0x12d3b380 */
  push32(0x12d3961cu); f_12d3b380();
  /* 12d3961c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d3961f:;
  /* 12d3961f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d39622 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d39625 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 12d3962b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d3962d je 0x12d3970b */
  if (C.zf) goto L_12d3970b;
L_12d39633:;
  /* 12d39633 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d39636 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d39639 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 12d3963b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3963e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d39640 jge 0x12d39663 */
  if ((C.sf==C.of)) goto L_12d39663;
  /* 12d39642 push 0x12d49e60 */
  push32((uint32_t)(0x12d49e60u));
  /* 12d39647 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d39649 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 12d3964e push 0x12d49ea0 */
  push32((uint32_t)(0x12d49ea0u));
  /* 12d39653 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d39655 call 0x12d31890 */
  push32(0x12d3965au); f_12d31890();
  /* 12d3965a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3965d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d39660 jne 0x12d39663 */
  if (!C.zf) goto L_12d39663;
  /* 12d39662 int3  */
  x86_unimpl("int3 @ 0x12d39662");
L_12d39663:;
  /* 12d39663 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d39665 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d39667 jne 0x12d39633 */
  if (!C.zf) goto L_12d39633;
  /* 12d39669 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3966c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3966f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12d39671 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d39674 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d39677 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3967a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12d3967d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d39680 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d39683 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12d39685 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d39688 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12d3968b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3968e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d39691 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12d39694 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d39698 jle 0x12d396b6 */
  if ((C.zf||C.sf!=C.of)) goto L_12d396b6;
  /* 12d3969a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3969d push ecx */
  push32((uint32_t)(ECX));
  /* 12d3969e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d396a1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12d396a4 push eax */
  push32((uint32_t)(EAX));
  /* 12d396a5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d396a8 push ecx */
  push32((uint32_t)(ECX));
  /* 12d396a9 call 0x12d3b070 */
  push32(0x12d396aeu); f_12d3b070();
  /* 12d396ae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d396b1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d396b4 jmp 0x12d396fe */
  goto L_12d396fe;
L_12d396b6:;
  /* 12d396b6 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d396ba je 0x12d396d9 */
  if (C.zf) goto L_12d396d9;
  /* 12d396bc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d396bf sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12d396c2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d396c5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12d396c8 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d396cb mov ecx, dword ptr [edx*4 + 0x12d4fe40] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12d4fe40)));
  /* 12d396d2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d396d4 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12d396d7 jmp 0x12d396e0 */
  goto L_12d396e0;
L_12d396d9:;
  /* 12d396d9 mov dword ptr [ebp - 0x14], 0x12d4ca80 */
  w32((uint32_t)(EBP + -0x14), (0x12d4ca80u));
L_12d396e0:;
  /* 12d396e0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d396e3 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 12d396e7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12d396ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d396ec je 0x12d396fe */
  if (C.zf) goto L_12d396fe;
  /* 12d396ee push 2 */
  push32((uint32_t)(0x2u));
  /* 12d396f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d396f2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d396f5 push ecx */
  push32((uint32_t)(ECX));
  /* 12d396f6 call 0x12d3af20 */
  push32(0x12d396fbu); f_12d3af20();
  /* 12d396fb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d396fe:;
  /* 12d396fe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d39701 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12d39704 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 12d39707 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12d39709 jmp 0x12d39729 */
  goto L_12d39729;
L_12d3970b:;
  /* 12d3970b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12d39712 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d39715 push edx */
  push32((uint32_t)(EDX));
  /* 12d39716 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 12d39719 push eax */
  push32((uint32_t)(EAX));
  /* 12d3971a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3971d push ecx */
  push32((uint32_t)(ECX));
  /* 12d3971e call 0x12d3b070 */
  push32(0x12d39723u); f_12d3b070();
  /* 12d39723 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d39726 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12d39729:;
  /* 12d39729 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3972c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3972f je 0x12d39745 */
  if (C.zf) goto L_12d39745;
  /* 12d39731 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d39734 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12d39737 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 12d3973a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3973d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12d39740 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d39743 jmp 0x12d3974d */
  goto L_12d3974d;
L_12d39745:;
  /* 12d39745 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d39748 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_12d3974d:;
  /* 12d3974d pop edi */
  EDI = (pop32());
  /* 12d3974e pop esi */
  ESI = (pop32());
  /* 12d3974f pop ebx */
  EBX = (pop32());
  /* 12d39750 mov esp, ebp */
  ESP = (EBP);
  /* 12d39752 pop ebp */
  EBP = (pop32());
  /* 12d39753 ret  */
  ESPCHK(0x12d394e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009760 @ 0x12d39760 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_12d39760(void) {
  FTRACE(0x12d39760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d39760 push ebp */
  push32((uint32_t)(EBP));
  /* 12d39761 mov ebp, esp */
  EBP = (ESP);
  /* 12d39763 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d39769 push ebx */
  push32((uint32_t)(EBX));
  /* 12d3976a push esi */
  push32((uint32_t)(ESI));
  /* 12d3976b push edi */
  push32((uint32_t)(EDI));
  /* 12d3976c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12d39773 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 12d3977d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_12d39784:;
  /* 12d39784 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d39787 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d39789 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 12d3978c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12d39790 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d39793 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d39796 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12d39799 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d3979b je 0x12d3a377 */
  if (C.zf) goto L_12d3a377;
  /* 12d397a1 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d397a8 jl 0x12d3a377 */
  if ((C.sf!=C.of)) goto L_12d3a377;
  /* 12d397ae movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12d397b2 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d397b5 jl 0x12d397d6 */
  if ((C.sf!=C.of)) goto L_12d397d6;
  /* 12d397b7 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12d397bb cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d397be jg 0x12d397d6 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d397d6;
  /* 12d397c0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12d397c4 movsx ecx, byte ptr [eax + 0x12d49e98] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x12d49e98))));
  /* 12d397cb and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 12d397ce mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 12d397d4 jmp 0x12d397e0 */
  goto L_12d397e0;
L_12d397d6:;
  /* 12d397d6 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_12d397e0:;
  /* 12d397e0 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 12d397e6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12d397e9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d397ec mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d397ef movsx edx, byte ptr [ecx + eax*8 + 0x12d49eb8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x12d49eb8))));
  /* 12d397f7 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12d397fa mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12d397fd mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d39800 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 12d39806 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3980d ja 0x12d3a372 */
  if ((!C.cf&&!C.zf)) goto L_12d3a372;
  /* 12d39813 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 12d39819 jmp dword ptr [ecx*4 + 0x12d3a384] */
  switch (ECX) {
    case 0: goto L_12d39820;
    case 1: goto L_12d398ba;
    case 2: goto L_12d398fc;
    case 3: goto L_12d3996b;
    case 4: goto L_12d399c3;
    case 5: goto L_12d399d2;
    case 6: goto L_12d39a1e;
    case 7: goto L_12d39ab1;
    case 8: goto L_12d39948;
    case 9: goto L_12d39953;
    case 10: goto L_12d3993e;
    case 11: goto L_12d39933;
    case 12: goto L_12d3995e;
    case 13: goto L_12d39966;
    default: x86_unimpl("switch@0x12d39819 out of table"); return;
  }
L_12d39820:;
  /* 12d39820 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12d39827 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d3982a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d39830 mov eax, dword ptr [0x12d4ccb8] */
  EAX = (r32((uint32_t)(0x12d4ccb8)));
  /* 12d39835 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d39837 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12d3983b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12d39841 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d39843 je 0x12d3989d */
  if (C.zf) goto L_12d3989d;
  /* 12d39845 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 12d3984b push edx */
  push32((uint32_t)(EDX));
  /* 12d3984c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3984f push eax */
  push32((uint32_t)(EAX));
  /* 12d39850 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12d39854 push ecx */
  push32((uint32_t)(ECX));
  /* 12d39855 call 0x12d3a490 */
  push32(0x12d3985au); f_12d3a490();
  /* 12d3985a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3985d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d39860 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d39862 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 12d39865 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d39868 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3986b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12d3986e:;
  /* 12d3986e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12d39872 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d39874 jne 0x12d39897 */
  if (!C.zf) goto L_12d39897;
  /* 12d39876 push 0x12d49f38 */
  push32((uint32_t)(0x12d49f38u));
  /* 12d3987b push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3987d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 12d39882 push 0x12d49f2c */
  push32((uint32_t)(0x12d49f2cu));
  /* 12d39887 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d39889 call 0x12d31890 */
  push32(0x12d3988eu); f_12d31890();
  /* 12d3988e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d39891 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d39894 jne 0x12d39897 */
  if (!C.zf) goto L_12d39897;
  /* 12d39896 int3  */
  x86_unimpl("int3 @ 0x12d39896");
L_12d39897:;
  /* 12d39897 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d39899 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3989b jne 0x12d3986e */
  if (!C.zf) goto L_12d3986e;
L_12d3989d:;
  /* 12d3989d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 12d398a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d398a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d398a7 push edx */
  push32((uint32_t)(EDX));
  /* 12d398a8 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12d398ac push eax */
  push32((uint32_t)(EAX));
  /* 12d398ad call 0x12d3a490 */
  push32(0x12d398b2u); f_12d3a490();
  /* 12d398b2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d398b5 jmp 0x12d3a372 */
  goto L_12d3a372;
L_12d398ba:;
  /* 12d398ba mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d398c1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d398c4 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 12d398ca mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 12d398d0 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 12d398d6 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 12d398dc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12d398df mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d398e6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 12d398f0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12d398f7 jmp 0x12d3a372 */
  goto L_12d3a372;
L_12d398fc:;
  /* 12d398fc movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12d39900 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 12d39906 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 12d3990c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3990f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 12d39915 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3991c ja 0x12d39966 */
  if ((!C.cf&&!C.zf)) goto L_12d39966;
  /* 12d3991e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 12d39924 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d39926 mov al, byte ptr [ecx + 0x12d3a3bc] */
  AL = (r8((uint32_t)(ECX + 0x12d3a3bc)));
  /* 12d3992c jmp dword ptr [eax*4 + 0x12d3a3a4] */
  switch (EAX) {
    case 0: goto L_12d39948;
    case 1: goto L_12d39953;
    case 2: goto L_12d3993e;
    case 3: goto L_12d39933;
    case 4: goto L_12d3995e;
    case 5: goto L_12d39966;
    default: x86_unimpl("switch@0x12d3992c out of table"); return;
  }
L_12d39933:;
  /* 12d39933 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d39936 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12d39939 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d3993c jmp 0x12d39966 */
  goto L_12d39966;
L_12d3993e:;
  /* 12d3993e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d39941 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 12d39943 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d39946 jmp 0x12d39966 */
  goto L_12d39966;
L_12d39948:;
  /* 12d39948 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3994b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12d3994e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d39951 jmp 0x12d39966 */
  goto L_12d39966;
L_12d39953:;
  /* 12d39953 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d39956 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 12d39959 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d3995c jmp 0x12d39966 */
  goto L_12d39966;
L_12d3995e:;
  /* 12d3995e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d39961 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 12d39963 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d39966:;
  /* 12d39966 jmp 0x12d3a372 */
  goto L_12d3a372;
L_12d3996b:;
  /* 12d3996b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12d3996f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d39972 jne 0x12d399a7 */
  if (!C.zf) goto L_12d399a7;
  /* 12d39974 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12d39977 push edx */
  push32((uint32_t)(EDX));
  /* 12d39978 call 0x12d3a5a0 */
  push32(0x12d3997du); f_12d3a5a0();
  /* 12d3997d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d39980 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 12d39986 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3998d jge 0x12d399a5 */
  if ((C.sf==C.of)) goto L_12d399a5;
  /* 12d3998f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d39992 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12d39994 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d39997 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 12d3999d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d3999f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_12d399a5:;
  /* 12d399a5 jmp 0x12d399be */
  goto L_12d399be;
L_12d399a7:;
  /* 12d399a7 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 12d399ad imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d399b0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12d399b4 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 12d399b8 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_12d399be:;
  /* 12d399be jmp 0x12d3a372 */
  goto L_12d3a372;
L_12d399c3:;
  /* 12d399c3 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 12d399cd jmp 0x12d3a372 */
  goto L_12d3a372;
L_12d399d2:;
  /* 12d399d2 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12d399d6 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d399d9 jne 0x12d39a02 */
  if (!C.zf) goto L_12d39a02;
  /* 12d399db lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12d399de push eax */
  push32((uint32_t)(EAX));
  /* 12d399df call 0x12d3a5a0 */
  push32(0x12d399e4u); f_12d3a5a0();
  /* 12d399e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d399e7 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 12d399ed cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d399f4 jge 0x12d39a00 */
  if ((C.sf==C.of)) goto L_12d39a00;
  /* 12d399f6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_12d39a00:;
  /* 12d39a00 jmp 0x12d39a19 */
  goto L_12d39a19;
L_12d39a02:;
  /* 12d39a02 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 12d39a08 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d39a0b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12d39a0f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12d39a13 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_12d39a19:;
  /* 12d39a19 jmp 0x12d3a372 */
  goto L_12d3a372;
L_12d39a1e:;
  /* 12d39a1e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12d39a22 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 12d39a28 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 12d39a2e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d39a31 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 12d39a37 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d39a3e ja 0x12d39aac */
  if ((!C.cf&&!C.zf)) goto L_12d39aac;
  /* 12d39a40 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 12d39a46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d39a48 mov al, byte ptr [ecx + 0x12d3a3e1] */
  AL = (r8((uint32_t)(ECX + 0x12d3a3e1)));
  /* 12d39a4e jmp dword ptr [eax*4 + 0x12d3a3cd] */
  switch (EAX) {
    case 0: goto L_12d39a60;
    case 1: goto L_12d39a99;
    case 2: goto L_12d39a55;
    case 3: goto L_12d39aa3;
    case 4: goto L_12d39aac;
    default: x86_unimpl("switch@0x12d39a4e out of table"); return;
  }
L_12d39a55:;
  /* 12d39a55 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d39a58 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 12d39a5b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d39a5e jmp 0x12d39aac */
  goto L_12d39aac;
L_12d39a60:;
  /* 12d39a60 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d39a63 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d39a66 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d39a69 jne 0x12d39a8b */
  if (!C.zf) goto L_12d39a8b;
  /* 12d39a6b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d39a6e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12d39a72 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d39a75 jne 0x12d39a8b */
  if (!C.zf) goto L_12d39a8b;
  /* 12d39a77 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d39a7a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d39a7d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12d39a80 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d39a83 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12d39a86 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d39a89 jmp 0x12d39a97 */
  goto L_12d39a97;
L_12d39a8b:;
  /* 12d39a8b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 12d39a92 jmp 0x12d39820 */
  goto L_12d39820;
L_12d39a97:;
  /* 12d39a97 jmp 0x12d39aac */
  goto L_12d39aac;
L_12d39a99:;
  /* 12d39a99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d39a9c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12d39a9e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d39aa1 jmp 0x12d39aac */
  goto L_12d39aac;
L_12d39aa3:;
  /* 12d39aa3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d39aa6 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12d39aa9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d39aac:;
  /* 12d39aac jmp 0x12d3a372 */
  goto L_12d3a372;
L_12d39ab1:;
  /* 12d39ab1 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12d39ab5 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 12d39abb mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 12d39ac1 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d39ac4 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 12d39aca cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d39ad1 ja 0x12d3a197 */
  if ((!C.cf&&!C.zf)) goto L_12d3a197;
  /* 12d39ad7 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 12d39add xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d39adf mov cl, byte ptr [edx + 0x12d3a44c] */
  CL = (r8((uint32_t)(EDX + 0x12d3a44c)));
  /* 12d39ae5 jmp dword ptr [ecx*4 + 0x12d3a410] */
  switch (ECX) {
    case 0: goto L_12d39aec;
    case 1: goto L_12d39d80;
    case 2: goto L_12d39c10;
    case 3: goto L_12d39eb9;
    case 4: goto L_12d39b7b;
    case 5: goto L_12d39b01;
    case 6: goto L_12d39e8b;
    case 7: goto L_12d39d90;
    case 8: goto L_12d39d35;
    case 9: goto L_12d39f05;
    case 10: goto L_12d39eaf;
    case 11: goto L_12d39c26;
    case 12: goto L_12d39ea3;
    case 13: goto L_12d39ec5;
    case 14: goto L_12d3a197;
    default: x86_unimpl("switch@0x12d39ae5 out of table"); return;
  }
L_12d39aec:;
  /* 12d39aec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d39aef and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 12d39af4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d39af6 jne 0x12d39b01 */
  if (!C.zf) goto L_12d39b01;
  /* 12d39af8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d39afb or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12d39afe mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d39b01:;
  /* 12d39b01 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d39b04 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 12d39b0a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d39b0c je 0x12d39b47 */
  if (C.zf) goto L_12d39b47;
  /* 12d39b0e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12d39b11 push eax */
  push32((uint32_t)(EAX));
  /* 12d39b12 call 0x12d3a5e0 */
  push32(0x12d39b17u); f_12d3a5e0();
  /* 12d39b17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d39b1a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 12d39b1e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 12d39b22 push ecx */
  push32((uint32_t)(ECX));
  /* 12d39b23 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 12d39b29 push edx */
  push32((uint32_t)(EDX));
  /* 12d39b2a call 0x12d3b6c0 */
  push32(0x12d39b2fu); f_12d3b6c0();
  /* 12d39b2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d39b32 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12d39b35 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d39b39 jge 0x12d39b45 */
  if ((C.sf==C.of)) goto L_12d39b45;
  /* 12d39b3b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_12d39b45:;
  /* 12d39b45 jmp 0x12d39b6d */
  goto L_12d39b6d;
L_12d39b47:;
  /* 12d39b47 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12d39b4a push eax */
  push32((uint32_t)(EAX));
  /* 12d39b4b call 0x12d3a5a0 */
  push32(0x12d39b50u); f_12d3a5a0();
  /* 12d39b50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d39b53 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 12d39b5a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 12d39b60 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 12d39b66 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_12d39b6d:;
  /* 12d39b6d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 12d39b73 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12d39b76 jmp 0x12d3a197 */
  goto L_12d3a197;
L_12d39b7b:;
  /* 12d39b7b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12d39b7e push eax */
  push32((uint32_t)(EAX));
  /* 12d39b7f call 0x12d3a5a0 */
  push32(0x12d39b84u); f_12d3a5a0();
  /* 12d39b84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d39b87 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 12d39b8d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d39b94 je 0x12d39ba2 */
  if (C.zf) goto L_12d39ba2;
  /* 12d39b96 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12d39b9c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d39ba0 jne 0x12d39bbc */
  if (!C.zf) goto L_12d39bbc;
L_12d39ba2:;
  /* 12d39ba2 mov edx, dword ptr [0x12d4cfd0] */
  EDX = (r32((uint32_t)(0x12d4cfd0)));
  /* 12d39ba8 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12d39bab mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d39bae push eax */
  push32((uint32_t)(EAX));
  /* 12d39baf call 0x12d35600 */
  push32(0x12d39bb4u); f_12d35600();
  /* 12d39bb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d39bb7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12d39bba jmp 0x12d39c0b */
  goto L_12d39c0b;
L_12d39bbc:;
  /* 12d39bbc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d39bbf and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 12d39bc5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d39bc7 je 0x12d39bec */
  if (C.zf) goto L_12d39bec;
  /* 12d39bc9 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12d39bcf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12d39bd2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12d39bd5 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12d39bdb movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 12d39bde shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12d39be0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12d39be3 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 12d39bea jmp 0x12d39c0b */
  goto L_12d39c0b;
L_12d39bec:;
  /* 12d39bec mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12d39bf3 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12d39bf9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d39bfc mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12d39bff mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12d39c05 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 12d39c08 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12d39c0b:;
  /* 12d39c0b jmp 0x12d3a197 */
  goto L_12d3a197;
L_12d39c10:;
  /* 12d39c10 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d39c13 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 12d39c19 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d39c1b jne 0x12d39c26 */
  if (!C.zf) goto L_12d39c26;
  /* 12d39c1d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d39c20 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12d39c23 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12d39c26:;
  /* 12d39c26 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d39c2d jne 0x12d39c3b */
  if (!C.zf) goto L_12d39c3b;
  /* 12d39c2f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 12d39c39 jmp 0x12d39c47 */
  goto L_12d39c47;
L_12d39c3b:;
  /* 12d39c3b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 12d39c41 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_12d39c47:;
  /* 12d39c47 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 12d39c4d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 12d39c53 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12d39c56 push edx */
  push32((uint32_t)(EDX));
  /* 12d39c57 call 0x12d3a5a0 */
  push32(0x12d39c5cu); f_12d3a5a0();
  /* 12d39c5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d39c5f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12d39c62 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d39c65 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 12d39c6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d39c6c je 0x12d39cd6 */
  if (C.zf) goto L_12d39cd6;
  /* 12d39c6e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d39c72 jne 0x12d39c7d */
  if (!C.zf) goto L_12d39c7d;
  /* 12d39c74 mov ecx, dword ptr [0x12d4cfd4] */
  ECX = (r32((uint32_t)(0x12d4cfd4)));
  /* 12d39c7a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12d39c7d:;
  /* 12d39c7d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 12d39c84 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d39c87 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_12d39c8d:;
  /* 12d39c8d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 12d39c93 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 12d39c99 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d39c9c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 12d39ca2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d39ca4 je 0x12d39cc6 */
  if (C.zf) goto L_12d39cc6;
  /* 12d39ca6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 12d39cac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d39cae mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 12d39cb1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d39cb3 je 0x12d39cc6 */
  if (C.zf) goto L_12d39cc6;
  /* 12d39cb5 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 12d39cbb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d39cbe mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 12d39cc4 jmp 0x12d39c8d */
  goto L_12d39c8d;
L_12d39cc6:;
  /* 12d39cc6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 12d39ccc sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d39ccf sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12d39cd1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12d39cd4 jmp 0x12d39d30 */
  goto L_12d39d30;
L_12d39cd6:;
  /* 12d39cd6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d39cda jne 0x12d39ce4 */
  if (!C.zf) goto L_12d39ce4;
  /* 12d39cdc mov eax, dword ptr [0x12d4cfd0] */
  EAX = (r32((uint32_t)(0x12d4cfd0)));
  /* 12d39ce1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_12d39ce4:;
  /* 12d39ce4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d39ce7 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_12d39ced:;
  /* 12d39ced mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 12d39cf3 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 12d39cf9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d39cfc mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 12d39d02 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d39d04 je 0x12d39d24 */
  if (C.zf) goto L_12d39d24;
  /* 12d39d06 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 12d39d0c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d39d0f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d39d11 je 0x12d39d24 */
  if (C.zf) goto L_12d39d24;
  /* 12d39d13 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 12d39d19 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d39d1c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 12d39d22 jmp 0x12d39ced */
  goto L_12d39ced;
L_12d39d24:;
  /* 12d39d24 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 12d39d2a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d39d2d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_12d39d30:;
  /* 12d39d30 jmp 0x12d3a197 */
  goto L_12d3a197;
L_12d39d35:;
  /* 12d39d35 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12d39d38 push edx */
  push32((uint32_t)(EDX));
  /* 12d39d39 call 0x12d3a5a0 */
  push32(0x12d39d3eu); f_12d3a5a0();
  /* 12d39d3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d39d41 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 12d39d47 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d39d4a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12d39d4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d39d4f je 0x12d39d63 */
  if (C.zf) goto L_12d39d63;
  /* 12d39d51 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 12d39d57 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 12d39d5e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 12d39d61 jmp 0x12d39d71 */
  goto L_12d39d71;
L_12d39d63:;
  /* 12d39d63 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 12d39d69 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 12d39d6f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_12d39d71:;
  /* 12d39d71 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 12d39d7b jmp 0x12d3a197 */
  goto L_12d3a197;
L_12d39d80:;
  /* 12d39d80 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12d39d87 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 12d39d8a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d39d8d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_12d39d90:;
  /* 12d39d90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d39d93 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 12d39d95 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d39d98 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 12d39d9e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12d39da1 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d39da8 jge 0x12d39db6 */
  if ((C.sf==C.of)) goto L_12d39db6;
  /* 12d39daa mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 12d39db4 jmp 0x12d39dd2 */
  goto L_12d39dd2;
L_12d39db6:;
  /* 12d39db6 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d39dbd jne 0x12d39dd2 */
  if (!C.zf) goto L_12d39dd2;
  /* 12d39dbf movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12d39dc3 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d39dc6 jne 0x12d39dd2 */
  if (!C.zf) goto L_12d39dd2;
  /* 12d39dc8 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_12d39dd2:;
  /* 12d39dd2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d39dd5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d39dd8 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 12d39ddb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d39dde sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d39de1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d39de3 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d39de6 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 12d39dec mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 12d39df2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d39df5 push ecx */
  push32((uint32_t)(ECX));
  /* 12d39df6 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 12d39dfc push edx */
  push32((uint32_t)(EDX));
  /* 12d39dfd movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12d39e01 push eax */
  push32((uint32_t)(EAX));
  /* 12d39e02 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d39e05 push ecx */
  push32((uint32_t)(ECX));
  /* 12d39e06 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 12d39e0c push edx */
  push32((uint32_t)(EDX));
  /* 12d39e0d call dword ptr [0x12d4d3c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d4d3c0))), 0x12d39e13u);
  /* 12d39e13 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d39e16 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d39e19 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 12d39e1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d39e20 je 0x12d39e38 */
  if (C.zf) goto L_12d39e38;
  /* 12d39e22 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d39e29 jne 0x12d39e38 */
  if (!C.zf) goto L_12d39e38;
  /* 12d39e2b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d39e2e push ecx */
  push32((uint32_t)(ECX));
  /* 12d39e2f call dword ptr [0x12d4d3cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d4d3cc))), 0x12d39e35u);
  /* 12d39e35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d39e38:;
  /* 12d39e38 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12d39e3c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d39e3f jne 0x12d39e5a */
  if (!C.zf) goto L_12d39e5a;
  /* 12d39e41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d39e44 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 12d39e49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d39e4b jne 0x12d39e5a */
  if (!C.zf) goto L_12d39e5a;
  /* 12d39e4d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d39e50 push ecx */
  push32((uint32_t)(ECX));
  /* 12d39e51 call dword ptr [0x12d4d3c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d4d3c4))), 0x12d39e57u);
  /* 12d39e57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d39e5a:;
  /* 12d39e5a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d39e5d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d39e60 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d39e63 jne 0x12d39e77 */
  if (!C.zf) goto L_12d39e77;
  /* 12d39e65 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d39e68 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12d39e6b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d39e6e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d39e71 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d39e74 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12d39e77:;
  /* 12d39e77 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d39e7a push eax */
  push32((uint32_t)(EAX));
  /* 12d39e7b call 0x12d35600 */
  push32(0x12d39e80u); f_12d35600();
  /* 12d39e80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d39e83 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12d39e86 jmp 0x12d3a197 */
  goto L_12d3a197;
L_12d39e8b:;
  /* 12d39e8b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d39e8e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 12d39e91 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d39e94 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 12d39e9e jmp 0x12d39f25 */
  goto L_12d39f25;
L_12d39ea3:;
  /* 12d39ea3 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 12d39ead jmp 0x12d39f25 */
  goto L_12d39f25;
L_12d39eaf:;
  /* 12d39eaf mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_12d39eb9:;
  /* 12d39eb9 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 12d39ec3 jmp 0x12d39ecf */
  goto L_12d39ecf;
L_12d39ec5:;
  /* 12d39ec5 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_12d39ecf:;
  /* 12d39ecf mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 12d39ed9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d39edc and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 12d39ee2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d39ee4 je 0x12d39f03 */
  if (C.zf) goto L_12d39f03;
  /* 12d39ee6 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 12d39eed mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 12d39ef3 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d39ef6 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 12d39efc mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_12d39f03:;
  /* 12d39f03 jmp 0x12d39f25 */
  goto L_12d39f25;
L_12d39f05:;
  /* 12d39f05 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 12d39f0f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d39f12 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 12d39f18 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d39f1a je 0x12d39f25 */
  if (C.zf) goto L_12d39f25;
  /* 12d39f1c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d39f1f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12d39f22 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12d39f25:;
  /* 12d39f25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d39f28 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12d39f2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d39f2f je 0x12d39f4e */
  if (C.zf) goto L_12d39f4e;
  /* 12d39f31 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12d39f34 push ecx */
  push32((uint32_t)(ECX));
  /* 12d39f35 call 0x12d3a5c0 */
  push32(0x12d39f3au); f_12d3a5c0();
  /* 12d39f3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d39f3d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12d39f43 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 12d39f49 jmp 0x12d39fdf */
  goto L_12d39fdf;
L_12d39f4e:;
  /* 12d39f4e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d39f51 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 12d39f54 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d39f56 je 0x12d39fa0 */
  if (C.zf) goto L_12d39fa0;
  /* 12d39f58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d39f5b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12d39f5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d39f60 je 0x12d39f80 */
  if (C.zf) goto L_12d39f80;
  /* 12d39f62 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12d39f65 push ecx */
  push32((uint32_t)(ECX));
  /* 12d39f66 call 0x12d3a5a0 */
  push32(0x12d39f6bu); f_12d3a5a0();
  /* 12d39f6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d39f6e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 12d39f71 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d39f72 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12d39f78 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 12d39f7e jmp 0x12d39f9e */
  goto L_12d39f9e;
L_12d39f80:;
  /* 12d39f80 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12d39f83 push edx */
  push32((uint32_t)(EDX));
  /* 12d39f84 call 0x12d3a5a0 */
  push32(0x12d39f89u); f_12d3a5a0();
  /* 12d39f89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d39f8c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d39f91 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d39f92 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12d39f98 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_12d39f9e:;
  /* 12d39f9e jmp 0x12d39fdf */
  goto L_12d39fdf;
L_12d39fa0:;
  /* 12d39fa0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d39fa3 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12d39fa6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d39fa8 je 0x12d39fc5 */
  if (C.zf) goto L_12d39fc5;
  /* 12d39faa lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12d39fad push ecx */
  push32((uint32_t)(ECX));
  /* 12d39fae call 0x12d3a5a0 */
  push32(0x12d39fb3u); f_12d3a5a0();
  /* 12d39fb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d39fb6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d39fb7 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12d39fbd mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 12d39fc3 jmp 0x12d39fdf */
  goto L_12d39fdf;
L_12d39fc5:;
  /* 12d39fc5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12d39fc8 push edx */
  push32((uint32_t)(EDX));
  /* 12d39fc9 call 0x12d3a5a0 */
  push32(0x12d39fceu); f_12d3a5a0();
  /* 12d39fce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d39fd1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d39fd3 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12d39fd9 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_12d39fdf:;
  /* 12d39fdf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d39fe2 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 12d39fe5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d39fe7 je 0x12d3a027 */
  if (C.zf) goto L_12d3a027;
  /* 12d39fe9 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d39ff0 jg 0x12d3a027 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d3a027;
  /* 12d39ff2 jl 0x12d39ffd */
  if ((C.sf!=C.of)) goto L_12d39ffd;
  /* 12d39ff4 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d39ffb jae 0x12d3a027 */
  if (!C.cf) goto L_12d3a027;
L_12d39ffd:;
  /* 12d39ffd mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 12d3a003 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d3a005 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 12d3a00b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3a00e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d3a010 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12d3a016 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 12d3a01c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3a01f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12d3a022 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d3a025 jmp 0x12d3a03f */
  goto L_12d3a03f;
L_12d3a027:;
  /* 12d3a027 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 12d3a02d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12d3a033 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 12d3a039 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_12d3a03f:;
  /* 12d3a03f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3a042 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12d3a048 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d3a04a jne 0x12d3a067 */
  if (!C.zf) goto L_12d3a067;
  /* 12d3a04c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12d3a052 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 12d3a058 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 12d3a05b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12d3a061 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_12d3a067:;
  /* 12d3a067 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3a06e jge 0x12d3a07c */
  if ((C.sf==C.of)) goto L_12d3a07c;
  /* 12d3a070 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 12d3a07a jmp 0x12d3a085 */
  goto L_12d3a085;
L_12d3a07c:;
  /* 12d3a07c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3a07f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 12d3a082 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12d3a085:;
  /* 12d3a085 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12d3a08b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 12d3a091 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3a093 jne 0x12d3a09c */
  if (!C.zf) goto L_12d3a09c;
  /* 12d3a095 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12d3a09c:;
  /* 12d3a09c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 12d3a09f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12d3a0a2:;
  /* 12d3a0a2 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 12d3a0a8 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 12d3a0ae sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3a0b1 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 12d3a0b7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d3a0b9 jg 0x12d3a0cf */
  if ((!C.zf&&C.sf==C.of)) goto L_12d3a0cf;
  /* 12d3a0bb mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12d3a0c1 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 12d3a0c7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d3a0c9 je 0x12d3a150 */
  if (C.zf) goto L_12d3a150;
L_12d3a0cf:;
  /* 12d3a0cf mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 12d3a0d5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d3a0d6 push edx */
  push32((uint32_t)(EDX));
  /* 12d3a0d7 push eax */
  push32((uint32_t)(EAX));
  /* 12d3a0d8 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 12d3a0de push edx */
  push32((uint32_t)(EDX));
  /* 12d3a0df mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12d3a0e5 push eax */
  push32((uint32_t)(EAX));
  /* 12d3a0e6 call 0x12d39460 */
  push32(0x12d3a0ebu); f_12d39460();
  /* 12d3a0eb add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3a0ee mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 12d3a0f4 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 12d3a0fa cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d3a0fb push edx */
  push32((uint32_t)(EDX));
  /* 12d3a0fc push eax */
  push32((uint32_t)(EAX));
  /* 12d3a0fd mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 12d3a103 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3a104 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12d3a10a push edx */
  push32((uint32_t)(EDX));
  /* 12d3a10b call 0x12d393f0 */
  push32(0x12d3a110u); f_12d393f0();
  /* 12d3a110 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12d3a116 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 12d3a11c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3a123 jle 0x12d3a137 */
  if ((C.zf||C.sf!=C.of)) goto L_12d3a137;
  /* 12d3a125 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 12d3a12b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3a131 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_12d3a137:;
  /* 12d3a137 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d3a13a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 12d3a140 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 12d3a142 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d3a145 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3a148 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12d3a14b jmp 0x12d3a0a2 */
  goto L_12d3a0a2;
L_12d3a150:;
  /* 12d3a150 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 12d3a153 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3a156 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12d3a159 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d3a15c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3a15f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12d3a162 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3a165 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 12d3a16a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3a16c je 0x12d3a197 */
  if (C.zf) goto L_12d3a197;
  /* 12d3a16e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d3a171 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d3a174 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3a177 jne 0x12d3a17f */
  if (!C.zf) goto L_12d3a17f;
  /* 12d3a179 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3a17d jne 0x12d3a197 */
  if (!C.zf) goto L_12d3a197;
L_12d3a17f:;
  /* 12d3a17f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d3a182 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3a185 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12d3a188 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d3a18b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 12d3a18e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d3a191 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3a194 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_12d3a197:;
  /* 12d3a197 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3a19e jne 0x12d3a372 */
  if (!C.zf) goto L_12d3a372;
  /* 12d3a1a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3a1a7 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12d3a1aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3a1ac je 0x12d3a1fd */
  if (C.zf) goto L_12d3a1fd;
  /* 12d3a1ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3a1b1 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 12d3a1b7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d3a1b9 je 0x12d3a1cb */
  if (C.zf) goto L_12d3a1cb;
  /* 12d3a1bb mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 12d3a1c2 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12d3a1c9 jmp 0x12d3a1fd */
  goto L_12d3a1fd;
L_12d3a1cb:;
  /* 12d3a1cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3a1ce and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12d3a1d1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d3a1d3 je 0x12d3a1e5 */
  if (C.zf) goto L_12d3a1e5;
  /* 12d3a1d5 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 12d3a1dc mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12d3a1e3 jmp 0x12d3a1fd */
  goto L_12d3a1fd;
L_12d3a1e5:;
  /* 12d3a1e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3a1e8 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 12d3a1eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3a1ed je 0x12d3a1fd */
  if (C.zf) goto L_12d3a1fd;
  /* 12d3a1ef mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 12d3a1f6 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_12d3a1fd:;
  /* 12d3a1fd mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 12d3a203 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3a206 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3a209 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 12d3a20f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3a212 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 12d3a215 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d3a217 jne 0x12d3a235 */
  if (!C.zf) goto L_12d3a235;
  /* 12d3a219 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12d3a21f push eax */
  push32((uint32_t)(EAX));
  /* 12d3a220 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3a223 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3a224 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 12d3a22a push edx */
  push32((uint32_t)(EDX));
  /* 12d3a22b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12d3a22d call 0x12d3a510 */
  push32(0x12d3a232u); f_12d3a510();
  /* 12d3a232 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d3a235:;
  /* 12d3a235 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12d3a23b push eax */
  push32((uint32_t)(EAX));
  /* 12d3a23c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3a23f push ecx */
  push32((uint32_t)(ECX));
  /* 12d3a240 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3a243 push edx */
  push32((uint32_t)(EDX));
  /* 12d3a244 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 12d3a24a push eax */
  push32((uint32_t)(EAX));
  /* 12d3a24b call 0x12d3a550 */
  push32(0x12d3a250u); f_12d3a550();
  /* 12d3a250 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3a253 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3a256 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12d3a259 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d3a25b je 0x12d3a283 */
  if (C.zf) goto L_12d3a283;
  /* 12d3a25d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3a260 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12d3a263 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d3a265 jne 0x12d3a283 */
  if (!C.zf) goto L_12d3a283;
  /* 12d3a267 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12d3a26d push eax */
  push32((uint32_t)(EAX));
  /* 12d3a26e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3a271 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3a272 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 12d3a278 push edx */
  push32((uint32_t)(EDX));
  /* 12d3a279 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12d3a27b call 0x12d3a510 */
  push32(0x12d3a280u); f_12d3a510();
  /* 12d3a280 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d3a283:;
  /* 12d3a283 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3a287 je 0x12d3a331 */
  if (C.zf) goto L_12d3a331;
  /* 12d3a28d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3a291 jle 0x12d3a331 */
  if ((C.zf||C.sf!=C.of)) goto L_12d3a331;
  /* 12d3a297 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d3a29a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 12d3a2a0 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d3a2a3 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_12d3a2a9:;
  /* 12d3a2a9 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 12d3a2af mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 12d3a2b5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3a2b8 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 12d3a2be test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d3a2c0 je 0x12d3a32f */
  if (C.zf) goto L_12d3a32f;
  /* 12d3a2c2 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 12d3a2c8 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12d3a2cb mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 12d3a2d2 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 12d3a2d9 push eax */
  push32((uint32_t)(EAX));
  /* 12d3a2da lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 12d3a2e0 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3a2e1 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 12d3a2e7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3a2ea mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 12d3a2f0 call 0x12d3b6c0 */
  push32(0x12d3a2f5u); f_12d3b6c0();
  /* 12d3a2f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3a2f8 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 12d3a2fe cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3a305 jg 0x12d3a309 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d3a309;
  /* 12d3a307 jmp 0x12d3a32f */
  goto L_12d3a32f;
L_12d3a309:;
  /* 12d3a309 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12d3a30f push eax */
  push32((uint32_t)(EAX));
  /* 12d3a310 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3a313 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3a314 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 12d3a31a push edx */
  push32((uint32_t)(EDX));
  /* 12d3a31b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 12d3a321 push eax */
  push32((uint32_t)(EAX));
  /* 12d3a322 call 0x12d3a550 */
  push32(0x12d3a327u); f_12d3a550();
  /* 12d3a327 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3a32a jmp 0x12d3a2a9 */
  goto L_12d3a2a9;
L_12d3a32f:;
  /* 12d3a32f jmp 0x12d3a34c */
  goto L_12d3a34c;
L_12d3a331:;
  /* 12d3a331 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 12d3a337 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3a338 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3a33b push edx */
  push32((uint32_t)(EDX));
  /* 12d3a33c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d3a33f push eax */
  push32((uint32_t)(EAX));
  /* 12d3a340 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d3a343 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3a344 call 0x12d3a550 */
  push32(0x12d3a349u); f_12d3a550();
  /* 12d3a349 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d3a34c:;
  /* 12d3a34c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3a34f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12d3a352 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d3a354 je 0x12d3a372 */
  if (C.zf) goto L_12d3a372;
  /* 12d3a356 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12d3a35c push eax */
  push32((uint32_t)(EAX));
  /* 12d3a35d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3a360 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3a361 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 12d3a367 push edx */
  push32((uint32_t)(EDX));
  /* 12d3a368 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12d3a36a call 0x12d3a510 */
  push32(0x12d3a36fu); f_12d3a510();
  /* 12d3a36f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d3a372:;
  /* 12d3a372 jmp 0x12d39784 */
  goto L_12d39784;
L_12d3a377:;
  /* 12d3a377 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 12d3a37d pop edi */
  EDI = (pop32());
  /* 12d3a37e pop esi */
  ESI = (pop32());
  /* 12d3a37f pop ebx */
  EBX = (pop32());
  /* 12d3a380 mov esp, ebp */
  ESP = (EBP);
  /* 12d3a382 pop ebp */
  EBP = (pop32());
  /* 12d3a383 ret  */
  ESPCHK(0x12d39760u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a490 @ 0x12d3a490 (119 bytes, 44 insns) */
void f_12d3a490(void) {
  FTRACE(0x12d3a490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3a490 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3a491 mov ebp, esp */
  EBP = (ESP);
  /* 12d3a493 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3a494 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3a497 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d3a49a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3a49d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3a4a0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12d3a4a3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3a4a6 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3a4aa jl 0x12d3a4d2 */
  if ((C.sf!=C.of)) goto L_12d3a4d2;
  /* 12d3a4ac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3a4af mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d3a4b1 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12d3a4b4 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12d3a4b6 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 12d3a4ba and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d3a4c0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d3a4c3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3a4c6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d3a4c8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3a4cb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3a4ce mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12d3a4d0 jmp 0x12d3a4e5 */
  goto L_12d3a4e5;
L_12d3a4d2:;
  /* 12d3a4d2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3a4d5 push edx */
  push32((uint32_t)(EDX));
  /* 12d3a4d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3a4d9 push eax */
  push32((uint32_t)(EAX));
  /* 12d3a4da call 0x12d394e0 */
  push32(0x12d3a4dfu); f_12d394e0();
  /* 12d3a4df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3a4e2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d3a4e5:;
  /* 12d3a4e5 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3a4e9 jne 0x12d3a4f6 */
  if (!C.zf) goto L_12d3a4f6;
  /* 12d3a4eb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3a4ee mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12d3a4f4 jmp 0x12d3a503 */
  goto L_12d3a503;
L_12d3a4f6:;
  /* 12d3a4f6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3a4f9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d3a4fb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3a4fe mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3a501 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12d3a503:;
  /* 12d3a503 mov esp, ebp */
  ESP = (EBP);
  /* 12d3a505 pop ebp */
  EBP = (pop32());
  /* 12d3a506 ret  */
  ESPCHK(0x12d3a490u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a510 @ 0x12d3a510 (53 bytes, 23 insns) */
void f_12d3a510(void) {
  FTRACE(0x12d3a510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3a510 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3a511 mov ebp, esp */
  EBP = (ESP);
L_12d3a513:;
  /* 12d3a513 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3a516 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3a519 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3a51c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12d3a51f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3a521 jle 0x12d3a543 */
  if ((C.zf||C.sf!=C.of)) goto L_12d3a543;
  /* 12d3a523 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d3a526 push edx */
  push32((uint32_t)(EDX));
  /* 12d3a527 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3a52a push eax */
  push32((uint32_t)(EAX));
  /* 12d3a52b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3a52e push ecx */
  push32((uint32_t)(ECX));
  /* 12d3a52f call 0x12d3a490 */
  push32(0x12d3a534u); f_12d3a490();
  /* 12d3a534 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3a537 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d3a53a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3a53d jne 0x12d3a541 */
  if (!C.zf) goto L_12d3a541;
  /* 12d3a53f jmp 0x12d3a543 */
  goto L_12d3a543;
L_12d3a541:;
  /* 12d3a541 jmp 0x12d3a513 */
  goto L_12d3a513;
L_12d3a543:;
  /* 12d3a543 pop ebp */
  EBP = (pop32());
  /* 12d3a544 ret  */
  ESPCHK(0x12d3a510u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a550 @ 0x12d3a550 (74 bytes, 31 insns) */
void f_12d3a550(void) {
  FTRACE(0x12d3a550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3a550 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3a551 mov ebp, esp */
  EBP = (ESP);
  /* 12d3a553 push ecx */
  push32((uint32_t)(ECX));
L_12d3a554:;
  /* 12d3a554 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3a557 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3a55a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3a55d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12d3a560 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3a562 jle 0x12d3a596 */
  if ((C.zf||C.sf!=C.of)) goto L_12d3a596;
  /* 12d3a564 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d3a567 push edx */
  push32((uint32_t)(EDX));
  /* 12d3a568 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3a56b push eax */
  push32((uint32_t)(EAX));
  /* 12d3a56c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3a56f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d3a572 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d3a575 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3a578 push eax */
  push32((uint32_t)(EAX));
  /* 12d3a579 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3a57c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3a57f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12d3a582 call 0x12d3a490 */
  push32(0x12d3a587u); f_12d3a490();
  /* 12d3a587 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3a58a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d3a58d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3a590 jne 0x12d3a594 */
  if (!C.zf) goto L_12d3a594;
  /* 12d3a592 jmp 0x12d3a596 */
  goto L_12d3a596;
L_12d3a594:;
  /* 12d3a594 jmp 0x12d3a554 */
  goto L_12d3a554;
L_12d3a596:;
  /* 12d3a596 mov esp, ebp */
  ESP = (EBP);
  /* 12d3a598 pop ebp */
  EBP = (pop32());
  /* 12d3a599 ret  */
  ESPCHK(0x12d3a550u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a5a0 @ 0x12d3a5a0 (26 bytes, 12 insns) */
void f_12d3a5a0(void) {
  FTRACE(0x12d3a5a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3a5a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3a5a1 mov ebp, esp */
  EBP = (ESP);
  /* 12d3a5a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3a5a6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d3a5a8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3a5ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3a5ae mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12d3a5b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3a5b3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d3a5b5 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12d3a5b8 pop ebp */
  EBP = (pop32());
  /* 12d3a5b9 ret  */
  ESPCHK(0x12d3a5a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a5c0 @ 0x12d3a5c0 (31 bytes, 14 insns) */
void f_12d3a5c0(void) {
  FTRACE(0x12d3a5c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3a5c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3a5c1 mov ebp, esp */
  EBP = (ESP);
  /* 12d3a5c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3a5c6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d3a5c8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3a5cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3a5ce mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12d3a5d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3a5d3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d3a5d5 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3a5d8 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12d3a5da mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d3a5dd pop ebp */
  EBP = (pop32());
  /* 12d3a5de ret  */
  ESPCHK(0x12d3a5c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a5e0 @ 0x12d3a5e0 (27 bytes, 12 insns) */
void f_12d3a5e0(void) {
  FTRACE(0x12d3a5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3a5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3a5e1 mov ebp, esp */
  EBP = (ESP);
  /* 12d3a5e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3a5e6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d3a5e8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3a5eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3a5ee mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12d3a5f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3a5f3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d3a5f5 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 12d3a5f9 pop ebp */
  EBP = (pop32());
  /* 12d3a5fa ret  */
  ESPCHK(0x12d3a5e0u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x12d3a600 (145 bytes, 42 insns) */
void f_12d3a600(void) {
  FTRACE(0x12d3a600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3a600 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3a601 mov ebp, esp */
  EBP = (ESP);
  /* 12d3a603 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3a604 call 0x12d3a6b0 */
  push32(0x12d3a609u); f_12d3a6b0();
  /* 12d3a609 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3a60c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12d3a60e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d3a615 jmp 0x12d3a620 */
  goto L_12d3a620;
L_12d3a617:;
  /* 12d3a617 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3a61a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3a61d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12d3a620:;
  /* 12d3a620 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3a624 jae 0x12d3a64a */
  if (!C.cf) goto L_12d3a64a;
  /* 12d3a626 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3a629 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3a62c cmp ecx, dword ptr [eax*8 + 0x12d4cfd8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12d4cfd8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3a633 jne 0x12d3a648 */
  if (!C.zf) goto L_12d3a648;
  /* 12d3a635 call 0x12d3a6a0 */
  push32(0x12d3a63au); f_12d3a6a0();
  /* 12d3a63a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3a63d mov ecx, dword ptr [edx*8 + 0x12d4cfdc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x12d4cfdc)));
  /* 12d3a644 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12d3a646 jmp 0x12d3a68d */
  goto L_12d3a68d;
L_12d3a648:;
  /* 12d3a648 jmp 0x12d3a617 */
  goto L_12d3a617;
L_12d3a64a:;
  /* 12d3a64a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3a64e jb 0x12d3a663 */
  if (C.cf) goto L_12d3a663;
  /* 12d3a650 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3a654 ja 0x12d3a663 */
  if ((!C.cf&&!C.zf)) goto L_12d3a663;
  /* 12d3a656 call 0x12d3a6a0 */
  push32(0x12d3a65bu); f_12d3a6a0();
  /* 12d3a65b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 12d3a661 jmp 0x12d3a68d */
  goto L_12d3a68d;
L_12d3a663:;
  /* 12d3a663 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3a66a jb 0x12d3a682 */
  if (C.cf) goto L_12d3a682;
  /* 12d3a66c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3a673 ja 0x12d3a682 */
  if ((!C.cf&&!C.zf)) goto L_12d3a682;
  /* 12d3a675 call 0x12d3a6a0 */
  push32(0x12d3a67au); f_12d3a6a0();
  /* 12d3a67a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 12d3a680 jmp 0x12d3a68d */
  goto L_12d3a68d;
L_12d3a682:;
  /* 12d3a682 call 0x12d3a6a0 */
  push32(0x12d3a687u); f_12d3a6a0();
  /* 12d3a687 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_12d3a68d:;
  /* 12d3a68d mov esp, ebp */
  ESP = (EBP);
  /* 12d3a68f pop ebp */
  EBP = (pop32());
  /* 12d3a690 ret  */
  ESPCHK(0x12d3a600u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a6a0 @ 0x12d3a6a0 (13 bytes, 6 insns) */
void f_12d3a6a0(void) {
  FTRACE(0x12d3a6a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3a6a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3a6a1 mov ebp, esp */
  EBP = (ESP);
  /* 12d3a6a3 call 0x12d32210 */
  push32(0x12d3a6a8u); f_12d32210();
  /* 12d3a6a8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3a6ab pop ebp */
  EBP = (pop32());
  /* 12d3a6ac ret  */
  ESPCHK(0x12d3a6a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a6b0 @ 0x12d3a6b0 (13 bytes, 6 insns) */
void f_12d3a6b0(void) {
  FTRACE(0x12d3a6b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3a6b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3a6b1 mov ebp, esp */
  EBP = (ESP);
  /* 12d3a6b3 call 0x12d32210 */
  push32(0x12d3a6b8u); f_12d32210();
  /* 12d3a6b8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3a6bb pop ebp */
  EBP = (pop32());
  /* 12d3a6bc ret  */
  ESPCHK(0x12d3a6b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a6c0 @ 0x12d3a6c0 (664 bytes, 261 insns) [15 switch table(s)] */
void f_12d3a6c0(void) {
  FTRACE(0x12d3a6c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3a6c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3a6c1 mov ebp, esp */
  EBP = (ESP);
  /* 12d3a6c3 push edi */
  push32((uint32_t)(EDI));
  /* 12d3a6c4 push esi */
  push32((uint32_t)(ESI));
  /* 12d3a6c5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3a6c8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3a6cb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3a6ce mov eax, ecx */
  EAX = (ECX);
  /* 12d3a6d0 mov edx, ecx */
  EDX = (ECX);
  /* 12d3a6d2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3a6d4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3a6d6 jbe 0x12d3a6e0 */
  if ((C.cf||C.zf)) goto L_12d3a6e0;
  /* 12d3a6d8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3a6da jb 0x12d3a858 */
  if (C.cf) goto L_12d3a858;
L_12d3a6e0:;
  /* 12d3a6e0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12d3a6e6 jne 0x12d3a6fc */
  if (!C.zf) goto L_12d3a6fc;
  /* 12d3a6e8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d3a6eb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12d3a6ee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3a6f1 jb 0x12d3a71c */
  if (C.cf) goto L_12d3a71c;
  /* 12d3a6f3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12d3a6f5 jmp dword ptr [edx*4 + 0x12d3a808] */
  switch (EDX) {
    case 0: goto L_12d3a818;
    case 1: goto L_12d3a820;
    case 2: goto L_12d3a82c;
    case 3: goto L_12d3a840;
    default: x86_unimpl("switch@0x12d3a6f5 out of table"); return;
  }
L_12d3a6fc:;
  /* 12d3a6fc mov eax, edi */
  EAX = (EDI);
  /* 12d3a6fe mov edx, 3 */
  EDX = (0x3u);
  /* 12d3a703 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3a706 jb 0x12d3a714 */
  if (C.cf) goto L_12d3a714;
  /* 12d3a708 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12d3a70b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3a70d jmp dword ptr [eax*4 + 0x12d3a720] */
  switch (EAX) {
    case 1: goto L_12d3a730;
    case 2: goto L_12d3a75c;
    case 3: goto L_12d3a780;
    default: x86_unimpl("switch@0x12d3a70d out of table"); return;
  }
L_12d3a714:;
  /* 12d3a714 jmp dword ptr [ecx*4 + 0x12d3a818] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x12d3a818)))); return;
  /* 12d3a71b nop  */
  /* nop */
L_12d3a71c:;
  /* 12d3a71c jmp dword ptr [ecx*4 + 0x12d3a79c] */
  switch (ECX) {
    case 0: goto L_12d3a7ff;
    case 1: goto L_12d3a7ec;
    case 2: goto L_12d3a7e4;
    case 3: goto L_12d3a7dc;
    case 4: goto L_12d3a7d4;
    case 5: goto L_12d3a7cc;
    case 6: goto L_12d3a7c4;
    case 7: goto L_12d3a7bc;
    default: x86_unimpl("switch@0x12d3a71c out of table"); return;
  }
  /* 12d3a723 nop  */
  /* nop */
L_12d3a730:;
  /* 12d3a730 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12d3a732 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d3a734 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12d3a736 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12d3a739 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12d3a73c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12d3a73f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d3a742 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12d3a745 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3a748 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3a74b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3a74e jb 0x12d3a71c */
  if (C.cf) goto L_12d3a71c;
  /* 12d3a750 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12d3a752 jmp dword ptr [edx*4 + 0x12d3a808] */
  switch (EDX) {
    case 0: goto L_12d3a818;
    case 1: goto L_12d3a820;
    case 2: goto L_12d3a82c;
    case 3: goto L_12d3a840;
    default: x86_unimpl("switch@0x12d3a752 out of table"); return;
  }
  /* 12d3a759 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12d3a75c:;
  /* 12d3a75c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12d3a75e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d3a760 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12d3a762 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12d3a765 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d3a768 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12d3a76b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3a76e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3a771 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3a774 jb 0x12d3a71c */
  if (C.cf) goto L_12d3a71c;
  /* 12d3a776 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12d3a778 jmp dword ptr [edx*4 + 0x12d3a808] */
  switch (EDX) {
    case 0: goto L_12d3a818;
    case 1: goto L_12d3a820;
    case 2: goto L_12d3a82c;
    case 3: goto L_12d3a840;
    default: x86_unimpl("switch@0x12d3a778 out of table"); return;
  }
  /* 12d3a77f nop  */
  /* nop */
L_12d3a780:;
  /* 12d3a780 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12d3a782 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d3a784 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12d3a786 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12d3a787 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d3a78a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12d3a78b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3a78e jb 0x12d3a71c */
  if (C.cf) goto L_12d3a71c;
  /* 12d3a790 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12d3a792 jmp dword ptr [edx*4 + 0x12d3a808] */
  switch (EDX) {
    case 0: goto L_12d3a818;
    case 1: goto L_12d3a820;
    case 2: goto L_12d3a82c;
    case 3: goto L_12d3a840;
    default: x86_unimpl("switch@0x12d3a792 out of table"); return;
  }
  /* 12d3a799 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12d3a7bc:;
  /* 12d3a7bc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 12d3a7c0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_12d3a7c4:;
  /* 12d3a7c4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 12d3a7c8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_12d3a7cc:;
  /* 12d3a7cc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 12d3a7d0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_12d3a7d4:;
  /* 12d3a7d4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 12d3a7d8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_12d3a7dc:;
  /* 12d3a7dc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 12d3a7e0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_12d3a7e4:;
  /* 12d3a7e4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 12d3a7e8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_12d3a7ec:;
  /* 12d3a7ec mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 12d3a7f0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 12d3a7f4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12d3a7fb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3a7fd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12d3a7ff:;
  /* 12d3a7ff jmp dword ptr [edx*4 + 0x12d3a808] */
  switch (EDX) {
    case 0: goto L_12d3a818;
    case 1: goto L_12d3a820;
    case 2: goto L_12d3a82c;
    case 3: goto L_12d3a840;
    default: x86_unimpl("switch@0x12d3a7ff out of table"); return;
  }
  /* 12d3a806 mov edi, edi */
  EDI = (EDI);
L_12d3a818:;
  /* 12d3a818 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3a81b pop esi */
  ESI = (pop32());
  /* 12d3a81c pop edi */
  EDI = (pop32());
  /* 12d3a81d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d3a81e ret  */
  ESPCHK(0x12d3a6c0u, _esp0);
  ESP += 4; return;
  /* 12d3a81f nop  */
  /* nop */
L_12d3a820:;
  /* 12d3a820 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d3a822 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12d3a824 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3a827 pop esi */
  ESI = (pop32());
  /* 12d3a828 pop edi */
  EDI = (pop32());
  /* 12d3a829 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d3a82a ret  */
  ESPCHK(0x12d3a6c0u, _esp0);
  ESP += 4; return;
  /* 12d3a82b nop  */
  /* nop */
L_12d3a82c:;
  /* 12d3a82c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d3a82e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12d3a830 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12d3a833 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12d3a836 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3a839 pop esi */
  ESI = (pop32());
  /* 12d3a83a pop edi */
  EDI = (pop32());
  /* 12d3a83b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d3a83c ret  */
  ESPCHK(0x12d3a6c0u, _esp0);
  ESP += 4; return;
  /* 12d3a83d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12d3a840:;
  /* 12d3a840 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d3a842 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12d3a844 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12d3a847 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12d3a84a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12d3a84d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12d3a850 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3a853 pop esi */
  ESI = (pop32());
  /* 12d3a854 pop edi */
  EDI = (pop32());
  /* 12d3a855 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d3a856 ret  */
  ESPCHK(0x12d3a6c0u, _esp0);
  ESP += 4; return;
  /* 12d3a857 nop  */
  /* nop */
L_12d3a858:;
  /* 12d3a858 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 12d3a85c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 12d3a860 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12d3a866 jne 0x12d3a88c */
  if (!C.zf) goto L_12d3a88c;
  /* 12d3a868 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d3a86b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12d3a86e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3a871 jb 0x12d3a880 */
  if (C.cf) goto L_12d3a880;
  /* 12d3a873 std  */
  C.df=1;
  /* 12d3a874 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12d3a876 cld  */
  C.df=0;
  /* 12d3a877 jmp dword ptr [edx*4 + 0x12d3a9a0] */
  switch (EDX) {
    case 0: goto L_12d3a9b0;
    case 1: goto L_12d3a9b8;
    case 2: goto L_12d3a9c8;
    case 3: goto L_12d3a9dc;
    default: x86_unimpl("switch@0x12d3a877 out of table"); return;
  }
  /* 12d3a87e mov edi, edi */
  EDI = (EDI);
L_12d3a880:;
  /* 12d3a880 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d3a882 jmp dword ptr [ecx*4 + 0x12d3a950] */
  switch (ECX) {
    case 0: goto L_12d3a997;
    default: x86_unimpl("switch@0x12d3a882 out of table"); return;
  }
  /* 12d3a889 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12d3a88c:;
  /* 12d3a88c mov eax, edi */
  EAX = (EDI);
  /* 12d3a88e mov edx, 3 */
  EDX = (0x3u);
  /* 12d3a893 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3a896 jb 0x12d3a8a4 */
  if (C.cf) goto L_12d3a8a4;
  /* 12d3a898 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12d3a89b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3a89d jmp dword ptr [eax*4 + 0x12d3a8a8] */
  switch (EAX) {
    case 1: goto L_12d3a8b8;
    case 2: goto L_12d3a8d8;
    case 3: goto L_12d3a900;
    default: x86_unimpl("switch@0x12d3a89d out of table"); return;
  }
L_12d3a8a4:;
  /* 12d3a8a4 jmp dword ptr [ecx*4 + 0x12d3a9a0] */
  switch (ECX) {
    case 0: goto L_12d3a9b0;
    case 1: goto L_12d3a9b8;
    case 2: goto L_12d3a9c8;
    case 3: goto L_12d3a9dc;
    default: x86_unimpl("switch@0x12d3a8a4 out of table"); return;
  }
  /* 12d3a8ab nop  */
  /* nop */
L_12d3a8b8:;
  /* 12d3a8b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12d3a8bb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12d3a8bd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12d3a8c0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 12d3a8c1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d3a8c4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 12d3a8c5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3a8c8 jb 0x12d3a880 */
  if (C.cf) goto L_12d3a880;
  /* 12d3a8ca std  */
  C.df=1;
  /* 12d3a8cb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12d3a8cd cld  */
  C.df=0;
  /* 12d3a8ce jmp dword ptr [edx*4 + 0x12d3a9a0] */
  switch (EDX) {
    case 0: goto L_12d3a9b0;
    case 1: goto L_12d3a9b8;
    case 2: goto L_12d3a9c8;
    case 3: goto L_12d3a9dc;
    default: x86_unimpl("switch@0x12d3a8ce out of table"); return;
  }
  /* 12d3a8d5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12d3a8d8:;
  /* 12d3a8d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12d3a8db and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12d3a8dd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12d3a8e0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12d3a8e3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d3a8e6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12d3a8e9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3a8ec sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
L_12d3a8ef:;
  /* 12d3a8ef cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3a8f2 jb 0x12d3a880 */
  if (C.cf) goto L_12d3a880;
  /* 12d3a8f4 std  */
  C.df=1;
  /* 12d3a8f5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12d3a8f7 cld  */
  C.df=0;
  /* 12d3a8f8 jmp dword ptr [edx*4 + 0x12d3a9a0] */
  switch (EDX) {
    case 0: goto L_12d3a9b0;
    case 1: goto L_12d3a9b8;
    case 2: goto L_12d3a9c8;
    case 3: goto L_12d3a9dc;
    default: x86_unimpl("switch@0x12d3a8f8 out of table"); return;
  }
  /* 12d3a8ff nop  */
  /* nop */
L_12d3a900:;
  /* 12d3a900 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12d3a903 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12d3a905 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12d3a908 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12d3a90b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12d3a90e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12d3a911 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d3a914 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12d3a917 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3a91a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3a91d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3a920 jb 0x12d3a880 */
  if (C.cf) goto L_12d3a880;
  /* 12d3a926 std  */
  C.df=1;
  /* 12d3a927 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12d3a929 cld  */
  C.df=0;
  /* 12d3a92a jmp dword ptr [edx*4 + 0x12d3a9a0] */
  switch (EDX) {
    case 0: goto L_12d3a9b0;
    case 1: goto L_12d3a9b8;
    case 2: goto L_12d3a9c8;
    case 3: goto L_12d3a9dc;
    default: x86_unimpl("switch@0x12d3a92a out of table"); return;
  }
  /* 12d3a931 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 12d3a934 push esp */
  push32((uint32_t)(ESP));
  /* 12d3a935 test eax, 0xa95c12d3 */
  { uint32_t _r=(EAX)&(0xa95c12d3u); fl_logic(_r,32); }
  /* 12d3a93a rcl dword ptr [edx], cl */
  { uint32_t _v=(r32((uint32_t)(EDX)))&0xffffffffu, _cf=C.cf, _n=(CL)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>31)&1; _v=((_v<<1)|_cf)&0xffffffffu; _cf=_b; } w32((uint32_t)(EDX), (_v)); C.cf=_cf; }
  /* 12d3a93c test eax, 0xa96c12d3 */
  { uint32_t _r=(EAX)&(0xa96c12d3u); fl_logic(_r,32); }
  /* 12d3a942 rcl dword ptr [edx], cl */
  { uint32_t _v=(r32((uint32_t)(EDX)))&0xffffffffu, _cf=C.cf, _n=(CL)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>31)&1; _v=((_v<<1)|_cf)&0xffffffffu; _cf=_b; } w32((uint32_t)(EDX), (_v)); C.cf=_cf; }
  /* 12d3a944 je 0x12d3a8ef */
  if (C.zf) goto L_12d3a8ef;
  /* 12d3a946 rcl dword ptr [edx], cl */
  { uint32_t _v=(r32((uint32_t)(EDX)))&0xffffffffu, _cf=C.cf, _n=(CL)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>31)&1; _v=((_v<<1)|_cf)&0xffffffffu; _cf=_b; } w32((uint32_t)(EDX), (_v)); C.cf=_cf; }
  /* 12d3a948 jl 0x12d3a8f3 */
  if ((C.sf!=C.of)) goto L_12d3a8f3;
  /* 12d3a94a rcl dword ptr [edx], cl */
  { uint32_t _v=(r32((uint32_t)(EDX)))&0xffffffffu, _cf=C.cf, _n=(CL)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>31)&1; _v=((_v<<1)|_cf)&0xffffffffu; _cf=_b; } w32((uint32_t)(EDX), (_v)); C.cf=_cf; }
  /* 12d3a94e rcl dword ptr [edx], cl */
  { uint32_t _v=(r32((uint32_t)(EDX)))&0xffffffffu, _cf=C.cf, _n=(CL)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>31)&1; _v=((_v<<1)|_cf)&0xffffffffu; _cf=_b; } w32((uint32_t)(EDX), (_v)); C.cf=_cf; }
  /* 12d3a954 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 12d3a958 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 12d3a95c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 12d3a960 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 12d3a964 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 12d3a968 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 12d3a96c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 12d3a970 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 12d3a974 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 12d3a978 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 12d3a97c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 12d3a980 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 12d3a984 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 12d3a988 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 12d3a98c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12d3a993 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3a995 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12d3a997:;
  /* 12d3a997 jmp dword ptr [edx*4 + 0x12d3a9a0] */
  switch (EDX) {
    case 0: goto L_12d3a9b0;
    case 1: goto L_12d3a9b8;
    case 2: goto L_12d3a9c8;
    case 3: goto L_12d3a9dc;
    default: x86_unimpl("switch@0x12d3a997 out of table"); return;
  }
  /* 12d3a99e mov edi, edi */
  EDI = (EDI);
L_12d3a9b0:;
  /* 12d3a9b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3a9b3 pop esi */
  ESI = (pop32());
  /* 12d3a9b4 pop edi */
  EDI = (pop32());
  /* 12d3a9b5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d3a9b6 ret  */
  ESPCHK(0x12d3a6c0u, _esp0);
  ESP += 4; return;
  /* 12d3a9b7 nop  */
  /* nop */
L_12d3a9b8:;
  /* 12d3a9b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12d3a9bb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12d3a9be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3a9c1 pop esi */
  ESI = (pop32());
  /* 12d3a9c2 pop edi */
  EDI = (pop32());
  /* 12d3a9c3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d3a9c4 ret  */
  ESPCHK(0x12d3a6c0u, _esp0);
  ESP += 4; return;
  /* 12d3a9c5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12d3a9c8:;
  /* 12d3a9c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12d3a9cb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12d3a9ce mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12d3a9d1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12d3a9d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3a9d7 pop esi */
  ESI = (pop32());
  /* 12d3a9d8 pop edi */
  EDI = (pop32());
  /* 12d3a9d9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d3a9da ret  */
  ESPCHK(0x12d3a6c0u, _esp0);
  ESP += 4; return;
  /* 12d3a9db nop  */
  /* nop */
L_12d3a9dc:;
  /* 12d3a9dc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12d3a9df mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12d3a9e2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12d3a9e5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12d3a9e8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12d3a9eb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12d3a9ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3a9f1 pop esi */
  ESI = (pop32());
  /* 12d3a9f2 pop edi */
  EDI = (pop32());
  /* 12d3a9f3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d3a9f4 ret  */
  ESPCHK(0x12d3a6c0u, _esp0);
  ESP += 4; return;
L_12d3a8f3: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x12d3a8f3 (unresolved jump table)"); return;
}

/* FUN_1000aa00 @ 0x12d3aa00 (421 bytes, 148 insns) */
void f_12d3aa00(void) {
  FTRACE(0x12d3aa00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3aa00 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3aa01 mov ebp, esp */
  EBP = (ESP);
  /* 12d3aa03 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12d3aa05 push 0x12d49f50 */
  push32((uint32_t)(0x12d49f50u));
  /* 12d3aa0a push 0x12d3b8d8 */
  push32((uint32_t)(0x12d3b8d8u));
  /* 12d3aa0f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12d3aa15 push eax */
  push32((uint32_t)(EAX));
  /* 12d3aa16 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12d3aa1d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3aa20 push ebx */
  push32((uint32_t)(EBX));
  /* 12d3aa21 push esi */
  push32((uint32_t)(ESI));
  /* 12d3aa22 push edi */
  push32((uint32_t)(EDI));
  /* 12d3aa23 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12d3aa26 cmp dword ptr [0x12d4e654], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e654))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3aa2d jne 0x12d3aa7e */
  if (!C.zf) goto L_12d3aa7e;
  /* 12d3aa2f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12d3aa32 push eax */
  push32((uint32_t)(EAX));
  /* 12d3aa33 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3aa35 push 0x12d49f4c */
  push32((uint32_t)(0x12d49f4cu));
  /* 12d3aa3a push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3aa3c call dword ptr [0x12d50300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50300))), 0x12d3aa42u);
  /* 12d3aa42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3aa44 je 0x12d3aa52 */
  if (C.zf) goto L_12d3aa52;
  /* 12d3aa46 mov dword ptr [0x12d4e654], 1 */
  w32((uint32_t)(0x12d4e654), (0x1u));
  /* 12d3aa50 jmp 0x12d3aa7e */
  goto L_12d3aa7e;
L_12d3aa52:;
  /* 12d3aa52 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12d3aa55 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3aa56 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3aa58 push 0x12d49f48 */
  push32((uint32_t)(0x12d49f48u));
  /* 12d3aa5d push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3aa5f push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3aa61 call dword ptr [0x12d502fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502fc))), 0x12d3aa67u);
  /* 12d3aa67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3aa69 je 0x12d3aa77 */
  if (C.zf) goto L_12d3aa77;
  /* 12d3aa6b mov dword ptr [0x12d4e654], 2 */
  w32((uint32_t)(0x12d4e654), (0x2u));
  /* 12d3aa75 jmp 0x12d3aa7e */
  goto L_12d3aa7e;
L_12d3aa77:;
  /* 12d3aa77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3aa79 jmp 0x12d3aba8 */
  goto L_12d3aba8;
L_12d3aa7e:;
  /* 12d3aa7e cmp dword ptr [0x12d4e654], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e654))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3aa85 jne 0x12d3aab5 */
  if (!C.zf) goto L_12d3aab5;
  /* 12d3aa87 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3aa8b jne 0x12d3aa96 */
  if (!C.zf) goto L_12d3aa96;
  /* 12d3aa8d mov edx, dword ptr [0x12d4e660] */
  EDX = (r32((uint32_t)(0x12d4e660)));
  /* 12d3aa93 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_12d3aa96:;
  /* 12d3aa96 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d3aa99 push eax */
  push32((uint32_t)(EAX));
  /* 12d3aa9a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3aa9d push ecx */
  push32((uint32_t)(ECX));
  /* 12d3aa9e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3aaa1 push edx */
  push32((uint32_t)(EDX));
  /* 12d3aaa2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3aaa5 push eax */
  push32((uint32_t)(EAX));
  /* 12d3aaa6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12d3aaa9 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3aaaa call dword ptr [0x12d502fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502fc))), 0x12d3aab0u);
  /* 12d3aab0 jmp 0x12d3aba8 */
  goto L_12d3aba8;
L_12d3aab5:;
  /* 12d3aab5 cmp dword ptr [0x12d4e654], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e654))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3aabc jne 0x12d3aba6 */
  if (!C.zf) goto L_12d3aba6;
  /* 12d3aac2 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3aac6 jne 0x12d3aad1 */
  if (!C.zf) goto L_12d3aad1;
  /* 12d3aac8 mov edx, dword ptr [0x12d4e670] */
  EDX = (r32((uint32_t)(0x12d4e670)));
  /* 12d3aace mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_12d3aad1:;
  /* 12d3aad1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3aad3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3aad5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3aad8 push eax */
  push32((uint32_t)(EAX));
  /* 12d3aad9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3aadc push ecx */
  push32((uint32_t)(ECX));
  /* 12d3aadd mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 12d3aae0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d3aae2 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3aae4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12d3aae7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3aaea push edx */
  push32((uint32_t)(EDX));
  /* 12d3aaeb mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d3aaee push eax */
  push32((uint32_t)(EAX));
  /* 12d3aaef call dword ptr [0x12d502f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502f8))), 0x12d3aaf5u);
  /* 12d3aaf5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12d3aaf8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3aafc jne 0x12d3ab05 */
  if (!C.zf) goto L_12d3ab05;
  /* 12d3aafe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3ab00 jmp 0x12d3aba8 */
  goto L_12d3aba8;
L_12d3ab05:;
  /* 12d3ab05 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d3ab0c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d3ab0f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12d3ab11 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3ab14 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12d3ab16 call 0x12d35970 */
  push32(0x12d3ab1bu); f_12d35970();
  /* 12d3ab1b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 12d3ab1e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12d3ab21 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d3ab24 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12d3ab27 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d3ab2a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12d3ab2c push edx */
  push32((uint32_t)(EDX));
  /* 12d3ab2d push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3ab2f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d3ab32 push eax */
  push32((uint32_t)(EAX));
  /* 12d3ab33 call 0x12d36540 */
  push32(0x12d3ab38u); f_12d36540();
  /* 12d3ab38 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3ab3b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12d3ab42 jmp 0x12d3ab5b */
  goto L_12d3ab5b;
  /* 12d3ab44 mov eax, 1 */
  EAX = (0x1u);
  /* 12d3ab49 ret  */
  ESPCHK(0x12d3aa00u, _esp0);
  ESP += 4; return;
  /* 12d3ab4a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12d3ab4d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12d3ab54 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12d3ab5b:;
  /* 12d3ab5b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3ab5f jne 0x12d3ab65 */
  if (!C.zf) goto L_12d3ab65;
  /* 12d3ab61 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3ab63 jmp 0x12d3aba8 */
  goto L_12d3aba8;
L_12d3ab65:;
  /* 12d3ab65 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d3ab68 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3ab69 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d3ab6c push edx */
  push32((uint32_t)(EDX));
  /* 12d3ab6d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3ab70 push eax */
  push32((uint32_t)(EAX));
  /* 12d3ab71 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3ab74 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3ab75 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3ab77 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d3ab7a push edx */
  push32((uint32_t)(EDX));
  /* 12d3ab7b call dword ptr [0x12d502f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502f8))), 0x12d3ab81u);
  /* 12d3ab81 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12d3ab84 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3ab88 jne 0x12d3ab8e */
  if (!C.zf) goto L_12d3ab8e;
  /* 12d3ab8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3ab8c jmp 0x12d3aba8 */
  goto L_12d3aba8;
L_12d3ab8e:;
  /* 12d3ab8e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d3ab91 push eax */
  push32((uint32_t)(EAX));
  /* 12d3ab92 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d3ab95 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3ab96 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d3ab99 push edx */
  push32((uint32_t)(EDX));
  /* 12d3ab9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3ab9d push eax */
  push32((uint32_t)(EAX));
  /* 12d3ab9e call dword ptr [0x12d50300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50300))), 0x12d3aba4u);
  /* 12d3aba4 jmp 0x12d3aba8 */
  goto L_12d3aba8;
L_12d3aba6:;
  /* 12d3aba6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d3aba8:;
  /* 12d3aba8 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 12d3abab mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3abae mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12d3abb5 pop edi */
  EDI = (pop32());
  /* 12d3abb6 pop esi */
  ESI = (pop32());
  /* 12d3abb7 pop ebx */
  EBX = (pop32());
  /* 12d3abb8 mov esp, ebp */
  ESP = (EBP);
  /* 12d3abba pop ebp */
  EBP = (pop32());
  /* 12d3abbb ret  */
  ESPCHK(0x12d3aa00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000abc0 @ 0x12d3abc0 (727 bytes, 263 insns) */
void f_12d3abc0(void) {
  FTRACE(0x12d3abc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3abc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3abc1 mov ebp, esp */
  EBP = (ESP);
  /* 12d3abc3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12d3abc5 push 0x12d49f60 */
  push32((uint32_t)(0x12d49f60u));
  /* 12d3abca push 0x12d3b8d8 */
  push32((uint32_t)(0x12d3b8d8u));
  /* 12d3abcf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12d3abd5 push eax */
  push32((uint32_t)(EAX));
  /* 12d3abd6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12d3abdd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3abe0 push ebx */
  push32((uint32_t)(EBX));
  /* 12d3abe1 push esi */
  push32((uint32_t)(ESI));
  /* 12d3abe2 push edi */
  push32((uint32_t)(EDI));
  /* 12d3abe3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12d3abe6 cmp dword ptr [0x12d4e678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3abed jne 0x12d3ac46 */
  if (!C.zf) goto L_12d3ac46;
  /* 12d3abef push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3abf1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3abf3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3abf5 push 0x12d49f4c */
  push32((uint32_t)(0x12d49f4cu));
  /* 12d3abfa push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12d3abff push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3ac01 call dword ptr [0x12d50308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50308))), 0x12d3ac07u);
  /* 12d3ac07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3ac09 je 0x12d3ac17 */
  if (C.zf) goto L_12d3ac17;
  /* 12d3ac0b mov dword ptr [0x12d4e678], 1 */
  w32((uint32_t)(0x12d4e678), (0x1u));
  /* 12d3ac15 jmp 0x12d3ac46 */
  goto L_12d3ac46;
L_12d3ac17:;
  /* 12d3ac17 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3ac19 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3ac1b push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3ac1d push 0x12d49f48 */
  push32((uint32_t)(0x12d49f48u));
  /* 12d3ac22 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12d3ac27 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3ac29 call dword ptr [0x12d50304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50304))), 0x12d3ac2fu);
  /* 12d3ac2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3ac31 je 0x12d3ac3f */
  if (C.zf) goto L_12d3ac3f;
  /* 12d3ac33 mov dword ptr [0x12d4e678], 2 */
  w32((uint32_t)(0x12d4e678), (0x2u));
  /* 12d3ac3d jmp 0x12d3ac46 */
  goto L_12d3ac46;
L_12d3ac3f:;
  /* 12d3ac3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3ac41 jmp 0x12d3aeb1 */
  goto L_12d3aeb1;
L_12d3ac46:;
  /* 12d3ac46 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3ac4a jle 0x12d3ac5f */
  if ((C.zf||C.sf!=C.of)) goto L_12d3ac5f;
  /* 12d3ac4c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d3ac4f push eax */
  push32((uint32_t)(EAX));
  /* 12d3ac50 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3ac53 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3ac54 call 0x12d3aed0 */
  push32(0x12d3ac59u); f_12d3aed0();
  /* 12d3ac59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3ac5c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_12d3ac5f:;
  /* 12d3ac5f cmp dword ptr [0x12d4e678], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e678))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3ac66 jne 0x12d3ac8b */
  if (!C.zf) goto L_12d3ac8b;
  /* 12d3ac68 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12d3ac6b push edx */
  push32((uint32_t)(EDX));
  /* 12d3ac6c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d3ac6f push eax */
  push32((uint32_t)(EAX));
  /* 12d3ac70 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d3ac73 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3ac74 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3ac77 push edx */
  push32((uint32_t)(EDX));
  /* 12d3ac78 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3ac7b push eax */
  push32((uint32_t)(EAX));
  /* 12d3ac7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3ac7f push ecx */
  push32((uint32_t)(ECX));
  /* 12d3ac80 call dword ptr [0x12d50304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50304))), 0x12d3ac86u);
  /* 12d3ac86 jmp 0x12d3aeb1 */
  goto L_12d3aeb1;
L_12d3ac8b:;
  /* 12d3ac8b cmp dword ptr [0x12d4e678], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e678))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3ac92 jne 0x12d3aeaf */
  if (!C.zf) goto L_12d3aeaf;
  /* 12d3ac98 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3ac9c jne 0x12d3aca7 */
  if (!C.zf) goto L_12d3aca7;
  /* 12d3ac9e mov edx, dword ptr [0x12d4e670] */
  EDX = (r32((uint32_t)(0x12d4e670)));
  /* 12d3aca4 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_12d3aca7:;
  /* 12d3aca7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3aca9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3acab mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d3acae push eax */
  push32((uint32_t)(EAX));
  /* 12d3acaf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3acb2 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3acb3 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 12d3acb6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d3acb8 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3acba and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12d3acbd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3acc0 push edx */
  push32((uint32_t)(EDX));
  /* 12d3acc1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12d3acc4 push eax */
  push32((uint32_t)(EAX));
  /* 12d3acc5 call dword ptr [0x12d502f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502f8))), 0x12d3accbu);
  /* 12d3accb mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12d3acce cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3acd2 jne 0x12d3acdb */
  if (!C.zf) goto L_12d3acdb;
  /* 12d3acd4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3acd6 jmp 0x12d3aeb1 */
  goto L_12d3aeb1;
L_12d3acdb:;
  /* 12d3acdb mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d3ace2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d3ace5 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12d3ace7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3acea and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12d3acec call 0x12d35970 */
  push32(0x12d3acf1u); f_12d35970();
  /* 12d3acf1 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 12d3acf4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12d3acf7 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d3acfa mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12d3acfd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12d3ad04 jmp 0x12d3ad1d */
  goto L_12d3ad1d;
  /* 12d3ad06 mov eax, 1 */
  EAX = (0x1u);
  /* 12d3ad0b ret  */
  ESPCHK(0x12d3abc0u, _esp0);
  ESP += 4; return;
  /* 12d3ad0c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12d3ad0f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12d3ad16 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12d3ad1d:;
  /* 12d3ad1d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3ad21 jne 0x12d3ad2a */
  if (!C.zf) goto L_12d3ad2a;
  /* 12d3ad23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3ad25 jmp 0x12d3aeb1 */
  goto L_12d3aeb1;
L_12d3ad2a:;
  /* 12d3ad2a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d3ad2d push edx */
  push32((uint32_t)(EDX));
  /* 12d3ad2e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d3ad31 push eax */
  push32((uint32_t)(EAX));
  /* 12d3ad32 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d3ad35 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3ad36 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3ad39 push edx */
  push32((uint32_t)(EDX));
  /* 12d3ad3a push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3ad3c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12d3ad3f push eax */
  push32((uint32_t)(EAX));
  /* 12d3ad40 call dword ptr [0x12d502f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502f8))), 0x12d3ad46u);
  /* 12d3ad46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3ad48 jne 0x12d3ad51 */
  if (!C.zf) goto L_12d3ad51;
  /* 12d3ad4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3ad4c jmp 0x12d3aeb1 */
  goto L_12d3aeb1;
L_12d3ad51:;
  /* 12d3ad51 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3ad53 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3ad55 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d3ad58 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3ad59 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d3ad5c push edx */
  push32((uint32_t)(EDX));
  /* 12d3ad5d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3ad60 push eax */
  push32((uint32_t)(EAX));
  /* 12d3ad61 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3ad64 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3ad65 call dword ptr [0x12d50308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50308))), 0x12d3ad6bu);
  /* 12d3ad6b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12d3ad6e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3ad72 jne 0x12d3ad7b */
  if (!C.zf) goto L_12d3ad7b;
  /* 12d3ad74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3ad76 jmp 0x12d3aeb1 */
  goto L_12d3aeb1;
L_12d3ad7b:;
  /* 12d3ad7b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3ad7e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 12d3ad84 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d3ad86 je 0x12d3adcb */
  if (C.zf) goto L_12d3adcb;
  /* 12d3ad88 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3ad8c je 0x12d3adc6 */
  if (C.zf) goto L_12d3adc6;
  /* 12d3ad8e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d3ad91 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3ad94 jle 0x12d3ad9d */
  if ((C.zf||C.sf!=C.of)) goto L_12d3ad9d;
  /* 12d3ad96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3ad98 jmp 0x12d3aeb1 */
  goto L_12d3aeb1;
L_12d3ad9d:;
  /* 12d3ad9d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12d3ada0 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3ada1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d3ada4 push edx */
  push32((uint32_t)(EDX));
  /* 12d3ada5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d3ada8 push eax */
  push32((uint32_t)(EAX));
  /* 12d3ada9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d3adac push ecx */
  push32((uint32_t)(ECX));
  /* 12d3adad mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3adb0 push edx */
  push32((uint32_t)(EDX));
  /* 12d3adb1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3adb4 push eax */
  push32((uint32_t)(EAX));
  /* 12d3adb5 call dword ptr [0x12d50308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50308))), 0x12d3adbbu);
  /* 12d3adbb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3adbd jne 0x12d3adc6 */
  if (!C.zf) goto L_12d3adc6;
  /* 12d3adbf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3adc1 jmp 0x12d3aeb1 */
  goto L_12d3aeb1;
L_12d3adc6:;
  /* 12d3adc6 jmp 0x12d3aeaa */
  goto L_12d3aeaa;
L_12d3adcb:;
  /* 12d3adcb mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d3adce mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12d3add1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12d3add8 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d3addb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12d3addd add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3ade0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12d3ade2 call 0x12d35970 */
  push32(0x12d3ade7u); f_12d35970();
  /* 12d3ade7 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 12d3adea mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12d3aded mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12d3adf0 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12d3adf3 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12d3adfa jmp 0x12d3ae13 */
  goto L_12d3ae13;
  /* 12d3adfc mov eax, 1 */
  EAX = (0x1u);
  /* 12d3ae01 ret  */
  ESPCHK(0x12d3abc0u, _esp0);
  ESP += 4; return;
  /* 12d3ae02 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12d3ae05 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12d3ae0c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12d3ae13:;
  /* 12d3ae13 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3ae17 jne 0x12d3ae20 */
  if (!C.zf) goto L_12d3ae20;
  /* 12d3ae19 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3ae1b jmp 0x12d3aeb1 */
  goto L_12d3aeb1;
L_12d3ae20:;
  /* 12d3ae20 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d3ae23 push eax */
  push32((uint32_t)(EAX));
  /* 12d3ae24 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d3ae27 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3ae28 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d3ae2b push edx */
  push32((uint32_t)(EDX));
  /* 12d3ae2c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d3ae2f push eax */
  push32((uint32_t)(EAX));
  /* 12d3ae30 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3ae33 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3ae34 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3ae37 push edx */
  push32((uint32_t)(EDX));
  /* 12d3ae38 call dword ptr [0x12d50308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50308))), 0x12d3ae3eu);
  /* 12d3ae3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3ae40 jne 0x12d3ae46 */
  if (!C.zf) goto L_12d3ae46;
  /* 12d3ae42 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3ae44 jmp 0x12d3aeb1 */
  goto L_12d3aeb1;
L_12d3ae46:;
  /* 12d3ae46 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3ae4a jne 0x12d3ae7a */
  if (!C.zf) goto L_12d3ae7a;
  /* 12d3ae4c push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3ae4e push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3ae50 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3ae52 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3ae54 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d3ae57 push eax */
  push32((uint32_t)(EAX));
  /* 12d3ae58 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d3ae5b push ecx */
  push32((uint32_t)(ECX));
  /* 12d3ae5c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12d3ae61 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 12d3ae64 push edx */
  push32((uint32_t)(EDX));
  /* 12d3ae65 call dword ptr [0x12d50214] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50214))), 0x12d3ae6bu);
  /* 12d3ae6b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12d3ae6e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3ae72 jne 0x12d3ae78 */
  if (!C.zf) goto L_12d3ae78;
  /* 12d3ae74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3ae76 jmp 0x12d3aeb1 */
  goto L_12d3aeb1;
L_12d3ae78:;
  /* 12d3ae78 jmp 0x12d3aeaa */
  goto L_12d3aeaa;
L_12d3ae7a:;
  /* 12d3ae7a push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3ae7c push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3ae7e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12d3ae81 push eax */
  push32((uint32_t)(EAX));
  /* 12d3ae82 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d3ae85 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3ae86 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d3ae89 push edx */
  push32((uint32_t)(EDX));
  /* 12d3ae8a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d3ae8d push eax */
  push32((uint32_t)(EAX));
  /* 12d3ae8e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12d3ae93 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 12d3ae96 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3ae97 call dword ptr [0x12d50214] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50214))), 0x12d3ae9du);
  /* 12d3ae9d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12d3aea0 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3aea4 jne 0x12d3aeaa */
  if (!C.zf) goto L_12d3aeaa;
  /* 12d3aea6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3aea8 jmp 0x12d3aeb1 */
  goto L_12d3aeb1;
L_12d3aeaa:;
  /* 12d3aeaa mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d3aead jmp 0x12d3aeb1 */
  goto L_12d3aeb1;
L_12d3aeaf:;
  /* 12d3aeaf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d3aeb1:;
  /* 12d3aeb1 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 12d3aeb4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3aeb7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12d3aebe pop edi */
  EDI = (pop32());
  /* 12d3aebf pop esi */
  ESI = (pop32());
  /* 12d3aec0 pop ebx */
  EBX = (pop32());
  /* 12d3aec1 mov esp, ebp */
  ESP = (EBP);
  /* 12d3aec3 pop ebp */
  EBP = (pop32());
  /* 12d3aec4 ret  */
  ESPCHK(0x12d3abc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aed0 @ 0x12d3aed0 (80 bytes, 32 insns) */
void f_12d3aed0(void) {
  FTRACE(0x12d3aed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3aed0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3aed1 mov ebp, esp */
  EBP = (ESP);
  /* 12d3aed3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3aed6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3aed9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d3aedc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3aedf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d3aee2:;
  /* 12d3aee2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3aee5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3aee8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3aeeb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d3aeee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d3aef0 je 0x12d3af07 */
  if (C.zf) goto L_12d3af07;
  /* 12d3aef2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3aef5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d3aef8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d3aefa je 0x12d3af07 */
  if (C.zf) goto L_12d3af07;
  /* 12d3aefc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3aeff add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3af02 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d3af05 jmp 0x12d3aee2 */
  goto L_12d3aee2;
L_12d3af07:;
  /* 12d3af07 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3af0a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d3af0d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d3af0f jne 0x12d3af19 */
  if (!C.zf) goto L_12d3af19;
  /* 12d3af11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3af14 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3af17 jmp 0x12d3af1c */
  goto L_12d3af1c;
L_12d3af19:;
  /* 12d3af19 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_12d3af1c:;
  /* 12d3af1c mov esp, ebp */
  ESP = (EBP);
  /* 12d3af1e pop ebp */
  EBP = (pop32());
  /* 12d3af1f ret  */
  ESPCHK(0x12d3aed0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af20 @ 0x12d3af20 (130 bytes, 43 insns) */
void f_12d3af20(void) {
  FTRACE(0x12d3af20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3af20 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3af21 mov ebp, esp */
  EBP = (ESP);
  /* 12d3af23 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3af24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3af27 cmp eax, dword ptr [0x12d4ff7c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d4ff7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3af2d jae 0x12d3af51 */
  if (!C.cf) goto L_12d3af51;
  /* 12d3af2f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3af32 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12d3af35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3af38 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12d3af3b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d3af3e mov eax, dword ptr [ecx*4 + 0x12d4fe40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12d4fe40)));
  /* 12d3af45 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12d3af4a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12d3af4d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d3af4f jne 0x12d3af6c */
  if (!C.zf) goto L_12d3af6c;
L_12d3af51:;
  /* 12d3af51 call 0x12d3a6a0 */
  push32(0x12d3af56u); f_12d3a6a0();
  /* 12d3af56 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12d3af5c call 0x12d3a6b0 */
  push32(0x12d3af61u); f_12d3a6b0();
  /* 12d3af61 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12d3af67 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d3af6a jmp 0x12d3af9e */
  goto L_12d3af9e;
L_12d3af6c:;
  /* 12d3af6c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3af6f push edx */
  push32((uint32_t)(EDX));
  /* 12d3af70 call 0x12d3bec0 */
  push32(0x12d3af75u); f_12d3bec0();
  /* 12d3af75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3af78 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3af7b push eax */
  push32((uint32_t)(EAX));
  /* 12d3af7c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3af7f push ecx */
  push32((uint32_t)(ECX));
  /* 12d3af80 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3af83 push edx */
  push32((uint32_t)(EDX));
  /* 12d3af84 call 0x12d3afb0 */
  push32(0x12d3af89u); f_12d3afb0();
  /* 12d3af89 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3af8c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d3af8f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3af92 push eax */
  push32((uint32_t)(EAX));
  /* 12d3af93 call 0x12d3bf50 */
  push32(0x12d3af98u); f_12d3bf50();
  /* 12d3af98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3af9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12d3af9e:;
  /* 12d3af9e mov esp, ebp */
  ESP = (EBP);
  /* 12d3afa0 pop ebp */
  EBP = (pop32());
  /* 12d3afa1 ret  */
  ESPCHK(0x12d3af20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000afb0 @ 0x12d3afb0 (178 bytes, 56 insns) */
void f_12d3afb0(void) {
  FTRACE(0x12d3afb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3afb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3afb1 mov ebp, esp */
  EBP = (ESP);
  /* 12d3afb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3afb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3afb9 push eax */
  push32((uint32_t)(EAX));
  /* 12d3afba call 0x12d3bd40 */
  push32(0x12d3afbfu); f_12d3bd40();
  /* 12d3afbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3afc2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d3afc5 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3afc9 jne 0x12d3afde */
  if (!C.zf) goto L_12d3afde;
  /* 12d3afcb call 0x12d3a6a0 */
  push32(0x12d3afd0u); f_12d3a6a0();
  /* 12d3afd0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12d3afd6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d3afd9 jmp 0x12d3b05e */
  goto L_12d3b05e;
L_12d3afde:;
  /* 12d3afde mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3afe1 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3afe2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3afe4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3afe7 push edx */
  push32((uint32_t)(EDX));
  /* 12d3afe8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3afeb push eax */
  push32((uint32_t)(EAX));
  /* 12d3afec call dword ptr [0x12d5030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d5030c))), 0x12d3aff2u);
  /* 12d3aff2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d3aff5 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3aff9 jne 0x12d3b006 */
  if (!C.zf) goto L_12d3b006;
  /* 12d3affb call dword ptr [0x12d50280] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50280))), 0x12d3b001u);
  /* 12d3b001 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d3b004 jmp 0x12d3b00d */
  goto L_12d3b00d;
L_12d3b006:;
  /* 12d3b006 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12d3b00d:;
  /* 12d3b00d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3b011 je 0x12d3b024 */
  if (C.zf) goto L_12d3b024;
  /* 12d3b013 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3b016 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3b017 call 0x12d3a600 */
  push32(0x12d3b01cu); f_12d3a600();
  /* 12d3b01c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3b01f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d3b022 jmp 0x12d3b05e */
  goto L_12d3b05e;
L_12d3b024:;
  /* 12d3b024 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3b027 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12d3b02a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3b02d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12d3b030 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d3b033 mov ecx, dword ptr [edx*4 + 0x12d4fe40] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12d4fe40)));
  /* 12d3b03a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 12d3b03e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 12d3b041 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3b044 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12d3b047 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3b04a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12d3b04d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d3b050 mov eax, dword ptr [eax*4 + 0x12d4fe40] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12d4fe40)));
  /* 12d3b057 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 12d3b05b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12d3b05e:;
  /* 12d3b05e mov esp, ebp */
  ESP = (EBP);
  /* 12d3b060 pop ebp */
  EBP = (pop32());
  /* 12d3b061 ret  */
  ESPCHK(0x12d3afb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b070 @ 0x12d3b070 (130 bytes, 43 insns) */
void f_12d3b070(void) {
  FTRACE(0x12d3b070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3b070 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3b071 mov ebp, esp */
  EBP = (ESP);
  /* 12d3b073 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3b074 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3b077 cmp eax, dword ptr [0x12d4ff7c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d4ff7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3b07d jae 0x12d3b0a1 */
  if (!C.cf) goto L_12d3b0a1;
  /* 12d3b07f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3b082 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12d3b085 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3b088 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12d3b08b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d3b08e mov eax, dword ptr [ecx*4 + 0x12d4fe40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12d4fe40)));
  /* 12d3b095 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12d3b09a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12d3b09d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d3b09f jne 0x12d3b0bc */
  if (!C.zf) goto L_12d3b0bc;
L_12d3b0a1:;
  /* 12d3b0a1 call 0x12d3a6a0 */
  push32(0x12d3b0a6u); f_12d3a6a0();
  /* 12d3b0a6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12d3b0ac call 0x12d3a6b0 */
  push32(0x12d3b0b1u); f_12d3a6b0();
  /* 12d3b0b1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12d3b0b7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d3b0ba jmp 0x12d3b0ee */
  goto L_12d3b0ee;
L_12d3b0bc:;
  /* 12d3b0bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3b0bf push edx */
  push32((uint32_t)(EDX));
  /* 12d3b0c0 call 0x12d3bec0 */
  push32(0x12d3b0c5u); f_12d3bec0();
  /* 12d3b0c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3b0c8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3b0cb push eax */
  push32((uint32_t)(EAX));
  /* 12d3b0cc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3b0cf push ecx */
  push32((uint32_t)(ECX));
  /* 12d3b0d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3b0d3 push edx */
  push32((uint32_t)(EDX));
  /* 12d3b0d4 call 0x12d3b100 */
  push32(0x12d3b0d9u); f_12d3b100();
  /* 12d3b0d9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3b0dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d3b0df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3b0e2 push eax */
  push32((uint32_t)(EAX));
  /* 12d3b0e3 call 0x12d3bf50 */
  push32(0x12d3b0e8u); f_12d3bf50();
  /* 12d3b0e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3b0eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12d3b0ee:;
  /* 12d3b0ee mov esp, ebp */
  ESP = (EBP);
  /* 12d3b0f0 pop ebp */
  EBP = (pop32());
  /* 12d3b0f1 ret  */
  ESPCHK(0x12d3b070u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b100 @ 0x12d3b100 (627 bytes, 182 insns) */
void f_12d3b100(void) {
  FTRACE(0x12d3b100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3b100 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3b101 mov ebp, esp */
  EBP = (ESP);
  /* 12d3b103 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3b109 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12d3b110 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3b113 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 12d3b119 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3b11d jne 0x12d3b126 */
  if (!C.zf) goto L_12d3b126;
  /* 12d3b11f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3b121 jmp 0x12d3b36f */
  goto L_12d3b36f;
L_12d3b126:;
  /* 12d3b126 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3b129 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12d3b12c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3b12f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12d3b132 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d3b135 mov eax, dword ptr [ecx*4 + 0x12d4fe40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12d4fe40)));
  /* 12d3b13c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12d3b141 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 12d3b144 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d3b146 je 0x12d3b158 */
  if (C.zf) goto L_12d3b158;
  /* 12d3b148 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3b14a push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3b14c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3b14f push edx */
  push32((uint32_t)(EDX));
  /* 12d3b150 call 0x12d3afb0 */
  push32(0x12d3b155u); f_12d3afb0();
  /* 12d3b155 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d3b158:;
  /* 12d3b158 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3b15b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12d3b15e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3b161 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12d3b164 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d3b167 mov edx, dword ptr [eax*4 + 0x12d4fe40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12d4fe40)));
  /* 12d3b16e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12d3b173 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 12d3b178 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3b17a je 0x12d3b28c */
  if (C.zf) goto L_12d3b28c;
  /* 12d3b180 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3b183 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d3b186 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12d3b18d:;
  /* 12d3b18d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3b190 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3b193 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3b196 jae 0x12d3b28a */
  if (!C.cf) goto L_12d3b28a;
  /* 12d3b19c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 12d3b1a2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12d3b1a5:;
  /* 12d3b1a5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3b1a8 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 12d3b1ae sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3b1b0 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3b1b6 jge 0x12d3b217 */
  if ((C.sf==C.of)) goto L_12d3b217;
  /* 12d3b1b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3b1bb sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3b1be cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3b1c1 jae 0x12d3b217 */
  if (!C.cf) goto L_12d3b217;
  /* 12d3b1c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3b1c6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d3b1c8 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 12d3b1ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3b1d1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3b1d4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d3b1d7 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 12d3b1de cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3b1e1 jne 0x12d3b201 */
  if (!C.zf) goto L_12d3b201;
  /* 12d3b1e3 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 12d3b1e9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3b1ec mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 12d3b1f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3b1f5 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 12d3b1f8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3b1fb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3b1fe mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12d3b201:;
  /* 12d3b201 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3b204 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 12d3b20a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12d3b20c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3b20f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3b212 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d3b215 jmp 0x12d3b1a5 */
  goto L_12d3b1a5;
L_12d3b217:;
  /* 12d3b217 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3b219 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 12d3b21f push edx */
  push32((uint32_t)(EDX));
  /* 12d3b220 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3b223 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 12d3b229 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3b22b push eax */
  push32((uint32_t)(EAX));
  /* 12d3b22c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 12d3b232 push edx */
  push32((uint32_t)(EDX));
  /* 12d3b233 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3b236 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12d3b239 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3b23c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12d3b23f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d3b242 mov edx, dword ptr [eax*4 + 0x12d4fe40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12d4fe40)));
  /* 12d3b249 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 12d3b24c push eax */
  push32((uint32_t)(EAX));
  /* 12d3b24d call dword ptr [0x12d50240] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50240))), 0x12d3b253u);
  /* 12d3b253 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3b255 je 0x12d3b27a */
  if (C.zf) goto L_12d3b27a;
  /* 12d3b257 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3b25a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3b260 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12d3b263 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3b266 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 12d3b26c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3b26e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3b274 jge 0x12d3b278 */
  if ((C.sf==C.of)) goto L_12d3b278;
  /* 12d3b276 jmp 0x12d3b28a */
  goto L_12d3b28a;
L_12d3b278:;
  /* 12d3b278 jmp 0x12d3b285 */
  goto L_12d3b285;
L_12d3b27a:;
  /* 12d3b27a call dword ptr [0x12d50280] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50280))), 0x12d3b280u);
  /* 12d3b280 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d3b283 jmp 0x12d3b28a */
  goto L_12d3b28a;
L_12d3b285:;
  /* 12d3b285 jmp 0x12d3b18d */
  goto L_12d3b18d;
L_12d3b28a:;
  /* 12d3b28a jmp 0x12d3b2dc */
  goto L_12d3b2dc;
L_12d3b28c:;
  /* 12d3b28c push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3b28e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 12d3b294 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3b295 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3b298 push edx */
  push32((uint32_t)(EDX));
  /* 12d3b299 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3b29c push eax */
  push32((uint32_t)(EAX));
  /* 12d3b29d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3b2a0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12d3b2a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3b2a6 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12d3b2a9 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d3b2ac mov eax, dword ptr [ecx*4 + 0x12d4fe40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12d4fe40)));
  /* 12d3b2b3 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 12d3b2b6 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3b2b7 call dword ptr [0x12d50240] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50240))), 0x12d3b2bdu);
  /* 12d3b2bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3b2bf je 0x12d3b2d3 */
  if (C.zf) goto L_12d3b2d3;
  /* 12d3b2c1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12d3b2c8 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 12d3b2ce mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12d3b2d1 jmp 0x12d3b2dc */
  goto L_12d3b2dc;
L_12d3b2d3:;
  /* 12d3b2d3 call dword ptr [0x12d50280] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50280))), 0x12d3b2d9u);
  /* 12d3b2d9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12d3b2dc:;
  /* 12d3b2dc cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3b2e0 jne 0x12d3b366 */
  if (!C.zf) goto L_12d3b366;
  /* 12d3b2e6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3b2ea je 0x12d3b31a */
  if (C.zf) goto L_12d3b31a;
  /* 12d3b2ec cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3b2f0 jne 0x12d3b309 */
  if (!C.zf) goto L_12d3b309;
  /* 12d3b2f2 call 0x12d3a6a0 */
  push32(0x12d3b2f7u); f_12d3a6a0();
  /* 12d3b2f7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12d3b2fd call 0x12d3a6b0 */
  push32(0x12d3b302u); f_12d3a6b0();
  /* 12d3b302 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3b305 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12d3b307 jmp 0x12d3b315 */
  goto L_12d3b315;
L_12d3b309:;
  /* 12d3b309 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3b30c push edx */
  push32((uint32_t)(EDX));
  /* 12d3b30d call 0x12d3a600 */
  push32(0x12d3b312u); f_12d3a600();
  /* 12d3b312 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d3b315:;
  /* 12d3b315 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d3b318 jmp 0x12d3b36f */
  goto L_12d3b36f;
L_12d3b31a:;
  /* 12d3b31a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3b31d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12d3b320 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3b323 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12d3b326 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d3b329 mov edx, dword ptr [eax*4 + 0x12d4fe40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12d4fe40)));
  /* 12d3b330 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12d3b335 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12d3b338 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3b33a je 0x12d3b34b */
  if (C.zf) goto L_12d3b34b;
  /* 12d3b33c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3b33f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d3b342 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3b345 jne 0x12d3b34b */
  if (!C.zf) goto L_12d3b34b;
  /* 12d3b347 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3b349 jmp 0x12d3b36f */
  goto L_12d3b36f;
L_12d3b34b:;
  /* 12d3b34b call 0x12d3a6a0 */
  push32(0x12d3b350u); f_12d3a6a0();
  /* 12d3b350 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 12d3b356 call 0x12d3a6b0 */
  push32(0x12d3b35bu); f_12d3a6b0();
  /* 12d3b35b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12d3b361 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d3b364 jmp 0x12d3b36f */
  goto L_12d3b36f;
L_12d3b366:;
  /* 12d3b366 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3b369 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12d3b36f:;
  /* 12d3b36f mov esp, ebp */
  ESP = (EBP);
  /* 12d3b371 pop ebp */
  EBP = (pop32());
  /* 12d3b372 ret  */
  ESPCHK(0x12d3b100u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b380 @ 0x12d3b380 (199 bytes, 68 insns) */
void f_12d3b380(void) {
  FTRACE(0x12d3b380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3b380 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3b381 mov ebp, esp */
  EBP = (ESP);
  /* 12d3b383 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3b384 push ebx */
  push32((uint32_t)(EBX));
  /* 12d3b385 push esi */
  push32((uint32_t)(ESI));
  /* 12d3b386 push edi */
  push32((uint32_t)(EDI));
L_12d3b387:;
  /* 12d3b387 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3b38b jne 0x12d3b3ab */
  if (!C.zf) goto L_12d3b3ab;
  /* 12d3b38d push 0x12d49eac */
  push32((uint32_t)(0x12d49eacu));
  /* 12d3b392 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3b394 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 12d3b396 push 0x12d49f78 */
  push32((uint32_t)(0x12d49f78u));
  /* 12d3b39b push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3b39d call 0x12d31890 */
  push32(0x12d3b3a2u); f_12d31890();
  /* 12d3b3a2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3b3a5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3b3a8 jne 0x12d3b3ab */
  if (!C.zf) goto L_12d3b3ab;
  /* 12d3b3aa int3  */
  x86_unimpl("int3 @ 0x12d3b3aa");
L_12d3b3ab:;
  /* 12d3b3ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3b3ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3b3af jne 0x12d3b387 */
  if (!C.zf) goto L_12d3b387;
  /* 12d3b3b1 mov ecx, dword ptr [0x12d4e67c] */
  ECX = (r32((uint32_t)(0x12d4e67c)));
  /* 12d3b3b7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3b3ba mov dword ptr [0x12d4e67c], ecx */
  w32((uint32_t)(0x12d4e67c), (ECX));
  /* 12d3b3c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3b3c3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d3b3c6 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 12d3b3c8 push 0x12d49f78 */
  push32((uint32_t)(0x12d49f78u));
  /* 12d3b3cd push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3b3cf push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12d3b3d4 call 0x12d327d0 */
  push32(0x12d3b3d9u); f_12d327d0();
  /* 12d3b3d9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3b3dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3b3df mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12d3b3e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3b3e5 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3b3e9 je 0x12d3b406 */
  if (C.zf) goto L_12d3b406;
  /* 12d3b3eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3b3ee mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12d3b3f1 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12d3b3f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3b3f7 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12d3b3fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3b3fd mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 12d3b404 jmp 0x12d3b42b */
  goto L_12d3b42b;
L_12d3b406:;
  /* 12d3b406 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3b409 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d3b40c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12d3b40f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3b412 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12d3b415 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3b418 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3b41b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3b41e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12d3b421 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3b424 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_12d3b42b:;
  /* 12d3b42b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3b42e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3b431 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12d3b434 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12d3b436 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3b439 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12d3b440 pop edi */
  EDI = (pop32());
  /* 12d3b441 pop esi */
  ESI = (pop32());
  /* 12d3b442 pop ebx */
  EBX = (pop32());
  /* 12d3b443 mov esp, ebp */
  ESP = (EBP);
  /* 12d3b445 pop ebp */
  EBP = (pop32());
  /* 12d3b446 ret  */
  ESPCHK(0x12d3b380u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x12d3b450 (50 bytes, 17 insns) */
void f_12d3b450(void) {
  FTRACE(0x12d3b450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3b450 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3b451 mov ebp, esp */
  EBP = (ESP);
  /* 12d3b453 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3b456 cmp eax, dword ptr [0x12d4ff7c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d4ff7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3b45c jb 0x12d3b462 */
  if (C.cf) goto L_12d3b462;
  /* 12d3b45e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3b460 jmp 0x12d3b480 */
  goto L_12d3b480;
L_12d3b462:;
  /* 12d3b462 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3b465 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12d3b468 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3b46b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12d3b46e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d3b471 mov eax, dword ptr [ecx*4 + 0x12d4fe40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12d4fe40)));
  /* 12d3b478 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12d3b47d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_12d3b480:;
  /* 12d3b480 pop ebp */
  EBP = (pop32());
  /* 12d3b481 ret  */
  ESPCHK(0x12d3b450u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b490 @ 0x12d3b490 (300 bytes, 80 insns) */
void f_12d3b490(void) {
  FTRACE(0x12d3b490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3b490 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3b491 mov ebp, esp */
  EBP = (ESP);
  /* 12d3b493 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3b494 cmp dword ptr [0x12d4fb40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4fb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3b49b jne 0x12d3b4a9 */
  if (!C.zf) goto L_12d3b4a9;
  /* 12d3b49d mov dword ptr [0x12d4fb40], 0x200 */
  w32((uint32_t)(0x12d4fb40), (0x200u));
  /* 12d3b4a7 jmp 0x12d3b4bc */
  goto L_12d3b4bc;
L_12d3b4a9:;
  /* 12d3b4a9 cmp dword ptr [0x12d4fb40], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x12d4fb40))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3b4b0 jge 0x12d3b4bc */
  if ((C.sf==C.of)) goto L_12d3b4bc;
  /* 12d3b4b2 mov dword ptr [0x12d4fb40], 0x14 */
  w32((uint32_t)(0x12d4fb40), (0x14u));
L_12d3b4bc:;
  /* 12d3b4bc push 0x83 */
  push32((uint32_t)(0x83u));
  /* 12d3b4c1 push 0x12d49f84 */
  push32((uint32_t)(0x12d49f84u));
  /* 12d3b4c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3b4c8 push 4 */
  push32((uint32_t)(0x4u));
  /* 12d3b4ca mov eax, dword ptr [0x12d4fb40] */
  EAX = (r32((uint32_t)(0x12d4fb40)));
  /* 12d3b4cf push eax */
  push32((uint32_t)(EAX));
  /* 12d3b4d0 call 0x12d32be0 */
  push32(0x12d3b4d5u); f_12d32be0();
  /* 12d3b4d5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3b4d8 mov dword ptr [0x12d4e7f0], eax */
  w32((uint32_t)(0x12d4e7f0), (EAX));
  /* 12d3b4dd cmp dword ptr [0x12d4e7f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e7f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3b4e4 jne 0x12d3b525 */
  if (!C.zf) goto L_12d3b525;
  /* 12d3b4e6 mov dword ptr [0x12d4fb40], 0x14 */
  w32((uint32_t)(0x12d4fb40), (0x14u));
  /* 12d3b4f0 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 12d3b4f5 push 0x12d49f84 */
  push32((uint32_t)(0x12d49f84u));
  /* 12d3b4fa push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3b4fc push 4 */
  push32((uint32_t)(0x4u));
  /* 12d3b4fe mov ecx, dword ptr [0x12d4fb40] */
  ECX = (r32((uint32_t)(0x12d4fb40)));
  /* 12d3b504 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3b505 call 0x12d32be0 */
  push32(0x12d3b50au); f_12d32be0();
  /* 12d3b50a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3b50d mov dword ptr [0x12d4e7f0], eax */
  w32((uint32_t)(0x12d4e7f0), (EAX));
  /* 12d3b512 cmp dword ptr [0x12d4e7f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e7f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3b519 jne 0x12d3b525 */
  if (!C.zf) goto L_12d3b525;
  /* 12d3b51b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12d3b51d call 0x12d31740 */
  push32(0x12d3b522u); f_12d31740();
  /* 12d3b522 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d3b525:;
  /* 12d3b525 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d3b52c jmp 0x12d3b537 */
  goto L_12d3b537;
L_12d3b52e:;
  /* 12d3b52e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3b531 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3b534 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12d3b537:;
  /* 12d3b537 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3b53b jge 0x12d3b556 */
  if ((C.sf==C.of)) goto L_12d3b556;
  /* 12d3b53d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3b540 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12d3b543 add eax, 0x12d4d140 */
  { uint32_t _a=(EAX),_b=(0x12d4d140u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3b548 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3b54b mov edx, dword ptr [0x12d4e7f0] */
  EDX = (r32((uint32_t)(0x12d4e7f0)));
  /* 12d3b551 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 12d3b554 jmp 0x12d3b52e */
  goto L_12d3b52e;
L_12d3b556:;
  /* 12d3b556 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d3b55d jmp 0x12d3b568 */
  goto L_12d3b568;
L_12d3b55f:;
  /* 12d3b55f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3b562 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3b565 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d3b568:;
  /* 12d3b568 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3b56c jge 0x12d3b5b8 */
  if ((C.sf==C.of)) goto L_12d3b5b8;
  /* 12d3b56e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3b571 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12d3b574 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3b577 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12d3b57a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d3b57d mov eax, dword ptr [ecx*4 + 0x12d4fe40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12d4fe40)));
  /* 12d3b584 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3b588 je 0x12d3b5a6 */
  if (C.zf) goto L_12d3b5a6;
  /* 12d3b58a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3b58d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12d3b590 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3b593 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12d3b596 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d3b599 mov eax, dword ptr [ecx*4 + 0x12d4fe40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12d4fe40)));
  /* 12d3b5a0 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3b5a4 jne 0x12d3b5b6 */
  if (!C.zf) goto L_12d3b5b6;
L_12d3b5a6:;
  /* 12d3b5a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3b5a9 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12d3b5ac mov dword ptr [ecx + 0x12d4d150], 0xffffffff */
  w32((uint32_t)(ECX + 0x12d4d150), (0xffffffffu));
L_12d3b5b6:;
  /* 12d3b5b6 jmp 0x12d3b55f */
  goto L_12d3b55f;
L_12d3b5b8:;
  /* 12d3b5b8 mov esp, ebp */
  ESP = (EBP);
  /* 12d3b5ba pop ebp */
  EBP = (pop32());
  /* 12d3b5bb ret  */
  ESPCHK(0x12d3b490u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b5c0 @ 0x12d3b5c0 (26 bytes, 9 insns) */
void f_12d3b5c0(void) {
  FTRACE(0x12d3b5c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3b5c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3b5c1 mov ebp, esp */
  EBP = (ESP);
  /* 12d3b5c3 call 0x12d3c1c0 */
  push32(0x12d3b5c8u); f_12d3c1c0();
  /* 12d3b5c8 movsx eax, byte ptr [0x12d4e498] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x12d4e498))));
  /* 12d3b5cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3b5d1 je 0x12d3b5d8 */
  if (C.zf) goto L_12d3b5d8;
  /* 12d3b5d3 call 0x12d3bf80 */
  push32(0x12d3b5d8u); f_12d3bf80();
L_12d3b5d8:;
  /* 12d3b5d8 pop ebp */
  EBP = (pop32());
  /* 12d3b5d9 ret  */
  ESPCHK(0x12d3b5c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b5e0 @ 0x12d3b5e0 (61 bytes, 20 insns) */
void f_12d3b5e0(void) {
  FTRACE(0x12d3b5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3b5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3b5e1 mov ebp, esp */
  EBP = (ESP);
  /* 12d3b5e3 cmp dword ptr [ebp + 8], 0x12d4d140 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12d4d140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3b5ea jb 0x12d3b60e */
  if (C.cf) goto L_12d3b60e;
  /* 12d3b5ec cmp dword ptr [ebp + 8], 0x12d4d3a0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12d4d3a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3b5f3 ja 0x12d3b60e */
  if ((!C.cf&&!C.zf)) goto L_12d3b60e;
  /* 12d3b5f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3b5f8 sub eax, 0x12d4d140 */
  { uint32_t _a=(EAX),_b=(0x12d4d140u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3b5fd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12d3b600 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3b603 push eax */
  push32((uint32_t)(EAX));
  /* 12d3b604 call 0x12d361d0 */
  push32(0x12d3b609u); f_12d361d0();
  /* 12d3b609 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3b60c jmp 0x12d3b61b */
  goto L_12d3b61b;
L_12d3b60e:;
  /* 12d3b60e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3b611 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3b614 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3b615 call dword ptr [0x12d502d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502d0))), 0x12d3b61bu);
L_12d3b61b:;
  /* 12d3b61b pop ebp */
  EBP = (pop32());
  /* 12d3b61c ret  */
  ESPCHK(0x12d3b5e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b620 @ 0x12d3b620 (41 bytes, 16 insns) */
void f_12d3b620(void) {
  FTRACE(0x12d3b620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3b620 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3b621 mov ebp, esp */
  EBP = (ESP);
  /* 12d3b623 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3b627 jge 0x12d3b63a */
  if ((C.sf==C.of)) goto L_12d3b63a;
  /* 12d3b629 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3b62c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3b62f push eax */
  push32((uint32_t)(EAX));
  /* 12d3b630 call 0x12d361d0 */
  push32(0x12d3b635u); f_12d361d0();
  /* 12d3b635 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3b638 jmp 0x12d3b647 */
  goto L_12d3b647;
L_12d3b63a:;
  /* 12d3b63a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3b63d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3b640 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3b641 call dword ptr [0x12d502d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502d0))), 0x12d3b647u);
L_12d3b647:;
  /* 12d3b647 pop ebp */
  EBP = (pop32());
  /* 12d3b648 ret  */
  ESPCHK(0x12d3b620u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b650 @ 0x12d3b650 (61 bytes, 20 insns) */
void f_12d3b650(void) {
  FTRACE(0x12d3b650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3b650 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3b651 mov ebp, esp */
  EBP = (ESP);
  /* 12d3b653 cmp dword ptr [ebp + 8], 0x12d4d140 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12d4d140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3b65a jb 0x12d3b67e */
  if (C.cf) goto L_12d3b67e;
  /* 12d3b65c cmp dword ptr [ebp + 8], 0x12d4d3a0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12d4d3a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3b663 ja 0x12d3b67e */
  if ((!C.cf&&!C.zf)) goto L_12d3b67e;
  /* 12d3b665 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3b668 sub eax, 0x12d4d140 */
  { uint32_t _a=(EAX),_b=(0x12d4d140u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3b66d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12d3b670 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3b673 push eax */
  push32((uint32_t)(EAX));
  /* 12d3b674 call 0x12d36270 */
  push32(0x12d3b679u); f_12d36270();
  /* 12d3b679 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3b67c jmp 0x12d3b68b */
  goto L_12d3b68b;
L_12d3b67e:;
  /* 12d3b67e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3b681 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3b684 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3b685 call dword ptr [0x12d502d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502d4))), 0x12d3b68bu);
L_12d3b68b:;
  /* 12d3b68b pop ebp */
  EBP = (pop32());
  /* 12d3b68c ret  */
  ESPCHK(0x12d3b650u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b690 @ 0x12d3b690 (41 bytes, 16 insns) */
void f_12d3b690(void) {
  FTRACE(0x12d3b690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3b690 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3b691 mov ebp, esp */
  EBP = (ESP);
  /* 12d3b693 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3b697 jge 0x12d3b6aa */
  if ((C.sf==C.of)) goto L_12d3b6aa;
  /* 12d3b699 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3b69c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3b69f push eax */
  push32((uint32_t)(EAX));
  /* 12d3b6a0 call 0x12d36270 */
  push32(0x12d3b6a5u); f_12d36270();
  /* 12d3b6a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3b6a8 jmp 0x12d3b6b7 */
  goto L_12d3b6b7;
L_12d3b6aa:;
  /* 12d3b6aa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3b6ad add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3b6b0 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3b6b1 call dword ptr [0x12d502d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502d4))), 0x12d3b6b7u);
L_12d3b6b7:;
  /* 12d3b6b7 pop ebp */
  EBP = (pop32());
  /* 12d3b6b8 ret  */
  ESPCHK(0x12d3b690u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b6c0 @ 0x12d3b6c0 (119 bytes, 34 insns) */
void f_12d3b6c0(void) {
  FTRACE(0x12d3b6c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3b6c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3b6c1 mov ebp, esp */
  EBP = (ESP);
  /* 12d3b6c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3b6c6 push 0x12d4e7ec */
  push32((uint32_t)(0x12d4e7ecu));
  /* 12d3b6cb call dword ptr [0x12d50254] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50254))), 0x12d3b6d1u);
  /* 12d3b6d1 cmp dword ptr [0x12d4e7dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e7dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3b6d8 je 0x12d3b6f8 */
  if (C.zf) goto L_12d3b6f8;
  /* 12d3b6da push 0x12d4e7ec */
  push32((uint32_t)(0x12d4e7ecu));
  /* 12d3b6df call dword ptr [0x12d50244] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50244))), 0x12d3b6e5u);
  /* 12d3b6e5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12d3b6e7 call 0x12d361d0 */
  push32(0x12d3b6ecu); f_12d361d0();
  /* 12d3b6ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3b6ef mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12d3b6f6 jmp 0x12d3b6ff */
  goto L_12d3b6ff;
L_12d3b6f8:;
  /* 12d3b6f8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12d3b6ff:;
  /* 12d3b6ff mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 12d3b703 push eax */
  push32((uint32_t)(EAX));
  /* 12d3b704 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3b707 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3b708 call 0x12d3b740 */
  push32(0x12d3b70du); f_12d3b740();
  /* 12d3b70d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3b710 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d3b713 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3b717 je 0x12d3b725 */
  if (C.zf) goto L_12d3b725;
  /* 12d3b719 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12d3b71b call 0x12d36270 */
  push32(0x12d3b720u); f_12d36270();
  /* 12d3b720 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3b723 jmp 0x12d3b730 */
  goto L_12d3b730;
L_12d3b725:;
  /* 12d3b725 push 0x12d4e7ec */
  push32((uint32_t)(0x12d4e7ecu));
  /* 12d3b72a call dword ptr [0x12d50244] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50244))), 0x12d3b730u);
L_12d3b730:;
  /* 12d3b730 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3b733 mov esp, ebp */
  ESP = (EBP);
  /* 12d3b735 pop ebp */
  EBP = (pop32());
  /* 12d3b736 ret  */
  ESPCHK(0x12d3b6c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b740 @ 0x12d3b740 (160 bytes, 50 insns) */
void f_12d3b740(void) {
  FTRACE(0x12d3b740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3b740 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3b741 mov ebp, esp */
  EBP = (ESP);
  /* 12d3b743 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3b746 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3b74a jne 0x12d3b753 */
  if (!C.zf) goto L_12d3b753;
  /* 12d3b74c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3b74e jmp 0x12d3b7dc */
  goto L_12d3b7dc;
L_12d3b753:;
  /* 12d3b753 cmp dword ptr [0x12d4e660], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e660))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3b75a jne 0x12d3b78a */
  if (!C.zf) goto L_12d3b78a;
  /* 12d3b75c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3b75f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d3b764 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3b769 jle 0x12d3b77b */
  if ((C.zf||C.sf!=C.of)) goto L_12d3b77b;
  /* 12d3b76b call 0x12d3a6a0 */
  push32(0x12d3b770u); f_12d3a6a0();
  /* 12d3b770 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 12d3b776 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d3b779 jmp 0x12d3b7dc */
  goto L_12d3b7dc;
L_12d3b77b:;
  /* 12d3b77b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3b77e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 12d3b781 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 12d3b783 mov eax, 1 */
  EAX = (0x1u);
  /* 12d3b788 jmp 0x12d3b7dc */
  goto L_12d3b7dc;
L_12d3b78a:;
  /* 12d3b78a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d3b791 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12d3b794 push eax */
  push32((uint32_t)(EAX));
  /* 12d3b795 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3b797 mov ecx, dword ptr [0x12d4cec4] */
  ECX = (r32((uint32_t)(0x12d4cec4)));
  /* 12d3b79d push ecx */
  push32((uint32_t)(ECX));
  /* 12d3b79e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3b7a1 push edx */
  push32((uint32_t)(EDX));
  /* 12d3b7a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3b7a4 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 12d3b7a7 push eax */
  push32((uint32_t)(EAX));
  /* 12d3b7a8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12d3b7ad mov ecx, dword ptr [0x12d4e670] */
  ECX = (r32((uint32_t)(0x12d4e670)));
  /* 12d3b7b3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3b7b4 call dword ptr [0x12d50214] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50214))), 0x12d3b7bau);
  /* 12d3b7ba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d3b7bd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3b7c1 je 0x12d3b7c9 */
  if (C.zf) goto L_12d3b7c9;
  /* 12d3b7c3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3b7c7 je 0x12d3b7d9 */
  if (C.zf) goto L_12d3b7d9;
L_12d3b7c9:;
  /* 12d3b7c9 call 0x12d3a6a0 */
  push32(0x12d3b7ceu); f_12d3a6a0();
  /* 12d3b7ce mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 12d3b7d4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d3b7d7 jmp 0x12d3b7dc */
  goto L_12d3b7dc;
L_12d3b7d9:;
  /* 12d3b7d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12d3b7dc:;
  /* 12d3b7dc mov esp, ebp */
  ESP = (EBP);
  /* 12d3b7de pop ebp */
  EBP = (pop32());
  /* 12d3b7df ret  */
  ESPCHK(0x12d3b740u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x12d3b7e0 (32 bytes, 18 insns) */
void f_12d3b7e0(void) {
  FTRACE(0x12d3b7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3b7e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3b7e1 mov ebp, esp */
  EBP = (ESP);
  /* 12d3b7e3 push ebx */
  push32((uint32_t)(EBX));
  /* 12d3b7e4 push esi */
  push32((uint32_t)(ESI));
  /* 12d3b7e5 push edi */
  push32((uint32_t)(EDI));
  /* 12d3b7e6 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3b7e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3b7e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3b7eb push 0x12d3b7f8 */
  push32((uint32_t)(0x12d3b7f8u));
  /* 12d3b7f0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12d3b7f3 call 0x12d42f2c */
  push32(0x12d3b7f8u); f_12d42f2c();
  /* 12d3b7f8 pop ebp */
  EBP = (pop32());
  /* 12d3b7f9 pop edi */
  EDI = (pop32());
  /* 12d3b7fa pop esi */
  ESI = (pop32());
  /* 12d3b7fb pop ebx */
  EBX = (pop32());
  /* 12d3b7fc mov esp, ebp */
  ESP = (EBP);
  /* 12d3b7fe pop ebp */
  EBP = (pop32());
  /* 12d3b7ff ret  */
  ESPCHK(0x12d3b7e0u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x12d3b822 (104 bytes, 33 insns) */
void f_12d3b822(void) {
  FTRACE(0x12d3b822u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3b822 push ebx */
  push32((uint32_t)(EBX));
  /* 12d3b823 push esi */
  push32((uint32_t)(ESI));
  /* 12d3b824 push edi */
  push32((uint32_t)(EDI));
  /* 12d3b825 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12d3b829 push eax */
  push32((uint32_t)(EAX));
  /* 12d3b82a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 12d3b82c push 0x12d3b800 */
  push32((uint32_t)(0x12d3b800u));
  /* 12d3b831 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 12d3b838 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_12d3b83f:;
  /* 12d3b83f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 12d3b843 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 12d3b846 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 12d3b849 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3b84c je 0x12d3b87c */
  if (C.zf) goto L_12d3b87c;
  /* 12d3b84e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3b852 je 0x12d3b87c */
  if (C.zf) goto L_12d3b87c;
  /* 12d3b854 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 12d3b857 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 12d3b85a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 12d3b85e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 12d3b861 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3b866 jne 0x12d3b87a */
  if (!C.zf) goto L_12d3b87a;
  /* 12d3b868 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 12d3b86d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 12d3b871 call 0x12d3b8b6 */
  push32(0x12d3b876u); f_12d3b8b6();
  /* 12d3b876 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x12d3b87au);
L_12d3b87a:;
  /* 12d3b87a jmp 0x12d3b83f */
  goto L_12d3b83f;
L_12d3b87c:;
  /* 12d3b87c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 12d3b883 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3b886 pop edi */
  EDI = (pop32());
  /* 12d3b887 pop esi */
  ESI = (pop32());
  /* 12d3b888 pop ebx */
  EBX = (pop32());
  /* 12d3b889 ret  */
  ESPCHK(0x12d3b822u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8b6 @ 0x12d3b8b6 (24 bytes, 10 insns) */
void f_12d3b8b6(void) {
  FTRACE(0x12d3b8b6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3b8b6 push ebx */
  push32((uint32_t)(EBX));
  /* 12d3b8b7 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3b8b8 mov ebx, 0x12d4d3d8 */
  EBX = (0x12d4d3d8u);
  /* 12d3b8bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3b8c0 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 12d3b8c3 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 12d3b8c6 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 12d3b8c9 pop ecx */
  ECX = (pop32());
  /* 12d3b8ca pop ebx */
  EBX = (pop32());
  /* 12d3b8cb ret 4 */
  ESPCHK(0x12d3b8b6u, _esp0);
  ESP += 8; return;
}

/* FUN_1000b995 @ 0x12d3b995 (27 bytes, 11 insns) */
void f_12d3b995(void) {
  FTRACE(0x12d3b995u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3b995 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3b996 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 12d3b99a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 12d3b99c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12d3b99f push eax */
  push32((uint32_t)(EAX));
  /* 12d3b9a0 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 12d3b9a3 push eax */
  push32((uint32_t)(EAX));
  /* 12d3b9a4 call 0x12d3b822 */
  push32(0x12d3b9a9u); f_12d3b822();
  /* 12d3b9a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3b9ac pop ebp */
  EBP = (pop32());
  /* 12d3b9ad ret 4 */
  ESPCHK(0x12d3b995u, _esp0);
  ESP += 8; return;
}

/* FUN_1000b9b0 @ 0x12d3b9b0 (482 bytes, 138 insns) */
void f_12d3b9b0(void) {
  FTRACE(0x12d3b9b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3b9b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3b9b1 mov ebp, esp */
  EBP = (ESP);
  /* 12d3b9b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3b9b6 push esi */
  push32((uint32_t)(ESI));
  /* 12d3b9b7 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 12d3b9be push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12d3b9c0 call 0x12d361d0 */
  push32(0x12d3b9c5u); f_12d361d0();
  /* 12d3b9c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3b9c8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12d3b9cf jmp 0x12d3b9da */
  goto L_12d3b9da;
L_12d3b9d1:;
  /* 12d3b9d1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3b9d4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3b9d7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12d3b9da:;
  /* 12d3b9da cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3b9de jge 0x12d3bb80 */
  if ((C.sf==C.of)) goto L_12d3bb80;
  /* 12d3b9e4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3b9e7 cmp dword ptr [ecx*4 + 0x12d4fe40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12d4fe40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3b9ef je 0x12d3bae6 */
  if (C.zf) goto L_12d3bae6;
  /* 12d3b9f5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3b9f8 mov eax, dword ptr [edx*4 + 0x12d4fe40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12d4fe40)));
  /* 12d3b9ff mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d3ba02 jmp 0x12d3ba0d */
  goto L_12d3ba0d;
L_12d3ba04:;
  /* 12d3ba04 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3ba07 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3ba0a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d3ba0d:;
  /* 12d3ba0d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3ba10 mov eax, dword ptr [edx*4 + 0x12d4fe40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12d4fe40)));
  /* 12d3ba17 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3ba1c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3ba1f jae 0x12d3bad6 */
  if (!C.cf) goto L_12d3bad6;
  /* 12d3ba25 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3ba28 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12d3ba2c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12d3ba2f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d3ba31 jne 0x12d3bad1 */
  if (!C.zf) goto L_12d3bad1;
  /* 12d3ba37 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3ba3a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3ba3e jne 0x12d3ba79 */
  if (!C.zf) goto L_12d3ba79;
  /* 12d3ba40 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12d3ba42 call 0x12d361d0 */
  push32(0x12d3ba47u); f_12d361d0();
  /* 12d3ba47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3ba4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3ba4d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3ba51 jne 0x12d3ba6f */
  if (!C.zf) goto L_12d3ba6f;
  /* 12d3ba53 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3ba56 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3ba59 push edx */
  push32((uint32_t)(EDX));
  /* 12d3ba5a call dword ptr [0x12d502cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502cc))), 0x12d3ba60u);
  /* 12d3ba60 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3ba63 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12d3ba66 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3ba69 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3ba6c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_12d3ba6f:;
  /* 12d3ba6f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12d3ba71 call 0x12d36270 */
  push32(0x12d3ba76u); f_12d36270();
  /* 12d3ba76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d3ba79:;
  /* 12d3ba79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3ba7c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3ba7f push eax */
  push32((uint32_t)(EAX));
  /* 12d3ba80 call dword ptr [0x12d502d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502d0))), 0x12d3ba86u);
  /* 12d3ba86 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3ba89 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12d3ba8d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12d3ba90 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d3ba92 je 0x12d3baa6 */
  if (C.zf) goto L_12d3baa6;
  /* 12d3ba94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3ba97 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3ba9a push eax */
  push32((uint32_t)(EAX));
  /* 12d3ba9b call dword ptr [0x12d502d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502d4))), 0x12d3baa1u);
  /* 12d3baa1 jmp 0x12d3ba04 */
  goto L_12d3ba04;
L_12d3baa6:;
  /* 12d3baa6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3baa9 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12d3baaf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3bab2 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12d3bab5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3bab8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3babb sub eax, dword ptr [edx*4 + 0x12d4fe40] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x12d4fe40))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3bac2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d3bac3 mov esi, 0x24 */
  ESI = (0x24u);
  /* 12d3bac8 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d3baca add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3bacc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d3bacf jmp 0x12d3bad6 */
  goto L_12d3bad6;
L_12d3bad1:;
  /* 12d3bad1 jmp 0x12d3ba04 */
  goto L_12d3ba04;
L_12d3bad6:;
  /* 12d3bad6 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3bada je 0x12d3bae1 */
  if (C.zf) goto L_12d3bae1;
  /* 12d3badc jmp 0x12d3bb80 */
  goto L_12d3bb80;
L_12d3bae1:;
  /* 12d3bae1 jmp 0x12d3bb7b */
  goto L_12d3bb7b;
L_12d3bae6:;
  /* 12d3bae6 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 12d3bae8 push 0x12d49f8c */
  push32((uint32_t)(0x12d49f8cu));
  /* 12d3baed push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3baef push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12d3baf4 call 0x12d327d0 */
  push32(0x12d3baf9u); f_12d327d0();
  /* 12d3baf9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3bafc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d3baff cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3bb03 je 0x12d3bb79 */
  if (C.zf) goto L_12d3bb79;
  /* 12d3bb05 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3bb08 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3bb0b mov dword ptr [eax*4 + 0x12d4fe40], ecx */
  w32((uint32_t)(EAX*4 + 0x12d4fe40), (ECX));
  /* 12d3bb12 mov edx, dword ptr [0x12d4ff7c] */
  EDX = (r32((uint32_t)(0x12d4ff7c)));
  /* 12d3bb18 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3bb1b mov dword ptr [0x12d4ff7c], edx */
  w32((uint32_t)(0x12d4ff7c), (EDX));
  /* 12d3bb21 jmp 0x12d3bb2c */
  goto L_12d3bb2c;
L_12d3bb23:;
  /* 12d3bb23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3bb26 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3bb29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d3bb2c:;
  /* 12d3bb2c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3bb2f mov edx, dword ptr [ecx*4 + 0x12d4fe40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12d4fe40)));
  /* 12d3bb36 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3bb3c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3bb3f jae 0x12d3bb64 */
  if (!C.cf) goto L_12d3bb64;
  /* 12d3bb41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3bb44 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12d3bb48 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3bb4b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12d3bb51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3bb54 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12d3bb58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3bb5b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12d3bb62 jmp 0x12d3bb23 */
  goto L_12d3bb23;
L_12d3bb64:;
  /* 12d3bb64 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3bb67 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12d3bb6a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d3bb6d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3bb70 push edx */
  push32((uint32_t)(EDX));
  /* 12d3bb71 call 0x12d3bec0 */
  push32(0x12d3bb76u); f_12d3bec0();
  /* 12d3bb76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d3bb79:;
  /* 12d3bb79 jmp 0x12d3bb80 */
  goto L_12d3bb80;
L_12d3bb7b:;
  /* 12d3bb7b jmp 0x12d3b9d1 */
  goto L_12d3b9d1;
L_12d3bb80:;
  /* 12d3bb80 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12d3bb82 call 0x12d36270 */
  push32(0x12d3bb87u); f_12d36270();
  /* 12d3bb87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3bb8a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3bb8d pop esi */
  ESI = (pop32());
  /* 12d3bb8e mov esp, ebp */
  ESP = (EBP);
  /* 12d3bb90 pop ebp */
  EBP = (pop32());
  /* 12d3bb91 ret  */
  ESPCHK(0x12d3b9b0u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x12d3bba0 (183 bytes, 57 insns) */
void f_12d3bba0(void) {
  FTRACE(0x12d3bba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3bba0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3bba1 mov ebp, esp */
  EBP = (ESP);
  /* 12d3bba3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3bba4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3bba7 cmp eax, dword ptr [0x12d4ff7c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d4ff7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3bbad jae 0x12d3bc3a */
  if (!C.cf) goto L_12d3bc3a;
  /* 12d3bbb3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3bbb6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12d3bbb9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3bbbc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12d3bbbf imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d3bbc2 mov eax, dword ptr [ecx*4 + 0x12d4fe40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12d4fe40)));
  /* 12d3bbc9 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3bbcd jne 0x12d3bc3a */
  if (!C.zf) goto L_12d3bc3a;
  /* 12d3bbcf cmp dword ptr [0x12d4e458], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e458))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3bbd6 jne 0x12d3bc1a */
  if (!C.zf) goto L_12d3bc1a;
  /* 12d3bbd8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3bbdb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d3bbde cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3bbe2 je 0x12d3bbf2 */
  if (C.zf) goto L_12d3bbf2;
  /* 12d3bbe4 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3bbe8 je 0x12d3bc00 */
  if (C.zf) goto L_12d3bc00;
  /* 12d3bbea cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3bbee je 0x12d3bc0e */
  if (C.zf) goto L_12d3bc0e;
  /* 12d3bbf0 jmp 0x12d3bc1a */
  goto L_12d3bc1a;
L_12d3bbf2:;
  /* 12d3bbf2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3bbf5 push edx */
  push32((uint32_t)(EDX));
  /* 12d3bbf6 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 12d3bbf8 call dword ptr [0x12d50314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50314))), 0x12d3bbfeu);
  /* 12d3bbfe jmp 0x12d3bc1a */
  goto L_12d3bc1a;
L_12d3bc00:;
  /* 12d3bc00 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3bc03 push eax */
  push32((uint32_t)(EAX));
  /* 12d3bc04 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12d3bc06 call dword ptr [0x12d50314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50314))), 0x12d3bc0cu);
  /* 12d3bc0c jmp 0x12d3bc1a */
  goto L_12d3bc1a;
L_12d3bc0e:;
  /* 12d3bc0e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3bc11 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3bc12 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12d3bc14 call dword ptr [0x12d50314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50314))), 0x12d3bc1au);
L_12d3bc1a:;
  /* 12d3bc1a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3bc1d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12d3bc20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3bc23 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12d3bc26 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d3bc29 mov ecx, dword ptr [edx*4 + 0x12d4fe40] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12d4fe40)));
  /* 12d3bc30 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3bc33 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 12d3bc36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3bc38 jmp 0x12d3bc53 */
  goto L_12d3bc53;
L_12d3bc3a:;
  /* 12d3bc3a call 0x12d3a6a0 */
  push32(0x12d3bc3fu); f_12d3a6a0();
  /* 12d3bc3f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12d3bc45 call 0x12d3a6b0 */
  push32(0x12d3bc4au); f_12d3a6b0();
  /* 12d3bc4a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12d3bc50 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12d3bc53:;
  /* 12d3bc53 mov esp, ebp */
  ESP = (EBP);
  /* 12d3bc55 pop ebp */
  EBP = (pop32());
  /* 12d3bc56 ret  */
  ESPCHK(0x12d3bba0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc60 @ 0x12d3bc60 (216 bytes, 63 insns) */
void f_12d3bc60(void) {
  FTRACE(0x12d3bc60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3bc60 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3bc61 mov ebp, esp */
  EBP = (ESP);
  /* 12d3bc63 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3bc64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3bc67 cmp eax, dword ptr [0x12d4ff7c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d4ff7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3bc6d jae 0x12d3bd1b */
  if (!C.cf) goto L_12d3bd1b;
  /* 12d3bc73 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3bc76 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12d3bc79 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3bc7c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12d3bc7f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d3bc82 mov eax, dword ptr [ecx*4 + 0x12d4fe40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12d4fe40)));
  /* 12d3bc89 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12d3bc8e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12d3bc91 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d3bc93 je 0x12d3bd1b */
  if (C.zf) goto L_12d3bd1b;
  /* 12d3bc99 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3bc9c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12d3bc9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3bca2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12d3bca5 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d3bca8 mov ecx, dword ptr [edx*4 + 0x12d4fe40] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12d4fe40)));
  /* 12d3bcaf cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3bcb3 je 0x12d3bd1b */
  if (C.zf) goto L_12d3bd1b;
  /* 12d3bcb5 cmp dword ptr [0x12d4e458], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e458))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3bcbc jne 0x12d3bcfa */
  if (!C.zf) goto L_12d3bcfa;
  /* 12d3bcbe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3bcc1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d3bcc4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3bcc8 je 0x12d3bcd8 */
  if (C.zf) goto L_12d3bcd8;
  /* 12d3bcca cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3bcce je 0x12d3bce4 */
  if (C.zf) goto L_12d3bce4;
  /* 12d3bcd0 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3bcd4 je 0x12d3bcf0 */
  if (C.zf) goto L_12d3bcf0;
  /* 12d3bcd6 jmp 0x12d3bcfa */
  goto L_12d3bcfa;
L_12d3bcd8:;
  /* 12d3bcd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3bcda push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 12d3bcdc call dword ptr [0x12d50314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50314))), 0x12d3bce2u);
  /* 12d3bce2 jmp 0x12d3bcfa */
  goto L_12d3bcfa;
L_12d3bce4:;
  /* 12d3bce4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3bce6 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12d3bce8 call dword ptr [0x12d50314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50314))), 0x12d3bceeu);
  /* 12d3bcee jmp 0x12d3bcfa */
  goto L_12d3bcfa;
L_12d3bcf0:;
  /* 12d3bcf0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3bcf2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12d3bcf4 call dword ptr [0x12d50314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50314))), 0x12d3bcfau);
L_12d3bcfa:;
  /* 12d3bcfa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3bcfd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12d3bd00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3bd03 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12d3bd06 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d3bd09 mov edx, dword ptr [eax*4 + 0x12d4fe40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12d4fe40)));
  /* 12d3bd10 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 12d3bd17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3bd19 jmp 0x12d3bd34 */
  goto L_12d3bd34;
L_12d3bd1b:;
  /* 12d3bd1b call 0x12d3a6a0 */
  push32(0x12d3bd20u); f_12d3a6a0();
  /* 12d3bd20 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12d3bd26 call 0x12d3a6b0 */
  push32(0x12d3bd2bu); f_12d3a6b0();
  /* 12d3bd2b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12d3bd31 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12d3bd34:;
  /* 12d3bd34 mov esp, ebp */
  ESP = (EBP);
  /* 12d3bd36 pop ebp */
  EBP = (pop32());
  /* 12d3bd37 ret  */
  ESPCHK(0x12d3bc60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd40 @ 0x12d3bd40 (102 bytes, 30 insns) */
void f_12d3bd40(void) {
  FTRACE(0x12d3bd40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3bd40 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3bd41 mov ebp, esp */
  EBP = (ESP);
  /* 12d3bd43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3bd46 cmp eax, dword ptr [0x12d4ff7c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d4ff7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3bd4c jae 0x12d3bd8b */
  if (!C.cf) goto L_12d3bd8b;
  /* 12d3bd4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3bd51 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12d3bd54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3bd57 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12d3bd5a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d3bd5d mov eax, dword ptr [ecx*4 + 0x12d4fe40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12d4fe40)));
  /* 12d3bd64 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12d3bd69 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12d3bd6c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d3bd6e je 0x12d3bd8b */
  if (C.zf) goto L_12d3bd8b;
  /* 12d3bd70 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3bd73 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12d3bd76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3bd79 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12d3bd7c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d3bd7f mov ecx, dword ptr [edx*4 + 0x12d4fe40] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12d4fe40)));
  /* 12d3bd86 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 12d3bd89 jmp 0x12d3bda4 */
  goto L_12d3bda4;
L_12d3bd8b:;
  /* 12d3bd8b call 0x12d3a6a0 */
  push32(0x12d3bd90u); f_12d3a6a0();
  /* 12d3bd90 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12d3bd96 call 0x12d3a6b0 */
  push32(0x12d3bd9bu); f_12d3a6b0();
  /* 12d3bd9b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12d3bda1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12d3bda4:;
  /* 12d3bda4 pop ebp */
  EBP = (pop32());
  /* 12d3bda5 ret  */
  ESPCHK(0x12d3bd40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bdb0 @ 0x12d3bdb0 (260 bytes, 83 insns) */
void f_12d3bdb0(void) {
  FTRACE(0x12d3bdb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3bdb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3bdb1 mov ebp, esp */
  EBP = (ESP);
  /* 12d3bdb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3bdb6 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 12d3bdba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3bdbd and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 12d3bdc0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3bdc2 je 0x12d3bdcd */
  if (C.zf) goto L_12d3bdcd;
  /* 12d3bdc4 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 12d3bdc7 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12d3bdca mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_12d3bdcd:;
  /* 12d3bdcd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3bdd0 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 12d3bdd6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d3bdd8 je 0x12d3bde2 */
  if (C.zf) goto L_12d3bde2;
  /* 12d3bdda mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12d3bddd or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 12d3bddf mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_12d3bde2:;
  /* 12d3bde2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3bde5 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 12d3bdeb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d3bded je 0x12d3bdf8 */
  if (C.zf) goto L_12d3bdf8;
  /* 12d3bdef mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12d3bdf2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 12d3bdf5 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_12d3bdf8:;
  /* 12d3bdf8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3bdfb push eax */
  push32((uint32_t)(EAX));
  /* 12d3bdfc call dword ptr [0x12d5028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d5028c))), 0x12d3be02u);
  /* 12d3be02 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d3be05 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3be09 jne 0x12d3be22 */
  if (!C.zf) goto L_12d3be22;
  /* 12d3be0b call dword ptr [0x12d50280] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50280))), 0x12d3be11u);
  /* 12d3be11 push eax */
  push32((uint32_t)(EAX));
  /* 12d3be12 call 0x12d3a600 */
  push32(0x12d3be17u); f_12d3a600();
  /* 12d3be17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3be1a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d3be1d jmp 0x12d3beb0 */
  goto L_12d3beb0;
L_12d3be22:;
  /* 12d3be22 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3be26 jne 0x12d3be33 */
  if (!C.zf) goto L_12d3be33;
  /* 12d3be28 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 12d3be2b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 12d3be2e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 12d3be31 jmp 0x12d3be42 */
  goto L_12d3be42;
L_12d3be33:;
  /* 12d3be33 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3be37 jne 0x12d3be42 */
  if (!C.zf) goto L_12d3be42;
  /* 12d3be39 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12d3be3c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 12d3be3f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_12d3be42:;
  /* 12d3be42 call 0x12d3b9b0 */
  push32(0x12d3be47u); f_12d3b9b0();
  /* 12d3be47 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d3be4a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3be4e jne 0x12d3be6b */
  if (!C.zf) goto L_12d3be6b;
  /* 12d3be50 call 0x12d3a6a0 */
  push32(0x12d3be55u); f_12d3a6a0();
  /* 12d3be55 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 12d3be5b call 0x12d3a6b0 */
  push32(0x12d3be60u); f_12d3a6b0();
  /* 12d3be60 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12d3be66 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d3be69 jmp 0x12d3beb0 */
  goto L_12d3beb0;
L_12d3be6b:;
  /* 12d3be6b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3be6e push eax */
  push32((uint32_t)(EAX));
  /* 12d3be6f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3be72 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3be73 call 0x12d3bba0 */
  push32(0x12d3be78u); f_12d3bba0();
  /* 12d3be78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3be7b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12d3be7e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 12d3be81 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 12d3be84 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3be87 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12d3be8a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3be8d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12d3be90 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d3be93 mov edx, dword ptr [eax*4 + 0x12d4fe40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12d4fe40)));
  /* 12d3be9a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12d3be9d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 12d3bea1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3bea4 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3bea5 call 0x12d3bf50 */
  push32(0x12d3beaau); f_12d3bf50();
  /* 12d3beaa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3bead mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12d3beb0:;
  /* 12d3beb0 mov esp, ebp */
  ESP = (EBP);
  /* 12d3beb2 pop ebp */
  EBP = (pop32());
  /* 12d3beb3 ret  */
  ESPCHK(0x12d3bdb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bec0 @ 0x12d3bec0 (134 bytes, 44 insns) */
void f_12d3bec0(void) {
  FTRACE(0x12d3bec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3bec0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3bec1 mov ebp, esp */
  EBP = (ESP);
  /* 12d3bec3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3bec4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3bec7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12d3beca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3becd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12d3bed0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d3bed3 mov edx, dword ptr [eax*4 + 0x12d4fe40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12d4fe40)));
  /* 12d3beda add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3bedc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d3bedf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3bee2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3bee6 jne 0x12d3bf21 */
  if (!C.zf) goto L_12d3bf21;
  /* 12d3bee8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12d3beea call 0x12d361d0 */
  push32(0x12d3beefu); f_12d361d0();
  /* 12d3beef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3bef2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3bef5 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3bef9 jne 0x12d3bf17 */
  if (!C.zf) goto L_12d3bf17;
  /* 12d3befb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3befe add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3bf01 push edx */
  push32((uint32_t)(EDX));
  /* 12d3bf02 call dword ptr [0x12d502cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502cc))), 0x12d3bf08u);
  /* 12d3bf08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3bf0b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12d3bf0e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3bf11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3bf14 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_12d3bf17:;
  /* 12d3bf17 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12d3bf19 call 0x12d36270 */
  push32(0x12d3bf1eu); f_12d36270();
  /* 12d3bf1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d3bf21:;
  /* 12d3bf21 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3bf24 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12d3bf27 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3bf2a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12d3bf2d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d3bf30 mov edx, dword ptr [eax*4 + 0x12d4fe40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12d4fe40)));
  /* 12d3bf37 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 12d3bf3b push eax */
  push32((uint32_t)(EAX));
  /* 12d3bf3c call dword ptr [0x12d502d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502d0))), 0x12d3bf42u);
  /* 12d3bf42 mov esp, ebp */
  ESP = (EBP);
  /* 12d3bf44 pop ebp */
  EBP = (pop32());
  /* 12d3bf45 ret  */
  ESPCHK(0x12d3bec0u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x12d3bf50 (38 bytes, 13 insns) */
void f_12d3bf50(void) {
  FTRACE(0x12d3bf50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3bf50 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3bf51 mov ebp, esp */
  EBP = (ESP);
  /* 12d3bf53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3bf56 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12d3bf59 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3bf5c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12d3bf5f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d3bf62 mov edx, dword ptr [eax*4 + 0x12d4fe40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12d4fe40)));
  /* 12d3bf69 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 12d3bf6d push eax */
  push32((uint32_t)(EAX));
  /* 12d3bf6e call dword ptr [0x12d502d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502d4))), 0x12d3bf74u);
  /* 12d3bf74 pop ebp */
  EBP = (pop32());
  /* 12d3bf75 ret  */
  ESPCHK(0x12d3bf50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf80 @ 0x12d3bf80 (218 bytes, 63 insns) */
void f_12d3bf80(void) {
  FTRACE(0x12d3bf80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3bf80 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3bf81 mov ebp, esp */
  EBP = (ESP);
  /* 12d3bf83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3bf86 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d3bf8d push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3bf8f call 0x12d361d0 */
  push32(0x12d3bf94u); f_12d361d0();
  /* 12d3bf94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3bf97 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 12d3bf9e jmp 0x12d3bfa9 */
  goto L_12d3bfa9;
L_12d3bfa0:;
  /* 12d3bfa0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3bfa3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3bfa6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12d3bfa9:;
  /* 12d3bfa9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3bfac cmp ecx, dword ptr [0x12d4fb40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d4fb40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3bfb2 jge 0x12d3c049 */
  if ((C.sf==C.of)) goto L_12d3c049;
  /* 12d3bfb8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3bfbb mov eax, dword ptr [0x12d4e7f0] */
  EAX = (r32((uint32_t)(0x12d4e7f0)));
  /* 12d3bfc0 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3bfc4 je 0x12d3c044 */
  if (C.zf) goto L_12d3c044;
  /* 12d3bfc6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3bfc9 mov edx, dword ptr [0x12d4e7f0] */
  EDX = (r32((uint32_t)(0x12d4e7f0)));
  /* 12d3bfcf mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12d3bfd2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12d3bfd5 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 12d3bfdb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d3bfdd je 0x12d3c001 */
  if (C.zf) goto L_12d3c001;
  /* 12d3bfdf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3bfe2 mov eax, dword ptr [0x12d4e7f0] */
  EAX = (r32((uint32_t)(0x12d4e7f0)));
  /* 12d3bfe7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12d3bfea push ecx */
  push32((uint32_t)(ECX));
  /* 12d3bfeb call 0x12d3cd70 */
  push32(0x12d3bff0u); f_12d3cd70();
  /* 12d3bff0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3bff3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3bff6 je 0x12d3c001 */
  if (C.zf) goto L_12d3c001;
  /* 12d3bff8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3bffb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3bffe mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12d3c001:;
  /* 12d3c001 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3c005 jl 0x12d3c044 */
  if ((C.sf!=C.of)) goto L_12d3c044;
  /* 12d3c007 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3c00a mov ecx, dword ptr [0x12d4e7f0] */
  ECX = (r32((uint32_t)(0x12d4e7f0)));
  /* 12d3c010 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12d3c013 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c016 push edx */
  push32((uint32_t)(EDX));
  /* 12d3c017 call dword ptr [0x12d50294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50294))), 0x12d3c01du);
  /* 12d3c01d push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3c01f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3c022 mov ecx, dword ptr [0x12d4e7f0] */
  ECX = (r32((uint32_t)(0x12d4e7f0)));
  /* 12d3c028 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12d3c02b push edx */
  push32((uint32_t)(EDX));
  /* 12d3c02c call 0x12d33260 */
  push32(0x12d3c031u); f_12d33260();
  /* 12d3c031 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c034 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3c037 mov ecx, dword ptr [0x12d4e7f0] */
  ECX = (r32((uint32_t)(0x12d4e7f0)));
  /* 12d3c03d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_12d3c044:;
  /* 12d3c044 jmp 0x12d3bfa0 */
  goto L_12d3bfa0;
L_12d3c049:;
  /* 12d3c049 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3c04b call 0x12d36270 */
  push32(0x12d3c050u); f_12d36270();
  /* 12d3c050 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c053 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3c056 mov esp, ebp */
  ESP = (EBP);
  /* 12d3c058 pop ebp */
  EBP = (pop32());
  /* 12d3c059 ret  */
  ESPCHK(0x12d3bf80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c060 @ 0x12d3c060 (68 bytes, 26 insns) */
void f_12d3c060(void) {
  FTRACE(0x12d3c060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3c060 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3c061 mov ebp, esp */
  EBP = (ESP);
  /* 12d3c063 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3c064 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3c068 jne 0x12d3c076 */
  if (!C.zf) goto L_12d3c076;
  /* 12d3c06a push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3c06c call 0x12d3c1d0 */
  push32(0x12d3c071u); f_12d3c1d0();
  /* 12d3c071 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c074 jmp 0x12d3c0a0 */
  goto L_12d3c0a0;
L_12d3c076:;
  /* 12d3c076 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3c079 push eax */
  push32((uint32_t)(EAX));
  /* 12d3c07a call 0x12d3b5e0 */
  push32(0x12d3c07fu); f_12d3b5e0();
  /* 12d3c07f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c082 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3c085 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3c086 call 0x12d3c0b0 */
  push32(0x12d3c08bu); f_12d3c0b0();
  /* 12d3c08b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c08e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d3c091 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3c094 push edx */
  push32((uint32_t)(EDX));
  /* 12d3c095 call 0x12d3b650 */
  push32(0x12d3c09au); f_12d3b650();
  /* 12d3c09a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c09d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12d3c0a0:;
  /* 12d3c0a0 mov esp, ebp */
  ESP = (EBP);
  /* 12d3c0a2 pop ebp */
  EBP = (pop32());
  /* 12d3c0a3 ret  */
  ESPCHK(0x12d3c060u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0b0 @ 0x12d3c0b0 (65 bytes, 26 insns) */
void f_12d3c0b0(void) {
  FTRACE(0x12d3c0b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3c0b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3c0b1 mov ebp, esp */
  EBP = (ESP);
  /* 12d3c0b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3c0b6 push eax */
  push32((uint32_t)(EAX));
  /* 12d3c0b7 call 0x12d3c100 */
  push32(0x12d3c0bcu); f_12d3c100();
  /* 12d3c0bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c0bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3c0c1 je 0x12d3c0c8 */
  if (C.zf) goto L_12d3c0c8;
  /* 12d3c0c3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d3c0c6 jmp 0x12d3c0ef */
  goto L_12d3c0ef;
L_12d3c0c8:;
  /* 12d3c0c8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3c0cb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d3c0ce and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 12d3c0d4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d3c0d6 je 0x12d3c0ed */
  if (C.zf) goto L_12d3c0ed;
  /* 12d3c0d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3c0db mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d3c0de push ecx */
  push32((uint32_t)(ECX));
  /* 12d3c0df call 0x12d3cec0 */
  push32(0x12d3c0e4u); f_12d3cec0();
  /* 12d3c0e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c0e7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d3c0e9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3c0eb jmp 0x12d3c0ef */
  goto L_12d3c0ef;
L_12d3c0ed:;
  /* 12d3c0ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d3c0ef:;
  /* 12d3c0ef pop ebp */
  EBP = (pop32());
  /* 12d3c0f0 ret  */
  ESPCHK(0x12d3c0b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c100 @ 0x12d3c100 (183 bytes, 62 insns) */
void f_12d3c100(void) {
  FTRACE(0x12d3c100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3c100 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3c101 mov ebp, esp */
  EBP = (ESP);
  /* 12d3c103 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3c106 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d3c10d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3c110 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d3c113 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3c116 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d3c119 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12d3c11c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3c11f jne 0x12d3c19b */
  if (!C.zf) goto L_12d3c19b;
  /* 12d3c121 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3c124 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12d3c127 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 12d3c12d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d3c12f je 0x12d3c19b */
  if (C.zf) goto L_12d3c19b;
  /* 12d3c131 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3c134 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3c137 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 12d3c139 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3c13c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d3c13f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3c143 jle 0x12d3c19b */
  if ((C.zf||C.sf!=C.of)) goto L_12d3c19b;
  /* 12d3c145 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3c148 push edx */
  push32((uint32_t)(EDX));
  /* 12d3c149 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3c14c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12d3c14f push ecx */
  push32((uint32_t)(ECX));
  /* 12d3c150 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3c153 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12d3c156 push eax */
  push32((uint32_t)(EAX));
  /* 12d3c157 call 0x12d3b070 */
  push32(0x12d3c15cu); f_12d3b070();
  /* 12d3c15c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c15f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3c162 jne 0x12d3c185 */
  if (!C.zf) goto L_12d3c185;
  /* 12d3c164 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3c167 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d3c16a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 12d3c170 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d3c172 je 0x12d3c183 */
  if (C.zf) goto L_12d3c183;
  /* 12d3c174 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3c177 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12d3c17a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 12d3c17d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3c180 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_12d3c183:;
  /* 12d3c183 jmp 0x12d3c19b */
  goto L_12d3c19b;
L_12d3c185:;
  /* 12d3c185 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3c188 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12d3c18b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 12d3c18e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3c191 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12d3c194 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12d3c19b:;
  /* 12d3c19b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3c19e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3c1a1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12d3c1a4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12d3c1a6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3c1a9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 12d3c1b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3c1b3 mov esp, ebp */
  ESP = (EBP);
  /* 12d3c1b5 pop ebp */
  EBP = (pop32());
  /* 12d3c1b6 ret  */
  ESPCHK(0x12d3c100u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1c0 @ 0x12d3c1c0 (15 bytes, 7 insns) */
void f_12d3c1c0(void) {
  FTRACE(0x12d3c1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3c1c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3c1c1 mov ebp, esp */
  EBP = (ESP);
  /* 12d3c1c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3c1c5 call 0x12d3c1d0 */
  push32(0x12d3c1cau); f_12d3c1d0();
  /* 12d3c1ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c1cd pop ebp */
  EBP = (pop32());
  /* 12d3c1ce ret  */
  ESPCHK(0x12d3c1c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1d0 @ 0x12d3c1d0 (319 bytes, 94 insns) */
void f_12d3c1d0(void) {
  FTRACE(0x12d3c1d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3c1d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3c1d1 mov ebp, esp */
  EBP = (ESP);
  /* 12d3c1d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3c1d6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d3c1dd mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d3c1e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3c1e6 call 0x12d361d0 */
  push32(0x12d3c1ebu); f_12d361d0();
  /* 12d3c1eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c1ee mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12d3c1f5 jmp 0x12d3c200 */
  goto L_12d3c200;
L_12d3c1f7:;
  /* 12d3c1f7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3c1fa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c1fd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12d3c200:;
  /* 12d3c200 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3c203 cmp ecx, dword ptr [0x12d4fb40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d4fb40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3c209 jge 0x12d3c2f3 */
  if ((C.sf==C.of)) goto L_12d3c2f3;
  /* 12d3c20f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3c212 mov eax, dword ptr [0x12d4e7f0] */
  EAX = (r32((uint32_t)(0x12d4e7f0)));
  /* 12d3c217 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3c21b je 0x12d3c2ee */
  if (C.zf) goto L_12d3c2ee;
  /* 12d3c221 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3c224 mov edx, dword ptr [0x12d4e7f0] */
  EDX = (r32((uint32_t)(0x12d4e7f0)));
  /* 12d3c22a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12d3c22d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12d3c230 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 12d3c236 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d3c238 je 0x12d3c2ee */
  if (C.zf) goto L_12d3c2ee;
  /* 12d3c23e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3c241 mov eax, dword ptr [0x12d4e7f0] */
  EAX = (r32((uint32_t)(0x12d4e7f0)));
  /* 12d3c246 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12d3c249 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3c24a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3c24d push edx */
  push32((uint32_t)(EDX));
  /* 12d3c24e call 0x12d3b620 */
  push32(0x12d3c253u); f_12d3b620();
  /* 12d3c253 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c256 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3c259 mov ecx, dword ptr [0x12d4e7f0] */
  ECX = (r32((uint32_t)(0x12d4e7f0)));
  /* 12d3c25f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12d3c262 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12d3c265 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 12d3c26a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3c26c je 0x12d3c2d5 */
  if (C.zf) goto L_12d3c2d5;
  /* 12d3c26e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3c272 jne 0x12d3c299 */
  if (!C.zf) goto L_12d3c299;
  /* 12d3c274 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3c277 mov edx, dword ptr [0x12d4e7f0] */
  EDX = (r32((uint32_t)(0x12d4e7f0)));
  /* 12d3c27d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12d3c280 push eax */
  push32((uint32_t)(EAX));
  /* 12d3c281 call 0x12d3c0b0 */
  push32(0x12d3c286u); f_12d3c0b0();
  /* 12d3c286 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c289 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3c28c je 0x12d3c297 */
  if (C.zf) goto L_12d3c297;
  /* 12d3c28e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3c291 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c294 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d3c297:;
  /* 12d3c297 jmp 0x12d3c2d5 */
  goto L_12d3c2d5;
L_12d3c299:;
  /* 12d3c299 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3c29d jne 0x12d3c2d5 */
  if (!C.zf) goto L_12d3c2d5;
  /* 12d3c29f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3c2a2 mov eax, dword ptr [0x12d4e7f0] */
  EAX = (r32((uint32_t)(0x12d4e7f0)));
  /* 12d3c2a7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12d3c2aa mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d3c2ad and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12d3c2b0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d3c2b2 je 0x12d3c2d5 */
  if (C.zf) goto L_12d3c2d5;
  /* 12d3c2b4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3c2b7 mov ecx, dword ptr [0x12d4e7f0] */
  ECX = (r32((uint32_t)(0x12d4e7f0)));
  /* 12d3c2bd mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12d3c2c0 push edx */
  push32((uint32_t)(EDX));
  /* 12d3c2c1 call 0x12d3c0b0 */
  push32(0x12d3c2c6u); f_12d3c0b0();
  /* 12d3c2c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c2c9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3c2cc jne 0x12d3c2d5 */
  if (!C.zf) goto L_12d3c2d5;
  /* 12d3c2ce mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_12d3c2d5:;
  /* 12d3c2d5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3c2d8 mov ecx, dword ptr [0x12d4e7f0] */
  ECX = (r32((uint32_t)(0x12d4e7f0)));
  /* 12d3c2de mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12d3c2e1 push edx */
  push32((uint32_t)(EDX));
  /* 12d3c2e2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3c2e5 push eax */
  push32((uint32_t)(EAX));
  /* 12d3c2e6 call 0x12d3b690 */
  push32(0x12d3c2ebu); f_12d3b690();
  /* 12d3c2eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d3c2ee:;
  /* 12d3c2ee jmp 0x12d3c1f7 */
  goto L_12d3c1f7;
L_12d3c2f3:;
  /* 12d3c2f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3c2f5 call 0x12d36270 */
  push32(0x12d3c2fau); f_12d36270();
  /* 12d3c2fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c2fd cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3c301 jne 0x12d3c308 */
  if (!C.zf) goto L_12d3c308;
  /* 12d3c303 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3c306 jmp 0x12d3c30b */
  goto L_12d3c30b;
L_12d3c308:;
  /* 12d3c308 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12d3c30b:;
  /* 12d3c30b mov esp, ebp */
  ESP = (EBP);
  /* 12d3c30d pop ebp */
  EBP = (pop32());
  /* 12d3c30e ret  */
  ESPCHK(0x12d3c1d0u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x12d3c310 (15 bytes, 7 insns) */
void f_12d3c310(void) {
  FTRACE(0x12d3c310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3c310 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3c311 mov ebp, esp */
  EBP = (ESP);
  /* 12d3c313 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3c315 call 0x12d31740 */
  push32(0x12d3c31au); f_12d31740();
  /* 12d3c31a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c31d pop ebp */
  EBP = (pop32());
  /* 12d3c31e ret  */
  ESPCHK(0x12d3c310u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c320 @ 0x12d3c320 (1007 bytes, 269 insns) */
void f_12d3c320(void) {
  FTRACE(0x12d3c320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3c320 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3c321 mov ebp, esp */
  EBP = (ESP);
  /* 12d3c323 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3c329 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3c32d jl 0x12d3c335 */
  if ((C.sf!=C.of)) goto L_12d3c335;
  /* 12d3c32f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3c333 jle 0x12d3c33c */
  if ((C.zf||C.sf!=C.of)) goto L_12d3c33c;
L_12d3c335:;
  /* 12d3c335 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3c337 jmp 0x12d3c70b */
  goto L_12d3c70b;
L_12d3c33c:;
  /* 12d3c33c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12d3c33e call 0x12d361d0 */
  push32(0x12d3c343u); f_12d361d0();
  /* 12d3c343 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c346 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12d3c34d mov eax, dword ptr [0x12d4e7dc] */
  EAX = (r32((uint32_t)(0x12d4e7dc)));
  /* 12d3c352 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c355 mov dword ptr [0x12d4e7dc], eax */
  w32((uint32_t)(0x12d4e7dc), (EAX));
L_12d3c35a:;
  /* 12d3c35a cmp dword ptr [0x12d4e7ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e7ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3c361 je 0x12d3c36d */
  if (C.zf) goto L_12d3c36d;
  /* 12d3c363 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3c365 call dword ptr [0x12d50318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50318))), 0x12d3c36bu);
  /* 12d3c36b jmp 0x12d3c35a */
  goto L_12d3c35a;
L_12d3c36d:;
  /* 12d3c36d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3c371 je 0x12d3c3b1 */
  if (C.zf) goto L_12d3c3b1;
  /* 12d3c373 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3c377 je 0x12d3c391 */
  if (C.zf) goto L_12d3c391;
  /* 12d3c379 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3c37c push ecx */
  push32((uint32_t)(ECX));
  /* 12d3c37d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3c380 push edx */
  push32((uint32_t)(EDX));
  /* 12d3c381 call 0x12d3c710 */
  push32(0x12d3c386u); f_12d3c710();
  /* 12d3c386 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c389 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 12d3c38f jmp 0x12d3c3a3 */
  goto L_12d3c3a3;
L_12d3c391:;
  /* 12d3c391 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3c394 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d3c397 mov ecx, dword ptr [eax + 0x12d4d4fc] */
  ECX = (r32((uint32_t)(EAX + 0x12d4d4fc)));
  /* 12d3c39d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_12d3c3a3:;
  /* 12d3c3a3 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 12d3c3a9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12d3c3ac jmp 0x12d3c6eb */
  goto L_12d3c6eb;
L_12d3c3b1:;
  /* 12d3c3b1 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 12d3c3b8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12d3c3bf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3c3c3 je 0x12d3c6e3 */
  if (C.zf) goto L_12d3c6e3;
  /* 12d3c3c9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3c3cc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d3c3cf cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3c3d2 jne 0x12d3c5f4 */
  if (!C.zf) goto L_12d3c5f4;
  /* 12d3c3d8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3c3db movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12d3c3df cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3c3e2 jne 0x12d3c5f4 */
  if (!C.zf) goto L_12d3c5f4;
  /* 12d3c3e8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3c3eb movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 12d3c3ef cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3c3f2 jne 0x12d3c5f4 */
  if (!C.zf) goto L_12d3c5f4;
  /* 12d3c3f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3c3fb mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_12d3c401:;
  /* 12d3c401 push 0x12d49fdc */
  push32((uint32_t)(0x12d49fdcu));
  /* 12d3c406 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12d3c40c push ecx */
  push32((uint32_t)(ECX));
  /* 12d3c40d call 0x12d3e570 */
  push32(0x12d3c412u); f_12d3e570();
  /* 12d3c412 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c415 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 12d3c41b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3c422 je 0x12d3c44d */
  if (C.zf) goto L_12d3c44d;
  /* 12d3c424 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12d3c42a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3c430 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 12d3c436 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3c43d je 0x12d3c44d */
  if (C.zf) goto L_12d3c44d;
  /* 12d3c43f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12d3c445 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d3c448 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3c44b jne 0x12d3c473 */
  if (!C.zf) goto L_12d3c473;
L_12d3c44d:;
  /* 12d3c44d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3c451 je 0x12d3c46c */
  if (C.zf) goto L_12d3c46c;
  /* 12d3c453 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12d3c455 call 0x12d36270 */
  push32(0x12d3c45au); f_12d36270();
  /* 12d3c45a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c45d mov edx, dword ptr [0x12d4e7dc] */
  EDX = (r32((uint32_t)(0x12d4e7dc)));
  /* 12d3c463 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3c466 mov dword ptr [0x12d4e7dc], edx */
  w32((uint32_t)(0x12d4e7dc), (EDX));
L_12d3c46c:;
  /* 12d3c46c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3c46e jmp 0x12d3c70b */
  goto L_12d3c70b;
L_12d3c473:;
  /* 12d3c473 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12d3c47a jmp 0x12d3c485 */
  goto L_12d3c485;
L_12d3c47c:;
  /* 12d3c47c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3c47f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c482 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12d3c485:;
  /* 12d3c485 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3c489 jg 0x12d3c4d3 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d3c4d3;
  /* 12d3c48b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12d3c491 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3c492 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12d3c498 push edx */
  push32((uint32_t)(EDX));
  /* 12d3c499 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3c49c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d3c49f mov ecx, dword ptr [eax + 0x12d4d4f8] */
  ECX = (r32((uint32_t)(EAX + 0x12d4d4f8)));
  /* 12d3c4a5 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3c4a6 call 0x12d3e530 */
  push32(0x12d3c4abu); f_12d3e530();
  /* 12d3c4ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c4ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3c4b0 jne 0x12d3c4d1 */
  if (!C.zf) goto L_12d3c4d1;
  /* 12d3c4b2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3c4b5 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d3c4b8 mov eax, dword ptr [edx + 0x12d4d4f8] */
  EAX = (r32((uint32_t)(EDX + 0x12d4d4f8)));
  /* 12d3c4be push eax */
  push32((uint32_t)(EAX));
  /* 12d3c4bf call 0x12d35600 */
  push32(0x12d3c4c4u); f_12d35600();
  /* 12d3c4c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c4c7 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3c4cd jne 0x12d3c4d1 */
  if (!C.zf) goto L_12d3c4d1;
  /* 12d3c4cf jmp 0x12d3c4d3 */
  goto L_12d3c4d3;
L_12d3c4d1:;
  /* 12d3c4d1 jmp 0x12d3c47c */
  goto L_12d3c47c;
L_12d3c4d3:;
  /* 12d3c4d3 push 0x12d49fd8 */
  push32((uint32_t)(0x12d49fd8u));
  /* 12d3c4d8 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12d3c4de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c4e1 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 12d3c4e7 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12d3c4ed push edx */
  push32((uint32_t)(EDX));
  /* 12d3c4ee call 0x12d3e4f0 */
  push32(0x12d3c4f3u); f_12d3e4f0();
  /* 12d3c4f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c4f6 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 12d3c4fc cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3c503 jne 0x12d3c539 */
  if (!C.zf) goto L_12d3c539;
  /* 12d3c505 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12d3c50b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d3c50e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3c511 je 0x12d3c539 */
  if (C.zf) goto L_12d3c539;
  /* 12d3c513 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3c517 je 0x12d3c532 */
  if (C.zf) goto L_12d3c532;
  /* 12d3c519 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12d3c51b call 0x12d36270 */
  push32(0x12d3c520u); f_12d36270();
  /* 12d3c520 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c523 mov edx, dword ptr [0x12d4e7dc] */
  EDX = (r32((uint32_t)(0x12d4e7dc)));
  /* 12d3c529 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3c52c mov dword ptr [0x12d4e7dc], edx */
  w32((uint32_t)(0x12d4e7dc), (EDX));
L_12d3c532:;
  /* 12d3c532 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3c534 jmp 0x12d3c70b */
  goto L_12d3c70b;
L_12d3c539:;
  /* 12d3c539 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3c53d jg 0x12d3c58a */
  if ((!C.zf&&C.sf==C.of)) goto L_12d3c58a;
  /* 12d3c53f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12d3c545 push eax */
  push32((uint32_t)(EAX));
  /* 12d3c546 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12d3c54c push ecx */
  push32((uint32_t)(ECX));
  /* 12d3c54d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 12d3c553 push edx */
  push32((uint32_t)(EDX));
  /* 12d3c554 call 0x12d35ff0 */
  push32(0x12d3c559u); f_12d35ff0();
  /* 12d3c559 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c55c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12d3c562 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 12d3c56a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 12d3c570 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3c571 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3c574 push edx */
  push32((uint32_t)(EDX));
  /* 12d3c575 call 0x12d3c710 */
  push32(0x12d3c57au); f_12d3c710();
  /* 12d3c57a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c57d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3c57f je 0x12d3c58a */
  if (C.zf) goto L_12d3c58a;
  /* 12d3c581 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3c584 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c587 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12d3c58a:;
  /* 12d3c58a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12d3c590 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c596 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 12d3c59c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12d3c5a2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d3c5a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3c5a7 je 0x12d3c5b8 */
  if (C.zf) goto L_12d3c5b8;
  /* 12d3c5a9 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12d3c5af add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c5b2 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_12d3c5b8:;
  /* 12d3c5b8 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12d3c5be movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d3c5c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3c5c3 jne 0x12d3c401 */
  if (!C.zf) goto L_12d3c401;
  /* 12d3c5c9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3c5cd je 0x12d3c5dc */
  if (C.zf) goto L_12d3c5dc;
  /* 12d3c5cf call 0x12d3c8b0 */
  push32(0x12d3c5d4u); f_12d3c8b0();
  /* 12d3c5d4 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 12d3c5da jmp 0x12d3c5e6 */
  goto L_12d3c5e6;
L_12d3c5dc:;
  /* 12d3c5dc mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_12d3c5e6:;
  /* 12d3c5e6 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 12d3c5ec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d3c5ef jmp 0x12d3c6e1 */
  goto L_12d3c6e1;
L_12d3c5f4:;
  /* 12d3c5f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3c5f7 push edx */
  push32((uint32_t)(EDX));
  /* 12d3c5f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3c5fa push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3c5fc lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 12d3c602 push eax */
  push32((uint32_t)(EAX));
  /* 12d3c603 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3c606 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3c607 call 0x12d3c9b0 */
  push32(0x12d3c60cu); f_12d3c9b0();
  /* 12d3c60c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c60f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d3c612 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3c616 je 0x12d3c6e1 */
  if (C.zf) goto L_12d3c6e1;
  /* 12d3c61c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12d3c623 jmp 0x12d3c62e */
  goto L_12d3c62e;
L_12d3c625:;
  /* 12d3c625 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3c628 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c62b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12d3c62e:;
  /* 12d3c62e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3c632 jg 0x12d3c690 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d3c690;
  /* 12d3c634 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3c638 je 0x12d3c68e */
  if (C.zf) goto L_12d3c68e;
  /* 12d3c63a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3c63d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d3c640 mov ecx, dword ptr [eax + 0x12d4d4fc] */
  ECX = (r32((uint32_t)(EAX + 0x12d4d4fc)));
  /* 12d3c646 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3c647 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 12d3c64d push edx */
  push32((uint32_t)(EDX));
  /* 12d3c64e call 0x12d3e460 */
  push32(0x12d3c653u); f_12d3e460();
  /* 12d3c653 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c656 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3c658 je 0x12d3c685 */
  if (C.zf) goto L_12d3c685;
  /* 12d3c65a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 12d3c660 push eax */
  push32((uint32_t)(EAX));
  /* 12d3c661 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3c664 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3c665 call 0x12d3c710 */
  push32(0x12d3c66au); f_12d3c710();
  /* 12d3c66a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c66d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3c66f je 0x12d3c67c */
  if (C.zf) goto L_12d3c67c;
  /* 12d3c671 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3c674 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c677 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12d3c67a jmp 0x12d3c683 */
  goto L_12d3c683;
L_12d3c67c:;
  /* 12d3c67c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_12d3c683:;
  /* 12d3c683 jmp 0x12d3c68e */
  goto L_12d3c68e;
L_12d3c685:;
  /* 12d3c685 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3c688 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c68b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12d3c68e:;
  /* 12d3c68e jmp 0x12d3c625 */
  goto L_12d3c625;
L_12d3c690:;
  /* 12d3c690 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3c694 je 0x12d3c6bb */
  if (C.zf) goto L_12d3c6bb;
  /* 12d3c696 call 0x12d3c8b0 */
  push32(0x12d3c69bu); f_12d3c8b0();
  /* 12d3c69b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d3c69e push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3c6a0 mov ecx, dword ptr [0x12d4d4fc] */
  ECX = (r32((uint32_t)(0x12d4d4fc)));
  /* 12d3c6a6 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3c6a7 call 0x12d33260 */
  push32(0x12d3c6acu); f_12d33260();
  /* 12d3c6ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c6af mov dword ptr [0x12d4d4fc], 0 */
  w32((uint32_t)(0x12d4d4fc), (0x0u));
  /* 12d3c6b9 jmp 0x12d3c6e1 */
  goto L_12d3c6e1;
L_12d3c6bb:;
  /* 12d3c6bb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3c6bf je 0x12d3c6ce */
  if (C.zf) goto L_12d3c6ce;
  /* 12d3c6c1 call 0x12d3c8b0 */
  push32(0x12d3c6c6u); f_12d3c8b0();
  /* 12d3c6c6 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 12d3c6cc jmp 0x12d3c6d8 */
  goto L_12d3c6d8;
L_12d3c6ce:;
  /* 12d3c6ce mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_12d3c6d8:;
  /* 12d3c6d8 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 12d3c6de mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12d3c6e1:;
  /* 12d3c6e1 jmp 0x12d3c6eb */
  goto L_12d3c6eb;
L_12d3c6e3:;
  /* 12d3c6e3 call 0x12d3c8b0 */
  push32(0x12d3c6e8u); f_12d3c8b0();
  /* 12d3c6e8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12d3c6eb:;
  /* 12d3c6eb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3c6ef je 0x12d3c708 */
  if (C.zf) goto L_12d3c708;
  /* 12d3c6f1 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12d3c6f3 call 0x12d36270 */
  push32(0x12d3c6f8u); f_12d36270();
  /* 12d3c6f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c6fb mov eax, dword ptr [0x12d4e7dc] */
  EAX = (r32((uint32_t)(0x12d4e7dc)));
  /* 12d3c700 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3c703 mov dword ptr [0x12d4e7dc], eax */
  w32((uint32_t)(0x12d4e7dc), (EAX));
L_12d3c708:;
  /* 12d3c708 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12d3c70b:;
  /* 12d3c70b mov esp, ebp */
  ESP = (EBP);
  /* 12d3c70d pop ebp */
  EBP = (pop32());
  /* 12d3c70e ret  */
  ESPCHK(0x12d3c320u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c710 @ 0x12d3c710 (403 bytes, 117 insns) */
void f_12d3c710(void) {
  FTRACE(0x12d3c710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3c710 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3c711 mov ebp, esp */
  EBP = (ESP);
  /* 12d3c713 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3c719 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3c71c push eax */
  push32((uint32_t)(EAX));
  /* 12d3c71d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 12d3c723 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3c724 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 12d3c72a push edx */
  push32((uint32_t)(EDX));
  /* 12d3c72b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 12d3c731 push eax */
  push32((uint32_t)(EAX));
  /* 12d3c732 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3c735 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3c736 call 0x12d3c9b0 */
  push32(0x12d3c73bu); f_12d3c9b0();
  /* 12d3c73b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c73e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3c740 jne 0x12d3c749 */
  if (!C.zf) goto L_12d3c749;
  /* 12d3c742 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3c744 jmp 0x12d3c89f */
  goto L_12d3c89f;
L_12d3c749:;
  /* 12d3c749 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 12d3c74e push 0x12d49fe0 */
  push32((uint32_t)(0x12d49fe0u));
  /* 12d3c753 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3c755 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 12d3c75b push edx */
  push32((uint32_t)(EDX));
  /* 12d3c75c call 0x12d35600 */
  push32(0x12d3c761u); f_12d35600();
  /* 12d3c761 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c764 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c767 push eax */
  push32((uint32_t)(EAX));
  /* 12d3c768 call 0x12d327d0 */
  push32(0x12d3c76du); f_12d327d0();
  /* 12d3c76d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c770 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d3c773 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3c777 jne 0x12d3c780 */
  if (!C.zf) goto L_12d3c780;
  /* 12d3c779 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3c77b jmp 0x12d3c89f */
  goto L_12d3c89f;
L_12d3c780:;
  /* 12d3c780 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3c783 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d3c786 mov ecx, dword ptr [eax + 0x12d4d4fc] */
  ECX = (r32((uint32_t)(EAX + 0x12d4d4fc)));
  /* 12d3c78c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d3c78f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3c792 mov eax, dword ptr [edx*4 + 0x12d4e658] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12d4e658)));
  /* 12d3c799 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d3c79c push 6 */
  push32((uint32_t)(0x6u));
  /* 12d3c79e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3c7a1 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d3c7a4 add ecx, 0x12d4e6a8 */
  { uint32_t _a=(ECX),_b=(0x12d4e6a8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c7aa push ecx */
  push32((uint32_t)(ECX));
  /* 12d3c7ab lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 12d3c7ae push edx */
  push32((uint32_t)(EDX));
  /* 12d3c7af call 0x12d390b0 */
  push32(0x12d3c7b4u); f_12d390b0();
  /* 12d3c7b4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c7b7 mov eax, dword ptr [0x12d4e670] */
  EAX = (r32((uint32_t)(0x12d4e670)));
  /* 12d3c7bc mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12d3c7bf lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 12d3c7c5 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3c7c6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3c7c9 push edx */
  push32((uint32_t)(EDX));
  /* 12d3c7ca call 0x12d35780 */
  push32(0x12d3c7cfu); f_12d35780();
  /* 12d3c7cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c7d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3c7d5 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d3c7d8 mov dword ptr [ecx + 0x12d4d4fc], eax */
  w32((uint32_t)(ECX + 0x12d4d4fc), (EAX));
  /* 12d3c7de mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 12d3c7e4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d3c7ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3c7ed mov dword ptr [eax*4 + 0x12d4e658], edx */
  w32((uint32_t)(EAX*4 + 0x12d4e658), (EDX));
  /* 12d3c7f4 push 6 */
  push32((uint32_t)(0x6u));
  /* 12d3c7f6 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 12d3c7fc push ecx */
  push32((uint32_t)(ECX));
  /* 12d3c7fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3c800 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d3c803 add edx, 0x12d4e6a8 */
  { uint32_t _a=(EDX),_b=(0x12d4e6a8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c809 push edx */
  push32((uint32_t)(EDX));
  /* 12d3c80a call 0x12d390b0 */
  push32(0x12d3c80fu); f_12d390b0();
  /* 12d3c80f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c812 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3c816 jne 0x12d3c823 */
  if (!C.zf) goto L_12d3c823;
  /* 12d3c818 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12d3c81e mov dword ptr [0x12d4e670], eax */
  w32((uint32_t)(0x12d4e670), (EAX));
L_12d3c823:;
  /* 12d3c823 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3c827 jne 0x12d3c835 */
  if (!C.zf) goto L_12d3c835;
  /* 12d3c829 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12d3c82f mov dword ptr [0x12d4e674], ecx */
  w32((uint32_t)(0x12d4e674), (ECX));
L_12d3c835:;
  /* 12d3c835 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3c838 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d3c83b call dword ptr [edx + 0x12d4d500] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x12d4d500))), 0x12d3c841u);
  /* 12d3c841 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3c843 je 0x12d3c87c */
  if (C.zf) goto L_12d3c87c;
  /* 12d3c845 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3c848 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d3c84b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3c84e mov dword ptr [eax + 0x12d4d4fc], ecx */
  w32((uint32_t)(EAX + 0x12d4d4fc), (ECX));
  /* 12d3c854 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3c856 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3c859 push edx */
  push32((uint32_t)(EDX));
  /* 12d3c85a call 0x12d33260 */
  push32(0x12d3c85fu); f_12d33260();
  /* 12d3c85f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c862 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3c865 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3c868 mov dword ptr [eax*4 + 0x12d4e658], ecx */
  w32((uint32_t)(EAX*4 + 0x12d4e658), (ECX));
  /* 12d3c86f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d3c872 mov dword ptr [0x12d4e670], edx */
  w32((uint32_t)(0x12d4e670), (EDX));
  /* 12d3c878 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3c87a jmp 0x12d3c89f */
  goto L_12d3c89f;
L_12d3c87c:;
  /* 12d3c87c cmp dword ptr [ebp - 0xc], 0x12d4d3e8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x12d4d3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3c883 je 0x12d3c893 */
  if (C.zf) goto L_12d3c893;
  /* 12d3c885 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3c887 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3c88a push eax */
  push32((uint32_t)(EAX));
  /* 12d3c88b call 0x12d33260 */
  push32(0x12d3c890u); f_12d33260();
  /* 12d3c890 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d3c893:;
  /* 12d3c893 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3c896 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d3c899 mov eax, dword ptr [ecx + 0x12d4d4fc] */
  EAX = (r32((uint32_t)(ECX + 0x12d4d4fc)));
L_12d3c89f:;
  /* 12d3c89f mov esp, ebp */
  ESP = (EBP);
  /* 12d3c8a1 pop ebp */
  EBP = (pop32());
  /* 12d3c8a2 ret  */
  ESPCHK(0x12d3c710u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c8b0 @ 0x12d3c8b0 (256 bytes, 72 insns) */
void f_12d3c8b0(void) {
  FTRACE(0x12d3c8b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3c8b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3c8b1 mov ebp, esp */
  EBP = (ESP);
  /* 12d3c8b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3c8b6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12d3c8bd cmp dword ptr [0x12d4d4fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4d4fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3c8c4 jne 0x12d3c8e4 */
  if (!C.zf) goto L_12d3c8e4;
  /* 12d3c8c6 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 12d3c8cb push 0x12d49fe0 */
  push32((uint32_t)(0x12d49fe0u));
  /* 12d3c8d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3c8d2 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 12d3c8d7 call 0x12d327d0 */
  push32(0x12d3c8dcu); f_12d327d0();
  /* 12d3c8dc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c8df mov dword ptr [0x12d4d4fc], eax */
  w32((uint32_t)(0x12d4d4fc), (EAX));
L_12d3c8e4:;
  /* 12d3c8e4 mov eax, dword ptr [0x12d4d4fc] */
  EAX = (r32((uint32_t)(0x12d4d4fc)));
  /* 12d3c8e9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12d3c8ec mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12d3c8f3 jmp 0x12d3c8fe */
  goto L_12d3c8fe;
L_12d3c8f5:;
  /* 12d3c8f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3c8f8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c8fb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d3c8fe:;
  /* 12d3c8fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3c901 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d3c904 mov eax, dword ptr [edx + 0x12d4d4fc] */
  EAX = (r32((uint32_t)(EDX + 0x12d4d4fc)));
  /* 12d3c90a push eax */
  push32((uint32_t)(EAX));
  /* 12d3c90b push 0x12d49fec */
  push32((uint32_t)(0x12d49fecu));
  /* 12d3c910 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3c913 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d3c916 mov edx, dword ptr [ecx + 0x12d4d4f8] */
  EDX = (r32((uint32_t)(ECX + 0x12d4d4f8)));
  /* 12d3c91c push edx */
  push32((uint32_t)(EDX));
  /* 12d3c91d push 3 */
  push32((uint32_t)(0x3u));
  /* 12d3c91f mov eax, dword ptr [0x12d4d4fc] */
  EAX = (r32((uint32_t)(0x12d4d4fc)));
  /* 12d3c924 push eax */
  push32((uint32_t)(EAX));
  /* 12d3c925 call 0x12d3cb50 */
  push32(0x12d3c92au); f_12d3cb50();
  /* 12d3c92a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c92d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3c931 jge 0x12d3c979 */
  if ((C.sf==C.of)) goto L_12d3c979;
  /* 12d3c933 push 0x12d49fd8 */
  push32((uint32_t)(0x12d49fd8u));
  /* 12d3c938 mov ecx, dword ptr [0x12d4d4fc] */
  ECX = (r32((uint32_t)(0x12d4d4fc)));
  /* 12d3c93e push ecx */
  push32((uint32_t)(ECX));
  /* 12d3c93f call 0x12d35790 */
  push32(0x12d3c944u); f_12d35790();
  /* 12d3c944 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c947 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3c94a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c94d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d3c950 mov eax, dword ptr [edx + 0x12d4d4fc] */
  EAX = (r32((uint32_t)(EDX + 0x12d4d4fc)));
  /* 12d3c956 push eax */
  push32((uint32_t)(EAX));
  /* 12d3c957 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3c95a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d3c95d mov edx, dword ptr [ecx + 0x12d4d4fc] */
  EDX = (r32((uint32_t)(ECX + 0x12d4d4fc)));
  /* 12d3c963 push edx */
  push32((uint32_t)(EDX));
  /* 12d3c964 call 0x12d3e460 */
  push32(0x12d3c969u); f_12d3e460();
  /* 12d3c969 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c96c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3c96e je 0x12d3c977 */
  if (C.zf) goto L_12d3c977;
  /* 12d3c970 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12d3c977:;
  /* 12d3c977 jmp 0x12d3c9a7 */
  goto L_12d3c9a7;
L_12d3c979:;
  /* 12d3c979 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3c97d jne 0x12d3c986 */
  if (!C.zf) goto L_12d3c986;
  /* 12d3c97f mov eax, dword ptr [0x12d4d4fc] */
  EAX = (r32((uint32_t)(0x12d4d4fc)));
  /* 12d3c984 jmp 0x12d3c9ac */
  goto L_12d3c9ac;
L_12d3c986:;
  /* 12d3c986 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3c988 mov eax, dword ptr [0x12d4d4fc] */
  EAX = (r32((uint32_t)(0x12d4d4fc)));
  /* 12d3c98d push eax */
  push32((uint32_t)(EAX));
  /* 12d3c98e call 0x12d33260 */
  push32(0x12d3c993u); f_12d33260();
  /* 12d3c993 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3c996 mov dword ptr [0x12d4d4fc], 0 */
  w32((uint32_t)(0x12d4d4fc), (0x0u));
  /* 12d3c9a0 mov eax, dword ptr [0x12d4d514] */
  EAX = (r32((uint32_t)(0x12d4d514)));
  /* 12d3c9a5 jmp 0x12d3c9ac */
  goto L_12d3c9ac;
L_12d3c9a7:;
  /* 12d3c9a7 jmp 0x12d3c8f5 */
  goto L_12d3c8f5;
L_12d3c9ac:;
  /* 12d3c9ac mov esp, ebp */
  ESP = (EBP);
  /* 12d3c9ae pop ebp */
  EBP = (pop32());
  /* 12d3c9af ret  */
  ESPCHK(0x12d3c8b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c9b0 @ 0x12d3c9b0 (388 bytes, 115 insns) */
void f_12d3c9b0(void) {
  FTRACE(0x12d3c9b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3c9b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3c9b1 mov ebp, esp */
  EBP = (ESP);
  /* 12d3c9b3 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3c9b9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3c9bd jne 0x12d3c9c6 */
  if (!C.zf) goto L_12d3c9c6;
  /* 12d3c9bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3c9c1 jmp 0x12d3cb30 */
  goto L_12d3cb30;
L_12d3c9c6:;
  /* 12d3c9c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3c9c9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d3c9cc cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3c9cf jne 0x12d3ca20 */
  if (!C.zf) goto L_12d3ca20;
  /* 12d3c9d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3c9d4 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12d3c9d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3c9da jne 0x12d3ca20 */
  if (!C.zf) goto L_12d3ca20;
  /* 12d3c9dc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3c9df mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 12d3c9e2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3c9e5 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 12d3c9e9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3c9ed je 0x12d3ca09 */
  if (C.zf) goto L_12d3ca09;
  /* 12d3c9ef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3c9f2 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 12d3c9f7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3c9fa mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 12d3ca00 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3ca03 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_12d3ca09:;
  /* 12d3ca09 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3ca0d je 0x12d3ca18 */
  if (C.zf) goto L_12d3ca18;
  /* 12d3ca0f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d3ca12 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12d3ca18:;
  /* 12d3ca18 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3ca1b jmp 0x12d3cb30 */
  goto L_12d3cb30;
L_12d3ca20:;
  /* 12d3ca20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3ca23 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3ca24 push 0x12d4d470 */
  push32((uint32_t)(0x12d4d470u));
  /* 12d3ca29 call 0x12d3e460 */
  push32(0x12d3ca2eu); f_12d3e460();
  /* 12d3ca2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3ca31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3ca33 je 0x12d3cae8 */
  if (C.zf) goto L_12d3cae8;
  /* 12d3ca39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3ca3c push edx */
  push32((uint32_t)(EDX));
  /* 12d3ca3d push 0x12d4d3ec */
  push32((uint32_t)(0x12d4d3ecu));
  /* 12d3ca42 call 0x12d3e460 */
  push32(0x12d3ca47u); f_12d3e460();
  /* 12d3ca47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3ca4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3ca4c je 0x12d3cae8 */
  if (C.zf) goto L_12d3cae8;
  /* 12d3ca52 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3ca55 push eax */
  push32((uint32_t)(EAX));
  /* 12d3ca56 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 12d3ca5c push ecx */
  push32((uint32_t)(ECX));
  /* 12d3ca5d call 0x12d3cba0 */
  push32(0x12d3ca62u); f_12d3cba0();
  /* 12d3ca62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3ca65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3ca67 je 0x12d3ca70 */
  if (C.zf) goto L_12d3ca70;
  /* 12d3ca69 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3ca6b jmp 0x12d3cb30 */
  goto L_12d3cb30;
L_12d3ca70:;
  /* 12d3ca70 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 12d3ca76 push edx */
  push32((uint32_t)(EDX));
  /* 12d3ca77 push 0x12d4e680 */
  push32((uint32_t)(0x12d4e680u));
  /* 12d3ca7c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 12d3ca82 push eax */
  push32((uint32_t)(EAX));
  /* 12d3ca83 call 0x12d3e5b0 */
  push32(0x12d3ca88u); f_12d3e5b0();
  /* 12d3ca88 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3ca8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3ca8d jne 0x12d3ca96 */
  if (!C.zf) goto L_12d3ca96;
  /* 12d3ca8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3ca91 jmp 0x12d3cb30 */
  goto L_12d3cb30;
L_12d3ca96:;
  /* 12d3ca96 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3ca98 mov cx, word ptr [0x12d4e684] */
  CX = (r16((uint32_t)(0x12d4e684)));
  /* 12d3ca9f mov dword ptr [0x12d4e688], ecx */
  w32((uint32_t)(0x12d4e688), (ECX));
  /* 12d3caa5 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 12d3caab push edx */
  push32((uint32_t)(EDX));
  /* 12d3caac push 0x12d4d470 */
  push32((uint32_t)(0x12d4d470u));
  /* 12d3cab1 call 0x12d3cd00 */
  push32(0x12d3cab6u); f_12d3cd00();
  /* 12d3cab6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3cab9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3cabc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d3cabf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d3cac1 je 0x12d3cad6 */
  if (C.zf) goto L_12d3cad6;
  /* 12d3cac3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3cac6 push edx */
  push32((uint32_t)(EDX));
  /* 12d3cac7 push 0x12d4d3ec */
  push32((uint32_t)(0x12d4d3ecu));
  /* 12d3cacc call 0x12d35780 */
  push32(0x12d3cad1u); f_12d35780();
  /* 12d3cad1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3cad4 jmp 0x12d3cae8 */
  goto L_12d3cae8;
L_12d3cad6:;
  /* 12d3cad6 push 0x12d4d470 */
  push32((uint32_t)(0x12d4d470u));
  /* 12d3cadb push 0x12d4d3ec */
  push32((uint32_t)(0x12d4d3ecu));
  /* 12d3cae0 call 0x12d35780 */
  push32(0x12d3cae5u); f_12d35780();
  /* 12d3cae5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d3cae8:;
  /* 12d3cae8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3caec je 0x12d3cb01 */
  if (C.zf) goto L_12d3cb01;
  /* 12d3caee push 6 */
  push32((uint32_t)(0x6u));
  /* 12d3caf0 push 0x12d4e680 */
  push32((uint32_t)(0x12d4e680u));
  /* 12d3caf5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3caf8 push eax */
  push32((uint32_t)(EAX));
  /* 12d3caf9 call 0x12d390b0 */
  push32(0x12d3cafeu); f_12d390b0();
  /* 12d3cafe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d3cb01:;
  /* 12d3cb01 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3cb05 je 0x12d3cb1a */
  if (C.zf) goto L_12d3cb1a;
  /* 12d3cb07 push 4 */
  push32((uint32_t)(0x4u));
  /* 12d3cb09 push 0x12d4e688 */
  push32((uint32_t)(0x12d4e688u));
  /* 12d3cb0e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d3cb11 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3cb12 call 0x12d390b0 */
  push32(0x12d3cb17u); f_12d390b0();
  /* 12d3cb17 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d3cb1a:;
  /* 12d3cb1a push 0x12d4d470 */
  push32((uint32_t)(0x12d4d470u));
  /* 12d3cb1f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3cb22 push edx */
  push32((uint32_t)(EDX));
  /* 12d3cb23 call 0x12d35780 */
  push32(0x12d3cb28u); f_12d35780();
  /* 12d3cb28 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3cb2b mov eax, 0x12d4d470 */
  EAX = (0x12d4d470u);
L_12d3cb30:;
  /* 12d3cb30 mov esp, ebp */
  ESP = (EBP);
  /* 12d3cb32 pop ebp */
  EBP = (pop32());
  /* 12d3cb33 ret  */
  ESPCHK(0x12d3c9b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cb40 @ 0x12d3cb40 (7 bytes, 5 insns) */
void f_12d3cb40(void) {
  FTRACE(0x12d3cb40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3cb40 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3cb41 mov ebp, esp */
  EBP = (ESP);
  /* 12d3cb43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3cb45 pop ebp */
  EBP = (pop32());
  /* 12d3cb46 ret  */
  ESPCHK(0x12d3cb40u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x12d3cb50 (79 bytes, 28 insns) */
void f_12d3cb50(void) {
  FTRACE(0x12d3cb50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3cb50 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3cb51 mov ebp, esp */
  EBP = (ESP);
  /* 12d3cb53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3cb56 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12d3cb59 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d3cb5c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d3cb63 jmp 0x12d3cb6e */
  goto L_12d3cb6e;
L_12d3cb65:;
  /* 12d3cb65 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3cb68 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3cb6b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12d3cb6e:;
  /* 12d3cb6e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3cb71 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3cb74 jge 0x12d3cb94 */
  if ((C.sf==C.of)) goto L_12d3cb94;
  /* 12d3cb76 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3cb79 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3cb7c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d3cb7f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3cb82 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12d3cb85 push edx */
  push32((uint32_t)(EDX));
  /* 12d3cb86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3cb89 push eax */
  push32((uint32_t)(EAX));
  /* 12d3cb8a call 0x12d35790 */
  push32(0x12d3cb8fu); f_12d35790();
  /* 12d3cb8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3cb92 jmp 0x12d3cb65 */
  goto L_12d3cb65;
L_12d3cb94:;
  /* 12d3cb94 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d3cb9b mov esp, ebp */
  ESP = (EBP);
  /* 12d3cb9d pop ebp */
  EBP = (pop32());
  /* 12d3cb9e ret  */
  ESPCHK(0x12d3cb50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cba0 @ 0x12d3cba0 (349 bytes, 122 insns) */
void f_12d3cba0(void) {
  FTRACE(0x12d3cba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3cba0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3cba1 mov ebp, esp */
  EBP = (ESP);
  /* 12d3cba3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3cba6 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 12d3cbab push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3cbad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3cbb0 push eax */
  push32((uint32_t)(EAX));
  /* 12d3cbb1 call 0x12d36540 */
  push32(0x12d3cbb6u); f_12d36540();
  /* 12d3cbb6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3cbb9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3cbbc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d3cbbf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d3cbc1 jne 0x12d3cbca */
  if (!C.zf) goto L_12d3cbca;
  /* 12d3cbc3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3cbc5 jmp 0x12d3ccf9 */
  goto L_12d3ccf9;
L_12d3cbca:;
  /* 12d3cbca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3cbcd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d3cbd0 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3cbd3 jne 0x12d3cc00 */
  if (!C.zf) goto L_12d3cc00;
  /* 12d3cbd5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3cbd8 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12d3cbdc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3cbde je 0x12d3cc00 */
  if (C.zf) goto L_12d3cc00;
  /* 12d3cbe0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3cbe3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3cbe6 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3cbe7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3cbea add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3cbf0 push edx */
  push32((uint32_t)(EDX));
  /* 12d3cbf1 call 0x12d35780 */
  push32(0x12d3cbf6u); f_12d35780();
  /* 12d3cbf6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3cbf9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3cbfb jmp 0x12d3ccf9 */
  goto L_12d3ccf9;
L_12d3cc00:;
  /* 12d3cc00 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d3cc07 jmp 0x12d3cc12 */
  goto L_12d3cc12;
L_12d3cc09:;
  /* 12d3cc09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3cc0c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3cc0f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d3cc12:;
  /* 12d3cc12 push 0x12d49ff0 */
  push32((uint32_t)(0x12d49ff0u));
  /* 12d3cc17 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3cc1a push ecx */
  push32((uint32_t)(ECX));
  /* 12d3cc1b call 0x12d3e4f0 */
  push32(0x12d3cc20u); f_12d3e4f0();
  /* 12d3cc20 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3cc23 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d3cc26 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3cc2a jne 0x12d3cc34 */
  if (!C.zf) goto L_12d3cc34;
  /* 12d3cc2c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d3cc2f jmp 0x12d3ccf9 */
  goto L_12d3ccf9;
L_12d3cc34:;
  /* 12d3cc34 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3cc37 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3cc3a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d3cc3c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 12d3cc3f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3cc43 jne 0x12d3cc6a */
  if (!C.zf) goto L_12d3cc6a;
  /* 12d3cc45 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3cc49 jge 0x12d3cc6a */
  if ((C.sf==C.of)) goto L_12d3cc6a;
  /* 12d3cc4b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12d3cc4f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3cc52 je 0x12d3cc6a */
  if (C.zf) goto L_12d3cc6a;
  /* 12d3cc54 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3cc57 push edx */
  push32((uint32_t)(EDX));
  /* 12d3cc58 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3cc5b push eax */
  push32((uint32_t)(EAX));
  /* 12d3cc5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3cc5f push ecx */
  push32((uint32_t)(ECX));
  /* 12d3cc60 call 0x12d35ff0 */
  push32(0x12d3cc65u); f_12d35ff0();
  /* 12d3cc65 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3cc68 jmp 0x12d3ccd0 */
  goto L_12d3ccd0;
L_12d3cc6a:;
  /* 12d3cc6a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3cc6e jne 0x12d3cc98 */
  if (!C.zf) goto L_12d3cc98;
  /* 12d3cc70 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3cc74 jge 0x12d3cc98 */
  if ((C.sf==C.of)) goto L_12d3cc98;
  /* 12d3cc76 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12d3cc7a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3cc7d je 0x12d3cc98 */
  if (C.zf) goto L_12d3cc98;
  /* 12d3cc7f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3cc82 push eax */
  push32((uint32_t)(EAX));
  /* 12d3cc83 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3cc86 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3cc87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3cc8a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3cc8d push edx */
  push32((uint32_t)(EDX));
  /* 12d3cc8e call 0x12d35ff0 */
  push32(0x12d3cc93u); f_12d35ff0();
  /* 12d3cc93 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3cc96 jmp 0x12d3ccd0 */
  goto L_12d3ccd0;
L_12d3cc98:;
  /* 12d3cc98 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3cc9c jne 0x12d3cccb */
  if (!C.zf) goto L_12d3cccb;
  /* 12d3cc9e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12d3cca2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3cca4 je 0x12d3ccaf */
  if (C.zf) goto L_12d3ccaf;
  /* 12d3cca6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12d3ccaa cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3ccad jne 0x12d3cccb */
  if (!C.zf) goto L_12d3cccb;
L_12d3ccaf:;
  /* 12d3ccaf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3ccb2 push edx */
  push32((uint32_t)(EDX));
  /* 12d3ccb3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3ccb6 push eax */
  push32((uint32_t)(EAX));
  /* 12d3ccb7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3ccba add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3ccc0 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3ccc1 call 0x12d35ff0 */
  push32(0x12d3ccc6u); f_12d35ff0();
  /* 12d3ccc6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3ccc9 jmp 0x12d3ccd0 */
  goto L_12d3ccd0;
L_12d3cccb:;
  /* 12d3cccb or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d3ccce jmp 0x12d3ccf9 */
  goto L_12d3ccf9;
L_12d3ccd0:;
  /* 12d3ccd0 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12d3ccd4 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3ccd7 jne 0x12d3ccdb */
  if (!C.zf) goto L_12d3ccdb;
  /* 12d3ccd9 jmp 0x12d3ccf7 */
  goto L_12d3ccf7;
L_12d3ccdb:;
  /* 12d3ccdb movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12d3ccdf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3cce1 jne 0x12d3cce5 */
  if (!C.zf) goto L_12d3cce5;
  /* 12d3cce3 jmp 0x12d3ccf7 */
  goto L_12d3ccf7;
L_12d3cce5:;
  /* 12d3cce5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3cce8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3cceb lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 12d3ccef mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12d3ccf2 jmp 0x12d3cc09 */
  goto L_12d3cc09;
L_12d3ccf7:;
  /* 12d3ccf7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d3ccf9:;
  /* 12d3ccf9 mov esp, ebp */
  ESP = (EBP);
  /* 12d3ccfb pop ebp */
  EBP = (pop32());
  /* 12d3ccfc ret  */
  ESPCHK(0x12d3cba0u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x12d3cd00 (101 bytes, 36 insns) */
void f_12d3cd00(void) {
  FTRACE(0x12d3cd00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3cd00 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3cd01 mov ebp, esp */
  EBP = (ESP);
  /* 12d3cd03 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3cd06 push eax */
  push32((uint32_t)(EAX));
  /* 12d3cd07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3cd0a push ecx */
  push32((uint32_t)(ECX));
  /* 12d3cd0b call 0x12d35780 */
  push32(0x12d3cd10u); f_12d35780();
  /* 12d3cd10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3cd13 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3cd16 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 12d3cd1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3cd1c je 0x12d3cd38 */
  if (C.zf) goto L_12d3cd38;
  /* 12d3cd1e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3cd21 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3cd24 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3cd25 push 0x12d49ff8 */
  push32((uint32_t)(0x12d49ff8u));
  /* 12d3cd2a push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3cd2c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3cd2f push edx */
  push32((uint32_t)(EDX));
  /* 12d3cd30 call 0x12d3cb50 */
  push32(0x12d3cd35u); f_12d3cb50();
  /* 12d3cd35 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d3cd38:;
  /* 12d3cd38 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3cd3b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 12d3cd42 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d3cd44 je 0x12d3cd63 */
  if (C.zf) goto L_12d3cd63;
  /* 12d3cd46 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3cd49 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3cd4f push edx */
  push32((uint32_t)(EDX));
  /* 12d3cd50 push 0x12d49ff4 */
  push32((uint32_t)(0x12d49ff4u));
  /* 12d3cd55 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3cd57 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3cd5a push eax */
  push32((uint32_t)(EAX));
  /* 12d3cd5b call 0x12d3cb50 */
  push32(0x12d3cd60u); f_12d3cb50();
  /* 12d3cd60 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d3cd63:;
  /* 12d3cd63 pop ebp */
  EBP = (pop32());
  /* 12d3cd64 ret  */
  ESPCHK(0x12d3cd00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd70 @ 0x12d3cd70 (130 bytes, 50 insns) */
void f_12d3cd70(void) {
  FTRACE(0x12d3cd70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3cd70 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3cd71 mov ebp, esp */
  EBP = (ESP);
  /* 12d3cd73 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3cd74 push ebx */
  push32((uint32_t)(EBX));
  /* 12d3cd75 push esi */
  push32((uint32_t)(ESI));
  /* 12d3cd76 push edi */
  push32((uint32_t)(EDI));
  /* 12d3cd77 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12d3cd7e:;
  /* 12d3cd7e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3cd82 jne 0x12d3cda2 */
  if (!C.zf) goto L_12d3cda2;
  /* 12d3cd84 push 0x12d4a008 */
  push32((uint32_t)(0x12d4a008u));
  /* 12d3cd89 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3cd8b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 12d3cd8d push 0x12d49ffc */
  push32((uint32_t)(0x12d49ffcu));
  /* 12d3cd92 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3cd94 call 0x12d31890 */
  push32(0x12d3cd99u); f_12d31890();
  /* 12d3cd99 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3cd9c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3cd9f jne 0x12d3cda2 */
  if (!C.zf) goto L_12d3cda2;
  /* 12d3cda1 int3  */
  x86_unimpl("int3 @ 0x12d3cda1");
L_12d3cda2:;
  /* 12d3cda2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3cda4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3cda6 jne 0x12d3cd7e */
  if (!C.zf) goto L_12d3cd7e;
  /* 12d3cda8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3cdab mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d3cdae and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 12d3cdb1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d3cdb3 je 0x12d3cdc1 */
  if (C.zf) goto L_12d3cdc1;
  /* 12d3cdb5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3cdb8 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 12d3cdbf jmp 0x12d3cde8 */
  goto L_12d3cde8;
L_12d3cdc1:;
  /* 12d3cdc1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3cdc4 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3cdc5 call 0x12d3b5e0 */
  push32(0x12d3cdcau); f_12d3b5e0();
  /* 12d3cdca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3cdcd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3cdd0 push edx */
  push32((uint32_t)(EDX));
  /* 12d3cdd1 call 0x12d3ce00 */
  push32(0x12d3cdd6u); f_12d3ce00();
  /* 12d3cdd6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3cdd9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d3cddc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3cddf push eax */
  push32((uint32_t)(EAX));
  /* 12d3cde0 call 0x12d3b650 */
  push32(0x12d3cde5u); f_12d3b650();
  /* 12d3cde5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d3cde8:;
  /* 12d3cde8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3cdeb pop edi */
  EDI = (pop32());
  /* 12d3cdec pop esi */
  ESI = (pop32());
  /* 12d3cded pop ebx */
  EBX = (pop32());
  /* 12d3cdee mov esp, ebp */
  ESP = (EBP);
  /* 12d3cdf0 pop ebp */
  EBP = (pop32());
  /* 12d3cdf1 ret  */
  ESPCHK(0x12d3cd70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce00 @ 0x12d3ce00 (190 bytes, 67 insns) */
void f_12d3ce00(void) {
  FTRACE(0x12d3ce00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3ce00 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3ce01 mov ebp, esp */
  EBP = (ESP);
  /* 12d3ce03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3ce06 push ebx */
  push32((uint32_t)(EBX));
  /* 12d3ce07 push esi */
  push32((uint32_t)(ESI));
  /* 12d3ce08 push edi */
  push32((uint32_t)(EDI));
  /* 12d3ce09 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12d3ce10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3ce13 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12d3ce16:;
  /* 12d3ce16 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3ce1a jne 0x12d3ce3a */
  if (!C.zf) goto L_12d3ce3a;
  /* 12d3ce1c push 0x12d49eac */
  push32((uint32_t)(0x12d49eacu));
  /* 12d3ce21 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3ce23 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 12d3ce25 push 0x12d49ffc */
  push32((uint32_t)(0x12d49ffcu));
  /* 12d3ce2a push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3ce2c call 0x12d31890 */
  push32(0x12d3ce31u); f_12d31890();
  /* 12d3ce31 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3ce34 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3ce37 jne 0x12d3ce3a */
  if (!C.zf) goto L_12d3ce3a;
  /* 12d3ce39 int3  */
  x86_unimpl("int3 @ 0x12d3ce39");
L_12d3ce3a:;
  /* 12d3ce3a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3ce3c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d3ce3e jne 0x12d3ce16 */
  if (!C.zf) goto L_12d3ce16;
  /* 12d3ce40 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3ce43 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12d3ce46 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 12d3ce4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3ce4d je 0x12d3ceaa */
  if (C.zf) goto L_12d3ceaa;
  /* 12d3ce4f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3ce52 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3ce53 call 0x12d3c100 */
  push32(0x12d3ce58u); f_12d3c100();
  /* 12d3ce58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3ce5b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d3ce5e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3ce61 push edx */
  push32((uint32_t)(EDX));
  /* 12d3ce62 call 0x12d3f480 */
  push32(0x12d3ce67u); f_12d3f480();
  /* 12d3ce67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3ce6a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3ce6d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d3ce70 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3ce71 call 0x12d3f350 */
  push32(0x12d3ce76u); f_12d3f350();
  /* 12d3ce76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3ce79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3ce7b jge 0x12d3ce86 */
  if ((C.sf==C.of)) goto L_12d3ce86;
  /* 12d3ce7d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12d3ce84 jmp 0x12d3ceaa */
  goto L_12d3ceaa;
L_12d3ce86:;
  /* 12d3ce86 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3ce89 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3ce8d je 0x12d3ceaa */
  if (C.zf) goto L_12d3ceaa;
  /* 12d3ce8f push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3ce91 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3ce94 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12d3ce97 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3ce98 call 0x12d33260 */
  push32(0x12d3ce9du); f_12d33260();
  /* 12d3ce9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3cea0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3cea3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_12d3ceaa:;
  /* 12d3ceaa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3cead mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 12d3ceb4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3ceb7 pop edi */
  EDI = (pop32());
  /* 12d3ceb8 pop esi */
  ESI = (pop32());
  /* 12d3ceb9 pop ebx */
  EBX = (pop32());
  /* 12d3ceba mov esp, ebp */
  ESP = (EBP);
  /* 12d3cebc pop ebp */
  EBP = (pop32());
  /* 12d3cebd ret  */
  ESPCHK(0x12d3ce00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cec0 @ 0x12d3cec0 (210 bytes, 63 insns) */
void f_12d3cec0(void) {
  FTRACE(0x12d3cec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3cec0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3cec1 mov ebp, esp */
  EBP = (ESP);
  /* 12d3cec3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3cec4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3cec7 cmp eax, dword ptr [0x12d4ff7c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d4ff7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3cecd jae 0x12d3cef1 */
  if (!C.cf) goto L_12d3cef1;
  /* 12d3cecf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3ced2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12d3ced5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3ced8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12d3cedb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d3cede mov eax, dword ptr [ecx*4 + 0x12d4fe40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12d4fe40)));
  /* 12d3cee5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12d3ceea and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12d3ceed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d3ceef jne 0x12d3cf04 */
  if (!C.zf) goto L_12d3cf04;
L_12d3cef1:;
  /* 12d3cef1 call 0x12d3a6a0 */
  push32(0x12d3cef6u); f_12d3a6a0();
  /* 12d3cef6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12d3cefc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d3ceff jmp 0x12d3cf8e */
  goto L_12d3cf8e;
L_12d3cf04:;
  /* 12d3cf04 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3cf07 push edx */
  push32((uint32_t)(EDX));
  /* 12d3cf08 call 0x12d3bec0 */
  push32(0x12d3cf0du); f_12d3bec0();
  /* 12d3cf0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3cf10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3cf13 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12d3cf16 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3cf19 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12d3cf1c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d3cf1f mov edx, dword ptr [eax*4 + 0x12d4fe40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12d4fe40)));
  /* 12d3cf26 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12d3cf2b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12d3cf2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3cf30 je 0x12d3cf6d */
  if (C.zf) goto L_12d3cf6d;
  /* 12d3cf32 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3cf35 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3cf36 call 0x12d3bd40 */
  push32(0x12d3cf3bu); f_12d3bd40();
  /* 12d3cf3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3cf3e push eax */
  push32((uint32_t)(EAX));
  /* 12d3cf3f call dword ptr [0x12d5031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d5031c))), 0x12d3cf45u);
  /* 12d3cf45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3cf47 jne 0x12d3cf54 */
  if (!C.zf) goto L_12d3cf54;
  /* 12d3cf49 call dword ptr [0x12d50280] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50280))), 0x12d3cf4fu);
  /* 12d3cf4f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d3cf52 jmp 0x12d3cf5b */
  goto L_12d3cf5b;
L_12d3cf54:;
  /* 12d3cf54 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12d3cf5b:;
  /* 12d3cf5b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3cf5f jne 0x12d3cf63 */
  if (!C.zf) goto L_12d3cf63;
  /* 12d3cf61 jmp 0x12d3cf7f */
  goto L_12d3cf7f;
L_12d3cf63:;
  /* 12d3cf63 call 0x12d3a6b0 */
  push32(0x12d3cf68u); f_12d3a6b0();
  /* 12d3cf68 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3cf6b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12d3cf6d:;
  /* 12d3cf6d call 0x12d3a6a0 */
  push32(0x12d3cf72u); f_12d3a6a0();
  /* 12d3cf72 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12d3cf78 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12d3cf7f:;
  /* 12d3cf7f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3cf82 push eax */
  push32((uint32_t)(EAX));
  /* 12d3cf83 call 0x12d3bf50 */
  push32(0x12d3cf88u); f_12d3bf50();
  /* 12d3cf88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3cf8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12d3cf8e:;
  /* 12d3cf8e mov esp, ebp */
  ESP = (EBP);
  /* 12d3cf90 pop ebp */
  EBP = (pop32());
  /* 12d3cf91 ret  */
  ESPCHK(0x12d3cec0u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x12d3cfa0 (219 bytes, 64 insns) */
void f_12d3cfa0(void) {
  FTRACE(0x12d3cfa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3cfa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3cfa1 mov ebp, esp */
  EBP = (ESP);
  /* 12d3cfa3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3cfa4 cmp dword ptr [0x12d4e66c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e66c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3cfab je 0x12d3d041 */
  if (C.zf) goto L_12d3d041;
  /* 12d3cfb1 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 12d3cfb3 push 0x12d4a018 */
  push32((uint32_t)(0x12d4a018u));
  /* 12d3cfb8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3cfba push 0xac */
  push32((uint32_t)(0xacu));
  /* 12d3cfbf push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3cfc1 call 0x12d32be0 */
  push32(0x12d3cfc6u); f_12d32be0();
  /* 12d3cfc6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3cfc9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d3cfcc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3cfd0 jne 0x12d3cfdc */
  if (!C.zf) goto L_12d3cfdc;
  /* 12d3cfd2 mov eax, 1 */
  EAX = (0x1u);
  /* 12d3cfd7 jmp 0x12d3d077 */
  goto L_12d3d077;
L_12d3cfdc:;
  /* 12d3cfdc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3cfdf push eax */
  push32((uint32_t)(EAX));
  /* 12d3cfe0 call 0x12d3d080 */
  push32(0x12d3cfe5u); f_12d3d080();
  /* 12d3cfe5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3cfe8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3cfea je 0x12d3d00d */
  if (C.zf) goto L_12d3d00d;
  /* 12d3cfec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3cfef push ecx */
  push32((uint32_t)(ECX));
  /* 12d3cff0 call 0x12d3d610 */
  push32(0x12d3cff5u); f_12d3d610();
  /* 12d3cff5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3cff8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3cffa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3cffd push edx */
  push32((uint32_t)(EDX));
  /* 12d3cffe call 0x12d33260 */
  push32(0x12d3d003u); f_12d33260();
  /* 12d3d003 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d006 mov eax, 1 */
  EAX = (0x1u);
  /* 12d3d00b jmp 0x12d3d077 */
  goto L_12d3d077;
L_12d3d00d:;
  /* 12d3d00d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3d010 mov dword ptr [0x12d4dcb8], eax */
  w32((uint32_t)(0x12d4dcb8), (EAX));
  /* 12d3d015 mov ecx, dword ptr [0x12d4e68c] */
  ECX = (r32((uint32_t)(0x12d4e68c)));
  /* 12d3d01b push ecx */
  push32((uint32_t)(ECX));
  /* 12d3d01c call 0x12d3d610 */
  push32(0x12d3d021u); f_12d3d610();
  /* 12d3d021 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d024 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3d026 mov edx, dword ptr [0x12d4e68c] */
  EDX = (r32((uint32_t)(0x12d4e68c)));
  /* 12d3d02c push edx */
  push32((uint32_t)(EDX));
  /* 12d3d02d call 0x12d33260 */
  push32(0x12d3d032u); f_12d33260();
  /* 12d3d032 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d035 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3d038 mov dword ptr [0x12d4e68c], eax */
  w32((uint32_t)(0x12d4e68c), (EAX));
  /* 12d3d03d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3d03f jmp 0x12d3d077 */
  goto L_12d3d077;
L_12d3d041:;
  /* 12d3d041 mov dword ptr [0x12d4dcb8], 0x12d4dcc0 */
  w32((uint32_t)(0x12d4dcb8), (0x12d4dcc0u));
  /* 12d3d04b mov ecx, dword ptr [0x12d4e68c] */
  ECX = (r32((uint32_t)(0x12d4e68c)));
  /* 12d3d051 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3d052 call 0x12d3d610 */
  push32(0x12d3d057u); f_12d3d610();
  /* 12d3d057 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d05a push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3d05c mov edx, dword ptr [0x12d4e68c] */
  EDX = (r32((uint32_t)(0x12d4e68c)));
  /* 12d3d062 push edx */
  push32((uint32_t)(EDX));
  /* 12d3d063 call 0x12d33260 */
  push32(0x12d3d068u); f_12d33260();
  /* 12d3d068 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d06b mov dword ptr [0x12d4e68c], 0 */
  w32((uint32_t)(0x12d4e68c), (0x0u));
  /* 12d3d075 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d3d077:;
  /* 12d3d077 mov esp, ebp */
  ESP = (EBP);
  /* 12d3d079 pop ebp */
  EBP = (pop32());
  /* 12d3d07a ret  */
  ESPCHK(0x12d3cfa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d080 @ 0x12d3d080 (1423 bytes, 533 insns) */
void f_12d3d080(void) {
  FTRACE(0x12d3d080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3d080 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3d081 mov ebp, esp */
  EBP = (ESP);
  /* 12d3d083 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3d086 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12d3d08d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3d08f mov ax, word ptr [0x12d4e6c6] */
  AX = (r16((uint32_t)(0x12d4e6c6)));
  /* 12d3d095 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d3d098 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3d09a mov cx, word ptr [0x12d4e6c8] */
  CX = (r16((uint32_t)(0x12d4e6c8)));
  /* 12d3d0a1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d3d0a4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3d0a8 jne 0x12d3d0b2 */
  if (!C.zf) goto L_12d3d0b2;
  /* 12d3d0aa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d3d0ad jmp 0x12d3d60b */
  goto L_12d3d60b;
L_12d3d0b2:;
  /* 12d3d0b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d0b5 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d0b8 push edx */
  push32((uint32_t)(EDX));
  /* 12d3d0b9 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 12d3d0bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3d0be push eax */
  push32((uint32_t)(EAX));
  /* 12d3d0bf push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3d0c1 call 0x12d40990 */
  push32(0x12d3d0c6u); f_12d40990();
  /* 12d3d0c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d0c9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3d0cc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3d0ce mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d3d0d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d0d4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d0d7 push edx */
  push32((uint32_t)(EDX));
  /* 12d3d0d8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 12d3d0da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3d0dd push eax */
  push32((uint32_t)(EAX));
  /* 12d3d0de push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3d0e0 call 0x12d40990 */
  push32(0x12d3d0e5u); f_12d40990();
  /* 12d3d0e5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d0e8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3d0eb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3d0ed mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d3d0f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d0f3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d0f6 push edx */
  push32((uint32_t)(EDX));
  /* 12d3d0f7 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 12d3d0f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3d0fc push eax */
  push32((uint32_t)(EAX));
  /* 12d3d0fd push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3d0ff call 0x12d40990 */
  push32(0x12d3d104u); f_12d40990();
  /* 12d3d104 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d107 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3d10a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3d10c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d3d10f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d112 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d115 push edx */
  push32((uint32_t)(EDX));
  /* 12d3d116 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 12d3d118 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3d11b push eax */
  push32((uint32_t)(EAX));
  /* 12d3d11c push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3d11e call 0x12d40990 */
  push32(0x12d3d123u); f_12d40990();
  /* 12d3d123 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d126 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3d129 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3d12b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d3d12e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d131 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d134 push edx */
  push32((uint32_t)(EDX));
  /* 12d3d135 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 12d3d137 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3d13a push eax */
  push32((uint32_t)(EAX));
  /* 12d3d13b push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3d13d call 0x12d40990 */
  push32(0x12d3d142u); f_12d40990();
  /* 12d3d142 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d145 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3d148 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3d14a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d3d14d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d150 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d153 push edx */
  push32((uint32_t)(EDX));
  /* 12d3d154 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 12d3d156 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3d159 push eax */
  push32((uint32_t)(EAX));
  /* 12d3d15a push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3d15c call 0x12d40990 */
  push32(0x12d3d161u); f_12d40990();
  /* 12d3d161 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d164 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3d167 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3d169 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d3d16c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d16f push edx */
  push32((uint32_t)(EDX));
  /* 12d3d170 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 12d3d172 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3d175 push eax */
  push32((uint32_t)(EAX));
  /* 12d3d176 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3d178 call 0x12d40990 */
  push32(0x12d3d17du); f_12d40990();
  /* 12d3d17d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d180 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3d183 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3d185 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d3d188 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d18b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d18e push edx */
  push32((uint32_t)(EDX));
  /* 12d3d18f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 12d3d191 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3d194 push eax */
  push32((uint32_t)(EAX));
  /* 12d3d195 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3d197 call 0x12d40990 */
  push32(0x12d3d19cu); f_12d40990();
  /* 12d3d19c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d19f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3d1a2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3d1a4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d3d1a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d1aa add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d1ad push edx */
  push32((uint32_t)(EDX));
  /* 12d3d1ae push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 12d3d1b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3d1b3 push eax */
  push32((uint32_t)(EAX));
  /* 12d3d1b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3d1b6 call 0x12d40990 */
  push32(0x12d3d1bbu); f_12d40990();
  /* 12d3d1bb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d1be mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3d1c1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3d1c3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d3d1c6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d1c9 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d1cc push edx */
  push32((uint32_t)(EDX));
  /* 12d3d1cd push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 12d3d1cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3d1d2 push eax */
  push32((uint32_t)(EAX));
  /* 12d3d1d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3d1d5 call 0x12d40990 */
  push32(0x12d3d1dau); f_12d40990();
  /* 12d3d1da add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d1dd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3d1e0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3d1e2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d3d1e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d1e8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d1eb push edx */
  push32((uint32_t)(EDX));
  /* 12d3d1ec push 0x2d */
  push32((uint32_t)(0x2du));
  /* 12d3d1ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3d1f1 push eax */
  push32((uint32_t)(EAX));
  /* 12d3d1f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3d1f4 call 0x12d40990 */
  push32(0x12d3d1f9u); f_12d40990();
  /* 12d3d1f9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d1fc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3d1ff or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3d201 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d3d204 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d207 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d20a push edx */
  push32((uint32_t)(EDX));
  /* 12d3d20b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 12d3d20d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3d210 push eax */
  push32((uint32_t)(EAX));
  /* 12d3d211 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3d213 call 0x12d40990 */
  push32(0x12d3d218u); f_12d40990();
  /* 12d3d218 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d21b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3d21e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3d220 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d3d223 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d226 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d229 push edx */
  push32((uint32_t)(EDX));
  /* 12d3d22a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 12d3d22c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3d22f push eax */
  push32((uint32_t)(EAX));
  /* 12d3d230 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3d232 call 0x12d40990 */
  push32(0x12d3d237u); f_12d40990();
  /* 12d3d237 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d23a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3d23d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3d23f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d3d242 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d245 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d248 push edx */
  push32((uint32_t)(EDX));
  /* 12d3d249 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12d3d24b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3d24e push eax */
  push32((uint32_t)(EAX));
  /* 12d3d24f push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3d251 call 0x12d40990 */
  push32(0x12d3d256u); f_12d40990();
  /* 12d3d256 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d259 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3d25c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3d25e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d3d261 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d264 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d267 push edx */
  push32((uint32_t)(EDX));
  /* 12d3d268 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 12d3d26a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3d26d push eax */
  push32((uint32_t)(EAX));
  /* 12d3d26e push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3d270 call 0x12d40990 */
  push32(0x12d3d275u); f_12d40990();
  /* 12d3d275 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d278 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3d27b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3d27d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d3d280 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d283 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d286 push edx */
  push32((uint32_t)(EDX));
  /* 12d3d287 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 12d3d289 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3d28c push eax */
  push32((uint32_t)(EAX));
  /* 12d3d28d push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3d28f call 0x12d40990 */
  push32(0x12d3d294u); f_12d40990();
  /* 12d3d294 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d297 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3d29a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3d29c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d3d29f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d2a2 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d2a5 push edx */
  push32((uint32_t)(EDX));
  /* 12d3d2a6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 12d3d2a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3d2ab push eax */
  push32((uint32_t)(EAX));
  /* 12d3d2ac push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3d2ae call 0x12d40990 */
  push32(0x12d3d2b3u); f_12d40990();
  /* 12d3d2b3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d2b6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3d2b9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3d2bb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d3d2be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d2c1 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d2c4 push edx */
  push32((uint32_t)(EDX));
  /* 12d3d2c5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 12d3d2c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3d2ca push eax */
  push32((uint32_t)(EAX));
  /* 12d3d2cb push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3d2cd call 0x12d40990 */
  push32(0x12d3d2d2u); f_12d40990();
  /* 12d3d2d2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d2d5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3d2d8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3d2da mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d3d2dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d2e0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d2e3 push edx */
  push32((uint32_t)(EDX));
  /* 12d3d2e4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 12d3d2e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3d2e9 push eax */
  push32((uint32_t)(EAX));
  /* 12d3d2ea push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3d2ec call 0x12d40990 */
  push32(0x12d3d2f1u); f_12d40990();
  /* 12d3d2f1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d2f4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3d2f7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3d2f9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d3d2fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d2ff add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d302 push edx */
  push32((uint32_t)(EDX));
  /* 12d3d303 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 12d3d305 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3d308 push eax */
  push32((uint32_t)(EAX));
  /* 12d3d309 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3d30b call 0x12d40990 */
  push32(0x12d3d310u); f_12d40990();
  /* 12d3d310 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d313 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3d316 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3d318 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d3d31b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d31e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d321 push edx */
  push32((uint32_t)(EDX));
  /* 12d3d322 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 12d3d324 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3d327 push eax */
  push32((uint32_t)(EAX));
  /* 12d3d328 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3d32a call 0x12d40990 */
  push32(0x12d3d32fu); f_12d40990();
  /* 12d3d32f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d332 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3d335 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3d337 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d3d33a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d33d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d340 push edx */
  push32((uint32_t)(EDX));
  /* 12d3d341 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 12d3d343 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3d346 push eax */
  push32((uint32_t)(EAX));
  /* 12d3d347 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3d349 call 0x12d40990 */
  push32(0x12d3d34eu); f_12d40990();
  /* 12d3d34e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d351 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3d354 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3d356 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d3d359 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d35c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d35f push edx */
  push32((uint32_t)(EDX));
  /* 12d3d360 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 12d3d362 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3d365 push eax */
  push32((uint32_t)(EAX));
  /* 12d3d366 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3d368 call 0x12d40990 */
  push32(0x12d3d36du); f_12d40990();
  /* 12d3d36d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d370 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3d373 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3d375 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d3d378 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d37b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d37e push edx */
  push32((uint32_t)(EDX));
  /* 12d3d37f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 12d3d381 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3d384 push eax */
  push32((uint32_t)(EAX));
  /* 12d3d385 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3d387 call 0x12d40990 */
  push32(0x12d3d38cu); f_12d40990();
  /* 12d3d38c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d38f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3d392 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3d394 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d3d397 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d39a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d39d push edx */
  push32((uint32_t)(EDX));
  /* 12d3d39e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 12d3d3a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3d3a3 push eax */
  push32((uint32_t)(EAX));
  /* 12d3d3a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3d3a6 call 0x12d40990 */
  push32(0x12d3d3abu); f_12d40990();
  /* 12d3d3ab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d3ae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3d3b1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3d3b3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d3d3b6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d3b9 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d3bc push edx */
  push32((uint32_t)(EDX));
  /* 12d3d3bd push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 12d3d3bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3d3c2 push eax */
  push32((uint32_t)(EAX));
  /* 12d3d3c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3d3c5 call 0x12d40990 */
  push32(0x12d3d3cau); f_12d40990();
  /* 12d3d3ca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d3cd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3d3d0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3d3d2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d3d3d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d3d8 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d3db push edx */
  push32((uint32_t)(EDX));
  /* 12d3d3dc push 0x38 */
  push32((uint32_t)(0x38u));
  /* 12d3d3de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3d3e1 push eax */
  push32((uint32_t)(EAX));
  /* 12d3d3e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3d3e4 call 0x12d40990 */
  push32(0x12d3d3e9u); f_12d40990();
  /* 12d3d3e9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d3ec mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3d3ef or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3d3f1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d3d3f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d3f7 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d3fa push edx */
  push32((uint32_t)(EDX));
  /* 12d3d3fb push 0x39 */
  push32((uint32_t)(0x39u));
  /* 12d3d3fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3d400 push eax */
  push32((uint32_t)(EAX));
  /* 12d3d401 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3d403 call 0x12d40990 */
  push32(0x12d3d408u); f_12d40990();
  /* 12d3d408 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d40b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3d40e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3d410 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d3d413 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d416 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d419 push edx */
  push32((uint32_t)(EDX));
  /* 12d3d41a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 12d3d41c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3d41f push eax */
  push32((uint32_t)(EAX));
  /* 12d3d420 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3d422 call 0x12d40990 */
  push32(0x12d3d427u); f_12d40990();
  /* 12d3d427 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d42a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3d42d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3d42f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d3d432 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d435 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d438 push edx */
  push32((uint32_t)(EDX));
  /* 12d3d439 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 12d3d43b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3d43e push eax */
  push32((uint32_t)(EAX));
  /* 12d3d43f push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3d441 call 0x12d40990 */
  push32(0x12d3d446u); f_12d40990();
  /* 12d3d446 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d449 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3d44c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3d44e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d3d451 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d454 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d457 push edx */
  push32((uint32_t)(EDX));
  /* 12d3d458 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 12d3d45a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3d45d push eax */
  push32((uint32_t)(EAX));
  /* 12d3d45e push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3d460 call 0x12d40990 */
  push32(0x12d3d465u); f_12d40990();
  /* 12d3d465 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d468 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3d46b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3d46d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d3d470 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d473 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d476 push edx */
  push32((uint32_t)(EDX));
  /* 12d3d477 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12d3d479 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3d47c push eax */
  push32((uint32_t)(EAX));
  /* 12d3d47d push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3d47f call 0x12d40990 */
  push32(0x12d3d484u); f_12d40990();
  /* 12d3d484 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d487 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3d48a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3d48c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d3d48f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d492 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d498 push edx */
  push32((uint32_t)(EDX));
  /* 12d3d499 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 12d3d49b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3d49e push eax */
  push32((uint32_t)(EAX));
  /* 12d3d49f push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3d4a1 call 0x12d40990 */
  push32(0x12d3d4a6u); f_12d40990();
  /* 12d3d4a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d4a9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3d4ac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3d4ae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d3d4b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d4b4 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d4ba push edx */
  push32((uint32_t)(EDX));
  /* 12d3d4bb push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12d3d4bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3d4c0 push eax */
  push32((uint32_t)(EAX));
  /* 12d3d4c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3d4c3 call 0x12d40990 */
  push32(0x12d3d4c8u); f_12d40990();
  /* 12d3d4c8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d4cb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3d4ce or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3d4d0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d3d4d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d4d6 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d4dc push edx */
  push32((uint32_t)(EDX));
  /* 12d3d4dd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12d3d4df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3d4e2 push eax */
  push32((uint32_t)(EAX));
  /* 12d3d4e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3d4e5 call 0x12d40990 */
  push32(0x12d3d4eau); f_12d40990();
  /* 12d3d4ea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d4ed mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3d4f0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3d4f2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d3d4f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d4f8 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d4fe push edx */
  push32((uint32_t)(EDX));
  /* 12d3d4ff push 0x41 */
  push32((uint32_t)(0x41u));
  /* 12d3d501 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3d504 push eax */
  push32((uint32_t)(EAX));
  /* 12d3d505 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3d507 call 0x12d40990 */
  push32(0x12d3d50cu); f_12d40990();
  /* 12d3d50c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d50f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3d512 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3d514 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d3d517 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d51a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d520 push edx */
  push32((uint32_t)(EDX));
  /* 12d3d521 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 12d3d523 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3d526 push eax */
  push32((uint32_t)(EAX));
  /* 12d3d527 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3d529 call 0x12d40990 */
  push32(0x12d3d52eu); f_12d40990();
  /* 12d3d52e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d531 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3d534 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3d536 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d3d539 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d53c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d542 push edx */
  push32((uint32_t)(EDX));
  /* 12d3d543 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 12d3d545 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3d548 push eax */
  push32((uint32_t)(EAX));
  /* 12d3d549 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3d54b call 0x12d40990 */
  push32(0x12d3d550u); f_12d40990();
  /* 12d3d550 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d553 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3d556 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3d558 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d3d55b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d55e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d564 push edx */
  push32((uint32_t)(EDX));
  /* 12d3d565 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 12d3d567 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3d56a push eax */
  push32((uint32_t)(EAX));
  /* 12d3d56b push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3d56d call 0x12d40990 */
  push32(0x12d3d572u); f_12d40990();
  /* 12d3d572 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d575 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3d578 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3d57a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d3d57d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d580 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d586 push edx */
  push32((uint32_t)(EDX));
  /* 12d3d587 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 12d3d589 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3d58c push eax */
  push32((uint32_t)(EAX));
  /* 12d3d58d push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3d58f call 0x12d40990 */
  push32(0x12d3d594u); f_12d40990();
  /* 12d3d594 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d597 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3d59a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3d59c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d3d59f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d5a2 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d5a8 push edx */
  push32((uint32_t)(EDX));
  /* 12d3d5a9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 12d3d5ab mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3d5ae push eax */
  push32((uint32_t)(EAX));
  /* 12d3d5af push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3d5b1 call 0x12d40990 */
  push32(0x12d3d5b6u); f_12d40990();
  /* 12d3d5b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d5b9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3d5bc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3d5be mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d3d5c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d5c4 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d5ca push edx */
  push32((uint32_t)(EDX));
  /* 12d3d5cb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12d3d5cd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3d5d0 push eax */
  push32((uint32_t)(EAX));
  /* 12d3d5d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3d5d3 call 0x12d40990 */
  push32(0x12d3d5d8u); f_12d40990();
  /* 12d3d5d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d5db mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3d5de or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3d5e0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d3d5e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d5e6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d5ec push edx */
  push32((uint32_t)(EDX));
  /* 12d3d5ed push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 12d3d5f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3d5f5 push eax */
  push32((uint32_t)(EAX));
  /* 12d3d5f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3d5f8 call 0x12d40990 */
  push32(0x12d3d5fdu); f_12d40990();
  /* 12d3d5fd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d600 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3d603 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3d605 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d3d608 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_12d3d60b:;
  /* 12d3d60b mov esp, ebp */
  ESP = (EBP);
  /* 12d3d60d pop ebp */
  EBP = (pop32());
  /* 12d3d60e ret  */
  ESPCHK(0x12d3d080u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x12d3d610 (779 bytes, 265 insns) */
void f_12d3d610(void) {
  FTRACE(0x12d3d610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3d610 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3d611 mov ebp, esp */
  EBP = (ESP);
  /* 12d3d613 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3d617 jne 0x12d3d61e */
  if (!C.zf) goto L_12d3d61e;
  /* 12d3d619 jmp 0x12d3d919 */
  goto L_12d3d919;
L_12d3d61e:;
  /* 12d3d61e push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3d620 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d623 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d3d626 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3d627 call 0x12d33260 */
  push32(0x12d3d62cu); f_12d33260();
  /* 12d3d62c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d62f push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3d631 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d634 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12d3d637 push eax */
  push32((uint32_t)(EAX));
  /* 12d3d638 call 0x12d33260 */
  push32(0x12d3d63du); f_12d33260();
  /* 12d3d63d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d640 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3d642 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d645 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d3d648 push edx */
  push32((uint32_t)(EDX));
  /* 12d3d649 call 0x12d33260 */
  push32(0x12d3d64eu); f_12d33260();
  /* 12d3d64e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d651 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3d653 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d656 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d3d659 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3d65a call 0x12d33260 */
  push32(0x12d3d65fu); f_12d33260();
  /* 12d3d65f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d662 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3d664 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d667 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d3d66a push eax */
  push32((uint32_t)(EAX));
  /* 12d3d66b call 0x12d33260 */
  push32(0x12d3d670u); f_12d33260();
  /* 12d3d670 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d673 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3d675 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d678 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12d3d67b push edx */
  push32((uint32_t)(EDX));
  /* 12d3d67c call 0x12d33260 */
  push32(0x12d3d681u); f_12d33260();
  /* 12d3d681 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d684 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3d686 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d689 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d3d68b push ecx */
  push32((uint32_t)(ECX));
  /* 12d3d68c call 0x12d33260 */
  push32(0x12d3d691u); f_12d33260();
  /* 12d3d691 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d694 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3d696 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d699 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 12d3d69c push eax */
  push32((uint32_t)(EAX));
  /* 12d3d69d call 0x12d33260 */
  push32(0x12d3d6a2u); f_12d33260();
  /* 12d3d6a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d6a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3d6a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d6aa mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 12d3d6ad push edx */
  push32((uint32_t)(EDX));
  /* 12d3d6ae call 0x12d33260 */
  push32(0x12d3d6b3u); f_12d33260();
  /* 12d3d6b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d6b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3d6b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d6bb mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 12d3d6be push ecx */
  push32((uint32_t)(ECX));
  /* 12d3d6bf call 0x12d33260 */
  push32(0x12d3d6c4u); f_12d33260();
  /* 12d3d6c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d6c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3d6c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d6cc mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 12d3d6cf push eax */
  push32((uint32_t)(EAX));
  /* 12d3d6d0 call 0x12d33260 */
  push32(0x12d3d6d5u); f_12d33260();
  /* 12d3d6d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d6d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3d6da mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d6dd mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 12d3d6e0 push edx */
  push32((uint32_t)(EDX));
  /* 12d3d6e1 call 0x12d33260 */
  push32(0x12d3d6e6u); f_12d33260();
  /* 12d3d6e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d6e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3d6eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d6ee mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 12d3d6f1 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3d6f2 call 0x12d33260 */
  push32(0x12d3d6f7u); f_12d33260();
  /* 12d3d6f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d6fa push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3d6fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d6ff mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12d3d702 push eax */
  push32((uint32_t)(EAX));
  /* 12d3d703 call 0x12d33260 */
  push32(0x12d3d708u); f_12d33260();
  /* 12d3d708 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d70b push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3d70d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d710 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 12d3d713 push edx */
  push32((uint32_t)(EDX));
  /* 12d3d714 call 0x12d33260 */
  push32(0x12d3d719u); f_12d33260();
  /* 12d3d719 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d71c push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3d71e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d721 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 12d3d724 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3d725 call 0x12d33260 */
  push32(0x12d3d72au); f_12d33260();
  /* 12d3d72a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d72d push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3d72f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d732 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 12d3d735 push eax */
  push32((uint32_t)(EAX));
  /* 12d3d736 call 0x12d33260 */
  push32(0x12d3d73bu); f_12d33260();
  /* 12d3d73b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d73e push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3d740 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d743 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 12d3d746 push edx */
  push32((uint32_t)(EDX));
  /* 12d3d747 call 0x12d33260 */
  push32(0x12d3d74cu); f_12d33260();
  /* 12d3d74c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d74f push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3d751 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d754 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 12d3d757 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3d758 call 0x12d33260 */
  push32(0x12d3d75du); f_12d33260();
  /* 12d3d75d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d760 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3d762 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d765 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 12d3d768 push eax */
  push32((uint32_t)(EAX));
  /* 12d3d769 call 0x12d33260 */
  push32(0x12d3d76eu); f_12d33260();
  /* 12d3d76e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d771 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3d773 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d776 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12d3d779 push edx */
  push32((uint32_t)(EDX));
  /* 12d3d77a call 0x12d33260 */
  push32(0x12d3d77fu); f_12d33260();
  /* 12d3d77f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d782 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3d784 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d787 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 12d3d78a push ecx */
  push32((uint32_t)(ECX));
  /* 12d3d78b call 0x12d33260 */
  push32(0x12d3d790u); f_12d33260();
  /* 12d3d790 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d793 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3d795 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d798 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 12d3d79b push eax */
  push32((uint32_t)(EAX));
  /* 12d3d79c call 0x12d33260 */
  push32(0x12d3d7a1u); f_12d33260();
  /* 12d3d7a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d7a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3d7a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d7a9 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 12d3d7ac push edx */
  push32((uint32_t)(EDX));
  /* 12d3d7ad call 0x12d33260 */
  push32(0x12d3d7b2u); f_12d33260();
  /* 12d3d7b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d7b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3d7b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d7ba mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 12d3d7bd push ecx */
  push32((uint32_t)(ECX));
  /* 12d3d7be call 0x12d33260 */
  push32(0x12d3d7c3u); f_12d33260();
  /* 12d3d7c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d7c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3d7c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d7cb mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 12d3d7ce push eax */
  push32((uint32_t)(EAX));
  /* 12d3d7cf call 0x12d33260 */
  push32(0x12d3d7d4u); f_12d33260();
  /* 12d3d7d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d7d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3d7d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d7dc mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 12d3d7df push edx */
  push32((uint32_t)(EDX));
  /* 12d3d7e0 call 0x12d33260 */
  push32(0x12d3d7e5u); f_12d33260();
  /* 12d3d7e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d7e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3d7ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d7ed mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 12d3d7f0 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3d7f1 call 0x12d33260 */
  push32(0x12d3d7f6u); f_12d33260();
  /* 12d3d7f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d7f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3d7fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d7fe mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 12d3d801 push eax */
  push32((uint32_t)(EAX));
  /* 12d3d802 call 0x12d33260 */
  push32(0x12d3d807u); f_12d33260();
  /* 12d3d807 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d80a push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3d80c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d80f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 12d3d812 push edx */
  push32((uint32_t)(EDX));
  /* 12d3d813 call 0x12d33260 */
  push32(0x12d3d818u); f_12d33260();
  /* 12d3d818 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d81b push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3d81d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d820 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 12d3d823 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3d824 call 0x12d33260 */
  push32(0x12d3d829u); f_12d33260();
  /* 12d3d829 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d82c push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3d82e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d831 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 12d3d834 push eax */
  push32((uint32_t)(EAX));
  /* 12d3d835 call 0x12d33260 */
  push32(0x12d3d83au); f_12d33260();
  /* 12d3d83a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d83d push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3d83f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d842 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 12d3d848 push edx */
  push32((uint32_t)(EDX));
  /* 12d3d849 call 0x12d33260 */
  push32(0x12d3d84eu); f_12d33260();
  /* 12d3d84e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d851 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3d853 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d856 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 12d3d85c push ecx */
  push32((uint32_t)(ECX));
  /* 12d3d85d call 0x12d33260 */
  push32(0x12d3d862u); f_12d33260();
  /* 12d3d862 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d865 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3d867 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d86a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 12d3d870 push eax */
  push32((uint32_t)(EAX));
  /* 12d3d871 call 0x12d33260 */
  push32(0x12d3d876u); f_12d33260();
  /* 12d3d876 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d879 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3d87b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d87e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 12d3d884 push edx */
  push32((uint32_t)(EDX));
  /* 12d3d885 call 0x12d33260 */
  push32(0x12d3d88au); f_12d33260();
  /* 12d3d88a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d88d push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3d88f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d892 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 12d3d898 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3d899 call 0x12d33260 */
  push32(0x12d3d89eu); f_12d33260();
  /* 12d3d89e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d8a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3d8a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d8a6 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 12d3d8ac push eax */
  push32((uint32_t)(EAX));
  /* 12d3d8ad call 0x12d33260 */
  push32(0x12d3d8b2u); f_12d33260();
  /* 12d3d8b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d8b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3d8b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d8ba mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 12d3d8c0 push edx */
  push32((uint32_t)(EDX));
  /* 12d3d8c1 call 0x12d33260 */
  push32(0x12d3d8c6u); f_12d33260();
  /* 12d3d8c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d8c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3d8cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d8ce mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 12d3d8d4 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3d8d5 call 0x12d33260 */
  push32(0x12d3d8dau); f_12d33260();
  /* 12d3d8da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d8dd push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3d8df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d8e2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 12d3d8e8 push eax */
  push32((uint32_t)(EAX));
  /* 12d3d8e9 call 0x12d33260 */
  push32(0x12d3d8eeu); f_12d33260();
  /* 12d3d8ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d8f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3d8f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d8f6 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 12d3d8fc push edx */
  push32((uint32_t)(EDX));
  /* 12d3d8fd call 0x12d33260 */
  push32(0x12d3d902u); f_12d33260();
  /* 12d3d902 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d905 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3d907 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3d90a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 12d3d910 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3d911 call 0x12d33260 */
  push32(0x12d3d916u); f_12d33260();
  /* 12d3d916 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d3d919:;
  /* 12d3d919 pop ebp */
  EBP = (pop32());
  /* 12d3d91a ret  */
  ESPCHK(0x12d3d610u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d920 @ 0x12d3d920 (678 bytes, 180 insns) */
void f_12d3d920(void) {
  FTRACE(0x12d3d920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3d920 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3d921 mov ebp, esp */
  EBP = (ESP);
  /* 12d3d923 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3d926 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d3d92d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3d92f mov ax, word ptr [0x12d4e6c2] */
  AX = (r16((uint32_t)(0x12d4e6c2)));
  /* 12d3d935 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d3d938 cmp dword ptr [0x12d4e668], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e668))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3d93f je 0x12d3da9a */
  if (C.zf) goto L_12d3da9a;
  /* 12d3d945 push 0x12d4e690 */
  push32((uint32_t)(0x12d4e690u));
  /* 12d3d94a push 0xe */
  push32((uint32_t)(0xeu));
  /* 12d3d94c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3d94f push ecx */
  push32((uint32_t)(ECX));
  /* 12d3d950 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3d952 call 0x12d40990 */
  push32(0x12d3d957u); f_12d40990();
  /* 12d3d957 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d95a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3d95d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12d3d95f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12d3d962 push 0x12d4e694 */
  push32((uint32_t)(0x12d4e694u));
  /* 12d3d967 push 0xf */
  push32((uint32_t)(0xfu));
  /* 12d3d969 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3d96c push eax */
  push32((uint32_t)(EAX));
  /* 12d3d96d push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3d96f call 0x12d40990 */
  push32(0x12d3d974u); f_12d40990();
  /* 12d3d974 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d977 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3d97a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3d97c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d3d97f push 0x12d4e698 */
  push32((uint32_t)(0x12d4e698u));
  /* 12d3d984 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12d3d986 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3d989 push edx */
  push32((uint32_t)(EDX));
  /* 12d3d98a push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3d98c call 0x12d40990 */
  push32(0x12d3d991u); f_12d40990();
  /* 12d3d991 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d994 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3d997 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3d999 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d3d99c mov edx, dword ptr [0x12d4e698] */
  EDX = (r32((uint32_t)(0x12d4e698)));
  /* 12d3d9a2 push edx */
  push32((uint32_t)(EDX));
  /* 12d3d9a3 call 0x12d3dbd0 */
  push32(0x12d3d9a8u); f_12d3dbd0();
  /* 12d3d9a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d9ab cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3d9af je 0x12d3da09 */
  if (C.zf) goto L_12d3da09;
  /* 12d3d9b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3d9b3 mov eax, dword ptr [0x12d4e690] */
  EAX = (r32((uint32_t)(0x12d4e690)));
  /* 12d3d9b8 push eax */
  push32((uint32_t)(EAX));
  /* 12d3d9b9 call 0x12d33260 */
  push32(0x12d3d9beu); f_12d33260();
  /* 12d3d9be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d9c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3d9c3 mov ecx, dword ptr [0x12d4e694] */
  ECX = (r32((uint32_t)(0x12d4e694)));
  /* 12d3d9c9 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3d9ca call 0x12d33260 */
  push32(0x12d3d9cfu); f_12d33260();
  /* 12d3d9cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d9d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3d9d4 mov edx, dword ptr [0x12d4e698] */
  EDX = (r32((uint32_t)(0x12d4e698)));
  /* 12d3d9da push edx */
  push32((uint32_t)(EDX));
  /* 12d3d9db call 0x12d33260 */
  push32(0x12d3d9e0u); f_12d33260();
  /* 12d3d9e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3d9e3 mov dword ptr [0x12d4e690], 0 */
  w32((uint32_t)(0x12d4e690), (0x0u));
  /* 12d3d9ed mov dword ptr [0x12d4e694], 0 */
  w32((uint32_t)(0x12d4e694), (0x0u));
  /* 12d3d9f7 mov dword ptr [0x12d4e698], 0 */
  w32((uint32_t)(0x12d4e698), (0x0u));
  /* 12d3da01 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d3da04 jmp 0x12d3dbc2 */
  goto L_12d3dbc2;
L_12d3da09:;
  /* 12d3da09 mov eax, dword ptr [0x12d4dda8] */
  EAX = (r32((uint32_t)(0x12d4dda8)));
  /* 12d3da0e cmp dword ptr [eax], 0x12d4dd70 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x12d4dd70u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3da14 je 0x12d3da50 */
  if (C.zf) goto L_12d3da50;
  /* 12d3da16 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3da18 mov ecx, dword ptr [0x12d4dda8] */
  ECX = (r32((uint32_t)(0x12d4dda8)));
  /* 12d3da1e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d3da20 push edx */
  push32((uint32_t)(EDX));
  /* 12d3da21 call 0x12d33260 */
  push32(0x12d3da26u); f_12d33260();
  /* 12d3da26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3da29 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3da2b mov eax, dword ptr [0x12d4dda8] */
  EAX = (r32((uint32_t)(0x12d4dda8)));
  /* 12d3da30 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d3da33 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3da34 call 0x12d33260 */
  push32(0x12d3da39u); f_12d33260();
  /* 12d3da39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3da3c push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3da3e mov edx, dword ptr [0x12d4dda8] */
  EDX = (r32((uint32_t)(0x12d4dda8)));
  /* 12d3da44 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12d3da47 push eax */
  push32((uint32_t)(EAX));
  /* 12d3da48 call 0x12d33260 */
  push32(0x12d3da4du); f_12d33260();
  /* 12d3da4d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d3da50:;
  /* 12d3da50 mov ecx, dword ptr [0x12d4dda8] */
  ECX = (r32((uint32_t)(0x12d4dda8)));
  /* 12d3da56 mov edx, dword ptr [0x12d4e690] */
  EDX = (r32((uint32_t)(0x12d4e690)));
  /* 12d3da5c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12d3da5e mov eax, dword ptr [0x12d4dda8] */
  EAX = (r32((uint32_t)(0x12d4dda8)));
  /* 12d3da63 mov ecx, dword ptr [0x12d4e694] */
  ECX = (r32((uint32_t)(0x12d4e694)));
  /* 12d3da69 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12d3da6c mov edx, dword ptr [0x12d4dda8] */
  EDX = (r32((uint32_t)(0x12d4dda8)));
  /* 12d3da72 mov eax, dword ptr [0x12d4e698] */
  EAX = (r32((uint32_t)(0x12d4e698)));
  /* 12d3da77 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12d3da7a mov ecx, dword ptr [0x12d4dda8] */
  ECX = (r32((uint32_t)(0x12d4dda8)));
  /* 12d3da80 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d3da82 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d3da84 mov byte ptr [0x12d4cec8], al */
  w8((uint32_t)(0x12d4cec8), (AL));
  /* 12d3da89 mov dword ptr [0x12d4cecc], 1 */
  w32((uint32_t)(0x12d4cecc), (0x1u));
  /* 12d3da93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3da95 jmp 0x12d3dbc2 */
  goto L_12d3dbc2;
L_12d3da9a:;
  /* 12d3da9a push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3da9c mov ecx, dword ptr [0x12d4e690] */
  ECX = (r32((uint32_t)(0x12d4e690)));
  /* 12d3daa2 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3daa3 call 0x12d33260 */
  push32(0x12d3daa8u); f_12d33260();
  /* 12d3daa8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3daab push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3daad mov edx, dword ptr [0x12d4e694] */
  EDX = (r32((uint32_t)(0x12d4e694)));
  /* 12d3dab3 push edx */
  push32((uint32_t)(EDX));
  /* 12d3dab4 call 0x12d33260 */
  push32(0x12d3dab9u); f_12d33260();
  /* 12d3dab9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3dabc push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3dabe mov eax, dword ptr [0x12d4e698] */
  EAX = (r32((uint32_t)(0x12d4e698)));
  /* 12d3dac3 push eax */
  push32((uint32_t)(EAX));
  /* 12d3dac4 call 0x12d33260 */
  push32(0x12d3dac9u); f_12d33260();
  /* 12d3dac9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3dacc mov dword ptr [0x12d4e690], 0 */
  w32((uint32_t)(0x12d4e690), (0x0u));
  /* 12d3dad6 mov dword ptr [0x12d4e694], 0 */
  w32((uint32_t)(0x12d4e694), (0x0u));
  /* 12d3dae0 mov dword ptr [0x12d4e698], 0 */
  w32((uint32_t)(0x12d4e698), (0x0u));
  /* 12d3daea push 0x88 */
  push32((uint32_t)(0x88u));
  /* 12d3daef push 0x12d4a024 */
  push32((uint32_t)(0x12d4a024u));
  /* 12d3daf4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3daf6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3daf8 call 0x12d327d0 */
  push32(0x12d3dafdu); f_12d327d0();
  /* 12d3dafd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3db00 mov ecx, dword ptr [0x12d4dda8] */
  ECX = (r32((uint32_t)(0x12d4dda8)));
  /* 12d3db06 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12d3db08 mov edx, dword ptr [0x12d4dda8] */
  EDX = (r32((uint32_t)(0x12d4dda8)));
  /* 12d3db0e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3db11 jne 0x12d3db1b */
  if (!C.zf) goto L_12d3db1b;
  /* 12d3db13 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d3db16 jmp 0x12d3dbc2 */
  goto L_12d3dbc2;
L_12d3db1b:;
  /* 12d3db1b push 0x12d49ff4 */
  push32((uint32_t)(0x12d49ff4u));
  /* 12d3db20 mov eax, dword ptr [0x12d4dda8] */
  EAX = (r32((uint32_t)(0x12d4dda8)));
  /* 12d3db25 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d3db27 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3db28 call 0x12d35780 */
  push32(0x12d3db2du); f_12d35780();
  /* 12d3db2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3db30 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 12d3db35 push 0x12d4a024 */
  push32((uint32_t)(0x12d4a024u));
  /* 12d3db3a push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3db3c push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3db3e call 0x12d327d0 */
  push32(0x12d3db43u); f_12d327d0();
  /* 12d3db43 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3db46 mov edx, dword ptr [0x12d4dda8] */
  EDX = (r32((uint32_t)(0x12d4dda8)));
  /* 12d3db4c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12d3db4f mov eax, dword ptr [0x12d4dda8] */
  EAX = (r32((uint32_t)(0x12d4dda8)));
  /* 12d3db54 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3db58 jne 0x12d3db5f */
  if (!C.zf) goto L_12d3db5f;
  /* 12d3db5a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d3db5d jmp 0x12d3dbc2 */
  goto L_12d3dbc2;
L_12d3db5f:;
  /* 12d3db5f mov ecx, dword ptr [0x12d4dda8] */
  ECX = (r32((uint32_t)(0x12d4dda8)));
  /* 12d3db65 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d3db68 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12d3db6b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 12d3db70 push 0x12d4a024 */
  push32((uint32_t)(0x12d4a024u));
  /* 12d3db75 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3db77 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3db79 call 0x12d327d0 */
  push32(0x12d3db7eu); f_12d327d0();
  /* 12d3db7e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3db81 mov ecx, dword ptr [0x12d4dda8] */
  ECX = (r32((uint32_t)(0x12d4dda8)));
  /* 12d3db87 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12d3db8a mov edx, dword ptr [0x12d4dda8] */
  EDX = (r32((uint32_t)(0x12d4dda8)));
  /* 12d3db90 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3db94 jne 0x12d3db9b */
  if (!C.zf) goto L_12d3db9b;
  /* 12d3db96 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d3db99 jmp 0x12d3dbc2 */
  goto L_12d3dbc2;
L_12d3db9b:;
  /* 12d3db9b mov eax, dword ptr [0x12d4dda8] */
  EAX = (r32((uint32_t)(0x12d4dda8)));
  /* 12d3dba0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12d3dba3 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12d3dba6 mov edx, dword ptr [0x12d4dda8] */
  EDX = (r32((uint32_t)(0x12d4dda8)));
  /* 12d3dbac mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d3dbae mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d3dbb0 mov byte ptr [0x12d4cec8], cl */
  w8((uint32_t)(0x12d4cec8), (CL));
  /* 12d3dbb6 mov dword ptr [0x12d4cecc], 1 */
  w32((uint32_t)(0x12d4cecc), (0x1u));
  /* 12d3dbc0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d3dbc2:;
  /* 12d3dbc2 mov esp, ebp */
  ESP = (EBP);
  /* 12d3dbc4 pop ebp */
  EBP = (pop32());
  /* 12d3dbc5 ret  */
  ESPCHK(0x12d3d920u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x12d3dbd0 (125 bytes, 49 insns) */
void f_12d3dbd0(void) {
  FTRACE(0x12d3dbd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3dbd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3dbd1 mov ebp, esp */
  EBP = (ESP);
  /* 12d3dbd3 push ecx */
  push32((uint32_t)(ECX));
L_12d3dbd4:;
  /* 12d3dbd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3dbd7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d3dbda test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d3dbdc je 0x12d3dc49 */
  if (C.zf) goto L_12d3dc49;
  /* 12d3dbde mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3dbe1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d3dbe4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3dbe7 jl 0x12d3dc0d */
  if ((C.sf!=C.of)) goto L_12d3dc0d;
  /* 12d3dbe9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3dbec movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d3dbef cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3dbf2 jg 0x12d3dc0d */
  if ((!C.zf&&C.sf==C.of)) goto L_12d3dc0d;
  /* 12d3dbf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3dbf7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d3dbfa sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3dbfd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3dc00 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12d3dc02 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3dc05 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3dc08 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d3dc0b jmp 0x12d3dc47 */
  goto L_12d3dc47;
L_12d3dc0d:;
  /* 12d3dc0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3dc10 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d3dc13 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3dc16 jne 0x12d3dc3e */
  if (!C.zf) goto L_12d3dc3e;
  /* 12d3dc18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3dc1b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d3dc1e:;
  /* 12d3dc1e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3dc21 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3dc24 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12d3dc27 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12d3dc29 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3dc2c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3dc2f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d3dc32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3dc35 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d3dc38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3dc3a jne 0x12d3dc1e */
  if (!C.zf) goto L_12d3dc1e;
  /* 12d3dc3c jmp 0x12d3dc47 */
  goto L_12d3dc47;
L_12d3dc3e:;
  /* 12d3dc3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3dc41 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3dc44 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12d3dc47:;
  /* 12d3dc47 jmp 0x12d3dbd4 */
  goto L_12d3dbd4;
L_12d3dc49:;
  /* 12d3dc49 mov esp, ebp */
  ESP = (EBP);
  /* 12d3dc4b pop ebp */
  EBP = (pop32());
  /* 12d3dc4c ret  */
  ESPCHK(0x12d3dbd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc50 @ 0x12d3dc50 (304 bytes, 85 insns) */
void f_12d3dc50(void) {
  FTRACE(0x12d3dc50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3dc50 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3dc51 mov ebp, esp */
  EBP = (ESP);
  /* 12d3dc53 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3dc54 cmp dword ptr [0x12d4e664], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e664))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3dc5b je 0x12d3dd1c */
  if (C.zf) goto L_12d3dd1c;
  /* 12d3dc61 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 12d3dc63 push 0x12d4a030 */
  push32((uint32_t)(0x12d4a030u));
  /* 12d3dc68 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3dc6a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12d3dc6c push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3dc6e call 0x12d32be0 */
  push32(0x12d3dc73u); f_12d32be0();
  /* 12d3dc73 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3dc76 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d3dc79 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3dc7d jne 0x12d3dc89 */
  if (!C.zf) goto L_12d3dc89;
  /* 12d3dc7f mov eax, 1 */
  EAX = (0x1u);
  /* 12d3dc84 jmp 0x12d3dd7c */
  goto L_12d3dd7c;
L_12d3dc89:;
  /* 12d3dc89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3dc8c push eax */
  push32((uint32_t)(EAX));
  /* 12d3dc8d call 0x12d3dd80 */
  push32(0x12d3dc92u); f_12d3dd80();
  /* 12d3dc92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3dc95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3dc97 je 0x12d3dcbd */
  if (C.zf) goto L_12d3dcbd;
  /* 12d3dc99 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3dc9c push ecx */
  push32((uint32_t)(ECX));
  /* 12d3dc9d call 0x12d3e010 */
  push32(0x12d3dca2u); f_12d3e010();
  /* 12d3dca2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3dca5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3dca7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3dcaa push edx */
  push32((uint32_t)(EDX));
  /* 12d3dcab call 0x12d33260 */
  push32(0x12d3dcb0u); f_12d33260();
  /* 12d3dcb0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3dcb3 mov eax, 1 */
  EAX = (0x1u);
  /* 12d3dcb8 jmp 0x12d3dd7c */
  goto L_12d3dd7c;
L_12d3dcbd:;
  /* 12d3dcbd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3dcc0 mov ecx, dword ptr [0x12d4dda8] */
  ECX = (r32((uint32_t)(0x12d4dda8)));
  /* 12d3dcc6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d3dcc8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12d3dcca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3dccd mov ecx, dword ptr [0x12d4dda8] */
  ECX = (r32((uint32_t)(0x12d4dda8)));
  /* 12d3dcd3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d3dcd6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12d3dcd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3dcdc mov ecx, dword ptr [0x12d4dda8] */
  ECX = (r32((uint32_t)(0x12d4dda8)));
  /* 12d3dce2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12d3dce5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12d3dce8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3dceb mov dword ptr [0x12d4dda8], eax */
  w32((uint32_t)(0x12d4dda8), (EAX));
  /* 12d3dcf0 mov ecx, dword ptr [0x12d4e69c] */
  ECX = (r32((uint32_t)(0x12d4e69c)));
  /* 12d3dcf6 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3dcf7 call 0x12d3e010 */
  push32(0x12d3dcfcu); f_12d3e010();
  /* 12d3dcfc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3dcff push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3dd01 mov edx, dword ptr [0x12d4e69c] */
  EDX = (r32((uint32_t)(0x12d4e69c)));
  /* 12d3dd07 push edx */
  push32((uint32_t)(EDX));
  /* 12d3dd08 call 0x12d33260 */
  push32(0x12d3dd0du); f_12d33260();
  /* 12d3dd0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3dd10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3dd13 mov dword ptr [0x12d4e69c], eax */
  w32((uint32_t)(0x12d4e69c), (EAX));
  /* 12d3dd18 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3dd1a jmp 0x12d3dd7c */
  goto L_12d3dd7c;
L_12d3dd1c:;
  /* 12d3dd1c mov ecx, dword ptr [0x12d4dda8] */
  ECX = (r32((uint32_t)(0x12d4dda8)));
  /* 12d3dd22 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d3dd24 mov dword ptr [0x12d4dd78], edx */
  w32((uint32_t)(0x12d4dd78), (EDX));
  /* 12d3dd2a mov eax, dword ptr [0x12d4dda8] */
  EAX = (r32((uint32_t)(0x12d4dda8)));
  /* 12d3dd2f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d3dd32 mov dword ptr [0x12d4dd7c], ecx */
  w32((uint32_t)(0x12d4dd7c), (ECX));
  /* 12d3dd38 mov edx, dword ptr [0x12d4dda8] */
  EDX = (r32((uint32_t)(0x12d4dda8)));
  /* 12d3dd3e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12d3dd41 mov dword ptr [0x12d4dd80], eax */
  w32((uint32_t)(0x12d4dd80), (EAX));
  /* 12d3dd46 mov dword ptr [0x12d4dda8], 0x12d4dd78 */
  w32((uint32_t)(0x12d4dda8), (0x12d4dd78u));
  /* 12d3dd50 mov ecx, dword ptr [0x12d4e69c] */
  ECX = (r32((uint32_t)(0x12d4e69c)));
  /* 12d3dd56 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3dd57 call 0x12d3e010 */
  push32(0x12d3dd5cu); f_12d3e010();
  /* 12d3dd5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3dd5f push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3dd61 mov edx, dword ptr [0x12d4e69c] */
  EDX = (r32((uint32_t)(0x12d4e69c)));
  /* 12d3dd67 push edx */
  push32((uint32_t)(EDX));
  /* 12d3dd68 call 0x12d33260 */
  push32(0x12d3dd6du); f_12d33260();
  /* 12d3dd6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3dd70 mov dword ptr [0x12d4e69c], 0 */
  w32((uint32_t)(0x12d4e69c), (0x0u));
  /* 12d3dd7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d3dd7c:;
  /* 12d3dd7c mov esp, ebp */
  ESP = (EBP);
  /* 12d3dd7e pop ebp */
  EBP = (pop32());
  /* 12d3dd7f ret  */
  ESPCHK(0x12d3dc50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dd80 @ 0x12d3dd80 (525 bytes, 200 insns) */
void f_12d3dd80(void) {
  FTRACE(0x12d3dd80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3dd80 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3dd81 mov ebp, esp */
  EBP = (ESP);
  /* 12d3dd83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3dd86 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d3dd8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3dd8f mov ax, word ptr [0x12d4e6bc] */
  AX = (r16((uint32_t)(0x12d4e6bc)));
  /* 12d3dd95 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d3dd98 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3dd9c jne 0x12d3dda6 */
  if (!C.zf) goto L_12d3dda6;
  /* 12d3dd9e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d3dda1 jmp 0x12d3df89 */
  goto L_12d3df89;
L_12d3dda6:;
  /* 12d3dda6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3dda9 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3ddac push ecx */
  push32((uint32_t)(ECX));
  /* 12d3ddad push 0x15 */
  push32((uint32_t)(0x15u));
  /* 12d3ddaf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3ddb2 push edx */
  push32((uint32_t)(EDX));
  /* 12d3ddb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3ddb5 call 0x12d40990 */
  push32(0x12d3ddbau); f_12d40990();
  /* 12d3ddba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3ddbd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3ddc0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3ddc2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d3ddc5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3ddc8 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3ddcb push edx */
  push32((uint32_t)(EDX));
  /* 12d3ddcc push 0x14 */
  push32((uint32_t)(0x14u));
  /* 12d3ddce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3ddd1 push eax */
  push32((uint32_t)(EAX));
  /* 12d3ddd2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3ddd4 call 0x12d40990 */
  push32(0x12d3ddd9u); f_12d40990();
  /* 12d3ddd9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3dddc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3dddf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3dde1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d3dde4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3dde7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3ddea push edx */
  push32((uint32_t)(EDX));
  /* 12d3ddeb push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12d3dded mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3ddf0 push eax */
  push32((uint32_t)(EAX));
  /* 12d3ddf1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3ddf3 call 0x12d40990 */
  push32(0x12d3ddf8u); f_12d40990();
  /* 12d3ddf8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3ddfb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3ddfe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3de00 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d3de03 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3de06 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3de09 push edx */
  push32((uint32_t)(EDX));
  /* 12d3de0a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 12d3de0c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3de0f push eax */
  push32((uint32_t)(EAX));
  /* 12d3de10 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3de12 call 0x12d40990 */
  push32(0x12d3de17u); f_12d40990();
  /* 12d3de17 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3de1a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3de1d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3de1f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d3de22 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3de25 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3de28 push edx */
  push32((uint32_t)(EDX));
  /* 12d3de29 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12d3de2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3de2e push eax */
  push32((uint32_t)(EAX));
  /* 12d3de2f push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3de31 call 0x12d40990 */
  push32(0x12d3de36u); f_12d40990();
  /* 12d3de36 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3de39 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3de3c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3de3e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d3de41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3de44 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12d3de47 push eax */
  push32((uint32_t)(EAX));
  /* 12d3de48 call 0x12d3df90 */
  push32(0x12d3de4du); f_12d3df90();
  /* 12d3de4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3de50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3de53 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3de56 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3de57 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 12d3de59 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3de5c push edx */
  push32((uint32_t)(EDX));
  /* 12d3de5d push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3de5f call 0x12d40990 */
  push32(0x12d3de64u); f_12d40990();
  /* 12d3de64 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3de67 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3de6a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3de6c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d3de6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3de72 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3de75 push edx */
  push32((uint32_t)(EDX));
  /* 12d3de76 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 12d3de78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3de7b push eax */
  push32((uint32_t)(EAX));
  /* 12d3de7c push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3de7e call 0x12d40990 */
  push32(0x12d3de83u); f_12d40990();
  /* 12d3de83 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3de86 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3de89 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3de8b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d3de8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3de91 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3de94 push edx */
  push32((uint32_t)(EDX));
  /* 12d3de95 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12d3de97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3de9a push eax */
  push32((uint32_t)(EAX));
  /* 12d3de9b push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3de9d call 0x12d40990 */
  push32(0x12d3dea2u); f_12d40990();
  /* 12d3dea2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3dea5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3dea8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3deaa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d3dead mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3deb0 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3deb3 push edx */
  push32((uint32_t)(EDX));
  /* 12d3deb4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12d3deb6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3deb9 push eax */
  push32((uint32_t)(EAX));
  /* 12d3deba push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3debc call 0x12d40990 */
  push32(0x12d3dec1u); f_12d40990();
  /* 12d3dec1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3dec4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3dec7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3dec9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d3decc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3decf add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3ded2 push edx */
  push32((uint32_t)(EDX));
  /* 12d3ded3 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 12d3ded5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3ded8 push eax */
  push32((uint32_t)(EAX));
  /* 12d3ded9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3dedb call 0x12d40990 */
  push32(0x12d3dee0u); f_12d40990();
  /* 12d3dee0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3dee3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3dee6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3dee8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d3deeb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3deee add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3def1 push edx */
  push32((uint32_t)(EDX));
  /* 12d3def2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 12d3def4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3def7 push eax */
  push32((uint32_t)(EAX));
  /* 12d3def8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3defa call 0x12d40990 */
  push32(0x12d3deffu); f_12d40990();
  /* 12d3deff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3df02 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3df05 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3df07 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d3df0a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3df0d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3df10 push edx */
  push32((uint32_t)(EDX));
  /* 12d3df11 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 12d3df13 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3df16 push eax */
  push32((uint32_t)(EAX));
  /* 12d3df17 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3df19 call 0x12d40990 */
  push32(0x12d3df1eu); f_12d40990();
  /* 12d3df1e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3df21 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3df24 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3df26 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d3df29 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3df2c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3df2f push edx */
  push32((uint32_t)(EDX));
  /* 12d3df30 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 12d3df32 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3df35 push eax */
  push32((uint32_t)(EAX));
  /* 12d3df36 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3df38 call 0x12d40990 */
  push32(0x12d3df3du); f_12d40990();
  /* 12d3df3d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3df40 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3df43 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3df45 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d3df48 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3df4b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3df4e push edx */
  push32((uint32_t)(EDX));
  /* 12d3df4f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 12d3df51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3df54 push eax */
  push32((uint32_t)(EAX));
  /* 12d3df55 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3df57 call 0x12d40990 */
  push32(0x12d3df5cu); f_12d40990();
  /* 12d3df5c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3df5f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3df62 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3df64 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d3df67 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3df6a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3df6d push edx */
  push32((uint32_t)(EDX));
  /* 12d3df6e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 12d3df70 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3df73 push eax */
  push32((uint32_t)(EAX));
  /* 12d3df74 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3df76 call 0x12d40990 */
  push32(0x12d3df7bu); f_12d40990();
  /* 12d3df7b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3df7e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3df81 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3df83 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d3df86 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12d3df89:;
  /* 12d3df89 mov esp, ebp */
  ESP = (EBP);
  /* 12d3df8b pop ebp */
  EBP = (pop32());
  /* 12d3df8c ret  */
  ESPCHK(0x12d3dd80u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x12d3df90 (125 bytes, 49 insns) */
void f_12d3df90(void) {
  FTRACE(0x12d3df90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3df90 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3df91 mov ebp, esp */
  EBP = (ESP);
  /* 12d3df93 push ecx */
  push32((uint32_t)(ECX));
L_12d3df94:;
  /* 12d3df94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3df97 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d3df9a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d3df9c je 0x12d3e009 */
  if (C.zf) goto L_12d3e009;
  /* 12d3df9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3dfa1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d3dfa4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3dfa7 jl 0x12d3dfcd */
  if ((C.sf!=C.of)) goto L_12d3dfcd;
  /* 12d3dfa9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3dfac movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d3dfaf cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3dfb2 jg 0x12d3dfcd */
  if ((!C.zf&&C.sf==C.of)) goto L_12d3dfcd;
  /* 12d3dfb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3dfb7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d3dfba sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3dfbd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3dfc0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12d3dfc2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3dfc5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3dfc8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d3dfcb jmp 0x12d3e007 */
  goto L_12d3e007;
L_12d3dfcd:;
  /* 12d3dfcd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3dfd0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d3dfd3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3dfd6 jne 0x12d3dffe */
  if (!C.zf) goto L_12d3dffe;
  /* 12d3dfd8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3dfdb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d3dfde:;
  /* 12d3dfde mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3dfe1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3dfe4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12d3dfe7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12d3dfe9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3dfec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3dfef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d3dff2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3dff5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d3dff8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3dffa jne 0x12d3dfde */
  if (!C.zf) goto L_12d3dfde;
  /* 12d3dffc jmp 0x12d3e007 */
  goto L_12d3e007;
L_12d3dffe:;
  /* 12d3dffe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3e001 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e004 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12d3e007:;
  /* 12d3e007 jmp 0x12d3df94 */
  goto L_12d3df94;
L_12d3e009:;
  /* 12d3e009 mov esp, ebp */
  ESP = (EBP);
  /* 12d3e00b pop ebp */
  EBP = (pop32());
  /* 12d3e00c ret  */
  ESPCHK(0x12d3df90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e010 @ 0x12d3e010 (147 bytes, 52 insns) */
void f_12d3e010(void) {
  FTRACE(0x12d3e010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3e010 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3e011 mov ebp, esp */
  EBP = (ESP);
  /* 12d3e013 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3e017 jne 0x12d3e01e */
  if (!C.zf) goto L_12d3e01e;
  /* 12d3e019 jmp 0x12d3e0a1 */
  goto L_12d3e0a1;
L_12d3e01e:;
  /* 12d3e01e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3e021 cmp dword ptr [eax + 0xc], 0x12d4e6f8 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x12d4e6f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3e028 je 0x12d3e0a1 */
  if (C.zf) goto L_12d3e0a1;
  /* 12d3e02a push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3e02c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3e02f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d3e032 push edx */
  push32((uint32_t)(EDX));
  /* 12d3e033 call 0x12d33260 */
  push32(0x12d3e038u); f_12d33260();
  /* 12d3e038 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e03b push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3e03d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3e040 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d3e043 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3e044 call 0x12d33260 */
  push32(0x12d3e049u); f_12d33260();
  /* 12d3e049 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e04c push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3e04e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3e051 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d3e054 push eax */
  push32((uint32_t)(EAX));
  /* 12d3e055 call 0x12d33260 */
  push32(0x12d3e05au); f_12d33260();
  /* 12d3e05a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e05d push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3e05f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3e062 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12d3e065 push edx */
  push32((uint32_t)(EDX));
  /* 12d3e066 call 0x12d33260 */
  push32(0x12d3e06bu); f_12d33260();
  /* 12d3e06b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e06e push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3e070 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3e073 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12d3e076 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3e077 call 0x12d33260 */
  push32(0x12d3e07cu); f_12d33260();
  /* 12d3e07c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e07f push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3e081 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3e084 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 12d3e087 push eax */
  push32((uint32_t)(EAX));
  /* 12d3e088 call 0x12d33260 */
  push32(0x12d3e08du); f_12d33260();
  /* 12d3e08d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e090 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3e092 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3e095 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 12d3e098 push edx */
  push32((uint32_t)(EDX));
  /* 12d3e099 call 0x12d33260 */
  push32(0x12d3e09eu); f_12d33260();
  /* 12d3e09e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d3e0a1:;
  /* 12d3e0a1 pop ebp */
  EBP = (pop32());
  /* 12d3e0a2 ret  */
  ESPCHK(0x12d3e010u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e0b0 @ 0x12d3e0b0 (928 bytes, 284 insns) */
void f_12d3e0b0(void) {
  FTRACE(0x12d3e0b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3e0b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3e0b1 mov ebp, esp */
  EBP = (ESP);
  /* 12d3e0b3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3e0b6 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 12d3e0bd mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 12d3e0c4 cmp dword ptr [0x12d4e660], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e660))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3e0cb je 0x12d3e401 */
  if (C.zf) goto L_12d3e401;
  /* 12d3e0d1 cmp dword ptr [0x12d4e670], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e670))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3e0d8 jne 0x12d3e100 */
  if (!C.zf) goto L_12d3e100;
  /* 12d3e0da push 0x12d4e670 */
  push32((uint32_t)(0x12d4e670u));
  /* 12d3e0df push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 12d3e0e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3e0e6 mov ax, word ptr [0x12d4e6b4] */
  AX = (r16((uint32_t)(0x12d4e6b4)));
  /* 12d3e0ec push eax */
  push32((uint32_t)(EAX));
  /* 12d3e0ed push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3e0ef call 0x12d40990 */
  push32(0x12d3e0f4u); f_12d40990();
  /* 12d3e0f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e0f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3e0f9 je 0x12d3e100 */
  if (C.zf) goto L_12d3e100;
  /* 12d3e0fb jmp 0x12d3e3c2 */
  goto L_12d3e3c2;
L_12d3e100:;
  /* 12d3e100 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 12d3e102 push 0x12d4a03c */
  push32((uint32_t)(0x12d4a03cu));
  /* 12d3e107 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3e109 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12d3e10e call 0x12d327d0 */
  push32(0x12d3e113u); f_12d327d0();
  /* 12d3e113 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e116 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12d3e119 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12d3e11b push 0x12d4a03c */
  push32((uint32_t)(0x12d4a03cu));
  /* 12d3e120 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3e122 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12d3e127 call 0x12d327d0 */
  push32(0x12d3e12cu); f_12d327d0();
  /* 12d3e12c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e12f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12d3e132 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 12d3e134 push 0x12d4a03c */
  push32((uint32_t)(0x12d4a03cu));
  /* 12d3e139 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3e13b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 12d3e140 call 0x12d327d0 */
  push32(0x12d3e145u); f_12d327d0();
  /* 12d3e145 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e148 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12d3e14b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 12d3e14d push 0x12d4a03c */
  push32((uint32_t)(0x12d4a03cu));
  /* 12d3e152 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3e154 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12d3e159 call 0x12d327d0 */
  push32(0x12d3e15eu); f_12d327d0();
  /* 12d3e15e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e161 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12d3e164 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3e168 je 0x12d3e17c */
  if (C.zf) goto L_12d3e17c;
  /* 12d3e16a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3e16e je 0x12d3e17c */
  if (C.zf) goto L_12d3e17c;
  /* 12d3e170 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3e174 je 0x12d3e17c */
  if (C.zf) goto L_12d3e17c;
  /* 12d3e176 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3e17a jne 0x12d3e181 */
  if (!C.zf) goto L_12d3e181;
L_12d3e17c:;
  /* 12d3e17c jmp 0x12d3e3c2 */
  goto L_12d3e3c2;
L_12d3e181:;
  /* 12d3e181 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d3e184 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12d3e187 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12d3e18e jmp 0x12d3e199 */
  goto L_12d3e199;
L_12d3e190:;
  /* 12d3e190 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d3e193 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e196 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12d3e199:;
  /* 12d3e199 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3e1a0 jge 0x12d3e1b5 */
  if ((C.sf==C.of)) goto L_12d3e1b5;
  /* 12d3e1a2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d3e1a5 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 12d3e1a8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12d3e1aa mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d3e1ad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e1b0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12d3e1b3 jmp 0x12d3e190 */
  goto L_12d3e190;
L_12d3e1b5:;
  /* 12d3e1b5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 12d3e1b8 push eax */
  push32((uint32_t)(EAX));
  /* 12d3e1b9 mov ecx, dword ptr [0x12d4e670] */
  ECX = (r32((uint32_t)(0x12d4e670)));
  /* 12d3e1bf push ecx */
  push32((uint32_t)(ECX));
  /* 12d3e1c0 call dword ptr [0x12d502ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502ec))), 0x12d3e1c6u);
  /* 12d3e1c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3e1c8 jne 0x12d3e1cf */
  if (!C.zf) goto L_12d3e1cf;
  /* 12d3e1ca jmp 0x12d3e3c2 */
  goto L_12d3e3c2;
L_12d3e1cf:;
  /* 12d3e1cf cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3e1d3 jbe 0x12d3e1da */
  if ((C.cf||C.zf)) goto L_12d3e1da;
  /* 12d3e1d5 jmp 0x12d3e3c2 */
  goto L_12d3e3c2;
L_12d3e1da:;
  /* 12d3e1da mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d3e1dd and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d3e1e3 mov dword ptr [0x12d4cec4], edx */
  w32((uint32_t)(0x12d4cec4), (EDX));
  /* 12d3e1e9 cmp dword ptr [0x12d4cec4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d4cec4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3e1f0 jle 0x12d3e249 */
  if ((C.zf||C.sf!=C.of)) goto L_12d3e249;
  /* 12d3e1f2 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 12d3e1f5 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12d3e1f8 jmp 0x12d3e203 */
  goto L_12d3e203;
L_12d3e1fa:;
  /* 12d3e1fa mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d3e1fd add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e200 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_12d3e203:;
  /* 12d3e203 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d3e206 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3e208 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d3e20a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3e20c je 0x12d3e249 */
  if (C.zf) goto L_12d3e249;
  /* 12d3e20e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d3e211 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d3e213 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12d3e216 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d3e218 je 0x12d3e249 */
  if (C.zf) goto L_12d3e249;
  /* 12d3e21a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d3e21d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3e21f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d3e221 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12d3e224 jmp 0x12d3e22f */
  goto L_12d3e22f;
L_12d3e226:;
  /* 12d3e226 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d3e229 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e22c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12d3e22f:;
  /* 12d3e22f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d3e232 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3e234 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12d3e237 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3e23a jg 0x12d3e247 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d3e247;
  /* 12d3e23c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d3e23f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e242 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12d3e245 jmp 0x12d3e226 */
  goto L_12d3e226;
L_12d3e247:;
  /* 12d3e247 jmp 0x12d3e1fa */
  goto L_12d3e1fa;
L_12d3e249:;
  /* 12d3e249 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3e24b push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3e24d push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3e24f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d3e252 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e255 push eax */
  push32((uint32_t)(EAX));
  /* 12d3e256 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12d3e25b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d3e25e push ecx */
  push32((uint32_t)(ECX));
  /* 12d3e25f push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3e261 call 0x12d3aa00 */
  push32(0x12d3e266u); f_12d3aa00();
  /* 12d3e266 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e269 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3e26b jne 0x12d3e272 */
  if (!C.zf) goto L_12d3e272;
  /* 12d3e26d jmp 0x12d3e3c2 */
  goto L_12d3e3c2;
L_12d3e272:;
  /* 12d3e272 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d3e275 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 12d3e27a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d3e27d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12d3e280 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12d3e287 jmp 0x12d3e292 */
  goto L_12d3e292;
L_12d3e289:;
  /* 12d3e289 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d3e28c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e28f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12d3e292:;
  /* 12d3e292 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3e299 jge 0x12d3e2b0 */
  if ((C.sf==C.of)) goto L_12d3e2b0;
  /* 12d3e29b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d3e29e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 12d3e2a2 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 12d3e2a5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d3e2a8 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e2ab mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12d3e2ae jmp 0x12d3e289 */
  goto L_12d3e289;
L_12d3e2b0:;
  /* 12d3e2b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3e2b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3e2b4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d3e2b7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e2ba push edx */
  push32((uint32_t)(EDX));
  /* 12d3e2bb push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12d3e2c0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d3e2c3 push eax */
  push32((uint32_t)(EAX));
  /* 12d3e2c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3e2c6 call 0x12d40c30 */
  push32(0x12d3e2cbu); f_12d40c30();
  /* 12d3e2cb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e2ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3e2d0 jne 0x12d3e2d7 */
  if (!C.zf) goto L_12d3e2d7;
  /* 12d3e2d2 jmp 0x12d3e3c2 */
  goto L_12d3e3c2;
L_12d3e2d7:;
  /* 12d3e2d7 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d3e2da mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 12d3e2df cmp dword ptr [0x12d4cec4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d4cec4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3e2e6 jle 0x12d3e343 */
  if ((C.zf||C.sf!=C.of)) goto L_12d3e343;
  /* 12d3e2e8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 12d3e2eb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12d3e2ee jmp 0x12d3e2f9 */
  goto L_12d3e2f9;
L_12d3e2f0:;
  /* 12d3e2f0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d3e2f3 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e2f6 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12d3e2f9:;
  /* 12d3e2f9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d3e2fc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d3e2fe mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d3e300 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d3e302 je 0x12d3e343 */
  if (C.zf) goto L_12d3e343;
  /* 12d3e304 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d3e307 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3e309 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12d3e30c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d3e30e je 0x12d3e343 */
  if (C.zf) goto L_12d3e343;
  /* 12d3e310 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d3e313 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3e315 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d3e317 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12d3e31a jmp 0x12d3e325 */
  goto L_12d3e325;
L_12d3e31c:;
  /* 12d3e31c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d3e31f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e322 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12d3e325:;
  /* 12d3e325 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d3e328 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3e32a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12d3e32d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3e330 jg 0x12d3e341 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d3e341;
  /* 12d3e332 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d3e335 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d3e338 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 12d3e33f jmp 0x12d3e31c */
  goto L_12d3e31c;
L_12d3e341:;
  /* 12d3e341 jmp 0x12d3e2f0 */
  goto L_12d3e2f0;
L_12d3e343:;
  /* 12d3e343 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d3e346 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e349 mov dword ptr [0x12d4ccb8], eax */
  w32((uint32_t)(0x12d4ccb8), (EAX));
  /* 12d3e34e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d3e351 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e354 mov dword ptr [0x12d4ccbc], ecx */
  w32((uint32_t)(0x12d4ccbc), (ECX));
  /* 12d3e35a cmp dword ptr [0x12d4e6a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e6a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3e361 je 0x12d3e374 */
  if (C.zf) goto L_12d3e374;
  /* 12d3e363 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3e365 mov edx, dword ptr [0x12d4e6a0] */
  EDX = (r32((uint32_t)(0x12d4e6a0)));
  /* 12d3e36b push edx */
  push32((uint32_t)(EDX));
  /* 12d3e36c call 0x12d33260 */
  push32(0x12d3e371u); f_12d33260();
  /* 12d3e371 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d3e374:;
  /* 12d3e374 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d3e377 mov dword ptr [0x12d4e6a0], eax */
  w32((uint32_t)(0x12d4e6a0), (EAX));
  /* 12d3e37c cmp dword ptr [0x12d4e6a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e6a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3e383 je 0x12d3e396 */
  if (C.zf) goto L_12d3e396;
  /* 12d3e385 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3e387 mov ecx, dword ptr [0x12d4e6a4] */
  ECX = (r32((uint32_t)(0x12d4e6a4)));
  /* 12d3e38d push ecx */
  push32((uint32_t)(ECX));
  /* 12d3e38e call 0x12d33260 */
  push32(0x12d3e393u); f_12d33260();
  /* 12d3e393 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d3e396:;
  /* 12d3e396 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d3e399 mov dword ptr [0x12d4e6a4], edx */
  w32((uint32_t)(0x12d4e6a4), (EDX));
  /* 12d3e39f push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3e3a1 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d3e3a4 push eax */
  push32((uint32_t)(EAX));
  /* 12d3e3a5 call 0x12d33260 */
  push32(0x12d3e3aau); f_12d33260();
  /* 12d3e3aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e3ad push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3e3af mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d3e3b2 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3e3b3 call 0x12d33260 */
  push32(0x12d3e3b8u); f_12d33260();
  /* 12d3e3b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e3bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3e3bd jmp 0x12d3e44c */
  goto L_12d3e44c;
L_12d3e3c2:;
  /* 12d3e3c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3e3c4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d3e3c7 push edx */
  push32((uint32_t)(EDX));
  /* 12d3e3c8 call 0x12d33260 */
  push32(0x12d3e3cdu); f_12d33260();
  /* 12d3e3cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e3d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3e3d2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d3e3d5 push eax */
  push32((uint32_t)(EAX));
  /* 12d3e3d6 call 0x12d33260 */
  push32(0x12d3e3dbu); f_12d33260();
  /* 12d3e3db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e3de push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3e3e0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d3e3e3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3e3e4 call 0x12d33260 */
  push32(0x12d3e3e9u); f_12d33260();
  /* 12d3e3e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e3ec push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3e3ee mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d3e3f1 push edx */
  push32((uint32_t)(EDX));
  /* 12d3e3f2 call 0x12d33260 */
  push32(0x12d3e3f7u); f_12d33260();
  /* 12d3e3f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e3fa mov eax, 1 */
  EAX = (0x1u);
  /* 12d3e3ff jmp 0x12d3e44c */
  goto L_12d3e44c;
L_12d3e401:;
  /* 12d3e401 mov dword ptr [0x12d4ccb8], 0x12d4ccc2 */
  w32((uint32_t)(0x12d4ccb8), (0x12d4ccc2u));
  /* 12d3e40b mov dword ptr [0x12d4ccbc], 0x12d4ccc2 */
  w32((uint32_t)(0x12d4ccbc), (0x12d4ccc2u));
  /* 12d3e415 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3e417 mov eax, dword ptr [0x12d4e6a0] */
  EAX = (r32((uint32_t)(0x12d4e6a0)));
  /* 12d3e41c push eax */
  push32((uint32_t)(EAX));
  /* 12d3e41d call 0x12d33260 */
  push32(0x12d3e422u); f_12d33260();
  /* 12d3e422 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e425 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d3e427 mov ecx, dword ptr [0x12d4e6a4] */
  ECX = (r32((uint32_t)(0x12d4e6a4)));
  /* 12d3e42d push ecx */
  push32((uint32_t)(ECX));
  /* 12d3e42e call 0x12d33260 */
  push32(0x12d3e433u); f_12d33260();
  /* 12d3e433 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e436 mov dword ptr [0x12d4e6a0], 0 */
  w32((uint32_t)(0x12d4e6a0), (0x0u));
  /* 12d3e440 mov dword ptr [0x12d4e6a4], 0 */
  w32((uint32_t)(0x12d4e6a4), (0x0u));
  /* 12d3e44a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d3e44c:;
  /* 12d3e44c mov esp, ebp */
  ESP = (EBP);
  /* 12d3e44e pop ebp */
  EBP = (pop32());
  /* 12d3e44f ret  */
  ESPCHK(0x12d3e0b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e450 @ 0x12d3e450 (7 bytes, 5 insns) */
void f_12d3e450(void) {
  FTRACE(0x12d3e450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3e450 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3e451 mov ebp, esp */
  EBP = (ESP);
  /* 12d3e453 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3e455 pop ebp */
  EBP = (pop32());
  /* 12d3e456 ret  */
  ESPCHK(0x12d3e450u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x12d3e460 (129 bytes, 56 insns) */
void f_12d3e460(void) {
  FTRACE(0x12d3e460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3e460 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 12d3e464 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 12d3e468 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12d3e46e jne 0x12d3e4ac */
  if (!C.zf) goto L_12d3e4ac;
L_12d3e470:;
  /* 12d3e470 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d3e472 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d3e474 jne 0x12d3e4a4 */
  if (!C.zf) goto L_12d3e4a4;
  /* 12d3e476 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12d3e478 je 0x12d3e4a0 */
  if (C.zf) goto L_12d3e4a0;
  /* 12d3e47a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d3e47d jne 0x12d3e4a4 */
  if (!C.zf) goto L_12d3e4a4;
  /* 12d3e47f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12d3e481 je 0x12d3e4a0 */
  if (C.zf) goto L_12d3e4a0;
  /* 12d3e483 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12d3e486 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d3e489 jne 0x12d3e4a4 */
  if (!C.zf) goto L_12d3e4a4;
  /* 12d3e48b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12d3e48d je 0x12d3e4a0 */
  if (C.zf) goto L_12d3e4a0;
  /* 12d3e48f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d3e492 jne 0x12d3e4a4 */
  if (!C.zf) goto L_12d3e4a4;
  /* 12d3e494 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e497 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e49a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12d3e49c jne 0x12d3e470 */
  if (!C.zf) goto L_12d3e470;
  /* 12d3e49e mov edi, edi */
  EDI = (EDI);
L_12d3e4a0:;
  /* 12d3e4a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3e4a2 ret  */
  ESPCHK(0x12d3e460u, _esp0);
  ESP += 4; return;
  /* 12d3e4a3 nop  */
  /* nop */
L_12d3e4a4:;
  /* 12d3e4a4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3e4a6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12d3e4a8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12d3e4a9 ret  */
  ESPCHK(0x12d3e460u, _esp0);
  ESP += 4; return;
  /* 12d3e4aa mov edi, edi */
  EDI = (EDI);
L_12d3e4ac:;
  /* 12d3e4ac test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 12d3e4b2 je 0x12d3e4c8 */
  if (C.zf) goto L_12d3e4c8;
  /* 12d3e4b4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d3e4b6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12d3e4b7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d3e4b9 jne 0x12d3e4a4 */
  if (!C.zf) goto L_12d3e4a4;
  /* 12d3e4bb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12d3e4bc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12d3e4be je 0x12d3e4a0 */
  if (C.zf) goto L_12d3e4a0;
  /* 12d3e4c0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 12d3e4c6 je 0x12d3e470 */
  if (C.zf) goto L_12d3e470;
L_12d3e4c8:;
  /* 12d3e4c8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 12d3e4cb add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e4ce cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d3e4d0 jne 0x12d3e4a4 */
  if (!C.zf) goto L_12d3e4a4;
  /* 12d3e4d2 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12d3e4d4 je 0x12d3e4a0 */
  if (C.zf) goto L_12d3e4a0;
  /* 12d3e4d6 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d3e4d9 jne 0x12d3e4a4 */
  if (!C.zf) goto L_12d3e4a4;
  /* 12d3e4db or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12d3e4dd je 0x12d3e4a0 */
  if (C.zf) goto L_12d3e4a0;
  /* 12d3e4df add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e4e2 jmp 0x12d3e470 */
  goto L_12d3e470;
}

/* FUN_1000e4f0 @ 0x12d3e4f0 (62 bytes, 35 insns) */
void f_12d3e4f0(void) {
  FTRACE(0x12d3e4f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3e4f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3e4f1 mov ebp, esp */
  EBP = (ESP);
  /* 12d3e4f3 push esi */
  push32((uint32_t)(ESI));
  /* 12d3e4f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3e4f6 push eax */
  push32((uint32_t)(EAX));
  /* 12d3e4f7 push eax */
  push32((uint32_t)(EAX));
  /* 12d3e4f8 push eax */
  push32((uint32_t)(EAX));
  /* 12d3e4f9 push eax */
  push32((uint32_t)(EAX));
  /* 12d3e4fa push eax */
  push32((uint32_t)(EAX));
  /* 12d3e4fb push eax */
  push32((uint32_t)(EAX));
  /* 12d3e4fc push eax */
  push32((uint32_t)(EAX));
  /* 12d3e4fd push eax */
  push32((uint32_t)(EAX));
  /* 12d3e4fe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3e501 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12d3e504:;
  /* 12d3e504 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d3e506 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12d3e508 je 0x12d3e511 */
  if (C.zf) goto L_12d3e511;
  /* 12d3e50a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12d3e50b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x12d3e50b");
  /* 12d3e50f jmp 0x12d3e504 */
  goto L_12d3e504;
L_12d3e511:;
  /* 12d3e511 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3e514 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d3e517 nop  */
  /* nop */
L_12d3e518:;
  /* 12d3e518 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12d3e519 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d3e51b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12d3e51d je 0x12d3e526 */
  if (C.zf) goto L_12d3e526;
  /* 12d3e51f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12d3e520 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x12d3e520");
  /* 12d3e524 jae 0x12d3e518 */
  if (!C.cf) goto L_12d3e518;
L_12d3e526:;
  /* 12d3e526 mov eax, ecx */
  EAX = (ECX);
  /* 12d3e528 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e52b pop esi */
  ESI = (pop32());
  /* 12d3e52c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d3e52d ret  */
  ESPCHK(0x12d3e4f0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x12d3e530 (56 bytes, 31 insns) */
void f_12d3e530(void) {
  FTRACE(0x12d3e530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3e530 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3e531 mov ebp, esp */
  EBP = (ESP);
  /* 12d3e533 push edi */
  push32((uint32_t)(EDI));
  /* 12d3e534 push esi */
  push32((uint32_t)(ESI));
  /* 12d3e535 push ebx */
  push32((uint32_t)(EBX));
  /* 12d3e536 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3e539 jecxz 0x12d3e561 */
  x86_unimpl("jecxz @ 0x12d3e539");
  /* 12d3e53b mov ebx, ecx */
  EBX = (ECX);
  /* 12d3e53d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3e540 mov esi, edi */
  ESI = (EDI);
  /* 12d3e542 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3e544 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 12d3e546 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d3e548 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e54a mov edi, esi */
  EDI = (ESI);
  /* 12d3e54c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3e54f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 12d3e551 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 12d3e554 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3e556 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d3e559 ja 0x12d3e55f */
  if ((!C.cf&&!C.zf)) goto L_12d3e55f;
  /* 12d3e55b je 0x12d3e561 */
  if (C.zf) goto L_12d3e561;
  /* 12d3e55d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12d3e55e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_12d3e55f:;
  /* 12d3e55f not ecx */
  ECX = (~(ECX));
L_12d3e561:;
  /* 12d3e561 mov eax, ecx */
  EAX = (ECX);
  /* 12d3e563 pop ebx */
  EBX = (pop32());
  /* 12d3e564 pop esi */
  ESI = (pop32());
  /* 12d3e565 pop edi */
  EDI = (pop32());
  /* 12d3e566 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d3e567 ret  */
  ESPCHK(0x12d3e530u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e570 @ 0x12d3e570 (58 bytes, 32 insns) */
void f_12d3e570(void) {
  FTRACE(0x12d3e570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3e570 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3e571 mov ebp, esp */
  EBP = (ESP);
  /* 12d3e573 push esi */
  push32((uint32_t)(ESI));
  /* 12d3e574 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3e576 push eax */
  push32((uint32_t)(EAX));
  /* 12d3e577 push eax */
  push32((uint32_t)(EAX));
  /* 12d3e578 push eax */
  push32((uint32_t)(EAX));
  /* 12d3e579 push eax */
  push32((uint32_t)(EAX));
  /* 12d3e57a push eax */
  push32((uint32_t)(EAX));
  /* 12d3e57b push eax */
  push32((uint32_t)(EAX));
  /* 12d3e57c push eax */
  push32((uint32_t)(EAX));
  /* 12d3e57d push eax */
  push32((uint32_t)(EAX));
  /* 12d3e57e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3e581 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12d3e584:;
  /* 12d3e584 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d3e586 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12d3e588 je 0x12d3e591 */
  if (C.zf) goto L_12d3e591;
  /* 12d3e58a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12d3e58b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x12d3e58b");
  /* 12d3e58f jmp 0x12d3e584 */
  goto L_12d3e584;
L_12d3e591:;
  /* 12d3e591 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_12d3e594:;
  /* 12d3e594 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d3e596 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12d3e598 je 0x12d3e5a4 */
  if (C.zf) goto L_12d3e5a4;
  /* 12d3e59a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12d3e59b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x12d3e59b");
  /* 12d3e59f jae 0x12d3e594 */
  if (!C.cf) goto L_12d3e594;
  /* 12d3e5a1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_12d3e5a4:;
  /* 12d3e5a4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e5a7 pop esi */
  ESI = (pop32());
  /* 12d3e5a8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d3e5a9 ret  */
  ESPCHK(0x12d3e570u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e5b0 @ 0x12d3e5b0 (512 bytes, 147 insns) */
void f_12d3e5b0(void) {
  FTRACE(0x12d3e5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3e5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3e5b1 mov ebp, esp */
  EBP = (ESP);
  /* 12d3e5b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3e5b6 cmp dword ptr [0x12d4e6ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e6ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3e5bd jne 0x12d3e5e2 */
  if (!C.zf) goto L_12d3e5e2;
  /* 12d3e5bf call 0x12d3f080 */
  push32(0x12d3e5c4u); f_12d3f080();
  /* 12d3e5c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3e5c6 je 0x12d3e5d2 */
  if (C.zf) goto L_12d3e5d2;
  /* 12d3e5c8 mov eax, dword ptr [0x12d50324] */
  EAX = (r32((uint32_t)(0x12d50324)));
  /* 12d3e5cd mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d3e5d0 jmp 0x12d3e5d9 */
  goto L_12d3e5d9;
L_12d3e5d2:;
  /* 12d3e5d2 mov dword ptr [ebp - 8], 0x12d3f0d0 */
  w32((uint32_t)(EBP + -0x8), (0x12d3f0d0u));
L_12d3e5d9:;
  /* 12d3e5d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3e5dc mov dword ptr [0x12d4e6ec], ecx */
  w32((uint32_t)(0x12d4e6ec), (ECX));
L_12d3e5e2:;
  /* 12d3e5e2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3e5e6 jne 0x12d3e5f2 */
  if (!C.zf) goto L_12d3e5f2;
  /* 12d3e5e8 call 0x12d3eed0 */
  push32(0x12d3e5edu); f_12d3eed0();
  /* 12d3e5ed jmp 0x12d3e6be */
  goto L_12d3e6be;
L_12d3e5f2:;
  /* 12d3e5f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3e5f5 mov dword ptr [0x12d4e6dc], edx */
  w32((uint32_t)(0x12d4e6dc), (EDX));
  /* 12d3e5fb cmp dword ptr [0x12d4e6dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e6dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3e602 je 0x12d3e624 */
  if (C.zf) goto L_12d3e624;
  /* 12d3e604 mov eax, dword ptr [0x12d4e6dc] */
  EAX = (r32((uint32_t)(0x12d4e6dc)));
  /* 12d3e609 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d3e60c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d3e60e je 0x12d3e624 */
  if (C.zf) goto L_12d3e624;
  /* 12d3e610 push 0x12d4e6dc */
  push32((uint32_t)(0x12d4e6dcu));
  /* 12d3e615 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12d3e617 push 0x12d4dab0 */
  push32((uint32_t)(0x12d4dab0u));
  /* 12d3e61c call 0x12d3e7b0 */
  push32(0x12d3e621u); f_12d3e7b0();
  /* 12d3e621 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d3e624:;
  /* 12d3e624 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3e627 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e62a mov dword ptr [0x12d4e6e0], edx */
  w32((uint32_t)(0x12d4e6e0), (EDX));
  /* 12d3e630 cmp dword ptr [0x12d4e6e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e6e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3e637 je 0x12d3e659 */
  if (C.zf) goto L_12d3e659;
  /* 12d3e639 mov eax, dword ptr [0x12d4e6e0] */
  EAX = (r32((uint32_t)(0x12d4e6e0)));
  /* 12d3e63e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d3e641 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d3e643 je 0x12d3e659 */
  if (C.zf) goto L_12d3e659;
  /* 12d3e645 push 0x12d4e6e0 */
  push32((uint32_t)(0x12d4e6e0u));
  /* 12d3e64a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12d3e64c push 0x12d4d9f8 */
  push32((uint32_t)(0x12d4d9f8u));
  /* 12d3e651 call 0x12d3e7b0 */
  push32(0x12d3e656u); f_12d3e7b0();
  /* 12d3e656 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d3e659:;
  /* 12d3e659 mov dword ptr [0x12d4e6e4], 0 */
  w32((uint32_t)(0x12d4e6e4), (0x0u));
  /* 12d3e663 cmp dword ptr [0x12d4e6dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e6dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3e66a je 0x12d3e69d */
  if (C.zf) goto L_12d3e69d;
  /* 12d3e66c mov edx, dword ptr [0x12d4e6dc] */
  EDX = (r32((uint32_t)(0x12d4e6dc)));
  /* 12d3e672 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d3e675 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3e677 je 0x12d3e69d */
  if (C.zf) goto L_12d3e69d;
  /* 12d3e679 cmp dword ptr [0x12d4e6e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e6e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3e680 je 0x12d3e696 */
  if (C.zf) goto L_12d3e696;
  /* 12d3e682 mov ecx, dword ptr [0x12d4e6e0] */
  ECX = (r32((uint32_t)(0x12d4e6e0)));
  /* 12d3e688 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d3e68b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d3e68d je 0x12d3e696 */
  if (C.zf) goto L_12d3e696;
  /* 12d3e68f call 0x12d3e840 */
  push32(0x12d3e694u); f_12d3e840();
  /* 12d3e694 jmp 0x12d3e69b */
  goto L_12d3e69b;
L_12d3e696:;
  /* 12d3e696 call 0x12d3ec30 */
  push32(0x12d3e69bu); f_12d3ec30();
L_12d3e69b:;
  /* 12d3e69b jmp 0x12d3e6be */
  goto L_12d3e6be;
L_12d3e69d:;
  /* 12d3e69d cmp dword ptr [0x12d4e6e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e6e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3e6a4 je 0x12d3e6b9 */
  if (C.zf) goto L_12d3e6b9;
  /* 12d3e6a6 mov eax, dword ptr [0x12d4e6e0] */
  EAX = (r32((uint32_t)(0x12d4e6e0)));
  /* 12d3e6ab movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d3e6ae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d3e6b0 je 0x12d3e6b9 */
  if (C.zf) goto L_12d3e6b9;
  /* 12d3e6b2 call 0x12d3edd0 */
  push32(0x12d3e6b7u); f_12d3edd0();
  /* 12d3e6b7 jmp 0x12d3e6be */
  goto L_12d3e6be;
L_12d3e6b9:;
  /* 12d3e6b9 call 0x12d3eed0 */
  push32(0x12d3e6beu); f_12d3eed0();
L_12d3e6be:;
  /* 12d3e6be cmp dword ptr [0x12d4e6e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e6e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3e6c5 jne 0x12d3e6ce */
  if (!C.zf) goto L_12d3e6ce;
  /* 12d3e6c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3e6c9 jmp 0x12d3e7ac */
  goto L_12d3e7ac;
L_12d3e6ce:;
  /* 12d3e6ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3e6d1 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e6d7 push edx */
  push32((uint32_t)(EDX));
  /* 12d3e6d8 call 0x12d3ef00 */
  push32(0x12d3e6ddu); f_12d3ef00();
  /* 12d3e6dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e6e0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d3e6e3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3e6e7 je 0x12d3e6fc */
  if (C.zf) goto L_12d3e6fc;
  /* 12d3e6e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3e6ec and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d3e6f1 push eax */
  push32((uint32_t)(EAX));
  /* 12d3e6f2 call dword ptr [0x12d50320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50320))), 0x12d3e6f8u);
  /* 12d3e6f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3e6fa jne 0x12d3e703 */
  if (!C.zf) goto L_12d3e703;
L_12d3e6fc:;
  /* 12d3e6fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3e6fe jmp 0x12d3e7ac */
  goto L_12d3e7ac;
L_12d3e703:;
  /* 12d3e703 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3e705 mov ecx, dword ptr [0x12d4e6cc] */
  ECX = (r32((uint32_t)(0x12d4e6cc)));
  /* 12d3e70b push ecx */
  push32((uint32_t)(ECX));
  /* 12d3e70c call dword ptr [0x12d50310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50310))), 0x12d3e712u);
  /* 12d3e712 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3e714 jne 0x12d3e71d */
  if (!C.zf) goto L_12d3e71d;
  /* 12d3e716 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3e718 jmp 0x12d3e7ac */
  goto L_12d3e7ac;
L_12d3e71d:;
  /* 12d3e71d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3e721 je 0x12d3e748 */
  if (C.zf) goto L_12d3e748;
  /* 12d3e723 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3e726 mov ax, word ptr [0x12d4e6cc] */
  AX = (r16((uint32_t)(0x12d4e6cc)));
  /* 12d3e72c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 12d3e72f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3e732 mov dx, word ptr [0x12d4e6e8] */
  DX = (r16((uint32_t)(0x12d4e6e8)));
  /* 12d3e739 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 12d3e73d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3e740 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 12d3e744 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_12d3e748:;
  /* 12d3e748 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3e74c je 0x12d3e7a7 */
  if (C.zf) goto L_12d3e7a7;
  /* 12d3e74e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12d3e750 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3e753 push edx */
  push32((uint32_t)(EDX));
  /* 12d3e754 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 12d3e759 mov eax, dword ptr [0x12d4e6cc] */
  EAX = (r32((uint32_t)(0x12d4e6cc)));
  /* 12d3e75e push eax */
  push32((uint32_t)(EAX));
  /* 12d3e75f call dword ptr [0x12d4e6ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d4e6ec))), 0x12d3e765u);
  /* 12d3e765 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3e767 jne 0x12d3e76d */
  if (!C.zf) goto L_12d3e76d;
  /* 12d3e769 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3e76b jmp 0x12d3e7ac */
  goto L_12d3e7ac;
L_12d3e76d:;
  /* 12d3e76d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12d3e76f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3e772 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e775 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3e776 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 12d3e77b mov edx, dword ptr [0x12d4e6e8] */
  EDX = (r32((uint32_t)(0x12d4e6e8)));
  /* 12d3e781 push edx */
  push32((uint32_t)(EDX));
  /* 12d3e782 call dword ptr [0x12d4e6ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d4e6ec))), 0x12d3e788u);
  /* 12d3e788 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3e78a jne 0x12d3e790 */
  if (!C.zf) goto L_12d3e790;
  /* 12d3e78c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3e78e jmp 0x12d3e7ac */
  goto L_12d3e7ac;
L_12d3e790:;
  /* 12d3e790 push 0xa */
  push32((uint32_t)(0xau));
  /* 12d3e792 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3e795 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e79a push eax */
  push32((uint32_t)(EAX));
  /* 12d3e79b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3e79e push ecx */
  push32((uint32_t)(ECX));
  /* 12d3e79f call 0x12d35310 */
  push32(0x12d3e7a4u); f_12d35310();
  /* 12d3e7a4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d3e7a7:;
  /* 12d3e7a7 mov eax, 1 */
  EAX = (0x1u);
L_12d3e7ac:;
  /* 12d3e7ac mov esp, ebp */
  ESP = (EBP);
  /* 12d3e7ae pop ebp */
  EBP = (pop32());
  /* 12d3e7af ret  */
  ESPCHK(0x12d3e5b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e7b0 @ 0x12d3e7b0 (130 bytes, 47 insns) */
void f_12d3e7b0(void) {
  FTRACE(0x12d3e7b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3e7b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3e7b1 mov ebp, esp */
  EBP = (ESP);
  /* 12d3e7b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3e7b6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12d3e7bd mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12d3e7c4:;
  /* 12d3e7c4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3e7c7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3e7ca jg 0x12d3e82e */
  if ((!C.zf&&C.sf==C.of)) goto L_12d3e82e;
  /* 12d3e7cc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3e7d0 je 0x12d3e82e */
  if (C.zf) goto L_12d3e82e;
  /* 12d3e7d2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3e7d5 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e7d8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d3e7d9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3e7db sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12d3e7dd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d3e7e0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3e7e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3e7e6 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 12d3e7e9 push eax */
  push32((uint32_t)(EAX));
  /* 12d3e7ea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3e7ed mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d3e7ef push edx */
  push32((uint32_t)(EDX));
  /* 12d3e7f0 call 0x12d40ea0 */
  push32(0x12d3e7f5u); f_12d40ea0();
  /* 12d3e7f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e7f8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d3e7fb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3e7ff jne 0x12d3e812 */
  if (!C.zf) goto L_12d3e812;
  /* 12d3e801 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3e804 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3e807 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 12d3e80b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3e80e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12d3e810 jmp 0x12d3e82c */
  goto L_12d3e82c;
L_12d3e812:;
  /* 12d3e812 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3e816 jge 0x12d3e823 */
  if ((C.sf==C.of)) goto L_12d3e823;
  /* 12d3e818 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3e81b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3e81e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12d3e821 jmp 0x12d3e82c */
  goto L_12d3e82c;
L_12d3e823:;
  /* 12d3e823 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3e826 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e829 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12d3e82c:;
  /* 12d3e82c jmp 0x12d3e7c4 */
  goto L_12d3e7c4;
L_12d3e82e:;
  /* 12d3e82e mov esp, ebp */
  ESP = (EBP);
  /* 12d3e830 pop ebp */
  EBP = (pop32());
  /* 12d3e831 ret  */
  ESPCHK(0x12d3e7b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e840 @ 0x12d3e840 (186 bytes, 50 insns) */
void f_12d3e840(void) {
  FTRACE(0x12d3e840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3e840 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3e841 mov ebp, esp */
  EBP = (ESP);
  /* 12d3e843 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3e844 mov eax, dword ptr [0x12d4e6dc] */
  EAX = (r32((uint32_t)(0x12d4e6dc)));
  /* 12d3e849 push eax */
  push32((uint32_t)(EAX));
  /* 12d3e84a call 0x12d35600 */
  push32(0x12d3e84fu); f_12d35600();
  /* 12d3e84f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e852 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3e854 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3e857 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12d3e85a mov dword ptr [0x12d4e6d8], ecx */
  w32((uint32_t)(0x12d4e6d8), (ECX));
  /* 12d3e860 mov edx, dword ptr [0x12d4e6e0] */
  EDX = (r32((uint32_t)(0x12d4e6e0)));
  /* 12d3e866 push edx */
  push32((uint32_t)(EDX));
  /* 12d3e867 call 0x12d35600 */
  push32(0x12d3e86cu); f_12d35600();
  /* 12d3e86c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e86f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3e871 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3e874 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12d3e877 mov dword ptr [0x12d4e6d0], ecx */
  w32((uint32_t)(0x12d4e6d0), (ECX));
  /* 12d3e87d mov dword ptr [0x12d4e6cc], 0 */
  w32((uint32_t)(0x12d4e6cc), (0x0u));
  /* 12d3e887 cmp dword ptr [0x12d4e6d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e6d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3e88e je 0x12d3e899 */
  if (C.zf) goto L_12d3e899;
  /* 12d3e890 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12d3e897 jmp 0x12d3e8ab */
  goto L_12d3e8ab;
L_12d3e899:;
  /* 12d3e899 mov edx, dword ptr [0x12d4e6dc] */
  EDX = (r32((uint32_t)(0x12d4e6dc)));
  /* 12d3e89f push edx */
  push32((uint32_t)(EDX));
  /* 12d3e8a0 call 0x12d3f2e0 */
  push32(0x12d3e8a5u); f_12d3f2e0();
  /* 12d3e8a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e8a8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d3e8ab:;
  /* 12d3e8ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3e8ae mov dword ptr [0x12d4e6d4], eax */
  w32((uint32_t)(0x12d4e6d4), (EAX));
  /* 12d3e8b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3e8b5 push 0x12d3e900 */
  push32((uint32_t)(0x12d3e900u));
  /* 12d3e8ba call dword ptr [0x12d50328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50328))), 0x12d3e8c0u);
  /* 12d3e8c0 mov ecx, dword ptr [0x12d4e6e4] */
  ECX = (r32((uint32_t)(0x12d4e6e4)));
  /* 12d3e8c6 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 12d3e8cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d3e8ce je 0x12d3e8ec */
  if (C.zf) goto L_12d3e8ec;
  /* 12d3e8d0 mov edx, dword ptr [0x12d4e6e4] */
  EDX = (r32((uint32_t)(0x12d4e6e4)));
  /* 12d3e8d6 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 12d3e8dc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d3e8de je 0x12d3e8ec */
  if (C.zf) goto L_12d3e8ec;
  /* 12d3e8e0 mov eax, dword ptr [0x12d4e6e4] */
  EAX = (r32((uint32_t)(0x12d4e6e4)));
  /* 12d3e8e5 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 12d3e8e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3e8ea jne 0x12d3e8f6 */
  if (!C.zf) goto L_12d3e8f6;
L_12d3e8ec:;
  /* 12d3e8ec mov dword ptr [0x12d4e6e4], 0 */
  w32((uint32_t)(0x12d4e6e4), (0x0u));
L_12d3e8f6:;
  /* 12d3e8f6 mov esp, ebp */
  ESP = (EBP);
  /* 12d3e8f8 pop ebp */
  EBP = (pop32());
  /* 12d3e8f9 ret  */
  ESPCHK(0x12d3e840u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e900 @ 0x12d3e900 (804 bytes, 220 insns) */
void f_12d3e900(void) {
  FTRACE(0x12d3e900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3e900 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3e901 mov ebp, esp */
  EBP = (ESP);
  /* 12d3e903 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3e906 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3e909 push eax */
  push32((uint32_t)(EAX));
  /* 12d3e90a call 0x12d3f260 */
  push32(0x12d3e90fu); f_12d3f260();
  /* 12d3e90f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e912 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12d3e915 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12d3e917 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12d3e91a push ecx */
  push32((uint32_t)(ECX));
  /* 12d3e91b mov edx, dword ptr [0x12d4e6d0] */
  EDX = (r32((uint32_t)(0x12d4e6d0)));
  /* 12d3e921 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d3e923 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3e925 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 12d3e92b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e931 push edx */
  push32((uint32_t)(EDX));
  /* 12d3e932 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d3e935 push eax */
  push32((uint32_t)(EAX));
  /* 12d3e936 call dword ptr [0x12d4e6ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d4e6ec))), 0x12d3e93cu);
  /* 12d3e93c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3e93e jne 0x12d3e954 */
  if (!C.zf) goto L_12d3e954;
  /* 12d3e940 mov dword ptr [0x12d4e6e4], 0 */
  w32((uint32_t)(0x12d4e6e4), (0x0u));
  /* 12d3e94a mov eax, 1 */
  EAX = (0x1u);
  /* 12d3e94f jmp 0x12d3ec1e */
  goto L_12d3ec1e;
L_12d3e954:;
  /* 12d3e954 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12d3e957 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3e958 mov edx, dword ptr [0x12d4e6e0] */
  EDX = (r32((uint32_t)(0x12d4e6e0)));
  /* 12d3e95e push edx */
  push32((uint32_t)(EDX));
  /* 12d3e95f call 0x12d40ea0 */
  push32(0x12d3e964u); f_12d40ea0();
  /* 12d3e964 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e967 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3e969 jne 0x12d3ea8f */
  if (!C.zf) goto L_12d3ea8f;
  /* 12d3e96f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12d3e971 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12d3e974 push eax */
  push32((uint32_t)(EAX));
  /* 12d3e975 mov ecx, dword ptr [0x12d4e6d8] */
  ECX = (r32((uint32_t)(0x12d4e6d8)));
  /* 12d3e97b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d3e97d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3e97f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 12d3e985 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e98b push ecx */
  push32((uint32_t)(ECX));
  /* 12d3e98c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d3e98f push edx */
  push32((uint32_t)(EDX));
  /* 12d3e990 call dword ptr [0x12d4e6ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d4e6ec))), 0x12d3e996u);
  /* 12d3e996 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3e998 jne 0x12d3e9ae */
  if (!C.zf) goto L_12d3e9ae;
  /* 12d3e99a mov dword ptr [0x12d4e6e4], 0 */
  w32((uint32_t)(0x12d4e6e4), (0x0u));
  /* 12d3e9a4 mov eax, 1 */
  EAX = (0x1u);
  /* 12d3e9a9 jmp 0x12d3ec1e */
  goto L_12d3ec1e;
L_12d3e9ae:;
  /* 12d3e9ae lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12d3e9b1 push eax */
  push32((uint32_t)(EAX));
  /* 12d3e9b2 mov ecx, dword ptr [0x12d4e6dc] */
  ECX = (r32((uint32_t)(0x12d4e6dc)));
  /* 12d3e9b8 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3e9b9 call 0x12d40ea0 */
  push32(0x12d3e9beu); f_12d40ea0();
  /* 12d3e9be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3e9c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3e9c3 jne 0x12d3e9f0 */
  if (!C.zf) goto L_12d3e9f0;
  /* 12d3e9c5 mov edx, dword ptr [0x12d4e6e4] */
  EDX = (r32((uint32_t)(0x12d4e6e4)));
  /* 12d3e9cb or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 12d3e9d1 mov dword ptr [0x12d4e6e4], edx */
  w32((uint32_t)(0x12d4e6e4), (EDX));
  /* 12d3e9d7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d3e9da mov dword ptr [0x12d4e6e8], eax */
  w32((uint32_t)(0x12d4e6e8), (EAX));
  /* 12d3e9df mov ecx, dword ptr [0x12d4e6e8] */
  ECX = (r32((uint32_t)(0x12d4e6e8)));
  /* 12d3e9e5 mov dword ptr [0x12d4e6cc], ecx */
  w32((uint32_t)(0x12d4e6cc), (ECX));
  /* 12d3e9eb jmp 0x12d3ea8f */
  goto L_12d3ea8f;
L_12d3e9f0:;
  /* 12d3e9f0 mov edx, dword ptr [0x12d4e6e4] */
  EDX = (r32((uint32_t)(0x12d4e6e4)));
  /* 12d3e9f6 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12d3e9f9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d3e9fb jne 0x12d3ea8f */
  if (!C.zf) goto L_12d3ea8f;
  /* 12d3ea01 cmp dword ptr [0x12d4e6d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e6d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3ea08 je 0x12d3ea5d */
  if (C.zf) goto L_12d3ea5d;
  /* 12d3ea0a mov eax, dword ptr [0x12d4e6d4] */
  EAX = (r32((uint32_t)(0x12d4e6d4)));
  /* 12d3ea0f push eax */
  push32((uint32_t)(EAX));
  /* 12d3ea10 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12d3ea13 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3ea14 mov edx, dword ptr [0x12d4e6dc] */
  EDX = (r32((uint32_t)(0x12d4e6dc)));
  /* 12d3ea1a push edx */
  push32((uint32_t)(EDX));
  /* 12d3ea1b call 0x12d40f70 */
  push32(0x12d3ea20u); f_12d40f70();
  /* 12d3ea20 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3ea23 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3ea25 jne 0x12d3ea5d */
  if (!C.zf) goto L_12d3ea5d;
  /* 12d3ea27 mov eax, dword ptr [0x12d4e6e4] */
  EAX = (r32((uint32_t)(0x12d4e6e4)));
  /* 12d3ea2c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 12d3ea2e mov dword ptr [0x12d4e6e4], eax */
  w32((uint32_t)(0x12d4e6e4), (EAX));
  /* 12d3ea33 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d3ea36 mov dword ptr [0x12d4e6e8], ecx */
  w32((uint32_t)(0x12d4e6e8), (ECX));
  /* 12d3ea3c mov edx, dword ptr [0x12d4e6dc] */
  EDX = (r32((uint32_t)(0x12d4e6dc)));
  /* 12d3ea42 push edx */
  push32((uint32_t)(EDX));
  /* 12d3ea43 call 0x12d35600 */
  push32(0x12d3ea48u); f_12d35600();
  /* 12d3ea48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3ea4b cmp eax, dword ptr [0x12d4e6d4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d4e6d4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3ea51 jne 0x12d3ea5b */
  if (!C.zf) goto L_12d3ea5b;
  /* 12d3ea53 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d3ea56 mov dword ptr [0x12d4e6cc], eax */
  w32((uint32_t)(0x12d4e6cc), (EAX));
L_12d3ea5b:;
  /* 12d3ea5b jmp 0x12d3ea8f */
  goto L_12d3ea8f;
L_12d3ea5d:;
  /* 12d3ea5d mov ecx, dword ptr [0x12d4e6e4] */
  ECX = (r32((uint32_t)(0x12d4e6e4)));
  /* 12d3ea63 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12d3ea66 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d3ea68 jne 0x12d3ea8f */
  if (!C.zf) goto L_12d3ea8f;
  /* 12d3ea6a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d3ea6d push edx */
  push32((uint32_t)(EDX));
  /* 12d3ea6e call 0x12d3efa0 */
  push32(0x12d3ea73u); f_12d3efa0();
  /* 12d3ea73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3ea76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3ea78 je 0x12d3ea8f */
  if (C.zf) goto L_12d3ea8f;
  /* 12d3ea7a mov eax, dword ptr [0x12d4e6e4] */
  EAX = (r32((uint32_t)(0x12d4e6e4)));
  /* 12d3ea7f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 12d3ea81 mov dword ptr [0x12d4e6e4], eax */
  w32((uint32_t)(0x12d4e6e4), (EAX));
  /* 12d3ea86 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d3ea89 mov dword ptr [0x12d4e6e8], ecx */
  w32((uint32_t)(0x12d4e6e8), (ECX));
L_12d3ea8f:;
  /* 12d3ea8f mov edx, dword ptr [0x12d4e6e4] */
  EDX = (r32((uint32_t)(0x12d4e6e4)));
  /* 12d3ea95 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 12d3ea9b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3eaa1 je 0x12d3ec11 */
  if (C.zf) goto L_12d3ec11;
  /* 12d3eaa7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12d3eaa9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12d3eaac push eax */
  push32((uint32_t)(EAX));
  /* 12d3eaad mov ecx, dword ptr [0x12d4e6d8] */
  ECX = (r32((uint32_t)(0x12d4e6d8)));
  /* 12d3eab3 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d3eab5 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3eab7 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 12d3eabd add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3eac3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3eac4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d3eac7 push edx */
  push32((uint32_t)(EDX));
  /* 12d3eac8 call dword ptr [0x12d4e6ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d4e6ec))), 0x12d3eaceu);
  /* 12d3eace test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3ead0 jne 0x12d3eae6 */
  if (!C.zf) goto L_12d3eae6;
  /* 12d3ead2 mov dword ptr [0x12d4e6e4], 0 */
  w32((uint32_t)(0x12d4e6e4), (0x0u));
  /* 12d3eadc mov eax, 1 */
  EAX = (0x1u);
  /* 12d3eae1 jmp 0x12d3ec1e */
  goto L_12d3ec1e;
L_12d3eae6:;
  /* 12d3eae6 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12d3eae9 push eax */
  push32((uint32_t)(EAX));
  /* 12d3eaea mov ecx, dword ptr [0x12d4e6dc] */
  ECX = (r32((uint32_t)(0x12d4e6dc)));
  /* 12d3eaf0 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3eaf1 call 0x12d40ea0 */
  push32(0x12d3eaf6u); f_12d40ea0();
  /* 12d3eaf6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3eaf9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3eafb jne 0x12d3ebb0 */
  if (!C.zf) goto L_12d3ebb0;
  /* 12d3eb01 mov edx, dword ptr [0x12d4e6e4] */
  EDX = (r32((uint32_t)(0x12d4e6e4)));
  /* 12d3eb07 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12d3eb0a mov dword ptr [0x12d4e6e4], edx */
  w32((uint32_t)(0x12d4e6e4), (EDX));
  /* 12d3eb10 cmp dword ptr [0x12d4e6d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e6d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3eb17 je 0x12d3eb3a */
  if (C.zf) goto L_12d3eb3a;
  /* 12d3eb19 mov eax, dword ptr [0x12d4e6e4] */
  EAX = (r32((uint32_t)(0x12d4e6e4)));
  /* 12d3eb1e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12d3eb21 mov dword ptr [0x12d4e6e4], eax */
  w32((uint32_t)(0x12d4e6e4), (EAX));
  /* 12d3eb26 cmp dword ptr [0x12d4e6cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e6cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3eb2d jne 0x12d3eb38 */
  if (!C.zf) goto L_12d3eb38;
  /* 12d3eb2f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d3eb32 mov dword ptr [0x12d4e6cc], ecx */
  w32((uint32_t)(0x12d4e6cc), (ECX));
L_12d3eb38:;
  /* 12d3eb38 jmp 0x12d3ebae */
  goto L_12d3ebae;
L_12d3eb3a:;
  /* 12d3eb3a cmp dword ptr [0x12d4e6d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e6d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3eb41 je 0x12d3eb8f */
  if (C.zf) goto L_12d3eb8f;
  /* 12d3eb43 mov edx, dword ptr [0x12d4e6dc] */
  EDX = (r32((uint32_t)(0x12d4e6dc)));
  /* 12d3eb49 push edx */
  push32((uint32_t)(EDX));
  /* 12d3eb4a call 0x12d35600 */
  push32(0x12d3eb4fu); f_12d35600();
  /* 12d3eb4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3eb52 cmp eax, dword ptr [0x12d4e6d4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d4e6d4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3eb58 jne 0x12d3eb8f */
  if (!C.zf) goto L_12d3eb8f;
  /* 12d3eb5a push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3eb5c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d3eb5f push eax */
  push32((uint32_t)(EAX));
  /* 12d3eb60 call 0x12d3eff0 */
  push32(0x12d3eb65u); f_12d3eff0();
  /* 12d3eb65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3eb68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3eb6a je 0x12d3eb8d */
  if (C.zf) goto L_12d3eb8d;
  /* 12d3eb6c mov ecx, dword ptr [0x12d4e6e4] */
  ECX = (r32((uint32_t)(0x12d4e6e4)));
  /* 12d3eb72 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12d3eb75 mov dword ptr [0x12d4e6e4], ecx */
  w32((uint32_t)(0x12d4e6e4), (ECX));
  /* 12d3eb7b cmp dword ptr [0x12d4e6cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e6cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3eb82 jne 0x12d3eb8d */
  if (!C.zf) goto L_12d3eb8d;
  /* 12d3eb84 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d3eb87 mov dword ptr [0x12d4e6cc], edx */
  w32((uint32_t)(0x12d4e6cc), (EDX));
L_12d3eb8d:;
  /* 12d3eb8d jmp 0x12d3ebae */
  goto L_12d3ebae;
L_12d3eb8f:;
  /* 12d3eb8f mov eax, dword ptr [0x12d4e6e4] */
  EAX = (r32((uint32_t)(0x12d4e6e4)));
  /* 12d3eb94 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12d3eb97 mov dword ptr [0x12d4e6e4], eax */
  w32((uint32_t)(0x12d4e6e4), (EAX));
  /* 12d3eb9c cmp dword ptr [0x12d4e6cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e6cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3eba3 jne 0x12d3ebae */
  if (!C.zf) goto L_12d3ebae;
  /* 12d3eba5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d3eba8 mov dword ptr [0x12d4e6cc], ecx */
  w32((uint32_t)(0x12d4e6cc), (ECX));
L_12d3ebae:;
  /* 12d3ebae jmp 0x12d3ec11 */
  goto L_12d3ec11;
L_12d3ebb0:;
  /* 12d3ebb0 cmp dword ptr [0x12d4e6d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e6d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3ebb7 jne 0x12d3ec11 */
  if (!C.zf) goto L_12d3ec11;
  /* 12d3ebb9 cmp dword ptr [0x12d4e6d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e6d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3ebc0 je 0x12d3ec11 */
  if (C.zf) goto L_12d3ec11;
  /* 12d3ebc2 mov edx, dword ptr [0x12d4e6d4] */
  EDX = (r32((uint32_t)(0x12d4e6d4)));
  /* 12d3ebc8 push edx */
  push32((uint32_t)(EDX));
  /* 12d3ebc9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12d3ebcc push eax */
  push32((uint32_t)(EAX));
  /* 12d3ebcd mov ecx, dword ptr [0x12d4e6dc] */
  ECX = (r32((uint32_t)(0x12d4e6dc)));
  /* 12d3ebd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3ebd4 call 0x12d40f70 */
  push32(0x12d3ebd9u); f_12d40f70();
  /* 12d3ebd9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3ebdc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3ebde jne 0x12d3ec11 */
  if (!C.zf) goto L_12d3ec11;
  /* 12d3ebe0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3ebe2 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d3ebe5 push edx */
  push32((uint32_t)(EDX));
  /* 12d3ebe6 call 0x12d3eff0 */
  push32(0x12d3ebebu); f_12d3eff0();
  /* 12d3ebeb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3ebee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3ebf0 je 0x12d3ec11 */
  if (C.zf) goto L_12d3ec11;
  /* 12d3ebf2 mov eax, dword ptr [0x12d4e6e4] */
  EAX = (r32((uint32_t)(0x12d4e6e4)));
  /* 12d3ebf7 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12d3ebfa mov dword ptr [0x12d4e6e4], eax */
  w32((uint32_t)(0x12d4e6e4), (EAX));
  /* 12d3ebff cmp dword ptr [0x12d4e6cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e6cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3ec06 jne 0x12d3ec11 */
  if (!C.zf) goto L_12d3ec11;
  /* 12d3ec08 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d3ec0b mov dword ptr [0x12d4e6cc], ecx */
  w32((uint32_t)(0x12d4e6cc), (ECX));
L_12d3ec11:;
  /* 12d3ec11 mov eax, dword ptr [0x12d4e6e4] */
  EAX = (r32((uint32_t)(0x12d4e6e4)));
  /* 12d3ec16 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12d3ec19 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d3ec1b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3ec1d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12d3ec1e:;
  /* 12d3ec1e mov esp, ebp */
  ESP = (EBP);
  /* 12d3ec20 pop ebp */
  EBP = (pop32());
  /* 12d3ec21 ret 4 */
  ESPCHK(0x12d3e900u, _esp0);
  ESP += 8; return;
}

/* FUN_1000ec30 @ 0x12d3ec30 (116 bytes, 33 insns) */
void f_12d3ec30(void) {
  FTRACE(0x12d3ec30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3ec30 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3ec31 mov ebp, esp */
  EBP = (ESP);
  /* 12d3ec33 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3ec34 mov eax, dword ptr [0x12d4e6dc] */
  EAX = (r32((uint32_t)(0x12d4e6dc)));
  /* 12d3ec39 push eax */
  push32((uint32_t)(EAX));
  /* 12d3ec3a call 0x12d35600 */
  push32(0x12d3ec3fu); f_12d35600();
  /* 12d3ec3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3ec42 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3ec44 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3ec47 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12d3ec4a mov dword ptr [0x12d4e6d8], ecx */
  w32((uint32_t)(0x12d4e6d8), (ECX));
  /* 12d3ec50 cmp dword ptr [0x12d4e6d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e6d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3ec57 je 0x12d3ec62 */
  if (C.zf) goto L_12d3ec62;
  /* 12d3ec59 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12d3ec60 jmp 0x12d3ec74 */
  goto L_12d3ec74;
L_12d3ec62:;
  /* 12d3ec62 mov edx, dword ptr [0x12d4e6dc] */
  EDX = (r32((uint32_t)(0x12d4e6dc)));
  /* 12d3ec68 push edx */
  push32((uint32_t)(EDX));
  /* 12d3ec69 call 0x12d3f2e0 */
  push32(0x12d3ec6eu); f_12d3f2e0();
  /* 12d3ec6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3ec71 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d3ec74:;
  /* 12d3ec74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3ec77 mov dword ptr [0x12d4e6d4], eax */
  w32((uint32_t)(0x12d4e6d4), (EAX));
  /* 12d3ec7c push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3ec7e push 0x12d3ecb0 */
  push32((uint32_t)(0x12d3ecb0u));
  /* 12d3ec83 call dword ptr [0x12d50328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50328))), 0x12d3ec89u);
  /* 12d3ec89 mov ecx, dword ptr [0x12d4e6e4] */
  ECX = (r32((uint32_t)(0x12d4e6e4)));
  /* 12d3ec8f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12d3ec92 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d3ec94 jne 0x12d3eca0 */
  if (!C.zf) goto L_12d3eca0;
  /* 12d3ec96 mov dword ptr [0x12d4e6e4], 0 */
  w32((uint32_t)(0x12d4e6e4), (0x0u));
L_12d3eca0:;
  /* 12d3eca0 mov esp, ebp */
  ESP = (EBP);
  /* 12d3eca2 pop ebp */
  EBP = (pop32());
  /* 12d3eca3 ret  */
  ESPCHK(0x12d3ec30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ecb0 @ 0x12d3ecb0 (287 bytes, 86 insns) */
void f_12d3ecb0(void) {
  FTRACE(0x12d3ecb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3ecb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3ecb1 mov ebp, esp */
  EBP = (ESP);
  /* 12d3ecb3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3ecb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3ecb9 push eax */
  push32((uint32_t)(EAX));
  /* 12d3ecba call 0x12d3f260 */
  push32(0x12d3ecbfu); f_12d3f260();
  /* 12d3ecbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3ecc2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12d3ecc5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12d3ecc7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12d3ecca push ecx */
  push32((uint32_t)(ECX));
  /* 12d3eccb mov edx, dword ptr [0x12d4e6d8] */
  EDX = (r32((uint32_t)(0x12d4e6d8)));
  /* 12d3ecd1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d3ecd3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3ecd5 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 12d3ecdb add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3ece1 push edx */
  push32((uint32_t)(EDX));
  /* 12d3ece2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d3ece5 push eax */
  push32((uint32_t)(EAX));
  /* 12d3ece6 call dword ptr [0x12d4e6ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d4e6ec))), 0x12d3ececu);
  /* 12d3ecec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3ecee jne 0x12d3ed04 */
  if (!C.zf) goto L_12d3ed04;
  /* 12d3ecf0 mov dword ptr [0x12d4e6e4], 0 */
  w32((uint32_t)(0x12d4e6e4), (0x0u));
  /* 12d3ecfa mov eax, 1 */
  EAX = (0x1u);
  /* 12d3ecff jmp 0x12d3edc9 */
  goto L_12d3edc9;
L_12d3ed04:;
  /* 12d3ed04 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12d3ed07 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3ed08 mov edx, dword ptr [0x12d4e6dc] */
  EDX = (r32((uint32_t)(0x12d4e6dc)));
  /* 12d3ed0e push edx */
  push32((uint32_t)(EDX));
  /* 12d3ed0f call 0x12d40ea0 */
  push32(0x12d3ed14u); f_12d40ea0();
  /* 12d3ed14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3ed17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3ed19 jne 0x12d3ed59 */
  if (!C.zf) goto L_12d3ed59;
  /* 12d3ed1b cmp dword ptr [0x12d4e6d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e6d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3ed22 jne 0x12d3ed36 */
  if (!C.zf) goto L_12d3ed36;
  /* 12d3ed24 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3ed26 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d3ed29 push eax */
  push32((uint32_t)(EAX));
  /* 12d3ed2a call 0x12d3eff0 */
  push32(0x12d3ed2fu); f_12d3eff0();
  /* 12d3ed2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3ed32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3ed34 je 0x12d3ed57 */
  if (C.zf) goto L_12d3ed57;
L_12d3ed36:;
  /* 12d3ed36 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d3ed39 mov dword ptr [0x12d4e6e8], ecx */
  w32((uint32_t)(0x12d4e6e8), (ECX));
  /* 12d3ed3f mov edx, dword ptr [0x12d4e6e8] */
  EDX = (r32((uint32_t)(0x12d4e6e8)));
  /* 12d3ed45 mov dword ptr [0x12d4e6cc], edx */
  w32((uint32_t)(0x12d4e6cc), (EDX));
  /* 12d3ed4b mov eax, dword ptr [0x12d4e6e4] */
  EAX = (r32((uint32_t)(0x12d4e6e4)));
  /* 12d3ed50 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12d3ed52 mov dword ptr [0x12d4e6e4], eax */
  w32((uint32_t)(0x12d4e6e4), (EAX));
L_12d3ed57:;
  /* 12d3ed57 jmp 0x12d3edbc */
  goto L_12d3edbc;
L_12d3ed59:;
  /* 12d3ed59 cmp dword ptr [0x12d4e6d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e6d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3ed60 jne 0x12d3edbc */
  if (!C.zf) goto L_12d3edbc;
  /* 12d3ed62 cmp dword ptr [0x12d4e6d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d4e6d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3ed69 je 0x12d3edbc */
  if (C.zf) goto L_12d3edbc;
  /* 12d3ed6b mov ecx, dword ptr [0x12d4e6d4] */
  ECX = (r32((uint32_t)(0x12d4e6d4)));
  /* 12d3ed71 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3ed72 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 12d3ed75 push edx */
  push32((uint32_t)(EDX));
  /* 12d3ed76 mov eax, dword ptr [0x12d4e6dc] */
  EAX = (r32((uint32_t)(0x12d4e6dc)));
  /* 12d3ed7b push eax */
  push32((uint32_t)(EAX));
  /* 12d3ed7c call 0x12d40f70 */
  push32(0x12d3ed81u); f_12d40f70();
  /* 12d3ed81 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3ed84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3ed86 jne 0x12d3edbc */
  if (!C.zf) goto L_12d3edbc;
  /* 12d3ed88 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d3ed8a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d3ed8d push ecx */
  push32((uint32_t)(ECX));
  /* 12d3ed8e call 0x12d3eff0 */
  push32(0x12d3ed93u); f_12d3eff0();
  /* 12d3ed93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3ed96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3ed98 je 0x12d3edbc */
  if (C.zf) goto L_12d3edbc;
  /* 12d3ed9a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d3ed9d mov dword ptr [0x12d4e6e8], edx */
  w32((uint32_t)(0x12d4e6e8), (EDX));
  /* 12d3eda3 mov eax, dword ptr [0x12d4e6e8] */
  EAX = (r32((uint32_t)(0x12d4e6e8)));
  /* 12d3eda8 mov dword ptr [0x12d4e6cc], eax */
  w32((uint32_t)(0x12d4e6cc), (EAX));
  /* 12d3edad mov ecx, dword ptr [0x12d4e6e4] */
  ECX = (r32((uint32_t)(0x12d4e6e4)));
  /* 12d3edb3 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12d3edb6 mov dword ptr [0x12d4e6e4], ecx */
  w32((uint32_t)(0x12d4e6e4), (ECX));
L_12d3edbc:;
  /* 12d3edbc mov eax, dword ptr [0x12d4e6e4] */
  EAX = (r32((uint32_t)(0x12d4e6e4)));
  /* 12d3edc1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12d3edc4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d3edc6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3edc8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12d3edc9:;
  /* 12d3edc9 mov esp, ebp */
  ESP = (EBP);
  /* 12d3edcb pop ebp */
  EBP = (pop32());
  /* 12d3edcc ret 4 */
  ESPCHK(0x12d3ecb0u, _esp0);
  ESP += 8; return;
}

/* FUN_1000edd0 @ 0x12d3edd0 (69 bytes, 20 insns) */
void f_12d3edd0(void) {
  FTRACE(0x12d3edd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3edd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3edd1 mov ebp, esp */
  EBP = (ESP);
  /* 12d3edd3 mov eax, dword ptr [0x12d4e6e0] */
  EAX = (r32((uint32_t)(0x12d4e6e0)));
  /* 12d3edd8 push eax */
  push32((uint32_t)(EAX));
  /* 12d3edd9 call 0x12d35600 */
  push32(0x12d3eddeu); f_12d35600();
  /* 12d3edde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3ede1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3ede3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3ede6 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12d3ede9 mov dword ptr [0x12d4e6d0], ecx */
  w32((uint32_t)(0x12d4e6d0), (ECX));
  /* 12d3edef push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3edf1 push 0x12d3ee20 */
  push32((uint32_t)(0x12d3ee20u));
  /* 12d3edf6 call dword ptr [0x12d50328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50328))), 0x12d3edfcu);
  /* 12d3edfc mov edx, dword ptr [0x12d4e6e4] */
  EDX = (r32((uint32_t)(0x12d4e6e4)));
  /* 12d3ee02 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12d3ee05 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d3ee07 jne 0x12d3ee13 */
  if (!C.zf) goto L_12d3ee13;
  /* 12d3ee09 mov dword ptr [0x12d4e6e4], 0 */
  w32((uint32_t)(0x12d4e6e4), (0x0u));
L_12d3ee13:;
  /* 12d3ee13 pop ebp */
  EBP = (pop32());
  /* 12d3ee14 ret  */
  ESPCHK(0x12d3edd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ee20 @ 0x12d3ee20 (172 bytes, 54 insns) */
void f_12d3ee20(void) {
  FTRACE(0x12d3ee20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3ee20 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3ee21 mov ebp, esp */
  EBP = (ESP);
  /* 12d3ee23 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3ee26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3ee29 push eax */
  push32((uint32_t)(EAX));
  /* 12d3ee2a call 0x12d3f260 */
  push32(0x12d3ee2fu); f_12d3f260();
  /* 12d3ee2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3ee32 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12d3ee35 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12d3ee37 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12d3ee3a push ecx */
  push32((uint32_t)(ECX));
  /* 12d3ee3b mov edx, dword ptr [0x12d4e6d0] */
  EDX = (r32((uint32_t)(0x12d4e6d0)));
  /* 12d3ee41 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d3ee43 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3ee45 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 12d3ee4b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3ee51 push edx */
  push32((uint32_t)(EDX));
  /* 12d3ee52 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d3ee55 push eax */
  push32((uint32_t)(EAX));
  /* 12d3ee56 call dword ptr [0x12d4e6ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d4e6ec))), 0x12d3ee5cu);
  /* 12d3ee5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3ee5e jne 0x12d3ee71 */
  if (!C.zf) goto L_12d3ee71;
  /* 12d3ee60 mov dword ptr [0x12d4e6e4], 0 */
  w32((uint32_t)(0x12d4e6e4), (0x0u));
  /* 12d3ee6a mov eax, 1 */
  EAX = (0x1u);
  /* 12d3ee6f jmp 0x12d3eec6 */
  goto L_12d3eec6;
L_12d3ee71:;
  /* 12d3ee71 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12d3ee74 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3ee75 mov edx, dword ptr [0x12d4e6e0] */
  EDX = (r32((uint32_t)(0x12d4e6e0)));
  /* 12d3ee7b push edx */
  push32((uint32_t)(EDX));
  /* 12d3ee7c call 0x12d40ea0 */
  push32(0x12d3ee81u); f_12d40ea0();
  /* 12d3ee81 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3ee84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3ee86 jne 0x12d3eeb9 */
  if (!C.zf) goto L_12d3eeb9;
  /* 12d3ee88 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d3ee8b push eax */
  push32((uint32_t)(EAX));
  /* 12d3ee8c call 0x12d3efa0 */
  push32(0x12d3ee91u); f_12d3efa0();
  /* 12d3ee91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3ee94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3ee96 je 0x12d3eeb9 */
  if (C.zf) goto L_12d3eeb9;
  /* 12d3ee98 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d3ee9b mov dword ptr [0x12d4e6e8], ecx */
  w32((uint32_t)(0x12d4e6e8), (ECX));
  /* 12d3eea1 mov edx, dword ptr [0x12d4e6e8] */
  EDX = (r32((uint32_t)(0x12d4e6e8)));
  /* 12d3eea7 mov dword ptr [0x12d4e6cc], edx */
  w32((uint32_t)(0x12d4e6cc), (EDX));
  /* 12d3eead mov eax, dword ptr [0x12d4e6e4] */
  EAX = (r32((uint32_t)(0x12d4e6e4)));
  /* 12d3eeb2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12d3eeb4 mov dword ptr [0x12d4e6e4], eax */
  w32((uint32_t)(0x12d4e6e4), (EAX));
L_12d3eeb9:;
  /* 12d3eeb9 mov eax, dword ptr [0x12d4e6e4] */
  EAX = (r32((uint32_t)(0x12d4e6e4)));
  /* 12d3eebe and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12d3eec1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d3eec3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3eec5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12d3eec6:;
  /* 12d3eec6 mov esp, ebp */
  ESP = (EBP);
  /* 12d3eec8 pop ebp */
  EBP = (pop32());
  /* 12d3eec9 ret 4 */
  ESPCHK(0x12d3ee20u, _esp0);
  ESP += 8; return;
}

/* FUN_1000eed0 @ 0x12d3eed0 (43 bytes, 11 insns) */
void f_12d3eed0(void) {
  FTRACE(0x12d3eed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3eed0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3eed1 mov ebp, esp */
  EBP = (ESP);
  /* 12d3eed3 mov eax, dword ptr [0x12d4e6e4] */
  EAX = (r32((uint32_t)(0x12d4e6e4)));
  /* 12d3eed8 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 12d3eedd mov dword ptr [0x12d4e6e4], eax */
  w32((uint32_t)(0x12d4e6e4), (EAX));
  /* 12d3eee2 call dword ptr [0x12d5032c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d5032c))), 0x12d3eee8u);
  /* 12d3eee8 mov dword ptr [0x12d4e6e8], eax */
  w32((uint32_t)(0x12d4e6e8), (EAX));
  /* 12d3eeed mov ecx, dword ptr [0x12d4e6e8] */
  ECX = (r32((uint32_t)(0x12d4e6e8)));
  /* 12d3eef3 mov dword ptr [0x12d4e6cc], ecx */
  w32((uint32_t)(0x12d4e6cc), (ECX));
  /* 12d3eef9 pop ebp */
  EBP = (pop32());
  /* 12d3eefa ret  */
  ESPCHK(0x12d3eed0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef00 @ 0x12d3ef00 (155 bytes, 57 insns) */
void f_12d3ef00(void) {
  FTRACE(0x12d3ef00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3ef00 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3ef01 mov ebp, esp */
  EBP = (ESP);
  /* 12d3ef03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3ef06 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3ef0a je 0x12d3ef2b */
  if (C.zf) goto L_12d3ef2b;
  /* 12d3ef0c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3ef0f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d3ef12 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d3ef14 je 0x12d3ef2b */
  if (C.zf) goto L_12d3ef2b;
  /* 12d3ef16 push 0x12d4a6cc */
  push32((uint32_t)(0x12d4a6ccu));
  /* 12d3ef1b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3ef1e push edx */
  push32((uint32_t)(EDX));
  /* 12d3ef1f call 0x12d3e460 */
  push32(0x12d3ef24u); f_12d3e460();
  /* 12d3ef24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3ef27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3ef29 jne 0x12d3ef53 */
  if (!C.zf) goto L_12d3ef53;
L_12d3ef2b:;
  /* 12d3ef2b push 8 */
  push32((uint32_t)(0x8u));
  /* 12d3ef2d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12d3ef30 push eax */
  push32((uint32_t)(EAX));
  /* 12d3ef31 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 12d3ef36 mov ecx, dword ptr [0x12d4e6e8] */
  ECX = (r32((uint32_t)(0x12d4e6e8)));
  /* 12d3ef3c push ecx */
  push32((uint32_t)(ECX));
  /* 12d3ef3d call dword ptr [0x12d4e6ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d4e6ec))), 0x12d3ef43u);
  /* 12d3ef43 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3ef45 jne 0x12d3ef4b */
  if (!C.zf) goto L_12d3ef4b;
  /* 12d3ef47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3ef49 jmp 0x12d3ef97 */
  goto L_12d3ef97;
L_12d3ef4b:;
  /* 12d3ef4b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 12d3ef4e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12d3ef51 jmp 0x12d3ef8b */
  goto L_12d3ef8b;
L_12d3ef53:;
  /* 12d3ef53 push 0x12d4a6c8 */
  push32((uint32_t)(0x12d4a6c8u));
  /* 12d3ef58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3ef5b push eax */
  push32((uint32_t)(EAX));
  /* 12d3ef5c call 0x12d3e460 */
  push32(0x12d3ef61u); f_12d3e460();
  /* 12d3ef61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3ef64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3ef66 jne 0x12d3ef8b */
  if (!C.zf) goto L_12d3ef8b;
  /* 12d3ef68 push 8 */
  push32((uint32_t)(0x8u));
  /* 12d3ef6a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12d3ef6d push ecx */
  push32((uint32_t)(ECX));
  /* 12d3ef6e push 0xb */
  push32((uint32_t)(0xbu));
  /* 12d3ef70 mov edx, dword ptr [0x12d4e6e8] */
  EDX = (r32((uint32_t)(0x12d4e6e8)));
  /* 12d3ef76 push edx */
  push32((uint32_t)(EDX));
  /* 12d3ef77 call dword ptr [0x12d4e6ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d4e6ec))), 0x12d3ef7du);
  /* 12d3ef7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3ef7f jne 0x12d3ef85 */
  if (!C.zf) goto L_12d3ef85;
  /* 12d3ef81 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3ef83 jmp 0x12d3ef97 */
  goto L_12d3ef97;
L_12d3ef85:;
  /* 12d3ef85 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12d3ef88 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12d3ef8b:;
  /* 12d3ef8b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3ef8e push ecx */
  push32((uint32_t)(ECX));
  /* 12d3ef8f call 0x12d41080 */
  push32(0x12d3ef94u); f_12d41080();
  /* 12d3ef94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d3ef97:;
  /* 12d3ef97 mov esp, ebp */
  ESP = (EBP);
  /* 12d3ef99 pop ebp */
  EBP = (pop32());
  /* 12d3ef9a ret  */
  ESPCHK(0x12d3ef00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000efa0 @ 0x12d3efa0 (79 bytes, 26 insns) */
void f_12d3efa0(void) {
  FTRACE(0x12d3efa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3efa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3efa1 mov ebp, esp */
  EBP = (ESP);
  /* 12d3efa3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3efa6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 12d3efaa mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 12d3efae mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d3efb5 jmp 0x12d3efc0 */
  goto L_12d3efc0;
L_12d3efb7:;
  /* 12d3efb7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3efba add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3efbd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12d3efc0:;
  /* 12d3efc0 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3efc4 jae 0x12d3efe6 */
  if (!C.cf) goto L_12d3efe6;
  /* 12d3efc6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3efc9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d3efcf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3efd2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d3efd4 mov cx, word ptr [eax*2 + 0x12d4d9e4] */
  CX = (r16((uint32_t)(EAX*2 + 0x12d4d9e4)));
  /* 12d3efdc cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3efde jne 0x12d3efe4 */
  if (!C.zf) goto L_12d3efe4;
  /* 12d3efe0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3efe2 jmp 0x12d3efeb */
  goto L_12d3efeb;
L_12d3efe4:;
  /* 12d3efe4 jmp 0x12d3efb7 */
  goto L_12d3efb7;
L_12d3efe6:;
  /* 12d3efe6 mov eax, 1 */
  EAX = (0x1u);
L_12d3efeb:;
  /* 12d3efeb mov esp, ebp */
  ESP = (EBP);
  /* 12d3efed pop ebp */
  EBP = (pop32());
  /* 12d3efee ret  */
  ESPCHK(0x12d3efa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eff0 @ 0x12d3eff0 (135 bytes, 48 insns) */
void f_12d3eff0(void) {
  FTRACE(0x12d3eff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3eff0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3eff1 mov ebp, esp */
  EBP = (ESP);
  /* 12d3eff3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3eff6 push esi */
  push32((uint32_t)(ESI));
  /* 12d3eff7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3effa and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d3efff and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d3f004 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d3f009 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 12d3f00c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d3f011 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d3f014 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12d3f016 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 12d3f019 push ecx */
  push32((uint32_t)(ECX));
  /* 12d3f01a push 1 */
  push32((uint32_t)(0x1u));
  /* 12d3f01c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3f01f push edx */
  push32((uint32_t)(EDX));
  /* 12d3f020 call dword ptr [0x12d4e6ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d4e6ec))), 0x12d3f026u);
  /* 12d3f026 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3f028 jne 0x12d3f02e */
  if (!C.zf) goto L_12d3f02e;
  /* 12d3f02a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3f02c jmp 0x12d3f072 */
  goto L_12d3f072;
L_12d3f02e:;
  /* 12d3f02e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 12d3f031 push eax */
  push32((uint32_t)(EAX));
  /* 12d3f032 call 0x12d3f260 */
  push32(0x12d3f037u); f_12d3f260();
  /* 12d3f037 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f03a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3f03d je 0x12d3f06d */
  if (C.zf) goto L_12d3f06d;
  /* 12d3f03f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3f043 je 0x12d3f06d */
  if (C.zf) goto L_12d3f06d;
  /* 12d3f045 mov ecx, dword ptr [0x12d4e6dc] */
  ECX = (r32((uint32_t)(0x12d4e6dc)));
  /* 12d3f04b push ecx */
  push32((uint32_t)(ECX));
  /* 12d3f04c call 0x12d3f2e0 */
  push32(0x12d3f051u); f_12d3f2e0();
  /* 12d3f051 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f054 mov esi, eax */
  ESI = (EAX);
  /* 12d3f056 mov edx, dword ptr [0x12d4e6dc] */
  EDX = (r32((uint32_t)(0x12d4e6dc)));
  /* 12d3f05c push edx */
  push32((uint32_t)(EDX));
  /* 12d3f05d call 0x12d35600 */
  push32(0x12d3f062u); f_12d35600();
  /* 12d3f062 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f065 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3f067 jne 0x12d3f06d */
  if (!C.zf) goto L_12d3f06d;
  /* 12d3f069 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d3f06b jmp 0x12d3f072 */
  goto L_12d3f072;
L_12d3f06d:;
  /* 12d3f06d mov eax, 1 */
  EAX = (0x1u);
L_12d3f072:;
  /* 12d3f072 pop esi */
  ESI = (pop32());
  /* 12d3f073 mov esp, ebp */
  ESP = (EBP);
  /* 12d3f075 pop ebp */
  EBP = (pop32());
  /* 12d3f076 ret  */
  ESPCHK(0x12d3eff0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f080 @ 0x12d3f080 (77 bytes, 18 insns) */
void f_12d3f080(void) {
  FTRACE(0x12d3f080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3f080 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3f081 mov ebp, esp */
  EBP = (ESP);
  /* 12d3f083 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3f089 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 12d3f093 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 12d3f099 push eax */
  push32((uint32_t)(EAX));
  /* 12d3f09a call dword ptr [0x12d502ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d502ac))), 0x12d3f0a0u);
  /* 12d3f0a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d3f0a2 je 0x12d3f0b9 */
  if (C.zf) goto L_12d3f0b9;
  /* 12d3f0a4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3f0ab jne 0x12d3f0b9 */
  if (!C.zf) goto L_12d3f0b9;
  /* 12d3f0ad mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 12d3f0b7 jmp 0x12d3f0c3 */
  goto L_12d3f0c3;
L_12d3f0b9:;
  /* 12d3f0b9 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_12d3f0c3:;
  /* 12d3f0c3 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12d3f0c9 mov esp, ebp */
  ESP = (EBP);
  /* 12d3f0cb pop ebp */
  EBP = (pop32());
  /* 12d3f0cc ret  */
  ESPCHK(0x12d3f080u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x12d3f0d0 (388 bytes, 118 insns) */
void f_12d3f0d0(void) {
  FTRACE(0x12d3f0d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3f0d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3f0d1 mov ebp, esp */
  EBP = (ESP);
  /* 12d3f0d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3f0d6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12d3f0dd mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 12d3f0e4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12d3f0eb:;
  /* 12d3f0eb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3f0ee cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3f0f1 jg 0x12d3f238 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d3f238;
  /* 12d3f0f7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d3f0fa add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f0fd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d3f0fe sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3f100 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12d3f102 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d3f105 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3f108 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d3f10b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3f10e cmp edx, dword ptr [ecx + 0x12d4d540] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x12d4d540))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3f114 jne 0x12d3f20e */
  if (!C.zf) goto L_12d3f20e;
  /* 12d3f11a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3f11d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12d3f120 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3f124 ja 0x12d3f147 */
  if ((!C.cf&&!C.zf)) goto L_12d3f147;
  /* 12d3f126 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3f12a je 0x12d3f1b9 */
  if (C.zf) goto L_12d3f1b9;
  /* 12d3f130 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3f134 je 0x12d3f164 */
  if (C.zf) goto L_12d3f164;
  /* 12d3f136 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3f13a je 0x12d3f186 */
  if (C.zf) goto L_12d3f186;
  /* 12d3f13c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3f140 je 0x12d3f1a8 */
  if (C.zf) goto L_12d3f1a8;
  /* 12d3f142 jmp 0x12d3f1d8 */
  goto L_12d3f1d8;
L_12d3f147:;
  /* 12d3f147 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3f14e je 0x12d3f175 */
  if (C.zf) goto L_12d3f175;
  /* 12d3f150 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3f157 je 0x12d3f197 */
  if (C.zf) goto L_12d3f197;
  /* 12d3f159 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3f160 je 0x12d3f1ca */
  if (C.zf) goto L_12d3f1ca;
  /* 12d3f162 jmp 0x12d3f1d8 */
  goto L_12d3f1d8;
L_12d3f164:;
  /* 12d3f164 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3f167 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d3f16a add ecx, 0x12d4d544 */
  { uint32_t _a=(ECX),_b=(0x12d4d544u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f170 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d3f173 jmp 0x12d3f1d8 */
  goto L_12d3f1d8;
L_12d3f175:;
  /* 12d3f175 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3f178 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d3f17b mov eax, dword ptr [edx + 0x12d4d54c] */
  EAX = (r32((uint32_t)(EDX + 0x12d4d54c)));
  /* 12d3f181 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d3f184 jmp 0x12d3f1d8 */
  goto L_12d3f1d8;
L_12d3f186:;
  /* 12d3f186 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3f189 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d3f18c add ecx, 0x12d4d550 */
  { uint32_t _a=(ECX),_b=(0x12d4d550u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f192 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d3f195 jmp 0x12d3f1d8 */
  goto L_12d3f1d8;
L_12d3f197:;
  /* 12d3f197 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3f19a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d3f19d mov eax, dword ptr [edx + 0x12d4d554] */
  EAX = (r32((uint32_t)(EDX + 0x12d4d554)));
  /* 12d3f1a3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d3f1a6 jmp 0x12d3f1d8 */
  goto L_12d3f1d8;
L_12d3f1a8:;
  /* 12d3f1a8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3f1ab imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d3f1ae add ecx, 0x12d4d558 */
  { uint32_t _a=(ECX),_b=(0x12d4d558u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f1b4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d3f1b7 jmp 0x12d3f1d8 */
  goto L_12d3f1d8;
L_12d3f1b9:;
  /* 12d3f1b9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3f1bc imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d3f1bf add edx, 0x12d4d55c */
  { uint32_t _a=(EDX),_b=(0x12d4d55cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f1c5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12d3f1c8 jmp 0x12d3f1d8 */
  goto L_12d3f1d8;
L_12d3f1ca:;
  /* 12d3f1ca mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3f1cd imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d3f1d0 add eax, 0x12d4d564 */
  { uint32_t _a=(EAX),_b=(0x12d4d564u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f1d5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12d3f1d8:;
  /* 12d3f1d8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3f1dc je 0x12d3f1e4 */
  if (C.zf) goto L_12d3f1e4;
  /* 12d3f1de cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3f1e2 jge 0x12d3f1e6 */
  if ((C.sf==C.of)) goto L_12d3f1e6;
L_12d3f1e4:;
  /* 12d3f1e4 jmp 0x12d3f238 */
  goto L_12d3f238;
L_12d3f1e6:;
  /* 12d3f1e6 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d3f1e9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3f1ec push ecx */
  push32((uint32_t)(ECX));
  /* 12d3f1ed mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d3f1f0 push edx */
  push32((uint32_t)(EDX));
  /* 12d3f1f1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3f1f4 push eax */
  push32((uint32_t)(EAX));
  /* 12d3f1f5 call 0x12d35ff0 */
  push32(0x12d3f1fau); f_12d35ff0();
  /* 12d3f1fa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f1fd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3f200 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f203 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 12d3f207 mov eax, 1 */
  EAX = (0x1u);
  /* 12d3f20c jmp 0x12d3f24e */
  goto L_12d3f24e;
L_12d3f20e:;
  /* 12d3f20e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3f211 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d3f214 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3f217 cmp eax, dword ptr [edx + 0x12d4d540] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x12d4d540))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3f21d jae 0x12d3f22a */
  if (!C.cf) goto L_12d3f22a;
  /* 12d3f21f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3f222 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3f225 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d3f228 jmp 0x12d3f233 */
  goto L_12d3f233;
L_12d3f22a:;
  /* 12d3f22a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d3f22d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f230 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12d3f233:;
  /* 12d3f233 jmp 0x12d3f0eb */
  goto L_12d3f0eb;
L_12d3f238:;
  /* 12d3f238 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d3f23b push eax */
  push32((uint32_t)(EAX));
  /* 12d3f23c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d3f23f push ecx */
  push32((uint32_t)(ECX));
  /* 12d3f240 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d3f243 push edx */
  push32((uint32_t)(EDX));
  /* 12d3f244 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3f247 push eax */
  push32((uint32_t)(EAX));
  /* 12d3f248 call dword ptr [0x12d50324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d50324))), 0x12d3f24eu);
L_12d3f24e:;
  /* 12d3f24e mov esp, ebp */
  ESP = (EBP);
  /* 12d3f250 pop ebp */
  EBP = (pop32());
  /* 12d3f251 ret 0x10 */
  ESPCHK(0x12d3f0d0u, _esp0);
  ESP += 20; return;
}

/* FUN_1000f260 @ 0x12d3f260 (118 bytes, 42 insns) */
void f_12d3f260(void) {
  FTRACE(0x12d3f260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d3f260 push ebp */
  push32((uint32_t)(EBP));
  /* 12d3f261 mov ebp, esp */
  EBP = (ESP);
  /* 12d3f263 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d3f266 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12d3f26d:;
  /* 12d3f26d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3f270 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d3f272 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12d3f275 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12d3f279 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d3f27c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d3f27f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d3f282 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d3f284 je 0x12d3f2cf */
  if (C.zf) goto L_12d3f2cf;
  /* 12d3f286 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12d3f28a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3f28d jl 0x12d3f2a2 */
  if ((C.sf!=C.of)) goto L_12d3f2a2;
  /* 12d3f28f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12d3f293 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3f296 jg 0x12d3f2a2 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d3f2a2;
  /* 12d3f298 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12d3f29b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d3f29d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 12d3f2a0 jmp 0x12d3f2bc */
  goto L_12d3f2bc;
L_12d3f2a2:;
  /* 12d3f2a2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12d3f2a6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3f2a9 jl 0x12d3f2bc */
  if ((C.sf!=C.of)) goto L_12d3f2bc;
  /* 12d3f2ab movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12d3f2af cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d3f2b2 jg 0x12d3f2bc */
  if ((!C.zf&&C.sf==C.of)) goto L_12d3f2bc;
  /* 12d3f2b4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12d3f2b7 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d3f2b9 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_12d3f2bc:;
  /* 12d3f2bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3f2bf shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12d3f2c2 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12d3f2c6 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12d3f2ca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d3f2cd jmp 0x12d3f26d */
  goto L_12d3f26d;
L_12d3f2cf:;
  /* 12d3f2cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d3f2d2 mov esp, ebp */
  ESP = (EBP);
  /* 12d3f2d4 pop ebp */
  EBP = (pop32());
  /* 12d3f2d5 ret  */
  ESPCHK(0x12d3f260u, _esp0);
  ESP += 4; return;
}

