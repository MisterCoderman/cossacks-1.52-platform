#include "recomp.h"

/* FUN_1000a4d4 @ 0x1124a4d4 (9 bytes, 2 insns) */
void f_1124a4d4(void) {
  FTRACE(0x1124a4d4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124a4d4 lea edx, [esp + 4] */
  EDX = ((uint32_t)(ESP + 0x4));
  /* 1124a4d8 call 0x1124bc95 */
  push32(0x1124a4ddu); f_1124bc95();
}

/* FUN_1000a4dd @ 0x1124a4dd (145 bytes, 43 insns) */
void f_1124a4dd(void) {
  FTRACE(0x1124a4ddu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124a4dd push edx */
  push32((uint32_t)(EDX));
  /* 1124a4de wait  */
  /* wait (no observable integer/reg state) */
  /* 1124a4df fnstcw word ptr [esp] */
  w16((uint32_t)(ESP), C.fcw);
  /* 1124a4e2 je 0x1124a534 */
  if (C.zf) goto L_1124a534;
  /* 1124a4e4 cmp word ptr [esp], 0x27f */
  { uint32_t _a=(r16((uint32_t)(ESP))),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1124a4ea je 0x1124a4f2 */
  if (C.zf) goto L_1124a4f2;
  /* 1124a4ec fldcw word ptr [0x1127b558] */
  C.fcw = r16((uint32_t)(0x1127b558));
L_1124a4f2:;
  /* 1124a4f2 fsin  */
  FPU_ST(0) = __builtin_sin(FPU_ST(0)); C.fsw_c2=0;
  /* 1124a4f4 wait  */
  /* wait (no observable integer/reg state) */
  /* 1124a4f5 fnstsw ax */
  AX = fpu_status();
  /* 1124a4f7 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 1124a4f8 jp 0x1124a517 */
  if (C.pf) goto L_1124a517;
L_1124a4fa:;
  /* 1124a4fa cmp dword ptr [0x112813d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112813d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124a501 jne 0x1124bcee */
  if (!C.zf) { jmp_ind(0x1124bceeu); return; }
  /* 1124a507 mov edx, 0x1e */
  EDX = (0x1eu);
  /* 1124a50c lea ecx, [0x1127ed70] */
  ECX = ((uint32_t)(0x1127ed70));
  /* 1124a512 jmp 0x1124bcfb */
  f_1124bcfb(); return;
L_1124a517:;
  /* 1124a517 fld xword ptr [0x1127b55a] */
  fpu_push(rf80((uint32_t)(0x1127b55a)));
  /* 1124a51d fxch st(1) */
  { double _t=FPU_ST(0); FPU_ST(0)=FPU_ST(1); FPU_ST(1)=_t; }
L_1124a51f:;
  /* 1124a51f fprem1  */
  FPU_ST(0) = __builtin_remainder(FPU_ST(0), FPU_ST(1)); C.fsw_c2=0;
  /* 1124a521 wait  */
  /* wait (no observable integer/reg state) */
  /* 1124a522 fnstsw ax */
  AX = fpu_status();
  /* 1124a524 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 1124a525 jp 0x1124a51f */
  if (C.pf) goto L_1124a51f;
  /* 1124a527 fstp st(1) */
  FPU_ST(1) = FPU_ST(0);
  (void)fpu_pop();
  /* 1124a529 fsin  */
  FPU_ST(0) = __builtin_sin(FPU_ST(0)); C.fsw_c2=0;
  /* 1124a52b jmp 0x1124a4fa */
  goto L_1124a4fa;
L_1124a52d:;
  /* 1124a52d call 0x1124bc7c */
  push32(0x1124a532u); f_1124bc7c();
  /* 1124a532 jmp 0x1124a54f */
  goto L_1124a54f;
L_1124a534:;
  /* 1124a534 test eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); fl_logic(_r,32); }
  /* 1124a539 jne 0x1124a52d */
  if (!C.zf) goto L_1124a52d;
  /* 1124a53b cmp dword ptr [esp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124a540 jne 0x1124a52d */
  if (!C.zf) goto L_1124a52d;
  /* 1124a542 fstp st(0) */
  FPU_ST(0) = FPU_ST(0);
  (void)fpu_pop();
  /* 1124a544 fld xword ptr [0x1127edf0] */
  fpu_push(rf80((uint32_t)(0x1127edf0)));
  /* 1124a54a mov eax, 1 */
  EAX = (0x1u);
L_1124a54f:;
  /* 1124a54f cmp dword ptr [0x112813d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112813d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124a556 jne 0x1124bcee */
  if (!C.zf) { jmp_ind(0x1124bceeu); return; }
  /* 1124a55c mov edx, 0x1e */
  EDX = (0x1eu);
  /* 1124a561 lea ecx, [0x1127ed70] */
  ECX = ((uint32_t)(0x1127ed70));
  /* 1124a567 call 0x1124bdf7 */
  push32(0x1124a56cu); f_1124bdf7();
  /* 1124a56c pop edx */
  EDX = (pop32());
  /* 1124a56d ret  */
  ESPCHK(0x1124a4ddu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a570 @ 0x1124a570 (20 bytes, 6 insns) */
void f_1124a570(void) {
  FTRACE(0x1124a570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124a570 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124a573 fst qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  /* 1124a576 call 0x1124bcd8 */
  push32(0x1124a57bu); f_1124bcd8();
  /* 1124a57b call 0x1124a58d */
  push32(0x1124a580u); f_1124a58d();
  /* 1124a580 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124a583 ret  */
  ESPCHK(0x1124a570u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a584 @ 0x1124a584 (9 bytes, 2 insns) */
void f_1124a584(void) {
  FTRACE(0x1124a584u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124a584 lea edx, [esp + 4] */
  EDX = ((uint32_t)(ESP + 0x4));
  /* 1124a588 call 0x1124bc95 */
  push32(0x1124a58du); f_1124bc95();
}

/* FUN_1000a58d @ 0x1124a58d (145 bytes, 43 insns) */
void f_1124a58d(void) {
  FTRACE(0x1124a58du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124a58d push edx */
  push32((uint32_t)(EDX));
  /* 1124a58e wait  */
  /* wait (no observable integer/reg state) */
  /* 1124a58f fnstcw word ptr [esp] */
  w16((uint32_t)(ESP), C.fcw);
  /* 1124a592 je 0x1124a5e4 */
  if (C.zf) goto L_1124a5e4;
  /* 1124a594 cmp word ptr [esp], 0x27f */
  { uint32_t _a=(r16((uint32_t)(ESP))),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1124a59a je 0x1124a5a2 */
  if (C.zf) goto L_1124a5a2;
  /* 1124a59c fldcw word ptr [0x1127b558] */
  C.fcw = r16((uint32_t)(0x1127b558));
L_1124a5a2:;
  /* 1124a5a2 fcos  */
  FPU_ST(0) = __builtin_cos(FPU_ST(0)); C.fsw_c2=0;
  /* 1124a5a4 wait  */
  /* wait (no observable integer/reg state) */
  /* 1124a5a5 fnstsw ax */
  AX = fpu_status();
  /* 1124a5a7 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 1124a5a8 jp 0x1124a5c7 */
  if (C.pf) goto L_1124a5c7;
L_1124a5aa:;
  /* 1124a5aa cmp dword ptr [0x112813d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112813d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124a5b1 jne 0x1124bcee */
  if (!C.zf) { jmp_ind(0x1124bceeu); return; }
  /* 1124a5b7 mov edx, 0x12 */
  EDX = (0x12u);
  /* 1124a5bc lea ecx, [0x1127ed80] */
  ECX = ((uint32_t)(0x1127ed80));
  /* 1124a5c2 jmp 0x1124bcfb */
  f_1124bcfb(); return;
L_1124a5c7:;
  /* 1124a5c7 fld xword ptr [0x1127b55a] */
  fpu_push(rf80((uint32_t)(0x1127b55a)));
  /* 1124a5cd fxch st(1) */
  { double _t=FPU_ST(0); FPU_ST(0)=FPU_ST(1); FPU_ST(1)=_t; }
L_1124a5cf:;
  /* 1124a5cf fprem1  */
  FPU_ST(0) = __builtin_remainder(FPU_ST(0), FPU_ST(1)); C.fsw_c2=0;
  /* 1124a5d1 wait  */
  /* wait (no observable integer/reg state) */
  /* 1124a5d2 fnstsw ax */
  AX = fpu_status();
  /* 1124a5d4 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 1124a5d5 jp 0x1124a5cf */
  if (C.pf) goto L_1124a5cf;
  /* 1124a5d7 fstp st(1) */
  FPU_ST(1) = FPU_ST(0);
  (void)fpu_pop();
  /* 1124a5d9 fcos  */
  FPU_ST(0) = __builtin_cos(FPU_ST(0)); C.fsw_c2=0;
  /* 1124a5db jmp 0x1124a5aa */
  goto L_1124a5aa;
L_1124a5dd:;
  /* 1124a5dd call 0x1124bc7c */
  push32(0x1124a5e2u); f_1124bc7c();
  /* 1124a5e2 jmp 0x1124a5ff */
  goto L_1124a5ff;
L_1124a5e4:;
  /* 1124a5e4 test eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); fl_logic(_r,32); }
  /* 1124a5e9 jne 0x1124a5dd */
  if (!C.zf) goto L_1124a5dd;
  /* 1124a5eb cmp dword ptr [esp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124a5f0 jne 0x1124a5dd */
  if (!C.zf) goto L_1124a5dd;
  /* 1124a5f2 fstp st(0) */
  FPU_ST(0) = FPU_ST(0);
  (void)fpu_pop();
  /* 1124a5f4 fld xword ptr [0x1127edf0] */
  fpu_push(rf80((uint32_t)(0x1127edf0)));
  /* 1124a5fa mov eax, 1 */
  EAX = (0x1u);
L_1124a5ff:;
  /* 1124a5ff cmp dword ptr [0x112813d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112813d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124a606 jne 0x1124bcee */
  if (!C.zf) { jmp_ind(0x1124bceeu); return; }
  /* 1124a60c mov edx, 0x12 */
  EDX = (0x12u);
  /* 1124a611 lea ecx, [0x1127ed80] */
  ECX = ((uint32_t)(0x1127ed80));
  /* 1124a617 call 0x1124bdf7 */
  push32(0x1124a61cu); f_1124bdf7();
  /* 1124a61c pop edx */
  EDX = (pop32());
  /* 1124a61d ret  */
  ESPCHK(0x1124a58du, _esp0);
  ESP += 4; return;
}

/* FUN_1000a620 @ 0x1124a620 (20 bytes, 6 insns) */
void f_1124a620(void) {
  FTRACE(0x1124a620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124a620 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124a623 fst qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  /* 1124a626 call 0x1124bcd8 */
  push32(0x1124a62bu); f_1124bcd8();
  /* 1124a62b call 0x1124a63d */
  push32(0x1124a630u); f_1124a63d();
  /* 1124a630 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124a633 ret  */
  ESPCHK(0x1124a620u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a634 @ 0x1124a634 (9 bytes, 2 insns) */
void f_1124a634(void) {
  FTRACE(0x1124a634u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124a634 lea edx, [esp + 4] */
  EDX = ((uint32_t)(ESP + 0x4));
  /* 1124a638 call 0x1124bc95 */
  push32(0x1124a63du); f_1124bc95();
}

/* FUN_1000a63d @ 0x1124a63d (138 bytes, 40 insns) */
void f_1124a63d(void) {
  FTRACE(0x1124a63du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124a63d push edx */
  push32((uint32_t)(EDX));
  /* 1124a63e wait  */
  /* wait (no observable integer/reg state) */
  /* 1124a63f fnstcw word ptr [esp] */
  w16((uint32_t)(ESP), C.fcw);
  /* 1124a642 je 0x1124a67a */
  if (C.zf) goto L_1124a67a;
  /* 1124a644 cmp word ptr [esp], 0x27f */
  { uint32_t _a=(r16((uint32_t)(ESP))),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1124a64a je 0x1124a652 */
  if (C.zf) goto L_1124a652;
  /* 1124a64c fldcw word ptr [0x1127b558] */
  C.fcw = r16((uint32_t)(0x1127b558));
L_1124a652:;
  /* 1124a652 fld1  */
  fpu_push(1.0);
  /* 1124a654 fpatan  */
  { double _r=__builtin_atan2(FPU_ST(1), FPU_ST(0)); (void)fpu_pop(); FPU_ST(0)=_r; }
L_1124a656:;
  /* 1124a656 cmp dword ptr [0x112813d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112813d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124a65d jne 0x1124bcee */
  if (!C.zf) { jmp_ind(0x1124bceeu); return; }
  /* 1124a663 mov edx, 0xf */
  EDX = (0xfu);
  /* 1124a668 lea ecx, [0x1127ed90] */
  ECX = ((uint32_t)(0x1127ed90));
  /* 1124a66e jmp 0x1124bcfb */
  f_1124bcfb(); return;
L_1124a673:;
  /* 1124a673 call 0x1124bc7c */
  push32(0x1124a678u); f_1124bc7c();
  /* 1124a678 jmp 0x1124a6a0 */
  goto L_1124a6a0;
L_1124a67a:;
  /* 1124a67a test eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); fl_logic(_r,32); }
  /* 1124a67f jne 0x1124a673 */
  if (!C.zf) goto L_1124a673;
  /* 1124a681 cmp dword ptr [esp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124a686 jne 0x1124a673 */
  if (!C.zf) goto L_1124a673;
  /* 1124a688 fstp st(0) */
  FPU_ST(0) = FPU_ST(0);
  (void)fpu_pop();
  /* 1124a68a fld xword ptr [0x1127edfa] */
  fpu_push(rf80((uint32_t)(0x1127edfa)));
  /* 1124a690 test eax, 0x80000000 */
  { uint32_t _r=(EAX)&(0x80000000u); fl_logic(_r,32); }
  /* 1124a695 je 0x1124a656 */
  if (C.zf) goto L_1124a656;
  /* 1124a697 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 1124a699 jmp 0x1124a656 */
  goto L_1124a656;
  /* 1124a69b mov eax, 1 */
  EAX = (0x1u);
L_1124a6a0:;
  /* 1124a6a0 cmp dword ptr [0x112813d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112813d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124a6a7 jne 0x1124bcee */
  if (!C.zf) { jmp_ind(0x1124bceeu); return; }
  /* 1124a6ad mov edx, 0xf */
  EDX = (0xfu);
  /* 1124a6b2 lea ecx, [0x1127ed90] */
  ECX = ((uint32_t)(0x1127ed90));
  /* 1124a6b8 call 0x1124bdf7 */
  push32(0x1124a6bdu); f_1124bdf7();
  /* 1124a6bd pop edx */
  EDX = (pop32());
  /* 1124a6be ret  */
  ESPCHK(0x1124a63du, _esp0);
  ESP += 4; return;
  /* 1124a6bf int3  */
  x86_unimpl("int3 @ 0x1124a6bf");
  /* 1124a6c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1124a6c1 mov ebp, esp */
  EBP = (ESP);
  /* 1124a6c3 push ebx */
  push32((uint32_t)(EBX));
  /* 1124a6c4 push esi */
  push32((uint32_t)(ESI));
  /* 1124a6c5 push edi */
  push32((uint32_t)(EDI));
}

/* FUN_1000a6c0 @ 0x1124a6c0 (33 bytes, 15 insns) */
void f_1124a6c0(void) {
  FTRACE(0x1124a6c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124a6c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1124a6c1 mov ebp, esp */
  EBP = (ESP);
  /* 1124a6c3 push ebx */
  push32((uint32_t)(EBX));
  /* 1124a6c4 push esi */
  push32((uint32_t)(ESI));
  /* 1124a6c5 push edi */
  push32((uint32_t)(EDI));
  /* 1124a6c6 call 0x1124a700 */
  push32(0x1124a6cbu); f_1124a700();
  /* 1124a6cb call 0x1124bec0 */
  push32(0x1124a6d0u); f_1124bec0();
  /* 1124a6d0 mov dword ptr [0x112813dc], eax */
  w32((uint32_t)(0x112813dc), (EAX));
  /* 1124a6d5 call 0x1124be40 */
  push32(0x1124a6dau); f_1124be40();
  /* 1124a6da fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 1124a6dc pop edi */
  EDI = (pop32());
  /* 1124a6dd pop esi */
  ESI = (pop32());
  /* 1124a6de pop ebx */
  EBX = (pop32());
  /* 1124a6df pop ebp */
  EBP = (pop32());
  /* 1124a6e0 ret  */
  ESPCHK(0x1124a6c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a6f0 @ 0x1124a6f0 (5 bytes, 4 insns) */
void f_1124a6f0(void) {
  FTRACE(0x1124a6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124a6f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1124a6f1 mov ebp, esp */
  EBP = (ESP);
  /* 1124a6f3 pop ebp */
  EBP = (pop32());
  /* 1124a6f4 ret  */
  ESPCHK(0x1124a6f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a700 @ 0x1124a700 (65 bytes, 10 insns) */
void f_1124a700(void) {
  FTRACE(0x1124a700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124a700 push ebp */
  push32((uint32_t)(EBP));
  /* 1124a701 mov ebp, esp */
  EBP = (ESP);
  /* 1124a703 mov dword ptr [0x1127ee20], 0x1124c5b0 */
  w32((uint32_t)(0x1127ee20), (0x1124c5b0u));
  /* 1124a70d mov dword ptr [0x1127ee24], 0x1124bfc0 */
  w32((uint32_t)(0x1127ee24), (0x1124bfc0u));
  /* 1124a717 mov dword ptr [0x1127ee28], 0x1124c0d0 */
  w32((uint32_t)(0x1127ee28), (0x1124c0d0u));
  /* 1124a721 mov dword ptr [0x1127ee2c], 0x1124bf10 */
  w32((uint32_t)(0x1127ee2c), (0x1124bf10u));
  /* 1124a72b mov dword ptr [0x1127ee30], 0x1124c0a0 */
  w32((uint32_t)(0x1127ee30), (0x1124c0a0u));
  /* 1124a735 mov dword ptr [0x1127ee34], 0x1124c5b0 */
  w32((uint32_t)(0x1127ee34), (0x1124c5b0u));
  /* 1124a73f pop ebp */
  EBP = (pop32());
  /* 1124a740 ret  */
  ESPCHK(0x1124a700u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a750 @ 0x1124a750 (28 bytes, 11 insns) */
void f_1124a750(void) {
  FTRACE(0x1124a750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124a750 push ebp */
  push32((uint32_t)(EBP));
  /* 1124a751 mov ebp, esp */
  EBP = (ESP);
  /* 1124a753 push ecx */
  push32((uint32_t)(ECX));
  /* 1124a754 mov eax, dword ptr [0x112813d8] */
  EAX = (r32((uint32_t)(0x112813d8)));
  /* 1124a759 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1124a75c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124a75f mov dword ptr [0x112813d8], ecx */
  w32((uint32_t)(0x112813d8), (ECX));
  /* 1124a765 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124a768 mov esp, ebp */
  ESP = (EBP);
  /* 1124a76a pop ebp */
  EBP = (pop32());
  /* 1124a76b ret  */
  ESPCHK(0x1124a750u, _esp0);
  ESP += 4; return;
}

/* __ftol @ 0x1124a76c (39 bytes, 16 insns) */
void f_1124a76c(void) {
  FTRACE(0x1124a76cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124a76c push ebp */
  push32((uint32_t)(EBP));
  /* 1124a76d mov ebp, esp */
  EBP = (ESP);
  /* 1124a76f add esp, -0xc */
  { uint32_t _a=(ESP),_b=(0xfffffff4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124a772 wait  */
  /* wait (no observable integer/reg state) */
  /* 1124a773 fnstcw word ptr [ebp - 2] */
  w16((uint32_t)(EBP + -0x2), C.fcw);
  /* 1124a776 wait  */
  /* wait (no observable integer/reg state) */
  /* 1124a777 mov ax, word ptr [ebp - 2] */
  AX = (r16((uint32_t)(EBP + -0x2)));
  /* 1124a77b or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 1124a77e mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 1124a782 fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 1124a785 fistp qword ptr [ebp - 0xc] */
  { int64_t _q=fpu_to_i64(FPU_ST(0)); w32((uint32_t)(EBP + -0xc),(uint32_t)_q); w32((uint32_t)(EBP + -0xc)+4,(uint32_t)((uint64_t)_q>>32)); }
  (void)fpu_pop();
  /* 1124a788 fldcw word ptr [ebp - 2] */
  C.fcw = r16((uint32_t)(EBP + -0x2));
  /* 1124a78b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1124a78e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124a791 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1124a792 ret  */
  ESPCHK(0x1124a76cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a7a0 @ 0x1124a7a0 (161 bytes, 60 insns) */
void f_1124a7a0(void) {
  FTRACE(0x1124a7a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124a7a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1124a7a1 mov ebp, esp */
  EBP = (ESP);
  /* 1124a7a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1124a7a4 push ebx */
  push32((uint32_t)(EBX));
  /* 1124a7a5 push esi */
  push32((uint32_t)(ESI));
  /* 1124a7a6 push edi */
  push32((uint32_t)(EDI));
  /* 1124a7a7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124a7ab jne 0x1124a7b2 */
  if (!C.zf) goto L_1124a7b2;
  /* 1124a7ad jmp 0x1124a83a */
  goto L_1124a83a;
L_1124a7b2:;
  /* 1124a7b2 push 9 */
  push32((uint32_t)(0x9u));
  /* 1124a7b4 call 0x1124c720 */
  push32(0x1124a7b9u); f_1124c720();
  /* 1124a7b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124a7bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124a7bf sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124a7c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1124a7c5:;
  /* 1124a7c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124a7c8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1124a7cb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1124a7d1 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124a7d4 je 0x1124a817 */
  if (C.zf) goto L_1124a817;
  /* 1124a7d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124a7d9 cmp dword ptr [eax + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124a7dd je 0x1124a817 */
  if (C.zf) goto L_1124a817;
  /* 1124a7df mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124a7e2 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1124a7e5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1124a7eb cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124a7ee je 0x1124a817 */
  if (C.zf) goto L_1124a817;
  /* 1124a7f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124a7f3 cmp dword ptr [eax + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124a7f7 je 0x1124a817 */
  if (C.zf) goto L_1124a817;
  /* 1124a7f9 push 0x1127b2e8 */
  push32((uint32_t)(0x1127b2e8u));
  /* 1124a7fe push 0 */
  push32((uint32_t)(0x0u));
  /* 1124a800 push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 1124a802 push 0x1127b2dc */
  push32((uint32_t)(0x1127b2dcu));
  /* 1124a807 push 2 */
  push32((uint32_t)(0x2u));
  /* 1124a809 call 0x1124b3e0 */
  push32(0x1124a80eu); f_1124b3e0();
  /* 1124a80e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124a811 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124a814 jne 0x1124a817 */
  if (!C.zf) goto L_1124a817;
  /* 1124a816 int3  */
  x86_unimpl("int3 @ 0x1124a816");
L_1124a817:;
  /* 1124a817 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1124a819 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1124a81b jne 0x1124a7c5 */
  if (!C.zf) goto L_1124a7c5;
  /* 1124a81d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124a820 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1124a823 push eax */
  push32((uint32_t)(EAX));
  /* 1124a824 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124a827 push ecx */
  push32((uint32_t)(ECX));
  /* 1124a828 call 0x1124d2b0 */
  push32(0x1124a82du); f_1124d2b0();
  /* 1124a82d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124a830 push 9 */
  push32((uint32_t)(0x9u));
  /* 1124a832 call 0x1124c7c0 */
  push32(0x1124a837u); f_1124c7c0();
  /* 1124a837 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1124a83a:;
  /* 1124a83a pop edi */
  EDI = (pop32());
  /* 1124a83b pop esi */
  ESI = (pop32());
  /* 1124a83c pop ebx */
  EBX = (pop32());
  /* 1124a83d mov esp, ebp */
  ESP = (EBP);
  /* 1124a83f pop ebp */
  EBP = (pop32());
  /* 1124a840 ret  */
  ESPCHK(0x1124a7a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a850 @ 0x1124a850 (19 bytes, 9 insns) */
void f_1124a850(void) {
  FTRACE(0x1124a850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124a850 push ebp */
  push32((uint32_t)(EBP));
  /* 1124a851 mov ebp, esp */
  EBP = (ESP);
  /* 1124a853 push 1 */
  push32((uint32_t)(0x1u));
  /* 1124a855 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124a858 push eax */
  push32((uint32_t)(EAX));
  /* 1124a859 call 0x1124c850 */
  push32(0x1124a85eu); f_1124c850();
  /* 1124a85e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124a861 pop ebp */
  EBP = (pop32());
  /* 1124a862 ret  */
  ESPCHK(0x1124a850u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a870 @ 0x1124a870 (45 bytes, 17 insns) */
void f_1124a870(void) {
  FTRACE(0x1124a870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124a870 push ebp */
  push32((uint32_t)(EBP));
  /* 1124a871 mov ebp, esp */
  EBP = (ESP);
  /* 1124a873 push ecx */
  push32((uint32_t)(ECX));
  /* 1124a874 push ebx */
  push32((uint32_t)(EBX));
  /* 1124a875 push esi */
  push32((uint32_t)(ESI));
  /* 1124a876 push edi */
  push32((uint32_t)(EDI));
  /* 1124a877 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124a87a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124a87d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1124a880 mov ebx, dword ptr fs:[0] */
  EBX = (r32((uint32_t)(0x0)));
  /* 1124a887 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 1124a889 mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 1124a88f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124a892 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124a895 mov esp, dword ptr [ebx - 4] */
  ESP = (r32((uint32_t)(EBX + -0x4)));
  /* 1124a898 mov ebp, dword ptr [ebp - 4] */
  EBP = (r32((uint32_t)(EBP + -0x4)));
  /* 1124a89b jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* _CallMemberFunction0 @ 0x1124a8b0 (7 bytes, 4 insns) */
void f_1124a8b0(void) {
  FTRACE(0x1124a8b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124a8b0 pop eax */
  EAX = (pop32());
  /* 1124a8b1 pop ecx */
  ECX = (pop32());
  /* 1124a8b2 xchg dword ptr [esp], eax */
  { uint32_t _t=(r32((uint32_t)(ESP))); w32((uint32_t)(ESP), (EAX)); EAX = (_t); }
  /* 1124a8b5 jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* FUN_1000a8c0 @ 0x1124a8c0 (7 bytes, 4 insns) */
void f_1124a8c0(void) {
  FTRACE(0x1124a8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124a8c0 pop eax */
  EAX = (pop32());
  /* 1124a8c1 pop ecx */
  ECX = (pop32());
  /* 1124a8c2 xchg dword ptr [esp], eax */
  { uint32_t _t=(r32((uint32_t)(ESP))); w32((uint32_t)(ESP), (EAX)); EAX = (_t); }
  /* 1124a8c5 jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* FUN_1000a8d0 @ 0x1124a8d0 (7 bytes, 4 insns) */
void f_1124a8d0(void) {
  FTRACE(0x1124a8d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124a8d0 pop eax */
  EAX = (pop32());
  /* 1124a8d1 pop ecx */
  ECX = (pop32());
  /* 1124a8d2 xchg dword ptr [esp], eax */
  { uint32_t _t=(r32((uint32_t)(ESP))); w32((uint32_t)(ESP), (EAX)); EAX = (_t); }
  /* 1124a8d5 jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* FUN_1000a8e0 @ 0x1124a8e0 (86 bytes, 32 insns) */
void f_1124a8e0(void) {
  FTRACE(0x1124a8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124a8e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1124a8e1 mov ebp, esp */
  EBP = (ESP);
  /* 1124a8e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124a8e6 push ebx */
  push32((uint32_t)(EBX));
  /* 1124a8e7 push esi */
  push32((uint32_t)(ESI));
  /* 1124a8e8 push edi */
  push32((uint32_t)(EDI));
  /* 1124a8e9 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1124a8ef mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1124a8f2 mov dword ptr [ebp - 4], 0x1124a90c */
  w32((uint32_t)(EBP + -0x4), (0x1124a90cu));
  /* 1124a8f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124a8fb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124a8fe push eax */
  push32((uint32_t)(EAX));
  /* 1124a8ff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124a902 push ecx */
  push32((uint32_t)(ECX));
  /* 1124a903 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124a906 push edx */
  push32((uint32_t)(EDX));
  /* 1124a907 call 0x11261ddc */
  push32(0x1124a90cu); f_11261ddc();
  /* 1124a90c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124a90f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1124a912 and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 1124a915 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124a918 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1124a91b mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1124a921 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124a924 mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 1124a926 mov dword ptr fs:[0], ebx */
  w32((uint32_t)(0x0), (EBX));
  /* 1124a92d pop edi */
  EDI = (pop32());
  /* 1124a92e pop esi */
  ESI = (pop32());
  /* 1124a92f pop ebx */
  EBX = (pop32());
  /* 1124a930 mov esp, ebp */
  ESP = (EBP);
  /* 1124a932 pop ebp */
  EBP = (pop32());
  /* 1124a933 ret 8 */
  ESPCHK(0x1124a8e0u, _esp0);
  ESP += 12; return;
}

/* FID_conflict:___CxxFrameHandler3 @ 0x1124a940 (60 bytes, 31 insns) */
void f_1124a940(void) {
  FTRACE(0x1124a940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124a940 push ebp */
  push32((uint32_t)(EBP));
  /* 1124a941 mov ebp, esp */
  EBP = (ESP);
  /* 1124a943 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124a946 push ebx */
  push32((uint32_t)(EBX));
  /* 1124a947 push esi */
  push32((uint32_t)(ESI));
  /* 1124a948 push edi */
  push32((uint32_t)(EDI));
  /* 1124a949 cld  */
  C.df=0;
  /* 1124a94a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1124a94d push 0 */
  push32((uint32_t)(0x0u));
  /* 1124a94f push 0 */
  push32((uint32_t)(0x0u));
  /* 1124a951 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124a953 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124a956 push eax */
  push32((uint32_t)(EAX));
  /* 1124a957 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1124a95a push ecx */
  push32((uint32_t)(ECX));
  /* 1124a95b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124a95e push edx */
  push32((uint32_t)(EDX));
  /* 1124a95f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124a962 push eax */
  push32((uint32_t)(EAX));
  /* 1124a963 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124a966 push ecx */
  push32((uint32_t)(ECX));
  /* 1124a967 call 0x1124e790 */
  push32(0x1124a96cu); f_1124e790();
  /* 1124a96c add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124a96f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1124a972 pop edi */
  EDI = (pop32());
  /* 1124a973 pop esi */
  ESI = (pop32());
  /* 1124a974 pop ebx */
  EBX = (pop32());
  /* 1124a975 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124a978 mov esp, ebp */
  ESP = (EBP);
  /* 1124a97a pop ebp */
  EBP = (pop32());
  /* 1124a97b ret  */
  ESPCHK(0x1124a940u, _esp0);
  ESP += 4; return;
}

/* ___CxxLongjmpUnwind@4 @ 0x1124a980 (38 bytes, 16 insns) */
void f_1124a980(void) {
  FTRACE(0x1124a980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124a980 push ebp */
  push32((uint32_t)(EBP));
  /* 1124a981 mov ebp, esp */
  EBP = (ESP);
  /* 1124a983 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124a986 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1124a989 push ecx */
  push32((uint32_t)(ECX));
  /* 1124a98a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124a98d mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 1124a990 push eax */
  push32((uint32_t)(EAX));
  /* 1124a991 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124a993 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124a996 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1124a999 push edx */
  push32((uint32_t)(EDX));
  /* 1124a99a call 0x1124ed00 */
  push32(0x1124a99fu); f_1124ed00();
  /* 1124a99f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124a9a2 pop ebp */
  EBP = (pop32());
  /* 1124a9a3 ret 4 */
  ESPCHK(0x1124a980u, _esp0);
  ESP += 8; return;
}

/* FUN_1000a9b0 @ 0x1124a9b0 (104 bytes, 36 insns) */
void f_1124a9b0(void) {
  FTRACE(0x1124a9b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124a9b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1124a9b1 mov ebp, esp */
  EBP = (ESP);
  /* 1124a9b3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124a9b6 push ebx */
  push32((uint32_t)(EBX));
  /* 1124a9b7 push esi */
  push32((uint32_t)(ESI));
  /* 1124a9b8 push edi */
  push32((uint32_t)(EDI));
  /* 1124a9b9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1124a9c0 mov dword ptr [ebp - 0x10], 0x1124aa20 */
  w32((uint32_t)(EBP + -0x10), (0x1124aa20u));
  /* 1124a9c7 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124a9ca mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1124a9cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124a9d0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1124a9d3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1124a9d6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124a9d9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1124a9dc mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1124a9e2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1124a9e5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1124a9eb mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 1124a9f1 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1124a9f4 push eax */
  push32((uint32_t)(EAX));
  /* 1124a9f5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124a9f8 push ecx */
  push32((uint32_t)(ECX));
  /* 1124a9f9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124a9fc push edx */
  push32((uint32_t)(EDX));
  /* 1124a9fd call 0x1124f3f0 */
  push32(0x1124aa02u); f_1124f3f0();
  /* 1124aa02 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1124aa05 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1124aa08 mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 1124aa0e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1124aa11 pop edi */
  EDI = (pop32());
  /* 1124aa12 pop esi */
  ESI = (pop32());
  /* 1124aa13 pop ebx */
  EBX = (pop32());
  /* 1124aa14 mov esp, ebp */
  ESP = (EBP);
  /* 1124aa16 pop ebp */
  EBP = (pop32());
  /* 1124aa17 ret  */
  ESPCHK(0x1124a9b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa20 @ 0x1124aa20 (57 bytes, 30 insns) */
void f_1124aa20(void) {
  FTRACE(0x1124aa20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124aa20 push ebp */
  push32((uint32_t)(EBP));
  /* 1124aa21 mov ebp, esp */
  EBP = (ESP);
  /* 1124aa23 push ebx */
  push32((uint32_t)(EBX));
  /* 1124aa24 push esi */
  push32((uint32_t)(ESI));
  /* 1124aa25 push edi */
  push32((uint32_t)(EDI));
  /* 1124aa26 cld  */
  C.df=0;
  /* 1124aa27 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124aa29 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124aa2c push eax */
  push32((uint32_t)(EAX));
  /* 1124aa2d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124aa30 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1124aa33 push edx */
  push32((uint32_t)(EDX));
  /* 1124aa34 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124aa37 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1124aa3a push ecx */
  push32((uint32_t)(ECX));
  /* 1124aa3b push 0 */
  push32((uint32_t)(0x0u));
  /* 1124aa3d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124aa40 push edx */
  push32((uint32_t)(EDX));
  /* 1124aa41 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124aa44 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1124aa47 push ecx */
  push32((uint32_t)(ECX));
  /* 1124aa48 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124aa4b push edx */
  push32((uint32_t)(EDX));
  /* 1124aa4c call 0x1124e790 */
  push32(0x1124aa51u); f_1124e790();
  /* 1124aa51 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124aa54 pop edi */
  EDI = (pop32());
  /* 1124aa55 pop esi */
  ESI = (pop32());
  /* 1124aa56 pop ebx */
  EBX = (pop32());
  /* 1124aa57 pop ebp */
  EBP = (pop32());
  /* 1124aa58 ret  */
  ESPCHK(0x1124aa20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa60 @ 0x1124aa60 (204 bytes, 58 insns) */
void f_1124aa60(void) {
  FTRACE(0x1124aa60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124aa60 push ebp */
  push32((uint32_t)(EBP));
  /* 1124aa61 mov ebp, esp */
  EBP = (ESP);
  /* 1124aa63 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124aa66 push ebx */
  push32((uint32_t)(EBX));
  /* 1124aa67 push esi */
  push32((uint32_t)(ESI));
  /* 1124aa68 push edi */
  push32((uint32_t)(EDI));
  /* 1124aa69 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 1124aa70 mov dword ptr [ebp - 0x24], 0x1124ab30 */
  w32((uint32_t)(EBP + -0x24), (0x1124ab30u));
  /* 1124aa77 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1124aa7a mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1124aa7d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124aa80 mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 1124aa83 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1124aa86 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1124aa89 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1124aa8c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1124aa8f mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1124aa96 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1124aa9d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1124aaa4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1124aaab mov dword ptr [ebp - 0x10], 0x1124aafc */
  w32((uint32_t)(EBP + -0x10), (0x1124aafcu));
  /* 1124aab2 mov dword ptr [ebp - 0xc], esp */
  w32((uint32_t)(EBP + -0xc), (ESP));
  /* 1124aab5 mov dword ptr [ebp - 8], ebp */
  w32((uint32_t)(EBP + -0x8), (EBP));
  /* 1124aab8 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1124aabe mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1124aac1 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 1124aac7 mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 1124aacd mov dword ptr [ebp - 0x34], 1 */
  w32((uint32_t)(EBP + -0x34), (0x1u));
  /* 1124aad4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124aad7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1124aada mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124aadd mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 1124aae0 lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 1124aae3 push eax */
  push32((uint32_t)(EAX));
  /* 1124aae4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124aae7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1124aae9 push edx */
  push32((uint32_t)(EDX));
  /* 1124aaea call 0x1124f520 */
  push32(0x1124aaefu); f_1124f520();
  /* 1124aaef call dword ptr [eax + 0x68] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x68))), 0x1124aaf2u);
  /* 1124aaf2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124aaf5 mov dword ptr [ebp - 0x34], 0 */
  w32((uint32_t)(EBP + -0x34), (0x0u));
  /* 1124aafc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124ab00 je 0x1124ab19 */
  if (C.zf) goto L_1124ab19;
  /* 1124ab02 mov ebx, dword ptr fs:[0] */
  EBX = (r32((uint32_t)(0x0)));
  /* 1124ab09 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 1124ab0b mov ebx, dword ptr [ebp - 0x28] */
  EBX = (r32((uint32_t)(EBP + -0x28)));
  /* 1124ab0e mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 1124ab10 mov dword ptr fs:[0], ebx */
  w32((uint32_t)(0x0), (EBX));
  /* 1124ab17 jmp 0x1124ab22 */
  goto L_1124ab22;
L_1124ab19:;
  /* 1124ab19 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1124ab1c mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
L_1124ab22:;
  /* 1124ab22 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1124ab25 pop edi */
  EDI = (pop32());
  /* 1124ab26 pop esi */
  ESI = (pop32());
  /* 1124ab27 pop ebx */
  EBX = (pop32());
  /* 1124ab28 mov esp, ebp */
  ESP = (EBP);
  /* 1124ab2a pop ebp */
  EBP = (pop32());
  /* 1124ab2b ret  */
  ESPCHK(0x1124aa60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab30 @ 0x1124ab30 (124 bytes, 53 insns) */
void f_1124ab30(void) {
  FTRACE(0x1124ab30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124ab30 push ebp */
  push32((uint32_t)(EBP));
  /* 1124ab31 mov ebp, esp */
  EBP = (ESP);
  /* 1124ab33 push ebx */
  push32((uint32_t)(EBX));
  /* 1124ab34 push esi */
  push32((uint32_t)(ESI));
  /* 1124ab35 push edi */
  push32((uint32_t)(EDI));
  /* 1124ab36 cld  */
  C.df=0;
  /* 1124ab37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124ab3a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1124ab3d and ecx, 0x66 */
  { uint32_t _r=(ECX)&(0x66u); ECX = (_r); fl_logic(_r,32); }
  /* 1124ab40 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1124ab42 je 0x1124ab55 */
  if (C.zf) goto L_1124ab55;
  /* 1124ab44 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124ab47 mov dword ptr [edx + 0x24], 1 */
  w32((uint32_t)(EDX + 0x24), (0x1u));
  /* 1124ab4e mov eax, 1 */
  EAX = (0x1u);
  /* 1124ab53 jmp 0x1124abac */
  goto L_1124abac;
L_1124ab55:;
  /* 1124ab55 push 1 */
  push32((uint32_t)(0x1u));
  /* 1124ab57 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124ab5a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1124ab5d push ecx */
  push32((uint32_t)(ECX));
  /* 1124ab5e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124ab61 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1124ab64 push eax */
  push32((uint32_t)(EAX));
  /* 1124ab65 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124ab68 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1124ab6b push edx */
  push32((uint32_t)(EDX));
  /* 1124ab6c push 0 */
  push32((uint32_t)(0x0u));
  /* 1124ab6e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124ab71 push eax */
  push32((uint32_t)(EAX));
  /* 1124ab72 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124ab75 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1124ab78 push edx */
  push32((uint32_t)(EDX));
  /* 1124ab79 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124ab7c push eax */
  push32((uint32_t)(EAX));
  /* 1124ab7d call 0x1124e790 */
  push32(0x1124ab82u); f_1124e790();
  /* 1124ab82 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124ab85 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124ab88 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124ab8c jne 0x1124ab9b */
  if (!C.zf) goto L_1124ab9b;
  /* 1124ab8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124ab91 push edx */
  push32((uint32_t)(EDX));
  /* 1124ab92 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124ab95 push eax */
  push32((uint32_t)(EAX));
  /* 1124ab96 call 0x1124a8e0 */
  push32(0x1124ab9bu); f_1124a8e0();
L_1124ab9b:;
  /* 1124ab9b mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124ab9e mov esp, dword ptr [ebx + 0x1c] */
  ESP = (r32((uint32_t)(EBX + 0x1c)));
  /* 1124aba1 mov ebp, dword ptr [ebx + 0x20] */
  EBP = (r32((uint32_t)(EBX + 0x20)));
  /* 1124aba4 jmp dword ptr [ebx + 0x18] */
  jmp_ind((uint32_t)(r32((uint32_t)(EBX + 0x18)))); return;
  /* 1124aba7 mov eax, 1 */
  EAX = (0x1u);
L_1124abac:;
  /* 1124abac pop edi */
  EDI = (pop32());
  /* 1124abad pop esi */
  ESI = (pop32());
  /* 1124abae pop ebx */
  EBX = (pop32());
  /* 1124abaf pop ebp */
  EBP = (pop32());
  /* 1124abb0 ret  */
  ESPCHK(0x1124ab30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000abc0 @ 0x1124abc0 (130 bytes, 57 insns) */
void f_1124abc0(void) {
  FTRACE(0x1124abc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124abc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1124abc1 mov ebp, esp */
  EBP = (ESP);
  /* 1124abc3 push ecx */
  push32((uint32_t)(ECX));
  /* 1124abc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124abc7 push ebx */
  push32((uint32_t)(EBX));
  /* 1124abc8 push esi */
  push32((uint32_t)(ESI));
  /* 1124abc9 push edi */
  push32((uint32_t)(EDI));
  /* 1124abca mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1124abcd mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 1124abd0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1124abd3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124abd6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1124abd8 mov edi, esi */
  EDI = (ESI);
  /* 1124abda mov ebx, esi */
  EBX = (ESI);
  /* 1124abdc jl 0x1124ac19 */
  if ((C.sf!=C.of)) goto L_1124ac19;
L_1124abde:;
  /* 1124abde cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124abe1 jne 0x1124abe8 */
  if (!C.zf) goto L_1124abe8;
  /* 1124abe3 call 0x1124f7a0 */
  push32(0x1124abe8u); f_1124f7a0();
L_1124abe8:;
  /* 1124abe8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124abeb dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1124abec mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124abef lea edx, [esi + esi*4] */
  EDX = ((uint32_t)(ESI + ESI*4));
  /* 1124abf2 lea eax, [eax + edx*4] */
  EAX = ((uint32_t)(EAX + EDX*4));
  /* 1124abf5 cmp dword ptr [eax + 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124abf8 jge 0x1124abff */
  if ((C.sf==C.of)) goto L_1124abff;
  /* 1124abfa cmp ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124abfd jle 0x1124ac04 */
  if ((C.zf||C.sf!=C.of)) goto L_1124ac04;
L_1124abff:;
  /* 1124abff cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124ac02 jne 0x1124ac0f */
  if (!C.zf) goto L_1124ac0f;
L_1124ac04:;
  /* 1124ac04 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124ac07 mov edi, ebx */
  EDI = (EBX);
  /* 1124ac09 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1124ac0a mov ebx, esi */
  EBX = (ESI);
  /* 1124ac0c mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_1124ac0f:;
  /* 1124ac0f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124ac12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124ac14 jge 0x1124abde */
  if ((C.sf==C.of)) goto L_1124abde;
  /* 1124ac16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1124ac19:;
  /* 1124ac19 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1124ac1c mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1124ac1f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1124ac20 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
  /* 1124ac22 mov dword ptr [edx], edi */
  w32((uint32_t)(EDX), (EDI));
  /* 1124ac24 cmp edi, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124ac27 ja 0x1124ac2d */
  if ((!C.cf&&!C.zf)) goto L_1124ac2d;
  /* 1124ac29 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124ac2b jbe 0x1124ac32 */
  if ((C.cf||C.zf)) goto L_1124ac32;
L_1124ac2d:;
  /* 1124ac2d call 0x1124f7a0 */
  push32(0x1124ac32u); f_1124f7a0();
L_1124ac32:;
  /* 1124ac32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124ac35 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 1124ac38 pop edi */
  EDI = (pop32());
  /* 1124ac39 pop esi */
  ESI = (pop32());
  /* 1124ac3a lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 1124ac3d pop ebx */
  EBX = (pop32());
  /* 1124ac3e mov esp, ebp */
  ESP = (EBP);
  /* 1124ac40 pop ebp */
  EBP = (pop32());
  /* 1124ac41 ret  */
  ESPCHK(0x1124abc0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x1124ac50 (32 bytes, 18 insns) */
void f_1124ac50(void) {
  FTRACE(0x1124ac50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124ac50 push ebp */
  push32((uint32_t)(EBP));
  /* 1124ac51 mov ebp, esp */
  EBP = (ESP);
  /* 1124ac53 push ebx */
  push32((uint32_t)(EBX));
  /* 1124ac54 push esi */
  push32((uint32_t)(ESI));
  /* 1124ac55 push edi */
  push32((uint32_t)(EDI));
  /* 1124ac56 push ebp */
  push32((uint32_t)(EBP));
  /* 1124ac57 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124ac59 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124ac5b push 0x1124ac68 */
  push32((uint32_t)(0x1124ac68u));
  /* 1124ac60 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1124ac63 call 0x11261ddc */
  push32(0x1124ac68u); f_11261ddc();
  /* 1124ac68 pop ebp */
  EBP = (pop32());
  /* 1124ac69 pop edi */
  EDI = (pop32());
  /* 1124ac6a pop esi */
  ESI = (pop32());
  /* 1124ac6b pop ebx */
  EBX = (pop32());
  /* 1124ac6c mov esp, ebp */
  ESP = (EBP);
  /* 1124ac6e pop ebp */
  EBP = (pop32());
  /* 1124ac6f ret  */
  ESPCHK(0x1124ac50u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1124ac92 (104 bytes, 33 insns) */
void f_1124ac92(void) {
  FTRACE(0x1124ac92u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124ac92 push ebx */
  push32((uint32_t)(EBX));
  /* 1124ac93 push esi */
  push32((uint32_t)(ESI));
  /* 1124ac94 push edi */
  push32((uint32_t)(EDI));
  /* 1124ac95 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1124ac99 push eax */
  push32((uint32_t)(EAX));
  /* 1124ac9a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1124ac9c push 0x1124ac70 */
  push32((uint32_t)(0x1124ac70u));
  /* 1124aca1 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 1124aca8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1124acaf:;
  /* 1124acaf mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1124acb3 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1124acb6 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 1124acb9 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124acbc je 0x1124acec */
  if (C.zf) goto L_1124acec;
  /* 1124acbe cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124acc2 je 0x1124acec */
  if (C.zf) goto L_1124acec;
  /* 1124acc4 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1124acc7 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1124acca mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1124acce mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 1124acd1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124acd6 jne 0x1124acea */
  if (!C.zf) goto L_1124acea;
  /* 1124acd8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1124acdd mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 1124ace1 call 0x1124ad26 */
  push32(0x1124ace6u); f_1124ad26();
  /* 1124ace6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1124aceau);
L_1124acea:;
  /* 1124acea jmp 0x1124acaf */
  goto L_1124acaf;
L_1124acec:;
  /* 1124acec pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1124acf3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124acf6 pop edi */
  EDI = (pop32());
  /* 1124acf7 pop esi */
  ESI = (pop32());
  /* 1124acf8 pop ebx */
  EBX = (pop32());
  /* 1124acf9 ret  */
  ESPCHK(0x1124ac92u, _esp0);
  ESP += 4; return;
}

/* __abnormal_termination @ 0x1124acfa (35 bytes, 10 insns) */
void f_1124acfa(void) {
  FTRACE(0x1124acfau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124acfa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124acfc mov ecx, dword ptr fs:[0] */
  ECX = (r32((uint32_t)(0x0)));
  /* 1124ad03 cmp dword ptr [ecx + 4], 0x1124ac70 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x1124ac70u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124ad0a jne 0x1124ad1c */
  if (!C.zf) goto L_1124ad1c;
  /* 1124ad0c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1124ad0f mov edx, dword ptr [edx + 0xc] */
  EDX = (r32((uint32_t)(EDX + 0xc)));
  /* 1124ad12 cmp dword ptr [ecx + 8], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124ad15 jne 0x1124ad1c */
  if (!C.zf) goto L_1124ad1c;
  /* 1124ad17 mov eax, 1 */
  EAX = (0x1u);
L_1124ad1c:;
  /* 1124ad1c ret  */
  ESPCHK(0x1124acfau, _esp0);
  ESP += 4; return;
}

/* __NLG_Notify1 @ 0x1124ad1d (9 bytes, 4 insns) */
void f_1124ad1d(void) {
  FTRACE(0x1124ad1du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124ad1d push ebx */
  push32((uint32_t)(EBX));
  /* 1124ad1e push ecx */
  push32((uint32_t)(ECX));
  /* 1124ad1f mov ebx, 0x1127edac */
  EBX = (0x1127edacu);
  /* 1124ad24 jmp 0x1124ad30 */
  jmp_ind(0x1124ad30u); return;
}

/* FUN_1000ad26 @ 0x1124ad26 (24 bytes, 10 insns) */
void f_1124ad26(void) {
  FTRACE(0x1124ad26u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124ad26 push ebx */
  push32((uint32_t)(EBX));
  /* 1124ad27 push ecx */
  push32((uint32_t)(ECX));
  /* 1124ad28 mov ebx, 0x1127edac */
  EBX = (0x1127edacu);
  /* 1124ad2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124ad30 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1124ad33 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1124ad36 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 1124ad39 pop ecx */
  ECX = (pop32());
  /* 1124ad3a pop ebx */
  EBX = (pop32());
  /* 1124ad3b ret 4 */
  ESPCHK(0x1124ad26u, _esp0);
  ESP += 8; return;
}

/* FUN_1000ad40 @ 0x1124ad40 (179 bytes, 53 insns) */
void f_1124ad40(void) {
  FTRACE(0x1124ad40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124ad40 push ebp */
  push32((uint32_t)(EBP));
  /* 1124ad41 mov ebp, esp */
  EBP = (ESP);
  /* 1124ad43 push ecx */
  push32((uint32_t)(ECX));
  /* 1124ad44 call 0x1124f9e0 */
  push32(0x1124ad49u); f_1124f9e0();
  /* 1124ad49 push 2 */
  push32((uint32_t)(0x2u));
  /* 1124ad4b mov eax, dword ptr [0x11282f18] */
  EAX = (r32((uint32_t)(0x11282f18)));
  /* 1124ad50 push eax */
  push32((uint32_t)(EAX));
  /* 1124ad51 call 0x1124d6f0 */
  push32(0x1124ad56u); f_1124d6f0();
  /* 1124ad56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124ad59 mov ecx, dword ptr [0x11282f14] */
  ECX = (r32((uint32_t)(0x11282f14)));
  /* 1124ad5f sub ecx, dword ptr [0x11282f18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11282f18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124ad65 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124ad68 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124ad6a jae 0x1124adcd */
  if (!C.cf) goto L_1124adcd;
  /* 1124ad6c push 0x68 */
  push32((uint32_t)(0x68u));
  /* 1124ad6e push 0x1127b310 */
  push32((uint32_t)(0x1127b310u));
  /* 1124ad73 push 2 */
  push32((uint32_t)(0x2u));
  /* 1124ad75 push 2 */
  push32((uint32_t)(0x2u));
  /* 1124ad77 mov edx, dword ptr [0x11282f18] */
  EDX = (r32((uint32_t)(0x11282f18)));
  /* 1124ad7d push edx */
  push32((uint32_t)(EDX));
  /* 1124ad7e call 0x1124d6f0 */
  push32(0x1124ad83u); f_1124d6f0();
  /* 1124ad83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124ad86 add eax, 0x10 */
  { uint32_t _a=(EAX),_b=(0x10u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124ad89 push eax */
  push32((uint32_t)(EAX));
  /* 1124ad8a mov eax, dword ptr [0x11282f18] */
  EAX = (r32((uint32_t)(0x11282f18)));
  /* 1124ad8f push eax */
  push32((uint32_t)(EAX));
  /* 1124ad90 call 0x1124ccb0 */
  push32(0x1124ad95u); f_1124ccb0();
  /* 1124ad95 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124ad98 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1124ad9b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124ad9f jne 0x1124adaa */
  if (!C.zf) goto L_1124adaa;
  /* 1124ada1 call 0x1124f9f0 */
  push32(0x1124ada6u); f_1124f9f0();
  /* 1124ada6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124ada8 jmp 0x1124adef */
  goto L_1124adef;
L_1124adaa:;
  /* 1124adaa mov ecx, dword ptr [0x11282f14] */
  ECX = (r32((uint32_t)(0x11282f14)));
  /* 1124adb0 sub ecx, dword ptr [0x11282f18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11282f18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124adb6 sar ecx, 2 */
  ECX = (sh_sar((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1124adb9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124adbc lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 1124adbf mov dword ptr [0x11282f14], eax */
  w32((uint32_t)(0x11282f14), (EAX));
  /* 1124adc4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124adc7 mov dword ptr [0x11282f18], ecx */
  w32((uint32_t)(0x11282f18), (ECX));
L_1124adcd:;
  /* 1124adcd mov edx, dword ptr [0x11282f14] */
  EDX = (r32((uint32_t)(0x11282f14)));
  /* 1124add3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124add6 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1124add8 mov ecx, dword ptr [0x11282f14] */
  ECX = (r32((uint32_t)(0x11282f14)));
  /* 1124adde add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124ade1 mov dword ptr [0x11282f14], ecx */
  w32((uint32_t)(0x11282f14), (ECX));
  /* 1124ade7 call 0x1124f9f0 */
  push32(0x1124adecu); f_1124f9f0();
  /* 1124adec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1124adef:;
  /* 1124adef mov esp, ebp */
  ESP = (EBP);
  /* 1124adf1 pop ebp */
  EBP = (pop32());
  /* 1124adf2 ret  */
  ESPCHK(0x1124ad40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ae00 @ 0x1124ae00 (24 bytes, 12 insns) */
void f_1124ae00(void) {
  FTRACE(0x1124ae00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124ae00 push ebp */
  push32((uint32_t)(EBP));
  /* 1124ae01 mov ebp, esp */
  EBP = (ESP);
  /* 1124ae03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124ae06 push eax */
  push32((uint32_t)(EAX));
  /* 1124ae07 call 0x1124ad40 */
  push32(0x1124ae0cu); f_1124ad40();
  /* 1124ae0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124ae0f neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1124ae11 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124ae13 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1124ae15 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1124ae16 pop ebp */
  EBP = (pop32());
  /* 1124ae17 ret  */
  ESPCHK(0x1124ae00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ae20 @ 0x1124ae20 (77 bytes, 20 insns) */
void f_1124ae20(void) {
  FTRACE(0x1124ae20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124ae20 push ebp */
  push32((uint32_t)(EBP));
  /* 1124ae21 mov ebp, esp */
  EBP = (ESP);
  /* 1124ae23 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 1124ae28 push 0x1127b310 */
  push32((uint32_t)(0x1127b310u));
  /* 1124ae2d push 2 */
  push32((uint32_t)(0x2u));
  /* 1124ae2f push 0x80 */
  push32((uint32_t)(0x80u));
  /* 1124ae34 call 0x1124c820 */
  push32(0x1124ae39u); f_1124c820();
  /* 1124ae39 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124ae3c mov dword ptr [0x11282f18], eax */
  w32((uint32_t)(0x11282f18), (EAX));
  /* 1124ae41 cmp dword ptr [0x11282f18], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11282f18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124ae48 jne 0x1124ae54 */
  if (!C.zf) goto L_1124ae54;
  /* 1124ae4a push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1124ae4c call 0x1124b290 */
  push32(0x1124ae51u); f_1124b290();
  /* 1124ae51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1124ae54:;
  /* 1124ae54 mov eax, dword ptr [0x11282f18] */
  EAX = (r32((uint32_t)(0x11282f18)));
  /* 1124ae59 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1124ae5f mov ecx, dword ptr [0x11282f18] */
  ECX = (r32((uint32_t)(0x11282f18)));
  /* 1124ae65 mov dword ptr [0x11282f14], ecx */
  w32((uint32_t)(0x11282f14), (ECX));
  /* 1124ae6b pop ebp */
  EBP = (pop32());
  /* 1124ae6c ret  */
  ESPCHK(0x1124ae20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ae70 @ 0x1124ae70 (16 bytes, 7 insns) */
void f_1124ae70(void) {
  FTRACE(0x1124ae70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124ae70 push ebp */
  push32((uint32_t)(EBP));
  /* 1124ae71 mov ebp, esp */
  EBP = (ESP);
  /* 1124ae73 call 0x1124f520 */
  push32(0x1124ae78u); f_1124f520();
  /* 1124ae78 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124ae7b mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 1124ae7e pop ebp */
  EBP = (pop32());
  /* 1124ae7f ret  */
  ESPCHK(0x1124ae70u, _esp0);
  ESP += 4; return;
}

/* _rand @ 0x1124ae80 (54 bytes, 18 insns) */
void f_1124ae80(void) {
  FTRACE(0x1124ae80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124ae80 push ebp */
  push32((uint32_t)(EBP));
  /* 1124ae81 mov ebp, esp */
  EBP = (ESP);
  /* 1124ae83 push ecx */
  push32((uint32_t)(ECX));
  /* 1124ae84 call 0x1124f520 */
  push32(0x1124ae89u); f_1124f520();
  /* 1124ae89 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1124ae8c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124ae8f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1124ae92 imul ecx, ecx, 0x343fd */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x343fdu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1124ae98 add ecx, 0x269ec3 */
  { uint32_t _a=(ECX),_b=(0x269ec3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124ae9e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124aea1 mov dword ptr [edx + 0x14], ecx */
  w32((uint32_t)(EDX + 0x14), (ECX));
  /* 1124aea4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124aea7 mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 1124aeaa shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1124aead and eax, 0x7fff */
  { uint32_t _r=(EAX)&(0x7fffu); EAX = (_r); fl_logic(_r,32); }
  /* 1124aeb2 mov esp, ebp */
  ESP = (EBP);
  /* 1124aeb4 pop ebp */
  EBP = (pop32());
  /* 1124aeb5 ret  */
  ESPCHK(0x1124ae80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aec0 @ 0x1124aec0 (385 bytes, 103 insns) */
void f_1124aec0(void) {
  FTRACE(0x1124aec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124aec0 push ebp */
  push32((uint32_t)(EBP));
  /* 1124aec1 mov ebp, esp */
  EBP = (ESP);
  /* 1124aec3 sub esp, 0xd8 */
  { uint32_t _a=(ESP),_b=(0xd8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124aec9 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 1124aecc push eax */
  push32((uint32_t)(EAX));
  /* 1124aecd call dword ptr [0x1128343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128343c))), 0x1124aed3u);
  /* 1124aed3 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 1124aed6 push ecx */
  push32((uint32_t)(ECX));
  /* 1124aed7 call dword ptr [0x11283438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283438))), 0x1124aeddu);
  /* 1124aedd mov edx, dword ptr [ebp - 6] */
  EDX = (r32((uint32_t)(EBP + -0x6)));
  /* 1124aee0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1124aee6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124aee8 mov ax, word ptr [0x112813f2] */
  AX = (r16((uint32_t)(0x112813f2)));
  /* 1124aeee cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124aef0 jne 0x1124af58 */
  if (!C.zf) goto L_1124af58;
  /* 1124aef2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124aef5 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1124aefb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1124aefd mov dx, word ptr [0x112813f0] */
  DX = (r16((uint32_t)(0x112813f0)));
  /* 1124af04 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124af06 jne 0x1124af58 */
  if (!C.zf) goto L_1124af58;
  /* 1124af08 mov eax, dword ptr [ebp - 0xa] */
  EAX = (r32((uint32_t)(EBP + -0xa)));
  /* 1124af0b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1124af10 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1124af12 mov cx, word ptr [0x112813ee] */
  CX = (r16((uint32_t)(0x112813ee)));
  /* 1124af19 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124af1b jne 0x1124af58 */
  if (!C.zf) goto L_1124af58;
  /* 1124af1d mov edx, dword ptr [ebp - 0xe] */
  EDX = (r32((uint32_t)(EBP + -0xe)));
  /* 1124af20 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1124af26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124af28 mov ax, word ptr [0x112813ea] */
  AX = (r16((uint32_t)(0x112813ea)));
  /* 1124af2e cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124af30 jne 0x1124af58 */
  if (!C.zf) goto L_1124af58;
  /* 1124af32 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1124af35 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1124af3b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1124af3d mov dx, word ptr [0x112813e8] */
  DX = (r16((uint32_t)(0x112813e8)));
  /* 1124af44 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124af46 jne 0x1124af58 */
  if (!C.zf) goto L_1124af58;
  /* 1124af48 mov eax, dword ptr [0x112813e0] */
  EAX = (r32((uint32_t)(0x112813e0)));
  /* 1124af4d mov dword ptr [ebp - 0xd8], eax */
  w32((uint32_t)(EBP + -0xd8), (EAX));
  /* 1124af53 jmp 0x1124afe0 */
  goto L_1124afe0;
L_1124af58:;
  /* 1124af58 lea ecx, [ebp - 0xd0] */
  ECX = ((uint32_t)(EBP + -0xd0));
  /* 1124af5e push ecx */
  push32((uint32_t)(ECX));
  /* 1124af5f call dword ptr [0x11283434] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283434))), 0x1124af65u);
  /* 1124af65 mov dword ptr [ebp - 0xd4], eax */
  w32((uint32_t)(EBP + -0xd4), (EAX));
  /* 1124af6b cmp dword ptr [ebp - 0xd4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xd4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124af72 je 0x1124afa8 */
  if (C.zf) goto L_1124afa8;
  /* 1124af74 cmp dword ptr [ebp - 0xd4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xd4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124af7b jne 0x1124af9c */
  if (!C.zf) goto L_1124af9c;
  /* 1124af7d mov edx, dword ptr [ebp - 0x36] */
  EDX = (r32((uint32_t)(EBP + -0x36)));
  /* 1124af80 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1124af86 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1124af88 je 0x1124af9c */
  if (C.zf) goto L_1124af9c;
  /* 1124af8a cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124af8e je 0x1124af9c */
  if (C.zf) goto L_1124af9c;
  /* 1124af90 mov dword ptr [ebp - 0xd8], 1 */
  w32((uint32_t)(EBP + -0xd8), (0x1u));
  /* 1124af9a jmp 0x1124afa6 */
  goto L_1124afa6;
L_1124af9c:;
  /* 1124af9c mov dword ptr [ebp - 0xd8], 0 */
  w32((uint32_t)(EBP + -0xd8), (0x0u));
L_1124afa6:;
  /* 1124afa6 jmp 0x1124afb2 */
  goto L_1124afb2;
L_1124afa8:;
  /* 1124afa8 mov dword ptr [ebp - 0xd8], 0xffffffff */
  w32((uint32_t)(EBP + -0xd8), (0xffffffffu));
L_1124afb2:;
  /* 1124afb2 mov eax, dword ptr [ebp - 0xd8] */
  EAX = (r32((uint32_t)(EBP + -0xd8)));
  /* 1124afb8 mov dword ptr [0x112813e0], eax */
  w32((uint32_t)(0x112813e0), (EAX));
  /* 1124afbd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1124afc0 mov dword ptr [0x112813e8], ecx */
  w32((uint32_t)(0x112813e8), (ECX));
  /* 1124afc6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1124afc9 mov dword ptr [0x112813ec], edx */
  w32((uint32_t)(0x112813ec), (EDX));
  /* 1124afcf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124afd2 mov dword ptr [0x112813f0], eax */
  w32((uint32_t)(0x112813f0), (EAX));
  /* 1124afd7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124afda mov dword ptr [0x112813f4], ecx */
  w32((uint32_t)(0x112813f4), (ECX));
L_1124afe0:;
  /* 1124afe0 mov edx, dword ptr [ebp - 0xd8] */
  EDX = (r32((uint32_t)(EBP + -0xd8)));
  /* 1124afe6 push edx */
  push32((uint32_t)(EDX));
  /* 1124afe7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1124afea and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1124afef push eax */
  push32((uint32_t)(EAX));
  /* 1124aff0 mov ecx, dword ptr [ebp - 0x1a] */
  ECX = (r32((uint32_t)(EBP + -0x1a)));
  /* 1124aff3 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1124aff9 push ecx */
  push32((uint32_t)(ECX));
  /* 1124affa mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1124affd and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1124b003 push edx */
  push32((uint32_t)(EDX));
  /* 1124b004 mov eax, dword ptr [ebp - 0x1e] */
  EAX = (r32((uint32_t)(EBP + -0x1e)));
  /* 1124b007 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1124b00c push eax */
  push32((uint32_t)(EAX));
  /* 1124b00d mov ecx, dword ptr [ebp - 0x22] */
  ECX = (r32((uint32_t)(EBP + -0x22)));
  /* 1124b010 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1124b016 push ecx */
  push32((uint32_t)(ECX));
  /* 1124b017 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1124b01a and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1124b020 push edx */
  push32((uint32_t)(EDX));
  /* 1124b021 call 0x1124fa30 */
  push32(0x1124b026u); f_1124fa30();
  /* 1124b026 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124b029 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1124b02c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b030 je 0x1124b03a */
  if (C.zf) goto L_1124b03a;
  /* 1124b032 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124b035 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1124b038 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_1124b03a:;
  /* 1124b03a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1124b03d mov esp, ebp */
  ESP = (EBP);
  /* 1124b03f pop ebp */
  EBP = (pop32());
  /* 1124b040 ret  */
  ESPCHK(0x1124aec0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b050 @ 0x1124b050 (313 bytes, 78 insns) */
void f_1124b050(void) {
  FTRACE(0x1124b050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124b050 push ebp */
  push32((uint32_t)(EBP));
  /* 1124b051 mov ebp, esp */
  EBP = (ESP);
  /* 1124b053 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b057 jne 0x1124b117 */
  if (!C.zf) goto L_1124b117;
  /* 1124b05d call dword ptr [0x11283444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283444))), 0x1124b063u);
  /* 1124b063 mov dword ptr [0x11281488], eax */
  w32((uint32_t)(0x11281488), (EAX));
  /* 1124b068 push 1 */
  push32((uint32_t)(0x1u));
  /* 1124b06a call 0x11250770 */
  push32(0x1124b06fu); f_11250770();
  /* 1124b06f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124b072 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124b074 jne 0x1124b07d */
  if (!C.zf) goto L_1124b07d;
  /* 1124b076 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124b078 jmp 0x1124b185 */
  goto L_1124b185;
L_1124b07d:;
  /* 1124b07d mov eax, dword ptr [0x11281488] */
  EAX = (r32((uint32_t)(0x11281488)));
  /* 1124b082 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1124b085 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1124b08a mov dword ptr [0x11281494], eax */
  w32((uint32_t)(0x11281494), (EAX));
  /* 1124b08f mov ecx, dword ptr [0x11281488] */
  ECX = (r32((uint32_t)(0x11281488)));
  /* 1124b095 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1124b09b mov dword ptr [0x11281490], ecx */
  w32((uint32_t)(0x11281490), (ECX));
  /* 1124b0a1 mov edx, dword ptr [0x11281490] */
  EDX = (r32((uint32_t)(0x11281490)));
  /* 1124b0a7 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 1124b0aa add edx, dword ptr [0x11281494] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11281494))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124b0b0 mov dword ptr [0x1128148c], edx */
  w32((uint32_t)(0x1128148c), (EDX));
  /* 1124b0b6 mov eax, dword ptr [0x11281488] */
  EAX = (r32((uint32_t)(0x11281488)));
  /* 1124b0bb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1124b0be and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1124b0c3 mov dword ptr [0x11281488], eax */
  w32((uint32_t)(0x11281488), (EAX));
  /* 1124b0c8 call 0x1124f440 */
  push32(0x1124b0cdu); f_1124f440();
  /* 1124b0cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124b0cf jne 0x1124b0dd */
  if (!C.zf) goto L_1124b0dd;
  /* 1124b0d1 call 0x112507c0 */
  push32(0x1124b0d6u); f_112507c0();
  /* 1124b0d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124b0d8 jmp 0x1124b185 */
  goto L_1124b185;
L_1124b0dd:;
  /* 1124b0dd call dword ptr [0x11283440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283440))), 0x1124b0e3u);
  /* 1124b0e3 mov dword ptr [0x11282f34], eax */
  w32((uint32_t)(0x11282f34), (EAX));
  /* 1124b0e8 call 0x11250550 */
  push32(0x1124b0edu); f_11250550();
  /* 1124b0ed mov dword ptr [0x112813fc], eax */
  w32((uint32_t)(0x112813fc), (EAX));
  /* 1124b0f2 call 0x1124fb20 */
  push32(0x1124b0f7u); f_1124fb20();
  /* 1124b0f7 call 0x11250040 */
  push32(0x1124b0fcu); f_11250040();
  /* 1124b0fc call 0x1124fef0 */
  push32(0x1124b101u); f_1124fef0();
  /* 1124b101 call 0x1124f830 */
  push32(0x1124b106u); f_1124f830();
  /* 1124b106 mov ecx, dword ptr [0x112813f8] */
  ECX = (r32((uint32_t)(0x112813f8)));
  /* 1124b10c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124b10f mov dword ptr [0x112813f8], ecx */
  w32((uint32_t)(0x112813f8), (ECX));
  /* 1124b115 jmp 0x1124b180 */
  goto L_1124b180;
L_1124b117:;
  /* 1124b117 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b11b jne 0x1124b170 */
  if (!C.zf) goto L_1124b170;
  /* 1124b11d cmp dword ptr [0x112813f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112813f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b124 jle 0x1124b16a */
  if ((C.zf||C.sf!=C.of)) goto L_1124b16a;
  /* 1124b126 mov edx, dword ptr [0x112813f8] */
  EDX = (r32((uint32_t)(0x112813f8)));
  /* 1124b12c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124b12f mov dword ptr [0x112813f8], edx */
  w32((uint32_t)(0x112813f8), (EDX));
  /* 1124b135 cmp dword ptr [0x112814c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112814c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b13c jne 0x1124b143 */
  if (!C.zf) goto L_1124b143;
  /* 1124b13e call 0x1124f8b0 */
  push32(0x1124b143u); f_1124f8b0();
L_1124b143:;
  /* 1124b143 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1124b145 call 0x1124dd30 */
  push32(0x1124b14au); f_1124dd30();
  /* 1124b14a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124b14d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1124b150 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124b152 je 0x1124b159 */
  if (C.zf) goto L_1124b159;
  /* 1124b154 call 0x1124e640 */
  push32(0x1124b159u); f_1124e640();
L_1124b159:;
  /* 1124b159 call 0x1124fe50 */
  push32(0x1124b15eu); f_1124fe50();
  /* 1124b15e call 0x1124f4d0 */
  push32(0x1124b163u); f_1124f4d0();
  /* 1124b163 call 0x112507c0 */
  push32(0x1124b168u); f_112507c0();
  /* 1124b168 jmp 0x1124b16e */
  goto L_1124b16e;
L_1124b16a:;
  /* 1124b16a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124b16c jmp 0x1124b185 */
  goto L_1124b185;
L_1124b16e:;
  /* 1124b16e jmp 0x1124b180 */
  goto L_1124b180;
L_1124b170:;
  /* 1124b170 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b174 jne 0x1124b180 */
  if (!C.zf) goto L_1124b180;
  /* 1124b176 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124b178 call 0x1124f5c0 */
  push32(0x1124b17du); f_1124f5c0();
  /* 1124b17d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1124b180:;
  /* 1124b180 mov eax, 1 */
  EAX = (0x1u);
L_1124b185:;
  /* 1124b185 pop ebp */
  EBP = (pop32());
  /* 1124b186 ret 0xc */
  ESPCHK(0x1124b050u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x1124b190 (243 bytes, 86 insns) */
void f_1124b190(void) {
  FTRACE(0x1124b190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124b190 push ebp */
  push32((uint32_t)(EBP));
  /* 1124b191 mov ebp, esp */
  EBP = (ESP);
  /* 1124b193 push ecx */
  push32((uint32_t)(ECX));
  /* 1124b194 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1124b19b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b19f jne 0x1124b1b1 */
  if (!C.zf) goto L_1124b1b1;
  /* 1124b1a1 cmp dword ptr [0x112813f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112813f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b1a8 jne 0x1124b1b1 */
  if (!C.zf) goto L_1124b1b1;
  /* 1124b1aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124b1ac jmp 0x1124b27d */
  goto L_1124b27d;
L_1124b1b1:;
  /* 1124b1b1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b1b5 je 0x1124b1bd */
  if (C.zf) goto L_1124b1bd;
  /* 1124b1b7 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b1bb jne 0x1124b1ff */
  if (!C.zf) goto L_1124b1ff;
L_1124b1bd:;
  /* 1124b1bd cmp dword ptr [0x11282f44], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11282f44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b1c4 je 0x1124b1db */
  if (C.zf) goto L_1124b1db;
  /* 1124b1c6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124b1c9 push eax */
  push32((uint32_t)(EAX));
  /* 1124b1ca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124b1cd push ecx */
  push32((uint32_t)(ECX));
  /* 1124b1ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124b1d1 push edx */
  push32((uint32_t)(EDX));
  /* 1124b1d2 call dword ptr [0x11282f44] */
  call_ind((uint32_t)(r32((uint32_t)(0x11282f44))), 0x1124b1d8u);
  /* 1124b1d8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1124b1db:;
  /* 1124b1db cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b1df je 0x1124b1f5 */
  if (C.zf) goto L_1124b1f5;
  /* 1124b1e1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124b1e4 push eax */
  push32((uint32_t)(EAX));
  /* 1124b1e5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124b1e8 push ecx */
  push32((uint32_t)(ECX));
  /* 1124b1e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124b1ec push edx */
  push32((uint32_t)(EDX));
  /* 1124b1ed call 0x1124b050 */
  push32(0x1124b1f2u); f_1124b050();
  /* 1124b1f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1124b1f5:;
  /* 1124b1f5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b1f9 jne 0x1124b1ff */
  if (!C.zf) goto L_1124b1ff;
  /* 1124b1fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124b1fd jmp 0x1124b27d */
  goto L_1124b27d;
L_1124b1ff:;
  /* 1124b1ff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124b202 push eax */
  push32((uint32_t)(EAX));
  /* 1124b203 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124b206 push ecx */
  push32((uint32_t)(ECX));
  /* 1124b207 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124b20a push edx */
  push32((uint32_t)(EDX));
  /* 1124b20b call 0x11241069 */
  push32(0x1124b210u); f_11241069();
  /* 1124b210 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1124b213 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b217 jne 0x1124b22e */
  if (!C.zf) goto L_1124b22e;
  /* 1124b219 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b21d jne 0x1124b22e */
  if (!C.zf) goto L_1124b22e;
  /* 1124b21f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124b222 push eax */
  push32((uint32_t)(EAX));
  /* 1124b223 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124b225 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124b228 push ecx */
  push32((uint32_t)(ECX));
  /* 1124b229 call 0x1124b050 */
  push32(0x1124b22eu); f_1124b050();
L_1124b22e:;
  /* 1124b22e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b232 je 0x1124b23a */
  if (C.zf) goto L_1124b23a;
  /* 1124b234 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b238 jne 0x1124b27a */
  if (!C.zf) goto L_1124b27a;
L_1124b23a:;
  /* 1124b23a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124b23d push edx */
  push32((uint32_t)(EDX));
  /* 1124b23e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124b241 push eax */
  push32((uint32_t)(EAX));
  /* 1124b242 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124b245 push ecx */
  push32((uint32_t)(ECX));
  /* 1124b246 call 0x1124b050 */
  push32(0x1124b24bu); f_1124b050();
  /* 1124b24b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124b24d jne 0x1124b256 */
  if (!C.zf) goto L_1124b256;
  /* 1124b24f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1124b256:;
  /* 1124b256 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b25a je 0x1124b27a */
  if (C.zf) goto L_1124b27a;
  /* 1124b25c cmp dword ptr [0x11282f44], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11282f44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b263 je 0x1124b27a */
  if (C.zf) goto L_1124b27a;
  /* 1124b265 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124b268 push edx */
  push32((uint32_t)(EDX));
  /* 1124b269 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124b26c push eax */
  push32((uint32_t)(EAX));
  /* 1124b26d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124b270 push ecx */
  push32((uint32_t)(ECX));
  /* 1124b271 call dword ptr [0x11282f44] */
  call_ind((uint32_t)(r32((uint32_t)(0x11282f44))), 0x1124b277u);
  /* 1124b277 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1124b27a:;
  /* 1124b27a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1124b27d:;
  /* 1124b27d mov esp, ebp */
  ESP = (EBP);
  /* 1124b27f pop ebp */
  EBP = (pop32());
  /* 1124b280 ret 0xc */
  ESPCHK(0x1124b190u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x1124b290 (58 bytes, 18 insns) */
void f_1124b290(void) {
  FTRACE(0x1124b290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124b290 push ebp */
  push32((uint32_t)(EBP));
  /* 1124b291 mov ebp, esp */
  EBP = (ESP);
  /* 1124b293 cmp dword ptr [0x11281404], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11281404))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b29a je 0x1124b2ae */
  if (C.zf) goto L_1124b2ae;
  /* 1124b29c cmp dword ptr [0x11281404], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11281404))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b2a3 jne 0x1124b2b3 */
  if (!C.zf) goto L_1124b2b3;
  /* 1124b2a5 cmp dword ptr [0x11281408], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11281408))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b2ac jne 0x1124b2b3 */
  if (!C.zf) goto L_1124b2b3;
L_1124b2ae:;
  /* 1124b2ae call 0x11250860 */
  push32(0x1124b2b3u); f_11250860();
L_1124b2b3:;
  /* 1124b2b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124b2b6 push eax */
  push32((uint32_t)(EAX));
  /* 1124b2b7 call 0x112508b0 */
  push32(0x1124b2bcu); f_112508b0();
  /* 1124b2bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124b2bf push 0xff */
  push32((uint32_t)(0xffu));
  /* 1124b2c4 call dword ptr [0x1127edbc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1127edbc))), 0x1124b2cau);
  /* 1124b2ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124b2cd pop ebp */
  EBP = (pop32());
  /* 1124b2ce ret  */
  ESPCHK(0x1124b290u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b2d0 @ 0x1124b2d0 (11 bytes, 5 insns) */
void f_1124b2d0(void) {
  FTRACE(0x1124b2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124b2d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1124b2d1 mov ebp, esp */
  EBP = (ESP);
  /* 1124b2d3 call dword ptr [0x11283448] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283448))), 0x1124b2d9u);
  /* 1124b2d9 pop ebp */
  EBP = (pop32());
  /* 1124b2da ret  */
  ESPCHK(0x1124b2d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b2e0 @ 0x1124b2e0 (87 bytes, 30 insns) */
void f_1124b2e0(void) {
  FTRACE(0x1124b2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124b2e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1124b2e1 mov ebp, esp */
  EBP = (ESP);
  /* 1124b2e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1124b2e4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b2e8 jl 0x1124b2f0 */
  if ((C.sf!=C.of)) goto L_1124b2f0;
  /* 1124b2ea cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b2ee jl 0x1124b2f5 */
  if ((C.sf!=C.of)) goto L_1124b2f5;
L_1124b2f0:;
  /* 1124b2f0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1124b2f3 jmp 0x1124b333 */
  goto L_1124b333;
L_1124b2f5:;
  /* 1124b2f5 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b2f9 jne 0x1124b307 */
  if (!C.zf) goto L_1124b307;
  /* 1124b2fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124b2fe mov eax, dword ptr [eax*4 + 0x1127edc4] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1127edc4)));
  /* 1124b305 jmp 0x1124b333 */
  goto L_1124b333;
L_1124b307:;
  /* 1124b307 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124b30a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 1124b30d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1124b30f je 0x1124b316 */
  if (C.zf) goto L_1124b316;
  /* 1124b311 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1124b314 jmp 0x1124b333 */
  goto L_1124b333;
L_1124b316:;
  /* 1124b316 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124b319 mov eax, dword ptr [edx*4 + 0x1127edc4] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1127edc4)));
  /* 1124b320 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1124b323 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124b326 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124b329 mov dword ptr [ecx*4 + 0x1127edc4], edx */
  w32((uint32_t)(ECX*4 + 0x1127edc4), (EDX));
  /* 1124b330 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1124b333:;
  /* 1124b333 mov esp, ebp */
  ESP = (EBP);
  /* 1124b335 pop ebp */
  EBP = (pop32());
  /* 1124b336 ret  */
  ESPCHK(0x1124b2e0u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x1124b340 (126 bytes, 38 insns) */
void f_1124b340(void) {
  FTRACE(0x1124b340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124b340 push ebp */
  push32((uint32_t)(EBP));
  /* 1124b341 mov ebp, esp */
  EBP = (ESP);
  /* 1124b343 push ecx */
  push32((uint32_t)(ECX));
  /* 1124b344 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b348 jl 0x1124b350 */
  if ((C.sf!=C.of)) goto L_1124b350;
  /* 1124b34a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b34e jl 0x1124b357 */
  if ((C.sf!=C.of)) goto L_1124b357;
L_1124b350:;
  /* 1124b350 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 1124b355 jmp 0x1124b3ba */
  goto L_1124b3ba;
L_1124b357:;
  /* 1124b357 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b35b jne 0x1124b369 */
  if (!C.zf) goto L_1124b369;
  /* 1124b35d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124b360 mov eax, dword ptr [eax*4 + 0x1127edd0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1127edd0)));
  /* 1124b367 jmp 0x1124b3ba */
  goto L_1124b3ba;
L_1124b369:;
  /* 1124b369 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124b36c mov edx, dword ptr [ecx*4 + 0x1127edd0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1127edd0)));
  /* 1124b373 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1124b376 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b37a jne 0x1124b390 */
  if (!C.zf) goto L_1124b390;
  /* 1124b37c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1124b37e call dword ptr [0x11283334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283334))), 0x1124b384u);
  /* 1124b384 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124b387 mov dword ptr [ecx*4 + 0x1127edd0], eax */
  w32((uint32_t)(ECX*4 + 0x1127edd0), (EAX));
  /* 1124b38e jmp 0x1124b3b7 */
  goto L_1124b3b7;
L_1124b390:;
  /* 1124b390 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b394 jne 0x1124b3aa */
  if (!C.zf) goto L_1124b3aa;
  /* 1124b396 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1124b398 call dword ptr [0x11283334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283334))), 0x1124b39eu);
  /* 1124b39e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124b3a1 mov dword ptr [edx*4 + 0x1127edd0], eax */
  w32((uint32_t)(EDX*4 + 0x1127edd0), (EAX));
  /* 1124b3a8 jmp 0x1124b3b7 */
  goto L_1124b3b7;
L_1124b3aa:;
  /* 1124b3aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124b3ad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124b3b0 mov dword ptr [eax*4 + 0x1127edd0], ecx */
  w32((uint32_t)(EAX*4 + 0x1127edd0), (ECX));
L_1124b3b7:;
  /* 1124b3b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1124b3ba:;
  /* 1124b3ba mov esp, ebp */
  ESP = (EBP);
  /* 1124b3bc pop ebp */
  EBP = (pop32());
  /* 1124b3bd ret  */
  ESPCHK(0x1124b340u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b3c0 @ 0x1124b3c0 (28 bytes, 11 insns) */
void f_1124b3c0(void) {
  FTRACE(0x1124b3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124b3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1124b3c1 mov ebp, esp */
  EBP = (ESP);
  /* 1124b3c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1124b3c4 mov eax, dword ptr [0x11282f28] */
  EAX = (r32((uint32_t)(0x11282f28)));
  /* 1124b3c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1124b3cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124b3cf mov dword ptr [0x11282f28], ecx */
  w32((uint32_t)(0x11282f28), (ECX));
  /* 1124b3d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124b3d8 mov esp, ebp */
  ESP = (EBP);
  /* 1124b3da pop ebp */
  EBP = (pop32());
  /* 1124b3db ret  */
  ESPCHK(0x1124b3c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b3e0 @ 0x1124b3e0 (912 bytes, 248 insns) */
void f_1124b3e0(void) {
  FTRACE(0x1124b3e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124b3e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1124b3e1 mov ebp, esp */
  EBP = (ESP);
  /* 1124b3e3 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 1124b3e8 call 0x11251120 */
  push32(0x1124b3edu); f_11251120();
  /* 1124b3ed push edi */
  push32((uint32_t)(EDI));
  /* 1124b3ee mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 1124b3f5 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 1124b3fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124b3fc lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 1124b402 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1124b404 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 1124b406 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1124b407 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 1124b40e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 1124b413 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124b415 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 1124b41b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1124b41d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 1124b41f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1124b420 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 1124b427 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 1124b42c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124b42e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 1124b434 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1124b436 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 1124b438 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1124b439 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 1124b43c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 1124b442 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b446 jl 0x1124b44e */
  if ((C.sf!=C.of)) goto L_1124b44e;
  /* 1124b448 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b44c jl 0x1124b456 */
  if ((C.sf!=C.of)) goto L_1124b456;
L_1124b44e:;
  /* 1124b44e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1124b451 jmp 0x1124b76b */
  goto L_1124b76b;
L_1124b456:;
  /* 1124b456 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b45a jne 0x1124b500 */
  if (!C.zf) goto L_1124b500;
  /* 1124b460 push 0x1127edc0 */
  push32((uint32_t)(0x1127edc0u));
  /* 1124b465 call dword ptr [0x11283460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283460))), 0x1124b46bu);
  /* 1124b46b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124b46d jle 0x1124b500 */
  if ((C.zf||C.sf!=C.of)) goto L_1124b500;
  /* 1124b473 cmp dword ptr [0x1128140c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1128140c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b47a jne 0x1124b4be */
  if (!C.zf) goto L_1124b4be;
  /* 1124b47c push 0x1127b3e8 */
  push32((uint32_t)(0x1127b3e8u));
  /* 1124b481 call dword ptr [0x1128345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128345c))), 0x1124b487u);
  /* 1124b487 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 1124b48d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b494 je 0x1124b4b6 */
  if (C.zf) goto L_1124b4b6;
  /* 1124b496 push 0x1127b3dc */
  push32((uint32_t)(0x1127b3dcu));
  /* 1124b49b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 1124b4a1 push ecx */
  push32((uint32_t)(ECX));
  /* 1124b4a2 call dword ptr [0x1128344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128344c))), 0x1124b4a8u);
  /* 1124b4a8 mov dword ptr [0x1128140c], eax */
  w32((uint32_t)(0x1128140c), (EAX));
  /* 1124b4ad cmp dword ptr [0x1128140c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1128140c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b4b4 jne 0x1124b4be */
  if (!C.zf) goto L_1124b4be;
L_1124b4b6:;
  /* 1124b4b6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1124b4b9 jmp 0x1124b76b */
  goto L_1124b76b;
L_1124b4be:;
  /* 1124b4be mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124b4c1 push edx */
  push32((uint32_t)(EDX));
  /* 1124b4c2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124b4c5 push eax */
  push32((uint32_t)(EAX));
  /* 1124b4c6 push 0x1127b3a8 */
  push32((uint32_t)(0x1127b3a8u));
  /* 1124b4cb lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 1124b4d1 push ecx */
  push32((uint32_t)(ECX));
  /* 1124b4d2 call dword ptr [0x1128140c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128140c))), 0x1124b4d8u);
  /* 1124b4d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124b4db lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 1124b4e1 push edx */
  push32((uint32_t)(EDX));
  /* 1124b4e2 call dword ptr [0x11283458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283458))), 0x1124b4e8u);
  /* 1124b4e8 push 0x1127edc0 */
  push32((uint32_t)(0x1127edc0u));
  /* 1124b4ed call dword ptr [0x11283454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283454))), 0x1124b4f3u);
  /* 1124b4f3 call 0x1124b2d0 */
  push32(0x1124b4f8u); f_1124b2d0();
  /* 1124b4f8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1124b4fb jmp 0x1124b76b */
  goto L_1124b76b;
L_1124b500:;
  /* 1124b500 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b504 je 0x1124b53d */
  if (C.zf) goto L_1124b53d;
  /* 1124b506 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 1124b50c push eax */
  push32((uint32_t)(EAX));
  /* 1124b50d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1124b510 push ecx */
  push32((uint32_t)(ECX));
  /* 1124b511 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 1124b516 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 1124b51c push edx */
  push32((uint32_t)(EDX));
  /* 1124b51d call 0x11251020 */
  push32(0x1124b522u); f_11251020();
  /* 1124b522 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124b525 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124b527 jge 0x1124b53d */
  if ((C.sf==C.of)) goto L_1124b53d;
  /* 1124b529 push 0x1127b37c */
  push32((uint32_t)(0x1127b37cu));
  /* 1124b52e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 1124b534 push eax */
  push32((uint32_t)(EAX));
  /* 1124b535 call 0x11250f30 */
  push32(0x1124b53au); f_11250f30();
  /* 1124b53a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1124b53d:;
  /* 1124b53d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b541 jne 0x1124b575 */
  if (!C.zf) goto L_1124b575;
  /* 1124b543 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b547 je 0x1124b555 */
  if (C.zf) goto L_1124b555;
  /* 1124b549 mov dword ptr [ebp - 0x3028], 0x1127b368 */
  w32((uint32_t)(EBP + -0x3028), (0x1127b368u));
  /* 1124b553 jmp 0x1124b55f */
  goto L_1124b55f;
L_1124b555:;
  /* 1124b555 mov dword ptr [ebp - 0x3028], 0x1127b354 */
  w32((uint32_t)(EBP + -0x3028), (0x1127b354u));
L_1124b55f:;
  /* 1124b55f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 1124b565 push ecx */
  push32((uint32_t)(ECX));
  /* 1124b566 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 1124b56c push edx */
  push32((uint32_t)(EDX));
  /* 1124b56d call 0x11250f30 */
  push32(0x1124b572u); f_11250f30();
  /* 1124b572 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1124b575:;
  /* 1124b575 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 1124b57b push eax */
  push32((uint32_t)(EAX));
  /* 1124b57c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 1124b582 push ecx */
  push32((uint32_t)(ECX));
  /* 1124b583 call 0x11250f40 */
  push32(0x1124b588u); f_11250f40();
  /* 1124b588 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124b58b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b58f jne 0x1124b5ca */
  if (!C.zf) goto L_1124b5ca;
  /* 1124b591 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124b594 mov eax, dword ptr [edx*4 + 0x1127edc4] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1127edc4)));
  /* 1124b59b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1124b59e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124b5a0 je 0x1124b5b6 */
  if (C.zf) goto L_1124b5b6;
  /* 1124b5a2 push 0x1127b350 */
  push32((uint32_t)(0x1127b350u));
  /* 1124b5a7 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 1124b5ad push ecx */
  push32((uint32_t)(ECX));
  /* 1124b5ae call 0x11250f40 */
  push32(0x1124b5b3u); f_11250f40();
  /* 1124b5b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1124b5b6:;
  /* 1124b5b6 push 0x1127b34c */
  push32((uint32_t)(0x1127b34cu));
  /* 1124b5bb lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 1124b5c1 push edx */
  push32((uint32_t)(EDX));
  /* 1124b5c2 call 0x11250f40 */
  push32(0x1124b5c7u); f_11250f40();
  /* 1124b5c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1124b5ca:;
  /* 1124b5ca cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b5ce je 0x1124b612 */
  if (C.zf) goto L_1124b612;
  /* 1124b5d0 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 1124b5d6 push eax */
  push32((uint32_t)(EAX));
  /* 1124b5d7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124b5da push ecx */
  push32((uint32_t)(ECX));
  /* 1124b5db mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124b5de push edx */
  push32((uint32_t)(EDX));
  /* 1124b5df push 0x1127b340 */
  push32((uint32_t)(0x1127b340u));
  /* 1124b5e4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1124b5e9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 1124b5ef push eax */
  push32((uint32_t)(EAX));
  /* 1124b5f0 call 0x11250e30 */
  push32(0x1124b5f5u); f_11250e30();
  /* 1124b5f5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124b5f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124b5fa jge 0x1124b610 */
  if ((C.sf==C.of)) goto L_1124b610;
  /* 1124b5fc push 0x1127b37c */
  push32((uint32_t)(0x1127b37cu));
  /* 1124b601 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 1124b607 push ecx */
  push32((uint32_t)(ECX));
  /* 1124b608 call 0x11250f30 */
  push32(0x1124b60du); f_11250f30();
  /* 1124b60d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1124b610:;
  /* 1124b610 jmp 0x1124b628 */
  goto L_1124b628;
L_1124b612:;
  /* 1124b612 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 1124b618 push edx */
  push32((uint32_t)(EDX));
  /* 1124b619 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 1124b61f push eax */
  push32((uint32_t)(EAX));
  /* 1124b620 call 0x11250f30 */
  push32(0x1124b625u); f_11250f30();
  /* 1124b625 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1124b628:;
  /* 1124b628 cmp dword ptr [0x11282f28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11282f28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b62f je 0x1124b66c */
  if (C.zf) goto L_1124b66c;
  /* 1124b631 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 1124b637 push ecx */
  push32((uint32_t)(ECX));
  /* 1124b638 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 1124b63e push edx */
  push32((uint32_t)(EDX));
  /* 1124b63f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124b642 push eax */
  push32((uint32_t)(EAX));
  /* 1124b643 call dword ptr [0x11282f28] */
  call_ind((uint32_t)(r32((uint32_t)(0x11282f28))), 0x1124b649u);
  /* 1124b649 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124b64c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124b64e je 0x1124b66c */
  if (C.zf) goto L_1124b66c;
  /* 1124b650 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b654 jne 0x1124b661 */
  if (!C.zf) goto L_1124b661;
  /* 1124b656 push 0x1127edc0 */
  push32((uint32_t)(0x1127edc0u));
  /* 1124b65b call dword ptr [0x11283454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283454))), 0x1124b661u);
L_1124b661:;
  /* 1124b661 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 1124b667 jmp 0x1124b76b */
  goto L_1124b76b;
L_1124b66c:;
  /* 1124b66c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124b66f mov edx, dword ptr [ecx*4 + 0x1127edc4] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1127edc4)));
  /* 1124b676 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1124b679 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1124b67b je 0x1124b6bb */
  if (C.zf) goto L_1124b6bb;
  /* 1124b67d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124b680 cmp dword ptr [eax*4 + 0x1127edd0], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1127edd0))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b688 je 0x1124b6bb */
  if (C.zf) goto L_1124b6bb;
  /* 1124b68a push 0 */
  push32((uint32_t)(0x0u));
  /* 1124b68c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 1124b692 push ecx */
  push32((uint32_t)(ECX));
  /* 1124b693 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 1124b699 push edx */
  push32((uint32_t)(EDX));
  /* 1124b69a call 0x11250db0 */
  push32(0x1124b69fu); f_11250db0();
  /* 1124b69f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124b6a2 push eax */
  push32((uint32_t)(EAX));
  /* 1124b6a3 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 1124b6a9 push eax */
  push32((uint32_t)(EAX));
  /* 1124b6aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124b6ad mov edx, dword ptr [ecx*4 + 0x1127edd0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1127edd0)));
  /* 1124b6b4 push edx */
  push32((uint32_t)(EDX));
  /* 1124b6b5 call dword ptr [0x11283338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283338))), 0x1124b6bbu);
L_1124b6bb:;
  /* 1124b6bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124b6be mov ecx, dword ptr [eax*4 + 0x1127edc4] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1127edc4)));
  /* 1124b6c5 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1124b6c8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1124b6ca je 0x1124b6d9 */
  if (C.zf) goto L_1124b6d9;
  /* 1124b6cc lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 1124b6d2 push edx */
  push32((uint32_t)(EDX));
  /* 1124b6d3 call dword ptr [0x11283458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283458))), 0x1124b6d9u);
L_1124b6d9:;
  /* 1124b6d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124b6dc mov ecx, dword ptr [eax*4 + 0x1127edc4] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1127edc4)));
  /* 1124b6e3 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1124b6e6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1124b6e8 je 0x1124b758 */
  if (C.zf) goto L_1124b758;
  /* 1124b6ea cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b6ee je 0x1124b70d */
  if (C.zf) goto L_1124b70d;
  /* 1124b6f0 push 0xa */
  push32((uint32_t)(0xau));
  /* 1124b6f2 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 1124b6f8 push edx */
  push32((uint32_t)(EDX));
  /* 1124b6f9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124b6fc push eax */
  push32((uint32_t)(EAX));
  /* 1124b6fd call 0x11250ac0 */
  push32(0x1124b702u); f_11250ac0();
  /* 1124b702 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124b705 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 1124b70b jmp 0x1124b717 */
  goto L_1124b717;
L_1124b70d:;
  /* 1124b70d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_1124b717:;
  /* 1124b717 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 1124b71d push ecx */
  push32((uint32_t)(ECX));
  /* 1124b71e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1124b721 push edx */
  push32((uint32_t)(EDX));
  /* 1124b722 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 1124b728 push eax */
  push32((uint32_t)(EAX));
  /* 1124b729 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124b72c push ecx */
  push32((uint32_t)(ECX));
  /* 1124b72d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124b730 push edx */
  push32((uint32_t)(EDX));
  /* 1124b731 call 0x1124b770 */
  push32(0x1124b736u); f_1124b770();
  /* 1124b736 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124b739 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 1124b73f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b743 jne 0x1124b750 */
  if (!C.zf) goto L_1124b750;
  /* 1124b745 push 0x1127edc0 */
  push32((uint32_t)(0x1127edc0u));
  /* 1124b74a call dword ptr [0x11283454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283454))), 0x1124b750u);
L_1124b750:;
  /* 1124b750 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 1124b756 jmp 0x1124b76b */
  goto L_1124b76b;
L_1124b758:;
  /* 1124b758 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b75c jne 0x1124b769 */
  if (!C.zf) goto L_1124b769;
  /* 1124b75e push 0x1127edc0 */
  push32((uint32_t)(0x1127edc0u));
  /* 1124b763 call dword ptr [0x11283454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283454))), 0x1124b769u);
L_1124b769:;
  /* 1124b769 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1124b76b:;
  /* 1124b76b pop edi */
  EDI = (pop32());
  /* 1124b76c mov esp, ebp */
  ESP = (EBP);
  /* 1124b76e pop ebp */
  EBP = (pop32());
  /* 1124b76f ret  */
  ESPCHK(0x1124b3e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b770 @ 0x1124b770 (780 bytes, 197 insns) */
void f_1124b770(void) {
  FTRACE(0x1124b770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124b770 push ebp */
  push32((uint32_t)(EBP));
  /* 1124b771 mov ebp, esp */
  EBP = (ESP);
  /* 1124b773 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 1124b778 call 0x11251120 */
  push32(0x1124b77du); f_11251120();
L_1124b77d:;
  /* 1124b77d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b781 jne 0x1124b7a8 */
  if (!C.zf) goto L_1124b7a8;
  /* 1124b783 push 0x1127b538 */
  push32((uint32_t)(0x1127b538u));
  /* 1124b788 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124b78a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 1124b78f push 0x1127b52c */
  push32((uint32_t)(0x1127b52cu));
  /* 1124b794 push 2 */
  push32((uint32_t)(0x2u));
  /* 1124b796 call 0x1124b3e0 */
  push32(0x1124b79bu); f_1124b3e0();
  /* 1124b79b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124b79e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b7a1 jne 0x1124b7a8 */
  if (!C.zf) goto L_1124b7a8;
  /* 1124b7a3 call 0x1124b2d0 */
  push32(0x1124b7a8u); f_1124b2d0();
L_1124b7a8:;
  /* 1124b7a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124b7aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124b7ac jne 0x1124b77d */
  if (!C.zf) goto L_1124b77d;
  /* 1124b7ae push 0x104 */
  push32((uint32_t)(0x104u));
  /* 1124b7b3 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 1124b7b9 push ecx */
  push32((uint32_t)(ECX));
  /* 1124b7ba push 0 */
  push32((uint32_t)(0x0u));
  /* 1124b7bc call dword ptr [0x11283464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283464))), 0x1124b7c2u);
  /* 1124b7c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124b7c4 jne 0x1124b7da */
  if (!C.zf) goto L_1124b7da;
  /* 1124b7c6 push 0x1127b514 */
  push32((uint32_t)(0x1127b514u));
  /* 1124b7cb lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 1124b7d1 push edx */
  push32((uint32_t)(EDX));
  /* 1124b7d2 call 0x11250f30 */
  push32(0x1124b7d7u); f_11250f30();
  /* 1124b7d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1124b7da:;
  /* 1124b7da lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 1124b7e0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1124b7e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124b7e6 push ecx */
  push32((uint32_t)(ECX));
  /* 1124b7e7 call 0x11250db0 */
  push32(0x1124b7ecu); f_11250db0();
  /* 1124b7ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124b7ef cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b7f2 jbe 0x1124b81d */
  if ((C.cf||C.zf)) goto L_1124b81d;
  /* 1124b7f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124b7f7 push edx */
  push32((uint32_t)(EDX));
  /* 1124b7f8 call 0x11250db0 */
  push32(0x1124b7fdu); f_11250db0();
  /* 1124b7fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124b800 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124b803 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 1124b807 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1124b80a push 3 */
  push32((uint32_t)(0x3u));
  /* 1124b80c push 0x1127b510 */
  push32((uint32_t)(0x1127b510u));
  /* 1124b811 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124b814 push eax */
  push32((uint32_t)(EAX));
  /* 1124b815 call 0x112517a0 */
  push32(0x1124b81au); f_112517a0();
  /* 1124b81a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1124b81d:;
  /* 1124b81d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1124b820 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 1124b826 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b82d je 0x1124b878 */
  if (C.zf) goto L_1124b878;
  /* 1124b82f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 1124b835 push edx */
  push32((uint32_t)(EDX));
  /* 1124b836 call 0x11250db0 */
  push32(0x1124b83bu); f_11250db0();
  /* 1124b83b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124b83e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b841 jbe 0x1124b878 */
  if ((C.cf||C.zf)) goto L_1124b878;
  /* 1124b843 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 1124b849 push eax */
  push32((uint32_t)(EAX));
  /* 1124b84a call 0x11250db0 */
  push32(0x1124b84fu); f_11250db0();
  /* 1124b84f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124b852 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 1124b858 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 1124b85c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 1124b862 push 3 */
  push32((uint32_t)(0x3u));
  /* 1124b864 push 0x1127b510 */
  push32((uint32_t)(0x1127b510u));
  /* 1124b869 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 1124b86f push eax */
  push32((uint32_t)(EAX));
  /* 1124b870 call 0x112517a0 */
  push32(0x1124b875u); f_112517a0();
  /* 1124b875 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1124b878:;
  /* 1124b878 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b87c jne 0x1124b88a */
  if (!C.zf) goto L_1124b88a;
  /* 1124b87e mov dword ptr [ebp - 0x1114], 0x1127b49c */
  w32((uint32_t)(EBP + -0x1114), (0x1127b49cu));
  /* 1124b888 jmp 0x1124b894 */
  goto L_1124b894;
L_1124b88a:;
  /* 1124b88a mov dword ptr [ebp - 0x1114], 0x1127b1fc */
  w32((uint32_t)(EBP + -0x1114), (0x1127b1fcu));
L_1124b894:;
  /* 1124b894 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1124b897 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1124b89a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1124b89c je 0x1124b8a9 */
  if (C.zf) goto L_1124b8a9;
  /* 1124b89e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1124b8a1 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 1124b8a7 jmp 0x1124b8b3 */
  goto L_1124b8b3;
L_1124b8a9:;
  /* 1124b8a9 mov dword ptr [ebp - 0x1118], 0x1127b1fc */
  w32((uint32_t)(EBP + -0x1118), (0x1127b1fcu));
L_1124b8b3:;
  /* 1124b8b3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1124b8b6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1124b8b9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1124b8bb je 0x1124b8cf */
  if (C.zf) goto L_1124b8cf;
  /* 1124b8bd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b8c1 jne 0x1124b8cf */
  if (!C.zf) goto L_1124b8cf;
  /* 1124b8c3 mov dword ptr [ebp - 0x111c], 0x1127b48c */
  w32((uint32_t)(EBP + -0x111c), (0x1127b48cu));
  /* 1124b8cd jmp 0x1124b8d9 */
  goto L_1124b8d9;
L_1124b8cf:;
  /* 1124b8cf mov dword ptr [ebp - 0x111c], 0x1127b1fc */
  w32((uint32_t)(EBP + -0x111c), (0x1127b1fcu));
L_1124b8d9:;
  /* 1124b8d9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1124b8dc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1124b8df test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1124b8e1 je 0x1124b8ef */
  if (C.zf) goto L_1124b8ef;
  /* 1124b8e3 mov dword ptr [ebp - 0x1120], 0x1127b488 */
  w32((uint32_t)(EBP + -0x1120), (0x1127b488u));
  /* 1124b8ed jmp 0x1124b8f9 */
  goto L_1124b8f9;
L_1124b8ef:;
  /* 1124b8ef mov dword ptr [ebp - 0x1120], 0x1127b1fc */
  w32((uint32_t)(EBP + -0x1120), (0x1127b1fcu));
L_1124b8f9:;
  /* 1124b8f9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b8fd je 0x1124b90a */
  if (C.zf) goto L_1124b90a;
  /* 1124b8ff mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124b902 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 1124b908 jmp 0x1124b914 */
  goto L_1124b914;
L_1124b90a:;
  /* 1124b90a mov dword ptr [ebp - 0x1124], 0x1127b1fc */
  w32((uint32_t)(EBP + -0x1124), (0x1127b1fcu));
L_1124b914:;
  /* 1124b914 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b918 je 0x1124b926 */
  if (C.zf) goto L_1124b926;
  /* 1124b91a mov dword ptr [ebp - 0x1128], 0x1127b480 */
  w32((uint32_t)(EBP + -0x1128), (0x1127b480u));
  /* 1124b924 jmp 0x1124b930 */
  goto L_1124b930;
L_1124b926:;
  /* 1124b926 mov dword ptr [ebp - 0x1128], 0x1127b1fc */
  w32((uint32_t)(EBP + -0x1128), (0x1127b1fcu));
L_1124b930:;
  /* 1124b930 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b934 je 0x1124b941 */
  if (C.zf) goto L_1124b941;
  /* 1124b936 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124b939 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 1124b93f jmp 0x1124b94b */
  goto L_1124b94b;
L_1124b941:;
  /* 1124b941 mov dword ptr [ebp - 0x112c], 0x1127b1fc */
  w32((uint32_t)(EBP + -0x112c), (0x1127b1fcu));
L_1124b94b:;
  /* 1124b94b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b94f je 0x1124b95d */
  if (C.zf) goto L_1124b95d;
  /* 1124b951 mov dword ptr [ebp - 0x1130], 0x1127b478 */
  w32((uint32_t)(EBP + -0x1130), (0x1127b478u));
  /* 1124b95b jmp 0x1124b967 */
  goto L_1124b967;
L_1124b95d:;
  /* 1124b95d mov dword ptr [ebp - 0x1130], 0x1127b1fc */
  w32((uint32_t)(EBP + -0x1130), (0x1127b1fcu));
L_1124b967:;
  /* 1124b967 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b96e je 0x1124b97e */
  if (C.zf) goto L_1124b97e;
  /* 1124b970 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 1124b976 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 1124b97c jmp 0x1124b988 */
  goto L_1124b988;
L_1124b97e:;
  /* 1124b97e mov dword ptr [ebp - 0x1134], 0x1127b1fc */
  w32((uint32_t)(EBP + -0x1134), (0x1127b1fcu));
L_1124b988:;
  /* 1124b988 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124b98f je 0x1124b99d */
  if (C.zf) goto L_1124b99d;
  /* 1124b991 mov dword ptr [ebp - 0x1138], 0x1127b46c */
  w32((uint32_t)(EBP + -0x1138), (0x1127b46cu));
  /* 1124b99b jmp 0x1124b9a7 */
  goto L_1124b9a7;
L_1124b99d:;
  /* 1124b99d mov dword ptr [ebp - 0x1138], 0x1127b1fc */
  w32((uint32_t)(EBP + -0x1138), (0x1127b1fcu));
L_1124b9a7:;
  /* 1124b9a7 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 1124b9ad push edx */
  push32((uint32_t)(EDX));
  /* 1124b9ae mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 1124b9b4 push eax */
  push32((uint32_t)(EAX));
  /* 1124b9b5 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 1124b9bb push ecx */
  push32((uint32_t)(ECX));
  /* 1124b9bc mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 1124b9c2 push edx */
  push32((uint32_t)(EDX));
  /* 1124b9c3 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 1124b9c9 push eax */
  push32((uint32_t)(EAX));
  /* 1124b9ca mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 1124b9d0 push ecx */
  push32((uint32_t)(ECX));
  /* 1124b9d1 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 1124b9d7 push edx */
  push32((uint32_t)(EDX));
  /* 1124b9d8 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 1124b9de push eax */
  push32((uint32_t)(EAX));
  /* 1124b9df mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 1124b9e5 push ecx */
  push32((uint32_t)(ECX));
  /* 1124b9e6 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 1124b9ec push edx */
  push32((uint32_t)(EDX));
  /* 1124b9ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124b9f0 push eax */
  push32((uint32_t)(EAX));
  /* 1124b9f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124b9f4 mov edx, dword ptr [ecx*4 + 0x1127eddc] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1127eddc)));
  /* 1124b9fb push edx */
  push32((uint32_t)(EDX));
  /* 1124b9fc push 0x1127b418 */
  push32((uint32_t)(0x1127b418u));
  /* 1124ba01 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1124ba06 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 1124ba0c push eax */
  push32((uint32_t)(EAX));
  /* 1124ba0d call 0x11250e30 */
  push32(0x1124ba12u); f_11250e30();
  /* 1124ba12 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124ba15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124ba17 jge 0x1124ba2d */
  if ((C.sf==C.of)) goto L_1124ba2d;
  /* 1124ba19 push 0x1127b37c */
  push32((uint32_t)(0x1127b37cu));
  /* 1124ba1e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 1124ba24 push ecx */
  push32((uint32_t)(ECX));
  /* 1124ba25 call 0x11250f30 */
  push32(0x1124ba2au); f_11250f30();
  /* 1124ba2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1124ba2d:;
  /* 1124ba2d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 1124ba32 push 0x1127b3f4 */
  push32((uint32_t)(0x1127b3f4u));
  /* 1124ba37 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 1124ba3d push edx */
  push32((uint32_t)(EDX));
  /* 1124ba3e call 0x112516e0 */
  push32(0x1124ba43u); f_112516e0();
  /* 1124ba43 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124ba46 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 1124ba4c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124ba53 jne 0x1124ba66 */
  if (!C.zf) goto L_1124ba66;
  /* 1124ba55 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1124ba57 call 0x11251420 */
  push32(0x1124ba5cu); f_11251420();
  /* 1124ba5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124ba5f push 3 */
  push32((uint32_t)(0x3u));
  /* 1124ba61 call 0x1124f890 */
  push32(0x1124ba66u); f_1124f890();
L_1124ba66:;
  /* 1124ba66 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124ba6d jne 0x1124ba76 */
  if (!C.zf) goto L_1124ba76;
  /* 1124ba6f mov eax, 1 */
  EAX = (0x1u);
  /* 1124ba74 jmp 0x1124ba78 */
  goto L_1124ba78;
L_1124ba76:;
  /* 1124ba76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1124ba78:;
  /* 1124ba78 mov esp, ebp */
  ESP = (EBP);
  /* 1124ba7a pop ebp */
  EBP = (pop32());
  /* 1124ba7b ret  */
  ESPCHK(0x1124b770u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc7c @ 0x1124bc7c (25 bytes, 7 insns) */
void f_1124bc7c(void) {
  FTRACE(0x1124bc7cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124bc7c test eax, 0x80000 */
  { uint32_t _r=(EAX)&(0x80000u); fl_logic(_r,32); }
  /* 1124bc81 je 0x1124bc89 */
  if (C.zf) goto L_1124bc89;
  /* 1124bc83 mov eax, 7 */
  EAX = (0x7u);
  /* 1124bc88 ret  */
  ESPCHK(0x1124bc7cu, _esp0);
  ESP += 4; return;
L_1124bc89:;
  /* 1124bc89 fadd qword ptr [0x1127b550] */
  FPU_ST(0) = FPU_ST(0) + (rf64((uint32_t)(0x1127b550)));
  /* 1124bc8f mov eax, 1 */
  EAX = (0x1u);
  /* 1124bc94 ret  */
  ESPCHK(0x1124bc7cu, _esp0);
  ESP += 4; return;
}

/* __fload_withFB @ 0x1124bc95 (67 bytes, 21 insns) */
void f_1124bc95(void) {
  FTRACE(0x1124bc95u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124bc95 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1124bc98 and eax, 0x7ff00000 */
  { uint32_t _r=(EAX)&(0x7ff00000u); EAX = (_r); fl_logic(_r,32); }
  /* 1124bc9d cmp eax, 0x7ff00000 */
  { uint32_t _a=(EAX),_b=(0x7ff00000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124bca2 je 0x1124bca7 */
  if (C.zf) goto L_1124bca7;
  /* 1124bca4 fld qword ptr [edx] */
  fpu_push(rf64((uint32_t)(EDX)));
  /* 1124bca6 ret  */
  ESPCHK(0x1124bc95u, _esp0);
  ESP += 4; return;
L_1124bca7:;
  /* 1124bca7 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1124bcaa sub esp, 0xa */
  { uint32_t _a=(ESP),_b=(0xau),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124bcad or eax, 0x7fff0000 */
  { uint32_t _r=(EAX)|(0x7fff0000u); EAX = (_r); fl_logic(_r,32); }
  /* 1124bcb2 mov dword ptr [esp + 6], eax */
  w32((uint32_t)(ESP + 0x6), (EAX));
  /* 1124bcb6 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1124bcb9 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1124bcbb shld eax, ecx, 0xb */
  EAX = (sh_shld((uint32_t)(EAX),(uint32_t)(ECX),(0xbu)&0x1f,32));
  /* 1124bcbf shl ecx, 0xb */
  ECX = (sh_shl((uint32_t)(ECX), (0xbu)&0x1f, 32));
  /* 1124bcc2 mov dword ptr [esp + 4], eax */
  w32((uint32_t)(ESP + 0x4), (EAX));
  /* 1124bcc6 mov dword ptr [esp], ecx */
  w32((uint32_t)(ESP), (ECX));
  /* 1124bcc9 fld xword ptr [esp] */
  fpu_push(rf80((uint32_t)(ESP)));
  /* 1124bccc add esp, 0xa */
  { uint32_t _a=(ESP),_b=(0xau),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124bccf test eax, 0 */
  { uint32_t _r=(EAX)&(0x0u); fl_logic(_r,32); }
  /* 1124bcd4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1124bcd7 ret  */
  ESPCHK(0x1124bc95u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bcd8 @ 0x1124bcd8 (22 bytes, 7 insns) */
void f_1124bcd8(void) {
  FTRACE(0x1124bcd8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124bcd8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1124bcdc and eax, 0x7ff00000 */
  { uint32_t _r=(EAX)&(0x7ff00000u); EAX = (_r); fl_logic(_r,32); }
  /* 1124bce1 cmp eax, 0x7ff00000 */
  { uint32_t _a=(EAX),_b=(0x7ff00000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124bce6 je 0x1124bce9 */
  if (C.zf) goto L_1124bce9;
  /* 1124bce8 ret  */
  ESPCHK(0x1124bcd8u, _esp0);
  ESP += 4; return;
L_1124bce9:;
  /* 1124bce9 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1124bced ret  */
  ESPCHK(0x1124bcd8u, _esp0);
  ESP += 4; return;
}

/* __math_exit @ 0x1124bcfb (42 bytes, 16 insns) */
void f_1124bcfb(void) {
  FTRACE(0x1124bcfbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124bcfb mov ax, word ptr [esp] */
  AX = (r16((uint32_t)(ESP)));
  /* 1124bcff cmp ax, 0x27f */
  { uint32_t _a=(AX),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1124bd03 je 0x1124bd23 */
  if (C.zf) goto L_1124bd23;
  /* 1124bd05 and ax, 0x20 */
  { uint32_t _r=(AX)&(0x20u); AX = (_r); fl_logic(_r,16); }
  /* 1124bd09 je 0x1124bd20 */
  if (C.zf) goto L_1124bd20;
  /* 1124bd0b wait  */
  /* wait (no observable integer/reg state) */
  /* 1124bd0c fnstsw ax */
  AX = fpu_status();
  /* 1124bd0e and ax, 0x20 */
  { uint32_t _r=(AX)&(0x20u); AX = (_r); fl_logic(_r,16); }
  /* 1124bd12 je 0x1124bd20 */
  if (C.zf) goto L_1124bd20;
  /* 1124bd14 mov eax, 8 */
  EAX = (0x8u);
  /* 1124bd19 call 0x1124bdf7 */
  push32(0x1124bd1eu); f_1124bdf7();
  /* 1124bd1e pop edx */
  EDX = (pop32());
  /* 1124bd1f ret  */
  ESPCHK(0x1124bcfbu, _esp0);
  ESP += 4; return;
L_1124bd20:;
  /* 1124bd20 fldcw word ptr [esp] */
  C.fcw = r16((uint32_t)(ESP));
L_1124bd23:;
  /* 1124bd23 pop edx */
  EDX = (pop32());
  /* 1124bd24 ret  */
  ESPCHK(0x1124bcfbu, _esp0);
  ESP += 4; return;
}

/* FUN_1000bde0 @ 0x1124bde0 (23 bytes, 9 insns) */
void f_1124bde0(void) {
  FTRACE(0x1124bde0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124bde0 push ebp */
  push32((uint32_t)(EBP));
  /* 1124bde1 mov ebp, esp */
  EBP = (ESP);
  /* 1124bde3 add esp, -0x20 */
  { uint32_t _a=(ESP),_b=(0xffffffe0u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124bde6 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1124bde9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1124bdec mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1124bdef mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1124bdf2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1124bdf5 jmp 0x1124be00 */
  jmp_ind(0x1124be00u); return;
}

/* __startOneArgErrorHandling @ 0x1124bdf7 (60 bytes, 23 insns) */
void f_1124bdf7(void) {
  FTRACE(0x1124bdf7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124bdf7 push ebp */
  push32((uint32_t)(EBP));
  /* 1124bdf8 mov ebp, esp */
  EBP = (ESP);
  /* 1124bdfa add esp, -0x20 */
  { uint32_t _a=(ESP),_b=(0xffffffe0u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124bdfd mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1124be00 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 1124be03 mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 1124be06 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124be09 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1124be0c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1124be0f mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1124be12 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1124be15 lea ecx, [ebp - 0x20] */
  ECX = ((uint32_t)(EBP + -0x20));
  /* 1124be18 push eax */
  push32((uint32_t)(EAX));
  /* 1124be19 push ecx */
  push32((uint32_t)(ECX));
  /* 1124be1a push edx */
  push32((uint32_t)(EDX));
  /* 1124be1b call 0x112518a0 */
  push32(0x1124be20u); f_112518a0();
  /* 1124be20 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124be23 fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
  /* 1124be26 cmp word ptr [ebp + 8], 0x27f */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1124be2c je 0x1124be31 */
  if (C.zf) goto L_1124be31;
  /* 1124be2e fldcw word ptr [ebp + 8] */
  C.fcw = r16((uint32_t)(EBP + 0x8));
L_1124be31:;
  /* 1124be31 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1124be32 ret  */
  ESPCHK(0x1124bdf7u, _esp0);
  ESP += 4; return;
}

/* __setdefaultprecision @ 0x1124be40 (23 bytes, 8 insns) */
void f_1124be40(void) {
  FTRACE(0x1124be40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124be40 push ebp */
  push32((uint32_t)(EBP));
  /* 1124be41 mov ebp, esp */
  EBP = (ESP);
  /* 1124be43 push 0x30000 */
  push32((uint32_t)(0x30000u));
  /* 1124be48 push 0x10000 */
  push32((uint32_t)(0x10000u));
  /* 1124be4d call 0x11251ab0 */
  push32(0x1124be52u); f_11251ab0();
  /* 1124be52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124be55 pop ebp */
  EBP = (pop32());
  /* 1124be56 ret  */
  ESPCHK(0x1124be40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be60 @ 0x1124be60 (94 bytes, 30 insns) */
void f_1124be60(void) {
  FTRACE(0x1124be60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124be60 push ebp */
  push32((uint32_t)(EBP));
  /* 1124be61 mov ebp, esp */
  EBP = (ESP);
  /* 1124be63 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124be66 push ebx */
  push32((uint32_t)(EBX));
  /* 1124be67 push esi */
  push32((uint32_t)(ESI));
  /* 1124be68 push edi */
  push32((uint32_t)(EDI));
  /* 1124be69 mov dword ptr [ebp - 0x18], 0x80000000 */
  w32((uint32_t)(EBP + -0x18), (0x80000000u));
  /* 1124be70 mov dword ptr [ebp - 0x14], 0x4147ffff */
  w32((uint32_t)(EBP + -0x14), (0x4147ffffu));
  /* 1124be77 mov dword ptr [ebp - 8], 0xc0000000 */
  w32((uint32_t)(EBP + -0x8), (0xc0000000u));
  /* 1124be7e mov dword ptr [ebp - 4], 0x4150017e */
  w32((uint32_t)(EBP + -0x4), (0x4150017eu));
  /* 1124be85 fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
  /* 1124be88 fdiv qword ptr [ebp - 0x18] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(EBP + -0x18)));
  /* 1124be8b fmul qword ptr [ebp - 0x18] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x18)));
  /* 1124be8e fsubr qword ptr [ebp - 8] */
  FPU_ST(0) = (rf64((uint32_t)(EBP + -0x8))) - FPU_ST(0);
  /* 1124be91 fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 1124be94 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 1124be97 fcomp qword ptr [0x1127b598] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x1127b598)));
  (void)fpu_pop();
  /* 1124be9d fnstsw ax */
  AX = fpu_status();
  /* 1124be9f test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 1124bea2 jne 0x1124bead */
  if (!C.zf) goto L_1124bead;
  /* 1124bea4 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1124beab jmp 0x1124beb4 */
  goto L_1124beb4;
L_1124bead:;
  /* 1124bead mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
L_1124beb4:;
  /* 1124beb4 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1124beb7 pop edi */
  EDI = (pop32());
  /* 1124beb8 pop esi */
  ESI = (pop32());
  /* 1124beb9 pop ebx */
  EBX = (pop32());
  /* 1124beba mov esp, ebp */
  ESP = (EBP);
  /* 1124bebc pop ebp */
  EBP = (pop32());
  /* 1124bebd ret  */
  ESPCHK(0x1124be60u, _esp0);
  ESP += 4; return;
}

/* __ms_p5_mp_test_fdiv @ 0x1124bec0 (66 bytes, 22 insns) */
void f_1124bec0(void) {
  FTRACE(0x1124bec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124bec0 push ebp */
  push32((uint32_t)(EBP));
  /* 1124bec1 mov ebp, esp */
  EBP = (ESP);
  /* 1124bec3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124bec6 push 0x1127b5bc */
  push32((uint32_t)(0x1127b5bcu));
  /* 1124becb call dword ptr [0x11283468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283468))), 0x1124bed1u);
  /* 1124bed1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1124bed4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124bed8 je 0x1124bef9 */
  if (C.zf) goto L_1124bef9;
  /* 1124beda push 0x1127b5a0 */
  push32((uint32_t)(0x1127b5a0u));
  /* 1124bedf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124bee2 push eax */
  push32((uint32_t)(EAX));
  /* 1124bee3 call dword ptr [0x1128344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128344c))), 0x1124bee9u);
  /* 1124bee9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1124beec cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124bef0 je 0x1124bef9 */
  if (C.zf) goto L_1124bef9;
  /* 1124bef2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124bef4 call dword ptr [ebp - 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x8))), 0x1124bef7u);
  /* 1124bef7 jmp 0x1124befe */
  goto L_1124befe;
L_1124bef9:;
  /* 1124bef9 call 0x1124be60 */
  push32(0x1124befeu); f_1124be60();
L_1124befe:;
  /* 1124befe mov esp, ebp */
  ESP = (EBP);
  /* 1124bf00 pop ebp */
  EBP = (pop32());
  /* 1124bf01 ret  */
  ESPCHK(0x1124bec0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf10 @ 0x1124bf10 (168 bytes, 59 insns) */
void f_1124bf10(void) {
  FTRACE(0x1124bf10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124bf10 push ebp */
  push32((uint32_t)(EBP));
  /* 1124bf11 mov ebp, esp */
  EBP = (ESP);
  /* 1124bf13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124bf16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124bf19 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1124bf1c push ecx */
  push32((uint32_t)(ECX));
  /* 1124bf1d call 0x11251f90 */
  push32(0x1124bf22u); f_11251f90();
  /* 1124bf22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124bf25 cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124bf28 je 0x1124bf70 */
  if (C.zf) goto L_1124bf70;
L_1124bf2a:;
  /* 1124bf2a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124bf2d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124bf30 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1124bf33 cmp dword ptr [0x1127efe0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1127efe0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124bf3a jle 0x1124bf52 */
  if ((C.zf||C.sf!=C.of)) goto L_1124bf52;
  /* 1124bf3c push 4 */
  push32((uint32_t)(0x4u));
  /* 1124bf3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124bf41 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1124bf44 push ecx */
  push32((uint32_t)(ECX));
  /* 1124bf45 call 0x11251ec0 */
  push32(0x1124bf4au); f_11251ec0();
  /* 1124bf4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124bf4d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1124bf50 jmp 0x1124bf6a */
  goto L_1124bf6a;
L_1124bf52:;
  /* 1124bf52 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124bf55 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1124bf58 mov ecx, dword ptr [0x1127efec] */
  ECX = (r32((uint32_t)(0x1127efec)));
  /* 1124bf5e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1124bf60 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1124bf64 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1124bf67 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1124bf6a:;
  /* 1124bf6a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124bf6e jne 0x1124bf2a */
  if (!C.zf) goto L_1124bf2a;
L_1124bf70:;
  /* 1124bf70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124bf73 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1124bf75 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 1124bf78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124bf7b mov al, byte ptr [0x1127efe4] */
  AL = (r8((uint32_t)(0x1127efe4)));
  /* 1124bf80 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1124bf82 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124bf85 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124bf88 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_1124bf8b:;
  /* 1124bf8b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124bf8e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1124bf90 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 1124bf93 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124bf96 mov dl, byte ptr [ebp - 8] */
  DL = (r8((uint32_t)(EBP + -0x8)));
  /* 1124bf99 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1124bf9b mov al, byte ptr [ebp - 4] */
  AL = (r8((uint32_t)(EBP + -0x4)));
  /* 1124bf9e mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 1124bfa1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124bfa4 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1124bfa7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124bfaa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124bfad mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1124bfb0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1124bfb2 jne 0x1124bf8b */
  if (!C.zf) goto L_1124bf8b;
  /* 1124bfb4 mov esp, ebp */
  ESP = (EBP);
  /* 1124bfb6 pop ebp */
  EBP = (pop32());
  /* 1124bfb7 ret  */
  ESPCHK(0x1124bf10u, _esp0);
  ESP += 4; return;
}

/* __cropzeros @ 0x1124bfc0 (215 bytes, 78 insns) */
void f_1124bfc0(void) {
  FTRACE(0x1124bfc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124bfc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1124bfc1 mov ebp, esp */
  EBP = (ESP);
  /* 1124bfc3 push ecx */
  push32((uint32_t)(ECX));
L_1124bfc4:;
  /* 1124bfc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124bfc7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1124bfca test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1124bfcc je 0x1124bfea */
  if (C.zf) goto L_1124bfea;
  /* 1124bfce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124bfd1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1124bfd4 movsx ecx, byte ptr [0x1127efe4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x1127efe4))));
  /* 1124bfdb cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124bfdd je 0x1124bfea */
  if (C.zf) goto L_1124bfea;
  /* 1124bfdf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124bfe2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124bfe5 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1124bfe8 jmp 0x1124bfc4 */
  goto L_1124bfc4;
L_1124bfea:;
  /* 1124bfea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124bfed movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1124bff0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124bff3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124bff6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1124bff9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1124bffb je 0x1124c093 */
  if (C.zf) goto L_1124c093;
L_1124c001:;
  /* 1124c001 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124c004 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1124c007 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1124c009 je 0x1124c02c */
  if (C.zf) goto L_1124c02c;
  /* 1124c00b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124c00e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1124c011 cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124c014 je 0x1124c02c */
  if (C.zf) goto L_1124c02c;
  /* 1124c016 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124c019 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1124c01c cmp edx, 0x45 */
  { uint32_t _a=(EDX),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124c01f je 0x1124c02c */
  if (C.zf) goto L_1124c02c;
  /* 1124c021 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124c024 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c027 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1124c02a jmp 0x1124c001 */
  goto L_1124c001;
L_1124c02c:;
  /* 1124c02c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124c02f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1124c032 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124c035 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124c038 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_1124c03b:;
  /* 1124c03b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124c03e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1124c041 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124c044 jne 0x1124c051 */
  if (!C.zf) goto L_1124c051;
  /* 1124c046 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124c049 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124c04c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1124c04f jmp 0x1124c03b */
  goto L_1124c03b;
L_1124c051:;
  /* 1124c051 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124c054 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1124c057 movsx edx, byte ptr [0x1127efe4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x1127efe4))));
  /* 1124c05e cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124c060 jne 0x1124c06b */
  if (!C.zf) goto L_1124c06b;
  /* 1124c062 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124c065 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124c068 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1124c06b:;
  /* 1124c06b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124c06e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c071 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1124c074 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124c077 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124c07a mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1124c07c mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1124c07e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124c081 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1124c084 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124c087 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c08a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1124c08d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124c08f je 0x1124c093 */
  if (C.zf) goto L_1124c093;
  /* 1124c091 jmp 0x1124c06b */
  goto L_1124c06b;
L_1124c093:;
  /* 1124c093 mov esp, ebp */
  ESP = (EBP);
  /* 1124c095 pop ebp */
  EBP = (pop32());
  /* 1124c096 ret  */
  ESPCHK(0x1124bfc0u, _esp0);
  ESP += 4; return;
}

/* __positive @ 0x1124c0a0 (45 bytes, 16 insns) */
void f_1124c0a0(void) {
  FTRACE(0x1124c0a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124c0a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1124c0a1 mov ebp, esp */
  EBP = (ESP);
  /* 1124c0a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1124c0a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124c0a7 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 1124c0a9 fcomp qword ptr [0x1127b5c8] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x1127b5c8)));
  (void)fpu_pop();
  /* 1124c0af fnstsw ax */
  AX = fpu_status();
  /* 1124c0b1 test ah, 1 */
  { uint32_t _r=(AH)&(0x1u); fl_logic(_r,8); }
  /* 1124c0b4 jne 0x1124c0bf */
  if (!C.zf) goto L_1124c0bf;
  /* 1124c0b6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1124c0bd jmp 0x1124c0c6 */
  goto L_1124c0c6;
L_1124c0bf:;
  /* 1124c0bf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1124c0c6:;
  /* 1124c0c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124c0c9 mov esp, ebp */
  ESP = (EBP);
  /* 1124c0cb pop ebp */
  EBP = (pop32());
  /* 1124c0cc ret  */
  ESPCHK(0x1124c0a0u, _esp0);
  ESP += 4; return;
}

/* __fassign @ 0x1124c0d0 (72 bytes, 29 insns) */
void f_1124c0d0(void) {
  FTRACE(0x1124c0d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124c0d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1124c0d1 mov ebp, esp */
  EBP = (ESP);
  /* 1124c0d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124c0d6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124c0da je 0x1124c0fc */
  if (C.zf) goto L_1124c0fc;
  /* 1124c0dc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124c0df push eax */
  push32((uint32_t)(EAX));
  /* 1124c0e0 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 1124c0e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1124c0e4 call 0x11252880 */
  push32(0x1124c0e9u); f_11252880();
  /* 1124c0e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c0ec mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124c0ef mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124c0f2 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1124c0f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124c0f7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1124c0fa jmp 0x1124c114 */
  goto L_1124c114;
L_1124c0fc:;
  /* 1124c0fc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124c0ff push edx */
  push32((uint32_t)(EDX));
  /* 1124c100 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1124c103 push eax */
  push32((uint32_t)(EAX));
  /* 1124c104 call 0x11252900 */
  push32(0x1124c109u); f_11252900();
  /* 1124c109 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c10c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124c10f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1124c112 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
L_1124c114:;
  /* 1124c114 mov esp, ebp */
  ESP = (EBP);
  /* 1124c116 pop ebp */
  EBP = (pop32());
  /* 1124c117 ret  */
  ESPCHK(0x1124c0d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c120 @ 0x1124c120 (118 bytes, 49 insns) */
void f_1124c120(void) {
  FTRACE(0x1124c120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124c120 push ebp */
  push32((uint32_t)(EBP));
  /* 1124c121 mov ebp, esp */
  EBP = (ESP);
  /* 1124c123 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124c126 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1124c129 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1124c12c lea ecx, [ebp - 0x2c] */
  ECX = ((uint32_t)(EBP + -0x2c));
  /* 1124c12f push ecx */
  push32((uint32_t)(ECX));
  /* 1124c130 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 1124c133 push edx */
  push32((uint32_t)(EDX));
  /* 1124c134 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124c137 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1124c13a push ecx */
  push32((uint32_t)(ECX));
  /* 1124c13b mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1124c13d push edx */
  push32((uint32_t)(EDX));
  /* 1124c13e call 0x11252a40 */
  push32(0x1124c143u); f_11252a40();
  /* 1124c143 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c146 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124c149 push eax */
  push32((uint32_t)(EAX));
  /* 1124c14a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124c14d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c150 push ecx */
  push32((uint32_t)(ECX));
  /* 1124c151 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124c154 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124c156 cmp dword ptr [edx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124c159 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 1124c15c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124c15f add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c161 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1124c163 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124c167 setg dl */
  DL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 1124c16a add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c16c push ecx */
  push32((uint32_t)(ECX));
  /* 1124c16d call 0x11252940 */
  push32(0x1124c172u); f_11252940();
  /* 1124c172 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c175 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124c177 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124c17a push eax */
  push32((uint32_t)(EAX));
  /* 1124c17b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1124c17e push ecx */
  push32((uint32_t)(ECX));
  /* 1124c17f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124c182 push edx */
  push32((uint32_t)(EDX));
  /* 1124c183 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124c186 push eax */
  push32((uint32_t)(EAX));
  /* 1124c187 call 0x1124c1a0 */
  push32(0x1124c18cu); f_1124c1a0();
  /* 1124c18c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c18f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124c192 mov esp, ebp */
  ESP = (EBP);
  /* 1124c194 pop ebp */
  EBP = (pop32());
  /* 1124c195 ret  */
  ESPCHK(0x1124c120u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1a0 @ 0x1124c1a0 (358 bytes, 128 insns) */
void f_1124c1a0(void) {
  FTRACE(0x1124c1a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124c1a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1124c1a1 mov ebp, esp */
  EBP = (ESP);
  /* 1124c1a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124c1a6 movsx eax, byte ptr [ebp + 0x18] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x18))));
  /* 1124c1aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124c1ac je 0x1124c1d7 */
  if (C.zf) goto L_1124c1d7;
  /* 1124c1ae mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1124c1b1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1124c1b3 cmp dword ptr [ecx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124c1b6 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 1124c1b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124c1bc add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c1be mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1124c1c1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1124c1c3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124c1c7 setg cl */
  CL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 1124c1ca push ecx */
  push32((uint32_t)(ECX));
  /* 1124c1cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124c1ce push edx */
  push32((uint32_t)(EDX));
  /* 1124c1cf call 0x1124c610 */
  push32(0x1124c1d4u); f_1124c610();
  /* 1124c1d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1124c1d7:;
  /* 1124c1d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124c1da mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1124c1dd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1124c1e0 cmp dword ptr [ecx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124c1e3 jne 0x1124c1f4 */
  if (!C.zf) goto L_1124c1f4;
  /* 1124c1e5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124c1e8 mov byte ptr [edx], 0x2d */
  w8((uint32_t)(EDX), (0x2du));
  /* 1124c1eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124c1ee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c1f1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1124c1f4:;
  /* 1124c1f4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124c1f8 jle 0x1124c218 */
  if ((C.zf||C.sf!=C.of)) goto L_1124c218;
  /* 1124c1fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124c1fd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124c200 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1124c203 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1124c205 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124c208 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c20b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1124c20e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124c211 mov al, byte ptr [0x1127efe4] */
  AL = (r8((uint32_t)(0x1127efe4)));
  /* 1124c216 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
L_1124c218:;
  /* 1124c218 push 0x1127b5d0 */
  push32((uint32_t)(0x1127b5d0u));
  /* 1124c21d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124c220 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c223 movsx edx, byte ptr [ebp + 0x18] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x18))));
  /* 1124c227 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1124c229 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124c22b inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1124c22c add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c22e push ecx */
  push32((uint32_t)(ECX));
  /* 1124c22f call 0x11250f30 */
  push32(0x1124c234u); f_11250f30();
  /* 1124c234 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c237 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1124c23a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124c23e je 0x1124c246 */
  if (C.zf) goto L_1124c246;
  /* 1124c240 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124c243 mov byte ptr [eax], 0x45 */
  w8((uint32_t)(EAX), (0x45u));
L_1124c246:;
  /* 1124c246 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124c249 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c24c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1124c24f mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1124c252 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1124c255 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1124c258 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124c25b je 0x1124c2ff */
  if (C.zf) goto L_1124c2ff;
  /* 1124c261 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1124c264 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1124c267 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124c26a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1124c26d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124c271 jge 0x1124c281 */
  if ((C.sf==C.of)) goto L_1124c281;
  /* 1124c273 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124c276 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1124c278 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1124c27b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124c27e mov byte ptr [edx], 0x2d */
  w8((uint32_t)(EDX), (0x2du));
L_1124c281:;
  /* 1124c281 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124c284 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c287 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1124c28a cmp dword ptr [ebp - 8], 0x64 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124c28e jl 0x1124c2b5 */
  if ((C.sf!=C.of)) goto L_1124c2b5;
  /* 1124c290 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124c293 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1124c294 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 1124c299 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1124c29b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124c29e mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 1124c2a0 add cl, al */
  { uint32_t _a=(CL),_b=(AL),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1124c2a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124c2a5 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1124c2a7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124c2aa cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1124c2ab mov ecx, 0x64 */
  ECX = (0x64u);
  /* 1124c2b0 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1124c2b2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1124c2b5:;
  /* 1124c2b5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124c2b8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c2bb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1124c2be cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124c2c2 jl 0x1124c2e9 */
  if ((C.sf!=C.of)) goto L_1124c2e9;
  /* 1124c2c4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124c2c7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1124c2c8 mov ecx, 0xa */
  ECX = (0xau);
  /* 1124c2cd idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1124c2cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124c2d2 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 1124c2d4 add cl, al */
  { uint32_t _a=(CL),_b=(AL),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1124c2d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124c2d9 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1124c2db mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124c2de cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1124c2df mov ecx, 0xa */
  ECX = (0xau);
  /* 1124c2e4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1124c2e6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1124c2e9:;
  /* 1124c2e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124c2ec add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c2ef mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1124c2f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124c2f5 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1124c2f7 add cl, byte ptr [ebp - 8] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EBP + -0x8))),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1124c2fa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124c2fd mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
L_1124c2ff:;
  /* 1124c2ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124c302 mov esp, ebp */
  ESP = (EBP);
  /* 1124c304 pop ebp */
  EBP = (pop32());
  /* 1124c305 ret  */
  ESPCHK(0x1124c1a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c310 @ 0x1124c310 (106 bytes, 44 insns) */
void f_1124c310(void) {
  FTRACE(0x1124c310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124c310 push ebp */
  push32((uint32_t)(EBP));
  /* 1124c311 mov ebp, esp */
  EBP = (ESP);
  /* 1124c313 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124c316 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1124c319 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1124c31c lea ecx, [ebp - 0x2c] */
  ECX = ((uint32_t)(EBP + -0x2c));
  /* 1124c31f push ecx */
  push32((uint32_t)(ECX));
  /* 1124c320 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 1124c323 push edx */
  push32((uint32_t)(EDX));
  /* 1124c324 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124c327 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1124c32a push ecx */
  push32((uint32_t)(ECX));
  /* 1124c32b mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1124c32d push edx */
  push32((uint32_t)(EDX));
  /* 1124c32e call 0x11252a40 */
  push32(0x1124c333u); f_11252a40();
  /* 1124c333 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c336 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124c339 push eax */
  push32((uint32_t)(EAX));
  /* 1124c33a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124c33d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124c340 add edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c343 push edx */
  push32((uint32_t)(EDX));
  /* 1124c344 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124c347 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1124c349 cmp dword ptr [eax], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124c34c sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1124c34f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124c352 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c354 push edx */
  push32((uint32_t)(EDX));
  /* 1124c355 call 0x11252940 */
  push32(0x1124c35au); f_11252940();
  /* 1124c35a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c35d push 0 */
  push32((uint32_t)(0x0u));
  /* 1124c35f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124c362 push eax */
  push32((uint32_t)(EAX));
  /* 1124c363 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124c366 push ecx */
  push32((uint32_t)(ECX));
  /* 1124c367 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124c36a push edx */
  push32((uint32_t)(EDX));
  /* 1124c36b call 0x1124c380 */
  push32(0x1124c370u); f_1124c380();
  /* 1124c370 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c373 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124c376 mov esp, ebp */
  ESP = (EBP);
  /* 1124c378 pop ebp */
  EBP = (pop32());
  /* 1124c379 ret  */
  ESPCHK(0x1124c310u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c380 @ 0x1124c380 (317 bytes, 113 insns) */
void f_1124c380(void) {
  FTRACE(0x1124c380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124c380 push ebp */
  push32((uint32_t)(EBP));
  /* 1124c381 mov ebp, esp */
  EBP = (ESP);
  /* 1124c383 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124c386 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124c389 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1124c38c sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124c38f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1124c392 movsx edx, byte ptr [ebp + 0x14] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x14))));
  /* 1124c396 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1124c398 je 0x1124c3d3 */
  if (C.zf) goto L_1124c3d3;
  /* 1124c39a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124c39d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1124c39f cmp dword ptr [eax], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124c3a2 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1124c3a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124c3a8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c3aa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1124c3ad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124c3b0 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124c3b3 jne 0x1124c3d3 */
  if (!C.zf) goto L_1124c3d3;
  /* 1124c3b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124c3b8 add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c3bb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1124c3be mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1124c3c1 mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 1124c3c4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1124c3c7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c3ca mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1124c3cd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1124c3d0 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_1124c3d3:;
  /* 1124c3d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124c3d6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1124c3d9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124c3dc cmp dword ptr [eax], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124c3df jne 0x1124c3f0 */
  if (!C.zf) goto L_1124c3f0;
  /* 1124c3e1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124c3e4 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 1124c3e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124c3ea add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c3ed mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1124c3f0:;
  /* 1124c3f0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124c3f3 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124c3f7 jg 0x1124c418 */
  if ((!C.zf&&C.sf==C.of)) goto L_1124c418;
  /* 1124c3f9 push 1 */
  push32((uint32_t)(0x1u));
  /* 1124c3fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124c3fe push ecx */
  push32((uint32_t)(ECX));
  /* 1124c3ff call 0x1124c610 */
  push32(0x1124c404u); f_1124c610();
  /* 1124c404 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c407 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124c40a mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 1124c40d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124c410 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c413 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1124c416 jmp 0x1124c424 */
  goto L_1124c424;
L_1124c418:;
  /* 1124c418 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124c41b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124c41e add edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c421 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1124c424:;
  /* 1124c424 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124c428 jle 0x1124c4b6 */
  if ((C.zf||C.sf!=C.of)) goto L_1124c4b6;
  /* 1124c42e push 1 */
  push32((uint32_t)(0x1u));
  /* 1124c430 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124c433 push eax */
  push32((uint32_t)(EAX));
  /* 1124c434 call 0x1124c610 */
  push32(0x1124c439u); f_1124c610();
  /* 1124c439 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c43c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124c43f mov dl, byte ptr [0x1127efe4] */
  DL = (r8((uint32_t)(0x1127efe4)));
  /* 1124c445 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1124c447 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124c44a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c44d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1124c450 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124c453 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124c457 jge 0x1124c4b6 */
  if ((C.sf==C.of)) goto L_1124c4b6;
  /* 1124c459 movsx edx, byte ptr [ebp + 0x14] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x14))));
  /* 1124c45d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1124c45f je 0x1124c46e */
  if (C.zf) goto L_1124c46e;
  /* 1124c461 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124c464 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1124c467 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1124c469 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1124c46c jmp 0x1124c494 */
  goto L_1124c494;
L_1124c46e:;
  /* 1124c46e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124c471 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1124c474 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1124c476 cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124c479 jge 0x1124c483 */
  if ((C.sf==C.of)) goto L_1124c483;
  /* 1124c47b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124c47e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1124c481 jmp 0x1124c48e */
  goto L_1124c48e;
L_1124c483:;
  /* 1124c483 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124c486 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1124c489 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1124c48b mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1124c48e:;
  /* 1124c48e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1124c491 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1124c494:;
  /* 1124c494 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124c497 push edx */
  push32((uint32_t)(EDX));
  /* 1124c498 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124c49b push eax */
  push32((uint32_t)(EAX));
  /* 1124c49c call 0x1124c610 */
  push32(0x1124c4a1u); f_1124c610();
  /* 1124c4a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c4a4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124c4a7 push ecx */
  push32((uint32_t)(ECX));
  /* 1124c4a8 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1124c4aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124c4ad push edx */
  push32((uint32_t)(EDX));
  /* 1124c4ae call 0x11252c30 */
  push32(0x1124c4b3u); f_11252c30();
  /* 1124c4b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1124c4b6:;
  /* 1124c4b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124c4b9 mov esp, ebp */
  ESP = (EBP);
  /* 1124c4bb pop ebp */
  EBP = (pop32());
  /* 1124c4bc ret  */
  ESPCHK(0x1124c380u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c4c0 @ 0x1124c4c0 (229 bytes, 89 insns) */
void f_1124c4c0(void) {
  FTRACE(0x1124c4c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124c4c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1124c4c1 mov ebp, esp */
  EBP = (ESP);
  /* 1124c4c3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124c4c6 mov byte ptr [ebp - 0x30], 0 */
  w8((uint32_t)(EBP + -0x30), (0x0u));
  /* 1124c4ca lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1124c4cd mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 1124c4d0 lea ecx, [ebp - 0x2c] */
  ECX = ((uint32_t)(EBP + -0x2c));
  /* 1124c4d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1124c4d4 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 1124c4d7 push edx */
  push32((uint32_t)(EDX));
  /* 1124c4d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124c4db mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1124c4de push ecx */
  push32((uint32_t)(ECX));
  /* 1124c4df mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1124c4e1 push edx */
  push32((uint32_t)(EDX));
  /* 1124c4e2 call 0x11252a40 */
  push32(0x1124c4e7u); f_11252a40();
  /* 1124c4e7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c4ea mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1124c4ed mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1124c4f0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124c4f3 mov dword ptr [ebp - 0x34], ecx */
  w32((uint32_t)(EBP + -0x34), (ECX));
  /* 1124c4f6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1124c4f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124c4fb cmp dword ptr [edx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124c4fe sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 1124c501 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124c504 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c506 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1124c509 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1124c50c push edx */
  push32((uint32_t)(EDX));
  /* 1124c50d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124c510 push eax */
  push32((uint32_t)(EAX));
  /* 1124c511 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124c514 push ecx */
  push32((uint32_t)(ECX));
  /* 1124c515 call 0x11252940 */
  push32(0x1124c51au); f_11252940();
  /* 1124c51a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c51d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1124c520 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1124c523 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124c526 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1124c528 cmp dword ptr [ebp - 0x34], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x34))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124c52b setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 1124c52e mov byte ptr [ebp - 0x30], cl */
  w8((uint32_t)(EBP + -0x30), (CL));
  /* 1124c531 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1124c534 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1124c537 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124c53a mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 1124c53d cmp dword ptr [ebp - 0x34], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x34))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124c541 jl 0x1124c54b */
  if ((C.sf!=C.of)) goto L_1124c54b;
  /* 1124c543 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1124c546 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124c549 jl 0x1124c567 */
  if ((C.sf!=C.of)) goto L_1124c567;
L_1124c54b:;
  /* 1124c54b push 1 */
  push32((uint32_t)(0x1u));
  /* 1124c54d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1124c550 push edx */
  push32((uint32_t)(EDX));
  /* 1124c551 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1124c554 push eax */
  push32((uint32_t)(EAX));
  /* 1124c555 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124c558 push ecx */
  push32((uint32_t)(ECX));
  /* 1124c559 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124c55c push edx */
  push32((uint32_t)(EDX));
  /* 1124c55d call 0x1124c1a0 */
  push32(0x1124c562u); f_1124c1a0();
  /* 1124c562 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c565 jmp 0x1124c5a1 */
  goto L_1124c5a1;
L_1124c567:;
  /* 1124c567 movsx eax, byte ptr [ebp - 0x30] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x30))));
  /* 1124c56b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124c56d je 0x1124c58b */
  if (C.zf) goto L_1124c58b;
L_1124c56f:;
  /* 1124c56f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124c572 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1124c575 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124c578 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c57b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1124c57e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1124c580 je 0x1124c584 */
  if (C.zf) goto L_1124c584;
  /* 1124c582 jmp 0x1124c56f */
  goto L_1124c56f;
L_1124c584:;
  /* 1124c584 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124c587 mov byte ptr [ecx - 2], 0 */
  w8((uint32_t)(ECX + -0x2), (0x0u));
L_1124c58b:;
  /* 1124c58b push 1 */
  push32((uint32_t)(0x1u));
  /* 1124c58d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1124c590 push edx */
  push32((uint32_t)(EDX));
  /* 1124c591 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124c594 push eax */
  push32((uint32_t)(EAX));
  /* 1124c595 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124c598 push ecx */
  push32((uint32_t)(ECX));
  /* 1124c599 call 0x1124c380 */
  push32(0x1124c59eu); f_1124c380();
  /* 1124c59e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1124c5a1:;
  /* 1124c5a1 mov esp, ebp */
  ESP = (EBP);
  /* 1124c5a3 pop ebp */
  EBP = (pop32());
  /* 1124c5a4 ret  */
  ESPCHK(0x1124c4c0u, _esp0);
  ESP += 4; return;
}

/* __cfltcvt @ 0x1124c5b0 (95 bytes, 40 insns) */
void f_1124c5b0(void) {
  FTRACE(0x1124c5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124c5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1124c5b1 mov ebp, esp */
  EBP = (ESP);
  /* 1124c5b3 cmp dword ptr [ebp + 0x10], 0x65 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124c5b7 je 0x1124c5bf */
  if (C.zf) goto L_1124c5bf;
  /* 1124c5b9 cmp dword ptr [ebp + 0x10], 0x45 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124c5bd jne 0x1124c5d9 */
  if (!C.zf) goto L_1124c5d9;
L_1124c5bf:;
  /* 1124c5bf mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1124c5c2 push eax */
  push32((uint32_t)(EAX));
  /* 1124c5c3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1124c5c6 push ecx */
  push32((uint32_t)(ECX));
  /* 1124c5c7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124c5ca push edx */
  push32((uint32_t)(EDX));
  /* 1124c5cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124c5ce push eax */
  push32((uint32_t)(EAX));
  /* 1124c5cf call 0x1124c120 */
  push32(0x1124c5d4u); f_1124c120();
  /* 1124c5d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c5d7 jmp 0x1124c60d */
  goto L_1124c60d;
L_1124c5d9:;
  /* 1124c5d9 cmp dword ptr [ebp + 0x10], 0x66 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124c5dd jne 0x1124c5f5 */
  if (!C.zf) goto L_1124c5f5;
  /* 1124c5df mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1124c5e2 push ecx */
  push32((uint32_t)(ECX));
  /* 1124c5e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124c5e6 push edx */
  push32((uint32_t)(EDX));
  /* 1124c5e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124c5ea push eax */
  push32((uint32_t)(EAX));
  /* 1124c5eb call 0x1124c310 */
  push32(0x1124c5f0u); f_1124c310();
  /* 1124c5f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c5f3 jmp 0x1124c60d */
  goto L_1124c60d;
L_1124c5f5:;
  /* 1124c5f5 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1124c5f8 push ecx */
  push32((uint32_t)(ECX));
  /* 1124c5f9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1124c5fc push edx */
  push32((uint32_t)(EDX));
  /* 1124c5fd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124c600 push eax */
  push32((uint32_t)(EAX));
  /* 1124c601 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124c604 push ecx */
  push32((uint32_t)(ECX));
  /* 1124c605 call 0x1124c4c0 */
  push32(0x1124c60au); f_1124c4c0();
  /* 1124c60a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1124c60d:;
  /* 1124c60d pop ebp */
  EBP = (pop32());
  /* 1124c60e ret  */
  ESPCHK(0x1124c5b0u, _esp0);
  ESP += 4; return;
}

/* __shift @ 0x1124c610 (46 bytes, 19 insns) */
void f_1124c610(void) {
  FTRACE(0x1124c610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124c610 push ebp */
  push32((uint32_t)(EBP));
  /* 1124c611 mov ebp, esp */
  EBP = (ESP);
  /* 1124c613 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124c617 je 0x1124c63c */
  if (C.zf) goto L_1124c63c;
  /* 1124c619 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124c61c push eax */
  push32((uint32_t)(EAX));
  /* 1124c61d call 0x11250db0 */
  push32(0x1124c622u); f_11250db0();
  /* 1124c622 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c625 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c628 push eax */
  push32((uint32_t)(EAX));
  /* 1124c629 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124c62c push ecx */
  push32((uint32_t)(ECX));
  /* 1124c62d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124c630 add edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c633 push edx */
  push32((uint32_t)(EDX));
  /* 1124c634 call 0x11252c90 */
  push32(0x1124c639u); f_11252c90();
  /* 1124c639 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1124c63c:;
  /* 1124c63c pop ebp */
  EBP = (pop32());
  /* 1124c63d ret  */
  ESPCHK(0x1124c610u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c640 @ 0x1124c640 (55 bytes, 16 insns) */
void f_1124c640(void) {
  FTRACE(0x1124c640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124c640 push ebp */
  push32((uint32_t)(EBP));
  /* 1124c641 mov ebp, esp */
  EBP = (ESP);
  /* 1124c643 mov eax, dword ptr [0x1127ee7c] */
  EAX = (r32((uint32_t)(0x1127ee7c)));
  /* 1124c648 push eax */
  push32((uint32_t)(EAX));
  /* 1124c649 call dword ptr [0x1128342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128342c))), 0x1124c64fu);
  /* 1124c64f mov ecx, dword ptr [0x1127ee6c] */
  ECX = (r32((uint32_t)(0x1127ee6c)));
  /* 1124c655 push ecx */
  push32((uint32_t)(ECX));
  /* 1124c656 call dword ptr [0x1128342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128342c))), 0x1124c65cu);
  /* 1124c65c mov edx, dword ptr [0x1127ee5c] */
  EDX = (r32((uint32_t)(0x1127ee5c)));
  /* 1124c662 push edx */
  push32((uint32_t)(EDX));
  /* 1124c663 call dword ptr [0x1128342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128342c))), 0x1124c669u);
  /* 1124c669 mov eax, dword ptr [0x1127ee3c] */
  EAX = (r32((uint32_t)(0x1127ee3c)));
  /* 1124c66e push eax */
  push32((uint32_t)(EAX));
  /* 1124c66f call dword ptr [0x1128342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128342c))), 0x1124c675u);
  /* 1124c675 pop ebp */
  EBP = (pop32());
  /* 1124c676 ret  */
  ESPCHK(0x1124c640u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c680 @ 0x1124c680 (159 bytes, 47 insns) */
void f_1124c680(void) {
  FTRACE(0x1124c680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124c680 push ebp */
  push32((uint32_t)(EBP));
  /* 1124c681 mov ebp, esp */
  EBP = (ESP);
  /* 1124c683 push ecx */
  push32((uint32_t)(ECX));
  /* 1124c684 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1124c68b jmp 0x1124c696 */
  goto L_1124c696;
L_1124c68d:;
  /* 1124c68d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124c690 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c693 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1124c696:;
  /* 1124c696 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124c69a jge 0x1124c6e9 */
  if ((C.sf==C.of)) goto L_1124c6e9;
  /* 1124c69c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124c69f cmp dword ptr [ecx*4 + 0x1127ee38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1127ee38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124c6a7 je 0x1124c6e7 */
  if (C.zf) goto L_1124c6e7;
  /* 1124c6a9 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124c6ad je 0x1124c6e7 */
  if (C.zf) goto L_1124c6e7;
  /* 1124c6af cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124c6b3 je 0x1124c6e7 */
  if (C.zf) goto L_1124c6e7;
  /* 1124c6b5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124c6b9 je 0x1124c6e7 */
  if (C.zf) goto L_1124c6e7;
  /* 1124c6bb cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124c6bf je 0x1124c6e7 */
  if (C.zf) goto L_1124c6e7;
  /* 1124c6c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124c6c4 mov eax, dword ptr [edx*4 + 0x1127ee38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1127ee38)));
  /* 1124c6cb push eax */
  push32((uint32_t)(EAX));
  /* 1124c6cc call dword ptr [0x11283428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283428))), 0x1124c6d2u);
  /* 1124c6d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1124c6d4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124c6d7 mov edx, dword ptr [ecx*4 + 0x1127ee38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1127ee38)));
  /* 1124c6de push edx */
  push32((uint32_t)(EDX));
  /* 1124c6df call 0x1124d2b0 */
  push32(0x1124c6e4u); f_1124d2b0();
  /* 1124c6e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1124c6e7:;
  /* 1124c6e7 jmp 0x1124c68d */
  goto L_1124c68d;
L_1124c6e9:;
  /* 1124c6e9 mov eax, dword ptr [0x1127ee5c] */
  EAX = (r32((uint32_t)(0x1127ee5c)));
  /* 1124c6ee push eax */
  push32((uint32_t)(EAX));
  /* 1124c6ef call dword ptr [0x11283428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283428))), 0x1124c6f5u);
  /* 1124c6f5 mov ecx, dword ptr [0x1127ee6c] */
  ECX = (r32((uint32_t)(0x1127ee6c)));
  /* 1124c6fb push ecx */
  push32((uint32_t)(ECX));
  /* 1124c6fc call dword ptr [0x11283428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283428))), 0x1124c702u);
  /* 1124c702 mov edx, dword ptr [0x1127ee7c] */
  EDX = (r32((uint32_t)(0x1127ee7c)));
  /* 1124c708 push edx */
  push32((uint32_t)(EDX));
  /* 1124c709 call dword ptr [0x11283428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283428))), 0x1124c70fu);
  /* 1124c70f mov eax, dword ptr [0x1127ee3c] */
  EAX = (r32((uint32_t)(0x1127ee3c)));
  /* 1124c714 push eax */
  push32((uint32_t)(EAX));
  /* 1124c715 call dword ptr [0x11283428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283428))), 0x1124c71bu);
  /* 1124c71b mov esp, ebp */
  ESP = (EBP);
  /* 1124c71d pop ebp */
  EBP = (pop32());
  /* 1124c71e ret  */
  ESPCHK(0x1124c680u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c720 @ 0x1124c720 (151 bytes, 46 insns) */
void f_1124c720(void) {
  FTRACE(0x1124c720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124c720 push ebp */
  push32((uint32_t)(EBP));
  /* 1124c721 mov ebp, esp */
  EBP = (ESP);
  /* 1124c723 push ecx */
  push32((uint32_t)(ECX));
  /* 1124c724 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124c727 cmp dword ptr [eax*4 + 0x1127ee38], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1127ee38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124c72f jne 0x1124c7a2 */
  if (!C.zf) goto L_1124c7a2;
  /* 1124c731 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 1124c736 push 0x1127b5d8 */
  push32((uint32_t)(0x1127b5d8u));
  /* 1124c73b push 2 */
  push32((uint32_t)(0x2u));
  /* 1124c73d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1124c73f call 0x1124c820 */
  push32(0x1124c744u); f_1124c820();
  /* 1124c744 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c747 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1124c74a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124c74e jne 0x1124c75a */
  if (!C.zf) goto L_1124c75a;
  /* 1124c750 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1124c752 call 0x1124b290 */
  push32(0x1124c757u); f_1124b290();
  /* 1124c757 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1124c75a:;
  /* 1124c75a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1124c75c call 0x1124c720 */
  push32(0x1124c761u); f_1124c720();
  /* 1124c761 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c764 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124c767 cmp dword ptr [ecx*4 + 0x1127ee38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1127ee38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124c76f jne 0x1124c78a */
  if (!C.zf) goto L_1124c78a;
  /* 1124c771 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124c774 push edx */
  push32((uint32_t)(EDX));
  /* 1124c775 call dword ptr [0x1128342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128342c))), 0x1124c77bu);
  /* 1124c77b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124c77e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124c781 mov dword ptr [eax*4 + 0x1127ee38], ecx */
  w32((uint32_t)(EAX*4 + 0x1127ee38), (ECX));
  /* 1124c788 jmp 0x1124c798 */
  goto L_1124c798;
L_1124c78a:;
  /* 1124c78a push 2 */
  push32((uint32_t)(0x2u));
  /* 1124c78c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124c78f push edx */
  push32((uint32_t)(EDX));
  /* 1124c790 call 0x1124d2b0 */
  push32(0x1124c795u); f_1124d2b0();
  /* 1124c795 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1124c798:;
  /* 1124c798 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1124c79a call 0x1124c7c0 */
  push32(0x1124c79fu); f_1124c7c0();
  /* 1124c79f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1124c7a2:;
  /* 1124c7a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124c7a5 mov ecx, dword ptr [eax*4 + 0x1127ee38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1127ee38)));
  /* 1124c7ac push ecx */
  push32((uint32_t)(ECX));
  /* 1124c7ad call dword ptr [0x11283450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283450))), 0x1124c7b3u);
  /* 1124c7b3 mov esp, ebp */
  ESP = (EBP);
  /* 1124c7b5 pop ebp */
  EBP = (pop32());
  /* 1124c7b6 ret  */
  ESPCHK(0x1124c720u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c7c0 @ 0x1124c7c0 (22 bytes, 8 insns) */
void f_1124c7c0(void) {
  FTRACE(0x1124c7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124c7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1124c7c1 mov ebp, esp */
  EBP = (ESP);
  /* 1124c7c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124c7c6 mov ecx, dword ptr [eax*4 + 0x1127ee38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1127ee38)));
  /* 1124c7cd push ecx */
  push32((uint32_t)(ECX));
  /* 1124c7ce call dword ptr [0x11283420] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283420))), 0x1124c7d4u);
  /* 1124c7d4 pop ebp */
  EBP = (pop32());
  /* 1124c7d5 ret  */
  ESPCHK(0x1124c7c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c7e0 @ 0x1124c7e0 (26 bytes, 10 insns) */
void f_1124c7e0(void) {
  FTRACE(0x1124c7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124c7e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1124c7e1 mov ebp, esp */
  EBP = (ESP);
  /* 1124c7e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124c7e6 push eax */
  push32((uint32_t)(EAX));
  /* 1124c7e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124c7e9 call dword ptr [0x11283424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283424))), 0x1124c7efu);
  /* 1124c7ef push 0xff */
  push32((uint32_t)(0xffu));
  /* 1124c7f4 call dword ptr [0x1128341c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1128341c))), 0x1124c7fau);
  /* 1124c7fa pop ebp */
  EBP = (pop32());
  /* 1124c7fb ret  */
  ESPCHK(0x1124c7e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c800 @ 0x1124c800 (29 bytes, 13 insns) */
void f_1124c800(void) {
  FTRACE(0x1124c800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124c800 push ebp */
  push32((uint32_t)(EBP));
  /* 1124c801 mov ebp, esp */
  EBP = (ESP);
  /* 1124c803 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124c805 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124c807 push 1 */
  push32((uint32_t)(0x1u));
  /* 1124c809 mov eax, dword ptr [0x112815f8] */
  EAX = (r32((uint32_t)(0x112815f8)));
  /* 1124c80e push eax */
  push32((uint32_t)(EAX));
  /* 1124c80f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124c812 push ecx */
  push32((uint32_t)(ECX));
  /* 1124c813 call 0x1124c870 */
  push32(0x1124c818u); f_1124c870();
  /* 1124c818 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c81b pop ebp */
  EBP = (pop32());
  /* 1124c81c ret  */
  ESPCHK(0x1124c800u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c820 @ 0x1124c820 (35 bytes, 16 insns) */
void f_1124c820(void) {
  FTRACE(0x1124c820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124c820 push ebp */
  push32((uint32_t)(EBP));
  /* 1124c821 mov ebp, esp */
  EBP = (ESP);
  /* 1124c823 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1124c826 push eax */
  push32((uint32_t)(EAX));
  /* 1124c827 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124c82a push ecx */
  push32((uint32_t)(ECX));
  /* 1124c82b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124c82e push edx */
  push32((uint32_t)(EDX));
  /* 1124c82f mov eax, dword ptr [0x112815f8] */
  EAX = (r32((uint32_t)(0x112815f8)));
  /* 1124c834 push eax */
  push32((uint32_t)(EAX));
  /* 1124c835 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124c838 push ecx */
  push32((uint32_t)(ECX));
  /* 1124c839 call 0x1124c870 */
  push32(0x1124c83eu); f_1124c870();
  /* 1124c83e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c841 pop ebp */
  EBP = (pop32());
  /* 1124c842 ret  */
  ESPCHK(0x1124c820u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c850 @ 0x1124c850 (27 bytes, 13 insns) */
void f_1124c850(void) {
  FTRACE(0x1124c850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124c850 push ebp */
  push32((uint32_t)(EBP));
  /* 1124c851 mov ebp, esp */
  EBP = (ESP);
  /* 1124c853 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124c855 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124c857 push 1 */
  push32((uint32_t)(0x1u));
  /* 1124c859 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124c85c push eax */
  push32((uint32_t)(EAX));
  /* 1124c85d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124c860 push ecx */
  push32((uint32_t)(ECX));
  /* 1124c861 call 0x1124c870 */
  push32(0x1124c866u); f_1124c870();
  /* 1124c866 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c869 pop ebp */
  EBP = (pop32());
  /* 1124c86a ret  */
  ESPCHK(0x1124c850u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c870 @ 0x1124c870 (94 bytes, 38 insns) */
void f_1124c870(void) {
  FTRACE(0x1124c870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124c870 push ebp */
  push32((uint32_t)(EBP));
  /* 1124c871 mov ebp, esp */
  EBP = (ESP);
  /* 1124c873 push ecx */
  push32((uint32_t)(ECX));
L_1124c874:;
  /* 1124c874 push 9 */
  push32((uint32_t)(0x9u));
  /* 1124c876 call 0x1124c720 */
  push32(0x1124c87bu); f_1124c720();
  /* 1124c87b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c87e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1124c881 push eax */
  push32((uint32_t)(EAX));
  /* 1124c882 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1124c885 push ecx */
  push32((uint32_t)(ECX));
  /* 1124c886 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124c889 push edx */
  push32((uint32_t)(EDX));
  /* 1124c88a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124c88d push eax */
  push32((uint32_t)(EAX));
  /* 1124c88e call 0x1124c8f0 */
  push32(0x1124c893u); f_1124c8f0();
  /* 1124c893 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c896 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1124c899 push 9 */
  push32((uint32_t)(0x9u));
  /* 1124c89b call 0x1124c7c0 */
  push32(0x1124c8a0u); f_1124c7c0();
  /* 1124c8a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c8a3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124c8a7 jne 0x1124c8af */
  if (!C.zf) goto L_1124c8af;
  /* 1124c8a9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124c8ad jne 0x1124c8b4 */
  if (!C.zf) goto L_1124c8b4;
L_1124c8af:;
  /* 1124c8af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124c8b2 jmp 0x1124c8ca */
  goto L_1124c8ca;
L_1124c8b4:;
  /* 1124c8b4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124c8b7 push ecx */
  push32((uint32_t)(ECX));
  /* 1124c8b8 call 0x11253020 */
  push32(0x1124c8bdu); f_11253020();
  /* 1124c8bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c8c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124c8c2 jne 0x1124c8c8 */
  if (!C.zf) goto L_1124c8c8;
  /* 1124c8c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124c8c6 jmp 0x1124c8ca */
  goto L_1124c8ca;
L_1124c8c8:;
  /* 1124c8c8 jmp 0x1124c874 */
  goto L_1124c874;
L_1124c8ca:;
  /* 1124c8ca mov esp, ebp */
  ESP = (EBP);
  /* 1124c8cc pop ebp */
  EBP = (pop32());
  /* 1124c8cd ret  */
  ESPCHK(0x1124c870u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c8d0 @ 0x1124c8d0 (23 bytes, 11 insns) */
void f_1124c8d0(void) {
  FTRACE(0x1124c8d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124c8d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1124c8d1 mov ebp, esp */
  EBP = (ESP);
  /* 1124c8d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124c8d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124c8d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 1124c8d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124c8dc push eax */
  push32((uint32_t)(EAX));
  /* 1124c8dd call 0x1124c8f0 */
  push32(0x1124c8e2u); f_1124c8f0();
  /* 1124c8e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c8e5 pop ebp */
  EBP = (pop32());
  /* 1124c8e6 ret  */
  ESPCHK(0x1124c8d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c8f0 @ 0x1124c8f0 (787 bytes, 254 insns) */
void f_1124c8f0(void) {
  FTRACE(0x1124c8f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124c8f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1124c8f1 mov ebp, esp */
  EBP = (ESP);
  /* 1124c8f3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124c8f6 push ebx */
  push32((uint32_t)(EBX));
  /* 1124c8f7 push esi */
  push32((uint32_t)(ESI));
  /* 1124c8f8 push edi */
  push32((uint32_t)(EDI));
  /* 1124c8f9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1124c900 mov eax, dword ptr [0x1127eef8] */
  EAX = (r32((uint32_t)(0x1127eef8)));
  /* 1124c905 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1124c908 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124c90a je 0x1124c93c */
  if (C.zf) goto L_1124c93c;
L_1124c90c:;
  /* 1124c90c call 0x1124d9c0 */
  push32(0x1124c911u); f_1124d9c0();
  /* 1124c911 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124c913 jne 0x1124c936 */
  if (!C.zf) goto L_1124c936;
  /* 1124c915 push 0x1127b6c8 */
  push32((uint32_t)(0x1127b6c8u));
  /* 1124c91a push 0 */
  push32((uint32_t)(0x0u));
  /* 1124c91c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 1124c921 push 0x1127b6bc */
  push32((uint32_t)(0x1127b6bcu));
  /* 1124c926 push 2 */
  push32((uint32_t)(0x2u));
  /* 1124c928 call 0x1124b3e0 */
  push32(0x1124c92du); f_1124b3e0();
  /* 1124c92d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c930 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124c933 jne 0x1124c936 */
  if (!C.zf) goto L_1124c936;
  /* 1124c935 int3  */
  x86_unimpl("int3 @ 0x1124c935");
L_1124c936:;
  /* 1124c936 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1124c938 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1124c93a jne 0x1124c90c */
  if (!C.zf) goto L_1124c90c;
L_1124c93c:;
  /* 1124c93c mov edx, dword ptr [0x1127eefc] */
  EDX = (r32((uint32_t)(0x1127eefc)));
  /* 1124c942 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1124c945 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124c948 cmp eax, dword ptr [0x1127ef00] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1127ef00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124c94e jne 0x1124c951 */
  if (!C.zf) goto L_1124c951;
  /* 1124c950 int3  */
  x86_unimpl("int3 @ 0x1124c950");
L_1124c951:;
  /* 1124c951 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1124c954 push ecx */
  push32((uint32_t)(ECX));
  /* 1124c955 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124c958 push edx */
  push32((uint32_t)(EDX));
  /* 1124c959 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124c95c push eax */
  push32((uint32_t)(EAX));
  /* 1124c95d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124c960 push ecx */
  push32((uint32_t)(ECX));
  /* 1124c961 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124c964 push edx */
  push32((uint32_t)(EDX));
  /* 1124c965 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124c967 push 1 */
  push32((uint32_t)(0x1u));
  /* 1124c969 call dword ptr [0x1127f230] */
  call_ind((uint32_t)(r32((uint32_t)(0x1127f230))), 0x1124c96fu);
  /* 1124c96f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c972 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124c974 jne 0x1124c9d4 */
  if (!C.zf) goto L_1124c9d4;
  /* 1124c976 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124c97a je 0x1124c9a7 */
  if (C.zf) goto L_1124c9a7;
L_1124c97c:;
  /* 1124c97c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1124c97f push eax */
  push32((uint32_t)(EAX));
  /* 1124c980 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124c983 push ecx */
  push32((uint32_t)(ECX));
  /* 1124c984 push 0x1127b684 */
  push32((uint32_t)(0x1127b684u));
  /* 1124c989 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124c98b push 0 */
  push32((uint32_t)(0x0u));
  /* 1124c98d push 0 */
  push32((uint32_t)(0x0u));
  /* 1124c98f push 0 */
  push32((uint32_t)(0x0u));
  /* 1124c991 call 0x1124b3e0 */
  push32(0x1124c996u); f_1124b3e0();
  /* 1124c996 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c999 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124c99c jne 0x1124c99f */
  if (!C.zf) goto L_1124c99f;
  /* 1124c99e int3  */
  x86_unimpl("int3 @ 0x1124c99e");
L_1124c99f:;
  /* 1124c99f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1124c9a1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1124c9a3 jne 0x1124c97c */
  if (!C.zf) goto L_1124c97c;
  /* 1124c9a5 jmp 0x1124c9cd */
  goto L_1124c9cd;
L_1124c9a7:;
  /* 1124c9a7 push 0x1127b660 */
  push32((uint32_t)(0x1127b660u));
  /* 1124c9ac push 0x1127b65c */
  push32((uint32_t)(0x1127b65cu));
  /* 1124c9b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124c9b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124c9b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124c9b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124c9b9 call 0x1124b3e0 */
  push32(0x1124c9beu); f_1124b3e0();
  /* 1124c9be add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124c9c1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124c9c4 jne 0x1124c9c7 */
  if (!C.zf) goto L_1124c9c7;
  /* 1124c9c6 int3  */
  x86_unimpl("int3 @ 0x1124c9c6");
L_1124c9c7:;
  /* 1124c9c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124c9c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124c9cb jne 0x1124c9a7 */
  if (!C.zf) goto L_1124c9a7;
L_1124c9cd:;
  /* 1124c9cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124c9cf jmp 0x1124cbfc */
  goto L_1124cbfc;
L_1124c9d4:;
  /* 1124c9d4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124c9d7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1124c9dd cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124c9e0 je 0x1124c9f6 */
  if (C.zf) goto L_1124c9f6;
  /* 1124c9e2 mov edx, dword ptr [0x1127eef8] */
  EDX = (r32((uint32_t)(0x1127eef8)));
  /* 1124c9e8 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1124c9eb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1124c9ed jne 0x1124c9f6 */
  if (!C.zf) goto L_1124c9f6;
  /* 1124c9ef mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_1124c9f6:;
  /* 1124c9f6 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124c9fa ja 0x1124ca07 */
  if ((!C.cf&&!C.zf)) goto L_1124ca07;
  /* 1124c9fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124c9ff add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124ca02 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124ca05 jbe 0x1124ca33 */
  if ((C.cf||C.zf)) goto L_1124ca33;
L_1124ca07:;
  /* 1124ca07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124ca0a push ecx */
  push32((uint32_t)(ECX));
  /* 1124ca0b push 0x1127b638 */
  push32((uint32_t)(0x1127b638u));
  /* 1124ca10 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124ca12 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124ca14 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124ca16 push 1 */
  push32((uint32_t)(0x1u));
  /* 1124ca18 call 0x1124b3e0 */
  push32(0x1124ca1du); f_1124b3e0();
  /* 1124ca1d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124ca20 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124ca23 jne 0x1124ca26 */
  if (!C.zf) goto L_1124ca26;
  /* 1124ca25 int3  */
  x86_unimpl("int3 @ 0x1124ca25");
L_1124ca26:;
  /* 1124ca26 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1124ca28 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1124ca2a jne 0x1124ca07 */
  if (!C.zf) goto L_1124ca07;
  /* 1124ca2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124ca2e jmp 0x1124cbfc */
  goto L_1124cbfc;
L_1124ca33:;
  /* 1124ca33 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124ca36 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1124ca3b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124ca3e je 0x1124ca80 */
  if (C.zf) goto L_1124ca80;
  /* 1124ca40 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124ca44 je 0x1124ca80 */
  if (C.zf) goto L_1124ca80;
  /* 1124ca46 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124ca49 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1124ca4f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124ca52 je 0x1124ca80 */
  if (C.zf) goto L_1124ca80;
  /* 1124ca54 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124ca58 je 0x1124ca80 */
  if (C.zf) goto L_1124ca80;
L_1124ca5a:;
  /* 1124ca5a push 0x1127b604 */
  push32((uint32_t)(0x1127b604u));
  /* 1124ca5f push 0x1127b65c */
  push32((uint32_t)(0x1127b65cu));
  /* 1124ca64 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124ca66 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124ca68 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124ca6a push 1 */
  push32((uint32_t)(0x1u));
  /* 1124ca6c call 0x1124b3e0 */
  push32(0x1124ca71u); f_1124b3e0();
  /* 1124ca71 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124ca74 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124ca77 jne 0x1124ca7a */
  if (!C.zf) goto L_1124ca7a;
  /* 1124ca79 int3  */
  x86_unimpl("int3 @ 0x1124ca79");
L_1124ca7a:;
  /* 1124ca7a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1124ca7c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1124ca7e jne 0x1124ca5a */
  if (!C.zf) goto L_1124ca5a;
L_1124ca80:;
  /* 1124ca80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124ca83 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124ca86 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1124ca89 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1124ca8c push ecx */
  push32((uint32_t)(ECX));
  /* 1124ca8d call 0x112530d0 */
  push32(0x1124ca92u); f_112530d0();
  /* 1124ca92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124ca95 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1124ca98 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124ca9c jne 0x1124caa5 */
  if (!C.zf) goto L_1124caa5;
  /* 1124ca9e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124caa0 jmp 0x1124cbfc */
  goto L_1124cbfc;
L_1124caa5:;
  /* 1124caa5 mov edx, dword ptr [0x1127eefc] */
  EDX = (r32((uint32_t)(0x1127eefc)));
  /* 1124caab add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124caae mov dword ptr [0x1127eefc], edx */
  w32((uint32_t)(0x1127eefc), (EDX));
  /* 1124cab4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124cab8 je 0x1124cb03 */
  if (C.zf) goto L_1124cb03;
  /* 1124caba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124cabd mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1124cac3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124cac6 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1124cacd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124cad0 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 1124cad7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124cada mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 1124cae1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124cae4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124cae7 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 1124caea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124caed mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 1124caf4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124caf7 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 1124cafe jmp 0x1124cba3 */
  goto L_1124cba3;
L_1124cb03:;
  /* 1124cb03 mov edx, dword ptr [0x11281474] */
  EDX = (r32((uint32_t)(0x11281474)));
  /* 1124cb09 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124cb0c mov dword ptr [0x11281474], edx */
  w32((uint32_t)(0x11281474), (EDX));
  /* 1124cb12 mov eax, dword ptr [0x1128147c] */
  EAX = (r32((uint32_t)(0x1128147c)));
  /* 1124cb17 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124cb1a mov dword ptr [0x1128147c], eax */
  w32((uint32_t)(0x1128147c), (EAX));
  /* 1124cb1f mov ecx, dword ptr [0x1128147c] */
  ECX = (r32((uint32_t)(0x1128147c)));
  /* 1124cb25 cmp ecx, dword ptr [0x11281480] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11281480))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124cb2b jbe 0x1124cb39 */
  if ((C.cf||C.zf)) goto L_1124cb39;
  /* 1124cb2d mov edx, dword ptr [0x1128147c] */
  EDX = (r32((uint32_t)(0x1128147c)));
  /* 1124cb33 mov dword ptr [0x11281480], edx */
  w32((uint32_t)(0x11281480), (EDX));
L_1124cb39:;
  /* 1124cb39 cmp dword ptr [0x11281478], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11281478))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124cb40 je 0x1124cb4f */
  if (C.zf) goto L_1124cb4f;
  /* 1124cb42 mov eax, dword ptr [0x11281478] */
  EAX = (r32((uint32_t)(0x11281478)));
  /* 1124cb47 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124cb4a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1124cb4d jmp 0x1124cb58 */
  goto L_1124cb58;
L_1124cb4f:;
  /* 1124cb4f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124cb52 mov dword ptr [0x11281470], edx */
  w32((uint32_t)(0x11281470), (EDX));
L_1124cb58:;
  /* 1124cb58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124cb5b mov ecx, dword ptr [0x11281478] */
  ECX = (r32((uint32_t)(0x11281478)));
  /* 1124cb61 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1124cb63 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124cb66 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 1124cb6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124cb70 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124cb73 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1124cb76 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124cb79 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1124cb7c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 1124cb7f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124cb82 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124cb85 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 1124cb88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124cb8b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124cb8e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 1124cb91 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124cb94 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124cb97 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 1124cb9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124cb9d mov dword ptr [0x11281478], ecx */
  w32((uint32_t)(0x11281478), (ECX));
L_1124cba3:;
  /* 1124cba3 push 4 */
  push32((uint32_t)(0x4u));
  /* 1124cba5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1124cba7 mov dl, byte ptr [0x1127ef04] */
  DL = (r8((uint32_t)(0x1127ef04)));
  /* 1124cbad push edx */
  push32((uint32_t)(EDX));
  /* 1124cbae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124cbb1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124cbb4 push eax */
  push32((uint32_t)(EAX));
  /* 1124cbb5 call 0x11252c30 */
  push32(0x1124cbbau); f_11252c30();
  /* 1124cbba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124cbbd push 4 */
  push32((uint32_t)(0x4u));
  /* 1124cbbf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1124cbc1 mov cl, byte ptr [0x1127ef04] */
  CL = (r8((uint32_t)(0x1127ef04)));
  /* 1124cbc7 push ecx */
  push32((uint32_t)(ECX));
  /* 1124cbc8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124cbcb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124cbce lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 1124cbd2 push ecx */
  push32((uint32_t)(ECX));
  /* 1124cbd3 call 0x11252c30 */
  push32(0x1124cbd8u); f_11252c30();
  /* 1124cbd8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124cbdb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124cbde push edx */
  push32((uint32_t)(EDX));
  /* 1124cbdf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124cbe1 mov al, byte ptr [0x1127ef06] */
  AL = (r8((uint32_t)(0x1127ef06)));
  /* 1124cbe6 push eax */
  push32((uint32_t)(EAX));
  /* 1124cbe7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124cbea add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124cbed push ecx */
  push32((uint32_t)(ECX));
  /* 1124cbee call 0x11252c30 */
  push32(0x1124cbf3u); f_11252c30();
  /* 1124cbf3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124cbf6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124cbf9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1124cbfc:;
  /* 1124cbfc pop edi */
  EDI = (pop32());
  /* 1124cbfd pop esi */
  ESI = (pop32());
  /* 1124cbfe pop ebx */
  EBX = (pop32());
  /* 1124cbff mov esp, ebp */
  ESP = (EBP);
  /* 1124cc01 pop ebp */
  EBP = (pop32());
  /* 1124cc02 ret  */
  ESPCHK(0x1124c8f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc10 @ 0x1124cc10 (27 bytes, 13 insns) */
void f_1124cc10(void) {
  FTRACE(0x1124cc10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124cc10 push ebp */
  push32((uint32_t)(EBP));
  /* 1124cc11 mov ebp, esp */
  EBP = (ESP);
  /* 1124cc13 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124cc15 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124cc17 push 1 */
  push32((uint32_t)(0x1u));
  /* 1124cc19 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124cc1c push eax */
  push32((uint32_t)(EAX));
  /* 1124cc1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124cc20 push ecx */
  push32((uint32_t)(ECX));
  /* 1124cc21 call 0x1124cc30 */
  push32(0x1124cc26u); f_1124cc30();
  /* 1124cc26 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124cc29 pop ebp */
  EBP = (pop32());
  /* 1124cc2a ret  */
  ESPCHK(0x1124cc10u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x1124cc30 (96 bytes, 37 insns) */
void f_1124cc30(void) {
  FTRACE(0x1124cc30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124cc30 push ebp */
  push32((uint32_t)(EBP));
  /* 1124cc31 mov ebp, esp */
  EBP = (ESP);
  /* 1124cc33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124cc36 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124cc39 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1124cc3d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1124cc40 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1124cc43 push ecx */
  push32((uint32_t)(ECX));
  /* 1124cc44 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1124cc47 push edx */
  push32((uint32_t)(EDX));
  /* 1124cc48 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124cc4b push eax */
  push32((uint32_t)(EAX));
  /* 1124cc4c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124cc4f push ecx */
  push32((uint32_t)(ECX));
  /* 1124cc50 call 0x1124c820 */
  push32(0x1124cc55u); f_1124c820();
  /* 1124cc55 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124cc58 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1124cc5b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124cc5f je 0x1124cc89 */
  if (C.zf) goto L_1124cc89;
  /* 1124cc61 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124cc64 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1124cc67 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1124cc6a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124cc6d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1124cc70:;
  /* 1124cc70 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1124cc73 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124cc76 jae 0x1124cc89 */
  if (!C.cf) goto L_1124cc89;
  /* 1124cc78 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1124cc7b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1124cc7e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1124cc81 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124cc84 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1124cc87 jmp 0x1124cc70 */
  goto L_1124cc70;
L_1124cc89:;
  /* 1124cc89 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124cc8c mov esp, ebp */
  ESP = (EBP);
  /* 1124cc8e pop ebp */
  EBP = (pop32());
  /* 1124cc8f ret  */
  ESPCHK(0x1124cc30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc90 @ 0x1124cc90 (27 bytes, 13 insns) */
void f_1124cc90(void) {
  FTRACE(0x1124cc90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124cc90 push ebp */
  push32((uint32_t)(EBP));
  /* 1124cc91 mov ebp, esp */
  EBP = (ESP);
  /* 1124cc93 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124cc95 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124cc97 push 1 */
  push32((uint32_t)(0x1u));
  /* 1124cc99 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124cc9c push eax */
  push32((uint32_t)(EAX));
  /* 1124cc9d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124cca0 push ecx */
  push32((uint32_t)(ECX));
  /* 1124cca1 call 0x1124ccb0 */
  push32(0x1124cca6u); f_1124ccb0();
  /* 1124cca6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124cca9 pop ebp */
  EBP = (pop32());
  /* 1124ccaa ret  */
  ESPCHK(0x1124cc90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ccb0 @ 0x1124ccb0 (64 bytes, 27 insns) */
void f_1124ccb0(void) {
  FTRACE(0x1124ccb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124ccb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1124ccb1 mov ebp, esp */
  EBP = (ESP);
  /* 1124ccb3 push ecx */
  push32((uint32_t)(ECX));
  /* 1124ccb4 push 9 */
  push32((uint32_t)(0x9u));
  /* 1124ccb6 call 0x1124c720 */
  push32(0x1124ccbbu); f_1124c720();
  /* 1124ccbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124ccbe push 1 */
  push32((uint32_t)(0x1u));
  /* 1124ccc0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1124ccc3 push eax */
  push32((uint32_t)(EAX));
  /* 1124ccc4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1124ccc7 push ecx */
  push32((uint32_t)(ECX));
  /* 1124ccc8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124cccb push edx */
  push32((uint32_t)(EDX));
  /* 1124cccc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124cccf push eax */
  push32((uint32_t)(EAX));
  /* 1124ccd0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124ccd3 push ecx */
  push32((uint32_t)(ECX));
  /* 1124ccd4 call 0x1124ccf0 */
  push32(0x1124ccd9u); f_1124ccf0();
  /* 1124ccd9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124ccdc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1124ccdf push 9 */
  push32((uint32_t)(0x9u));
  /* 1124cce1 call 0x1124c7c0 */
  push32(0x1124cce6u); f_1124c7c0();
  /* 1124cce6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124cce9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124ccec mov esp, ebp */
  ESP = (EBP);
  /* 1124ccee pop ebp */
  EBP = (pop32());
  /* 1124ccef ret  */
  ESPCHK(0x1124ccb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ccf0 @ 0x1124ccf0 (1297 bytes, 431 insns) */
void f_1124ccf0(void) {
  FTRACE(0x1124ccf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124ccf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1124ccf1 mov ebp, esp */
  EBP = (ESP);
  /* 1124ccf3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124ccf6 push ebx */
  push32((uint32_t)(EBX));
  /* 1124ccf7 push esi */
  push32((uint32_t)(ESI));
  /* 1124ccf8 push edi */
  push32((uint32_t)(EDI));
  /* 1124ccf9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1124cd00 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124cd04 jne 0x1124cd23 */
  if (!C.zf) goto L_1124cd23;
  /* 1124cd06 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1124cd09 push eax */
  push32((uint32_t)(EAX));
  /* 1124cd0a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1124cd0d push ecx */
  push32((uint32_t)(ECX));
  /* 1124cd0e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124cd11 push edx */
  push32((uint32_t)(EDX));
  /* 1124cd12 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124cd15 push eax */
  push32((uint32_t)(EAX));
  /* 1124cd16 call 0x1124c820 */
  push32(0x1124cd1bu); f_1124c820();
  /* 1124cd1b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124cd1e jmp 0x1124d1fa */
  goto L_1124d1fa;
L_1124cd23:;
  /* 1124cd23 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124cd27 je 0x1124cd46 */
  if (C.zf) goto L_1124cd46;
  /* 1124cd29 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124cd2d jne 0x1124cd46 */
  if (!C.zf) goto L_1124cd46;
  /* 1124cd2f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124cd32 push ecx */
  push32((uint32_t)(ECX));
  /* 1124cd33 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124cd36 push edx */
  push32((uint32_t)(EDX));
  /* 1124cd37 call 0x1124d2b0 */
  push32(0x1124cd3cu); f_1124d2b0();
  /* 1124cd3c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124cd3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124cd41 jmp 0x1124d1fa */
  goto L_1124d1fa;
L_1124cd46:;
  /* 1124cd46 mov eax, dword ptr [0x1127eef8] */
  EAX = (r32((uint32_t)(0x1127eef8)));
  /* 1124cd4b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1124cd4e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124cd50 je 0x1124cd82 */
  if (C.zf) goto L_1124cd82;
L_1124cd52:;
  /* 1124cd52 call 0x1124d9c0 */
  push32(0x1124cd57u); f_1124d9c0();
  /* 1124cd57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124cd59 jne 0x1124cd7c */
  if (!C.zf) goto L_1124cd7c;
  /* 1124cd5b push 0x1127b6c8 */
  push32((uint32_t)(0x1127b6c8u));
  /* 1124cd60 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124cd62 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 1124cd67 push 0x1127b6bc */
  push32((uint32_t)(0x1127b6bcu));
  /* 1124cd6c push 2 */
  push32((uint32_t)(0x2u));
  /* 1124cd6e call 0x1124b3e0 */
  push32(0x1124cd73u); f_1124b3e0();
  /* 1124cd73 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124cd76 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124cd79 jne 0x1124cd7c */
  if (!C.zf) goto L_1124cd7c;
  /* 1124cd7b int3  */
  x86_unimpl("int3 @ 0x1124cd7b");
L_1124cd7c:;
  /* 1124cd7c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1124cd7e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1124cd80 jne 0x1124cd52 */
  if (!C.zf) goto L_1124cd52;
L_1124cd82:;
  /* 1124cd82 mov edx, dword ptr [0x1127eefc] */
  EDX = (r32((uint32_t)(0x1127eefc)));
  /* 1124cd88 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1124cd8b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1124cd8e cmp eax, dword ptr [0x1127ef00] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1127ef00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124cd94 jne 0x1124cd97 */
  if (!C.zf) goto L_1124cd97;
  /* 1124cd96 int3  */
  x86_unimpl("int3 @ 0x1124cd96");
L_1124cd97:;
  /* 1124cd97 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1124cd9a push ecx */
  push32((uint32_t)(ECX));
  /* 1124cd9b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1124cd9e push edx */
  push32((uint32_t)(EDX));
  /* 1124cd9f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1124cda2 push eax */
  push32((uint32_t)(EAX));
  /* 1124cda3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124cda6 push ecx */
  push32((uint32_t)(ECX));
  /* 1124cda7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124cdaa push edx */
  push32((uint32_t)(EDX));
  /* 1124cdab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124cdae push eax */
  push32((uint32_t)(EAX));
  /* 1124cdaf push 2 */
  push32((uint32_t)(0x2u));
  /* 1124cdb1 call dword ptr [0x1127f230] */
  call_ind((uint32_t)(r32((uint32_t)(0x1127f230))), 0x1124cdb7u);
  /* 1124cdb7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124cdba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124cdbc jne 0x1124ce1c */
  if (!C.zf) goto L_1124ce1c;
  /* 1124cdbe cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124cdc2 je 0x1124cdef */
  if (C.zf) goto L_1124cdef;
L_1124cdc4:;
  /* 1124cdc4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1124cdc7 push ecx */
  push32((uint32_t)(ECX));
  /* 1124cdc8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1124cdcb push edx */
  push32((uint32_t)(EDX));
  /* 1124cdcc push 0x1127b844 */
  push32((uint32_t)(0x1127b844u));
  /* 1124cdd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124cdd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124cdd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124cdd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124cdd9 call 0x1124b3e0 */
  push32(0x1124cddeu); f_1124b3e0();
  /* 1124cdde add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124cde1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124cde4 jne 0x1124cde7 */
  if (!C.zf) goto L_1124cde7;
  /* 1124cde6 int3  */
  x86_unimpl("int3 @ 0x1124cde6");
L_1124cde7:;
  /* 1124cde7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124cde9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124cdeb jne 0x1124cdc4 */
  if (!C.zf) goto L_1124cdc4;
  /* 1124cded jmp 0x1124ce15 */
  goto L_1124ce15;
L_1124cdef:;
  /* 1124cdef push 0x1127b820 */
  push32((uint32_t)(0x1127b820u));
  /* 1124cdf4 push 0x1127b65c */
  push32((uint32_t)(0x1127b65cu));
  /* 1124cdf9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124cdfb push 0 */
  push32((uint32_t)(0x0u));
  /* 1124cdfd push 0 */
  push32((uint32_t)(0x0u));
  /* 1124cdff push 0 */
  push32((uint32_t)(0x0u));
  /* 1124ce01 call 0x1124b3e0 */
  push32(0x1124ce06u); f_1124b3e0();
  /* 1124ce06 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124ce09 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124ce0c jne 0x1124ce0f */
  if (!C.zf) goto L_1124ce0f;
  /* 1124ce0e int3  */
  x86_unimpl("int3 @ 0x1124ce0e");
L_1124ce0f:;
  /* 1124ce0f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1124ce11 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1124ce13 jne 0x1124cdef */
  if (!C.zf) goto L_1124cdef;
L_1124ce15:;
  /* 1124ce15 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124ce17 jmp 0x1124d1fa */
  goto L_1124d1fa;
L_1124ce1c:;
  /* 1124ce1c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124ce20 jbe 0x1124ce4e */
  if ((C.cf||C.zf)) goto L_1124ce4e;
L_1124ce22:;
  /* 1124ce22 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124ce25 push edx */
  push32((uint32_t)(EDX));
  /* 1124ce26 push 0x1127b7f0 */
  push32((uint32_t)(0x1127b7f0u));
  /* 1124ce2b push 0 */
  push32((uint32_t)(0x0u));
  /* 1124ce2d push 0 */
  push32((uint32_t)(0x0u));
  /* 1124ce2f push 0 */
  push32((uint32_t)(0x0u));
  /* 1124ce31 push 1 */
  push32((uint32_t)(0x1u));
  /* 1124ce33 call 0x1124b3e0 */
  push32(0x1124ce38u); f_1124b3e0();
  /* 1124ce38 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124ce3b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124ce3e jne 0x1124ce41 */
  if (!C.zf) goto L_1124ce41;
  /* 1124ce40 int3  */
  x86_unimpl("int3 @ 0x1124ce40");
L_1124ce41:;
  /* 1124ce41 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124ce43 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124ce45 jne 0x1124ce22 */
  if (!C.zf) goto L_1124ce22;
  /* 1124ce47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124ce49 jmp 0x1124d1fa */
  goto L_1124d1fa;
L_1124ce4e:;
  /* 1124ce4e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124ce52 je 0x1124ce96 */
  if (C.zf) goto L_1124ce96;
  /* 1124ce54 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124ce57 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1124ce5d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124ce60 je 0x1124ce96 */
  if (C.zf) goto L_1124ce96;
  /* 1124ce62 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124ce65 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1124ce6b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124ce6e je 0x1124ce96 */
  if (C.zf) goto L_1124ce96;
L_1124ce70:;
  /* 1124ce70 push 0x1127b604 */
  push32((uint32_t)(0x1127b604u));
  /* 1124ce75 push 0x1127b65c */
  push32((uint32_t)(0x1127b65cu));
  /* 1124ce7a push 0 */
  push32((uint32_t)(0x0u));
  /* 1124ce7c push 0 */
  push32((uint32_t)(0x0u));
  /* 1124ce7e push 0 */
  push32((uint32_t)(0x0u));
  /* 1124ce80 push 1 */
  push32((uint32_t)(0x1u));
  /* 1124ce82 call 0x1124b3e0 */
  push32(0x1124ce87u); f_1124b3e0();
  /* 1124ce87 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124ce8a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124ce8d jne 0x1124ce90 */
  if (!C.zf) goto L_1124ce90;
  /* 1124ce8f int3  */
  x86_unimpl("int3 @ 0x1124ce8f");
L_1124ce90:;
  /* 1124ce90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124ce92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124ce94 jne 0x1124ce70 */
  if (!C.zf) goto L_1124ce70;
L_1124ce96:;
  /* 1124ce96 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124ce99 push ecx */
  push32((uint32_t)(ECX));
  /* 1124ce9a call 0x1124de20 */
  push32(0x1124ce9fu); f_1124de20();
  /* 1124ce9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124cea2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124cea4 jne 0x1124cec7 */
  if (!C.zf) goto L_1124cec7;
  /* 1124cea6 push 0x1127b7cc */
  push32((uint32_t)(0x1127b7ccu));
  /* 1124ceab push 0 */
  push32((uint32_t)(0x0u));
  /* 1124cead push 0x261 */
  push32((uint32_t)(0x261u));
  /* 1124ceb2 push 0x1127b6bc */
  push32((uint32_t)(0x1127b6bcu));
  /* 1124ceb7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1124ceb9 call 0x1124b3e0 */
  push32(0x1124cebeu); f_1124b3e0();
  /* 1124cebe add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124cec1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124cec4 jne 0x1124cec7 */
  if (!C.zf) goto L_1124cec7;
  /* 1124cec6 int3  */
  x86_unimpl("int3 @ 0x1124cec6");
L_1124cec7:;
  /* 1124cec7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1124cec9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1124cecb jne 0x1124ce96 */
  if (!C.zf) goto L_1124ce96;
  /* 1124cecd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124ced0 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124ced3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1124ced6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124ced9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124cedd jne 0x1124cee6 */
  if (!C.zf) goto L_1124cee6;
  /* 1124cedf mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_1124cee6:;
  /* 1124cee6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124ceea je 0x1124cf2a */
  if (C.zf) goto L_1124cf2a;
L_1124ceec:;
  /* 1124ceec mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124ceef cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124cef6 jne 0x1124cf01 */
  if (!C.zf) goto L_1124cf01;
  /* 1124cef8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124cefb cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124ceff je 0x1124cf22 */
  if (C.zf) goto L_1124cf22;
L_1124cf01:;
  /* 1124cf01 push 0x1127b784 */
  push32((uint32_t)(0x1127b784u));
  /* 1124cf06 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124cf08 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 1124cf0d push 0x1127b6bc */
  push32((uint32_t)(0x1127b6bcu));
  /* 1124cf12 push 2 */
  push32((uint32_t)(0x2u));
  /* 1124cf14 call 0x1124b3e0 */
  push32(0x1124cf19u); f_1124b3e0();
  /* 1124cf19 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124cf1c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124cf1f jne 0x1124cf22 */
  if (!C.zf) goto L_1124cf22;
  /* 1124cf21 int3  */
  x86_unimpl("int3 @ 0x1124cf21");
L_1124cf22:;
  /* 1124cf22 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1124cf24 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1124cf26 jne 0x1124ceec */
  if (!C.zf) goto L_1124ceec;
  /* 1124cf28 jmp 0x1124cf8e */
  goto L_1124cf8e;
L_1124cf2a:;
  /* 1124cf2a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124cf2d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1124cf30 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1124cf35 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124cf38 jne 0x1124cf4f */
  if (!C.zf) goto L_1124cf4f;
  /* 1124cf3a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124cf3d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1124cf43 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124cf46 jne 0x1124cf4f */
  if (!C.zf) goto L_1124cf4f;
  /* 1124cf48 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_1124cf4f:;
  /* 1124cf4f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124cf52 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1124cf55 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1124cf5a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124cf5d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1124cf63 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124cf65 je 0x1124cf88 */
  if (C.zf) goto L_1124cf88;
  /* 1124cf67 push 0x1127b748 */
  push32((uint32_t)(0x1127b748u));
  /* 1124cf6c push 0 */
  push32((uint32_t)(0x0u));
  /* 1124cf6e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 1124cf73 push 0x1127b6bc */
  push32((uint32_t)(0x1127b6bcu));
  /* 1124cf78 push 2 */
  push32((uint32_t)(0x2u));
  /* 1124cf7a call 0x1124b3e0 */
  push32(0x1124cf7fu); f_1124b3e0();
  /* 1124cf7f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124cf82 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124cf85 jne 0x1124cf88 */
  if (!C.zf) goto L_1124cf88;
  /* 1124cf87 int3  */
  x86_unimpl("int3 @ 0x1124cf87");
L_1124cf88:;
  /* 1124cf88 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1124cf8a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1124cf8c jne 0x1124cf4f */
  if (!C.zf) goto L_1124cf4f;
L_1124cf8e:;
  /* 1124cf8e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124cf92 je 0x1124cfb9 */
  if (C.zf) goto L_1124cfb9;
  /* 1124cf94 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124cf97 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124cf9a push eax */
  push32((uint32_t)(EAX));
  /* 1124cf9b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124cf9e push ecx */
  push32((uint32_t)(ECX));
  /* 1124cf9f call 0x11253200 */
  push32(0x1124cfa4u); f_11253200();
  /* 1124cfa4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124cfa7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1124cfaa cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124cfae jne 0x1124cfb7 */
  if (!C.zf) goto L_1124cfb7;
  /* 1124cfb0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124cfb2 jmp 0x1124d1fa */
  goto L_1124d1fa;
L_1124cfb7:;
  /* 1124cfb7 jmp 0x1124cfdc */
  goto L_1124cfdc;
L_1124cfb9:;
  /* 1124cfb9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124cfbc add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124cfbf push edx */
  push32((uint32_t)(EDX));
  /* 1124cfc0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124cfc3 push eax */
  push32((uint32_t)(EAX));
  /* 1124cfc4 call 0x11253150 */
  push32(0x1124cfc9u); f_11253150();
  /* 1124cfc9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124cfcc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1124cfcf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124cfd3 jne 0x1124cfdc */
  if (!C.zf) goto L_1124cfdc;
  /* 1124cfd5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124cfd7 jmp 0x1124d1fa */
  goto L_1124d1fa;
L_1124cfdc:;
  /* 1124cfdc mov ecx, dword ptr [0x1127eefc] */
  ECX = (r32((uint32_t)(0x1127eefc)));
  /* 1124cfe2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124cfe5 mov dword ptr [0x1127eefc], ecx */
  w32((uint32_t)(0x1127eefc), (ECX));
  /* 1124cfeb cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124cfef jne 0x1124d047 */
  if (!C.zf) goto L_1124d047;
  /* 1124cff1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1124cff4 mov eax, dword ptr [0x11281474] */
  EAX = (r32((uint32_t)(0x11281474)));
  /* 1124cff9 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124cffc mov dword ptr [0x11281474], eax */
  w32((uint32_t)(0x11281474), (EAX));
  /* 1124d001 mov ecx, dword ptr [0x11281474] */
  ECX = (r32((uint32_t)(0x11281474)));
  /* 1124d007 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124d00a mov dword ptr [0x11281474], ecx */
  w32((uint32_t)(0x11281474), (ECX));
  /* 1124d010 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1124d013 mov eax, dword ptr [0x1128147c] */
  EAX = (r32((uint32_t)(0x1128147c)));
  /* 1124d018 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124d01b mov dword ptr [0x1128147c], eax */
  w32((uint32_t)(0x1128147c), (EAX));
  /* 1124d020 mov ecx, dword ptr [0x1128147c] */
  ECX = (r32((uint32_t)(0x1128147c)));
  /* 1124d026 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124d029 mov dword ptr [0x1128147c], ecx */
  w32((uint32_t)(0x1128147c), (ECX));
  /* 1124d02f mov edx, dword ptr [0x1128147c] */
  EDX = (r32((uint32_t)(0x1128147c)));
  /* 1124d035 cmp edx, dword ptr [0x11281480] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11281480))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d03b jbe 0x1124d047 */
  if ((C.cf||C.zf)) goto L_1124d047;
  /* 1124d03d mov eax, dword ptr [0x1128147c] */
  EAX = (r32((uint32_t)(0x1128147c)));
  /* 1124d042 mov dword ptr [0x11281480], eax */
  w32((uint32_t)(0x11281480), (EAX));
L_1124d047:;
  /* 1124d047 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1124d04a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124d04d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1124d050 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1124d053 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124d056 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d059 jbe 0x1124d07f */
  if ((C.cf||C.zf)) goto L_1124d07f;
  /* 1124d05b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1124d05e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124d061 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124d064 push edx */
  push32((uint32_t)(EDX));
  /* 1124d065 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124d067 mov al, byte ptr [0x1127ef06] */
  AL = (r8((uint32_t)(0x1127ef06)));
  /* 1124d06c push eax */
  push32((uint32_t)(EAX));
  /* 1124d06d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1124d070 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124d073 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124d076 push edx */
  push32((uint32_t)(EDX));
  /* 1124d077 call 0x11252c30 */
  push32(0x1124d07cu); f_11252c30();
  /* 1124d07c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1124d07f:;
  /* 1124d07f push 4 */
  push32((uint32_t)(0x4u));
  /* 1124d081 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124d083 mov al, byte ptr [0x1127ef04] */
  AL = (r8((uint32_t)(0x1127ef04)));
  /* 1124d088 push eax */
  push32((uint32_t)(EAX));
  /* 1124d089 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124d08c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124d08f push ecx */
  push32((uint32_t)(ECX));
  /* 1124d090 call 0x11252c30 */
  push32(0x1124d095u); f_11252c30();
  /* 1124d095 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124d098 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d09c jne 0x1124d0b9 */
  if (!C.zf) goto L_1124d0b9;
  /* 1124d09e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1124d0a1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1124d0a4 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1124d0a7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1124d0aa mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1124d0ad mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 1124d0b0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1124d0b3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1124d0b6 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_1124d0b9:;
  /* 1124d0b9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1124d0bc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124d0bf mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_1124d0c2:;
  /* 1124d0c2 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d0c6 jne 0x1124d0f7 */
  if (!C.zf) goto L_1124d0f7;
  /* 1124d0c8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d0cc jne 0x1124d0d6 */
  if (!C.zf) goto L_1124d0d6;
  /* 1124d0ce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1124d0d1 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d0d4 je 0x1124d0f7 */
  if (C.zf) goto L_1124d0f7;
L_1124d0d6:;
  /* 1124d0d6 push 0x1127b714 */
  push32((uint32_t)(0x1127b714u));
  /* 1124d0db push 0 */
  push32((uint32_t)(0x0u));
  /* 1124d0dd push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 1124d0e2 push 0x1127b6bc */
  push32((uint32_t)(0x1127b6bcu));
  /* 1124d0e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1124d0e9 call 0x1124b3e0 */
  push32(0x1124d0eeu); f_1124b3e0();
  /* 1124d0ee add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124d0f1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d0f4 jne 0x1124d0f7 */
  if (!C.zf) goto L_1124d0f7;
  /* 1124d0f6 int3  */
  x86_unimpl("int3 @ 0x1124d0f6");
L_1124d0f7:;
  /* 1124d0f7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1124d0f9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1124d0fb jne 0x1124d0c2 */
  if (!C.zf) goto L_1124d0c2;
  /* 1124d0fd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1124d100 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d103 je 0x1124d10b */
  if (C.zf) goto L_1124d10b;
  /* 1124d105 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d109 je 0x1124d113 */
  if (C.zf) goto L_1124d113;
L_1124d10b:;
  /* 1124d10b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124d10e jmp 0x1124d1fa */
  goto L_1124d1fa;
L_1124d113:;
  /* 1124d113 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1124d116 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d119 je 0x1124d12b */
  if (C.zf) goto L_1124d12b;
  /* 1124d11b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1124d11e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1124d120 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1124d123 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1124d126 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1124d129 jmp 0x1124d167 */
  goto L_1124d167;
L_1124d12b:;
  /* 1124d12b mov eax, dword ptr [0x11281470] */
  EAX = (r32((uint32_t)(0x11281470)));
  /* 1124d130 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d133 je 0x1124d156 */
  if (C.zf) goto L_1124d156;
  /* 1124d135 push 0x1127b6f8 */
  push32((uint32_t)(0x1127b6f8u));
  /* 1124d13a push 0 */
  push32((uint32_t)(0x0u));
  /* 1124d13c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 1124d141 push 0x1127b6bc */
  push32((uint32_t)(0x1127b6bcu));
  /* 1124d146 push 2 */
  push32((uint32_t)(0x2u));
  /* 1124d148 call 0x1124b3e0 */
  push32(0x1124d14du); f_1124b3e0();
  /* 1124d14d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124d150 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d153 jne 0x1124d156 */
  if (!C.zf) goto L_1124d156;
  /* 1124d155 int3  */
  x86_unimpl("int3 @ 0x1124d155");
L_1124d156:;
  /* 1124d156 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1124d158 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1124d15a jne 0x1124d12b */
  if (!C.zf) goto L_1124d12b;
  /* 1124d15c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1124d15f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1124d162 mov dword ptr [0x11281470], eax */
  w32((uint32_t)(0x11281470), (EAX));
L_1124d167:;
  /* 1124d167 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1124d16a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d16e je 0x1124d17f */
  if (C.zf) goto L_1124d17f;
  /* 1124d170 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1124d173 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1124d176 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1124d179 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1124d17b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1124d17d jmp 0x1124d1ba */
  goto L_1124d1ba;
L_1124d17f:;
  /* 1124d17f mov eax, dword ptr [0x11281478] */
  EAX = (r32((uint32_t)(0x11281478)));
  /* 1124d184 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d187 je 0x1124d1aa */
  if (C.zf) goto L_1124d1aa;
  /* 1124d189 push 0x1127b6dc */
  push32((uint32_t)(0x1127b6dcu));
  /* 1124d18e push 0 */
  push32((uint32_t)(0x0u));
  /* 1124d190 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 1124d195 push 0x1127b6bc */
  push32((uint32_t)(0x1127b6bcu));
  /* 1124d19a push 2 */
  push32((uint32_t)(0x2u));
  /* 1124d19c call 0x1124b3e0 */
  push32(0x1124d1a1u); f_1124b3e0();
  /* 1124d1a1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124d1a4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d1a7 jne 0x1124d1aa */
  if (!C.zf) goto L_1124d1aa;
  /* 1124d1a9 int3  */
  x86_unimpl("int3 @ 0x1124d1a9");
L_1124d1aa:;
  /* 1124d1aa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1124d1ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1124d1ae jne 0x1124d17f */
  if (!C.zf) goto L_1124d17f;
  /* 1124d1b0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1124d1b3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1124d1b5 mov dword ptr [0x11281478], eax */
  w32((uint32_t)(0x11281478), (EAX));
L_1124d1ba:;
  /* 1124d1ba cmp dword ptr [0x11281478], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11281478))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d1c1 je 0x1124d1d1 */
  if (C.zf) goto L_1124d1d1;
  /* 1124d1c3 mov ecx, dword ptr [0x11281478] */
  ECX = (r32((uint32_t)(0x11281478)));
  /* 1124d1c9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1124d1cc mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1124d1cf jmp 0x1124d1d9 */
  goto L_1124d1d9;
L_1124d1d1:;
  /* 1124d1d1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1124d1d4 mov dword ptr [0x11281470], eax */
  w32((uint32_t)(0x11281470), (EAX));
L_1124d1d9:;
  /* 1124d1d9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1124d1dc mov edx, dword ptr [0x11281478] */
  EDX = (r32((uint32_t)(0x11281478)));
  /* 1124d1e2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1124d1e4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1124d1e7 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1124d1ee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1124d1f1 mov dword ptr [0x11281478], ecx */
  w32((uint32_t)(0x11281478), (ECX));
  /* 1124d1f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1124d1fa:;
  /* 1124d1fa pop edi */
  EDI = (pop32());
  /* 1124d1fb pop esi */
  ESI = (pop32());
  /* 1124d1fc pop ebx */
  EBX = (pop32());
  /* 1124d1fd mov esp, ebp */
  ESP = (EBP);
  /* 1124d1ff pop ebp */
  EBP = (pop32());
  /* 1124d200 ret  */
  ESPCHK(0x1124ccf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d210 @ 0x1124d210 (27 bytes, 13 insns) */
void f_1124d210(void) {
  FTRACE(0x1124d210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124d210 push ebp */
  push32((uint32_t)(EBP));
  /* 1124d211 mov ebp, esp */
  EBP = (ESP);
  /* 1124d213 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124d215 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124d217 push 1 */
  push32((uint32_t)(0x1u));
  /* 1124d219 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124d21c push eax */
  push32((uint32_t)(EAX));
  /* 1124d21d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124d220 push ecx */
  push32((uint32_t)(ECX));
  /* 1124d221 call 0x1124d230 */
  push32(0x1124d226u); f_1124d230();
  /* 1124d226 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124d229 pop ebp */
  EBP = (pop32());
  /* 1124d22a ret  */
  ESPCHK(0x1124d210u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d230 @ 0x1124d230 (64 bytes, 27 insns) */
void f_1124d230(void) {
  FTRACE(0x1124d230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124d230 push ebp */
  push32((uint32_t)(EBP));
  /* 1124d231 mov ebp, esp */
  EBP = (ESP);
  /* 1124d233 push ecx */
  push32((uint32_t)(ECX));
  /* 1124d234 push 9 */
  push32((uint32_t)(0x9u));
  /* 1124d236 call 0x1124c720 */
  push32(0x1124d23bu); f_1124c720();
  /* 1124d23b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124d23e push 0 */
  push32((uint32_t)(0x0u));
  /* 1124d240 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1124d243 push eax */
  push32((uint32_t)(EAX));
  /* 1124d244 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1124d247 push ecx */
  push32((uint32_t)(ECX));
  /* 1124d248 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124d24b push edx */
  push32((uint32_t)(EDX));
  /* 1124d24c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124d24f push eax */
  push32((uint32_t)(EAX));
  /* 1124d250 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124d253 push ecx */
  push32((uint32_t)(ECX));
  /* 1124d254 call 0x1124ccf0 */
  push32(0x1124d259u); f_1124ccf0();
  /* 1124d259 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124d25c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1124d25f push 9 */
  push32((uint32_t)(0x9u));
  /* 1124d261 call 0x1124c7c0 */
  push32(0x1124d266u); f_1124c7c0();
  /* 1124d266 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124d269 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124d26c mov esp, ebp */
  ESP = (EBP);
  /* 1124d26e pop ebp */
  EBP = (pop32());
  /* 1124d26f ret  */
  ESPCHK(0x1124d230u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d270 @ 0x1124d270 (19 bytes, 9 insns) */
void f_1124d270(void) {
  FTRACE(0x1124d270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124d270 push ebp */
  push32((uint32_t)(EBP));
  /* 1124d271 mov ebp, esp */
  EBP = (ESP);
  /* 1124d273 push 1 */
  push32((uint32_t)(0x1u));
  /* 1124d275 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124d278 push eax */
  push32((uint32_t)(EAX));
  /* 1124d279 call 0x1124d2b0 */
  push32(0x1124d27eu); f_1124d2b0();
  /* 1124d27e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124d281 pop ebp */
  EBP = (pop32());
  /* 1124d282 ret  */
  ESPCHK(0x1124d270u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d290 @ 0x1124d290 (19 bytes, 9 insns) */
void f_1124d290(void) {
  FTRACE(0x1124d290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124d290 push ebp */
  push32((uint32_t)(EBP));
  /* 1124d291 mov ebp, esp */
  EBP = (ESP);
  /* 1124d293 push 1 */
  push32((uint32_t)(0x1u));
  /* 1124d295 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124d298 push eax */
  push32((uint32_t)(EAX));
  /* 1124d299 call 0x1124d2e0 */
  push32(0x1124d29eu); f_1124d2e0();
  /* 1124d29e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124d2a1 pop ebp */
  EBP = (pop32());
  /* 1124d2a2 ret  */
  ESPCHK(0x1124d290u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d2b0 @ 0x1124d2b0 (41 bytes, 16 insns) */
void f_1124d2b0(void) {
  FTRACE(0x1124d2b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124d2b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1124d2b1 mov ebp, esp */
  EBP = (ESP);
  /* 1124d2b3 push 9 */
  push32((uint32_t)(0x9u));
  /* 1124d2b5 call 0x1124c720 */
  push32(0x1124d2bau); f_1124c720();
  /* 1124d2ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124d2bd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124d2c0 push eax */
  push32((uint32_t)(EAX));
  /* 1124d2c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124d2c4 push ecx */
  push32((uint32_t)(ECX));
  /* 1124d2c5 call 0x1124d2e0 */
  push32(0x1124d2cau); f_1124d2e0();
  /* 1124d2ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124d2cd push 9 */
  push32((uint32_t)(0x9u));
  /* 1124d2cf call 0x1124c7c0 */
  push32(0x1124d2d4u); f_1124c7c0();
  /* 1124d2d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124d2d7 pop ebp */
  EBP = (pop32());
  /* 1124d2d8 ret  */
  ESPCHK(0x1124d2b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d2e0 @ 0x1124d2e0 (1004 bytes, 342 insns) */
void f_1124d2e0(void) {
  FTRACE(0x1124d2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124d2e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1124d2e1 mov ebp, esp */
  EBP = (ESP);
  /* 1124d2e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1124d2e4 push ebx */
  push32((uint32_t)(EBX));
  /* 1124d2e5 push esi */
  push32((uint32_t)(ESI));
  /* 1124d2e6 push edi */
  push32((uint32_t)(EDI));
  /* 1124d2e7 mov eax, dword ptr [0x1127eef8] */
  EAX = (r32((uint32_t)(0x1127eef8)));
  /* 1124d2ec and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1124d2ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124d2f1 je 0x1124d323 */
  if (C.zf) goto L_1124d323;
L_1124d2f3:;
  /* 1124d2f3 call 0x1124d9c0 */
  push32(0x1124d2f8u); f_1124d9c0();
  /* 1124d2f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124d2fa jne 0x1124d31d */
  if (!C.zf) goto L_1124d31d;
  /* 1124d2fc push 0x1127b6c8 */
  push32((uint32_t)(0x1127b6c8u));
  /* 1124d301 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124d303 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 1124d308 push 0x1127b6bc */
  push32((uint32_t)(0x1127b6bcu));
  /* 1124d30d push 2 */
  push32((uint32_t)(0x2u));
  /* 1124d30f call 0x1124b3e0 */
  push32(0x1124d314u); f_1124b3e0();
  /* 1124d314 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124d317 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d31a jne 0x1124d31d */
  if (!C.zf) goto L_1124d31d;
  /* 1124d31c int3  */
  x86_unimpl("int3 @ 0x1124d31c");
L_1124d31d:;
  /* 1124d31d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1124d31f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1124d321 jne 0x1124d2f3 */
  if (!C.zf) goto L_1124d2f3;
L_1124d323:;
  /* 1124d323 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d327 jne 0x1124d32e */
  if (!C.zf) goto L_1124d32e;
  /* 1124d329 jmp 0x1124d6c5 */
  goto L_1124d6c5;
L_1124d32e:;
  /* 1124d32e push 0 */
  push32((uint32_t)(0x0u));
  /* 1124d330 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124d332 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124d334 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124d337 push edx */
  push32((uint32_t)(EDX));
  /* 1124d338 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124d33a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124d33d push eax */
  push32((uint32_t)(EAX));
  /* 1124d33e push 3 */
  push32((uint32_t)(0x3u));
  /* 1124d340 call dword ptr [0x1127f230] */
  call_ind((uint32_t)(r32((uint32_t)(0x1127f230))), 0x1124d346u);
  /* 1124d346 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124d349 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124d34b jne 0x1124d378 */
  if (!C.zf) goto L_1124d378;
L_1124d34d:;
  /* 1124d34d push 0x1127b964 */
  push32((uint32_t)(0x1127b964u));
  /* 1124d352 push 0x1127b65c */
  push32((uint32_t)(0x1127b65cu));
  /* 1124d357 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124d359 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124d35b push 0 */
  push32((uint32_t)(0x0u));
  /* 1124d35d push 0 */
  push32((uint32_t)(0x0u));
  /* 1124d35f call 0x1124b3e0 */
  push32(0x1124d364u); f_1124b3e0();
  /* 1124d364 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124d367 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d36a jne 0x1124d36d */
  if (!C.zf) goto L_1124d36d;
  /* 1124d36c int3  */
  x86_unimpl("int3 @ 0x1124d36c");
L_1124d36d:;
  /* 1124d36d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1124d36f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1124d371 jne 0x1124d34d */
  if (!C.zf) goto L_1124d34d;
  /* 1124d373 jmp 0x1124d6c5 */
  goto L_1124d6c5;
L_1124d378:;
  /* 1124d378 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124d37b push edx */
  push32((uint32_t)(EDX));
  /* 1124d37c call 0x1124de20 */
  push32(0x1124d381u); f_1124de20();
  /* 1124d381 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124d384 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124d386 jne 0x1124d3a9 */
  if (!C.zf) goto L_1124d3a9;
  /* 1124d388 push 0x1127b7cc */
  push32((uint32_t)(0x1127b7ccu));
  /* 1124d38d push 0 */
  push32((uint32_t)(0x0u));
  /* 1124d38f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 1124d394 push 0x1127b6bc */
  push32((uint32_t)(0x1127b6bcu));
  /* 1124d399 push 2 */
  push32((uint32_t)(0x2u));
  /* 1124d39b call 0x1124b3e0 */
  push32(0x1124d3a0u); f_1124b3e0();
  /* 1124d3a0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124d3a3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d3a6 jne 0x1124d3a9 */
  if (!C.zf) goto L_1124d3a9;
  /* 1124d3a8 int3  */
  x86_unimpl("int3 @ 0x1124d3a8");
L_1124d3a9:;
  /* 1124d3a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124d3ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124d3ad jne 0x1124d378 */
  if (!C.zf) goto L_1124d378;
  /* 1124d3af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124d3b2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124d3b5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1124d3b8:;
  /* 1124d3b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124d3bb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1124d3be and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1124d3c3 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d3c6 je 0x1124d40b */
  if (C.zf) goto L_1124d40b;
  /* 1124d3c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124d3cb cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d3cf je 0x1124d40b */
  if (C.zf) goto L_1124d40b;
  /* 1124d3d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124d3d4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1124d3d7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1124d3dc cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d3df je 0x1124d40b */
  if (C.zf) goto L_1124d40b;
  /* 1124d3e1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124d3e4 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d3e8 je 0x1124d40b */
  if (C.zf) goto L_1124d40b;
  /* 1124d3ea push 0x1127b2e8 */
  push32((uint32_t)(0x1127b2e8u));
  /* 1124d3ef push 0 */
  push32((uint32_t)(0x0u));
  /* 1124d3f1 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 1124d3f6 push 0x1127b6bc */
  push32((uint32_t)(0x1127b6bcu));
  /* 1124d3fb push 2 */
  push32((uint32_t)(0x2u));
  /* 1124d3fd call 0x1124b3e0 */
  push32(0x1124d402u); f_1124b3e0();
  /* 1124d402 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124d405 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d408 jne 0x1124d40b */
  if (!C.zf) goto L_1124d40b;
  /* 1124d40a int3  */
  x86_unimpl("int3 @ 0x1124d40a");
L_1124d40b:;
  /* 1124d40b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1124d40d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1124d40f jne 0x1124d3b8 */
  if (!C.zf) goto L_1124d3b8;
  /* 1124d411 mov eax, dword ptr [0x1127eef8] */
  EAX = (r32((uint32_t)(0x1127eef8)));
  /* 1124d416 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1124d419 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124d41b jne 0x1124d4e6 */
  if (!C.zf) goto L_1124d4e6;
  /* 1124d421 push 4 */
  push32((uint32_t)(0x4u));
  /* 1124d423 mov cl, byte ptr [0x1127ef04] */
  CL = (r8((uint32_t)(0x1127ef04)));
  /* 1124d429 push ecx */
  push32((uint32_t)(ECX));
  /* 1124d42a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124d42d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124d430 push edx */
  push32((uint32_t)(EDX));
  /* 1124d431 call 0x1124d930 */
  push32(0x1124d436u); f_1124d930();
  /* 1124d436 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124d439 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124d43b jne 0x1124d480 */
  if (!C.zf) goto L_1124d480;
L_1124d43d:;
  /* 1124d43d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124d440 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124d443 push eax */
  push32((uint32_t)(EAX));
  /* 1124d444 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124d447 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1124d44a push edx */
  push32((uint32_t)(EDX));
  /* 1124d44b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124d44e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1124d451 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1124d457 mov edx, dword ptr [ecx*4 + 0x1127ef08] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1127ef08)));
  /* 1124d45e push edx */
  push32((uint32_t)(EDX));
  /* 1124d45f push 0x1127b938 */
  push32((uint32_t)(0x1127b938u));
  /* 1124d464 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124d466 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124d468 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124d46a push 1 */
  push32((uint32_t)(0x1u));
  /* 1124d46c call 0x1124b3e0 */
  push32(0x1124d471u); f_1124b3e0();
  /* 1124d471 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124d474 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d477 jne 0x1124d47a */
  if (!C.zf) goto L_1124d47a;
  /* 1124d479 int3  */
  x86_unimpl("int3 @ 0x1124d479");
L_1124d47a:;
  /* 1124d47a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124d47c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124d47e jne 0x1124d43d */
  if (!C.zf) goto L_1124d43d;
L_1124d480:;
  /* 1124d480 push 4 */
  push32((uint32_t)(0x4u));
  /* 1124d482 mov cl, byte ptr [0x1127ef04] */
  CL = (r8((uint32_t)(0x1127ef04)));
  /* 1124d488 push ecx */
  push32((uint32_t)(ECX));
  /* 1124d489 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124d48c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1124d48f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124d492 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 1124d496 push edx */
  push32((uint32_t)(EDX));
  /* 1124d497 call 0x1124d930 */
  push32(0x1124d49cu); f_1124d930();
  /* 1124d49c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124d49f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124d4a1 jne 0x1124d4e6 */
  if (!C.zf) goto L_1124d4e6;
L_1124d4a3:;
  /* 1124d4a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124d4a6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124d4a9 push eax */
  push32((uint32_t)(EAX));
  /* 1124d4aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124d4ad mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1124d4b0 push edx */
  push32((uint32_t)(EDX));
  /* 1124d4b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124d4b4 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1124d4b7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1124d4bd mov edx, dword ptr [ecx*4 + 0x1127ef08] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1127ef08)));
  /* 1124d4c4 push edx */
  push32((uint32_t)(EDX));
  /* 1124d4c5 push 0x1127b90c */
  push32((uint32_t)(0x1127b90cu));
  /* 1124d4ca push 0 */
  push32((uint32_t)(0x0u));
  /* 1124d4cc push 0 */
  push32((uint32_t)(0x0u));
  /* 1124d4ce push 0 */
  push32((uint32_t)(0x0u));
  /* 1124d4d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 1124d4d2 call 0x1124b3e0 */
  push32(0x1124d4d7u); f_1124b3e0();
  /* 1124d4d7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124d4da cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d4dd jne 0x1124d4e0 */
  if (!C.zf) goto L_1124d4e0;
  /* 1124d4df int3  */
  x86_unimpl("int3 @ 0x1124d4df");
L_1124d4e0:;
  /* 1124d4e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124d4e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124d4e4 jne 0x1124d4a3 */
  if (!C.zf) goto L_1124d4a3;
L_1124d4e6:;
  /* 1124d4e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124d4e9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d4ed jne 0x1124d55b */
  if (!C.zf) goto L_1124d55b;
L_1124d4ef:;
  /* 1124d4ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124d4f2 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d4f9 jne 0x1124d504 */
  if (!C.zf) goto L_1124d504;
  /* 1124d4fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124d4fe cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d502 je 0x1124d525 */
  if (C.zf) goto L_1124d525;
L_1124d504:;
  /* 1124d504 push 0x1127b8cc */
  push32((uint32_t)(0x1127b8ccu));
  /* 1124d509 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124d50b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 1124d510 push 0x1127b6bc */
  push32((uint32_t)(0x1127b6bcu));
  /* 1124d515 push 2 */
  push32((uint32_t)(0x2u));
  /* 1124d517 call 0x1124b3e0 */
  push32(0x1124d51cu); f_1124b3e0();
  /* 1124d51c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124d51f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d522 jne 0x1124d525 */
  if (!C.zf) goto L_1124d525;
  /* 1124d524 int3  */
  x86_unimpl("int3 @ 0x1124d524");
L_1124d525:;
  /* 1124d525 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1124d527 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1124d529 jne 0x1124d4ef */
  if (!C.zf) goto L_1124d4ef;
  /* 1124d52b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124d52e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1124d531 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124d534 push eax */
  push32((uint32_t)(EAX));
  /* 1124d535 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1124d537 mov cl, byte ptr [0x1127ef05] */
  CL = (r8((uint32_t)(0x1127ef05)));
  /* 1124d53d push ecx */
  push32((uint32_t)(ECX));
  /* 1124d53e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124d541 push edx */
  push32((uint32_t)(EDX));
  /* 1124d542 call 0x11252c30 */
  push32(0x1124d547u); f_11252c30();
  /* 1124d547 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124d54a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124d54d push eax */
  push32((uint32_t)(EAX));
  /* 1124d54e call 0x112533f0 */
  push32(0x1124d553u); f_112533f0();
  /* 1124d553 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124d556 jmp 0x1124d6c5 */
  goto L_1124d6c5;
L_1124d55b:;
  /* 1124d55b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124d55e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d562 jne 0x1124d571 */
  if (!C.zf) goto L_1124d571;
  /* 1124d564 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d568 jne 0x1124d571 */
  if (!C.zf) goto L_1124d571;
  /* 1124d56a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_1124d571:;
  /* 1124d571 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124d574 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1124d577 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d57a je 0x1124d59d */
  if (C.zf) goto L_1124d59d;
  /* 1124d57c push 0x1127b8ac */
  push32((uint32_t)(0x1127b8acu));
  /* 1124d581 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124d583 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 1124d588 push 0x1127b6bc */
  push32((uint32_t)(0x1127b6bcu));
  /* 1124d58d push 2 */
  push32((uint32_t)(0x2u));
  /* 1124d58f call 0x1124b3e0 */
  push32(0x1124d594u); f_1124b3e0();
  /* 1124d594 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124d597 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d59a jne 0x1124d59d */
  if (!C.zf) goto L_1124d59d;
  /* 1124d59c int3  */
  x86_unimpl("int3 @ 0x1124d59c");
L_1124d59d:;
  /* 1124d59d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1124d59f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1124d5a1 jne 0x1124d571 */
  if (!C.zf) goto L_1124d571;
  /* 1124d5a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124d5a6 mov eax, dword ptr [0x1128147c] */
  EAX = (r32((uint32_t)(0x1128147c)));
  /* 1124d5ab sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124d5ae mov dword ptr [0x1128147c], eax */
  w32((uint32_t)(0x1128147c), (EAX));
  /* 1124d5b3 mov ecx, dword ptr [0x1127eef8] */
  ECX = (r32((uint32_t)(0x1127eef8)));
  /* 1124d5b9 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1124d5bc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1124d5be jne 0x1124d69c */
  if (!C.zf) goto L_1124d69c;
  /* 1124d5c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124d5c7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d5ca je 0x1124d5dc */
  if (C.zf) goto L_1124d5dc;
  /* 1124d5cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124d5cf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1124d5d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124d5d4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1124d5d7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1124d5da jmp 0x1124d61a */
  goto L_1124d61a;
L_1124d5dc:;
  /* 1124d5dc mov ecx, dword ptr [0x11281470] */
  ECX = (r32((uint32_t)(0x11281470)));
  /* 1124d5e2 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d5e5 je 0x1124d608 */
  if (C.zf) goto L_1124d608;
  /* 1124d5e7 push 0x1127b894 */
  push32((uint32_t)(0x1127b894u));
  /* 1124d5ec push 0 */
  push32((uint32_t)(0x0u));
  /* 1124d5ee push 0x42a */
  push32((uint32_t)(0x42au));
  /* 1124d5f3 push 0x1127b6bc */
  push32((uint32_t)(0x1127b6bcu));
  /* 1124d5f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1124d5fa call 0x1124b3e0 */
  push32(0x1124d5ffu); f_1124b3e0();
  /* 1124d5ff add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124d602 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d605 jne 0x1124d608 */
  if (!C.zf) goto L_1124d608;
  /* 1124d607 int3  */
  x86_unimpl("int3 @ 0x1124d607");
L_1124d608:;
  /* 1124d608 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1124d60a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1124d60c jne 0x1124d5dc */
  if (!C.zf) goto L_1124d5dc;
  /* 1124d60e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124d611 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1124d614 mov dword ptr [0x11281470], ecx */
  w32((uint32_t)(0x11281470), (ECX));
L_1124d61a:;
  /* 1124d61a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124d61d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d621 je 0x1124d632 */
  if (C.zf) goto L_1124d632;
  /* 1124d623 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124d626 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1124d629 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124d62c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1124d62e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1124d630 jmp 0x1124d66f */
  goto L_1124d66f;
L_1124d632:;
  /* 1124d632 mov ecx, dword ptr [0x11281478] */
  ECX = (r32((uint32_t)(0x11281478)));
  /* 1124d638 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d63b je 0x1124d65e */
  if (C.zf) goto L_1124d65e;
  /* 1124d63d push 0x1127b87c */
  push32((uint32_t)(0x1127b87cu));
  /* 1124d642 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124d644 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 1124d649 push 0x1127b6bc */
  push32((uint32_t)(0x1127b6bcu));
  /* 1124d64e push 2 */
  push32((uint32_t)(0x2u));
  /* 1124d650 call 0x1124b3e0 */
  push32(0x1124d655u); f_1124b3e0();
  /* 1124d655 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124d658 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d65b jne 0x1124d65e */
  if (!C.zf) goto L_1124d65e;
  /* 1124d65d int3  */
  x86_unimpl("int3 @ 0x1124d65d");
L_1124d65e:;
  /* 1124d65e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1124d660 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1124d662 jne 0x1124d632 */
  if (!C.zf) goto L_1124d632;
  /* 1124d664 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124d667 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1124d669 mov dword ptr [0x11281478], ecx */
  w32((uint32_t)(0x11281478), (ECX));
L_1124d66f:;
  /* 1124d66f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124d672 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1124d675 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124d678 push eax */
  push32((uint32_t)(EAX));
  /* 1124d679 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1124d67b mov cl, byte ptr [0x1127ef05] */
  CL = (r8((uint32_t)(0x1127ef05)));
  /* 1124d681 push ecx */
  push32((uint32_t)(ECX));
  /* 1124d682 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124d685 push edx */
  push32((uint32_t)(EDX));
  /* 1124d686 call 0x11252c30 */
  push32(0x1124d68bu); f_11252c30();
  /* 1124d68b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124d68e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124d691 push eax */
  push32((uint32_t)(EAX));
  /* 1124d692 call 0x112533f0 */
  push32(0x1124d697u); f_112533f0();
  /* 1124d697 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124d69a jmp 0x1124d6c5 */
  goto L_1124d6c5;
L_1124d69c:;
  /* 1124d69c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124d69f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 1124d6a6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124d6a9 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1124d6ac push eax */
  push32((uint32_t)(EAX));
  /* 1124d6ad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1124d6af mov cl, byte ptr [0x1127ef05] */
  CL = (r8((uint32_t)(0x1127ef05)));
  /* 1124d6b5 push ecx */
  push32((uint32_t)(ECX));
  /* 1124d6b6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124d6b9 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124d6bc push edx */
  push32((uint32_t)(EDX));
  /* 1124d6bd call 0x11252c30 */
  push32(0x1124d6c2u); f_11252c30();
  /* 1124d6c2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1124d6c5:;
  /* 1124d6c5 pop edi */
  EDI = (pop32());
  /* 1124d6c6 pop esi */
  ESI = (pop32());
  /* 1124d6c7 pop ebx */
  EBX = (pop32());
  /* 1124d6c8 mov esp, ebp */
  ESP = (EBP);
  /* 1124d6ca pop ebp */
  EBP = (pop32());
  /* 1124d6cb ret  */
  ESPCHK(0x1124d2e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d6d0 @ 0x1124d6d0 (19 bytes, 9 insns) */
void f_1124d6d0(void) {
  FTRACE(0x1124d6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124d6d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1124d6d1 mov ebp, esp */
  EBP = (ESP);
  /* 1124d6d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1124d6d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124d6d8 push eax */
  push32((uint32_t)(EAX));
  /* 1124d6d9 call 0x1124d6f0 */
  push32(0x1124d6deu); f_1124d6f0();
  /* 1124d6de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124d6e1 pop ebp */
  EBP = (pop32());
  /* 1124d6e2 ret  */
  ESPCHK(0x1124d6d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d6f0 @ 0x1124d6f0 (342 bytes, 119 insns) */
void f_1124d6f0(void) {
  FTRACE(0x1124d6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124d6f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1124d6f1 mov ebp, esp */
  EBP = (ESP);
  /* 1124d6f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124d6f6 push ebx */
  push32((uint32_t)(EBX));
  /* 1124d6f7 push esi */
  push32((uint32_t)(ESI));
  /* 1124d6f8 push edi */
  push32((uint32_t)(EDI));
  /* 1124d6f9 mov eax, dword ptr [0x1127eef8] */
  EAX = (r32((uint32_t)(0x1127eef8)));
  /* 1124d6fe and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1124d701 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124d703 je 0x1124d735 */
  if (C.zf) goto L_1124d735;
L_1124d705:;
  /* 1124d705 call 0x1124d9c0 */
  push32(0x1124d70au); f_1124d9c0();
  /* 1124d70a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124d70c jne 0x1124d72f */
  if (!C.zf) goto L_1124d72f;
  /* 1124d70e push 0x1127b6c8 */
  push32((uint32_t)(0x1127b6c8u));
  /* 1124d713 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124d715 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 1124d71a push 0x1127b6bc */
  push32((uint32_t)(0x1127b6bcu));
  /* 1124d71f push 2 */
  push32((uint32_t)(0x2u));
  /* 1124d721 call 0x1124b3e0 */
  push32(0x1124d726u); f_1124b3e0();
  /* 1124d726 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124d729 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d72c jne 0x1124d72f */
  if (!C.zf) goto L_1124d72f;
  /* 1124d72e int3  */
  x86_unimpl("int3 @ 0x1124d72e");
L_1124d72f:;
  /* 1124d72f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1124d731 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1124d733 jne 0x1124d705 */
  if (!C.zf) goto L_1124d705;
L_1124d735:;
  /* 1124d735 push 9 */
  push32((uint32_t)(0x9u));
  /* 1124d737 call 0x1124c720 */
  push32(0x1124d73cu); f_1124c720();
  /* 1124d73c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1124d73f:;
  /* 1124d73f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124d742 push edx */
  push32((uint32_t)(EDX));
  /* 1124d743 call 0x1124de20 */
  push32(0x1124d748u); f_1124de20();
  /* 1124d748 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124d74b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124d74d jne 0x1124d770 */
  if (!C.zf) goto L_1124d770;
  /* 1124d74f push 0x1127b7cc */
  push32((uint32_t)(0x1127b7ccu));
  /* 1124d754 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124d756 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 1124d75b push 0x1127b6bc */
  push32((uint32_t)(0x1127b6bcu));
  /* 1124d760 push 2 */
  push32((uint32_t)(0x2u));
  /* 1124d762 call 0x1124b3e0 */
  push32(0x1124d767u); f_1124b3e0();
  /* 1124d767 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124d76a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d76d jne 0x1124d770 */
  if (!C.zf) goto L_1124d770;
  /* 1124d76f int3  */
  x86_unimpl("int3 @ 0x1124d76f");
L_1124d770:;
  /* 1124d770 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124d772 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124d774 jne 0x1124d73f */
  if (!C.zf) goto L_1124d73f;
  /* 1124d776 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124d779 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124d77c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1124d77f:;
  /* 1124d77f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124d782 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1124d785 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1124d78a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d78d je 0x1124d7d2 */
  if (C.zf) goto L_1124d7d2;
  /* 1124d78f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124d792 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d796 je 0x1124d7d2 */
  if (C.zf) goto L_1124d7d2;
  /* 1124d798 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124d79b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1124d79e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1124d7a3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d7a6 je 0x1124d7d2 */
  if (C.zf) goto L_1124d7d2;
  /* 1124d7a8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124d7ab cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d7af je 0x1124d7d2 */
  if (C.zf) goto L_1124d7d2;
  /* 1124d7b1 push 0x1127b2e8 */
  push32((uint32_t)(0x1127b2e8u));
  /* 1124d7b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124d7b8 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 1124d7bd push 0x1127b6bc */
  push32((uint32_t)(0x1127b6bcu));
  /* 1124d7c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1124d7c4 call 0x1124b3e0 */
  push32(0x1124d7c9u); f_1124b3e0();
  /* 1124d7c9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124d7cc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d7cf jne 0x1124d7d2 */
  if (!C.zf) goto L_1124d7d2;
  /* 1124d7d1 int3  */
  x86_unimpl("int3 @ 0x1124d7d1");
L_1124d7d2:;
  /* 1124d7d2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1124d7d4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1124d7d6 jne 0x1124d77f */
  if (!C.zf) goto L_1124d77f;
  /* 1124d7d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124d7db cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d7df jne 0x1124d7ee */
  if (!C.zf) goto L_1124d7ee;
  /* 1124d7e1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d7e5 jne 0x1124d7ee */
  if (!C.zf) goto L_1124d7ee;
  /* 1124d7e7 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_1124d7ee:;
  /* 1124d7ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124d7f1 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d7f5 je 0x1124d829 */
  if (C.zf) goto L_1124d829;
L_1124d7f7:;
  /* 1124d7f7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124d7fa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1124d7fd cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d800 je 0x1124d823 */
  if (C.zf) goto L_1124d823;
  /* 1124d802 push 0x1127b8ac */
  push32((uint32_t)(0x1127b8acu));
  /* 1124d807 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124d809 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 1124d80e push 0x1127b6bc */
  push32((uint32_t)(0x1127b6bcu));
  /* 1124d813 push 2 */
  push32((uint32_t)(0x2u));
  /* 1124d815 call 0x1124b3e0 */
  push32(0x1124d81au); f_1124b3e0();
  /* 1124d81a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124d81d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d820 jne 0x1124d823 */
  if (!C.zf) goto L_1124d823;
  /* 1124d822 int3  */
  x86_unimpl("int3 @ 0x1124d822");
L_1124d823:;
  /* 1124d823 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1124d825 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1124d827 jne 0x1124d7f7 */
  if (!C.zf) goto L_1124d7f7;
L_1124d829:;
  /* 1124d829 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124d82c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1124d82f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1124d832 push 9 */
  push32((uint32_t)(0x9u));
  /* 1124d834 call 0x1124c7c0 */
  push32(0x1124d839u); f_1124c7c0();
  /* 1124d839 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124d83c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124d83f pop edi */
  EDI = (pop32());
  /* 1124d840 pop esi */
  ESI = (pop32());
  /* 1124d841 pop ebx */
  EBX = (pop32());
  /* 1124d842 mov esp, ebp */
  ESP = (EBP);
  /* 1124d844 pop ebp */
  EBP = (pop32());
  /* 1124d845 ret  */
  ESPCHK(0x1124d6f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d850 @ 0x1124d850 (28 bytes, 11 insns) */
void f_1124d850(void) {
  FTRACE(0x1124d850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124d850 push ebp */
  push32((uint32_t)(EBP));
  /* 1124d851 mov ebp, esp */
  EBP = (ESP);
  /* 1124d853 push ecx */
  push32((uint32_t)(ECX));
  /* 1124d854 mov eax, dword ptr [0x1127ef00] */
  EAX = (r32((uint32_t)(0x1127ef00)));
  /* 1124d859 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1124d85c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124d85f mov dword ptr [0x1127ef00], ecx */
  w32((uint32_t)(0x1127ef00), (ECX));
  /* 1124d865 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124d868 mov esp, ebp */
  ESP = (EBP);
  /* 1124d86a pop ebp */
  EBP = (pop32());
  /* 1124d86b ret  */
  ESPCHK(0x1124d850u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d870 @ 0x1124d870 (157 bytes, 59 insns) */
void f_1124d870(void) {
  FTRACE(0x1124d870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124d870 push ebp */
  push32((uint32_t)(EBP));
  /* 1124d871 mov ebp, esp */
  EBP = (ESP);
  /* 1124d873 push ecx */
  push32((uint32_t)(ECX));
  /* 1124d874 push ebx */
  push32((uint32_t)(EBX));
  /* 1124d875 push esi */
  push32((uint32_t)(ESI));
  /* 1124d876 push edi */
  push32((uint32_t)(EDI));
  /* 1124d877 push 9 */
  push32((uint32_t)(0x9u));
  /* 1124d879 call 0x1124c720 */
  push32(0x1124d87eu); f_1124c720();
  /* 1124d87e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124d881 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124d884 push eax */
  push32((uint32_t)(EAX));
  /* 1124d885 call 0x1124de20 */
  push32(0x1124d88au); f_1124de20();
  /* 1124d88a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124d88d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124d88f je 0x1124d8fc */
  if (C.zf) goto L_1124d8fc;
  /* 1124d891 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124d894 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124d897 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1124d89a:;
  /* 1124d89a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124d89d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1124d8a0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1124d8a5 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d8a8 je 0x1124d8ed */
  if (C.zf) goto L_1124d8ed;
  /* 1124d8aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124d8ad cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d8b1 je 0x1124d8ed */
  if (C.zf) goto L_1124d8ed;
  /* 1124d8b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124d8b6 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1124d8b9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1124d8be cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d8c1 je 0x1124d8ed */
  if (C.zf) goto L_1124d8ed;
  /* 1124d8c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124d8c6 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d8ca je 0x1124d8ed */
  if (C.zf) goto L_1124d8ed;
  /* 1124d8cc push 0x1127b2e8 */
  push32((uint32_t)(0x1127b2e8u));
  /* 1124d8d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124d8d3 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 1124d8d8 push 0x1127b6bc */
  push32((uint32_t)(0x1127b6bcu));
  /* 1124d8dd push 2 */
  push32((uint32_t)(0x2u));
  /* 1124d8df call 0x1124b3e0 */
  push32(0x1124d8e4u); f_1124b3e0();
  /* 1124d8e4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124d8e7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d8ea jne 0x1124d8ed */
  if (!C.zf) goto L_1124d8ed;
  /* 1124d8ec int3  */
  x86_unimpl("int3 @ 0x1124d8ec");
L_1124d8ed:;
  /* 1124d8ed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1124d8ef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1124d8f1 jne 0x1124d89a */
  if (!C.zf) goto L_1124d89a;
  /* 1124d8f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124d8f6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124d8f9 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_1124d8fc:;
  /* 1124d8fc push 9 */
  push32((uint32_t)(0x9u));
  /* 1124d8fe call 0x1124c7c0 */
  push32(0x1124d903u); f_1124c7c0();
  /* 1124d903 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124d906 pop edi */
  EDI = (pop32());
  /* 1124d907 pop esi */
  ESI = (pop32());
  /* 1124d908 pop ebx */
  EBX = (pop32());
  /* 1124d909 mov esp, ebp */
  ESP = (EBP);
  /* 1124d90b pop ebp */
  EBP = (pop32());
  /* 1124d90c ret  */
  ESPCHK(0x1124d870u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d910 @ 0x1124d910 (28 bytes, 11 insns) */
void f_1124d910(void) {
  FTRACE(0x1124d910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124d910 push ebp */
  push32((uint32_t)(EBP));
  /* 1124d911 mov ebp, esp */
  EBP = (ESP);
  /* 1124d913 push ecx */
  push32((uint32_t)(ECX));
  /* 1124d914 mov eax, dword ptr [0x1127f230] */
  EAX = (r32((uint32_t)(0x1127f230)));
  /* 1124d919 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1124d91c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124d91f mov dword ptr [0x1127f230], ecx */
  w32((uint32_t)(0x1127f230), (ECX));
  /* 1124d925 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124d928 mov esp, ebp */
  ESP = (EBP);
  /* 1124d92a pop ebp */
  EBP = (pop32());
  /* 1124d92b ret  */
  ESPCHK(0x1124d910u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d930 @ 0x1124d930 (136 bytes, 55 insns) */
void f_1124d930(void) {
  FTRACE(0x1124d930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124d930 push ebp */
  push32((uint32_t)(EBP));
  /* 1124d931 mov ebp, esp */
  EBP = (ESP);
  /* 1124d933 push ecx */
  push32((uint32_t)(ECX));
  /* 1124d934 push ebx */
  push32((uint32_t)(EBX));
  /* 1124d935 push esi */
  push32((uint32_t)(ESI));
  /* 1124d936 push edi */
  push32((uint32_t)(EDI));
  /* 1124d937 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_1124d93e:;
  /* 1124d93e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124d941 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124d944 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124d947 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1124d94a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124d94c je 0x1124d9ae */
  if (C.zf) goto L_1124d9ae;
  /* 1124d94e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124d951 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124d953 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1124d955 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124d958 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1124d95e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124d961 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124d964 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1124d967 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d969 je 0x1124d9ac */
  if (C.zf) goto L_1124d9ac;
L_1124d96b:;
  /* 1124d96b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124d96e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1124d973 push eax */
  push32((uint32_t)(EAX));
  /* 1124d974 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124d977 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1124d979 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 1124d97c push edx */
  push32((uint32_t)(EDX));
  /* 1124d97d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124d980 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124d983 push eax */
  push32((uint32_t)(EAX));
  /* 1124d984 push 0x1127b980 */
  push32((uint32_t)(0x1127b980u));
  /* 1124d989 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124d98b push 0 */
  push32((uint32_t)(0x0u));
  /* 1124d98d push 0 */
  push32((uint32_t)(0x0u));
  /* 1124d98f push 0 */
  push32((uint32_t)(0x0u));
  /* 1124d991 call 0x1124b3e0 */
  push32(0x1124d996u); f_1124b3e0();
  /* 1124d996 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124d999 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d99c jne 0x1124d99f */
  if (!C.zf) goto L_1124d99f;
  /* 1124d99e int3  */
  x86_unimpl("int3 @ 0x1124d99e");
L_1124d99f:;
  /* 1124d99f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1124d9a1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1124d9a3 jne 0x1124d96b */
  if (!C.zf) goto L_1124d96b;
  /* 1124d9a5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1124d9ac:;
  /* 1124d9ac jmp 0x1124d93e */
  goto L_1124d93e;
L_1124d9ae:;
  /* 1124d9ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124d9b1 pop edi */
  EDI = (pop32());
  /* 1124d9b2 pop esi */
  ESI = (pop32());
  /* 1124d9b3 pop ebx */
  EBX = (pop32());
  /* 1124d9b4 mov esp, ebp */
  ESP = (EBP);
  /* 1124d9b6 pop ebp */
  EBP = (pop32());
  /* 1124d9b7 ret  */
  ESPCHK(0x1124d930u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d9c0 @ 0x1124d9c0 (863 bytes, 299 insns) [1 switch table(s)] */
void f_1124d9c0(void) {
  FTRACE(0x1124d9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124d9c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1124d9c1 mov ebp, esp */
  EBP = (ESP);
  /* 1124d9c3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124d9c6 push ebx */
  push32((uint32_t)(EBX));
  /* 1124d9c7 push esi */
  push32((uint32_t)(ESI));
  /* 1124d9c8 push edi */
  push32((uint32_t)(EDI));
  /* 1124d9c9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1124d9d0 mov eax, dword ptr [0x1127eef8] */
  EAX = (r32((uint32_t)(0x1127eef8)));
  /* 1124d9d5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1124d9d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124d9da jne 0x1124d9e6 */
  if (!C.zf) goto L_1124d9e6;
  /* 1124d9dc mov eax, 1 */
  EAX = (0x1u);
  /* 1124d9e1 jmp 0x1124dd18 */
  goto L_1124dd18;
L_1124d9e6:;
  /* 1124d9e6 push 9 */
  push32((uint32_t)(0x9u));
  /* 1124d9e8 call 0x1124c720 */
  push32(0x1124d9edu); f_1124c720();
  /* 1124d9ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124d9f0 call 0x11253460 */
  push32(0x1124d9f5u); f_11253460();
  /* 1124d9f5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1124d9f8 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124d9fc je 0x1124db09 */
  if (C.zf) goto L_1124db09;
  /* 1124da02 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124da06 je 0x1124db09 */
  if (C.zf) goto L_1124db09;
  /* 1124da0c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1124da0f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1124da12 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1124da15 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124da18 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1124da1b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124da1f ja 0x1124dad2 */
  if ((!C.cf&&!C.zf)) goto L_1124dad2;
  /* 1124da25 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1124da28 jmp dword ptr [eax*4 + 0x1124dd1f] */
  switch (EAX) {
    case 0: goto L_1124daaa;
    case 1: goto L_1124da82;
    case 2: goto L_1124da5a;
    case 3: goto L_1124da2f;
    default: x86_unimpl("switch@0x1124da28 out of table"); return;
  }
L_1124da2f:;
  /* 1124da2f push 0x1127bad4 */
  push32((uint32_t)(0x1127bad4u));
  /* 1124da34 push 0x1127b65c */
  push32((uint32_t)(0x1127b65cu));
  /* 1124da39 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124da3b push 0 */
  push32((uint32_t)(0x0u));
  /* 1124da3d push 0 */
  push32((uint32_t)(0x0u));
  /* 1124da3f push 0 */
  push32((uint32_t)(0x0u));
  /* 1124da41 call 0x1124b3e0 */
  push32(0x1124da46u); f_1124b3e0();
  /* 1124da46 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124da49 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124da4c jne 0x1124da4f */
  if (!C.zf) goto L_1124da4f;
  /* 1124da4e int3  */
  x86_unimpl("int3 @ 0x1124da4e");
L_1124da4f:;
  /* 1124da4f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1124da51 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1124da53 jne 0x1124da2f */
  if (!C.zf) goto L_1124da2f;
  /* 1124da55 jmp 0x1124daf8 */
  goto L_1124daf8;
L_1124da5a:;
  /* 1124da5a push 0x1127bab0 */
  push32((uint32_t)(0x1127bab0u));
  /* 1124da5f push 0x1127b65c */
  push32((uint32_t)(0x1127b65cu));
  /* 1124da64 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124da66 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124da68 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124da6a push 0 */
  push32((uint32_t)(0x0u));
  /* 1124da6c call 0x1124b3e0 */
  push32(0x1124da71u); f_1124b3e0();
  /* 1124da71 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124da74 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124da77 jne 0x1124da7a */
  if (!C.zf) goto L_1124da7a;
  /* 1124da79 int3  */
  x86_unimpl("int3 @ 0x1124da79");
L_1124da7a:;
  /* 1124da7a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1124da7c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1124da7e jne 0x1124da5a */
  if (!C.zf) goto L_1124da5a;
  /* 1124da80 jmp 0x1124daf8 */
  goto L_1124daf8;
L_1124da82:;
  /* 1124da82 push 0x1127ba8c */
  push32((uint32_t)(0x1127ba8cu));
  /* 1124da87 push 0x1127b65c */
  push32((uint32_t)(0x1127b65cu));
  /* 1124da8c push 0 */
  push32((uint32_t)(0x0u));
  /* 1124da8e push 0 */
  push32((uint32_t)(0x0u));
  /* 1124da90 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124da92 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124da94 call 0x1124b3e0 */
  push32(0x1124da99u); f_1124b3e0();
  /* 1124da99 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124da9c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124da9f jne 0x1124daa2 */
  if (!C.zf) goto L_1124daa2;
  /* 1124daa1 int3  */
  x86_unimpl("int3 @ 0x1124daa1");
L_1124daa2:;
  /* 1124daa2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124daa4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124daa6 jne 0x1124da82 */
  if (!C.zf) goto L_1124da82;
  /* 1124daa8 jmp 0x1124daf8 */
  goto L_1124daf8;
L_1124daaa:;
  /* 1124daaa push 0x1127ba68 */
  push32((uint32_t)(0x1127ba68u));
  /* 1124daaf push 0x1127b65c */
  push32((uint32_t)(0x1127b65cu));
  /* 1124dab4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124dab6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124dab8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124daba push 0 */
  push32((uint32_t)(0x0u));
  /* 1124dabc call 0x1124b3e0 */
  push32(0x1124dac1u); f_1124b3e0();
  /* 1124dac1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124dac4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124dac7 jne 0x1124daca */
  if (!C.zf) goto L_1124daca;
  /* 1124dac9 int3  */
  x86_unimpl("int3 @ 0x1124dac9");
L_1124daca:;
  /* 1124daca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1124dacc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1124dace jne 0x1124daaa */
  if (!C.zf) goto L_1124daaa;
  /* 1124dad0 jmp 0x1124daf8 */
  goto L_1124daf8;
L_1124dad2:;
  /* 1124dad2 push 0x1127ba3c */
  push32((uint32_t)(0x1127ba3cu));
  /* 1124dad7 push 0x1127b65c */
  push32((uint32_t)(0x1127b65cu));
  /* 1124dadc push 0 */
  push32((uint32_t)(0x0u));
  /* 1124dade push 0 */
  push32((uint32_t)(0x0u));
  /* 1124dae0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124dae2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124dae4 call 0x1124b3e0 */
  push32(0x1124dae9u); f_1124b3e0();
  /* 1124dae9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124daec cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124daef jne 0x1124daf2 */
  if (!C.zf) goto L_1124daf2;
  /* 1124daf1 int3  */
  x86_unimpl("int3 @ 0x1124daf1");
L_1124daf2:;
  /* 1124daf2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1124daf4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1124daf6 jne 0x1124dad2 */
  if (!C.zf) goto L_1124dad2;
L_1124daf8:;
  /* 1124daf8 push 9 */
  push32((uint32_t)(0x9u));
  /* 1124dafa call 0x1124c7c0 */
  push32(0x1124daffu); f_1124c7c0();
  /* 1124daff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124db02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124db04 jmp 0x1124dd18 */
  goto L_1124dd18;
L_1124db09:;
  /* 1124db09 mov eax, dword ptr [0x11281478] */
  EAX = (r32((uint32_t)(0x11281478)));
  /* 1124db0e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1124db11 jmp 0x1124db1b */
  goto L_1124db1b;
L_1124db13:;
  /* 1124db13 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124db16 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1124db18 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1124db1b:;
  /* 1124db1b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124db1f je 0x1124dd0b */
  if (C.zf) goto L_1124dd0b;
  /* 1124db25 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1124db2c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124db2f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1124db32 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1124db38 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124db3b je 0x1124db60 */
  if (C.zf) goto L_1124db60;
  /* 1124db3d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124db40 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124db44 je 0x1124db60 */
  if (C.zf) goto L_1124db60;
  /* 1124db46 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124db49 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1124db4c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1124db52 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124db55 je 0x1124db60 */
  if (C.zf) goto L_1124db60;
  /* 1124db57 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124db5a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124db5e jne 0x1124db78 */
  if (!C.zf) goto L_1124db78;
L_1124db60:;
  /* 1124db60 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124db63 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1124db66 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1124db6c mov edx, dword ptr [ecx*4 + 0x1127ef08] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1127ef08)));
  /* 1124db73 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1124db76 jmp 0x1124db7f */
  goto L_1124db7f;
L_1124db78:;
  /* 1124db78 mov dword ptr [ebp - 0x14], 0x1127ba34 */
  w32((uint32_t)(EBP + -0x14), (0x1127ba34u));
L_1124db7f:;
  /* 1124db7f push 4 */
  push32((uint32_t)(0x4u));
  /* 1124db81 mov al, byte ptr [0x1127ef04] */
  AL = (r8((uint32_t)(0x1127ef04)));
  /* 1124db86 push eax */
  push32((uint32_t)(EAX));
  /* 1124db87 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124db8a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124db8d push ecx */
  push32((uint32_t)(ECX));
  /* 1124db8e call 0x1124d930 */
  push32(0x1124db93u); f_1124d930();
  /* 1124db93 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124db96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124db98 jne 0x1124dbd4 */
  if (!C.zf) goto L_1124dbd4;
L_1124db9a:;
  /* 1124db9a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124db9d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124dba0 push edx */
  push32((uint32_t)(EDX));
  /* 1124dba1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124dba4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 1124dba7 push ecx */
  push32((uint32_t)(ECX));
  /* 1124dba8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1124dbab push edx */
  push32((uint32_t)(EDX));
  /* 1124dbac push 0x1127b938 */
  push32((uint32_t)(0x1127b938u));
  /* 1124dbb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124dbb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124dbb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124dbb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124dbb9 call 0x1124b3e0 */
  push32(0x1124dbbeu); f_1124b3e0();
  /* 1124dbbe add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124dbc1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124dbc4 jne 0x1124dbc7 */
  if (!C.zf) goto L_1124dbc7;
  /* 1124dbc6 int3  */
  x86_unimpl("int3 @ 0x1124dbc6");
L_1124dbc7:;
  /* 1124dbc7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124dbc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124dbcb jne 0x1124db9a */
  if (!C.zf) goto L_1124db9a;
  /* 1124dbcd mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1124dbd4:;
  /* 1124dbd4 push 4 */
  push32((uint32_t)(0x4u));
  /* 1124dbd6 mov cl, byte ptr [0x1127ef04] */
  CL = (r8((uint32_t)(0x1127ef04)));
  /* 1124dbdc push ecx */
  push32((uint32_t)(ECX));
  /* 1124dbdd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124dbe0 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1124dbe3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124dbe6 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 1124dbea push edx */
  push32((uint32_t)(EDX));
  /* 1124dbeb call 0x1124d930 */
  push32(0x1124dbf0u); f_1124d930();
  /* 1124dbf0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124dbf3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124dbf5 jne 0x1124dc31 */
  if (!C.zf) goto L_1124dc31;
L_1124dbf7:;
  /* 1124dbf7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124dbfa add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124dbfd push eax */
  push32((uint32_t)(EAX));
  /* 1124dbfe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124dc01 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1124dc04 push edx */
  push32((uint32_t)(EDX));
  /* 1124dc05 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1124dc08 push eax */
  push32((uint32_t)(EAX));
  /* 1124dc09 push 0x1127b90c */
  push32((uint32_t)(0x1127b90cu));
  /* 1124dc0e push 0 */
  push32((uint32_t)(0x0u));
  /* 1124dc10 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124dc12 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124dc14 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124dc16 call 0x1124b3e0 */
  push32(0x1124dc1bu); f_1124b3e0();
  /* 1124dc1b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124dc1e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124dc21 jne 0x1124dc24 */
  if (!C.zf) goto L_1124dc24;
  /* 1124dc23 int3  */
  x86_unimpl("int3 @ 0x1124dc23");
L_1124dc24:;
  /* 1124dc24 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1124dc26 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1124dc28 jne 0x1124dbf7 */
  if (!C.zf) goto L_1124dbf7;
  /* 1124dc2a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1124dc31:;
  /* 1124dc31 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124dc34 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124dc38 jne 0x1124dc8a */
  if (!C.zf) goto L_1124dc8a;
  /* 1124dc3a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124dc3d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1124dc40 push ecx */
  push32((uint32_t)(ECX));
  /* 1124dc41 mov dl, byte ptr [0x1127ef05] */
  DL = (r8((uint32_t)(0x1127ef05)));
  /* 1124dc47 push edx */
  push32((uint32_t)(EDX));
  /* 1124dc48 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124dc4b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124dc4e push eax */
  push32((uint32_t)(EAX));
  /* 1124dc4f call 0x1124d930 */
  push32(0x1124dc54u); f_1124d930();
  /* 1124dc54 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124dc57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124dc59 jne 0x1124dc8a */
  if (!C.zf) goto L_1124dc8a;
L_1124dc5b:;
  /* 1124dc5b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124dc5e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124dc61 push ecx */
  push32((uint32_t)(ECX));
  /* 1124dc62 push 0x1127ba08 */
  push32((uint32_t)(0x1127ba08u));
  /* 1124dc67 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124dc69 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124dc6b push 0 */
  push32((uint32_t)(0x0u));
  /* 1124dc6d push 0 */
  push32((uint32_t)(0x0u));
  /* 1124dc6f call 0x1124b3e0 */
  push32(0x1124dc74u); f_1124b3e0();
  /* 1124dc74 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124dc77 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124dc7a jne 0x1124dc7d */
  if (!C.zf) goto L_1124dc7d;
  /* 1124dc7c int3  */
  x86_unimpl("int3 @ 0x1124dc7c");
L_1124dc7d:;
  /* 1124dc7d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1124dc7f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1124dc81 jne 0x1124dc5b */
  if (!C.zf) goto L_1124dc5b;
  /* 1124dc83 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1124dc8a:;
  /* 1124dc8a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124dc8e jne 0x1124dd06 */
  if (!C.zf) goto L_1124dd06;
  /* 1124dc90 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124dc93 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124dc97 je 0x1124dccc */
  if (C.zf) goto L_1124dccc;
L_1124dc99:;
  /* 1124dc99 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124dc9c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1124dc9f push edx */
  push32((uint32_t)(EDX));
  /* 1124dca0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124dca3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1124dca6 push ecx */
  push32((uint32_t)(ECX));
  /* 1124dca7 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1124dcaa push edx */
  push32((uint32_t)(EDX));
  /* 1124dcab push 0x1127b9e8 */
  push32((uint32_t)(0x1127b9e8u));
  /* 1124dcb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124dcb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124dcb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124dcb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124dcb8 call 0x1124b3e0 */
  push32(0x1124dcbdu); f_1124b3e0();
  /* 1124dcbd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124dcc0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124dcc3 jne 0x1124dcc6 */
  if (!C.zf) goto L_1124dcc6;
  /* 1124dcc5 int3  */
  x86_unimpl("int3 @ 0x1124dcc5");
L_1124dcc6:;
  /* 1124dcc6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124dcc8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124dcca jne 0x1124dc99 */
  if (!C.zf) goto L_1124dc99;
L_1124dccc:;
  /* 1124dccc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124dccf mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1124dcd2 push edx */
  push32((uint32_t)(EDX));
  /* 1124dcd3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124dcd6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124dcd9 push eax */
  push32((uint32_t)(EAX));
  /* 1124dcda mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1124dcdd push ecx */
  push32((uint32_t)(ECX));
  /* 1124dcde push 0x1127b9bc */
  push32((uint32_t)(0x1127b9bcu));
  /* 1124dce3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124dce5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124dce7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124dce9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124dceb call 0x1124b3e0 */
  push32(0x1124dcf0u); f_1124b3e0();
  /* 1124dcf0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124dcf3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124dcf6 jne 0x1124dcf9 */
  if (!C.zf) goto L_1124dcf9;
  /* 1124dcf8 int3  */
  x86_unimpl("int3 @ 0x1124dcf8");
L_1124dcf9:;
  /* 1124dcf9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1124dcfb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1124dcfd jne 0x1124dccc */
  if (!C.zf) goto L_1124dccc;
  /* 1124dcff mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1124dd06:;
  /* 1124dd06 jmp 0x1124db13 */
  goto L_1124db13;
L_1124dd0b:;
  /* 1124dd0b push 9 */
  push32((uint32_t)(0x9u));
  /* 1124dd0d call 0x1124c7c0 */
  push32(0x1124dd12u); f_1124c7c0();
  /* 1124dd12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124dd15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1124dd18:;
  /* 1124dd18 pop edi */
  EDI = (pop32());
  /* 1124dd19 pop esi */
  ESI = (pop32());
  /* 1124dd1a pop ebx */
  EBX = (pop32());
  /* 1124dd1b mov esp, ebp */
  ESP = (EBP);
  /* 1124dd1d pop ebp */
  EBP = (pop32());
  /* 1124dd1e ret  */
  ESPCHK(0x1124d9c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dd30 @ 0x1124dd30 (34 bytes, 13 insns) */
void f_1124dd30(void) {
  FTRACE(0x1124dd30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124dd30 push ebp */
  push32((uint32_t)(EBP));
  /* 1124dd31 mov ebp, esp */
  EBP = (ESP);
  /* 1124dd33 push ecx */
  push32((uint32_t)(ECX));
  /* 1124dd34 mov eax, dword ptr [0x1127eef8] */
  EAX = (r32((uint32_t)(0x1127eef8)));
  /* 1124dd39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1124dd3c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124dd40 je 0x1124dd4b */
  if (C.zf) goto L_1124dd4b;
  /* 1124dd42 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124dd45 mov dword ptr [0x1127eef8], ecx */
  w32((uint32_t)(0x1127eef8), (ECX));
L_1124dd4b:;
  /* 1124dd4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124dd4e mov esp, ebp */
  ESP = (EBP);
  /* 1124dd50 pop ebp */
  EBP = (pop32());
  /* 1124dd51 ret  */
  ESPCHK(0x1124dd30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dd60 @ 0x1124dd60 (103 bytes, 38 insns) */
void f_1124dd60(void) {
  FTRACE(0x1124dd60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124dd60 push ebp */
  push32((uint32_t)(EBP));
  /* 1124dd61 mov ebp, esp */
  EBP = (ESP);
  /* 1124dd63 push ecx */
  push32((uint32_t)(ECX));
  /* 1124dd64 mov eax, dword ptr [0x1127eef8] */
  EAX = (r32((uint32_t)(0x1127eef8)));
  /* 1124dd69 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1124dd6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124dd6e jne 0x1124dd72 */
  if (!C.zf) goto L_1124dd72;
  /* 1124dd70 jmp 0x1124ddc3 */
  goto L_1124ddc3;
L_1124dd72:;
  /* 1124dd72 push 9 */
  push32((uint32_t)(0x9u));
  /* 1124dd74 call 0x1124c720 */
  push32(0x1124dd79u); f_1124c720();
  /* 1124dd79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124dd7c mov ecx, dword ptr [0x11281478] */
  ECX = (r32((uint32_t)(0x11281478)));
  /* 1124dd82 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1124dd85 jmp 0x1124dd8f */
  goto L_1124dd8f;
L_1124dd87:;
  /* 1124dd87 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124dd8a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1124dd8c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1124dd8f:;
  /* 1124dd8f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124dd93 je 0x1124ddb9 */
  if (C.zf) goto L_1124ddb9;
  /* 1124dd95 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124dd98 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1124dd9b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1124dda1 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124dda4 jne 0x1124ddb7 */
  if (!C.zf) goto L_1124ddb7;
  /* 1124dda6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124dda9 push eax */
  push32((uint32_t)(EAX));
  /* 1124ddaa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124ddad add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124ddb0 push ecx */
  push32((uint32_t)(ECX));
  /* 1124ddb1 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x1124ddb4u);
  /* 1124ddb4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1124ddb7:;
  /* 1124ddb7 jmp 0x1124dd87 */
  goto L_1124dd87;
L_1124ddb9:;
  /* 1124ddb9 push 9 */
  push32((uint32_t)(0x9u));
  /* 1124ddbb call 0x1124c7c0 */
  push32(0x1124ddc0u); f_1124c7c0();
  /* 1124ddc0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1124ddc3:;
  /* 1124ddc3 mov esp, ebp */
  ESP = (EBP);
  /* 1124ddc5 pop ebp */
  EBP = (pop32());
  /* 1124ddc6 ret  */
  ESPCHK(0x1124dd60u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x1124ddd0 (75 bytes, 28 insns) */
void f_1124ddd0(void) {
  FTRACE(0x1124ddd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124ddd0 push ebp */
  push32((uint32_t)(EBP));
  /* 1124ddd1 mov ebp, esp */
  EBP = (ESP);
  /* 1124ddd3 push ecx */
  push32((uint32_t)(ECX));
  /* 1124ddd4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124ddd8 je 0x1124de0d */
  if (C.zf) goto L_1124de0d;
  /* 1124ddda mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124dddd push eax */
  push32((uint32_t)(EAX));
  /* 1124ddde mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124dde1 push ecx */
  push32((uint32_t)(ECX));
  /* 1124dde2 call dword ptr [0x11283410] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283410))), 0x1124dde8u);
  /* 1124dde8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124ddea jne 0x1124de0d */
  if (!C.zf) goto L_1124de0d;
  /* 1124ddec cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124ddf0 je 0x1124de04 */
  if (C.zf) goto L_1124de04;
  /* 1124ddf2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124ddf5 push edx */
  push32((uint32_t)(EDX));
  /* 1124ddf6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124ddf9 push eax */
  push32((uint32_t)(EAX));
  /* 1124ddfa call dword ptr [0x11283414] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283414))), 0x1124de00u);
  /* 1124de00 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124de02 jne 0x1124de0d */
  if (!C.zf) goto L_1124de0d;
L_1124de04:;
  /* 1124de04 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1124de0b jmp 0x1124de14 */
  goto L_1124de14;
L_1124de0d:;
  /* 1124de0d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1124de14:;
  /* 1124de14 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124de17 mov esp, ebp */
  ESP = (EBP);
  /* 1124de19 pop ebp */
  EBP = (pop32());
  /* 1124de1a ret  */
  ESPCHK(0x1124ddd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de20 @ 0x1124de20 (134 bytes, 50 insns) */
void f_1124de20(void) {
  FTRACE(0x1124de20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124de20 push ebp */
  push32((uint32_t)(EBP));
  /* 1124de21 mov ebp, esp */
  EBP = (ESP);
  /* 1124de23 push ecx */
  push32((uint32_t)(ECX));
  /* 1124de24 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124de28 jne 0x1124de2e */
  if (!C.zf) goto L_1124de2e;
  /* 1124de2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124de2c jmp 0x1124dea2 */
  goto L_1124dea2;
L_1124de2e:;
  /* 1124de2e push 1 */
  push32((uint32_t)(0x1u));
  /* 1124de30 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1124de32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124de35 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124de38 push eax */
  push32((uint32_t)(EAX));
  /* 1124de39 call 0x1124ddd0 */
  push32(0x1124de3eu); f_1124ddd0();
  /* 1124de3e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124de41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124de43 jne 0x1124de49 */
  if (!C.zf) goto L_1124de49;
  /* 1124de45 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124de47 jmp 0x1124dea2 */
  goto L_1124dea2;
L_1124de49:;
  /* 1124de49 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124de4c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124de4f push ecx */
  push32((uint32_t)(ECX));
  /* 1124de50 call 0x11253580 */
  push32(0x1124de55u); f_11253580();
  /* 1124de55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124de58 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1124de5b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124de5f je 0x1124de76 */
  if (C.zf) goto L_1124de76;
  /* 1124de61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124de64 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124de67 push edx */
  push32((uint32_t)(EDX));
  /* 1124de68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124de6b push eax */
  push32((uint32_t)(EAX));
  /* 1124de6c call 0x112535e0 */
  push32(0x1124de71u); f_112535e0();
  /* 1124de71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124de74 jmp 0x1124dea2 */
  goto L_1124dea2;
L_1124de76:;
  /* 1124de76 mov ecx, dword ptr [0x11281488] */
  ECX = (r32((uint32_t)(0x11281488)));
  /* 1124de7c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1124de82 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1124de84 je 0x1124de8d */
  if (C.zf) goto L_1124de8d;
  /* 1124de86 mov eax, 1 */
  EAX = (0x1u);
  /* 1124de8b jmp 0x1124dea2 */
  goto L_1124dea2;
L_1124de8d:;
  /* 1124de8d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124de90 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124de93 push edx */
  push32((uint32_t)(EDX));
  /* 1124de94 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124de96 mov eax, dword ptr [0x11282dac] */
  EAX = (r32((uint32_t)(0x11282dac)));
  /* 1124de9b push eax */
  push32((uint32_t)(EAX));
  /* 1124de9c call dword ptr [0x11283418] */
  call_ind((uint32_t)(r32((uint32_t)(0x11283418))), 0x1124dea2u);
L_1124dea2:;
  /* 1124dea2 mov esp, ebp */
  ESP = (EBP);
  /* 1124dea4 pop ebp */
  EBP = (pop32());
  /* 1124dea5 ret  */
  ESPCHK(0x1124de20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000deb0 @ 0x1124deb0 (227 bytes, 80 insns) */
void f_1124deb0(void) {
  FTRACE(0x1124deb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124deb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1124deb1 mov ebp, esp */
  EBP = (ESP);
  /* 1124deb3 push ecx */
  push32((uint32_t)(ECX));
  /* 1124deb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124deb7 push eax */
  push32((uint32_t)(EAX));
  /* 1124deb8 call 0x1124de20 */
  push32(0x1124debdu); f_1124de20();
  /* 1124debd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124dec0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124dec2 jne 0x1124decb */
  if (!C.zf) goto L_1124decb;
  /* 1124dec4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124dec6 jmp 0x1124df8f */
  goto L_1124df8f;
L_1124decb:;
  /* 1124decb push 9 */
  push32((uint32_t)(0x9u));
  /* 1124decd call 0x1124c720 */
  push32(0x1124ded2u); f_1124c720();
  /* 1124ded2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124ded5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124ded8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124dedb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1124dede mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124dee1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1124dee4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1124dee9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124deec je 0x1124df10 */
  if (C.zf) goto L_1124df10;
  /* 1124deee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124def1 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124def5 je 0x1124df10 */
  if (C.zf) goto L_1124df10;
  /* 1124def7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124defa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1124defd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1124df02 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124df05 je 0x1124df10 */
  if (C.zf) goto L_1124df10;
  /* 1124df07 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124df0a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124df0e jne 0x1124df83 */
  if (!C.zf) goto L_1124df83;
L_1124df10:;
  /* 1124df10 push 1 */
  push32((uint32_t)(0x1u));
  /* 1124df12 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124df15 push edx */
  push32((uint32_t)(EDX));
  /* 1124df16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124df19 push eax */
  push32((uint32_t)(EAX));
  /* 1124df1a call 0x1124ddd0 */
  push32(0x1124df1fu); f_1124ddd0();
  /* 1124df1f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124df22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124df24 je 0x1124df83 */
  if (C.zf) goto L_1124df83;
  /* 1124df26 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124df29 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1124df2c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124df2f jne 0x1124df83 */
  if (!C.zf) goto L_1124df83;
  /* 1124df31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124df34 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 1124df37 cmp ecx, dword ptr [0x1127eefc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1127eefc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124df3d jg 0x1124df83 */
  if ((!C.zf&&C.sf==C.of)) goto L_1124df83;
  /* 1124df3f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124df43 je 0x1124df50 */
  if (C.zf) goto L_1124df50;
  /* 1124df45 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124df48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124df4b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 1124df4e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1124df50:;
  /* 1124df50 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124df54 je 0x1124df61 */
  if (C.zf) goto L_1124df61;
  /* 1124df56 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1124df59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124df5c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1124df5f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1124df61:;
  /* 1124df61 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124df65 je 0x1124df72 */
  if (C.zf) goto L_1124df72;
  /* 1124df67 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1124df6a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124df6d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1124df70 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1124df72:;
  /* 1124df72 push 9 */
  push32((uint32_t)(0x9u));
  /* 1124df74 call 0x1124c7c0 */
  push32(0x1124df79u); f_1124c7c0();
  /* 1124df79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124df7c mov eax, 1 */
  EAX = (0x1u);
  /* 1124df81 jmp 0x1124df8f */
  goto L_1124df8f;
L_1124df83:;
  /* 1124df83 push 9 */
  push32((uint32_t)(0x9u));
  /* 1124df85 call 0x1124c7c0 */
  push32(0x1124df8au); f_1124c7c0();
  /* 1124df8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124df8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1124df8f:;
  /* 1124df8f mov esp, ebp */
  ESP = (EBP);
  /* 1124df91 pop ebp */
  EBP = (pop32());
  /* 1124df92 ret  */
  ESPCHK(0x1124deb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dfa0 @ 0x1124dfa0 (28 bytes, 11 insns) */
void f_1124dfa0(void) {
  FTRACE(0x1124dfa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124dfa0 push ebp */
  push32((uint32_t)(EBP));
  /* 1124dfa1 mov ebp, esp */
  EBP = (ESP);
  /* 1124dfa3 push ecx */
  push32((uint32_t)(ECX));
  /* 1124dfa4 mov eax, dword ptr [0x11282f1c] */
  EAX = (r32((uint32_t)(0x11282f1c)));
  /* 1124dfa9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1124dfac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124dfaf mov dword ptr [0x11282f1c], ecx */
  w32((uint32_t)(0x11282f1c), (ECX));
  /* 1124dfb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124dfb8 mov esp, ebp */
  ESP = (EBP);
  /* 1124dfba pop ebp */
  EBP = (pop32());
  /* 1124dfbb ret  */
  ESPCHK(0x1124dfa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dfc0 @ 0x1124dfc0 (362 bytes, 116 insns) */
void f_1124dfc0(void) {
  FTRACE(0x1124dfc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124dfc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1124dfc1 mov ebp, esp */
  EBP = (ESP);
  /* 1124dfc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124dfc6 push ebx */
  push32((uint32_t)(EBX));
  /* 1124dfc7 push esi */
  push32((uint32_t)(ESI));
  /* 1124dfc8 push edi */
  push32((uint32_t)(EDI));
  /* 1124dfc9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124dfcd jne 0x1124dffa */
  if (!C.zf) goto L_1124dffa;
L_1124dfcf:;
  /* 1124dfcf push 0x1127bb1c */
  push32((uint32_t)(0x1127bb1cu));
  /* 1124dfd4 push 0x1127b65c */
  push32((uint32_t)(0x1127b65cu));
  /* 1124dfd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124dfdb push 0 */
  push32((uint32_t)(0x0u));
  /* 1124dfdd push 0 */
  push32((uint32_t)(0x0u));
  /* 1124dfdf push 0 */
  push32((uint32_t)(0x0u));
  /* 1124dfe1 call 0x1124b3e0 */
  push32(0x1124dfe6u); f_1124b3e0();
  /* 1124dfe6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124dfe9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124dfec jne 0x1124dfef */
  if (!C.zf) goto L_1124dfef;
  /* 1124dfee int3  */
  x86_unimpl("int3 @ 0x1124dfee");
L_1124dfef:;
  /* 1124dfef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124dff1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124dff3 jne 0x1124dfcf */
  if (!C.zf) goto L_1124dfcf;
  /* 1124dff5 jmp 0x1124e123 */
  goto L_1124e123;
L_1124dffa:;
  /* 1124dffa push 9 */
  push32((uint32_t)(0x9u));
  /* 1124dffc call 0x1124c720 */
  push32(0x1124e001u); f_1124c720();
  /* 1124e001 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124e004 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124e007 mov edx, dword ptr [0x11281478] */
  EDX = (r32((uint32_t)(0x11281478)));
  /* 1124e00d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1124e00f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1124e016 jmp 0x1124e021 */
  goto L_1124e021;
L_1124e018:;
  /* 1124e018 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124e01b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124e01e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1124e021:;
  /* 1124e021 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e025 jge 0x1124e045 */
  if ((C.sf==C.of)) goto L_1124e045;
  /* 1124e027 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124e02a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124e02d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 1124e035 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124e038 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124e03b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 1124e043 jmp 0x1124e018 */
  goto L_1124e018;
L_1124e045:;
  /* 1124e045 mov edx, dword ptr [0x11281478] */
  EDX = (r32((uint32_t)(0x11281478)));
  /* 1124e04b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1124e04e jmp 0x1124e058 */
  goto L_1124e058;
L_1124e050:;
  /* 1124e050 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124e053 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1124e055 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1124e058:;
  /* 1124e058 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e05c je 0x1124e101 */
  if (C.zf) goto L_1124e101;
  /* 1124e062 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124e065 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1124e068 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1124e06d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124e06f jl 0x1124e0d7 */
  if ((C.sf!=C.of)) goto L_1124e0d7;
  /* 1124e071 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124e074 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1124e077 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1124e07d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e080 jge 0x1124e0d7 */
  if ((C.sf==C.of)) goto L_1124e0d7;
  /* 1124e082 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124e085 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1124e088 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1124e08e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124e091 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 1124e095 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124e098 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124e09b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1124e09e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1124e0a4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124e0a7 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 1124e0ab mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124e0ae mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1124e0b1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1124e0b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124e0b9 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 1124e0bd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124e0c0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124e0c3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124e0c6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 1124e0c9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1124e0ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124e0d1 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 1124e0d5 jmp 0x1124e0fc */
  goto L_1124e0fc;
L_1124e0d7:;
  /* 1124e0d7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124e0da push edx */
  push32((uint32_t)(EDX));
  /* 1124e0db push 0x1127baf8 */
  push32((uint32_t)(0x1127baf8u));
  /* 1124e0e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e0e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e0e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e0e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e0e8 call 0x1124b3e0 */
  push32(0x1124e0edu); f_1124b3e0();
  /* 1124e0ed add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124e0f0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e0f3 jne 0x1124e0f6 */
  if (!C.zf) goto L_1124e0f6;
  /* 1124e0f5 int3  */
  x86_unimpl("int3 @ 0x1124e0f5");
L_1124e0f6:;
  /* 1124e0f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124e0f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124e0fa jne 0x1124e0d7 */
  if (!C.zf) goto L_1124e0d7;
L_1124e0fc:;
  /* 1124e0fc jmp 0x1124e050 */
  goto L_1124e050;
L_1124e101:;
  /* 1124e101 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124e104 mov edx, dword ptr [0x11281480] */
  EDX = (r32((uint32_t)(0x11281480)));
  /* 1124e10a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 1124e10d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124e110 mov ecx, dword ptr [0x11281474] */
  ECX = (r32((uint32_t)(0x11281474)));
  /* 1124e116 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 1124e119 push 9 */
  push32((uint32_t)(0x9u));
  /* 1124e11b call 0x1124c7c0 */
  push32(0x1124e120u); f_1124c7c0();
  /* 1124e120 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1124e123:;
  /* 1124e123 pop edi */
  EDI = (pop32());
  /* 1124e124 pop esi */
  ESI = (pop32());
  /* 1124e125 pop ebx */
  EBX = (pop32());
  /* 1124e126 mov esp, ebp */
  ESP = (EBP);
  /* 1124e128 pop ebp */
  EBP = (pop32());
  /* 1124e129 ret  */
  ESPCHK(0x1124dfc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e130 @ 0x1124e130 (291 bytes, 95 insns) */
void f_1124e130(void) {
  FTRACE(0x1124e130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124e130 push ebp */
  push32((uint32_t)(EBP));
  /* 1124e131 mov ebp, esp */
  EBP = (ESP);
  /* 1124e133 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124e136 push ebx */
  push32((uint32_t)(EBX));
  /* 1124e137 push esi */
  push32((uint32_t)(ESI));
  /* 1124e138 push edi */
  push32((uint32_t)(EDI));
  /* 1124e139 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1124e140 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e144 je 0x1124e152 */
  if (C.zf) goto L_1124e152;
  /* 1124e146 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e14a je 0x1124e152 */
  if (C.zf) goto L_1124e152;
  /* 1124e14c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e150 jne 0x1124e180 */
  if (!C.zf) goto L_1124e180;
L_1124e152:;
  /* 1124e152 push 0x1127bb44 */
  push32((uint32_t)(0x1127bb44u));
  /* 1124e157 push 0x1127b65c */
  push32((uint32_t)(0x1127b65cu));
  /* 1124e15c push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e15e push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e160 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e162 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e164 call 0x1124b3e0 */
  push32(0x1124e169u); f_1124b3e0();
  /* 1124e169 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124e16c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e16f jne 0x1124e172 */
  if (!C.zf) goto L_1124e172;
  /* 1124e171 int3  */
  x86_unimpl("int3 @ 0x1124e171");
L_1124e172:;
  /* 1124e172 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124e174 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124e176 jne 0x1124e152 */
  if (!C.zf) goto L_1124e152;
  /* 1124e178 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124e17b jmp 0x1124e24c */
  goto L_1124e24c;
L_1124e180:;
  /* 1124e180 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1124e187 jmp 0x1124e192 */
  goto L_1124e192;
L_1124e189:;
  /* 1124e189 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124e18c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124e18f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1124e192:;
  /* 1124e192 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e196 jge 0x1124e21c */
  if ((C.sf==C.of)) goto L_1124e21c;
  /* 1124e19c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124e19f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124e1a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124e1a5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1124e1a8 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 1124e1ac sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124e1b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124e1b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124e1b6 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 1124e1ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124e1bd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124e1c0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124e1c3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1124e1c6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 1124e1ca sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124e1ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124e1d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124e1d4 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 1124e1d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124e1db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124e1de cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e1e3 jne 0x1124e1f2 */
  if (!C.zf) goto L_1124e1f2;
  /* 1124e1e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124e1e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124e1eb cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e1f0 je 0x1124e217 */
  if (C.zf) goto L_1124e217;
L_1124e1f2:;
  /* 1124e1f2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e1f6 je 0x1124e217 */
  if (C.zf) goto L_1124e217;
  /* 1124e1f8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e1fc jne 0x1124e210 */
  if (!C.zf) goto L_1124e210;
  /* 1124e1fe cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e202 jne 0x1124e217 */
  if (!C.zf) goto L_1124e217;
  /* 1124e204 mov eax, dword ptr [0x1127eef8] */
  EAX = (r32((uint32_t)(0x1127eef8)));
  /* 1124e209 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1124e20c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124e20e je 0x1124e217 */
  if (C.zf) goto L_1124e217;
L_1124e210:;
  /* 1124e210 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_1124e217:;
  /* 1124e217 jmp 0x1124e189 */
  goto L_1124e189;
L_1124e21c:;
  /* 1124e21c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124e21f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124e222 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 1124e225 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124e228 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124e22b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 1124e22e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124e231 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124e234 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 1124e237 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124e23a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124e23d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 1124e240 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124e243 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1124e249 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1124e24c:;
  /* 1124e24c pop edi */
  EDI = (pop32());
  /* 1124e24d pop esi */
  ESI = (pop32());
  /* 1124e24e pop ebx */
  EBX = (pop32());
  /* 1124e24f mov esp, ebp */
  ESP = (EBP);
  /* 1124e251 pop ebp */
  EBP = (pop32());
  /* 1124e252 ret  */
  ESPCHK(0x1124e130u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e260 @ 0x1124e260 (697 bytes, 253 insns) */
void f_1124e260(void) {
  FTRACE(0x1124e260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124e260 push ebp */
  push32((uint32_t)(EBP));
  /* 1124e261 mov ebp, esp */
  EBP = (ESP);
  /* 1124e263 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124e266 push ebx */
  push32((uint32_t)(EBX));
  /* 1124e267 push esi */
  push32((uint32_t)(ESI));
  /* 1124e268 push edi */
  push32((uint32_t)(EDI));
  /* 1124e269 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1124e270 push 9 */
  push32((uint32_t)(0x9u));
  /* 1124e272 call 0x1124c720 */
  push32(0x1124e277u); f_1124c720();
  /* 1124e277 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1124e27a:;
  /* 1124e27a push 0x1127bc3c */
  push32((uint32_t)(0x1127bc3cu));
  /* 1124e27f push 0x1127b65c */
  push32((uint32_t)(0x1127b65cu));
  /* 1124e284 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e286 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e288 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e28a push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e28c call 0x1124b3e0 */
  push32(0x1124e291u); f_1124b3e0();
  /* 1124e291 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124e294 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e297 jne 0x1124e29a */
  if (!C.zf) goto L_1124e29a;
  /* 1124e299 int3  */
  x86_unimpl("int3 @ 0x1124e299");
L_1124e29a:;
  /* 1124e29a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124e29c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124e29e jne 0x1124e27a */
  if (!C.zf) goto L_1124e27a;
  /* 1124e2a0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e2a4 je 0x1124e2ae */
  if (C.zf) goto L_1124e2ae;
  /* 1124e2a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124e2a9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1124e2ab mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1124e2ae:;
  /* 1124e2ae mov eax, dword ptr [0x11281478] */
  EAX = (r32((uint32_t)(0x11281478)));
  /* 1124e2b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1124e2b6 jmp 0x1124e2c0 */
  goto L_1124e2c0;
L_1124e2b8:;
  /* 1124e2b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124e2bb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1124e2bd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1124e2c0:;
  /* 1124e2c0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e2c4 je 0x1124e4e2 */
  if (C.zf) goto L_1124e4e2;
  /* 1124e2ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124e2cd cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e2d0 je 0x1124e4e2 */
  if (C.zf) goto L_1124e4e2;
  /* 1124e2d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124e2d9 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1124e2dc and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1124e2e2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e2e5 je 0x1124e314 */
  if (C.zf) goto L_1124e314;
  /* 1124e2e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124e2ea mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1124e2ed and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1124e2f3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1124e2f5 je 0x1124e314 */
  if (C.zf) goto L_1124e314;
  /* 1124e2f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124e2fa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1124e2fd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1124e302 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e305 jne 0x1124e319 */
  if (!C.zf) goto L_1124e319;
  /* 1124e307 mov ecx, dword ptr [0x1127eef8] */
  ECX = (r32((uint32_t)(0x1127eef8)));
  /* 1124e30d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 1124e310 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1124e312 jne 0x1124e319 */
  if (!C.zf) goto L_1124e319;
L_1124e314:;
  /* 1124e314 jmp 0x1124e4dd */
  goto L_1124e4dd;
L_1124e319:;
  /* 1124e319 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124e31c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e320 je 0x1124e392 */
  if (C.zf) goto L_1124e392;
  /* 1124e322 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e324 push 1 */
  push32((uint32_t)(0x1u));
  /* 1124e326 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124e329 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1124e32c push ecx */
  push32((uint32_t)(ECX));
  /* 1124e32d call 0x1124ddd0 */
  push32(0x1124e332u); f_1124ddd0();
  /* 1124e332 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124e335 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124e337 jne 0x1124e363 */
  if (!C.zf) goto L_1124e363;
L_1124e339:;
  /* 1124e339 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124e33c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1124e33f push eax */
  push32((uint32_t)(EAX));
  /* 1124e340 push 0x1127bc28 */
  push32((uint32_t)(0x1127bc28u));
  /* 1124e345 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e347 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e349 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e34b push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e34d call 0x1124b3e0 */
  push32(0x1124e352u); f_1124b3e0();
  /* 1124e352 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124e355 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e358 jne 0x1124e35b */
  if (!C.zf) goto L_1124e35b;
  /* 1124e35a int3  */
  x86_unimpl("int3 @ 0x1124e35a");
L_1124e35b:;
  /* 1124e35b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1124e35d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1124e35f jne 0x1124e339 */
  if (!C.zf) goto L_1124e339;
  /* 1124e361 jmp 0x1124e392 */
  goto L_1124e392;
L_1124e363:;
  /* 1124e363 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124e366 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1124e369 push eax */
  push32((uint32_t)(EAX));
  /* 1124e36a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124e36d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1124e370 push edx */
  push32((uint32_t)(EDX));
  /* 1124e371 push 0x1127bc1c */
  push32((uint32_t)(0x1127bc1cu));
  /* 1124e376 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e378 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e37a push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e37c push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e37e call 0x1124b3e0 */
  push32(0x1124e383u); f_1124b3e0();
  /* 1124e383 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124e386 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e389 jne 0x1124e38c */
  if (!C.zf) goto L_1124e38c;
  /* 1124e38b int3  */
  x86_unimpl("int3 @ 0x1124e38b");
L_1124e38c:;
  /* 1124e38c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124e38e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124e390 jne 0x1124e363 */
  if (!C.zf) goto L_1124e363;
L_1124e392:;
  /* 1124e392 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124e395 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1124e398 push edx */
  push32((uint32_t)(EDX));
  /* 1124e399 push 0x1127bc14 */
  push32((uint32_t)(0x1127bc14u));
  /* 1124e39e push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e3a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e3a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e3a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e3a6 call 0x1124b3e0 */
  push32(0x1124e3abu); f_1124b3e0();
  /* 1124e3ab add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124e3ae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e3b1 jne 0x1124e3b4 */
  if (!C.zf) goto L_1124e3b4;
  /* 1124e3b3 int3  */
  x86_unimpl("int3 @ 0x1124e3b3");
L_1124e3b4:;
  /* 1124e3b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124e3b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124e3b8 jne 0x1124e392 */
  if (!C.zf) goto L_1124e392;
  /* 1124e3ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124e3bd mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1124e3c0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1124e3c6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e3c9 jne 0x1124e43c */
  if (!C.zf) goto L_1124e43c;
L_1124e3cb:;
  /* 1124e3cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124e3ce mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1124e3d1 push ecx */
  push32((uint32_t)(ECX));
  /* 1124e3d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124e3d5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1124e3d8 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1124e3db and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1124e3e0 push eax */
  push32((uint32_t)(EAX));
  /* 1124e3e1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124e3e4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124e3e7 push ecx */
  push32((uint32_t)(ECX));
  /* 1124e3e8 push 0x1127bbe0 */
  push32((uint32_t)(0x1127bbe0u));
  /* 1124e3ed push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e3ef push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e3f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e3f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e3f5 call 0x1124b3e0 */
  push32(0x1124e3fau); f_1124b3e0();
  /* 1124e3fa add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124e3fd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e400 jne 0x1124e403 */
  if (!C.zf) goto L_1124e403;
  /* 1124e402 int3  */
  x86_unimpl("int3 @ 0x1124e402");
L_1124e403:;
  /* 1124e403 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1124e405 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1124e407 jne 0x1124e3cb */
  if (!C.zf) goto L_1124e3cb;
  /* 1124e409 cmp dword ptr [0x11282f1c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11282f1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e410 je 0x1124e42b */
  if (C.zf) goto L_1124e42b;
  /* 1124e412 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124e415 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1124e418 push ecx */
  push32((uint32_t)(ECX));
  /* 1124e419 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124e41c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124e41f push edx */
  push32((uint32_t)(EDX));
  /* 1124e420 call dword ptr [0x11282f1c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11282f1c))), 0x1124e426u);
  /* 1124e426 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124e429 jmp 0x1124e437 */
  goto L_1124e437;
L_1124e42b:;
  /* 1124e42b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124e42e push eax */
  push32((uint32_t)(EAX));
  /* 1124e42f call 0x1124e520 */
  push32(0x1124e434u); f_1124e520();
  /* 1124e434 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1124e437:;
  /* 1124e437 jmp 0x1124e4dd */
  goto L_1124e4dd;
L_1124e43c:;
  /* 1124e43c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124e43f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e443 jne 0x1124e482 */
  if (!C.zf) goto L_1124e482;
L_1124e445:;
  /* 1124e445 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124e448 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1124e44b push eax */
  push32((uint32_t)(EAX));
  /* 1124e44c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124e44f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124e452 push ecx */
  push32((uint32_t)(ECX));
  /* 1124e453 push 0x1127bbb8 */
  push32((uint32_t)(0x1127bbb8u));
  /* 1124e458 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e45a push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e45c push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e45e push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e460 call 0x1124b3e0 */
  push32(0x1124e465u); f_1124b3e0();
  /* 1124e465 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124e468 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e46b jne 0x1124e46e */
  if (!C.zf) goto L_1124e46e;
  /* 1124e46d int3  */
  x86_unimpl("int3 @ 0x1124e46d");
L_1124e46e:;
  /* 1124e46e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1124e470 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1124e472 jne 0x1124e445 */
  if (!C.zf) goto L_1124e445;
  /* 1124e474 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124e477 push eax */
  push32((uint32_t)(EAX));
  /* 1124e478 call 0x1124e520 */
  push32(0x1124e47du); f_1124e520();
  /* 1124e47d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124e480 jmp 0x1124e4dd */
  goto L_1124e4dd;
L_1124e482:;
  /* 1124e482 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124e485 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1124e488 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1124e48e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e491 jne 0x1124e4dd */
  if (!C.zf) goto L_1124e4dd;
L_1124e493:;
  /* 1124e493 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124e496 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1124e499 push ecx */
  push32((uint32_t)(ECX));
  /* 1124e49a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124e49d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1124e4a0 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1124e4a3 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1124e4a8 push eax */
  push32((uint32_t)(EAX));
  /* 1124e4a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124e4ac add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124e4af push ecx */
  push32((uint32_t)(ECX));
  /* 1124e4b0 push 0x1127bb84 */
  push32((uint32_t)(0x1127bb84u));
  /* 1124e4b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e4b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e4b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e4bb push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e4bd call 0x1124b3e0 */
  push32(0x1124e4c2u); f_1124b3e0();
  /* 1124e4c2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124e4c5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e4c8 jne 0x1124e4cb */
  if (!C.zf) goto L_1124e4cb;
  /* 1124e4ca int3  */
  x86_unimpl("int3 @ 0x1124e4ca");
L_1124e4cb:;
  /* 1124e4cb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1124e4cd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1124e4cf jne 0x1124e493 */
  if (!C.zf) goto L_1124e493;
  /* 1124e4d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124e4d4 push eax */
  push32((uint32_t)(EAX));
  /* 1124e4d5 call 0x1124e520 */
  push32(0x1124e4dau); f_1124e520();
  /* 1124e4da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1124e4dd:;
  /* 1124e4dd jmp 0x1124e2b8 */
  goto L_1124e2b8;
L_1124e4e2:;
  /* 1124e4e2 push 9 */
  push32((uint32_t)(0x9u));
  /* 1124e4e4 call 0x1124c7c0 */
  push32(0x1124e4e9u); f_1124c7c0();
  /* 1124e4e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1124e4ec:;
  /* 1124e4ec push 0x1127bb6c */
  push32((uint32_t)(0x1127bb6cu));
  /* 1124e4f1 push 0x1127b65c */
  push32((uint32_t)(0x1127b65cu));
  /* 1124e4f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e4f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e4fa push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e4fc push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e4fe call 0x1124b3e0 */
  push32(0x1124e503u); f_1124b3e0();
  /* 1124e503 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124e506 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e509 jne 0x1124e50c */
  if (!C.zf) goto L_1124e50c;
  /* 1124e50b int3  */
  x86_unimpl("int3 @ 0x1124e50b");
L_1124e50c:;
  /* 1124e50c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1124e50e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1124e510 jne 0x1124e4ec */
  if (!C.zf) goto L_1124e4ec;
  /* 1124e512 pop edi */
  EDI = (pop32());
  /* 1124e513 pop esi */
  ESI = (pop32());
  /* 1124e514 pop ebx */
  EBX = (pop32());
  /* 1124e515 mov esp, ebp */
  ESP = (EBP);
  /* 1124e517 pop ebp */
  EBP = (pop32());
  /* 1124e518 ret  */
  ESPCHK(0x1124e260u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e520 @ 0x1124e520 (276 bytes, 89 insns) */
void f_1124e520(void) {
  FTRACE(0x1124e520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124e520 push ebp */
  push32((uint32_t)(EBP));
  /* 1124e521 mov ebp, esp */
  EBP = (ESP);
  /* 1124e523 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124e526 push ebx */
  push32((uint32_t)(EBX));
  /* 1124e527 push esi */
  push32((uint32_t)(ESI));
  /* 1124e528 push edi */
  push32((uint32_t)(EDI));
  /* 1124e529 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 1124e530 jmp 0x1124e53b */
  goto L_1124e53b;
L_1124e532:;
  /* 1124e532 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1124e535 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124e538 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_1124e53b:;
  /* 1124e53b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124e53e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e542 jge 0x1124e54f */
  if ((C.sf==C.of)) goto L_1124e54f;
  /* 1124e544 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124e547 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1124e54a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 1124e54d jmp 0x1124e556 */
  goto L_1124e556;
L_1124e54f:;
  /* 1124e54f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_1124e556:;
  /* 1124e556 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1124e559 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e55c jge 0x1124e5fc */
  if ((C.sf==C.of)) goto L_1124e5fc;
  /* 1124e562 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124e565 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124e568 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 1124e56b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 1124e56e cmp dword ptr [0x1127efe0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1127efe0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e575 jle 0x1124e593 */
  if ((C.zf||C.sf!=C.of)) goto L_1124e593;
  /* 1124e577 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 1124e57c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1124e57f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1124e585 push ecx */
  push32((uint32_t)(ECX));
  /* 1124e586 call 0x11251ec0 */
  push32(0x1124e58bu); f_11251ec0();
  /* 1124e58b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124e58e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 1124e591 jmp 0x1124e5b0 */
  goto L_1124e5b0;
L_1124e593:;
  /* 1124e593 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1124e596 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1124e59c mov eax, dword ptr [0x1127efec] */
  EAX = (r32((uint32_t)(0x1127efec)));
  /* 1124e5a1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1124e5a3 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1124e5a7 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 1124e5ad mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_1124e5b0:;
  /* 1124e5b0 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e5b4 je 0x1124e5c4 */
  if (C.zf) goto L_1124e5c4;
  /* 1124e5b6 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1124e5b9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1124e5bf mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 1124e5c2 jmp 0x1124e5cb */
  goto L_1124e5cb;
L_1124e5c4:;
  /* 1124e5c4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_1124e5cb:;
  /* 1124e5cb mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1124e5ce mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 1124e5d1 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 1124e5d5 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1124e5d8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1124e5de push edx */
  push32((uint32_t)(EDX));
  /* 1124e5df push 0x1127bc60 */
  push32((uint32_t)(0x1127bc60u));
  /* 1124e5e4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1124e5e7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1124e5ea lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 1124e5ee push ecx */
  push32((uint32_t)(ECX));
  /* 1124e5ef call 0x11255190 */
  push32(0x1124e5f4u); f_11255190();
  /* 1124e5f4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124e5f7 jmp 0x1124e532 */
  goto L_1124e532;
L_1124e5fc:;
  /* 1124e5fc mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1124e5ff mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_1124e604:;
  /* 1124e604 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 1124e607 push eax */
  push32((uint32_t)(EAX));
  /* 1124e608 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 1124e60b push ecx */
  push32((uint32_t)(ECX));
  /* 1124e60c push 0x1127bc50 */
  push32((uint32_t)(0x1127bc50u));
  /* 1124e611 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e613 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e615 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e617 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e619 call 0x1124b3e0 */
  push32(0x1124e61eu); f_1124b3e0();
  /* 1124e61e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124e621 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e624 jne 0x1124e627 */
  if (!C.zf) goto L_1124e627;
  /* 1124e626 int3  */
  x86_unimpl("int3 @ 0x1124e626");
L_1124e627:;
  /* 1124e627 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1124e629 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1124e62b jne 0x1124e604 */
  if (!C.zf) goto L_1124e604;
  /* 1124e62d pop edi */
  EDI = (pop32());
  /* 1124e62e pop esi */
  ESI = (pop32());
  /* 1124e62f pop ebx */
  EBX = (pop32());
  /* 1124e630 mov esp, ebp */
  ESP = (EBP);
  /* 1124e632 pop ebp */
  EBP = (pop32());
  /* 1124e633 ret  */
  ESPCHK(0x1124e520u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e640 @ 0x1124e640 (116 bytes, 46 insns) */
void f_1124e640(void) {
  FTRACE(0x1124e640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124e640 push ebp */
  push32((uint32_t)(EBP));
  /* 1124e641 mov ebp, esp */
  EBP = (ESP);
  /* 1124e643 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124e646 push ebx */
  push32((uint32_t)(EBX));
  /* 1124e647 push esi */
  push32((uint32_t)(ESI));
  /* 1124e648 push edi */
  push32((uint32_t)(EDI));
  /* 1124e649 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 1124e64c push eax */
  push32((uint32_t)(EAX));
  /* 1124e64d call 0x1124dfc0 */
  push32(0x1124e652u); f_1124dfc0();
  /* 1124e652 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124e655 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e659 jne 0x1124e674 */
  if (!C.zf) goto L_1124e674;
  /* 1124e65b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e65f jne 0x1124e674 */
  if (!C.zf) goto L_1124e674;
  /* 1124e661 mov ecx, dword ptr [0x1127eef8] */
  ECX = (r32((uint32_t)(0x1127eef8)));
  /* 1124e667 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 1124e66a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1124e66c je 0x1124e6ab */
  if (C.zf) goto L_1124e6ab;
  /* 1124e66e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e672 je 0x1124e6ab */
  if (C.zf) goto L_1124e6ab;
L_1124e674:;
  /* 1124e674 push 0x1127bc68 */
  push32((uint32_t)(0x1127bc68u));
  /* 1124e679 push 0x1127b65c */
  push32((uint32_t)(0x1127b65cu));
  /* 1124e67e push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e680 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e682 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e684 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e686 call 0x1124b3e0 */
  push32(0x1124e68bu); f_1124b3e0();
  /* 1124e68b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124e68e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e691 jne 0x1124e694 */
  if (!C.zf) goto L_1124e694;
  /* 1124e693 int3  */
  x86_unimpl("int3 @ 0x1124e693");
L_1124e694:;
  /* 1124e694 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1124e696 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1124e698 jne 0x1124e674 */
  if (!C.zf) goto L_1124e674;
  /* 1124e69a push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e69c call 0x1124e260 */
  push32(0x1124e6a1u); f_1124e260();
  /* 1124e6a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124e6a4 mov eax, 1 */
  EAX = (0x1u);
  /* 1124e6a9 jmp 0x1124e6ad */
  goto L_1124e6ad;
L_1124e6ab:;
  /* 1124e6ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1124e6ad:;
  /* 1124e6ad pop edi */
  EDI = (pop32());
  /* 1124e6ae pop esi */
  ESI = (pop32());
  /* 1124e6af pop ebx */
  EBX = (pop32());
  /* 1124e6b0 mov esp, ebp */
  ESP = (EBP);
  /* 1124e6b2 pop ebp */
  EBP = (pop32());
  /* 1124e6b3 ret  */
  ESPCHK(0x1124e640u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e6c0 @ 0x1124e6c0 (197 bytes, 79 insns) */
void f_1124e6c0(void) {
  FTRACE(0x1124e6c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124e6c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1124e6c1 mov ebp, esp */
  EBP = (ESP);
  /* 1124e6c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1124e6c4 push ebx */
  push32((uint32_t)(EBX));
  /* 1124e6c5 push esi */
  push32((uint32_t)(ESI));
  /* 1124e6c6 push edi */
  push32((uint32_t)(EDI));
  /* 1124e6c7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e6cb jne 0x1124e6d2 */
  if (!C.zf) goto L_1124e6d2;
  /* 1124e6cd jmp 0x1124e77e */
  goto L_1124e77e;
L_1124e6d2:;
  /* 1124e6d2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1124e6d9 jmp 0x1124e6e4 */
  goto L_1124e6e4;
L_1124e6db:;
  /* 1124e6db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124e6de add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124e6e1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1124e6e4:;
  /* 1124e6e4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e6e8 jge 0x1124e72e */
  if ((C.sf==C.of)) goto L_1124e72e;
L_1124e6ea:;
  /* 1124e6ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124e6ed mov edx, dword ptr [ecx*4 + 0x1127ef08] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1127ef08)));
  /* 1124e6f4 push edx */
  push32((uint32_t)(EDX));
  /* 1124e6f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124e6f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124e6fb mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 1124e6ff push edx */
  push32((uint32_t)(EDX));
  /* 1124e700 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124e703 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124e706 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 1124e70a push edx */
  push32((uint32_t)(EDX));
  /* 1124e70b push 0x1127bcc4 */
  push32((uint32_t)(0x1127bcc4u));
  /* 1124e710 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e712 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e714 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e716 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e718 call 0x1124b3e0 */
  push32(0x1124e71du); f_1124b3e0();
  /* 1124e71d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124e720 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e723 jne 0x1124e726 */
  if (!C.zf) goto L_1124e726;
  /* 1124e725 int3  */
  x86_unimpl("int3 @ 0x1124e725");
L_1124e726:;
  /* 1124e726 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124e728 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124e72a jne 0x1124e6ea */
  if (!C.zf) goto L_1124e6ea;
  /* 1124e72c jmp 0x1124e6db */
  goto L_1124e6db;
L_1124e72e:;
  /* 1124e72e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124e731 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 1124e734 push edx */
  push32((uint32_t)(EDX));
  /* 1124e735 push 0x1127bca0 */
  push32((uint32_t)(0x1127bca0u));
  /* 1124e73a push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e73c push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e73e push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e740 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e742 call 0x1124b3e0 */
  push32(0x1124e747u); f_1124b3e0();
  /* 1124e747 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124e74a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e74d jne 0x1124e750 */
  if (!C.zf) goto L_1124e750;
  /* 1124e74f int3  */
  x86_unimpl("int3 @ 0x1124e74f");
L_1124e750:;
  /* 1124e750 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124e752 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124e754 jne 0x1124e72e */
  if (!C.zf) goto L_1124e72e;
L_1124e756:;
  /* 1124e756 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124e759 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 1124e75c push edx */
  push32((uint32_t)(EDX));
  /* 1124e75d push 0x1127bc80 */
  push32((uint32_t)(0x1127bc80u));
  /* 1124e762 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e764 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e766 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e768 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124e76a call 0x1124b3e0 */
  push32(0x1124e76fu); f_1124b3e0();
  /* 1124e76f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124e772 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e775 jne 0x1124e778 */
  if (!C.zf) goto L_1124e778;
  /* 1124e777 int3  */
  x86_unimpl("int3 @ 0x1124e777");
L_1124e778:;
  /* 1124e778 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124e77a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124e77c jne 0x1124e756 */
  if (!C.zf) goto L_1124e756;
L_1124e77e:;
  /* 1124e77e pop edi */
  EDI = (pop32());
  /* 1124e77f pop esi */
  ESI = (pop32());
  /* 1124e780 pop ebx */
  EBX = (pop32());
  /* 1124e781 mov esp, ebp */
  ESP = (EBP);
  /* 1124e783 pop ebp */
  EBP = (pop32());
  /* 1124e784 ret  */
  ESPCHK(0x1124e6c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e790 @ 0x1124e790 (239 bytes, 88 insns) */
void f_1124e790(void) {
  FTRACE(0x1124e790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124e790 push ebp */
  push32((uint32_t)(EBP));
  /* 1124e791 mov ebp, esp */
  EBP = (ESP);
  /* 1124e793 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124e796 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1124e799 cmp dword ptr [eax], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e79f jne 0x1124e7aa */
  if (!C.zf) goto L_1124e7aa;
  /* 1124e7a1 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1124e7a8 jmp 0x1124e7b2 */
  goto L_1124e7b2;
L_1124e7aa:;
  /* 1124e7aa call 0x1124f7a0 */
  push32(0x1124e7afu); f_1124f7a0();
  /* 1124e7af mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1124e7b2:;
  /* 1124e7b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124e7b5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1124e7b8 and edx, 0x66 */
  { uint32_t _r=(EDX)&(0x66u); EDX = (_r); fl_logic(_r,32); }
  /* 1124e7bb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1124e7bd je 0x1124e7ee */
  if (C.zf) goto L_1124e7ee;
  /* 1124e7bf mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1124e7c2 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e7c6 je 0x1124e7e4 */
  if (C.zf) goto L_1124e7e4;
  /* 1124e7c8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e7cc jne 0x1124e7e4 */
  if (!C.zf) goto L_1124e7e4;
  /* 1124e7ce push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1124e7d0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1124e7d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1124e7d4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1124e7d7 push edx */
  push32((uint32_t)(EDX));
  /* 1124e7d8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124e7db push eax */
  push32((uint32_t)(EAX));
  /* 1124e7dc call 0x1124ed00 */
  push32(0x1124e7e1u); f_1124ed00();
  /* 1124e7e1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1124e7e4:;
  /* 1124e7e4 mov eax, 1 */
  EAX = (0x1u);
  /* 1124e7e9 jmp 0x1124e87b */
  goto L_1124e87b;
L_1124e7ee:;
  /* 1124e7ee mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1124e7f1 cmp dword ptr [ecx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e7f5 je 0x1124e876 */
  if (C.zf) goto L_1124e876;
  /* 1124e7f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124e7fa cmp dword ptr [edx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e800 jne 0x1124e84e */
  if (!C.zf) goto L_1124e84e;
  /* 1124e802 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124e805 cmp dword ptr [eax + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e80c jbe 0x1124e84e */
  if ((C.cf||C.zf)) goto L_1124e84e;
  /* 1124e80e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124e811 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1124e814 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1124e817 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1124e81a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e81e je 0x1124e84e */
  if (C.zf) goto L_1124e84e;
  /* 1124e820 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 1124e823 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1124e829 push ecx */
  push32((uint32_t)(ECX));
  /* 1124e82a mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1124e82d push edx */
  push32((uint32_t)(EDX));
  /* 1124e82e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1124e831 push eax */
  push32((uint32_t)(EAX));
  /* 1124e832 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1124e835 push ecx */
  push32((uint32_t)(ECX));
  /* 1124e836 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1124e839 push edx */
  push32((uint32_t)(EDX));
  /* 1124e83a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124e83d push eax */
  push32((uint32_t)(EAX));
  /* 1124e83e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124e841 push ecx */
  push32((uint32_t)(ECX));
  /* 1124e842 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124e845 push edx */
  push32((uint32_t)(EDX));
  /* 1124e846 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1124e849u);
  /* 1124e849 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124e84c jmp 0x1124e87b */
  goto L_1124e87b;
L_1124e84e:;
  /* 1124e84e mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1124e851 push eax */
  push32((uint32_t)(EAX));
  /* 1124e852 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1124e855 push ecx */
  push32((uint32_t)(ECX));
  /* 1124e856 mov dl, byte ptr [ebp + 0x24] */
  DL = (r8((uint32_t)(EBP + 0x24)));
  /* 1124e859 push edx */
  push32((uint32_t)(EDX));
  /* 1124e85a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1124e85d push eax */
  push32((uint32_t)(EAX));
  /* 1124e85e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1124e861 push ecx */
  push32((uint32_t)(ECX));
  /* 1124e862 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124e865 push edx */
  push32((uint32_t)(EDX));
  /* 1124e866 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124e869 push eax */
  push32((uint32_t)(EAX));
  /* 1124e86a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124e86d push ecx */
  push32((uint32_t)(ECX));
  /* 1124e86e call 0x1124e880 */
  push32(0x1124e873u); f_1124e880();
  /* 1124e873 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1124e876:;
  /* 1124e876 mov eax, 1 */
  EAX = (0x1u);
L_1124e87b:;
  /* 1124e87b mov esp, ebp */
  ESP = (EBP);
  /* 1124e87d pop ebp */
  EBP = (pop32());
  /* 1124e87e ret  */
  ESPCHK(0x1124e790u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e880 @ 0x1124e880 (672 bytes, 222 insns) */
void f_1124e880(void) {
  FTRACE(0x1124e880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124e880 push ebp */
  push32((uint32_t)(EBP));
  /* 1124e881 mov ebp, esp */
  EBP = (ESP);
  /* 1124e883 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124e886 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 1124e88a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124e88d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1124e890 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1124e893 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e897 jl 0x1124e8ad */
  if ((C.sf!=C.of)) goto L_1124e8ad;
  /* 1124e899 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1124e89c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124e89f cmp eax, dword ptr [edx + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e8a2 jge 0x1124e8ad */
  if ((C.sf==C.of)) goto L_1124e8ad;
  /* 1124e8a4 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 1124e8ab jmp 0x1124e8b5 */
  goto L_1124e8b5;
L_1124e8ad:;
  /* 1124e8ad call 0x1124f7a0 */
  push32(0x1124e8b2u); f_1124f7a0();
  /* 1124e8b2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
L_1124e8b5:;
  /* 1124e8b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124e8b8 cmp dword ptr [ecx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e8be jne 0x1124e975 */
  if (!C.zf) goto L_1124e975;
  /* 1124e8c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124e8c7 cmp dword ptr [edx + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e8cb jne 0x1124e975 */
  if (!C.zf) goto L_1124e975;
  /* 1124e8d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124e8d4 cmp dword ptr [eax + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e8db jne 0x1124e975 */
  if (!C.zf) goto L_1124e975;
  /* 1124e8e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124e8e4 cmp dword ptr [ecx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e8e8 jne 0x1124e975 */
  if (!C.zf) goto L_1124e975;
  /* 1124e8ee call 0x1124f520 */
  push32(0x1124e8f3u); f_1124f520();
  /* 1124e8f3 cmp dword ptr [eax + 0x6c], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e8f7 jne 0x1124e8fe */
  if (!C.zf) goto L_1124e8fe;
  /* 1124e8f9 jmp 0x1124eb1c */
  goto L_1124eb1c;
L_1124e8fe:;
  /* 1124e8fe call 0x1124f520 */
  push32(0x1124e903u); f_1124f520();
  /* 1124e903 mov edx, dword ptr [eax + 0x6c] */
  EDX = (r32((uint32_t)(EAX + 0x6c)));
  /* 1124e906 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1124e909 call 0x1124f520 */
  push32(0x1124e90eu); f_1124f520();
  /* 1124e90e mov eax, dword ptr [eax + 0x70] */
  EAX = (r32((uint32_t)(EAX + 0x70)));
  /* 1124e911 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1124e914 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
  /* 1124e918 push 1 */
  push32((uint32_t)(0x1u));
  /* 1124e91a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124e91d push ecx */
  push32((uint32_t)(ECX));
  /* 1124e91e call 0x11255330 */
  push32(0x1124e923u); f_11255330();
  /* 1124e923 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124e926 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124e928 je 0x1124e933 */
  if (C.zf) goto L_1124e933;
  /* 1124e92a mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 1124e931 jmp 0x1124e93b */
  goto L_1124e93b;
L_1124e933:;
  /* 1124e933 call 0x1124f7a0 */
  push32(0x1124e938u); f_1124f7a0();
  /* 1124e938 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_1124e93b:;
  /* 1124e93b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124e93e cmp dword ptr [edx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e944 jne 0x1124e96e */
  if (!C.zf) goto L_1124e96e;
  /* 1124e946 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124e949 cmp dword ptr [eax + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e94d jne 0x1124e96e */
  if (!C.zf) goto L_1124e96e;
  /* 1124e94f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124e952 cmp dword ptr [ecx + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e959 jne 0x1124e96e */
  if (!C.zf) goto L_1124e96e;
  /* 1124e95b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124e95e cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e962 jne 0x1124e96e */
  if (!C.zf) goto L_1124e96e;
  /* 1124e964 call 0x1124f7a0 */
  push32(0x1124e969u); f_1124f7a0();
  /* 1124e969 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1124e96c jmp 0x1124e975 */
  goto L_1124e975;
L_1124e96e:;
  /* 1124e96e mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_1124e975:;
  /* 1124e975 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124e978 cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e97e jne 0x1124eadc */
  if (!C.zf) goto L_1124eadc;
  /* 1124e984 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124e987 cmp dword ptr [ecx + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e98b jne 0x1124eadc */
  if (!C.zf) goto L_1124eadc;
  /* 1124e991 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124e994 cmp dword ptr [edx + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e99b jne 0x1124eadc */
  if (!C.zf) goto L_1124eadc;
  /* 1124e9a1 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1124e9a4 push eax */
  push32((uint32_t)(EAX));
  /* 1124e9a5 lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 1124e9a8 push ecx */
  push32((uint32_t)(ECX));
  /* 1124e9a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124e9ac push edx */
  push32((uint32_t)(EDX));
  /* 1124e9ad mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1124e9b0 push eax */
  push32((uint32_t)(EAX));
  /* 1124e9b1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1124e9b4 push ecx */
  push32((uint32_t)(ECX));
  /* 1124e9b5 call 0x1124abc0 */
  push32(0x1124e9bau); f_1124abc0();
  /* 1124e9ba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124e9bd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1124e9c0 jmp 0x1124e9d4 */
  goto L_1124e9d4;
L_1124e9c2:;
  /* 1124e9c2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1124e9c5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124e9c8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1124e9cb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1124e9ce add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124e9d1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1124e9d4:;
  /* 1124e9d4 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1124e9d7 cmp ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e9da jae 0x1124eabf */
  if (!C.cf) goto L_1124eabf;
  /* 1124e9e0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1124e9e3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1124e9e5 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e9e8 jg 0x1124e9f5 */
  if ((!C.zf&&C.sf==C.of)) goto L_1124e9f5;
  /* 1124e9ea mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1124e9ed mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124e9f0 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124e9f3 jle 0x1124e9f7 */
  if ((C.zf||C.sf!=C.of)) goto L_1124e9f7;
L_1124e9f5:;
  /* 1124e9f5 jmp 0x1124e9c2 */
  goto L_1124e9c2;
L_1124e9f7:;
  /* 1124e9f7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1124e9fa mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1124e9fd mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 1124ea00 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1124ea03 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1124ea06 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1124ea09 jmp 0x1124ea1d */
  goto L_1124ea1d;
L_1124ea0b:;
  /* 1124ea0b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1124ea0e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124ea11 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1124ea14 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1124ea17 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124ea1a mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_1124ea1d:;
  /* 1124ea1d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124ea21 jle 0x1124eaba */
  if ((C.zf||C.sf!=C.of)) goto L_1124eaba;
  /* 1124ea27 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124ea2a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1124ea2d mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1124ea30 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124ea33 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1124ea36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124ea39 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1124ea3c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1124ea3f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1124ea41 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1124ea44 jmp 0x1124ea58 */
  goto L_1124ea58;
L_1124ea46:;
  /* 1124ea46 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1124ea49 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124ea4c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1124ea4f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1124ea52 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124ea55 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_1124ea58:;
  /* 1124ea58 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124ea5c jle 0x1124eab5 */
  if ((C.zf||C.sf!=C.of)) goto L_1124eab5;
  /* 1124ea5e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124ea61 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1124ea64 push ecx */
  push32((uint32_t)(ECX));
  /* 1124ea65 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1124ea68 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1124ea6a push eax */
  push32((uint32_t)(EAX));
  /* 1124ea6b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1124ea6e push ecx */
  push32((uint32_t)(ECX));
  /* 1124ea6f call 0x1124ec40 */
  push32(0x1124ea74u); f_1124ec40();
  /* 1124ea74 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124ea77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124ea79 jne 0x1124ea7d */
  if (!C.zf) goto L_1124ea7d;
  /* 1124ea7b jmp 0x1124ea46 */
  goto L_1124ea46;
L_1124ea7d:;
  /* 1124ea7d mov dl, byte ptr [ebp - 8] */
  DL = (r8((uint32_t)(EBP + -0x8)));
  /* 1124ea80 push edx */
  push32((uint32_t)(EDX));
  /* 1124ea81 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 1124ea84 push eax */
  push32((uint32_t)(EAX));
  /* 1124ea85 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1124ea88 push ecx */
  push32((uint32_t)(ECX));
  /* 1124ea89 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1124ea8c push edx */
  push32((uint32_t)(EDX));
  /* 1124ea8d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1124ea90 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1124ea92 push ecx */
  push32((uint32_t)(ECX));
  /* 1124ea93 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1124ea96 push edx */
  push32((uint32_t)(EDX));
  /* 1124ea97 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1124ea9a push eax */
  push32((uint32_t)(EAX));
  /* 1124ea9b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1124ea9e push ecx */
  push32((uint32_t)(ECX));
  /* 1124ea9f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124eaa2 push edx */
  push32((uint32_t)(EDX));
  /* 1124eaa3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124eaa6 push eax */
  push32((uint32_t)(EAX));
  /* 1124eaa7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124eaaa push ecx */
  push32((uint32_t)(ECX));
  /* 1124eaab call 0x1124ee30 */
  push32(0x1124eab0u); f_1124ee30();
  /* 1124eab0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124eab3 jmp 0x1124eb1a */
  goto L_1124eb1a;
L_1124eab5:;
  /* 1124eab5 jmp 0x1124ea0b */
  goto L_1124ea0b;
L_1124eaba:;
  /* 1124eaba jmp 0x1124e9c2 */
  goto L_1124e9c2;
L_1124eabf:;
  /* 1124eabf mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1124eac2 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1124eac8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1124eaca je 0x1124eada */
  if (C.zf) goto L_1124eada;
  /* 1124eacc push 1 */
  push32((uint32_t)(0x1u));
  /* 1124eace mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124ead1 push eax */
  push32((uint32_t)(EAX));
  /* 1124ead2 call 0x1124f310 */
  push32(0x1124ead7u); f_1124f310();
  /* 1124ead7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1124eada:;
  /* 1124eada jmp 0x1124eb18 */
  goto L_1124eb18;
L_1124eadc:;
  /* 1124eadc mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1124eadf and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1124eae5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1124eae7 jne 0x1124eb13 */
  if (!C.zf) goto L_1124eb13;
  /* 1124eae9 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 1124eaec push edx */
  push32((uint32_t)(EDX));
  /* 1124eaed mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1124eaf0 push eax */
  push32((uint32_t)(EAX));
  /* 1124eaf1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124eaf4 push ecx */
  push32((uint32_t)(ECX));
  /* 1124eaf5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1124eaf8 push edx */
  push32((uint32_t)(EDX));
  /* 1124eaf9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1124eafc push eax */
  push32((uint32_t)(EAX));
  /* 1124eafd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124eb00 push ecx */
  push32((uint32_t)(ECX));
  /* 1124eb01 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124eb04 push edx */
  push32((uint32_t)(EDX));
  /* 1124eb05 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124eb08 push eax */
  push32((uint32_t)(EAX));
  /* 1124eb09 call 0x1124eb20 */
  push32(0x1124eb0eu); f_1124eb20();
  /* 1124eb0e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124eb11 jmp 0x1124eb18 */
  goto L_1124eb18;
L_1124eb13:;
  /* 1124eb13 call 0x1124f6f0 */
  push32(0x1124eb18u); f_1124f6f0();
L_1124eb18:;
  /* 1124eb18 jmp 0x1124eb1c */
  goto L_1124eb1c;
L_1124eb1a:;
  /* 1124eb1a jmp 0x1124eaba */
  goto L_1124eaba;
L_1124eb1c:;
  /* 1124eb1c mov esp, ebp */
  ESP = (EBP);
  /* 1124eb1e pop ebp */
  EBP = (pop32());
  /* 1124eb1f ret  */
  ESPCHK(0x1124e880u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb20 @ 0x1124eb20 (277 bytes, 107 insns) */
void f_1124eb20(void) {
  FTRACE(0x1124eb20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124eb20 push ebp */
  push32((uint32_t)(EBP));
  /* 1124eb21 mov ebp, esp */
  EBP = (ESP);
  /* 1124eb23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124eb26 call 0x1124f520 */
  push32(0x1124eb2bu); f_1124f520();
  /* 1124eb2b cmp dword ptr [eax + 0x68], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124eb2f je 0x1124eb5e */
  if (C.zf) goto L_1124eb5e;
  /* 1124eb31 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 1124eb34 push eax */
  push32((uint32_t)(EAX));
  /* 1124eb35 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1124eb38 push ecx */
  push32((uint32_t)(ECX));
  /* 1124eb39 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1124eb3c push edx */
  push32((uint32_t)(EDX));
  /* 1124eb3d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1124eb40 push eax */
  push32((uint32_t)(EAX));
  /* 1124eb41 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124eb44 push ecx */
  push32((uint32_t)(ECX));
  /* 1124eb45 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124eb48 push edx */
  push32((uint32_t)(EDX));
  /* 1124eb49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124eb4c push eax */
  push32((uint32_t)(EAX));
  /* 1124eb4d call 0x1124aa60 */
  push32(0x1124eb52u); f_1124aa60();
  /* 1124eb52 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124eb55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124eb57 je 0x1124eb5e */
  if (C.zf) goto L_1124eb5e;
  /* 1124eb59 jmp 0x1124ec31 */
  goto L_1124ec31;
L_1124eb5e:;
  /* 1124eb5e lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1124eb61 push ecx */
  push32((uint32_t)(ECX));
  /* 1124eb62 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 1124eb65 push edx */
  push32((uint32_t)(EDX));
  /* 1124eb66 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1124eb69 push eax */
  push32((uint32_t)(EAX));
  /* 1124eb6a mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1124eb6d push ecx */
  push32((uint32_t)(ECX));
  /* 1124eb6e mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1124eb71 push edx */
  push32((uint32_t)(EDX));
  /* 1124eb72 call 0x1124abc0 */
  push32(0x1124eb77u); f_1124abc0();
  /* 1124eb77 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124eb7a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1124eb7d jmp 0x1124eb91 */
  goto L_1124eb91;
L_1124eb7f:;
  /* 1124eb7f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1124eb82 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124eb85 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1124eb88 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124eb8b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124eb8e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1124eb91:;
  /* 1124eb91 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1124eb94 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124eb97 jae 0x1124ec31 */
  if (!C.cf) goto L_1124ec31;
  /* 1124eb9d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124eba0 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1124eba3 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124eba5 jl 0x1124ebe9 */
  if ((C.sf!=C.of)) goto L_1124ebe9;
  /* 1124eba7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124ebaa mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1124ebad cmp eax, dword ptr [edx + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124ebb0 jg 0x1124ebe9 */
  if ((!C.zf&&C.sf==C.of)) goto L_1124ebe9;
  /* 1124ebb2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124ebb5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1124ebb8 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124ebbb shl edx, 4 */
  EDX = (sh_shl((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1124ebbe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124ebc1 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1124ebc4 cmp dword ptr [ecx + edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + EDX*1 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124ebc9 je 0x1124ebeb */
  if (C.zf) goto L_1124ebeb;
  /* 1124ebcb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124ebce mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1124ebd1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124ebd4 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1124ebd7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124ebda mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1124ebdd mov eax, dword ptr [edx + eax + 4] */
  EAX = (r32((uint32_t)(EDX + EAX*1 + 0x4)));
  /* 1124ebe1 movsx ecx, byte ptr [eax + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x8))));
  /* 1124ebe5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1124ebe7 je 0x1124ebeb */
  if (C.zf) goto L_1124ebeb;
L_1124ebe9:;
  /* 1124ebe9 jmp 0x1124eb7f */
  goto L_1124eb7f;
L_1124ebeb:;
  /* 1124ebeb push 1 */
  push32((uint32_t)(0x1u));
  /* 1124ebed mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 1124ebf0 push edx */
  push32((uint32_t)(EDX));
  /* 1124ebf1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1124ebf4 push eax */
  push32((uint32_t)(EAX));
  /* 1124ebf5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124ebf8 push ecx */
  push32((uint32_t)(ECX));
  /* 1124ebf9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1124ebfb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124ebfe mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1124ec01 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124ec04 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1124ec07 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124ec0a mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1124ec0d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124ec0f push edx */
  push32((uint32_t)(EDX));
  /* 1124ec10 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1124ec13 push eax */
  push32((uint32_t)(EAX));
  /* 1124ec14 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1124ec17 push ecx */
  push32((uint32_t)(ECX));
  /* 1124ec18 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124ec1b push edx */
  push32((uint32_t)(EDX));
  /* 1124ec1c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124ec1f push eax */
  push32((uint32_t)(EAX));
  /* 1124ec20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124ec23 push ecx */
  push32((uint32_t)(ECX));
  /* 1124ec24 call 0x1124ee30 */
  push32(0x1124ec29u); f_1124ee30();
  /* 1124ec29 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124ec2c jmp 0x1124eb7f */
  goto L_1124eb7f;
L_1124ec31:;
  /* 1124ec31 mov esp, ebp */
  ESP = (EBP);
  /* 1124ec33 pop ebp */
  EBP = (pop32());
  /* 1124ec34 ret  */
  ESPCHK(0x1124eb20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec40 @ 0x1124ec40 (182 bytes, 69 insns) */
void f_1124ec40(void) {
  FTRACE(0x1124ec40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124ec40 push ebp */
  push32((uint32_t)(EBP));
  /* 1124ec41 mov ebp, esp */
  EBP = (ESP);
  /* 1124ec43 push ecx */
  push32((uint32_t)(ECX));
  /* 1124ec44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124ec47 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124ec4b je 0x1124ec5b */
  if (C.zf) goto L_1124ec5b;
  /* 1124ec4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124ec50 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1124ec53 movsx eax, byte ptr [edx + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x8))));
  /* 1124ec57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124ec59 jne 0x1124ec65 */
  if (!C.zf) goto L_1124ec65;
L_1124ec5b:;
  /* 1124ec5b mov eax, 1 */
  EAX = (0x1u);
  /* 1124ec60 jmp 0x1124ecf2 */
  goto L_1124ecf2;
L_1124ec65:;
  /* 1124ec65 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124ec68 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124ec6b mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1124ec6e cmp eax, dword ptr [edx + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124ec71 je 0x1124ec97 */
  if (C.zf) goto L_1124ec97;
  /* 1124ec73 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124ec76 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1124ec79 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124ec7c push edx */
  push32((uint32_t)(EDX));
  /* 1124ec7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124ec80 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1124ec83 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124ec86 push ecx */
  push32((uint32_t)(ECX));
  /* 1124ec87 call 0x112553c0 */
  push32(0x1124ec8cu); f_112553c0();
  /* 1124ec8c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124ec8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124ec91 je 0x1124ec97 */
  if (C.zf) goto L_1124ec97;
  /* 1124ec93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124ec95 jmp 0x1124ecf2 */
  goto L_1124ecf2;
L_1124ec97:;
  /* 1124ec97 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124ec9a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1124ec9c and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1124ec9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124eca1 je 0x1124ecaf */
  if (C.zf) goto L_1124ecaf;
  /* 1124eca3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124eca6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1124eca8 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1124ecab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1124ecad je 0x1124ece8 */
  if (C.zf) goto L_1124ece8;
L_1124ecaf:;
  /* 1124ecaf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124ecb2 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1124ecb4 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1124ecb7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1124ecb9 je 0x1124ecc7 */
  if (C.zf) goto L_1124ecc7;
  /* 1124ecbb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124ecbe mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1124ecc0 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1124ecc3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124ecc5 je 0x1124ece8 */
  if (C.zf) goto L_1124ece8;
L_1124ecc7:;
  /* 1124ecc7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124ecca mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1124eccc and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1124eccf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1124ecd1 je 0x1124ecdf */
  if (C.zf) goto L_1124ecdf;
  /* 1124ecd3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124ecd6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1124ecd8 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1124ecdb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1124ecdd je 0x1124ece8 */
  if (C.zf) goto L_1124ece8;
L_1124ecdf:;
  /* 1124ecdf mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1124ece6 jmp 0x1124ecef */
  goto L_1124ecef;
L_1124ece8:;
  /* 1124ece8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1124ecef:;
  /* 1124ecef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1124ecf2:;
  /* 1124ecf2 mov esp, ebp */
  ESP = (EBP);
  /* 1124ecf4 pop ebp */
  EBP = (pop32());
  /* 1124ecf5 ret  */
  ESPCHK(0x1124ec40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed00 @ 0x1124ed00 (224 bytes, 77 insns) */
void f_1124ed00(void) {
  FTRACE(0x1124ed00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124ed00 push ebp */
  push32((uint32_t)(EBP));
  /* 1124ed01 mov ebp, esp */
  EBP = (ESP);
  /* 1124ed03 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1124ed05 push 0x1127bce8 */
  push32((uint32_t)(0x1127bce8u));
  /* 1124ed0a push 0x1125544c */
  push32((uint32_t)(0x1125544cu));
  /* 1124ed0f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1124ed15 push eax */
  push32((uint32_t)(EAX));
  /* 1124ed16 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1124ed1d add esp, -0x14 */
  { uint32_t _a=(ESP),_b=(0xffffffecu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124ed20 push ebx */
  push32((uint32_t)(EBX));
  /* 1124ed21 push esi */
  push32((uint32_t)(ESI));
  /* 1124ed22 push edi */
  push32((uint32_t)(EDI));
  /* 1124ed23 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1124ed26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124ed29 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1124ed2c mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
L_1124ed2f:;
  /* 1124ed2f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1124ed32 cmp edx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124ed35 je 0x1124edc4 */
  if (C.zf) goto L_1124edc4;
  /* 1124ed3b cmp dword ptr [ebp - 0x1c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124ed3f jle 0x1124ed55 */
  if ((C.zf||C.sf!=C.of)) goto L_1124ed55;
  /* 1124ed41 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124ed44 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1124ed47 cmp ecx, dword ptr [eax + 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124ed4a jge 0x1124ed55 */
  if ((C.sf==C.of)) goto L_1124ed55;
  /* 1124ed4c mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1124ed53 jmp 0x1124ed5d */
  goto L_1124ed5d;
L_1124ed55:;
  /* 1124ed55 call 0x1124f7a0 */
  push32(0x1124ed5au); f_1124f7a0();
  /* 1124ed5a mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1124ed5d:;
  /* 1124ed5d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1124ed64 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124ed67 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1124ed6a mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1124ed6d cmp dword ptr [eax + ecx*8 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + ECX*8 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124ed72 je 0x1124ed90 */
  if (C.zf) goto L_1124ed90;
  /* 1124ed74 push 0x103 */
  push32((uint32_t)(0x103u));
  /* 1124ed79 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124ed7c push edx */
  push32((uint32_t)(EDX));
  /* 1124ed7d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124ed80 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1124ed83 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1124ed86 mov eax, dword ptr [ecx + edx*8 + 4] */
  EAX = (r32((uint32_t)(ECX + EDX*8 + 0x4)));
  /* 1124ed8a push eax */
  push32((uint32_t)(EAX));
  /* 1124ed8b call 0x1124f3f0 */
  push32(0x1124ed90u); f_1124f3f0();
L_1124ed90:;
  /* 1124ed90 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1124ed97 jmp 0x1124edb0 */
  goto L_1124edb0;
  /* 1124ed99 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1124ed9c push ecx */
  push32((uint32_t)(ECX));
  /* 1124ed9d call 0x1124ee00 */
  push32(0x1124eda2u); f_1124ee00();
  /* 1124eda2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124eda5 ret  */
  ESPCHK(0x1124ed00u, _esp0);
  ESP += 4; return;
  /* 1124eda6 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1124eda9 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1124edb0:;
  /* 1124edb0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124edb3 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1124edb6 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1124edb9 mov edx, dword ptr [eax + ecx*8] */
  EDX = (r32((uint32_t)(EAX + ECX*8)));
  /* 1124edbc mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1124edbf jmp 0x1124ed2f */
  goto L_1124ed2f;
L_1124edc4:;
  /* 1124edc4 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1124edc7 cmp eax, dword ptr [ebp + 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124edca jne 0x1124edd5 */
  if (!C.zf) goto L_1124edd5;
  /* 1124edcc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1124edd3 jmp 0x1124eddd */
  goto L_1124eddd;
L_1124edd5:;
  /* 1124edd5 call 0x1124f7a0 */
  push32(0x1124eddau); f_1124f7a0();
  /* 1124edda mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1124eddd:;
  /* 1124eddd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124ede0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1124ede3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1124ede6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1124ede9 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1124edf0 pop edi */
  EDI = (pop32());
  /* 1124edf1 pop esi */
  ESI = (pop32());
  /* 1124edf2 pop ebx */
  EBX = (pop32());
  /* 1124edf3 mov esp, ebp */
  ESP = (EBP);
  /* 1124edf5 pop ebp */
  EBP = (pop32());
  /* 1124edf6 ret  */
  ESPCHK(0x1124ed00u, _esp0);
  ESP += 4; return;
}

/* ArrayUnwindFilter @ 0x1124ee00 (44 bytes, 17 insns) */
void f_1124ee00(void) {
  FTRACE(0x1124ee00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124ee00 push ebp */
  push32((uint32_t)(EBP));
  /* 1124ee01 mov ebp, esp */
  EBP = (ESP);
  /* 1124ee03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124ee06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124ee09 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1124ee0b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1124ee0e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124ee11 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1124ee13 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1124ee16 cmp dword ptr [ebp - 8], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124ee1d je 0x1124ee21 */
  if (C.zf) goto L_1124ee21;
  /* 1124ee1f jmp 0x1124ee26 */
  goto L_1124ee26;
L_1124ee21:;
  /* 1124ee21 call 0x1124f6f0 */
  push32(0x1124ee26u); f_1124f6f0();
L_1124ee26:;
  /* 1124ee26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1124ee28 mov esp, ebp */
  ESP = (EBP);
  /* 1124ee2a pop ebp */
  EBP = (pop32());
  /* 1124ee2b ret  */
  ESPCHK(0x1124ee00u, _esp0);
  ESP += 4; return;
}

/* CatchIt @ 0x1124ee30 (183 bytes, 73 insns) */
void f_1124ee30(void) {
  FTRACE(0x1124ee30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124ee30 push ebp */
  push32((uint32_t)(EBP));
  /* 1124ee31 mov ebp, esp */
  EBP = (ESP);
  /* 1124ee33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1124ee36 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124ee39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1124ee3c cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124ee40 je 0x1124ee5a */
  if (C.zf) goto L_1124ee5a;
  /* 1124ee42 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1124ee45 push ecx */
  push32((uint32_t)(ECX));
  /* 1124ee46 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1124ee49 push edx */
  push32((uint32_t)(EDX));
  /* 1124ee4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124ee4d push eax */
  push32((uint32_t)(EAX));
  /* 1124ee4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124ee51 push ecx */
  push32((uint32_t)(ECX));
  /* 1124ee52 call 0x1124f090 */
  push32(0x1124ee57u); f_1124f090();
  /* 1124ee57 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1124ee5a:;
  /* 1124ee5a cmp dword ptr [ebp + 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124ee5e jne 0x1124ee6f */
  if (!C.zf) goto L_1124ee6f;
  /* 1124ee60 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124ee63 push edx */
  push32((uint32_t)(EDX));
  /* 1124ee64 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124ee67 push eax */
  push32((uint32_t)(EAX));
  /* 1124ee68 call 0x1124a8e0 */
  push32(0x1124ee6du); f_1124a8e0();
  /* 1124ee6d jmp 0x1124ee7c */
  goto L_1124ee7c;
L_1124ee6f:;
  /* 1124ee6f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124ee72 push ecx */
  push32((uint32_t)(ECX));
  /* 1124ee73 mov edx, dword ptr [ebp + 0x2c] */
  EDX = (r32((uint32_t)(EBP + 0x2c)));
  /* 1124ee76 push edx */
  push32((uint32_t)(EDX));
  /* 1124ee77 call 0x1124a8e0 */
  push32(0x1124ee7cu); f_1124a8e0();
L_1124ee7c:;
  /* 1124ee7c mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 1124ee7f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1124ee81 push ecx */
  push32((uint32_t)(ECX));
  /* 1124ee82 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1124ee85 push edx */
  push32((uint32_t)(EDX));
  /* 1124ee86 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1124ee89 push eax */
  push32((uint32_t)(EAX));
  /* 1124ee8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124ee8d push ecx */
  push32((uint32_t)(ECX));
  /* 1124ee8e call 0x1124ed00 */
  push32(0x1124ee93u); f_1124ed00();
  /* 1124ee93 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124ee96 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 1124ee99 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1124ee9c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124ee9f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124eea2 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1124eea5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1124eeaa mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 1124eead push edx */
  push32((uint32_t)(EDX));
  /* 1124eeae mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1124eeb1 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1124eeb4 push ecx */
  push32((uint32_t)(ECX));
  /* 1124eeb5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1124eeb8 push edx */
  push32((uint32_t)(EDX));
  /* 1124eeb9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124eebc push eax */
  push32((uint32_t)(EAX));
  /* 1124eebd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124eec0 push ecx */
  push32((uint32_t)(ECX));
  /* 1124eec1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124eec4 push edx */
  push32((uint32_t)(EDX));
  /* 1124eec5 call 0x1124eef0 */
  push32(0x1124eecau); f_1124eef0();
  /* 1124eeca add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124eecd mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1124eed0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124eed4 je 0x1124eee3 */
  if (C.zf) goto L_1124eee3;
  /* 1124eed6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124eed9 push eax */
  push32((uint32_t)(EAX));
  /* 1124eeda mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1124eedd push ecx */
  push32((uint32_t)(ECX));
  /* 1124eede call 0x1124a870 */
  push32(0x1124eee3u); f_1124a870();
L_1124eee3:;
  /* 1124eee3 mov esp, ebp */
  ESP = (EBP);
  /* 1124eee5 pop ebp */
  EBP = (pop32());
  /* 1124eee6 ret  */
  ESPCHK(0x1124ee30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eef0 @ 0x1124eef0 (172 bytes, 66 insns) */
void f_1124eef0(void) {
  FTRACE(0x1124eef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124eef0 push ebp */
  push32((uint32_t)(EBP));
  /* 1124eef1 mov ebp, esp */
  EBP = (ESP);
  /* 1124eef3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1124eef5 push 0x1127bcf8 */
  push32((uint32_t)(0x1127bcf8u));
  /* 1124eefa push 0x1125544c */
  push32((uint32_t)(0x1125544cu));
  /* 1124eeff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1124ef05 push eax */
  push32((uint32_t)(EAX));
  /* 1124ef06 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1124ef0d add esp, -0x20 */
  { uint32_t _a=(ESP),_b=(0xffffffe0u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124ef10 push ebx */
  push32((uint32_t)(EBX));
  /* 1124ef11 push esi */
  push32((uint32_t)(ESI));
  /* 1124ef12 push edi */
  push32((uint32_t)(EDI));
  /* 1124ef13 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1124ef16 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1124ef19 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1124ef1c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1124ef23 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124ef26 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1124ef29 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1124ef2c call 0x1124f520 */
  push32(0x1124ef31u); f_1124f520();
  /* 1124ef31 mov eax, dword ptr [eax + 0x6c] */
  EAX = (r32((uint32_t)(EAX + 0x6c)));
  /* 1124ef34 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1124ef37 call 0x1124f520 */
  push32(0x1124ef3cu); f_1124f520();
  /* 1124ef3c mov ecx, dword ptr [eax + 0x70] */
  ECX = (r32((uint32_t)(EAX + 0x70)));
  /* 1124ef3f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1124ef42 call 0x1124f520 */
  push32(0x1124ef47u); f_1124f520();
  /* 1124ef47 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124ef4a mov dword ptr [eax + 0x6c], edx */
  w32((uint32_t)(EAX + 0x6c), (EDX));
  /* 1124ef4d call 0x1124f520 */
  push32(0x1124ef52u); f_1124f520();
  /* 1124ef52 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124ef55 mov dword ptr [eax + 0x70], ecx */
  w32((uint32_t)(EAX + 0x70), (ECX));
  /* 1124ef58 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1124ef5f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1124ef66 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1124ef69 push edx */
  push32((uint32_t)(EDX));
  /* 1124ef6a mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1124ef6d push eax */
  push32((uint32_t)(EAX));
  /* 1124ef6e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1124ef71 push ecx */
  push32((uint32_t)(ECX));
  /* 1124ef72 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1124ef75 push edx */
  push32((uint32_t)(EDX));
  /* 1124ef76 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124ef79 push eax */
  push32((uint32_t)(EAX));
  /* 1124ef7a call 0x1124a9b0 */
  push32(0x1124ef7fu); f_1124a9b0();
  /* 1124ef7f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124ef82 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1124ef85 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1124ef8c jmp 0x1124efbf */
  goto L_1124efbf;
  /* 1124ef8e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1124ef91 push ecx */
  push32((uint32_t)(ECX));
  /* 1124ef92 call 0x1124f040 */
  push32(0x1124ef97u); f_1124f040();
  /* 1124ef97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124ef9a ret  */
  ESPCHK(0x1124eef0u, _esp0);
  ESP += 4; return;
  /* 1124ef9b mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1124ef9e mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 1124efa5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1124efa7 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
  /* 1124efae lea edx, [ebp - 0x10] */
  EDX = ((uint32_t)(EBP + -0x10));
  /* 1124efb1 push edx */
  push32((uint32_t)(EDX));
  /* 1124efb2 call 0x1124ac92 */
  push32(0x1124efb7u); f_1124ac92();
  /* 1124efb7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124efba mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1124efbd jmp 0x1124f02e */
  jmp_ind(0x1124f02eu); return;
L_1124efbf:;
  /* 1124efbf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1124efc6 call 0x1124efcd */
  push32(0x1124efcbu); f_1124efcd();
  /* 1124efcb jmp 0x1124f02b */
  f_1124f02b(); return;
}

/* FUN_1000efcd @ 0x1124efcd (94 bytes, 29 insns) */
void f_1124efcd(void) {
  FTRACE(0x1124efcdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124efcd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124efd0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1124efd3 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 1124efd6 call 0x1124f520 */
  push32(0x1124efdbu); f_1124f520();
  /* 1124efdb mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1124efde mov dword ptr [eax + 0x6c], edx */
  w32((uint32_t)(EAX + 0x6c), (EDX));
  /* 1124efe1 call 0x1124f520 */
  push32(0x1124efe6u); f_1124f520();
  /* 1124efe6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1124efe9 mov dword ptr [eax + 0x70], ecx */
  w32((uint32_t)(EAX + 0x70), (ECX));
  /* 1124efec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124efef cmp dword ptr [edx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124eff5 jne 0x1124f02a */
  if (!C.zf) goto L_1124f02a;
  /* 1124eff7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124effa cmp dword ptr [eax + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124effe jne 0x1124f02a */
  if (!C.zf) goto L_1124f02a;
  /* 1124f000 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124f003 cmp dword ptr [ecx + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124f00a jne 0x1124f02a */
  if (!C.zf) goto L_1124f02a;
  /* 1124f00c cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124f010 jne 0x1124f02a */
  if (!C.zf) goto L_1124f02a;
  /* 1124f012 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124f016 je 0x1124f02a */
  if (C.zf) goto L_1124f02a;
  /* 1124f018 call 0x1124acfa */
  push32(0x1124f01du); f_1124acfa();
  /* 1124f01d push eax */
  push32((uint32_t)(EAX));
  /* 1124f01e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124f021 push edx */
  push32((uint32_t)(EDX));
  /* 1124f022 call 0x1124f310 */
  push32(0x1124f027u); f_1124f310();
  /* 1124f027 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1124f02a:;
  /* 1124f02a ret  */
  ESPCHK(0x1124efcdu, _esp0);
  ESP += 4; return;
}

/* FUN_1000f02b @ 0x1124f02b (20 bytes, 9 insns) */
void f_1124f02b(void) {
  FTRACE(0x1124f02bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124f02b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1124f02e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1124f031 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1124f038 pop edi */
  EDI = (pop32());
  /* 1124f039 pop esi */
  ESI = (pop32());
  /* 1124f03a pop ebx */
  EBX = (pop32());
  /* 1124f03b mov esp, ebp */
  ESP = (EBP);
  /* 1124f03d pop ebp */
  EBP = (pop32());
  /* 1124f03e ret  */
  ESPCHK(0x1124f02bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000f040 @ 0x1124f040 (66 bytes, 24 insns) */
void f_1124f040(void) {
  FTRACE(0x1124f040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124f040 push ebp */
  push32((uint32_t)(EBP));
  /* 1124f041 mov ebp, esp */
  EBP = (ESP);
  /* 1124f043 push ecx */
  push32((uint32_t)(ECX));
  /* 1124f044 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124f047 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1124f049 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1124f04c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124f04f cmp dword ptr [edx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124f055 jne 0x1124f07c */
  if (!C.zf) goto L_1124f07c;
  /* 1124f057 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124f05a cmp dword ptr [eax + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124f05e jne 0x1124f07c */
  if (!C.zf) goto L_1124f07c;
  /* 1124f060 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124f063 cmp dword ptr [ecx + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124f06a jne 0x1124f07c */
  if (!C.zf) goto L_1124f07c;
  /* 1124f06c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1124f06f cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124f073 jne 0x1124f07c */
  if (!C.zf) goto L_1124f07c;
  /* 1124f075 mov eax, 1 */
  EAX = (0x1u);
  /* 1124f07a jmp 0x1124f07e */
  goto L_1124f07e;
L_1124f07c:;
  /* 1124f07c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1124f07e:;
  /* 1124f07e mov esp, ebp */
  ESP = (EBP);
  /* 1124f080 pop ebp */
  EBP = (pop32());
  /* 1124f081 ret  */
  ESPCHK(0x1124f040u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f090 @ 0x1124f090 (621 bytes, 229 insns) */
void f_1124f090(void) {
  FTRACE(0x1124f090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1124f090 push ebp */
  push32((uint32_t)(EBP));
  /* 1124f091 mov ebp, esp */
  EBP = (ESP);
  /* 1124f093 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1124f095 push 0x1127bd10 */
  push32((uint32_t)(0x1127bd10u));
  /* 1124f09a push 0x1125544c */
  push32((uint32_t)(0x1125544cu));
  /* 1124f09f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1124f0a5 push eax */
  push32((uint32_t)(EAX));
  /* 1124f0a6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1124f0ad add esp, -0xc */
  { uint32_t _a=(ESP),_b=(0xfffffff4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124f0b0 push ebx */
  push32((uint32_t)(EBX));
  /* 1124f0b1 push esi */
  push32((uint32_t)(ESI));
  /* 1124f0b2 push edi */
  push32((uint32_t)(EDI));
  /* 1124f0b3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1124f0b6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124f0b9 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124f0bd je 0x1124f0d6 */
  if (C.zf) goto L_1124f0d6;
  /* 1124f0bf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124f0c2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1124f0c5 movsx eax, byte ptr [edx + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x8))));
  /* 1124f0c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124f0cb je 0x1124f0d6 */
  if (C.zf) goto L_1124f0d6;
  /* 1124f0cd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124f0d0 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124f0d4 jne 0x1124f0db */
  if (!C.zf) goto L_1124f0db;
L_1124f0d6:;
  /* 1124f0d6 jmp 0x1124f2fa */
  goto L_1124f2fa;
L_1124f0db:;
  /* 1124f0db mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124f0de mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1124f0e1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1124f0e4 lea edx, [ecx + eax + 0xc] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0xc));
  /* 1124f0e8 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1124f0eb mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1124f0f2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1124f0f5 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1124f0f7 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1124f0fa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1124f0fc je 0x1124f156 */
  if (C.zf) goto L_1124f156;
  /* 1124f0fe push 1 */
  push32((uint32_t)(0x1u));
  /* 1124f100 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124f103 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 1124f106 push eax */
  push32((uint32_t)(EAX));
  /* 1124f107 call 0x11255330 */
  push32(0x1124f10cu); f_11255330();
  /* 1124f10c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124f10f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124f111 je 0x1124f14c */
  if (C.zf) goto L_1124f14c;
  /* 1124f113 push 1 */
  push32((uint32_t)(0x1u));
  /* 1124f115 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1124f118 push ecx */
  push32((uint32_t)(ECX));
  /* 1124f119 call 0x11255360 */
  push32(0x1124f11eu); f_11255360();
  /* 1124f11e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124f121 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124f123 je 0x1124f14c */
  if (C.zf) goto L_1124f14c;
  /* 1124f125 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1124f128 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124f12b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 1124f12e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1124f130 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1124f133 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124f136 push edx */
  push32((uint32_t)(EDX));
  /* 1124f137 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1124f13a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1124f13c push ecx */
  push32((uint32_t)(ECX));
  /* 1124f13d call 0x1124f3a0 */
  push32(0x1124f142u); f_1124f3a0();
  /* 1124f142 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124f145 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1124f148 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1124f14a jmp 0x1124f151 */
  goto L_1124f151;
L_1124f14c:;
  /* 1124f14c call 0x1124f7a0 */
  push32(0x1124f151u); f_1124f7a0();
L_1124f151:;
  /* 1124f151 jmp 0x1124f2e3 */
  goto L_1124f2e3;
L_1124f156:;
  /* 1124f156 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1124f159 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1124f15b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1124f15e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1124f160 je 0x1124f1da */
  if (C.zf) goto L_1124f1da;
  /* 1124f162 push 1 */
  push32((uint32_t)(0x1u));
  /* 1124f164 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124f167 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 1124f16a push eax */
  push32((uint32_t)(EAX));
  /* 1124f16b call 0x11255330 */
  push32(0x1124f170u); f_11255330();
  /* 1124f170 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124f173 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124f175 je 0x1124f1d0 */
  if (C.zf) goto L_1124f1d0;
  /* 1124f177 push 1 */
  push32((uint32_t)(0x1u));
  /* 1124f179 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1124f17c push ecx */
  push32((uint32_t)(ECX));
  /* 1124f17d call 0x11255360 */
  push32(0x1124f182u); f_11255360();
  /* 1124f182 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124f185 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124f187 je 0x1124f1d0 */
  if (C.zf) goto L_1124f1d0;
  /* 1124f189 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1124f18c mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1124f18f push eax */
  push32((uint32_t)(EAX));
  /* 1124f190 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124f193 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1124f196 push edx */
  push32((uint32_t)(EDX));
  /* 1124f197 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1124f19a push eax */
  push32((uint32_t)(EAX));
  /* 1124f19b call 0x11252c90 */
  push32(0x1124f1a0u); f_11252c90();
  /* 1124f1a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124f1a3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1124f1a6 cmp dword ptr [ecx + 0x14], 4 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124f1aa jne 0x1124f1ce */
  if (!C.zf) goto L_1124f1ce;
  /* 1124f1ac mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1124f1af cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124f1b2 je 0x1124f1ce */
  if (C.zf) goto L_1124f1ce;
  /* 1124f1b4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1124f1b7 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124f1ba push eax */
  push32((uint32_t)(EAX));
  /* 1124f1bb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1124f1be mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1124f1c0 push edx */
  push32((uint32_t)(EDX));
  /* 1124f1c1 call 0x1124f3a0 */
  push32(0x1124f1c6u); f_1124f3a0();
  /* 1124f1c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124f1c9 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1124f1cc mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1124f1ce:;
  /* 1124f1ce jmp 0x1124f1d5 */
  goto L_1124f1d5;
L_1124f1d0:;
  /* 1124f1d0 call 0x1124f7a0 */
  push32(0x1124f1d5u); f_1124f7a0();
L_1124f1d5:;
  /* 1124f1d5 jmp 0x1124f2e3 */
  goto L_1124f2e3;
L_1124f1da:;
  /* 1124f1da mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1124f1dd cmp dword ptr [edx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1124f1e1 jne 0x1124f240 */
  if (!C.zf) goto L_1124f240;
  /* 1124f1e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1124f1e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124f1e8 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 1124f1eb push ecx */
  push32((uint32_t)(ECX));
  /* 1124f1ec call 0x11255330 */
  push32(0x1124f1f1u); f_11255330();
  /* 1124f1f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124f1f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124f1f6 je 0x1124f236 */
  if (C.zf) goto L_1124f236;
  /* 1124f1f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 1124f1fa mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1124f1fd push edx */
  push32((uint32_t)(EDX));
  /* 1124f1fe call 0x11255360 */
  push32(0x1124f203u); f_11255360();
  /* 1124f203 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124f206 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124f208 je 0x1124f236 */
  if (C.zf) goto L_1124f236;
  /* 1124f20a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1124f20d mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1124f210 push ecx */
  push32((uint32_t)(ECX));
  /* 1124f211 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1124f214 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124f217 push edx */
  push32((uint32_t)(EDX));
  /* 1124f218 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124f21b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 1124f21e push ecx */
  push32((uint32_t)(ECX));
  /* 1124f21f call 0x1124f3a0 */
  push32(0x1124f224u); f_1124f3a0();
  /* 1124f224 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124f227 push eax */
  push32((uint32_t)(EAX));
  /* 1124f228 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1124f22b push edx */
  push32((uint32_t)(EDX));
  /* 1124f22c call 0x11252c90 */
  push32(0x1124f231u); f_11252c90();
  /* 1124f231 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124f234 jmp 0x1124f23b */
  goto L_1124f23b;
L_1124f236:;
  /* 1124f236 call 0x1124f7a0 */
  push32(0x1124f23bu); f_1124f7a0();
L_1124f23b:;
  /* 1124f23b jmp 0x1124f2e3 */
  goto L_1124f2e3;
L_1124f240:;
  /* 1124f240 push 1 */
  push32((uint32_t)(0x1u));
  /* 1124f242 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124f245 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 1124f248 push ecx */
  push32((uint32_t)(ECX));
  /* 1124f249 call 0x11255330 */
  push32(0x1124f24eu); f_11255330();
  /* 1124f24e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124f251 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124f253 je 0x1124f2de */
  if (C.zf) goto L_1124f2de;
  /* 1124f259 push 1 */
  push32((uint32_t)(0x1u));
  /* 1124f25b mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1124f25e push edx */
  push32((uint32_t)(EDX));
  /* 1124f25f call 0x11255360 */
  push32(0x1124f264u); f_11255360();
  /* 1124f264 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124f267 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124f269 je 0x1124f2de */
  if (C.zf) goto L_1124f2de;
  /* 1124f26b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1124f26e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 1124f271 push ecx */
  push32((uint32_t)(ECX));
  /* 1124f272 call 0x11255390 */
  push32(0x1124f277u); f_11255390();
  /* 1124f277 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124f27a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124f27c je 0x1124f2de */
  if (C.zf) goto L_1124f2de;
  /* 1124f27e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1124f281 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1124f283 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1124f286 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1124f288 je 0x1124f2b5 */
  if (C.zf) goto L_1124f2b5;
  /* 1124f28a push 1 */
  push32((uint32_t)(0x1u));
  /* 1124f28c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1124f28f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124f292 push ecx */
  push32((uint32_t)(ECX));
  /* 1124f293 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124f296 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 1124f299 push eax */
  push32((uint32_t)(EAX));
  /* 1124f29a call 0x1124f3a0 */
  push32(0x1124f29fu); f_1124f3a0();
  /* 1124f29f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124f2a2 push eax */
  push32((uint32_t)(EAX));
  /* 1124f2a3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1124f2a6 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1124f2a9 push edx */
  push32((uint32_t)(EDX));
  /* 1124f2aa mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1124f2ad push eax */
  push32((uint32_t)(EAX));
  /* 1124f2ae call 0x1124a8d0 */
  push32(0x1124f2b3u); f_1124a8d0();
  /* 1124f2b3 jmp 0x1124f2dc */
  goto L_1124f2dc;
L_1124f2b5:;
  /* 1124f2b5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1124f2b8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1124f2bb push ecx */
  push32((uint32_t)(ECX));
  /* 1124f2bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1124f2bf mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 1124f2c2 push eax */
  push32((uint32_t)(EAX));
  /* 1124f2c3 call 0x1124f3a0 */
  push32(0x1124f2c8u); f_1124f3a0();
  /* 1124f2c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1124f2cb push eax */
  push32((uint32_t)(EAX));
  /* 1124f2cc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1124f2cf mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1124f2d2 push edx */
  push32((uint32_t)(EDX));
  /* 1124f2d3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1124f2d6 push eax */
  push32((uint32_t)(EAX));
  /* 1124f2d7 call 0x1124a8c0 */
  push32(0x1124f2dcu); f_1124a8c0();
L_1124f2dc:;
  /* 1124f2dc jmp 0x1124f2e3 */
  goto L_1124f2e3;
L_1124f2de:;
  /* 1124f2de call 0x1124f7a0 */
  push32(0x1124f2e3u); f_1124f7a0();
L_1124f2e3:;
  /* 1124f2e3 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1124f2ea jmp 0x1124f2fa */
  goto L_1124f2fa;
  /* 1124f2ec mov eax, 1 */
  EAX = (0x1u);
  /* 1124f2f1 ret  */
  ESPCHK(0x1124f090u, _esp0);
  ESP += 4; return;
  /* 1124f2f2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1124f2f5 call 0x1124f6f0 */
  push32(0x1124f2fau); f_1124f6f0();
L_1124f2fa:;
  /* 1124f2fa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1124f2fd mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1124f304 pop edi */
  EDI = (pop32());
  /* 1124f305 pop esi */
  ESI = (pop32());
  /* 1124f306 pop ebx */
  EBX = (pop32());
  /* 1124f307 mov esp, ebp */
  ESP = (EBP);
  /* 1124f309 pop ebp */
  EBP = (pop32());
  /* 1124f30a ret  */
  ESPCHK(0x1124f090u, _esp0);
  ESP += 4; return;
}

