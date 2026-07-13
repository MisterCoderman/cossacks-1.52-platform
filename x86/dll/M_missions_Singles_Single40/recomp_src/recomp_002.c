#include "recomp.h"

/* FUN_10009dd0 @ 0x11699dd0 (20 bytes, 6 insns) */
void f_11699dd0(void) {
  FTRACE(0x11699dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11699dd0 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11699dd3 fst qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  /* 11699dd6 call 0x1169b6d8 */
  push32(0x11699ddbu); f_1169b6d8();
  /* 11699ddb call 0x11699ded */
  push32(0x11699de0u); f_11699ded();
  /* 11699de0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11699de3 ret  */
  ESPCHK(0x11699dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009de4 @ 0x11699de4 (9 bytes, 2 insns) */
void f_11699de4(void) {
  FTRACE(0x11699de4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11699de4 lea edx, [esp + 4] */
  EDX = ((uint32_t)(ESP + 0x4));
  /* 11699de8 call 0x1169b695 */
  push32(0x11699dedu); f_1169b695();
}

/* FUN_10009ded @ 0x11699ded (145 bytes, 43 insns) */
void f_11699ded(void) {
  FTRACE(0x11699dedu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11699ded push edx */
  push32((uint32_t)(EDX));
  /* 11699dee wait  */
  /* wait (no observable integer/reg state) */
  /* 11699def fnstcw word ptr [esp] */
  w16((uint32_t)(ESP), C.fcw);
  /* 11699df2 je 0x11699e44 */
  if (C.zf) goto L_11699e44;
  /* 11699df4 cmp word ptr [esp], 0x27f */
  { uint32_t _a=(r16((uint32_t)(ESP))),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11699dfa je 0x11699e02 */
  if (C.zf) goto L_11699e02;
  /* 11699dfc fldcw word ptr [0x116cabd8] */
  C.fcw = r16((uint32_t)(0x116cabd8));
L_11699e02:;
  /* 11699e02 fsin  */
  FPU_ST(0) = __builtin_sin(FPU_ST(0)); C.fsw_c2=0;
  /* 11699e04 wait  */
  /* wait (no observable integer/reg state) */
  /* 11699e05 fnstsw ax */
  AX = fpu_status();
  /* 11699e07 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 11699e08 jp 0x11699e27 */
  if (C.pf) goto L_11699e27;
L_11699e0a:;
  /* 11699e0a cmp dword ptr [0x116d0520], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d0520))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11699e11 jne 0x1169b6ee */
  if (!C.zf) { jmp_ind(0x1169b6eeu); return; }
  /* 11699e17 mov edx, 0x1e */
  EDX = (0x1eu);
  /* 11699e1c lea ecx, [0x116cdff0] */
  ECX = ((uint32_t)(0x116cdff0));
  /* 11699e22 jmp 0x1169b6fb */
  f_1169b6fb(); return;
L_11699e27:;
  /* 11699e27 fld xword ptr [0x116cabda] */
  fpu_push(rf80((uint32_t)(0x116cabda)));
  /* 11699e2d fxch st(1) */
  { double _t=FPU_ST(0); FPU_ST(0)=FPU_ST(1); FPU_ST(1)=_t; }
L_11699e2f:;
  /* 11699e2f fprem1  */
  FPU_ST(0) = __builtin_remainder(FPU_ST(0), FPU_ST(1)); C.fsw_c2=0;
  /* 11699e31 wait  */
  /* wait (no observable integer/reg state) */
  /* 11699e32 fnstsw ax */
  AX = fpu_status();
  /* 11699e34 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 11699e35 jp 0x11699e2f */
  if (C.pf) goto L_11699e2f;
  /* 11699e37 fstp st(1) */
  FPU_ST(1) = FPU_ST(0);
  (void)fpu_pop();
  /* 11699e39 fsin  */
  FPU_ST(0) = __builtin_sin(FPU_ST(0)); C.fsw_c2=0;
  /* 11699e3b jmp 0x11699e0a */
  goto L_11699e0a;
L_11699e3d:;
  /* 11699e3d call 0x1169b67c */
  push32(0x11699e42u); f_1169b67c();
  /* 11699e42 jmp 0x11699e5f */
  goto L_11699e5f;
L_11699e44:;
  /* 11699e44 test eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); fl_logic(_r,32); }
  /* 11699e49 jne 0x11699e3d */
  if (!C.zf) goto L_11699e3d;
  /* 11699e4b cmp dword ptr [esp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11699e50 jne 0x11699e3d */
  if (!C.zf) goto L_11699e3d;
  /* 11699e52 fstp st(0) */
  FPU_ST(0) = FPU_ST(0);
  (void)fpu_pop();
  /* 11699e54 fld xword ptr [0x116ce070] */
  fpu_push(rf80((uint32_t)(0x116ce070)));
  /* 11699e5a mov eax, 1 */
  EAX = (0x1u);
L_11699e5f:;
  /* 11699e5f cmp dword ptr [0x116d0520], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d0520))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11699e66 jne 0x1169b6ee */
  if (!C.zf) { jmp_ind(0x1169b6eeu); return; }
  /* 11699e6c mov edx, 0x1e */
  EDX = (0x1eu);
  /* 11699e71 lea ecx, [0x116cdff0] */
  ECX = ((uint32_t)(0x116cdff0));
  /* 11699e77 call 0x1169b7f7 */
  push32(0x11699e7cu); f_1169b7f7();
  /* 11699e7c pop edx */
  EDX = (pop32());
  /* 11699e7d ret  */
  ESPCHK(0x11699dedu, _esp0);
  ESP += 4; return;
}

/* FUN_10009e80 @ 0x11699e80 (20 bytes, 6 insns) */
void f_11699e80(void) {
  FTRACE(0x11699e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11699e80 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11699e83 fst qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  /* 11699e86 call 0x1169b6d8 */
  push32(0x11699e8bu); f_1169b6d8();
  /* 11699e8b call 0x11699e9d */
  push32(0x11699e90u); f_11699e9d();
  /* 11699e90 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11699e93 ret  */
  ESPCHK(0x11699e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10009e94 @ 0x11699e94 (9 bytes, 2 insns) */
void f_11699e94(void) {
  FTRACE(0x11699e94u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11699e94 lea edx, [esp + 4] */
  EDX = ((uint32_t)(ESP + 0x4));
  /* 11699e98 call 0x1169b695 */
  push32(0x11699e9du); f_1169b695();
}

/* FUN_10009e9d @ 0x11699e9d (145 bytes, 43 insns) */
void f_11699e9d(void) {
  FTRACE(0x11699e9du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11699e9d push edx */
  push32((uint32_t)(EDX));
  /* 11699e9e wait  */
  /* wait (no observable integer/reg state) */
  /* 11699e9f fnstcw word ptr [esp] */
  w16((uint32_t)(ESP), C.fcw);
  /* 11699ea2 je 0x11699ef4 */
  if (C.zf) goto L_11699ef4;
  /* 11699ea4 cmp word ptr [esp], 0x27f */
  { uint32_t _a=(r16((uint32_t)(ESP))),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11699eaa je 0x11699eb2 */
  if (C.zf) goto L_11699eb2;
  /* 11699eac fldcw word ptr [0x116cabd8] */
  C.fcw = r16((uint32_t)(0x116cabd8));
L_11699eb2:;
  /* 11699eb2 fcos  */
  FPU_ST(0) = __builtin_cos(FPU_ST(0)); C.fsw_c2=0;
  /* 11699eb4 wait  */
  /* wait (no observable integer/reg state) */
  /* 11699eb5 fnstsw ax */
  AX = fpu_status();
  /* 11699eb7 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 11699eb8 jp 0x11699ed7 */
  if (C.pf) goto L_11699ed7;
L_11699eba:;
  /* 11699eba cmp dword ptr [0x116d0520], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d0520))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11699ec1 jne 0x1169b6ee */
  if (!C.zf) { jmp_ind(0x1169b6eeu); return; }
  /* 11699ec7 mov edx, 0x12 */
  EDX = (0x12u);
  /* 11699ecc lea ecx, [0x116ce000] */
  ECX = ((uint32_t)(0x116ce000));
  /* 11699ed2 jmp 0x1169b6fb */
  f_1169b6fb(); return;
L_11699ed7:;
  /* 11699ed7 fld xword ptr [0x116cabda] */
  fpu_push(rf80((uint32_t)(0x116cabda)));
  /* 11699edd fxch st(1) */
  { double _t=FPU_ST(0); FPU_ST(0)=FPU_ST(1); FPU_ST(1)=_t; }
L_11699edf:;
  /* 11699edf fprem1  */
  FPU_ST(0) = __builtin_remainder(FPU_ST(0), FPU_ST(1)); C.fsw_c2=0;
  /* 11699ee1 wait  */
  /* wait (no observable integer/reg state) */
  /* 11699ee2 fnstsw ax */
  AX = fpu_status();
  /* 11699ee4 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 11699ee5 jp 0x11699edf */
  if (C.pf) goto L_11699edf;
  /* 11699ee7 fstp st(1) */
  FPU_ST(1) = FPU_ST(0);
  (void)fpu_pop();
  /* 11699ee9 fcos  */
  FPU_ST(0) = __builtin_cos(FPU_ST(0)); C.fsw_c2=0;
  /* 11699eeb jmp 0x11699eba */
  goto L_11699eba;
L_11699eed:;
  /* 11699eed call 0x1169b67c */
  push32(0x11699ef2u); f_1169b67c();
  /* 11699ef2 jmp 0x11699f0f */
  goto L_11699f0f;
L_11699ef4:;
  /* 11699ef4 test eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); fl_logic(_r,32); }
  /* 11699ef9 jne 0x11699eed */
  if (!C.zf) goto L_11699eed;
  /* 11699efb cmp dword ptr [esp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11699f00 jne 0x11699eed */
  if (!C.zf) goto L_11699eed;
  /* 11699f02 fstp st(0) */
  FPU_ST(0) = FPU_ST(0);
  (void)fpu_pop();
  /* 11699f04 fld xword ptr [0x116ce070] */
  fpu_push(rf80((uint32_t)(0x116ce070)));
  /* 11699f0a mov eax, 1 */
  EAX = (0x1u);
L_11699f0f:;
  /* 11699f0f cmp dword ptr [0x116d0520], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d0520))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11699f16 jne 0x1169b6ee */
  if (!C.zf) { jmp_ind(0x1169b6eeu); return; }
  /* 11699f1c mov edx, 0x12 */
  EDX = (0x12u);
  /* 11699f21 lea ecx, [0x116ce000] */
  ECX = ((uint32_t)(0x116ce000));
  /* 11699f27 call 0x1169b7f7 */
  push32(0x11699f2cu); f_1169b7f7();
  /* 11699f2c pop edx */
  EDX = (pop32());
  /* 11699f2d ret  */
  ESPCHK(0x11699e9du, _esp0);
  ESP += 4; return;
}

/* FUN_10009f30 @ 0x11699f30 (20 bytes, 6 insns) */
void f_11699f30(void) {
  FTRACE(0x11699f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11699f30 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11699f33 fst qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  /* 11699f36 call 0x1169b6d8 */
  push32(0x11699f3bu); f_1169b6d8();
  /* 11699f3b call 0x11699f4d */
  push32(0x11699f40u); f_11699f4d();
  /* 11699f40 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11699f43 ret  */
  ESPCHK(0x11699f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f44 @ 0x11699f44 (9 bytes, 2 insns) */
void f_11699f44(void) {
  FTRACE(0x11699f44u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11699f44 lea edx, [esp + 4] */
  EDX = ((uint32_t)(ESP + 0x4));
  /* 11699f48 call 0x1169b695 */
  push32(0x11699f4du); f_1169b695();
}

/* FUN_10009f4d @ 0x11699f4d (138 bytes, 40 insns) */
void f_11699f4d(void) {
  FTRACE(0x11699f4du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11699f4d push edx */
  push32((uint32_t)(EDX));
  /* 11699f4e wait  */
  /* wait (no observable integer/reg state) */
  /* 11699f4f fnstcw word ptr [esp] */
  w16((uint32_t)(ESP), C.fcw);
  /* 11699f52 je 0x11699f8a */
  if (C.zf) goto L_11699f8a;
  /* 11699f54 cmp word ptr [esp], 0x27f */
  { uint32_t _a=(r16((uint32_t)(ESP))),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11699f5a je 0x11699f62 */
  if (C.zf) goto L_11699f62;
  /* 11699f5c fldcw word ptr [0x116cabd8] */
  C.fcw = r16((uint32_t)(0x116cabd8));
L_11699f62:;
  /* 11699f62 fld1  */
  fpu_push(1.0);
  /* 11699f64 fpatan  */
  { double _r=__builtin_atan2(FPU_ST(1), FPU_ST(0)); (void)fpu_pop(); FPU_ST(0)=_r; }
L_11699f66:;
  /* 11699f66 cmp dword ptr [0x116d0520], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d0520))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11699f6d jne 0x1169b6ee */
  if (!C.zf) { jmp_ind(0x1169b6eeu); return; }
  /* 11699f73 mov edx, 0xf */
  EDX = (0xfu);
  /* 11699f78 lea ecx, [0x116ce010] */
  ECX = ((uint32_t)(0x116ce010));
  /* 11699f7e jmp 0x1169b6fb */
  f_1169b6fb(); return;
L_11699f83:;
  /* 11699f83 call 0x1169b67c */
  push32(0x11699f88u); f_1169b67c();
  /* 11699f88 jmp 0x11699fb0 */
  goto L_11699fb0;
L_11699f8a:;
  /* 11699f8a test eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); fl_logic(_r,32); }
  /* 11699f8f jne 0x11699f83 */
  if (!C.zf) goto L_11699f83;
  /* 11699f91 cmp dword ptr [esp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11699f96 jne 0x11699f83 */
  if (!C.zf) goto L_11699f83;
  /* 11699f98 fstp st(0) */
  FPU_ST(0) = FPU_ST(0);
  (void)fpu_pop();
  /* 11699f9a fld xword ptr [0x116ce07a] */
  fpu_push(rf80((uint32_t)(0x116ce07a)));
  /* 11699fa0 test eax, 0x80000000 */
  { uint32_t _r=(EAX)&(0x80000000u); fl_logic(_r,32); }
  /* 11699fa5 je 0x11699f66 */
  if (C.zf) goto L_11699f66;
  /* 11699fa7 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 11699fa9 jmp 0x11699f66 */
  goto L_11699f66;
  /* 11699fab mov eax, 1 */
  EAX = (0x1u);
L_11699fb0:;
  /* 11699fb0 cmp dword ptr [0x116d0520], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d0520))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11699fb7 jne 0x1169b6ee */
  if (!C.zf) { jmp_ind(0x1169b6eeu); return; }
  /* 11699fbd mov edx, 0xf */
  EDX = (0xfu);
  /* 11699fc2 lea ecx, [0x116ce010] */
  ECX = ((uint32_t)(0x116ce010));
  /* 11699fc8 call 0x1169b7f7 */
  push32(0x11699fcdu); f_1169b7f7();
  /* 11699fcd pop edx */
  EDX = (pop32());
  /* 11699fce ret  */
  ESPCHK(0x11699f4du, _esp0);
  ESP += 4; return;
  /* 11699fcf int3  */
  x86_unimpl("int3 @ 0x11699fcf");
  /* 11699fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11699fd1 mov ebp, esp */
  EBP = (ESP);
  /* 11699fd3 push ebx */
  push32((uint32_t)(EBX));
  /* 11699fd4 push esi */
  push32((uint32_t)(ESI));
  /* 11699fd5 push edi */
  push32((uint32_t)(EDI));
}

/* FUN_10009fd0 @ 0x11699fd0 (33 bytes, 15 insns) */
void f_11699fd0(void) {
  FTRACE(0x11699fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11699fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11699fd1 mov ebp, esp */
  EBP = (ESP);
  /* 11699fd3 push ebx */
  push32((uint32_t)(EBX));
  /* 11699fd4 push esi */
  push32((uint32_t)(ESI));
  /* 11699fd5 push edi */
  push32((uint32_t)(EDI));
  /* 11699fd6 call 0x1169a010 */
  push32(0x11699fdbu); f_1169a010();
  /* 11699fdb call 0x1169b8c0 */
  push32(0x11699fe0u); f_1169b8c0();
  /* 11699fe0 mov dword ptr [0x116d0524], eax */
  w32((uint32_t)(0x116d0524), (EAX));
  /* 11699fe5 call 0x1169b840 */
  push32(0x11699feau); f_1169b840();
  /* 11699fea fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 11699fec pop edi */
  EDI = (pop32());
  /* 11699fed pop esi */
  ESI = (pop32());
  /* 11699fee pop ebx */
  EBX = (pop32());
  /* 11699fef pop ebp */
  EBP = (pop32());
  /* 11699ff0 ret  */
  ESPCHK(0x11699fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a000 @ 0x1169a000 (5 bytes, 4 insns) */
void f_1169a000(void) {
  FTRACE(0x1169a000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169a000 push ebp */
  push32((uint32_t)(EBP));
  /* 1169a001 mov ebp, esp */
  EBP = (ESP);
  /* 1169a003 pop ebp */
  EBP = (pop32());
  /* 1169a004 ret  */
  ESPCHK(0x1169a000u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a010 @ 0x1169a010 (65 bytes, 10 insns) */
void f_1169a010(void) {
  FTRACE(0x1169a010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169a010 push ebp */
  push32((uint32_t)(EBP));
  /* 1169a011 mov ebp, esp */
  EBP = (ESP);
  /* 1169a013 mov dword ptr [0x116ce0a0], 0x1169bfb0 */
  w32((uint32_t)(0x116ce0a0), (0x1169bfb0u));
  /* 1169a01d mov dword ptr [0x116ce0a4], 0x1169b9c0 */
  w32((uint32_t)(0x116ce0a4), (0x1169b9c0u));
  /* 1169a027 mov dword ptr [0x116ce0a8], 0x1169bad0 */
  w32((uint32_t)(0x116ce0a8), (0x1169bad0u));
  /* 1169a031 mov dword ptr [0x116ce0ac], 0x1169b910 */
  w32((uint32_t)(0x116ce0ac), (0x1169b910u));
  /* 1169a03b mov dword ptr [0x116ce0b0], 0x1169baa0 */
  w32((uint32_t)(0x116ce0b0), (0x1169baa0u));
  /* 1169a045 mov dword ptr [0x116ce0b4], 0x1169bfb0 */
  w32((uint32_t)(0x116ce0b4), (0x1169bfb0u));
  /* 1169a04f pop ebp */
  EBP = (pop32());
  /* 1169a050 ret  */
  ESPCHK(0x1169a010u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a060 @ 0x1169a060 (28 bytes, 11 insns) */
void f_1169a060(void) {
  FTRACE(0x1169a060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169a060 push ebp */
  push32((uint32_t)(EBP));
  /* 1169a061 mov ebp, esp */
  EBP = (ESP);
  /* 1169a063 push ecx */
  push32((uint32_t)(ECX));
  /* 1169a064 mov eax, dword ptr [0x116d0520] */
  EAX = (r32((uint32_t)(0x116d0520)));
  /* 1169a069 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1169a06c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169a06f mov dword ptr [0x116d0520], ecx */
  w32((uint32_t)(0x116d0520), (ECX));
  /* 1169a075 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169a078 mov esp, ebp */
  ESP = (EBP);
  /* 1169a07a pop ebp */
  EBP = (pop32());
  /* 1169a07b ret  */
  ESPCHK(0x1169a060u, _esp0);
  ESP += 4; return;
}

/* __ftol @ 0x1169a07c (39 bytes, 16 insns) */
void f_1169a07c(void) {
  FTRACE(0x1169a07cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169a07c push ebp */
  push32((uint32_t)(EBP));
  /* 1169a07d mov ebp, esp */
  EBP = (ESP);
  /* 1169a07f add esp, -0xc */
  { uint32_t _a=(ESP),_b=(0xfffffff4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169a082 wait  */
  /* wait (no observable integer/reg state) */
  /* 1169a083 fnstcw word ptr [ebp - 2] */
  w16((uint32_t)(EBP + -0x2), C.fcw);
  /* 1169a086 wait  */
  /* wait (no observable integer/reg state) */
  /* 1169a087 mov ax, word ptr [ebp - 2] */
  AX = (r16((uint32_t)(EBP + -0x2)));
  /* 1169a08b or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 1169a08e mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 1169a092 fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 1169a095 fistp qword ptr [ebp - 0xc] */
  { int64_t _q=fpu_to_i64(FPU_ST(0)); w32((uint32_t)(EBP + -0xc),(uint32_t)_q); w32((uint32_t)(EBP + -0xc)+4,(uint32_t)((uint64_t)_q>>32)); }
  (void)fpu_pop();
  /* 1169a098 fldcw word ptr [ebp - 2] */
  C.fcw = r16((uint32_t)(EBP + -0x2));
  /* 1169a09b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1169a09e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169a0a1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1169a0a2 ret  */
  ESPCHK(0x1169a07cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a0b0 @ 0x1169a0b0 (161 bytes, 60 insns) */
void f_1169a0b0(void) {
  FTRACE(0x1169a0b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169a0b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1169a0b1 mov ebp, esp */
  EBP = (ESP);
  /* 1169a0b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1169a0b4 push ebx */
  push32((uint32_t)(EBX));
  /* 1169a0b5 push esi */
  push32((uint32_t)(ESI));
  /* 1169a0b6 push edi */
  push32((uint32_t)(EDI));
  /* 1169a0b7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169a0bb jne 0x1169a0c2 */
  if (!C.zf) goto L_1169a0c2;
  /* 1169a0bd jmp 0x1169a14a */
  goto L_1169a14a;
L_1169a0c2:;
  /* 1169a0c2 push 9 */
  push32((uint32_t)(0x9u));
  /* 1169a0c4 call 0x1169c120 */
  push32(0x1169a0c9u); f_1169c120();
  /* 1169a0c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169a0cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169a0cf sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169a0d2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1169a0d5:;
  /* 1169a0d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169a0d8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1169a0db and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1169a0e1 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169a0e4 je 0x1169a127 */
  if (C.zf) goto L_1169a127;
  /* 1169a0e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169a0e9 cmp dword ptr [eax + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169a0ed je 0x1169a127 */
  if (C.zf) goto L_1169a127;
  /* 1169a0ef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169a0f2 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1169a0f5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1169a0fb cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169a0fe je 0x1169a127 */
  if (C.zf) goto L_1169a127;
  /* 1169a100 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169a103 cmp dword ptr [eax + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169a107 je 0x1169a127 */
  if (C.zf) goto L_1169a127;
  /* 1169a109 push 0x116ca968 */
  push32((uint32_t)(0x116ca968u));
  /* 1169a10e push 0 */
  push32((uint32_t)(0x0u));
  /* 1169a110 push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 1169a112 push 0x116ca95c */
  push32((uint32_t)(0x116ca95cu));
  /* 1169a117 push 2 */
  push32((uint32_t)(0x2u));
  /* 1169a119 call 0x1169ade0 */
  push32(0x1169a11eu); f_1169ade0();
  /* 1169a11e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169a121 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169a124 jne 0x1169a127 */
  if (!C.zf) goto L_1169a127;
  /* 1169a126 int3  */
  x86_unimpl("int3 @ 0x1169a126");
L_1169a127:;
  /* 1169a127 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1169a129 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1169a12b jne 0x1169a0d5 */
  if (!C.zf) goto L_1169a0d5;
  /* 1169a12d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169a130 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1169a133 push eax */
  push32((uint32_t)(EAX));
  /* 1169a134 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169a137 push ecx */
  push32((uint32_t)(ECX));
  /* 1169a138 call 0x1169ccb0 */
  push32(0x1169a13du); f_1169ccb0();
  /* 1169a13d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169a140 push 9 */
  push32((uint32_t)(0x9u));
  /* 1169a142 call 0x1169c1c0 */
  push32(0x1169a147u); f_1169c1c0();
  /* 1169a147 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1169a14a:;
  /* 1169a14a pop edi */
  EDI = (pop32());
  /* 1169a14b pop esi */
  ESI = (pop32());
  /* 1169a14c pop ebx */
  EBX = (pop32());
  /* 1169a14d mov esp, ebp */
  ESP = (EBP);
  /* 1169a14f pop ebp */
  EBP = (pop32());
  /* 1169a150 ret  */
  ESPCHK(0x1169a0b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a160 @ 0x1169a160 (19 bytes, 9 insns) */
void f_1169a160(void) {
  FTRACE(0x1169a160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169a160 push ebp */
  push32((uint32_t)(EBP));
  /* 1169a161 mov ebp, esp */
  EBP = (ESP);
  /* 1169a163 push 1 */
  push32((uint32_t)(0x1u));
  /* 1169a165 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169a168 push eax */
  push32((uint32_t)(EAX));
  /* 1169a169 call 0x1169c250 */
  push32(0x1169a16eu); f_1169c250();
  /* 1169a16e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169a171 pop ebp */
  EBP = (pop32());
  /* 1169a172 ret  */
  ESPCHK(0x1169a160u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a180 @ 0x1169a180 (45 bytes, 17 insns) */
void f_1169a180(void) {
  FTRACE(0x1169a180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169a180 push ebp */
  push32((uint32_t)(EBP));
  /* 1169a181 mov ebp, esp */
  EBP = (ESP);
  /* 1169a183 push ecx */
  push32((uint32_t)(ECX));
  /* 1169a184 push ebx */
  push32((uint32_t)(EBX));
  /* 1169a185 push esi */
  push32((uint32_t)(ESI));
  /* 1169a186 push edi */
  push32((uint32_t)(EDI));
  /* 1169a187 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169a18a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169a18d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1169a190 mov ebx, dword ptr fs:[0] */
  EBX = (r32((uint32_t)(0x0)));
  /* 1169a197 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 1169a199 mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 1169a19f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169a1a2 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169a1a5 mov esp, dword ptr [ebx - 4] */
  ESP = (r32((uint32_t)(EBX + -0x4)));
  /* 1169a1a8 mov ebp, dword ptr [ebp - 4] */
  EBP = (r32((uint32_t)(EBP + -0x4)));
  /* 1169a1ab jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* _CallMemberFunction0 @ 0x1169a1c0 (7 bytes, 4 insns) */
void f_1169a1c0(void) {
  FTRACE(0x1169a1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169a1c0 pop eax */
  EAX = (pop32());
  /* 1169a1c1 pop ecx */
  ECX = (pop32());
  /* 1169a1c2 xchg dword ptr [esp], eax */
  { uint32_t _t=(r32((uint32_t)(ESP))); w32((uint32_t)(ESP), (EAX)); EAX = (_t); }
  /* 1169a1c5 jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* FUN_1000a1d0 @ 0x1169a1d0 (7 bytes, 4 insns) */
void f_1169a1d0(void) {
  FTRACE(0x1169a1d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169a1d0 pop eax */
  EAX = (pop32());
  /* 1169a1d1 pop ecx */
  ECX = (pop32());
  /* 1169a1d2 xchg dword ptr [esp], eax */
  { uint32_t _t=(r32((uint32_t)(ESP))); w32((uint32_t)(ESP), (EAX)); EAX = (_t); }
  /* 1169a1d5 jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* FUN_1000a1e0 @ 0x1169a1e0 (7 bytes, 4 insns) */
void f_1169a1e0(void) {
  FTRACE(0x1169a1e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169a1e0 pop eax */
  EAX = (pop32());
  /* 1169a1e1 pop ecx */
  ECX = (pop32());
  /* 1169a1e2 xchg dword ptr [esp], eax */
  { uint32_t _t=(r32((uint32_t)(ESP))); w32((uint32_t)(ESP), (EAX)); EAX = (_t); }
  /* 1169a1e5 jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* FUN_1000a1f0 @ 0x1169a1f0 (86 bytes, 32 insns) */
void f_1169a1f0(void) {
  FTRACE(0x1169a1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169a1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1169a1f1 mov ebp, esp */
  EBP = (ESP);
  /* 1169a1f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169a1f6 push ebx */
  push32((uint32_t)(EBX));
  /* 1169a1f7 push esi */
  push32((uint32_t)(ESI));
  /* 1169a1f8 push edi */
  push32((uint32_t)(EDI));
  /* 1169a1f9 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1169a1ff mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1169a202 mov dword ptr [ebp - 4], 0x1169a21c */
  w32((uint32_t)(EBP + -0x4), (0x1169a21cu));
  /* 1169a209 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169a20b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169a20e push eax */
  push32((uint32_t)(EAX));
  /* 1169a20f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169a212 push ecx */
  push32((uint32_t)(ECX));
  /* 1169a213 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169a216 push edx */
  push32((uint32_t)(EDX));
  /* 1169a217 call 0x116b16ec */
  push32(0x1169a21cu); f_116b16ec();
  /* 1169a21c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169a21f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1169a222 and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 1169a225 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169a228 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1169a22b mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1169a231 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169a234 mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 1169a236 mov dword ptr fs:[0], ebx */
  w32((uint32_t)(0x0), (EBX));
  /* 1169a23d pop edi */
  EDI = (pop32());
  /* 1169a23e pop esi */
  ESI = (pop32());
  /* 1169a23f pop ebx */
  EBX = (pop32());
  /* 1169a240 mov esp, ebp */
  ESP = (EBP);
  /* 1169a242 pop ebp */
  EBP = (pop32());
  /* 1169a243 ret 8 */
  ESPCHK(0x1169a1f0u, _esp0);
  ESP += 12; return;
}

/* FID_conflict:___CxxFrameHandler3 @ 0x1169a250 (60 bytes, 31 insns) */
void f_1169a250(void) {
  FTRACE(0x1169a250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169a250 push ebp */
  push32((uint32_t)(EBP));
  /* 1169a251 mov ebp, esp */
  EBP = (ESP);
  /* 1169a253 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169a256 push ebx */
  push32((uint32_t)(EBX));
  /* 1169a257 push esi */
  push32((uint32_t)(ESI));
  /* 1169a258 push edi */
  push32((uint32_t)(EDI));
  /* 1169a259 cld  */
  C.df=0;
  /* 1169a25a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1169a25d push 0 */
  push32((uint32_t)(0x0u));
  /* 1169a25f push 0 */
  push32((uint32_t)(0x0u));
  /* 1169a261 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169a263 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169a266 push eax */
  push32((uint32_t)(EAX));
  /* 1169a267 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169a26a push ecx */
  push32((uint32_t)(ECX));
  /* 1169a26b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169a26e push edx */
  push32((uint32_t)(EDX));
  /* 1169a26f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169a272 push eax */
  push32((uint32_t)(EAX));
  /* 1169a273 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169a276 push ecx */
  push32((uint32_t)(ECX));
  /* 1169a277 call 0x1169e190 */
  push32(0x1169a27cu); f_1169e190();
  /* 1169a27c add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169a27f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1169a282 pop edi */
  EDI = (pop32());
  /* 1169a283 pop esi */
  ESI = (pop32());
  /* 1169a284 pop ebx */
  EBX = (pop32());
  /* 1169a285 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169a288 mov esp, ebp */
  ESP = (EBP);
  /* 1169a28a pop ebp */
  EBP = (pop32());
  /* 1169a28b ret  */
  ESPCHK(0x1169a250u, _esp0);
  ESP += 4; return;
}

/* ___CxxLongjmpUnwind@4 @ 0x1169a290 (38 bytes, 16 insns) */
void f_1169a290(void) {
  FTRACE(0x1169a290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169a290 push ebp */
  push32((uint32_t)(EBP));
  /* 1169a291 mov ebp, esp */
  EBP = (ESP);
  /* 1169a293 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169a296 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1169a299 push ecx */
  push32((uint32_t)(ECX));
  /* 1169a29a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169a29d mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 1169a2a0 push eax */
  push32((uint32_t)(EAX));
  /* 1169a2a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169a2a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169a2a6 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1169a2a9 push edx */
  push32((uint32_t)(EDX));
  /* 1169a2aa call 0x1169e700 */
  push32(0x1169a2afu); f_1169e700();
  /* 1169a2af add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169a2b2 pop ebp */
  EBP = (pop32());
  /* 1169a2b3 ret 4 */
  ESPCHK(0x1169a290u, _esp0);
  ESP += 8; return;
}

/* FUN_1000a2c0 @ 0x1169a2c0 (104 bytes, 36 insns) */
void f_1169a2c0(void) {
  FTRACE(0x1169a2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169a2c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1169a2c1 mov ebp, esp */
  EBP = (ESP);
  /* 1169a2c3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169a2c6 push ebx */
  push32((uint32_t)(EBX));
  /* 1169a2c7 push esi */
  push32((uint32_t)(ESI));
  /* 1169a2c8 push edi */
  push32((uint32_t)(EDI));
  /* 1169a2c9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1169a2d0 mov dword ptr [ebp - 0x10], 0x1169a330 */
  w32((uint32_t)(EBP + -0x10), (0x1169a330u));
  /* 1169a2d7 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169a2da mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1169a2dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169a2e0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1169a2e3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169a2e6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169a2e9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1169a2ec mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1169a2f2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1169a2f5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1169a2fb mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 1169a301 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169a304 push eax */
  push32((uint32_t)(EAX));
  /* 1169a305 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169a308 push ecx */
  push32((uint32_t)(ECX));
  /* 1169a309 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169a30c push edx */
  push32((uint32_t)(EDX));
  /* 1169a30d call 0x1169edf0 */
  push32(0x1169a312u); f_1169edf0();
  /* 1169a312 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1169a315 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1169a318 mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 1169a31e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1169a321 pop edi */
  EDI = (pop32());
  /* 1169a322 pop esi */
  ESI = (pop32());
  /* 1169a323 pop ebx */
  EBX = (pop32());
  /* 1169a324 mov esp, ebp */
  ESP = (EBP);
  /* 1169a326 pop ebp */
  EBP = (pop32());
  /* 1169a327 ret  */
  ESPCHK(0x1169a2c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a330 @ 0x1169a330 (57 bytes, 30 insns) */
void f_1169a330(void) {
  FTRACE(0x1169a330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169a330 push ebp */
  push32((uint32_t)(EBP));
  /* 1169a331 mov ebp, esp */
  EBP = (ESP);
  /* 1169a333 push ebx */
  push32((uint32_t)(EBX));
  /* 1169a334 push esi */
  push32((uint32_t)(ESI));
  /* 1169a335 push edi */
  push32((uint32_t)(EDI));
  /* 1169a336 cld  */
  C.df=0;
  /* 1169a337 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169a339 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169a33c push eax */
  push32((uint32_t)(EAX));
  /* 1169a33d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169a340 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1169a343 push edx */
  push32((uint32_t)(EDX));
  /* 1169a344 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169a347 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1169a34a push ecx */
  push32((uint32_t)(ECX));
  /* 1169a34b push 0 */
  push32((uint32_t)(0x0u));
  /* 1169a34d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169a350 push edx */
  push32((uint32_t)(EDX));
  /* 1169a351 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169a354 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1169a357 push ecx */
  push32((uint32_t)(ECX));
  /* 1169a358 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169a35b push edx */
  push32((uint32_t)(EDX));
  /* 1169a35c call 0x1169e190 */
  push32(0x1169a361u); f_1169e190();
  /* 1169a361 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169a364 pop edi */
  EDI = (pop32());
  /* 1169a365 pop esi */
  ESI = (pop32());
  /* 1169a366 pop ebx */
  EBX = (pop32());
  /* 1169a367 pop ebp */
  EBP = (pop32());
  /* 1169a368 ret  */
  ESPCHK(0x1169a330u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a370 @ 0x1169a370 (204 bytes, 58 insns) */
void f_1169a370(void) {
  FTRACE(0x1169a370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169a370 push ebp */
  push32((uint32_t)(EBP));
  /* 1169a371 mov ebp, esp */
  EBP = (ESP);
  /* 1169a373 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169a376 push ebx */
  push32((uint32_t)(EBX));
  /* 1169a377 push esi */
  push32((uint32_t)(ESI));
  /* 1169a378 push edi */
  push32((uint32_t)(EDI));
  /* 1169a379 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 1169a380 mov dword ptr [ebp - 0x24], 0x1169a440 */
  w32((uint32_t)(EBP + -0x24), (0x1169a440u));
  /* 1169a387 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169a38a mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1169a38d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169a390 mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 1169a393 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1169a396 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1169a399 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1169a39c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1169a39f mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1169a3a6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1169a3ad mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1169a3b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1169a3bb mov dword ptr [ebp - 0x10], 0x1169a40c */
  w32((uint32_t)(EBP + -0x10), (0x1169a40cu));
  /* 1169a3c2 mov dword ptr [ebp - 0xc], esp */
  w32((uint32_t)(EBP + -0xc), (ESP));
  /* 1169a3c5 mov dword ptr [ebp - 8], ebp */
  w32((uint32_t)(EBP + -0x8), (EBP));
  /* 1169a3c8 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1169a3ce mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1169a3d1 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 1169a3d7 mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 1169a3dd mov dword ptr [ebp - 0x34], 1 */
  w32((uint32_t)(EBP + -0x34), (0x1u));
  /* 1169a3e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169a3e7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1169a3ea mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169a3ed mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 1169a3f0 lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 1169a3f3 push eax */
  push32((uint32_t)(EAX));
  /* 1169a3f4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169a3f7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1169a3f9 push edx */
  push32((uint32_t)(EDX));
  /* 1169a3fa call 0x1169ef20 */
  push32(0x1169a3ffu); f_1169ef20();
  /* 1169a3ff call dword ptr [eax + 0x68] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x68))), 0x1169a402u);
  /* 1169a402 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169a405 mov dword ptr [ebp - 0x34], 0 */
  w32((uint32_t)(EBP + -0x34), (0x0u));
  /* 1169a40c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169a410 je 0x1169a429 */
  if (C.zf) goto L_1169a429;
  /* 1169a412 mov ebx, dword ptr fs:[0] */
  EBX = (r32((uint32_t)(0x0)));
  /* 1169a419 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 1169a41b mov ebx, dword ptr [ebp - 0x28] */
  EBX = (r32((uint32_t)(EBP + -0x28)));
  /* 1169a41e mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 1169a420 mov dword ptr fs:[0], ebx */
  w32((uint32_t)(0x0), (EBX));
  /* 1169a427 jmp 0x1169a432 */
  goto L_1169a432;
L_1169a429:;
  /* 1169a429 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1169a42c mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
L_1169a432:;
  /* 1169a432 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1169a435 pop edi */
  EDI = (pop32());
  /* 1169a436 pop esi */
  ESI = (pop32());
  /* 1169a437 pop ebx */
  EBX = (pop32());
  /* 1169a438 mov esp, ebp */
  ESP = (EBP);
  /* 1169a43a pop ebp */
  EBP = (pop32());
  /* 1169a43b ret  */
  ESPCHK(0x1169a370u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a440 @ 0x1169a440 (124 bytes, 53 insns) */
void f_1169a440(void) {
  FTRACE(0x1169a440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169a440 push ebp */
  push32((uint32_t)(EBP));
  /* 1169a441 mov ebp, esp */
  EBP = (ESP);
  /* 1169a443 push ebx */
  push32((uint32_t)(EBX));
  /* 1169a444 push esi */
  push32((uint32_t)(ESI));
  /* 1169a445 push edi */
  push32((uint32_t)(EDI));
  /* 1169a446 cld  */
  C.df=0;
  /* 1169a447 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169a44a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1169a44d and ecx, 0x66 */
  { uint32_t _r=(ECX)&(0x66u); ECX = (_r); fl_logic(_r,32); }
  /* 1169a450 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1169a452 je 0x1169a465 */
  if (C.zf) goto L_1169a465;
  /* 1169a454 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169a457 mov dword ptr [edx + 0x24], 1 */
  w32((uint32_t)(EDX + 0x24), (0x1u));
  /* 1169a45e mov eax, 1 */
  EAX = (0x1u);
  /* 1169a463 jmp 0x1169a4bc */
  goto L_1169a4bc;
L_1169a465:;
  /* 1169a465 push 1 */
  push32((uint32_t)(0x1u));
  /* 1169a467 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169a46a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1169a46d push ecx */
  push32((uint32_t)(ECX));
  /* 1169a46e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169a471 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1169a474 push eax */
  push32((uint32_t)(EAX));
  /* 1169a475 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169a478 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1169a47b push edx */
  push32((uint32_t)(EDX));
  /* 1169a47c push 0 */
  push32((uint32_t)(0x0u));
  /* 1169a47e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169a481 push eax */
  push32((uint32_t)(EAX));
  /* 1169a482 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169a485 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1169a488 push edx */
  push32((uint32_t)(EDX));
  /* 1169a489 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169a48c push eax */
  push32((uint32_t)(EAX));
  /* 1169a48d call 0x1169e190 */
  push32(0x1169a492u); f_1169e190();
  /* 1169a492 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169a495 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169a498 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169a49c jne 0x1169a4ab */
  if (!C.zf) goto L_1169a4ab;
  /* 1169a49e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169a4a1 push edx */
  push32((uint32_t)(EDX));
  /* 1169a4a2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169a4a5 push eax */
  push32((uint32_t)(EAX));
  /* 1169a4a6 call 0x1169a1f0 */
  push32(0x1169a4abu); f_1169a1f0();
L_1169a4ab:;
  /* 1169a4ab mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169a4ae mov esp, dword ptr [ebx + 0x1c] */
  ESP = (r32((uint32_t)(EBX + 0x1c)));
  /* 1169a4b1 mov ebp, dword ptr [ebx + 0x20] */
  EBP = (r32((uint32_t)(EBX + 0x20)));
  /* 1169a4b4 jmp dword ptr [ebx + 0x18] */
  jmp_ind((uint32_t)(r32((uint32_t)(EBX + 0x18)))); return;
  /* 1169a4b7 mov eax, 1 */
  EAX = (0x1u);
L_1169a4bc:;
  /* 1169a4bc pop edi */
  EDI = (pop32());
  /* 1169a4bd pop esi */
  ESI = (pop32());
  /* 1169a4be pop ebx */
  EBX = (pop32());
  /* 1169a4bf pop ebp */
  EBP = (pop32());
  /* 1169a4c0 ret  */
  ESPCHK(0x1169a440u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a4d0 @ 0x1169a4d0 (130 bytes, 57 insns) */
void f_1169a4d0(void) {
  FTRACE(0x1169a4d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169a4d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1169a4d1 mov ebp, esp */
  EBP = (ESP);
  /* 1169a4d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1169a4d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169a4d7 push ebx */
  push32((uint32_t)(EBX));
  /* 1169a4d8 push esi */
  push32((uint32_t)(ESI));
  /* 1169a4d9 push edi */
  push32((uint32_t)(EDI));
  /* 1169a4da mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1169a4dd mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 1169a4e0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1169a4e3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169a4e6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1169a4e8 mov edi, esi */
  EDI = (ESI);
  /* 1169a4ea mov ebx, esi */
  EBX = (ESI);
  /* 1169a4ec jl 0x1169a529 */
  if ((C.sf!=C.of)) goto L_1169a529;
L_1169a4ee:;
  /* 1169a4ee cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169a4f1 jne 0x1169a4f8 */
  if (!C.zf) goto L_1169a4f8;
  /* 1169a4f3 call 0x1169f1a0 */
  push32(0x1169a4f8u); f_1169f1a0();
L_1169a4f8:;
  /* 1169a4f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169a4fb dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1169a4fc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169a4ff lea edx, [esi + esi*4] */
  EDX = ((uint32_t)(ESI + ESI*4));
  /* 1169a502 lea eax, [eax + edx*4] */
  EAX = ((uint32_t)(EAX + EDX*4));
  /* 1169a505 cmp dword ptr [eax + 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169a508 jge 0x1169a50f */
  if ((C.sf==C.of)) goto L_1169a50f;
  /* 1169a50a cmp ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169a50d jle 0x1169a514 */
  if ((C.zf||C.sf!=C.of)) goto L_1169a514;
L_1169a50f:;
  /* 1169a50f cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169a512 jne 0x1169a51f */
  if (!C.zf) goto L_1169a51f;
L_1169a514:;
  /* 1169a514 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169a517 mov edi, ebx */
  EDI = (EBX);
  /* 1169a519 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1169a51a mov ebx, esi */
  EBX = (ESI);
  /* 1169a51c mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_1169a51f:;
  /* 1169a51f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169a522 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169a524 jge 0x1169a4ee */
  if ((C.sf==C.of)) goto L_1169a4ee;
  /* 1169a526 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1169a529:;
  /* 1169a529 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169a52c mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169a52f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1169a530 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
  /* 1169a532 mov dword ptr [edx], edi */
  w32((uint32_t)(EDX), (EDI));
  /* 1169a534 cmp edi, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169a537 ja 0x1169a53d */
  if ((!C.cf&&!C.zf)) goto L_1169a53d;
  /* 1169a539 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169a53b jbe 0x1169a542 */
  if ((C.cf||C.zf)) goto L_1169a542;
L_1169a53d:;
  /* 1169a53d call 0x1169f1a0 */
  push32(0x1169a542u); f_1169f1a0();
L_1169a542:;
  /* 1169a542 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169a545 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 1169a548 pop edi */
  EDI = (pop32());
  /* 1169a549 pop esi */
  ESI = (pop32());
  /* 1169a54a lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 1169a54d pop ebx */
  EBX = (pop32());
  /* 1169a54e mov esp, ebp */
  ESP = (EBP);
  /* 1169a550 pop ebp */
  EBP = (pop32());
  /* 1169a551 ret  */
  ESPCHK(0x1169a4d0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x1169a560 (32 bytes, 18 insns) */
void f_1169a560(void) {
  FTRACE(0x1169a560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169a560 push ebp */
  push32((uint32_t)(EBP));
  /* 1169a561 mov ebp, esp */
  EBP = (ESP);
  /* 1169a563 push ebx */
  push32((uint32_t)(EBX));
  /* 1169a564 push esi */
  push32((uint32_t)(ESI));
  /* 1169a565 push edi */
  push32((uint32_t)(EDI));
  /* 1169a566 push ebp */
  push32((uint32_t)(EBP));
  /* 1169a567 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169a569 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169a56b push 0x1169a578 */
  push32((uint32_t)(0x1169a578u));
  /* 1169a570 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1169a573 call 0x116b16ec */
  push32(0x1169a578u); f_116b16ec();
  /* 1169a578 pop ebp */
  EBP = (pop32());
  /* 1169a579 pop edi */
  EDI = (pop32());
  /* 1169a57a pop esi */
  ESI = (pop32());
  /* 1169a57b pop ebx */
  EBX = (pop32());
  /* 1169a57c mov esp, ebp */
  ESP = (EBP);
  /* 1169a57e pop ebp */
  EBP = (pop32());
  /* 1169a57f ret  */
  ESPCHK(0x1169a560u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1169a5a2 (104 bytes, 33 insns) */
void f_1169a5a2(void) {
  FTRACE(0x1169a5a2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169a5a2 push ebx */
  push32((uint32_t)(EBX));
  /* 1169a5a3 push esi */
  push32((uint32_t)(ESI));
  /* 1169a5a4 push edi */
  push32((uint32_t)(EDI));
  /* 1169a5a5 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1169a5a9 push eax */
  push32((uint32_t)(EAX));
  /* 1169a5aa push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1169a5ac push 0x1169a580 */
  push32((uint32_t)(0x1169a580u));
  /* 1169a5b1 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 1169a5b8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1169a5bf:;
  /* 1169a5bf mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1169a5c3 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1169a5c6 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 1169a5c9 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169a5cc je 0x1169a5fc */
  if (C.zf) goto L_1169a5fc;
  /* 1169a5ce cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169a5d2 je 0x1169a5fc */
  if (C.zf) goto L_1169a5fc;
  /* 1169a5d4 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1169a5d7 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1169a5da mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1169a5de mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 1169a5e1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169a5e6 jne 0x1169a5fa */
  if (!C.zf) goto L_1169a5fa;
  /* 1169a5e8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1169a5ed mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 1169a5f1 call 0x1169a636 */
  push32(0x1169a5f6u); f_1169a636();
  /* 1169a5f6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1169a5fau);
L_1169a5fa:;
  /* 1169a5fa jmp 0x1169a5bf */
  goto L_1169a5bf;
L_1169a5fc:;
  /* 1169a5fc pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1169a603 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169a606 pop edi */
  EDI = (pop32());
  /* 1169a607 pop esi */
  ESI = (pop32());
  /* 1169a608 pop ebx */
  EBX = (pop32());
  /* 1169a609 ret  */
  ESPCHK(0x1169a5a2u, _esp0);
  ESP += 4; return;
}

/* __abnormal_termination @ 0x1169a60a (35 bytes, 10 insns) */
void f_1169a60a(void) {
  FTRACE(0x1169a60au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169a60a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169a60c mov ecx, dword ptr fs:[0] */
  ECX = (r32((uint32_t)(0x0)));
  /* 1169a613 cmp dword ptr [ecx + 4], 0x1169a580 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x1169a580u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169a61a jne 0x1169a62c */
  if (!C.zf) goto L_1169a62c;
  /* 1169a61c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1169a61f mov edx, dword ptr [edx + 0xc] */
  EDX = (r32((uint32_t)(EDX + 0xc)));
  /* 1169a622 cmp dword ptr [ecx + 8], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169a625 jne 0x1169a62c */
  if (!C.zf) goto L_1169a62c;
  /* 1169a627 mov eax, 1 */
  EAX = (0x1u);
L_1169a62c:;
  /* 1169a62c ret  */
  ESPCHK(0x1169a60au, _esp0);
  ESP += 4; return;
}

/* __NLG_Notify1 @ 0x1169a62d (9 bytes, 4 insns) */
void f_1169a62d(void) {
  FTRACE(0x1169a62du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169a62d push ebx */
  push32((uint32_t)(EBX));
  /* 1169a62e push ecx */
  push32((uint32_t)(ECX));
  /* 1169a62f mov ebx, 0x116ce02c */
  EBX = (0x116ce02cu);
  /* 1169a634 jmp 0x1169a640 */
  jmp_ind(0x1169a640u); return;
}

/* FUN_1000a636 @ 0x1169a636 (24 bytes, 10 insns) */
void f_1169a636(void) {
  FTRACE(0x1169a636u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169a636 push ebx */
  push32((uint32_t)(EBX));
  /* 1169a637 push ecx */
  push32((uint32_t)(ECX));
  /* 1169a638 mov ebx, 0x116ce02c */
  EBX = (0x116ce02cu);
  /* 1169a63d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169a640 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1169a643 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1169a646 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 1169a649 pop ecx */
  ECX = (pop32());
  /* 1169a64a pop ebx */
  EBX = (pop32());
  /* 1169a64b ret 4 */
  ESPCHK(0x1169a636u, _esp0);
  ESP += 8; return;
}

/* FUN_1000a650 @ 0x1169a650 (179 bytes, 53 insns) */
void f_1169a650(void) {
  FTRACE(0x1169a650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169a650 push ebp */
  push32((uint32_t)(EBP));
  /* 1169a651 mov ebp, esp */
  EBP = (ESP);
  /* 1169a653 push ecx */
  push32((uint32_t)(ECX));
  /* 1169a654 call 0x1169f3e0 */
  push32(0x1169a659u); f_1169f3e0();
  /* 1169a659 push 2 */
  push32((uint32_t)(0x2u));
  /* 1169a65b mov eax, dword ptr [0x116d2058] */
  EAX = (r32((uint32_t)(0x116d2058)));
  /* 1169a660 push eax */
  push32((uint32_t)(EAX));
  /* 1169a661 call 0x1169d0f0 */
  push32(0x1169a666u); f_1169d0f0();
  /* 1169a666 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169a669 mov ecx, dword ptr [0x116d2054] */
  ECX = (r32((uint32_t)(0x116d2054)));
  /* 1169a66f sub ecx, dword ptr [0x116d2058] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x116d2058))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169a675 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169a678 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169a67a jae 0x1169a6dd */
  if (!C.cf) goto L_1169a6dd;
  /* 1169a67c push 0x68 */
  push32((uint32_t)(0x68u));
  /* 1169a67e push 0x116ca990 */
  push32((uint32_t)(0x116ca990u));
  /* 1169a683 push 2 */
  push32((uint32_t)(0x2u));
  /* 1169a685 push 2 */
  push32((uint32_t)(0x2u));
  /* 1169a687 mov edx, dword ptr [0x116d2058] */
  EDX = (r32((uint32_t)(0x116d2058)));
  /* 1169a68d push edx */
  push32((uint32_t)(EDX));
  /* 1169a68e call 0x1169d0f0 */
  push32(0x1169a693u); f_1169d0f0();
  /* 1169a693 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169a696 add eax, 0x10 */
  { uint32_t _a=(EAX),_b=(0x10u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169a699 push eax */
  push32((uint32_t)(EAX));
  /* 1169a69a mov eax, dword ptr [0x116d2058] */
  EAX = (r32((uint32_t)(0x116d2058)));
  /* 1169a69f push eax */
  push32((uint32_t)(EAX));
  /* 1169a6a0 call 0x1169c6b0 */
  push32(0x1169a6a5u); f_1169c6b0();
  /* 1169a6a5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169a6a8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1169a6ab cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169a6af jne 0x1169a6ba */
  if (!C.zf) goto L_1169a6ba;
  /* 1169a6b1 call 0x1169f3f0 */
  push32(0x1169a6b6u); f_1169f3f0();
  /* 1169a6b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169a6b8 jmp 0x1169a6ff */
  goto L_1169a6ff;
L_1169a6ba:;
  /* 1169a6ba mov ecx, dword ptr [0x116d2054] */
  ECX = (r32((uint32_t)(0x116d2054)));
  /* 1169a6c0 sub ecx, dword ptr [0x116d2058] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x116d2058))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169a6c6 sar ecx, 2 */
  ECX = (sh_sar((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1169a6c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169a6cc lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 1169a6cf mov dword ptr [0x116d2054], eax */
  w32((uint32_t)(0x116d2054), (EAX));
  /* 1169a6d4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169a6d7 mov dword ptr [0x116d2058], ecx */
  w32((uint32_t)(0x116d2058), (ECX));
L_1169a6dd:;
  /* 1169a6dd mov edx, dword ptr [0x116d2054] */
  EDX = (r32((uint32_t)(0x116d2054)));
  /* 1169a6e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169a6e6 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1169a6e8 mov ecx, dword ptr [0x116d2054] */
  ECX = (r32((uint32_t)(0x116d2054)));
  /* 1169a6ee add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169a6f1 mov dword ptr [0x116d2054], ecx */
  w32((uint32_t)(0x116d2054), (ECX));
  /* 1169a6f7 call 0x1169f3f0 */
  push32(0x1169a6fcu); f_1169f3f0();
  /* 1169a6fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1169a6ff:;
  /* 1169a6ff mov esp, ebp */
  ESP = (EBP);
  /* 1169a701 pop ebp */
  EBP = (pop32());
  /* 1169a702 ret  */
  ESPCHK(0x1169a650u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a710 @ 0x1169a710 (24 bytes, 12 insns) */
void f_1169a710(void) {
  FTRACE(0x1169a710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169a710 push ebp */
  push32((uint32_t)(EBP));
  /* 1169a711 mov ebp, esp */
  EBP = (ESP);
  /* 1169a713 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169a716 push eax */
  push32((uint32_t)(EAX));
  /* 1169a717 call 0x1169a650 */
  push32(0x1169a71cu); f_1169a650();
  /* 1169a71c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169a71f neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1169a721 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169a723 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1169a725 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1169a726 pop ebp */
  EBP = (pop32());
  /* 1169a727 ret  */
  ESPCHK(0x1169a710u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a730 @ 0x1169a730 (77 bytes, 20 insns) */
void f_1169a730(void) {
  FTRACE(0x1169a730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169a730 push ebp */
  push32((uint32_t)(EBP));
  /* 1169a731 mov ebp, esp */
  EBP = (ESP);
  /* 1169a733 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 1169a738 push 0x116ca990 */
  push32((uint32_t)(0x116ca990u));
  /* 1169a73d push 2 */
  push32((uint32_t)(0x2u));
  /* 1169a73f push 0x80 */
  push32((uint32_t)(0x80u));
  /* 1169a744 call 0x1169c220 */
  push32(0x1169a749u); f_1169c220();
  /* 1169a749 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169a74c mov dword ptr [0x116d2058], eax */
  w32((uint32_t)(0x116d2058), (EAX));
  /* 1169a751 cmp dword ptr [0x116d2058], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d2058))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169a758 jne 0x1169a764 */
  if (!C.zf) goto L_1169a764;
  /* 1169a75a push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1169a75c call 0x1169ac90 */
  push32(0x1169a761u); f_1169ac90();
  /* 1169a761 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1169a764:;
  /* 1169a764 mov eax, dword ptr [0x116d2058] */
  EAX = (r32((uint32_t)(0x116d2058)));
  /* 1169a769 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1169a76f mov ecx, dword ptr [0x116d2058] */
  ECX = (r32((uint32_t)(0x116d2058)));
  /* 1169a775 mov dword ptr [0x116d2054], ecx */
  w32((uint32_t)(0x116d2054), (ECX));
  /* 1169a77b pop ebp */
  EBP = (pop32());
  /* 1169a77c ret  */
  ESPCHK(0x1169a730u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a780 @ 0x1169a780 (16 bytes, 7 insns) */
void f_1169a780(void) {
  FTRACE(0x1169a780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169a780 push ebp */
  push32((uint32_t)(EBP));
  /* 1169a781 mov ebp, esp */
  EBP = (ESP);
  /* 1169a783 call 0x1169ef20 */
  push32(0x1169a788u); f_1169ef20();
  /* 1169a788 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169a78b mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 1169a78e pop ebp */
  EBP = (pop32());
  /* 1169a78f ret  */
  ESPCHK(0x1169a780u, _esp0);
  ESP += 4; return;
}

/* _rand @ 0x1169a790 (54 bytes, 18 insns) */
void f_1169a790(void) {
  FTRACE(0x1169a790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169a790 push ebp */
  push32((uint32_t)(EBP));
  /* 1169a791 mov ebp, esp */
  EBP = (ESP);
  /* 1169a793 push ecx */
  push32((uint32_t)(ECX));
  /* 1169a794 call 0x1169ef20 */
  push32(0x1169a799u); f_1169ef20();
  /* 1169a799 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1169a79c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169a79f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1169a7a2 imul ecx, ecx, 0x343fd */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x343fdu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1169a7a8 add ecx, 0x269ec3 */
  { uint32_t _a=(ECX),_b=(0x269ec3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169a7ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169a7b1 mov dword ptr [edx + 0x14], ecx */
  w32((uint32_t)(EDX + 0x14), (ECX));
  /* 1169a7b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169a7b7 mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 1169a7ba shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1169a7bd and eax, 0x7fff */
  { uint32_t _r=(EAX)&(0x7fffu); EAX = (_r); fl_logic(_r,32); }
  /* 1169a7c2 mov esp, ebp */
  ESP = (EBP);
  /* 1169a7c4 pop ebp */
  EBP = (pop32());
  /* 1169a7c5 ret  */
  ESPCHK(0x1169a790u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a7d0 @ 0x1169a7d0 (7 bytes, 3 insns) */
void f_1169a7d0(void) {
  FTRACE(0x1169a7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169a7d0 push edi */
  push32((uint32_t)(EDI));
  /* 1169a7d1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 1169a7d5 jmp 0x1169a841 */
  jmp_ind(0x1169a841u); return;
}

/* FUN_1000a7e0 @ 0x1169a7e0 (224 bytes, 84 insns) */
void f_1169a7e0(void) {
  FTRACE(0x1169a7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169a7e0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1169a7e4 push edi */
  push32((uint32_t)(EDI));
  /* 1169a7e5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1169a7eb je 0x1169a7fc */
  if (C.zf) goto L_1169a7fc;
L_1169a7ed:;
  /* 1169a7ed mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1169a7ef inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1169a7f0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1169a7f2 je 0x1169a82f */
  if (C.zf) goto L_1169a82f;
  /* 1169a7f4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1169a7fa jne 0x1169a7ed */
  if (!C.zf) goto L_1169a7ed;
L_1169a7fc:;
  /* 1169a7fc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1169a7fe mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1169a803 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169a805 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1169a808 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1169a80a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169a80d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1169a812 je 0x1169a7fc */
  if (C.zf) goto L_1169a7fc;
  /* 1169a814 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1169a817 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1169a819 je 0x1169a83e */
  if (C.zf) goto L_1169a83e;
  /* 1169a81b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1169a81d je 0x1169a839 */
  if (C.zf) goto L_1169a839;
  /* 1169a81f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 1169a824 je 0x1169a834 */
  if (C.zf) goto L_1169a834;
  /* 1169a826 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1169a82b je 0x1169a82f */
  if (C.zf) goto L_1169a82f;
  /* 1169a82d jmp 0x1169a7fc */
  goto L_1169a7fc;
L_1169a82f:;
  /* 1169a82f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 1169a832 jmp 0x1169a841 */
  goto L_1169a841;
L_1169a834:;
  /* 1169a834 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 1169a837 jmp 0x1169a841 */
  goto L_1169a841;
L_1169a839:;
  /* 1169a839 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 1169a83c jmp 0x1169a841 */
  goto L_1169a841;
L_1169a83e:;
  /* 1169a83e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_1169a841:;
  /* 1169a841 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1169a845 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1169a84b je 0x1169a866 */
  if (C.zf) goto L_1169a866;
L_1169a84d:;
  /* 1169a84d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1169a84f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1169a850 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1169a852 je 0x1169a8b8 */
  if (C.zf) goto L_1169a8b8;
  /* 1169a854 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1169a856 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1169a857 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1169a85d jne 0x1169a84d */
  if (!C.zf) goto L_1169a84d;
  /* 1169a85f jmp 0x1169a866 */
  goto L_1169a866;
L_1169a861:;
  /* 1169a861 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1169a863 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1169a866:;
  /* 1169a866 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1169a86b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1169a86d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169a86f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1169a872 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1169a874 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1169a876 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169a879 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1169a87e je 0x1169a861 */
  if (C.zf) goto L_1169a861;
  /* 1169a880 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1169a882 je 0x1169a8b8 */
  if (C.zf) goto L_1169a8b8;
  /* 1169a884 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 1169a886 je 0x1169a8af */
  if (C.zf) goto L_1169a8af;
  /* 1169a888 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1169a88e je 0x1169a8a2 */
  if (C.zf) goto L_1169a8a2;
  /* 1169a890 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 1169a896 je 0x1169a89a */
  if (C.zf) goto L_1169a89a;
  /* 1169a898 jmp 0x1169a861 */
  goto L_1169a861;
L_1169a89a:;
  /* 1169a89a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1169a89c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1169a8a0 pop edi */
  EDI = (pop32());
  /* 1169a8a1 ret  */
  ESPCHK(0x1169a7e0u, _esp0);
  ESP += 4; return;
L_1169a8a2:;
  /* 1169a8a2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 1169a8a5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1169a8a9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 1169a8ad pop edi */
  EDI = (pop32());
  /* 1169a8ae ret  */
  ESPCHK(0x1169a7e0u, _esp0);
  ESP += 4; return;
L_1169a8af:;
  /* 1169a8af mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 1169a8b2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1169a8b6 pop edi */
  EDI = (pop32());
  /* 1169a8b7 ret  */
  ESPCHK(0x1169a7e0u, _esp0);
  ESP += 4; return;
L_1169a8b8:;
  /* 1169a8b8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1169a8ba mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1169a8be pop edi */
  EDI = (pop32());
  /* 1169a8bf ret  */
  ESPCHK(0x1169a7e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a8c0 @ 0x1169a8c0 (385 bytes, 103 insns) */
void f_1169a8c0(void) {
  FTRACE(0x1169a8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169a8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1169a8c1 mov ebp, esp */
  EBP = (ESP);
  /* 1169a8c3 sub esp, 0xd8 */
  { uint32_t _a=(ESP),_b=(0xd8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169a8c9 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 1169a8cc push eax */
  push32((uint32_t)(EAX));
  /* 1169a8cd call dword ptr [0x116d3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3424))), 0x1169a8d3u);
  /* 1169a8d3 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 1169a8d6 push ecx */
  push32((uint32_t)(ECX));
  /* 1169a8d7 call dword ptr [0x116d3420] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3420))), 0x1169a8ddu);
  /* 1169a8dd mov edx, dword ptr [ebp - 6] */
  EDX = (r32((uint32_t)(EBP + -0x6)));
  /* 1169a8e0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1169a8e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169a8e8 mov ax, word ptr [0x116d053a] */
  AX = (r16((uint32_t)(0x116d053a)));
  /* 1169a8ee cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169a8f0 jne 0x1169a958 */
  if (!C.zf) goto L_1169a958;
  /* 1169a8f2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169a8f5 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1169a8fb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1169a8fd mov dx, word ptr [0x116d0538] */
  DX = (r16((uint32_t)(0x116d0538)));
  /* 1169a904 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169a906 jne 0x1169a958 */
  if (!C.zf) goto L_1169a958;
  /* 1169a908 mov eax, dword ptr [ebp - 0xa] */
  EAX = (r32((uint32_t)(EBP + -0xa)));
  /* 1169a90b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1169a910 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1169a912 mov cx, word ptr [0x116d0536] */
  CX = (r16((uint32_t)(0x116d0536)));
  /* 1169a919 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169a91b jne 0x1169a958 */
  if (!C.zf) goto L_1169a958;
  /* 1169a91d mov edx, dword ptr [ebp - 0xe] */
  EDX = (r32((uint32_t)(EBP + -0xe)));
  /* 1169a920 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1169a926 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169a928 mov ax, word ptr [0x116d0532] */
  AX = (r16((uint32_t)(0x116d0532)));
  /* 1169a92e cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169a930 jne 0x1169a958 */
  if (!C.zf) goto L_1169a958;
  /* 1169a932 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1169a935 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1169a93b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1169a93d mov dx, word ptr [0x116d0530] */
  DX = (r16((uint32_t)(0x116d0530)));
  /* 1169a944 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169a946 jne 0x1169a958 */
  if (!C.zf) goto L_1169a958;
  /* 1169a948 mov eax, dword ptr [0x116d0528] */
  EAX = (r32((uint32_t)(0x116d0528)));
  /* 1169a94d mov dword ptr [ebp - 0xd8], eax */
  w32((uint32_t)(EBP + -0xd8), (EAX));
  /* 1169a953 jmp 0x1169a9e0 */
  goto L_1169a9e0;
L_1169a958:;
  /* 1169a958 lea ecx, [ebp - 0xd0] */
  ECX = ((uint32_t)(EBP + -0xd0));
  /* 1169a95e push ecx */
  push32((uint32_t)(ECX));
  /* 1169a95f call dword ptr [0x116d341c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d341c))), 0x1169a965u);
  /* 1169a965 mov dword ptr [ebp - 0xd4], eax */
  w32((uint32_t)(EBP + -0xd4), (EAX));
  /* 1169a96b cmp dword ptr [ebp - 0xd4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xd4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169a972 je 0x1169a9a8 */
  if (C.zf) goto L_1169a9a8;
  /* 1169a974 cmp dword ptr [ebp - 0xd4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xd4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169a97b jne 0x1169a99c */
  if (!C.zf) goto L_1169a99c;
  /* 1169a97d mov edx, dword ptr [ebp - 0x36] */
  EDX = (r32((uint32_t)(EBP + -0x36)));
  /* 1169a980 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1169a986 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1169a988 je 0x1169a99c */
  if (C.zf) goto L_1169a99c;
  /* 1169a98a cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169a98e je 0x1169a99c */
  if (C.zf) goto L_1169a99c;
  /* 1169a990 mov dword ptr [ebp - 0xd8], 1 */
  w32((uint32_t)(EBP + -0xd8), (0x1u));
  /* 1169a99a jmp 0x1169a9a6 */
  goto L_1169a9a6;
L_1169a99c:;
  /* 1169a99c mov dword ptr [ebp - 0xd8], 0 */
  w32((uint32_t)(EBP + -0xd8), (0x0u));
L_1169a9a6:;
  /* 1169a9a6 jmp 0x1169a9b2 */
  goto L_1169a9b2;
L_1169a9a8:;
  /* 1169a9a8 mov dword ptr [ebp - 0xd8], 0xffffffff */
  w32((uint32_t)(EBP + -0xd8), (0xffffffffu));
L_1169a9b2:;
  /* 1169a9b2 mov eax, dword ptr [ebp - 0xd8] */
  EAX = (r32((uint32_t)(EBP + -0xd8)));
  /* 1169a9b8 mov dword ptr [0x116d0528], eax */
  w32((uint32_t)(0x116d0528), (EAX));
  /* 1169a9bd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1169a9c0 mov dword ptr [0x116d0530], ecx */
  w32((uint32_t)(0x116d0530), (ECX));
  /* 1169a9c6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1169a9c9 mov dword ptr [0x116d0534], edx */
  w32((uint32_t)(0x116d0534), (EDX));
  /* 1169a9cf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169a9d2 mov dword ptr [0x116d0538], eax */
  w32((uint32_t)(0x116d0538), (EAX));
  /* 1169a9d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169a9da mov dword ptr [0x116d053c], ecx */
  w32((uint32_t)(0x116d053c), (ECX));
L_1169a9e0:;
  /* 1169a9e0 mov edx, dword ptr [ebp - 0xd8] */
  EDX = (r32((uint32_t)(EBP + -0xd8)));
  /* 1169a9e6 push edx */
  push32((uint32_t)(EDX));
  /* 1169a9e7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1169a9ea and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1169a9ef push eax */
  push32((uint32_t)(EAX));
  /* 1169a9f0 mov ecx, dword ptr [ebp - 0x1a] */
  ECX = (r32((uint32_t)(EBP + -0x1a)));
  /* 1169a9f3 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1169a9f9 push ecx */
  push32((uint32_t)(ECX));
  /* 1169a9fa mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1169a9fd and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1169aa03 push edx */
  push32((uint32_t)(EDX));
  /* 1169aa04 mov eax, dword ptr [ebp - 0x1e] */
  EAX = (r32((uint32_t)(EBP + -0x1e)));
  /* 1169aa07 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1169aa0c push eax */
  push32((uint32_t)(EAX));
  /* 1169aa0d mov ecx, dword ptr [ebp - 0x22] */
  ECX = (r32((uint32_t)(EBP + -0x22)));
  /* 1169aa10 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1169aa16 push ecx */
  push32((uint32_t)(ECX));
  /* 1169aa17 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1169aa1a and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1169aa20 push edx */
  push32((uint32_t)(EDX));
  /* 1169aa21 call 0x1169f430 */
  push32(0x1169aa26u); f_1169f430();
  /* 1169aa26 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169aa29 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1169aa2c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169aa30 je 0x1169aa3a */
  if (C.zf) goto L_1169aa3a;
  /* 1169aa32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169aa35 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1169aa38 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_1169aa3a:;
  /* 1169aa3a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1169aa3d mov esp, ebp */
  ESP = (EBP);
  /* 1169aa3f pop ebp */
  EBP = (pop32());
  /* 1169aa40 ret  */
  ESPCHK(0x1169a8c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa50 @ 0x1169aa50 (313 bytes, 78 insns) */
void f_1169aa50(void) {
  FTRACE(0x1169aa50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169aa50 push ebp */
  push32((uint32_t)(EBP));
  /* 1169aa51 mov ebp, esp */
  EBP = (ESP);
  /* 1169aa53 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169aa57 jne 0x1169ab17 */
  if (!C.zf) goto L_1169ab17;
  /* 1169aa5d call dword ptr [0x116d342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d342c))), 0x1169aa63u);
  /* 1169aa63 mov dword ptr [0x116d05d0], eax */
  w32((uint32_t)(0x116d05d0), (EAX));
  /* 1169aa68 push 1 */
  push32((uint32_t)(0x1u));
  /* 1169aa6a call 0x116a0170 */
  push32(0x1169aa6fu); f_116a0170();
  /* 1169aa6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169aa72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169aa74 jne 0x1169aa7d */
  if (!C.zf) goto L_1169aa7d;
  /* 1169aa76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169aa78 jmp 0x1169ab85 */
  goto L_1169ab85;
L_1169aa7d:;
  /* 1169aa7d mov eax, dword ptr [0x116d05d0] */
  EAX = (r32((uint32_t)(0x116d05d0)));
  /* 1169aa82 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1169aa85 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1169aa8a mov dword ptr [0x116d05dc], eax */
  w32((uint32_t)(0x116d05dc), (EAX));
  /* 1169aa8f mov ecx, dword ptr [0x116d05d0] */
  ECX = (r32((uint32_t)(0x116d05d0)));
  /* 1169aa95 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1169aa9b mov dword ptr [0x116d05d8], ecx */
  w32((uint32_t)(0x116d05d8), (ECX));
  /* 1169aaa1 mov edx, dword ptr [0x116d05d8] */
  EDX = (r32((uint32_t)(0x116d05d8)));
  /* 1169aaa7 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 1169aaaa add edx, dword ptr [0x116d05dc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x116d05dc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169aab0 mov dword ptr [0x116d05d4], edx */
  w32((uint32_t)(0x116d05d4), (EDX));
  /* 1169aab6 mov eax, dword ptr [0x116d05d0] */
  EAX = (r32((uint32_t)(0x116d05d0)));
  /* 1169aabb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1169aabe and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1169aac3 mov dword ptr [0x116d05d0], eax */
  w32((uint32_t)(0x116d05d0), (EAX));
  /* 1169aac8 call 0x1169ee40 */
  push32(0x1169aacdu); f_1169ee40();
  /* 1169aacd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169aacf jne 0x1169aadd */
  if (!C.zf) goto L_1169aadd;
  /* 1169aad1 call 0x116a01c0 */
  push32(0x1169aad6u); f_116a01c0();
  /* 1169aad6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169aad8 jmp 0x1169ab85 */
  goto L_1169ab85;
L_1169aadd:;
  /* 1169aadd call dword ptr [0x116d3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3428))), 0x1169aae3u);
  /* 1169aae3 mov dword ptr [0x116d2074], eax */
  w32((uint32_t)(0x116d2074), (EAX));
  /* 1169aae8 call 0x1169ff50 */
  push32(0x1169aaedu); f_1169ff50();
  /* 1169aaed mov dword ptr [0x116d0544], eax */
  w32((uint32_t)(0x116d0544), (EAX));
  /* 1169aaf2 call 0x1169f520 */
  push32(0x1169aaf7u); f_1169f520();
  /* 1169aaf7 call 0x1169fa40 */
  push32(0x1169aafcu); f_1169fa40();
  /* 1169aafc call 0x1169f8f0 */
  push32(0x1169ab01u); f_1169f8f0();
  /* 1169ab01 call 0x1169f230 */
  push32(0x1169ab06u); f_1169f230();
  /* 1169ab06 mov ecx, dword ptr [0x116d0540] */
  ECX = (r32((uint32_t)(0x116d0540)));
  /* 1169ab0c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169ab0f mov dword ptr [0x116d0540], ecx */
  w32((uint32_t)(0x116d0540), (ECX));
  /* 1169ab15 jmp 0x1169ab80 */
  goto L_1169ab80;
L_1169ab17:;
  /* 1169ab17 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ab1b jne 0x1169ab70 */
  if (!C.zf) goto L_1169ab70;
  /* 1169ab1d cmp dword ptr [0x116d0540], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d0540))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ab24 jle 0x1169ab6a */
  if ((C.zf||C.sf!=C.of)) goto L_1169ab6a;
  /* 1169ab26 mov edx, dword ptr [0x116d0540] */
  EDX = (r32((uint32_t)(0x116d0540)));
  /* 1169ab2c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169ab2f mov dword ptr [0x116d0540], edx */
  w32((uint32_t)(0x116d0540), (EDX));
  /* 1169ab35 cmp dword ptr [0x116d0608], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d0608))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ab3c jne 0x1169ab43 */
  if (!C.zf) goto L_1169ab43;
  /* 1169ab3e call 0x1169f2b0 */
  push32(0x1169ab43u); f_1169f2b0();
L_1169ab43:;
  /* 1169ab43 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1169ab45 call 0x1169d730 */
  push32(0x1169ab4au); f_1169d730();
  /* 1169ab4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169ab4d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1169ab50 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169ab52 je 0x1169ab59 */
  if (C.zf) goto L_1169ab59;
  /* 1169ab54 call 0x1169e040 */
  push32(0x1169ab59u); f_1169e040();
L_1169ab59:;
  /* 1169ab59 call 0x1169f850 */
  push32(0x1169ab5eu); f_1169f850();
  /* 1169ab5e call 0x1169eed0 */
  push32(0x1169ab63u); f_1169eed0();
  /* 1169ab63 call 0x116a01c0 */
  push32(0x1169ab68u); f_116a01c0();
  /* 1169ab68 jmp 0x1169ab6e */
  goto L_1169ab6e;
L_1169ab6a:;
  /* 1169ab6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169ab6c jmp 0x1169ab85 */
  goto L_1169ab85;
L_1169ab6e:;
  /* 1169ab6e jmp 0x1169ab80 */
  goto L_1169ab80;
L_1169ab70:;
  /* 1169ab70 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ab74 jne 0x1169ab80 */
  if (!C.zf) goto L_1169ab80;
  /* 1169ab76 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169ab78 call 0x1169efc0 */
  push32(0x1169ab7du); f_1169efc0();
  /* 1169ab7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1169ab80:;
  /* 1169ab80 mov eax, 1 */
  EAX = (0x1u);
L_1169ab85:;
  /* 1169ab85 pop ebp */
  EBP = (pop32());
  /* 1169ab86 ret 0xc */
  ESPCHK(0x1169aa50u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x1169ab90 (243 bytes, 86 insns) */
void f_1169ab90(void) {
  FTRACE(0x1169ab90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169ab90 push ebp */
  push32((uint32_t)(EBP));
  /* 1169ab91 mov ebp, esp */
  EBP = (ESP);
  /* 1169ab93 push ecx */
  push32((uint32_t)(ECX));
  /* 1169ab94 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1169ab9b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ab9f jne 0x1169abb1 */
  if (!C.zf) goto L_1169abb1;
  /* 1169aba1 cmp dword ptr [0x116d0540], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d0540))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169aba8 jne 0x1169abb1 */
  if (!C.zf) goto L_1169abb1;
  /* 1169abaa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169abac jmp 0x1169ac7d */
  goto L_1169ac7d;
L_1169abb1:;
  /* 1169abb1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169abb5 je 0x1169abbd */
  if (C.zf) goto L_1169abbd;
  /* 1169abb7 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169abbb jne 0x1169abff */
  if (!C.zf) goto L_1169abff;
L_1169abbd:;
  /* 1169abbd cmp dword ptr [0x116d2084], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d2084))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169abc4 je 0x1169abdb */
  if (C.zf) goto L_1169abdb;
  /* 1169abc6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169abc9 push eax */
  push32((uint32_t)(EAX));
  /* 1169abca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169abcd push ecx */
  push32((uint32_t)(ECX));
  /* 1169abce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169abd1 push edx */
  push32((uint32_t)(EDX));
  /* 1169abd2 call dword ptr [0x116d2084] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d2084))), 0x1169abd8u);
  /* 1169abd8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1169abdb:;
  /* 1169abdb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169abdf je 0x1169abf5 */
  if (C.zf) goto L_1169abf5;
  /* 1169abe1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169abe4 push eax */
  push32((uint32_t)(EAX));
  /* 1169abe5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169abe8 push ecx */
  push32((uint32_t)(ECX));
  /* 1169abe9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169abec push edx */
  push32((uint32_t)(EDX));
  /* 1169abed call 0x1169aa50 */
  push32(0x1169abf2u); f_1169aa50();
  /* 1169abf2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1169abf5:;
  /* 1169abf5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169abf9 jne 0x1169abff */
  if (!C.zf) goto L_1169abff;
  /* 1169abfb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169abfd jmp 0x1169ac7d */
  goto L_1169ac7d;
L_1169abff:;
  /* 1169abff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169ac02 push eax */
  push32((uint32_t)(EAX));
  /* 1169ac03 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169ac06 push ecx */
  push32((uint32_t)(ECX));
  /* 1169ac07 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169ac0a push edx */
  push32((uint32_t)(EDX));
  /* 1169ac0b call 0x1169105f */
  push32(0x1169ac10u); f_1169105f();
  /* 1169ac10 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1169ac13 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ac17 jne 0x1169ac2e */
  if (!C.zf) goto L_1169ac2e;
  /* 1169ac19 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ac1d jne 0x1169ac2e */
  if (!C.zf) goto L_1169ac2e;
  /* 1169ac1f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169ac22 push eax */
  push32((uint32_t)(EAX));
  /* 1169ac23 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169ac25 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169ac28 push ecx */
  push32((uint32_t)(ECX));
  /* 1169ac29 call 0x1169aa50 */
  push32(0x1169ac2eu); f_1169aa50();
L_1169ac2e:;
  /* 1169ac2e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ac32 je 0x1169ac3a */
  if (C.zf) goto L_1169ac3a;
  /* 1169ac34 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ac38 jne 0x1169ac7a */
  if (!C.zf) goto L_1169ac7a;
L_1169ac3a:;
  /* 1169ac3a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169ac3d push edx */
  push32((uint32_t)(EDX));
  /* 1169ac3e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169ac41 push eax */
  push32((uint32_t)(EAX));
  /* 1169ac42 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169ac45 push ecx */
  push32((uint32_t)(ECX));
  /* 1169ac46 call 0x1169aa50 */
  push32(0x1169ac4bu); f_1169aa50();
  /* 1169ac4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169ac4d jne 0x1169ac56 */
  if (!C.zf) goto L_1169ac56;
  /* 1169ac4f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1169ac56:;
  /* 1169ac56 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ac5a je 0x1169ac7a */
  if (C.zf) goto L_1169ac7a;
  /* 1169ac5c cmp dword ptr [0x116d2084], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d2084))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ac63 je 0x1169ac7a */
  if (C.zf) goto L_1169ac7a;
  /* 1169ac65 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169ac68 push edx */
  push32((uint32_t)(EDX));
  /* 1169ac69 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169ac6c push eax */
  push32((uint32_t)(EAX));
  /* 1169ac6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169ac70 push ecx */
  push32((uint32_t)(ECX));
  /* 1169ac71 call dword ptr [0x116d2084] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d2084))), 0x1169ac77u);
  /* 1169ac77 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1169ac7a:;
  /* 1169ac7a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1169ac7d:;
  /* 1169ac7d mov esp, ebp */
  ESP = (EBP);
  /* 1169ac7f pop ebp */
  EBP = (pop32());
  /* 1169ac80 ret 0xc */
  ESPCHK(0x1169ab90u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x1169ac90 (58 bytes, 18 insns) */
void f_1169ac90(void) {
  FTRACE(0x1169ac90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169ac90 push ebp */
  push32((uint32_t)(EBP));
  /* 1169ac91 mov ebp, esp */
  EBP = (ESP);
  /* 1169ac93 cmp dword ptr [0x116d054c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x116d054c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ac9a je 0x1169acae */
  if (C.zf) goto L_1169acae;
  /* 1169ac9c cmp dword ptr [0x116d054c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d054c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169aca3 jne 0x1169acb3 */
  if (!C.zf) goto L_1169acb3;
  /* 1169aca5 cmp dword ptr [0x116d0550], 1 */
  { uint32_t _a=(r32((uint32_t)(0x116d0550))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169acac jne 0x1169acb3 */
  if (!C.zf) goto L_1169acb3;
L_1169acae:;
  /* 1169acae call 0x116a0260 */
  push32(0x1169acb3u); f_116a0260();
L_1169acb3:;
  /* 1169acb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169acb6 push eax */
  push32((uint32_t)(EAX));
  /* 1169acb7 call 0x116a02b0 */
  push32(0x1169acbcu); f_116a02b0();
  /* 1169acbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169acbf push 0xff */
  push32((uint32_t)(0xffu));
  /* 1169acc4 call dword ptr [0x116ce040] */
  call_ind((uint32_t)(r32((uint32_t)(0x116ce040))), 0x1169accau);
  /* 1169acca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169accd pop ebp */
  EBP = (pop32());
  /* 1169acce ret  */
  ESPCHK(0x1169ac90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000acd0 @ 0x1169acd0 (11 bytes, 5 insns) */
void f_1169acd0(void) {
  FTRACE(0x1169acd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169acd0 push ebp */
  push32((uint32_t)(EBP));
  /* 1169acd1 mov ebp, esp */
  EBP = (ESP);
  /* 1169acd3 call dword ptr [0x116d3430] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3430))), 0x1169acd9u);
  /* 1169acd9 pop ebp */
  EBP = (pop32());
  /* 1169acda ret  */
  ESPCHK(0x1169acd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ace0 @ 0x1169ace0 (87 bytes, 30 insns) */
void f_1169ace0(void) {
  FTRACE(0x1169ace0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169ace0 push ebp */
  push32((uint32_t)(EBP));
  /* 1169ace1 mov ebp, esp */
  EBP = (ESP);
  /* 1169ace3 push ecx */
  push32((uint32_t)(ECX));
  /* 1169ace4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ace8 jl 0x1169acf0 */
  if ((C.sf!=C.of)) goto L_1169acf0;
  /* 1169acea cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169acee jl 0x1169acf5 */
  if ((C.sf!=C.of)) goto L_1169acf5;
L_1169acf0:;
  /* 1169acf0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1169acf3 jmp 0x1169ad33 */
  goto L_1169ad33;
L_1169acf5:;
  /* 1169acf5 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169acf9 jne 0x1169ad07 */
  if (!C.zf) goto L_1169ad07;
  /* 1169acfb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169acfe mov eax, dword ptr [eax*4 + 0x116ce048] */
  EAX = (r32((uint32_t)(EAX*4 + 0x116ce048)));
  /* 1169ad05 jmp 0x1169ad33 */
  goto L_1169ad33;
L_1169ad07:;
  /* 1169ad07 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169ad0a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 1169ad0d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1169ad0f je 0x1169ad16 */
  if (C.zf) goto L_1169ad16;
  /* 1169ad11 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1169ad14 jmp 0x1169ad33 */
  goto L_1169ad33;
L_1169ad16:;
  /* 1169ad16 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169ad19 mov eax, dword ptr [edx*4 + 0x116ce048] */
  EAX = (r32((uint32_t)(EDX*4 + 0x116ce048)));
  /* 1169ad20 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1169ad23 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169ad26 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169ad29 mov dword ptr [ecx*4 + 0x116ce048], edx */
  w32((uint32_t)(ECX*4 + 0x116ce048), (EDX));
  /* 1169ad30 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1169ad33:;
  /* 1169ad33 mov esp, ebp */
  ESP = (EBP);
  /* 1169ad35 pop ebp */
  EBP = (pop32());
  /* 1169ad36 ret  */
  ESPCHK(0x1169ace0u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x1169ad40 (126 bytes, 38 insns) */
void f_1169ad40(void) {
  FTRACE(0x1169ad40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169ad40 push ebp */
  push32((uint32_t)(EBP));
  /* 1169ad41 mov ebp, esp */
  EBP = (ESP);
  /* 1169ad43 push ecx */
  push32((uint32_t)(ECX));
  /* 1169ad44 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ad48 jl 0x1169ad50 */
  if ((C.sf!=C.of)) goto L_1169ad50;
  /* 1169ad4a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ad4e jl 0x1169ad57 */
  if ((C.sf!=C.of)) goto L_1169ad57;
L_1169ad50:;
  /* 1169ad50 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 1169ad55 jmp 0x1169adba */
  goto L_1169adba;
L_1169ad57:;
  /* 1169ad57 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ad5b jne 0x1169ad69 */
  if (!C.zf) goto L_1169ad69;
  /* 1169ad5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169ad60 mov eax, dword ptr [eax*4 + 0x116ce054] */
  EAX = (r32((uint32_t)(EAX*4 + 0x116ce054)));
  /* 1169ad67 jmp 0x1169adba */
  goto L_1169adba;
L_1169ad69:;
  /* 1169ad69 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169ad6c mov edx, dword ptr [ecx*4 + 0x116ce054] */
  EDX = (r32((uint32_t)(ECX*4 + 0x116ce054)));
  /* 1169ad73 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1169ad76 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ad7a jne 0x1169ad90 */
  if (!C.zf) goto L_1169ad90;
  /* 1169ad7c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1169ad7e call dword ptr [0x116d3434] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3434))), 0x1169ad84u);
  /* 1169ad84 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169ad87 mov dword ptr [ecx*4 + 0x116ce054], eax */
  w32((uint32_t)(ECX*4 + 0x116ce054), (EAX));
  /* 1169ad8e jmp 0x1169adb7 */
  goto L_1169adb7;
L_1169ad90:;
  /* 1169ad90 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ad94 jne 0x1169adaa */
  if (!C.zf) goto L_1169adaa;
  /* 1169ad96 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1169ad98 call dword ptr [0x116d3434] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3434))), 0x1169ad9eu);
  /* 1169ad9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169ada1 mov dword ptr [edx*4 + 0x116ce054], eax */
  w32((uint32_t)(EDX*4 + 0x116ce054), (EAX));
  /* 1169ada8 jmp 0x1169adb7 */
  goto L_1169adb7;
L_1169adaa:;
  /* 1169adaa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169adad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169adb0 mov dword ptr [eax*4 + 0x116ce054], ecx */
  w32((uint32_t)(EAX*4 + 0x116ce054), (ECX));
L_1169adb7:;
  /* 1169adb7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1169adba:;
  /* 1169adba mov esp, ebp */
  ESP = (EBP);
  /* 1169adbc pop ebp */
  EBP = (pop32());
  /* 1169adbd ret  */
  ESPCHK(0x1169ad40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000adc0 @ 0x1169adc0 (28 bytes, 11 insns) */
void f_1169adc0(void) {
  FTRACE(0x1169adc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169adc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1169adc1 mov ebp, esp */
  EBP = (ESP);
  /* 1169adc3 push ecx */
  push32((uint32_t)(ECX));
  /* 1169adc4 mov eax, dword ptr [0x116d2068] */
  EAX = (r32((uint32_t)(0x116d2068)));
  /* 1169adc9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1169adcc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169adcf mov dword ptr [0x116d2068], ecx */
  w32((uint32_t)(0x116d2068), (ECX));
  /* 1169add5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169add8 mov esp, ebp */
  ESP = (EBP);
  /* 1169adda pop ebp */
  EBP = (pop32());
  /* 1169addb ret  */
  ESPCHK(0x1169adc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ade0 @ 0x1169ade0 (912 bytes, 248 insns) */
void f_1169ade0(void) {
  FTRACE(0x1169ade0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169ade0 push ebp */
  push32((uint32_t)(EBP));
  /* 1169ade1 mov ebp, esp */
  EBP = (ESP);
  /* 1169ade3 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 1169ade8 call 0x116a0a30 */
  push32(0x1169adedu); f_116a0a30();
  /* 1169aded push edi */
  push32((uint32_t)(EDI));
  /* 1169adee mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 1169adf5 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 1169adfa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169adfc lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 1169ae02 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1169ae04 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 1169ae06 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1169ae07 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 1169ae0e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 1169ae13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169ae15 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 1169ae1b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1169ae1d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 1169ae1f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1169ae20 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 1169ae27 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 1169ae2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169ae2e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 1169ae34 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1169ae36 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 1169ae38 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1169ae39 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 1169ae3c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 1169ae42 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ae46 jl 0x1169ae4e */
  if ((C.sf!=C.of)) goto L_1169ae4e;
  /* 1169ae48 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ae4c jl 0x1169ae56 */
  if ((C.sf!=C.of)) goto L_1169ae56;
L_1169ae4e:;
  /* 1169ae4e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1169ae51 jmp 0x1169b16b */
  goto L_1169b16b;
L_1169ae56:;
  /* 1169ae56 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ae5a jne 0x1169af00 */
  if (!C.zf) goto L_1169af00;
  /* 1169ae60 push 0x116ce044 */
  push32((uint32_t)(0x116ce044u));
  /* 1169ae65 call dword ptr [0x116d344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d344c))), 0x1169ae6bu);
  /* 1169ae6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169ae6d jle 0x1169af00 */
  if ((C.zf||C.sf!=C.of)) goto L_1169af00;
  /* 1169ae73 cmp dword ptr [0x116d0554], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d0554))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ae7a jne 0x1169aebe */
  if (!C.zf) goto L_1169aebe;
  /* 1169ae7c push 0x116caa68 */
  push32((uint32_t)(0x116caa68u));
  /* 1169ae81 call dword ptr [0x116d3448] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3448))), 0x1169ae87u);
  /* 1169ae87 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 1169ae8d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ae94 je 0x1169aeb6 */
  if (C.zf) goto L_1169aeb6;
  /* 1169ae96 push 0x116caa5c */
  push32((uint32_t)(0x116caa5cu));
  /* 1169ae9b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 1169aea1 push ecx */
  push32((uint32_t)(ECX));
  /* 1169aea2 call dword ptr [0x116d3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3444))), 0x1169aea8u);
  /* 1169aea8 mov dword ptr [0x116d0554], eax */
  w32((uint32_t)(0x116d0554), (EAX));
  /* 1169aead cmp dword ptr [0x116d0554], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d0554))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169aeb4 jne 0x1169aebe */
  if (!C.zf) goto L_1169aebe;
L_1169aeb6:;
  /* 1169aeb6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1169aeb9 jmp 0x1169b16b */
  goto L_1169b16b;
L_1169aebe:;
  /* 1169aebe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169aec1 push edx */
  push32((uint32_t)(EDX));
  /* 1169aec2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169aec5 push eax */
  push32((uint32_t)(EAX));
  /* 1169aec6 push 0x116caa28 */
  push32((uint32_t)(0x116caa28u));
  /* 1169aecb lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 1169aed1 push ecx */
  push32((uint32_t)(ECX));
  /* 1169aed2 call dword ptr [0x116d0554] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d0554))), 0x1169aed8u);
  /* 1169aed8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169aedb lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 1169aee1 push edx */
  push32((uint32_t)(EDX));
  /* 1169aee2 call dword ptr [0x116d3440] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3440))), 0x1169aee8u);
  /* 1169aee8 push 0x116ce044 */
  push32((uint32_t)(0x116ce044u));
  /* 1169aeed call dword ptr [0x116d3328] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3328))), 0x1169aef3u);
  /* 1169aef3 call 0x1169acd0 */
  push32(0x1169aef8u); f_1169acd0();
  /* 1169aef8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1169aefb jmp 0x1169b16b */
  goto L_1169b16b;
L_1169af00:;
  /* 1169af00 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169af04 je 0x1169af3d */
  if (C.zf) goto L_1169af3d;
  /* 1169af06 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 1169af0c push eax */
  push32((uint32_t)(EAX));
  /* 1169af0d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169af10 push ecx */
  push32((uint32_t)(ECX));
  /* 1169af11 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 1169af16 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 1169af1c push edx */
  push32((uint32_t)(EDX));
  /* 1169af1d call 0x116a0930 */
  push32(0x1169af22u); f_116a0930();
  /* 1169af22 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169af25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169af27 jge 0x1169af3d */
  if ((C.sf==C.of)) goto L_1169af3d;
  /* 1169af29 push 0x116ca9fc */
  push32((uint32_t)(0x116ca9fcu));
  /* 1169af2e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 1169af34 push eax */
  push32((uint32_t)(EAX));
  /* 1169af35 call 0x1169a7d0 */
  push32(0x1169af3au); f_1169a7d0();
  /* 1169af3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1169af3d:;
  /* 1169af3d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169af41 jne 0x1169af75 */
  if (!C.zf) goto L_1169af75;
  /* 1169af43 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169af47 je 0x1169af55 */
  if (C.zf) goto L_1169af55;
  /* 1169af49 mov dword ptr [ebp - 0x3028], 0x116ca9e8 */
  w32((uint32_t)(EBP + -0x3028), (0x116ca9e8u));
  /* 1169af53 jmp 0x1169af5f */
  goto L_1169af5f;
L_1169af55:;
  /* 1169af55 mov dword ptr [ebp - 0x3028], 0x116ca9d4 */
  w32((uint32_t)(EBP + -0x3028), (0x116ca9d4u));
L_1169af5f:;
  /* 1169af5f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 1169af65 push ecx */
  push32((uint32_t)(ECX));
  /* 1169af66 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 1169af6c push edx */
  push32((uint32_t)(EDX));
  /* 1169af6d call 0x1169a7d0 */
  push32(0x1169af72u); f_1169a7d0();
  /* 1169af72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1169af75:;
  /* 1169af75 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 1169af7b push eax */
  push32((uint32_t)(EAX));
  /* 1169af7c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 1169af82 push ecx */
  push32((uint32_t)(ECX));
  /* 1169af83 call 0x1169a7e0 */
  push32(0x1169af88u); f_1169a7e0();
  /* 1169af88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169af8b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169af8f jne 0x1169afca */
  if (!C.zf) goto L_1169afca;
  /* 1169af91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169af94 mov eax, dword ptr [edx*4 + 0x116ce048] */
  EAX = (r32((uint32_t)(EDX*4 + 0x116ce048)));
  /* 1169af9b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1169af9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169afa0 je 0x1169afb6 */
  if (C.zf) goto L_1169afb6;
  /* 1169afa2 push 0x116ca9d0 */
  push32((uint32_t)(0x116ca9d0u));
  /* 1169afa7 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 1169afad push ecx */
  push32((uint32_t)(ECX));
  /* 1169afae call 0x1169a7e0 */
  push32(0x1169afb3u); f_1169a7e0();
  /* 1169afb3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1169afb6:;
  /* 1169afb6 push 0x116ca9cc */
  push32((uint32_t)(0x116ca9ccu));
  /* 1169afbb lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 1169afc1 push edx */
  push32((uint32_t)(EDX));
  /* 1169afc2 call 0x1169a7e0 */
  push32(0x1169afc7u); f_1169a7e0();
  /* 1169afc7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1169afca:;
  /* 1169afca cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169afce je 0x1169b012 */
  if (C.zf) goto L_1169b012;
  /* 1169afd0 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 1169afd6 push eax */
  push32((uint32_t)(EAX));
  /* 1169afd7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169afda push ecx */
  push32((uint32_t)(ECX));
  /* 1169afdb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169afde push edx */
  push32((uint32_t)(EDX));
  /* 1169afdf push 0x116ca9c0 */
  push32((uint32_t)(0x116ca9c0u));
  /* 1169afe4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1169afe9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 1169afef push eax */
  push32((uint32_t)(EAX));
  /* 1169aff0 call 0x116a0830 */
  push32(0x1169aff5u); f_116a0830();
  /* 1169aff5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169aff8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169affa jge 0x1169b010 */
  if ((C.sf==C.of)) goto L_1169b010;
  /* 1169affc push 0x116ca9fc */
  push32((uint32_t)(0x116ca9fcu));
  /* 1169b001 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 1169b007 push ecx */
  push32((uint32_t)(ECX));
  /* 1169b008 call 0x1169a7d0 */
  push32(0x1169b00du); f_1169a7d0();
  /* 1169b00d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1169b010:;
  /* 1169b010 jmp 0x1169b028 */
  goto L_1169b028;
L_1169b012:;
  /* 1169b012 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 1169b018 push edx */
  push32((uint32_t)(EDX));
  /* 1169b019 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 1169b01f push eax */
  push32((uint32_t)(EAX));
  /* 1169b020 call 0x1169a7d0 */
  push32(0x1169b025u); f_1169a7d0();
  /* 1169b025 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1169b028:;
  /* 1169b028 cmp dword ptr [0x116d2068], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d2068))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169b02f je 0x1169b06c */
  if (C.zf) goto L_1169b06c;
  /* 1169b031 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 1169b037 push ecx */
  push32((uint32_t)(ECX));
  /* 1169b038 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 1169b03e push edx */
  push32((uint32_t)(EDX));
  /* 1169b03f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169b042 push eax */
  push32((uint32_t)(EAX));
  /* 1169b043 call dword ptr [0x116d2068] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d2068))), 0x1169b049u);
  /* 1169b049 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169b04c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169b04e je 0x1169b06c */
  if (C.zf) goto L_1169b06c;
  /* 1169b050 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169b054 jne 0x1169b061 */
  if (!C.zf) goto L_1169b061;
  /* 1169b056 push 0x116ce044 */
  push32((uint32_t)(0x116ce044u));
  /* 1169b05b call dword ptr [0x116d3328] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3328))), 0x1169b061u);
L_1169b061:;
  /* 1169b061 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 1169b067 jmp 0x1169b16b */
  goto L_1169b16b;
L_1169b06c:;
  /* 1169b06c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169b06f mov edx, dword ptr [ecx*4 + 0x116ce048] */
  EDX = (r32((uint32_t)(ECX*4 + 0x116ce048)));
  /* 1169b076 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1169b079 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1169b07b je 0x1169b0bb */
  if (C.zf) goto L_1169b0bb;
  /* 1169b07d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169b080 cmp dword ptr [eax*4 + 0x116ce054], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x116ce054))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169b088 je 0x1169b0bb */
  if (C.zf) goto L_1169b0bb;
  /* 1169b08a push 0 */
  push32((uint32_t)(0x0u));
  /* 1169b08c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 1169b092 push ecx */
  push32((uint32_t)(ECX));
  /* 1169b093 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 1169b099 push edx */
  push32((uint32_t)(EDX));
  /* 1169b09a call 0x116a07b0 */
  push32(0x1169b09fu); f_116a07b0();
  /* 1169b09f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169b0a2 push eax */
  push32((uint32_t)(EAX));
  /* 1169b0a3 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 1169b0a9 push eax */
  push32((uint32_t)(EAX));
  /* 1169b0aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169b0ad mov edx, dword ptr [ecx*4 + 0x116ce054] */
  EDX = (r32((uint32_t)(ECX*4 + 0x116ce054)));
  /* 1169b0b4 push edx */
  push32((uint32_t)(EDX));
  /* 1169b0b5 call dword ptr [0x116d332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d332c))), 0x1169b0bbu);
L_1169b0bb:;
  /* 1169b0bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169b0be mov ecx, dword ptr [eax*4 + 0x116ce048] */
  ECX = (r32((uint32_t)(EAX*4 + 0x116ce048)));
  /* 1169b0c5 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1169b0c8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1169b0ca je 0x1169b0d9 */
  if (C.zf) goto L_1169b0d9;
  /* 1169b0cc lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 1169b0d2 push edx */
  push32((uint32_t)(EDX));
  /* 1169b0d3 call dword ptr [0x116d3440] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3440))), 0x1169b0d9u);
L_1169b0d9:;
  /* 1169b0d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169b0dc mov ecx, dword ptr [eax*4 + 0x116ce048] */
  ECX = (r32((uint32_t)(EAX*4 + 0x116ce048)));
  /* 1169b0e3 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1169b0e6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1169b0e8 je 0x1169b158 */
  if (C.zf) goto L_1169b158;
  /* 1169b0ea cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169b0ee je 0x1169b10d */
  if (C.zf) goto L_1169b10d;
  /* 1169b0f0 push 0xa */
  push32((uint32_t)(0xau));
  /* 1169b0f2 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 1169b0f8 push edx */
  push32((uint32_t)(EDX));
  /* 1169b0f9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169b0fc push eax */
  push32((uint32_t)(EAX));
  /* 1169b0fd call 0x116a04c0 */
  push32(0x1169b102u); f_116a04c0();
  /* 1169b102 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169b105 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 1169b10b jmp 0x1169b117 */
  goto L_1169b117;
L_1169b10d:;
  /* 1169b10d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_1169b117:;
  /* 1169b117 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 1169b11d push ecx */
  push32((uint32_t)(ECX));
  /* 1169b11e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169b121 push edx */
  push32((uint32_t)(EDX));
  /* 1169b122 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 1169b128 push eax */
  push32((uint32_t)(EAX));
  /* 1169b129 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169b12c push ecx */
  push32((uint32_t)(ECX));
  /* 1169b12d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169b130 push edx */
  push32((uint32_t)(EDX));
  /* 1169b131 call 0x1169b170 */
  push32(0x1169b136u); f_1169b170();
  /* 1169b136 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169b139 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 1169b13f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169b143 jne 0x1169b150 */
  if (!C.zf) goto L_1169b150;
  /* 1169b145 push 0x116ce044 */
  push32((uint32_t)(0x116ce044u));
  /* 1169b14a call dword ptr [0x116d3328] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3328))), 0x1169b150u);
L_1169b150:;
  /* 1169b150 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 1169b156 jmp 0x1169b16b */
  goto L_1169b16b;
L_1169b158:;
  /* 1169b158 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169b15c jne 0x1169b169 */
  if (!C.zf) goto L_1169b169;
  /* 1169b15e push 0x116ce044 */
  push32((uint32_t)(0x116ce044u));
  /* 1169b163 call dword ptr [0x116d3328] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3328))), 0x1169b169u);
L_1169b169:;
  /* 1169b169 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1169b16b:;
  /* 1169b16b pop edi */
  EDI = (pop32());
  /* 1169b16c mov esp, ebp */
  ESP = (EBP);
  /* 1169b16e pop ebp */
  EBP = (pop32());
  /* 1169b16f ret  */
  ESPCHK(0x1169ade0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b170 @ 0x1169b170 (780 bytes, 197 insns) */
void f_1169b170(void) {
  FTRACE(0x1169b170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169b170 push ebp */
  push32((uint32_t)(EBP));
  /* 1169b171 mov ebp, esp */
  EBP = (ESP);
  /* 1169b173 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 1169b178 call 0x116a0a30 */
  push32(0x1169b17du); f_116a0a30();
L_1169b17d:;
  /* 1169b17d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169b181 jne 0x1169b1a8 */
  if (!C.zf) goto L_1169b1a8;
  /* 1169b183 push 0x116cabb8 */
  push32((uint32_t)(0x116cabb8u));
  /* 1169b188 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169b18a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 1169b18f push 0x116cabac */
  push32((uint32_t)(0x116cabacu));
  /* 1169b194 push 2 */
  push32((uint32_t)(0x2u));
  /* 1169b196 call 0x1169ade0 */
  push32(0x1169b19bu); f_1169ade0();
  /* 1169b19b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169b19e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169b1a1 jne 0x1169b1a8 */
  if (!C.zf) goto L_1169b1a8;
  /* 1169b1a3 call 0x1169acd0 */
  push32(0x1169b1a8u); f_1169acd0();
L_1169b1a8:;
  /* 1169b1a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169b1aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169b1ac jne 0x1169b17d */
  if (!C.zf) goto L_1169b17d;
  /* 1169b1ae push 0x104 */
  push32((uint32_t)(0x104u));
  /* 1169b1b3 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 1169b1b9 push ecx */
  push32((uint32_t)(ECX));
  /* 1169b1ba push 0 */
  push32((uint32_t)(0x0u));
  /* 1169b1bc call dword ptr [0x116d343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d343c))), 0x1169b1c2u);
  /* 1169b1c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169b1c4 jne 0x1169b1da */
  if (!C.zf) goto L_1169b1da;
  /* 1169b1c6 push 0x116cab94 */
  push32((uint32_t)(0x116cab94u));
  /* 1169b1cb lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 1169b1d1 push edx */
  push32((uint32_t)(EDX));
  /* 1169b1d2 call 0x1169a7d0 */
  push32(0x1169b1d7u); f_1169a7d0();
  /* 1169b1d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1169b1da:;
  /* 1169b1da lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 1169b1e0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1169b1e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169b1e6 push ecx */
  push32((uint32_t)(ECX));
  /* 1169b1e7 call 0x116a07b0 */
  push32(0x1169b1ecu); f_116a07b0();
  /* 1169b1ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169b1ef cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169b1f2 jbe 0x1169b21d */
  if ((C.cf||C.zf)) goto L_1169b21d;
  /* 1169b1f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169b1f7 push edx */
  push32((uint32_t)(EDX));
  /* 1169b1f8 call 0x116a07b0 */
  push32(0x1169b1fdu); f_116a07b0();
  /* 1169b1fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169b200 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169b203 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 1169b207 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1169b20a push 3 */
  push32((uint32_t)(0x3u));
  /* 1169b20c push 0x116cab90 */
  push32((uint32_t)(0x116cab90u));
  /* 1169b211 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169b214 push eax */
  push32((uint32_t)(EAX));
  /* 1169b215 call 0x116a10b0 */
  push32(0x1169b21au); f_116a10b0();
  /* 1169b21a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1169b21d:;
  /* 1169b21d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169b220 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 1169b226 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169b22d je 0x1169b278 */
  if (C.zf) goto L_1169b278;
  /* 1169b22f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 1169b235 push edx */
  push32((uint32_t)(EDX));
  /* 1169b236 call 0x116a07b0 */
  push32(0x1169b23bu); f_116a07b0();
  /* 1169b23b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169b23e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169b241 jbe 0x1169b278 */
  if ((C.cf||C.zf)) goto L_1169b278;
  /* 1169b243 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 1169b249 push eax */
  push32((uint32_t)(EAX));
  /* 1169b24a call 0x116a07b0 */
  push32(0x1169b24fu); f_116a07b0();
  /* 1169b24f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169b252 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 1169b258 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 1169b25c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 1169b262 push 3 */
  push32((uint32_t)(0x3u));
  /* 1169b264 push 0x116cab90 */
  push32((uint32_t)(0x116cab90u));
  /* 1169b269 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 1169b26f push eax */
  push32((uint32_t)(EAX));
  /* 1169b270 call 0x116a10b0 */
  push32(0x1169b275u); f_116a10b0();
  /* 1169b275 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1169b278:;
  /* 1169b278 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169b27c jne 0x1169b28a */
  if (!C.zf) goto L_1169b28a;
  /* 1169b27e mov dword ptr [ebp - 0x1114], 0x116cab1c */
  w32((uint32_t)(EBP + -0x1114), (0x116cab1cu));
  /* 1169b288 jmp 0x1169b294 */
  goto L_1169b294;
L_1169b28a:;
  /* 1169b28a mov dword ptr [ebp - 0x1114], 0x116ca87c */
  w32((uint32_t)(EBP + -0x1114), (0x116ca87cu));
L_1169b294:;
  /* 1169b294 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169b297 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1169b29a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1169b29c je 0x1169b2a9 */
  if (C.zf) goto L_1169b2a9;
  /* 1169b29e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169b2a1 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 1169b2a7 jmp 0x1169b2b3 */
  goto L_1169b2b3;
L_1169b2a9:;
  /* 1169b2a9 mov dword ptr [ebp - 0x1118], 0x116ca87c */
  w32((uint32_t)(EBP + -0x1118), (0x116ca87cu));
L_1169b2b3:;
  /* 1169b2b3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169b2b6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1169b2b9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1169b2bb je 0x1169b2cf */
  if (C.zf) goto L_1169b2cf;
  /* 1169b2bd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169b2c1 jne 0x1169b2cf */
  if (!C.zf) goto L_1169b2cf;
  /* 1169b2c3 mov dword ptr [ebp - 0x111c], 0x116cab0c */
  w32((uint32_t)(EBP + -0x111c), (0x116cab0cu));
  /* 1169b2cd jmp 0x1169b2d9 */
  goto L_1169b2d9;
L_1169b2cf:;
  /* 1169b2cf mov dword ptr [ebp - 0x111c], 0x116ca87c */
  w32((uint32_t)(EBP + -0x111c), (0x116ca87cu));
L_1169b2d9:;
  /* 1169b2d9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169b2dc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1169b2df test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1169b2e1 je 0x1169b2ef */
  if (C.zf) goto L_1169b2ef;
  /* 1169b2e3 mov dword ptr [ebp - 0x1120], 0x116cab08 */
  w32((uint32_t)(EBP + -0x1120), (0x116cab08u));
  /* 1169b2ed jmp 0x1169b2f9 */
  goto L_1169b2f9;
L_1169b2ef:;
  /* 1169b2ef mov dword ptr [ebp - 0x1120], 0x116ca87c */
  w32((uint32_t)(EBP + -0x1120), (0x116ca87cu));
L_1169b2f9:;
  /* 1169b2f9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169b2fd je 0x1169b30a */
  if (C.zf) goto L_1169b30a;
  /* 1169b2ff mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169b302 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 1169b308 jmp 0x1169b314 */
  goto L_1169b314;
L_1169b30a:;
  /* 1169b30a mov dword ptr [ebp - 0x1124], 0x116ca87c */
  w32((uint32_t)(EBP + -0x1124), (0x116ca87cu));
L_1169b314:;
  /* 1169b314 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169b318 je 0x1169b326 */
  if (C.zf) goto L_1169b326;
  /* 1169b31a mov dword ptr [ebp - 0x1128], 0x116cab00 */
  w32((uint32_t)(EBP + -0x1128), (0x116cab00u));
  /* 1169b324 jmp 0x1169b330 */
  goto L_1169b330;
L_1169b326:;
  /* 1169b326 mov dword ptr [ebp - 0x1128], 0x116ca87c */
  w32((uint32_t)(EBP + -0x1128), (0x116ca87cu));
L_1169b330:;
  /* 1169b330 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169b334 je 0x1169b341 */
  if (C.zf) goto L_1169b341;
  /* 1169b336 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169b339 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 1169b33f jmp 0x1169b34b */
  goto L_1169b34b;
L_1169b341:;
  /* 1169b341 mov dword ptr [ebp - 0x112c], 0x116ca87c */
  w32((uint32_t)(EBP + -0x112c), (0x116ca87cu));
L_1169b34b:;
  /* 1169b34b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169b34f je 0x1169b35d */
  if (C.zf) goto L_1169b35d;
  /* 1169b351 mov dword ptr [ebp - 0x1130], 0x116caaf8 */
  w32((uint32_t)(EBP + -0x1130), (0x116caaf8u));
  /* 1169b35b jmp 0x1169b367 */
  goto L_1169b367;
L_1169b35d:;
  /* 1169b35d mov dword ptr [ebp - 0x1130], 0x116ca87c */
  w32((uint32_t)(EBP + -0x1130), (0x116ca87cu));
L_1169b367:;
  /* 1169b367 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169b36e je 0x1169b37e */
  if (C.zf) goto L_1169b37e;
  /* 1169b370 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 1169b376 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 1169b37c jmp 0x1169b388 */
  goto L_1169b388;
L_1169b37e:;
  /* 1169b37e mov dword ptr [ebp - 0x1134], 0x116ca87c */
  w32((uint32_t)(EBP + -0x1134), (0x116ca87cu));
L_1169b388:;
  /* 1169b388 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169b38f je 0x1169b39d */
  if (C.zf) goto L_1169b39d;
  /* 1169b391 mov dword ptr [ebp - 0x1138], 0x116caaec */
  w32((uint32_t)(EBP + -0x1138), (0x116caaecu));
  /* 1169b39b jmp 0x1169b3a7 */
  goto L_1169b3a7;
L_1169b39d:;
  /* 1169b39d mov dword ptr [ebp - 0x1138], 0x116ca87c */
  w32((uint32_t)(EBP + -0x1138), (0x116ca87cu));
L_1169b3a7:;
  /* 1169b3a7 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 1169b3ad push edx */
  push32((uint32_t)(EDX));
  /* 1169b3ae mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 1169b3b4 push eax */
  push32((uint32_t)(EAX));
  /* 1169b3b5 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 1169b3bb push ecx */
  push32((uint32_t)(ECX));
  /* 1169b3bc mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 1169b3c2 push edx */
  push32((uint32_t)(EDX));
  /* 1169b3c3 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 1169b3c9 push eax */
  push32((uint32_t)(EAX));
  /* 1169b3ca mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 1169b3d0 push ecx */
  push32((uint32_t)(ECX));
  /* 1169b3d1 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 1169b3d7 push edx */
  push32((uint32_t)(EDX));
  /* 1169b3d8 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 1169b3de push eax */
  push32((uint32_t)(EAX));
  /* 1169b3df mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 1169b3e5 push ecx */
  push32((uint32_t)(ECX));
  /* 1169b3e6 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 1169b3ec push edx */
  push32((uint32_t)(EDX));
  /* 1169b3ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169b3f0 push eax */
  push32((uint32_t)(EAX));
  /* 1169b3f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169b3f4 mov edx, dword ptr [ecx*4 + 0x116ce060] */
  EDX = (r32((uint32_t)(ECX*4 + 0x116ce060)));
  /* 1169b3fb push edx */
  push32((uint32_t)(EDX));
  /* 1169b3fc push 0x116caa98 */
  push32((uint32_t)(0x116caa98u));
  /* 1169b401 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1169b406 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 1169b40c push eax */
  push32((uint32_t)(EAX));
  /* 1169b40d call 0x116a0830 */
  push32(0x1169b412u); f_116a0830();
  /* 1169b412 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169b415 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169b417 jge 0x1169b42d */
  if ((C.sf==C.of)) goto L_1169b42d;
  /* 1169b419 push 0x116ca9fc */
  push32((uint32_t)(0x116ca9fcu));
  /* 1169b41e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 1169b424 push ecx */
  push32((uint32_t)(ECX));
  /* 1169b425 call 0x1169a7d0 */
  push32(0x1169b42au); f_1169a7d0();
  /* 1169b42a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1169b42d:;
  /* 1169b42d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 1169b432 push 0x116caa74 */
  push32((uint32_t)(0x116caa74u));
  /* 1169b437 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 1169b43d push edx */
  push32((uint32_t)(EDX));
  /* 1169b43e call 0x116a0ff0 */
  push32(0x1169b443u); f_116a0ff0();
  /* 1169b443 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169b446 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 1169b44c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169b453 jne 0x1169b466 */
  if (!C.zf) goto L_1169b466;
  /* 1169b455 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1169b457 call 0x116a0d30 */
  push32(0x1169b45cu); f_116a0d30();
  /* 1169b45c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169b45f push 3 */
  push32((uint32_t)(0x3u));
  /* 1169b461 call 0x1169f290 */
  push32(0x1169b466u); f_1169f290();
L_1169b466:;
  /* 1169b466 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169b46d jne 0x1169b476 */
  if (!C.zf) goto L_1169b476;
  /* 1169b46f mov eax, 1 */
  EAX = (0x1u);
  /* 1169b474 jmp 0x1169b478 */
  goto L_1169b478;
L_1169b476:;
  /* 1169b476 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1169b478:;
  /* 1169b478 mov esp, ebp */
  ESP = (EBP);
  /* 1169b47a pop ebp */
  EBP = (pop32());
  /* 1169b47b ret  */
  ESPCHK(0x1169b170u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b67c @ 0x1169b67c (25 bytes, 7 insns) */
void f_1169b67c(void) {
  FTRACE(0x1169b67cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169b67c test eax, 0x80000 */
  { uint32_t _r=(EAX)&(0x80000u); fl_logic(_r,32); }
  /* 1169b681 je 0x1169b689 */
  if (C.zf) goto L_1169b689;
  /* 1169b683 mov eax, 7 */
  EAX = (0x7u);
  /* 1169b688 ret  */
  ESPCHK(0x1169b67cu, _esp0);
  ESP += 4; return;
L_1169b689:;
  /* 1169b689 fadd qword ptr [0x116cabd0] */
  FPU_ST(0) = FPU_ST(0) + (rf64((uint32_t)(0x116cabd0)));
  /* 1169b68f mov eax, 1 */
  EAX = (0x1u);
  /* 1169b694 ret  */
  ESPCHK(0x1169b67cu, _esp0);
  ESP += 4; return;
}

/* __fload_withFB @ 0x1169b695 (67 bytes, 21 insns) */
void f_1169b695(void) {
  FTRACE(0x1169b695u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169b695 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1169b698 and eax, 0x7ff00000 */
  { uint32_t _r=(EAX)&(0x7ff00000u); EAX = (_r); fl_logic(_r,32); }
  /* 1169b69d cmp eax, 0x7ff00000 */
  { uint32_t _a=(EAX),_b=(0x7ff00000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169b6a2 je 0x1169b6a7 */
  if (C.zf) goto L_1169b6a7;
  /* 1169b6a4 fld qword ptr [edx] */
  fpu_push(rf64((uint32_t)(EDX)));
  /* 1169b6a6 ret  */
  ESPCHK(0x1169b695u, _esp0);
  ESP += 4; return;
L_1169b6a7:;
  /* 1169b6a7 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1169b6aa sub esp, 0xa */
  { uint32_t _a=(ESP),_b=(0xau),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169b6ad or eax, 0x7fff0000 */
  { uint32_t _r=(EAX)|(0x7fff0000u); EAX = (_r); fl_logic(_r,32); }
  /* 1169b6b2 mov dword ptr [esp + 6], eax */
  w32((uint32_t)(ESP + 0x6), (EAX));
  /* 1169b6b6 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1169b6b9 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1169b6bb shld eax, ecx, 0xb */
  EAX = (sh_shld((uint32_t)(EAX),(uint32_t)(ECX),(0xbu)&0x1f,32));
  /* 1169b6bf shl ecx, 0xb */
  ECX = (sh_shl((uint32_t)(ECX), (0xbu)&0x1f, 32));
  /* 1169b6c2 mov dword ptr [esp + 4], eax */
  w32((uint32_t)(ESP + 0x4), (EAX));
  /* 1169b6c6 mov dword ptr [esp], ecx */
  w32((uint32_t)(ESP), (ECX));
  /* 1169b6c9 fld xword ptr [esp] */
  fpu_push(rf80((uint32_t)(ESP)));
  /* 1169b6cc add esp, 0xa */
  { uint32_t _a=(ESP),_b=(0xau),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169b6cf test eax, 0 */
  { uint32_t _r=(EAX)&(0x0u); fl_logic(_r,32); }
  /* 1169b6d4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1169b6d7 ret  */
  ESPCHK(0x1169b695u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b6d8 @ 0x1169b6d8 (22 bytes, 7 insns) */
void f_1169b6d8(void) {
  FTRACE(0x1169b6d8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169b6d8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1169b6dc and eax, 0x7ff00000 */
  { uint32_t _r=(EAX)&(0x7ff00000u); EAX = (_r); fl_logic(_r,32); }
  /* 1169b6e1 cmp eax, 0x7ff00000 */
  { uint32_t _a=(EAX),_b=(0x7ff00000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169b6e6 je 0x1169b6e9 */
  if (C.zf) goto L_1169b6e9;
  /* 1169b6e8 ret  */
  ESPCHK(0x1169b6d8u, _esp0);
  ESP += 4; return;
L_1169b6e9:;
  /* 1169b6e9 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1169b6ed ret  */
  ESPCHK(0x1169b6d8u, _esp0);
  ESP += 4; return;
}

/* __math_exit @ 0x1169b6fb (42 bytes, 16 insns) */
void f_1169b6fb(void) {
  FTRACE(0x1169b6fbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169b6fb mov ax, word ptr [esp] */
  AX = (r16((uint32_t)(ESP)));
  /* 1169b6ff cmp ax, 0x27f */
  { uint32_t _a=(AX),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1169b703 je 0x1169b723 */
  if (C.zf) goto L_1169b723;
  /* 1169b705 and ax, 0x20 */
  { uint32_t _r=(AX)&(0x20u); AX = (_r); fl_logic(_r,16); }
  /* 1169b709 je 0x1169b720 */
  if (C.zf) goto L_1169b720;
  /* 1169b70b wait  */
  /* wait (no observable integer/reg state) */
  /* 1169b70c fnstsw ax */
  AX = fpu_status();
  /* 1169b70e and ax, 0x20 */
  { uint32_t _r=(AX)&(0x20u); AX = (_r); fl_logic(_r,16); }
  /* 1169b712 je 0x1169b720 */
  if (C.zf) goto L_1169b720;
  /* 1169b714 mov eax, 8 */
  EAX = (0x8u);
  /* 1169b719 call 0x1169b7f7 */
  push32(0x1169b71eu); f_1169b7f7();
  /* 1169b71e pop edx */
  EDX = (pop32());
  /* 1169b71f ret  */
  ESPCHK(0x1169b6fbu, _esp0);
  ESP += 4; return;
L_1169b720:;
  /* 1169b720 fldcw word ptr [esp] */
  C.fcw = r16((uint32_t)(ESP));
L_1169b723:;
  /* 1169b723 pop edx */
  EDX = (pop32());
  /* 1169b724 ret  */
  ESPCHK(0x1169b6fbu, _esp0);
  ESP += 4; return;
}

/* FUN_1000b7e0 @ 0x1169b7e0 (23 bytes, 9 insns) */
void f_1169b7e0(void) {
  FTRACE(0x1169b7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169b7e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1169b7e1 mov ebp, esp */
  EBP = (ESP);
  /* 1169b7e3 add esp, -0x20 */
  { uint32_t _a=(ESP),_b=(0xffffffe0u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169b7e6 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1169b7e9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169b7ec mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1169b7ef mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1169b7f2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1169b7f5 jmp 0x1169b800 */
  jmp_ind(0x1169b800u); return;
}

/* __startOneArgErrorHandling @ 0x1169b7f7 (60 bytes, 23 insns) */
void f_1169b7f7(void) {
  FTRACE(0x1169b7f7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169b7f7 push ebp */
  push32((uint32_t)(EBP));
  /* 1169b7f8 mov ebp, esp */
  EBP = (ESP);
  /* 1169b7fa add esp, -0x20 */
  { uint32_t _a=(ESP),_b=(0xffffffe0u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169b7fd mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1169b800 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 1169b803 mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 1169b806 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169b809 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169b80c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1169b80f mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1169b812 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1169b815 lea ecx, [ebp - 0x20] */
  ECX = ((uint32_t)(EBP + -0x20));
  /* 1169b818 push eax */
  push32((uint32_t)(EAX));
  /* 1169b819 push ecx */
  push32((uint32_t)(ECX));
  /* 1169b81a push edx */
  push32((uint32_t)(EDX));
  /* 1169b81b call 0x116a11b0 */
  push32(0x1169b820u); f_116a11b0();
  /* 1169b820 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169b823 fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
  /* 1169b826 cmp word ptr [ebp + 8], 0x27f */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1169b82c je 0x1169b831 */
  if (C.zf) goto L_1169b831;
  /* 1169b82e fldcw word ptr [ebp + 8] */
  C.fcw = r16((uint32_t)(EBP + 0x8));
L_1169b831:;
  /* 1169b831 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1169b832 ret  */
  ESPCHK(0x1169b7f7u, _esp0);
  ESP += 4; return;
}

/* __setdefaultprecision @ 0x1169b840 (23 bytes, 8 insns) */
void f_1169b840(void) {
  FTRACE(0x1169b840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169b840 push ebp */
  push32((uint32_t)(EBP));
  /* 1169b841 mov ebp, esp */
  EBP = (ESP);
  /* 1169b843 push 0x30000 */
  push32((uint32_t)(0x30000u));
  /* 1169b848 push 0x10000 */
  push32((uint32_t)(0x10000u));
  /* 1169b84d call 0x116a13c0 */
  push32(0x1169b852u); f_116a13c0();
  /* 1169b852 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169b855 pop ebp */
  EBP = (pop32());
  /* 1169b856 ret  */
  ESPCHK(0x1169b840u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b860 @ 0x1169b860 (94 bytes, 30 insns) */
void f_1169b860(void) {
  FTRACE(0x1169b860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169b860 push ebp */
  push32((uint32_t)(EBP));
  /* 1169b861 mov ebp, esp */
  EBP = (ESP);
  /* 1169b863 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169b866 push ebx */
  push32((uint32_t)(EBX));
  /* 1169b867 push esi */
  push32((uint32_t)(ESI));
  /* 1169b868 push edi */
  push32((uint32_t)(EDI));
  /* 1169b869 mov dword ptr [ebp - 0x18], 0x80000000 */
  w32((uint32_t)(EBP + -0x18), (0x80000000u));
  /* 1169b870 mov dword ptr [ebp - 0x14], 0x4147ffff */
  w32((uint32_t)(EBP + -0x14), (0x4147ffffu));
  /* 1169b877 mov dword ptr [ebp - 8], 0xc0000000 */
  w32((uint32_t)(EBP + -0x8), (0xc0000000u));
  /* 1169b87e mov dword ptr [ebp - 4], 0x4150017e */
  w32((uint32_t)(EBP + -0x4), (0x4150017eu));
  /* 1169b885 fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
  /* 1169b888 fdiv qword ptr [ebp - 0x18] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(EBP + -0x18)));
  /* 1169b88b fmul qword ptr [ebp - 0x18] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x18)));
  /* 1169b88e fsubr qword ptr [ebp - 8] */
  FPU_ST(0) = (rf64((uint32_t)(EBP + -0x8))) - FPU_ST(0);
  /* 1169b891 fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 1169b894 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 1169b897 fcomp qword ptr [0x116cac18] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x116cac18)));
  (void)fpu_pop();
  /* 1169b89d fnstsw ax */
  AX = fpu_status();
  /* 1169b89f test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 1169b8a2 jne 0x1169b8ad */
  if (!C.zf) goto L_1169b8ad;
  /* 1169b8a4 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1169b8ab jmp 0x1169b8b4 */
  goto L_1169b8b4;
L_1169b8ad:;
  /* 1169b8ad mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
L_1169b8b4:;
  /* 1169b8b4 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1169b8b7 pop edi */
  EDI = (pop32());
  /* 1169b8b8 pop esi */
  ESI = (pop32());
  /* 1169b8b9 pop ebx */
  EBX = (pop32());
  /* 1169b8ba mov esp, ebp */
  ESP = (EBP);
  /* 1169b8bc pop ebp */
  EBP = (pop32());
  /* 1169b8bd ret  */
  ESPCHK(0x1169b860u, _esp0);
  ESP += 4; return;
}

/* __ms_p5_mp_test_fdiv @ 0x1169b8c0 (66 bytes, 22 insns) */
void f_1169b8c0(void) {
  FTRACE(0x1169b8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169b8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1169b8c1 mov ebp, esp */
  EBP = (ESP);
  /* 1169b8c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169b8c6 push 0x116cac3c */
  push32((uint32_t)(0x116cac3cu));
  /* 1169b8cb call dword ptr [0x116d3450] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3450))), 0x1169b8d1u);
  /* 1169b8d1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1169b8d4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169b8d8 je 0x1169b8f9 */
  if (C.zf) goto L_1169b8f9;
  /* 1169b8da push 0x116cac20 */
  push32((uint32_t)(0x116cac20u));
  /* 1169b8df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169b8e2 push eax */
  push32((uint32_t)(EAX));
  /* 1169b8e3 call dword ptr [0x116d3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3444))), 0x1169b8e9u);
  /* 1169b8e9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1169b8ec cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169b8f0 je 0x1169b8f9 */
  if (C.zf) goto L_1169b8f9;
  /* 1169b8f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169b8f4 call dword ptr [ebp - 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x8))), 0x1169b8f7u);
  /* 1169b8f7 jmp 0x1169b8fe */
  goto L_1169b8fe;
L_1169b8f9:;
  /* 1169b8f9 call 0x1169b860 */
  push32(0x1169b8feu); f_1169b860();
L_1169b8fe:;
  /* 1169b8fe mov esp, ebp */
  ESP = (EBP);
  /* 1169b900 pop ebp */
  EBP = (pop32());
  /* 1169b901 ret  */
  ESPCHK(0x1169b8c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b910 @ 0x1169b910 (168 bytes, 59 insns) */
void f_1169b910(void) {
  FTRACE(0x1169b910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169b910 push ebp */
  push32((uint32_t)(EBP));
  /* 1169b911 mov ebp, esp */
  EBP = (ESP);
  /* 1169b913 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169b916 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169b919 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1169b91c push ecx */
  push32((uint32_t)(ECX));
  /* 1169b91d call 0x116a18a0 */
  push32(0x1169b922u); f_116a18a0();
  /* 1169b922 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169b925 cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169b928 je 0x1169b970 */
  if (C.zf) goto L_1169b970;
L_1169b92a:;
  /* 1169b92a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169b92d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169b930 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1169b933 cmp dword ptr [0x116ce260], 1 */
  { uint32_t _a=(r32((uint32_t)(0x116ce260))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169b93a jle 0x1169b952 */
  if ((C.zf||C.sf!=C.of)) goto L_1169b952;
  /* 1169b93c push 4 */
  push32((uint32_t)(0x4u));
  /* 1169b93e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169b941 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1169b944 push ecx */
  push32((uint32_t)(ECX));
  /* 1169b945 call 0x116a17d0 */
  push32(0x1169b94au); f_116a17d0();
  /* 1169b94a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169b94d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1169b950 jmp 0x1169b96a */
  goto L_1169b96a;
L_1169b952:;
  /* 1169b952 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169b955 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1169b958 mov ecx, dword ptr [0x116ce26c] */
  ECX = (r32((uint32_t)(0x116ce26c)));
  /* 1169b95e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1169b960 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1169b964 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1169b967 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1169b96a:;
  /* 1169b96a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169b96e jne 0x1169b92a */
  if (!C.zf) goto L_1169b92a;
L_1169b970:;
  /* 1169b970 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169b973 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1169b975 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 1169b978 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169b97b mov al, byte ptr [0x116ce264] */
  AL = (r8((uint32_t)(0x116ce264)));
  /* 1169b980 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1169b982 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169b985 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169b988 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_1169b98b:;
  /* 1169b98b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169b98e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1169b990 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 1169b993 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169b996 mov dl, byte ptr [ebp - 8] */
  DL = (r8((uint32_t)(EBP + -0x8)));
  /* 1169b999 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1169b99b mov al, byte ptr [ebp - 4] */
  AL = (r8((uint32_t)(EBP + -0x4)));
  /* 1169b99e mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 1169b9a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169b9a4 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1169b9a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169b9aa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169b9ad mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1169b9b0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1169b9b2 jne 0x1169b98b */
  if (!C.zf) goto L_1169b98b;
  /* 1169b9b4 mov esp, ebp */
  ESP = (EBP);
  /* 1169b9b6 pop ebp */
  EBP = (pop32());
  /* 1169b9b7 ret  */
  ESPCHK(0x1169b910u, _esp0);
  ESP += 4; return;
}

/* __cropzeros @ 0x1169b9c0 (215 bytes, 78 insns) */
void f_1169b9c0(void) {
  FTRACE(0x1169b9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169b9c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1169b9c1 mov ebp, esp */
  EBP = (ESP);
  /* 1169b9c3 push ecx */
  push32((uint32_t)(ECX));
L_1169b9c4:;
  /* 1169b9c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169b9c7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1169b9ca test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1169b9cc je 0x1169b9ea */
  if (C.zf) goto L_1169b9ea;
  /* 1169b9ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169b9d1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1169b9d4 movsx ecx, byte ptr [0x116ce264] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x116ce264))));
  /* 1169b9db cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169b9dd je 0x1169b9ea */
  if (C.zf) goto L_1169b9ea;
  /* 1169b9df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169b9e2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169b9e5 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1169b9e8 jmp 0x1169b9c4 */
  goto L_1169b9c4;
L_1169b9ea:;
  /* 1169b9ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169b9ed movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1169b9f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169b9f3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169b9f6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1169b9f9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1169b9fb je 0x1169ba93 */
  if (C.zf) goto L_1169ba93;
L_1169ba01:;
  /* 1169ba01 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169ba04 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1169ba07 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1169ba09 je 0x1169ba2c */
  if (C.zf) goto L_1169ba2c;
  /* 1169ba0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169ba0e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1169ba11 cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ba14 je 0x1169ba2c */
  if (C.zf) goto L_1169ba2c;
  /* 1169ba16 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169ba19 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1169ba1c cmp edx, 0x45 */
  { uint32_t _a=(EDX),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ba1f je 0x1169ba2c */
  if (C.zf) goto L_1169ba2c;
  /* 1169ba21 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169ba24 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169ba27 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1169ba2a jmp 0x1169ba01 */
  goto L_1169ba01;
L_1169ba2c:;
  /* 1169ba2c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169ba2f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1169ba32 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169ba35 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169ba38 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_1169ba3b:;
  /* 1169ba3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169ba3e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1169ba41 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ba44 jne 0x1169ba51 */
  if (!C.zf) goto L_1169ba51;
  /* 1169ba46 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169ba49 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169ba4c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1169ba4f jmp 0x1169ba3b */
  goto L_1169ba3b;
L_1169ba51:;
  /* 1169ba51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169ba54 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1169ba57 movsx edx, byte ptr [0x116ce264] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x116ce264))));
  /* 1169ba5e cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ba60 jne 0x1169ba6b */
  if (!C.zf) goto L_1169ba6b;
  /* 1169ba62 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169ba65 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169ba68 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1169ba6b:;
  /* 1169ba6b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169ba6e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169ba71 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1169ba74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169ba77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169ba7a mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1169ba7c mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1169ba7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169ba81 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1169ba84 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169ba87 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169ba8a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1169ba8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169ba8f je 0x1169ba93 */
  if (C.zf) goto L_1169ba93;
  /* 1169ba91 jmp 0x1169ba6b */
  goto L_1169ba6b;
L_1169ba93:;
  /* 1169ba93 mov esp, ebp */
  ESP = (EBP);
  /* 1169ba95 pop ebp */
  EBP = (pop32());
  /* 1169ba96 ret  */
  ESPCHK(0x1169b9c0u, _esp0);
  ESP += 4; return;
}

/* __positive @ 0x1169baa0 (45 bytes, 16 insns) */
void f_1169baa0(void) {
  FTRACE(0x1169baa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169baa0 push ebp */
  push32((uint32_t)(EBP));
  /* 1169baa1 mov ebp, esp */
  EBP = (ESP);
  /* 1169baa3 push ecx */
  push32((uint32_t)(ECX));
  /* 1169baa4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169baa7 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 1169baa9 fcomp qword ptr [0x116cac48] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x116cac48)));
  (void)fpu_pop();
  /* 1169baaf fnstsw ax */
  AX = fpu_status();
  /* 1169bab1 test ah, 1 */
  { uint32_t _r=(AH)&(0x1u); fl_logic(_r,8); }
  /* 1169bab4 jne 0x1169babf */
  if (!C.zf) goto L_1169babf;
  /* 1169bab6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1169babd jmp 0x1169bac6 */
  goto L_1169bac6;
L_1169babf:;
  /* 1169babf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1169bac6:;
  /* 1169bac6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169bac9 mov esp, ebp */
  ESP = (EBP);
  /* 1169bacb pop ebp */
  EBP = (pop32());
  /* 1169bacc ret  */
  ESPCHK(0x1169baa0u, _esp0);
  ESP += 4; return;
}

/* __fassign @ 0x1169bad0 (72 bytes, 29 insns) */
void f_1169bad0(void) {
  FTRACE(0x1169bad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169bad0 push ebp */
  push32((uint32_t)(EBP));
  /* 1169bad1 mov ebp, esp */
  EBP = (ESP);
  /* 1169bad3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169bad6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169bada je 0x1169bafc */
  if (C.zf) goto L_1169bafc;
  /* 1169badc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169badf push eax */
  push32((uint32_t)(EAX));
  /* 1169bae0 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 1169bae3 push ecx */
  push32((uint32_t)(ECX));
  /* 1169bae4 call 0x116a2190 */
  push32(0x1169bae9u); f_116a2190();
  /* 1169bae9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169baec mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169baef mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169baf2 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1169baf4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169baf7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1169bafa jmp 0x1169bb14 */
  goto L_1169bb14;
L_1169bafc:;
  /* 1169bafc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169baff push edx */
  push32((uint32_t)(EDX));
  /* 1169bb00 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1169bb03 push eax */
  push32((uint32_t)(EAX));
  /* 1169bb04 call 0x116a2210 */
  push32(0x1169bb09u); f_116a2210();
  /* 1169bb09 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169bb0c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169bb0f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1169bb12 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
L_1169bb14:;
  /* 1169bb14 mov esp, ebp */
  ESP = (EBP);
  /* 1169bb16 pop ebp */
  EBP = (pop32());
  /* 1169bb17 ret  */
  ESPCHK(0x1169bad0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bb20 @ 0x1169bb20 (118 bytes, 49 insns) */
void f_1169bb20(void) {
  FTRACE(0x1169bb20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169bb20 push ebp */
  push32((uint32_t)(EBP));
  /* 1169bb21 mov ebp, esp */
  EBP = (ESP);
  /* 1169bb23 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169bb26 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1169bb29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1169bb2c lea ecx, [ebp - 0x2c] */
  ECX = ((uint32_t)(EBP + -0x2c));
  /* 1169bb2f push ecx */
  push32((uint32_t)(ECX));
  /* 1169bb30 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 1169bb33 push edx */
  push32((uint32_t)(EDX));
  /* 1169bb34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169bb37 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1169bb3a push ecx */
  push32((uint32_t)(ECX));
  /* 1169bb3b mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1169bb3d push edx */
  push32((uint32_t)(EDX));
  /* 1169bb3e call 0x116a2350 */
  push32(0x1169bb43u); f_116a2350();
  /* 1169bb43 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169bb46 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169bb49 push eax */
  push32((uint32_t)(EAX));
  /* 1169bb4a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169bb4d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169bb50 push ecx */
  push32((uint32_t)(ECX));
  /* 1169bb51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169bb54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169bb56 cmp dword ptr [edx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169bb59 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 1169bb5c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169bb5f add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169bb61 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1169bb63 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169bb67 setg dl */
  DL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 1169bb6a add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169bb6c push ecx */
  push32((uint32_t)(ECX));
  /* 1169bb6d call 0x116a2250 */
  push32(0x1169bb72u); f_116a2250();
  /* 1169bb72 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169bb75 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169bb77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169bb7a push eax */
  push32((uint32_t)(EAX));
  /* 1169bb7b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169bb7e push ecx */
  push32((uint32_t)(ECX));
  /* 1169bb7f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169bb82 push edx */
  push32((uint32_t)(EDX));
  /* 1169bb83 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169bb86 push eax */
  push32((uint32_t)(EAX));
  /* 1169bb87 call 0x1169bba0 */
  push32(0x1169bb8cu); f_1169bba0();
  /* 1169bb8c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169bb8f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169bb92 mov esp, ebp */
  ESP = (EBP);
  /* 1169bb94 pop ebp */
  EBP = (pop32());
  /* 1169bb95 ret  */
  ESPCHK(0x1169bb20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bba0 @ 0x1169bba0 (358 bytes, 128 insns) */
void f_1169bba0(void) {
  FTRACE(0x1169bba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169bba0 push ebp */
  push32((uint32_t)(EBP));
  /* 1169bba1 mov ebp, esp */
  EBP = (ESP);
  /* 1169bba3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169bba6 movsx eax, byte ptr [ebp + 0x18] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x18))));
  /* 1169bbaa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169bbac je 0x1169bbd7 */
  if (C.zf) goto L_1169bbd7;
  /* 1169bbae mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169bbb1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1169bbb3 cmp dword ptr [ecx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169bbb6 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 1169bbb9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169bbbc add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169bbbe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1169bbc1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1169bbc3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169bbc7 setg cl */
  CL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 1169bbca push ecx */
  push32((uint32_t)(ECX));
  /* 1169bbcb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169bbce push edx */
  push32((uint32_t)(EDX));
  /* 1169bbcf call 0x1169c010 */
  push32(0x1169bbd4u); f_1169c010();
  /* 1169bbd4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1169bbd7:;
  /* 1169bbd7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169bbda mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1169bbdd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169bbe0 cmp dword ptr [ecx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169bbe3 jne 0x1169bbf4 */
  if (!C.zf) goto L_1169bbf4;
  /* 1169bbe5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169bbe8 mov byte ptr [edx], 0x2d */
  w8((uint32_t)(EDX), (0x2du));
  /* 1169bbeb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169bbee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169bbf1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1169bbf4:;
  /* 1169bbf4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169bbf8 jle 0x1169bc18 */
  if ((C.zf||C.sf!=C.of)) goto L_1169bc18;
  /* 1169bbfa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169bbfd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169bc00 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1169bc03 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1169bc05 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169bc08 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169bc0b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1169bc0e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169bc11 mov al, byte ptr [0x116ce264] */
  AL = (r8((uint32_t)(0x116ce264)));
  /* 1169bc16 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
L_1169bc18:;
  /* 1169bc18 push 0x116cac50 */
  push32((uint32_t)(0x116cac50u));
  /* 1169bc1d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169bc20 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169bc23 movsx edx, byte ptr [ebp + 0x18] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x18))));
  /* 1169bc27 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1169bc29 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169bc2b inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1169bc2c add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169bc2e push ecx */
  push32((uint32_t)(ECX));
  /* 1169bc2f call 0x1169a7d0 */
  push32(0x1169bc34u); f_1169a7d0();
  /* 1169bc34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169bc37 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1169bc3a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169bc3e je 0x1169bc46 */
  if (C.zf) goto L_1169bc46;
  /* 1169bc40 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169bc43 mov byte ptr [eax], 0x45 */
  w8((uint32_t)(EAX), (0x45u));
L_1169bc46:;
  /* 1169bc46 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169bc49 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169bc4c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1169bc4f mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169bc52 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1169bc55 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1169bc58 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169bc5b je 0x1169bcff */
  if (C.zf) goto L_1169bcff;
  /* 1169bc61 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169bc64 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1169bc67 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169bc6a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1169bc6d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169bc71 jge 0x1169bc81 */
  if ((C.sf==C.of)) goto L_1169bc81;
  /* 1169bc73 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169bc76 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1169bc78 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1169bc7b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169bc7e mov byte ptr [edx], 0x2d */
  w8((uint32_t)(EDX), (0x2du));
L_1169bc81:;
  /* 1169bc81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169bc84 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169bc87 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1169bc8a cmp dword ptr [ebp - 8], 0x64 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169bc8e jl 0x1169bcb5 */
  if ((C.sf!=C.of)) goto L_1169bcb5;
  /* 1169bc90 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169bc93 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1169bc94 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 1169bc99 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1169bc9b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169bc9e mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 1169bca0 add cl, al */
  { uint32_t _a=(CL),_b=(AL),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1169bca2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169bca5 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1169bca7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169bcaa cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1169bcab mov ecx, 0x64 */
  ECX = (0x64u);
  /* 1169bcb0 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1169bcb2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1169bcb5:;
  /* 1169bcb5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169bcb8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169bcbb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1169bcbe cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169bcc2 jl 0x1169bce9 */
  if ((C.sf!=C.of)) goto L_1169bce9;
  /* 1169bcc4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169bcc7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1169bcc8 mov ecx, 0xa */
  ECX = (0xau);
  /* 1169bccd idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1169bccf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169bcd2 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 1169bcd4 add cl, al */
  { uint32_t _a=(CL),_b=(AL),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1169bcd6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169bcd9 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1169bcdb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169bcde cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1169bcdf mov ecx, 0xa */
  ECX = (0xau);
  /* 1169bce4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1169bce6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1169bce9:;
  /* 1169bce9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169bcec add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169bcef mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1169bcf2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169bcf5 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1169bcf7 add cl, byte ptr [ebp - 8] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EBP + -0x8))),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1169bcfa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169bcfd mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
L_1169bcff:;
  /* 1169bcff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169bd02 mov esp, ebp */
  ESP = (EBP);
  /* 1169bd04 pop ebp */
  EBP = (pop32());
  /* 1169bd05 ret  */
  ESPCHK(0x1169bba0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd10 @ 0x1169bd10 (106 bytes, 44 insns) */
void f_1169bd10(void) {
  FTRACE(0x1169bd10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169bd10 push ebp */
  push32((uint32_t)(EBP));
  /* 1169bd11 mov ebp, esp */
  EBP = (ESP);
  /* 1169bd13 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169bd16 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1169bd19 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1169bd1c lea ecx, [ebp - 0x2c] */
  ECX = ((uint32_t)(EBP + -0x2c));
  /* 1169bd1f push ecx */
  push32((uint32_t)(ECX));
  /* 1169bd20 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 1169bd23 push edx */
  push32((uint32_t)(EDX));
  /* 1169bd24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169bd27 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1169bd2a push ecx */
  push32((uint32_t)(ECX));
  /* 1169bd2b mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1169bd2d push edx */
  push32((uint32_t)(EDX));
  /* 1169bd2e call 0x116a2350 */
  push32(0x1169bd33u); f_116a2350();
  /* 1169bd33 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169bd36 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169bd39 push eax */
  push32((uint32_t)(EAX));
  /* 1169bd3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169bd3d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169bd40 add edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169bd43 push edx */
  push32((uint32_t)(EDX));
  /* 1169bd44 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169bd47 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1169bd49 cmp dword ptr [eax], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169bd4c sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1169bd4f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169bd52 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169bd54 push edx */
  push32((uint32_t)(EDX));
  /* 1169bd55 call 0x116a2250 */
  push32(0x1169bd5au); f_116a2250();
  /* 1169bd5a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169bd5d push 0 */
  push32((uint32_t)(0x0u));
  /* 1169bd5f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169bd62 push eax */
  push32((uint32_t)(EAX));
  /* 1169bd63 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169bd66 push ecx */
  push32((uint32_t)(ECX));
  /* 1169bd67 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169bd6a push edx */
  push32((uint32_t)(EDX));
  /* 1169bd6b call 0x1169bd80 */
  push32(0x1169bd70u); f_1169bd80();
  /* 1169bd70 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169bd73 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169bd76 mov esp, ebp */
  ESP = (EBP);
  /* 1169bd78 pop ebp */
  EBP = (pop32());
  /* 1169bd79 ret  */
  ESPCHK(0x1169bd10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd80 @ 0x1169bd80 (317 bytes, 113 insns) */
void f_1169bd80(void) {
  FTRACE(0x1169bd80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169bd80 push ebp */
  push32((uint32_t)(EBP));
  /* 1169bd81 mov ebp, esp */
  EBP = (ESP);
  /* 1169bd83 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169bd86 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169bd89 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1169bd8c sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169bd8f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1169bd92 movsx edx, byte ptr [ebp + 0x14] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x14))));
  /* 1169bd96 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1169bd98 je 0x1169bdd3 */
  if (C.zf) goto L_1169bdd3;
  /* 1169bd9a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169bd9d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1169bd9f cmp dword ptr [eax], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169bda2 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1169bda5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169bda8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169bdaa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1169bdad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169bdb0 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169bdb3 jne 0x1169bdd3 */
  if (!C.zf) goto L_1169bdd3;
  /* 1169bdb5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169bdb8 add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169bdbb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1169bdbe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1169bdc1 mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 1169bdc4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1169bdc7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169bdca mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1169bdcd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1169bdd0 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_1169bdd3:;
  /* 1169bdd3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169bdd6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1169bdd9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169bddc cmp dword ptr [eax], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169bddf jne 0x1169bdf0 */
  if (!C.zf) goto L_1169bdf0;
  /* 1169bde1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169bde4 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 1169bde7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169bdea add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169bded mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1169bdf0:;
  /* 1169bdf0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169bdf3 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169bdf7 jg 0x1169be18 */
  if ((!C.zf&&C.sf==C.of)) goto L_1169be18;
  /* 1169bdf9 push 1 */
  push32((uint32_t)(0x1u));
  /* 1169bdfb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169bdfe push ecx */
  push32((uint32_t)(ECX));
  /* 1169bdff call 0x1169c010 */
  push32(0x1169be04u); f_1169c010();
  /* 1169be04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169be07 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169be0a mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 1169be0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169be10 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169be13 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1169be16 jmp 0x1169be24 */
  goto L_1169be24;
L_1169be18:;
  /* 1169be18 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169be1b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169be1e add edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169be21 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1169be24:;
  /* 1169be24 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169be28 jle 0x1169beb6 */
  if ((C.zf||C.sf!=C.of)) goto L_1169beb6;
  /* 1169be2e push 1 */
  push32((uint32_t)(0x1u));
  /* 1169be30 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169be33 push eax */
  push32((uint32_t)(EAX));
  /* 1169be34 call 0x1169c010 */
  push32(0x1169be39u); f_1169c010();
  /* 1169be39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169be3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169be3f mov dl, byte ptr [0x116ce264] */
  DL = (r8((uint32_t)(0x116ce264)));
  /* 1169be45 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1169be47 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169be4a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169be4d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1169be50 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169be53 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169be57 jge 0x1169beb6 */
  if ((C.sf==C.of)) goto L_1169beb6;
  /* 1169be59 movsx edx, byte ptr [ebp + 0x14] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x14))));
  /* 1169be5d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1169be5f je 0x1169be6e */
  if (C.zf) goto L_1169be6e;
  /* 1169be61 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169be64 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1169be67 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1169be69 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1169be6c jmp 0x1169be94 */
  goto L_1169be94;
L_1169be6e:;
  /* 1169be6e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169be71 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1169be74 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1169be76 cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169be79 jge 0x1169be83 */
  if ((C.sf==C.of)) goto L_1169be83;
  /* 1169be7b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169be7e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1169be81 jmp 0x1169be8e */
  goto L_1169be8e;
L_1169be83:;
  /* 1169be83 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169be86 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1169be89 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1169be8b mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1169be8e:;
  /* 1169be8e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1169be91 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1169be94:;
  /* 1169be94 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169be97 push edx */
  push32((uint32_t)(EDX));
  /* 1169be98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169be9b push eax */
  push32((uint32_t)(EAX));
  /* 1169be9c call 0x1169c010 */
  push32(0x1169bea1u); f_1169c010();
  /* 1169bea1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169bea4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169bea7 push ecx */
  push32((uint32_t)(ECX));
  /* 1169bea8 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1169beaa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169bead push edx */
  push32((uint32_t)(EDX));
  /* 1169beae call 0x116a2540 */
  push32(0x1169beb3u); f_116a2540();
  /* 1169beb3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1169beb6:;
  /* 1169beb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169beb9 mov esp, ebp */
  ESP = (EBP);
  /* 1169bebb pop ebp */
  EBP = (pop32());
  /* 1169bebc ret  */
  ESPCHK(0x1169bd80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bec0 @ 0x1169bec0 (229 bytes, 89 insns) */
void f_1169bec0(void) {
  FTRACE(0x1169bec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169bec0 push ebp */
  push32((uint32_t)(EBP));
  /* 1169bec1 mov ebp, esp */
  EBP = (ESP);
  /* 1169bec3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169bec6 mov byte ptr [ebp - 0x30], 0 */
  w8((uint32_t)(EBP + -0x30), (0x0u));
  /* 1169beca lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1169becd mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 1169bed0 lea ecx, [ebp - 0x2c] */
  ECX = ((uint32_t)(EBP + -0x2c));
  /* 1169bed3 push ecx */
  push32((uint32_t)(ECX));
  /* 1169bed4 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 1169bed7 push edx */
  push32((uint32_t)(EDX));
  /* 1169bed8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169bedb mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1169bede push ecx */
  push32((uint32_t)(ECX));
  /* 1169bedf mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1169bee1 push edx */
  push32((uint32_t)(EDX));
  /* 1169bee2 call 0x116a2350 */
  push32(0x1169bee7u); f_116a2350();
  /* 1169bee7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169beea mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1169beed mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1169bef0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169bef3 mov dword ptr [ebp - 0x34], ecx */
  w32((uint32_t)(EBP + -0x34), (ECX));
  /* 1169bef6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1169bef9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169befb cmp dword ptr [edx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169befe sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 1169bf01 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169bf04 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169bf06 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1169bf09 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1169bf0c push edx */
  push32((uint32_t)(EDX));
  /* 1169bf0d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169bf10 push eax */
  push32((uint32_t)(EAX));
  /* 1169bf11 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169bf14 push ecx */
  push32((uint32_t)(ECX));
  /* 1169bf15 call 0x116a2250 */
  push32(0x1169bf1au); f_116a2250();
  /* 1169bf1a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169bf1d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1169bf20 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1169bf23 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169bf26 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1169bf28 cmp dword ptr [ebp - 0x34], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x34))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169bf2b setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 1169bf2e mov byte ptr [ebp - 0x30], cl */
  w8((uint32_t)(EBP + -0x30), (CL));
  /* 1169bf31 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1169bf34 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1169bf37 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169bf3a mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 1169bf3d cmp dword ptr [ebp - 0x34], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x34))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169bf41 jl 0x1169bf4b */
  if ((C.sf!=C.of)) goto L_1169bf4b;
  /* 1169bf43 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1169bf46 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169bf49 jl 0x1169bf67 */
  if ((C.sf!=C.of)) goto L_1169bf67;
L_1169bf4b:;
  /* 1169bf4b push 1 */
  push32((uint32_t)(0x1u));
  /* 1169bf4d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1169bf50 push edx */
  push32((uint32_t)(EDX));
  /* 1169bf51 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169bf54 push eax */
  push32((uint32_t)(EAX));
  /* 1169bf55 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169bf58 push ecx */
  push32((uint32_t)(ECX));
  /* 1169bf59 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169bf5c push edx */
  push32((uint32_t)(EDX));
  /* 1169bf5d call 0x1169bba0 */
  push32(0x1169bf62u); f_1169bba0();
  /* 1169bf62 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169bf65 jmp 0x1169bfa1 */
  goto L_1169bfa1;
L_1169bf67:;
  /* 1169bf67 movsx eax, byte ptr [ebp - 0x30] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x30))));
  /* 1169bf6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169bf6d je 0x1169bf8b */
  if (C.zf) goto L_1169bf8b;
L_1169bf6f:;
  /* 1169bf6f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169bf72 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1169bf75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169bf78 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169bf7b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1169bf7e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1169bf80 je 0x1169bf84 */
  if (C.zf) goto L_1169bf84;
  /* 1169bf82 jmp 0x1169bf6f */
  goto L_1169bf6f;
L_1169bf84:;
  /* 1169bf84 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169bf87 mov byte ptr [ecx - 2], 0 */
  w8((uint32_t)(ECX + -0x2), (0x0u));
L_1169bf8b:;
  /* 1169bf8b push 1 */
  push32((uint32_t)(0x1u));
  /* 1169bf8d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1169bf90 push edx */
  push32((uint32_t)(EDX));
  /* 1169bf91 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169bf94 push eax */
  push32((uint32_t)(EAX));
  /* 1169bf95 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169bf98 push ecx */
  push32((uint32_t)(ECX));
  /* 1169bf99 call 0x1169bd80 */
  push32(0x1169bf9eu); f_1169bd80();
  /* 1169bf9e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1169bfa1:;
  /* 1169bfa1 mov esp, ebp */
  ESP = (EBP);
  /* 1169bfa3 pop ebp */
  EBP = (pop32());
  /* 1169bfa4 ret  */
  ESPCHK(0x1169bec0u, _esp0);
  ESP += 4; return;
}

/* __cfltcvt @ 0x1169bfb0 (95 bytes, 40 insns) */
void f_1169bfb0(void) {
  FTRACE(0x1169bfb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169bfb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1169bfb1 mov ebp, esp */
  EBP = (ESP);
  /* 1169bfb3 cmp dword ptr [ebp + 0x10], 0x65 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169bfb7 je 0x1169bfbf */
  if (C.zf) goto L_1169bfbf;
  /* 1169bfb9 cmp dword ptr [ebp + 0x10], 0x45 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169bfbd jne 0x1169bfd9 */
  if (!C.zf) goto L_1169bfd9;
L_1169bfbf:;
  /* 1169bfbf mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169bfc2 push eax */
  push32((uint32_t)(EAX));
  /* 1169bfc3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169bfc6 push ecx */
  push32((uint32_t)(ECX));
  /* 1169bfc7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169bfca push edx */
  push32((uint32_t)(EDX));
  /* 1169bfcb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169bfce push eax */
  push32((uint32_t)(EAX));
  /* 1169bfcf call 0x1169bb20 */
  push32(0x1169bfd4u); f_1169bb20();
  /* 1169bfd4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169bfd7 jmp 0x1169c00d */
  goto L_1169c00d;
L_1169bfd9:;
  /* 1169bfd9 cmp dword ptr [ebp + 0x10], 0x66 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169bfdd jne 0x1169bff5 */
  if (!C.zf) goto L_1169bff5;
  /* 1169bfdf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169bfe2 push ecx */
  push32((uint32_t)(ECX));
  /* 1169bfe3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169bfe6 push edx */
  push32((uint32_t)(EDX));
  /* 1169bfe7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169bfea push eax */
  push32((uint32_t)(EAX));
  /* 1169bfeb call 0x1169bd10 */
  push32(0x1169bff0u); f_1169bd10();
  /* 1169bff0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169bff3 jmp 0x1169c00d */
  goto L_1169c00d;
L_1169bff5:;
  /* 1169bff5 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169bff8 push ecx */
  push32((uint32_t)(ECX));
  /* 1169bff9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169bffc push edx */
  push32((uint32_t)(EDX));
  /* 1169bffd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169c000 push eax */
  push32((uint32_t)(EAX));
  /* 1169c001 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169c004 push ecx */
  push32((uint32_t)(ECX));
  /* 1169c005 call 0x1169bec0 */
  push32(0x1169c00au); f_1169bec0();
  /* 1169c00a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1169c00d:;
  /* 1169c00d pop ebp */
  EBP = (pop32());
  /* 1169c00e ret  */
  ESPCHK(0x1169bfb0u, _esp0);
  ESP += 4; return;
}

/* __shift @ 0x1169c010 (46 bytes, 19 insns) */
void f_1169c010(void) {
  FTRACE(0x1169c010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169c010 push ebp */
  push32((uint32_t)(EBP));
  /* 1169c011 mov ebp, esp */
  EBP = (ESP);
  /* 1169c013 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c017 je 0x1169c03c */
  if (C.zf) goto L_1169c03c;
  /* 1169c019 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169c01c push eax */
  push32((uint32_t)(EAX));
  /* 1169c01d call 0x116a07b0 */
  push32(0x1169c022u); f_116a07b0();
  /* 1169c022 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169c025 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169c028 push eax */
  push32((uint32_t)(EAX));
  /* 1169c029 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169c02c push ecx */
  push32((uint32_t)(ECX));
  /* 1169c02d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169c030 add edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169c033 push edx */
  push32((uint32_t)(EDX));
  /* 1169c034 call 0x116a25a0 */
  push32(0x1169c039u); f_116a25a0();
  /* 1169c039 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1169c03c:;
  /* 1169c03c pop ebp */
  EBP = (pop32());
  /* 1169c03d ret  */
  ESPCHK(0x1169c010u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c040 @ 0x1169c040 (55 bytes, 16 insns) */
void f_1169c040(void) {
  FTRACE(0x1169c040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169c040 push ebp */
  push32((uint32_t)(EBP));
  /* 1169c041 mov ebp, esp */
  EBP = (ESP);
  /* 1169c043 mov eax, dword ptr [0x116ce0fc] */
  EAX = (r32((uint32_t)(0x116ce0fc)));
  /* 1169c048 push eax */
  push32((uint32_t)(EAX));
  /* 1169c049 call dword ptr [0x116d3454] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3454))), 0x1169c04fu);
  /* 1169c04f mov ecx, dword ptr [0x116ce0ec] */
  ECX = (r32((uint32_t)(0x116ce0ec)));
  /* 1169c055 push ecx */
  push32((uint32_t)(ECX));
  /* 1169c056 call dword ptr [0x116d3454] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3454))), 0x1169c05cu);
  /* 1169c05c mov edx, dword ptr [0x116ce0dc] */
  EDX = (r32((uint32_t)(0x116ce0dc)));
  /* 1169c062 push edx */
  push32((uint32_t)(EDX));
  /* 1169c063 call dword ptr [0x116d3454] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3454))), 0x1169c069u);
  /* 1169c069 mov eax, dword ptr [0x116ce0bc] */
  EAX = (r32((uint32_t)(0x116ce0bc)));
  /* 1169c06e push eax */
  push32((uint32_t)(EAX));
  /* 1169c06f call dword ptr [0x116d3454] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3454))), 0x1169c075u);
  /* 1169c075 pop ebp */
  EBP = (pop32());
  /* 1169c076 ret  */
  ESPCHK(0x1169c040u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c080 @ 0x1169c080 (159 bytes, 47 insns) */
void f_1169c080(void) {
  FTRACE(0x1169c080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169c080 push ebp */
  push32((uint32_t)(EBP));
  /* 1169c081 mov ebp, esp */
  EBP = (ESP);
  /* 1169c083 push ecx */
  push32((uint32_t)(ECX));
  /* 1169c084 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1169c08b jmp 0x1169c096 */
  goto L_1169c096;
L_1169c08d:;
  /* 1169c08d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169c090 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169c093 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1169c096:;
  /* 1169c096 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c09a jge 0x1169c0e9 */
  if ((C.sf==C.of)) goto L_1169c0e9;
  /* 1169c09c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169c09f cmp dword ptr [ecx*4 + 0x116ce0b8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x116ce0b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c0a7 je 0x1169c0e7 */
  if (C.zf) goto L_1169c0e7;
  /* 1169c0a9 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c0ad je 0x1169c0e7 */
  if (C.zf) goto L_1169c0e7;
  /* 1169c0af cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c0b3 je 0x1169c0e7 */
  if (C.zf) goto L_1169c0e7;
  /* 1169c0b5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c0b9 je 0x1169c0e7 */
  if (C.zf) goto L_1169c0e7;
  /* 1169c0bb cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c0bf je 0x1169c0e7 */
  if (C.zf) goto L_1169c0e7;
  /* 1169c0c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169c0c4 mov eax, dword ptr [edx*4 + 0x116ce0b8] */
  EAX = (r32((uint32_t)(EDX*4 + 0x116ce0b8)));
  /* 1169c0cb push eax */
  push32((uint32_t)(EAX));
  /* 1169c0cc call dword ptr [0x116d3458] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3458))), 0x1169c0d2u);
  /* 1169c0d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1169c0d4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169c0d7 mov edx, dword ptr [ecx*4 + 0x116ce0b8] */
  EDX = (r32((uint32_t)(ECX*4 + 0x116ce0b8)));
  /* 1169c0de push edx */
  push32((uint32_t)(EDX));
  /* 1169c0df call 0x1169ccb0 */
  push32(0x1169c0e4u); f_1169ccb0();
  /* 1169c0e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1169c0e7:;
  /* 1169c0e7 jmp 0x1169c08d */
  goto L_1169c08d;
L_1169c0e9:;
  /* 1169c0e9 mov eax, dword ptr [0x116ce0dc] */
  EAX = (r32((uint32_t)(0x116ce0dc)));
  /* 1169c0ee push eax */
  push32((uint32_t)(EAX));
  /* 1169c0ef call dword ptr [0x116d3458] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3458))), 0x1169c0f5u);
  /* 1169c0f5 mov ecx, dword ptr [0x116ce0ec] */
  ECX = (r32((uint32_t)(0x116ce0ec)));
  /* 1169c0fb push ecx */
  push32((uint32_t)(ECX));
  /* 1169c0fc call dword ptr [0x116d3458] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3458))), 0x1169c102u);
  /* 1169c102 mov edx, dword ptr [0x116ce0fc] */
  EDX = (r32((uint32_t)(0x116ce0fc)));
  /* 1169c108 push edx */
  push32((uint32_t)(EDX));
  /* 1169c109 call dword ptr [0x116d3458] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3458))), 0x1169c10fu);
  /* 1169c10f mov eax, dword ptr [0x116ce0bc] */
  EAX = (r32((uint32_t)(0x116ce0bc)));
  /* 1169c114 push eax */
  push32((uint32_t)(EAX));
  /* 1169c115 call dword ptr [0x116d3458] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3458))), 0x1169c11bu);
  /* 1169c11b mov esp, ebp */
  ESP = (EBP);
  /* 1169c11d pop ebp */
  EBP = (pop32());
  /* 1169c11e ret  */
  ESPCHK(0x1169c080u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c120 @ 0x1169c120 (151 bytes, 46 insns) */
void f_1169c120(void) {
  FTRACE(0x1169c120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169c120 push ebp */
  push32((uint32_t)(EBP));
  /* 1169c121 mov ebp, esp */
  EBP = (ESP);
  /* 1169c123 push ecx */
  push32((uint32_t)(ECX));
  /* 1169c124 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169c127 cmp dword ptr [eax*4 + 0x116ce0b8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x116ce0b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c12f jne 0x1169c1a2 */
  if (!C.zf) goto L_1169c1a2;
  /* 1169c131 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 1169c136 push 0x116cac58 */
  push32((uint32_t)(0x116cac58u));
  /* 1169c13b push 2 */
  push32((uint32_t)(0x2u));
  /* 1169c13d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1169c13f call 0x1169c220 */
  push32(0x1169c144u); f_1169c220();
  /* 1169c144 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169c147 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1169c14a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c14e jne 0x1169c15a */
  if (!C.zf) goto L_1169c15a;
  /* 1169c150 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1169c152 call 0x1169ac90 */
  push32(0x1169c157u); f_1169ac90();
  /* 1169c157 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1169c15a:;
  /* 1169c15a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1169c15c call 0x1169c120 */
  push32(0x1169c161u); f_1169c120();
  /* 1169c161 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169c164 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169c167 cmp dword ptr [ecx*4 + 0x116ce0b8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x116ce0b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c16f jne 0x1169c18a */
  if (!C.zf) goto L_1169c18a;
  /* 1169c171 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169c174 push edx */
  push32((uint32_t)(EDX));
  /* 1169c175 call dword ptr [0x116d3454] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3454))), 0x1169c17bu);
  /* 1169c17b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169c17e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169c181 mov dword ptr [eax*4 + 0x116ce0b8], ecx */
  w32((uint32_t)(EAX*4 + 0x116ce0b8), (ECX));
  /* 1169c188 jmp 0x1169c198 */
  goto L_1169c198;
L_1169c18a:;
  /* 1169c18a push 2 */
  push32((uint32_t)(0x2u));
  /* 1169c18c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169c18f push edx */
  push32((uint32_t)(EDX));
  /* 1169c190 call 0x1169ccb0 */
  push32(0x1169c195u); f_1169ccb0();
  /* 1169c195 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1169c198:;
  /* 1169c198 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1169c19a call 0x1169c1c0 */
  push32(0x1169c19fu); f_1169c1c0();
  /* 1169c19f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1169c1a2:;
  /* 1169c1a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169c1a5 mov ecx, dword ptr [eax*4 + 0x116ce0b8] */
  ECX = (r32((uint32_t)(EAX*4 + 0x116ce0b8)));
  /* 1169c1ac push ecx */
  push32((uint32_t)(ECX));
  /* 1169c1ad call dword ptr [0x116d345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d345c))), 0x1169c1b3u);
  /* 1169c1b3 mov esp, ebp */
  ESP = (EBP);
  /* 1169c1b5 pop ebp */
  EBP = (pop32());
  /* 1169c1b6 ret  */
  ESPCHK(0x1169c120u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1c0 @ 0x1169c1c0 (22 bytes, 8 insns) */
void f_1169c1c0(void) {
  FTRACE(0x1169c1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169c1c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1169c1c1 mov ebp, esp */
  EBP = (ESP);
  /* 1169c1c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169c1c6 mov ecx, dword ptr [eax*4 + 0x116ce0b8] */
  ECX = (r32((uint32_t)(EAX*4 + 0x116ce0b8)));
  /* 1169c1cd push ecx */
  push32((uint32_t)(ECX));
  /* 1169c1ce call dword ptr [0x116d3438] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3438))), 0x1169c1d4u);
  /* 1169c1d4 pop ebp */
  EBP = (pop32());
  /* 1169c1d5 ret  */
  ESPCHK(0x1169c1c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1e0 @ 0x1169c1e0 (26 bytes, 10 insns) */
void f_1169c1e0(void) {
  FTRACE(0x1169c1e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169c1e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1169c1e1 mov ebp, esp */
  EBP = (ESP);
  /* 1169c1e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169c1e6 push eax */
  push32((uint32_t)(EAX));
  /* 1169c1e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169c1e9 call dword ptr [0x116d3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3410))), 0x1169c1efu);
  /* 1169c1ef push 0xff */
  push32((uint32_t)(0xffu));
  /* 1169c1f4 call dword ptr [0x116d3414] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3414))), 0x1169c1fau);
  /* 1169c1fa pop ebp */
  EBP = (pop32());
  /* 1169c1fb ret  */
  ESPCHK(0x1169c1e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c200 @ 0x1169c200 (29 bytes, 13 insns) */
void f_1169c200(void) {
  FTRACE(0x1169c200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169c200 push ebp */
  push32((uint32_t)(EBP));
  /* 1169c201 mov ebp, esp */
  EBP = (ESP);
  /* 1169c203 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169c205 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169c207 push 1 */
  push32((uint32_t)(0x1u));
  /* 1169c209 mov eax, dword ptr [0x116d0740] */
  EAX = (r32((uint32_t)(0x116d0740)));
  /* 1169c20e push eax */
  push32((uint32_t)(EAX));
  /* 1169c20f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169c212 push ecx */
  push32((uint32_t)(ECX));
  /* 1169c213 call 0x1169c270 */
  push32(0x1169c218u); f_1169c270();
  /* 1169c218 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169c21b pop ebp */
  EBP = (pop32());
  /* 1169c21c ret  */
  ESPCHK(0x1169c200u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c220 @ 0x1169c220 (35 bytes, 16 insns) */
void f_1169c220(void) {
  FTRACE(0x1169c220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169c220 push ebp */
  push32((uint32_t)(EBP));
  /* 1169c221 mov ebp, esp */
  EBP = (ESP);
  /* 1169c223 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169c226 push eax */
  push32((uint32_t)(EAX));
  /* 1169c227 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169c22a push ecx */
  push32((uint32_t)(ECX));
  /* 1169c22b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169c22e push edx */
  push32((uint32_t)(EDX));
  /* 1169c22f mov eax, dword ptr [0x116d0740] */
  EAX = (r32((uint32_t)(0x116d0740)));
  /* 1169c234 push eax */
  push32((uint32_t)(EAX));
  /* 1169c235 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169c238 push ecx */
  push32((uint32_t)(ECX));
  /* 1169c239 call 0x1169c270 */
  push32(0x1169c23eu); f_1169c270();
  /* 1169c23e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169c241 pop ebp */
  EBP = (pop32());
  /* 1169c242 ret  */
  ESPCHK(0x1169c220u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c250 @ 0x1169c250 (27 bytes, 13 insns) */
void f_1169c250(void) {
  FTRACE(0x1169c250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169c250 push ebp */
  push32((uint32_t)(EBP));
  /* 1169c251 mov ebp, esp */
  EBP = (ESP);
  /* 1169c253 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169c255 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169c257 push 1 */
  push32((uint32_t)(0x1u));
  /* 1169c259 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169c25c push eax */
  push32((uint32_t)(EAX));
  /* 1169c25d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169c260 push ecx */
  push32((uint32_t)(ECX));
  /* 1169c261 call 0x1169c270 */
  push32(0x1169c266u); f_1169c270();
  /* 1169c266 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169c269 pop ebp */
  EBP = (pop32());
  /* 1169c26a ret  */
  ESPCHK(0x1169c250u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c270 @ 0x1169c270 (94 bytes, 38 insns) */
void f_1169c270(void) {
  FTRACE(0x1169c270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169c270 push ebp */
  push32((uint32_t)(EBP));
  /* 1169c271 mov ebp, esp */
  EBP = (ESP);
  /* 1169c273 push ecx */
  push32((uint32_t)(ECX));
L_1169c274:;
  /* 1169c274 push 9 */
  push32((uint32_t)(0x9u));
  /* 1169c276 call 0x1169c120 */
  push32(0x1169c27bu); f_1169c120();
  /* 1169c27b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169c27e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169c281 push eax */
  push32((uint32_t)(EAX));
  /* 1169c282 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169c285 push ecx */
  push32((uint32_t)(ECX));
  /* 1169c286 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169c289 push edx */
  push32((uint32_t)(EDX));
  /* 1169c28a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169c28d push eax */
  push32((uint32_t)(EAX));
  /* 1169c28e call 0x1169c2f0 */
  push32(0x1169c293u); f_1169c2f0();
  /* 1169c293 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169c296 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1169c299 push 9 */
  push32((uint32_t)(0x9u));
  /* 1169c29b call 0x1169c1c0 */
  push32(0x1169c2a0u); f_1169c1c0();
  /* 1169c2a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169c2a3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c2a7 jne 0x1169c2af */
  if (!C.zf) goto L_1169c2af;
  /* 1169c2a9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c2ad jne 0x1169c2b4 */
  if (!C.zf) goto L_1169c2b4;
L_1169c2af:;
  /* 1169c2af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169c2b2 jmp 0x1169c2ca */
  goto L_1169c2ca;
L_1169c2b4:;
  /* 1169c2b4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169c2b7 push ecx */
  push32((uint32_t)(ECX));
  /* 1169c2b8 call 0x116a2930 */
  push32(0x1169c2bdu); f_116a2930();
  /* 1169c2bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169c2c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169c2c2 jne 0x1169c2c8 */
  if (!C.zf) goto L_1169c2c8;
  /* 1169c2c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169c2c6 jmp 0x1169c2ca */
  goto L_1169c2ca;
L_1169c2c8:;
  /* 1169c2c8 jmp 0x1169c274 */
  goto L_1169c274;
L_1169c2ca:;
  /* 1169c2ca mov esp, ebp */
  ESP = (EBP);
  /* 1169c2cc pop ebp */
  EBP = (pop32());
  /* 1169c2cd ret  */
  ESPCHK(0x1169c270u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c2d0 @ 0x1169c2d0 (23 bytes, 11 insns) */
void f_1169c2d0(void) {
  FTRACE(0x1169c2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169c2d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1169c2d1 mov ebp, esp */
  EBP = (ESP);
  /* 1169c2d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169c2d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169c2d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 1169c2d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169c2dc push eax */
  push32((uint32_t)(EAX));
  /* 1169c2dd call 0x1169c2f0 */
  push32(0x1169c2e2u); f_1169c2f0();
  /* 1169c2e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169c2e5 pop ebp */
  EBP = (pop32());
  /* 1169c2e6 ret  */
  ESPCHK(0x1169c2d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c2f0 @ 0x1169c2f0 (787 bytes, 254 insns) */
void f_1169c2f0(void) {
  FTRACE(0x1169c2f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169c2f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1169c2f1 mov ebp, esp */
  EBP = (ESP);
  /* 1169c2f3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169c2f6 push ebx */
  push32((uint32_t)(EBX));
  /* 1169c2f7 push esi */
  push32((uint32_t)(ESI));
  /* 1169c2f8 push edi */
  push32((uint32_t)(EDI));
  /* 1169c2f9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1169c300 mov eax, dword ptr [0x116ce178] */
  EAX = (r32((uint32_t)(0x116ce178)));
  /* 1169c305 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1169c308 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169c30a je 0x1169c33c */
  if (C.zf) goto L_1169c33c;
L_1169c30c:;
  /* 1169c30c call 0x1169d3c0 */
  push32(0x1169c311u); f_1169d3c0();
  /* 1169c311 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169c313 jne 0x1169c336 */
  if (!C.zf) goto L_1169c336;
  /* 1169c315 push 0x116cad48 */
  push32((uint32_t)(0x116cad48u));
  /* 1169c31a push 0 */
  push32((uint32_t)(0x0u));
  /* 1169c31c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 1169c321 push 0x116cad3c */
  push32((uint32_t)(0x116cad3cu));
  /* 1169c326 push 2 */
  push32((uint32_t)(0x2u));
  /* 1169c328 call 0x1169ade0 */
  push32(0x1169c32du); f_1169ade0();
  /* 1169c32d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169c330 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c333 jne 0x1169c336 */
  if (!C.zf) goto L_1169c336;
  /* 1169c335 int3  */
  x86_unimpl("int3 @ 0x1169c335");
L_1169c336:;
  /* 1169c336 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1169c338 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1169c33a jne 0x1169c30c */
  if (!C.zf) goto L_1169c30c;
L_1169c33c:;
  /* 1169c33c mov edx, dword ptr [0x116ce17c] */
  EDX = (r32((uint32_t)(0x116ce17c)));
  /* 1169c342 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1169c345 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169c348 cmp eax, dword ptr [0x116ce180] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x116ce180))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c34e jne 0x1169c351 */
  if (!C.zf) goto L_1169c351;
  /* 1169c350 int3  */
  x86_unimpl("int3 @ 0x1169c350");
L_1169c351:;
  /* 1169c351 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169c354 push ecx */
  push32((uint32_t)(ECX));
  /* 1169c355 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169c358 push edx */
  push32((uint32_t)(EDX));
  /* 1169c359 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169c35c push eax */
  push32((uint32_t)(EAX));
  /* 1169c35d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169c360 push ecx */
  push32((uint32_t)(ECX));
  /* 1169c361 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169c364 push edx */
  push32((uint32_t)(EDX));
  /* 1169c365 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169c367 push 1 */
  push32((uint32_t)(0x1u));
  /* 1169c369 call dword ptr [0x116ce4b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116ce4b0))), 0x1169c36fu);
  /* 1169c36f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169c372 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169c374 jne 0x1169c3d4 */
  if (!C.zf) goto L_1169c3d4;
  /* 1169c376 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c37a je 0x1169c3a7 */
  if (C.zf) goto L_1169c3a7;
L_1169c37c:;
  /* 1169c37c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169c37f push eax */
  push32((uint32_t)(EAX));
  /* 1169c380 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169c383 push ecx */
  push32((uint32_t)(ECX));
  /* 1169c384 push 0x116cad04 */
  push32((uint32_t)(0x116cad04u));
  /* 1169c389 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169c38b push 0 */
  push32((uint32_t)(0x0u));
  /* 1169c38d push 0 */
  push32((uint32_t)(0x0u));
  /* 1169c38f push 0 */
  push32((uint32_t)(0x0u));
  /* 1169c391 call 0x1169ade0 */
  push32(0x1169c396u); f_1169ade0();
  /* 1169c396 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169c399 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c39c jne 0x1169c39f */
  if (!C.zf) goto L_1169c39f;
  /* 1169c39e int3  */
  x86_unimpl("int3 @ 0x1169c39e");
L_1169c39f:;
  /* 1169c39f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1169c3a1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1169c3a3 jne 0x1169c37c */
  if (!C.zf) goto L_1169c37c;
  /* 1169c3a5 jmp 0x1169c3cd */
  goto L_1169c3cd;
L_1169c3a7:;
  /* 1169c3a7 push 0x116cace0 */
  push32((uint32_t)(0x116cace0u));
  /* 1169c3ac push 0x116cacdc */
  push32((uint32_t)(0x116cacdcu));
  /* 1169c3b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169c3b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169c3b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169c3b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169c3b9 call 0x1169ade0 */
  push32(0x1169c3beu); f_1169ade0();
  /* 1169c3be add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169c3c1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c3c4 jne 0x1169c3c7 */
  if (!C.zf) goto L_1169c3c7;
  /* 1169c3c6 int3  */
  x86_unimpl("int3 @ 0x1169c3c6");
L_1169c3c7:;
  /* 1169c3c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169c3c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169c3cb jne 0x1169c3a7 */
  if (!C.zf) goto L_1169c3a7;
L_1169c3cd:;
  /* 1169c3cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169c3cf jmp 0x1169c5fc */
  goto L_1169c5fc;
L_1169c3d4:;
  /* 1169c3d4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169c3d7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1169c3dd cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c3e0 je 0x1169c3f6 */
  if (C.zf) goto L_1169c3f6;
  /* 1169c3e2 mov edx, dword ptr [0x116ce178] */
  EDX = (r32((uint32_t)(0x116ce178)));
  /* 1169c3e8 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1169c3eb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1169c3ed jne 0x1169c3f6 */
  if (!C.zf) goto L_1169c3f6;
  /* 1169c3ef mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_1169c3f6:;
  /* 1169c3f6 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c3fa ja 0x1169c407 */
  if ((!C.cf&&!C.zf)) goto L_1169c407;
  /* 1169c3fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169c3ff add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169c402 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c405 jbe 0x1169c433 */
  if ((C.cf||C.zf)) goto L_1169c433;
L_1169c407:;
  /* 1169c407 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169c40a push ecx */
  push32((uint32_t)(ECX));
  /* 1169c40b push 0x116cacb8 */
  push32((uint32_t)(0x116cacb8u));
  /* 1169c410 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169c412 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169c414 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169c416 push 1 */
  push32((uint32_t)(0x1u));
  /* 1169c418 call 0x1169ade0 */
  push32(0x1169c41du); f_1169ade0();
  /* 1169c41d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169c420 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c423 jne 0x1169c426 */
  if (!C.zf) goto L_1169c426;
  /* 1169c425 int3  */
  x86_unimpl("int3 @ 0x1169c425");
L_1169c426:;
  /* 1169c426 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1169c428 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1169c42a jne 0x1169c407 */
  if (!C.zf) goto L_1169c407;
  /* 1169c42c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169c42e jmp 0x1169c5fc */
  goto L_1169c5fc;
L_1169c433:;
  /* 1169c433 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169c436 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1169c43b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c43e je 0x1169c480 */
  if (C.zf) goto L_1169c480;
  /* 1169c440 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c444 je 0x1169c480 */
  if (C.zf) goto L_1169c480;
  /* 1169c446 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169c449 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1169c44f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c452 je 0x1169c480 */
  if (C.zf) goto L_1169c480;
  /* 1169c454 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c458 je 0x1169c480 */
  if (C.zf) goto L_1169c480;
L_1169c45a:;
  /* 1169c45a push 0x116cac84 */
  push32((uint32_t)(0x116cac84u));
  /* 1169c45f push 0x116cacdc */
  push32((uint32_t)(0x116cacdcu));
  /* 1169c464 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169c466 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169c468 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169c46a push 1 */
  push32((uint32_t)(0x1u));
  /* 1169c46c call 0x1169ade0 */
  push32(0x1169c471u); f_1169ade0();
  /* 1169c471 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169c474 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c477 jne 0x1169c47a */
  if (!C.zf) goto L_1169c47a;
  /* 1169c479 int3  */
  x86_unimpl("int3 @ 0x1169c479");
L_1169c47a:;
  /* 1169c47a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1169c47c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1169c47e jne 0x1169c45a */
  if (!C.zf) goto L_1169c45a;
L_1169c480:;
  /* 1169c480 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169c483 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169c486 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1169c489 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1169c48c push ecx */
  push32((uint32_t)(ECX));
  /* 1169c48d call 0x116a29e0 */
  push32(0x1169c492u); f_116a29e0();
  /* 1169c492 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169c495 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1169c498 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c49c jne 0x1169c4a5 */
  if (!C.zf) goto L_1169c4a5;
  /* 1169c49e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169c4a0 jmp 0x1169c5fc */
  goto L_1169c5fc;
L_1169c4a5:;
  /* 1169c4a5 mov edx, dword ptr [0x116ce17c] */
  EDX = (r32((uint32_t)(0x116ce17c)));
  /* 1169c4ab add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169c4ae mov dword ptr [0x116ce17c], edx */
  w32((uint32_t)(0x116ce17c), (EDX));
  /* 1169c4b4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c4b8 je 0x1169c503 */
  if (C.zf) goto L_1169c503;
  /* 1169c4ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169c4bd mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1169c4c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169c4c6 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1169c4cd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169c4d0 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 1169c4d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169c4da mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 1169c4e1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169c4e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169c4e7 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 1169c4ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169c4ed mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 1169c4f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169c4f7 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 1169c4fe jmp 0x1169c5a3 */
  goto L_1169c5a3;
L_1169c503:;
  /* 1169c503 mov edx, dword ptr [0x116d05bc] */
  EDX = (r32((uint32_t)(0x116d05bc)));
  /* 1169c509 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169c50c mov dword ptr [0x116d05bc], edx */
  w32((uint32_t)(0x116d05bc), (EDX));
  /* 1169c512 mov eax, dword ptr [0x116d05c4] */
  EAX = (r32((uint32_t)(0x116d05c4)));
  /* 1169c517 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169c51a mov dword ptr [0x116d05c4], eax */
  w32((uint32_t)(0x116d05c4), (EAX));
  /* 1169c51f mov ecx, dword ptr [0x116d05c4] */
  ECX = (r32((uint32_t)(0x116d05c4)));
  /* 1169c525 cmp ecx, dword ptr [0x116d05c8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x116d05c8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c52b jbe 0x1169c539 */
  if ((C.cf||C.zf)) goto L_1169c539;
  /* 1169c52d mov edx, dword ptr [0x116d05c4] */
  EDX = (r32((uint32_t)(0x116d05c4)));
  /* 1169c533 mov dword ptr [0x116d05c8], edx */
  w32((uint32_t)(0x116d05c8), (EDX));
L_1169c539:;
  /* 1169c539 cmp dword ptr [0x116d05c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d05c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c540 je 0x1169c54f */
  if (C.zf) goto L_1169c54f;
  /* 1169c542 mov eax, dword ptr [0x116d05c0] */
  EAX = (r32((uint32_t)(0x116d05c0)));
  /* 1169c547 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169c54a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1169c54d jmp 0x1169c558 */
  goto L_1169c558;
L_1169c54f:;
  /* 1169c54f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169c552 mov dword ptr [0x116d05b8], edx */
  w32((uint32_t)(0x116d05b8), (EDX));
L_1169c558:;
  /* 1169c558 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169c55b mov ecx, dword ptr [0x116d05c0] */
  ECX = (r32((uint32_t)(0x116d05c0)));
  /* 1169c561 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1169c563 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169c566 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 1169c56d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169c570 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169c573 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1169c576 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169c579 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169c57c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 1169c57f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169c582 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169c585 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 1169c588 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169c58b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169c58e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 1169c591 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169c594 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169c597 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 1169c59a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169c59d mov dword ptr [0x116d05c0], ecx */
  w32((uint32_t)(0x116d05c0), (ECX));
L_1169c5a3:;
  /* 1169c5a3 push 4 */
  push32((uint32_t)(0x4u));
  /* 1169c5a5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1169c5a7 mov dl, byte ptr [0x116ce184] */
  DL = (r8((uint32_t)(0x116ce184)));
  /* 1169c5ad push edx */
  push32((uint32_t)(EDX));
  /* 1169c5ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169c5b1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169c5b4 push eax */
  push32((uint32_t)(EAX));
  /* 1169c5b5 call 0x116a2540 */
  push32(0x1169c5bau); f_116a2540();
  /* 1169c5ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169c5bd push 4 */
  push32((uint32_t)(0x4u));
  /* 1169c5bf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1169c5c1 mov cl, byte ptr [0x116ce184] */
  CL = (r8((uint32_t)(0x116ce184)));
  /* 1169c5c7 push ecx */
  push32((uint32_t)(ECX));
  /* 1169c5c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169c5cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169c5ce lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 1169c5d2 push ecx */
  push32((uint32_t)(ECX));
  /* 1169c5d3 call 0x116a2540 */
  push32(0x1169c5d8u); f_116a2540();
  /* 1169c5d8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169c5db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169c5de push edx */
  push32((uint32_t)(EDX));
  /* 1169c5df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169c5e1 mov al, byte ptr [0x116ce186] */
  AL = (r8((uint32_t)(0x116ce186)));
  /* 1169c5e6 push eax */
  push32((uint32_t)(EAX));
  /* 1169c5e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169c5ea add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169c5ed push ecx */
  push32((uint32_t)(ECX));
  /* 1169c5ee call 0x116a2540 */
  push32(0x1169c5f3u); f_116a2540();
  /* 1169c5f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169c5f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169c5f9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1169c5fc:;
  /* 1169c5fc pop edi */
  EDI = (pop32());
  /* 1169c5fd pop esi */
  ESI = (pop32());
  /* 1169c5fe pop ebx */
  EBX = (pop32());
  /* 1169c5ff mov esp, ebp */
  ESP = (EBP);
  /* 1169c601 pop ebp */
  EBP = (pop32());
  /* 1169c602 ret  */
  ESPCHK(0x1169c2f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c610 @ 0x1169c610 (27 bytes, 13 insns) */
void f_1169c610(void) {
  FTRACE(0x1169c610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169c610 push ebp */
  push32((uint32_t)(EBP));
  /* 1169c611 mov ebp, esp */
  EBP = (ESP);
  /* 1169c613 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169c615 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169c617 push 1 */
  push32((uint32_t)(0x1u));
  /* 1169c619 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169c61c push eax */
  push32((uint32_t)(EAX));
  /* 1169c61d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169c620 push ecx */
  push32((uint32_t)(ECX));
  /* 1169c621 call 0x1169c630 */
  push32(0x1169c626u); f_1169c630();
  /* 1169c626 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169c629 pop ebp */
  EBP = (pop32());
  /* 1169c62a ret  */
  ESPCHK(0x1169c610u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x1169c630 (96 bytes, 37 insns) */
void f_1169c630(void) {
  FTRACE(0x1169c630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169c630 push ebp */
  push32((uint32_t)(EBP));
  /* 1169c631 mov ebp, esp */
  EBP = (ESP);
  /* 1169c633 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169c636 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169c639 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1169c63d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1169c640 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169c643 push ecx */
  push32((uint32_t)(ECX));
  /* 1169c644 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169c647 push edx */
  push32((uint32_t)(EDX));
  /* 1169c648 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169c64b push eax */
  push32((uint32_t)(EAX));
  /* 1169c64c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169c64f push ecx */
  push32((uint32_t)(ECX));
  /* 1169c650 call 0x1169c220 */
  push32(0x1169c655u); f_1169c220();
  /* 1169c655 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169c658 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1169c65b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c65f je 0x1169c689 */
  if (C.zf) goto L_1169c689;
  /* 1169c661 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169c664 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1169c667 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1169c66a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169c66d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1169c670:;
  /* 1169c670 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1169c673 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c676 jae 0x1169c689 */
  if (!C.cf) goto L_1169c689;
  /* 1169c678 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1169c67b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1169c67e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1169c681 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169c684 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1169c687 jmp 0x1169c670 */
  goto L_1169c670;
L_1169c689:;
  /* 1169c689 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169c68c mov esp, ebp */
  ESP = (EBP);
  /* 1169c68e pop ebp */
  EBP = (pop32());
  /* 1169c68f ret  */
  ESPCHK(0x1169c630u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c690 @ 0x1169c690 (27 bytes, 13 insns) */
void f_1169c690(void) {
  FTRACE(0x1169c690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169c690 push ebp */
  push32((uint32_t)(EBP));
  /* 1169c691 mov ebp, esp */
  EBP = (ESP);
  /* 1169c693 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169c695 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169c697 push 1 */
  push32((uint32_t)(0x1u));
  /* 1169c699 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169c69c push eax */
  push32((uint32_t)(EAX));
  /* 1169c69d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169c6a0 push ecx */
  push32((uint32_t)(ECX));
  /* 1169c6a1 call 0x1169c6b0 */
  push32(0x1169c6a6u); f_1169c6b0();
  /* 1169c6a6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169c6a9 pop ebp */
  EBP = (pop32());
  /* 1169c6aa ret  */
  ESPCHK(0x1169c690u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6b0 @ 0x1169c6b0 (64 bytes, 27 insns) */
void f_1169c6b0(void) {
  FTRACE(0x1169c6b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169c6b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1169c6b1 mov ebp, esp */
  EBP = (ESP);
  /* 1169c6b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1169c6b4 push 9 */
  push32((uint32_t)(0x9u));
  /* 1169c6b6 call 0x1169c120 */
  push32(0x1169c6bbu); f_1169c120();
  /* 1169c6bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169c6be push 1 */
  push32((uint32_t)(0x1u));
  /* 1169c6c0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169c6c3 push eax */
  push32((uint32_t)(EAX));
  /* 1169c6c4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169c6c7 push ecx */
  push32((uint32_t)(ECX));
  /* 1169c6c8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169c6cb push edx */
  push32((uint32_t)(EDX));
  /* 1169c6cc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169c6cf push eax */
  push32((uint32_t)(EAX));
  /* 1169c6d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169c6d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1169c6d4 call 0x1169c6f0 */
  push32(0x1169c6d9u); f_1169c6f0();
  /* 1169c6d9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169c6dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1169c6df push 9 */
  push32((uint32_t)(0x9u));
  /* 1169c6e1 call 0x1169c1c0 */
  push32(0x1169c6e6u); f_1169c1c0();
  /* 1169c6e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169c6e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169c6ec mov esp, ebp */
  ESP = (EBP);
  /* 1169c6ee pop ebp */
  EBP = (pop32());
  /* 1169c6ef ret  */
  ESPCHK(0x1169c6b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6f0 @ 0x1169c6f0 (1297 bytes, 431 insns) */
void f_1169c6f0(void) {
  FTRACE(0x1169c6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169c6f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1169c6f1 mov ebp, esp */
  EBP = (ESP);
  /* 1169c6f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169c6f6 push ebx */
  push32((uint32_t)(EBX));
  /* 1169c6f7 push esi */
  push32((uint32_t)(ESI));
  /* 1169c6f8 push edi */
  push32((uint32_t)(EDI));
  /* 1169c6f9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1169c700 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c704 jne 0x1169c723 */
  if (!C.zf) goto L_1169c723;
  /* 1169c706 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169c709 push eax */
  push32((uint32_t)(EAX));
  /* 1169c70a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169c70d push ecx */
  push32((uint32_t)(ECX));
  /* 1169c70e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169c711 push edx */
  push32((uint32_t)(EDX));
  /* 1169c712 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169c715 push eax */
  push32((uint32_t)(EAX));
  /* 1169c716 call 0x1169c220 */
  push32(0x1169c71bu); f_1169c220();
  /* 1169c71b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169c71e jmp 0x1169cbfa */
  goto L_1169cbfa;
L_1169c723:;
  /* 1169c723 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c727 je 0x1169c746 */
  if (C.zf) goto L_1169c746;
  /* 1169c729 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c72d jne 0x1169c746 */
  if (!C.zf) goto L_1169c746;
  /* 1169c72f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169c732 push ecx */
  push32((uint32_t)(ECX));
  /* 1169c733 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169c736 push edx */
  push32((uint32_t)(EDX));
  /* 1169c737 call 0x1169ccb0 */
  push32(0x1169c73cu); f_1169ccb0();
  /* 1169c73c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169c73f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169c741 jmp 0x1169cbfa */
  goto L_1169cbfa;
L_1169c746:;
  /* 1169c746 mov eax, dword ptr [0x116ce178] */
  EAX = (r32((uint32_t)(0x116ce178)));
  /* 1169c74b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1169c74e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169c750 je 0x1169c782 */
  if (C.zf) goto L_1169c782;
L_1169c752:;
  /* 1169c752 call 0x1169d3c0 */
  push32(0x1169c757u); f_1169d3c0();
  /* 1169c757 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169c759 jne 0x1169c77c */
  if (!C.zf) goto L_1169c77c;
  /* 1169c75b push 0x116cad48 */
  push32((uint32_t)(0x116cad48u));
  /* 1169c760 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169c762 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 1169c767 push 0x116cad3c */
  push32((uint32_t)(0x116cad3cu));
  /* 1169c76c push 2 */
  push32((uint32_t)(0x2u));
  /* 1169c76e call 0x1169ade0 */
  push32(0x1169c773u); f_1169ade0();
  /* 1169c773 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169c776 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c779 jne 0x1169c77c */
  if (!C.zf) goto L_1169c77c;
  /* 1169c77b int3  */
  x86_unimpl("int3 @ 0x1169c77b");
L_1169c77c:;
  /* 1169c77c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1169c77e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1169c780 jne 0x1169c752 */
  if (!C.zf) goto L_1169c752;
L_1169c782:;
  /* 1169c782 mov edx, dword ptr [0x116ce17c] */
  EDX = (r32((uint32_t)(0x116ce17c)));
  /* 1169c788 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1169c78b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1169c78e cmp eax, dword ptr [0x116ce180] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x116ce180))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c794 jne 0x1169c797 */
  if (!C.zf) goto L_1169c797;
  /* 1169c796 int3  */
  x86_unimpl("int3 @ 0x1169c796");
L_1169c797:;
  /* 1169c797 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169c79a push ecx */
  push32((uint32_t)(ECX));
  /* 1169c79b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169c79e push edx */
  push32((uint32_t)(EDX));
  /* 1169c79f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1169c7a2 push eax */
  push32((uint32_t)(EAX));
  /* 1169c7a3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169c7a6 push ecx */
  push32((uint32_t)(ECX));
  /* 1169c7a7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169c7aa push edx */
  push32((uint32_t)(EDX));
  /* 1169c7ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169c7ae push eax */
  push32((uint32_t)(EAX));
  /* 1169c7af push 2 */
  push32((uint32_t)(0x2u));
  /* 1169c7b1 call dword ptr [0x116ce4b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116ce4b0))), 0x1169c7b7u);
  /* 1169c7b7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169c7ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169c7bc jne 0x1169c81c */
  if (!C.zf) goto L_1169c81c;
  /* 1169c7be cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c7c2 je 0x1169c7ef */
  if (C.zf) goto L_1169c7ef;
L_1169c7c4:;
  /* 1169c7c4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169c7c7 push ecx */
  push32((uint32_t)(ECX));
  /* 1169c7c8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169c7cb push edx */
  push32((uint32_t)(EDX));
  /* 1169c7cc push 0x116caec4 */
  push32((uint32_t)(0x116caec4u));
  /* 1169c7d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169c7d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169c7d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169c7d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169c7d9 call 0x1169ade0 */
  push32(0x1169c7deu); f_1169ade0();
  /* 1169c7de add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169c7e1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c7e4 jne 0x1169c7e7 */
  if (!C.zf) goto L_1169c7e7;
  /* 1169c7e6 int3  */
  x86_unimpl("int3 @ 0x1169c7e6");
L_1169c7e7:;
  /* 1169c7e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169c7e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169c7eb jne 0x1169c7c4 */
  if (!C.zf) goto L_1169c7c4;
  /* 1169c7ed jmp 0x1169c815 */
  goto L_1169c815;
L_1169c7ef:;
  /* 1169c7ef push 0x116caea0 */
  push32((uint32_t)(0x116caea0u));
  /* 1169c7f4 push 0x116cacdc */
  push32((uint32_t)(0x116cacdcu));
  /* 1169c7f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169c7fb push 0 */
  push32((uint32_t)(0x0u));
  /* 1169c7fd push 0 */
  push32((uint32_t)(0x0u));
  /* 1169c7ff push 0 */
  push32((uint32_t)(0x0u));
  /* 1169c801 call 0x1169ade0 */
  push32(0x1169c806u); f_1169ade0();
  /* 1169c806 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169c809 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c80c jne 0x1169c80f */
  if (!C.zf) goto L_1169c80f;
  /* 1169c80e int3  */
  x86_unimpl("int3 @ 0x1169c80e");
L_1169c80f:;
  /* 1169c80f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1169c811 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1169c813 jne 0x1169c7ef */
  if (!C.zf) goto L_1169c7ef;
L_1169c815:;
  /* 1169c815 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169c817 jmp 0x1169cbfa */
  goto L_1169cbfa;
L_1169c81c:;
  /* 1169c81c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c820 jbe 0x1169c84e */
  if ((C.cf||C.zf)) goto L_1169c84e;
L_1169c822:;
  /* 1169c822 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169c825 push edx */
  push32((uint32_t)(EDX));
  /* 1169c826 push 0x116cae70 */
  push32((uint32_t)(0x116cae70u));
  /* 1169c82b push 0 */
  push32((uint32_t)(0x0u));
  /* 1169c82d push 0 */
  push32((uint32_t)(0x0u));
  /* 1169c82f push 0 */
  push32((uint32_t)(0x0u));
  /* 1169c831 push 1 */
  push32((uint32_t)(0x1u));
  /* 1169c833 call 0x1169ade0 */
  push32(0x1169c838u); f_1169ade0();
  /* 1169c838 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169c83b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c83e jne 0x1169c841 */
  if (!C.zf) goto L_1169c841;
  /* 1169c840 int3  */
  x86_unimpl("int3 @ 0x1169c840");
L_1169c841:;
  /* 1169c841 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169c843 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169c845 jne 0x1169c822 */
  if (!C.zf) goto L_1169c822;
  /* 1169c847 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169c849 jmp 0x1169cbfa */
  goto L_1169cbfa;
L_1169c84e:;
  /* 1169c84e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c852 je 0x1169c896 */
  if (C.zf) goto L_1169c896;
  /* 1169c854 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169c857 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1169c85d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c860 je 0x1169c896 */
  if (C.zf) goto L_1169c896;
  /* 1169c862 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169c865 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1169c86b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c86e je 0x1169c896 */
  if (C.zf) goto L_1169c896;
L_1169c870:;
  /* 1169c870 push 0x116cac84 */
  push32((uint32_t)(0x116cac84u));
  /* 1169c875 push 0x116cacdc */
  push32((uint32_t)(0x116cacdcu));
  /* 1169c87a push 0 */
  push32((uint32_t)(0x0u));
  /* 1169c87c push 0 */
  push32((uint32_t)(0x0u));
  /* 1169c87e push 0 */
  push32((uint32_t)(0x0u));
  /* 1169c880 push 1 */
  push32((uint32_t)(0x1u));
  /* 1169c882 call 0x1169ade0 */
  push32(0x1169c887u); f_1169ade0();
  /* 1169c887 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169c88a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c88d jne 0x1169c890 */
  if (!C.zf) goto L_1169c890;
  /* 1169c88f int3  */
  x86_unimpl("int3 @ 0x1169c88f");
L_1169c890:;
  /* 1169c890 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169c892 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169c894 jne 0x1169c870 */
  if (!C.zf) goto L_1169c870;
L_1169c896:;
  /* 1169c896 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169c899 push ecx */
  push32((uint32_t)(ECX));
  /* 1169c89a call 0x1169d820 */
  push32(0x1169c89fu); f_1169d820();
  /* 1169c89f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169c8a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169c8a4 jne 0x1169c8c7 */
  if (!C.zf) goto L_1169c8c7;
  /* 1169c8a6 push 0x116cae4c */
  push32((uint32_t)(0x116cae4cu));
  /* 1169c8ab push 0 */
  push32((uint32_t)(0x0u));
  /* 1169c8ad push 0x261 */
  push32((uint32_t)(0x261u));
  /* 1169c8b2 push 0x116cad3c */
  push32((uint32_t)(0x116cad3cu));
  /* 1169c8b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1169c8b9 call 0x1169ade0 */
  push32(0x1169c8beu); f_1169ade0();
  /* 1169c8be add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169c8c1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c8c4 jne 0x1169c8c7 */
  if (!C.zf) goto L_1169c8c7;
  /* 1169c8c6 int3  */
  x86_unimpl("int3 @ 0x1169c8c6");
L_1169c8c7:;
  /* 1169c8c7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1169c8c9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1169c8cb jne 0x1169c896 */
  if (!C.zf) goto L_1169c896;
  /* 1169c8cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169c8d0 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169c8d3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1169c8d6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169c8d9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c8dd jne 0x1169c8e6 */
  if (!C.zf) goto L_1169c8e6;
  /* 1169c8df mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_1169c8e6:;
  /* 1169c8e6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c8ea je 0x1169c92a */
  if (C.zf) goto L_1169c92a;
L_1169c8ec:;
  /* 1169c8ec mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169c8ef cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c8f6 jne 0x1169c901 */
  if (!C.zf) goto L_1169c901;
  /* 1169c8f8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169c8fb cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c8ff je 0x1169c922 */
  if (C.zf) goto L_1169c922;
L_1169c901:;
  /* 1169c901 push 0x116cae04 */
  push32((uint32_t)(0x116cae04u));
  /* 1169c906 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169c908 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 1169c90d push 0x116cad3c */
  push32((uint32_t)(0x116cad3cu));
  /* 1169c912 push 2 */
  push32((uint32_t)(0x2u));
  /* 1169c914 call 0x1169ade0 */
  push32(0x1169c919u); f_1169ade0();
  /* 1169c919 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169c91c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c91f jne 0x1169c922 */
  if (!C.zf) goto L_1169c922;
  /* 1169c921 int3  */
  x86_unimpl("int3 @ 0x1169c921");
L_1169c922:;
  /* 1169c922 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1169c924 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1169c926 jne 0x1169c8ec */
  if (!C.zf) goto L_1169c8ec;
  /* 1169c928 jmp 0x1169c98e */
  goto L_1169c98e;
L_1169c92a:;
  /* 1169c92a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169c92d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1169c930 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1169c935 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c938 jne 0x1169c94f */
  if (!C.zf) goto L_1169c94f;
  /* 1169c93a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169c93d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1169c943 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c946 jne 0x1169c94f */
  if (!C.zf) goto L_1169c94f;
  /* 1169c948 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_1169c94f:;
  /* 1169c94f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169c952 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1169c955 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1169c95a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169c95d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1169c963 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c965 je 0x1169c988 */
  if (C.zf) goto L_1169c988;
  /* 1169c967 push 0x116cadc8 */
  push32((uint32_t)(0x116cadc8u));
  /* 1169c96c push 0 */
  push32((uint32_t)(0x0u));
  /* 1169c96e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 1169c973 push 0x116cad3c */
  push32((uint32_t)(0x116cad3cu));
  /* 1169c978 push 2 */
  push32((uint32_t)(0x2u));
  /* 1169c97a call 0x1169ade0 */
  push32(0x1169c97fu); f_1169ade0();
  /* 1169c97f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169c982 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c985 jne 0x1169c988 */
  if (!C.zf) goto L_1169c988;
  /* 1169c987 int3  */
  x86_unimpl("int3 @ 0x1169c987");
L_1169c988:;
  /* 1169c988 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1169c98a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1169c98c jne 0x1169c94f */
  if (!C.zf) goto L_1169c94f;
L_1169c98e:;
  /* 1169c98e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c992 je 0x1169c9b9 */
  if (C.zf) goto L_1169c9b9;
  /* 1169c994 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169c997 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169c99a push eax */
  push32((uint32_t)(EAX));
  /* 1169c99b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169c99e push ecx */
  push32((uint32_t)(ECX));
  /* 1169c99f call 0x116a2b10 */
  push32(0x1169c9a4u); f_116a2b10();
  /* 1169c9a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169c9a7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1169c9aa cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c9ae jne 0x1169c9b7 */
  if (!C.zf) goto L_1169c9b7;
  /* 1169c9b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169c9b2 jmp 0x1169cbfa */
  goto L_1169cbfa;
L_1169c9b7:;
  /* 1169c9b7 jmp 0x1169c9dc */
  goto L_1169c9dc;
L_1169c9b9:;
  /* 1169c9b9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169c9bc add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169c9bf push edx */
  push32((uint32_t)(EDX));
  /* 1169c9c0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169c9c3 push eax */
  push32((uint32_t)(EAX));
  /* 1169c9c4 call 0x116a2a60 */
  push32(0x1169c9c9u); f_116a2a60();
  /* 1169c9c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169c9cc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1169c9cf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c9d3 jne 0x1169c9dc */
  if (!C.zf) goto L_1169c9dc;
  /* 1169c9d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169c9d7 jmp 0x1169cbfa */
  goto L_1169cbfa;
L_1169c9dc:;
  /* 1169c9dc mov ecx, dword ptr [0x116ce17c] */
  ECX = (r32((uint32_t)(0x116ce17c)));
  /* 1169c9e2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169c9e5 mov dword ptr [0x116ce17c], ecx */
  w32((uint32_t)(0x116ce17c), (ECX));
  /* 1169c9eb cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169c9ef jne 0x1169ca47 */
  if (!C.zf) goto L_1169ca47;
  /* 1169c9f1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1169c9f4 mov eax, dword ptr [0x116d05bc] */
  EAX = (r32((uint32_t)(0x116d05bc)));
  /* 1169c9f9 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169c9fc mov dword ptr [0x116d05bc], eax */
  w32((uint32_t)(0x116d05bc), (EAX));
  /* 1169ca01 mov ecx, dword ptr [0x116d05bc] */
  ECX = (r32((uint32_t)(0x116d05bc)));
  /* 1169ca07 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169ca0a mov dword ptr [0x116d05bc], ecx */
  w32((uint32_t)(0x116d05bc), (ECX));
  /* 1169ca10 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1169ca13 mov eax, dword ptr [0x116d05c4] */
  EAX = (r32((uint32_t)(0x116d05c4)));
  /* 1169ca18 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169ca1b mov dword ptr [0x116d05c4], eax */
  w32((uint32_t)(0x116d05c4), (EAX));
  /* 1169ca20 mov ecx, dword ptr [0x116d05c4] */
  ECX = (r32((uint32_t)(0x116d05c4)));
  /* 1169ca26 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169ca29 mov dword ptr [0x116d05c4], ecx */
  w32((uint32_t)(0x116d05c4), (ECX));
  /* 1169ca2f mov edx, dword ptr [0x116d05c4] */
  EDX = (r32((uint32_t)(0x116d05c4)));
  /* 1169ca35 cmp edx, dword ptr [0x116d05c8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x116d05c8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ca3b jbe 0x1169ca47 */
  if ((C.cf||C.zf)) goto L_1169ca47;
  /* 1169ca3d mov eax, dword ptr [0x116d05c4] */
  EAX = (r32((uint32_t)(0x116d05c4)));
  /* 1169ca42 mov dword ptr [0x116d05c8], eax */
  w32((uint32_t)(0x116d05c8), (EAX));
L_1169ca47:;
  /* 1169ca47 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1169ca4a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169ca4d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1169ca50 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1169ca53 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169ca56 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ca59 jbe 0x1169ca7f */
  if ((C.cf||C.zf)) goto L_1169ca7f;
  /* 1169ca5b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1169ca5e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169ca61 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169ca64 push edx */
  push32((uint32_t)(EDX));
  /* 1169ca65 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169ca67 mov al, byte ptr [0x116ce186] */
  AL = (r8((uint32_t)(0x116ce186)));
  /* 1169ca6c push eax */
  push32((uint32_t)(EAX));
  /* 1169ca6d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1169ca70 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169ca73 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169ca76 push edx */
  push32((uint32_t)(EDX));
  /* 1169ca77 call 0x116a2540 */
  push32(0x1169ca7cu); f_116a2540();
  /* 1169ca7c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1169ca7f:;
  /* 1169ca7f push 4 */
  push32((uint32_t)(0x4u));
  /* 1169ca81 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169ca83 mov al, byte ptr [0x116ce184] */
  AL = (r8((uint32_t)(0x116ce184)));
  /* 1169ca88 push eax */
  push32((uint32_t)(EAX));
  /* 1169ca89 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169ca8c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169ca8f push ecx */
  push32((uint32_t)(ECX));
  /* 1169ca90 call 0x116a2540 */
  push32(0x1169ca95u); f_116a2540();
  /* 1169ca95 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169ca98 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ca9c jne 0x1169cab9 */
  if (!C.zf) goto L_1169cab9;
  /* 1169ca9e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1169caa1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169caa4 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1169caa7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1169caaa mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169caad mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 1169cab0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1169cab3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1169cab6 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_1169cab9:;
  /* 1169cab9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1169cabc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169cabf mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_1169cac2:;
  /* 1169cac2 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169cac6 jne 0x1169caf7 */
  if (!C.zf) goto L_1169caf7;
  /* 1169cac8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169cacc jne 0x1169cad6 */
  if (!C.zf) goto L_1169cad6;
  /* 1169cace mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1169cad1 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169cad4 je 0x1169caf7 */
  if (C.zf) goto L_1169caf7;
L_1169cad6:;
  /* 1169cad6 push 0x116cad94 */
  push32((uint32_t)(0x116cad94u));
  /* 1169cadb push 0 */
  push32((uint32_t)(0x0u));
  /* 1169cadd push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 1169cae2 push 0x116cad3c */
  push32((uint32_t)(0x116cad3cu));
  /* 1169cae7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1169cae9 call 0x1169ade0 */
  push32(0x1169caeeu); f_1169ade0();
  /* 1169caee add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169caf1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169caf4 jne 0x1169caf7 */
  if (!C.zf) goto L_1169caf7;
  /* 1169caf6 int3  */
  x86_unimpl("int3 @ 0x1169caf6");
L_1169caf7:;
  /* 1169caf7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1169caf9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1169cafb jne 0x1169cac2 */
  if (!C.zf) goto L_1169cac2;
  /* 1169cafd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1169cb00 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169cb03 je 0x1169cb0b */
  if (C.zf) goto L_1169cb0b;
  /* 1169cb05 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169cb09 je 0x1169cb13 */
  if (C.zf) goto L_1169cb13;
L_1169cb0b:;
  /* 1169cb0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169cb0e jmp 0x1169cbfa */
  goto L_1169cbfa;
L_1169cb13:;
  /* 1169cb13 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1169cb16 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169cb19 je 0x1169cb2b */
  if (C.zf) goto L_1169cb2b;
  /* 1169cb1b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1169cb1e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1169cb20 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1169cb23 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1169cb26 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1169cb29 jmp 0x1169cb67 */
  goto L_1169cb67;
L_1169cb2b:;
  /* 1169cb2b mov eax, dword ptr [0x116d05b8] */
  EAX = (r32((uint32_t)(0x116d05b8)));
  /* 1169cb30 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169cb33 je 0x1169cb56 */
  if (C.zf) goto L_1169cb56;
  /* 1169cb35 push 0x116cad78 */
  push32((uint32_t)(0x116cad78u));
  /* 1169cb3a push 0 */
  push32((uint32_t)(0x0u));
  /* 1169cb3c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 1169cb41 push 0x116cad3c */
  push32((uint32_t)(0x116cad3cu));
  /* 1169cb46 push 2 */
  push32((uint32_t)(0x2u));
  /* 1169cb48 call 0x1169ade0 */
  push32(0x1169cb4du); f_1169ade0();
  /* 1169cb4d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169cb50 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169cb53 jne 0x1169cb56 */
  if (!C.zf) goto L_1169cb56;
  /* 1169cb55 int3  */
  x86_unimpl("int3 @ 0x1169cb55");
L_1169cb56:;
  /* 1169cb56 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1169cb58 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1169cb5a jne 0x1169cb2b */
  if (!C.zf) goto L_1169cb2b;
  /* 1169cb5c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1169cb5f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1169cb62 mov dword ptr [0x116d05b8], eax */
  w32((uint32_t)(0x116d05b8), (EAX));
L_1169cb67:;
  /* 1169cb67 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1169cb6a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169cb6e je 0x1169cb7f */
  if (C.zf) goto L_1169cb7f;
  /* 1169cb70 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1169cb73 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1169cb76 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1169cb79 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1169cb7b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1169cb7d jmp 0x1169cbba */
  goto L_1169cbba;
L_1169cb7f:;
  /* 1169cb7f mov eax, dword ptr [0x116d05c0] */
  EAX = (r32((uint32_t)(0x116d05c0)));
  /* 1169cb84 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169cb87 je 0x1169cbaa */
  if (C.zf) goto L_1169cbaa;
  /* 1169cb89 push 0x116cad5c */
  push32((uint32_t)(0x116cad5cu));
  /* 1169cb8e push 0 */
  push32((uint32_t)(0x0u));
  /* 1169cb90 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 1169cb95 push 0x116cad3c */
  push32((uint32_t)(0x116cad3cu));
  /* 1169cb9a push 2 */
  push32((uint32_t)(0x2u));
  /* 1169cb9c call 0x1169ade0 */
  push32(0x1169cba1u); f_1169ade0();
  /* 1169cba1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169cba4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169cba7 jne 0x1169cbaa */
  if (!C.zf) goto L_1169cbaa;
  /* 1169cba9 int3  */
  x86_unimpl("int3 @ 0x1169cba9");
L_1169cbaa:;
  /* 1169cbaa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1169cbac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1169cbae jne 0x1169cb7f */
  if (!C.zf) goto L_1169cb7f;
  /* 1169cbb0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1169cbb3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1169cbb5 mov dword ptr [0x116d05c0], eax */
  w32((uint32_t)(0x116d05c0), (EAX));
L_1169cbba:;
  /* 1169cbba cmp dword ptr [0x116d05c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d05c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169cbc1 je 0x1169cbd1 */
  if (C.zf) goto L_1169cbd1;
  /* 1169cbc3 mov ecx, dword ptr [0x116d05c0] */
  ECX = (r32((uint32_t)(0x116d05c0)));
  /* 1169cbc9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1169cbcc mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1169cbcf jmp 0x1169cbd9 */
  goto L_1169cbd9;
L_1169cbd1:;
  /* 1169cbd1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1169cbd4 mov dword ptr [0x116d05b8], eax */
  w32((uint32_t)(0x116d05b8), (EAX));
L_1169cbd9:;
  /* 1169cbd9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1169cbdc mov edx, dword ptr [0x116d05c0] */
  EDX = (r32((uint32_t)(0x116d05c0)));
  /* 1169cbe2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1169cbe4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1169cbe7 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1169cbee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1169cbf1 mov dword ptr [0x116d05c0], ecx */
  w32((uint32_t)(0x116d05c0), (ECX));
  /* 1169cbf7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1169cbfa:;
  /* 1169cbfa pop edi */
  EDI = (pop32());
  /* 1169cbfb pop esi */
  ESI = (pop32());
  /* 1169cbfc pop ebx */
  EBX = (pop32());
  /* 1169cbfd mov esp, ebp */
  ESP = (EBP);
  /* 1169cbff pop ebp */
  EBP = (pop32());
  /* 1169cc00 ret  */
  ESPCHK(0x1169c6f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc10 @ 0x1169cc10 (27 bytes, 13 insns) */
void f_1169cc10(void) {
  FTRACE(0x1169cc10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169cc10 push ebp */
  push32((uint32_t)(EBP));
  /* 1169cc11 mov ebp, esp */
  EBP = (ESP);
  /* 1169cc13 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169cc15 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169cc17 push 1 */
  push32((uint32_t)(0x1u));
  /* 1169cc19 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169cc1c push eax */
  push32((uint32_t)(EAX));
  /* 1169cc1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169cc20 push ecx */
  push32((uint32_t)(ECX));
  /* 1169cc21 call 0x1169cc30 */
  push32(0x1169cc26u); f_1169cc30();
  /* 1169cc26 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169cc29 pop ebp */
  EBP = (pop32());
  /* 1169cc2a ret  */
  ESPCHK(0x1169cc10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc30 @ 0x1169cc30 (64 bytes, 27 insns) */
void f_1169cc30(void) {
  FTRACE(0x1169cc30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169cc30 push ebp */
  push32((uint32_t)(EBP));
  /* 1169cc31 mov ebp, esp */
  EBP = (ESP);
  /* 1169cc33 push ecx */
  push32((uint32_t)(ECX));
  /* 1169cc34 push 9 */
  push32((uint32_t)(0x9u));
  /* 1169cc36 call 0x1169c120 */
  push32(0x1169cc3bu); f_1169c120();
  /* 1169cc3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169cc3e push 0 */
  push32((uint32_t)(0x0u));
  /* 1169cc40 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169cc43 push eax */
  push32((uint32_t)(EAX));
  /* 1169cc44 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169cc47 push ecx */
  push32((uint32_t)(ECX));
  /* 1169cc48 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169cc4b push edx */
  push32((uint32_t)(EDX));
  /* 1169cc4c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169cc4f push eax */
  push32((uint32_t)(EAX));
  /* 1169cc50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169cc53 push ecx */
  push32((uint32_t)(ECX));
  /* 1169cc54 call 0x1169c6f0 */
  push32(0x1169cc59u); f_1169c6f0();
  /* 1169cc59 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169cc5c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1169cc5f push 9 */
  push32((uint32_t)(0x9u));
  /* 1169cc61 call 0x1169c1c0 */
  push32(0x1169cc66u); f_1169c1c0();
  /* 1169cc66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169cc69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169cc6c mov esp, ebp */
  ESP = (EBP);
  /* 1169cc6e pop ebp */
  EBP = (pop32());
  /* 1169cc6f ret  */
  ESPCHK(0x1169cc30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc70 @ 0x1169cc70 (19 bytes, 9 insns) */
void f_1169cc70(void) {
  FTRACE(0x1169cc70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169cc70 push ebp */
  push32((uint32_t)(EBP));
  /* 1169cc71 mov ebp, esp */
  EBP = (ESP);
  /* 1169cc73 push 1 */
  push32((uint32_t)(0x1u));
  /* 1169cc75 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169cc78 push eax */
  push32((uint32_t)(EAX));
  /* 1169cc79 call 0x1169ccb0 */
  push32(0x1169cc7eu); f_1169ccb0();
  /* 1169cc7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169cc81 pop ebp */
  EBP = (pop32());
  /* 1169cc82 ret  */
  ESPCHK(0x1169cc70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc90 @ 0x1169cc90 (19 bytes, 9 insns) */
void f_1169cc90(void) {
  FTRACE(0x1169cc90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169cc90 push ebp */
  push32((uint32_t)(EBP));
  /* 1169cc91 mov ebp, esp */
  EBP = (ESP);
  /* 1169cc93 push 1 */
  push32((uint32_t)(0x1u));
  /* 1169cc95 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169cc98 push eax */
  push32((uint32_t)(EAX));
  /* 1169cc99 call 0x1169cce0 */
  push32(0x1169cc9eu); f_1169cce0();
  /* 1169cc9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169cca1 pop ebp */
  EBP = (pop32());
  /* 1169cca2 ret  */
  ESPCHK(0x1169cc90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ccb0 @ 0x1169ccb0 (41 bytes, 16 insns) */
void f_1169ccb0(void) {
  FTRACE(0x1169ccb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169ccb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1169ccb1 mov ebp, esp */
  EBP = (ESP);
  /* 1169ccb3 push 9 */
  push32((uint32_t)(0x9u));
  /* 1169ccb5 call 0x1169c120 */
  push32(0x1169ccbau); f_1169c120();
  /* 1169ccba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169ccbd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169ccc0 push eax */
  push32((uint32_t)(EAX));
  /* 1169ccc1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169ccc4 push ecx */
  push32((uint32_t)(ECX));
  /* 1169ccc5 call 0x1169cce0 */
  push32(0x1169cccau); f_1169cce0();
  /* 1169ccca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169cccd push 9 */
  push32((uint32_t)(0x9u));
  /* 1169cccf call 0x1169c1c0 */
  push32(0x1169ccd4u); f_1169c1c0();
  /* 1169ccd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169ccd7 pop ebp */
  EBP = (pop32());
  /* 1169ccd8 ret  */
  ESPCHK(0x1169ccb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cce0 @ 0x1169cce0 (1004 bytes, 342 insns) */
void f_1169cce0(void) {
  FTRACE(0x1169cce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169cce0 push ebp */
  push32((uint32_t)(EBP));
  /* 1169cce1 mov ebp, esp */
  EBP = (ESP);
  /* 1169cce3 push ecx */
  push32((uint32_t)(ECX));
  /* 1169cce4 push ebx */
  push32((uint32_t)(EBX));
  /* 1169cce5 push esi */
  push32((uint32_t)(ESI));
  /* 1169cce6 push edi */
  push32((uint32_t)(EDI));
  /* 1169cce7 mov eax, dword ptr [0x116ce178] */
  EAX = (r32((uint32_t)(0x116ce178)));
  /* 1169ccec and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1169ccef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169ccf1 je 0x1169cd23 */
  if (C.zf) goto L_1169cd23;
L_1169ccf3:;
  /* 1169ccf3 call 0x1169d3c0 */
  push32(0x1169ccf8u); f_1169d3c0();
  /* 1169ccf8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169ccfa jne 0x1169cd1d */
  if (!C.zf) goto L_1169cd1d;
  /* 1169ccfc push 0x116cad48 */
  push32((uint32_t)(0x116cad48u));
  /* 1169cd01 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169cd03 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 1169cd08 push 0x116cad3c */
  push32((uint32_t)(0x116cad3cu));
  /* 1169cd0d push 2 */
  push32((uint32_t)(0x2u));
  /* 1169cd0f call 0x1169ade0 */
  push32(0x1169cd14u); f_1169ade0();
  /* 1169cd14 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169cd17 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169cd1a jne 0x1169cd1d */
  if (!C.zf) goto L_1169cd1d;
  /* 1169cd1c int3  */
  x86_unimpl("int3 @ 0x1169cd1c");
L_1169cd1d:;
  /* 1169cd1d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1169cd1f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1169cd21 jne 0x1169ccf3 */
  if (!C.zf) goto L_1169ccf3;
L_1169cd23:;
  /* 1169cd23 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169cd27 jne 0x1169cd2e */
  if (!C.zf) goto L_1169cd2e;
  /* 1169cd29 jmp 0x1169d0c5 */
  goto L_1169d0c5;
L_1169cd2e:;
  /* 1169cd2e push 0 */
  push32((uint32_t)(0x0u));
  /* 1169cd30 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169cd32 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169cd34 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169cd37 push edx */
  push32((uint32_t)(EDX));
  /* 1169cd38 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169cd3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169cd3d push eax */
  push32((uint32_t)(EAX));
  /* 1169cd3e push 3 */
  push32((uint32_t)(0x3u));
  /* 1169cd40 call dword ptr [0x116ce4b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116ce4b0))), 0x1169cd46u);
  /* 1169cd46 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169cd49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169cd4b jne 0x1169cd78 */
  if (!C.zf) goto L_1169cd78;
L_1169cd4d:;
  /* 1169cd4d push 0x116cafe4 */
  push32((uint32_t)(0x116cafe4u));
  /* 1169cd52 push 0x116cacdc */
  push32((uint32_t)(0x116cacdcu));
  /* 1169cd57 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169cd59 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169cd5b push 0 */
  push32((uint32_t)(0x0u));
  /* 1169cd5d push 0 */
  push32((uint32_t)(0x0u));
  /* 1169cd5f call 0x1169ade0 */
  push32(0x1169cd64u); f_1169ade0();
  /* 1169cd64 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169cd67 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169cd6a jne 0x1169cd6d */
  if (!C.zf) goto L_1169cd6d;
  /* 1169cd6c int3  */
  x86_unimpl("int3 @ 0x1169cd6c");
L_1169cd6d:;
  /* 1169cd6d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1169cd6f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1169cd71 jne 0x1169cd4d */
  if (!C.zf) goto L_1169cd4d;
  /* 1169cd73 jmp 0x1169d0c5 */
  goto L_1169d0c5;
L_1169cd78:;
  /* 1169cd78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169cd7b push edx */
  push32((uint32_t)(EDX));
  /* 1169cd7c call 0x1169d820 */
  push32(0x1169cd81u); f_1169d820();
  /* 1169cd81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169cd84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169cd86 jne 0x1169cda9 */
  if (!C.zf) goto L_1169cda9;
  /* 1169cd88 push 0x116cae4c */
  push32((uint32_t)(0x116cae4cu));
  /* 1169cd8d push 0 */
  push32((uint32_t)(0x0u));
  /* 1169cd8f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 1169cd94 push 0x116cad3c */
  push32((uint32_t)(0x116cad3cu));
  /* 1169cd99 push 2 */
  push32((uint32_t)(0x2u));
  /* 1169cd9b call 0x1169ade0 */
  push32(0x1169cda0u); f_1169ade0();
  /* 1169cda0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169cda3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169cda6 jne 0x1169cda9 */
  if (!C.zf) goto L_1169cda9;
  /* 1169cda8 int3  */
  x86_unimpl("int3 @ 0x1169cda8");
L_1169cda9:;
  /* 1169cda9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169cdab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169cdad jne 0x1169cd78 */
  if (!C.zf) goto L_1169cd78;
  /* 1169cdaf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169cdb2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169cdb5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1169cdb8:;
  /* 1169cdb8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169cdbb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1169cdbe and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1169cdc3 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169cdc6 je 0x1169ce0b */
  if (C.zf) goto L_1169ce0b;
  /* 1169cdc8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169cdcb cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169cdcf je 0x1169ce0b */
  if (C.zf) goto L_1169ce0b;
  /* 1169cdd1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169cdd4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1169cdd7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1169cddc cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169cddf je 0x1169ce0b */
  if (C.zf) goto L_1169ce0b;
  /* 1169cde1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169cde4 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169cde8 je 0x1169ce0b */
  if (C.zf) goto L_1169ce0b;
  /* 1169cdea push 0x116ca968 */
  push32((uint32_t)(0x116ca968u));
  /* 1169cdef push 0 */
  push32((uint32_t)(0x0u));
  /* 1169cdf1 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 1169cdf6 push 0x116cad3c */
  push32((uint32_t)(0x116cad3cu));
  /* 1169cdfb push 2 */
  push32((uint32_t)(0x2u));
  /* 1169cdfd call 0x1169ade0 */
  push32(0x1169ce02u); f_1169ade0();
  /* 1169ce02 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169ce05 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ce08 jne 0x1169ce0b */
  if (!C.zf) goto L_1169ce0b;
  /* 1169ce0a int3  */
  x86_unimpl("int3 @ 0x1169ce0a");
L_1169ce0b:;
  /* 1169ce0b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1169ce0d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1169ce0f jne 0x1169cdb8 */
  if (!C.zf) goto L_1169cdb8;
  /* 1169ce11 mov eax, dword ptr [0x116ce178] */
  EAX = (r32((uint32_t)(0x116ce178)));
  /* 1169ce16 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1169ce19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169ce1b jne 0x1169cee6 */
  if (!C.zf) goto L_1169cee6;
  /* 1169ce21 push 4 */
  push32((uint32_t)(0x4u));
  /* 1169ce23 mov cl, byte ptr [0x116ce184] */
  CL = (r8((uint32_t)(0x116ce184)));
  /* 1169ce29 push ecx */
  push32((uint32_t)(ECX));
  /* 1169ce2a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169ce2d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169ce30 push edx */
  push32((uint32_t)(EDX));
  /* 1169ce31 call 0x1169d330 */
  push32(0x1169ce36u); f_1169d330();
  /* 1169ce36 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169ce39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169ce3b jne 0x1169ce80 */
  if (!C.zf) goto L_1169ce80;
L_1169ce3d:;
  /* 1169ce3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169ce40 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169ce43 push eax */
  push32((uint32_t)(EAX));
  /* 1169ce44 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169ce47 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1169ce4a push edx */
  push32((uint32_t)(EDX));
  /* 1169ce4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169ce4e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1169ce51 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1169ce57 mov edx, dword ptr [ecx*4 + 0x116ce188] */
  EDX = (r32((uint32_t)(ECX*4 + 0x116ce188)));
  /* 1169ce5e push edx */
  push32((uint32_t)(EDX));
  /* 1169ce5f push 0x116cafb8 */
  push32((uint32_t)(0x116cafb8u));
  /* 1169ce64 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169ce66 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169ce68 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169ce6a push 1 */
  push32((uint32_t)(0x1u));
  /* 1169ce6c call 0x1169ade0 */
  push32(0x1169ce71u); f_1169ade0();
  /* 1169ce71 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169ce74 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ce77 jne 0x1169ce7a */
  if (!C.zf) goto L_1169ce7a;
  /* 1169ce79 int3  */
  x86_unimpl("int3 @ 0x1169ce79");
L_1169ce7a:;
  /* 1169ce7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169ce7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169ce7e jne 0x1169ce3d */
  if (!C.zf) goto L_1169ce3d;
L_1169ce80:;
  /* 1169ce80 push 4 */
  push32((uint32_t)(0x4u));
  /* 1169ce82 mov cl, byte ptr [0x116ce184] */
  CL = (r8((uint32_t)(0x116ce184)));
  /* 1169ce88 push ecx */
  push32((uint32_t)(ECX));
  /* 1169ce89 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169ce8c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1169ce8f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169ce92 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 1169ce96 push edx */
  push32((uint32_t)(EDX));
  /* 1169ce97 call 0x1169d330 */
  push32(0x1169ce9cu); f_1169d330();
  /* 1169ce9c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169ce9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169cea1 jne 0x1169cee6 */
  if (!C.zf) goto L_1169cee6;
L_1169cea3:;
  /* 1169cea3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169cea6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169cea9 push eax */
  push32((uint32_t)(EAX));
  /* 1169ceaa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169cead mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1169ceb0 push edx */
  push32((uint32_t)(EDX));
  /* 1169ceb1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169ceb4 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1169ceb7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1169cebd mov edx, dword ptr [ecx*4 + 0x116ce188] */
  EDX = (r32((uint32_t)(ECX*4 + 0x116ce188)));
  /* 1169cec4 push edx */
  push32((uint32_t)(EDX));
  /* 1169cec5 push 0x116caf8c */
  push32((uint32_t)(0x116caf8cu));
  /* 1169ceca push 0 */
  push32((uint32_t)(0x0u));
  /* 1169cecc push 0 */
  push32((uint32_t)(0x0u));
  /* 1169cece push 0 */
  push32((uint32_t)(0x0u));
  /* 1169ced0 push 1 */
  push32((uint32_t)(0x1u));
  /* 1169ced2 call 0x1169ade0 */
  push32(0x1169ced7u); f_1169ade0();
  /* 1169ced7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169ceda cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169cedd jne 0x1169cee0 */
  if (!C.zf) goto L_1169cee0;
  /* 1169cedf int3  */
  x86_unimpl("int3 @ 0x1169cedf");
L_1169cee0:;
  /* 1169cee0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169cee2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169cee4 jne 0x1169cea3 */
  if (!C.zf) goto L_1169cea3;
L_1169cee6:;
  /* 1169cee6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169cee9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ceed jne 0x1169cf5b */
  if (!C.zf) goto L_1169cf5b;
L_1169ceef:;
  /* 1169ceef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169cef2 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169cef9 jne 0x1169cf04 */
  if (!C.zf) goto L_1169cf04;
  /* 1169cefb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169cefe cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169cf02 je 0x1169cf25 */
  if (C.zf) goto L_1169cf25;
L_1169cf04:;
  /* 1169cf04 push 0x116caf4c */
  push32((uint32_t)(0x116caf4cu));
  /* 1169cf09 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169cf0b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 1169cf10 push 0x116cad3c */
  push32((uint32_t)(0x116cad3cu));
  /* 1169cf15 push 2 */
  push32((uint32_t)(0x2u));
  /* 1169cf17 call 0x1169ade0 */
  push32(0x1169cf1cu); f_1169ade0();
  /* 1169cf1c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169cf1f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169cf22 jne 0x1169cf25 */
  if (!C.zf) goto L_1169cf25;
  /* 1169cf24 int3  */
  x86_unimpl("int3 @ 0x1169cf24");
L_1169cf25:;
  /* 1169cf25 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1169cf27 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1169cf29 jne 0x1169ceef */
  if (!C.zf) goto L_1169ceef;
  /* 1169cf2b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169cf2e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1169cf31 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169cf34 push eax */
  push32((uint32_t)(EAX));
  /* 1169cf35 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1169cf37 mov cl, byte ptr [0x116ce185] */
  CL = (r8((uint32_t)(0x116ce185)));
  /* 1169cf3d push ecx */
  push32((uint32_t)(ECX));
  /* 1169cf3e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169cf41 push edx */
  push32((uint32_t)(EDX));
  /* 1169cf42 call 0x116a2540 */
  push32(0x1169cf47u); f_116a2540();
  /* 1169cf47 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169cf4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169cf4d push eax */
  push32((uint32_t)(EAX));
  /* 1169cf4e call 0x116a2d00 */
  push32(0x1169cf53u); f_116a2d00();
  /* 1169cf53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169cf56 jmp 0x1169d0c5 */
  goto L_1169d0c5;
L_1169cf5b:;
  /* 1169cf5b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169cf5e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169cf62 jne 0x1169cf71 */
  if (!C.zf) goto L_1169cf71;
  /* 1169cf64 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169cf68 jne 0x1169cf71 */
  if (!C.zf) goto L_1169cf71;
  /* 1169cf6a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_1169cf71:;
  /* 1169cf71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169cf74 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1169cf77 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169cf7a je 0x1169cf9d */
  if (C.zf) goto L_1169cf9d;
  /* 1169cf7c push 0x116caf2c */
  push32((uint32_t)(0x116caf2cu));
  /* 1169cf81 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169cf83 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 1169cf88 push 0x116cad3c */
  push32((uint32_t)(0x116cad3cu));
  /* 1169cf8d push 2 */
  push32((uint32_t)(0x2u));
  /* 1169cf8f call 0x1169ade0 */
  push32(0x1169cf94u); f_1169ade0();
  /* 1169cf94 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169cf97 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169cf9a jne 0x1169cf9d */
  if (!C.zf) goto L_1169cf9d;
  /* 1169cf9c int3  */
  x86_unimpl("int3 @ 0x1169cf9c");
L_1169cf9d:;
  /* 1169cf9d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1169cf9f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1169cfa1 jne 0x1169cf71 */
  if (!C.zf) goto L_1169cf71;
  /* 1169cfa3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169cfa6 mov eax, dword ptr [0x116d05c4] */
  EAX = (r32((uint32_t)(0x116d05c4)));
  /* 1169cfab sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169cfae mov dword ptr [0x116d05c4], eax */
  w32((uint32_t)(0x116d05c4), (EAX));
  /* 1169cfb3 mov ecx, dword ptr [0x116ce178] */
  ECX = (r32((uint32_t)(0x116ce178)));
  /* 1169cfb9 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1169cfbc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1169cfbe jne 0x1169d09c */
  if (!C.zf) goto L_1169d09c;
  /* 1169cfc4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169cfc7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169cfca je 0x1169cfdc */
  if (C.zf) goto L_1169cfdc;
  /* 1169cfcc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169cfcf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1169cfd1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169cfd4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1169cfd7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1169cfda jmp 0x1169d01a */
  goto L_1169d01a;
L_1169cfdc:;
  /* 1169cfdc mov ecx, dword ptr [0x116d05b8] */
  ECX = (r32((uint32_t)(0x116d05b8)));
  /* 1169cfe2 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169cfe5 je 0x1169d008 */
  if (C.zf) goto L_1169d008;
  /* 1169cfe7 push 0x116caf14 */
  push32((uint32_t)(0x116caf14u));
  /* 1169cfec push 0 */
  push32((uint32_t)(0x0u));
  /* 1169cfee push 0x42a */
  push32((uint32_t)(0x42au));
  /* 1169cff3 push 0x116cad3c */
  push32((uint32_t)(0x116cad3cu));
  /* 1169cff8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1169cffa call 0x1169ade0 */
  push32(0x1169cfffu); f_1169ade0();
  /* 1169cfff add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169d002 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d005 jne 0x1169d008 */
  if (!C.zf) goto L_1169d008;
  /* 1169d007 int3  */
  x86_unimpl("int3 @ 0x1169d007");
L_1169d008:;
  /* 1169d008 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1169d00a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1169d00c jne 0x1169cfdc */
  if (!C.zf) goto L_1169cfdc;
  /* 1169d00e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169d011 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1169d014 mov dword ptr [0x116d05b8], ecx */
  w32((uint32_t)(0x116d05b8), (ECX));
L_1169d01a:;
  /* 1169d01a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169d01d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d021 je 0x1169d032 */
  if (C.zf) goto L_1169d032;
  /* 1169d023 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169d026 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1169d029 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169d02c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1169d02e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1169d030 jmp 0x1169d06f */
  goto L_1169d06f;
L_1169d032:;
  /* 1169d032 mov ecx, dword ptr [0x116d05c0] */
  ECX = (r32((uint32_t)(0x116d05c0)));
  /* 1169d038 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d03b je 0x1169d05e */
  if (C.zf) goto L_1169d05e;
  /* 1169d03d push 0x116caefc */
  push32((uint32_t)(0x116caefcu));
  /* 1169d042 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169d044 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 1169d049 push 0x116cad3c */
  push32((uint32_t)(0x116cad3cu));
  /* 1169d04e push 2 */
  push32((uint32_t)(0x2u));
  /* 1169d050 call 0x1169ade0 */
  push32(0x1169d055u); f_1169ade0();
  /* 1169d055 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169d058 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d05b jne 0x1169d05e */
  if (!C.zf) goto L_1169d05e;
  /* 1169d05d int3  */
  x86_unimpl("int3 @ 0x1169d05d");
L_1169d05e:;
  /* 1169d05e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1169d060 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1169d062 jne 0x1169d032 */
  if (!C.zf) goto L_1169d032;
  /* 1169d064 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169d067 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1169d069 mov dword ptr [0x116d05c0], ecx */
  w32((uint32_t)(0x116d05c0), (ECX));
L_1169d06f:;
  /* 1169d06f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169d072 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1169d075 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169d078 push eax */
  push32((uint32_t)(EAX));
  /* 1169d079 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1169d07b mov cl, byte ptr [0x116ce185] */
  CL = (r8((uint32_t)(0x116ce185)));
  /* 1169d081 push ecx */
  push32((uint32_t)(ECX));
  /* 1169d082 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169d085 push edx */
  push32((uint32_t)(EDX));
  /* 1169d086 call 0x116a2540 */
  push32(0x1169d08bu); f_116a2540();
  /* 1169d08b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169d08e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169d091 push eax */
  push32((uint32_t)(EAX));
  /* 1169d092 call 0x116a2d00 */
  push32(0x1169d097u); f_116a2d00();
  /* 1169d097 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169d09a jmp 0x1169d0c5 */
  goto L_1169d0c5;
L_1169d09c:;
  /* 1169d09c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169d09f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 1169d0a6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169d0a9 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1169d0ac push eax */
  push32((uint32_t)(EAX));
  /* 1169d0ad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1169d0af mov cl, byte ptr [0x116ce185] */
  CL = (r8((uint32_t)(0x116ce185)));
  /* 1169d0b5 push ecx */
  push32((uint32_t)(ECX));
  /* 1169d0b6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169d0b9 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169d0bc push edx */
  push32((uint32_t)(EDX));
  /* 1169d0bd call 0x116a2540 */
  push32(0x1169d0c2u); f_116a2540();
  /* 1169d0c2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1169d0c5:;
  /* 1169d0c5 pop edi */
  EDI = (pop32());
  /* 1169d0c6 pop esi */
  ESI = (pop32());
  /* 1169d0c7 pop ebx */
  EBX = (pop32());
  /* 1169d0c8 mov esp, ebp */
  ESP = (EBP);
  /* 1169d0ca pop ebp */
  EBP = (pop32());
  /* 1169d0cb ret  */
  ESPCHK(0x1169cce0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d0d0 @ 0x1169d0d0 (19 bytes, 9 insns) */
void f_1169d0d0(void) {
  FTRACE(0x1169d0d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169d0d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1169d0d1 mov ebp, esp */
  EBP = (ESP);
  /* 1169d0d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1169d0d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169d0d8 push eax */
  push32((uint32_t)(EAX));
  /* 1169d0d9 call 0x1169d0f0 */
  push32(0x1169d0deu); f_1169d0f0();
  /* 1169d0de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169d0e1 pop ebp */
  EBP = (pop32());
  /* 1169d0e2 ret  */
  ESPCHK(0x1169d0d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d0f0 @ 0x1169d0f0 (342 bytes, 119 insns) */
void f_1169d0f0(void) {
  FTRACE(0x1169d0f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169d0f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1169d0f1 mov ebp, esp */
  EBP = (ESP);
  /* 1169d0f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169d0f6 push ebx */
  push32((uint32_t)(EBX));
  /* 1169d0f7 push esi */
  push32((uint32_t)(ESI));
  /* 1169d0f8 push edi */
  push32((uint32_t)(EDI));
  /* 1169d0f9 mov eax, dword ptr [0x116ce178] */
  EAX = (r32((uint32_t)(0x116ce178)));
  /* 1169d0fe and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1169d101 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169d103 je 0x1169d135 */
  if (C.zf) goto L_1169d135;
L_1169d105:;
  /* 1169d105 call 0x1169d3c0 */
  push32(0x1169d10au); f_1169d3c0();
  /* 1169d10a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169d10c jne 0x1169d12f */
  if (!C.zf) goto L_1169d12f;
  /* 1169d10e push 0x116cad48 */
  push32((uint32_t)(0x116cad48u));
  /* 1169d113 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169d115 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 1169d11a push 0x116cad3c */
  push32((uint32_t)(0x116cad3cu));
  /* 1169d11f push 2 */
  push32((uint32_t)(0x2u));
  /* 1169d121 call 0x1169ade0 */
  push32(0x1169d126u); f_1169ade0();
  /* 1169d126 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169d129 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d12c jne 0x1169d12f */
  if (!C.zf) goto L_1169d12f;
  /* 1169d12e int3  */
  x86_unimpl("int3 @ 0x1169d12e");
L_1169d12f:;
  /* 1169d12f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1169d131 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1169d133 jne 0x1169d105 */
  if (!C.zf) goto L_1169d105;
L_1169d135:;
  /* 1169d135 push 9 */
  push32((uint32_t)(0x9u));
  /* 1169d137 call 0x1169c120 */
  push32(0x1169d13cu); f_1169c120();
  /* 1169d13c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1169d13f:;
  /* 1169d13f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169d142 push edx */
  push32((uint32_t)(EDX));
  /* 1169d143 call 0x1169d820 */
  push32(0x1169d148u); f_1169d820();
  /* 1169d148 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169d14b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169d14d jne 0x1169d170 */
  if (!C.zf) goto L_1169d170;
  /* 1169d14f push 0x116cae4c */
  push32((uint32_t)(0x116cae4cu));
  /* 1169d154 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169d156 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 1169d15b push 0x116cad3c */
  push32((uint32_t)(0x116cad3cu));
  /* 1169d160 push 2 */
  push32((uint32_t)(0x2u));
  /* 1169d162 call 0x1169ade0 */
  push32(0x1169d167u); f_1169ade0();
  /* 1169d167 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169d16a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d16d jne 0x1169d170 */
  if (!C.zf) goto L_1169d170;
  /* 1169d16f int3  */
  x86_unimpl("int3 @ 0x1169d16f");
L_1169d170:;
  /* 1169d170 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169d172 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169d174 jne 0x1169d13f */
  if (!C.zf) goto L_1169d13f;
  /* 1169d176 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169d179 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169d17c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1169d17f:;
  /* 1169d17f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169d182 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1169d185 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1169d18a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d18d je 0x1169d1d2 */
  if (C.zf) goto L_1169d1d2;
  /* 1169d18f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169d192 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d196 je 0x1169d1d2 */
  if (C.zf) goto L_1169d1d2;
  /* 1169d198 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169d19b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1169d19e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1169d1a3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d1a6 je 0x1169d1d2 */
  if (C.zf) goto L_1169d1d2;
  /* 1169d1a8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169d1ab cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d1af je 0x1169d1d2 */
  if (C.zf) goto L_1169d1d2;
  /* 1169d1b1 push 0x116ca968 */
  push32((uint32_t)(0x116ca968u));
  /* 1169d1b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169d1b8 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 1169d1bd push 0x116cad3c */
  push32((uint32_t)(0x116cad3cu));
  /* 1169d1c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1169d1c4 call 0x1169ade0 */
  push32(0x1169d1c9u); f_1169ade0();
  /* 1169d1c9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169d1cc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d1cf jne 0x1169d1d2 */
  if (!C.zf) goto L_1169d1d2;
  /* 1169d1d1 int3  */
  x86_unimpl("int3 @ 0x1169d1d1");
L_1169d1d2:;
  /* 1169d1d2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1169d1d4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1169d1d6 jne 0x1169d17f */
  if (!C.zf) goto L_1169d17f;
  /* 1169d1d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169d1db cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d1df jne 0x1169d1ee */
  if (!C.zf) goto L_1169d1ee;
  /* 1169d1e1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d1e5 jne 0x1169d1ee */
  if (!C.zf) goto L_1169d1ee;
  /* 1169d1e7 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_1169d1ee:;
  /* 1169d1ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169d1f1 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d1f5 je 0x1169d229 */
  if (C.zf) goto L_1169d229;
L_1169d1f7:;
  /* 1169d1f7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169d1fa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1169d1fd cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d200 je 0x1169d223 */
  if (C.zf) goto L_1169d223;
  /* 1169d202 push 0x116caf2c */
  push32((uint32_t)(0x116caf2cu));
  /* 1169d207 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169d209 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 1169d20e push 0x116cad3c */
  push32((uint32_t)(0x116cad3cu));
  /* 1169d213 push 2 */
  push32((uint32_t)(0x2u));
  /* 1169d215 call 0x1169ade0 */
  push32(0x1169d21au); f_1169ade0();
  /* 1169d21a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169d21d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d220 jne 0x1169d223 */
  if (!C.zf) goto L_1169d223;
  /* 1169d222 int3  */
  x86_unimpl("int3 @ 0x1169d222");
L_1169d223:;
  /* 1169d223 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1169d225 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1169d227 jne 0x1169d1f7 */
  if (!C.zf) goto L_1169d1f7;
L_1169d229:;
  /* 1169d229 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169d22c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1169d22f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1169d232 push 9 */
  push32((uint32_t)(0x9u));
  /* 1169d234 call 0x1169c1c0 */
  push32(0x1169d239u); f_1169c1c0();
  /* 1169d239 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169d23c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169d23f pop edi */
  EDI = (pop32());
  /* 1169d240 pop esi */
  ESI = (pop32());
  /* 1169d241 pop ebx */
  EBX = (pop32());
  /* 1169d242 mov esp, ebp */
  ESP = (EBP);
  /* 1169d244 pop ebp */
  EBP = (pop32());
  /* 1169d245 ret  */
  ESPCHK(0x1169d0f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d250 @ 0x1169d250 (28 bytes, 11 insns) */
void f_1169d250(void) {
  FTRACE(0x1169d250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169d250 push ebp */
  push32((uint32_t)(EBP));
  /* 1169d251 mov ebp, esp */
  EBP = (ESP);
  /* 1169d253 push ecx */
  push32((uint32_t)(ECX));
  /* 1169d254 mov eax, dword ptr [0x116ce180] */
  EAX = (r32((uint32_t)(0x116ce180)));
  /* 1169d259 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1169d25c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169d25f mov dword ptr [0x116ce180], ecx */
  w32((uint32_t)(0x116ce180), (ECX));
  /* 1169d265 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169d268 mov esp, ebp */
  ESP = (EBP);
  /* 1169d26a pop ebp */
  EBP = (pop32());
  /* 1169d26b ret  */
  ESPCHK(0x1169d250u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d270 @ 0x1169d270 (157 bytes, 59 insns) */
void f_1169d270(void) {
  FTRACE(0x1169d270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169d270 push ebp */
  push32((uint32_t)(EBP));
  /* 1169d271 mov ebp, esp */
  EBP = (ESP);
  /* 1169d273 push ecx */
  push32((uint32_t)(ECX));
  /* 1169d274 push ebx */
  push32((uint32_t)(EBX));
  /* 1169d275 push esi */
  push32((uint32_t)(ESI));
  /* 1169d276 push edi */
  push32((uint32_t)(EDI));
  /* 1169d277 push 9 */
  push32((uint32_t)(0x9u));
  /* 1169d279 call 0x1169c120 */
  push32(0x1169d27eu); f_1169c120();
  /* 1169d27e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169d281 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169d284 push eax */
  push32((uint32_t)(EAX));
  /* 1169d285 call 0x1169d820 */
  push32(0x1169d28au); f_1169d820();
  /* 1169d28a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169d28d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169d28f je 0x1169d2fc */
  if (C.zf) goto L_1169d2fc;
  /* 1169d291 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169d294 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169d297 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1169d29a:;
  /* 1169d29a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169d29d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1169d2a0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1169d2a5 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d2a8 je 0x1169d2ed */
  if (C.zf) goto L_1169d2ed;
  /* 1169d2aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169d2ad cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d2b1 je 0x1169d2ed */
  if (C.zf) goto L_1169d2ed;
  /* 1169d2b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169d2b6 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1169d2b9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1169d2be cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d2c1 je 0x1169d2ed */
  if (C.zf) goto L_1169d2ed;
  /* 1169d2c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169d2c6 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d2ca je 0x1169d2ed */
  if (C.zf) goto L_1169d2ed;
  /* 1169d2cc push 0x116ca968 */
  push32((uint32_t)(0x116ca968u));
  /* 1169d2d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169d2d3 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 1169d2d8 push 0x116cad3c */
  push32((uint32_t)(0x116cad3cu));
  /* 1169d2dd push 2 */
  push32((uint32_t)(0x2u));
  /* 1169d2df call 0x1169ade0 */
  push32(0x1169d2e4u); f_1169ade0();
  /* 1169d2e4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169d2e7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d2ea jne 0x1169d2ed */
  if (!C.zf) goto L_1169d2ed;
  /* 1169d2ec int3  */
  x86_unimpl("int3 @ 0x1169d2ec");
L_1169d2ed:;
  /* 1169d2ed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1169d2ef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1169d2f1 jne 0x1169d29a */
  if (!C.zf) goto L_1169d29a;
  /* 1169d2f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169d2f6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169d2f9 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_1169d2fc:;
  /* 1169d2fc push 9 */
  push32((uint32_t)(0x9u));
  /* 1169d2fe call 0x1169c1c0 */
  push32(0x1169d303u); f_1169c1c0();
  /* 1169d303 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169d306 pop edi */
  EDI = (pop32());
  /* 1169d307 pop esi */
  ESI = (pop32());
  /* 1169d308 pop ebx */
  EBX = (pop32());
  /* 1169d309 mov esp, ebp */
  ESP = (EBP);
  /* 1169d30b pop ebp */
  EBP = (pop32());
  /* 1169d30c ret  */
  ESPCHK(0x1169d270u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d310 @ 0x1169d310 (28 bytes, 11 insns) */
void f_1169d310(void) {
  FTRACE(0x1169d310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169d310 push ebp */
  push32((uint32_t)(EBP));
  /* 1169d311 mov ebp, esp */
  EBP = (ESP);
  /* 1169d313 push ecx */
  push32((uint32_t)(ECX));
  /* 1169d314 mov eax, dword ptr [0x116ce4b0] */
  EAX = (r32((uint32_t)(0x116ce4b0)));
  /* 1169d319 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1169d31c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169d31f mov dword ptr [0x116ce4b0], ecx */
  w32((uint32_t)(0x116ce4b0), (ECX));
  /* 1169d325 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169d328 mov esp, ebp */
  ESP = (EBP);
  /* 1169d32a pop ebp */
  EBP = (pop32());
  /* 1169d32b ret  */
  ESPCHK(0x1169d310u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d330 @ 0x1169d330 (136 bytes, 55 insns) */
void f_1169d330(void) {
  FTRACE(0x1169d330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169d330 push ebp */
  push32((uint32_t)(EBP));
  /* 1169d331 mov ebp, esp */
  EBP = (ESP);
  /* 1169d333 push ecx */
  push32((uint32_t)(ECX));
  /* 1169d334 push ebx */
  push32((uint32_t)(EBX));
  /* 1169d335 push esi */
  push32((uint32_t)(ESI));
  /* 1169d336 push edi */
  push32((uint32_t)(EDI));
  /* 1169d337 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_1169d33e:;
  /* 1169d33e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169d341 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169d344 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169d347 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1169d34a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169d34c je 0x1169d3ae */
  if (C.zf) goto L_1169d3ae;
  /* 1169d34e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169d351 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169d353 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1169d355 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169d358 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1169d35e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169d361 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169d364 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1169d367 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d369 je 0x1169d3ac */
  if (C.zf) goto L_1169d3ac;
L_1169d36b:;
  /* 1169d36b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169d36e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1169d373 push eax */
  push32((uint32_t)(EAX));
  /* 1169d374 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169d377 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1169d379 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 1169d37c push edx */
  push32((uint32_t)(EDX));
  /* 1169d37d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169d380 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169d383 push eax */
  push32((uint32_t)(EAX));
  /* 1169d384 push 0x116cb000 */
  push32((uint32_t)(0x116cb000u));
  /* 1169d389 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169d38b push 0 */
  push32((uint32_t)(0x0u));
  /* 1169d38d push 0 */
  push32((uint32_t)(0x0u));
  /* 1169d38f push 0 */
  push32((uint32_t)(0x0u));
  /* 1169d391 call 0x1169ade0 */
  push32(0x1169d396u); f_1169ade0();
  /* 1169d396 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169d399 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d39c jne 0x1169d39f */
  if (!C.zf) goto L_1169d39f;
  /* 1169d39e int3  */
  x86_unimpl("int3 @ 0x1169d39e");
L_1169d39f:;
  /* 1169d39f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1169d3a1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1169d3a3 jne 0x1169d36b */
  if (!C.zf) goto L_1169d36b;
  /* 1169d3a5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1169d3ac:;
  /* 1169d3ac jmp 0x1169d33e */
  goto L_1169d33e;
L_1169d3ae:;
  /* 1169d3ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169d3b1 pop edi */
  EDI = (pop32());
  /* 1169d3b2 pop esi */
  ESI = (pop32());
  /* 1169d3b3 pop ebx */
  EBX = (pop32());
  /* 1169d3b4 mov esp, ebp */
  ESP = (EBP);
  /* 1169d3b6 pop ebp */
  EBP = (pop32());
  /* 1169d3b7 ret  */
  ESPCHK(0x1169d330u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d3c0 @ 0x1169d3c0 (863 bytes, 299 insns) [1 switch table(s)] */
void f_1169d3c0(void) {
  FTRACE(0x1169d3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169d3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1169d3c1 mov ebp, esp */
  EBP = (ESP);
  /* 1169d3c3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169d3c6 push ebx */
  push32((uint32_t)(EBX));
  /* 1169d3c7 push esi */
  push32((uint32_t)(ESI));
  /* 1169d3c8 push edi */
  push32((uint32_t)(EDI));
  /* 1169d3c9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1169d3d0 mov eax, dword ptr [0x116ce178] */
  EAX = (r32((uint32_t)(0x116ce178)));
  /* 1169d3d5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1169d3d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169d3da jne 0x1169d3e6 */
  if (!C.zf) goto L_1169d3e6;
  /* 1169d3dc mov eax, 1 */
  EAX = (0x1u);
  /* 1169d3e1 jmp 0x1169d718 */
  goto L_1169d718;
L_1169d3e6:;
  /* 1169d3e6 push 9 */
  push32((uint32_t)(0x9u));
  /* 1169d3e8 call 0x1169c120 */
  push32(0x1169d3edu); f_1169c120();
  /* 1169d3ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169d3f0 call 0x116a2d70 */
  push32(0x1169d3f5u); f_116a2d70();
  /* 1169d3f5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1169d3f8 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d3fc je 0x1169d509 */
  if (C.zf) goto L_1169d509;
  /* 1169d402 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d406 je 0x1169d509 */
  if (C.zf) goto L_1169d509;
  /* 1169d40c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1169d40f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1169d412 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1169d415 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169d418 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1169d41b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d41f ja 0x1169d4d2 */
  if ((!C.cf&&!C.zf)) goto L_1169d4d2;
  /* 1169d425 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1169d428 jmp dword ptr [eax*4 + 0x1169d71f] */
  switch (EAX) {
    case 0: goto L_1169d4aa;
    case 1: goto L_1169d482;
    case 2: goto L_1169d45a;
    case 3: goto L_1169d42f;
    default: x86_unimpl("switch@0x1169d428 out of table"); return;
  }
L_1169d42f:;
  /* 1169d42f push 0x116cb154 */
  push32((uint32_t)(0x116cb154u));
  /* 1169d434 push 0x116cacdc */
  push32((uint32_t)(0x116cacdcu));
  /* 1169d439 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169d43b push 0 */
  push32((uint32_t)(0x0u));
  /* 1169d43d push 0 */
  push32((uint32_t)(0x0u));
  /* 1169d43f push 0 */
  push32((uint32_t)(0x0u));
  /* 1169d441 call 0x1169ade0 */
  push32(0x1169d446u); f_1169ade0();
  /* 1169d446 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169d449 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d44c jne 0x1169d44f */
  if (!C.zf) goto L_1169d44f;
  /* 1169d44e int3  */
  x86_unimpl("int3 @ 0x1169d44e");
L_1169d44f:;
  /* 1169d44f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1169d451 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1169d453 jne 0x1169d42f */
  if (!C.zf) goto L_1169d42f;
  /* 1169d455 jmp 0x1169d4f8 */
  goto L_1169d4f8;
L_1169d45a:;
  /* 1169d45a push 0x116cb130 */
  push32((uint32_t)(0x116cb130u));
  /* 1169d45f push 0x116cacdc */
  push32((uint32_t)(0x116cacdcu));
  /* 1169d464 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169d466 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169d468 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169d46a push 0 */
  push32((uint32_t)(0x0u));
  /* 1169d46c call 0x1169ade0 */
  push32(0x1169d471u); f_1169ade0();
  /* 1169d471 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169d474 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d477 jne 0x1169d47a */
  if (!C.zf) goto L_1169d47a;
  /* 1169d479 int3  */
  x86_unimpl("int3 @ 0x1169d479");
L_1169d47a:;
  /* 1169d47a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1169d47c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1169d47e jne 0x1169d45a */
  if (!C.zf) goto L_1169d45a;
  /* 1169d480 jmp 0x1169d4f8 */
  goto L_1169d4f8;
L_1169d482:;
  /* 1169d482 push 0x116cb10c */
  push32((uint32_t)(0x116cb10cu));
  /* 1169d487 push 0x116cacdc */
  push32((uint32_t)(0x116cacdcu));
  /* 1169d48c push 0 */
  push32((uint32_t)(0x0u));
  /* 1169d48e push 0 */
  push32((uint32_t)(0x0u));
  /* 1169d490 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169d492 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169d494 call 0x1169ade0 */
  push32(0x1169d499u); f_1169ade0();
  /* 1169d499 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169d49c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d49f jne 0x1169d4a2 */
  if (!C.zf) goto L_1169d4a2;
  /* 1169d4a1 int3  */
  x86_unimpl("int3 @ 0x1169d4a1");
L_1169d4a2:;
  /* 1169d4a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169d4a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169d4a6 jne 0x1169d482 */
  if (!C.zf) goto L_1169d482;
  /* 1169d4a8 jmp 0x1169d4f8 */
  goto L_1169d4f8;
L_1169d4aa:;
  /* 1169d4aa push 0x116cb0e8 */
  push32((uint32_t)(0x116cb0e8u));
  /* 1169d4af push 0x116cacdc */
  push32((uint32_t)(0x116cacdcu));
  /* 1169d4b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169d4b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169d4b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169d4ba push 0 */
  push32((uint32_t)(0x0u));
  /* 1169d4bc call 0x1169ade0 */
  push32(0x1169d4c1u); f_1169ade0();
  /* 1169d4c1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169d4c4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d4c7 jne 0x1169d4ca */
  if (!C.zf) goto L_1169d4ca;
  /* 1169d4c9 int3  */
  x86_unimpl("int3 @ 0x1169d4c9");
L_1169d4ca:;
  /* 1169d4ca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1169d4cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1169d4ce jne 0x1169d4aa */
  if (!C.zf) goto L_1169d4aa;
  /* 1169d4d0 jmp 0x1169d4f8 */
  goto L_1169d4f8;
L_1169d4d2:;
  /* 1169d4d2 push 0x116cb0bc */
  push32((uint32_t)(0x116cb0bcu));
  /* 1169d4d7 push 0x116cacdc */
  push32((uint32_t)(0x116cacdcu));
  /* 1169d4dc push 0 */
  push32((uint32_t)(0x0u));
  /* 1169d4de push 0 */
  push32((uint32_t)(0x0u));
  /* 1169d4e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169d4e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169d4e4 call 0x1169ade0 */
  push32(0x1169d4e9u); f_1169ade0();
  /* 1169d4e9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169d4ec cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d4ef jne 0x1169d4f2 */
  if (!C.zf) goto L_1169d4f2;
  /* 1169d4f1 int3  */
  x86_unimpl("int3 @ 0x1169d4f1");
L_1169d4f2:;
  /* 1169d4f2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1169d4f4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1169d4f6 jne 0x1169d4d2 */
  if (!C.zf) goto L_1169d4d2;
L_1169d4f8:;
  /* 1169d4f8 push 9 */
  push32((uint32_t)(0x9u));
  /* 1169d4fa call 0x1169c1c0 */
  push32(0x1169d4ffu); f_1169c1c0();
  /* 1169d4ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169d502 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169d504 jmp 0x1169d718 */
  goto L_1169d718;
L_1169d509:;
  /* 1169d509 mov eax, dword ptr [0x116d05c0] */
  EAX = (r32((uint32_t)(0x116d05c0)));
  /* 1169d50e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1169d511 jmp 0x1169d51b */
  goto L_1169d51b;
L_1169d513:;
  /* 1169d513 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169d516 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1169d518 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1169d51b:;
  /* 1169d51b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d51f je 0x1169d70b */
  if (C.zf) goto L_1169d70b;
  /* 1169d525 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1169d52c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169d52f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1169d532 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1169d538 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d53b je 0x1169d560 */
  if (C.zf) goto L_1169d560;
  /* 1169d53d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169d540 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d544 je 0x1169d560 */
  if (C.zf) goto L_1169d560;
  /* 1169d546 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169d549 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1169d54c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1169d552 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d555 je 0x1169d560 */
  if (C.zf) goto L_1169d560;
  /* 1169d557 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169d55a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d55e jne 0x1169d578 */
  if (!C.zf) goto L_1169d578;
L_1169d560:;
  /* 1169d560 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169d563 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1169d566 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1169d56c mov edx, dword ptr [ecx*4 + 0x116ce188] */
  EDX = (r32((uint32_t)(ECX*4 + 0x116ce188)));
  /* 1169d573 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1169d576 jmp 0x1169d57f */
  goto L_1169d57f;
L_1169d578:;
  /* 1169d578 mov dword ptr [ebp - 0x14], 0x116cb0b4 */
  w32((uint32_t)(EBP + -0x14), (0x116cb0b4u));
L_1169d57f:;
  /* 1169d57f push 4 */
  push32((uint32_t)(0x4u));
  /* 1169d581 mov al, byte ptr [0x116ce184] */
  AL = (r8((uint32_t)(0x116ce184)));
  /* 1169d586 push eax */
  push32((uint32_t)(EAX));
  /* 1169d587 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169d58a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169d58d push ecx */
  push32((uint32_t)(ECX));
  /* 1169d58e call 0x1169d330 */
  push32(0x1169d593u); f_1169d330();
  /* 1169d593 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169d596 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169d598 jne 0x1169d5d4 */
  if (!C.zf) goto L_1169d5d4;
L_1169d59a:;
  /* 1169d59a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169d59d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169d5a0 push edx */
  push32((uint32_t)(EDX));
  /* 1169d5a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169d5a4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 1169d5a7 push ecx */
  push32((uint32_t)(ECX));
  /* 1169d5a8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1169d5ab push edx */
  push32((uint32_t)(EDX));
  /* 1169d5ac push 0x116cafb8 */
  push32((uint32_t)(0x116cafb8u));
  /* 1169d5b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169d5b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169d5b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169d5b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169d5b9 call 0x1169ade0 */
  push32(0x1169d5beu); f_1169ade0();
  /* 1169d5be add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169d5c1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d5c4 jne 0x1169d5c7 */
  if (!C.zf) goto L_1169d5c7;
  /* 1169d5c6 int3  */
  x86_unimpl("int3 @ 0x1169d5c6");
L_1169d5c7:;
  /* 1169d5c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169d5c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169d5cb jne 0x1169d59a */
  if (!C.zf) goto L_1169d59a;
  /* 1169d5cd mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1169d5d4:;
  /* 1169d5d4 push 4 */
  push32((uint32_t)(0x4u));
  /* 1169d5d6 mov cl, byte ptr [0x116ce184] */
  CL = (r8((uint32_t)(0x116ce184)));
  /* 1169d5dc push ecx */
  push32((uint32_t)(ECX));
  /* 1169d5dd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169d5e0 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1169d5e3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169d5e6 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 1169d5ea push edx */
  push32((uint32_t)(EDX));
  /* 1169d5eb call 0x1169d330 */
  push32(0x1169d5f0u); f_1169d330();
  /* 1169d5f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169d5f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169d5f5 jne 0x1169d631 */
  if (!C.zf) goto L_1169d631;
L_1169d5f7:;
  /* 1169d5f7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169d5fa add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169d5fd push eax */
  push32((uint32_t)(EAX));
  /* 1169d5fe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169d601 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1169d604 push edx */
  push32((uint32_t)(EDX));
  /* 1169d605 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1169d608 push eax */
  push32((uint32_t)(EAX));
  /* 1169d609 push 0x116caf8c */
  push32((uint32_t)(0x116caf8cu));
  /* 1169d60e push 0 */
  push32((uint32_t)(0x0u));
  /* 1169d610 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169d612 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169d614 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169d616 call 0x1169ade0 */
  push32(0x1169d61bu); f_1169ade0();
  /* 1169d61b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169d61e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d621 jne 0x1169d624 */
  if (!C.zf) goto L_1169d624;
  /* 1169d623 int3  */
  x86_unimpl("int3 @ 0x1169d623");
L_1169d624:;
  /* 1169d624 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1169d626 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1169d628 jne 0x1169d5f7 */
  if (!C.zf) goto L_1169d5f7;
  /* 1169d62a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1169d631:;
  /* 1169d631 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169d634 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d638 jne 0x1169d68a */
  if (!C.zf) goto L_1169d68a;
  /* 1169d63a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169d63d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1169d640 push ecx */
  push32((uint32_t)(ECX));
  /* 1169d641 mov dl, byte ptr [0x116ce185] */
  DL = (r8((uint32_t)(0x116ce185)));
  /* 1169d647 push edx */
  push32((uint32_t)(EDX));
  /* 1169d648 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169d64b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169d64e push eax */
  push32((uint32_t)(EAX));
  /* 1169d64f call 0x1169d330 */
  push32(0x1169d654u); f_1169d330();
  /* 1169d654 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169d657 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169d659 jne 0x1169d68a */
  if (!C.zf) goto L_1169d68a;
L_1169d65b:;
  /* 1169d65b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169d65e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169d661 push ecx */
  push32((uint32_t)(ECX));
  /* 1169d662 push 0x116cb088 */
  push32((uint32_t)(0x116cb088u));
  /* 1169d667 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169d669 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169d66b push 0 */
  push32((uint32_t)(0x0u));
  /* 1169d66d push 0 */
  push32((uint32_t)(0x0u));
  /* 1169d66f call 0x1169ade0 */
  push32(0x1169d674u); f_1169ade0();
  /* 1169d674 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169d677 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d67a jne 0x1169d67d */
  if (!C.zf) goto L_1169d67d;
  /* 1169d67c int3  */
  x86_unimpl("int3 @ 0x1169d67c");
L_1169d67d:;
  /* 1169d67d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1169d67f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1169d681 jne 0x1169d65b */
  if (!C.zf) goto L_1169d65b;
  /* 1169d683 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1169d68a:;
  /* 1169d68a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d68e jne 0x1169d706 */
  if (!C.zf) goto L_1169d706;
  /* 1169d690 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169d693 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d697 je 0x1169d6cc */
  if (C.zf) goto L_1169d6cc;
L_1169d699:;
  /* 1169d699 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169d69c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1169d69f push edx */
  push32((uint32_t)(EDX));
  /* 1169d6a0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169d6a3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1169d6a6 push ecx */
  push32((uint32_t)(ECX));
  /* 1169d6a7 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1169d6aa push edx */
  push32((uint32_t)(EDX));
  /* 1169d6ab push 0x116cb068 */
  push32((uint32_t)(0x116cb068u));
  /* 1169d6b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169d6b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169d6b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169d6b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169d6b8 call 0x1169ade0 */
  push32(0x1169d6bdu); f_1169ade0();
  /* 1169d6bd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169d6c0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d6c3 jne 0x1169d6c6 */
  if (!C.zf) goto L_1169d6c6;
  /* 1169d6c5 int3  */
  x86_unimpl("int3 @ 0x1169d6c5");
L_1169d6c6:;
  /* 1169d6c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169d6c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169d6ca jne 0x1169d699 */
  if (!C.zf) goto L_1169d699;
L_1169d6cc:;
  /* 1169d6cc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169d6cf mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1169d6d2 push edx */
  push32((uint32_t)(EDX));
  /* 1169d6d3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169d6d6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169d6d9 push eax */
  push32((uint32_t)(EAX));
  /* 1169d6da mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1169d6dd push ecx */
  push32((uint32_t)(ECX));
  /* 1169d6de push 0x116cb03c */
  push32((uint32_t)(0x116cb03cu));
  /* 1169d6e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169d6e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169d6e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169d6e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169d6eb call 0x1169ade0 */
  push32(0x1169d6f0u); f_1169ade0();
  /* 1169d6f0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169d6f3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d6f6 jne 0x1169d6f9 */
  if (!C.zf) goto L_1169d6f9;
  /* 1169d6f8 int3  */
  x86_unimpl("int3 @ 0x1169d6f8");
L_1169d6f9:;
  /* 1169d6f9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1169d6fb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1169d6fd jne 0x1169d6cc */
  if (!C.zf) goto L_1169d6cc;
  /* 1169d6ff mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1169d706:;
  /* 1169d706 jmp 0x1169d513 */
  goto L_1169d513;
L_1169d70b:;
  /* 1169d70b push 9 */
  push32((uint32_t)(0x9u));
  /* 1169d70d call 0x1169c1c0 */
  push32(0x1169d712u); f_1169c1c0();
  /* 1169d712 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169d715 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1169d718:;
  /* 1169d718 pop edi */
  EDI = (pop32());
  /* 1169d719 pop esi */
  ESI = (pop32());
  /* 1169d71a pop ebx */
  EBX = (pop32());
  /* 1169d71b mov esp, ebp */
  ESP = (EBP);
  /* 1169d71d pop ebp */
  EBP = (pop32());
  /* 1169d71e ret  */
  ESPCHK(0x1169d3c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d730 @ 0x1169d730 (34 bytes, 13 insns) */
void f_1169d730(void) {
  FTRACE(0x1169d730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169d730 push ebp */
  push32((uint32_t)(EBP));
  /* 1169d731 mov ebp, esp */
  EBP = (ESP);
  /* 1169d733 push ecx */
  push32((uint32_t)(ECX));
  /* 1169d734 mov eax, dword ptr [0x116ce178] */
  EAX = (r32((uint32_t)(0x116ce178)));
  /* 1169d739 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1169d73c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d740 je 0x1169d74b */
  if (C.zf) goto L_1169d74b;
  /* 1169d742 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169d745 mov dword ptr [0x116ce178], ecx */
  w32((uint32_t)(0x116ce178), (ECX));
L_1169d74b:;
  /* 1169d74b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169d74e mov esp, ebp */
  ESP = (EBP);
  /* 1169d750 pop ebp */
  EBP = (pop32());
  /* 1169d751 ret  */
  ESPCHK(0x1169d730u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d760 @ 0x1169d760 (103 bytes, 38 insns) */
void f_1169d760(void) {
  FTRACE(0x1169d760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169d760 push ebp */
  push32((uint32_t)(EBP));
  /* 1169d761 mov ebp, esp */
  EBP = (ESP);
  /* 1169d763 push ecx */
  push32((uint32_t)(ECX));
  /* 1169d764 mov eax, dword ptr [0x116ce178] */
  EAX = (r32((uint32_t)(0x116ce178)));
  /* 1169d769 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1169d76c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169d76e jne 0x1169d772 */
  if (!C.zf) goto L_1169d772;
  /* 1169d770 jmp 0x1169d7c3 */
  goto L_1169d7c3;
L_1169d772:;
  /* 1169d772 push 9 */
  push32((uint32_t)(0x9u));
  /* 1169d774 call 0x1169c120 */
  push32(0x1169d779u); f_1169c120();
  /* 1169d779 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169d77c mov ecx, dword ptr [0x116d05c0] */
  ECX = (r32((uint32_t)(0x116d05c0)));
  /* 1169d782 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1169d785 jmp 0x1169d78f */
  goto L_1169d78f;
L_1169d787:;
  /* 1169d787 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169d78a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1169d78c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1169d78f:;
  /* 1169d78f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d793 je 0x1169d7b9 */
  if (C.zf) goto L_1169d7b9;
  /* 1169d795 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169d798 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1169d79b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1169d7a1 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d7a4 jne 0x1169d7b7 */
  if (!C.zf) goto L_1169d7b7;
  /* 1169d7a6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169d7a9 push eax */
  push32((uint32_t)(EAX));
  /* 1169d7aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169d7ad add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169d7b0 push ecx */
  push32((uint32_t)(ECX));
  /* 1169d7b1 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x1169d7b4u);
  /* 1169d7b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1169d7b7:;
  /* 1169d7b7 jmp 0x1169d787 */
  goto L_1169d787;
L_1169d7b9:;
  /* 1169d7b9 push 9 */
  push32((uint32_t)(0x9u));
  /* 1169d7bb call 0x1169c1c0 */
  push32(0x1169d7c0u); f_1169c1c0();
  /* 1169d7c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1169d7c3:;
  /* 1169d7c3 mov esp, ebp */
  ESP = (EBP);
  /* 1169d7c5 pop ebp */
  EBP = (pop32());
  /* 1169d7c6 ret  */
  ESPCHK(0x1169d760u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x1169d7d0 (75 bytes, 28 insns) */
void f_1169d7d0(void) {
  FTRACE(0x1169d7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169d7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1169d7d1 mov ebp, esp */
  EBP = (ESP);
  /* 1169d7d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1169d7d4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d7d8 je 0x1169d80d */
  if (C.zf) goto L_1169d80d;
  /* 1169d7da mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169d7dd push eax */
  push32((uint32_t)(EAX));
  /* 1169d7de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169d7e1 push ecx */
  push32((uint32_t)(ECX));
  /* 1169d7e2 call dword ptr [0x116d3408] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3408))), 0x1169d7e8u);
  /* 1169d7e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169d7ea jne 0x1169d80d */
  if (!C.zf) goto L_1169d80d;
  /* 1169d7ec cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d7f0 je 0x1169d804 */
  if (C.zf) goto L_1169d804;
  /* 1169d7f2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169d7f5 push edx */
  push32((uint32_t)(EDX));
  /* 1169d7f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169d7f9 push eax */
  push32((uint32_t)(EAX));
  /* 1169d7fa call dword ptr [0x116d340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d340c))), 0x1169d800u);
  /* 1169d800 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169d802 jne 0x1169d80d */
  if (!C.zf) goto L_1169d80d;
L_1169d804:;
  /* 1169d804 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1169d80b jmp 0x1169d814 */
  goto L_1169d814;
L_1169d80d:;
  /* 1169d80d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1169d814:;
  /* 1169d814 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169d817 mov esp, ebp */
  ESP = (EBP);
  /* 1169d819 pop ebp */
  EBP = (pop32());
  /* 1169d81a ret  */
  ESPCHK(0x1169d7d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d820 @ 0x1169d820 (134 bytes, 50 insns) */
void f_1169d820(void) {
  FTRACE(0x1169d820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169d820 push ebp */
  push32((uint32_t)(EBP));
  /* 1169d821 mov ebp, esp */
  EBP = (ESP);
  /* 1169d823 push ecx */
  push32((uint32_t)(ECX));
  /* 1169d824 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d828 jne 0x1169d82e */
  if (!C.zf) goto L_1169d82e;
  /* 1169d82a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169d82c jmp 0x1169d8a2 */
  goto L_1169d8a2;
L_1169d82e:;
  /* 1169d82e push 1 */
  push32((uint32_t)(0x1u));
  /* 1169d830 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1169d832 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169d835 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169d838 push eax */
  push32((uint32_t)(EAX));
  /* 1169d839 call 0x1169d7d0 */
  push32(0x1169d83eu); f_1169d7d0();
  /* 1169d83e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169d841 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169d843 jne 0x1169d849 */
  if (!C.zf) goto L_1169d849;
  /* 1169d845 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169d847 jmp 0x1169d8a2 */
  goto L_1169d8a2;
L_1169d849:;
  /* 1169d849 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169d84c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169d84f push ecx */
  push32((uint32_t)(ECX));
  /* 1169d850 call 0x116a2e90 */
  push32(0x1169d855u); f_116a2e90();
  /* 1169d855 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169d858 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1169d85b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d85f je 0x1169d876 */
  if (C.zf) goto L_1169d876;
  /* 1169d861 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169d864 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169d867 push edx */
  push32((uint32_t)(EDX));
  /* 1169d868 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169d86b push eax */
  push32((uint32_t)(EAX));
  /* 1169d86c call 0x116a2ef0 */
  push32(0x1169d871u); f_116a2ef0();
  /* 1169d871 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169d874 jmp 0x1169d8a2 */
  goto L_1169d8a2;
L_1169d876:;
  /* 1169d876 mov ecx, dword ptr [0x116d05d0] */
  ECX = (r32((uint32_t)(0x116d05d0)));
  /* 1169d87c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1169d882 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1169d884 je 0x1169d88d */
  if (C.zf) goto L_1169d88d;
  /* 1169d886 mov eax, 1 */
  EAX = (0x1u);
  /* 1169d88b jmp 0x1169d8a2 */
  goto L_1169d8a2;
L_1169d88d:;
  /* 1169d88d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169d890 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169d893 push edx */
  push32((uint32_t)(EDX));
  /* 1169d894 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169d896 mov eax, dword ptr [0x116d1eec] */
  EAX = (r32((uint32_t)(0x116d1eec)));
  /* 1169d89b push eax */
  push32((uint32_t)(EAX));
  /* 1169d89c call dword ptr [0x116d3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3404))), 0x1169d8a2u);
L_1169d8a2:;
  /* 1169d8a2 mov esp, ebp */
  ESP = (EBP);
  /* 1169d8a4 pop ebp */
  EBP = (pop32());
  /* 1169d8a5 ret  */
  ESPCHK(0x1169d820u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d8b0 @ 0x1169d8b0 (227 bytes, 80 insns) */
void f_1169d8b0(void) {
  FTRACE(0x1169d8b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169d8b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1169d8b1 mov ebp, esp */
  EBP = (ESP);
  /* 1169d8b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1169d8b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169d8b7 push eax */
  push32((uint32_t)(EAX));
  /* 1169d8b8 call 0x1169d820 */
  push32(0x1169d8bdu); f_1169d820();
  /* 1169d8bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169d8c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169d8c2 jne 0x1169d8cb */
  if (!C.zf) goto L_1169d8cb;
  /* 1169d8c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169d8c6 jmp 0x1169d98f */
  goto L_1169d98f;
L_1169d8cb:;
  /* 1169d8cb push 9 */
  push32((uint32_t)(0x9u));
  /* 1169d8cd call 0x1169c120 */
  push32(0x1169d8d2u); f_1169c120();
  /* 1169d8d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169d8d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169d8d8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169d8db mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1169d8de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169d8e1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1169d8e4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1169d8e9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d8ec je 0x1169d910 */
  if (C.zf) goto L_1169d910;
  /* 1169d8ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169d8f1 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d8f5 je 0x1169d910 */
  if (C.zf) goto L_1169d910;
  /* 1169d8f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169d8fa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1169d8fd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1169d902 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d905 je 0x1169d910 */
  if (C.zf) goto L_1169d910;
  /* 1169d907 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169d90a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d90e jne 0x1169d983 */
  if (!C.zf) goto L_1169d983;
L_1169d910:;
  /* 1169d910 push 1 */
  push32((uint32_t)(0x1u));
  /* 1169d912 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169d915 push edx */
  push32((uint32_t)(EDX));
  /* 1169d916 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169d919 push eax */
  push32((uint32_t)(EAX));
  /* 1169d91a call 0x1169d7d0 */
  push32(0x1169d91fu); f_1169d7d0();
  /* 1169d91f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169d922 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169d924 je 0x1169d983 */
  if (C.zf) goto L_1169d983;
  /* 1169d926 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169d929 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1169d92c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d92f jne 0x1169d983 */
  if (!C.zf) goto L_1169d983;
  /* 1169d931 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169d934 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 1169d937 cmp ecx, dword ptr [0x116ce17c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x116ce17c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d93d jg 0x1169d983 */
  if ((!C.zf&&C.sf==C.of)) goto L_1169d983;
  /* 1169d93f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d943 je 0x1169d950 */
  if (C.zf) goto L_1169d950;
  /* 1169d945 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169d948 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169d94b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 1169d94e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1169d950:;
  /* 1169d950 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d954 je 0x1169d961 */
  if (C.zf) goto L_1169d961;
  /* 1169d956 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169d959 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169d95c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1169d95f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1169d961:;
  /* 1169d961 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d965 je 0x1169d972 */
  if (C.zf) goto L_1169d972;
  /* 1169d967 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169d96a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169d96d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1169d970 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1169d972:;
  /* 1169d972 push 9 */
  push32((uint32_t)(0x9u));
  /* 1169d974 call 0x1169c1c0 */
  push32(0x1169d979u); f_1169c1c0();
  /* 1169d979 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169d97c mov eax, 1 */
  EAX = (0x1u);
  /* 1169d981 jmp 0x1169d98f */
  goto L_1169d98f;
L_1169d983:;
  /* 1169d983 push 9 */
  push32((uint32_t)(0x9u));
  /* 1169d985 call 0x1169c1c0 */
  push32(0x1169d98au); f_1169c1c0();
  /* 1169d98a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169d98d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1169d98f:;
  /* 1169d98f mov esp, ebp */
  ESP = (EBP);
  /* 1169d991 pop ebp */
  EBP = (pop32());
  /* 1169d992 ret  */
  ESPCHK(0x1169d8b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d9a0 @ 0x1169d9a0 (28 bytes, 11 insns) */
void f_1169d9a0(void) {
  FTRACE(0x1169d9a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169d9a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1169d9a1 mov ebp, esp */
  EBP = (ESP);
  /* 1169d9a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1169d9a4 mov eax, dword ptr [0x116d205c] */
  EAX = (r32((uint32_t)(0x116d205c)));
  /* 1169d9a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1169d9ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169d9af mov dword ptr [0x116d205c], ecx */
  w32((uint32_t)(0x116d205c), (ECX));
  /* 1169d9b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169d9b8 mov esp, ebp */
  ESP = (EBP);
  /* 1169d9ba pop ebp */
  EBP = (pop32());
  /* 1169d9bb ret  */
  ESPCHK(0x1169d9a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d9c0 @ 0x1169d9c0 (362 bytes, 116 insns) */
void f_1169d9c0(void) {
  FTRACE(0x1169d9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169d9c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1169d9c1 mov ebp, esp */
  EBP = (ESP);
  /* 1169d9c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169d9c6 push ebx */
  push32((uint32_t)(EBX));
  /* 1169d9c7 push esi */
  push32((uint32_t)(ESI));
  /* 1169d9c8 push edi */
  push32((uint32_t)(EDI));
  /* 1169d9c9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d9cd jne 0x1169d9fa */
  if (!C.zf) goto L_1169d9fa;
L_1169d9cf:;
  /* 1169d9cf push 0x116cb19c */
  push32((uint32_t)(0x116cb19cu));
  /* 1169d9d4 push 0x116cacdc */
  push32((uint32_t)(0x116cacdcu));
  /* 1169d9d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169d9db push 0 */
  push32((uint32_t)(0x0u));
  /* 1169d9dd push 0 */
  push32((uint32_t)(0x0u));
  /* 1169d9df push 0 */
  push32((uint32_t)(0x0u));
  /* 1169d9e1 call 0x1169ade0 */
  push32(0x1169d9e6u); f_1169ade0();
  /* 1169d9e6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169d9e9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169d9ec jne 0x1169d9ef */
  if (!C.zf) goto L_1169d9ef;
  /* 1169d9ee int3  */
  x86_unimpl("int3 @ 0x1169d9ee");
L_1169d9ef:;
  /* 1169d9ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169d9f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169d9f3 jne 0x1169d9cf */
  if (!C.zf) goto L_1169d9cf;
  /* 1169d9f5 jmp 0x1169db23 */
  goto L_1169db23;
L_1169d9fa:;
  /* 1169d9fa push 9 */
  push32((uint32_t)(0x9u));
  /* 1169d9fc call 0x1169c120 */
  push32(0x1169da01u); f_1169c120();
  /* 1169da01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169da04 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169da07 mov edx, dword ptr [0x116d05c0] */
  EDX = (r32((uint32_t)(0x116d05c0)));
  /* 1169da0d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1169da0f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1169da16 jmp 0x1169da21 */
  goto L_1169da21;
L_1169da18:;
  /* 1169da18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169da1b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169da1e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1169da21:;
  /* 1169da21 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169da25 jge 0x1169da45 */
  if ((C.sf==C.of)) goto L_1169da45;
  /* 1169da27 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169da2a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169da2d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 1169da35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169da38 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169da3b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 1169da43 jmp 0x1169da18 */
  goto L_1169da18;
L_1169da45:;
  /* 1169da45 mov edx, dword ptr [0x116d05c0] */
  EDX = (r32((uint32_t)(0x116d05c0)));
  /* 1169da4b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1169da4e jmp 0x1169da58 */
  goto L_1169da58;
L_1169da50:;
  /* 1169da50 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169da53 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1169da55 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1169da58:;
  /* 1169da58 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169da5c je 0x1169db01 */
  if (C.zf) goto L_1169db01;
  /* 1169da62 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169da65 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1169da68 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1169da6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169da6f jl 0x1169dad7 */
  if ((C.sf!=C.of)) goto L_1169dad7;
  /* 1169da71 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169da74 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1169da77 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1169da7d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169da80 jge 0x1169dad7 */
  if ((C.sf==C.of)) goto L_1169dad7;
  /* 1169da82 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169da85 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1169da88 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1169da8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169da91 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 1169da95 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169da98 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169da9b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1169da9e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1169daa4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169daa7 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 1169daab mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169daae mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1169dab1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1169dab6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169dab9 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 1169dabd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169dac0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169dac3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169dac6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 1169dac9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1169dace mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169dad1 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 1169dad5 jmp 0x1169dafc */
  goto L_1169dafc;
L_1169dad7:;
  /* 1169dad7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169dada push edx */
  push32((uint32_t)(EDX));
  /* 1169dadb push 0x116cb178 */
  push32((uint32_t)(0x116cb178u));
  /* 1169dae0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169dae2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169dae4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169dae6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169dae8 call 0x1169ade0 */
  push32(0x1169daedu); f_1169ade0();
  /* 1169daed add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169daf0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169daf3 jne 0x1169daf6 */
  if (!C.zf) goto L_1169daf6;
  /* 1169daf5 int3  */
  x86_unimpl("int3 @ 0x1169daf5");
L_1169daf6:;
  /* 1169daf6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169daf8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169dafa jne 0x1169dad7 */
  if (!C.zf) goto L_1169dad7;
L_1169dafc:;
  /* 1169dafc jmp 0x1169da50 */
  goto L_1169da50;
L_1169db01:;
  /* 1169db01 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169db04 mov edx, dword ptr [0x116d05c8] */
  EDX = (r32((uint32_t)(0x116d05c8)));
  /* 1169db0a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 1169db0d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169db10 mov ecx, dword ptr [0x116d05bc] */
  ECX = (r32((uint32_t)(0x116d05bc)));
  /* 1169db16 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 1169db19 push 9 */
  push32((uint32_t)(0x9u));
  /* 1169db1b call 0x1169c1c0 */
  push32(0x1169db20u); f_1169c1c0();
  /* 1169db20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1169db23:;
  /* 1169db23 pop edi */
  EDI = (pop32());
  /* 1169db24 pop esi */
  ESI = (pop32());
  /* 1169db25 pop ebx */
  EBX = (pop32());
  /* 1169db26 mov esp, ebp */
  ESP = (EBP);
  /* 1169db28 pop ebp */
  EBP = (pop32());
  /* 1169db29 ret  */
  ESPCHK(0x1169d9c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db30 @ 0x1169db30 (291 bytes, 95 insns) */
void f_1169db30(void) {
  FTRACE(0x1169db30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169db30 push ebp */
  push32((uint32_t)(EBP));
  /* 1169db31 mov ebp, esp */
  EBP = (ESP);
  /* 1169db33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169db36 push ebx */
  push32((uint32_t)(EBX));
  /* 1169db37 push esi */
  push32((uint32_t)(ESI));
  /* 1169db38 push edi */
  push32((uint32_t)(EDI));
  /* 1169db39 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1169db40 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169db44 je 0x1169db52 */
  if (C.zf) goto L_1169db52;
  /* 1169db46 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169db4a je 0x1169db52 */
  if (C.zf) goto L_1169db52;
  /* 1169db4c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169db50 jne 0x1169db80 */
  if (!C.zf) goto L_1169db80;
L_1169db52:;
  /* 1169db52 push 0x116cb1c4 */
  push32((uint32_t)(0x116cb1c4u));
  /* 1169db57 push 0x116cacdc */
  push32((uint32_t)(0x116cacdcu));
  /* 1169db5c push 0 */
  push32((uint32_t)(0x0u));
  /* 1169db5e push 0 */
  push32((uint32_t)(0x0u));
  /* 1169db60 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169db62 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169db64 call 0x1169ade0 */
  push32(0x1169db69u); f_1169ade0();
  /* 1169db69 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169db6c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169db6f jne 0x1169db72 */
  if (!C.zf) goto L_1169db72;
  /* 1169db71 int3  */
  x86_unimpl("int3 @ 0x1169db71");
L_1169db72:;
  /* 1169db72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169db74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169db76 jne 0x1169db52 */
  if (!C.zf) goto L_1169db52;
  /* 1169db78 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169db7b jmp 0x1169dc4c */
  goto L_1169dc4c;
L_1169db80:;
  /* 1169db80 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1169db87 jmp 0x1169db92 */
  goto L_1169db92;
L_1169db89:;
  /* 1169db89 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169db8c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169db8f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1169db92:;
  /* 1169db92 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169db96 jge 0x1169dc1c */
  if ((C.sf==C.of)) goto L_1169dc1c;
  /* 1169db9c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169db9f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169dba2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169dba5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1169dba8 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 1169dbac sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169dbb0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169dbb3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169dbb6 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 1169dbba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169dbbd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169dbc0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169dbc3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1169dbc6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 1169dbca sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169dbce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169dbd1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169dbd4 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 1169dbd8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169dbdb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169dbde cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169dbe3 jne 0x1169dbf2 */
  if (!C.zf) goto L_1169dbf2;
  /* 1169dbe5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169dbe8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169dbeb cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169dbf0 je 0x1169dc17 */
  if (C.zf) goto L_1169dc17;
L_1169dbf2:;
  /* 1169dbf2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169dbf6 je 0x1169dc17 */
  if (C.zf) goto L_1169dc17;
  /* 1169dbf8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169dbfc jne 0x1169dc10 */
  if (!C.zf) goto L_1169dc10;
  /* 1169dbfe cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169dc02 jne 0x1169dc17 */
  if (!C.zf) goto L_1169dc17;
  /* 1169dc04 mov eax, dword ptr [0x116ce178] */
  EAX = (r32((uint32_t)(0x116ce178)));
  /* 1169dc09 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1169dc0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169dc0e je 0x1169dc17 */
  if (C.zf) goto L_1169dc17;
L_1169dc10:;
  /* 1169dc10 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_1169dc17:;
  /* 1169dc17 jmp 0x1169db89 */
  goto L_1169db89;
L_1169dc1c:;
  /* 1169dc1c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169dc1f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169dc22 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 1169dc25 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169dc28 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169dc2b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 1169dc2e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169dc31 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169dc34 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 1169dc37 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169dc3a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169dc3d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 1169dc40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169dc43 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1169dc49 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1169dc4c:;
  /* 1169dc4c pop edi */
  EDI = (pop32());
  /* 1169dc4d pop esi */
  ESI = (pop32());
  /* 1169dc4e pop ebx */
  EBX = (pop32());
  /* 1169dc4f mov esp, ebp */
  ESP = (EBP);
  /* 1169dc51 pop ebp */
  EBP = (pop32());
  /* 1169dc52 ret  */
  ESPCHK(0x1169db30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc60 @ 0x1169dc60 (697 bytes, 253 insns) */
void f_1169dc60(void) {
  FTRACE(0x1169dc60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169dc60 push ebp */
  push32((uint32_t)(EBP));
  /* 1169dc61 mov ebp, esp */
  EBP = (ESP);
  /* 1169dc63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169dc66 push ebx */
  push32((uint32_t)(EBX));
  /* 1169dc67 push esi */
  push32((uint32_t)(ESI));
  /* 1169dc68 push edi */
  push32((uint32_t)(EDI));
  /* 1169dc69 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1169dc70 push 9 */
  push32((uint32_t)(0x9u));
  /* 1169dc72 call 0x1169c120 */
  push32(0x1169dc77u); f_1169c120();
  /* 1169dc77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1169dc7a:;
  /* 1169dc7a push 0x116cb2bc */
  push32((uint32_t)(0x116cb2bcu));
  /* 1169dc7f push 0x116cacdc */
  push32((uint32_t)(0x116cacdcu));
  /* 1169dc84 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169dc86 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169dc88 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169dc8a push 0 */
  push32((uint32_t)(0x0u));
  /* 1169dc8c call 0x1169ade0 */
  push32(0x1169dc91u); f_1169ade0();
  /* 1169dc91 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169dc94 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169dc97 jne 0x1169dc9a */
  if (!C.zf) goto L_1169dc9a;
  /* 1169dc99 int3  */
  x86_unimpl("int3 @ 0x1169dc99");
L_1169dc9a:;
  /* 1169dc9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169dc9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169dc9e jne 0x1169dc7a */
  if (!C.zf) goto L_1169dc7a;
  /* 1169dca0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169dca4 je 0x1169dcae */
  if (C.zf) goto L_1169dcae;
  /* 1169dca6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169dca9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1169dcab mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1169dcae:;
  /* 1169dcae mov eax, dword ptr [0x116d05c0] */
  EAX = (r32((uint32_t)(0x116d05c0)));
  /* 1169dcb3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1169dcb6 jmp 0x1169dcc0 */
  goto L_1169dcc0;
L_1169dcb8:;
  /* 1169dcb8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169dcbb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1169dcbd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1169dcc0:;
  /* 1169dcc0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169dcc4 je 0x1169dee2 */
  if (C.zf) goto L_1169dee2;
  /* 1169dcca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169dccd cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169dcd0 je 0x1169dee2 */
  if (C.zf) goto L_1169dee2;
  /* 1169dcd6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169dcd9 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1169dcdc and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1169dce2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169dce5 je 0x1169dd14 */
  if (C.zf) goto L_1169dd14;
  /* 1169dce7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169dcea mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1169dced and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1169dcf3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1169dcf5 je 0x1169dd14 */
  if (C.zf) goto L_1169dd14;
  /* 1169dcf7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169dcfa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1169dcfd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1169dd02 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169dd05 jne 0x1169dd19 */
  if (!C.zf) goto L_1169dd19;
  /* 1169dd07 mov ecx, dword ptr [0x116ce178] */
  ECX = (r32((uint32_t)(0x116ce178)));
  /* 1169dd0d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 1169dd10 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1169dd12 jne 0x1169dd19 */
  if (!C.zf) goto L_1169dd19;
L_1169dd14:;
  /* 1169dd14 jmp 0x1169dedd */
  goto L_1169dedd;
L_1169dd19:;
  /* 1169dd19 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169dd1c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169dd20 je 0x1169dd92 */
  if (C.zf) goto L_1169dd92;
  /* 1169dd22 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169dd24 push 1 */
  push32((uint32_t)(0x1u));
  /* 1169dd26 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169dd29 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1169dd2c push ecx */
  push32((uint32_t)(ECX));
  /* 1169dd2d call 0x1169d7d0 */
  push32(0x1169dd32u); f_1169d7d0();
  /* 1169dd32 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169dd35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169dd37 jne 0x1169dd63 */
  if (!C.zf) goto L_1169dd63;
L_1169dd39:;
  /* 1169dd39 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169dd3c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1169dd3f push eax */
  push32((uint32_t)(EAX));
  /* 1169dd40 push 0x116cb2a8 */
  push32((uint32_t)(0x116cb2a8u));
  /* 1169dd45 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169dd47 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169dd49 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169dd4b push 0 */
  push32((uint32_t)(0x0u));
  /* 1169dd4d call 0x1169ade0 */
  push32(0x1169dd52u); f_1169ade0();
  /* 1169dd52 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169dd55 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169dd58 jne 0x1169dd5b */
  if (!C.zf) goto L_1169dd5b;
  /* 1169dd5a int3  */
  x86_unimpl("int3 @ 0x1169dd5a");
L_1169dd5b:;
  /* 1169dd5b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1169dd5d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1169dd5f jne 0x1169dd39 */
  if (!C.zf) goto L_1169dd39;
  /* 1169dd61 jmp 0x1169dd92 */
  goto L_1169dd92;
L_1169dd63:;
  /* 1169dd63 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169dd66 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1169dd69 push eax */
  push32((uint32_t)(EAX));
  /* 1169dd6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169dd6d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1169dd70 push edx */
  push32((uint32_t)(EDX));
  /* 1169dd71 push 0x116cb29c */
  push32((uint32_t)(0x116cb29cu));
  /* 1169dd76 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169dd78 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169dd7a push 0 */
  push32((uint32_t)(0x0u));
  /* 1169dd7c push 0 */
  push32((uint32_t)(0x0u));
  /* 1169dd7e call 0x1169ade0 */
  push32(0x1169dd83u); f_1169ade0();
  /* 1169dd83 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169dd86 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169dd89 jne 0x1169dd8c */
  if (!C.zf) goto L_1169dd8c;
  /* 1169dd8b int3  */
  x86_unimpl("int3 @ 0x1169dd8b");
L_1169dd8c:;
  /* 1169dd8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169dd8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169dd90 jne 0x1169dd63 */
  if (!C.zf) goto L_1169dd63;
L_1169dd92:;
  /* 1169dd92 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169dd95 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1169dd98 push edx */
  push32((uint32_t)(EDX));
  /* 1169dd99 push 0x116cb294 */
  push32((uint32_t)(0x116cb294u));
  /* 1169dd9e push 0 */
  push32((uint32_t)(0x0u));
  /* 1169dda0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169dda2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169dda4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169dda6 call 0x1169ade0 */
  push32(0x1169ddabu); f_1169ade0();
  /* 1169ddab add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169ddae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ddb1 jne 0x1169ddb4 */
  if (!C.zf) goto L_1169ddb4;
  /* 1169ddb3 int3  */
  x86_unimpl("int3 @ 0x1169ddb3");
L_1169ddb4:;
  /* 1169ddb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169ddb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169ddb8 jne 0x1169dd92 */
  if (!C.zf) goto L_1169dd92;
  /* 1169ddba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169ddbd mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1169ddc0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1169ddc6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ddc9 jne 0x1169de3c */
  if (!C.zf) goto L_1169de3c;
L_1169ddcb:;
  /* 1169ddcb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169ddce mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1169ddd1 push ecx */
  push32((uint32_t)(ECX));
  /* 1169ddd2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169ddd5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1169ddd8 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1169dddb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1169dde0 push eax */
  push32((uint32_t)(EAX));
  /* 1169dde1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169dde4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169dde7 push ecx */
  push32((uint32_t)(ECX));
  /* 1169dde8 push 0x116cb260 */
  push32((uint32_t)(0x116cb260u));
  /* 1169dded push 0 */
  push32((uint32_t)(0x0u));
  /* 1169ddef push 0 */
  push32((uint32_t)(0x0u));
  /* 1169ddf1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169ddf3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169ddf5 call 0x1169ade0 */
  push32(0x1169ddfau); f_1169ade0();
  /* 1169ddfa add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169ddfd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169de00 jne 0x1169de03 */
  if (!C.zf) goto L_1169de03;
  /* 1169de02 int3  */
  x86_unimpl("int3 @ 0x1169de02");
L_1169de03:;
  /* 1169de03 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1169de05 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1169de07 jne 0x1169ddcb */
  if (!C.zf) goto L_1169ddcb;
  /* 1169de09 cmp dword ptr [0x116d205c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d205c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169de10 je 0x1169de2b */
  if (C.zf) goto L_1169de2b;
  /* 1169de12 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169de15 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1169de18 push ecx */
  push32((uint32_t)(ECX));
  /* 1169de19 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169de1c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169de1f push edx */
  push32((uint32_t)(EDX));
  /* 1169de20 call dword ptr [0x116d205c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d205c))), 0x1169de26u);
  /* 1169de26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169de29 jmp 0x1169de37 */
  goto L_1169de37;
L_1169de2b:;
  /* 1169de2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169de2e push eax */
  push32((uint32_t)(EAX));
  /* 1169de2f call 0x1169df20 */
  push32(0x1169de34u); f_1169df20();
  /* 1169de34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1169de37:;
  /* 1169de37 jmp 0x1169dedd */
  goto L_1169dedd;
L_1169de3c:;
  /* 1169de3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169de3f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169de43 jne 0x1169de82 */
  if (!C.zf) goto L_1169de82;
L_1169de45:;
  /* 1169de45 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169de48 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1169de4b push eax */
  push32((uint32_t)(EAX));
  /* 1169de4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169de4f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169de52 push ecx */
  push32((uint32_t)(ECX));
  /* 1169de53 push 0x116cb238 */
  push32((uint32_t)(0x116cb238u));
  /* 1169de58 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169de5a push 0 */
  push32((uint32_t)(0x0u));
  /* 1169de5c push 0 */
  push32((uint32_t)(0x0u));
  /* 1169de5e push 0 */
  push32((uint32_t)(0x0u));
  /* 1169de60 call 0x1169ade0 */
  push32(0x1169de65u); f_1169ade0();
  /* 1169de65 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169de68 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169de6b jne 0x1169de6e */
  if (!C.zf) goto L_1169de6e;
  /* 1169de6d int3  */
  x86_unimpl("int3 @ 0x1169de6d");
L_1169de6e:;
  /* 1169de6e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1169de70 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1169de72 jne 0x1169de45 */
  if (!C.zf) goto L_1169de45;
  /* 1169de74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169de77 push eax */
  push32((uint32_t)(EAX));
  /* 1169de78 call 0x1169df20 */
  push32(0x1169de7du); f_1169df20();
  /* 1169de7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169de80 jmp 0x1169dedd */
  goto L_1169dedd;
L_1169de82:;
  /* 1169de82 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169de85 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1169de88 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1169de8e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169de91 jne 0x1169dedd */
  if (!C.zf) goto L_1169dedd;
L_1169de93:;
  /* 1169de93 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169de96 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1169de99 push ecx */
  push32((uint32_t)(ECX));
  /* 1169de9a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169de9d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1169dea0 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1169dea3 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1169dea8 push eax */
  push32((uint32_t)(EAX));
  /* 1169dea9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169deac add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169deaf push ecx */
  push32((uint32_t)(ECX));
  /* 1169deb0 push 0x116cb204 */
  push32((uint32_t)(0x116cb204u));
  /* 1169deb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169deb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169deb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169debb push 0 */
  push32((uint32_t)(0x0u));
  /* 1169debd call 0x1169ade0 */
  push32(0x1169dec2u); f_1169ade0();
  /* 1169dec2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169dec5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169dec8 jne 0x1169decb */
  if (!C.zf) goto L_1169decb;
  /* 1169deca int3  */
  x86_unimpl("int3 @ 0x1169deca");
L_1169decb:;
  /* 1169decb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1169decd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1169decf jne 0x1169de93 */
  if (!C.zf) goto L_1169de93;
  /* 1169ded1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169ded4 push eax */
  push32((uint32_t)(EAX));
  /* 1169ded5 call 0x1169df20 */
  push32(0x1169dedau); f_1169df20();
  /* 1169deda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1169dedd:;
  /* 1169dedd jmp 0x1169dcb8 */
  goto L_1169dcb8;
L_1169dee2:;
  /* 1169dee2 push 9 */
  push32((uint32_t)(0x9u));
  /* 1169dee4 call 0x1169c1c0 */
  push32(0x1169dee9u); f_1169c1c0();
  /* 1169dee9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1169deec:;
  /* 1169deec push 0x116cb1ec */
  push32((uint32_t)(0x116cb1ecu));
  /* 1169def1 push 0x116cacdc */
  push32((uint32_t)(0x116cacdcu));
  /* 1169def6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169def8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169defa push 0 */
  push32((uint32_t)(0x0u));
  /* 1169defc push 0 */
  push32((uint32_t)(0x0u));
  /* 1169defe call 0x1169ade0 */
  push32(0x1169df03u); f_1169ade0();
  /* 1169df03 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169df06 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169df09 jne 0x1169df0c */
  if (!C.zf) goto L_1169df0c;
  /* 1169df0b int3  */
  x86_unimpl("int3 @ 0x1169df0b");
L_1169df0c:;
  /* 1169df0c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1169df0e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1169df10 jne 0x1169deec */
  if (!C.zf) goto L_1169deec;
  /* 1169df12 pop edi */
  EDI = (pop32());
  /* 1169df13 pop esi */
  ESI = (pop32());
  /* 1169df14 pop ebx */
  EBX = (pop32());
  /* 1169df15 mov esp, ebp */
  ESP = (EBP);
  /* 1169df17 pop ebp */
  EBP = (pop32());
  /* 1169df18 ret  */
  ESPCHK(0x1169dc60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df20 @ 0x1169df20 (276 bytes, 89 insns) */
void f_1169df20(void) {
  FTRACE(0x1169df20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169df20 push ebp */
  push32((uint32_t)(EBP));
  /* 1169df21 mov ebp, esp */
  EBP = (ESP);
  /* 1169df23 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169df26 push ebx */
  push32((uint32_t)(EBX));
  /* 1169df27 push esi */
  push32((uint32_t)(ESI));
  /* 1169df28 push edi */
  push32((uint32_t)(EDI));
  /* 1169df29 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 1169df30 jmp 0x1169df3b */
  goto L_1169df3b;
L_1169df32:;
  /* 1169df32 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1169df35 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169df38 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_1169df3b:;
  /* 1169df3b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169df3e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169df42 jge 0x1169df4f */
  if ((C.sf==C.of)) goto L_1169df4f;
  /* 1169df44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169df47 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1169df4a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 1169df4d jmp 0x1169df56 */
  goto L_1169df56;
L_1169df4f:;
  /* 1169df4f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_1169df56:;
  /* 1169df56 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1169df59 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169df5c jge 0x1169dffc */
  if ((C.sf==C.of)) goto L_1169dffc;
  /* 1169df62 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169df65 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169df68 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 1169df6b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 1169df6e cmp dword ptr [0x116ce260], 1 */
  { uint32_t _a=(r32((uint32_t)(0x116ce260))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169df75 jle 0x1169df93 */
  if ((C.zf||C.sf!=C.of)) goto L_1169df93;
  /* 1169df77 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 1169df7c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1169df7f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1169df85 push ecx */
  push32((uint32_t)(ECX));
  /* 1169df86 call 0x116a17d0 */
  push32(0x1169df8bu); f_116a17d0();
  /* 1169df8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169df8e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 1169df91 jmp 0x1169dfb0 */
  goto L_1169dfb0;
L_1169df93:;
  /* 1169df93 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1169df96 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1169df9c mov eax, dword ptr [0x116ce26c] */
  EAX = (r32((uint32_t)(0x116ce26c)));
  /* 1169dfa1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1169dfa3 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1169dfa7 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 1169dfad mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_1169dfb0:;
  /* 1169dfb0 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169dfb4 je 0x1169dfc4 */
  if (C.zf) goto L_1169dfc4;
  /* 1169dfb6 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1169dfb9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1169dfbf mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 1169dfc2 jmp 0x1169dfcb */
  goto L_1169dfcb;
L_1169dfc4:;
  /* 1169dfc4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_1169dfcb:;
  /* 1169dfcb mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1169dfce mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 1169dfd1 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 1169dfd5 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1169dfd8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1169dfde push edx */
  push32((uint32_t)(EDX));
  /* 1169dfdf push 0x116cb2e0 */
  push32((uint32_t)(0x116cb2e0u));
  /* 1169dfe4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1169dfe7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1169dfea lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 1169dfee push ecx */
  push32((uint32_t)(ECX));
  /* 1169dfef call 0x116a4aa0 */
  push32(0x1169dff4u); f_116a4aa0();
  /* 1169dff4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169dff7 jmp 0x1169df32 */
  goto L_1169df32;
L_1169dffc:;
  /* 1169dffc mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1169dfff mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_1169e004:;
  /* 1169e004 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 1169e007 push eax */
  push32((uint32_t)(EAX));
  /* 1169e008 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 1169e00b push ecx */
  push32((uint32_t)(ECX));
  /* 1169e00c push 0x116cb2d0 */
  push32((uint32_t)(0x116cb2d0u));
  /* 1169e011 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169e013 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169e015 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169e017 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169e019 call 0x1169ade0 */
  push32(0x1169e01eu); f_1169ade0();
  /* 1169e01e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169e021 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169e024 jne 0x1169e027 */
  if (!C.zf) goto L_1169e027;
  /* 1169e026 int3  */
  x86_unimpl("int3 @ 0x1169e026");
L_1169e027:;
  /* 1169e027 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1169e029 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1169e02b jne 0x1169e004 */
  if (!C.zf) goto L_1169e004;
  /* 1169e02d pop edi */
  EDI = (pop32());
  /* 1169e02e pop esi */
  ESI = (pop32());
  /* 1169e02f pop ebx */
  EBX = (pop32());
  /* 1169e030 mov esp, ebp */
  ESP = (EBP);
  /* 1169e032 pop ebp */
  EBP = (pop32());
  /* 1169e033 ret  */
  ESPCHK(0x1169df20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e040 @ 0x1169e040 (116 bytes, 46 insns) */
void f_1169e040(void) {
  FTRACE(0x1169e040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169e040 push ebp */
  push32((uint32_t)(EBP));
  /* 1169e041 mov ebp, esp */
  EBP = (ESP);
  /* 1169e043 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169e046 push ebx */
  push32((uint32_t)(EBX));
  /* 1169e047 push esi */
  push32((uint32_t)(ESI));
  /* 1169e048 push edi */
  push32((uint32_t)(EDI));
  /* 1169e049 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 1169e04c push eax */
  push32((uint32_t)(EAX));
  /* 1169e04d call 0x1169d9c0 */
  push32(0x1169e052u); f_1169d9c0();
  /* 1169e052 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169e055 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169e059 jne 0x1169e074 */
  if (!C.zf) goto L_1169e074;
  /* 1169e05b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169e05f jne 0x1169e074 */
  if (!C.zf) goto L_1169e074;
  /* 1169e061 mov ecx, dword ptr [0x116ce178] */
  ECX = (r32((uint32_t)(0x116ce178)));
  /* 1169e067 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 1169e06a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1169e06c je 0x1169e0ab */
  if (C.zf) goto L_1169e0ab;
  /* 1169e06e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169e072 je 0x1169e0ab */
  if (C.zf) goto L_1169e0ab;
L_1169e074:;
  /* 1169e074 push 0x116cb2e8 */
  push32((uint32_t)(0x116cb2e8u));
  /* 1169e079 push 0x116cacdc */
  push32((uint32_t)(0x116cacdcu));
  /* 1169e07e push 0 */
  push32((uint32_t)(0x0u));
  /* 1169e080 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169e082 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169e084 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169e086 call 0x1169ade0 */
  push32(0x1169e08bu); f_1169ade0();
  /* 1169e08b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169e08e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169e091 jne 0x1169e094 */
  if (!C.zf) goto L_1169e094;
  /* 1169e093 int3  */
  x86_unimpl("int3 @ 0x1169e093");
L_1169e094:;
  /* 1169e094 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1169e096 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1169e098 jne 0x1169e074 */
  if (!C.zf) goto L_1169e074;
  /* 1169e09a push 0 */
  push32((uint32_t)(0x0u));
  /* 1169e09c call 0x1169dc60 */
  push32(0x1169e0a1u); f_1169dc60();
  /* 1169e0a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169e0a4 mov eax, 1 */
  EAX = (0x1u);
  /* 1169e0a9 jmp 0x1169e0ad */
  goto L_1169e0ad;
L_1169e0ab:;
  /* 1169e0ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1169e0ad:;
  /* 1169e0ad pop edi */
  EDI = (pop32());
  /* 1169e0ae pop esi */
  ESI = (pop32());
  /* 1169e0af pop ebx */
  EBX = (pop32());
  /* 1169e0b0 mov esp, ebp */
  ESP = (EBP);
  /* 1169e0b2 pop ebp */
  EBP = (pop32());
  /* 1169e0b3 ret  */
  ESPCHK(0x1169e040u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e0c0 @ 0x1169e0c0 (197 bytes, 79 insns) */
void f_1169e0c0(void) {
  FTRACE(0x1169e0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169e0c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1169e0c1 mov ebp, esp */
  EBP = (ESP);
  /* 1169e0c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1169e0c4 push ebx */
  push32((uint32_t)(EBX));
  /* 1169e0c5 push esi */
  push32((uint32_t)(ESI));
  /* 1169e0c6 push edi */
  push32((uint32_t)(EDI));
  /* 1169e0c7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169e0cb jne 0x1169e0d2 */
  if (!C.zf) goto L_1169e0d2;
  /* 1169e0cd jmp 0x1169e17e */
  goto L_1169e17e;
L_1169e0d2:;
  /* 1169e0d2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1169e0d9 jmp 0x1169e0e4 */
  goto L_1169e0e4;
L_1169e0db:;
  /* 1169e0db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169e0de add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169e0e1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1169e0e4:;
  /* 1169e0e4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169e0e8 jge 0x1169e12e */
  if ((C.sf==C.of)) goto L_1169e12e;
L_1169e0ea:;
  /* 1169e0ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169e0ed mov edx, dword ptr [ecx*4 + 0x116ce188] */
  EDX = (r32((uint32_t)(ECX*4 + 0x116ce188)));
  /* 1169e0f4 push edx */
  push32((uint32_t)(EDX));
  /* 1169e0f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169e0f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169e0fb mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 1169e0ff push edx */
  push32((uint32_t)(EDX));
  /* 1169e100 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169e103 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169e106 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 1169e10a push edx */
  push32((uint32_t)(EDX));
  /* 1169e10b push 0x116cb344 */
  push32((uint32_t)(0x116cb344u));
  /* 1169e110 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169e112 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169e114 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169e116 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169e118 call 0x1169ade0 */
  push32(0x1169e11du); f_1169ade0();
  /* 1169e11d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169e120 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169e123 jne 0x1169e126 */
  if (!C.zf) goto L_1169e126;
  /* 1169e125 int3  */
  x86_unimpl("int3 @ 0x1169e125");
L_1169e126:;
  /* 1169e126 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169e128 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169e12a jne 0x1169e0ea */
  if (!C.zf) goto L_1169e0ea;
  /* 1169e12c jmp 0x1169e0db */
  goto L_1169e0db;
L_1169e12e:;
  /* 1169e12e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169e131 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 1169e134 push edx */
  push32((uint32_t)(EDX));
  /* 1169e135 push 0x116cb320 */
  push32((uint32_t)(0x116cb320u));
  /* 1169e13a push 0 */
  push32((uint32_t)(0x0u));
  /* 1169e13c push 0 */
  push32((uint32_t)(0x0u));
  /* 1169e13e push 0 */
  push32((uint32_t)(0x0u));
  /* 1169e140 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169e142 call 0x1169ade0 */
  push32(0x1169e147u); f_1169ade0();
  /* 1169e147 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169e14a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169e14d jne 0x1169e150 */
  if (!C.zf) goto L_1169e150;
  /* 1169e14f int3  */
  x86_unimpl("int3 @ 0x1169e14f");
L_1169e150:;
  /* 1169e150 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169e152 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169e154 jne 0x1169e12e */
  if (!C.zf) goto L_1169e12e;
L_1169e156:;
  /* 1169e156 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169e159 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 1169e15c push edx */
  push32((uint32_t)(EDX));
  /* 1169e15d push 0x116cb300 */
  push32((uint32_t)(0x116cb300u));
  /* 1169e162 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169e164 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169e166 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169e168 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169e16a call 0x1169ade0 */
  push32(0x1169e16fu); f_1169ade0();
  /* 1169e16f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169e172 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169e175 jne 0x1169e178 */
  if (!C.zf) goto L_1169e178;
  /* 1169e177 int3  */
  x86_unimpl("int3 @ 0x1169e177");
L_1169e178:;
  /* 1169e178 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169e17a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169e17c jne 0x1169e156 */
  if (!C.zf) goto L_1169e156;
L_1169e17e:;
  /* 1169e17e pop edi */
  EDI = (pop32());
  /* 1169e17f pop esi */
  ESI = (pop32());
  /* 1169e180 pop ebx */
  EBX = (pop32());
  /* 1169e181 mov esp, ebp */
  ESP = (EBP);
  /* 1169e183 pop ebp */
  EBP = (pop32());
  /* 1169e184 ret  */
  ESPCHK(0x1169e0c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e190 @ 0x1169e190 (239 bytes, 88 insns) */
void f_1169e190(void) {
  FTRACE(0x1169e190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169e190 push ebp */
  push32((uint32_t)(EBP));
  /* 1169e191 mov ebp, esp */
  EBP = (ESP);
  /* 1169e193 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169e196 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169e199 cmp dword ptr [eax], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169e19f jne 0x1169e1aa */
  if (!C.zf) goto L_1169e1aa;
  /* 1169e1a1 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1169e1a8 jmp 0x1169e1b2 */
  goto L_1169e1b2;
L_1169e1aa:;
  /* 1169e1aa call 0x1169f1a0 */
  push32(0x1169e1afu); f_1169f1a0();
  /* 1169e1af mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1169e1b2:;
  /* 1169e1b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169e1b5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1169e1b8 and edx, 0x66 */
  { uint32_t _r=(EDX)&(0x66u); EDX = (_r); fl_logic(_r,32); }
  /* 1169e1bb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1169e1bd je 0x1169e1ee */
  if (C.zf) goto L_1169e1ee;
  /* 1169e1bf mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169e1c2 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169e1c6 je 0x1169e1e4 */
  if (C.zf) goto L_1169e1e4;
  /* 1169e1c8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169e1cc jne 0x1169e1e4 */
  if (!C.zf) goto L_1169e1e4;
  /* 1169e1ce push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1169e1d0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169e1d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1169e1d4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169e1d7 push edx */
  push32((uint32_t)(EDX));
  /* 1169e1d8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169e1db push eax */
  push32((uint32_t)(EAX));
  /* 1169e1dc call 0x1169e700 */
  push32(0x1169e1e1u); f_1169e700();
  /* 1169e1e1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1169e1e4:;
  /* 1169e1e4 mov eax, 1 */
  EAX = (0x1u);
  /* 1169e1e9 jmp 0x1169e27b */
  goto L_1169e27b;
L_1169e1ee:;
  /* 1169e1ee mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169e1f1 cmp dword ptr [ecx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169e1f5 je 0x1169e276 */
  if (C.zf) goto L_1169e276;
  /* 1169e1f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169e1fa cmp dword ptr [edx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169e200 jne 0x1169e24e */
  if (!C.zf) goto L_1169e24e;
  /* 1169e202 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169e205 cmp dword ptr [eax + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169e20c jbe 0x1169e24e */
  if ((C.cf||C.zf)) goto L_1169e24e;
  /* 1169e20e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169e211 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1169e214 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1169e217 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1169e21a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169e21e je 0x1169e24e */
  if (C.zf) goto L_1169e24e;
  /* 1169e220 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 1169e223 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1169e229 push ecx */
  push32((uint32_t)(ECX));
  /* 1169e22a mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1169e22d push edx */
  push32((uint32_t)(EDX));
  /* 1169e22e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1169e231 push eax */
  push32((uint32_t)(EAX));
  /* 1169e232 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169e235 push ecx */
  push32((uint32_t)(ECX));
  /* 1169e236 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169e239 push edx */
  push32((uint32_t)(EDX));
  /* 1169e23a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169e23d push eax */
  push32((uint32_t)(EAX));
  /* 1169e23e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169e241 push ecx */
  push32((uint32_t)(ECX));
  /* 1169e242 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169e245 push edx */
  push32((uint32_t)(EDX));
  /* 1169e246 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1169e249u);
  /* 1169e249 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169e24c jmp 0x1169e27b */
  goto L_1169e27b;
L_1169e24e:;
  /* 1169e24e mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1169e251 push eax */
  push32((uint32_t)(EAX));
  /* 1169e252 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1169e255 push ecx */
  push32((uint32_t)(ECX));
  /* 1169e256 mov dl, byte ptr [ebp + 0x24] */
  DL = (r8((uint32_t)(EBP + 0x24)));
  /* 1169e259 push edx */
  push32((uint32_t)(EDX));
  /* 1169e25a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169e25d push eax */
  push32((uint32_t)(EAX));
  /* 1169e25e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169e261 push ecx */
  push32((uint32_t)(ECX));
  /* 1169e262 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169e265 push edx */
  push32((uint32_t)(EDX));
  /* 1169e266 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169e269 push eax */
  push32((uint32_t)(EAX));
  /* 1169e26a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169e26d push ecx */
  push32((uint32_t)(ECX));
  /* 1169e26e call 0x1169e280 */
  push32(0x1169e273u); f_1169e280();
  /* 1169e273 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1169e276:;
  /* 1169e276 mov eax, 1 */
  EAX = (0x1u);
L_1169e27b:;
  /* 1169e27b mov esp, ebp */
  ESP = (EBP);
  /* 1169e27d pop ebp */
  EBP = (pop32());
  /* 1169e27e ret  */
  ESPCHK(0x1169e190u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e280 @ 0x1169e280 (672 bytes, 222 insns) */
void f_1169e280(void) {
  FTRACE(0x1169e280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169e280 push ebp */
  push32((uint32_t)(EBP));
  /* 1169e281 mov ebp, esp */
  EBP = (ESP);
  /* 1169e283 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169e286 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 1169e28a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169e28d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1169e290 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1169e293 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169e297 jl 0x1169e2ad */
  if ((C.sf!=C.of)) goto L_1169e2ad;
  /* 1169e299 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169e29c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169e29f cmp eax, dword ptr [edx + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169e2a2 jge 0x1169e2ad */
  if ((C.sf==C.of)) goto L_1169e2ad;
  /* 1169e2a4 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 1169e2ab jmp 0x1169e2b5 */
  goto L_1169e2b5;
L_1169e2ad:;
  /* 1169e2ad call 0x1169f1a0 */
  push32(0x1169e2b2u); f_1169f1a0();
  /* 1169e2b2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
L_1169e2b5:;
  /* 1169e2b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169e2b8 cmp dword ptr [ecx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169e2be jne 0x1169e375 */
  if (!C.zf) goto L_1169e375;
  /* 1169e2c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169e2c7 cmp dword ptr [edx + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169e2cb jne 0x1169e375 */
  if (!C.zf) goto L_1169e375;
  /* 1169e2d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169e2d4 cmp dword ptr [eax + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169e2db jne 0x1169e375 */
  if (!C.zf) goto L_1169e375;
  /* 1169e2e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169e2e4 cmp dword ptr [ecx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169e2e8 jne 0x1169e375 */
  if (!C.zf) goto L_1169e375;
  /* 1169e2ee call 0x1169ef20 */
  push32(0x1169e2f3u); f_1169ef20();
  /* 1169e2f3 cmp dword ptr [eax + 0x6c], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169e2f7 jne 0x1169e2fe */
  if (!C.zf) goto L_1169e2fe;
  /* 1169e2f9 jmp 0x1169e51c */
  goto L_1169e51c;
L_1169e2fe:;
  /* 1169e2fe call 0x1169ef20 */
  push32(0x1169e303u); f_1169ef20();
  /* 1169e303 mov edx, dword ptr [eax + 0x6c] */
  EDX = (r32((uint32_t)(EAX + 0x6c)));
  /* 1169e306 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1169e309 call 0x1169ef20 */
  push32(0x1169e30eu); f_1169ef20();
  /* 1169e30e mov eax, dword ptr [eax + 0x70] */
  EAX = (r32((uint32_t)(EAX + 0x70)));
  /* 1169e311 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1169e314 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
  /* 1169e318 push 1 */
  push32((uint32_t)(0x1u));
  /* 1169e31a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169e31d push ecx */
  push32((uint32_t)(ECX));
  /* 1169e31e call 0x116a4c40 */
  push32(0x1169e323u); f_116a4c40();
  /* 1169e323 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169e326 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169e328 je 0x1169e333 */
  if (C.zf) goto L_1169e333;
  /* 1169e32a mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 1169e331 jmp 0x1169e33b */
  goto L_1169e33b;
L_1169e333:;
  /* 1169e333 call 0x1169f1a0 */
  push32(0x1169e338u); f_1169f1a0();
  /* 1169e338 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_1169e33b:;
  /* 1169e33b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169e33e cmp dword ptr [edx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169e344 jne 0x1169e36e */
  if (!C.zf) goto L_1169e36e;
  /* 1169e346 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169e349 cmp dword ptr [eax + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169e34d jne 0x1169e36e */
  if (!C.zf) goto L_1169e36e;
  /* 1169e34f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169e352 cmp dword ptr [ecx + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169e359 jne 0x1169e36e */
  if (!C.zf) goto L_1169e36e;
  /* 1169e35b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169e35e cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169e362 jne 0x1169e36e */
  if (!C.zf) goto L_1169e36e;
  /* 1169e364 call 0x1169f1a0 */
  push32(0x1169e369u); f_1169f1a0();
  /* 1169e369 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1169e36c jmp 0x1169e375 */
  goto L_1169e375;
L_1169e36e:;
  /* 1169e36e mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_1169e375:;
  /* 1169e375 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169e378 cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169e37e jne 0x1169e4dc */
  if (!C.zf) goto L_1169e4dc;
  /* 1169e384 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169e387 cmp dword ptr [ecx + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169e38b jne 0x1169e4dc */
  if (!C.zf) goto L_1169e4dc;
  /* 1169e391 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169e394 cmp dword ptr [edx + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169e39b jne 0x1169e4dc */
  if (!C.zf) goto L_1169e4dc;
  /* 1169e3a1 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1169e3a4 push eax */
  push32((uint32_t)(EAX));
  /* 1169e3a5 lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 1169e3a8 push ecx */
  push32((uint32_t)(ECX));
  /* 1169e3a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169e3ac push edx */
  push32((uint32_t)(EDX));
  /* 1169e3ad mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1169e3b0 push eax */
  push32((uint32_t)(EAX));
  /* 1169e3b1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169e3b4 push ecx */
  push32((uint32_t)(ECX));
  /* 1169e3b5 call 0x1169a4d0 */
  push32(0x1169e3bau); f_1169a4d0();
  /* 1169e3ba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169e3bd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1169e3c0 jmp 0x1169e3d4 */
  goto L_1169e3d4;
L_1169e3c2:;
  /* 1169e3c2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1169e3c5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169e3c8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1169e3cb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1169e3ce add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169e3d1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1169e3d4:;
  /* 1169e3d4 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1169e3d7 cmp ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169e3da jae 0x1169e4bf */
  if (!C.cf) goto L_1169e4bf;
  /* 1169e3e0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1169e3e3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1169e3e5 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169e3e8 jg 0x1169e3f5 */
  if ((!C.zf&&C.sf==C.of)) goto L_1169e3f5;
  /* 1169e3ea mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1169e3ed mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169e3f0 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169e3f3 jle 0x1169e3f7 */
  if ((C.zf||C.sf!=C.of)) goto L_1169e3f7;
L_1169e3f5:;
  /* 1169e3f5 jmp 0x1169e3c2 */
  goto L_1169e3c2;
L_1169e3f7:;
  /* 1169e3f7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1169e3fa mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1169e3fd mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 1169e400 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1169e403 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1169e406 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1169e409 jmp 0x1169e41d */
  goto L_1169e41d;
L_1169e40b:;
  /* 1169e40b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1169e40e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169e411 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1169e414 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1169e417 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169e41a mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_1169e41d:;
  /* 1169e41d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169e421 jle 0x1169e4ba */
  if ((C.zf||C.sf!=C.of)) goto L_1169e4ba;
  /* 1169e427 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169e42a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1169e42d mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1169e430 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169e433 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1169e436 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169e439 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1169e43c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1169e43f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1169e441 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1169e444 jmp 0x1169e458 */
  goto L_1169e458;
L_1169e446:;
  /* 1169e446 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1169e449 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169e44c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1169e44f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1169e452 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169e455 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_1169e458:;
  /* 1169e458 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169e45c jle 0x1169e4b5 */
  if ((C.zf||C.sf!=C.of)) goto L_1169e4b5;
  /* 1169e45e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169e461 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1169e464 push ecx */
  push32((uint32_t)(ECX));
  /* 1169e465 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1169e468 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1169e46a push eax */
  push32((uint32_t)(EAX));
  /* 1169e46b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1169e46e push ecx */
  push32((uint32_t)(ECX));
  /* 1169e46f call 0x1169e640 */
  push32(0x1169e474u); f_1169e640();
  /* 1169e474 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169e477 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169e479 jne 0x1169e47d */
  if (!C.zf) goto L_1169e47d;
  /* 1169e47b jmp 0x1169e446 */
  goto L_1169e446;
L_1169e47d:;
  /* 1169e47d mov dl, byte ptr [ebp - 8] */
  DL = (r8((uint32_t)(EBP + -0x8)));
  /* 1169e480 push edx */
  push32((uint32_t)(EDX));
  /* 1169e481 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 1169e484 push eax */
  push32((uint32_t)(EAX));
  /* 1169e485 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1169e488 push ecx */
  push32((uint32_t)(ECX));
  /* 1169e489 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1169e48c push edx */
  push32((uint32_t)(EDX));
  /* 1169e48d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1169e490 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1169e492 push ecx */
  push32((uint32_t)(ECX));
  /* 1169e493 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1169e496 push edx */
  push32((uint32_t)(EDX));
  /* 1169e497 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169e49a push eax */
  push32((uint32_t)(EAX));
  /* 1169e49b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169e49e push ecx */
  push32((uint32_t)(ECX));
  /* 1169e49f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169e4a2 push edx */
  push32((uint32_t)(EDX));
  /* 1169e4a3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169e4a6 push eax */
  push32((uint32_t)(EAX));
  /* 1169e4a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169e4aa push ecx */
  push32((uint32_t)(ECX));
  /* 1169e4ab call 0x1169e830 */
  push32(0x1169e4b0u); f_1169e830();
  /* 1169e4b0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169e4b3 jmp 0x1169e51a */
  goto L_1169e51a;
L_1169e4b5:;
  /* 1169e4b5 jmp 0x1169e40b */
  goto L_1169e40b;
L_1169e4ba:;
  /* 1169e4ba jmp 0x1169e3c2 */
  goto L_1169e3c2;
L_1169e4bf:;
  /* 1169e4bf mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1169e4c2 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1169e4c8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1169e4ca je 0x1169e4da */
  if (C.zf) goto L_1169e4da;
  /* 1169e4cc push 1 */
  push32((uint32_t)(0x1u));
  /* 1169e4ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169e4d1 push eax */
  push32((uint32_t)(EAX));
  /* 1169e4d2 call 0x1169ed10 */
  push32(0x1169e4d7u); f_1169ed10();
  /* 1169e4d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1169e4da:;
  /* 1169e4da jmp 0x1169e518 */
  goto L_1169e518;
L_1169e4dc:;
  /* 1169e4dc mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1169e4df and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1169e4e5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1169e4e7 jne 0x1169e513 */
  if (!C.zf) goto L_1169e513;
  /* 1169e4e9 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 1169e4ec push edx */
  push32((uint32_t)(EDX));
  /* 1169e4ed mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1169e4f0 push eax */
  push32((uint32_t)(EAX));
  /* 1169e4f1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169e4f4 push ecx */
  push32((uint32_t)(ECX));
  /* 1169e4f5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169e4f8 push edx */
  push32((uint32_t)(EDX));
  /* 1169e4f9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169e4fc push eax */
  push32((uint32_t)(EAX));
  /* 1169e4fd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169e500 push ecx */
  push32((uint32_t)(ECX));
  /* 1169e501 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169e504 push edx */
  push32((uint32_t)(EDX));
  /* 1169e505 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169e508 push eax */
  push32((uint32_t)(EAX));
  /* 1169e509 call 0x1169e520 */
  push32(0x1169e50eu); f_1169e520();
  /* 1169e50e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169e511 jmp 0x1169e518 */
  goto L_1169e518;
L_1169e513:;
  /* 1169e513 call 0x1169f0f0 */
  push32(0x1169e518u); f_1169f0f0();
L_1169e518:;
  /* 1169e518 jmp 0x1169e51c */
  goto L_1169e51c;
L_1169e51a:;
  /* 1169e51a jmp 0x1169e4ba */
  goto L_1169e4ba;
L_1169e51c:;
  /* 1169e51c mov esp, ebp */
  ESP = (EBP);
  /* 1169e51e pop ebp */
  EBP = (pop32());
  /* 1169e51f ret  */
  ESPCHK(0x1169e280u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e520 @ 0x1169e520 (277 bytes, 107 insns) */
void f_1169e520(void) {
  FTRACE(0x1169e520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169e520 push ebp */
  push32((uint32_t)(EBP));
  /* 1169e521 mov ebp, esp */
  EBP = (ESP);
  /* 1169e523 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169e526 call 0x1169ef20 */
  push32(0x1169e52bu); f_1169ef20();
  /* 1169e52b cmp dword ptr [eax + 0x68], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169e52f je 0x1169e55e */
  if (C.zf) goto L_1169e55e;
  /* 1169e531 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 1169e534 push eax */
  push32((uint32_t)(EAX));
  /* 1169e535 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1169e538 push ecx */
  push32((uint32_t)(ECX));
  /* 1169e539 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169e53c push edx */
  push32((uint32_t)(EDX));
  /* 1169e53d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169e540 push eax */
  push32((uint32_t)(EAX));
  /* 1169e541 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169e544 push ecx */
  push32((uint32_t)(ECX));
  /* 1169e545 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169e548 push edx */
  push32((uint32_t)(EDX));
  /* 1169e549 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169e54c push eax */
  push32((uint32_t)(EAX));
  /* 1169e54d call 0x1169a370 */
  push32(0x1169e552u); f_1169a370();
  /* 1169e552 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169e555 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169e557 je 0x1169e55e */
  if (C.zf) goto L_1169e55e;
  /* 1169e559 jmp 0x1169e631 */
  goto L_1169e631;
L_1169e55e:;
  /* 1169e55e lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1169e561 push ecx */
  push32((uint32_t)(ECX));
  /* 1169e562 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 1169e565 push edx */
  push32((uint32_t)(EDX));
  /* 1169e566 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1169e569 push eax */
  push32((uint32_t)(EAX));
  /* 1169e56a mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1169e56d push ecx */
  push32((uint32_t)(ECX));
  /* 1169e56e mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169e571 push edx */
  push32((uint32_t)(EDX));
  /* 1169e572 call 0x1169a4d0 */
  push32(0x1169e577u); f_1169a4d0();
  /* 1169e577 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169e57a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1169e57d jmp 0x1169e591 */
  goto L_1169e591;
L_1169e57f:;
  /* 1169e57f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1169e582 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169e585 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1169e588 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169e58b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169e58e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1169e591:;
  /* 1169e591 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1169e594 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169e597 jae 0x1169e631 */
  if (!C.cf) goto L_1169e631;
  /* 1169e59d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169e5a0 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1169e5a3 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169e5a5 jl 0x1169e5e9 */
  if ((C.sf!=C.of)) goto L_1169e5e9;
  /* 1169e5a7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169e5aa mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1169e5ad cmp eax, dword ptr [edx + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169e5b0 jg 0x1169e5e9 */
  if ((!C.zf&&C.sf==C.of)) goto L_1169e5e9;
  /* 1169e5b2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169e5b5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1169e5b8 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169e5bb shl edx, 4 */
  EDX = (sh_shl((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1169e5be mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169e5c1 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1169e5c4 cmp dword ptr [ecx + edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + EDX*1 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169e5c9 je 0x1169e5eb */
  if (C.zf) goto L_1169e5eb;
  /* 1169e5cb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169e5ce mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1169e5d1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169e5d4 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1169e5d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169e5da mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1169e5dd mov eax, dword ptr [edx + eax + 4] */
  EAX = (r32((uint32_t)(EDX + EAX*1 + 0x4)));
  /* 1169e5e1 movsx ecx, byte ptr [eax + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x8))));
  /* 1169e5e5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1169e5e7 je 0x1169e5eb */
  if (C.zf) goto L_1169e5eb;
L_1169e5e9:;
  /* 1169e5e9 jmp 0x1169e57f */
  goto L_1169e57f;
L_1169e5eb:;
  /* 1169e5eb push 1 */
  push32((uint32_t)(0x1u));
  /* 1169e5ed mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 1169e5f0 push edx */
  push32((uint32_t)(EDX));
  /* 1169e5f1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1169e5f4 push eax */
  push32((uint32_t)(EAX));
  /* 1169e5f5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169e5f8 push ecx */
  push32((uint32_t)(ECX));
  /* 1169e5f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169e5fb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169e5fe mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1169e601 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169e604 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1169e607 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169e60a mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1169e60d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169e60f push edx */
  push32((uint32_t)(EDX));
  /* 1169e610 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169e613 push eax */
  push32((uint32_t)(EAX));
  /* 1169e614 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169e617 push ecx */
  push32((uint32_t)(ECX));
  /* 1169e618 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169e61b push edx */
  push32((uint32_t)(EDX));
  /* 1169e61c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169e61f push eax */
  push32((uint32_t)(EAX));
  /* 1169e620 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169e623 push ecx */
  push32((uint32_t)(ECX));
  /* 1169e624 call 0x1169e830 */
  push32(0x1169e629u); f_1169e830();
  /* 1169e629 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169e62c jmp 0x1169e57f */
  goto L_1169e57f;
L_1169e631:;
  /* 1169e631 mov esp, ebp */
  ESP = (EBP);
  /* 1169e633 pop ebp */
  EBP = (pop32());
  /* 1169e634 ret  */
  ESPCHK(0x1169e520u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e640 @ 0x1169e640 (182 bytes, 69 insns) */
void f_1169e640(void) {
  FTRACE(0x1169e640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169e640 push ebp */
  push32((uint32_t)(EBP));
  /* 1169e641 mov ebp, esp */
  EBP = (ESP);
  /* 1169e643 push ecx */
  push32((uint32_t)(ECX));
  /* 1169e644 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169e647 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169e64b je 0x1169e65b */
  if (C.zf) goto L_1169e65b;
  /* 1169e64d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169e650 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1169e653 movsx eax, byte ptr [edx + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x8))));
  /* 1169e657 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169e659 jne 0x1169e665 */
  if (!C.zf) goto L_1169e665;
L_1169e65b:;
  /* 1169e65b mov eax, 1 */
  EAX = (0x1u);
  /* 1169e660 jmp 0x1169e6f2 */
  goto L_1169e6f2;
L_1169e665:;
  /* 1169e665 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169e668 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169e66b mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1169e66e cmp eax, dword ptr [edx + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169e671 je 0x1169e697 */
  if (C.zf) goto L_1169e697;
  /* 1169e673 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169e676 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1169e679 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169e67c push edx */
  push32((uint32_t)(EDX));
  /* 1169e67d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169e680 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1169e683 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169e686 push ecx */
  push32((uint32_t)(ECX));
  /* 1169e687 call 0x116a4cd0 */
  push32(0x1169e68cu); f_116a4cd0();
  /* 1169e68c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169e68f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169e691 je 0x1169e697 */
  if (C.zf) goto L_1169e697;
  /* 1169e693 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169e695 jmp 0x1169e6f2 */
  goto L_1169e6f2;
L_1169e697:;
  /* 1169e697 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169e69a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1169e69c and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1169e69f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169e6a1 je 0x1169e6af */
  if (C.zf) goto L_1169e6af;
  /* 1169e6a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169e6a6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1169e6a8 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1169e6ab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1169e6ad je 0x1169e6e8 */
  if (C.zf) goto L_1169e6e8;
L_1169e6af:;
  /* 1169e6af mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169e6b2 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1169e6b4 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1169e6b7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1169e6b9 je 0x1169e6c7 */
  if (C.zf) goto L_1169e6c7;
  /* 1169e6bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169e6be mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1169e6c0 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1169e6c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169e6c5 je 0x1169e6e8 */
  if (C.zf) goto L_1169e6e8;
L_1169e6c7:;
  /* 1169e6c7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169e6ca mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1169e6cc and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1169e6cf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1169e6d1 je 0x1169e6df */
  if (C.zf) goto L_1169e6df;
  /* 1169e6d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169e6d6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1169e6d8 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1169e6db test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1169e6dd je 0x1169e6e8 */
  if (C.zf) goto L_1169e6e8;
L_1169e6df:;
  /* 1169e6df mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1169e6e6 jmp 0x1169e6ef */
  goto L_1169e6ef;
L_1169e6e8:;
  /* 1169e6e8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1169e6ef:;
  /* 1169e6ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1169e6f2:;
  /* 1169e6f2 mov esp, ebp */
  ESP = (EBP);
  /* 1169e6f4 pop ebp */
  EBP = (pop32());
  /* 1169e6f5 ret  */
  ESPCHK(0x1169e640u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e700 @ 0x1169e700 (224 bytes, 77 insns) */
void f_1169e700(void) {
  FTRACE(0x1169e700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169e700 push ebp */
  push32((uint32_t)(EBP));
  /* 1169e701 mov ebp, esp */
  EBP = (ESP);
  /* 1169e703 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1169e705 push 0x116cb368 */
  push32((uint32_t)(0x116cb368u));
  /* 1169e70a push 0x116a4d5c */
  push32((uint32_t)(0x116a4d5cu));
  /* 1169e70f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1169e715 push eax */
  push32((uint32_t)(EAX));
  /* 1169e716 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1169e71d add esp, -0x14 */
  { uint32_t _a=(ESP),_b=(0xffffffecu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169e720 push ebx */
  push32((uint32_t)(EBX));
  /* 1169e721 push esi */
  push32((uint32_t)(ESI));
  /* 1169e722 push edi */
  push32((uint32_t)(EDI));
  /* 1169e723 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1169e726 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169e729 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1169e72c mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
L_1169e72f:;
  /* 1169e72f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1169e732 cmp edx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169e735 je 0x1169e7c4 */
  if (C.zf) goto L_1169e7c4;
  /* 1169e73b cmp dword ptr [ebp - 0x1c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169e73f jle 0x1169e755 */
  if ((C.zf||C.sf!=C.of)) goto L_1169e755;
  /* 1169e741 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169e744 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1169e747 cmp ecx, dword ptr [eax + 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169e74a jge 0x1169e755 */
  if ((C.sf==C.of)) goto L_1169e755;
  /* 1169e74c mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1169e753 jmp 0x1169e75d */
  goto L_1169e75d;
L_1169e755:;
  /* 1169e755 call 0x1169f1a0 */
  push32(0x1169e75au); f_1169f1a0();
  /* 1169e75a mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1169e75d:;
  /* 1169e75d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1169e764 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169e767 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1169e76a mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1169e76d cmp dword ptr [eax + ecx*8 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + ECX*8 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169e772 je 0x1169e790 */
  if (C.zf) goto L_1169e790;
  /* 1169e774 push 0x103 */
  push32((uint32_t)(0x103u));
  /* 1169e779 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169e77c push edx */
  push32((uint32_t)(EDX));
  /* 1169e77d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169e780 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1169e783 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1169e786 mov eax, dword ptr [ecx + edx*8 + 4] */
  EAX = (r32((uint32_t)(ECX + EDX*8 + 0x4)));
  /* 1169e78a push eax */
  push32((uint32_t)(EAX));
  /* 1169e78b call 0x1169edf0 */
  push32(0x1169e790u); f_1169edf0();
L_1169e790:;
  /* 1169e790 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1169e797 jmp 0x1169e7b0 */
  goto L_1169e7b0;
  /* 1169e799 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1169e79c push ecx */
  push32((uint32_t)(ECX));
  /* 1169e79d call 0x1169e800 */
  push32(0x1169e7a2u); f_1169e800();
  /* 1169e7a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169e7a5 ret  */
  ESPCHK(0x1169e700u, _esp0);
  ESP += 4; return;
  /* 1169e7a6 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1169e7a9 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1169e7b0:;
  /* 1169e7b0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169e7b3 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1169e7b6 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1169e7b9 mov edx, dword ptr [eax + ecx*8] */
  EDX = (r32((uint32_t)(EAX + ECX*8)));
  /* 1169e7bc mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1169e7bf jmp 0x1169e72f */
  goto L_1169e72f;
L_1169e7c4:;
  /* 1169e7c4 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1169e7c7 cmp eax, dword ptr [ebp + 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169e7ca jne 0x1169e7d5 */
  if (!C.zf) goto L_1169e7d5;
  /* 1169e7cc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1169e7d3 jmp 0x1169e7dd */
  goto L_1169e7dd;
L_1169e7d5:;
  /* 1169e7d5 call 0x1169f1a0 */
  push32(0x1169e7dau); f_1169f1a0();
  /* 1169e7da mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1169e7dd:;
  /* 1169e7dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169e7e0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1169e7e3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1169e7e6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1169e7e9 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1169e7f0 pop edi */
  EDI = (pop32());
  /* 1169e7f1 pop esi */
  ESI = (pop32());
  /* 1169e7f2 pop ebx */
  EBX = (pop32());
  /* 1169e7f3 mov esp, ebp */
  ESP = (EBP);
  /* 1169e7f5 pop ebp */
  EBP = (pop32());
  /* 1169e7f6 ret  */
  ESPCHK(0x1169e700u, _esp0);
  ESP += 4; return;
}

/* ArrayUnwindFilter @ 0x1169e800 (44 bytes, 17 insns) */
void f_1169e800(void) {
  FTRACE(0x1169e800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169e800 push ebp */
  push32((uint32_t)(EBP));
  /* 1169e801 mov ebp, esp */
  EBP = (ESP);
  /* 1169e803 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169e806 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169e809 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1169e80b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1169e80e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169e811 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1169e813 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1169e816 cmp dword ptr [ebp - 8], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169e81d je 0x1169e821 */
  if (C.zf) goto L_1169e821;
  /* 1169e81f jmp 0x1169e826 */
  goto L_1169e826;
L_1169e821:;
  /* 1169e821 call 0x1169f0f0 */
  push32(0x1169e826u); f_1169f0f0();
L_1169e826:;
  /* 1169e826 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169e828 mov esp, ebp */
  ESP = (EBP);
  /* 1169e82a pop ebp */
  EBP = (pop32());
  /* 1169e82b ret  */
  ESPCHK(0x1169e800u, _esp0);
  ESP += 4; return;
}

/* CatchIt @ 0x1169e830 (183 bytes, 73 insns) */
void f_1169e830(void) {
  FTRACE(0x1169e830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169e830 push ebp */
  push32((uint32_t)(EBP));
  /* 1169e831 mov ebp, esp */
  EBP = (ESP);
  /* 1169e833 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169e836 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169e839 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1169e83c cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169e840 je 0x1169e85a */
  if (C.zf) goto L_1169e85a;
  /* 1169e842 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1169e845 push ecx */
  push32((uint32_t)(ECX));
  /* 1169e846 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1169e849 push edx */
  push32((uint32_t)(EDX));
  /* 1169e84a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169e84d push eax */
  push32((uint32_t)(EAX));
  /* 1169e84e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169e851 push ecx */
  push32((uint32_t)(ECX));
  /* 1169e852 call 0x1169ea90 */
  push32(0x1169e857u); f_1169ea90();
  /* 1169e857 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1169e85a:;
  /* 1169e85a cmp dword ptr [ebp + 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169e85e jne 0x1169e86f */
  if (!C.zf) goto L_1169e86f;
  /* 1169e860 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169e863 push edx */
  push32((uint32_t)(EDX));
  /* 1169e864 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169e867 push eax */
  push32((uint32_t)(EAX));
  /* 1169e868 call 0x1169a1f0 */
  push32(0x1169e86du); f_1169a1f0();
  /* 1169e86d jmp 0x1169e87c */
  goto L_1169e87c;
L_1169e86f:;
  /* 1169e86f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169e872 push ecx */
  push32((uint32_t)(ECX));
  /* 1169e873 mov edx, dword ptr [ebp + 0x2c] */
  EDX = (r32((uint32_t)(EBP + 0x2c)));
  /* 1169e876 push edx */
  push32((uint32_t)(EDX));
  /* 1169e877 call 0x1169a1f0 */
  push32(0x1169e87cu); f_1169a1f0();
L_1169e87c:;
  /* 1169e87c mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 1169e87f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1169e881 push ecx */
  push32((uint32_t)(ECX));
  /* 1169e882 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169e885 push edx */
  push32((uint32_t)(EDX));
  /* 1169e886 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169e889 push eax */
  push32((uint32_t)(EAX));
  /* 1169e88a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169e88d push ecx */
  push32((uint32_t)(ECX));
  /* 1169e88e call 0x1169e700 */
  push32(0x1169e893u); f_1169e700();
  /* 1169e893 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169e896 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 1169e899 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1169e89c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169e89f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169e8a2 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1169e8a5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1169e8aa mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 1169e8ad push edx */
  push32((uint32_t)(EDX));
  /* 1169e8ae mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1169e8b1 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1169e8b4 push ecx */
  push32((uint32_t)(ECX));
  /* 1169e8b5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169e8b8 push edx */
  push32((uint32_t)(EDX));
  /* 1169e8b9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169e8bc push eax */
  push32((uint32_t)(EAX));
  /* 1169e8bd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169e8c0 push ecx */
  push32((uint32_t)(ECX));
  /* 1169e8c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169e8c4 push edx */
  push32((uint32_t)(EDX));
  /* 1169e8c5 call 0x1169e8f0 */
  push32(0x1169e8cau); f_1169e8f0();
  /* 1169e8ca add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169e8cd mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1169e8d0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169e8d4 je 0x1169e8e3 */
  if (C.zf) goto L_1169e8e3;
  /* 1169e8d6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169e8d9 push eax */
  push32((uint32_t)(EAX));
  /* 1169e8da mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169e8dd push ecx */
  push32((uint32_t)(ECX));
  /* 1169e8de call 0x1169a180 */
  push32(0x1169e8e3u); f_1169a180();
L_1169e8e3:;
  /* 1169e8e3 mov esp, ebp */
  ESP = (EBP);
  /* 1169e8e5 pop ebp */
  EBP = (pop32());
  /* 1169e8e6 ret  */
  ESPCHK(0x1169e830u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e8f0 @ 0x1169e8f0 (172 bytes, 66 insns) */
void f_1169e8f0(void) {
  FTRACE(0x1169e8f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169e8f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1169e8f1 mov ebp, esp */
  EBP = (ESP);
  /* 1169e8f3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1169e8f5 push 0x116cb378 */
  push32((uint32_t)(0x116cb378u));
  /* 1169e8fa push 0x116a4d5c */
  push32((uint32_t)(0x116a4d5cu));
  /* 1169e8ff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1169e905 push eax */
  push32((uint32_t)(EAX));
  /* 1169e906 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1169e90d add esp, -0x20 */
  { uint32_t _a=(ESP),_b=(0xffffffe0u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169e910 push ebx */
  push32((uint32_t)(EBX));
  /* 1169e911 push esi */
  push32((uint32_t)(ESI));
  /* 1169e912 push edi */
  push32((uint32_t)(EDI));
  /* 1169e913 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1169e916 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169e919 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1169e91c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1169e923 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169e926 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1169e929 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1169e92c call 0x1169ef20 */
  push32(0x1169e931u); f_1169ef20();
  /* 1169e931 mov eax, dword ptr [eax + 0x6c] */
  EAX = (r32((uint32_t)(EAX + 0x6c)));
  /* 1169e934 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1169e937 call 0x1169ef20 */
  push32(0x1169e93cu); f_1169ef20();
  /* 1169e93c mov ecx, dword ptr [eax + 0x70] */
  ECX = (r32((uint32_t)(EAX + 0x70)));
  /* 1169e93f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1169e942 call 0x1169ef20 */
  push32(0x1169e947u); f_1169ef20();
  /* 1169e947 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169e94a mov dword ptr [eax + 0x6c], edx */
  w32((uint32_t)(EAX + 0x6c), (EDX));
  /* 1169e94d call 0x1169ef20 */
  push32(0x1169e952u); f_1169ef20();
  /* 1169e952 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169e955 mov dword ptr [eax + 0x70], ecx */
  w32((uint32_t)(EAX + 0x70), (ECX));
  /* 1169e958 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1169e95f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1169e966 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1169e969 push edx */
  push32((uint32_t)(EDX));
  /* 1169e96a mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1169e96d push eax */
  push32((uint32_t)(EAX));
  /* 1169e96e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169e971 push ecx */
  push32((uint32_t)(ECX));
  /* 1169e972 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169e975 push edx */
  push32((uint32_t)(EDX));
  /* 1169e976 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169e979 push eax */
  push32((uint32_t)(EAX));
  /* 1169e97a call 0x1169a2c0 */
  push32(0x1169e97fu); f_1169a2c0();
  /* 1169e97f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169e982 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1169e985 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1169e98c jmp 0x1169e9bf */
  goto L_1169e9bf;
  /* 1169e98e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1169e991 push ecx */
  push32((uint32_t)(ECX));
  /* 1169e992 call 0x1169ea40 */
  push32(0x1169e997u); f_1169ea40();
  /* 1169e997 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169e99a ret  */
  ESPCHK(0x1169e8f0u, _esp0);
  ESP += 4; return;
  /* 1169e99b mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1169e99e mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 1169e9a5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1169e9a7 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
  /* 1169e9ae lea edx, [ebp - 0x10] */
  EDX = ((uint32_t)(EBP + -0x10));
  /* 1169e9b1 push edx */
  push32((uint32_t)(EDX));
  /* 1169e9b2 call 0x1169a5a2 */
  push32(0x1169e9b7u); f_1169a5a2();
  /* 1169e9b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169e9ba mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1169e9bd jmp 0x1169ea2e */
  jmp_ind(0x1169ea2eu); return;
L_1169e9bf:;
  /* 1169e9bf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1169e9c6 call 0x1169e9cd */
  push32(0x1169e9cbu); f_1169e9cd();
  /* 1169e9cb jmp 0x1169ea2b */
  f_1169ea2b(); return;
}

/* FUN_1000e9cd @ 0x1169e9cd (94 bytes, 29 insns) */
void f_1169e9cd(void) {
  FTRACE(0x1169e9cdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169e9cd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169e9d0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1169e9d3 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 1169e9d6 call 0x1169ef20 */
  push32(0x1169e9dbu); f_1169ef20();
  /* 1169e9db mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1169e9de mov dword ptr [eax + 0x6c], edx */
  w32((uint32_t)(EAX + 0x6c), (EDX));
  /* 1169e9e1 call 0x1169ef20 */
  push32(0x1169e9e6u); f_1169ef20();
  /* 1169e9e6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1169e9e9 mov dword ptr [eax + 0x70], ecx */
  w32((uint32_t)(EAX + 0x70), (ECX));
  /* 1169e9ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169e9ef cmp dword ptr [edx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169e9f5 jne 0x1169ea2a */
  if (!C.zf) goto L_1169ea2a;
  /* 1169e9f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169e9fa cmp dword ptr [eax + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169e9fe jne 0x1169ea2a */
  if (!C.zf) goto L_1169ea2a;
  /* 1169ea00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169ea03 cmp dword ptr [ecx + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ea0a jne 0x1169ea2a */
  if (!C.zf) goto L_1169ea2a;
  /* 1169ea0c cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ea10 jne 0x1169ea2a */
  if (!C.zf) goto L_1169ea2a;
  /* 1169ea12 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ea16 je 0x1169ea2a */
  if (C.zf) goto L_1169ea2a;
  /* 1169ea18 call 0x1169a60a */
  push32(0x1169ea1du); f_1169a60a();
  /* 1169ea1d push eax */
  push32((uint32_t)(EAX));
  /* 1169ea1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169ea21 push edx */
  push32((uint32_t)(EDX));
  /* 1169ea22 call 0x1169ed10 */
  push32(0x1169ea27u); f_1169ed10();
  /* 1169ea27 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1169ea2a:;
  /* 1169ea2a ret  */
  ESPCHK(0x1169e9cdu, _esp0);
  ESP += 4; return;
}

