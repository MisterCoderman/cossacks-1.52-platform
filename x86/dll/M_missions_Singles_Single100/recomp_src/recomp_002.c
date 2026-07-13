#include "recomp.h"

/* FUN_10009470 @ 0x10ed9470 (20 bytes, 6 insns) */
void f_10ed9470(void) {
  FTRACE(0x10ed9470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed9470 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed9473 fst qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  /* 10ed9476 call 0x10edabd8 */
  push32(0x10ed947bu); f_10edabd8();
  /* 10ed947b call 0x10ed948d */
  push32(0x10ed9480u); f_10ed948d();
  /* 10ed9480 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed9483 ret  */
  ESPCHK(0x10ed9470u, _esp0);
  ESP += 4; return;
}

/* FUN_10009484 @ 0x10ed9484 (9 bytes, 2 insns) */
void f_10ed9484(void) {
  FTRACE(0x10ed9484u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed9484 lea edx, [esp + 4] */
  EDX = ((uint32_t)(ESP + 0x4));
  /* 10ed9488 call 0x10edab95 */
  push32(0x10ed948du); f_10edab95();
}

/* FUN_1000948d @ 0x10ed948d (145 bytes, 43 insns) */
void f_10ed948d(void) {
  FTRACE(0x10ed948du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed948d push edx */
  push32((uint32_t)(EDX));
  /* 10ed948e wait  */
  /* wait (no observable integer/reg state) */
  /* 10ed948f fnstcw word ptr [esp] */
  w16((uint32_t)(ESP), C.fcw);
  /* 10ed9492 je 0x10ed94e4 */
  if (C.zf) goto L_10ed94e4;
  /* 10ed9494 cmp word ptr [esp], 0x27f */
  { uint32_t _a=(r16((uint32_t)(ESP))),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10ed949a je 0x10ed94a2 */
  if (C.zf) goto L_10ed94a2;
  /* 10ed949c fldcw word ptr [0x10f094e8] */
  C.fcw = r16((uint32_t)(0x10f094e8));
L_10ed94a2:;
  /* 10ed94a2 fcos  */
  FPU_ST(0) = __builtin_cos(FPU_ST(0)); C.fsw_c2=0;
  /* 10ed94a4 wait  */
  /* wait (no observable integer/reg state) */
  /* 10ed94a5 fnstsw ax */
  AX = fpu_status();
  /* 10ed94a7 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 10ed94a8 jp 0x10ed94c7 */
  if (C.pf) goto L_10ed94c7;
L_10ed94aa:;
  /* 10ed94aa cmp dword ptr [0x10f0f4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed94b1 jne 0x10edabee */
  if (!C.zf) { jmp_ind(0x10edabeeu); return; }
  /* 10ed94b7 mov edx, 0x12 */
  EDX = (0x12u);
  /* 10ed94bc lea ecx, [0x10f0cd80] */
  ECX = ((uint32_t)(0x10f0cd80));
  /* 10ed94c2 jmp 0x10edabfb */
  f_10edabfb(); return;
L_10ed94c7:;
  /* 10ed94c7 fld xword ptr [0x10f094ea] */
  fpu_push(rf80((uint32_t)(0x10f094ea)));
  /* 10ed94cd fxch st(1) */
  { double _t=FPU_ST(0); FPU_ST(0)=FPU_ST(1); FPU_ST(1)=_t; }
L_10ed94cf:;
  /* 10ed94cf fprem1  */
  FPU_ST(0) = __builtin_remainder(FPU_ST(0), FPU_ST(1)); C.fsw_c2=0;
  /* 10ed94d1 wait  */
  /* wait (no observable integer/reg state) */
  /* 10ed94d2 fnstsw ax */
  AX = fpu_status();
  /* 10ed94d4 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 10ed94d5 jp 0x10ed94cf */
  if (C.pf) goto L_10ed94cf;
  /* 10ed94d7 fstp st(1) */
  FPU_ST(1) = FPU_ST(0);
  (void)fpu_pop();
  /* 10ed94d9 fcos  */
  FPU_ST(0) = __builtin_cos(FPU_ST(0)); C.fsw_c2=0;
  /* 10ed94db jmp 0x10ed94aa */
  goto L_10ed94aa;
L_10ed94dd:;
  /* 10ed94dd call 0x10edab7c */
  push32(0x10ed94e2u); f_10edab7c();
  /* 10ed94e2 jmp 0x10ed94ff */
  goto L_10ed94ff;
L_10ed94e4:;
  /* 10ed94e4 test eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); fl_logic(_r,32); }
  /* 10ed94e9 jne 0x10ed94dd */
  if (!C.zf) goto L_10ed94dd;
  /* 10ed94eb cmp dword ptr [esp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed94f0 jne 0x10ed94dd */
  if (!C.zf) goto L_10ed94dd;
  /* 10ed94f2 fstp st(0) */
  FPU_ST(0) = FPU_ST(0);
  (void)fpu_pop();
  /* 10ed94f4 fld xword ptr [0x10f0cdf0] */
  fpu_push(rf80((uint32_t)(0x10f0cdf0)));
  /* 10ed94fa mov eax, 1 */
  EAX = (0x1u);
L_10ed94ff:;
  /* 10ed94ff cmp dword ptr [0x10f0f4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed9506 jne 0x10edabee */
  if (!C.zf) { jmp_ind(0x10edabeeu); return; }
  /* 10ed950c mov edx, 0x12 */
  EDX = (0x12u);
  /* 10ed9511 lea ecx, [0x10f0cd80] */
  ECX = ((uint32_t)(0x10f0cd80));
  /* 10ed9517 call 0x10edacf7 */
  push32(0x10ed951cu); f_10edacf7();
  /* 10ed951c pop edx */
  EDX = (pop32());
  /* 10ed951d ret  */
  ESPCHK(0x10ed948du, _esp0);
  ESP += 4; return;
}

/* FUN_10009520 @ 0x10ed9520 (20 bytes, 6 insns) */
void f_10ed9520(void) {
  FTRACE(0x10ed9520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed9520 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed9523 fst qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  /* 10ed9526 call 0x10edabd8 */
  push32(0x10ed952bu); f_10edabd8();
  /* 10ed952b call 0x10ed953d */
  push32(0x10ed9530u); f_10ed953d();
  /* 10ed9530 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed9533 ret  */
  ESPCHK(0x10ed9520u, _esp0);
  ESP += 4; return;
}

/* FUN_10009534 @ 0x10ed9534 (9 bytes, 2 insns) */
void f_10ed9534(void) {
  FTRACE(0x10ed9534u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed9534 lea edx, [esp + 4] */
  EDX = ((uint32_t)(ESP + 0x4));
  /* 10ed9538 call 0x10edab95 */
  push32(0x10ed953du); f_10edab95();
}

/* FUN_1000953d @ 0x10ed953d (138 bytes, 40 insns) */
void f_10ed953d(void) {
  FTRACE(0x10ed953du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed953d push edx */
  push32((uint32_t)(EDX));
  /* 10ed953e wait  */
  /* wait (no observable integer/reg state) */
  /* 10ed953f fnstcw word ptr [esp] */
  w16((uint32_t)(ESP), C.fcw);
  /* 10ed9542 je 0x10ed957a */
  if (C.zf) goto L_10ed957a;
  /* 10ed9544 cmp word ptr [esp], 0x27f */
  { uint32_t _a=(r16((uint32_t)(ESP))),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10ed954a je 0x10ed9552 */
  if (C.zf) goto L_10ed9552;
  /* 10ed954c fldcw word ptr [0x10f094e8] */
  C.fcw = r16((uint32_t)(0x10f094e8));
L_10ed9552:;
  /* 10ed9552 fld1  */
  fpu_push(1.0);
  /* 10ed9554 fpatan  */
  { double _r=__builtin_atan2(FPU_ST(1), FPU_ST(0)); (void)fpu_pop(); FPU_ST(0)=_r; }
L_10ed9556:;
  /* 10ed9556 cmp dword ptr [0x10f0f4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed955d jne 0x10edabee */
  if (!C.zf) { jmp_ind(0x10edabeeu); return; }
  /* 10ed9563 mov edx, 0xf */
  EDX = (0xfu);
  /* 10ed9568 lea ecx, [0x10f0cd90] */
  ECX = ((uint32_t)(0x10f0cd90));
  /* 10ed956e jmp 0x10edabfb */
  f_10edabfb(); return;
L_10ed9573:;
  /* 10ed9573 call 0x10edab7c */
  push32(0x10ed9578u); f_10edab7c();
  /* 10ed9578 jmp 0x10ed95a0 */
  goto L_10ed95a0;
L_10ed957a:;
  /* 10ed957a test eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); fl_logic(_r,32); }
  /* 10ed957f jne 0x10ed9573 */
  if (!C.zf) goto L_10ed9573;
  /* 10ed9581 cmp dword ptr [esp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed9586 jne 0x10ed9573 */
  if (!C.zf) goto L_10ed9573;
  /* 10ed9588 fstp st(0) */
  FPU_ST(0) = FPU_ST(0);
  (void)fpu_pop();
  /* 10ed958a fld xword ptr [0x10f0cdfa] */
  fpu_push(rf80((uint32_t)(0x10f0cdfa)));
  /* 10ed9590 test eax, 0x80000000 */
  { uint32_t _r=(EAX)&(0x80000000u); fl_logic(_r,32); }
  /* 10ed9595 je 0x10ed9556 */
  if (C.zf) goto L_10ed9556;
  /* 10ed9597 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 10ed9599 jmp 0x10ed9556 */
  goto L_10ed9556;
  /* 10ed959b mov eax, 1 */
  EAX = (0x1u);
L_10ed95a0:;
  /* 10ed95a0 cmp dword ptr [0x10f0f4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed95a7 jne 0x10edabee */
  if (!C.zf) { jmp_ind(0x10edabeeu); return; }
  /* 10ed95ad mov edx, 0xf */
  EDX = (0xfu);
  /* 10ed95b2 lea ecx, [0x10f0cd90] */
  ECX = ((uint32_t)(0x10f0cd90));
  /* 10ed95b8 call 0x10edacf7 */
  push32(0x10ed95bdu); f_10edacf7();
  /* 10ed95bd pop edx */
  EDX = (pop32());
  /* 10ed95be ret  */
  ESPCHK(0x10ed953du, _esp0);
  ESP += 4; return;
  /* 10ed95bf int3  */
  x86_unimpl("int3 @ 0x10ed95bf");
  /* 10ed95c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed95c1 mov ebp, esp */
  EBP = (ESP);
  /* 10ed95c3 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed95c4 push esi */
  push32((uint32_t)(ESI));
  /* 10ed95c5 push edi */
  push32((uint32_t)(EDI));
}

/* FUN_100095c0 @ 0x10ed95c0 (33 bytes, 15 insns) */
void f_10ed95c0(void) {
  FTRACE(0x10ed95c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed95c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed95c1 mov ebp, esp */
  EBP = (ESP);
  /* 10ed95c3 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed95c4 push esi */
  push32((uint32_t)(ESI));
  /* 10ed95c5 push edi */
  push32((uint32_t)(EDI));
  /* 10ed95c6 call 0x10ed9600 */
  push32(0x10ed95cbu); f_10ed9600();
  /* 10ed95cb call 0x10edadc0 */
  push32(0x10ed95d0u); f_10edadc0();
  /* 10ed95d0 mov dword ptr [0x10f0f4b0], eax */
  w32((uint32_t)(0x10f0f4b0), (EAX));
  /* 10ed95d5 call 0x10edad40 */
  push32(0x10ed95dau); f_10edad40();
  /* 10ed95da fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 10ed95dc pop edi */
  EDI = (pop32());
  /* 10ed95dd pop esi */
  ESI = (pop32());
  /* 10ed95de pop ebx */
  EBX = (pop32());
  /* 10ed95df pop ebp */
  EBP = (pop32());
  /* 10ed95e0 ret  */
  ESPCHK(0x10ed95c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100095f0 @ 0x10ed95f0 (5 bytes, 4 insns) */
void f_10ed95f0(void) {
  FTRACE(0x10ed95f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed95f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed95f1 mov ebp, esp */
  EBP = (ESP);
  /* 10ed95f3 pop ebp */
  EBP = (pop32());
  /* 10ed95f4 ret  */
  ESPCHK(0x10ed95f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009600 @ 0x10ed9600 (65 bytes, 10 insns) */
void f_10ed9600(void) {
  FTRACE(0x10ed9600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed9600 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed9601 mov ebp, esp */
  EBP = (ESP);
  /* 10ed9603 mov dword ptr [0x10f0ce20], 0x10edb4b0 */
  w32((uint32_t)(0x10f0ce20), (0x10edb4b0u));
  /* 10ed960d mov dword ptr [0x10f0ce24], 0x10edaec0 */
  w32((uint32_t)(0x10f0ce24), (0x10edaec0u));
  /* 10ed9617 mov dword ptr [0x10f0ce28], 0x10edafd0 */
  w32((uint32_t)(0x10f0ce28), (0x10edafd0u));
  /* 10ed9621 mov dword ptr [0x10f0ce2c], 0x10edae10 */
  w32((uint32_t)(0x10f0ce2c), (0x10edae10u));
  /* 10ed962b mov dword ptr [0x10f0ce30], 0x10edafa0 */
  w32((uint32_t)(0x10f0ce30), (0x10edafa0u));
  /* 10ed9635 mov dword ptr [0x10f0ce34], 0x10edb4b0 */
  w32((uint32_t)(0x10f0ce34), (0x10edb4b0u));
  /* 10ed963f pop ebp */
  EBP = (pop32());
  /* 10ed9640 ret  */
  ESPCHK(0x10ed9600u, _esp0);
  ESP += 4; return;
}

/* FUN_10009650 @ 0x10ed9650 (28 bytes, 11 insns) */
void f_10ed9650(void) {
  FTRACE(0x10ed9650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed9650 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed9651 mov ebp, esp */
  EBP = (ESP);
  /* 10ed9653 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed9654 mov eax, dword ptr [0x10f0f4ac] */
  EAX = (r32((uint32_t)(0x10f0f4ac)));
  /* 10ed9659 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ed965c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed965f mov dword ptr [0x10f0f4ac], ecx */
  w32((uint32_t)(0x10f0f4ac), (ECX));
  /* 10ed9665 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed9668 mov esp, ebp */
  ESP = (EBP);
  /* 10ed966a pop ebp */
  EBP = (pop32());
  /* 10ed966b ret  */
  ESPCHK(0x10ed9650u, _esp0);
  ESP += 4; return;
}

/* __ftol @ 0x10ed966c (39 bytes, 16 insns) */
void f_10ed966c(void) {
  FTRACE(0x10ed966cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed966c push ebp */
  push32((uint32_t)(EBP));
  /* 10ed966d mov ebp, esp */
  EBP = (ESP);
  /* 10ed966f add esp, -0xc */
  { uint32_t _a=(ESP),_b=(0xfffffff4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed9672 wait  */
  /* wait (no observable integer/reg state) */
  /* 10ed9673 fnstcw word ptr [ebp - 2] */
  w16((uint32_t)(EBP + -0x2), C.fcw);
  /* 10ed9676 wait  */
  /* wait (no observable integer/reg state) */
  /* 10ed9677 mov ax, word ptr [ebp - 2] */
  AX = (r16((uint32_t)(EBP + -0x2)));
  /* 10ed967b or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 10ed967e mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 10ed9682 fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 10ed9685 fistp qword ptr [ebp - 0xc] */
  { int64_t _q=fpu_to_i64(FPU_ST(0)); w32((uint32_t)(EBP + -0xc),(uint32_t)_q); w32((uint32_t)(EBP + -0xc)+4,(uint32_t)((uint64_t)_q>>32)); }
  (void)fpu_pop();
  /* 10ed9688 fldcw word ptr [ebp - 2] */
  C.fcw = r16((uint32_t)(EBP + -0x2));
  /* 10ed968b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ed968e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ed9691 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10ed9692 ret  */
  ESPCHK(0x10ed966cu, _esp0);
  ESP += 4; return;
}

/* FUN_100096a0 @ 0x10ed96a0 (161 bytes, 60 insns) */
void f_10ed96a0(void) {
  FTRACE(0x10ed96a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed96a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed96a1 mov ebp, esp */
  EBP = (ESP);
  /* 10ed96a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed96a4 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed96a5 push esi */
  push32((uint32_t)(ESI));
  /* 10ed96a6 push edi */
  push32((uint32_t)(EDI));
  /* 10ed96a7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed96ab jne 0x10ed96b2 */
  if (!C.zf) goto L_10ed96b2;
  /* 10ed96ad jmp 0x10ed973a */
  goto L_10ed973a;
L_10ed96b2:;
  /* 10ed96b2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10ed96b4 call 0x10edb620 */
  push32(0x10ed96b9u); f_10edb620();
  /* 10ed96b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed96bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed96bf sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed96c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ed96c5:;
  /* 10ed96c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed96c8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10ed96cb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ed96d1 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed96d4 je 0x10ed9717 */
  if (C.zf) goto L_10ed9717;
  /* 10ed96d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed96d9 cmp dword ptr [eax + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed96dd je 0x10ed9717 */
  if (C.zf) goto L_10ed9717;
  /* 10ed96df mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed96e2 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10ed96e5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ed96eb cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed96ee je 0x10ed9717 */
  if (C.zf) goto L_10ed9717;
  /* 10ed96f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed96f3 cmp dword ptr [eax + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed96f7 je 0x10ed9717 */
  if (C.zf) goto L_10ed9717;
  /* 10ed96f9 push 0x10f09274 */
  push32((uint32_t)(0x10f09274u));
  /* 10ed96fe push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed9700 push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 10ed9702 push 0x10f09268 */
  push32((uint32_t)(0x10f09268u));
  /* 10ed9707 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ed9709 call 0x10eda2e0 */
  push32(0x10ed970eu); f_10eda2e0();
  /* 10ed970e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed9711 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed9714 jne 0x10ed9717 */
  if (!C.zf) goto L_10ed9717;
  /* 10ed9716 int3  */
  x86_unimpl("int3 @ 0x10ed9716");
L_10ed9717:;
  /* 10ed9717 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ed9719 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ed971b jne 0x10ed96c5 */
  if (!C.zf) goto L_10ed96c5;
  /* 10ed971d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed9720 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10ed9723 push eax */
  push32((uint32_t)(EAX));
  /* 10ed9724 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed9727 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed9728 call 0x10edc1b0 */
  push32(0x10ed972du); f_10edc1b0();
  /* 10ed972d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed9730 push 9 */
  push32((uint32_t)(0x9u));
  /* 10ed9732 call 0x10edb6c0 */
  push32(0x10ed9737u); f_10edb6c0();
  /* 10ed9737 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ed973a:;
  /* 10ed973a pop edi */
  EDI = (pop32());
  /* 10ed973b pop esi */
  ESI = (pop32());
  /* 10ed973c pop ebx */
  EBX = (pop32());
  /* 10ed973d mov esp, ebp */
  ESP = (EBP);
  /* 10ed973f pop ebp */
  EBP = (pop32());
  /* 10ed9740 ret  */
  ESPCHK(0x10ed96a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009750 @ 0x10ed9750 (19 bytes, 9 insns) */
void f_10ed9750(void) {
  FTRACE(0x10ed9750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed9750 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed9751 mov ebp, esp */
  EBP = (ESP);
  /* 10ed9753 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ed9755 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed9758 push eax */
  push32((uint32_t)(EAX));
  /* 10ed9759 call 0x10edb750 */
  push32(0x10ed975eu); f_10edb750();
  /* 10ed975e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed9761 pop ebp */
  EBP = (pop32());
  /* 10ed9762 ret  */
  ESPCHK(0x10ed9750u, _esp0);
  ESP += 4; return;
}

/* FUN_10009770 @ 0x10ed9770 (45 bytes, 17 insns) */
void f_10ed9770(void) {
  FTRACE(0x10ed9770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed9770 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed9771 mov ebp, esp */
  EBP = (ESP);
  /* 10ed9773 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed9774 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed9775 push esi */
  push32((uint32_t)(ESI));
  /* 10ed9776 push edi */
  push32((uint32_t)(EDI));
  /* 10ed9777 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ed977a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed977d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ed9780 mov ebx, dword ptr fs:[0] */
  EBX = (r32((uint32_t)(0x0)));
  /* 10ed9787 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10ed9789 mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 10ed978f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed9792 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ed9795 mov esp, dword ptr [ebx - 4] */
  ESP = (r32((uint32_t)(EBX + -0x4)));
  /* 10ed9798 mov ebp, dword ptr [ebp - 4] */
  EBP = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed979b jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* _CallMemberFunction0 @ 0x10ed97b0 (7 bytes, 4 insns) */
void f_10ed97b0(void) {
  FTRACE(0x10ed97b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed97b0 pop eax */
  EAX = (pop32());
  /* 10ed97b1 pop ecx */
  ECX = (pop32());
  /* 10ed97b2 xchg dword ptr [esp], eax */
  { uint32_t _t=(r32((uint32_t)(ESP))); w32((uint32_t)(ESP), (EAX)); EAX = (_t); }
  /* 10ed97b5 jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* FUN_100097c0 @ 0x10ed97c0 (7 bytes, 4 insns) */
void f_10ed97c0(void) {
  FTRACE(0x10ed97c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed97c0 pop eax */
  EAX = (pop32());
  /* 10ed97c1 pop ecx */
  ECX = (pop32());
  /* 10ed97c2 xchg dword ptr [esp], eax */
  { uint32_t _t=(r32((uint32_t)(ESP))); w32((uint32_t)(ESP), (EAX)); EAX = (_t); }
  /* 10ed97c5 jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* FUN_100097d0 @ 0x10ed97d0 (7 bytes, 4 insns) */
void f_10ed97d0(void) {
  FTRACE(0x10ed97d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed97d0 pop eax */
  EAX = (pop32());
  /* 10ed97d1 pop ecx */
  ECX = (pop32());
  /* 10ed97d2 xchg dword ptr [esp], eax */
  { uint32_t _t=(r32((uint32_t)(ESP))); w32((uint32_t)(ESP), (EAX)); EAX = (_t); }
  /* 10ed97d5 jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* FUN_100097e0 @ 0x10ed97e0 (86 bytes, 32 insns) */
void f_10ed97e0(void) {
  FTRACE(0x10ed97e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed97e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed97e1 mov ebp, esp */
  EBP = (ESP);
  /* 10ed97e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed97e6 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed97e7 push esi */
  push32((uint32_t)(ESI));
  /* 10ed97e8 push edi */
  push32((uint32_t)(EDI));
  /* 10ed97e9 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10ed97ef mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ed97f2 mov dword ptr [ebp - 4], 0x10ed980c */
  w32((uint32_t)(EBP + -0x4), (0x10ed980cu));
  /* 10ed97f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed97fb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ed97fe push eax */
  push32((uint32_t)(EAX));
  /* 10ed97ff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed9802 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed9803 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed9806 push edx */
  push32((uint32_t)(EDX));
  /* 10ed9807 call 0x10ef0cdc */
  push32(0x10ed980cu); f_10ef0cdc();
  /* 10ed980c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ed980f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ed9812 and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 10ed9815 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ed9818 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10ed981b mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10ed9821 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ed9824 mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 10ed9826 mov dword ptr fs:[0], ebx */
  w32((uint32_t)(0x0), (EBX));
  /* 10ed982d pop edi */
  EDI = (pop32());
  /* 10ed982e pop esi */
  ESI = (pop32());
  /* 10ed982f pop ebx */
  EBX = (pop32());
  /* 10ed9830 mov esp, ebp */
  ESP = (EBP);
  /* 10ed9832 pop ebp */
  EBP = (pop32());
  /* 10ed9833 ret 8 */
  ESPCHK(0x10ed97e0u, _esp0);
  ESP += 12; return;
}

/* FID_conflict:___CxxFrameHandler3 @ 0x10ed9840 (60 bytes, 31 insns) */
void f_10ed9840(void) {
  FTRACE(0x10ed9840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed9840 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed9841 mov ebp, esp */
  EBP = (ESP);
  /* 10ed9843 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed9846 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed9847 push esi */
  push32((uint32_t)(ESI));
  /* 10ed9848 push edi */
  push32((uint32_t)(EDI));
  /* 10ed9849 cld  */
  C.df=0;
  /* 10ed984a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ed984d push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed984f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed9851 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed9853 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ed9856 push eax */
  push32((uint32_t)(EAX));
  /* 10ed9857 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ed985a push ecx */
  push32((uint32_t)(ECX));
  /* 10ed985b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ed985e push edx */
  push32((uint32_t)(EDX));
  /* 10ed985f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ed9862 push eax */
  push32((uint32_t)(EAX));
  /* 10ed9863 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed9866 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed9867 call 0x10edd690 */
  push32(0x10ed986cu); f_10edd690();
  /* 10ed986c add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed986f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ed9872 pop edi */
  EDI = (pop32());
  /* 10ed9873 pop esi */
  ESI = (pop32());
  /* 10ed9874 pop ebx */
  EBX = (pop32());
  /* 10ed9875 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed9878 mov esp, ebp */
  ESP = (EBP);
  /* 10ed987a pop ebp */
  EBP = (pop32());
  /* 10ed987b ret  */
  ESPCHK(0x10ed9840u, _esp0);
  ESP += 4; return;
}

/* ___CxxLongjmpUnwind@4 @ 0x10ed9880 (38 bytes, 16 insns) */
void f_10ed9880(void) {
  FTRACE(0x10ed9880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed9880 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed9881 mov ebp, esp */
  EBP = (ESP);
  /* 10ed9883 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed9886 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10ed9889 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed988a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed988d mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 10ed9890 push eax */
  push32((uint32_t)(EAX));
  /* 10ed9891 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed9893 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed9896 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10ed9899 push edx */
  push32((uint32_t)(EDX));
  /* 10ed989a call 0x10eddc00 */
  push32(0x10ed989fu); f_10eddc00();
  /* 10ed989f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed98a2 pop ebp */
  EBP = (pop32());
  /* 10ed98a3 ret 4 */
  ESPCHK(0x10ed9880u, _esp0);
  ESP += 8; return;
}

/* FUN_100098b0 @ 0x10ed98b0 (104 bytes, 36 insns) */
void f_10ed98b0(void) {
  FTRACE(0x10ed98b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed98b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed98b1 mov ebp, esp */
  EBP = (ESP);
  /* 10ed98b3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed98b6 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed98b7 push esi */
  push32((uint32_t)(ESI));
  /* 10ed98b8 push edi */
  push32((uint32_t)(EDI));
  /* 10ed98b9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10ed98c0 mov dword ptr [ebp - 0x10], 0x10ed9920 */
  w32((uint32_t)(EBP + -0x10), (0x10ed9920u));
  /* 10ed98c7 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ed98ca mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ed98cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed98d0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10ed98d3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ed98d6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed98d9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10ed98dc mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10ed98e2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10ed98e5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10ed98eb mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 10ed98f1 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ed98f4 push eax */
  push32((uint32_t)(EAX));
  /* 10ed98f5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed98f8 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed98f9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ed98fc push edx */
  push32((uint32_t)(EDX));
  /* 10ed98fd call 0x10ede2f0 */
  push32(0x10ed9902u); f_10ede2f0();
  /* 10ed9902 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10ed9905 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ed9908 mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 10ed990e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ed9911 pop edi */
  EDI = (pop32());
  /* 10ed9912 pop esi */
  ESI = (pop32());
  /* 10ed9913 pop ebx */
  EBX = (pop32());
  /* 10ed9914 mov esp, ebp */
  ESP = (EBP);
  /* 10ed9916 pop ebp */
  EBP = (pop32());
  /* 10ed9917 ret  */
  ESPCHK(0x10ed98b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009920 @ 0x10ed9920 (57 bytes, 30 insns) */
void f_10ed9920(void) {
  FTRACE(0x10ed9920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed9920 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed9921 mov ebp, esp */
  EBP = (ESP);
  /* 10ed9923 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed9924 push esi */
  push32((uint32_t)(ESI));
  /* 10ed9925 push edi */
  push32((uint32_t)(EDI));
  /* 10ed9926 cld  */
  C.df=0;
  /* 10ed9927 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed9929 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ed992c push eax */
  push32((uint32_t)(EAX));
  /* 10ed992d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ed9930 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10ed9933 push edx */
  push32((uint32_t)(EDX));
  /* 10ed9934 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ed9937 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10ed993a push ecx */
  push32((uint32_t)(ECX));
  /* 10ed993b push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed993d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ed9940 push edx */
  push32((uint32_t)(EDX));
  /* 10ed9941 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ed9944 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10ed9947 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed9948 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed994b push edx */
  push32((uint32_t)(EDX));
  /* 10ed994c call 0x10edd690 */
  push32(0x10ed9951u); f_10edd690();
  /* 10ed9951 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed9954 pop edi */
  EDI = (pop32());
  /* 10ed9955 pop esi */
  ESI = (pop32());
  /* 10ed9956 pop ebx */
  EBX = (pop32());
  /* 10ed9957 pop ebp */
  EBP = (pop32());
  /* 10ed9958 ret  */
  ESPCHK(0x10ed9920u, _esp0);
  ESP += 4; return;
}

/* FUN_10009960 @ 0x10ed9960 (204 bytes, 58 insns) */
void f_10ed9960(void) {
  FTRACE(0x10ed9960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed9960 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed9961 mov ebp, esp */
  EBP = (ESP);
  /* 10ed9963 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed9966 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed9967 push esi */
  push32((uint32_t)(ESI));
  /* 10ed9968 push edi */
  push32((uint32_t)(EDI));
  /* 10ed9969 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10ed9970 mov dword ptr [ebp - 0x24], 0x10ed9a30 */
  w32((uint32_t)(EBP + -0x24), (0x10ed9a30u));
  /* 10ed9977 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ed997a mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10ed997d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ed9980 mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 10ed9983 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10ed9986 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10ed9989 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10ed998c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10ed998f mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10ed9996 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10ed999d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ed99a4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ed99ab mov dword ptr [ebp - 0x10], 0x10ed99fc */
  w32((uint32_t)(EBP + -0x10), (0x10ed99fcu));
  /* 10ed99b2 mov dword ptr [ebp - 0xc], esp */
  w32((uint32_t)(EBP + -0xc), (ESP));
  /* 10ed99b5 mov dword ptr [ebp - 8], ebp */
  w32((uint32_t)(EBP + -0x8), (EBP));
  /* 10ed99b8 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10ed99be mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10ed99c1 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 10ed99c7 mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 10ed99cd mov dword ptr [ebp - 0x34], 1 */
  w32((uint32_t)(EBP + -0x34), (0x1u));
  /* 10ed99d4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed99d7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10ed99da mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ed99dd mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 10ed99e0 lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 10ed99e3 push eax */
  push32((uint32_t)(EAX));
  /* 10ed99e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed99e7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ed99e9 push edx */
  push32((uint32_t)(EDX));
  /* 10ed99ea call 0x10ede420 */
  push32(0x10ed99efu); f_10ede420();
  /* 10ed99ef call dword ptr [eax + 0x68] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x68))), 0x10ed99f2u);
  /* 10ed99f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed99f5 mov dword ptr [ebp - 0x34], 0 */
  w32((uint32_t)(EBP + -0x34), (0x0u));
  /* 10ed99fc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed9a00 je 0x10ed9a19 */
  if (C.zf) goto L_10ed9a19;
  /* 10ed9a02 mov ebx, dword ptr fs:[0] */
  EBX = (r32((uint32_t)(0x0)));
  /* 10ed9a09 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10ed9a0b mov ebx, dword ptr [ebp - 0x28] */
  EBX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ed9a0e mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 10ed9a10 mov dword ptr fs:[0], ebx */
  w32((uint32_t)(0x0), (EBX));
  /* 10ed9a17 jmp 0x10ed9a22 */
  goto L_10ed9a22;
L_10ed9a19:;
  /* 10ed9a19 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ed9a1c mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
L_10ed9a22:;
  /* 10ed9a22 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10ed9a25 pop edi */
  EDI = (pop32());
  /* 10ed9a26 pop esi */
  ESI = (pop32());
  /* 10ed9a27 pop ebx */
  EBX = (pop32());
  /* 10ed9a28 mov esp, ebp */
  ESP = (EBP);
  /* 10ed9a2a pop ebp */
  EBP = (pop32());
  /* 10ed9a2b ret  */
  ESPCHK(0x10ed9960u, _esp0);
  ESP += 4; return;
}

/* FUN_10009a30 @ 0x10ed9a30 (124 bytes, 53 insns) */
void f_10ed9a30(void) {
  FTRACE(0x10ed9a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed9a30 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed9a31 mov ebp, esp */
  EBP = (ESP);
  /* 10ed9a33 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed9a34 push esi */
  push32((uint32_t)(ESI));
  /* 10ed9a35 push edi */
  push32((uint32_t)(EDI));
  /* 10ed9a36 cld  */
  C.df=0;
  /* 10ed9a37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed9a3a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ed9a3d and ecx, 0x66 */
  { uint32_t _r=(ECX)&(0x66u); ECX = (_r); fl_logic(_r,32); }
  /* 10ed9a40 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ed9a42 je 0x10ed9a55 */
  if (C.zf) goto L_10ed9a55;
  /* 10ed9a44 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ed9a47 mov dword ptr [edx + 0x24], 1 */
  w32((uint32_t)(EDX + 0x24), (0x1u));
  /* 10ed9a4e mov eax, 1 */
  EAX = (0x1u);
  /* 10ed9a53 jmp 0x10ed9aac */
  goto L_10ed9aac;
L_10ed9a55:;
  /* 10ed9a55 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ed9a57 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ed9a5a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10ed9a5d push ecx */
  push32((uint32_t)(ECX));
  /* 10ed9a5e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ed9a61 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10ed9a64 push eax */
  push32((uint32_t)(EAX));
  /* 10ed9a65 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ed9a68 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10ed9a6b push edx */
  push32((uint32_t)(EDX));
  /* 10ed9a6c push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed9a6e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ed9a71 push eax */
  push32((uint32_t)(EAX));
  /* 10ed9a72 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ed9a75 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10ed9a78 push edx */
  push32((uint32_t)(EDX));
  /* 10ed9a79 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed9a7c push eax */
  push32((uint32_t)(EAX));
  /* 10ed9a7d call 0x10edd690 */
  push32(0x10ed9a82u); f_10edd690();
  /* 10ed9a82 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed9a85 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ed9a88 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed9a8c jne 0x10ed9a9b */
  if (!C.zf) goto L_10ed9a9b;
  /* 10ed9a8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed9a91 push edx */
  push32((uint32_t)(EDX));
  /* 10ed9a92 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ed9a95 push eax */
  push32((uint32_t)(EAX));
  /* 10ed9a96 call 0x10ed97e0 */
  push32(0x10ed9a9bu); f_10ed97e0();
L_10ed9a9b:;
  /* 10ed9a9b mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ed9a9e mov esp, dword ptr [ebx + 0x1c] */
  ESP = (r32((uint32_t)(EBX + 0x1c)));
  /* 10ed9aa1 mov ebp, dword ptr [ebx + 0x20] */
  EBP = (r32((uint32_t)(EBX + 0x20)));
  /* 10ed9aa4 jmp dword ptr [ebx + 0x18] */
  jmp_ind((uint32_t)(r32((uint32_t)(EBX + 0x18)))); return;
  /* 10ed9aa7 mov eax, 1 */
  EAX = (0x1u);
L_10ed9aac:;
  /* 10ed9aac pop edi */
  EDI = (pop32());
  /* 10ed9aad pop esi */
  ESI = (pop32());
  /* 10ed9aae pop ebx */
  EBX = (pop32());
  /* 10ed9aaf pop ebp */
  EBP = (pop32());
  /* 10ed9ab0 ret  */
  ESPCHK(0x10ed9a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ac0 @ 0x10ed9ac0 (130 bytes, 57 insns) */
void f_10ed9ac0(void) {
  FTRACE(0x10ed9ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed9ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed9ac1 mov ebp, esp */
  EBP = (ESP);
  /* 10ed9ac3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed9ac4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed9ac7 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed9ac8 push esi */
  push32((uint32_t)(ESI));
  /* 10ed9ac9 push edi */
  push32((uint32_t)(EDI));
  /* 10ed9aca mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10ed9acd mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 10ed9ad0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed9ad3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ed9ad6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ed9ad8 mov edi, esi */
  EDI = (ESI);
  /* 10ed9ada mov ebx, esi */
  EBX = (ESI);
  /* 10ed9adc jl 0x10ed9b19 */
  if ((C.sf!=C.of)) goto L_10ed9b19;
L_10ed9ade:;
  /* 10ed9ade cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed9ae1 jne 0x10ed9ae8 */
  if (!C.zf) goto L_10ed9ae8;
  /* 10ed9ae3 call 0x10ede6a0 */
  push32(0x10ed9ae8u); f_10ede6a0();
L_10ed9ae8:;
  /* 10ed9ae8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed9aeb dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10ed9aec mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ed9aef lea edx, [esi + esi*4] */
  EDX = ((uint32_t)(ESI + ESI*4));
  /* 10ed9af2 lea eax, [eax + edx*4] */
  EAX = ((uint32_t)(EAX + EDX*4));
  /* 10ed9af5 cmp dword ptr [eax + 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed9af8 jge 0x10ed9aff */
  if ((C.sf==C.of)) goto L_10ed9aff;
  /* 10ed9afa cmp ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed9afd jle 0x10ed9b04 */
  if ((C.zf||C.sf!=C.of)) goto L_10ed9b04;
L_10ed9aff:;
  /* 10ed9aff cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed9b02 jne 0x10ed9b0f */
  if (!C.zf) goto L_10ed9b0f;
L_10ed9b04:;
  /* 10ed9b04 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ed9b07 mov edi, ebx */
  EDI = (EBX);
  /* 10ed9b09 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10ed9b0a mov ebx, esi */
  EBX = (ESI);
  /* 10ed9b0c mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10ed9b0f:;
  /* 10ed9b0f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ed9b12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ed9b14 jge 0x10ed9ade */
  if ((C.sf==C.of)) goto L_10ed9ade;
  /* 10ed9b16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10ed9b19:;
  /* 10ed9b19 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ed9b1c mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ed9b1f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10ed9b20 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
  /* 10ed9b22 mov dword ptr [edx], edi */
  w32((uint32_t)(EDX), (EDI));
  /* 10ed9b24 cmp edi, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed9b27 ja 0x10ed9b2d */
  if ((!C.cf&&!C.zf)) goto L_10ed9b2d;
  /* 10ed9b29 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed9b2b jbe 0x10ed9b32 */
  if ((C.cf||C.zf)) goto L_10ed9b32;
L_10ed9b2d:;
  /* 10ed9b2d call 0x10ede6a0 */
  push32(0x10ed9b32u); f_10ede6a0();
L_10ed9b32:;
  /* 10ed9b32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed9b35 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 10ed9b38 pop edi */
  EDI = (pop32());
  /* 10ed9b39 pop esi */
  ESI = (pop32());
  /* 10ed9b3a lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 10ed9b3d pop ebx */
  EBX = (pop32());
  /* 10ed9b3e mov esp, ebp */
  ESP = (EBP);
  /* 10ed9b40 pop ebp */
  EBP = (pop32());
  /* 10ed9b41 ret  */
  ESPCHK(0x10ed9ac0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x10ed9b50 (32 bytes, 18 insns) */
void f_10ed9b50(void) {
  FTRACE(0x10ed9b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed9b50 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed9b51 mov ebp, esp */
  EBP = (ESP);
  /* 10ed9b53 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed9b54 push esi */
  push32((uint32_t)(ESI));
  /* 10ed9b55 push edi */
  push32((uint32_t)(EDI));
  /* 10ed9b56 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed9b57 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed9b59 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed9b5b push 0x10ed9b68 */
  push32((uint32_t)(0x10ed9b68u));
  /* 10ed9b60 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10ed9b63 call 0x10ef0cdc */
  push32(0x10ed9b68u); f_10ef0cdc();
  /* 10ed9b68 pop ebp */
  EBP = (pop32());
  /* 10ed9b69 pop edi */
  EDI = (pop32());
  /* 10ed9b6a pop esi */
  ESI = (pop32());
  /* 10ed9b6b pop ebx */
  EBX = (pop32());
  /* 10ed9b6c mov esp, ebp */
  ESP = (EBP);
  /* 10ed9b6e pop ebp */
  EBP = (pop32());
  /* 10ed9b6f ret  */
  ESPCHK(0x10ed9b50u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x10ed9b92 (104 bytes, 33 insns) */
void f_10ed9b92(void) {
  FTRACE(0x10ed9b92u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed9b92 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed9b93 push esi */
  push32((uint32_t)(ESI));
  /* 10ed9b94 push edi */
  push32((uint32_t)(EDI));
  /* 10ed9b95 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10ed9b99 push eax */
  push32((uint32_t)(EAX));
  /* 10ed9b9a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 10ed9b9c push 0x10ed9b70 */
  push32((uint32_t)(0x10ed9b70u));
  /* 10ed9ba1 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 10ed9ba8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_10ed9baf:;
  /* 10ed9baf mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 10ed9bb3 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 10ed9bb6 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 10ed9bb9 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed9bbc je 0x10ed9bec */
  if (C.zf) goto L_10ed9bec;
  /* 10ed9bbe cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed9bc2 je 0x10ed9bec */
  if (C.zf) goto L_10ed9bec;
  /* 10ed9bc4 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 10ed9bc7 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 10ed9bca mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 10ed9bce mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 10ed9bd1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed9bd6 jne 0x10ed9bea */
  if (!C.zf) goto L_10ed9bea;
  /* 10ed9bd8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10ed9bdd mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 10ed9be1 call 0x10ed9c26 */
  push32(0x10ed9be6u); f_10ed9c26();
  /* 10ed9be6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x10ed9beau);
L_10ed9bea:;
  /* 10ed9bea jmp 0x10ed9baf */
  goto L_10ed9baf;
L_10ed9bec:;
  /* 10ed9bec pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 10ed9bf3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed9bf6 pop edi */
  EDI = (pop32());
  /* 10ed9bf7 pop esi */
  ESI = (pop32());
  /* 10ed9bf8 pop ebx */
  EBX = (pop32());
  /* 10ed9bf9 ret  */
  ESPCHK(0x10ed9b92u, _esp0);
  ESP += 4; return;
}

/* __abnormal_termination @ 0x10ed9bfa (35 bytes, 10 insns) */
void f_10ed9bfa(void) {
  FTRACE(0x10ed9bfau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed9bfa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ed9bfc mov ecx, dword ptr fs:[0] */
  ECX = (r32((uint32_t)(0x0)));
  /* 10ed9c03 cmp dword ptr [ecx + 4], 0x10ed9b70 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x10ed9b70u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed9c0a jne 0x10ed9c1c */
  if (!C.zf) goto L_10ed9c1c;
  /* 10ed9c0c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10ed9c0f mov edx, dword ptr [edx + 0xc] */
  EDX = (r32((uint32_t)(EDX + 0xc)));
  /* 10ed9c12 cmp dword ptr [ecx + 8], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed9c15 jne 0x10ed9c1c */
  if (!C.zf) goto L_10ed9c1c;
  /* 10ed9c17 mov eax, 1 */
  EAX = (0x1u);
L_10ed9c1c:;
  /* 10ed9c1c ret  */
  ESPCHK(0x10ed9bfau, _esp0);
  ESP += 4; return;
}

/* __NLG_Notify1 @ 0x10ed9c1d (9 bytes, 4 insns) */
void f_10ed9c1d(void) {
  FTRACE(0x10ed9c1du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed9c1d push ebx */
  push32((uint32_t)(EBX));
  /* 10ed9c1e push ecx */
  push32((uint32_t)(ECX));
  /* 10ed9c1f mov ebx, 0x10f0cdac */
  EBX = (0x10f0cdacu);
  /* 10ed9c24 jmp 0x10ed9c30 */
  jmp_ind(0x10ed9c30u); return;
}

/* FUN_10009c26 @ 0x10ed9c26 (24 bytes, 10 insns) */
void f_10ed9c26(void) {
  FTRACE(0x10ed9c26u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed9c26 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed9c27 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed9c28 mov ebx, 0x10f0cdac */
  EBX = (0x10f0cdacu);
  /* 10ed9c2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed9c30 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 10ed9c33 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 10ed9c36 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 10ed9c39 pop ecx */
  ECX = (pop32());
  /* 10ed9c3a pop ebx */
  EBX = (pop32());
  /* 10ed9c3b ret 4 */
  ESPCHK(0x10ed9c26u, _esp0);
  ESP += 8; return;
}

/* FUN_10009c40 @ 0x10ed9c40 (179 bytes, 53 insns) */
void f_10ed9c40(void) {
  FTRACE(0x10ed9c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed9c40 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed9c41 mov ebp, esp */
  EBP = (ESP);
  /* 10ed9c43 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed9c44 call 0x10ede8e0 */
  push32(0x10ed9c49u); f_10ede8e0();
  /* 10ed9c49 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ed9c4b mov eax, dword ptr [0x10f10ff8] */
  EAX = (r32((uint32_t)(0x10f10ff8)));
  /* 10ed9c50 push eax */
  push32((uint32_t)(EAX));
  /* 10ed9c51 call 0x10edc5f0 */
  push32(0x10ed9c56u); f_10edc5f0();
  /* 10ed9c56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed9c59 mov ecx, dword ptr [0x10f10ff4] */
  ECX = (r32((uint32_t)(0x10f10ff4)));
  /* 10ed9c5f sub ecx, dword ptr [0x10f10ff8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10f10ff8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed9c65 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed9c68 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed9c6a jae 0x10ed9ccd */
  if (!C.cf) goto L_10ed9ccd;
  /* 10ed9c6c push 0x68 */
  push32((uint32_t)(0x68u));
  /* 10ed9c6e push 0x10f0929c */
  push32((uint32_t)(0x10f0929cu));
  /* 10ed9c73 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ed9c75 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ed9c77 mov edx, dword ptr [0x10f10ff8] */
  EDX = (r32((uint32_t)(0x10f10ff8)));
  /* 10ed9c7d push edx */
  push32((uint32_t)(EDX));
  /* 10ed9c7e call 0x10edc5f0 */
  push32(0x10ed9c83u); f_10edc5f0();
  /* 10ed9c83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed9c86 add eax, 0x10 */
  { uint32_t _a=(EAX),_b=(0x10u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed9c89 push eax */
  push32((uint32_t)(EAX));
  /* 10ed9c8a mov eax, dword ptr [0x10f10ff8] */
  EAX = (r32((uint32_t)(0x10f10ff8)));
  /* 10ed9c8f push eax */
  push32((uint32_t)(EAX));
  /* 10ed9c90 call 0x10edbbb0 */
  push32(0x10ed9c95u); f_10edbbb0();
  /* 10ed9c95 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed9c98 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ed9c9b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed9c9f jne 0x10ed9caa */
  if (!C.zf) goto L_10ed9caa;
  /* 10ed9ca1 call 0x10ede8f0 */
  push32(0x10ed9ca6u); f_10ede8f0();
  /* 10ed9ca6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ed9ca8 jmp 0x10ed9cef */
  goto L_10ed9cef;
L_10ed9caa:;
  /* 10ed9caa mov ecx, dword ptr [0x10f10ff4] */
  ECX = (r32((uint32_t)(0x10f10ff4)));
  /* 10ed9cb0 sub ecx, dword ptr [0x10f10ff8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10f10ff8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed9cb6 sar ecx, 2 */
  ECX = (sh_sar((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10ed9cb9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed9cbc lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 10ed9cbf mov dword ptr [0x10f10ff4], eax */
  w32((uint32_t)(0x10f10ff4), (EAX));
  /* 10ed9cc4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed9cc7 mov dword ptr [0x10f10ff8], ecx */
  w32((uint32_t)(0x10f10ff8), (ECX));
L_10ed9ccd:;
  /* 10ed9ccd mov edx, dword ptr [0x10f10ff4] */
  EDX = (r32((uint32_t)(0x10f10ff4)));
  /* 10ed9cd3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed9cd6 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10ed9cd8 mov ecx, dword ptr [0x10f10ff4] */
  ECX = (r32((uint32_t)(0x10f10ff4)));
  /* 10ed9cde add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed9ce1 mov dword ptr [0x10f10ff4], ecx */
  w32((uint32_t)(0x10f10ff4), (ECX));
  /* 10ed9ce7 call 0x10ede8f0 */
  push32(0x10ed9cecu); f_10ede8f0();
  /* 10ed9cec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10ed9cef:;
  /* 10ed9cef mov esp, ebp */
  ESP = (EBP);
  /* 10ed9cf1 pop ebp */
  EBP = (pop32());
  /* 10ed9cf2 ret  */
  ESPCHK(0x10ed9c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d00 @ 0x10ed9d00 (24 bytes, 12 insns) */
void f_10ed9d00(void) {
  FTRACE(0x10ed9d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed9d00 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed9d01 mov ebp, esp */
  EBP = (ESP);
  /* 10ed9d03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed9d06 push eax */
  push32((uint32_t)(EAX));
  /* 10ed9d07 call 0x10ed9c40 */
  push32(0x10ed9d0cu); f_10ed9c40();
  /* 10ed9d0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed9d0f neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ed9d11 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed9d13 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ed9d15 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10ed9d16 pop ebp */
  EBP = (pop32());
  /* 10ed9d17 ret  */
  ESPCHK(0x10ed9d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d20 @ 0x10ed9d20 (77 bytes, 20 insns) */
void f_10ed9d20(void) {
  FTRACE(0x10ed9d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed9d20 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed9d21 mov ebp, esp */
  EBP = (ESP);
  /* 10ed9d23 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 10ed9d28 push 0x10f0929c */
  push32((uint32_t)(0x10f0929cu));
  /* 10ed9d2d push 2 */
  push32((uint32_t)(0x2u));
  /* 10ed9d2f push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10ed9d34 call 0x10edb720 */
  push32(0x10ed9d39u); f_10edb720();
  /* 10ed9d39 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed9d3c mov dword ptr [0x10f10ff8], eax */
  w32((uint32_t)(0x10f10ff8), (EAX));
  /* 10ed9d41 cmp dword ptr [0x10f10ff8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f10ff8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed9d48 jne 0x10ed9d54 */
  if (!C.zf) goto L_10ed9d54;
  /* 10ed9d4a push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10ed9d4c call 0x10eda190 */
  push32(0x10ed9d51u); f_10eda190();
  /* 10ed9d51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ed9d54:;
  /* 10ed9d54 mov eax, dword ptr [0x10f10ff8] */
  EAX = (r32((uint32_t)(0x10f10ff8)));
  /* 10ed9d59 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10ed9d5f mov ecx, dword ptr [0x10f10ff8] */
  ECX = (r32((uint32_t)(0x10f10ff8)));
  /* 10ed9d65 mov dword ptr [0x10f10ff4], ecx */
  w32((uint32_t)(0x10f10ff4), (ECX));
  /* 10ed9d6b pop ebp */
  EBP = (pop32());
  /* 10ed9d6c ret  */
  ESPCHK(0x10ed9d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d70 @ 0x10ed9d70 (16 bytes, 7 insns) */
void f_10ed9d70(void) {
  FTRACE(0x10ed9d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed9d70 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed9d71 mov ebp, esp */
  EBP = (ESP);
  /* 10ed9d73 call 0x10ede420 */
  push32(0x10ed9d78u); f_10ede420();
  /* 10ed9d78 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed9d7b mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 10ed9d7e pop ebp */
  EBP = (pop32());
  /* 10ed9d7f ret  */
  ESPCHK(0x10ed9d70u, _esp0);
  ESP += 4; return;
}

/* _rand @ 0x10ed9d80 (54 bytes, 18 insns) */
void f_10ed9d80(void) {
  FTRACE(0x10ed9d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed9d80 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed9d81 mov ebp, esp */
  EBP = (ESP);
  /* 10ed9d83 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed9d84 call 0x10ede420 */
  push32(0x10ed9d89u); f_10ede420();
  /* 10ed9d89 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ed9d8c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed9d8f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10ed9d92 imul ecx, ecx, 0x343fd */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x343fdu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10ed9d98 add ecx, 0x269ec3 */
  { uint32_t _a=(ECX),_b=(0x269ec3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed9d9e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed9da1 mov dword ptr [edx + 0x14], ecx */
  w32((uint32_t)(EDX + 0x14), (ECX));
  /* 10ed9da4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed9da7 mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 10ed9daa shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10ed9dad and eax, 0x7fff */
  { uint32_t _r=(EAX)&(0x7fffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ed9db2 mov esp, ebp */
  ESP = (EBP);
  /* 10ed9db4 pop ebp */
  EBP = (pop32());
  /* 10ed9db5 ret  */
  ESPCHK(0x10ed9d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10009dc0 @ 0x10ed9dc0 (385 bytes, 103 insns) */
void f_10ed9dc0(void) {
  FTRACE(0x10ed9dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed9dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed9dc1 mov ebp, esp */
  EBP = (ESP);
  /* 10ed9dc3 sub esp, 0xd8 */
  { uint32_t _a=(ESP),_b=(0xd8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed9dc9 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 10ed9dcc push eax */
  push32((uint32_t)(EAX));
  /* 10ed9dcd call dword ptr [0x10f12400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12400))), 0x10ed9dd3u);
  /* 10ed9dd3 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 10ed9dd6 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed9dd7 call dword ptr [0x10f123fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123fc))), 0x10ed9dddu);
  /* 10ed9ddd mov edx, dword ptr [ebp - 6] */
  EDX = (r32((uint32_t)(EBP + -0x6)));
  /* 10ed9de0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ed9de6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ed9de8 mov ax, word ptr [0x10f0f4ca] */
  AX = (r16((uint32_t)(0x10f0f4ca)));
  /* 10ed9dee cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed9df0 jne 0x10ed9e58 */
  if (!C.zf) goto L_10ed9e58;
  /* 10ed9df2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ed9df5 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ed9dfb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ed9dfd mov dx, word ptr [0x10f0f4c8] */
  DX = (r16((uint32_t)(0x10f0f4c8)));
  /* 10ed9e04 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed9e06 jne 0x10ed9e58 */
  if (!C.zf) goto L_10ed9e58;
  /* 10ed9e08 mov eax, dword ptr [ebp - 0xa] */
  EAX = (r32((uint32_t)(EBP + -0xa)));
  /* 10ed9e0b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ed9e10 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ed9e12 mov cx, word ptr [0x10f0f4c6] */
  CX = (r16((uint32_t)(0x10f0f4c6)));
  /* 10ed9e19 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed9e1b jne 0x10ed9e58 */
  if (!C.zf) goto L_10ed9e58;
  /* 10ed9e1d mov edx, dword ptr [ebp - 0xe] */
  EDX = (r32((uint32_t)(EBP + -0xe)));
  /* 10ed9e20 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ed9e26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ed9e28 mov ax, word ptr [0x10f0f4c2] */
  AX = (r16((uint32_t)(0x10f0f4c2)));
  /* 10ed9e2e cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed9e30 jne 0x10ed9e58 */
  if (!C.zf) goto L_10ed9e58;
  /* 10ed9e32 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ed9e35 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ed9e3b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ed9e3d mov dx, word ptr [0x10f0f4c0] */
  DX = (r16((uint32_t)(0x10f0f4c0)));
  /* 10ed9e44 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed9e46 jne 0x10ed9e58 */
  if (!C.zf) goto L_10ed9e58;
  /* 10ed9e48 mov eax, dword ptr [0x10f0f4b8] */
  EAX = (r32((uint32_t)(0x10f0f4b8)));
  /* 10ed9e4d mov dword ptr [ebp - 0xd8], eax */
  w32((uint32_t)(EBP + -0xd8), (EAX));
  /* 10ed9e53 jmp 0x10ed9ee0 */
  goto L_10ed9ee0;
L_10ed9e58:;
  /* 10ed9e58 lea ecx, [ebp - 0xd0] */
  ECX = ((uint32_t)(EBP + -0xd0));
  /* 10ed9e5e push ecx */
  push32((uint32_t)(ECX));
  /* 10ed9e5f call dword ptr [0x10f123f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123f8))), 0x10ed9e65u);
  /* 10ed9e65 mov dword ptr [ebp - 0xd4], eax */
  w32((uint32_t)(EBP + -0xd4), (EAX));
  /* 10ed9e6b cmp dword ptr [ebp - 0xd4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xd4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed9e72 je 0x10ed9ea8 */
  if (C.zf) goto L_10ed9ea8;
  /* 10ed9e74 cmp dword ptr [ebp - 0xd4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xd4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed9e7b jne 0x10ed9e9c */
  if (!C.zf) goto L_10ed9e9c;
  /* 10ed9e7d mov edx, dword ptr [ebp - 0x36] */
  EDX = (r32((uint32_t)(EBP + -0x36)));
  /* 10ed9e80 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ed9e86 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10ed9e88 je 0x10ed9e9c */
  if (C.zf) goto L_10ed9e9c;
  /* 10ed9e8a cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed9e8e je 0x10ed9e9c */
  if (C.zf) goto L_10ed9e9c;
  /* 10ed9e90 mov dword ptr [ebp - 0xd8], 1 */
  w32((uint32_t)(EBP + -0xd8), (0x1u));
  /* 10ed9e9a jmp 0x10ed9ea6 */
  goto L_10ed9ea6;
L_10ed9e9c:;
  /* 10ed9e9c mov dword ptr [ebp - 0xd8], 0 */
  w32((uint32_t)(EBP + -0xd8), (0x0u));
L_10ed9ea6:;
  /* 10ed9ea6 jmp 0x10ed9eb2 */
  goto L_10ed9eb2;
L_10ed9ea8:;
  /* 10ed9ea8 mov dword ptr [ebp - 0xd8], 0xffffffff */
  w32((uint32_t)(EBP + -0xd8), (0xffffffffu));
L_10ed9eb2:;
  /* 10ed9eb2 mov eax, dword ptr [ebp - 0xd8] */
  EAX = (r32((uint32_t)(EBP + -0xd8)));
  /* 10ed9eb8 mov dword ptr [0x10f0f4b8], eax */
  w32((uint32_t)(0x10f0f4b8), (EAX));
  /* 10ed9ebd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ed9ec0 mov dword ptr [0x10f0f4c0], ecx */
  w32((uint32_t)(0x10f0f4c0), (ECX));
  /* 10ed9ec6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ed9ec9 mov dword ptr [0x10f0f4c4], edx */
  w32((uint32_t)(0x10f0f4c4), (EDX));
  /* 10ed9ecf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ed9ed2 mov dword ptr [0x10f0f4c8], eax */
  w32((uint32_t)(0x10f0f4c8), (EAX));
  /* 10ed9ed7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed9eda mov dword ptr [0x10f0f4cc], ecx */
  w32((uint32_t)(0x10f0f4cc), (ECX));
L_10ed9ee0:;
  /* 10ed9ee0 mov edx, dword ptr [ebp - 0xd8] */
  EDX = (r32((uint32_t)(EBP + -0xd8)));
  /* 10ed9ee6 push edx */
  push32((uint32_t)(EDX));
  /* 10ed9ee7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ed9eea and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ed9eef push eax */
  push32((uint32_t)(EAX));
  /* 10ed9ef0 mov ecx, dword ptr [ebp - 0x1a] */
  ECX = (r32((uint32_t)(EBP + -0x1a)));
  /* 10ed9ef3 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ed9ef9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed9efa mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ed9efd and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ed9f03 push edx */
  push32((uint32_t)(EDX));
  /* 10ed9f04 mov eax, dword ptr [ebp - 0x1e] */
  EAX = (r32((uint32_t)(EBP + -0x1e)));
  /* 10ed9f07 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ed9f0c push eax */
  push32((uint32_t)(EAX));
  /* 10ed9f0d mov ecx, dword ptr [ebp - 0x22] */
  ECX = (r32((uint32_t)(EBP + -0x22)));
  /* 10ed9f10 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ed9f16 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed9f17 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ed9f1a and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ed9f20 push edx */
  push32((uint32_t)(EDX));
  /* 10ed9f21 call 0x10ede930 */
  push32(0x10ed9f26u); f_10ede930();
  /* 10ed9f26 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed9f29 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10ed9f2c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed9f30 je 0x10ed9f3a */
  if (C.zf) goto L_10ed9f3a;
  /* 10ed9f32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed9f35 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ed9f38 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_10ed9f3a:;
  /* 10ed9f3a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ed9f3d mov esp, ebp */
  ESP = (EBP);
  /* 10ed9f3f pop ebp */
  EBP = (pop32());
  /* 10ed9f40 ret  */
  ESPCHK(0x10ed9dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f50 @ 0x10ed9f50 (313 bytes, 78 insns) */
void f_10ed9f50(void) {
  FTRACE(0x10ed9f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed9f50 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed9f51 mov ebp, esp */
  EBP = (ESP);
  /* 10ed9f53 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed9f57 jne 0x10eda017 */
  if (!C.zf) goto L_10eda017;
  /* 10ed9f5d call dword ptr [0x10f12408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12408))), 0x10ed9f63u);
  /* 10ed9f63 mov dword ptr [0x10f0f560], eax */
  w32((uint32_t)(0x10f0f560), (EAX));
  /* 10ed9f68 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ed9f6a call 0x10edf670 */
  push32(0x10ed9f6fu); f_10edf670();
  /* 10ed9f6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed9f72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ed9f74 jne 0x10ed9f7d */
  if (!C.zf) goto L_10ed9f7d;
  /* 10ed9f76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ed9f78 jmp 0x10eda085 */
  goto L_10eda085;
L_10ed9f7d:;
  /* 10ed9f7d mov eax, dword ptr [0x10f0f560] */
  EAX = (r32((uint32_t)(0x10f0f560)));
  /* 10ed9f82 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10ed9f85 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ed9f8a mov dword ptr [0x10f0f56c], eax */
  w32((uint32_t)(0x10f0f56c), (EAX));
  /* 10ed9f8f mov ecx, dword ptr [0x10f0f560] */
  ECX = (r32((uint32_t)(0x10f0f560)));
  /* 10ed9f95 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ed9f9b mov dword ptr [0x10f0f568], ecx */
  w32((uint32_t)(0x10f0f568), (ECX));
  /* 10ed9fa1 mov edx, dword ptr [0x10f0f568] */
  EDX = (r32((uint32_t)(0x10f0f568)));
  /* 10ed9fa7 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10ed9faa add edx, dword ptr [0x10f0f56c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10f0f56c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed9fb0 mov dword ptr [0x10f0f564], edx */
  w32((uint32_t)(0x10f0f564), (EDX));
  /* 10ed9fb6 mov eax, dword ptr [0x10f0f560] */
  EAX = (r32((uint32_t)(0x10f0f560)));
  /* 10ed9fbb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10ed9fbe and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ed9fc3 mov dword ptr [0x10f0f560], eax */
  w32((uint32_t)(0x10f0f560), (EAX));
  /* 10ed9fc8 call 0x10ede340 */
  push32(0x10ed9fcdu); f_10ede340();
  /* 10ed9fcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ed9fcf jne 0x10ed9fdd */
  if (!C.zf) goto L_10ed9fdd;
  /* 10ed9fd1 call 0x10edf6c0 */
  push32(0x10ed9fd6u); f_10edf6c0();
  /* 10ed9fd6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ed9fd8 jmp 0x10eda085 */
  goto L_10eda085;
L_10ed9fdd:;
  /* 10ed9fdd call dword ptr [0x10f12404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12404))), 0x10ed9fe3u);
  /* 10ed9fe3 mov dword ptr [0x10f11014], eax */
  w32((uint32_t)(0x10f11014), (EAX));
  /* 10ed9fe8 call 0x10edf450 */
  push32(0x10ed9fedu); f_10edf450();
  /* 10ed9fed mov dword ptr [0x10f0f4d4], eax */
  w32((uint32_t)(0x10f0f4d4), (EAX));
  /* 10ed9ff2 call 0x10edea20 */
  push32(0x10ed9ff7u); f_10edea20();
  /* 10ed9ff7 call 0x10edef40 */
  push32(0x10ed9ffcu); f_10edef40();
  /* 10ed9ffc call 0x10ededf0 */
  push32(0x10eda001u); f_10ededf0();
  /* 10eda001 call 0x10ede730 */
  push32(0x10eda006u); f_10ede730();
  /* 10eda006 mov ecx, dword ptr [0x10f0f4d0] */
  ECX = (r32((uint32_t)(0x10f0f4d0)));
  /* 10eda00c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eda00f mov dword ptr [0x10f0f4d0], ecx */
  w32((uint32_t)(0x10f0f4d0), (ECX));
  /* 10eda015 jmp 0x10eda080 */
  goto L_10eda080;
L_10eda017:;
  /* 10eda017 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda01b jne 0x10eda070 */
  if (!C.zf) goto L_10eda070;
  /* 10eda01d cmp dword ptr [0x10f0f4d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f4d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda024 jle 0x10eda06a */
  if ((C.zf||C.sf!=C.of)) goto L_10eda06a;
  /* 10eda026 mov edx, dword ptr [0x10f0f4d0] */
  EDX = (r32((uint32_t)(0x10f0f4d0)));
  /* 10eda02c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eda02f mov dword ptr [0x10f0f4d0], edx */
  w32((uint32_t)(0x10f0f4d0), (EDX));
  /* 10eda035 cmp dword ptr [0x10f0f598], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f598))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda03c jne 0x10eda043 */
  if (!C.zf) goto L_10eda043;
  /* 10eda03e call 0x10ede7b0 */
  push32(0x10eda043u); f_10ede7b0();
L_10eda043:;
  /* 10eda043 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10eda045 call 0x10edcc30 */
  push32(0x10eda04au); f_10edcc30();
  /* 10eda04a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eda04d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10eda050 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eda052 je 0x10eda059 */
  if (C.zf) goto L_10eda059;
  /* 10eda054 call 0x10edd540 */
  push32(0x10eda059u); f_10edd540();
L_10eda059:;
  /* 10eda059 call 0x10eded50 */
  push32(0x10eda05eu); f_10eded50();
  /* 10eda05e call 0x10ede3d0 */
  push32(0x10eda063u); f_10ede3d0();
  /* 10eda063 call 0x10edf6c0 */
  push32(0x10eda068u); f_10edf6c0();
  /* 10eda068 jmp 0x10eda06e */
  goto L_10eda06e;
L_10eda06a:;
  /* 10eda06a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eda06c jmp 0x10eda085 */
  goto L_10eda085;
L_10eda06e:;
  /* 10eda06e jmp 0x10eda080 */
  goto L_10eda080;
L_10eda070:;
  /* 10eda070 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda074 jne 0x10eda080 */
  if (!C.zf) goto L_10eda080;
  /* 10eda076 push 0 */
  push32((uint32_t)(0x0u));
  /* 10eda078 call 0x10ede4c0 */
  push32(0x10eda07du); f_10ede4c0();
  /* 10eda07d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10eda080:;
  /* 10eda080 mov eax, 1 */
  EAX = (0x1u);
L_10eda085:;
  /* 10eda085 pop ebp */
  EBP = (pop32());
  /* 10eda086 ret 0xc */
  ESPCHK(0x10ed9f50u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10eda090 (243 bytes, 86 insns) */
void f_10eda090(void) {
  FTRACE(0x10eda090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eda090 push ebp */
  push32((uint32_t)(EBP));
  /* 10eda091 mov ebp, esp */
  EBP = (ESP);
  /* 10eda093 push ecx */
  push32((uint32_t)(ECX));
  /* 10eda094 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10eda09b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda09f jne 0x10eda0b1 */
  if (!C.zf) goto L_10eda0b1;
  /* 10eda0a1 cmp dword ptr [0x10f0f4d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f4d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda0a8 jne 0x10eda0b1 */
  if (!C.zf) goto L_10eda0b1;
  /* 10eda0aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eda0ac jmp 0x10eda17d */
  goto L_10eda17d;
L_10eda0b1:;
  /* 10eda0b1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda0b5 je 0x10eda0bd */
  if (C.zf) goto L_10eda0bd;
  /* 10eda0b7 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda0bb jne 0x10eda0ff */
  if (!C.zf) goto L_10eda0ff;
L_10eda0bd:;
  /* 10eda0bd cmp dword ptr [0x10f11024], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f11024))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda0c4 je 0x10eda0db */
  if (C.zf) goto L_10eda0db;
  /* 10eda0c6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eda0c9 push eax */
  push32((uint32_t)(EAX));
  /* 10eda0ca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eda0cd push ecx */
  push32((uint32_t)(ECX));
  /* 10eda0ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eda0d1 push edx */
  push32((uint32_t)(EDX));
  /* 10eda0d2 call dword ptr [0x10f11024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f11024))), 0x10eda0d8u);
  /* 10eda0d8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10eda0db:;
  /* 10eda0db cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda0df je 0x10eda0f5 */
  if (C.zf) goto L_10eda0f5;
  /* 10eda0e1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eda0e4 push eax */
  push32((uint32_t)(EAX));
  /* 10eda0e5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eda0e8 push ecx */
  push32((uint32_t)(ECX));
  /* 10eda0e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eda0ec push edx */
  push32((uint32_t)(EDX));
  /* 10eda0ed call 0x10ed9f50 */
  push32(0x10eda0f2u); f_10ed9f50();
  /* 10eda0f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10eda0f5:;
  /* 10eda0f5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda0f9 jne 0x10eda0ff */
  if (!C.zf) goto L_10eda0ff;
  /* 10eda0fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eda0fd jmp 0x10eda17d */
  goto L_10eda17d;
L_10eda0ff:;
  /* 10eda0ff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eda102 push eax */
  push32((uint32_t)(EAX));
  /* 10eda103 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eda106 push ecx */
  push32((uint32_t)(ECX));
  /* 10eda107 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eda10a push edx */
  push32((uint32_t)(EDX));
  /* 10eda10b call 0x10ed106e */
  push32(0x10eda110u); f_10ed106e();
  /* 10eda110 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10eda113 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda117 jne 0x10eda12e */
  if (!C.zf) goto L_10eda12e;
  /* 10eda119 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda11d jne 0x10eda12e */
  if (!C.zf) goto L_10eda12e;
  /* 10eda11f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eda122 push eax */
  push32((uint32_t)(EAX));
  /* 10eda123 push 0 */
  push32((uint32_t)(0x0u));
  /* 10eda125 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eda128 push ecx */
  push32((uint32_t)(ECX));
  /* 10eda129 call 0x10ed9f50 */
  push32(0x10eda12eu); f_10ed9f50();
L_10eda12e:;
  /* 10eda12e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda132 je 0x10eda13a */
  if (C.zf) goto L_10eda13a;
  /* 10eda134 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda138 jne 0x10eda17a */
  if (!C.zf) goto L_10eda17a;
L_10eda13a:;
  /* 10eda13a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eda13d push edx */
  push32((uint32_t)(EDX));
  /* 10eda13e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eda141 push eax */
  push32((uint32_t)(EAX));
  /* 10eda142 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eda145 push ecx */
  push32((uint32_t)(ECX));
  /* 10eda146 call 0x10ed9f50 */
  push32(0x10eda14bu); f_10ed9f50();
  /* 10eda14b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eda14d jne 0x10eda156 */
  if (!C.zf) goto L_10eda156;
  /* 10eda14f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10eda156:;
  /* 10eda156 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda15a je 0x10eda17a */
  if (C.zf) goto L_10eda17a;
  /* 10eda15c cmp dword ptr [0x10f11024], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f11024))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda163 je 0x10eda17a */
  if (C.zf) goto L_10eda17a;
  /* 10eda165 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eda168 push edx */
  push32((uint32_t)(EDX));
  /* 10eda169 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eda16c push eax */
  push32((uint32_t)(EAX));
  /* 10eda16d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eda170 push ecx */
  push32((uint32_t)(ECX));
  /* 10eda171 call dword ptr [0x10f11024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f11024))), 0x10eda177u);
  /* 10eda177 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10eda17a:;
  /* 10eda17a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10eda17d:;
  /* 10eda17d mov esp, ebp */
  ESP = (EBP);
  /* 10eda17f pop ebp */
  EBP = (pop32());
  /* 10eda180 ret 0xc */
  ESPCHK(0x10eda090u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x10eda190 (58 bytes, 18 insns) */
void f_10eda190(void) {
  FTRACE(0x10eda190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eda190 push ebp */
  push32((uint32_t)(EBP));
  /* 10eda191 mov ebp, esp */
  EBP = (ESP);
  /* 10eda193 cmp dword ptr [0x10f0f4dc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f4dc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda19a je 0x10eda1ae */
  if (C.zf) goto L_10eda1ae;
  /* 10eda19c cmp dword ptr [0x10f0f4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda1a3 jne 0x10eda1b3 */
  if (!C.zf) goto L_10eda1b3;
  /* 10eda1a5 cmp dword ptr [0x10f0f4e0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f4e0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda1ac jne 0x10eda1b3 */
  if (!C.zf) goto L_10eda1b3;
L_10eda1ae:;
  /* 10eda1ae call 0x10edf760 */
  push32(0x10eda1b3u); f_10edf760();
L_10eda1b3:;
  /* 10eda1b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eda1b6 push eax */
  push32((uint32_t)(EAX));
  /* 10eda1b7 call 0x10edf7b0 */
  push32(0x10eda1bcu); f_10edf7b0();
  /* 10eda1bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eda1bf push 0xff */
  push32((uint32_t)(0xffu));
  /* 10eda1c4 call dword ptr [0x10f0cdbc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f0cdbc))), 0x10eda1cau);
  /* 10eda1ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eda1cd pop ebp */
  EBP = (pop32());
  /* 10eda1ce ret  */
  ESPCHK(0x10eda190u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1d0 @ 0x10eda1d0 (11 bytes, 5 insns) */
void f_10eda1d0(void) {
  FTRACE(0x10eda1d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eda1d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10eda1d1 mov ebp, esp */
  EBP = (ESP);
  /* 10eda1d3 call dword ptr [0x10f1240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1240c))), 0x10eda1d9u);
  /* 10eda1d9 pop ebp */
  EBP = (pop32());
  /* 10eda1da ret  */
  ESPCHK(0x10eda1d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1e0 @ 0x10eda1e0 (87 bytes, 30 insns) */
void f_10eda1e0(void) {
  FTRACE(0x10eda1e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eda1e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10eda1e1 mov ebp, esp */
  EBP = (ESP);
  /* 10eda1e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10eda1e4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda1e8 jl 0x10eda1f0 */
  if ((C.sf!=C.of)) goto L_10eda1f0;
  /* 10eda1ea cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda1ee jl 0x10eda1f5 */
  if ((C.sf!=C.of)) goto L_10eda1f5;
L_10eda1f0:;
  /* 10eda1f0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10eda1f3 jmp 0x10eda233 */
  goto L_10eda233;
L_10eda1f5:;
  /* 10eda1f5 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda1f9 jne 0x10eda207 */
  if (!C.zf) goto L_10eda207;
  /* 10eda1fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eda1fe mov eax, dword ptr [eax*4 + 0x10f0cdc4] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10f0cdc4)));
  /* 10eda205 jmp 0x10eda233 */
  goto L_10eda233;
L_10eda207:;
  /* 10eda207 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eda20a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 10eda20d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10eda20f je 0x10eda216 */
  if (C.zf) goto L_10eda216;
  /* 10eda211 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10eda214 jmp 0x10eda233 */
  goto L_10eda233;
L_10eda216:;
  /* 10eda216 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eda219 mov eax, dword ptr [edx*4 + 0x10f0cdc4] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10f0cdc4)));
  /* 10eda220 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10eda223 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eda226 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eda229 mov dword ptr [ecx*4 + 0x10f0cdc4], edx */
  w32((uint32_t)(ECX*4 + 0x10f0cdc4), (EDX));
  /* 10eda230 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10eda233:;
  /* 10eda233 mov esp, ebp */
  ESP = (EBP);
  /* 10eda235 pop ebp */
  EBP = (pop32());
  /* 10eda236 ret  */
  ESPCHK(0x10eda1e0u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x10eda240 (126 bytes, 38 insns) */
void f_10eda240(void) {
  FTRACE(0x10eda240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eda240 push ebp */
  push32((uint32_t)(EBP));
  /* 10eda241 mov ebp, esp */
  EBP = (ESP);
  /* 10eda243 push ecx */
  push32((uint32_t)(ECX));
  /* 10eda244 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda248 jl 0x10eda250 */
  if ((C.sf!=C.of)) goto L_10eda250;
  /* 10eda24a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda24e jl 0x10eda257 */
  if ((C.sf!=C.of)) goto L_10eda257;
L_10eda250:;
  /* 10eda250 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 10eda255 jmp 0x10eda2ba */
  goto L_10eda2ba;
L_10eda257:;
  /* 10eda257 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda25b jne 0x10eda269 */
  if (!C.zf) goto L_10eda269;
  /* 10eda25d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eda260 mov eax, dword ptr [eax*4 + 0x10f0cdd0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10f0cdd0)));
  /* 10eda267 jmp 0x10eda2ba */
  goto L_10eda2ba;
L_10eda269:;
  /* 10eda269 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eda26c mov edx, dword ptr [ecx*4 + 0x10f0cdd0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10f0cdd0)));
  /* 10eda273 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10eda276 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda27a jne 0x10eda290 */
  if (!C.zf) goto L_10eda290;
  /* 10eda27c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10eda27e call dword ptr [0x10f12410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12410))), 0x10eda284u);
  /* 10eda284 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eda287 mov dword ptr [ecx*4 + 0x10f0cdd0], eax */
  w32((uint32_t)(ECX*4 + 0x10f0cdd0), (EAX));
  /* 10eda28e jmp 0x10eda2b7 */
  goto L_10eda2b7;
L_10eda290:;
  /* 10eda290 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda294 jne 0x10eda2aa */
  if (!C.zf) goto L_10eda2aa;
  /* 10eda296 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10eda298 call dword ptr [0x10f12410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12410))), 0x10eda29eu);
  /* 10eda29e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eda2a1 mov dword ptr [edx*4 + 0x10f0cdd0], eax */
  w32((uint32_t)(EDX*4 + 0x10f0cdd0), (EAX));
  /* 10eda2a8 jmp 0x10eda2b7 */
  goto L_10eda2b7;
L_10eda2aa:;
  /* 10eda2aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eda2ad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eda2b0 mov dword ptr [eax*4 + 0x10f0cdd0], ecx */
  w32((uint32_t)(EAX*4 + 0x10f0cdd0), (ECX));
L_10eda2b7:;
  /* 10eda2b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10eda2ba:;
  /* 10eda2ba mov esp, ebp */
  ESP = (EBP);
  /* 10eda2bc pop ebp */
  EBP = (pop32());
  /* 10eda2bd ret  */
  ESPCHK(0x10eda240u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a2c0 @ 0x10eda2c0 (28 bytes, 11 insns) */
void f_10eda2c0(void) {
  FTRACE(0x10eda2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eda2c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10eda2c1 mov ebp, esp */
  EBP = (ESP);
  /* 10eda2c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10eda2c4 mov eax, dword ptr [0x10f11008] */
  EAX = (r32((uint32_t)(0x10f11008)));
  /* 10eda2c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10eda2cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eda2cf mov dword ptr [0x10f11008], ecx */
  w32((uint32_t)(0x10f11008), (ECX));
  /* 10eda2d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eda2d8 mov esp, ebp */
  ESP = (EBP);
  /* 10eda2da pop ebp */
  EBP = (pop32());
  /* 10eda2db ret  */
  ESPCHK(0x10eda2c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a2e0 @ 0x10eda2e0 (912 bytes, 248 insns) */
void f_10eda2e0(void) {
  FTRACE(0x10eda2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eda2e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10eda2e1 mov ebp, esp */
  EBP = (ESP);
  /* 10eda2e3 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 10eda2e8 call 0x10ee0020 */
  push32(0x10eda2edu); f_10ee0020();
  /* 10eda2ed push edi */
  push32((uint32_t)(EDI));
  /* 10eda2ee mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 10eda2f5 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10eda2fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eda2fc lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 10eda302 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10eda304 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10eda306 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10eda307 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 10eda30e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10eda313 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eda315 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 10eda31b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10eda31d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10eda31f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10eda320 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 10eda327 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10eda32c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eda32e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 10eda334 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10eda336 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10eda338 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10eda339 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 10eda33c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 10eda342 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda346 jl 0x10eda34e */
  if ((C.sf!=C.of)) goto L_10eda34e;
  /* 10eda348 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda34c jl 0x10eda356 */
  if ((C.sf!=C.of)) goto L_10eda356;
L_10eda34e:;
  /* 10eda34e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10eda351 jmp 0x10eda66b */
  goto L_10eda66b;
L_10eda356:;
  /* 10eda356 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda35a jne 0x10eda400 */
  if (!C.zf) goto L_10eda400;
  /* 10eda360 push 0x10f0cdc0 */
  push32((uint32_t)(0x10f0cdc0u));
  /* 10eda365 call dword ptr [0x10f12428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12428))), 0x10eda36bu);
  /* 10eda36b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eda36d jle 0x10eda400 */
  if ((C.zf||C.sf!=C.of)) goto L_10eda400;
  /* 10eda373 cmp dword ptr [0x10f0f4e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f4e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda37a jne 0x10eda3be */
  if (!C.zf) goto L_10eda3be;
  /* 10eda37c push 0x10f09374 */
  push32((uint32_t)(0x10f09374u));
  /* 10eda381 call dword ptr [0x10f12424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12424))), 0x10eda387u);
  /* 10eda387 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 10eda38d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda394 je 0x10eda3b6 */
  if (C.zf) goto L_10eda3b6;
  /* 10eda396 push 0x10f09368 */
  push32((uint32_t)(0x10f09368u));
  /* 10eda39b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 10eda3a1 push ecx */
  push32((uint32_t)(ECX));
  /* 10eda3a2 call dword ptr [0x10f12314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12314))), 0x10eda3a8u);
  /* 10eda3a8 mov dword ptr [0x10f0f4e4], eax */
  w32((uint32_t)(0x10f0f4e4), (EAX));
  /* 10eda3ad cmp dword ptr [0x10f0f4e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f4e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda3b4 jne 0x10eda3be */
  if (!C.zf) goto L_10eda3be;
L_10eda3b6:;
  /* 10eda3b6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10eda3b9 jmp 0x10eda66b */
  goto L_10eda66b;
L_10eda3be:;
  /* 10eda3be mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eda3c1 push edx */
  push32((uint32_t)(EDX));
  /* 10eda3c2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eda3c5 push eax */
  push32((uint32_t)(EAX));
  /* 10eda3c6 push 0x10f09334 */
  push32((uint32_t)(0x10f09334u));
  /* 10eda3cb lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10eda3d1 push ecx */
  push32((uint32_t)(ECX));
  /* 10eda3d2 call dword ptr [0x10f0f4e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f0f4e4))), 0x10eda3d8u);
  /* 10eda3d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eda3db lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10eda3e1 push edx */
  push32((uint32_t)(EDX));
  /* 10eda3e2 call dword ptr [0x10f12318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12318))), 0x10eda3e8u);
  /* 10eda3e8 push 0x10f0cdc0 */
  push32((uint32_t)(0x10f0cdc0u));
  /* 10eda3ed call dword ptr [0x10f12418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12418))), 0x10eda3f3u);
  /* 10eda3f3 call 0x10eda1d0 */
  push32(0x10eda3f8u); f_10eda1d0();
  /* 10eda3f8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10eda3fb jmp 0x10eda66b */
  goto L_10eda66b;
L_10eda400:;
  /* 10eda400 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda404 je 0x10eda43d */
  if (C.zf) goto L_10eda43d;
  /* 10eda406 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 10eda40c push eax */
  push32((uint32_t)(EAX));
  /* 10eda40d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10eda410 push ecx */
  push32((uint32_t)(ECX));
  /* 10eda411 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 10eda416 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 10eda41c push edx */
  push32((uint32_t)(EDX));
  /* 10eda41d call 0x10edff20 */
  push32(0x10eda422u); f_10edff20();
  /* 10eda422 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eda425 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eda427 jge 0x10eda43d */
  if ((C.sf==C.of)) goto L_10eda43d;
  /* 10eda429 push 0x10f09308 */
  push32((uint32_t)(0x10f09308u));
  /* 10eda42e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10eda434 push eax */
  push32((uint32_t)(EAX));
  /* 10eda435 call 0x10edfe30 */
  push32(0x10eda43au); f_10edfe30();
  /* 10eda43a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10eda43d:;
  /* 10eda43d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda441 jne 0x10eda475 */
  if (!C.zf) goto L_10eda475;
  /* 10eda443 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda447 je 0x10eda455 */
  if (C.zf) goto L_10eda455;
  /* 10eda449 mov dword ptr [ebp - 0x3028], 0x10f092f4 */
  w32((uint32_t)(EBP + -0x3028), (0x10f092f4u));
  /* 10eda453 jmp 0x10eda45f */
  goto L_10eda45f;
L_10eda455:;
  /* 10eda455 mov dword ptr [ebp - 0x3028], 0x10f092e0 */
  w32((uint32_t)(EBP + -0x3028), (0x10f092e0u));
L_10eda45f:;
  /* 10eda45f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 10eda465 push ecx */
  push32((uint32_t)(ECX));
  /* 10eda466 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10eda46c push edx */
  push32((uint32_t)(EDX));
  /* 10eda46d call 0x10edfe30 */
  push32(0x10eda472u); f_10edfe30();
  /* 10eda472 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10eda475:;
  /* 10eda475 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10eda47b push eax */
  push32((uint32_t)(EAX));
  /* 10eda47c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10eda482 push ecx */
  push32((uint32_t)(ECX));
  /* 10eda483 call 0x10edfe40 */
  push32(0x10eda488u); f_10edfe40();
  /* 10eda488 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eda48b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda48f jne 0x10eda4ca */
  if (!C.zf) goto L_10eda4ca;
  /* 10eda491 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eda494 mov eax, dword ptr [edx*4 + 0x10f0cdc4] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10f0cdc4)));
  /* 10eda49b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10eda49e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eda4a0 je 0x10eda4b6 */
  if (C.zf) goto L_10eda4b6;
  /* 10eda4a2 push 0x10f092dc */
  push32((uint32_t)(0x10f092dcu));
  /* 10eda4a7 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10eda4ad push ecx */
  push32((uint32_t)(ECX));
  /* 10eda4ae call 0x10edfe40 */
  push32(0x10eda4b3u); f_10edfe40();
  /* 10eda4b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10eda4b6:;
  /* 10eda4b6 push 0x10f092d8 */
  push32((uint32_t)(0x10f092d8u));
  /* 10eda4bb lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10eda4c1 push edx */
  push32((uint32_t)(EDX));
  /* 10eda4c2 call 0x10edfe40 */
  push32(0x10eda4c7u); f_10edfe40();
  /* 10eda4c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10eda4ca:;
  /* 10eda4ca cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda4ce je 0x10eda512 */
  if (C.zf) goto L_10eda512;
  /* 10eda4d0 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 10eda4d6 push eax */
  push32((uint32_t)(EAX));
  /* 10eda4d7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eda4da push ecx */
  push32((uint32_t)(ECX));
  /* 10eda4db mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eda4de push edx */
  push32((uint32_t)(EDX));
  /* 10eda4df push 0x10f092cc */
  push32((uint32_t)(0x10f092ccu));
  /* 10eda4e4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10eda4e9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10eda4ef push eax */
  push32((uint32_t)(EAX));
  /* 10eda4f0 call 0x10edfd30 */
  push32(0x10eda4f5u); f_10edfd30();
  /* 10eda4f5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eda4f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eda4fa jge 0x10eda510 */
  if ((C.sf==C.of)) goto L_10eda510;
  /* 10eda4fc push 0x10f09308 */
  push32((uint32_t)(0x10f09308u));
  /* 10eda501 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10eda507 push ecx */
  push32((uint32_t)(ECX));
  /* 10eda508 call 0x10edfe30 */
  push32(0x10eda50du); f_10edfe30();
  /* 10eda50d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10eda510:;
  /* 10eda510 jmp 0x10eda528 */
  goto L_10eda528;
L_10eda512:;
  /* 10eda512 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10eda518 push edx */
  push32((uint32_t)(EDX));
  /* 10eda519 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10eda51f push eax */
  push32((uint32_t)(EAX));
  /* 10eda520 call 0x10edfe30 */
  push32(0x10eda525u); f_10edfe30();
  /* 10eda525 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10eda528:;
  /* 10eda528 cmp dword ptr [0x10f11008], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f11008))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda52f je 0x10eda56c */
  if (C.zf) goto L_10eda56c;
  /* 10eda531 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 10eda537 push ecx */
  push32((uint32_t)(ECX));
  /* 10eda538 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10eda53e push edx */
  push32((uint32_t)(EDX));
  /* 10eda53f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eda542 push eax */
  push32((uint32_t)(EAX));
  /* 10eda543 call dword ptr [0x10f11008] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f11008))), 0x10eda549u);
  /* 10eda549 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eda54c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eda54e je 0x10eda56c */
  if (C.zf) goto L_10eda56c;
  /* 10eda550 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda554 jne 0x10eda561 */
  if (!C.zf) goto L_10eda561;
  /* 10eda556 push 0x10f0cdc0 */
  push32((uint32_t)(0x10f0cdc0u));
  /* 10eda55b call dword ptr [0x10f12418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12418))), 0x10eda561u);
L_10eda561:;
  /* 10eda561 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10eda567 jmp 0x10eda66b */
  goto L_10eda66b;
L_10eda56c:;
  /* 10eda56c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eda56f mov edx, dword ptr [ecx*4 + 0x10f0cdc4] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10f0cdc4)));
  /* 10eda576 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10eda579 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10eda57b je 0x10eda5bb */
  if (C.zf) goto L_10eda5bb;
  /* 10eda57d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eda580 cmp dword ptr [eax*4 + 0x10f0cdd0], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10f0cdd0))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda588 je 0x10eda5bb */
  if (C.zf) goto L_10eda5bb;
  /* 10eda58a push 0 */
  push32((uint32_t)(0x0u));
  /* 10eda58c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 10eda592 push ecx */
  push32((uint32_t)(ECX));
  /* 10eda593 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10eda599 push edx */
  push32((uint32_t)(EDX));
  /* 10eda59a call 0x10edfcb0 */
  push32(0x10eda59fu); f_10edfcb0();
  /* 10eda59f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eda5a2 push eax */
  push32((uint32_t)(EAX));
  /* 10eda5a3 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10eda5a9 push eax */
  push32((uint32_t)(EAX));
  /* 10eda5aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eda5ad mov edx, dword ptr [ecx*4 + 0x10f0cdd0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10f0cdd0)));
  /* 10eda5b4 push edx */
  push32((uint32_t)(EDX));
  /* 10eda5b5 call dword ptr [0x10f12414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12414))), 0x10eda5bbu);
L_10eda5bb:;
  /* 10eda5bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eda5be mov ecx, dword ptr [eax*4 + 0x10f0cdc4] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10f0cdc4)));
  /* 10eda5c5 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10eda5c8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10eda5ca je 0x10eda5d9 */
  if (C.zf) goto L_10eda5d9;
  /* 10eda5cc lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10eda5d2 push edx */
  push32((uint32_t)(EDX));
  /* 10eda5d3 call dword ptr [0x10f12318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12318))), 0x10eda5d9u);
L_10eda5d9:;
  /* 10eda5d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eda5dc mov ecx, dword ptr [eax*4 + 0x10f0cdc4] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10f0cdc4)));
  /* 10eda5e3 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10eda5e6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10eda5e8 je 0x10eda658 */
  if (C.zf) goto L_10eda658;
  /* 10eda5ea cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda5ee je 0x10eda60d */
  if (C.zf) goto L_10eda60d;
  /* 10eda5f0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10eda5f2 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 10eda5f8 push edx */
  push32((uint32_t)(EDX));
  /* 10eda5f9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eda5fc push eax */
  push32((uint32_t)(EAX));
  /* 10eda5fd call 0x10edf9c0 */
  push32(0x10eda602u); f_10edf9c0();
  /* 10eda602 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eda605 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 10eda60b jmp 0x10eda617 */
  goto L_10eda617;
L_10eda60d:;
  /* 10eda60d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_10eda617:;
  /* 10eda617 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 10eda61d push ecx */
  push32((uint32_t)(ECX));
  /* 10eda61e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eda621 push edx */
  push32((uint32_t)(EDX));
  /* 10eda622 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 10eda628 push eax */
  push32((uint32_t)(EAX));
  /* 10eda629 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eda62c push ecx */
  push32((uint32_t)(ECX));
  /* 10eda62d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eda630 push edx */
  push32((uint32_t)(EDX));
  /* 10eda631 call 0x10eda670 */
  push32(0x10eda636u); f_10eda670();
  /* 10eda636 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eda639 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 10eda63f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda643 jne 0x10eda650 */
  if (!C.zf) goto L_10eda650;
  /* 10eda645 push 0x10f0cdc0 */
  push32((uint32_t)(0x10f0cdc0u));
  /* 10eda64a call dword ptr [0x10f12418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12418))), 0x10eda650u);
L_10eda650:;
  /* 10eda650 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10eda656 jmp 0x10eda66b */
  goto L_10eda66b;
L_10eda658:;
  /* 10eda658 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda65c jne 0x10eda669 */
  if (!C.zf) goto L_10eda669;
  /* 10eda65e push 0x10f0cdc0 */
  push32((uint32_t)(0x10f0cdc0u));
  /* 10eda663 call dword ptr [0x10f12418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12418))), 0x10eda669u);
L_10eda669:;
  /* 10eda669 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10eda66b:;
  /* 10eda66b pop edi */
  EDI = (pop32());
  /* 10eda66c mov esp, ebp */
  ESP = (EBP);
  /* 10eda66e pop ebp */
  EBP = (pop32());
  /* 10eda66f ret  */
  ESPCHK(0x10eda2e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a670 @ 0x10eda670 (780 bytes, 197 insns) */
void f_10eda670(void) {
  FTRACE(0x10eda670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eda670 push ebp */
  push32((uint32_t)(EBP));
  /* 10eda671 mov ebp, esp */
  EBP = (ESP);
  /* 10eda673 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 10eda678 call 0x10ee0020 */
  push32(0x10eda67du); f_10ee0020();
L_10eda67d:;
  /* 10eda67d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda681 jne 0x10eda6a8 */
  if (!C.zf) goto L_10eda6a8;
  /* 10eda683 push 0x10f094c4 */
  push32((uint32_t)(0x10f094c4u));
  /* 10eda688 push 0 */
  push32((uint32_t)(0x0u));
  /* 10eda68a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 10eda68f push 0x10f094b8 */
  push32((uint32_t)(0x10f094b8u));
  /* 10eda694 push 2 */
  push32((uint32_t)(0x2u));
  /* 10eda696 call 0x10eda2e0 */
  push32(0x10eda69bu); f_10eda2e0();
  /* 10eda69b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eda69e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda6a1 jne 0x10eda6a8 */
  if (!C.zf) goto L_10eda6a8;
  /* 10eda6a3 call 0x10eda1d0 */
  push32(0x10eda6a8u); f_10eda1d0();
L_10eda6a8:;
  /* 10eda6a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eda6aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eda6ac jne 0x10eda67d */
  if (!C.zf) goto L_10eda67d;
  /* 10eda6ae push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10eda6b3 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 10eda6b9 push ecx */
  push32((uint32_t)(ECX));
  /* 10eda6ba push 0 */
  push32((uint32_t)(0x0u));
  /* 10eda6bc call dword ptr [0x10f1242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1242c))), 0x10eda6c2u);
  /* 10eda6c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eda6c4 jne 0x10eda6da */
  if (!C.zf) goto L_10eda6da;
  /* 10eda6c6 push 0x10f094a0 */
  push32((uint32_t)(0x10f094a0u));
  /* 10eda6cb lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 10eda6d1 push edx */
  push32((uint32_t)(EDX));
  /* 10eda6d2 call 0x10edfe30 */
  push32(0x10eda6d7u); f_10edfe30();
  /* 10eda6d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10eda6da:;
  /* 10eda6da lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 10eda6e0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10eda6e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eda6e6 push ecx */
  push32((uint32_t)(ECX));
  /* 10eda6e7 call 0x10edfcb0 */
  push32(0x10eda6ecu); f_10edfcb0();
  /* 10eda6ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eda6ef cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda6f2 jbe 0x10eda71d */
  if ((C.cf||C.zf)) goto L_10eda71d;
  /* 10eda6f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eda6f7 push edx */
  push32((uint32_t)(EDX));
  /* 10eda6f8 call 0x10edfcb0 */
  push32(0x10eda6fdu); f_10edfcb0();
  /* 10eda6fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eda700 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eda703 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10eda707 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10eda70a push 3 */
  push32((uint32_t)(0x3u));
  /* 10eda70c push 0x10f0949c */
  push32((uint32_t)(0x10f0949cu));
  /* 10eda711 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eda714 push eax */
  push32((uint32_t)(EAX));
  /* 10eda715 call 0x10ee06a0 */
  push32(0x10eda71au); f_10ee06a0();
  /* 10eda71a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10eda71d:;
  /* 10eda71d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eda720 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 10eda726 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda72d je 0x10eda778 */
  if (C.zf) goto L_10eda778;
  /* 10eda72f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10eda735 push edx */
  push32((uint32_t)(EDX));
  /* 10eda736 call 0x10edfcb0 */
  push32(0x10eda73bu); f_10edfcb0();
  /* 10eda73b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eda73e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda741 jbe 0x10eda778 */
  if ((C.cf||C.zf)) goto L_10eda778;
  /* 10eda743 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10eda749 push eax */
  push32((uint32_t)(EAX));
  /* 10eda74a call 0x10edfcb0 */
  push32(0x10eda74fu); f_10edfcb0();
  /* 10eda74f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eda752 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10eda758 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10eda75c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 10eda762 push 3 */
  push32((uint32_t)(0x3u));
  /* 10eda764 push 0x10f0949c */
  push32((uint32_t)(0x10f0949cu));
  /* 10eda769 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10eda76f push eax */
  push32((uint32_t)(EAX));
  /* 10eda770 call 0x10ee06a0 */
  push32(0x10eda775u); f_10ee06a0();
  /* 10eda775 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10eda778:;
  /* 10eda778 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda77c jne 0x10eda78a */
  if (!C.zf) goto L_10eda78a;
  /* 10eda77e mov dword ptr [ebp - 0x1114], 0x10f09428 */
  w32((uint32_t)(EBP + -0x1114), (0x10f09428u));
  /* 10eda788 jmp 0x10eda794 */
  goto L_10eda794;
L_10eda78a:;
  /* 10eda78a mov dword ptr [ebp - 0x1114], 0x10f09188 */
  w32((uint32_t)(EBP + -0x1114), (0x10f09188u));
L_10eda794:;
  /* 10eda794 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10eda797 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10eda79a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10eda79c je 0x10eda7a9 */
  if (C.zf) goto L_10eda7a9;
  /* 10eda79e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10eda7a1 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 10eda7a7 jmp 0x10eda7b3 */
  goto L_10eda7b3;
L_10eda7a9:;
  /* 10eda7a9 mov dword ptr [ebp - 0x1118], 0x10f09188 */
  w32((uint32_t)(EBP + -0x1118), (0x10f09188u));
L_10eda7b3:;
  /* 10eda7b3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10eda7b6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10eda7b9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10eda7bb je 0x10eda7cf */
  if (C.zf) goto L_10eda7cf;
  /* 10eda7bd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda7c1 jne 0x10eda7cf */
  if (!C.zf) goto L_10eda7cf;
  /* 10eda7c3 mov dword ptr [ebp - 0x111c], 0x10f09418 */
  w32((uint32_t)(EBP + -0x111c), (0x10f09418u));
  /* 10eda7cd jmp 0x10eda7d9 */
  goto L_10eda7d9;
L_10eda7cf:;
  /* 10eda7cf mov dword ptr [ebp - 0x111c], 0x10f09188 */
  w32((uint32_t)(EBP + -0x111c), (0x10f09188u));
L_10eda7d9:;
  /* 10eda7d9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10eda7dc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10eda7df test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10eda7e1 je 0x10eda7ef */
  if (C.zf) goto L_10eda7ef;
  /* 10eda7e3 mov dword ptr [ebp - 0x1120], 0x10f09414 */
  w32((uint32_t)(EBP + -0x1120), (0x10f09414u));
  /* 10eda7ed jmp 0x10eda7f9 */
  goto L_10eda7f9;
L_10eda7ef:;
  /* 10eda7ef mov dword ptr [ebp - 0x1120], 0x10f09188 */
  w32((uint32_t)(EBP + -0x1120), (0x10f09188u));
L_10eda7f9:;
  /* 10eda7f9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda7fd je 0x10eda80a */
  if (C.zf) goto L_10eda80a;
  /* 10eda7ff mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eda802 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 10eda808 jmp 0x10eda814 */
  goto L_10eda814;
L_10eda80a:;
  /* 10eda80a mov dword ptr [ebp - 0x1124], 0x10f09188 */
  w32((uint32_t)(EBP + -0x1124), (0x10f09188u));
L_10eda814:;
  /* 10eda814 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda818 je 0x10eda826 */
  if (C.zf) goto L_10eda826;
  /* 10eda81a mov dword ptr [ebp - 0x1128], 0x10f0940c */
  w32((uint32_t)(EBP + -0x1128), (0x10f0940cu));
  /* 10eda824 jmp 0x10eda830 */
  goto L_10eda830;
L_10eda826:;
  /* 10eda826 mov dword ptr [ebp - 0x1128], 0x10f09188 */
  w32((uint32_t)(EBP + -0x1128), (0x10f09188u));
L_10eda830:;
  /* 10eda830 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda834 je 0x10eda841 */
  if (C.zf) goto L_10eda841;
  /* 10eda836 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eda839 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 10eda83f jmp 0x10eda84b */
  goto L_10eda84b;
L_10eda841:;
  /* 10eda841 mov dword ptr [ebp - 0x112c], 0x10f09188 */
  w32((uint32_t)(EBP + -0x112c), (0x10f09188u));
L_10eda84b:;
  /* 10eda84b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda84f je 0x10eda85d */
  if (C.zf) goto L_10eda85d;
  /* 10eda851 mov dword ptr [ebp - 0x1130], 0x10f09404 */
  w32((uint32_t)(EBP + -0x1130), (0x10f09404u));
  /* 10eda85b jmp 0x10eda867 */
  goto L_10eda867;
L_10eda85d:;
  /* 10eda85d mov dword ptr [ebp - 0x1130], 0x10f09188 */
  w32((uint32_t)(EBP + -0x1130), (0x10f09188u));
L_10eda867:;
  /* 10eda867 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda86e je 0x10eda87e */
  if (C.zf) goto L_10eda87e;
  /* 10eda870 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10eda876 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 10eda87c jmp 0x10eda888 */
  goto L_10eda888;
L_10eda87e:;
  /* 10eda87e mov dword ptr [ebp - 0x1134], 0x10f09188 */
  w32((uint32_t)(EBP + -0x1134), (0x10f09188u));
L_10eda888:;
  /* 10eda888 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda88f je 0x10eda89d */
  if (C.zf) goto L_10eda89d;
  /* 10eda891 mov dword ptr [ebp - 0x1138], 0x10f093f8 */
  w32((uint32_t)(EBP + -0x1138), (0x10f093f8u));
  /* 10eda89b jmp 0x10eda8a7 */
  goto L_10eda8a7;
L_10eda89d:;
  /* 10eda89d mov dword ptr [ebp - 0x1138], 0x10f09188 */
  w32((uint32_t)(EBP + -0x1138), (0x10f09188u));
L_10eda8a7:;
  /* 10eda8a7 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 10eda8ad push edx */
  push32((uint32_t)(EDX));
  /* 10eda8ae mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 10eda8b4 push eax */
  push32((uint32_t)(EAX));
  /* 10eda8b5 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 10eda8bb push ecx */
  push32((uint32_t)(ECX));
  /* 10eda8bc mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 10eda8c2 push edx */
  push32((uint32_t)(EDX));
  /* 10eda8c3 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 10eda8c9 push eax */
  push32((uint32_t)(EAX));
  /* 10eda8ca mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 10eda8d0 push ecx */
  push32((uint32_t)(ECX));
  /* 10eda8d1 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 10eda8d7 push edx */
  push32((uint32_t)(EDX));
  /* 10eda8d8 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 10eda8de push eax */
  push32((uint32_t)(EAX));
  /* 10eda8df mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 10eda8e5 push ecx */
  push32((uint32_t)(ECX));
  /* 10eda8e6 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 10eda8ec push edx */
  push32((uint32_t)(EDX));
  /* 10eda8ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eda8f0 push eax */
  push32((uint32_t)(EAX));
  /* 10eda8f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eda8f4 mov edx, dword ptr [ecx*4 + 0x10f0cddc] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10f0cddc)));
  /* 10eda8fb push edx */
  push32((uint32_t)(EDX));
  /* 10eda8fc push 0x10f093a4 */
  push32((uint32_t)(0x10f093a4u));
  /* 10eda901 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10eda906 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 10eda90c push eax */
  push32((uint32_t)(EAX));
  /* 10eda90d call 0x10edfd30 */
  push32(0x10eda912u); f_10edfd30();
  /* 10eda912 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eda915 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eda917 jge 0x10eda92d */
  if ((C.sf==C.of)) goto L_10eda92d;
  /* 10eda919 push 0x10f09308 */
  push32((uint32_t)(0x10f09308u));
  /* 10eda91e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 10eda924 push ecx */
  push32((uint32_t)(ECX));
  /* 10eda925 call 0x10edfe30 */
  push32(0x10eda92au); f_10edfe30();
  /* 10eda92a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10eda92d:;
  /* 10eda92d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 10eda932 push 0x10f09380 */
  push32((uint32_t)(0x10f09380u));
  /* 10eda937 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 10eda93d push edx */
  push32((uint32_t)(EDX));
  /* 10eda93e call 0x10ee05e0 */
  push32(0x10eda943u); f_10ee05e0();
  /* 10eda943 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eda946 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 10eda94c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda953 jne 0x10eda966 */
  if (!C.zf) goto L_10eda966;
  /* 10eda955 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10eda957 call 0x10ee0320 */
  push32(0x10eda95cu); f_10ee0320();
  /* 10eda95c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eda95f push 3 */
  push32((uint32_t)(0x3u));
  /* 10eda961 call 0x10ede790 */
  push32(0x10eda966u); f_10ede790();
L_10eda966:;
  /* 10eda966 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eda96d jne 0x10eda976 */
  if (!C.zf) goto L_10eda976;
  /* 10eda96f mov eax, 1 */
  EAX = (0x1u);
  /* 10eda974 jmp 0x10eda978 */
  goto L_10eda978;
L_10eda976:;
  /* 10eda976 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10eda978:;
  /* 10eda978 mov esp, ebp */
  ESP = (EBP);
  /* 10eda97a pop ebp */
  EBP = (pop32());
  /* 10eda97b ret  */
  ESPCHK(0x10eda670u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab7c @ 0x10edab7c (25 bytes, 7 insns) */
void f_10edab7c(void) {
  FTRACE(0x10edab7cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edab7c test eax, 0x80000 */
  { uint32_t _r=(EAX)&(0x80000u); fl_logic(_r,32); }
  /* 10edab81 je 0x10edab89 */
  if (C.zf) goto L_10edab89;
  /* 10edab83 mov eax, 7 */
  EAX = (0x7u);
  /* 10edab88 ret  */
  ESPCHK(0x10edab7cu, _esp0);
  ESP += 4; return;
L_10edab89:;
  /* 10edab89 fadd qword ptr [0x10f094e0] */
  FPU_ST(0) = FPU_ST(0) + (rf64((uint32_t)(0x10f094e0)));
  /* 10edab8f mov eax, 1 */
  EAX = (0x1u);
  /* 10edab94 ret  */
  ESPCHK(0x10edab7cu, _esp0);
  ESP += 4; return;
}

/* __fload_withFB @ 0x10edab95 (67 bytes, 21 insns) */
void f_10edab95(void) {
  FTRACE(0x10edab95u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edab95 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10edab98 and eax, 0x7ff00000 */
  { uint32_t _r=(EAX)&(0x7ff00000u); EAX = (_r); fl_logic(_r,32); }
  /* 10edab9d cmp eax, 0x7ff00000 */
  { uint32_t _a=(EAX),_b=(0x7ff00000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edaba2 je 0x10edaba7 */
  if (C.zf) goto L_10edaba7;
  /* 10edaba4 fld qword ptr [edx] */
  fpu_push(rf64((uint32_t)(EDX)));
  /* 10edaba6 ret  */
  ESPCHK(0x10edab95u, _esp0);
  ESP += 4; return;
L_10edaba7:;
  /* 10edaba7 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10edabaa sub esp, 0xa */
  { uint32_t _a=(ESP),_b=(0xau),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edabad or eax, 0x7fff0000 */
  { uint32_t _r=(EAX)|(0x7fff0000u); EAX = (_r); fl_logic(_r,32); }
  /* 10edabb2 mov dword ptr [esp + 6], eax */
  w32((uint32_t)(ESP + 0x6), (EAX));
  /* 10edabb6 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10edabb9 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10edabbb shld eax, ecx, 0xb */
  EAX = (sh_shld((uint32_t)(EAX),(uint32_t)(ECX),(0xbu)&0x1f,32));
  /* 10edabbf shl ecx, 0xb */
  ECX = (sh_shl((uint32_t)(ECX), (0xbu)&0x1f, 32));
  /* 10edabc2 mov dword ptr [esp + 4], eax */
  w32((uint32_t)(ESP + 0x4), (EAX));
  /* 10edabc6 mov dword ptr [esp], ecx */
  w32((uint32_t)(ESP), (ECX));
  /* 10edabc9 fld xword ptr [esp] */
  fpu_push(rf80((uint32_t)(ESP)));
  /* 10edabcc add esp, 0xa */
  { uint32_t _a=(ESP),_b=(0xau),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edabcf test eax, 0 */
  { uint32_t _r=(EAX)&(0x0u); fl_logic(_r,32); }
  /* 10edabd4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10edabd7 ret  */
  ESPCHK(0x10edab95u, _esp0);
  ESP += 4; return;
}

/* FUN_1000abd8 @ 0x10edabd8 (22 bytes, 7 insns) */
void f_10edabd8(void) {
  FTRACE(0x10edabd8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edabd8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10edabdc and eax, 0x7ff00000 */
  { uint32_t _r=(EAX)&(0x7ff00000u); EAX = (_r); fl_logic(_r,32); }
  /* 10edabe1 cmp eax, 0x7ff00000 */
  { uint32_t _a=(EAX),_b=(0x7ff00000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edabe6 je 0x10edabe9 */
  if (C.zf) goto L_10edabe9;
  /* 10edabe8 ret  */
  ESPCHK(0x10edabd8u, _esp0);
  ESP += 4; return;
L_10edabe9:;
  /* 10edabe9 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10edabed ret  */
  ESPCHK(0x10edabd8u, _esp0);
  ESP += 4; return;
}

/* __math_exit @ 0x10edabfb (42 bytes, 16 insns) */
void f_10edabfb(void) {
  FTRACE(0x10edabfbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edabfb mov ax, word ptr [esp] */
  AX = (r16((uint32_t)(ESP)));
  /* 10edabff cmp ax, 0x27f */
  { uint32_t _a=(AX),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10edac03 je 0x10edac23 */
  if (C.zf) goto L_10edac23;
  /* 10edac05 and ax, 0x20 */
  { uint32_t _r=(AX)&(0x20u); AX = (_r); fl_logic(_r,16); }
  /* 10edac09 je 0x10edac20 */
  if (C.zf) goto L_10edac20;
  /* 10edac0b wait  */
  /* wait (no observable integer/reg state) */
  /* 10edac0c fnstsw ax */
  AX = fpu_status();
  /* 10edac0e and ax, 0x20 */
  { uint32_t _r=(AX)&(0x20u); AX = (_r); fl_logic(_r,16); }
  /* 10edac12 je 0x10edac20 */
  if (C.zf) goto L_10edac20;
  /* 10edac14 mov eax, 8 */
  EAX = (0x8u);
  /* 10edac19 call 0x10edacf7 */
  push32(0x10edac1eu); f_10edacf7();
  /* 10edac1e pop edx */
  EDX = (pop32());
  /* 10edac1f ret  */
  ESPCHK(0x10edabfbu, _esp0);
  ESP += 4; return;
L_10edac20:;
  /* 10edac20 fldcw word ptr [esp] */
  C.fcw = r16((uint32_t)(ESP));
L_10edac23:;
  /* 10edac23 pop edx */
  EDX = (pop32());
  /* 10edac24 ret  */
  ESPCHK(0x10edabfbu, _esp0);
  ESP += 4; return;
}

/* FUN_1000ace0 @ 0x10edace0 (23 bytes, 9 insns) */
void f_10edace0(void) {
  FTRACE(0x10edace0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edace0 push ebp */
  push32((uint32_t)(EBP));
  /* 10edace1 mov ebp, esp */
  EBP = (ESP);
  /* 10edace3 add esp, -0x20 */
  { uint32_t _a=(ESP),_b=(0xffffffe0u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edace6 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10edace9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10edacec mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10edacef mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10edacf2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10edacf5 jmp 0x10edad00 */
  jmp_ind(0x10edad00u); return;
}

/* __startOneArgErrorHandling @ 0x10edacf7 (60 bytes, 23 insns) */
void f_10edacf7(void) {
  FTRACE(0x10edacf7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edacf7 push ebp */
  push32((uint32_t)(EBP));
  /* 10edacf8 mov ebp, esp */
  EBP = (ESP);
  /* 10edacfa add esp, -0x20 */
  { uint32_t _a=(ESP),_b=(0xffffffe0u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edacfd mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10edad00 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 10edad03 mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 10edad06 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edad09 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10edad0c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10edad0f mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10edad12 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10edad15 lea ecx, [ebp - 0x20] */
  ECX = ((uint32_t)(EBP + -0x20));
  /* 10edad18 push eax */
  push32((uint32_t)(EAX));
  /* 10edad19 push ecx */
  push32((uint32_t)(ECX));
  /* 10edad1a push edx */
  push32((uint32_t)(EDX));
  /* 10edad1b call 0x10ee07a0 */
  push32(0x10edad20u); f_10ee07a0();
  /* 10edad20 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edad23 fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
  /* 10edad26 cmp word ptr [ebp + 8], 0x27f */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10edad2c je 0x10edad31 */
  if (C.zf) goto L_10edad31;
  /* 10edad2e fldcw word ptr [ebp + 8] */
  C.fcw = r16((uint32_t)(EBP + 0x8));
L_10edad31:;
  /* 10edad31 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10edad32 ret  */
  ESPCHK(0x10edacf7u, _esp0);
  ESP += 4; return;
}

/* __setdefaultprecision @ 0x10edad40 (23 bytes, 8 insns) */
void f_10edad40(void) {
  FTRACE(0x10edad40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edad40 push ebp */
  push32((uint32_t)(EBP));
  /* 10edad41 mov ebp, esp */
  EBP = (ESP);
  /* 10edad43 push 0x30000 */
  push32((uint32_t)(0x30000u));
  /* 10edad48 push 0x10000 */
  push32((uint32_t)(0x10000u));
  /* 10edad4d call 0x10ee09b0 */
  push32(0x10edad52u); f_10ee09b0();
  /* 10edad52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edad55 pop ebp */
  EBP = (pop32());
  /* 10edad56 ret  */
  ESPCHK(0x10edad40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ad60 @ 0x10edad60 (94 bytes, 30 insns) */
void f_10edad60(void) {
  FTRACE(0x10edad60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edad60 push ebp */
  push32((uint32_t)(EBP));
  /* 10edad61 mov ebp, esp */
  EBP = (ESP);
  /* 10edad63 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edad66 push ebx */
  push32((uint32_t)(EBX));
  /* 10edad67 push esi */
  push32((uint32_t)(ESI));
  /* 10edad68 push edi */
  push32((uint32_t)(EDI));
  /* 10edad69 mov dword ptr [ebp - 0x18], 0x80000000 */
  w32((uint32_t)(EBP + -0x18), (0x80000000u));
  /* 10edad70 mov dword ptr [ebp - 0x14], 0x4147ffff */
  w32((uint32_t)(EBP + -0x14), (0x4147ffffu));
  /* 10edad77 mov dword ptr [ebp - 8], 0xc0000000 */
  w32((uint32_t)(EBP + -0x8), (0xc0000000u));
  /* 10edad7e mov dword ptr [ebp - 4], 0x4150017e */
  w32((uint32_t)(EBP + -0x4), (0x4150017eu));
  /* 10edad85 fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
  /* 10edad88 fdiv qword ptr [ebp - 0x18] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(EBP + -0x18)));
  /* 10edad8b fmul qword ptr [ebp - 0x18] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x18)));
  /* 10edad8e fsubr qword ptr [ebp - 8] */
  FPU_ST(0) = (rf64((uint32_t)(EBP + -0x8))) - FPU_ST(0);
  /* 10edad91 fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 10edad94 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 10edad97 fcomp qword ptr [0x10f09528] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x10f09528)));
  (void)fpu_pop();
  /* 10edad9d fnstsw ax */
  AX = fpu_status();
  /* 10edad9f test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 10edada2 jne 0x10edadad */
  if (!C.zf) goto L_10edadad;
  /* 10edada4 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 10edadab jmp 0x10edadb4 */
  goto L_10edadb4;
L_10edadad:;
  /* 10edadad mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
L_10edadb4:;
  /* 10edadb4 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10edadb7 pop edi */
  EDI = (pop32());
  /* 10edadb8 pop esi */
  ESI = (pop32());
  /* 10edadb9 pop ebx */
  EBX = (pop32());
  /* 10edadba mov esp, ebp */
  ESP = (EBP);
  /* 10edadbc pop ebp */
  EBP = (pop32());
  /* 10edadbd ret  */
  ESPCHK(0x10edad60u, _esp0);
  ESP += 4; return;
}

/* __ms_p5_mp_test_fdiv @ 0x10edadc0 (66 bytes, 22 insns) */
void f_10edadc0(void) {
  FTRACE(0x10edadc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edadc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10edadc1 mov ebp, esp */
  EBP = (ESP);
  /* 10edadc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edadc6 push 0x10f0954c */
  push32((uint32_t)(0x10f0954cu));
  /* 10edadcb call dword ptr [0x10f12430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12430))), 0x10edadd1u);
  /* 10edadd1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10edadd4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edadd8 je 0x10edadf9 */
  if (C.zf) goto L_10edadf9;
  /* 10edadda push 0x10f09530 */
  push32((uint32_t)(0x10f09530u));
  /* 10edaddf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edade2 push eax */
  push32((uint32_t)(EAX));
  /* 10edade3 call dword ptr [0x10f12314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12314))), 0x10edade9u);
  /* 10edade9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10edadec cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edadf0 je 0x10edadf9 */
  if (C.zf) goto L_10edadf9;
  /* 10edadf2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edadf4 call dword ptr [ebp - 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x8))), 0x10edadf7u);
  /* 10edadf7 jmp 0x10edadfe */
  goto L_10edadfe;
L_10edadf9:;
  /* 10edadf9 call 0x10edad60 */
  push32(0x10edadfeu); f_10edad60();
L_10edadfe:;
  /* 10edadfe mov esp, ebp */
  ESP = (EBP);
  /* 10edae00 pop ebp */
  EBP = (pop32());
  /* 10edae01 ret  */
  ESPCHK(0x10edadc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ae10 @ 0x10edae10 (168 bytes, 59 insns) */
void f_10edae10(void) {
  FTRACE(0x10edae10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edae10 push ebp */
  push32((uint32_t)(EBP));
  /* 10edae11 mov ebp, esp */
  EBP = (ESP);
  /* 10edae13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edae16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edae19 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10edae1c push ecx */
  push32((uint32_t)(ECX));
  /* 10edae1d call 0x10ee0e90 */
  push32(0x10edae22u); f_10ee0e90();
  /* 10edae22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edae25 cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edae28 je 0x10edae70 */
  if (C.zf) goto L_10edae70;
L_10edae2a:;
  /* 10edae2a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edae2d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edae30 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10edae33 cmp dword ptr [0x10f0cfe0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f0cfe0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edae3a jle 0x10edae52 */
  if ((C.zf||C.sf!=C.of)) goto L_10edae52;
  /* 10edae3c push 4 */
  push32((uint32_t)(0x4u));
  /* 10edae3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edae41 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10edae44 push ecx */
  push32((uint32_t)(ECX));
  /* 10edae45 call 0x10ee0dc0 */
  push32(0x10edae4au); f_10ee0dc0();
  /* 10edae4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edae4d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10edae50 jmp 0x10edae6a */
  goto L_10edae6a;
L_10edae52:;
  /* 10edae52 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edae55 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10edae58 mov ecx, dword ptr [0x10f0cfec] */
  ECX = (r32((uint32_t)(0x10f0cfec)));
  /* 10edae5e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10edae60 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10edae64 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10edae67 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10edae6a:;
  /* 10edae6a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edae6e jne 0x10edae2a */
  if (!C.zf) goto L_10edae2a;
L_10edae70:;
  /* 10edae70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edae73 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10edae75 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10edae78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edae7b mov al, byte ptr [0x10f0cfe4] */
  AL = (r8((uint32_t)(0x10f0cfe4)));
  /* 10edae80 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10edae82 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edae85 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edae88 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10edae8b:;
  /* 10edae8b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edae8e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10edae90 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 10edae93 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edae96 mov dl, byte ptr [ebp - 8] */
  DL = (r8((uint32_t)(EBP + -0x8)));
  /* 10edae99 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 10edae9b mov al, byte ptr [ebp - 4] */
  AL = (r8((uint32_t)(EBP + -0x4)));
  /* 10edae9e mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 10edaea1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edaea4 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10edaea7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edaeaa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edaead mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10edaeb0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10edaeb2 jne 0x10edae8b */
  if (!C.zf) goto L_10edae8b;
  /* 10edaeb4 mov esp, ebp */
  ESP = (EBP);
  /* 10edaeb6 pop ebp */
  EBP = (pop32());
  /* 10edaeb7 ret  */
  ESPCHK(0x10edae10u, _esp0);
  ESP += 4; return;
}

/* __cropzeros @ 0x10edaec0 (215 bytes, 78 insns) */
void f_10edaec0(void) {
  FTRACE(0x10edaec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edaec0 push ebp */
  push32((uint32_t)(EBP));
  /* 10edaec1 mov ebp, esp */
  EBP = (ESP);
  /* 10edaec3 push ecx */
  push32((uint32_t)(ECX));
L_10edaec4:;
  /* 10edaec4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edaec7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10edaeca test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10edaecc je 0x10edaeea */
  if (C.zf) goto L_10edaeea;
  /* 10edaece mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edaed1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10edaed4 movsx ecx, byte ptr [0x10f0cfe4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x10f0cfe4))));
  /* 10edaedb cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edaedd je 0x10edaeea */
  if (C.zf) goto L_10edaeea;
  /* 10edaedf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edaee2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edaee5 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10edaee8 jmp 0x10edaec4 */
  goto L_10edaec4;
L_10edaeea:;
  /* 10edaeea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edaeed movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10edaef0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edaef3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edaef6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10edaef9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10edaefb je 0x10edaf93 */
  if (C.zf) goto L_10edaf93;
L_10edaf01:;
  /* 10edaf01 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edaf04 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10edaf07 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10edaf09 je 0x10edaf2c */
  if (C.zf) goto L_10edaf2c;
  /* 10edaf0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edaf0e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10edaf11 cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edaf14 je 0x10edaf2c */
  if (C.zf) goto L_10edaf2c;
  /* 10edaf16 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edaf19 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10edaf1c cmp edx, 0x45 */
  { uint32_t _a=(EDX),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edaf1f je 0x10edaf2c */
  if (C.zf) goto L_10edaf2c;
  /* 10edaf21 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edaf24 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edaf27 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10edaf2a jmp 0x10edaf01 */
  goto L_10edaf01;
L_10edaf2c:;
  /* 10edaf2c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edaf2f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10edaf32 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edaf35 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edaf38 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10edaf3b:;
  /* 10edaf3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edaf3e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10edaf41 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edaf44 jne 0x10edaf51 */
  if (!C.zf) goto L_10edaf51;
  /* 10edaf46 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edaf49 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edaf4c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10edaf4f jmp 0x10edaf3b */
  goto L_10edaf3b;
L_10edaf51:;
  /* 10edaf51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edaf54 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10edaf57 movsx edx, byte ptr [0x10f0cfe4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x10f0cfe4))));
  /* 10edaf5e cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edaf60 jne 0x10edaf6b */
  if (!C.zf) goto L_10edaf6b;
  /* 10edaf62 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edaf65 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edaf68 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10edaf6b:;
  /* 10edaf6b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edaf6e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edaf71 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10edaf74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edaf77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edaf7a mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10edaf7c mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10edaf7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edaf81 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10edaf84 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edaf87 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edaf8a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10edaf8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edaf8f je 0x10edaf93 */
  if (C.zf) goto L_10edaf93;
  /* 10edaf91 jmp 0x10edaf6b */
  goto L_10edaf6b;
L_10edaf93:;
  /* 10edaf93 mov esp, ebp */
  ESP = (EBP);
  /* 10edaf95 pop ebp */
  EBP = (pop32());
  /* 10edaf96 ret  */
  ESPCHK(0x10edaec0u, _esp0);
  ESP += 4; return;
}

/* __positive @ 0x10edafa0 (45 bytes, 16 insns) */
void f_10edafa0(void) {
  FTRACE(0x10edafa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edafa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10edafa1 mov ebp, esp */
  EBP = (ESP);
  /* 10edafa3 push ecx */
  push32((uint32_t)(ECX));
  /* 10edafa4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edafa7 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 10edafa9 fcomp qword ptr [0x10f09558] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x10f09558)));
  (void)fpu_pop();
  /* 10edafaf fnstsw ax */
  AX = fpu_status();
  /* 10edafb1 test ah, 1 */
  { uint32_t _r=(AH)&(0x1u); fl_logic(_r,8); }
  /* 10edafb4 jne 0x10edafbf */
  if (!C.zf) goto L_10edafbf;
  /* 10edafb6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10edafbd jmp 0x10edafc6 */
  goto L_10edafc6;
L_10edafbf:;
  /* 10edafbf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10edafc6:;
  /* 10edafc6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edafc9 mov esp, ebp */
  ESP = (EBP);
  /* 10edafcb pop ebp */
  EBP = (pop32());
  /* 10edafcc ret  */
  ESPCHK(0x10edafa0u, _esp0);
  ESP += 4; return;
}

/* __fassign @ 0x10edafd0 (72 bytes, 29 insns) */
void f_10edafd0(void) {
  FTRACE(0x10edafd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edafd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10edafd1 mov ebp, esp */
  EBP = (ESP);
  /* 10edafd3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edafd6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edafda je 0x10edaffc */
  if (C.zf) goto L_10edaffc;
  /* 10edafdc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edafdf push eax */
  push32((uint32_t)(EAX));
  /* 10edafe0 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10edafe3 push ecx */
  push32((uint32_t)(ECX));
  /* 10edafe4 call 0x10ee1780 */
  push32(0x10edafe9u); f_10ee1780();
  /* 10edafe9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edafec mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edafef mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edaff2 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10edaff4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edaff7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10edaffa jmp 0x10edb014 */
  goto L_10edb014;
L_10edaffc:;
  /* 10edaffc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edafff push edx */
  push32((uint32_t)(EDX));
  /* 10edb000 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10edb003 push eax */
  push32((uint32_t)(EAX));
  /* 10edb004 call 0x10ee1800 */
  push32(0x10edb009u); f_10ee1800();
  /* 10edb009 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb00c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edb00f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edb012 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
L_10edb014:;
  /* 10edb014 mov esp, ebp */
  ESP = (EBP);
  /* 10edb016 pop ebp */
  EBP = (pop32());
  /* 10edb017 ret  */
  ESPCHK(0x10edafd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b020 @ 0x10edb020 (118 bytes, 49 insns) */
void f_10edb020(void) {
  FTRACE(0x10edb020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edb020 push ebp */
  push32((uint32_t)(EBP));
  /* 10edb021 mov ebp, esp */
  EBP = (ESP);
  /* 10edb023 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edb026 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10edb029 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10edb02c lea ecx, [ebp - 0x2c] */
  ECX = ((uint32_t)(EBP + -0x2c));
  /* 10edb02f push ecx */
  push32((uint32_t)(ECX));
  /* 10edb030 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 10edb033 push edx */
  push32((uint32_t)(EDX));
  /* 10edb034 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edb037 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10edb03a push ecx */
  push32((uint32_t)(ECX));
  /* 10edb03b mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 10edb03d push edx */
  push32((uint32_t)(EDX));
  /* 10edb03e call 0x10ee1940 */
  push32(0x10edb043u); f_10ee1940();
  /* 10edb043 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb046 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb049 push eax */
  push32((uint32_t)(EAX));
  /* 10edb04a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edb04d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb050 push ecx */
  push32((uint32_t)(ECX));
  /* 10edb051 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb054 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10edb056 cmp dword ptr [edx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edb059 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10edb05c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edb05f add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb061 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10edb063 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edb067 setg dl */
  DL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 10edb06a add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb06c push ecx */
  push32((uint32_t)(ECX));
  /* 10edb06d call 0x10ee1840 */
  push32(0x10edb072u); f_10ee1840();
  /* 10edb072 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb075 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edb077 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb07a push eax */
  push32((uint32_t)(EAX));
  /* 10edb07b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10edb07e push ecx */
  push32((uint32_t)(ECX));
  /* 10edb07f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edb082 push edx */
  push32((uint32_t)(EDX));
  /* 10edb083 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edb086 push eax */
  push32((uint32_t)(EAX));
  /* 10edb087 call 0x10edb0a0 */
  push32(0x10edb08cu); f_10edb0a0();
  /* 10edb08c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb08f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edb092 mov esp, ebp */
  ESP = (EBP);
  /* 10edb094 pop ebp */
  EBP = (pop32());
  /* 10edb095 ret  */
  ESPCHK(0x10edb020u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b0a0 @ 0x10edb0a0 (358 bytes, 128 insns) */
void f_10edb0a0(void) {
  FTRACE(0x10edb0a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edb0a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10edb0a1 mov ebp, esp */
  EBP = (ESP);
  /* 10edb0a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edb0a6 movsx eax, byte ptr [ebp + 0x18] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x18))));
  /* 10edb0aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edb0ac je 0x10edb0d7 */
  if (C.zf) goto L_10edb0d7;
  /* 10edb0ae mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10edb0b1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10edb0b3 cmp dword ptr [ecx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edb0b6 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 10edb0b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edb0bc add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb0be mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10edb0c1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10edb0c3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edb0c7 setg cl */
  CL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 10edb0ca push ecx */
  push32((uint32_t)(ECX));
  /* 10edb0cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb0ce push edx */
  push32((uint32_t)(EDX));
  /* 10edb0cf call 0x10edb510 */
  push32(0x10edb0d4u); f_10edb510();
  /* 10edb0d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10edb0d7:;
  /* 10edb0d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edb0da mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10edb0dd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10edb0e0 cmp dword ptr [ecx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edb0e3 jne 0x10edb0f4 */
  if (!C.zf) goto L_10edb0f4;
  /* 10edb0e5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb0e8 mov byte ptr [edx], 0x2d */
  w8((uint32_t)(EDX), (0x2du));
  /* 10edb0eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb0ee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb0f1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10edb0f4:;
  /* 10edb0f4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edb0f8 jle 0x10edb118 */
  if ((C.zf||C.sf!=C.of)) goto L_10edb118;
  /* 10edb0fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb0fd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb100 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10edb103 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10edb105 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb108 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb10b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10edb10e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb111 mov al, byte ptr [0x10f0cfe4] */
  AL = (r8((uint32_t)(0x10f0cfe4)));
  /* 10edb116 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
L_10edb118:;
  /* 10edb118 push 0x10f09560 */
  push32((uint32_t)(0x10f09560u));
  /* 10edb11d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb120 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb123 movsx edx, byte ptr [ebp + 0x18] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x18))));
  /* 10edb127 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10edb129 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edb12b inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10edb12c add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb12e push ecx */
  push32((uint32_t)(ECX));
  /* 10edb12f call 0x10edfe30 */
  push32(0x10edb134u); f_10edfe30();
  /* 10edb134 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb137 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10edb13a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edb13e je 0x10edb146 */
  if (C.zf) goto L_10edb146;
  /* 10edb140 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb143 mov byte ptr [eax], 0x45 */
  w8((uint32_t)(EAX), (0x45u));
L_10edb146:;
  /* 10edb146 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb149 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb14c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10edb14f mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10edb152 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10edb155 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10edb158 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edb15b je 0x10edb1ff */
  if (C.zf) goto L_10edb1ff;
  /* 10edb161 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10edb164 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10edb167 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edb16a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10edb16d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edb171 jge 0x10edb181 */
  if ((C.sf==C.of)) goto L_10edb181;
  /* 10edb173 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edb176 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10edb178 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10edb17b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb17e mov byte ptr [edx], 0x2d */
  w8((uint32_t)(EDX), (0x2du));
L_10edb181:;
  /* 10edb181 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb184 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb187 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10edb18a cmp dword ptr [ebp - 8], 0x64 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edb18e jl 0x10edb1b5 */
  if ((C.sf!=C.of)) goto L_10edb1b5;
  /* 10edb190 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edb193 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10edb194 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10edb199 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10edb19b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb19e mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 10edb1a0 add cl, al */
  { uint32_t _a=(CL),_b=(AL),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10edb1a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb1a5 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10edb1a7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edb1aa cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10edb1ab mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10edb1b0 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10edb1b2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10edb1b5:;
  /* 10edb1b5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb1b8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb1bb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10edb1be cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edb1c2 jl 0x10edb1e9 */
  if ((C.sf!=C.of)) goto L_10edb1e9;
  /* 10edb1c4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edb1c7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10edb1c8 mov ecx, 0xa */
  ECX = (0xau);
  /* 10edb1cd idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10edb1cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb1d2 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 10edb1d4 add cl, al */
  { uint32_t _a=(CL),_b=(AL),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10edb1d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb1d9 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10edb1db mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edb1de cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10edb1df mov ecx, 0xa */
  ECX = (0xau);
  /* 10edb1e4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10edb1e6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10edb1e9:;
  /* 10edb1e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb1ec add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb1ef mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10edb1f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb1f5 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10edb1f7 add cl, byte ptr [ebp - 8] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EBP + -0x8))),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10edb1fa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb1fd mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
L_10edb1ff:;
  /* 10edb1ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edb202 mov esp, ebp */
  ESP = (EBP);
  /* 10edb204 pop ebp */
  EBP = (pop32());
  /* 10edb205 ret  */
  ESPCHK(0x10edb0a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b210 @ 0x10edb210 (106 bytes, 44 insns) */
void f_10edb210(void) {
  FTRACE(0x10edb210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edb210 push ebp */
  push32((uint32_t)(EBP));
  /* 10edb211 mov ebp, esp */
  EBP = (ESP);
  /* 10edb213 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edb216 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10edb219 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10edb21c lea ecx, [ebp - 0x2c] */
  ECX = ((uint32_t)(EBP + -0x2c));
  /* 10edb21f push ecx */
  push32((uint32_t)(ECX));
  /* 10edb220 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 10edb223 push edx */
  push32((uint32_t)(EDX));
  /* 10edb224 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edb227 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10edb22a push ecx */
  push32((uint32_t)(ECX));
  /* 10edb22b mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 10edb22d push edx */
  push32((uint32_t)(EDX));
  /* 10edb22e call 0x10ee1940 */
  push32(0x10edb233u); f_10ee1940();
  /* 10edb233 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb236 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb239 push eax */
  push32((uint32_t)(EAX));
  /* 10edb23a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb23d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edb240 add edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb243 push edx */
  push32((uint32_t)(EDX));
  /* 10edb244 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb247 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10edb249 cmp dword ptr [eax], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edb24c sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10edb24f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edb252 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb254 push edx */
  push32((uint32_t)(EDX));
  /* 10edb255 call 0x10ee1840 */
  push32(0x10edb25au); f_10ee1840();
  /* 10edb25a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb25d push 0 */
  push32((uint32_t)(0x0u));
  /* 10edb25f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb262 push eax */
  push32((uint32_t)(EAX));
  /* 10edb263 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edb266 push ecx */
  push32((uint32_t)(ECX));
  /* 10edb267 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edb26a push edx */
  push32((uint32_t)(EDX));
  /* 10edb26b call 0x10edb280 */
  push32(0x10edb270u); f_10edb280();
  /* 10edb270 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb273 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edb276 mov esp, ebp */
  ESP = (EBP);
  /* 10edb278 pop ebp */
  EBP = (pop32());
  /* 10edb279 ret  */
  ESPCHK(0x10edb210u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b280 @ 0x10edb280 (317 bytes, 113 insns) */
void f_10edb280(void) {
  FTRACE(0x10edb280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edb280 push ebp */
  push32((uint32_t)(EBP));
  /* 10edb281 mov ebp, esp */
  EBP = (ESP);
  /* 10edb283 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edb286 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edb289 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10edb28c sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edb28f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10edb292 movsx edx, byte ptr [ebp + 0x14] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x14))));
  /* 10edb296 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10edb298 je 0x10edb2d3 */
  if (C.zf) goto L_10edb2d3;
  /* 10edb29a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edb29d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10edb29f cmp dword ptr [eax], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edb2a2 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10edb2a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edb2a8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb2aa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10edb2ad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edb2b0 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edb2b3 jne 0x10edb2d3 */
  if (!C.zf) goto L_10edb2d3;
  /* 10edb2b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb2b8 add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb2bb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10edb2be mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edb2c1 mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 10edb2c4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edb2c7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb2ca mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10edb2cd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edb2d0 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_10edb2d3:;
  /* 10edb2d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edb2d6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10edb2d9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edb2dc cmp dword ptr [eax], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edb2df jne 0x10edb2f0 */
  if (!C.zf) goto L_10edb2f0;
  /* 10edb2e1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb2e4 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10edb2e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb2ea add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb2ed mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10edb2f0:;
  /* 10edb2f0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edb2f3 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edb2f7 jg 0x10edb318 */
  if ((!C.zf&&C.sf==C.of)) goto L_10edb318;
  /* 10edb2f9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10edb2fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb2fe push ecx */
  push32((uint32_t)(ECX));
  /* 10edb2ff call 0x10edb510 */
  push32(0x10edb304u); f_10edb510();
  /* 10edb304 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb307 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb30a mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 10edb30d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb310 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb313 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10edb316 jmp 0x10edb324 */
  goto L_10edb324;
L_10edb318:;
  /* 10edb318 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edb31b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb31e add edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb321 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10edb324:;
  /* 10edb324 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edb328 jle 0x10edb3b6 */
  if ((C.zf||C.sf!=C.of)) goto L_10edb3b6;
  /* 10edb32e push 1 */
  push32((uint32_t)(0x1u));
  /* 10edb330 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb333 push eax */
  push32((uint32_t)(EAX));
  /* 10edb334 call 0x10edb510 */
  push32(0x10edb339u); f_10edb510();
  /* 10edb339 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb33c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb33f mov dl, byte ptr [0x10f0cfe4] */
  DL = (r8((uint32_t)(0x10f0cfe4)));
  /* 10edb345 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 10edb347 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb34a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb34d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10edb350 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edb353 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edb357 jge 0x10edb3b6 */
  if ((C.sf==C.of)) goto L_10edb3b6;
  /* 10edb359 movsx edx, byte ptr [ebp + 0x14] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x14))));
  /* 10edb35d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10edb35f je 0x10edb36e */
  if (C.zf) goto L_10edb36e;
  /* 10edb361 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edb364 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10edb367 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10edb369 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10edb36c jmp 0x10edb394 */
  goto L_10edb394;
L_10edb36e:;
  /* 10edb36e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edb371 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10edb374 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10edb376 cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edb379 jge 0x10edb383 */
  if ((C.sf==C.of)) goto L_10edb383;
  /* 10edb37b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edb37e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10edb381 jmp 0x10edb38e */
  goto L_10edb38e;
L_10edb383:;
  /* 10edb383 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edb386 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10edb389 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10edb38b mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10edb38e:;
  /* 10edb38e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10edb391 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10edb394:;
  /* 10edb394 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edb397 push edx */
  push32((uint32_t)(EDX));
  /* 10edb398 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb39b push eax */
  push32((uint32_t)(EAX));
  /* 10edb39c call 0x10edb510 */
  push32(0x10edb3a1u); f_10edb510();
  /* 10edb3a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb3a4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edb3a7 push ecx */
  push32((uint32_t)(ECX));
  /* 10edb3a8 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10edb3aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb3ad push edx */
  push32((uint32_t)(EDX));
  /* 10edb3ae call 0x10ee1b30 */
  push32(0x10edb3b3u); f_10ee1b30();
  /* 10edb3b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10edb3b6:;
  /* 10edb3b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edb3b9 mov esp, ebp */
  ESP = (EBP);
  /* 10edb3bb pop ebp */
  EBP = (pop32());
  /* 10edb3bc ret  */
  ESPCHK(0x10edb280u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b3c0 @ 0x10edb3c0 (229 bytes, 89 insns) */
void f_10edb3c0(void) {
  FTRACE(0x10edb3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edb3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10edb3c1 mov ebp, esp */
  EBP = (ESP);
  /* 10edb3c3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edb3c6 mov byte ptr [ebp - 0x30], 0 */
  w8((uint32_t)(EBP + -0x30), (0x0u));
  /* 10edb3ca lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10edb3cd mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 10edb3d0 lea ecx, [ebp - 0x2c] */
  ECX = ((uint32_t)(EBP + -0x2c));
  /* 10edb3d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10edb3d4 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 10edb3d7 push edx */
  push32((uint32_t)(EDX));
  /* 10edb3d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edb3db mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10edb3de push ecx */
  push32((uint32_t)(ECX));
  /* 10edb3df mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 10edb3e1 push edx */
  push32((uint32_t)(EDX));
  /* 10edb3e2 call 0x10ee1940 */
  push32(0x10edb3e7u); f_10ee1940();
  /* 10edb3e7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb3ea mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10edb3ed mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10edb3f0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edb3f3 mov dword ptr [ebp - 0x34], ecx */
  w32((uint32_t)(EBP + -0x34), (ECX));
  /* 10edb3f6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10edb3f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10edb3fb cmp dword ptr [edx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edb3fe sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10edb401 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edb404 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb406 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10edb409 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10edb40c push edx */
  push32((uint32_t)(EDX));
  /* 10edb40d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edb410 push eax */
  push32((uint32_t)(EAX));
  /* 10edb411 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb414 push ecx */
  push32((uint32_t)(ECX));
  /* 10edb415 call 0x10ee1840 */
  push32(0x10edb41au); f_10ee1840();
  /* 10edb41a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb41d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10edb420 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10edb423 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edb426 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10edb428 cmp dword ptr [ebp - 0x34], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x34))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edb42b setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 10edb42e mov byte ptr [ebp - 0x30], cl */
  w8((uint32_t)(EBP + -0x30), (CL));
  /* 10edb431 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10edb434 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10edb437 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edb43a mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 10edb43d cmp dword ptr [ebp - 0x34], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x34))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edb441 jl 0x10edb44b */
  if ((C.sf!=C.of)) goto L_10edb44b;
  /* 10edb443 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10edb446 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edb449 jl 0x10edb467 */
  if ((C.sf!=C.of)) goto L_10edb467;
L_10edb44b:;
  /* 10edb44b push 1 */
  push32((uint32_t)(0x1u));
  /* 10edb44d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10edb450 push edx */
  push32((uint32_t)(EDX));
  /* 10edb451 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10edb454 push eax */
  push32((uint32_t)(EAX));
  /* 10edb455 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edb458 push ecx */
  push32((uint32_t)(ECX));
  /* 10edb459 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edb45c push edx */
  push32((uint32_t)(EDX));
  /* 10edb45d call 0x10edb0a0 */
  push32(0x10edb462u); f_10edb0a0();
  /* 10edb462 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb465 jmp 0x10edb4a1 */
  goto L_10edb4a1;
L_10edb467:;
  /* 10edb467 movsx eax, byte ptr [ebp - 0x30] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x30))));
  /* 10edb46b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edb46d je 0x10edb48b */
  if (C.zf) goto L_10edb48b;
L_10edb46f:;
  /* 10edb46f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb472 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10edb475 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb478 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb47b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10edb47e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10edb480 je 0x10edb484 */
  if (C.zf) goto L_10edb484;
  /* 10edb482 jmp 0x10edb46f */
  goto L_10edb46f;
L_10edb484:;
  /* 10edb484 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb487 mov byte ptr [ecx - 2], 0 */
  w8((uint32_t)(ECX + -0x2), (0x0u));
L_10edb48b:;
  /* 10edb48b push 1 */
  push32((uint32_t)(0x1u));
  /* 10edb48d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10edb490 push edx */
  push32((uint32_t)(EDX));
  /* 10edb491 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edb494 push eax */
  push32((uint32_t)(EAX));
  /* 10edb495 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edb498 push ecx */
  push32((uint32_t)(ECX));
  /* 10edb499 call 0x10edb280 */
  push32(0x10edb49eu); f_10edb280();
  /* 10edb49e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10edb4a1:;
  /* 10edb4a1 mov esp, ebp */
  ESP = (EBP);
  /* 10edb4a3 pop ebp */
  EBP = (pop32());
  /* 10edb4a4 ret  */
  ESPCHK(0x10edb3c0u, _esp0);
  ESP += 4; return;
}

/* __cfltcvt @ 0x10edb4b0 (95 bytes, 40 insns) */
void f_10edb4b0(void) {
  FTRACE(0x10edb4b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edb4b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10edb4b1 mov ebp, esp */
  EBP = (ESP);
  /* 10edb4b3 cmp dword ptr [ebp + 0x10], 0x65 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edb4b7 je 0x10edb4bf */
  if (C.zf) goto L_10edb4bf;
  /* 10edb4b9 cmp dword ptr [ebp + 0x10], 0x45 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edb4bd jne 0x10edb4d9 */
  if (!C.zf) goto L_10edb4d9;
L_10edb4bf:;
  /* 10edb4bf mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10edb4c2 push eax */
  push32((uint32_t)(EAX));
  /* 10edb4c3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10edb4c6 push ecx */
  push32((uint32_t)(ECX));
  /* 10edb4c7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edb4ca push edx */
  push32((uint32_t)(EDX));
  /* 10edb4cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edb4ce push eax */
  push32((uint32_t)(EAX));
  /* 10edb4cf call 0x10edb020 */
  push32(0x10edb4d4u); f_10edb020();
  /* 10edb4d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb4d7 jmp 0x10edb50d */
  goto L_10edb50d;
L_10edb4d9:;
  /* 10edb4d9 cmp dword ptr [ebp + 0x10], 0x66 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edb4dd jne 0x10edb4f5 */
  if (!C.zf) goto L_10edb4f5;
  /* 10edb4df mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10edb4e2 push ecx */
  push32((uint32_t)(ECX));
  /* 10edb4e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edb4e6 push edx */
  push32((uint32_t)(EDX));
  /* 10edb4e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edb4ea push eax */
  push32((uint32_t)(EAX));
  /* 10edb4eb call 0x10edb210 */
  push32(0x10edb4f0u); f_10edb210();
  /* 10edb4f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb4f3 jmp 0x10edb50d */
  goto L_10edb50d;
L_10edb4f5:;
  /* 10edb4f5 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10edb4f8 push ecx */
  push32((uint32_t)(ECX));
  /* 10edb4f9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10edb4fc push edx */
  push32((uint32_t)(EDX));
  /* 10edb4fd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edb500 push eax */
  push32((uint32_t)(EAX));
  /* 10edb501 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edb504 push ecx */
  push32((uint32_t)(ECX));
  /* 10edb505 call 0x10edb3c0 */
  push32(0x10edb50au); f_10edb3c0();
  /* 10edb50a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10edb50d:;
  /* 10edb50d pop ebp */
  EBP = (pop32());
  /* 10edb50e ret  */
  ESPCHK(0x10edb4b0u, _esp0);
  ESP += 4; return;
}

/* __shift @ 0x10edb510 (46 bytes, 19 insns) */
void f_10edb510(void) {
  FTRACE(0x10edb510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edb510 push ebp */
  push32((uint32_t)(EBP));
  /* 10edb511 mov ebp, esp */
  EBP = (ESP);
  /* 10edb513 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edb517 je 0x10edb53c */
  if (C.zf) goto L_10edb53c;
  /* 10edb519 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edb51c push eax */
  push32((uint32_t)(EAX));
  /* 10edb51d call 0x10edfcb0 */
  push32(0x10edb522u); f_10edfcb0();
  /* 10edb522 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb525 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb528 push eax */
  push32((uint32_t)(EAX));
  /* 10edb529 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edb52c push ecx */
  push32((uint32_t)(ECX));
  /* 10edb52d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edb530 add edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb533 push edx */
  push32((uint32_t)(EDX));
  /* 10edb534 call 0x10ee1b90 */
  push32(0x10edb539u); f_10ee1b90();
  /* 10edb539 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10edb53c:;
  /* 10edb53c pop ebp */
  EBP = (pop32());
  /* 10edb53d ret  */
  ESPCHK(0x10edb510u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b540 @ 0x10edb540 (55 bytes, 16 insns) */
void f_10edb540(void) {
  FTRACE(0x10edb540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edb540 push ebp */
  push32((uint32_t)(EBP));
  /* 10edb541 mov ebp, esp */
  EBP = (ESP);
  /* 10edb543 mov eax, dword ptr [0x10f0ce7c] */
  EAX = (r32((uint32_t)(0x10f0ce7c)));
  /* 10edb548 push eax */
  push32((uint32_t)(EAX));
  /* 10edb549 call dword ptr [0x10f12434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12434))), 0x10edb54fu);
  /* 10edb54f mov ecx, dword ptr [0x10f0ce6c] */
  ECX = (r32((uint32_t)(0x10f0ce6c)));
  /* 10edb555 push ecx */
  push32((uint32_t)(ECX));
  /* 10edb556 call dword ptr [0x10f12434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12434))), 0x10edb55cu);
  /* 10edb55c mov edx, dword ptr [0x10f0ce5c] */
  EDX = (r32((uint32_t)(0x10f0ce5c)));
  /* 10edb562 push edx */
  push32((uint32_t)(EDX));
  /* 10edb563 call dword ptr [0x10f12434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12434))), 0x10edb569u);
  /* 10edb569 mov eax, dword ptr [0x10f0ce3c] */
  EAX = (r32((uint32_t)(0x10f0ce3c)));
  /* 10edb56e push eax */
  push32((uint32_t)(EAX));
  /* 10edb56f call dword ptr [0x10f12434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12434))), 0x10edb575u);
  /* 10edb575 pop ebp */
  EBP = (pop32());
  /* 10edb576 ret  */
  ESPCHK(0x10edb540u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b580 @ 0x10edb580 (159 bytes, 47 insns) */
void f_10edb580(void) {
  FTRACE(0x10edb580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edb580 push ebp */
  push32((uint32_t)(EBP));
  /* 10edb581 mov ebp, esp */
  EBP = (ESP);
  /* 10edb583 push ecx */
  push32((uint32_t)(ECX));
  /* 10edb584 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10edb58b jmp 0x10edb596 */
  goto L_10edb596;
L_10edb58d:;
  /* 10edb58d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb590 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb593 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10edb596:;
  /* 10edb596 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edb59a jge 0x10edb5e9 */
  if ((C.sf==C.of)) goto L_10edb5e9;
  /* 10edb59c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb59f cmp dword ptr [ecx*4 + 0x10f0ce38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10f0ce38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edb5a7 je 0x10edb5e7 */
  if (C.zf) goto L_10edb5e7;
  /* 10edb5a9 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edb5ad je 0x10edb5e7 */
  if (C.zf) goto L_10edb5e7;
  /* 10edb5af cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edb5b3 je 0x10edb5e7 */
  if (C.zf) goto L_10edb5e7;
  /* 10edb5b5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edb5b9 je 0x10edb5e7 */
  if (C.zf) goto L_10edb5e7;
  /* 10edb5bb cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edb5bf je 0x10edb5e7 */
  if (C.zf) goto L_10edb5e7;
  /* 10edb5c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb5c4 mov eax, dword ptr [edx*4 + 0x10f0ce38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10f0ce38)));
  /* 10edb5cb push eax */
  push32((uint32_t)(EAX));
  /* 10edb5cc call dword ptr [0x10f12420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12420))), 0x10edb5d2u);
  /* 10edb5d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10edb5d4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb5d7 mov edx, dword ptr [ecx*4 + 0x10f0ce38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10f0ce38)));
  /* 10edb5de push edx */
  push32((uint32_t)(EDX));
  /* 10edb5df call 0x10edc1b0 */
  push32(0x10edb5e4u); f_10edc1b0();
  /* 10edb5e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10edb5e7:;
  /* 10edb5e7 jmp 0x10edb58d */
  goto L_10edb58d;
L_10edb5e9:;
  /* 10edb5e9 mov eax, dword ptr [0x10f0ce5c] */
  EAX = (r32((uint32_t)(0x10f0ce5c)));
  /* 10edb5ee push eax */
  push32((uint32_t)(EAX));
  /* 10edb5ef call dword ptr [0x10f12420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12420))), 0x10edb5f5u);
  /* 10edb5f5 mov ecx, dword ptr [0x10f0ce6c] */
  ECX = (r32((uint32_t)(0x10f0ce6c)));
  /* 10edb5fb push ecx */
  push32((uint32_t)(ECX));
  /* 10edb5fc call dword ptr [0x10f12420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12420))), 0x10edb602u);
  /* 10edb602 mov edx, dword ptr [0x10f0ce7c] */
  EDX = (r32((uint32_t)(0x10f0ce7c)));
  /* 10edb608 push edx */
  push32((uint32_t)(EDX));
  /* 10edb609 call dword ptr [0x10f12420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12420))), 0x10edb60fu);
  /* 10edb60f mov eax, dword ptr [0x10f0ce3c] */
  EAX = (r32((uint32_t)(0x10f0ce3c)));
  /* 10edb614 push eax */
  push32((uint32_t)(EAX));
  /* 10edb615 call dword ptr [0x10f12420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12420))), 0x10edb61bu);
  /* 10edb61b mov esp, ebp */
  ESP = (EBP);
  /* 10edb61d pop ebp */
  EBP = (pop32());
  /* 10edb61e ret  */
  ESPCHK(0x10edb580u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b620 @ 0x10edb620 (151 bytes, 46 insns) */
void f_10edb620(void) {
  FTRACE(0x10edb620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edb620 push ebp */
  push32((uint32_t)(EBP));
  /* 10edb621 mov ebp, esp */
  EBP = (ESP);
  /* 10edb623 push ecx */
  push32((uint32_t)(ECX));
  /* 10edb624 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edb627 cmp dword ptr [eax*4 + 0x10f0ce38], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10f0ce38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edb62f jne 0x10edb6a2 */
  if (!C.zf) goto L_10edb6a2;
  /* 10edb631 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10edb636 push 0x10f09568 */
  push32((uint32_t)(0x10f09568u));
  /* 10edb63b push 2 */
  push32((uint32_t)(0x2u));
  /* 10edb63d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10edb63f call 0x10edb720 */
  push32(0x10edb644u); f_10edb720();
  /* 10edb644 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb647 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10edb64a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edb64e jne 0x10edb65a */
  if (!C.zf) goto L_10edb65a;
  /* 10edb650 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10edb652 call 0x10eda190 */
  push32(0x10edb657u); f_10eda190();
  /* 10edb657 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10edb65a:;
  /* 10edb65a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10edb65c call 0x10edb620 */
  push32(0x10edb661u); f_10edb620();
  /* 10edb661 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb664 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edb667 cmp dword ptr [ecx*4 + 0x10f0ce38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10f0ce38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edb66f jne 0x10edb68a */
  if (!C.zf) goto L_10edb68a;
  /* 10edb671 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb674 push edx */
  push32((uint32_t)(EDX));
  /* 10edb675 call dword ptr [0x10f12434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12434))), 0x10edb67bu);
  /* 10edb67b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edb67e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb681 mov dword ptr [eax*4 + 0x10f0ce38], ecx */
  w32((uint32_t)(EAX*4 + 0x10f0ce38), (ECX));
  /* 10edb688 jmp 0x10edb698 */
  goto L_10edb698;
L_10edb68a:;
  /* 10edb68a push 2 */
  push32((uint32_t)(0x2u));
  /* 10edb68c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb68f push edx */
  push32((uint32_t)(EDX));
  /* 10edb690 call 0x10edc1b0 */
  push32(0x10edb695u); f_10edc1b0();
  /* 10edb695 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10edb698:;
  /* 10edb698 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10edb69a call 0x10edb6c0 */
  push32(0x10edb69fu); f_10edb6c0();
  /* 10edb69f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10edb6a2:;
  /* 10edb6a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edb6a5 mov ecx, dword ptr [eax*4 + 0x10f0ce38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10f0ce38)));
  /* 10edb6ac push ecx */
  push32((uint32_t)(ECX));
  /* 10edb6ad call dword ptr [0x10f12438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12438))), 0x10edb6b3u);
  /* 10edb6b3 mov esp, ebp */
  ESP = (EBP);
  /* 10edb6b5 pop ebp */
  EBP = (pop32());
  /* 10edb6b6 ret  */
  ESPCHK(0x10edb620u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b6c0 @ 0x10edb6c0 (22 bytes, 8 insns) */
void f_10edb6c0(void) {
  FTRACE(0x10edb6c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edb6c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10edb6c1 mov ebp, esp */
  EBP = (ESP);
  /* 10edb6c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edb6c6 mov ecx, dword ptr [eax*4 + 0x10f0ce38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10f0ce38)));
  /* 10edb6cd push ecx */
  push32((uint32_t)(ECX));
  /* 10edb6ce call dword ptr [0x10f1243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1243c))), 0x10edb6d4u);
  /* 10edb6d4 pop ebp */
  EBP = (pop32());
  /* 10edb6d5 ret  */
  ESPCHK(0x10edb6c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b6e0 @ 0x10edb6e0 (26 bytes, 10 insns) */
void f_10edb6e0(void) {
  FTRACE(0x10edb6e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edb6e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10edb6e1 mov ebp, esp */
  EBP = (ESP);
  /* 10edb6e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edb6e6 push eax */
  push32((uint32_t)(EAX));
  /* 10edb6e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edb6e9 call dword ptr [0x10f12444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12444))), 0x10edb6efu);
  /* 10edb6ef push 0xff */
  push32((uint32_t)(0xffu));
  /* 10edb6f4 call dword ptr [0x10f12440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12440))), 0x10edb6fau);
  /* 10edb6fa pop ebp */
  EBP = (pop32());
  /* 10edb6fb ret  */
  ESPCHK(0x10edb6e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b700 @ 0x10edb700 (29 bytes, 13 insns) */
void f_10edb700(void) {
  FTRACE(0x10edb700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edb700 push ebp */
  push32((uint32_t)(EBP));
  /* 10edb701 mov ebp, esp */
  EBP = (ESP);
  /* 10edb703 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edb705 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edb707 push 1 */
  push32((uint32_t)(0x1u));
  /* 10edb709 mov eax, dword ptr [0x10f0f6d0] */
  EAX = (r32((uint32_t)(0x10f0f6d0)));
  /* 10edb70e push eax */
  push32((uint32_t)(EAX));
  /* 10edb70f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edb712 push ecx */
  push32((uint32_t)(ECX));
  /* 10edb713 call 0x10edb770 */
  push32(0x10edb718u); f_10edb770();
  /* 10edb718 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb71b pop ebp */
  EBP = (pop32());
  /* 10edb71c ret  */
  ESPCHK(0x10edb700u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b720 @ 0x10edb720 (35 bytes, 16 insns) */
void f_10edb720(void) {
  FTRACE(0x10edb720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edb720 push ebp */
  push32((uint32_t)(EBP));
  /* 10edb721 mov ebp, esp */
  EBP = (ESP);
  /* 10edb723 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10edb726 push eax */
  push32((uint32_t)(EAX));
  /* 10edb727 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edb72a push ecx */
  push32((uint32_t)(ECX));
  /* 10edb72b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edb72e push edx */
  push32((uint32_t)(EDX));
  /* 10edb72f mov eax, dword ptr [0x10f0f6d0] */
  EAX = (r32((uint32_t)(0x10f0f6d0)));
  /* 10edb734 push eax */
  push32((uint32_t)(EAX));
  /* 10edb735 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edb738 push ecx */
  push32((uint32_t)(ECX));
  /* 10edb739 call 0x10edb770 */
  push32(0x10edb73eu); f_10edb770();
  /* 10edb73e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb741 pop ebp */
  EBP = (pop32());
  /* 10edb742 ret  */
  ESPCHK(0x10edb720u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b750 @ 0x10edb750 (27 bytes, 13 insns) */
void f_10edb750(void) {
  FTRACE(0x10edb750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edb750 push ebp */
  push32((uint32_t)(EBP));
  /* 10edb751 mov ebp, esp */
  EBP = (ESP);
  /* 10edb753 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edb755 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edb757 push 1 */
  push32((uint32_t)(0x1u));
  /* 10edb759 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edb75c push eax */
  push32((uint32_t)(EAX));
  /* 10edb75d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edb760 push ecx */
  push32((uint32_t)(ECX));
  /* 10edb761 call 0x10edb770 */
  push32(0x10edb766u); f_10edb770();
  /* 10edb766 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb769 pop ebp */
  EBP = (pop32());
  /* 10edb76a ret  */
  ESPCHK(0x10edb750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b770 @ 0x10edb770 (94 bytes, 38 insns) */
void f_10edb770(void) {
  FTRACE(0x10edb770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edb770 push ebp */
  push32((uint32_t)(EBP));
  /* 10edb771 mov ebp, esp */
  EBP = (ESP);
  /* 10edb773 push ecx */
  push32((uint32_t)(ECX));
L_10edb774:;
  /* 10edb774 push 9 */
  push32((uint32_t)(0x9u));
  /* 10edb776 call 0x10edb620 */
  push32(0x10edb77bu); f_10edb620();
  /* 10edb77b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb77e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10edb781 push eax */
  push32((uint32_t)(EAX));
  /* 10edb782 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10edb785 push ecx */
  push32((uint32_t)(ECX));
  /* 10edb786 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edb789 push edx */
  push32((uint32_t)(EDX));
  /* 10edb78a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edb78d push eax */
  push32((uint32_t)(EAX));
  /* 10edb78e call 0x10edb7f0 */
  push32(0x10edb793u); f_10edb7f0();
  /* 10edb793 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb796 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10edb799 push 9 */
  push32((uint32_t)(0x9u));
  /* 10edb79b call 0x10edb6c0 */
  push32(0x10edb7a0u); f_10edb6c0();
  /* 10edb7a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb7a3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edb7a7 jne 0x10edb7af */
  if (!C.zf) goto L_10edb7af;
  /* 10edb7a9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edb7ad jne 0x10edb7b4 */
  if (!C.zf) goto L_10edb7b4;
L_10edb7af:;
  /* 10edb7af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb7b2 jmp 0x10edb7ca */
  goto L_10edb7ca;
L_10edb7b4:;
  /* 10edb7b4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edb7b7 push ecx */
  push32((uint32_t)(ECX));
  /* 10edb7b8 call 0x10ee1f20 */
  push32(0x10edb7bdu); f_10ee1f20();
  /* 10edb7bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb7c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edb7c2 jne 0x10edb7c8 */
  if (!C.zf) goto L_10edb7c8;
  /* 10edb7c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10edb7c6 jmp 0x10edb7ca */
  goto L_10edb7ca;
L_10edb7c8:;
  /* 10edb7c8 jmp 0x10edb774 */
  goto L_10edb774;
L_10edb7ca:;
  /* 10edb7ca mov esp, ebp */
  ESP = (EBP);
  /* 10edb7cc pop ebp */
  EBP = (pop32());
  /* 10edb7cd ret  */
  ESPCHK(0x10edb770u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b7d0 @ 0x10edb7d0 (23 bytes, 11 insns) */
void f_10edb7d0(void) {
  FTRACE(0x10edb7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edb7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10edb7d1 mov ebp, esp */
  EBP = (ESP);
  /* 10edb7d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edb7d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edb7d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10edb7d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edb7dc push eax */
  push32((uint32_t)(EAX));
  /* 10edb7dd call 0x10edb7f0 */
  push32(0x10edb7e2u); f_10edb7f0();
  /* 10edb7e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb7e5 pop ebp */
  EBP = (pop32());
  /* 10edb7e6 ret  */
  ESPCHK(0x10edb7d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b7f0 @ 0x10edb7f0 (787 bytes, 254 insns) */
void f_10edb7f0(void) {
  FTRACE(0x10edb7f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edb7f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10edb7f1 mov ebp, esp */
  EBP = (ESP);
  /* 10edb7f3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edb7f6 push ebx */
  push32((uint32_t)(EBX));
  /* 10edb7f7 push esi */
  push32((uint32_t)(ESI));
  /* 10edb7f8 push edi */
  push32((uint32_t)(EDI));
  /* 10edb7f9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10edb800 mov eax, dword ptr [0x10f0cef8] */
  EAX = (r32((uint32_t)(0x10f0cef8)));
  /* 10edb805 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10edb808 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edb80a je 0x10edb83c */
  if (C.zf) goto L_10edb83c;
L_10edb80c:;
  /* 10edb80c call 0x10edc8c0 */
  push32(0x10edb811u); f_10edc8c0();
  /* 10edb811 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edb813 jne 0x10edb836 */
  if (!C.zf) goto L_10edb836;
  /* 10edb815 push 0x10f09658 */
  push32((uint32_t)(0x10f09658u));
  /* 10edb81a push 0 */
  push32((uint32_t)(0x0u));
  /* 10edb81c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 10edb821 push 0x10f0964c */
  push32((uint32_t)(0x10f0964cu));
  /* 10edb826 push 2 */
  push32((uint32_t)(0x2u));
  /* 10edb828 call 0x10eda2e0 */
  push32(0x10edb82du); f_10eda2e0();
  /* 10edb82d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb830 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edb833 jne 0x10edb836 */
  if (!C.zf) goto L_10edb836;
  /* 10edb835 int3  */
  x86_unimpl("int3 @ 0x10edb835");
L_10edb836:;
  /* 10edb836 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10edb838 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10edb83a jne 0x10edb80c */
  if (!C.zf) goto L_10edb80c;
L_10edb83c:;
  /* 10edb83c mov edx, dword ptr [0x10f0cefc] */
  EDX = (r32((uint32_t)(0x10f0cefc)));
  /* 10edb842 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10edb845 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edb848 cmp eax, dword ptr [0x10f0cf00] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10f0cf00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edb84e jne 0x10edb851 */
  if (!C.zf) goto L_10edb851;
  /* 10edb850 int3  */
  x86_unimpl("int3 @ 0x10edb850");
L_10edb851:;
  /* 10edb851 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10edb854 push ecx */
  push32((uint32_t)(ECX));
  /* 10edb855 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edb858 push edx */
  push32((uint32_t)(EDX));
  /* 10edb859 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edb85c push eax */
  push32((uint32_t)(EAX));
  /* 10edb85d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edb860 push ecx */
  push32((uint32_t)(ECX));
  /* 10edb861 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edb864 push edx */
  push32((uint32_t)(EDX));
  /* 10edb865 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edb867 push 1 */
  push32((uint32_t)(0x1u));
  /* 10edb869 call dword ptr [0x10f0d230] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f0d230))), 0x10edb86fu);
  /* 10edb86f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb872 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edb874 jne 0x10edb8d4 */
  if (!C.zf) goto L_10edb8d4;
  /* 10edb876 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edb87a je 0x10edb8a7 */
  if (C.zf) goto L_10edb8a7;
L_10edb87c:;
  /* 10edb87c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10edb87f push eax */
  push32((uint32_t)(EAX));
  /* 10edb880 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edb883 push ecx */
  push32((uint32_t)(ECX));
  /* 10edb884 push 0x10f09614 */
  push32((uint32_t)(0x10f09614u));
  /* 10edb889 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edb88b push 0 */
  push32((uint32_t)(0x0u));
  /* 10edb88d push 0 */
  push32((uint32_t)(0x0u));
  /* 10edb88f push 0 */
  push32((uint32_t)(0x0u));
  /* 10edb891 call 0x10eda2e0 */
  push32(0x10edb896u); f_10eda2e0();
  /* 10edb896 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb899 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edb89c jne 0x10edb89f */
  if (!C.zf) goto L_10edb89f;
  /* 10edb89e int3  */
  x86_unimpl("int3 @ 0x10edb89e");
L_10edb89f:;
  /* 10edb89f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10edb8a1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10edb8a3 jne 0x10edb87c */
  if (!C.zf) goto L_10edb87c;
  /* 10edb8a5 jmp 0x10edb8cd */
  goto L_10edb8cd;
L_10edb8a7:;
  /* 10edb8a7 push 0x10f095f0 */
  push32((uint32_t)(0x10f095f0u));
  /* 10edb8ac push 0x10f095ec */
  push32((uint32_t)(0x10f095ecu));
  /* 10edb8b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edb8b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edb8b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edb8b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edb8b9 call 0x10eda2e0 */
  push32(0x10edb8beu); f_10eda2e0();
  /* 10edb8be add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb8c1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edb8c4 jne 0x10edb8c7 */
  if (!C.zf) goto L_10edb8c7;
  /* 10edb8c6 int3  */
  x86_unimpl("int3 @ 0x10edb8c6");
L_10edb8c7:;
  /* 10edb8c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10edb8c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edb8cb jne 0x10edb8a7 */
  if (!C.zf) goto L_10edb8a7;
L_10edb8cd:;
  /* 10edb8cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10edb8cf jmp 0x10edbafc */
  goto L_10edbafc;
L_10edb8d4:;
  /* 10edb8d4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edb8d7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10edb8dd cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edb8e0 je 0x10edb8f6 */
  if (C.zf) goto L_10edb8f6;
  /* 10edb8e2 mov edx, dword ptr [0x10f0cef8] */
  EDX = (r32((uint32_t)(0x10f0cef8)));
  /* 10edb8e8 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10edb8eb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10edb8ed jne 0x10edb8f6 */
  if (!C.zf) goto L_10edb8f6;
  /* 10edb8ef mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_10edb8f6:;
  /* 10edb8f6 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edb8fa ja 0x10edb907 */
  if ((!C.cf&&!C.zf)) goto L_10edb907;
  /* 10edb8fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edb8ff add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb902 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edb905 jbe 0x10edb933 */
  if ((C.cf||C.zf)) goto L_10edb933;
L_10edb907:;
  /* 10edb907 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edb90a push ecx */
  push32((uint32_t)(ECX));
  /* 10edb90b push 0x10f095c8 */
  push32((uint32_t)(0x10f095c8u));
  /* 10edb910 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edb912 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edb914 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edb916 push 1 */
  push32((uint32_t)(0x1u));
  /* 10edb918 call 0x10eda2e0 */
  push32(0x10edb91du); f_10eda2e0();
  /* 10edb91d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb920 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edb923 jne 0x10edb926 */
  if (!C.zf) goto L_10edb926;
  /* 10edb925 int3  */
  x86_unimpl("int3 @ 0x10edb925");
L_10edb926:;
  /* 10edb926 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10edb928 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10edb92a jne 0x10edb907 */
  if (!C.zf) goto L_10edb907;
  /* 10edb92c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10edb92e jmp 0x10edbafc */
  goto L_10edbafc;
L_10edb933:;
  /* 10edb933 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edb936 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10edb93b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edb93e je 0x10edb980 */
  if (C.zf) goto L_10edb980;
  /* 10edb940 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edb944 je 0x10edb980 */
  if (C.zf) goto L_10edb980;
  /* 10edb946 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edb949 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10edb94f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edb952 je 0x10edb980 */
  if (C.zf) goto L_10edb980;
  /* 10edb954 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edb958 je 0x10edb980 */
  if (C.zf) goto L_10edb980;
L_10edb95a:;
  /* 10edb95a push 0x10f09594 */
  push32((uint32_t)(0x10f09594u));
  /* 10edb95f push 0x10f095ec */
  push32((uint32_t)(0x10f095ecu));
  /* 10edb964 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edb966 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edb968 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edb96a push 1 */
  push32((uint32_t)(0x1u));
  /* 10edb96c call 0x10eda2e0 */
  push32(0x10edb971u); f_10eda2e0();
  /* 10edb971 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb974 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edb977 jne 0x10edb97a */
  if (!C.zf) goto L_10edb97a;
  /* 10edb979 int3  */
  x86_unimpl("int3 @ 0x10edb979");
L_10edb97a:;
  /* 10edb97a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10edb97c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10edb97e jne 0x10edb95a */
  if (!C.zf) goto L_10edb95a;
L_10edb980:;
  /* 10edb980 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edb983 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb986 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10edb989 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10edb98c push ecx */
  push32((uint32_t)(ECX));
  /* 10edb98d call 0x10ee1fd0 */
  push32(0x10edb992u); f_10ee1fd0();
  /* 10edb992 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb995 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10edb998 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edb99c jne 0x10edb9a5 */
  if (!C.zf) goto L_10edb9a5;
  /* 10edb99e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10edb9a0 jmp 0x10edbafc */
  goto L_10edbafc;
L_10edb9a5:;
  /* 10edb9a5 mov edx, dword ptr [0x10f0cefc] */
  EDX = (r32((uint32_t)(0x10f0cefc)));
  /* 10edb9ab add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edb9ae mov dword ptr [0x10f0cefc], edx */
  w32((uint32_t)(0x10f0cefc), (EDX));
  /* 10edb9b4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edb9b8 je 0x10edba03 */
  if (C.zf) goto L_10edba03;
  /* 10edb9ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb9bd mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10edb9c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb9c6 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10edb9cd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb9d0 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10edb9d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb9da mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 10edb9e1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb9e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edb9e7 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10edb9ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb9ed mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 10edb9f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edb9f7 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 10edb9fe jmp 0x10edbaa3 */
  goto L_10edbaa3;
L_10edba03:;
  /* 10edba03 mov edx, dword ptr [0x10f0f54c] */
  EDX = (r32((uint32_t)(0x10f0f54c)));
  /* 10edba09 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edba0c mov dword ptr [0x10f0f54c], edx */
  w32((uint32_t)(0x10f0f54c), (EDX));
  /* 10edba12 mov eax, dword ptr [0x10f0f554] */
  EAX = (r32((uint32_t)(0x10f0f554)));
  /* 10edba17 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edba1a mov dword ptr [0x10f0f554], eax */
  w32((uint32_t)(0x10f0f554), (EAX));
  /* 10edba1f mov ecx, dword ptr [0x10f0f554] */
  ECX = (r32((uint32_t)(0x10f0f554)));
  /* 10edba25 cmp ecx, dword ptr [0x10f0f558] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10f0f558))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edba2b jbe 0x10edba39 */
  if ((C.cf||C.zf)) goto L_10edba39;
  /* 10edba2d mov edx, dword ptr [0x10f0f554] */
  EDX = (r32((uint32_t)(0x10f0f554)));
  /* 10edba33 mov dword ptr [0x10f0f558], edx */
  w32((uint32_t)(0x10f0f558), (EDX));
L_10edba39:;
  /* 10edba39 cmp dword ptr [0x10f0f550], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f550))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edba40 je 0x10edba4f */
  if (C.zf) goto L_10edba4f;
  /* 10edba42 mov eax, dword ptr [0x10f0f550] */
  EAX = (r32((uint32_t)(0x10f0f550)));
  /* 10edba47 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edba4a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10edba4d jmp 0x10edba58 */
  goto L_10edba58;
L_10edba4f:;
  /* 10edba4f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edba52 mov dword ptr [0x10f0f548], edx */
  w32((uint32_t)(0x10f0f548), (EDX));
L_10edba58:;
  /* 10edba58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edba5b mov ecx, dword ptr [0x10f0f550] */
  ECX = (r32((uint32_t)(0x10f0f550)));
  /* 10edba61 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10edba63 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edba66 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 10edba6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edba70 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edba73 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10edba76 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edba79 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10edba7c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 10edba7f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edba82 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edba85 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10edba88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edba8b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edba8e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 10edba91 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edba94 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edba97 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 10edba9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edba9d mov dword ptr [0x10f0f550], ecx */
  w32((uint32_t)(0x10f0f550), (ECX));
L_10edbaa3:;
  /* 10edbaa3 push 4 */
  push32((uint32_t)(0x4u));
  /* 10edbaa5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10edbaa7 mov dl, byte ptr [0x10f0cf04] */
  DL = (r8((uint32_t)(0x10f0cf04)));
  /* 10edbaad push edx */
  push32((uint32_t)(EDX));
  /* 10edbaae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edbab1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edbab4 push eax */
  push32((uint32_t)(EAX));
  /* 10edbab5 call 0x10ee1b30 */
  push32(0x10edbabau); f_10ee1b30();
  /* 10edbaba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edbabd push 4 */
  push32((uint32_t)(0x4u));
  /* 10edbabf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10edbac1 mov cl, byte ptr [0x10f0cf04] */
  CL = (r8((uint32_t)(0x10f0cf04)));
  /* 10edbac7 push ecx */
  push32((uint32_t)(ECX));
  /* 10edbac8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edbacb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edbace lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 10edbad2 push ecx */
  push32((uint32_t)(ECX));
  /* 10edbad3 call 0x10ee1b30 */
  push32(0x10edbad8u); f_10ee1b30();
  /* 10edbad8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edbadb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edbade push edx */
  push32((uint32_t)(EDX));
  /* 10edbadf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10edbae1 mov al, byte ptr [0x10f0cf06] */
  AL = (r8((uint32_t)(0x10f0cf06)));
  /* 10edbae6 push eax */
  push32((uint32_t)(EAX));
  /* 10edbae7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edbaea add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edbaed push ecx */
  push32((uint32_t)(ECX));
  /* 10edbaee call 0x10ee1b30 */
  push32(0x10edbaf3u); f_10ee1b30();
  /* 10edbaf3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edbaf6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edbaf9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10edbafc:;
  /* 10edbafc pop edi */
  EDI = (pop32());
  /* 10edbafd pop esi */
  ESI = (pop32());
  /* 10edbafe pop ebx */
  EBX = (pop32());
  /* 10edbaff mov esp, ebp */
  ESP = (EBP);
  /* 10edbb01 pop ebp */
  EBP = (pop32());
  /* 10edbb02 ret  */
  ESPCHK(0x10edb7f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bb10 @ 0x10edbb10 (27 bytes, 13 insns) */
void f_10edbb10(void) {
  FTRACE(0x10edbb10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edbb10 push ebp */
  push32((uint32_t)(EBP));
  /* 10edbb11 mov ebp, esp */
  EBP = (ESP);
  /* 10edbb13 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edbb15 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edbb17 push 1 */
  push32((uint32_t)(0x1u));
  /* 10edbb19 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edbb1c push eax */
  push32((uint32_t)(EAX));
  /* 10edbb1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edbb20 push ecx */
  push32((uint32_t)(ECX));
  /* 10edbb21 call 0x10edbb30 */
  push32(0x10edbb26u); f_10edbb30();
  /* 10edbb26 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edbb29 pop ebp */
  EBP = (pop32());
  /* 10edbb2a ret  */
  ESPCHK(0x10edbb10u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x10edbb30 (96 bytes, 37 insns) */
void f_10edbb30(void) {
  FTRACE(0x10edbb30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edbb30 push ebp */
  push32((uint32_t)(EBP));
  /* 10edbb31 mov ebp, esp */
  EBP = (ESP);
  /* 10edbb33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edbb36 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edbb39 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10edbb3d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10edbb40 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10edbb43 push ecx */
  push32((uint32_t)(ECX));
  /* 10edbb44 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10edbb47 push edx */
  push32((uint32_t)(EDX));
  /* 10edbb48 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edbb4b push eax */
  push32((uint32_t)(EAX));
  /* 10edbb4c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edbb4f push ecx */
  push32((uint32_t)(ECX));
  /* 10edbb50 call 0x10edb720 */
  push32(0x10edbb55u); f_10edb720();
  /* 10edbb55 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edbb58 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10edbb5b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edbb5f je 0x10edbb89 */
  if (C.zf) goto L_10edbb89;
  /* 10edbb61 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edbb64 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10edbb67 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edbb6a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edbb6d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10edbb70:;
  /* 10edbb70 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edbb73 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edbb76 jae 0x10edbb89 */
  if (!C.cf) goto L_10edbb89;
  /* 10edbb78 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edbb7b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10edbb7e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edbb81 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edbb84 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10edbb87 jmp 0x10edbb70 */
  goto L_10edbb70;
L_10edbb89:;
  /* 10edbb89 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edbb8c mov esp, ebp */
  ESP = (EBP);
  /* 10edbb8e pop ebp */
  EBP = (pop32());
  /* 10edbb8f ret  */
  ESPCHK(0x10edbb30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bb90 @ 0x10edbb90 (27 bytes, 13 insns) */
void f_10edbb90(void) {
  FTRACE(0x10edbb90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edbb90 push ebp */
  push32((uint32_t)(EBP));
  /* 10edbb91 mov ebp, esp */
  EBP = (ESP);
  /* 10edbb93 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edbb95 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edbb97 push 1 */
  push32((uint32_t)(0x1u));
  /* 10edbb99 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edbb9c push eax */
  push32((uint32_t)(EAX));
  /* 10edbb9d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edbba0 push ecx */
  push32((uint32_t)(ECX));
  /* 10edbba1 call 0x10edbbb0 */
  push32(0x10edbba6u); f_10edbbb0();
  /* 10edbba6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edbba9 pop ebp */
  EBP = (pop32());
  /* 10edbbaa ret  */
  ESPCHK(0x10edbb90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bbb0 @ 0x10edbbb0 (64 bytes, 27 insns) */
void f_10edbbb0(void) {
  FTRACE(0x10edbbb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edbbb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10edbbb1 mov ebp, esp */
  EBP = (ESP);
  /* 10edbbb3 push ecx */
  push32((uint32_t)(ECX));
  /* 10edbbb4 push 9 */
  push32((uint32_t)(0x9u));
  /* 10edbbb6 call 0x10edb620 */
  push32(0x10edbbbbu); f_10edb620();
  /* 10edbbbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edbbbe push 1 */
  push32((uint32_t)(0x1u));
  /* 10edbbc0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10edbbc3 push eax */
  push32((uint32_t)(EAX));
  /* 10edbbc4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10edbbc7 push ecx */
  push32((uint32_t)(ECX));
  /* 10edbbc8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edbbcb push edx */
  push32((uint32_t)(EDX));
  /* 10edbbcc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edbbcf push eax */
  push32((uint32_t)(EAX));
  /* 10edbbd0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edbbd3 push ecx */
  push32((uint32_t)(ECX));
  /* 10edbbd4 call 0x10edbbf0 */
  push32(0x10edbbd9u); f_10edbbf0();
  /* 10edbbd9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edbbdc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10edbbdf push 9 */
  push32((uint32_t)(0x9u));
  /* 10edbbe1 call 0x10edb6c0 */
  push32(0x10edbbe6u); f_10edb6c0();
  /* 10edbbe6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edbbe9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edbbec mov esp, ebp */
  ESP = (EBP);
  /* 10edbbee pop ebp */
  EBP = (pop32());
  /* 10edbbef ret  */
  ESPCHK(0x10edbbb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bbf0 @ 0x10edbbf0 (1297 bytes, 431 insns) */
void f_10edbbf0(void) {
  FTRACE(0x10edbbf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edbbf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10edbbf1 mov ebp, esp */
  EBP = (ESP);
  /* 10edbbf3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edbbf6 push ebx */
  push32((uint32_t)(EBX));
  /* 10edbbf7 push esi */
  push32((uint32_t)(ESI));
  /* 10edbbf8 push edi */
  push32((uint32_t)(EDI));
  /* 10edbbf9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10edbc00 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edbc04 jne 0x10edbc23 */
  if (!C.zf) goto L_10edbc23;
  /* 10edbc06 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10edbc09 push eax */
  push32((uint32_t)(EAX));
  /* 10edbc0a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10edbc0d push ecx */
  push32((uint32_t)(ECX));
  /* 10edbc0e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edbc11 push edx */
  push32((uint32_t)(EDX));
  /* 10edbc12 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edbc15 push eax */
  push32((uint32_t)(EAX));
  /* 10edbc16 call 0x10edb720 */
  push32(0x10edbc1bu); f_10edb720();
  /* 10edbc1b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edbc1e jmp 0x10edc0fa */
  goto L_10edc0fa;
L_10edbc23:;
  /* 10edbc23 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edbc27 je 0x10edbc46 */
  if (C.zf) goto L_10edbc46;
  /* 10edbc29 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edbc2d jne 0x10edbc46 */
  if (!C.zf) goto L_10edbc46;
  /* 10edbc2f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edbc32 push ecx */
  push32((uint32_t)(ECX));
  /* 10edbc33 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edbc36 push edx */
  push32((uint32_t)(EDX));
  /* 10edbc37 call 0x10edc1b0 */
  push32(0x10edbc3cu); f_10edc1b0();
  /* 10edbc3c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edbc3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10edbc41 jmp 0x10edc0fa */
  goto L_10edc0fa;
L_10edbc46:;
  /* 10edbc46 mov eax, dword ptr [0x10f0cef8] */
  EAX = (r32((uint32_t)(0x10f0cef8)));
  /* 10edbc4b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10edbc4e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edbc50 je 0x10edbc82 */
  if (C.zf) goto L_10edbc82;
L_10edbc52:;
  /* 10edbc52 call 0x10edc8c0 */
  push32(0x10edbc57u); f_10edc8c0();
  /* 10edbc57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edbc59 jne 0x10edbc7c */
  if (!C.zf) goto L_10edbc7c;
  /* 10edbc5b push 0x10f09658 */
  push32((uint32_t)(0x10f09658u));
  /* 10edbc60 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edbc62 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 10edbc67 push 0x10f0964c */
  push32((uint32_t)(0x10f0964cu));
  /* 10edbc6c push 2 */
  push32((uint32_t)(0x2u));
  /* 10edbc6e call 0x10eda2e0 */
  push32(0x10edbc73u); f_10eda2e0();
  /* 10edbc73 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edbc76 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edbc79 jne 0x10edbc7c */
  if (!C.zf) goto L_10edbc7c;
  /* 10edbc7b int3  */
  x86_unimpl("int3 @ 0x10edbc7b");
L_10edbc7c:;
  /* 10edbc7c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10edbc7e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10edbc80 jne 0x10edbc52 */
  if (!C.zf) goto L_10edbc52;
L_10edbc82:;
  /* 10edbc82 mov edx, dword ptr [0x10f0cefc] */
  EDX = (r32((uint32_t)(0x10f0cefc)));
  /* 10edbc88 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10edbc8b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10edbc8e cmp eax, dword ptr [0x10f0cf00] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10f0cf00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edbc94 jne 0x10edbc97 */
  if (!C.zf) goto L_10edbc97;
  /* 10edbc96 int3  */
  x86_unimpl("int3 @ 0x10edbc96");
L_10edbc97:;
  /* 10edbc97 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10edbc9a push ecx */
  push32((uint32_t)(ECX));
  /* 10edbc9b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10edbc9e push edx */
  push32((uint32_t)(EDX));
  /* 10edbc9f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10edbca2 push eax */
  push32((uint32_t)(EAX));
  /* 10edbca3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edbca6 push ecx */
  push32((uint32_t)(ECX));
  /* 10edbca7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edbcaa push edx */
  push32((uint32_t)(EDX));
  /* 10edbcab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edbcae push eax */
  push32((uint32_t)(EAX));
  /* 10edbcaf push 2 */
  push32((uint32_t)(0x2u));
  /* 10edbcb1 call dword ptr [0x10f0d230] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f0d230))), 0x10edbcb7u);
  /* 10edbcb7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edbcba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edbcbc jne 0x10edbd1c */
  if (!C.zf) goto L_10edbd1c;
  /* 10edbcbe cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edbcc2 je 0x10edbcef */
  if (C.zf) goto L_10edbcef;
L_10edbcc4:;
  /* 10edbcc4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10edbcc7 push ecx */
  push32((uint32_t)(ECX));
  /* 10edbcc8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10edbccb push edx */
  push32((uint32_t)(EDX));
  /* 10edbccc push 0x10f097d4 */
  push32((uint32_t)(0x10f097d4u));
  /* 10edbcd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edbcd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edbcd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edbcd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edbcd9 call 0x10eda2e0 */
  push32(0x10edbcdeu); f_10eda2e0();
  /* 10edbcde add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edbce1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edbce4 jne 0x10edbce7 */
  if (!C.zf) goto L_10edbce7;
  /* 10edbce6 int3  */
  x86_unimpl("int3 @ 0x10edbce6");
L_10edbce7:;
  /* 10edbce7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10edbce9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edbceb jne 0x10edbcc4 */
  if (!C.zf) goto L_10edbcc4;
  /* 10edbced jmp 0x10edbd15 */
  goto L_10edbd15;
L_10edbcef:;
  /* 10edbcef push 0x10f097b0 */
  push32((uint32_t)(0x10f097b0u));
  /* 10edbcf4 push 0x10f095ec */
  push32((uint32_t)(0x10f095ecu));
  /* 10edbcf9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edbcfb push 0 */
  push32((uint32_t)(0x0u));
  /* 10edbcfd push 0 */
  push32((uint32_t)(0x0u));
  /* 10edbcff push 0 */
  push32((uint32_t)(0x0u));
  /* 10edbd01 call 0x10eda2e0 */
  push32(0x10edbd06u); f_10eda2e0();
  /* 10edbd06 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edbd09 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edbd0c jne 0x10edbd0f */
  if (!C.zf) goto L_10edbd0f;
  /* 10edbd0e int3  */
  x86_unimpl("int3 @ 0x10edbd0e");
L_10edbd0f:;
  /* 10edbd0f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10edbd11 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10edbd13 jne 0x10edbcef */
  if (!C.zf) goto L_10edbcef;
L_10edbd15:;
  /* 10edbd15 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10edbd17 jmp 0x10edc0fa */
  goto L_10edc0fa;
L_10edbd1c:;
  /* 10edbd1c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edbd20 jbe 0x10edbd4e */
  if ((C.cf||C.zf)) goto L_10edbd4e;
L_10edbd22:;
  /* 10edbd22 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edbd25 push edx */
  push32((uint32_t)(EDX));
  /* 10edbd26 push 0x10f09780 */
  push32((uint32_t)(0x10f09780u));
  /* 10edbd2b push 0 */
  push32((uint32_t)(0x0u));
  /* 10edbd2d push 0 */
  push32((uint32_t)(0x0u));
  /* 10edbd2f push 0 */
  push32((uint32_t)(0x0u));
  /* 10edbd31 push 1 */
  push32((uint32_t)(0x1u));
  /* 10edbd33 call 0x10eda2e0 */
  push32(0x10edbd38u); f_10eda2e0();
  /* 10edbd38 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edbd3b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edbd3e jne 0x10edbd41 */
  if (!C.zf) goto L_10edbd41;
  /* 10edbd40 int3  */
  x86_unimpl("int3 @ 0x10edbd40");
L_10edbd41:;
  /* 10edbd41 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10edbd43 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edbd45 jne 0x10edbd22 */
  if (!C.zf) goto L_10edbd22;
  /* 10edbd47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10edbd49 jmp 0x10edc0fa */
  goto L_10edc0fa;
L_10edbd4e:;
  /* 10edbd4e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edbd52 je 0x10edbd96 */
  if (C.zf) goto L_10edbd96;
  /* 10edbd54 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edbd57 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10edbd5d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edbd60 je 0x10edbd96 */
  if (C.zf) goto L_10edbd96;
  /* 10edbd62 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edbd65 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10edbd6b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edbd6e je 0x10edbd96 */
  if (C.zf) goto L_10edbd96;
L_10edbd70:;
  /* 10edbd70 push 0x10f09594 */
  push32((uint32_t)(0x10f09594u));
  /* 10edbd75 push 0x10f095ec */
  push32((uint32_t)(0x10f095ecu));
  /* 10edbd7a push 0 */
  push32((uint32_t)(0x0u));
  /* 10edbd7c push 0 */
  push32((uint32_t)(0x0u));
  /* 10edbd7e push 0 */
  push32((uint32_t)(0x0u));
  /* 10edbd80 push 1 */
  push32((uint32_t)(0x1u));
  /* 10edbd82 call 0x10eda2e0 */
  push32(0x10edbd87u); f_10eda2e0();
  /* 10edbd87 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edbd8a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edbd8d jne 0x10edbd90 */
  if (!C.zf) goto L_10edbd90;
  /* 10edbd8f int3  */
  x86_unimpl("int3 @ 0x10edbd8f");
L_10edbd90:;
  /* 10edbd90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10edbd92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edbd94 jne 0x10edbd70 */
  if (!C.zf) goto L_10edbd70;
L_10edbd96:;
  /* 10edbd96 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edbd99 push ecx */
  push32((uint32_t)(ECX));
  /* 10edbd9a call 0x10edcd20 */
  push32(0x10edbd9fu); f_10edcd20();
  /* 10edbd9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edbda2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edbda4 jne 0x10edbdc7 */
  if (!C.zf) goto L_10edbdc7;
  /* 10edbda6 push 0x10f0975c */
  push32((uint32_t)(0x10f0975cu));
  /* 10edbdab push 0 */
  push32((uint32_t)(0x0u));
  /* 10edbdad push 0x261 */
  push32((uint32_t)(0x261u));
  /* 10edbdb2 push 0x10f0964c */
  push32((uint32_t)(0x10f0964cu));
  /* 10edbdb7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10edbdb9 call 0x10eda2e0 */
  push32(0x10edbdbeu); f_10eda2e0();
  /* 10edbdbe add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edbdc1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edbdc4 jne 0x10edbdc7 */
  if (!C.zf) goto L_10edbdc7;
  /* 10edbdc6 int3  */
  x86_unimpl("int3 @ 0x10edbdc6");
L_10edbdc7:;
  /* 10edbdc7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10edbdc9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10edbdcb jne 0x10edbd96 */
  if (!C.zf) goto L_10edbd96;
  /* 10edbdcd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edbdd0 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edbdd3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10edbdd6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edbdd9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edbddd jne 0x10edbde6 */
  if (!C.zf) goto L_10edbde6;
  /* 10edbddf mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_10edbde6:;
  /* 10edbde6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edbdea je 0x10edbe2a */
  if (C.zf) goto L_10edbe2a;
L_10edbdec:;
  /* 10edbdec mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edbdef cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edbdf6 jne 0x10edbe01 */
  if (!C.zf) goto L_10edbe01;
  /* 10edbdf8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edbdfb cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edbdff je 0x10edbe22 */
  if (C.zf) goto L_10edbe22;
L_10edbe01:;
  /* 10edbe01 push 0x10f09714 */
  push32((uint32_t)(0x10f09714u));
  /* 10edbe06 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edbe08 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 10edbe0d push 0x10f0964c */
  push32((uint32_t)(0x10f0964cu));
  /* 10edbe12 push 2 */
  push32((uint32_t)(0x2u));
  /* 10edbe14 call 0x10eda2e0 */
  push32(0x10edbe19u); f_10eda2e0();
  /* 10edbe19 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edbe1c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edbe1f jne 0x10edbe22 */
  if (!C.zf) goto L_10edbe22;
  /* 10edbe21 int3  */
  x86_unimpl("int3 @ 0x10edbe21");
L_10edbe22:;
  /* 10edbe22 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10edbe24 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10edbe26 jne 0x10edbdec */
  if (!C.zf) goto L_10edbdec;
  /* 10edbe28 jmp 0x10edbe8e */
  goto L_10edbe8e;
L_10edbe2a:;
  /* 10edbe2a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edbe2d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10edbe30 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10edbe35 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edbe38 jne 0x10edbe4f */
  if (!C.zf) goto L_10edbe4f;
  /* 10edbe3a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edbe3d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10edbe43 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edbe46 jne 0x10edbe4f */
  if (!C.zf) goto L_10edbe4f;
  /* 10edbe48 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_10edbe4f:;
  /* 10edbe4f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edbe52 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10edbe55 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10edbe5a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edbe5d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10edbe63 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edbe65 je 0x10edbe88 */
  if (C.zf) goto L_10edbe88;
  /* 10edbe67 push 0x10f096d8 */
  push32((uint32_t)(0x10f096d8u));
  /* 10edbe6c push 0 */
  push32((uint32_t)(0x0u));
  /* 10edbe6e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 10edbe73 push 0x10f0964c */
  push32((uint32_t)(0x10f0964cu));
  /* 10edbe78 push 2 */
  push32((uint32_t)(0x2u));
  /* 10edbe7a call 0x10eda2e0 */
  push32(0x10edbe7fu); f_10eda2e0();
  /* 10edbe7f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edbe82 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edbe85 jne 0x10edbe88 */
  if (!C.zf) goto L_10edbe88;
  /* 10edbe87 int3  */
  x86_unimpl("int3 @ 0x10edbe87");
L_10edbe88:;
  /* 10edbe88 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10edbe8a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10edbe8c jne 0x10edbe4f */
  if (!C.zf) goto L_10edbe4f;
L_10edbe8e:;
  /* 10edbe8e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edbe92 je 0x10edbeb9 */
  if (C.zf) goto L_10edbeb9;
  /* 10edbe94 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edbe97 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edbe9a push eax */
  push32((uint32_t)(EAX));
  /* 10edbe9b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edbe9e push ecx */
  push32((uint32_t)(ECX));
  /* 10edbe9f call 0x10ee2100 */
  push32(0x10edbea4u); f_10ee2100();
  /* 10edbea4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edbea7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10edbeaa cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edbeae jne 0x10edbeb7 */
  if (!C.zf) goto L_10edbeb7;
  /* 10edbeb0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10edbeb2 jmp 0x10edc0fa */
  goto L_10edc0fa;
L_10edbeb7:;
  /* 10edbeb7 jmp 0x10edbedc */
  goto L_10edbedc;
L_10edbeb9:;
  /* 10edbeb9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edbebc add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edbebf push edx */
  push32((uint32_t)(EDX));
  /* 10edbec0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edbec3 push eax */
  push32((uint32_t)(EAX));
  /* 10edbec4 call 0x10ee2050 */
  push32(0x10edbec9u); f_10ee2050();
  /* 10edbec9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edbecc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10edbecf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edbed3 jne 0x10edbedc */
  if (!C.zf) goto L_10edbedc;
  /* 10edbed5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10edbed7 jmp 0x10edc0fa */
  goto L_10edc0fa;
L_10edbedc:;
  /* 10edbedc mov ecx, dword ptr [0x10f0cefc] */
  ECX = (r32((uint32_t)(0x10f0cefc)));
  /* 10edbee2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edbee5 mov dword ptr [0x10f0cefc], ecx */
  w32((uint32_t)(0x10f0cefc), (ECX));
  /* 10edbeeb cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edbeef jne 0x10edbf47 */
  if (!C.zf) goto L_10edbf47;
  /* 10edbef1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edbef4 mov eax, dword ptr [0x10f0f54c] */
  EAX = (r32((uint32_t)(0x10f0f54c)));
  /* 10edbef9 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edbefc mov dword ptr [0x10f0f54c], eax */
  w32((uint32_t)(0x10f0f54c), (EAX));
  /* 10edbf01 mov ecx, dword ptr [0x10f0f54c] */
  ECX = (r32((uint32_t)(0x10f0f54c)));
  /* 10edbf07 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edbf0a mov dword ptr [0x10f0f54c], ecx */
  w32((uint32_t)(0x10f0f54c), (ECX));
  /* 10edbf10 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edbf13 mov eax, dword ptr [0x10f0f554] */
  EAX = (r32((uint32_t)(0x10f0f554)));
  /* 10edbf18 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edbf1b mov dword ptr [0x10f0f554], eax */
  w32((uint32_t)(0x10f0f554), (EAX));
  /* 10edbf20 mov ecx, dword ptr [0x10f0f554] */
  ECX = (r32((uint32_t)(0x10f0f554)));
  /* 10edbf26 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edbf29 mov dword ptr [0x10f0f554], ecx */
  w32((uint32_t)(0x10f0f554), (ECX));
  /* 10edbf2f mov edx, dword ptr [0x10f0f554] */
  EDX = (r32((uint32_t)(0x10f0f554)));
  /* 10edbf35 cmp edx, dword ptr [0x10f0f558] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10f0f558))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edbf3b jbe 0x10edbf47 */
  if ((C.cf||C.zf)) goto L_10edbf47;
  /* 10edbf3d mov eax, dword ptr [0x10f0f554] */
  EAX = (r32((uint32_t)(0x10f0f554)));
  /* 10edbf42 mov dword ptr [0x10f0f558], eax */
  w32((uint32_t)(0x10f0f558), (EAX));
L_10edbf47:;
  /* 10edbf47 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edbf4a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edbf4d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10edbf50 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edbf53 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edbf56 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edbf59 jbe 0x10edbf7f */
  if ((C.cf||C.zf)) goto L_10edbf7f;
  /* 10edbf5b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edbf5e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edbf61 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edbf64 push edx */
  push32((uint32_t)(EDX));
  /* 10edbf65 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10edbf67 mov al, byte ptr [0x10f0cf06] */
  AL = (r8((uint32_t)(0x10f0cf06)));
  /* 10edbf6c push eax */
  push32((uint32_t)(EAX));
  /* 10edbf6d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edbf70 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edbf73 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edbf76 push edx */
  push32((uint32_t)(EDX));
  /* 10edbf77 call 0x10ee1b30 */
  push32(0x10edbf7cu); f_10ee1b30();
  /* 10edbf7c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10edbf7f:;
  /* 10edbf7f push 4 */
  push32((uint32_t)(0x4u));
  /* 10edbf81 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10edbf83 mov al, byte ptr [0x10f0cf04] */
  AL = (r8((uint32_t)(0x10f0cf04)));
  /* 10edbf88 push eax */
  push32((uint32_t)(EAX));
  /* 10edbf89 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edbf8c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edbf8f push ecx */
  push32((uint32_t)(ECX));
  /* 10edbf90 call 0x10ee1b30 */
  push32(0x10edbf95u); f_10ee1b30();
  /* 10edbf95 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edbf98 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edbf9c jne 0x10edbfb9 */
  if (!C.zf) goto L_10edbfb9;
  /* 10edbf9e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edbfa1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10edbfa4 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10edbfa7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edbfaa mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10edbfad mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 10edbfb0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edbfb3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10edbfb6 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_10edbfb9:;
  /* 10edbfb9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edbfbc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edbfbf mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_10edbfc2:;
  /* 10edbfc2 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edbfc6 jne 0x10edbff7 */
  if (!C.zf) goto L_10edbff7;
  /* 10edbfc8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edbfcc jne 0x10edbfd6 */
  if (!C.zf) goto L_10edbfd6;
  /* 10edbfce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edbfd1 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edbfd4 je 0x10edbff7 */
  if (C.zf) goto L_10edbff7;
L_10edbfd6:;
  /* 10edbfd6 push 0x10f096a4 */
  push32((uint32_t)(0x10f096a4u));
  /* 10edbfdb push 0 */
  push32((uint32_t)(0x0u));
  /* 10edbfdd push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 10edbfe2 push 0x10f0964c */
  push32((uint32_t)(0x10f0964cu));
  /* 10edbfe7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10edbfe9 call 0x10eda2e0 */
  push32(0x10edbfeeu); f_10eda2e0();
  /* 10edbfee add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edbff1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edbff4 jne 0x10edbff7 */
  if (!C.zf) goto L_10edbff7;
  /* 10edbff6 int3  */
  x86_unimpl("int3 @ 0x10edbff6");
L_10edbff7:;
  /* 10edbff7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10edbff9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10edbffb jne 0x10edbfc2 */
  if (!C.zf) goto L_10edbfc2;
  /* 10edbffd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edc000 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc003 je 0x10edc00b */
  if (C.zf) goto L_10edc00b;
  /* 10edc005 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc009 je 0x10edc013 */
  if (C.zf) goto L_10edc013;
L_10edc00b:;
  /* 10edc00b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edc00e jmp 0x10edc0fa */
  goto L_10edc0fa;
L_10edc013:;
  /* 10edc013 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edc016 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc019 je 0x10edc02b */
  if (C.zf) goto L_10edc02b;
  /* 10edc01b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edc01e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10edc020 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edc023 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10edc026 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10edc029 jmp 0x10edc067 */
  goto L_10edc067;
L_10edc02b:;
  /* 10edc02b mov eax, dword ptr [0x10f0f548] */
  EAX = (r32((uint32_t)(0x10f0f548)));
  /* 10edc030 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc033 je 0x10edc056 */
  if (C.zf) goto L_10edc056;
  /* 10edc035 push 0x10f09688 */
  push32((uint32_t)(0x10f09688u));
  /* 10edc03a push 0 */
  push32((uint32_t)(0x0u));
  /* 10edc03c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 10edc041 push 0x10f0964c */
  push32((uint32_t)(0x10f0964cu));
  /* 10edc046 push 2 */
  push32((uint32_t)(0x2u));
  /* 10edc048 call 0x10eda2e0 */
  push32(0x10edc04du); f_10eda2e0();
  /* 10edc04d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edc050 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc053 jne 0x10edc056 */
  if (!C.zf) goto L_10edc056;
  /* 10edc055 int3  */
  x86_unimpl("int3 @ 0x10edc055");
L_10edc056:;
  /* 10edc056 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10edc058 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10edc05a jne 0x10edc02b */
  if (!C.zf) goto L_10edc02b;
  /* 10edc05c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edc05f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10edc062 mov dword ptr [0x10f0f548], eax */
  w32((uint32_t)(0x10f0f548), (EAX));
L_10edc067:;
  /* 10edc067 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edc06a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc06e je 0x10edc07f */
  if (C.zf) goto L_10edc07f;
  /* 10edc070 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edc073 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10edc076 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edc079 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10edc07b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10edc07d jmp 0x10edc0ba */
  goto L_10edc0ba;
L_10edc07f:;
  /* 10edc07f mov eax, dword ptr [0x10f0f550] */
  EAX = (r32((uint32_t)(0x10f0f550)));
  /* 10edc084 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc087 je 0x10edc0aa */
  if (C.zf) goto L_10edc0aa;
  /* 10edc089 push 0x10f0966c */
  push32((uint32_t)(0x10f0966cu));
  /* 10edc08e push 0 */
  push32((uint32_t)(0x0u));
  /* 10edc090 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 10edc095 push 0x10f0964c */
  push32((uint32_t)(0x10f0964cu));
  /* 10edc09a push 2 */
  push32((uint32_t)(0x2u));
  /* 10edc09c call 0x10eda2e0 */
  push32(0x10edc0a1u); f_10eda2e0();
  /* 10edc0a1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edc0a4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc0a7 jne 0x10edc0aa */
  if (!C.zf) goto L_10edc0aa;
  /* 10edc0a9 int3  */
  x86_unimpl("int3 @ 0x10edc0a9");
L_10edc0aa:;
  /* 10edc0aa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10edc0ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10edc0ae jne 0x10edc07f */
  if (!C.zf) goto L_10edc07f;
  /* 10edc0b0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edc0b3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10edc0b5 mov dword ptr [0x10f0f550], eax */
  w32((uint32_t)(0x10f0f550), (EAX));
L_10edc0ba:;
  /* 10edc0ba cmp dword ptr [0x10f0f550], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f550))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc0c1 je 0x10edc0d1 */
  if (C.zf) goto L_10edc0d1;
  /* 10edc0c3 mov ecx, dword ptr [0x10f0f550] */
  ECX = (r32((uint32_t)(0x10f0f550)));
  /* 10edc0c9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edc0cc mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10edc0cf jmp 0x10edc0d9 */
  goto L_10edc0d9;
L_10edc0d1:;
  /* 10edc0d1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edc0d4 mov dword ptr [0x10f0f548], eax */
  w32((uint32_t)(0x10f0f548), (EAX));
L_10edc0d9:;
  /* 10edc0d9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edc0dc mov edx, dword ptr [0x10f0f550] */
  EDX = (r32((uint32_t)(0x10f0f550)));
  /* 10edc0e2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10edc0e4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edc0e7 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 10edc0ee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edc0f1 mov dword ptr [0x10f0f550], ecx */
  w32((uint32_t)(0x10f0f550), (ECX));
  /* 10edc0f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10edc0fa:;
  /* 10edc0fa pop edi */
  EDI = (pop32());
  /* 10edc0fb pop esi */
  ESI = (pop32());
  /* 10edc0fc pop ebx */
  EBX = (pop32());
  /* 10edc0fd mov esp, ebp */
  ESP = (EBP);
  /* 10edc0ff pop ebp */
  EBP = (pop32());
  /* 10edc100 ret  */
  ESPCHK(0x10edbbf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c110 @ 0x10edc110 (27 bytes, 13 insns) */
void f_10edc110(void) {
  FTRACE(0x10edc110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edc110 push ebp */
  push32((uint32_t)(EBP));
  /* 10edc111 mov ebp, esp */
  EBP = (ESP);
  /* 10edc113 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edc115 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edc117 push 1 */
  push32((uint32_t)(0x1u));
  /* 10edc119 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edc11c push eax */
  push32((uint32_t)(EAX));
  /* 10edc11d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edc120 push ecx */
  push32((uint32_t)(ECX));
  /* 10edc121 call 0x10edc130 */
  push32(0x10edc126u); f_10edc130();
  /* 10edc126 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edc129 pop ebp */
  EBP = (pop32());
  /* 10edc12a ret  */
  ESPCHK(0x10edc110u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c130 @ 0x10edc130 (64 bytes, 27 insns) */
void f_10edc130(void) {
  FTRACE(0x10edc130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edc130 push ebp */
  push32((uint32_t)(EBP));
  /* 10edc131 mov ebp, esp */
  EBP = (ESP);
  /* 10edc133 push ecx */
  push32((uint32_t)(ECX));
  /* 10edc134 push 9 */
  push32((uint32_t)(0x9u));
  /* 10edc136 call 0x10edb620 */
  push32(0x10edc13bu); f_10edb620();
  /* 10edc13b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edc13e push 0 */
  push32((uint32_t)(0x0u));
  /* 10edc140 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10edc143 push eax */
  push32((uint32_t)(EAX));
  /* 10edc144 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10edc147 push ecx */
  push32((uint32_t)(ECX));
  /* 10edc148 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edc14b push edx */
  push32((uint32_t)(EDX));
  /* 10edc14c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edc14f push eax */
  push32((uint32_t)(EAX));
  /* 10edc150 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edc153 push ecx */
  push32((uint32_t)(ECX));
  /* 10edc154 call 0x10edbbf0 */
  push32(0x10edc159u); f_10edbbf0();
  /* 10edc159 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edc15c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10edc15f push 9 */
  push32((uint32_t)(0x9u));
  /* 10edc161 call 0x10edb6c0 */
  push32(0x10edc166u); f_10edb6c0();
  /* 10edc166 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edc169 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edc16c mov esp, ebp */
  ESP = (EBP);
  /* 10edc16e pop ebp */
  EBP = (pop32());
  /* 10edc16f ret  */
  ESPCHK(0x10edc130u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c170 @ 0x10edc170 (19 bytes, 9 insns) */
void f_10edc170(void) {
  FTRACE(0x10edc170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edc170 push ebp */
  push32((uint32_t)(EBP));
  /* 10edc171 mov ebp, esp */
  EBP = (ESP);
  /* 10edc173 push 1 */
  push32((uint32_t)(0x1u));
  /* 10edc175 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edc178 push eax */
  push32((uint32_t)(EAX));
  /* 10edc179 call 0x10edc1b0 */
  push32(0x10edc17eu); f_10edc1b0();
  /* 10edc17e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edc181 pop ebp */
  EBP = (pop32());
  /* 10edc182 ret  */
  ESPCHK(0x10edc170u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c190 @ 0x10edc190 (19 bytes, 9 insns) */
void f_10edc190(void) {
  FTRACE(0x10edc190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edc190 push ebp */
  push32((uint32_t)(EBP));
  /* 10edc191 mov ebp, esp */
  EBP = (ESP);
  /* 10edc193 push 1 */
  push32((uint32_t)(0x1u));
  /* 10edc195 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edc198 push eax */
  push32((uint32_t)(EAX));
  /* 10edc199 call 0x10edc1e0 */
  push32(0x10edc19eu); f_10edc1e0();
  /* 10edc19e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edc1a1 pop ebp */
  EBP = (pop32());
  /* 10edc1a2 ret  */
  ESPCHK(0x10edc190u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1b0 @ 0x10edc1b0 (41 bytes, 16 insns) */
void f_10edc1b0(void) {
  FTRACE(0x10edc1b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edc1b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10edc1b1 mov ebp, esp */
  EBP = (ESP);
  /* 10edc1b3 push 9 */
  push32((uint32_t)(0x9u));
  /* 10edc1b5 call 0x10edb620 */
  push32(0x10edc1bau); f_10edb620();
  /* 10edc1ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edc1bd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edc1c0 push eax */
  push32((uint32_t)(EAX));
  /* 10edc1c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edc1c4 push ecx */
  push32((uint32_t)(ECX));
  /* 10edc1c5 call 0x10edc1e0 */
  push32(0x10edc1cau); f_10edc1e0();
  /* 10edc1ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edc1cd push 9 */
  push32((uint32_t)(0x9u));
  /* 10edc1cf call 0x10edb6c0 */
  push32(0x10edc1d4u); f_10edb6c0();
  /* 10edc1d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edc1d7 pop ebp */
  EBP = (pop32());
  /* 10edc1d8 ret  */
  ESPCHK(0x10edc1b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1e0 @ 0x10edc1e0 (1004 bytes, 342 insns) */
void f_10edc1e0(void) {
  FTRACE(0x10edc1e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edc1e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10edc1e1 mov ebp, esp */
  EBP = (ESP);
  /* 10edc1e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10edc1e4 push ebx */
  push32((uint32_t)(EBX));
  /* 10edc1e5 push esi */
  push32((uint32_t)(ESI));
  /* 10edc1e6 push edi */
  push32((uint32_t)(EDI));
  /* 10edc1e7 mov eax, dword ptr [0x10f0cef8] */
  EAX = (r32((uint32_t)(0x10f0cef8)));
  /* 10edc1ec and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10edc1ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edc1f1 je 0x10edc223 */
  if (C.zf) goto L_10edc223;
L_10edc1f3:;
  /* 10edc1f3 call 0x10edc8c0 */
  push32(0x10edc1f8u); f_10edc8c0();
  /* 10edc1f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edc1fa jne 0x10edc21d */
  if (!C.zf) goto L_10edc21d;
  /* 10edc1fc push 0x10f09658 */
  push32((uint32_t)(0x10f09658u));
  /* 10edc201 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edc203 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 10edc208 push 0x10f0964c */
  push32((uint32_t)(0x10f0964cu));
  /* 10edc20d push 2 */
  push32((uint32_t)(0x2u));
  /* 10edc20f call 0x10eda2e0 */
  push32(0x10edc214u); f_10eda2e0();
  /* 10edc214 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edc217 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc21a jne 0x10edc21d */
  if (!C.zf) goto L_10edc21d;
  /* 10edc21c int3  */
  x86_unimpl("int3 @ 0x10edc21c");
L_10edc21d:;
  /* 10edc21d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10edc21f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10edc221 jne 0x10edc1f3 */
  if (!C.zf) goto L_10edc1f3;
L_10edc223:;
  /* 10edc223 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc227 jne 0x10edc22e */
  if (!C.zf) goto L_10edc22e;
  /* 10edc229 jmp 0x10edc5c5 */
  goto L_10edc5c5;
L_10edc22e:;
  /* 10edc22e push 0 */
  push32((uint32_t)(0x0u));
  /* 10edc230 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edc232 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edc234 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edc237 push edx */
  push32((uint32_t)(EDX));
  /* 10edc238 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edc23a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edc23d push eax */
  push32((uint32_t)(EAX));
  /* 10edc23e push 3 */
  push32((uint32_t)(0x3u));
  /* 10edc240 call dword ptr [0x10f0d230] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f0d230))), 0x10edc246u);
  /* 10edc246 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edc249 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edc24b jne 0x10edc278 */
  if (!C.zf) goto L_10edc278;
L_10edc24d:;
  /* 10edc24d push 0x10f098f4 */
  push32((uint32_t)(0x10f098f4u));
  /* 10edc252 push 0x10f095ec */
  push32((uint32_t)(0x10f095ecu));
  /* 10edc257 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edc259 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edc25b push 0 */
  push32((uint32_t)(0x0u));
  /* 10edc25d push 0 */
  push32((uint32_t)(0x0u));
  /* 10edc25f call 0x10eda2e0 */
  push32(0x10edc264u); f_10eda2e0();
  /* 10edc264 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edc267 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc26a jne 0x10edc26d */
  if (!C.zf) goto L_10edc26d;
  /* 10edc26c int3  */
  x86_unimpl("int3 @ 0x10edc26c");
L_10edc26d:;
  /* 10edc26d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10edc26f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10edc271 jne 0x10edc24d */
  if (!C.zf) goto L_10edc24d;
  /* 10edc273 jmp 0x10edc5c5 */
  goto L_10edc5c5;
L_10edc278:;
  /* 10edc278 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edc27b push edx */
  push32((uint32_t)(EDX));
  /* 10edc27c call 0x10edcd20 */
  push32(0x10edc281u); f_10edcd20();
  /* 10edc281 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edc284 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edc286 jne 0x10edc2a9 */
  if (!C.zf) goto L_10edc2a9;
  /* 10edc288 push 0x10f0975c */
  push32((uint32_t)(0x10f0975cu));
  /* 10edc28d push 0 */
  push32((uint32_t)(0x0u));
  /* 10edc28f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 10edc294 push 0x10f0964c */
  push32((uint32_t)(0x10f0964cu));
  /* 10edc299 push 2 */
  push32((uint32_t)(0x2u));
  /* 10edc29b call 0x10eda2e0 */
  push32(0x10edc2a0u); f_10eda2e0();
  /* 10edc2a0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edc2a3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc2a6 jne 0x10edc2a9 */
  if (!C.zf) goto L_10edc2a9;
  /* 10edc2a8 int3  */
  x86_unimpl("int3 @ 0x10edc2a8");
L_10edc2a9:;
  /* 10edc2a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10edc2ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edc2ad jne 0x10edc278 */
  if (!C.zf) goto L_10edc278;
  /* 10edc2af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edc2b2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edc2b5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10edc2b8:;
  /* 10edc2b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edc2bb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10edc2be and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10edc2c3 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc2c6 je 0x10edc30b */
  if (C.zf) goto L_10edc30b;
  /* 10edc2c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edc2cb cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc2cf je 0x10edc30b */
  if (C.zf) goto L_10edc30b;
  /* 10edc2d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edc2d4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10edc2d7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10edc2dc cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc2df je 0x10edc30b */
  if (C.zf) goto L_10edc30b;
  /* 10edc2e1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edc2e4 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc2e8 je 0x10edc30b */
  if (C.zf) goto L_10edc30b;
  /* 10edc2ea push 0x10f09274 */
  push32((uint32_t)(0x10f09274u));
  /* 10edc2ef push 0 */
  push32((uint32_t)(0x0u));
  /* 10edc2f1 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 10edc2f6 push 0x10f0964c */
  push32((uint32_t)(0x10f0964cu));
  /* 10edc2fb push 2 */
  push32((uint32_t)(0x2u));
  /* 10edc2fd call 0x10eda2e0 */
  push32(0x10edc302u); f_10eda2e0();
  /* 10edc302 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edc305 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc308 jne 0x10edc30b */
  if (!C.zf) goto L_10edc30b;
  /* 10edc30a int3  */
  x86_unimpl("int3 @ 0x10edc30a");
L_10edc30b:;
  /* 10edc30b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10edc30d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10edc30f jne 0x10edc2b8 */
  if (!C.zf) goto L_10edc2b8;
  /* 10edc311 mov eax, dword ptr [0x10f0cef8] */
  EAX = (r32((uint32_t)(0x10f0cef8)));
  /* 10edc316 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10edc319 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edc31b jne 0x10edc3e6 */
  if (!C.zf) goto L_10edc3e6;
  /* 10edc321 push 4 */
  push32((uint32_t)(0x4u));
  /* 10edc323 mov cl, byte ptr [0x10f0cf04] */
  CL = (r8((uint32_t)(0x10f0cf04)));
  /* 10edc329 push ecx */
  push32((uint32_t)(ECX));
  /* 10edc32a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edc32d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edc330 push edx */
  push32((uint32_t)(EDX));
  /* 10edc331 call 0x10edc830 */
  push32(0x10edc336u); f_10edc830();
  /* 10edc336 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edc339 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edc33b jne 0x10edc380 */
  if (!C.zf) goto L_10edc380;
L_10edc33d:;
  /* 10edc33d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edc340 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edc343 push eax */
  push32((uint32_t)(EAX));
  /* 10edc344 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edc347 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10edc34a push edx */
  push32((uint32_t)(EDX));
  /* 10edc34b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edc34e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10edc351 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10edc357 mov edx, dword ptr [ecx*4 + 0x10f0cf08] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10f0cf08)));
  /* 10edc35e push edx */
  push32((uint32_t)(EDX));
  /* 10edc35f push 0x10f098c8 */
  push32((uint32_t)(0x10f098c8u));
  /* 10edc364 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edc366 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edc368 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edc36a push 1 */
  push32((uint32_t)(0x1u));
  /* 10edc36c call 0x10eda2e0 */
  push32(0x10edc371u); f_10eda2e0();
  /* 10edc371 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edc374 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc377 jne 0x10edc37a */
  if (!C.zf) goto L_10edc37a;
  /* 10edc379 int3  */
  x86_unimpl("int3 @ 0x10edc379");
L_10edc37a:;
  /* 10edc37a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10edc37c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edc37e jne 0x10edc33d */
  if (!C.zf) goto L_10edc33d;
L_10edc380:;
  /* 10edc380 push 4 */
  push32((uint32_t)(0x4u));
  /* 10edc382 mov cl, byte ptr [0x10f0cf04] */
  CL = (r8((uint32_t)(0x10f0cf04)));
  /* 10edc388 push ecx */
  push32((uint32_t)(ECX));
  /* 10edc389 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edc38c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10edc38f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edc392 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10edc396 push edx */
  push32((uint32_t)(EDX));
  /* 10edc397 call 0x10edc830 */
  push32(0x10edc39cu); f_10edc830();
  /* 10edc39c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edc39f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edc3a1 jne 0x10edc3e6 */
  if (!C.zf) goto L_10edc3e6;
L_10edc3a3:;
  /* 10edc3a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edc3a6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edc3a9 push eax */
  push32((uint32_t)(EAX));
  /* 10edc3aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edc3ad mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10edc3b0 push edx */
  push32((uint32_t)(EDX));
  /* 10edc3b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edc3b4 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10edc3b7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10edc3bd mov edx, dword ptr [ecx*4 + 0x10f0cf08] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10f0cf08)));
  /* 10edc3c4 push edx */
  push32((uint32_t)(EDX));
  /* 10edc3c5 push 0x10f0989c */
  push32((uint32_t)(0x10f0989cu));
  /* 10edc3ca push 0 */
  push32((uint32_t)(0x0u));
  /* 10edc3cc push 0 */
  push32((uint32_t)(0x0u));
  /* 10edc3ce push 0 */
  push32((uint32_t)(0x0u));
  /* 10edc3d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10edc3d2 call 0x10eda2e0 */
  push32(0x10edc3d7u); f_10eda2e0();
  /* 10edc3d7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edc3da cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc3dd jne 0x10edc3e0 */
  if (!C.zf) goto L_10edc3e0;
  /* 10edc3df int3  */
  x86_unimpl("int3 @ 0x10edc3df");
L_10edc3e0:;
  /* 10edc3e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10edc3e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edc3e4 jne 0x10edc3a3 */
  if (!C.zf) goto L_10edc3a3;
L_10edc3e6:;
  /* 10edc3e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edc3e9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc3ed jne 0x10edc45b */
  if (!C.zf) goto L_10edc45b;
L_10edc3ef:;
  /* 10edc3ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edc3f2 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc3f9 jne 0x10edc404 */
  if (!C.zf) goto L_10edc404;
  /* 10edc3fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edc3fe cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc402 je 0x10edc425 */
  if (C.zf) goto L_10edc425;
L_10edc404:;
  /* 10edc404 push 0x10f0985c */
  push32((uint32_t)(0x10f0985cu));
  /* 10edc409 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edc40b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 10edc410 push 0x10f0964c */
  push32((uint32_t)(0x10f0964cu));
  /* 10edc415 push 2 */
  push32((uint32_t)(0x2u));
  /* 10edc417 call 0x10eda2e0 */
  push32(0x10edc41cu); f_10eda2e0();
  /* 10edc41c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edc41f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc422 jne 0x10edc425 */
  if (!C.zf) goto L_10edc425;
  /* 10edc424 int3  */
  x86_unimpl("int3 @ 0x10edc424");
L_10edc425:;
  /* 10edc425 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10edc427 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10edc429 jne 0x10edc3ef */
  if (!C.zf) goto L_10edc3ef;
  /* 10edc42b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edc42e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10edc431 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edc434 push eax */
  push32((uint32_t)(EAX));
  /* 10edc435 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10edc437 mov cl, byte ptr [0x10f0cf05] */
  CL = (r8((uint32_t)(0x10f0cf05)));
  /* 10edc43d push ecx */
  push32((uint32_t)(ECX));
  /* 10edc43e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edc441 push edx */
  push32((uint32_t)(EDX));
  /* 10edc442 call 0x10ee1b30 */
  push32(0x10edc447u); f_10ee1b30();
  /* 10edc447 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edc44a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edc44d push eax */
  push32((uint32_t)(EAX));
  /* 10edc44e call 0x10ee22f0 */
  push32(0x10edc453u); f_10ee22f0();
  /* 10edc453 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edc456 jmp 0x10edc5c5 */
  goto L_10edc5c5;
L_10edc45b:;
  /* 10edc45b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edc45e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc462 jne 0x10edc471 */
  if (!C.zf) goto L_10edc471;
  /* 10edc464 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc468 jne 0x10edc471 */
  if (!C.zf) goto L_10edc471;
  /* 10edc46a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10edc471:;
  /* 10edc471 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edc474 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10edc477 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc47a je 0x10edc49d */
  if (C.zf) goto L_10edc49d;
  /* 10edc47c push 0x10f0983c */
  push32((uint32_t)(0x10f0983cu));
  /* 10edc481 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edc483 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 10edc488 push 0x10f0964c */
  push32((uint32_t)(0x10f0964cu));
  /* 10edc48d push 2 */
  push32((uint32_t)(0x2u));
  /* 10edc48f call 0x10eda2e0 */
  push32(0x10edc494u); f_10eda2e0();
  /* 10edc494 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edc497 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc49a jne 0x10edc49d */
  if (!C.zf) goto L_10edc49d;
  /* 10edc49c int3  */
  x86_unimpl("int3 @ 0x10edc49c");
L_10edc49d:;
  /* 10edc49d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10edc49f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10edc4a1 jne 0x10edc471 */
  if (!C.zf) goto L_10edc471;
  /* 10edc4a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edc4a6 mov eax, dword ptr [0x10f0f554] */
  EAX = (r32((uint32_t)(0x10f0f554)));
  /* 10edc4ab sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edc4ae mov dword ptr [0x10f0f554], eax */
  w32((uint32_t)(0x10f0f554), (EAX));
  /* 10edc4b3 mov ecx, dword ptr [0x10f0cef8] */
  ECX = (r32((uint32_t)(0x10f0cef8)));
  /* 10edc4b9 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10edc4bc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10edc4be jne 0x10edc59c */
  if (!C.zf) goto L_10edc59c;
  /* 10edc4c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edc4c7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc4ca je 0x10edc4dc */
  if (C.zf) goto L_10edc4dc;
  /* 10edc4cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edc4cf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10edc4d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edc4d4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10edc4d7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10edc4da jmp 0x10edc51a */
  goto L_10edc51a;
L_10edc4dc:;
  /* 10edc4dc mov ecx, dword ptr [0x10f0f548] */
  ECX = (r32((uint32_t)(0x10f0f548)));
  /* 10edc4e2 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc4e5 je 0x10edc508 */
  if (C.zf) goto L_10edc508;
  /* 10edc4e7 push 0x10f09824 */
  push32((uint32_t)(0x10f09824u));
  /* 10edc4ec push 0 */
  push32((uint32_t)(0x0u));
  /* 10edc4ee push 0x42a */
  push32((uint32_t)(0x42au));
  /* 10edc4f3 push 0x10f0964c */
  push32((uint32_t)(0x10f0964cu));
  /* 10edc4f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10edc4fa call 0x10eda2e0 */
  push32(0x10edc4ffu); f_10eda2e0();
  /* 10edc4ff add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edc502 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc505 jne 0x10edc508 */
  if (!C.zf) goto L_10edc508;
  /* 10edc507 int3  */
  x86_unimpl("int3 @ 0x10edc507");
L_10edc508:;
  /* 10edc508 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10edc50a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10edc50c jne 0x10edc4dc */
  if (!C.zf) goto L_10edc4dc;
  /* 10edc50e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edc511 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10edc514 mov dword ptr [0x10f0f548], ecx */
  w32((uint32_t)(0x10f0f548), (ECX));
L_10edc51a:;
  /* 10edc51a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edc51d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc521 je 0x10edc532 */
  if (C.zf) goto L_10edc532;
  /* 10edc523 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edc526 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10edc529 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edc52c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10edc52e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10edc530 jmp 0x10edc56f */
  goto L_10edc56f;
L_10edc532:;
  /* 10edc532 mov ecx, dword ptr [0x10f0f550] */
  ECX = (r32((uint32_t)(0x10f0f550)));
  /* 10edc538 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc53b je 0x10edc55e */
  if (C.zf) goto L_10edc55e;
  /* 10edc53d push 0x10f0980c */
  push32((uint32_t)(0x10f0980cu));
  /* 10edc542 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edc544 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 10edc549 push 0x10f0964c */
  push32((uint32_t)(0x10f0964cu));
  /* 10edc54e push 2 */
  push32((uint32_t)(0x2u));
  /* 10edc550 call 0x10eda2e0 */
  push32(0x10edc555u); f_10eda2e0();
  /* 10edc555 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edc558 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc55b jne 0x10edc55e */
  if (!C.zf) goto L_10edc55e;
  /* 10edc55d int3  */
  x86_unimpl("int3 @ 0x10edc55d");
L_10edc55e:;
  /* 10edc55e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10edc560 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10edc562 jne 0x10edc532 */
  if (!C.zf) goto L_10edc532;
  /* 10edc564 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edc567 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10edc569 mov dword ptr [0x10f0f550], ecx */
  w32((uint32_t)(0x10f0f550), (ECX));
L_10edc56f:;
  /* 10edc56f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edc572 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10edc575 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edc578 push eax */
  push32((uint32_t)(EAX));
  /* 10edc579 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10edc57b mov cl, byte ptr [0x10f0cf05] */
  CL = (r8((uint32_t)(0x10f0cf05)));
  /* 10edc581 push ecx */
  push32((uint32_t)(ECX));
  /* 10edc582 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edc585 push edx */
  push32((uint32_t)(EDX));
  /* 10edc586 call 0x10ee1b30 */
  push32(0x10edc58bu); f_10ee1b30();
  /* 10edc58b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edc58e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edc591 push eax */
  push32((uint32_t)(EAX));
  /* 10edc592 call 0x10ee22f0 */
  push32(0x10edc597u); f_10ee22f0();
  /* 10edc597 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edc59a jmp 0x10edc5c5 */
  goto L_10edc5c5;
L_10edc59c:;
  /* 10edc59c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edc59f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 10edc5a6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edc5a9 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10edc5ac push eax */
  push32((uint32_t)(EAX));
  /* 10edc5ad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10edc5af mov cl, byte ptr [0x10f0cf05] */
  CL = (r8((uint32_t)(0x10f0cf05)));
  /* 10edc5b5 push ecx */
  push32((uint32_t)(ECX));
  /* 10edc5b6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edc5b9 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edc5bc push edx */
  push32((uint32_t)(EDX));
  /* 10edc5bd call 0x10ee1b30 */
  push32(0x10edc5c2u); f_10ee1b30();
  /* 10edc5c2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10edc5c5:;
  /* 10edc5c5 pop edi */
  EDI = (pop32());
  /* 10edc5c6 pop esi */
  ESI = (pop32());
  /* 10edc5c7 pop ebx */
  EBX = (pop32());
  /* 10edc5c8 mov esp, ebp */
  ESP = (EBP);
  /* 10edc5ca pop ebp */
  EBP = (pop32());
  /* 10edc5cb ret  */
  ESPCHK(0x10edc1e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c5d0 @ 0x10edc5d0 (19 bytes, 9 insns) */
void f_10edc5d0(void) {
  FTRACE(0x10edc5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edc5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10edc5d1 mov ebp, esp */
  EBP = (ESP);
  /* 10edc5d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10edc5d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edc5d8 push eax */
  push32((uint32_t)(EAX));
  /* 10edc5d9 call 0x10edc5f0 */
  push32(0x10edc5deu); f_10edc5f0();
  /* 10edc5de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edc5e1 pop ebp */
  EBP = (pop32());
  /* 10edc5e2 ret  */
  ESPCHK(0x10edc5d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c5f0 @ 0x10edc5f0 (342 bytes, 119 insns) */
void f_10edc5f0(void) {
  FTRACE(0x10edc5f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edc5f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10edc5f1 mov ebp, esp */
  EBP = (ESP);
  /* 10edc5f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edc5f6 push ebx */
  push32((uint32_t)(EBX));
  /* 10edc5f7 push esi */
  push32((uint32_t)(ESI));
  /* 10edc5f8 push edi */
  push32((uint32_t)(EDI));
  /* 10edc5f9 mov eax, dword ptr [0x10f0cef8] */
  EAX = (r32((uint32_t)(0x10f0cef8)));
  /* 10edc5fe and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10edc601 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edc603 je 0x10edc635 */
  if (C.zf) goto L_10edc635;
L_10edc605:;
  /* 10edc605 call 0x10edc8c0 */
  push32(0x10edc60au); f_10edc8c0();
  /* 10edc60a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edc60c jne 0x10edc62f */
  if (!C.zf) goto L_10edc62f;
  /* 10edc60e push 0x10f09658 */
  push32((uint32_t)(0x10f09658u));
  /* 10edc613 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edc615 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 10edc61a push 0x10f0964c */
  push32((uint32_t)(0x10f0964cu));
  /* 10edc61f push 2 */
  push32((uint32_t)(0x2u));
  /* 10edc621 call 0x10eda2e0 */
  push32(0x10edc626u); f_10eda2e0();
  /* 10edc626 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edc629 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc62c jne 0x10edc62f */
  if (!C.zf) goto L_10edc62f;
  /* 10edc62e int3  */
  x86_unimpl("int3 @ 0x10edc62e");
L_10edc62f:;
  /* 10edc62f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10edc631 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10edc633 jne 0x10edc605 */
  if (!C.zf) goto L_10edc605;
L_10edc635:;
  /* 10edc635 push 9 */
  push32((uint32_t)(0x9u));
  /* 10edc637 call 0x10edb620 */
  push32(0x10edc63cu); f_10edb620();
  /* 10edc63c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10edc63f:;
  /* 10edc63f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edc642 push edx */
  push32((uint32_t)(EDX));
  /* 10edc643 call 0x10edcd20 */
  push32(0x10edc648u); f_10edcd20();
  /* 10edc648 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edc64b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edc64d jne 0x10edc670 */
  if (!C.zf) goto L_10edc670;
  /* 10edc64f push 0x10f0975c */
  push32((uint32_t)(0x10f0975cu));
  /* 10edc654 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edc656 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 10edc65b push 0x10f0964c */
  push32((uint32_t)(0x10f0964cu));
  /* 10edc660 push 2 */
  push32((uint32_t)(0x2u));
  /* 10edc662 call 0x10eda2e0 */
  push32(0x10edc667u); f_10eda2e0();
  /* 10edc667 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edc66a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc66d jne 0x10edc670 */
  if (!C.zf) goto L_10edc670;
  /* 10edc66f int3  */
  x86_unimpl("int3 @ 0x10edc66f");
L_10edc670:;
  /* 10edc670 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10edc672 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edc674 jne 0x10edc63f */
  if (!C.zf) goto L_10edc63f;
  /* 10edc676 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edc679 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edc67c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10edc67f:;
  /* 10edc67f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edc682 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10edc685 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10edc68a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc68d je 0x10edc6d2 */
  if (C.zf) goto L_10edc6d2;
  /* 10edc68f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edc692 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc696 je 0x10edc6d2 */
  if (C.zf) goto L_10edc6d2;
  /* 10edc698 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edc69b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10edc69e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10edc6a3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc6a6 je 0x10edc6d2 */
  if (C.zf) goto L_10edc6d2;
  /* 10edc6a8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edc6ab cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc6af je 0x10edc6d2 */
  if (C.zf) goto L_10edc6d2;
  /* 10edc6b1 push 0x10f09274 */
  push32((uint32_t)(0x10f09274u));
  /* 10edc6b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edc6b8 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 10edc6bd push 0x10f0964c */
  push32((uint32_t)(0x10f0964cu));
  /* 10edc6c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10edc6c4 call 0x10eda2e0 */
  push32(0x10edc6c9u); f_10eda2e0();
  /* 10edc6c9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edc6cc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc6cf jne 0x10edc6d2 */
  if (!C.zf) goto L_10edc6d2;
  /* 10edc6d1 int3  */
  x86_unimpl("int3 @ 0x10edc6d1");
L_10edc6d2:;
  /* 10edc6d2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10edc6d4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10edc6d6 jne 0x10edc67f */
  if (!C.zf) goto L_10edc67f;
  /* 10edc6d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edc6db cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc6df jne 0x10edc6ee */
  if (!C.zf) goto L_10edc6ee;
  /* 10edc6e1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc6e5 jne 0x10edc6ee */
  if (!C.zf) goto L_10edc6ee;
  /* 10edc6e7 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10edc6ee:;
  /* 10edc6ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edc6f1 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc6f5 je 0x10edc729 */
  if (C.zf) goto L_10edc729;
L_10edc6f7:;
  /* 10edc6f7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edc6fa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10edc6fd cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc700 je 0x10edc723 */
  if (C.zf) goto L_10edc723;
  /* 10edc702 push 0x10f0983c */
  push32((uint32_t)(0x10f0983cu));
  /* 10edc707 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edc709 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 10edc70e push 0x10f0964c */
  push32((uint32_t)(0x10f0964cu));
  /* 10edc713 push 2 */
  push32((uint32_t)(0x2u));
  /* 10edc715 call 0x10eda2e0 */
  push32(0x10edc71au); f_10eda2e0();
  /* 10edc71a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edc71d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc720 jne 0x10edc723 */
  if (!C.zf) goto L_10edc723;
  /* 10edc722 int3  */
  x86_unimpl("int3 @ 0x10edc722");
L_10edc723:;
  /* 10edc723 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10edc725 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10edc727 jne 0x10edc6f7 */
  if (!C.zf) goto L_10edc6f7;
L_10edc729:;
  /* 10edc729 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edc72c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10edc72f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10edc732 push 9 */
  push32((uint32_t)(0x9u));
  /* 10edc734 call 0x10edb6c0 */
  push32(0x10edc739u); f_10edb6c0();
  /* 10edc739 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edc73c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edc73f pop edi */
  EDI = (pop32());
  /* 10edc740 pop esi */
  ESI = (pop32());
  /* 10edc741 pop ebx */
  EBX = (pop32());
  /* 10edc742 mov esp, ebp */
  ESP = (EBP);
  /* 10edc744 pop ebp */
  EBP = (pop32());
  /* 10edc745 ret  */
  ESPCHK(0x10edc5f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c750 @ 0x10edc750 (28 bytes, 11 insns) */
void f_10edc750(void) {
  FTRACE(0x10edc750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edc750 push ebp */
  push32((uint32_t)(EBP));
  /* 10edc751 mov ebp, esp */
  EBP = (ESP);
  /* 10edc753 push ecx */
  push32((uint32_t)(ECX));
  /* 10edc754 mov eax, dword ptr [0x10f0cf00] */
  EAX = (r32((uint32_t)(0x10f0cf00)));
  /* 10edc759 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10edc75c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edc75f mov dword ptr [0x10f0cf00], ecx */
  w32((uint32_t)(0x10f0cf00), (ECX));
  /* 10edc765 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edc768 mov esp, ebp */
  ESP = (EBP);
  /* 10edc76a pop ebp */
  EBP = (pop32());
  /* 10edc76b ret  */
  ESPCHK(0x10edc750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c770 @ 0x10edc770 (157 bytes, 59 insns) */
void f_10edc770(void) {
  FTRACE(0x10edc770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edc770 push ebp */
  push32((uint32_t)(EBP));
  /* 10edc771 mov ebp, esp */
  EBP = (ESP);
  /* 10edc773 push ecx */
  push32((uint32_t)(ECX));
  /* 10edc774 push ebx */
  push32((uint32_t)(EBX));
  /* 10edc775 push esi */
  push32((uint32_t)(ESI));
  /* 10edc776 push edi */
  push32((uint32_t)(EDI));
  /* 10edc777 push 9 */
  push32((uint32_t)(0x9u));
  /* 10edc779 call 0x10edb620 */
  push32(0x10edc77eu); f_10edb620();
  /* 10edc77e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edc781 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edc784 push eax */
  push32((uint32_t)(EAX));
  /* 10edc785 call 0x10edcd20 */
  push32(0x10edc78au); f_10edcd20();
  /* 10edc78a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edc78d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edc78f je 0x10edc7fc */
  if (C.zf) goto L_10edc7fc;
  /* 10edc791 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edc794 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edc797 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10edc79a:;
  /* 10edc79a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edc79d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10edc7a0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10edc7a5 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc7a8 je 0x10edc7ed */
  if (C.zf) goto L_10edc7ed;
  /* 10edc7aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edc7ad cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc7b1 je 0x10edc7ed */
  if (C.zf) goto L_10edc7ed;
  /* 10edc7b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edc7b6 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10edc7b9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10edc7be cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc7c1 je 0x10edc7ed */
  if (C.zf) goto L_10edc7ed;
  /* 10edc7c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edc7c6 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc7ca je 0x10edc7ed */
  if (C.zf) goto L_10edc7ed;
  /* 10edc7cc push 0x10f09274 */
  push32((uint32_t)(0x10f09274u));
  /* 10edc7d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edc7d3 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 10edc7d8 push 0x10f0964c */
  push32((uint32_t)(0x10f0964cu));
  /* 10edc7dd push 2 */
  push32((uint32_t)(0x2u));
  /* 10edc7df call 0x10eda2e0 */
  push32(0x10edc7e4u); f_10eda2e0();
  /* 10edc7e4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edc7e7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc7ea jne 0x10edc7ed */
  if (!C.zf) goto L_10edc7ed;
  /* 10edc7ec int3  */
  x86_unimpl("int3 @ 0x10edc7ec");
L_10edc7ed:;
  /* 10edc7ed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10edc7ef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10edc7f1 jne 0x10edc79a */
  if (!C.zf) goto L_10edc79a;
  /* 10edc7f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edc7f6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edc7f9 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_10edc7fc:;
  /* 10edc7fc push 9 */
  push32((uint32_t)(0x9u));
  /* 10edc7fe call 0x10edb6c0 */
  push32(0x10edc803u); f_10edb6c0();
  /* 10edc803 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edc806 pop edi */
  EDI = (pop32());
  /* 10edc807 pop esi */
  ESI = (pop32());
  /* 10edc808 pop ebx */
  EBX = (pop32());
  /* 10edc809 mov esp, ebp */
  ESP = (EBP);
  /* 10edc80b pop ebp */
  EBP = (pop32());
  /* 10edc80c ret  */
  ESPCHK(0x10edc770u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c810 @ 0x10edc810 (28 bytes, 11 insns) */
void f_10edc810(void) {
  FTRACE(0x10edc810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edc810 push ebp */
  push32((uint32_t)(EBP));
  /* 10edc811 mov ebp, esp */
  EBP = (ESP);
  /* 10edc813 push ecx */
  push32((uint32_t)(ECX));
  /* 10edc814 mov eax, dword ptr [0x10f0d230] */
  EAX = (r32((uint32_t)(0x10f0d230)));
  /* 10edc819 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10edc81c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edc81f mov dword ptr [0x10f0d230], ecx */
  w32((uint32_t)(0x10f0d230), (ECX));
  /* 10edc825 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edc828 mov esp, ebp */
  ESP = (EBP);
  /* 10edc82a pop ebp */
  EBP = (pop32());
  /* 10edc82b ret  */
  ESPCHK(0x10edc810u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c830 @ 0x10edc830 (136 bytes, 55 insns) */
void f_10edc830(void) {
  FTRACE(0x10edc830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edc830 push ebp */
  push32((uint32_t)(EBP));
  /* 10edc831 mov ebp, esp */
  EBP = (ESP);
  /* 10edc833 push ecx */
  push32((uint32_t)(ECX));
  /* 10edc834 push ebx */
  push32((uint32_t)(EBX));
  /* 10edc835 push esi */
  push32((uint32_t)(ESI));
  /* 10edc836 push edi */
  push32((uint32_t)(EDI));
  /* 10edc837 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_10edc83e:;
  /* 10edc83e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edc841 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edc844 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edc847 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10edc84a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edc84c je 0x10edc8ae */
  if (C.zf) goto L_10edc8ae;
  /* 10edc84e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edc851 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10edc853 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10edc855 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edc858 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10edc85e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edc861 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edc864 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10edc867 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc869 je 0x10edc8ac */
  if (C.zf) goto L_10edc8ac;
L_10edc86b:;
  /* 10edc86b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edc86e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10edc873 push eax */
  push32((uint32_t)(EAX));
  /* 10edc874 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edc877 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10edc879 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 10edc87c push edx */
  push32((uint32_t)(EDX));
  /* 10edc87d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edc880 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edc883 push eax */
  push32((uint32_t)(EAX));
  /* 10edc884 push 0x10f09910 */
  push32((uint32_t)(0x10f09910u));
  /* 10edc889 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edc88b push 0 */
  push32((uint32_t)(0x0u));
  /* 10edc88d push 0 */
  push32((uint32_t)(0x0u));
  /* 10edc88f push 0 */
  push32((uint32_t)(0x0u));
  /* 10edc891 call 0x10eda2e0 */
  push32(0x10edc896u); f_10eda2e0();
  /* 10edc896 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edc899 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc89c jne 0x10edc89f */
  if (!C.zf) goto L_10edc89f;
  /* 10edc89e int3  */
  x86_unimpl("int3 @ 0x10edc89e");
L_10edc89f:;
  /* 10edc89f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10edc8a1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10edc8a3 jne 0x10edc86b */
  if (!C.zf) goto L_10edc86b;
  /* 10edc8a5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10edc8ac:;
  /* 10edc8ac jmp 0x10edc83e */
  goto L_10edc83e;
L_10edc8ae:;
  /* 10edc8ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edc8b1 pop edi */
  EDI = (pop32());
  /* 10edc8b2 pop esi */
  ESI = (pop32());
  /* 10edc8b3 pop ebx */
  EBX = (pop32());
  /* 10edc8b4 mov esp, ebp */
  ESP = (EBP);
  /* 10edc8b6 pop ebp */
  EBP = (pop32());
  /* 10edc8b7 ret  */
  ESPCHK(0x10edc830u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c8c0 @ 0x10edc8c0 (863 bytes, 299 insns) [1 switch table(s)] */
void f_10edc8c0(void) {
  FTRACE(0x10edc8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edc8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10edc8c1 mov ebp, esp */
  EBP = (ESP);
  /* 10edc8c3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edc8c6 push ebx */
  push32((uint32_t)(EBX));
  /* 10edc8c7 push esi */
  push32((uint32_t)(ESI));
  /* 10edc8c8 push edi */
  push32((uint32_t)(EDI));
  /* 10edc8c9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10edc8d0 mov eax, dword ptr [0x10f0cef8] */
  EAX = (r32((uint32_t)(0x10f0cef8)));
  /* 10edc8d5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10edc8d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edc8da jne 0x10edc8e6 */
  if (!C.zf) goto L_10edc8e6;
  /* 10edc8dc mov eax, 1 */
  EAX = (0x1u);
  /* 10edc8e1 jmp 0x10edcc18 */
  goto L_10edcc18;
L_10edc8e6:;
  /* 10edc8e6 push 9 */
  push32((uint32_t)(0x9u));
  /* 10edc8e8 call 0x10edb620 */
  push32(0x10edc8edu); f_10edb620();
  /* 10edc8ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edc8f0 call 0x10ee2360 */
  push32(0x10edc8f5u); f_10ee2360();
  /* 10edc8f5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10edc8f8 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc8fc je 0x10edca09 */
  if (C.zf) goto L_10edca09;
  /* 10edc902 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc906 je 0x10edca09 */
  if (C.zf) goto L_10edca09;
  /* 10edc90c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edc90f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10edc912 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10edc915 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edc918 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10edc91b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc91f ja 0x10edc9d2 */
  if ((!C.cf&&!C.zf)) goto L_10edc9d2;
  /* 10edc925 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10edc928 jmp dword ptr [eax*4 + 0x10edcc1f] */
  switch (EAX) {
    case 0: goto L_10edc9aa;
    case 1: goto L_10edc982;
    case 2: goto L_10edc95a;
    case 3: goto L_10edc92f;
    default: x86_unimpl("switch@0x10edc928 out of table"); return;
  }
L_10edc92f:;
  /* 10edc92f push 0x10f09a64 */
  push32((uint32_t)(0x10f09a64u));
  /* 10edc934 push 0x10f095ec */
  push32((uint32_t)(0x10f095ecu));
  /* 10edc939 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edc93b push 0 */
  push32((uint32_t)(0x0u));
  /* 10edc93d push 0 */
  push32((uint32_t)(0x0u));
  /* 10edc93f push 0 */
  push32((uint32_t)(0x0u));
  /* 10edc941 call 0x10eda2e0 */
  push32(0x10edc946u); f_10eda2e0();
  /* 10edc946 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edc949 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc94c jne 0x10edc94f */
  if (!C.zf) goto L_10edc94f;
  /* 10edc94e int3  */
  x86_unimpl("int3 @ 0x10edc94e");
L_10edc94f:;
  /* 10edc94f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10edc951 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10edc953 jne 0x10edc92f */
  if (!C.zf) goto L_10edc92f;
  /* 10edc955 jmp 0x10edc9f8 */
  goto L_10edc9f8;
L_10edc95a:;
  /* 10edc95a push 0x10f09a40 */
  push32((uint32_t)(0x10f09a40u));
  /* 10edc95f push 0x10f095ec */
  push32((uint32_t)(0x10f095ecu));
  /* 10edc964 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edc966 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edc968 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edc96a push 0 */
  push32((uint32_t)(0x0u));
  /* 10edc96c call 0x10eda2e0 */
  push32(0x10edc971u); f_10eda2e0();
  /* 10edc971 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edc974 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc977 jne 0x10edc97a */
  if (!C.zf) goto L_10edc97a;
  /* 10edc979 int3  */
  x86_unimpl("int3 @ 0x10edc979");
L_10edc97a:;
  /* 10edc97a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10edc97c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10edc97e jne 0x10edc95a */
  if (!C.zf) goto L_10edc95a;
  /* 10edc980 jmp 0x10edc9f8 */
  goto L_10edc9f8;
L_10edc982:;
  /* 10edc982 push 0x10f09a1c */
  push32((uint32_t)(0x10f09a1cu));
  /* 10edc987 push 0x10f095ec */
  push32((uint32_t)(0x10f095ecu));
  /* 10edc98c push 0 */
  push32((uint32_t)(0x0u));
  /* 10edc98e push 0 */
  push32((uint32_t)(0x0u));
  /* 10edc990 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edc992 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edc994 call 0x10eda2e0 */
  push32(0x10edc999u); f_10eda2e0();
  /* 10edc999 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edc99c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc99f jne 0x10edc9a2 */
  if (!C.zf) goto L_10edc9a2;
  /* 10edc9a1 int3  */
  x86_unimpl("int3 @ 0x10edc9a1");
L_10edc9a2:;
  /* 10edc9a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10edc9a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edc9a6 jne 0x10edc982 */
  if (!C.zf) goto L_10edc982;
  /* 10edc9a8 jmp 0x10edc9f8 */
  goto L_10edc9f8;
L_10edc9aa:;
  /* 10edc9aa push 0x10f099f8 */
  push32((uint32_t)(0x10f099f8u));
  /* 10edc9af push 0x10f095ec */
  push32((uint32_t)(0x10f095ecu));
  /* 10edc9b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edc9b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edc9b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edc9ba push 0 */
  push32((uint32_t)(0x0u));
  /* 10edc9bc call 0x10eda2e0 */
  push32(0x10edc9c1u); f_10eda2e0();
  /* 10edc9c1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edc9c4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc9c7 jne 0x10edc9ca */
  if (!C.zf) goto L_10edc9ca;
  /* 10edc9c9 int3  */
  x86_unimpl("int3 @ 0x10edc9c9");
L_10edc9ca:;
  /* 10edc9ca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10edc9cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10edc9ce jne 0x10edc9aa */
  if (!C.zf) goto L_10edc9aa;
  /* 10edc9d0 jmp 0x10edc9f8 */
  goto L_10edc9f8;
L_10edc9d2:;
  /* 10edc9d2 push 0x10f099cc */
  push32((uint32_t)(0x10f099ccu));
  /* 10edc9d7 push 0x10f095ec */
  push32((uint32_t)(0x10f095ecu));
  /* 10edc9dc push 0 */
  push32((uint32_t)(0x0u));
  /* 10edc9de push 0 */
  push32((uint32_t)(0x0u));
  /* 10edc9e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edc9e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edc9e4 call 0x10eda2e0 */
  push32(0x10edc9e9u); f_10eda2e0();
  /* 10edc9e9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edc9ec cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edc9ef jne 0x10edc9f2 */
  if (!C.zf) goto L_10edc9f2;
  /* 10edc9f1 int3  */
  x86_unimpl("int3 @ 0x10edc9f1");
L_10edc9f2:;
  /* 10edc9f2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10edc9f4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10edc9f6 jne 0x10edc9d2 */
  if (!C.zf) goto L_10edc9d2;
L_10edc9f8:;
  /* 10edc9f8 push 9 */
  push32((uint32_t)(0x9u));
  /* 10edc9fa call 0x10edb6c0 */
  push32(0x10edc9ffu); f_10edb6c0();
  /* 10edc9ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edca02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10edca04 jmp 0x10edcc18 */
  goto L_10edcc18;
L_10edca09:;
  /* 10edca09 mov eax, dword ptr [0x10f0f550] */
  EAX = (r32((uint32_t)(0x10f0f550)));
  /* 10edca0e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10edca11 jmp 0x10edca1b */
  goto L_10edca1b;
L_10edca13:;
  /* 10edca13 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edca16 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10edca18 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10edca1b:;
  /* 10edca1b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edca1f je 0x10edcc0b */
  if (C.zf) goto L_10edcc0b;
  /* 10edca25 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10edca2c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edca2f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10edca32 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10edca38 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edca3b je 0x10edca60 */
  if (C.zf) goto L_10edca60;
  /* 10edca3d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edca40 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edca44 je 0x10edca60 */
  if (C.zf) goto L_10edca60;
  /* 10edca46 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edca49 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10edca4c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10edca52 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edca55 je 0x10edca60 */
  if (C.zf) goto L_10edca60;
  /* 10edca57 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edca5a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edca5e jne 0x10edca78 */
  if (!C.zf) goto L_10edca78;
L_10edca60:;
  /* 10edca60 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edca63 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10edca66 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10edca6c mov edx, dword ptr [ecx*4 + 0x10f0cf08] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10f0cf08)));
  /* 10edca73 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10edca76 jmp 0x10edca7f */
  goto L_10edca7f;
L_10edca78:;
  /* 10edca78 mov dword ptr [ebp - 0x14], 0x10f099c4 */
  w32((uint32_t)(EBP + -0x14), (0x10f099c4u));
L_10edca7f:;
  /* 10edca7f push 4 */
  push32((uint32_t)(0x4u));
  /* 10edca81 mov al, byte ptr [0x10f0cf04] */
  AL = (r8((uint32_t)(0x10f0cf04)));
  /* 10edca86 push eax */
  push32((uint32_t)(EAX));
  /* 10edca87 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edca8a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edca8d push ecx */
  push32((uint32_t)(ECX));
  /* 10edca8e call 0x10edc830 */
  push32(0x10edca93u); f_10edc830();
  /* 10edca93 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edca96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edca98 jne 0x10edcad4 */
  if (!C.zf) goto L_10edcad4;
L_10edca9a:;
  /* 10edca9a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edca9d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edcaa0 push edx */
  push32((uint32_t)(EDX));
  /* 10edcaa1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edcaa4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10edcaa7 push ecx */
  push32((uint32_t)(ECX));
  /* 10edcaa8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10edcaab push edx */
  push32((uint32_t)(EDX));
  /* 10edcaac push 0x10f098c8 */
  push32((uint32_t)(0x10f098c8u));
  /* 10edcab1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edcab3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edcab5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edcab7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edcab9 call 0x10eda2e0 */
  push32(0x10edcabeu); f_10eda2e0();
  /* 10edcabe add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edcac1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edcac4 jne 0x10edcac7 */
  if (!C.zf) goto L_10edcac7;
  /* 10edcac6 int3  */
  x86_unimpl("int3 @ 0x10edcac6");
L_10edcac7:;
  /* 10edcac7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10edcac9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edcacb jne 0x10edca9a */
  if (!C.zf) goto L_10edca9a;
  /* 10edcacd mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10edcad4:;
  /* 10edcad4 push 4 */
  push32((uint32_t)(0x4u));
  /* 10edcad6 mov cl, byte ptr [0x10f0cf04] */
  CL = (r8((uint32_t)(0x10f0cf04)));
  /* 10edcadc push ecx */
  push32((uint32_t)(ECX));
  /* 10edcadd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edcae0 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10edcae3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edcae6 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10edcaea push edx */
  push32((uint32_t)(EDX));
  /* 10edcaeb call 0x10edc830 */
  push32(0x10edcaf0u); f_10edc830();
  /* 10edcaf0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edcaf3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edcaf5 jne 0x10edcb31 */
  if (!C.zf) goto L_10edcb31;
L_10edcaf7:;
  /* 10edcaf7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edcafa add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edcafd push eax */
  push32((uint32_t)(EAX));
  /* 10edcafe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edcb01 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10edcb04 push edx */
  push32((uint32_t)(EDX));
  /* 10edcb05 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10edcb08 push eax */
  push32((uint32_t)(EAX));
  /* 10edcb09 push 0x10f0989c */
  push32((uint32_t)(0x10f0989cu));
  /* 10edcb0e push 0 */
  push32((uint32_t)(0x0u));
  /* 10edcb10 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edcb12 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edcb14 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edcb16 call 0x10eda2e0 */
  push32(0x10edcb1bu); f_10eda2e0();
  /* 10edcb1b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edcb1e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edcb21 jne 0x10edcb24 */
  if (!C.zf) goto L_10edcb24;
  /* 10edcb23 int3  */
  x86_unimpl("int3 @ 0x10edcb23");
L_10edcb24:;
  /* 10edcb24 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10edcb26 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10edcb28 jne 0x10edcaf7 */
  if (!C.zf) goto L_10edcaf7;
  /* 10edcb2a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10edcb31:;
  /* 10edcb31 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edcb34 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edcb38 jne 0x10edcb8a */
  if (!C.zf) goto L_10edcb8a;
  /* 10edcb3a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edcb3d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10edcb40 push ecx */
  push32((uint32_t)(ECX));
  /* 10edcb41 mov dl, byte ptr [0x10f0cf05] */
  DL = (r8((uint32_t)(0x10f0cf05)));
  /* 10edcb47 push edx */
  push32((uint32_t)(EDX));
  /* 10edcb48 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edcb4b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edcb4e push eax */
  push32((uint32_t)(EAX));
  /* 10edcb4f call 0x10edc830 */
  push32(0x10edcb54u); f_10edc830();
  /* 10edcb54 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edcb57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edcb59 jne 0x10edcb8a */
  if (!C.zf) goto L_10edcb8a;
L_10edcb5b:;
  /* 10edcb5b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edcb5e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edcb61 push ecx */
  push32((uint32_t)(ECX));
  /* 10edcb62 push 0x10f09998 */
  push32((uint32_t)(0x10f09998u));
  /* 10edcb67 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edcb69 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edcb6b push 0 */
  push32((uint32_t)(0x0u));
  /* 10edcb6d push 0 */
  push32((uint32_t)(0x0u));
  /* 10edcb6f call 0x10eda2e0 */
  push32(0x10edcb74u); f_10eda2e0();
  /* 10edcb74 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edcb77 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edcb7a jne 0x10edcb7d */
  if (!C.zf) goto L_10edcb7d;
  /* 10edcb7c int3  */
  x86_unimpl("int3 @ 0x10edcb7c");
L_10edcb7d:;
  /* 10edcb7d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10edcb7f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10edcb81 jne 0x10edcb5b */
  if (!C.zf) goto L_10edcb5b;
  /* 10edcb83 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10edcb8a:;
  /* 10edcb8a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edcb8e jne 0x10edcc06 */
  if (!C.zf) goto L_10edcc06;
  /* 10edcb90 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edcb93 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edcb97 je 0x10edcbcc */
  if (C.zf) goto L_10edcbcc;
L_10edcb99:;
  /* 10edcb99 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edcb9c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10edcb9f push edx */
  push32((uint32_t)(EDX));
  /* 10edcba0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edcba3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10edcba6 push ecx */
  push32((uint32_t)(ECX));
  /* 10edcba7 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10edcbaa push edx */
  push32((uint32_t)(EDX));
  /* 10edcbab push 0x10f09978 */
  push32((uint32_t)(0x10f09978u));
  /* 10edcbb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edcbb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edcbb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edcbb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edcbb8 call 0x10eda2e0 */
  push32(0x10edcbbdu); f_10eda2e0();
  /* 10edcbbd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edcbc0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edcbc3 jne 0x10edcbc6 */
  if (!C.zf) goto L_10edcbc6;
  /* 10edcbc5 int3  */
  x86_unimpl("int3 @ 0x10edcbc5");
L_10edcbc6:;
  /* 10edcbc6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10edcbc8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edcbca jne 0x10edcb99 */
  if (!C.zf) goto L_10edcb99;
L_10edcbcc:;
  /* 10edcbcc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edcbcf mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10edcbd2 push edx */
  push32((uint32_t)(EDX));
  /* 10edcbd3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edcbd6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edcbd9 push eax */
  push32((uint32_t)(EAX));
  /* 10edcbda mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10edcbdd push ecx */
  push32((uint32_t)(ECX));
  /* 10edcbde push 0x10f0994c */
  push32((uint32_t)(0x10f0994cu));
  /* 10edcbe3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edcbe5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edcbe7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edcbe9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edcbeb call 0x10eda2e0 */
  push32(0x10edcbf0u); f_10eda2e0();
  /* 10edcbf0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edcbf3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edcbf6 jne 0x10edcbf9 */
  if (!C.zf) goto L_10edcbf9;
  /* 10edcbf8 int3  */
  x86_unimpl("int3 @ 0x10edcbf8");
L_10edcbf9:;
  /* 10edcbf9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10edcbfb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10edcbfd jne 0x10edcbcc */
  if (!C.zf) goto L_10edcbcc;
  /* 10edcbff mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10edcc06:;
  /* 10edcc06 jmp 0x10edca13 */
  goto L_10edca13;
L_10edcc0b:;
  /* 10edcc0b push 9 */
  push32((uint32_t)(0x9u));
  /* 10edcc0d call 0x10edb6c0 */
  push32(0x10edcc12u); f_10edb6c0();
  /* 10edcc12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edcc15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10edcc18:;
  /* 10edcc18 pop edi */
  EDI = (pop32());
  /* 10edcc19 pop esi */
  ESI = (pop32());
  /* 10edcc1a pop ebx */
  EBX = (pop32());
  /* 10edcc1b mov esp, ebp */
  ESP = (EBP);
  /* 10edcc1d pop ebp */
  EBP = (pop32());
  /* 10edcc1e ret  */
  ESPCHK(0x10edc8c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc30 @ 0x10edcc30 (34 bytes, 13 insns) */
void f_10edcc30(void) {
  FTRACE(0x10edcc30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edcc30 push ebp */
  push32((uint32_t)(EBP));
  /* 10edcc31 mov ebp, esp */
  EBP = (ESP);
  /* 10edcc33 push ecx */
  push32((uint32_t)(ECX));
  /* 10edcc34 mov eax, dword ptr [0x10f0cef8] */
  EAX = (r32((uint32_t)(0x10f0cef8)));
  /* 10edcc39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10edcc3c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edcc40 je 0x10edcc4b */
  if (C.zf) goto L_10edcc4b;
  /* 10edcc42 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edcc45 mov dword ptr [0x10f0cef8], ecx */
  w32((uint32_t)(0x10f0cef8), (ECX));
L_10edcc4b:;
  /* 10edcc4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edcc4e mov esp, ebp */
  ESP = (EBP);
  /* 10edcc50 pop ebp */
  EBP = (pop32());
  /* 10edcc51 ret  */
  ESPCHK(0x10edcc30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc60 @ 0x10edcc60 (103 bytes, 38 insns) */
void f_10edcc60(void) {
  FTRACE(0x10edcc60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edcc60 push ebp */
  push32((uint32_t)(EBP));
  /* 10edcc61 mov ebp, esp */
  EBP = (ESP);
  /* 10edcc63 push ecx */
  push32((uint32_t)(ECX));
  /* 10edcc64 mov eax, dword ptr [0x10f0cef8] */
  EAX = (r32((uint32_t)(0x10f0cef8)));
  /* 10edcc69 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10edcc6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edcc6e jne 0x10edcc72 */
  if (!C.zf) goto L_10edcc72;
  /* 10edcc70 jmp 0x10edccc3 */
  goto L_10edccc3;
L_10edcc72:;
  /* 10edcc72 push 9 */
  push32((uint32_t)(0x9u));
  /* 10edcc74 call 0x10edb620 */
  push32(0x10edcc79u); f_10edb620();
  /* 10edcc79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edcc7c mov ecx, dword ptr [0x10f0f550] */
  ECX = (r32((uint32_t)(0x10f0f550)));
  /* 10edcc82 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10edcc85 jmp 0x10edcc8f */
  goto L_10edcc8f;
L_10edcc87:;
  /* 10edcc87 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edcc8a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10edcc8c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10edcc8f:;
  /* 10edcc8f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edcc93 je 0x10edccb9 */
  if (C.zf) goto L_10edccb9;
  /* 10edcc95 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edcc98 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10edcc9b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10edcca1 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edcca4 jne 0x10edccb7 */
  if (!C.zf) goto L_10edccb7;
  /* 10edcca6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edcca9 push eax */
  push32((uint32_t)(EAX));
  /* 10edccaa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edccad add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edccb0 push ecx */
  push32((uint32_t)(ECX));
  /* 10edccb1 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x10edccb4u);
  /* 10edccb4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10edccb7:;
  /* 10edccb7 jmp 0x10edcc87 */
  goto L_10edcc87;
L_10edccb9:;
  /* 10edccb9 push 9 */
  push32((uint32_t)(0x9u));
  /* 10edccbb call 0x10edb6c0 */
  push32(0x10edccc0u); f_10edb6c0();
  /* 10edccc0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10edccc3:;
  /* 10edccc3 mov esp, ebp */
  ESP = (EBP);
  /* 10edccc5 pop ebp */
  EBP = (pop32());
  /* 10edccc6 ret  */
  ESPCHK(0x10edcc60u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x10edccd0 (75 bytes, 28 insns) */
void f_10edccd0(void) {
  FTRACE(0x10edccd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edccd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10edccd1 mov ebp, esp */
  EBP = (ESP);
  /* 10edccd3 push ecx */
  push32((uint32_t)(ECX));
  /* 10edccd4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edccd8 je 0x10edcd0d */
  if (C.zf) goto L_10edcd0d;
  /* 10edccda mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edccdd push eax */
  push32((uint32_t)(EAX));
  /* 10edccde mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edcce1 push ecx */
  push32((uint32_t)(ECX));
  /* 10edcce2 call dword ptr [0x10f1241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1241c))), 0x10edcce8u);
  /* 10edcce8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edccea jne 0x10edcd0d */
  if (!C.zf) goto L_10edcd0d;
  /* 10edccec cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edccf0 je 0x10edcd04 */
  if (C.zf) goto L_10edcd04;
  /* 10edccf2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edccf5 push edx */
  push32((uint32_t)(EDX));
  /* 10edccf6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edccf9 push eax */
  push32((uint32_t)(EAX));
  /* 10edccfa call dword ptr [0x10f12448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12448))), 0x10edcd00u);
  /* 10edcd00 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edcd02 jne 0x10edcd0d */
  if (!C.zf) goto L_10edcd0d;
L_10edcd04:;
  /* 10edcd04 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10edcd0b jmp 0x10edcd14 */
  goto L_10edcd14;
L_10edcd0d:;
  /* 10edcd0d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10edcd14:;
  /* 10edcd14 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edcd17 mov esp, ebp */
  ESP = (EBP);
  /* 10edcd19 pop ebp */
  EBP = (pop32());
  /* 10edcd1a ret  */
  ESPCHK(0x10edccd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd20 @ 0x10edcd20 (134 bytes, 50 insns) */
void f_10edcd20(void) {
  FTRACE(0x10edcd20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edcd20 push ebp */
  push32((uint32_t)(EBP));
  /* 10edcd21 mov ebp, esp */
  EBP = (ESP);
  /* 10edcd23 push ecx */
  push32((uint32_t)(ECX));
  /* 10edcd24 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edcd28 jne 0x10edcd2e */
  if (!C.zf) goto L_10edcd2e;
  /* 10edcd2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10edcd2c jmp 0x10edcda2 */
  goto L_10edcda2;
L_10edcd2e:;
  /* 10edcd2e push 1 */
  push32((uint32_t)(0x1u));
  /* 10edcd30 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10edcd32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edcd35 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edcd38 push eax */
  push32((uint32_t)(EAX));
  /* 10edcd39 call 0x10edccd0 */
  push32(0x10edcd3eu); f_10edccd0();
  /* 10edcd3e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edcd41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edcd43 jne 0x10edcd49 */
  if (!C.zf) goto L_10edcd49;
  /* 10edcd45 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10edcd47 jmp 0x10edcda2 */
  goto L_10edcda2;
L_10edcd49:;
  /* 10edcd49 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edcd4c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edcd4f push ecx */
  push32((uint32_t)(ECX));
  /* 10edcd50 call 0x10ee2480 */
  push32(0x10edcd55u); f_10ee2480();
  /* 10edcd55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edcd58 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10edcd5b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edcd5f je 0x10edcd76 */
  if (C.zf) goto L_10edcd76;
  /* 10edcd61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edcd64 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edcd67 push edx */
  push32((uint32_t)(EDX));
  /* 10edcd68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edcd6b push eax */
  push32((uint32_t)(EAX));
  /* 10edcd6c call 0x10ee24e0 */
  push32(0x10edcd71u); f_10ee24e0();
  /* 10edcd71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edcd74 jmp 0x10edcda2 */
  goto L_10edcda2;
L_10edcd76:;
  /* 10edcd76 mov ecx, dword ptr [0x10f0f560] */
  ECX = (r32((uint32_t)(0x10f0f560)));
  /* 10edcd7c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10edcd82 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10edcd84 je 0x10edcd8d */
  if (C.zf) goto L_10edcd8d;
  /* 10edcd86 mov eax, 1 */
  EAX = (0x1u);
  /* 10edcd8b jmp 0x10edcda2 */
  goto L_10edcda2;
L_10edcd8d:;
  /* 10edcd8d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edcd90 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edcd93 push edx */
  push32((uint32_t)(EDX));
  /* 10edcd94 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edcd96 mov eax, dword ptr [0x10f10e8c] */
  EAX = (r32((uint32_t)(0x10f10e8c)));
  /* 10edcd9b push eax */
  push32((uint32_t)(EAX));
  /* 10edcd9c call dword ptr [0x10f123f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f123f0))), 0x10edcda2u);
L_10edcda2:;
  /* 10edcda2 mov esp, ebp */
  ESP = (EBP);
  /* 10edcda4 pop ebp */
  EBP = (pop32());
  /* 10edcda5 ret  */
  ESPCHK(0x10edcd20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cdb0 @ 0x10edcdb0 (227 bytes, 80 insns) */
void f_10edcdb0(void) {
  FTRACE(0x10edcdb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edcdb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10edcdb1 mov ebp, esp */
  EBP = (ESP);
  /* 10edcdb3 push ecx */
  push32((uint32_t)(ECX));
  /* 10edcdb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edcdb7 push eax */
  push32((uint32_t)(EAX));
  /* 10edcdb8 call 0x10edcd20 */
  push32(0x10edcdbdu); f_10edcd20();
  /* 10edcdbd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edcdc0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edcdc2 jne 0x10edcdcb */
  if (!C.zf) goto L_10edcdcb;
  /* 10edcdc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10edcdc6 jmp 0x10edce8f */
  goto L_10edce8f;
L_10edcdcb:;
  /* 10edcdcb push 9 */
  push32((uint32_t)(0x9u));
  /* 10edcdcd call 0x10edb620 */
  push32(0x10edcdd2u); f_10edb620();
  /* 10edcdd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edcdd5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edcdd8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edcddb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10edcdde mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edcde1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10edcde4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10edcde9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edcdec je 0x10edce10 */
  if (C.zf) goto L_10edce10;
  /* 10edcdee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edcdf1 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edcdf5 je 0x10edce10 */
  if (C.zf) goto L_10edce10;
  /* 10edcdf7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edcdfa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10edcdfd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10edce02 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edce05 je 0x10edce10 */
  if (C.zf) goto L_10edce10;
  /* 10edce07 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edce0a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edce0e jne 0x10edce83 */
  if (!C.zf) goto L_10edce83;
L_10edce10:;
  /* 10edce10 push 1 */
  push32((uint32_t)(0x1u));
  /* 10edce12 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edce15 push edx */
  push32((uint32_t)(EDX));
  /* 10edce16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edce19 push eax */
  push32((uint32_t)(EAX));
  /* 10edce1a call 0x10edccd0 */
  push32(0x10edce1fu); f_10edccd0();
  /* 10edce1f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edce22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edce24 je 0x10edce83 */
  if (C.zf) goto L_10edce83;
  /* 10edce26 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edce29 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10edce2c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edce2f jne 0x10edce83 */
  if (!C.zf) goto L_10edce83;
  /* 10edce31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edce34 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10edce37 cmp ecx, dword ptr [0x10f0cefc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10f0cefc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edce3d jg 0x10edce83 */
  if ((!C.zf&&C.sf==C.of)) goto L_10edce83;
  /* 10edce3f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edce43 je 0x10edce50 */
  if (C.zf) goto L_10edce50;
  /* 10edce45 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edce48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edce4b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10edce4e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10edce50:;
  /* 10edce50 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edce54 je 0x10edce61 */
  if (C.zf) goto L_10edce61;
  /* 10edce56 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10edce59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edce5c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10edce5f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10edce61:;
  /* 10edce61 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edce65 je 0x10edce72 */
  if (C.zf) goto L_10edce72;
  /* 10edce67 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10edce6a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edce6d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10edce70 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10edce72:;
  /* 10edce72 push 9 */
  push32((uint32_t)(0x9u));
  /* 10edce74 call 0x10edb6c0 */
  push32(0x10edce79u); f_10edb6c0();
  /* 10edce79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edce7c mov eax, 1 */
  EAX = (0x1u);
  /* 10edce81 jmp 0x10edce8f */
  goto L_10edce8f;
L_10edce83:;
  /* 10edce83 push 9 */
  push32((uint32_t)(0x9u));
  /* 10edce85 call 0x10edb6c0 */
  push32(0x10edce8au); f_10edb6c0();
  /* 10edce8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edce8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10edce8f:;
  /* 10edce8f mov esp, ebp */
  ESP = (EBP);
  /* 10edce91 pop ebp */
  EBP = (pop32());
  /* 10edce92 ret  */
  ESPCHK(0x10edcdb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cea0 @ 0x10edcea0 (28 bytes, 11 insns) */
void f_10edcea0(void) {
  FTRACE(0x10edcea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edcea0 push ebp */
  push32((uint32_t)(EBP));
  /* 10edcea1 mov ebp, esp */
  EBP = (ESP);
  /* 10edcea3 push ecx */
  push32((uint32_t)(ECX));
  /* 10edcea4 mov eax, dword ptr [0x10f10ffc] */
  EAX = (r32((uint32_t)(0x10f10ffc)));
  /* 10edcea9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10edceac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edceaf mov dword ptr [0x10f10ffc], ecx */
  w32((uint32_t)(0x10f10ffc), (ECX));
  /* 10edceb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edceb8 mov esp, ebp */
  ESP = (EBP);
  /* 10edceba pop ebp */
  EBP = (pop32());
  /* 10edcebb ret  */
  ESPCHK(0x10edcea0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cec0 @ 0x10edcec0 (362 bytes, 116 insns) */
void f_10edcec0(void) {
  FTRACE(0x10edcec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edcec0 push ebp */
  push32((uint32_t)(EBP));
  /* 10edcec1 mov ebp, esp */
  EBP = (ESP);
  /* 10edcec3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edcec6 push ebx */
  push32((uint32_t)(EBX));
  /* 10edcec7 push esi */
  push32((uint32_t)(ESI));
  /* 10edcec8 push edi */
  push32((uint32_t)(EDI));
  /* 10edcec9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edcecd jne 0x10edcefa */
  if (!C.zf) goto L_10edcefa;
L_10edcecf:;
  /* 10edcecf push 0x10f09aac */
  push32((uint32_t)(0x10f09aacu));
  /* 10edced4 push 0x10f095ec */
  push32((uint32_t)(0x10f095ecu));
  /* 10edced9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edcedb push 0 */
  push32((uint32_t)(0x0u));
  /* 10edcedd push 0 */
  push32((uint32_t)(0x0u));
  /* 10edcedf push 0 */
  push32((uint32_t)(0x0u));
  /* 10edcee1 call 0x10eda2e0 */
  push32(0x10edcee6u); f_10eda2e0();
  /* 10edcee6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edcee9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edceec jne 0x10edceef */
  if (!C.zf) goto L_10edceef;
  /* 10edceee int3  */
  x86_unimpl("int3 @ 0x10edceee");
L_10edceef:;
  /* 10edceef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10edcef1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edcef3 jne 0x10edcecf */
  if (!C.zf) goto L_10edcecf;
  /* 10edcef5 jmp 0x10edd023 */
  goto L_10edd023;
L_10edcefa:;
  /* 10edcefa push 9 */
  push32((uint32_t)(0x9u));
  /* 10edcefc call 0x10edb620 */
  push32(0x10edcf01u); f_10edb620();
  /* 10edcf01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edcf04 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edcf07 mov edx, dword ptr [0x10f0f550] */
  EDX = (r32((uint32_t)(0x10f0f550)));
  /* 10edcf0d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10edcf0f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10edcf16 jmp 0x10edcf21 */
  goto L_10edcf21;
L_10edcf18:;
  /* 10edcf18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edcf1b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edcf1e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10edcf21:;
  /* 10edcf21 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edcf25 jge 0x10edcf45 */
  if ((C.sf==C.of)) goto L_10edcf45;
  /* 10edcf27 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edcf2a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edcf2d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 10edcf35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edcf38 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edcf3b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 10edcf43 jmp 0x10edcf18 */
  goto L_10edcf18;
L_10edcf45:;
  /* 10edcf45 mov edx, dword ptr [0x10f0f550] */
  EDX = (r32((uint32_t)(0x10f0f550)));
  /* 10edcf4b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10edcf4e jmp 0x10edcf58 */
  goto L_10edcf58;
L_10edcf50:;
  /* 10edcf50 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edcf53 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10edcf55 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10edcf58:;
  /* 10edcf58 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edcf5c je 0x10edd001 */
  if (C.zf) goto L_10edd001;
  /* 10edcf62 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edcf65 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10edcf68 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10edcf6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edcf6f jl 0x10edcfd7 */
  if ((C.sf!=C.of)) goto L_10edcfd7;
  /* 10edcf71 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edcf74 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10edcf77 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10edcf7d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edcf80 jge 0x10edcfd7 */
  if ((C.sf==C.of)) goto L_10edcfd7;
  /* 10edcf82 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edcf85 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10edcf88 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10edcf8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edcf91 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 10edcf95 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edcf98 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edcf9b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10edcf9e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10edcfa4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edcfa7 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 10edcfab mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edcfae mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10edcfb1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10edcfb6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edcfb9 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 10edcfbd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edcfc0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edcfc3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edcfc6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10edcfc9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10edcfce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edcfd1 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 10edcfd5 jmp 0x10edcffc */
  goto L_10edcffc;
L_10edcfd7:;
  /* 10edcfd7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edcfda push edx */
  push32((uint32_t)(EDX));
  /* 10edcfdb push 0x10f09a88 */
  push32((uint32_t)(0x10f09a88u));
  /* 10edcfe0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edcfe2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edcfe4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edcfe6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edcfe8 call 0x10eda2e0 */
  push32(0x10edcfedu); f_10eda2e0();
  /* 10edcfed add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edcff0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edcff3 jne 0x10edcff6 */
  if (!C.zf) goto L_10edcff6;
  /* 10edcff5 int3  */
  x86_unimpl("int3 @ 0x10edcff5");
L_10edcff6:;
  /* 10edcff6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10edcff8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edcffa jne 0x10edcfd7 */
  if (!C.zf) goto L_10edcfd7;
L_10edcffc:;
  /* 10edcffc jmp 0x10edcf50 */
  goto L_10edcf50;
L_10edd001:;
  /* 10edd001 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edd004 mov edx, dword ptr [0x10f0f558] */
  EDX = (r32((uint32_t)(0x10f0f558)));
  /* 10edd00a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 10edd00d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edd010 mov ecx, dword ptr [0x10f0f54c] */
  ECX = (r32((uint32_t)(0x10f0f54c)));
  /* 10edd016 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 10edd019 push 9 */
  push32((uint32_t)(0x9u));
  /* 10edd01b call 0x10edb6c0 */
  push32(0x10edd020u); f_10edb6c0();
  /* 10edd020 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10edd023:;
  /* 10edd023 pop edi */
  EDI = (pop32());
  /* 10edd024 pop esi */
  ESI = (pop32());
  /* 10edd025 pop ebx */
  EBX = (pop32());
  /* 10edd026 mov esp, ebp */
  ESP = (EBP);
  /* 10edd028 pop ebp */
  EBP = (pop32());
  /* 10edd029 ret  */
  ESPCHK(0x10edcec0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d030 @ 0x10edd030 (291 bytes, 95 insns) */
void f_10edd030(void) {
  FTRACE(0x10edd030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edd030 push ebp */
  push32((uint32_t)(EBP));
  /* 10edd031 mov ebp, esp */
  EBP = (ESP);
  /* 10edd033 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edd036 push ebx */
  push32((uint32_t)(EBX));
  /* 10edd037 push esi */
  push32((uint32_t)(ESI));
  /* 10edd038 push edi */
  push32((uint32_t)(EDI));
  /* 10edd039 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10edd040 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd044 je 0x10edd052 */
  if (C.zf) goto L_10edd052;
  /* 10edd046 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd04a je 0x10edd052 */
  if (C.zf) goto L_10edd052;
  /* 10edd04c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd050 jne 0x10edd080 */
  if (!C.zf) goto L_10edd080;
L_10edd052:;
  /* 10edd052 push 0x10f09ad4 */
  push32((uint32_t)(0x10f09ad4u));
  /* 10edd057 push 0x10f095ec */
  push32((uint32_t)(0x10f095ecu));
  /* 10edd05c push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd05e push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd060 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd062 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd064 call 0x10eda2e0 */
  push32(0x10edd069u); f_10eda2e0();
  /* 10edd069 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edd06c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd06f jne 0x10edd072 */
  if (!C.zf) goto L_10edd072;
  /* 10edd071 int3  */
  x86_unimpl("int3 @ 0x10edd071");
L_10edd072:;
  /* 10edd072 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10edd074 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edd076 jne 0x10edd052 */
  if (!C.zf) goto L_10edd052;
  /* 10edd078 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edd07b jmp 0x10edd14c */
  goto L_10edd14c;
L_10edd080:;
  /* 10edd080 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10edd087 jmp 0x10edd092 */
  goto L_10edd092;
L_10edd089:;
  /* 10edd089 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edd08c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edd08f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10edd092:;
  /* 10edd092 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd096 jge 0x10edd11c */
  if ((C.sf==C.of)) goto L_10edd11c;
  /* 10edd09c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edd09f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edd0a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edd0a5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10edd0a8 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 10edd0ac sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edd0b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edd0b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edd0b6 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 10edd0ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edd0bd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edd0c0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edd0c3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10edd0c6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 10edd0ca sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edd0ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edd0d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edd0d4 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 10edd0d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edd0db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edd0de cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd0e3 jne 0x10edd0f2 */
  if (!C.zf) goto L_10edd0f2;
  /* 10edd0e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edd0e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edd0eb cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd0f0 je 0x10edd117 */
  if (C.zf) goto L_10edd117;
L_10edd0f2:;
  /* 10edd0f2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd0f6 je 0x10edd117 */
  if (C.zf) goto L_10edd117;
  /* 10edd0f8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd0fc jne 0x10edd110 */
  if (!C.zf) goto L_10edd110;
  /* 10edd0fe cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd102 jne 0x10edd117 */
  if (!C.zf) goto L_10edd117;
  /* 10edd104 mov eax, dword ptr [0x10f0cef8] */
  EAX = (r32((uint32_t)(0x10f0cef8)));
  /* 10edd109 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10edd10c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edd10e je 0x10edd117 */
  if (C.zf) goto L_10edd117;
L_10edd110:;
  /* 10edd110 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10edd117:;
  /* 10edd117 jmp 0x10edd089 */
  goto L_10edd089;
L_10edd11c:;
  /* 10edd11c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edd11f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edd122 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10edd125 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edd128 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edd12b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 10edd12e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edd131 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edd134 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 10edd137 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edd13a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edd13d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 10edd140 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edd143 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10edd149 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10edd14c:;
  /* 10edd14c pop edi */
  EDI = (pop32());
  /* 10edd14d pop esi */
  ESI = (pop32());
  /* 10edd14e pop ebx */
  EBX = (pop32());
  /* 10edd14f mov esp, ebp */
  ESP = (EBP);
  /* 10edd151 pop ebp */
  EBP = (pop32());
  /* 10edd152 ret  */
  ESPCHK(0x10edd030u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d160 @ 0x10edd160 (697 bytes, 253 insns) */
void f_10edd160(void) {
  FTRACE(0x10edd160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edd160 push ebp */
  push32((uint32_t)(EBP));
  /* 10edd161 mov ebp, esp */
  EBP = (ESP);
  /* 10edd163 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edd166 push ebx */
  push32((uint32_t)(EBX));
  /* 10edd167 push esi */
  push32((uint32_t)(ESI));
  /* 10edd168 push edi */
  push32((uint32_t)(EDI));
  /* 10edd169 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10edd170 push 9 */
  push32((uint32_t)(0x9u));
  /* 10edd172 call 0x10edb620 */
  push32(0x10edd177u); f_10edb620();
  /* 10edd177 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10edd17a:;
  /* 10edd17a push 0x10f09bcc */
  push32((uint32_t)(0x10f09bccu));
  /* 10edd17f push 0x10f095ec */
  push32((uint32_t)(0x10f095ecu));
  /* 10edd184 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd186 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd188 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd18a push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd18c call 0x10eda2e0 */
  push32(0x10edd191u); f_10eda2e0();
  /* 10edd191 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edd194 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd197 jne 0x10edd19a */
  if (!C.zf) goto L_10edd19a;
  /* 10edd199 int3  */
  x86_unimpl("int3 @ 0x10edd199");
L_10edd19a:;
  /* 10edd19a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10edd19c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edd19e jne 0x10edd17a */
  if (!C.zf) goto L_10edd17a;
  /* 10edd1a0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd1a4 je 0x10edd1ae */
  if (C.zf) goto L_10edd1ae;
  /* 10edd1a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edd1a9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10edd1ab mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10edd1ae:;
  /* 10edd1ae mov eax, dword ptr [0x10f0f550] */
  EAX = (r32((uint32_t)(0x10f0f550)));
  /* 10edd1b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10edd1b6 jmp 0x10edd1c0 */
  goto L_10edd1c0;
L_10edd1b8:;
  /* 10edd1b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edd1bb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10edd1bd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10edd1c0:;
  /* 10edd1c0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd1c4 je 0x10edd3e2 */
  if (C.zf) goto L_10edd3e2;
  /* 10edd1ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edd1cd cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd1d0 je 0x10edd3e2 */
  if (C.zf) goto L_10edd3e2;
  /* 10edd1d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edd1d9 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10edd1dc and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10edd1e2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd1e5 je 0x10edd214 */
  if (C.zf) goto L_10edd214;
  /* 10edd1e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edd1ea mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10edd1ed and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10edd1f3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10edd1f5 je 0x10edd214 */
  if (C.zf) goto L_10edd214;
  /* 10edd1f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edd1fa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10edd1fd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10edd202 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd205 jne 0x10edd219 */
  if (!C.zf) goto L_10edd219;
  /* 10edd207 mov ecx, dword ptr [0x10f0cef8] */
  ECX = (r32((uint32_t)(0x10f0cef8)));
  /* 10edd20d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 10edd210 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10edd212 jne 0x10edd219 */
  if (!C.zf) goto L_10edd219;
L_10edd214:;
  /* 10edd214 jmp 0x10edd3dd */
  goto L_10edd3dd;
L_10edd219:;
  /* 10edd219 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edd21c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd220 je 0x10edd292 */
  if (C.zf) goto L_10edd292;
  /* 10edd222 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd224 push 1 */
  push32((uint32_t)(0x1u));
  /* 10edd226 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edd229 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10edd22c push ecx */
  push32((uint32_t)(ECX));
  /* 10edd22d call 0x10edccd0 */
  push32(0x10edd232u); f_10edccd0();
  /* 10edd232 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edd235 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edd237 jne 0x10edd263 */
  if (!C.zf) goto L_10edd263;
L_10edd239:;
  /* 10edd239 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edd23c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10edd23f push eax */
  push32((uint32_t)(EAX));
  /* 10edd240 push 0x10f09bb8 */
  push32((uint32_t)(0x10f09bb8u));
  /* 10edd245 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd247 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd249 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd24b push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd24d call 0x10eda2e0 */
  push32(0x10edd252u); f_10eda2e0();
  /* 10edd252 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edd255 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd258 jne 0x10edd25b */
  if (!C.zf) goto L_10edd25b;
  /* 10edd25a int3  */
  x86_unimpl("int3 @ 0x10edd25a");
L_10edd25b:;
  /* 10edd25b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10edd25d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10edd25f jne 0x10edd239 */
  if (!C.zf) goto L_10edd239;
  /* 10edd261 jmp 0x10edd292 */
  goto L_10edd292;
L_10edd263:;
  /* 10edd263 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edd266 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10edd269 push eax */
  push32((uint32_t)(EAX));
  /* 10edd26a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edd26d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10edd270 push edx */
  push32((uint32_t)(EDX));
  /* 10edd271 push 0x10f09bac */
  push32((uint32_t)(0x10f09bacu));
  /* 10edd276 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd278 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd27a push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd27c push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd27e call 0x10eda2e0 */
  push32(0x10edd283u); f_10eda2e0();
  /* 10edd283 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edd286 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd289 jne 0x10edd28c */
  if (!C.zf) goto L_10edd28c;
  /* 10edd28b int3  */
  x86_unimpl("int3 @ 0x10edd28b");
L_10edd28c:;
  /* 10edd28c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10edd28e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edd290 jne 0x10edd263 */
  if (!C.zf) goto L_10edd263;
L_10edd292:;
  /* 10edd292 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edd295 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10edd298 push edx */
  push32((uint32_t)(EDX));
  /* 10edd299 push 0x10f09ba4 */
  push32((uint32_t)(0x10f09ba4u));
  /* 10edd29e push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd2a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd2a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd2a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd2a6 call 0x10eda2e0 */
  push32(0x10edd2abu); f_10eda2e0();
  /* 10edd2ab add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edd2ae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd2b1 jne 0x10edd2b4 */
  if (!C.zf) goto L_10edd2b4;
  /* 10edd2b3 int3  */
  x86_unimpl("int3 @ 0x10edd2b3");
L_10edd2b4:;
  /* 10edd2b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10edd2b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edd2b8 jne 0x10edd292 */
  if (!C.zf) goto L_10edd292;
  /* 10edd2ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edd2bd mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10edd2c0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10edd2c6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd2c9 jne 0x10edd33c */
  if (!C.zf) goto L_10edd33c;
L_10edd2cb:;
  /* 10edd2cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edd2ce mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10edd2d1 push ecx */
  push32((uint32_t)(ECX));
  /* 10edd2d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edd2d5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10edd2d8 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10edd2db and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10edd2e0 push eax */
  push32((uint32_t)(EAX));
  /* 10edd2e1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edd2e4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edd2e7 push ecx */
  push32((uint32_t)(ECX));
  /* 10edd2e8 push 0x10f09b70 */
  push32((uint32_t)(0x10f09b70u));
  /* 10edd2ed push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd2ef push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd2f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd2f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd2f5 call 0x10eda2e0 */
  push32(0x10edd2fau); f_10eda2e0();
  /* 10edd2fa add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edd2fd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd300 jne 0x10edd303 */
  if (!C.zf) goto L_10edd303;
  /* 10edd302 int3  */
  x86_unimpl("int3 @ 0x10edd302");
L_10edd303:;
  /* 10edd303 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10edd305 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10edd307 jne 0x10edd2cb */
  if (!C.zf) goto L_10edd2cb;
  /* 10edd309 cmp dword ptr [0x10f10ffc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f10ffc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd310 je 0x10edd32b */
  if (C.zf) goto L_10edd32b;
  /* 10edd312 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edd315 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10edd318 push ecx */
  push32((uint32_t)(ECX));
  /* 10edd319 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edd31c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edd31f push edx */
  push32((uint32_t)(EDX));
  /* 10edd320 call dword ptr [0x10f10ffc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f10ffc))), 0x10edd326u);
  /* 10edd326 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edd329 jmp 0x10edd337 */
  goto L_10edd337;
L_10edd32b:;
  /* 10edd32b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edd32e push eax */
  push32((uint32_t)(EAX));
  /* 10edd32f call 0x10edd420 */
  push32(0x10edd334u); f_10edd420();
  /* 10edd334 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10edd337:;
  /* 10edd337 jmp 0x10edd3dd */
  goto L_10edd3dd;
L_10edd33c:;
  /* 10edd33c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edd33f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd343 jne 0x10edd382 */
  if (!C.zf) goto L_10edd382;
L_10edd345:;
  /* 10edd345 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edd348 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10edd34b push eax */
  push32((uint32_t)(EAX));
  /* 10edd34c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edd34f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edd352 push ecx */
  push32((uint32_t)(ECX));
  /* 10edd353 push 0x10f09b48 */
  push32((uint32_t)(0x10f09b48u));
  /* 10edd358 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd35a push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd35c push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd35e push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd360 call 0x10eda2e0 */
  push32(0x10edd365u); f_10eda2e0();
  /* 10edd365 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edd368 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd36b jne 0x10edd36e */
  if (!C.zf) goto L_10edd36e;
  /* 10edd36d int3  */
  x86_unimpl("int3 @ 0x10edd36d");
L_10edd36e:;
  /* 10edd36e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10edd370 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10edd372 jne 0x10edd345 */
  if (!C.zf) goto L_10edd345;
  /* 10edd374 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edd377 push eax */
  push32((uint32_t)(EAX));
  /* 10edd378 call 0x10edd420 */
  push32(0x10edd37du); f_10edd420();
  /* 10edd37d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edd380 jmp 0x10edd3dd */
  goto L_10edd3dd;
L_10edd382:;
  /* 10edd382 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edd385 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10edd388 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10edd38e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd391 jne 0x10edd3dd */
  if (!C.zf) goto L_10edd3dd;
L_10edd393:;
  /* 10edd393 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edd396 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10edd399 push ecx */
  push32((uint32_t)(ECX));
  /* 10edd39a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edd39d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10edd3a0 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10edd3a3 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10edd3a8 push eax */
  push32((uint32_t)(EAX));
  /* 10edd3a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edd3ac add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edd3af push ecx */
  push32((uint32_t)(ECX));
  /* 10edd3b0 push 0x10f09b14 */
  push32((uint32_t)(0x10f09b14u));
  /* 10edd3b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd3b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd3b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd3bb push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd3bd call 0x10eda2e0 */
  push32(0x10edd3c2u); f_10eda2e0();
  /* 10edd3c2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edd3c5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd3c8 jne 0x10edd3cb */
  if (!C.zf) goto L_10edd3cb;
  /* 10edd3ca int3  */
  x86_unimpl("int3 @ 0x10edd3ca");
L_10edd3cb:;
  /* 10edd3cb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10edd3cd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10edd3cf jne 0x10edd393 */
  if (!C.zf) goto L_10edd393;
  /* 10edd3d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edd3d4 push eax */
  push32((uint32_t)(EAX));
  /* 10edd3d5 call 0x10edd420 */
  push32(0x10edd3dau); f_10edd420();
  /* 10edd3da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10edd3dd:;
  /* 10edd3dd jmp 0x10edd1b8 */
  goto L_10edd1b8;
L_10edd3e2:;
  /* 10edd3e2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10edd3e4 call 0x10edb6c0 */
  push32(0x10edd3e9u); f_10edb6c0();
  /* 10edd3e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10edd3ec:;
  /* 10edd3ec push 0x10f09afc */
  push32((uint32_t)(0x10f09afcu));
  /* 10edd3f1 push 0x10f095ec */
  push32((uint32_t)(0x10f095ecu));
  /* 10edd3f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd3f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd3fa push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd3fc push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd3fe call 0x10eda2e0 */
  push32(0x10edd403u); f_10eda2e0();
  /* 10edd403 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edd406 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd409 jne 0x10edd40c */
  if (!C.zf) goto L_10edd40c;
  /* 10edd40b int3  */
  x86_unimpl("int3 @ 0x10edd40b");
L_10edd40c:;
  /* 10edd40c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10edd40e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10edd410 jne 0x10edd3ec */
  if (!C.zf) goto L_10edd3ec;
  /* 10edd412 pop edi */
  EDI = (pop32());
  /* 10edd413 pop esi */
  ESI = (pop32());
  /* 10edd414 pop ebx */
  EBX = (pop32());
  /* 10edd415 mov esp, ebp */
  ESP = (EBP);
  /* 10edd417 pop ebp */
  EBP = (pop32());
  /* 10edd418 ret  */
  ESPCHK(0x10edd160u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d420 @ 0x10edd420 (276 bytes, 89 insns) */
void f_10edd420(void) {
  FTRACE(0x10edd420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edd420 push ebp */
  push32((uint32_t)(EBP));
  /* 10edd421 mov ebp, esp */
  EBP = (ESP);
  /* 10edd423 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edd426 push ebx */
  push32((uint32_t)(EBX));
  /* 10edd427 push esi */
  push32((uint32_t)(ESI));
  /* 10edd428 push edi */
  push32((uint32_t)(EDI));
  /* 10edd429 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 10edd430 jmp 0x10edd43b */
  goto L_10edd43b;
L_10edd432:;
  /* 10edd432 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10edd435 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edd438 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_10edd43b:;
  /* 10edd43b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edd43e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd442 jge 0x10edd44f */
  if ((C.sf==C.of)) goto L_10edd44f;
  /* 10edd444 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edd447 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10edd44a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 10edd44d jmp 0x10edd456 */
  goto L_10edd456;
L_10edd44f:;
  /* 10edd44f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_10edd456:;
  /* 10edd456 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10edd459 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd45c jge 0x10edd4fc */
  if ((C.sf==C.of)) goto L_10edd4fc;
  /* 10edd462 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edd465 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edd468 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 10edd46b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 10edd46e cmp dword ptr [0x10f0cfe0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f0cfe0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd475 jle 0x10edd493 */
  if ((C.zf||C.sf!=C.of)) goto L_10edd493;
  /* 10edd477 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 10edd47c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10edd47f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10edd485 push ecx */
  push32((uint32_t)(ECX));
  /* 10edd486 call 0x10ee0dc0 */
  push32(0x10edd48bu); f_10ee0dc0();
  /* 10edd48b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edd48e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 10edd491 jmp 0x10edd4b0 */
  goto L_10edd4b0;
L_10edd493:;
  /* 10edd493 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10edd496 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10edd49c mov eax, dword ptr [0x10f0cfec] */
  EAX = (r32((uint32_t)(0x10f0cfec)));
  /* 10edd4a1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10edd4a3 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10edd4a7 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 10edd4ad mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_10edd4b0:;
  /* 10edd4b0 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd4b4 je 0x10edd4c4 */
  if (C.zf) goto L_10edd4c4;
  /* 10edd4b6 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10edd4b9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10edd4bf mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 10edd4c2 jmp 0x10edd4cb */
  goto L_10edd4cb;
L_10edd4c4:;
  /* 10edd4c4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_10edd4cb:;
  /* 10edd4cb mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10edd4ce mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 10edd4d1 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 10edd4d5 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10edd4d8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10edd4de push edx */
  push32((uint32_t)(EDX));
  /* 10edd4df push 0x10f09bf0 */
  push32((uint32_t)(0x10f09bf0u));
  /* 10edd4e4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10edd4e7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10edd4ea lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 10edd4ee push ecx */
  push32((uint32_t)(ECX));
  /* 10edd4ef call 0x10ee4090 */
  push32(0x10edd4f4u); f_10ee4090();
  /* 10edd4f4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edd4f7 jmp 0x10edd432 */
  goto L_10edd432;
L_10edd4fc:;
  /* 10edd4fc mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10edd4ff mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_10edd504:;
  /* 10edd504 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 10edd507 push eax */
  push32((uint32_t)(EAX));
  /* 10edd508 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 10edd50b push ecx */
  push32((uint32_t)(ECX));
  /* 10edd50c push 0x10f09be0 */
  push32((uint32_t)(0x10f09be0u));
  /* 10edd511 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd513 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd515 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd517 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd519 call 0x10eda2e0 */
  push32(0x10edd51eu); f_10eda2e0();
  /* 10edd51e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edd521 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd524 jne 0x10edd527 */
  if (!C.zf) goto L_10edd527;
  /* 10edd526 int3  */
  x86_unimpl("int3 @ 0x10edd526");
L_10edd527:;
  /* 10edd527 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10edd529 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10edd52b jne 0x10edd504 */
  if (!C.zf) goto L_10edd504;
  /* 10edd52d pop edi */
  EDI = (pop32());
  /* 10edd52e pop esi */
  ESI = (pop32());
  /* 10edd52f pop ebx */
  EBX = (pop32());
  /* 10edd530 mov esp, ebp */
  ESP = (EBP);
  /* 10edd532 pop ebp */
  EBP = (pop32());
  /* 10edd533 ret  */
  ESPCHK(0x10edd420u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d540 @ 0x10edd540 (116 bytes, 46 insns) */
void f_10edd540(void) {
  FTRACE(0x10edd540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edd540 push ebp */
  push32((uint32_t)(EBP));
  /* 10edd541 mov ebp, esp */
  EBP = (ESP);
  /* 10edd543 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edd546 push ebx */
  push32((uint32_t)(EBX));
  /* 10edd547 push esi */
  push32((uint32_t)(ESI));
  /* 10edd548 push edi */
  push32((uint32_t)(EDI));
  /* 10edd549 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 10edd54c push eax */
  push32((uint32_t)(EAX));
  /* 10edd54d call 0x10edcec0 */
  push32(0x10edd552u); f_10edcec0();
  /* 10edd552 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edd555 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd559 jne 0x10edd574 */
  if (!C.zf) goto L_10edd574;
  /* 10edd55b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd55f jne 0x10edd574 */
  if (!C.zf) goto L_10edd574;
  /* 10edd561 mov ecx, dword ptr [0x10f0cef8] */
  ECX = (r32((uint32_t)(0x10f0cef8)));
  /* 10edd567 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 10edd56a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10edd56c je 0x10edd5ab */
  if (C.zf) goto L_10edd5ab;
  /* 10edd56e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd572 je 0x10edd5ab */
  if (C.zf) goto L_10edd5ab;
L_10edd574:;
  /* 10edd574 push 0x10f09bf8 */
  push32((uint32_t)(0x10f09bf8u));
  /* 10edd579 push 0x10f095ec */
  push32((uint32_t)(0x10f095ecu));
  /* 10edd57e push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd580 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd582 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd584 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd586 call 0x10eda2e0 */
  push32(0x10edd58bu); f_10eda2e0();
  /* 10edd58b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edd58e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd591 jne 0x10edd594 */
  if (!C.zf) goto L_10edd594;
  /* 10edd593 int3  */
  x86_unimpl("int3 @ 0x10edd593");
L_10edd594:;
  /* 10edd594 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10edd596 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10edd598 jne 0x10edd574 */
  if (!C.zf) goto L_10edd574;
  /* 10edd59a push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd59c call 0x10edd160 */
  push32(0x10edd5a1u); f_10edd160();
  /* 10edd5a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edd5a4 mov eax, 1 */
  EAX = (0x1u);
  /* 10edd5a9 jmp 0x10edd5ad */
  goto L_10edd5ad;
L_10edd5ab:;
  /* 10edd5ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10edd5ad:;
  /* 10edd5ad pop edi */
  EDI = (pop32());
  /* 10edd5ae pop esi */
  ESI = (pop32());
  /* 10edd5af pop ebx */
  EBX = (pop32());
  /* 10edd5b0 mov esp, ebp */
  ESP = (EBP);
  /* 10edd5b2 pop ebp */
  EBP = (pop32());
  /* 10edd5b3 ret  */
  ESPCHK(0x10edd540u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d5c0 @ 0x10edd5c0 (197 bytes, 79 insns) */
void f_10edd5c0(void) {
  FTRACE(0x10edd5c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edd5c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10edd5c1 mov ebp, esp */
  EBP = (ESP);
  /* 10edd5c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10edd5c4 push ebx */
  push32((uint32_t)(EBX));
  /* 10edd5c5 push esi */
  push32((uint32_t)(ESI));
  /* 10edd5c6 push edi */
  push32((uint32_t)(EDI));
  /* 10edd5c7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd5cb jne 0x10edd5d2 */
  if (!C.zf) goto L_10edd5d2;
  /* 10edd5cd jmp 0x10edd67e */
  goto L_10edd67e;
L_10edd5d2:;
  /* 10edd5d2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10edd5d9 jmp 0x10edd5e4 */
  goto L_10edd5e4;
L_10edd5db:;
  /* 10edd5db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edd5de add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edd5e1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10edd5e4:;
  /* 10edd5e4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd5e8 jge 0x10edd62e */
  if ((C.sf==C.of)) goto L_10edd62e;
L_10edd5ea:;
  /* 10edd5ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edd5ed mov edx, dword ptr [ecx*4 + 0x10f0cf08] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10f0cf08)));
  /* 10edd5f4 push edx */
  push32((uint32_t)(EDX));
  /* 10edd5f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edd5f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edd5fb mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 10edd5ff push edx */
  push32((uint32_t)(EDX));
  /* 10edd600 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edd603 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edd606 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 10edd60a push edx */
  push32((uint32_t)(EDX));
  /* 10edd60b push 0x10f09c54 */
  push32((uint32_t)(0x10f09c54u));
  /* 10edd610 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd612 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd614 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd616 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd618 call 0x10eda2e0 */
  push32(0x10edd61du); f_10eda2e0();
  /* 10edd61d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edd620 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd623 jne 0x10edd626 */
  if (!C.zf) goto L_10edd626;
  /* 10edd625 int3  */
  x86_unimpl("int3 @ 0x10edd625");
L_10edd626:;
  /* 10edd626 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10edd628 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edd62a jne 0x10edd5ea */
  if (!C.zf) goto L_10edd5ea;
  /* 10edd62c jmp 0x10edd5db */
  goto L_10edd5db;
L_10edd62e:;
  /* 10edd62e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edd631 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10edd634 push edx */
  push32((uint32_t)(EDX));
  /* 10edd635 push 0x10f09c30 */
  push32((uint32_t)(0x10f09c30u));
  /* 10edd63a push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd63c push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd63e push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd640 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd642 call 0x10eda2e0 */
  push32(0x10edd647u); f_10eda2e0();
  /* 10edd647 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edd64a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd64d jne 0x10edd650 */
  if (!C.zf) goto L_10edd650;
  /* 10edd64f int3  */
  x86_unimpl("int3 @ 0x10edd64f");
L_10edd650:;
  /* 10edd650 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10edd652 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edd654 jne 0x10edd62e */
  if (!C.zf) goto L_10edd62e;
L_10edd656:;
  /* 10edd656 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edd659 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 10edd65c push edx */
  push32((uint32_t)(EDX));
  /* 10edd65d push 0x10f09c10 */
  push32((uint32_t)(0x10f09c10u));
  /* 10edd662 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd664 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd666 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd668 push 0 */
  push32((uint32_t)(0x0u));
  /* 10edd66a call 0x10eda2e0 */
  push32(0x10edd66fu); f_10eda2e0();
  /* 10edd66f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edd672 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd675 jne 0x10edd678 */
  if (!C.zf) goto L_10edd678;
  /* 10edd677 int3  */
  x86_unimpl("int3 @ 0x10edd677");
L_10edd678:;
  /* 10edd678 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10edd67a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edd67c jne 0x10edd656 */
  if (!C.zf) goto L_10edd656;
L_10edd67e:;
  /* 10edd67e pop edi */
  EDI = (pop32());
  /* 10edd67f pop esi */
  ESI = (pop32());
  /* 10edd680 pop ebx */
  EBX = (pop32());
  /* 10edd681 mov esp, ebp */
  ESP = (EBP);
  /* 10edd683 pop ebp */
  EBP = (pop32());
  /* 10edd684 ret  */
  ESPCHK(0x10edd5c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d690 @ 0x10edd690 (239 bytes, 88 insns) */
void f_10edd690(void) {
  FTRACE(0x10edd690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edd690 push ebp */
  push32((uint32_t)(EBP));
  /* 10edd691 mov ebp, esp */
  EBP = (ESP);
  /* 10edd693 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edd696 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10edd699 cmp dword ptr [eax], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd69f jne 0x10edd6aa */
  if (!C.zf) goto L_10edd6aa;
  /* 10edd6a1 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10edd6a8 jmp 0x10edd6b2 */
  goto L_10edd6b2;
L_10edd6aa:;
  /* 10edd6aa call 0x10ede6a0 */
  push32(0x10edd6afu); f_10ede6a0();
  /* 10edd6af mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10edd6b2:;
  /* 10edd6b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edd6b5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10edd6b8 and edx, 0x66 */
  { uint32_t _r=(EDX)&(0x66u); EDX = (_r); fl_logic(_r,32); }
  /* 10edd6bb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10edd6bd je 0x10edd6ee */
  if (C.zf) goto L_10edd6ee;
  /* 10edd6bf mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10edd6c2 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd6c6 je 0x10edd6e4 */
  if (C.zf) goto L_10edd6e4;
  /* 10edd6c8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd6cc jne 0x10edd6e4 */
  if (!C.zf) goto L_10edd6e4;
  /* 10edd6ce push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10edd6d0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10edd6d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10edd6d4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10edd6d7 push edx */
  push32((uint32_t)(EDX));
  /* 10edd6d8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edd6db push eax */
  push32((uint32_t)(EAX));
  /* 10edd6dc call 0x10eddc00 */
  push32(0x10edd6e1u); f_10eddc00();
  /* 10edd6e1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10edd6e4:;
  /* 10edd6e4 mov eax, 1 */
  EAX = (0x1u);
  /* 10edd6e9 jmp 0x10edd77b */
  goto L_10edd77b;
L_10edd6ee:;
  /* 10edd6ee mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10edd6f1 cmp dword ptr [ecx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd6f5 je 0x10edd776 */
  if (C.zf) goto L_10edd776;
  /* 10edd6f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edd6fa cmp dword ptr [edx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd700 jne 0x10edd74e */
  if (!C.zf) goto L_10edd74e;
  /* 10edd702 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edd705 cmp dword ptr [eax + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd70c jbe 0x10edd74e */
  if ((C.cf||C.zf)) goto L_10edd74e;
  /* 10edd70e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edd711 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10edd714 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10edd717 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10edd71a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd71e je 0x10edd74e */
  if (C.zf) goto L_10edd74e;
  /* 10edd720 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10edd723 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10edd729 push ecx */
  push32((uint32_t)(ECX));
  /* 10edd72a mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 10edd72d push edx */
  push32((uint32_t)(EDX));
  /* 10edd72e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10edd731 push eax */
  push32((uint32_t)(EAX));
  /* 10edd732 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10edd735 push ecx */
  push32((uint32_t)(ECX));
  /* 10edd736 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10edd739 push edx */
  push32((uint32_t)(EDX));
  /* 10edd73a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edd73d push eax */
  push32((uint32_t)(EAX));
  /* 10edd73e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edd741 push ecx */
  push32((uint32_t)(ECX));
  /* 10edd742 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edd745 push edx */
  push32((uint32_t)(EDX));
  /* 10edd746 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10edd749u);
  /* 10edd749 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edd74c jmp 0x10edd77b */
  goto L_10edd77b;
L_10edd74e:;
  /* 10edd74e mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10edd751 push eax */
  push32((uint32_t)(EAX));
  /* 10edd752 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10edd755 push ecx */
  push32((uint32_t)(ECX));
  /* 10edd756 mov dl, byte ptr [ebp + 0x24] */
  DL = (r8((uint32_t)(EBP + 0x24)));
  /* 10edd759 push edx */
  push32((uint32_t)(EDX));
  /* 10edd75a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10edd75d push eax */
  push32((uint32_t)(EAX));
  /* 10edd75e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10edd761 push ecx */
  push32((uint32_t)(ECX));
  /* 10edd762 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edd765 push edx */
  push32((uint32_t)(EDX));
  /* 10edd766 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edd769 push eax */
  push32((uint32_t)(EAX));
  /* 10edd76a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edd76d push ecx */
  push32((uint32_t)(ECX));
  /* 10edd76e call 0x10edd780 */
  push32(0x10edd773u); f_10edd780();
  /* 10edd773 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10edd776:;
  /* 10edd776 mov eax, 1 */
  EAX = (0x1u);
L_10edd77b:;
  /* 10edd77b mov esp, ebp */
  ESP = (EBP);
  /* 10edd77d pop ebp */
  EBP = (pop32());
  /* 10edd77e ret  */
  ESPCHK(0x10edd690u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d780 @ 0x10edd780 (672 bytes, 222 insns) */
void f_10edd780(void) {
  FTRACE(0x10edd780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edd780 push ebp */
  push32((uint32_t)(EBP));
  /* 10edd781 mov ebp, esp */
  EBP = (ESP);
  /* 10edd783 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edd786 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 10edd78a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edd78d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10edd790 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10edd793 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd797 jl 0x10edd7ad */
  if ((C.sf!=C.of)) goto L_10edd7ad;
  /* 10edd799 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10edd79c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edd79f cmp eax, dword ptr [edx + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd7a2 jge 0x10edd7ad */
  if ((C.sf==C.of)) goto L_10edd7ad;
  /* 10edd7a4 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10edd7ab jmp 0x10edd7b5 */
  goto L_10edd7b5;
L_10edd7ad:;
  /* 10edd7ad call 0x10ede6a0 */
  push32(0x10edd7b2u); f_10ede6a0();
  /* 10edd7b2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
L_10edd7b5:;
  /* 10edd7b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edd7b8 cmp dword ptr [ecx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd7be jne 0x10edd875 */
  if (!C.zf) goto L_10edd875;
  /* 10edd7c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edd7c7 cmp dword ptr [edx + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd7cb jne 0x10edd875 */
  if (!C.zf) goto L_10edd875;
  /* 10edd7d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edd7d4 cmp dword ptr [eax + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd7db jne 0x10edd875 */
  if (!C.zf) goto L_10edd875;
  /* 10edd7e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edd7e4 cmp dword ptr [ecx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd7e8 jne 0x10edd875 */
  if (!C.zf) goto L_10edd875;
  /* 10edd7ee call 0x10ede420 */
  push32(0x10edd7f3u); f_10ede420();
  /* 10edd7f3 cmp dword ptr [eax + 0x6c], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd7f7 jne 0x10edd7fe */
  if (!C.zf) goto L_10edd7fe;
  /* 10edd7f9 jmp 0x10edda1c */
  goto L_10edda1c;
L_10edd7fe:;
  /* 10edd7fe call 0x10ede420 */
  push32(0x10edd803u); f_10ede420();
  /* 10edd803 mov edx, dword ptr [eax + 0x6c] */
  EDX = (r32((uint32_t)(EAX + 0x6c)));
  /* 10edd806 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10edd809 call 0x10ede420 */
  push32(0x10edd80eu); f_10ede420();
  /* 10edd80e mov eax, dword ptr [eax + 0x70] */
  EAX = (r32((uint32_t)(EAX + 0x70)));
  /* 10edd811 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10edd814 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
  /* 10edd818 push 1 */
  push32((uint32_t)(0x1u));
  /* 10edd81a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edd81d push ecx */
  push32((uint32_t)(ECX));
  /* 10edd81e call 0x10ee4230 */
  push32(0x10edd823u); f_10ee4230();
  /* 10edd823 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edd826 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edd828 je 0x10edd833 */
  if (C.zf) goto L_10edd833;
  /* 10edd82a mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10edd831 jmp 0x10edd83b */
  goto L_10edd83b;
L_10edd833:;
  /* 10edd833 call 0x10ede6a0 */
  push32(0x10edd838u); f_10ede6a0();
  /* 10edd838 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_10edd83b:;
  /* 10edd83b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edd83e cmp dword ptr [edx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd844 jne 0x10edd86e */
  if (!C.zf) goto L_10edd86e;
  /* 10edd846 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edd849 cmp dword ptr [eax + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd84d jne 0x10edd86e */
  if (!C.zf) goto L_10edd86e;
  /* 10edd84f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edd852 cmp dword ptr [ecx + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd859 jne 0x10edd86e */
  if (!C.zf) goto L_10edd86e;
  /* 10edd85b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edd85e cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd862 jne 0x10edd86e */
  if (!C.zf) goto L_10edd86e;
  /* 10edd864 call 0x10ede6a0 */
  push32(0x10edd869u); f_10ede6a0();
  /* 10edd869 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10edd86c jmp 0x10edd875 */
  goto L_10edd875;
L_10edd86e:;
  /* 10edd86e mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_10edd875:;
  /* 10edd875 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edd878 cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd87e jne 0x10edd9dc */
  if (!C.zf) goto L_10edd9dc;
  /* 10edd884 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edd887 cmp dword ptr [ecx + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd88b jne 0x10edd9dc */
  if (!C.zf) goto L_10edd9dc;
  /* 10edd891 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edd894 cmp dword ptr [edx + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd89b jne 0x10edd9dc */
  if (!C.zf) goto L_10edd9dc;
  /* 10edd8a1 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10edd8a4 push eax */
  push32((uint32_t)(EAX));
  /* 10edd8a5 lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 10edd8a8 push ecx */
  push32((uint32_t)(ECX));
  /* 10edd8a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edd8ac push edx */
  push32((uint32_t)(EDX));
  /* 10edd8ad mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10edd8b0 push eax */
  push32((uint32_t)(EAX));
  /* 10edd8b1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10edd8b4 push ecx */
  push32((uint32_t)(ECX));
  /* 10edd8b5 call 0x10ed9ac0 */
  push32(0x10edd8bau); f_10ed9ac0();
  /* 10edd8ba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edd8bd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10edd8c0 jmp 0x10edd8d4 */
  goto L_10edd8d4;
L_10edd8c2:;
  /* 10edd8c2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10edd8c5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edd8c8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10edd8cb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10edd8ce add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edd8d1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10edd8d4:;
  /* 10edd8d4 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10edd8d7 cmp ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd8da jae 0x10edd9bf */
  if (!C.cf) goto L_10edd9bf;
  /* 10edd8e0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10edd8e3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10edd8e5 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd8e8 jg 0x10edd8f5 */
  if ((!C.zf&&C.sf==C.of)) goto L_10edd8f5;
  /* 10edd8ea mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10edd8ed mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edd8f0 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd8f3 jle 0x10edd8f7 */
  if ((C.zf||C.sf!=C.of)) goto L_10edd8f7;
L_10edd8f5:;
  /* 10edd8f5 jmp 0x10edd8c2 */
  goto L_10edd8c2;
L_10edd8f7:;
  /* 10edd8f7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10edd8fa mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10edd8fd mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 10edd900 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10edd903 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10edd906 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10edd909 jmp 0x10edd91d */
  goto L_10edd91d;
L_10edd90b:;
  /* 10edd90b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10edd90e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edd911 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10edd914 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10edd917 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edd91a mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_10edd91d:;
  /* 10edd91d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd921 jle 0x10edd9ba */
  if ((C.zf||C.sf!=C.of)) goto L_10edd9ba;
  /* 10edd927 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edd92a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10edd92d mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10edd930 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edd933 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10edd936 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edd939 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10edd93c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10edd93f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10edd941 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10edd944 jmp 0x10edd958 */
  goto L_10edd958;
L_10edd946:;
  /* 10edd946 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10edd949 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edd94c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10edd94f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10edd952 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edd955 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_10edd958:;
  /* 10edd958 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edd95c jle 0x10edd9b5 */
  if ((C.zf||C.sf!=C.of)) goto L_10edd9b5;
  /* 10edd95e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edd961 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10edd964 push ecx */
  push32((uint32_t)(ECX));
  /* 10edd965 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10edd968 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10edd96a push eax */
  push32((uint32_t)(EAX));
  /* 10edd96b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10edd96e push ecx */
  push32((uint32_t)(ECX));
  /* 10edd96f call 0x10eddb40 */
  push32(0x10edd974u); f_10eddb40();
  /* 10edd974 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edd977 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edd979 jne 0x10edd97d */
  if (!C.zf) goto L_10edd97d;
  /* 10edd97b jmp 0x10edd946 */
  goto L_10edd946;
L_10edd97d:;
  /* 10edd97d mov dl, byte ptr [ebp - 8] */
  DL = (r8((uint32_t)(EBP + -0x8)));
  /* 10edd980 push edx */
  push32((uint32_t)(EDX));
  /* 10edd981 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 10edd984 push eax */
  push32((uint32_t)(EAX));
  /* 10edd985 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10edd988 push ecx */
  push32((uint32_t)(ECX));
  /* 10edd989 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10edd98c push edx */
  push32((uint32_t)(EDX));
  /* 10edd98d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10edd990 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10edd992 push ecx */
  push32((uint32_t)(ECX));
  /* 10edd993 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10edd996 push edx */
  push32((uint32_t)(EDX));
  /* 10edd997 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10edd99a push eax */
  push32((uint32_t)(EAX));
  /* 10edd99b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10edd99e push ecx */
  push32((uint32_t)(ECX));
  /* 10edd99f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edd9a2 push edx */
  push32((uint32_t)(EDX));
  /* 10edd9a3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edd9a6 push eax */
  push32((uint32_t)(EAX));
  /* 10edd9a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edd9aa push ecx */
  push32((uint32_t)(ECX));
  /* 10edd9ab call 0x10eddd30 */
  push32(0x10edd9b0u); f_10eddd30();
  /* 10edd9b0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edd9b3 jmp 0x10edda1a */
  goto L_10edda1a;
L_10edd9b5:;
  /* 10edd9b5 jmp 0x10edd90b */
  goto L_10edd90b;
L_10edd9ba:;
  /* 10edd9ba jmp 0x10edd8c2 */
  goto L_10edd8c2;
L_10edd9bf:;
  /* 10edd9bf mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10edd9c2 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10edd9c8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10edd9ca je 0x10edd9da */
  if (C.zf) goto L_10edd9da;
  /* 10edd9cc push 1 */
  push32((uint32_t)(0x1u));
  /* 10edd9ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edd9d1 push eax */
  push32((uint32_t)(EAX));
  /* 10edd9d2 call 0x10ede210 */
  push32(0x10edd9d7u); f_10ede210();
  /* 10edd9d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10edd9da:;
  /* 10edd9da jmp 0x10edda18 */
  goto L_10edda18;
L_10edd9dc:;
  /* 10edd9dc mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10edd9df and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10edd9e5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10edd9e7 jne 0x10edda13 */
  if (!C.zf) goto L_10edda13;
  /* 10edd9e9 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 10edd9ec push edx */
  push32((uint32_t)(EDX));
  /* 10edd9ed mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10edd9f0 push eax */
  push32((uint32_t)(EAX));
  /* 10edd9f1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edd9f4 push ecx */
  push32((uint32_t)(ECX));
  /* 10edd9f5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10edd9f8 push edx */
  push32((uint32_t)(EDX));
  /* 10edd9f9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10edd9fc push eax */
  push32((uint32_t)(EAX));
  /* 10edd9fd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edda00 push ecx */
  push32((uint32_t)(ECX));
  /* 10edda01 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edda04 push edx */
  push32((uint32_t)(EDX));
  /* 10edda05 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edda08 push eax */
  push32((uint32_t)(EAX));
  /* 10edda09 call 0x10edda20 */
  push32(0x10edda0eu); f_10edda20();
  /* 10edda0e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edda11 jmp 0x10edda18 */
  goto L_10edda18;
L_10edda13:;
  /* 10edda13 call 0x10ede5f0 */
  push32(0x10edda18u); f_10ede5f0();
L_10edda18:;
  /* 10edda18 jmp 0x10edda1c */
  goto L_10edda1c;
L_10edda1a:;
  /* 10edda1a jmp 0x10edd9ba */
  goto L_10edd9ba;
L_10edda1c:;
  /* 10edda1c mov esp, ebp */
  ESP = (EBP);
  /* 10edda1e pop ebp */
  EBP = (pop32());
  /* 10edda1f ret  */
  ESPCHK(0x10edd780u, _esp0);
  ESP += 4; return;
}

/* FUN_1000da20 @ 0x10edda20 (277 bytes, 107 insns) */
void f_10edda20(void) {
  FTRACE(0x10edda20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edda20 push ebp */
  push32((uint32_t)(EBP));
  /* 10edda21 mov ebp, esp */
  EBP = (ESP);
  /* 10edda23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10edda26 call 0x10ede420 */
  push32(0x10edda2bu); f_10ede420();
  /* 10edda2b cmp dword ptr [eax + 0x68], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edda2f je 0x10edda5e */
  if (C.zf) goto L_10edda5e;
  /* 10edda31 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 10edda34 push eax */
  push32((uint32_t)(EAX));
  /* 10edda35 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10edda38 push ecx */
  push32((uint32_t)(ECX));
  /* 10edda39 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10edda3c push edx */
  push32((uint32_t)(EDX));
  /* 10edda3d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10edda40 push eax */
  push32((uint32_t)(EAX));
  /* 10edda41 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edda44 push ecx */
  push32((uint32_t)(ECX));
  /* 10edda45 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edda48 push edx */
  push32((uint32_t)(EDX));
  /* 10edda49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edda4c push eax */
  push32((uint32_t)(EAX));
  /* 10edda4d call 0x10ed9960 */
  push32(0x10edda52u); f_10ed9960();
  /* 10edda52 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edda55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10edda57 je 0x10edda5e */
  if (C.zf) goto L_10edda5e;
  /* 10edda59 jmp 0x10eddb31 */
  goto L_10eddb31;
L_10edda5e:;
  /* 10edda5e lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10edda61 push ecx */
  push32((uint32_t)(ECX));
  /* 10edda62 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10edda65 push edx */
  push32((uint32_t)(EDX));
  /* 10edda66 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10edda69 push eax */
  push32((uint32_t)(EAX));
  /* 10edda6a mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10edda6d push ecx */
  push32((uint32_t)(ECX));
  /* 10edda6e mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10edda71 push edx */
  push32((uint32_t)(EDX));
  /* 10edda72 call 0x10ed9ac0 */
  push32(0x10edda77u); f_10ed9ac0();
  /* 10edda77 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edda7a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10edda7d jmp 0x10edda91 */
  goto L_10edda91;
L_10edda7f:;
  /* 10edda7f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edda82 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edda85 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10edda88 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10edda8b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10edda8e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10edda91:;
  /* 10edda91 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10edda94 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edda97 jae 0x10eddb31 */
  if (!C.cf) goto L_10eddb31;
  /* 10edda9d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eddaa0 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10eddaa3 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eddaa5 jl 0x10eddae9 */
  if ((C.sf!=C.of)) goto L_10eddae9;
  /* 10eddaa7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eddaaa mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10eddaad cmp eax, dword ptr [edx + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eddab0 jg 0x10eddae9 */
  if ((!C.zf&&C.sf==C.of)) goto L_10eddae9;
  /* 10eddab2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eddab5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10eddab8 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eddabb shl edx, 4 */
  EDX = (sh_shl((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10eddabe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eddac1 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10eddac4 cmp dword ptr [ecx + edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + EDX*1 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eddac9 je 0x10eddaeb */
  if (C.zf) goto L_10eddaeb;
  /* 10eddacb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eddace mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10eddad1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eddad4 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10eddad7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eddada mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10eddadd mov eax, dword ptr [edx + eax + 4] */
  EAX = (r32((uint32_t)(EDX + EAX*1 + 0x4)));
  /* 10eddae1 movsx ecx, byte ptr [eax + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x8))));
  /* 10eddae5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10eddae7 je 0x10eddaeb */
  if (C.zf) goto L_10eddaeb;
L_10eddae9:;
  /* 10eddae9 jmp 0x10edda7f */
  goto L_10edda7f;
L_10eddaeb:;
  /* 10eddaeb push 1 */
  push32((uint32_t)(0x1u));
  /* 10eddaed mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 10eddaf0 push edx */
  push32((uint32_t)(EDX));
  /* 10eddaf1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10eddaf4 push eax */
  push32((uint32_t)(EAX));
  /* 10eddaf5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eddaf8 push ecx */
  push32((uint32_t)(ECX));
  /* 10eddaf9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10eddafb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eddafe mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10eddb01 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eddb04 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10eddb07 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eddb0a mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10eddb0d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eddb0f push edx */
  push32((uint32_t)(EDX));
  /* 10eddb10 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10eddb13 push eax */
  push32((uint32_t)(EAX));
  /* 10eddb14 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eddb17 push ecx */
  push32((uint32_t)(ECX));
  /* 10eddb18 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eddb1b push edx */
  push32((uint32_t)(EDX));
  /* 10eddb1c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eddb1f push eax */
  push32((uint32_t)(EAX));
  /* 10eddb20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eddb23 push ecx */
  push32((uint32_t)(ECX));
  /* 10eddb24 call 0x10eddd30 */
  push32(0x10eddb29u); f_10eddd30();
  /* 10eddb29 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eddb2c jmp 0x10edda7f */
  goto L_10edda7f;
L_10eddb31:;
  /* 10eddb31 mov esp, ebp */
  ESP = (EBP);
  /* 10eddb33 pop ebp */
  EBP = (pop32());
  /* 10eddb34 ret  */
  ESPCHK(0x10edda20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db40 @ 0x10eddb40 (182 bytes, 69 insns) */
void f_10eddb40(void) {
  FTRACE(0x10eddb40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eddb40 push ebp */
  push32((uint32_t)(EBP));
  /* 10eddb41 mov ebp, esp */
  EBP = (ESP);
  /* 10eddb43 push ecx */
  push32((uint32_t)(ECX));
  /* 10eddb44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eddb47 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eddb4b je 0x10eddb5b */
  if (C.zf) goto L_10eddb5b;
  /* 10eddb4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eddb50 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10eddb53 movsx eax, byte ptr [edx + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x8))));
  /* 10eddb57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eddb59 jne 0x10eddb65 */
  if (!C.zf) goto L_10eddb65;
L_10eddb5b:;
  /* 10eddb5b mov eax, 1 */
  EAX = (0x1u);
  /* 10eddb60 jmp 0x10eddbf2 */
  goto L_10eddbf2;
L_10eddb65:;
  /* 10eddb65 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eddb68 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eddb6b mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10eddb6e cmp eax, dword ptr [edx + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eddb71 je 0x10eddb97 */
  if (C.zf) goto L_10eddb97;
  /* 10eddb73 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eddb76 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10eddb79 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eddb7c push edx */
  push32((uint32_t)(EDX));
  /* 10eddb7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eddb80 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10eddb83 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eddb86 push ecx */
  push32((uint32_t)(ECX));
  /* 10eddb87 call 0x10ee42c0 */
  push32(0x10eddb8cu); f_10ee42c0();
  /* 10eddb8c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eddb8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eddb91 je 0x10eddb97 */
  if (C.zf) goto L_10eddb97;
  /* 10eddb93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eddb95 jmp 0x10eddbf2 */
  goto L_10eddbf2;
L_10eddb97:;
  /* 10eddb97 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eddb9a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10eddb9c and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 10eddb9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eddba1 je 0x10eddbaf */
  if (C.zf) goto L_10eddbaf;
  /* 10eddba3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eddba6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10eddba8 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10eddbab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10eddbad je 0x10eddbe8 */
  if (C.zf) goto L_10eddbe8;
L_10eddbaf:;
  /* 10eddbaf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eddbb2 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10eddbb4 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10eddbb7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10eddbb9 je 0x10eddbc7 */
  if (C.zf) goto L_10eddbc7;
  /* 10eddbbb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eddbbe mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10eddbc0 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10eddbc3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eddbc5 je 0x10eddbe8 */
  if (C.zf) goto L_10eddbe8;
L_10eddbc7:;
  /* 10eddbc7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eddbca mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10eddbcc and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10eddbcf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10eddbd1 je 0x10eddbdf */
  if (C.zf) goto L_10eddbdf;
  /* 10eddbd3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eddbd6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10eddbd8 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10eddbdb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10eddbdd je 0x10eddbe8 */
  if (C.zf) goto L_10eddbe8;
L_10eddbdf:;
  /* 10eddbdf mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10eddbe6 jmp 0x10eddbef */
  goto L_10eddbef;
L_10eddbe8:;
  /* 10eddbe8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10eddbef:;
  /* 10eddbef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10eddbf2:;
  /* 10eddbf2 mov esp, ebp */
  ESP = (EBP);
  /* 10eddbf4 pop ebp */
  EBP = (pop32());
  /* 10eddbf5 ret  */
  ESPCHK(0x10eddb40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc00 @ 0x10eddc00 (224 bytes, 77 insns) */
void f_10eddc00(void) {
  FTRACE(0x10eddc00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eddc00 push ebp */
  push32((uint32_t)(EBP));
  /* 10eddc01 mov ebp, esp */
  EBP = (ESP);
  /* 10eddc03 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10eddc05 push 0x10f09c78 */
  push32((uint32_t)(0x10f09c78u));
  /* 10eddc0a push 0x10ee434c */
  push32((uint32_t)(0x10ee434cu));
  /* 10eddc0f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10eddc15 push eax */
  push32((uint32_t)(EAX));
  /* 10eddc16 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10eddc1d add esp, -0x14 */
  { uint32_t _a=(ESP),_b=(0xffffffecu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eddc20 push ebx */
  push32((uint32_t)(EBX));
  /* 10eddc21 push esi */
  push32((uint32_t)(ESI));
  /* 10eddc22 push edi */
  push32((uint32_t)(EDI));
  /* 10eddc23 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10eddc26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eddc29 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10eddc2c mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
L_10eddc2f:;
  /* 10eddc2f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10eddc32 cmp edx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eddc35 je 0x10eddcc4 */
  if (C.zf) goto L_10eddcc4;
  /* 10eddc3b cmp dword ptr [ebp - 0x1c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eddc3f jle 0x10eddc55 */
  if ((C.zf||C.sf!=C.of)) goto L_10eddc55;
  /* 10eddc41 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eddc44 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10eddc47 cmp ecx, dword ptr [eax + 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eddc4a jge 0x10eddc55 */
  if ((C.sf==C.of)) goto L_10eddc55;
  /* 10eddc4c mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10eddc53 jmp 0x10eddc5d */
  goto L_10eddc5d;
L_10eddc55:;
  /* 10eddc55 call 0x10ede6a0 */
  push32(0x10eddc5au); f_10ede6a0();
  /* 10eddc5a mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_10eddc5d:;
  /* 10eddc5d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10eddc64 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eddc67 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10eddc6a mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10eddc6d cmp dword ptr [eax + ecx*8 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + ECX*8 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eddc72 je 0x10eddc90 */
  if (C.zf) goto L_10eddc90;
  /* 10eddc74 push 0x103 */
  push32((uint32_t)(0x103u));
  /* 10eddc79 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eddc7c push edx */
  push32((uint32_t)(EDX));
  /* 10eddc7d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eddc80 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10eddc83 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10eddc86 mov eax, dword ptr [ecx + edx*8 + 4] */
  EAX = (r32((uint32_t)(ECX + EDX*8 + 0x4)));
  /* 10eddc8a push eax */
  push32((uint32_t)(EAX));
  /* 10eddc8b call 0x10ede2f0 */
  push32(0x10eddc90u); f_10ede2f0();
L_10eddc90:;
  /* 10eddc90 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10eddc97 jmp 0x10eddcb0 */
  goto L_10eddcb0;
  /* 10eddc99 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10eddc9c push ecx */
  push32((uint32_t)(ECX));
  /* 10eddc9d call 0x10eddd00 */
  push32(0x10eddca2u); f_10eddd00();
  /* 10eddca2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eddca5 ret  */
  ESPCHK(0x10eddc00u, _esp0);
  ESP += 4; return;
  /* 10eddca6 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10eddca9 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10eddcb0:;
  /* 10eddcb0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eddcb3 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10eddcb6 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10eddcb9 mov edx, dword ptr [eax + ecx*8] */
  EDX = (r32((uint32_t)(EAX + ECX*8)));
  /* 10eddcbc mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10eddcbf jmp 0x10eddc2f */
  goto L_10eddc2f;
L_10eddcc4:;
  /* 10eddcc4 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10eddcc7 cmp eax, dword ptr [ebp + 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eddcca jne 0x10eddcd5 */
  if (!C.zf) goto L_10eddcd5;
  /* 10eddccc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10eddcd3 jmp 0x10eddcdd */
  goto L_10eddcdd;
L_10eddcd5:;
  /* 10eddcd5 call 0x10ede6a0 */
  push32(0x10eddcdau); f_10ede6a0();
  /* 10eddcda mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10eddcdd:;
  /* 10eddcdd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eddce0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10eddce3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10eddce6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10eddce9 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10eddcf0 pop edi */
  EDI = (pop32());
  /* 10eddcf1 pop esi */
  ESI = (pop32());
  /* 10eddcf2 pop ebx */
  EBX = (pop32());
  /* 10eddcf3 mov esp, ebp */
  ESP = (EBP);
  /* 10eddcf5 pop ebp */
  EBP = (pop32());
  /* 10eddcf6 ret  */
  ESPCHK(0x10eddc00u, _esp0);
  ESP += 4; return;
}

/* ArrayUnwindFilter @ 0x10eddd00 (44 bytes, 17 insns) */
void f_10eddd00(void) {
  FTRACE(0x10eddd00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eddd00 push ebp */
  push32((uint32_t)(EBP));
  /* 10eddd01 mov ebp, esp */
  EBP = (ESP);
  /* 10eddd03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eddd06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eddd09 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10eddd0b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10eddd0e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eddd11 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10eddd13 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10eddd16 cmp dword ptr [ebp - 8], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eddd1d je 0x10eddd21 */
  if (C.zf) goto L_10eddd21;
  /* 10eddd1f jmp 0x10eddd26 */
  goto L_10eddd26;
L_10eddd21:;
  /* 10eddd21 call 0x10ede5f0 */
  push32(0x10eddd26u); f_10ede5f0();
L_10eddd26:;
  /* 10eddd26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10eddd28 mov esp, ebp */
  ESP = (EBP);
  /* 10eddd2a pop ebp */
  EBP = (pop32());
  /* 10eddd2b ret  */
  ESPCHK(0x10eddd00u, _esp0);
  ESP += 4; return;
}

/* CatchIt @ 0x10eddd30 (183 bytes, 73 insns) */
void f_10eddd30(void) {
  FTRACE(0x10eddd30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eddd30 push ebp */
  push32((uint32_t)(EBP));
  /* 10eddd31 mov ebp, esp */
  EBP = (ESP);
  /* 10eddd33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10eddd36 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eddd39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10eddd3c cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eddd40 je 0x10eddd5a */
  if (C.zf) goto L_10eddd5a;
  /* 10eddd42 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10eddd45 push ecx */
  push32((uint32_t)(ECX));
  /* 10eddd46 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10eddd49 push edx */
  push32((uint32_t)(EDX));
  /* 10eddd4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eddd4d push eax */
  push32((uint32_t)(EAX));
  /* 10eddd4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eddd51 push ecx */
  push32((uint32_t)(ECX));
  /* 10eddd52 call 0x10eddf90 */
  push32(0x10eddd57u); f_10eddf90();
  /* 10eddd57 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10eddd5a:;
  /* 10eddd5a cmp dword ptr [ebp + 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eddd5e jne 0x10eddd6f */
  if (!C.zf) goto L_10eddd6f;
  /* 10eddd60 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eddd63 push edx */
  push32((uint32_t)(EDX));
  /* 10eddd64 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eddd67 push eax */
  push32((uint32_t)(EAX));
  /* 10eddd68 call 0x10ed97e0 */
  push32(0x10eddd6du); f_10ed97e0();
  /* 10eddd6d jmp 0x10eddd7c */
  goto L_10eddd7c;
L_10eddd6f:;
  /* 10eddd6f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eddd72 push ecx */
  push32((uint32_t)(ECX));
  /* 10eddd73 mov edx, dword ptr [ebp + 0x2c] */
  EDX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10eddd76 push edx */
  push32((uint32_t)(EDX));
  /* 10eddd77 call 0x10ed97e0 */
  push32(0x10eddd7cu); f_10ed97e0();
L_10eddd7c:;
  /* 10eddd7c mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 10eddd7f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10eddd81 push ecx */
  push32((uint32_t)(ECX));
  /* 10eddd82 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10eddd85 push edx */
  push32((uint32_t)(EDX));
  /* 10eddd86 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10eddd89 push eax */
  push32((uint32_t)(EAX));
  /* 10eddd8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eddd8d push ecx */
  push32((uint32_t)(ECX));
  /* 10eddd8e call 0x10eddc00 */
  push32(0x10eddd93u); f_10eddc00();
  /* 10eddd93 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eddd96 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 10eddd99 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10eddd9c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10eddd9f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eddda2 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10eddda5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10edddaa mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10edddad push edx */
  push32((uint32_t)(EDX));
  /* 10edddae mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10edddb1 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10edddb4 push ecx */
  push32((uint32_t)(ECX));
  /* 10edddb5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10edddb8 push edx */
  push32((uint32_t)(EDX));
  /* 10edddb9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edddbc push eax */
  push32((uint32_t)(EAX));
  /* 10edddbd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10edddc0 push ecx */
  push32((uint32_t)(ECX));
  /* 10edddc1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edddc4 push edx */
  push32((uint32_t)(EDX));
  /* 10edddc5 call 0x10edddf0 */
  push32(0x10edddcau); f_10edddf0();
  /* 10edddca add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edddcd mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10edddd0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10edddd4 je 0x10eddde3 */
  if (C.zf) goto L_10eddde3;
  /* 10edddd6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edddd9 push eax */
  push32((uint32_t)(EAX));
  /* 10edddda mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10eddddd push ecx */
  push32((uint32_t)(ECX));
  /* 10edddde call 0x10ed9770 */
  push32(0x10eddde3u); f_10ed9770();
L_10eddde3:;
  /* 10eddde3 mov esp, ebp */
  ESP = (EBP);
  /* 10eddde5 pop ebp */
  EBP = (pop32());
  /* 10eddde6 ret  */
  ESPCHK(0x10eddd30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ddf0 @ 0x10edddf0 (172 bytes, 66 insns) */
void f_10edddf0(void) {
  FTRACE(0x10edddf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10edddf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10edddf1 mov ebp, esp */
  EBP = (ESP);
  /* 10edddf3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10edddf5 push 0x10f09c88 */
  push32((uint32_t)(0x10f09c88u));
  /* 10edddfa push 0x10ee434c */
  push32((uint32_t)(0x10ee434cu));
  /* 10edddff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10edde05 push eax */
  push32((uint32_t)(EAX));
  /* 10edde06 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10edde0d add esp, -0x20 */
  { uint32_t _a=(ESP),_b=(0xffffffe0u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edde10 push ebx */
  push32((uint32_t)(EBX));
  /* 10edde11 push esi */
  push32((uint32_t)(ESI));
  /* 10edde12 push edi */
  push32((uint32_t)(EDI));
  /* 10edde13 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10edde16 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10edde19 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10edde1c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10edde23 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edde26 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10edde29 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10edde2c call 0x10ede420 */
  push32(0x10edde31u); f_10ede420();
  /* 10edde31 mov eax, dword ptr [eax + 0x6c] */
  EAX = (r32((uint32_t)(EAX + 0x6c)));
  /* 10edde34 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10edde37 call 0x10ede420 */
  push32(0x10edde3cu); f_10ede420();
  /* 10edde3c mov ecx, dword ptr [eax + 0x70] */
  ECX = (r32((uint32_t)(EAX + 0x70)));
  /* 10edde3f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10edde42 call 0x10ede420 */
  push32(0x10edde47u); f_10ede420();
  /* 10edde47 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10edde4a mov dword ptr [eax + 0x6c], edx */
  w32((uint32_t)(EAX + 0x6c), (EDX));
  /* 10edde4d call 0x10ede420 */
  push32(0x10edde52u); f_10ede420();
  /* 10edde52 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10edde55 mov dword ptr [eax + 0x70], ecx */
  w32((uint32_t)(EAX + 0x70), (ECX));
  /* 10edde58 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10edde5f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10edde66 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 10edde69 push edx */
  push32((uint32_t)(EDX));
  /* 10edde6a mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10edde6d push eax */
  push32((uint32_t)(EAX));
  /* 10edde6e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10edde71 push ecx */
  push32((uint32_t)(ECX));
  /* 10edde72 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10edde75 push edx */
  push32((uint32_t)(EDX));
  /* 10edde76 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edde79 push eax */
  push32((uint32_t)(EAX));
  /* 10edde7a call 0x10ed98b0 */
  push32(0x10edde7fu); f_10ed98b0();
  /* 10edde7f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edde82 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10edde85 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10edde8c jmp 0x10eddebf */
  goto L_10eddebf;
  /* 10edde8e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10edde91 push ecx */
  push32((uint32_t)(ECX));
  /* 10edde92 call 0x10eddf40 */
  push32(0x10edde97u); f_10eddf40();
  /* 10edde97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10edde9a ret  */
  ESPCHK(0x10edddf0u, _esp0);
  ESP += 4; return;
  /* 10edde9b mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10edde9e mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10eddea5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10eddea7 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
  /* 10eddeae lea edx, [ebp - 0x10] */
  EDX = ((uint32_t)(EBP + -0x10));
  /* 10eddeb1 push edx */
  push32((uint32_t)(EDX));
  /* 10eddeb2 call 0x10ed9b92 */
  push32(0x10eddeb7u); f_10ed9b92();
  /* 10eddeb7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eddeba mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10eddebd jmp 0x10eddf2e */
  jmp_ind(0x10eddf2eu); return;
L_10eddebf:;
  /* 10eddebf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10eddec6 call 0x10eddecd */
  push32(0x10eddecbu); f_10eddecd();
  /* 10eddecb jmp 0x10eddf2b */
  f_10eddf2b(); return;
}

/* FUN_1000decd @ 0x10eddecd (94 bytes, 29 insns) */
void f_10eddecd(void) {
  FTRACE(0x10eddecdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eddecd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10edded0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10edded3 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 10edded6 call 0x10ede420 */
  push32(0x10eddedbu); f_10ede420();
  /* 10eddedb mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10eddede mov dword ptr [eax + 0x6c], edx */
  w32((uint32_t)(EAX + 0x6c), (EDX));
  /* 10eddee1 call 0x10ede420 */
  push32(0x10eddee6u); f_10ede420();
  /* 10eddee6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10eddee9 mov dword ptr [eax + 0x70], ecx */
  w32((uint32_t)(EAX + 0x70), (ECX));
  /* 10eddeec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eddeef cmp dword ptr [edx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eddef5 jne 0x10eddf2a */
  if (!C.zf) goto L_10eddf2a;
  /* 10eddef7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eddefa cmp dword ptr [eax + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eddefe jne 0x10eddf2a */
  if (!C.zf) goto L_10eddf2a;
  /* 10eddf00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eddf03 cmp dword ptr [ecx + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eddf0a jne 0x10eddf2a */
  if (!C.zf) goto L_10eddf2a;
  /* 10eddf0c cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eddf10 jne 0x10eddf2a */
  if (!C.zf) goto L_10eddf2a;
  /* 10eddf12 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eddf16 je 0x10eddf2a */
  if (C.zf) goto L_10eddf2a;
  /* 10eddf18 call 0x10ed9bfa */
  push32(0x10eddf1du); f_10ed9bfa();
  /* 10eddf1d push eax */
  push32((uint32_t)(EAX));
  /* 10eddf1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eddf21 push edx */
  push32((uint32_t)(EDX));
  /* 10eddf22 call 0x10ede210 */
  push32(0x10eddf27u); f_10ede210();
  /* 10eddf27 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10eddf2a:;
  /* 10eddf2a ret  */
  ESPCHK(0x10eddecdu, _esp0);
  ESP += 4; return;
}

/* FUN_1000df2b @ 0x10eddf2b (20 bytes, 9 insns) */
void f_10eddf2b(void) {
  FTRACE(0x10eddf2bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eddf2b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10eddf2e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10eddf31 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10eddf38 pop edi */
  EDI = (pop32());
  /* 10eddf39 pop esi */
  ESI = (pop32());
  /* 10eddf3a pop ebx */
  EBX = (pop32());
  /* 10eddf3b mov esp, ebp */
  ESP = (EBP);
  /* 10eddf3d pop ebp */
  EBP = (pop32());
  /* 10eddf3e ret  */
  ESPCHK(0x10eddf2bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000df40 @ 0x10eddf40 (66 bytes, 24 insns) */
void f_10eddf40(void) {
  FTRACE(0x10eddf40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eddf40 push ebp */
  push32((uint32_t)(EBP));
  /* 10eddf41 mov ebp, esp */
  EBP = (ESP);
  /* 10eddf43 push ecx */
  push32((uint32_t)(ECX));
  /* 10eddf44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10eddf47 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10eddf49 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10eddf4c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eddf4f cmp dword ptr [edx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eddf55 jne 0x10eddf7c */
  if (!C.zf) goto L_10eddf7c;
  /* 10eddf57 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eddf5a cmp dword ptr [eax + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eddf5e jne 0x10eddf7c */
  if (!C.zf) goto L_10eddf7c;
  /* 10eddf60 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eddf63 cmp dword ptr [ecx + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eddf6a jne 0x10eddf7c */
  if (!C.zf) goto L_10eddf7c;
  /* 10eddf6c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10eddf6f cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eddf73 jne 0x10eddf7c */
  if (!C.zf) goto L_10eddf7c;
  /* 10eddf75 mov eax, 1 */
  EAX = (0x1u);
  /* 10eddf7a jmp 0x10eddf7e */
  goto L_10eddf7e;
L_10eddf7c:;
  /* 10eddf7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10eddf7e:;
  /* 10eddf7e mov esp, ebp */
  ESP = (EBP);
  /* 10eddf80 pop ebp */
  EBP = (pop32());
  /* 10eddf81 ret  */
  ESPCHK(0x10eddf40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df90 @ 0x10eddf90 (621 bytes, 229 insns) */
void f_10eddf90(void) {
  FTRACE(0x10eddf90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10eddf90 push ebp */
  push32((uint32_t)(EBP));
  /* 10eddf91 mov ebp, esp */
  EBP = (ESP);
  /* 10eddf93 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10eddf95 push 0x10f09ca0 */
  push32((uint32_t)(0x10f09ca0u));
  /* 10eddf9a push 0x10ee434c */
  push32((uint32_t)(0x10ee434cu));
  /* 10eddf9f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10eddfa5 push eax */
  push32((uint32_t)(EAX));
  /* 10eddfa6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10eddfad add esp, -0xc */
  { uint32_t _a=(ESP),_b=(0xfffffff4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10eddfb0 push ebx */
  push32((uint32_t)(EBX));
  /* 10eddfb1 push esi */
  push32((uint32_t)(ESI));
  /* 10eddfb2 push edi */
  push32((uint32_t)(EDI));
  /* 10eddfb3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10eddfb6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eddfb9 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eddfbd je 0x10eddfd6 */
  if (C.zf) goto L_10eddfd6;
  /* 10eddfbf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eddfc2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10eddfc5 movsx eax, byte ptr [edx + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x8))));
  /* 10eddfc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10eddfcb je 0x10eddfd6 */
  if (C.zf) goto L_10eddfd6;
  /* 10eddfcd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eddfd0 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10eddfd4 jne 0x10eddfdb */
  if (!C.zf) goto L_10eddfdb;
L_10eddfd6:;
  /* 10eddfd6 jmp 0x10ede1fa */
  goto L_10ede1fa;
L_10eddfdb:;
  /* 10eddfdb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eddfde mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10eddfe1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10eddfe4 lea edx, [ecx + eax + 0xc] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0xc));
  /* 10eddfe8 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10eddfeb mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10eddff2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10eddff5 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10eddff7 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10eddffa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10eddffc je 0x10ede056 */
  if (C.zf) goto L_10ede056;
  /* 10eddffe push 1 */
  push32((uint32_t)(0x1u));
  /* 10ede000 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ede003 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10ede006 push eax */
  push32((uint32_t)(EAX));
  /* 10ede007 call 0x10ee4230 */
  push32(0x10ede00cu); f_10ee4230();
  /* 10ede00c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ede00f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ede011 je 0x10ede04c */
  if (C.zf) goto L_10ede04c;
  /* 10ede013 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ede015 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ede018 push ecx */
  push32((uint32_t)(ECX));
  /* 10ede019 call 0x10ee4260 */
  push32(0x10ede01eu); f_10ee4260();
  /* 10ede01e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ede021 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ede023 je 0x10ede04c */
  if (C.zf) goto L_10ede04c;
  /* 10ede025 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ede028 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ede02b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10ede02e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10ede030 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ede033 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ede036 push edx */
  push32((uint32_t)(EDX));
  /* 10ede037 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ede03a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ede03c push ecx */
  push32((uint32_t)(ECX));
  /* 10ede03d call 0x10ede2a0 */
  push32(0x10ede042u); f_10ede2a0();
  /* 10ede042 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ede045 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ede048 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10ede04a jmp 0x10ede051 */
  goto L_10ede051;
L_10ede04c:;
  /* 10ede04c call 0x10ede6a0 */
  push32(0x10ede051u); f_10ede6a0();
L_10ede051:;
  /* 10ede051 jmp 0x10ede1e3 */
  goto L_10ede1e3;
L_10ede056:;
  /* 10ede056 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ede059 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ede05b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10ede05e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ede060 je 0x10ede0da */
  if (C.zf) goto L_10ede0da;
  /* 10ede062 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ede064 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ede067 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10ede06a push eax */
  push32((uint32_t)(EAX));
  /* 10ede06b call 0x10ee4230 */
  push32(0x10ede070u); f_10ee4230();
  /* 10ede070 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ede073 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ede075 je 0x10ede0d0 */
  if (C.zf) goto L_10ede0d0;
  /* 10ede077 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ede079 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ede07c push ecx */
  push32((uint32_t)(ECX));
  /* 10ede07d call 0x10ee4260 */
  push32(0x10ede082u); f_10ee4260();
  /* 10ede082 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ede085 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ede087 je 0x10ede0d0 */
  if (C.zf) goto L_10ede0d0;
  /* 10ede089 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ede08c mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10ede08f push eax */
  push32((uint32_t)(EAX));
  /* 10ede090 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ede093 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10ede096 push edx */
  push32((uint32_t)(EDX));
  /* 10ede097 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ede09a push eax */
  push32((uint32_t)(EAX));
  /* 10ede09b call 0x10ee1b90 */
  push32(0x10ede0a0u); f_10ee1b90();
  /* 10ede0a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ede0a3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ede0a6 cmp dword ptr [ecx + 0x14], 4 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ede0aa jne 0x10ede0ce */
  if (!C.zf) goto L_10ede0ce;
  /* 10ede0ac mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ede0af cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ede0b2 je 0x10ede0ce */
  if (C.zf) goto L_10ede0ce;
  /* 10ede0b4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ede0b7 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ede0ba push eax */
  push32((uint32_t)(EAX));
  /* 10ede0bb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ede0be mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ede0c0 push edx */
  push32((uint32_t)(EDX));
  /* 10ede0c1 call 0x10ede2a0 */
  push32(0x10ede0c6u); f_10ede2a0();
  /* 10ede0c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ede0c9 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ede0cc mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10ede0ce:;
  /* 10ede0ce jmp 0x10ede0d5 */
  goto L_10ede0d5;
L_10ede0d0:;
  /* 10ede0d0 call 0x10ede6a0 */
  push32(0x10ede0d5u); f_10ede6a0();
L_10ede0d5:;
  /* 10ede0d5 jmp 0x10ede1e3 */
  goto L_10ede1e3;
L_10ede0da:;
  /* 10ede0da mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ede0dd cmp dword ptr [edx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ede0e1 jne 0x10ede140 */
  if (!C.zf) goto L_10ede140;
  /* 10ede0e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ede0e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ede0e8 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10ede0eb push ecx */
  push32((uint32_t)(ECX));
  /* 10ede0ec call 0x10ee4230 */
  push32(0x10ede0f1u); f_10ee4230();
  /* 10ede0f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ede0f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ede0f6 je 0x10ede136 */
  if (C.zf) goto L_10ede136;
  /* 10ede0f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ede0fa mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ede0fd push edx */
  push32((uint32_t)(EDX));
  /* 10ede0fe call 0x10ee4260 */
  push32(0x10ede103u); f_10ee4260();
  /* 10ede103 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ede106 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ede108 je 0x10ede136 */
  if (C.zf) goto L_10ede136;
  /* 10ede10a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ede10d mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10ede110 push ecx */
  push32((uint32_t)(ECX));
  /* 10ede111 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ede114 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ede117 push edx */
  push32((uint32_t)(EDX));
  /* 10ede118 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ede11b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10ede11e push ecx */
  push32((uint32_t)(ECX));
  /* 10ede11f call 0x10ede2a0 */
  push32(0x10ede124u); f_10ede2a0();
  /* 10ede124 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ede127 push eax */
  push32((uint32_t)(EAX));
  /* 10ede128 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ede12b push edx */
  push32((uint32_t)(EDX));
  /* 10ede12c call 0x10ee1b90 */
  push32(0x10ede131u); f_10ee1b90();
  /* 10ede131 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ede134 jmp 0x10ede13b */
  goto L_10ede13b;
L_10ede136:;
  /* 10ede136 call 0x10ede6a0 */
  push32(0x10ede13bu); f_10ede6a0();
L_10ede13b:;
  /* 10ede13b jmp 0x10ede1e3 */
  goto L_10ede1e3;
L_10ede140:;
  /* 10ede140 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ede142 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ede145 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10ede148 push ecx */
  push32((uint32_t)(ECX));
  /* 10ede149 call 0x10ee4230 */
  push32(0x10ede14eu); f_10ee4230();
  /* 10ede14e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ede151 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ede153 je 0x10ede1de */
  if (C.zf) goto L_10ede1de;
  /* 10ede159 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ede15b mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ede15e push edx */
  push32((uint32_t)(EDX));
  /* 10ede15f call 0x10ee4260 */
  push32(0x10ede164u); f_10ee4260();
  /* 10ede164 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ede167 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ede169 je 0x10ede1de */
  if (C.zf) goto L_10ede1de;
  /* 10ede16b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ede16e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10ede171 push ecx */
  push32((uint32_t)(ECX));
  /* 10ede172 call 0x10ee4290 */
  push32(0x10ede177u); f_10ee4290();
  /* 10ede177 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ede17a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ede17c je 0x10ede1de */
  if (C.zf) goto L_10ede1de;
  /* 10ede17e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ede181 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10ede183 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10ede186 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ede188 je 0x10ede1b5 */
  if (C.zf) goto L_10ede1b5;
  /* 10ede18a push 1 */
  push32((uint32_t)(0x1u));
  /* 10ede18c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ede18f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ede192 push ecx */
  push32((uint32_t)(ECX));
  /* 10ede193 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ede196 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10ede199 push eax */
  push32((uint32_t)(EAX));
  /* 10ede19a call 0x10ede2a0 */
  push32(0x10ede19fu); f_10ede2a0();
  /* 10ede19f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ede1a2 push eax */
  push32((uint32_t)(EAX));
  /* 10ede1a3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ede1a6 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10ede1a9 push edx */
  push32((uint32_t)(EDX));
  /* 10ede1aa mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ede1ad push eax */
  push32((uint32_t)(EAX));
  /* 10ede1ae call 0x10ed97d0 */
  push32(0x10ede1b3u); f_10ed97d0();
  /* 10ede1b3 jmp 0x10ede1dc */
  goto L_10ede1dc;
L_10ede1b5:;
  /* 10ede1b5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ede1b8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ede1bb push ecx */
  push32((uint32_t)(ECX));
  /* 10ede1bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ede1bf mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10ede1c2 push eax */
  push32((uint32_t)(EAX));
  /* 10ede1c3 call 0x10ede2a0 */
  push32(0x10ede1c8u); f_10ede2a0();
  /* 10ede1c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ede1cb push eax */
  push32((uint32_t)(EAX));
  /* 10ede1cc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ede1cf mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10ede1d2 push edx */
  push32((uint32_t)(EDX));
  /* 10ede1d3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ede1d6 push eax */
  push32((uint32_t)(EAX));
  /* 10ede1d7 call 0x10ed97c0 */
  push32(0x10ede1dcu); f_10ed97c0();
L_10ede1dc:;
  /* 10ede1dc jmp 0x10ede1e3 */
  goto L_10ede1e3;
L_10ede1de:;
  /* 10ede1de call 0x10ede6a0 */
  push32(0x10ede1e3u); f_10ede6a0();
L_10ede1e3:;
  /* 10ede1e3 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10ede1ea jmp 0x10ede1fa */
  goto L_10ede1fa;
  /* 10ede1ec mov eax, 1 */
  EAX = (0x1u);
  /* 10ede1f1 ret  */
  ESPCHK(0x10eddf90u, _esp0);
  ESP += 4; return;
  /* 10ede1f2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10ede1f5 call 0x10ede5f0 */
  push32(0x10ede1fau); f_10ede5f0();
L_10ede1fa:;
  /* 10ede1fa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ede1fd mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10ede204 pop edi */
  EDI = (pop32());
  /* 10ede205 pop esi */
  ESI = (pop32());
  /* 10ede206 pop ebx */
  EBX = (pop32());
  /* 10ede207 mov esp, ebp */
  ESP = (EBP);
  /* 10ede209 pop ebp */
  EBP = (pop32());
  /* 10ede20a ret  */
  ESPCHK(0x10eddf90u, _esp0);
  ESP += 4; return;
}

/* ___DestructExceptionObject @ 0x10ede210 (111 bytes, 46 insns) */
void f_10ede210(void) {
  FTRACE(0x10ede210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ede210 push ebp */
  push32((uint32_t)(EBP));
  /* 10ede211 mov ebp, esp */
  EBP = (ESP);
  /* 10ede213 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10ede215 push 0x10f09cb0 */
  push32((uint32_t)(0x10f09cb0u));
  /* 10ede21a push 0x10ee434c */
  push32((uint32_t)(0x10ee434cu));
  /* 10ede21f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10ede225 push eax */
  push32((uint32_t)(EAX));
  /* 10ede226 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10ede22d sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ede230 push ebx */
  push32((uint32_t)(EBX));
  /* 10ede231 push esi */
  push32((uint32_t)(ESI));
  /* 10ede232 push edi */
  push32((uint32_t)(EDI));
  /* 10ede233 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10ede236 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ede23a je 0x10ede285 */
  if (C.zf) goto L_10ede285;
  /* 10ede23c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ede23f mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10ede242 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ede246 je 0x10ede285 */
  if (C.zf) goto L_10ede285;
  /* 10ede248 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10ede24f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ede252 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10ede255 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ede258 push ecx */
  push32((uint32_t)(ECX));
  /* 10ede259 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ede25c mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10ede25f push eax */
  push32((uint32_t)(EAX));
  /* 10ede260 call 0x10ed97b0 */
  push32(0x10ede265u); f_10ed97b0();
  /* 10ede265 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10ede26c jmp 0x10ede285 */
  goto L_10ede285;
  /* 10ede26e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ede271 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ede276 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ede278 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ede27a neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ede27c ret  */
  ESPCHK(0x10ede210u, _esp0);
  ESP += 4; return;
  /* 10ede27d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10ede280 call 0x10ede5f0 */
  push32(0x10ede285u); f_10ede5f0();
L_10ede285:;
  /* 10ede285 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ede288 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10ede28f pop edi */
  EDI = (pop32());
  /* 10ede290 pop esi */
  ESI = (pop32());
  /* 10ede291 pop ebx */
  EBX = (pop32());
  /* 10ede292 mov esp, ebp */
  ESP = (EBP);
  /* 10ede294 pop ebp */
  EBP = (pop32());
  /* 10ede295 ret  */
  ESPCHK(0x10ede210u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:___AdjustPointer @ 0x10ede2a0 (70 bytes, 27 insns) */
void f_10ede2a0(void) {
  FTRACE(0x10ede2a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ede2a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ede2a1 mov ebp, esp */
  EBP = (ESP);
  /* 10ede2a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ede2a4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ede2a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ede2aa add ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ede2ac mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ede2af mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ede2b2 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ede2b6 jl 0x10ede2df */
  if ((C.sf!=C.of)) goto L_10ede2df;
  /* 10ede2b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ede2bb mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ede2be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ede2c1 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 10ede2c4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ede2c7 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10ede2ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ede2cd add ecx, dword ptr [eax + edx] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*1))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ede2d0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ede2d3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ede2d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ede2d9 add eax, dword ptr [edx + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ede2dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10ede2df:;
  /* 10ede2df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ede2e2 mov esp, ebp */
  ESP = (EBP);
  /* 10ede2e4 pop ebp */
  EBP = (pop32());
  /* 10ede2e5 ret  */
  ESPCHK(0x10ede2a0u, _esp0);
  ESP += 4; return;
}

